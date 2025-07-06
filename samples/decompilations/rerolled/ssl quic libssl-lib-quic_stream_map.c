void lh_QUIC_STREAM_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_532 = 0; i_532 < 2; i_532++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_QUIC_STREAM_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_533 = 0; i_533 < 2; i_533++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_QUIC_STREAM_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_534 = 0; i_534 < 2; i_534++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_QUIC_STREAM_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_535 = 0; i_535 < 2; i_535++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}undefined8 hash_stream(long param_1) {
   return *(undefined8*)( param_1 + 0x38 );
}ulong cmp_stream(long param_1, long param_2) {
   ulong uVar1;
   uVar1 = 0xffffffff;
   if (*(ulong*)( param_2 + 0x38 ) <= *(ulong*)( param_1 + 0x38 )) {
      uVar1 = ( ulong )(*(ulong*)( param_2 + 0x38 ) < *(ulong*)( param_1 + 0x38 ));
   }
   return uVar1;
}void begin_shutdown_flush_each(long param_1, long param_2) {
   int iVar1;
   if (1 < *(byte*)( param_1 + 0x101 ) - 2) {
      return;
   }
   iVar1 = ossl_quic_sstream_is_totally_acked(*(undefined8*)( param_1 + 0x70 ));
   if (( iVar1 == 0 ) && ( -1 < *(char*)( param_1 + 0x104 ) )) {
      *(byte*)( param_1 + 0x104 ) = *(byte*)( param_1 + 0x104 ) | 0x80;
      *(long*)( param_2 + 0x58 ) = *(long*)( param_2 + 0x58 ) + 1;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ossl_quic_stream_map_init(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar2 = OPENSSL_LH_new(hash_stream, cmp_stream);
   uVar3 = OPENSSL_LH_set_thunks(uVar2, 0x100000, lh_QUIC_STREAM_cfn_thunk, lh_QUIC_STREAM_doall_thunk, lh_QUIC_STREAM_doall_arg_thunk);
   uVar1 = _UNK_00100e38;
   uVar2 = __LC0;
   param_1[0xd] = param_2;
   *param_1 = uVar3;
   param_1[2] = param_1 + 1;
   param_1[1] = param_1 + 1;
   param_1[4] = param_1 + 3;
   param_1[3] = param_1 + 3;
   param_1[7] = uVar2;
   param_1[8] = uVar1;
   param_1[6] = param_1 + 5;
   param_1[5] = param_1 + 5;
   param_1[0xc] = 0;
   param_1[0xb] = 0;
   param_1[0xe] = param_3;
   param_1[0xf] = param_4;
   param_1[0x10] = param_5;
   *(undefined4*)( param_1 + 0x11 ) = param_6;
   *(undefined1(*) [16])( param_1 + 9 ) = (undefined1[16])0x0;
   return 1;
}void ossl_quic_stream_map_visit(undefined8 *param_1) {
   OPENSSL_LH_doall_arg(*param_1);
   return;
}void ossl_quic_stream_map_cleanup(undefined8 *param_1) {
   ossl_quic_stream_map_visit(param_1, release_each, param_1);
   OPENSSL_LH_free(*param_1);
   *param_1 = 0;
   return;
}long ossl_quic_stream_map_alloc(undefined8 *param_1, undefined8 param_2, byte param_3) {
   byte bVar1;
   long lVar2;
   long in_FS_OFFSET;
   bool bVar3;
   undefined1 auStack_138[56];
   undefined8 local_100;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = param_2;
   lVar2 = OPENSSL_LH_retrieve(*param_1, auStack_138);
   if (( lVar2 == 0 ) && ( lVar2 = CRYPTO_zalloc(0x108, "ssl/quic/quic_stream_map.c", 0x99) ),lVar2 != 0) {
      *(byte*)( lVar2 + 0x100 ) = param_3;
      *(undefined8*)( lVar2 + 0x38 ) = param_2;
      bVar1 = *(byte*)( param_1 + 0x11 ) & 1;
      bVar3 = ( param_3 & 1 ) == bVar1;
      *(bool*)( lVar2 + 0x101 ) = bVar3 || ( param_3 & 2 ) == 0;
      *(bool*)( lVar2 + 0x102 ) = !bVar3 || ( param_3 & 2 ) == 0;
      *(undefined8*)( lVar2 + 0x68 ) = 0xffffffffffffffff;
      *(byte*)( lVar2 + 0x103 ) = bVar1 * '\x02' | *(byte*)( lVar2 + 0x103 ) & 0xfd;
      OPENSSL_LH_insert(*param_1, lVar2);
   } else {
      lVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ossl_quic_stream_map_release(undefined8 *param_1, undefined1 (*param_2)[16]) {
   long *plVar1;
   long lVar2;
   if (param_2 != (undefined1(*) [16])0x0) {
      plVar1 = *(long**)( *param_2 + 8 );
      if (plVar1 != (long*)0x0) {
         lVar2 = *(long*)*param_2;
         *(long**)( lVar2 + 8 ) = plVar1;
         *plVar1 = lVar2;
         *param_2 = (undefined1[16])0x0;
      }
      plVar1 = *(long**)( param_2[1] + 8 );
      if (plVar1 != (long*)0x0) {
         lVar2 = *(long*)param_2[1];
         *(long**)( lVar2 + 8 ) = plVar1;
         *plVar1 = lVar2;
         param_2[1] = (undefined1[16])0x0;
      }
      plVar1 = *(long**)( param_2[2] + 8 );
      if (plVar1 != (long*)0x0) {
         lVar2 = *(long*)param_2[2];
         *(long**)( lVar2 + 8 ) = plVar1;
         *plVar1 = lVar2;
         param_2[2] = (undefined1[16])0x0;
      }
      ossl_quic_sstream_free(*(undefined8*)param_2[7]);
      *(undefined8*)param_2[7] = 0;
      ossl_quic_rstream_free(*(undefined8*)( param_2[7] + 8 ));
      *(undefined8*)( param_2[7] + 8 ) = 0;
      OPENSSL_LH_delete(*param_1, param_2);
      CRYPTO_free(param_2);
      return;
   }
   return;
}void release_each(undefined8 param_1, undefined8 param_2) {
   ossl_quic_stream_map_release(param_2, param_1);
   return;
}void ossl_quic_stream_map_get_by_id(undefined8 *param_1, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined1 auStack_118[56];
   undefined8 local_e0;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e0 = param_2;
   OPENSSL_LH_retrieve(*param_1, auStack_118);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ossl_quic_stream_map_set_rr_stepping(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x38 ) = param_2;
   *(undefined8*)( param_1 + 0x40 ) = 0;
   return;
}bool ossl_quic_stream_map_is_local_allowed_by_stream_limit(long param_1, ulong param_2, undefined4 param_3) {
   ulong uVar1;
   if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
      uVar1 = ( **(code**)( param_1 + 0x68 ) )(param_3, *(undefined8*)( param_1 + 0x70 ));
      return param_2 < uVar1;
   }
   return true;
}undefined8 ossl_quic_stream_map_ensure_send_part_id(undefined8 param_1, long param_2) {
   undefined8 uVar1;
   uVar1 = 0;
   if (*(char*)( param_2 + 0x101 ) != '\0') {
      if (*(char*)( param_2 + 0x101 ) == '\x01') {
         *(undefined1*)( param_2 + 0x101 ) = 2;
      }
      uVar1 = 1;
   }
   return uVar1;
}undefined8 ossl_quic_stream_map_notify_all_data_sent(undefined8 param_1, long param_2) {
   int iVar1;
   if (*(char*)( param_2 + 0x101 ) != '\x02') {
      return 0;
   }
   iVar1 = ossl_quic_sstream_get_final_size(*(undefined8*)( param_2 + 0x70 ), param_2 + 0x68);
   if (iVar1 != 0) {
      *(undefined1*)( param_2 + 0x101 ) = 3;
      return 1;
   }
   return 0;
}undefined8 ossl_quic_stream_map_notify_totally_acked(long param_1, long param_2) {
   if (*(char*)( param_2 + 0x101 ) != '\x03') {
      return 0;
   }
   *(undefined1*)( param_2 + 0x101 ) = 4;
   ossl_quic_sstream_free(*(undefined8*)( param_2 + 0x70 ));
   *(undefined8*)( param_2 + 0x70 ) = 0;
   if (*(char*)( param_2 + 0x104 ) < '\0') {
      *(byte*)( param_2 + 0x104 ) = *(byte*)( param_2 + 0x104 ) & 0x7f;
      *(long*)( param_1 + 0x58 ) = *(long*)( param_1 + 0x58 ) + -1;
   }
   return 1;
}void ossl_quic_stream_map_update_state(long param_1, undefined1 (*param_2)[16]) {
   undefined1(*pauVar1)[16];
   byte bVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   undefined1(*pauVar9)[16];
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[8];
   ulong local_80;
   long local_78;
   byte local_68;
   undefined1 local_58[40];
   long local_30;
   iVar4 = 1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(uint*)( param_1 + 0x88 ) == ( (byte)param_2[0x10][0] & 1 )) {
      iVar4 = ossl_quic_stream_map_is_local_allowed_by_stream_limit(param_1, *(ulong*)( param_2[3] + 8 ) >> 2, (byte)param_2[0x10][0] >> 1 & 1);
   }
   if (( param_2[0x10][1] == '\x03' ) && ( iVar5 = ossl_quic_sstream_is_totally_acked(*(undefined8*)param_2[7]) ),iVar5 != 0) {
      ossl_quic_stream_map_notify_totally_acked(param_1, param_2);
      bVar2 = param_2[0x10][4];
   } else {
      if (( *(ulong*)param_2[0x10] & 0x800000ff00 ) == 0x8000000200) {
         iVar5 = ossl_quic_sstream_is_totally_acked(*(undefined8*)param_2[7]);
         bVar2 = param_2[0x10][4];
         if (( iVar5 == 0 ) || ( -1 < (char)bVar2 )) goto LAB_001005ca;
         param_2[0x10][4] = bVar2 & 0x7f;
         *(long*)( param_1 + 0x58 ) = *(long*)( param_1 + 0x58 ) + -1;
      }
      bVar2 = param_2[0x10][4];
   }
   LAB_001005ca:if (( bVar2 & 0x40 ) == 0) {
      uVar8 = 0;
      if (( ( bVar2 & 0x20 ) != 0 ) && ( ( param_2[0x10][2] == '\0' || ( ( bVar2 & 0x10 ) != 0 ) ) )) {
         uVar8 = 0;
         if ((byte)param_2[0x10][1] < 7) {
            uVar8 = ( uint )(( 0x51UL >> ( (ulong)(byte)param_2[0x10][1] & 0x3f ) & 1 ) != 0);
         }
      }
      uVar3 = (byte)param_2[0x10][4] & 0xffffffbf | uVar8 << 6;
      param_2[0x10][4] = (char)uVar3;
      if (uVar8 == 0) {
         if (iVar4 != 0) goto LAB_00100621;
         goto LAB_00100678;
      }
      lVar6 = *(long*)( param_1 + 0x28 );
      *(long*)param_2[2] = lVar6;
      *(undefined1(**) [16])( lVar6 + 8 ) = param_2 + 2;
      *(undefined1(**) [16])( param_1 + 0x28 ) = param_2 + 2;
      *(long*)( param_2[2] + 8 ) = param_1 + 0x28;
      if (( iVar4 == 0 ) || ( uVar3 = (uint)(byte)param_2[0x10][4](param_2[0x10][4] & 0x40) != 0 )) goto LAB_00100678;
      LAB_00100621:if (param_2[0x10][2] == '\x01') {
         if (( ( uVar3 & 2 ) == 0 ) && ( iVar4 = ossl_quic_rxfc_has_cwm_changed(param_2 + 10, 0) ),iVar4 == 0) {
            uVar3 = (uint)(byte)param_2[0x10][4];
            goto LAB_00100720;
         }
         LAB_00100636:bVar2 = param_2[0x10][3];
         LAB_00100640:if (( bVar2 & 1 ) == 0) {
            lVar6 = *(long*)( param_1 + 8 );
            lVar7 = *(long*)( param_1 + 0x60 );
            *(long*)*param_2 = lVar6;
            *(undefined1(**) [16])( lVar6 + 8 ) = param_2;
            *(undefined1(**) [16])( param_1 + 8 ) = param_2;
            *(long*)( *param_2 + 8 ) = param_1 + 8;
            if (lVar7 == 0) {
               *(undefined1(**) [16])( param_1 + 0x60 ) = param_2;
            }
            param_2[0x10][3] = param_2[0x10][3] | 1;
         }
         goto LAB_001006aa;
      }
      LAB_00100720:bVar2 = param_2[0x10][3];
      if (( uVar3 & 0xc ) != 0) goto LAB_00100640;
      if (( ( bVar2 & 8 ) == 0 ) && ( (byte)param_2[0x10][1] - 1 < 3 )) {
         local_90 = 2;
         iVar4 = ossl_quic_sstream_get_stream_frame(*(undefined8*)param_2[7], 0, local_88, local_58, &local_90);
         if (iVar4 != 0) {
            lVar6 = ossl_quic_txfc_get_credit(param_2 + 8, 0);
            lVar7 = ossl_quic_txfc_get_swm(param_2 + 8);
            if (( ( ( local_68 & 2 ) != 0 ) && ( local_78 == 0 ) ) || ( local_80 < ( ulong )(lVar6 + lVar7) )) goto LAB_00100636;
         }
         goto LAB_00100678;
      }
   } else {
      LAB_00100678:bVar2 = param_2[0x10][3];
   }
   if (( bVar2 & 1 ) == 0) goto LAB_001006aa;
   pauVar1 = *(undefined1(**) [16])( *param_2 + 8 );
   if (param_2 == *(undefined1(**) [16])( param_1 + 0x60 )) {
      pauVar9 = pauVar1;
      if (( pauVar1 == (undefined1(*) [16])( param_1 + 8 ) ) && ( pauVar9 = pauVar9 == pauVar1 )) {
         pauVar9 = (undefined1(*) [16])0x0;
      } else if (param_2 == pauVar9) {
         *(undefined8*)( param_1 + 0x60 ) = 0;
         goto LAB_00100692;
      }
      *(undefined1(**) [16])( param_1 + 0x60 ) = pauVar9;
   }
   LAB_00100692:lVar6 = *(long*)*param_2;
   *(undefined1(**) [16])( lVar6 + 8 ) = pauVar1;
   *(long*)*pauVar1 = lVar6;
   param_2[0x10][3] = param_2[0x10][3] & 0xfe;
   *param_2 = (undefined1[16])0x0;
   LAB_001006aa:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}bool ossl_quic_stream_map_reset_stream_send_part(long param_1, long param_2, undefined8 param_3) {
   byte bVar1;
   int iVar2;
   undefined8 uVar3;
   bVar1 = *(byte*)( param_2 + 0x101 );
   if (bVar1 != 3) {
      if (3 < bVar1) {
         return ( byte )(bVar1 - 5) < 2;
      }
      if (bVar1 == 1) {
         iVar2 = ossl_quic_stream_map_ensure_send_part_id();
         if (iVar2 == 0) {
            return false;
         }
      } else if (bVar1 != 2) {
         return false;
      }
      uVar3 = ossl_quic_txfc_get_swm(param_2 + 0x80);
      *(undefined8*)( param_2 + 0x68 ) = uVar3;
   }
   *(undefined8*)( param_2 + 0x48 ) = param_3;
   *(ulong*)( param_2 + 0x100 ) = *(ulong*)( param_2 + 0x100 ) & 0xfffffff7ffff00ff | 0x800000500;
   ossl_quic_sstream_free(*(undefined8*)( param_2 + 0x70 ));
   *(undefined8*)( param_2 + 0x70 ) = 0;
   if (*(char*)( param_2 + 0x104 ) < '\0') {
      *(byte*)( param_2 + 0x104 ) = *(byte*)( param_2 + 0x104 ) & 0x7f;
      *(long*)( param_1 + 0x58 ) = *(long*)( param_1 + 0x58 ) + -1;
   }
   ossl_quic_stream_map_update_state(param_1, param_2);
   return true;
}bool ossl_quic_stream_map_notify_reset_stream_acked(undefined8 param_1, long param_2) {
   if (*(char*)( param_2 + 0x101 ) != '\x05') {
      return *(char*)( param_2 + 0x101 ) == '\x06';
   }
   *(undefined1*)( param_2 + 0x101 ) = 6;
   return true;
}undefined8 ossl_quic_stream_map_notify_size_known_recv_part(undefined8 param_1, long param_2) {
   if (*(char*)( param_2 + 0x102 ) != '\x01') {
      return 0;
   }
   *(undefined1*)( param_2 + 0x102 ) = 2;
   return 1;
}undefined8 ossl_quic_stream_map_notify_totally_received(undefined8 param_1, long param_2) {
   if (*(char*)( param_2 + 0x102 ) != '\x02') {
      return 0;
   }
   *(ulong*)( param_2 + 0x100 ) = *(ulong*)( param_2 + 0x100 ) & 0xfffffffbff00ffff | 0x30000;
   return 1;
}undefined8 ossl_quic_stream_map_notify_totally_read(undefined8 param_1, long param_2) {
   if (*(char*)( param_2 + 0x102 ) != '\x03') {
      return 0;
   }
   *(undefined1*)( param_2 + 0x102 ) = 4;
   ossl_quic_rstream_free(*(undefined8*)( param_2 + 0x78 ));
   *(undefined8*)( param_2 + 0x78 ) = 0;
   return 1;
}bool ossl_quic_stream_map_notify_reset_recv_part(undefined8 param_1, long param_2, undefined8 param_3, long param_4) {
   byte bVar1;
   bool bVar2;
   int iVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar1 = *(byte*)( param_2 + 0x102 );
   if (3 < bVar1) {
      bVar2 = ( byte )(bVar1 - 4) < 3;
      goto LAB_00100a80;
   }
   if (bVar1 == 0) {
      LAB_00100b2e:bVar2 = false;
   } else {
      if (bVar1 - 2 < 5) {
         iVar3 = ossl_quic_rxfc_get_final_size(param_2 + 0xa0, &local_28);
         if (( iVar3 != 0 ) && ( local_28 != param_4 )) goto LAB_00100b2e;
      }
      *(undefined8*)( param_2 + 0x58 ) = param_3;
      *(ulong*)( param_2 + 0x100 ) = *(ulong*)( param_2 + 0x100 ) & 0xfffffffbff00ffff | 0x50000;
      ossl_quic_rstream_free(*(undefined8*)( param_2 + 0x78 ));
      *(undefined8*)( param_2 + 0x78 ) = 0;
      ossl_quic_stream_map_update_state(param_1, param_2);
      bVar2 = true;
   }
   LAB_00100a80:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_quic_stream_map_notify_app_read_reset_recv_part(undefined8 param_1, long param_2) {
   if (*(char*)( param_2 + 0x102 ) != '\x05') {
      return 0;
   }
   *(undefined1*)( param_2 + 0x102 ) = 6;
   return 1;
}undefined8 ossl_quic_stream_map_schedule_stop_sending(undefined8 param_1, long param_2) {
   if (( *(byte*)( param_2 + 0x103 ) & 4 ) == 0) {
      return 0;
   }
   if (( ( *(byte*)( param_2 + 0x104 ) & 4 ) == 0 ) && ( *(byte*)( param_2 + 0x102 ) - 1 < 2 )) {
      *(byte*)( param_2 + 0x104 ) = *(byte*)( param_2 + 0x104 ) | 4;
      ossl_quic_stream_map_update_state();
      return 1;
   }
   return 1;
}undefined8 ossl_quic_stream_map_stop_sending_recv_part(undefined8 param_1, long param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (( ( *(byte*)( param_2 + 0x103 ) & 4 ) == 0 ) && ( *(byte*)( param_2 + 0x102 ) - 1 < 2 )) {
      *(undefined8*)( param_2 + 0x40 ) = param_3;
      *(byte*)( param_2 + 0x103 ) = *(byte*)( param_2 + 0x103 ) | 4;
      uVar1 = ossl_quic_stream_map_schedule_stop_sending();
      return uVar1;
   }
   return 0;
}long ossl_quic_stream_map_peek_accept_queue(long param_1) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 0x20 );
   lVar2 = lVar1;
   if (( lVar1 == param_1 + 0x18 ) && ( lVar2 = lVar1 == lVar2 )) {
      return 0;
   }
   return lVar2 + -0x10;
}void ossl_quic_stream_map_push_accept_queue(long param_1, long param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x18 );
   *(long*)( param_2 + 0x10 ) = lVar1;
   *(long*)( lVar1 + 8 ) = param_2 + 0x10;
   *(long*)( param_1 + 0x18 ) = param_2 + 0x10;
   *(long*)( param_2 + 0x18 ) = param_1 + 0x18;
   if (( *(byte*)( param_2 + 0x100 ) & 2 ) == 0) {
      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
      return;
   }
   *(long*)( param_1 + 0x50 ) = *(long*)( param_1 + 0x50 ) + 1;
   return;
}void ossl_quic_stream_map_remove_from_accept_queue(long param_1, long param_2) {
   long lVar1;
   long *plVar2;
   lVar1 = *(long*)( param_2 + 0x10 );
   plVar2 = *(long**)( param_2 + 0x18 );
   *(long**)( lVar1 + 8 ) = plVar2;
   *plVar2 = lVar1;
   *(undefined1(*) [16])( param_2 + 0x10 ) = (undefined1[16])0x0;
   if (( *(byte*)( param_2 + 0x100 ) & 2 ) == 0) {
      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + -1;
      lVar1 = *(long*)( param_1 + 0x78 );
   } else {
      *(long*)( param_1 + 0x50 ) = *(long*)( param_1 + 0x50 ) + -1;
      lVar1 = *(long*)( param_1 + 0x80 );
   }
   if (lVar1 != 0) {
      ossl_quic_rxfc_on_retire(lVar1, 1);
      return;
   }
   return;
}undefined8 ossl_quic_stream_map_get_accept_queue_len(long param_1, int param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x50 );
   if (param_2 == 0) {
      uVar1 = *(undefined8*)( param_1 + 0x48 );
   }
   return uVar1;
}long ossl_quic_stream_map_get_total_accept_queue_len(undefined8 param_1) {
   long lVar1;
   long lVar2;
   lVar1 = ossl_quic_stream_map_get_accept_queue_len(param_1, 0);
   lVar2 = ossl_quic_stream_map_get_accept_queue_len(param_1, 1);
   return lVar2 + lVar1;
}void ossl_quic_stream_map_gc(void) {
   return;
}void ossl_quic_stream_map_begin_shutdown_flush(long param_1) {
   *(undefined8*)( param_1 + 0x58 ) = 0;
   ossl_quic_stream_map_visit(param_1, begin_shutdown_flush_each, param_1);
   return;
}bool ossl_quic_stream_map_is_shutdown_flush_finished(long param_1) {
   return *(long*)( param_1 + 0x58 ) == 0;
}void ossl_quic_stream_iter_init(long *param_1, long param_2, int param_3) {
   ulong uVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)( param_2 + 0x60 );
   param_1[2] = lVar2;
   *param_1 = param_2;
   param_1[1] = lVar2;
   if (( ( param_3 != 0 ) && ( lVar2 != 0 ) ) && ( uVar1 = *(long*)( param_2 + 0x40 ) + 1 ),*(ulong*)( param_2 + 0x40 ) = uVar1,*(ulong*)( param_2 + 0x38 ) <= uVar1) {
      lVar2 = *(long*)( lVar2 + 8 );
      *(undefined8*)( param_2 + 0x40 ) = 0;
      lVar3 = lVar2;
      if (lVar2 == param_2 + 8) {
         lVar3 = 0;
         if (lVar2 != *(long*)( lVar2 + 8 )) {
            lVar3 = *(long*)( lVar2 + 8 );
         }
      }
      *(long*)( param_2 + 0x60 ) = lVar3;
   }
   return;
}void ossl_quic_stream_iter_next(long *param_1) {
   long lVar1;
   long lVar2;
   if (param_1[2] != 0) {
      lVar1 = *(long*)( param_1[2] + 8 );
      lVar2 = lVar1;
      if (lVar1 == *param_1 + 8) {
         lVar2 = 0;
         if (lVar1 != *(long*)( lVar1 + 8 )) {
            lVar2 = *(long*)( lVar1 + 8 );
         }
      }
      param_1[2] = lVar2;
      if (param_1[1] == lVar2) {
         param_1[2] = 0;
         return;
      }
   }
   return;
}

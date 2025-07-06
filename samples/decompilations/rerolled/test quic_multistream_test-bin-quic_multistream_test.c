void lh_STREAM_INFO_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1650 = 0; i_1650 < 2; i_1650++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_STREAM_INFO_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1651 = 0; i_1651 < 2; i_1651++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_STREAM_INFO_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1652 = 0; i_1652 < 2; i_1652++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_STREAM_INFO_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1653 = 0; i_1653 < 2; i_1653++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void helper_packet_plain_listener(void) {
   long in_R8;
   for (int i_1654 = 0; i_1654 < 2; i_1654++) {
      /* WARNING: Could not recover jumptable at 0x00100047. Too many branches */
   }
   ( **(code**)( in_R8 + 0xd8 ) )(in_R8);
   return;
}void helper_handshake_listener(void) {
   long in_RCX;
   for (int i_1655 = 0; i_1655 < 2; i_1655++) {
      /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
   }
   ( **(code**)( in_RCX + 0xe0 ) )(in_RCX);
   return;
}void helper_datagram_listener(void) {
   long in_RCX;
   for (int i_1656 = 0; i_1656 < 2; i_1656++) {
      /* WARNING: Could not recover jumptable at 0x00100067. Too many branches */
   }
   ( **(code**)( in_RCX + 0xe8 ) )(in_RCX);
   return;
}undefined8 script_22_inject_plain(long param_1, long param_2) {
   if (*(long*)( param_1 + 0xf0 ) != 0) {
      *(byte*)( param_2 + 2 ) = *(byte*)( param_2 + 2 ) & 0xcf | 0x10;
   }
   return 1;
}undefined8 script_54_inject_handshake(undefined8 param_1, ulong *param_2, ulong param_3) {
   byte *pbVar1;
   ulong *puVar2;
   ulong *puVar3;
   ulong uVar4;
   ulong uVar5;
   if (param_3 != 0) {
      if (param_3 - 1 < 0xf) {
         uVar5 = 0;
         puVar2 = param_2;
      } else {
         uVar5 = param_3 & 0xfffffffffffffff0;
         puVar2 = param_2;
         do {
            puVar3 = puVar2 + 2;
            *(uint*)puVar2 = ( uint ) * puVar2 ^ 0xffffffff;
            *(uint*)( (long)puVar2 + 4 ) = *(uint*)( (long)puVar2 + 4 ) ^ 0xffffffff;
            *(uint*)( puVar2 + 1 ) = (uint)puVar2[1] ^ 0xffffffff;
            *(uint*)( (long)puVar2 + 0xc ) = *(uint*)( (long)puVar2 + 0xc ) ^ 0xffffffff;
            puVar2 = puVar3;
         } while ( (ulong*)( uVar5 + (long)param_2 ) != puVar3 );
         puVar2 = (ulong*)( uVar5 + (long)param_2 );
         if (param_3 == uVar5) {
            return 1;
         }
      }
      uVar4 = param_3 - uVar5;
      if (6 < uVar4 - 1) {
         *puVar2 = *puVar2 ^ _LC0;
         uVar5 = uVar5 + ( uVar4 & 0xfffffffffffffff8 );
         if (( uVar4 & 7 ) == 0) {
            return 1;
         }
         puVar2 = (ulong*)( uVar5 + (long)param_2 );
      }
      *(byte*)puVar2 = ~(byte) * puVar2;
      if (uVar5 + 1 < param_3) {
         pbVar1 = (byte*)( (long)param_2 + uVar5 + 1 );
         *pbVar1 = ~*pbVar1;
         if (uVar5 + 2 < param_3) {
            pbVar1 = (byte*)( (long)param_2 + uVar5 + 2 );
            *pbVar1 = ~*pbVar1;
            if (uVar5 + 3 < param_3) {
               pbVar1 = (byte*)( (long)param_2 + uVar5 + 3 );
               *pbVar1 = ~*pbVar1;
               if (uVar5 + 4 < param_3) {
                  pbVar1 = (byte*)( (long)param_2 + uVar5 + 4 );
                  *pbVar1 = ~*pbVar1;
                  if (uVar5 + 5 < param_3) {
                     pbVar1 = (byte*)( (long)param_2 + uVar5 + 5 );
                     *pbVar1 = ~*pbVar1;
                     if (uVar5 + 6 < param_3) {
                        pbVar1 = (byte*)( (long)param_2 + uVar5 + 6 );
                        *pbVar1 = ~*pbVar1;
                     }
                  }
               }
            }
         }
      }
   }
   return 1;
}undefined8 on_new_session(void) {
   new_session_count = new_session_count + 1;
   return 0;
}undefined8 reenable_test_event_handling(undefined8 param_1, long param_2) {
   *(undefined4*)( param_2 + 0x20 ) = 0;
   return 1;
}void set_event_handling_mode_conn(long param_1, long param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x70 );
   *(undefined4*)( param_2 + 0x20 ) = 1;
   SSL_set_value_uint(uVar1, 0, 6, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
   return;
}void stream_info_cmp(undefined8 *param_1, undefined8 *param_2) {
   strcmp((char*)*param_1, (char*)*param_2);
   return;
}undefined8 script_28_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined1 local_98[64];
   undefined1 local_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_00100220:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_98, local_58, 0x20, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xc60, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_98, *(undefined8*)( param_1 + 0xf8 ));
         iVar1 = test_true("test/quic_multistream_test.c", 0xc64, "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_98, *(long*)( param_1 + 0xf0 ) + -1);
            iVar1 = test_true("test/quic_multistream_test.c", 0xc65, "WPACKET_quic_write_vlint(&wpkt, h->inject_word0 - 1)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_quic_write_vlint(local_98, 0x7b);
               iVar1 = test_true("test/quic_multistream_test.c", 0xc67, "WPACKET_quic_write_vlint(&wpkt, 123)", iVar1 != 0);
               if (iVar1 != 0) {
                  if (*(long*)( param_1 + 0xf8 ) == 4) {
                     iVar1 = WPACKET_quic_write_vlint(local_98, 5);
                     iVar1 = test_true("test/quic_multistream_test.c", 0xc69, "WPACKET_quic_write_vlint(&wpkt, 5)", iVar1 != 0);
                     if (iVar1 == 0) goto LAB_00100300;
                  }
                  iVar1 = WPACKET_get_total_written(local_98, &local_a0);
                  iVar1 = test_true("test/quic_multistream_test.c", 0xc6c, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
                  if (( iVar1 != 0 ) && ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_58, local_a0) ),iVar1 != 0) {
                     WPACKET_finish(local_98);
                     goto LAB_00100220;
                  }
               }
            }
         }
         LAB_00100300:WPACKET_cleanup(local_98);
      }
      uVar2 = 0;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 script_66_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined1 local_b8[64];
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_00100413:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_b8, local_78, 0x40, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0x1280, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_b8, *(undefined8*)( param_1 + 0xf8 ));
         iVar1 = test_true("test/quic_multistream_test.c", 0x1284, "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)", iVar1 != 0);
         if (iVar1 != 0) {
            if (*(long*)( param_1 + 0xf8 ) == 0x11) {
               iVar1 = WPACKET_quic_write_vlint(local_b8, *(long*)( param_1 + 0xf0 ) + -1);
               iVar1 = test_true("test/quic_multistream_test.c", 0x1288, "WPACKET_quic_write_vlint(&wpkt, h->inject_word0 - 1)", iVar1 != 0);
               if (iVar1 == 0) goto LAB_001004fd;
            }
            iVar1 = WPACKET_quic_write_vlint(local_b8, 0x3fffffffffffffff);
            iVar1 = test_true("test/quic_multistream_test.c", 0x128c, "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_VLINT_MAX)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_get_total_written(local_b8, &local_c0);
               iVar1 = test_true("test/quic_multistream_test.c", 0x128f, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
               if (( iVar1 != 0 ) && ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_78, local_c0) ),iVar1 != 0) {
                  WPACKET_finish(local_b8);
                  goto LAB_00100413;
               }
            }
         }
         LAB_001004fd:WPACKET_cleanup(local_b8);
      }
      uVar2 = 0;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 script_65_inject_plain(long param_1) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined1 local_b8[64];
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0xf0 ) == 0) {
      LAB_001005e0:uVar2 = 1;
   } else {
      *(long*)( param_1 + 0xf0 ) = *(long*)( param_1 + 0xf0 ) + -1;
      iVar1 = WPACKET_init_static_len(local_b8, local_78, 0x40, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0x1249, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_b8, 6);
         iVar1 = test_true("test/quic_multistream_test.c", 0x124d, "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_CRYPTO)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_b8, 0);
            iVar1 = test_true("test/quic_multistream_test.c", 0x124e, "WPACKET_quic_write_vlint(&wpkt, 0)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_quic_write_vlint(local_b8, 0);
               iVar1 = test_true("test/quic_multistream_test.c", 0x124f, "WPACKET_quic_write_vlint(&wpkt, 0)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = WPACKET_get_total_written(local_b8, &local_c0);
                  iVar1 = test_true("test/quic_multistream_test.c", 0x1252, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_78, local_c0);
                     if (iVar1 != 0) {
                        WPACKET_finish(local_b8);
                        goto LAB_001005e0;
                     }
                  }
               }
            }
         }
         WPACKET_cleanup(local_b8);
      }
      uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_61_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined1 local_98[64];
   undefined1 local_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_00100780:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_98, local_58, 0x20, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0x11cc, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_98, *(undefined8*)( param_1 + 0xf0 ));
         iVar1 = test_true("test/quic_multistream_test.c", 0x11d0, "WPACKET_quic_write_vlint(&wpkt, h->inject_word0)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_98, *(undefined8*)( param_1 + 0xf8 ));
            iVar1 = test_true("test/quic_multistream_test.c", 0x11d1, "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_quic_write_vlint(local_98, 0x7b);
               iVar1 = test_true("test/quic_multistream_test.c", 0x11d3, "WPACKET_quic_write_vlint(&wpkt, 123)", iVar1 != 0);
               if (iVar1 != 0) {
                  if (*(long*)( param_1 + 0xf0 ) == 4) {
                     iVar1 = WPACKET_quic_write_vlint(local_98, 0);
                     iVar1 = test_true("test/quic_multistream_test.c", 0x11d5, "WPACKET_quic_write_vlint(&wpkt, 0)", iVar1 != 0);
                     if (iVar1 == 0) goto LAB_0010085c;
                  }
                  iVar1 = WPACKET_get_total_written(local_98, &local_a0);
                  iVar1 = test_true("test/quic_multistream_test.c", 0x11d8, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
                  if (( iVar1 != 0 ) && ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_58, local_a0) ),iVar1 != 0) {
                     WPACKET_finish(local_98);
                     goto LAB_00100780;
                  }
               }
            }
         }
         LAB_0010085c:WPACKET_cleanup(local_98);
      }
      uVar2 = 0;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 script_52_inject_plain(long param_1, char *param_2) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined1 local_b8[64];
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_00100965:uVar3 = 1;
   } else {
      *(long*)( param_1 + 0xf0 ) = *(long*)( param_1 + 0xf0 ) + -1;
      lVar1 = *(long*)( param_1 + 0xf8 );
      iVar2 = WPACKET_init_static_len(local_b8, local_78, 0x40, 0);
      iVar2 = test_true("test/quic_multistream_test.c", 0x104e, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = WPACKET_quic_write_vlint(local_b8, lVar1);
         iVar2 = test_true("test/quic_multistream_test.c", 0x1052, "WPACKET_quic_write_vlint(&wpkt, type)", iVar2 != 0);
         if (iVar2 != 0) {
            if (lVar1 == 0x15) {
               iVar2 = WPACKET_quic_write_vlint(local_b8, 0);
               iVar2 = test_true("test/quic_multistream_test.c", 0x1056, "WPACKET_quic_write_vlint(&wpkt, C_BIDI_ID(0))", iVar2 != 0);
               if (iVar2 == 0) goto LAB_00100a50;
            }
            iVar2 = WPACKET_quic_write_vlint(local_b8, 0xffffff);
            iVar2 = test_true("test/quic_multistream_test.c", 0x1059, "WPACKET_quic_write_vlint(&wpkt, 0xFFFFFF)", iVar2 != 0);
            if (iVar2 != 0) {
               iVar2 = WPACKET_get_total_written(local_b8, &local_c0);
               iVar2 = test_true("test/quic_multistream_test.c", 0x105c, "WPACKET_get_total_written(&wpkt, &written)", iVar2 != 0);
               if (( iVar2 != 0 ) && ( iVar2 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_78, local_c0) ),iVar2 != 0) {
                  WPACKET_finish(local_b8);
                  goto LAB_00100965;
               }
            }
         }
         LAB_00100a50:WPACKET_cleanup(local_b8);
      }
      uVar3 = 0;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}undefined8 script_46_inject_plain(long param_1) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a0;
   undefined1 local_98[64];
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0xf0 ) == 0) {
      LAB_00100b22:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_98, local_58, 0x10, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xf7b, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         uVar3 = *(long*)( param_1 + 0xf0 ) - 1;
         if (uVar3 < 5) {
            lVar4 = *(long*)( CSWTCH_129 + uVar3 * 8 );
            uVar2 = *(undefined8*)( CSWTCH_130 + uVar3 * 8 );
            local_d0 = *(undefined8*)( CSWTCH_131 + uVar3 * 8 );
            local_d8 = *(long*)( CSWTCH_132 + uVar3 * 8 );
            local_c8 = *(undefined8*)( CSWTCH_133 + uVar3 * 8 );
            local_c0 = *(undefined8*)( CSWTCH_134 + uVar3 * 8 );
            local_b8 = *(undefined8*)( CSWTCH_135 + uVar3 * 8 );
            local_b0 = *(undefined8*)( CSWTCH_136 + uVar3 * 8 );
         } else {
            local_b0 = 0;
            uVar2 = 0;
            lVar4 = 2;
            local_b8 = 0;
            local_c0 = 0;
            local_c8 = 0;
            local_d8 = 0;
            local_d0 = 0;
         }
         *(undefined8*)( param_1 + 0xf0 ) = 0;
         iVar1 = WPACKET_quic_write_vlint(local_98, lVar4);
         iVar1 = test_true("test/quic_multistream_test.c", 0xfa9, "WPACKET_quic_write_vlint(&wpkt, type)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_98, uVar2);
            iVar1 = test_true("test/quic_multistream_test.c", 0xfaa, "WPACKET_quic_write_vlint(&wpkt, largest_acked)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_quic_write_vlint(local_98, 0);
               iVar1 = test_true("test/quic_multistream_test.c", 0xfab, "WPACKET_quic_write_vlint(&wpkt, 0)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = WPACKET_quic_write_vlint(local_98, local_d8);
                  iVar1 = test_true("test/quic_multistream_test.c", 0xfac, "WPACKET_quic_write_vlint(&wpkt, range_count)", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = WPACKET_quic_write_vlint(local_98, local_d0);
                     iVar1 = test_true("test/quic_multistream_test.c", 0xfad, "WPACKET_quic_write_vlint(&wpkt, first_range)", iVar1 != 0);
                     if (iVar1 != 0) {
                        if (local_d8 == 0) {
                           LAB_00100d7f:if (lVar4 == 3) {
                              iVar1 = WPACKET_quic_write_vlint(local_98, 0);
                              iVar1 = test_true("test/quic_multistream_test.c", 0xfb6, "WPACKET_quic_write_vlint(&wpkt, ect0)", iVar1 != 0);
                              if (iVar1 != 0) {
                                 iVar1 = WPACKET_quic_write_vlint(local_98, local_b8);
                                 iVar1 = test_true("test/quic_multistream_test.c", 0xfb7, "WPACKET_quic_write_vlint(&wpkt, ect1)", iVar1 != 0);
                                 if (iVar1 != 0) {
                                    iVar1 = WPACKET_quic_write_vlint(local_98, local_b0);
                                    iVar1 = test_true("test/quic_multistream_test.c", 0xfb8, "WPACKET_quic_write_vlint(&wpkt, ecnce)", iVar1 != 0);
                                    if (iVar1 != 0) goto LAB_00100d89;
                                 }
                              }
                           } else {
                              LAB_00100d89:iVar1 = WPACKET_get_total_written(local_98, &local_a0);
                              iVar1 = test_true("test/quic_multistream_test.c", 0xfbb, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
                              if (( iVar1 != 0 ) && ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_58, local_a0) ),iVar1 != 0) {
                                 WPACKET_finish(local_98);
                                 goto LAB_00100b22;
                              }
                           }
                        } else {
                           iVar1 = WPACKET_quic_write_vlint(local_98, local_c8);
                           iVar1 = test_true("test/quic_multistream_test.c", 0xfb1, "WPACKET_quic_write_vlint(&wpkt, agap)", iVar1 != 0);
                           if (iVar1 != 0) {
                              iVar1 = WPACKET_quic_write_vlint(local_98, local_c0);
                              iVar1 = test_true("test/quic_multistream_test.c", 0xfb2, "WPACKET_quic_write_vlint(&wpkt, alen)", iVar1 != 0);
                              if (iVar1 != 0) goto LAB_00100d7f;
                           }
                        }
                     }
                  }
               }
            }
         }
         WPACKET_cleanup(local_98);
      }
      uVar2 = 0;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 script_24_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[64];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_00100f0d:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_88, local_48, 0x10, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xbf2, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_88, *(undefined8*)( param_1 + 0xf8 ));
         iVar1 = test_true("test/quic_multistream_test.c", 0xbf6, "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_88, 0x1000000000000001);
            iVar1 = test_true("test/quic_multistream_test.c", 0xbf7, "WPACKET_quic_write_vlint(&wpkt, (((uint64_t)1) << 60) + 1)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_get_total_written(local_88, &local_90);
               iVar1 = test_true("test/quic_multistream_test.c", 0xbfa, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_48, local_90);
                  if (iVar1 != 0) {
                     WPACKET_finish(local_88);
                     goto LAB_00100f0d;
                  }
               }
            }
         }
         WPACKET_cleanup(local_88);
      }
      uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_23_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[64];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_0010107d:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_88, local_48, 0x10, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xbbd, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_88, 7);
         iVar1 = test_true("test/quic_multistream_test.c", 0xbc1, "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_NEW_TOKEN)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_88, 0);
            iVar1 = test_true("test/quic_multistream_test.c", 0xbc2, "WPACKET_quic_write_vlint(&wpkt, 0)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_get_total_written(local_88, &local_90);
               iVar1 = test_true("test/quic_multistream_test.c", 0xbc5, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_48, local_90);
                  if (iVar1 != 0) {
                     WPACKET_finish(local_88);
                     goto LAB_0010107d;
                  }
               }
            }
         }
         WPACKET_cleanup(local_88);
      }
      uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool check_avail_streams(long param_1, long param_2) {
   ulong uVar1;
   int iVar2;
   char *pcVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   uVar1 = *(ulong*)( *(long*)( param_2 + 0x18 ) + 0x10 );
   if (uVar1 == 2) {
      iVar2 = SSL_get_value_uint(*(undefined8*)( param_1 + 0x70 ), 0, 3, &local_28);
      uVar4 = 0x159c;
      pcVar3 = "SSL_get_quic_stream_uni_local_avail(h->c_conn, &v)";
      bVar5 = iVar2 != 0;
      LAB_0010121c:iVar2 = test_true("test/quic_multistream_test.c", uVar4, pcVar3, bVar5);
      if (iVar2 != 0) {
         iVar2 = test_uint64_t_eq("test/quic_multistream_test.c", 0x15a7, &_LC27, "hl->check_op->arg2", local_28, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
         bVar5 = iVar2 != 0;
         goto LAB_00101262;
      }
   } else {
      if (uVar1 < 3) {
         if (uVar1 == 0) {
            iVar2 = SSL_get_value_uint(*(undefined8*)( param_1 + 0x70 ), 0, 1, &local_28);
            uVar4 = 0x1594;
            pcVar3 = "SSL_get_quic_stream_bidi_local_avail(h->c_conn, &v)";
            bVar5 = iVar2 != 0;
         } else {
            iVar2 = SSL_get_value_uint(*(undefined8*)( param_1 + 0x70 ), 0, 2, &local_28);
            uVar4 = 0x1598;
            pcVar3 = "SSL_get_quic_stream_bidi_remote_avail(h->c_conn, &v)";
            bVar5 = iVar2 != 0;
         }
         goto LAB_0010121c;
      }
      if (uVar1 == 3) {
         iVar2 = SSL_get_value_uint(*(undefined8*)( param_1 + 0x70 ), 0, 4, &local_28);
         uVar4 = 0x15a0;
         pcVar3 = "SSL_get_quic_stream_uni_remote_avail(h->c_conn, &v)";
         bVar5 = iVar2 != 0;
         goto LAB_0010121c;
      }
   }
   bVar5 = false;
   LAB_00101262:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong check_idle_timeout(long param_1, long param_2) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   iVar1 = SSL_get_value_uint(*(undefined8*)( param_1 + 0x70 ), *(undefined4*)( *(long*)( param_2 + 0x18 ) + 0x10 ), 5, &local_28);
   uVar2 = test_true("test/quic_multistream_test.c", 0x1540, "SSL_get_value_uint(h->c_conn, hl->check_op->arg1, SSL_VALUE_QUIC_IDLE_TIMEOUT, &v)", iVar1 != 0);
   if ((int)uVar2 != 0) {
      iVar1 = test_uint64_t_eq("test/quic_multistream_test.c", 0x1545, &_LC27, "hl->check_op->arg2", local_28, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
      uVar2 = ( ulong )(iVar1 != 0);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool script_72_check(long param_1) {
   int iVar1;
   iVar1 = test_uint64_t_ge("test/quic_multistream_test.c", 0x135c, "h->fail_count", &_LC32, *(undefined8*)( param_1 + 0x110 ), 0x32);
   return iVar1 != 0;
}bool cannot_change_idle_timeout(long param_1) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   iVar1 = SSL_get_value_uint(*(undefined8*)( param_1 + 0x70 ), 1, 5, &local_28);
   iVar1 = test_true("test/quic_multistream_test.c", 0x156e, "SSL_get_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, &v)", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_eq("test/quic_multistream_test.c", 0x1573, &_LC27, "30000", local_28, 30000);
      if (iVar1 != 0) {
         iVar1 = SSL_set_value_uint(*(undefined8*)( param_1 + 0x70 ), 1, 5, 5000);
         iVar1 = test_false("test/quic_multistream_test.c", 0x1576, "SSL_set_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, 5000)", iVar1 != 0);
         bVar2 = iVar1 != 0;
         goto LAB_00101493;
      }
   }
   bVar2 = false;
   LAB_00101493:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool modify_idle_timeout(long param_1, long param_2) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   iVar1 = SSL_set_value_uint(*(undefined8*)( param_1 + 0x70 ), 1, 5, 0x4000000000000000);
   iVar1 = test_false("test/quic_multistream_test.c", 0x1526, "SSL_set_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, (1ULL << 62))", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = SSL_set_value_uint(*(undefined8*)( param_1 + 0x70 ), 1, 5, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
      iVar1 = test_true("test/quic_multistream_test.c", 0x152c, "SSL_set_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, hl->check_op->arg2)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = SSL_get_value_uint(*(undefined8*)( param_1 + 0x70 ), 1, 5, &local_28);
         iVar1 = test_true("test/quic_multistream_test.c", 0x1531, "SSL_get_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, &v)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = test_uint64_t_eq("test/quic_multistream_test.c", 0x1536, &_LC27, "hl->check_op->arg2", local_28, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
            bVar2 = iVar1 != 0;
            goto LAB_0010158f;
         }
      }
   }
   bVar2 = false;
   LAB_0010158f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool check_got_session_ticket(void) {
   int iVar1;
   iVar1 = test_size_t_gt("test/quic_multistream_test.c", 0x147b, "new_session_count", &_LC39, new_session_count, 0);
   return iVar1 != 0;
}undefined8 setup_session(long param_1) {
   SSL_CTX_ctrl(*(SSL_CTX**)( param_1 + 0x68 ), 0x2c, 3, (void*)0x0);
   SSL_CTX_sess_set_new_cb(*(SSL_CTX**)( param_1 + 0x68 ), on_new_session);
   return 1;
}bool script_76_check(long param_1) {
   int iVar1;
   iVar1 = SSL_shutdown_ex(*(undefined8*)( param_1 + 0x70 ), 0xc, 0, 0);
   iVar1 = test_false("test/quic_multistream_test.c", 0x142c, "SSL_shutdown_ex(h->c_conn, SSL_SHUTDOWN_FLAG_WAIT_PEER | SSL_SHUTDOWN_FLAG_NO_BLOCK, NULL, 0)", iVar1 != 0);
   return iVar1 != 0;
}undefined8 script_32_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_d0;
   undefined1 local_c8[64];
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == '\x05') {
      switch (*(undefined8*)( param_1 + 0xf8 )) {
         case 0:
      goto switchD_001017b2_caseD_0;
         case 1:
      lVar3 = 0;
      uVar2 = 0;
      break;
         case 2:
      uVar2 = 0x3fffffffffffffff;
      lVar3 = 5;
      break;
         case 3:
      lVar3 = 5;
      uVar2 = 0x40000000;
      break;
         case 4:
      lVar3 = 1;
      uVar2 = 0;
      break;
         default:
      goto switchD_001017b2_default;
      }
      iVar1 = WPACKET_init_static_len(local_c8, local_88, 0x40, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xcfe, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 == 0) {
         switchD_001017b2_default:uVar2 = 0;
         goto LAB_00101762;
      }
      iVar1 = WPACKET_quic_write_vlint(local_c8, 0xe);
      iVar1 = test_true("test/quic_multistream_test.c", 0xd02, "WPACKET_quic_write_vlint(&wpkt, type)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_c8, *(long*)( param_1 + 0xf0 ) + -1);
         iVar1 = test_true("test/quic_multistream_test.c", 0xd03, "WPACKET_quic_write_vlint(&wpkt, h->inject_word0 - 1)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_c8, uVar2);
            iVar1 = test_true("test/quic_multistream_test.c", 0xd05, "WPACKET_quic_write_vlint(&wpkt, offset)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_quic_write_vlint(local_c8, lVar3);
               iVar1 = test_true("test/quic_multistream_test.c", 0xd06, "WPACKET_quic_write_vlint(&wpkt, flen)", iVar1 != 0);
               if (iVar1 != 0) {
                  if (lVar3 != 0) {
                     lVar4 = 0;
                     do {
                        iVar1 = WPACKET_put_bytes__(local_c8, 0x42, 1);
                        iVar1 = test_true("test/quic_multistream_test.c", 0xd0a, "WPACKET_put_bytes_u8(&wpkt, 0x42)", iVar1 != 0);
                        if (iVar1 == 0) goto LAB_00101876;
                        lVar4 = lVar4 + 1;
                     } while ( lVar3 != lVar4 );
                  }
                  iVar1 = WPACKET_get_total_written(local_c8, &local_d0);
                  iVar1 = test_true("test/quic_multistream_test.c", 0xd0d, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
                  if (( iVar1 != 0 ) && ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_88, local_d0) ),iVar1 != 0) {
                     WPACKET_finish(local_c8);
                     goto switchD_001017b2_caseD_0;
                  }
               }
            }
         }
      }
      LAB_00101876:WPACKET_cleanup(local_c8);
      uVar2 = 0;
   } else {
      switchD_001017b2_caseD_0:uVar2 = 1;
   }
   LAB_00101762:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 script_58_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined1 local_b8[64];
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_00101a03:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_b8, local_78, 0x40, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0x1151, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         if (*(long*)( param_1 + 0xf0 ) == 1) {
            iVar1 = WPACKET_quic_write_vlint(local_b8, 0x1e);
            iVar1 = test_true("test/quic_multistream_test.c", 0x1156, "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_HANDSHAKE_DONE)", iVar1 != 0);
            joined_r0x00101b82:if (iVar1 != 0) {
               iVar1 = WPACKET_get_total_written(local_b8, &local_c0);
               iVar1 = test_true("test/quic_multistream_test.c", 0x115f, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
               if (( iVar1 != 0 ) && ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_78, local_c0) ),iVar1 != 0) {
                  WPACKET_finish(local_b8);
                  goto LAB_00101a03;
               }
            }
         } else {
            iVar1 = WPACKET_put_bytes__(local_b8, 0x40, 1);
            iVar1 = test_true("test/quic_multistream_test.c", 0x115a, "WPACKET_put_bytes_u8(&wpkt, 0x40)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_put_bytes__(local_b8, 0x1e, 1);
               iVar1 = test_true("test/quic_multistream_test.c", 0x115b, "WPACKET_put_bytes_u8(&wpkt, 0x1E)", iVar1 != 0);
               goto joined_r0x00101b82;
            }
         }
         WPACKET_cleanup(local_b8);
      }
      uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_39_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   undefined8 uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_f0;
   undefined1 local_e8[64];
   byte local_a8[2];
   undefined1 auStack_a6[11];
   undefined3 uStack_9b;
   undefined5 uStack_98;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8[0] = 0;
   local_a8[1] = 0;
   auStack_a6 = SUB1611((undefined1[16])0x0, 2);
   uStack_9b = 0;
   uStack_98 = 0;
   uVar2 = ossl_quic_tserver_get_channel(*(undefined8*)( param_1 + 0x40 ));
   if (*param_2 != '\x05') goto switchD_00101c43_caseD_0;
   switch (*(undefined8*)( param_1 + 0xf8 )) {
      case 0:
    goto switchD_00101c43_caseD_0;
      case 1:
    local_a8[0] = 0;
      default:
switchD_00101c43_default:
    uVar5 = 0;
    uVar3 = 0;
    break;
      case 2:
    local_a8[0] = 0x15;
    goto switchD_00101c43_default;
      case 3:
    uVar5 = 1;
    uVar3 = 0;
    local_a8[0] = 1;
    local_a8[1] = 0x55;
    break;
      case 4:
    uVar5 = 2;
    uVar3 = 2;
    ossl_quic_channel_get_diag_local_cid(uVar2,local_a8);
    break;
      case 5:
    uVar5 = 1;
    uVar3 = 1;
    local_a8[0] = 8;
    local_a8[1] = 0x55;
   }
   iVar1 = WPACKET_init_static_len(local_e8, local_88, 0x40, 0);
   iVar1 = test_true("test/quic_multistream_test.c", 0xde4, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_e8, 0x18);
      iVar1 = test_true("test/quic_multistream_test.c", 0xde8, "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_NEW_CONN_ID)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_e8, uVar3);
         iVar1 = test_true("test/quic_multistream_test.c", 0xde9, "WPACKET_quic_write_vlint(&wpkt, seq_no)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_e8, uVar5);
            iVar1 = test_true("test/quic_multistream_test.c", 0xdea, "WPACKET_quic_write_vlint(&wpkt, retire_prior_to)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_put_bytes__(local_e8, local_a8[0], 1);
               iVar1 = test_true("test/quic_multistream_test.c", 0xdeb, "WPACKET_put_bytes_u8(&wpkt, new_cid.id_len)", iVar1 != 0);
               if (iVar1 != 0) {
                  uVar6 = 0;
                  if (local_a8[0] != 0) {
                     do {
                        iVar1 = WPACKET_put_bytes__(local_e8, auStack_a6[uVar6 - 1], 1);
                        iVar1 = test_true("test/quic_multistream_test.c", 0xdef, "WPACKET_put_bytes_u8(&wpkt, new_cid.id[i])", iVar1 != 0);
                        if (iVar1 == 0) goto LAB_00101d30;
                        uVar6 = uVar6 + 1;
                        if (local_a8[0] <= uVar6) goto LAB_00101e90;
                     } while ( uVar6 != 0x14 );
                     if (0x14 < (ulong)local_a8[0]) {
                        uVar6 = 0x14;
                        do {
                           iVar1 = WPACKET_put_bytes__(local_e8, 0x55, 1);
                           iVar1 = test_true("test/quic_multistream_test.c", 0xdf3, "WPACKET_put_bytes_u8(&wpkt, 0x55)", iVar1 != 0);
                           if (iVar1 == 0) goto LAB_00101d30;
                           uVar6 = uVar6 + 1;
                        } while ( uVar6 < local_a8[0] );
                     }
                  }
                  LAB_00101e90:lVar4 = 0x10;
                  do {
                     iVar1 = WPACKET_put_bytes__(local_e8, 0x42, 1);
                     iVar1 = test_true("test/quic_multistream_test.c", 0xdf7, "WPACKET_put_bytes_u8(&wpkt, 0x42)", iVar1 != 0);
                     if (iVar1 == 0) goto LAB_00101d30;
                     lVar4 = lVar4 + -1;
                  } while ( lVar4 != 0 );
                  iVar1 = WPACKET_get_total_written(local_e8, &local_f0);
                  iVar1 = test_true("test/quic_multistream_test.c", 0xdfa, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
                  if (( iVar1 != 0 ) && ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_88, local_f0) ),iVar1 != 0) {
                     WPACKET_finish(local_e8);
                     switchD_00101c43_caseD_0:uVar2 = 1;
                     goto LAB_00101bf4;
                  }
               }
            }
         }
      }
      LAB_00101d30:WPACKET_cleanup(local_e8);
   }
   uVar2 = 0;
   LAB_00101bf4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}undefined8 script_41_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[64];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_00101f6d:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_88, local_48, 0x10, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xe52, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_88, *(undefined8*)( param_1 + 0xf8 ));
         iVar1 = test_true("test/quic_multistream_test.c", 0xe56, "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_put_bytes__(local_88, 0xbdeb9451169c83aa, 8);
            iVar1 = test_true("test/quic_multistream_test.c", 0xe57, "WPACKET_put_bytes_u64(&wpkt, path_challenge)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_get_total_written(local_88, &local_90);
               iVar1 = test_true("test/quic_multistream_test.c", 0xe5a, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = test_size_t_eq("test/quic_multistream_test.c", 0xe5b, "written", &_LC58, local_90, 9);
                  if (iVar1 != 0) {
                     iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_48, local_90);
                     if (iVar1 != 0) {
                        *(long*)( param_1 + 0xf0 ) = *(long*)( param_1 + 0xf0 ) + -1;
                        WPACKET_finish(local_88);
                        goto LAB_00101f6d;
                     }
                  }
               }
            }
         }
         WPACKET_cleanup(local_88);
      }
      uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_42_inject_plain(long param_1) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined1 local_b8[64];
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0xf0 ) == 0) {
      LAB_0010211e:uVar2 = 1;
   } else {
      *(long*)( param_1 + 0xf0 ) = *(long*)( param_1 + 0xf0 ) + -1;
      iVar1 = WPACKET_init_static_len(local_b8, local_78, 0x40, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xec6, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(local_b8, 6);
         iVar1 = test_true("test/quic_multistream_test.c", 0xeca, "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_CRYPTO)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_b8, *(undefined8*)( param_1 + 0xf8 ));
            iVar1 = test_true("test/quic_multistream_test.c", 0xecb, "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = WPACKET_quic_write_vlint(local_b8, 1);
               iVar1 = test_true("test/quic_multistream_test.c", 0xecc, "WPACKET_quic_write_vlint(&wpkt, 1)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = WPACKET_put_bytes__(local_b8, 0x42, 1);
                  iVar1 = test_true("test/quic_multistream_test.c", 0xecd, "WPACKET_put_bytes_u8(&wpkt, 0x42)", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = WPACKET_get_total_written(local_b8, &local_c0);
                     iVar1 = test_true("test/quic_multistream_test.c", 0xed0, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
                     if (iVar1 != 0) {
                        iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_78, local_c0);
                        if (iVar1 != 0) {
                           WPACKET_finish(local_b8);
                           goto LAB_0010211e;
                        }
                     }
                  }
               }
            }
         }
         WPACKET_cleanup(local_b8);
      }
      uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool script_74_arm_packet_mutator(long param_1) {
   int iVar1;
   undefined8 uVar2;
   uVar2 = ossl_quic_conn_get_channel(*(undefined8*)( param_1 + 0x70 ));
   do_mutation = 1;
   iVar1 = ossl_quic_channel_set_mutator(uVar2, script_74_alter_version, script_74_finish_mutation, 0);
   return iVar1 != 0;
}void script_74_finish_mutation(void) {
   CRYPTO_free(hdr_to_free);
   return;
}undefined8 script_74_alter_version(char *param_1, undefined8 param_2, undefined8 param_3, long *param_4, undefined8 *param_5, undefined8 *param_6) {
   int iVar1;
   long lVar2;
   lVar2 = CRYPTO_memdup(param_1, 0x58, "test/quic_multistream_test.c", 0x13e7);
   iVar1 = do_mutation;
   *param_4 = lVar2;
   hdr_to_free = lVar2;
   *param_5 = param_2;
   *param_6 = param_3;
   if (( iVar1 != 0 ) && ( do_mutation = 0 * param_1 == '\x01' )) {
      *(undefined4*)( lVar2 + 4 ) = 0xdeadbeef;
   }
   return 1;
}/* WARNING: Removing unreachable block (ram,0x001024fc) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong script_68_inject_handshake(long param_1, undefined8 *param_2) {
   int iVar1;
   uint uVar2;
   ulong uVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   undefined1 local_3d[5];
   undefined8 uStack_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( param_1 + 0xf0 );
   local_3d._0_4_ = 0x1000018;
   local_3d[4] = 0;
   uStack_38 = __LC62;
   uStack_30 = _UNK_00123298;
   if (lVar5 == 1) {
      uVar7 = 0xc;
      uVar6 = 0x10;
      puVar8 = &uStack_38;
   } else {
      if (lVar5 != 2) {
         uVar3 = ( ulong )(lVar5 == 0);
         goto LAB_00102419;
      }
      uVar7 = 1;
      uVar6 = 5;
      puVar8 = (undefined8*)local_3d;
   }
   iVar1 = qtest_fault_resize_message(*(undefined8*)( param_1 + 0xb8 ), uVar7);
   uVar3 = test_true("test/quic_multistream_test.c", 0x12f4, "qtest_fault_resize_message(h->qtf, datalen - SSL3_HM_HEADER_LENGTH)", iVar1 != 0);
   if ((int)uVar3 != 0) {
      uVar2 = (uint)uVar6;
      if (uVar2 < 8) {
         if (( uVar6 & 4 ) == 0) {
            if (uVar2 != 0) {
               *(undefined1*)param_2 = *(undefined1*)puVar8;
            }
         } else {
            *(undefined4*)param_2 = *(undefined4*)puVar8;
            *(undefined4*)( (long)param_2 + ( uVar6 - 4 ) ) = *(undefined4*)( (long)puVar8 + ( uVar6 - 4 ) );
         }
      } else {
         *param_2 = *puVar8;
         *(undefined8*)( (long)param_2 + ( uVar6 - 8 ) ) = *(undefined8*)( (long)puVar8 + ( uVar6 - 8 ) );
         lVar5 = (long)param_2 - ( ( ulong )(param_2 + 1) & 0xfffffffffffffff8 );
         uVar2 = uVar2 + (int)lVar5 & 0xfffffff8;
         if (7 < uVar2) {
            uVar6 = 0;
            do {
               uVar4 = (int)uVar6 + 8;
               *(undefined8*)( ( ( ulong )(param_2 + 1) & 0xfffffffffffffff8 ) + uVar6 ) = *(undefined8*)( (long)puVar8 + ( uVar6 - lVar5 ) );
               uVar6 = (ulong)uVar4;
            } while ( uVar4 < uVar2 );
         }
      }
      uVar3 = 1;
   }
   LAB_00102419:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}undefined8 script_44_inject_plain(long param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[64];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) {
      LAB_0010255d:uVar2 = 1;
   } else {
      iVar1 = WPACKET_init_static_len(local_88, local_48, 0x10, 0);
      iVar1 = test_true("test/quic_multistream_test.c", 0xf14, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = ossl_quic_wire_encode_padding(local_88, 1);
         iVar1 = test_true("test/quic_multistream_test.c", 0xf18, "ossl_quic_wire_encode_padding(&wpkt, 1)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = WPACKET_get_total_written(local_88, &local_90);
            iVar1 = test_true("test/quic_multistream_test.c", 0xf1b, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_48, local_90);
               if (iVar1 != 0) {
                  WPACKET_finish(local_88);
                  goto LAB_0010255d;
               }
            }
         }
         WPACKET_cleanup(local_88);
      }
      uVar2 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong script_41_check(long param_1) {
   int iVar1;
   ulong uVar2;
   uVar2 = test_uint64_t_gt("test/quic_multistream_test.c", 0xe98, "h->scratch0", &_LC39, *(undefined8*)( param_1 + 0x100 ), 0);
   if ((int)uVar2 != 0) {
      iVar1 = test_uint64_t_eq("test/quic_multistream_test.c", 0xe9c, "h->scratch1", &_LC39, *(undefined8*)( param_1 + 0x108 ), 0);
      uVar2 = ( ulong )(iVar1 != 0);
   }
   return uVar2;
}void script_41_trace(undefined8 param_1, int param_2, int param_3, undefined8 param_4, long param_5, undefined8 param_6, long param_7) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_4c[4];
   long local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0x202 || param_5 == 0 ) || ( param_2 != 1 )) goto LAB_00102790;
   if (-1 < param_5) {
      local_38 = param_4;
      local_30 = param_5;
   }
   iVar1 = test_true("test/quic_multistream_test.c", 0xe78, "PACKET_buf_init(&pkt, buf, len)", -1 < param_5);
   if (iVar1 != 0) {
      iVar1 = ossl_quic_wire_peek_frame_header(&local_38, &local_48, local_4c);
      iVar1 = test_true("test/quic_multistream_test.c", 0xe7d, "ossl_quic_wire_peek_frame_header(&pkt, &frame_type, &was_minimal)", iVar1 != 0);
      if (iVar1 != 0) {
         if (local_48 != 0x1b) goto LAB_00102790;
         iVar1 = ossl_quic_wire_decode_frame_path_response(&local_38, &local_40);
         iVar1 = test_true("test/quic_multistream_test.c", 0xe86, "ossl_quic_wire_decode_frame_path_response(&pkt, &frame_data)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = test_uint64_t_eq("test/quic_multistream_test.c", 0xe87, "frame_data", "path_challenge", local_40, 0xbdeb9451169c83aa);
            if (iVar1 != 0) {
               *(long*)( param_7 + 0x100 ) = *(long*)( param_7 + 0x100 ) + 1;
               goto LAB_00102790;
            }
         }
      }
   }
   *(long*)( param_7 + 0x108 ) = *(long*)( param_7 + 0x108 ) + 1;
   LAB_00102790:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_21_inject_plain(long param_1, byte *param_2) {
   ulong uVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[64];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(ulong*)( param_1 + 0xf0 ) == 0 ) || ( *(ulong*)( param_1 + 0xf0 ) != ( ulong ) * param_2 )) {
      LAB_00102862:uVar3 = 1;
   } else {
      iVar2 = WPACKET_init_static_len(local_88, local_48, 0x15, 0);
      iVar2 = test_true("test/quic_multistream_test.c", 0xb14, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = WPACKET_quic_write_vlint(local_88, *(undefined8*)( param_1 + 0xf8 ));
         iVar2 = test_true("test/quic_multistream_test.c", 0xb18, "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)", iVar2 != 0);
         if (iVar2 != 0) {
            uVar1 = *(ulong*)( param_1 + 0xf8 );
            if (uVar1 < 0x18) {
               if (uVar1 < 8) {
                  if (uVar1 == 7) {
                     iVar2 = WPACKET_quic_write_vlint(local_88, 1);
                     iVar2 = test_true("test/quic_multistream_test.c", 0xb4f, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)1)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = WPACKET_put_bytes__(local_88, 0, 1);
                        iVar2 = test_true("test/quic_multistream_test.c", 0xb53, "WPACKET_put_bytes_u8(&wpkt, (uint8_t)0)", iVar2 != 0);
                        goto joined_r0x00102b34;
                     }
                  } else {
                     if (uVar1 != 4) {
                        if (uVar1 != 5) goto LAB_001029a0;
                        goto LAB_00102943;
                     }
                     LAB_00102b67:iVar2 = WPACKET_quic_write_vlint(local_88, 0);
                     iVar2 = test_true("test/quic_multistream_test.c", 0xb42, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = WPACKET_quic_write_vlint(local_88, 0);
                        iVar2 = test_true("test/quic_multistream_test.c", 0xb44, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = WPACKET_quic_write_vlint(local_88, 0);
                           iVar2 = test_true("test/quic_multistream_test.c", 0xb46, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
                           goto joined_r0x00102b34;
                        }
                     }
                  }
               } else {
                  uVar4 = 1L << ( (byte)uVar1 & 0x3f );
                  if (( uVar4 & 0xdd0000 ) == 0) {
                     if (( uVar4 & 0x220000 ) == 0) {
                        if ((int)uVar1 != 8) goto LAB_001029a0;
                        goto LAB_00102b67;
                     }
                     LAB_00102943:iVar2 = WPACKET_quic_write_vlint(local_88, 0);
                     iVar2 = test_true("test/quic_multistream_test.c", 0xb37, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
                     if (iVar2 == 0) goto LAB_00102a30;
                     iVar2 = WPACKET_quic_write_vlint(local_88, 0);
                     iVar2 = test_true("test/quic_multistream_test.c", 0xb39, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
                  } else {
                     iVar2 = WPACKET_quic_write_vlint(local_88, 0);
                     iVar2 = test_true("test/quic_multistream_test.c", 0xb2e, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
                  }
                  joined_r0x00102b34:if (iVar2 != 0) goto LAB_001029a0;
               }
            } else if (uVar1 < 0x1c) {
               if (uVar1 != 0x18) {
                  iVar2 = WPACKET_put_bytes__(local_88, 0, 8);
                  iVar2 = test_true("test/quic_multistream_test.c", 0xb22, "WPACKET_put_bytes_u64(&wpkt, (uint64_t)0)", iVar2 != 0);
                  goto joined_r0x00102b34;
               }
               iVar2 = WPACKET_quic_write_vlint(local_88, 0);
               iVar2 = test_true("test/quic_multistream_test.c", 0xb5d, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
               if (iVar2 != 0) {
                  iVar2 = WPACKET_quic_write_vlint(local_88, 0);
                  iVar2 = test_true("test/quic_multistream_test.c", 0xb61, "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = WPACKET_put_bytes__(local_88, 1, 1);
                     iVar2 = test_true("test/quic_multistream_test.c", 0xb65, "WPACKET_put_bytes_u8(&wpkt, (uint8_t)1)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = WPACKET_put_bytes__(local_88, 0, 1);
                        iVar2 = test_true("test/quic_multistream_test.c", 0xb69, "WPACKET_put_bytes_u8(&wpkt, (uint8_t)0)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = WPACKET_memset(local_88, 0, 0x10);
                           iVar2 = test_true("test/quic_multistream_test.c", 0xb6d, "WPACKET_memset(&wpkt, 0, 16)", iVar2 != 0);
                           goto joined_r0x00102b34;
                        }
                     }
                  }
               }
            } else {
               if (uVar1 == 0x1d) goto LAB_00102b67;
               LAB_001029a0:iVar2 = WPACKET_get_total_written(local_88, &local_90);
               iVar2 = test_true("test/quic_multistream_test.c", 0xb73, "WPACKET_get_total_written(&wpkt, &written)", iVar2 != 0);
               if (( iVar2 != 0 ) && ( iVar2 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_48, local_90) ),iVar2 != 0) {
                  WPACKET_finish(local_88);
                  goto LAB_00102862;
               }
            }
         }
         LAB_00102a30:WPACKET_cleanup(local_88);
      }
      uVar3 = 0;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_20_trigger1(long param_1) {
   ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x90 ));
   *(long*)( param_1 + 0x100 ) = *(long*)( param_1 + 0x100 ) + 1;
   ossl_crypto_condvar_broadcast(*(undefined8*)( param_1 + 0x98 ));
   ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0x90 ));
   return 1;
}undefined8 script_20_wait2(long param_1, long param_2) {
   ulong uVar1;
   ulong uVar2;
   undefined8 uVar3;
   uVar1 = *(ulong*)( *(long*)( param_2 + 0x18 ) + 0x28 );
   ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x90 ));
   uVar3 = *(undefined8*)( param_1 + 0x90 );
   uVar2 = *(ulong*)( param_1 + 0x108 );
   while (uVar2 < uVar1) {
      ossl_crypto_condvar_wait(*(undefined8*)( param_1 + 0x98 ));
      uVar3 = *(undefined8*)( param_1 + 0x90 );
      uVar2 = *(ulong*)( param_1 + 0x108 );
   };
   ossl_crypto_mutex_unlock(uVar3);
   return 1;
}bool check_key_update_ge(long param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   uVar2 = ossl_quic_conn_get_channel(*(undefined8*)( param_1 + 0x70 ));
   lVar3 = ossl_quic_channel_get_tx_key_epoch(uVar2);
   lVar4 = ossl_quic_channel_get_rx_key_epoch(uVar2);
   iVar1 = test_int64_t_ge("test/quic_multistream_test.c", 0x1b3, &_LC77, &_LC39, lVar3 - lVar4, 0);
   if (iVar1 != 0) {
      iVar1 = test_int64_t_le("test/quic_multistream_test.c", 0x1b3, &_LC77, &_LC78, lVar3 - lVar4, 1);
      if (iVar1 != 0) {
         iVar1 = test_uint64_t_ge("test/quic_multistream_test.c", 0x1b7, "(uint64_t)rxke", "hl->check_op->arg2", lVar4, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
         return iVar1 != 0;
      }
   }
   return false;
}bool trigger_key_update(long param_1) {
   int iVar1;
   iVar1 = SSL_key_update(*(undefined8*)( param_1 + 0x70 ), 1);
   iVar1 = test_true("test/quic_multistream_test.c", 0x1a2, "SSL_key_update(h->c_conn, SSL_KEY_UPDATE_REQUESTED)", iVar1 != 0);
   return iVar1 != 0;
}bool check_key_update_lt(long param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   uVar2 = ossl_quic_conn_get_channel(*(undefined8*)( param_1 + 0x70 ));
   uVar2 = ossl_quic_channel_get_tx_key_epoch(uVar2);
   iVar1 = test_uint64_t_lt("test/quic_multistream_test.c", 0x1c3, &_LC81, "hl->check_op->arg2", uVar2, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
   return iVar1 != 0;
}undefined8 override_key_update(long param_1, long param_2) {
   undefined8 uVar1;
   uVar1 = ossl_quic_conn_get_channel(*(undefined8*)( param_1 + 0x70 ));
   ossl_quic_channel_set_txku_threshold_override(uVar1, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
   return 1;
}undefined8 server_helper_thread(long param_1) {
   int iVar1;
   int iVar2;
   ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x120 ));
   iVar2 = *(int*)( param_1 + 0x130 );
   iVar1 = *(int*)( param_1 + 0x134 );
   while (iVar1 == 0) {
      while (iVar2 == 0) {
         ossl_crypto_condvar_wait(*(undefined8*)( param_1 + 0x128 ), *(undefined8*)( param_1 + 0x120 ));
         iVar2 = *(int*)( param_1 + 0x130 );
         if (*(int*)( param_1 + 0x134 ) != 0) goto LAB_00102f67;
      };
      ossl_quic_tserver_tick(*(undefined8*)( param_1 + 0x40 ));
      ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0x120 ));
      OSSL_sleep(1);
      ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x120 ));
      iVar2 = *(int*)( param_1 + 0x130 );
      iVar1 = *(int*)( param_1 + 0x134 );
   };
   LAB_00102f67:ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0x120 ));
   return 1;
}void stream_info_hash(undefined8 *param_1) {
   OPENSSL_LH_strhash(*param_1);
   return;
}int check_consistent_want(SSL *param_1, int param_2) {
   uint uVar1;
   int iVar2;
   int iVar3;
   bool bVar4;
   uVar1 = SSL_get_error(param_1, param_2);
   iVar2 = SSL_want(param_1);
   if (( uVar1 == 0 ) || ( uVar1 == 6 )) {
      bVar4 = true;
      if (iVar2 == 1) goto LAB_00102ffd;
      LAB_0010303b:bVar4 = iVar2 == 8 && uVar1 == 0xc;
   } else {
      if (( ( uVar1 & 0xfffffffb ) == 1 ) && ( bVar4 = iVar2 == 1 )) goto LAB_00102ffd;
      if (( uVar1 != 2 ) || ( iVar2 != 3 )) {
         if (( uVar1 == 3 ) && ( bVar4 = iVar2 == 2 )) goto LAB_00102ffd;
         if (( uVar1 != 0xb ) || ( iVar2 != 7 )) {
            if (( uVar1 == 4 ) && ( bVar4 = iVar2 == 4 )) goto LAB_00102ffd;
            goto LAB_0010303b;
         }
      }
      bVar4 = true;
   }
   LAB_00102ffd:iVar3 = test_true("test/quic_multistream_test.c", 0x3f3, "(ec == SSL_ERROR_NONE && w == SSL_NOTHING) || (ec == SSL_ERROR_ZERO_RETURN && w == SSL_NOTHING) || (ec == SSL_ERROR_SSL && w == SSL_NOTHING) || (ec == SSL_ERROR_SYSCALL && w == SSL_NOTHING) || (ec == SSL_ERROR_WANT_READ && w == SSL_READING) || (ec == SSL_ERROR_WANT_WRITE && w == SSL_WRITING) || (ec == SSL_ERROR_WANT_CLIENT_HELLO_CB && w == SSL_CLIENT_HELLO_CB) || (ec == SSL_ERROR_WANT_X509_LOOKUP && w == SSL_X509_LOOKUP) || (ec == SSL_ERROR_WANT_RETRY_VERIFY && w == SSL_RETRY_VERIFY)", bVar4);
   if (iVar3 == 0) {
      test_error("test/quic_multistream_test.c", 0x400, "got error=%d, want=%d", uVar1, iVar2);
      return 0;
   }
   return iVar3;
}void cleanup_stream(void *param_1) {
   SSL_free(*(SSL**)( (long)param_1 + 8 ));
   CRYPTO_free(param_1);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 init_reason(void) {
   undefined8 uVar1;
   long lVar2;
   undefined8 *puVar3;
   uVar1 = _UNK_001232a8;
   long_reason = __LC84;
   puVar3 = &long_reason;
   for (lVar2 = 0x100; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0x7e7e7e7e7e7e7e7e;
      puVar3 = puVar3 + 1;
   }
   uRam00000000001091e8 = (undefined5)uVar1;
   DAT_001099df = 0;
   _DAT_001091ed = (undefined3)__LC85;
   uRam00000000001091f0 = ( undefined5 )((ulong)__LC85 >> 0x18);
   uRam00000000001091f5 = _UNK_001232b8;
   return 1;
}ulong script_53_inject_plain(long param_1, char *param_2) {
   int iVar1;
   uint uVar2;
   ulong uVar3;
   void *ptr;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined1 local_78[56];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = 1;
   if (( *(long*)( param_1 + 0xf0 ) == 0 ) || ( *param_2 != '\x05' )) goto LAB_00103184;
   *(undefined8*)( param_1 + 0xf0 ) = 0;
   lVar4 = ( -(ulong)(*(long *)(param_1 + 0xf8) == 0) & 0xffffffffffffff9d ) + 0x75;
   lVar6 = ( -(ulong)(*(long *)(param_1 + 0xf8) == 0) & 0xffffffffffffff9d ) + 100;
   lVar5 = *(long*)( param_1 + 0xf8 );
   ptr = CRYPTO_malloc((int)lVar4, "test/quic_multistream_test.c", 0x10b5);
   uVar3 = test_ptr("test/quic_multistream_test.c", 0x10b5, "frame_buf = OPENSSL_malloc(frame_len)", ptr);
   if ((int)uVar3 == 0) goto LAB_00103184;
   iVar1 = WPACKET_init_static_len(local_78, ptr, lVar4, 0);
   iVar1 = test_true("test/quic_multistream_test.c", 0x10b8, "WPACKET_init_static_len(&wpkt, frame_buf, frame_len, 0)", iVar1 != 0);
   if (iVar1 == 0) {
      LAB_00103297:WPACKET_cleanup(local_78);
      uVar2 = 0;
   } else {
      iVar1 = WPACKET_quic_write_vlint(local_78, 6);
      iVar1 = test_true("test/quic_multistream_test.c", 0x10bb, "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_CRYPTO)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_00103297;
      iVar1 = WPACKET_quic_write_vlint(local_78, -(uint)(lVar5 == 0) & 100000);
      iVar1 = test_true("test/quic_multistream_test.c", 0x10bc, "WPACKET_quic_write_vlint(&wpkt, offset)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_00103297;
      iVar1 = WPACKET_quic_write_vlint(local_78, lVar6);
      iVar1 = test_true("test/quic_multistream_test.c", 0x10bd, "WPACKET_quic_write_vlint(&wpkt, data_len)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_00103297;
      lVar5 = 0;
      do {
         iVar1 = WPACKET_put_bytes__(local_78, 0x42, 1);
         iVar1 = test_true("test/quic_multistream_test.c", 0x10c1, "WPACKET_put_bytes_u8(&wpkt, 0x42)", iVar1 != 0);
         if (iVar1 == 0) goto LAB_00103297;
         lVar5 = lVar5 + 1;
      } while ( lVar6 != lVar5 );
      iVar1 = WPACKET_get_total_written(local_78, &local_80);
      iVar1 = test_true("test/quic_multistream_test.c", 0x10c4, "WPACKET_get_total_written(&wpkt, &written)", iVar1 != 0);
      if (( iVar1 == 0 ) || ( iVar1 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), ptr, local_80) ),iVar1 == 0) goto LAB_00103297;
      WPACKET_finish(local_78);
      uVar2 = 1;
   }
   CRYPTO_free(ptr);
   uVar3 = (ulong)uVar2;
   LAB_00103184:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}long get_time(long param_1) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   iVar1 = CRYPTO_THREAD_read_lock(*(undefined8*)( param_1 + 0xa8 ));
   iVar1 = test_true("test/quic_multistream_test.c", 0x159, "CRYPTO_THREAD_read_lock(h->time_lock)", iVar1 != 0);
   if (iVar1 != 0) {
      uVar2 = ossl_time_now();
      lVar3 = uVar2 + *(ulong*)( param_1 + 0xb0 );
      if (CARRY8(uVar2, *(ulong*)( param_1 + 0xb0 ))) {
         lVar3 = -1;
      }
      CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xa8 ));
      return lVar3;
   }
   return 0;
}undefined8 skip_time_ms(long param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long lVar4;
   iVar1 = CRYPTO_THREAD_write_lock(*(undefined8*)( param_1 + 0xa8 ));
   uVar2 = test_true("test/quic_multistream_test.c", 0x164, "CRYPTO_THREAD_write_lock(h->time_lock)", iVar1 != 0);
   if ((int)uVar2 != 0) {
      uVar3 = *(long*)( *(long*)( param_2 + 0x18 ) + 0x28 ) * 1000000;
      lVar4 = uVar3 + *(ulong*)( param_1 + 0xb0 );
      if (CARRY8(uVar3, *(ulong*)( param_1 + 0xb0 ))) {
         lVar4 = -1;
      }
      *(long*)( param_1 + 0xb0 ) = lVar4;
      CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0xa8 ));
      uVar2 = 1;
   }
   return uVar2;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool script_80_inject_pkt(long param_1) {
   undefined4 uVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   bool bVar4;
   undefined8 local_120;
   undefined1 local_118[64];
   undefined8 local_d8;
   undefined5 uStack_d0;
   undefined3 uStack_cb;
   undefined5 uStack_c8;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined5 uStack_a0;
   undefined3 uStack_9b;
   undefined5 uStack_98;
   undefined8 uStack_93;
   undefined3 uStack_8b;
   undefined5 local_88;
   undefined3 uStack_83;
   uchar local_78[48];
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0xf8 ) == 1) {
      *(undefined8*)( param_1 + 0xf8 ) = 0;
      fwrite("Sending stateless reset\n", 1, 0x18, _stderr);
      RAND_bytes(local_78, 0x40);
      local_78[0] = '@';
      local_48 = __LC98;
      uStack_40 = _UNK_001232d8;
      uVar1 = SSL_inject_net_dgram(*(undefined8*)( param_1 + 0x70 ), local_78, 0x40, 0, *(undefined8*)( param_1 + 0x30 ));
      iVar2 = test_int_eq("test/quic_multistream_test.c", 0x14cd, "SSL_inject_net_dgram(h->c_conn, databuf, sizeof(databuf), NULL, h->s_net_bio_addr)", &_LC78, uVar1, 1);
      bVar4 = iVar2 != 0;
      goto LAB_00103516;
   }
   bVar4 = true;
   if (*(long*)( param_1 + 0xf0 ) != 1) goto LAB_00103516;
   local_88 = 0;
   uStack_83 = 0;
   local_d8 = 0;
   uStack_d0 = 0;
   local_b8 = (undefined1[16])0x0;
   uStack_cb = 0;
   uStack_c8 = 0;
   local_a8 = 0;
   uStack_a0 = 0;
   uStack_9b = 0;
   uStack_98 = 0;
   uStack_93 = 0;
   uStack_8b = 0;
   if (( *(long*)( param_1 + 0x120 ) == 0 ) || ( *(int*)( param_1 + 0x138 ) != 0 )) {
      uVar3 = *(undefined8*)( param_1 + 0x38 );
   } else {
      ossl_crypto_mutex_lock();
      uVar3 = *(undefined8*)( param_1 + 0x40 );
      *(undefined4*)( param_1 + 0x138 ) = 1;
      *(undefined8*)( param_1 + 0x38 ) = uVar3;
   }
   uVar3 = ossl_quic_tserver_get_channel(uVar3);
   if (*(long*)( param_1 + 0xf0 ) == 0) {
      LAB_00103647:bVar4 = true;
   } else {
      *(undefined8*)( param_1 + 0xf0 ) = 0;
      fwrite("sending new conn id\n", 1, 0x14, _stderr);
      iVar2 = WPACKET_init_static_len(local_118, local_78, 0x40, 0);
      iVar2 = test_true("test/quic_multistream_test.c", 0x14e5, "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)", iVar2 != 0);
      if (iVar2 == 0) {
         bVar4 = false;
         goto LAB_00103516;
      }
      ossl_quic_channel_get_diag_local_cid(uVar3, &local_d8);
      local_b8._8_8_ = _UNK_001232c8;
      local_b8._0_8_ = __LC95;
      local_a8 = local_d8;
      uStack_a0 = uStack_d0;
      uStack_93 = __LC98;
      uStack_8b = (undefined3)_UNK_001232d8;
      local_88 = ( undefined5 )((ulong)_UNK_001232d8 >> 0x18);
      uStack_9b = uStack_cb;
      uStack_98 = uStack_c8;
      iVar2 = ossl_quic_wire_encode_frame_new_conn_id(local_118, local_b8);
      iVar2 = test_true("test/quic_multistream_test.c", 0x14f1, "ossl_quic_wire_encode_frame_new_conn_id(&wpkt, &ncid)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = WPACKET_get_total_written(local_118, &local_120);
         iVar2 = test_true("test/quic_multistream_test.c", 0x14f4, "WPACKET_get_total_written(&wpkt, &l)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = qtest_fault_prepend_frame(*(undefined8*)( param_1 + 0xb8 ), local_78, local_120);
            if (iVar2 != 0) {
               WPACKET_finish(local_118);
               goto LAB_00103647;
            }
         }
      }
      WPACKET_cleanup(local_118);
      bVar4 = false;
   }
   LAB_00103516:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int server_gen_version_neg(long param_1, undefined8 *param_2) {
   int iVar1;
   BUF_MEM *a;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   byte bVar5;
   size_t local_e0;
   undefined1 local_d8[64];
   undefined2 local_98[14];
   undefined1 local_7b;
   undefined8 local_7a;
   long local_40;
   bVar5 = 0;
   iVar1 = 1;
   lVar3 = *(long*)( param_1 + 0xf0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar3 == 0) goto LAB_00103852;
   if (lVar3 != 1) {
      lVar3 = 0x5432abcd;
   }
   a = BUF_MEM_new();
   iVar1 = test_ptr("test/quic_multistream_test.c", 0x13b9, "buf = BUF_MEM_new()", a);
   if (iVar1 == 0) {
      LAB_00103847:iVar1 = 0;
   } else {
      iVar1 = WPACKET_init(local_d8, a);
      iVar1 = test_true("test/quic_multistream_test.c", 0x13bc, "WPACKET_init(&wpkt, buf)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_00103847;
      puVar4 = (undefined8*)local_98;
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
         *puVar4 = 0;
         puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      local_98[0] = 0x8006;
      local_7b = 8;
      local_7a = 0x5555555555555555;
      iVar1 = ossl_quic_wire_encode_pkt_hdr(local_d8, 0, local_98);
      iVar1 = test_true("test/quic_multistream_test.c", 0x139d, "ossl_quic_wire_encode_pkt_hdr(wpkt, 0, &hdr, NULL)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = WPACKET_put_bytes__(local_d8, lVar3, 4);
         test_true("test/quic_multistream_test.c", 0x13a0, "WPACKET_put_bytes_u32(wpkt, version)", iVar1 != 0);
      }
      iVar1 = WPACKET_get_total_written(local_d8, &local_e0);
      iVar1 = test_true("test/quic_multistream_test.c", 0x13c3, "WPACKET_get_total_written(&wpkt, &l)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = qtest_fault_resize_datagram(*(undefined8*)( param_1 + 0xb8 ), local_e0);
         iVar1 = test_true("test/quic_multistream_test.c", 0x13c6, "qtest_fault_resize_datagram(h->qtf, l)", iVar1 != 0);
         if (iVar1 == 0) goto LAB_00103852;
         iVar1 = 1;
         memcpy((void*)*param_2, a->data, local_e0);
         *(undefined8*)( param_1 + 0xf0 ) = 0;
      }
      WPACKET_finish(local_d8);
   }
   BUF_MEM_free(a);
   LAB_00103852:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_20_trigger2(long param_1) {
   ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x90 ));
   *(long*)( param_1 + 0x108 ) = *(long*)( param_1 + 0x108 ) + 1;
   ossl_crypto_condvar_broadcast(*(undefined8*)( param_1 + 0x98 ));
   ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0x90 ));
   return 1;
}undefined8 script_20_wait1(long param_1, long param_2) {
   ulong uVar1;
   ulong uVar2;
   undefined8 uVar3;
   uVar1 = *(ulong*)( *(long*)( param_2 + 0x18 ) + 0x28 );
   ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x90 ));
   uVar3 = *(undefined8*)( param_1 + 0x90 );
   uVar2 = *(ulong*)( param_1 + 0x100 );
   while (uVar2 < uVar1) {
      ossl_crypto_condvar_wait(*(undefined8*)( param_1 + 0x98 ));
      uVar3 = *(undefined8*)( param_1 + 0x90 );
      uVar2 = *(ulong*)( param_1 + 0x100 );
   };
   ossl_crypto_mutex_unlock(uVar3);
   return 1;
}void helper_cleanup(int *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined1 local_34[4];
   long local_30;
   lVar1 = *(long*)( param_1 + 0x22 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 != 0) {
      lVar3 = 0;
      lVar2 = *(long*)( param_1 + 0x20 ) + 0x28;
      do {
         if (*(long*)( lVar2 + -8 ) != 0) {
            ossl_crypto_thread_native_join(*(long*)( lVar2 + -8 ), local_34);
            ossl_crypto_thread_native_clean(*(undefined8*)( lVar2 + -8 ));
            *(undefined8*)( lVar2 + -8 ) = 0;
         }
         lVar3 = lVar3 + 1;
         ossl_crypto_mutex_free(lVar2);
         lVar2 = lVar2 + 0x40;
      } while ( lVar1 != lVar3 );
   }
   if (*(long*)( param_1 + 0x46 ) != 0) {
      ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x48 ));
      param_1[0x4d] = 1;
      ossl_crypto_condvar_signal(*(undefined8*)( param_1 + 0x4a ));
      ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0x48 ));
      ossl_crypto_thread_native_join(*(undefined8*)( param_1 + 0x46 ), local_34);
      ossl_crypto_thread_native_clean(*(undefined8*)( param_1 + 0x46 ));
      param_1[0x46] = 0;
      param_1[0x47] = 0;
   }
   CRYPTO_free(*(void**)( param_1 + 0x20 ));
   for (int i_1657 = 0; i_1657 < 4; i_1657++) {
      param_1[( i_1657 + 32 )] = 0;
   }
   if (param_1[0x33] == 0) {
      if (*(long*)( param_1 + 0x1e ) != 0) {
         OPENSSL_LH_doall(*(long*)( param_1 + 0x1e ), cleanup_stream);
         OPENSSL_LH_free(*(undefined8*)( param_1 + 0x1e ));
         param_1[0x1e] = 0;
         param_1[0x1f] = 0;
      }
      SSL_free(*(SSL**)( param_1 + 0x1c ));
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
   } else {
      SSL_free(*(SSL**)( param_1 + 0x1c ));
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      if (*(long*)( param_1 + 0x1e ) != 0) {
         OPENSSL_LH_doall(*(long*)( param_1 + 0x1e ), cleanup_stream);
         OPENSSL_LH_free(*(undefined8*)( param_1 + 0x1e ));
         param_1[0x1e] = 0;
         param_1[0x1f] = 0;
      }
   }
   if (*(long*)( param_1 + 0x12 ) != 0) {
      OPENSSL_LH_doall(*(long*)( param_1 + 0x12 ), cleanup_stream);
      OPENSSL_LH_free(*(undefined8*)( param_1 + 0x12 ));
      param_1[0x12] = 0;
      param_1[0x13] = 0;
   }
   ossl_quic_tserver_free(*(undefined8*)( param_1 + 0x10 ));
   *(undefined1(*) [16])( param_1 + 0xe ) = (undefined1[16])0x0;
   BIO_free(*(BIO**)( param_1 + 4 ));
   param_1[4] = 0;
   param_1[5] = 0;
   BIO_free(*(BIO**)( param_1 + 0x18 ));
   param_1[0x18] = 0;
   param_1[0x19] = 0;
   BIO_free(*(BIO**)( param_1 + 8 ));
   param_1[8] = 0;
   param_1[9] = 0;
   qtest_fault_free(*(undefined8*)( param_1 + 0x2e ));
   param_1[0x2e] = 0;
   param_1[0x2f] = 0;
   if (-1 < *param_1) {
      BIO_closesocket();
      *param_1 = -1;
   }
   if (-1 < param_1[0x14]) {
      BIO_closesocket();
      param_1[0x14] = -1;
   }
   BIO_ADDR_free(*(undefined8*)( param_1 + 0xc ));
   param_1[0xc] = 0;
   param_1[0xd] = 0;
   BIO_ADDR_free(*(undefined8*)( param_1 + 10 ));
   param_1[10] = 0;
   param_1[0xb] = 0;
   SSL_CTX_free(*(SSL_CTX**)( param_1 + 0x1a ));
   param_1[0x1a] = 0;
   param_1[0x1b] = 0;
   CRYPTO_THREAD_lock_free(*(undefined8*)( param_1 + 0x2a ));
   param_1[0x2a] = 0;
   param_1[0x2b] = 0;
   ossl_crypto_mutex_free(param_1 + 0x24);
   ossl_crypto_condvar_free(param_1 + 0x26);
   ossl_crypto_mutex_free(param_1 + 0x48);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      ossl_crypto_condvar_free(param_1 + 0x4a);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 script_41_setup(long param_1, long param_2) {
   long lVar1;
   int *piVar2;
   undefined8 uVar3;
   if (( param_2 == 0 ) || ( *(int*)( param_2 + 0x10 ) < 0 )) {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar2 = (int*)( param_1 + 0x138 );
   } else {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar2 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( lVar1 == 0 ) || ( *piVar2 != 0 )) {
      uVar3 = *(undefined8*)( param_1 + 0x38 );
   } else {
      ossl_crypto_mutex_lock();
      uVar3 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar3;
      *piVar2 = 1;
   }
   ossl_quic_tserver_set_msg_callback(uVar3, script_41_trace, param_1);
   return 1;
}undefined8 check_stream_stopped(long param_1, long param_2) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   int *piVar4;
   piVar4 = (int*)( param_1 + 0x138 );
   uVar3 = *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 );
   if (-1 < *(int*)( param_2 + 0x10 )) {
      piVar4 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( *(long*)( param_1 + 0x120 ) == 0 ) || ( *piVar4 != 0 )) {
      uVar3 = ossl_quic_tserver_stream_has_peer_stop_sending(*(undefined8*)( param_1 + 0x38 ), uVar3, 0);
      iVar2 = (int)uVar3;
   } else {
      ossl_crypto_mutex_lock();
      uVar1 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar1;
      *piVar4 = 1;
      uVar3 = ossl_quic_tserver_stream_has_peer_stop_sending(uVar1, uVar3, 0);
      iVar2 = (int)uVar3;
   }
   if (iVar2 != 0) {
      return 1;
   }
   *(undefined4*)( param_1 + 200 ) = 1;
   return uVar3;
}undefined8 wait_incoming_acks_increased(long param_1, long param_2) {
   long lVar1;
   ushort uVar2;
   undefined8 uVar3;
   int *piVar4;
   if (( param_2 == 0 ) || ( *(int*)( param_2 + 0x10 ) < 0 )) {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar4 = (int*)( param_1 + 0x138 );
   } else {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar4 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( lVar1 == 0 ) || ( *piVar4 != 0 )) {
      uVar3 = *(undefined8*)( param_1 + 0x38 );
   } else {
      ossl_crypto_mutex_lock();
      uVar3 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar3;
      *piVar4 = 1;
   }
   uVar3 = ossl_quic_tserver_get_channel(uVar3);
   uVar2 = ossl_quic_channel_get_diag_num_rx_ack(uVar3);
   if ((ulong)uVar2 == *(ulong*)( param_1 + 0x100 )) {
      *(undefined4*)( param_1 + 200 ) = 1;
      return 0;
   }
   return 1;
}bool trigger_late_session_ticket(long param_1, long param_2) {
   long lVar1;
   int iVar2;
   int *piVar3;
   undefined8 uVar4;
   new_session_count = 0;
   if (( param_2 == 0 ) || ( *(int*)( param_2 + 0x10 ) < 0 )) {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar3 = (int*)( param_1 + 0x138 );
   } else {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar3 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( lVar1 == 0 ) || ( *piVar3 != 0 )) {
      uVar4 = *(undefined8*)( param_1 + 0x38 );
   } else {
      ossl_crypto_mutex_lock();
      uVar4 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar4;
      *piVar3 = 1;
   }
   iVar2 = ossl_quic_tserver_new_ticket(uVar4);
   iVar2 = test_true("test/quic_multistream_test.c", 0x1473, "ossl_quic_tserver_new_ticket(ACQUIRE_S())", iVar2 != 0);
   return iVar2 != 0;
}bool set_max_early_data(long param_1, long param_2) {
   undefined4 uVar1;
   int iVar2;
   int *piVar3;
   undefined8 uVar4;
   piVar3 = (int*)( param_1 + 0x138 );
   uVar1 = *(undefined4*)( *(long*)( param_2 + 0x18 ) + 0x28 );
   if (-1 < *(int*)( param_2 + 0x10 )) {
      piVar3 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( *(long*)( param_1 + 0x120 ) == 0 ) || ( *piVar3 != 0 )) {
      uVar4 = *(undefined8*)( param_1 + 0x38 );
   } else {
      ossl_crypto_mutex_lock();
      uVar4 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar4;
      *piVar3 = 1;
   }
   iVar2 = ossl_quic_tserver_set_max_early_data(uVar4, uVar1);
   iVar2 = test_true("test/quic_multistream_test.c", 0x132b, "ossl_quic_tserver_set_max_early_data(ACQUIRE_S(), (uint32_t)hl->check_op->arg2)", iVar2 != 0);
   return iVar2 != 0;
}void check_stream_reset(long param_1, long param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int *piVar4;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   piVar4 = (int*)( param_1 + 0x138 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   uVar1 = *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 );
   if (-1 < *(int*)( param_2 + 0x10 )) {
      piVar4 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( *(long*)( param_1 + 0x120 ) == 0 ) || ( *piVar4 != 0 )) {
      iVar3 = ossl_quic_tserver_stream_has_peer_reset_stream(*(undefined8*)( param_1 + 0x38 ), uVar1, &local_28);
   } else {
      ossl_crypto_mutex_lock();
      uVar2 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar2;
      *piVar4 = 1;
      iVar3 = ossl_quic_tserver_stream_has_peer_reset_stream(uVar2, uVar1, &local_28);
   }
   if (iVar3 == 0) {
      *(undefined4*)( param_1 + 200 ) = 1;
   } else {
      test_uint64_t_eq("test/quic_multistream_test.c", 0x189, &_LC107, &_LC106, local_28, 0x2a);
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}bool check_shutdown_reason(long param_1, long param_2) {
   int iVar1;
   long lVar2;
   int *piVar3;
   if (( param_2 == 0 ) || ( *(int*)( param_2 + 0x10 ) < 0 )) {
      lVar2 = *(long*)( param_1 + 0x120 );
      piVar3 = (int*)( param_1 + 0x138 );
   } else {
      lVar2 = *(long*)( param_1 + 0x120 );
      piVar3 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( lVar2 == 0 ) || ( *piVar3 != 0 )) {
      lVar2 = ossl_quic_tserver_get_terminate_cause(*(undefined8*)( param_1 + 0x38 ));
   } else {
      ossl_crypto_mutex_lock();
      *(undefined8*)( param_1 + 0x38 ) = *(undefined8*)( param_1 + 0x40 );
      *piVar3 = 1;
      lVar2 = ossl_quic_tserver_get_terminate_cause();
   }
   if (lVar2 == 0) {
      *(undefined4*)( param_1 + 200 ) = 1;
   } else {
      iVar1 = test_size_t_ge("test/quic_multistream_test.c", 0x11a9, "tc->reason_len", &_LC32, *(undefined8*)( lVar2 + 0x18 ), 0x32);
      if (iVar1 != 0) {
         iVar1 = test_mem_eq("test/quic_multistream_test.c", 0x11aa, "long_reason", "tc->reason", &long_reason, *(undefined8*)( lVar2 + 0x18 ), *(undefined8*)( lVar2 + 0x10 ), *(undefined8*)( lVar2 + 0x18 ));
         return iVar1 != 0;
      }
   }
   return false;
}bool force_ping(long param_1, long param_2) {
   long lVar1;
   ushort uVar2;
   int iVar3;
   undefined8 uVar4;
   int *piVar5;
   if (( param_2 == 0 ) || ( *(int*)( param_2 + 0x10 ) < 0 )) {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar5 = (int*)( param_1 + 0x138 );
   } else {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar5 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( lVar1 == 0 ) || ( *piVar5 != 0 )) {
      uVar4 = *(undefined8*)( param_1 + 0x38 );
   } else {
      ossl_crypto_mutex_lock();
      uVar4 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar4;
      *piVar5 = 1;
   }
   uVar4 = ossl_quic_tserver_get_channel(uVar4);
   uVar2 = ossl_quic_channel_get_diag_num_rx_ack(uVar4);
   *(ulong*)( param_1 + 0x100 ) = (ulong)uVar2;
   if (( param_2 == 0 ) || ( *(int*)( param_2 + 0x10 ) < 0 )) {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar5 = (int*)( param_1 + 0x138 );
   } else {
      lVar1 = *(long*)( param_1 + 0x120 );
      piVar5 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( lVar1 == 0 ) || ( *piVar5 != 0 )) {
      uVar4 = *(undefined8*)( param_1 + 0x38 );
   } else {
      ossl_crypto_mutex_lock();
      uVar4 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar4;
      *piVar5 = 1;
   }
   iVar3 = ossl_quic_tserver_ping(uVar4);
   iVar3 = test_true("test/quic_multistream_test.c", 0xf42, "ossl_quic_tserver_ping(ACQUIRE_S())", iVar3 != 0);
   return iVar3 != 0;
}undefined8 check_rejected(long param_1, long param_2) {
   undefined8 uVar1;
   int iVar2;
   int *piVar3;
   undefined8 uVar4;
   piVar3 = (int*)( param_1 + 0x138 );
   uVar1 = *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 );
   if (-1 < *(int*)( param_2 + 0x10 )) {
      piVar3 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( *(long*)( param_1 + 0x120 ) == 0 ) || ( *piVar3 != 0 )) {
      iVar2 = ossl_quic_tserver_stream_has_peer_stop_sending(*(undefined8*)( param_1 + 0x38 ), uVar1, 0);
   } else {
      ossl_crypto_mutex_lock();
      uVar4 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( param_1 + 0x38 ) = uVar4;
      *piVar3 = 1;
      iVar2 = ossl_quic_tserver_stream_has_peer_stop_sending(uVar4, uVar1, 0);
   }
   if (iVar2 != 0) {
      piVar3 = (int*)( param_1 + 0x138 );
      if (-1 < *(int*)( param_2 + 0x10 )) {
         piVar3 = (int*)( (long)*(int*)( param_2 + 0x10 ) * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
      }
      if (( *(long*)( param_1 + 0x120 ) == 0 ) || ( *piVar3 != 0 )) {
         uVar4 = *(undefined8*)( param_1 + 0x38 );
      } else {
         ossl_crypto_mutex_lock();
         uVar4 = *(undefined8*)( param_1 + 0x40 );
         *(undefined8*)( param_1 + 0x38 ) = uVar4;
         *piVar3 = 1;
      }
      iVar2 = ossl_quic_tserver_stream_has_peer_reset_stream(uVar4, uVar1, 0);
      if (iVar2 != 0) {
         return 1;
      }
   }
   *(undefined4*)( param_1 + 200 ) = 1;
   return 0;
}undefined8 helper_set_s_stream(long param_1, char *param_2, undefined8 param_3) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   char *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = strcmp(param_2, "DEFAULT");
   if (iVar1 != 0) {
      uVar3 = *(undefined8*)( param_1 + 0x48 );
      iVar1 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", param_2);
      if (iVar1 != 0) {
         iVar1 = strcmp(param_2, "DEFAULT");
         if (iVar1 != 0) {
            local_58[0] = param_2;
            puVar2 = (undefined8*)OPENSSL_LH_retrieve(uVar3, local_58);
            if (puVar2 == (undefined8*)0x0) {
               puVar2 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
               if (puVar2 == (undefined8*)0x0) goto LAB_0010456d;
               *puVar2 = param_2;
               puVar2[2] = 0xffffffffffffffff;
               OPENSSL_LH_insert(uVar3, puVar2);
            }
            puVar2[1] = 0;
            uVar3 = 1;
            puVar2[2] = param_3;
            goto LAB_0010456f;
         }
      }
   }
   LAB_0010456d:uVar3 = 0;
   LAB_0010456f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 set_event_handling_mode_stream(undefined8 param_1, long param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined *local_48[3];
   long local_30;
   uVar3 = *(undefined8*)( param_2 + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", &_LC114);
   if (iVar1 == 0) {
      LAB_00104730:uVar3 = 0;
   } else {
      local_48[0] = &_LC114;
      puVar2 = (undefined8*)OPENSSL_LH_retrieve(uVar3, local_48);
      if (puVar2 == (undefined8*)0x0) {
         puVar2 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
         if (puVar2 == (undefined8*)0x0) goto LAB_00104730;
         *puVar2 = &_LC114;
         puVar2[2] = 0xffffffffffffffff;
         OPENSSL_LH_insert(uVar3, puVar2);
      }
      uVar3 = puVar2[1];
   }
   iVar1 = test_ptr("test/quic_multistream_test.c", 0x16a3, &_LC115, uVar3);
   if (iVar1 == 0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 0;
      }
   } else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar3 = SSL_set_value_uint(uVar3, 0, 6, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x28 ));
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool check_write_buf_stat(undefined8 param_1, long param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   bool bVar4;
   undefined8 local_58;
   long local_50;
   undefined *local_48[3];
   long local_30;
   uVar3 = *(undefined8*)( param_2 + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", &_LC114);
   if (iVar1 == 0) {
      LAB_00104990:uVar3 = 0;
   } else {
      local_48[0] = &_LC114;
      puVar2 = (undefined8*)OPENSSL_LH_retrieve(uVar3, local_48);
      if (puVar2 == (undefined8*)0x0) {
         puVar2 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
         if (puVar2 == (undefined8*)0x0) goto LAB_00104990;
         *puVar2 = &_LC114;
         puVar2[2] = 0xffffffffffffffff;
         OPENSSL_LH_insert(uVar3, puVar2);
      }
      uVar3 = puVar2[1];
   }
   iVar1 = test_ptr("test/quic_multistream_test.c", 0x15b5, "c_a = helper_local_get_c_stream(hl, \"a\")", uVar3);
   if (iVar1 != 0) {
      iVar1 = SSL_get_value_uint(uVar3, 0, 7, &local_58);
      iVar1 = test_true("test/quic_multistream_test.c", 0x15b8, "SSL_get_stream_write_buf_size(c_a, &size)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = SSL_get_value_uint(uVar3, 0, 8, &local_50);
         iVar1 = test_true("test/quic_multistream_test.c", 0x15b9, "SSL_get_stream_write_buf_used(c_a, &used)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = SSL_get_value_uint(uVar3, 0, 9, local_48);
            iVar1 = test_true("test/quic_multistream_test.c", 0x15ba, "SSL_get_stream_write_buf_avail(c_a, &avail)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = test_uint64_t_ge("test/quic_multistream_test.c", 0x15bb, &_LC121, "avail", local_58, local_48[0]);
               if (iVar1 != 0) {
                  iVar1 = test_uint64_t_ge("test/quic_multistream_test.c", 0x15bc, &_LC121, &_LC122, local_58, local_50);
                  if (iVar1 != 0) {
                     iVar1 = test_uint64_t_eq("test/quic_multistream_test.c", 0x15bd, "avail + used", &_LC121, local_48[0] + local_50, local_58);
                     if (iVar1 != 0) {
                        iVar1 = test_uint64_t_eq("test/quic_multistream_test.c", 0x15c0, &_LC122, "hl->check_op->arg1", local_50, *(undefined8*)( *(long*)( param_2 + 0x18 ) + 0x10 ));
                        bVar4 = iVar1 != 0;
                        goto LAB_0010487a;
                     }
                  }
               }
            }
         }
      }
   }
   bVar4 = false;
   LAB_0010487a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}uint script_85_poll(long param_1, long param_2) {
   ulong uVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   undefined8 *puVar5;
   long lVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long in_FS_OFFSET;
   undefined8 local_148;
   undefined *local_138[4];
   undefined1 local_118[16];
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_e8[2];
   undefined4 local_d8;
   undefined4 uStack_d4;
   undefined8 uStack_d0;
   undefined4 local_c8;
   undefined8 local_c0;
   undefined4 local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   undefined4 uStack_ac;
   undefined4 local_a8;
   undefined8 local_a0;
   undefined4 local_98;
   undefined4 uStack_94;
   undefined4 uStack_90;
   undefined4 uStack_8c;
   undefined4 local_88;
   undefined8 local_80;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 local_68;
   undefined8 local_60;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   uVar8 = *(undefined8*)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_118 = (undefined1[16])0x0;
   local_f8 = 0;
   local_108 = (undefined1[16])0x0;
   puVar5 = local_e8;
   for (lVar6 = 0x14; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }
   iVar2 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", &_LC114);
   if (iVar2 == 0) {
      LAB_00104de0:uVar8 = 0;
   } else {
      local_138[0] = &_LC114;
      puVar5 = (undefined8*)OPENSSL_LH_retrieve(uVar8, local_138);
      if (puVar5 == (undefined8*)0x0) {
         puVar5 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
         if (puVar5 == (undefined8*)0x0) goto LAB_00104de0;
         *puVar5 = &_LC114;
         puVar5[2] = 0xffffffffffffffff;
         OPENSSL_LH_insert(uVar8, puVar5);
      }
      uVar8 = puVar5[1];
   }
   iVar2 = test_ptr("test/quic_multistream_test.c", 0x1610, "c_a = helper_local_get_c_stream(hl, \"a\")", uVar8);
   if (iVar2 != 0) {
      uVar9 = *(undefined8*)( param_2 + 8 );
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", &_LC125);
      if (iVar2 == 0) {
         LAB_00104e30:uVar9 = 0;
      } else {
         local_138[0] = &_LC125;
         puVar5 = (undefined8*)OPENSSL_LH_retrieve(uVar9, local_138);
         if (puVar5 == (undefined8*)0x0) {
            puVar5 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
            if (puVar5 == (undefined8*)0x0) goto LAB_00104e30;
            *puVar5 = &_LC125;
            puVar5[2] = 0xffffffffffffffff;
            OPENSSL_LH_insert(uVar9, puVar5);
         }
         uVar9 = puVar5[1];
      }
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x1611, "c_b = helper_local_get_c_stream(hl, \"b\")", uVar9);
      if (iVar2 != 0) {
         uVar7 = *(undefined8*)( param_2 + 8 );
         iVar2 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", &_LC127);
         if (iVar2 == 0) {
            LAB_00104e80:local_148 = 0;
         } else {
            local_138[0] = &_LC127;
            puVar5 = (undefined8*)OPENSSL_LH_retrieve(uVar7, local_138);
            if (puVar5 == (undefined8*)0x0) {
               puVar5 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
               if (puVar5 == (undefined8*)0x0) goto LAB_00104e80;
               *puVar5 = &_LC127;
               puVar5[2] = 0xffffffffffffffff;
               OPENSSL_LH_insert(uVar7, puVar5);
            }
            local_148 = puVar5[1];
         }
         iVar2 = test_ptr("test/quic_multistream_test.c", 0x1612, "c_c = helper_local_get_c_stream(hl, \"c\")", local_148);
         if (iVar2 != 0) {
            uVar7 = *(undefined8*)( param_2 + 8 );
            iVar2 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", &_LC129);
            if (iVar2 == 0) {
               LAB_00104e38:uVar7 = 0;
            } else {
               local_138[0] = &_LC129;
               puVar5 = (undefined8*)OPENSSL_LH_retrieve(uVar7, local_138);
               if (puVar5 == (undefined8*)0x0) {
                  puVar5 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00104e38;
                  puVar5[2] = 0xffffffffffffffff;
                  *puVar5 = &_LC129;
                  OPENSSL_LH_insert(uVar7, puVar5);
               }
               uVar7 = puVar5[1];
            }
            iVar2 = test_ptr("test/quic_multistream_test.c", 0x1613, "c_d = helper_local_get_c_stream(hl, \"d\")", uVar7);
            if (iVar2 != 0) {
               local_a0 = local_148;
               local_60 = *(undefined8*)( param_1 + 0x70 );
               local_e8[0]._0_4_ = 2;
               local_c8 = 2;
               local_a8 = 2;
               local_88 = 2;
               local_68 = 2;
               local_138[0] = (undefined*)0xffffffffffffffff;
               local_d8 = 0xffffffff;
               uStack_d4 = 0xffffffff;
               uStack_d0._0_4_ = 0xffffffff;
               uStack_d0._4_4_ = 0xffffffff;
               local_b8 = 0xffffffff;
               uStack_b4 = 0xffffffff;
               uStack_b0 = 0xffffffff;
               uStack_ac = 0xffffffff;
               local_98 = 0xffffffff;
               uStack_94 = 0xffffffff;
               uStack_90 = 0xffffffff;
               uStack_8c = 0xffffffff;
               local_78 = 0xffffffff;
               uStack_74 = 0xffffffff;
               uStack_70 = 0xffffffff;
               uStack_6c = 0xffffffff;
               local_58 = 0xffffffff;
               uStack_54 = 0xffffffff;
               uStack_50 = 0xffffffff;
               uStack_4c = 0xffffffff;
               local_e8[1] = uVar8;
               local_c0 = uVar9;
               local_80 = uVar7;
               uVar3 = SSL_poll(local_e8, 5, 0x20, timeout_0, 0, local_138);
               uVar1 = *(ulong*)( *(long*)( param_2 + 0x18 ) + 0x28 );
               if (uVar1 == 0) {
                  local_118._0_8_ = 0x80;
                  local_118._8_8_ = 0x80;
                  local_108._0_8_ = 0x80;
                  local_f8 = 0x1800;
               } else {
                  if (uVar1 != 1) goto LAB_00104aa8;
                  local_118._0_8_ = 0xc0;
                  local_118._8_8_ = 0x90;
                  local_108._0_8_ = 0x20;
                  local_f8 = 0x1a00;
               }
               local_108._8_8_ = 0x80;
               uVar4 = test_int_eq("test/quic_multistream_test.c", 0x164c, &_LC132, "expected_ret", uVar3, 1);
               if (uVar4 != 0) {
                  iVar2 = test_size_t_eq("test/quic_multistream_test.c", 0x164d, "result_count", "expected_result_count", local_138[0], 5);
                  uVar4 = ( uint )(iVar2 != 0);
               }
               lVar6 = 0;
               do {
                  iVar2 = test_uint64_t_eq("test/quic_multistream_test.c", 0x1651, "items[i].revents", "expected_revents[i]", ( &uStack_d0 )[lVar6 * 4], *(undefined8*)( local_118 + lVar6 * 8 ));
                  if (iVar2 == 0) {
                     uVar4 = 0;
                     test_error("test/quic_multistream_test.c", 0x1652, "mismatch at index %zu in poll results, mode %d", lVar6, uVar1 & 0xffffffff);
                  }
                  lVar6 = lVar6 + 1;
               } while ( lVar6 != 5 );
               goto LAB_00104aaa;
            }
         }
      }
   }
   LAB_00104aa8:uVar4 = 0;
   LAB_00104aaa:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int run_script_worker(long param_1, long param_2, long param_3, int param_4) {
   long lVar1;
   uint *puVar2;
   long *plVar3;
   long *plVar4;
   long lVar5;
   bool bVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   uint uVar20;
   int iVar21;
   int iVar22;
   long lVar23;
   int *piVar24;
   ulong uVar25;
   undefined *puVar26;
   undefined *puVar27;
   undefined8 *puVar28;
   SSL *pSVar29;
   size_t __n;
   char *pcVar30;
   undefined8 extraout_RDX;
   undefined *puVar31;
   long lVar32;
   undefined8 uVar33;
   long *plVar34;
   char *pcVar35;
   code *pcVar36;
   undefined8 uVar37;
   undefined8 uVar38;
   undefined8 uVar39;
   ulong uVar40;
   long in_FS_OFFSET;
   bool bVar41;
   ulong local_1b8;
   long local_1b0;
   ulong local_198;
   undefined1 *local_190;
   long local_178;
   int local_16c;
   long local_168;
   long local_160;
   int local_158;
   uint *local_150;
   int local_148;
   undefined1 local_138[16];
   undefined1 local_128[16];
   ulong local_118;
   long local_108[8];
   long local_c8[8];
   long local_88[8];
   undefined1 local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   local_148 = 0;
   local_168 = param_1;
   local_158 = param_4;
   uVar20 = test_ptr("test/quic_multistream_test.c", 0x35c, &_LC144, param_1);
   if (uVar20 != 0) {
      if (param_4 < 0) {
         local_160 = *(long*)( param_1 + 0x78 );
         uVar20 = 1;
      } else {
         uVar33 = OPENSSL_LH_new(stream_info_hash, stream_info_cmp, extraout_RDX, uVar20);
         local_160 = OPENSSL_LH_set_thunks(uVar33, 0x100000, lh_STREAM_INFO_cfn_thunk, lh_STREAM_INFO_doall_thunk, lh_STREAM_INFO_doall_arg_thunk);
         iVar21 = test_ptr("test/quic_multistream_test.c", 0x362, "hl->c_streams = lh_STREAM_INFO_new(stream_info_hash, stream_info_cmp)", local_160);
         uVar20 = ( uint )(iVar21 != 0);
      }
   }
   iVar21 = test_true("test/quic_multistream_test.c", 0x41a, "helper_local_init(hl, h, thread_idx)", uVar20);
   if (iVar21 == 0) {
      local_178 = 0;
      local_1b0 = 0;
      local_190 = (undefined1*)0x0;
      iVar21 = 0;
      goto LAB_00105483;
   }
   local_1b8 = 0;
   lVar23 = (long)local_158;
   iVar21 = 0;
   local_178 = 0;
   lVar32 = *(long*)( param_1 + 0x120 );
   bVar6 = true;
   local_1b0 = 0;
   local_198 = 0;
   local_16c = 0;
   local_190 = (undefined1*)0x0;
   LAB_00105088:pSVar29 = *(SSL**)( param_1 + 0x70 );
   if ((int)lVar23 < 0) {
      piVar24 = (int*)( param_1 + 0x138 );
   } else {
      piVar24 = (int*)( lVar23 * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( lVar32 != 0 ) && ( *piVar24 != 0 )) {
      *piVar24 = 0;
      *(undefined8*)( param_1 + 0x38 ) = 0;
      ossl_crypto_mutex_unlock();
   }
   if (iVar21 == 0) {
      local_1b0 = local_1b0 + (ulong)!bVar6;
      uVar25 = ossl_time_now();
      local_1b8 = uVar25 + 60000000000;
      local_198 = ( ulong )(0xfffffff207b8a7ff < uVar25);
      if (0xfffffff207b8a7ff >= uVar25) {
         bVar6 = false;
         goto LAB_001051ec;
      }
      uVar25 = ossl_time_now();
      bVar6 = false;
      local_1b8 = 0xffffffffffffffff;
      local_198 = 0;
      LAB_0010511a:iVar21 = -(uint)(uVar25 < local_1b8);
   } else {
      LAB_001051ec:uVar25 = ossl_time_now();
      iVar21 = 1;
      if (uVar25 <= local_1b8) goto LAB_0010511a;
   }
   iVar21 = test_int_le("test/quic_multistream_test.c", 0x443, "ossl_time_compare(ossl_time_now(), op_deadline)", &_LC39, iVar21, 0);
   if (iVar21 == 0) {
      iVar21 = 0;
      test_error("test/quic_multistream_test.c", 0x444, "op %zu timed out on thread %d", local_1b0 + 1, param_4);
      goto LAB_00105483;
   }
   puVar2 = (uint*)( param_2 + local_1b0 * 0x48 );
   pcVar35 = *(char**)( puVar2 + 8 );
   if (pcVar35 == (char*)0x0) {
      joined_r0x00105216:if (-1 < param_4) goto LAB_0010519a;
      LAB_0010521c:iVar21 = *(int*)( param_1 + 0xc4 );
      uVar33 = 0xffffffffffffffff;
      joined_r0x0010537f:if (iVar21 == 0) {
         ossl_quic_tserver_tick(*(undefined8*)( param_1 + 0x38 ));
      } else if (*(int*)( param_1 + 0x130 ) == 0) {
         ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0x120 ));
         *(undefined4*)( param_1 + 0x130 ) = 1;
         ossl_crypto_condvar_signal(*(undefined8*)( param_1 + 0x128 ));
         ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0x120 ));
      }
      if (( local_148 == 0 ) && ( local_16c != 0 )) {
         SSL_handle_events(*(undefined8*)( param_1 + 0x70 ));
      }
      switch (*puVar2) {
         case 0:
      goto switchD_001051d8_caseD_0;
         case 1:
      local_150 = puVar2;
      iVar21 = (**(code **)(puVar2 + 6))(param_1,&local_168);
      local_150 = (uint *)0x0;
      if (*(int *)(param_1 + 200) == 0) goto LAB_00107868;
      *(undefined4 *)(param_1 + 200) = 0;
      if (local_158 < 0) goto LAB_00107d07;
LAB_0010749d:
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
LAB_001074af:
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
        uVar33 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar33 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar33;
        *piVar24 = 1;
      }
      ossl_quic_tserver_tick(uVar33);
      iVar21 = 1;
      lVar23 = (long)local_158;
      lVar32 = *(long *)(param_1 + 0x120);
      break;
         case 2:
      goto switchD_001051d8_caseD_2;
         case 3:
      goto switchD_001051d8_caseD_3;
         case 4:
      goto switchD_001051d8_caseD_4;
         case 5:
      goto switchD_0010526e_caseD_5;
         case 6:
      goto switchD_001051d8_caseD_6;
         case 7:
      goto switchD_0010526e_caseD_7;
         case 8:
      goto switchD_001051d8_caseD_8;
         case 9:
      goto switchD_0010526e_caseD_9;
         case 10:
      goto switchD_001051d8_caseD_a;
         case 0xb:
      goto switchD_0010526e_caseD_b;
         case 0xc:
      goto switchD_001051d8_caseD_c;
         case 0xd:
      goto switchD_001051d8_caseD_d;
         case 0xe:
      goto switchD_001051d8_caseD_e;
         case 0xf:
      goto switchD_0010526e_caseD_f;
         case 0x10:
      goto switchD_001051d8_caseD_10;
         case 0x11:
      goto switchD_001051d8_caseD_11;
         case 0x12:
      goto switchD_001051d8_caseD_12;
         case 0x13:
      goto switchD_001051d8_caseD_13;
         case 0x14:
      goto switchD_001051d8_caseD_14;
         case 0x15:
      goto switchD_001051d8_caseD_15;
         case 0x16:
      goto switchD_001051d8_caseD_16;
         case 0x17:
      goto switchD_001051d8_caseD_17;
         case 0x18:
      goto switchD_0010526e_caseD_18;
         case 0x19:
      goto switchD_001051d8_caseD_19;
         case 0x1a:
      goto switchD_001051d8_caseD_1a;
         case 0x1b:
      goto switchD_0010526e_caseD_1b;
         case 0x1c:
      goto switchD_001051d8_caseD_1c;
         case 0x1d:
         case 0x36:
      goto switchD_001051d8_caseD_1d;
         case 0x1e:
      goto switchD_0010526e_caseD_1e;
         case 0x1f:
      goto switchD_001051d8_caseD_1f;
         case 0x20:
      goto switchD_001051d8_caseD_20;
         case 0x21:
      goto switchD_001051d8_caseD_21;
         case 0x22:
      goto switchD_0010526e_caseD_22;
         case 0x23:
      goto switchD_001051d8_caseD_23;
         case 0x24:
      goto switchD_001051d8_caseD_24;
         case 0x25:
      goto switchD_001051d8_caseD_25;
         case 0x26:
      goto switchD_001051d8_caseD_26;
         case 0x27:
      goto switchD_001051d8_caseD_27;
         case 0x28:
      goto switchD_001051d8_caseD_28;
         case 0x29:
      goto switchD_0010526e_caseD_29;
         case 0x2a:
      goto switchD_001051d8_caseD_2a;
         case 0x2b:
      goto switchD_001051d8_caseD_2b;
         case 0x2c:
      goto switchD_001051d8_caseD_2c;
         case 0x2d:
      goto switchD_001051d8_caseD_2d;
         case 0x2e:
      goto switchD_001051d8_caseD_2e;
         case 0x2f:
      goto switchD_001051d8_caseD_2f;
         case 0x30:
      goto switchD_001051d8_caseD_30;
         case 0x31:
      goto switchD_001051d8_caseD_31;
         case 0x32:
      goto switchD_001051d8_caseD_32;
         case 0x33:
      goto switchD_001051d8_caseD_33;
         case 0x34:
      goto switchD_001051d8_caseD_34;
         case 0x35:
      goto switchD_0010526e_caseD_35;
         default:
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x7da,"unknown op");
      goto LAB_00105483;
      }
      goto LAB_00105088;
   }
   iVar21 = strcmp(pcVar35, "DEFAULT");
   lVar32 = local_160;
   if (iVar21 == 0) {
      pSVar29 = *(SSL**)( local_168 + 0x70 );
      goto joined_r0x00105216;
   }
   iVar21 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", pcVar35);
   if (( iVar21 == 0 ) || ( iVar21 = iVar21 == 0 )) {
      LAB_001053c0:pSVar29 = (SSL*)0x0;
   } else {
      local_138._0_8_ = pcVar35;
      puVar28 = (undefined8*)OPENSSL_LH_retrieve(lVar32);
      if (puVar28 == (undefined8*)0x0) {
         puVar28 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
         if (puVar28 == (undefined8*)0x0) goto LAB_001053c0;
         *puVar28 = pcVar35;
         puVar28[2] = 0xffffffffffffffff;
         OPENSSL_LH_insert(lVar32);
      }
      pSVar29 = (SSL*)puVar28[1];
   }
   if (param_4 < 0) {
      pcVar35 = *(char**)( puVar2 + 8 );
      iVar21 = strcmp(pcVar35, "DEFAULT");
      if (iVar21 == 0) goto LAB_0010521c;
      uVar33 = *(undefined8*)( param_1 + 0x48 );
      iVar21 = test_ptr("test/quic_multistream_test.c", 0x37a, "stream_name", pcVar35);
      if (( iVar21 == 0 ) || ( iVar21 = iVar21 == 0 )) goto LAB_0010521c;
      local_138._0_8_ = pcVar35;
      puVar28 = (undefined8*)OPENSSL_LH_retrieve(uVar33);
      if (puVar28 == (undefined8*)0x0) {
         puVar28 = (undefined8*)CRYPTO_zalloc(0x18, "test/quic_multistream_test.c", 899);
         if (puVar28 == (undefined8*)0x0) goto LAB_0010521c;
         *puVar28 = pcVar35;
         puVar28[2] = 0xffffffffffffffff;
         OPENSSL_LH_insert(uVar33);
      }
      iVar21 = *(int*)( param_1 + 0xc4 );
      uVar33 = puVar28[2];
      goto joined_r0x0010537f;
   }
   LAB_0010519a:if (local_148 == 0) {
      SSL_handle_events(*(undefined8*)( param_1 + 0x70 ));
   }
   uVar20 = *puVar2;
   if (( 0x34 < uVar20 ) || ( ( 0x1801eb00054553U >> ( (ulong)uVar20 & 0x3f ) & 1 ) == 0 )) {
      iVar21 = 0;
      test_error("test/quic_multistream_test.c", 0x47e, "opcode %lu not allowed on child thread", uVar20);
      goto LAB_00105483;
   }
   switch ((ulong)uVar20) {
      case 0:
    goto switchD_001051d8_caseD_0;
      case 1:
    local_150 = puVar2;
    iVar21 = (**(code **)(puVar2 + 6))(param_1,&local_168);
LAB_00107868:
    local_150 = (uint *)0x0;
    iVar21 = test_true("test/quic_multistream_test.c",0x4dd,&_LC155,iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 2:
switchD_001051d8_caseD_2:
    pcVar35 = *(char **)(puVar2 + 2);
    __n = strlen(pcVar35);
    iVar21 = test_size_t_le("test/quic_multistream_test.c",0x4e7,"alpn_len","UINT8_MAX");
    if (iVar21 != 0) {
      local_190 = (undefined1 *)CRYPTO_malloc((int)__n + 1,"test/quic_multistream_test.c",0x4e8);
      iVar21 = test_ptr("test/quic_multistream_test.c",0x4e8,
                        "tmp_buf = (unsigned char *)OPENSSL_malloc(alpn_len + 1)",local_190);
      if (iVar21 != 0) {
        memcpy(local_190 + 1,pcVar35,__n);
        *local_190 = (char)__n;
        iVar21 = SSL_set_alpn_protos(*(undefined8 *)(param_1 + 0x70),local_190,(int)__n + 1);
        iVar21 = test_false("test/quic_multistream_test.c",0x4ef,
                            "SSL_set_alpn_protos(h->c_conn, tmp_buf, alpn_len + 1)",iVar21 != 0);
joined_r0x001080ef:
        if (iVar21 != 0) goto LAB_00106ddc;
      }
    }
    goto LAB_001058bf;
      case 3:
switchD_001051d8_caseD_3:
    local_16c = SSL_connect(*(SSL **)(param_1 + 0x70));
    iVar21 = check_consistent_want(pSVar29,local_16c);
    if (iVar21 == 0) goto LAB_001058bf;
    if (local_16c != 1) {
      if ((*(int *)(param_1 + 0xc4) == 0) &&
         (iVar21 = SSL_get_error(*(SSL **)(param_1 + 0x70),local_16c), iVar21 - 2U < 2)) {
        if (*(int *)(param_1 + 0xc4) != 0) {
          iVar21 = 0;
          test_error("test/quic_multistream_test.c",0x503,"spin again in blocking mode");
          goto LAB_00105483;
        }
        local_16c = 1;
        lVar23 = (long)local_158;
        iVar21 = 1;
        lVar32 = *(long *)(param_1 + 0x120);
      }
      else {
        if ((*(long *)(puVar2 + 4) == 0) &&
           (iVar21 = test_int_eq("test/quic_multistream_test.c",0x505,&_LC132,&_LC78), iVar21 == 0))
        {
          iVar21 = 0;
          goto LAB_00105483;
        }
        local_16c = 1;
        lVar23 = (long)local_158;
        iVar21 = 0;
        lVar32 = *(long *)(param_1 + 0x120);
      }
      goto LAB_00105088;
    }
    break;
      case 4:
switchD_001051d8_caseD_4:
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_138._8_8_;
    local_138 = auVar10 << 0x40;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x510,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = SSL_write_ex(pSVar29,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(puVar2 + 4),local_138)
    ;
    iVar22 = test_true("test/quic_multistream_test.c",0x514,&_LC162,iVar21 != 0);
    if ((iVar22 == 0) || (iVar21 = check_consistent_want(pSVar29,iVar21), iVar21 == 0))
    goto LAB_001058bf;
    iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x516,"bytes_written","op->arg1");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 5:
    uVar33 = 0xffffffffffffffff;
switchD_0010526e_caseD_5:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_138._8_8_;
    local_138 = auVar16 << 0x40;
    iVar21 = test_uint64_t_ne("test/quic_multistream_test.c",0x530,"s_stream_id","UINT64_MAX",uVar33
                              ,0xffffffffffffffff);
    if (iVar21 == 0) goto LAB_001058bf;
    uVar39 = *(undefined8 *)(puVar2 + 4);
    piVar24 = (int *)(param_1 + 0x138);
    uVar37 = *(undefined8 *)(puVar2 + 2);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar38 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar38 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar38;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_write(uVar38,uVar33,uVar37,uVar39,local_138);
    iVar21 = test_true("test/quic_multistream_test.c",0x533,
                       "ossl_quic_tserver_write(ACQUIRE_S(), s_stream_id, op->arg0, op->arg1, &bytes_written)"
                       ,iVar21 != 0);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x536,"bytes_written","op->arg1");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 6:
switchD_001051d8_caseD_6:
    lVar32 = *(long *)(puVar2 + 4);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_138._8_8_;
    local_138 = auVar11 << 0x40;
    if ((local_190 == (undefined1 *)0x0) && (lVar32 != 0)) {
      local_190 = (undefined1 *)CRYPTO_malloc((int)lVar32,"test/quic_multistream_test.c",0x55f);
      iVar21 = test_ptr("test/quic_multistream_test.c",0x55f,"tmp_buf = OPENSSL_malloc(op->arg1)",
                        local_190);
      if (iVar21 == 0) goto LAB_001058bf;
      lVar32 = *(long *)(puVar2 + 4);
    }
    iVar21 = SSL_read_ex(pSVar29,local_190 + local_198,lVar32 - local_198,local_138);
    iVar22 = check_consistent_want(pSVar29,iVar21);
    if (iVar22 == 0) goto LAB_001058bf;
    if (iVar21 != 0) {
      uVar25 = local_198 + local_138._0_8_;
      if (uVar25 == *(ulong *)(puVar2 + 4)) {
        if (uVar25 != 0) {
          iVar21 = test_mem_eq("test/quic_multistream_test.c",0x570,"tmp_buf","op->arg0",local_190,
                               uVar25,*(undefined8 *)(puVar2 + 2),uVar25);
          goto joined_r0x001080ef;
        }
        goto LAB_00106ddc;
      }
      local_198 = uVar25;
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105e58;
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x56c,"spin again in blocking mode");
      goto LAB_00105483;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x568,"spin again in blocking mode");
      goto LAB_00105483;
    }
    goto LAB_00105e58;
      case 7:
    uVar33 = 0xffffffffffffffff;
switchD_0010526e_caseD_7:
    auVar18._8_8_ = 0;
    auVar18._0_8_ = local_138._8_8_;
    local_138 = auVar18 << 0x40;
    iVar21 = test_uint64_t_ne("test/quic_multistream_test.c",0x57c,"s_stream_id","UINT64_MAX",uVar33
                             );
    if (iVar21 == 0) goto LAB_001058bf;
    lVar32 = *(long *)(puVar2 + 4);
    if ((lVar32 != 0) && (local_190 == (undefined1 *)0x0)) {
      local_190 = (undefined1 *)CRYPTO_malloc((int)lVar32,"test/quic_multistream_test.c",0x580);
      iVar21 = test_ptr("test/quic_multistream_test.c",0x580,"tmp_buf = OPENSSL_malloc(op->arg1)",
                        local_190);
      if (iVar21 == 0) goto LAB_001058bf;
      lVar32 = *(long *)(puVar2 + 4);
    }
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar39 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar39 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar39;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_read(uVar39,uVar33,local_190 + local_198,lVar32 - local_198);
    iVar21 = test_true("test/quic_multistream_test.c",0x583,
                       "ossl_quic_tserver_read(ACQUIRE_S(), s_stream_id, tmp_buf + offset, op->arg1 - offset, &bytes_read)"
                       ,iVar21 != 0);
    if (iVar21 == 0) goto LAB_001058bf;
    uVar25 = local_198 + local_138._0_8_;
    if (uVar25 == *(ulong *)(puVar2 + 4)) {
      if ((uVar25 != 0) &&
         (iVar21 = test_mem_eq("test/quic_multistream_test.c",0x58f,"tmp_buf","op->arg0",local_190,
                               uVar25,*(undefined8 *)(puVar2 + 2),uVar25), iVar21 == 0)) {
        iVar21 = 0;
        goto LAB_00105483;
      }
LAB_00106ddc:
      CRYPTO_free(local_190);
      iVar21 = 0;
      local_190 = (undefined1 *)0x0;
      lVar23 = (long)local_158;
      lVar32 = *(long *)(param_1 + 0x120);
    }
    else {
      piVar24 = (int *)(param_1 + 0x138);
      if (-1 < local_158) {
        piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
        uVar33 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar33 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar33;
        *piVar24 = 1;
      }
      ossl_quic_tserver_tick(uVar33);
      iVar21 = 1;
      lVar23 = (long)local_158;
      lVar32 = *(long *)(param_1 + 0x120);
      local_198 = uVar25;
    }
    goto LAB_00105088;
      case 8:
switchD_001051d8_caseD_8:
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_138._8_8_;
    local_138 = auVar12 << 0x40;
    iVar21 = SSL_read_ex(pSVar29,&local_41,1,local_138);
    iVar22 = check_consistent_want(pSVar29,iVar21);
    if (((iVar22 == 0) ||
        (iVar21 = test_false("test/quic_multistream_test.c",0x59f,&_LC162,iVar21 != 0), iVar21 == 0)
        ) || (iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x5a0,"bytes_read",&_LC39),
             iVar21 == 0)) goto LAB_001058bf;
    iVar21 = SSL_get_error(pSVar29,0);
    if (iVar21 - 2U < 2) {
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105e58;
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x5a4,"spin again in blocking mode");
      goto LAB_00105483;
    }
    iVar21 = SSL_get_error(pSVar29,0);
    iVar21 = test_int_eq("test/quic_multistream_test.c",0x5a6,"SSL_get_error(c_tgt, 0)",
                         "SSL_ERROR_ZERO_RETURN",iVar21,6);
    if (iVar21 == 0) goto LAB_001058bf;
    SSL_want(pSVar29);
    iVar21 = test_int_eq("test/quic_multistream_test.c",0x5aa,"SSL_want(c_tgt)","SSL_NOTHING");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 9:
    uVar33 = 0xffffffffffffffff;
switchD_0010526e_caseD_9:
    iVar21 = test_uint64_t_ne("test/quic_multistream_test.c",0x5b1,"s_stream_id","UINT64_MAX");
    if (iVar21 == 0) goto LAB_001058bf;
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar39 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar39 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar39;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_has_read_ended(uVar39,uVar33);
    if (iVar21 == 0) {
LAB_00107491:
      if (-1 < local_158) goto LAB_0010749d;
LAB_00107d07:
      piVar24 = (int *)(param_1 + 0x138);
      goto LAB_001074af;
    }
    break;
      case 10:
switchD_001051d8_caseD_a:
    iVar21 = SSL_stream_conclude(pSVar29,0);
    iVar21 = test_true("test/quic_multistream_test.c",0x53d,"SSL_stream_conclude(c_tgt, 0)",
                       iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0xb:
    uVar33 = 0xffffffffffffffff;
switchD_0010526e_caseD_b:
    iVar21 = test_uint64_t_ne("test/quic_multistream_test.c",0x544,"s_stream_id","UINT64_MAX");
    if (iVar21 == 0) goto LAB_001058bf;
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar39 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar39 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar39;
      *piVar24 = 1;
    }
    iVar21 = 0;
    ossl_quic_tserver_conclude(uVar39,uVar33);
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    goto LAB_00105088;
      case 0xc:
switchD_001051d8_caseD_c:
    iVar21 = test_ptr_null("test/quic_multistream_test.c",0x5bd,"c_tgt",pSVar29);
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x5c0,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    uVar33 = ossl_quic_detach_stream(*(undefined8 *)(param_1 + 0x70));
    iVar21 = test_ptr("test/quic_multistream_test.c",0x5c3,
                      "c_stream = ossl_quic_detach_stream(h->c_conn)",uVar33);
    lVar32 = local_160;
    if (iVar21 == 0) goto LAB_001058bf;
    pcVar35 = *(char **)(puVar2 + 8);
    iVar21 = test_ptr("test/quic_multistream_test.c",0x37a,"stream_name",pcVar35);
    if ((iVar21 == 0) || (iVar21 = strcmp(pcVar35,"DEFAULT"), iVar21 == 0)) {
LAB_00107d21:
      uVar33 = 0;
    }
    else {
      local_138._0_8_ = pcVar35;
      puVar28 = (undefined8 *)OPENSSL_LH_retrieve(lVar32,local_138);
      if (puVar28 == (undefined8 *)0x0) {
        puVar28 = (undefined8 *)CRYPTO_zalloc(0x18,"test/quic_multistream_test.c",899);
        if (puVar28 == (undefined8 *)0x0) goto LAB_00107d21;
        *puVar28 = pcVar35;
        puVar28[2] = 0xffffffffffffffff;
        OPENSSL_LH_insert(lVar32,puVar28);
      }
      puVar28[1] = uVar33;
      uVar33 = 1;
      puVar28[2] = 0xffffffffffffffff;
    }
    iVar21 = test_true("test/quic_multistream_test.c",0x5c6,
                       "helper_local_set_c_stream(hl, op->stream_name, c_stream)",uVar33);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0xd:
switchD_001051d8_caseD_d:
    iVar21 = test_ptr("test/quic_multistream_test.c",0x5cd,"c_tgt",pSVar29);
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x5d0,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    iVar21 = ossl_quic_attach_stream(*(undefined8 *)(param_1 + 0x70),pSVar29);
    iVar21 = test_true("test/quic_multistream_test.c",0x5d3,
                       "ossl_quic_attach_stream(h->c_conn, c_tgt)",iVar21 != 0);
    lVar32 = local_160;
    if (iVar21 == 0) goto LAB_001058bf;
    pcVar35 = *(char **)(puVar2 + 8);
    iVar21 = test_ptr("test/quic_multistream_test.c",0x37a,"stream_name",pcVar35);
    if ((iVar21 == 0) || (iVar21 = strcmp(pcVar35,"DEFAULT"), iVar21 == 0)) {
LAB_00107d1a:
      uVar33 = 0;
    }
    else {
      local_138._0_8_ = pcVar35;
      puVar28 = (undefined8 *)OPENSSL_LH_retrieve(lVar32,local_138);
      if (puVar28 == (undefined8 *)0x0) {
        puVar28 = (undefined8 *)CRYPTO_zalloc(0x18,"test/quic_multistream_test.c",899);
        if (puVar28 == (undefined8 *)0x0) goto LAB_00107d1a;
        *puVar28 = pcVar35;
        puVar28[2] = 0xffffffffffffffff;
        OPENSSL_LH_insert(lVar32,puVar28);
      }
      puVar28[1] = 0;
      uVar33 = 1;
      puVar28[2] = 0xffffffffffffffff;
    }
    iVar21 = test_true("test/quic_multistream_test.c",0x5d6,
                       "helper_local_set_c_stream(hl, op->stream_name, NULL)",uVar33);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0xe:
switchD_001051d8_caseD_e:
    uVar25 = *(ulong *)(puVar2 + 4);
    iVar21 = test_ptr_null("test/quic_multistream_test.c",0x5e3,"c_tgt",pSVar29);
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x5e6,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    lVar32 = SSL_new_stream(*(undefined8 *)(param_1 + 0x70),uVar25 & 0xfffffffffffeffff);
    if ((uVar25 & 0x10000) == 0) {
      iVar21 = test_ptr("test/quic_multistream_test.c",0x5ea,"c_stream",lVar32);
      if (iVar21 == 0) goto LAB_001058bf;
    }
    else if (lVar32 == 0) {
      ERR_get_error();
      iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x5ee,"ERR_GET_REASON(ERR_get_error())"
                              ,"SSL_R_STREAM_COUNT_LIMITED");
      if (iVar21 == 0) goto LAB_001058bf;
      *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 1;
      lVar23 = (long)local_158;
      iVar21 = 0;
      lVar32 = *(long *)(param_1 + 0x120);
      goto LAB_00105088;
    }
    if (*(long *)(puVar2 + 10) != -1) {
      SSL_get_stream_id(lVar32);
      iVar21 = test_uint64_t_eq("test/quic_multistream_test.c",0x5f7,"SSL_get_stream_id(c_stream)",
                                "op->arg2");
      if (iVar21 == 0) goto LAB_001058bf;
    }
    lVar23 = local_160;
    pcVar35 = *(char **)(puVar2 + 8);
    iVar21 = test_ptr("test/quic_multistream_test.c",0x37a,"stream_name",pcVar35);
    if ((iVar21 == 0) || (iVar21 = strcmp(pcVar35,"DEFAULT"), iVar21 == 0)) {
LAB_00107d79:
      uVar33 = 0;
    }
    else {
      local_138._0_8_ = pcVar35;
      puVar28 = (undefined8 *)OPENSSL_LH_retrieve(lVar23,local_138);
      if (puVar28 == (undefined8 *)0x0) {
        puVar28 = (undefined8 *)CRYPTO_zalloc(0x18,"test/quic_multistream_test.c",899);
        if (puVar28 == (undefined8 *)0x0) goto LAB_00107d79;
        *puVar28 = pcVar35;
        puVar28[2] = 0xffffffffffffffff;
        OPENSSL_LH_insert(lVar23,puVar28);
      }
      puVar28[1] = lVar32;
      uVar33 = 1;
      puVar28[2] = 0xffffffffffffffff;
    }
    iVar21 = test_true("test/quic_multistream_test.c",0x5fb,
                       "helper_local_set_c_stream(hl, op->stream_name, c_stream)",uVar33);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0xf:
    uVar33 = 0xffffffffffffffff;
switchD_0010526e_caseD_f:
    local_138._0_8_ = 0xffffffffffffffff;
    iVar21 = test_uint64_t_eq("test/quic_multistream_test.c",0x604,"s_stream_id","UINT64_MAX",uVar33
                              ,0xffffffffffffffff);
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x607,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    lVar32 = *(long *)(puVar2 + 4);
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar33 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar33 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar33;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_stream_new(uVar33,lVar32 != 0,local_138);
    iVar21 = test_true("test/quic_multistream_test.c",0x60a,
                       "ossl_quic_tserver_stream_new(ACQUIRE_S(), op->arg1 > 0, &stream_id)",
                       iVar21 != 0);
    if (iVar21 == 0) goto LAB_001058bf;
    if (*(long *)(puVar2 + 10) != -1) {
      iVar21 = test_uint64_t_eq("test/quic_multistream_test.c",0x610,"stream_id","op->arg2");
      if (iVar21 == 0) goto LAB_001058bf;
    }
    iVar21 = helper_set_s_stream(param_1,*(undefined8 *)(puVar2 + 8),local_138._0_8_);
    iVar21 = test_true("test/quic_multistream_test.c",0x613,
                       "helper_set_s_stream(h, op->stream_name, stream_id)",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x10:
switchD_001051d8_caseD_10:
    iVar21 = test_ptr_null("test/quic_multistream_test.c",0x61d,"c_tgt",pSVar29);
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x620,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    lVar23 = SSL_accept_stream(*(undefined8 *)(param_1 + 0x70),0);
    lVar32 = local_160;
    if (lVar23 == 0) {
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105e58;
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x624,"spin again in blocking mode");
      goto LAB_00105483;
    }
    pcVar35 = *(char **)(puVar2 + 8);
    iVar21 = test_ptr("test/quic_multistream_test.c",0x37a,"stream_name",pcVar35);
    if ((iVar21 == 0) || (iVar21 = strcmp(pcVar35,"DEFAULT"), iVar21 == 0)) {
LAB_00107fa1:
      uVar33 = 0;
    }
    else {
      local_138._0_8_ = pcVar35;
      puVar28 = (undefined8 *)OPENSSL_LH_retrieve(lVar32,local_138);
      if (puVar28 == (undefined8 *)0x0) {
        puVar28 = (undefined8 *)CRYPTO_zalloc(0x18,"test/quic_multistream_test.c",899);
        if (puVar28 == (undefined8 *)0x0) goto LAB_00107fa1;
        *puVar28 = pcVar35;
        puVar28[2] = 0xffffffffffffffff;
        OPENSSL_LH_insert(lVar32,puVar28);
      }
      puVar28[1] = lVar23;
      uVar33 = 1;
      puVar28[2] = 0xffffffffffffffff;
    }
    iVar21 = test_true("test/quic_multistream_test.c",0x626,
                       "helper_local_set_c_stream(hl, op->stream_name, c_stream)",uVar33);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x11:
switchD_001051d8_caseD_11:
    pSVar29 = (SSL *)SSL_accept_stream(*(undefined8 *)(param_1 + 0x70),1);
    iVar21 = test_ptr_null("test/quic_multistream_test.c",0x643,
                           "c_stream = SSL_accept_stream(h->c_conn, SSL_ACCEPT_STREAM_NO_BLOCK)",
                           pSVar29);
    if (iVar21 == 0) {
      iVar21 = 0;
      SSL_free(pSVar29);
      goto LAB_00105483;
    }
    break;
      case 0x12:
switchD_001051d8_caseD_12:
    iVar21 = test_ptr("test/quic_multistream_test.c",0x64d,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = SSL_is_connection(pSVar29);
    iVar21 = test_true("test/quic_multistream_test.c",0x64e,"!SSL_is_connection(c_tgt)",iVar21 == 0)
    ;
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x651,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), lVar32 = local_160, iVar21 == 0))
    goto LAB_001058bf;
    pcVar35 = *(char **)(puVar2 + 8);
    iVar21 = test_ptr("test/quic_multistream_test.c",0x37a,"stream_name",pcVar35);
    if ((iVar21 == 0) || (iVar21 = strcmp(pcVar35,"DEFAULT"), iVar21 == 0)) {
LAB_00107d13:
      uVar33 = 0;
    }
    else {
      local_138._0_8_ = pcVar35;
      puVar28 = (undefined8 *)OPENSSL_LH_retrieve(lVar32,local_138);
      if (puVar28 == (undefined8 *)0x0) {
        puVar28 = (undefined8 *)CRYPTO_zalloc(0x18,"test/quic_multistream_test.c",899);
        if (puVar28 == (undefined8 *)0x0) goto LAB_00107d13;
        *puVar28 = pcVar35;
        puVar28[2] = 0xffffffffffffffff;
        OPENSSL_LH_insert(lVar32,puVar28);
      }
      puVar28[1] = 0;
      uVar33 = 1;
      puVar28[2] = 0xffffffffffffffff;
    }
    iVar21 = test_true("test/quic_multistream_test.c",0x654,
                       "helper_local_set_c_stream(hl, op->stream_name, NULL)",uVar33);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = 0;
    SSL_free(pSVar29);
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    goto LAB_00105088;
      case 0x13:
switchD_001051d8_caseD_13:
    iVar21 = test_ptr("test/quic_multistream_test.c",0x65e,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = SSL_set_default_stream_mode(pSVar29,puVar2[4]);
    iVar21 = test_true("test/quic_multistream_test.c",0x661,
                       "SSL_set_default_stream_mode(c_tgt, op->arg1)",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x14:
switchD_001051d8_caseD_14:
    iVar21 = test_ptr("test/quic_multistream_test.c",0x668,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = SSL_set_incoming_stream_policy(pSVar29,puVar2[4],0);
    iVar21 = test_true("test/quic_multistream_test.c",0x66b,
                       "SSL_set_incoming_stream_policy(c_tgt, op->arg1, 0)",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x15:
switchD_001051d8_caseD_15:
    uVar33 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
    local_138 = (undefined1  [16])0x0;
    uVar33 = ossl_quic_channel_get0_engine(uVar33);
    ossl_quic_engine_set_inhibit_tick(uVar33,0);
    iVar21 = test_ptr("test/quic_multistream_test.c",0x679,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    local_138._8_8_ = *(undefined8 *)(puVar2 + 2);
    iVar21 = SSL_shutdown_ex(pSVar29,*(undefined8 *)(puVar2 + 4),local_138,0x10);
    iVar22 = test_int_ge("test/quic_multistream_test.c",0x67f,&_LC132,&_LC39);
    if (iVar22 == 0) goto LAB_001058bf;
    if (iVar21 == 0) {
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105e58;
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x683,"spin again in blocking mode");
      goto LAB_00105483;
    }
    break;
      case 0x16:
switchD_001051d8_caseD_16:
    uVar25 = *(ulong *)(puVar2 + 4);
    local_118 = 0;
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x694,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    if (*(int *)(param_1 + 0xc4) != 0) {
      iVar21 = SSL_shutdown_ex(pSVar29,8,0,0);
      iVar21 = test_true("test/quic_multistream_test.c",0x698,
                         "SSL_shutdown_ex(c_tgt, SSL_SHUTDOWN_FLAG_WAIT_PEER, NULL, 0)",iVar21 != 0)
      ;
      if (iVar21 == 0) {
        iVar21 = 0;
        goto LAB_00105483;
      }
    }
    iVar21 = SSL_get_conn_close_info(pSVar29,local_138,0x28);
    if (iVar21 != 0) {
      iVar21 = test_int_eq("test/quic_multistream_test.c",0x6a0,"expect_app",
                           "(cc_info.flags & SSL_CONN_CLOSE_FLAG_TRANSPORT) == 0",(uint)uVar25 & 1,
                           ((uint)local_118 >> 1 ^ 1) & 1);
      if (iVar21 != 0) {
        iVar21 = test_int_eq("test/quic_multistream_test.c",0x6a3,"expect_remote",
                             "(cc_info.flags & SSL_CONN_CLOSE_FLAG_LOCAL) == 0",
                             (uint)(uVar25 >> 1) & 1,~(uint)local_118 & 1);
        if ((iVar21 != 0) &&
           (iVar21 = test_uint64_t_eq("test/quic_multistream_test.c",0x6a6,"error_code",
                                      "cc_info.error_code"), iVar21 != 0)) break;
      }
      iVar21 = 0;
      test_info("test/quic_multistream_test.c",0x6a7,"Connection close reason: %s",local_128._0_8_);
      goto LAB_00105483;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x69e,"spin again in blocking mode");
      goto LAB_00105483;
    }
LAB_00105e58:
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    iVar21 = 1;
    goto LAB_00105088;
      case 0x17:
switchD_001051d8_caseD_17:
    uVar33 = *(undefined8 *)(puVar2 + 4);
    uVar39 = *(undefined8 *)(puVar2 + 10);
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar37 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar37 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar37;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_is_term_any(uVar37);
    if (iVar21 == 0) {
      piVar24 = (int *)(param_1 + 0x138);
      if (-1 < local_158) {
        piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
        uVar33 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar33 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar33;
        *piVar24 = 1;
      }
      ossl_quic_tserver_ping(uVar33);
      goto LAB_00107491;
    }
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar37 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar37 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar37;
      *piVar24 = 1;
    }
    puVar28 = (undefined8 *)ossl_quic_tserver_get_terminate_cause(uVar37);
    iVar21 = test_ptr("test/quic_multistream_test.c",0x6b9,
                      "tc = ossl_quic_tserver_get_terminate_cause(ACQUIRE_S())",puVar28);
    if (((iVar21 == 0) ||
        (iVar21 = test_uint64_t_eq("test/quic_multistream_test.c",0x6bc,"error_code",
                                   "tc->error_code",uVar39,*puVar28), iVar21 == 0)) ||
       (iVar21 = test_int_eq("test/quic_multistream_test.c",0x6bd,"expect_app","tc->app",
                             (uint)uVar33 & 1,*(byte *)(puVar28 + 4) & 1), iVar21 == 0))
    goto LAB_001058bf;
    iVar21 = test_int_eq("test/quic_multistream_test.c",0x6be,"expect_remote","tc->remote");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x18:
switchD_0010526e_caseD_18:
    iVar21 = test_uint64_t_eq("test/quic_multistream_test.c",0x6c5,"s_stream_id","UINT64_MAX");
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x6c8,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    iVar21 = helper_set_s_stream(param_1,*(undefined8 *)(puVar2 + 8),*(undefined8 *)(puVar2 + 10));
    iVar21 = test_true("test/quic_multistream_test.c",0x6cb,
                       "helper_set_s_stream(h, op->stream_name, op->arg2)",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x19:
switchD_001051d8_caseD_19:
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_138._8_8_;
    local_138 = auVar15 << 0x40;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x550,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = SSL_peek_ex(pSVar29,&local_41,1,local_138);
    if ((iVar21 == 0) || (local_138._0_8_ == 0)) {
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105e58;
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x555,"spin again in blocking mode");
      goto LAB_00105483;
    }
    break;
      case 0x1a:
switchD_001051d8_caseD_1a:
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_138._8_8_;
    local_138 = auVar9 << 0x40;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x6e2,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar22 = SSL_write_ex(pSVar29,"apple",5,local_138);
    iVar21 = test_false("test/quic_multistream_test.c",0x6e6,&_LC162,iVar22 != 0);
    if (iVar21 != 0) goto LAB_001058ad;
    iVar21 = 0;
    goto LAB_00105483;
      case 0x1b:
    uVar33 = 0xffffffffffffffff;
switchD_0010526e_caseD_1b:
    auVar19._8_8_ = 0;
    auVar19._0_8_ = local_138._8_8_;
    local_138 = auVar19 << 0x40;
    iVar21 = test_uint64_t_ne("test/quic_multistream_test.c",0x6f0,"s_stream_id","UINT64_MAX",uVar33
                             );
    if (iVar21 == 0) goto LAB_001058bf;
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar39 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar39 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar39;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_write(uVar39,uVar33,"apple",5);
    iVar21 = test_false("test/quic_multistream_test.c",0x6f3,
                        "ossl_quic_tserver_write(ACQUIRE_S(), s_stream_id, (const unsigned char *)\"apple\", 5, &bytes_written)"
                        ,iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x1c:
switchD_001051d8_caseD_1c:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_138._8_8_;
    local_138 = auVar8 << 0x40;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x700,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar22 = SSL_read_ex(pSVar29,&local_41,1,local_138);
    iVar21 = test_false("test/quic_multistream_test.c",0x704,&_LC162,iVar22 != 0);
    if (iVar21 == 0) goto LAB_001058bf;
LAB_001058ad:
    iVar21 = check_consistent_want(pSVar29,iVar22);
joined_r0x00105822:
    if (iVar21 == 0) goto LAB_001058bf;
    break;
      case 0x1d:
switchD_001051d8_caseD_1d:
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_138._8_8_;
    local_138 = auVar7 << 0x40;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x735,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    local_138._0_8_ = *(undefined8 *)(puVar2 + 10);
    if (*puVar2 != 0x1d) {
      iVar21 = SSL_stream_reset(pSVar29,local_138,8);
      iVar21 = test_false("test/quic_multistream_test.c",0x73d,
                          "SSL_stream_reset(c_tgt, &args, sizeof(args))",iVar21 != 0);
      goto joined_r0x00105822;
    }
    iVar21 = SSL_stream_reset(pSVar29,local_138,8);
    iVar21 = test_true("test/quic_multistream_test.c",0x73a,
                       "SSL_stream_reset(c_tgt, &args, sizeof(args))",iVar21 != 0);
    if (iVar21 != 0) break;
    iVar21 = 0;
    goto LAB_00105483;
      case 0x1e:
switchD_0010526e_caseD_1e:
    iVar21 = test_uint64_t_eq("test/quic_multistream_test.c",0x630,"s_stream_id","UINT64_MAX");
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x633,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar33 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar33 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar33;
      *piVar24 = 1;
    }
    lVar32 = ossl_quic_tserver_pop_incoming_stream(uVar33);
    if (lVar32 == -1) goto LAB_00107491;
    iVar21 = helper_set_s_stream(param_1,*(undefined8 *)(puVar2 + 8),lVar32);
    iVar21 = test_true("test/quic_multistream_test.c",0x63a,
                       "helper_set_s_stream(h, op->stream_name, new_stream_id)",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x1f:
switchD_001051d8_caseD_1f:
    iVar21 = test_ptr_null("test/quic_multistream_test.c",0x750,"h->threads",
                           *(undefined8 *)(param_1 + 0x80));
    if (iVar21 == 0) {
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x751,"max one NEW_THREAD operation per script");
      goto LAB_00105483;
    }
    uVar33 = CRYPTO_zalloc(*(long *)(puVar2 + 4) << 6,"test/quic_multistream_test.c",0x755);
    *(undefined8 *)(param_1 + 0x80) = uVar33;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x756,"h->threads",uVar33);
    if (iVar21 == 0) goto LAB_001058bf;
    lVar32 = *(long *)(puVar2 + 4);
    uVar25 = 0;
    *(long *)(param_1 + 0x88) = lVar32;
    if (lVar32 != 0) {
      do {
        lVar23 = uVar25 * 0x40;
        lVar32 = *(long *)(puVar2 + 2);
        plVar34 = (long *)(*(long *)(param_1 + 0x80) + lVar23);
        plVar34[2] = param_3;
        *(int *)(plVar34 + 3) = (int)uVar25;
        *plVar34 = param_1;
        plVar34[1] = lVar32;
        lVar32 = ossl_crypto_mutex_new();
        plVar34[5] = lVar32;
        iVar21 = test_ptr("test/quic_multistream_test.c",0x762,"h->threads[i].m",
                          *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28 + lVar23));
        if (iVar21 == 0) {
          iVar21 = 0;
          goto LAB_00105483;
        }
        lVar32 = *(long *)(param_1 + 0x80) + lVar23;
        uVar33 = ossl_crypto_thread_native_start(run_script_child_thread,lVar32,1);
        *(undefined8 *)(lVar32 + 0x20) = uVar33;
        iVar21 = test_ptr("test/quic_multistream_test.c",0x768,"h->threads[i].t",
                          *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20 + lVar23));
        if (iVar21 == 0) goto LAB_001058bf;
        uVar25 = uVar25 + 1;
      } while (uVar25 < *(ulong *)(puVar2 + 4));
    }
    break;
      case 0x20:
switchD_001051d8_caseD_20:
    iVar21 = test_size_t_lt("test/quic_multistream_test.c",0x4a7,"repeat_stack_len",
                            "OSSL_NELEM(repeat_stack_idx)",local_178);
    if ((iVar21 == 0) ||
       (iVar21 = test_size_t_gt("test/quic_multistream_test.c",0x4aa,"op->arg1",&_LC39), iVar21 == 0
       )) goto LAB_001058bf;
    lVar32 = *(long *)(param_1 + 0x120);
    iVar21 = 0;
    local_c8[local_178] = 0;
    local_108[local_178] = local_1b0 + 1;
    local_88[local_178] = *(long *)(puVar2 + 4);
    local_178 = local_178 + 1;
    lVar23 = (long)local_158;
    goto LAB_00105088;
      case 0x21:
switchD_001051d8_caseD_21:
    iVar21 = test_size_t_gt("test/quic_multistream_test.c",0x4c2,"repeat_stack_len",&_LC39);
    if (iVar21 == 0) goto LAB_001058bf;
    lVar1 = local_178 + -1;
    lVar32 = *(long *)(param_1 + 0x120);
    lVar5 = local_c8[lVar1];
    lVar23 = (long)local_158;
    local_c8[lVar1] = lVar5 + 1;
    if (lVar5 + 1 == local_88[lVar1]) {
      iVar21 = 0;
      local_178 = lVar1;
    }
    else {
      local_1b0 = local_108[lVar1];
      iVar21 = 1;
    }
    goto LAB_00105088;
      case 0x22:
switchD_0010526e_caseD_22:
    iVar21 = test_uint64_t_ne("test/quic_multistream_test.c",0x6d2,"s_stream_id","UINT64_MAX");
    if ((iVar21 == 0) ||
       (iVar21 = test_ptr("test/quic_multistream_test.c",0x6d5,"op->stream_name",
                          *(undefined8 *)(puVar2 + 8)), iVar21 == 0)) goto LAB_001058bf;
    iVar21 = helper_set_s_stream(param_1,*(undefined8 *)(puVar2 + 8),0xffffffffffffffff);
    iVar21 = test_true("test/quic_multistream_test.c",0x6d8,
                       "helper_set_s_stream(h, op->stream_name, UINT64_MAX)",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x23:
switchD_001051d8_caseD_23:
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_138._8_8_;
    local_138 = auVar13 << 0x40;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x711,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = SSL_read_ex(pSVar29,&local_41,1,local_138);
    iVar21 = test_false("test/quic_multistream_test.c",0x715,&_LC162,iVar21 != 0);
    if ((iVar21 == 0) || (iVar21 = check_consistent_want(pSVar29), iVar21 == 0)) goto LAB_001058bf;
    iVar21 = SSL_get_error(pSVar29,0);
    if (iVar21 - 2U < 2) {
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105e58;
      iVar21 = 0;
      test_error("test/quic_multistream_test.c",0x71b,"spin again in blocking mode");
      goto LAB_00105483;
    }
    break;
      case 0x24:
switchD_001051d8_caseD_24:
    iVar21 = 0;
    BIO_closesocket(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    lVar32 = *(long *)(param_1 + 0x120);
    lVar23 = (long)local_158;
    goto LAB_00105088;
      case 0x25:
switchD_001051d8_caseD_25:
    uVar33 = *(undefined8 *)(puVar2 + 4);
    iVar21 = SSL_get_error(pSVar29,0);
    iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x778,"(size_t)SSL_get_error(c_tgt, 0)",
                            "op->arg1",(long)iVar21,uVar33);
    if (iVar21 == 0) goto LAB_001058bf;
    SSL_want(pSVar29);
    iVar21 = test_int_eq("test/quic_multistream_test.c",0x77a,"SSL_want(c_tgt)","SSL_NOTHING");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x26:
switchD_001051d8_caseD_26:
    ERR_peek_last_error();
    iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x781,
                            "(size_t)ERR_GET_REASON(ERR_peek_last_error())","op->arg1");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x27:
switchD_001051d8_caseD_27:
    ERR_peek_last_error();
    iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x788,
                            "(size_t)ERR_GET_LIB(ERR_peek_last_error())","op->arg1");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x28:
switchD_001051d8_caseD_28:
    iVar21 = 0;
    OSSL_sleep(*(undefined8 *)(puVar2 + 10));
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    goto LAB_00105088;
      case 0x29:
    uVar33 = 0xffffffffffffffff;
switchD_0010526e_caseD_29:
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_138._8_8_;
    local_138 = auVar17 << 0x40;
    iVar21 = test_uint64_t_ne("test/quic_multistream_test.c",0x725,"s_stream_id","UINT64_MAX",uVar33
                             );
    if (iVar21 == 0) goto LAB_001058bf;
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar39 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar39 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar39;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_read(uVar39,uVar33,&local_41,1);
    bVar41 = true;
    if ((iVar21 != 0) && (bVar41 = false, *(long *)(puVar2 + 4) != 0)) {
      bVar41 = local_138._0_8_ == 0;
    }
    iVar21 = test_true("test/quic_multistream_test.c",0x72b,
                       "ret == 0 || (op->arg1 && bytes_read == 0)",bVar41);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x2a:
switchD_001051d8_caseD_2a:
    pcVar36 = *(code **)(puVar2 + 0xc);
    *(code **)(param_1 + 0xd8) = pcVar36;
    if (pcVar36 != (code *)0x0) {
      pcVar36 = helper_packet_plain_listener;
    }
    iVar21 = qtest_fault_set_packet_plain_listener(*(undefined8 *)(param_1 + 0xb8),pcVar36,param_1);
    iVar21 = test_true("test/quic_multistream_test.c",0x79a,
                       "qtest_fault_set_packet_plain_listener(h->qtf, h->qtf_packet_plain_cb != NULL ? helper_packet_plain_listener : NULL, h)"
                       ,iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x2b:
switchD_001051d8_caseD_2b:
    lVar23 = (long)local_158;
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    lVar32 = *(long *)(param_1 + 0x120);
    if ((lVar32 != 0) && (*piVar24 == 0)) {
      ossl_crypto_mutex_lock();
      lVar32 = *(long *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
      *piVar24 = 1;
      lVar23 = (long)local_158;
    }
    uVar33 = *(undefined8 *)(puVar2 + 10);
    iVar21 = 0;
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(puVar2 + 4);
    *(undefined8 *)(param_1 + 0xf8) = uVar33;
    goto LAB_00105088;
      case 0x2c:
switchD_001051d8_caseD_2c:
    iVar21 = 0;
    uVar33 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
    uVar20 = puVar2[4];
    uVar33 = ossl_quic_channel_get0_engine(uVar33);
    ossl_quic_engine_set_inhibit_tick(uVar33,uVar20);
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    goto LAB_00105088;
      case 0x2d:
switchD_001051d8_caseD_2d:
    iVar21 = test_ptr("test/quic_multistream_test.c",0x7cc,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = ossl_quic_set_write_buffer_size(pSVar29,*(undefined8 *)(puVar2 + 4));
    iVar21 = test_true("test/quic_multistream_test.c",1999,
                       "ossl_quic_set_write_buffer_size(c_tgt, op->arg1)",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x2e:
switchD_001051d8_caseD_2e:
    pcVar36 = *(code **)(puVar2 + 0xe);
    *(code **)(param_1 + 0xe0) = pcVar36;
    if (pcVar36 != (code *)0x0) {
      pcVar36 = helper_handshake_listener;
    }
    iVar21 = qtest_fault_set_handshake_listener(*(undefined8 *)(param_1 + 0xb8),pcVar36,param_1);
    iVar21 = test_true("test/quic_multistream_test.c",0x7a5,
                       "qtest_fault_set_handshake_listener(h->qtf, h->qtf_handshake_cb != NULL ? helper_handshake_listener : NULL, h)"
                       ,iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x2f:
switchD_001051d8_caseD_2f:
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar33 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar33 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar33;
      *piVar24 = 1;
    }
    iVar21 = ossl_quic_tserver_new_ticket(uVar33);
    iVar21 = test_true("test/quic_multistream_test.c",0x7d5,
                       "ossl_quic_tserver_new_ticket(ACQUIRE_S())",iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x30:
switchD_001051d8_caseD_30:
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    iVar21 = 0;
    if (pSVar29 == (SSL *)0x0) {
      local_1b0 = local_1b0 + *(long *)(puVar2 + 4);
    }
    goto LAB_00105088;
      case 0x31:
switchD_001051d8_caseD_31:
    pcVar36 = *(code **)(puVar2 + 0x10);
    *(code **)(param_1 + 0xe8) = pcVar36;
    if (pcVar36 != (code *)0x0) {
      pcVar36 = helper_datagram_listener;
    }
    iVar21 = qtest_fault_set_datagram_listener(*(undefined8 *)(param_1 + 0xb8),pcVar36,param_1);
    iVar21 = test_true("test/quic_multistream_test.c",0x7b0,
                       "qtest_fault_set_datagram_listener(h->qtf, h->qtf_datagram_cb != NULL ? helper_datagram_listener : NULL, h)"
                       ,iVar21 != 0);
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
    break;
      case 0x32:
switchD_001051d8_caseD_32:
    uVar33 = *(undefined8 *)(puVar2 + 4);
    piVar24 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar24 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar24 != 0)) {
      uVar39 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar39 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar39;
      *piVar24 = 1;
    }
    iVar21 = 0;
    ossl_quic_tserver_shutdown(uVar39,uVar33);
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    goto LAB_00105088;
      case 0x33:
switchD_001051d8_caseD_33:
    ERR_pop();
    iVar21 = 0;
    lVar23 = (long)local_158;
    lVar32 = *(long *)(param_1 + 0x120);
    goto LAB_00105088;
      case 0x34:
switchD_001051d8_caseD_34:
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_138._8_8_;
    local_138 = auVar14 << 0x40;
    iVar21 = test_ptr("test/quic_multistream_test.c",0x520,"c_tgt",pSVar29);
    if (iVar21 == 0) goto LAB_001058bf;
    iVar21 = SSL_write_ex2(pSVar29,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(puVar2 + 4),
                           *(undefined8 *)(puVar2 + 10),local_138);
    iVar22 = test_true("test/quic_multistream_test.c",0x525,&_LC162,iVar21 != 0);
    if ((iVar22 == 0) || (iVar21 = check_consistent_want(pSVar29,iVar21), iVar21 == 0))
    goto LAB_001058bf;
    iVar21 = test_size_t_eq("test/quic_multistream_test.c",0x527,"bytes_written","op->arg1");
    if (iVar21 == 0) {
      iVar21 = 0;
      goto LAB_00105483;
    }
   }
   lVar23 = (long)local_158;
   lVar32 = *(long*)( param_1 + 0x120 );
   iVar21 = 0;
   goto LAB_00105088;
   switchD_0010526e_caseD_35:iVar21 = *(int*)( param_1 + 0xc4 );
   lVar23 = (long)local_158;
   lVar32 = *(long*)( param_1 + 0x120 );
   if (iVar21 != 0) {
      iVar21 = 0;
      local_1b0 = local_1b0 + *(long*)( puVar2 + 4 );
   }
   goto LAB_00105088;
   switchD_001051d8_caseD_0:iVar21 = test_size_t_eq("test/quic_multistream_test.c", 0x486, "repeat_stack_len", &_LC39, local_178, 0);
   if (iVar21 == 0) {
      LAB_001058bf:iVar21 = 0;
   } else {
      if (( param_4 < 0 ) && ( uVar25 = uVar25 != 0 )) {
         uVar40 = 0;
         bVar6 = false;
         do {
            if (*(long*)( *(long*)( param_1 + 0x80 ) + 0x28 + uVar40 * 0x40 ) != 0) {
               ossl_crypto_mutex_lock();
               lVar32 = uVar40 * 0x40 + *(long*)( param_1 + 0x80 );
               iVar21 = *(int*)( lVar32 + 0x34 );
               ossl_crypto_mutex_unlock(*(undefined8*)( lVar32 + 0x28 ));
               if (iVar21 == 0) {
                  if (!bVar6) {
                     test_info("test/quic_multistream_test.c", 0x498, "still waiting for other threads to finish (%zu)", uVar40);
                  }
                  piVar24 = (int*)( param_1 + 0x138 );
                  if (-1 < local_158) {
                     piVar24 = (int*)( (long)local_158 * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
                  }
                  if (( *(long*)( param_1 + 0x120 ) == 0 ) || ( *piVar24 != 0 )) {
                     uVar33 = *(undefined8*)( param_1 + 0x38 );
                  } else {
                     ossl_crypto_mutex_lock();
                     uVar33 = *(undefined8*)( param_1 + 0x40 );
                     *(undefined8*)( param_1 + 0x38 ) = uVar33;
                     *piVar24 = 1;
                  }
                  ossl_quic_tserver_tick(uVar33);
                  bVar6 = true;
                  uVar25 = *(ulong*)( param_1 + 0x88 );
               } else {
                  uVar25 = *(ulong*)( param_1 + 0x88 );
               }
            }
            uVar40 = uVar40 + 1;
         } while ( uVar40 < uVar25 );
      }
      iVar21 = 1;
      test_info("test/quic_multistream_test.c", 0x4a2, "script \"%s\" finished on thread %d", param_3, param_4);
   }
   LAB_00105483:if (local_158 < 0) {
      piVar24 = (int*)( param_1 + 0x138 );
   } else {
      piVar24 = (int*)( (long)local_158 * 0x40 + *(long*)( param_1 + 0x80 ) + 0x38 );
   }
   if (( *(long*)( param_1 + 0x120 ) != 0 ) && ( *piVar24 != 0 )) {
      *piVar24 = 0;
      *(undefined8*)( param_1 + 0x38 ) = 0;
      ossl_crypto_mutex_unlock();
   }
   if (iVar21 == 0) {
      test_error("test/quic_multistream_test.c", 0x7e6, "failed in script \"%s\" at op %zu, thread %d\n", param_3, local_1b0 + 1, param_4);
      if (local_178 != 0) {
         lVar32 = 0;
         do {
            plVar34 = local_c8 + lVar32;
            plVar3 = local_108 + lVar32;
            plVar4 = local_88 + lVar32;
            lVar32 = lVar32 + 1;
            test_info("test/quic_multistream_test.c", 0x7ea, "while repeating, iteration %zu of %zu, starting at script op %zu", *plVar34, *plVar4, *plVar3);
         } while ( local_178 != lVar32 );
      }
      ERR_print_errors_fp(_stderr);
      if (*(long*)( param_1 + 0x70 ) != 0) {
         local_118 = 0;
         local_138 = (undefined1[16])0x0;
         local_128 = (undefined1[16])0x0;
         iVar22 = SSL_get_conn_close_info(*(long*)( param_1 + 0x70 ), local_138, 0x28);
         if (iVar22 != 0) {
            puVar26 = (undefined*)ossl_quic_err_to_string(local_138._0_8_);
            puVar27 = (undefined*)ossl_quic_frame_type_to_string(local_138._8_8_);
            if (puVar26 == (undefined*)0x0) {
               puVar26 = &_LC138;
            }
            if (puVar27 == (undefined*)0x0) {
               puVar27 = &_LC138;
            }
            pcVar35 = "app";
            puVar31 = (undefined*)local_128._0_8_;
            if ((undefined*)local_128._0_8_ == (undefined*)0x0) {
               puVar31 = &_LC139;
            }
            if (( local_118 & 2 ) != 0) {
               pcVar35 = "transport";
            }
            pcVar30 = "remote";
            if (( local_118 & 1 ) != 0) {
               pcVar30 = "local";
            }
            test_info("test/quic_multistream_test.c", 0x7fd, "client side is closed: %llu(%s)/%llu(%s), %s, %s, reason: \"%s\"", local_138._0_8_, puVar26, local_138._8_8_, puVar27, pcVar30, pcVar35, puVar31);
         }
      }
      if (( *(long*)( param_1 + 0x38 ) != 0 ) && ( puVar28 = (undefined8*)ossl_quic_tserver_get_terminate_cause() ),puVar28 != (undefined8*)0x0) {
         puVar26 = (undefined*)ossl_quic_err_to_string(*puVar28);
         puVar27 = (undefined*)ossl_quic_frame_type_to_string(puVar28[1]);
         if (puVar26 == (undefined*)0x0) {
            puVar26 = &_LC138;
         }
         if (puVar27 == (undefined*)0x0) {
            puVar27 = &_LC138;
         }
         puVar31 = (undefined*)puVar28[2];
         pcVar35 = "transport";
         if (puVar31 == (undefined*)0x0) {
            puVar31 = &_LC139;
         }
         if (( *(byte*)( puVar28 + 4 ) & 1 ) != 0) {
            pcVar35 = "app";
         }
         pcVar30 = "local";
         if (( *(byte*)( puVar28 + 4 ) & 2 ) != 0) {
            pcVar30 = "remote";
         }
         test_info("test/quic_multistream_test.c", 0x816, "server side is closed: %llu(%s)/%llu(%s), %s, %s, reason: \"%s\"", *puVar28, puVar26, puVar28[1], puVar27, pcVar30, pcVar35, puVar31);
      }
   }
   CRYPTO_free(local_190);
   if (( ( local_168 != 0 ) && ( -1 < local_158 ) ) && ( local_160 != 0 )) {
      OPENSSL_LH_doall(local_160, cleanup_stream);
      OPENSSL_LH_free(local_160);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar21;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 run_script_child_thread(undefined8 *param_1) {
   undefined4 uVar1;
   uVar1 = run_script_worker(*param_1, param_1[1], param_1[2], *(undefined4*)( param_1 + 3 ));
   ossl_crypto_mutex_lock(param_1[5]);
   *(undefined4*)( param_1 + 6 ) = uVar1;
   *(undefined4*)( (long)param_1 + 0x34 ) = 1;
   ossl_crypto_mutex_unlock(param_1[5]);
   return 1;
}bool run_script(undefined8 param_1, undefined8 param_2, undefined4 param_3, int param_4) {
   undefined2 uVar1;
   int iVar2;
   undefined8 uVar3;
   BIO_METHOD *type;
   BIO *pBVar4;
   SSL_METHOD *meth;
   long lVar5;
   int *piVar6;
   long lVar7;
   undefined4 uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   undefined4 local_264;
   void *local_260;
   undefined1 local_258[16];
   undefined1 local_248[16];
   undefined1 local_238[16];
   undefined1 local_228[16];
   undefined8 local_218;
   int local_208[2];
   BIO *local_200;
   BIO *pBStack_1f8;
   BIO *local_1f0;
   BIO *pBStack_1e8;
   undefined8 local_1e0;
   void *local_1d8;
   undefined8 local_1d0;
   undefined8 local_1c8;
   undefined8 local_1c0;
   int local_1b8;
   BIO *local_1b0;
   BIO *pBStack_1a8;
   SSL_CTX *local_1a0;
   SSL *local_198;
   undefined8 local_190;
   long local_188;
   long local_180;
   undefined8 local_178;
   undefined8 local_170;
   undefined8 local_168;
   undefined8 local_160;
   undefined8 local_150;
   undefined4 local_148;
   int local_144;
   undefined4 local_13c;
   undefined4 local_138;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   char local_c8[136];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_264 = 0;
   local_258 = (undefined1[16])0x0;
   local_218 = 0;
   local_248 = (undefined1[16])0x0;
   local_238 = (undefined1[16])0x0;
   local_228 = (undefined1[16])0x0;
   piVar6 = local_208;
   for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
      piVar6[0] = 0;
      piVar6[1] = 0;
      piVar6 = piVar6 + 2;
   }
   local_1b8 = -1;
   local_208[0] = -1;
   local_138 = 1;
   local_144 = param_4;
   local_13c = param_3;
   lVar5 = CRYPTO_zalloc(0x10, "test/quic_multistream_test.c", 0x2b6);
   if (lVar5 == 0) {
      LAB_001083d0:helper_cleanup(local_208);
      uVar3 = 0;
   } else {
      local_160 = CRYPTO_THREAD_lock_new();
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2ba, "h->time_lock = CRYPTO_THREAD_lock_new()", local_160);
      if (iVar2 == 0) goto LAB_001083d0;
      uVar3 = OPENSSL_LH_new(stream_info_hash, stream_info_cmp);
      local_1c0 = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_STREAM_INFO_cfn_thunk, lh_STREAM_INFO_doall_thunk, lh_STREAM_INFO_doall_arg_thunk);
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2bd, "h->s_streams = lh_STREAM_INFO_new(stream_info_hash, stream_info_cmp)", local_1c0);
      if (iVar2 == 0) goto LAB_001083d0;
      uVar3 = OPENSSL_LH_new(stream_info_hash, stream_info_cmp);
      local_190 = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_STREAM_INFO_cfn_thunk, lh_STREAM_INFO_doall_thunk, lh_STREAM_INFO_doall_arg_thunk);
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2c1, "h->c_streams = lh_STREAM_INFO_new(stream_info_hash, stream_info_cmp)", local_190);
      if (iVar2 == 0) goto LAB_001083d0;
      local_264 = 0x100007f;
      local_208[0] = BIO_socket(2, 2, 0x11, 0);
      iVar2 = test_int_ge("test/quic_multistream_test.c", 0x2c8, "h->s_fd", &_LC39, local_208[0], 0);
      if (iVar2 == 0) goto LAB_001083d0;
      iVar2 = BIO_socket_nbio(local_208[0], 1);
      iVar2 = test_true("test/quic_multistream_test.c", 0x2cb, "BIO_socket_nbio(h->s_fd, 1)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      local_1e0 = BIO_ADDR_new();
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2ce, "h->s_net_bio_orig_addr = BIO_ADDR_new()", local_1e0);
      if (iVar2 == 0) goto LAB_001083d0;
      local_1d8 = (void*)BIO_ADDR_new();
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2cf, "h->s_net_bio_addr = BIO_ADDR_new()", local_1d8);
      if (iVar2 == 0) goto LAB_001083d0;
      iVar2 = BIO_ADDR_rawmake(local_1e0, 2, &local_264, 4, 0);
      iVar2 = test_true("test/quic_multistream_test.c", 0x2d2, "BIO_ADDR_rawmake(h->s_net_bio_orig_addr, AF_INET, &ina, sizeof(ina), 0)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      iVar2 = BIO_bind(local_208[0], local_1e0, 0);
      iVar2 = test_true("test/quic_multistream_test.c", 0x2d6, "BIO_bind(h->s_fd, h->s_net_bio_orig_addr, 0)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      local_260 = local_1d8;
      iVar2 = BIO_sock_info(local_208[0], 0, &local_260);
      iVar2 = test_true("test/quic_multistream_test.c", 0x2da, "BIO_sock_info(h->s_fd, BIO_SOCK_INFO_ADDRESS, &info)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      uVar1 = BIO_ADDR_rawport(local_1d8);
      iVar2 = test_int_gt("test/quic_multistream_test.c", 0x2dd, "BIO_ADDR_rawport(h->s_net_bio_addr)", &_LC39, uVar1, 0);
      if (iVar2 == 0) goto LAB_001083d0;
      local_200 = BIO_new_dgram(local_208[0], 0);
      pBStack_1f8 = local_200;
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2e0, "h->s_net_bio = h->s_net_bio_own = BIO_new_dgram(h->s_fd, 0)", local_200);
      if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_001083d0;
      type = (BIO_METHOD*)qtest_get_bio_method();
      local_1f0 = BIO_new(type);
      pBStack_1e8 = local_1f0;
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2e8, "h->s_qtf_wbio", local_1f0);
      if (iVar2 == 0) goto LAB_001083d0;
      pBVar4 = BIO_push(local_1f0, local_200);
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2eb, "BIO_push(h->s_qtf_wbio, h->s_net_bio)", pBVar4);
      if (iVar2 == 0) goto LAB_001083d0;
      local_228._8_8_ = 0;
      local_228._0_8_ = local_208;
      local_238._8_8_ = get_time;
      local_238._0_8_ = local_1f0;
      local_248._8_8_ = 0;
      local_248._0_8_ = local_200;
      local_248 = local_248 << 0x40;
      local_1c8 = ossl_quic_tserver_new(local_258, certfile, keyfile);
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x2f9, "h->s_priv = ossl_quic_tserver_new(&s_args, certfile, keyfile)", local_1c8);
      if (iVar2 == 0) goto LAB_001083d0;
      if (param_4 == 0) {
         local_1d0 = local_1c8;
      }
      local_150 = qtest_create_injector();
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x301, "h->qtf", local_150);
      if (iVar2 == 0) goto LAB_001083d0;
      *(undefined8*)( lVar5 + 8 ) = local_150;
      BIO_set_data(local_1f0);
      pBStack_1f8 = (BIO*)0x0;
      pBStack_1e8 = (BIO*)0x0;
      local_1b8 = BIO_socket(2, 2, 0x11, 0);
      iVar2 = test_int_ge("test/quic_multistream_test.c", 0x30b, "h->c_fd", &_LC39, local_1b8, 0);
      if (iVar2 == 0) goto LAB_001083d0;
      iVar2 = BIO_socket_nbio(local_1b8, 1);
      iVar2 = test_true("test/quic_multistream_test.c", 0x30e, "BIO_socket_nbio(h->c_fd, 1)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      local_1b0 = BIO_new_dgram(local_1b8, 0);
      pBStack_1a8 = local_1b0;
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x311, "h->c_net_bio = h->c_net_bio_own = BIO_new_dgram(h->c_fd, 0)", local_1b0);
      if (iVar2 == 0) goto LAB_001083d0;
      lVar5 = BIO_ctrl(local_1b0, 0x2c, 0, local_1d8);
      iVar2 = test_true("test/quic_multistream_test.c", 0x314, "BIO_dgram_set_peer(h->c_net_bio, h->s_net_bio_addr)", (int)lVar5 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      meth = (SSL_METHOD*)OSSL_QUIC_client_method();
      local_1a0 = SSL_CTX_new(meth);
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x317, "h->c_ctx = SSL_CTX_new(OSSL_QUIC_client_method())", local_1a0);
      if (iVar2 == 0) goto LAB_001083d0;
      BIO_snprintf(local_c8, 0x80, "quic_multistream_test: %s", param_2);
      iVar2 = ossl_quic_set_diag_title(local_1a0, local_c8);
      iVar2 = test_true("test/quic_multistream_test.c", 0x31c, "ossl_quic_set_diag_title(h->c_ctx, title)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      local_198 = SSL_new(local_1a0);
      iVar2 = test_ptr("test/quic_multistream_test.c", 799, "h->c_conn = SSL_new(h->c_ctx)", local_198);
      if (iVar2 == 0) goto LAB_001083d0;
      ossl_quic_set_override_now_cb(local_198, get_time, local_208);
      iVar2 = test_true("test/quic_multistream_test.c", 0x323, "ossl_quic_set_override_now_cb(h->c_conn, get_time, h)");
      if (iVar2 == 0) goto LAB_001083d0;
      SSL_set0_rbio(local_198, local_1b0);
      pBStack_1a8 = (BIO*)0x0;
      iVar2 = BIO_up_ref(local_1b0);
      iVar2 = test_true("test/quic_multistream_test.c", 0x32a, "BIO_up_ref(h->c_net_bio)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      SSL_set0_wbio(local_198, local_1b0);
      iVar2 = SSL_set_blocking_mode(local_198, local_144);
      iVar2 = test_true("test/quic_multistream_test.c", 0x32f, "SSL_set_blocking_mode(h->c_conn, h->blocking)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001083d0;
      local_178 = ossl_crypto_mutex_new();
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x333, "h->misc_m = ossl_crypto_mutex_new()", local_178);
      if (iVar2 == 0) goto LAB_001083d0;
      local_170 = ossl_crypto_condvar_new();
      iVar2 = test_ptr("test/quic_multistream_test.c", 0x335, "h->misc_cv = ossl_crypto_condvar_new()", local_170);
      if (iVar2 == 0) goto LAB_001083d0;
      if (local_144 != 0) {
         local_e8 = ossl_crypto_mutex_new();
         iVar2 = test_ptr("test/quic_multistream_test.c", 0x33b, "h->server_thread.m = ossl_crypto_mutex_new()", local_e8);
         if (iVar2 != 0) {
            local_e0 = ossl_crypto_condvar_new();
            iVar2 = test_ptr("test/quic_multistream_test.c", 0x33e, "h->server_thread.c = ossl_crypto_condvar_new()", local_e0);
            if (iVar2 != 0) {
               local_f0 = ossl_crypto_thread_native_start(server_helper_thread, local_208, 1);
               iVar2 = test_ptr("test/quic_multistream_test.c", 0x343, "h->server_thread.t", local_f0);
               if (iVar2 != 0) goto LAB_00108c17;
            }
         }
         goto LAB_001083d0;
      }
      LAB_00108c17:local_168 = ossl_time_now();
      uVar3 = 1;
      local_148 = 1;
   }
   iVar2 = test_true("test/quic_multistream_test.c", 0x82f, "helper_init(&h, script_name, free_order, blocking, 1)", uVar3);
   if (iVar2 != 0) {
      iVar2 = run_script_worker(local_208, param_1, param_2, 0xffffffff);
      iVar2 = test_true("test/quic_multistream_test.c", 0x833, "run_script_worker(&h, script, script_name, -1)", iVar2 != 0);
      if (iVar2 != 0) {
         if (local_180 == 0) {
            uVar8 = 1;
         } else {
            lVar7 = 0;
            uVar8 = 1;
            lVar5 = local_188 + 0x28;
            do {
               if (*(long*)( lVar5 + -8 ) != 0) {
                  ossl_crypto_thread_native_join(*(long*)( lVar5 + -8 ), local_258);
                  if (*(int*)( lVar5 + 8 ) == 0) {
                     uVar8 = 0;
                  }
                  ossl_crypto_thread_native_clean(*(undefined8*)( lVar5 + -8 ));
                  *(undefined8*)( lVar5 + -8 ) = 0;
               }
               lVar7 = lVar7 + 1;
               ossl_crypto_mutex_free(lVar5);
               lVar5 = lVar5 + 0x40;
            } while ( local_180 != lVar7 );
         }
         iVar2 = test_true("test/quic_multistream_test.c", 0x837, "join_threads(h.threads, h.num_threads)", uVar8);
         bVar9 = iVar2 != 0;
         goto LAB_001083f4;
      }
   }
   bVar9 = false;
   LAB_001083f4:helper_cleanup(local_208);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return bVar9;
}void test_script(uint param_1) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   long in_FS_OFFSET;
   char acStack_78[72];
   long local_30;
   uVar2 = (int)param_1 / 2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 & uVar2 & 1 ) == 0) {
      iVar3 = (int)( param_1 - ( (int)param_1 >> 0x1f ) ) >> 0x1f;
      iVar3 = ( uVar2 - iVar3 & 1 ) + iVar3;
      uVar1 = (int)uVar2 / 2 + 1;
      BIO_snprintf(acStack_78, 0x40, "script %d", (ulong)uVar1);
      test_info("test/quic_multistream_test.c", 0x176e, "Running script %d (order=%d, blocking=%d)", uVar1, (int)param_1 % 2, iVar3);
      run_script(*(undefined8*)( scripts + (long)( (int)uVar2 / 2 ) * 8 ), acStack_78, (int)param_1 % 2, iVar3);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void test_dyn_frame_types(int param_1) {
   long in_FS_OFFSET;
   char acStack_58[72];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (dyn_frame_types_script == 0x2b) {
      _DAT_0010d050 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 );
      _DAT_0010d068 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 8 );
   } else if (dyn_frame_types_script == 0x16) {
      _DAT_0010d068 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 0x10 );
   }
   if (DAT_0010d088 == 0x2b) {
      _DAT_0010d098 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 );
      _DAT_0010d0b0 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 8 );
   } else if (DAT_0010d088 == 0x16) {
      _DAT_0010d0b0 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 0x10 );
   }
   if (DAT_0010d0d0 == 0x2b) {
      _DAT_0010d0e0 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 );
      _DAT_0010d0f8 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 8 );
   } else if (DAT_0010d0d0 == 0x16) {
      _DAT_0010d0f8 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 0x10 );
   }
   if (DAT_0010d118 == 0x2b) {
      _DAT_0010d128 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 );
      _DAT_0010d140 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 8 );
   } else if (DAT_0010d118 == 0x16) {
      _DAT_0010d140 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 0x10 );
   }
   if (DAT_0010d160 == 0x2b) {
      _DAT_0010d170 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 );
      _DAT_0010d188 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 8 );
   } else if (DAT_0010d160 == 0x16) {
      _DAT_0010d188 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 0x10 );
   }
   if (DAT_0010d1a8 == 0x2b) {
      _DAT_0010d1b8 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 );
      _DAT_0010d1d0 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 8 );
   } else if (DAT_0010d1a8 == 0x16) {
      _DAT_0010d1d0 = *(undefined8*)( forbidden_frame_types + (long)param_1 * 0x18 + 0x10 );
   }
   BIO_snprintf(acStack_58, 0x40, "dyn script %d");
   run_script(&dyn_frame_types_script, acStack_58, 0, 0);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined1 *test_get_options(void) {
   return options_1;
}undefined8 setup_tests(void) {
   int iVar1;
   iVar1 = test_skip_common_options();
   if (iVar1 == 0) {
      test_error("test/quic_multistream_test.c", 0x17d0, "Error parsing test options\n");
   } else {
      certfile = test_get_argument(0);
      iVar1 = test_ptr("test/quic_multistream_test.c", 0x17d4, "certfile = test_get_argument(0)", certfile);
      if (iVar1 != 0) {
         keyfile = test_get_argument(1);
         iVar1 = test_ptr("test/quic_multistream_test.c", 0x17d5, "keyfile = test_get_argument(1)", keyfile);
         if (iVar1 != 0) {
            add_all_tests("test_dyn_frame_types", test_dyn_frame_types, 0x28, 1);
            add_all_tests("test_script", test_script, 0x15c, 1);
            return 1;
         }
      }
   }
   return 0;
}

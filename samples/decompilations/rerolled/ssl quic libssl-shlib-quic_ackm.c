void lh_OSSL_ACKM_TX_PKT_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_517 = 0; i_517 < 2; i_517++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OSSL_ACKM_TX_PKT_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_518 = 0; i_518 < 2; i_518++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OSSL_ACKM_TX_PKT_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_519 = 0; i_519 < 2; i_519++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OSSL_ACKM_TX_PKT_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_520 = 0; i_520 < 2; i_520++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}undefined8 tx_pkt_info_hash(undefined8 *param_1) {
   return *param_1;
}ulong tx_pkt_info_compare(ulong *param_1, ulong *param_2) {
   ulong uVar1;
   uVar1 = 0xffffffff;
   if (*param_2 <= *param_1) {
      uVar1 = ( ulong )(*param_2 < *param_1);
   }
   return uVar1;
}ulong ackm_get_pto_time_and_space(long param_1, uint *param_2) {
   undefined8 uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   uint uVar10;
   long in_FS_OFFSET;
   bool bVar11;
   ulong local_48[2];
   ulong local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ossl_statm_get_rtt_info(*(undefined8*)( param_1 + 0x100 ), local_48);
   uVar8 = local_38 * 4;
   if (local_38 >> 0x3e == 0) {
      if (uVar8 < 1000000) {
         uVar8 = 1000000;
      }
   } else {
      uVar8 = 0xffffffffffffffff;
   }
   uVar9 = uVar8 + local_48[0];
   if (CARRY8(uVar8, local_48[0])) {
      uVar9 = 0xffffffffffffffff;
   }
   uVar10 = *(uint*)( param_1 + 0x118 );
   if (0x10 < *(uint*)( param_1 + 0x118 )) {
      uVar10 = 0x10;
   }
   uVar8 = 1L << ( (byte)uVar10 & 0x3f );
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uVar9;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar8;
   uVar9 = SUB168(auVar2 * auVar4, 0);
   if (SUB168(auVar2 * auVar4, 8) != 0) {
      uVar9 = 0xffffffffffffffff;
   }
   if (*(long*)( param_1 + 0x198 ) + *(long*)( param_1 + 0x1a0 ) + *(long*)( param_1 + 0x1a8 ) == 0) {
      uVar1 = *(undefined8*)( param_1 + 0xf8 );
      *param_2 = ( uint )(*(char*)( param_1 + 0x1ca ) != '\0');
      uVar8 = ( **(code**)( param_1 + 0xf0 ) )(uVar1);
      uVar7 = uVar8 + uVar9;
      if (CARRY8(uVar8, uVar9)) {
         uVar7 = 0xffffffffffffffff;
      }
   } else {
      uVar6 = 0xffffffffffffffff;
      if (( *(long*)( param_1 + 0x198 ) != 0 ) && ( ( uVar6 = uVar9 + *(ulong*)( param_1 + 0x138 ) ),CARRY8(uVar9, *(ulong*)( param_1 + 0x138 )) || ( uVar6 == 0xffffffffffffffff ) )) {
         uVar6 = 0xffffffffffffffff;
      }
      uVar10 = 0;
      uVar7 = uVar6;
      if (*(long*)( param_1 + 0x1a0 ) != 0) {
         uVar7 = uVar9 + *(ulong*)( param_1 + 0x140 );
         if (( uVar6 < uVar7 || CARRY8(uVar9, *(ulong*)( param_1 + 0x140 )) ) || ( uVar6 <= uVar7 )) {
            uVar10 = 0;
            uVar7 = uVar6;
         } else {
            uVar10 = 1;
         }
      }
      if (( *(long*)( param_1 + 0x1a8 ) != 0 ) && ( *(char*)( param_1 + 0x1c8 ) != '\0' )) {
         if (*(ulong*)( param_1 + 0x930 ) != 0xffffffffffffffff) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar8;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = *(ulong*)( param_1 + 0x930 );
            uVar8 = SUB168(auVar3 * auVar5, 0);
            if (SUB168(auVar3 * auVar5, 8) != 0) {
               uVar8 = 0xffffffffffffffff;
            }
            bVar11 = CARRY8(uVar8, uVar9);
            uVar9 = uVar8 + uVar9;
            if (bVar11) {
               uVar9 = 0xffffffffffffffff;
            }
         }
         uVar8 = uVar9 + *(ulong*)( param_1 + 0x148 );
         if (( uVar8 <= uVar7 && !CARRY8(uVar9,*(ulong *)(param_1 + 0x148)) ) && ( uVar8 < uVar7 )) {
            uVar10 = 2;
            uVar7 = uVar8;
         }
      }
      *param_2 = uVar10;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ackm_on_pkts_lost_isra_0(long param_1, long param_2, int param_3) {
   long *plVar1;
   byte bVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   if (param_2 != 0) {
      if (param_3 == 0) {
         do {
            lVar3 = *(long*)( param_2 + 0x60 );
            bVar2 = *(byte*)( param_2 + 0x20 );
            if (( bVar2 & 4 ) != 0) {
               local_68._8_8_ = *(long*)( param_2 + 8 );
               *(long*)( param_1 + 400 ) = *(long*)( param_1 + 400 ) - local_68._8_8_;
               if (( bVar2 & 8 ) != 0) {
                  plVar1 = (long*)( param_1 + 0x198 + ( ulong )(bVar2 & 3) * 8 );
                  *plVar1 = *plVar1 - local_68._8_8_;
               }
               local_68._0_8_ = *(undefined8*)( param_2 + 0x10 );
               ( **(code**)( *(long*)( param_1 + 0x108 ) + 0x50 ) )(*(undefined8*)( param_1 + 0x110 ), local_68);
            }
            ( **(code**)( param_2 + 0x28 ) )(*(undefined8*)( param_2 + 0x40 ));
            param_2 = lVar3;
         } while ( lVar3 != 0 );
      } else {
         do {
            lVar3 = *(long*)( param_2 + 0x60 );
            bVar2 = *(byte*)( param_2 + 0x20 );
            if (( bVar2 & 4 ) != 0) {
               lVar4 = *(long*)( param_2 + 8 );
               *(long*)( param_1 + 400 ) = *(long*)( param_1 + 400 ) - lVar4;
               if (( bVar2 & 8 ) != 0) {
                  plVar1 = (long*)( param_1 + 0x198 + ( ulong )(bVar2 & 3) * 8 );
                  *plVar1 = *plVar1 - lVar4;
               }
            }
            ( **(code**)( param_2 + 0x28 ) )(*(undefined8*)( param_2 + 0x40 ));
            param_2 = lVar3;
         } while ( lVar3 != 0 );
      }
   }
   ossl_statm_get_rtt_info(*(undefined8*)( param_1 + 0x100 ), local_58);
   ( **(code**)( *(long*)( param_1 + 0x108 ) + 0x58 ) )(*(undefined8*)( param_1 + 0x110 ), 0);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}void ackm_set_loss_detection_timer_isra_0(long param_1) {
   ulong uVar1;
   ulong uVar2;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   uVar2 = *(ulong*)( param_1 + 0x150 );
   uVar1 = *(ulong*)( param_1 + 0x158 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( uVar2 == 0 ) || ( uVar1 < uVar2 )) {
      uVar3 = *(ulong*)( param_1 + 0x160 );
      if (uVar1 != 0) {
         local_14 = 1;
         uVar2 = uVar1;
         goto LAB_00100462;
      }
      LAB_001003bf:local_14 = 2;
      uVar1 = uVar3;
      if (uVar3 != 0) goto LAB_00100474;
      if (( *(long*)( param_1 + 0x1a0 ) + *(long*)( param_1 + 0x198 ) + *(long*)( param_1 + 0x1a8 ) == 0 ) && ( *(char*)( param_1 + 0x1c9 ) != '\0' )) {
         *(undefined8*)( param_1 + 0x168 ) = 0;
         if (*(code**)( param_1 + 0x940 ) != (code*)0x0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               for (int i_521 = 0; i_521 < 2; i_521++) {
                  /* WARNING: Could not recover jumptable at 0x001004e1. Too many branches */
               }
               ( **(code**)( param_1 + 0x940 ) )(0, *(undefined8*)( param_1 + 0x948 ));
               return;
            }
            goto LAB_0010049e;
         }
      } else {
         uVar2 = ackm_get_pto_time_and_space(param_1, &local_14);
         *(ulong*)( param_1 + 0x168 ) = uVar2;
         UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x940 );
         if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
            if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010049e;
            uVar4 = *(undefined8*)( param_1 + 0x948 );
            goto LAB_0010042e;
         }
      }
   } else {
      uVar3 = *(ulong*)( param_1 + 0x160 );
      local_14 = 0;
      LAB_00100462:uVar1 = uVar2;
      if (( uVar3 <= uVar2 ) && ( uVar3 < uVar2 )) goto LAB_001003bf;
      LAB_00100474:uVar2 = uVar1;
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x940 );
      *(ulong*)( param_1 + 0x168 ) = uVar2;
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         uVar4 = *(undefined8*)( param_1 + 0x948 );
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_0010042e:/* WARNING: Could not recover jumptable at 0x00100433. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE )(uVar2, uVar4);
            return;
         }
         goto LAB_0010049e;
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_0010049e:/* WARNING: Subroutine does not return */__stack_chk_fail(uVar2);
}void tx_pkt_history_remove_isra_0(long *param_1, undefined8 param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_e8[14];
   undefined8 local_78[13];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8[0] = param_2;
   local_78[0] = param_2;
   lVar3 = OPENSSL_LH_retrieve(param_1[3], local_78);
   if (lVar3 != 0) {
      lVar4 = *(long*)( lVar3 + 0x48 );
      if (lVar3 == *param_1) {
         *param_1 = lVar4;
         lVar1 = *(long*)( lVar3 + 0x50 );
         lVar2 = param_1[1];
      } else {
         lVar1 = *(long*)( lVar3 + 0x50 );
         lVar2 = param_1[1];
      }
      if (lVar3 == lVar2) {
         param_1[1] = lVar1;
      }
      if (lVar1 != 0) {
         *(long*)( lVar1 + 0x48 ) = lVar4;
         lVar4 = *(long*)( lVar3 + 0x48 );
      }
      if (lVar4 != 0) {
         *(long*)( lVar4 + 0x50 ) = lVar1;
      }
      param_1[2] = param_1[2] + -1;
      *(undefined1(*) [16])( lVar3 + 0x48 ) = (undefined1[16])0x0;
      OPENSSL_LH_delete(param_1[3], local_e8);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong *ackm_detect_and_remove_lost_pkts(long param_1, int param_2) {
   long lVar1;
   ulong *puVar2;
   undefined1 auVar3[16];
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong *puVar7;
   ulong *puVar8;
   long *plVar9;
   ulong uVar10;
   ulong **ppuVar11;
   long in_FS_OFFSET;
   ulong local_80;
   ulong *local_70;
   ulong local_68;
   ulong local_60;
   long local_40;
   lVar1 = param_1 + (long)param_2 * 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (ulong*)0x0;
   ossl_statm_get_rtt_info(*(undefined8*)( param_1 + 0x100 ), &local_68);
   *(undefined8*)( lVar1 + 0x150 ) = 0;
   if (local_68 < local_60) {
      local_68 = local_60;
   }
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_68;
   uVar4 = SUB168(auVar3 * ZEXT816(9), 0);
   if (SUB168(auVar3 * ZEXT816(9), 8) == 0) {
      local_80 = 1000000;
      if (0x7a1207 < uVar4) {
         local_80 = uVar4 >> 3;
      }
   } else {
      local_80 = 0x1fffffffffffffff;
   }
   uVar4 = ( **(code**)( param_1 + 0xf0 ) )(*(undefined8*)( param_1 + 0xf8 ));
   uVar10 = uVar4 - local_80;
   if (uVar4 < local_80) {
      uVar10 = 0;
   }
   plVar9 = (long*)( param_1 + (long)param_2 * 0x30 );
   puVar8 = (ulong*)*plVar9;
   if (puVar8 != (ulong*)0x0) {
      ppuVar11 = &local_70;
      puVar7 = puVar8;
      do {
         while (true) {
            puVar2 = (ulong*)puVar7[9];
            if (*puVar7 <= *(ulong*)( lVar1 + 0x120 )) break;
            LAB_001006b7:puVar8 = local_70;
            puVar7 = puVar2;
            if (puVar2 == (ulong*)0x0) goto LAB_00100725;
         };
         uVar4 = puVar7[2];
         if (( uVar4 <= uVar10 ) || ( *puVar7 + 3 <= *(ulong*)( lVar1 + 0x120 ) )) {
            tx_pkt_history_remove_isra_0(plVar9);
            *ppuVar11 = puVar7;
            ppuVar11 = (ulong**)( puVar7 + 0xc );
            puVar7[0xc] = 0;
            goto LAB_001006b7;
         }
         uVar5 = *(ulong*)( lVar1 + 0x150 );
         uVar6 = uVar4 + local_80;
         if (uVar5 != 0) {
            if (uVar5 <= uVar6) {
               uVar6 = uVar5;
            }
            if (!CARRY8(uVar4,local_80)) {
               uVar5 = uVar6;
            }
            *(ulong*)( lVar1 + 0x150 ) = uVar5;
            goto LAB_001006b7;
         }
         if (CARRY8(uVar4, local_80)) {
            uVar6 = 0xffffffffffffffff;
         }
         *(ulong*)( lVar1 + 0x150 ) = uVar6;
         puVar8 = local_70;
         puVar7 = puVar2;
      } while ( puVar2 != (ulong*)0x0 );
   }
   LAB_00100725:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar8;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined1(*)[16];ossl_ackm_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   undefined8 uVar1;
   undefined1(*ptr)[16];
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   int iVar6;
   ptr = (undefined1(*) [16])CRYPTO_zalloc(0x960, "ssl/quic/quic_ackm.c", 0x405);
   if (ptr == (undefined1(*) [16])0x0) {
      LAB_00100974:ptr = (undefined1(*) [16])0x0;
   } else {
      lVar4 = 0;
      pauVar5 = ptr;
      do {
         *(undefined8*)( ptr[0x12] + lVar4 * 8 ) = 0xffffffffffffffff;
         *(undefined8*)( ptr[0x91] + lVar4 * 8 + 8 ) = 0xffffffffffffffff;
         *(undefined8*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
         pauVar5[2] = (undefined1[16])0x0;
         uVar2 = OPENSSL_LH_new(tx_pkt_info_hash, tx_pkt_info_compare);
         lVar3 = OPENSSL_LH_set_thunks(uVar2, 0x100000, lh_OSSL_ACKM_TX_PKT_cfn_thunk, lh_OSSL_ACKM_TX_PKT_doall_thunk, lh_OSSL_ACKM_TX_PKT_doall_arg_thunk);
         *(long*)( pauVar5[1] + 8 ) = lVar3;
         if (lVar3 == 0) {
            iVar6 = (int)lVar4 + -1;
            if ((int)lVar4 != 0) {
               pauVar5 = (undefined1(*) [16])( *ptr + ( -iVar6 & 0x30 ) );
               while (true) {
                  OPENSSL_LH_free(*(undefined8*)( pauVar5[1] + 8 ));
                  *(undefined8*)( pauVar5[1] + 8 ) = 0;
                  *pauVar5 = (undefined1[16])0x0;
                  *(undefined8*)pauVar5[1] = 0;
                  if (iVar6 == 0) break;
                  iVar6 = 0;
                  pauVar5 = pauVar5 + -3;
               };
            }
            CRYPTO_free(ptr);
            goto LAB_00100974;
         }
         lVar4 = lVar4 + 1;
         pauVar5 = pauVar5 + 3;
      } while ( lVar4 != 3 );
      ossl_uint_set_init(ptr + 9);
      *(undefined8*)( ptr[10] + 8 ) = 0;
      ossl_uint_set_init(ptr + 0xb);
      *(undefined8*)( ptr[0xc] + 8 ) = 0;
      ossl_uint_set_init(ptr + 0xd);
      uVar1 = _UNK_00101cb8;
      uVar2 = __LC1;
      *(undefined8*)( ptr[0xe] + 8 ) = 0;
      *(undefined8*)ptr[0xf] = param_1;
      *(undefined8*)ptr[0x93] = uVar2;
      *(undefined8*)( ptr[0x93] + 8 ) = uVar1;
      *(undefined8*)( ptr[0xf] + 8 ) = param_2;
      *(undefined8*)ptr[0x10] = param_3;
      *(undefined8*)( ptr[0x10] + 8 ) = param_4;
      *(undefined8*)ptr[0x11] = param_5;
   }
   return ptr;
}void ossl_ackm_free(undefined1 (*param_1)[16]) {
   char cVar1;
   if (param_1 != (undefined1(*) [16])0x0) {
      if (param_1[0x1c][10] == '\0') {
         OPENSSL_LH_free(*(undefined8*)( param_1[1] + 8 ));
         *(undefined8*)( param_1[1] + 8 ) = 0;
         *(undefined8*)param_1[1] = 0;
         *param_1 = (undefined1[16])0x0;
         ossl_uint_set_destroy(param_1 + 9);
         cVar1 = param_1[0x1c][0xb];
      } else {
         cVar1 = param_1[0x1c][0xb];
      }
      if (cVar1 == '\0') {
         OPENSSL_LH_free(*(undefined8*)( param_1[4] + 8 ));
         *(undefined8*)( param_1[4] + 8 ) = 0;
         *(undefined8*)param_1[4] = 0;
         param_1[3] = (undefined1[16])0x0;
         ossl_uint_set_destroy(param_1 + 0xb);
         cVar1 = param_1[0x1c][0xc];
      } else {
         cVar1 = param_1[0x1c][0xc];
      }
      if (cVar1 == '\0') {
         OPENSSL_LH_free(*(undefined8*)( param_1[7] + 8 ));
         *(undefined8*)( param_1[7] + 8 ) = 0;
         *(undefined8*)param_1[7] = 0;
         param_1[6] = (undefined1[16])0x0;
         ossl_uint_set_destroy(param_1 + 0xd);
      }
      CRYPTO_free(param_1);
      return;
   }
   return;
}undefined8 ossl_ackm_on_tx_packet(long param_1, ulong *param_2) {
   byte bVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   uint uVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   uVar5 = (byte)param_2[4] & 3;
   if (( ( ( ( param_2[2] != 0 ) && ( uVar7 = (ulong)uVar5 * (ulong*)( param_1 + 0x138 + uVar7 * 8 ) <= param_2[2] ) ) && ( param_2[1] != 0 ) ) && ( ( ( (byte)param_2[4] & 0xc ) != 8 && ( lVar8 = uVar7 * 0x30 + param_1 * (ulong*)( lVar8 + 0x20 ) <= *param_2 ) ) ) ) && ( ( lVar4 = OPENSSL_LH_retrieve(*(undefined8*)( lVar8 + 0x18 )) ),lVar4 == 0 && ( ( param_2[9] == 0 && ( param_2[10] == 0 ) ) ) )) {
      OPENSSL_LH_insert(*(undefined8*)( lVar8 + 0x18 ), param_2);
      plVar6 = (long*)( (ulong)uVar5 * 0x30 + param_1 );
      uVar2 = plVar6[1];
      if (uVar2 != 0) {
         *(ulong**)( uVar2 + 0x48 ) = param_2;
      }
      lVar8 = *plVar6;
      param_2[10] = uVar2;
      param_2[9] = 0;
      plVar6[1] = (long)param_2;
      if (lVar8 == 0) {
         *plVar6 = (long)param_2;
      }
      uVar3 = *param_2;
      plVar6[2] = plVar6[2] + 1;
      uVar2 = *param_2;
      plVar6 = (long*)( param_1 + 0x20 + uVar7 * 0x30 );
      *plVar6 = uVar3 + 1;
      plVar6[1] = uVar2;
      bVar1 = (byte)param_2[4];
      if (( bVar1 & 4 ) != 0) {
         uVar7 = param_2[1];
         if (( bVar1 & 8 ) != 0) {
            uVar2 = param_2[2];
            lVar8 = param_1 + ( ulong )(bVar1 & 3) * 8;
            plVar6 = (long*)( lVar8 + 0x198 );
            *plVar6 = *plVar6 + uVar7;
            *(ulong*)( lVar8 + 0x138 ) = uVar2;
         }
         *(long*)( param_1 + 400 ) = *(long*)( param_1 + 400 ) + uVar7;
         ackm_set_loss_detection_timer_isra_0(param_1);
         ( **(code**)( *(long*)( param_1 + 0x108 ) + 0x40 ) )(*(undefined8*)( param_1 + 0x110 ), param_2[1]);
      }
      return 1;
   }
   return 0;
}undefined8 ossl_ackm_on_rx_datagram(void) {
   return 1;
}undefined8 ossl_ackm_on_rx_ack_frame(long param_1, long *param_2, int param_3) {
   long *plVar1;
   byte bVar2;
   ulong *puVar3;
   ulong uVar4;
   bool bVar5;
   int iVar6;
   long lVar7;
   ulong *puVar8;
   ulong *puVar9;
   long lVar10;
   long *plVar11;
   ulong uVar12;
   long *plVar13;
   long **pplVar14;
   long lVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   long *local_b8;
   long *plStack_b0;
   ulong local_a8;
   long local_a0;
   long local_40;
   plStack_b0 = local_b8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = (long)param_3;
   lVar10 = param_1 + lVar7 * 8;
   uVar16 = *(ulong*)( lVar10 + 0x120 );
   local_a8 = *(ulong*)( *param_2 + 8 );
   uVar12 = local_a8;
   if (local_a8 <= uVar16) {
      uVar12 = uVar16;
   }
   if (uVar16 == 0xffffffffffffffff) {
      uVar12 = local_a8;
   }
   *(ulong*)( lVar10 + 0x120 ) = uVar12;
   if (( *(char*)( param_1 + 0x1c9 ) == '\0' ) && ( param_3 == 1 )) {
      *(undefined1*)( param_1 + 0x1c9 ) = 1;
      bVar5 = true;
   } else {
      bVar5 = false;
   }
   local_b8 = (long*)0x0;
   lVar15 = lVar7 * 0x30 + param_1;
   puVar8 = (ulong*)OPENSSL_LH_retrieve(*(undefined8*)( lVar15 + 0x18 ));
   if (( puVar8 == (ulong*)0x0 ) && ( puVar8 = *(ulong**)( lVar15 + 8 ) ),puVar8 == (ulong*)0x0) {
      LAB_00100ecd:if (!bVar5) goto LAB_00100e72;
   } else {
      uVar16 = 0;
      pplVar14 = &local_b8;
      while (true) {
         puVar3 = (ulong*)puVar8[10];
         if ((ulong)param_2[1] <= uVar16) break;
         uVar12 = *puVar8;
         puVar9 = (ulong*)( uVar16 * 0x10 + *param_2 );
         while (uVar12 < *puVar9) {
            if (puVar9[1] < uVar12) goto LAB_00100cfd;
            uVar16 = uVar16 + 1;
            puVar9 = puVar9 + 2;
            if (uVar16 == param_2[1]) goto LAB_00100d40;
         };
         if (uVar12 <= puVar9[1]) {
            tx_pkt_history_remove_isra_0(lVar15);
            *pplVar14 = (long*)puVar8;
            pplVar14 = (long**)( puVar8 + 0xb );
            puVar8[0xb] = 0;
         }
         LAB_00100cfd:puVar8 = puVar3;
         if (puVar3 == (ulong*)0x0) break;
      };
      LAB_00100d40:plVar13 = local_b8;
      if (local_b8 == (long*)0x0) goto LAB_00100ecd;
      plVar11 = local_b8;
      if (*local_b8 == *(long*)( *param_2 + 8 )) {
         do {
            if (( *(byte*)( plVar11 + 4 ) & 8 ) != 0) {
               uVar16 = ( **(code**)( param_1 + 0xf0 ) )(*(undefined8*)( param_1 + 0xf8 ));
               if (*(long*)( param_1 + 0x188 ) == 0) {
                  *(ulong*)( param_1 + 0x188 ) = uVar16;
               }
               uVar12 = param_2[2];
               if (( *(char*)( param_1 + 0x1c8 ) != '\0' ) && ( *(ulong*)( param_1 + 0x930 ) < uVar12 )) {
                  uVar12 = *(ulong*)( param_1 + 0x930 );
               }
               uVar4 = plVar13[2];
               lVar15 = uVar16 - uVar4;
               if (uVar16 < uVar4) {
                  lVar15 = 0;
               }
               ossl_statm_update_rtt(*(undefined8*)( param_1 + 0x100 ), uVar12, lVar15);
               bVar2 = *(byte*)( param_2 + 6 );
               goto joined_r0x00100f5d;
            }
            plVar1 = plVar11 + 0xb;
            plVar11 = (long*)*plVar1;
         } while ( (long*)*plVar1 != (long*)0x0 );
      }
      bVar2 = *(byte*)( param_2 + 6 );
      joined_r0x00100f5d:plVar11 = local_b8;
      if (( bVar2 & 1 ) != 0) {
         lVar15 = *param_2;
         local_b8 = (long*)0x0;
         plVar11 = local_b8;
         local_b8 = (long*)0x0;
         if (*(ulong*)( lVar10 + 0x1b0 ) < (ulong)param_2[5]) {
            *(long*)( lVar10 + 0x1b0 ) = param_2[5];
            local_a8 = *(ulong*)( lVar15 + 8 );
            lVar10 = OPENSSL_LH_retrieve(*(undefined8*)( param_1 + 0x18 + lVar7 * 0x30 ), &local_a8);
            plVar11 = local_b8;
            if (lVar10 != 0) {
               local_b8 = *(long**)( lVar10 + 0x10 );
               ( **(code**)( *(long*)( param_1 + 0x108 ) + 0x68 ) )(*(undefined8*)( param_1 + 0x110 ), &local_b8);
               plVar11 = local_b8;
            }
         }
      }
      local_b8 = plVar11;
      lVar10 = ackm_detect_and_remove_lost_pkts(param_1, param_3);
      if (lVar10 != 0) {
         ackm_on_pkts_lost_isra_0(param_1, lVar10, 0);
      }
      local_b8 = (long*)0x0;
      plStack_b0 = (long*)0x0;
      do {
         bVar2 = *(byte*)( plVar13 + 4 );
         plVar11 = (long*)plVar13[1];
         if (( bVar2 & 4 ) != 0) {
            *(long*)( param_1 + 400 ) = *(long*)( param_1 + 400 ) - (long)plVar11;
            if (( bVar2 & 8 ) != 0) {
               plVar1 = (long*)( param_1 + 0x198 + ( ulong )(bVar2 & 3) * 8 );
               *plVar1 = *plVar1 - (long)plVar11;
            }
            lVar10 = plVar13[3];
            if (lVar10 != -1) {
               lVar15 = ( ulong )(bVar2 & 3) * 0x20;
               lVar7 = param_1 + lVar15;
               if (*(ulong*)( lVar7 + 0xa8 ) < lVar10 + 1U) {
                  local_a8 = 0;
                  local_a0 = lVar10;
                  iVar6 = ossl_uint_set_remove(param_1 + 0x90 + lVar15, &local_a8);
                  if (iVar6 == 1) {
                     *(ulong*)( lVar7 + 0xa8 ) = lVar10 + 1U;
                  }
                  plVar11 = (long*)plVar13[1];
               }
            }
         }
         local_b8 = (long*)plVar13[2];
         plVar1 = (long*)plVar13[0xb];
         plStack_b0 = plVar11;
         ( *(code*)plVar13[6] )(plVar13[8]);
         if (( *(byte*)( plVar13 + 4 ) & 4 ) != 0) {
            ( **(code**)( *(long*)( param_1 + 0x108 ) + 0x48 ) )(*(undefined8*)( param_1 + 0x110 ), &local_b8);
         }
         plVar13 = plVar1;
      } while ( plVar1 != (long*)0x0 );
      if (*(char*)( param_1 + 0x1c9 ) != '\0') {
         *(undefined4*)( param_1 + 0x118 ) = 0;
      }
   }
   ackm_set_loss_detection_timer_isra_0(param_1);
   LAB_00100e72:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_ackm_on_pkt_space_discarded(long param_1, int param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined1(*pauVar8)[16];
   uVar4 = 0;
   lVar7 = (long)param_2;
   if (*(char*)( param_1 + 0x1ca + lVar7 ) == '\0') {
      if (param_2 == 1) {
         *(undefined1*)( param_1 + 0x1c9 ) = 1;
      }
      pauVar8 = (undefined1(*) [16])( lVar7 * 0x30 + param_1 );
      lVar1 = param_1 + 0x90 + lVar7 * 0x20;
      if (*(long*)*pauVar8 == 0) {
         OPENSSL_LH_free(*(undefined8*)( pauVar8[1] + 8 ));
         *(undefined8*)( pauVar8[1] + 8 ) = 0;
         *(undefined8*)pauVar8[1] = 0;
         *pauVar8 = (undefined1[16])0x0;
         ossl_uint_set_destroy(lVar1);
      } else {
         lVar6 = 0;
         lVar5 = *(long*)*pauVar8;
         do {
            lVar3 = *(long*)( lVar5 + 0x48 );
            if (( *(byte*)( lVar5 + 0x20 ) & 4 ) == 0) {
               ( **(code**)( lVar5 + 0x38 ) )(*(undefined8*)( lVar5 + 0x40 ));
            } else {
               lVar2 = *(long*)( lVar5 + 8 );
               uVar4 = *(undefined8*)( lVar5 + 0x40 );
               *(long*)( param_1 + 400 ) = *(long*)( param_1 + 400 ) - lVar2;
               lVar6 = lVar6 + lVar2;
               ( **(code**)( lVar5 + 0x38 ) )(uVar4);
            }
            lVar5 = lVar3;
         } while ( lVar3 != 0 );
         lVar5 = lVar7 * 0x30 + param_1;
         OPENSSL_LH_free(*(undefined8*)( lVar5 + 0x18 ));
         *(undefined8*)( lVar5 + 0x18 ) = 0;
         *(undefined8*)pauVar8[1] = 0;
         *pauVar8 = (undefined1[16])0x0;
         ossl_uint_set_destroy(lVar1);
         if (lVar6 != 0) {
            ( **(code**)( *(long*)( param_1 + 0x108 ) + 0x60 ) )(*(undefined8*)( param_1 + 0x110 ), lVar6);
         }
      }
      lVar1 = param_1 + lVar7 * 8;
      *(undefined8*)( lVar1 + 0x138 ) = 0;
      *(undefined8*)( lVar1 + 0x150 ) = 0;
      *(undefined4*)( param_1 + 0x118 ) = 0;
      *(undefined1*)( param_1 + 0x1ca + lVar7 ) = 1;
      *(undefined8*)( lVar1 + 0x198 ) = 0;
      ackm_set_loss_detection_timer_isra_0(param_1);
      uVar4 = 1;
   }
   return uVar4;
}undefined8 ossl_ackm_on_handshake_confirmed(long param_1) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined2*)( param_1 + 0x1c8 ) = 0x101;
   uVar2 = *(ulong*)( param_1 + 0x150 );
   uVar1 = *(ulong*)( param_1 + 0x158 );
   if (( uVar2 == 0 ) || ( uVar1 < uVar2 )) {
      uVar3 = *(ulong*)( param_1 + 0x160 );
      if (uVar1 != 0) {
         local_14 = 1;
         uVar2 = uVar1;
         goto LAB_00101292;
      }
      LAB_001011df:local_14 = 2;
      uVar2 = uVar3;
      if (uVar3 == 0) {
         if (*(long*)( param_1 + 0x1a0 ) + *(long*)( param_1 + 0x198 ) + *(long*)( param_1 + 0x1a8 ) == 0) {
            *(undefined8*)( param_1 + 0x168 ) = 0;
            if (*(code**)( param_1 + 0x940 ) != (code*)0x0) {
               ( **(code**)( param_1 + 0x940 ) )(0, *(undefined8*)( param_1 + 0x948 ));
            }
            goto LAB_0010125c;
         }
         uVar2 = ackm_get_pto_time_and_space(param_1, &local_14);
      }
   } else {
      uVar3 = *(ulong*)( param_1 + 0x160 );
      local_14 = 0;
      LAB_00101292:if (( uVar3 <= uVar2 ) && ( uVar3 < uVar2 )) goto LAB_001011df;
   }
   *(ulong*)( param_1 + 0x168 ) = uVar2;
   if (*(code**)( param_1 + 0x940 ) != (code*)0x0) {
      ( **(code**)( param_1 + 0x940 ) )(uVar2, *(undefined8*)( param_1 + 0x948 ));
   }
   LAB_0010125c:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return 1;
}undefined8 ossl_ackm_on_timeout(long param_1) {
   int *piVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   uVar2 = *(ulong*)( param_1 + 0x158 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(ulong*)( param_1 + 0x150 );
   if (( uVar3 == 0 ) || ( uVar2 < uVar3 )) {
      uVar5 = *(ulong*)( param_1 + 0x160 );
      if (uVar2 != 0) {
         uVar6 = 1;
         uVar3 = uVar2;
         goto LAB_001013a2;
      }
      LAB_00101301:local_14 = 2;
      if (uVar5 == 0) {
         if (*(long*)( param_1 + 0x1a0 ) + *(long*)( param_1 + 0x198 ) + *(long*)( param_1 + 0x1a8 ) == 0) {
            if (*(char*)( param_1 + 0x1ca ) == '\0') {
               *(int*)( param_1 + 0x1d4 ) = *(int*)( param_1 + 0x1d4 ) + 1;
            } else {
               *(int*)( param_1 + 0x1d8 ) = *(int*)( param_1 + 0x1d8 ) + 1;
            }
         } else {
            ackm_get_pto_time_and_space(param_1, &local_14);
            piVar1 = (int*)( param_1 + 0x1dc + (long)local_14 * 4 );
            *piVar1 = *piVar1 + 1;
         }
         *(int*)( param_1 + 0x118 ) = *(int*)( param_1 + 0x118 ) + 1;
         goto LAB_00101344;
      }
      uVar6 = 2;
   } else {
      uVar5 = *(ulong*)( param_1 + 0x160 );
      uVar6 = 0;
      LAB_001013a2:if (uVar5 < uVar3) goto LAB_00101301;
   }
   lVar4 = ackm_detect_and_remove_lost_pkts(param_1, uVar6);
   if (lVar4 != 0) {
      ackm_on_pkts_lost_isra_0(param_1, lVar4, 0);
   }
   LAB_00101344:ackm_set_loss_detection_timer_isra_0(param_1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_ackm_get_loss_detection_deadline(long param_1) {
   return *(undefined8*)( param_1 + 0x168 );
}long ossl_ackm_get0_probe_request(long param_1) {
   return param_1 + 0x1d4;
}bool ossl_ackm_get_largest_unacked(long param_1, int param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( (long)param_2 * 0x30 + 8 + param_1 );
   if (puVar1 != (undefined8*)0x0) {
      *param_3 = *puVar1;
   }
   return puVar1 != (undefined8*)0x0;
}bool ossl_ackm_is_ack_desired(long param_1, int param_2) {
   ulong uVar1;
   long lVar2;
   lVar2 = (long)param_2;
   if (*(char*)( param_1 + 0x1cd + lVar2 ) != '\0') {
      return true;
   }
   if (*(long*)( param_1 + 0x918 + lVar2 * 8 ) == -1) {
      return false;
   }
   uVar1 = ( **(code**)( param_1 + 0xf0 ) )(*(undefined8*)( param_1 + 0xf8 ));
   return *(ulong*)( param_1 + 8 + ( lVar2 + 0x122 ) * 8 ) <= uVar1;
}undefined8 ossl_ackm_get_ack_deadline(long param_1, int param_2) {
   if (*(char*)( param_1 + 0x1cd + (long)param_2 ) == '\0') {
      return *(undefined8*)( param_1 + 0x918 + (long)param_2 * 8 );
   }
   return 0;
}long ossl_ackm_get_ack_frame(long param_1, int param_2) {
   undefined8 *puVar1;
   byte *pbVar2;
   undefined8 uVar3;
   code *pcVar4;
   ulong uVar5;
   long lVar6;
   undefined8 uVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   lVar10 = (long)param_2;
   uVar5 = ( **(code**)( param_1 + 0xf0 ) )(*(undefined8*)( param_1 + 0xf8 ));
   lVar6 = *(long*)( param_1 + 0x98 + lVar10 * 0x20 );
   if (lVar6 == 0) {
      uVar8 = 0;
   } else {
      uVar8 = 0;
      lVar9 = lVar10 * 0x200 + param_1;
      do {
         puVar1 = (undefined8*)( lVar6 + 0x10 );
         uVar3 = *(undefined8*)( lVar6 + 0x18 );
         lVar6 = *(long*)( lVar6 + 8 );
         uVar8 = uVar8 + 1;
         *(undefined8*)( lVar9 + 0x290 ) = *puVar1;
         *(undefined8*)( lVar9 + 0x298 ) = uVar3;
         if (lVar6 == 0) break;
         lVar9 = lVar9 + 0x10;
      } while ( uVar8 < 3 );
   }
   lVar6 = param_1 + lVar10 * 0x38;
   *(long*)( lVar6 + 0x1e8 ) = param_1 + 0x290 + lVar10 * 0x200;
   *(ulong*)( lVar6 + 0x1f0 ) = uVar8;
   lVar6 = param_1 + lVar10 * 8;
   uVar8 = *(ulong*)( lVar6 + 0x8a8 );
   if (( ( uVar8 == 0 ) || ( uVar5 <= uVar8 ) ) || ( param_2 != 2 )) {
      *(undefined8*)( param_1 + 0x1f8 + lVar10 * 0x38 ) = 0;
   } else {
      *(ulong*)( param_1 + 0x268 ) = uVar5 - uVar8;
   }
   uVar3 = *(undefined8*)( param_1 + lVar10 * 8 + 0x8d8 );
   puVar1 = (undefined8*)( param_1 + 0x200 + lVar10 * 0x38 );
   *puVar1 = *(undefined8*)( param_1 + 0x8c0 + lVar10 * 8 );
   puVar1[1] = uVar3;
   uVar3 = *(undefined8*)( lVar6 + 0x8f0 );
   lVar9 = param_1 + lVar10 * 0x38;
   pbVar2 = (byte*)( lVar9 + 0x218 );
   *pbVar2 = *pbVar2 | 1;
   *(undefined8*)( lVar9 + 0x210 ) = uVar3;
   *(undefined4*)( param_1 + 0x908 + lVar10 * 4 ) = 0;
   *(undefined1*)( param_1 + 0x1d0 + lVar10 ) = 1;
   *(undefined1*)( param_1 + 0x1cd + lVar10 ) = 0;
   *(undefined8*)( lVar6 + 0x918 ) = 0xffffffffffffffff;
   pcVar4 = *(code**)( param_1 + 0x950 );
   if (pcVar4 != (code*)0x0) {
      uVar3 = *(undefined8*)( param_1 + 0x958 );
      uVar7 = ossl_ackm_get_ack_deadline(param_1, param_2);
      ( *pcVar4 )(uVar7, param_2, uVar3);
   }
   return param_1 + 0x1e8 + lVar10 * 0x38;
}bool ossl_ackm_is_rx_pn_processable(long param_1, ulong param_2, int param_3) {
   int iVar1;
   if (param_2 < *(ulong*)( (long)param_3 * 0x20 + 0xa8 + param_1 )) {
      return false;
   }
   iVar1 = ossl_uint_set_query(param_1 + 0x90 + (long)param_3 * 0x20);
   return iVar1 == 0;
}undefined8 ossl_ackm_on_rx_packet(long param_1, ulong *param_2) {
   long *plVar1;
   int iVar2;
   uint uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
   ulong *puVar7;
   ulong uVar8;
   ulong uVar9;
   byte bVar10;
   ulong uVar11;
   long lVar12;
   bool bVar13;
   code *pcVar14;
   long lVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   ulong local_68;
   ulong uStack_60;
   undefined8 local_58;
   ulong uStack_50;
   long local_40;
   uVar11 = param_2[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_ackm_is_rx_pn_processable(param_1, *param_2, (byte)uVar11 & 3);
   if (iVar2 == 1) {
      bVar10 = (byte)param_2[2];
      local_68 = *param_2;
      lVar12 = param_1 + ( ulong )(bVar10 & 3) * 8;
      if (*(ulong*)( lVar12 + 0x890 ) < local_68) {
         uVar16 = param_2[1];
         *(ulong*)( lVar12 + 0x890 ) = local_68;
         *(ulong*)( lVar12 + 0x8a8 ) = uVar16;
      }
      lVar12 = param_1 + ( ulong )(bVar10 & 3) * 0x38;
      lVar15 = *(long*)( lVar12 + 0x1f0 );
      if (( lVar15 == 0 ) || ( puVar7 = *(ulong**)( lVar12 + 0x1e8 ) ),puVar7[1] < local_68) {
         LAB_001017bd:bVar13 = false;
      } else {
         lVar12 = 0;
         do {
            if (( *puVar7 <= local_68 ) && ( local_68 <= puVar7[1] )) goto LAB_001017bd;
            lVar12 = lVar12 + 1;
            puVar7 = puVar7 + 2;
         } while ( lVar15 != lVar12 );
         bVar13 = true;
      }
      lVar15 = ( ulong )((byte)uVar11 & 3) * 0x20;
      lVar12 = param_1 + lVar15;
      uStack_60 = local_68;
      if (*(ulong*)( lVar12 + 0xa8 ) <= local_68) {
         plVar1 = (long*)( param_1 + 0x90 + lVar15 );
         iVar2 = ossl_uint_set_insert(plVar1, &local_68);
         uVar4 = 0;
         if (iVar2 != 1) goto LAB_00101738;
         if (0x20 < (ulong)plVar1[2]) {
            uVar11 = 0xffffffffffffffff;
            do {
               local_58 = *(undefined8*)( *plVar1 + 0x10 );
               uStack_50 = *(ulong*)( *plVar1 + 0x18 );
               uVar16 = uStack_50;
               if (( uVar11 != 0xffffffffffffffff ) && ( uVar16 = uVar11 < uStack_50 )) {
                  uVar16 = uStack_50;
               }
               ossl_uint_set_remove(plVar1, &local_58);
               uVar11 = uVar16;
            } while ( 0x20 < (ulong)plVar1[2] );
            if (( uVar16 != 0xffffffffffffffff ) && ( *(ulong*)( lVar12 + 0xa8 ) < uVar16 + 1 )) {
               local_58 = 0;
               uStack_50 = uVar16;
               iVar2 = ossl_uint_set_remove(plVar1, &local_58);
               if (iVar2 == 1) {
                  *(ulong*)( lVar12 + 0xa8 ) = uVar16 + 1;
               }
            }
         }
         bVar10 = (byte)param_2[2];
      }
      uVar3 = (uint)bVar10;
      if (( bVar10 & 4 ) != 0) {
         uVar11 = ( ulong )(uVar3 & 3);
         if (*(char*)( param_1 + 0x1cd + uVar11 ) == '\0') {
            uVar16 = param_2[1];
            uVar6 = *(int*)( param_1 + 8 + ( uVar11 + 0x240 ) * 4 ) + 1;
            *(uint*)( param_1 + 8 + ( uVar11 + 0x240 ) * 4 ) = uVar6;
            if (( ( *(char*)( param_1 + 0x1d0 + uVar11 ) == '\0' || 1 < uVar6 ) || ( bVar13 ) ) || ( ( *(long*)( uVar11 * 0x20 + 0xa0 + param_1 ) != 0 && ( ( ( lVar12 = param_1 + uVar11 * 0x38 * (long*)( lVar12 + 0x1f0 ) != 0 && ( lVar15= *(long *)(param_1 + 0x98 + uVar11 * 0x20),uVar8 = *(ulong*)( lVar15 + 0x10 ),uVar8 == *(ulong*)( lVar15 + 0x18 ) ) ) && ( *(long*)( *(long*)( lVar12 + 0x1e8 ) + 8 ) + 1U < uVar8 ) ) ) ) )) {
               *(undefined1*)( param_1 + 0x1cd + uVar11 ) = 1;
               pcVar14 = *(code**)( param_1 + 0x950 );
               *(undefined8*)( param_1 + 0x918 + uVar11 * 8 ) = 0xffffffffffffffff;
               if (pcVar14 != (code*)0x0) goto LAB_00101953;
            } else {
               uVar8 = *(ulong*)( param_1 + 0x938 );
               if (( bVar10 & 3 ) < 2) {
                  uVar8 = 0;
               }
               lVar12 = uVar11 + 0x122;
               uVar11 = *(ulong*)( param_1 + 8 + lVar12 * 8 );
               uVar9 = uVar8 + uVar16;
               if (uVar11 == 0xffffffffffffffff) {
                  pcVar14 = *(code**)( param_1 + 0x950 );
                  uVar11 = 0xffffffffffffffff;
                  if (!CARRY8(uVar8,uVar16)) {
                     uVar11 = uVar9;
                  }
                  *(ulong*)( param_1 + 8 + lVar12 * 8 ) = uVar11;
               } else {
                  pcVar14 = *(code**)( param_1 + 0x950 );
                  if (uVar11 <= uVar9) {
                     uVar9 = uVar11;
                  }
                  if (!CARRY8(uVar8,uVar16)) {
                     uVar11 = uVar9;
                  }
                  *(ulong*)( param_1 + 8 + lVar12 * 8 ) = uVar11;
               }
               if (pcVar14 == (code*)0x0) goto LAB_001018aa;
               LAB_00101953:uVar4 = *(undefined8*)( param_1 + 0x958 );
               uVar5 = ossl_ackm_get_ack_deadline(param_1, bVar10 & 3);
               ( *pcVar14 )(uVar5, bVar10 & 3, uVar4);
            }
            uVar3 = (uint)(byte)param_2[2];
         }
      }
      LAB_001018aa:bVar10 = (byte)uVar3 >> 3 & 3;
      if (bVar10 == 2) {
         plVar1 = (long*)( param_1 + 0x8c0 + ( ulong )(uVar3 & 3) * 8 );
         *plVar1 = *plVar1 + 1;
      } else if (bVar10 == 3) {
         plVar1 = (long*)( param_1 + 0x8f0 + ( ulong )(uVar3 & 3) * 8 );
         *plVar1 = *plVar1 + 1;
      } else if (bVar10 == 1) {
         plVar1 = (long*)( param_1 + 0x8d8 + ( ulong )(uVar3 & 3) * 8 );
         *plVar1 = *plVar1 + 1;
      }
   }
   uVar4 = 1;
   LAB_00101738:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ossl_ackm_set_loss_detection_deadline_callback(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x940 ) = param_2;
   *(undefined8*)( param_1 + 0x948 ) = param_3;
   return;
}void ossl_ackm_set_ack_deadline_callback(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x950 ) = param_2;
   *(undefined8*)( param_1 + 0x958 ) = param_3;
   return;
}bool ossl_ackm_mark_packet_pseudo_lost(long param_1, int param_2, undefined8 param_3) {
   undefined8 *puVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_88[13];
   long local_20;
   lVar2 = (long)param_2 * 0x30 + param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88[0] = param_3;
   puVar1 = (undefined8*)OPENSSL_LH_retrieve(*(undefined8*)( lVar2 + 0x18 ), local_88);
   if (puVar1 != (undefined8*)0x0) {
      tx_pkt_history_remove_isra_0(lVar2, *puVar1);
      puVar1[0xc] = 0;
      ackm_on_pkts_lost_isra_0(param_1, puVar1, 1);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1 != (undefined8*)0x0;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong ossl_ackm_get_pto_duration(long param_1) {
   ulong uVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   ulong local_38[2];
   ulong local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ossl_statm_get_rtt_info(*(undefined8*)( param_1 + 0x100 ), local_38);
   uVar1 = local_28 * 4;
   if (local_28 >> 0x3e == 0) {
      if (uVar1 < 1000000) {
         uVar1 = 1000000;
      }
   } else {
      uVar1 = 0xffffffffffffffff;
   }
   uVar2 = uVar1 + local_38[0];
   if (CARRY8(uVar1, local_38[0])) {
      uVar2 = 0xffffffffffffffff;
   }
   uVar1 = *(ulong*)( param_1 + 0x930 );
   if (( uVar1 != 0xffffffffffffffff ) && ( bVar3 = CARRY8(uVar2, uVar1) ),uVar2 = uVar2 + uVar1,bVar3) {
      uVar2 = 0xffffffffffffffff;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_ackm_get_largest_acked(long param_1, int param_2) {
   return *(undefined8*)( param_1 + 0x120 + (long)param_2 * 8 );
}void ossl_ackm_set_rx_max_ack_delay(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x930 ) = param_2;
   return;
}void ossl_ackm_set_tx_max_ack_delay(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x938 ) = param_2;
   return;
}

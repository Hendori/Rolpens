undefined8 alert_cb(uint *param_1, undefined1 param_2) {
   uint *puVar1;
   undefined8 uVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_1;
   if (( *param_1 != 0 ) && ( ( ( *param_1 & 0x80 ) == 0 || ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar1 == (uint*)0x0 ) )) {
      return 0;
   }
   for (int i_127 = 0; i_127 < 2; i_127++) {
      /* WARNING: Could not recover jumptable at 0x00100059. Too many branches */
   }
   uVar2 = ( **(code**)( puVar1 + 0x52 ) )(param_1, param_2, *(undefined8*)( puVar1 + 0x54 ));
   return uVar2;
}undefined8 got_transport_params_cb(undefined8 param_1, undefined8 param_2, uint *param_3) {
   uint *puVar1;
   undefined8 uVar2;
   if (param_3 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_3;
   if (( *param_3 != 0 ) && ( ( ( *param_3 & 0x80 ) == 0 || ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer(param_3) ),puVar1 == (uint*)0x0 ) )) {
      return 0;
   }
   for (int i_128 = 0; i_128 < 2; i_128++) {
      /* WARNING: Could not recover jumptable at 0x001000c6. Too many branches */
   }
   uVar2 = ( **(code**)( puVar1 + 0x50 ) )(param_3, param_1, param_2, *(undefined8*)( puVar1 + 0x54 ));
   return uVar2;
}undefined8 yield_secret_cb(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, uint *param_7) {
   uint *puVar1;
   undefined8 uVar2;
   if (( param_7 != (uint*)0x0 ) && ( ( puVar1 = param_7 * param_7 == 0 || ( ( ( *param_7 & 0x80 ) != 0 && ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer(param_7) ),puVar1 != (uint*)0x0 ) ) ) )) {
      for (int i_129 = 0; i_129 < 2; i_129++) {
         /* WARNING: Could not recover jumptable at 0x0010014f. Too many branches */
      }
      uVar2 = ( **(code**)( puVar1 + 0x4e ) )(param_7, param_1, param_2, param_5, param_6, *(undefined8*)( puVar1 + 0x54 ));
      return uVar2;
   }
   return 0;
}undefined8 crypto_release_rcd_cb(undefined8 param_1, uint *param_2) {
   uint *puVar1;
   undefined8 uVar2;
   if (param_2 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_2;
   if (( *param_2 != 0 ) && ( ( ( *param_2 & 0x80 ) == 0 || ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer(param_2) ),puVar1 == (uint*)0x0 ) )) {
      return 0;
   }
   for (int i_130 = 0; i_130 < 2; i_130++) {
      /* WARNING: Could not recover jumptable at 0x001001b5. Too many branches */
   }
   uVar2 = ( **(code**)( puVar1 + 0x4c ) )(param_2, param_1, *(undefined8*)( puVar1 + 0x54 ));
   return uVar2;
}undefined8 crypto_recv_rcd_cb(undefined8 param_1, undefined8 param_2, uint *param_3) {
   uint *puVar1;
   undefined8 uVar2;
   if (param_3 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_3;
   if (( *param_3 != 0 ) && ( ( ( *param_3 & 0x80 ) == 0 || ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer(param_3) ),puVar1 == (uint*)0x0 ) )) {
      return 0;
   }
   for (int i_131 = 0; i_131 < 2; i_131++) {
      /* WARNING: Could not recover jumptable at 0x00100226. Too many branches */
   }
   uVar2 = ( **(code**)( puVar1 + 0x4a ) )(param_3, param_1, param_2, *(undefined8*)( puVar1 + 0x54 ));
   return uVar2;
}undefined8 crypto_send_cb(undefined8 param_1, undefined8 param_2, undefined8 param_3, uint *param_4) {
   uint *puVar1;
   undefined8 uVar2;
   if (param_4 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_4;
   if (( *param_4 != 0 ) && ( ( ( *param_4 & 0x80 ) == 0 || ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer(param_4) ),puVar1 == (uint*)0x0 ) )) {
      return 0;
   }
   for (int i_132 = 0; i_132 < 2; i_132++) {
      /* WARNING: Could not recover jumptable at 0x001002af. Too many branches */
   }
   uVar2 = ( **(code**)( puVar1 + 0x48 ) )(param_4, param_1, param_2, param_3, *(undefined8*)( puVar1 + 0x54 ), *(code**)( puVar1 + 0x48 ));
   return uVar2;
}bool SSL_set_quic_tls_cbs(uint *param_1, int *param_2, undefined8 param_3) {
   int *piVar1;
   int iVar2;
   long lVar3;
   uint *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   uint *local_b8;
   code *local_b0;
   uint *local_a8;
   code *local_a0;
   uint *local_98;
   code *local_90;
   uint *local_88;
   code *local_80;
   uint *local_78;
   code *local_70;
   uint *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   uint *local_48;
   uint local_40;
   undefined4 local_3c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = (uint*)0x0;
   if (( ( param_1 == (uint*)0x0 ) || ( puVar4 = param_1 * param_1 == 0 ) ) || ( puVar4 = (uint*)0x0(*param_1 & 0x80) == 0 )) {
      iVar2 = SSL_is_tls(param_1);
      if (iVar2 != 0) goto LAB_00100312;
      LAB_00100578:ERR_new();
      ERR_set_debug("ssl/quic/quic_tls_api.c", 0x8a, "SSL_set_quic_tls_cbs");
      ERR_set_error(0x14, 0xc0101, 0);
   } else {
      puVar4 = (uint*)ossl_quic_obj_get0_handshake_layer();
      iVar2 = SSL_is_tls(param_1);
      if (iVar2 == 0) goto LAB_00100578;
      LAB_00100312:lVar3 = *(long*)( puVar4 + 0x48 );
      iVar2 = *param_2;
      while (iVar2 != 0) {
         switch (iVar2) {
            case 0x7d1:
        if (lVar3 == 0) {
          lVar3 = *(long *)(param_2 + 2);
          *(long *)(puVar4 + 0x48) = lVar3;
        }
        break;
            for (int i_133 = 0; i_133 < 4; i_133++) {
               case 0x7d2:
        if (*(long *)(puVar4 + 0x4a) == 0) {
          *(undefined8 *)(puVar4 + 0x4a) = *(undefined8 *)(param_2 + 2);
        }
        break;
            }
            case 0x7d6:
        if (*(long *)(puVar4 + 0x52) == 0) {
          *(undefined8 *)(puVar4 + 0x52) = *(undefined8 *)(param_2 + 2);
        }
         }
         piVar1 = param_2 + 4;
         param_2 = param_2 + 4;
         iVar2 = *piVar1;
      };
      if (( ( ( lVar3 == 0 ) || ( *(long*)( puVar4 + 0x4a ) == 0 ) ) || ( ( *(long*)( puVar4 + 0x4c ) == 0 || ( ( *(long*)( puVar4 + 0x4e ) == 0 || ( *(long*)( puVar4 + 0x50 ) == 0 ) ) ) ) ) ) || ( *(long*)( puVar4 + 0x52 ) == 0 )) {
         ERR_new();
         ERR_set_debug("ssl/quic/quic_tls_api.c", 0x7d, "tls_callbacks_from_dispatch");
         ERR_set_error(0x14, 0x1a7, 0);
         bVar5 = false;
         goto LAB_0010048a;
      }
      *(undefined8*)( puVar4 + 0x54 ) = param_3;
      ossl_quic_tls_free(*(undefined8*)( puVar4 + 0x56 ));
      local_b0 = crypto_send_cb;
      local_a0 = crypto_recv_rcd_cb;
      local_90 = crypto_release_rcd_cb;
      local_80 = yield_secret_cb;
      local_70 = got_transport_params_cb;
      local_50 = 0x100000;
      local_40 = puVar4[0x1e];
      local_60 = 0;
      local_58 = 0;
      local_3c = 0;
      local_b8 = param_1;
      local_a8 = param_1;
      local_98 = param_1;
      local_88 = param_1;
      local_78 = param_1;
      local_68 = param_1;
      local_48 = param_1;
      lVar3 = ossl_quic_tls_new(&local_b8);
      *(long*)( puVar4 + 0x56 ) = lVar3;
      if (lVar3 != 0) {
         iVar2 = ossl_quic_tls_configure(lVar3);
         bVar5 = iVar2 != 0;
         goto LAB_0010048a;
      }
   }
   bVar5 = false;
   LAB_0010048a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 SSL_set_quic_tls_transport_params(uint *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0;
      }
      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return 0;
      }
   }
   if (*(long*)( param_1 + 0x56 ) == 0) {
      ERR_new(0, param_2, param_3);
      ERR_set_debug("ssl/quic/quic_tls_api.c", 0xba, "SSL_set_quic_tls_transport_params");
      ERR_set_error(0x14, 0xc0101, 0);
      return 0;
   }
   uVar1 = ossl_quic_tls_set_transport_params();
   return uVar1;
}undefined8 SSL_set_quic_tls_early_data_enabled(uint *param_1, undefined4 param_2) {
   int iVar1;
   undefined8 uVar2;
   uint *puVar3;
   puVar3 = (uint*)0x0;
   if (( ( param_1 == (uint*)0x0 ) || ( puVar3 = param_1 * param_1 == 0 ) ) || ( puVar3 = (uint*)0x0(*param_1 & 0x80) == 0 )) {
      iVar1 = SSL_is_tls();
   } else {
      puVar3 = (uint*)ossl_quic_obj_get0_handshake_layer();
      iVar1 = SSL_is_tls(param_1);
   }
   if (iVar1 == 0) {
      ERR_new();
      uVar2 = 0xc6;
   } else {
      if (*(long*)( puVar3 + 0x56 ) != 0) {
         uVar2 = ossl_quic_tls_set_early_data_enabled(*(long*)( puVar3 + 0x56 ), param_2);
         return uVar2;
      }
      ERR_new();
      uVar2 = 0xcb;
   }
   ERR_set_debug("ssl/quic/quic_tls_api.c", uVar2, "SSL_set_quic_tls_early_data_enabled");
   ERR_set_error(0x14, 0xc0101, 0);
   return 0;
}

bool ssl3_do_change_cipher_spec(long param_1) {
   long lVar1;
   int iVar2;
   int iVar3;
   iVar2 = *(int*)( param_1 + 0x78 );
   if (*(long*)( param_1 + 0x368 ) == 0) {
      lVar1 = *(long*)( param_1 + 0x900 );
      if (( lVar1 == 0 ) || ( *(long*)( lVar1 + 8 ) == 0 )) {
         ERR_new();
         ERR_set_debug("ssl/s3_msg.c", 0x1a, "ssl3_do_change_cipher_spec");
         ERR_set_error(0x14, 0x85, 0);
         return false;
      }
      *(undefined8*)( lVar1 + 0x2f8 ) = *(undefined8*)( param_1 + 0x300 );
      iVar3 = ( *(code*)**(undefined8**)( *(long*)( param_1 + 0x18 ) + 0xd8 ) )();
      if (iVar3 == 0) {
         return false;
      }
   }
   iVar2 = ( **(code**)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x10 ) )(param_1, ( -(uint)(iVar2 == 0) & 0xfffffff0 ) + 0x21);
   return iVar2 != 0;
}undefined8 ssl3_send_alert(long param_1, int param_2, undefined4 param_3) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   undefined1 uVar4;
   lVar1 = *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 );
   if (( ( ( ( *(byte*)( lVar1 + 0x50 ) & 8 ) == 0 ) && ( iVar2 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar2 ) ) && ( iVar2 != 0x10000 )) {
      iVar2 = tls13_alert_code();
   } else {
      iVar2 = ( **(code**)( lVar1 + 0x40 ) )(param_3);
   }
   if (( *(int*)( param_1 + 0x48 ) == 0x300 ) && ( iVar2 == 0x46 )) {
      if (( *(byte*)( param_1 + 0x84 ) & 1 ) != 0) {
         return 0xffffffff;
      }
      uVar4 = 0x28;
   } else {
      if (iVar2 < 0) {
         return 0xffffffff;
      }
      uVar4 = (undefined1)iVar2;
      if (( *(byte*)( param_1 + 0x84 ) & 1 ) != 0) {
         if (iVar2 != 0) {
            return 0xffffffff;
         }
         uVar4 = 0;
      }
   }
   if (( param_2 == 2 ) && ( *(SSL_SESSION**)( param_1 + 0x900 ) != (SSL_SESSION*)0x0 )) {
      SSL_CTX_remove_session(*(SSL_CTX**)( param_1 + 0xb88 ), *(SSL_SESSION**)( param_1 + 0x900 ));
   }
   *(char*)( param_1 + 0x1c8 ) = (char)param_2;
   *(undefined4*)( param_1 + 0x1c4 ) = 1;
   *(undefined1*)( param_1 + 0x1c9 ) = uVar4;
   iVar2 = RECORD_LAYER_write_pending(param_1 + 0xc58);
   if (iVar2 != 0) {
      return 0xffffffff;
   }
   for (int i_2035 = 0; i_2035 < 2; i_2035++) {
      /* WARNING: Could not recover jumptable at 0x0010017d. Too many branches */
   }
   uVar3 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0x90 ) )(param_1);
   return uVar3;
}int ssl3_dispatch_alert(SSL *param_1) {
   short sVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   code *pcVar4;
   int iVar5;
   undefined4 uVar6;
   SSL *pSVar7;
   _func_3059 *p_Var8;
   long in_FS_OFFSET;
   undefined1 local_48[4];
   int local_44;
   int *local_40;
   stack_st_OCSP_RESPID *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != (SSL*)0x0 ) && ( ( pSVar7 = param_1 ),param_1->version == 0 || ( ( ( param_1->version & 0x80U ) != 0 && ( pSVar7 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar7 != (SSL*)0x0 ) ) )) {
      if (pSVar7[4].mode == 0) {
         LAB_001002d0:*(undefined4*)( (long)&pSVar7->max_cert_list + 4 ) = 0;
         iVar5 = 1;
         goto LAB_001002e0;
      }
      local_44 = pSVar7->state;
      local_48[0] = 0x15;
      if (local_44 == 0x304) {
         local_44 = 0x303;
      }
      iVar5 = SSL_get_state(param_1);
      if (( ( ( iVar5 == 0xd ) && ( *(int*)&pSVar7[4].expand == 0 ) ) && ( iVar5 = SSL_version(param_1) ),iVar5 >> 8 == 3 )) {
         local_44 = 0x301;
      }
      local_38 = (stack_st_OCSP_RESPID*)0x2;
      local_40 = &pSVar7->first_packet;
      iVar5 = RECORD_LAYER_write_pending(&pSVar7[4].ex_data.dummy);
      if (iVar5 == 0) {
         uVar3._0_4_ = pSVar7[4].first_packet;
         uVar3._4_4_ = pSVar7[4].client_version;
         uVar6 = ( **(code**)( pSVar7[4].mode + 0x30 ) )(uVar3, local_48, 1);
         iVar5 = ossl_tls_handle_rlayer_return(pSVar7, 1, uVar6, "ssl/s3_msg.c", 0x81);
         if (iVar5 < 1) {
            *(undefined4*)( (long)&pSVar7->max_cert_list + 4 ) = 2;
            pSVar7[4].tlsext_ocsp_ids = local_38;
            *(undefined1*)&pSVar7[4].tlsext_ocsp_exts = local_48[0];
            pSVar7[4].tlsext_ocsp_resp = (uchar*)local_40;
         } else {
            BIO_ctrl((BIO*)pSVar7->init_msg, 0xb, 0, (void*)0x0);
            pcVar4 = (code*)pSVar7[1].tlsext_opaque_prf_input_len;
            *(undefined4*)( (long)&pSVar7->max_cert_list + 4 ) = 0;
            if (pcVar4 != (code*)0x0) {
               ( *pcVar4 )(1, pSVar7->state, 0x15, &pSVar7->first_packet, 2, param_1, pSVar7[1].tlsext_session_ticket);
            }
            p_Var8 = (_func_3059*)pSVar7[3].info_callback;
            if (( p_Var8 != (_func_3059*)0x0 ) || ( p_Var8 = param_1->method[1].ssl_peek ),p_Var8 != (_func_3059*)0x0) {
               sVar1 = (short)pSVar7->first_packet;
               ( *p_Var8 )(param_1, (void*)0x4008, ( uint )(sVar1 << 8) | ( uint )(byte)((ushort)sVar1 >> 8));
            }
         }
         goto LAB_001002e0;
      }
      if (*(int*)( (long)&pSVar7->max_cert_list + 4 ) == 2) {
         uVar2._0_4_ = pSVar7[4].first_packet;
         uVar2._4_4_ = pSVar7[4].client_version;
         uVar6 = ( **(code**)( pSVar7[4].mode + 0x38 ) )(uVar2);
         iVar5 = ossl_tls_handle_rlayer_return(pSVar7, 1, uVar6, "ssl/s3_msg.c", 0x76);
         if (0 < iVar5) {
            pSVar7[4].tlsext_ocsp_ids = (stack_st_OCSP_RESPID*)0x0;
            goto LAB_001002d0;
         }
      } else {
         *(undefined4*)( (long)&pSVar7->max_cert_list + 4 ) = 0;
      }
   }
   iVar5 = -1;
   LAB_001002e0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar5;
}

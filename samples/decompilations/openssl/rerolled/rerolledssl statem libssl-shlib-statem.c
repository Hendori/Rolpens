uint SSL_get_state(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return param_1[0x2b];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(uint*)( lVar1 + 0xac );
         }

         return 0;
      }

   }

   return 0;
}
uint SSL_in_init(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return param_1[0x2d];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(uint*)( lVar1 + 0xb4 );
         }

         return 0;
      }

   }

   return 0;
}
bool SSL_is_init_finished(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (param_1[0x2d] == 0) {
            return param_1[0x2b] == 1;
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(int*)( lVar1 + 0xb4 ) == 0 )) {
            return *(int*)( lVar1 + 0xac ) == 1;
         }

         return false;
      }

   }

   return false;
}
bool SSL_in_before(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (param_1[0x2b] == 0) {
            return param_1[0x26] == 0;
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(int*)( lVar1 + 0xac ) == 0 )) {
            return *(int*)( lVar1 + 0x98 ) == 0;
         }

         return false;
      }

   }

   return false;
}
undefined4 ossl_statem_get_state(long param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined4*)( param_1 + 0xac );
   }

   return uVar1;
}
bool ossl_statem_in_error(long param_1) {
   return *(int*)( param_1 + 0x98 ) == 1;
}
void ossl_statem_set_in_init(long param_1, undefined4 param_2) {
   code *UNRECOVERED_JUMPTABLE;
   *(undefined4*)( param_1 + 0xb4 ) = param_2;
   if (( *(long*)( param_1 + 0xc70 ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0xc70 ) + 0x80 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00100219. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( param_1 + 0xc80 ));
      return;
   }

   return;
}
void ossl_statem_clear(long param_1) {
   *(undefined4*)( param_1 + 0x98 ) = 0;
   *(undefined4*)( param_1 + 0xac ) = 0;
   ossl_statem_set_in_init(param_1, 1);
   *(undefined4*)( param_1 + 0xc4 ) = 0;
   return;
}
void ossl_statem_set_renegotiate(long param_1) {
   ossl_statem_set_in_init(param_1, 1);
   *(undefined4*)( param_1 + 0xb0 ) = 0x15;
   return;
}
void ossl_statem_send_fatal(long param_1, int param_2) {
   if (( *(int*)( param_1 + 0xb4 ) == 0 ) || ( *(int*)( param_1 + 0x98 ) != 1 )) {
      ossl_statem_set_in_init(param_1, 1);
      *(undefined4*)( param_1 + 0x98 ) = 1;
      if (param_2 != -1) {
         ssl3_send_alert(param_1, 2, param_2);
         return;
      }

   }

   return;
}
void ossl_statem_fatal(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined4 param_10, undefined4 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   char in_AL;
   long in_FS_OFFSET;
   undefined4 local_e8;
   undefined4 local_e4;
   undefined1 *local_e0;
   undefined1 *local_d8;
   long local_d0;
   undefined1 local_c8[32];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   if (in_AL != '\0') {
      local_98 = param_1;
      local_88 = param_2;
      local_78 = param_3;
      local_68 = param_4;
      local_58 = param_5;
      local_48 = param_6;
      local_38 = param_7;
      local_28 = param_8;
   }

   local_d0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e0 = &stack0x00000008;
   local_d8 = local_c8;
   local_e8 = 0x20;
   local_e4 = 0x30;
   local_a8 = param_13;
   local_a0 = param_14;
   ERR_vset_error(0x14, param_11, param_12, &local_e8);
   ossl_statem_send_fatal(param_9, param_10);
   if (local_d0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int state_machine(SSL *param_1, uint param_2) {
   ulong uVar1;
   byte bVar2;
   SSL *s;
   SSL *pSVar3;
   cert_st *pcVar4;
   long lVar5;
   int iVar6;
   uint uVar7;
   undefined4 uVar8;
   int *piVar9;
   ulong uVar10;
   long lVar11;
   undefined4 extraout_var;
   COMP_CTX *str;
   undefined4 extraout_var_00;
   char *pcVar12;
   _func_3059 *p_Var13;
   code *pcVar14;
   undefined8 uVar15;
   code *pcVar16;
   code *pcVar17;
   code *pcVar18;
   long in_FS_OFFSET;
   bool bVar19;
   code *local_b8;
   _func_3059 *local_b0;
   int local_84;
   code *local_80;
   cert_st *local_78;
   code *local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   s = *(SSL**)&param_1.quiet_shutdown;
   if (*(int*)&param_1.msg_callback == 1) {
      LAB_00100b90:iVar6 = -1;
      goto LAB_00100644;
   }

   ERR_clear_error();
   piVar9 = __errno_location();
   local_b0 = (_func_3059*)param_1[3].info_callback;
   *piVar9 = 0;
   if (local_b0 == (_func_3059*)0x0) {
      local_b0 = param_1.method[1].ssl_peek;
   }

   piVar9 = (int*)( (long)&param_1.cipher_list + 4 );
   *piVar9 = *piVar9 + 1;
   iVar6 = SSL_in_init(param_1);
   if (iVar6 == 0) {
      bVar2 = *(byte*)( (long)&param_1.kssl_ctx + 1 );
      joined_r0x001007b8:if (( ( bVar2 & 8 ) == 0 ) && ( iVar6 = iVar6 == 0 )) goto LAB_00100b90;
   }
 else {
      iVar6 = SSL_in_before(param_1);
      if (iVar6 != 0) {
         bVar2 = *(byte*)( (long)&param_1.kssl_ctx + 1 );
         goto joined_r0x001007b8;
      }

   }

   uVar7 = *(uint*)&param_1.msg_callback;
   if (( uVar7 & 0xfffffffb ) == 0) {
      if (uVar7 == 0) {
         *(undefined8*)&param_1.field_0xac = 0;
      }

      *(uint*)&param_1.s2 = param_2;
      if (local_b0 == (_func_3059*)0x0) {
         LAB_00100ca6:uVar7 = param_1.state;
         if (( *(byte*)( *(long*)&param_1.wbio[1].ex_data.dummy + 0x50 ) & 8 ) == 0) goto LAB_001006e0;
         if (( ( uVar7 & 0xff00 ) == 0xfe00 ) || ( ( ( uVar7 & 0xff00 ) == 0x100 && ( ( param_2 & 1 ) == 0 ) ) )) goto LAB_001006ee;
         ERR_new();
         uVar15 = 0x1a3;
         LAB_00100cf4:ERR_set_debug("ssl/statem/statem.c", uVar15, "state_machine");
         ossl_statem_fatal(param_1, 0xffffffff, 0xc0103, 0);
      }
 else {
         if (( ( ( param_1.tls_session_ticket_ext_cb_arg == (void*)0x0 ) || ( lVar11._0_4_ = param_1[1].server ),lVar11._4_4_ = param_1[1].new_session,lVar11 == 0 ) ) || ( ( *(byte*)( *(long*)&param_1.wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0 )) {
            ( *local_b0 )(s, (void*)0x10, 1);
            goto LAB_00100ca6;
         }

         uVar7 = param_1.state;
         LAB_001006e0:if ((int)uVar7 >> 8 != 3) {
            ERR_new();
            uVar15 = 0x1a8;
            goto LAB_00100cf4;
         }

         LAB_001006ee:iVar6 = ssl_security(param_1, 9, 0, uVar7, 0);
         if (iVar6 == 0) {
            ERR_new();
            uVar15 = 0x1ae;
            goto LAB_00100cf4;
         }

         if (param_1.compress == (COMP_CTX*)0x0) {
            str = (COMP_CTX*)BUF_MEM_new();
            if (str == (COMP_CTX*)0x0) {
               ERR_new();
               uVar15 = 0x1b4;
               goto LAB_00100cf4;
            }

            iVar6 = BUF_MEM_grow((BUF_MEM*)str, 0x4000);
            if (CONCAT44(extraout_var_00, iVar6) == 0) {
               ERR_new();
               iVar6 = -1;
               ERR_set_debug("ssl/statem/statem.c", 0x1b8, "state_machine");
               ossl_statem_fatal(param_1, 0xffffffff, 0xc0103, 0);
               goto LAB_00100610;
            }

            param_1.compress = str;
         }

         param_1.sid_ctx_length = 0;
         for (int i = 0; i < 4; i++) {
            param_1.sid_ctx[i] = '\0';
         }

         *(undefined4*)&param_1.mode = 0;
         iVar6 = ssl_init_wbio_buffer(param_1);
         if (iVar6 == 0) {
            ERR_new();
            uVar15 = 0x1ce;
            goto LAB_00100cf4;
         }

         iVar6 = SSL_in_before(param_1);
         if (( iVar6 == 0 ) && ( *(int*)&param_1[4].expand == 0 )) goto LAB_00100788;
         iVar6 = tls_setup_handshake(param_1);
         if (iVar6 != 0) {
            if (( param_1.tls_session_ticket_ext_cb_arg != (void*)0x0 ) && ( lVar5._0_4_ = param_1[1].server ),lVar5._4_4_ = param_1[1].new_session,lVar5 != 0) goto LAB_00100788;
            *(undefined4*)&param_1.cipher_list = 1;
            goto LAB_00100788;
         }

      }

      switchD_0010050a_caseD_4:iVar6 = -1;
      str = (COMP_CTX*)0x0;
   }
 else {
      if (uVar7 != 4) {
         if (uVar7 == 2) goto LAB_0010053e;
         if (uVar7 == 3) {
            LAB_00100478:p_Var13 = (_func_3059*)param_1[3].info_callback;
            pSVar3 = *(SSL**)&param_1.quiet_shutdown;
            if (p_Var13 == (_func_3059*)0x0) {
               p_Var13 = param_1.method[1].ssl_peek;
            }

            if (*(int*)&param_1.s2 == 0) {
               pcVar14 = (code*)&ossl_statem_client_post_work;
               pcVar17 = (code*)&ossl_statem_client_pre_work;
               pcVar16 = (code*)&ossl_statem_client_write_transition;
               local_b8 = (code*)&ossl_statem_client_construct_message;
               uVar7 = *(uint*)( (long)&param_1.msg_callback + 4 );
               bVar19 = uVar7 == 2;
               if (!bVar19) goto LAB_001004cf;
               goto LAB_00100948;
            }

            pcVar14 = ossl_statem_server_post_work;
            pcVar17 = ossl_statem_server_pre_work;
            pcVar16 = ossl_statem_server_write_transition;
            local_b8 = ossl_statem_server_construct_message;
            switchD_001009e5_default:uVar7 = *(uint*)( (long)&param_1.msg_callback + 4 );
            bVar19 = uVar7 == 2;
            if (bVar19) goto LAB_00100948;
            LAB_001004cf:if (uVar7 < 2 || bVar19) {
               if (uVar7 == 0) goto LAB_001009fb;
               goto LAB_001004dd;
            }

            if (uVar7 == 3) goto LAB_001009b9;
            ERR_new();
            pcVar12 = "write_state_machine";
            uVar15 = 0x3c2;
            LAB_001005e1:ERR_set_debug("ssl/statem/statem.c", uVar15, pcVar12);
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
            goto switchD_0010050a_caseD_4;
         }

         if (( *(int*)( (long)&param_1.param + 4 ) == 0 ) || ( uVar7 != 1 )) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem.c", 0x1f8, "state_machine");
            ossl_statem_fatal(param_1, 0x50, 0x100, 0);
         }

         ERR_new();
         ERR_set_debug("ssl/statem/statem.c", 0x1f9, "state_machine");
         ERR_set_error(0x14, 0xc0101, 0);
         goto switchD_0010050a_caseD_4;
      }

      iVar6 = 1;
      str = (COMP_CTX*)0x0;
   }

   LAB_00100610:piVar9 = (int*)( (long)&param_1.cipher_list + 4 );
   *piVar9 = *piVar9 + -1;
   BUF_MEM_free((BUF_MEM*)str);
   if (local_b0 != (_func_3059*)0x0) {
      if (param_2 == 0) {
         ( *local_b0 )(s, (void*)0x1002, iVar6);
      }
 else {
         ( *local_b0 )(s, (void*)0x2002, iVar6);
      }

   }

   LAB_00100644:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
   LAB_001009b9:uVar8 = *(undefined4*)&param_1.msg_callback_arg;
   LAB_001009c0:uVar8 = ( *pcVar14 )(param_1, uVar8);
   *(undefined4*)&param_1.msg_callback_arg = uVar8;
   switch (uVar8) {
      case 0:
    if ((*(int *)((long)&param_1->param + 4) != 0) && (*(int *)&param_1->msg_callback == 1))
    goto switchD_0010050a_caseD_4;
    ERR_new();
    pcVar12 = "write_state_machine";
    uVar15 = 0x3ae;
    goto LAB_00100a90;
      case 1:
switchD_0010050a_caseD_1:
    *(undefined4 *)&param_1->msg_callback = 4;
    iVar6 = 1;
    str = (COMP_CTX *)0x0;
    goto LAB_00100610;
      case 2:
    *(undefined4 *)((long)&param_1->msg_callback + 4) = 0;
LAB_001009fb:
    if (p_Var13 == (_func_3059 *)0x0) {
LAB_00100a1b:
      iVar6 = (*pcVar16)(param_1);
    }
    else {
      if (*(int *)&param_1->s2 != 0) {
        (*p_Var13)(pSVar3,(void *)0x2001,1);
        goto LAB_00100a1b;
      }
      (*p_Var13)(pSVar3,(void *)0x1001,1);
      iVar6 = (*pcVar16)(param_1);
    }
    if (iVar6 != 1) {
      if (iVar6 == 2) goto switchD_0010050a_caseD_3;
      if (iVar6 != 0) goto switchD_001009e5_default;
      if ((*(int *)((long)&param_1->param + 4) != 0) && (*(int *)&param_1->msg_callback == 1))
      goto switchD_0010050a_caseD_4;
      ERR_new();
      pcVar12 = "write_state_machine";
      uVar15 = 0x35a;
      goto LAB_00100a90;
    }
    *(undefined8 *)((long)&param_1->msg_callback + 4) = _LC3;
LAB_001004dd:
    uVar8 = (*pcVar17)(param_1,*(undefined4 *)&param_1->msg_callback_arg);
    *(undefined4 *)&param_1->msg_callback_arg = uVar8;
    switch(uVar8) {
    case 0:
      if ((*(int *)((long)&param_1->param + 4) != 0) && (*(int *)&param_1->msg_callback == 1))
      goto switchD_0010050a_caseD_4;
      ERR_new();
      pcVar12 = "write_state_machine";
      uVar15 = 0x362;
      goto LAB_00100a90;
    case 1:
      goto switchD_0010050a_caseD_1;
    case 2:
      *(undefined4 *)((long)&param_1->msg_callback + 4) = 2;
      break;
    case 3:
      goto switchD_0010050a_caseD_3;
    case 4:
    case 5:
    case 6:
      goto switchD_0010050a_caseD_4;
    }
    iVar6 = (*local_b8)(param_1,&local_80,&local_84);
    if (iVar6 == 0) goto switchD_0010050a_caseD_4;
    if (local_84 == -1) goto LAB_00100c01;
    iVar6 = WPACKET_init(&local_78,param_1->compress);
    if ((iVar6 == 0) ||
       (iVar6 = (**(code **)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x58))
                          (param_1,&local_78,local_84), iVar6 == 0)) {
      WPACKET_cleanup(&local_78);
      ERR_new();
      pcVar12 = "write_state_machine";
      uVar15 = 0x380;
      goto LAB_001005e1;
    }
    if (local_80 != (code *)0x0) {
      iVar6 = (*local_80)(param_1,&local_78);
      if (iVar6 == 0) {
        WPACKET_cleanup(&local_78);
        if ((*(int *)((long)&param_1->param + 4) != 0) && (*(int *)&param_1->msg_callback == 1))
        goto switchD_0010050a_caseD_4;
        ERR_new();
        pcVar12 = "write_state_machine";
        uVar15 = 0x389;
        goto LAB_00100a90;
      }
      if (iVar6 == 2) goto LAB_001010cd;
    }
    iVar6 = (**(code **)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x60))
                      (param_1,&local_78,local_84);
    if ((iVar6 != 0) && (iVar6 = WPACKET_finish(&local_78), iVar6 != 0)) {
LAB_00100948:
      lVar11 = *(long *)&param_1->wbio[1].ex_data.dummy;
      if ((*(byte *)(lVar11 + 0x50) & 8) == 0) {
        if ((*(int *)&param_1->field_0xac != 0x12) && (*(int *)&param_1->field_0xac != 0x27))
        goto LAB_00100986;
LAB_00100b35:
        iVar6 = ssl3_do_write(param_1,0x14);
      }
      else {
        if (param_1->mac_flags == 0) {
          if ((*(int *)&param_1->field_0xac == 0x27) || (*(int *)&param_1->field_0xac == 0x12)) {
LAB_00100ae9:
            iVar6 = dtls1_do_write(param_1,0x14);
            goto LAB_0010098c;
          }
        }
        else {
          dtls1_start_timer(param_1);
          if ((*(int *)&param_1->field_0xac == 0x12) || (*(int *)&param_1->field_0xac == 0x27)) {
            if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0)
            goto LAB_00100b35;
            goto LAB_00100ae9;
          }
          lVar11 = *(long *)&param_1->wbio[1].ex_data.dummy;
        }
LAB_00100986:
        iVar6 = (**(code **)(lVar11 + 0x68))(param_1);
      }
LAB_0010098c:
      if (0 < iVar6) goto code_r0x00100994;
      goto switchD_0010050a_caseD_4;
    }
    WPACKET_cleanup(&local_78);
    ERR_new();
    pcVar12 = "write_state_machine";
    uVar15 = 0x399;
    goto LAB_001005e1;
      case 3:
switchD_0010050a_caseD_3:
    *(undefined4 *)&param_1->msg_callback = 2;
    *(undefined4 *)((long)&param_1->msg_callback_arg + 4) = 0;
LAB_0010053e:
    pSVar3 = *(SSL **)&param_1->quiet_shutdown;
    p_Var13 = (_func_3059 *)param_1[3].info_callback;
    local_80 = (code *)0x0;
    if (p_Var13 == (_func_3059 *)0x0) {
      p_Var13 = param_1->method[1].ssl_peek;
    }
    if (*(int *)&param_1->s2 == 0) {
      pcVar18 = (code *)&ossl_statem_client_max_message_size;
      pcVar16 = (code *)&ossl_statem_client_post_process_message;
      pcVar14 = (code *)&ossl_statem_client_process_message;
      pcVar17 = (code *)&ossl_statem_client_read_transition;
    }
    else {
      pcVar18 = ossl_statem_server_max_message_size;
      pcVar16 = ossl_statem_server_post_process_message;
      pcVar14 = ossl_statem_server_process_message;
      pcVar17 = ossl_statem_server_read_transition;
    }
    if (*(int *)&param_1->cipher_list != 0) {
      *(undefined4 *)&param_1[3].max_cert_list = 1;
      *(undefined4 *)&param_1->cipher_list = 0;
    }
    break;
      case 4:
      case 5:
      case 6:
    goto switchD_0010050a_caseD_4;
      default:
    goto switchD_001009e5_default;
   }

   switchD_00100c53_default:iVar6 = *(int*)( (long)&param_1.msg_callback_arg + 4 );
   if (iVar6 == 1) {
      uVar7 = *(uint*)( *(long*)&param_1.wbio[1].ex_data.dummy + 0x50 );
      goto LAB_001007f1;
   }

   if (iVar6 == 2) goto LAB_00100c26;
   if (iVar6 != 0) {
      ERR_new();
      pcVar12 = "read_state_machine";
      uVar15 = 0x2e6;
      goto LAB_001005e1;
   }

   LAB_00100872:if (( *(byte*)( *(long*)&param_1.wbio[1].ex_data.dummy + 0x50 ) & 8 ) == 0) {
      iVar6 = tls_get_message_header();
   }
 else {
      iVar6 = dtls_get_message(param_1, &local_84);
   }

   if (iVar6 == 0) goto switchD_0010050a_caseD_4;
   if (p_Var13 != (_func_3059*)0x0) {
      if (*(int*)&param_1.s2 == 0) {
         ( *p_Var13 )(pSVar3, (void*)0x1001, 1);
      }
 else {
         ( *p_Var13 )(pSVar3, (void*)0x2001, 1);
      }

   }

   iVar6 = ( *pcVar17 )(param_1, local_84);
   if (iVar6 == 0) goto switchD_0010050a_caseD_4;
   uVar1._0_4_ = param_1[1].quiet_shutdown;
   uVar1._4_4_ = param_1[1].shutdown;
   uVar10 = ( *pcVar18 )(param_1);
   if (uVar10 < uVar1) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem.c", 0x28c, "read_state_machine");
      ossl_statem_fatal(param_1, 0x2f, 0x98, 0);
      goto switchD_0010050a_caseD_4;
   }

   if (( *(byte*)( *(long*)&param_1.wbio[1].ex_data.dummy + 0x50 ) & 8 ) == 0) {
      if (*(long*)&param_1[1].quiet_shutdown == 0) {
         *(undefined4*)( (long)&param_1.msg_callback_arg + 4 ) = 1;
      }
 else {
         uVar1 = *(long*)&param_1[1].quiet_shutdown + 4;
         uVar10 = (long)param_1.cert - (long)param_1.compress.compress_in;
         iVar6 = BUF_MEM_grow_clean((BUF_MEM*)param_1.compress, (long)(int)uVar1);
         if (( CONCAT44(extraout_var, iVar6) == 0 ) || ( uVar1 < uVar10 )) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem.c", 0x296, "read_state_machine");
            ossl_statem_fatal(param_1, 0x50, 0x80007, 0);
            goto switchD_0010050a_caseD_4;
         }

         param_1.cert = (cert_st*)( uVar10 + param_1.compress.compress_in );
         uVar7 = *(uint*)( *(long*)&param_1.wbio[1].ex_data.dummy + 0x50 );
         *(undefined4*)( (long)&param_1.msg_callback_arg + 4 ) = 1;
         LAB_001007f1:if (( uVar7 & 8 ) != 0) goto LAB_001007f9;
      }

      iVar6 = tls_get_message_body(param_1, &local_80);
   }
 else {
      *(undefined4*)( (long)&param_1.msg_callback_arg + 4 ) = 1;
      LAB_001007f9:iVar6 = dtls_get_message_body(param_1, &local_80);
   }

   if (iVar6 == 0) goto switchD_0010050a_caseD_4;
   pcVar4 = param_1.cert;
   *(undefined4*)&param_1[3].max_cert_list = 0;
   if ((long)local_80 < 0) {
      ERR_new();
      pcVar12 = "read_state_machine";
      uVar15 = 0x2ae;
      goto LAB_001005e1;
   }

   local_70 = local_80;
   local_78 = pcVar4;
   iVar6 = ( *pcVar14 )(param_1, &local_78);
   param_1.sid_ctx_length = 0;
   for (int i = 0; i < 4; i++) {
      param_1.sid_ctx[i] = '\0';
   }

   if (iVar6 != 1) {
      if (iVar6 == 2) {
         *(undefined8*)( (long)&param_1.msg_callback_arg + 4 ) = _LC2;
         LAB_00100c26:iVar6 = ( *pcVar16 )(param_1, param_1.hit);
         param_1.hit = iVar6;
         switch (iVar6) {
            case 0:
        if ((*(int *)((long)&param_1->param + 4) == 0) || (*(int *)&param_1->msg_callback != 1)) {
          ERR_new();
          pcVar12 = "read_state_machine";
          uVar15 = 0x2d0;
          goto LAB_00100a90;
        }
        goto switchD_0010050a_caseD_4;
            case 1:
            case 3:
        goto switchD_00100c53_caseD_1;
            case 2:
        goto switchD_00100c53_caseD_2;
            case 4:
            case 5:
            case 6:
        goto switchD_0010050a_caseD_4;
         }

         goto switchD_00100c53_default;
      }

      if (iVar6 == 0) {
         if (( *(int*)( (long)&param_1.param + 4 ) != 0 ) && ( *(int*)&param_1.msg_callback == 1 )) goto switchD_0010050a_caseD_4;
         ERR_new();
         pcVar12 = "read_state_machine";
         uVar15 = 0x2b8;
         LAB_00100a90:ERR_set_debug("ssl/statem/statem.c", uVar15, pcVar12);
         ossl_statem_fatal(param_1, 0x50, 0x100, 0);
         goto switchD_0010050a_caseD_4;
      }

      switchD_00100c53_caseD_2:*(undefined4*)( (long)&param_1.msg_callback_arg + 4 ) = 0;
      goto LAB_00100872;
   }

   switchD_00100c53_caseD_1:if (( *(byte*)( *(long*)&param_1.wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0) {
      dtls1_stop_timer(param_1);
   }

   LAB_00100788:param_1.msg_callback = (_func_3150*)0x3;
   goto LAB_00100478;
   LAB_001010cd:WPACKET_cleanup(&local_78);
   LAB_00100c01:*(undefined8*)( (long)&param_1.msg_callback + 4 ) = _LC4;
   goto LAB_001009b9;
   code_r0x00100994:uVar8 = 4;
   *(undefined8*)( (long)&param_1.msg_callback + 4 ) = _LC4;
   goto LAB_001009c0;
}
undefined4 ossl_statem_get_in_handshake(long param_1) {
   return *(undefined4*)( param_1 + 0xbc );
}
void ossl_statem_set_in_handshake(long param_1, int param_2) {
   int iVar1;
   iVar1 = *(int*)( param_1 + 0xbc ) + -1;
   if (param_2 != 0) {
      iVar1 = *(int*)( param_1 + 0xbc ) + 1;
   }

   *(int*)( param_1 + 0xbc ) = iVar1;
   return;
}
uint ossl_statem_skip_early_data(long param_1) {
   uint uVar1;
   uVar1 = 0;
   if (( ( *(int*)( param_1 + 0xb18 ) == 1 ) && ( uVar1 = *(uint*)( param_1 + 0x78 ) ),uVar1 != 0 )) {
      return ( uint )(*(int*)( param_1 + 0x8d0 ) != 2);
   }

   return uVar1;
}
undefined8 ossl_statem_check_finish_init(long param_1, int param_2) {
   int iVar1;
   if (param_2 == -1) {
      if (1 < *(int*)( param_1 + 0xac ) - 0x32U) {
         return 1;
      }

      LAB_0010129b:ossl_statem_set_in_init(param_1, 1);
      if (*(int*)( param_1 + 0xf0 ) == 3) {
         *(undefined4*)( param_1 + 0xf0 ) = 7;
      }

   }
 else {
      if (*(int*)( param_1 + 0x78 ) == 0) {
         iVar1 = *(int*)( param_1 + 0xac );
         if (param_2 != 0) {
            if (1 < iVar1 - 0x32U) {
               return 1;
            }

            if (*(int*)( param_1 + 0xf0 ) == 4) {
               return 1;
            }

            goto LAB_0010129b;
         }

      }
 else {
         if (*(int*)( param_1 + 0xf0 ) != 0xc) {
            return 1;
         }

         iVar1 = *(int*)( param_1 + 0xac );
      }

      if (iVar1 == 0x32) {
         ossl_statem_set_in_init(param_1, 1);
      }

   }

   return 1;
}
void ossl_statem_set_hello_verify_done(long param_1) {
   *(undefined4*)( param_1 + 0x98 ) = 0;
   ossl_statem_set_in_init(param_1, 1);
   *(undefined4*)( param_1 + 0xac ) = 0x16;
   return;
}
undefined8 ossl_statem_connect(uint *param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         uVar2 = state_machine(param_1, 0);
         return uVar2;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            uVar2 = state_machine(lVar1, 0);
            return uVar2;
         }

         return 0xffffffff;
      }

   }

   return 0xffffffff;
}
undefined8 ossl_statem_accept(uint *param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         uVar2 = state_machine(param_1, 1);
         return uVar2;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            uVar2 = state_machine(lVar1, 1);
            return uVar2;
         }

         return 0xffffffff;
      }

   }

   return 0xffffffff;
}
bool statem_flush(long param_1) {
   bool bVar1;
   long lVar2;
   *(undefined4*)( param_1 + 0x68 ) = 2;
   lVar2 = BIO_ctrl(*(BIO**)( param_1 + 0x58 ), 0xb, 0, (void*)0x0);
   bVar1 = 0 < (int)lVar2;
   if (bVar1) {
      *(undefined4*)( param_1 + 0x68 ) = 1;
   }

   return bVar1;
}
uint ossl_statem_app_data_allowed(long param_1) {
   int iVar1;
   uint uVar2;
   uVar2 = 0;
   if (( ( *(int*)( param_1 + 0x98 ) != 0 ) && ( uVar2 = *(uint*)( param_1 + 0x1d8 ) ),uVar2 != 0 )) {
      iVar1 = *(int*)( param_1 + 0xac );
      if (*(int*)( param_1 + 0x78 ) != 0) {
         return ( uint )(iVar1 == 0 || iVar1 == 0x16);
      }

      uVar2 = ( uint )(iVar1 == 0xd);
   }

   return uVar2;
}
bool ossl_statem_export_allowed(long param_1) {
   bool bVar1;
   bVar1 = false;
   if (*(long*)( param_1 + 0x4a8 ) != 0) {
      bVar1 = *(int*)( param_1 + 0xac ) != 0x28;
   }

   return bVar1;
}
bool ossl_statem_export_early_allowed(long param_1) {
   bool bVar1;
   bVar1 = true;
   if (*(int*)( param_1 + 0xb18 ) != 2) {
      bVar1 = *(int*)( param_1 + 0xb18 ) != 0 && *(int*)( param_1 + 0x78 ) == 0;
   }

   return bVar1;
}


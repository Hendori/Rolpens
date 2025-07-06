void lh_RADIX_OBJ_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_246 = 0; i_246 < 2; i_246++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_RADIX_OBJ_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_247 = 0; i_247 < 2; i_247++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_RADIX_OBJ_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_248 = 0; i_248 < 2; i_248++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_RADIX_OBJ_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_249 = 0; i_249 < 2; i_249++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}undefined8 new_pending_cb(undefined8 param_1, undefined8 param_2) {
   pending_ssl_obj = param_2;
   pending_cb_called = 1;
   return 1;
}undefined8 client_hello_cb(undefined8 param_1) {
   client_hello_ssl_obj = param_1;
   hello_cb_called = 1;
   return 1;
}void script_gen_simple_thread_child(void) {
   return;
}long get_time(void) {
   ulong uVar1;
   ulong uVar2;
   ossl_crypto_mutex_lock(DAT_00108e60);
   uVar1 = DAT_00108e70;
   ossl_crypto_mutex_unlock(DAT_00108e60);
   uVar2 = ossl_time_now();
   if (!CARRY8(uVar2,uVar1)) {
      return uVar2 + uVar1;
   }
   return -1;
}int check_consistent_want(SSL *param_1, int param_2) {
   uint uVar1;
   int iVar2;
   int iVar3;
   bool bVar4;
   uVar1 = SSL_get_error(param_1, param_2);
   iVar2 = SSL_want(param_1);
   if (( uVar1 == 0 ) || ( uVar1 == 6 )) {
      bVar4 = true;
      if (iVar2 == 1) goto LAB_0010010d;
      LAB_0010014b:bVar4 = iVar2 == 8 && uVar1 == 0xc;
   } else {
      if (( ( uVar1 & 0xfffffffb ) == 1 ) && ( bVar4 = iVar2 == 1 )) goto LAB_0010010d;
      if (( uVar1 != 2 ) || ( iVar2 != 3 )) {
         if (( uVar1 == 3 ) && ( bVar4 = iVar2 == 2 )) goto LAB_0010010d;
         if (( uVar1 != 0xb ) || ( iVar2 != 7 )) {
            if (( uVar1 == 4 ) && ( bVar4 = iVar2 == 4 )) goto LAB_0010010d;
            goto LAB_0010014b;
         }
      }
      bVar4 = true;
   }
   LAB_0010010d:iVar3 = test_true("test/radix/quic_ops.c", 0x211, "(ec == SSL_ERROR_NONE && w == SSL_NOTHING) || (ec == SSL_ERROR_ZERO_RETURN && w == SSL_NOTHING) || (ec == SSL_ERROR_SSL && w == SSL_NOTHING) || (ec == SSL_ERROR_SYSCALL && w == SSL_NOTHING) || (ec == SSL_ERROR_WANT_READ && w == SSL_READING) || (ec == SSL_ERROR_WANT_WRITE && w == SSL_WRITING) || (ec == SSL_ERROR_WANT_CLIENT_HELLO_CB && w == SSL_CLIENT_HELLO_CB) || (ec == SSL_ERROR_WANT_X509_LOOKUP && w == SSL_X509_LOOKUP) || (ec == SSL_ERROR_WANT_RETRY_VERIFY && w == SSL_RETRY_VERIFY)", bVar4);
   if (iVar3 == 0) {
      test_error("test/radix/quic_ops.c", 0x21e, "got error=%d, want=%d", uVar1, iVar2);
      return 0;
   }
   return iVar3;
}char ssl_ctx_select_alpn(undefined8 param_1, uchar **param_2, uchar *param_3, uchar *param_4, uint param_5) {
   int iVar1;
   iVar1 = SSL_select_next_proto(param_2, param_3, alpn_ossltest, 9, param_4, param_5);
   return ( iVar1 != 1 ) * '\x02';
}void keylog_cb(undefined8 param_1, undefined8 param_2) {
   ossl_crypto_mutex_lock(DAT_00108e60);
   BIO_printf(DAT_00108e78, "%s", param_2);
   BIO_ctrl(DAT_00108e78, 0xb, 0, (void*)0x0);
   ossl_crypto_mutex_unlock(DAT_00108e60);
   return;
}undefined8 do_per_op(void) {
   OPENSSL_LH_doall(DAT_00108e68, per_op_tick_obj);
   return 1;
}undefined8 hf_clear(void) {
   long lVar1;
   ulong uVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   lVar1 = CRYPTO_THREAD_get_local(&radix_thread);
   ossl_crypto_mutex_lock(DAT_00108e60);
   OPENSSL_LH_doall(DAT_00108e68, cleanup_one);
   OPENSSL_LH_flush(DAT_00108e68);
   *(undefined8*)( lVar1 + 0x28 ) = 0;
   *(undefined8*)( lVar1 + 0xa0 ) = 0;
   puVar3 = (undefined8*)( lVar1 + 0x30U & 0xfffffffffffffff8 );
   uVar2 = ( ulong )(( (int)lVar1 - (int)puVar3 ) + 0xa8U >> 3);
   for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
   }
   ossl_crypto_mutex_unlock(DAT_00108e60);
   return 1;
}void radix_thread_cleanup_tl(undefined8 param_1) {
   int iVar1;
   iVar1 = test_ptr_null("test/radix/quic_bindings.c", 0x229, &_LC4, param_1);
   if (iVar1 != 0) {
      return;
   }
   /* WARNING: Subroutine does not return */
   abort();
}void RADIX_OBJ_cmp(undefined8 *param_1, undefined8 *param_2) {
   strcmp((char*)*param_1, (char*)*param_2);
   return;
}void RADIX_OBJ_hash(undefined8 *param_1) {
   OPENSSL_LH_strhash(*param_1);
   return;
}undefined8 radix_thread_init(long param_1) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = test_ptr("test/radix/quic_bindings.c", 0x234, &_LC7, param_1);
   if (iVar1 != 0) {
      uVar2 = CRYPTO_THREAD_get_local(&radix_thread);
      iVar1 = test_ptr_null("test/radix/quic_bindings.c", 0x235, "CRYPTO_THREAD_get_local(&radix_thread)", uVar2);
      if (iVar1 != 0) {
         iVar1 = CRYPTO_THREAD_set_local(&radix_thread, param_1);
         iVar1 = test_true("test/radix/quic_bindings.c", 0x238, "CRYPTO_THREAD_set_local(&radix_thread, rt)", iVar1 != 0);
         if (iVar1 != 0) {
            set_override_bio_out(*(undefined8*)( param_1 + 0xb0 ));
            set_override_bio_err(*(undefined8*)( param_1 + 0xb0 ));
            return 1;
         }
      }
   }
   return 0;
}undefined8 ssl_attach_bio_dgram_constprop_0(undefined8 param_1) {
   undefined2 uVar1;
   int iVar2;
   int iVar3;
   BIO *pBVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined4 local_3c;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3c = 0x100007f;
   iVar2 = BIO_socket(2, 2, 0x11, 0);
   iVar3 = test_int_ge("test/radix/quic_ops.c", 0x53, &_LC11, &_LC10, iVar2, 0);
   if (iVar3 == 0) {
      LAB_00100492:uVar5 = 0;
      joined_r0x001005c4:if (-1 < iVar2) {
         BIO_closesocket(iVar2);
      }
      uVar6 = 0;
      iVar2 = -1;
   } else {
      iVar3 = BIO_socket_nbio(iVar2, 1);
      iVar3 = test_true("test/radix/quic_ops.c", 0x56, "BIO_socket_nbio(fd, 1)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_00100492;
      uVar5 = BIO_ADDR_new();
      iVar3 = test_ptr("test/radix/quic_ops.c", 0x59, "addr = BIO_ADDR_new()", uVar5);
      if (iVar3 == 0) goto joined_r0x001005c4;
      iVar3 = BIO_ADDR_rawmake(uVar5, 2, &local_3c, 4, 0);
      iVar3 = test_true("test/radix/quic_ops.c", 0x5c, "BIO_ADDR_rawmake(addr, AF_INET, &ina, sizeof(ina), 0)", iVar3 != 0);
      if (iVar3 == 0) goto joined_r0x001005c4;
      iVar3 = BIO_bind(iVar2, uVar5, 0);
      iVar3 = test_true("test/radix/quic_ops.c", 0x60, "BIO_bind(fd, addr, 0)", iVar3 != 0);
      if (iVar3 == 0) goto joined_r0x001005c4;
      local_38 = uVar5;
      iVar3 = BIO_sock_info(iVar2, 0, &local_38);
      iVar3 = test_true("test/radix/quic_ops.c", 100, "BIO_sock_info(fd, BIO_SOCK_INFO_ADDRESS, &info)", iVar3 != 0);
      if (iVar3 == 0) goto joined_r0x001005c4;
      uVar1 = BIO_ADDR_rawport(uVar5);
      uVar6 = 1;
      iVar3 = test_int_gt("test/radix/quic_ops.c", 0x67, "BIO_ADDR_rawport(addr)", &_LC10, uVar1, 0);
      if (iVar3 == 0) goto joined_r0x001005c4;
   }
   BIO_ADDR_free(uVar5);
   iVar3 = test_true("test/radix/quic_ops.c", 0x7d, "ssl_create_bound_socket(local_port, &s_fd, actual_port)", uVar6);
   if (iVar3 != 0) {
      pBVar4 = BIO_new_dgram(iVar2, 1);
      iVar3 = test_ptr("test/radix/quic_ops.c", 0x80, "bio = BIO_new_dgram(s_fd, BIO_CLOSE)", pBVar4);
      if (iVar3 == 0) {
         BIO_closesocket(iVar2);
      } else {
         SSL_set0_rbio(param_1, pBVar4);
         iVar2 = BIO_up_ref(pBVar4);
         iVar2 = test_true("test/radix/quic_ops.c", 0x86, "BIO_up_ref(bio)", iVar2 != 0);
         if (iVar2 != 0) {
            SSL_set0_wbio(param_1, pBVar4);
            uVar5 = 1;
            goto LAB_001004ca;
         }
      }
   }
   uVar5 = 0;
   LAB_001004ca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 *RADIX_THREAD_new_constprop_0(void) {
   int iVar1;
   undefined8 *ptr;
   undefined8 uVar2;
   iVar1 = test_ptr("test/radix/quic_bindings.c", 0x1f0, &_LC21, &radix_process);
   if (iVar1 != 0) {
      ptr = (undefined8*)CRYPTO_zalloc(0xd0, "test/radix/quic_bindings.c", 0x1f1);
      iVar1 = test_ptr("test/radix/quic_bindings.c", 0x1f1, "rt = OPENSSL_zalloc(sizeof(*rt))", ptr);
      if (iVar1 != 0) {
         *ptr = &radix_process;
         uVar2 = ossl_crypto_mutex_new();
         ptr[0x17] = uVar2;
         iVar1 = test_ptr("test/radix/quic_bindings.c", 0x1f7, "rt->m = ossl_crypto_mutex_new()", uVar2);
         if (iVar1 != 0) {
            iVar1 = OPENSSL_sk_push(DAT_00108e58, ptr);
            iVar1 = test_true("test/radix/quic_bindings.c", 0x1fd, "sk_RADIX_THREAD_push(rp->threads, rt)", iVar1 != 0);
            if (iVar1 != 0) {
               ptr[4] = DAT_00108e50;
               DAT_00108e50 = DAT_00108e50 + 1;
               return ptr;
            }
            CRYPTO_free(ptr);
            return (undefined8*)0x0;
         }
         CRYPTO_free(ptr);
      }
   }
   return (undefined8*)0x0;
}void per_op_tick_obj(long param_1) {
   if (( *(byte*)( param_1 + 0x10 ) & 2 ) == 0) {
      return;
   }
   SSL_handle_events(*(undefined8*)( param_1 + 8 ));
   return;
}void cleanup_one(undefined8 *param_1) {
   *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) & 0xfe;
   SSL_free((SSL*)param_1[1]);
   CRYPTO_free((void*)*param_1);
   CRYPTO_free(param_1);
   return;
}undefined8 RADIX_PROCESS_set_ssl_constprop_0(char *param_1, undefined8 param_2) {
   int iVar1;
   undefined8 *ptr;
   char *pcVar2;
   undefined8 *ptr_00;
   undefined8 uVar3;
   undefined8 extraout_RDX;
   long in_FS_OFFSET;
   char *local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = test_ptr("test/radix/quic_bindings.c", 0x6f, &_LC25, param_1);
   if (( iVar1 == 0 ) || ( iVar1 = test_ptr("test/radix/quic_bindings.c", 0x6f, &_LC26, param_2) ),iVar1 == 0) {
      LAB_00100a20:iVar1 = test_ptr("test/radix/quic_bindings.c", 0x1d7, "obj = RADIX_OBJ_new(name, ssl)", 0);
      if (iVar1 == 0) {
         LAB_00100a3a:uVar3 = 0;
         goto LAB_001009e5;
      }
      local_48[0] = param_1;
      ptr_00 = (undefined8*)OPENSSL_LH_retrieve(DAT_00108e68, local_48);
      if (ptr_00 != (undefined8*)0x0) {
         ptr = (undefined8*)0x0;
         LAB_0010099f:iVar1 = test_true("test/radix/quic_bindings.c", 0x1c3, "existing->registered", *(byte*)( ptr_00 + 2 ) & 1);
         if (iVar1 == 0) {
            iVar1 = test_true("test/radix/quic_bindings.c", 0x1da, "RADIX_PROCESS_set_obj(rp, name, obj)", 0);
            if (iVar1 != 0) goto LAB_001009e0;
            if (ptr != (undefined8*)0x0) goto LAB_00100b0e;
            goto LAB_00100a3a;
         }
         OPENSSL_LH_delete(DAT_00108e68, ptr_00);
         *(byte*)( ptr_00 + 2 ) = *(byte*)( ptr_00 + 2 ) & 0xfe;
         SSL_free((SSL*)ptr_00[1]);
         CRYPTO_free((void*)*ptr_00);
         CRYPTO_free(ptr_00);
         if (ptr != (undefined8*)0x0) {
            LAB_00100ad8:OPENSSL_LH_insert(DAT_00108e68, ptr);
            *(byte*)( ptr + 2 ) = *(byte*)( ptr + 2 ) | 1;
            iVar1 = 1;
            goto LAB_00100af2;
         }
      }
      iVar1 = test_true("test/radix/quic_bindings.c", 0x1da, "RADIX_PROCESS_set_obj(rp, name, obj)", 1);
      if (iVar1 == 0) {
         uVar3 = 0;
         goto LAB_001009e5;
      }
   } else {
      ptr = (undefined8*)CRYPTO_zalloc(0x18, "test/radix/quic_bindings.c", 0x72);
      iVar1 = test_ptr("test/radix/quic_bindings.c", 0x72, "obj = OPENSSL_zalloc(sizeof(*obj))", ptr);
      if (iVar1 == 0) goto LAB_00100a20;
      pcVar2 = CRYPTO_strdup(param_1, "test/radix/quic_bindings.c", 0x75);
      *ptr = pcVar2;
      iVar1 = test_ptr("test/radix/quic_bindings.c", 0x75, "obj->name = OPENSSL_strdup(name)", pcVar2);
      if (iVar1 == 0) {
         CRYPTO_free(ptr);
         goto LAB_00100a20;
      }
      ptr[1] = param_2;
      iVar1 = test_ptr("test/radix/quic_bindings.c", 0x1d7, "obj = RADIX_OBJ_new(name, ssl)", ptr);
      if (iVar1 == 0) goto LAB_00100a3a;
      iVar1 = test_false("test/radix/quic_bindings.c", 0x1be, "obj->registered", *(byte*)( ptr + 2 ) & 1);
      if (iVar1 != 0) {
         local_48[0] = param_1;
         ptr_00 = (undefined8*)OPENSSL_LH_retrieve(DAT_00108e68, local_48, extraout_RDX, iVar1);
         if (( ptr_00 != (undefined8*)0x0 ) && ( ptr_00 != ptr )) goto LAB_0010099f;
         goto LAB_00100ad8;
      }
      LAB_00100af2:iVar1 = test_true("test/radix/quic_bindings.c", 0x1da, "RADIX_PROCESS_set_obj(rp, name, obj)", iVar1);
      if (iVar1 == 0) {
         LAB_00100b0e:SSL_free((SSL*)ptr[1]);
         CRYPTO_free((void*)*ptr);
         CRYPTO_free(ptr);
         uVar3 = 0;
         goto LAB_001009e5;
      }
   }
   LAB_001009e0:uVar3 = 1;
   LAB_001009e5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}void report_obj(undefined8 *param_1, BIO *param_2) {
   undefined8 uVar1;
   bool bVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   long lVar7;
   undefined *puVar8;
   undefined *puVar9;
   undefined *puVar10;
   char *pcVar11;
   char *pcVar12;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   ulong local_48;
   long local_40;
   uVar1 = param_1[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   BIO_printf(param_2, "      - %-16s @ %p\n", *param_1, uVar1);
   ERR_set_mark();
   iVar3 = SSL_is_quic(uVar1);
   local_48 = 0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   if (iVar3 == 0) {
      BIO_printf(param_2, "%sType:          %s\n", "          ", &_LC57);
      goto LAB_00100be5;
   }
   iVar3 = SSL_is_connection(uVar1);
   iVar4 = SSL_is_listener(uVar1);
   if (iVar4 == 0) {
      if (iVar3 == 0) {
         BIO_printf(param_2, "%sType:          %s\n", "          ", &_LC58);
      } else {
         BIO_printf(param_2, "%sType:          %s\n", "          ", &_LC55);
         iVar3 = SSL_get_conn_close_info(uVar1, local_68, 0x28);
         if (iVar3 != 0) {
            bVar2 = true;
            goto LAB_00100d38;
         }
      }
   } else {
      BIO_printf(param_2, "%sType:          %s\n", "          ", &_LC59);
      if (( iVar3 == 0 ) || ( iVar3 = SSL_get_conn_close_info(uVar1, local_68, 0x28) ),iVar3 == 0) goto LAB_00100be5;
      bVar2 = false;
      LAB_00100d38:puVar8 = (undefined*)ossl_quic_err_to_string(local_68._0_8_);
      puVar9 = (undefined*)ossl_quic_frame_type_to_string(local_68._8_8_);
      if (puVar8 == (undefined*)0x0) {
         puVar8 = &_LC33;
      }
      pcVar12 = "app";
      if (puVar9 == (undefined*)0x0) {
         puVar9 = &_LC33;
      }
      puVar10 = (undefined*)local_58._0_8_;
      if ((undefined*)local_58._0_8_ == (undefined*)0x0) {
         puVar10 = &_LC34;
      }
      if (( local_48 & 2 ) != 0) {
         pcVar12 = "transport";
      }
      pcVar11 = "remote";
      if (( local_48 & 1 ) != 0) {
         pcVar11 = "local";
      }
      BIO_printf(param_2, "%sConnection is closed: %s(%llu)/%s(%llu), %s, %s, reason: \"%s\"\n", "          ", puVar8, local_68._0_8_, puVar9, local_68._8_8_, pcVar11, pcVar12, puVar10);
      if (!bVar2) goto LAB_00100be5;
   }
   lVar7 = SSL_get_stream_id(uVar1);
   if (lVar7 != -1) {
      BIO_printf(param_2, "%sStream ID: %llu\n", "          ", lVar7);
   }
   uVar5 = SSL_get_stream_read_state(uVar1);
   uVar6 = SSL_get_stream_write_state(uVar1);
   iVar3 = SSL_get_stream_read_error_code(uVar1, &local_78);
   if (iVar3 != 1) {
      local_78 = -1;
   }
   iVar3 = SSL_get_stream_write_error_code(uVar1, &local_70);
   lVar7 = local_78;
   if (iVar3 != 1) {
      local_70 = -1;
   }
   switch (uVar5) {
      case 0:
    pcVar12 = "none";
    break;
      case 1:
    pcVar12 = "OK";
    break;
      case 2:
    pcVar12 = "wrong-dir";
    break;
      case 3:
    pcVar12 = "finished";
    break;
      case 4:
    pcVar12 = "reset-local";
    break;
      case 5:
    pcVar12 = "reset-remote";
    break;
      case 6:
    pcVar12 = "conn-closed";
    break;
      default:
    pcVar12 = "?";
   }
   BIO_printf(param_2, "%s%-15s%s(%d)", "          ", "Read state: ", pcVar12, (ulong)uVar5);
   if (lVar7 != -1) {
      BIO_printf(param_2, ", %llu", lVar7);
   }
   BIO_printf(param_2, "\n");
   lVar7 = local_70;
   switch (uVar6) {
      case 0:
    pcVar12 = "none";
    break;
      case 1:
    pcVar12 = "OK";
    break;
      case 2:
    pcVar12 = "wrong-dir";
    break;
      case 3:
    pcVar12 = "finished";
    break;
      case 4:
    pcVar12 = "reset-local";
    break;
      case 5:
    pcVar12 = "reset-remote";
    break;
      case 6:
    pcVar12 = "conn-closed";
    break;
      default:
    pcVar12 = "?";
   }
   BIO_printf(param_2, "%s%-15s%s(%d)", "          ", "Write state: ", pcVar12, (ulong)uVar6);
   if (lVar7 != -1) {
      BIO_printf(param_2, ", %llu", lVar7);
   }
   BIO_printf(param_2, "\n");
   LAB_00100be5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   ERR_pop_to_mark();
   return;
}undefined8 hf_sleep(long *param_1) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   lVar1 = *param_1;
   iVar2 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar1 + 0x70 ) - *(long*)( lVar1 + 0x68 ), 8);
   if (iVar2 != 0) {
      uVar4 = **(undefined8**)( lVar1 + 0x68 );
      *(undefined8**)( lVar1 + 0x68 ) = *(undefined8**)( lVar1 + 0x68 ) + 1;
   } else {
      uVar4 = 0;
   }
   uVar3 = test_true("test/radix/quic_ops.c", 0x3dd, "TERP_stk_pop((fctx->terp), &((ms)), sizeof((ms)))", iVar2 != 0);
   if ((int)uVar3 != 0) {
      OSSL_sleep(uVar4);
      uVar3 = 1;
   }
   return uVar3;
}void openc_u64_constprop_0(long param_1, undefined8 param_2) {
   void *addr;
   int iVar1;
   long lVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long lVar5;
   puVar4 = *(undefined8**)( param_1 + 0x38 );
   if (( ulong )(*(long*)( param_1 + 0x40 ) - (long)puVar4) < 8) {
      addr = *(void**)( param_1 + 0x30 );
      lVar2 = *(long*)( param_1 + 0x40 ) - (long)addr;
      lVar5 = lVar2 * 2;
      if (lVar2 == 0) {
         lVar5 = 0x400;
      }
      pvVar3 = CRYPTO_realloc(addr, (int)lVar5, "test/radix/terp.c", 0x106);
      iVar1 = test_ptr("test/radix/terp.c", 0x107, &_LC4, pvVar3);
      if (iVar1 == 0) {
         return;
      }
      *(void**)( param_1 + 0x30 ) = pvVar3;
      puVar4 = (undefined8*)( (long)pvVar3 + ( (long)puVar4 - (long)addr ) );
      *(long*)( param_1 + 0x40 ) = (long)pvVar3 + lVar5;
   }
   *(undefined8**)( param_1 + 0x38 ) = puVar4 + 1;
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = param_2;
   }
   return;
}void openc_size(long param_1, undefined8 param_2) {
   void *addr;
   int iVar1;
   long lVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long lVar5;
   puVar4 = *(undefined8**)( param_1 + 0x38 );
   if (( ulong )(*(long*)( param_1 + 0x40 ) - (long)puVar4) < 8) {
      addr = *(void**)( param_1 + 0x30 );
      lVar2 = *(long*)( param_1 + 0x40 ) - (long)addr;
      lVar5 = lVar2 * 2;
      if (lVar2 == 0) {
         lVar5 = 0x400;
      }
      pvVar3 = CRYPTO_realloc(addr, (int)lVar5, "test/radix/terp.c", 0x106);
      iVar1 = test_ptr("test/radix/terp.c", 0x107, &_LC4, pvVar3);
      if (iVar1 == 0) {
         return;
      }
      *(void**)( param_1 + 0x30 ) = pvVar3;
      puVar4 = (undefined8*)( (long)pvVar3 + ( (long)puVar4 - (long)addr ) );
      *(long*)( param_1 + 0x40 ) = (long)pvVar3 + lVar5;
   }
   *(undefined8**)( param_1 + 0x38 ) = puVar4 + 1;
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = param_2;
   }
   return;
}void openc_p(long param_1, undefined8 param_2) {
   void *addr;
   int iVar1;
   long lVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long lVar5;
   puVar4 = *(undefined8**)( param_1 + 0x38 );
   if (( ulong )(*(long*)( param_1 + 0x40 ) - (long)puVar4) < 8) {
      addr = *(void**)( param_1 + 0x30 );
      lVar2 = *(long*)( param_1 + 0x40 ) - (long)addr;
      lVar5 = lVar2 * 2;
      if (lVar2 == 0) {
         lVar5 = 0x400;
      }
      pvVar3 = CRYPTO_realloc(addr, (int)lVar5, "test/radix/terp.c", 0x106);
      iVar1 = test_ptr("test/radix/terp.c", 0x107, &_LC4, pvVar3);
      if (iVar1 == 0) {
         return;
      }
      *(void**)( param_1 + 0x30 ) = pvVar3;
      puVar4 = (undefined8*)( (long)pvVar3 + ( (long)puVar4 - (long)addr ) );
      *(long*)( param_1 + 0x40 ) = (long)pvVar3 + lVar5;
   }
   *(undefined8**)( param_1 + 0x38 ) = puVar4 + 1;
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = param_2;
   }
   return;
}void opgen_FUNC(long param_1, undefined8 param_2, undefined8 param_3) {
   void *addr;
   int iVar1;
   long lVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long lVar5;
   openc_size(param_1, 6);
   puVar4 = *(undefined8**)( param_1 + 0x38 );
   if (( ulong )(*(long*)( param_1 + 0x40 ) - (long)puVar4) < 8) {
      addr = *(void**)( param_1 + 0x30 );
      lVar2 = *(long*)( param_1 + 0x40 ) - (long)addr;
      lVar5 = lVar2 * 2;
      if (lVar2 == 0) {
         lVar5 = 0x400;
      }
      pvVar3 = CRYPTO_realloc(addr, (int)lVar5, "test/radix/terp.c", 0x106);
      iVar1 = test_ptr("test/radix/terp.c", 0x107, &_LC4, pvVar3);
      if (iVar1 == 0) goto LAB_00101339;
      *(void**)( param_1 + 0x30 ) = pvVar3;
      puVar4 = (undefined8*)( ( (long)puVar4 - (long)addr ) + (long)pvVar3 );
      *(long*)( param_1 + 0x40 ) = (long)pvVar3 + lVar5;
   }
   *(undefined8**)( param_1 + 0x38 ) = puVar4 + 1;
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = param_2;
   }
   LAB_00101339:openc_p(param_1, param_3);
   return;
}void opgen_FUNC_constprop_0(long param_1, undefined8 param_2, undefined8 param_3) {
   void *addr;
   int iVar1;
   long lVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long lVar5;
   openc_u64_constprop_0(param_1, 6);
   puVar4 = *(undefined8**)( param_1 + 0x38 );
   if (( ulong )(*(long*)( param_1 + 0x40 ) - (long)puVar4) < 8) {
      addr = *(void**)( param_1 + 0x30 );
      lVar2 = *(long*)( param_1 + 0x40 ) - (long)addr;
      lVar5 = lVar2 * 2;
      if (lVar2 == 0) {
         lVar5 = 0x400;
      }
      pvVar3 = CRYPTO_realloc(addr, (int)lVar5, "test/radix/terp.c", 0x106);
      iVar1 = test_ptr("test/radix/terp.c", 0x107, &_LC4, pvVar3);
      if (iVar1 == 0) goto LAB_00101409;
      *(void**)( param_1 + 0x30 ) = pvVar3;
      puVar4 = (undefined8*)( ( (long)puVar4 - (long)addr ) + (long)pvVar3 );
      *(long*)( param_1 + 0x40 ) = (long)pvVar3 + lVar5;
   }
   *(undefined8**)( param_1 + 0x38 ) = puVar4 + 1;
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = param_2;
   }
   LAB_00101409:openc_p(param_1, param_3);
   return;
}void script_gen_simple_conn(long param_1) {
   bool bVar1;
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC65);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 3);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_new_ssl, "hf_new_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC65);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_new_ssl_listener_from, "hf_new_ssl_listener_from");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_listen, "hf_listen");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_new_ssl, "hf_new_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 1);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_set_peer_addr_from, "hf_set_peer_addr_from");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x19;
   opgen_FUNC_constprop_0(param_1, hf_connect_wait, "hf_connect_wait");
   bVar1 = false;
   while (true) {
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1f;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1f;
      openc_u64_constprop_0(param_1, 3);
      openc_p(param_1, &_LC71);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1f;
      opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1f;
      openc_u64_constprop_0(param_1, 2);
      openc_p(param_1, "apple");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1f;
      openc_size(param_1, 5);
      openc_size(param_1, 6);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1f;
      opgen_FUNC(param_1, hf_write, "hf_write");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x21;
      openc_size(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x21;
      openc_size(param_1, 3);
      openc_p(param_1, &_LC68);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x21;
      opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x21;
      openc_size(param_1, 3);
      openc_p(param_1, &_LC76);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x21;
      openc_size(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x21;
      opgen_FUNC(param_1, hf_accept_conn, "hf_accept_conn");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x22;
      openc_size(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x22;
      openc_size(param_1, 3);
      openc_p(param_1, &_LC68);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x22;
      opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x22;
      opgen_FUNC(param_1, hf_accept_conn_none, "hf_accept_conn_none");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x24;
      openc_size(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x24;
      openc_size(param_1, 3);
      openc_p(param_1, &_LC76);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x24;
      opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x24;
      openc_size(param_1, 2);
      openc_p(param_1, "apple");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x24;
      openc_size(param_1, 5);
      openc_size(param_1, 6);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x24;
      opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x25;
      openc_size(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x25;
      openc_size(param_1, 3);
      openc_p(param_1, &_LC76);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x25;
      opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x25;
      openc_size(param_1, 2);
      openc_p(param_1, "orange");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x25;
      openc_size(param_1, 5);
      openc_size(param_1, 7);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x25;
      opgen_FUNC(param_1, hf_write, "hf_write");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x26;
      openc_size(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x26;
      openc_size(param_1, 3);
      openc_p(param_1, &_LC71);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x26;
      opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x26;
      openc_size(param_1, 2);
      openc_p(param_1, "orange");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x26;
      openc_size(param_1, 5);
      openc_size(param_1, 7);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x26;
      opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
      if (bVar1) break;
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1b;
      opgen_FUNC_constprop_0(param_1, hf_clear, "hf_clear");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 3);
      openc_p(param_1, &_LC68);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 1);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_new_ssl, "hf_new_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 3);
      openc_p(param_1, &_LC68);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_listen, "hf_listen");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 3);
      openc_p(param_1, &_LC71);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_new_ssl, "hf_new_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 3);
      openc_p(param_1, &_LC71);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 1);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 3);
      openc_p(param_1, &_LC68);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_set_peer_addr_from, "hf_set_peer_addr_from");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 0);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      openc_u64_constprop_0(param_1, 3);
      openc_p(param_1, &_LC71);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x1c;
      opgen_FUNC_constprop_0(param_1, hf_connect_wait, "hf_connect_wait");
      bVar1 = true;
   };
   return;
}void script_gen_ssl_poll_child(long param_1) {
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x43;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 100);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x43;
   opgen_FUNC_constprop_0(param_1, hf_sleep, "hf_sleep");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x44;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x44;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC83);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x44;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x44;
   openc_u64_constprop_0(param_1, 2);
   openc_p(param_1, "extra");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x44;
   openc_u64_constprop_0(param_1, 5);
   openc_size(param_1, 6);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0x44;
   opgen_FUNC_constprop_0(param_1, hf_write, "hf_write");
   return;
}void script_gen_ssl_poll(long param_1) {
   long lVar1;
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 1);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_new_ssl, "hf_new_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_listen, "hf_listen");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_new_ssl, "hf_new_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 1);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_set_peer_addr_from, "hf_set_peer_addr_from");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_connect_wait, "hf_connect_wait");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa5;
   opgen_FUNC_constprop_0(param_1, hf_set_default_stream_mode, "hf_set_default_stream_mode");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa8;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa8;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa8;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa8;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC83);
   for (int i_250 = 0; i_250 < 2; i_250++) {
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 20 ) = 168;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 0);
   }
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa8;
   opgen_FUNC_constprop_0(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa9;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa9;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC83);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa9;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa9;
   openc_u64_constprop_0(param_1, 2);
   openc_p(param_1, "apple");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa9;
   openc_u64_constprop_0(param_1, 5);
   openc_size(param_1, 6);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xa9;
   opgen_FUNC_constprop_0(param_1, hf_write, "hf_write");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xab;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xab;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xab;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xab;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC87);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xab;
   openc_u64_constprop_0(param_1);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xab;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xab;
   opgen_FUNC_constprop_0(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xac;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xac;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC87);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xac;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xac;
   openc_u64_constprop_0(param_1, 2);
   openc_p(param_1, "orange");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xac;
   openc_u64_constprop_0(param_1, 5);
   openc_size(param_1, 7);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xac;
   opgen_FUNC_constprop_0(param_1, hf_write, "hf_write");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xae;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xae;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xae;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xae;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC88);
   for (int i_251 = 0; i_251 < 2; i_251++) {
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 20 ) = 174;
      openc_u64_constprop_0(param_1, 4);
      openc_size(param_1, 0);
   }
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xae;
   opgen_FUNC_constprop_0(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xaf;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xaf;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC88);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xaf;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xaf;
   openc_u64_constprop_0(param_1, 2);
   openc_p(param_1, "Strawberry");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xaf;
   openc_u64_constprop_0(param_1, 5);
   openc_size(param_1, 0xb);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xaf;
   opgen_FUNC_constprop_0(param_1, hf_write, "hf_write");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb1;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb1;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC71);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb1;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb1;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC90);
   for (int i_252 = 0; i_252 < 2; i_252++) {
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 20 ) = 177;
      openc_u64_constprop_0(param_1);
      openc_size(param_1, 0);
   }
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb1;
   opgen_FUNC_constprop_0(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb2;
   openc_u64_constprop_0(param_1);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb2;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC90);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb2;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb2;
   openc_u64_constprop_0(param_1, 2);
   openc_p(param_1, &_LC91);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb2;
   openc_u64_constprop_0(param_1, 5);
   openc_size(param_1, 5);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb2;
   opgen_FUNC_constprop_0(param_1, hf_write, "hf_write");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC76);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   opgen_FUNC_constprop_0(param_1, hf_accept_conn, "hf_accept_conn");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_u64_constprop_0(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_u64_constprop_0(param_1, 3);
   openc_p(param_1, &_LC76);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   opgen_FUNC_constprop_0(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   opgen_FUNC(param_1, hf_set_default_stream_mode, "hf_set_default_stream_mode");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb4;
   opgen_FUNC(param_1, hf_accept_conn_none, "hf_accept_conn_none");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb6;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb6;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC76);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb6;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb6;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC92);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb6;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb6;
   openc_size(param_1, 4);
   openc_size(param_1, 1);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb6;
   opgen_FUNC(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb7;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb7;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC92);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb7;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb7;
   openc_size(param_1, 2);
   openc_p(param_1, "apple");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb7;
   openc_size(param_1, 5);
   openc_size(param_1, 6);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb7;
   opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb9;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb9;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC76);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb9;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb9;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC93);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb9;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb9;
   openc_size(param_1, 4);
   openc_size(param_1, 1);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xb9;
   opgen_FUNC(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xba;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xba;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC93);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xba;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xba;
   openc_size(param_1, 2);
   openc_p(param_1, "orange");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xba;
   openc_size(param_1, 5);
   openc_size(param_1, 7);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xba;
   opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbc;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbc;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC76);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbc;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbc;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC94);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbc;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbc;
   openc_size(param_1, 4);
   openc_size(param_1, 1);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbc;
   opgen_FUNC(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbd;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbd;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC94);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbd;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbd;
   openc_size(param_1, 2);
   openc_p(param_1, "Strawberry");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbd;
   openc_size(param_1, 5);
   openc_size(param_1, 0xb);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbd;
   opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbf;
   openc_size(param_1, 4);
   lVar1 = 0;
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbf;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC76);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbf;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbf;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC95);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbf;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbf;
   openc_size(param_1, 4);
   openc_size(param_1, 1);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xbf;
   opgen_FUNC(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xc0;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xc0;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC95);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xc0;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xc0;
   openc_size(param_1, 2);
   openc_p(param_1, &_LC91);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xc0;
   for (int i_254 = 0; i_254 < 2; i_254++) {
      openc_size(param_1, 5);
   }
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xc0;
   opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
   while (true) {
      while (true) {
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd7;
         openc_size(param_1, 4);
         openc_size(param_1, 0);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd7;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC76);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd7;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd8;
         openc_size(param_1, 4);
         openc_size(param_1, 1);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd8;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC92);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd8;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd9;
         openc_size(param_1, 4);
         openc_size(param_1, 2);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd9;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC93);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd9;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xda;
         openc_size(param_1, 4);
         openc_size(param_1, 3);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xda;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC94);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xda;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xdb;
         for (int i_255 = 0; i_255 < 2; i_255++) {
            openc_size(param_1, 4);
         }
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xdb;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC95);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xdb;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xdc;
         openc_size(param_1, 4);
         openc_size(param_1, lVar1);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xdd;
         opgen_FUNC(param_1, ssl_poll_check, "ssl_poll_check");
         if (lVar1 != 3) break;
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         lVar1 = 4;
         *(undefined4*)( param_1 + 0x14 ) = 0xe0;
         openc_size(param_1, 4);
         openc_size(param_1, 0);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xe0;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC92);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xe0;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xe0;
         openc_size(param_1, 2);
         openc_p(param_1, "extra");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xe0;
         openc_size(param_1, 5);
         openc_size(param_1, 6);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xe0;
         opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd2;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC98);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd2;
         openc_size(param_1, 4);
         openc_size(param_1, 0);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd2;
         opgen_FUNC(param_1, hf_new_ssl, "hf_new_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd3;
         openc_size(param_1, 4);
         openc_size(param_1, 0);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd3;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC98);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd3;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd3;
         openc_size(param_1, 4);
         openc_size(param_1, 1);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd3;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC68);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd3;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd3;
         opgen_FUNC(param_1, hf_set_peer_addr_from, "hf_set_peer_addr_from");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd4;
         openc_size(param_1, 4);
         openc_size(param_1, 0);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd4;
         openc_size(param_1, 3);
         openc_p(param_1, &_LC98);
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd4;
         opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
         *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
         *(undefined4*)( param_1 + 0x14 ) = 0xd4;
         opgen_FUNC(param_1, hf_connect_wait, "hf_connect_wait");
      };
      if (lVar1 == 4) break;
      lVar1 = lVar1 + 1;
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      switch (lVar1) {
         default:
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      lVar1 = 1;
      openc_size(param_1,4);
      openc_size(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      openc_size(param_1,3);
      openc_p(param_1,&_LC83);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      openc_size(param_1,2);
      openc_p(param_1,"orange");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      openc_size(param_1,5);
      openc_size(param_1,7);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xca;
      opgen_FUNC(param_1,hf_write,"hf_write");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      openc_size(param_1,4);
      openc_size(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      openc_size(param_1,3);
      openc_p(param_1,&_LC90);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      openc_size(param_1,2);
      openc_p(param_1,&_LC91);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      openc_size(param_1,5);
      openc_size(param_1,5);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcb;
      opgen_FUNC(param_1,hf_write,"hf_write");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      openc_size(param_1,4);
      openc_size(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      openc_size(param_1,3);
      openc_p(param_1,&_LC95);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      openc_size(param_1,2);
      openc_p(param_1,&_LC91);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      openc_size(param_1,5);
      openc_size(param_1,5);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xcc;
      opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
      break;
         case 2:
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      openc_size(param_1,4);
      openc_size(param_1,0);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      openc_size(param_1,3);
      openc_p(param_1,&_LC92);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_FUNC(param_1,hf_select_ssl,"hf_select_ssl");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      openc_size(param_1,2);
      openc_p(param_1,"orange");
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      openc_size(param_1,5);
      openc_size(param_1,7);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xce;
      opgen_FUNC(param_1,hf_read_expect,"hf_read_expect");
      break;
         case 3:
      *(undefined4 *)(param_1 + 0x14) = 0xd0;
      openc_size(param_1,2);
      openc_p(param_1,script_info_ssl_poll_child);
      *(char **)(param_1 + 8) = "test/radix/quic_tests.c";
      *(undefined4 *)(param_1 + 0x14) = 0xd0;
      opgen_FUNC(param_1,hf_spawn_thread,"hf_spawn_thread");
      }
   };
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC99);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   opgen_FUNC(param_1, hf_accept_conn, "hf_accept_conn");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC99);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   opgen_FUNC(param_1, hf_set_default_stream_mode, "hf_set_default_stream_mode");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC68);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe3;
   opgen_FUNC(param_1, hf_accept_conn_none, "hf_accept_conn_none");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe4;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe4;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC99);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe4;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe4;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC100);
   for (int i_253 = 0; i_253 < 2; i_253++) {
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 20 ) = 228;
      openc_size(param_1, 4);
      openc_size(param_1, 0);
   }
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe4;
   opgen_FUNC(param_1, hf_new_stream, "hf_new_stream");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe5;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe5;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC100);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe5;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe5;
   openc_size(param_1, 2);
   openc_p(param_1, &_LC101);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe5;
   openc_size(param_1, 5);
   openc_size(param_1, 4);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe5;
   opgen_FUNC(param_1, hf_write, "hf_write");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe6;
   openc_size(param_1, 4);
   openc_size(param_1, 0);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe6;
   openc_size(param_1, 3);
   openc_p(param_1, &_LC98);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe6;
   opgen_FUNC(param_1, hf_select_ssl, "hf_select_ssl");
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe6;
   openc_size(param_1, 2);
   openc_p(param_1, &_LC101);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe6;
   openc_size(param_1, 5);
   openc_size(param_1, 4);
   *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
   *(undefined4*)( param_1 + 0x14 ) = 0xe6;
   opgen_FUNC(param_1, hf_read_expect, "hf_read_expect");
   return;
}undefined8 hf_spawn_thread(long *param_1) {
   long lVar1;
   int iVar2;
   void *ptr;
   BIO_METHOD *type;
   BIO *pBVar3;
   undefined8 uVar4;
   lVar1 = *param_1;
   iVar2 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar1 + 0x70 ) - *(long*)( lVar1 + 0x68 ), 8);
   if (iVar2 != 0) {
      uVar4 = **(undefined8**)( lVar1 + 0x68 );
      *(undefined8**)( lVar1 + 0x68 ) = *(undefined8**)( lVar1 + 0x68 ) + 1;
   } else {
      uVar4 = 0;
   }
   iVar2 = test_true("test/radix/quic_bindings.c", 0x314, "TERP_stk_pop((fctx->terp), &((script_info)), sizeof((script_info)))", iVar2 != 0);
   if (( iVar2 != 0 ) && ( iVar2 = test_ptr("test/radix/quic_bindings.c", 0x315, "script_info", uVar4) ),iVar2 != 0) {
      ptr = (void*)RADIX_THREAD_new_constprop_0();
      iVar2 = test_ptr("test/radix/quic_bindings.c", 0x31c, "child_rt = RADIX_THREAD_new(&radix_process)", ptr);
      if (iVar2 != 0) {
         type = BIO_s_mem();
         pBVar3 = BIO_new(type);
         *(BIO**)( (long)ptr + 0xb0 ) = pBVar3;
         iVar2 = test_ptr("test/radix/quic_bindings.c", 799, "child_rt->debug_bio = BIO_new(BIO_s_mem())", pBVar3);
         if (iVar2 != 0) {
            ossl_crypto_mutex_lock(*(undefined8*)( (long)ptr + 0xb8 ));
            *(undefined8*)( (long)ptr + 0xa8 ) = uVar4;
            uVar4 = ossl_crypto_thread_native_start(RADIX_THREAD_worker_main, ptr, 1);
            *(undefined8*)( (long)ptr + 8 ) = uVar4;
            iVar2 = test_ptr("test/radix/quic_bindings.c", 0x325, "child_rt->t = ossl_crypto_thread_native_start(RADIX_THREAD_worker_main, child_rt, 1)", uVar4);
            if (iVar2 != 0) {
               ossl_crypto_mutex_unlock(*(undefined8*)( (long)ptr + 0xb8 ));
               return 1;
            }
            ossl_crypto_mutex_unlock(*(undefined8*)( (long)ptr + 0xb8 ));
         }
         BIO_free_all(*(BIO**)( (long)ptr + 0xb0 ));
         CRYPTO_free(*(void**)( (long)ptr + 0x10 ));
         ossl_crypto_mutex_free((long)ptr + 0xb8);
         CRYPTO_free(ptr);
      }
   }
   return 0;
}undefined8 hf_select_ssl(long *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined8 local_58[3];
   long local_40;
   lVar2 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar2 + 0x70 ) - *(long*)( lVar2 + 0x68 ), 8);
   if (iVar1 != 0) {
      uVar4 = **(undefined8**)( lVar2 + 0x68 );
      *(undefined8**)( lVar2 + 0x68 ) = *(undefined8**)( lVar2 + 0x68 ) + 1;
   } else {
      uVar4 = 0;
   }
   iVar1 = test_true("test/radix/quic_ops.c", 900, "TERP_stk_pop(((fctx->terp)), &(((name))), sizeof(((name))))", iVar1 != 0);
   if (iVar1 != 0) {
      lVar2 = *param_1;
      lVar5 = 0;
      iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar2 + 0x70 ) - *(long*)( lVar2 + 0x68 ), 8);
      if (iVar1 != 0) {
         iVar1 = 1;
         lVar5 = **(long**)( lVar2 + 0x68 );
         *(long**)( lVar2 + 0x68 ) = *(long**)( lVar2 + 0x68 ) + 1;
      }
      iVar1 = test_true("test/radix/quic_ops.c", 900, "TERP_stk_pop(((fctx->terp)), &(((slot))), sizeof(((slot))))", iVar1);
      if (iVar1 != 0) {
         local_58[0] = uVar4;
         lVar2 = OPENSSL_LH_retrieve(DAT_00108e68, local_58);
         iVar1 = test_ptr("test/radix/quic_ops.c", 0x385, "obj = RADIX_PROCESS_get_obj(RP(), name)", lVar2);
         if (iVar1 != 0) {
            iVar1 = test_uint64_t_lt("test/radix/quic_ops.c", 0x388, &_LC111, "NUM_SLOTS", lVar5, 8);
            if (iVar1 != 0) {
               lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
               *(long*)( lVar3 + 0x28 + lVar5 * 8 ) = lVar2;
               lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
               *(undefined8*)( lVar3 + 0x68 + lVar5 * 8 ) = *(undefined8*)( lVar2 + 8 );
               uVar4 = 1;
               goto LAB_0010448c;
            }
         }
      }
   }
   uVar4 = 0;
   LAB_0010448c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 hf_accept_conn_none(void) {
   int iVar1;
   SSL *ssl;
   undefined8 uVar2;
   long lVar3;
   bool bVar4;
   iVar1 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
   if (iVar1 == 0) {
      bVar4 = false;
      uVar2 = 0;
   } else {
      lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
      uVar2 = *(undefined8*)( lVar3 + 0x68 );
      iVar1 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar2);
      bVar4 = iVar1 != 0;
   }
   iVar1 = test_true("test/radix/quic_ops.c", 0x17a, "expect_slot_ssl(fctx, (0), &((listener)))", bVar4);
   if (iVar1 == 0) {
      uVar2 = 0;
   } else {
      ssl = (SSL*)SSL_accept_connection(uVar2, 1);
      iVar1 = test_ptr_null("test/radix/quic_ops.c", 0x17d, &_LC115, ssl);
      uVar2 = 1;
      if (iVar1 == 0) {
         SSL_free(ssl);
         uVar2 = 0;
      }
   }
   return uVar2;
}undefined8 hf_listen(void) {
   byte *pbVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   bool bVar5;
   iVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
   if (iVar2 == 0) {
      bVar5 = false;
      uVar4 = 0;
   } else {
      lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
      uVar4 = *(undefined8*)( lVar3 + 0x68 );
      iVar2 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar4);
      bVar5 = iVar2 != 0;
   }
   iVar2 = test_true("test/radix/quic_ops.c", 0x114, "expect_slot_ssl(fctx, (0), &((ssl)))", bVar5);
   if (iVar2 != 0) {
      iVar2 = SSL_listen(uVar4);
      iVar2 = test_true("test/radix/quic_ops.c", 0x117, &_LC117, iVar2 != 0);
      if (iVar2 != 0) {
         lVar3 = SSL_get0_domain(uVar4);
         if (lVar3 == 0) {
            lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
            if (*(long*)( lVar3 + 0x28 ) != 0) {
               pbVar1 = (byte*)( *(long*)( lVar3 + 0x28 ) + 0x10 );
               *pbVar1 = *pbVar1 | 2;
            }
         }
         return 1;
      }
   }
   return 0;
}undefined8 hf_new_stream(long *param_1) {
   int iVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
   SSL *ssl;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_58[3];
   long local_40;
   lVar3 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar3 + 0x70 ) - *(long*)( lVar3 + 0x68 ), 8);
   if (iVar1 != 0) {
      lVar7 = **(long**)( lVar3 + 0x68 );
      *(long**)( lVar3 + 0x68 ) = *(long**)( lVar3 + 0x68 ) + 1;
   } else {
      lVar7 = 0;
   }
   iVar1 = test_true("test/radix/quic_ops.c", 0x129, "TERP_stk_pop(((fctx->terp)), &(((do_accept))), sizeof(((do_accept))))", iVar1 != 0);
   if (iVar1 != 0) {
      lVar3 = *param_1;
      iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar3 + 0x70 ) - *(long*)( lVar3 + 0x68 ), 8);
      local_68 = 0;
      if (iVar1 != 0) {
         iVar1 = 1;
         local_68 = **(undefined8**)( lVar3 + 0x68 );
         *(undefined8**)( lVar3 + 0x68 ) = *(undefined8**)( lVar3 + 0x68 ) + 1;
      }
      iVar1 = test_true("test/radix/quic_ops.c", 0x129, "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))", iVar1);
      if (iVar1 != 0) {
         lVar3 = *param_1;
         uVar5 = 0;
         iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar3 + 0x70 ) - *(long*)( lVar3 + 0x68 ), 8);
         if (iVar1 != 0) {
            iVar1 = 1;
            uVar5 = **(undefined8**)( lVar3 + 0x68 );
            *(undefined8**)( lVar3 + 0x68 ) = *(undefined8**)( lVar3 + 0x68 ) + 1;
         }
         iVar1 = test_true("test/radix/quic_ops.c", 0x12a, "TERP_stk_pop((fctx->terp), &((stream_name)), sizeof((stream_name)))", iVar1);
         if (iVar1 != 0) {
            uVar6 = 0;
            uVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
            if (uVar2 != 0) {
               lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
               uVar6 = *(undefined8*)( lVar3 + 0x68 );
               iVar1 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar6);
               uVar2 = ( uint )(iVar1 != 0);
            }
            iVar1 = test_true("test/radix/quic_ops.c", 299, "expect_slot_ssl(fctx, (0), &((conn)))", uVar2);
            if (iVar1 != 0) {
               local_58[0] = uVar5;
               uVar4 = OPENSSL_LH_retrieve(DAT_00108e68, local_58);
               iVar1 = test_ptr_null("test/radix/quic_ops.c", 0x12d, "RADIX_PROCESS_get_obj(RP(), stream_name)", uVar4);
               if (iVar1 != 0) {
                  if (lVar7 == 0) {
                     ssl = (SSL*)SSL_new_stream(uVar6, local_68);
                     iVar1 = test_ptr("test/radix/quic_ops.c", 0x139, "stream", ssl);
                     if (iVar1 != 0) {
                        if (ssl != (SSL*)0x0) goto LAB_00104a2d;
                        LAB_00104a5b:uVar5 = 1;
                        goto LAB_00104850;
                     }
                  } else {
                     ssl = (SSL*)SSL_accept_stream();
                     if (ssl == (SSL*)0x0) {
                        *(undefined4*)( param_1 + 1 ) = 1;
                        uVar5 = 2;
                        goto LAB_00104850;
                     }
                     iVar1 = test_ptr("test/radix/quic_ops.c", 0x139, "stream", ssl);
                     if (iVar1 != 0) {
                        LAB_00104a2d:iVar1 = RADIX_PROCESS_set_ssl_constprop_0(uVar5, ssl);
                        iVar1 = test_true("test/radix/quic_ops.c", 0x13f, "RADIX_PROCESS_set_ssl(RP(), stream_name, stream)", iVar1 != 0);
                        if (iVar1 != 0) goto LAB_00104a5b;
                        SSL_free(ssl);
                     }
                  }
               }
            }
         }
      }
   }
   uVar5 = 0;
   LAB_00104850:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}undefined8 hf_new_ssl(long *param_1) {
   long lVar1;
   int iVar2;
   SSL_METHOD *meth;
   SSL_CTX *ctx;
   SSL *ssl;
   undefined8 uVar3;
   undefined8 uVar4;
   uint uVar5;
   uint uVar6;
   lVar1 = *param_1;
   iVar2 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar1 + 0x70 ) - *(long*)( lVar1 + 0x68 ), 8);
   if (iVar2 != 0) {
      uVar6 = ( uint ) * *(undefined8**)( lVar1 + 0x68 );
      *(undefined8**)( lVar1 + 0x68 ) = *(undefined8**)( lVar1 + 0x68 ) + 1;
   } else {
      uVar6 = 0;
   }
   iVar2 = test_true("test/radix/quic_ops.c", 0xbf, "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))", iVar2 != 0);
   if (iVar2 != 0) {
      lVar1 = *param_1;
      uVar4 = 0;
      iVar2 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar1 + 0x70 ) - *(long*)( lVar1 + 0x68 ), 8);
      if (iVar2 != 0) {
         iVar2 = 1;
         uVar4 = **(undefined8**)( lVar1 + 0x68 );
         *(undefined8**)( lVar1 + 0x68 ) = *(undefined8**)( lVar1 + 0x68 ) + 1;
      }
      iVar2 = test_true("test/radix/quic_ops.c", 0xbf, "TERP_stk_pop(((fctx->terp)), &(((name))), sizeof(((name))))", iVar2);
      if (iVar2 != 0) {
         uVar5 = uVar6 & 1;
         if (uVar5 == 0) {
            meth = (SSL_METHOD*)OSSL_QUIC_client_method();
         } else {
            meth = (SSL_METHOD*)OSSL_QUIC_server_method();
         }
         ctx = SSL_CTX_new(meth);
         iVar2 = test_ptr("test/radix/quic_ops.c", 0xc5, "ctx = SSL_CTX_new(method)", ctx);
         if (iVar2 != 0) {
            iVar2 = SSL_CTX_set_domain_flags(ctx, 10);
            iVar2 = test_true("test/radix/quic_ops.c", 0xc9, "SSL_CTX_set_domain_flags(ctx, SSL_DOMAIN_FLAG_MULTI_THREAD | SSL_DOMAIN_FLAG_BLOCKING)", iVar2 != 0);
            if (iVar2 != 0) {
               iVar2 = ossl_quic_set_diag_title(ctx, "quic_radix_test");
               iVar2 = test_true("test/radix/quic_ops.c", 0x34, "ossl_quic_set_diag_title(ctx, \"quic_radix_test\")", iVar2 != 0);
               if (iVar2 == 0) {
                  LAB_00104d80:uVar3 = 0;
               } else {
                  if (uVar5 != 0) {
                     if (DAT_00108e78 != 0) {
                        SSL_CTX_set_keylog_callback(ctx, keylog_cb);
                     }
                     iVar2 = SSL_CTX_use_certificate_file(ctx, cert_file, 1);
                     iVar2 = test_int_eq("test/radix/quic_ops.c", 0x3d, "SSL_CTX_use_certificate_file(ctx, cert_file, SSL_FILETYPE_PEM)", &_LC129, iVar2, 1);
                     if (iVar2 != 0) {
                        iVar2 = SSL_CTX_use_PrivateKey_file(ctx, key_file, 1);
                        iVar2 = test_int_eq("test/radix/quic_ops.c", 0x3f, "SSL_CTX_use_PrivateKey_file(ctx, key_file, SSL_FILETYPE_PEM)", &_LC129, iVar2, 1);
                        if (iVar2 != 0) {
                           SSL_CTX_set_alpn_select_cb(ctx, ssl_ctx_select_alpn, 0);
                           goto LAB_00104d78;
                        }
                     }
                     goto LAB_00104d80;
                  }
                  LAB_00104d78:uVar3 = 1;
               }
               iVar2 = test_true("test/radix/quic_ops.c", 0xcf, "ssl_ctx_configure(ctx, is_server)", uVar3);
               if (iVar2 != 0) {
                  if (( uVar6 & 2 ) == 0) {
                     if (uVar5 == 0) {
                        ssl = SSL_new(ctx);
                        iVar2 = test_ptr("test/radix/quic_ops.c", 0xdd, "ssl = SSL_new(ctx)", ssl);
                        if (iVar2 == 0) {
                           uVar3 = 0;
                           goto LAB_00104b8a;
                        }
                     } else {
                        SSL_CTX_set_new_pending_conn_cb(ctx, new_pending_cb, 0);
                        SSL_CTX_set_client_hello_cb(ctx, client_hello_cb, 0);
                        check_pending_match = 1;
                        ssl = (SSL*)SSL_new_listener(ctx, 0);
                        iVar2 = test_ptr("test/radix/quic_ops.c", 0xda, "ssl = SSL_new_listener(ctx, 0)", ssl);
                        if (iVar2 == 0) goto LAB_00104c50;
                     }
                     iVar2 = ssl_attach_bio_dgram_constprop_0(ssl);
                     iVar2 = test_true("test/radix/quic_ops.c", 0xe1, "ssl_attach_bio_dgram(ssl, 0, NULL)", iVar2 != 0);
                     if (iVar2 == 0) goto LAB_00104c50;
                  } else {
                     ssl = (SSL*)SSL_new_domain(ctx, 0);
                     iVar2 = test_ptr("test/radix/quic_ops.c", 0xd3, "ssl = SSL_new_domain(ctx, 0)", ssl);
                     if (iVar2 == 0) {
                        uVar3 = 0;
                        goto LAB_00104b8a;
                     }
                  }
                  uVar3 = 1;
                  iVar2 = RADIX_PROCESS_set_ssl_constprop_0(uVar4, ssl);
                  iVar2 = test_true("test/radix/quic_ops.c", 0xe4, "RADIX_PROCESS_set_ssl(RP(), name, ssl)", iVar2 != 0);
                  if (iVar2 == 0) {
                     uVar3 = 0;
                     SSL_free(ssl);
                  }
                  goto LAB_00104b8a;
               }
            }
         }
         LAB_00104c50:uVar3 = 0;
         goto LAB_00104b8a;
      }
   }
   ctx = (SSL_CTX*)0x0;
   uVar3 = 0;
   LAB_00104b8a:SSL_CTX_free(ctx);
   return uVar3;
}uint hf_connect_wait(long param_1) {
   byte *pbVar1;
   int iVar2;
   uint ret_code;
   long lVar3;
   SSL *ssl;
   bool bVar4;
   iVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
   if (iVar2 == 0) {
      bVar4 = false;
      ssl = (SSL*)0x0;
   } else {
      lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
      ssl = *(SSL**)( lVar3 + 0x68 );
      iVar2 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", ssl);
      bVar4 = iVar2 != 0;
   }
   iVar2 = test_true("test/radix/quic_ops.c", 0x2a9, "expect_slot_ssl(fctx, (0), &((ssl)))", bVar4);
   if (iVar2 != 0) {
      lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
      if (*(long*)( lVar3 + 200 ) == 0) {
         iVar2 = SSL_set_blocking_mode(ssl, 0);
         iVar2 = test_true("test/radix/quic_ops.c", 0x2ad, "SSL_set_blocking_mode(ssl, 0)", iVar2 != 0);
         if (iVar2 == 0) {
            return 0;
         }
         iVar2 = SSL_set_alpn_protos(ssl, alpn_ossltest, 9);
         iVar2 = test_false("test/radix/quic_ops.c", 0x2b1, "SSL_set_alpn_protos(ssl, alpn_ossltest, sizeof(alpn_ossltest))", iVar2 != 0);
         if (iVar2 == 0) goto LAB_00104f5d;
      }
      lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
      *(undefined8*)( lVar3 + 200 ) = 1;
      ret_code = SSL_connect(ssl);
      lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
      if (*(long*)( lVar3 + 0x28 ) != 0) {
         pbVar1 = (byte*)( *(long*)( lVar3 + 0x28 ) + 0x10 );
         *pbVar1 = *pbVar1 | 2;
      }
      iVar2 = check_consistent_want(ssl, ret_code);
      iVar2 = test_true("test/radix/quic_ops.c", 0x2b9, "check_consistent_want(ssl, ret)", iVar2 != 0);
      if (iVar2 != 0) {
         if (ret_code != 1) {
            iVar2 = SSL_get_error(ssl, ret_code);
            if (iVar2 - 2U < 2) {
               *(undefined4*)( param_1 + 8 ) = 1;
               ret_code = 2;
            } else {
               iVar2 = test_int_eq("test/radix/quic_ops.c", 0x2c0, &_LC141, &_LC129, ret_code, 1);
               ret_code = ( uint )(iVar2 != 0);
            }
         }
         goto LAB_00104f5f;
      }
   }
   LAB_00104f5d:ret_code = 0;
   LAB_00104f5f:lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
   *(undefined8*)( lVar3 + 200 ) = 0;
   return ret_code;
}void script_gen_simple_thread(long param_1) {
   void *addr;
   int iVar1;
   long lVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   lVar6 = 2;
   do {
      puVar4 = *(undefined8**)( param_1 + 0x38 );
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x39;
      if (( ulong )(*(long*)( param_1 + 0x40 ) - (long)puVar4) < 8) {
         addr = *(void**)( param_1 + 0x30 );
         lVar2 = *(long*)( param_1 + 0x40 ) - (long)addr;
         lVar5 = 0x400;
         if (lVar2 != 0) {
            lVar5 = lVar2 * 2;
         }
         pvVar3 = CRYPTO_realloc(addr, (int)lVar5, "test/radix/terp.c", 0x106);
         iVar1 = test_ptr("test/radix/terp.c", 0x107, &_LC4, pvVar3);
         if (iVar1 != 0) {
            *(void**)( param_1 + 0x30 ) = pvVar3;
            puVar4 = (undefined8*)( ( (long)puVar4 - (long)addr ) + (long)pvVar3 );
            *(long*)( param_1 + 0x40 ) = (long)pvVar3 + lVar5;
            goto LAB_001051aa;
         }
      } else {
         LAB_001051aa:*(undefined8**)( param_1 + 0x38 ) = puVar4 + 1;
         if (puVar4 != (undefined8*)0x0) {
            *puVar4 = 2;
         }
      }
      openc_p(param_1, script_info_simple_thread_child);
      *(char**)( param_1 + 8 ) = "test/radix/quic_tests.c";
      *(undefined4*)( param_1 + 0x14 ) = 0x39;
      opgen_FUNC_constprop_0(param_1, hf_spawn_thread, "hf_spawn_thread");
      if (lVar6 == 1) {
         return;
      }
      lVar6 = 1;
   } while ( true );
}undefined8 hf_new_ssl_listener_from(long *param_1) {
   byte *pbVar1;
   int iVar2;
   undefined8 uVar3;
   SSL *ssl;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   undefined8 local_60;
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
   if (iVar2 == 0) {
      bVar7 = false;
      uVar5 = 0;
   } else {
      lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
      uVar5 = *(undefined8*)( lVar4 + 0x68 );
      iVar2 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar5);
      bVar7 = iVar2 != 0;
   }
   iVar2 = test_true("test/radix/quic_ops.c", 0xf7, "expect_slot_ssl(fctx, (0), &((domain)))", bVar7);
   if (iVar2 != 0) {
      lVar4 = *param_1;
      iVar2 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar4 + 0x70 ) - *(long*)( lVar4 + 0x68 ), 8);
      local_60 = 0;
      if (iVar2 != 0) {
         iVar2 = 1;
         local_60 = **(undefined8**)( lVar4 + 0x68 );
         *(undefined8**)( lVar4 + 0x68 ) = *(undefined8**)( lVar4 + 0x68 ) + 1;
      }
      iVar2 = test_true("test/radix/quic_ops.c", 0xf8, "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))", iVar2);
      if (iVar2 != 0) {
         lVar4 = *param_1;
         uVar6 = 0;
         iVar2 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar4 + 0x70 ) - *(long*)( lVar4 + 0x68 ), 8);
         if (iVar2 != 0) {
            iVar2 = 1;
            uVar6 = **(undefined8**)( lVar4 + 0x68 );
            *(undefined8**)( lVar4 + 0x68 ) = *(undefined8**)( lVar4 + 0x68 ) + 1;
         }
         iVar2 = test_true("test/radix/quic_ops.c", 0xf8, "TERP_stk_pop(((fctx->terp)), &(((listener_name))), sizeof(((listener_name))))", iVar2);
         if (iVar2 != 0) {
            local_58[0] = uVar6;
            uVar3 = OPENSSL_LH_retrieve(DAT_00108e68, local_58);
            iVar2 = test_ptr_null("test/radix/quic_ops.c", 0xfa, "RADIX_PROCESS_get_obj(RP(), listener_name)", uVar3);
            if (iVar2 != 0) {
               ssl = (SSL*)SSL_new_listener_from(uVar5, local_60);
               iVar2 = test_ptr("test/radix/quic_ops.c", 0xfd, "listener = SSL_new_listener_from(domain, flags)", ssl);
               if (iVar2 != 0) {
                  iVar2 = ssl_attach_bio_dgram_constprop_0(ssl);
                  iVar2 = test_true("test/radix/quic_ops.c", 0x100, "ssl_attach_bio_dgram(listener, 0, NULL)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = RADIX_PROCESS_set_ssl_constprop_0(uVar6, ssl);
                     iVar2 = test_true("test/radix/quic_ops.c", 0x103, "RADIX_PROCESS_set_ssl(RP(), listener_name, listener)", iVar2 != 0);
                     if (iVar2 != 0) {
                        lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                        if (*(long*)( lVar4 + 0x28 ) != 0) {
                           pbVar1 = (byte*)( *(long*)( lVar4 + 0x28 ) + 0x10 );
                           *pbVar1 = *pbVar1 | 2;
                        }
                        uVar5 = 1;
                        goto LAB_0010528e;
                     }
                     SSL_free(ssl);
                  }
               }
            }
         }
      }
   }
   uVar5 = 0;
   LAB_0010528e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool hf_set_default_stream_mode(long *param_1) {
   int iVar1;
   uint uVar2;
   long lVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   lVar3 = *param_1;
   iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar3 + 0x70 ) - *(long*)( lVar3 + 0x68 ), 8);
   if (iVar1 != 0) {
      uVar4 = ( undefined4 ) * *(undefined8**)( lVar3 + 0x68 );
      *(undefined8**)( lVar3 + 0x68 ) = *(undefined8**)( lVar3 + 0x68 ) + 1;
   } else {
      uVar4 = 0;
   }
   iVar1 = test_true("test/radix/quic_ops.c", 0x1bd, "TERP_stk_pop((fctx->terp), &((mode)), sizeof((mode)))", iVar1 != 0);
   if (iVar1 != 0) {
      uVar5 = 0;
      uVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
      if (uVar2 != 0) {
         lVar3 = CRYPTO_THREAD_get_local(&radix_thread);
         uVar5 = *(undefined8*)( lVar3 + 0x68 );
         iVar1 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar5);
         uVar2 = ( uint )(iVar1 != 0);
      }
      iVar1 = test_true("test/radix/quic_ops.c", 0x1be, "expect_slot_ssl(fctx, (0), &((ssl)))", uVar2);
      if (iVar1 != 0) {
         iVar1 = SSL_set_default_stream_mode(uVar5, uVar4);
         iVar1 = test_true("test/radix/quic_ops.c", 0x1c0, "SSL_set_default_stream_mode(ssl, (uint32_t)mode)", iVar1 != 0);
         return iVar1 != 0;
      }
   }
   return false;
}bool hf_set_peer_addr_from(void) {
   ushort uVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   BIO *bp;
   BIO *bp_00;
   void *parg;
   SSL *s;
   SSL *s_00;
   long in_FS_OFFSET;
   bool bVar5;
   undefined4 local_3c;
   void *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3c = 0xffffffff;
   iVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
   if (iVar2 == 0) {
      bVar5 = false;
      s_00 = (SSL*)0x0;
   } else {
      lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
      s_00 = *(SSL**)( lVar4 + 0x68 );
      iVar2 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", s_00);
      bVar5 = iVar2 != 0;
   }
   iVar2 = test_true("test/radix/quic_ops.c", 0x3b8, "expect_slot_ssl(fctx, (0), &(dst_ssl))", bVar5);
   if (iVar2 != 0) {
      s = (SSL*)0x0;
      uVar3 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 1, 8);
      if (uVar3 != 0) {
         lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
         s = *(SSL**)( lVar4 + 0x70 );
         iVar2 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", s);
         uVar3 = ( uint )(iVar2 != 0);
      }
      iVar2 = test_true("test/radix/quic_ops.c", 0x3b9, "expect_slot_ssl(fctx, (1), &(src_ssl))", uVar3);
      if (iVar2 != 0) {
         bp = SSL_get_rbio(s_00);
         bp_00 = SSL_get_rbio(s);
         iVar2 = test_ptr("test/radix/quic_ops.c", 0x3bc, "dst_bio", bp);
         if (iVar2 != 0) {
            iVar2 = test_ptr("test/radix/quic_ops.c", 0x3bc, "src_bio", bp_00);
            if (iVar2 != 0) {
               parg = (void*)BIO_ADDR_new();
               iVar2 = test_ptr("test/radix/quic_ops.c", 0x3bf, "src_addr = BIO_ADDR_new()", parg);
               if (iVar2 != 0) {
                  lVar4 = BIO_ctrl(bp_00, 0x69, 0, &local_3c);
                  iVar2 = test_true("test/radix/quic_ops.c", 0x3c2, "BIO_get_fd(src_bio, &src_fd)", lVar4 != 0);
                  if (iVar2 != 0) {
                     iVar2 = test_int_ge("test/radix/quic_ops.c", 0x3c3, "src_fd", &_LC10, local_3c, 0);
                     if (iVar2 != 0) {
                        local_38 = parg;
                        iVar2 = BIO_sock_info(local_3c, 0, &local_38);
                        iVar2 = test_true("test/radix/quic_ops.c", 0x3c7, "BIO_sock_info(src_fd, BIO_SOCK_INFO_ADDRESS, &src_info)", iVar2 != 0);
                        if (iVar2 != 0) {
                           uVar1 = BIO_ADDR_rawport(parg);
                           iVar2 = test_int_ge("test/radix/quic_ops.c", 0x3c8, "ntohs(BIO_ADDR_rawport(src_addr))", &_LC10, uVar1 << 8 | uVar1 >> 8, 0);
                           if (iVar2 != 0) {
                              lVar4 = BIO_ctrl(bp, 0x2c, 0, parg);
                              iVar2 = test_true("test/radix/quic_ops.c", 0x3cf, "BIO_dgram_set_peer(dst_bio, src_addr)", (int)lVar4 != 0);
                              bVar5 = iVar2 != 0;
                              goto LAB_001056b5;
                           }
                        }
                     }
                  }
               }
               bVar5 = false;
               goto LAB_001056b5;
            }
         }
      }
   }
   parg = (void*)0x0;
   bVar5 = false;
   LAB_001056b5:BIO_ADDR_free(parg);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool hf_write(long *param_1) {
   int iVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   undefined8 local_48;
   long local_40;
   lVar4 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar4 + 0x70 ) - *(long*)( lVar4 + 0x68 ), 8);
   if (iVar1 != 0) {
      uVar7 = **(undefined8**)( lVar4 + 0x68 );
      *(undefined8**)( lVar4 + 0x68 ) = *(undefined8**)( lVar4 + 0x68 ) + 1;
   } else {
      uVar7 = 0;
   }
   iVar1 = test_true("test/radix/quic_ops.c", 0x22a, "TERP_stk_pop(((fctx->terp)), &(((buf_len))), sizeof(((buf_len))))", iVar1 != 0);
   if (iVar1 != 0) {
      lVar4 = *param_1;
      uVar6 = 0;
      iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar4 + 0x70 ) - *(long*)( lVar4 + 0x68 ), 8);
      if (iVar1 != 0) {
         iVar1 = 1;
         uVar6 = **(undefined8**)( lVar4 + 0x68 );
         *(undefined8**)( lVar4 + 0x68 ) = *(undefined8**)( lVar4 + 0x68 ) + 1;
      }
      iVar1 = test_true("test/radix/quic_ops.c", 0x22a, "TERP_stk_pop(((fctx->terp)), &(((buf))), sizeof(((buf))))", iVar1);
      if (iVar1 != 0) {
         uVar5 = 0;
         uVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
         if (uVar2 != 0) {
            lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
            uVar5 = *(undefined8*)( lVar4 + 0x68 );
            iVar1 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar5);
            uVar2 = ( uint )(iVar1 != 0);
         }
         iVar1 = test_true("test/radix/quic_ops.c", 0x22b, "expect_slot_ssl(fctx, (0), &((ssl)))", uVar2);
         if (iVar1 != 0) {
            iVar1 = SSL_write_ex(uVar5, uVar6, uVar7, &local_48);
            iVar3 = test_true("test/radix/quic_ops.c", 0x22e, &_LC117, iVar1 != 0);
            if (iVar3 != 0) {
               iVar1 = check_consistent_want(uVar5, iVar1);
               if (iVar1 != 0) {
                  iVar1 = test_size_t_eq("test/radix/quic_ops.c", 0x230, "bytes_written", "buf_len", local_48, uVar7);
                  bVar8 = iVar1 != 0;
                  goto LAB_001059a4;
               }
            }
         }
      }
   }
   bVar8 = false;
   LAB_001059a4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar8;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ssl_poll_check(long *param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   long *plVar8;
   undefined1 *puVar9;
   undefined8 uVar10;
   long in_FS_OFFSET;
   undefined8 local_220;
   undefined8 local_210;
   undefined1 local_208[16];
   undefined1 local_1f8[16];
   undefined8 local_1e8;
   undefined8 local_1e0;
   undefined8 local_1d8;
   undefined8 local_1d0;
   undefined4 local_1c8[2];
   undefined8 local_1c0;
   undefined1 local_1b8[16];
   undefined4 local_1a8;
   undefined8 local_1a0;
   ulong local_198;
   undefined8 uStack_190;
   undefined4 local_188;
   undefined8 local_180;
   ulong local_178;
   undefined8 uStack_170;
   undefined4 local_168;
   undefined8 local_160;
   ulong local_158;
   undefined8 uStack_150;
   undefined4 local_148;
   undefined8 local_140;
   ulong local_138;
   undefined8 uStack_130;
   undefined4 local_128;
   undefined8 local_120;
   undefined8 local_118;
   long local_108[27];
   lVar5 = *param_1;
   local_108[0x19] = *(long*)( in_FS_OFFSET + 0x28 );
   local_210 = 0;
   lVar1 = *(long*)( lVar5 + 0x70 );
   lVar2 = *(long*)( lVar5 + 0x68 );
   local_208 = (undefined1[16])0x0;
   local_1f8 = (undefined1[16])0x0;
   puVar7 = (undefined8*)local_1c8;
   for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }
   plVar8 = local_108;
   for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
      *plVar8 = 0;
      plVar8 = plVar8 + 1;
   }
   iVar3 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", lVar1 - lVar2, 8);
   if (iVar3 != 0) {
      uVar10 = **(undefined8**)( lVar5 + 0x68 );
      *(undefined8**)( lVar5 + 0x68 ) = *(undefined8**)( lVar5 + 0x68 ) + 1;
   } else {
      uVar10 = 0;
   }
   iVar3 = test_true("test/radix/quic_tests.c", 0x53, "TERP_stk_pop((fctx->terp), &((mode)), sizeof((mode)))", iVar3 != 0);
   if (iVar3 != 0) {
      uVar4 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
      local_220 = 0;
      if (uVar4 != 0) {
         lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
         local_220 = *(undefined8*)( lVar5 + 0x68 );
         iVar3 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", local_220);
         uVar4 = ( uint )(iVar3 != 0);
      }
      iVar3 = test_true("test/radix/quic_tests.c", 0x54, "expect_slot_ssl(fctx, (0), &((La)))", uVar4);
      if (iVar3 != 0) {
         local_1e8 = 0;
         uVar4 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 1, 8);
         if (uVar4 != 0) {
            lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
            local_1e8 = *(undefined8*)( lVar5 + 0x70 );
            iVar3 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]");
            uVar4 = ( uint )(iVar3 != 0);
         }
         iVar3 = test_true("test/radix/quic_tests.c", 0x54, "expect_slot_ssl(fctx, (1), &((Lax[0])))", uVar4);
         if (iVar3 != 0) {
            local_1e0 = 0;
            uVar4 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 2, 8);
            if (uVar4 != 0) {
               lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
               local_1e0 = *(undefined8*)( lVar5 + 0x78 );
               iVar3 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]");
               uVar4 = ( uint )(iVar3 != 0);
            }
            iVar3 = test_true("test/radix/quic_tests.c", 0x54, "expect_slot_ssl(fctx, (2), &((Lax[1])))", uVar4);
            if (iVar3 != 0) {
               local_1d8 = 0;
               uVar4 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 3, 8);
               if (uVar4 != 0) {
                  lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
                  local_1d8 = *(undefined8*)( lVar5 + 0x80 );
                  iVar3 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]");
                  uVar4 = ( uint )(iVar3 != 0);
               }
               iVar3 = test_true("test/radix/quic_tests.c", 0x54, "expect_slot_ssl(fctx, (3), &((Lax[2])))", uVar4);
               if (iVar3 != 0) {
                  local_1d0 = 0;
                  uVar4 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 4, 8);
                  if (uVar4 != 0) {
                     lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
                     local_1d0 = *(undefined8*)( lVar5 + 0x88 );
                     iVar3 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]");
                     uVar4 = ( uint )(iVar3 != 0);
                  }
                  iVar3 = test_true("test/radix/quic_tests.c", 0x54, "expect_slot_ssl(fctx, (4), &((Lax[3])))", uVar4);
                  if (iVar3 != 0) {
                     local_1c8[0] = 2;
                     local_1b8 = (undefined1[16])0x0;
                     local_1a0 = local_1e8;
                     local_1c0 = local_220;
                     local_180 = local_1e0;
                     local_1a8 = 2;
                     local_160 = local_1d8;
                     local_188 = 2;
                     local_168 = 2;
                     local_148 = 2;
                     local_140 = local_1d0;
                     local_198 = __LC168;
                     uStack_190 = _UNK_0010b5b8;
                     local_178 = __LC168;
                     uStack_170 = _UNK_0010b5b8;
                     local_158 = __LC168;
                     uStack_150 = _UNK_0010b5b8;
                     local_138 = __LC168;
                     uStack_130 = _UNK_0010b5b8;
                     local_120 = SSL_get0_listener();
                     local_128 = 2;
                     switch (uVar10) {
                        case 0:
                        case 2:
                uVar10 = 0;
                puVar9 = local_208;
                break;
                        case 1:
                local_198 = local_198 | 0x80;
                uVar10 = 5;
                puVar9 = local_208;
                local_178 = local_178 | 0x80;
                local_158 = local_158 | 0x80;
                local_138 = local_138 | 0x80;
                local_1b8._0_8_ = 0x1800;
                local_108[3] = 0x1800;
                local_108[7] = 0xc0;
                local_108[0xb] = 0x80;
                local_108[0xf] = 0x80;
                local_108[0x13] = 0x80;
                break;
                        case 3:
                uVar10 = 1;
                puVar9 = local_1f8;
                local_108[7] = 0x40;
                local_1f8._8_8_ = _UNK_0010b5c8;
                local_1f8._0_8_ = __LC169;
                break;
                        case 4:
                uVar10 = 1;
                puVar9 = local_208;
                local_118 = 0x100;
                local_108[0x17] = 0x100;
                break;
                        default:
                goto switchD_00105f42_default;
                     }
                     local_210 = 0xffffffffffffffff;
                     ossl_time_now();
                     iVar3 = SSL_poll(local_1c8, 6, 0x20, puVar9, 0, &local_210);
                     iVar3 = test_true("test/radix/quic_tests.c", 0x88, "SSL_poll(items, OSSL_NELEM(items), sizeof(SSL_POLL_ITEM), p_timeout, 0, &result_count)", iVar3 != 0);
                     if (iVar3 != 0) {
                        ossl_time_now();
                        iVar3 = test_size_t_eq("test/radix/quic_tests.c", 0x8d, "result_count", "expected_result_count", local_210, uVar10);
                        if (iVar3 != 0) {
                           lVar5 = 0x18;
                           do {
                              iVar3 = test_uint64_t_eq("test/radix/quic_tests.c", 0x91, "items[i].revents", "expected_items[i].revents", *(undefined8*)( (long)local_1c8 + lVar5 ), *(undefined8*)( (long)local_108 + lVar5 ));
                              if (iVar3 == 0) goto switchD_00105f42_default;
                              lVar5 = lVar5 + 0x20;
                           } while ( lVar5 != 0xd8 );
                           uVar10 = 1;
                           goto LAB_00105c15;
                        }
                     }
                  }
               }
            }
         }
      }
   }
   switchD_00105f42_default:uVar10 = 0;
   LAB_00105c15:if (local_108[0x19] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar10;
}undefined8 hf_accept_conn(long *param_1) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   SSL *ssl;
   undefined8 uVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined8 local_58[3];
   long local_40;
   lVar5 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar5 + 0x70 ) - *(long*)( lVar5 + 0x68 ), 8);
   if (iVar1 != 0) {
      uVar4 = **(undefined8**)( lVar5 + 0x68 );
      *(undefined8**)( lVar5 + 0x68 ) = *(undefined8**)( lVar5 + 0x68 ) + 1;
   } else {
      uVar4 = 0;
   }
   iVar1 = test_true("test/radix/quic_ops.c", 0x150, "TERP_stk_pop(((fctx->terp)), &(((flags))), sizeof(((flags))))", iVar1 != 0);
   if (iVar1 != 0) {
      lVar5 = *param_1;
      uVar6 = 0;
      iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar5 + 0x70 ) - *(long*)( lVar5 + 0x68 ), 8);
      if (iVar1 != 0) {
         iVar1 = 1;
         uVar6 = **(undefined8**)( lVar5 + 0x68 );
         *(undefined8**)( lVar5 + 0x68 ) = *(undefined8**)( lVar5 + 0x68 ) + 1;
      }
      iVar1 = test_true("test/radix/quic_ops.c", 0x150, "TERP_stk_pop(((fctx->terp)), &(((conn_name))), sizeof(((conn_name))))", iVar1);
      if (iVar1 != 0) {
         uVar7 = 0;
         uVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
         if (uVar2 != 0) {
            lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
            uVar7 = *(undefined8*)( lVar5 + 0x68 );
            iVar1 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar7);
            uVar2 = ( uint )(iVar1 != 0);
         }
         iVar1 = test_true("test/radix/quic_ops.c", 0x151, "expect_slot_ssl(fctx, (0), &((listener)))", uVar2);
         if (iVar1 != 0) {
            local_58[0] = uVar6;
            uVar3 = OPENSSL_LH_retrieve(DAT_00108e68, local_58);
            iVar1 = test_ptr_null("test/radix/quic_ops.c", 0x153, "RADIX_PROCESS_get_obj(RP(), conn_name)", uVar3);
            if (iVar1 != 0) {
               ssl = (SSL*)SSL_accept_connection(uVar7, uVar4);
               if (ssl == (SSL*)0x0) {
                  *(undefined4*)( param_1 + 1 ) = 1;
                  uVar4 = 2;
                  goto LAB_0010621c;
               }
               iVar1 = RADIX_PROCESS_set_ssl_constprop_0(uVar6, ssl);
               iVar1 = test_true("test/radix/quic_ops.c", 0x15a, "RADIX_PROCESS_set_ssl(RP(), conn_name, conn)", iVar1 != 0);
               if (iVar1 == 0) goto LAB_001064c0;
               if (check_pending_match != 0) {
                  if (( pending_cb_called != 0 ) && ( hello_cb_called != 0 )) {
                     iVar1 = test_ptr_eq("test/radix/quic_ops.c", 0x163, "pending_ssl_obj", "client_hello_ssl_obj", pending_ssl_obj, client_hello_ssl_obj);
                     if (iVar1 != 0) {
                        iVar1 = test_ptr_eq("test/radix/quic_ops.c", 0x167, "pending_ssl_obj", &_LC115, pending_ssl_obj, ssl);
                        if (iVar1 != 0) goto LAB_0010642a;
                     }
                     LAB_001064c0:SSL_free(ssl);
                     goto LAB_0010621a;
                  }
                  test_info("test/radix/quic_ops.c", 0x161, "Callbacks not called, skipping user_ssl check\n");
                  LAB_0010642a:client_hello_ssl_obj = 0;
                  pending_ssl_obj = 0;
                  check_pending_match = 0;
                  hello_cb_called = 0;
                  pending_cb_called = 0;
               }
               uVar4 = 1;
               goto LAB_0010621c;
            }
         }
      }
   }
   LAB_0010621a:uVar4 = 0;
   LAB_0010621c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 hf_read_expect(long *param_1) {
   int iVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   void *pvVar8;
   long lVar9;
   undefined8 uVar10;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   lVar4 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar4 + 0x70 ) - *(long*)( lVar4 + 0x68 ), 8);
   if (iVar1 != 0) {
      lVar9 = **(long**)( lVar4 + 0x68 );
      *(long**)( lVar4 + 0x68 ) = *(long**)( lVar4 + 0x68 ) + 1;
   } else {
      lVar9 = 0;
   }
   iVar1 = test_true("test/radix/quic_ops.c", 0x269, "TERP_stk_pop(((fctx->terp)), &(((buf_len))), sizeof(((buf_len))))", iVar1 != 0);
   if (iVar1 != 0) {
      lVar4 = *param_1;
      uVar7 = 0;
      iVar1 = test_size_t_ge("test/radix/terp.c", 0x275, "terp->stk_end - terp->stk_cur", "buf_len", *(long*)( lVar4 + 0x70 ) - *(long*)( lVar4 + 0x68 ), 8);
      if (iVar1 != 0) {
         iVar1 = 1;
         uVar7 = **(undefined8**)( lVar4 + 0x68 );
         *(undefined8**)( lVar4 + 0x68 ) = *(undefined8**)( lVar4 + 0x68 ) + 1;
      }
      iVar1 = test_true("test/radix/quic_ops.c", 0x269, "TERP_stk_pop(((fctx->terp)), &(((buf))), sizeof(((buf))))", iVar1);
      if (iVar1 != 0) {
         uVar10 = 0;
         uVar2 = test_size_t_lt("test/radix/quic_bindings.c", 0x29e, &_LC112, "NUM_SLOTS", 0, 8);
         if (uVar2 != 0) {
            lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
            uVar10 = *(undefined8*)( lVar4 + 0x68 );
            iVar1 = test_ptr("test/radix/quic_bindings.c", 0x29f, "*p_ssl = RT()->ssl[idx]", uVar10);
            uVar2 = ( uint )(iVar1 != 0);
         }
         iVar1 = test_true("test/radix/quic_ops.c", 0x26a, "expect_slot_ssl(fctx, (0), &((ssl)))", uVar2);
         if (iVar1 != 0) {
            if (( lVar9 != 0 ) && ( lVar4 = CRYPTO_THREAD_get_local(&radix_thread) * (long*)( lVar4 + 0x10 ) == 0 )) {
               lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
               pvVar8 = CRYPTO_malloc((int)lVar9, "test/radix/quic_ops.c", 0x26d);
               *(void**)( lVar4 + 0x10 ) = pvVar8;
               iVar1 = test_ptr("test/radix/quic_ops.c", 0x26d, "RT()->tmp_buf = OPENSSL_malloc(buf_len)", pvVar8);
               if (iVar1 == 0) goto LAB_00106573;
            }
            lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
            lVar4 = *(long*)( lVar4 + 0x18 );
            lVar5 = CRYPTO_THREAD_get_local(&radix_thread);
            lVar5 = *(long*)( lVar5 + 0x10 );
            lVar6 = CRYPTO_THREAD_get_local(&radix_thread);
            iVar1 = SSL_read_ex(uVar10, lVar5 + *(long*)( lVar6 + 0x18 ), lVar9 - lVar4, &local_48);
            iVar3 = check_consistent_want(uVar10, iVar1);
            iVar3 = test_true("test/radix/quic_ops.c", 0x273, "check_consistent_want(ssl, r)", iVar3 != 0);
            if (iVar3 != 0) {
               if (iVar1 != 0) {
                  lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                  if (local_48 + *(long*)( lVar4 + 0x18 ) == lVar9) {
                     if (lVar9 != 0) {
                        lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                        iVar1 = test_mem_eq("test/radix/quic_ops.c", 0x27f, "RT()->tmp_buf", &_LC185, *(undefined8*)( lVar4 + 0x10 ), lVar9, uVar7, lVar9);
                        if (iVar1 == 0) goto LAB_00106573;
                     }
                     lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                     CRYPTO_free(*(void**)( lVar4 + 0x10 ));
                     lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                     *(undefined8*)( lVar4 + 0x10 ) = 0;
                     lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                     *(undefined8*)( lVar4 + 0x18 ) = 0;
                     uVar7 = 1;
                     goto LAB_00106575;
                  }
                  lVar4 = CRYPTO_THREAD_get_local(&radix_thread);
                  *(long*)( lVar4 + 0x18 ) = *(long*)( lVar4 + 0x18 ) + local_48;
               }
               *(undefined4*)( param_1 + 1 ) = 1;
               uVar7 = 2;
               goto LAB_00106575;
            }
         }
      }
   }
   LAB_00106573:uVar7 = 0;
   LAB_00106575:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar7;
}undefined8 SRDR_print_one(long *param_1, BIO *param_2, long param_3, undefined4 *param_4) {
   int iVar1;
   size_t sVar2;
   char *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   long lVar6;
   if (param_4 != (undefined4*)0x0) {
      *param_4 = 0;
   }
   lVar6 = param_1[1];
   iVar1 = test_size_t_ge("test/radix/terp.c", 0x159, "srdr->end - srdr->cur", "buf_len", param_1[2] - lVar6, 8);
   if (iVar1 == 0) {
      iVar1 = test_true("test/radix/terp.c", 0x187, "SRDR_get_operand(srdr, &(opc), sizeof(opc))", 0);
      uVar4 = 0;
      if (iVar1 == 0) {
         return 0;
      }
      switchD_00106960_caseD_0:test_error("test/radix/terp.c", 0x1d3, "unsupported opcode while printing: %llu", uVar4);
      return 0;
   }
   uVar4 = *(undefined8*)param_1[1];
   param_1[1] = (long)( (undefined8*)param_1[1] + 1 );
   iVar1 = test_true("test/radix/terp.c", 0x187, "SRDR_get_operand(srdr, &(opc), sizeof(opc))", 1);
   if (iVar1 == 0) {
      return 0;
   }
   switch (uVar4) {
      default:
    goto switchD_00106960_caseD_0;
      case 1:
    if (param_3 == -1) {
      BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,&_LC189);
    }
    else {
      BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,&_LC189);
    }
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    *param_4 = 1;
    return 1;
      case 2:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x196,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 != 0) {
      if (param_3 == -1) {
        BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,"PUSH_P");
      }
      else {
        BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,"PUSH_P");
      }
      BIO_printf(param_2,"%20p",uVar4);
      return 1;
    }
    break;
      case 3:
    pcVar5 = (char *)0x0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      pcVar5 = *(char **)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x19f,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 != 0) {
      if (param_3 == -1) {
        BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,"PUSH_PZ");
      }
      else {
        BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,"PUSH_PZ");
      }
      if ((pcVar5 != (char *)0x0) && (sVar2 = strlen(pcVar5), sVar2 == 1)) {
        BIO_printf(param_2,"%20p (%s)",pcVar5,pcVar5);
        return 1;
      }
      BIO_printf(param_2,"%20p (\"%s\")",pcVar5,pcVar5);
      return 1;
    }
    break;
      case 4:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x1ab,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar6 = lVar6 - *param_1;
    pcVar5 = "PUSH_U64";
    pcVar3 = "PUSH_U64";
    if (param_3 == -1) {
LAB_00106c0c:
      BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6,pcVar3);
      goto LAB_00106b7b;
    }
    goto LAB_00106b65;
      case 5:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x1b5,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar6 = lVar6 - *param_1;
    if (param_3 == -1) {
      pcVar3 = "PUSH_SIZE";
      goto LAB_00106c0c;
    }
    pcVar5 = "PUSH_SIZE";
LAB_00106b65:
    BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6,pcVar5);
LAB_00106b7b:
    BIO_printf(param_2,"%#20llx (%llu)",uVar4,uVar4);
    return 1;
      case 6:
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      param_1[1] = param_1[1] + 8;
      iVar1 = 1;
    }
    iVar1 = test_true("test/radix/terp.c",0x1c0,"SRDR_get_operand(srdr, &(v), sizeof(v))",iVar1);
    if (iVar1 != 0) {
      uVar4 = 0;
      iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                             param_1[2] - param_1[1],8);
      if (iVar1 != 0) {
        iVar1 = 1;
        uVar4 = *(undefined8 *)param_1[1];
        param_1[1] = (long)((undefined8 *)param_1[1] + 1);
      }
      iVar1 = test_true("test/radix/terp.c",0x1c1,
                        "SRDR_get_operand(srdr, &(f_name), sizeof(f_name))",iVar1);
      if (iVar1 != 0) {
        if (param_3 == -1) {
          BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,&_LC202);
        }
        else {
          BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,&_LC202);
        }
        BIO_printf(param_2,"%s",uVar4);
        return 1;
      }
    }
    break;
      case 7:
    uVar4 = 0;
    iVar1 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                           param_1[2] - param_1[1],8);
    if (iVar1 != 0) {
      iVar1 = 1;
      uVar4 = *(undefined8 *)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    }
    iVar1 = test_true("test/radix/terp.c",0x1cc,"SRDR_get_operand(srdr, &(l_name), sizeof(l_name))",
                      iVar1);
    if (iVar1 != 0) {
      BIO_printf(param_2,"\n%s:\n",uVar4);
      if (param_3 != -1) {
        BIO_printf(param_2,"%3zu-  %4zx>\t%-8s \t",param_3,lVar6 - *param_1,"LABEL");
        return 1;
      }
      BIO_printf(param_2,"      %4zx>\t%-8s \t",lVar6 - *param_1,"LABEL");
      return 1;
    }
   }
   return 0;
}/* WARNING: Type propagation algorithm not settling */int TERP_run_constprop_0(BIO *param_1, undefined8 *param_2) {
   BIO *bio;
   undefined1 auVar1[16];
   bool bVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   undefined4 uVar6;
   int iVar7;
   ulong uVar8;
   void *pvVar9;
   undefined8 uVar10;
   code *pcVar11;
   long lVar12;
   long in_FS_OFFSET;
   undefined8 *puVar13;
   BIO *pBVar14;
   long local_158;
   undefined8 local_140;
   undefined1 local_128[16];
   undefined8 *local_118;
   undefined8 *puStack_110;
   long local_108;
   undefined8 *puStack_100;
   BIO *local_f8;
   BIO *pBStack_f0;
   undefined8 *local_e8;
   code *pcStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   BIO *local_c8;
   long *plStack_c0;
   undefined8 *local_b8;
   undefined8 *puStack_b0;
   long local_a8;
   undefined8 *puStack_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   BIO **local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   ulong local_58;
   ulong local_50;
   long local_40;
   bio = (BIO*)*param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_128 = (undefined1[16])0x0;
   test_info("test/radix/terp.c", 0x20f, "%s: script \'%s\' (%s)", "generating script", param_1->method, param_1->callback);
   pBStack_f0 = (BIO*)0x0;
   local_e8 = (undefined8*)0x0;
   pcStack_e0 = (code*)0x0;
   uStack_d0 = (ulong)uStack_d0._4_4_ << 0x20;
   local_b8 = (undefined8*)0x0;
   local_c8 = (BIO*)0x0;
   plStack_c0 = (long*)0x0;
   local_f8 = param_1;
   iVar5 = test_true("test/radix/terp.c", 0x132, "GEN_CTX_init(&gctx, script_info)", 1);
   if (iVar5 == 0) {
      LAB_001070c6:uVar10 = 0;
   } else {
      ( **(code**)&param_1->flags )(&local_f8);
      openc_size(&local_f8, 1);
      iVar5 = test_false("test/radix/terp.c", 0x138, "gctx.error", (int)local_e8 != 0);
      if (iVar5 == 0) {
         LAB_001070a2:if ((int)local_e8 != 0) {
            test_error("test/radix/terp.c", 0x142, "script generation failed: %s (at %s:%d)", pcStack_e0, local_d8, uStack_d0 & 0xffffffff);
         }
         CRYPTO_free(local_c8);
         goto LAB_001070c6;
      }
      local_b8 = (undefined8*)0x0;
      local_128._8_8_ = (long)plStack_c0 - (long)local_c8;
      local_128._0_8_ = local_c8;
      local_c8 = (BIO*)0x0;
      plStack_c0 = (long*)0x0;
      iVar5 = test_true("test/radix/terp.c", 0x13b, "GEN_CTX_finish(&gctx, gen_script)", 1);
      uVar10 = 1;
      if (iVar5 == 0) goto LAB_001070a2;
   }
   iVar5 = test_true("test/radix/terp.c", 0x344, "GEN_SCRIPT_init(&gen_script, script_info)", uVar10);
   if (iVar5 == 0) {
      test_error("test/radix/terp.c", 0x20c, "%s: script \'%s\' (%s)", "error while generating script", param_1->method, param_1->callback);
   } else {
      lVar12 = 0;
      local_118 = (undefined8*)( (ulong)local_118 & 0xffffffff00000000 );
      local_e8 = (undefined8*)( (long)(BIO_METHOD**)local_128._0_8_ + local_128._8_8_ );
      pcStack_e0 = (code*)0x0;
      local_f8 = (BIO*)local_128._0_8_;
      pBStack_f0 = (BIO*)local_128._0_8_;
      BIO_printf(bio, "\nGenerated script for \'%s\':\n", param_1->method);
      BIO_printf(bio, "\n--GENERATED-----------------------------------------------------------\n");
      BIO_printf(bio, "  # NAME:\n  #   %s\n", param_1->method);
      BIO_printf(bio, "  # SOURCE:\n  #   %s:%d\n", param_1->cb_arg, (ulong)(uint)param_1->init);
      BIO_printf(bio, "  # DESCRIPTION:\n  #   %s\n", param_1->callback);
      do {
         BIO_printf(bio, "\n");
         iVar5 = SRDR_print_one(&local_f8, bio, lVar12, &local_118);
         iVar5 = test_true("test/radix/terp.c", 0x1f6, "SRDR_print_one(srdr, bio, i, &was_end)", iVar5 != 0);
         pBVar14 = pBStack_f0;
         if (iVar5 == 0) {
            uVar6 = 0;
            goto LAB_00107202;
         }
         lVar12 = lVar12 + 1;
      } while ( (int)local_118 == 0 );
      BIO_printf(bio, "\n");
      if (lVar12 == -1) {
         BIO_printf(bio, "      %4zx>\t%-8s \t", (long)pBVar14 - (long)local_f8, &_LC221);
      } else {
         BIO_printf(bio, "%3zu-  %4zx>\t%-8s \t", lVar12, (long)pBVar14 - (long)local_f8, &_LC221);
      }
      BIO_printf(bio, "\n----------------------------------------------------------------------\n\n");
      uVar6 = 1;
      LAB_00107202:iVar5 = test_true("test/radix/terp.c", 0x34b, "GEN_SCRIPT_print(&gen_script, debug_bio, script_info)", uVar6);
      if (iVar5 == 0) {
         test_error("test/radix/terp.c", 0x20c, "%s: script \'%s\' (%s)", "error while printing script", param_1->method, param_1->callback);
      } else {
         puVar13 = param_2;
         iVar5 = test_true("test/radix/terp.c", 0x232, "cfg->now_cb != NULL", param_2[1] != 0);
         if (iVar5 != 0) {
            local_d8 = param_2[4];
            uStack_d0 = param_2[5];
            puVar13 = (undefined8*)param_2[2];
            pcStack_e0 = (code*)param_2[3];
            plStack_c0 = (long*)local_128;
            local_f8 = (BIO*)*param_2;
            pBStack_f0 = (BIO*)param_2[1];
            local_70 = 0;
            local_68 = 0;
            local_60 = 1;
            local_98 = (undefined1[16])0x0;
            local_88 = (undefined1[16])0x0;
            if (uStack_d0 == 0) {
               uStack_d0 = 3000000000;
            }
            iVar5 = 1;
            local_e8 = puVar13;
            local_78 = &local_f8;
            local_c8 = param_1;
         }
         iVar5 = test_true("test/radix/terp.c", 0x352, "TERP_init(&terp, cfg, script_info, &gen_script)", iVar5);
         if (iVar5 != 0) {
            test_info("test/radix/terp.c", 0x20f, "%s: script \'%s\' (%s)", "executing script", param_1->method, param_1->callback, puVar13);
            local_b8 = (undefined8*)*plStack_c0;
            puStack_a0 = (undefined8*)0x0;
            local_a8 = (long)local_b8 + plStack_c0[1];
            pBVar14 = local_f8;
            puStack_b0 = local_b8;
            local_58 = ( *(code*)pBStack_f0 )(local_e8);
            local_50 = local_58 + uStack_d0;
            if (CARRY8(local_58, uStack_d0)) {
               local_50 = 0xffffffffffffffff;
            }
            lVar12 = 0;
            bVar2 = false;
            local_158 = 0;
            LAB_001073b5:if (local_60 != 0) {
               local_118 = local_b8;
               puStack_110 = puStack_b0;
               local_108 = local_a8;
               puStack_100 = puStack_a0;
               if (!bVar2) {
                  BIO_printf(pBVar14, "\n--EXECUTION-----------------------------------------------------------\n");
               }
               if (lVar12 != 0) {
                  BIO_printf(local_f8, "           \t\t(span %zu times)\n", lVar12);
               }
               iVar5 = SRDR_print_one(&local_118, pBVar14, 0xffffffffffffffff, 0);
               iVar5 = test_true("test/radix/terp.c", 0x2b4, "SRDR_print_one(&srdr_copy, debug_bio, SIZE_MAX, NULL)", iVar5 != 0);
               if (iVar5 == 0) {
                  BIO_printf(pBVar14, "----------------------------------------------------------------------\n");
                  goto LAB_00107539;
               }
               BIO_printf(pBVar14, "\n");
               bVar2 = true;
            }
            uVar10 = 0;
            iVar5 = test_size_t_ge("test/radix/terp.c", 0x159, "srdr->end - srdr->cur", "buf_len", local_a8 - (long)puStack_b0);
            if (iVar5 != 0) {
               iVar5 = 1;
               uVar10 = *puStack_b0;
               puStack_b0 = puStack_b0 + 1;
            }
            iVar5 = test_true("test/radix/terp.c", 0x2ba, "SRDR_get_operand(&terp->srdr, &((opc)), sizeof((opc)))", iVar5);
            if (iVar5 == 0) goto joined_r0x0010828e;
            local_158 = local_158 + 1;
            local_68 = local_68 + 1;
            puStack_a0 = puStack_b0;
            local_88._8_8_ = local_98._8_8_;
            uVar8 = ( *(code*)pBStack_f0 )(local_e8);
            if (local_50 <= uVar8) {
               lVar12 = 0;
               LAB_001074f2:test_error("test/radix/terp.c", 0x2c4, "timed out while executing op %zu", local_158);
               joined_r0x00107522:if (( local_60 != 0 ) && ( lVar12 != 0 )) {
                  BIO_printf(local_f8, "           \t\t(span %zu times)\n", lVar12);
               }
               goto joined_r0x0010828e;
            }
            if (pcStack_e0 != (code*)0x0) {
               iVar5 = ( *pcStack_e0 )(&local_f8, local_d8);
               iVar5 = test_true("test/radix/terp.c", 0x2cb, "terp->cfg.per_op_cb(terp, terp->cfg.per_op_cb_arg)", iVar5 != 0);
               if (iVar5 == 0) {
                  lVar12 = 0;
                  LAB_001078ca:test_error("test/radix/terp.c", 0x2cc, "pre-operation processing failed at op %zu", local_158);
                  goto joined_r0x00107522;
               }
            }
            switch (uVar10) {
               default:
          test_error("test/radix/terp.c",800,"unknown opcode: %llu",uVar10);
          goto joined_r0x0010828e;
               case 1:
joined_r0x00108214:
          if (bVar2) {
            BIO_printf(pBVar14,
                       "----------------------------------------------------------------------\n");
          }
          uVar8 = ERR_peek_last_error();
          if (uVar8 != 0) {
            test_info("test/radix/terp.c",0x332,"WARNING: errors on error stack despite success:");
            ERR_print_errors(local_f8);
            BIO_printf(pBVar14,"\n");
          }
          iVar5 = 1;
          lVar12 = local_98._8_8_;
          if (local_88._0_8_ != local_98._8_8_) {
            iVar5 = 0;
            test_error("test/radix/terp.c",0x35d,"stack not empty: %zu bytes left",
                       local_88._0_8_ - local_98._8_8_);
            lVar12 = local_88._0_8_;
          }
          goto LAB_0010758c;
               case 2:
               case 3:
          uVar10 = 0;
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            iVar5 = 1;
            uVar10 = *puStack_b0;
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2da,
                            "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
          if (iVar5 == 0) goto joined_r0x0010828e;
          uVar4 = local_88._0_8_;
          uVar8 = local_88._0_8_ - local_98._0_8_;
          if (uVar8 < 8) {
            lVar12 = uVar8 * 2;
            if (uVar8 == 0) {
              lVar12 = 0x100;
            }
            uVar3 = local_98._8_8_;
            pvVar9 = CRYPTO_realloc((void *)local_98._0_8_,(int)lVar12,"test/radix/terp.c",0x25d);
            iVar5 = test_ptr("test/radix/terp.c",0x25e,&_LC4,pvVar9);
            if (iVar5 != 0) {
              local_88._0_8_ = (long)pvVar9 + lVar12;
              local_98._8_8_ = ((long)pvVar9 + lVar12) - (uVar4 - uVar3);
              local_98._0_8_ = pvVar9;
              goto LAB_00107acd;
            }
          }
          else {
LAB_00107acd:
            iVar5 = 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x26a,"TERP_stk_ensure_capacity(terp, buf_len)",
                            iVar5);
          if (iVar5 != 0) {
            uVar4 = local_98._8_8_;
            local_98._8_8_ = local_98._8_8_ + -8;
            *(undefined8 *)(uVar4 + -8) = uVar10;
          }
          iVar5 = test_true("test/radix/terp.c",0x2db,"TERP_stk_push((terp), &(v), sizeof(v))");
          break;
               case 4:
          uVar10 = 0;
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            iVar5 = 1;
            uVar10 = *puStack_b0;
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2e2,
                            "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
          if (iVar5 == 0) goto joined_r0x0010828e;
          uVar4 = local_88._0_8_;
          uVar8 = local_88._0_8_ - local_98._0_8_;
          if (uVar8 < 8) {
            lVar12 = uVar8 * 2;
            if (uVar8 == 0) {
              lVar12 = 0x100;
            }
            uVar3 = local_98._8_8_;
            pvVar9 = CRYPTO_realloc((void *)local_98._0_8_,(int)lVar12,"test/radix/terp.c",0x25d);
            iVar5 = test_ptr("test/radix/terp.c",0x25e,&_LC4,pvVar9);
            if (iVar5 != 0) {
              local_88._0_8_ = (long)pvVar9 + lVar12;
              local_98._8_8_ = ((long)pvVar9 + lVar12) - (uVar4 - uVar3);
              local_98._0_8_ = pvVar9;
              goto LAB_00107cbd;
            }
          }
          else {
LAB_00107cbd:
            iVar5 = 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x26a,"TERP_stk_ensure_capacity(terp, buf_len)",
                            iVar5);
          if (iVar5 != 0) {
            uVar4 = local_98._8_8_;
            local_98._8_8_ = local_98._8_8_ + -8;
            *(undefined8 *)(uVar4 + -8) = uVar10;
          }
          iVar5 = test_true("test/radix/terp.c",0x2e3,"TERP_stk_push((terp), &(v), sizeof(v))");
          break;
               case 5:
          uVar10 = 0;
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            iVar5 = 1;
            uVar10 = *puStack_b0;
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2ea,
                            "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
          if (iVar5 == 0) goto joined_r0x0010828e;
          uVar4 = local_88._0_8_;
          uVar8 = local_88._0_8_ - local_98._0_8_;
          if (uVar8 < 8) {
            lVar12 = uVar8 * 2;
            if (uVar8 == 0) {
              lVar12 = 0x100;
            }
            uVar3 = local_98._8_8_;
            pvVar9 = CRYPTO_realloc((void *)local_98._0_8_,(int)lVar12,"test/radix/terp.c",0x25d);
            iVar5 = test_ptr("test/radix/terp.c",0x25e,&_LC4,pvVar9);
            if (iVar5 != 0) {
              local_88._0_8_ = (long)pvVar9 + lVar12;
              local_98._8_8_ = ((long)pvVar9 + lVar12) - (uVar4 - uVar3);
              local_98._0_8_ = pvVar9;
              goto LAB_00107ea2;
            }
          }
          else {
LAB_00107ea2:
            iVar5 = 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x26a,"TERP_stk_ensure_capacity(terp, buf_len)",
                            iVar5);
          if (iVar5 != 0) {
            uVar4 = local_98._8_8_;
            local_98._8_8_ = local_98._8_8_ + -8;
            *(undefined8 *)(uVar4 + -8) = uVar10;
          }
          iVar5 = test_true("test/radix/terp.c",0x2eb,"TERP_stk_push((terp), &(v), sizeof(v))");
          if (iVar5 == 0) goto joined_r0x0010828e;
          lVar12 = 0;
          goto LAB_001073b5;
               case 6:
          lVar12 = 0;
          while( true ) {
            pcVar11 = (code *)0x0;
            iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                   local_a8 - (long)puStack_b0,8);
            if (iVar5 != 0) {
              iVar5 = 1;
              pcVar11 = (code *)*puStack_b0;
              puStack_b0 = puStack_b0 + 1;
            }
            iVar5 = test_true("test/radix/terp.c",0x2fc,
                              "SRDR_get_operand(&terp->srdr, &((v)), sizeof((v)))",iVar5);
            if (iVar5 == 0) goto joined_r0x0010828e;
            iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                   local_a8 - (long)puStack_b0,8);
            local_140 = 0;
            if (iVar5 != 0) {
              iVar5 = 1;
              local_140 = *puStack_b0;
              puStack_b0 = puStack_b0 + 1;
            }
            iVar5 = test_true("test/radix/terp.c",0x2fd,
                              "SRDR_get_operand(&terp->srdr, &((f_name)), sizeof((f_name)))",iVar5);
            if ((iVar5 == 0) ||
               (iVar5 = test_true("test/radix/terp.c",0x2ff,"v != NULL"), iVar5 == 0))
            goto joined_r0x0010828e;
            iVar5 = (*pcVar11)(&local_78);
            if (local_70._4_4_ != 0) {
              iVar5 = test_int_eq("test/radix/terp.c",0x305,&_LC141,"F_RET_SKIP_REST",iVar5,3);
              if (iVar5 == 0) {
                if (bVar2) {
                  BIO_printf(pBVar14,
                             "----------------------------------------------------------------------\n"
                            );
                }
                goto LAB_00107539;
              }
              if (local_60 != 0) {
                BIO_printf(local_f8,"           \t\t(skipping)\n");
              }
              local_70 = local_70 & 0xffffffff;
              goto joined_r0x00108214;
            }
            if ((int)local_70 == 0) break;
            iVar5 = test_int_eq("test/radix/terp.c",0x30e,&_LC141,"F_RET_SPIN_AGAIN",iVar5,2);
            if (iVar5 == 0) goto joined_r0x0010828e;
            lVar12 = lVar12 + 1;
            local_70 = local_70 & 0xffffffff00000000;
            puStack_b0 = puStack_a0;
            local_98._8_8_ = local_88._8_8_;
            uVar8 = (*(code *)pBStack_f0)(local_e8);
            if (local_50 <= uVar8) goto LAB_001074f2;
            if (pcStack_e0 != (code *)0x0) {
              iVar5 = (*pcStack_e0)(&local_f8,local_d8);
              iVar5 = test_true("test/radix/terp.c",0x2cb,
                                "terp->cfg.per_op_cb(terp, terp->cfg.per_op_cb_arg)",iVar5 != 0);
              if (iVar5 == 0) goto LAB_001078ca;
            }
          }
          iVar7 = test_false("test/radix/terp.c",0x314,"terp->fctx.spin_again");
          if (iVar7 != 0) goto code_r0x00108256;
          goto joined_r0x0010828e;
               case 7:
          iVar5 = test_size_t_ge("test/radix/terp.c",0x159,"srdr->end - srdr->cur","buf_len",
                                 local_a8 - (long)puStack_b0,8);
          if (iVar5 != 0) {
            puStack_b0 = puStack_b0 + 1;
          }
          iVar5 = test_true("test/radix/terp.c",0x2f2,
                            "SRDR_get_operand(&terp->srdr, &((l_name)), sizeof((l_name)))");
          if (iVar5 == 0) goto joined_r0x0010828e;
          lVar12 = 0;
          goto LAB_001073b5;
            }
            if (iVar5 == 0) goto joined_r0x0010828e;
            lVar12 = 0;
            goto LAB_001073b5;
         }
      }
   }
   CRYPTO_free((void*)local_128._0_8_);
   local_128 = ZEXT816(0);
   BIO_printf(bio, "Stats:\n  Ops executed: %16llu\n\n", local_68);
   goto LAB_00107740;
   code_r0x00108256:if (iVar5 != 1) goto code_r0x0010825f;
   goto LAB_001073b5;
   code_r0x0010825f:test_error("test/radix/terp.c", 0x318, "op %zu (FUNC %s) failed with return value %d", local_158, local_140, iVar5);
   joined_r0x0010828e:if (bVar2) {
      BIO_printf(pBVar14, "----------------------------------------------------------------------\n");
   }
   LAB_00107539:iVar5 = 0;
   test_error("test/radix/terp.c", 0x32d, "FAILED while executing script: %s at op %zu, error stack:", local_c8->method, local_158);
   ERR_print_errors(local_f8);
   BIO_printf(pBVar14, "\n");
   lVar12 = local_88._0_8_;
   LAB_0010758c:test_output_memory("Final state of stack", local_98._8_8_, lVar12 - local_98._8_8_);
   BIO_printf(bio, "  (%zu bytes)\n", local_88._0_8_ - local_98._8_8_);
   BIO_printf(bio, "\n");
   if (local_c8 != (BIO*)0x0) {
      CRYPTO_free((void*)local_98._0_8_);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_88._8_8_;
      local_88 = auVar1 << 0x40;
      local_c8 = (BIO*)0x0;
      local_98 = (undefined1[16])0x0;
   }
   CRYPTO_free((void*)local_128._0_8_);
   local_128 = ZEXT816(0);
   BIO_printf(bio, "Stats:\n  Ops executed: %16llu\n\n", local_68);
   if (iVar5 != 0) {
      test_info("test/radix/terp.c", 0x20f, "%s: script \'%s\' (%s)", "completed", param_1->method, param_1->callback);
      goto LAB_00107767;
   }
   LAB_00107740:iVar5 = 0;
   test_error("test/radix/terp.c", 0x20c, "%s: script \'%s\' (%s)", "failed, exiting", param_1->method, param_1->callback);
   LAB_00107767:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar5;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint test_script(int param_1) {
   uint uVar1;
   undefined8 *puVar2;
   BIO *pBVar3;
   BIO *bio;
   int iVar4;
   undefined8 uVar5;
   char *filename;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   void *ptr;
   ulong uVar9;
   undefined4 uVar10;
   long in_FS_OFFSET;
   bool bVar11;
   uint local_d8;
   uint local_d4;
   void *local_c0;
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   char local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = (undefined1[16])0x0;
   uVar8 = *(undefined8*)( scripts + (long)param_1 * 8 );
   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
   DAT_00108e60 = ossl_crypto_mutex_new();
   iVar4 = test_ptr("test/radix/quic_bindings.c", 0x99, "rp->gm = ossl_crypto_mutex_new()", DAT_00108e60);
   if (iVar4 == 0) {
      LAB_0010838b:OPENSSL_LH_free(DAT_00108e68);
      DAT_00108e68 = 0;
      ossl_crypto_mutex_free(&DAT_00108e60);
      uVar5 = 0;
   } else {
      uVar5 = OPENSSL_LH_new(RADIX_OBJ_hash, RADIX_OBJ_cmp);
      DAT_00108e68 = OPENSSL_LH_set_thunks(uVar5, 0x100000, lh_RADIX_OBJ_cfn_thunk, lh_RADIX_OBJ_doall_thunk, lh_RADIX_OBJ_doall_arg_thunk);
      iVar4 = test_ptr("test/radix/quic_bindings.c", 0x9d, "rp->objs = lh_RADIX_OBJ_new(RADIX_OBJ_hash, RADIX_OBJ_cmp)", DAT_00108e68);
      if (iVar4 == 0) goto LAB_0010838b;
      DAT_00108e58 = OPENSSL_sk_new(0);
      iVar4 = test_ptr("test/radix/quic_bindings.c", 0xa0, "rp->threads = sk_RADIX_THREAD_new(NULL)", DAT_00108e58);
      if (iVar4 == 0) goto LAB_0010838b;
      DAT_00108e78 = (BIO*)0x0;
      filename = (char*)ossl_safe_getenv("SSLKEYLOGFILE");
      if (( filename != (char*)0x0 ) && ( *filename != '\0' )) {
         DAT_00108e78 = BIO_new_file(filename, "a");
         iVar4 = test_ptr("test/radix/quic_bindings.c", 0xa6, "rp->keylog_out = BIO_new_file(keylog_path, \"a\")", DAT_00108e78);
         if (iVar4 == 0) goto LAB_0010838b;
      }
      uVar5 = 1;
      _DAT_00108e80 = 0;
      DAT_00108e50 = 0;
      _radix_process = (undefined1[16])0x0;
   }
   iVar4 = test_true("test/radix/quic_bindings.c", 0x24f, "RADIX_PROCESS_init(&radix_process, node_idx, process_idx)", uVar5);
   if (iVar4 == 0) {
      LAB_001083c8:bVar11 = false;
   } else {
      iVar4 = CRYPTO_THREAD_init_local(&radix_thread, radix_thread_cleanup_tl);
      iVar4 = test_true("test/radix/quic_bindings.c", 0x252, "CRYPTO_THREAD_init_local(&radix_thread, radix_thread_cleanup_tl)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_001083c8;
      uVar5 = RADIX_THREAD_new_constprop_0();
      iVar4 = test_ptr("test/radix/quic_bindings.c", 0x256, "rt = RADIX_THREAD_new(&radix_process)", uVar5);
      if (iVar4 == 0) goto LAB_001083c8;
      iVar4 = radix_thread_init(uVar5);
      bVar11 = iVar4 != 0;
   }
   iVar4 = test_true("test/radix/main.c", 0x1c, "bindings_process_init(0, 0)", bVar11);
   if (iVar4 != 0) {
      local_b8._8_8_ = get_time;
      local_b8._0_8_ = _bio_err;
      local_a8._8_8_ = do_per_op;
      iVar4 = test_true("test/radix/main.c", 0x21, "bindings_adjust_terp_config(&cfg)", 1);
      if (iVar4 != 0) {
         local_d4 = TERP_run_constprop_0(uVar8, local_b8);
         if (_DAT_00108e80 == 0) {
            local_d8 = 1;
            uVar10 = 1;
            for (uVar9 = 1; iVar4 = OPENSSL_sk_num(DAT_00108e58),pBVar3 = _bio_err,uVar9 < (ulong)(long)iVar4; uVar9 = uVar9 + 1) {
               lVar7 = OPENSSL_sk_value(DAT_00108e58, uVar9 & 0xffffffff);
               BIO_printf(_bio_err, "==> Joining thread %zu\n", uVar9);
               lVar6 = *(long*)( lVar7 + 8 );
               if (lVar6 != 0) {
                  ossl_crypto_thread_native_join(lVar6, &local_c0);
                  lVar6 = *(long*)( lVar7 + 8 );
               }
               ossl_crypto_thread_native_clean(lVar6);
               *(undefined8*)( lVar7 + 8 ) = 0;
               iVar4 = test_true("test/radix/quic_bindings.c", 0x21d, "rt->done", *(int*)( lVar7 + 0xc0 ) != 0);
               iVar4 = test_true("test/radix/quic_bindings.c", 0x185, "RADIX_THREAD_join(rt)", iVar4 != 0);
               if (iVar4 == 0) {
                  uVar10 = 0;
               }
               uVar1 = 0;
               if (*(int*)( lVar7 + 0xc4 ) != 0) {
                  uVar1 = local_d8;
               }
               local_d8 = uVar1;
            }
            _DAT_00108e80 = 1;
            DAT_00108e84 = local_d8;
            for (uVar9 = 1; iVar4 = OPENSSL_sk_num(DAT_00108e58),uVar9 < (ulong)(long)iVar4; uVar9 = uVar9 + 1) {
               lVar6 = OPENSSL_sk_value(DAT_00108e58, uVar9 & 0xffffffff);
               ossl_crypto_mutex_lock(*(undefined8*)( lVar6 + 0xb8 ));
               uVar1 = *(uint*)( lVar6 + 0xc4 );
               ossl_crypto_mutex_unlock(*(undefined8*)( lVar6 + 0xb8 ));
               BIO_printf(pBVar3, "\n====(n%zu/p%zu/t%zu)=======================================================\nResult for child thread with index %zu:\n", radix_process, DAT_00108e48, *(undefined8*)( lVar6 + 0x20 ), *(undefined8*)( lVar6 + 0x20 ));
               BIO_snprintf(local_88, 0x40, "#  -T-%2zu:\t# ", *(undefined8*)( lVar6 + 0x20 ));
               BIO_ctrl(_bio_err, 0x4f, 0, local_88);
               lVar7 = BIO_ctrl(*(BIO**)( lVar6 + 0xb0 ), 3, 0, &local_c0);
               BIO_write(pBVar3, local_c0, (int)lVar7);
               BIO_printf(pBVar3, "\n");
               BIO_ctrl(_bio_err, 0x4f, 0, &_LC273);
               BIO_printf(pBVar3, "==> Child thread with index %zu exited with %d\n", *(undefined8*)( lVar6 + 0x20 ), (ulong)uVar1);
               if (uVar1 == 0) {
                  lVar7 = 0;
                  BIO_printf(pBVar3, "  Slots:\n");
                  do {
                     puVar2 = *(undefined8**)( lVar6 + 0x28 + lVar7 * 8 );
                     if (puVar2 == (undefined8*)0x0) {
                        BIO_printf(pBVar3, "  %3zu) <NULL>\n", lVar7);
                     } else {
                        BIO_printf(pBVar3, "  %3zu) \'%s\' (SSL: %p)\n", lVar7, *puVar2, *(undefined8*)( lVar6 + 0x68 + lVar7 * 8 ));
                     }
                     lVar7 = lVar7 + 1;
                  } while ( lVar7 != 8 );
               }
            }
            BIO_printf(pBVar3, "\n======================================================================\n");
         } else {
            uVar10 = 1;
            local_d8 = DAT_00108e84;
         }
         iVar4 = test_true("test/radix/quic_bindings.c", 0x261, "RADIX_PROCESS_join_all_threads(&radix_process, &testresult_child)", uVar10);
         pBVar3 = _bio_err;
         if (iVar4 != 0) {
            BIO_printf(_bio_err, "Final process state for node %zu, process %zu:\n", radix_process, DAT_00108e48);
            BIO_printf(pBVar3, "  Threads (incl. main):        %zu\n", DAT_00108e50);
            BIO_printf(pBVar3, "  Time slip:                   %llu ms\n", DAT_00108e70 / 1000000);
            BIO_printf(pBVar3, "  Objects:\n");
            OPENSSL_LH_doall_arg(DAT_00108e68, report_obj, pBVar3);
            bio = _bio_err;
            if (local_d8 == 0 || local_d4 == 0) {
               lVar7 = 0;
               lVar6 = OPENSSL_sk_value(DAT_00108e58, 0);
               BIO_printf(bio, "  Slots:\n");
               do {
                  puVar2 = *(undefined8**)( lVar6 + 0x28 + lVar7 * 8 );
                  if (puVar2 == (undefined8*)0x0) {
                     BIO_printf(bio, "  %3zu) <NULL>\n", lVar7);
                  } else {
                     BIO_printf(bio, "  %3zu) \'%s\' (SSL: %p)\n", lVar7, *puVar2, *(undefined8*)( lVar6 + 0x68 + lVar7 * 8 ));
                  }
                  lVar7 = lVar7 + 1;
               } while ( lVar7 != 8 );
            }
            BIO_printf(pBVar3, "\n======================================================================\n");
            uVar8 = CRYPTO_THREAD_get_local(&radix_thread);
            iVar4 = test_ptr("test/radix/quic_bindings.c", 0x244, &_LC7, uVar8);
            if (iVar4 != 0) {
               iVar4 = CRYPTO_THREAD_set_local(&radix_thread, 0);
               test_true("test/radix/quic_bindings.c", 0x247, "CRYPTO_THREAD_set_local(&radix_thread, NULL)", iVar4 != 0);
            }
            for (uVar9 = 0; iVar4 = OPENSSL_sk_num(DAT_00108e58),uVar9 < (ulong)(long)iVar4; uVar9 = uVar9 + 1) {
               ptr = (void*)OPENSSL_sk_value(DAT_00108e58, uVar9 & 0xffffffff);
               if (ptr != (void*)0x0) {
                  BIO_free_all(*(BIO**)( (long)ptr + 0xb0 ));
                  CRYPTO_free(*(void**)( (long)ptr + 0x10 ));
                  ossl_crypto_mutex_free((long)ptr + 0xb8);
                  CRYPTO_free(ptr);
               }
            }
            OPENSSL_sk_free(DAT_00108e58);
            DAT_00108e58 = 0;
            OPENSSL_LH_doall(DAT_00108e68, cleanup_one);
            OPENSSL_LH_free(DAT_00108e68);
            DAT_00108e68 = 0;
            BIO_free_all(DAT_00108e78);
            DAT_00108e78 = (BIO*)0x0;
            ossl_crypto_mutex_free(&DAT_00108e60);
            if (local_d8 != 0 && local_d4 != 0) {
               BIO_printf(_bio_err, "==> OK\n\n");
               goto LAB_001083f5;
            }
            BIO_printf(_bio_err, "==> ERROR (main=%d, children=%d)\n\n", (ulong)local_d4, (ulong)local_d8);
         }
      }
   }
   local_d4 = 0;
   LAB_001083f5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return local_d4;
}undefined8 RADIX_THREAD_worker_main(long param_1) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_58;
   code *local_50;
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = radix_thread_init();
   iVar1 = test_true("test/radix/quic_bindings.c", 0x2ec, "radix_thread_init(rt)", iVar1 != 0);
   uVar3 = 0;
   if (iVar1 != 0) {
      ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0xb8 ));
      ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0xb8 ));
      local_58 = *(undefined8*)( param_1 + 0xb0 );
      local_50 = get_time;
      local_48 = ZEXT816(0x100270) << 0x40;
      local_38 = (undefined1[16])0x0;
      uVar2 = test_true("test/radix/quic_bindings.c", 0x2dc, "bindings_adjust_terp_config(&cfg)", 1);
      if (uVar2 != 0) {
         iVar1 = TERP_run_constprop_0(*(undefined8*)( param_1 + 0xa8 ), &local_58);
         uVar2 = ( uint )(iVar1 != 0);
      }
      ossl_crypto_mutex_lock(*(undefined8*)( param_1 + 0xb8 ));
      *(uint*)( param_1 + 0xc4 ) = uVar2;
      *(undefined4*)( param_1 + 0xc0 ) = 1;
      ossl_crypto_mutex_unlock(*(undefined8*)( param_1 + 0xb8 ));
      uVar3 = CRYPTO_THREAD_get_local(&radix_thread);
      iVar1 = test_ptr("test/radix/quic_bindings.c", 0x244, &_LC7, uVar3);
      if (iVar1 != 0) {
         iVar1 = CRYPTO_THREAD_set_local(&radix_thread, 0);
         test_true("test/radix/quic_bindings.c", 0x247, "CRYPTO_THREAD_set_local(&radix_thread, NULL)", iVar1 != 0);
      }
      uVar3 = 1;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined1 *test_get_options(void) {
   return options_0;
}undefined8 setup_tests(void) {
   int iVar1;
   iVar1 = test_skip_common_options();
   if (iVar1 != 0) {
      cert_file = (char*)test_get_argument(0);
      if (cert_file == (char*)0x0) {
         cert_file = "test/certs/servercert.pem";
      }
      key_file = (char*)test_get_argument(1);
      if (key_file == (char*)0x0) {
         key_file = "test/certs/serverkey.pem";
      }
      add_all_tests("test_script", test_script, 3, 1);
      return 1;
   }
   test_error("test/radix/main.c", 0x2f, "Error parsing test options\n");
   return 0;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */void radix_thread_cleanup_tl_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}

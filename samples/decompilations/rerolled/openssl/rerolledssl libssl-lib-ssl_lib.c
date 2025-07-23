void lh_SSL_SESSION_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}
void lh_SSL_SESSION_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}
void lh_SSL_SESSION_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}
void lh_SSL_SESSION_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}
undefined8 ct_permissive(void) {
   return 1;
}
undefined8 ssl_undefined_function(void) {
   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x1396, "ssl_undefined_function");
   ERR_set_error(0x14, 0xc0101, 0);
   return 0;
}
void ssl_undefined_function_7(void) {
   ssl_undefined_function();
   return;
}
void ssl_undefined_function_6(void) {
   ssl_undefined_function(0);
   return;
}
long ssl_undefined_function_5(void) {
   int iVar1;
   iVar1 = ssl_undefined_function();
   return (long)iVar1;
}
void ssl_undefined_function_4(void) {
   ssl_undefined_function();
   return;
}
void ssl_undefined_function_3(void) {
   ssl_undefined_function();
   return;
}
void ssl_undefined_function_8(void) {
   ssl_undefined_function();
   return;
}
undefined8 ssl_io_intern(undefined8 *param_1) {
   int iVar1;
   uint *puVar2;
   undefined8 uVar3;
   uint *puVar4;
   undefined8 uVar5;
   puVar2 = (uint*)*param_1;
   uVar5 = param_1[1];
   uVar3 = param_1[2];
   if (puVar2 == (uint*)0x0) {
      return 0xffffffff;
   }

   if (*puVar2 == 0) {
      iVar1 = *(int*)( param_1 + 3 );
      puVar4 = puVar2;
   }
 else {
      if (( *puVar2 & 0x80 ) == 0) {
         return 0xffffffff;
      }

      puVar4 = (uint*)ossl_quic_obj_get0_handshake_layer(puVar2);
      if (puVar4 == (uint*)0x0) {
         return 0xffffffff;
      }

      iVar1 = *(int*)( param_1 + 3 );
   }

   if (iVar1 != 1) {
      if (iVar1 == 2) {
         /* WARNING: Could not recover jumptable at 0x001001a1. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar5 = ( *(code*)param_1[4] )(puVar2);
         return uVar5;
      }

      if (iVar1 != 0) {
         return 0xffffffff;
      }

   }

   /* WARNING: Could not recover jumptable at 0x00100187. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar5 = ( *(code*)param_1[4] )(puVar2, uVar5, uVar3, puVar4 + 0x54e);
   return uVar5;
}
undefined8 ssl_async_wait_ctx_cb(uint *param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         /* WARNING: Could not recover jumptable at 0x001001f7. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar2 = ( **(code**)( param_1 + 0x55e ) )(param_1, *(undefined8*)( param_1 + 0x560 ));
         return uVar2;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            /* WARNING: Could not recover jumptable at 0x001001ed. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( **(code**)( lVar1 + 0x1578 ) )(param_1, *(undefined8*)( lVar1 + 0x1580 ));
            return uVar2;
         }

         return 0;
      }

   }

   return 0;
}
undefined8 ssl_do_handshake_intern(undefined8 *param_1) {
   uint *puVar1;
   uint *puVar2;
   undefined8 uVar3;
   puVar1 = (uint*)*param_1;
   if (( puVar1 != (uint*)0x0 ) && ( ( puVar2 = puVar1 * puVar1 == 0 || ( ( ( *puVar1 & 0x80 ) != 0 && ( puVar2 = (uint*)ossl_quic_obj_get0_handshake_layer(puVar1) ),puVar2 != (uint*)0x0 ) ) ) )) {
      /* WARNING: Could not recover jumptable at 0x0010025b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar3 = ( **(code**)( puVar2 + 0x1c ) )(puVar1);
      return uVar3;
   }

   return 0xffffffff;
}
undefined4 ssl_start_async_job(uint *param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   uint *puVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (uint*)0x0 ) || ( ( puVar2 = param_1 * param_1 != 0 && ( ( ( *param_1 & 0x80 ) == 0 || ( puVar2 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar2 == (uint*)0x0 ) ) ) )) {
      local_34 = 0;
      goto LAB_0010031a;
   }

   lVar3 = *(long*)( puVar2 + 0x54c );
   if (lVar3 == 0) {
      lVar3 = ASYNC_WAIT_CTX_new();
      *(long*)( puVar2 + 0x54c ) = lVar3;
      if (lVar3 != 0) {
         if (*(long*)( puVar2 + 0x55e ) != 0) {
            iVar1 = ASYNC_WAIT_CTX_set_callback(lVar3, ssl_async_wait_ctx_cb, param_1);
            if (iVar1 == 0) goto LAB_001002f2;
            lVar3 = *(long*)( puVar2 + 0x54c );
         }

         goto LAB_001002a5;
      }

   }
 else {
      LAB_001002a5:puVar2[0x1a] = 1;
      iVar1 = ASYNC_start_job(puVar2 + 0x54a, lVar3, &local_34, param_3, param_2, 0x28);
      if (iVar1 == 2) {
         puVar2[0x1a] = 5;
      }
 else if (iVar1 < 3) {
         if (iVar1 == 0) {
            puVar2[0x1a] = 1;
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x8e4, "ssl_start_async_job");
            ERR_set_error(0x14, 0x195, 0);
         }
 else {
            if (iVar1 != 1) goto LAB_00100400;
            puVar2[0x1a] = 6;
         }

      }
 else {
         if (iVar1 == 3) {
            puVar2[0x54a] = 0;
            puVar2[0x54b] = 0;
            goto LAB_0010031a;
         }

         LAB_00100400:puVar2[0x1a] = 1;
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x8f1, "ssl_start_async_job");
         ERR_set_error(0x14, 0xc0103, 0);
      }

   }

   LAB_001002f2:local_34 = 0xffffffff;
   LAB_0010031a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_34;
}
undefined8 dup_ca_names(long *param_1, long param_2) {
   int iVar1;
   long lVar2;
   X509_NAME *pXVar3;
   int iVar4;
   lVar2 = param_2;
   if (param_2 != 0) {
      lVar2 = OPENSSL_sk_new_null();
      if (lVar2 == 0) {
         return 0;
      }

      for (iVar4 = 0; iVar1 = OPENSSL_sk_num(param_2),iVar4 < iVar1; iVar4 = iVar4 + 1) {
         pXVar3 = (X509_NAME*)OPENSSL_sk_value(param_2, iVar4);
         pXVar3 = X509_NAME_dup(pXVar3);
         if (pXVar3 == (X509_NAME*)0x0) {
            OPENSSL_sk_pop_free(lVar2, X509_NAME_free);
            return 0;
         }

         iVar1 = OPENSSL_sk_insert(lVar2, pXVar3, iVar4);
         if (iVar1 == 0) {
            X509_NAME_free(pXVar3);
            OPENSSL_sk_pop_free(lVar2, X509_NAME_free);
            return 0;
         }

      }

   }

   *param_1 = lVar2;
   return 1;
}
int ct_move_scts(long *param_1, undefined8 param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   int iVar3;
   if (*param_1 == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *param_1 = lVar2;
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x18bf, "ct_move_scts");
         ERR_set_error(0x14, 0x8000f, 0);
         lVar2 = 0;
         goto LAB_001005b1;
      }

   }

   iVar3 = 0;
   while (true) {
      lVar2 = OPENSSL_sk_pop(param_2);
      if (lVar2 == 0) {
         return iVar3;
      }

      iVar1 = SCT_set_source(lVar2, param_3);
      if (iVar1 != 1) break;
      iVar1 = OPENSSL_sk_push(*param_1, lVar2);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
   }
;
   LAB_001005b1:SCT_free(lVar2);
   return -1;
}
bool ssl_check_allowed_versions(int param_1, int param_2) {
   if (param_1 == 0x100) {
      if (param_2 == 0x100) {
         return true;
      }

      if (param_2 >> 8 == 0xfe) {
         return true;
      }

   }
 else {
      if (( param_2 == 0x100 ) || ( param_2 >> 8 == 0xfe )) {
         return param_1 >> 8 == 0xfe || param_1 == 0;
      }

      if (param_1 >> 8 != 0xfe) {
         if (param_1 != 0) {
            if (param_2 == 0) {
               param_2 = 0x304;
            }

            if (param_1 != 0x300) {
               return 0x300 < param_1 || param_2 < 0x300;
            }

         }

         return true;
      }

   }

   return param_2 == 0;
}
undefined4 ssl_session_hash(long param_1) {
   undefined4 *__src;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   __src = (undefined4*)( param_1 + 600 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(ulong*)( param_1 + 0x250 ) < 4) {
      local_14 = 0;
      __src = (undefined4*)memcpy(&local_14, __src, *(ulong*)( param_1 + 0x250 ));
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *__src;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void tlsa_free_part_0(void *param_1) {
   CRYPTO_free(*(void**)( (long)param_1 + 8 ));
   EVP_PKEY_free(*(EVP_PKEY**)( (long)param_1 + 0x18 ));
   CRYPTO_free(param_1);
   return;
}
int ssl_session_cmp(int *param_1, int *param_2) {
   int iVar1;
   if (( *param_1 == *param_2 ) && ( *(size_t*)( param_1 + 0x94 ) == *(size_t*)( param_2 + 0x94 ) )) {
      iVar1 = memcmp(param_1 + 0x96, param_2 + 0x96, *(size_t*)( param_1 + 0x94 ));
      return iVar1;
   }

   return 1;
}
undefined8 ct_strict(undefined8 param_1, long param_2) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   int iVar4;
   if (param_2 != 0) {
      iVar1 = OPENSSL_sk_num(param_2);
      if (0 < iVar1) {
         iVar4 = 0;
         do {
            uVar3 = OPENSSL_sk_value(param_2, iVar4);
            iVar2 = SCT_get_validation_status(uVar3);
            if (iVar2 == 2) {
               return 1;
            }

            iVar4 = iVar4 + 1;
         }
 while ( iVar1 != iVar4 );
      }

   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x1960, "ct_strict");
   ERR_set_error(0x14, 0xd8, 0);
   return 0;
}
void tlsa_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      CRYPTO_free(*(void**)( (long)param_1 + 8 ));
      EVP_PKEY_free(*(EVP_PKEY**)( (long)param_1 + 0x18 ));
      CRYPTO_free(param_1);
      return;
   }

   return;
}
int SSL_clear(SSL *s) {
   int iVar1;
   if (s->wbio != (BIO*)0x0) {
      /* WARNING: Could not recover jumptable at 0x0010086d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      iVar1 = ( **(code**)&s->wbio->flags )();
      return iVar1;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x23d, "SSL_clear");
   ERR_set_error(0x14, 0xbc, 0);
   return 0;
}
bool ossl_ssl_connection_reset(uint *param_1) {
   uint uVar1;
   long lVar2;
   int iVar3;
   uint *puVar4;
   if (param_1 == (uint*)0x0) {
      return false;
   }

   if (*param_1 == 0) {
      iVar3 = ssl_clear_bad_session(param_1);
      puVar4 = param_1;
   }
 else {
      if (( *param_1 & 0x80 ) == 0) {
         return false;
      }

      puVar4 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (puVar4 == (uint*)0x0) {
         return false;
      }

      iVar3 = ssl_clear_bad_session(puVar4);
   }

   if (iVar3 != 0) {
      SSL_SESSION_free(*(SSL_SESSION**)( puVar4 + 0x240 ));
      puVar4[0x240] = 0;
      puVar4[0x241] = 0;
   }

   SSL_SESSION_free(*(SSL_SESSION**)( puVar4 + 0x242 ));
   puVar4[0x242] = 0;
   puVar4[0x243] = 0;
   CRYPTO_free(*(void**)( puVar4 + 0x244 ));
   puVar4[0x244] = 0;
   puVar4[0x245] = 0;
   puVar4[0x246] = 0;
   puVar4[0x247] = 0;
   puVar4[0x234] = 0;
   puVar4[0x556] = 0;
   puVar4[0x557] = 0;
   puVar4[0x25a] = 0;
   puVar4[0x142] = 0;
   puVar4[0x21] = 0;
   if (puVar4[0x2e8] == 0) {
      ossl_statem_clear(puVar4);
      uVar1 = **(uint**)( param_1 + 6 );
      puVar4[0x1a] = 1;
      puVar4[0x12] = uVar1;
      puVar4[0x275] = uVar1;
      BUF_MEM_free(*(BUF_MEM**)( puVar4 + 0x3e ));
      puVar4[0x3e] = 0;
      puVar4[0x3f] = 0;
      puVar4[0x274] = 0;
      puVar4[0x2e9] = 0xffffffff;
      puVar4[0x2d3] = 0;
      *(undefined1(*) [16])( puVar4 + 0x2cf ) = (undefined1[16])0x0;
      EVP_MD_CTX_free(*(undefined8*)( puVar4 + 0x2f2 ));
      puVar4[0x2f2] = 0;
      puVar4[0x2f3] = 0;
      puVar4[0x151] = 0xffffffff;
      puVar4[0x152] = 0xffffffff;
      X509_free(*(X509**)( puVar4 + 0x14e ));
      *(undefined1(*) [16])( puVar4 + 0x14c ) = (undefined1[16])0x0;
      X509_VERIFY_PARAM_move_peername(*(undefined8*)( puVar4 + 0x144 ), 0);
      CRYPTO_free(*(void**)( puVar4 + 0x562 ));
      lVar2 = *(long*)( param_1 + 6 );
      for (int i = 0; i < 4; i++) {
         puVar4[( i + 1378 )] = 0;
      }

      if (lVar2 == *(long*)( param_1 + 4 )) {
         iVar3 = ( **(code**)( lVar2 + 0x30 ) )(param_1);
      }
 else {
         ( **(code**)( lVar2 + 0x38 ) )();
         *(long*)( param_1 + 6 ) = *(long*)( param_1 + 4 );
         iVar3 = ( **(code**)( *(long*)( param_1 + 4 ) + 0x28 ) )(param_1);
      }

      if (iVar3 != 0) {
         iVar3 = RECORD_LAYER_reset(puVar4 + 0x316);
         return iVar3 != 0;
      }

   }
 else {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x25c, "ossl_ssl_connection_reset");
      ERR_set_error(0x14, 0xc0103, 0);
   }

   return false;
}
int SSL_CTX_set_ssl_version(SSL_CTX *ctx, SSL_METHOD *meth) {
   stack_st_SSL_CIPHER *psVar1;
   int iVar2;
   stack_st_SSL_CIPHER *psVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   psVar1 = ctx->cipher_list;
   psVar3 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_method();
   if (( ( psVar1 != psVar3 ) && ( psVar1 = ctx->cipher_list ),psVar3 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_thread_method(),psVar1 != psVar3 )) {
      ctx->cipher_list = (stack_st_SSL_CIPHER*)meth;
      uVar4 = OSSL_default_ciphersuites();
      iVar2 = SSL_CTX_set_ciphersuites(ctx, uVar4);
      if (iVar2 == 0) {
         ERR_new();
         uVar4 = 0x2a3;
      }
 else {
         uVar4 = *(undefined8*)ctx->sid_ctx;
         uVar5 = OSSL_default_cipher_list();
         lVar6 = ssl_create_cipher_list(ctx, ctx->sessions, &ctx->cipher_list_by_id, &ctx->cert_store, uVar5, uVar4);
         if (( lVar6 != 0 ) && ( iVar2= OPENSSL_sk_num(lVar6),0 < iVar2 )) {
            return 1;
         }

         ERR_new();
         uVar4 = 0x2ac;
      }

      ERR_set_debug("ssl/ssl_lib.c", uVar4, "SSL_CTX_set_ssl_version");
      ERR_set_error(0x14, 0xe6, 0);
      return 0;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x29c, "SSL_CTX_set_ssl_version");
   ERR_set_error(0x14, 0x10a, 0);
   return 0;
}
SSL *SSL_new(SSL_CTX *ctx) {
   SSL *pSVar1;
   if (ctx == (SSL_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x2b6, "SSL_new");
      ERR_set_error(0x14, 0xc3, 0);
   }
 else {
      if (ctx->cipher_list != (stack_st_SSL_CIPHER*)0x0) {
         /* WARNING: Could not recover jumptable at 0x00100c6e. Too many branches */
         /* WARNING: Treating indirect jump as call */
         pSVar1 = (SSL*)( **(code**)&(ctx->cipher_list->stack).sorted )();
         return pSVar1;
      }

      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x2ba, "SSL_new");
      ERR_set_error(0x14, 0xe4, 0);
   }

   return (SSL*)0x0;
}
uint SSL_is_dtls(uint *param_1) {
   uint *puVar1;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   puVar1 = param_1;
   if (( *param_1 != 0 ) && ( ( ( ( *param_1 & 0x80 ) == 0 || ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() * param_1 - 0x80 < 2 ) ) || ( puVar1 == (uint*)0x0 ) ) )) {
      return 0;
   }

   return *(uint*)( *(long*)( *(long*)( puVar1 + 6 ) + 0xd8 ) + 0x50 ) >> 3 & 1;
}
uint SSL_is_tls(uint *param_1) {
   uint *puVar1;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   puVar1 = param_1;
   if (( *param_1 != 0 ) && ( ( ( ( *param_1 & 0x80 ) == 0 || ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() * param_1 - 0x80 < 2 ) ) || ( puVar1 == (uint*)0x0 ) ) )) {
      return 0;
   }

   return ( *(uint*)( *(long*)( *(long*)( puVar1 + 6 ) + 0xd8 ) + 0x50 ) >> 3 ^ 1 ) & 1;
}
uint SSL_is_quic(uint *param_1) {
   uint uVar1;
   uVar1 = 0;
   if (param_1 != (uint*)0x0) {
      uVar1 = *param_1 >> 7 & 1;
   }

   return uVar1;
}
bool SSL_up_ref(long param_1) {
   int *piVar1;
   int iVar2;
   LOCK();
   piVar1 = (int*)( param_1 + 0x20 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + 1;
   UNLOCK();
   return 1 < iVar2 + 1;
}
int SSL_CTX_set_session_id_context(SSL_CTX *ctx, uchar *sid_ctx, uint sid_ctx_len) {
   undefined8 uVar1;
   uint uVar2;
   long lVar3;
   X509_VERIFY_PARAM *pXVar4;
   ulong uVar5;
   uint uVar6;
   ulong uVar7;
   if (sid_ctx_len < 0x21) {
      pXVar4 = (X509_VERIFY_PARAM*)(ulong)sid_ctx_len;
      ctx->param = pXVar4;
      if (sid_ctx_len < 8) {
         if (( sid_ctx_len & 4 ) == 0) {
            if (( sid_ctx_len != 0 ) && ( *(uchar*)&ctx->quiet_shutdown = *sid_ctx(sid_ctx_len & 2) != 0 )) {
               *(undefined2*)( (undefined1*)( (long)&ctx->param + 6 ) + (long)pXVar4 ) = *(undefined2*)( sid_ctx + -2 + (long)pXVar4 );
            }

         }
 else {
            ctx->quiet_shutdown = *(int*)sid_ctx;
            *(undefined4*)( (undefined1*)( (long)&ctx->param + 4 ) + (long)pXVar4 ) = *(undefined4*)( sid_ctx + -4 + (long)pXVar4 );
         }

      }
 else {
         uVar1 = *(undefined8*)sid_ctx;
         ctx->quiet_shutdown = (int)uVar1;
         ctx->max_send_fragment = (int)( (ulong)uVar1 >> 0x20 );
         uVar7 = ( ulong ) & ctx->client_cert_engine & 0xfffffffffffffff8;
         *(undefined8*)( (long)&ctx->param + (long)pXVar4 ) = *(undefined8*)( sid_ctx + -8 + (long)pXVar4 );
         lVar3 = (long)ctx + ( 400 - uVar7 );
         uVar6 = sid_ctx_len + (int)lVar3 & 0xfffffff8;
         if (7 < uVar6) {
            uVar2 = 0;
            do {
               uVar5 = (ulong)uVar2;
               uVar2 = uVar2 + 8;
               *(undefined8*)( uVar7 + uVar5 ) = *(undefined8*)( sid_ctx + ( uVar5 - lVar3 ) );
            }
 while ( uVar2 < uVar6 );
         }

      }

      return 1;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x40a, "SSL_CTX_set_session_id_context");
   ERR_set_error(0x14, 0x111, 0);
   return 0;
}
int SSL_set_session_id_context(SSL *ssl, uchar *sid_ctx, uint sid_ctx_len) {
   EVP_CIPHER_CTX **ppEVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   if (ssl == (SSL*)0x0) {
      return 0;
   }

   if (( ssl->version == 0 ) || ( ( ( ssl->version & 0x80U ) != 0 && ( ssl = (SSL*)ossl_quic_obj_get0_handshake_layer() ),ssl != (SSL*)0x0 ) )) {
      if (sid_ctx_len < 0x21) {
         uVar3 = (ulong)sid_ctx_len;
         ppEVar1 = &ssl[3].enc_read_ctx;
         *(ulong*)&ssl[3].mac_flags = uVar3;
         if (sid_ctx_len < 8) {
            if (( sid_ctx_len & 4 ) == 0) {
               if (( sid_ctx_len != 0 ) && ( *(uchar*)ppEVar1 = *sid_ctx(sid_ctx_len & 2) != 0 )) {
                  *(undefined2*)( ssl[3].sid_ctx + ( uVar3 - 0x3e ) ) = *(undefined2*)( sid_ctx + ( uVar3 - 2 ) );
               }

            }
 else {
               *(undefined4*)ppEVar1 = *(undefined4*)sid_ctx;
               *(undefined4*)( ssl[3].sid_ctx + ( uVar3 - 0x40 ) ) = *(undefined4*)( sid_ctx + ( uVar3 - 4 ) );
            }

         }
 else {
            ssl[3].enc_read_ctx = *(EVP_CIPHER_CTX**)sid_ctx;
            uVar6 = ( ulong ) & ssl[3].read_hash & 0xfffffffffffffff8;
            *(undefined8*)( ssl[3].sid_ctx + ( uVar3 - 0x44 ) ) = *(undefined8*)( sid_ctx + ( uVar3 - 8 ) );
            lVar2 = (long)ppEVar1 - uVar6;
            uVar5 = sid_ctx_len + (int)lVar2 & 0xfffffff8;
            if (7 < uVar5) {
               uVar4 = 0;
               do {
                  uVar3 = (ulong)uVar4;
                  uVar4 = uVar4 + 8;
                  *(undefined8*)( uVar6 + uVar3 ) = *(undefined8*)( sid_ctx + ( uVar3 - lVar2 ) );
               }
 while ( uVar4 < uVar5 );
            }

         }

         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x41c, "SSL_set_session_id_context");
      ERR_set_error(0x14, 0x111, 0);
   }

   return 0;
}
int SSL_CTX_set_generate_session_id(SSL_CTX *param_1, GEN_SESSION_CB param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uVar1._0_4_ = param_1[1].quiet_shutdown;
   uVar1._4_4_ = param_1[1].max_send_fragment;
   iVar3 = CRYPTO_THREAD_write_lock(uVar1);
   if (iVar3 != 0) {
      *(GEN_SESSION_CB*)( param_1->tlsext_tick_key_name + 8 ) = param_2;
      uVar2._0_4_ = param_1[1].quiet_shutdown;
      uVar2._4_4_ = param_1[1].max_send_fragment;
      CRYPTO_THREAD_unlock(uVar2);
      iVar3 = 1;
   }

   return iVar3;
}
int SSL_set_generate_session_id(SSL *param_1, GEN_SESSION_CB param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   SSL *pSVar4;
   if (param_1 == (SSL*)0x0) {
      return 0;
   }

   pSVar4 = param_1;
   if (( ( param_1->version == 0 ) || ( ( ( param_1->version & 0x80U ) != 0 && ( pSVar4 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar4 != (SSL*)0x0 ) ) )) {
      *(GEN_SESSION_CB*)( pSVar4[3].sid_ctx + 4 ) = param_2;
      uVar2._0_4_ = param_1->rwstate;
      uVar2._4_4_ = param_1->in_handshake;
      CRYPTO_THREAD_unlock(uVar2);
      return 1;
   }

   return 0;
}
int SSL_has_matching_session_id(SSL *ssl, uchar *id, uint id_len) {
   int iVar1;
   uint uVar2;
   long lVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   int local_3c8[148];
   undefined8 local_178;
   undefined4 local_170[84];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (ssl != (SSL*)0x0) {
      if (ssl->version != 0) {
         if (( ssl->version & 0x80U ) == 0) goto LAB_001011c4;
         ssl = (SSL*)ossl_quic_obj_get0_handshake_layer();
      }

      if (( ssl != (SSL*)0x0 ) && ( id_len < 0x21 )) {
         local_3c8[0] = ssl->state;
         local_178 = (ulong)id_len;
         if (id_len < 8) {
            if (( id_len & 4 ) == 0) {
               if (id_len != 0) {
                  local_170[0] = CONCAT31(local_170[0]._1_3_, *id);
                  if (( id_len & 2 ) != 0) {
                     *(undefined2*)( (long)local_170 + ( local_178 - 2 ) ) = *(undefined2*)( id + ( local_178 - 2 ) );
                  }

               }

            }
 else {
               local_170[0] = *(undefined4*)id;
               *(undefined4*)( (long)local_170 + ( local_178 - 4 ) ) = *(undefined4*)( id + ( local_178 - 4 ) );
            }

         }
 else {
            *(undefined8*)( (long)local_170 + ( local_178 - 8 ) ) = *(undefined8*)( id + ( local_178 - 8 ) );
            if (7 < id_len - 1) {
               uVar2 = 0;
               do {
                  uVar4 = (ulong)uVar2;
                  uVar2 = uVar2 + 8;
                  *(undefined8*)( (long)local_170 + uVar4 ) = *(undefined8*)( id + uVar4 );
               }
 while ( uVar2 < ( id_len - 1 & 0xfffffff8 ) );
            }

         }

         iVar1 = CRYPTO_THREAD_read_lock(*(undefined8*)( *(long*)&ssl[4].mac_flags + 0x3f0 ));
         if (iVar1 != 0) {
            lVar3 = OPENSSL_LH_retrieve(*(undefined8*)( *(long*)&ssl[4].mac_flags + 0x30 ), local_3c8);
            CRYPTO_THREAD_unlock(*(undefined8*)( *(long*)&ssl[4].mac_flags + 0x3f0 ));
            uVar2 = ( uint )(lVar3 != 0);
            goto LAB_001011c6;
         }

      }

   }

   LAB_001011c4:uVar2 = 0;
   LAB_001011c6:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
int SSL_CTX_set_purpose(SSL_CTX *s, int purpose) {
   int iVar1;
   iVar1 = X509_VERIFY_PARAM_set_purpose(*(X509_VERIFY_PARAM**)s->tlsext_tick_hmac_key, purpose);
   return iVar1;
}
int SSL_set_purpose(SSL *s, int purpose) {
   int iVar1;
   long lVar2;
   if (s == (SSL*)0x0) {
      return 0;
   }

   if (s->version != 0) {
      if (( s->version & 0x80U ) != 0) {
         lVar2 = ossl_quic_obj_get0_handshake_layer();
         if (lVar2 != 0) {
            iVar1 = X509_VERIFY_PARAM_set_purpose(*(X509_VERIFY_PARAM**)( lVar2 + 0x510 ), purpose);
            return iVar1;
         }

      }

      return 0;
   }

   iVar1 = X509_VERIFY_PARAM_set_purpose((X509_VERIFY_PARAM*)s[1].tls_session_ticket_ext_cb_arg, purpose);
   return iVar1;
}
int SSL_CTX_set_trust(SSL_CTX *s, int trust) {
   int iVar1;
   iVar1 = X509_VERIFY_PARAM_set_trust(*(X509_VERIFY_PARAM**)s->tlsext_tick_hmac_key, trust);
   return iVar1;
}
int SSL_set_trust(SSL *s, int trust) {
   int iVar1;
   long lVar2;
   if (s == (SSL*)0x0) {
      return 0;
   }

   if (s->version != 0) {
      if (( s->version & 0x80U ) != 0) {
         lVar2 = ossl_quic_obj_get0_handshake_layer();
         if (lVar2 != 0) {
            iVar1 = X509_VERIFY_PARAM_set_trust(*(X509_VERIFY_PARAM**)( lVar2 + 0x510 ), trust);
            return iVar1;
         }

      }

      return 0;
   }

   iVar1 = X509_VERIFY_PARAM_set_trust((X509_VERIFY_PARAM*)s[1].tls_session_ticket_ext_cb_arg, trust);
   return iVar1;
}
undefined8 SSL_set1_host(uint *param_1, long param_2) {
   undefined8 uVar1;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (( *param_1 != 0 ) && ( ( ( *param_1 & 0x80 ) == 0 || ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 == (uint*)0x0 ) )) {
      return 0;
   }

   uVar1 = *(undefined8*)( param_1 + 0x144 );
   if (param_2 != 0) {
      uVar1 = X509_VERIFY_PARAM_set1_ip_asc(uVar1, param_2);
      if ((int)uVar1 == 1) {
         return uVar1;
      }

      uVar1 = *(undefined8*)( param_1 + 0x144 );
   }

   uVar1 = X509_VERIFY_PARAM_set1_host(uVar1, param_2, 0);
   return uVar1;
}
undefined8 SSL_add1_host(uint *param_1, char *param_2) {
   ASN1_OCTET_STRING *a;
   void *ptr;
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

   if (( param_2 != (char*)0x0 ) && ( a = a2i_IPADDRESS(param_2) ),a != (ASN1_OCTET_STRING*)0x0) {
      ASN1_OCTET_STRING_free(a);
      ptr = (void*)X509_VERIFY_PARAM_get1_ip_asc(*(undefined8*)( param_1 + 0x144 ));
      if (ptr != (void*)0x0) {
         CRYPTO_free(ptr);
         return 0;
      }

      uVar1 = X509_VERIFY_PARAM_set1_ip_asc(*(undefined8*)( param_1 + 0x144 ), param_2);
      return uVar1;
   }

   uVar1 = X509_VERIFY_PARAM_add1_host(*(undefined8*)( param_1 + 0x144 ), param_2, 0);
   return uVar1;
}
void SSL_set_hostflags(uint *param_1, undefined4 param_2) {
   long lVar1;
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            X509_VERIFY_PARAM_set_hostflags(*(undefined8*)( lVar1 + 0x510 ), param_2);
            return;
         }

      }

      return;
   }

   X509_VERIFY_PARAM_set_hostflags(*(undefined8*)( param_1 + 0x144 ));
   return;
}
undefined8 SSL_get0_peername(uint *param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         uVar2 = X509_VERIFY_PARAM_get0_peername(*(undefined8*)( param_1 + 0x144 ));
         return uVar2;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            uVar2 = X509_VERIFY_PARAM_get0_peername(*(undefined8*)( lVar1 + 0x510 ));
            return uVar2;
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_CTX_dane_enable(long param_1) {
   void *ptr;
   void *ptr_00;
   char *pcVar1;
   EVP_MD *pEVar2;
   undefined8 uVar3;
   if (*(long*)( param_1 + 0x3c0 ) != 0) {
      return 1;
   }

   ptr = (void*)CRYPTO_zalloc(0x18, "ssl/ssl_lib.c", 0x7a);
   ptr_00 = (void*)CRYPTO_zalloc(3, "ssl/ssl_lib.c", 0x7b);
   if (( ptr_00 == (void*)0x0 ) || ( ptr == (void*)0x0 )) {
      CRYPTO_free(ptr_00);
      CRYPTO_free(ptr);
      uVar3 = 0;
   }
 else {
      pcVar1 = OBJ_nid2sn(0x2a0);
      pEVar2 = EVP_get_digestbyname(pcVar1);
      if (pEVar2 != (EVP_MD*)0x0) {
         *(EVP_MD**)( (long)ptr + 8 ) = pEVar2;
         *(undefined1*)( (long)ptr_00 + 1 ) = 1;
      }

      pcVar1 = OBJ_nid2sn(0x2a2);
      pEVar2 = EVP_get_digestbyname(pcVar1);
      if (pEVar2 != (EVP_MD*)0x0) {
         *(EVP_MD**)( (long)ptr + 0x10 ) = pEVar2;
         *(undefined1*)( (long)ptr_00 + 2 ) = 2;
      }

      *(void**)( param_1 + 0x3c0 ) = ptr;
      uVar3 = 1;
      *(void**)( param_1 + 0x3c8 ) = ptr_00;
      *(undefined1*)( param_1 + 0x3d0 ) = 2;
   }

   return uVar3;
}
void SSL_CTX_dane_set_flags(long param_1, ulong param_2) {
   *(ulong*)( param_1 + 0x3d8 ) = param_2 | *(ulong*)( param_1 + 0x3d8 );
   return;
}
void SSL_CTX_dane_clear_flags(long param_1, ulong param_2) {
   *(ulong*)( param_1 + 0x3d8 ) = ~param_2 & *(ulong*)( param_1 + 0x3d8 );
   return;
}
ulong SSL_dane_set_flags(uint *param_1, ulong param_2) {
   ulong uVar1;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_001016ee;
      }

      return 0;
   }

   LAB_001016ee:uVar1 = *(ulong*)( param_1 + 0x154 );
   *(ulong*)( param_1 + 0x154 ) = param_2 | uVar1;
   return uVar1;
}
ulong SSL_dane_clear_flags(uint *param_1, ulong param_2) {
   ulong uVar1;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_0010174e;
      }

      return 0;
   }

   LAB_0010174e:uVar1 = *(ulong*)( param_1 + 0x154 );
   *(ulong*)( param_1 + 0x154 ) = ~param_2 & uVar1;
   return uVar1;
}
uint SSL_get0_dane_authority(uint *param_1, undefined8 *param_2, undefined8 *param_3) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   if (param_1 == (uint*)0x0) {
      return 0xffffffff;
   }

   if (( ( ( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) ) ) ) && ( iVar2 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x148 )) ),0 < iVar2) {
      lVar1 = *(long*)( param_1 + 0x14c );
      if (lVar1 != 0) {
         if (param_2 != (undefined8*)0x0) {
            *param_2 = *(undefined8*)( param_1 + 0x14e );
         }

         if (param_3 != (undefined8*)0x0) {
            uVar3 = 0;
            if (*(long*)( param_1 + 0x14e ) == 0) {
               uVar3 = *(undefined8*)( lVar1 + 0x18 );
            }

            *param_3 = uVar3;
         }

      }

      return param_1[0x151];
   }

   return 0xffffffff;
}
uint SSL_get0_dane_tlsa(uint *param_1, undefined1 *param_2, undefined1 *param_3, undefined1 *param_4, undefined8 *param_5, undefined8 *param_6) {
   int iVar1;
   if (param_1 == (uint*)0x0) {
      return 0xffffffff;
   }

   if (( ( ( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) ) ) ) && ( iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x148 )) ),0 < iVar1) {
      if (*(undefined1**)( param_1 + 0x14c ) != (undefined1*)0x0) {
         if (param_2 != (undefined1*)0x0) {
            *param_2 = **(undefined1**)( param_1 + 0x14c );
         }

         if (param_3 != (undefined1*)0x0) {
            *param_3 = *(undefined1*)( *(long*)( param_1 + 0x14c ) + 1 );
         }

         if (param_4 != (undefined1*)0x0) {
            *param_4 = *(undefined1*)( *(long*)( param_1 + 0x14c ) + 2 );
         }

         if (param_5 != (undefined8*)0x0) {
            *param_5 = *(undefined8*)( *(long*)( param_1 + 0x14c ) + 8 );
         }

         if (param_6 != (undefined8*)0x0) {
            *param_6 = *(undefined8*)( *(long*)( param_1 + 0x14c ) + 0x10 );
         }

      }

      return param_1[0x151];
   }

   return 0xffffffff;
}
uint *SSL_get0_dane(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return param_1 + 0x146;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return (uint*)( lVar1 + 0x518 );
         }

         return (uint*)0x0;
      }

   }

   return (uint*)0x0;
}
undefined8 SSL_dane_tlsa_add(uint *param_1, uint param_2, byte param_3, byte param_4, uchar *param_5, size_t param_6) {
   byte bVar1;
   int iVar2;
   int iVar3;
   byte *ptr;
   void *__dest;
   X509 *pXVar4;
   EVP_PKEY *pEVar5;
   byte *pbVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   uchar *local_58;
   X509 *local_50;
   EVP_PKEY *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (uint*)0x0) {
      bVar1 = (byte)param_2;
      if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) )) {
         if (*(long*)( param_1 + 0x148 ) == 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x114, "dane_tlsa_add");
            ERR_set_error(0x14, 0xaf, 0);
            goto LAB_00101e50;
         }

         iVar3 = (int)param_6;
         if (( iVar3 < 0 ) || ( param_6 != (long)iVar3 )) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x119, "dane_tlsa_add");
            ERR_set_error(0x14, 0xbd, 0);
         }
 else if (bVar1 < 4) {
            if (param_3 < 2) {
               if (param_4 == 0) {
                  LAB_00101b30:if (param_5 != (uchar*)0x0) {
                     ptr = (byte*)CRYPTO_zalloc(0x20, "ssl/ssl_lib.c", 0x13b);
                     if (ptr != (byte*)0x0) {
                        ptr[2] = param_4;
                        *ptr = bVar1;
                        ptr[1] = param_3;
                        __dest = CRYPTO_malloc(iVar3, "ssl/ssl_lib.c", 0x141);
                        *(void**)( ptr + 8 ) = __dest;
                        if (__dest == (void*)0x0) {
                           tlsa_free_part_0(ptr);
                        }
 else {
                           memcpy(__dest, param_5, param_6);
                           *(size_t*)( ptr + 0x10 ) = param_6;
                           if (param_4 == 0) {
                              local_50 = (X509*)0x0;
                              local_48 = (EVP_PKEY*)0x0;
                              local_58 = param_5;
                              if (param_3 != 1) {
                                 pXVar4 = d2i_X509(&local_50, &local_58, param_6);
                                 if (( ( pXVar4 == (X509*)0x0 ) || ( local_58 < param_5 ) ) || ( (long)local_58 - (long)param_5 != param_6 )) {
                                    X509_free(local_50);
                                    CRYPTO_free(*(void**)( ptr + 8 ));
                                    EVP_PKEY_free(*(EVP_PKEY**)( ptr + 0x18 ));
                                    CRYPTO_free(ptr);
                                    ERR_new();
                                    uVar8 = 0x155;
                                 }
 else {
                                    lVar7 = X509_get0_pubkey(local_50);
                                    if (lVar7 != 0) {
                                       if (( 5U >> ( param_2 & 0x1f ) & 1 ) == 0) {
                                          X509_free(local_50);
                                          goto LAB_00101d30;
                                       }

                                       lVar7 = *(long*)( param_1 + 0x14a );
                                       if (lVar7 == 0) {
                                          lVar7 = OPENSSL_sk_new_null();
                                          *(long*)( param_1 + 0x14a ) = lVar7;
                                          if (lVar7 != 0) goto LAB_00102017;
                                       }
 else {
                                          LAB_00102017:iVar3 = OPENSSL_sk_push(lVar7, local_50);
                                          if (iVar3 != 0) goto LAB_00101d30;
                                       }

                                       ERR_new();
                                       ERR_set_debug("ssl/ssl_lib.c", 0x17a, "dane_tlsa_add");
                                       ERR_set_error(0x14, 0x8000f, 0);
                                       X509_free(local_50);
                                       CRYPTO_free(*(void**)( ptr + 8 ));
                                       EVP_PKEY_free(*(EVP_PKEY**)( ptr + 0x18 ));
                                       CRYPTO_free(ptr);
                                       goto LAB_00101e50;
                                    }

                                    X509_free(local_50);
                                    tlsa_free_part_0(ptr);
                                    ERR_new();
                                    uVar8 = 0x15b;
                                 }

                                 ERR_set_debug("ssl/ssl_lib.c", uVar8, "dane_tlsa_add");
                                 ERR_set_error(0x14, 0xb4, 0);
                                 goto LAB_001019ef;
                              }

                              pEVar5 = d2i_PUBKEY(&local_48, &local_58, param_6);
                              if (( ( pEVar5 == (EVP_PKEY*)0x0 ) || ( local_58 < param_5 ) ) || ( (long)local_58 - (long)param_5 != param_6 )) {
                                 EVP_PKEY_free(local_48);
                                 CRYPTO_free(*(void**)( ptr + 8 ));
                                 EVP_PKEY_free(*(EVP_PKEY**)( ptr + 0x18 ));
                                 CRYPTO_free(ptr);
                                 ERR_new();
                                 ERR_set_debug("ssl/ssl_lib.c", 0x186, "dane_tlsa_add");
                                 ERR_set_error(0x14, 0xc9, 0);
                                 goto LAB_001019ef;
                              }

                              if (bVar1 == 2) {
                                 *(EVP_PKEY**)( ptr + 0x18 ) = local_48;
                              }
 else {
                                 EVP_PKEY_free(local_48);
                              }

                           }

                           LAB_00101d30:iVar2 = 0;
                           iVar3 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x148 ));
                           if (0 < iVar3) {
                              do {
                                 pbVar6 = (byte*)OPENSSL_sk_value(*(undefined8*)( param_1 + 0x148 ), iVar2);
                                 if (( *pbVar6 <= bVar1 ) && ( ( *pbVar6 < bVar1 || ( ( pbVar6[1] <= param_3 && ( ( pbVar6[1] < param_3 || ( *(byte*)( *(long*)( *(long*)( param_1 + 0x146 ) + 8 ) + (ulong)pbVar6[2] ) <= *(byte*)( *(long*)( *(long*)( param_1 + 0x146 ) + 8 ) + (ulong)param_4 ) ) ) ) ) ) ) )) break;
                                 iVar2 = iVar2 + 1;
                              }
 while ( iVar3 != iVar2 );
                           }

                           iVar3 = OPENSSL_sk_insert(*(undefined8*)( param_1 + 0x148 ), ptr, iVar2);
                           if (iVar3 != 0) {
                              param_1[0x150] = param_1[0x150] | 1 << ( bVar1 & 0x1f );
                              uVar8 = 1;
                              goto LAB_001019f1;
                           }

                           CRYPTO_free(*(void**)( ptr + 8 ));
                           EVP_PKEY_free(*(EVP_PKEY**)( ptr + 0x18 ));
                           CRYPTO_free(ptr);
                           ERR_new();
                           ERR_set_debug("ssl/ssl_lib.c", 0x1b8, "dane_tlsa_add");
                           ERR_set_error(0x14, 0x8000f, 0);
                        }

                     }

                     LAB_00101e50:uVar8 = 0xffffffff;
                     goto LAB_001019f1;
                  }

                  ERR_new();
                  ERR_set_debug("ssl/ssl_lib.c", 0x137, "dane_tlsa_add");
                  ERR_set_error(0x14, 0xcb, 0);
               }
 else if (( *(byte*)( *(long**)( param_1 + 0x146 ) + 2 ) < param_4 ) || ( *(long*)( **(long**)( param_1 + 0x146 ) + (ulong)param_4 * 8 ) == 0 )) {
                  ERR_new();
                  ERR_set_debug("ssl/ssl_lib.c", 0x12a, "dane_tlsa_add");
                  ERR_set_error(0x14, 200, 0);
               }
 else {
                  iVar2 = EVP_MD_get_size();
                  if (( 0 < iVar2 ) && ( param_6 == (long)iVar2 )) goto LAB_00101b30;
                  ERR_new();
                  ERR_set_debug("ssl/ssl_lib.c", 0x132, "dane_tlsa_add");
                  ERR_set_error(0x14, 0xc0, 0);
               }

            }
 else {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0x123, "dane_tlsa_add");
               ERR_set_error(0x14, 0xca, 0);
            }

         }
 else {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x11e, "dane_tlsa_add");
            ERR_set_error(0x14, 0xb8, 0);
         }

      }

   }

   LAB_001019ef:uVar8 = 0;
   LAB_001019f1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
undefined8 SSL_CTX_dane_mtype_set(long param_1, long param_2, byte param_3, undefined1 param_4) {
   size_t __n;
   byte bVar1;
   uint uVar2;
   void *pvVar3;
   void *pvVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   ulong uVar8;
   if (( param_3 == 0 ) && ( param_2 != 0 )) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xdd, "dane_mtype_set");
      ERR_set_error(0x14, 0xad, 0);
      return 0;
   }

   pvVar3 = *(void**)( param_1 + 0x3c0 );
   if (*(byte*)( param_1 + 0x3d0 ) < param_3) {
      uVar2 = (uint)param_3;
      pvVar3 = CRYPTO_realloc(pvVar3, ( uVar2 + 1 ) * 8, "ssl/ssl_lib.c", 0xe6);
      if (pvVar3 != (void*)0x0) {
         *(void**)( param_1 + 0x3c0 ) = pvVar3;
         pvVar4 = CRYPTO_realloc(*(void**)( param_1 + 0x3c8 ), uVar2 + 1, "ssl/ssl_lib.c", 0xeb);
         if (pvVar4 != (void*)0x0) {
            bVar1 = *(byte*)( param_1 + 0x3d0 );
            *(void**)( param_1 + 0x3c8 ) = pvVar4;
            uVar7 = bVar1 + 1;
            if (uVar7 < uVar2) {
               lVar5 = (ulong)bVar1 + 1;
               uVar8 = ( ulong )(( uVar2 - bVar1 ) - 2);
               lVar6 = uVar8 + 2 + (ulong)bVar1;
               if (( (void*)( (long)pvVar4 + lVar5 ) < (void*)( (long)pvVar3 + lVar6 * 8 ) ) && ( (void*)( (long)pvVar3 + lVar5 * 8 ) < (void*)( lVar6 + (long)pvVar4 ) )) {
                  lVar6 = (long)(int)uVar7;
                  do {
                     *(undefined8*)( (long)pvVar3 + lVar6 * 8 ) = 0;
                     *(undefined1*)( (long)pvVar4 + lVar6 ) = 0;
                     lVar6 = lVar6 + 1;
                  }
 while ( (int)lVar6 < (int)uVar2 );
               }
 else {
                  __n = uVar8 + 1;
                  memset((void*)( (long)pvVar3 + (long)(int)uVar7 * 8 ), 0, __n * 8);
                  memset((void*)( (long)pvVar4 + (long)(int)uVar7 ), 0, __n);
               }

               pvVar4 = *(void**)( param_1 + 0x3c8 );
            }

            *(byte*)( param_1 + 0x3d0 ) = param_3;
            pvVar3 = *(void**)( param_1 + 0x3c0 );
            goto LAB_00102154;
         }

      }

      return 0xffffffff;
   }

   pvVar4 = *(void**)( param_1 + 0x3c8 );
   LAB_00102154:if (param_2 == 0) {
      param_4 = 0;
   }

   *(long*)( (long)pvVar3 + (ulong)param_3 * 8 ) = param_2;
   *(undefined1*)( (long)pvVar4 + (ulong)param_3 ) = param_4;
   return 1;
}
int SSL_CTX_set1_param(SSL_CTX *ctx, X509_VERIFY_PARAM *vpm) {
   int iVar1;
   iVar1 = X509_VERIFY_PARAM_set1(*(X509_VERIFY_PARAM**)ctx->tlsext_tick_hmac_key, vpm);
   return iVar1;
}
int SSL_set1_param(SSL *ssl, X509_VERIFY_PARAM *vpm) {
   int iVar1;
   long lVar2;
   if (ssl == (SSL*)0x0) {
      return 0;
   }

   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) != 0) {
         lVar2 = ossl_quic_obj_get0_handshake_layer();
         if (lVar2 != 0) {
            iVar1 = X509_VERIFY_PARAM_set1(*(X509_VERIFY_PARAM**)( lVar2 + 0x510 ), vpm);
            return iVar1;
         }

      }

      return 0;
   }

   iVar1 = X509_VERIFY_PARAM_set1((X509_VERIFY_PARAM*)ssl[1].tls_session_ticket_ext_cb_arg, vpm);
   return iVar1;
}
undefined8 SSL_CTX_get0_param(long param_1) {
   return *(undefined8*)( param_1 + 0x1c0 );
}
undefined8 SSL_get0_param(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0x144 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x510 );
         }

         return 0;
      }

   }

   return 0;
}
void SSL_certs_clear(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         ssl_cert_clear_certs(*(undefined8*)( param_1 + 0x220 ));
         return;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            ssl_cert_clear_certs(*(undefined8*)( lVar1 + 0x880 ));
            return;
         }

         return;
      }

   }

   return;
}
void SSL_set0_rbio(uint *param_1, undefined8 param_2) {
   uint *puVar1;
   if (param_1 == (uint*)0x0) {
      return;
   }

   puVar1 = param_1;
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (( *param_1 & 0x80 ) != 0) {
            ossl_quic_conn_set0_net_rbio(param_1, param_2);
            return;
         }

         if (puVar1 != (uint*)0x0) goto LAB_001024a2;
      }

      return;
   }

   LAB_001024a2:BIO_free_all(*(BIO**)( puVar1 + 0x14 ));
   *(undefined8*)( puVar1 + 0x14 ) = param_2;
   /* WARNING: Could not recover jumptable at 0x001024ca. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( puVar1 + 0x31c ) + 0x58 ) )(*(undefined8*)( puVar1 + 800 ), param_2);
   return;
}
void SSL_set0_wbio(uint *param_1, BIO *param_2) {
   uint *puVar1;
   BIO *b;
   if (param_1 == (uint*)0x0) {
      return;
   }

   puVar1 = param_1;
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (( *param_1 & 0x80 ) != 0) {
            ossl_quic_conn_set0_net_wbio(param_1, param_2);
            return;
         }

         if (puVar1 != (uint*)0x0) goto LAB_00102538;
      }

      return;
   }

   LAB_00102538:b = *(BIO**)( puVar1 + 0x16 );
   if (*(long*)( puVar1 + 0x18 ) != 0) {
      b = BIO_pop(b);
      *(BIO**)( puVar1 + 0x16 ) = b;
   }

   BIO_free_all(b);
   *(BIO**)( puVar1 + 0x16 ) = param_2;
   if (*(BIO**)( puVar1 + 0x18 ) != (BIO*)0x0) {
      param_2 = BIO_push(*(BIO**)( puVar1 + 0x18 ), param_2);
      *(BIO**)( puVar1 + 0x16 ) = param_2;
   }

   /* WARNING: Could not recover jumptable at 0x0010258b. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( puVar1 + 0x31e ) + 0x58 ) )(*(undefined8*)( puVar1 + 0x322 ), param_2);
   return;
}
BIO *SSL_get_rbio(SSL *s) {
   long lVar1;
   BIO *pBVar2;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         return (BIO*)s->init_buf;
      }

      if (( s->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( s->version & 0x80 ) != 0) {
            pBVar2 = (BIO*)ossl_quic_conn_get_net_rbio();
            return pBVar2;
         }

         if (lVar1 != 0) {
            return *(BIO**)( lVar1 + 0x50 );
         }

         return (BIO*)0x0;
      }

   }

   return (BIO*)0x0;
}
BIO *SSL_get_wbio(SSL *s) {
   SSL *pSVar1;
   BIO *pBVar2;
   if (s == (SSL*)0x0) {
      return (BIO*)0x0;
   }

   pSVar1 = s;
   if (s->version != 0) {
      if (( s->version & 0x80U ) != 0) {
         pSVar1 = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (( s->version & 0x80 ) != 0) {
            pBVar2 = (BIO*)ossl_quic_conn_get_net_wbio(s);
            return pBVar2;
         }

         if (pSVar1 != (SSL*)0x0) goto LAB_00102652;
      }

      return (BIO*)0x0;
   }

   LAB_00102652:if (*(BIO**)&pSVar1->init_num != (BIO*)0x0) {
      pBVar2 = BIO_next(*(BIO**)&pSVar1->init_num);
      return pBVar2;
   }

   return (BIO*)pSVar1->init_msg;
}
void SSL_set_bio(SSL *s, BIO *rbio, BIO *wbio) {
   int iVar1;
   BIO *pBVar2;
   BIO *pBVar3;
   pBVar2 = SSL_get_rbio(s);
   if (( rbio == pBVar2 ) && ( pBVar2 = wbio == pBVar2 )) {
      return;
   }

   if (( ( rbio != (BIO*)0x0 ) && ( rbio == wbio ) ) && ( iVar1 = iVar1 == 0 )) {
      return;
   }

   pBVar2 = SSL_get_rbio(s);
   if (rbio != pBVar2) {
      pBVar2 = SSL_get_wbio(s);
      if (wbio == pBVar2) {
         pBVar2 = SSL_get_rbio(s);
         pBVar3 = SSL_get_wbio(s);
         if (pBVar2 != pBVar3) {
            SSL_set0_rbio(s, rbio);
            return;
         }

      }

      SSL_set0_rbio(s, rbio);
   }

   SSL_set0_wbio(s, wbio);
   return;
}
int SSL_get_rfd(SSL *s) {
   BIO *pBVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = -1;
   pBVar1 = SSL_get_rbio(s);
   pBVar1 = BIO_find_type(pBVar1, 0x100);
   if (pBVar1 != (BIO*)0x0) {
      BIO_ctrl(pBVar1, 0x69, 0, &local_14);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_14;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int SSL_get_fd(SSL *s) {
   int iVar1;
   iVar1 = SSL_get_rfd(s);
   return iVar1;
}
int SSL_get_wfd(SSL *s) {
   BIO *pBVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = -1;
   pBVar1 = SSL_get_wbio(s);
   pBVar1 = BIO_find_type(pBVar1, 0x100);
   if (pBVar1 != (BIO*)0x0) {
      BIO_ctrl(pBVar1, 0x69, 0, &local_14);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_14;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int SSL_set_fd(SSL *s, int fd) {
   BIO_METHOD *type;
   BIO *bp;
   if (s->version == 0x81) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x6b2, "SSL_set_fd");
      ERR_set_error(0x14, 0x164, 0);
   }
 else {
      if (( s->version & 0x80U ) == 0) {
         type = BIO_s_socket();
      }
 else {
         type = BIO_s_datagram();
      }

      bp = BIO_new(type);
      if (bp != (BIO*)0x0) {
         BIO_int_ctrl(bp, 0x68, 0, fd);
         SSL_set_bio(s, bp, bp);
         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x6b9, "SSL_set_fd");
      ERR_set_error(0x14, 0x80007, 0);
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int SSL_set_wfd(SSL *s, int fd) {
   int iVar1;
   uint uVar2;
   int iVar3;
   BIO *b;
   BIO_METHOD *type;
   long lVar4;
   b = SSL_get_rbio(s);
   uVar2 = _DAT_00000000;
   if (s == (SSL*)0x0) {
      LAB_001029e7:iVar3 = 0x505;
   }
 else {
      uVar2 = s->version;
      iVar3 = 0x515;
      if (( uVar2 & 0x80 ) == 0) goto LAB_001029e7;
   }

   if (uVar2 == 0x81) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x6d2, "SSL_set_wfd");
      ERR_set_error(0x14, 0x164, 0);
   }
 else {
      if (b != (BIO*)0x0) {
         iVar1 = BIO_method_type(b);
         if (( iVar1 == iVar3 ) && ( lVar4 = BIO_ctrl(b, 0x69, 0, (void*)0x0) ),fd == (int)lVar4) {
            iVar3 = BIO_up_ref(b);
            if (iVar3 == 0) {
               return 0;
            }

            goto LAB_001029c3;
         }

         uVar2 = s->version;
      }

      if (( uVar2 & 0x80 ) == 0) {
         type = BIO_s_socket();
      }
 else {
         type = BIO_s_datagram();
      }

      b = BIO_new(type);
      if (b != (BIO*)0x0) {
         BIO_int_ctrl(b, 0x68, 0, fd);
         LAB_001029c3:SSL_set0_wbio(s, b);
         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x6db, "SSL_set_wfd");
      ERR_set_error(0x14, 0x80007, 0);
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int SSL_set_rfd(SSL *s, int fd) {
   int iVar1;
   uint uVar2;
   int iVar3;
   BIO *b;
   BIO_METHOD *type;
   long lVar4;
   b = SSL_get_wbio(s);
   uVar2 = _DAT_00000000;
   if (s == (SSL*)0x0) {
      LAB_00102b67:iVar3 = 0x505;
   }
 else {
      uVar2 = s->version;
      iVar3 = 0x515;
      if (( uVar2 & 0x80 ) == 0) goto LAB_00102b67;
   }

   if (uVar2 == 0x81) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x6f7, "SSL_set_rfd");
      ERR_set_error(0x14, 0x164, 0);
   }
 else {
      if (b != (BIO*)0x0) {
         iVar1 = BIO_method_type(b);
         if (( iVar1 == iVar3 ) && ( lVar4 = BIO_ctrl(b, 0x69, 0, (void*)0x0) ),fd == (int)lVar4) {
            iVar3 = BIO_up_ref(b);
            if (iVar3 == 0) {
               return 0;
            }

            goto LAB_00102b43;
         }

         uVar2 = s->version;
      }

      if (( uVar2 & 0x80 ) == 0) {
         type = BIO_s_socket();
      }
 else {
         type = BIO_s_datagram();
      }

      b = BIO_new(type);
      if (b != (BIO*)0x0) {
         BIO_int_ctrl(b, 0x68, 0, fd);
         LAB_00102b43:SSL_set0_rbio(s, b);
         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x700, "SSL_set_rfd");
      ERR_set_error(0x14, 0x80007, 0);
   }

   return 0;
}
size_t SSL_get_finished(SSL *s, void *buf, size_t count) {
   void *pvVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         LAB_00102c7d:pvVar1 = s->tls_session_ticket_ext_cb_arg;
         if (pvVar1 <= count) {
            count = (size_t)pvVar1;
         }

         memcpy(buf, &s->tlsext_debug_arg, count);
         return (size_t)pvVar1;
      }

      if (( s->version & 0x80U ) != 0) {
         s = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (s != (SSL*)0x0) goto LAB_00102c7d;
      }

   }

   return 0;
}
size_t SSL_get_peer_finished(SSL *s, void *buf, size_t count) {
   ulong uVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         LAB_00102ced:uVar1._0_4_ = s[1].server;
         uVar1._4_4_ = s[1].new_session;
         if (uVar1 <= count) {
            count = uVar1;
         }

         memcpy(buf, &s->tls_session_secret_cb, count);
         return uVar1;
      }

      if (( s->version & 0x80U ) != 0) {
         s = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (s != (SSL*)0x0) goto LAB_00102ced;
      }

   }

   return 0;
}
int SSL_get_verify_mode(SSL *s) {
   long lVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         return s[3].verify_mode;
      }

      if (( s->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(int*)( lVar1 + 0x950 );
         }

         return 0;
      }

   }

   return 0;
}
int SSL_get_verify_depth(SSL *s) {
   int iVar1;
   long lVar2;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         iVar1 = X509_VERIFY_PARAM_get_depth((X509_VERIFY_PARAM*)s[1].tls_session_ticket_ext_cb_arg);
         return iVar1;
      }

      if (( s->version & 0x80U ) != 0) {
         lVar2 = ossl_quic_obj_get0_handshake_layer();
         if (lVar2 != 0) {
            iVar1 = X509_VERIFY_PARAM_get_depth(*(X509_VERIFY_PARAM**)( lVar2 + 0x510 ));
            return iVar1;
         }

         return 0;
      }

   }

   return 0;
}
int SSL_get_verify_callback(int param_1, X509_STORE_CTX *param_2) {
   long lVar1;
   undefined4 in_register_0000003c;
   if (CONCAT44(in_register_0000003c, param_1) != 0) {
      if (*(uint*)CONCAT44(in_register_0000003c, param_1) == 0) {
         return (int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x958 );
      }

      if (( *(uint*)CONCAT44(in_register_0000003c, param_1) & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return (int)*(undefined8*)( lVar1 + 0x958 );
         }

         return 0;
      }

   }

   return 0;
}
int SSL_CTX_get_verify_mode(SSL_CTX *ctx) {
   return *(int*)&ctx->generate_session_id;
}
int SSL_CTX_get_verify_depth(SSL_CTX *ctx) {
   int iVar1;
   iVar1 = X509_VERIFY_PARAM_get_depth(*(X509_VERIFY_PARAM**)ctx->tlsext_tick_hmac_key);
   return iVar1;
}
int SSL_CTX_get_verify_callback(int param_1, X509_STORE_CTX *param_2) {
   undefined4 in_register_0000003c;
   return (int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x1b0 );
}
void SSL_set_verify(SSL *s, int mode, callback *callback) {
   if (s == (SSL*)0x0) {
      return;
   }

   if (s->version != 0) {
      if (( s->version & 0x80U ) == 0) {
         return;
      }

      s = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (s == (SSL*)0x0) {
         return;
      }

   }

   s[3].verify_mode = mode;
   if (callback != (callback*)0x0) {
      s[3].verify_callback = (_func_3151*)callback;
   }

   return;
}
void SSL_set_verify_depth(SSL *s, int depth) {
   long lVar1;
   if (s == (SSL*)0x0) {
      return;
   }

   if (s->version != 0) {
      if (( s->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            X509_VERIFY_PARAM_set_depth(*(X509_VERIFY_PARAM**)( lVar1 + 0x510 ), depth);
            return;
         }

      }

      return;
   }

   X509_VERIFY_PARAM_set_depth((X509_VERIFY_PARAM*)s[1].tls_session_ticket_ext_cb_arg, depth);
   return;
}
void SSL_set_read_ahead(SSL *s, int yes) {
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( s != (SSL*)0x0 ) && ( s->version == 0 )) {
      *(int*)&s[4].tlsext_debug_arg = yes;
      OSSL_PARAM_construct_int(&local_a8, "read_ahead", &s[4].tlsext_debug_arg);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_30 = local_88;
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_40 = local_98;
      uStack_38 = uStack_90;
      ( **(code**)( s[4].options + 0x90 ) )(s[4].max_cert_list, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int SSL_get_read_ahead(SSL *s) {
   if (( s != (SSL*)0x0 ) && ( s->version == 0 )) {
      return *(int*)&s[4].tlsext_debug_arg;
   }

   return 0;
}
int SSL_pending(SSL *s) {
   ulong uVar1;
   uVar1 = ( **(code**)&s->wbio[1].references )();
   if (0x7fffffff < uVar1) {
      uVar1 = 0x7fffffff;
   }

   return (int)uVar1;
}
undefined8 SSL_has_pending(uint *param_1) {
   code *pcVar1;
   int iVar2;
   pitem *ppVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   pitem *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (uint*)0x0) {
      if (( *param_1 & 0x80 ) == 0) {
         if (*param_1 != 0) goto SSL_has_pending_cold;
         if (( *(byte*)( *(long*)( *(long*)( param_1 + 6 ) + 0xd8 ) + 0x50 ) & 8 ) == 0) {
            LAB_001030e0:iVar2 = RECORD_LAYER_processed_read_pending(param_1 + 0x316);
            if (iVar2 == 0) {
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar4 = RECORD_LAYER_read_pending(param_1 + 0x316);
                  return uVar4;
               }

               goto LAB_0010314b;
            }

         }
 else {
            local_28 = pqueue_iterator(*(pqueue*)( *(long*)( param_1 + 0x338 ) + 8 ));
            do {
               ppVar3 = pqueue_next(&local_28);
               if (ppVar3 == (pitem*)0x0) goto LAB_001030e0;
            }
 while ( *(long*)( (long)ppVar3->data + 0x20 ) == 0 );
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = ossl_quic_has_pending();
         return uVar4;
      }

      LAB_0010314b:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   SSL_has_pending_cold:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
undefined8 SSL_get0_peer_certificate(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (*(long*)( param_1 + 0x240 ) != 0) {
            return *(undefined8*)( *(long*)( param_1 + 0x240 ) + 0x2c0 );
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x900 ) != 0 )) {
            return *(undefined8*)( *(long*)( lVar1 + 0x900 ) + 0x2c0 );
         }

         return 0;
      }

   }

   return 0;
}
long SSL_get1_peer_certificate(void) {
   int iVar1;
   long lVar2;
   lVar2 = SSL_get0_peer_certificate();
   if (lVar2 != 0) {
      iVar1 = X509_up_ref(lVar2);
      if (iVar1 != 0) {
         return lVar2;
      }

   }

   return 0;
}
stack_st_X509 *SSL_get_peer_cert_chain(SSL *s) {
   long lVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         if (s[3].write_hash != (EVP_MD_CTX*)0x0) {
            return (stack_st_X509*)s[3].write_hash[0xe].update;
         }

      }
 else if (( s->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x900 ) != 0 )) {
            return *(stack_st_X509**)( *(long*)( lVar1 + 0x900 ) + 0x2c8 );
         }

         return (stack_st_X509*)0x0;
      }

   }

   return (stack_st_X509*)0x0;
}
void SSL_copy_session_id(SSL *to, SSL *from) {
   int *piVar1;
   uint sid_ctx_len;
   BIO *pBVar2;
   undefined4 uVar3;
   int iVar4;
   SSL_SESSION *session;
   if (to == (SSL*)0x0) {
      return;
   }

   if (( ( to->version == 0 ) && ( from != (SSL*)0x0 ) ) && ( from->version == 0 )) {
      session = SSL_get_session(from);
      iVar4 = SSL_set_session(to, session);
      if (iVar4 != 0) {
         if (to->wbio != from->wbio) {
            ( *(code*)to->wbio->next_bio )(to);
            pBVar2 = from->wbio;
            to->wbio = pBVar2;
            iVar4 = ( **(code**)&pBVar2->num )(to);
            if (iVar4 == 0) {
               return;
            }

         }

         LOCK();
         piVar1 = (int*)( *(long*)&from[3].packet_length + 0xb0 );
         *piVar1 = *piVar1 + 1;
         UNLOCK();
         ssl_cert_free(*(undefined8*)&to[3].packet_length);
         uVar3 = *(undefined4*)&from[3].field_0x74;
         sid_ctx_len = from[3].mac_flags;
         to[3].packet_length = from[3].packet_length;
         *(undefined4*)&to[3].field_0x74 = uVar3;
         SSL_set_session_id_context(to, (uchar*)&from[3].enc_read_ctx, sid_ctx_len);
         return;
      }

   }

   return;
}
int SSL_CTX_check_private_key(SSL_CTX *ctx) {
   X509 *x509;
   EVP_PKEY *pkey;
   int iVar1;
   if (ctx != (SSL_CTX*)0x0) {
      x509 = *(X509**)**(long**)ctx->sid_ctx;
      if (x509 != (X509*)0x0) {
         pkey = (EVP_PKEY*)( (undefined8*)**(long**)ctx->sid_ctx )[1];
         if (pkey != (EVP_PKEY*)0x0) {
            iVar1 = X509_check_private_key(x509, pkey);
            return iVar1;
         }

         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x81f, "SSL_CTX_check_private_key");
         ERR_set_error(0x14, 0xbe, 0);
         return 0;
      }

   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x81b, "SSL_CTX_check_private_key");
   ERR_set_error(0x14, 0xb1, 0);
   return 0;
}
int SSL_check_private_key(SSL *ctx) {
   X509 *x509;
   EVP_PKEY *pkey;
   int iVar1;
   if (( ctx == (SSL*)0x0 ) || ( ( ctx->version != 0 && ( ( ( ctx->version & 0x80U ) == 0 || ( ctx = (SSL*)ossl_quic_obj_get0_handshake_layer() ),ctx == (SSL*)0x0 ) ) ) )) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x82c, "SSL_check_private_key");
      ERR_set_error(0x14, 0xc0102, 0);
      return 0;
   }

   x509 = *(X509**)**(long**)&ctx[3].packet_length;
   if (x509 == (X509*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x830, "SSL_check_private_key");
      ERR_set_error(0x14, 0xb1, 0);
      return 0;
   }

   pkey = (EVP_PKEY*)( (undefined8*)**(long**)&ctx[3].packet_length )[1];
   if (pkey == (EVP_PKEY*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x834, "SSL_check_private_key");
      ERR_set_error(0x14, 0xbe, 0);
      return 0;
   }

   iVar1 = X509_check_private_key(x509, pkey);
   return iVar1;
}
bool SSL_waiting_for_async(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(long*)( param_1 + 0x54a ) != 0;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(long*)( lVar1 + 0x1528 ) != 0;
         }

         return false;
      }

   }

   return false;
}
undefined8 SSL_get_all_async_fds(uint *param_1, undefined8 param_2, undefined8 param_3) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 != 0) {
         if (( *param_1 & 0x80 ) != 0) {
            lVar1 = ossl_quic_obj_get0_handshake_layer();
            if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x1530 ) != 0 )) {
               uVar2 = ASYNC_WAIT_CTX_get_all_fds(*(long*)( lVar1 + 0x1530 ), param_2, param_3);
               return uVar2;
            }

         }

         return 0;
      }

      if (*(long*)( param_1 + 0x54c ) != 0) {
         uVar2 = ASYNC_WAIT_CTX_get_all_fds();
         return uVar2;
      }

   }

   return 0;
}
undefined8 SSL_get_changed_async_fds(uint *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 != 0) {
         if (( *param_1 & 0x80 ) != 0) {
            lVar1 = ossl_quic_obj_get0_handshake_layer();
            if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x1530 ) != 0 )) {
               uVar2 = ASYNC_WAIT_CTX_get_changed_fds(*(long*)( lVar1 + 0x1530 ), param_2, param_3, param_4, param_5);
               return uVar2;
            }

         }

         return 0;
      }

      if (*(long*)( param_1 + 0x54c ) != 0) {
         uVar2 = ASYNC_WAIT_CTX_get_changed_fds();
         return uVar2;
      }

   }

   return 0;
}
undefined8 SSL_CTX_set_async_callback(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x460 ) = param_2;
   return 1;
}
undefined8 SSL_CTX_set_async_callback_arg(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x468 ) = param_2;
   return 1;
}
undefined8 SSL_set_async_callback(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_001036e4;
      }

      return 0;
   }

   LAB_001036e4:*(undefined8*)( param_1 + 0x55e ) = param_2;
   return 1;
}
undefined8 SSL_set_async_callback_arg(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_00103734;
      }

      return 0;
   }

   LAB_00103734:*(undefined8*)( param_1 + 0x560 ) = param_2;
   return 1;
}
undefined8 SSL_get_async_status(uint *param_1, undefined4 *param_2) {
   undefined4 uVar1;
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

   if (*(long*)( param_1 + 0x54c ) == 0) {
      return 0;
   }

   uVar1 = ASYNC_WAIT_CTX_get_status();
   *param_2 = uVar1;
   return 1;
}
long SSL_get_default_timeout(SSL *s) {
   ulong uVar1;
   uVar1 = ( *(code*)s->wbio[1].ex_data.sk )();
   return uVar1 / 1000000000;
}
undefined8 ssl_read_internal(uint *param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   uint *puVar4;
   long in_FS_OFFSET;
   uint *local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (uint*)0x0) {
      LAB_001038a8:uVar2 = 0xffffffff;
   }
 else {
      puVar4 = param_1;
      if (*param_1 != 0) {
         if (( *param_1 & 0x80 ) != 0) {
            puVar4 = (uint*)ossl_quic_obj_get0_handshake_layer();
            if (( *param_1 & 0x80 ) != 0) {
               LAB_00103869:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Could not recover jumptable at 0x0010389d. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  uVar2 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x50 ) )(param_1, param_2, param_3, param_4);
                  return uVar2;
               }

               goto LAB_001039d5;
            }

            if (puVar4 != (uint*)0x0) goto LAB_00103822;
         }

         goto LAB_001038a8;
      }

      LAB_00103822:if (*(long*)( puVar4 + 0x1c ) == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x91e, "ssl_read_internal");
         ERR_set_error(0x14, 0x114, 0);
         goto LAB_001038a8;
      }

      if (( puVar4[0x21] & 2 ) == 0) {
         if (( puVar4[0x3c] == 1 ) || ( puVar4[0x3c] == 8 )) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x929, "ssl_read_internal");
            ERR_set_error(0x14, 0xc0101, 0);
            uVar2 = 0;
         }
 else {
            iVar1 = ossl_statem_check_finish_init(puVar4, 0);
            if (iVar1 == 0) goto LAB_001038a8;
            if (( ( *(byte*)( (long)puVar4 + 0x9b9 ) & 1 ) == 0 ) || ( lVar3 = lVar3 != 0 )) goto LAB_00103869;
            local_38 = *(undefined8*)( *(long*)( param_1 + 6 ) + 0x50 );
            local_40 = 0;
            local_58 = param_1;
            local_50 = param_2;
            local_48 = param_3;
            uVar2 = ssl_start_async_job(param_1, &local_58, ssl_io_intern);
            *param_4 = *(undefined8*)( puVar4 + 0x54e );
         }

      }
 else {
         puVar4[0x1a] = 1;
         uVar2 = 0;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   LAB_001039d5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int SSL_read(SSL *ssl, void *buf, int num) {
   int iVar1;
   long in_FS_OFFSET;
   int local_18[2];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (num < 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x94b, "SSL_read");
      ERR_set_error(0x14, 0x10f, 0);
      iVar1 = -1;
   }
 else {
      iVar1 = ssl_read_internal(ssl, buf, (long)num, local_18);
      if (0 < iVar1) {
         iVar1 = local_18[0];
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int SSL_read_ex(void) {
   int iVar1;
   iVar1 = ssl_read_internal();
   if (iVar1 < 0) {
      iVar1 = 0;
   }

   return iVar1;
}
int SSL_get_early_data_status(int *param_1) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      return param_1[0x2c6];
   }

   return 0;
}
int SSL_peek(SSL *ssl, void *buf, int num) {
   int iVar1;
   SSL *pSVar2;
   long lVar3;
   long in_FS_OFFSET;
   tls_session_secret_cb_fn local_50;
   SSL *local_48;
   void *local_40;
   long local_38;
   undefined4 local_30;
   ulong local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (num < 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x9d3, "SSL_peek");
      ERR_set_error(0x14, 0x10f, 0);
      LAB_00103c0f:iVar1 = -1;
   }
 else {
      if (ssl != (SSL*)0x0) {
         pSVar2 = ssl;
         if (ssl->version == 0) {
            LAB_00103ae4:if (*(long*)&pSVar2->packet_length == 0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0x9b4, "ssl_peek_internal");
               ERR_set_error(0x14, 0x114, 0);
               goto LAB_00103c0f;
            }

            if (( (ulong)pSVar2->s3 & 0x200000000 ) == 0) {
               if (( ( pSVar2[3].references & 0x100 ) == 0 ) || ( lVar3 = lVar3 != 0 )) goto LAB_00103b06;
               local_28 = ssl->wbio->num_write;
               local_30 = 0;
               local_48 = ssl;
               local_40 = buf;
               local_38 = (long)num;
               iVar1 = ssl_start_async_job(ssl, &local_48, ssl_io_intern);
               local_50 = pSVar2[7].tls_session_secret_cb;
               LAB_00103b15:if (0 < iVar1) {
                  iVar1 = (int)local_50;
               }

               goto LAB_00103b26;
            }

         }
 else if (( ssl->version & 0x80U ) != 0) {
            pSVar2 = (SSL*)ossl_quic_obj_get0_handshake_layer();
            if (( ssl->version & 0x80 ) != 0) {
               LAB_00103b06:iVar1 = ( *(code*)ssl->wbio->num_write )(ssl, buf, (long)num, &local_50);
               goto LAB_00103b15;
            }

            if (pSVar2 != (SSL*)0x0) goto LAB_00103ae4;
         }

      }

      iVar1 = 0;
   }

   LAB_00103b26:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
int SSL_peek_ex(uint *param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4) {
   int iVar1;
   long lVar2;
   uint *puVar3;
   long in_FS_OFFSET;
   uint *local_48;
   undefined8 local_40;
   undefined8 local_38;
   undefined4 local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (uint*)0x0) {
      puVar3 = param_1;
      if (*param_1 == 0) {
         LAB_00103c7c:if (*(long*)( puVar3 + 0x1c ) == 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x9b4, "ssl_peek_internal");
            ERR_set_error(0x14, 0x114, 0);
         }
 else if (( puVar3[0x21] & 2 ) == 0) {
            if (( ( *(byte*)( (long)puVar3 + 0x9b9 ) & 1 ) != 0 ) && ( lVar2 = lVar2 == 0 )) {
               local_28 = *(undefined8*)( *(long*)( param_1 + 6 ) + 0x58 );
               local_30 = 0;
               local_48 = param_1;
               local_40 = param_2;
               local_38 = param_3;
               iVar1 = ssl_start_async_job(param_1, &local_48, ssl_io_intern);
               *param_4 = *(undefined8*)( puVar3 + 0x54e );
               if (iVar1 < 0) {
                  iVar1 = 0;
               }

               goto LAB_00103cde;
            }

            LAB_00103cc1:iVar1 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x58 ) )();
            if (iVar1 < 0) {
               iVar1 = 0;
            }

            goto LAB_00103cde;
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         puVar3 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (( *param_1 & 0x80 ) != 0) goto LAB_00103cc1;
         if (puVar3 != (uint*)0x0) goto LAB_00103c7c;
      }

   }

   iVar1 = 0;
   LAB_00103cde:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
undefined8 ssl_write_internal(uint *param_1, undefined8 param_2, undefined8 param_3, long param_4, undefined8 *param_5) {
   int iVar1;
   uint *puVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   uint *local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (uint*)0x0) {
      LAB_00103e81:uVar4 = 0;
   }
 else {
      puVar2 = param_1;
      if (*param_1 != 0) {
         if (( *param_1 & 0x80 ) != 0) {
            puVar2 = (uint*)ossl_quic_obj_get0_handshake_layer();
            if (( *param_1 & 0x80 ) != 0) {
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar4 = ossl_quic_write_flags(param_1, param_2, param_3, param_4, param_5);
                  return uVar4;
               }

               goto LAB_00104054;
            }

            if (puVar2 != (uint*)0x0) goto LAB_00103e12;
         }

         goto LAB_00103e81;
      }

      LAB_00103e12:if (*(long*)( puVar2 + 0x1c ) == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x9fb, "ssl_write_internal");
         ERR_set_error(0x14, 0x114, 0);
         LAB_00103fe6:uVar4 = 0xffffffff;
      }
 else {
         if (( puVar2[0x21] & 1 ) != 0) {
            puVar2[0x1a] = 1;
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0xa01, "ssl_write_internal");
            ERR_set_error(0x14, 0xcf, 0);
            goto LAB_00103fe6;
         }

         if (param_4 != 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0xa06, "ssl_write_internal");
            ERR_set_error(0x14, 0x19c, 0);
            goto LAB_00103fe6;
         }

         if (( puVar2[0x3c] < 0xb ) && ( ( 0x502UL >> ( (ulong)puVar2[0x3c] & 0x3f ) & 1 ) != 0 )) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0xa0d, "ssl_write_internal");
            ERR_set_error(0x14, 0xc0101, 0);
            goto LAB_00103e81;
         }

         iVar1 = ossl_statem_check_finish_init(puVar2, 1);
         if (iVar1 == 0) goto LAB_00103fe6;
         if (( ( *(byte*)( (long)puVar2 + 0x9b9 ) & 1 ) == 0 ) || ( lVar3 = lVar3 != 0 )) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00103f2c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               uVar4 = ( **(code**)( *(long*)( param_1 + 6 ) + 0x60 ) )(param_1, param_2, param_3, param_5);
               return uVar4;
            }

            goto LAB_00104054;
         }

         local_38 = *(undefined8*)( *(long*)( param_1 + 6 ) + 0x60 );
         local_40 = 1;
         local_58 = param_1;
         local_50 = param_2;
         local_48 = param_3;
         uVar4 = ssl_start_async_job(param_1, &local_58, ssl_io_intern);
         *param_5 = *(undefined8*)( puVar2 + 0x54e );
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   LAB_00104054:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 SSL_sendfile(int *param_1) {
   undefined8 uVar1;
   if (param_1 == (int*)0x0) {
      return 0;
   }

   if (*param_1 == 0) {
      if (*(long*)( param_1 + 0x1c ) == 0) {
         ERR_new();
         uVar1 = 0xa2f;
      }
 else {
         if (( *(byte*)( param_1 + 0x21 ) & 1 ) != 0) {
            param_1[0x1a] = 1;
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0xa35, "SSL_sendfile");
            ERR_set_error(0x14, 0xcf, 0);
            return 0xffffffffffffffff;
         }

         ERR_new();
         uVar1 = 0xa3a;
      }

      ERR_set_debug("ssl/ssl_lib.c", uVar1, "SSL_sendfile");
      ERR_set_error(0x14, 0x114, 0);
      return 0xffffffffffffffff;
   }

   return 0;
}
int SSL_write(SSL *ssl, void *buf, int num) {
   int iVar1;
   long in_FS_OFFSET;
   int local_18[2];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (num < 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xa71, "SSL_write");
      ERR_set_error(0x14, 0x10f, 0);
      iVar1 = -1;
   }
 else {
      iVar1 = ssl_write_internal(ssl, buf, (long)num, 0, local_18);
      if (0 < iVar1) {
         iVar1 = local_18[0];
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int SSL_write_ex2(void) {
   int iVar1;
   iVar1 = ssl_write_internal();
   if (iVar1 < 0) {
      iVar1 = 0;
   }

   return iVar1;
}
void SSL_write_ex(void) {
   SSL_write_ex2();
   return;
}
int SSL_shutdown(SSL *s) {
   int iVar1;
   long lVar2;
   SSL *pSVar3;
   long in_FS_OFFSET;
   SSL *local_48;
   undefined1 local_40[16];
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s == (SSL*)0x0) {
      LAB_0010427c:iVar1 = -1;
   }
 else {
      pSVar3 = s;
      if (s->version != 0) {
         if (( s->version & 0x80U ) != 0) {
            pSVar3 = (SSL*)ossl_quic_obj_get0_handshake_layer();
            if (( s->version & 0x80 ) != 0) {
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  iVar1 = ossl_quic_conn_shutdown(s, 0, 0, 0);
                  return iVar1;
               }

               goto LAB_0010439c;
            }

            if (pSVar3 != (SSL*)0x0) goto LAB_0010421b;
         }

         goto LAB_0010427c;
      }

      LAB_0010421b:if (*(long*)&pSVar3->packet_length == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0xaef, "SSL_shutdown");
         ERR_set_error(0x14, 0x114, 0);
         goto LAB_0010427c;
      }

      iVar1 = SSL_in_init(s);
      if (iVar1 != 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0xb01, "SSL_shutdown");
         ERR_set_error(0x14, 0x197, 0);
         goto LAB_0010427c;
      }

      if (( ( pSVar3[3].references & 0x100 ) == 0 ) || ( lVar2 = lVar2 != 0 )) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00104272. Too many branches */
            /* WARNING: Treating indirect jump as call */
            iVar1 = ( **(code**)&(s->wbio->ex_data).dummy )(s);
            return iVar1;
         }

         goto LAB_0010439c;
      }

      local_28 = *(undefined8*)&(s->wbio->ex_data).dummy;
      local_40 = (undefined1[16])0x0;
      local_30 = 2;
      local_48 = s;
      iVar1 = ssl_start_async_job(s, &local_48, ssl_io_intern);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_0010439c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 SSL_key_update(uint *param_1, uint param_2) {
   int iVar1;
   uint *puVar2;
   undefined8 uVar3;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0;
      }

      puVar2 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (( *param_1 & 0x80 ) != 0) {
         uVar3 = ossl_quic_key_update(param_1, param_2);
         return uVar3;
      }

      param_1 = puVar2;
      if (puVar2 == (uint*)0x0) {
         return 0;
      }

   }

   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 6 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 6 ) ),iVar1 != 0x10000 )) {
      if (param_2 < 2) {
         iVar1 = SSL_is_init_finished();
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0xb1e, "SSL_key_update");
            ERR_set_error(0x14, 0x79, 0);
         }
 else {
            iVar1 = RECORD_LAYER_write_pending(param_1 + 0x316);
            if (iVar1 == 0) {
               ossl_statem_set_in_init(param_1, 1);
               param_1[0x2e9] = param_2;
               return 1;
            }

            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0xb23, "SSL_key_update");
            ERR_set_error(0x14, 0x7f, 0);
         }

      }
 else {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0xb19, "SSL_key_update");
         ERR_set_error(0x14, 0x78, 0);
      }

   }
 else {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xb13, "SSL_key_update");
      ERR_set_error(0x14, 0x10a, 0);
   }

   return 0;
}
ulong SSL_get_key_update_type(uint *param_1) {
   long lVar1;
   ulong uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return (ulong)param_1[0x2e9];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( *param_1 & 0x80 ) != 0) {
            uVar2 = ossl_quic_get_key_update_type();
            return uVar2;
         }

         if (lVar1 != 0) {
            return ( ulong ) * (uint*)( lVar1 + 0xba4 );
         }

         return 0;
      }

   }

   return 0;
}
int SSL_renegotiate(SSL *s) {
   BIO *pBVar1;
   BIO_METHOD *UNRECOVERED_JUMPTABLE;
   int iVar2;
   if (( s == (SSL*)0x0 ) || ( s->version != 0 )) {
      return 0;
   }

   pBVar1 = s->wbio;
   if (( ( ( *(byte*)( *(long*)&pBVar1[1].ex_data.dummy + 0x50 ) & 8 ) == 0 ) && ( 0x303 < *(int*)&pBVar1->method ) ) && ( *(int*)&pBVar1->method != 0x10000 )) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xb42, "can_renegotiate");
      ERR_set_error(0x14, 0x10a, 0);
      return 0;
   }

   if (( (ulong)s[3].client_CA & 0x40000000 ) != 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xb47, "can_renegotiate");
      ERR_set_error(0x14, 0x153, 0);
      return 0;
   }

   *(undefined4*)&s[4].expand = 1;
   UNRECOVERED_JUMPTABLE = pBVar1[1].method;
   *(undefined4*)( (long)&s->s2 + 4 ) = 1;
   /* WARNING: Could not recover jumptable at 0x00104641. Too many branches */
   /* WARNING: Treating indirect jump as call */
   iVar2 = ( *(code*)UNRECOVERED_JUMPTABLE )();
   return iVar2;
}
int SSL_renegotiate_abbreviated(SSL *s) {
   BIO *pBVar1;
   BIO_METHOD *UNRECOVERED_JUMPTABLE;
   int iVar2;
   if (( s == (SSL*)0x0 ) || ( s->version != 0 )) {
      return 0;
   }

   pBVar1 = s->wbio;
   if (( ( ( *(byte*)( *(long*)&pBVar1[1].ex_data.dummy + 0x50 ) & 8 ) == 0 ) && ( 0x303 < *(int*)&pBVar1->method ) ) && ( *(int*)&pBVar1->method != 0x10000 )) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xb42, "can_renegotiate");
      ERR_set_error(0x14, 0x10a, 0);
      return 0;
   }

   if (( (ulong)s[3].client_CA & 0x40000000 ) != 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xb47, "can_renegotiate");
      ERR_set_error(0x14, 0x153, 0);
      return 0;
   }

   *(undefined4*)&s[4].expand = 1;
   UNRECOVERED_JUMPTABLE = pBVar1[1].method;
   *(undefined4*)( (long)&s->s2 + 4 ) = 0;
   /* WARNING: Could not recover jumptable at 0x00104721. Too many branches */
   /* WARNING: Treating indirect jump as call */
   iVar2 = ( *(code*)UNRECOVERED_JUMPTABLE )();
   return iVar2;
}
int SSL_renegotiate_pending(SSL *s) {
   if (( s != (SSL*)0x0 ) && ( s->version == 0 )) {
      return (int)( *(int*)&s[4].expand != 0 );
   }

   return 0;
}
undefined8 SSL_new_session_ticket(uint *param_1) {
   int iVar1;
   uint *puVar2;
   undefined8 uVar3;
   if (param_1 != (uint*)0x0) {
      puVar2 = param_1;
      if (( ( ( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( puVar2 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar2 != (uint*)0x0 ) ) ) ) && ( ( iVar1 = SSL_in_init(param_1) ),iVar1 == 0 || ( puVar2[0x299] != 0 ) )) {
         puVar2[0x299] = puVar2[0x299] + 1;
         iVar1 = RECORD_LAYER_write_pending(puVar2 + 0x316);
         if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
            ossl_statem_set_in_init(puVar2, 1);
         }

         uVar3 = 1;
      }
 else {
         uVar3 = 0;
      }

      return uVar3;
   }

   return 0;
}
ulong ossl_ctrl_internal(SSL *param_1, int param_2, _func_3155 *param_3, long *param_4, int param_5) {
   undefined8 uVar1;
   code *pcVar2;
   uint uVar3;
   int iVar4;
   SSL *ssl;
   ulong uVar5;
   ulong *puVar6;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (SSL*)0x0) {
      LAB_00104904:uVar5 = 0;
      goto LAB_00104906;
   }

   uVar3 = (uint)param_3;
   if (param_1->version != 0) {
      if (( param_1->version & 0x80U ) != 0) {
         ssl = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (( param_5 != 0 ) || ( ( param_1->version & 0x80 ) == 0 )) {
            if (ssl == (SSL*)0x0) goto LAB_00104904;
            switch (param_2) {
               case 0x21:
          goto switchD_001048f8_caseD_21;
               default:
          if ((param_1->version & 0x80) != 0) {
            if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar5 = SSL_ctrl(ssl,param_2,(long)param_3,param_4);
              return uVar5;
            }
            goto LAB_00104d67;
          }
          break;
               case 0x28:
          goto switchD_001048f8_caseD_28;
               case 0x29:
          goto switchD_001048f8_caseD_29;
               case 0x32:
          goto switchD_001048f8_caseD_32;
               case 0x33:
          goto switchD_001048f8_caseD_33;
               case 0x34:
          goto switchD_001048f8_caseD_34;
               case 0x4c:
          goto switchD_001048f8_caseD_4c;
               case 0x4e:
          goto switchD_001048f8_caseD_4e;
               case 99:
          goto switchD_001048f8_caseD_63;
               case 100:
          goto switchD_001048f8_caseD_64;
               case 0x6e:
          goto switchD_001048f8_caseD_6e;
               case 0x7a:
          goto switchD_00104d4e_caseD_7a;
               case 0x7b:
          goto switchD_00104d4e_caseD_7b;
               case 0x7c:
          goto switchD_00104d4e_caseD_7c;
               case 0x7d:
          goto switchD_001048f8_caseD_7d;
               case 0x7e:
          goto switchD_001048f8_caseD_7e;
               case 0x82:
          goto switchD_001048f8_caseD_82;
               case 0x83:
          goto switchD_001048f8_caseD_83;
               case 0x88:
          goto switchD_001048f8_caseD_88;
            }

         }

         switchD_001048f8_caseD_22:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010499e. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar5 = ( **(code**)&param_1->wbio[1].num )(param_1);
            return uVar5;
         }

         goto LAB_00104d67;
      }

      goto LAB_00104904;
   }

   ssl = param_1;
   switch (param_2) {
      case 0x21:
switchD_001048f8_caseD_21:
    ssl[3].references = ssl[3].references | uVar3;
    OSSL_PARAM_construct_uint32(&local_a8,&_LC6,&ssl[3].references);
    local_58 = local_88;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    uStack_60 = uStack_90;
    OSSL_PARAM_construct_end(&local_a8);
    local_30 = local_88;
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_40 = local_98;
    uStack_38 = uStack_90;
    (**(code **)(ssl[4].options + 0x90))(ssl[4].max_cert_list,&local_78);
    uVar5 = (ulong)(uint)ssl[3].references;
    break;
      default:
    goto switchD_001048f8_caseD_22;
      case 0x28:
switchD_001048f8_caseD_28:
    uVar5 = (ulong)*(int *)&ssl[4].tlsext_debug_arg;
    break;
      case 0x29:
switchD_001048f8_caseD_29:
    uVar5 = (ulong)*(int *)&ssl[4].tlsext_debug_arg;
    *(uint *)&ssl[4].tlsext_debug_arg = uVar3;
    break;
      case 0x32:
switchD_001048f8_caseD_32:
    uVar5 = ssl[3].mode;
    break;
      case 0x33:
switchD_001048f8_caseD_33:
    if ((long)param_3 < 0) goto LAB_00104904;
    uVar5 = ssl[3].mode;
    ssl[3].mode = (ulong)param_3;
    break;
      case 0x34:
switchD_001048f8_caseD_34:
    if ((code *)0x3e00 < param_3 + -0x200) goto LAB_00104904;
    *(_func_3155 **)&ssl[3].max_send_fragment = param_3;
    if (param_3 < *(_func_3155 **)&ssl[3].first_packet) {
      *(_func_3155 **)&ssl[3].first_packet = param_3;
    }
    uVar1._0_4_ = ssl[4].first_packet;
    uVar1._4_4_ = ssl[4].client_version;
    (**(code **)(ssl[4].mode + 0xa0))(uVar1,param_3);
    goto LAB_001049af;
      case 0x4c:
switchD_001048f8_caseD_4c:
    uVar5 = (ulong)*(int *)&ssl[1].tlsext_ocsp_ids;
    break;
      case 0x4e:
switchD_001048f8_caseD_4e:
    uVar3 = ~uVar3 & ssl[3].references;
    uVar5 = (ulong)uVar3;
    ssl[3].references = uVar3;
    break;
      case 99:
switchD_001048f8_caseD_63:
    uVar3 = uVar3 | *(uint *)(*(long *)&ssl[3].packet_length + 0x1c);
    uVar5 = (ulong)uVar3;
    *(uint *)(*(long *)&ssl[3].packet_length + 0x1c) = uVar3;
    break;
      case 100:
switchD_001048f8_caseD_64:
    uVar3 = ~uVar3 & *(uint *)(*(long *)&ssl[3].packet_length + 0x1c);
    uVar5 = (ulong)uVar3;
    *(uint *)(*(long *)&ssl[3].packet_length + 0x1c) = uVar3;
    break;
      case 0x6e:
switchD_001048f8_caseD_6e:
    if (param_4 == (long *)0x0) {
      uVar5 = 2;
    }
    else {
      if (ssl[1].write_hash == (EVP_MD_CTX *)0x0) goto LAB_00104904;
      *param_4 = (long)ssl[1].write_hash;
      uVar5 = (ulong)*(int *)&ssl[1].compress;
    }
    break;
      case 0x7a:
switchD_00104d4e_caseD_7a:
    if (((ssl[3].write_hash == (EVP_MD_CTX *)0x0) || (iVar4 = SSL_in_init(param_1), iVar4 != 0)) ||
       (iVar4 = ossl_statem_get_in_handshake(ssl), iVar4 != 0)) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      uVar5 = (ulong)(*(uint *)&ssl[3].write_hash[0x12].md_data & 1);
    }
    break;
      case 0x7b:
switchD_00104d4e_caseD_7b:
    iVar4 = ssl_check_allowed_versions
                      ((ulong)param_3 & 0xffffffff,(int)ssl[3].options,param_3,
                       (ulong)param_3 & 0xffffffff);
    uVar5 = 0;
    if (iVar4 != 0) {
      puVar6 = (ulong *)&ssl[3].field_0x1ac;
LAB_00104cb5:
      iVar4 = ssl_set_version_bound(*(undefined4 *)&param_1->rbio->method,uVar3,puVar6);
      uVar5 = (ulong)(iVar4 != 0);
    }
    break;
      case 0x7c:
switchD_00104d4e_caseD_7c:
    iVar4 = ssl_check_allowed_versions
                      (*(undefined4 *)&ssl[3].field_0x1ac,(ulong)param_3 & 0xffffffff,param_3,
                       (ulong)param_3 & 0xffffffff);
    uVar5 = 0;
    if (iVar4 != 0) {
      puVar6 = &ssl[3].options;
      goto LAB_00104cb5;
    }
    break;
      case 0x7d:
switchD_001048f8_caseD_7d:
    if ((*(_func_3155 **)&ssl[3].max_send_fragment < param_3) || (param_3 == (_func_3155 *)0x0))
    goto LAB_00104904;
    *(_func_3155 **)&ssl[3].first_packet = param_3;
    goto LAB_001049af;
      case 0x7e:
switchD_001048f8_caseD_7e:
    if ((code *)0x1f < param_3 + -1) goto LAB_00104904;
    uVar5 = ssl[4].options;
    ssl[3].tlsext_debug_cb = param_3;
    pcVar2 = *(code **)(uVar5 + 0x78);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(ssl[4].max_cert_list,param_3);
    }
    goto LAB_001049af;
      case 0x82:
switchD_001048f8_caseD_82:
    uVar5 = (ulong)*(int *)&ssl[3].field_0x1ac;
    break;
      case 0x83:
switchD_001048f8_caseD_83:
    uVar5 = (ulong)(int)ssl[3].options;
    break;
      case 0x88:
switchD_001048f8_caseD_88:
    *(undefined4 *)&ssl->packet = 8;
LAB_001049af:
    uVar5 = 1;
   }

   LAB_00104906:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   LAB_00104d67:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
long SSL_ctrl(SSL *ssl, int cmd, long larg, void *parg) {
   long lVar1;
   lVar1 = ossl_ctrl_internal();
   return lVar1;
}
undefined8 SSL_dane_enable(SSL *param_1, void *param_2) {
   char cVar1;
   int iVar2;
   void *pvVar3;
   SSL *pSVar4;
   long lVar5;
   undefined8 uVar6;
   if (param_1 == (SSL*)0x0) {
      return 0;
   }

   if (param_1->version == 0) {
      cVar1 = *(char*)&param_1->method[4].ssl_read;
      pSVar4 = param_1;
   }
 else {
      if (( param_1->version & 0x80U ) == 0) {
         return 0;
      }

      pSVar4 = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (pSVar4 == (SSL*)0x0) {
         return 0;
      }

      cVar1 = *(char*)&param_1->method[4].ssl_read;
   }

   if (cVar1 == '\0') {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x4d5, "SSL_dane_enable");
      ERR_set_error(0x14, 0xa7, 0);
      return 0;
   }

   if (pSVar4[1].tls_session_secret_cb_arg == (void*)0x0) {
      if (( pSVar4[3].tlsext_ocsp_resp == (uchar*)0x0 ) && ( lVar5 = lVar5 == 0 )) {
         ERR_new();
         uVar6 = 0x4e4;
      }
 else {
         iVar2 = X509_VERIFY_PARAM_set1_host(pSVar4[1].tls_session_ticket_ext_cb_arg, param_2, 0);
         if (iVar2 != 0) {
            *(undefined8*)( (long)&pSVar4[1].srtp_profiles + 4 ) = 0xffffffffffffffff;
            pSVar4[1].tls_session_secret_cb = ( tls_session_secret_cb_fn ) & param_1->method[4].ssl_accept;
            pvVar3 = (void*)OPENSSL_sk_new_null();
            pSVar4[1].tls_session_secret_cb_arg = pvVar3;
            if (pvVar3 == (void*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0x4f5, "SSL_dane_enable");
               ERR_set_error(0x14, 0x8000f, 0);
               return 0xffffffff;
            }

            return 1;
         }

         ERR_new();
         uVar6 = 0x4eb;
      }

      ERR_set_debug("ssl/ssl_lib.c", uVar6, "SSL_dane_enable");
      ERR_set_error(0x14, 0xcc, 0);
      return 0xffffffff;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x4d9, "SSL_dane_enable");
   ERR_set_error(0x14, 0xac, 0);
   return 0;
}
long SSL_callback_ctrl(SSL *param_1, int param_2, _func_3375 *param_3) {
   long lVar1;
   int in_ECX;
   long in_R8;
   long in_R9;
   /* WARNING: Could not recover jumptable at 0x00104f88. Too many branches */
   /* WARNING: Treating indirect jump as call */
   lVar1 = ( *param_1->wbio[2].callback )((bio_st*)param_1, param_2, (char*)param_3, in_ECX, in_R8, in_R9);
   return lVar1;
}
lhash_st_SSL_SESSION *SSL_CTX_sessions(SSL_CTX *ctx) {
   return (lhash_st_SSL_SESSION*)ctx->session_cache_head;
}
long SSL_CTX_ctrl(SSL_CTX *ctx, int cmd, long larg, void *parg) {
   int iVar1;
   uint uVar2;
   long lVar3;
   ssl_session_st *psVar4;
   undefined4 in_register_00000034;
   if (( cmd == 0x5c ) && ( larg == 1 )) {
      iVar1 = tls1_set_groups_list(ctx, 0, 0, 0, 0, 0, 0, parg);
      return (long)iVar1;
   }

   if (ctx == (SSL_CTX*)0x0) {
      if (( cmd & 0xfffffffbU ) != 0x62) {
         return 0;
      }

      iVar1 = tls1_set_sigalgs_list(0, 0, parg, 0);
      return (long)iVar1;
   }

   uVar2 = (uint)larg;
   switch (cmd) {
      case 0x10:
    ctx->default_verify_callback = (_func_3096 *)parg;
    goto LAB_001050c0;
      default:
                    /* WARNING: Could not recover jumptable at 0x00105038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)&ctx->cipher_list[5].stack)
                      (ctx,CONCAT44(in_register_00000034,cmd),larg,parg);
    return lVar3;
      case 0x14:
    lVar3 = OPENSSL_LH_num_items(ctx->session_cache_head);
    return lVar3;
      case 0x15:
    psVar4 = (ssl_session_st *)(long)(ctx->stats).sess_accept_renegotiate;
    break;
      case 0x16:
    psVar4 = (ssl_session_st *)(long)(ctx->stats).sess_miss;
    break;
      case 0x17:
    psVar4 = (ssl_session_st *)(long)(ctx->stats).sess_accept_good;
    break;
      case 0x18:
    psVar4 = (ssl_session_st *)(long)(ctx->stats).sess_timeout;
    break;
      case 0x19:
    psVar4 = (ssl_session_st *)(long)(ctx->stats).sess_hit;
    break;
      case 0x1a:
    psVar4 = (ssl_session_st *)(long)(ctx->stats).sess_cache_full;
    break;
      case 0x1b:
    psVar4 = (ssl_session_st *)(long)*(int *)((long)&ctx->app_verify_callback + 4);
    break;
      case 0x1c:
    psVar4 = (ssl_session_st *)(long)*(int *)&ctx->app_verify_arg;
    break;
      case 0x1d:
    psVar4 = (ssl_session_st *)(long)(ctx->stats).sess_cb_hit;
    break;
      case 0x1e:
    psVar4 = (ssl_session_st *)(long)ctx->references;
    break;
      case 0x1f:
    psVar4 = (ssl_session_st *)(long)*(int *)&ctx->app_verify_callback;
    break;
      case 0x21:
    uVar2 = uVar2 | *(uint *)&ctx->msg_callback;
    psVar4 = (ssl_session_st *)(ulong)uVar2;
    *(uint *)&ctx->msg_callback = uVar2;
    break;
      case 0x28:
    psVar4 = (ssl_session_st *)(long)*(int *)(ctx->sid_ctx + 0x10);
    break;
      case 0x29:
    psVar4 = (ssl_session_st *)(long)*(int *)(ctx->sid_ctx + 0x10);
    *(uint *)(ctx->sid_ctx + 0x10) = uVar2;
    break;
      case 0x2a:
    psVar4 = (ssl_session_st *)0x0;
    if (-1 < larg) {
      psVar4 = ctx->session_cache_tail;
      ctx->session_cache_tail = (ssl_session_st *)larg;
    }
    break;
      case 0x2b:
    psVar4 = ctx->session_cache_tail;
    break;
      case 0x2c:
    psVar4 = (ssl_session_st *)(ulong)*(uint *)&ctx->new_session_cb;
    *(uint *)&ctx->new_session_cb = uVar2;
    break;
      case 0x2d:
    psVar4 = (ssl_session_st *)(ulong)*(uint *)&ctx->new_session_cb;
    break;
      case 0x32:
    psVar4 = *(ssl_session_st **)&ctx->verify_mode;
    break;
      case 0x33:
    psVar4 = (ssl_session_st *)0x0;
    if (-1 < larg) {
      psVar4 = *(ssl_session_st **)&ctx->verify_mode;
      ctx->verify_mode = (int)larg;
      ctx->sid_ctx_length = (int)((ulong)larg >> 0x20);
    }
    break;
      case 0x34:
    if (0x3e00 < larg - 0x200U) {
      return 0;
    }
    ctx->tlsext_status_arg = (void *)larg;
    if ((ulong)larg < ctx->tlsext_status_cb) goto LAB_00105134;
    goto LAB_001050c0;
      case 0x4e:
    uVar2 = ~uVar2 & *(uint *)&ctx->msg_callback;
    psVar4 = (ssl_session_st *)(ulong)uVar2;
    *(uint *)&ctx->msg_callback = uVar2;
    break;
      case 99:
    uVar2 = uVar2 | *(uint *)(*(long *)ctx->sid_ctx + 0x1c);
    psVar4 = (ssl_session_st *)(ulong)uVar2;
    *(uint *)(*(long *)ctx->sid_ctx + 0x1c) = uVar2;
    break;
      case 100:
    uVar2 = ~uVar2 & *(uint *)(*(long *)ctx->sid_ctx + 0x1c);
    psVar4 = (ssl_session_st *)(ulong)uVar2;
    *(uint *)(*(long *)ctx->sid_ctx + 0x1c) = uVar2;
    break;
      case 0x7b:
    iVar1 = ssl_check_allowed_versions(larg,*(undefined4 *)&ctx->msg_callback_arg);
    psVar4 = (ssl_session_st *)0x0;
    if (iVar1 != 0) {
      iVar1 = ssl_set_version_bound
                        ((ctx->cipher_list->stack).num,larg & 0xffffffff,
                         (undefined1 *)((long)&ctx->msg_callback + 4));
      psVar4 = (ssl_session_st *)(ulong)(iVar1 != 0);
    }
    break;
      case 0x7c:
    iVar1 = ssl_check_allowed_versions
                      (*(undefined4 *)((long)&ctx->msg_callback + 4),larg & 0xffffffff);
    psVar4 = (ssl_session_st *)0x0;
    if (iVar1 != 0) {
      iVar1 = ssl_set_version_bound((ctx->cipher_list->stack).num,uVar2,&ctx->msg_callback_arg);
      psVar4 = (ssl_session_st *)(ulong)(iVar1 != 0);
    }
    break;
      case 0x7d:
    if ((ctx->tlsext_status_arg < (ulong)larg) || (larg == 0)) {
      return 0;
    }
LAB_00105134:
    ctx->tlsext_status_cb = (_func_3099 *)larg;
    goto LAB_001050c0;
      case 0x7e:
    if (0x1f < larg - 1U) {
      return 0;
    }
    ctx->tlsext_opaque_prf_input_callback = (_func_3100 *)larg;
LAB_001050c0:
    psVar4 = (ssl_session_st *)0x1;
    break;
      case 0x82:
    psVar4 = (ssl_session_st *)(long)*(int *)((long)&ctx->msg_callback + 4);
    break;
      case 0x83:
    psVar4 = (ssl_session_st *)(long)*(int *)&ctx->msg_callback_arg;
   }

   return (long)psVar4;
}
long SSL_CTX_callback_ctrl(SSL_CTX *param_1, int param_2, _func_3378 *param_3) {
   long lVar1;
   if (param_2 != 0xf) {
      /* WARNING: Could not recover jumptable at 0x001052ad. Too many branches */
      /* WARNING: Treating indirect jump as call */
      lVar1 = ( **(code**)&param_1->cipher_list[7].stack.sorted )();
      return lVar1;
   }

   *(_func_3378**)( param_1->sid_ctx + 0x18 ) = param_3;
   return 1;
}
int ssl_cipher_id_cmp(long param_1, long param_2) {
   int iVar1;
   iVar1 = 1;
   if (*(uint*)( param_1 + 0x18 ) <= *(uint*)( param_2 + 0x18 )) {
      iVar1 = -(uint)(*(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x18));
   }

   return iVar1;
}
void ssl_cipher_id_cmp_BSEARCH_CMP_FN(void) {
   ssl_cipher_id_cmp();
   return;
}
int ssl_cipher_ptr_id_cmp(long *param_1, long *param_2) {
   int iVar1;
   iVar1 = 1;
   if (*(uint*)( *param_1 + 0x18 ) <= *(uint*)( *param_2 + 0x18 )) {
      iVar1 = -(uint)(*(uint *)(*param_1 + 0x18) < *(uint *)(*param_2 + 0x18));
   }

   return iVar1;
}
stack_st_SSL_CIPHER *SSL_get_ciphers(SSL *s) {
   SSL *pSVar1;
   if (s == (SSL*)0x0) {
      return (stack_st_SSL_CIPHER*)0x0;
   }

   pSVar1 = s;
   if (( s->version == 0 ) || ( ( ( s->version & 0x80U ) != 0 && ( pSVar1 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar1 != (SSL*)0x0 ) )) {
      if (*(stack_st_SSL_CIPHER**)( pSVar1 + 2 ) != (stack_st_SSL_CIPHER*)0x0) {
         return *(stack_st_SSL_CIPHER**)( pSVar1 + 2 );
      }

      if (s->method != (SSL_METHOD*)0x0) {
         return (stack_st_SSL_CIPHER*)s->method->ssl_clear;
      }

   }

   return (stack_st_SSL_CIPHER*)0x0;
}
undefined8 SSL_get_client_ciphers(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (param_1[0x1e] != 0) {
            return *(undefined8*)( param_1 + 0x156 );
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(int*)( lVar1 + 0x78 ) != 0 )) {
            return *(undefined8*)( lVar1 + 0x558 );
         }

         return 0;
      }

   }

   return 0;
}
long SSL_get1_supported_ciphers(SSL *param_1) {
   int iVar1;
   int iVar2;
   SSL *pSVar3;
   stack_st_SSL_CIPHER *psVar4;
   undefined8 uVar5;
   long lVar6;
   if (( ( param_1 == (SSL*)0x0 ) || ( ( ( pSVar3 = param_1 ),param_1->version != 0 && ( ( ( param_1->version & 0x80U ) == 0 || ( pSVar3 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar3 == (SSL*)0x0 ) ) ) ) || ( psVar4 = SSL_get_ciphers(param_1) ),psVar4 == (stack_st_SSL_CIPHER*)0x0 )) {
      LAB_001054a3:lVar6 = 0;
   }
 else {
      lVar6 = 0;
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(psVar4),iVar1 < iVar2; iVar1 = iVar1 + 1) {
         uVar5 = OPENSSL_sk_value(psVar4, iVar1);
         iVar2 = ssl_cipher_disabled(pSVar3, uVar5, 0x10001, 0);
         if (iVar2 == 0) {
            if (( lVar6 == 0 ) && ( lVar6 = lVar6 == 0 )) goto LAB_001054a3;
            iVar2 = OPENSSL_sk_push(lVar6, uVar5);
            if (iVar2 == 0) {
               OPENSSL_sk_free(lVar6);
               return 0;
            }

         }

      }

   }

   return lVar6;
}
long ssl_get_ciphers_by_id(long param_1) {
   long lVar1;
   if (param_1 == 0) {
      return 0;
   }

   lVar1 = *(long*)( param_1 + 0x568 );
   if (( lVar1 == 0 ) && ( lVar1 = lVar1 != 0 )) {
      return *(long*)( lVar1 + 0x18 );
   }

   return lVar1;
}
char *SSL_get_cipher_list(SSL *s, int n) {
   int iVar1;
   stack_st_SSL_CIPHER *psVar2;
   long lVar3;
   if (s == (SSL*)0x0) {
      return (char*)0x0;
   }

   psVar2 = SSL_get_ciphers(s);
   if (psVar2 != (stack_st_SSL_CIPHER*)0x0) {
      iVar1 = OPENSSL_sk_num(psVar2);
      if (n < iVar1) {
         lVar3 = OPENSSL_sk_value(psVar2, n);
         if (lVar3 != 0) {
            return *(char**)( lVar3 + 8 );
         }

      }

   }

   return (char*)0x0;
}
undefined8 SSL_CTX_get_ciphers(long param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0x10 );
   }

   return uVar1;
}
int SSL_CTX_set_cipher_list(SSL_CTX *param_1, char *str) {
   int iVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   lVar3 = ssl_create_cipher_list(param_1, param_1->sessions, &param_1->cipher_list_by_id, &param_1->cert_store, str, *(undefined8*)param_1->sid_ctx);
   if (lVar3 == 0) {
      LAB_0010563b:iVar1 = 0;
   }
 else {
      iVar1 = ( **(code**)&param_1->cipher_list[6].stack )();
      if (0 < iVar1) {
         iVar5 = 0;
         iVar1 = 0;
         while (true) {
            iVar2 = OPENSSL_sk_num(lVar3);
            if (iVar2 <= iVar1) break;
            lVar4 = OPENSSL_sk_value(lVar3, iVar1);
            if (*(int*)( lVar4 + 0x2c ) < 0x304) {
               iVar5 = iVar5 + 1;
            }

            iVar1 = iVar1 + 1;
         }
;
         if (iVar5 == 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0xd47, "SSL_CTX_set_cipher_list");
            ERR_set_error(0x14, 0xb9, 0);
            goto LAB_0010563b;
         }

      }

      iVar1 = 1;
   }

   return iVar1;
}
int SSL_set_cipher_list(SSL *s, char *str) {
   SSL_METHOD *pSVar1;
   int iVar2;
   int iVar3;
   SSL *pSVar4;
   long lVar5;
   long lVar6;
   int iVar7;
   if (s == (SSL*)0x0) {
      return 0;
   }

   pSVar4 = s;
   if (( s->version == 0 ) || ( ( ( s->version & 0x80U ) != 0 && ( pSVar4 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar4 != (SSL*)0x0 ) )) {
      pSVar1 = s->method;
      lVar5 = ssl_create_cipher_list(pSVar1, pSVar4[2].rbio, pSVar4 + 2, &pSVar4[2].method, str, *(undefined8*)&pSVar4[3].packet_length);
      if (lVar5 != 0) {
         iVar2 = ( **(code**)( pSVar1->ssl_new + 0xc0 ) )();
         if (0 < iVar2) {
            iVar7 = 0;
            for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar5),iVar2 < iVar3; iVar2 = iVar2 + 1) {
               lVar6 = OPENSSL_sk_value(lVar5, iVar2);
               if (*(int*)( lVar6 + 0x2c ) < 0x304) {
                  iVar7 = iVar7 + 1;
               }

            }

            if (iVar7 == 0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0xd5f, "SSL_set_cipher_list");
               ERR_set_error(0x14, 0xb9, 0);
               return 0;
            }

         }

         return 1;
      }

   }

   return 0;
}
char *SSL_get_shared_ciphers(SSL *s, char *buf, int len) {
   long lVar1;
   int iVar2;
   int iVar3;
   stack_st_SSL_CIPHER *psVar4;
   long lVar5;
   SSL *pSVar6;
   char *pcVar7;
   char *__dest;
   if (( ( ( s != (SSL*)0x0 ) && ( ( pSVar6 = s ),s->version == 0 || ( ( ( s->version & 0x80U ) != 0 && ( pSVar6 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar6 != (SSL*)0x0 ) ) ) ) )) &&( *(int*)&pSVar6->s2 != 0 ) && ( ( ( ( lVar1._0_4_ = pSVar6[1].tlsext_hb_seq ),lVar1._4_4_ = pSVar6[1].renegotiate,1 < len && ( lVar1 != 0 ) ) && ( psVar4 = SSL_get_ciphers(s) ),psVar4 != (stack_st_SSL_CIPHER*)0x0 ) ) && ( ( iVar2 = OPENSSL_sk_num(lVar1) ),iVar2 != 0 && ( iVar2 = iVar2 != 0 ) );
   __dest = buf;
   do {
      iVar3 = OPENSSL_sk_num(lVar1);
      if (iVar3 <= iVar2) {
         __dest[-1] = '\0';
         return buf;
      }

      lVar5 = OPENSSL_sk_value(lVar1, iVar2);
      iVar3 = OPENSSL_sk_find(psVar4, lVar5);
      if (-1 < iVar3) {
         iVar3 = OPENSSL_strnlen(*(undefined8*)( lVar5 + 8 ), (long)len);
         if (len <= iVar3) {
            pcVar7 = __dest + -1;
            if (__dest == buf) {
               pcVar7 = buf;
            }

            *pcVar7 = '\0';
            return buf;
         }

         memcpy(__dest, *(void**)( lVar5 + 8 ), (long)iVar3);
         len = len - ( iVar3 + 1 );
         __dest[iVar3] = ':';
         __dest = __dest + iVar3 + 1;
      }

      iVar2 = iVar2 + 1;
   }
 while ( true );
}
return (char*)0x0;}char *SSL_get_servername(SSL *s, int type) {
   EVP_MD_CTX *pEVar1;
   int iVar2;
   SSL *pSVar3;
   EVP_PKEY_CTX *pEVar4;
   if (s == (SSL*)0x0) {
      return (char*)0x0;
   }

   pSVar3 = s;
   if (( s->version == 0 ) || ( ( ( s->version & 0x80U ) != 0 && ( pSVar3 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar3 != (SSL*)0x0 ) )) {
      if (*(long*)&pSVar3->packet_length == 0) {
         if (type != 0) goto LAB_00105948;
      }
 else {
         if (type != 0) goto LAB_00105948;
         if (*(int*)&pSVar3->s2 != 0) {
            if (( *(int*)&pSVar3[1].tls_session_ticket_ext_cb != 0 ) && ( ( ( ( *(byte*)( *(long*)&pSVar3->wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0 || ( iVar2 = *(int*)&pSVar3->wbio->method ),iVar2 < 0x304 ) ) || ( iVar2 == 0x10000 ) )) {
               return (char*)pSVar3[3].write_hash[0x10].pctx;
            }

            goto LAB_0010591a;
         }

      }

      iVar2 = SSL_in_before(s);
      if (iVar2 == 0) {
         if (( ( ( ( *(byte*)( *(long*)&pSVar3->wbio[1].ex_data.dummy + 0x50 ) & 8 ) == 0 ) && ( iVar2 = *(int*)&pSVar3->wbio->method ),iVar2 != 0x10000 ) ) && ( 0x303 < iVar2 )) {
            LAB_0010591a:return (char*)pSVar3[3].tlsext_ocsp_resp;
         }

      }
 else {
         pEVar4 = (EVP_PKEY_CTX*)pSVar3[3].tlsext_ocsp_resp;
         if (( ( pEVar4 == (EVP_PKEY_CTX*)0x0 ) && ( pEVar1 = pSVar3[3].write_hash ),pEVar1 != (EVP_MD_CTX*)0x0 )) {
            pEVar4 = pEVar1[0x10].pctx;
         }

      }

   }
 else {
      LAB_00105948:pEVar4 = (EVP_PKEY_CTX*)0x0;
   }

   return (char*)pEVar4;
}
int SSL_get_servername_type(SSL *s) {
   char *pcVar1;
   pcVar1 = SSL_get_servername(s, 0);
   return -(uint)(pcVar1 == (char *)0x0);
}
/* WARNING: Type propagation algorithm not settling */int SSL_select_next_proto(uchar **out, uchar *outlen, uchar *in, uint inlen, uchar *client, uint client_len) {
   byte *b;
   byte *a;
   byte *pbVar1;
   byte bVar2;
   ulong uVar3;
   int iVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong len;
   if (( client_len == 0 ) || ( bVar2 = *client ),(ulong)client_len - 1 <= (ulong)bVar2 - 1) {
      *out = (uchar*)0x0;
      *outlen = '\0';
   }
 else {
      uVar6 = (ulong)inlen;
      *out = client + 1;
      *outlen = bVar2;
      joined_r0x00105a67:if (uVar6 != 0) {
         bVar2 = *in;
         len = (ulong)bVar2;
         if (uVar6 - 1 < len) {
            return 2;
         }

         b = in + 1;
         uVar6 = ( uVar6 - 1 ) - len;
         in = b + len;
         pbVar1 = client;
         uVar7 = (ulong)client_len;
         uVar3 = len;
         while (uVar3 != 0) {
            uVar5 = ( ulong ) * pbVar1;
            if (uVar7 - 1 < uVar5) break;
            a = pbVar1 + 1;
            uVar7 = ( uVar7 - 1 ) - uVar5;
            pbVar1 = a + uVar5;
            uVar3 = uVar7;
            if (( uVar5 == len ) && ( iVar4 = iVar4 == 0 )) {
               *out = b;
               *outlen = bVar2;
               return 1;
            }

         }
;
         goto joined_r0x00105a67;
      }

   }

   return 2;
}
void SSL_get0_next_proto_negotiated(SSL *s, uchar **data, uint *len) {
   uchar *puVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         LAB_00105b6c:puVar1 = *(uchar**)&s[4].quiet_shutdown;
         *data = puVar1;
         if (puVar1 != (uchar*)0x0) {
            *len = s[4].state;
            return;
         }

         goto LAB_00105b98;
      }

      if (( s->version & 0x80U ) != 0) {
         s = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (s != (SSL*)0x0) goto LAB_00105b6c;
      }

   }

   *data = (uchar*)0x0;
   LAB_00105b98:*len = 0;
   return;
}
void SSL_CTX_set_next_protos_advertised_cb(SSL_CTX *s, cb *cb, void *arg) {
   stack_st_SSL_CIPHER *psVar1;
   stack_st_SSL_CIPHER *psVar2;
   psVar1 = s->cipher_list;
   psVar2 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_method();
   if (psVar1 != psVar2) {
      psVar1 = s->cipher_list;
      psVar2 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_thread_method();
      if (psVar1 != psVar2) {
         psVar1 = s->cipher_list;
         psVar2 = (stack_st_SSL_CIPHER*)OSSL_QUIC_server_method();
         if (psVar1 != psVar2) {
            *(cb**)&s[1].stats.sess_miss = cb;
            *(void**)&s[1].stats.sess_cache_full = arg;
         }

      }

   }

   return;
}
void SSL_CTX_set_next_proto_select_cb(SSL_CTX *s, cb *cb, void *arg) {
   stack_st_SSL_CIPHER *psVar1;
   stack_st_SSL_CIPHER *psVar2;
   psVar1 = s->cipher_list;
   psVar2 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_method();
   if (psVar1 != psVar2) {
      psVar1 = s->cipher_list;
      psVar2 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_thread_method();
      if (psVar1 != psVar2) {
         psVar1 = s->cipher_list;
         psVar2 = (stack_st_SSL_CIPHER*)OSSL_QUIC_server_method();
         if (psVar1 != psVar2) {
            *(cb**)&s[1].stats.sess_cb_hit = cb;
            s[1].app_verify_callback = (_func_3090*)arg;
         }

      }

   }

   return;
}
undefined8 SSL_CTX_set_alpn_protos(long param_1, long param_2, uint param_3) {
   long lVar1;
   uint uVar2;
   ulong uVar3;
   if (( param_3 != 0 ) && ( param_2 != 0 )) {
      uVar2 = 0;
      if (param_3 != 1) {
         do {
            if (*(byte*)( param_2 + (ulong)uVar2 ) == 0) {
               return 1;
            }

            uVar2 = uVar2 + 1 + ( uint ) * (byte*)( param_2 + (ulong)uVar2 );
         }
 while ( uVar2 < param_3 );
         if (param_3 == uVar2) {
            uVar3 = (ulong)param_3;
            lVar1 = CRYPTO_memdup(param_2, uVar3, "ssl/ssl_lib.c", 0xea6);
            if (lVar1 != 0) {
               CRYPTO_free(*(void**)( param_1 + 0x2d0 ));
               goto LAB_00105d01;
            }

         }

      }

      return 1;
   }

   lVar1 = 0;
   uVar3 = 0;
   CRYPTO_free(*(void**)( param_1 + 0x2d0 ));
   LAB_00105d01:*(long*)( param_1 + 0x2d0 ) = lVar1;
   *(ulong*)( param_1 + 0x2d8 ) = uVar3;
   return 0;
}
undefined8 SSL_set_alpn_protos(uint *param_1, long param_2, uint param_3) {
   long lVar1;
   uint uVar2;
   ulong uVar3;
   if (param_1 == (uint*)0x0) {
      return 1;
   }

   uVar3 = (ulong)param_3;
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 1;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return 1;
      }

   }

   if (( param_3 != 0 ) && ( param_2 != 0 )) {
      if (param_3 != 1) {
         uVar2 = 0;
         do {
            if (*(byte*)( param_2 + (ulong)uVar2 ) == 0) {
               return 1;
            }

            uVar2 = uVar2 + 1 + ( uint ) * (byte*)( param_2 + (ulong)uVar2 );
         }
 while ( uVar2 < param_3 );
         if (( param_3 == uVar2 ) && ( lVar1 = CRYPTO_memdup(param_2, uVar3, "ssl/ssl_lib.c", 0xec8) ),lVar1 != 0) {
            CRYPTO_free(*(void**)( param_1 + 700 ));
            goto LAB_00105dd5;
         }

      }

      return 1;
   }

   lVar1 = 0;
   uVar3 = 0;
   CRYPTO_free(*(void**)( param_1 + 700 ));
   LAB_00105dd5:*(long*)( param_1 + 700 ) = lVar1;
   *(ulong*)( param_1 + 0x2be ) = uVar3;
   return 0;
}
void SSL_CTX_set_alpn_select_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x2c0 ) = param_2;
   *(undefined8*)( param_1 + 0x2c8 ) = param_3;
   return;
}
void SSL_get0_alpn_selected(uint *param_1, long *param_2, uint *param_3) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         LAB_00105e8c:lVar1 = *(long*)( param_1 + 0x12e );
         *param_2 = lVar1;
         if (lVar1 != 0) {
            *param_3 = param_1[0x130];
            return;
         }

         goto LAB_00105eb8;
      }

      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_00105e8c;
      }

   }

   *param_2 = 0;
   LAB_00105eb8:*param_3 = 0;
   return;
}
int SSL_export_keying_material(SSL *s, uchar *out, size_t olen, char *label, size_t llen, uchar *p, size_t plen, int use_context) {
   int iVar1;
   if (s == (SSL*)0x0) {
      return -1;
   }

   if (s->version != 0) {
      if (( s->version & 0x80U ) == 0) {
         return -1;
      }

      s = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (s == (SSL*)0x0) {
         return -1;
      }

   }

   if (( s[3].write_hash != (EVP_MD_CTX*)0x0 ) && ( ( 0x300 < s->state || ( s->state == 0x100 ) ) )) {
      /* WARNING: Could not recover jumptable at 0x00105f6e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      iVar1 = ( **(code**)( *(long*)&s->wbio[1].ex_data.dummy + 0x48 ) )(s, out, olen, label, llen, p);
      return iVar1;
   }

   return -1;
}
undefined8 SSL_export_keying_material_early(uint *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   undefined8 uVar1;
   if (( param_1 != (uint*)0x0 ) && ( ( *param_1 == 0 || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) ) ) )) {
      if (param_1[0x12] != 0x304) {
         return 0;
      }

      uVar1 = tls13_export_keying_material_early(param_1, param_2, param_3, param_4, param_5, param_6);
      return uVar1;
   }

   return 0xffffffff;
}
bool SSL_CTX_up_ref(long param_1) {
   int *piVar1;
   int iVar2;
   LOCK();
   piVar1 = (int*)( param_1 + 0xa4 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + 1;
   UNLOCK();
   return 1 < iVar2 + 1;
}
void SSL_CTX_set_default_passwd_cb(SSL_CTX *ctx, undefined1 *cb) {
   ctx->client_cert_cb = (_func_3091*)cb;
   return;
}
void SSL_CTX_set_default_passwd_cb_userdata(SSL_CTX *ctx, void *u) {
   ctx->app_gen_cookie_cb = (_func_3092*)u;
   return;
}
undefined8 SSL_CTX_get_default_passwd_cb(long param_1) {
   return *(undefined8*)( param_1 + 0xb8 );
}
undefined8 SSL_CTX_get_default_passwd_cb_userdata(long param_1) {
   return *(undefined8*)( param_1 + 0xc0 );
}
void SSL_set_default_passwd_cb(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined8*)( param_1 + 0x546 ) = param_2;
   return;
}
void SSL_set_default_passwd_cb_userdata(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined8*)( param_1 + 0x548 ) = param_2;
   return;
}
undefined8 SSL_get_default_passwd_cb(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0x546 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x1518 );
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_get_default_passwd_cb_userdata(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0x548 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x1520 );
         }

         return 0;
      }

   }

   return 0;
}
void SSL_CTX_set_cert_verify_callback(SSL_CTX *ctx, cb *cb, void *arg) {
   ctx->default_passwd_callback = cb;
   ctx->default_passwd_callback_userdata = arg;
   return;
}
void SSL_CTX_set_verify(SSL_CTX *ctx, int mode, callback *callback) {
   *(int*)&ctx->generate_session_id = mode;
   *(callback**)ctx->tlsext_tick_key_name = callback;
   return;
}
void SSL_CTX_set_verify_depth(SSL_CTX *ctx, int depth) {
   X509_VERIFY_PARAM_set_depth(*(X509_VERIFY_PARAM**)ctx->tlsext_tick_hmac_key, depth);
   return;
}
void SSL_CTX_set_cert_cb(long param_1) {
   ssl_cert_set_cert_cb(*(undefined8*)( param_1 + 0x158 ));
   return;
}
void SSL_set_cert_cb(uint *param_1, undefined8 param_2, undefined8 param_3) {
   long lVar1;
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            ssl_cert_set_cert_cb(*(undefined8*)( lVar1 + 0x880 ), param_2, param_3);
            return;
         }

      }

      return;
   }

   ssl_cert_set_cert_cb(*(undefined8*)( param_1 + 0x220 ));
   return;
}
bool ssl_check_srvr_ecc_cert_and_alg(undefined8 param_1, long param_2) {
   ulong uVar1;
   bool bVar2;
   if (( *(byte*)( *(long*)( param_2 + 0x300 ) + 0x20 ) & 8 ) != 0) {
      uVar1 = X509_get_key_usage();
      bVar2 = ( uVar1 & 0x80 ) == 0;
      if (bVar2) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1248, "ssl_check_srvr_ecc_cert_and_alg");
         ERR_set_error(0x14, 0x13e, 0);
      }

      return !bVar2;
   }

   return true;
}
undefined8 ssl_get_server_cert_serverinfo(long param_1, long *param_2, undefined8 *param_3) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 0x3d8 );
   *param_3 = 0;
   if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x18 ) != 0 )) {
      uVar2 = *(undefined8*)( lVar1 + 0x20 );
      *param_2 = *(long*)( lVar1 + 0x18 );
      *param_3 = uVar2;
      return 1;
   }

   return 0;
}
void ssl_update_cache(long param_1, uint param_2) {
   uint uVar1;
   SSL_SESSION *c;
   long lVar2;
   int iVar3;
   uint *puVar4;
   time_t tVar5;
   SSL_CTX *s;
   c = *(SSL_SESSION**)( param_1 + 0x900 );
   if (c->tlsext_tick_lifetime_hint == 0) {
      return;
   }

   if (*(int*)( c[1].session_id + 0x10 ) != 0) {
      return;
   }

   if (( ( *(int*)( param_1 + 0x78 ) != 0 ) && ( *(long*)( c[1].master_key + 0xc ) == 0 ) ) && ( ( *(byte*)( param_1 + 0x950 ) & 1 ) != 0 )) {
      return;
   }

   s = *(SSL_CTX**)( param_1 + 0xb88 );
   uVar1 = *(uint*)&s->new_session_cb;
   if (( uVar1 & param_2 ) == 0) goto LAB_00106450;
   if (*(int*)( param_1 + 0x508 ) == 0) {
      if (( uVar1 & 0x200 ) == 0) {
         if (( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0) {
            iVar3 = **(int**)( param_1 + 0x18 );
            goto LAB_001064e0;
         }

         LAB_001064fa:SSL_CTX_add_session(s, c);
         s = *(SSL_CTX**)( param_1 + 0xb88 );
      }

   }
 else {
      if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0 ) || ( iVar3 = **(int**)( param_1 + 0x18 ) ),iVar3 == 0x10000 )) goto LAB_00106450;
      if (( uVar1 & 0x200 ) == 0) {
         LAB_001064e0:if (( ( iVar3 == 0x10000 || iVar3 < 0x304 ) || ( *(int*)( param_1 + 0x78 ) == 0 ) ) || ( ( ( *(int*)( param_1 + 0x1540 ) != 0 && ( ( *(byte*)( param_1 + 0x9b3 ) & 1 ) == 0 ) ) || ( ( lVar2._0_4_ = (s->stats).sess_connect ),lVar2._4_4_ = (s->stats).sess_connect_renegotiate,lVar2 != 0 || ( ( *(byte*)( param_1 + 0x9b1 ) & 0x40 ) != 0 ) ) ) )) goto LAB_001064fa;
      }

   }

   if (( ( s->get_session_cb != (_func_3089*)0x0 ) && ( iVar3 = SSL_SESSION_up_ref() ),iVar3 != 0 )) {
      SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
   }

   LAB_00106450:if (( ( uVar1 & 0x80 ) == 0 ) && ( ( uVar1 & param_2 ) == param_2 )) {
      puVar4 = (uint*)( *(long*)( param_1 + 0xb88 ) + 0x8c );
      if (( param_2 & 1 ) != 0) {
         puVar4 = (uint*)( *(long*)( param_1 + 0xb88 ) + 0x80 );
      }

      if (( *puVar4 & 0xff ) == 0xff) {
         tVar5 = time((time_t*)0x0);
         SSL_CTX_flush_sessions_ex(*(undefined8*)( param_1 + 0xb88 ), tVar5);
         return;
      }

   }

   return;
}
undefined8 SSL_CTX_get_ssl_method(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}
SSL_METHOD *SSL_get_ssl_method(SSL *s) {
   return (SSL_METHOD*)s->wbio;
}
int SSL_set_ssl_method(SSL *s, SSL_METHOD *method) {
   _func_3060 *p_Var1;
   int iVar2;
   SSL *pSVar3;
   SSL_METHOD *pSVar4;
   SSL_METHOD *buf;
   undefined1 auVar5[12];
   if (s == (SSL*)0x0) {
      return 0;
   }

   buf = method;
   pSVar3 = s;
   if (s->version != 0) {
      if (( s->version & 0x80U ) == 0) {
         return 0;
      }

      pSVar3 = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (pSVar3 == (SSL*)0x0) {
         return 0;
      }

      if (s->version != 0) {
         return ( uint )((SSL_METHOD*)s->wbio == method);
      }

   }

   pSVar4 = (SSL_METHOD*)OSSL_QUIC_client_method();
   if (( method != pSVar4 ) && ( pSVar4 = (SSL_METHOD*)OSSL_QUIC_client_thread_method() ),method != pSVar4) {
      auVar5 = OSSL_QUIC_server_method();
      if (method != auVar5._0_8_) {
         pSVar4 = (SSL_METHOD*)s->wbio;
         if (pSVar4 == method) {
            iVar2 = 1;
         }
 else {
            p_Var1 = *(_func_3060**)&pSVar3->packet_length;
            if (pSVar4->version == method->version) {
               s->wbio = (BIO*)method;
               iVar2 = 1;
            }
 else {
               ( *pSVar4->ssl_peek )(s, buf, auVar5._8_4_);
               s->wbio = (BIO*)method;
               iVar2 = ( *method->ssl_connect )(s);
            }

            if ((_func_3060*)pSVar4->ssl_shutdown == p_Var1) {
               *(_func_3061**)&pSVar3->packet_length = method->ssl_shutdown;
            }
 else if (pSVar4->ssl_write == p_Var1) {
               *(_func_3060**)&pSVar3->packet_length = method->ssl_write;
            }

         }

         return iVar2;
      }

   }

   return 0;
}
int SSL_do_handshake(SSL *s) {
   code *pcVar1;
   int iVar2;
   SSL *pSVar3;
   long lVar4;
   int in_ECX;
   char *extraout_RDX;
   long in_R8;
   long in_R9;
   long in_FS_OFFSET;
   SSL *local_48;
   undefined1 local_40[16];
   undefined1 local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s == (SSL*)0x0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   pSVar3 = s;
   if (( ( s->version != 0 ) && ( pSVar3 = (SSL*)0x0(s->version & 0x80U) != 0 ) ) && ( pSVar3 = (SSL*)ossl_quic_obj_get0_handshake_layer()(s->version & 0x80) != 0 )) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         iVar2 = ossl_quic_do_handshake(s);
         return iVar2;
      }

      goto LAB_001067ce;
   }

   if (*(long*)&pSVar3->packet_length == 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1355, "SSL_do_handshake");
      ERR_set_error(0x14, 0x90, 0);
      LAB_001067c4:iVar2 = -1;
   }
 else {
      iVar2 = ossl_statem_check_finish_init(pSVar3);
      if (iVar2 == 0) goto LAB_001067c4;
      ( *s->wbio[1].callback )((bio_st*)s, 0, extraout_RDX, in_ECX, in_R8, in_R9);
      iVar2 = SSL_in_init(s);
      if (( iVar2 == 0 ) && ( iVar2 = iVar2 == 0 )) {
         iVar2 = 1;
      }
 else {
         if (( ( pSVar3[3].references & 0x100 ) == 0 ) || ( lVar4 = lVar4 != 0 )) {
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001066e5. Too many branches */
               /* WARNING: Treating indirect jump as call */
               iVar2 = ( **(code**)&pSVar3->packet_length )(s);
               return iVar2;
            }

            goto LAB_001067ce;
         }

         local_40 = (undefined1[16])0x0;
         local_30 = (undefined1[16])0x0;
         local_48 = s;
         iVar2 = ssl_start_async_job(s, &local_48, ssl_do_handshake_intern);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   LAB_001067ce:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void SSL_set_accept_state(SSL *s) {
   code *pcVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         *(undefined4*)&s->s2 = 1;
         *(undefined4*)( (long)&s->s3 + 4 ) = 0;
         ossl_statem_clear();
         *(bio_st**)&s->packet_length = s->wbio->prev_bio;
         RECORD_LAYER_reset(&s[4].ex_data.dummy);
         return;
      }

      if (( s->version & 0x80U ) != 0) {
         ossl_quic_set_accept_state();
         return;
      }

   }

   _DAT_00000078 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
int SSL_accept(SSL *ssl) {
   int iVar1;
   SSL *pSVar2;
   if (ssl == (SSL*)0x0) {
      return 0;
   }

   pSVar2 = ssl;
   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) != 0) {
         pSVar2 = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (( ssl->version & 0x80 ) != 0) {
            /* WARNING: Could not recover jumptable at 0x001068ac. Too many branches */
            /* WARNING: Treating indirect jump as call */
            iVar1 = ( *(code*)ssl->wbio->prev_bio )();
            return iVar1;
         }

         if (pSVar2 != (SSL*)0x0) goto LAB_0010685a;
      }

      return 0;
   }

   LAB_0010685a:if (*(long*)&pSVar2->packet_length == 0) {
      SSL_set_accept_state(ssl);
      iVar1 = SSL_do_handshake(ssl);
      return iVar1;
   }

   iVar1 = SSL_do_handshake(ssl);
   return iVar1;
}
undefined1 SSL_read_early_data(SSL *param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4) {
   undefined1 uVar1;
   int iVar2;
   undefined8 uVar3;
   if (( ( param_1 == (SSL*)0x0 ) || ( param_1->version != 0 ) ) || ( *(int*)&param_1->s2 == 0 )) {
      ERR_new();
      uVar3 = 0x96b;
      LAB_00106999:ERR_set_debug("ssl/ssl_lib.c", uVar3, "SSL_read_early_data");
      ERR_set_error(0x14, 0xc0101, 0);
      uVar1 = 0;
   }
 else {
      iVar2 = *(int*)&param_1->write_hash;
      if (iVar2 == 8) {
         LAB_0010693c:*(undefined4*)&param_1->write_hash = 9;
         iVar2 = SSL_accept(param_1);
         if (iVar2 < 1) {
            *(undefined4*)&param_1->write_hash = 8;
            return false;
         }

      }
 else if (iVar2 != 10) {
         if (iVar2 == 0) {
            iVar2 = SSL_in_before(param_1);
            if (iVar2 != 0) goto LAB_0010693c;
            ERR_new();
            uVar3 = 0x972;
         }
 else {
            ERR_new();
            uVar3 = 0x997;
         }

         goto LAB_00106999;
      }

      if (*(int*)&param_1[4].init_msg == 2) {
         *(undefined4*)&param_1->write_hash = 0xb;
         iVar2 = SSL_read_ex(param_1, param_2, param_3, param_4);
         if (( 0 < iVar2 ) || ( *(int*)&param_1->write_hash != 0xc )) {
            *(undefined4*)&param_1->write_hash = 10;
            return 0 < iVar2;
         }

      }
 else {
         *(undefined4*)&param_1->write_hash = 0xc;
      }

      *param_4 = 0;
      uVar1 = 2;
   }

   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void SSL_set_connect_state(SSL *s) {
   code *pcVar1;
   undefined4 uVar2;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         *(undefined4*)&s->s2 = 0;
         *(undefined4*)( (long)&s->s3 + 4 ) = 0;
         ossl_statem_clear();
         uVar2 = *(undefined4*)&s->wbio->field_0x4c;
         s->packet_length = s->wbio->references;
         *(undefined4*)&s->field_0x74 = uVar2;
         RECORD_LAYER_reset(&s[4].ex_data.dummy);
         return;
      }

      if (( s->version & 0x80U ) != 0) {
         ossl_quic_set_connect_state();
         return;
      }

   }

   _DAT_00000078 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
int SSL_connect(SSL *ssl) {
   int iVar1;
   SSL *pSVar2;
   if (ssl == (SSL*)0x0) {
      return 0;
   }

   pSVar2 = ssl;
   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) != 0) {
         pSVar2 = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (( ssl->version & 0x80 ) != 0) {
            /* WARNING: Could not recover jumptable at 0x00106b1c. Too many branches */
            /* WARNING: Treating indirect jump as call */
            iVar1 = ( **(code**)&ssl->wbio->references )();
            return iVar1;
         }

         if (pSVar2 != (SSL*)0x0) goto LAB_00106aca;
      }

      return 0;
   }

   LAB_00106aca:if (*(long*)&pSVar2->packet_length == 0) {
      SSL_set_connect_state(ssl);
      iVar1 = SSL_do_handshake(ssl);
      return iVar1;
   }

   iVar1 = SSL_do_handshake(ssl);
   return iVar1;
}
int SSL_write_early_data(SSL *param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4) {
   undefined4 uVar1;
   uint uVar2;
   int iVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined1 local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (SSL*)0x0 ) || ( param_1->version != 0 )) goto LAB_00106c80;
   uVar1 = *(undefined4*)&param_1->write_hash;
   switch (uVar1) {
      case 0:
    if (((*(int *)&param_1->s2 == 0) && (iVar3 = SSL_in_before(param_1), iVar3 != 0)) &&
       (((param_1[3].write_hash != (EVP_MD_CTX *)0x0 &&
         (*(int *)((long)&param_1[3].write_hash[0x11].flags + 4) != 0)) ||
        (param_1[3].ctx != (SSL_CTX *)0x0)))) goto switchD_00106bae_caseD_1;
    ERR_new();
    uVar4 = 0xaa1;
    break;
      case 1:
switchD_00106bae_caseD_1:
    *(undefined4 *)&param_1->write_hash = 2;
    iVar3 = SSL_connect(param_1);
    if (iVar3 < 1) {
      *(undefined4 *)&param_1->write_hash = 1;
      goto LAB_00106c80;
    }
      case 3:
    uVar2 = param_1[3].references;
    *(undefined4 *)&param_1->write_hash = 4;
    param_1[3].references = uVar2 & 0xfffffffe;
    iVar3 = SSL_write_ex(param_1,param_2,param_3,local_38);
    param_1[3].references = param_1[3].references | uVar2 & 1;
    if (iVar3 == 0) {
      *(undefined4 *)&param_1->write_hash = 3;
    }
    else {
      *(undefined4 *)&param_1->write_hash = 5;
switchD_00106bae_caseD_5:
      iVar3 = statem_flush(param_1);
      if (iVar3 == 1) {
        *param_4 = param_3;
        *(undefined4 *)&param_1->write_hash = 3;
        iVar3 = 1;
        goto LAB_00106c82;
      }
    }
    goto LAB_00106c80;
      default:
    ERR_new();
    uVar4 = 0xad7;
    break;
      case 5:
    goto switchD_00106bae_caseD_5;
      case 10:
      case 0xc:
    *(undefined4 *)&param_1->write_hash = 6;
    iVar3 = SSL_write_ex(param_1,param_2,param_3);
    if (iVar3 != 0) {
      BIO_ctrl((BIO *)param_1->init_msg,0xb,0,(void *)0x0);
    }
    *(undefined4 *)&param_1->write_hash = uVar1;
    goto LAB_00106c82;
   }

   ERR_set_debug("ssl/ssl_lib.c", uVar4, "SSL_write_early_data");
   ERR_set_error(0x14, 0xc0101, 0);
   LAB_00106c80:iVar3 = 0;
   LAB_00106c82:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ssl_undefined_void_function(void) {
   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x139c, "ssl_undefined_void_function");
   ERR_set_error(0x14, 0xc0101, 0);
   return 0;
}
char *ssl_protocol_to_string(int param_1) {
   char *pcVar1;
   if (param_1 < 0x305) {
      if (param_1 < 0x300) {
         pcVar1 = "unknown";
         if (param_1 == 0x100) {
            pcVar1 = "DTLSv0.9";
         }

         return pcVar1;
      }

      pcVar1 = "SSLv3";
      switch (param_1) {
         case 0x301:
      return "TLSv1";
         case 0x302:
      return "TLSv1.1";
         case 0x303:
      pcVar1 = "TLSv1.2";
      break;
         case 0x304:
      return "TLSv1.3";
      }

   }
 else {
      pcVar1 = "DTLSv1.2";
      if (param_1 != 0xfefd) {
         pcVar1 = "unknown";
         if (param_1 == 0xfeff) {
            pcVar1 = "DTLSv1";
         }

         return pcVar1;
      }

   }

   return pcVar1;
}
char *SSL_get_version(SSL *s) {
   code *pcVar1;
   long lVar2;
   char *pcVar3;
   if (s == (SSL*)0x0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (s->version != 0) {
      if (( s->version & 0x80U ) == 0) {
         return (char*)0x0;
      }

      lVar2 = ossl_quic_obj_get0_handshake_layer();
      if (s->version - 0x80U < 2) {
         pcVar3 = "QUICv1";
      }
 else {
         pcVar3 = (char*)0x0;
         if (lVar2 != 0) {
            pcVar3 = (char*)ssl_protocol_to_string(*(undefined4*)( lVar2 + 0x48 ));
            return pcVar3;
         }

      }

      return pcVar3;
   }

   pcVar3 = (char*)ssl_protocol_to_string(s->state);
   return pcVar3;
}
undefined8 SSL_get_handshake_rtt(uint *param_1, ulong *param_2) {
   ulong uVar1;
   ulong uVar2;
   undefined8 uVar3;
   if (param_1 == (uint*)0x0) {
      return 0xffffffff;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0xffffffff;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return 0xffffffff;
      }

   }

   uVar1 = *(ulong*)( param_1 + 0x22 );
   uVar3 = 0;
   if (( uVar1 != 0 ) && ( uVar2 = uVar2 != 0 )) {
      if (uVar2 < uVar1) {
         return 0xffffffff;
      }

      *param_2 = ( uVar2 - uVar1 ) / 1000;
      uVar3 = 1;
   }

   return uVar3;
}
X509 *SSL_get_certificate(SSL *ssl) {
   long lVar1;
   if (ssl != (SSL*)0x0) {
      if (ssl->version == 0) {
         if (*(undefined8**)&ssl[3].packet_length != (undefined8*)0x0) {
            return *(X509**)**(undefined8**)&ssl[3].packet_length;
         }

      }
 else if (( ssl->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(undefined8**)( lVar1 + 0x880 ) != (undefined8*)0x0 )) {
            return *(X509**)**(undefined8**)( lVar1 + 0x880 );
         }

         return (X509*)0x0;
      }

   }

   return (X509*)0x0;
}
evp_pkey_st *SSL_get_privatekey(SSL *ssl) {
   long lVar1;
   if (ssl != (SSL*)0x0) {
      if (ssl->version == 0) {
         if (*(long**)&ssl[3].packet_length != (long*)0x0) {
            return *(evp_pkey_st**)( **(long**)&ssl[3].packet_length + 8 );
         }

      }
 else if (( ssl->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long**)( lVar1 + 0x880 ) != (long*)0x0 )) {
            return *(evp_pkey_st**)( **(long**)( lVar1 + 0x880 ) + 8 );
         }

         return (evp_pkey_st*)0x0;
      }

   }

   return (evp_pkey_st*)0x0;
}
undefined8 *SSL_CTX_get0_certificate(long param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 0x158 );
   if (puVar1 != (undefined8*)0x0) {
      puVar1 = *(undefined8**)*puVar1;
   }

   return puVar1;
}
long *SSL_CTX_get0_privatekey(long param_1) {
   long *plVar1;
   plVar1 = *(long**)( param_1 + 0x158 );
   if (plVar1 != (long*)0x0) {
      plVar1 = *(long**)( *plVar1 + 8 );
   }

   return plVar1;
}
SSL_CIPHER *SSL_get_current_cipher(SSL *s) {
   long lVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         if (s[3].write_hash != (EVP_MD_CTX*)0x0) {
            return (SSL_CIPHER*)s[3].write_hash[0xf].update;
         }

      }
 else if (( s->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x900 ) != 0 )) {
            return *(SSL_CIPHER**)( *(long*)( lVar1 + 0x900 ) + 0x2f8 );
         }

         return (SSL_CIPHER*)0x0;
      }

   }

   return (SSL_CIPHER*)0x0;
}
undefined8 SSL_get_pending_cipher(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0xc0 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x300 );
         }

         return 0;
      }

   }

   return 0;
}
COMP_METHOD *SSL_get_current_compression(SSL *s) {
   undefined8 uVar1;
   COMP_METHOD *pCVar2;
   if (( s != (SSL*)0x0 ) && ( s->version == 0 )) {
      uVar1._0_4_ = s[4].first_packet;
      uVar1._4_4_ = s[4].client_version;
      /* WARNING: Could not recover jumptable at 0x001071c7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      pCVar2 = (COMP_METHOD*)( **(code**)( s[4].mode + 0x98 ) )(uVar1);
      return pCVar2;
   }

   return (COMP_METHOD*)0x0;
}
COMP_METHOD *SSL_get_current_expansion(SSL *s) {
   COMP_METHOD *pCVar1;
   if (( s != (SSL*)0x0 ) && ( s->version == 0 )) {
      /* WARNING: Could not recover jumptable at 0x00107207. Too many branches */
      /* WARNING: Treating indirect jump as call */
      pCVar1 = (COMP_METHOD*)( **(code**)( s[4].options + 0x98 ) )(s[4].max_cert_list);
      return pCVar1;
   }

   return (COMP_METHOD*)0x0;
}
undefined8 ssl_init_wbio_buffer(long param_1) {
   BIO_METHOD *type;
   BIO *pBVar1;
   long lVar2;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      return 1;
   }

   type = BIO_f_buffer();
   pBVar1 = BIO_new(type);
   if (pBVar1 != (BIO*)0x0) {
      lVar2 = BIO_int_ctrl(pBVar1, 0x75, 1, 0);
      if (0 < lVar2) {
         *(BIO**)( param_1 + 0x60 ) = pBVar1;
         pBVar1 = BIO_push(pBVar1, *(BIO**)( param_1 + 0x58 ));
         *(BIO**)( param_1 + 0x58 ) = pBVar1;
         ( **(code**)( *(long*)( param_1 + 0xc78 ) + 0x58 ) )(*(undefined8*)( param_1 + 0xc88 ), pBVar1);
         return 1;
      }

   }

   BIO_free(pBVar1);
   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x14d5, "ssl_init_wbio_buffer");
   ERR_set_error(0x14, 0x80007, 0);
   return 0;
}
undefined8 ssl_free_wbio_buffer(long param_1) {
   BIO *pBVar1;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      pBVar1 = BIO_pop(*(BIO**)( param_1 + 0x58 ));
      *(BIO**)( param_1 + 0x58 ) = pBVar1;
      ( **(code**)( *(long*)( param_1 + 0xc78 ) + 0x58 ) )(*(undefined8*)( param_1 + 0xc88 ), pBVar1);
      BIO_free(*(BIO**)( param_1 + 0x60 ));
      *(undefined8*)( param_1 + 0x60 ) = 0;
      return 1;
   }

   return 1;
}
void SSL_CTX_set_quiet_shutdown(SSL_CTX *ctx, int mode) {
   *(int*)( ctx->tlsext_tick_hmac_key + 8 ) = mode;
   return;
}
int SSL_CTX_get_quiet_shutdown(SSL_CTX *ctx) {
   return *(int*)( ctx->tlsext_tick_hmac_key + 8 );
}
void SSL_set_quiet_shutdown(SSL *ssl, int mode) {
   if (( ssl != (SSL*)0x0 ) && ( ssl->version == 0 )) {
      *(int*)&ssl->s3 = mode;
   }

   return;
}
int SSL_get_quiet_shutdown(SSL *ssl) {
   if (( ssl != (SSL*)0x0 ) && ( ssl->version == 0 )) {
      return *(int*)&ssl->s3;
   }

   return 0;
}
void SSL_set_shutdown(SSL *ssl, int mode) {
   if (( ssl != (SSL*)0x0 ) && ( ssl->version == 0 )) {
      *(int*)( (long)&ssl->s3 + 4 ) = mode;
   }

   return;
}
int SSL_get_shutdown(SSL *ssl) {
   uint uVar1;
   int iVar2;
   if (ssl == (SSL*)0x0) {
      uVar1 = 0;
   }
 else {
      if (ssl->version == 0) {
         return *(int*)( (long)&ssl->s3 + 4 );
      }

      uVar1 = ssl->version & 0x80;
      if (uVar1 != 0) {
         iVar2 = ossl_quic_get_shutdown();
         return iVar2;
      }

   }

   return uVar1;
}
int SSL_version(SSL *ssl) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   if (ssl == (SSL*)0x0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) == 0) {
         return 0;
      }

      lVar3 = ossl_quic_obj_get0_handshake_layer();
      iVar2 = 1;
      if (( 1 < ssl->version - 0x80U ) && ( iVar2 = lVar3 != 0 )) {
         iVar2 = *(int*)( lVar3 + 0x48 );
      }

      return iVar2;
   }

   return ssl->state;
}
void ssl_set_masks(SSL *param_1) {
   long lVar1;
   uint *puVar2;
   byte bVar3;
   uint uVar4;
   int iVar5;
   void *pvVar6;
   BIO *pBVar7;
   uint uVar8;
   BIO *pBVar9;
   uint uVar10;
   int iVar11;
   uint uVar12;
   ulong uVar13;
   long lVar14;
   uint local_64;
   uint local_60;
   lVar1 = *(long*)&param_1[3].packet_length;
   if (lVar1 == 0) {
      return;
   }

   uVar8 = 2;
   if (( *(long*)( lVar1 + 8 ) == 0 ) && ( *(long*)( lVar1 + 0x10 ) == 0 )) {
      uVar8 = ( uint )(*(int*)( lVar1 + 0x18 ) != 0) * 2;
   }

   puVar2 = *(uint**)&param_1[1].error;
   local_64 = *puVar2;
   uVar12 = puVar2[2];
   local_60 = puVar2[3];
   uVar4 = local_60 & 1;
   iVar5 = (int)*(undefined8*)( param_1->sid_ctx + 0xc );
   if (iVar5 < 7) {
      if (iVar5 == 6) {
         iVar11 = *(int*)&param_1->s2;
         lVar14 = *(long*)( lVar1 + 0x20 );
         uVar13 = 0;
         uVar10 = 0;
         goto LAB_0010757c;
      }

      uVar13 = 0;
      if (iVar5 == 5) {
         iVar11 = *(int*)&param_1->s2;
         lVar14 = *(long*)( lVar1 + 0x20 );
         uVar10 = 0;
         goto LAB_001075df;
      }

   }
 else {
      iVar11 = *(int*)&param_1->s2;
      if (iVar11 == 0) {
         pBVar9 = param_1[8].wbio;
         pBVar7 = param_1[8].bbio;
      }
 else {
         pBVar9 = *(BIO**)&param_1[8].rwstate;
         pBVar7 = (BIO*)param_1[8].handshake_func;
      }

      lVar14 = *(long*)( lVar1 + 0x20 );
      if (( ( pBVar9 == (BIO*)0x0 ) || ( pvVar6 = memchr(pBVar9, 2, (size_t)pBVar7) ),pvVar6 == (void*)0x0 )) {
         uVar13 = 0;
         uVar10 = 0;
      }
 else {
         uVar13 = ( ulong )(-(uint)(*(long *)(lVar14 + 0xf8) != 0) & 0x80);
         uVar10 = -(uint)(*(long *)(lVar14 + 0xf8) != 0) & 0x210;
      }

      LAB_0010757c:if (iVar11 == 0) {
         pBVar9 = param_1[8].wbio;
         pBVar7 = param_1[8].bbio;
      }
 else {
         pBVar9 = *(BIO**)&param_1[8].rwstate;
         pBVar7 = (BIO*)param_1[8].handshake_func;
      }

      if (( ( ( pBVar9 != (BIO*)0x0 ) && ( pvVar6 = memchr(pBVar9, 2, (size_t)pBVar7) ),pvVar6 != (void*)0x0 ) ) || ( *(long*)( lVar14 + 200 ) != 0 )) {
         uVar13 = 0x80;
         uVar10 = 0x210;
      }

      LAB_001075df:if (iVar11 == 0) {
         pBVar9 = param_1[8].wbio;
         pBVar7 = param_1[8].bbio;
      }
 else {
         pBVar9 = *(BIO**)&param_1[8].rwstate;
         pBVar7 = (BIO*)param_1[8].handshake_func;
      }

      if (( ( ( pBVar9 == (BIO*)0x0 ) || ( pvVar6 = memchr(pBVar9, 2, (size_t)pBVar7) ),pvVar6 == (void*)0x0 ) ) && ( *(long*)( lVar14 + 0xa0 ) == 0 )) {
         uVar8 = uVar8 | uVar10;
      }
 else {
         uVar13 = uVar13 | 0x20;
         uVar8 = uVar10 | uVar8 | 0x10;
      }

   }

   if (( local_64 & 1 ) == 0) {
      if (1 < iVar5) {
         if (*(int*)&param_1->s2 == 0) {
            pBVar9 = param_1[8].wbio;
            pBVar7 = param_1[8].bbio;
         }
 else {
            pBVar9 = *(BIO**)&param_1[8].rwstate;
            pBVar7 = (BIO*)param_1[8].handshake_func;
         }

         lVar14 = *(long*)( lVar1 + 0x20 );
         if (( ( ( pBVar9 != (BIO*)0x0 ) && ( pvVar6 = memchr(pBVar9, 2, (size_t)pBVar7) ),pvVar6 != (void*)0x0 ) ) || ( *(long*)( lVar14 + 0x28 ) != 0 )) {
            iVar5 = SSL_version(param_1);
            if (iVar5 >> 8 == 3) {
               iVar5 = SSL_version(param_1);
               local_64 = *puVar2;
               local_60 = puVar2[3];
               if (iVar5 == 0x303) goto LAB_0010764e;
            }
 else {
               local_64 = *puVar2;
               local_60 = puVar2[3];
            }

         }

      }

   }
 else {
      uVar8 = uVar8 | 1;
      LAB_0010764e:uVar13 = uVar13 | 1;
   }

   uVar13 = ( ulong )(uVar12 & 1) * 2 | uVar13;
   if (( local_64 & 0x1000 ) == 0) {
      uVar13 = uVar13 | 4;
      uVar12 = uVar8 & 1;
   }
 else {
      uVar13 = uVar13 | 5;
      uVar8 = uVar8 | 1;
      uVar12 = 1;
   }

   if (( local_60 & 0x1000 ) != 0) {
      uVar13 = uVar13 | 8;
   }

   iVar5 = SSL_version(param_1);
   if (( iVar5 >> 8 == 3 ) && ( iVar5 = iVar5 == 0x303 )) {
      if (( *(byte*)( (long)puVar2 + 5 ) & 0x10 ) != 0) {
         uVar13 = uVar13 | 1;
      }

      if (( ( *(byte*)( (long)puVar2 + 0x1d ) & 0x10 ) != 0 ) || ( ( *(byte*)( (long)puVar2 + 0x21 ) & 0x10 ) != 0 )) {
         uVar13 = uVar13 | 8;
      }

   }

   if (uVar4 != 0) {
      bVar3 = X509_get_key_usage(*(undefined8*)( *(long*)( lVar1 + 0x20 ) + 0x78 ));
      uVar13 = uVar13 | ( ulong )(( uint )(bVar3 >> 7) & puVar2[3] >> 1) << 3;
   }

   uVar4 = (uint)uVar13;
   if (( ( uVar13 & 8 ) != 0 ) || ( iVar5 = (int)*(undefined8*)( param_1->sid_ctx + 0xc ) ),iVar5 < 8) goto LAB_00107798;
   if (*(int*)&param_1->s2 == 0) {
      pBVar9 = param_1[8].wbio;
      pBVar7 = param_1[8].bbio;
   }
 else {
      pBVar9 = *(BIO**)&param_1[8].rwstate;
      pBVar7 = (BIO*)param_1[8].handshake_func;
   }

   if (( pBVar9 == (BIO*)0x0 ) || ( pvVar6 = memchr(pBVar9, 2, (size_t)pBVar7) ),pvVar6 == (void*)0x0) {
      lVar1 = *(long*)( *(long*)&param_1[3].packet_length + 0x20 );
      if (*(long*)( lVar1 + 0x118 ) != 0) {
         lVar1 = *(long*)( lVar1 + 0x120 );
         goto joined_r0x00107715;
      }

   }
 else {
      lVar1 = *(long*)( *(long*)( *(long*)&param_1[3].packet_length + 0x20 ) + 0x120 );
      joined_r0x00107715:if (( lVar1 != 0 ) && ( ( *(byte*)( (long)puVar2 + 0x1d ) & 1 ) != 0 )) {
         iVar5 = SSL_version(param_1);
         if (( iVar5 >> 8 == 3 ) && ( iVar5 = iVar5 == 0x303 )) {
            uVar4 = uVar4 | 8;
            goto LAB_00107798;
         }

         iVar5 = *(int*)( param_1->sid_ctx + 0xc );
      }

   }

   if (8 < iVar5) {
      if (*(int*)&param_1->s2 == 0) {
         pBVar9 = param_1[8].wbio;
         pBVar7 = param_1[8].bbio;
      }
 else {
         pBVar9 = *(BIO**)&param_1[8].rwstate;
         pBVar7 = (BIO*)param_1[8].handshake_func;
      }

      if (( pBVar9 == (BIO*)0x0 ) || ( pvVar6 = memchr(pBVar9, 2, (size_t)pBVar7) ),pvVar6 == (void*)0x0) {
         lVar1 = *(long*)( *(long*)&param_1[3].packet_length + 0x20 );
         if (*(long*)( lVar1 + 0x140 ) == 0) goto LAB_00107798;
         lVar1 = *(long*)( lVar1 + 0x148 );
      }
 else {
         lVar1 = *(long*)( *(long*)( *(long*)&param_1[3].packet_length + 0x20 ) + 0x148 );
      }

      if (( ( lVar1 != 0 ) && ( ( *(byte*)( (long)puVar2 + 0x21 ) & 1 ) != 0 ) ) && ( iVar5 = SSL_version(param_1) ),iVar5 >> 8 == 3) {
         iVar5 = SSL_version(param_1);
         if (iVar5 == 0x303) {
            uVar4 = uVar4 | 8;
         }

      }

   }

   LAB_00107798:*(uint*)( (long)&param_1[1].kssl_ctx + 4 ) = uVar4 | 0x10;
   uVar4 = uVar8 | 0x4c;
   if (uVar12 == 0) {
      uVar4 = uVar8 | 0xc;
   }

   if (( uVar4 & 2 ) != 0) {
      uVar4 = uVar4 | 0x100;
   }

   *(uint*)&param_1[1].kssl_ctx = uVar4 | 0x80;
   return;
}
uint SSL_client_version(uint *param_1) {
   code *pcVar1;
   uint uVar2;
   long lVar3;
   if (param_1 == (uint*)0x0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0;
      }

      lVar3 = ossl_quic_obj_get0_handshake_layer();
      uVar2 = 1;
      if (( 1 < *param_1 - 0x80 ) && ( uVar2 = lVar3 != 0 )) {
         uVar2 = *(uint*)( lVar3 + 0x9d4 );
      }

      return uVar2;
   }

   return param_1[0x275];
}
SSL_CTX *SSL_get_SSL_CTX(SSL *ssl) {
   return (SSL_CTX*)ssl->method;
}
int SSL_CTX_set_default_verify_paths(SSL_CTX *ctx) {
   int iVar1;
   iVar1 = X509_STORE_set_default_paths_ex(ctx->session_cache_size, ctx->method, ctx[1].psk_client_callback);
   return iVar1;
}
bool SSL_CTX_set_default_verify_dir(long param_1) {
   X509_LOOKUP_METHOD *m;
   X509_LOOKUP *ctx;
   m = X509_LOOKUP_hash_dir();
   ctx = X509_STORE_add_lookup(*(X509_STORE**)( param_1 + 0x28 ), m);
   if (ctx != (X509_LOOKUP*)0x0) {
      ERR_set_mark();
      X509_LOOKUP_ctrl(ctx, 2, (char*)0x0, 3, (char**)0x0);
      ERR_pop_to_mark();
   }

   return ctx != (X509_LOOKUP*)0x0;
}
bool SSL_CTX_set_default_verify_file(undefined8 *param_1) {
   X509_LOOKUP_METHOD *m;
   X509_LOOKUP *pXVar1;
   m = X509_LOOKUP_file();
   pXVar1 = X509_STORE_add_lookup((X509_STORE*)param_1[5], m);
   if (pXVar1 != (X509_LOOKUP*)0x0) {
      ERR_set_mark();
      X509_LOOKUP_ctrl_ex(pXVar1, 1, 0, 3, 0, *param_1, param_1[0x8e]);
      ERR_pop_to_mark();
   }

   return pXVar1 != (X509_LOOKUP*)0x0;
}
bool SSL_CTX_set_default_verify_store(undefined8 *param_1) {
   X509_LOOKUP_METHOD *m;
   X509_LOOKUP *pXVar1;
   m = (X509_LOOKUP_METHOD*)X509_LOOKUP_store();
   pXVar1 = X509_STORE_add_lookup((X509_STORE*)param_1[5], m);
   if (pXVar1 != (X509_LOOKUP*)0x0) {
      ERR_set_mark();
      X509_LOOKUP_ctrl_ex(pXVar1, 3, 0, 0, 0, *param_1, param_1[0x8e]);
      ERR_pop_to_mark();
   }

   return pXVar1 != (X509_LOOKUP*)0x0;
}
void SSL_CTX_load_verify_file(undefined8 *param_1, undefined8 param_2) {
   X509_STORE_load_file_ex(param_1[5], param_2, *param_1, param_1[0x8e]);
   return;
}
void SSL_CTX_load_verify_dir(long param_1) {
   X509_STORE_load_path(*(undefined8*)( param_1 + 0x28 ));
   return;
}
void SSL_CTX_load_verify_store(undefined8 *param_1, undefined8 param_2) {
   X509_STORE_load_store_ex(param_1[5], param_2, *param_1, param_1[0x8e]);
   return;
}
int SSL_CTX_load_verify_locations(SSL_CTX *ctx, char *CAfile, char *CApath) {
   int iVar1;
   uint uVar2;
   if (CApath == (char*)0x0 && CAfile == (char*)0x0) {
      return 0;
   }

   if (CAfile != (char*)0x0) {
      iVar1 = SSL_CTX_load_verify_file();
      if (iVar1 == 0) {
         return 0;
      }

   }

   uVar2 = 1;
   if (CApath != (char*)0x0) {
      iVar1 = SSL_CTX_load_verify_dir(ctx, CApath);
      uVar2 = ( uint )(iVar1 != 0);
   }

   return uVar2;
}
void SSL_set_info_callback(SSL *ssl, cb *cb) {
   if (ssl == (SSL*)0x0) {
      return;
   }

   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) == 0) {
         return;
      }

      ssl = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (ssl == (SSL*)0x0) {
         return;
      }

   }

   ssl[3].info_callback = (_func_3152*)cb;
   return;
}
void SSL_get_info_callback(SSL *ssl, int type, int val) {
   long lVar1;
   if (ssl != (SSL*)0x0) {
      if (ssl->version == 0) {
         return;
      }

      if (( ssl->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return;
         }

         return;
      }

   }

   return;
}
void SSL_set_verify_result(SSL *ssl, long v) {
   if (ssl == (SSL*)0x0) {
      return;
   }

   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) == 0) {
         return;
      }

      ssl = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (ssl == (SSL*)0x0) {
         return;
      }

   }

   ssl[3].verify_result = v;
   return;
}
long SSL_get_verify_result(SSL *ssl) {
   long lVar1;
   if (ssl != (SSL*)0x0) {
      if (ssl->version == 0) {
         return ssl[3].verify_result;
      }

      if (( ssl->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(long*)( lVar1 + 0x998 );
         }

         return 0;
      }

   }

   return 0;
}
ulong SSL_get_client_random(uint *param_1, uint *param_2, ulong param_3) {
   uint *puVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   uint uVar5;
   long lVar6;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_00107f00;
      }

      return 0;
   }

   LAB_00107f00:uVar2 = 0x20;
   if (param_3 != 0) {
      puVar1 = param_1 + 0x62;
      if (param_3 < 0x21) {
         uVar2 = param_3;
      }

      uVar3 = (uint)uVar2;
      uVar4 = uVar2 & 0xffffffff;
      if (uVar3 < 8) {
         if (( uVar2 & 4 ) == 0) {
            if (( uVar3 != 0 ) && ( *(char*)param_2 = (char)*puVar1(uVar2 & 2) != 0 )) {
               *(undefined2*)( (long)param_2 + ( uVar4 - 2 ) ) = *(undefined2*)( (long)param_1 + uVar4 + 0x186 );
            }

         }
 else {
            *param_2 = *puVar1;
            *(undefined4*)( (long)param_2 + ( uVar4 - 4 ) ) = *(undefined4*)( (long)param_1 + uVar4 + 0x184 );
         }

      }
 else {
         *(undefined8*)param_2 = *(undefined8*)( param_1 + 0x62 );
         *(undefined8*)( (long)param_2 + ( ( uVar2 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)param_1 + ( uVar2 & 0xffffffff ) + 0x180 );
         lVar6 = (long)param_2 - ( ( ulong )(param_2 + 2) & 0xfffffffffffffff8 );
         uVar3 = uVar3 + (int)lVar6 & 0xfffffff8;
         if (7 < uVar3) {
            uVar5 = 0;
            do {
               uVar4 = (ulong)uVar5;
               uVar5 = uVar5 + 8;
               *(undefined8*)( ( ( ulong )(param_2 + 2) & 0xfffffffffffffff8 ) + uVar4 ) = *(undefined8*)( (long)puVar1 + ( uVar4 - lVar6 ) );
            }
 while ( uVar5 < uVar3 );
         }

      }

   }

   return uVar2;
}
ulong SSL_get_server_random(uint *param_1, uint *param_2, ulong param_3) {
   uint *puVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   uint uVar5;
   long lVar6;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_00107ff0;
      }

      return 0;
   }

   LAB_00107ff0:uVar2 = 0x20;
   if (param_3 != 0) {
      puVar1 = param_1 + 0x5a;
      if (param_3 < 0x21) {
         uVar2 = param_3;
      }

      uVar3 = (uint)uVar2;
      uVar4 = uVar2 & 0xffffffff;
      if (uVar3 < 8) {
         if (( uVar2 & 4 ) == 0) {
            if (( uVar3 != 0 ) && ( *(char*)param_2 = (char)*puVar1(uVar2 & 2) != 0 )) {
               *(undefined2*)( (long)param_2 + ( uVar4 - 2 ) ) = *(undefined2*)( (long)param_1 + uVar4 + 0x166 );
            }

         }
 else {
            *param_2 = *puVar1;
            *(undefined4*)( (long)param_2 + ( uVar4 - 4 ) ) = *(undefined4*)( (long)param_1 + uVar4 + 0x164 );
         }

      }
 else {
         *(undefined8*)param_2 = *(undefined8*)( param_1 + 0x5a );
         *(undefined8*)( (long)param_2 + ( ( uVar2 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)param_1 + ( uVar2 & 0xffffffff ) + 0x160 );
         lVar6 = (long)param_2 - ( ( ulong )(param_2 + 2) & 0xfffffffffffffff8 );
         uVar3 = uVar3 + (int)lVar6 & 0xfffffff8;
         if (7 < uVar3) {
            uVar5 = 0;
            do {
               uVar4 = (ulong)uVar5;
               uVar5 = uVar5 + 8;
               *(undefined8*)( ( ( ulong )(param_2 + 2) & 0xfffffffffffffff8 ) + uVar4 ) = *(undefined8*)( (long)puVar1 + ( uVar4 - lVar6 ) );
            }
 while ( uVar5 < uVar3 );
         }

      }

   }

   return uVar2;
}
ulong SSL_SESSION_get_master_key(long param_1, void *param_2, ulong param_3) {
   ulong __n;
   __n = *(ulong*)( param_1 + 8 );
   if (param_3 != 0) {
      if (param_3 < __n) {
         __n = param_3;
      }

      memcpy(param_2, (void*)( param_1 + 0x50 ), __n);
   }

   return __n;
}
undefined8 SSL_SESSION_set1_master_key(long param_1, void *param_2, size_t param_3) {
   if (0x200 < param_3) {
      return 0;
   }

   memcpy((void*)( param_1 + 0x50 ), param_2, param_3);
   *(size_t*)( param_1 + 8 ) = param_3;
   return 1;
}
int SSL_set_ex_data(SSL *ssl, int idx, void *data) {
   int iVar1;
   iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA*)&ssl->handshake_func, idx, data);
   return iVar1;
}
void *SSL_get_ex_data(SSL *ssl, int idx) {
   void *pvVar1;
   pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA*)&ssl->handshake_func, idx);
   return pvVar1;
}
int SSL_CTX_set_ex_data(SSL_CTX *ssl, int idx, void *data) {
   int iVar1;
   iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA*)&ssl->sha1, idx, data);
   return iVar1;
}
void *SSL_CTX_get_ex_data(SSL_CTX *ssl, int idx) {
   void *pvVar1;
   pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA*)&ssl->sha1, idx);
   return pvVar1;
}
X509_STORE *SSL_CTX_get_cert_store(SSL_CTX *param_1) {
   return (X509_STORE*)param_1->session_cache_size;
}
void SSL_CTX_set_cert_store(SSL_CTX *param_1, X509_STORE *param_2) {
   X509_STORE_free((X509_STORE*)param_1->session_cache_size);
   param_1->session_cache_size = (ulong)param_2;
   return;
}
void SSL_CTX_set1_cert_store(SSL_CTX *param_1, X509_STORE *param_2) {
   int iVar1;
   if (param_2 != (X509_STORE*)0x0) {
      iVar1 = X509_STORE_up_ref(param_2);
      if (iVar1 == 0) {
         return;
      }

   }

   SSL_CTX_set_cert_store(param_1, param_2);
   return;
}
int SSL_want(SSL *s) {
   int iVar1;
   long lVar2;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         return *(int*)&s->packet;
      }

      if (( s->version & 0x80U ) != 0) {
         lVar2 = ossl_quic_obj_get0_handshake_layer();
         if (( s->version & 0x80 ) != 0) {
            iVar1 = ossl_quic_want();
            return iVar1;
         }

         if (lVar2 != 0) {
            return *(int*)( lVar2 + 0x68 );
         }

         return 1;
      }

   }

   return 1;
}
uint ossl_ssl_get_error(SSL *param_1, int param_2, int param_3) {
   int iVar1;
   uint uVar2;
   BIO *b;
   SSL *pSVar3;
   ulong uVar4;
   if (param_1 == (SSL*)0x0) {
      return ( uint )(param_2 < 1);
   }

   if (param_1->version == 0) {
      if (0 < param_2) {
         return 0;
      }

      pSVar3 = param_1;
      if (param_3 != 0) goto LAB_001083f0;
   }
 else {
      if (( param_1->version & 0x80U ) == 0) {
         return ( uint )(param_2 < 1);
      }

      pSVar3 = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (0 < param_2) {
         return 0;
      }

      if (( param_1->version & 0x80 ) == 0) {
         if (pSVar3 == (SSL*)0x0) {
            return 1;
         }

         if (param_3 == 0) goto LAB_001082a3;
         LAB_001083f0:uVar4 = ERR_peek_error();
         if (uVar4 != 0) {
            if (( uVar4 & 0x80000000 ) != 0) {
               return 5;
            }

            if ((char)( uVar4 >> 0x17 ) == '\x02') {
               return 5;
            }

            return 1;
         }

      }
 else {
         uVar2 = ossl_quic_get_error(param_1);
         if (uVar2 != 0) {
            return uVar2;
         }

         if (pSVar3 == (SSL*)0x0) {
            return 1;
         }

         if (param_3 != 0) goto LAB_001083f0;
      }

      if (( param_1->version & 0x80U ) != 0) goto LAB_001082c5;
   }

   LAB_001082a3:iVar1 = SSL_want(param_1);
   if (iVar1 == 3) {
      b = SSL_get_rbio(param_1);
      iVar1 = BIO_test_flags(b, 1);
      if (iVar1 != 0) {
         return 2;
      }

      iVar1 = BIO_test_flags(b, 2);
      if (iVar1 != 0) {
         return 3;
      }

      iVar1 = BIO_test_flags(b, 4);
      if (iVar1 != 0) goto LAB_0010839a;
   }

   iVar1 = SSL_want(param_1);
   if (iVar1 == 2) {
      b = (BIO*)pSVar3->init_msg;
      iVar1 = BIO_test_flags(b, 2);
      if (iVar1 != 0) {
         return 3;
      }

      iVar1 = BIO_test_flags(b, 1);
      if (iVar1 != 0) {
         return 2;
      }

      iVar1 = BIO_test_flags(b, 4);
      if (iVar1 != 0) {
         LAB_0010839a:iVar1 = BIO_get_retry_reason(b);
         if (iVar1 == 2) {
            return 7;
         }

         if (iVar1 != 3) {
            return 5;
         }

         return 8;
      }

   }

   LAB_001082c5:uVar2 = SSL_want(param_1);
   if (uVar2 != 4) {
      iVar1 = SSL_want(param_1);
      uVar2 = 0xc;
      if (iVar1 != 8) {
         iVar1 = SSL_want(param_1);
         uVar2 = 9;
         if (iVar1 != 5) {
            iVar1 = SSL_want(param_1);
            uVar2 = 10;
            if (iVar1 != 6) {
               iVar1 = SSL_want(param_1);
               if (iVar1 == 7) {
                  uVar2 = 0xb;
               }
 else {
                  if (( ( (ulong)pSVar3->s3 & 0x200000000 ) == 0 ) || ( *(int*)( (long)&pSVar3->mode + 4 ) != 0 )) {
                     return 5;
                  }

                  uVar2 = 6;
               }

            }

         }

      }

   }

   return uVar2;
}
int SSL_get_error(SSL *s, int ret_code) {
   int iVar1;
   iVar1 = ossl_ssl_get_error(s, ret_code, 1);
   return iVar1;
}
int SSL_CTX_use_psk_identity_hint(SSL_CTX *ctx, char *identity_hint) {
   long lVar1;
   size_t sVar2;
   char *pcVar3;
   if (identity_hint == (char*)0x0) {
      CRYPTO_free(*(void**)( *(long*)ctx->sid_ctx + 0xa8 ));
      *(undefined8*)( *(long*)ctx->sid_ctx + 0xa8 ) = 0;
      return 1;
   }

   sVar2 = strlen(identity_hint);
   if (sVar2 < 0x101) {
      CRYPTO_free(*(void**)( *(long*)ctx->sid_ctx + 0xa8 ));
      lVar1 = *(long*)ctx->sid_ctx;
      pcVar3 = CRYPTO_strdup(identity_hint, "ssl/ssl_lib.c", 0x167e);
      *(char**)( lVar1 + 0xa8 ) = pcVar3;
      return (int)( *(long*)( *(long*)ctx->sid_ctx + 0xa8 ) != 0 );
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x1679, "SSL_CTX_use_psk_identity_hint");
   ERR_set_error(0x14, 0x92, 0);
   return 0;
}
int SSL_use_psk_identity_hint(SSL *s, char *identity_hint) {
   long lVar1;
   uint uVar2;
   size_t sVar3;
   char *pcVar4;
   if (s == (SSL*)0x0) {
      return 0;
   }

   if (s->version == 0) {
      LAB_0010866d:if (identity_hint == (char*)0x0) {
         CRYPTO_free(*(void**)( *(long*)&s[3].packet_length + 0xa8 ));
         *(undefined8*)( *(long*)&s[3].packet_length + 0xa8 ) = 0;
         return 1;
      }

      sVar3 = strlen(identity_hint);
      if (sVar3 < 0x101) {
         CRYPTO_free(*(void**)( *(long*)&s[3].packet_length + 0xa8 ));
         lVar1 = *(long*)&s[3].packet_length;
         pcVar4 = CRYPTO_strdup(identity_hint, "ssl/ssl_lib.c", 0x1693);
         *(char**)( lVar1 + 0xa8 ) = pcVar4;
         uVar2 = ( uint )(*(long*)( *(long*)&s[3].packet_length + 0xa8 ) != 0);
      }
 else {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x168e, "SSL_use_psk_identity_hint");
         ERR_set_error(0x14, 0x92, 0);
         uVar2 = 0;
      }

   }
 else {
      if (( s->version & 0x80U ) != 0) {
         s = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (s != (SSL*)0x0) goto LAB_0010866d;
      }

      uVar2 = 0;
   }

   return uVar2;
}
char *SSL_get_psk_identity_hint(SSL *s) {
   long lVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         if (s[3].write_hash != (EVP_MD_CTX*)0x0) {
            return (char*)s[3].write_hash[0xe].digest;
         }

      }
 else if (( s->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x900 ) != 0 )) {
            return *(char**)( *(long*)( lVar1 + 0x900 ) + 0x2a0 );
         }

         return (char*)0x0;
      }

   }

   return (char*)0x0;
}
char *SSL_get_psk_identity(SSL *s) {
   long lVar1;
   if (s != (SSL*)0x0) {
      if (s->version == 0) {
         if (s[3].write_hash != (EVP_MD_CTX*)0x0) {
            return (char*)s[3].write_hash[0xe].engine;
         }

      }
 else if (( s->version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x900 ) != 0 )) {
            return *(char**)( *(long*)( lVar1 + 0x900 ) + 0x2a8 );
         }

         return (char*)0x0;
      }

   }

   return (char*)0x0;
}
void SSL_set_psk_client_callback(SSL *ssl, psk_client_callback *psk_client_callback) {
   if (ssl == (SSL*)0x0) {
      return;
   }

   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) == 0) {
         return;
      }

      ssl = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (ssl == (SSL*)0x0) {
         return;
      }

   }

   ssl[3].kssl_ctx = (KSSL_CTX*)psk_client_callback;
   return;
}
void SSL_CTX_set_psk_client_callback(SSL_CTX *ctx, psk_client_callback *psk_client_callback) {
   ctx[1].app_gen_cookie_cb = (_func_3092*)psk_client_callback;
   return;
}
void SSL_set_psk_server_callback(SSL *ssl, psk_server_callback *psk_server_callback) {
   if (ssl == (SSL*)0x0) {
      return;
   }

   if (ssl->version != 0) {
      if (( ssl->version & 0x80U ) == 0) {
         return;
      }

      ssl = (SSL*)ossl_quic_obj_get0_handshake_layer();
      if (ssl == (SSL*)0x0) {
         return;
      }

   }

   ssl[3].psk_client_callback = (_func_3153*)psk_server_callback;
   return;
}
void SSL_CTX_set_psk_server_callback(SSL_CTX *ctx, psk_server_callback *psk_server_callback) {
   ctx[1].app_verify_cookie_cb = (_func_3093*)psk_server_callback;
   return;
}
void SSL_set_psk_find_session_callback(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined8*)( param_1 + 0x260 ) = param_2;
   return;
}
void SSL_CTX_set_psk_find_session_callback(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x330 ) = param_2;
   return;
}
void SSL_set_psk_use_session_callback(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined8*)( param_1 + 0x262 ) = param_2;
   return;
}
void SSL_CTX_set_psk_use_session_callback(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x338 ) = param_2;
   return;
}
void SSL_CTX_set_msg_callback(SSL_CTX *ctx, cb *cb) {
   SSL_CTX_callback_ctrl(ctx, 0xf, (_func_3378*)cb);
   return;
}
void SSL_set_msg_callback(SSL *ssl, cb *cb) {
   SSL_callback_ctrl(ssl, 0xf, (_func_3375*)cb);
   return;
}
void SSL_CTX_set_not_resumable_session_callback(SSL_CTX *param_1, _func_3378 *param_2) {
   SSL_CTX_callback_ctrl(param_1, 0x4f, param_2);
   return;
}
void SSL_set_not_resumable_session_callback(SSL *param_1, _func_3375 *param_2) {
   SSL_callback_ctrl(param_1, 0x4f, param_2);
   return;
}
void SSL_CTX_set_record_padding_callback(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x408 ) = param_2;
   return;
}
void SSL_CTX_set_record_padding_callback_arg(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x410 ) = param_2;
   return;
}
undefined8 SSL_CTX_get_record_padding_callback_arg(long param_1) {
   return *(undefined8*)( param_1 + 0x410 );
}
undefined8 SSL_CTX_set_block_padding_ex(long param_1, ulong param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 8 );
   lVar2 = OSSL_QUIC_client_method();
   if (( ( lVar1 == lVar2 ) || ( lVar1 = *(long*)( param_1 + 8 ) ),lVar2 = OSSL_QUIC_client_thread_method(),lVar1 == lVar2 )) {
      if (1 < ( param_2 | param_3 )) {
         return 0;
      }

      *(undefined8*)( param_1 + 0x418 ) = 0;
      if (param_3 != 1) goto LAB_00108aca;
   }
 else {
      if (param_2 == 1) {
         param_2 = 0;
      }
 else if (0x4000 < param_2) {
         return 0;
      }

      *(ulong*)( param_1 + 0x418 ) = param_2;
      if (param_3 != 1) {
         if (0x4000 < param_3) {
            return 0;
         }

         LAB_00108aca:*(ulong*)( param_1 + 0x420 ) = param_3;
         return 1;
      }

   }

   *(undefined8*)( param_1 + 0x420 ) = 0;
   return 1;
}
void SSL_CTX_set_block_padding(undefined8 param_1, undefined8 param_2) {
   SSL_CTX_set_block_padding_ex(param_1, param_2, param_2);
   return;
}
undefined8 SSL_set_record_padding_callback(SSL *param_1, uchar *param_2) {
   if (param_1 == (SSL*)0x0) {
      return 0;
   }

   if (param_1->version != 0) {
      return 0;
   }

   SSL_get_wbio(param_1);
   param_1[4].tlsext_ecpointformatlist = param_2;
   return 1;
}
void SSL_set_record_padding_callback_arg(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined8*)( param_1 + 0x33c ) = param_2;
   return;
}
undefined8 SSL_get_record_padding_callback_arg(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0x33c );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0xcf0 );
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_set_block_padding_ex(uint *param_1, ulong param_2, ulong param_3) {
   uint *puVar1;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   puVar1 = param_1;
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0;
      }

      puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (puVar1 == (uint*)0x0) {
         return 0;
      }

      if (( *param_1 & 0x80 ) != 0) {
         if (1 < ( param_2 | param_3 )) {
            return 0;
         }

         puVar1[0x33e] = 0;
         puVar1[0x33f] = 0;
         if (param_3 == 1) goto LAB_00108cd8;
         goto LAB_00108c73;
      }

   }

   if (param_2 == 1) {
      param_2 = 0;
   }
 else if (0x4000 < param_2) {
      return 0;
   }

   *(ulong*)( puVar1 + 0x33e ) = param_2;
   if (param_3 == 1) {
      LAB_00108cd8:puVar1[0x340] = 0;
      puVar1[0x341] = 0;
      return 1;
   }

   if (0x4000 < param_3) {
      return 0;
   }

   LAB_00108c73:*(ulong*)( puVar1 + 0x340 ) = param_3;
   return 1;
}
void SSL_set_block_padding(undefined8 param_1, undefined8 param_2) {
   SSL_set_block_padding_ex(param_1, param_2, param_2);
   return;
}
undefined8 SSL_set_num_tickets(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_00108d24;
      }

      return 0;
   }

   LAB_00108d24:*(undefined8*)( param_1 + 0x554 ) = param_2;
   return 1;
}
undefined8 SSL_get_num_tickets(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0x554 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x1550 );
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_CTX_set_num_tickets(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x440 ) = param_2;
   return 1;
}
undefined8 SSL_CTX_get_num_tickets(long param_1) {
   return *(undefined8*)( param_1 + 0x440 );
}
undefined8 ssl_handshake_hash(long param_1, uchar *param_2, ulong param_3, ulong *param_4) {
   EVP_MD_CTX *in;
   int iVar1;
   int iVar2;
   EVP_MD_CTX *out;
   undefined8 uVar3;
   in = *(EVP_MD_CTX**)( param_1 + 0x1b0 );
   iVar1 = EVP_MD_CTX_get_size_ex(in);
   if (( iVar1 < 0 ) || ( param_3 < (ulong)(long)iVar1 )) {
      ERR_new();
      uVar3 = 0x17b1;
   }
 else {
      out = (EVP_MD_CTX*)EVP_MD_CTX_new();
      if (out != (EVP_MD_CTX*)0x0) {
         iVar2 = EVP_MD_CTX_copy_ex(out, in);
         if (iVar2 != 0) {
            iVar2 = EVP_DigestFinal_ex(out, param_2, (uint*)0x0);
            if (0 < iVar2) {
               *param_4 = (long)iVar1;
               uVar3 = 1;
               goto LAB_00108e50;
            }

         }

         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x17bd, "ssl_handshake_hash");
         uVar3 = 0;
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         goto LAB_00108e50;
      }

      ERR_new();
      uVar3 = 0x17b7;
   }

   out = (EVP_MD_CTX*)0x0;
   ERR_set_debug("ssl/ssl_lib.c", uVar3, "ssl_handshake_hash");
   uVar3 = 0;
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   LAB_00108e50:EVP_MD_CTX_free(out);
   return uVar3;
}
uint SSL_session_reused(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return param_1[0x142];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(uint*)( lVar1 + 0x508 );
         }

         return 0;
      }

   }

   return 0;
}
uint SSL_is_server(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return param_1[0x1e];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(uint*)( lVar1 + 0x78 );
         }

         return 0;
      }

   }

   return 0;
}
void SSL_set_debug(SSL *s, int debug) {
   return;
}
void SSL_set_security_level(uint *param_1, undefined4 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined4*)( *(long*)( param_1 + 0x220 ) + 0x98 ) = param_2;
   return;
}
undefined4 SSL_get_security_level(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined4*)( *(long*)( param_1 + 0x220 ) + 0x98 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined4*)( *(long*)( lVar1 + 0x880 ) + 0x98 );
         }

         return 0;
      }

   }

   return 0;
}
void SSL_set_security_callback(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined8*)( *(long*)( param_1 + 0x220 ) + 0x90 ) = param_2;
   return;
}
undefined8 SSL_get_security_callback(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( *(long*)( param_1 + 0x220 ) + 0x90 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( *(long*)( lVar1 + 0x880 ) + 0x90 );
         }

         return 0;
      }

   }

   return 0;
}
void SSL_set0_security_ex_data(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return;
      }

      param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (param_1 == (uint*)0x0) {
         return;
      }

   }

   *(undefined8*)( *(long*)( param_1 + 0x220 ) + 0xa0 ) = param_2;
   return;
}
undefined8 SSL_get0_security_ex_data(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( *(long*)( param_1 + 0x220 ) + 0xa0 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( *(long*)( lVar1 + 0x880 ) + 0xa0 );
         }

         return 0;
      }

   }

   return 0;
}
void SSL_CTX_set_security_level(long param_1, undefined4 param_2) {
   *(undefined4*)( *(long*)( param_1 + 0x158 ) + 0x98 ) = param_2;
   return;
}
undefined4 SSL_CTX_get_security_level(long param_1) {
   return *(undefined4*)( *(long*)( param_1 + 0x158 ) + 0x98 );
}
void SSL_CTX_set_security_callback(long param_1, undefined8 param_2) {
   *(undefined8*)( *(long*)( param_1 + 0x158 ) + 0x90 ) = param_2;
   return;
}
undefined8 SSL_CTX_get_security_callback(long param_1) {
   return *(undefined8*)( *(long*)( param_1 + 0x158 ) + 0x90 );
}
void SSL_CTX_set0_security_ex_data(long param_1, undefined8 param_2) {
   *(undefined8*)( *(long*)( param_1 + 0x158 ) + 0xa0 ) = param_2;
   return;
}
undefined8 SSL_CTX_get0_security_ex_data(long param_1) {
   return *(undefined8*)( *(long*)( param_1 + 0x158 ) + 0xa0 );
}
undefined8 SSL_CTX_get_options(long param_1) {
   return *(undefined8*)( param_1 + 0x138 );
}
undefined8 SSL_get_options(uint *param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0x26c );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( *param_1 & 0x80 ) != 0) {
            uVar2 = ossl_quic_get_options();
            return uVar2;
         }

         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x9b0 );
         }

         return 0;
      }

   }

   return 0;
}
void SSL_CTX_set_options(long param_1, ulong param_2) {
   *(ulong*)( param_1 + 0x138 ) = *(ulong*)( param_1 + 0x138 ) | param_2;
   return;
}
undefined8 SSL_set_options(uint *param_1, ulong param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (uint*)0x0) {
      uVar1 = 0;
   }
 else {
      if (( *param_1 & 0x80 ) != 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar1 = ossl_quic_set_options();
            return uVar1;
         }

         goto LAB_00109471;
      }

      uVar1 = 0;
      if (*param_1 == 0) {
         *(ulong*)( param_1 + 0x26c ) = *(ulong*)( param_1 + 0x26c ) | param_2;
         OSSL_PARAM_construct_uint64(&local_a8, "options", param_1 + 0x26c);
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         local_58 = local_88;
         OSSL_PARAM_construct_end(&local_a8);
         local_30 = local_88;
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_40 = local_98;
         uStack_38 = uStack_90;
         ( **(code**)( *(long*)( param_1 + 0x31c ) + 0x90 ) )(*(undefined8*)( param_1 + 800 ), &local_78);
         ( **(code**)( *(long*)( param_1 + 0x31e ) + 0x90 ) )(*(undefined8*)( param_1 + 0x322 ), &local_78);
         uVar1 = *(undefined8*)( param_1 + 0x26c );
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   LAB_00109471:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void SSL_CTX_clear_options(long param_1, ulong param_2) {
   *(ulong*)( param_1 + 0x138 ) = ~param_2 & *(ulong*)( param_1 + 0x138 );
   return;
}
undefined8 SSL_clear_options(uint *param_1, ulong param_2) {
   uint *puVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (uint*)0x0) {
      LAB_001095a4:uVar2 = 0;
   }
 else {
      puVar1 = param_1;
      if (*param_1 != 0) {
         if (( *param_1 & 0x80 ) != 0) {
            puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer();
            if (( *param_1 & 0x80 ) != 0) {
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar2 = ossl_quic_clear_options(param_1);
                  return uVar2;
               }

               goto LAB_001095fc;
            }

            if (puVar1 != (uint*)0x0) goto LAB_001094d6;
         }

         goto LAB_001095a4;
      }

      LAB_001094d6:*(ulong*)( puVar1 + 0x26c ) = *(ulong*)( puVar1 + 0x26c ) & ~param_2;
      OSSL_PARAM_construct_uint64(&local_a8, "options", puVar1 + 0x26c);
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      local_58 = local_88;
      OSSL_PARAM_construct_end(&local_a8);
      local_30 = local_88;
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_40 = local_98;
      uStack_38 = uStack_90;
      ( **(code**)( *(long*)( puVar1 + 0x31c ) + 0x90 ) )(*(undefined8*)( puVar1 + 800 ), &local_78);
      ( **(code**)( *(long*)( puVar1 + 0x31e ) + 0x90 ) )(*(undefined8*)( puVar1 + 0x322 ), &local_78);
      uVar2 = *(undefined8*)( puVar1 + 0x26c );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   LAB_001095fc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 SSL_get0_verified_chain(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0x264 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x990 );
         }

         return 0;
      }

   }

   return 0;
}
void OBJ_bsearch_ssl_cipher_id(void *param_1, void *param_2, int param_3) {
   OBJ_bsearch_(param_1, param_2, param_3, 0x50, ssl_cipher_id_cmp_BSEARCH_CMP_FN);
   return;
}
undefined8 SSL_get0_peer_scts(uint *param_1) {
   X509 *x;
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   OCSP_RESPONSE *resp;
   OCSP_BASICRESP *bs;
   OCSP_SINGLERESP *x_00;
   void *pvVar4;
   int idx;
   long in_FS_OFFSET;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         LAB_001096c0:if (param_1[0x2e0] == 0) {
            if (*(uchar**)( param_1 + 0x28c ) != (uchar*)0x0) {
               local_48 = *(uchar**)( param_1 + 0x28c );
               uVar3 = o2i_SCT_LIST(0, &local_48, (short)param_1[0x28e]);
               iVar1 = ct_move_scts(param_1 + 0x2de, uVar3, 1);
               SCT_LIST_free();
               if (iVar1 < 0) goto LAB_00109710;
            }

            if (( *(uchar**)( param_1 + 0x294 ) == (uchar*)0x0 ) || ( *(long*)( param_1 + 0x296 ) == 0 )) {
               LAB_00109848:resp = (OCSP_RESPONSE*)0x0;
               LAB_0010984b:SCT_LIST_free();
               OCSP_BASICRESP_free((OCSP_BASICRESP*)0x0);
               OCSP_RESPONSE_free(resp);
            }
 else {
               local_48 = *(uchar**)( param_1 + 0x294 );
               resp = d2i_OCSP_RESPONSE((OCSP_RESPONSE**)0x0, &local_48, (long)(int)*(long*)( param_1 + 0x296 ));
               if (resp == (OCSP_RESPONSE*)0x0) goto LAB_00109848;
               bs = OCSP_response_get1_basic(resp);
               if (bs == (OCSP_BASICRESP*)0x0) goto LAB_0010984b;
               idx = 0;
               pvVar4 = (void*)0x0;
               iVar1 = 0;
               while (true) {
                  iVar2 = OCSP_resp_count(bs);
                  if (iVar2 <= idx) break;
                  x_00 = OCSP_resp_get0(bs, idx);
                  if (x_00 != (OCSP_SINGLERESP*)0x0) {
                     pvVar4 = OCSP_SINGLERESP_get1_ext_d2i(x_00, 0x3ba, (int*)0x0, (int*)0x0);
                     iVar1 = ct_move_scts(param_1 + 0x2de, pvVar4, 3);
                     if (iVar1 < 0) {
                        SCT_LIST_free(pvVar4);
                        OCSP_BASICRESP_free(bs);
                        OCSP_RESPONSE_free(resp);
                        uVar3 = 0;
                        goto LAB_001096d2;
                     }

                  }

                  idx = idx + 1;
               }
;
               SCT_LIST_free(pvVar4);
               OCSP_BASICRESP_free(bs);
               OCSP_RESPONSE_free(resp);
               if (iVar1 < 0) {
                  uVar3 = 0;
                  goto LAB_001096d2;
               }

            }

            if (( *(long*)( param_1 + 0x240 ) != 0 ) && ( x = *(X509**)( *(long*)( param_1 + 0x240 ) + 0x2c0 ) ),x != (X509*)0x0) {
               pvVar4 = X509_get_ext_d2i(x, 0x3b7, (int*)0x0, (int*)0x0);
               iVar1 = ct_move_scts(param_1 + 0x2de, pvVar4, 2);
               SCT_LIST_free(pvVar4);
               if (iVar1 < 0) goto LAB_00109710;
            }

            param_1[0x2e0] = 1;
         }

         uVar3 = *(undefined8*)( param_1 + 0x2de );
         goto LAB_001096d2;
      }

      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_001096c0;
      }

   }

   LAB_00109710:uVar3 = 0;
   LAB_001096d2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 SSL_set_ct_validation_callback(SSL *param_1, long param_2, X509_VERIFY_PARAM *param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   SSL *pSVar4;
   if (param_1 == (SSL*)0x0) {
      return 0;
   }

   pSVar4 = param_1;
   if (param_1->version == 0) {
      LAB_00109919:if (param_2 != 0) {
         iVar1 = SSL_CTX_has_client_custom_ext(param_1->method, 0x12);
         if (iVar1 != 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x1973, "SSL_set_ct_validation_callback");
            ERR_set_error(0x14, 0xce, 0);
            return 0;
         }

         lVar2 = SSL_ctrl(param_1, 0x41, 1, (void*)0x0);
         if (lVar2 == 0) goto LAB_00109974;
      }

      *(long*)&pSVar4[4].hit = param_2;
      uVar3 = 1;
      pSVar4[4].param = param_3;
   }
 else {
      if (( param_1->version & 0x80U ) != 0) {
         pSVar4 = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (pSVar4 == (SSL*)0x0) {
            return 0;
         }

         goto LAB_00109919;
      }

      LAB_00109974:uVar3 = 0;
   }

   return uVar3;
}
undefined8 SSL_CTX_set_ct_validation_callback(long param_1, long param_2, undefined8 param_3) {
   int iVar1;
   if (param_2 != 0) {
      iVar1 = SSL_CTX_has_client_custom_ext(param_1, 0x12);
      if (iVar1 != 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x198f, "SSL_CTX_set_ct_validation_callback");
         ERR_set_error(0x14, 0xce, 0);
         return 0;
      }

   }

   *(long*)( param_1 + 0x1d8 ) = param_2;
   *(undefined8*)( param_1 + 0x1e0 ) = param_3;
   return 1;
}
bool SSL_ct_is_enabled(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(long*)( param_1 + 0x2da ) != 0;
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(long*)( lVar1 + 0xb68 ) != 0;
         }

         return false;
      }

   }

   return false;
}
bool SSL_CTX_ct_is_enabled(long param_1) {
   return *(long*)( param_1 + 0x1d8 ) != 0;
}
int ssl_validate_ct(long param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   if (*(long*)( param_1 + 0x900 ) == 0) {
      return 1;
   }

   lVar4 = *(long*)( *(long*)( param_1 + 0x900 ) + 0x2c0 );
   if (( ( ( ( *(long*)( param_1 + 0xb68 ) != 0 ) && ( lVar4 != 0 ) ) && ( *(long*)( param_1 + 0x998 ) == 0 ) ) && ( ( *(long*)( param_1 + 0x990 ) != 0 && ( iVar1 = OPENSSL_sk_num() ),1 < iVar1 ) ) )) {
      lVar2 = CT_POLICY_EVAL_CTX_new_ex(**(undefined8**)( param_1 + 8 ), ( *(undefined8**)( param_1 + 8 ) )[0x8e]);
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x19cf, "ssl_validate_ct");
         ossl_statem_fatal(param_1, 0x50, 0x80032, 0);
         CT_POLICY_EVAL_CTX_free(0);
      }
 else {
         uVar3 = OPENSSL_sk_value(*(undefined8*)( param_1 + 0x990 ), 1);
         CT_POLICY_EVAL_CTX_set1_cert(lVar2, lVar4);
         CT_POLICY_EVAL_CTX_set1_issuer(lVar2, uVar3);
         CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(lVar2, *(undefined8*)( *(long*)( param_1 + 8 ) + 0x1d0 ));
         lVar4 = SSL_SESSION_get_time_ex(*(undefined8*)( param_1 + 0x900 ));
         CT_POLICY_EVAL_CTX_set_time(lVar2, lVar4 * 1000);
         uVar3 = SSL_get0_peer_scts(param_1);
         iVar1 = SCT_LIST_validate(uVar3, lVar2);
         if (iVar1 < 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x19ec, "ssl_validate_ct");
            uVar3 = 0xd0;
         }
 else {
            iVar1 = ( **(code**)( param_1 + 0xb68 ) )(lVar2, uVar3, *(undefined8*)( param_1 + 0xb70 ));
            if (0 < iVar1) {
               CT_POLICY_EVAL_CTX_free(lVar2);
               return iVar1;
            }

            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x19f4, "ssl_validate_ct");
            uVar3 = 0xea;
         }

         ossl_statem_fatal(param_1, 0x28, uVar3, 0);
         CT_POLICY_EVAL_CTX_free(lVar2);
      }

      *(undefined8*)( param_1 + 0x998 ) = 0x47;
      return 0;
   }

   return 1;
}
undefined8 SSL_CTX_enable_ct(undefined8 param_1, int param_2) {
   undefined8 uVar1;
   if (param_2 == 0) {
      uVar1 = SSL_CTX_set_ct_validation_callback(param_1, ct_permissive, 0);
      return uVar1;
   }

   if (param_2 != 1) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1a10, "SSL_CTX_enable_ct");
      ERR_set_error(0x14, 0xd4, 0);
      return 0;
   }

   uVar1 = SSL_CTX_set_ct_validation_callback(param_1, ct_strict, 0);
   return uVar1;
}
undefined8 SSL_enable_ct(undefined8 param_1, int param_2) {
   undefined8 uVar1;
   if (param_2 == 0) {
      uVar1 = SSL_set_ct_validation_callback(param_1, ct_permissive, 0);
      return uVar1;
   }

   if (param_2 != 1) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1a1d, "SSL_enable_ct");
      ERR_set_error(0x14, 0xd4, 0);
      return 0;
   }

   uVar1 = SSL_set_ct_validation_callback(param_1, ct_strict, 0);
   return uVar1;
}
void SSL_CTX_set_default_ctlog_list_file(long param_1) {
   CTLOG_STORE_load_default_file(*(undefined8*)( param_1 + 0x1d0 ));
   return;
}
void SSL_CTX_set_ctlog_list_file(long param_1) {
   CTLOG_STORE_load_file(*(undefined8*)( param_1 + 0x1d0 ));
   return;
}
void SSL_CTX_set0_ctlog_store(long param_1, undefined8 param_2) {
   CTLOG_STORE_free(*(undefined8*)( param_1 + 0x1d0 ));
   *(undefined8*)( param_1 + 0x1d0 ) = param_2;
   return;
}
undefined8 SSL_CTX_get0_ctlog_store(long param_1) {
   return *(undefined8*)( param_1 + 0x1d0 );
}
void SSL_CTX_set_client_hello_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x210 ) = param_2;
   *(undefined8*)( param_1 + 0x218 ) = param_3;
   return;
}
void SSL_CTX_set_new_pending_conn_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x220 ) = param_2;
   *(undefined8*)( param_1 + 0x228 ) = param_3;
   return;
}
undefined4 SSL_client_hello_isv2(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (*(undefined4**)( param_1 + 0x2d6 ) != (undefined4*)0x0) {
            return **(undefined4**)( param_1 + 0x2d6 );
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(undefined4**)( lVar1 + 0xb58 ) != (undefined4*)0x0 )) {
            return **(undefined4**)( lVar1 + 0xb58 );
         }

         return 0;
      }

   }

   return 0;
}
undefined4 SSL_client_hello_get0_legacy_version(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (*(long*)( param_1 + 0x2d6 ) != 0) {
            return *(undefined4*)( *(long*)( param_1 + 0x2d6 ) + 4 );
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0xb58 ) != 0 )) {
            return *(undefined4*)( *(long*)( lVar1 + 0xb58 ) + 4 );
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_client_hello_get0_random(uint *param_1, long *param_2) {
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

   if (*(long*)( param_1 + 0x2d6 ) == 0) {
      return 0;
   }

   if (param_2 != (long*)0x0) {
      *param_2 = *(long*)( param_1 + 0x2d6 ) + 8;
   }

   return 0x20;
}
undefined8 SSL_client_hello_get0_session_id(uint *param_1, long *param_2) {
   long lVar1;
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

   lVar1 = *(long*)( param_1 + 0x2d6 );
   if (lVar1 == 0) {
      return 0;
   }

   if (param_2 != (long*)0x0) {
      *param_2 = lVar1 + 0x30;
   }

   return *(undefined8*)( lVar1 + 0x28 );
}
undefined8 SSL_client_hello_get0_ciphers(uint *param_1, undefined8 *param_2) {
   long lVar1;
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

   lVar1 = *(long*)( param_1 + 0x2d6 );
   if (lVar1 == 0) {
      return 0;
   }

   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( lVar1 + 0x158 );
   }

   return *(undefined8*)( lVar1 + 0x160 );
}
undefined8 SSL_client_hello_get0_compression_methods(uint *param_1, long *param_2) {
   long lVar1;
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

   lVar1 = *(long*)( param_1 + 0x2d6 );
   if (lVar1 == 0) {
      return 0;
   }

   if (param_2 != (long*)0x0) {
      *param_2 = lVar1 + 0x170;
   }

   return *(undefined8*)( lVar1 + 0x168 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 SSL_client_hello_get1_extensions_present(uint *param_1, undefined8 *param_2, ulong *param_3) {
   long lVar1;
   ulong uVar2;
   ulong uVar3;
   void *ptr;
   undefined8 uVar4;
   int *piVar5;
   int *piVar6;
   int iVar12;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   long lVar9;
   ulong uVar10;
   long lVar11;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (( ( ( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) ) ) ) && ( lVar1 = lVar1 != 0 )) {
      uVar2 = *(ulong*)( lVar1 + 0x280 );
      if (uVar2 == 0) {
         uVar10 = 0;
         ptr = (void*)0x0;
      }
 else {
         lVar1 = *(long*)( lVar1 + 0x288 );
         if (uVar2 - 1 < 8) {
            uVar3 = 0;
            uVar10 = 0;
            LAB_0010a263:lVar9 = uVar3 * 0x28;
            uVar10 = ( uVar10 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x10 + uVar3 * 0x28 ) == 0);
            if (( ( ( uVar3 + 1 < uVar2 ) && ( uVar10 = ( uVar10 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x38 + lVar9 ) == 0) ),uVar3 + 2 < uVar2 ) ) && ( uVar10 = ( uVar10 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x60 + lVar9 ) == 0) ),uVar3 + 3 < uVar2) {
               uVar10 = ( uVar10 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x128 + lVar9 ) == 0);
            }

         }
 else {
            lVar9 = 0;
            lVar11 = 0;
            piVar6 = (int*)( lVar1 + 0x10 );
            do {
               piVar5 = piVar6 + 0x28;
               iVar12 = -(uint)(*piVar6 != 0);
               auVar7._4_4_ = -(uint)(piVar6[10] != 0);
               auVar8._4_4_ = -(uint)((piVar6[0x14] != 0) != 0);
               auVar8._0_4_ = -(uint)(piVar6[0x14] != 0);
               auVar8._8_4_ = -(uint)(piVar6[0x1e] != 0);
               auVar8._12_4_ = -(uint)((piVar6[0x1e] != 0) != 0);
               auVar7._8_4_ = auVar7._4_4_;
               auVar7._12_4_ = -(uint)((piVar6[10] != 0) != 0);
               lVar9 = lVar9 + ( SUB168(auVar8 & __LC21, 0) - CONCAT44(-(uint)((*piVar6 != 0) != 0), iVar12) );
               lVar11 = lVar11 + ( SUB168(auVar8 & __LC21, 8) - auVar7._8_8_ );
               piVar6 = piVar5;
            }
 while ( (int*)( lVar1 + 0x10 ) + ( ( uVar2 & 0xfffffffffffffffc ) + ( uVar2 >> 2 ) ) * 8 != piVar5 );
            uVar3 = uVar2 & 0xfffffffffffffffc;
            uVar10 = lVar9 + lVar11;
            if (( uVar2 & 3 ) != 0) goto LAB_0010a263;
         }

         if (uVar10 == 0) {
            ptr = (void*)0x0;
         }
 else {
            ptr = CRYPTO_malloc((int)uVar10 * 4, "ssl/ssl_lib.c", 0x1ab1);
            if (ptr == (void*)0x0) goto LAB_0010a13c;
            lVar1 = *(long*)( *(long*)( param_1 + 0x2d6 ) + 0x280 );
            if (lVar1 != 0) {
               lVar9 = 0;
               piVar6 = (int*)( *(long*)( *(long*)( param_1 + 0x2d6 ) + 0x288 ) + 0x10 );
               do {
                  if (*piVar6 != 0) {
                     if (uVar10 <= *(ulong*)( piVar6 + 4 )) {
                        CRYPTO_free(ptr);
                        return 0;
                     }

                     *(int*)( (long)ptr + *(ulong*)( piVar6 + 4 ) * 4 ) = piVar6[2];
                  }

                  lVar9 = lVar9 + 1;
                  piVar6 = piVar6 + 10;
               }
 while ( lVar1 != lVar9 );
            }

         }

      }

      *param_2 = ptr;
      uVar4 = 1;
      *param_3 = uVar10;
   }
 else {
      LAB_0010a13c:uVar4 = 0;
   }

   return uVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 SSL_client_hello_get_extension_order(uint *param_1, long param_2, ulong *param_3) {
   long lVar1;
   ulong uVar2;
   int *piVar3;
   ulong uVar4;
   int *piVar5;
   int iVar11;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   long lVar8;
   ulong uVar9;
   long lVar10;
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

   lVar1 = *(long*)( param_1 + 0x2d6 );
   if (lVar1 == 0) {
      return 0;
   }

   if (param_3 == (ulong*)0x0) {
      return 0;
   }

   uVar2 = *(ulong*)( lVar1 + 0x280 );
   if (uVar2 == 0) {
      uVar9 = 0;
      goto LAB_0010a605;
   }

   lVar1 = *(long*)( lVar1 + 0x288 );
   if (uVar2 - 1 < 8) {
      uVar4 = 0;
      uVar9 = 0;
      LAB_0010a523:lVar8 = uVar4 * 0x28;
      uVar9 = ( uVar9 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x10 + uVar4 * 0x28 ) == 0);
      if (( ( ( ( uVar4 + 1 < uVar2 ) && ( uVar9 = ( uVar9 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x38 + lVar8 ) == 0) ),uVar4 + 2 < uVar2 ) ) && ( uVar9 = ( uVar9 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x60 + lVar8 ) == 0) ),uVar4 + 3 < uVar2 )) &&( ( uVar9 = ( uVar9 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x88 + lVar8 ) == 0) ),uVar4 + 4 < uVar2 && ( uVar9 = ( uVar9 + 1 ) - ( ulong )(*(int*)( lVar1 + 0xb0 + lVar8 ) == 0) ),uVar4 + 5 < uVar2 ) && ( ( uVar9 = ( uVar9 + 1 ) - ( ulong )(*(int*)( lVar1 + 0xd8 + lVar8 ) == 0) ),uVar4 + 6 < uVar2 && ( uVar9 = ( uVar9 + 1 ) - ( ulong )(*(int*)( lVar1 + 0x100 + lVar8 ) == 0) ),uVar4 + 7 < uVar2 )(uVar9 + 1) - ( ulong )(*(int*)( lVar1 + 0x128 + lVar8 ) == 0);
   }

}
else{lVar8 = 0;lVar10 = 0;piVar5 = (int*)( lVar1 + 0x10 );do {
   piVar3 = piVar5 + 0x28;
   iVar11 = -(uint)(*piVar5 != 0);
   auVar6._4_4_ = -(uint)(piVar5[10] != 0);
   auVar7._4_4_ = -(uint)((piVar5[0x14] != 0) != 0);
   auVar7._0_4_ = -(uint)(piVar5[0x14] != 0);
   auVar7._8_4_ = -(uint)(piVar5[0x1e] != 0);
   auVar7._12_4_ = -(uint)((piVar5[0x1e] != 0) != 0);
   auVar6._8_4_ = auVar6._4_4_;
   auVar6._12_4_ = -(uint)((piVar5[10] != 0) != 0);
   lVar8 = lVar8 + ( SUB168(auVar7 & __LC21, 0) - CONCAT44(-(uint)((*piVar5 != 0) != 0), iVar11) );
   lVar10 = lVar10 + ( SUB168(auVar7 & __LC21, 8) - auVar6._8_8_ );
   piVar5 = piVar3;
}
 while ( (int*)( lVar1 + 0x10 ) + ( ( uVar2 & 0xfffffffffffffffc ) + ( uVar2 >> 2 ) ) * 8 != piVar3 );uVar4 = uVar2 & 0xfffffffffffffffc;uVar9 = lVar8 + lVar10;if (( uVar2 & 3 ) != 0) goto LAB_0010a523;}if (( uVar9 != 0 ) && ( param_2 != 0 )) {
   if (*param_3 < uVar9) {
      return 0;
   }

   piVar5 = (int*)( lVar1 + 0x10 );
   uVar4 = 0;
   do {
      if (*piVar5 != 0) {
         if (uVar9 <= *(ulong*)( piVar5 + 4 )) {
            return 0;
         }

         *(short*)( param_2 + *(ulong*)( piVar5 + 4 ) * 2 ) = (short)piVar5[2];
      }

      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 10;
   }
 while ( uVar4 != uVar2 );
}
LAB_0010a605:*param_3 = uVar9;return 1;}undefined8 SSL_client_hello_get0_ext(uint *param_1, int param_2, undefined8 *param_3, undefined8 *param_4) {
   long lVar1;
   undefined8 *puVar2;
   long lVar3;
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

   lVar1 = *(long*)( param_1 + 0x2d6 );
   if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x280 ) != 0 )) {
      puVar2 = *(undefined8**)( lVar1 + 0x288 );
      lVar3 = 0;
      do {
         if (( *(int*)( puVar2 + 2 ) != 0 ) && ( *(int*)( puVar2 + 3 ) == param_2 )) {
            if (param_3 != (undefined8*)0x0) {
               *param_3 = *puVar2;
            }

            if (param_4 != (undefined8*)0x0) {
               *param_4 = puVar2[1];
            }

            return 1;
         }

         lVar3 = lVar3 + 1;
         puVar2 = puVar2 + 5;
      }
 while ( *(long*)( lVar1 + 0x280 ) != lVar3 );
   }

   return 0;
}
bool SSL_free_buffers(int *param_1) {
   int iVar1;
   if (param_1 == (int*)0x0) {
      return false;
   }

   if (*param_1 == 0) {
      iVar1 = ( **(code**)( *(long*)( param_1 + 0x31c ) + 0xc0 ) )(*(undefined8*)( param_1 + 800 ));
      if (iVar1 != 0) {
         iVar1 = ( **(code**)( *(long*)( param_1 + 0x31e ) + 0xc0 ) )(*(undefined8*)( param_1 + 0x322 ));
         return iVar1 != 0;
      }

   }

   return false;
}
bool SSL_alloc_buffers(uint *param_1) {
   int iVar1;
   uint *puVar2;
   if (param_1 == (uint*)0x0) {
      return false;
   }

   puVar2 = param_1;
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return false;
      }

      puVar2 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (puVar2 == (uint*)0x0) {
         return false;
      }

      if (( *param_1 & 0x80 ) != 0) {
         return true;
      }

   }

   iVar1 = ( **(code**)( *(long*)( puVar2 + 0x31c ) + 0xb8 ) )(*(undefined8*)( puVar2 + 800 ));
   if (iVar1 == 0) {
      return false;
   }

   iVar1 = ( **(code**)( *(long*)( puVar2 + 0x31e ) + 0xb8 ) )(*(undefined8*)( puVar2 + 0x322 ));
   return iVar1 != 0;
}
void SSL_CTX_set_keylog_callback(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x3f8 ) = param_2;
   return;
}
undefined8 SSL_CTX_get_keylog_callback(long param_1) {
   return *(undefined8*)( param_1 + 0x3f8 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ssl_log_rsa_client_key_exchange(long param_1, byte *param_2, ulong param_3, long param_4, ulong param_5) {
   long lVar1;
   undefined8 *puVar2;
   undefined1 auVar3[16];
   byte bVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   char cVar28;
   long lVar29;
   code *pcVar30;
   undefined1 auVar31[16];
   undefined2 *puVar32;
   ulong uVar33;
   char *pcVar34;
   char *pcVar35;
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   ulong local_260;
   byte bStack_211;
   byte bStack_201;
   byte bStack_1f2;
   byte bStack_1e2;
   byte bStack_1d3;
   byte bStack_1c3;
   byte bStack_1b4;
   byte bStack_1a4;
   byte bStack_195;
   byte bStack_185;
   byte bStack_176;
   byte bStack_166;
   byte bStack_157;
   byte bStack_147;
   byte bStack_129;
   byte bStack_119;
   byte bStack_10a;
   byte bStack_fa;
   byte bStack_eb;
   byte bStack_db;
   byte bStack_cc;
   byte bStack_bc;
   byte bStack_ad;
   byte bStack_9d;
   byte bStack_8e;
   byte bStack_7e;
   byte bStack_6f;
   byte bStack_5f;
   byte bStack_50;
   byte bStack_40;
   if (param_3 < 8) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1b6a, "ssl_log_rsa_client_key_exchange");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      return 0;
   }

   lVar29 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar29 + 0x3f8 ) == 0) {
      return 1;
   }

   lVar1 = param_5 * 2 + 0x16;
   puVar32 = (undefined2*)CRYPTO_malloc((int)lVar1, "ssl/ssl_lib.c", 0x1b4a);
   if (puVar32 == (undefined2*)0x0) {
      return 0;
   }

   *(undefined1*)( puVar32 + 1 ) = 0x41;
   pcVar35 = (char*)( (long)puVar32 + 0x15 );
   *puVar32 = 0x5352;
   bVar4 = *param_2;
   *(undefined1*)( (long)puVar32 + 3 ) = 0x20;
   for (int i = 0; i < 5; i++) {
      cVar5 = "0123456789abcdef"[bVar4 >> 4];
      *(char*)( (long)puVar32 + ( 2*i + 5 ) ) = "0123456789abcdef"[bVar4 & 15];
      bVar4 = param_2[( i + 1 )];
      *(char*)( puVar32 + ( i + 2 ) ) = cVar5;
   }

   cVar5 = "0123456789abcdef"[bVar4 & 0xf];
   *(char*)( puVar32 + 7 ) = "0123456789abcdef"[bVar4 >> 4];
   *(char*)( (long)puVar32 + 0xf ) = cVar5;
   bVar4 = param_2[6];
   *(undefined1*)( puVar32 + 10 ) = 0x20;
   cVar5 = "0123456789abcdef"[bVar4 >> 4];
   *(char*)( (long)puVar32 + 0x11 ) = "0123456789abcdef"[bVar4 & 0xf];
   bVar4 = param_2[7];
   *(char*)( puVar32 + 8 ) = cVar5;
   cVar5 = "0123456789abcdef"[bVar4 >> 4];
   *(char*)( (long)puVar32 + 0x13 ) = "0123456789abcdef"[bVar4 & 0xf];
   *(char*)( puVar32 + 9 ) = cVar5;
   auVar31 = __LC22;
   if (param_5 == 0) goto LAB_0010b083;
   if (param_5 - 1 < 0xf) {
      local_260 = 0;
      pcVar34 = pcVar35;
      LAB_0010adf0:bVar4 = *(byte*)( param_4 + local_260 );
      *pcVar34 = "0123456789abcdef"[bVar4 >> 4];
      pcVar34[1] = "0123456789abcdef"[bVar4 & 0xf];
      if (( ( ( ( local_260 + 1 < param_5 ) && ( bVar4 = *(byte*)( param_4 + 1 + local_260 ) ),*(ushort*)( pcVar34 + 2 ) = CONCAT11("0123456789abcdef"[bVar4 & 0xf], "0123456789abcdef"[bVar4 >> 4]),local_260 + 2 < param_5 ) ) && ( bVar4 = *(byte*)( param_4 + 2 + local_260 ) ),*(ushort*)( pcVar34 + 4 ) = CONCAT11("0123456789abcdef"[bVar4 & 0xf], "0123456789abcdef"[bVar4 >> 4]),local_260 + 3 < param_5 )) {
         bVar4 = *(byte*)( param_4 + 0xe + local_260 );
         *(ushort*)( pcVar34 + 0x1c ) = CONCAT11("0123456789abcdef"[bVar4 & 0xf], "0123456789abcdef"[bVar4 >> 4]);
      }

   }
 else {
      uVar33 = 0;
      local_260 = param_5 & 0xfffffffffffffff0;
      do {
         auVar3 = *(undefined1(*) [16])( param_4 + uVar33 );
         auVar36 = auVar3 & auVar31;
         auVar37._0_2_ = auVar3._0_2_ >> 4;
         auVar37._2_2_ = auVar3._2_2_ >> 4;
         auVar37._4_2_ = auVar3._4_2_ >> 4;
         auVar37._6_2_ = auVar3._6_2_ >> 4;
         auVar37._8_2_ = auVar3._8_2_ >> 4;
         auVar37._10_2_ = auVar3._10_2_ >> 4;
         auVar37._12_2_ = auVar3._12_2_ >> 4;
         auVar37._14_2_ = auVar3._14_2_ >> 4;
         auVar37 = auVar37 & auVar31;
         bStack_cc = auVar36[0xc];
         bStack_40 = auVar37[8];
         bStack_bc = auVar37[0xc];
         bStack_ad = auVar36[0xb];
         bStack_9d = auVar37[0xb];
         bStack_50 = auVar36[8];
         bStack_5f = auVar37[9];
         bStack_6f = auVar36[9];
         bStack_7e = auVar37[10];
         bStack_8e = auVar36[10];
         bStack_db = auVar37[0xd];
         bStack_eb = auVar36[0xd];
         bStack_fa = auVar37[0xe];
         bStack_10a = auVar36[0xe];
         bStack_119 = auVar37[0xf];
         bStack_129 = auVar36[0xf];
         cVar5 = "0123456789abcdef"[bStack_129];
         cVar6 = "0123456789abcdef"[bStack_119];
         cVar7 = "0123456789abcdef"[bStack_10a];
         cVar8 = "0123456789abcdef"[bStack_eb];
         cVar9 = "0123456789abcdef"[bStack_fa];
         cVar10 = "0123456789abcdef"[bStack_db];
         cVar11 = "0123456789abcdef"[bStack_cc];
         cVar12 = "0123456789abcdef"[bStack_bc];
         bStack_147 = auVar37[1];
         bStack_157 = auVar36[1];
         bStack_166 = auVar37[2];
         bStack_195 = auVar36[3];
         bStack_185 = auVar37[3];
         bStack_176 = auVar36[2];
         bStack_1a4 = auVar37[4];
         bStack_1b4 = auVar36[4];
         bStack_1d3 = auVar36[5];
         bStack_1e2 = auVar37[6];
         bStack_1f2 = auVar36[6];
         bStack_201 = auVar37[7];
         cVar13 = "0123456789abcdef"[bStack_195];
         cVar14 = "0123456789abcdef"[bStack_185];
         cVar15 = "0123456789abcdef"[bStack_176];
         cVar16 = "0123456789abcdef"[bStack_166];
         cVar17 = "0123456789abcdef"[bStack_157];
         cVar18 = "0123456789abcdef"[bStack_147];
         bStack_211 = auVar36[7];
         cVar19 = "0123456789abcdef"[auVar36._0_4_ & 0xff];
         bStack_1c3 = auVar37[5];
         cVar20 = "0123456789abcdef"[bStack_211];
         cVar21 = "0123456789abcdef"[bStack_201];
         cVar22 = "0123456789abcdef"[bStack_1f2];
         cVar23 = "0123456789abcdef"[bStack_1e2];
         cVar24 = "0123456789abcdef"[bStack_1d3];
         cVar25 = "0123456789abcdef"[bStack_1c3];
         cVar26 = "0123456789abcdef"[auVar37._0_4_ & 0xff];
         cVar27 = "0123456789abcdef"[bStack_1b4];
         cVar28 = "0123456789abcdef"[bStack_1a4];
         puVar2 = (undefined8*)( (long)puVar32 + uVar33 * 2 + 0x25 );
         *puVar2 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789abcdef"[bStack_ad], "0123456789abcdef"[bStack_9d]), "0123456789abcdef"[bStack_8e]), "0123456789abcdef"[bStack_7e]), "0123456789abcdef"[bStack_6f]), "0123456789abcdef"[bStack_5f]), "0123456789abcdef"[bStack_50]), "0123456789abcdef"[bStack_40]);
         puVar2[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar5, cVar6), cVar7), cVar9), cVar8), cVar10), cVar11), cVar12);
         puVar2 = (undefined8*)( (long)puVar32 + uVar33 * 2 + 0x15 );
         *puVar2 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar13, cVar14), cVar15), cVar16), cVar17), cVar18), cVar19), cVar26);
         puVar2[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20, cVar21), cVar22), cVar23), cVar24), cVar25), cVar27), cVar28);
         uVar33 = uVar33 + 0x10;
      }
 while ( uVar33 != local_260 );
      pcVar34 = pcVar35 + ( param_5 >> 4 ) * 0x20;
      if (param_5 != local_260) goto LAB_0010adf0;
   }

   pcVar35 = pcVar35 + param_5 * 2;
   LAB_0010b083:*pcVar35 = '\0';
   pcVar30 = *(code**)( lVar29 + 0x3f8 );
   if (pcVar30 != (code*)0x0) {
      ( *pcVar30 )(*(undefined8*)( param_1 + 0x40 ), puVar32);
   }

   CRYPTO_clear_free(puVar32, lVar1, "ssl/ssl_lib.c", 0x1b5f);
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ssl_log_secret(long param_1, char *param_2, long param_3, ulong param_4) {
   undefined1 *puVar1;
   long lVar2;
   undefined8 *puVar3;
   char cVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   byte bVar28;
   long lVar29;
   code *pcVar30;
   undefined1 auVar31[16];
   size_t __n;
   void *__dest;
   char *pcVar32;
   char *pcVar33;
   ulong uVar34;
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   ulong local_630;
   byte bStack_5d1;
   byte bStack_5c1;
   byte bStack_5b2;
   byte bStack_5a2;
   byte bStack_593;
   byte bStack_583;
   byte bStack_574;
   byte bStack_564;
   byte bStack_555;
   byte bStack_545;
   byte bStack_536;
   byte bStack_526;
   byte bStack_517;
   byte bStack_507;
   byte bStack_4e9;
   byte bStack_4d9;
   byte bStack_4ca;
   byte bStack_4ba;
   byte bStack_4ab;
   byte bStack_49b;
   byte bStack_48c;
   byte bStack_47c;
   byte bStack_46d;
   byte bStack_45d;
   byte bStack_44e;
   byte bStack_43e;
   byte bStack_42f;
   byte bStack_41f;
   byte bStack_410;
   byte bStack_400;
   byte bStack_3f1;
   byte bStack_3e1;
   byte bStack_3d2;
   byte bStack_3c2;
   byte bStack_3b3;
   byte bStack_3a3;
   byte bStack_394;
   byte bStack_384;
   byte bStack_375;
   byte bStack_365;
   byte bStack_356;
   byte bStack_346;
   byte bStack_337;
   byte bStack_327;
   byte bStack_309;
   byte bStack_2f9;
   byte bStack_2ea;
   byte bStack_2da;
   byte bStack_2cb;
   byte bStack_2bb;
   byte bStack_2ac;
   byte bStack_29c;
   byte bStack_28d;
   byte bStack_27d;
   byte bStack_26e;
   byte bStack_25e;
   byte bStack_24f;
   byte bStack_23f;
   byte bStack_230;
   byte bStack_220;
   byte bStack_211;
   byte bStack_201;
   byte bStack_1f2;
   byte bStack_1e2;
   byte bStack_1d3;
   byte bStack_1c3;
   byte bStack_1b4;
   byte bStack_1a4;
   byte bStack_195;
   byte bStack_185;
   byte bStack_176;
   byte bStack_166;
   byte bStack_157;
   byte bStack_147;
   byte bStack_129;
   byte bStack_119;
   byte bStack_10a;
   byte bStack_fa;
   byte bStack_eb;
   byte bStack_db;
   byte bStack_cc;
   byte bStack_bc;
   byte bStack_ad;
   byte bStack_9d;
   byte bStack_8e;
   byte bStack_7e;
   byte bStack_6f;
   byte bStack_5f;
   byte bStack_50;
   byte bStack_40;
   lVar29 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar29 + 0x3f8 ) == 0) {
      return 1;
   }

   __n = strlen(param_2);
   lVar2 = param_4 * 2 + 0x43 + __n;
   __dest = CRYPTO_malloc((int)lVar2, "ssl/ssl_lib.c", 0x1b4a);
   if (__dest == (void*)0x0) {
      return 0;
   }

   memcpy(__dest, param_2, __n);
   auVar31 = __LC22;
   puVar1 = (undefined1*)( (long)__dest + __n );
   auVar35 = *(undefined1(*) [16])( param_1 + 0x188 );
   *puVar1 = 0x20;
   auVar36._0_2_ = auVar35._0_2_ >> 4;
   auVar36._2_2_ = auVar35._2_2_ >> 4;
   auVar36._4_2_ = auVar35._4_2_ >> 4;
   auVar36._6_2_ = auVar35._6_2_ >> 4;
   auVar36._8_2_ = auVar35._8_2_ >> 4;
   auVar36._10_2_ = auVar35._10_2_ >> 4;
   auVar36._12_2_ = auVar35._12_2_ >> 4;
   auVar36._14_2_ = auVar35._14_2_ >> 4;
   auVar35 = auVar35 & auVar31;
   auVar36 = auVar36 & auVar31;
   bStack_50 = auVar35[8];
   bStack_bc = auVar36[0xc];
   bStack_cc = auVar35[0xc];
   bStack_40 = auVar36[8];
   bStack_5f = auVar36[9];
   bStack_7e = auVar36[10];
   bStack_8e = auVar35[10];
   bStack_9d = auVar36[0xb];
   bStack_ad = auVar35[0xb];
   bStack_6f = auVar35[9];
   bStack_db = auVar36[0xd];
   bStack_eb = auVar35[0xd];
   bStack_129 = auVar35[0xf];
   bStack_119 = auVar36[0xf];
   bStack_10a = auVar35[0xe];
   cVar4 = "0123456789abcdef"[bStack_129];
   cVar5 = "0123456789abcdef"[bStack_119];
   cVar6 = "0123456789abcdef"[bStack_10a];
   bStack_fa = auVar36[0xe];
   cVar7 = "0123456789abcdef"[bStack_eb];
   cVar8 = "0123456789abcdef"[bStack_fa];
   cVar9 = "0123456789abcdef"[bStack_db];
   bStack_147 = auVar36[1];
   cVar10 = "0123456789abcdef"[bStack_cc];
   cVar11 = "0123456789abcdef"[bStack_bc];
   bStack_157 = auVar35[1];
   bStack_195 = auVar35[3];
   cVar12 = "0123456789abcdef"[bStack_157];
   bStack_185 = auVar36[3];
   cVar13 = "0123456789abcdef"[bStack_195];
   bStack_176 = auVar35[2];
   cVar14 = "0123456789abcdef"[bStack_185];
   bStack_166 = auVar36[2];
   cVar15 = "0123456789abcdef"[bStack_176];
   bStack_1a4 = auVar36[4];
   cVar16 = "0123456789abcdef"[bStack_166];
   bStack_1b4 = auVar35[4];
   bStack_1d3 = auVar35[5];
   bStack_1f2 = auVar35[6];
   bStack_201 = auVar36[7];
   bStack_211 = auVar35[7];
   bStack_1c3 = auVar36[5];
   bStack_1e2 = auVar36[6];
   cVar17 = "0123456789abcdef"[bStack_147];
   cVar18 = "0123456789abcdef"[auVar35._0_4_ & 0xff];
   cVar19 = "0123456789abcdef"[bStack_201];
   cVar20 = "0123456789abcdef"[bStack_1f2];
   cVar21 = "0123456789abcdef"[bStack_1e2];
   cVar22 = "0123456789abcdef"[bStack_1d3];
   cVar23 = "0123456789abcdef"[bStack_1c3];
   cVar24 = "0123456789abcdef"[bStack_211];
   cVar25 = "0123456789abcdef"[auVar36._0_4_ & 0xff];
   auVar35 = *(undefined1(*) [16])( param_1 + 0x198 );
   auVar36 = auVar35 & auVar31;
   auVar37._0_2_ = auVar35._0_2_ >> 4;
   auVar37._2_2_ = auVar35._2_2_ >> 4;
   auVar37._4_2_ = auVar35._4_2_ >> 4;
   auVar37._6_2_ = auVar35._6_2_ >> 4;
   auVar37._8_2_ = auVar35._8_2_ >> 4;
   auVar37._10_2_ = auVar35._10_2_ >> 4;
   auVar37._12_2_ = auVar35._12_2_ >> 4;
   auVar37._14_2_ = auVar35._14_2_ >> 4;
   auVar37 = auVar37 & auVar31;
   cVar26 = "0123456789abcdef"[bStack_1b4];
   puVar3 = (undefined8*)( (long)__dest + __n + 1 );
   cVar27 = "0123456789abcdef"[bStack_1a4];
   puVar3[2] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789abcdef"[bStack_ad], "0123456789abcdef"[bStack_9d]), "0123456789abcdef"[bStack_8e]), "0123456789abcdef"[bStack_7e]), "0123456789abcdef"[bStack_6f]), "0123456789abcdef"[bStack_5f]), "0123456789abcdef"[bStack_50]), "0123456789abcdef"[bStack_40]);
   puVar3[3] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4, cVar5), cVar6), cVar8), cVar7), cVar9), cVar10), cVar11);
   *puVar3 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar13, cVar14), cVar15), cVar16), cVar12), cVar17), cVar18), cVar25);
   puVar3[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24, cVar19), cVar20), cVar21), cVar22), cVar23), cVar26), cVar27);
   bStack_220 = auVar37[8];
   bStack_230 = auVar36[8];
   bStack_23f = auVar37[9];
   bStack_24f = auVar36[9];
   bStack_28d = auVar36[0xb];
   bStack_27d = auVar37[0xb];
   bStack_26e = auVar36[10];
   bStack_25e = auVar37[10];
   bStack_29c = auVar37[0xc];
   bStack_2ac = auVar36[0xc];
   bStack_309 = auVar36[0xf];
   bStack_2f9 = auVar37[0xf];
   bStack_2bb = auVar37[0xd];
   bStack_2cb = auVar36[0xd];
   bStack_2da = auVar37[0xe];
   bStack_2ea = auVar36[0xe];
   cVar4 = "0123456789abcdef"[bStack_309];
   cVar5 = "0123456789abcdef"[bStack_2f9];
   cVar6 = "0123456789abcdef"[bStack_2ea];
   cVar7 = "0123456789abcdef"[bStack_2da];
   cVar8 = "0123456789abcdef"[bStack_2cb];
   cVar9 = "0123456789abcdef"[bStack_2bb];
   bStack_365 = auVar37[3];
   bStack_327 = auVar37[1];
   bStack_337 = auVar36[1];
   bStack_346 = auVar37[2];
   bStack_356 = auVar36[2];
   bStack_384 = auVar37[4];
   cVar10 = "0123456789abcdef"[bStack_2ac];
   cVar11 = "0123456789abcdef"[bStack_29c];
   bStack_375 = auVar36[3];
   bStack_394 = auVar36[4];
   cVar12 = "0123456789abcdef"[bStack_375];
   cVar13 = "0123456789abcdef"[bStack_365];
   cVar14 = "0123456789abcdef"[bStack_356];
   cVar15 = "0123456789abcdef"[bStack_346];
   cVar16 = "0123456789abcdef"[bStack_337];
   cVar17 = "0123456789abcdef"[bStack_327];
   bStack_3c2 = auVar37[6];
   cVar18 = "0123456789abcdef"[auVar36._0_4_ & 0xff];
   bStack_3e1 = auVar37[7];
   bStack_3f1 = auVar36[7];
   cVar19 = "0123456789abcdef"[bStack_3e1];
   bStack_3d2 = auVar36[6];
   bStack_3b3 = auVar36[5];
   cVar20 = "0123456789abcdef"[auVar37._0_4_ & 0xff];
   cVar21 = "0123456789abcdef"[bStack_3d2];
   bStack_3a3 = auVar37[5];
   cVar22 = "0123456789abcdef"[bStack_3b3];
   cVar23 = "0123456789abcdef"[bStack_3a3];
   cVar24 = "0123456789abcdef"[bStack_3f1];
   cVar25 = "0123456789abcdef"[bStack_3c2];
   cVar26 = "0123456789abcdef"[bStack_394];
   cVar27 = "0123456789abcdef"[bStack_384];
   puVar3[6] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789abcdef"[bStack_28d], "0123456789abcdef"[bStack_27d]), "0123456789abcdef"[bStack_26e]), "0123456789abcdef"[bStack_25e]), "0123456789abcdef"[bStack_24f]), "0123456789abcdef"[bStack_23f]), "0123456789abcdef"[bStack_230]), "0123456789abcdef"[bStack_220]);
   puVar3[7] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4, cVar5), cVar6), cVar7), cVar8), cVar9), cVar10), cVar11);
   puVar3[4] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar12, cVar13), cVar14), cVar15), cVar16), cVar17), cVar18), cVar20);
   puVar3[5] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24, cVar19), cVar21), cVar25), cVar22), cVar23), cVar26), cVar27);
   puVar1[0x41] = 0x20;
   pcVar32 = puVar1 + 0x42;
   if (param_4 == 0) goto LAB_0010c0d8;
   if (param_4 - 1 < 0xf) {
      local_630 = 0;
      pcVar33 = pcVar32;
      LAB_0010bdfc:bVar28 = *(byte*)( param_3 + local_630 );
      *pcVar33 = "0123456789abcdef"[bVar28 >> 4];
      pcVar33[1] = "0123456789abcdef"[bVar28 & 0xf];
      if (( ( ( ( local_630 + 1 < param_4 ) && ( bVar28 = *(byte*)( param_3 + 1 + local_630 ) ),*(ushort*)( pcVar33 + 2 ) = CONCAT11("0123456789abcdef"[bVar28 & 0xf], "0123456789abcdef"[bVar28 >> 4]),local_630 + 2 < param_4 ) ) && ( bVar28 = *(byte*)( param_3 + 2 + local_630 ) ),*(ushort*)( pcVar33 + 4 ) = CONCAT11("0123456789abcdef"[bVar28 & 0xf], "0123456789abcdef"[bVar28 >> 4]),local_630 + 3 < param_4 )) {
         bVar28 = *(byte*)( param_3 + 0xe + local_630 );
         *(ushort*)( pcVar33 + 0x1c ) = CONCAT11("0123456789abcdef"[bVar28 & 0xf], "0123456789abcdef"[bVar28 >> 4]);
      }

   }
 else {
      local_630 = param_4 & 0xfffffffffffffff0;
      uVar34 = 0;
      do {
         auVar35 = *(undefined1(*) [16])( param_3 + uVar34 );
         auVar36 = auVar35 & auVar31;
         auVar38._0_2_ = auVar35._0_2_ >> 4;
         auVar38._2_2_ = auVar35._2_2_ >> 4;
         auVar38._4_2_ = auVar35._4_2_ >> 4;
         auVar38._6_2_ = auVar35._6_2_ >> 4;
         auVar38._8_2_ = auVar35._8_2_ >> 4;
         auVar38._10_2_ = auVar35._10_2_ >> 4;
         auVar38._12_2_ = auVar35._12_2_ >> 4;
         auVar38._14_2_ = auVar35._14_2_ >> 4;
         bStack_48c = auVar36[0xc];
         auVar38 = auVar38 & auVar31;
         bStack_400 = auVar38[8];
         bStack_47c = auVar38[0xc];
         bStack_46d = auVar36[0xb];
         bStack_410 = auVar36[8];
         bStack_41f = auVar38[9];
         bStack_42f = auVar36[9];
         bStack_43e = auVar38[10];
         bStack_44e = auVar36[10];
         bStack_45d = auVar38[0xb];
         bStack_49b = auVar38[0xd];
         bStack_4ab = auVar36[0xd];
         bStack_4ba = auVar38[0xe];
         bStack_4ca = auVar36[0xe];
         cVar4 = "0123456789abcdef"[bStack_4ca];
         cVar5 = "0123456789abcdef"[bStack_4ba];
         cVar6 = "0123456789abcdef"[bStack_4ab];
         bStack_4e9 = auVar36[0xf];
         bStack_4d9 = auVar38[0xf];
         cVar7 = "0123456789abcdef"[bStack_4e9];
         cVar8 = "0123456789abcdef"[bStack_4d9];
         bStack_517 = auVar36[1];
         bStack_507 = auVar38[1];
         cVar9 = "0123456789abcdef"[bStack_49b];
         cVar10 = "0123456789abcdef"[bStack_48c];
         cVar11 = "0123456789abcdef"[bStack_47c];
         cVar12 = "0123456789abcdef"[bStack_517];
         cVar13 = "0123456789abcdef"[bStack_507];
         cVar14 = "0123456789abcdef"[auVar36._0_4_ & 0xff];
         bStack_555 = auVar36[3];
         bStack_545 = auVar38[3];
         bStack_526 = auVar38[2];
         cVar15 = "0123456789abcdef"[bStack_555];
         bStack_536 = auVar36[2];
         cVar16 = "0123456789abcdef"[bStack_545];
         cVar17 = "0123456789abcdef"[bStack_526];
         cVar18 = "0123456789abcdef"[bStack_536];
         bStack_564 = auVar38[4];
         bStack_574 = auVar36[4];
         bStack_5d1 = auVar36[7];
         bStack_5c1 = auVar38[7];
         bStack_583 = auVar38[5];
         bStack_593 = auVar36[5];
         bStack_5a2 = auVar38[6];
         bStack_5b2 = auVar36[6];
         cVar19 = "0123456789abcdef"[bStack_5d1];
         cVar20 = "0123456789abcdef"[bStack_5c1];
         cVar21 = "0123456789abcdef"[bStack_5b2];
         cVar22 = "0123456789abcdef"[bStack_5a2];
         cVar23 = "0123456789abcdef"[bStack_593];
         cVar24 = "0123456789abcdef"[auVar38._0_4_ & 0xff];
         cVar25 = "0123456789abcdef"[bStack_583];
         cVar26 = "0123456789abcdef"[bStack_574];
         cVar27 = "0123456789abcdef"[bStack_564];
         *(ulong*)( puVar1 + uVar34 * 2 + 0x52 ) = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789abcdef"[bStack_46d], "0123456789abcdef"[bStack_45d]), "0123456789abcdef"[bStack_44e]), "0123456789abcdef"[bStack_43e]), "0123456789abcdef"[bStack_42f]), "0123456789abcdef"[bStack_41f]), "0123456789abcdef"[bStack_410]), "0123456789abcdef"[bStack_400]);
         *(ulong*)( (long)( puVar1 + uVar34 * 2 + 0x52 ) + 8 ) = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar7, cVar8), cVar4), cVar5), cVar6), cVar9), cVar10), cVar11);
         *(ulong*)( pcVar32 + uVar34 * 2 ) = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar15, cVar16), cVar18), cVar17), cVar12), cVar13), cVar14), cVar24);
         *(ulong*)( pcVar32 + uVar34 * 2 + 8 ) = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19, cVar20), cVar21), cVar22), cVar23), cVar25), cVar26), cVar27);
         uVar34 = uVar34 + 0x10;
      }
 while ( uVar34 != local_630 );
      pcVar33 = pcVar32 + ( param_4 >> 4 ) * 0x20;
      if (param_4 != local_630) goto LAB_0010bdfc;
   }

   pcVar32 = pcVar32 + param_4 * 2;
   LAB_0010c0d8:*pcVar32 = '\0';
   pcVar30 = *(code**)( lVar29 + 0x3f8 );
   if (pcVar30 != (code*)0x0) {
      ( *pcVar30 )(*(undefined8*)( param_1 + 0x40 ), __dest);
   }

   CRYPTO_clear_free(__dest, lVar2, "ssl/ssl_lib.c", 0x1b5f);
   return 1;
}
undefined8 ssl_cache_cipherlist(long param_1, undefined8 *param_2, int param_3) {
   undefined2 uVar1;
   ulong uVar2;
   undefined2 *puVar3;
   long lVar4;
   char *pcVar5;
   char *pcVar6;
   ulong uVar7;
   long lVar8;
   uVar7 = 3 - ( ulong )(param_3 == 0);
   if (param_2[1] == 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1b8d, "ssl_cache_cipherlist");
      ossl_statem_fatal(param_1, 0x32, 0xb7, 0);
   }
 else if ((ulong)param_2[1] % uVar7 == 0) {
      CRYPTO_free(*(void**)( param_1 + 0x3a0 ));
      *(undefined8*)( param_1 + 0x3a0 ) = 0;
      *(undefined8*)( param_1 + 0x3a8 ) = 0;
      if (param_3 == 0) {
         CRYPTO_free((void*)0x0);
         *(undefined8*)( param_1 + 0x3a8 ) = 0;
         lVar8 = param_2[1];
         *(undefined8*)( param_1 + 0x3a0 ) = 0;
         if (lVar8 != 0) {
            lVar4 = CRYPTO_memdup(*param_2, lVar8, "include/internal/packet.h", 0x1cf);
            *(long*)( param_1 + 0x3a0 ) = lVar4;
            if (lVar4 == 0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0x1bc1, "ssl_cache_cipherlist");
               ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
               return 0;
            }

            *(long*)( param_1 + 0x3a8 ) = lVar8;
         }

         return 1;
      }

      uVar2 = param_2[1];
      pcVar5 = (char*)*param_2;
      puVar3 = (undefined2*)CRYPTO_malloc((int)( uVar2 / uVar7 ) * 2, "ssl/ssl_lib.c", 0x1ba7);
      *(undefined2**)( param_1 + 0x3a0 ) = puVar3;
      if (puVar3 == (undefined2*)0x0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1baa, "ssl_cache_cipherlist");
         ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
      }
 else {
         *(undefined8*)( param_1 + 0x3a8 ) = 0;
         pcVar6 = pcVar5 + 3;
         lVar8 = uVar2 - 3;
         uVar7 = uVar2 - 1;
         if (uVar2 == 0) {
            return 1;
         }

         if (*pcVar5 == '\0') goto LAB_0010c247;
         while (pcVar5 = pcVar6,lVar4 = lVar8,1 < uVar7) {
            while (true) {
               puVar3 = puVar3 + 1;
               pcVar6 = pcVar5 + 3;
               lVar8 = lVar4 + -3;
               uVar7 = uVar7 - 3;
               if (lVar4 == 0) {
                  return 1;
               }

               if (*pcVar5 != '\0') break;
               LAB_0010c247:if (uVar7 < 2) goto LAB_0010c251;
               uVar1 = *(undefined2*)( pcVar6 + -2 );
               *(long*)( param_1 + 0x3a8 ) = *(long*)( param_1 + 0x3a8 ) + 2;
               *puVar3 = uVar1;
               pcVar5 = pcVar6;
               lVar4 = lVar8;
            }
;
         }
;
         LAB_0010c251:ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1bb6, "ssl_cache_cipherlist");
         ossl_statem_fatal(param_1, 0x32, 0xf0, 0);
         CRYPTO_free(*(void**)( param_1 + 0x3a0 ));
         *(undefined8*)( param_1 + 0x3a0 ) = 0;
         *(undefined8*)( param_1 + 0x3a8 ) = 0;
      }

   }
 else {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1b92, "ssl_cache_cipherlist");
      ossl_statem_fatal(param_1, 0x32, 0x97, 0);
   }

   return 0;
}
undefined8 ossl_bytes_to_cipher_list(undefined8 param_1, long *param_2, long *param_3, long *param_4, int param_5, int param_6) {
   uint uVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   ulong uVar6;
   int *piVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   uint uVar11;
   long in_FS_OFFSET;
   char local_43[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = 3 - ( ulong )(param_5 == 0);
   if (param_2[1] == 0) {
      if (param_6 == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1be8, "ossl_bytes_to_cipher_list");
         ERR_set_error(0x14, 0xb7, 0);
      }
 else {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1be6, "ossl_bytes_to_cipher_list");
         ossl_statem_fatal(param_1, 0x2f, 0xb7, 0);
      }

   }
 else {
      if ((ulong)param_2[1] % uVar8 == 0) {
         lVar3 = OPENSSL_sk_new_null();
         lVar4 = OPENSSL_sk_new_null();
         if (( lVar3 == 0 ) || ( lVar4 == 0 )) {
            if (param_6 == 0) {
               ERR_new();
               uVar5 = 0x1bfb;
               goto LAB_0010c849;
            }

            ERR_new();
            uVar5 = 0x1bf9;
            goto LAB_0010c7fb;
         }

         uVar10 = param_2[1];
         lVar9 = *param_2;
         if (uVar8 <= uVar10) {
            uVar11 = (uint)uVar8;
            if (param_5 == 0) {
               do {
                  if (uVar11 != 0) {
                     uVar1 = 0;
                     do {
                        uVar6 = (ulong)uVar1;
                        uVar1 = uVar1 + 1;
                        local_43[uVar6] = *(char*)( lVar9 + uVar6 );
                     }
 while ( uVar1 < uVar11 );
                  }

                  *param_2 = lVar9 + uVar8;
                  param_2[1] = uVar10 - uVar8;
                  piVar7 = (int*)ssl_get_cipher_by_char(param_1, local_43, 1);
                  if (piVar7 != (int*)0x0) {
                     if (*piVar7 != 0) {
                        iVar2 = OPENSSL_sk_push(lVar3, piVar7);
                        if (iVar2 == 0) goto LAB_0010c870;
                        if (*piVar7 != 0) goto LAB_0010c74c;
                     }

                     iVar2 = OPENSSL_sk_push(lVar4, piVar7);
                     if (iVar2 == 0) goto LAB_0010c870;
                  }

                  LAB_0010c74c:uVar10 = param_2[1];
                  lVar9 = *param_2;
               }
 while ( uVar8 <= uVar10 );
            }
 else {
               do {
                  if (uVar11 != 0) {
                     uVar6 = 0;
                     do {
                        uVar1 = (int)uVar6 + 1;
                        local_43[uVar6] = *(char*)( lVar9 + uVar6 );
                        uVar6 = (ulong)uVar1;
                     }
 while ( uVar1 < uVar11 );
                  }

                  lVar9 = lVar9 + uVar8;
                  uVar10 = uVar10 - uVar8;
                  *param_2 = lVar9;
                  param_2[1] = uVar10;
                  if (local_43[0] == '\0') {
                     piVar7 = (int*)ssl_get_cipher_by_char(param_1, local_43 + 1, 1);
                     if (piVar7 != (int*)0x0) {
                        if (*piVar7 != 0) {
                           iVar2 = OPENSSL_sk_push(lVar3, piVar7);
                           if (iVar2 == 0) goto LAB_0010c870;
                           if (*piVar7 != 0) goto LAB_0010c6b5;
                        }

                        iVar2 = OPENSSL_sk_push(lVar4, piVar7);
                        if (iVar2 == 0) goto LAB_0010c870;
                     }

                     LAB_0010c6b5:lVar9 = *param_2;
                     uVar10 = param_2[1];
                  }

               }
 while ( uVar8 <= uVar10 );
            }

         }

         if (uVar10 == 0) {
            if (param_3 == (long*)0x0) {
               OPENSSL_sk_free(lVar3);
            }
 else {
               *param_3 = lVar3;
            }

            if (param_4 == (long*)0x0) {
               OPENSSL_sk_free(lVar4);
            }
 else {
               *param_4 = lVar4;
            }

            uVar5 = 1;
            goto LAB_0010c4d2;
         }

         if (param_6 == 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x1c19, "ossl_bytes_to_cipher_list");
            ERR_set_error(0x14, 0x10f, 0);
         }
 else {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x1c17, "ossl_bytes_to_cipher_list");
            ossl_statem_fatal(param_1, 0x32, 0x10f, 0);
         }

         goto LAB_0010c81d;
      }

      if (param_6 == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1bf1, "ossl_bytes_to_cipher_list");
         ERR_set_error(0x14, 0x97, 0);
      }
 else {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1bee, "ossl_bytes_to_cipher_list");
         ossl_statem_fatal(param_1, 0x32, 0x97, 0);
      }

   }

   goto LAB_0010c4d0;
   LAB_0010c870:if (param_6 == 0) {
      ERR_new();
      uVar5 = 0x1c10;
      LAB_0010c849:ERR_set_debug("ssl/ssl_lib.c", uVar5, "ossl_bytes_to_cipher_list");
      ERR_set_error(0x14, 0x8000f, 0);
   }
 else {
      ERR_new();
      uVar5 = 0x1c0e;
      LAB_0010c7fb:ERR_set_debug("ssl/ssl_lib.c", uVar5, "ossl_bytes_to_cipher_list");
      ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
   }

   LAB_0010c81d:OPENSSL_sk_free(lVar3);
   OPENSSL_sk_free(lVar4);
   LAB_0010c4d0:uVar5 = 0;
   LAB_0010c4d2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 SSL_bytes_to_cipher_list(uint *param_1, undefined8 param_2, long param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         LAB_0010c94b:if (-1 < param_3) {
            local_48 = param_2;
            local_40 = param_3;
            uVar1 = ossl_bytes_to_cipher_list(param_1, &local_48, param_5, param_6, param_4, 0);
            goto LAB_0010c972;
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_0010c94b;
      }

   }

   uVar1 = 0;
   LAB_0010c972:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 SSL_CTX_set_max_early_data(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x400 ) = param_2;
   return 1;
}
undefined4 SSL_CTX_get_max_early_data(long param_1) {
   return *(undefined4*)( param_1 + 0x400 );
}
undefined8 SSL_set_max_early_data(int *param_1, int param_2) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      param_1[0x550] = param_2;
      return 1;
   }

   return 0;
}
uint SSL_get_max_early_data(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return param_1[0x550];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(uint*)( lVar1 + 0x1540 );
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_CTX_set_recv_max_early_data(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x404 ) = param_2;
   return 1;
}
undefined4 SSL_CTX_get_recv_max_early_data(long param_1) {
   return *(undefined4*)( param_1 + 0x404 );
}
undefined8 SSL_set_recv_max_early_data(int *param_1, int param_2) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      param_1[0x551] = param_2;
      return 1;
   }

   return 0;
}
uint SSL_get_recv_max_early_data(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return param_1[0x551];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(uint*)( lVar1 + 0x1544 );
         }

         return 0;
      }

   }

   return 0;
}
int ssl_get_max_send_fragment(long param_1) {
   byte bVar1;
   if (( *(long*)( param_1 + 0x900 ) != 0 ) && ( bVar1 = *(char*)( *(long*)( param_1 + 0x900 ) + 0x358 ) - 1 ),bVar1 < 4) {
      return 0x200 << ( bVar1 & 0x1f );
   }

   return *(int*)( param_1 + 0x9e0 );
}
ulong ssl_get_split_send_fragment(long param_1) {
   byte bVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   uVar2 = *(ulong*)( param_1 + 0x9d8 );
   if (( ( ( *(long*)( param_1 + 0x900 ) == 0 ) || ( bVar1 = *(char*)( *(long*)( param_1 + 0x900 ) + 0x358 ) - 1 ),3 < bVar1 ) ) || ( uVar3 = 0x200 << ( bVar1 & 0x1f ) ),uVar4 = (ulong)uVar3,uVar2 <= uVar3) {
      uVar4 = uVar2 & 0xffffffff;
   }

   return uVar4;
}
int SSL_stateless(SSL *param_1) {
   int iVar1;
   if (param_1 == (SSL*)0x0) {
      return 0;
   }

   if (( param_1->version == 0 ) && ( iVar1 = iVar1 != 0 )) {
      ERR_clear_error();
      param_1->kssl_ctx = (KSSL_CTX*)( (ulong)param_1->kssl_ctx | 0x800 );
      iVar1 = SSL_accept(param_1);
      param_1->kssl_ctx = (KSSL_CTX*)( (ulong)param_1->kssl_ctx & 0xfffffffffffff7ff );
      if (( 0 < iVar1 ) && ( param_1[4].packet_length != 0 )) {
         return 1;
      }

      if (*(int*)&param_1[3].cipher_list_by_id != 1) {
         return -1;
      }

      iVar1 = ossl_statem_in_error(param_1);
      return -(uint)(iVar1 != 0);
   }

   return 0;
}
void SSL_CTX_set_post_handshake_auth(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x458 ) = param_2;
   return;
}
void SSL_set_post_handshake_auth(int *param_1, int param_2) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      param_1[0x2eb] = param_2;
   }

   return;
}
undefined8 SSL_verify_client_post_handshake(uint *param_1) {
   uint uVar1;
   int iVar2;
   uint *puVar3;
   undefined8 uVar4;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) == 0) {
         return 0;
      }

      puVar3 = (uint*)ossl_quic_obj_get0_handshake_layer();
      if (( *param_1 & 0x80 ) != 0) {
         ERR_new();
         uVar4 = 0x1cb9;
         goto LAB_0010cd31;
      }

      param_1 = puVar3;
      if (puVar3 == (uint*)0x0) {
         return 0;
      }

   }

   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 6 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar2 = **(int**)( param_1 + 6 ) ),iVar2 != 0x10000 )) {
      if (param_1[0x1e] == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1cc6, "SSL_verify_client_post_handshake");
         ERR_set_error(0x14, 0x11c, 0);
         return 0;
      }

      iVar2 = SSL_is_init_finished();
      if (iVar2 == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1ccb, "SSL_verify_client_post_handshake");
         ERR_set_error(0x14, 0x79, 0);
         return 0;
      }

      uVar1 = param_1[0x2ea];
      if (uVar1 == 3) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1cda, "SSL_verify_client_post_handshake");
         ERR_set_error(0x14, 0x11d, 0);
         return 0;
      }

      if (uVar1 < 4) {
         if (uVar1 == 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x1cd1, "SSL_verify_client_post_handshake");
            ERR_set_error(0x14, 0x117, 0);
            return 0;
         }

         if (uVar1 == 2) {
            param_1[0x2ea] = 3;
            iVar2 = send_certificate_request(param_1);
            if (iVar2 == 0) {
               param_1[0x2ea] = 2;
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0x1ce6, "SSL_verify_client_post_handshake");
               ERR_set_error(0x14, 0x11b, 0);
               return 0;
            }

            ossl_statem_set_in_init(param_1, 1);
            return 1;
         }

      }
 else if (uVar1 == 4) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1cdd, "SSL_verify_client_post_handshake");
         ERR_set_error(0x14, 0x11e, 0);
         return 0;
      }

      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1cd5, "SSL_verify_client_post_handshake");
      ERR_set_error(0x14, 0xc0103, 0);
      return 0;
   }

   ERR_new();
   uVar4 = 0x1cc2;
   LAB_0010cd31:ERR_set_debug("ssl/ssl_lib.c", uVar4, "SSL_verify_client_post_handshake");
   ERR_set_error(0x14, 0x10a, 0);
   return 0;
}
undefined8 SSL_CTX_set_session_ticket_cb(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   *(undefined8*)( param_1 + 0x428 ) = param_2;
   *(undefined8*)( param_1 + 0x430 ) = param_3;
   *(undefined8*)( param_1 + 0x438 ) = param_4;
   return 1;
}
void SSL_CTX_set_allow_early_data_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x448 ) = param_2;
   *(undefined8*)( param_1 + 0x450 ) = param_3;
   return;
}
void SSL_set_allow_early_data_cb(int *param_1, undefined8 param_2, undefined8 param_3) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      *(undefined8*)( param_1 + 0x55a ) = param_2;
      *(undefined8*)( param_1 + 0x55c ) = param_3;
   }

   return;
}
long ssl_evp_cipher_fetch(undefined8 param_1, int param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   int local_8c;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = tls_get_cipher_from_engine(param_2);
   if (lVar2 == 0) {
      ERR_set_mark();
      pcVar3 = OBJ_nid2sn(param_2);
      lVar4 = EVP_CIPHER_fetch(param_1, pcVar3, param_3);
      if (lVar4 != 0) {
         local_8c = 0;
         OSSL_PARAM_construct_int(&local_c8, "decrypt-only", &local_8c);
         local_68 = local_a8;
         local_88 = local_c8;
         uStack_80 = uStack_c0;
         local_78 = local_b8;
         uStack_70 = uStack_b0;
         OSSL_PARAM_construct_end(&local_c8);
         local_60 = local_c8;
         uStack_58 = uStack_c0;
         local_40 = local_a8;
         local_50 = local_b8;
         uStack_48 = uStack_b0;
         iVar1 = EVP_CIPHER_get_params(lVar4, &local_88);
         lVar2 = lVar4;
         if (( iVar1 != 0 ) && ( local_8c != 0 )) {
            lVar2 = 0;
            EVP_CIPHER_free(lVar4);
         }

      }

      ERR_pop_to_mark();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar2;
}
undefined8 ssl_evp_cipher_up_ref(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = EVP_CIPHER_get0_provider();
   if (lVar1 != 0) {
      uVar2 = EVP_CIPHER_up_ref(param_1);
      return uVar2;
   }

   return 1;
}
void ssl_evp_cipher_free(long param_1) {
   long lVar1;
   if (param_1 == 0) {
      return;
   }

   lVar1 = EVP_CIPHER_get0_provider();
   if (lVar1 != 0) {
      EVP_CIPHER_free(param_1);
      return;
   }

   return;
}
long ssl_evp_md_fetch(undefined8 param_1, int param_2, undefined8 param_3) {
   long lVar1;
   char *pcVar2;
   lVar1 = tls_get_digest_from_engine(param_2);
   if (lVar1 != 0) {
      return lVar1;
   }

   ERR_set_mark();
   pcVar2 = OBJ_nid2sn(param_2);
   lVar1 = EVP_MD_fetch(param_1, pcVar2, param_3);
   ERR_pop_to_mark();
   return lVar1;
}
undefined8 ssl_evp_md_up_ref(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = EVP_MD_get0_provider();
   if (lVar1 != 0) {
      uVar2 = EVP_MD_up_ref(param_1);
      return uVar2;
   }

   return 1;
}
void ssl_evp_md_free(long param_1) {
   long lVar1;
   if (param_1 == 0) {
      return;
   }

   lVar1 = EVP_MD_get0_provider();
   if (lVar1 != 0) {
      EVP_MD_free(param_1);
      return;
   }

   return;
}
void SSL_CTX_free(SSL_CTX *param_1) {
   int *piVar1;
   long lVar2;
   int iVar3;
   void *pvVar4;
   GEN_SESSION_CB pGVar5;
   stack_st_SRTP_PROTECTION_PROFILE *psVar6;
   undefined8 uVar7;
   ssl_session_st *psVar8;
   stack_st_SRTP_PROTECTION_PROFILE **ppsVar9;
   ulong uVar10;
   ulong uVar11;
   if (param_1 == (SSL_CTX*)0x0) {
      return;
   }

   LOCK();
   piVar1 = (int*)( (long)&param_1->app_verify_arg + 4 );
   iVar3 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar3 != 1 ) && ( 0 < iVar3 + -1 )) {
      return;
   }

   X509_VERIFY_PARAM_free(*(X509_VERIFY_PARAM**)param_1->tlsext_tick_hmac_key);
   CRYPTO_free(*(void**)( param_1[1].sid_ctx + 8 ));
   pvVar4 = *(void**)( param_1[1].sid_ctx + 0x10 );
   for (int i = 0; i < 8; i++) {
      param_1[1].sid_ctx[( i + 8 )] = '\0';
   }

   CRYPTO_free(pvVar4);
   psVar8 = param_1->session_cache_head;
   for (int i = 0; i < 9; i++) {
      param_1[1].sid_ctx[( i + 16 )] = '\0';
   }

   if (psVar8 != (ssl_session_st*)0x0) {
      SSL_CTX_flush_sessions_ex(param_1, 0);
   }

   CRYPTO_free_ex_data(1, param_1, (CRYPTO_EX_DATA*)&param_1->sha1);
   OPENSSL_LH_free(param_1->session_cache_head);
   X509_STORE_free((X509_STORE*)param_1->session_cache_size);
   CTLOG_STORE_free(*(undefined8*)param_1->tlsext_tick_aes_key);
   OPENSSL_sk_free(param_1->cipher_list_by_id);
   OPENSSL_sk_free(param_1->cert_store);
   OPENSSL_sk_free(param_1->sessions);
   ssl_cert_free(*(undefined8*)param_1->sid_ctx);
   OPENSSL_sk_pop_free(param_1->max_cert_list, X509_NAME_free);
   ppsVar9 = (stack_st_SRTP_PROTECTION_PROFILE**)&param_1[1].next_proto_select_cb_arg;
   OPENSSL_sk_pop_free(param_1->cert, X509_NAME_free);
   OSSL_STACK_OF_X509_free(param_1->client_CA);
   pGVar5 = param_1[1].generate_session_id;
   param_1->options = 0;
   OPENSSL_sk_free(pGVar5);
   ssl_ctx_srp_ctx_free_intern(param_1);
   tls_engine_finish(param_1->psk_identity_hint);
   CRYPTO_free((void*)param_1[1].session_cache_size);
   CRYPTO_free(param_1[1].session_cache_tail);
   CRYPTO_free((void*)param_1[1].session_timeout);
   CRYPTO_free(param_1[1].remove_session_cb);
   CRYPTO_free(*(void**)&param_1[1].stats.sess_connect_good);
   CRYPTO_secure_free(param_1->next_proto_select_cb_arg, "ssl/ssl_lib.c", 0x1135);
   ssl_evp_md_free(param_1->comp_methods);
   ssl_evp_md_free(param_1->info_callback);
   do {
      pvVar4 = *ppsVar9;
      ppsVar9 = ppsVar9 + 1;
      ssl_evp_cipher_free(pvVar4);
   }
 while ( ppsVar9 != (stack_st_SRTP_PROTECTION_PROFILE**)&param_1[2].default_passwd_callback_userdata );
   do {
      psVar6 = *ppsVar9;
      ppsVar9 = ppsVar9 + 1;
      ssl_evp_md_free(psVar6);
   }
 while ( (stack_st_SRTP_PROTECTION_PROFILE**)&param_1[2].mode != ppsVar9 );
   if (*(long*)( param_1[2].tlsext_tick_key_name + 8 ) != 0) {
      uVar10 = 0;
      do {
         uVar11 = uVar10 + 1;
         CRYPTO_free(*(void**)( *(long*)param_1[2].tlsext_tick_key_name + uVar10 * 0x38 ));
         CRYPTO_free(*(void**)( *(long*)param_1[2].tlsext_tick_key_name + 8 + uVar10 * 0x38 ));
         CRYPTO_free(*(void**)( *(long*)param_1[2].tlsext_tick_key_name + 0x10 + uVar10 * 0x38 ));
         uVar10 = uVar11;
      }
 while ( uVar11 < *(ulong*)( param_1[2].tlsext_tick_key_name + 8 ) );
   }

   CRYPTO_free(*(void**)param_1[2].tlsext_tick_key_name);
   if (*(long*)param_1[2].tlsext_tick_aes_key != 0) {
      uVar10 = 0;
      do {
         uVar11 = uVar10 + 1;
         lVar2 = uVar10 * 0x68;
         CRYPTO_free(*(void**)( *(long*)( param_1[2].tlsext_tick_hmac_key + 8 ) + uVar10 * 0x68 ));
         for (int i = 0; i < 8; i++) {
            CRYPTO_free(*(void**)( *(long*)( param_1[2].tlsext_tick_hmac_key + 8 ) + ( 8*i + 16 ) + lVar2 ));
         }

         uVar10 = uVar11;
      }
 while ( uVar11 < *(ulong*)param_1[2].tlsext_tick_aes_key );
   }

   CRYPTO_free(*(void**)( param_1[2].tlsext_tick_hmac_key + 8 ));
   CRYPTO_free(*(void**)( param_1->sid_ctx + 8 ));
   CRYPTO_free(param_1[2].tlsext_servername_callback);
   CRYPTO_free(param_1[2].tlsext_servername_arg);
   CRYPTO_free(param_1[2].tlsext_status_arg);
   CRYPTO_free(param_1[2].tlsext_opaque_prf_input_callback_arg);
   uVar7._0_4_ = param_1[1].quiet_shutdown;
   uVar7._4_4_ = param_1[1].max_send_fragment;
   CRYPTO_THREAD_lock_free(uVar7);
   CRYPTO_free(param_1[1].psk_client_callback);
   CRYPTO_free(*(void**)&param_1[2].freelist_max_len);
   ossl_quic_free_token_store(param_1[2].psk_server_callback);
   CRYPTO_free(param_1);
   return;
}
undefined8 ossl_ssl_init(undefined4 *param_1, SSL_CTX *param_2, undefined8 param_3, undefined4 param_4) {
   int iVar1;
   long lVar2;
   iVar1 = SSL_CTX_up_ref();
   if (iVar1 != 0) {
      lVar2 = CRYPTO_THREAD_lock_new();
      *(long*)( param_1 + 10 ) = lVar2;
      if (lVar2 != 0) {
         LOCK();
         param_1[8] = 1;
         UNLOCK();
         iVar1 = CRYPTO_new_ex_data(0, param_1, (CRYPTO_EX_DATA*)( param_1 + 0xc ));
         if (iVar1 != 0) {
            *(SSL_CTX**)( param_1 + 2 ) = param_2;
            *param_1 = param_4;
            *(undefined8*)( param_1 + 6 ) = param_3;
            *(undefined8*)( param_1 + 4 ) = param_3;
            return 1;
         }

         lVar2 = *(long*)( param_1 + 10 );
      }

      CRYPTO_THREAD_lock_free(lVar2);
      *(undefined8*)( param_1 + 10 ) = 0;
      SSL_CTX_free(param_2);
   }

   return 0;
}
void SSL_free(SSL *ssl) {
   BIO **ppBVar1;
   int iVar2;
   undefined8 uVar3;
   if (ssl == (SSL*)0x0) {
      return;
   }

   LOCK();
   ppBVar1 = &ssl->bbio;
   iVar2 = *(int*)ppBVar1;
   *(int*)ppBVar1 = *(int*)ppBVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }

   if (ssl->wbio != (BIO*)0x0) {
      ( **(code**)&ssl->wbio->init )();
   }

   CRYPTO_free_ex_data(0, ssl, (CRYPTO_EX_DATA*)&ssl->handshake_func);
   SSL_CTX_free((SSL_CTX*)ssl->method);
   uVar3._0_4_ = ssl->rwstate;
   uVar3._4_4_ = ssl->in_handshake;
   CRYPTO_THREAD_lock_free(uVar3);
   CRYPTO_free(ssl);
   return;
}
SSL *ossl_ssl_connection_new_int(long param_1, SSL *param_2, int *param_3) {
   undefined8 uVar1;
   size_t sVar2;
   ulong uVar3;
   _func_3155 *p_Var4;
   TLS_SESSION_TICKET_EXT *pTVar5;
   undefined8 uVar6;
   KSSL_CTX *pKVar7;
   _func_3153 *p_Var8;
   _func_3154 *p_Var9;
   SSL_CTX *pSVar10;
   EVP_CIPHER_CTX *pEVar11;
   EVP_MD_CTX *pEVar12;
   COMP_CTX *pCVar13;
   EVP_CIPHER_CTX *pEVar14;
   int iVar15;
   undefined4 uVar16;
   SSL *ssl;
   BIO *pBVar17;
   long lVar18;
   X509_VERIFY_PARAM *to;
   long lVar19;
   void *pvVar20;
   uchar *puVar21;
   _func_3149 *__dest;
   SSL *pSVar22;
   ssl = (SSL*)CRYPTO_zalloc(0x15b8, "ssl/ssl_lib.c", 0x2e2);
   if (ssl == (SSL*)0x0) {
      return (SSL*)0x0;
   }

   if (param_2 == (SSL*)0x0) {
      param_2 = ssl;
   }

   *(SSL**)&ssl->quiet_shutdown = param_2;
   iVar15 = ossl_ssl_init(ssl, param_1, param_3, 0);
   if (iVar15 == 0) {
      pSVar22 = (SSL*)0x0;
      CRYPTO_free(ssl);
   }
 else {
      RECORD_LAYER_init(&ssl[4].ex_data.dummy, ssl);
      ssl[3].client_CA = *(stack_st_X509_NAME**)( param_1 + 0x138 );
      uVar1 = *(undefined8*)( param_1 + 0x3d8 );
      ssl[1].tlsext_heartbeat = (int)uVar1;
      ssl[1].tlsext_hb_pending = (int)( (ulong)uVar1 >> 0x20 );
      if (*param_3 == **(int**)( param_1 + 8 )) {
         *(undefined8*)&ssl[3].field_0x1ac = *(undefined8*)( param_1 + 0x144 );
      }

      uVar1 = *(undefined8*)( param_1 + 0x20 );
      ssl[3].references = *(int*)( param_1 + 0x140 );
      ssl[3].mode = *(ulong*)( param_1 + 0x150 );
      ssl[7].tls_session_secret_cb_arg = *(void**)( param_1 + 0x400 );
      ssl[7].next_proto_negotiated = *(uchar**)( param_1 + 0x440 );
      *(undefined4*)( (long)&ssl[4].enc_write_ctx + 4 ) = *(undefined4*)( param_1 + 0x458 );
      pBVar17 = (BIO*)OPENSSL_sk_dup(uVar1);
      ssl[2].rbio = pBVar17;
      if (pBVar17 == (BIO*)0x0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x3c6, "ossl_ssl_connection_new_int");
         ERR_set_error(0x14, 0x8000f, 0);
         goto LAB_0010da6f;
      }

      lVar18 = ssl_cert_dup(*(undefined8*)( param_1 + 0x158 ));
      *(long*)&ssl[3].packet_length = lVar18;
      pSVar22 = ssl;
      if (lVar18 != 0) {
         puVar21 = *(uchar**)( param_1 + 0x418 );
         pvVar20 = *(void**)( param_1 + 0x420 );
         *(undefined4*)&ssl[4].tlsext_debug_arg = *(undefined4*)( param_1 + 0x168 );
         sVar2 = *(size_t*)( param_1 + 0x170 );
         ssl[4].tlsext_ellipticcurvelist = puVar21;
         ssl[4].tlsext_opaque_prf_input = pvVar20;
         ssl[1].tlsext_opaque_prf_input_len = sVar2;
         ssl[1].tlsext_session_ticket = *(TLS_SESSION_TICKET_EXT**)( param_1 + 0x178 );
         ssl[3].verify_mode = *(int*)( param_1 + 0x180 );
         ssl[4].ex_data.sk = *(stack_st_void**)( param_1 + 1000 );
         ssl[4].tlsext_ecpointformatlist = *(uchar**)( param_1 + 0x408 );
         ssl[4].tlsext_ellipticcurvelist_length = *(size_t*)( param_1 + 0x410 );
         uVar3 = *(ulong*)( param_1 + 0x188 );
         *(ulong*)&ssl[3].mac_flags = uVar3;
         if (0x20 < uVar3) goto LAB_0010da6f;
         pEVar11 = *(EVP_CIPHER_CTX**)( param_1 + 400 );
         pEVar12 = *(EVP_MD_CTX**)( param_1 + 0x198 );
         pCVar13 = *(COMP_CTX**)( param_1 + 0x1a0 );
         pEVar14 = *(EVP_CIPHER_CTX**)( param_1 + 0x1a8 );
         ssl[3].verify_callback = *(_func_3151**)( param_1 + 0x1b0 );
         uVar1 = *(undefined8*)( param_1 + 0x1b8 );
         ssl[3].enc_read_ctx = pEVar11;
         ssl[3].read_hash = pEVar12;
         *(undefined8*)( ssl[3].sid_ctx + 4 ) = uVar1;
         ssl[3].expand = pCVar13;
         ssl[3].enc_write_ctx = pEVar14;
         to = X509_VERIFY_PARAM_new();
         ssl[1].tls_session_ticket_ext_cb_arg = to;
         if (to == (X509_VERIFY_PARAM*)0x0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x3c9, "ossl_ssl_connection_new_int");
            ERR_set_error(0x14, 0x8000d, 0);
            goto LAB_0010da6f;
         }

         X509_VERIFY_PARAM_inherit(to, *(X509_VERIFY_PARAM**)( param_1 + 0x1c0 ));
         lVar18 = *(long*)( param_1 + 8 );
         lVar19 = OSSL_QUIC_client_method();
         if (( ( lVar18 == lVar19 ) || ( lVar18 = *(long*)( param_1 + 8 ) ),lVar19 = OSSL_QUIC_client_thread_method(),lVar18 == lVar19 )) {
            uVar16 = 0;
         }
 else {
            uVar16 = *(undefined4*)( param_1 + 0x1c8 );
         }

         *(undefined4*)&ssl->s3 = uVar16;
         lVar18 = *(long*)( param_1 + 8 );
         lVar19 = OSSL_QUIC_client_method();
         if (( ( lVar18 != lVar19 ) && ( lVar18 = *(long*)( param_1 + 8 ) ),lVar19 = OSSL_QUIC_client_thread_method(),lVar18 != lVar19 )) {
            ssl[4].field_0x74 = *(undefined1*)( param_1 + 0x27c );
         }

         p_Var4 = *(_func_3155**)( param_1 + 0x1f8 );
         uVar1 = *(undefined8*)( param_1 + 0x1e8 );
         uVar6 = *(undefined8*)( param_1 + 0x1f0 );
         ssl[3].tlsext_ocsp_ids = (stack_st_OCSP_RESPID*)0x0;
         ssl[3].tlsext_ocsp_exts = (X509_EXTENSIONS*)0x0;
         ssl[3].tlsext_debug_cb = p_Var4;
         p_Var4 = *(_func_3155**)( param_1 + 0x200 );
         *(undefined4*)&ssl[3].tlsext_session_ticket = 0;
         ssl[4].tlsext_debug_cb = p_Var4;
         iVar15 = *(int*)( param_1 + 0x278 );
         *(undefined4*)( (long)&ssl[3].tlsext_ecpointformatlist + 4 ) = 0;
         ssl[3].tlsext_ocsp_resplen = iVar15;
         ssl[3].tlsext_opaque_prf_input = (void*)0x0;
         ssl[3].tlsext_opaque_prf_input_len = 0;
         ssl[3].first_packet = (int)uVar1;
         ssl[3].client_version = (int)( (ulong)uVar1 >> 0x20 );
         *(undefined8*)&ssl[3].max_send_fragment = uVar6;
         ssl[3].tlsext_ellipticcurvelist_length = 0;
         ssl[3].tlsext_ellipticcurvelist = (uchar*)0x0;
         iVar15 = SSL_CTX_up_ref(param_1);
         if (iVar15 == 0) goto LAB_0010da6f;
         lVar18 = *(long*)( param_1 + 0x288 );
         *(long*)&ssl[4].mac_flags = param_1;
         if (lVar18 != 0) {
            pvVar20 = (void*)CRYPTO_memdup(lVar18, *(undefined8*)( param_1 + 0x280 ), "ssl/ssl_lib.c", 0x342);
            ssl[3].tls_session_ticket_ext_cb_arg = pvVar20;
            if (pvVar20 == (void*)0x0) {
               ssl[3].tls_session_ticket_ext_cb = (tls_session_ticket_ext_cb_fn)0x0;
               goto LAB_0010da6f;
            }

            ssl[3].tls_session_ticket_ext_cb = *(tls_session_ticket_ext_cb_fn*)( param_1 + 0x280 );
         }

         if (*(long*)( param_1 + 0x298 ) != 0) {
            puVar21 = (uchar*)CRYPTO_memdup(*(long*)( param_1 + 0x298 ), ( *(long*)( param_1 + 0x290 ) + ( ulong )(*(long*)( param_1 + 0x290 ) == 0) ) * 2, "ssl/ssl_lib.c", 0x352);
            ssl[3].next_proto_negotiated = puVar21;
            if (puVar21 == (uchar*)0x0) {
               ssl[3].initial_ctx = (SSL_CTX*)0x0;
               goto LAB_0010da6f;
            }

            ssl[3].initial_ctx = *(SSL_CTX**)( param_1 + 0x290 );
         }

         if (*(long*)( param_1 + 0x2a8 ) != 0) {
            lVar18 = CRYPTO_memdup(*(long*)( param_1 + 0x2a8 ), ( *(long*)( param_1 + 0x2a0 ) + ( ulong )(*(long*)( param_1 + 0x2a0 ) == 0) ) * 2, "ssl/ssl_lib.c");
            ssl[3].tlsext_heartbeat = (int)lVar18;
            ssl[3].tlsext_hb_pending = (int)( (ulong)lVar18 >> 0x20 );
            if (lVar18 == 0) {
               ssl[3].srtp_profile = (SRTP_PROTECTION_PROFILE*)0x0;
               goto LAB_0010da6f;
            }

            ssl[3].srtp_profile = *(SRTP_PROTECTION_PROFILE**)( param_1 + 0x2a0 );
         }

         if (*(long*)( param_1 + 0x2b8 ) != 0) {
            lVar18 = CRYPTO_memdup(*(long*)( param_1 + 0x2b8 ), ( *(long*)( param_1 + 0x2b0 ) + ( ulong )(*(long*)( param_1 + 0x2b0 ) == 0) ) * 8, "ssl/ssl_lib.c", 0x372);
            ssl[4].version = (int)lVar18;
            ssl[4].type = (int)( (ulong)lVar18 >> 0x20 );
            if (lVar18 == 0) {
               ssl[3].tlsext_hb_seq = 0;
               ssl[3].renegotiate = 0;
               goto LAB_0010da6f;
            }

            uVar1 = *(undefined8*)( param_1 + 0x2b0 );
            ssl[3].tlsext_hb_seq = (int)uVar1;
            ssl[3].renegotiate = (int)( (ulong)uVar1 >> 0x20 );
         }

         lVar18 = *(long*)( param_1 + 0x2d0 );
         ssl[4].quiet_shutdown = 0;
         ssl[4].shutdown = 0;
         if (lVar18 != 0) {
            __dest = (_func_3149*)CRYPTO_malloc((int)*(undefined8*)( param_1 + 0x2d8 ), "ssl/ssl_lib.c", 0x381);
            ssl[4].handshake_func = __dest;
            if (__dest == (_func_3149*)0x0) {
               ssl[4].server = 0;
               ssl[4].new_session = 0;
               goto LAB_0010da6f;
            }

            sVar2 = *(size_t*)( param_1 + 0x2d8 );
            memcpy(__dest, *(void**)( param_1 + 0x2d0 ), sVar2);
            ssl[4].server = (int)sVar2;
            ssl[4].new_session = (int)( sVar2 >> 0x20 );
         }

         sVar2 = *(size_t*)( param_1 + 0xb8 );
         lVar18 = *(long*)( param_1 + 8 );
         *(undefined8*)&ssl[3].debug = 0;
         ssl[3].verify_result = 0;
         ssl[7].tlsext_opaque_prf_input_len = sVar2;
         pTVar5 = *(TLS_SESSION_TICKET_EXT**)( param_1 + 0xc0 );
         *(undefined4*)( (long)&ssl[4].expand + 4 ) = 0xffffffff;
         ssl[7].tlsext_session_ticket = pTVar5;
         lVar19 = OSSL_QUIC_client_method();
         if (( ( lVar18 != lVar19 ) && ( lVar18 = *(long*)( param_1 + 8 ) ),lVar19 = OSSL_QUIC_client_thread_method(),lVar18 != lVar19 )) {
            ssl[7].srtp_profile = *(SRTP_PROTECTION_PROFILE**)( param_1 + 0x448 );
            uVar1 = *(undefined8*)( param_1 + 0x450 );
            ssl[7].tlsext_heartbeat = (int)uVar1;
            ssl[7].tlsext_hb_pending = (int)( (ulong)uVar1 >> 0x20 );
         }

         iVar15 = ( **(code**)( param_3 + 10 ) )(ssl);
         if (iVar15 != 0) {
            *(uint*)&ssl->s2 = ( uint )(*(code**)( param_3 + 0x10 ) != ssl_undefined_function);
            iVar15 = ( **(code**)( param_3 + 8 ) )(ssl);
            if (iVar15 != 0) {
               uVar1 = *(undefined8*)( param_1 + 0x460 );
               pKVar7 = *(KSSL_CTX**)( param_1 + 800 );
               p_Var8 = *(_func_3153**)( param_1 + 0x328 );
               ssl[7].tls_session_ticket_ext_cb = (tls_session_ticket_ext_cb_fn)0x0;
               p_Var9 = *(_func_3154**)( param_1 + 0x330 );
               pSVar10 = *(SSL_CTX**)( param_1 + 0x338 );
               lVar18 = *(long*)( param_1 + 0x6b0 );
               ssl[7].tlsext_hb_seq = (int)uVar1;
               ssl[7].renegotiate = (int)( (ulong)uVar1 >> 0x20 );
               uVar1 = *(undefined8*)( param_1 + 0x468 );
               ssl[3].kssl_ctx = pKVar7;
               ssl[3].psk_client_callback = p_Var8;
               ssl[8].version = (int)uVar1;
               ssl[8].type = (int)( (ulong)uVar1 >> 0x20 );
               ssl[3].psk_server_callback = p_Var9;
               ssl[3].ctx = pSVar10;
               if (lVar18 != 0) {
                  pBVar17 = (BIO*)CRYPTO_memdup(lVar18, *(undefined8*)( param_1 + 0x6b8 ), "ssl/ssl_lib.c", 0x3af);
                  ssl[8].wbio = pBVar17;
                  if (pBVar17 == (BIO*)0x0) goto LAB_0010da43;
                  ssl[8].bbio = *(BIO**)( param_1 + 0x6b8 );
               }

               if (*(long*)( param_1 + 0x6c0 ) != 0) {
                  lVar18 = CRYPTO_memdup(*(long*)( param_1 + 0x6c0 ), *(undefined8*)( param_1 + 0x6c8 ), "ssl/ssl_lib.c", 0x3b6);
                  ssl[8].rwstate = (int)lVar18;
                  ssl[8].in_handshake = (int)( (ulong)lVar18 >> 0x20 );
                  if (lVar18 == 0) goto LAB_0010da43;
                  ssl[8].handshake_func = *(_func_3149**)( param_1 + 0x6c8 );
               }

               iVar15 = SSL_set_ct_validation_callback(ssl, *(undefined8*)( param_1 + 0x1d8 ), *(undefined8*)( param_1 + 0x1e0 ));
               if (iVar15 != 0) {
                  *(long*)( ssl->sid_ctx + 0xc ) = *(long*)( param_1 + 0x690 ) + 9;
                  return ssl;
               }

            }

         }

      }

   }

   LAB_0010da43:ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x3cc, "ossl_ssl_connection_new_int");
   ERR_set_error(0x14, 0x80014, 0);
   ssl = pSVar22;
   LAB_0010da6f:SSL_free(ssl);
   return (SSL*)0x0;
}
void ossl_ssl_connection_new(long param_1) {
   ossl_ssl_connection_new_int(param_1, 0, *(undefined8*)( param_1 + 8 ));
   return;
}
SSL *SSL_dup(SSL *ssl) {
   X509_VERIFY_PARAM *to;
   X509_VERIFY_PARAM *from;
   uint uVar1;
   int iVar2;
   int extraout_EAX;
   int iVar3;
   uint uVar4;
   int iVar5;
   SSL_CTX *ctx;
   SSL *s;
   void *pvVar6;
   undefined1 *puVar7;
   long lVar8;
   undefined4 extraout_var;
   cb *cb;
   SSL_METHOD *pSVar9;
   int val;
   X509_STORE_CTX *pXVar10;
   if (ssl == (SSL*)0x0) {
      return (SSL*)0x0;
   }

   if (ssl->version != 0) {
      return (SSL*)0x0;
   }

   iVar2 = SSL_in_init();
   if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) {
      LOCK();
      *(int*)&ssl->bbio = *(int*)&ssl->bbio + 1;
      UNLOCK();
      return ssl;
   }

   ctx = SSL_get_SSL_CTX(ssl);
   s = SSL_new(ctx);
   if (s == (SSL*)0x0) {
      return (SSL*)0x0;
   }

   if (s->version == 0) {
      if (ssl[3].write_hash == (EVP_MD_CTX*)0x0) {
         iVar2 = SSL_set_ssl_method(s, (SSL_METHOD*)ssl->wbio);
         if (iVar2 == 0) goto LAB_0010e0d8;
         if (*(long*)&ssl[3].packet_length != 0) {
            ssl_cert_free(*(undefined8*)&s[3].packet_length);
            lVar8 = ssl_cert_dup(*(undefined8*)&ssl[3].packet_length);
            *(long*)&s[3].packet_length = lVar8;
            if (lVar8 == 0) goto LAB_0010e0d8;
         }

         iVar2 = SSL_set_session_id_context(s, (uchar*)&ssl[3].enc_read_ctx, ssl[3].mac_flags);
      }
 else {
         SSL_copy_session_id(s, ssl);
         iVar2 = extraout_EAX;
      }

      if (iVar2 != 0) {
         iVar2 = OPENSSL_sk_num(ssl[1].tls_session_secret_cb_arg);
         if (0 < iVar2) {
            iVar2 = OPENSSL_sk_num(ssl[1].tls_session_secret_cb_arg);
            OPENSSL_sk_pop_free(s[1].tls_session_secret_cb_arg, tlsa_free);
            s[1].tls_session_secret_cb_arg = (void*)0x0;
            OSSL_STACK_OF_X509_free(s[1].initial_ctx);
            s[1].initial_ctx = (SSL_CTX*)0x0;
            X509_free(*(X509**)&s[1].next_proto_negotiated_len);
            s[1].next_proto_negotiated = (uchar*)0x0;
            s[1].next_proto_negotiated_len = '\0';
            *(undefined7*)&s[1].field_0x289 = 0;
            uVar4 = ssl[1].tlsext_heartbeat;
            uVar1 = ssl[1].tlsext_hb_pending;
            *(undefined8*)( (long)&s[1].srtp_profiles + 4 ) = 0xffffffffffffffff;
            s[1].tlsext_heartbeat = uVar4;
            s[1].tlsext_hb_pending = uVar1;
            s[1].tls_session_secret_cb = ( tls_session_secret_cb_fn ) & s->method[4].ssl_accept;
            pvVar6 = (void*)OPENSSL_sk_new_reserve(0, iVar2);
            s[1].tls_session_secret_cb_arg = pvVar6;
            if (pvVar6 == (void*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0xc9, "ssl_dane_dup");
               ERR_set_error(0x14, 0x8000f, 0);
               goto LAB_0010e0d8;
            }

            iVar5 = 0;
            if (0 < iVar2) {
               do {
                  puVar7 = (undefined1*)OPENSSL_sk_value(ssl[1].tls_session_secret_cb_arg, iVar5);
                  iVar3 = SSL_dane_tlsa_add(s, *puVar7, puVar7[1], puVar7[2], *(undefined8*)( puVar7 + 8 ), *(undefined8*)( puVar7 + 0x10 ));
                  if (iVar3 < 1) goto LAB_0010e0d8;
                  iVar5 = iVar5 + 1;
               }
 while ( iVar2 != iVar5 );
            }

         }

         s->state = ssl->state;
         s[3].client_CA = ssl[3].client_CA;
         *(undefined8*)&s[3].field_0x1ac = *(undefined8*)&ssl[3].field_0x1ac;
         s[3].references = ssl[3].references;
         lVar8 = SSL_ctrl(ssl, 0x32, 0, (void*)0x0);
         SSL_ctrl(s, 0x33, lVar8, (void*)0x0);
         uVar4 = SSL_get_read_ahead(ssl);
         pXVar10 = (X509_STORE_CTX*)(ulong)uVar4;
         SSL_set_read_ahead(s, uVar4);
         s[1].tlsext_opaque_prf_input_len = ssl[1].tlsext_opaque_prf_input_len;
         s[1].tlsext_session_ticket = ssl[1].tlsext_session_ticket;
         iVar2 = SSL_get_verify_callback((int)ssl, pXVar10);
         iVar5 = SSL_get_verify_mode(ssl);
         SSL_set_verify(s, iVar5, (callback*)CONCAT44(extraout_var, iVar2));
         iVar2 = SSL_get_verify_depth(ssl);
         SSL_set_verify_depth(s, iVar2);
         *(undefined8*)( s[3].sid_ctx + 4 ) = *(undefined8*)( ssl[3].sid_ctx + 4 );
         SSL_get_info_callback(ssl, iVar2, val);
         SSL_set_info_callback(s, cb);
         iVar2 = CRYPTO_dup_ex_data(0, (CRYPTO_EX_DATA*)&s->handshake_func, (CRYPTO_EX_DATA*)&ssl->handshake_func);
         if (iVar2 != 0) {
            iVar2 = *(int*)&ssl->s2;
            lVar8 = *(long*)&ssl->packet_length;
            *(int*)&s->s2 = iVar2;
            if (lVar8 != 0) {
               if (iVar2 == 0) {
                  SSL_set_connect_state(s);
               }
 else {
                  SSL_set_accept_state(s);
               }

            }

            to = (X509_VERIFY_PARAM*)s[1].tls_session_ticket_ext_cb_arg;
            from = (X509_VERIFY_PARAM*)ssl[1].tls_session_ticket_ext_cb_arg;
            *(undefined4*)( (long)&s->s3 + 4 ) = *(undefined4*)( (long)&ssl->s3 + 4 );
            *(undefined4*)&s[1].tls_session_ticket_ext_cb = *(undefined4*)&ssl[1].tls_session_ticket_ext_cb;
            s[7].tlsext_opaque_prf_input_len = ssl[7].tlsext_opaque_prf_input_len;
            s[7].tlsext_session_ticket = ssl[7].tlsext_session_ticket;
            X509_VERIFY_PARAM_inherit(to, from);
            lVar8._0_4_ = ssl[2].version;
            lVar8._4_4_ = ssl[2].type;
            if (lVar8 != 0) {
               lVar8 = OPENSSL_sk_dup();
               s[2].version = (int)lVar8;
               s[2].type = (int)( (ulong)lVar8 >> 0x20 );
               if (lVar8 == 0) goto LAB_0010e0d8;
            }

            if (ssl[2].method != (SSL_METHOD*)0x0) {
               pSVar9 = (SSL_METHOD*)OPENSSL_sk_dup();
               s[2].method = pSVar9;
               if (pSVar9 == (SSL_METHOD*)0x0) goto LAB_0010e0d8;
            }

            iVar2 = dup_ca_names(&s[3].ex_data, ssl[3].ex_data.sk);
            if (( iVar2 != 0 ) && ( iVar2 = dup_ca_names(&s[3].ex_data.dummy, *(undefined8*)&ssl[3].ex_data.dummy) ),iVar2 != 0) {
               return s;
            }

         }

      }

   }

   LAB_0010e0d8:SSL_free(s);
   return (SSL*)0x0;
}
void ossl_ssl_connection_free(int *param_1) {
   void *ptr;
   if (param_1 == (int*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      return;
   }

   ssl_free_wbio_buffer();
   RECORD_LAYER_clear(param_1 + 0x316);
   X509_VERIFY_PARAM_free(*(X509_VERIFY_PARAM**)( param_1 + 0x144 ));
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x148 ), tlsa_free);
   param_1[0x148] = 0;
   param_1[0x149] = 0;
   OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0x14a ));
   param_1[0x14a] = 0;
   param_1[0x14b] = 0;
   X509_free(*(X509**)( param_1 + 0x14e ));
   param_1[0x151] = -1;
   param_1[0x152] = -1;
   *(undefined1(*) [16])( param_1 + 0x14c ) = (undefined1[16])0x0;
   BUF_MEM_free(*(BUF_MEM**)( param_1 + 0x3e ));
   OPENSSL_sk_free(*(undefined8*)( param_1 + 0x158 ));
   OPENSSL_sk_free(*(undefined8*)( param_1 + 0x15a ));
   OPENSSL_sk_free(*(undefined8*)( param_1 + 0x15c ));
   OPENSSL_sk_free(*(undefined8*)( param_1 + 0x156 ));
   if (*(long*)( param_1 + 0x240 ) != 0) {
      ssl_clear_bad_session(param_1);
      SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x240 ));
   }

   SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x242 ));
   CRYPTO_free(*(void**)( param_1 + 0x244 ));
   ssl_cert_free(*(undefined8*)( param_1 + 0x220 ));
   CRYPTO_free(*(void**)( param_1 + 0x562 ));
   CRYPTO_free(*(void**)( param_1 + 0x288 ));
   SSL_CTX_free(*(SSL_CTX**)( param_1 + 0x2e2 ));
   CRYPTO_free(*(void**)( param_1 + 0x29c ));
   CRYPTO_free(*(void**)( param_1 + 0x2a0 ));
   CRYPTO_free(*(void**)( param_1 + 0x2a4 ));
   CRYPTO_free(*(void**)( param_1 + 0x2ac ));
   CRYPTO_free(*(void**)( param_1 + 0x2b0 ));
   CRYPTO_free(*(void**)( param_1 + 0x2a8 ));
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x292 ), &X509_EXTENSION_free);
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x290 ), &OCSP_RESPID_free);
   SCT_LIST_free(*(undefined8*)( param_1 + 0x2de ));
   CRYPTO_free(*(void**)( param_1 + 0x28c ));
   CRYPTO_free(*(void**)( param_1 + 0x294 ));
   CRYPTO_free(*(void**)( param_1 + 700 ));
   CRYPTO_free(*(void**)( param_1 + 0x2c8 ));
   ptr = *(void**)( param_1 + 0x2d6 );
   if (ptr != (void*)0x0) {
      CRYPTO_free(*(void**)( (long)ptr + 0x288 ));
      ptr = *(void**)( param_1 + 0x2d6 );
   }

   CRYPTO_free(ptr);
   CRYPTO_free(*(void**)( param_1 + 0x2ec ));
   EVP_MD_CTX_free(*(undefined8*)( param_1 + 0x2f2 ));
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x268 ), X509_NAME_free);
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x26a ), X509_NAME_free);
   CRYPTO_free(*(void**)( param_1 + 0x566 ));
   CRYPTO_free(*(void**)( param_1 + 0x56a ));
   OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0x264 ));
   if (*(long*)( param_1 + 6 ) != 0) {
      ( **(code**)( *(long*)( param_1 + 6 ) + 0x38 ) )(param_1);
   }

   ASYNC_WAIT_CTX_free(*(undefined8*)( param_1 + 0x54c ));
   CRYPTO_free(*(void**)( param_1 + 0x2c0 ));
   OPENSSL_sk_free(*(undefined8*)( param_1 + 0x2e4 ));
   BIO_free_all(*(BIO**)( param_1 + 0x16 ));
   param_1[0x16] = 0;
   param_1[0x17] = 0;
   BIO_free_all(*(BIO**)( param_1 + 0x14 ));
   param_1[0x14] = 0;
   param_1[0x15] = 0;
   CRYPTO_free(*(void**)( param_1 + 0x102 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */SSL_CTX *SSL_CTX_new_ex(SSL_METHOD *param_1, char *param_2, stack_st_SSL_CIPHER *param_3) {
   _func_3097 *p_Var1;
   int iVar2;
   SSL_CTX *obj;
   long lVar3;
   _func_3101 *p_Var4;
   _func_3088 *p_Var5;
   undefined8 uVar6;
   ssl_session_st *psVar7;
   X509_STORE *pXVar8;
   X509_VERIFY_PARAM *pXVar9;
   stack_st_SSL_COMP *psVar10;
   _func_3094 *p_Var11;
   cert_st *pcVar12;
   void *pvVar13;
   stack_st_SSL_CIPHER *psVar14;
   _func_3102 *p_Var15;
   if (param_3 == (stack_st_SSL_CIPHER*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0xf99, "SSL_CTX_new_ex");
      ERR_set_error(0x14, 0xc4, 0);
      return (SSL_CTX*)0x0;
   }

   iVar2 = OPENSSL_init_ssl(0x200000, 0);
   if (iVar2 == 0) {
      return (SSL_CTX*)0x0;
   }

   iVar2 = SSL_get_ex_data_X509_STORE_CTX_idx();
   if (iVar2 < 0) {
      ERR_new();
      obj = (SSL_CTX*)0x0;
      ERR_set_debug("ssl/ssl_lib.c", 0xfa2, "SSL_CTX_new_ex");
      ERR_set_error(0x14, 0x10d, 0);
      goto LAB_0010eb20;
   }

   obj = (SSL_CTX*)CRYPTO_zalloc(0x6e8, "ssl/ssl_lib.c", 0xfa6);
   if (obj == (SSL_CTX*)0x0) {
      return (SSL_CTX*)0x0;
   }

   LOCK();
   *(undefined4*)( (long)&obj->app_verify_arg + 4 ) = 1;
   UNLOCK();
   lVar3 = CRYPTO_THREAD_lock_new();
   obj[1].quiet_shutdown = (int)lVar3;
   obj[1].max_send_fragment = (int)( (ulong)lVar3 >> 0x20 );
   if (lVar3 == 0) {
      ERR_new();
      uVar6 = 0xfb2;
   }
 else {
      obj->method = param_1;
      if (param_2 != (char*)0x0) {
         p_Var4 = (_func_3101*)CRYPTO_strdup(param_2, "ssl/ssl_lib.c", 0xfc0);
         obj[1].psk_client_callback = p_Var4;
         if (p_Var4 == (_func_3101*)0x0) goto LAB_0010eb20;
      }

      obj->cipher_list = param_3;
      *(undefined8*)( (long)&obj->msg_callback + 4 ) = 0;
      *(undefined4*)&obj->msg_callback = 4;
      *(undefined4*)&obj->new_session_cb = 2;
      obj->session_cache_tail = (ssl_session_st*)0x5000;
      p_Var5 = (_func_3088*)( **(code**)&param_3[6].stack.sorted )();
      obj->verify_mode = 0x19000;
      obj->sid_ctx_length = 0;
      obj->remove_session_cb = p_Var5;
      *(undefined4*)&obj->generate_session_id = 0;
      uVar6 = OPENSSL_LH_new(ssl_session_hash, ssl_session_cmp);
      psVar7 = (ssl_session_st*)OPENSSL_LH_set_thunks(uVar6, 0x100000, lh_SSL_SESSION_cfn_thunk, lh_SSL_SESSION_doall_thunk, lh_SSL_SESSION_doall_arg_thunk);
      obj->session_cache_head = psVar7;
      if (psVar7 != (ssl_session_st*)0x0) {
         pXVar8 = X509_STORE_new();
         obj->session_cache_size = (ulong)pXVar8;
         if (pXVar8 == (X509_STORE*)0x0) {
            ERR_new();
            uVar6 = 0xfd7;
         }
 else {
            lVar3 = CTLOG_STORE_new_ex(param_1, param_2);
            *(long*)obj->tlsext_tick_aes_key = lVar3;
            if (lVar3 == 0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0xfdd, "SSL_CTX_new_ex");
               ERR_set_error(0x14, 0x80032, 0);
               goto LAB_0010eb20;
            }

            iVar2 = ssl_load_ciphers(obj);
            if (iVar2 == 0) {
               ERR_new();
               uVar6 = 0xfe4;
               LAB_0010ebc1:ERR_set_debug("ssl/ssl_lib.c", uVar6, "SSL_CTX_new_ex");
               ERR_set_error(0x14, 0x80014, 0);
               SSL_CTX_free(obj);
               return (SSL_CTX*)0x0;
            }

            iVar2 = ssl_load_groups(obj);
            if (iVar2 == 0) {
               ERR_new();
               uVar6 = 0xfe9;
               goto LAB_0010ebc1;
            }

            iVar2 = ssl_load_sigalgs(obj);
            if (iVar2 == 0) {
               ERR_new();
               uVar6 = 0xfef;
               goto LAB_0010ebc1;
            }

            iVar2 = ssl_setup_sigalgs(obj);
            if (iVar2 == 0) {
               ERR_new();
               uVar6 = 0xff5;
               goto LAB_0010ebc1;
            }

            uVar6 = OSSL_default_ciphersuites();
            iVar2 = SSL_CTX_set_ciphersuites(obj, uVar6);
            if (iVar2 == 0) {
               ERR_new();
               uVar6 = 0xffa;
               goto LAB_0010ebc1;
            }

            lVar3 = ssl_cert_new(*(long*)obj[2].tlsext_tick_aes_key + 9);
            *(long*)obj->sid_ctx = lVar3;
            if (lVar3 == 0) {
               ERR_new();
               uVar6 = 0xfff;
               goto LAB_0010ebc1;
            }

            uVar6 = OSSL_default_cipher_list();
            lVar3 = ssl_create_cipher_list(obj, obj->sessions, &obj->cipher_list_by_id, &obj->cert_store, uVar6, lVar3);
            if (( lVar3 == 0 ) || ( iVar2 = iVar2 < 1 )) {
               ERR_new();
               ERR_set_debug("ssl/ssl_lib.c", 0x1008, "SSL_CTX_new_ex");
               ERR_set_error(0x14, 0xa1, 0);
               goto LAB_0010eb20;
            }

            pXVar9 = X509_VERIFY_PARAM_new();
            *(X509_VERIFY_PARAM**)obj->tlsext_tick_hmac_key = pXVar9;
            if (pXVar9 != (X509_VERIFY_PARAM*)0x0) {
               psVar10 = (stack_st_SSL_COMP*)ssl_evp_md_fetch(param_1, 4, param_2);
               obj->comp_methods = psVar10;
               p_Var11 = (_func_3094*)ssl_evp_md_fetch(param_1, 0x40, param_2);
               obj->info_callback = p_Var11;
               lVar3 = OPENSSL_sk_new_null();
               obj->max_cert_list = lVar3;
               if (lVar3 == 0) {
                  ERR_new();
                  uVar6 = 0x101a;
               }
 else {
                  pcVar12 = (cert_st*)OPENSSL_sk_new_null();
                  obj->cert = pcVar12;
                  if (pcVar12 == (cert_st*)0x0) {
                     ERR_new();
                     uVar6 = 0x101f;
                  }
 else {
                     iVar2 = CRYPTO_new_ex_data(1, obj, (CRYPTO_EX_DATA*)&obj->sha1);
                     if (iVar2 != 0) {
                        pvVar13 = (void*)CRYPTO_secure_zalloc(0x40, "ssl/ssl_lib.c", 0x1028);
                        obj->next_proto_select_cb_arg = pvVar13;
                        if (pvVar13 != (void*)0x0) {
                           if (( (byte)param_3[6].stack.comp[0x50] & 8 ) == 0) {
                              psVar10 = SSL_COMP_get_compression_methods();
                              obj->options = (ulong)psVar10;
                           }

                           pvVar13 = _UNK_001110d8;
                           obj->tlsext_status_cb = __LC25;
                           obj->tlsext_status_arg = pvVar13;
                           iVar2 = RAND_bytes_ex(param_1, &obj->next_protos_advertised_cb_arg, 0x10, 0);
                           if (( ( iVar2 < 1 ) || ( iVar2 = RAND_priv_bytes_ex(param_1, obj->next_proto_select_cb_arg, 0x20, 0) ),iVar2 < 1 )) ( iVar2 = RAND_priv_bytes_ex(param_1, (long)obj->next_proto_select_cb_arg + 0x20, 0x20, 0) ),iVar2;
                        }

                        iVar2 = RAND_priv_bytes_ex(param_1, &obj[1].app_verify_arg, 0x20, 0);
                        if (iVar2 < 1) {
                           ERR_new();
                           ERR_set_debug("ssl/ssl_lib.c", 0x103d, "SSL_CTX_new_ex");
                           ERR_set_error(0x14, 0x80024, 0);
                        }
 else {
                           iVar2 = ssl_ctx_srp_ctx_init_intern(obj);
                           p_Var1 = _LC26;
                           if (iVar2 == 0) {
                              ERR_new();
                              uVar6 = 0x1043;
                              goto LAB_0010ebc1;
                           }

                           *(ulong*)&obj->read_ahead = *(ulong*)&obj->read_ahead | 0x120000;
                           *(undefined4*)&obj[1].cert_store = 0xffffffff;
                           obj[1].tlsext_servername_callback = p_Var1;
                           obj[1].tlsext_ticket_key_cb = (_func_3098*)0x2;
                           psVar14 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_method();
                           if (param_3 == psVar14) {
                              p_Var15 = (_func_3102*)ossl_quic_new_token_store();
                              obj[2].psk_server_callback = p_Var15;
                              if (p_Var15 == (_func_3102*)0x0) goto LAB_0010eb20;
                           }

                           obj[2].psk_client_callback = (_func_3101*)0x0;
                           psVar14 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_method();
                           if (( ( param_3 == psVar14 ) || ( psVar14 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_thread_method() ),param_3 == psVar14 )) {
                              psVar14 = (stack_st_SSL_CIPHER*)OSSL_QUIC_client_thread_method();
                              obj[2].psk_client_callback = (_func_3101*)( ( ulong )(param_3 != psVar14) * 4 + 0xe );
                           }

                           iVar2 = ssl_ctx_system_config(obj);
                           if (iVar2 != 0) {
                              return obj;
                           }

                           ERR_new();
                           ERR_set_debug("ssl/ssl_lib.c", 0x10ad, "SSL_CTX_new_ex");
                           ERR_set_error(0x14, 0x1a3, 0);
                        }

                     }

                     goto LAB_0010eb20;
                  }

                  ERR_new();
                  uVar6 = 0x1024;
               }

            }

            goto LAB_0010ec19;
         }

         ERR_new();
         uVar6 = 0x100e;
      }

      ERR_set_debug("ssl/ssl_lib.c", uVar6, "SSL_CTX_new_ex");
      ERR_set_error(0x14, 0x8000b, 0);
      goto LAB_0010eb20;
   }

   ERR_new();
   uVar6 = 0xfd2;
}
LAB_0010ec19:ERR_set_debug("ssl/ssl_lib.c", uVar6, "SSL_CTX_new_ex");ERR_set_error(0x14, 0x8000f, 0);LAB_0010eb20:SSL_CTX_free(obj);return (SSL_CTX*)0x0;}SSL_CTX *SSL_CTX_new(SSL_METHOD *meth) {
   SSL_CTX *pSVar1;
   pSVar1 = (SSL_CTX*)SSL_CTX_new_ex(0, 0, meth);
   return pSVar1;
}
SSL_CTX *SSL_set_SSL_CTX(SSL *ssl, SSL_CTX *ctx) {
   SSL_METHOD *pSVar1;
   EVP_MD_CTX *pEVar2;
   EVP_CIPHER_CTX *pEVar3;
   int iVar4;
   long lVar5;
   if (ssl == (SSL*)0x0) {
      return (SSL_CTX*)0x0;
   }

   if (ssl->version == 0) {
      if ((SSL_CTX*)ssl->method == ctx) {
         return ctx;
      }

      if (ctx == (SSL_CTX*)0x0) {
         ctx = *(SSL_CTX**)&ssl[4].mac_flags;
      }

      lVar5 = ssl_cert_dup(*(undefined8*)ctx->sid_ctx);
      if (lVar5 != 0) {
         iVar4 = custom_exts_copy_flags(lVar5 + 0x80, *(long*)&ssl[3].packet_length + 0x80);
         if (( iVar4 != 0 ) && ( *(ulong*)&ssl[3].mac_flags < 0x21 )) {
            iVar4 = SSL_CTX_up_ref(ctx);
            if (iVar4 != 0) {
               pSVar1 = ssl->method;
               if (( pSVar1 != (SSL_METHOD*)0x0 ) && ( *(_func_3072**)&ssl[3].mac_flags == pSVar1[1].ssl_pending )) {
                  iVar4 = memcmp(&ssl[3].enc_read_ctx, &pSVar1[1].num_ciphers, (size_t)*(_func_3072**)&ssl[3].mac_flags);
                  if (iVar4 == 0) {
                     *(X509_VERIFY_PARAM**)&ssl[3].mac_flags = ctx->param;
                     pEVar2 = (EVP_MD_CTX*)ctx->client_cert_engine;
                     ssl[3].enc_read_ctx = *(EVP_CIPHER_CTX**)&ctx->quiet_shutdown;
                     ssl[3].read_hash = pEVar2;
                     pEVar3 = (EVP_CIPHER_CTX*)ctx->tlsext_servername_arg;
                     ssl[3].expand = (COMP_CTX*)ctx->tlsext_servername_callback;
                     ssl[3].enc_write_ctx = pEVar3;
                  }

               }

               ssl_cert_free(*(undefined8*)&ssl[3].packet_length);
               *(long*)&ssl[3].packet_length = lVar5;
               SSL_CTX_free((SSL_CTX*)ssl->method);
               ssl->method = (SSL_METHOD*)ctx;
               return ctx;
            }

         }

      }

      ssl_cert_free(lVar5);
   }

   return (SSL_CTX*)0x0;
}
undefined8 SSL_set0_tmp_dh_pkey(uint *param_1, undefined8 param_2) {
   undefined4 uVar1;
   int iVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) )) {
      uVar1 = EVP_PKEY_get_security_bits(param_2);
      iVar2 = ssl_security(param_1, 0x40007, uVar1, 0, param_2);
      if (iVar2 != 0) {
         EVP_PKEY_free(*(EVP_PKEY**)( *(long*)( param_1 + 0x220 ) + 8 ));
         *(undefined8*)( *(long*)( param_1 + 0x220 ) + 8 ) = param_2;
         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1d81, "SSL_set0_tmp_dh_pkey");
      ERR_set_error(0x14, 0x18a, 0);
   }

   return 0;
}
undefined8 SSL_CTX_set0_tmp_dh_pkey(long param_1, undefined8 param_2) {
   undefined4 uVar1;
   int iVar2;
   uVar1 = EVP_PKEY_get_security_bits(param_2);
   iVar2 = ssl_ctx_security(param_1, 0x40007, uVar1, 0, param_2);
   if (iVar2 != 0) {
      EVP_PKEY_free(*(EVP_PKEY**)( *(long*)( param_1 + 0x158 ) + 8 ));
      *(undefined8*)( *(long*)( param_1 + 0x158 ) + 8 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x1d8d, "SSL_CTX_set0_tmp_dh_pkey");
   ERR_set_error(0x14, 0x18a, 0);
   return 0;
}
ulong SSL_handle_events(SSL *param_1) {
   ulong uVar1;
   if (param_1 == (SSL*)0x0) {
      return 1;
   }

   if (( param_1->version & 0x80U ) == 0) {
      if (( param_1->version == 0 ) && ( ( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0 )) {
         uVar1 = SSL_ctrl(param_1, 0x4a, 0, (void*)0x0);
         return ~uVar1 >> 0x3f;
      }

      return 1;
   }

   uVar1 = ossl_quic_handle_events();
   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 SSL_get_event_timeout(SSL *param_1, undefined8 *param_2, undefined4 *param_3) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (SSL*)0x0) {
      if (( param_1->version & 0x80U ) != 0) {
         uVar2 = ossl_quic_get_event_timeout();
         return uVar2;
      }

      if (( ( param_1->version == 0 ) && ( ( *(byte*)( *(long*)&param_1->wbio[1].ex_data.dummy + 0x50 ) & 8 ) != 0 ) ) && ( lVar1 = lVar1 != 0 )) {
         *param_3 = 0;
         return 1;
      }

   }

   uVar2 = _UNK_001110e8;
   *param_2 = __LC27;
   param_2[1] = uVar2;
   *param_3 = 1;
   return 1;
}
undefined8 SSL_get_rpoll_descriptor(uint *param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (*(long*)( param_1 + 0x14 ) != 0) {
            uVar2 = BIO_get_rpoll_descriptor();
            return uVar2;
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( *param_1 & 0x80 ) != 0) {
            uVar2 = ossl_quic_get_rpoll_descriptor(param_1, param_2);
            return uVar2;
         }

         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x50 ) != 0 )) {
            uVar2 = BIO_get_rpoll_descriptor();
            return uVar2;
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_get_wpoll_descriptor(uint *param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (*(long*)( param_1 + 0x16 ) != 0) {
            uVar2 = BIO_get_wpoll_descriptor();
            return uVar2;
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( *param_1 & 0x80 ) != 0) {
            uVar2 = ossl_quic_get_wpoll_descriptor(param_1, param_2);
            return uVar2;
         }

         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x58 ) != 0 )) {
            uVar2 = BIO_get_wpoll_descriptor();
            return uVar2;
         }

         return 0;
      }

   }

   return 0;
}
ulong SSL_net_read_desired(SSL *param_1) {
   int iVar1;
   ulong uVar2;
   if (( param_1 != (SSL*)0x0 ) && ( ( param_1->version & 0x80 ) != 0 )) {
      uVar2 = ossl_quic_get_net_read_desired();
      return uVar2;
   }

   iVar1 = SSL_want(param_1);
   return ( ulong )(iVar1 == 3);
}
ulong SSL_net_write_desired(SSL *param_1) {
   int iVar1;
   ulong uVar2;
   if (( param_1 != (SSL*)0x0 ) && ( ( param_1->version & 0x80 ) != 0 )) {
      uVar2 = ossl_quic_get_net_write_desired();
      return uVar2;
   }

   iVar1 = SSL_want(param_1);
   return ( ulong )(iVar1 == 2);
}
undefined8 SSL_set_blocking_mode(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_conn_set_blocking_mode();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_get_blocking_mode(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_conn_get_blocking_mode();
      return uVar1;
   }

   return 0xffffffff;
}
undefined8 SSL_set1_initial_peer_addr(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_conn_set_initial_peer_addr();
      return uVar1;
   }

   return 0;
}
void SSL_shutdown_ex(SSL *param_1) {
   if (( param_1 != (SSL*)0x0 ) && ( ( param_1->version & 0x80 ) != 0 )) {
      ossl_quic_conn_shutdown();
      return;
   }

   SSL_shutdown(param_1);
   return;
}
undefined8 SSL_stream_conclude(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_conn_stream_conclude();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_new_stream(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_conn_stream_new();
      return uVar1;
   }

   return 0;
}
byte *SSL_get0_connection(byte *param_1) {
   byte *pbVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      pbVar1 = (byte*)ossl_quic_get0_connection();
      return pbVar1;
   }

   return param_1;
}
bool SSL_is_connection(long param_1) {
   long lVar1;
   lVar1 = SSL_get0_connection();
   return param_1 == lVar1;
}
undefined8 SSL_get0_listener(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get0_listener();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_get0_domain(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get0_domain();
      return uVar1;
   }

   return 0;
}
bool SSL_is_listener(long param_1) {
   long lVar1;
   lVar1 = SSL_get0_listener();
   return param_1 == lVar1;
}
bool SSL_is_domain(long param_1) {
   long lVar1;
   lVar1 = SSL_get0_domain();
   return param_1 == lVar1;
}
undefined8 SSL_get_stream_type(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_stream_type();
      return uVar1;
   }

   return 3;
}
undefined8 SSL_get_stream_id(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_stream_id();
      return uVar1;
   }

   return 0xffffffffffffffff;
}
undefined8 SSL_is_stream_local(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_is_stream_local();
      return uVar1;
   }

   return 0xffffffff;
}
undefined8 SSL_set_default_stream_mode(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_set_default_stream_mode();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_set_incoming_stream_policy(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_set_incoming_stream_policy();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_accept_stream(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_accept_stream();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_get_accept_stream_queue_len(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_accept_stream_queue_len();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_stream_reset(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_stream_reset();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_get_stream_read_state(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_stream_read_state();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_get_stream_write_state(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_stream_write_state();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_get_stream_read_error_code(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_stream_read_error_code();
      return uVar1;
   }

   return 0xffffffff;
}
undefined8 SSL_get_stream_write_error_code(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_stream_write_error_code();
      return uVar1;
   }

   return 0xffffffff;
}
undefined8 SSL_get_conn_close_info(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_conn_close_info();
      return uVar1;
   }

   return 0xffffffff;
}
undefined8 SSL_get_value_uint(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_value_uint();
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x1f1e, "SSL_get_value_uint");
   ERR_set_error(0x14, 0x102, 0);
   return 0;
}
undefined8 SSL_set_value_uint(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_set_value_uint();
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_lib.c", 0x1f2a, "SSL_set_value_uint");
   ERR_set_error(0x14, 0x102, 0);
   return 0;
}
undefined8 SSL_new_listener(long param_1, undefined8 param_2) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1 + 8 );
   lVar2 = OSSL_QUIC_client_method();
   if (lVar1 != lVar2) {
      lVar1 = *(long*)( param_1 + 8 );
      lVar2 = OSSL_QUIC_client_thread_method();
      if (lVar1 != lVar2) {
         lVar1 = *(long*)( param_1 + 8 );
         lVar2 = OSSL_QUIC_server_method();
         if (lVar1 != lVar2) {
            return 0;
         }

      }

   }

   uVar3 = ossl_quic_new_listener(param_1, param_2);
   return uVar3;
}
undefined8 SSL_new_listener_from(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_new_listener_from();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_new_from_listener(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_new_from_listener();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_accept_connection(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_accept_connection();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_get_accept_connection_queue_len(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_accept_connection_queue_len();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_listen(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_listen();
      return uVar1;
   }

   return 0;
}
undefined8 SSL_new_domain(long param_1, undefined8 param_2) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1 + 8 );
   lVar2 = OSSL_QUIC_client_method();
   if (lVar1 != lVar2) {
      lVar1 = *(long*)( param_1 + 8 );
      lVar2 = OSSL_QUIC_client_thread_method();
      if (lVar1 != lVar2) {
         lVar1 = *(long*)( param_1 + 8 );
         lVar2 = OSSL_QUIC_server_method();
         if (lVar1 != lVar2) {
            return 0;
         }

      }

   }

   uVar3 = ossl_quic_new_domain(param_1, param_2);
   return uVar3;
}
undefined8 ossl_adjust_domain_flags(ulong param_1, ulong *param_2) {
   undefined8 uVar1;
   if (( param_1 & 0xffffffe0 ) == 0) {
      if (( param_1 & 4 ) != 0) {
         param_1 = param_1 | 2;
      }

      if (( param_1 & 3 ) == 0) {
         param_1 = param_1 | 2;
      }
 else if (( (uint)param_1 & 3 ) == 3) {
         ERR_new();
         ERR_set_debug("ssl/ssl_lib.c", 0x1f93, "ossl_adjust_domain_flags");
         ERR_set_error(0x14, 0x80106, "mutually exclusive domain flags specified");
         return 0;
      }

      *param_2 = param_1;
      uVar1 = 1;
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1f85, "ossl_adjust_domain_flags");
      ERR_set_error(0x14, 0x8010c, "unsupported domain flag requested");
      uVar1 = 0;
   }

   return uVar1;
}
undefined8 SSL_CTX_set_domain_flags(long param_1, undefined8 param_2) {
   long lVar1;
   int iVar2;
   long lVar3;
   undefined8 local_20[2];
   lVar1 = *(long*)( param_1 + 8 );
   local_20[0] = param_2;
   lVar3 = OSSL_QUIC_client_method();
   if (( ( lVar1 != lVar3 ) && ( lVar1 = *(long*)( param_1 + 8 ) ),lVar3 = OSSL_QUIC_client_thread_method(),lVar1 != lVar3 )) {
      ERR_new();
      ERR_set_debug("ssl/ssl_lib.c", 0x1fb4, "SSL_CTX_set_domain_flags");
      ERR_set_error(0x14, 0x8010c, "domain flags unsupported on this kind of SSL_CTX");
      return 0;
   }

   iVar2 = ossl_adjust_domain_flags(local_20[0], local_20);
   if (iVar2 == 0) {
      return 0;
   }

   *(undefined8*)( param_1 + 0x6d0 ) = local_20[0];
   return 1;
}
undefined8 SSL_CTX_get_domain_flags(long param_1, undefined8 *param_2) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 8 );
   lVar2 = OSSL_QUIC_client_method();
   if (lVar1 != lVar2) {
      lVar1 = *(long*)( param_1 + 8 );
      lVar2 = OSSL_QUIC_client_thread_method();
      if (lVar1 != lVar2) {
         lVar1 = *(long*)( param_1 + 8 );
         lVar2 = OSSL_QUIC_server_method();
         if (lVar1 != lVar2) {
            ERR_new();
            ERR_set_debug("ssl/ssl_lib.c", 0x1fc4, "SSL_CTX_get_domain_flags");
            ERR_set_error(0x14, 0x8010c, "domain flags unsupported on this kind of SSL_CTX");
            return 0;
         }

      }

   }

   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x6d0 );
   }

   return 1;
}
undefined8 SSL_get_domain_flags(byte *param_1) {
   undefined8 uVar1;
   if (( param_1 != (byte*)0x0 ) && ( ( *param_1 & 0x80 ) != 0 )) {
      uVar1 = ossl_quic_get_domain_flags();
      return uVar1;
   }

   return 0;
}
bool SSL_add_expected_rpk(undefined8 param_1, EVP_PKEY *param_2) {
   int iVar1;
   long *plVar2;
   bool bVar3;
   long in_FS_OFFSET;
   uchar *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (uchar*)0x0;
   plVar2 = (long*)SSL_get0_dane();
   if (( plVar2 != (long*)0x0 ) && ( *plVar2 != 0 )) {
      iVar1 = i2d_PUBKEY(param_2, &local_28);
      if (0 < iVar1) {
         iVar1 = SSL_dane_tlsa_add(param_1, 3, 1, 0, local_28, (long)iVar1);
         bVar3 = 0 < iVar1;
         CRYPTO_free(local_28);
         goto LAB_0010fc32;
      }

   }

   bVar3 = false;
   LAB_0010fc32:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 SSL_get0_peer_rpk(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         if (*(long*)( param_1 + 0x240 ) != 0) {
            return *(undefined8*)( *(long*)( param_1 + 0x240 ) + 0x2b8 );
         }

      }
 else if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0x900 ) != 0 )) {
            return *(undefined8*)( *(long*)( lVar1 + 0x900 ) + 0x2b8 );
         }

         return 0;
      }

   }

   return 0;
}
undefined1 SSL_get_negotiated_client_cert_type(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return (char)param_1[0x2d4];
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined1*)( lVar1 + 0xb50 );
         }

         return 0;
      }

   }

   return 0;
}
undefined1 SSL_get_negotiated_server_cert_type(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined1*)( (long)param_1 + 0xb52 );
      }

      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined1*)( lVar1 + 0xb52 );
         }

         return 0;
      }

   }

   return 0;
}
undefined8 SSL_set1_client_cert_type(uint *param_1, long param_2, ulong param_3) {
   bool bVar1;
   bool bVar2;
   ulong uVar3;
   long lVar4;
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

   if (param_2 == 0 && param_3 == 0) {
      lVar4 = 0;
      LAB_0010fe2f:CRYPTO_free(*(void**)( param_1 + 0x566 ));
      *(long*)( param_1 + 0x566 ) = lVar4;
      *(ulong*)( param_1 + 0x568 ) = param_3;
      return 1;
   }

   if (( param_2 != 0 ) && ( param_3 != 0 )) {
      bVar2 = false;
      bVar1 = false;
      uVar3 = 0;
      do {
         if (*(char*)( param_2 + uVar3 ) == '\0') {
            if (bVar2) {
               return 0;
            }

            bVar2 = true;
         }
 else {
            if (*(char*)( param_2 + uVar3 ) != '\x02') {
               return 0;
            }

            if (bVar1) {
               return 0;
            }

            bVar1 = true;
         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < param_3 );
      lVar4 = CRYPTO_memdup(param_2, param_3, "ssl/ssl_lib.c", 0x202e);
      if (lVar4 != 0) goto LAB_0010fe2f;
   }

   return 0;
}
undefined8 SSL_set1_server_cert_type(uint *param_1, long param_2, ulong param_3) {
   bool bVar1;
   bool bVar2;
   ulong uVar3;
   long lVar4;
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

   if (param_2 == 0 && param_3 == 0) {
      lVar4 = 0;
      LAB_0010ff4f:CRYPTO_free(*(void**)( param_1 + 0x56a ));
      *(long*)( param_1 + 0x56a ) = lVar4;
      *(ulong*)( param_1 + 0x56c ) = param_3;
      return 1;
   }

   if (( param_2 != 0 ) && ( param_3 != 0 )) {
      bVar2 = false;
      bVar1 = false;
      uVar3 = 0;
      do {
         if (*(char*)( param_2 + uVar3 ) == '\0') {
            if (bVar2) {
               return 0;
            }

            bVar2 = true;
         }
 else {
            if (*(char*)( param_2 + uVar3 ) != '\x02') {
               return 0;
            }

            if (bVar1) {
               return 0;
            }

            bVar1 = true;
         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < param_3 );
      lVar4 = CRYPTO_memdup(param_2, param_3, "ssl/ssl_lib.c", 0x202e);
      if (lVar4 != 0) goto LAB_0010ff4f;
   }

   return 0;
}
undefined8 SSL_CTX_set1_client_cert_type(long param_1, long param_2, ulong param_3) {
   bool bVar1;
   bool bVar2;
   ulong uVar3;
   long lVar4;
   if (param_2 == 0 && param_3 == 0) {
      lVar4 = 0;
      LAB_00110039:CRYPTO_free(*(void**)( param_1 + 0x6b0 ));
      *(long*)( param_1 + 0x6b0 ) = lVar4;
      *(ulong*)( param_1 + 0x6b8 ) = param_3;
      return 1;
   }

   if (( param_2 != 0 ) && ( param_3 != 0 )) {
      bVar2 = false;
      bVar1 = false;
      uVar3 = 0;
      do {
         if (*(char*)( param_2 + uVar3 ) == '\0') {
            if (bVar2) {
               return 0;
            }

            bVar2 = true;
         }
 else {
            if (*(char*)( param_2 + uVar3 ) != '\x02') {
               return 0;
            }

            if (bVar1) {
               return 0;
            }

            bVar1 = true;
         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < param_3 );
      lVar4 = CRYPTO_memdup(param_2, param_3, "ssl/ssl_lib.c", 0x202e);
      if (lVar4 != 0) goto LAB_00110039;
   }

   return 0;
}
undefined8 SSL_CTX_set1_server_cert_type(long param_1, long param_2, ulong param_3) {
   bool bVar1;
   bool bVar2;
   ulong uVar3;
   long lVar4;
   if (param_2 == 0 && param_3 == 0) {
      lVar4 = 0;
      LAB_00110119:CRYPTO_free(*(void**)( param_1 + 0x6c0 ));
      *(long*)( param_1 + 0x6c0 ) = lVar4;
      *(ulong*)( param_1 + 0x6c8 ) = param_3;
      return 1;
   }

   if (( param_2 != 0 ) && ( param_3 != 0 )) {
      bVar2 = false;
      bVar1 = false;
      uVar3 = 0;
      do {
         if (*(char*)( param_2 + uVar3 ) == '\0') {
            if (bVar2) {
               return 0;
            }

            bVar2 = true;
         }
 else {
            if (*(char*)( param_2 + uVar3 ) != '\x02') {
               return 0;
            }

            if (bVar1) {
               return 0;
            }

            bVar1 = true;
         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < param_3 );
      lVar4 = CRYPTO_memdup(param_2, param_3, "ssl/ssl_lib.c", 0x202e);
      if (lVar4 != 0) goto LAB_00110119;
   }

   return 0;
}
undefined8 SSL_get0_client_cert_type(uint *param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 == 0) {
      if (( param_2 != (undefined8*)0x0 ) && ( param_3 != (undefined8*)0x0 )) {
         LAB_0011019d:*param_2 = *(undefined8*)( param_1 + 0x566 );
         *param_3 = *(undefined8*)( param_1 + 0x568 );
         return 1;
      }

   }
 else if (( ( ( *param_1 & 0x80 ) != 0 ) && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_2 != (undefined8*)0x0 && param_3 != (undefined8*)0x0 )) goto LAB_0011019d;
   return 0;
}
undefined8 SSL_get0_server_cert_type(uint *param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   if (*param_1 == 0) {
      if (( param_2 != (undefined8*)0x0 ) && ( param_3 != (undefined8*)0x0 )) {
         LAB_0011022d:*param_2 = *(undefined8*)( param_1 + 0x56a );
         *param_3 = *(undefined8*)( param_1 + 0x56c );
         return 1;
      }

   }
 else if (( ( ( *param_1 & 0x80 ) != 0 ) && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_2 != (undefined8*)0x0 && param_3 != (undefined8*)0x0 )) goto LAB_0011022d;
   return 0;
}
undefined8 SSL_CTX_get0_client_cert_type(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (( param_2 != (undefined8*)0x0 ) && ( param_3 != (undefined8*)0x0 )) {
      *param_2 = *(undefined8*)( param_1 + 0x6b0 );
      *param_3 = *(undefined8*)( param_1 + 0x6b8 );
      return 1;
   }

   return 0;
}
undefined8 SSL_CTX_get0_server_cert_type(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (( param_2 != (undefined8*)0x0 ) && ( param_3 != (undefined8*)0x0 )) {
      *param_2 = *(undefined8*)( param_1 + 0x6c0 );
      *param_3 = *(undefined8*)( param_1 + 0x6c8 );
      return 1;
   }

   return 0;
}
void SSL_has_pending_cold(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void SSL_do_handshake_cold(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void SSL_set_accept_state_cold(void) {
   code *pcVar1;
   _DAT_00000078 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void SSL_set_connect_state_cold(void) {
   code *pcVar1;
   _DAT_00000078 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}


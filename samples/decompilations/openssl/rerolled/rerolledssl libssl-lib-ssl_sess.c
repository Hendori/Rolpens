undefined8 def_generate_session_id(SSL *param_1, uchar *param_2, uint *param_3) {
   int iVar1;
   int iVar2;
   iVar2 = 0;
   while (true) {
      iVar1 = RAND_bytes_ex(*(undefined8*)param_1.method, param_2, *param_3, 0);
      if (iVar1 < 1) {
         return 0;
      }

      iVar1 = SSL_has_matching_session_id(param_1, param_2, *param_3);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      if (iVar2 == 10) {
         return 0;
      }

   }
;
   return 1;
}
void SSL_SESSION_free(SSL_SESSION *ses) {
   uchar *puVar1;
   int iVar2;
   if (ses == (SSL_SESSION*)0x0) {
      return;
   }

   LOCK();
   puVar1 = ses[1].krb5_client_princ + 0xb0;
   iVar2 = *(int*)puVar1;
   *(int*)puVar1 = *(int*)puVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }

   CRYPTO_free_ex_data(2, ses, (CRYPTO_EX_DATA*)( ses[1].krb5_client_princ + 0x28 ));
   OPENSSL_cleanse(ses.session_id + 8, 0x200);
   OPENSSL_cleanse(ses + 1, 0x20);
   X509_free(*(X509**)&ses[1].sid_ctx_length);
   EVP_PKEY_free(*(EVP_PKEY**)( ses[1].session_id + 0x18 ));
   OSSL_STACK_OF_X509_free(*(undefined8*)( ses[1].sid_ctx + 4 ));
   CRYPTO_free(*(void**)( ses[1].krb5_client_princ + 0x38 ));
   CRYPTO_free(*(void**)( ses[1].krb5_client_princ + 0x40 ));
   CRYPTO_free(*(void**)ses[1].session_id);
   CRYPTO_free(*(void**)( ses[1].session_id + 8 ));
   CRYPTO_free(*(void**)( ses[1].krb5_client_princ + 0x78 ));
   CRYPTO_free(*(void**)( ses[1].krb5_client_princ + 0x60 ));
   CRYPTO_free(*(void**)( ses[1].krb5_client_princ + 0x80 ));
   CRYPTO_clear_free(ses, 0x3a0, "ssl/ssl_sess.c", 0x36c);
   return;
}
SSL_SESSION *ssl_session_dup_intern(undefined8 *param_1, int param_2) {
   int iVar1;
   SSL_SESSION *ses;
   char *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   byte bVar8;
   bVar8 = 0;
   ses = (SSL_SESSION*)CRYPTO_malloc(0x3a0, "ssl/ssl_sess.c", 0x8c);
   if (ses == (SSL_SESSION*)0x0) {
      return (SSL_SESSION*)0x0;
   }

   uVar6 = *param_1;
   puVar7 = (undefined8*)( (ulong)ses.key_arg & 0xfffffffffffffff8 );
   ses.ssl_version = (int)uVar6;
   ses.key_arg_length = (int)( (ulong)uVar6 >> 0x20 );
   lVar3 = (long)ses - (long)puVar7;
   *(undefined8*)( ses[1].krb5_client_princ + 0x98 ) = param_1[0x70];
   puVar5 = (undefined8*)( (long)param_1 - lVar3 );
   for (uVar4 = ( ulong )((int)lVar3 + 0x388U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar8 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
   }

   for (int i = 0; i < 16; i++) {
      ses[1].session_id[i] = '\0';
   }

   for (int i = 0; i < 8; i++) {
      ses[1].krb5_client_princ[( i + 96 )] = '\0';
   }

   for (int i = 0; i < 8; i++) {
      ses[1].sid_ctx[( i + 4 )] = '\0';
   }

   ses[1].krb5_client_princ[0xa8] = '\0';
   ses[1].krb5_client_princ[0xa9] = '\0';
   ses[1].krb5_client_princ[0xaa] = '\0';
   ses[1].krb5_client_princ[0xab] = '\0';
   ses[1].krb5_client_princ[0xac] = '\0';
   ses[1].krb5_client_princ[0xad] = '\0';
   ses[1].krb5_client_princ[0xae] = '\0';
   ses[1].krb5_client_princ[0xaf] = '\0';
   ses[1].krb5_client_princ[0x38] = '\0';
   ses[1].krb5_client_princ[0x39] = '\0';
   ses[1].krb5_client_princ[0x3a] = '\0';
   ses[1].krb5_client_princ[0x3b] = '\0';
   ses[1].krb5_client_princ[0x3c] = '\0';
   ses[1].krb5_client_princ[0x3d] = '\0';
   ses[1].krb5_client_princ[0x3e] = '\0';
   ses[1].krb5_client_princ[0x3f] = '\0';
   ses[1].krb5_client_princ[0x40] = '\0';
   ses[1].krb5_client_princ[0x41] = '\0';
   ses[1].krb5_client_princ[0x42] = '\0';
   ses[1].krb5_client_princ[0x43] = '\0';
   ses[1].krb5_client_princ[0x44] = '\0';
   ses[1].krb5_client_princ[0x45] = '\0';
   ses[1].krb5_client_princ[0x46] = '\0';
   ses[1].krb5_client_princ[0x47] = '\0';
   *(undefined1(*) [16])( ses[1].session_id + 0x18 ) = (undefined1[16])0x0;
   ses[1].krb5_client_princ[0x78] = '\0';
   ses[1].krb5_client_princ[0x79] = '\0';
   ses[1].krb5_client_princ[0x7a] = '\0';
   ses[1].krb5_client_princ[0x7b] = '\0';
   ses[1].krb5_client_princ[0x7c] = '\0';
   ses[1].krb5_client_princ[0x7d] = '\0';
   ses[1].krb5_client_princ[0x7e] = '\0';
   ses[1].krb5_client_princ[0x7f] = '\0';
   ses[1].krb5_client_princ[0x80] = '\0';
   ses[1].krb5_client_princ[0x81] = '\0';
   ses[1].krb5_client_princ[0x82] = '\0';
   ses[1].krb5_client_princ[0x83] = '\0';
   ses[1].krb5_client_princ[0x84] = '\0';
   ses[1].krb5_client_princ[0x85] = '\0';
   ses[1].krb5_client_princ[0x86] = '\0';
   ses[1].krb5_client_princ[0x87] = '\0';
   ses[1].krb5_client_princ[0x28] = '\0';
   ses[1].krb5_client_princ[0x29] = '\0';
   ses[1].krb5_client_princ[0x2a] = '\0';
   ses[1].krb5_client_princ[0x2b] = '\0';
   ses[1].krb5_client_princ[0x2c] = '\0';
   ses[1].krb5_client_princ[0x2d] = '\0';
   ses[1].krb5_client_princ[0x2e] = '\0';
   ses[1].krb5_client_princ[0x2f] = '\0';
   ses[1].krb5_client_princ[0x30] = '\0';
   ses[1].krb5_client_princ[0x31] = '\0';
   ses[1].krb5_client_princ[0x32] = '\0';
   ses[1].krb5_client_princ[0x33] = '\0';
   ses[1].krb5_client_princ[0x34] = '\0';
   ses[1].krb5_client_princ[0x35] = '\0';
   ses[1].krb5_client_princ[0x36] = '\0';
   ses[1].krb5_client_princ[0x37] = '\0';
   ses[1].krb5_client_princ[0x98] = '\0';
   ses[1].krb5_client_princ[0x99] = '\0';
   ses[1].krb5_client_princ[0x9a] = '\0';
   ses[1].krb5_client_princ[0x9b] = '\0';
   ses[1].krb5_client_princ[0x9c] = '\0';
   ses[1].krb5_client_princ[0x9d] = '\0';
   ses[1].krb5_client_princ[0x9e] = '\0';
   ses[1].krb5_client_princ[0x9f] = '\0';
   ses[1].krb5_client_princ[0xa0] = '\0';
   ses[1].krb5_client_princ[0xa1] = '\0';
   ses[1].krb5_client_princ[0xa2] = '\0';
   ses[1].krb5_client_princ[0xa3] = '\0';
   ses[1].krb5_client_princ[0xa4] = '\0';
   ses[1].krb5_client_princ[0xa5] = '\0';
   ses[1].krb5_client_princ[0xa6] = '\0';
   ses[1].krb5_client_princ[0xa7] = '\0';
   LOCK();
   ses[1].krb5_client_princ[0xb0] = '\x01';
   for (int i = 0; i < 3; i++) {
      ses[1].krb5_client_princ[( i + 177 )] = '\0';
   }

   UNLOCK();
   iVar1 = CRYPTO_new_ex_data(2, ses, (CRYPTO_EX_DATA*)( ses[1].krb5_client_princ + 0x28 ));
   if (iVar1 == 0) {
      ERR_new();
      uVar6 = 0xb5;
      LAB_001004b1:ERR_set_debug("ssl/ssl_sess.c", uVar6, "ssl_session_dup_intern");
      ERR_set_error(0x14, 0x8000f, 0);
      SSL_SESSION_free(ses);
   }
 else {
      if (param_1[0x58] == 0) {
         LAB_001002cc:if (param_1[0x59] != 0) {
            lVar3 = X509_chain_up_ref();
            *(long*)( ses[1].sid_ctx + 4 ) = lVar3;
            if (lVar3 == 0) {
               ERR_new();
               uVar6 = 0xc4;
               goto LAB_00100509;
            }

         }

         if (param_1[0x57] != 0) {
            iVar1 = EVP_PKEY_up_ref();
            if (iVar1 == 0) goto LAB_00100488;
            *(undefined8*)( ses[1].session_id + 0x18 ) = param_1[0x57];
         }

         if ((char*)param_1[0x54] != (char*)0x0) {
            pcVar2 = CRYPTO_strdup((char*)param_1[0x54], "ssl/ssl_sess.c", 0xd1);
            *(char**)ses[1].session_id = pcVar2;
            if (pcVar2 == (char*)0x0) goto LAB_00100488;
         }

         if ((char*)param_1[0x55] != (char*)0x0) {
            pcVar2 = CRYPTO_strdup((char*)param_1[0x55], "ssl/ssl_sess.c", 0xd6);
            *(char**)( ses[1].session_id + 8 ) = pcVar2;
            if (pcVar2 == (char*)0x0) goto LAB_00100488;
         }

         iVar1 = CRYPTO_dup_ex_data(2, (CRYPTO_EX_DATA*)( ses[1].krb5_client_princ + 0x28 ), (CRYPTO_EX_DATA*)( param_1 + 0x62 ));
         if (iVar1 == 0) {
            ERR_new();
            uVar6 = 0xde;
            goto LAB_001004b1;
         }

         if ((char*)param_1[100] != (char*)0x0) {
            pcVar2 = CRYPTO_strdup((char*)param_1[100], "ssl/ssl_sess.c", 0xe3);
            *(char**)( ses[1].krb5_client_princ + 0x38 ) = pcVar2;
            if (pcVar2 == (char*)0x0) goto LAB_00100488;
         }

         if (( param_2 == 0 ) || ( param_1[0x65] == 0 )) {
            for (int i = 0; i < 16; i++) {
               ses[1].krb5_client_princ[( i + 72 )] = '\0';
            }

         }
 else {
            lVar3 = CRYPTO_memdup(param_1[0x65], param_1[0x66], "ssl/ssl_sess.c", 0xea);
            *(long*)( ses[1].krb5_client_princ + 0x40 ) = lVar3;
            if (lVar3 == 0) goto LAB_00100488;
         }

         if (param_1[0x69] != 0) {
            lVar3 = CRYPTO_memdup(param_1[0x69], param_1[0x6a], "ssl/ssl_sess.c", 0xf3);
            *(long*)( ses[1].krb5_client_princ + 0x60 ) = lVar3;
            if (lVar3 == 0) goto LAB_00100488;
         }

         if ((char*)param_1[0x6c] != (char*)0x0) {
            pcVar2 = CRYPTO_strdup((char*)param_1[0x6c], "ssl/ssl_sess.c", 0xfb);
            *(char**)( ses[1].krb5_client_princ + 0x78 ) = pcVar2;
            if (pcVar2 == (char*)0x0) goto LAB_00100488;
         }

         if (param_1[0x6d] == 0) {
            return ses;
         }

         lVar3 = CRYPTO_memdup(param_1[0x6d], param_1[0x6e], "ssl/ssl_sess.c", 0x103);
         *(long*)( ses[1].krb5_client_princ + 0x80 ) = lVar3;
         if (lVar3 != 0) {
            return ses;
         }

      }
 else {
         iVar1 = X509_up_ref();
         if (iVar1 != 0) {
            uVar6 = param_1[0x58];
            ses[1].sid_ctx_length = (int)uVar6;
            for (int i = 0; i < 4; i++) {
               ses[1].sid_ctx[i] = (char)( (ulong)uVar6 >> ( 8*i + 32 ) );
            }

            goto LAB_001002cc;
         }

         ERR_new();
         uVar6 = 0xbb;
         LAB_00100509:ERR_set_debug("ssl/ssl_sess.c", uVar6, "ssl_session_dup_intern");
         ERR_set_error(0x14, 0x8000b, 0);
      }

      LAB_00100488:SSL_SESSION_free(ses);
   }

   return (SSL_SESSION*)0x0;
}
void SSL_SESSION_list_add(long param_1, long param_2) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   lVar3 = *(long*)( param_2 + 0x390 );
   if (( lVar3 == 0 ) || ( lVar1 = lVar1 == 0 )) {
      lVar3 = *(long*)( param_1 + 0x40 );
   }
 else {
      if (lVar3 == param_1 + 0x48) {
         if (lVar1 == param_1 + 0x40) {
            *(undefined1(*) [16])( param_1 + 0x40 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( param_2 + 0x380 ) = (undefined1[16])0x0;
            goto LAB_001005bb;
         }

         *(long*)( param_1 + 0x48 ) = lVar1;
         *(long*)( lVar1 + 0x390 ) = lVar3;
         lVar3 = *(long*)( param_1 + 0x40 );
      }
 else {
         if (lVar1 == param_1 + 0x40) {
            *(long*)( param_1 + 0x40 ) = lVar3;
            *(long*)( lVar3 + 0x388 ) = lVar1;
            *(undefined8*)( param_2 + 0x390 ) = 0;
            *(undefined1(*) [16])( param_2 + 0x380 ) = (undefined1[16])0x0;
            goto LAB_001005e9;
         }

         *(long*)( lVar3 + 0x388 ) = lVar1;
         *(long*)( lVar1 + 0x390 ) = lVar3;
         lVar3 = *(long*)( param_1 + 0x40 );
      }

      *(undefined8*)( param_2 + 0x390 ) = 0;
      *(undefined1(*) [16])( param_2 + 0x380 ) = (undefined1[16])0x0;
   }

   if (lVar3 != 0) {
      LAB_001005e9:uVar2 = *(ulong*)( param_2 + 0x2e8 );
      if (uVar2 < *(ulong*)( lVar3 + 0x2e8 )) {
         lVar1 = *(long*)( param_1 + 0x48 );
         if (uVar2 < *(ulong*)( lVar1 + 0x2e8 )) {
            *(long*)( param_2 + 0x388 ) = lVar1;
            *(long*)( lVar1 + 0x390 ) = param_2;
            *(long*)( param_2 + 0x390 ) = param_1 + 0x48;
            *(long*)( param_1 + 0x48 ) = param_2;
         }
 else {
            for (lVar3 = *(long*)( lVar3 + 0x390 ); lVar3 != param_1 + 0x48; lVar3 = *(long*)( lVar3 + 0x390 )) {
               if (*(ulong*)( lVar3 + 0x2e8 ) <= uVar2) {
                  lVar1 = *(long*)( lVar3 + 0x388 );
                  *(long*)( param_2 + 0x388 ) = lVar1;
                  *(long*)( param_2 + 0x390 ) = lVar3;
                  *(long*)( lVar1 + 0x390 ) = param_2;
                  *(long*)( lVar3 + 0x388 ) = param_2;
                  *(long*)( param_2 + 0x380 ) = param_1;
                  return;
               }

            }

         }

      }
 else {
         *(long*)( param_2 + 0x390 ) = lVar3;
         *(long*)( lVar3 + 0x388 ) = param_2;
         *(long*)( param_2 + 0x388 ) = param_1 + 0x40;
         *(long*)( param_1 + 0x40 ) = param_2;
      }

      *(long*)( param_2 + 0x380 ) = param_1;
      return;
   }

   LAB_001005bb:*(long*)( param_1 + 0x40 ) = param_2;
   *(long*)( param_1 + 0x48 ) = param_2;
   *(long**)( param_2 + 0x388 ) = (long*)( param_1 + 0x40 );
   *(long*)( param_2 + 0x390 ) = param_1 + 0x48;
   *(long*)( param_2 + 0x380 ) = param_1;
   return;
}
void ssl_session_calculate_timeout(long param_1) {
   long lVar1;
   lVar1 = *(ulong*)( param_1 + 0x2e0 ) + *(ulong*)( param_1 + 0x2d8 );
   if (CARRY8(*(ulong*)( param_1 + 0x2e0 ), *(ulong*)( param_1 + 0x2d8 ))) {
      lVar1 = -1;
   }

   *(long*)( param_1 + 0x2e8 ) = lVar1;
   return;
}
SSL_SESSION *SSL_get_session(SSL *ssl) {
   long lVar1;
   if (ssl != (SSL*)0x0) {
      if (ssl.version == 0) {
         return (SSL_SESSION*)ssl[3].write_hash;
      }

      if (( ssl.version & 0x80U ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(SSL_SESSION**)( lVar1 + 0x900 );
         }

         return (SSL_SESSION*)0x0;
      }

   }

   return (SSL_SESSION*)0x0;
}
int SSL_SESSION_set_ex_data(SSL_SESSION *ss, int idx, void *data) {
   int iVar1;
   iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA*)( ss[1].krb5_client_princ + 0x28 ), idx, data);
   return iVar1;
}
void *SSL_SESSION_get_ex_data(SSL_SESSION *ss, int idx) {
   void *pvVar1;
   pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA*)( ss[1].krb5_client_princ + 0x28 ), idx);
   return pvVar1;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */SSL_SESSION *SSL_SESSION_new(void) {
   int iVar1;
   SSL_SESSION *obj;
   undefined8 uVar2;
   iVar1 = OPENSSL_init_ssl(0x200000, 0);
   if (( iVar1 != 0 ) && ( obj = (SSL_SESSION*)CRYPTO_zalloc(0x3a0, "ssl/ssl_sess.c", 0x6d) ),obj != (SSL_SESSION*)0x0) {
      obj[1].krb5_client_princ[0x70] = 0xff;
      obj[1].sid_ctx[0xc] = '\x01';
      for (int i = 0; i < 8; i++) {
         obj[1].sid_ctx[( i + 13 )] = '\0';
      }

      obj[1].sid_ctx[0x15] = 0xe0;
      obj[1].sid_ctx[0x16] = 0xcf;
      obj[1].sid_ctx[0x17] = 199;
      obj[1].sid_ctx[0x18] = 'F';
      for (int i = 0; i < 3; i++) {
         obj[1].sid_ctx[( i + 25 )] = '\0';
      }

      uVar2 = ossl_time_now();
      *(undefined8*)( obj[1].sid_ctx + 0x1c ) = uVar2;
      ssl_session_calculate_timeout(obj);
      LOCK();
      obj[1].krb5_client_princ[0xb0] = '\x01';
      for (int i = 0; i < 3; i++) {
         obj[1].krb5_client_princ[( i + 177 )] = '\0';
      }

      UNLOCK();
      iVar1 = CRYPTO_new_ex_data(2, obj, (CRYPTO_EX_DATA*)( obj[1].krb5_client_princ + 0x28 ));
      if (iVar1 != 0) {
         return obj;
      }

      CRYPTO_free(obj);
   }

   return (SSL_SESSION*)0x0;
}
void SSL_SESSION_dup(undefined8 param_1) {
   ssl_session_dup_intern(param_1, 1);
   return;
}
void ssl_session_dup(void) {
   long lVar1;
   lVar1 = ssl_session_dup_intern();
   if (lVar1 != 0) {
      *(undefined4*)( lVar1 + 0x2b0 ) = 0;
   }

   return;
}
uchar *SSL_SESSION_get_id(SSL_SESSION *s, uint *len) {
   if (len != (uint*)0x0) {
      *len = (uint)s.tlsext_tick_lifetime_hint;
   }

   return (uchar*)( s + 1 );
}
long SSL_SESSION_get0_id_context(long param_1, undefined4 *param_2) {
   if (param_2 != (undefined4*)0x0) {
      *param_2 = (int)*(undefined8*)( param_1 + 0x278 );
   }

   return param_1 + 0x280;
}
uint SSL_SESSION_get_compress_id(SSL_SESSION *s) {
   return *(uint*)( s[1].krb5_client_princ + 8 );
}
undefined8 ssl_generate_session_id(SSL *param_1, long param_2) {
   uchar *id;
   undefined8 uVar1;
   size_t __n;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   uint local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = param_1.state;
   if (iVar3 == 0xfefd) {
      LAB_00100981:iVar3 = *(int*)&param_1[3].tlsext_session_ticket;
      *(undefined8*)( param_2 + 0x250 ) = 0x20;
      if (iVar3 == 0) {
         uVar4._0_4_ = param_1.rwstate;
         uVar4._4_4_ = param_1.in_handshake;
         iVar3 = CRYPTO_THREAD_read_lock(uVar4);
         if (iVar3 == 0) goto LAB_00100a12;
         iVar3 = CRYPTO_THREAD_read_lock(*(undefined8*)( *(long*)&param_1[4].mac_flags + 0x3f0 ));
         if (iVar3 == 0) {
            uVar2._0_4_ = param_1.rwstate;
            uVar2._4_4_ = param_1.in_handshake;
            CRYPTO_THREAD_unlock(uVar2);
            ERR_new();
            ERR_set_debug("ssl/ssl_sess.c", 0x18e, "ssl_generate_session_id");
            ossl_statem_fatal(param_1, 0x50, 0x115, 0);
            uVar4 = 0;
            goto LAB_001009b0;
         }

         pcVar5 = *(code**)( param_1[3].sid_ctx + 4 );
         if (( pcVar5 == (code*)0x0 ) && ( pcVar5 = *(code**)( *(long*)&param_1[4].mac_flags + 0x1b8 ) ),pcVar5 == (code*)0x0) {
            pcVar5 = def_generate_session_id;
         }

         id = (uchar*)( param_2 + 600 );
         CRYPTO_THREAD_unlock(*(undefined8*)( *(long*)&param_1[4].mac_flags + 0x3f0 ));
         uVar1._0_4_ = param_1.rwstate;
         uVar1._4_4_ = param_1.in_handshake;
         CRYPTO_THREAD_unlock(uVar1);
         __n = *(size_t*)( param_2 + 0x250 );
         memset(id, 0, __n);
         local_34 = (uint)__n;
         iVar3 = ( *pcVar5 )(param_1, id, &local_34);
         if (iVar3 == 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_sess.c", 0x19d, "ssl_generate_session_id");
            ossl_statem_fatal(param_1, 0x50, 0x12d, 0);
            uVar4 = 0;
            goto LAB_001009b0;
         }

         if (( local_34 == 0 ) || ( *(ulong*)( param_2 + 0x250 ) < (ulong)local_34 )) {
            ERR_new();
            ERR_set_debug("ssl/ssl_sess.c", 0x1a7, "ssl_generate_session_id");
            ossl_statem_fatal(param_1, 0x50, 0x12f, 0);
            uVar4 = 0;
            goto LAB_001009b0;
         }

         *(ulong*)( param_2 + 0x250 ) = (ulong)local_34;
         iVar3 = SSL_has_matching_session_id(param_1, id, local_34);
         if (iVar3 != 0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_sess.c", 0x1af, "ssl_generate_session_id");
            ossl_statem_fatal(param_1, 0x50, 0x12e, 0);
            uVar4 = 0;
            goto LAB_001009b0;
         }

      }
 else {
         *(undefined8*)( param_2 + 0x250 ) = 0;
      }

      uVar4 = 1;
   }
 else {
      if (iVar3 < 0xfefe) {
         if (( iVar3 == 0x100 ) || ( iVar3 - 0x300U < 5 )) goto LAB_00100981;
      }
 else if (iVar3 == 0xfeff) goto LAB_00100981;
      ERR_new();
      ERR_set_debug("ssl/ssl_sess.c", 0x171, "ssl_generate_session_id");
      ossl_statem_fatal(param_1, 0x50, 0x103, 0);
      LAB_00100a12:uVar4 = 0;
   }

   LAB_001009b0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
undefined8 ssl_get_new_session(long param_1, int param_2) {
   int iVar1;
   SSL_SESSION *ses;
   undefined8 uVar2;
   ses = SSL_SESSION_new();
   if (ses == (SSL_SESSION*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_sess.c", 0x1bd, "ssl_get_new_session");
      ossl_statem_fatal(param_1, 0x50, 0x80014, 0);
      return 0;
   }

   if (*(long*)( *(long*)( param_1 + 0xb88 ) + 0x58 ) == 0) {
      uVar2 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0xd0 ) )();
      *(undefined8*)( ses[1].sid_ctx + 0x14 ) = uVar2;
   }
 else {
      *(undefined8*)( ses[1].sid_ctx + 0x14 ) = *(undefined8*)( *(long*)( param_1 + 0xb88 ) + 0x58 );
   }

   ssl_session_calculate_timeout(ses);
   SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
   *(undefined8*)( param_1 + 0x900 ) = 0;
   if (( param_2 == 0 ) || ( ( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 && ( iVar1 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar1 ) ) && ( iVar1 != 0x10000 ) )) {
      ses.tlsext_tick_lifetime_hint = 0;
   }
 else {
      iVar1 = ssl_generate_session_id(param_1, ses);
      if (iVar1 == 0) {
         SSL_SESSION_free(ses);
         return 0;
      }

   }

   if (*(ulong*)( param_1 + 0x8d8 ) < 0x21) {
      memcpy(ses[1].master_key + 0x14, (void*)( param_1 + 0x8e0 ), *(ulong*)( param_1 + 0x8d8 ));
      *(undefined8*)( ses[1].master_key + 0xc ) = *(undefined8*)( param_1 + 0x8d8 );
      *(SSL_SESSION**)( param_1 + 0x900 ) = ses;
      ses.ssl_version = *(int*)( param_1 + 0x48 );
      for (int i = 0; i < 8; i++) {
         ses[1].sid_ctx[( i + 12 )] = '\0';
      }

      if (( *(byte*)( param_1 + 0x161 ) & 2 ) != 0) {
         *(uint*)( ses[1].krb5_client_princ + 0x90 ) = *(uint*)( ses[1].krb5_client_princ + 0x90 ) | 1;
      }

      uVar2 = 1;
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/ssl_sess.c", 0x1dd, "ssl_get_new_session");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      SSL_SESSION_free(ses);
      uVar2 = 0;
   }

   return uVar2;
}
int SSL_CTX_remove_session(SSL_CTX *param_1, SSL_SESSION *c) {
   undefined8 uVar1;
   undefined1 *puVar2;
   undefined1 *puVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   SSL_SESSION *ses;
   if (c == (SSL_SESSION*)0x0) {
      return 0;
   }

   if (( c.tlsext_tick_lifetime_hint != 0 ) && ( uVar1._0_4_ = param_1[1].quiet_shutdown ),uVar1._4_4_ = param_1[1].max_send_fragment,iVar6 = CRYPTO_THREAD_write_lock(uVar1),iVar6 != 0) {
      lVar7 = OPENSSL_LH_retrieve(param_1.session_cache_head, c);
      if (lVar7 != 0) {
         ses = (SSL_SESSION*)OPENSSL_LH_delete(param_1.session_cache_head, lVar7);
         puVar2 = *(undefined1**)( ses[1].krb5_client_princ + 0xa8 );
         if (( puVar2 != (undefined1*)0x0 ) && ( puVar3 = *(undefined1**)( ses[1].krb5_client_princ + 0xa0 ) ),puVar3 != (undefined1*)0x0) {
            if ((long*)puVar2 == &param_1.session_timeout) {
               if ((int*)puVar3 == &param_1.session_cache_mode) {
                  param_1.session_cache_mode = 0;
                  *(undefined4*)&param_1.field_0x44 = 0;
                  param_1.session_timeout = 0;
               }
 else {
                  param_1.session_timeout = (long)puVar3;
                  *(undefined1**)( puVar3 + 0x390 ) = puVar2;
               }

            }
 else if ((int*)puVar3 == &param_1.session_cache_mode) {
               *(undefined1**)&param_1.session_cache_mode = puVar2;
               *(undefined1**)( puVar2 + 0x388 ) = puVar3;
            }
 else {
               *(undefined1**)( puVar2 + 0x388 ) = puVar3;
               *(undefined1**)( puVar3 + 0x390 ) = puVar2;
            }

            ses[1].krb5_client_princ[0xa8] = '\0';
            ses[1].krb5_client_princ[0xa9] = '\0';
            ses[1].krb5_client_princ[0xaa] = '\0';
            ses[1].krb5_client_princ[0xab] = '\0';
            ses[1].krb5_client_princ[0xac] = '\0';
            ses[1].krb5_client_princ[0xad] = '\0';
            ses[1].krb5_client_princ[0xae] = '\0';
            ses[1].krb5_client_princ[0xaf] = '\0';
            ses[1].krb5_client_princ[0x98] = '\0';
            ses[1].krb5_client_princ[0x99] = '\0';
            ses[1].krb5_client_princ[0x9a] = '\0';
            ses[1].krb5_client_princ[0x9b] = '\0';
            ses[1].krb5_client_princ[0x9c] = '\0';
            ses[1].krb5_client_princ[0x9d] = '\0';
            ses[1].krb5_client_princ[0x9e] = '\0';
            ses[1].krb5_client_princ[0x9f] = '\0';
            ses[1].krb5_client_princ[0xa0] = '\0';
            ses[1].krb5_client_princ[0xa1] = '\0';
            ses[1].krb5_client_princ[0xa2] = '\0';
            ses[1].krb5_client_princ[0xa3] = '\0';
            ses[1].krb5_client_princ[0xa4] = '\0';
            ses[1].krb5_client_princ[0xa5] = '\0';
            ses[1].krb5_client_princ[0xa6] = '\0';
            ses[1].krb5_client_princ[0xa7] = '\0';
         }

         c[1].session_id[0x10] = '\x01';
         for (int i = 0; i < 3; i++) {
            c[1].session_id[( i + 17 )] = '\0';
         }

         uVar4._0_4_ = param_1[1].quiet_shutdown;
         uVar4._4_4_ = param_1[1].max_send_fragment;
         CRYPTO_THREAD_unlock(uVar4);
         if (*(code**)&param_1.stats != (code*)0x0) {
            ( **(code**)&param_1.stats )(param_1, c);
         }

         SSL_SESSION_free(ses);
         return 1;
      }

      c[1].session_id[0x10] = '\x01';
      for (int i = 0; i < 3; i++) {
         c[1].session_id[( i + 17 )] = '\0';
      }

      uVar5._0_4_ = param_1[1].quiet_shutdown;
      uVar5._4_4_ = param_1[1].max_send_fragment;
      CRYPTO_THREAD_unlock(uVar5);
      if (*(code**)&param_1.stats != (code*)0x0) {
         ( **(code**)&param_1.stats )(param_1, c);
      }

   }

   return 0;
}
bool SSL_SESSION_up_ref(long param_1) {
   int *piVar1;
   int iVar2;
   LOCK();
   piVar1 = (int*)( param_1 + 0x398 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + 1;
   UNLOCK();
   return 1 < iVar2 + 1;
}
SSL_SESSION *SSL_get1_session(SSL *ssl) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   SSL_SESSION *pSVar4;
   uVar1._0_4_ = ssl.rwstate;
   uVar1._4_4_ = ssl.in_handshake;
   iVar3 = CRYPTO_THREAD_read_lock(uVar1);
   if (iVar3 != 0) {
      pSVar4 = SSL_get_session(ssl);
      if (( pSVar4 == (SSL_SESSION*)0x0 ) || ( iVar3 = iVar3 == 0 )) {
         pSVar4 = (SSL_SESSION*)0x0;
      }

      uVar2._0_4_ = ssl.rwstate;
      uVar2._4_4_ = ssl.in_handshake;
      CRYPTO_THREAD_unlock(uVar2);
      return pSVar4;
   }

   return (SSL_SESSION*)0x0;
}
int SSL_CTX_add_session(SSL_CTX *s, SSL_SESSION *c) {
   undefined8 uVar1;
   undefined1 *puVar2;
   undefined1 *puVar3;
   code *pcVar4;
   int iVar5;
   SSL_SESSION *pSVar6;
   long lVar7;
   undefined8 uVar8;
   long lVar9;
   iVar5 = SSL_SESSION_up_ref(c);
   if (iVar5 == 0) {
      return 0;
   }

   uVar8._0_4_ = s[1].quiet_shutdown;
   uVar8._4_4_ = s[1].max_send_fragment;
   iVar5 = CRYPTO_THREAD_write_lock(uVar8);
   if (iVar5 == 0) {
      SSL_SESSION_free(c);
      return 0;
   }

   pSVar6 = (SSL_SESSION*)OPENSSL_LH_insert(s.session_cache_head, c);
   if (pSVar6 == (SSL_SESSION*)0x0) {
      LAB_001012a0:lVar9 = OPENSSL_LH_retrieve(s.session_cache_head, c);
      if (lVar9 != 0) goto LAB_001010a2;
      if (( (ulong)s.new_session_cb & 0x400 ) != 0) {
         uVar8 = ossl_time_now();
         *(undefined8*)( c[1].sid_ctx + 0x1c ) = uVar8;
         ssl_session_calculate_timeout(c);
      }

      pSVar6 = c;
      if (c != (SSL_SESSION*)0x0) goto LAB_00101014;
   }
 else {
      if (c == pSVar6) {
         if (pSVar6 == (SSL_SESSION*)0x0) goto LAB_001012a0;
         if (( (ulong)s.new_session_cb & 0x400 ) != 0) {
            uVar8 = ossl_time_now();
            *(undefined8*)( c[1].sid_ctx + 0x1c ) = uVar8;
            ssl_session_calculate_timeout(c);
         }

         LAB_00101014:iVar5 = 0;
         SSL_SESSION_list_add(s, c);
         SSL_SESSION_free(pSVar6);
         goto LAB_00101029;
      }

      puVar2 = *(undefined1**)( pSVar6[1].krb5_client_princ + 0xa8 );
      if (( puVar2 != (undefined1*)0x0 ) && ( puVar3 = *(undefined1**)( pSVar6[1].krb5_client_princ + 0xa0 ) ),puVar3 != (undefined1*)0x0) {
         if ((long*)puVar2 == &s.session_timeout) {
            if ((int*)puVar3 == &s.session_cache_mode) {
               s.session_cache_mode = 0;
               *(undefined4*)&s.field_0x44 = 0;
               s.session_timeout = 0;
            }
 else {
               s.session_timeout = (long)puVar3;
               *(undefined1**)( puVar3 + 0x390 ) = puVar2;
            }

         }
 else if ((int*)puVar3 == &s.session_cache_mode) {
            *(undefined1**)&s.session_cache_mode = puVar2;
            *(undefined1**)( puVar2 + 0x388 ) = puVar3;
         }
 else {
            *(undefined1**)( puVar2 + 0x388 ) = puVar3;
            *(undefined1**)( puVar3 + 0x390 ) = puVar2;
         }

         pSVar6[1].krb5_client_princ[0xa8] = '\0';
         pSVar6[1].krb5_client_princ[0xa9] = '\0';
         pSVar6[1].krb5_client_princ[0xaa] = '\0';
         pSVar6[1].krb5_client_princ[0xab] = '\0';
         pSVar6[1].krb5_client_princ[0xac] = '\0';
         pSVar6[1].krb5_client_princ[0xad] = '\0';
         pSVar6[1].krb5_client_princ[0xae] = '\0';
         pSVar6[1].krb5_client_princ[0xaf] = '\0';
         pSVar6[1].krb5_client_princ[0x98] = '\0';
         pSVar6[1].krb5_client_princ[0x99] = '\0';
         pSVar6[1].krb5_client_princ[0x9a] = '\0';
         pSVar6[1].krb5_client_princ[0x9b] = '\0';
         pSVar6[1].krb5_client_princ[0x9c] = '\0';
         pSVar6[1].krb5_client_princ[0x9d] = '\0';
         pSVar6[1].krb5_client_princ[0x9e] = '\0';
         pSVar6[1].krb5_client_princ[0x9f] = '\0';
         pSVar6[1].krb5_client_princ[0xa0] = '\0';
         pSVar6[1].krb5_client_princ[0xa1] = '\0';
         pSVar6[1].krb5_client_princ[0xa2] = '\0';
         pSVar6[1].krb5_client_princ[0xa3] = '\0';
         pSVar6[1].krb5_client_princ[0xa4] = '\0';
         pSVar6[1].krb5_client_princ[0xa5] = '\0';
         pSVar6[1].krb5_client_princ[0xa6] = '\0';
         pSVar6[1].krb5_client_princ[0xa7] = '\0';
      }

      SSL_SESSION_free(pSVar6);
      LAB_001010a2:if (( (ulong)s.new_session_cb & 0x400 ) != 0) {
         uVar8 = ossl_time_now();
         *(undefined8*)( c[1].sid_ctx + 0x1c ) = uVar8;
         ssl_session_calculate_timeout(c);
      }

   }

   lVar9 = SSL_CTX_ctrl(s, 0x2b, 0, (void*)0x0);
   if (0 < lVar9) {
      while (true) {
         lVar9 = SSL_CTX_ctrl(s, 0x14, 0, (void*)0x0);
         lVar7 = SSL_CTX_ctrl(s, 0x2b, 0, (void*)0x0);
         if (( ( lVar9 < lVar7 ) || ( lVar9 = lVar9 == 0 ) ) || ( *(long*)( lVar9 + 0x250 ) == 0 )) goto LAB_0010110e;
         lVar7 = OPENSSL_LH_retrieve(s.session_cache_head, lVar9);
         if (lVar7 == 0) break;
         pSVar6 = (SSL_SESSION*)OPENSSL_LH_delete(s.session_cache_head, lVar7);
         puVar2 = *(undefined1**)( pSVar6[1].krb5_client_princ + 0xa8 );
         if (puVar2 == (undefined1*)0x0) {
            *(undefined4*)( lVar9 + 0x2b0 ) = 1;
            if (*(code**)&s.stats != (code*)0x0) {
               ( **(code**)&s.stats )(s, lVar9);
            }

         }
 else {
            puVar3 = *(undefined1**)( pSVar6[1].krb5_client_princ + 0xa0 );
            pcVar4 = *(code**)&s.stats;
            if (puVar3 == (undefined1*)0x0) {
               *(undefined4*)( lVar9 + 0x2b0 ) = 1;
            }
 else {
               if ((long*)puVar2 == &s.session_timeout) {
                  if ((int*)puVar3 == &s.session_cache_mode) {
                     s.session_cache_mode = 0;
                     *(undefined4*)&s.field_0x44 = 0;
                     s.session_timeout = 0;
                  }
 else {
                     s.session_timeout = (long)puVar3;
                     *(long**)( puVar3 + 0x390 ) = &s.session_timeout;
                  }

               }
 else if ((int*)puVar3 == &s.session_cache_mode) {
                  *(undefined1**)&s.session_cache_mode = puVar2;
                  *(undefined1**)( puVar2 + 0x388 ) = puVar3;
               }
 else {
                  *(undefined1**)( puVar2 + 0x388 ) = puVar3;
                  *(undefined1**)( puVar3 + 0x390 ) = puVar2;
               }

               pSVar6[1].krb5_client_princ[0xa8] = '\0';
               pSVar6[1].krb5_client_princ[0xa9] = '\0';
               pSVar6[1].krb5_client_princ[0xaa] = '\0';
               pSVar6[1].krb5_client_princ[0xab] = '\0';
               pSVar6[1].krb5_client_princ[0xac] = '\0';
               pSVar6[1].krb5_client_princ[0xad] = '\0';
               pSVar6[1].krb5_client_princ[0xae] = '\0';
               pSVar6[1].krb5_client_princ[0xaf] = '\0';
               pSVar6[1].krb5_client_princ[0x98] = '\0';
               pSVar6[1].krb5_client_princ[0x99] = '\0';
               pSVar6[1].krb5_client_princ[0x9a] = '\0';
               pSVar6[1].krb5_client_princ[0x9b] = '\0';
               pSVar6[1].krb5_client_princ[0x9c] = '\0';
               pSVar6[1].krb5_client_princ[0x9d] = '\0';
               pSVar6[1].krb5_client_princ[0x9e] = '\0';
               pSVar6[1].krb5_client_princ[0x9f] = '\0';
               pSVar6[1].krb5_client_princ[0xa0] = '\0';
               pSVar6[1].krb5_client_princ[0xa1] = '\0';
               pSVar6[1].krb5_client_princ[0xa2] = '\0';
               pSVar6[1].krb5_client_princ[0xa3] = '\0';
               pSVar6[1].krb5_client_princ[0xa4] = '\0';
               pSVar6[1].krb5_client_princ[0xa5] = '\0';
               pSVar6[1].krb5_client_princ[0xa6] = '\0';
               pSVar6[1].krb5_client_princ[0xa7] = '\0';
               *(undefined4*)( lVar9 + 0x2b0 ) = 1;
            }

            if (pcVar4 != (code*)0x0) {
               ( *pcVar4 )(s, lVar9);
            }

         }

         SSL_SESSION_free(pSVar6);
         LOCK();
         *(int*)&s.app_verify_callback = *(int*)&s.app_verify_callback + 1;
         UNLOCK();
      }
;
      *(undefined4*)( lVar9 + 0x2b0 ) = 1;
      if (*(code**)&s.stats != (code*)0x0) {
         ( **(code**)&s.stats )(s, lVar9);
      }

   }

   LAB_0010110e:iVar5 = 1;
   SSL_SESSION_list_add(s, c);
   LAB_00101029:uVar1._0_4_ = s[1].quiet_shutdown;
   uVar1._4_4_ = s[1].max_send_fragment;
   CRYPTO_THREAD_unlock(uVar1);
   return iVar5;
}
SSL_SESSION *lookup_sess_in_cache(long param_1, void *param_2, size_t param_3) {
   int *piVar1;
   undefined8 uVar2;
   int iVar3;
   SSL_SESSION *pSVar4;
   SSL_SESSION *ses;
   long lVar5;
   long in_FS_OFFSET;
   int local_3dc;
   undefined4 local_3d8[148];
   size_t local_188;
   undefined1 local_180[336];
   long local_30;
   lVar5 = *(long*)( param_1 + 0xb88 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( lVar5 + 0x51 ) & 1 ) == 0) {
      local_3d8[0] = *(undefined4*)( param_1 + 0x48 );
      if (param_3 < 0x21) {
         memcpy(local_180, param_2, param_3);
         local_188 = param_3;
         iVar3 = CRYPTO_THREAD_read_lock(*(undefined8*)( lVar5 + 0x3f0 ));
         if (iVar3 != 0) {
            pSVar4 = (SSL_SESSION*)OPENSSL_LH_retrieve(*(undefined8*)( *(long*)( param_1 + 0xb88 ) + 0x30 ), local_3d8);
            if (pSVar4 != (SSL_SESSION*)0x0) {
               iVar3 = SSL_SESSION_up_ref(pSVar4);
               uVar2 = *(undefined8*)( *(long*)( param_1 + 0xb88 ) + 0x3f0 );
               if (iVar3 == 0) {
                  CRYPTO_THREAD_unlock(uVar2);
                  pSVar4 = (SSL_SESSION*)0x0;
               }
 else {
                  CRYPTO_THREAD_unlock(uVar2);
               }

               goto LAB_0010141d;
            }

            CRYPTO_THREAD_unlock(*(undefined8*)( *(long*)( param_1 + 0xb88 ) + 0x3f0 ));
            LOCK();
            piVar1 = (int*)( *(long*)( param_1 + 0xb88 ) + 0x90 );
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar5 = *(long*)( param_1 + 0xb88 );
            goto LAB_00101480;
         }

      }

   }
 else {
      LAB_00101480:if (*(code**)( lVar5 + 0x70 ) != (code*)0x0) {
         local_3dc = 1;
         ses = (SSL_SESSION*)( **(code**)( lVar5 + 0x70 ) )(*(undefined8*)( param_1 + 0x40 ), param_2, param_3 & 0xffffffff, &local_3dc);
         pSVar4 = ses;
         if (ses == (SSL_SESSION*)0x0) goto LAB_0010141d;
         if (*(int*)( ses[1].session_id + 0x10 ) == 0) {
            LOCK();
            piVar1 = (int*)( *(long*)( param_1 + 0xb88 ) + 0xa0 );
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            if (( local_3dc == 0 ) || ( iVar3 = iVar3 != 0 )) {
               if (( ( ulong )(*(SSL_CTX**)( param_1 + 0xb88 )).new_session_cb & 0x200 ) == 0) {
                  SSL_CTX_add_session(*(SSL_CTX**)( param_1 + 0xb88 ), ses);
               }

               goto LAB_0010141d;
            }

         }
 else if (local_3dc == 0) {
            pSVar4 = (SSL_SESSION*)0x0;
            SSL_SESSION_free(ses);
            goto LAB_0010141d;
         }

      }

   }

   pSVar4 = (SSL_SESSION*)0x0;
   LAB_0010141d:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pSVar4;
}
undefined4 ssl_get_prev_session(long param_1, long param_2) {
   int *piVar1;
   size_t __n;
   bool bVar2;
   int iVar3;
   ulong uVar4;
   undefined8 uVar5;
   SSL_SESSION *ses;
   undefined8 uVar6;
   undefined4 uVar7;
   long in_FS_OFFSET;
   SSL_SESSION *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (SSL_SESSION*)0x0;
   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar3 )) &&( iVar3 != 0x10000 ) * (undefined4*)( param_1 + 0xa60 ) = 1;
   iVar3 = tls_parse_extension(param_1, 0x14, 0x80, *(undefined8*)( param_2 + 0x288 ), 0, 0);
   if (( iVar3 != 0 ) && ( iVar3 = tls_parse_extension(param_1, 0x1c, 0x80, *(undefined8*)( param_2 + 0x288 ), 0, 0) ),iVar3 != 0) {
      local_38 = *(SSL_SESSION**)( param_1 + 0x900 );
      bVar2 = false;
      goto LAB_001015d6;
   }

   LAB_00101760:uVar7 = 0xffffffff;
   goto LAB_00101766;
}
iVar3 = tls_get_ticket_from_client(param_1, param_2, &local_38);if (iVar3 < 2) {
   if (iVar3 < 0) goto LAB_001015cf;
   ERR_new();
   ERR_set_debug("ssl/ssl_sess.c", 0x26a, "ssl_get_prev_session");
   uVar7 = 0xffffffff;
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   if (local_38 == (SSL_SESSION*)0x0) goto LAB_00101760;
   LAB_0010169e:SSL_SESSION_free(local_38);
   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar3 )) {
      *(undefined8*)( param_1 + 0x900 ) = 0;
   }

}
 else {
   if (( iVar3 - 2U < 2 ) && ( *(long*)( param_2 + 0x28 ) != 0 )) {
      bVar2 = true;
      local_38 = (SSL_SESSION*)lookup_sess_in_cache(param_1, param_2 + 0x30);
      goto LAB_001015d6;
   }

   LAB_001015cf:bVar2 = false;
   LAB_001015d6:ses = local_38;
   if (local_38 == (SSL_SESSION*)0x0) {
      LAB_001018d8:uVar7 = 0;
      goto LAB_00101766;
   }

   if (( ( local_38.ssl_version == *(int*)( param_1 + 0x48 ) ) && ( __n = *(size_t*)( local_38[1].master_key + 0xc ) ),__n == *(size_t*)( param_1 + 0x8d8 ) )) {
      if (( ( *(byte*)( param_1 + 0x950 ) & 1 ) == 0 ) || ( __n != 0 )) {
         uVar4 = ossl_time_now();
         uVar7 = 0;
         if (uVar4 <= *(ulong*)ses[1].krb5_client_princ) {
            if (( local_38[1].krb5_client_princ[0x90] & 1 ) == 0) {
               ses = local_38;
               if (( *(ulong*)( param_1 + 0x160 ) & 0x200 ) != 0) goto LAB_001015fe;
            }
 else if (( *(ulong*)( param_1 + 0x160 ) & 0x200 ) == 0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_sess.c", 0x2ab, "ssl_get_prev_session");
               uVar5 = 0x68;
               uVar6 = 0x2f;
               goto LAB_00101740;
            }

            if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0 ) || ( iVar3 = iVar3 == 0x10000 ) ) || ( iVar3 < 0x304 )) {
               SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
               *(SSL_SESSION**)( param_1 + 0x900 ) = local_38;
            }

            LOCK();
            piVar1 = (int*)( *(long*)( param_1 + 0xb88 ) + 0x9c );
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            uVar7 = 1;
            *(undefined8*)( param_1 + 0x998 ) = *(undefined8*)( *(long*)( param_1 + 0x900 ) + 0x2d0 );
            goto LAB_00101766;
         }

         LOCK();
         piVar1 = (int*)( *(long*)( param_1 + 0xb88 ) + 0x94 );
         *piVar1 = *piVar1 + 1;
         UNLOCK();
         if (bVar2) {
            SSL_CTX_remove_session(*(SSL_CTX**)( param_1 + 0xb88 ), local_38);
            if (local_38 != (SSL_SESSION*)0x0) {
               SSL_SESSION_free(local_38);
               if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar3 )) &&( iVar3 != 0x10000 ) * (undefined8*)( param_1 + 0x900 ) = 0;
            }

            goto LAB_00101766;
         }

      }
 else {
         uVar7 = 0;
         if (local_38 != (SSL_SESSION*)0x0) goto LAB_0010169e;
      }

      goto LAB_001018d8;
   }

   ERR_new();
   ERR_set_debug("ssl/ssl_sess.c", 0x298, "ssl_get_prev_session");
   uVar5 = 0x115;
   uVar6 = 0x50;
   LAB_00101740:uVar7 = 0xffffffff;
   ossl_statem_fatal(param_1, uVar6, uVar5, 0);
   ses = local_38;
   if (local_38 == (SSL_SESSION*)0x0) goto LAB_00101760;
}
else{uVar7 = 0;};LAB_001015fe:SSL_SESSION_free(ses);if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar3 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar3 )) {
   *(undefined8*)( param_1 + 0x900 ) = 0;
}
if (bVar2) goto LAB_00101766;}*(undefined4*)( param_1 + 0xa60 ) = 1;LAB_00101766:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar7;}undefined8 SSL_SESSION_set1_id(long param_1, undefined8 *param_2, uint param_3) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   ulong uVar5;
   if (0x20 < param_3) {
      ERR_new();
      ERR_set_debug("ssl/ssl_sess.c", 0x39a, "SSL_SESSION_set1_id");
      ERR_set_error(0x14, 0x198, 0);
      return 0;
   }

   uVar3 = (ulong)param_3;
   *(ulong*)( param_1 + 0x250 ) = uVar3;
   if (( (undefined8*)( param_1 + 600 ) != param_2 ) && ( param_3 != 0 )) {
      if (param_3 < 8) {
         if (( param_3 & 4 ) == 0) {
            if (( param_3 != 0 ) && ( *(undefined1*)( param_1 + 600 ) = *(undefined1*)param_2(param_3 & 2) != 0 )) {
               *(undefined2*)( param_1 + 0x256 + uVar3 ) = *(undefined2*)( (long)param_2 + ( uVar3 - 2 ) );
            }

         }
 else {
            *(undefined4*)( param_1 + 600 ) = *(undefined4*)param_2;
            *(undefined4*)( param_1 + 0x254 + uVar3 ) = *(undefined4*)( (long)param_2 + ( uVar3 - 4 ) );
         }

      }
 else {
         *(undefined8*)( param_1 + 600 ) = *param_2;
         uVar5 = param_1 + 0x260U & 0xfffffffffffffff8;
         *(undefined8*)( param_1 + 0x250 + uVar3 ) = *(undefined8*)( (long)param_2 + ( uVar3 - 8 ) );
         lVar2 = ( param_1 + 600 ) - uVar5;
         uVar4 = param_3 + (int)lVar2 & 0xfffffff8;
         if (7 < uVar4) {
            uVar1 = 0;
            do {
               uVar3 = (ulong)uVar1;
               uVar1 = uVar1 + 8;
               *(undefined8*)( uVar5 + uVar3 ) = *(undefined8*)( (long)param_2 + ( uVar3 - lVar2 ) );
            }
 while ( uVar1 < uVar4 );
         }

      }

   }

   return 1;
}
long SSL_SESSION_set_timeout(SSL_SESSION *s, long t) {
   int iVar1;
   if (( s != (SSL_SESSION*)0x0 ) && ( -1 < t )) {
      if (*(long*)( s[1].krb5_client_princ + 0x98 ) == 0) {
         *(long*)( s[1].sid_ctx + 0x14 ) = t * 1000000000;
         ssl_session_calculate_timeout();
      }
 else {
         iVar1 = CRYPTO_THREAD_write_lock(*(undefined8*)( *(long*)( s[1].krb5_client_princ + 0x98 ) + 0x3f0 ));
         if (iVar1 == 0) {
            return 0;
         }

         *(long*)( s[1].sid_ctx + 0x14 ) = t * 1000000000;
         ssl_session_calculate_timeout(s);
         SSL_SESSION_list_add(*(undefined8*)( s[1].krb5_client_princ + 0x98 ), s);
         CRYPTO_THREAD_unlock(*(undefined8*)( *(long*)( s[1].krb5_client_princ + 0x98 ) + 0x3f0 ));
      }

      return 1;
   }

   return 0;
}
long SSL_SESSION_get_timeout(SSL_SESSION *s) {
   if (s != (SSL_SESSION*)0x0) {
      return *(ulong*)( s[1].sid_ctx + 0x14 ) / 1000000000;
   }

   return 0;
}
ulong SSL_SESSION_get_time_ex(long param_1) {
   if (param_1 != 0) {
      return *(ulong*)( param_1 + 0x2e0 ) / 1000000000;
   }

   return 0;
}
void SSL_SESSION_get_time(void) {
   SSL_SESSION_get_time_ex();
   return;
}
long SSL_SESSION_set_time_ex(long param_1, long param_2) {
   int iVar1;
   if (param_1 == 0) {
      return 0;
   }

   if (*(long*)( param_1 + 0x380 ) == 0) {
      *(long*)( param_1 + 0x2e0 ) = param_2 * 1000000000;
      ssl_session_calculate_timeout();
   }
 else {
      iVar1 = CRYPTO_THREAD_write_lock(*(undefined8*)( *(long*)( param_1 + 0x380 ) + 0x3f0 ));
      if (iVar1 == 0) {
         return 0;
      }

      *(long*)( param_1 + 0x2e0 ) = param_2 * 1000000000;
      ssl_session_calculate_timeout(param_1);
      SSL_SESSION_list_add(*(undefined8*)( param_1 + 0x380 ), param_1);
      CRYPTO_THREAD_unlock(*(undefined8*)( *(long*)( param_1 + 0x380 ) + 0x3f0 ));
   }

   return param_2;
}
void SSL_SESSION_set_time(void) {
   SSL_SESSION_set_time_ex();
   return;
}
undefined4 SSL_SESSION_get_protocol_version(undefined4 *param_1) {
   return *param_1;
}
undefined8 SSL_SESSION_set_protocol_version(undefined4 *param_1, undefined4 param_2) {
   *param_1 = param_2;
   return 1;
}
undefined8 SSL_SESSION_get0_cipher(long param_1) {
   return *(undefined8*)( param_1 + 0x2f8 );
}
undefined8 SSL_SESSION_set_cipher(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x2f8 ) = param_2;
   return 1;
}
undefined8 SSL_SESSION_get0_hostname(long param_1) {
   return *(undefined8*)( param_1 + 800 );
}
bool SSL_SESSION_set1_hostname(long param_1, char *param_2) {
   bool bVar1;
   CRYPTO_free(*(void**)( param_1 + 800 ));
   bVar1 = true;
   if (param_2 != (char*)0x0) {
      param_2 = CRYPTO_strdup(param_2, "ssl/ssl_sess.c", 0x40a);
      bVar1 = param_2 != (char*)0x0;
   }

   *(char**)( param_1 + 800 ) = param_2;
   return bVar1;
}
bool SSL_SESSION_has_ticket(long param_1) {
   return *(long*)( param_1 + 0x330 ) != 0;
}
undefined8 SSL_SESSION_get_ticket_lifetime_hint(long param_1) {
   return *(undefined8*)( param_1 + 0x338 );
}
void SSL_SESSION_get0_ticket(long param_1, undefined8 *param_2, undefined8 *param_3) {
   *param_3 = *(undefined8*)( param_1 + 0x330 );
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x328 );
   }

   return;
}
undefined4 SSL_SESSION_get_max_early_data(long param_1) {
   return *(undefined4*)( param_1 + 0x344 );
}
undefined8 SSL_SESSION_set_max_early_data(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x344 ) = param_2;
   return 1;
}
void SSL_SESSION_get0_alpn_selected(long param_1, undefined8 *param_2, undefined8 *param_3) {
   *param_2 = *(undefined8*)( param_1 + 0x348 );
   *param_3 = *(undefined8*)( param_1 + 0x350 );
   return;
}
bool SSL_SESSION_set1_alpn_selected(long param_1, long param_2, long param_3) {
   long lVar1;
   bool bVar2;
   CRYPTO_free(*(void**)( param_1 + 0x348 ));
   if (( param_2 == 0 ) || ( param_3 == 0 )) {
      lVar1 = 0;
      bVar2 = true;
      param_3 = 0;
   }
 else {
      lVar1 = CRYPTO_memdup(param_2, param_3, "ssl/ssl_sess.c");
      bVar2 = lVar1 != 0;
      if (lVar1 == 0) {
         param_3 = 0;
      }

   }

   *(long*)( param_1 + 0x348 ) = lVar1;
   *(long*)( param_1 + 0x350 ) = param_3;
   return bVar2;
}
X509 *SSL_SESSION_get0_peer(SSL_SESSION *s) {
   return *(X509**)&s[1].sid_ctx_length;
}
undefined8 SSL_SESSION_get0_peer_rpk(long param_1) {
   return *(undefined8*)( param_1 + 0x2b8 );
}
int SSL_SESSION_set1_id_context(SSL_SESSION *s, uchar *sid_ctx, uint sid_ctx_len) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   ulong uVar5;
   if (0x20 < sid_ctx_len) {
      ERR_new();
      ERR_set_debug("ssl/ssl_sess.c", 0x456, "SSL_SESSION_set1_id_context");
      ERR_set_error(0x14, 0x111, 0);
      return 0;
   }

   uVar3 = (ulong)sid_ctx_len;
   *(ulong*)( s[1].master_key + 0xc ) = uVar3;
   if (s[1].master_key + 0x14 != sid_ctx) {
      if (sid_ctx_len < 8) {
         if (( sid_ctx_len & 4 ) == 0) {
            if (( sid_ctx_len != 0 ) && ( s[1].master_key[0x14] = *sid_ctx(sid_ctx_len & 2) != 0 )) {
               *(undefined2*)( s[1].master_key + uVar3 + 0x12 ) = *(undefined2*)( sid_ctx + ( uVar3 - 2 ) );
            }

         }
 else {
            *(undefined4*)( s[1].master_key + 0x14 ) = *(undefined4*)sid_ctx;
            *(undefined4*)( s[1].master_key + uVar3 + 0x10 ) = *(undefined4*)( sid_ctx + ( uVar3 - 4 ) );
         }

      }
 else {
         *(undefined8*)( s[1].master_key + 0x14 ) = *(undefined8*)sid_ctx;
         uVar5 = ( ulong )(s[1].master_key + 0x1c) & 0xfffffffffffffff8;
         *(undefined8*)( s[1].master_key + uVar3 + 0xc ) = *(undefined8*)( sid_ctx + ( uVar3 - 8 ) );
         lVar2 = (long)( s[1].master_key + 0x14 ) - uVar5;
         uVar4 = sid_ctx_len + (int)lVar2 & 0xfffffff8;
         if (7 < uVar4) {
            uVar1 = 0;
            do {
               uVar3 = (ulong)uVar1;
               uVar1 = uVar1 + 8;
               *(undefined8*)( uVar5 + uVar3 ) = *(undefined8*)( sid_ctx + ( uVar3 - lVar2 ) );
            }
 while ( uVar1 < uVar4 );
            return 1;
         }

      }

   }

   return 1;
}
bool SSL_SESSION_is_resumable(long param_1) {
   bool bVar1;
   bVar1 = false;
   if (( *(int*)( param_1 + 0x2b0 ) == 0 ) && ( bVar1 = true * (long*)( param_1 + 0x250 ) == 0 )) {
      return *(long*)( param_1 + 0x330 ) != 0;
   }

   return bVar1;
}
long SSL_CTX_set_timeout(SSL_CTX *ctx, long t) {
   _func_3088 *p_Var1;
   if (ctx != (SSL_CTX*)0x0) {
      p_Var1 = ctx.remove_session_cb;
      ctx.remove_session_cb = (_func_3088*)( t * 1000000000 );
      return (ulong)p_Var1 / 1000000000;
   }

   return 0;
}
long SSL_CTX_get_timeout(SSL_CTX *ctx) {
   if (ctx != (SSL_CTX*)0x0) {
      return (ulong)ctx.remove_session_cb / 1000000000;
   }

   return 0;
}
int SSL_set_session_secret_cb(SSL *s, tls_session_secret_cb_fn tls_session_secret_cb, void *arg) {
   if (s == (SSL*)0x0) {
      return 0;
   }

   if (s.version != 0) {
      if (( s.version & 0x80U ) != 0) {
         s = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (s != (SSL*)0x0) goto LAB_0010205c;
      }

      return 0;
   }

   LAB_0010205c:s[4].bbio = (BIO*)tls_session_secret_cb;
   *(void**)&s[4].rwstate = arg;
   return 1;
}
int SSL_set_session_ticket_ext_cb(SSL *s, tls_session_ticket_ext_cb_fn cb, void *arg) {
   if (s == (SSL*)0x0) {
      return 0;
   }

   if (s.version != 0) {
      if (( s.version & 0x80U ) != 0) {
         s = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (s != (SSL*)0x0) goto LAB_001020cc;
      }

      return 0;
   }

   LAB_001020cc:s[4].rbio = (BIO*)cb;
   s[4].wbio = (BIO*)arg;
   return 1;
}
int SSL_set_session_ticket_ext(SSL *s, void *ext_data, int ext_len) {
   SSL_METHOD *pSVar1;
   if (s == (SSL*)0x0) {
      return 0;
   }

   if (( ( s.version == 0 ) || ( ( ( s.version & 0x80U ) != 0 && ( s = (SSL*)ossl_quic_obj_get0_handshake_layer() ),s != (SSL*)0x0 ) ) )) {
      CRYPTO_free(s[4].method);
      s[4].method = (SSL_METHOD*)0x0;
      pSVar1 = (SSL_METHOD*)CRYPTO_malloc(ext_len + 0x10, "ssl/ssl_sess.c", 0x4a2);
      s[4].method = pSVar1;
      if (pSVar1 != (SSL_METHOD*)0x0) {
         if (ext_data == (void*)0x0) {
            pSVar1.ssl_new = (_func_3053*)0x0;
            *(undefined2*)&pSVar1.version = 0;
         }
 else {
            *(short*)&pSVar1.version = (short)ext_len;
            pSVar1.ssl_new = (_func_3053*)&pSVar1.ssl_clear;
            memcpy(&pSVar1.ssl_clear, ext_data, (long)ext_len);
         }

         return 1;
      }

   }

   return 0;
}
void SSL_CTX_flush_sessions_ex(long param_1, long param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   undefined8 uVar5;
   SSL_SESSION *ses;
   iVar3 = CRYPTO_THREAD_write_lock(*(undefined8*)( param_1 + 0x3f0 ));
   if (iVar3 == 0) {
      return;
   }

   lVar4 = OPENSSL_sk_new_null();
   uVar5 = OPENSSL_LH_get_down_load(*(undefined8*)( param_1 + 0x30 ));
   OPENSSL_LH_set_down_load(*(undefined8*)( param_1 + 0x30 ), 0);
   ses = *(SSL_SESSION**)( param_1 + 0x48 );
   if (ses != (SSL_SESSION*)0x0) {
      if (param_2 == 0) {
         do {
            OPENSSL_LH_delete(*(undefined8*)( param_1 + 0x30 ), ses);
            lVar1 = *(long*)( ses[1].krb5_client_princ + 0xa8 );
            if (( lVar1 != 0 ) && ( lVar2 = lVar2 != 0 )) {
               if (lVar1 == param_1 + 0x48) {
                  if (lVar2 == param_1 + 0x40) {
                     *(undefined1(*) [16])( param_1 + 0x40 ) = (undefined1[16])0x0;
                  }
 else {
                     *(long*)( param_1 + 0x48 ) = lVar2;
                     *(long*)( lVar2 + 0x390 ) = lVar1;
                  }

               }
 else if (lVar2 == param_1 + 0x40) {
                  *(long*)( param_1 + 0x40 ) = lVar1;
                  *(long*)( lVar1 + 0x388 ) = lVar2;
               }
 else {
                  *(long*)( lVar1 + 0x388 ) = lVar2;
                  *(long*)( lVar2 + 0x390 ) = lVar1;
               }

               ses[1].krb5_client_princ[0xa8] = '\0';
               ses[1].krb5_client_princ[0xa9] = '\0';
               ses[1].krb5_client_princ[0xaa] = '\0';
               ses[1].krb5_client_princ[0xab] = '\0';
               ses[1].krb5_client_princ[0xac] = '\0';
               ses[1].krb5_client_princ[0xad] = '\0';
               ses[1].krb5_client_princ[0xae] = '\0';
               ses[1].krb5_client_princ[0xaf] = '\0';
               ses[1].krb5_client_princ[0x98] = '\0';
               ses[1].krb5_client_princ[0x99] = '\0';
               ses[1].krb5_client_princ[0x9a] = '\0';
               ses[1].krb5_client_princ[0x9b] = '\0';
               ses[1].krb5_client_princ[0x9c] = '\0';
               ses[1].krb5_client_princ[0x9d] = '\0';
               ses[1].krb5_client_princ[0x9e] = '\0';
               ses[1].krb5_client_princ[0x9f] = '\0';
               ses[1].krb5_client_princ[0xa0] = '\0';
               ses[1].krb5_client_princ[0xa1] = '\0';
               ses[1].krb5_client_princ[0xa2] = '\0';
               ses[1].krb5_client_princ[0xa3] = '\0';
               ses[1].krb5_client_princ[0xa4] = '\0';
               ses[1].krb5_client_princ[0xa5] = '\0';
               ses[1].krb5_client_princ[0xa6] = '\0';
               ses[1].krb5_client_princ[0xa7] = '\0';
            }

            ses[1].session_id[0x10] = '\x01';
            for (int i = 0; i < 3; i++) {
               ses[1].session_id[( i + 17 )] = '\0';
            }

            if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
               ( **(code**)( param_1 + 0x68 ) )(param_1, ses);
            }

            if (( lVar4 == 0 ) || ( iVar3 = iVar3 == 0 )) {
               SSL_SESSION_free(ses);
            }

            ses = *(SSL_SESSION**)( param_1 + 0x48 );
         }
 while ( ses != (SSL_SESSION*)0x0 );
      }
 else if (lVar4 == 0) {
         do {
            if (( ulong )(param_2 * 1000000000) <= *(ulong*)ses[1].krb5_client_princ) break;
            OPENSSL_LH_delete(*(undefined8*)( param_1 + 0x30 ), ses);
            lVar1 = *(long*)( ses[1].krb5_client_princ + 0xa8 );
            if (( lVar1 != 0 ) && ( lVar2 = lVar2 != 0 )) {
               if (lVar1 == param_1 + 0x48) {
                  if (lVar2 == param_1 + 0x40) {
                     *(undefined1(*) [16])( param_1 + 0x40 ) = (undefined1[16])0x0;
                  }
 else {
                     *(long*)( param_1 + 0x48 ) = lVar2;
                     *(long*)( lVar2 + 0x390 ) = lVar1;
                  }

               }
 else if (lVar2 == param_1 + 0x40) {
                  *(long*)( param_1 + 0x40 ) = lVar1;
                  *(long*)( lVar1 + 0x388 ) = lVar2;
               }
 else {
                  *(long*)( lVar1 + 0x388 ) = lVar2;
                  *(long*)( lVar2 + 0x390 ) = lVar1;
               }

               ses[1].krb5_client_princ[0xa8] = '\0';
               ses[1].krb5_client_princ[0xa9] = '\0';
               ses[1].krb5_client_princ[0xaa] = '\0';
               ses[1].krb5_client_princ[0xab] = '\0';
               ses[1].krb5_client_princ[0xac] = '\0';
               ses[1].krb5_client_princ[0xad] = '\0';
               ses[1].krb5_client_princ[0xae] = '\0';
               ses[1].krb5_client_princ[0xaf] = '\0';
               ses[1].krb5_client_princ[0x98] = '\0';
               ses[1].krb5_client_princ[0x99] = '\0';
               ses[1].krb5_client_princ[0x9a] = '\0';
               ses[1].krb5_client_princ[0x9b] = '\0';
               ses[1].krb5_client_princ[0x9c] = '\0';
               ses[1].krb5_client_princ[0x9d] = '\0';
               ses[1].krb5_client_princ[0x9e] = '\0';
               ses[1].krb5_client_princ[0x9f] = '\0';
               ses[1].krb5_client_princ[0xa0] = '\0';
               ses[1].krb5_client_princ[0xa1] = '\0';
               ses[1].krb5_client_princ[0xa2] = '\0';
               ses[1].krb5_client_princ[0xa3] = '\0';
               ses[1].krb5_client_princ[0xa4] = '\0';
               ses[1].krb5_client_princ[0xa5] = '\0';
               ses[1].krb5_client_princ[0xa6] = '\0';
               ses[1].krb5_client_princ[0xa7] = '\0';
            }

            ses[1].session_id[0x10] = '\x01';
            for (int i = 0; i < 3; i++) {
               ses[1].session_id[( i + 17 )] = '\0';
            }

            if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
               ( **(code**)( param_1 + 0x68 ) )(param_1, ses);
            }

            SSL_SESSION_free(ses);
            ses = *(SSL_SESSION**)( param_1 + 0x48 );
         }
 while ( ses != (SSL_SESSION*)0x0 );
      }
 else {
         do {
            while (true) {
               if (( ulong )(param_2 * 1000000000) <= *(ulong*)ses[1].krb5_client_princ) goto LAB_0010226e;
               OPENSSL_LH_delete(*(undefined8*)( param_1 + 0x30 ), ses);
               lVar1 = *(long*)( ses[1].krb5_client_princ + 0xa8 );
               if (( lVar1 != 0 ) && ( lVar2 = lVar2 != 0 )) {
                  if (lVar1 == param_1 + 0x48) {
                     if (lVar2 == param_1 + 0x40) {
                        *(undefined1(*) [16])( param_1 + 0x40 ) = (undefined1[16])0x0;
                     }
 else {
                        *(long*)( param_1 + 0x48 ) = lVar2;
                        *(long*)( lVar2 + 0x390 ) = lVar1;
                     }

                  }
 else if (lVar2 == param_1 + 0x40) {
                     *(long*)( param_1 + 0x40 ) = lVar1;
                     *(long*)( lVar1 + 0x388 ) = lVar2;
                  }
 else {
                     *(long*)( lVar1 + 0x388 ) = lVar2;
                     *(long*)( lVar2 + 0x390 ) = lVar1;
                  }

                  ses[1].krb5_client_princ[0xa8] = '\0';
                  ses[1].krb5_client_princ[0xa9] = '\0';
                  ses[1].krb5_client_princ[0xaa] = '\0';
                  ses[1].krb5_client_princ[0xab] = '\0';
                  ses[1].krb5_client_princ[0xac] = '\0';
                  ses[1].krb5_client_princ[0xad] = '\0';
                  ses[1].krb5_client_princ[0xae] = '\0';
                  ses[1].krb5_client_princ[0xaf] = '\0';
                  ses[1].krb5_client_princ[0x98] = '\0';
                  ses[1].krb5_client_princ[0x99] = '\0';
                  ses[1].krb5_client_princ[0x9a] = '\0';
                  ses[1].krb5_client_princ[0x9b] = '\0';
                  ses[1].krb5_client_princ[0x9c] = '\0';
                  ses[1].krb5_client_princ[0x9d] = '\0';
                  ses[1].krb5_client_princ[0x9e] = '\0';
                  ses[1].krb5_client_princ[0x9f] = '\0';
                  ses[1].krb5_client_princ[0xa0] = '\0';
                  ses[1].krb5_client_princ[0xa1] = '\0';
                  ses[1].krb5_client_princ[0xa2] = '\0';
                  ses[1].krb5_client_princ[0xa3] = '\0';
                  ses[1].krb5_client_princ[0xa4] = '\0';
                  ses[1].krb5_client_princ[0xa5] = '\0';
                  ses[1].krb5_client_princ[0xa6] = '\0';
                  ses[1].krb5_client_princ[0xa7] = '\0';
               }

               ses[1].session_id[0x10] = '\x01';
               for (int i = 0; i < 3; i++) {
                  ses[1].session_id[( i + 17 )] = '\0';
               }

               if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
                  ( **(code**)( param_1 + 0x68 ) )(param_1, ses);
               }

               iVar3 = OPENSSL_sk_push(lVar4, ses);
               if (iVar3 != 0) break;
               SSL_SESSION_free(ses);
               ses = *(SSL_SESSION**)( param_1 + 0x48 );
               if (ses == (SSL_SESSION*)0x0) goto LAB_0010226e;
            }
;
            ses = *(SSL_SESSION**)( param_1 + 0x48 );
         }
 while ( ses != (SSL_SESSION*)0x0 );
      }

   }

   LAB_0010226e:OPENSSL_LH_set_down_load(*(undefined8*)( param_1 + 0x30 ), uVar5);
   CRYPTO_THREAD_unlock(*(undefined8*)( param_1 + 0x3f0 ));
   OPENSSL_sk_pop_free(lVar4, SSL_SESSION_free);
   return;
}
void SSL_CTX_flush_sessions(void) {
   SSL_CTX_flush_sessions_ex();
   return;
}
undefined8 ssl_clear_bad_session(long param_1) {
   int iVar1;
   if (*(long*)( param_1 + 0x900 ) == 0) {
      return 0;
   }

   if (( *(byte*)( param_1 + 0x84 ) & 1 ) == 0) {
      iVar1 = SSL_in_init();
      if (iVar1 == 0) {
         iVar1 = SSL_in_before(param_1);
         if (iVar1 == 0) {
            SSL_CTX_remove_session(*(SSL_CTX**)( param_1 + 0xb88 ), *(SSL_SESSION**)( param_1 + 0x900 ));
            return 1;
         }

      }

   }

   return 0;
}
int SSL_set_session(SSL *to, SSL_SESSION *session) {
   int iVar1;
   SSL *pSVar2;
   if (to == (SSL*)0x0) {
      return 0;
   }

   pSVar2 = to;
   if (( to.version == 0 ) || ( ( ( to.version & 0x80U ) != 0 && ( pSVar2 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar2 != (SSL*)0x0 ) )) {
      if (session == (SSL_SESSION*)0x0) {
         ssl_clear_bad_session(pSVar2);
         if (( (SSL_METHOD*)to.rbio != (SSL_METHOD*)to.wbio ) && ( iVar1 = iVar1 == 0 )) {
            LAB_001026a4:SSL_SESSION_free(session);
            return 0;
         }

      }
 else {
         iVar1 = SSL_SESSION_up_ref(session);
         if (iVar1 == 0) goto LAB_0010266c;
         ssl_clear_bad_session(pSVar2);
         if (( (SSL_METHOD*)to.rbio != (SSL_METHOD*)to.wbio ) && ( iVar1 = iVar1 == 0 )) goto LAB_001026a4;
         pSVar2[3].verify_result = *(long*)( session[1].sid_ctx + 0xc );
      }

      SSL_SESSION_free((SSL_SESSION*)pSVar2[3].write_hash);
      pSVar2[3].write_hash = (EVP_MD_CTX*)session;
      iVar1 = 1;
   }
 else {
      LAB_0010266c:iVar1 = 0;
   }

   return iVar1;
}
void SSL_CTX_sess_set_new_cb(SSL_CTX *ctx, new_session_cb *new_session_cb) {
   ctx.get_session_cb = (_func_3089*)new_session_cb;
   return;
}
int SSL_CTX_sess_get_new_cb(ssl_st *ssl, SSL_SESSION *sess) {
   undefined8 uVar1;
   uVar1._0_4_ = ssl.init_num;
   uVar1._4_4_ = ssl.init_off;
   return (int)uVar1;
}
void SSL_CTX_sess_set_remove_cb(SSL_CTX *ctx, remove_session_cb *remove_session_cb) {
   *(remove_session_cb**)&ctx.stats = remove_session_cb;
   return;
}
void SSL_CTX_sess_get_remove_cb(ssl_ctx_st *ctx, SSL_SESSION *sess) {
   return;
}
void SSL_CTX_sess_set_get_cb(SSL_CTX *ctx, get_session_cb *get_session_cb) {
   *(get_session_cb**)&( ctx.stats ).sess_connect_good = get_session_cb;
   return;
}
SSL_SESSION *SSL_CTX_sess_get_get_cb(ssl_st *ssl, uchar *Data, int len, int *copy) {
   return *(SSL_SESSION**)&ssl.packet_length;
}
void SSL_CTX_set_info_callback(SSL_CTX *ctx, cb *cb) {
   ctx.mode = (ulong)cb;
   return;
}
void SSL_CTX_get_info_callback(SSL *ssl, int type, int val) {
   return;
}
void SSL_CTX_set_client_cert_cb(SSL_CTX *ctx, client_cert_cb *client_cert_cb) {
   ctx.app_verify_cookie_cb = (_func_3093*)client_cert_cb;
   return;
}
int SSL_CTX_get_client_cert_cb(SSL *ssl, X509 **x509, EVP_PKEY **pkey) {
   return (int)*(undefined8*)&ssl.mac_flags;
}
void SSL_CTX_set_cookie_generate_cb(SSL_CTX *ctx, app_gen_cookie_cb *app_gen_cookie_cb) {
   ( ctx.ex_data ).sk = (stack_st_void*)app_gen_cookie_cb;
   return;
}
void SSL_CTX_set_cookie_verify_cb(SSL_CTX *ctx, app_verify_cookie_cb *app_verify_cookie_cb) {
   *(app_verify_cookie_cb**)&( ctx.ex_data ).dummy = app_verify_cookie_cb;
   return;
}
undefined8 SSL_SESSION_set1_ticket_appdata(long param_1, long param_2, long param_3) {
   long lVar1;
   undefined8 uVar2;
   CRYPTO_free(*(void**)( param_1 + 0x368 ));
   *(undefined8*)( param_1 + 0x370 ) = 0;
   if (( param_2 == 0 ) || ( param_3 == 0 )) {
      *(undefined8*)( param_1 + 0x368 ) = 0;
      uVar2 = 1;
   }
 else {
      lVar1 = CRYPTO_memdup(param_2, param_3, "ssl/ssl_sess.c", 0x59c);
      *(long*)( param_1 + 0x368 ) = lVar1;
      if (lVar1 == 0) {
         uVar2 = 0;
      }
 else {
         *(long*)( param_1 + 0x370 ) = param_3;
         uVar2 = 1;
      }

   }

   return uVar2;
}
undefined8 SSL_SESSION_get0_ticket_appdata(long param_1, undefined8 *param_2, undefined8 *param_3) {
   *param_2 = *(undefined8*)( param_1 + 0x368 );
   *param_3 = *(undefined8*)( param_1 + 0x370 );
   return 1;
}
void SSL_CTX_set_stateless_cookie_generate_cb(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xe0 ) = param_2;
   return;
}
void SSL_CTX_set_stateless_cookie_verify_cb(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xe8 ) = param_2;
   return;
}
SSL_SESSION *PEM_read_bio_SSL_SESSION(BIO *bp, SSL_SESSION **x, undefined1 *cb, void *u) {
   SSL_SESSION *pSVar1;
   pSVar1 = (SSL_SESSION*)PEM_ASN1_read_bio(&d2i_SSL_SESSION, "SSL SESSION PARAMETERS", bp, x, cb, u);
   return pSVar1;
}
SSL_SESSION *PEM_read_SSL_SESSION(FILE *fp, SSL_SESSION **x, undefined1 *cb, void *u) {
   SSL_SESSION *pSVar1;
   pSVar1 = (SSL_SESSION*)PEM_ASN1_read(&d2i_SSL_SESSION, "SSL SESSION PARAMETERS", fp, x, cb, u);
   return pSVar1;
}
int PEM_write_bio_SSL_SESSION(BIO *bp, SSL_SESSION *x) {
   int iVar1;
   iVar1 = PEM_ASN1_write_bio(&i2d_SSL_SESSION, "SSL SESSION PARAMETERS", bp, x, (EVP_CIPHER*)0x0, (uchar*)0x0, 0, (undefined1*)0x0, (void*)0x0);
   return iVar1;
}
int PEM_write_SSL_SESSION(FILE *fp, SSL_SESSION *x) {
   int iVar1;
   iVar1 = PEM_ASN1_write(&i2d_SSL_SESSION, "SSL SESSION PARAMETERS", fp, x, (EVP_CIPHER*)0x0, (uchar*)0x0, 0, (undefined1*)0x0, (void*)0x0);
   return iVar1;
}


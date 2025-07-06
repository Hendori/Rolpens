void lh_X509_NAME_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2429 = 0; i_2429 < 2; i_2429++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_X509_NAME_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2430 = 0; i_2430 < 2; i_2430++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_X509_NAME_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2431 = 0; i_2431 < 2; i_2431++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_X509_NAME_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2432 = 0; i_2432 < 2; i_2432++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void ssl_x509_store_ctx_init_ossl_(void) {
   ssl_x509_store_ctx_idx = CRYPTO_get_ex_new_index(5, 0, "SSL for verify callback", (undefined1*)0x0, (undefined1*)0x0, (undefined1*)0x0);
   ssl_x509_store_ctx_init_ossl_ret_ = ~ssl_x509_store_ctx_idx >> 0x1f;
   return;
}int xname_cmp(X509_NAME *param_1, X509_NAME *param_2) {
   uchar *ptr;
   uint uVar1;
   uint uVar2;
   int iVar3;
   long in_FS_OFFSET;
   uchar *local_30;
   uchar *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = (uchar*)0x0;
   local_28 = (uchar*)0x0;
   uVar1 = i2d_X509_NAME(param_1, &local_30);
   uVar2 = i2d_X509_NAME(param_2, &local_28);
   ptr = local_30;
   if ((int)( uVar1 | uVar2 ) < 0) {
      iVar3 = -2;
   } else if (uVar1 == uVar2) {
      iVar3 = memcmp(local_30, local_28, (long)(int)uVar1);
   } else {
      iVar3 = uVar1 - uVar2;
   }
   CRYPTO_free(ptr);
   CRYPTO_free(local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void xname_hash(undefined8 param_1) {
   X509_NAME_hash_ex(param_1, 0, 0, 0);
   return;
}undefined8 add_file_cert_subjects_to_stack(undefined8 param_1, void *param_2, undefined8 param_3) {
   int iVar1;
   BIO_METHOD *type;
   BIO *bp;
   long lVar2;
   X509 *pXVar3;
   X509_NAME *pXVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   X509 *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (X509*)0x0;
   type = BIO_s_file();
   bp = BIO_new(type);
   if (bp == (BIO*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x34b, "add_file_cert_subjects_to_stack");
      ERR_set_error(0x14, 0x80020, 0);
   } else {
      lVar2 = BIO_ctrl(bp, 0x6c, 3, param_2);
      if (0 < (int)lVar2) {
         while (pXVar3 = PEM_read_bio_X509(bp, &local_38, (undefined1*)0x0, (void*)0x0),pXVar3 != (X509*)0x0) {
            pXVar4 = X509_get_subject_name(local_38);
            if (( pXVar4 == (X509_NAME*)0x0 ) || ( pXVar4 = X509_NAME_dup(pXVar4) ),pXVar4 == (X509_NAME*)0x0) goto LAB_001002c0;
            lVar2 = OPENSSL_LH_retrieve(param_3, pXVar4);
            if (lVar2 == 0) {
               iVar1 = OPENSSL_sk_push(param_1, pXVar4);
               if (iVar1 == 0) {
                  uVar5 = 0;
                  X509_NAME_free(pXVar4);
                  goto LAB_0010025a;
               }
               OPENSSL_LH_insert(param_3, pXVar4);
            } else {
               X509_NAME_free(pXVar4);
            }
         };
         ERR_clear_error();
         uVar5 = 1;
         goto LAB_0010025a;
      }
   }
   LAB_001002c0:uVar5 = 0;
   LAB_0010025a:BIO_free(bp);
   X509_free(local_38);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}int xname_sk_cmp(undefined8 *param_1, undefined8 *param_2) {
   X509_NAME *a;
   uchar *ptr;
   uint uVar1;
   uint uVar2;
   int iVar3;
   long in_FS_OFFSET;
   uchar *local_30;
   uchar *local_28;
   long local_20;
   a = (X509_NAME*)*param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = (uchar*)0x0;
   local_28 = (uchar*)0x0;
   uVar1 = i2d_X509_NAME((X509_NAME*)*param_1, &local_30);
   uVar2 = i2d_X509_NAME(a, &local_28);
   ptr = local_30;
   if ((int)( uVar1 | uVar2 ) < 0) {
      iVar3 = -2;
   } else if (uVar1 == uVar2) {
      iVar3 = memcmp(local_30, local_28, (long)(int)uVar1);
   } else {
      iVar3 = uVar1 - uVar2;
   }
   CRYPTO_free(ptr);
   CRYPTO_free(local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */int SSL_get_ex_data_X509_STORE_CTX_idx(void) {
   int iVar1;
   iVar1 = CRYPTO_THREAD_run_once(&ssl_x509_store_ctx_once, ssl_x509_store_ctx_init_ossl_);
   if (( iVar1 == 0 ) || ( iVar1 = ssl_x509_store_ctx_init_ossl_ret_ == 0 )) {
      iVar1 = -1;
   }
   return iVar1;
}long *ssl_cert_new(ulong param_1) {
   long *ptr;
   long lVar1;
   if (( 8 < param_1 ) && ( ptr = (long*)CRYPTO_zalloc(0xb8, "ssl/ssl_cert.c", 0x48) ),ptr != (long*)0x0) {
      ptr[5] = param_1;
      lVar1 = CRYPTO_zalloc(param_1 * 0x28, "ssl/ssl_cert.c", 0x4d);
      ptr[4] = lVar1;
      if (lVar1 != 0) {
         *ptr = lVar1;
         ptr[0x12] = (long)ssl_security_default_callback;
         *(undefined4*)( ptr + 0x13 ) = 2;
         ptr[0x14] = 0;
         LOCK();
         *(undefined4*)( ptr + 0x16 ) = 1;
         UNLOCK();
         return ptr;
      }
      CRYPTO_free(ptr);
   }
   return (long*)0x0;
}void ssl_cert_clear_certs(long param_1) {
   undefined8 *puVar1;
   ulong uVar2;
   ulong uVar3;
   if (param_1 != 0) {
      if (*(long*)( param_1 + 0x28 ) != 0) {
         uVar2 = 0;
         do {
            uVar3 = uVar2 + 1;
            puVar1 = (undefined8*)( *(long*)( param_1 + 0x20 ) + uVar2 * 0x28 );
            X509_free((X509*)*puVar1);
            *puVar1 = 0;
            EVP_PKEY_free((EVP_PKEY*)puVar1[1]);
            puVar1[1] = 0;
            OSSL_STACK_OF_X509_free(puVar1[2]);
            puVar1[2] = 0;
            CRYPTO_free((void*)puVar1[3]);
            puVar1[3] = 0;
            puVar1[4] = 0;
            uVar2 = uVar3;
         } while ( uVar3 < *(ulong*)( param_1 + 0x28 ) );
      }
      return;
   }
   return;
}void ssl_cert_free(void *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (void*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( (long)param_1 + 0xb0 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   EVP_PKEY_free(*(EVP_PKEY**)( (long)param_1 + 8 ));
   ssl_cert_clear_certs(param_1);
   CRYPTO_free(*(void**)( (long)param_1 + 0x40 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x50 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x30 ));
   X509_STORE_free(*(X509_STORE**)( (long)param_1 + 0x78 ));
   X509_STORE_free(*(X509_STORE**)( (long)param_1 + 0x70 ));
   custom_exts_free((long)param_1 + 0x80);
   CRYPTO_free(*(void**)( (long)param_1 + 0xa8 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x20 ));
   CRYPTO_free(param_1);
   return;
}long *ssl_cert_dup(long *param_1) {
   long lVar1;
   int iVar2;
   long *ptr;
   long lVar3;
   void *pvVar4;
   char *pcVar5;
   long *plVar6;
   long *plVar7;
   ulong uVar8;
   ptr = (long*)CRYPTO_zalloc(0xb8, "ssl/ssl_cert.c", 0x62);
   if (ptr == (long*)0x0) {
      return (long*)0x0;
   }
   lVar3 = param_1[5];
   ptr[5] = lVar3;
   lVar3 = CRYPTO_zalloc(lVar3 * 0x28, "ssl/ssl_cert.c", 0x6c);
   ptr[4] = lVar3;
   if (lVar3 == 0) {
      CRYPTO_free(ptr);
      return (long*)0x0;
   }
   *ptr = ( lVar3 + *param_1 ) - param_1[4];
   LOCK();
   *(undefined4*)( ptr + 0x16 ) = 1;
   UNLOCK();
   if (param_1[1] != 0) {
      iVar2 = EVP_PKEY_up_ref();
      if (iVar2 == 0) goto LAB_0010097c;
      ptr[1] = param_1[1];
   }
   ptr[2] = param_1[2];
   *(int*)( ptr + 3 ) = (int)param_1[3];
   if (ptr[5] != 0) {
      uVar8 = 0;
      do {
         plVar7 = (long*)( param_1[4] + uVar8 * 0x28 );
         plVar6 = (long*)( uVar8 * 0x28 + ptr[4] );
         if (*plVar7 != 0) {
            iVar2 = X509_up_ref();
            if (iVar2 == 0) goto LAB_0010097c;
            *plVar6 = *plVar7;
         }
         if (plVar7[1] != 0) {
            iVar2 = EVP_PKEY_up_ref();
            if (iVar2 == 0) goto LAB_0010097c;
            plVar6[1] = plVar7[1];
         }
         if (plVar7[2] != 0) {
            lVar3 = X509_chain_up_ref();
            plVar6[2] = lVar3;
            if (lVar3 == 0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_cert.c", 0x95, "ssl_cert_dup");
               ERR_set_error(0x14, 0x8000b, 0);
               goto LAB_0010097c;
            }
         }
         if (plVar7[3] != 0) {
            lVar3 = CRYPTO_memdup(plVar7[3], plVar7[4], "ssl/ssl_cert.c", 0x9b);
            plVar6[3] = lVar3;
            if (lVar3 == 0) goto LAB_0010097c;
            plVar6[4] = plVar7[4];
         }
         uVar8 = uVar8 + 1;
      } while ( uVar8 < (ulong)ptr[5] );
   }
   if (param_1[8] == 0) {
      ptr[8] = 0;
      if (param_1[10] != 0) goto LAB_0010080a;
      LAB_001009a4:ptr[10] = 0;
   } else {
      pvVar4 = CRYPTO_malloc((int)param_1[9] * 2, "ssl/ssl_cert.c", 0xad);
      ptr[8] = (long)pvVar4;
      if (pvVar4 == (void*)0x0) goto LAB_0010097c;
      lVar3 = param_1[9];
      memcpy(pvVar4, (void*)param_1[8], lVar3 * 2);
      lVar1 = param_1[10];
      ptr[9] = lVar3;
      if (lVar1 == 0) goto LAB_001009a4;
      LAB_0010080a:pvVar4 = CRYPTO_malloc((int)param_1[0xb] * 2, "ssl/ssl_cert.c", 0xb8);
      ptr[10] = (long)pvVar4;
      if (pvVar4 == (void*)0x0) goto LAB_0010097c;
      lVar3 = param_1[0xb];
      memcpy(pvVar4, (void*)param_1[10], lVar3 * 2);
      ptr[0xb] = lVar3;
   }
   if (param_1[6] != 0) {
      lVar3 = CRYPTO_memdup(param_1[6], param_1[7], "ssl/ssl_cert.c", 0xc3);
      ptr[6] = lVar3;
      if (lVar3 == 0) goto LAB_0010097c;
      ptr[7] = param_1[7];
   }
   lVar3 = param_1[0xf];
   *(undefined4*)( (long)ptr + 0x1c ) = *(undefined4*)( (long)param_1 + 0x1c );
   ptr[0xc] = param_1[0xc];
   ptr[0xd] = param_1[0xd];
   if (lVar3 != 0) {
      iVar2 = X509_STORE_up_ref();
      if (iVar2 == 0) goto LAB_0010097c;
      ptr[0xf] = param_1[0xf];
   }
   if (param_1[0xe] != 0) {
      iVar2 = X509_STORE_up_ref();
      if (iVar2 == 0) goto LAB_0010097c;
      ptr[0xe] = param_1[0xe];
   }
   ptr[0x12] = param_1[0x12];
   *(int*)( ptr + 0x13 ) = (int)param_1[0x13];
   ptr[0x14] = param_1[0x14];
   iVar2 = custom_exts_copy(ptr + 0x10, param_1 + 0x10);
   if (iVar2 != 0) {
      if ((char*)param_1[0x15] == (char*)0x0) {
         return ptr;
      }
      pcVar5 = CRYPTO_strdup((char*)param_1[0x15], "ssl/ssl_cert.c", 0xe2);
      ptr[0x15] = (long)pcVar5;
      if (pcVar5 != (char*)0x0) {
         return ptr;
      }
   }
   LAB_0010097c:ssl_cert_free(ptr);
   return (long*)0x0;
}undefined8 ssl_cert_set0_chain(long param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   if (param_1 == 0) {
      lVar4 = **(long**)( param_2 + 0x158 );
   } else {
      lVar4 = **(long**)( param_1 + 0x880 );
   }
   if (lVar4 != 0) {
      iVar3 = 0;
      while (true) {
         iVar1 = OPENSSL_sk_num(param_3);
         if (iVar1 <= iVar3) {
            OSSL_STACK_OF_X509_free(*(undefined8*)( lVar4 + 0x10 ));
            *(undefined8*)( lVar4 + 0x10 ) = param_3;
            return 1;
         }
         uVar2 = OPENSSL_sk_value(param_3, iVar3);
         iVar1 = ssl_security_cert(param_1, param_2, uVar2, 0, 0);
         if (iVar1 != 1) break;
         iVar3 = iVar3 + 1;
      };
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x138, "ssl_cert_set0_chain");
      ERR_set_error(0x14, iVar1, 0);
   }
   return 0;
}undefined8 ssl_cert_set1_chain(undefined8 param_1, undefined8 param_2, long param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   if (param_3 == 0) {
      uVar3 = ssl_cert_set0_chain(param_1, param_2, 0);
      return uVar3;
   }
   lVar2 = X509_chain_up_ref(param_3);
   if (lVar2 != 0) {
      iVar1 = ssl_cert_set0_chain(param_1, param_2, lVar2);
      if (iVar1 != 0) {
         return 1;
      }
      OSSL_STACK_OF_X509_free(lVar2);
   }
   return 0;
}bool ssl_cert_add0_chain_cert(long param_1, long param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (param_1 == 0) {
      lVar3 = **(long**)( param_2 + 0x158 );
   } else {
      lVar3 = **(long**)( param_1 + 0x880 );
   }
   if (lVar3 != 0) {
      iVar1 = ssl_security_cert(param_1, param_2, param_3, 0, 0);
      if (iVar1 == 1) {
         lVar2 = *(long*)( lVar3 + 0x10 );
         if (lVar2 == 0) {
            lVar2 = OPENSSL_sk_new_null();
            *(long*)( lVar3 + 0x10 ) = lVar2;
            if (lVar2 == 0) {
               return false;
            }
         }
         iVar1 = OPENSSL_sk_push(lVar2, param_3);
         return iVar1 != 0;
      }
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x15a, "ssl_cert_add0_chain_cert");
      ERR_set_error(0x14, iVar1, 0);
   }
   return false;
}undefined8 ssl_cert_add1_chain_cert(undefined8 param_1, undefined8 param_2, X509 *param_3) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = X509_up_ref(param_3);
   if (iVar1 == 0) {
      uVar2 = 0;
   } else {
      iVar1 = ssl_cert_add0_chain_cert(param_1, param_2, param_3);
      uVar2 = 1;
      if (iVar1 == 0) {
         X509_free(param_3);
         uVar2 = 0;
      }
   }
   return uVar2;
}undefined8 ssl_cert_select_current(long *param_1, X509 *param_2) {
   int iVar1;
   long *plVar2;
   ulong uVar3;
   ulong uVar4;
   long *plVar5;
   if (param_2 == (X509*)0x0) {
      return 0;
   }
   uVar3 = param_1[5];
   if (uVar3 == 0) {
      return 0;
   }
   plVar5 = (long*)param_1[4];
   uVar4 = 0;
   plVar2 = plVar5;
   do {
      if (( (X509*)*plVar2 == param_2 ) && ( plVar2[1] != 0 )) goto LAB_00100cb4;
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 5;
   } while ( uVar4 != uVar3 );
   uVar4 = 0;
   do {
      plVar2 = plVar5 + uVar4 * 5;
      if (( plVar2[1] != 0 ) && ( (X509*)*plVar2 != (X509*)0x0 )) {
         iVar1 = X509_cmp((X509*)*plVar2, param_2);
         if (iVar1 == 0) {
            LAB_00100cb4:*param_1 = (long)plVar2;
            return 1;
         }
         uVar3 = param_1[5];
      }
      uVar4 = uVar4 + 1;
      if (uVar3 <= uVar4) {
         return 0;
      }
      plVar5 = (long*)param_1[4];
   } while ( true );
}undefined8 ssl_cert_set_current(long *param_1, long param_2) {
   long *plVar1;
   ulong uVar2;
   ulong uVar3;
   if (param_1 == (long*)0x0) {
      return 0;
   }
   if (param_2 == 1) {
      uVar3 = param_1[5];
      uVar2 = 0;
      if (uVar3 == 0) {
         return 0;
      }
   } else {
      if (param_2 != 2) {
         return 0;
      }
      uVar3 = param_1[5];
      uVar2 = ( *param_1 - param_1[4] >> 3 ) * -0x3333333333333333 + 1;
      if (uVar3 <= uVar2) {
         return 0;
      }
   }
   plVar1 = (long*)( param_1[4] + uVar2 * 0x28 );
   while (( *plVar1 == 0 || ( plVar1[1] == 0 ) )) {
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 5;
      if (uVar3 == uVar2) {
         return 0;
      }
   };
   *param_1 = (long)plVar1;
   return 1;
}void ssl_cert_set_cert_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x60 ) = param_2;
   *(undefined8*)( param_1 + 0x68 ) = param_3;
   return;
}int ssl_verify_rpk(void *param_1, long param_2) {
   undefined8 *puVar1;
   int iVar2;
   undefined4 uVar3;
   int iVar4;
   X509_STORE_CTX *ctx;
   X509_VERIFY_PARAM *to;
   char *name;
   long lVar5;
   if (param_2 == 0) {
      return 0;
   }
   puVar1 = *(undefined8**)( (long)param_1 + 8 );
   lVar5 = *(long*)( *(long*)( (long)param_1 + 0x880 ) + 0x78 );
   if (lVar5 == 0) {
      lVar5 = puVar1[5];
   }
   ctx = (X509_STORE_CTX*)X509_STORE_CTX_new_ex(*puVar1, puVar1[0x8e]);
   if (ctx == (X509_STORE_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x1c5, "ssl_verify_internal");
      ERR_set_error(0x14, 0x8000b, 0);
      return 0;
   }
   iVar2 = X509_STORE_CTX_init_rpk(ctx, lVar5, param_2);
   if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x1d1, "ssl_verify_internal");
      ERR_set_error(0x14, 0x8000b, 0);
   } else {
      to = X509_STORE_CTX_get0_param(ctx);
      uVar3 = SSL_get_security_level(param_1);
      X509_VERIFY_PARAM_set_auth_level(to, uVar3);
      X509_STORE_CTX_set_flags(ctx, ( ulong )(*(uint*)( *(long*)( (long)param_1 + 0x880 ) + 0x1c ) & 0x30000));
      iVar2 = SSL_get_ex_data_X509_STORE_CTX_idx();
      iVar2 = X509_STORE_CTX_set_ex_data(ctx, iVar2, param_1);
      if (iVar2 != 0) {
         iVar2 = OPENSSL_sk_num(*(undefined8*)( (long)param_1 + 0x520 ));
         if (0 < iVar2) {
            X509_STORE_CTX_set0_dane(ctx, (long)param_1 + 0x518);
         }
         name = "ssl_server";
         if (*(int*)( (long)param_1 + 0x78 ) != 0) {
            name = "ssl_client";
         }
         X509_STORE_CTX_set_default(ctx, name);
         X509_VERIFY_PARAM_set1(to, *(X509_VERIFY_PARAM**)( (long)param_1 + 0x510 ));
         if (*(verify_cb**)( (long)param_1 + 0x958 ) != (verify_cb*)0x0) {
            X509_STORE_CTX_set_verify_cb(ctx, *(verify_cb**)( (long)param_1 + 0x958 ));
         }
         if ((code*)puVar1[0x15] == (code*)0x0) {
            iVar4 = X509_verify_cert(ctx);
            iVar2 = 0;
            if (-1 < iVar4) {
               iVar2 = iVar4;
            }
         } else {
            iVar2 = ( *(code*)puVar1[0x15] )(ctx, puVar1[0x16]);
         }
         iVar4 = X509_STORE_CTX_get_error(ctx);
         *(long*)( (long)param_1 + 0x998 ) = (long)iVar4;
         OSSL_STACK_OF_X509_free(*(undefined8*)( (long)param_1 + 0x990 ));
         *(undefined8*)( (long)param_1 + 0x990 ) = 0;
         X509_VERIFY_PARAM_move_peername(*(undefined8*)( (long)param_1 + 0x510 ), to);
         goto LAB_00100e83;
      }
   }
   iVar2 = 0;
   LAB_00100e83:X509_STORE_CTX_free(ctx);
   return iVar2;
}int ssl_verify_cert_chain(void *param_1, stack_st_X509 *param_2) {
   undefined8 *puVar1;
   int iVar2;
   undefined4 uVar3;
   int iVar4;
   X509_STORE_CTX *ctx;
   X509 *x509;
   X509_VERIFY_PARAM *to;
   long lVar5;
   stack_st_X509 *psVar6;
   char *name;
   X509_STORE *store;
   if (( param_2 == (stack_st_X509*)0x0 ) || ( iVar2 = iVar2 == 0 )) {
      return 0;
   }
   puVar1 = *(undefined8**)( (long)param_1 + 8 );
   store = *(X509_STORE**)( *(long*)( (long)param_1 + 0x880 ) + 0x78 );
   if (store == (X509_STORE*)0x0) {
      store = (X509_STORE*)puVar1[5];
   }
   ctx = (X509_STORE_CTX*)X509_STORE_CTX_new_ex(*puVar1, puVar1[0x8e]);
   if (ctx == (X509_STORE_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x1c5, "ssl_verify_internal");
      ERR_set_error(0x14, 0x8000b, 0);
      return 0;
   }
   x509 = (X509*)OPENSSL_sk_value(param_2, 0);
   iVar2 = X509_STORE_CTX_init(ctx, store, x509, param_2);
   if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x1cc, "ssl_verify_internal");
      ERR_set_error(0x14, 0x8000b, 0);
   } else {
      to = X509_STORE_CTX_get0_param(ctx);
      uVar3 = SSL_get_security_level(param_1);
      X509_VERIFY_PARAM_set_auth_level(to, uVar3);
      X509_STORE_CTX_set_flags(ctx, ( ulong )(*(uint*)( *(long*)( (long)param_1 + 0x880 ) + 0x1c ) & 0x30000));
      iVar2 = SSL_get_ex_data_X509_STORE_CTX_idx();
      iVar2 = X509_STORE_CTX_set_ex_data(ctx, iVar2, param_1);
      if (iVar2 != 0) {
         iVar2 = OPENSSL_sk_num(*(undefined8*)( (long)param_1 + 0x520 ));
         if (0 < iVar2) {
            X509_STORE_CTX_set0_dane(ctx, (long)param_1 + 0x518);
         }
         name = "ssl_server";
         if (*(int*)( (long)param_1 + 0x78 ) != 0) {
            name = "ssl_client";
         }
         X509_STORE_CTX_set_default(ctx, name);
         X509_VERIFY_PARAM_set1(to, *(X509_VERIFY_PARAM**)( (long)param_1 + 0x510 ));
         if (*(verify_cb**)( (long)param_1 + 0x958 ) != (verify_cb*)0x0) {
            X509_STORE_CTX_set_verify_cb(ctx, *(verify_cb**)( (long)param_1 + 0x958 ));
         }
         if ((code*)puVar1[0x15] == (code*)0x0) {
            iVar4 = X509_verify_cert(ctx);
            iVar2 = 0;
            if (-1 < iVar4) {
               iVar2 = iVar4;
            }
         } else {
            iVar2 = ( *(code*)puVar1[0x15] )(ctx, puVar1[0x16]);
         }
         iVar4 = X509_STORE_CTX_get_error(ctx);
         *(long*)( (long)param_1 + 0x998 ) = (long)iVar4;
         OSSL_STACK_OF_X509_free(*(undefined8*)( (long)param_1 + 0x990 ));
         *(undefined8*)( (long)param_1 + 0x990 ) = 0;
         lVar5 = X509_STORE_CTX_get0_chain(ctx);
         if (lVar5 != 0) {
            psVar6 = X509_STORE_CTX_get1_chain(ctx);
            *(stack_st_X509**)( (long)param_1 + 0x990 ) = psVar6;
            if (psVar6 == (stack_st_X509*)0x0) {
               ERR_new();
               iVar2 = 0;
               ERR_set_debug("ssl/ssl_cert.c", 0x208, "ssl_verify_internal");
               ERR_set_error(0x14, 0x8000b, 0);
            }
         }
         X509_VERIFY_PARAM_move_peername(*(undefined8*)( (long)param_1 + 0x510 ), to);
         goto LAB_001010d3;
      }
   }
   iVar2 = 0;
   LAB_001010d3:X509_STORE_CTX_free(ctx);
   return iVar2;
}stack_st_X509_NAME *SSL_dup_CA_list(stack_st_X509_NAME *sk) {
   int iVar1;
   stack_st_X509_NAME *psVar2;
   X509_NAME *pXVar3;
   int iVar4;
   iVar1 = OPENSSL_sk_num();
   psVar2 = (stack_st_X509_NAME*)OPENSSL_sk_new_reserve(0, iVar1);
   if (psVar2 == (stack_st_X509_NAME*)0x0) {
      ERR_new();
      psVar2 = (stack_st_X509_NAME*)0x0;
      ERR_set_debug("ssl/ssl_cert.c", 0x23d, "SSL_dup_CA_list");
      ERR_set_error(0x14, 0x8000f, 0);
   } else {
      iVar4 = 0;
      if (0 < iVar1) {
         do {
            pXVar3 = (X509_NAME*)OPENSSL_sk_value(sk, iVar4);
            pXVar3 = X509_NAME_dup(pXVar3);
            if (pXVar3 == (X509_NAME*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/ssl_cert.c", 0x243, "SSL_dup_CA_list");
               ERR_set_error(0x14, 0x8000b, 0);
               OPENSSL_sk_pop_free(psVar2, X509_NAME_free);
               return (stack_st_X509_NAME*)0x0;
            }
            iVar4 = iVar4 + 1;
            OPENSSL_sk_push(psVar2, pXVar3);
         } while ( iVar1 != iVar4 );
      }
   }
   return psVar2;
}void SSL_set0_CA_list(uint *param_1, undefined8 param_2) {
   if (param_1 == (uint*)0x0) {
      return;
   }
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_001013dd;
      }
      return;
   }
   LAB_001013dd:OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x268 ), X509_NAME_free);
   *(undefined8*)( param_1 + 0x268 ) = param_2;
   return;
}void SSL_CTX_set0_CA_list(long param_1, undefined8 param_2) {
   OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x128 ), X509_NAME_free);
   *(undefined8*)( param_1 + 0x128 ) = param_2;
   return;
}undefined8 SSL_CTX_get0_CA_list(long param_1) {
   return *(undefined8*)( param_1 + 0x128 );
}long SSL_get0_CA_list(uint *param_1) {
   uint *puVar1;
   long lVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_1;
   if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar1 != (uint*)0x0 ) )) {
      lVar2 = *(long*)( puVar1 + 0x268 );
      if (lVar2 == 0) {
         return *(long*)( *(long*)( param_1 + 2 ) + 0x128 );
      }
   } else {
      lVar2 = 0;
   }
   return lVar2;
}void SSL_CTX_set_client_CA_list(SSL_CTX *ctx, stack_st_X509_NAME *name_list) {
   OPENSSL_sk_pop_free(ctx->cert, X509_NAME_free);
   ctx->cert = (cert_st*)name_list;
   return;
}stack_st_X509_NAME *SSL_CTX_get_client_CA_list(SSL_CTX *s) {
   return (stack_st_X509_NAME*)s->cert;
}void SSL_set_client_CA_list(SSL *s, stack_st_X509_NAME *name_list) {
   if (s == (SSL*)0x0) {
      return;
   }
   if (s->version != 0) {
      if (( s->version & 0x80U ) != 0) {
         s = (SSL*)ossl_quic_obj_get0_handshake_layer();
         if (s != (SSL*)0x0) goto LAB_0010154d;
      }
      return;
   }
   LAB_0010154d:OPENSSL_sk_pop_free(*(undefined8*)&s[3].ex_data.dummy, X509_NAME_free);
   *(stack_st_X509_NAME**)&s[3].ex_data.dummy = name_list;
   return;
}undefined8 SSL_get0_peer_CA_list(uint *param_1) {
   long lVar1;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         return *(undefined8*)( param_1 + 0xd6 );
      }
      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x358 );
         }
         return 0;
      }
   }
   return 0;
}stack_st_X509_NAME *SSL_get_client_CA_list(SSL *s) {
   stack_st_X509_NAME *psVar1;
   SSL *pSVar2;
   if (s == (SSL*)0x0) {
      return (stack_st_X509_NAME*)0x0;
   }
   pSVar2 = s;
   if (( s->version != 0 ) && ( ( ( s->version & 0x80U ) == 0 || ( pSVar2 = (SSL*)ossl_quic_obj_get0_handshake_layer() ),pSVar2 == (SSL*)0x0 ) )) {
      return (stack_st_X509_NAME*)0x0;
   }
   if (*(int*)&pSVar2->s2 == 0) {
      return *(stack_st_X509_NAME**)&pSVar2[1].hit;
   }
   psVar1 = *(stack_st_X509_NAME**)&pSVar2[3].ex_data.dummy;
   if (psVar1 == (stack_st_X509_NAME*)0x0) {
      return (stack_st_X509_NAME*)s->method[1].ssl_shutdown;
   }
   return psVar1;
}undefined8 SSL_add1_to_CA_list(uint *param_1, X509 *param_2) {
   int iVar1;
   X509_NAME *pXVar2;
   long lVar3;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   if (( ( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) ) )) {
      if (*(long*)( param_1 + 0x268 ) == 0) {
         lVar3 = OPENSSL_sk_new_null();
         *(long*)( param_1 + 0x268 ) = lVar3;
         if (lVar3 == 0) {
            return 0;
         }
      }
      pXVar2 = X509_get_subject_name(param_2);
      pXVar2 = X509_NAME_dup(pXVar2);
      if (pXVar2 != (X509_NAME*)0x0) {
         iVar1 = OPENSSL_sk_push(*(undefined8*)( param_1 + 0x268 ), pXVar2);
         if (iVar1 != 0) {
            return 1;
         }
         X509_NAME_free(pXVar2);
      }
   }
   return 0;
}undefined8 SSL_CTX_add1_to_CA_list(long param_1, X509 *param_2) {
   int iVar1;
   X509_NAME *pXVar2;
   long lVar3;
   if (param_2 == (X509*)0x0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x128 ) == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long*)( param_1 + 0x128 ) = lVar3;
      if (lVar3 == 0) {
         return 0;
      }
   }
   pXVar2 = X509_get_subject_name(param_2);
   pXVar2 = X509_NAME_dup(pXVar2);
   if (pXVar2 == (X509_NAME*)0x0) {
      return 0;
   }
   iVar1 = OPENSSL_sk_push(*(undefined8*)( param_1 + 0x128 ), pXVar2);
   if (iVar1 == 0) {
      X509_NAME_free(pXVar2);
      return 0;
   }
   return 1;
}int SSL_add_client_CA(SSL *ssl, X509 *x) {
   int iVar1;
   X509_NAME *pXVar2;
   long lVar3;
   if (ssl == (SSL*)0x0) {
      return 0;
   }
   if (( ( ssl->version == 0 ) || ( ( ( ssl->version & 0x80U ) != 0 && ( ssl = (SSL*)ossl_quic_obj_get0_handshake_layer() ),ssl != (SSL*)0x0 ) ) )) {
      if (*(long*)&ssl[3].ex_data.dummy == 0) {
         lVar3 = OPENSSL_sk_new_null();
         *(long*)&ssl[3].ex_data.dummy = lVar3;
         if (lVar3 == 0) {
            return 0;
         }
      }
      pXVar2 = X509_get_subject_name(x);
      pXVar2 = X509_NAME_dup(pXVar2);
      if (pXVar2 != (X509_NAME*)0x0) {
         iVar1 = OPENSSL_sk_push(*(undefined8*)&ssl[3].ex_data.dummy, pXVar2);
         if (iVar1 != 0) {
            return 1;
         }
         X509_NAME_free(pXVar2);
      }
   }
   return 0;
}int SSL_CTX_add_client_CA(SSL_CTX *ctx, X509 *x) {
   int iVar1;
   X509_NAME *pXVar2;
   cert_st *pcVar3;
   if (x == (X509*)0x0) {
      return 0;
   }
   if (ctx->cert == (cert_st*)0x0) {
      pcVar3 = (cert_st*)OPENSSL_sk_new_null();
      ctx->cert = pcVar3;
      if (pcVar3 == (cert_st*)0x0) {
         return 0;
      }
   }
   pXVar2 = X509_get_subject_name(x);
   pXVar2 = X509_NAME_dup(pXVar2);
   if (pXVar2 == (X509_NAME*)0x0) {
      return 0;
   }
   iVar1 = OPENSSL_sk_push(ctx->cert, pXVar2);
   if (iVar1 == 0) {
      X509_NAME_free(pXVar2);
      return 0;
   }
   return 1;
}long SSL_load_client_CA_file_ex(void *param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   BIO_METHOD *type;
   BIO *bp;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   X509 *pXVar5;
   X509_NAME *pXVar6;
   long lVar7;
   long in_FS_OFFSET;
   X509 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   type = BIO_s_file();
   bp = BIO_new(type);
   local_48 = (X509*)0x0;
   uVar2 = OPENSSL_LH_new(xname_hash, xname_cmp);
   lVar3 = OPENSSL_LH_set_thunks(uVar2, 0x100000, lh_X509_NAME_cfn_thunk, lh_X509_NAME_doall_thunk, lh_X509_NAME_doall_arg_thunk);
   if (param_1 == (void*)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x2f9, "SSL_load_client_CA_file_ex");
      uVar2 = 0xc0102;
      LAB_00101b4b:ERR_set_error(0x14, uVar2, 0);
   } else {
      if (lVar3 == 0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_cert.c", 0x2fd, "SSL_load_client_CA_file_ex");
         uVar2 = 0x8000f;
         goto LAB_00101b4b;
      }
      if (bp == (BIO*)0x0) {
         ERR_new();
         ERR_set_debug("ssl/ssl_cert.c", 0x301, "SSL_load_client_CA_file_ex");
         ERR_set_error(0x14, 0x80020, 0);
      } else {
         local_48 = (X509*)X509_new_ex(param_2, param_3);
         if (local_48 == (X509*)0x0) {
            ERR_new();
            ERR_set_debug("ssl/ssl_cert.c", 0x307, "SSL_load_client_CA_file_ex");
            ERR_set_error(0x14, 0x8000b, 0);
         } else {
            lVar4 = BIO_ctrl(bp, 0x6c, 3, param_1);
            if (0 < (int)lVar4) {
               lVar4 = 0;
               uVar2 = OSSL_LIB_CTX_set0_default(param_2);
               pXVar6 = (X509_NAME*)0x0;
               do {
                  while (true) {
                     pXVar5 = PEM_read_bio_X509(bp, &local_48, (undefined1*)0x0, (void*)0x0);
                     if (pXVar5 == (X509*)0x0) {
                        OSSL_LIB_CTX_set0_default(uVar2);
                        BIO_free(bp);
                        X509_free(local_48);
                        OPENSSL_LH_free(lVar3);
                        if (lVar4 != 0) {
                           ERR_clear_error();
                        }
                        goto LAB_00101a92;
                     }
                     if (( lVar4 == 0 ) && ( lVar4 = lVar4 == 0 )) {
                        ERR_new();
                        ERR_set_debug("ssl/ssl_cert.c", 0x315, "SSL_load_client_CA_file_ex");
                        ERR_set_error(0x14, 0x8000f, 0);
                        goto LAB_00101a58;
                     }
                     pXVar6 = X509_get_subject_name(local_48);
                     if (( pXVar6 == (X509_NAME*)0x0 ) || ( pXVar6 = X509_NAME_dup(pXVar6) ),pXVar6 == (X509_NAME*)0x0) {
                        pXVar6 = (X509_NAME*)0x0;
                        goto LAB_00101a58;
                     }
                     lVar7 = OPENSSL_LH_retrieve(lVar3, pXVar6);
                     if (lVar7 == 0) break;
                     X509_NAME_free(pXVar6);
                     pXVar6 = (X509_NAME*)0x0;
                  };
                  OPENSSL_LH_insert(lVar3, pXVar6);
                  iVar1 = OPENSSL_sk_push(lVar4, pXVar6);
               } while ( iVar1 != 0 );
               goto LAB_00101a58;
            }
         }
      }
   }
   uVar2 = 0;
   lVar4 = 0;
   pXVar6 = (X509_NAME*)0x0;
   LAB_00101a58:X509_NAME_free(pXVar6);
   OPENSSL_sk_pop_free(lVar4, X509_NAME_free);
   OSSL_LIB_CTX_set0_default(uVar2);
   BIO_free(bp);
   X509_free(local_48);
   OPENSSL_LH_free(lVar3);
   lVar4 = 0;
   LAB_00101a92:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar4;
}stack_st_X509_NAME *SSL_load_client_CA_file(char *file) {
   stack_st_X509_NAME *psVar1;
   psVar1 = (stack_st_X509_NAME*)SSL_load_client_CA_file_ex(file, 0, 0);
   return psVar1;
}int SSL_add_file_cert_subjects_to_stack(stack_st_X509_NAME *stackCAs, char *file) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   uVar2 = OPENSSL_LH_new(xname_hash, xname_cmp);
   lVar3 = OPENSSL_LH_set_thunks(uVar2, 0x100000, lh_X509_NAME_cfn_thunk, lh_X509_NAME_doall_thunk, lh_X509_NAME_doall_arg_thunk);
   if (file == (char*)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("ssl/ssl_cert.c", 0x37b, "SSL_add_file_cert_subjects_to_stack");
      ERR_set_error(0x14, 0xc0102, 0);
   } else if (lVar3 == 0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("ssl/ssl_cert.c", 0x380, "SSL_add_file_cert_subjects_to_stack");
      ERR_set_error(0x14, 0x8000f, 0);
   } else {
      iVar1 = OPENSSL_sk_num(stackCAs);
      if (0 < iVar1) {
         iVar4 = 0;
         do {
            iVar5 = iVar4 + 1;
            uVar2 = OPENSSL_sk_value(stackCAs, iVar4);
            OPENSSL_LH_insert(lVar3, uVar2);
            iVar4 = iVar5;
         } while ( iVar1 != iVar5 );
      }
      iVar1 = add_file_cert_subjects_to_stack(stackCAs, file, lVar3);
   }
   OPENSSL_LH_free(lVar3);
   return iVar1;
}int SSL_add_dir_cert_subjects_to_stack(stack_st_X509_NAME *stackCAs, char *dir) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   size_t sVar5;
   size_t sVar6;
   char *__s;
   int *piVar7;
   int iVar8;
   long in_FS_OFFSET;
   long local_4e0;
   stat local_4d8;
   char local_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4e0 = 0;
   uVar3 = OPENSSL_LH_new(xname_hash, xname_cmp);
   lVar4 = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_X509_NAME_cfn_thunk, lh_X509_NAME_doall_thunk, lh_X509_NAME_doall_arg_thunk);
   if (lVar4 == 0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_cert.c", 0x3a6, "SSL_add_dir_cert_subjects_to_stack");
      ERR_set_error(0x14, 0x8000f, 0);
   } else {
      iVar1 = OPENSSL_sk_num(stackCAs);
      if (0 < iVar1) {
         iVar2 = 0;
         do {
            iVar8 = iVar2 + 1;
            uVar3 = OPENSSL_sk_value(stackCAs, iVar2);
            OPENSSL_LH_insert(lVar4, uVar3);
            iVar2 = iVar8;
         } while ( iVar1 != iVar8 );
      }
      do {
         do {
            __s = (char*)OPENSSL_DIR_read(&local_4e0, dir);
            if (__s == (char*)0x0) {
               piVar7 = __errno_location();
               iVar1 = 1;
               if (*piVar7 == 0) goto LAB_00101f12;
               ERR_new();
               ERR_set_debug("ssl/ssl_cert.c", 0x3d6, "SSL_add_dir_cert_subjects_to_stack");
               ERR_set_error(2, *piVar7, "calling OPENSSL_dir_read(%s)", dir);
               ERR_new();
               ERR_set_debug("ssl/ssl_cert.c", 0x3d8, "SSL_add_dir_cert_subjects_to_stack");
               ERR_set_error(0x14, 0x80002, 0);
               goto LAB_00101f10;
            }
            sVar5 = strlen(dir);
            sVar6 = strlen(__s);
            if (0x400 < sVar5 + 2 + sVar6) {
               ERR_new();
               ERR_set_debug("ssl/ssl_cert.c", 0x3c2, "SSL_add_dir_cert_subjects_to_stack");
               ERR_set_error(0x14, 0x10e, 0);
               goto LAB_00101f10;
            }
            iVar1 = BIO_snprintf(local_448, 0x400, "%s/%s", dir, __s);
            iVar2 = stat(local_448, &local_4d8);
         } while ( ( iVar2 == 0 ) && ( ( local_4d8.st_mode & 0xf000 ) == 0x4000 ) );
         if (0x3fe < iVar1 - 1U) break;
         iVar1 = add_file_cert_subjects_to_stack(stackCAs, local_448, lVar4);
      } while ( iVar1 != 0 );
   }
   LAB_00101f10:iVar1 = 0;
   LAB_00101f12:if (local_4e0 != 0) {
      OPENSSL_DIR_end(&local_4e0);
   }
   OPENSSL_LH_free(lVar4);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 SSL_add_store_cert_subjects_to_stack(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   X509 *pXVar7;
   X509_NAME *pXVar8;
   undefined8 uVar9;
   uVar2 = OPENSSL_sk_set_cmp_func(param_1, xname_sk_cmp);
   lVar3 = OSSL_STORE_open(param_2, 0, 0, 0, 0);
   if (lVar3 == 0) {
      uVar9 = 0;
      OSSL_STORE_INFO_free(0);
      LAB_00102082:OSSL_STORE_close(lVar3);
      OPENSSL_sk_set_cmp_func(param_1, uVar2);
      return uVar9;
   }
   uVar9 = 1;
   do {
      iVar1 = OSSL_STORE_eof(lVar3);
      while (true) {
         if (( iVar1 != 0 ) || ( iVar1 = iVar1 != 0 )) {
            ERR_clear_error();
            goto LAB_00102082;
         }
         lVar4 = OSSL_STORE_load(lVar3);
         if (lVar4 == 0) break;
         iVar1 = OSSL_STORE_INFO_get_type(lVar4);
         if (iVar1 == 1) {
            uVar9 = OSSL_STORE_INFO_get0_NAME(lVar4);
            lVar5 = OSSL_STORE_open(uVar9, 0, 0, 0, 0);
            if (lVar5 != 0) {
               do {
                  iVar1 = OSSL_STORE_eof(lVar5);
                  while (true) {
                     if (( iVar1 != 0 ) || ( iVar1 = iVar1 != 0 )) {
                        ERR_clear_error();
                        uVar9 = 1;
                        goto LAB_00102128;
                     }
                     lVar6 = OSSL_STORE_load(lVar5);
                     if (lVar6 == 0) break;
                     iVar1 = OSSL_STORE_INFO_get_type(lVar6);
                     if (iVar1 == 5) {
                        pXVar7 = (X509*)OSSL_STORE_INFO_get0_CERT(lVar6);
                        if (( ( pXVar7 == (X509*)0x0 ) || ( pXVar8 = X509_get_subject_name(pXVar7) ),pXVar8 == (X509_NAME*)0x0 )) {
                           LAB_00102200:uVar9 = 0;
                           OSSL_STORE_INFO_free(lVar6);
                           goto LAB_00102128;
                        }
                        iVar1 = OPENSSL_sk_find(param_1);
                        if (iVar1 < 0) {
                           iVar1 = OPENSSL_sk_push(param_1);
                           if (iVar1 == 0) {
                              X509_NAME_free(pXVar8);
                              goto LAB_00102200;
                           }
                        } else {
                           X509_NAME_free(pXVar8);
                        }
                     }
                     OSSL_STORE_INFO_free(lVar6);
                     iVar1 = OSSL_STORE_eof(lVar5);
                  };
               } while ( true );
            }
            uVar9 = 0;
            OSSL_STORE_INFO_free(0);
            LAB_00102128:OSSL_STORE_close(lVar5);
         } else if (iVar1 == 5) {
            pXVar7 = (X509*)OSSL_STORE_INFO_get0_CERT(lVar4);
            if (( ( pXVar7 == (X509*)0x0 ) || ( pXVar8 = X509_get_subject_name(pXVar7) ),pXVar8 == (X509_NAME*)0x0 )) {
               LAB_0010222b:uVar9 = 0;
               OSSL_STORE_INFO_free(lVar4);
               goto LAB_00102082;
            }
            iVar1 = OPENSSL_sk_find(param_1);
            if (iVar1 < 0) {
               iVar1 = OPENSSL_sk_push(param_1);
               if (iVar1 == 0) {
                  X509_NAME_free(pXVar8);
                  goto LAB_0010222b;
               }
            } else {
               X509_NAME_free(pXVar8);
            }
         }
         OSSL_STORE_INFO_free(lVar4);
         iVar1 = OSSL_STORE_eof(lVar3);
      };
   } while ( true );
}int ssl_build_cert_chain(long param_1, undefined8 *param_2, uint param_3) {
   int iVar1;
   int iVar2;
   stack_st_X509 *psVar3;
   X509 *pXVar4;
   undefined8 uVar5;
   X509_STORE *ctx;
   ulong uVar6;
   char *pcVar7;
   undefined8 *puVar8;
   int iVar9;
   undefined8 *puVar10;
   long *plVar11;
   X509_STORE_CTX *local_48;
   if (param_1 == 0) {
      puVar8 = (undefined8*)param_2[0x2b];
      plVar11 = (long*)*puVar8;
      puVar10 = param_2;
   } else {
      puVar8 = *(undefined8**)( param_1 + 0x880 );
      plVar11 = (long*)*puVar8;
      puVar10 = *(undefined8**)( param_1 + 8 );
   }
   if (*plVar11 == 0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("ssl/ssl_cert.c", 0x437, "ssl_build_cert_chain");
      ERR_set_error(0x14, 0xb3, 0);
      local_48 = (X509_STORE_CTX*)0x0;
      ctx = (X509_STORE*)0x0;
      LAB_001023d8:if (( param_3 & 4 ) == 0) goto LAB_001023e4;
   } else {
      if (( param_3 & 4 ) == 0) {
         ctx = (X509_STORE*)puVar8[0xe];
         if (ctx == (X509_STORE*)0x0) {
            ctx = (X509_STORE*)puVar10[5];
         }
         psVar3 = (stack_st_X509*)0x0;
         if (( param_3 & 1 ) != 0) {
            psVar3 = (stack_st_X509*)plVar11[2];
         }
         LAB_001022e0:local_48 = (X509_STORE_CTX*)X509_STORE_CTX_new_ex(*puVar10, puVar10[0x8e]);
         if (local_48 == (X509_STORE_CTX*)0x0) {
            ERR_new();
            iVar1 = 0;
            ERR_set_debug("ssl/ssl_cert.c", 0x453, "ssl_build_cert_chain");
            ERR_set_error(0x14, 0x8000b, 0);
         } else {
            iVar1 = X509_STORE_CTX_init(local_48, ctx, (X509*)*plVar11, psVar3);
            if (iVar1 == 0) {
               ERR_new();
               iVar1 = 0;
               ERR_set_debug("ssl/ssl_cert.c", 0x457, "ssl_build_cert_chain");
               ERR_set_error(0x14, 0x8000b, 0);
            } else {
               X509_STORE_CTX_set_flags(local_48, ( ulong )(*(uint*)( (long)puVar8 + 0x1c ) & 0x30000));
               iVar1 = X509_verify_cert(local_48);
               if (iVar1 < 1) {
                  if (( param_3 & 8 ) == 0) {
                     iVar9 = X509_STORE_CTX_get_error(local_48);
                     ERR_new();
                     ERR_set_debug("ssl/ssl_cert.c", 0x469, "ssl_build_cert_chain");
                     iVar1 = 0;
                     pcVar7 = X509_verify_cert_error_string((long)iVar9);
                     ERR_set_error(0x14, 0x86, "Verify error:%s", pcVar7);
                     goto LAB_001023d8;
                  }
                  if (( param_3 & 0x10 ) != 0) {
                     ERR_clear_error();
                  }
                  iVar1 = 2;
               } else {
                  iVar1 = 0;
               }
               psVar3 = X509_STORE_CTX_get1_chain(local_48);
               pXVar4 = (X509*)OPENSSL_sk_shift(psVar3);
               X509_free(pXVar4);
               if (( ( param_3 & 2 ) != 0 ) && ( iVar9= OPENSSL_sk_num(psVar3),0 < iVar9 )) {
                  iVar9 = OPENSSL_sk_num(psVar3);
                  uVar5 = OPENSSL_sk_value(psVar3, iVar9 + -1);
                  uVar6 = X509_get_extension_flags(uVar5);
                  if (( uVar6 & 0x2000 ) != 0) {
                     pXVar4 = (X509*)OPENSSL_sk_pop(psVar3);
                     X509_free(pXVar4);
                  }
               }
               for (iVar9 = 0; iVar2 = OPENSSL_sk_num(psVar3),iVar9 < iVar2; iVar9 = iVar9 + 1) {
                  uVar5 = OPENSSL_sk_value(psVar3, iVar9);
                  iVar2 = ssl_security_cert(param_1, param_2, uVar5, 0, 0);
                  if (iVar2 != 1) {
                     ERR_new();
                     ERR_set_debug("ssl/ssl_cert.c", 0x483, "ssl_build_cert_chain");
                     iVar1 = 0;
                     ERR_set_error(0x14, iVar2, 0);
                     OSSL_STACK_OF_X509_free(psVar3);
                     goto LAB_001023d8;
                  }
                  iVar1 = 1;
               }
               OSSL_STACK_OF_X509_free(plVar11[2]);
               plVar11[2] = (long)psVar3;
               if (iVar1 == 0) {
                  iVar1 = 1;
               }
            }
         }
         goto LAB_001023d8;
      }
      ctx = X509_STORE_new();
      if (ctx != (X509_STORE*)0x0) {
         for (iVar1 = 0; iVar9 = OPENSSL_sk_num(plVar11[2]),iVar1 < iVar9; iVar1 = iVar1 + 1) {
            pXVar4 = (X509*)OPENSSL_sk_value(plVar11[2], iVar1);
            iVar9 = X509_STORE_add_cert(ctx, pXVar4);
            if (iVar9 == 0) goto LAB_00102480;
         }
         psVar3 = (stack_st_X509*)0x0;
         iVar1 = X509_STORE_add_cert(ctx, (X509*)*plVar11);
         if (iVar1 != 0) goto LAB_001022e0;
      }
      LAB_00102480:local_48 = (X509_STORE_CTX*)0x0;
      iVar1 = 0;
   }
   X509_STORE_free(ctx);
   LAB_001023e4:X509_STORE_CTX_free(local_48);
   return iVar1;
}undefined8 ssl_cert_set_cert_store(long param_1, long param_2, int param_3, int param_4) {
   undefined8 uVar1;
   X509_STORE *v;
   long *plVar2;
   if (( ( param_4 != 0 ) && ( param_2 != 0 ) ) && ( uVar1 = X509_STORE_up_ref(param_2) ),(int)uVar1 == 0) {
      return uVar1;
   }
   if (param_3 == 0) {
      v = *(X509_STORE**)( param_1 + 0x78 );
      plVar2 = (long*)( param_1 + 0x78 );
   } else {
      v = *(X509_STORE**)( param_1 + 0x70 );
      plVar2 = (long*)( param_1 + 0x70 );
   }
   X509_STORE_free(v);
   *plVar2 = param_2;
   return 1;
}undefined8 ssl_cert_get_cert_store(long param_1, undefined8 *param_2, int param_3) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x78 );
   if (param_3 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0x70 );
   }
   *param_2 = uVar1;
   return 1;
}undefined4 ssl_get_security_level_bits(undefined8 param_1, long param_2, int *param_3) {
   int iVar1;
   if (param_2 == 0) {
      iVar1 = SSL_get_security_level();
   } else {
      iVar1 = SSL_CTX_get_security_level(param_2);
   }
   if (iVar1 < 0) {
      iVar1 = 0;
   }
   if (5 < iVar1) {
      iVar1 = 5;
   }
   if (param_3 != (int*)0x0) {
      *param_3 = iVar1;
   }
   return *(undefined4*)( minbits_table_0 + (long)iVar1 * 4 );
}bool ssl_security_default_callback(uint *param_1, undefined8 param_2, int param_3, int param_4, int param_5, long param_6) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ssl_get_security_level_bits(param_1, param_2, &local_34);
   if (local_34 == 0) {
      bVar2 = param_3 != 0x40007 || 0x4f < param_4;
      goto LAB_001027ca;
   }
   if (param_3 == 0xf) {
      bVar2 = local_34 < 2;
      goto LAB_001027ca;
   }
   if (param_3 < 0x10) {
      if (param_3 == 9) {
         if (param_1 != (uint*)0x0) {
            if (*param_1 == 0) {
               LAB_0010284c:if (( *(byte*)( *(long*)( *(long*)( param_1 + 6 ) + 0xd8 ) + 0x50 ) & 8 ) == 0) {
                  if (param_5 < 0x303) goto LAB_0010290d;
               } else if (( param_5 == 0x100 ) || ( 0xfefd < param_5 )) {
                  LAB_0010290d:bVar2 = local_34 < 1;
                  goto LAB_001027ca;
               }
               LAB_0010287b:bVar2 = true;
               goto LAB_001027ca;
            }
            if (( *param_1 & 0x80 ) != 0) {
               param_1 = (uint*)ossl_quic_obj_get0_handshake_layer(param_1);
               if (param_1 != (uint*)0x0) goto LAB_0010284c;
            }
         }
         LAB_001028e0:bVar2 = false;
         goto LAB_001027ca;
      }
      bVar2 = local_34 < 3;
      if (param_3 == 10) goto LAB_001027ca;
   } else if (param_3 - 0x10001U < 3) {
      if (( ( ( param_4 < iVar1 ) || ( ( *(byte*)( param_6 + 0x20 ) & 4 ) != 0 ) ) || ( ( *(uint*)( param_6 + 0x28 ) & 1 ) != 0 ) ) || ( ( 0xa0 < iVar1 && ( ( *(uint*)( param_6 + 0x28 ) & 2 ) != 0 ) ) )) goto LAB_001028e0;
      if (( 2 < local_34 ) && ( *(int*)( param_6 + 0x2c ) != 0x304 )) {
         bVar2 = ( *(uint*)( param_6 + 0x1c ) & 0x186 ) != 0;
         goto LAB_001027ca;
      }
      goto LAB_0010287b;
   }
   bVar2 = iVar1 <= param_4;
   LAB_001027ca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ssl_security(long param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5) {
   ( **(code**)( *(long*)( param_1 + 0x880 ) + 0x90 ) )(*(undefined8*)( param_1 + 0x40 ), 0, param_2, param_3, param_4, param_5, *(undefined8*)( *(long*)( param_1 + 0x880 ) + 0xa0 ));
   return;
}void ssl_ctx_security(long param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5) {
   ( **(code**)( *(long*)( param_1 + 0x158 ) + 0x90 ) )(0, param_1, param_2, param_3, param_4, param_5, *(undefined8*)( *(long*)( param_1 + 0x158 ) + 0xa0 ));
   return;
}undefined8 ssl_cert_lookup_by_nid(int param_1, long *param_2, long param_3) {
   long lVar1;
   if (param_1 == 6) {
      lVar1 = 0;
   } else if (param_1 == 0x390) {
      lVar1 = 1;
   } else if (param_1 == 0x74) {
      lVar1 = 2;
   } else if (param_1 == 0x198) {
      lVar1 = 3;
   } else if (param_1 == 0x32b) {
      lVar1 = 4;
   } else if (param_1 == 0x3d3) {
      lVar1 = 5;
   } else if (param_1 == 0x3d4) {
      lVar1 = 6;
   } else if (param_1 == 0x43f) {
      lVar1 = 7;
   } else {
      lVar1 = 8;
      if (param_1 != 0x440) {
         if (*(long*)( param_3 + 0x690 ) != 0) {
            lVar1 = 0;
            do {
               if (*(int*)( *(long*)( param_3 + 0x160 ) + lVar1 * 8 ) == param_1) {
                  lVar1 = lVar1 + 9;
                  goto LAB_00102a12;
               }
               lVar1 = lVar1 + 1;
            } while ( *(long*)( param_3 + 0x690 ) != lVar1 );
         }
         return 0;
      }
   }
   LAB_00102a12:*param_2 = lVar1;
   return 1;
}int *ssl_cert_lookup_by_pkey(undefined8 param_1, long *param_2, long param_3) {
   int iVar1;
   int iVar2;
   char *pcVar3;
   int *piVar4;
   ulong uVar5;
   long lVar6;
   lVar6 = 0;
   piVar4 = &ssl_cert_info;
   do {
      iVar2 = *piVar4;
      pcVar3 = OBJ_nid2sn(iVar2);
      iVar1 = EVP_PKEY_is_a(param_1, pcVar3);
      if (iVar1 != 0) {
         LAB_00102b70:if (param_2 == (long*)0x0) {
            return piVar4;
         }
         *param_2 = lVar6;
         return piVar4;
      }
      pcVar3 = OBJ_nid2ln(iVar2);
      iVar2 = EVP_PKEY_is_a(param_1, pcVar3);
      if (iVar2 != 0) goto LAB_00102b70;
      lVar6 = lVar6 + 1;
      piVar4 = piVar4 + 2;
   } while ( lVar6 != 9 );
   uVar5 = 0;
   if (*(long*)( param_3 + 0x690 ) != 0) {
      do {
         piVar4 = (int*)( *(long*)( param_3 + 0x160 ) + uVar5 * 8 );
         pcVar3 = OBJ_nid2sn(*piVar4);
         iVar2 = EVP_PKEY_is_a(param_1, pcVar3);
         if (iVar2 != 0) {
            LAB_00102b3d:if (param_2 != (long*)0x0) {
               *param_2 = uVar5 + 9;
            }
            return (int*)( uVar5 * 8 + *(long*)( param_3 + 0x160 ) );
         }
         pcVar3 = OBJ_nid2ln(*piVar4);
         iVar2 = EVP_PKEY_is_a(param_1, pcVar3);
         if (iVar2 != 0) goto LAB_00102b3d;
         uVar5 = uVar5 + 1;
      } while ( uVar5 < *(ulong*)( param_3 + 0x690 ) );
   }
   return (int*)0x0;
}undefined4 *ssl_cert_lookup_by_idx(ulong param_1, long param_2) {
   if (*(long*)( param_2 + 0x690 ) + 9U <= param_1) {
      return (undefined4*)0x0;
   }
   if (param_1 < 9) {
      return &ssl_cert_info + param_1 * 2;
   }
   return (undefined4*)( *(long*)( param_2 + 0x160 ) + -0x48 + param_1 * 8 );
}

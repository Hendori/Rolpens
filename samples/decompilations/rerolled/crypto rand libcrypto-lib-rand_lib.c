void random_conf_deinit(void) {
   return;
}void do_rand_init_ossl_(void) {
   int iVar1;
   rand_engine_lock = CRYPTO_THREAD_lock_new();
   if (rand_engine_lock != 0) {
      rand_meth_lock = CRYPTO_THREAD_lock_new();
      if (( rand_meth_lock != 0 ) && ( iVar1 = iVar1 != 0 )) {
         rand_inited = 1;
         do_rand_init_ossl_ret_ = 1;
         return;
      }
      CRYPTO_THREAD_lock_free(rand_meth_lock);
      rand_meth_lock = 0;
      CRYPTO_THREAD_lock_free(rand_engine_lock);
      rand_engine_lock = 0;
   }
   do_rand_init_ossl_ret_ = 0;
   return;
}void rand_delete_thread_state(undefined8 param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar1 != 0) {
      uVar2 = CRYPTO_THREAD_get_local(lVar1 + 0x28);
      CRYPTO_THREAD_set_local(lVar1 + 0x28, 0);
      EVP_RAND_CTX_free(uVar2);
      uVar2 = CRYPTO_THREAD_get_local(lVar1 + 0x2c);
      CRYPTO_THREAD_set_local(lVar1 + 0x2c, 0);
      EVP_RAND_CTX_free(uVar2);
      return;
   }
   return;
}long rand_new_drbg(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   undefined8 *local_208;
   undefined8 local_1f8;
   undefined8 uStack_1f0;
   undefined8 local_1e8;
   undefined8 uStack_1e0;
   undefined8 local_1d8;
   undefined8 local_1c8;
   undefined4 local_1bc[4];
   undefined4 local_1ac;
   undefined8 local_1a8[5];
   undefined8 local_180[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c8 = param_4;
   local_1bc[0] = param_3;
   lVar2 = ossl_lib_ctx_get_data(param_1, 5);
   local_1ac = 1;
   if (lVar2 != 0) {
      pcVar7 = *(char**)( lVar2 + 0x30 );
      if (pcVar7 == (char*)0x0) {
         pcVar7 = "CTR-DRBG";
      }
      lVar3 = EVP_RAND_fetch(param_1, pcVar7, *(undefined8*)( lVar2 + 0x48 ));
      if (lVar3 != 0) {
         uVar4 = EVP_RAND_get0_provider(lVar3);
         lVar5 = ossl_provider_name(uVar4);
         lVar6 = EVP_RAND_CTX_new(lVar3, param_2);
         EVP_RAND_free(lVar3);
         if (lVar6 == 0) {
            ERR_new();
            lVar2 = 0;
            ERR_set_debug("crypto/rand/rand_lib.c", 0x2af, "rand_new_drbg");
            ERR_set_error(0x24, 0x8f, 0);
         } else {
            uVar4 = EVP_RAND_CTX_settable_params(lVar6);
            lVar3 = OSSL_PARAM_locate_const(uVar4, "cipher");
            if (lVar3 == 0) {
               puVar9 = local_1a8;
               lVar3 = *(long*)( lVar2 + 0x40 );
            } else {
               pcVar7 = *(char**)( lVar2 + 0x38 );
               if (pcVar7 == (char*)0x0) {
                  pcVar7 = "AES-256-CTR";
               }
               OSSL_PARAM_construct_utf8_string(&local_1f8, "cipher", pcVar7, 0);
               puVar9 = local_180;
               lVar3 = *(long*)( lVar2 + 0x40 );
            }
            if (lVar3 != 0) {
               lVar3 = OSSL_PARAM_locate_const(uVar4, "digest");
               if (lVar3 != 0) {
                  OSSL_PARAM_construct_utf8_string(&local_1f8, "digest", *(undefined8*)( lVar2 + 0x40 ), 0);
                  *puVar9 = local_1f8;
                  puVar9[1] = uStack_1f0;
                  puVar9[2] = local_1e8;
                  puVar9[3] = uStack_1e0;
                  puVar9[4] = local_1d8;
                  puVar9 = puVar9 + 5;
               }
            }
            local_208 = local_1a8;
            puVar8 = puVar9;
            if (lVar5 != 0) {
               puVar8 = puVar9 + 5;
               OSSL_PARAM_construct_utf8_string(&local_1f8, "provider-name", lVar5, 0);
               *puVar9 = local_1f8;
               puVar9[1] = uStack_1f0;
               puVar9[2] = local_1e8;
               puVar9[3] = uStack_1e0;
               puVar9[4] = local_1d8;
            }
            puVar9 = puVar8;
            if (*(long*)( lVar2 + 0x48 ) != 0) {
               puVar9 = puVar8 + 5;
               OSSL_PARAM_construct_utf8_string(&local_1f8, "properties", *(long*)( lVar2 + 0x48 ), 0);
               *puVar8 = local_1f8;
               puVar8[1] = uStack_1f0;
               puVar8[2] = local_1e8;
               puVar8[3] = uStack_1e0;
               puVar8[4] = local_1d8;
            }
            lVar2 = OSSL_PARAM_locate_const(uVar4, &_LC7);
            puVar8 = puVar9;
            if (lVar2 != 0) {
               OSSL_PARAM_construct_utf8_string(&local_1f8, &_LC7, &_LC8, 0);
               puVar8 = puVar9 + 5;
               *puVar9 = local_1f8;
               puVar9[1] = uStack_1f0;
               puVar9[2] = local_1e8;
               puVar9[3] = uStack_1e0;
               puVar9[4] = local_1d8;
            }
            lVar2 = OSSL_PARAM_locate_const(uVar4, "use_derivation_function");
            puVar9 = puVar8;
            if (lVar2 != 0) {
               puVar9 = puVar8 + 5;
               OSSL_PARAM_construct_int(&local_1f8, "use_derivation_function", &local_1ac);
               *puVar8 = local_1f8;
               puVar8[1] = uStack_1f0;
               puVar8[2] = local_1e8;
               puVar8[3] = uStack_1e0;
               puVar8[4] = local_1d8;
            }
            OSSL_PARAM_construct_uint(&local_1f8, "reseed_requests", local_1bc);
            *puVar9 = local_1f8;
            puVar9[1] = uStack_1f0;
            puVar9[2] = local_1e8;
            puVar9[3] = uStack_1e0;
            puVar9[4] = local_1d8;
            OSSL_PARAM_construct_time_t(&local_1f8, "reseed_time_interval", &local_1c8);
            puVar9[5] = local_1f8;
            puVar9[6] = uStack_1f0;
            puVar9[7] = local_1e8;
            puVar9[8] = uStack_1e0;
            puVar9[9] = local_1d8;
            OSSL_PARAM_construct_end(&local_1f8);
            puVar9[10] = local_1f8;
            puVar9[0xb] = uStack_1f0;
            puVar9[0xc] = local_1e8;
            puVar9[0xd] = uStack_1e0;
            puVar9[0xe] = local_1d8;
            iVar1 = EVP_RAND_instantiate(lVar6, 0, 0, 0, 0, local_208);
            lVar2 = lVar6;
            if (iVar1 == 0) {
               ERR_new();
               ERR_set_debug("crypto/rand/rand_lib.c", 0x2cd, "rand_new_drbg");
               ERR_set_error(0x24, 0x6c, 0);
               lVar2 = 0;
               EVP_RAND_CTX_free(lVar6);
            }
         }
         goto LAB_00100472;
      }
      ERR_new();
      ERR_set_debug("crypto/rand/rand_lib.c", 0x2a8, "rand_new_drbg");
      ERR_set_error(0x24, 0x90, 0);
   }
   lVar2 = 0;
   LAB_00100472:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}long rand_get0_primary(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   if (param_2 == (undefined8*)0x0) {
      return 0;
   }
   iVar1 = CRYPTO_THREAD_read_lock(*param_2);
   if (iVar1 == 0) {
      return 0;
   }
   lVar2 = param_2[2];
   CRYPTO_THREAD_unlock(*param_2);
   if (lVar2 != 0) {
      return lVar2;
   }
   iVar1 = CRYPTO_THREAD_write_lock(*param_2);
   if (iVar1 == 0) {
      return 0;
   }
   lVar2 = param_2[2];
   if (lVar2 != 0) goto LAB_0010066e;
   lVar2 = param_2[1];
   if (lVar2 == 0) {
      ERR_set_mark();
      lVar2 = ossl_lib_ctx_get_data(param_1, 5);
      if (lVar2 == 0) {
         LAB_0010074b:lVar3 = 0;
      } else {
         pcVar4 = *(char**)( lVar2 + 0x50 );
         if (pcVar4 == (char*)0x0) {
            pcVar4 = "SEED-SRC";
         }
         lVar2 = EVP_RAND_fetch(param_1, pcVar4, *(undefined8*)( lVar2 + 0x58 ));
         if (lVar2 == 0) {
            ERR_new();
            ERR_set_debug("crypto/rand/rand_lib.c", 0x271, "rand_new_seed");
            ERR_set_error(0x24, 0x90, 0);
            LAB_00100741:lVar3 = 0;
            LAB_00100743:EVP_RAND_CTX_free(lVar3);
            goto LAB_0010074b;
         }
         lVar3 = EVP_RAND_CTX_new(lVar2, 0);
         EVP_RAND_free(lVar2);
         if (lVar3 == 0) {
            ERR_new();
            ERR_set_debug("crypto/rand/rand_lib.c", 0x277, "rand_new_seed");
            ERR_set_error(0x24, 0x8f, 0);
            goto LAB_00100741;
         }
         iVar1 = EVP_RAND_instantiate(lVar3, 0, 0, 0, 0, 0);
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/rand/rand_lib.c", 0x27b, "rand_new_seed");
            ERR_set_error(0x24, 0x6c, 0);
            goto LAB_00100743;
         }
      }
      param_2[1] = lVar3;
      ERR_pop_to_mark();
      lVar2 = param_2[1];
   }
   lVar2 = rand_new_drbg(param_1, lVar2, 0x100, 0xe10);
   param_2[2] = lVar2;
   if (lVar2 != 0) {
      iVar1 = EVP_RAND_enable_locking(lVar2);
      if (iVar1 != 0) goto LAB_0010066e;
      ERR_new();
      ERR_set_debug("crypto/rand/rand_lib.c", 0x324, "rand_get0_primary");
      ERR_set_error(6, 0xd4, 0);
      EVP_RAND_CTX_free(lVar2);
      param_2[2] = 0;
   }
   lVar2 = 0;
   LAB_0010066e:CRYPTO_THREAD_unlock(*param_2);
   return lVar2;
}void RAND_keep_random_devices_open(undefined4 param_1) {
   int iVar1;
   iVar1 = CRYPTO_THREAD_run_once(&rand_init, do_rand_init_ossl_);
   if (( iVar1 != 0 ) && ( do_rand_init_ossl_ret_ != 0 )) {
      ossl_rand_pool_keep_random_devices_open(param_1);
      return;
   }
   return;
}int RAND_set_rand_method(RAND_METHOD *meth) {
   int iVar1;
   iVar1 = CRYPTO_THREAD_run_once(&rand_init, do_rand_init_ossl_);
   if (( iVar1 != 0 ) && ( do_rand_init_ossl_ret_ != 0 )) {
      iVar1 = CRYPTO_THREAD_write_lock(rand_meth_lock);
      if (iVar1 != 0) {
         ENGINE_finish(funct_ref);
         funct_ref = (ENGINE*)0x0;
         default_RAND_meth = meth;
         CRYPTO_THREAD_unlock(rand_meth_lock);
         return 1;
      }
   }
   return 0;
}void ossl_rand_cleanup_int(void) {
   if (rand_inited != 0) {
      if (( default_RAND_meth != 0 ) && ( *(code**)( default_RAND_meth + 0x10 ) != (code*)0x0 )) {
         ( **(code**)( default_RAND_meth + 0x10 ) )();
      }
      RAND_set_rand_method((RAND_METHOD*)0x0);
      ossl_rand_pool_cleanup();
      CRYPTO_THREAD_lock_free(rand_engine_lock);
      rand_engine_lock = 0;
      CRYPTO_THREAD_lock_free(rand_meth_lock);
      rand_meth_lock = 0;
      ossl_release_default_drbg_ctx();
      rand_inited = 0;
      return;
   }
   return;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */RAND_METHOD *RAND_get_rand_method(void) {
   int iVar1;
   ENGINE *e;
   RAND_METHOD *pRVar2;
   iVar1 = CRYPTO_THREAD_run_once(&rand_init, do_rand_init_ossl_);
   if (( ( iVar1 != 0 ) && ( do_rand_init_ossl_ret_ != 0 ) ) && ( iVar1 = CRYPTO_THREAD_read_lock(rand_meth_lock) ),pRVar2 = default_RAND_meth,iVar1 != 0) {
      CRYPTO_THREAD_unlock(rand_meth_lock);
      if (pRVar2 != (RAND_METHOD*)0x0) {
         return pRVar2;
      }
      iVar1 = CRYPTO_THREAD_write_lock(rand_meth_lock);
      if (iVar1 != 0) {
         pRVar2 = default_RAND_meth;
         e = funct_ref;
         if (( default_RAND_meth == (RAND_METHOD*)0x0 ) && ( ( e = ENGINE_get_default_RAND() ),e == (ENGINE*)0x0 || ( pRVar2 = ENGINE_get_RAND(e) ),pRVar2 == (RAND_METHOD*)0x0 )) {
            ENGINE_finish(e);
            default_RAND_meth = (RAND_METHOD*)&ossl_rand_meth;
            pRVar2 = default_RAND_meth;
            e = funct_ref;
         }
         funct_ref = e;
         default_RAND_meth = pRVar2;
         pRVar2 = default_RAND_meth;
         CRYPTO_THREAD_unlock(rand_meth_lock);
         return pRVar2;
      }
   }
   return (RAND_METHOD*)0x0;
}int RAND_set_rand_engine(ENGINE *engine) {
   int iVar1;
   RAND_METHOD *pRVar2;
   iVar1 = CRYPTO_THREAD_run_once(&rand_init, do_rand_init_ossl_);
   if (iVar1 == 0) {
      return 0;
   }
   if (do_rand_init_ossl_ret_ == 0) {
      return 0;
   }
   if (engine == (ENGINE*)0x0) {
      pRVar2 = (RAND_METHOD*)0x0;
   } else {
      iVar1 = ENGINE_init(engine);
      if (iVar1 == 0) {
         return 0;
      }
      pRVar2 = ENGINE_get_RAND(engine);
      if (pRVar2 == (RAND_METHOD*)0x0) goto LAB_00100ac0;
   }
   iVar1 = CRYPTO_THREAD_write_lock(rand_engine_lock);
   if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_run_once(&rand_init, do_rand_init_ossl_);
      if (( ( iVar1 != 0 ) && ( do_rand_init_ossl_ret_ != 0 ) ) && ( iVar1 = iVar1 != 0 )) {
         ENGINE_finish(funct_ref);
         default_RAND_meth = pRVar2;
         funct_ref = engine;
         CRYPTO_THREAD_unlock(rand_meth_lock);
      }
      CRYPTO_THREAD_unlock(rand_engine_lock);
      return 1;
   }
   LAB_00100ac0:ENGINE_finish(engine);
   return 0;
}int RAND_pseudo_bytes(uchar *buf, int num) {
   int iVar1;
   RAND_METHOD *pRVar2;
   pRVar2 = RAND_get_rand_method();
   if (( pRVar2 != (RAND_METHOD*)0x0 ) && ( pRVar2->pseudorand != (_func_3916*)0x0 )) {
      for (int i_725 = 0; i_725 < 2; i_725++) {
         /* WARNING: Could not recover jumptable at 0x00100b2d. Too many branches */
      }
      iVar1 = ( *pRVar2->pseudorand )(buf, num);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/rand/rand_lib.c", 399, "RAND_pseudo_bytes");
   ERR_set_error(0x24, 0x65, 0);
   return -1;
}int RAND_priv_bytes_ex(undefined8 param_1, uchar *param_2, undefined8 param_3, undefined4 param_4) {
   int iVar1;
   RAND_METHOD *pRVar2;
   RAND_METHOD *pRVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   pRVar2 = RAND_get_rand_method();
   if (( pRVar2 != (RAND_METHOD*)0x0 ) && ( pRVar3 = pRVar2 != pRVar3 )) {
      if (pRVar2->bytes == (_func_3913*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/rand/rand_lib.c", 0x1bc, "RAND_priv_bytes_ex");
         ERR_set_error(0x24, 0x65, 0);
         return -1;
      }
      for (int i_726 = 0; i_726 < 2; i_726++) {
         /* WARNING: Could not recover jumptable at 0x00100bc5. Too many branches */
      }
      iVar1 = ( *pRVar2->bytes )(param_2, (int)param_3);
      return iVar1;
   }
   lVar4 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar4 != 0) {
      if (*(long*)( lVar4 + 0x18 ) != 0) {
         iVar1 = ossl_provider_random_bytes(*(long*)( lVar4 + 0x18 ), 1, param_2, param_3, param_4);
         return iVar1;
      }
      lVar7 = CRYPTO_THREAD_get_local(lVar4 + 0x2c);
      if (lVar7 != 0) {
         LAB_00100cb5:iVar1 = EVP_RAND_generate(lVar7, param_2, param_3, param_4, 0, 0, 0);
         return iVar1;
      }
      lVar7 = rand_get0_primary(param_1, lVar4);
      if (( ( lVar7 != 0 ) && ( lVar5 = ossl_lib_ctx_get_concrete(param_1) ),lVar5 != 0 )) {
         lVar7 = rand_new_drbg(lVar5, lVar7, 0x10000, 0x1a4);
         CRYPTO_THREAD_set_local(lVar4 + 0x2c, lVar7);
         if (lVar7 != 0) goto LAB_00100cb5;
      }
   }
   return 0;
}undefined8 RAND_priv_bytes(undefined8 param_1, int param_2) {
   undefined8 uVar1;
   if (-1 < param_2) {
      uVar1 = RAND_priv_bytes_ex(0, param_1, (long)param_2, 0);
      return uVar1;
   }
   return 0;
}int RAND_bytes_ex(undefined8 param_1, uchar *param_2, undefined8 param_3, undefined4 param_4) {
   int iVar1;
   RAND_METHOD *pRVar2;
   RAND_METHOD *pRVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   pRVar2 = RAND_get_rand_method();
   if (( pRVar2 != (RAND_METHOD*)0x0 ) && ( pRVar3 = pRVar2 != pRVar3 )) {
      if (pRVar2->bytes == (_func_3913*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/rand/rand_lib.c", 0x1e3, "RAND_bytes_ex");
         ERR_set_error(0x24, 0x65, 0);
         return -1;
      }
      for (int i_727 = 0; i_727 < 2; i_727++) {
         /* WARNING: Could not recover jumptable at 0x00100db5. Too many branches */
      }
      iVar1 = ( *pRVar2->bytes )(param_2, (int)param_3);
      return iVar1;
   }
   lVar4 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar4 != 0) {
      if (*(long*)( lVar4 + 0x18 ) != 0) {
         iVar1 = ossl_provider_random_bytes(*(long*)( lVar4 + 0x18 ), 0, param_2, param_3, param_4);
         return iVar1;
      }
      lVar7 = CRYPTO_THREAD_get_local(lVar4 + 0x28);
      if (lVar7 != 0) {
         LAB_00100e95:iVar1 = EVP_RAND_generate(lVar7, param_2, param_3, param_4, 0, 0, 0);
         return iVar1;
      }
      lVar7 = rand_get0_primary(param_1, lVar4);
      if (( ( lVar7 != 0 ) && ( lVar5 = ossl_lib_ctx_get_concrete(param_1) ),lVar5 != 0 )) {
         lVar7 = rand_new_drbg(lVar5, lVar7, 0x10000, 0x1a4);
         CRYPTO_THREAD_set_local(lVar4 + 0x28, lVar7);
         if (lVar7 != 0) goto LAB_00100e95;
      }
   }
   return 0;
}int RAND_bytes(uchar *buf, int num) {
   int iVar1;
   if (-1 < num) {
      iVar1 = RAND_bytes_ex(0, buf, (long)num, 0);
      return iVar1;
   }
   return 0;
}long *ossl_rand_ctx_new(void) {
   int iVar1;
   long *ptr;
   char *pcVar2;
   long lVar3;
   ptr = (long*)CRYPTO_zalloc(0x60, "crypto/rand/rand_lib.c", 0x206);
   if (ptr != (long*)0x0) {
      OPENSSL_init_crypto(0x40000, 0);
      pcVar2 = CRYPTO_strdup("fips", "crypto/rand/rand_lib.c", 0x213);
      ptr[4] = (long)pcVar2;
      if (pcVar2 != (char*)0x0) {
         lVar3 = CRYPTO_THREAD_lock_new();
         *ptr = lVar3;
         if (lVar3 != 0) {
            iVar1 = CRYPTO_THREAD_init_local((long)ptr + 0x2c, 0);
            if (iVar1 != 0) {
               iVar1 = CRYPTO_THREAD_init_local(ptr + 5, 0);
               if (iVar1 != 0) {
                  return ptr;
               }
               CRYPTO_THREAD_cleanup_local((long)ptr + 0x2c);
            }
            lVar3 = *ptr;
         }
         CRYPTO_THREAD_lock_free(lVar3);
      }
      CRYPTO_free((void*)ptr[4]);
      CRYPTO_free(ptr);
   }
   return (long*)0x0;
}void ossl_rand_ctx_free(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      CRYPTO_THREAD_lock_free(*param_1);
      CRYPTO_THREAD_cleanup_local((long)param_1 + 0x2c);
      CRYPTO_THREAD_cleanup_local(param_1 + 5);
      EVP_RAND_CTX_free(param_1[2]);
      EVP_RAND_CTX_free(param_1[1]);
      CRYPTO_free((void*)param_1[4]);
      for (int i_728 = 0; i_728 < 6; i_728++) {
         CRYPTO_free((void*)param_1[( i_728 + 6 )]);
      }
      CRYPTO_free(param_1);
      return;
   }
   return;
}undefined8 ossl_rand_get0_seed_noncreating(undefined8 param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 *puVar3;
   puVar3 = (undefined8*)ossl_lib_ctx_get_data(param_1, 5);
   if (puVar3 != (undefined8*)0x0) {
      iVar2 = CRYPTO_THREAD_read_lock(*puVar3);
      if (iVar2 != 0) {
         uVar1 = puVar3[1];
         CRYPTO_THREAD_unlock(*puVar3);
         return uVar1;
      }
   }
   return 0;
}long RAND_get0_primary(undefined8 param_1) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   puVar2 = (undefined8*)ossl_lib_ctx_get_data(param_1, 5);
   if (puVar2 == (undefined8*)0x0) {
      return 0;
   }
   iVar1 = CRYPTO_THREAD_read_lock(*puVar2);
   if (iVar1 == 0) {
      return 0;
   }
   lVar3 = puVar2[2];
   CRYPTO_THREAD_unlock(*puVar2);
   if (lVar3 != 0) {
      return lVar3;
   }
   iVar1 = CRYPTO_THREAD_write_lock(*puVar2);
   if (iVar1 == 0) {
      return 0;
   }
   lVar3 = puVar2[2];
   if (lVar3 != 0) goto LAB_0010124e;
   lVar3 = puVar2[1];
   if (lVar3 == 0) {
      ERR_set_mark();
      lVar3 = ossl_lib_ctx_get_data(param_1, 5);
      if (lVar3 == 0) {
         LAB_0010132b:lVar4 = 0;
      } else {
         pcVar5 = *(char**)( lVar3 + 0x50 );
         if (pcVar5 == (char*)0x0) {
            pcVar5 = "SEED-SRC";
         }
         lVar3 = EVP_RAND_fetch(param_1, pcVar5, *(undefined8*)( lVar3 + 0x58 ));
         if (lVar3 == 0) {
            ERR_new();
            ERR_set_debug("crypto/rand/rand_lib.c", 0x271, "rand_new_seed");
            ERR_set_error(0x24, 0x90, 0);
            LAB_00101321:lVar4 = 0;
            LAB_00101323:EVP_RAND_CTX_free(lVar4);
            goto LAB_0010132b;
         }
         lVar4 = EVP_RAND_CTX_new(lVar3, 0);
         EVP_RAND_free(lVar3);
         if (lVar4 == 0) {
            ERR_new();
            ERR_set_debug("crypto/rand/rand_lib.c", 0x277, "rand_new_seed");
            ERR_set_error(0x24, 0x8f, 0);
            goto LAB_00101321;
         }
         iVar1 = EVP_RAND_instantiate(lVar4, 0, 0, 0, 0, 0);
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/rand/rand_lib.c", 0x27b, "rand_new_seed");
            ERR_set_error(0x24, 0x6c, 0);
            goto LAB_00101323;
         }
      }
      puVar2[1] = lVar4;
      ERR_pop_to_mark();
      lVar3 = puVar2[1];
   }
   lVar3 = rand_new_drbg(param_1, lVar3, 0x100, 0xe10);
   puVar2[2] = lVar3;
   if (lVar3 != 0) {
      iVar1 = EVP_RAND_enable_locking(lVar3);
      if (iVar1 != 0) goto LAB_0010124e;
      ERR_new();
      ERR_set_debug("crypto/rand/rand_lib.c", 0x324, "rand_get0_primary");
      ERR_set_error(6, 0xd4, 0);
      EVP_RAND_CTX_free(lVar3);
      puVar2[2] = 0;
   }
   lVar3 = 0;
   LAB_0010124e:CRYPTO_THREAD_unlock(*puVar2);
   return lVar3;
}void RAND_seed(void *buf, int num) {
   RAND_METHOD *pRVar1;
   long lVar2;
   pRVar1 = RAND_get_rand_method();
   if (( pRVar1 != (RAND_METHOD*)0x0 ) && ( pRVar1->seed != (_func_3912*)0x0 )) {
      for (int i_729 = 0; i_729 < 2; i_729++) {
         /* WARNING: Could not recover jumptable at 0x001013cc. Too many branches */
      }
      ( *pRVar1->seed )(buf, num);
      return;
   }
   lVar2 = RAND_get0_primary(0);
   if (( lVar2 != 0 ) && ( 0 < num )) {
      EVP_RAND_reseed(lVar2, 0, 0, 0, buf, (long)num);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention -- yet parameter storage is locked */int RAND_poll(void) {
   _func_3915 *p_Var1;
   int iVar2;
   RAND_METHOD *pRVar3;
   RAND_METHOD *pRVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
   void *buf;
   uint uVar8;
   double entropy;
   pRVar3 = RAND_get_rand_method();
   pRVar4 = (RAND_METHOD*)RAND_OpenSSL();
   if (pRVar3 != (RAND_METHOD*)0x0) {
      if (pRVar4 == pRVar3) {
         RAND_seed("polling", 8);
         return 1;
      }
      lVar5 = ossl_rand_pool_new(0x100, 1, 0x20, 0x3000);
      if (lVar5 != 0) {
         uVar8 = ( uint )(pRVar4 == pRVar3);
         lVar6 = ossl_pool_acquire_entropy(lVar5);
         if (( lVar6 != 0 ) && ( p_Var1 = pRVar3->add ),p_Var1 != (_func_3915*)0x0) {
            uVar7 = ossl_rand_pool_entropy(lVar5);
            entropy = (double)uVar7 * __LC13;
            iVar2 = ossl_rand_pool_length(lVar5);
            buf = (void*)ossl_rand_pool_buffer(lVar5);
            iVar2 = ( *p_Var1 )(buf, iVar2, entropy);
            if (iVar2 != 0) {
               uVar8 = 1;
            }
         }
         ossl_rand_pool_free(lVar5);
         return uVar8;
      }
   }
   return 0;
}void RAND_add(void *buf, int num, double entropy) {
   RAND_METHOD *pRVar1;
   long lVar2;
   pRVar1 = RAND_get_rand_method();
   if (( pRVar1 != (RAND_METHOD*)0x0 ) && ( pRVar1->add != (_func_3915*)0x0 )) {
      for (int i_730 = 0; i_730 < 2; i_730++) {
         /* WARNING: Could not recover jumptable at 0x00101583. Too many branches */
      }
      ( *pRVar1->add )(buf, num, entropy);
      return;
   }
   lVar2 = RAND_get0_primary(0);
   if (( lVar2 != 0 ) && ( 0 < num )) {
      EVP_RAND_reseed(lVar2, 0, 0, 0, buf, (long)num);
      return;
   }
   return;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */int RAND_status(void) {
   int iVar1;
   RAND_METHOD *pRVar2;
   RAND_METHOD *pRVar3;
   long lVar4;
   pRVar2 = RAND_get_rand_method();
   if (( pRVar2 != (RAND_METHOD*)0x0 ) && ( pRVar3 = pRVar2 != pRVar3 )) {
      if (pRVar2->status == (_func_3917*)0x0) {
         return 0;
      }
      for (int i_731 = 0; i_731 < 2; i_731++) {
         /* WARNING: Could not recover jumptable at 0x001015e6. Too many branches */
      }
      iVar1 = ( *pRVar2->status )();
      return iVar1;
   }
   lVar4 = RAND_get0_primary(0);
   if (lVar4 == 0) {
      return 0;
   }
   iVar1 = EVP_RAND_get_state(lVar4);
   return (int)( iVar1 == 1 );
}long RAND_get0_public(undefined8 param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar2 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar2 != 0) {
      lVar3 = CRYPTO_THREAD_get_local(lVar2 + 0x28);
      if (lVar3 != 0) {
         return lVar3;
      }
      lVar3 = rand_get0_primary(param_1, lVar2);
      if (( lVar3 != 0 ) && ( lVar4 = lVar4 != 0 )) {
         lVar5 = CRYPTO_THREAD_get_local(lVar2 + 0x2c);
         if (( lVar5 == 0 ) && ( iVar1 = ossl_init_thread_start(0, lVar4, rand_delete_thread_state) ),iVar1 == 0) {
            return 0;
         }
         lVar3 = rand_new_drbg(lVar4, lVar3, 0x10000, 0x1a4);
         CRYPTO_THREAD_set_local(lVar2 + 0x28, lVar3);
         return lVar3;
      }
   }
   return 0;
}long RAND_get0_private(undefined8 param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar2 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar2 != 0) {
      lVar3 = CRYPTO_THREAD_get_local(lVar2 + 0x2c);
      if (lVar3 != 0) {
         return lVar3;
      }
      lVar3 = rand_get0_primary(param_1, lVar2);
      if (( lVar3 != 0 ) && ( lVar4 = lVar4 != 0 )) {
         lVar5 = CRYPTO_THREAD_get_local(lVar2 + 0x28);
         if (( lVar5 == 0 ) && ( iVar1 = ossl_init_thread_start(0, lVar4, rand_delete_thread_state) ),iVar1 == 0) {
            return 0;
         }
         lVar3 = rand_new_drbg(lVar4, lVar3, 0x10000, 0x1a4);
         CRYPTO_THREAD_set_local(lVar2 + 0x2c, lVar3);
         return lVar3;
      }
   }
   return 0;
}int RAND_set0_public(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   iVar1 = 0;
   lVar2 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar2 != 0) {
      uVar3 = CRYPTO_THREAD_get_local(lVar2 + 0x28);
      iVar1 = CRYPTO_THREAD_set_local(lVar2 + 0x28, param_2);
      if (0 < iVar1) {
         EVP_RAND_CTX_free(uVar3);
         return iVar1;
      }
   }
   return iVar1;
}int RAND_set0_private(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   iVar1 = 0;
   lVar2 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar2 != 0) {
      uVar3 = CRYPTO_THREAD_get_local(lVar2 + 0x2c);
      iVar1 = CRYPTO_THREAD_set_local(lVar2 + 0x2c, param_2);
      if (0 < iVar1) {
         EVP_RAND_CTX_free(uVar3);
         return iVar1;
      }
   }
   return iVar1;
}void ossl_random_add_conf_module(void) {
   CONF_module_add("random", random_conf_init, random_conf_deinit);
   return;
}undefined8 RAND_set_DRBG_type(undefined8 param_1, char *param_2, char *param_3, char *param_4, char *param_5) {
   long lVar1;
   lVar1 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar1 != 0) {
      if (*(long*)( lVar1 + 0x10 ) == 0) {
         if (( param_2 == (char*)0x0 ) || ( param_2 = CRYPTO_strdup(param_2, "crypto/rand/rand_lib.c", 0x3b8) ),param_2 != (char*)0x0) {
            CRYPTO_free(*(void**)( lVar1 + 0x30 ));
            *(char**)( lVar1 + 0x30 ) = param_2;
            if (( param_3 == (char*)0x0 ) || ( param_3 = CRYPTO_strdup(param_3, "crypto/rand/rand_lib.c", 0x3b8) ),param_3 != (char*)0x0) {
               CRYPTO_free(*(void**)( lVar1 + 0x48 ));
               *(char**)( lVar1 + 0x48 ) = param_3;
               if (( param_4 == (char*)0x0 ) || ( param_4 = CRYPTO_strdup(param_4, "crypto/rand/rand_lib.c", 0x3b8) ),param_4 != (char*)0x0) {
                  CRYPTO_free(*(void**)( lVar1 + 0x38 ));
                  *(char**)( lVar1 + 0x38 ) = param_4;
                  if (( param_5 == (char*)0x0 ) || ( param_5 = CRYPTO_strdup(param_5, "crypto/rand/rand_lib.c", 0x3b8) ),param_5 != (char*)0x0) {
                     CRYPTO_free(*(void**)( lVar1 + 0x40 ));
                     *(char**)( lVar1 + 0x40 ) = param_5;
                     return 1;
                  }
               }
            }
         }
      } else {
         ERR_new();
         ERR_set_debug("crypto/rand/rand_lib.c", 0x424, "RAND_set_DRBG_type");
         ERR_set_error(0xf, 0x67, 0);
      }
   }
   return 0;
}undefined8 RAND_set_seed_source_type(undefined8 param_1, char *param_2, char *param_3) {
   long lVar1;
   lVar1 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar1 != 0) {
      if (*(long*)( lVar1 + 8 ) == 0) {
         if (( param_2 != (char*)0x0 ) && ( param_2 = CRYPTO_strdup(param_2, "crypto/rand/rand_lib.c", 0x3b8) ),param_2 == (char*)0x0) {
            return 0;
         }
         CRYPTO_free(*(void**)( lVar1 + 0x50 ));
         *(char**)( lVar1 + 0x50 ) = param_2;
         if (( param_3 != (char*)0x0 ) && ( param_3 = CRYPTO_strdup(param_3, "crypto/rand/rand_lib.c", 0x3b8) ),param_3 == (char*)0x0) {
            return 0;
         }
         CRYPTO_free(*(void**)( lVar1 + 0x58 ));
         *(char**)( lVar1 + 0x58 ) = param_3;
         return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/rand/rand_lib.c", 0x435, "RAND_set_seed_source_type");
      ERR_set_error(0xf, 0x67, 0);
   }
   return 0;
}undefined8 RAND_set1_random_provider(undefined8 param_1, long param_2) {
   int iVar1;
   long lVar2;
   char *pcVar3;
   void *ptr;
   lVar2 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar2 == 0) {
      return 0;
   }
   if (param_2 == 0) {
      CRYPTO_free(*(void**)( lVar2 + 0x20 ));
      *(undefined1(*) [16])( lVar2 + 0x18 ) = (undefined1[16])0x0;
      return 1;
   }
   if (*(long*)( lVar2 + 0x18 ) == param_2) {
      return 1;
   }
   pcVar3 = (char*)OSSL_PROVIDER_get0_name(param_2);
   ptr = *(void**)( lVar2 + 0x20 );
   if (ptr != (void*)0x0) {
      iVar1 = OPENSSL_strcasecmp(ptr, pcVar3);
      if (iVar1 == 0) goto LAB_00101b97;
      ptr = *(void**)( lVar2 + 0x20 );
   }
   CRYPTO_free(ptr);
   pcVar3 = CRYPTO_strdup(pcVar3, "crypto/rand/rand_lib.c", 0x82);
   *(char**)( lVar2 + 0x20 ) = pcVar3;
   if (pcVar3 == (char*)0x0) {
      return 0;
   }
   LAB_00101b97:*(long*)( lVar2 + 0x18 ) = param_2;
   return 1;
}undefined8 random_conf_init(CONF_IMODULE *param_1, CONF *param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   char *pcVar4;
   stack_st_CONF_VALUE *psVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   void *ptr;
   undefined8 local_50;
   uVar2 = NCONF_get0_libctx(param_2);
   lVar3 = ossl_lib_ctx_get_data(uVar2, 5);
   pcVar4 = CONF_imodule_get_value(param_1);
   psVar5 = NCONF_get_section(param_2, pcVar4);
   if (psVar5 == (stack_st_CONF_VALUE*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/rand/rand_lib.c", 0x3d2, "random_conf_init");
      ERR_set_error(0xf, 0x77, 0);
   } else {
      local_50 = 1;
      iVar8 = 0;
      if (lVar3 != 0) {
         do {
            iVar1 = OPENSSL_sk_num(psVar5);
            if (iVar1 <= iVar8) {
               return local_50;
            }
            lVar6 = OPENSSL_sk_value(psVar5, iVar8);
            iVar1 = OPENSSL_strcasecmp(*(undefined8*)( lVar6 + 8 ), "random");
            if (iVar1 == 0) {
               pcVar4 = *(char**)( lVar6 + 0x10 );
               if (( pcVar4 != (char*)0x0 ) && ( pcVar4 = CRYPTO_strdup(pcVar4, "crypto/rand/rand_lib.c", 0x3b8) ),pcVar4 == (char*)0x0) {
                  return 0;
               }
               CRYPTO_free(*(void**)( lVar3 + 0x30 ));
               *(char**)( lVar3 + 0x30 ) = pcVar4;
            } else {
               iVar1 = OPENSSL_strcasecmp(*(undefined8*)( lVar6 + 8 ), "cipher");
               if (iVar1 == 0) {
                  pcVar4 = *(char**)( lVar6 + 0x10 );
                  if (( pcVar4 != (char*)0x0 ) && ( pcVar4 = CRYPTO_strdup(pcVar4, "crypto/rand/rand_lib.c", 0x3b8) ),pcVar4 == (char*)0x0) {
                     return 0;
                  }
                  CRYPTO_free(*(void**)( lVar3 + 0x38 ));
                  *(char**)( lVar3 + 0x38 ) = pcVar4;
               } else {
                  iVar1 = OPENSSL_strcasecmp(*(undefined8*)( lVar6 + 8 ), "digest");
                  if (iVar1 == 0) {
                     pcVar4 = *(char**)( lVar6 + 0x10 );
                     if (( pcVar4 != (char*)0x0 ) && ( pcVar4 = CRYPTO_strdup(pcVar4, "crypto/rand/rand_lib.c", 0x3b8) ),pcVar4 == (char*)0x0) {
                        return 0;
                     }
                     CRYPTO_free(*(void**)( lVar3 + 0x40 ));
                     *(char**)( lVar3 + 0x40 ) = pcVar4;
                  } else {
                     iVar1 = OPENSSL_strcasecmp(*(undefined8*)( lVar6 + 8 ), "properties");
                     if (iVar1 == 0) {
                        pcVar4 = *(char**)( lVar6 + 0x10 );
                        if (( pcVar4 != (char*)0x0 ) && ( pcVar4 = CRYPTO_strdup(pcVar4, "crypto/rand/rand_lib.c", 0x3b8) ),pcVar4 == (char*)0x0) {
                           return 0;
                        }
                        CRYPTO_free(*(void**)( lVar3 + 0x48 ));
                        *(char**)( lVar3 + 0x48 ) = pcVar4;
                     } else {
                        iVar1 = OPENSSL_strcasecmp(*(undefined8*)( lVar6 + 8 ), &_LC15);
                        if (iVar1 == 0) {
                           pcVar4 = *(char**)( lVar6 + 0x10 );
                           if (( pcVar4 != (char*)0x0 ) && ( pcVar4 = CRYPTO_strdup(pcVar4, "crypto/rand/rand_lib.c", 0x3b8) ),pcVar4 == (char*)0x0) {
                              return 0;
                           }
                           CRYPTO_free(*(void**)( lVar3 + 0x50 ));
                           *(char**)( lVar3 + 0x50 ) = pcVar4;
                        } else {
                           iVar1 = OPENSSL_strcasecmp(*(undefined8*)( lVar6 + 8 ), "seed_properties");
                           if (iVar1 == 0) {
                              pcVar4 = *(char**)( lVar6 + 0x10 );
                              if (( pcVar4 != (char*)0x0 ) && ( pcVar4 = CRYPTO_strdup(pcVar4, "crypto/rand/rand_lib.c", 0x3b8) ),pcVar4 == (char*)0x0) {
                                 return 0;
                              }
                              CRYPTO_free(*(void**)( lVar3 + 0x58 ));
                              *(char**)( lVar3 + 0x58 ) = pcVar4;
                           } else {
                              iVar1 = OPENSSL_strcasecmp(*(undefined8*)( lVar6 + 8 ), "random_provider");
                              if (iVar1 == 0) {
                                 lVar7 = ossl_provider_find(uVar2, *(undefined8*)( lVar6 + 0x10 ), 0);
                                 if (lVar7 == 0) {
                                    ptr = *(void**)( lVar3 + 0x20 );
                                    pcVar4 = *(char**)( lVar6 + 0x10 );
                                    if (ptr != (void*)0x0) {
                                       iVar1 = OPENSSL_strcasecmp(ptr, pcVar4);
                                       if (iVar1 == 0) goto LAB_00101c9a;
                                       ptr = *(void**)( lVar3 + 0x20 );
                                    }
                                    CRYPTO_free(ptr);
                                    pcVar4 = CRYPTO_strdup(pcVar4, "crypto/rand/rand_lib.c", 0x82);
                                    *(char**)( lVar3 + 0x20 ) = pcVar4;
                                    if (pcVar4 == (char*)0x0) {
                                       return 0;
                                    }
                                 } else {
                                    iVar1 = RAND_set1_random_provider(uVar2, lVar7);
                                    if (iVar1 == 0) {
                                       ERR_new();
                                       ERR_set_debug("crypto/rand/rand_lib.c", 0x3f3, "random_conf_init");
                                       ERR_set_error(0xf, 0xc0103, 0);
                                       OSSL_PROVIDER_unload(lVar7);
                                       return 0;
                                    }
                                    OSSL_PROVIDER_unload(lVar7);
                                 }
                              } else {
                                 ERR_new();
                                 ERR_set_debug("crypto/rand/rand_lib.c", 0x407, "random_conf_init");
                                 ERR_set_error(0xf, 0x78, "name=%s, value=%s", *(undefined8*)( lVar6 + 8 ), *(undefined8*)( lVar6 + 0x10 ));
                                 local_50 = 0;
                              }
                           }
                        }
                     }
                  }
               }
            }
            LAB_00101c9a:iVar8 = iVar8 + 1;
         } while ( true );
      }
   }
   return 0;
}undefined8 ossl_rand_check_random_provider_on_load(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   char *__s2;
   lVar2 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar2 != 0) {
      if (( *(long*)( lVar2 + 0x20 ) != 0 ) && ( *(long*)( lVar2 + 0x18 ) == 0 )) {
         __s2 = (char*)OSSL_PROVIDER_get0_name(param_2);
         iVar1 = strcmp(*(char**)( lVar2 + 0x20 ), __s2);
         if (iVar1 == 0) {
            *(undefined8*)( lVar2 + 0x18 ) = param_2;
         }
      }
      return 1;
   }
   return 0;
}undefined8 ossl_rand_check_random_provider_on_unload(undefined8 param_1, long param_2) {
   long lVar1;
   lVar1 = ossl_lib_ctx_get_data(param_1, 5);
   if (lVar1 != 0) {
      if (*(long*)( lVar1 + 0x18 ) == param_2) {
         *(undefined8*)( lVar1 + 0x18 ) = 0;
      }
      return 1;
   }
   return 0;
}

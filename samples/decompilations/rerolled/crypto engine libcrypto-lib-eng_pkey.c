int ENGINE_set_load_privkey_function(ENGINE *e, ENGINE_LOAD_KEY_PTR loadpriv_f) {
   *(ENGINE_LOAD_KEY_PTR*)( e + 0x78 ) = loadpriv_f;
   return 1;
}int ENGINE_set_load_pubkey_function(ENGINE *e, ENGINE_LOAD_KEY_PTR loadpub_f) {
   *(ENGINE_LOAD_KEY_PTR*)( e + 0x80 ) = loadpub_f;
   return 1;
}int ENGINE_set_load_ssl_client_cert_function(ENGINE *e, ENGINE_SSL_CLIENT_CERT_PTR loadssl_f) {
   *(ENGINE_SSL_CLIENT_CERT_PTR*)( e + 0x88 ) = loadssl_f;
   return 1;
}ENGINE_LOAD_KEY_PTR ENGINE_get_load_privkey_function(ENGINE *e) {
   return *(ENGINE_LOAD_KEY_PTR*)( e + 0x78 );
}ENGINE_LOAD_KEY_PTR ENGINE_get_load_pubkey_function(ENGINE *e) {
   return *(ENGINE_LOAD_KEY_PTR*)( e + 0x80 );
}ENGINE_SSL_CLIENT_CERT_PTR ENGINE_get_ssl_client_cert_function(ENGINE *e) {
   return *(ENGINE_SSL_CLIENT_CERT_PTR*)( e + 0x88 );
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */EVP_PKEY *ENGINE_load_private_key(ENGINE *e, char *key_id, UI_METHOD *ui_method, void *callback_data) {
   int iVar1;
   EVP_PKEY *pEVar2;
   if (e == (ENGINE*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/engine/eng_pkey.c", 0x3e, "ENGINE_load_private_key");
      ERR_set_error(0x26, 0xc0102, 0);
   } else {
      iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
      if (iVar1 != 0) {
         if (*(int*)( e + 0xa0 ) == 0) {
            CRYPTO_THREAD_unlock(_global_engine_lock);
            ERR_new();
            ERR_set_debug("crypto/engine/eng_pkey.c", 0x45, "ENGINE_load_private_key");
            ERR_set_error(0x26, 0x75, 0);
         } else {
            CRYPTO_THREAD_unlock(_global_engine_lock);
            if (*(code**)( e + 0x78 ) != (code*)0x0) {
               pEVar2 = (EVP_PKEY*)( **(code**)( e + 0x78 ) )(e, key_id, ui_method, callback_data);
               if (pEVar2 == (EVP_PKEY*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/engine/eng_pkey.c", 0x4f, "ENGINE_load_private_key");
                  ERR_set_error(0x26, 0x80, 0);
               }
               return pEVar2;
            }
            ERR_new();
            ERR_set_debug("crypto/engine/eng_pkey.c", 0x4a, "ENGINE_load_private_key");
            ERR_set_error(0x26, 0x7d, 0);
         }
      }
   }
   return (EVP_PKEY*)0x0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */EVP_PKEY *ENGINE_load_public_key(ENGINE *e, char *key_id, UI_METHOD *ui_method, void *callback_data) {
   int iVar1;
   EVP_PKEY *pEVar2;
   if (e == (ENGINE*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/engine/eng_pkey.c", 0x5b, "ENGINE_load_public_key");
      ERR_set_error(0x26, 0xc0102, 0);
   } else {
      iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
      if (iVar1 != 0) {
         if (*(int*)( e + 0xa0 ) == 0) {
            CRYPTO_THREAD_unlock(_global_engine_lock);
            ERR_new();
            ERR_set_debug("crypto/engine/eng_pkey.c", 0x62, "ENGINE_load_public_key");
            ERR_set_error(0x26, 0x75, 0);
         } else {
            CRYPTO_THREAD_unlock(_global_engine_lock);
            if (*(code**)( e + 0x80 ) != (code*)0x0) {
               pEVar2 = (EVP_PKEY*)( **(code**)( e + 0x80 ) )(e, key_id, ui_method, callback_data);
               if (pEVar2 == (EVP_PKEY*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/engine/eng_pkey.c", 0x6c, "ENGINE_load_public_key");
                  ERR_set_error(0x26, 0x81, 0);
               }
               return pEVar2;
            }
            ERR_new();
            ERR_set_debug("crypto/engine/eng_pkey.c", 0x67, "ENGINE_load_public_key");
            ERR_set_error(0x26, 0x7d, 0);
         }
      }
   }
   return (EVP_PKEY*)0x0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int ENGINE_load_ssl_client_cert(ENGINE *e, SSL *s, stack_st_X509_NAME *ca_dn, X509 **pcert, EVP_PKEY **ppkey, stack_st_X509 **pother, UI_METHOD *ui_method, void *callback_data) {
   int iVar1;
   if (e == (ENGINE*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/engine/eng_pkey.c", 0x79, "ENGINE_load_ssl_client_cert");
      ERR_set_error(0x26, 0xc0102, 0);
   } else {
      iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
      if (iVar1 != 0) {
         if (*(int*)( e + 0xa0 ) == 0) {
            CRYPTO_THREAD_unlock(_global_engine_lock);
            ERR_new();
            ERR_set_debug("crypto/engine/eng_pkey.c", 0x80, "ENGINE_load_ssl_client_cert");
            ERR_set_error(0x26, 0x75, 0);
         } else {
            CRYPTO_THREAD_unlock(_global_engine_lock);
            if (*(code**)( e + 0x88 ) != (code*)0x0) {
               for (int i_487 = 0; i_487 < 2; i_487++) {
                  /* WARNING: Could not recover jumptable at 0x00100418. Too many branches */
               }
               iVar1 = ( **(code**)( e + 0x88 ) )(e, s, ca_dn, pcert, ppkey, pother);
               return iVar1;
            }
            ERR_new();
            ERR_set_debug("crypto/engine/eng_pkey.c", 0x85, "ENGINE_load_ssl_client_cert");
            ERR_set_error(0x26, 0x7d, 0);
         }
      }
   }
   return 0;
}

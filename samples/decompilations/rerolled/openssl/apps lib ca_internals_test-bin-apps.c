bool index_name_qual(undefined8 *param_1) {
   return *(char*)*param_1 == 'V';
}
void index_serial_LHASH_COMP(long param_1, long param_2) {
   char cVar1;
   char *__s2;
   char *__s1;
   __s1 = *(char**)( param_1 + 0x18 );
   cVar1 = *__s1;
   while (cVar1 == '0') {
      __s1 = __s1 + 1;
      cVar1 = *__s1;
   }
;
   __s2 = *(char**)( param_2 + 0x18 );
   cVar1 = *__s2;
   while (cVar1 == '0') {
      __s2 = __s2 + 1;
      cVar1 = *__s2;
   }
;
   strcmp(__s1, __s2);
   return;
}
void index_name_LHASH_HASH(long param_1) {
   OPENSSL_LH_strhash(*(undefined8*)( param_1 + 0x28 ));
   return;
}
void index_serial_LHASH_HASH(long param_1) {
   char cVar1;
   char *pcVar2;
   pcVar2 = *(char**)( param_1 + 0x18 );
   cVar1 = *pcVar2;
   while (cVar1 == '0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
   }
;
   OPENSSL_LH_strhash();
   return;
}
bool adapt_keyid_ext(X509 *param_1, X509V3_CTX *param_2, char *param_3, char *param_4, int param_5) {
   int iVar1;
   int iVar2;
   stack_st_X509_EXTENSION *x;
   X509_EXTENSION *ex;
   ASN1_OBJECT *obj;
   X509_EXTENSION *ne;
   ASN1_OCTET_STRING *x_00;
   bool bVar3;
   x = (stack_st_X509_EXTENSION*)X509_get0_extensions();
   ex = X509V3_EXT_nconf((CONF*)0x0, param_2, param_3, param_4);
   if (ex == (X509_EXTENSION*)0x0) {
      return false;
   }

   obj = X509_EXTENSION_get_object(ex);
   iVar1 = X509v3_get_ext_by_OBJ(x, obj, -1);
   if (iVar1 < 0) {
      if (param_5 != 0) {
         iVar1 = X509_add_ext(param_1, ex, -1);
         bVar3 = iVar1 != 0;
         goto LAB_001000fa;
      }

   }
 else {
      ne = X509v3_get_ext(x, iVar1);
      x_00 = X509_EXTENSION_get_data(ne);
      iVar2 = ASN1_STRING_length(x_00);
      if (iVar2 < 3) {
         X509_delete_ext(param_1, iVar1);
         X509_EXTENSION_free(ne);
      }

   }

   bVar3 = true;
   LAB_001000fa:X509_EXTENSION_free(ex);
   return bVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */BIO *app_http_tls_cb(BIO *param_1, undefined8 *param_2, int param_3) {
   SSL_CTX *ctx;
   int iVar1;
   uint uVar2;
   X509_STORE *pXVar3;
   long lVar4;
   void *parg;
   undefined8 uVar5;
   BIO_METHOD *type;
   BIO *pBVar6;
   SSL *ssl;
   ulong uVar7;
   char *pcVar8;
   ctx = (SSL_CTX*)param_2[4];
   if (ctx == (SSL_CTX*)0x0) {
      return param_1;
   }

   if (param_3 != 0) {
      parg = (void*)0x0;
      pXVar3 = SSL_CTX_get_cert_store(ctx);
      lVar4 = X509_STORE_get0_param(pXVar3);
      if (lVar4 != 0) {
         parg = (void*)X509_VERIFY_PARAM_get0_host(lVar4, 0);
      }

      if (*(int*)( param_2 + 2 ) != 0) {
         uVar5 = opt_getprog();
         iVar1 = OSSL_HTTP_proxy_connect(param_1, *param_2, param_2[1], 0, 0, *(undefined4*)( param_2 + 3 ), _bio_err, uVar5);
         if (iVar1 == 0) {
            return (BIO*)0x0;
         }

      }

      type = BIO_f_ssl();
      pBVar6 = BIO_new(type);
      if (pBVar6 != (BIO*)0x0) {
         ssl = SSL_new(ctx);
         if (ssl != (SSL*)0x0) {
            if (lVar4 != 0) {
               SSL_ctrl(ssl, 0x37, 0, parg);
            }

            SSL_set_connect_state(ssl);
            BIO_ctrl(pBVar6, 0x6d, 1, ssl);
            pBVar6 = BIO_push(pBVar6, param_1);
            return pBVar6;
         }

         BIO_free(pBVar6);
      }

      return (BIO*)0x0;
   }

   if (param_1 == (BIO*)0x0) {
      return (BIO*)0x0;
   }

   uVar7 = ERR_peek_error();
   uVar2 = (uint)uVar7;
   if (( ( uVar7 & 0x80000000 ) != 0 ) || ( (char)( uVar7 >> 0x17 ) != '\x14' )) {
      uVar7 = ERR_peek_last_error();
      uVar2 = (uint)uVar7;
      if (( ( uVar7 & 0x80000000 ) != 0 ) || ( (char)( uVar7 >> 0x17 ) != '\x14' )) goto LAB_001002e0;
   }

   uVar2 = uVar2 & 0x7fffff;
   if (uVar2 == 0x10b) {
      pcVar8 = "The server does not support (a suitable version of) TLS";
   }
 else if (uVar2 < 0x10c) {
      if (uVar2 == 0x86) {
         pcVar8 = "Cannot authenticate server via its TLS certificate, likely due to mismatch with our trusted TLS certs or missing revocation status";
      }
 else {
         pcVar8 = "The server does not support HTTPS";
         if (uVar2 != 0xfc) goto LAB_001002e0;
      }

   }
 else if (uVar2 == 0x410) {
      pcVar8 = "TLS handshake failure. Possibly the server requires our TLS certificate but did not receive it";
   }
 else {
      pcVar8 = "Server did not accept our TLS certificate, likely due to mismatch with server\'s trust anchor or missing revocation status";
      if (uVar2 != 0x418) goto LAB_001002e0;
   }

   BIO_printf(_bio_err, "%s\n", pcVar8);
   LAB_001002e0:ERR_set_mark();
   BIO_ssl_shutdown(param_1);
   pBVar6 = BIO_pop(param_1);
   BIO_free(param_1);
   ERR_pop_to_mark();
   return pBVar6;
}
undefined4 modestr_part_0(void) {
   long *plVar1;
   char cVar2;
   int iVar3;
   stack_st_CONF_VALUE *psVar4;
   long lVar5;
   ulong uVar6;
   long *extraout_RDX;
   int iVar7;
   char *pcVar8;
   char *pcVar9;
   long *plVar10;
   undefined4 uStack_44;
   pcVar8 = "apps/lib/apps.c";
   pcVar9 = "assertion failed: mode == \'a\' || mode == \'r\' || mode == \'w\'";
   OPENSSL_die("assertion failed: mode == \'a\' || mode == \'r\' || mode == \'w\'", "apps/lib/apps.c", 0xc1e);
   iVar7 = 0;
   psVar4 = X509V3_parse_list(pcVar8);
   uStack_44 = 1;
   iVar3 = OPENSSL_sk_num(psVar4);
   if (0 < iVar3) {
      do {
         lVar5 = OPENSSL_sk_value(psVar4, iVar7);
         pcVar8 = *(char**)( lVar5 + 8 );
         cVar2 = *pcVar8;
         if (cVar2 == '-') {
            pcVar8 = pcVar8 + 1;
         }
 else {
            pcVar8 = pcVar8 + ( cVar2 == '+' );
         }

         lVar5 = *extraout_RDX;
         plVar10 = extraout_RDX;
         while (lVar5 != 0) {
            iVar3 = OPENSSL_strcasecmp(pcVar8);
            if (iVar3 == 0) {
               uVar6 = ~plVar10[2] & *(ulong*)pcVar9;
               *(ulong*)pcVar9 = uVar6;
               if (cVar2 == '-') {
                  uVar6 = uVar6 & ~plVar10[1];
               }
 else {
                  uVar6 = uVar6 | plVar10[1];
               }

               *(ulong*)pcVar9 = uVar6;
               goto LAB_00100479;
            }

            plVar1 = plVar10 + 3;
            plVar10 = plVar10 + 3;
            lVar5 = *plVar1;
         }
;
         uStack_44 = 0;
         LAB_00100479:iVar7 = iVar7 + 1;
         iVar3 = OPENSSL_sk_num(psVar4);
      }
 while ( iVar7 < iVar3 );
   }

   OPENSSL_sk_pop_free(psVar4, &X509V3_conf_free);
   return uStack_44;
}
undefined4 set_multi_opts_part_0(ulong *param_1, char *param_2, long *param_3) {
   long *plVar1;
   char cVar2;
   int iVar3;
   stack_st_CONF_VALUE *psVar4;
   long lVar5;
   ulong uVar6;
   char *pcVar7;
   int iVar8;
   long *plVar9;
   undefined4 local_3c;
   iVar8 = 0;
   psVar4 = X509V3_parse_list(param_2);
   local_3c = 1;
   iVar3 = OPENSSL_sk_num(psVar4);
   if (0 < iVar3) {
      do {
         lVar5 = OPENSSL_sk_value(psVar4, iVar8);
         pcVar7 = *(char**)( lVar5 + 8 );
         cVar2 = *pcVar7;
         if (cVar2 == '-') {
            pcVar7 = pcVar7 + 1;
         }
 else {
            pcVar7 = pcVar7 + ( cVar2 == '+' );
         }

         lVar5 = *param_3;
         plVar9 = param_3;
         while (lVar5 != 0) {
            iVar3 = OPENSSL_strcasecmp(pcVar7);
            if (iVar3 == 0) {
               uVar6 = ~plVar9[2] & *param_1;
               *param_1 = uVar6;
               if (cVar2 == '-') {
                  uVar6 = uVar6 & ~plVar9[1];
               }
 else {
                  uVar6 = uVar6 | plVar9[1];
               }

               *param_1 = uVar6;
               goto LAB_00100479;
            }

            plVar1 = plVar9 + 3;
            plVar9 = plVar9 + 3;
            lVar5 = *plVar1;
         }
;
         local_3c = 0;
         LAB_00100479:iVar8 = iVar8 + 1;
         iVar3 = OPENSSL_sk_num(psVar4);
      }
 while ( iVar8 < iVar3 );
   }

   OPENSSL_sk_pop_free(psVar4, &X509V3_conf_free);
   return local_3c;
}
void index_name_LHASH_COMP(long param_1, long param_2) {
   strcmp(*(char**)( param_1 + 0x28 ), *(char**)( param_2 + 0x28 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 do_sign_init(long param_1, undefined8 param_2, undefined8 param_3, long param_4) {
   EVP_PKEY_CTX *ctx;
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char *str;
   char *__s;
   char *pcVar5;
   long in_FS_OFFSET;
   EVP_PKEY_CTX *local_a0;
   int local_98;
   short local_94;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = (EVP_PKEY_CTX*)0x0;
   if (param_1 != 0) {
      iVar1 = EVP_PKEY_get_default_digest_name(param_2, &local_98, 0x50);
      if (( ( iVar1 == 2 ) && ( local_98 == 0x45444e55 ) ) && ( local_94 == 0x46 )) {
         param_3 = 0;
      }

      uVar3 = app_get0_propq();
      uVar4 = app_get0_libctx();
      iVar1 = EVP_DigestSignInit_ex(param_1, &local_a0, param_3, uVar4, uVar3, param_2);
      ctx = local_a0;
      if (iVar1 != 0) {
         iVar1 = 0;
         if (param_4 != 0) {
            for (; iVar2 = OPENSSL_sk_num(param_4),iVar1 < iVar2; iVar1 = iVar1 + 1) {
               str = (char*)OPENSSL_sk_value(param_4, iVar1);
               __s = CRYPTO_strdup(str, "apps/lib/apps.c", 0x83c);
               if (__s == (char*)0x0) {
                  LAB_00100672:BIO_printf(_bio_err, "parameter error \"%s\"\n", str);
                  ERR_print_errors(_bio_err);
                  goto LAB_00100584;
               }

               pcVar5 = strchr(__s, 0x3a);
               if (pcVar5 == (char*)0x0) {
                  CRYPTO_free(__s);
                  goto LAB_00100672;
               }

               *pcVar5 = '\0';
               iVar2 = EVP_PKEY_CTX_ctrl_str(ctx, __s, pcVar5 + 1);
               CRYPTO_free(__s);
               if (iVar2 < 1) goto LAB_00100672;
            }

         }

         uVar3 = 1;
         goto LAB_00100586;
      }

   }

   LAB_00100584:uVar3 = 0;
   LAB_00100586:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */char *app_get_pass(char *param_1, int param_2) {
   int iVar1;
   long lVar2;
   BIO_METHOD *type;
   BIO *b;
   char *pcVar3;
   long in_FS_OFFSET;
   char acStack_428[1032];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = strncmp(param_1, "pass:", 5);
   if (iVar1 == 0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         pcVar3 = param_1 + 5;
         iVar1 = 0x107;
         LAB_00100874:pcVar3 = CRYPTO_strdup(pcVar3, "apps/lib/apps.c", iVar1);
         return pcVar3;
      }

      goto LAB_00100a6e;
   }

   iVar1 = strncmp(param_1, "env:", 4);
   if (iVar1 == 0) {
      pcVar3 = getenv(param_1 + 4);
      if (pcVar3 != (char*)0x0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = 0x10e;
            goto LAB_00100874;
         }

         goto LAB_00100a6e;
      }

      BIO_printf(_bio_err, "No environment variable %s\n", param_1 + 4);
      pcVar3 = (char*)0x0;
   }
 else if (( param_2 == 0 ) || ( pwdbio_5 == (BIO*)0x0 )) {
      iVar1 = strncmp(param_1, "file:", 5);
      if (iVar1 == 0) {
         pwdbio_5 = BIO_new_file(param_1 + 5, "r");
         if (pwdbio_5 != (BIO*)0x0) goto LAB_001007a0;
         BIO_printf(_bio_err, "Can\'t open file %s\n", param_1 + 5);
         pcVar3 = (char*)0x0;
      }
 else if (( ( *param_1 == 'f' ) && ( param_1[1] == 'd' ) ) && ( param_1[2] == ':' )) {
         lVar2 = strtol(param_1 + 3, (char**)0x0, 10);
         if (( (int)lVar2 < 0 ) || ( pwdbio_5 = BIO_new_fd((int)lVar2, 0) ),pwdbio_5 == (BIO*)0x0) {
            BIO_printf(_bio_err, "Can\'t access file descriptor %s\n", param_1 + 3);
            pcVar3 = (char*)0x0;
         }
 else {
            type = BIO_f_buffer();
            b = BIO_new(type);
            if (b != (BIO*)0x0) {
               pwdbio_5 = BIO_push(b, pwdbio_5);
               goto LAB_001007a0;
            }

            BIO_free_all(pwdbio_5);
            pwdbio_5 = (BIO*)0x0;
            BIO_printf(_bio_err, "Out of memory\n");
            pcVar3 = (char*)0x0;
         }

      }
 else {
         iVar1 = strcmp(param_1, "stdin");
         if (iVar1 == 0) {
            setbuf(_stdin, (char*)0x0);
            iVar1 = FMT_istext(0x8001);
            pwdbio_5 = BIO_new_fp(_stdin, ( uint )(iVar1 != 0) << 4);
            if (pwdbio_5 != (BIO*)0x0) goto LAB_001007a0;
            BIO_printf(_bio_err, "Can\'t open BIO for stdin\n");
            pcVar3 = (char*)0x0;
         }
 else {
            pcVar3 = strchr(param_1, 0x3a);
            if (( pcVar3 == (char*)0x0 ) || ( 4 < (long)pcVar3 - (long)param_1 )) {
               BIO_printf(_bio_err, "Invalid password argument, missing \':\' within the first %d chars\n", 5);
               pcVar3 = (char*)0x0;
            }
 else {
               BIO_printf(_bio_err, "Invalid password argument, starting with \"%.*s\"\n", ( ulong )((int)( (long)pcVar3 - (long)param_1 ) + 1), param_1);
               pcVar3 = (char*)0x0;
            }

         }

      }

   }
 else {
      LAB_001007a0:iVar1 = BIO_gets(pwdbio_5, acStack_428, 0x400);
      if (param_2 != 1) {
         BIO_free_all(pwdbio_5);
         pwdbio_5 = (BIO*)0x0;
      }

      if (iVar1 < 1) {
         BIO_printf(_bio_err, "Error reading password from BIO\n");
         pcVar3 = (char*)0x0;
      }
 else {
         pcVar3 = strchr(acStack_428, 10);
         if (pcVar3 != (char*)0x0) {
            *pcVar3 = '\0';
         }

         pcVar3 = CRYPTO_strdup(acStack_428, "apps/lib/apps.c", 0x157);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar3;
   }

   LAB_00100a6e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 app_init(void) {
   return 1;
}
bool ctx_set_verify_locations(undefined8 param_1, long param_2, int param_3, long param_4, int param_5, long param_6, int param_7) {
   int iVar1;
   if (param_4 == 0 && param_2 == 0) {
      if (param_6 != 0) {
         LAB_00100ab3:iVar1 = SSL_CTX_load_verify_store(param_1, param_6);
         return iVar1 != 0;
      }

      if (( param_3 == 0 ) && ( iVar1 = iVar1 < 1 )) {
         return false;
      }

      if (( param_5 == 0 ) && ( iVar1 = iVar1 < 1 )) {
         return false;
      }

      if (param_7 == 0) {
         iVar1 = SSL_CTX_set_default_verify_store(param_1);
         return 0 < iVar1;
      }

   }
 else {
      if (( ( param_2 != 0 ) && ( iVar1 = SSL_CTX_load_verify_file() ),iVar1 == 0 )) {
         return false;
      }

      if (param_6 != 0) goto LAB_00100ab3;
   }

   return true;
}
void ctx_set_ctlog_list_file(undefined8 param_1, long param_2) {
   if (param_2 != 0) {
      SSL_CTX_set_ctlog_list_file();
      return;
   }

   SSL_CTX_set_default_ctlog_list_file();
   return;
}
undefined8 set_nameopt(long param_1) {
   int iVar1;
   if (param_1 == 0) {
      return 0;
   }

   iVar1 = set_multi_opts_part_0(&nmflag, param_1, ex_tbl_3);
   if (iVar1 != 0) {
      if (( nmflag != 0 ) && ( ( nmflag & 0xf0000 ) == 0 )) {
         nmflag = nmflag | 0x20000;
      }

      nmflag_set = 1;
      return 1;
   }

   return 0;
}
undefined8 get_nameopt(void) {
   undefined8 uVar1;
   uVar1 = 0x20312;
   if (nmflag_set != '\0') {
      uVar1 = nmflag;
   }

   return uVar1;
}
void wrap_password_callback(void) {
   password_callback();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */char *get_passwd(char *param_1, char *param_2) {
   char *pcVar1;
   if (param_2 == (char*)0x0) {
      param_2 = "<unknown>";
   }

   pcVar1 = (char*)0x0;
   if (param_1 != (char*)0x0) {
      pcVar1 = (char*)app_get_pass(param_1, 0);
      if (pcVar1 == (char*)0x0) {
         BIO_printf(_bio_err, "Error getting password for %s\n", param_2);
         BIO_printf(_bio_err, "Trying plain input string (better precede with \'pass:\')\n");
         pcVar1 = CRYPTO_strdup(param_1, "apps/lib/apps.c", 0xe2);
         if (pcVar1 == (char*)0x0) {
            BIO_printf(_bio_err, "Out of memory getting password for %s\n", param_2);
         }

      }

   }

   return pcVar1;
}
bool app_passwd(char *param_1, char *param_2, long *param_3, long *param_4) {
   int iVar1;
   long lVar2;
   char cVar3;
   if (param_1 != (char*)0x0) {
      if (param_2 != (char*)0x0) {
         iVar1 = strcmp(param_1, param_2);
         lVar2 = app_get_pass(param_1, iVar1 == 0);
         *param_3 = lVar2;
         if (lVar2 == 0) {
            return false;
         }

         cVar3 = ( iVar1 == 0 ) * '\x02';
         goto LAB_00100d2c;
      }

      if (param_1 != (char*)0x0) {
         lVar2 = app_get_pass(param_1, 0);
         *param_3 = lVar2;
         if (lVar2 == 0) {
            return false;
         }

         goto LAB_00100d65;
      }

   }

   if (param_3 != (long*)0x0) {
      *param_3 = 0;
   }

   cVar3 = '\0';
   if (param_2 == (char*)0x0) {
      LAB_00100d65:if (param_4 != (long*)0x0) {
         *param_4 = 0;
      }

      return true;
   }

   LAB_00100d2c:lVar2 = app_get_pass(param_2, cVar3);
   *param_4 = lVar2;
   return lVar2 != 0;
}
char *app_conf_try_string(CONF *param_1, char *param_2, char *param_3) {
   char *pcVar1;
   ERR_set_mark();
   pcVar1 = NCONF_get_string(param_1, param_2, param_3);
   if (pcVar1 != (char*)0x0) {
      ERR_clear_last_mark();
      return pcVar1;
   }

   ERR_pop_to_mark();
   return (char*)0x0;
}
int app_conf_try_number(CONF *param_1, char *param_2, char *param_3, long *param_4) {
   int iVar1;
   ERR_set_mark();
   iVar1 = NCONF_get_number_e(param_1, param_2, param_3, param_4);
   if (iVar1 == 0) {
      ERR_pop_to_mark();
      return 0;
   }

   ERR_clear_last_mark();
   return iVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */CONF *app_load_config_bio(BIO *param_1, long param_2) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   CONF *conf;
   CONF *pCVar4;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = -1;
   uVar3 = app_get0_libctx();
   conf = (CONF*)NCONF_new_ex(uVar3, 0);
   iVar2 = NCONF_load_bio(conf, param_1, &local_28);
   lVar1 = local_28;
   pCVar4 = conf;
   if (0 < iVar2) goto LAB_00100ebe;
   if (local_28 < 1) {
      uVar3 = opt_getprog();
      BIO_printf(_bio_err, "%s: Can\'t load ", uVar3);
      if (param_2 == 0) goto LAB_00100f61;
      LAB_00100f15:BIO_printf(_bio_err, "config file \"%s\"\n", param_2);
   }
 else {
      uVar3 = opt_getprog();
      BIO_printf(_bio_err, "%s: Error on line %ld of ", uVar3, lVar1);
      if (param_2 != 0) goto LAB_00100f15;
      LAB_00100f61:BIO_printf(_bio_err, "config input");
   }

   pCVar4 = (CONF*)0x0;
   NCONF_free(conf);
   LAB_00100ebe:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pCVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 add_oid_section(CONF *param_1) {
   int iVar1;
   char *section;
   stack_st_CONF_VALUE *psVar2;
   long lVar3;
   int iVar4;
   ERR_set_mark();
   section = NCONF_get_string(param_1, (char*)0x0, "oid_section");
   if (section == (char*)0x0) {
      ERR_pop_to_mark();
   }
 else {
      ERR_clear_last_mark();
      iVar4 = 0;
      psVar2 = NCONF_get_section(param_1, section);
      if (psVar2 == (stack_st_CONF_VALUE*)0x0) {
         BIO_printf(_bio_err, "problem loading oid section %s\n", section);
         return 0;
      }

      for (; iVar1 = OPENSSL_sk_num(psVar2),iVar4 < iVar1; iVar4 = iVar4 + 1) {
         lVar3 = OPENSSL_sk_value(psVar2, iVar4);
         iVar1 = OBJ_create(*(char**)( lVar3 + 0x10 ), *(char**)( lVar3 + 8 ), *(char**)( lVar3 + 8 ));
         if (iVar1 == 0) {
            BIO_printf(_bio_err, "problem creating object %s=%s\n", *(undefined8*)( lVar3 + 8 ), *(undefined8*)( lVar3 + 0x10 ));
            return 0;
         }

      }

   }

   return 1;
}
void cleanse(char *param_1) {
   size_t len;
   if (param_1 != (char*)0x0) {
      len = strlen(param_1);
      OPENSSL_cleanse(param_1, len);
      return;
   }

   return;
}
void clear_free(char *param_1) {
   size_t sVar1;
   if (param_1 != (char*)0x0) {
      sVar1 = strlen(param_1);
      CRYPTO_clear_free(param_1, sVar1, "apps/lib/apps.c", 0x25e);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void app_bail_out(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char *param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   char in_AL;
   long in_FS_OFFSET;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   undefined8 local_c0;
   undefined1 local_b8[8];
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = param_1;
      local_78 = param_2;
      local_68 = param_3;
      local_58 = param_4;
      local_48 = param_5;
      local_38 = param_6;
      local_28 = param_7;
      local_18 = param_8;
   }

   local_c0 = *(undefined8*)( in_FS_OFFSET + 0x28 );
   local_d0 = &stack0x00000008;
   local_c8 = local_b8;
   local_d8 = 8;
   local_d4 = 0x30;
   local_b0 = param_10;
   local_a8 = param_11;
   local_a0 = param_12;
   local_98 = param_13;
   local_90 = param_14;
   BIO_vprintf(_bio_err, param_9, &local_d8);
   ERR_print_errors(_bio_err);
   /* WARNING: Subroutine does not return */
   exit(1);
}
undefined8 chopup_args(int *param_1, byte *param_2) {
   byte *pbVar1;
   undefined8 *puVar2;
   ushort **ppuVar3;
   byte *pbVar4;
   void *addr;
   undefined8 uVar5;
   int iVar6;
   byte bVar7;
   long lVar8;
   param_1[1] = 0;
   if (*param_1 == 0) {
      *param_1 = 0x14;
      addr = CRYPTO_malloc(0xa0, "apps/lib/apps.c", 0x2b1);
      if (addr == (void*)0x0) {
         uVar5 = opt_getprog();
         /* WARNING: Subroutine does not return */
         app_bail_out("%s: Could not allocate %zu bytes for %s\n", uVar5, 0xa0, "argv space");
      }

      *(void**)( param_1 + 2 ) = addr;
      lVar8 = (long)param_1[1];
   }
 else {
      addr = *(void**)( param_1 + 2 );
      lVar8 = 0;
   }

   bVar7 = *param_2;
   if (bVar7 != 0) {
      ppuVar3 = __ctype_b_loc();
      do {
         if (( *(byte*)( (long)*ppuVar3 + (ulong)bVar7 * 2 + 1 ) & 0x20 ) == 0) {
            if (*param_1 <= (int)lVar8) {
               iVar6 = *param_1 + 0x14;
               *param_1 = iVar6;
               addr = CRYPTO_realloc(addr, iVar6 * 8, "apps/lib/apps.c", 0x6d);
               if (addr == (void*)0x0) {
                  return 0;
               }

               *(void**)( param_1 + 2 ) = addr;
               lVar8 = (long)param_1[1];
               bVar7 = *param_2;
            }

            iVar6 = (int)lVar8 + 1;
            puVar2 = (undefined8*)( (long)addr + lVar8 * 8 );
            if (( bVar7 == 0x27 ) || ( bVar7 == 0x22 )) {
               pbVar4 = param_2 + 1;
               param_1[1] = iVar6;
               *puVar2 = pbVar4;
               if (( param_2[1] != bVar7 ) && ( param_2[1] != 0 )) {
                  do {
                     pbVar1 = pbVar4 + 1;
                     pbVar4 = pbVar4 + 1;
                     if (*pbVar1 == 0) break;
                  }
 while ( *pbVar1 != bVar7 );
               }

               *pbVar4 = 0;
               param_2 = pbVar4 + 1;
               addr = *(void**)( param_1 + 2 );
               lVar8 = (long)param_1[1];
            }
 else {
               param_1[1] = iVar6;
               *puVar2 = param_2;
               bVar7 = *param_2;
               if (bVar7 == 0) {
                  lVar8 = (long)iVar6;
                  break;
               }

               do {
                  if (( *(byte*)( (long)*ppuVar3 + (ulong)bVar7 * 2 + 1 ) & 0x20 ) != 0) {
                     *param_2 = 0;
                     param_2 = param_2 + 1;
                     addr = *(void**)( param_1 + 2 );
                     lVar8 = (long)param_1[1];
                     goto LAB_001011fa;
                  }

                  bVar7 = param_2[1];
                  param_2 = param_2 + 1;
               }
 while ( bVar7 != 0 );
               lVar8 = (long)iVar6;
            }

         }
 else {
            param_2 = param_2 + 1;
         }

         LAB_001011fa:bVar7 = *param_2;
      }
 while ( bVar7 != 0 );
   }

   *(undefined8*)( (long)addr + lVar8 * 8 ) = 0;
   return 1;
}
void app_malloc(undefined8 param_1, undefined8 param_2) {
   void *pvVar1;
   undefined8 uVar2;
   pvVar1 = CRYPTO_malloc((int)param_1, "apps/lib/apps.c", 0x2b1);
   if (pvVar1 != (void*)0x0) {
      return;
   }

   uVar2 = opt_getprog();
   /* WARNING: Subroutine does not return */
   app_bail_out("%s: Could not allocate %zu bytes for %s\n", uVar2, param_1, param_2);
}
byte *next_item(byte *param_1) {
   byte bVar1;
   ushort **ppuVar2;
   byte bVar3;
   bVar3 = *param_1;
   ppuVar2 = __ctype_b_loc();
   if (bVar3 != 0x2c) {
      do {
         if (( *(byte*)( (long)*ppuVar2 + (ulong)bVar3 * 2 + 1 ) & 0x20 ) != 0) {
            if (bVar3 == 0) {
               LAB_00101427:bVar3 = *param_1;
               goto LAB_0010142e;
            }

            break;
         }

         if (bVar3 == 0) goto LAB_00101427;
         bVar3 = param_1[1];
         param_1 = param_1 + 1;
      }
 while ( bVar3 != 0x2c );
   }

   *param_1 = 0;
   bVar3 = param_1[1];
   bVar1 = *(byte*)( (long)*ppuVar2 + (ulong)bVar3 * 2 + 1 );
   while (param_1 = param_1 + 1,( bVar1 & 0x20 ) != 0) {
      bVar3 = param_1[1];
      bVar1 = *(byte*)( (long)*ppuVar2 + (ulong)bVar3 * 2 + 1 );
   }
;
   LAB_0010142e:if (bVar3 == 0) {
      param_1 = (byte*)0x0;
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 load_key_certs_crls(char *param_1, int param_2, int param_3, undefined8 param_4, char *param_5, int param_6, long *param_7, long *param_8, long *param_9, long *param_10, long *param_11, long *param_12, long *param_13) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   long lVar8;
   long lVar9;
   BIO *a;
   ulong uVar10;
   char *pcVar11;
   undefined8 *puVar12;
   long in_FS_OFFSET;
   long *local_130;
   long *local_128;
   char *local_110;
   char *local_108;
   int local_f8;
   int local_f0;
   int local_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_a8;
   char *local_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   local_128 = param_10;
   local_130 = param_12;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = app_get0_libctx();
   uVar4 = app_get0_propq();
   local_110 = param_1;
   if (param_7 == (long*)0x0) {
      if (param_8 != (long*)0x0) {
         ERR_set_mark();
         *param_8 = 0;
         local_108 = "public key";
         if (param_9 != (long*)0x0) goto LAB_0010155c;
         if (param_10 != (long*)0x0) goto LAB_0010156c;
         if (param_11 != (long*)0x0) goto LAB_00101582;
         if (param_12 != (long*)0x0) goto LAB_00101598;
         if (param_13 != (long*)0x0) goto LAB_001015ae;
         local_e0 = 3;
         goto LAB_001015c0;
      }

      if (param_9 != (long*)0x0) {
         ERR_set_mark();
         *param_9 = 0;
         local_108 = "key parameters";
         if (param_10 != (long*)0x0) goto LAB_0010156c;
         if (param_11 != (long*)0x0) goto LAB_00101582;
         if (param_12 != (long*)0x0) goto LAB_00101598;
         if (param_13 == (long*)0x0) {
            local_e0 = 2;
            goto LAB_001015c0;
         }

         LAB_001015ae:if (*param_13 != 0) goto LAB_001015b8;
         goto LAB_00101e30;
      }

      if (param_10 != (long*)0x0) {
         ERR_set_mark();
         *param_10 = 0;
         if (( param_11 != (long*)0x0 ) && ( *param_11 == 0 )) {
            lVar6 = OPENSSL_sk_new_null();
            *param_11 = lVar6;
            if (lVar6 == 0) {
               local_108 = "certificate";
               goto LAB_00101e46;
            }

         }

         local_108 = "certificate";
         LAB_00101f73:if (param_12 != (long*)0x0) goto LAB_00101598;
         if (param_13 == (long*)0x0) {
            local_e0 = 5;
            goto LAB_001015c0;
         }

         goto LAB_001015ae;
      }

      if (param_11 != (long*)0x0) {
         ERR_set_mark();
         if (*param_11 == 0) {
            lVar6 = OPENSSL_sk_new_null();
            *param_11 = lVar6;
            if (lVar6 == 0) {
               local_108 = "certificates";
               goto LAB_00101e46;
            }

         }

         local_108 = "certificates";
         goto LAB_00101f73;
      }

      if (param_12 != (long*)0x0) {
         ERR_set_mark();
         *param_12 = 0;
         if (( param_13 != (long*)0x0 ) && ( *param_13 == 0 )) {
            lVar6 = OPENSSL_sk_new_null();
            *param_13 = lVar6;
            if (lVar6 == 0) {
               local_108 = "CRL";
               goto LAB_00101e46;
            }

         }

         local_e0 = 6;
         local_108 = "CRL";
         goto LAB_001015c0;
      }

      if (param_13 != (long*)0x0) {
         ERR_set_mark();
         if (*param_13 == 0) {
            lVar6 = OPENSSL_sk_new_null();
            *param_13 = lVar6;
            if (lVar6 == 0) {
               local_108 = "CRLs";
               goto LAB_00101e46;
            }

         }

         local_e0 = 6;
         local_108 = "CRLs";
         goto LAB_001015c0;
      }

      if (param_6 == 0) {
         if (param_1 == (char*)0x0) {
            local_110 = "<stdin>";
         }

         uVar3 = 0;
         BIO_printf(_bio_err, "Internal error: nothing was requested to load from %s\n", local_110);
         goto LAB_00101780;
      }

   }
 else {
      ERR_set_mark();
      *param_7 = 0;
      if (param_8 == (long*)0x0) {
         if (param_9 != (long*)0x0) goto LAB_00101550;
         if (param_10 != (long*)0x0) goto LAB_001017c5;
         if (param_11 != (long*)0x0) goto LAB_00101d7a;
         if (param_12 != (long*)0x0) goto LAB_00101f29;
         if (param_13 == (long*)0x0) {
            local_e0 = 4;
            local_108 = "private key";
            goto LAB_001015c0;
         }

         LAB_00102022:if (*param_13 != 0) goto LAB_0010202c;
         local_108 = "private key";
         LAB_00101e30:lVar6 = OPENSSL_sk_new_null();
         *param_13 = lVar6;
         if (lVar6 != 0) goto LAB_001015b8;
         LAB_00101e46:if (param_6 == 0) {
            pcVar11 = "Out of memory loading";
            goto LAB_00101c65;
         }

         LAB_00101a29:OSSL_STORE_close(0);
         LAB_00101779:uVar3 = 0;
         LAB_0010177b:ERR_pop_to_mark();
         goto LAB_00101780;
      }

      *param_8 = 0;
      if (param_9 != (long*)0x0) {
         LAB_00101550:local_108 = "private key";
         LAB_0010155c:*param_9 = 0;
         if (param_10 != (long*)0x0) {
            LAB_0010156c:*param_10 = 0;
         }

         if (param_11 == (long*)0x0) {
            LAB_0010158c:if (param_12 != (long*)0x0) goto LAB_00101598;
            goto joined_r0x001015ac;
         }

         LAB_00101582:if (*param_11 != 0) goto LAB_0010158c;
         LAB_00101d90:lVar6 = OPENSSL_sk_new_null();
         *param_11 = lVar6;
         if (lVar6 != 0) goto LAB_0010158c;
         goto LAB_00101e46;
      }

      if (param_10 != (long*)0x0) {
         LAB_001017c5:local_108 = "private key";
         goto LAB_0010156c;
      }

      if (param_11 != (long*)0x0) {
         LAB_00101d7a:local_108 = "private key";
         if (*param_11 == 0) goto LAB_00101d90;
         goto LAB_0010158c;
      }

      if (param_12 == (long*)0x0) {
         if (param_13 != (long*)0x0) goto LAB_00102022;
         LAB_0010202c:local_e0 = 0;
         local_108 = "private key";
         goto LAB_001015c0;
      }

      LAB_00101f29:local_108 = "private key";
      LAB_00101598:*param_12 = 0;
      joined_r0x001015ac:if (param_13 != (long*)0x0) goto LAB_001015ae;
      LAB_001015b8:local_e0 = 0;
      LAB_001015c0:local_a8 = param_4;
      local_a0 = param_1;
      if (param_2 == 0xc) {
         pcVar11 = "PVK";
         LAB_001015fc:puVar12 = &local_98;
         OSSL_PARAM_construct_utf8_string(&local_d8, "input-type", pcVar11, 0);
         local_78 = local_b8;
         local_98 = local_d8;
         uStack_90 = uStack_d0;
         local_88 = local_c8;
         uStack_80 = uStack_c0;
         OSSL_PARAM_construct_end(&local_d8);
         local_50 = local_b8;
         local_70 = local_d8;
         uStack_68 = uStack_d0;
         local_60 = local_c8;
         uStack_58 = uStack_c0;
      }
 else {
         if (param_2 < 0xd) {
            if (param_2 == 4) {
               pcVar11 = "DER";
            }
 else {
               pcVar11 = "MSBLOB";
               puVar12 = (undefined8*)0x0;
               if (param_2 != 0xb) goto LAB_0010167a;
            }

            goto LAB_001015fc;
         }

         puVar12 = (undefined8*)0x0;
         pcVar11 = "PEM";
         if (param_2 == 0x8005) goto LAB_001015fc;
      }

      LAB_0010167a:if (param_1 == (char*)0x0) {
         if (param_3 != 0) {
            setbuf(_stdin, (char*)0x0);
            a = BIO_new_fp(_stdin, 0);
            if (a != (BIO*)0x0) {
               uVar5 = get_ui_method();
               lVar6 = OSSL_STORE_attach(a, &_LC52, uVar3, uVar4, uVar5, &local_a8, puVar12, 0, 0);
               BIO_free(a);
               local_110 = "<stdin>";
               goto LAB_001016b8;
            }

            local_110 = "<stdin>";
            goto LAB_00101c50;
         }

         pcVar11 = "No filename or uri specified for loading\n";
         if (param_6 != 0) goto LAB_00101a29;
         LAB_00101c65:BIO_printf(_bio_err, pcVar11);
         OSSL_STORE_close(0);
      }
 else {
         uVar5 = get_ui_method();
         lVar6 = OSSL_STORE_open_ex(param_1, uVar3, uVar4, uVar5, &local_a8, puVar12, 0, 0);
         LAB_001016b8:if (lVar6 == 0) {
            LAB_00101c50:if (param_6 != 0) goto LAB_00101a29;
            pcVar11 = "Could not open file or uri for loading";
            goto LAB_00101c65;
         }

         if (( local_e0 == 0 ) || ( iVar1 = iVar1 != 0 )) {
            local_f8 = 0;
            local_f0 = 0;
            LAB_001016e0:if (param_7 != (long*)0x0 || param_8 != (long*)0x0) goto LAB_00101888;
            LAB_001016ec:if (( ( ( param_11 != (long*)0x0 || param_13 != (long*)0x0 ) || param_9 != (long*)0x0 ) || local_130 != (long*)0x0 ) || local_128 != (long*)0x0) {
               do {
                  iVar1 = OSSL_STORE_eof(lVar6);
                  if (iVar1 != 0) {
                     param_8 = (long*)0x0;
                     param_7 = (long*)0x0;
                     goto LAB_00101729;
                  }

                  lVar8 = OSSL_STORE_load(lVar6);
               }
 while ( lVar8 == 0 );
               do {
                  uVar2 = OSSL_STORE_INFO_get_type(lVar8);
                  switch (uVar2) {
                     case 2:
              if (param_9 != (long *)0x0) {
                lVar9 = OSSL_STORE_INFO_get1_PARAMS(lVar8);
                *param_9 = lVar9;
                if (lVar9 != 0) goto LAB_0010186a;
LAB_00101958:
                OSSL_STORE_INFO_free(lVar8);
                goto LAB_00101960;
              }
LAB_0010186a:
              param_9 = (long *)0x0;
              break;
                     case 3:
switchD_00101820_caseD_3:
              if (param_8 != (long *)0x0) {
                lVar9 = OSSL_STORE_INFO_get1_PUBKEY(lVar8);
                *param_8 = lVar9;
                if (lVar9 == 0) goto LAB_00101958;
              }
              param_8 = (long *)0x0;
              break;
                     case 4:
              if (param_7 == (long *)0x0) goto switchD_00101820_caseD_3;
              lVar9 = OSSL_STORE_INFO_get1_PKEY(lVar8);
              *param_7 = lVar9;
              if (lVar9 == 0) goto LAB_00101958;
              param_7 = (long *)0x0;
              break;
                     case 5:
              if (local_128 != (long *)0x0) {
                lVar9 = OSSL_STORE_INFO_get1_CERT(lVar8);
                *local_128 = lVar9;
                if (lVar9 == 0) goto LAB_00101958;
LAB_00101911:
                local_f0 = local_f0 + 1;
                OSSL_STORE_INFO_free(lVar8);
                local_128 = (long *)0x0;
                goto LAB_001016e0;
              }
              if (param_11 == (long *)0x0) goto LAB_00101911;
              uVar3 = OSSL_STORE_INFO_get1_CERT(lVar8);
              iVar1 = X509_add_cert(*param_11,uVar3,0);
              local_f0 = local_f0 + iVar1;
LAB_00101a9e:
              OSSL_STORE_INFO_free(lVar8);
              if (iVar1 != 0) goto LAB_001016e0;
LAB_00101960:
              local_108 = (char *)OSSL_STORE_INFO_type_string(uVar2);
              if (param_6 == 0) {
                BIO_printf(_bio_err,"Error reading");
                OSSL_STORE_close(lVar6);
                if (local_108 != (char *)0x0) goto LAB_00101ba5;
                goto LAB_00101731;
              }
              OSSL_STORE_close(lVar6);
              if (local_108 == (char *)0x0) goto LAB_00101731;
              goto LAB_00101779;
                     case 6:
              if (local_130 == (long *)0x0) {
                if (param_13 != (long *)0x0) {
                  uVar3 = OSSL_STORE_INFO_get1_CRL(lVar8);
                  iVar1 = OPENSSL_sk_push(*param_13,uVar3);
                  local_f8 = local_f8 + iVar1;
                  goto LAB_00101a9e;
                }
              }
              else {
                lVar9 = OSSL_STORE_INFO_get1_CRL(lVar8);
                *local_130 = lVar9;
                if (lVar9 == 0) goto LAB_00101958;
              }
              local_f8 = local_f8 + 1;
              OSSL_STORE_INFO_free(lVar8);
              local_130 = (long *)0x0;
              goto LAB_001016e0;
                  }

                  OSSL_STORE_INFO_free(lVar8);
                  if (param_7 == (long*)0x0 && param_8 == (long*)0x0) goto LAB_001016ec;
                  LAB_00101888:do {
                     iVar1 = OSSL_STORE_eof(lVar6);
                     if (iVar1 != 0) goto LAB_00101729;
                     lVar8 = OSSL_STORE_load(lVar6);
                  }
 while ( lVar8 == 0 );
               }
 while ( true );
            }

            local_130 = (long*)0x0;
            param_9 = (long*)0x0;
            param_8 = (long*)0x0;
            param_7 = (long*)0x0;
            local_128 = (long*)0x0;
            LAB_00101729:OSSL_STORE_close(lVar6);
            LAB_00101731:if (0 < local_f0) {
               param_11 = (long*)0x0;
            }

            plVar7 = (long*)0x0;
            if (local_f8 < 1) {
               plVar7 = param_13;
            }

            local_108 = "private key";
            if (( ( ( param_7 == (long*)0x0 ) && ( local_108 = "public key" ),param_8 == (long*)0x0 ) ) && ( local_108 = "key parameters" ),param_9 == (long*)0x0) {
               if (plVar7 != (long*)0x0) {
                  local_108 = "CRLs";
                  goto LAB_0010176d;
               }

               uVar3 = 1;
               goto LAB_0010177b;
            }

            LAB_0010176d:if (param_6 != 0) goto LAB_00101779;
            BIO_printf(_bio_err, "Could not find");
         }
 else {
            if (param_6 != 0) {
               OSSL_STORE_close(lVar6);
               goto LAB_00101779;
            }

            BIO_printf(_bio_err, "Internal error trying to load");
            OSSL_STORE_close(lVar6);
         }

      }

      LAB_00101ba5:uVar10 = ERR_peek_last_error();
      if (param_5 == (char*)0x0) {
         BIO_printf(_bio_err, " %s", local_108);
      }
 else {
         pcVar11 = strstr(param_5, local_108);
         if (pcVar11 == (char*)0x0) {
            BIO_printf(_bio_err, " %s", local_108);
            BIO_printf(_bio_err, " of %s", param_5);
         }
 else {
            BIO_printf(_bio_err, " %s", param_5);
         }

      }

      if (local_110 != (char*)0x0) {
         BIO_printf(_bio_err, " from %s", local_110);
      }

      if (( uVar10 & 0x80000000 ) != 0) {
         pcVar11 = strerror((uint)uVar10 & 0x7fffffff);
         BIO_printf(_bio_err, ": %s", pcVar11);
         ERR_pop_to_mark();
         ERR_set_mark();
      }

      BIO_printf(_bio_err, "\n");
      ERR_print_errors(_bio_err);
      ERR_clear_last_mark();
   }

   uVar3 = 0;
   LAB_00101780:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long load_cert_pass(char *param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, char *param_5) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (param_5 == (char*)0x0) {
      param_5 = "certificate";
   }

   if (param_1 != (char*)0x0) {
      iVar1 = strncmp(param_1, "https://", 8);
      if (iVar1 == 0) {
         lVar2 = 0;
         BIO_printf(_bio_err, "Loading %s over HTTPS is unsupported\n", param_5);
         goto LAB_0010225d;
      }

      iVar1 = strncmp(param_1, "http://", 7);
      if (iVar1 == 0) {
         lVar2 = X509_load_http(param_1, 0, 0, 0);
         local_38 = lVar2;
         if (lVar2 == 0) {
            ERR_print_errors(_bio_err);
            BIO_printf(_bio_err, "Unable to load %s from %s\n", param_5, param_1);
         }

         goto LAB_0010225d;
      }

   }

   load_key_certs_crls(param_1, param_2, param_3, param_4, param_5, 0, 0, 0, 0, &local_38, 0, 0, 0);
   lVar2 = local_38;
   LAB_0010225d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long load_crl(char *param_1, undefined4 param_2, undefined4 param_3, undefined *param_4) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (param_4 == (undefined*)0x0) {
      param_4 = &_LC42;
   }

   if (param_1 != (char*)0x0) {
      iVar1 = strncmp(param_1, "https://", 8);
      if (iVar1 == 0) {
         lVar2 = 0;
         BIO_printf(_bio_err, "Loading %s over HTTPS is unsupported\n", param_4);
         goto LAB_00102395;
      }

      iVar1 = strncmp(param_1, "http://", 7);
      if (iVar1 == 0) {
         lVar2 = X509_CRL_load_http(param_1, 0, 0, 0);
         local_38 = lVar2;
         if (lVar2 == 0) {
            ERR_print_errors(_bio_err);
            BIO_printf(_bio_err, "Unable to load %s from %s\n", param_4, param_1);
         }

         goto LAB_00102395;
      }

   }

   load_key_certs_crls(param_1, param_2, param_3, 0, param_4, 0, 0, 0, 0, 0, 0, &local_38, 0);
   lVar2 = local_38;
   LAB_00102395:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 load_crl_crldp(undefined8 param_1) {
   int *piVar1;
   int iVar2;
   int iVar3;
   undefined8 *puVar4;
   GENERAL_NAME *a;
   ASN1_STRING *x;
   char *__s1;
   undefined8 uVar5;
   int iVar6;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   iVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = OPENSSL_sk_num(param_1);
   if (0 < iVar2) {
      do {
         puVar4 = (undefined8*)OPENSSL_sk_value(param_1, iVar6);
         piVar1 = (int*)*puVar4;
         if (( piVar1 != (int*)0x0 ) && ( *piVar1 == 0 )) {
            uVar5 = *(undefined8*)( piVar1 + 2 );
            for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar5),iVar2 < iVar3; iVar2 = iVar2 + 1) {
               a = (GENERAL_NAME*)OPENSSL_sk_value(uVar5, iVar2);
               x = (ASN1_STRING*)GENERAL_NAME_get0_value(a, &local_44);
               if (( ( ( local_44 == 6 ) && ( iVar3 = ASN1_STRING_length(x) ),6 < iVar3 ) ) && ( __s1 = (char*)ASN1_STRING_get0_data(x) ),__s1 != (char*)0x0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     uVar5 = load_crl(__s1, 0, 0, "CRL via CDP");
                     return uVar5;
                  }

                  goto LAB_00102576;
               }

            }

         }

         iVar6 = iVar6 + 1;
         iVar2 = OPENSSL_sk_num(param_1);
      }
 while ( iVar6 < iVar2 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   LAB_00102576:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
long crls_http_cb(X509_STORE_CTX *param_1) {
   int iVar1;
   long lVar2;
   X509 *x;
   void *pvVar3;
   X509_CRL *a;
   lVar2 = OPENSSL_sk_new_null();
   if (lVar2 != 0) {
      x = X509_STORE_CTX_get_current_cert(param_1);
      pvVar3 = X509_get_ext_d2i(x, 0x67, (int*)0x0, (int*)0x0);
      a = (X509_CRL*)load_crl_crldp(pvVar3);
      OPENSSL_sk_pop_free(pvVar3, &DIST_POINT_free);
      if (( a != (X509_CRL*)0x0 ) && ( iVar1 = iVar1 != 0 )) {
         pvVar3 = X509_get_ext_d2i(x, 0x359, (int*)0x0, (int*)0x0);
         a = (X509_CRL*)load_crl_crldp(pvVar3);
         OPENSSL_sk_pop_free(pvVar3, &DIST_POINT_free);
         if (a == (X509_CRL*)0x0) {
            return lVar2;
         }

         iVar1 = OPENSSL_sk_push(lVar2, a);
         if (iVar1 != 0) {
            return lVar2;
         }

      }

      X509_CRL_free(a);
      OPENSSL_sk_free(lVar2);
   }

   return 0;
}
undefined8 load_key(void *param_1, int param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, char *param_6) {
   void *ptr;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   if (param_6 == (char*)0x0) {
      param_6 = "private key";
   }

   ptr = (void*)0x0;
   if (param_2 == 8) {
      param_1 = (void*)make_engine_uri(param_5, param_1, param_6);
      ptr = param_1;
   }

   load_key_certs_crls(param_1, param_2, param_3, param_4, param_6, 0, &local_28, 0, 0, 0, 0, 0, 0);
   CRYPTO_free(ptr);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long load_pubkey(void *param_1, int param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, char *param_6) {
   long lVar1;
   void *ptr;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (param_6 == (char*)0x0) {
      param_6 = "public key";
   }

   ptr = (void*)0x0;
   if (param_2 == 8) {
      param_1 = (void*)make_engine_uri(param_5, param_1, param_6);
      ptr = param_1;
   }

   load_key_certs_crls(param_1, param_2, param_3, param_4, param_6, 1, 0, &local_48, 0, 0, 0, 0, 0);
   if (local_48 == 0) {
      load_key_certs_crls(param_1, param_2, param_3, param_4, param_6, 0, &local_48, 0, 0, 0, 0, 0, 0);
   }

   lVar1 = local_48;
   CRYPTO_free(ptr);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001028cd) *//* WARNING: Removing unreachable block (ram,0x00102900) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 load_keyparams_suppress(void) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   load_key_certs_crls();
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int load_cert_certs(undefined8 param_1, undefined8 *param_2, undefined8 *param_3, int param_4, undefined8 param_5, char *param_6, undefined8 param_7) {
   int iVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   char *pcVar5;
   size_t sVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   X509_NAME *pXVar9;
   char *pcVar10;
   X509 *pXVar11;
   undefined8 uVar12;
   if (( param_6 == (char*)0x0 ) && ( param_6 = "certificates" ),param_3 == (undefined8*)0x0) {
      param_6 = "certificate";
   }

   if (( param_4 == 0 ) || ( ( iVar1 = OPENSSL_strncasecmp(param_1, "http://", 7) ),iVar1 != 0 && ( iVar1 = OPENSSL_strncasecmp(param_1, "https://", 8) ),iVar1 != 0 )) {
      pcVar5 = (char*)get_passwd(param_5, param_6);
      iVar1 = load_key_certs_crls(param_1, 0, 0, pcVar5, param_6, 0, 0, 0, 0, param_2, param_3, 0, 0);
      if (pcVar5 != (char*)0x0) {
         sVar6 = strlen(pcVar5);
         CRYPTO_clear_free(pcVar5, sVar6, "apps/lib/apps.c", 0x25e);
      }

      if (iVar1 != 0) {
         if (param_2 != (undefined8*)0x0) {
            pXVar11 = (X509*)*param_2;
            X509_get_extension_flags(pXVar11);
            uVar7 = X509_get0_notAfter(pXVar11);
            uVar8 = X509_get0_notBefore(pXVar11);
            iVar2 = X509_cmp_timeframe(param_7, uVar8, uVar7);
            if (iVar2 != 0) {
               pcVar5 = "not yet valid";
               if (0 < iVar2) {
                  pcVar5 = "has expired";
               }

               pXVar9 = X509_get_subject_name(pXVar11);
               pcVar10 = X509_NAME_oneline(pXVar9, (char*)0x0, 0);
               BIO_printf(_bio_err, "Warning: certificate from \'%s\' with subject \'%s\' %s\n", param_1, pcVar10, pcVar5);
               CRYPTO_free(pcVar10);
            }

         }

         if (param_3 == (undefined8*)0x0) {
            return iVar1;
         }

         uVar7 = *param_3;
         for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar7),iVar2 < iVar3; iVar2 = iVar2 + 1) {
            pXVar11 = (X509*)OPENSSL_sk_value(uVar7, iVar2);
            uVar4 = X509_get_extension_flags(pXVar11);
            uVar8 = X509_get0_notAfter(pXVar11);
            uVar12 = X509_get0_notBefore(pXVar11);
            iVar3 = X509_cmp_timeframe(param_7, uVar12, uVar8);
            if (iVar3 != 0) {
               pcVar5 = "has expired";
               if (iVar3 < 1) {
                  pcVar5 = "not yet valid";
               }

               pXVar9 = X509_get_subject_name(pXVar11);
               pcVar10 = X509_NAME_oneline(pXVar9, (char*)0x0, 0);
               BIO_printf(_bio_err, "Warning: certificate from \'%s\' with subject \'%s\' %s\n", param_1, pcVar10, pcVar5);
               CRYPTO_free(pcVar10);
            }

            if (( uVar4 & 0x50 ) == 0) {
               pXVar9 = X509_get_subject_name(pXVar11);
               pcVar5 = X509_NAME_oneline(pXVar9, (char*)0x0, 0);
               BIO_printf(_bio_err, "Warning: certificate from \'%s\' with subject \'%s\' %s\n", param_1, pcVar5, "is not a CA cert");
               CRYPTO_free(pcVar5);
            }

         }

         return iVar1;
      }

      if (param_3 != (undefined8*)0x0) {
         OSSL_STACK_OF_X509_free(*param_3);
         *param_3 = 0;
      }

   }
 else {
      BIO_printf(_bio_err, "error: HTTP retrieval not allowed for %s\n", param_6);
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long load_certs_multifile(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   lVar2 = OPENSSL_sk_new_null();
   if (param_1 == 0) {
      uVar4 = 0;
   }
 else {
      if (lVar2 != 0) {
         do {
            lVar3 = next_item(param_1);
            iVar1 = load_cert_certs(param_1, 0, &local_48, 0, param_2, param_3, param_4);
            uVar4 = local_48;
            if (iVar1 == 0) goto LAB_00102d14;
            iVar1 = X509_add_certs(lVar2, local_48, 5);
            if (iVar1 == 0) goto LAB_00102d4b;
            OSSL_STACK_OF_X509_free(uVar4);
            local_48 = 0;
            param_1 = lVar3;
         }
 while ( lVar3 != 0 );
         goto LAB_00102d26;
      }

      uVar4 = 0;
      LAB_00102d4b:BIO_printf(_bio_err, "out of memory\n");
   }

   LAB_00102d14:OSSL_STACK_OF_X509_free(uVar4);
   OSSL_STACK_OF_X509_free(lVar2);
   lVar2 = 0;
   LAB_00102d26:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
X509_STORE *load_certstore(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   X509 *x;
   X509_STORE *v;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (param_1 == 0) {
      LAB_00102e80:v = (X509_STORE*)0x0;
   }
 else {
      v = (X509_STORE*)0x0;
      do {
         local_48 = 0;
         lVar4 = next_item(param_1);
         iVar2 = load_cert_certs(param_1, 0, &local_48, 1, param_2, param_3, param_4);
         uVar1 = local_48;
         if (iVar2 == 0) {
            X509_STORE_free(v);
            goto LAB_00102e80;
         }

         if (( v == (X509_STORE*)0x0 ) && ( v = X509_STORE_new() ),v == (X509_STORE*)0x0) {
            LAB_00102e78:OSSL_STACK_OF_X509_free(uVar1);
            goto LAB_00102e80;
         }

         for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar1),iVar2 < iVar3; iVar2 = iVar2 + 1) {
            x = (X509*)OPENSSL_sk_value(uVar1, iVar2);
            iVar3 = X509_STORE_add_cert(v, x);
            if (iVar3 == 0) {
               X509_STORE_free(v);
               goto LAB_00102e78;
            }

         }

         OSSL_STACK_OF_X509_free(uVar1);
         local_48 = 0;
         param_1 = lVar4;
      }
 while ( lVar4 != 0 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return v;
}
ulong load_certs(undefined8 param_1, undefined4 param_2, long *param_3, undefined8 param_4, char *param_5) {
   long lVar1;
   ulong uVar2;
   lVar1 = *param_3;
   if (param_5 == (char*)0x0) {
      param_5 = "certificates";
   }

   uVar2 = load_key_certs_crls(param_1, 0, param_2, param_4, param_5, 0, 0, 0, 0, 0, param_3, 0, 0);
   if (( (int)uVar2 == 0 ) && ( lVar1 == 0 )) {
      OSSL_STACK_OF_X509_free(*param_3);
      *param_3 = 0;
      return uVar2 & 0xffffffff;
   }

   return uVar2;
}
ulong load_crls(undefined8 param_1, long *param_2, undefined8 param_3, undefined *param_4) {
   long lVar1;
   ulong uVar2;
   lVar1 = *param_2;
   if (param_4 == (undefined*)0x0) {
      param_4 = &_LC43;
   }

   uVar2 = load_key_certs_crls(param_1, 0, 0, param_3, param_4, 0, 0, 0, 0, 0, 0, 0, param_2);
   if (( (int)uVar2 == 0 ) && ( lVar1 == 0 )) {
      OPENSSL_sk_pop_free(*param_2, X509_CRL_free);
      *param_2 = 0;
      return uVar2 & 0xffffffff;
   }

   return uVar2;
}
/* WARNING: Removing unreachable block (ram,0x0010304b) *//* WARNING: Removing unreachable block (ram,0x00103050) *//* WARNING: Removing unreachable block (ram,0x00103080) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 load_keyparams(void) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   load_key_certs_crls();
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
undefined8 set_cert_ex(undefined8 param_1, long param_2) {
   undefined8 uVar1;
   if (param_2 != 0) {
      uVar1 = set_multi_opts_part_0(param_1, param_2, cert_tbl_4);
      return uVar1;
   }

   return 0;
}
undefined8 set_name_ex(ulong *param_1, long param_2) {
   ulong uVar1;
   int iVar2;
   if (param_2 == 0) {
      return 0;
   }

   iVar2 = set_multi_opts_part_0(param_1, param_2, ex_tbl_3);
   if (iVar2 != 0) {
      uVar1 = *param_1;
      if (( uVar1 != 0 ) && ( ( uVar1 & 0xf0000 ) == 0 )) {
         *param_1 = uVar1 | 0x20000;
      }

      return 1;
   }

   return 0;
}
undefined8 set_dateopt(undefined8 *param_1, undefined8 param_2) {
   int iVar1;
   iVar1 = OPENSSL_strcasecmp(param_2, "rfc_822");
   if (iVar1 == 0) {
      *param_1 = 0;
   }
 else {
      iVar1 = OPENSSL_strcasecmp(param_2, "iso_8601");
      if (iVar1 != 0) {
         return 0;
      }

      *param_1 = 1;
   }

   return 1;
}
undefined8 set_ext_copy(undefined4 *param_1, undefined8 param_2) {
   int iVar1;
   iVar1 = OPENSSL_strcasecmp(param_2, &_LC76);
   if (iVar1 == 0) {
      *param_1 = 0;
   }
 else {
      iVar1 = OPENSSL_strcasecmp(param_2, &_LC77);
      if (iVar1 == 0) {
         *param_1 = 1;
      }
 else {
         iVar1 = OPENSSL_strcasecmp(param_2, "copyall");
         if (iVar1 != 0) {
            return 0;
         }

         *param_1 = 2;
      }

   }

   return 1;
}
int copy_extensions(X509 *param_1, X509_REQ *param_2, int param_3) {
   int iVar1;
   stack_st_X509_EXTENSION *psVar2;
   X509_EXTENSION *ex;
   ASN1_OBJECT *obj;
   X509_EXTENSION *a;
   int iVar3;
   if (( param_1 == (X509*)0x0 ) || ( param_2 == (X509_REQ*)0x0 )) {
      return 0;
   }

   if (param_3 == 0) {
      return 1;
   }

   iVar3 = 0;
   psVar2 = X509_REQ_get_extensions(param_2);
   iVar1 = OPENSSL_sk_num(psVar2);
   if (0 < iVar1) {
      do {
         ex = (X509_EXTENSION*)OPENSSL_sk_value(psVar2, iVar3);
         obj = X509_EXTENSION_get_object(ex);
         iVar1 = X509_get_ext_by_OBJ(param_1, obj, -1);
         if (iVar1 == -1) {
            LAB_001032f7:iVar1 = X509_add_ext(param_1, ex, -1);
            if (iVar1 == 0) goto LAB_00103325;
         }
 else if (param_3 != 1) {
            do {
               a = X509_delete_ext(param_1, iVar1);
               X509_EXTENSION_free(a);
               iVar1 = X509_get_ext_by_OBJ(param_1, obj, -1);
            }
 while ( iVar1 != -1 );
            goto LAB_001032f7;
         }

         iVar3 = iVar3 + 1;
         iVar1 = OPENSSL_sk_num(psVar2);
      }
 while ( iVar3 < iVar1 );
   }

   iVar1 = 1;
   LAB_00103325:OPENSSL_sk_pop_free(psVar2, X509_EXTENSION_free);
   return iVar1;
}
void print_name(BIO *param_1, char *param_2, X509_NAME *param_3) {
   char *buf;
   int indent;
   ulong flags;
   flags = nmflag;
   if (nmflag_set == '\0') {
      if (param_1 == (BIO*)0x0) {
         return;
      }

      if (param_2 == (char*)0x0) {
         flags = 0x20312;
         indent = 0;
      }
 else {
         BIO_puts(param_1, param_2);
         flags = 0x20312;
         indent = 0;
      }

   }
 else {
      if (param_1 == (BIO*)0x0) {
         return;
      }

      if (param_2 != (char*)0x0) {
         BIO_puts(param_1, param_2);
      }

      if (( (uint)flags & 0xf0000 ) == 0x40000) {
         BIO_puts(param_1, "\n");
         indent = 4;
      }
 else {
         indent = 0;
         if (flags == 0) {
            buf = X509_NAME_oneline(param_3, (char*)0x0, 0);
            BIO_puts(param_1, buf);
            BIO_puts(param_1, "\n");
            CRYPTO_free(buf);
            return;
         }

      }

   }

   X509_NAME_print_ex(param_1, param_3, indent, flags);
   BIO_puts(param_1, "\n");
   return;
}
void dump_cert_text(BIO *param_1, X509 *param_2) {
   X509_NAME *pXVar1;
   char *buf;
   int indent;
   ulong flags;
   pXVar1 = X509_get_subject_name(param_2);
   print_name(param_1, "subject=", pXVar1);
   pXVar1 = X509_get_issuer_name(param_2);
   flags = nmflag;
   if (nmflag_set == '\0') {
      if (param_1 == (BIO*)0x0) {
         return;
      }

      flags = 0x20312;
      BIO_puts(param_1, "issuer=");
      indent = 0;
   }
 else {
      if (param_1 == (BIO*)0x0) {
         return;
      }

      BIO_puts(param_1, "issuer=");
      if (( (uint)flags & 0xf0000 ) == 0x40000) {
         BIO_puts(param_1, "\n");
         indent = 4;
      }
 else {
         indent = 0;
         if (flags == 0) {
            buf = X509_NAME_oneline(pXVar1, (char*)0x0, 0);
            BIO_puts(param_1, buf);
            BIO_puts(param_1, "\n");
            CRYPTO_free(buf);
            return;
         }

      }

   }

   X509_NAME_print_ex(param_1, pXVar1, indent, flags);
   BIO_puts(param_1, "\n");
   return;
}
void print_bignum_var(BIO *param_1, BIGNUM *param_2, undefined8 param_3, undefined8 param_4, byte *param_5) {
   int iVar1;
   uint uVar2;
   byte *pbVar3;
   char *pcVar4;
   long lVar5;
   int iVar6;
   BIO_printf(param_1, "    static unsigned char %s_%d[] = {");
   iVar1 = BN_is_zero(param_2);
   if (iVar1 == 0) {
      iVar1 = BN_bn2bin(param_2, param_5);
      if (0 < iVar1) {
         iVar6 = 0;
         if (0 < iVar1 + -1) {
            iVar6 = 0;
            pbVar3 = param_5;
            while (true) {
               pcVar4 = "\n        ";
               if (0x19999999 < ( ( uint )(iVar6 * -0x33333333) >> 1 | ( uint )(( iVar6 * -0x33333333 & 1U ) != 0) << 0x1f )) {
                  pcVar4 = " ";
               }

               iVar6 = iVar6 + 1;
               BIO_printf(param_1, pcVar4);
               BIO_printf(param_1, "0x%02X,", ( ulong ) * pbVar3);
               if (iVar1 + -1 <= iVar6) break;
               pbVar3 = pbVar3 + 1;
            }
;
            if (iVar1 <= iVar6) goto LAB_00103626;
         }

         lVar5 = (long)iVar6;
         do {
            uVar2 = (int)lVar5 * -0x33333333;
            pcVar4 = " ";
            if (( uVar2 >> 1 | ( uint )(( uVar2 & 1 ) != 0) << 0x1f ) < 0x1999999a) {
               pcVar4 = "\n        ";
            }

            BIO_printf(param_1, pcVar4);
            pbVar3 = param_5 + lVar5;
            lVar5 = lVar5 + 1;
            BIO_printf(param_1, "0x%02X", ( ulong ) * pbVar3);
         }
 while ( (int)lVar5 < iVar1 );
      }

   }
 else {
      BIO_printf(param_1, "\n        0x00");
   }

   LAB_00103626:BIO_printf(param_1, "\n    };\n");
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010378b) */void print_array(BIO *param_1, undefined8 param_2, uint param_3, byte *param_4) {
   uint uVar1;
   byte *pbVar2;
   long lVar3;
   int iVar4;
   BIO_printf(param_1, "unsigned char %s[%d] = {", param_2, (ulong)param_3);
   if (0 < (int)param_3) {
      if (0 < (int)( param_3 - 1 )) {
         iVar4 = 0;
         pbVar2 = param_4;
         do {
            BIO_printf(param_1, "\n    ");
            BIO_printf(param_1, "0x%02X, ", ( ulong ) * pbVar2);
            while (true) {
               iVar4 = iVar4 + 1;
               if ((int)( param_3 - 1 ) <= iVar4) {
                  if (iVar4 < (int)param_3) goto LAB_001037f6;
                  goto LAB_00103860;
               }

               pbVar2 = pbVar2 + 1;
               if (( ( uint )(iVar4 * -0x33333333) >> 1 | ( uint )(( iVar4 * -0x33333333 & 1U ) != 0) << 0x1f ) < 0x1999999a) break;
               BIO_printf(param_1, "0x%02X, ", ( ulong ) * pbVar2);
            }
;
         }
 while ( true );
      }

      iVar4 = 0;
      LAB_001037f6:lVar3 = (long)iVar4;
      uVar1 = ( uint )(iVar4 * -0x33333333) >> 1 | ( uint )(( iVar4 * -0x33333333 & 1U ) != 0) << 0x1f;
      while (true) {
         if (uVar1 < 0x1999999a) {
            BIO_printf(param_1, "\n    ");
         }

         pbVar2 = param_4 + lVar3;
         lVar3 = lVar3 + 1;
         BIO_printf(param_1, "0x%02X", ( ulong ) * pbVar2);
         if ((int)param_3 <= (int)lVar3) break;
         uVar1 = (int)lVar3 * -0x33333333;
         uVar1 = uVar1 >> 1 | ( uint )(( uVar1 & 1 ) != 0) << 0x1f;
      }
;
   }

   LAB_00103860:BIO_printf(param_1, "\n};\n");
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */X509_STORE *setup_verify(long param_1, int param_2, char *param_3, int param_4, long param_5, int param_6) {
   int iVar1;
   X509_STORE *v;
   undefined8 uVar2;
   undefined8 uVar3;
   X509_LOOKUP_METHOD *pXVar4;
   X509_LOOKUP *pXVar5;
   v = X509_STORE_new();
   uVar2 = app_get0_libctx();
   uVar3 = app_get0_propq();
   if (v != (X509_STORE*)0x0) {
      if (( param_1 != 0 ) || ( param_2 == 0 )) {
         pXVar4 = X509_LOOKUP_file();
         pXVar5 = X509_STORE_add_lookup(v, pXVar4);
         if (pXVar5 == (X509_LOOKUP*)0x0) goto LAB_00103987;
         if (param_1 == 0) {
            X509_LOOKUP_ctrl_ex(pXVar5, 1, 0, 3, 0, uVar2, uVar3);
         }
 else {
            iVar1 = X509_LOOKUP_ctrl_ex(pXVar5, 1, param_1, 1, 0, uVar2, uVar3);
            if (iVar1 < 1) {
               ERR_clear_error();
               iVar1 = X509_LOOKUP_ctrl_ex(pXVar5, 1, param_1, 2, 0, uVar2);
               if (iVar1 < 1) {
                  BIO_printf(_bio_err, "Error loading file %s\n", param_1);
                  goto LAB_00103987;
               }

            }

         }

      }

      if (( param_3 != (char*)0x0 ) || ( param_4 == 0 )) {
         pXVar4 = X509_LOOKUP_hash_dir();
         pXVar5 = X509_STORE_add_lookup(v, pXVar4);
         if (pXVar5 == (X509_LOOKUP*)0x0) goto LAB_00103987;
         if (param_3 == (char*)0x0) {
            X509_LOOKUP_ctrl(pXVar5, 2, (char*)0x0, 3, (char**)0x0);
         }
 else {
            iVar1 = X509_LOOKUP_ctrl(pXVar5, 2, param_3, 1, (char**)0x0);
            if (iVar1 < 1) {
               BIO_printf(_bio_err, "Error loading directory %s\n", param_3);
               goto LAB_00103987;
            }

         }

      }

      if (( param_5 == 0 ) && ( param_6 != 0 )) {
         LAB_0010390c:ERR_clear_error();
         return v;
      }

      pXVar4 = (X509_LOOKUP_METHOD*)X509_LOOKUP_store();
      pXVar5 = X509_STORE_add_lookup(v, pXVar4);
      if (pXVar5 != (X509_LOOKUP*)0x0) {
         iVar1 = X509_LOOKUP_ctrl_ex(pXVar5, 3, param_5, 0, 0, uVar2, uVar3);
         if (iVar1 != 0) goto LAB_0010390c;
         if (param_5 != 0) {
            BIO_printf(_bio_err, "Error loading store URI %s\n", param_5, 0x103938);
         }

      }

   }

   LAB_00103987:ERR_print_errors(_bio_err);
   X509_STORE_free(v);
   return (X509_STORE*)0x0;
}
void index_name_cmp(long param_1, long param_2) {
   strcmp(*(char**)( param_1 + 0x28 ), *(char**)( param_2 + 0x28 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */BIGNUM *load_serial(char *param_1, uint *param_2, int param_3, undefined8 *param_4) {
   int iVar1;
   ASN1_INTEGER *ai;
   BIO *bp;
   BIGNUM *rnd;
   ASN1_INTEGER *pAVar2;
   long in_FS_OFFSET;
   char acStack_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ai = ASN1_INTEGER_new();
   if (ai == (ASN1_INTEGER*)0x0) {
      LAB_00103c70:bp = (BIO*)0x0;
   }
 else {
      bp = BIO_new_file(param_1, "r");
      if (param_2 != (uint*)0x0) {
         *param_2 = ( uint )(bp != (BIO*)0x0);
      }

      if (bp == (BIO*)0x0) {
         if (param_3 == 0) {
            perror(param_1);
         }
 else {
            ERR_clear_error();
            rnd = BN_new();
            if (rnd == (BIGNUM*)0x0) {
               bp = (BIO*)0x0;
               BIO_printf(_bio_err, "Out of memory\n");
               goto LAB_00103cae;
            }

            iVar1 = BN_rand(rnd, 0x9f, -1, 0);
            if (iVar1 != 0) {
               pAVar2 = BN_to_ASN1_INTEGER(rnd, ai);
               if (pAVar2 != (ASN1_INTEGER*)0x0) goto LAB_00103bbe;
            }

            BIO_printf(_bio_err, "Error creating random number to store in %s\n", param_1);
            BN_free(rnd);
         }

         goto LAB_00103c70;
      }

      iVar1 = a2i_ASN1_INTEGER(bp, ai, acStack_448, 0x400);
      if (iVar1 == 0) {
         BIO_printf(_bio_err, "Unable to load number from %s\n", param_1);
      }
 else {
         rnd = ASN1_INTEGER_to_BN(ai, (BIGNUM*)0x0);
         if (rnd != (BIGNUM*)0x0) {
            LAB_00103bbe:if (param_4 != (undefined8*)0x0) {
               *param_4 = ai;
               ai = (ASN1_INTEGER*)0x0;
            }

            goto LAB_00103bc8;
         }

         BIO_printf(_bio_err, "Error converting number from bin to BIGNUM\n");
      }

   }

   LAB_00103cae:rnd = (BIGNUM*)0x0;
   ERR_print_errors(_bio_err);
   LAB_00103bc8:BIO_free(bp);
   ASN1_INTEGER_free(ai);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return rnd;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 save_serial(char *param_1, char *param_2, BIGNUM *param_3, undefined8 *param_4) {
   size_t sVar1;
   size_t sVar2;
   BIO *bp;
   ASN1_INTEGER *a;
   undefined8 uVar3;
   long in_FS_OFFSET;
   char acStack_138[264];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar1 = strlen(param_1);
   if (param_2 == (char*)0x0) {
      if (0xff < (int)sVar1) goto LAB_00103e20;
      OPENSSL_strlcpy(acStack_138, param_1, 0x100);
      LAB_00103d6a:bp = BIO_new_file(acStack_138, "w");
      if (bp == (BIO*)0x0) goto LAB_00103e35;
      a = BN_to_ASN1_INTEGER(param_3, (ASN1_INTEGER*)0x0);
      if (a != (ASN1_INTEGER*)0x0) {
         uVar3 = 1;
         i2a_ASN1_INTEGER(bp, a);
         BIO_puts(bp, "\n");
         if (param_4 != (undefined8*)0x0) {
            *param_4 = a;
            a = (ASN1_INTEGER*)0x0;
         }

         goto LAB_00103dc6;
      }

      BIO_printf(_bio_err, "error converting serial to ASN.1 format\n");
   }
 else {
      sVar2 = strlen(param_2);
      if ((int)sVar1 + 1 + (int)sVar2 < 0x100) {
         BIO_snprintf(acStack_138, 0x100, "%s.%s", param_1, param_2);
         goto LAB_00103d6a;
      }

      LAB_00103e20:BIO_printf(_bio_err, "File name too long\n");
      LAB_00103e35:bp = (BIO*)0x0;
   }

   a = (ASN1_INTEGER*)0x0;
   uVar3 = 0;
   ERR_print_errors(_bio_err);
   LAB_00103dc6:BIO_free_all(bp);
   ASN1_INTEGER_free(a);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 rotate_serial(char *param_1, char *param_2, char *param_3) {
   size_t sVar1;
   size_t sVar2;
   size_t sVar3;
   int *piVar4;
   undefined8 uVar5;
   int iVar6;
   int iVar7;
   long in_FS_OFFSET;
   char acStack_238[256];
   char local_138[264];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar1 = strlen(param_1);
   sVar2 = strlen(param_3);
   sVar3 = strlen(param_2);
   iVar6 = (int)sVar1 + (int)sVar2;
   iVar7 = (int)sVar1 + (int)sVar3;
   if (iVar6 < iVar7) {
      iVar6 = iVar7;
   }

   if (iVar6 < 0xff) {
      BIO_snprintf(acStack_238, 0x100, "%s.%s", param_1, param_2);
      BIO_snprintf(local_138, 0x100, "%s.%s", param_1, param_3);
      iVar6 = rename(param_1, local_138);
      if (iVar6 < 0) {
         piVar4 = __errno_location();
         if (( *piVar4 != 0x14 ) && ( *piVar4 != 2 )) {
            BIO_printf(_bio_err, "Unable to rename %s to %s\n", param_1, local_138);
            perror("reason");
            goto LAB_00103f85;
         }

      }

      iVar6 = rename(acStack_238, param_1);
      if (-1 < iVar6) {
         uVar5 = 1;
         goto LAB_00103f4a;
      }

      BIO_printf(_bio_err, "Unable to rename %s to %s\n", acStack_238, param_1);
      perror("reason");
      rename(local_138, param_1);
   }
 else {
      BIO_printf(_bio_err, "File name too long\n");
   }

   LAB_00103f85:ERR_print_errors(_bio_err);
   uVar5 = 0;
   LAB_00103f4a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint rand_serial(BIGNUM *param_1, ASN1_INTEGER *param_2) {
   int iVar1;
   uint uVar2;
   ASN1_INTEGER *pAVar3;
   BIGNUM *rnd;
   if (param_1 == (BIGNUM*)0x0) {
      rnd = BN_new();
      if (rnd != (BIGNUM*)0x0) {
         uVar2 = BN_rand(rnd, 0x9f, -1, 0);
         if (( uVar2 != 0 ) && ( uVar2 = 1 ),param_2 != (ASN1_INTEGER*)0x0) {
            pAVar3 = BN_to_ASN1_INTEGER(rnd, param_2);
            uVar2 = ( uint )(pAVar3 != (ASN1_INTEGER*)0x0);
         }

         BN_free(rnd);
         return uVar2;
      }

   }
 else {
      iVar1 = BN_rand(param_1, 0x9f, -1, 0);
      if (iVar1 != 0) {
         if (param_2 != (ASN1_INTEGER*)0x0) {
            pAVar3 = BN_to_ASN1_INTEGER(param_1, param_2);
            return ( uint )(pAVar3 != (ASN1_INTEGER*)0x0);
         }

         return 1;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 index_index(int *param_1) {
   long lVar1;
   int iVar2;
   iVar2 = TXT_DB_create_index(*(TXT_DB**)( param_1 + 2 ), 3, (qual*)0x0, index_serial_LHASH_HASH, index_serial_LHASH_COMP);
   if (iVar2 == 0) {
      lVar1 = *(long*)( param_1 + 2 );
      BIO_printf(_bio_err, "Error creating serial number index:(%ld,%ld,%ld)\n", *(undefined8*)( lVar1 + 0x20 ), *(undefined8*)( lVar1 + 0x28 ), *(undefined8*)( lVar1 + 0x30 ));
      LAB_00104185:ERR_print_errors(_bio_err);
      return 0;
   }

   if (*param_1 != 0) {
      iVar2 = TXT_DB_create_index(*(TXT_DB**)( param_1 + 2 ), 5, index_name_qual, index_name_LHASH_HASH, index_name_LHASH_COMP);
      if (iVar2 == 0) {
         lVar1 = *(long*)( param_1 + 2 );
         BIO_printf(_bio_err, "Error creating name index:(%ld,%ld,%ld)\n", *(undefined8*)( lVar1 + 0x20 ), *(undefined8*)( lVar1 + 0x28 ), *(undefined8*)( lVar1 + 0x30 ));
         goto LAB_00104185;
      }

   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 save_index(char *param_1, char *param_2, int *param_3) {
   size_t sVar1;
   size_t sVar2;
   BIO *pBVar3;
   long lVar4;
   undefined8 uVar5;
   undefined *puVar6;
   long in_FS_OFFSET;
   char acStack_348[256];
   char local_248[256];
   char local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar1 = strlen(param_1);
   sVar2 = strlen(param_2);
   if ((int)sVar1 + (int)sVar2 < 0xfa) {
      BIO_snprintf(local_148, 0x100, "%s.attr", param_1);
      BIO_snprintf(local_248, 0x100, "%s.attr.%s", param_1, param_2);
      BIO_snprintf(acStack_348, 0x100, "%s.%s", param_1, param_2);
      pBVar3 = BIO_new_file(acStack_348, "w");
      if (pBVar3 == (BIO*)0x0) {
         perror(param_1);
         BIO_printf(_bio_err, "Unable to open \'%s\'\n", param_1);
      }
 else {
         lVar4 = TXT_DB_write(pBVar3, *(TXT_DB**)( param_3 + 2 ));
         BIO_free(pBVar3);
         if (0 < (int)lVar4) {
            pBVar3 = BIO_new_file(local_248, "w");
            if (pBVar3 != (BIO*)0x0) {
               puVar6 = &_LC108;
               if (*param_3 != 0) {
                  puVar6 = &_LC107;
               }

               BIO_printf(pBVar3, "unique_subject = %s\n", puVar6);
               BIO_free(pBVar3);
               uVar5 = 1;
               goto LAB_00104303;
            }

            perror(local_148);
            BIO_printf(_bio_err, "Unable to open \'%s\'\n", local_148);
         }

      }

   }
 else {
      BIO_printf(_bio_err, "File name too long\n");
   }

   ERR_print_errors(_bio_err);
   uVar5 = 0;
   LAB_00104303:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 rotate_index(char *param_1, char *param_2, char *param_3) {
   size_t sVar1;
   size_t sVar2;
   size_t sVar3;
   int *piVar4;
   undefined8 uVar5;
   int iVar6;
   int iVar7;
   long in_FS_OFFSET;
   char local_548[256];
   char local_448[256];
   char local_348[256];
   char local_248[256];
   char local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar1 = strlen(param_1);
   sVar2 = strlen(param_3);
   sVar3 = strlen(param_2);
   iVar6 = (int)sVar1 + (int)sVar2;
   iVar7 = (int)sVar1 + (int)sVar3;
   if (iVar6 < iVar7) {
      iVar6 = iVar7;
   }

   if (iVar6 < 0xfa) {
      BIO_snprintf(local_148, 0x100, "%s.attr", param_1);
      BIO_snprintf(local_248, 0x100, "%s.attr.%s", param_1, param_3);
      BIO_snprintf(local_348, 0x100, "%s.attr.%s", param_1, param_2);
      BIO_snprintf(local_448, 0x100, "%s.%s", param_1, param_3);
      BIO_snprintf(local_548, 0x100, "%s.%s", param_1, param_2);
      iVar6 = rename(param_1, local_448);
      if (iVar6 < 0) {
         piVar4 = __errno_location();
         if (( *piVar4 != 0x14 ) && ( *piVar4 != 2 )) {
            BIO_printf(_bio_err, "Unable to rename %s to %s\n", param_1, local_448);
            perror("reason");
            goto LAB_00104505;
         }

      }

      iVar6 = rename(local_548, param_1);
      if (iVar6 < 0) {
         BIO_printf(_bio_err, "Unable to rename %s to %s\n", local_548, param_1);
         perror("reason");
         rename(local_448, param_1);
      }
 else {
         iVar6 = rename(local_148, local_248);
         if (iVar6 < 0) {
            piVar4 = __errno_location();
            if (( *piVar4 == 0x14 ) || ( *piVar4 == 2 )) goto LAB_001044a3;
            BIO_printf(_bio_err, "Unable to rename %s to %s\n", local_148, local_248);
            perror("reason");
         }
 else {
            LAB_001044a3:iVar6 = rename(local_348, local_148);
            if (-1 < iVar6) {
               uVar5 = 1;
               goto LAB_001044bd;
            }

            BIO_printf(_bio_err, "Unable to rename %s to %s\n", local_348, local_148);
            perror("reason");
            rename(local_248, local_148);
         }

         rename(param_1, local_548);
         rename(local_448, param_1);
      }

   }
 else {
      BIO_printf(_bio_err, "File name too long\n");
   }

   LAB_00104505:ERR_print_errors(_bio_err);
   uVar5 = 0;
   LAB_001044bd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void free_index(void *param_1) {
   if (param_1 != (void*)0x0) {
      TXT_DB_free(*(TXT_DB**)( (long)param_1 + 8 ));
      CRYPTO_free(*(void**)( (long)param_1 + 0x10 ));
      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined4 parse_yesno(char *param_1, undefined4 param_2) {
   char cVar1;
   ulong uVar2;
   if (( param_1 != (char*)0x0 ) && ( cVar1 = cVar1 < 'z' )) {
      if (cVar1 < 'F') {
         if (cVar1 != '0') {
            if (cVar1 == '1') {
               param_2 = 1;
            }

            return param_2;
         }

      }
 else {
         uVar2 = 1L << ( cVar1 + 0xbaU & 0x3f );
         if (( uVar2 & 0x10100000101 ) == 0) {
            if (( uVar2 & 0x8400000084000 ) != 0) {
               param_2 = 1;
            }

            return param_2;
         }

      }

      param_2 = 0;
   }

   return param_2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */X509_NAME *parse_name(char *param_1, int param_2, int param_3, undefined8 param_4) {
   uchar uVar1;
   int nid;
   int iVar2;
   X509_NAME *name;
   uchar *s;
   uchar *puVar3;
   size_t sVar4;
   undefined8 uVar5;
   uchar *puVar6;
   uchar *puVar7;
   uchar *puVar8;
   uchar uVar9;
   uchar *str;
   uchar *puVar10;
   int local_50;
   if (*param_1 == '/') {
      name = X509_NAME_new();
      if (name == (X509_NAME*)0x0) {
         uVar5 = opt_getprog();
         BIO_printf(_bio_err, "%s: Out of memory\n", uVar5);
      }
 else {
         str = (uchar*)( param_1 + 1 );
         s = (uchar*)CRYPTO_strdup((char*)str, "apps/lib/apps.c", 0x7b6);
         if (s != (uchar*)0x0) {
            uVar1 = param_1[1];
            iVar2 = 0;
            if (uVar1 == '\0') {
               LAB_001049be:CRYPTO_free(s);
               return name;
            }

            puVar10 = s;
            if (uVar1 == '=') goto LAB_00104870;
            LAB_00104750:puVar8 = puVar10;
            str = str + 1;
            puVar10 = puVar8 + 1;
            *puVar8 = uVar1;
            uVar1 = *str;
            if (uVar1 != '\0') goto code_r0x00104767;
            goto LAB_0010476b;
         }

         uVar5 = opt_getprog();
         BIO_printf(_bio_err, "%s: Error copying %s name input\n", uVar5, param_4);
         LAB_00104912:X509_NAME_free(name);
         CRYPTO_free(s);
      }

   }
 else {
      uVar5 = opt_getprog();
      BIO_printf(_bio_err, "%s: %s name is expected to be in the format /type0=value0/type1=value1/type2=... where characters may be escaped by \\. This name is not in that format: \'%s\'\n", uVar5, param_4, param_1);
   }

   return (X509_NAME*)0x0;
   code_r0x00104767:if (uVar1 == '=') {
      LAB_0010476b:*puVar10 = '\0';
      puVar8 = puVar8 + 2;
      if (uVar1 != '\0') {
         do {
            uVar1 = str[1];
            str = str + 1;
            puVar6 = puVar8;
            if (( uVar1 != '\0' ) && ( uVar1 != '/' )) {
               puVar7 = puVar8;
               puVar3 = str;
               do {
                  if (( uVar1 == '+' ) && ( param_3 != 0 )) {
                     *puVar7 = '\0';
                     local_50 = 1;
                     goto LAB_0010488b;
                  }

                  uVar9 = puVar3[1];
                  if (uVar1 == '\\') {
                     if (uVar9 == '\0') {
                        uVar5 = opt_getprog();
                        BIO_printf(_bio_err, "%s: Escape character at end of %s name string\n", uVar5, param_4);
                        goto LAB_00104912;
                     }

                     puVar3 = puVar3 + 1;
                  }
 else {
                     uVar9 = *puVar3;
                  }

                  str = puVar3 + 1;
                  uVar1 = puVar3[1];
                  puVar6 = puVar7 + 1;
                  *puVar7 = uVar9;
               }
 while ( ( uVar1 != '\0' ) && ( puVar7 = puVar6 ),puVar3 = str,uVar1 != '/' );
            }

            *puVar6 = '\0';
            local_50 = 0;
            puVar3 = str;
            if (uVar1 == '\0') {
               nid = OBJ_txt2nid((char*)s);
               if (nid != 0) goto LAB_0010480e;
               LAB_0010489f:uVar5 = opt_getprog();
               BIO_printf(_bio_err, "%s warning: Skipping unknown %s name attribute \"%s\"\n", uVar5, param_4, s);
               if (iVar2 != 0) {
                  uVar5 = opt_getprog();
                  BIO_printf(_bio_err, "%s hint: a \'+\' in a value string needs be escaped using \'\\\' else a new member of a multi-valued RDN is expected\n", uVar5);
               }

            }
 else {
               LAB_0010488b:str = puVar3 + 1;
               nid = OBJ_txt2nid((char*)s);
               if (nid == 0) goto LAB_0010489f;
               LAB_0010480e:if (puVar10[1] == '\0') {
                  uVar5 = opt_getprog();
                  BIO_printf(_bio_err, "%s warning: No value provided for %s name attribute \"%s\", skipped\n", uVar5, param_4, s);
               }
 else {
                  sVar4 = strlen((char*)puVar8);
                  iVar2 = X509_NAME_add_entry_by_NID(name, nid, param_2, puVar8, (int)sVar4, -1, -iVar2);
                  if (iVar2 == 0) {
                     ERR_print_errors(_bio_err);
                     uVar5 = opt_getprog();
                     BIO_printf(_bio_err, "%s: Error adding %s name attribute \"/%s=%s\"\n", uVar5, param_4, s, puVar8);
                     goto LAB_00104912;
                  }

               }

            }

            uVar1 = *str;
            if (uVar1 == '\0') goto LAB_001049be;
            puVar10 = s;
            iVar2 = local_50;
            if (uVar1 != '=') goto LAB_00104750;
            LAB_00104870:*s = '\0';
            puVar8 = s + 1;
            puVar10 = s;
         }
 while ( true );
      }

      uVar5 = opt_getprog();
      BIO_printf(_bio_err, "%s: Missing \'=\' after RDN type string \'%s\' in %s name string\n", uVar5, s, param_4);
      goto LAB_00104912;
   }

   goto LAB_00104750;
}
ulong bio_to_mem(void *param_1, int param_2, BIO *param_3) {
   int iVar1;
   int iVar2;
   BIO_METHOD *type;
   BIO *b;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined1 auStack_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   type = BIO_s_mem();
   b = BIO_new(type);
   if (b != (BIO*)0x0) {
      LAB_00104aba:if (( param_2 == -1 ) || ( iVar1 = 0x3ff < param_2 )) {
         iVar1 = 0x400;
      }

      do {
         iVar1 = BIO_read(param_3, auStack_448, iVar1);
         if (iVar1 < 0) {
            LAB_00104b10:BIO_free(b);
            break;
         }

         if (iVar1 == 0) goto LAB_00104b48;
         iVar2 = BIO_write(b, auStack_448, iVar1);
         if (iVar2 != iVar1) goto LAB_00104b10;
         if (param_2 != -1) goto LAB_00104ab0;
         iVar1 = 0x400;
      }
 while ( true );
   }

   uVar3 = 0xffffffff;
   LAB_00104b1d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
   LAB_00104ab0:param_2 = param_2 - iVar2;
   if (param_2 == 0) goto LAB_00104b48;
   goto LAB_00104aba;
   LAB_00104b48:uVar3 = BIO_ctrl(b, 3, 0, param_1);
   uVar3 = uVar3 & 0xffffffff;
   BIO_set_flags(b, 0x200);
   BIO_free(b);
   goto LAB_00104b1d;
}
int pkey_ctrl_string(EVP_PKEY_CTX *param_1, char *param_2) {
   int iVar1;
   char *__s;
   char *pcVar2;
   __s = CRYPTO_strdup(param_2, "apps/lib/apps.c", 0x83c);
   if (__s == (char*)0x0) {
      iVar1 = -1;
   }
 else {
      iVar1 = 0;
      pcVar2 = strchr(__s, 0x3a);
      if (pcVar2 != (char*)0x0) {
         *pcVar2 = '\0';
         iVar1 = EVP_PKEY_CTX_ctrl_str(param_1, __s, pcVar2 + 1);
      }

      CRYPTO_free(__s);
   }

   return iVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void policies_print(X509_STORE_CTX *param_1) {
   int iVar1;
   int iVar2;
   X509_POLICY_TREE *tree;
   stack_st_X509_POLICY_NODE *psVar3;
   X509_POLICY_NODE *pXVar4;
   char *pcVar5;
   tree = X509_STORE_CTX_get0_policy_tree(param_1);
   iVar1 = X509_STORE_CTX_get_explicit_policy(param_1);
   pcVar5 = "False";
   if (iVar1 != 0) {
      pcVar5 = "True";
   }

   BIO_printf(_bio_err, "Require explicit Policy: %s\n", pcVar5);
   psVar3 = X509_policy_tree_get0_policies(tree);
   BIO_printf(_bio_err, "%s Policies:", "Authority");
   if (psVar3 == (stack_st_X509_POLICY_NODE*)0x0) {
      BIO_puts(_bio_err, " <empty>\n");
   }
 else {
      BIO_puts(_bio_err, "\n");
      iVar1 = 0;
      while (true) {
         iVar2 = OPENSSL_sk_num(psVar3);
         if (iVar2 <= iVar1) break;
         pXVar4 = (X509_POLICY_NODE*)OPENSSL_sk_value(psVar3, iVar1);
         X509_POLICY_NODE_print(_bio_err, pXVar4, 2);
         iVar1 = iVar1 + 1;
      }
;
   }

   psVar3 = X509_policy_tree_get0_user_policies(tree);
   BIO_printf(_bio_err, "%s Policies:", &_LC129);
   if (psVar3 != (stack_st_X509_POLICY_NODE*)0x0) {
      BIO_puts(_bio_err, "\n");
      iVar1 = 0;
      while (true) {
         iVar2 = OPENSSL_sk_num(psVar3);
         if (iVar2 <= iVar1) break;
         pXVar4 = (X509_POLICY_NODE*)OPENSSL_sk_value(psVar3, iVar1);
         X509_POLICY_NODE_print(_bio_err, pXVar4, 2);
         iVar1 = iVar1 + 1;
      }
;
      return;
   }

   BIO_puts(_bio_err, " <empty>\n");
   return;
}
void *next_protos_parse(long *param_1, char *param_2) {
   long lVar1;
   char *pcVar2;
   size_t sVar3;
   void *ptr;
   size_t sVar4;
   undefined8 uVar5;
   ulong uVar6;
   size_t sVar7;
   ulong uVar8;
   sVar3 = strlen(param_2);
   if (sVar3 - 1 < 0xfffe) {
      lVar1 = sVar3 + 1;
      ptr = CRYPTO_malloc((int)lVar1, "apps/lib/apps.c", 0x2b1);
      if (ptr == (void*)0x0) {
         uVar5 = opt_getprog();
         /* WARNING: Subroutine does not return */
         app_bail_out("%s: Could not allocate %zu bytes for %s\n", uVar5, lVar1, "NPN buffer");
      }

      uVar6 = 1;
      sVar4 = 0;
      uVar8 = 0;
      sVar7 = 0;
      while (true) {
         if (( sVar3 == sVar4 ) || ( pcVar2 = param_2 + sVar4 * pcVar2 == ',' )) {
            if (sVar4 == sVar7) {
               sVar4 = sVar7 + 1;
               uVar8 = uVar8 + 1;
               sVar7 = sVar4;
            }
 else {
               if (0xff < sVar4 - sVar7) {
                  CRYPTO_free(ptr);
                  return (void*)0x0;
               }

               *(char*)( (long)ptr + ( sVar7 - uVar8 ) ) = (char)sVar4 - (char)sVar7;
               sVar4 = sVar4 + 1;
               sVar7 = uVar6;
            }

         }
 else {
            sVar4 = sVar4 + 1;
            *(char*)( (long)ptr + ( uVar6 - uVar8 ) ) = *pcVar2;
         }

         if (sVar3 < uVar6) break;
         uVar6 = uVar6 + 1;
      }
;
      if (uVar8 < sVar3) {
         *param_1 = lVar1 - uVar8;
         return ptr;
      }

      CRYPTO_free(ptr);
   }

   return (void*)0x0;
}
bool check_cert_attributes(BIO *param_1, long param_2, long param_3, long param_4, long param_5, int param_6) {
   bool bVar1;
   int iVar2;
   undefined *puVar3;
   bool bVar4;
   if (param_2 != 0) {
      if (param_3 == 0) {
         bVar4 = true;
         bVar1 = true;
      }
 else {
         iVar2 = X509_check_host(param_2, param_3, 0, 0, 0);
         if (param_6 != 0) {
            puVar3 = &_LC132;
            if (iVar2 == 1) {
               puVar3 = &_LC131;
            }

            BIO_printf(param_1, "Hostname %s does%s match certificate\n", param_3, puVar3);
         }

         bVar1 = 0 < iVar2;
         bVar4 = 0 < iVar2;
      }

      if (param_4 != 0) {
         iVar2 = X509_check_email(param_2, param_4, 0, 0);
         if (param_6 != 0) {
            puVar3 = &_LC132;
            if (iVar2 != 0) {
               puVar3 = &_LC131;
            }

            BIO_printf(param_1, "Email %s does%s match certificate\n", param_4, puVar3);
         }

         bVar4 = (bool)( bVar4 & 0 < iVar2 );
         bVar1 = bVar4;
      }

      if (param_5 != 0) {
         iVar2 = X509_check_ip_asc(param_2, param_5, 0);
         if (param_6 != 0) {
            puVar3 = &_LC132;
            if (iVar2 != 0) {
               puVar3 = &_LC131;
            }

            BIO_printf(param_1, "IP %s does%s match certificate\n", param_5, puVar3);
         }

         bVar1 = (bool)( 0 < iVar2 & bVar4 );
      }

      return bVar1;
   }

   return false;
}
int cert_matches_key(X509 *param_1, EVP_PKEY *param_2) {
   int iVar1;
   ERR_set_mark();
   iVar1 = X509_check_private_key(param_1, param_2);
   ERR_pop_to_mark();
   return iVar1;
}
bool do_X509_sign(X509 *param_1, int param_2, EVP_PKEY *param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   EVP_MD_CTX *ctx;
   bool bVar2;
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (param_2 == 0) {
      iVar1 = X509_set_version(param_1, 2);
      if (( iVar1 != 0 ) && ( iVar1 = adapt_keyid_ext(param_1, param_6, "subjectKeyIdentifier", &_LC136, 1) ),iVar1 != 0) {
         ERR_set_mark();
         iVar1 = X509_check_private_key(param_1, param_3);
         ERR_pop_to_mark();
         iVar1 = adapt_keyid_ext(param_1, param_6, "authorityKeyIdentifier", "keyid, issuer", iVar1 == 0);
         if (iVar1 != 0) goto LAB_00105093;
      }

   }
 else {
      LAB_00105093:if (( ctx != (EVP_MD_CTX*)0x0 ) && ( iVar1= do_sign_init(ctx,param_3,param_4,param_5),0 < iVar1 )) {
         iVar1 = X509_sign_ctx(param_1, ctx);
         bVar2 = 0 < iVar1;
         goto LAB_001050b3;
      }

   }

   bVar2 = false;
   LAB_001050b3:EVP_MD_CTX_free(ctx);
   return bVar2;
}
bool do_X509_REQ_sign(X509_REQ *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   EVP_MD_CTX *ctx;
   bool bVar2;
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   bVar2 = false;
   iVar1 = do_sign_init(ctx, param_2, param_3, param_4);
   if (0 < iVar1) {
      iVar1 = X509_REQ_sign_ctx(param_1, ctx);
      bVar2 = 0 < iVar1;
   }

   EVP_MD_CTX_free(ctx);
   return bVar2;
}
bool do_X509_CRL_sign(X509_CRL *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   EVP_MD_CTX *ctx;
   bool bVar2;
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   bVar2 = false;
   iVar1 = do_sign_init(ctx, param_2, param_3, param_4);
   if (0 < iVar1) {
      iVar1 = X509_CRL_sign_ctx(param_1, ctx);
      bVar2 = 0 < iVar1;
   }

   EVP_MD_CTX_free(ctx);
   return bVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int do_X509_verify(X509 *param_1, EVP_PKEY *param_2, long param_3) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   iVar2 = 0;
   if (param_3 != 0) {
      for (; iVar1 = OPENSSL_sk_num(param_3),iVar2 < iVar1; iVar2 = iVar2 + 1) {
         uVar3 = OPENSSL_sk_value(param_3, iVar2);
         iVar1 = x509_ctrl_string(param_1, uVar3);
         if (iVar1 < 1) {
            BIO_printf(_bio_err, "parameter error \"%s\"\n", uVar3);
            ERR_print_errors(_bio_err);
            return -1;
         }

      }

   }

   iVar2 = X509_verify(param_1, param_2);
   return iVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 do_X509_REQ_verify(undefined8 param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   iVar4 = 0;
   if (param_3 != 0) {
      for (; iVar1 = OPENSSL_sk_num(param_3),iVar4 < iVar1; iVar4 = iVar4 + 1) {
         uVar2 = OPENSSL_sk_value(param_3, iVar4);
         iVar1 = x509_req_ctrl_string(param_1, uVar2);
         if (iVar1 < 1) {
            BIO_printf(_bio_err, "parameter error \"%s\"\n", uVar2);
            ERR_print_errors(_bio_err);
            return 0xffffffff;
         }

      }

   }

   uVar2 = app_get0_propq();
   uVar3 = app_get0_libctx();
   uVar2 = X509_REQ_verify_ex(param_1, param_2, uVar3, uVar2);
   return uVar2;
}
void store_setup_crl_download(undefined8 param_1) {
   X509_STORE_set_lookup_crls(param_1, crls_http_cb);
   return;
}
void APP_HTTP_TLS_INFO_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      SSL_CTX_free(*(SSL_CTX**)( (long)param_1 + 0x20 ));
      CRYPTO_free(param_1);
      return;
   }

   return;
}
void *app_http_get_asn1(long param_1, undefined8 param_2, undefined8 param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, ASN1_ITEM *param_8) {
   int iVar1;
   long lVar2;
   BIO *in;
   void *pvVar3;
   long in_FS_OFFSET;
   int local_7c;
   void *local_78;
   void *local_70;
   void *local_68;
   void *pvStack_60;
   uint local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == 0 ) || ( param_8 == (ASN1_ITEM*)0x0 )) {
      ERR_new();
      ERR_set_debug("apps/lib/apps.c", 0xa66, "app_http_get_asn1");
      ERR_set_error(0x3d, 0xc0102, 0);
   }
 else {
      iVar1 = OSSL_HTTP_parse_url(param_1, &local_7c, 0, &local_78, &local_70, 0, 0, 0, 0);
      if (iVar1 != 0) {
         if (local_7c == 0) {
            if (param_4 == 0) goto LAB_00105470;
            ERR_new();
            pvVar3 = (void*)0x0;
            ERR_set_debug("apps/lib/apps.c", 0xa73, "app_http_get_asn1");
            ERR_set_error(0x3d, 0x80106, "SSL_CTX given but use_ssl == 0");
         }
 else if (param_4 == 0) {
            ERR_new();
            pvVar3 = (void*)0x0;
            ERR_set_debug("apps/lib/apps.c", 0xa6e, "app_http_get_asn1");
            ERR_set_error(0x3d, 0xc0102, "missing SSL_CTX");
         }
 else {
            LAB_00105470:local_68 = local_78;
            pvStack_60 = local_70;
            lVar2 = OSSL_HTTP_adapt_proxy(param_2, param_3);
            local_58 = ( uint )(lVar2 != 0);
            local_50 = param_6;
            local_48 = param_4;
            in = (BIO*)OSSL_HTTP_get(param_1, param_2, param_3, 0, 0, app_http_tls_cb, &local_68, 0, param_5, param_7, 1, 0x19000, param_6);
            pvVar3 = ASN1_item_d2i_bio(param_8, in, (void*)0x0);
            BIO_free(in);
         }

         CRYPTO_free(local_78);
         CRYPTO_free(local_70);
         goto LAB_00105527;
      }

   }

   pvVar3 = (void*)0x0;
   LAB_00105527:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pvVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
BIO *app_http_post_asn1(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, long param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, ASN1_ITEM *param_13) {
   BIO *a;
   long lVar1;
   BIO *in;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   uint local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   a = (BIO*)ASN1_item_i2d_mem_bio(param_10, param_9);
   if (a != (BIO*)0x0) {
      local_68 = param_1;
      local_60 = param_2;
      lVar1 = OSSL_HTTP_adapt_proxy(param_4, param_5, param_1, param_6 != 0);
      local_50 = param_12;
      local_58 = ( uint )(lVar1 != 0);
      local_48 = param_6;
      in = (BIO*)OSSL_HTTP_transfer(0, param_1, param_2, param_3, param_6 != 0, param_4, param_5, 0, 0, app_http_tls_cb, &local_68, 0, param_7, param_8, a, param_11, 1, 0x19000, (undefined4)param_12, 0);
      BIO_free(a);
      a = (BIO*)ASN1_item_d2i_bio(param_13, in, (void*)0x0);
      BIO_free(in);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return a;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
double app_tminterval(int param_1, int param_2) {
   clock_t cVar1;
   long lVar2;
   long in_FS_OFFSET;
   double dVar3;
   tms local_48;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = times(&local_48);
   if (param_2 == 0) {
      local_48.tms_utime = cVar1;
   }

   if (param_1 == 0) {
      dVar3 = 0.0;
      tmstart_0 = local_48.tms_utime;
   }
 else {
      lVar2 = sysconf(2);
      dVar3 = (double)( local_48.tms_utime - tmstart_0 ) / (double)lVar2;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return dVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */int app_access(char *__name, int __type) {
   int iVar1;
   iVar1 = access(__name, __type);
   return iVar1;
}
void app_isdir(void) {
   opt_isdir();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void fileno_stdin(void) {
   fileno(_stdin);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void fileno_stdout(void) {
   fileno(_stdout);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void raw_read_stdin(void *param_1, int param_2) {
   int __fd;
   __fd = fileno(_stdin);
   read(__fd, param_1, (long)param_2);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void raw_write_stdout(void *param_1, int param_2) {
   int __fd;
   __fd = fileno(_stdout);
   write(__fd, param_1, (long)param_2);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void dup_bio_in(void) {
   int iVar1;
   iVar1 = FMT_istext();
   BIO_new_fp(_stdin, ( uint )(iVar1 != 0) << 4);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */BIO *dup_bio_out(undefined4 param_1) {
   int iVar1;
   BIO *pBVar2;
   char *parg;
   BIO_METHOD *type;
   BIO *b;
   iVar1 = FMT_istext();
   pBVar2 = BIO_new_fp(_stdout, ( uint )(iVar1 != 0) << 4);
   if (pBVar2 != (BIO*)0x0) {
      iVar1 = FMT_istext(param_1);
      if (iVar1 != 0) {
         parg = getenv("HARNESS_OSSL_PREFIX");
         if (parg != (char*)0x0) {
            type = (BIO_METHOD*)BIO_f_prefix();
            b = BIO_new(type);
            pBVar2 = BIO_push(b, pBVar2);
            BIO_ctrl(pBVar2, 0x4f, 0, parg);
            return pBVar2;
         }

      }

   }

   return pBVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */BIO *bio_open_default_(char *param_1, char param_2, undefined4 param_3, int param_4) {
   int iVar1;
   BIO *pBVar2;
   int *piVar3;
   char *pcVar4;
   char *pcVar5;
   if (( param_1 == (char*)0x0 ) || ( ( *param_1 == '-' && ( param_1[1] == '\0' ) ) )) {
      if (param_2 == 'r') {
         iVar1 = FMT_istext(param_3);
         pBVar2 = BIO_new_fp(_stdin, ( uint )(iVar1 != 0) << 4);
      }
 else {
         pBVar2 = (BIO*)dup_bio_out();
      }

      if (param_4 != 0) goto LAB_00105ac1;
      if (pBVar2 != (BIO*)0x0) {
         return pBVar2;
      }

      piVar3 = __errno_location();
      pcVar5 = strerror(*piVar3);
      pcVar4 = "stdout";
      if (param_2 == 'r') {
         pcVar4 = "stdin";
      }

      BIO_printf(_bio_err, "Can\'t open %s, %s\n", pcVar4, pcVar5);
   }
 else {
      if (param_2 == 'a') {
         iVar1 = FMT_istext(param_3);
         pcVar5 = "ab";
         if (iVar1 != 0) {
            pcVar5 = "a";
         }

      }
 else if (param_2 == 'r') {
         iVar1 = FMT_istext(param_3);
         pcVar5 = "rb";
         if (iVar1 != 0) {
            pcVar5 = "r";
         }

      }
 else {
         if (param_2 != 'w') {
            /* WARNING: Subroutine does not return */
            modestr_part_0();
         }

         iVar1 = FMT_istext(param_3);
         pcVar5 = "wb";
         if (iVar1 != 0) {
            pcVar5 = "w";
         }

      }

      pBVar2 = BIO_new_file(param_1, pcVar5);
      if (param_4 != 0) {
         LAB_00105ac1:ERR_clear_error();
         return pBVar2;
      }

      if (pBVar2 != (BIO*)0x0) {
         return pBVar2;
      }

      piVar3 = __errno_location();
      pcVar5 = strerror(*piVar3);
      pcVar4 = "reading";
      if (( param_2 != 'r' ) && ( pcVar4 = param_2 != 'w' )) {
         pcVar4 = "appending";
      }

      BIO_printf(_bio_err, "Can\'t open \"%s\" for %s, %s\n", param_1, pcVar4, pcVar5);
   }

   ERR_print_errors(_bio_err);
   return (BIO*)0x0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 app_load_modules(CONF *param_1) {
   int iVar1;
   BIO *a;
   CONF *cnf;
   undefined8 uVar2;
   cnf = (CONF*)0x0;
   if (param_1 == (CONF*)0x0) {
      if (( _default_config_file == (char*)0x0 ) || ( *_default_config_file != '\0' )) {
         a = (BIO*)bio_open_default_(_default_config_file, 0x72, 0x8001, 1);
         if (a == (BIO*)0x0) {
            return 1;
         }

         cnf = (CONF*)app_load_config_bio(a);
         BIO_free(a);
      }
 else {
         uVar2 = app_get0_libctx();
         cnf = (CONF*)NCONF_new_ex(uVar2);
      }

      if (cnf == (CONF*)0x0) {
         return 1;
      }

      iVar1 = CONF_modules_load(cnf, (char*)0x0, 0);
   }
 else {
      iVar1 = CONF_modules_load(param_1, (char*)0x0, 0);
   }

   if (0 < iVar1) {
      NCONF_free(cnf);
      return 1;
   }

   BIO_printf(_bio_err, "Error configuring OpenSSL modules\n");
   ERR_print_errors(_bio_err);
   NCONF_free(cnf);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint *load_index(char *param_1, uint *param_2) {
   int iVar1;
   uint uVar2;
   BIO *bp;
   TXT_DB *pTVar3;
   BIO *a;
   CONF *conf;
   uint *puVar4;
   byte *pbVar5;
   char *pcVar6;
   int *piVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   FILE *local_1e0;
   stat local_1d8;
   char local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bp = BIO_new_file(param_1, "r");
   if (bp != (BIO*)0x0) {
      BIO_ctrl(bp, 0x6b, 0, &local_1e0);
      iVar1 = fileno(local_1e0);
      iVar1 = fstat(iVar1, &local_1d8);
      if (iVar1 == -1) {
         ERR_new();
         ERR_set_debug("apps/lib/apps.c", 0x6c1, "load_index");
         piVar7 = __errno_location();
         ERR_set_error(2, *piVar7, "calling fstat(%s)", param_1);
      }
 else {
         pTVar3 = TXT_DB_read(bp, 6);
         if (pTVar3 != (TXT_DB*)0x0) {
            BIO_snprintf(local_148, 0x100, "%s.attr", param_1);
            if (local_148[0] == '\0') {
               uVar8 = app_get0_libctx();
               conf = (CONF*)NCONF_new_ex(uVar8, 0);
            }
 else {
               a = (BIO*)bio_open_default_(local_148, 0x72, 0x8001, 1);
               if (a == (BIO*)0x0) {
                  conf = (CONF*)0x0;
               }
 else {
                  conf = (CONF*)app_load_config_bio(a, local_148);
                  BIO_free(a);
               }

            }

            puVar4 = (uint*)CRYPTO_malloc(0xa8, "apps/lib/apps.c", 0x2b1);
            if (puVar4 == (uint*)0x0) {
               uVar8 = opt_getprog();
               /* WARNING: Subroutine does not return */
               app_bail_out("%s: Could not allocate %zu bytes for %s\n", uVar8, 0xa8, "new DB");
            }

            *(TXT_DB**)( puVar4 + 2 ) = pTVar3;
            if (param_2 == (uint*)0x0) {
               *puVar4 = 1;
            }
 else {
               *puVar4 = *param_2;
            }

            if (conf != (CONF*)0x0) {
               ERR_set_mark();
               pbVar5 = (byte*)NCONF_get_string(conf, (char*)0x0, "unique_subject");
               if (pbVar5 == (byte*)0x0) {
                  ERR_pop_to_mark();
               }
 else {
                  ERR_clear_last_mark();
                  uVar2 = 1;
                  if (( byte )(*pbVar5 - 0x30) < 0x3f) {
                     uVar2 = ( uint )(( 0x4040000040400001U >> ( ( ulong )(*pbVar5 - 0x30) & 0x3f ) & 1 ) == 0);
                  }

                  *puVar4 = uVar2;
               }

            }

            pcVar6 = CRYPTO_strdup(param_1, "apps/lib/apps.c", 0x6e0);
            *(char**)( puVar4 + 4 ) = pcVar6;
            if (pcVar6 != (char*)0x0) {
               *(__dev_t*)( puVar4 + 6 ) = local_1d8.st_dev;
               *(__ino_t*)( puVar4 + 8 ) = local_1d8.st_ino;
               *(__nlink_t*)( puVar4 + 10 ) = local_1d8.st_nlink;
               puVar4[0xc] = local_1d8.st_mode;
               puVar4[0xd] = local_1d8.st_uid;
               puVar4[0xe] = local_1d8.st_gid;
               puVar4[0xf] = local_1d8.__pad0;
               *(__dev_t*)( puVar4 + 0x10 ) = local_1d8.st_rdev;
               *(__off_t*)( puVar4 + 0x12 ) = local_1d8.st_size;
               *(__blksize_t*)( puVar4 + 0x14 ) = local_1d8.st_blksize;
               *(__blkcnt_t*)( puVar4 + 0x16 ) = local_1d8.st_blocks;
               *(__time_t*)( puVar4 + 0x18 ) = local_1d8.st_atim.tv_sec;
               *(long*)( puVar4 + 0x1a ) = local_1d8.st_atim.tv_nsec;
               *(__time_t*)( puVar4 + 0x1c ) = local_1d8.st_mtim.tv_sec;
               *(long*)( puVar4 + 0x1e ) = local_1d8.st_mtim.tv_nsec;
               *(__time_t*)( puVar4 + 0x20 ) = local_1d8.st_ctim.tv_sec;
               *(long*)( puVar4 + 0x22 ) = local_1d8.st_ctim.tv_nsec;
               for (int i = 0; i < 3; i++) {
                  *(long*)( puVar4 + ( 2*i + 36 ) ) = local_1d8.__unused[i];
               }

            }

            goto LAB_00105e94;
         }

      }

   }

   conf = (CONF*)0x0;
   puVar4 = (uint*)0x0;
   LAB_00105e94:ERR_print_errors(_bio_err);
   NCONF_free(conf);
   TXT_DB_free((TXT_DB*)0x0);
   BIO_free_all(bp);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */CONF *app_load_config_modules(char *param_1) {
   char cVar1;
   int iVar2;
   BIO *a;
   CONF *cnf;
   undefined8 uVar3;
   if (param_1 == (char*)0x0) {
      return (CONF*)0x0;
   }

   if (*param_1 == '\0') {
      BIO_printf(_bio_err, "No configuration used\n");
      cVar1 = *param_1;
   }
 else {
      BIO_printf(_bio_err, "Using configuration from %s\n", param_1);
      cVar1 = *param_1;
   }

   if (cVar1 == '\0') {
      uVar3 = app_get0_libctx();
      cnf = (CONF*)NCONF_new_ex(uVar3);
   }
 else {
      a = (BIO*)bio_open_default_(param_1, 0x72, 0x8001, 0);
      if (a == (BIO*)0x0) {
         return (CONF*)0x0;
      }

      cnf = (CONF*)app_load_config_bio(a);
      BIO_free(a);
   }

   if (cnf != (CONF*)0x0) {
      if (_default_config_file != param_1) {
         iVar2 = CONF_modules_load(cnf, (char*)0x0, 0);
         if (iVar2 < 1) {
            BIO_printf(_bio_err, "Error configuring OpenSSL modules\n");
            ERR_print_errors(_bio_err);
            NCONF_free((CONF*)0x0);
            NCONF_free(cnf);
            return (CONF*)0x0;
         }

         NCONF_free((CONF*)0x0);
      }

      return cnf;
   }

   return (CONF*)0x0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */X509_REQ *load_csr(char *param_1, int param_2, long param_3) {
   int iVar1;
   BIO *bp;
   int *piVar2;
   X509_REQ *pXVar3;
   char *pcVar4;
   if (param_2 == 0) {
      param_2 = 0x8005;
   }

   if (( param_1 == (char*)0x0 ) || ( ( *param_1 == '-' && ( param_1[1] == '\0' ) ) )) {
      iVar1 = FMT_istext(param_2);
      bp = BIO_new_fp(_stdin, ( uint )(iVar1 != 0) << 4);
      if (bp != (BIO*)0x0) goto LAB_00106180;
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      BIO_printf(_bio_err, "Can\'t open %s, %s\n", "stdin", pcVar4);
      LAB_0010623b:bp = (BIO*)0x0;
      ERR_print_errors(_bio_err);
   }
 else {
      iVar1 = FMT_istext(param_2);
      pcVar4 = "rb";
      if (iVar1 != 0) {
         pcVar4 = "r";
      }

      bp = BIO_new_file(param_1, pcVar4);
      if (bp == (BIO*)0x0) {
         piVar2 = __errno_location();
         pcVar4 = strerror(*piVar2);
         BIO_printf(_bio_err, "Can\'t open \"%s\" for %s, %s\n", param_1, "reading", pcVar4);
         goto LAB_0010623b;
      }

      LAB_00106180:if (param_2 == 4) {
         pXVar3 = d2i_X509_REQ_bio(bp, (X509_REQ**)0x0);
         LAB_0010619e:if (pXVar3 != (X509_REQ*)0x0) goto LAB_001061a3;
      }
 else {
         if (param_2 == 0x8005) {
            pXVar3 = PEM_read_bio_X509_REQ(bp, (X509_REQ**)0x0, (undefined1*)0x0, (void*)0x0);
            goto LAB_0010619e;
         }

         print_format_error(param_2, 6);
      }

   }

   ERR_print_errors(_bio_err);
   if (param_3 != 0) {
      BIO_printf(_bio_err, "Unable to load %s\n", param_3);
   }

   pXVar3 = (X509_REQ*)0x0;
   LAB_001061a3:BIO_free(bp);
   return pXVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */X509_REQ *load_csr_autofmt(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   BIO *pBVar1;
   int iVar2;
   X509_REQ *pXVar3;
   BIO *bp;
   long lVar4;
   pBVar1 = _bio_err;
   if ((int)param_2 == 0) {
      _bio_err = (BIO*)0x0;
      bp = (BIO*)bio_open_default_(param_1, 0x72, 0x8005);
      if (( bp == (BIO*)0x0 ) || ( pXVar3 = PEM_read_bio_X509_REQ(bp, (X509_REQ**)0x0, (undefined1*)0x0, (void*)0x0) ),pXVar3 == (X509_REQ*)0x0) {
         ERR_print_errors(_bio_err);
         BIO_free(bp);
         _bio_err = pBVar1;
         ERR_clear_error();
         pXVar3 = (X509_REQ*)load_csr(param_1, 4, 0);
         if (pXVar3 == (X509_REQ*)0x0) {
            BIO_printf(_bio_err, "error: unable to load %s from file \'%s\'\n", param_4, param_1);
            return (X509_REQ*)0x0;
         }

      }
 else {
         BIO_free(bp);
         _bio_err = pBVar1;
      }

   }
 else {
      pXVar3 = (X509_REQ*)load_csr(param_1, param_2, param_4);
      if (pXVar3 == (X509_REQ*)0x0) {
         return (X509_REQ*)0x0;
      }

   }

   lVar4 = X509_REQ_get0_pubkey(pXVar3);
   iVar2 = do_X509_REQ_verify(pXVar3, lVar4, param_3);
   if (( lVar4 == 0 ) || ( iVar2 < 0 )) {
      BIO_puts(_bio_err, "Warning: error while verifying CSR self-signature\n");
   }
 else if (iVar2 == 0) {
      BIO_puts(_bio_err, "Warning: CSR self-signature does not match the contents\n");
   }

   return pXVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 app_load_config_verbose(char *param_1, int param_2) {
   char cVar1;
   int iVar2;
   BIO *a;
   int *piVar3;
   undefined8 uVar4;
   char *pcVar5;
   if (param_2 == 0) {
      if (param_1 != (char*)0x0) goto LAB_001063e3;
   }
 else {
      if (*param_1 == '\0') {
         BIO_printf(_bio_err, "No configuration used\n");
         LAB_001063e3:cVar1 = *param_1;
      }
 else {
         BIO_printf(_bio_err, "Using configuration from %s\n", param_1);
         cVar1 = *param_1;
      }

      if (cVar1 == '\0') {
         uVar4 = app_get0_libctx();
         uVar4 = NCONF_new_ex(uVar4, 0);
         return uVar4;
      }

      if (( *param_1 != '-' ) || ( param_1[1] != '\0' )) {
         iVar2 = FMT_istext(0x8001);
         pcVar5 = "rb";
         if (iVar2 != 0) {
            pcVar5 = "r";
         }

         a = BIO_new_file(param_1, pcVar5);
         if (a != (BIO*)0x0) goto LAB_00106492;
         piVar3 = __errno_location();
         pcVar5 = strerror(*piVar3);
         BIO_printf(_bio_err, "Can\'t open \"%s\" for %s, %s\n", param_1, "reading", pcVar5);
         goto LAB_0010652b;
      }

   }

   iVar2 = FMT_istext(0x8001);
   a = BIO_new_fp(_stdin, ( uint )(iVar2 != 0) << 4);
   if (a != (BIO*)0x0) {
      LAB_00106492:uVar4 = app_load_config_bio(a, param_1);
      BIO_free(a);
      return uVar4;
   }

   piVar3 = __errno_location();
   pcVar5 = strerror(*piVar3);
   BIO_printf(_bio_err, "Can\'t open %s, %s\n", "stdin", pcVar5);
   LAB_0010652b:ERR_print_errors(_bio_err);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 app_load_config_internal(char *param_1, int param_2) {
   int iVar1;
   BIO *a;
   int *piVar2;
   undefined8 uVar3;
   char *pcVar4;
   if (param_1 == (char*)0x0) {
      LAB_001065e6:iVar1 = FMT_istext(0x8001);
      a = BIO_new_fp(_stdin, ( uint )(iVar1 != 0) << 4);
      if (param_2 == 0) {
         if (a == (BIO*)0x0) {
            piVar2 = __errno_location();
            pcVar4 = strerror(*piVar2);
            BIO_printf(_bio_err, "Can\'t open %s, %s\n", "stdin", pcVar4);
            LAB_0010668b:ERR_print_errors(_bio_err);
            return 0;
         }

         goto LAB_00106614;
      }

   }
 else {
      if (*param_1 == '\0') {
         uVar3 = app_get0_libctx();
         uVar3 = NCONF_new_ex(uVar3, 0);
         return uVar3;
      }

      if (( *param_1 == '-' ) && ( param_1[1] == '\0' )) goto LAB_001065e6;
      iVar1 = FMT_istext(0x8001);
      pcVar4 = "rb";
      if (iVar1 != 0) {
         pcVar4 = "r";
      }

      a = BIO_new_file(param_1, pcVar4);
      if (param_2 == 0) {
         if (a == (BIO*)0x0) {
            piVar2 = __errno_location();
            pcVar4 = strerror(*piVar2);
            BIO_printf(_bio_err, "Can\'t open \"%s\" for %s, %s\n", param_1, "reading", pcVar4);
            goto LAB_0010668b;
         }

         goto LAB_00106614;
      }

   }

   ERR_clear_error();
   if (a == (BIO*)0x0) {
      return 0;
   }

   LAB_00106614:uVar3 = app_load_config_bio(a, param_1);
   BIO_free(a);
   return uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void dup_bio_err(void) {
   int iVar1;
   iVar1 = FMT_istext();
   BIO_new_fp(_stderr, ( uint )(iVar1 != 0) << 4);
   return;
}
void unbuffer(FILE *param_1) {
   setbuf(param_1, (char*)0x0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */BIO *bio_open_owner(char *param_1, undefined4 param_2, int param_3) {
   int iVar1;
   int __fd;
   int iVar2;
   FILE *stream;
   BIO *pBVar3;
   int *piVar4;
   undefined8 uVar5;
   char *pcVar6;
   if (( ( param_3 != 0 ) && ( param_1 != (char*)0x0 ) ) && ( ( *param_1 != '-' || ( param_1[1] != '\0' ) ) )) {
      iVar1 = FMT_istext(param_2);
      __fd = open(param_1, 0x241, 0x180);
      if (__fd < 0) {
         piVar4 = __errno_location();
         pcVar6 = strerror(*piVar4);
         uVar5 = opt_getprog();
         pBVar3 = (BIO*)0x0;
         BIO_printf(_bio_err, "%s: Can\'t open \"%s\" for writing, %s\n", uVar5, param_1, pcVar6);
         ERR_print_errors(_bio_err);
      }
 else {
         iVar2 = FMT_istext(param_2);
         pcVar6 = "wb";
         if (iVar2 != 0) {
            pcVar6 = "w";
         }

         stream = fdopen(__fd, pcVar6);
         if (stream == (FILE*)0x0) {
            piVar4 = __errno_location();
            pcVar6 = strerror(*piVar4);
            uVar5 = opt_getprog();
            pBVar3 = (BIO*)0x0;
            BIO_printf(_bio_err, "%s: Can\'t open \"%s\" for writing, %s\n", uVar5, param_1, pcVar6);
            ERR_print_errors(_bio_err);
            close(__fd);
         }
 else {
            pBVar3 = BIO_new_fp(stream, ( -(uint)(iVar1 == 0) & 0xfffffff0 ) + 0x11);
            if (pBVar3 == (BIO*)0x0) {
               piVar4 = __errno_location();
               pcVar6 = strerror(*piVar4);
               uVar5 = opt_getprog();
               BIO_printf(_bio_err, "%s: Can\'t open \"%s\" for writing, %s\n", uVar5, param_1, pcVar6);
               ERR_print_errors(_bio_err);
               fclose(stream);
            }

         }

      }

      return pBVar3;
   }

   pBVar3 = (BIO*)bio_open_default_(param_1, 0x77, param_2, 0);
   return pBVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */BIO *bio_open_default(char *param_1, char param_2, undefined4 param_3) {
   int iVar1;
   BIO *pBVar2;
   int *piVar3;
   char *pcVar4;
   char *pcVar5;
   if (( param_1 == (char*)0x0 ) || ( ( *param_1 == '-' && ( param_1[1] == '\0' ) ) )) {
      if (param_2 == 'r') {
         iVar1 = FMT_istext(param_3);
         pBVar2 = BIO_new_fp(_stdin, ( uint )(iVar1 != 0) << 4);
         if (pBVar2 != (BIO*)0x0) {
            return pBVar2;
         }

         piVar3 = __errno_location();
         pcVar5 = strerror(*piVar3);
         pcVar4 = "stdin";
      }
 else {
         pBVar2 = (BIO*)dup_bio_out();
         if (pBVar2 != (BIO*)0x0) {
            return pBVar2;
         }

         piVar3 = __errno_location();
         pcVar5 = strerror(*piVar3);
         pcVar4 = "stdout";
      }

      BIO_printf(_bio_err, "Can\'t open %s, %s\n", pcVar4, pcVar5);
   }
 else {
      if (param_2 == 'a') {
         iVar1 = FMT_istext(param_3);
         pcVar5 = "a";
         if (iVar1 == 0) {
            pcVar5 = "ab";
         }

         pBVar2 = BIO_new_file(param_1, pcVar5);
         if (pBVar2 != (BIO*)0x0) {
            return pBVar2;
         }

         piVar3 = __errno_location();
         pcVar5 = strerror(*piVar3);
         pcVar4 = "appending";
      }
 else if (param_2 == 'r') {
         iVar1 = FMT_istext(param_3);
         pcVar5 = "r";
         if (iVar1 == 0) {
            pcVar5 = "rb";
         }

         pBVar2 = BIO_new_file(param_1, pcVar5);
         if (pBVar2 != (BIO*)0x0) {
            return pBVar2;
         }

         piVar3 = __errno_location();
         pcVar5 = strerror(*piVar3);
         pcVar4 = "reading";
      }
 else {
         if (param_2 != 'w') {
            /* WARNING: Subroutine does not return */
            modestr_part_0();
         }

         iVar1 = FMT_istext(param_3);
         pcVar5 = "w";
         if (iVar1 == 0) {
            pcVar5 = "wb";
         }

         pBVar2 = BIO_new_file(param_1, pcVar5);
         if (pBVar2 != (BIO*)0x0) {
            return pBVar2;
         }

         piVar3 = __errno_location();
         pcVar5 = strerror(*piVar3);
         pcVar4 = "writing";
      }

      BIO_printf(_bio_err, "Can\'t open \"%s\" for %s, %s\n", param_1, pcVar4, pcVar5);
   }

   ERR_print_errors(_bio_err);
   return (BIO*)0x0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */BIO *bio_open_default_quiet(char *param_1, char param_2, undefined4 param_3) {
   int iVar1;
   BIO *pBVar2;
   char *mode;
   if (( param_1 != (char*)0x0 ) && ( ( *param_1 != '-' || ( param_1[1] != '\0' ) ) )) {
      if (param_2 == 'a') {
         iVar1 = FMT_istext(param_3);
         mode = "ab";
         if (iVar1 != 0) {
            mode = "a";
         }

      }
 else if (param_2 == 'r') {
         iVar1 = FMT_istext(param_3);
         mode = "rb";
         if (iVar1 != 0) {
            mode = "r";
         }

      }
 else {
         if (param_2 != 'w') {
            /* WARNING: Subroutine does not return */
            modestr_part_0();
         }

         iVar1 = FMT_istext(param_3);
         mode = "wb";
         if (iVar1 != 0) {
            mode = "w";
         }

      }

      pBVar2 = BIO_new_file(param_1, mode);
      ERR_clear_error();
      return pBVar2;
   }

   if (param_2 != 'r') {
      pBVar2 = (BIO*)dup_bio_out();
      ERR_clear_error();
      return pBVar2;
   }

   iVar1 = FMT_istext(param_3);
   pBVar2 = BIO_new_fp(_stdin, ( uint )(iVar1 != 0) << 4);
   ERR_clear_error();
   return pBVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 mem_bio_to_file(BIO *param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4) {
   int iVar1;
   long lVar2;
   BIO *b;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (long*)0x0;
   lVar2 = BIO_ctrl(param_1, 0x73, 0, &local_28);
   if ((int)lVar2 < 1) {
      BIO_puts(_bio_err, "Error reading mem buffer\n");
      LAB_00106c43:b = (BIO*)0x0;
   }
 else {
      b = (BIO*)bio_open_owner(param_2, param_3, param_4);
      if (b == (BIO*)0x0) goto LAB_00106c43;
      iVar1 = BIO_write(b, (void*)local_28[1], (int)*local_28);
      if (( -1 < iVar1 ) && ( uVar3 = 1 ),(long)iVar1 == *local_28) goto LAB_00106c0a;
      BIO_printf(_bio_err, "Error writing to output file: \'%s\'\n", param_2);
   }

   uVar3 = 0;
   ERR_print_errors(_bio_err);
   LAB_00106c0a:BIO_free_all(b);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void wait_for_async(undefined8 param_1) {
   int iVar1;
   int iVar2;
   void *ptr;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   ulong uVar6;
   fd_set *pfVar7;
   long in_FS_OFFSET;
   byte bVar8;
   ulong local_d0;
   fd_set local_c8;
   long local_40;
   bVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = SSL_get_all_async_fds(param_1, 0, &local_d0);
   if (( iVar2 != 0 ) && ( local_d0 != 0 )) {
      lVar5 = local_d0 * 4;
      ptr = CRYPTO_malloc((int)lVar5, "apps/lib/apps.c", 0x2b1);
      if (ptr == (void*)0x0) {
         uVar4 = opt_getprog();
         /* WARNING: Subroutine does not return */
         app_bail_out("%s: Could not allocate %zu bytes for %s\n", uVar4, lVar5, "allocate async fds");
      }

      iVar2 = SSL_get_all_async_fds(param_1, ptr, &local_d0);
      if (iVar2 == 0) {
         CRYPTO_free(ptr);
      }
 else {
         pfVar7 = &local_c8;
         for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            pfVar7->fds_bits[0] = 0;
            pfVar7 = (fd_set*)( (long)pfVar7 + ( (ulong)bVar8 * -2 + 1 ) * 8 );
         }

         if (local_d0 == 0) {
            iVar2 = 0;
         }
 else {
            uVar6 = 0;
            iVar2 = 0;
            do {
               iVar1 = *(int*)( (long)ptr + uVar6 * 4 );
               if (iVar2 <= iVar1) {
                  iVar2 = iVar1 + 1;
               }

               lVar3 = __fdelt_chk();
               lVar5 = uVar6 * 4;
               uVar6 = uVar6 + 1;
               local_c8.fds_bits[lVar3] = local_c8.fds_bits[lVar3] | 1L << ( ( byte ) * (undefined4*)( (long)ptr + lVar5 ) & 0x3f );
            }
 while ( uVar6 < local_d0 );
         }

         select(iVar2, &local_c8, (fd_set*)0x0, (fd_set*)0x0, (timeval*)0x0);
         CRYPTO_free(ptr);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void corrupt_signature(int *param_1) {
   byte *pbVar1;
   pbVar1 = (byte*)( *(long*)( param_1 + 2 ) + -1 + (long)*param_1 );
   *pbVar1 = *pbVar1 ^ 1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 check_cert_time_string(char *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (char*)0x0) {
      iVar1 = strcmp(param_1, "today");
      if (iVar1 != 0) {
         iVar1 = ASN1_TIME_set_string_X509(0, param_1);
         if (iVar1 == 0) {
            BIO_printf(_bio_err, "%s is invalid, it should be \"today\" or have format [CC]YYMMDDHHMMSSZ\n", param_2);
            return 0;
         }

      }

   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 set_cert_times(undefined8 param_1, char *param_2, char *param_3, int param_4, int param_5) {
   int iVar1;
   undefined8 uVar2;
   ASN1_TIME *pAVar3;
   undefined8 uVar4;
   if (param_2 == (char*)0x0) {
      if (param_3 != (char*)0x0) {
         iVar1 = strcmp(param_3, "today");
         if (iVar1 != 0) {
            iVar1 = ASN1_TIME_set_string_X509(0);
            if (iVar1 == 0) goto LAB_00106eca;
            goto LAB_00106f98;
         }

         pAVar3 = (ASN1_TIME*)X509_getm_notBefore(param_1);
         pAVar3 = X509_gmtime_adj(pAVar3, 0);
         if (pAVar3 == (ASN1_TIME*)0x0) goto LAB_001070db;
         goto LAB_00106fb8;
      }

      pAVar3 = (ASN1_TIME*)X509_getm_notBefore();
      pAVar3 = X509_gmtime_adj(pAVar3, 0);
      joined_r0x00107132:if (pAVar3 == (ASN1_TIME*)0x0) goto LAB_001070db;
   }
 else {
      iVar1 = strcmp(param_2, "today");
      if (iVar1 == 0) {
         if (param_3 == (char*)0x0) {
            pAVar3 = (ASN1_TIME*)X509_getm_notBefore(param_1);
            pAVar3 = X509_gmtime_adj(pAVar3, 0);
            goto joined_r0x00107132;
         }

         iVar1 = strcmp(param_3, "today");
         if (iVar1 == 0) goto LAB_00106f98;
         LAB_00106ebc:iVar1 = ASN1_TIME_set_string_X509(0, param_3);
         if (iVar1 == 0) {
            LAB_00106eca:BIO_printf(_bio_err, "%s is invalid, it should be \"today\" or have format [CC]YYMMDDHHMMSSZ\n", "end date");
            return 0;
         }

      }
 else {
         iVar1 = ASN1_TIME_set_string_X509(0, param_2);
         if (iVar1 == 0) {
            BIO_printf(_bio_err, "%s is invalid, it should be \"today\" or have format [CC]YYMMDDHHMMSSZ\n", "start date");
            return 0;
         }

         if (( param_3 != (char*)0x0 ) && ( iVar1 = iVar1 != 0 )) goto LAB_00106ebc;
      }

      iVar1 = strcmp(param_2, "today");
      if (iVar1 == 0) {
         LAB_00106f98:pAVar3 = (ASN1_TIME*)X509_getm_notBefore(param_1);
         pAVar3 = X509_gmtime_adj(pAVar3, 0);
         if (pAVar3 == (ASN1_TIME*)0x0) {
            LAB_001070db:BIO_printf(_bio_err, "Error setting notBefore certificate field\n");
            return 0;
         }

      }
 else {
         uVar2 = X509_getm_notBefore(param_1);
         iVar1 = ASN1_TIME_set_string_X509(uVar2, param_2);
         if (iVar1 == 0) {
            BIO_printf(_bio_err, "Error setting notBefore certificate field\n");
            return 0;
         }

      }

      if (param_3 != (char*)0x0) {
         LAB_00106fb8:param_4 = strcmp(param_3, "today");
         if (param_4 != 0) {
            uVar2 = X509_getm_notAfter(param_1);
            iVar1 = ASN1_TIME_set_string_X509(uVar2, param_3);
            if (iVar1 == 0) {
               BIO_printf(_bio_err, "Error setting notAfter certificate field\n");
               return 0;
            }

            goto LAB_00106fee;
         }

      }

   }

   pAVar3 = (ASN1_TIME*)X509_getm_notAfter(param_1);
   pAVar3 = X509_time_adj_ex(pAVar3, param_4, 0, (time_t*)0x0);
   if (pAVar3 == (ASN1_TIME*)0x0) {
      BIO_printf(_bio_err, "Error setting notAfter certificate field\n");
      return 0;
   }

   LAB_00106fee:uVar2 = X509_get0_notBefore(param_1);
   uVar4 = X509_get0_notAfter(param_1);
   iVar1 = ASN1_TIME_compare(uVar4, uVar2);
   if (iVar1 < 0) {
      if (param_5 != 0) {
         BIO_printf(_bio_err, "%s: end date before start date\n", "Error");
         return 0;
      }

      BIO_printf(_bio_err, "%s: end date before start date\n", "Warning");
   }

   return 1;
}
bool set_crl_lastupdate(undefined8 param_1, long param_2) {
   int iVar1;
   ASN1_TIME *s;
   ASN1_TIME *pAVar2;
   s = ASN1_TIME_new();
   if (s != (ASN1_TIME*)0x0) {
      if (param_2 == 0) {
         pAVar2 = X509_gmtime_adj(s, 0);
         if (pAVar2 == (ASN1_TIME*)0x0) goto LAB_001071e7;
      }
 else {
         iVar1 = ASN1_TIME_set_string_X509(s, param_2);
         if (iVar1 == 0) goto LAB_001071e7;
      }

      iVar1 = X509_CRL_set1_lastUpdate(param_1, s);
      ASN1_TIME_free(s);
      return iVar1 != 0;
   }

   LAB_001071e7:ASN1_TIME_free(s);
   return false;
}
bool set_crl_nextupdate(undefined8 param_1, long param_2, int param_3, long param_4, long param_5) {
   int iVar1;
   ASN1_TIME *s;
   ASN1_TIME *pAVar2;
   bool bVar3;
   s = ASN1_TIME_new();
   if (s == (ASN1_TIME*)0x0) {
      LAB_00107290:bVar3 = false;
   }
 else {
      if (param_2 == 0) {
         pAVar2 = X509_time_adj_ex(s, param_3, param_4 * 0xe10 + param_5, (time_t*)0x0);
         if (pAVar2 == (ASN1_TIME*)0x0) goto LAB_00107290;
      }
 else {
         iVar1 = ASN1_TIME_set_string_X509(s, param_2);
         if (iVar1 == 0) goto LAB_00107290;
      }

      iVar1 = X509_CRL_set1_nextUpdate(param_1, s);
      bVar3 = iVar1 != 0;
   }

   ASN1_TIME_free(s);
   return bVar3;
}
void make_uppercase(byte *param_1) {
   byte bVar1;
   __int32_t **pp_Var2;
   bVar1 = *param_1;
   if (bVar1 != 0) {
      pp_Var2 = __ctype_toupper_loc();
      do {
         *param_1 = ( byte )(*pp_Var2)[bVar1];
         bVar1 = param_1[1];
         param_1 = param_1 + 1;
      }
 while ( bVar1 != 0 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long *app_params_new_from_opts(long param_1, undefined8 param_2) {
   long lVar1;
   int iVar2;
   long *ptr;
   size_t sVar3;
   char *str;
   char *pcVar4;
   char *pcVar5;
   long *plVar6;
   ulong uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   long local_78;
   long lStack_70;
   long local_68;
   long lStack_60;
   long local_58;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = OPENSSL_sk_num();
   local_44 = 1;
   if (param_1 != 0) {
      uVar8 = (ulong)iVar2;
      ptr = (long*)CRYPTO_zalloc(( uVar8 * 5 + 5 ) * 8, "apps/lib/apps.c", 0xd84);
      if (ptr != (long*)0x0) {
         plVar6 = ptr;
         if (uVar8 != 0) {
            uVar7 = 0;
            do {
               str = (char*)OPENSSL_sk_value(param_1, uVar7 & 0xffffffff);
               pcVar4 = CRYPTO_strdup(str, "apps/lib/apps.c", 0xd8a);
               if (( pcVar4 == (char*)0x0 ) || ( pcVar5 = strchr(pcVar4, 0x3a) ),pcVar5 == (char*)0x0) {
                  LAB_0010740e:CRYPTO_free(pcVar4);
                  pcVar4 = "unknown";
                  if (local_44 != 0) {
                     pcVar4 = "error";
                  }

                  BIO_printf(_bio_err, "Parameter %s \'%s\'\n", pcVar4, str);
                  ERR_print_errors(_bio_err);
                  lVar1 = *ptr;
                  plVar6 = ptr;
                  while (lVar1 != 0) {
                     CRYPTO_free((void*)plVar6[2]);
                     lVar1 = plVar6[5];
                     plVar6 = plVar6 + 5;
                  }
;
                  CRYPTO_free(ptr);
                  goto LAB_001074af;
               }

               *pcVar5 = '\0';
               sVar3 = strlen(pcVar5 + 1);
               iVar2 = OSSL_PARAM_allocate_from_text(plVar6, param_2, pcVar4, pcVar5 + 1, sVar3, &local_44);
               if (iVar2 == 0) goto LAB_0010740e;
               uVar7 = uVar7 + 1;
               CRYPTO_free(pcVar4);
               plVar6 = plVar6 + 5;
            }
 while ( uVar8 != uVar7 );
            plVar6 = ptr + uVar8 * 5;
         }

         OSSL_PARAM_construct_end(&local_78);
         *plVar6 = local_78;
         plVar6[1] = lStack_70;
         plVar6[2] = local_68;
         plVar6[3] = lStack_60;
         plVar6[4] = local_58;
         goto LAB_001074b2;
      }

   }

   LAB_001074af:ptr = (long*)0x0;
   LAB_001074b2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ptr;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void app_params_free(long *param_1) {
   long lVar1;
   long *plVar2;
   if (param_1 != (long*)0x0) {
      if (*param_1 != 0) {
         plVar2 = param_1 + 5;
         do {
            CRYPTO_free((void*)plVar2[-3]);
            lVar1 = *plVar2;
            plVar2 = plVar2 + 5;
         }
 while ( lVar1 != 0 );
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */EVP_PKEY *app_keygen(EVP_PKEY_CTX *param_1, char *param_2, uint param_3, int param_4) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   EVP_PKEY *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (EVP_PKEY*)0x0;
   if (( param_4 != 0 ) && ( param_2 != (char*)0x0 )) {
      BIO_printf(_bio_err, "Generating %s key", param_2);
      if (0 < (int)param_3) {
         BIO_printf(_bio_err, " with %d bits\n", (ulong)param_3);
         iVar1 = RAND_status();
         goto joined_r0x001075da;
      }

      BIO_printf(_bio_err, "\n");
   }

   iVar1 = RAND_status();
   joined_r0x001075da:if (iVar1 == 0) {
      BIO_printf(_bio_err, "Warning: generating random key material may take a long time\nif the system has a poor entropy source\n");
   }

   iVar1 = EVP_PKEY_keygen(param_1, &local_28);
   if (iVar1 < 1) {
      if (param_2 == (char*)0x0) {
         param_2 = "asymmetric";
      }

      uVar2 = opt_getprog();
      BIO_printf(_bio_err, "%s: Error generating %s key\n", uVar2, param_2);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */EVP_PKEY *app_paramgen(EVP_PKEY_CTX *param_1, char *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   EVP_PKEY *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (EVP_PKEY*)0x0;
   iVar1 = RAND_status();
   if (iVar1 == 0) {
      BIO_printf(_bio_err, "Warning: generating random key parameters may take a long time\nif the system has a poor entropy source\n");
   }

   iVar1 = EVP_PKEY_paramgen(param_1, &local_28);
   if (iVar1 < 1) {
      if (param_2 == (char*)0x0) {
         param_2 = "asymmetric";
      }

      uVar2 = opt_getprog();
      BIO_printf(_bio_err, "%s: Generating %s key parameters failed\n", uVar2, param_2);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool opt_legacy_okay(void) {
   int iVar1;
   long lVar2;
   iVar1 = opt_provider_option_given();
   lVar2 = app_get0_libctx();
   if (lVar2 != 0) {
      return false;
   }

   lVar2 = app_get0_propq();
   return iVar1 == 0 && lVar2 == 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 load_serial_cold(void) {
   ASN1_INTEGER *unaff_RBX;
   char *unaff_R13;
   long in_FS_OFFSET;
   long in_stack_00000408;
   perror(unaff_R13);
   ERR_print_errors(_bio_err);
   BIO_free((BIO*)0x0);
   ASN1_INTEGER_free(unaff_RBX);
   if (in_stack_00000408 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 save_index_cold(void) {
   char *unaff_RBP;
   long in_FS_OFFSET;
   long in_stack_00000308;
   perror(unaff_RBP);
   BIO_printf(_bio_err, "Unable to open \'%s\'\n");
   ERR_print_errors(_bio_err);
   if (in_stack_00000308 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}


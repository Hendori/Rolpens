undefined8 ssl_ctx_srp_ctx_free_intern(long param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   byte bVar3;
   bVar3 = 0;
   if (param_1 != 0) {
      CRYPTO_free(*(void**)( param_1 + 0x360 ));
      CRYPTO_free(*(void**)( param_1 + 0x3a8 ));
      for (int i_1832 = 0; i_1832 < 8; i_1832++) {
         BN_free(*(BIGNUM**)( param_1 + ( 8*i_1832 + 872 ) ));
      }
      *(undefined8*)( param_1 + 0x340 ) = 0;
      *(undefined8*)( param_1 + 0x3b8 ) = 0;
      puVar2 = (undefined8*)( param_1 + 0x348U & 0xfffffffffffffff8 );
      uVar1 = ( ulong )(( (int)param_1 - (int)puVar2 ) + 0x3c0U >> 3);
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
      }
      *(undefined4*)( param_1 + 0x3b0 ) = 0x400;
      return 1;
   }
   return 0;
}void SSL_CTX_SRP_CTX_free(void) {
   ssl_ctx_srp_ctx_free_intern();
   return;
}undefined8 ssl_srp_ctx_free_intern(long param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   byte bVar3;
   bVar3 = 0;
   if (param_1 != 0) {
      CRYPTO_free(*(void**)( param_1 + 0xbf0 ));
      CRYPTO_free(*(void**)( param_1 + 0xc38 ));
      for (int i_1833 = 0; i_1833 < 8; i_1833++) {
         BN_free(*(BIGNUM**)( param_1 + ( 8*i_1833 + 3064 ) ));
      }
      *(undefined8*)( param_1 + 0xbd0 ) = 0;
      *(undefined8*)( param_1 + 0xc48 ) = 0;
      puVar2 = (undefined8*)( param_1 + 0xbd8U & 0xfffffffffffffff8 );
      uVar1 = ( ulong )(( (int)param_1 - (int)puVar2 ) + 0xc50U >> 3);
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
      }
      *(undefined4*)( param_1 + 0xc40 ) = 0x400;
      return 1;
   }
   return 0;
}void SSL_SRP_CTX_free(uint *param_1) {
   undefined8 uVar1;
   if (( param_1 != (uint*)0x0 ) && ( *param_1 != 0 )) {
      if (( *param_1 & 0x80 ) != 0) {
         uVar1 = ossl_quic_obj_get0_handshake_layer();
         ssl_srp_ctx_free_intern(uVar1);
         return;
      }
      param_1 = (uint*)0x0;
   }
   ssl_srp_ctx_free_intern(param_1);
   return;
}undefined8 ssl_srp_ctx_init_intern(long param_1) {
   long lVar1;
   int iVar2;
   BIGNUM *pBVar3;
   char *pcVar4;
   ulong uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   byte bVar8;
   bVar8 = 0;
   if (param_1 == 0) {
      return 0;
   }
   lVar1 = *(long*)( param_1 + 8 );
   if (lVar1 == 0) {
      return 0;
   }
   *(undefined8*)( param_1 + 0xbd0 ) = 0;
   iVar2 = (int)param_1 + 0xbd0;
   *(undefined8*)( param_1 + 0xc48 ) = 0;
   puVar7 = (undefined8*)( param_1 + 0xbd8U & 0xfffffffffffffff8 );
   uVar5 = ( ulong )(( iVar2 - (int)puVar7 ) + 0x80U >> 3);
   for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }
   *(undefined8*)( param_1 + 0xbd0 ) = *(undefined8*)( lVar1 + 0x340 );
   uVar6 = *(undefined8*)( lVar1 + 0x350 );
   *(undefined8*)( param_1 + 0xbd8 ) = *(undefined8*)( lVar1 + 0x348 );
   *(undefined8*)( param_1 + 0xbe0 ) = uVar6;
   pBVar3 = *(BIGNUM**)( lVar1 + 0x368 );
   *(undefined8*)( param_1 + 0xbe8 ) = *(undefined8*)( lVar1 + 0x358 );
   *(undefined4*)( param_1 + 0xc40 ) = *(undefined4*)( lVar1 + 0x3b0 );
   if (pBVar3 != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(pBVar3);
      *(BIGNUM**)( param_1 + 0xbf8 ) = pBVar3;
      if (pBVar3 != (BIGNUM*)0x0) goto LAB_0010030c;
      LAB_00100480:ERR_new();
      ERR_set_debug("ssl/tls_srp.c", 0x82, "ssl_srp_ctx_init_intern");
      ERR_set_error(0x14, 0x80003, 0);
      goto LAB_001004b3;
   }
   LAB_0010030c:if (*(BIGNUM**)( lVar1 + 0x370 ) != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(*(BIGNUM**)( lVar1 + 0x370 ));
      *(BIGNUM**)( param_1 + 0xc00 ) = pBVar3;
      if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100480;
   }
   if (*(BIGNUM**)( lVar1 + 0x378 ) != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(*(BIGNUM**)( lVar1 + 0x378 ));
      *(BIGNUM**)( param_1 + 0xc08 ) = pBVar3;
      if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100480;
   }
   if (*(BIGNUM**)( lVar1 + 0x380 ) != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(*(BIGNUM**)( lVar1 + 0x380 ));
      *(BIGNUM**)( param_1 + 0xc10 ) = pBVar3;
      if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100480;
   }
   if (*(BIGNUM**)( lVar1 + 0x388 ) != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(*(BIGNUM**)( lVar1 + 0x388 ));
      *(BIGNUM**)( param_1 + 0xc18 ) = pBVar3;
      if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100480;
   }
   if (*(BIGNUM**)( lVar1 + 0x390 ) != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(*(BIGNUM**)( lVar1 + 0x390 ));
      *(BIGNUM**)( param_1 + 0xc20 ) = pBVar3;
      if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100480;
   }
   if (*(BIGNUM**)( lVar1 + 0x3a0 ) != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(*(BIGNUM**)( lVar1 + 0x3a0 ));
      *(BIGNUM**)( param_1 + 0xc30 ) = pBVar3;
      if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100480;
   }
   if (*(BIGNUM**)( lVar1 + 0x398 ) != (BIGNUM*)0x0) {
      pBVar3 = BN_dup(*(BIGNUM**)( lVar1 + 0x398 ));
      *(BIGNUM**)( param_1 + 0xc28 ) = pBVar3;
      if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100480;
   }
   if (*(char**)( lVar1 + 0x360 ) == (char*)0x0) {
      LAB_0010042b:if (*(char**)( lVar1 + 0x3a8 ) == (char*)0x0) {
         LAB_0010045c:*(undefined8*)( param_1 + 0xc48 ) = *(undefined8*)( lVar1 + 0x3b8 );
         return 1;
      }
      pcVar4 = CRYPTO_strdup(*(char**)( lVar1 + 0x3a8 ), "ssl/tls_srp.c", 0x8b);
      *(char**)( param_1 + 0xc38 ) = pcVar4;
      if (pcVar4 != (char*)0x0) goto LAB_0010045c;
      ERR_new();
      uVar6 = 0x8c;
   } else {
      pcVar4 = CRYPTO_strdup(*(char**)( lVar1 + 0x360 ), "ssl/tls_srp.c", 0x86);
      *(char**)( param_1 + 0xbf0 ) = pcVar4;
      if (pcVar4 != (char*)0x0) goto LAB_0010042b;
      ERR_new();
      uVar6 = 0x87;
   }
   ERR_set_debug("ssl/tls_srp.c", uVar6, "ssl_srp_ctx_init_intern");
   ERR_set_error(0x14, 0xc0103, 0);
   LAB_001004b3:CRYPTO_free(*(void**)( param_1 + 0xbf0 ));
   CRYPTO_free(*(void**)( param_1 + 0xc38 ));
   for (int i_1834 = 0; i_1834 < 8; i_1834++) {
      BN_free(*(BIGNUM**)( param_1 + ( 8*i_1834 + 3064 ) ));
   }
   *(undefined8*)( param_1 + 0xbd0 ) = 0;
   puVar7 = (undefined8*)( param_1 + 0xbd8U & 0xfffffffffffffff8 );
   *(undefined8*)( param_1 + 0xc48 ) = 0;
   uVar5 = ( ulong )(( iVar2 - (int)puVar7 ) + 0x80U >> 3);
   for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
   }
   return 0;
}void SSL_SRP_CTX_init(uint *param_1) {
   undefined8 uVar1;
   if (( param_1 != (uint*)0x0 ) && ( *param_1 != 0 )) {
      if (( *param_1 & 0x80 ) != 0) {
         uVar1 = ossl_quic_obj_get0_handshake_layer();
         ssl_srp_ctx_init_intern(uVar1);
         return;
      }
      param_1 = (uint*)0x0;
   }
   ssl_srp_ctx_init_intern(param_1);
   return;
}undefined8 ssl_ctx_srp_ctx_init_intern(long param_1) {
   undefined8 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   uVar1 = 0;
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x340 ) = 0;
      *(undefined8*)( param_1 + 0x3b8 ) = 0;
      puVar3 = (undefined8*)( param_1 + 0x348U & 0xfffffffffffffff8 );
      uVar2 = ( ulong )(( (int)param_1 - (int)puVar3 ) + 0x3c0U >> 3);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + 1;
      }
      uVar1 = 1;
      *(undefined4*)( param_1 + 0x3b0 ) = 0x400;
   }
   return uVar1;
}void SSL_CTX_SRP_CTX_init(void) {
   ssl_ctx_srp_ctx_init_intern();
   return;
}ulong ssl_srp_server_param_with_username_intern(long param_1, undefined4 *param_2) {
   undefined8 *puVar1;
   code *pcVar2;
   int iVar3;
   ulong uVar4;
   BIGNUM *pBVar5;
   long lVar6;
   long in_FS_OFFSET;
   uchar auStack_58[56];
   long local_20;
   puVar1 = *(undefined8**)( param_1 + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( param_1 + 0xbd8 );
   *param_2 = 0x73;
   if (pcVar2 != (code*)0x0) {
      uVar4 = ( *pcVar2 )(*(undefined8*)( param_1 + 0x40 ), param_2, *(undefined8*)( param_1 + 0xbd0 ));
      if ((int)uVar4 != 0) goto LAB_0010076b;
   }
   lVar6 = *(long*)( param_1 + 0xbf8 );
   *param_2 = 0x50;
   if (( ( ( lVar6 != 0 ) && ( *(long*)( param_1 + 0xc00 ) != 0 ) ) && ( *(long*)( param_1 + 0xc08 ) != 0 ) ) && ( *(long*)( param_1 + 0xc30 ) != 0 )) {
      iVar3 = RAND_priv_bytes_ex(**(undefined8**)( param_1 + 8 ), auStack_58, 0x30, 0);
      if (0 < iVar3) {
         pBVar5 = BN_bin2bn(auStack_58, 0x30, (BIGNUM*)0x0);
         *(BIGNUM**)( param_1 + 0xc28 ) = pBVar5;
         OPENSSL_cleanse(auStack_58, 0x30);
         lVar6 = SRP_Calc_B_ex(*(undefined8*)( param_1 + 0xc28 ), *(undefined8*)( param_1 + 0xbf8 ), *(undefined8*)( param_1 + 0xc00 ), *(undefined8*)( param_1 + 0xc30 ), *puVar1, puVar1[0x8e]);
         *(long*)( param_1 + 0xc10 ) = lVar6;
         uVar4 = ( ulong )(( uint )(lVar6 == 0) * 2);
         goto LAB_0010076b;
      }
   }
   uVar4 = 2;
   LAB_0010076b:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 SSL_srp_server_param_with_username(uint *param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (param_1 == (uint*)0x0) {
      return 2;
   }
   if (*param_1 != 0) {
      if (( *param_1 & 0x80 ) != 0) {
         param_1 = (uint*)ossl_quic_obj_get0_handshake_layer();
         if (param_1 != (uint*)0x0) goto LAB_001007c4;
      }
      return 2;
   }
   LAB_001007c4:uVar1 = ssl_srp_server_param_with_username_intern(param_1, param_2);
   return uVar1;
}undefined8 SSL_set_srp_server_param_pw(uint *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 *puVar1;
   int iVar2;
   uint *puVar3;
   long lVar4;
   BIGNUM *pBVar5;
   BIGNUM *pBVar6;
   if (param_1 == (uint*)0x0) {
      return 0xffffffff;
   }
   puVar3 = param_1;
   if (( ( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( puVar3 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar3 != (uint*)0x0 ) ) )) {
      pBVar5 = BN_dup(*(BIGNUM**)( lVar4 + 0x10 ));
      pBVar6 = *(BIGNUM**)( lVar4 + 8 );
      *(BIGNUM**)( puVar3 + 0x2fe ) = pBVar5;
      pBVar6 = BN_dup(pBVar6);
      *(BIGNUM**)( puVar3 + 0x300 ) = pBVar6;
      BN_clear_free(*(BIGNUM**)( puVar3 + 0x30c ));
      puVar3[0x30c] = 0;
      puVar3[0x30d] = 0;
      BN_clear_free(*(BIGNUM**)( puVar3 + 0x302 ));
      puVar1 = *(undefined8**)( param_1 + 2 );
      puVar3[0x302] = 0;
      puVar3[0x303] = 0;
      iVar2 = SRP_create_verifier_BN_ex(param_2, param_3, puVar3 + 0x302, puVar3 + 0x30c, *(undefined8*)( puVar3 + 0x2fe ), *(undefined8*)( puVar3 + 0x300 ), *puVar1, puVar1[0x8e]);
      if (iVar2 != 0) {
         return 1;
      }
   }
   return 0xffffffff;
}undefined8 SSL_set_srp_server_param(uint *param_1, BIGNUM *param_2, BIGNUM *param_3, BIGNUM *param_4, BIGNUM *param_5, char *param_6) {
   BIGNUM *pBVar1;
   char *pcVar2;
   if (param_1 == (uint*)0x0) {
      return 0xffffffff;
   }
   if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( param_1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),param_1 != (uint*)0x0 ) )) {
      if (param_2 != (BIGNUM*)0x0) {
         if (*(BIGNUM**)( param_1 + 0x2fe ) == (BIGNUM*)0x0) {
            pBVar1 = BN_dup(param_2);
            *(BIGNUM**)( param_1 + 0x2fe ) = pBVar1;
         } else {
            pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x2fe ), param_2);
            if (pBVar1 == (BIGNUM*)0x0) {
               BN_free(*(BIGNUM**)( param_1 + 0x2fe ));
               param_1[0x2fe] = 0;
               param_1[0x2ff] = 0;
            }
         }
      }
      if (param_3 != (BIGNUM*)0x0) {
         if (*(BIGNUM**)( param_1 + 0x300 ) == (BIGNUM*)0x0) {
            pBVar1 = BN_dup(param_3);
            *(BIGNUM**)( param_1 + 0x300 ) = pBVar1;
         } else {
            pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x300 ), param_3);
            if (pBVar1 == (BIGNUM*)0x0) {
               BN_free(*(BIGNUM**)( param_1 + 0x300 ));
               param_1[0x300] = 0;
               param_1[0x301] = 0;
            }
         }
      }
      if (param_4 != (BIGNUM*)0x0) {
         if (*(BIGNUM**)( param_1 + 0x302 ) == (BIGNUM*)0x0) {
            pBVar1 = BN_dup(param_4);
            *(BIGNUM**)( param_1 + 0x302 ) = pBVar1;
         } else {
            pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x302 ), param_4);
            if (pBVar1 == (BIGNUM*)0x0) {
               BN_free(*(BIGNUM**)( param_1 + 0x302 ));
               param_1[0x302] = 0;
               param_1[0x303] = 0;
            }
         }
      }
      if (param_5 != (BIGNUM*)0x0) {
         if (*(BIGNUM**)( param_1 + 0x30c ) == (BIGNUM*)0x0) {
            pBVar1 = BN_dup(param_5);
            *(BIGNUM**)( param_1 + 0x30c ) = pBVar1;
         } else {
            pBVar1 = BN_copy(*(BIGNUM**)( param_1 + 0x30c ), param_5);
            if (pBVar1 == (BIGNUM*)0x0) {
               BN_free(*(BIGNUM**)( param_1 + 0x30c ));
               param_1[0x30c] = 0;
               param_1[0x30d] = 0;
            }
         }
      }
      if (param_6 != (char*)0x0) {
         if (*(void**)( param_1 + 0x30e ) != (void*)0x0) {
            CRYPTO_free(*(void**)( param_1 + 0x30e ));
         }
         pcVar2 = CRYPTO_strdup(param_6, "ssl/tls_srp.c", 0x13c);
         *(char**)( param_1 + 0x30e ) = pcVar2;
         if (pcVar2 == (char*)0x0) {
            return 0xffffffff;
         }
      }
      if (( ( ( *(long*)( param_1 + 0x2fe ) != 0 ) && ( *(long*)( param_1 + 0x300 ) != 0 ) ) && ( *(long*)( param_1 + 0x302 ) != 0 ) ) && ( *(long*)( param_1 + 0x30c ) != 0 )) {
         return 1;
      }
   }
   return 0xffffffff;
}undefined4 srp_generate_server_master_secret(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   int iVar3;
   undefined4 uVar4;
   BIGNUM *a;
   BIGNUM *a_00;
   uchar *to;
   puVar1 = *(undefined8**)( param_1 + 8 );
   iVar2 = SRP_Verify_A_mod_N(*(undefined8*)( param_1 + 0xc18 ), *(undefined8*)( param_1 + 0xbf8 ));
   if (iVar2 != 0) {
      a = (BIGNUM*)SRP_Calc_u_ex(*(undefined8*)( param_1 + 0xc18 ), *(undefined8*)( param_1 + 0xc10 ), *(undefined8*)( param_1 + 0xbf8 ), *puVar1, puVar1[0x8e]);
      if (a != (BIGNUM*)0x0) {
         uVar4 = 0;
         a_00 = (BIGNUM*)SRP_Calc_server_key(*(undefined8*)( param_1 + 0xc18 ), *(undefined8*)( param_1 + 0xc30 ), a, *(undefined8*)( param_1 + 0xc28 ), *(undefined8*)( param_1 + 0xbf8 ));
         if (a_00 != (BIGNUM*)0x0) {
            iVar3 = BN_num_bits(a_00);
            iVar2 = iVar3 + 0xe;
            if (-1 < iVar3 + 7) {
               iVar2 = iVar3 + 7;
            }
            to = (uchar*)CRYPTO_malloc(iVar2 >> 3, "ssl/tls_srp.c", 0x158);
            if (to == (uchar*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/tls_srp.c", 0x159, "srp_generate_server_master_secret");
               ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
            } else {
               BN_bn2bin(a_00, to);
               uVar4 = ssl_generate_master_secret(param_1, to, (long)( iVar2 >> 3 ), 1);
            }
         }
         goto LAB_00100bd8;
      }
   }
   uVar4 = 0;
   a = (BIGNUM*)0x0;
   a_00 = (BIGNUM*)0x0;
   LAB_00100bd8:BN_clear_free(a_00);
   BN_clear_free(a);
   return uVar4;
}undefined4 srp_generate_client_master_secret(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   int iVar3;
   undefined4 uVar4;
   BIGNUM *a;
   char *__s;
   BIGNUM *a_00;
   BIGNUM *a_01;
   uchar *to;
   size_t sVar5;
   puVar1 = *(undefined8**)( param_1 + 8 );
   iVar2 = SRP_Verify_B_mod_N(*(undefined8*)( param_1 + 0xc10 ), *(undefined8*)( param_1 + 0xbf8 ));
   if (iVar2 == 0) {
      LAB_00100d30:a = (BIGNUM*)0x0;
      LAB_00100d32:ERR_new();
      ERR_set_debug("ssl/tls_srp.c", 0x176, "srp_generate_client_master_secret");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   } else {
      a = (BIGNUM*)SRP_Calc_u_ex(*(undefined8*)( param_1 + 0xc18 ), *(undefined8*)( param_1 + 0xc10 ), *(undefined8*)( param_1 + 0xbf8 ), *puVar1, puVar1[0x8e]);
      if (a == (BIGNUM*)0x0) goto LAB_00100d30;
      if (*(code**)( param_1 + 0xbe8 ) == (code*)0x0) goto LAB_00100d32;
      __s = (char*)( **(code**)( param_1 + 0xbe8 ) )(*(undefined8*)( param_1 + 0x40 ), *(undefined8*)( param_1 + 0xbd0 ));
      if (__s != (char*)0x0) {
         a_00 = (BIGNUM*)SRP_Calc_x_ex(*(undefined8*)( param_1 + 0xc08 ), *(undefined8*)( param_1 + 0xbf0 ), __s, *puVar1);
         if (a_00 == (BIGNUM*)0x0) {
            LAB_00100f00:ERR_new();
            ERR_set_debug("ssl/tls_srp.c", 0x186, "srp_generate_client_master_secret");
            uVar4 = 0;
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
            a_01 = (BIGNUM*)0x0;
         } else {
            a_01 = (BIGNUM*)SRP_Calc_client_key_ex(*(undefined8*)( param_1 + 0xbf8 ), *(undefined8*)( param_1 + 0xc10 ), *(undefined8*)( param_1 + 0xc00 ), a_00, *(undefined8*)( param_1 + 0xc20 ), a, *puVar1);
            if (a_01 == (BIGNUM*)0x0) goto LAB_00100f00;
            iVar3 = BN_num_bits(a_01);
            iVar2 = iVar3 + 0xe;
            if (-1 < iVar3 + 7) {
               iVar2 = iVar3 + 7;
            }
            to = (uchar*)CRYPTO_malloc(iVar2 >> 3, "ssl/tls_srp.c", 0x18b);
            if (to == (uchar*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/tls_srp.c", 0x18c, "srp_generate_client_master_secret");
               uVar4 = 0;
               ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
            } else {
               BN_bn2bin(a_01, to);
               uVar4 = ssl_generate_master_secret(param_1, to, (long)( iVar2 >> 3 ), 1);
            }
         }
         BN_clear_free(a_01);
         BN_clear_free(a_00);
         sVar5 = strlen(__s);
         CRYPTO_clear_free(__s, sVar5, "ssl/tls_srp.c", 0x196);
         goto LAB_00100d75;
      }
      ERR_new();
      ERR_set_debug("ssl/tls_srp.c", 0x17c, "srp_generate_client_master_secret");
      ossl_statem_fatal(param_1, 0x50, 0xea, 0);
   }
   uVar4 = 0;
   for (int i_1835 = 0; i_1835 < 2; i_1835++) {
      BN_clear_free((BIGNUM*)0);
   }
   LAB_00100d75:BN_clear_free(a);
   return uVar4;
}undefined8 srp_verify_server_param(long param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   iVar1 = BN_ucmp(*(BIGNUM**)( param_1 + 0xc00 ), *(BIGNUM**)( param_1 + 0xbf8 ));
   if (( ( -1 < iVar1 ) || ( iVar1 = BN_ucmp(*(BIGNUM**)( param_1 + 0xc10 ), *(BIGNUM**)( param_1 + 0xbf8 )) ),-1 < iVar1 )) {
      ERR_new();
      ERR_set_debug("ssl/tls_srp.c", 0x1a4, "srp_verify_server_param");
      ossl_statem_fatal(param_1, 0x2f, 0x186, 0);
      return 0;
   }
   iVar1 = BN_num_bits(*(BIGNUM**)( param_1 + 0xbf8 ));
   if (iVar1 < *(int*)( param_1 + 0xc40 )) {
      ERR_new();
      uVar3 = 0x1a9;
   } else {
      if (*(code**)( param_1 + 0xbe0 ) != (code*)0x0) {
         iVar1 = ( **(code**)( param_1 + 0xbe0 ) )(*(undefined8*)( param_1 + 0x40 ), *(undefined8*)( param_1 + 0xbd0 ));
         if (iVar1 < 1) {
            ERR_new();
            ERR_set_debug("ssl/tls_srp.c", 0x1b0, "srp_verify_server_param");
            ossl_statem_fatal(param_1, 0x47, 0xea, 0);
            return 0;
         }
         return 1;
      }
      lVar2 = SRP_check_known_gN_param(*(undefined8*)( param_1 + 0xc00 ), *(undefined8*)( param_1 + 0xbf8 ));
      if (lVar2 != 0) {
         return 1;
      }
      ERR_new();
      uVar3 = 0x1b4;
   }
   ERR_set_debug("ssl/tls_srp.c", uVar3, "srp_verify_server_param");
   ossl_statem_fatal(param_1, 0x47, 0xf1, 0);
   return 0;
}bool ssl_srp_calc_a_param_intern(long param_1) {
   int iVar1;
   BIGNUM *pBVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   uchar auStack_58[56];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = RAND_priv_bytes_ex(**(undefined8**)( param_1 + 8 ), auStack_58, 0x30, 0);
   bVar4 = false;
   if (0 < iVar1) {
      pBVar2 = BN_bin2bn(auStack_58, 0x30, *(BIGNUM**)( param_1 + 0xc20 ));
      *(BIGNUM**)( param_1 + 0xc20 ) = pBVar2;
      OPENSSL_cleanse(auStack_58, 0x30);
      lVar3 = SRP_Calc_A(*(undefined8*)( param_1 + 0xc20 ), *(undefined8*)( param_1 + 0xbf8 ), *(undefined8*)( param_1 + 0xc00 ));
      bVar4 = lVar3 != 0;
      *(long*)( param_1 + 0xc18 ) = lVar3;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 SRP_Calc_A_param(uint *param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (uint*)0x0) {
      if (*param_1 == 0) {
         uVar2 = ssl_srp_calc_a_param_intern();
         return uVar2;
      }
      if (( *param_1 & 0x80 ) != 0) {
         lVar1 = ossl_quic_obj_get0_handshake_layer();
         if (lVar1 != 0) {
            uVar2 = ssl_srp_calc_a_param_intern(lVar1);
            return uVar2;
         }
         return 0;
      }
   }
   return 0;
}long SSL_get_srp_g(uint *param_1) {
   uint *puVar1;
   long lVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_1;
   if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar1 != (uint*)0x0 ) )) {
      lVar2 = *(long*)( puVar1 + 0x300 );
      if (lVar2 == 0) {
         return *(long*)( *(long*)( param_1 + 2 ) + 0x370 );
      }
   } else {
      lVar2 = 0;
   }
   return lVar2;
}long SSL_get_srp_N(uint *param_1) {
   uint *puVar1;
   long lVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_1;
   if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar1 != (uint*)0x0 ) )) {
      lVar2 = *(long*)( puVar1 + 0x2fe );
      if (lVar2 == 0) {
         return *(long*)( *(long*)( param_1 + 2 ) + 0x368 );
      }
   } else {
      lVar2 = 0;
   }
   return lVar2;
}long SSL_get_srp_username(uint *param_1) {
   uint *puVar1;
   long lVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_1;
   if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar1 != (uint*)0x0 ) )) {
      lVar2 = *(long*)( puVar1 + 0x2fc );
      if (lVar2 == 0) {
         return *(long*)( *(long*)( param_1 + 2 ) + 0x360 );
      }
   } else {
      lVar2 = 0;
   }
   return lVar2;
}long SSL_get_srp_userinfo(uint *param_1) {
   uint *puVar1;
   long lVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }
   puVar1 = param_1;
   if (( *param_1 == 0 ) || ( ( ( *param_1 & 0x80 ) != 0 && ( puVar1 = (uint*)ossl_quic_obj_get0_handshake_layer() ),puVar1 != (uint*)0x0 ) )) {
      lVar2 = *(long*)( puVar1 + 0x30e );
      if (lVar2 == 0) {
         return *(long*)( *(long*)( param_1 + 2 ) + 0x3a8 );
      }
   } else {
      lVar2 = 0;
   }
   return lVar2;
}void SSL_CTX_set_srp_username(undefined8 param_1, undefined8 param_2) {
   ssl3_ctx_ctrl(param_1, 0x4f, 0, param_2);
   return;
}void SSL_CTX_set_srp_password(undefined8 param_1, undefined8 param_2) {
   ssl3_ctx_ctrl(param_1, 0x51, 0, param_2);
   return;
}void SSL_CTX_set_srp_strength(undefined8 param_1, int param_2) {
   ssl3_ctx_ctrl(param_1, 0x50, (long)param_2, 0);
   return;
}void SSL_CTX_set_srp_verify_param_callback(undefined8 param_1, undefined8 param_2) {
   ssl3_ctx_callback_ctrl(param_1, 0x4c, param_2);
   return;
}void SSL_CTX_set_srp_cb_arg(undefined8 param_1, undefined8 param_2) {
   ssl3_ctx_ctrl(param_1, 0x4e, 0, param_2);
   return;
}void SSL_CTX_set_srp_username_callback(undefined8 param_1, undefined8 param_2) {
   ssl3_ctx_callback_ctrl(param_1, 0x4b, param_2);
   return;
}void SSL_CTX_set_srp_client_pwd_callback(undefined8 param_1, undefined8 param_2) {
   ssl3_ctx_callback_ctrl(param_1, 0x4d, param_2);
   return;
}

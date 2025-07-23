int pmeth_func_cmp_BSEARCH_CMP_FN(undefined8 *param_1, undefined8 *param_2) {
   int iVar1;
   int *piVar2;
   iVar1 = *(int*)*param_1;
   piVar2 = (int*)( *(code*)*param_2 )();
   return iVar1 - *piVar2;
}
int pmeth_cmp(undefined8 *param_1, undefined8 *param_2) {
   return *(int*)*param_1 - *(int*)*param_2;
}
void EVP_PKEY_meth_free(EVP_PKEY_METHOD *pmeth) {
   if (( pmeth != (EVP_PKEY_METHOD*)0x0 ) && ( ( (byte)pmeth[4] & 1 ) != 0 )) {
      CRYPTO_free(pmeth);
      return;
   }

   return;
}
EVP_PKEY_METHOD *EVP_PKEY_meth_find(int type) {
   int iVar1;
   EVP_PKEY_METHOD *pEVar2;
   long in_FS_OFFSET;
   EVP_PKEY_METHOD *local_130;
   int local_128[66];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( app_pkey_methods == 0 ) || ( local_128[0] = type ),iVar1 = OPENSSL_sk_find(app_pkey_methods, local_128),iVar1 < 0 )) {
      local_130 = (EVP_PKEY_METHOD*)local_128;
      local_128[0] = type;
      pEVar2 = (EVP_PKEY_METHOD*)OBJ_bsearch_(&local_130, &standard_methods, 10, 8, pmeth_func_cmp_BSEARCH_CMP_FN);
      if (pEVar2 != (EVP_PKEY_METHOD*)0x0) {
         if (*(code**)pEVar2 == (code*)0x0) {
            pEVar2 = (EVP_PKEY_METHOD*)0x0;
         }
 else {
            pEVar2 = (EVP_PKEY_METHOD*)( **(code**)pEVar2 )();
         }

      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pEVar2;
}
EVP_PKEY_METHOD *EVP_PKEY_meth_new(int id, int flags) {
   EVP_PKEY_METHOD *pEVar1;
   pEVar1 = (EVP_PKEY_METHOD*)CRYPTO_zalloc(0x100, "crypto/evp/pmeth_lib.c", 0x80);
   if (pEVar1 != (EVP_PKEY_METHOD*)0x0) {
      *(int*)pEVar1 = id;
      *(uint*)( pEVar1 + 4 ) = flags | 1;
   }

   return pEVar1;
}
int evp_pkey_ctx_state(uint *param_1) {
   uint uVar1;
   long lVar2;
   uVar1 = *param_1;
   if (uVar1 == 0) {
      return 0;
   }

   if (( uVar1 & 0x800 ) == 0) {
      if (( uVar1 & 0xc1f0 ) == 0) goto LAB_001001d0;
      lVar2 = *(long*)( param_1 + 0xc );
   }
 else {
      if (*(long*)( param_1 + 0xc ) != 0) {
         return 2;
      }

      if (( uVar1 & 0xc1f0 ) != 0) goto LAB_0010018d;
      LAB_001001d0:if (( uVar1 & 0x600 ) == 0) goto LAB_0010018d;
      lVar2 = *(long*)( param_1 + 0xc );
   }

   if (lVar2 != 0) {
      return 2;
   }

   LAB_0010018d:if (( ( uVar1 & 6 ) != 0 ) && ( *(long*)( param_1 + 10 ) != 0 )) {
      return 2;
   }

   if (( uVar1 & 0x3000 ) == 0) {
      return 1;
   }

   return 2 - ( uint )(*(long*)( param_1 + 0xc ) == 0);
}
ulong evp_pkey_ctx_ctrl_int(uint *param_1, int param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6) {
   int *piVar1;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   if (( *(long*)( param_1 + 0x1e ) == 0 ) || ( *(long*)( *(long*)( param_1 + 0x1e ) + 0xf8 ) == 0 )) {
      if (*param_1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x51f, "evp_pkey_ctx_ctrl_int");
         ERR_set_error(6, 0x95, 0);
      }
 else {
         if (( param_3 == 0xffffffff ) || ( ( *param_1 & param_3 ) != 0 )) goto LAB_00100212;
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x524, "evp_pkey_ctx_ctrl_int");
         ERR_set_error(6, 0x94, 0);
      }

      LAB_00100295:uVar4 = 0xffffffff;
   }
 else {
      LAB_00100212:iVar2 = evp_pkey_ctx_state(param_1);
      if (iVar2 < 2) {
         if (-1 < iVar2) {
            piVar1 = *(int**)( param_1 + 0x1e );
            if (( piVar1 == (int*)0x0 ) || ( *(code**)( piVar1 + 0x30 ) == (code*)0x0 )) {
               ERR_new();
               ERR_set_debug("crypto/evp/pmeth_lib.c", 0x52f, "evp_pkey_ctx_ctrl_int");
               ERR_set_error(6, 0x93, 0);
               return 0xfffffffe;
            }

            if (( param_2 == -1 ) || ( *piVar1 == param_2 )) {
               uVar3 = ( **(code**)( piVar1 + 0x30 ) )(param_1, param_4, param_5, param_6);
               if (uVar3 != 0xfffffffe) {
                  return (ulong)uVar3;
               }

               ERR_new();
               ERR_set_debug("crypto/evp/pmeth_lib.c", 0x538, "evp_pkey_ctx_ctrl_int");
               ERR_set_error(6, 0x93, 0);
               return (ulong)uVar3;
            }

            goto LAB_00100295;
         }

      }
 else if (iVar2 == 2) {
         uVar4 = evp_pkey_ctx_ctrl_to_param(param_1, param_2, param_3, param_4, param_5, param_6);
         return uVar4;
      }

      uVar4 = 0;
   }

   return uVar4;
}
void evp_pkey_ctx_free_old_ops(uint *param_1) {
   uint uVar1;
   long lVar2;
   uVar1 = *param_1;
   if (( uVar1 & 0xc1f0 ) == 0) {
      if (( uVar1 & 0x800 ) != 0) {
         lVar2 = *(long*)( param_1 + 10 );
         if (( *(long*)( param_1 + 0xc ) != 0 ) && ( lVar2 != 0 )) {
            ( **(code**)( lVar2 + 0x48 ) )();
            lVar2 = *(long*)( param_1 + 10 );
         }

         EVP_KEYEXCH_free(lVar2);
         *(undefined1(*) [16])( param_1 + 10 ) = (undefined1[16])0x0;
         return;
      }

      if (( uVar1 & 0x3000 ) != 0) {
         lVar2 = *(long*)( param_1 + 10 );
         if (( *(long*)( param_1 + 0xc ) != 0 ) && ( lVar2 != 0 )) {
            ( **(code**)( lVar2 + 0x50 ) )();
            lVar2 = *(long*)( param_1 + 10 );
         }

         EVP_KEM_free(lVar2);
         *(undefined1(*) [16])( param_1 + 10 ) = (undefined1[16])0x0;
         return;
      }

      if (( uVar1 & 0x600 ) != 0) {
         lVar2 = *(long*)( param_1 + 10 );
         if (( *(long*)( param_1 + 0xc ) != 0 ) && ( lVar2 != 0 )) {
            ( **(code**)( lVar2 + 0x50 ) )();
            lVar2 = *(long*)( param_1 + 10 );
         }

         EVP_ASYM_CIPHER_free(lVar2);
         *(undefined1(*) [16])( param_1 + 10 ) = (undefined1[16])0x0;
         return;
      }

      if (( ( ( uVar1 & 6 ) != 0 ) && ( *(long*)( param_1 + 10 ) != 0 ) ) && ( *(long*)( param_1 + 8 ) != 0 )) {
         evp_keymgmt_gen_cleanup();
         return;
      }

   }
 else {
      lVar2 = *(long*)( param_1 + 10 );
      if (( *(long*)( param_1 + 0xc ) != 0 ) && ( lVar2 != 0 )) {
         ( **(code**)( lVar2 + 0xd0 ) )();
         lVar2 = *(long*)( param_1 + 10 );
      }

      EVP_SIGNATURE_free(lVar2);
      *(undefined1(*) [16])( param_1 + 10 ) = (undefined1[16])0x0;
   }

   return;
}
void EVP_PKEY_CTX_free(EVP_PKEY_CTX *ctx) {
   code *pcVar1;
   if (ctx != (EVP_PKEY_CTX*)0x0) {
      if (( *(long*)( ctx + 0x78 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( ctx + 0x78 ) + 0x18 ) ),pcVar1 != (code*)0x0) {
         ( *pcVar1 )();
      }

      evp_pkey_ctx_free_old_ops(ctx);
      CRYPTO_free(*(void**)( ctx + 0x40 ));
      CRYPTO_free(*(void**)( ctx + 0x38 ));
      *(undefined1(*) [16])( ctx + 0x38 ) = (undefined1[16])0x0;
      EVP_KEYMGMT_free(*(undefined8*)( ctx + 0x20 ));
      CRYPTO_free(*(void**)( ctx + 0x10 ));
      EVP_PKEY_free(*(EVP_PKEY**)( ctx + 0x88 ));
      EVP_PKEY_free(*(EVP_PKEY**)( ctx + 0x90 ));
      ENGINE_finish(*(ENGINE**)( ctx + 0x80 ));
      BN_free(*(BIGNUM**)( ctx + 0xa8 ));
      CRYPTO_free(ctx);
      return;
   }

   return;
}
EVP_PKEY_CTX *int_ctx_new(undefined8 param_1, int *param_2, ENGINE *param_3, char *param_4, char *param_5, int param_6) {
   int iVar1;
   int iVar2;
   int iVar3;
   EVP_PKEY_METHOD *pEVar4;
   char *pcVar5;
   EVP_PKEY_CTX *ctx;
   ENGINE *e;
   long in_FS_OFFSET;
   long local_158;
   int local_148[66];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = param_6;
   if (param_6 == -1) {
      if (param_2 == (int*)0x0) {
         LAB_0010065a:if (param_4 == (char*)0x0) {
            if (param_3 == (ENGINE*)0x0) goto LAB_001008cd;
            LAB_00100890:ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0xc0, "int_ctx_new");
            ERR_set_error(6, 0x9c, 0);
            goto LAB_001009f0;
         }

         iVar3 = evp_pkey_name2type(param_4);
         if (( iVar3 != 0 ) && ( param_6 = iVar3 != -1 )) goto LAB_001005b3;
         if (param_3 != (ENGINE*)0x0) goto LAB_00100890;
      }
 else {
         if (*(long*)( param_2 + 0x18 ) != 0) {
            param_4 = (char*)EVP_KEYMGMT_get0_name();
            goto LAB_0010065a;
         }

         iVar3 = *param_2;
         if (iVar3 != -1) goto LAB_001005b3;
         if (param_3 != (ENGINE*)0x0) goto LAB_00100890;
         LAB_00100967:param_6 = iVar3;
         if (param_4 == (char*)0x0) {
            LAB_001008cd:ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0x127, "int_ctx_new");
            ERR_set_error(6, 0x9c, 0);
            goto LAB_0010061e;
         }

      }

      LAB_00100680:pEVar4 = (EVP_PKEY_METHOD*)0x0;
      iVar3 = param_6;
      if (param_2 == (int*)0x0) {
         LAB_00100978:local_158 = EVP_KEYMGMT_fetch(param_1, param_4, param_5);
      }
 else {
         LAB_0010068c:if (*(long*)( param_2 + 0x18 ) == 0) goto LAB_00100978;
         iVar1 = EVP_KEYMGMT_up_ref();
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0xff, "int_ctx_new");
            ERR_set_error(6, 0x86, 0);
            goto LAB_001009f0;
         }

         local_158 = *(long*)( param_2 + 0x18 );
      }

      if (local_158 != 0) {
         iVar2 = evp_keymgmt_get_legacy_alg(local_158);
         iVar1 = iVar3;
         if (( ( iVar2 == 0 ) || ( iVar1 = iVar3 == -1 ) ) || ( iVar1 = iVar2 == iVar3 )) {
            ctx = (EVP_PKEY_CTX*)CRYPTO_zalloc(0xb0, "crypto/evp/pmeth_lib.c", 0x129);
            if (( ctx == (EVP_PKEY_CTX*)0x0 ) || ( ( pEVar4 == (EVP_PKEY_METHOD*)0x0 && ( ctx == (EVP_PKEY_CTX*)0x0 ) ) )) goto LAB_00100627;
            param_3 = (ENGINE*)0x0;
            goto LAB_00100713;
         }

         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x11c, "int_ctx_new");
         ERR_set_error(6, 0xc0103, 0);
         EVP_KEYMGMT_free(local_158);
      }

   }
 else {
      LAB_001005b3:if (param_3 == (ENGINE*)0x0) {
         if (param_2 != (int*)0x0) {
            if (( *(byte*)( param_2 + 0x13 ) & 1 ) == 0) {
               param_4 = OBJ_nid2sn(iVar3);
               e = *(ENGINE**)( param_2 + 6 );
            }
 else {
               e = *(ENGINE**)( param_2 + 6 );
            }

            if (( e != (ENGINE*)0x0 ) || ( e = *(ENGINE**)( param_2 + 4 ) ),e != (ENGINE*)0x0) goto LAB_001005bf;
            e = ENGINE_get_pkey_meth_engine(iVar3);
            if (e != (ENGINE*)0x0) goto LAB_001005cf;
            if (( *(byte*)( param_2 + 0x13 ) & 1 ) == 0) goto LAB_00100944;
            pEVar4 = EVP_PKEY_meth_find(iVar3);
            if (param_4 == (char*)0x0) goto LAB_0010081f;
            goto LAB_0010068c;
         }

         param_4 = OBJ_nid2sn(iVar3);
         e = ENGINE_get_pkey_meth_engine(iVar3);
         if (e != (ENGINE*)0x0) goto LAB_001005cf;
         LAB_00100944:if (( app_pkey_methods == 0 ) || ( local_148[0] = iVar3 ),iVar1 = OPENSSL_sk_find(app_pkey_methods, local_148),iVar1 < 0) goto LAB_00100967;
         pEVar4 = (EVP_PKEY_METHOD*)OPENSSL_sk_value(app_pkey_methods, iVar1);
         if (pEVar4 == (EVP_PKEY_METHOD*)0x0) {
            param_6 = iVar3;
            if (param_4 != (char*)0x0) goto LAB_00100680;
            LAB_0010081f:if (pEVar4 == (EVP_PKEY_METHOD*)0x0) goto LAB_001008cd;
         }

         LAB_00100830:ctx = (EVP_PKEY_CTX*)CRYPTO_zalloc(0xb0, "crypto/evp/pmeth_lib.c", 0x129);
         if (ctx == (EVP_PKEY_CTX*)0x0) {
            if (param_3 == (ENGINE*)0x0) goto LAB_0010061e;
            goto LAB_00100616;
         }

         local_158 = 0;
         iVar1 = iVar3;
         LAB_00100713:if (param_5 != (char*)0x0) {
            pcVar5 = CRYPTO_strdup(param_5, "crypto/evp/pmeth_lib.c", 0x136);
            *(char**)( ctx + 0x10 ) = pcVar5;
            if (pcVar5 == (char*)0x0) {
               CRYPTO_free(ctx);
               goto LAB_00100627;
            }

         }

         *(char**)( ctx + 0x18 ) = param_4;
         *(int*)( ctx + 0x74 ) = iVar1;
         *(undefined8*)( ctx + 8 ) = param_1;
         *(ENGINE**)( ctx + 0x80 ) = param_3;
         *(long*)( ctx + 0x20 ) = local_158;
         *(EVP_PKEY_METHOD**)( ctx + 0x78 ) = pEVar4;
         *(undefined4*)ctx = 0;
         if (( param_2 == (int*)0x0 ) || ( iVar3 = iVar3 != 0 )) {
            *(int**)( ctx + 0x88 ) = param_2;
            if (( pEVar4 == (EVP_PKEY_METHOD*)0x0 ) || ( ( *(code**)( pEVar4 + 8 ) == (code*)0x0 || ( iVar3 = ( **(code**)( pEVar4 + 8 ) )(ctx) ),0 < iVar3 ) )) goto LAB_0010079e;
            *(undefined8*)( ctx + 0x78 ) = 0;
         }

         EVP_PKEY_CTX_free(ctx);
      }
 else {
         param_4 = (char*)0x0;
         e = param_3;
         LAB_001005bf:iVar1 = ENGINE_init(e);
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0xdb, "int_ctx_new");
            ERR_set_error(6, 0x80026, 0);
         }
 else {
            LAB_001005cf:pEVar4 = ENGINE_get_pkey_meth(e, iVar3);
            param_3 = e;
            if (pEVar4 != (EVP_PKEY_METHOD*)0x0) goto LAB_00100830;
            ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0x127, "int_ctx_new");
            ERR_set_error(6, 0x9c, 0);
            LAB_00100616:ENGINE_finish(param_3);
            LAB_0010061e:local_158 = 0;
            LAB_00100627:EVP_KEYMGMT_free(local_158);
         }

      }

   }

   LAB_001009f0:ctx = (EVP_PKEY_CTX*)0x0;
   LAB_0010079e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ctx;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void EVP_PKEY_CTX_new_from_pkey(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int_ctx_new(param_1, param_2, 0, 0, param_3, 0xffffffff);
   return;
}
EVP_PKEY_CTX *EVP_PKEY_CTX_new_from_name(undefined8 param_1, char *param_2, char *param_3) {
   int iVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   EVP_PKEY_CTX *ctx;
   char *pcVar5;
   ENGINE *e;
   EVP_PKEY_METHOD *pEVar6;
   long in_FS_OFFSET;
   int local_148[66];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (char*)0x0) {
      LAB_00100da0:ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x127, "int_ctx_new");
      ERR_set_error(6, 0x9c, 0);
      LAB_00100d58:lVar4 = 0;
      LAB_00100d5b:EVP_KEYMGMT_free(lVar4);
   }
 else {
      iVar1 = evp_pkey_name2type(param_2);
      if (1 < iVar1 + 1U) {
         param_2 = OBJ_nid2sn(iVar1);
         e = ENGINE_get_pkey_meth_engine(iVar1);
         if (e == (ENGINE*)0x0) {
            if (( ( app_pkey_methods == 0 ) || ( local_148[0] = iVar1 ),iVar3 = OPENSSL_sk_find(app_pkey_methods, local_148),iVar3 < 0 )) {
               iVar3 = iVar1;
               if (param_2 == (char*)0x0) goto LAB_00100da0;
               goto LAB_00100b95;
            }

         }
 else {
            pEVar6 = ENGINE_get_pkey_meth(e, iVar1);
            if (pEVar6 == (EVP_PKEY_METHOD*)0x0) {
               ERR_new();
               ERR_set_debug("crypto/evp/pmeth_lib.c", 0x127, "int_ctx_new");
               ERR_set_error(6, 0x9c, 0);
               ENGINE_finish(e);
               goto LAB_00100d58;
            }

         }

         ctx = (EVP_PKEY_CTX*)CRYPTO_zalloc(0xb0, "crypto/evp/pmeth_lib.c", 0x129);
         if (ctx != (EVP_PKEY_CTX*)0x0) {
            lVar4 = 0;
            LAB_00100bef:if (param_3 != (char*)0x0) {
               pcVar5 = CRYPTO_strdup(param_3, "crypto/evp/pmeth_lib.c", 0x136);
               *(char**)( ctx + 0x10 ) = pcVar5;
               if (pcVar5 == (char*)0x0) {
                  CRYPTO_free(ctx);
                  goto LAB_00100d5b;
               }

            }

            *(undefined8*)( ctx + 8 ) = param_1;
            *(char**)( ctx + 0x18 ) = param_2;
            *(long*)( ctx + 0x20 ) = lVar4;
            *(int*)( ctx + 0x74 ) = iVar1;
            *(ENGINE**)( ctx + 0x80 ) = e;
            *(EVP_PKEY_METHOD**)( ctx + 0x78 ) = pEVar6;
            *(undefined4*)ctx = 0;
            *(undefined8*)( ctx + 0x88 ) = 0;
            if (( ( pEVar6 != (EVP_PKEY_METHOD*)0x0 ) && ( *(code**)( pEVar6 + 8 ) != (code*)0x0 ) ) && ( iVar1 = iVar1 < 1 )) {
               *(undefined8*)( ctx + 0x78 ) = 0;
               EVP_PKEY_CTX_free(ctx);
               ctx = (EVP_PKEY_CTX*)0x0;
            }

            goto LAB_00100c77;
         }

         if (e != (ENGINE*)0x0) {
            ENGINE_finish(e);
         }

         goto LAB_00100d58;
      }

      iVar3 = -1;
      LAB_00100b95:lVar4 = EVP_KEYMGMT_fetch(param_1, param_2, param_3);
      if (lVar4 != 0) {
         iVar2 = evp_keymgmt_get_legacy_alg(lVar4);
         iVar1 = iVar3;
         if (( ( iVar2 != 0 ) && ( iVar1 = iVar2 ),iVar3 != -1 )) {
            ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0x11c, "int_ctx_new");
            ERR_set_error(6, 0xc0103, 0);
            EVP_KEYMGMT_free(lVar4);
            ctx = (EVP_PKEY_CTX*)0x0;
            goto LAB_00100c77;
         }

         ctx = (EVP_PKEY_CTX*)CRYPTO_zalloc(0xb0, "crypto/evp/pmeth_lib.c", 0x129);
         if (ctx != (EVP_PKEY_CTX*)0x0) {
            pEVar6 = (EVP_PKEY_METHOD*)0x0;
            e = (ENGINE*)0x0;
            goto LAB_00100bef;
         }

         goto LAB_00100d5b;
      }

   }

   ctx = (EVP_PKEY_CTX*)0x0;
   LAB_00100c77:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ctx;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void EVP_PKEY_meth_get0_info(int *ppkey_id, int *pflags, EVP_PKEY_METHOD *meth) {
   if (ppkey_id != (int*)0x0) {
      *ppkey_id = *(int*)meth;
   }

   if (pflags != (int*)0x0) {
      *pflags = *(int*)( meth + 4 );
   }

   return;
}
void EVP_PKEY_meth_copy(EVP_PKEY_METHOD *dst, EVP_PKEY_METHOD *src) {
   undefined8 uVar1;
   undefined8 uVar2;
   uVar2 = *(undefined8*)( src + 8 );
   uVar1 = *(undefined8*)dst;
   *(undefined8*)dst = *(undefined8*)src;
   *(undefined8*)( dst + 8 ) = uVar2;
   for (int i = 0; i < 15; i++) {
      uVar2 = *(undefined8*)( src + ( 16*i + 24 ) );
      *(undefined8*)( dst + ( 16*i + 16 ) ) = *(undefined8*)( src + ( 16*i + 16 ) );
      *(undefined8*)( dst + ( 16*i + 24 ) ) = uVar2;
   }

   *(undefined8*)dst = uVar1;
   return;
}
EVP_PKEY_CTX *EVP_PKEY_CTX_new(EVP_PKEY *pkey, ENGINE *e) {
   EVP_PKEY_CTX *pEVar1;
   pEVar1 = (EVP_PKEY_CTX*)int_ctx_new(0, pkey, e, 0, 0, 0xffffffff);
   return pEVar1;
}
/* WARNING: Removing unreachable block (ram,0x001011d8) */EVP_PKEY_CTX *EVP_PKEY_CTX_new_id(int id, ENGINE *e) {
   int iVar1;
   EVP_PKEY_METHOD *pEVar2;
   char *pcVar3;
   long lVar4;
   EVP_PKEY_CTX *ctx;
   EVP_PKEY_CTX *pEVar5;
   long in_FS_OFFSET;
   int local_148[66];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (id == -1) {
      if (e != (ENGINE*)0x0) {
         ERR_new();
         pEVar5 = (EVP_PKEY_CTX*)0x0;
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0xc0, "int_ctx_new");
         ERR_set_error(6, 0x9c, 0);
         goto LAB_0010117b;
      }

      LAB_00101081:ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x127, "int_ctx_new");
      ERR_set_error(6, 0x9c, 0);
      LAB_00101062:lVar4 = 0;
      LAB_00101064:EVP_KEYMGMT_free(lVar4);
   }
 else {
      if (e != (ENGINE*)0x0) {
         iVar1 = ENGINE_init(e);
         if (iVar1 == 0) {
            ERR_new();
            pEVar5 = (EVP_PKEY_CTX*)0x0;
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0xdb, "int_ctx_new");
            ERR_set_error(6, 0x80026, 0);
            goto LAB_0010117b;
         }

         pcVar3 = (char*)0x0;
         LAB_00101013:pEVar2 = ENGINE_get_pkey_meth(e, id);
         if (pEVar2 == (EVP_PKEY_METHOD*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0x127, "int_ctx_new");
            ERR_set_error(6, 0x9c, 0);
            ENGINE_finish(e);
         }
 else {
            LAB_001011e0:ctx = (EVP_PKEY_CTX*)CRYPTO_zalloc(0xb0, "crypto/evp/pmeth_lib.c", 0x129);
            if (ctx != (EVP_PKEY_CTX*)0x0) {
               *(undefined8*)( ctx + 8 ) = 0;
               *(char**)( ctx + 0x18 ) = pcVar3;
               *(undefined8*)( ctx + 0x20 ) = 0;
               *(int*)( ctx + 0x74 ) = id;
               *(ENGINE**)( ctx + 0x80 ) = e;
               *(EVP_PKEY_METHOD**)( ctx + 0x78 ) = pEVar2;
               *(undefined4*)ctx = 0;
               *(undefined8*)( ctx + 0x88 ) = 0;
               pEVar5 = ctx;
               if (( *(code**)( pEVar2 + 8 ) != (code*)0x0 ) && ( iVar1 = iVar1 < 1 )) {
                  *(undefined8*)( ctx + 0x78 ) = 0;
                  pEVar5 = (EVP_PKEY_CTX*)0x0;
                  EVP_PKEY_CTX_free(ctx);
               }

               goto LAB_0010117b;
            }

            if (e != (ENGINE*)0x0) {
               ENGINE_finish(e);
            }

         }

         goto LAB_00101062;
      }

      pcVar3 = OBJ_nid2sn(id);
      e = ENGINE_get_pkey_meth_engine(id);
      if (e != (ENGINE*)0x0) goto LAB_00101013;
      if (( ( app_pkey_methods != 0 ) && ( local_148[0] = id ),iVar1 = OPENSSL_sk_find(app_pkey_methods, local_148),-1 < iVar1 )) &&( pEVar2 = (EVP_PKEY_METHOD*)OPENSSL_sk_value(app_pkey_methods, iVar1) ),pEVar2 != (EVP_PKEY_METHOD*)0x0;
      if (pcVar3 == (char*)0x0) goto LAB_00101081;
      lVar4 = EVP_KEYMGMT_fetch(0, pcVar3, 0);
      if (lVar4 != 0) {
         iVar1 = evp_keymgmt_get_legacy_alg(lVar4);
         if (( iVar1 != 0 ) && ( id != iVar1 )) {
            ERR_new();
            pEVar5 = (EVP_PKEY_CTX*)0x0;
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0x11c, "int_ctx_new");
            ERR_set_error(6, 0xc0103, 0);
            EVP_KEYMGMT_free(lVar4);
            goto LAB_0010117b;
         }

         pEVar5 = (EVP_PKEY_CTX*)CRYPTO_zalloc(0xb0, "crypto/evp/pmeth_lib.c", 0x129);
         if (pEVar5 != (EVP_PKEY_CTX*)0x0) {
            *(undefined8*)( pEVar5 + 8 ) = 0;
            *(char**)( pEVar5 + 0x18 ) = pcVar3;
            *(long*)( pEVar5 + 0x20 ) = lVar4;
            *(int*)( pEVar5 + 0x74 ) = id;
            *(undefined8*)( pEVar5 + 0x80 ) = 0;
            *(undefined8*)( pEVar5 + 0x78 ) = 0;
            *(undefined4*)pEVar5 = 0;
            *(undefined8*)( pEVar5 + 0x88 ) = 0;
            goto LAB_0010117b;
         }

         goto LAB_00101064;
      }

   }

   pEVar5 = (EVP_PKEY_CTX*)0x0;
   LAB_0010117b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pEVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
EVP_PKEY_CTX *EVP_PKEY_CTX_dup(EVP_PKEY_CTX *ctx) {
   undefined8 uVar1;
   code *pcVar2;
   int iVar3;
   uint uVar4;
   EVP_PKEY_CTX *ctx_00;
   char *pcVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(ENGINE**)( ctx + 0x80 ) != (ENGINE*)0x0 ) && ( iVar3 = iVar3 == 0 )) {
      ERR_new();
      ctx_00 = (EVP_PKEY_CTX*)0x0;
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x1cc, "EVP_PKEY_CTX_dup");
      ERR_set_error(6, 0x80026, 0);
      goto LAB_00101485;
   }

   ctx_00 = (EVP_PKEY_CTX*)CRYPTO_zalloc(0xb0, "crypto/evp/pmeth_lib.c", 0x1d0);
   if (ctx_00 != (EVP_PKEY_CTX*)0x0) {
      lVar6 = *(long*)( ctx + 0x88 );
      if (lVar6 == 0) {
         LAB_001013dd:uVar1 = *(undefined8*)( ctx + 8 );
         *(long*)( ctx_00 + 0x88 ) = lVar6;
         uVar4 = *(uint*)ctx;
         pcVar5 = *(char**)( ctx + 0x10 );
         *(undefined8*)( ctx_00 + 0x10 ) = 0;
         *(undefined8*)( ctx_00 + 8 ) = uVar1;
         uVar1 = *(undefined8*)( ctx + 0x18 );
         *(uint*)ctx_00 = uVar4;
         *(undefined8*)( ctx_00 + 0x18 ) = uVar1;
         if (pcVar5 != (char*)0x0) {
            pcVar5 = CRYPTO_strdup(pcVar5, "crypto/evp/pmeth_lib.c", 0x1dd);
            *(char**)( ctx_00 + 0x10 ) = pcVar5;
            if (pcVar5 == (char*)0x0) goto LAB_00101510;
            uVar4 = *(uint*)ctx;
         }

         *(undefined4*)( ctx_00 + 0x74 ) = *(undefined4*)( ctx + 0x74 );
         if (( uVar4 & 0x800 ) == 0) {
            if (( uVar4 & 0xc1f0 ) == 0) {
               if (( uVar4 & 0x600 ) == 0) {
                  if (( uVar4 & 0x3000 ) == 0) {
                     if (( uVar4 & 6 ) == 0) goto LAB_00101557;
                  }
 else {
                     if (*(long*)( ctx + 0x28 ) == 0) goto LAB_00101550;
                     *(long*)( ctx_00 + 0x28 ) = *(long*)( ctx + 0x28 );
                     iVar3 = EVP_KEM_up_ref();
                     if (iVar3 != 0) {
                        if (*(long*)( ctx + 0x30 ) == 0) goto LAB_00101557;
                        if (*(long*)( ctx + 0x28 ) != 0) {
                           pcVar2 = *(code**)( *(long*)( ctx + 0x28 ) + 0x58 );
                           if (pcVar2 == (code*)0x0) {
                              lVar6 = *(long*)( ctx_00 + 0x30 );
                           }
 else {
                              lVar6 = ( *pcVar2 )();
                              *(long*)( ctx_00 + 0x30 ) = lVar6;
                           }

                           if (lVar6 != 0) goto LAB_00101485;
                           EVP_KEM_free(*(undefined8*)( ctx_00 + 0x28 ));
                           *(undefined8*)( ctx_00 + 0x28 ) = 0;
                        }

                     }

                  }

               }
 else {
                  if (*(long*)( ctx + 0x28 ) == 0) goto LAB_00101550;
                  *(long*)( ctx_00 + 0x28 ) = *(long*)( ctx + 0x28 );
                  iVar3 = EVP_ASYM_CIPHER_up_ref();
                  if (iVar3 != 0) {
                     if (*(long*)( ctx + 0x30 ) == 0) goto LAB_00101557;
                     if (*(long*)( ctx + 0x28 ) != 0) {
                        pcVar2 = *(code**)( *(long*)( ctx + 0x28 ) + 0x58 );
                        if (pcVar2 == (code*)0x0) {
                           lVar6 = *(long*)( ctx_00 + 0x30 );
                        }
 else {
                           lVar6 = ( *pcVar2 )();
                           *(long*)( ctx_00 + 0x30 ) = lVar6;
                        }

                        if (lVar6 != 0) goto LAB_00101485;
                        EVP_ASYM_CIPHER_free(*(undefined8*)( ctx_00 + 0x28 ));
                        *(undefined8*)( ctx_00 + 0x28 ) = 0;
                     }

                  }

               }

            }
 else {
               if (*(long*)( ctx + 0x28 ) == 0) goto LAB_00101550;
               *(long*)( ctx_00 + 0x28 ) = *(long*)( ctx + 0x28 );
               iVar3 = EVP_SIGNATURE_up_ref();
               if (iVar3 != 0) {
                  if (*(long*)( ctx + 0x30 ) == 0) goto LAB_00101557;
                  if (*(long*)( ctx + 0x28 ) != 0) {
                     pcVar2 = *(code**)( *(long*)( ctx + 0x28 ) + 0xd8 );
                     if (pcVar2 == (code*)0x0) {
                        lVar6 = *(long*)( ctx_00 + 0x30 );
                     }
 else {
                        lVar6 = ( *pcVar2 )();
                        *(long*)( ctx_00 + 0x30 ) = lVar6;
                     }

                     if (lVar6 != 0) goto LAB_00101485;
                     EVP_SIGNATURE_free(*(undefined8*)( ctx_00 + 0x28 ));
                     *(undefined8*)( ctx_00 + 0x28 ) = 0;
                  }

               }

            }

         }
 else if (*(long*)( ctx + 0x28 ) == 0) {
            LAB_00101550:if (*(long*)( ctx + 0x30 ) == 0) {
               LAB_00101557:lVar7 = *(long*)( ctx + 0x78 );
               uVar1 = *(undefined8*)( ctx + 0x80 );
               lVar6 = *(long*)( ctx + 0x90 );
               *(long*)( ctx_00 + 0x78 ) = lVar7;
               *(undefined8*)( ctx_00 + 0x80 ) = uVar1;
               if (lVar6 != 0) {
                  iVar3 = EVP_PKEY_up_ref();
                  if (iVar3 == 0) goto LAB_00101510;
                  lVar6 = *(long*)( ctx + 0x90 );
                  lVar7 = *(long*)( ctx + 0x78 );
               }

               *(long*)( ctx_00 + 0x90 ) = lVar6;
               if (lVar7 == 0) {
                  if (*(int*)ctx_00 == 0) {
                     local_28 = *(undefined8*)( ctx + 0x20 );
                     lVar6 = evp_pkey_export_to_provider(*(undefined8*)( ctx + 0x88 ), *(undefined8*)( ctx + 8 ), &local_28, *(undefined8*)( ctx + 0x10 ));
                     if (( lVar6 != 0 ) && ( iVar3 = iVar3 != 0 )) {
                        EVP_KEYMGMT_free(*(undefined8*)( ctx_00 + 0x20 ));
                        *(undefined8*)( ctx_00 + 0x20 ) = local_28;
                        goto LAB_00101485;
                     }

                  }

               }
 else {
                  iVar3 = ( **(code**)( lVar7 + 0x10 ) )(ctx_00, ctx);
                  if (0 < iVar3) goto LAB_00101485;
               }

            }

         }
 else {
            *(long*)( ctx_00 + 0x28 ) = *(long*)( ctx + 0x28 );
            iVar3 = EVP_KEYEXCH_up_ref();
            if (iVar3 != 0) {
               if (*(long*)( ctx + 0x30 ) == 0) goto LAB_00101557;
               if (*(long*)( ctx + 0x28 ) != 0) {
                  pcVar2 = *(code**)( *(long*)( ctx + 0x28 ) + 0x50 );
                  if (pcVar2 == (code*)0x0) {
                     lVar6 = *(long*)( ctx_00 + 0x30 );
                  }
 else {
                     lVar6 = ( *pcVar2 )();
                     *(long*)( ctx_00 + 0x30 ) = lVar6;
                  }

                  if (lVar6 != 0) goto LAB_00101485;
                  EVP_KEYEXCH_free(*(undefined8*)( ctx_00 + 0x28 ));
                  *(undefined8*)( ctx_00 + 0x28 ) = 0;
               }

            }

         }

      }
 else {
         iVar3 = EVP_PKEY_up_ref();
         if (iVar3 != 0) {
            lVar6 = *(long*)( ctx + 0x88 );
            goto LAB_001013dd;
         }

      }

      LAB_00101510:*(undefined8*)( ctx_00 + 0x78 ) = 0;
      EVP_PKEY_CTX_free(ctx_00);
   }

   ctx_00 = (EVP_PKEY_CTX*)0x0;
   LAB_00101485:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return ctx_00;
}
int EVP_PKEY_meth_add0(EVP_PKEY_METHOD *pmeth) {
   int iVar1;
   undefined8 uVar2;
   if (app_pkey_methods == 0) {
      app_pkey_methods = OPENSSL_sk_new(pmeth_cmp);
      if (app_pkey_methods == 0) {
         ERR_new(0);
         uVar2 = 0x263;
         goto LAB_001017c9;
      }

   }

   iVar1 = OPENSSL_sk_push(app_pkey_methods, pmeth);
   if (iVar1 != 0) {
      OPENSSL_sk_sort(app_pkey_methods);
      return 1;
   }

   ERR_new();
   uVar2 = 0x268;
   LAB_001017c9:ERR_set_debug("crypto/evp/pmeth_lib.c", uVar2, "EVP_PKEY_meth_add0");
   ERR_set_error(6, 0x8000f, 0);
   return 0;
}
void evp_app_cleanup_int(void) {
   if (app_pkey_methods != 0) {
      OPENSSL_sk_pop_free(app_pkey_methods, EVP_PKEY_meth_free);
      return;
   }

   return;
}
bool EVP_PKEY_meth_remove(undefined8 param_1) {
   long lVar1;
   lVar1 = OPENSSL_sk_delete_ptr(app_pkey_methods, param_1);
   return lVar1 != 0;
}
long EVP_PKEY_meth_get_count(void) {
   int iVar1;
   if (app_pkey_methods != 0) {
      iVar1 = OPENSSL_sk_num();
      return (long)iVar1 + 10;
   }

   return 10;
}
undefined8 EVP_PKEY_meth_get0(ulong param_1) {
   int iVar1;
   undefined8 uVar2;
   if (param_1 < 10) {
      uVar2 = ( *(code*)( &standard_methods )[param_1] )();
      return uVar2;
   }

   if (app_pkey_methods != 0) {
      iVar1 = OPENSSL_sk_num(app_pkey_methods);
      if (param_1 - 10 < (ulong)(long)iVar1) {
         uVar2 = OPENSSL_sk_value(app_pkey_methods, param_1 - 10 & 0xffffffff);
         return uVar2;
      }

      return 0;
   }

   return 0;
}
ulong EVP_PKEY_CTX_is_a(long param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   if (*(long*)( param_1 + 0x20 ) != 0) {
      uVar3 = EVP_KEYMGMT_is_a(*(long*)( param_1 + 0x20 ));
      return uVar3;
   }

   iVar1 = **(int**)( param_1 + 0x78 );
   iVar2 = evp_pkey_name2type(param_2);
   return ( ulong )(iVar1 == iVar2);
}
undefined8 EVP_PKEY_CTX_set_params(uint *param_1, undefined8 param_2) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   code *UNRECOVERED_JUMPTABLE_00;
   long lVar4;
   iVar2 = evp_pkey_ctx_state();
   if (iVar2 == 1) {
      uVar3 = evp_pkey_ctx_set_params_to_ctrl(param_1, param_2);
      return uVar3;
   }

   if (iVar2 != 2) {
      return 0;
   }

   uVar1 = *param_1;
   if (( uVar1 & 0x800 ) == 0) {
      if (( uVar1 & 0xc1f0 ) != 0) {
         lVar4 = *(long*)( param_1 + 10 );
         if (lVar4 == 0) goto LAB_00101a00;
         LAB_0010199b:UNRECOVERED_JUMPTABLE_00 = *(code**)( lVar4 + 0xf0 );
         if (UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
            LAB_001019a7:/* WARNING: Could not recover jumptable at 0x001019b4. Too many branches *//* WARNING: Treating indirect jump as call */uVar3 = ( *UNRECOVERED_JUMPTABLE_00 )(*(undefined8*)( param_1 + 0xc ), param_2);
            return uVar3;
         }

         goto LAB_001019f1;
      }

      LAB_00101a57:if (( ( uVar1 & 0x600 ) == 0 ) || ( lVar4 = lVar4 == 0 )) goto LAB_00101a00;
   }
 else {
      lVar4 = *(long*)( param_1 + 10 );
      if (lVar4 == 0) {
         if (( uVar1 & 0xc1f0 ) != 0) goto LAB_00101a00;
         goto LAB_00101a57;
      }

      UNRECOVERED_JUMPTABLE_00 = *(code**)( lVar4 + 0x58 );
      if (UNRECOVERED_JUMPTABLE_00 != (code*)0x0) goto LAB_001019a7;
      if (( uVar1 & 0xc1f0 ) != 0) goto LAB_0010199b;
      LAB_001019f1:if (( uVar1 & 0x600 ) == 0) goto LAB_00101a00;
   }

   if (*(code**)( lVar4 + 0x70 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00101a7b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar3 = ( **(code**)( lVar4 + 0x70 ) )(*(undefined8*)( param_1 + 0xc ), param_2);
      return uVar3;
   }

   LAB_00101a00:if (( ( ( uVar1 & 6 ) != 0 ) && ( lVar4 = *(long*)( param_1 + 8 ) ),lVar4 != 0 )) {
      uVar3 = evp_keymgmt_gen_set_params(lVar4, *(undefined8*)( param_1 + 10 ), param_2);
      return uVar3;
   }

   if (( ( ( uVar1 & 0x3000 ) != 0 ) && ( *(long*)( param_1 + 10 ) != 0 ) ) && ( UNRECOVERED_JUMPTABLE_00 = *(code**)( *(long*)( param_1 + 10 ) + 0x70 ) ),UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00101a47. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar3 = ( *UNRECOVERED_JUMPTABLE_00 )(*(undefined8*)( param_1 + 0xc ), param_2);
      return uVar3;
   }

   return 0;
}
undefined8 EVP_PKEY_CTX_get_params(uint *param_1, undefined8 param_2) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   code *UNRECOVERED_JUMPTABLE;
   long lVar4;
   iVar2 = evp_pkey_ctx_state();
   if (iVar2 == 1) {
      uVar3 = evp_pkey_ctx_get_params_to_ctrl(param_1, param_2);
      return uVar3;
   }

   if (iVar2 != 2) {
      return 0;
   }

   uVar1 = *param_1;
   if (( ( uVar1 & 0x800 ) == 0 ) || ( lVar4 = lVar4 == 0 )) {
      if (( uVar1 & 0xc1f0 ) == 0) {
         if (( uVar1 & 0x600 ) == 0) goto LAB_00101b0c;
      }
 else {
         lVar4 = *(long*)( param_1 + 10 );
         if (lVar4 != 0) goto LAB_00101b59;
         if (( uVar1 & 0x600 ) != 0) goto LAB_00101b78;
         LAB_00101b0c:if (( uVar1 & 0x3000 ) == 0) goto LAB_00101b78;
      }

      lVar4 = *(long*)( param_1 + 10 );
      if (lVar4 == 0) goto LAB_00101b78;
   }
 else {
      UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0x68 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) goto LAB_00101aed;
      if (( uVar1 & 0xc1f0 ) != 0) {
         LAB_00101b59:UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0xe0 );
         if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
            LAB_00101aed:/* WARNING: Could not recover jumptable at 0x00101afa. Too many branches *//* WARNING: Treating indirect jump as call */uVar3 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( param_1 + 0xc ), param_2);
            return uVar3;
         }

      }

      if (( uVar1 & 0x600 ) == 0) goto LAB_00101b0c;
   }

   if (*(code**)( lVar4 + 0x60 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00101b30. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar3 = ( **(code**)( lVar4 + 0x60 ) )(*(undefined8*)( param_1 + 0xc ), param_2);
      return uVar3;
   }

   LAB_00101b78:if (( ( ( uVar1 & 6 ) != 0 ) && ( lVar4 = *(long*)( param_1 + 8 ) ),lVar4 != 0 )) {
      uVar3 = evp_keymgmt_gen_get_params(lVar4, *(undefined8*)( param_1 + 10 ), param_2);
      return uVar3;
   }

   return 0;
}
undefined8 EVP_PKEY_CTX_gettable_params(uint *param_1) {
   uint uVar1;
   undefined8 uVar2;
   long lVar3;
   uVar1 = *param_1;
   if (( ( uVar1 & 0x800 ) == 0 ) || ( lVar3 = lVar3 == 0 )) {
      if (( uVar1 & 0xc1f0 ) == 0) {
         if (( uVar1 & 0x600 ) != 0) {
            if (*(long*)( param_1 + 10 ) == 0) goto LAB_00101c10;
            lVar3 = *(long*)( *(long*)( param_1 + 10 ) + 0x68 );
            goto joined_r0x00101cb7;
         }

      }
 else {
         lVar3 = *(long*)( param_1 + 10 );
         if (lVar3 != 0) goto LAB_00101bee;
         if (( uVar1 & 0x600 ) != 0) goto LAB_00101c10;
      }

   }
 else {
      if (*(long*)( lVar3 + 0x70 ) != 0) {
         uVar2 = EVP_KEYEXCH_get0_provider();
         uVar2 = ossl_provider_ctx(uVar2);
         /* WARNING: Could not recover jumptable at 0x00101d1d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar2 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x70 ) )(*(undefined8*)( param_1 + 0xc ), uVar2);
         return uVar2;
      }

      if (( uVar1 & 0xc1f0 ) != 0) {
         LAB_00101bee:if (*(long*)( lVar3 + 0xe8 ) != 0) {
            uVar2 = EVP_SIGNATURE_get0_provider();
            uVar2 = ossl_provider_ctx(uVar2);
            /* WARNING: Could not recover jumptable at 0x00101ce8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( **(code**)( *(long*)( param_1 + 10 ) + 0xe8 ) )(*(undefined8*)( param_1 + 0xc ), uVar2);
            return uVar2;
         }

      }

      if (( uVar1 & 0x600 ) != 0) {
         lVar3 = *(long*)( lVar3 + 0x68 );
         joined_r0x00101cb7:if (lVar3 == 0) goto LAB_00101c10;
         uVar2 = EVP_ASYM_CIPHER_get0_provider();
         goto LAB_00101c82;
      }

   }

   if (( ( ( uVar1 & 0x3000 ) == 0 ) || ( *(long*)( param_1 + 10 ) == 0 ) ) || ( *(long*)( *(long*)( param_1 + 10 ) + 0x68 ) == 0 )) {
      LAB_00101c10:if (( ( ( uVar1 & 6 ) != 0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(long*)( *(long*)( param_1 + 8 ) + 0x78 ) != 0 )) {
         uVar2 = EVP_KEYMGMT_get0_provider();
         uVar2 = ossl_provider_ctx(uVar2);
         /* WARNING: Could not recover jumptable at 0x00101c4d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar2 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x78 ) )(*(undefined8*)( param_1 + 10 ), uVar2);
         return uVar2;
      }

      return 0;
   }

   uVar2 = EVP_KEM_get0_provider();
   LAB_00101c82:uVar2 = ossl_provider_ctx(uVar2);
   /* WARNING: Could not recover jumptable at 0x00101c9a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar2 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x68 ) )(*(undefined8*)( param_1 + 0xc ), uVar2);
   return uVar2;
}
undefined8 EVP_PKEY_CTX_settable_params(uint *param_1) {
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   uVar1 = *param_1;
   if (( uVar1 & 0x800 ) == 0) {
      if (( uVar1 & 0xc1f0 ) == 0) {
         LAB_00101df3:if (( ( uVar1 & 0x600 ) != 0 ) && ( *(long*)( param_1 + 10 ) != 0 )) {
            lVar4 = *(long*)( *(long*)( param_1 + 10 ) + 0x78 );
            goto joined_r0x00101e0e;
         }

      }
 else {
         lVar4 = *(long*)( param_1 + 10 );
         if (lVar4 != 0) {
            lVar2 = *(long*)( lVar4 + 0xf8 );
            goto joined_r0x00101dd8;
         }

      }

   }
 else {
      lVar4 = *(long*)( param_1 + 10 );
      if (lVar4 == 0) {
         if (( uVar1 & 0xc1f0 ) == 0) goto LAB_00101df3;
      }
 else {
         if (*(long*)( lVar4 + 0x60 ) != 0) {
            uVar3 = EVP_KEYEXCH_get0_provider();
            uVar3 = ossl_provider_ctx(uVar3);
            /* WARNING: Could not recover jumptable at 0x00101e9d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar3 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x60 ) )(*(undefined8*)( param_1 + 0xc ), uVar3);
            return uVar3;
         }

         if (( uVar1 & 0xc1f0 ) != 0) {
            lVar2 = *(long*)( lVar4 + 0xf8 );
            joined_r0x00101dd8:if (lVar2 != 0) {
               uVar3 = EVP_SIGNATURE_get0_provider();
               uVar3 = ossl_provider_ctx(uVar3);
               /* WARNING: Could not recover jumptable at 0x00101e40. Too many branches */
               /* WARNING: Treating indirect jump as call */
               uVar3 = ( **(code**)( *(long*)( param_1 + 10 ) + 0xf8 ) )(*(undefined8*)( param_1 + 0xc ), uVar3);
               return uVar3;
            }

         }

         if (( uVar1 & 0x600 ) != 0) {
            lVar4 = *(long*)( lVar4 + 0x78 );
            joined_r0x00101e0e:if (lVar4 != 0) {
               uVar3 = EVP_ASYM_CIPHER_get0_provider();
               goto LAB_00101da5;
            }

         }

      }

   }

   if (( ( ( uVar1 & 6 ) != 0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(long*)( *(long*)( param_1 + 8 ) + 0x88 ) != 0 )) {
      uVar3 = EVP_KEYMGMT_get0_provider();
      uVar3 = ossl_provider_ctx(uVar3);
      /* WARNING: Could not recover jumptable at 0x00101e78. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar3 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x88 ) )(*(undefined8*)( param_1 + 10 ), uVar3);
      return uVar3;
   }

   if (( ( ( uVar1 & 0x3000 ) == 0 ) || ( *(long*)( param_1 + 10 ) == 0 ) ) || ( *(long*)( *(long*)( param_1 + 10 ) + 0x78 ) == 0 )) {
      return 0;
   }

   uVar3 = EVP_KEM_get0_provider();
   LAB_00101da5:uVar3 = ossl_provider_ctx(uVar3);
   /* WARNING: Could not recover jumptable at 0x00101dbd. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar3 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x78 ) )(*(undefined8*)( param_1 + 0xc ), uVar3);
   return uVar3;
}
undefined8 evp_pkey_ctx_set_params_strict(long param_1, long *param_2) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   if (param_1 == 0) {
      return 0;
   }

   if (param_2 != (long*)0x0) {
      if (*(long*)( param_1 + 0x20 ) != 0) {
         uVar2 = EVP_PKEY_CTX_settable_params();
         lVar3 = *param_2;
         plVar4 = param_2;
         while (lVar3 != 0) {
            lVar3 = OSSL_PARAM_locate_const(uVar2);
            if (lVar3 == 0) {
               return 0xfffffffe;
            }

            plVar1 = plVar4 + 5;
            plVar4 = plVar4 + 5;
            lVar3 = *plVar1;
         }
;
      }

      uVar2 = EVP_PKEY_CTX_set_params(param_1, param_2);
      return uVar2;
   }

   return 0;
}
undefined8 evp_pkey_ctx_get_params_strict(long param_1, long *param_2) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   if (param_1 == 0) {
      return 0;
   }

   if (param_2 != (long*)0x0) {
      if (*(long*)( param_1 + 0x20 ) != 0) {
         uVar2 = EVP_PKEY_CTX_gettable_params();
         lVar3 = *param_2;
         plVar4 = param_2;
         while (lVar3 != 0) {
            lVar3 = OSSL_PARAM_locate_const(uVar2);
            if (lVar3 == 0) {
               return 0xfffffffe;
            }

            plVar1 = plVar4 + 5;
            plVar4 = plVar4 + 5;
            lVar3 = *plVar1;
         }
;
      }

      uVar2 = EVP_PKEY_CTX_get_params(param_1, param_2);
      return uVar2;
   }

   return 0;
}
undefined8 EVP_PKEY_CTX_set_kem_op(uint *param_1, long param_2, long param_3) {
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
   if (( param_1 == (uint*)0x0 ) || ( param_3 = param_2 == 0 )) {
      ERR_new(param_1, param_2, param_3);
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x4f5, "EVP_PKEY_CTX_set_kem_op");
      ERR_set_error(6, 0xde, 0);
      uVar1 = 0;
   }
 else if (( *param_1 & 0x3000 ) == 0) {
      ERR_new(param_1, param_2, param_2);
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x4f9, "EVP_PKEY_CTX_set_kem_op");
      ERR_set_error(6, 0x93, 0);
      uVar1 = 0xfffffffe;
   }
 else {
      OSSL_PARAM_construct_utf8_string(&local_a8, "operation", param_2, 0);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      uVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int EVP_PKEY_CTX_ctrl(EVP_PKEY_CTX *ctx, int keytype, int optype, int cmd, int p1, void *p2) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   if (ctx == (EVP_PKEY_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x544, "EVP_PKEY_CTX_ctrl");
      ERR_set_error(6, 0x93, 0);
      return -2;
   }

   ERR_set_mark();
   lVar5 = (long)p1;
   if (cmd == 0xf) {
      if (keytype != -1) {
         iVar1 = evp_pkey_ctx_state(ctx);
         if (iVar1 < 2) {
            if (-1 < iVar1) {
               if (*(int**)( ctx + 0x78 ) == (int*)0x0) {
                  ERR_new();
                  uVar4 = 0x5cb;
                  goto LAB_00102331;
               }

               iVar1 = EVP_PKEY_type(**(int**)( ctx + 0x78 ));
               iVar2 = EVP_PKEY_type(keytype);
               if (iVar1 != iVar2) {
                  ERR_new();
                  uVar4 = 0x5cf;
                  goto LAB_00102262;
               }

            }

         }
 else if (iVar1 == 2) {
            if (*(long*)( ctx + 0x20 ) == 0) {
               ERR_new();
               uVar4 = 0x5bf;
               goto LAB_00102331;
            }

            uVar4 = evp_pkey_type2name(keytype);
            iVar1 = EVP_KEYMGMT_is_a(*(undefined8*)( ctx + 0x20 ), uVar4);
            if (iVar1 == 0) {
               ERR_new();
               uVar4 = 0x5c4;
               goto LAB_00102262;
            }

         }

      }

      if (( optype != -1 ) && ( ( optype & *(uint*)ctx ) == 0 )) {
         ERR_new();
         uVar4 = 0x5d6;
         LAB_00102262:ERR_set_debug("crypto/evp/pmeth_lib.c", uVar4, "evp_pkey_ctx_store_cached_data");
         ERR_set_error(6, 0x94, 0);
         ERR_clear_last_mark();
         return -1;
      }

      CRYPTO_free(*(void**)( ctx + 0x40 ));
      CRYPTO_free(*(void**)( ctx + 0x38 ));
      *(undefined1(*) [16])( ctx + 0x38 ) = (undefined1[16])0x0;
      if (lVar5 != 0) {
         lVar3 = CRYPTO_memdup(p2, lVar5, "crypto/evp/pmeth_lib.c", 0x5e3);
         *(long*)( ctx + 0x40 ) = lVar3;
         if (lVar3 == 0) {
            ERR_clear_last_mark();
            return 0;
         }

      }

      ctx[0x50] = ( EVP_PKEY_CTX )((byte)ctx[0x50] | 1);
      *(long*)( ctx + 0x48 ) = lVar5;
      ERR_clear_last_mark();
      if (*(int*)ctx == 0) {
         return 1;
      }

   }
 else {
      ERR_new();
      uVar4 = 0x5b7;
      LAB_00102331:ERR_set_debug("crypto/evp/pmeth_lib.c", uVar4, "evp_pkey_ctx_store_cached_data");
      ERR_set_error(6, 0x93, 0);
      ERR_pop_to_mark();
   }

   iVar1 = evp_pkey_ctx_ctrl_int(ctx, keytype, optype, cmd, p1, p2);
   return iVar1;
}
int EVP_PKEY_CTX_get_signature_md(EVP_PKEY_CTX *param_1, long *param_2) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 uStack_a8;
   undefined8 local_a0;
   undefined8 uStack_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   if (( param_1 == (EVP_PKEY_CTX*)0x0 ) || ( ( *(uint*)param_1 & 0xc1f0 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x396, "EVP_PKEY_CTX_get_signature_md");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else if (*(long*)( param_1 + 0x30 ) == 0) {
      iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0xc1f0, 0xd, 0, param_2);
   }
 else {
      OSSL_PARAM_construct_utf8_string(&local_108, "digest", local_88, 0x50);
      local_b8 = local_e8;
      local_d8 = local_108;
      uStack_d0 = uStack_100;
      local_c8 = local_f8;
      uStack_c0 = uStack_f0;
      OSSL_PARAM_construct_end(&local_108);
      local_b0 = local_108;
      uStack_a8 = uStack_100;
      local_90 = local_e8;
      local_a0 = local_f8;
      uStack_98 = uStack_f0;
      iVar1 = EVP_PKEY_CTX_get_params(param_1, &local_d8);
      if (iVar1 != 0) {
         lVar2 = evp_get_digestbyname_ex(*(undefined8*)( param_1 + 8 ), local_88);
         if (lVar2 != 0) {
            *param_2 = lVar2;
            iVar1 = 1;
            goto LAB_001024d1;
         }

      }

      iVar1 = 0;
   }

   LAB_001024d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int EVP_PKEY_CTX_set_hkdf_mode(EVP_PKEY_CTX *param_1, int param_2) {
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   int local_7c;
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
   local_7c = param_2;
   if (( param_1 == (EVP_PKEY_CTX*)0x0 ) || ( ( *(uint*)param_1 & 0x800 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x488, "EVP_PKEY_CTX_set_hkdf_mode");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else if (*(long*)( param_1 + 0x30 ) == 0) {
      iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1007, param_2, (void*)0x0);
   }
 else if (param_2 < 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x494, "EVP_PKEY_CTX_set_hkdf_mode");
      ERR_set_error(6, 0xde, 0);
      iVar1 = 0;
   }
 else {
      OSSL_PARAM_construct_int(&local_b8, &_LC3, &local_7c);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void EVP_PKEY_CTX_set1_id(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   EVP_PKEY_CTX_ctrl(param_1, -1, -1, 0xf, param_3, param_2);
   return;
}
void EVP_PKEY_CTX_get1_id(EVP_PKEY_CTX *param_1, void *param_2) {
   EVP_PKEY_CTX_ctrl(param_1, -1, -1, 0x10, 0, param_2);
   return;
}
void EVP_PKEY_CTX_get1_id_len(EVP_PKEY_CTX *param_1, void *param_2) {
   EVP_PKEY_CTX_ctrl(param_1, -1, -1, 0x11, 0, param_2);
   return;
}
int EVP_PKEY_CTX_add1_hkdf_info(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   long lVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   long local_a8;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   long local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      pcVar5 = "evp_pkey_ctx_add1_octet_string";
      uVar6 = 0x40f;
      LAB_00102a91:ERR_set_debug("crypto/evp/pmeth_lib.c", uVar6, pcVar5);
      ERR_set_error(6, 0x93, 0);
      iVar2 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar2 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1006, param_3, param_2);
            return iVar2;
         }

         goto LAB_00102acd;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x41a, "evp_pkey_ctx_add1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar2 = 0;
      }
 else {
         iVar2 = 1;
         if (param_3 != 0) {
            lVar3 = EVP_PKEY_CTX_gettable_params();
            if (lVar3 != 0) {
               lVar3 = OSSL_PARAM_locate_const(lVar3, &_LC4);
               if (lVar3 != 0) {
                  OSSL_PARAM_construct_octet_string(&local_c8, &_LC4, 0, 0);
                  local_78 = local_a8;
                  local_98 = local_c8;
                  uStack_90 = uStack_c0;
                  local_88 = local_b8;
                  uStack_80 = uStack_b0;
                  OSSL_PARAM_construct_end(&local_c8);
                  local_50 = local_a8;
                  local_70 = local_c8;
                  uStack_68 = uStack_c0;
                  local_60 = local_b8;
                  uStack_58 = uStack_b0;
                  iVar2 = EVP_PKEY_CTX_get_params(param_1, &local_98);
                  if (( ( iVar2 != 0 ) && ( local_78 != -1 ) ) && ( lVar3 = lVar3 != 0 )) {
                     lVar4 = CRYPTO_zalloc(lVar3, "crypto/evp/pmeth_lib.c", 0x434);
                     lVar1 = local_78;
                     if (lVar4 != 0) {
                        OSSL_PARAM_construct_octet_string(&local_c8, &_LC4, lVar4, lVar3);
                        local_78 = local_a8;
                        local_98 = local_c8;
                        uStack_90 = uStack_c0;
                        local_88 = local_b8;
                        uStack_80 = uStack_b0;
                        if (lVar1 == 0) {
                           LAB_00102a2b:memcpy((void*)( lVar1 + lVar4 ), param_2, (long)param_3);
                           iVar2 = EVP_PKEY_CTX_set_params(param_1, &local_98);
                        }
 else {
                           iVar2 = EVP_PKEY_CTX_get_params(param_1, &local_98);
                           if (iVar2 != 0) goto LAB_00102a2b;
                        }

                        CRYPTO_clear_free(lVar4, lVar3, "crypto/evp/pmeth_lib.c", 0x446);
                        goto LAB_001027b7;
                     }

                  }

                  iVar2 = 0;
                  goto LAB_001027b7;
               }

            }

            if (( *(uint*)param_1 & 0x800 ) == 0) {
               ERR_new();
               pcVar5 = "evp_pkey_ctx_set1_octet_string";
               uVar6 = 999;
               goto LAB_00102a91;
            }

            OSSL_PARAM_construct_octet_string(&local_c8, &_LC4, param_2, (long)param_3);
            local_78 = local_a8;
            local_98 = local_c8;
            uStack_90 = uStack_c0;
            local_88 = local_b8;
            uStack_80 = uStack_b0;
            OSSL_PARAM_construct_end(&local_c8);
            local_70 = local_c8;
            uStack_68 = uStack_c0;
            local_50 = local_a8;
            local_60 = local_b8;
            uStack_58 = uStack_b0;
            iVar2 = EVP_PKEY_CTX_set_params(param_1, &local_98);
         }

      }

   }

   LAB_001027b7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   LAB_00102acd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set_hkdf_md(EVP_PKEY_CTX *param_1, void *param_2) {
   int iVar1;
   undefined *puVar2;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3b8, "evp_pkey_ctx_set_md");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1003, 0, param_2);
            return iVar1;
         }

         goto LAB_00102c2a;
      }

      puVar2 = &_LC5;
      if (param_2 != (void*)0x0) {
         puVar2 = (undefined*)EVP_MD_get0_name(param_2, param_2, &_LC5);
      }

      OSSL_PARAM_construct_utf8_string(&local_a8, "digest", puVar2, 0);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_00102c2a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set_tls1_prf_md(EVP_PKEY_CTX *param_1, void *param_2) {
   int iVar1;
   undefined *puVar2;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3b8, "evp_pkey_ctx_set_md");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1000, 0, param_2);
            return iVar1;
         }

         goto LAB_00102d7a;
      }

      puVar2 = &_LC5;
      if (param_2 != (void*)0x0) {
         puVar2 = (undefined*)EVP_MD_get0_name(param_2, param_2, &_LC5);
      }

      OSSL_PARAM_construct_utf8_string(&local_a8, "digest", puVar2, 0);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_00102d7a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set_signature_md(EVP_PKEY_CTX *param_1, void *param_2) {
   int iVar1;
   undefined *puVar2;
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
   if (( *(uint*)param_1 & 0xc1f0 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3b8, "evp_pkey_ctx_set_md");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0xc1f0, 1, 0, param_2);
            return iVar1;
         }

         goto LAB_00102eca;
      }

      puVar2 = &_LC5;
      if (param_2 != (void*)0x0) {
         puVar2 = (undefined*)EVP_MD_get0_name(param_2, param_2, &_LC5);
      }

      OSSL_PARAM_construct_utf8_string(&local_a8, "digest", puVar2, 0);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_00102eca:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set_mac_key(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   int iVar1;
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
   if (( ( byte ) * param_1 & 4 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 999, "evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x28 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 4, 6, param_3, param_2);
            return iVar1;
         }

         goto LAB_0010304a;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3f2, "evp_pkey_ctx_set1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar1 = 0;
      }
 else {
         OSSL_PARAM_construct_octet_string(&local_a8, &_LC6, param_2, (long)param_3);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_0010304a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set1_hkdf_salt(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   int iVar1;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 999, "evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1004, param_3, param_2);
            return iVar1;
         }

         goto LAB_001031ca;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3f2, "evp_pkey_ctx_set1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar1 = 0;
      }
 else {
         OSSL_PARAM_construct_octet_string(&local_a8, &_LC7, param_2, (long)param_3);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_001031ca:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set1_tls1_prf_secret(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   int iVar1;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 999, "evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1001, param_3, param_2);
            return iVar1;
         }

         goto LAB_0010334a;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3f2, "evp_pkey_ctx_set1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar1 = 0;
      }
 else {
         OSSL_PARAM_construct_octet_string(&local_a8, "secret", param_2, (long)param_3);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_0010334a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_add1_tls1_prf_seed(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   int iVar1;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 999, "evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1002, param_3, param_2);
            return iVar1;
         }

         goto LAB_001034ca;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3f2, "evp_pkey_ctx_set1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar1 = 0;
      }
 else {
         OSSL_PARAM_construct_octet_string(&local_a8, &_LC9, param_2, (long)param_3);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_001034ca:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set1_hkdf_key(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   int iVar1;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 999, "evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1005, param_3, param_2);
            return iVar1;
         }

         goto LAB_0010364a;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3f2, "evp_pkey_ctx_set1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar1 = 0;
      }
 else {
         OSSL_PARAM_construct_octet_string(&local_a8, &_LC10, param_2, (long)param_3);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_0010364a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set1_pbe_pass(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   int iVar1;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 999, "evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1008, param_3, param_2);
            return iVar1;
         }

         goto LAB_001037ca;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3f2, "evp_pkey_ctx_set1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar1 = 0;
      }
 else {
         OSSL_PARAM_construct_octet_string(&local_a8, &_LC11, param_2, (long)param_3);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_001037ca:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int EVP_PKEY_CTX_set1_scrypt_salt(EVP_PKEY_CTX *param_1, void *param_2, int param_3) {
   int iVar1;
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
   if (( *(uint*)param_1 & 0x800 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 999, "evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6, 0x93, 0);
      iVar1 = -2;
   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, 0x800, 0x1009, param_3, param_2);
            return iVar1;
         }

         goto LAB_0010394a;
      }

      if (param_3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_lib.c", 0x3f2, "evp_pkey_ctx_set1_octet_string");
         ERR_set_error(6, 0xdd, 0);
         iVar1 = 0;
      }
 else {
         OSSL_PARAM_construct_octet_string(&local_a8, &_LC7, param_2, (long)param_3);
         local_58 = local_88;
         local_78 = local_a8;
         uStack_70 = uStack_a0;
         local_68 = local_98;
         uStack_60 = uStack_90;
         OSSL_PARAM_construct_end(&local_a8);
         local_50 = local_a8;
         uStack_48 = uStack_a0;
         local_30 = local_88;
         local_40 = local_98;
         uStack_38 = uStack_90;
         iVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   LAB_0010394a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void EVP_PKEY_CTX_ctrl_uint64(EVP_PKEY_CTX *param_1, int param_2, int param_3, int param_4, undefined8 param_5) {
   undefined8 local_10[2];
   local_10[0] = param_5;
   EVP_PKEY_CTX_ctrl(param_1, param_2, param_3, param_4, 0, local_10);
   return;
}
undefined8 EVP_PKEY_CTX_set_scrypt_N(uint *param_1, undefined8 param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_80;
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
   local_80 = param_2;
   if (( param_1 == (uint*)0x0 ) || ( ( *param_1 & 0x800 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x4b8, "evp_pkey_ctx_set_uint64");
      ERR_set_error(6, 0x93, 0);
      uVar1 = 0xfffffffe;
   }
 else if (*(long*)( param_1 + 0xc ) == 0) {
      uVar1 = EVP_PKEY_CTX_ctrl_uint64(param_1, 0xffffffff, 0x800, 0x100a, param_2);
   }
 else {
      OSSL_PARAM_construct_uint64(&local_b8, &_LC12, &local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_PKEY_CTX_set_scrypt_r(uint *param_1, undefined8 param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_80;
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
   local_80 = param_2;
   if (( param_1 == (uint*)0x0 ) || ( ( *param_1 & 0x800 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x4b8, "evp_pkey_ctx_set_uint64");
      ERR_set_error(6, 0x93, 0);
      uVar1 = 0xfffffffe;
   }
 else if (*(long*)( param_1 + 0xc ) == 0) {
      uVar1 = EVP_PKEY_CTX_ctrl_uint64(param_1, 0xffffffff, 0x800, 0x100b, param_2);
   }
 else {
      OSSL_PARAM_construct_uint64(&local_b8, &_LC13, &local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_PKEY_CTX_set_scrypt_p(uint *param_1, undefined8 param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_80;
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
   local_80 = param_2;
   if (( param_1 == (uint*)0x0 ) || ( ( *param_1 & 0x800 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x4b8, "evp_pkey_ctx_set_uint64");
      ERR_set_error(6, 0x93, 0);
      uVar1 = 0xfffffffe;
   }
 else if (*(long*)( param_1 + 0xc ) == 0) {
      uVar1 = EVP_PKEY_CTX_ctrl_uint64(param_1, 0xffffffff, 0x800, 0x100c, param_2);
   }
 else {
      OSSL_PARAM_construct_uint64(&local_b8, &_LC14, &local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_PKEY_CTX_set_scrypt_maxmem_bytes(uint *param_1, undefined8 param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_80;
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
   local_80 = param_2;
   if (( param_1 == (uint*)0x0 ) || ( ( *param_1 & 0x800 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x4b8, "evp_pkey_ctx_set_uint64");
      ERR_set_error(6, 0x93, 0);
      uVar1 = 0xfffffffe;
   }
 else if (*(long*)( param_1 + 0xc ) == 0) {
      uVar1 = EVP_PKEY_CTX_ctrl_uint64(param_1, 0xffffffff, 0x800, 0x100d, param_2);
   }
 else {
      OSSL_PARAM_construct_uint64(&local_b8, "maxmem_bytes", &local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_30 = local_98;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_PKEY_CTX_get0_libctx(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}
undefined8 EVP_PKEY_CTX_get0_propq(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}
undefined8 EVP_PKEY_CTX_get0_provider(uint *param_1) {
   uint uVar1;
   undefined8 uVar2;
   uVar1 = *param_1;
   if (( uVar1 & 0xc1f0 ) == 0) {
      if (( uVar1 & 0x800 ) == 0) {
         if (( uVar1 & 0x3000 ) == 0) {
            if (( uVar1 & 0x600 ) == 0) {
               if (( ( uVar1 & 6 ) != 0 ) && ( *(long*)( param_1 + 8 ) != 0 )) {
                  uVar2 = EVP_KEYMGMT_get0_provider();
                  return uVar2;
               }

            }
 else if (*(long*)( param_1 + 10 ) != 0) {
               uVar2 = EVP_ASYM_CIPHER_get0_provider();
               return uVar2;
            }

         }
 else if (*(long*)( param_1 + 10 ) != 0) {
            uVar2 = EVP_KEM_get0_provider();
            return uVar2;
         }

      }
 else if (*(long*)( param_1 + 10 ) != 0) {
         uVar2 = EVP_KEYEXCH_get0_provider();
         return uVar2;
      }

   }
 else if (*(long*)( param_1 + 10 ) != 0) {
      uVar2 = EVP_SIGNATURE_get0_provider();
      return uVar2;
   }

   return 0;
}
undefined8 EVP_PKEY_CTX_str2ctrl(long param_1, undefined4 param_2, char *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   size_t sVar1;
   undefined8 uVar2;
   sVar1 = strlen(param_3);
   if (sVar1 < 0x80000000) {
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x78 ) + 0xc0 );
      /* WARNING: Could not recover jumptable at 0x00103f5b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar2 = ( *UNRECOVERED_JUMPTABLE )(param_1, param_2, sVar1 & 0xffffffff, param_3, UNRECOVERED_JUMPTABLE);
      return uVar2;
   }

   return 0xffffffff;
}
undefined4 EVP_PKEY_CTX_hex2ctrl(long param_1, undefined4 param_2, undefined8 param_3) {
   undefined4 uVar1;
   void *ptr;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ptr = (void*)OPENSSL_hexstr2buf(param_3, &local_38);
   if (ptr == (void*)0x0) {
      uVar1 = 0;
   }
 else {
      uVar1 = 0xffffffff;
      if (local_38 < 0x80000000) {
         uVar1 = ( **(code**)( *(long*)( param_1 + 0x78 ) + 0xc0 ) )(param_1, param_2, local_38, ptr);
      }

      CRYPTO_free(ptr);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int EVP_PKEY_CTX_md(EVP_PKEY_CTX *param_1, int param_2, int param_3, char *param_4) {
   int iVar1;
   EVP_MD *p2;
   if (param_4 != (char*)0x0) {
      p2 = EVP_get_digestbyname(param_4);
      if (p2 != (EVP_MD*)0x0) {
         iVar1 = EVP_PKEY_CTX_ctrl(param_1, -1, param_2, param_3, 0, p2);
         return iVar1;
      }

   }

   ERR_new();
   ERR_set_debug("crypto/evp/pmeth_lib.c", 0x656, "EVP_PKEY_CTX_md");
   ERR_set_error(6, 0x98, 0);
   return 0;
}
int EVP_PKEY_CTX_ctrl_str(EVP_PKEY_CTX *ctx, char *type, char *value) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   size_t sVar2;
   char *pcVar3;
   long lVar4;
   undefined8 uVar5;
   ERR_set_mark();
   sVar2 = strlen(value);
   if (type == (char*)0x0) {
      LAB_00104240:ERR_new();
      ERR_set_debug("crypto/evp/pmeth_lib.c", 0x5b7, "evp_pkey_ctx_store_cached_data");
      ERR_set_error(6, 0x93, 0);
      ERR_pop_to_mark();
      if (ctx == (EVP_PKEY_CTX*)0x0) {
         ERR_new();
         uVar5 = 0x567;
         goto LAB_00104292;
      }

   }
 else {
      iVar1 = strcmp(type, "distid");
      if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) goto LAB_00104240;
      CRYPTO_free(*(void**)( ctx + 0x40 ));
      CRYPTO_free(*(void**)( ctx + 0x38 ));
      *(undefined1(*) [16])( ctx + 0x38 ) = (undefined1[16])0x0;
      pcVar3 = CRYPTO_strdup(type, "crypto/evp/pmeth_lib.c", 0x5de);
      *(char**)( ctx + 0x38 ) = pcVar3;
      if (pcVar3 == (char*)0x0) {
         LAB_0010422d:ERR_clear_last_mark();
         return 0;
      }

      lVar4 = CRYPTO_memdup(value, sVar2 + 1, "crypto/evp/pmeth_lib.c", 0x5e3);
      *(long*)( ctx + 0x40 ) = lVar4;
      if (lVar4 == 0) goto LAB_0010422d;
      ctx[0x50] = ( EVP_PKEY_CTX )((byte)ctx[0x50] | 1);
      *(size_t*)( ctx + 0x48 ) = sVar2 + 1;
      ERR_clear_last_mark();
      if (*(int*)ctx == 0) {
         return 1;
      }

   }

   iVar1 = evp_pkey_ctx_state(ctx);
   if (1 < iVar1) {
      if (iVar1 != 2) {
         return 0;
      }

      iVar1 = evp_pkey_ctx_ctrl_str_to_param(ctx, type, value);
      return iVar1;
   }

   if (iVar1 < 0) {
      return 0;
   }

   if (( *(long*)( ctx + 0x78 ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( ctx + 0x78 ) + 200 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      iVar1 = strcmp(type, "digest");
      if (iVar1 == 0) {
         iVar1 = EVP_PKEY_CTX_md(ctx, 0xc7f0, 1, value);
         return iVar1;
      }

      /* WARNING: Could not recover jumptable at 0x001041f8. Too many branches */
      /* WARNING: Treating indirect jump as call */
      iVar1 = ( *UNRECOVERED_JUMPTABLE )(ctx, type, value);
      return iVar1;
   }

   ERR_new();
   uVar5 = 0x571;
   LAB_00104292:ERR_set_debug("crypto/evp/pmeth_lib.c", uVar5, "evp_pkey_ctx_ctrl_str_int");
   ERR_set_error(6, 0x93, 0);
   return -2;
}
undefined8 evp_pkey_ctx_use_cached_data(undefined4 *param_1) {
   char *__s1;
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   undefined8 uVar2;
   if (( *(byte*)( param_1 + 0x14 ) & 1 ) == 0) {
      return 1;
   }

   __s1 = *(char**)( param_1 + 0xe );
   uVar2 = *(undefined8*)( param_1 + 0x10 );
   if (__s1 != (char*)0x0) {
      iVar1 = evp_pkey_ctx_state();
      if (iVar1 < 2) {
         if (-1 < iVar1) {
            if (( *(long*)( param_1 + 0x1e ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x1e ) + 200 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
               iVar1 = strcmp(__s1, "digest");
               if (iVar1 == 0) {
                  uVar2 = EVP_PKEY_CTX_md(param_1, 0xc7f0, 1, uVar2);
                  return uVar2;
               }

               /* WARNING: Could not recover jumptable at 0x0010438a. Too many branches */
               /* WARNING: Treating indirect jump as call */
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(param_1, __s1, uVar2);
               return uVar2;
            }

            ERR_new();
            ERR_set_debug("crypto/evp/pmeth_lib.c", 0x571, "evp_pkey_ctx_ctrl_str_int");
            ERR_set_error(6, 0x93, 0);
            return 0xfffffffe;
         }

      }
 else if (iVar1 == 2) {
         uVar2 = evp_pkey_ctx_ctrl_str_to_param(param_1, __s1, uVar2);
         return uVar2;
      }

      return 0;
   }

   uVar2 = evp_pkey_ctx_ctrl_int(param_1, 0xffffffff, *param_1, 0xf, *(undefined8*)( param_1 + 0x12 ), uVar2);
   return uVar2;
}
int EVP_PKEY_CTX_get_operation(EVP_PKEY_CTX *ctx) {
   return *(int*)ctx;
}
void EVP_PKEY_CTX_set0_keygen_info(EVP_PKEY_CTX *ctx, int *dat, int datlen) {
   *(int**)( ctx + 0x68 ) = dat;
   *(int*)( ctx + 0x70 ) = datlen;
   return;
}
void EVP_PKEY_CTX_set_data(EVP_PKEY_CTX *ctx, void *data) {
   *(void**)( ctx + 0x98 ) = data;
   return;
}
void *EVP_PKEY_CTX_get_data(EVP_PKEY_CTX *ctx) {
   return *(void**)( ctx + 0x98 );
}
EVP_PKEY *EVP_PKEY_CTX_get0_pkey(EVP_PKEY_CTX *ctx) {
   return *(EVP_PKEY**)( ctx + 0x88 );
}
EVP_PKEY *EVP_PKEY_CTX_get0_peerkey(EVP_PKEY_CTX *ctx) {
   return *(EVP_PKEY**)( ctx + 0x90 );
}
void EVP_PKEY_CTX_set_app_data(EVP_PKEY_CTX *ctx, void *data) {
   *(void**)( ctx + 0x58 ) = data;
   return;
}
void *EVP_PKEY_CTX_get_app_data(EVP_PKEY_CTX *ctx) {
   return *(void**)( ctx + 0x58 );
}
void EVP_PKEY_meth_set_init(EVP_PKEY_METHOD *pmeth, init *init) {
   *(init**)( pmeth + 8 ) = init;
   return;
}
void EVP_PKEY_meth_set_copy(EVP_PKEY_METHOD *pmeth, copy *copy) {
   *(copy**)( pmeth + 0x10 ) = copy;
   return;
}
void EVP_PKEY_meth_set_cleanup(EVP_PKEY_METHOD *pmeth, cleanup *cleanup) {
   *(cleanup**)( pmeth + 0x18 ) = cleanup;
   return;
}
void EVP_PKEY_meth_set_paramgen(EVP_PKEY_METHOD *pmeth, paramgen_init *paramgen_init, paramgen *paramgen) {
   *(paramgen_init**)( pmeth + 0x20 ) = paramgen_init;
   *(paramgen**)( pmeth + 0x28 ) = paramgen;
   return;
}
void EVP_PKEY_meth_set_keygen(EVP_PKEY_METHOD *pmeth, keygen_init *keygen_init, keygen *keygen) {
   *(keygen_init**)( pmeth + 0x30 ) = keygen_init;
   *(keygen**)( pmeth + 0x38 ) = keygen;
   return;
}
void EVP_PKEY_meth_set_sign(EVP_PKEY_METHOD *pmeth, sign_init *sign_init, sign *sign) {
   *(sign_init**)( pmeth + 0x40 ) = sign_init;
   *(sign**)( pmeth + 0x48 ) = sign;
   return;
}
void EVP_PKEY_meth_set_verify(EVP_PKEY_METHOD *pmeth, verify_init *verify_init, verify *verify) {
   *(verify_init**)( pmeth + 0x50 ) = verify_init;
   *(verify**)( pmeth + 0x58 ) = verify;
   return;
}
void EVP_PKEY_meth_set_verify_recover(EVP_PKEY_METHOD *pmeth, verify_recover_init *verify_recover_init, verify_recover *verify_recover) {
   *(verify_recover_init**)( pmeth + 0x60 ) = verify_recover_init;
   *(verify_recover**)( pmeth + 0x68 ) = verify_recover;
   return;
}
void EVP_PKEY_meth_set_signctx(EVP_PKEY_METHOD *pmeth, signctx_init *signctx_init, signctx *signctx) {
   *(signctx_init**)( pmeth + 0x70 ) = signctx_init;
   *(signctx**)( pmeth + 0x78 ) = signctx;
   return;
}
void EVP_PKEY_meth_set_verifyctx(EVP_PKEY_METHOD *pmeth, verifyctx_init *verifyctx_init, verifyctx *verifyctx) {
   *(verifyctx_init**)( pmeth + 0x80 ) = verifyctx_init;
   *(verifyctx**)( pmeth + 0x88 ) = verifyctx;
   return;
}
void EVP_PKEY_meth_set_encrypt(EVP_PKEY_METHOD *pmeth, encrypt_init *encrypt_init, encryptfn *encryptfn) {
   *(encrypt_init**)( pmeth + 0x90 ) = encrypt_init;
   *(encryptfn**)( pmeth + 0x98 ) = encryptfn;
   return;
}
void EVP_PKEY_meth_set_decrypt(EVP_PKEY_METHOD *pmeth, decrypt_init *decrypt_init, decrypt *decrypt) {
   *(decrypt_init**)( pmeth + 0xa0 ) = decrypt_init;
   *(decrypt**)( pmeth + 0xa8 ) = decrypt;
   return;
}
void EVP_PKEY_meth_set_derive(EVP_PKEY_METHOD *pmeth, derive_init *derive_init, derive *derive) {
   *(derive_init**)( pmeth + 0xb0 ) = derive_init;
   *(derive**)( pmeth + 0xb8 ) = derive;
   return;
}
void EVP_PKEY_meth_set_ctrl(EVP_PKEY_METHOD *pmeth, ctrl *ctrl, ctrl_str *ctrl_str) {
   *(ctrl**)( pmeth + 0xc0 ) = ctrl;
   *(ctrl_str**)( pmeth + 200 ) = ctrl_str;
   return;
}
void EVP_PKEY_meth_set_digestsign(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xd0 ) = param_2;
   return;
}
void EVP_PKEY_meth_set_digestverify(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xd8 ) = param_2;
   return;
}
void EVP_PKEY_meth_set_check(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xe0 ) = param_2;
   return;
}
void EVP_PKEY_meth_set_public_check(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xe8 ) = param_2;
   return;
}
void EVP_PKEY_meth_set_param_check(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xf0 ) = param_2;
   return;
}
void EVP_PKEY_meth_set_digest_custom(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xf8 ) = param_2;
   return;
}
void EVP_PKEY_meth_get_init(long param_1, undefined8 *param_2) {
   *param_2 = *(undefined8*)( param_1 + 8 );
   return;
}
void EVP_PKEY_meth_get_copy(long param_1, undefined8 *param_2) {
   *param_2 = *(undefined8*)( param_1 + 0x10 );
   return;
}
void EVP_PKEY_meth_get_cleanup(long param_1, undefined8 *param_2) {
   *param_2 = *(undefined8*)( param_1 + 0x18 );
   return;
}
void EVP_PKEY_meth_get_paramgen(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x20 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x28 );
   }

   return;
}
void EVP_PKEY_meth_get_keygen(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x30 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x38 );
   }

   return;
}
void EVP_PKEY_meth_get_sign(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x40 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x48 );
   }

   return;
}
void EVP_PKEY_meth_get_verify(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x50 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x58 );
   }

   return;
}
void EVP_PKEY_meth_get_verify_recover(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x60 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x68 );
   }

   return;
}
void EVP_PKEY_meth_get_signctx(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x70 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x78 );
   }

   return;
}
void EVP_PKEY_meth_get_verifyctx(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x80 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x88 );
   }

   return;
}
void EVP_PKEY_meth_get_encrypt(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x90 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x98 );
   }

   return;
}
void EVP_PKEY_meth_get_decrypt(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xa0 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0xa8 );
   }

   return;
}
void EVP_PKEY_meth_get_derive(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xb0 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0xb8 );
   }

   return;
}
void EVP_PKEY_meth_get_ctrl(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xc0 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 200 );
   }

   return;
}
void EVP_PKEY_meth_get_digestsign(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xd0 );
   }

   return;
}
void EVP_PKEY_meth_get_digestverify(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xd8 );
   }

   return;
}
void EVP_PKEY_meth_get_check(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xe0 );
   }

   return;
}
void EVP_PKEY_meth_get_public_check(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xe8 );
   }

   return;
}
void EVP_PKEY_meth_get_param_check(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xf0 );
   }

   return;
}
void EVP_PKEY_meth_get_digest_custom(long param_1, undefined8 *param_2) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0xf8 );
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data */void ossl_rsa_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_dh_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_dsa_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_ec_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_rsa_pss_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_dhx_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_ecx25519_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_ecx448_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_ed25519_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_ed448_pkey_method(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


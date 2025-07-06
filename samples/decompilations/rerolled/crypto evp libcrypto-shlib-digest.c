void set_legacy_nid(char *param_1, int *param_2) {
   int iVar1;
   char *pcVar2;
   pcVar2 = OBJ_NAME_get(param_1, 1);
   if (( *param_2 != -1 ) && ( pcVar2 != (char*)0x0 )) {
      iVar1 = EVP_MD_get_type(pcVar2);
      if (( *param_2 != iVar1 ) && ( *param_2 != 0 )) {
         *param_2 = -1;
         return;
      }
      *param_2 = iVar1;
   }
   return;
}void cleanup_old_md_data(EVP_MD_CTX *param_1, int param_2) {
   int iVar1;
   if (param_1->engine != (ENGINE*)0x0) {
      if (*(long*)( param_1->engine + 0x40 ) != 0) {
         iVar1 = EVP_MD_CTX_test_flags(param_1, 2);
         if (iVar1 == 0) {
            ( **(code**)( param_1->engine + 0x40 ) )(param_1);
         }
      }
      if (( param_1->pctx != (EVP_PKEY_CTX*)0x0 ) && ( 0 < *(int*)( param_1->engine + 0x4c ) )) {
         iVar1 = EVP_MD_CTX_test_flags(param_1, 4);
         if (( param_2 != 0 ) || ( iVar1 == 0 )) {
            CRYPTO_clear_free(param_1->pctx, (long)*(int*)( param_1->engine + 0x4c ), "crypto/evp/digest.c", 0x26);
            param_1->pctx = (EVP_PKEY_CTX*)0x0;
         }
      }
      return;
   }
   return;
}void EVP_MD_CTX_new(void) {
   CRYPTO_zalloc(0x48, "crypto/evp/digest.c", 0x83);
   return;
}undefined8 evp_md_ctx_free_algctx(long param_1) {
   code *pcVar1;
   if (*(long*)( param_1 + 0x38 ) != 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/digest.c", 0x93, "evp_md_ctx_free_algctx");
         ERR_set_error(6, 0x86, 0);
         return 0;
      }
      pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0xb0 );
      if (pcVar1 != (code*)0x0) {
         ( *pcVar1 )();
      }
      *(undefined8*)( param_1 + 0x38 ) = 0;
   }
   return 1;
}int EVP_DigestUpdate(EVP_MD_CTX *ctx, void *d, size_t cnt) {
   uint uVar1;
   _func_1088 *p_Var2;
   ENGINE *pEVar3;
   int iVar4;
   undefined8 uVar5;
   if (cnt == 0) {
      return 1;
   }
   if (( (ulong)ctx->md_data & 0x800 ) == 0) {
      p_Var2 = ctx->update;
      if (( ( p_Var2 == (_func_1088*)0x0 ) || ( uVar1 = *(uint*)p_Var2(uVar1 & 0xc1f0) == 0 ) ) || ( *(long*)( p_Var2 + 0x30 ) == 0 )) {
         pEVar3 = ctx->engine;
         if (( ( pEVar3 == (ENGINE*)0x0 ) || ( *(long*)( pEVar3 + 0x70 ) == 0 ) ) || ( ( (ulong)ctx->md_data & 0x100 ) != 0 )) {
            if (ctx[1].digest == (EVP_MD*)0x0) {
               return 0;
            }
            for (int i_1762 = 0; i_1762 < 2; i_1762++) {
               /* WARNING: Could not recover jumptable at 0x0010024d. Too many branches */
            }
            iVar4 = ( *(code*)ctx[1].digest )();
            return iVar4;
         }
         if (*(code**)( pEVar3 + 0x90 ) != (code*)0x0) {
            for (int i_1763 = 0; i_1763 < 2; i_1763++) {
               /* WARNING: Could not recover jumptable at 0x00100239. Too many branches */
            }
            iVar4 = ( **(code**)( pEVar3 + 0x90 ) )(ctx[1].engine);
            return iVar4;
         }
         ERR_new();
         uVar5 = 0x1a6;
      } else {
         if (uVar1 == 0x80) {
            iVar4 = EVP_DigestSignUpdate();
            return iVar4;
         }
         if (uVar1 == 0x100) {
            iVar4 = EVP_DigestVerifyUpdate();
            return iVar4;
         }
         ERR_new();
         uVar5 = 0x19c;
      }
   } else {
      ERR_new();
      uVar5 = 0x187;
   }
   ERR_set_debug("crypto/evp/digest.c", uVar5, "EVP_DigestUpdate");
   ERR_set_error(6, 0xbd, 0);
   return 0;
}int EVP_DigestFinal_ex(EVP_MD_CTX *ctx, uchar *md, uint *s) {
   long lVar1;
   uint uVar2;
   int iVar3;
   ENGINE *pEVar4;
   undefined8 uVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (ctx->engine != (ENGINE*)0x0) {
      uVar2 = EVP_MD_CTX_get_size_ex();
      if (-1 < (int)uVar2) {
         pEVar4 = ctx->engine;
         if (*(long*)( pEVar4 + 0x70 ) == 0) {
            if (0x40 < uVar2) {
               pcVar6 = "assertion failed: mdsize <= EVP_MAX_MD_SIZE";
               OPENSSL_die("assertion failed: mdsize <= EVP_MAX_MD_SIZE", "crypto/evp/digest.c", 0x1e5);
               lVar1 = *(long*)( pcVar6 + 8 );
               if (lVar1 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/evp/digest.c", 0x22e, "EVP_DigestSqueeze");
                  ERR_set_error(6, 0xda, 0);
                  iVar3 = 0;
               } else if (*(long*)( lVar1 + 0x70 ) == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/evp/digest.c", 0x233, "EVP_DigestSqueeze");
                  ERR_set_error(6, 0x94, 0);
                  iVar3 = 0;
               } else if (*(code**)( lVar1 + 0xa0 ) == (code*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/evp/digest.c", 0x238, "EVP_DigestSqueeze");
                  ERR_set_error(6, 0x90, 0);
                  iVar3 = 0;
               } else {
                  iVar3 = ( **(code**)( lVar1 + 0xa0 ) )(*(undefined8*)( pcVar6 + 0x38 ));
               }
               return iVar3;
            }
            iVar3 = ( **(code**)( pEVar4 + 0x30 ) )(ctx, md);
            if (s != (uint*)0x0) {
               *s = uVar2;
            }
            pEVar4 = ctx->engine;
            if (*(code**)( pEVar4 + 0x40 ) != (code*)0x0) {
               ( **(code**)( pEVar4 + 0x40 ) )(ctx);
               EVP_MD_CTX_set_flags(ctx, 2);
               pEVar4 = ctx->engine;
            }
            OPENSSL_cleanse(ctx->pctx, (long)*(int*)( pEVar4 + 0x4c ));
            goto LAB_0010035e;
         }
         if (*(code**)( pEVar4 + 0x98 ) == (code*)0x0) {
            ERR_new();
            uVar5 = 0x1cb;
         } else if (( (ulong)ctx->md_data & 0x800 ) == 0) {
            iVar3 = ( **(code**)( pEVar4 + 0x98 ) )(ctx[1].engine, md, &local_38);
            ctx->md_data = (void*)( (ulong)ctx->md_data | 0x800 );
            if (s == (uint*)0x0) goto LAB_0010035e;
            if (local_38 >> 0x20 == 0) {
               *s = (uint)local_38;
               goto LAB_0010035e;
            }
            ERR_new();
            uVar5 = 0x1dc;
         } else {
            ERR_new();
            uVar5 = 0x1d0;
         }
         ERR_set_debug("crypto/evp/digest.c", uVar5, "EVP_DigestFinal_ex");
         ERR_set_error(6, 0xbc, 0);
      }
   }
   iVar3 = 0;
   LAB_0010035e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_DigestSqueeze(long param_1, undefined8 param_2, undefined8 param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 local_10[2];
   lVar1 = *(long*)( param_1 + 8 );
   local_10[0] = param_3;
   if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/digest.c", 0x22e, "EVP_DigestSqueeze");
      ERR_set_error(6, 0xda, 0);
      uVar2 = 0;
   } else if (*(long*)( lVar1 + 0x70 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/digest.c", 0x233, "EVP_DigestSqueeze");
      ERR_set_error(6, 0x94, 0);
      uVar2 = 0;
   } else if (*(code**)( lVar1 + 0xa0 ) == (code*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/digest.c", 0x238, "EVP_DigestSqueeze");
      ERR_set_error(6, 0x90, 0);
      uVar2 = 0;
   } else {
      uVar2 = ( **(code**)( lVar1 + 0xa0 ) )(*(undefined8*)( param_1 + 0x38 ), param_2, local_10, param_3);
   }
   return uVar2;
}undefined8 EVP_MD_get_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(code**)( param_1 + 200 ) != (code*)0x0 )) {
      for (int i_1764 = 0; i_1764 < 2; i_1764++) {
         /* WARNING: Could not recover jumptable at 0x00100568. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 200 ) )(param_2);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MD_gettable_params(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0xe0 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      uVar1 = EVP_MD_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_1765 = 0; i_1765 < 2; i_1765++) {
         /* WARNING: Could not recover jumptable at 0x001005aa. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MD_CTX_set_params(long param_1) {
   int *piVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar2;
   piVar1 = *(int**)( param_1 + 0x28 );
   if (piVar1 != (int*)0x0) {
      if (( ( ( *piVar1 - 0x80U & 0xffffff7f ) == 0 ) && ( *(long*)( piVar1 + 0xc ) != 0 ) ) && ( *(code**)( *(long*)( piVar1 + 10 ) + 0x110 ) != (code*)0x0 )) {
         for (int i_1766 = 0; i_1766 < 2; i_1766++) {
            /* WARNING: Could not recover jumptable at 0x001005f6. Too many branches */
         }
         uVar2 = ( **(code**)( *(long*)( piVar1 + 10 ) + 0x110 ) )(*(long*)( piVar1 + 0xc ));
         return uVar2;
      }
   }
   if (( *(long*)( param_1 + 8 ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 8 ) + 0xd0 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_1767 = 0; i_1767 < 2; i_1767++) {
         /* WARNING: Could not recover jumptable at 0x00100619. Too many branches */
      }
      uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( param_1 + 0x38 ));
      return uVar2;
   }
   return 0;
}undefined4 EVP_DigestFinalXOF(EVP_MD_CTX *param_1, undefined8 param_2, ulong param_3) {
   int iVar1;
   undefined4 uVar2;
   ENGINE *pEVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   ulong local_90;
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
   pEVar3 = param_1->engine;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = param_3;
   if (pEVar3 == (ENGINE*)0x0) {
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("crypto/evp/digest.c", 0x1f9, "EVP_DigestFinalXOF");
      ERR_set_error(6, 0xda, 0);
   } else if (*(long*)( pEVar3 + 0x70 ) == 0) {
      iVar1 = EVP_MD_xof();
      if (( iVar1 != 0 ) && ( local_90 < 0x80000000 )) {
         iVar1 = ( **(code**)( param_1->engine + 0x50 ) )(param_1, 3, local_90, 0);
         if (iVar1 != 0) {
            uVar2 = ( **(code**)( param_1->engine + 0x30 ) )(param_1, param_2);
            pEVar3 = param_1->engine;
            if (*(code**)( pEVar3 + 0x40 ) != (code*)0x0) {
               ( **(code**)( pEVar3 + 0x40 ) )(param_1);
               EVP_MD_CTX_set_flags(param_1, 2);
               pEVar3 = param_1->engine;
            }
            OPENSSL_cleanse(param_1->pctx, (long)*(int*)( pEVar3 + 0x4c ));
            goto LAB_00100728;
         }
      }
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("crypto/evp/digest.c", 0x224, "EVP_DigestFinalXOF");
      ERR_set_error(6, 0xb2, 0);
   } else {
      if (*(long*)( pEVar3 + 0x98 ) == 0) {
         ERR_new();
         uVar4 = 0x201;
      } else {
         if (( (ulong)param_1->md_data & 0x800 ) == 0) {
            OSSL_PARAM_construct_size_t(&local_c8, "xoflen", &local_90);
            uVar2 = 0;
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
            iVar1 = EVP_MD_CTX_set_params(param_1, &local_88);
            if (-1 < iVar1) {
               uVar2 = ( **(code**)( param_1->engine + 0x98 ) )(param_1[1].engine, param_2, &local_90, local_90);
            }
            param_1->md_data = (void*)( (ulong)param_1->md_data | 0x800 );
            goto LAB_00100728;
         }
         ERR_new();
         uVar4 = 0x206;
      }
      uVar2 = 0;
      ERR_set_debug("crypto/evp/digest.c", uVar4, "EVP_DigestFinalXOF");
      ERR_set_error(6, 0xbc, 0);
   }
   LAB_00100728:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_MD_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0xe8 ) != 0) {
      uVar1 = EVP_MD_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_1768 = 0; i_1768 < 2; i_1768++) {
         /* WARNING: Could not recover jumptable at 0x001008c1. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xe8 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MD_CTX_settable_params(long param_1) {
   int *piVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }
   piVar1 = *(int**)( param_1 + 0x28 );
   if (piVar1 != (int*)0x0) {
      if (( ( ( *piVar1 - 0x80U & 0xffffff7f ) == 0 ) && ( *(long*)( piVar1 + 0xc ) != 0 ) ) && ( *(code**)( *(long*)( piVar1 + 10 ) + 0x118 ) != (code*)0x0 )) {
         for (int i_1769 = 0; i_1769 < 2; i_1769++) {
            /* WARNING: Could not recover jumptable at 0x0010091d. Too many branches */
         }
         uVar2 = ( **(code**)( *(long*)( piVar1 + 10 ) + 0x118 ) )();
         return uVar2;
      }
   }
   if (( *(long*)( param_1 + 8 ) != 0 ) && ( *(long*)( *(long*)( param_1 + 8 ) + 0xe8 ) != 0 )) {
      uVar2 = EVP_MD_get0_provider();
      uVar2 = ossl_provider_ctx(uVar2);
      for (int i_1770 = 0; i_1770 < 2; i_1770++) {
         /* WARNING: Could not recover jumptable at 0x00100953. Too many branches */
      }
      uVar2 = ( **(code**)( *(long*)( param_1 + 8 ) + 0xe8 ) )(*(undefined8*)( param_1 + 0x38 ), uVar2);
      return uVar2;
   }
   return 0;
}undefined8 EVP_MD_CTX_get_params(long param_1) {
   int *piVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar2;
   piVar1 = *(int**)( param_1 + 0x28 );
   if (piVar1 != (int*)0x0) {
      if (( ( ( *piVar1 - 0x80U & 0xffffff7f ) == 0 ) && ( *(long*)( piVar1 + 0xc ) != 0 ) ) && ( *(code**)( *(long*)( piVar1 + 10 ) + 0x100 ) != (code*)0x0 )) {
         for (int i_1771 = 0; i_1771 < 2; i_1771++) {
            /* WARNING: Could not recover jumptable at 0x001009a6. Too many branches */
         }
         uVar2 = ( **(code**)( *(long*)( piVar1 + 10 ) + 0x100 ) )(*(long*)( piVar1 + 0xc ));
         return uVar2;
      }
   }
   if (( *(long*)( param_1 + 8 ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 8 ) + 0xd8 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_1772 = 0; i_1772 < 2; i_1772++) {
         /* WARNING: Could not recover jumptable at 0x001009c9. Too many branches */
      }
      uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( param_1 + 0x38 ));
      return uVar2;
   }
   return 0;
}undefined8 EVP_MD_gettable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0xf0 ) != 0) {
      uVar1 = EVP_MD_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_1773 = 0; i_1773 < 2; i_1773++) {
         /* WARNING: Could not recover jumptable at 0x00100a11. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xf0 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MD_CTX_gettable_params(long param_1) {
   int *piVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }
   piVar1 = *(int**)( param_1 + 0x28 );
   if (piVar1 != (int*)0x0) {
      if (( ( ( *piVar1 - 0x80U & 0xffffff7f ) == 0 ) && ( *(long*)( piVar1 + 0xc ) != 0 ) ) && ( *(code**)( *(long*)( piVar1 + 10 ) + 0x108 ) != (code*)0x0 )) {
         for (int i_1774 = 0; i_1774 < 2; i_1774++) {
            /* WARNING: Could not recover jumptable at 0x00100a6d. Too many branches */
         }
         uVar2 = ( **(code**)( *(long*)( piVar1 + 10 ) + 0x108 ) )();
         return uVar2;
      }
   }
   if (( *(long*)( param_1 + 8 ) != 0 ) && ( *(long*)( *(long*)( param_1 + 8 ) + 0xf0 ) != 0 )) {
      uVar2 = EVP_MD_get0_provider();
      uVar2 = ossl_provider_ctx(uVar2);
      for (int i_1775 = 0; i_1775 < 2; i_1775++) {
         /* WARNING: Could not recover jumptable at 0x00100aa3. Too many branches */
      }
      uVar2 = ( **(code**)( *(long*)( param_1 + 8 ) + 0xf0 ) )(*(undefined8*)( param_1 + 0x38 ), uVar2);
      return uVar2;
   }
   return 0;
}int EVP_MD_CTX_ctrl(long param_1, int param_2, int param_3, undefined8 param_4) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   long local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/digest.c", 0x37f, "EVP_MD_CTX_ctrl");
      ERR_set_error(6, 0xc0102, 0);
      LAB_00100c80:iVar2 = 0;
      goto LAB_00100b8f;
   }
   lVar1 = *(long*)( param_1 + 8 );
   if (( lVar1 == 0 ) || ( *(long*)( lVar1 + 0x70 ) != 0 )) {
      if (param_2 == 3) {
         local_70 = (long)param_3;
         OSSL_PARAM_construct_size_t(&local_a8, "xoflen", &local_70);
         local_68._8_8_ = uStack_a0;
         local_68._0_8_ = local_a8;
         local_48._0_8_ = local_88;
         local_58._8_8_ = uStack_90;
         local_58._0_8_ = local_98;
      } else {
         if (param_2 != 0x1d) {
            if (param_2 != 2) goto LAB_00100c80;
            if (param_3 == 0) {
               param_3 = 9999;
            }
            OSSL_PARAM_construct_utf8_string(&local_a8, "micalg", param_4, (long)param_3);
            local_68._8_8_ = uStack_a0;
            local_68._0_8_ = local_a8;
            local_48._0_8_ = local_88;
            local_58._8_8_ = uStack_90;
            local_58._0_8_ = local_98;
            iVar2 = EVP_MD_CTX_get_params(param_1, local_68);
            goto LAB_00100b88;
         }
         OSSL_PARAM_construct_octet_string(&local_a8, "ssl3-ms", param_4, (long)param_3);
         local_48._0_8_ = local_88;
         local_68._8_8_ = uStack_a0;
         local_68._0_8_ = local_a8;
         local_58._8_8_ = uStack_90;
         local_58._0_8_ = local_98;
      }
      iVar2 = EVP_MD_CTX_set_params(param_1, local_68);
   } else {
      if (*(code**)( lVar1 + 0x50 ) == (code*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/evp/digest.c", 0x3a2, "EVP_MD_CTX_ctrl");
         ERR_set_error(6, 0x84, 0);
         iVar2 = 0;
         goto LAB_00100b8f;
      }
      iVar2 = ( **(code**)( lVar1 + 0x50 ) )();
   }
   LAB_00100b88:if (iVar2 < 0) {
      iVar2 = 0;
   }
   LAB_00100b8f:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void evp_md_new(void) {
   long lVar1;
   lVar1 = CRYPTO_zalloc(0xf8, "crypto/evp/digest.c", 0x3af);
   if (lVar1 != 0) {
      LOCK();
      *(undefined4*)( lVar1 + 0x78 ) = 1;
      UNLOCK();
   }
   return;
}void EVP_MD_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 1, param_2, param_3, evp_md_from_algorithm, evp_md_up_ref, evp_md_free);
   return;
}undefined8 EVP_MD_up_ref(long param_1) {
   if (*(int*)( param_1 + 0x18 ) != 0) {
      return 1;
   }
   LOCK();
   *(int*)( param_1 + 0x78 ) = *(int*)( param_1 + 0x78 ) + 1;
   UNLOCK();
   return 1;
}void evp_md_up_ref(void) {
   EVP_MD_up_ref();
   return;
}void EVP_MD_free(long param_1) {
   int *piVar1;
   int iVar2;
   if (( param_1 != 0 ) && ( *(int*)( param_1 + 0x18 ) == 0 )) {
      LOCK();
      piVar1 = (int*)( param_1 + 0x78 );
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
         evp_md_free_int();
         return;
      }
      if (iVar2 + -1 < 1) {
         evp_md_free_int();
         return;
      }
   }
   return;
}int evp_md_init_internal(EVP_MD_CTX *param_1, EVP_MD *param_2, undefined8 param_3, ENGINE *param_4) {
   uint uVar1;
   _func_1088 *p_Var2;
   code *pcVar3;
   int iVar4;
   EVP_MD *pEVar5;
   ENGINE *pEVar6;
   size_t extraout_RDX;
   size_t extraout_RDX_00;
   size_t extraout_RDX_01;
   size_t extraout_RDX_02;
   size_t sVar7;
   size_t extraout_RDX_03;
   char *pcVar8;
   undefined8 uVar9;
   EVP_PKEY_CTX *ctx;
   undefined1 auVar10[16];
   p_Var2 = param_1->update;
   if (( ( p_Var2 != (_func_1088*)0x0 ) && ( uVar1 = *(uint*)p_Var2(uVar1 & 0xc1f0) != 0 ) ) && ( *(long*)( p_Var2 + 0x30 ) != 0 )) {
      if (uVar1 == 0x80) {
         iVar4 = EVP_DigestSignInit(param_1, (EVP_PKEY_CTX**)0x0, param_2, param_4, (EVP_PKEY*)0x0);
         return iVar4;
      }
      if (uVar1 != 0x100) {
         ERR_new();
         ERR_set_debug("crypto/evp/digest.c", 0xb2, "evp_md_init_internal");
         ERR_set_error(6, 0xbd, 0);
         return 0;
      }
      iVar4 = EVP_DigestVerifyInit(param_1, (EVP_PKEY_CTX**)0x0, param_2, param_4, (EVP_PKEY*)0x0);
      return iVar4;
   }
   pcVar8 = (char*)0x802;
   EVP_MD_CTX_clear_flags(param_1, 0x802);
   if (param_2 == (EVP_MD*)0x0) {
      pEVar5 = (EVP_MD*)param_1->engine;
      if (pEVar5 == (EVP_MD*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/evp/digest.c", 0xbe, "evp_md_init_internal");
         ERR_set_error(6, 0x8b, 0);
         return 0;
      }
      pEVar6 = (ENGINE*)param_1->flags;
      param_2 = pEVar5;
      if (pEVar6 != (ENGINE*)0x0) goto LAB_00100e6b;
      LAB_00100e76:ENGINE_finish(pEVar6);
      param_1->flags = 0;
      if (param_4 == (ENGINE*)0x0) {
         pEVar6 = ENGINE_get_digest_engine(param_2->type);
         if (pEVar6 == (ENGINE*)0x0 && param_1->flags == 0) {
            if (( ( (ulong)param_1->md_data & 0x100 ) != 0 ) || ( *(int*)&param_2->init == 2 )) goto LAB_00100e8c;
            cleanup_old_md_data(param_1, 1);
            if ((EVP_MD*)param_1->engine == param_2) {
               if (param_2->md_ctrl == (_func_1085*)0x0) {
                  ERR_new();
                  uVar9 = 0xfb;
                  goto LAB_00101189;
               }
               LAB_001011ef:if ((EVP_MD*)param_1[1].flags != param_2) {
                  iVar4 = EVP_MD_up_ref(param_2);
                  if (iVar4 == 0) {
                     ERR_new();
                     uVar9 = 0x11a;
                     goto LAB_00101189;
                  }
                  goto LAB_001010d7;
               }
            } else {
               iVar4 = evp_md_ctx_free_algctx(param_1);
               if (iVar4 == 0) {
                  return 0;
               }
               if (param_2->md_ctrl != (_func_1085*)0x0) goto LAB_001011ef;
               pcVar8 = "NULL";
               if (param_2->type != 0) {
                  pcVar8 = OBJ_nid2sn(param_2->type);
               }
               param_2 = (EVP_MD*)EVP_MD_fetch(0, pcVar8, &_LC6);
               if (param_2 == (EVP_MD*)0x0) {
                  ERR_new();
                  uVar9 = 0x10f;
                  goto LAB_00101189;
               }
               LAB_001010d7:EVP_MD_free(param_1[1].flags);
               param_1[1].flags = (ulong)param_2;
            }
            pEVar6 = param_1[1].engine;
            param_1->engine = (ENGINE*)param_2;
            if (pEVar6 == (ENGINE*)0x0) {
               pcVar3 = *(code**)&param_2[1].md_size;
               uVar9 = ossl_provider_ctx(param_2->md_ctrl);
               pEVar6 = (ENGINE*)( *pcVar3 )(uVar9);
               param_1[1].engine = pEVar6;
               if (pEVar6 == (ENGINE*)0x0) {
                  ERR_new(0);
                  uVar9 = 0x124;
                  goto LAB_00101189;
               }
               param_2 = (EVP_MD*)param_1->engine;
            }
            if ((code*)param_2[1].flags != (code*)0x0) {
               for (int i_1776 = 0; i_1776 < 2; i_1776++) {
                  /* WARNING: Could not recover jumptable at 0x00101110. Too many branches */
               }
               iVar4 = ( *(code*)param_2[1].flags )(pEVar6, param_3);
               return iVar4;
            }
            ERR_new(pEVar6);
            uVar9 = 0x12a;
            goto LAB_00101189;
         }
      } else {
         LAB_00100e8c:pEVar6 = (ENGINE*)0x0;
      }
      iVar4 = evp_md_ctx_free_algctx(param_1);
      if (iVar4 == 0) {
         return 0;
      }
      if (param_1->engine == (ENGINE*)param_1[1].flags) {
         param_1->engine = (ENGINE*)0x0;
      }
      EVP_MD_free();
      param_1[1].flags = 0;
      if (param_4 == (ENGINE*)0x0) {
         sVar7 = extraout_RDX_00;
         if (pEVar6 != (ENGINE*)0x0) goto LAB_00100ecf;
      } else {
         iVar4 = ENGINE_init(param_4);
         pEVar6 = param_4;
         if (iVar4 == 0) {
            ERR_new();
            uVar9 = 0x137;
            LAB_00101189:ERR_set_debug("crypto/evp/digest.c", uVar9, "evp_md_init_internal");
            ERR_set_error(6, 0x86, 0);
            return 0;
         }
         LAB_00100ecf:pcVar8 = (char*)(ulong)(uint)param_2->type;
         param_2 = ENGINE_get_digest(pEVar6, param_2->type);
         sVar7 = extraout_RDX_01;
         param_4 = pEVar6;
         if (param_2 == (EVP_MD*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/digest.c", 0x143, "evp_md_init_internal");
            ERR_set_error(6, 0x86, 0);
            ENGINE_finish(pEVar6);
            return 0;
         }
      }
      param_1->flags = (ulong)param_4;
      if ((EVP_MD*)param_1->engine == param_2) goto LAB_00100fb0;
      pcVar8 = (char*)0x1;
      cleanup_old_md_data(param_1);
      param_1->engine = (ENGINE*)param_2;
      sVar7 = extraout_RDX_02;
      if (( (ulong)param_1->md_data & 0x100 ) == 0) {
         iVar4 = *(int*)( (long)&param_2->verify + 4 );
         if (iVar4 != 0) {
            pcVar8 = "crypto/evp/digest.c";
            param_1[1].digest = (EVP_MD*)param_2->final;
            auVar10 = CRYPTO_zalloc((long)iVar4, "crypto/evp/digest.c", 0x158);
            sVar7 = auVar10._8_8_;
            param_1->pctx = auVar10._0_8_;
            if (auVar10._0_8_ == (EVP_PKEY_CTX*)0x0) {
               return 0;
            }
            goto LAB_00100fb0;
         }
         ctx = (EVP_PKEY_CTX*)param_1->update;
         if (ctx == (EVP_PKEY_CTX*)0x0) goto LAB_00100f45;
      } else {
         ctx = (EVP_PKEY_CTX*)param_1->update;
         if (ctx == (EVP_PKEY_CTX*)0x0) {
            return 1;
         }
      }
      uVar1 = *(uint*)ctx;
      joined_r0x00100f26:if (( ( uVar1 & 0xc1f0 ) == 0 ) || ( *(long*)( ctx + 0x28 ) == 0 )) {
         pcVar8 = (char*)0xffffffff;
         iVar4 = EVP_PKEY_CTX_ctrl(ctx, -1, 0xc1f0, 7, 0, param_1);
         sVar7 = extraout_RDX_03;
         if (( iVar4 < 1 ) && ( iVar4 != -2 )) {
            return 0;
         }
      }
   } else {
      pEVar6 = (ENGINE*)param_1->flags;
      param_1->digest = param_2;
      if (( pEVar6 == (ENGINE*)0x0 ) || ( pEVar5 = (EVP_MD*)param_1->engine ),pEVar5 == (EVP_MD*)0x0) goto LAB_00100e76;
      LAB_00100e6b:sVar7 = extraout_RDX;
      if (param_2->type != pEVar5->type) goto LAB_00100e76;
      LAB_00100fb0:ctx = (EVP_PKEY_CTX*)param_1->update;
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         uVar1 = *(uint*)ctx;
         goto joined_r0x00100f26;
      }
   }
   if (( (ulong)param_1->md_data & 0x100 ) != 0) {
      return 1;
   }
   param_2 = (EVP_MD*)param_1->engine;
   LAB_00100f45:/* WARNING: Could not recover jumptable at 0x00100f54. Too many branches *//* WARNING: Treating indirect jump as call */iVar4 = ( *param_2->update )(param_1, pcVar8, sVar7);
   return iVar4;
}void EVP_DigestInit_ex2(void) {
   evp_md_init_internal();
   return;
}int EVP_DigestInit_ex(EVP_MD_CTX *ctx, EVP_MD *type, ENGINE *impl) {
   int iVar1;
   iVar1 = evp_md_init_internal(ctx, type, 0, impl);
   return iVar1;
}void evp_md_free(void) {
   EVP_MD_free();
   return;
}/* WARNING: Removing unreachable block (ram,0x00101838) */int *evp_md_from_algorithm(int param_1, long param_2, long param_3) {
   int iVar1;
   int *piVar2;
   long lVar3;
   int iVar4;
   int *piVar5;
   long in_FS_OFFSET;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   int local_110;
   int local_10c;
   ulong local_108;
   ulong local_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 uStack_c8;
   undefined8 local_c0;
   undefined8 uStack_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   piVar5 = *(int**)( param_2 + 0x10 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar2 = (int*)evp_md_new();
   if (piVar2 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/digest.c", 0x401, "evp_md_from_algorithm");
      ERR_set_error(6, 0x80006, 0);
   } else {
      *piVar2 = 0;
      iVar1 = evp_names_do_all(param_3, param_1, 0x100000);
      if (( iVar1 == 0 ) || ( *piVar2 == -1 )) {
         ERR_new();
         ERR_set_debug("crypto/evp/digest.c", 0x409, "evp_md_from_algorithm");
         ERR_set_error(6, 0xc0103, 0);
      } else {
         piVar2[0x16] = param_1;
         lVar3 = ossl_algorithm_get1_first_name(param_2);
         *(long*)( piVar2 + 0x18 ) = lVar3;
         if (lVar3 != 0) {
            iVar4 = 0;
            *(undefined8*)( piVar2 + 0x1a ) = *(undefined8*)( param_2 + 0x18 );
            iVar1 = *piVar5;
            if (iVar1 == 0) {
               LAB_00101840:if (*(long*)( piVar2 + 0x2a ) == 0) {
                  LAB_00101850:ERR_new();
                  ERR_set_debug("crypto/evp/digest.c", 0x46c, "evp_md_from_algorithm");
                  ERR_set_error(6, 0xc1, 0);
                  goto LAB_001015c0;
               }
            } else {
               do {
                  switch (iVar1) {
                     for (int i_1778 = 0; i_1778 < 4; i_1778++) {
                        case 1:
              if (*(long *)(piVar2 + 0x20) == 0) {
                iVar4 = iVar4 + 1;
                *(undefined8 *)(piVar2 + 0x20) = *(undefined8 *)(piVar5 + 2);
              }
              break;
                     }
                     case 5:
              if (*(long *)(piVar2 + 0x2a) == 0) {
                *(undefined8 *)(piVar2 + 0x2a) = *(undefined8 *)(piVar5 + 2);
              }
              break;
                     case 6:
              if (*(long *)(piVar2 + 0x2c) == 0) {
                iVar4 = iVar4 + 1;
                *(undefined8 *)(piVar2 + 0x2c) = *(undefined8 *)(piVar5 + 2);
              }
              break;
                     for (int i_1777 = 0; i_1777 < 7; i_1777++) {
                        case 7:
              if (*(long *)(piVar2 + 0x30) == 0) {
                *(undefined8 *)(piVar2 + 0x30) = *(undefined8 *)(piVar5 + 2);
              }
              break;
                     }
                     case 0xe:
              if (*(long *)(piVar2 + 0x28) == 0) {
                iVar4 = iVar4 + 1;
                *(undefined8 *)(piVar2 + 0x28) = *(undefined8 *)(piVar5 + 2);
              }
              break;
                     case 0xf:
              if (*(long *)(piVar2 + 0x2e) == 0) {
                *(undefined8 *)(piVar2 + 0x2e) = *(undefined8 *)(piVar5 + 2);
              }
                  }
                  iVar1 = piVar5[4];
                  piVar5 = piVar5 + 4;
               } while ( iVar1 != 0 );
               if (iVar4 == 0) goto LAB_00101840;
               if (( iVar4 != 5 ) && ( iVar4 != 6 )) goto LAB_00101850;
            }
            if (( param_3 == 0 ) || ( iVar1 = iVar1 != 0 )) {
               *(long*)( piVar2 + 0x1c ) = param_3;
               local_110 = 0;
               local_10c = 0;
               local_108 = 0;
               local_100 = 0;
               OSSL_PARAM_construct_size_t(&local_148, "blocksize", &local_108);
               local_f8 = local_148;
               uStack_f0 = uStack_140;
               local_e8 = local_138;
               uStack_e0 = uStack_130;
               local_d8 = local_128;
               OSSL_PARAM_construct_size_t(&local_148, &_LC8, &local_100);
               local_d0 = local_148;
               uStack_c8 = uStack_140;
               local_c0 = local_138;
               uStack_b8 = uStack_130;
               local_b0 = local_128;
               OSSL_PARAM_construct_int(&local_148, &_LC9, &local_110);
               local_a8 = local_148;
               uStack_a0 = uStack_140;
               local_98 = local_138;
               uStack_90 = uStack_130;
               local_88 = local_128;
               OSSL_PARAM_construct_int(&local_148, "algid-absent", &local_10c);
               local_60 = local_128;
               local_80 = local_148;
               uStack_78 = uStack_140;
               local_70 = local_138;
               uStack_68 = uStack_130;
               OSSL_PARAM_construct_end(&local_148);
               local_58 = local_148;
               uStack_50 = uStack_140;
               local_38 = local_128;
               local_48 = local_138;
               uStack_40 = uStack_130;
               iVar1 = evp_do_md_getparams(piVar2, &local_f8);
               if (( local_100 < 0x80000000 ) && ( ( local_108 < 0x80000000 && ( 0 < iVar1 ) ) )) {
                  piVar2[0x12] = (int)local_108;
                  piVar2[2] = (int)local_100;
                  if (local_110 != 0) {
                     *(ulong*)( piVar2 + 4 ) = *(ulong*)( piVar2 + 4 ) | 2;
                  }
                  if (local_10c != 0) {
                     *(ulong*)( piVar2 + 4 ) = *(ulong*)( piVar2 + 4 ) | 8;
                  }
                  goto LAB_001015cb;
               }
               ERR_new();
               ERR_set_debug("crypto/evp/digest.c", 0x475, "evp_md_from_algorithm");
               ERR_set_error(6, 0xe1, 0);
            }
         }
      }
      LAB_001015c0:EVP_MD_free(piVar2);
   }
   piVar2 = (int*)0x0;
   LAB_001015cb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return piVar2;
}void evp_md_ctx_clear_digest(EVP_MD_CTX *param_1, int param_2, int param_3) {
   code *pcVar1;
   int iVar2;
   if (param_1[1].engine != (ENGINE*)0x0) {
      if (( param_1->engine != (ENGINE*)0x0 ) && ( pcVar1 = *(code**)( param_1->engine + 0xb0 ) ),pcVar1 != (code*)0x0) {
         ( *pcVar1 )();
      }
      param_1[1].engine = (ENGINE*)0x0;
      EVP_MD_CTX_set_flags(param_1, 2);
   }
   if (param_1->engine != (ENGINE*)0x0) {
      if (*(long*)( param_1->engine + 0x40 ) != 0) {
         iVar2 = EVP_MD_CTX_test_flags(param_1, 2);
         if (iVar2 == 0) {
            ( **(code**)( param_1->engine + 0x40 ) )(param_1);
         }
      }
      if (( param_1->pctx != (EVP_PKEY_CTX*)0x0 ) && ( 0 < *(int*)( param_1->engine + 0x4c ) )) {
         iVar2 = EVP_MD_CTX_test_flags(param_1, 4);
         if (( param_2 == 0 ) && ( iVar2 != 0 )) goto LAB_001019ac;
         CRYPTO_clear_free(param_1->pctx, (long)*(int*)( param_1->engine + 0x4c ), "crypto/evp/digest.c", 0x26);
         param_1->pctx = (EVP_PKEY_CTX*)0x0;
      }
   }
   if (param_2 != 0) {
      param_1->engine = (ENGINE*)0x0;
   }
   LAB_001019ac:ENGINE_finish((ENGINE*)param_1->flags);
   param_1->flags = 0;
   if (param_3 != 0) {
      return;
   }
   EVP_MD_free(param_1[1].flags);
   param_1[1].flags = 0;
   param_1->digest = (EVP_MD*)0x0;
   return;
}undefined8 EVP_MD_CTX_reset(EVP_MD_CTX *param_1) {
   int iVar1;
   if (param_1 != (EVP_MD_CTX*)0x0) {
      iVar1 = EVP_MD_CTX_test_flags(param_1, 0x400);
      if (iVar1 == 0) {
         EVP_PKEY_CTX_free((EVP_PKEY_CTX*)param_1->update);
         param_1->update = (_func_1088*)0x0;
      }
      evp_md_ctx_clear_digest(param_1, 0, 0);
      OPENSSL_cleanse(param_1, 0x48);
      return 1;
   }
   return 1;
}void EVP_MD_CTX_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      EVP_MD_CTX_reset();
      CRYPTO_free(param_1);
      return;
   }
   return;
}long evp_md_ctx_new_ex(undefined8 param_1, undefined4 *param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long lVar2;
   EVP_PKEY_CTX *ctx;
   lVar2 = EVP_MD_CTX_new();
   if (lVar2 != 0) {
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(param_3, param_1, param_4);
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         if (param_2 == (undefined4*)0x0) {
            LAB_00101ae5:EVP_MD_CTX_set_pkey_ctx(lVar2, ctx);
            return lVar2;
         }
         iVar1 = EVP_PKEY_CTX_set1_id(ctx, *(undefined8*)( param_2 + 2 ), *param_2);
         if (0 < iVar1) goto LAB_00101ae5;
         goto LAB_00101b32;
      }
   }
   ERR_new();
   ctx = (EVP_PKEY_CTX*)0x0;
   ERR_set_debug("crypto/evp/digest.c", 0x70, "evp_md_ctx_new_ex");
   ERR_set_error(0xd, 0x80006, 0);
   LAB_00101b32:EVP_PKEY_CTX_free(ctx);
   EVP_MD_CTX_free(lVar2);
   return 0;
}int EVP_Digest(void *data, size_t count, uchar *md, uint *size, EVP_MD *type, ENGINE *impl) {
   int iVar1;
   uint uVar2;
   EVP_MD_CTX *ctx;
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (ctx != (EVP_MD_CTX*)0x0) {
      EVP_MD_CTX_set_flags(ctx, 1);
      iVar1 = EVP_DigestInit_ex(ctx, type, impl);
      if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
         uVar2 = 0;
      } else {
         iVar1 = EVP_DigestFinal_ex(ctx, md, size);
         uVar2 = ( uint )(iVar1 != 0);
      }
      EVP_MD_CTX_free(ctx);
      return uVar2;
   }
   return 0;
}int EVP_Q_digest(void) {
   int iVar1;
   EVP_MD *type;
   void *in_RCX;
   size_t in_R8;
   uchar *in_R9;
   long in_FS_OFFSET;
   ulong *in_stack_00000008;
   uint local_44;
   long local_40;
   iVar1 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   type = (EVP_MD*)EVP_MD_fetch();
   local_44 = 0;
   if (type != (EVP_MD*)0x0) {
      iVar1 = EVP_Digest(in_RCX, in_R8, in_R9, &local_44, type, (ENGINE*)0x0);
      EVP_MD_free(type);
   }
   if (in_stack_00000008 != (ulong*)0x0) {
      *in_stack_00000008 = (ulong)local_44;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_DigestFinal(EVP_MD_CTX *ctx, uchar *md, uint *s) {
   int iVar1;
   iVar1 = EVP_DigestFinal_ex(ctx, md, s);
   EVP_MD_CTX_reset(ctx);
   return iVar1;
}int EVP_DigestInit(EVP_MD_CTX *ctx, EVP_MD *type) {
   int iVar1;
   EVP_MD_CTX_reset();
   iVar1 = evp_md_init_internal(ctx, type, 0, 0);
   return iVar1;
}int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out, EVP_MD_CTX *in) {
   ulong uVar1;
   void *pvVar2;
   _func_1088 *p_Var3;
   int iVar4;
   ENGINE *pEVar5;
   EVP_PKEY_CTX *pEVar6;
   undefined8 uVar7;
   ulong uVar8;
   if (in == (EVP_MD_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/digest.c", 0x256, "EVP_MD_CTX_copy_ex");
      ERR_set_error(6, 0xc0102, 0);
      return 0;
   }
   pEVar5 = in->engine;
   if (pEVar5 == (ENGINE*)0x0) {
      EVP_MD_CTX_reset();
      if (out[1].flags != 0) {
         EVP_MD_free();
      }
      pEVar5 = in->engine;
      out->digest = in->digest;
      out->engine = pEVar5;
      pvVar2 = in->md_data;
      out->flags = in->flags;
      out->md_data = pvVar2;
      p_Var3 = in->update;
      out->pctx = in->pctx;
      out->update = p_Var3;
      pEVar5 = in[1].engine;
      out[1].digest = in[1].digest;
      out[1].engine = pEVar5;
      out[1].flags = in[1].flags;
   } else {
      if (( *(long*)( pEVar5 + 0x70 ) == 0 ) || ( ( (ulong)in->md_data & 0x100 ) != 0 )) {
         if ((ENGINE*)in->flags != (ENGINE*)0x0) {
            iVar4 = ENGINE_init((ENGINE*)in->flags);
            if (iVar4 == 0) {
               ERR_new();
               ERR_set_debug("crypto/evp/digest.c", 0x2a2, "EVP_MD_CTX_copy_ex");
               ERR_set_error(6, 0x80026, 0);
               return 0;
            }
            pEVar5 = in->engine;
         }
         pEVar6 = (EVP_PKEY_CTX*)0x0;
         if (pEVar5 == out->engine) {
            pEVar6 = out->pctx;
            EVP_MD_CTX_set_flags(out, 4);
         }
         EVP_MD_CTX_reset(out);
         pEVar5 = in->engine;
         out->digest = in->digest;
         out->engine = pEVar5;
         pvVar2 = in->md_data;
         out->flags = in->flags;
         out->md_data = pvVar2;
         p_Var3 = in->update;
         out->pctx = in->pctx;
         out->update = p_Var3;
         pEVar5 = in[1].engine;
         out[1].digest = in[1].digest;
         out[1].engine = pEVar5;
         out[1].flags = in[1].flags;
         EVP_MD_CTX_clear_flags(out, 0x400);
         out->pctx = (EVP_PKEY_CTX*)0x0;
         out->update = (_func_1088*)0x0;
         if (( in->pctx != (EVP_PKEY_CTX*)0x0 ) && ( iVar4 = iVar4 != 0 )) {
            if (pEVar6 == (EVP_PKEY_CTX*)0x0) {
               pEVar6 = (EVP_PKEY_CTX*)CRYPTO_malloc(iVar4, "crypto/evp/digest.c", 0x2bd);
               out->pctx = pEVar6;
               if (pEVar6 == (EVP_PKEY_CTX*)0x0) {
                  return 0;
               }
               iVar4 = *(int*)( out->engine + 0x4c );
            } else {
               out->pctx = pEVar6;
            }
            memcpy(pEVar6, in->pctx, (long)iVar4);
         }
         pEVar6 = (EVP_PKEY_CTX*)in->update;
         out[1].digest = in[1].digest;
         if (pEVar6 != (EVP_PKEY_CTX*)0x0) {
            pEVar6 = EVP_PKEY_CTX_dup(pEVar6);
            out->update = (_func_1088*)pEVar6;
            if (pEVar6 == (EVP_PKEY_CTX*)0x0) {
               EVP_MD_CTX_reset(out);
               return 0;
            }
         }
         if (*(code**)( out->engine + 0x38 ) == (code*)0x0) {
            return 1;
         }
         for (int i_1779 = 0; i_1779 < 2; i_1779++) {
            /* WARNING: Could not recover jumptable at 0x00101f11. Too many branches */
         }
         iVar4 = ( **(code**)( out->engine + 0x38 ) )(out, in);
         return iVar4;
      }
      if (*(long*)( pEVar5 + 0xc0 ) == 0) {
         ERR_new();
         uVar7 = 0x268;
         LAB_00102081:ERR_set_debug("crypto/evp/digest.c", uVar7, "EVP_MD_CTX_copy_ex");
         ERR_set_error(6, 0xbe, 0);
         return 0;
      }
      if (( pEVar5 == out->engine ) && ( *(code**)( pEVar5 + 0xb8 ) != (code*)0x0 )) {
         ( **(code**)( pEVar5 + 0xb8 ) )(out[1].engine, in[1].engine);
         EVP_PKEY_CTX_free((EVP_PKEY_CTX*)out->update);
         out->update = (_func_1088*)0x0;
         cleanup_old_md_data(out, 0);
         out->md_data = in->md_data;
         out[1].digest = in[1].digest;
      } else {
         iVar4 = EVP_MD_CTX_test_flags(out, 0x400);
         if (iVar4 == 0) {
            EVP_PKEY_CTX_free((EVP_PKEY_CTX*)out->update);
            out->update = (_func_1088*)0x0;
         }
         evp_md_ctx_clear_digest(out, 0, 1);
         uVar8 = out[1].flags;
         uVar1 = in[1].flags;
         if (uVar8 != uVar1) {
            if (uVar1 != 0) {
               iVar4 = EVP_MD_up_ref(uVar1);
               if (iVar4 == 0) {
                  return 0;
               }
               uVar8 = out[1].flags;
            }
            if (uVar8 != 0) {
               EVP_MD_free();
            }
         }
         pEVar5 = in->engine;
         out->digest = in->digest;
         out->engine = pEVar5;
         pvVar2 = in->md_data;
         out->flags = in->flags;
         out->md_data = pvVar2;
         p_Var3 = in->update;
         out->pctx = in->pctx;
         out->update = p_Var3;
         pEVar5 = in[1].engine;
         out[1].digest = in[1].digest;
         out[1].engine = pEVar5;
         uVar8 = in[1].flags;
         out[1].engine = (ENGINE*)0x0;
         pEVar5 = in[1].engine;
         out[1].flags = uVar8;
         out->update = (_func_1088*)0x0;
         if (pEVar5 != (ENGINE*)0x0) {
            pEVar5 = (ENGINE*)( **(code**)( in->engine + 0xc0 ) )();
            out[1].engine = pEVar5;
            if (pEVar5 == (ENGINE*)0x0) {
               ERR_new();
               uVar7 = 0x287;
               goto LAB_00102081;
            }
         }
      }
   }
   EVP_MD_CTX_clear_flags(out, 0x400);
   if ((EVP_PKEY_CTX*)in->update != (EVP_PKEY_CTX*)0x0) {
      pEVar6 = EVP_PKEY_CTX_dup((EVP_PKEY_CTX*)in->update);
      out->update = (_func_1088*)pEVar6;
      if (pEVar6 == (EVP_PKEY_CTX*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/evp/digest.c", 0x294, "EVP_MD_CTX_copy_ex");
         ERR_set_error(6, 0xbe, 0);
         EVP_MD_CTX_reset(out);
         return 0;
      }
   }
   return 1;
}EVP_MD_CTX *EVP_MD_CTX_dup(EVP_MD_CTX *param_1) {
   int iVar1;
   EVP_MD_CTX *out;
   out = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (out != (EVP_MD_CTX*)0x0) {
      iVar1 = EVP_MD_CTX_copy_ex(out, param_1);
      if (iVar1 != 0) {
         return out;
      }
      EVP_MD_CTX_free(out);
   }
   return (EVP_MD_CTX*)0x0;
}int EVP_MD_CTX_copy(EVP_MD_CTX *out, EVP_MD_CTX *in) {
   int iVar1;
   EVP_MD_CTX_reset();
   iVar1 = EVP_MD_CTX_copy_ex(out, in);
   return iVar1;
}void EVP_MD_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 1, param_2, param_3, evp_md_from_algorithm, evp_md_up_ref, evp_md_free);
   return;
}void evp_digest_fetch_from_prov(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch_from_prov(param_1, 1, param_2, param_3, evp_md_from_algorithm, evp_md_up_ref, evp_md_free);
   return;
}undefined4 ossl_hmac2mdnid(int param_1) {
   long lVar1;
   if (param_1 == 0xa3) {
      lVar1 = 0;
   } else if (param_1 == 0x31d) {
      lVar1 = 1;
   } else if (param_1 == 0x31e) {
      lVar1 = 2;
   } else if (param_1 == 799) {
      lVar1 = 3;
   } else if (param_1 == 800) {
      lVar1 = 4;
   } else if (param_1 == 0x321) {
      lVar1 = 5;
   } else if (param_1 == 0x32a) {
      lVar1 = 6;
   } else if (param_1 == 0x3dc) {
      lVar1 = 7;
   } else if (param_1 == 0x3dd) {
      lVar1 = 8;
   } else if (param_1 == 0x44e) {
      lVar1 = 9;
   } else if (param_1 == 0x44f) {
      lVar1 = 10;
   } else if (param_1 == 0x450) {
      lVar1 = 0xb;
   } else if (param_1 == 0x451) {
      lVar1 = 0xc;
   } else if (param_1 == 0x4a9) {
      lVar1 = 0xd;
   } else {
      if (param_1 != 0x4aa) {
         return 0;
      }
      lVar1 = 0xe;
   }
   return ( &ossl_hmacmd_pairs )[lVar1 * 2];
}undefined4 ossl_md2hmacnid(int param_1) {
   long lVar1;
   if (param_1 == 0x40) {
      lVar1 = 0;
   } else if (param_1 == 4) {
      lVar1 = 1;
   } else if (param_1 == 0x2a3) {
      lVar1 = 2;
   } else if (param_1 == 0x2a0) {
      lVar1 = 3;
   } else if (param_1 == 0x2a1) {
      lVar1 = 4;
   } else if (param_1 == 0x2a2) {
      lVar1 = 5;
   } else if (param_1 == 0x329) {
      lVar1 = 6;
   } else if (param_1 == 0x3d6) {
      lVar1 = 7;
   } else if (param_1 == 0x3d7) {
      lVar1 = 8;
   } else if (param_1 == 0x448) {
      lVar1 = 9;
   } else if (param_1 == 0x449) {
      lVar1 = 10;
   } else if (param_1 == 0x44a) {
      lVar1 = 0xb;
   } else if (param_1 == 1099) {
      lVar1 = 0xc;
   } else if (param_1 == 0x446) {
      lVar1 = 0xd;
   } else {
      if (param_1 != 0x447) {
         return 0;
      }
      lVar1 = 0xe;
   }
   return ( &DAT_00102664 )[lVar1 * 2];
}

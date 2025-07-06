undefined8 update(void) {
   ERR_new();
   ERR_set_debug("crypto/evp/m_sigver.c", 0x15, "update");
   ERR_set_error(6, 0xb1, 0);
   return 0;
}bool do_sigver_init(EVP_MD_CTX *param_1, undefined8 *param_2, EVP_MD *param_3, char *param_4, undefined8 param_5, long param_6, ENGINE *param_7, EVP_PKEY *param_8, int param_9, undefined8 param_10) {
   code cVar1;
   undefined8 uVar2;
   _func_1088 *p_Var3;
   int iVar4;
   EVP_PKEY_CTX *pEVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long lVar10;
   code *pcVar11;
   EVP_MD *pEVar12;
   char *name;
   undefined4 uVar13;
   _func_1088 *p_Var14;
   uint uVar15;
   long in_FS_OFFSET;
   bool bVar16;
   char *local_e8;
   EVP_MD *local_e0;
   EVP_PKEY *local_d8;
   long local_d0;
   int local_a4;
   long local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_d8 = param_8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_a0 = 0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   iVar4 = evp_md_ctx_free_algctx();
   if (iVar4 != 0) {
      local_d0 = param_6;
      if (param_1->update == (_func_1088*)0x0) {
         if (param_7 == (ENGINE*)0x0) {
            pEVar5 = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(param_5, param_8, param_6);
         } else {
            pEVar5 = EVP_PKEY_CTX_new(param_8, param_7);
         }
         param_1->update = (_func_1088*)pEVar5;
         if (pEVar5 == (EVP_PKEY_CTX*)0x0) goto LAB_00100241;
         EVP_MD_CTX_clear_flags(param_1, 0x800);
         p_Var14 = param_1->update;
         ERR_set_mark();
         if (*(long*)( p_Var14 + 0x20 ) == 0) goto LAB_00100111;
         lVar6 = *(long*)( p_Var14 + 0x88 );
         lVar7 = 0;
         if (param_6 != 0) goto joined_r0x00100a06;
         LAB_001002ca:local_d0 = *(long*)( p_Var14 + 0x10 );
         if (lVar6 != 0) {
            lVar7 = 0;
            goto LAB_001001cb;
         }
         LAB_00100611:ERR_clear_last_mark();
         ERR_new();
         ERR_set_debug("crypto/evp/m_sigver.c", 0x57, "do_sigver_init");
         ERR_set_error(6, 0x9a, 0);
         LAB_00100229:evp_pkey_ctx_free_old_ops(p_Var14);
         *(int*)p_Var14 = 0;
         EVP_KEYMGMT_free(local_a0);
      } else {
         EVP_MD_CTX_clear_flags(param_1, 0x800);
         p_Var14 = param_1->update;
         ERR_set_mark();
         if (*(long*)( p_Var14 + 0x20 ) != 0) {
            lVar6 = *(long*)( p_Var14 + 0x88 );
            if (param_8 != (EVP_PKEY*)0x0) {
               if (param_6 == 0) goto LAB_001002ca;
               LAB_001001bf:if (lVar6 == 0) goto LAB_00100611;
               lVar7 = 0;
               LAB_001001cb:evp_pkey_ctx_free_old_ops(p_Var14);
               if (*(long*)( *(long*)( p_Var14 + 0x88 ) + 0x60 ) == 0) {
                  lVar6 = *(long*)( p_Var14 + 0x20 );
               } else {
                  lVar6 = *(long*)( p_Var14 + 0x20 );
                  if (*(long*)( *(long*)( p_Var14 + 0x88 ) + 0x60 ) != lVar6) {
                     ERR_clear_last_mark();
                     ERR_new();
                     ERR_set_debug("crypto/evp/m_sigver.c", 0x69, "do_sigver_init");
                     ERR_set_error(6, 0xc0103, 0);
                     goto LAB_00100229;
                  }
               }
               lVar6 = evp_keymgmt_util_query_operation_name(lVar6, 0xc);
               if (lVar6 == 0) {
                  ERR_clear_last_mark();
                  ERR_new();
                  uVar8 = 0x70;
                  LAB_00100560:ERR_set_debug("crypto/evp/m_sigver.c", uVar8, "do_sigver_init");
                  ERR_set_error(6, 0x86, 0);
                  goto LAB_00100229;
               }
               EVP_SIGNATURE_free(lVar7);
               EVP_KEYMGMT_free(local_a0);
               lVar7 = EVP_SIGNATURE_fetch(*(undefined8*)( p_Var14 + 8 ), lVar6, *(undefined8*)( p_Var14 + 0x10 ));
               if (lVar7 == 0) goto LAB_00100388;
               uVar15 = 1;
               uVar8 = EVP_SIGNATURE_get0_provider(lVar7);
               do {
                  uVar2 = *(undefined8*)( p_Var14 + 0x10 );
                  uVar9 = EVP_KEYMGMT_get0_name(*(undefined8*)( p_Var14 + 0x20 ));
                  lVar10 = evp_keymgmt_fetch_from_prov(uVar8, uVar9, uVar2);
                  local_a0 = lVar10;
                  if (lVar10 == 0) {
                     local_d8 = (EVP_PKEY*)0x0;
                     bVar16 = true;
                     LAB_00100401:EVP_KEYMGMT_free(lVar10);
                  } else {
                     local_d8 = (EVP_PKEY*)evp_pkey_export_to_provider(*(undefined8*)( p_Var14 + 0x88 ), *(undefined8*)( p_Var14 + 8 ), &local_a0, *(undefined8*)( p_Var14 + 0x10 ));
                     bVar16 = local_d8 == (EVP_PKEY*)0x0;
                     if (local_a0 == 0) goto LAB_00100401;
                  }
                  if (( 1 < uVar15 ) || ( !bVar16 )) {
                     if (local_d8 == (EVP_PKEY*)0x0) {
                        EVP_SIGNATURE_free(lVar7);
                        ERR_clear_last_mark();
                        ERR_new();
                        uVar8 = 0xbb;
                     } else {
                        ERR_pop_to_mark();
                        *(long*)( p_Var14 + 0x28 ) = lVar7;
                        uVar8 = *(undefined8*)( lVar7 + 0x18 );
                        pcVar11 = *(code**)( lVar7 + 0x28 );
                        *(uint*)p_Var14 = ( -(uint)(param_9 == 0) & 0xffffff80 ) + 0x100;
                        uVar8 = ossl_provider_ctx(uVar8);
                        lVar6 = ( *pcVar11 )(uVar8, local_d0);
                        *(long*)( p_Var14 + 0x30 ) = lVar6;
                        bVar16 = true;
                        if (lVar6 != 0) goto LAB_00100486;
                        ERR_new();
                        uVar8 = 0xc9;
                     }
                     goto LAB_00100560;
                  }
                  LAB_00100388:uVar15 = 2;
                  EVP_SIGNATURE_free(lVar7);
                  EVP_KEYMGMT_free(local_a0);
                  uVar8 = EVP_KEYMGMT_get0_provider(*(undefined8*)( p_Var14 + 0x20 ));
                  lVar7 = evp_signature_fetch_from_prov(uVar8, lVar6, *(undefined8*)( p_Var14 + 0x10 ));
               } while ( lVar7 != 0 );
               goto LAB_00100111;
            }
            if (*(int*)p_Var14 != ( -(uint)(param_9 == 0) & 0xffffff80 ) + 0x100) {
               if (param_6 != 0) goto LAB_001001bf;
               lVar7 = 0;
               LAB_001005fa:local_d0 = *(long*)( p_Var14 + 0x10 );
               joined_r0x00100a06:if (lVar6 == 0) goto LAB_00100611;
               goto LAB_001001cb;
            }
            lVar7 = *(long*)( p_Var14 + 0x28 );
            if (lVar7 == 0) {
               if (param_6 == 0) {
                  local_d0 = *(long*)( p_Var14 + 0x10 );
               }
               goto joined_r0x00100a06;
            }
            if (*(long*)( p_Var14 + 0x30 ) == 0) {
               if (param_6 == 0) goto LAB_001005fa;
               goto joined_r0x00100a06;
            }
            if (param_6 == 0) {
               local_d0 = *(long*)( p_Var14 + 0x10 );
            }
            if (lVar6 == 0) goto LAB_00100611;
            bVar16 = false;
            if (param_4 == (char*)0x0 && param_3 == (EVP_MD*)0x0) {
               local_e8 = (char*)EVP_MD_get0_name(param_1->digest);
               if (( local_e8 == (char*)0x0 ) || ( iVar4 = iVar4 == 0 )) {
                  if (param_2 != (undefined8*)0x0) {
                     *param_2 = p_Var14;
                  }
                  goto LAB_001008a0;
               }
               if (param_2 != (undefined8*)0x0) {
                  *param_2 = p_Var14;
               }
               LAB_00100792:evp_md_ctx_clear_digest(param_1, 1, 0);
               ERR_set_mark();
               pEVar12 = (EVP_MD*)EVP_MD_fetch(*(undefined8*)( p_Var14 + 8 ), local_e8, local_d0);
               param_1[1].flags = (ulong)pEVar12;
               if (pEVar12 != (EVP_MD*)0x0) {
                  param_1->digest = pEVar12;
                  param_1->engine = (ENGINE*)pEVar12;
                  LAB_001007d5:ERR_pop_to_mark();
                  goto LAB_001004b1;
               }
               pEVar12 = EVP_get_digestbyname(local_e8);
               param_1->digest = pEVar12;
               param_1->engine = (ENGINE*)pEVar12;
               if (pEVar12 != (EVP_MD*)0x0) goto LAB_001007d5;
               ERR_clear_last_mark();
               ERR_new();
               uVar8 = 0xf6;
               goto LAB_00100560;
            }
            LAB_00100486:if (param_2 != (undefined8*)0x0) {
               *param_2 = p_Var14;
            }
            local_e8 = param_4;
            if (param_3 == (EVP_MD*)0x0) {
               if (param_4 != (char*)0x0) goto LAB_00100792;
               if (bVar16) {
                  local_e8 = local_98;
                  iVar4 = evp_keymgmt_util_get_deflt_digest_name(local_a0, local_d8, local_e8, 0x50);
                  if (( 0 < iVar4 ) && ( iVar4 = iVar4 != 0 )) goto LAB_00100792;
               }
               LAB_001008a0:local_e8 = (char*)0x0;
            } else {
               param_1->digest = param_3;
               if (( param_4 == (char*)0x0 ) && ( ( local_e8 = (char*)EVP_MD_get0_name(param_3) ),local_e8 == (char*)0x0 || ( iVar4 = strcmp(local_e8, "UNDEF") ),iVar4 == 0 )) goto LAB_001008a0;
            }
            LAB_001004b1:if (param_9 == 0) {
               pcVar11 = *(code**)( lVar7 + 0x90 );
               if (pcVar11 == (code*)0x0) {
                  ERR_new();
                  uVar8 = 0x107;
                  goto LAB_00100560;
               }
            } else {
               pcVar11 = *(code**)( lVar7 + 0xb0 );
               if (pcVar11 == (code*)0x0) {
                  ERR_new();
                  uVar8 = 0x100;
                  goto LAB_00100560;
               }
            }
            iVar4 = ( *pcVar11 )(*(undefined8*)( p_Var14 + 0x30 ), local_e8, local_d8, param_10);
            if (( iVar4 < 1 ) && ( local_e8 == (char*)0x0 )) {
               if (param_3 == (EVP_MD*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/evp/m_sigver.c", 0x115, "do_sigver_init");
                  ERR_set_error(6, 0x9e, 0);
               }
               goto LAB_00100229;
            }
            bVar16 = false;
            if (0 < iVar4) goto LAB_0010058e;
            LAB_0010059c:EVP_KEYMGMT_free(local_a0);
            goto LAB_00100243;
         }
         LAB_00100111:ERR_pop_to_mark();
         EVP_KEYMGMT_free(local_a0);
         local_a0 = 0;
         local_e0 = param_3;
         if (( param_3 == (EVP_MD*)0x0 ) && ( param_4 != (char*)0x0 )) {
            local_e0 = (EVP_MD*)evp_get_digestbyname_ex(*(undefined8*)( p_Var14 + 8 ));
         }
         pEVar5 = (EVP_PKEY_CTX*)param_1->update;
         lVar6 = *(long*)( pEVar5 + 0x78 );
         if (lVar6 == 0) {
            ERR_new();
            ERR_set_debug("crypto/evp/m_sigver.c", 0x12a, "do_sigver_init");
            ERR_set_error(6, 0x96, 0);
         } else if (( ( *(byte*)( lVar6 + 4 ) & 4 ) == 0 ) && ( local_e0 == (EVP_MD*)0x0 )) {
            iVar4 = EVP_PKEY_get_default_digest_nid(param_8, &local_a4);
            if (0 < iVar4) {
               name = OBJ_nid2sn(local_a4);
               local_e0 = EVP_get_digestbyname(name);
               if (local_e0 != (EVP_MD*)0x0) {
                  pEVar5 = (EVP_PKEY_CTX*)param_1->update;
                  lVar6 = *(long*)( pEVar5 + 0x78 );
                  goto LAB_00100163;
               }
            }
            ERR_new();
            ERR_set_debug("crypto/evp/m_sigver.c", 0x137, "do_sigver_init");
            ERR_set_error(6, 0x9e, 0);
         } else {
            LAB_00100163:if (param_9 == 0) {
               if (*(code**)( lVar6 + 0x70 ) == (code*)0x0) {
                  uVar13 = 0x10;
                  if (*(long*)( lVar6 + 0xd0 ) != 0) goto LAB_001007f2;
                  iVar4 = EVP_PKEY_sign_init(pEVar5);
                  if (0 < iVar4) goto LAB_00100a71;
               } else {
                  iVar4 = ( **(code**)( lVar6 + 0x70 ) )(pEVar5, param_1);
                  if (0 < iVar4) {
                     pEVar5 = (EVP_PKEY_CTX*)param_1->update;
                     *(undefined4*)pEVar5 = 0x80;
                     goto LAB_00100675;
                  }
               }
            } else {
               if (*(code**)( lVar6 + 0x80 ) == (code*)0x0) {
                  if (*(long*)( lVar6 + 0xd8 ) == 0) {
                     iVar4 = EVP_PKEY_verify_init(pEVar5);
                     if (iVar4 < 1) goto LAB_00100241;
                     LAB_00100a71:pEVar5 = (EVP_PKEY_CTX*)param_1->update;
                  } else {
                     uVar13 = 0x20;
                     LAB_001007f2:*(undefined4*)pEVar5 = uVar13;
                     param_1[1].digest = (EVP_MD*)0x100000;
                  }
               } else {
                  iVar4 = ( **(code**)( lVar6 + 0x80 ) )(pEVar5, param_1);
                  if (iVar4 < 1) goto LAB_00100241;
                  pEVar5 = (EVP_PKEY_CTX*)param_1->update;
                  *(undefined4*)pEVar5 = 0x100;
               }
               LAB_00100675:iVar4 = EVP_PKEY_CTX_set_signature_md(pEVar5, local_e0);
               if (0 < iVar4) {
                  if (param_2 != (undefined8*)0x0) {
                     *param_2 = param_1->update;
                  }
                  bVar16 = true;
                  if (( *(byte*)( *(long*)( param_1->update + 0x78 ) + 4 ) & 4 ) != 0) goto LAB_00100243;
                  iVar4 = EVP_DigestInit_ex(param_1, local_e0, param_7);
                  if (iVar4 != 0) {
                     p_Var3 = param_1->update;
                     cVar1 = p_Var3[0xa0];
                     p_Var3[0xa0] = ( _func_1088 )((byte)cVar1 & 0xfe);
                     if (*(long*)( *(long*)( p_Var3 + 0x78 ) + 0xf8 ) != 0) {
                        p_Var3[0xa0] = ( _func_1088 )((byte)cVar1 & 0xfe | 1);
                     }
                     LAB_0010058e:iVar4 = evp_pkey_ctx_use_cached_data(p_Var14);
                     bVar16 = 0 < iVar4;
                     goto LAB_0010059c;
                  }
               }
            }
         }
      }
   }
   LAB_00100241:bVar16 = false;
   LAB_00100243:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar16;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EVP_DigestSignInit_ex(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   do_sigver_init(param_1, param_2, 0, param_3, param_4, param_5, 0, param_6, 0, param_7);
   return;
}int EVP_DigestSignInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx, EVP_MD *type, ENGINE *e, EVP_PKEY *pkey) {
   int iVar1;
   iVar1 = do_sigver_init();
   return iVar1;
}void EVP_DigestVerifyInit_ex(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   do_sigver_init(param_1, param_2, 0, param_3, param_4, param_5, 0, param_6, 1, param_7);
   return;
}int EVP_DigestVerifyInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx, EVP_MD *type, ENGINE *e, EVP_PKEY *pkey) {
   int iVar1;
   iVar1 = do_sigver_init();
   return iVar1;
}int EVP_DigestSignUpdate(EVP_MD_CTX *param_1, void *param_2, size_t param_3) {
   _func_1088 *p_Var1;
   code *UNRECOVERED_JUMPTABLE;
   int iVar2;
   p_Var1 = param_1->update;
   if (( (ulong)param_1->md_data & 0x800 ) != 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x191, "EVP_DigestSignUpdate");
      ERR_set_error(6, 0xbd, 0);
      return 0;
   }
   if (p_Var1 != (_func_1088*)0x0) {
      if (( ( *(int*)p_Var1 == 0x80 ) && ( *(long*)( p_Var1 + 0x30 ) != 0 ) ) && ( *(long*)( p_Var1 + 0x28 ) != 0 )) {
         UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( p_Var1 + 0x28 ) + 0x98 );
         if (UNRECOVERED_JUMPTABLE == (code*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/m_sigver.c", 0x19c, "EVP_DigestSignUpdate");
            ERR_set_error(6, 0xc0101, 0);
            return 0;
         }
         for (int i_2473 = 0; i_2473 < 2; i_2473++) {
            /* WARNING: Could not recover jumptable at 0x00100bb8. Too many branches */
         }
         iVar2 = ( *UNRECOVERED_JUMPTABLE )();
         return iVar2;
      }
      if (( ( (byte)p_Var1[0xa0] & 1 ) != 0 ) && ( iVar2 = ( **(code**)( *(long*)( p_Var1 + 0x78 ) + 0xf8 ) )(p_Var1, param_1) ),iVar2 == 0) {
         return 0;
      }
      p_Var1[0xa0] = ( _func_1088 )((byte)p_Var1[0xa0] & 0xfe);
   }
   iVar2 = EVP_DigestUpdate(param_1, param_2, param_3);
   return iVar2;
}int EVP_DigestVerifyUpdate(EVP_MD_CTX *param_1, void *param_2, size_t param_3) {
   _func_1088 *p_Var1;
   code *UNRECOVERED_JUMPTABLE;
   int iVar2;
   p_Var1 = param_1->update;
   if (( (ulong)param_1->md_data & 0x800 ) != 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x1b4, "EVP_DigestVerifyUpdate");
      ERR_set_error(6, 0xbd, 0);
      return 0;
   }
   if (p_Var1 != (_func_1088*)0x0) {
      if (( ( *(int*)p_Var1 == 0x100 ) && ( *(long*)( p_Var1 + 0x30 ) != 0 ) ) && ( *(long*)( p_Var1 + 0x28 ) != 0 )) {
         UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( p_Var1 + 0x28 ) + 0xb8 );
         if (UNRECOVERED_JUMPTABLE == (code*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/m_sigver.c", 0x1bf, "EVP_DigestVerifyUpdate");
            ERR_set_error(6, 0xc0101, 0);
            return 0;
         }
         for (int i_2474 = 0; i_2474 < 2; i_2474++) {
            /* WARNING: Could not recover jumptable at 0x00100cd8. Too many branches */
         }
         iVar2 = ( *UNRECOVERED_JUMPTABLE )();
         return iVar2;
      }
      if (( ( (byte)p_Var1[0xa0] & 1 ) != 0 ) && ( iVar2 = ( **(code**)( *(long*)( p_Var1 + 0x78 ) + 0xf8 ) )(p_Var1, param_1) ),iVar2 == 0) {
         return 0;
      }
      p_Var1[0xa0] = ( _func_1088 )((byte)p_Var1[0xa0] & 0xfe);
   }
   iVar2 = EVP_DigestUpdate(param_1, param_2, param_3);
   return iVar2;
}int EVP_DigestSignFinal(EVP_MD_CTX *ctx, uchar *sigret, size_t *siglen) {
   long lVar1;
   bool bVar2;
   uint uVar3;
   int iVar4;
   code *pcVar5;
   long lVar6;
   EVP_PKEY_CTX *pEVar7;
   EVP_PKEY_CTX *ctx_00;
   EVP_MD_CTX *out;
   uchar *tbs;
   size_t tbslen;
   long in_FS_OFFSET;
   uint local_8c;
   uchar local_88[72];
   long local_40;
   pEVar7 = (EVP_PKEY_CTX*)ctx->update;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (ulong)ctx->md_data & 0x800 ) != 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x1da, "EVP_DigestSignFinal");
      ERR_set_error(6, 0xbc, 0);
      goto LAB_00100f18;
   }
   if (pEVar7 == (EVP_PKEY_CTX*)0x0) {
      LAB_00100f70:ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x1f5, "EVP_DigestSignFinal");
      ERR_set_error(6, 0x86, 0);
      LAB_00100f18:uVar3 = 0;
   } else if (( ( *(int*)pEVar7 == 0x80 ) && ( lVar6 = *(long*)( pEVar7 + 0x30 ) ),lVar6 != 0 )) {
      if (sigret == (uchar*)0x0) {
         uVar3 = ( **(code**)( lVar1 + 0xa0 ) )(lVar6, 0, siglen, 0);
         ctx_00 = (EVP_PKEY_CTX*)0x0;
         LAB_00100f5e:EVP_PKEY_CTX_free(ctx_00);
      } else {
         if (( (ulong)ctx->md_data & 0x200 ) == 0) {
            ctx_00 = EVP_PKEY_CTX_dup(pEVar7);
            if (ctx_00 != (EVP_PKEY_CTX*)0x0) {
               uVar3 = ( **(code**)( *(long*)( ctx_00 + 0x28 ) + 0xa0 ) )(*(undefined8*)( ctx_00 + 0x30 ), sigret, siglen, *siglen);
               goto LAB_00100f5e;
            }
            lVar6 = *(long*)( pEVar7 + 0x30 );
            pcVar5 = *(code**)( *(long*)( pEVar7 + 0x28 ) + 0xa0 );
         } else {
            pcVar5 = *(code**)( lVar1 + 0xa0 );
         }
         uVar3 = ( *pcVar5 )(lVar6, sigret, siglen, *siglen);
         ctx->md_data = (void*)( (ulong)ctx->md_data | 0x800 );
      }
   } else {
      lVar6 = *(long*)( pEVar7 + 0x78 );
      if (lVar6 == 0) goto LAB_00100f70;
      if (( (byte)pEVar7[0xa0] & 1 ) != 0) {
         iVar4 = ( **(code**)( lVar6 + 0xf8 ) )(pEVar7);
         if (iVar4 == 0) goto LAB_00100f18;
         lVar6 = *(long*)( pEVar7 + 0x78 );
      }
      pEVar7[0xa0] = ( EVP_PKEY_CTX )((byte)pEVar7[0xa0] & 0xfe);
      if (( *(uint*)( lVar6 + 4 ) & 4 ) == 0) {
         pcVar5 = *(code**)( lVar6 + 0x78 );
         uVar3 = 0;
         if (pcVar5 == (code*)0x0) {
            if (sigret == (uchar*)0x0) {
               iVar4 = EVP_MD_get_size(ctx->engine);
               if (0 < iVar4) {
                  tbslen = (size_t)iVar4;
                  tbs = (uchar*)0x0;
                  sigret = (uchar*)0x0;
                  goto LAB_00101077;
               }
               goto LAB_00100f18;
            }
            local_8c = 0;
            bVar2 = false;
            if (( (ulong)ctx->md_data & 0x200 ) == 0) goto LAB_00101096;
            iVar4 = EVP_DigestFinal_ex(ctx, local_88, &local_8c);
            LAB_00101061:tbs = local_88;
            if (iVar4 != 0) {
               tbslen = (size_t)local_8c;
               LAB_00101077:iVar4 = EVP_PKEY_sign(pEVar7, sigret, siglen, tbs, tbslen);
               uVar3 = ( uint )(0 < iVar4);
            }
         } else if (sigret == (uchar*)0x0) {
            iVar4 = ( *pcVar5 )(pEVar7, 0, siglen, ctx);
            uVar3 = ( uint )(0 < iVar4);
         } else {
            local_8c = 0;
            if (( (ulong)ctx->md_data & 0x200 ) == 0) {
               bVar2 = true;
               LAB_00101096:local_8c = 0;
               out = (EVP_MD_CTX*)EVP_MD_CTX_new();
               if (out != (EVP_MD_CTX*)0x0) {
                  iVar4 = EVP_MD_CTX_copy_ex(out, ctx);
                  if (iVar4 != 0) {
                     if (!bVar2) {
                        iVar4 = EVP_DigestFinal_ex(out, local_88, &local_8c);
                        EVP_MD_CTX_free(out);
                        goto LAB_00101061;
                     }
                     uVar3 = ( **(code**)( *(long*)( out->update + 0x78 ) + 0x78 ) )(out->update, sigret, siglen);
                  }
                  EVP_MD_CTX_free(out);
               }
            } else {
               uVar3 = ( *pcVar5 )(pEVar7, sigret, siglen, ctx);
            }
         }
      } else {
         if (sigret == (uchar*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               for (int i_2475 = 0; i_2475 < 2; i_2475++) {
                  /* WARNING: Could not recover jumptable at 0x00101145. Too many branches */
               }
               iVar4 = ( **(code**)( lVar6 + 0x78 ) )(pEVar7, 0, siglen, ctx);
               return iVar4;
            }
            goto LAB_0010119b;
         }
         if (( (ulong)ctx->md_data & 0x200 ) == 0) {
            pEVar7 = EVP_PKEY_CTX_dup(pEVar7);
            if (pEVar7 == (EVP_PKEY_CTX*)0x0) goto LAB_00100f18;
            uVar3 = ( **(code**)( *(long*)( pEVar7 + 0x78 ) + 0x78 ) )(pEVar7, sigret, siglen, ctx);
            EVP_PKEY_CTX_free(pEVar7);
         } else {
            uVar3 = ( **(code**)( lVar6 + 0x78 ) )(pEVar7, sigret, siglen, ctx);
            ctx->md_data = (void*)( (ulong)ctx->md_data | 0x800 );
         }
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_0010119b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}int EVP_DigestSign(EVP_MD_CTX *param_1, uchar *param_2, size_t *param_3, undefined8 param_4, undefined8 param_5) {
   _func_1088 *p_Var1;
   void *pvVar2;
   code *UNRECOVERED_JUMPTABLE_00;
   long lVar3;
   int iVar4;
   size_t sVar5;
   p_Var1 = param_1->update;
   if (p_Var1 == (_func_1088*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x243, "EVP_DigestSign");
      ERR_set_error(6, 0x86, 0);
   } else {
      pvVar2 = param_1->md_data;
      sVar5 = (size_t)( (uint)pvVar2 & 0x800 );
      if (( (ulong)pvVar2 & 0x800 ) == 0) {
         if (( ( *(int*)p_Var1 == 0x80 ) && ( lVar3 = *(long*)( p_Var1 + 0x30 ) ),lVar3 != 0 )) {
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *(long*)( p_Var1 + 0x28 ) + 0xa8 );
            if (UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
               if (param_2 != (uchar*)0x0) {
                  param_1->md_data = (void*)( (ulong)pvVar2 | 0x800 );
                  sVar5 = *param_3;
               }
               for (int i_2476 = 0; i_2476 < 2; i_2476++) {
                  /* WARNING: Could not recover jumptable at 0x00101241. Too many branches */
               }
               iVar4 = ( *UNRECOVERED_JUMPTABLE_00 )(lVar3, param_2, param_3, sVar5, param_4, param_5);
               return iVar4;
            }
         } else if (( *(long*)( p_Var1 + 0x78 ) != 0 ) && ( UNRECOVERED_JUMPTABLE_00 = *(code**)( *(long*)( p_Var1 + 0x78 ) + 0xd0 ) ),UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
            for (int i_2477 = 0; i_2477 < 2; i_2477++) {
               /* WARNING: Could not recover jumptable at 0x001011fb. Too many branches */
            }
            iVar4 = ( *UNRECOVERED_JUMPTABLE_00 )(param_1, param_2, param_3);
            return iVar4;
         }
         if (( param_2 != (uchar*)0x0 ) && ( iVar4 = EVP_DigestSignUpdate(param_1, param_4, param_5) ),iVar4 < 1) {
            return 0;
         }
         iVar4 = EVP_DigestSignFinal(param_1, param_2, param_3);
         return iVar4;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x248, "EVP_DigestSign");
      ERR_set_error(6, 0xbc, 0);
   }
   return 0;
}int EVP_DigestVerifyFinal(EVP_MD_CTX *ctx, uchar *sig, size_t siglen) {
   EVP_PKEY_CTX *ctx_00;
   void *pvVar1;
   bool bVar2;
   int iVar3;
   uint uVar4;
   EVP_PKEY_CTX *ctx_01;
   EVP_MD_CTX *out;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   uint local_8c;
   uchar local_88[72];
   long local_40;
   ctx_00 = (EVP_PKEY_CTX*)ctx->update;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pvVar1 = ctx->md_data;
   uVar4 = (uint)pvVar1;
   local_8c = 0;
   if (( (ulong)pvVar1 & 0x800 ) == 0) {
      if (ctx_00 == (EVP_PKEY_CTX*)0x0) {
         LAB_001014f8:ERR_new();
         ERR_set_debug("crypto/evp/m_sigver.c", 0x286, "EVP_DigestVerifyFinal");
         ERR_set_error(6, 0x86, 0);
      } else {
         if (( ( *(int*)ctx_00 == 0x100 ) && ( lVar6 = *(long*)( ctx_00 + 0x30 ) ),lVar6 != 0 )) {
            if (( (ulong)pvVar1 & 0x200 ) == 0) {
               ctx_01 = EVP_PKEY_CTX_dup(ctx_00);
               if (ctx_01 != (EVP_PKEY_CTX*)0x0) {
                  iVar3 = ( **(code**)( *(long*)( ctx_01 + 0x28 ) + 0xc0 ) )(*(undefined8*)( ctx_01 + 0x30 ), sig, siglen);
                  EVP_PKEY_CTX_free(ctx_01);
                  goto LAB_00101432;
               }
               lVar5 = *(long*)( ctx_00 + 0x28 );
               lVar6 = *(long*)( ctx_00 + 0x30 );
            }
            iVar3 = ( **(code**)( lVar5 + 0xc0 ) )(lVar6, sig, siglen);
            ctx->md_data = (void*)( (ulong)ctx->md_data | 0x800 );
            goto LAB_00101432;
         }
         lVar6 = *(long*)( ctx_00 + 0x78 );
         if (lVar6 == 0) goto LAB_001014f8;
         if (( (byte)ctx_00[0xa0] & 1 ) != 0) {
            iVar3 = ( **(code**)( lVar6 + 0xf8 ) )(ctx_00, ctx);
            if (iVar3 == 0) goto LAB_00101430;
            lVar6 = *(long*)( ctx_00 + 0x78 );
            uVar4 = (uint)ctx->md_data;
         }
         ctx_00[0xa0] = ( EVP_PKEY_CTX )((byte)ctx_00[0xa0] & 0xfe);
         if (*(code**)( lVar6 + 0x88 ) != (code*)0x0) {
            bVar2 = true;
            if (( uVar4 & 0x200 ) != 0) {
               iVar3 = ( **(code**)( lVar6 + 0x88 ) )(ctx_00, sig, siglen & 0xffffffff, ctx);
               ctx->md_data = (void*)( (ulong)ctx->md_data | 0x800 );
               goto LAB_00101432;
            }
            LAB_00101498:out = (EVP_MD_CTX*)EVP_MD_CTX_new();
            if (out != (EVP_MD_CTX*)0x0) {
               iVar3 = EVP_MD_CTX_copy_ex(out, ctx);
               if (iVar3 != 0) {
                  if (bVar2) {
                     iVar3 = ( **(code**)( *(long*)( out->update + 0x78 ) + 0x88 ) )(out->update, sig, siglen & 0xffffffff, out);
                     EVP_MD_CTX_free(out);
                     goto LAB_00101432;
                  }
                  iVar3 = EVP_DigestFinal_ex(out, local_88, &local_8c);
                  EVP_MD_CTX_free(out);
                  goto LAB_00101553;
               }
               EVP_MD_CTX_free(out);
            }
            iVar3 = -1;
            goto LAB_00101432;
         }
         bVar2 = false;
         if (( uVar4 & 0x200 ) == 0) goto LAB_00101498;
         iVar3 = EVP_DigestFinal_ex(ctx, local_88, &local_8c);
         LAB_00101553:if (iVar3 != 0) {
            iVar3 = EVP_PKEY_verify(ctx_00, sig, siglen, local_88, (ulong)local_8c);
            goto LAB_00101432;
         }
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x26c, "EVP_DigestVerifyFinal");
      ERR_set_error(6, 0xbc, 0);
   }
   LAB_00101430:iVar3 = 0;
   LAB_00101432:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_DigestVerify(EVP_MD_CTX *param_1, uchar *param_2, size_t param_3, undefined8 param_4, undefined8 param_5) {
   _func_1088 *p_Var1;
   code *UNRECOVERED_JUMPTABLE_00;
   long lVar2;
   int iVar3;
   p_Var1 = param_1->update;
   if (p_Var1 == (_func_1088*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/m_sigver.c", 0x2b4, "EVP_DigestVerify");
      ERR_set_error(6, 0x86, 0);
   } else {
      if (( (ulong)param_1->md_data & 0x800 ) != 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/m_sigver.c", 0x2b9, "EVP_DigestVerify");
         ERR_set_error(6, 0xbc, 0);
         return 0;
      }
      if (( ( *(int*)p_Var1 == 0x100 ) && ( lVar2 = *(long*)( p_Var1 + 0x30 ) ),lVar2 != 0 )) {
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *(long*)( p_Var1 + 0x28 ) + 200 );
         if (UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
            param_1->md_data = (void*)( (ulong)param_1->md_data | 0x800 );
            for (int i_2478 = 0; i_2478 < 2; i_2478++) {
               /* WARNING: Could not recover jumptable at 0x0010168f. Too many branches */
            }
            iVar3 = ( *UNRECOVERED_JUMPTABLE_00 )(lVar2, param_2, param_3);
            return iVar3;
         }
      } else if (( *(long*)( p_Var1 + 0x78 ) != 0 ) && ( UNRECOVERED_JUMPTABLE_00 = *(code**)( *(long*)( p_Var1 + 0x78 ) + 0xd8 ) ),UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
         for (int i_2479 = 0; i_2479 < 2; i_2479++) {
            /* WARNING: Could not recover jumptable at 0x00101625. Too many branches */
         }
         iVar3 = ( *UNRECOVERED_JUMPTABLE_00 )(param_1, param_2, param_3);
         return iVar3;
      }
      iVar3 = EVP_DigestVerifyUpdate(param_1, param_4, param_5);
      if (0 < iVar3) {
         iVar3 = EVP_DigestVerifyFinal(param_1, param_2, param_3);
         return iVar3;
      }
   }
   return -1;
}

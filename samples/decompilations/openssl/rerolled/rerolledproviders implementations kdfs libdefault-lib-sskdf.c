undefined1 *sskdf_settable_ctx_params(void) {
   return known_settable_ctx_params_4;
}
undefined1 *sskdf_gettable_ctx_params(void) {
   return known_gettable_ctx_params_6;
}
undefined1 *x963kdf_settable_ctx_params(void) {
   return known_settable_ctx_params_1;
}
undefined1 *x963kdf_gettable_ctx_params(void) {
   return known_gettable_ctx_params_2;
}
bool sskdf_get_ctx_params(long param_1, long *param_2) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   ulong extraout_RDX;
   long lVar4;
   undefined1 auVar5[16];
   if (param_2 == (long*)0x0) {
      return true;
   }

   if (*param_2 != 0) {
      auVar5 = OSSL_PARAM_locate(param_2, &_LC0);
      uVar3 = auVar5._8_8_;
      if (auVar5._0_8_ != 0) {
         lVar4 = -1;
         if (*(int*)( param_1 + 0x60 ) == 0) {
            lVar4 = ossl_prov_digest_md(param_1 + 0x10, 0xffffffffffffffff);
            if (lVar4 == 0) {
               ERR_new(0);
               ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x184, "sskdf_size");
               ERR_set_error(0x39, 0x81, 0);
               lVar4 = 0;
               uVar3 = extraout_RDX;
            }
 else {
               uVar1 = EVP_MD_get_size();
               uVar3 = 0;
               if (-1 < (int)uVar1) {
                  uVar3 = (ulong)uVar1;
               }

               lVar4 = (long)(int)uVar3;
            }

         }

         iVar2 = OSSL_PARAM_set_size_t(auVar5._0_8_, lVar4, uVar3);
         return iVar2 != 0;
      }

   }

   return true;
}
undefined8 sskdf_common_set_ctx_params(undefined8 *param_1, long *param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
   if (( param_2 == (long*)0x0 ) || ( *param_2 == 0 )) goto LAB_001002b0;
   iVar1 = ossl_prov_macctx_load_from_params(param_1 + 1, param_2, 0, 0, 0, uVar2);
   if (iVar1 != 0) {
      if (param_1[1] != 0) {
         uVar3 = EVP_MAC_CTX_get0_mac();
         iVar1 = EVP_MAC_is_a(uVar3, "KMAC128");
         if (iVar1 == 0) {
            uVar3 = EVP_MAC_CTX_get0_mac(param_1[1]);
            iVar1 = EVP_MAC_is_a(uVar3, "KMAC256");
            if (iVar1 == 0) goto LAB_00100198;
         }

         *(undefined4*)( param_1 + 0xc ) = 1;
      }

      LAB_00100198:lVar4 = OSSL_PARAM_locate_const(param_2, "digest");
      if (lVar4 == 0) {
         LAB_00100200:iVar1 = ossl_param_get1_octet_string(param_2, "secret", param_1 + 5, param_1 + 6);
         if (iVar1 == -1) {
            iVar1 = ossl_param_get1_octet_string(param_2, &_LC6, param_1 + 5, param_1 + 6);
         }

         if (( ( iVar1 != 0 ) && ( iVar1 = ossl_param_get1_concat_octet_string(param_2, &_LC7, param_1 + 7, param_1 + 8, 0) ),iVar1 != 0 )) {
            lVar4 = OSSL_PARAM_locate_const(param_2, "maclen");
            if (lVar4 != 0) {
               iVar1 = OSSL_PARAM_get_size_t(lVar4, &local_38);
               if (( iVar1 == 0 ) || ( local_38 == 0 )) goto LAB_001001c3;
               param_1[0xb] = local_38;
            }

            LAB_001002b0:uVar2 = 1;
            goto LAB_001001c5;
         }

      }
 else {
         iVar1 = ossl_prov_digest_load_from_params(param_1 + 2, param_2, uVar2);
         if (iVar1 != 0) {
            uVar2 = ossl_prov_digest_md(param_1 + 2);
            iVar1 = EVP_MD_xof(uVar2);
            if (iVar1 == 0) goto LAB_00100200;
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x245, "sskdf_common_set_ctx_params");
            ERR_set_error(0x39, 0xb7, 0);
         }

      }

   }

   LAB_001001c3:uVar2 = 0;
   LAB_001001c5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
undefined8 *sskdf_new(undefined8 param_1) {
   int iVar1;
   undefined8 *puVar2;
   iVar1 = ossl_prov_is_running();
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x68, "providers/implementations/kdfs/sskdf.c", 0x13c);
      if (puVar2 != (undefined8*)0x0) {
         *puVar2 = param_1;
      }

   }

   return puVar2;
}
undefined4 SSKDF_hash_kdm(EVP_MD *param_1, void *param_2, ulong param_3, void *param_4, ulong param_5, int param_6, uchar *param_7, ulong param_8) {
   uint uVar1;
   int iVar2;
   int iVar3;
   undefined4 uVar4;
   EVP_MD_CTX *out;
   EVP_MD_CTX *ctx;
   ulong uVar5;
   long in_FS_OFFSET;
   uint local_8c;
   uchar local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( 0x40000000 < param_3 ) || ( 0x40000000 < param_5 ) ) || ( 0x3fffffff < param_8 - 1 ) ) || ( iVar2 = iVar2 < 1 )) {
      uVar4 = 0;
      goto LAB_001003ed;
   }

   out = (EVP_MD_CTX*)EVP_MD_CTX_new();
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (( ( out != (EVP_MD_CTX*)0x0 ) && ( ctx != (EVP_MD_CTX*)0x0 ) ) && ( iVar3 = iVar3 != 0 )) {
      uVar5 = (ulong)iVar2;
      uVar1 = 1;
      if (param_6 == 0) {
         while (true) {
            local_8c = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
            iVar2 = EVP_MD_CTX_copy_ex(out, ctx);
            if (( ( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 ) ) || ( ( iVar2 = EVP_DigestUpdate(out, param_2, param_3) ),iVar2 == 0 || ( iVar2 = EVP_DigestUpdate(out, param_4, param_5) ),iVar2 == 0 )) break;
            if (param_8 < uVar5) goto LAB_001005f9;
            iVar2 = EVP_DigestFinal_ex(out, param_7, (uint*)0x0);
            if (iVar2 == 0) break;
            param_7 = param_7 + uVar5;
            param_8 = param_8 - uVar5;
            if (param_8 == 0) goto LAB_00100626;
            uVar1 = uVar1 + 1;
         }
;
      }
 else {
         while (true) {
            local_8c = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
            iVar2 = EVP_MD_CTX_copy_ex(out, ctx);
            if (( ( ( iVar2 == 0 ) || ( iVar2 = EVP_DigestUpdate(out, param_2, param_3) ),iVar2 == 0 ) ) || ( iVar2 = iVar2 == 0 )) break;
            if (param_8 < uVar5) goto LAB_001005f9;
            iVar2 = EVP_DigestFinal_ex(out, param_7, (uint*)0x0);
            if (iVar2 == 0) break;
            param_7 = param_7 + uVar5;
            param_8 = param_8 - uVar5;
            if (param_8 == 0) goto LAB_00100626;
            uVar1 = uVar1 + 1;
         }
;
      }

   }

   LAB_00100535:uVar4 = 0;
   LAB_00100537:EVP_MD_CTX_free(out);
   EVP_MD_CTX_free(ctx);
   OPENSSL_cleanse(local_88, 0x40);
   LAB_001003ed:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
   LAB_001005f9:iVar2 = EVP_DigestFinal_ex(out, local_88, (uint*)0x0);
   if (iVar2 == 0) goto LAB_00100535;
   memcpy(param_7, local_88, param_8);
   LAB_00100626:uVar4 = 1;
   goto LAB_00100537;
}
undefined8 x963kdf_derive(long param_1, undefined8 param_2, undefined8 param_3, long *param_4) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   iVar1 = ossl_prov_is_running();
   if (iVar1 != 0) {
      if (( ( param_4 != (long*)0x0 ) && ( *param_4 != 0 ) ) && ( iVar1 = iVar1 == 0 )) {
         return 0;
      }

      if (*(long*)( param_1 + 0x28 ) == 0) {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x214, "x963kdf_derive");
         ERR_set_error(0x39, 0x84, 0);
      }
 else if (*(long*)( param_1 + 8 ) == 0) {
         lVar2 = ossl_prov_digest_md(param_1 + 0x10);
         if (lVar2 != 0) {
            uVar3 = SSKDF_hash_kdm(lVar2, *(undefined8*)( param_1 + 0x28 ), *(undefined8*)( param_1 + 0x30 ), *(undefined8*)( param_1 + 0x38 ), *(undefined8*)( param_1 + 0x40 ), 1, param_2, param_3);
            return uVar3;
         }

         ERR_new(0);
         ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x220, "x963kdf_derive");
         ERR_set_error(0x39, 0x81, 0);
      }
 else {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x219, "x963kdf_derive");
         ERR_set_error(0x39, 0x88, 0);
      }

   }

   return 0;
}
void sskdf_reset(undefined8 *param_1) {
   undefined8 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   uVar1 = *param_1;
   EVP_MAC_CTX_free(param_1[1]);
   ossl_prov_digest_reset(param_1 + 2);
   for (int i = 0; i < 3; i++) {
      CRYPTO_clear_free(param_1[( 2*i + 5 )], param_1[( 2*i + 6 )], "providers/implementations/kdfs/sskdf.c", ( i + 330 ));
   }

   param_1[1] = 0;
   puVar3 = (undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 );
   param_1[0xc] = 0;
   uVar2 = ( ulong )(( (int)param_1 - (int)puVar3 ) + 0x68U >> 3);
   for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
   }

   *param_1 = uVar1;
   return;
}
ulong sskdf_derive(long param_1, void *param_2, ulong param_3, long *param_4) {
   ulong uVar1;
   ulong uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   long lVar6;
   undefined8 uVar7;
   ulong uVar8;
   ulong uVar9;
   undefined1 *puVar10;
   uint uVar11;
   long lVar12;
   undefined3 *puVar13;
   long in_FS_OFFSET;
   bool bVar14;
   undefined8 local_160;
   undefined1 *local_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   ulong local_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 uStack_b8;
   undefined8 local_b0;
   undefined8 uStack_a8;
   undefined8 local_a0;
   uint local_8c;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = ossl_prov_is_running();
   if (( iVar5 != 0 ) && ( ( ( param_4 == (long*)0x0 || ( *param_4 == 0 ) ) || ( iVar5 = sskdf_common_set_ctx_params(param_1, param_4) ),iVar5 != 0 ) )) {
      if (*(long*)( param_1 + 0x28 ) == 0) {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x1a6, "sskdf_derive");
         ERR_set_error(0x39, 0x84, 0);
      }
 else {
         lVar6 = ossl_prov_digest_md(param_1 + 0x10);
         if (*(long*)( param_1 + 8 ) == 0) {
            if (lVar6 != 0) {
               uVar9 = SSKDF_hash_kdm(lVar6, *(undefined8*)( param_1 + 0x28 ), *(undefined8*)( param_1 + 0x30 ), *(undefined8*)( param_1 + 0x38 ), *(undefined8*)( param_1 + 0x40 ), 0, param_2, param_3);
               goto LAB_00100c69;
            }

            ERR_new();
            uVar7 = 0x1d9;
            LAB_00100d11:ERR_set_debug("providers/implementations/kdfs/sskdf.c", uVar7, "sskdf_derive");
            ERR_set_error(0x39, 0x81, 0);
            uVar9 = 0;
            goto LAB_00100c69;
         }

         uVar7 = EVP_MAC_CTX_get0_mac();
         iVar5 = EVP_MAC_is_a(uVar7, &_LC10);
         if (iVar5 == 0) {
            if (*(int*)( param_1 + 0x60 ) == 0) {
               ERR_new();
               ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x1c6, "sskdf_derive");
               ERR_set_error(0x39, 0x89, 0);
               uVar9 = 0;
               goto LAB_00100c69;
            }

            puVar13 = &kmac_custom_str;
            iVar5 = EVP_MAC_is_a(uVar7, "KMAC128");
            local_160 = 3;
            iVar5 = ( -(uint)(iVar5 == 0) & 0xffffffe0 ) + 0xa4;
         }
 else {
            if (lVar6 == 0) {
               ERR_new();
               uVar7 = 0x1b7;
               goto LAB_00100d11;
            }

            iVar5 = EVP_MD_get_size(lVar6);
            if (iVar5 < 1) goto LAB_00100cf0;
            local_160 = 0;
            puVar13 = (undefined3*)0x0;
         }

         lVar6 = *(long*)( param_1 + 0x48 );
         if (( lVar6 == 0 ) || ( lVar12 = lVar12 == 0 )) {
            lVar12 = (long)iVar5;
            lVar6 = CRYPTO_zalloc(lVar12, "providers/implementations/kdfs/sskdf.c", 0x1cb);
            *(long*)( param_1 + 0x48 ) = lVar6;
            if (lVar6 == 0) goto LAB_00100cf0;
            *(long*)( param_1 + 0x50 ) = lVar12;
         }

         uVar1 = *(ulong*)( param_1 + 0x30 );
         uVar2 = *(ulong*)( param_1 + 0x40 );
         if (( uVar1 < 0x40000001 ) && ( uVar2 < 0x40000001 )) {
            uVar9 = 0;
            if (0x3fffffff < param_3 - 1) goto LAB_00100c69;
            uVar7 = *(undefined8*)( param_1 + 0x38 );
            uVar3 = *(undefined8*)( param_1 + 8 );
            uVar4 = *(undefined8*)( param_1 + 0x28 );
            uVar9 = *(ulong*)( param_1 + 0x58 );
            local_f0 = uVar9;
            if (puVar13 == (undefined3*)0x0) {
               LAB_00100add:iVar5 = EVP_MAC_init(uVar3, lVar6, lVar12, 0);
               if (( ( iVar5 == 0 ) || ( uVar8 = uVar8 == 0 ) ) || ( 0x40 < uVar8 )) goto LAB_00100dcb;
               puVar10 = (undefined1*)0x0;
               local_130 = local_88;
               LAB_00100b3b:uVar11 = 1;
               while (true) {
                  local_8c = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
                  lVar6 = EVP_MAC_CTX_dup(uVar3);
                  if (( ( lVar6 == 0 ) || ( iVar5 = iVar5 == 0 ) ) || ( ( iVar5 = EVP_MAC_update(lVar6, uVar4, uVar1) ),iVar5 == 0 || ( iVar5 = EVP_MAC_update(lVar6, uVar7, uVar2) ),iVar5 == 0 )) goto LAB_00100bff;
                  if (param_3 < uVar8) break;
                  iVar5 = EVP_MAC_final(lVar6, param_2, 0, param_3);
                  if (iVar5 == 0) goto LAB_00100bff;
                  param_2 = (void*)( (long)param_2 + uVar8 );
                  param_3 = param_3 - uVar8;
                  if (param_3 == 0) goto LAB_00100e50;
                  uVar11 = uVar11 + 1;
                  EVP_MAC_CTX_free(lVar6);
               }
;
               iVar5 = EVP_MAC_final(lVar6, local_130, 0, uVar8);
               if (iVar5 != 0) {
                  memcpy(param_2, local_130, param_3);
                  LAB_00100e50:uVar11 = 1;
                  goto LAB_00100c01;
               }

               LAB_00100bff:uVar11 = 0;
               LAB_00100c01:if (puVar10 == (undefined1*)0x0) goto LAB_00100dcf;
               LAB_00100c11:CRYPTO_clear_free(puVar10, uVar9, "providers/implementations/kdfs/sskdf.c", 0x12d);
            }
 else {
               OSSL_PARAM_construct_octet_string(&local_128, "custom", puVar13, local_160);
               local_c8 = local_108;
               local_e8 = local_128;
               uStack_e0 = uStack_120;
               local_d8 = local_118;
               uStack_d0 = uStack_110;
               OSSL_PARAM_construct_end(&local_128);
               local_c0 = local_128;
               uStack_b8 = uStack_120;
               local_a0 = local_108;
               local_b0 = local_118;
               uStack_a8 = uStack_110;
               iVar5 = EVP_MAC_CTX_set_params(uVar3, &local_e8);
               if (iVar5 != 0) {
                  uVar8 = param_3;
                  if (local_f0 != 0) {
                     bVar14 = param_3 != local_f0;
                     if (local_f0 - 0x14 < 0x2d) {
                        bVar14 = bVar14 && ( 0xffffefffefffeefeU >> ( local_f0 - 0x14 & 0x3f ) & 1 ) != 0;
                     }

                     uVar8 = local_f0;
                     if (bVar14) goto LAB_00100dcb;
                  }

                  local_f0 = uVar8;
                  OSSL_PARAM_construct_size_t(&local_128, &_LC0, &local_f0);
                  local_e8 = local_128;
                  uStack_e0 = uStack_120;
                  local_c8 = local_108;
                  local_d8 = local_118;
                  uStack_d0 = uStack_110;
                  iVar5 = EVP_MAC_CTX_set_params(uVar3, &local_e8);
                  if (0 < iVar5) {
                     if (local_f0 < 0x41) goto LAB_00100add;
                     puVar10 = (undefined1*)CRYPTO_zalloc(local_f0, "providers/implementations/kdfs/sskdf.c", 0xde);
                     if (puVar10 != (undefined1*)0x0) {
                        iVar5 = EVP_MAC_init(uVar3, lVar6, lVar12, 0);
                        if (( iVar5 != 0 ) && ( uVar8 = EVP_MAC_CTX_get_mac_size(uVar3) ),local_130 = puVar10,uVar8 != 0) goto LAB_00100b3b;
                        uVar11 = 0;
                        lVar6 = 0;
                        goto LAB_00100c11;
                     }

                  }

               }

               LAB_00100dcb:uVar11 = 0;
               lVar6 = 0;
               LAB_00100dcf:OPENSSL_cleanse(local_88, 0x40);
            }

            EVP_MAC_CTX_free(lVar6);
            uVar9 = (ulong)uVar11;
            goto LAB_00100c69;
         }

      }

   }

   LAB_00100cf0:uVar9 = 0;
   LAB_00100c69:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
void sskdf_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      sskdf_reset();
      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined8 *sskdf_dup(undefined8 *param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 *ptr;
   long lVar3;
   uVar1 = *param_1;
   iVar2 = ossl_prov_is_running();
   if (iVar2 == 0) {
      return (undefined8*)0x0;
   }

   ptr = (undefined8*)CRYPTO_zalloc(0x68, "providers/implementations/kdfs/sskdf.c", 0x13c);
   if (ptr == (undefined8*)0x0) {
      return (undefined8*)0x0;
   }

   lVar3 = param_1[1];
   *ptr = uVar1;
   if (lVar3 != 0) {
      lVar3 = EVP_MAC_CTX_dup();
      ptr[1] = lVar3;
      if (lVar3 == 0) goto LAB_00101010;
   }

   iVar2 = ossl_prov_memdup(param_1[7], param_1[8], ptr + 7, ptr + 8);
   if (( ( ( iVar2 != 0 ) && ( iVar2 = ossl_prov_memdup(param_1[9], param_1[10], ptr + 9, ptr + 10) ),iVar2 != 0 ) ) && ( iVar2 = iVar2 != 0 )) {
      ptr[0xb] = param_1[0xb];
      *(undefined4*)( ptr + 0xc ) = *(undefined4*)( param_1 + 0xc );
      return ptr;
   }

   LAB_00101010:sskdf_reset(ptr);
   CRYPTO_free(ptr);
   return (undefined8*)0x0;
}
bool x963kdf_get_ctx_params(long param_1, long *param_2) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   ulong extraout_RDX;
   long lVar4;
   undefined1 auVar5[16];
   if (param_2 == (long*)0x0) {
      return true;
   }

   if (*param_2 != 0) {
      auVar5 = OSSL_PARAM_locate(param_2, &_LC0);
      uVar3 = auVar5._8_8_;
      if (auVar5._0_8_ != 0) {
         lVar4 = -1;
         if (*(int*)( param_1 + 0x60 ) == 0) {
            lVar4 = ossl_prov_digest_md(param_1 + 0x10, 0xffffffffffffffff);
            if (lVar4 == 0) {
               ERR_new(0);
               ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x184, "sskdf_size");
               ERR_set_error(0x39, 0x81, 0);
               lVar4 = 0;
               uVar3 = extraout_RDX;
            }
 else {
               uVar1 = EVP_MD_get_size();
               uVar3 = 0;
               if (-1 < (int)uVar1) {
                  uVar3 = (ulong)uVar1;
               }

               lVar4 = (long)(int)uVar3;
            }

         }

         iVar2 = OSSL_PARAM_set_size_t(auVar5._0_8_, lVar4, uVar3);
         return iVar2 != 0;
      }

   }

   return true;
}
undefined8 sskdf_set_ctx_params(undefined8 *param_1, long *param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 == (long*)0x0 ) || ( *param_2 == 0 ) ) || ( uVar2 = ossl_prov_ctx_get0_libctx(*param_1) * param_2 == 0 )) goto LAB_001012b8;
   iVar1 = ossl_prov_macctx_load_from_params(param_1 + 1, param_2, 0, 0, 0, uVar2);
   if (iVar1 != 0) {
      if (param_1[1] != 0) {
         uVar3 = EVP_MAC_CTX_get0_mac();
         iVar1 = EVP_MAC_is_a(uVar3, "KMAC128");
         if (iVar1 == 0) {
            uVar3 = EVP_MAC_CTX_get0_mac(param_1[1]);
            iVar1 = EVP_MAC_is_a(uVar3, "KMAC256");
            if (iVar1 == 0) goto LAB_001011a6;
         }

         *(undefined4*)( param_1 + 0xc ) = 1;
      }

      LAB_001011a6:lVar4 = OSSL_PARAM_locate_const(param_2, "digest");
      if (lVar4 == 0) {
         LAB_001011e8:iVar1 = ossl_param_get1_octet_string(param_2, "secret", param_1 + 5, param_1 + 6);
         if (iVar1 == -1) {
            iVar1 = ossl_param_get1_octet_string(param_2, &_LC6, param_1 + 5, param_1 + 6);
         }

         if (( ( iVar1 != 0 ) && ( iVar1 = ossl_param_get1_concat_octet_string(param_2, &_LC7, param_1 + 7, param_1 + 8, 0) ),iVar1 != 0 )) {
            lVar4 = OSSL_PARAM_locate_const(param_2, "maclen");
            if (lVar4 != 0) {
               iVar1 = OSSL_PARAM_get_size_t(lVar4, &local_38);
               if (( iVar1 == 0 ) || ( local_38 == 0 )) goto LAB_00101218;
               param_1[0xb] = local_38;
            }

            LAB_001012b8:uVar2 = 1;
            goto LAB_0010121a;
         }

      }
 else {
         iVar1 = ossl_prov_digest_load_from_params(param_1 + 2, param_2, uVar2);
         if (iVar1 != 0) {
            uVar2 = ossl_prov_digest_md(param_1 + 2);
            iVar1 = EVP_MD_xof(uVar2);
            if (iVar1 == 0) goto LAB_001011e8;
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x245, "sskdf_common_set_ctx_params");
            ERR_set_error(0x39, 0xb7, 0);
         }

      }

   }

   LAB_00101218:uVar2 = 0;
   LAB_0010121a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
undefined8 x963kdf_set_ctx_params(undefined8 *param_1, long *param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 == (long*)0x0 ) || ( *param_2 == 0 ) ) || ( uVar2 = ossl_prov_ctx_get0_libctx(*param_1) * param_2 == 0 )) goto LAB_001014f8;
   iVar1 = ossl_prov_macctx_load_from_params(param_1 + 1, param_2, 0, 0, 0, uVar2);
   if (iVar1 != 0) {
      if (param_1[1] != 0) {
         uVar3 = EVP_MAC_CTX_get0_mac();
         iVar1 = EVP_MAC_is_a(uVar3, "KMAC128");
         if (iVar1 == 0) {
            uVar3 = EVP_MAC_CTX_get0_mac(param_1[1]);
            iVar1 = EVP_MAC_is_a(uVar3, "KMAC256");
            if (iVar1 == 0) goto LAB_001013e6;
         }

         *(undefined4*)( param_1 + 0xc ) = 1;
      }

      LAB_001013e6:lVar4 = OSSL_PARAM_locate_const(param_2, "digest");
      if (lVar4 == 0) {
         LAB_00101428:iVar1 = ossl_param_get1_octet_string(param_2, "secret", param_1 + 5, param_1 + 6);
         if (iVar1 == -1) {
            iVar1 = ossl_param_get1_octet_string(param_2, &_LC6, param_1 + 5, param_1 + 6);
         }

         if (( ( iVar1 != 0 ) && ( iVar1 = ossl_param_get1_concat_octet_string(param_2, &_LC7, param_1 + 7, param_1 + 8, 0) ),iVar1 != 0 )) {
            lVar4 = OSSL_PARAM_locate_const(param_2, "maclen");
            if (lVar4 != 0) {
               iVar1 = OSSL_PARAM_get_size_t(lVar4, &local_38);
               if (( iVar1 == 0 ) || ( local_38 == 0 )) goto LAB_00101458;
               param_1[0xb] = local_38;
            }

            LAB_001014f8:uVar2 = 1;
            goto LAB_0010145a;
         }

      }
 else {
         iVar1 = ossl_prov_digest_load_from_params(param_1 + 2, param_2, uVar2);
         if (iVar1 != 0) {
            uVar2 = ossl_prov_digest_md(param_1 + 2);
            iVar1 = EVP_MD_xof(uVar2);
            if (iVar1 == 0) goto LAB_00101428;
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/sskdf.c", 0x245, "sskdf_common_set_ctx_params");
            ERR_set_error(0x39, 0xb7, 0);
         }

      }

   }

   LAB_00101458:uVar2 = 0;
   LAB_0010145a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}


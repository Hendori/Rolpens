undefined8 public_from_private(long param_1, undefined8 param_2, long *param_3, long *param_4) {
   long lVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   int iVar5;
   uint uVar6;
   void *ptr;
   undefined8 uVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   long lVar11;
   void *pvVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long in_FS_OFFSET;
   void *local_78;
   ulong local_70;
   void *local_68;
   ulong local_60;
   void *local_58;
   ulong local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = *(ulong*)( *(long*)( param_1 + 8 ) + 0x28 );
   uVar9 = *(ulong*)( *(long*)( param_1 + 8 ) + 0x20 );
   iVar5 = (int)uVar10;
   iVar3 = (int)uVar9;
   ptr = CRYPTO_malloc(( iVar5 + iVar3 + iVar5 * iVar3 ) * 0x400, "crypto/ml_dsa/ml_dsa_key.c", 0x141);
   if (ptr == (void*)0x0) {
      uVar7 = 0;
   }
 else {
      local_60 = uVar9 & 0xffffffff;
      local_70 = uVar10 & 0xffffffff;
      local_78 = (void*)( local_60 * 0x400 + (long)ptr );
      local_58 = (void*)( (long)local_78 + local_70 * 0x400 );
      local_68 = ptr;
      local_50 = local_60;
      local_48 = local_70;
      iVar5 = ossl_ml_dsa_matrix_expand_A(param_2, *(undefined8*)( param_1 + 0x10 ), param_1 + 0x20, &local_58);
      if (iVar5 != 0) {
         memcpy(local_78, *(void**)( param_1 + 0xf0 ), *(long*)( param_1 + 0xf8 ) << 10);
         uVar10 = 0;
         if (local_70 != 0) {
            do {
               uVar9 = uVar10 + 1;
               ossl_ml_dsa_poly_ntt((void*)( uVar10 * 0x400 + (long)local_78 ));
               uVar10 = uVar9;
            }
 while ( uVar9 < local_70 );
         }

         uVar10 = 0;
         ossl_ml_dsa_matrix_mult_vector(&local_58, &local_78, &local_68);
         if (local_60 != 0) {
            do {
               uVar10 = uVar10 + 1;
               ossl_ml_dsa_poly_ntt_inverse();
            }
 while ( uVar10 < local_60 );
            if (local_60 != 0) {
               lVar13 = *(long*)( param_1 + 0xe0 );
               if (local_60 < 3) {
                  uVar10 = 0;
               }
 else {
                  lVar15 = 0;
                  uVar9 = 0;
                  lVar14 = 0x800;
                  uVar10 = ( local_60 - 3 & 0xfffffffffffffffe ) + 2;
                  do {
                     lVar11 = 0x400 - lVar15;
                     do {
                        uVar8 = *(int*)( (long)local_68 + lVar11 + -0x400 ) + *(int*)( lVar11 + -0x400 + lVar13 );
                        uVar6 = (int)( ( uVar8 ^ 0x7fe001 | uVar8 - 0x7fe001 ^ 0x7fe001 ) ^ uVar8 ) >> 0x1f;
                        *(uint*)( (long)local_68 + lVar11 + -0x400 ) = uVar6 & uVar8 | uVar8 - 0x7fe001 & ~uVar6;
                        uVar8 = *(int*)( (long)local_68 + lVar11 ) + *(int*)( lVar13 + lVar11 );
                        uVar6 = (int)( ( uVar8 - 0x7fe001 ^ 0x7fe001 | uVar8 ^ 0x7fe001 ) ^ uVar8 ) >> 0x1f;
                        *(uint*)( (long)local_68 + lVar11 ) = ~uVar6 & uVar8 - 0x7fe001 | uVar6 & uVar8;
                        lVar11 = lVar11 + 4;
                     }
 while ( lVar11 != lVar14 );
                     uVar9 = uVar9 + 2;
                     lVar15 = lVar15 + -0x800;
                     lVar14 = lVar14 + 0x800;
                  }
 while ( uVar9 != uVar10 );
               }

               pvVar12 = (void*)( (long)local_68 + uVar10 * 0x400 );
               lVar13 = lVar13 + uVar10 * 0x400;
               do {
                  lVar14 = 0;
                  do {
                     uVar8 = *(int*)( (long)pvVar12 + lVar14 ) + *(int*)( lVar13 + lVar14 );
                     uVar6 = (int)( ( uVar8 - 0x7fe001 ^ 0x7fe001 | uVar8 ^ 0x7fe001 ) ^ uVar8 ) >> 0x1f;
                     *(uint*)( (long)pvVar12 + lVar14 ) = ~uVar6 & uVar8 - 0x7fe001 | uVar6 & uVar8;
                     lVar14 = lVar14 + 4;
                  }
 while ( lVar14 != 0x400 );
                  uVar10 = uVar10 + 1;
                  pvVar12 = (void*)( (long)pvVar12 + 0x400 );
                  lVar13 = lVar13 + 0x400;
               }
 while ( uVar10 < local_60 );
               uVar10 = 0;
               do {
                  pvVar12 = local_68;
                  lVar13 = *param_4;
                  lVar11 = 0;
                  lVar15 = uVar10 * 0x400;
                  lVar14 = *param_3;
                  do {
                     lVar4 = lVar11 + lVar15;
                     lVar1 = lVar13 + lVar15 + lVar11;
                     lVar2 = lVar14 + lVar15 + lVar11;
                     lVar11 = lVar11 + 4;
                     ossl_ml_dsa_key_compress_power2_round(*(undefined4*)( (long)pvVar12 + lVar4 ), lVar2, lVar1);
                  }
 while ( lVar11 != 0x400 );
                  uVar10 = uVar10 + 1;
               }
 while ( uVar10 < local_60 );
            }

         }

         if (local_78 != (void*)0x0) {
            memset(local_78, 0, local_70 << 10);
         }

      }

      CRYPTO_free(ptr);
      uVar7 = 1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
undefined8 ossl_ml_dsa_key_params(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}
undefined8 ossl_ml_dsa_key_get_seed(long param_1) {
   return *(undefined8*)( param_1 + 0xb0 );
}
undefined4 ossl_ml_dsa_key_get_prov_flags(long param_1) {
   return *(undefined4*)( param_1 + 0xb8 );
}
undefined8 ossl_ml_dsa_set_prekey(long param_1, uint param_2, uint param_3, long param_4, long param_5, long param_6, long param_7) {
   long lVar1;
   if (param_1 == 0) {
      return 0;
   }

   if (*(long*)( param_1 + 0xa0 ) != 0) {
      return 0;
   }

   if (*(long*)( param_1 + 0xa8 ) != 0) {
      return 0;
   }

   if (( param_6 != 0 ) && ( *(long*)( *(long*)( param_1 + 8 ) + 0x40 ) != param_7 )) {
      return 0;
   }

   if (( param_4 != 0 ) && ( param_5 != 0x20 )) {
      return 0;
   }

   if (*(long*)( param_1 + 0xb0 ) != 0) {
      return 0;
   }

   if (param_6 != 0) {
      lVar1 = CRYPTO_memdup(param_6, param_7, "crypto/ml_dsa/ml_dsa_key.c", 0x34);
      *(long*)( param_1 + 0xa8 ) = lVar1;
      if (lVar1 == 0) goto LAB_00100494;
   }

   if (param_4 != 0) {
      lVar1 = CRYPTO_memdup(param_4, param_5, "crypto/ml_dsa/ml_dsa_key.c", 0x37);
      *(long*)( param_1 + 0xb0 ) = lVar1;
      if (lVar1 == 0) {
         LAB_00100494:CRYPTO_free(*(void**)( param_1 + 0xa8 ));
         CRYPTO_free(*(void**)( param_1 + 0xb0 ));
         *(undefined1(*) [16])( param_1 + 0xa8 ) = (undefined1[16])0x0;
         return 0;
      }

   }

   *(uint*)( param_1 + 0xb8 ) = ( param_2 | *(uint*)( param_1 + 0xb8 ) ) & ~param_3;
   return 1;
}
undefined8 ossl_ml_dsa_key_pub_alloc(long param_1) {
   long lVar1;
   void *pvVar2;
   if (*(long*)( param_1 + 0xc0 ) != 0) {
      return 0;
   }

   lVar1 = *(long*)( *(long*)( param_1 + 8 ) + 0x20 );
   pvVar2 = CRYPTO_malloc((int)( lVar1 << 10 ), "crypto/ml_dsa/ml_dsa_vector.h", 0x24);
   *(void**)( param_1 + 0xc0 ) = pvVar2;
   if (pvVar2 != (void*)0x0) {
      *(long*)( param_1 + 200 ) = lVar1;
      return 1;
   }

   return 0;
}
undefined8 ossl_ml_dsa_key_priv_alloc(long param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x20 );
   lVar3 = *(long*)( *(long*)( param_1 + 8 ) + 0x28 );
   if (*(long*)( param_1 + 0xf0 ) == 0) {
      lVar1 = lVar3 + lVar2 * 2;
      pvVar4 = CRYPTO_malloc((int)lVar1 * 0x400, "crypto/ml_dsa/ml_dsa_vector.h", 0x24);
      *(void**)( param_1 + 0xf0 ) = pvVar4;
      if (pvVar4 != (void*)0x0) {
         *(long*)( param_1 + 0xf8 ) = lVar3;
         *(long*)( param_1 + 0xe8 ) = lVar2;
         *(void**)( param_1 + 0xe0 ) = (void*)( lVar3 * 0x400 + (long)pvVar4 );
         *(void**)( param_1 + 0xd0 ) = (void*)( (long)pvVar4 + ( lVar1 - lVar2 ) * 0x400 );
         *(long*)( param_1 + 0xd8 ) = lVar2;
         return 1;
      }

   }

   return 0;
}
bool keygen_internal_constprop_0(long param_1) {
   long lVar1;
   undefined8 *puVar2;
   void *d;
   size_t cnt;
   int iVar3;
   EVP_MD_CTX *ctx;
   long in_FS_OFFSET;
   bool bVar4;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined1 local_d8;
   undefined1 local_d7;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined1 local_a8[64];
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0xb0 ) == 0) {
      bVar4 = false;
      ctx = (EVP_MD_CTX*)0x0;
      goto LAB_00100674;
   }

   lVar1 = *(long*)( param_1 + 8 );
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (( ( ctx == (EVP_MD_CTX*)0x0 ) || ( iVar3 = iVar3 == 0 ) ) || ( iVar3 = iVar3 == 0 )) {
      LAB_0010065c:bVar4 = false;
   }
 else {
      puVar2 = *(undefined8**)( param_1 + 0xb0 );
      local_f8 = *puVar2;
      uStack_f0 = puVar2[1];
      local_e8 = puVar2[2];
      uStack_e0 = puVar2[3];
      local_d8 = ( undefined1 ) * (undefined8*)( lVar1 + 0x20 );
      local_d7 = ( undefined1 ) * (undefined8*)( lVar1 + 0x28 );
      iVar3 = EVP_DigestInit_ex2(ctx, *(undefined8*)( param_1 + 0x18 ), 0);
      if (( ( iVar3 != 1 ) || ( iVar3 = iVar3 != 1 ) ) || ( iVar3 = iVar3 != 1 )) goto LAB_0010065c;
      *(undefined8*)( param_1 + 0x20 ) = local_c8;
      *(undefined8*)( param_1 + 0x28 ) = uStack_c0;
      *(undefined8*)( param_1 + 0x30 ) = local_b8;
      *(undefined8*)( param_1 + 0x38 ) = uStack_b0;
      *(undefined8*)( param_1 + 0x80 ) = local_68;
      *(undefined8*)( param_1 + 0x88 ) = uStack_60;
      *(undefined8*)( param_1 + 0x90 ) = local_58;
      *(undefined8*)( param_1 + 0x98 ) = uStack_50;
      iVar3 = ossl_ml_dsa_vector_expand_S(ctx, *(undefined8*)( param_1 + 0x18 ), *(undefined4*)( lVar1 + 0x30 ), local_a8, param_1 + 0xf0, param_1 + 0xe0);
      if (( ( iVar3 == 0 ) || ( iVar3 = public_from_private(param_1, ctx, param_1 + 0xc0, param_1 + 0xd0) ),iVar3 == 0 )) goto LAB_0010065c;
      d = *(void**)( param_1 + 0xa0 );
      cnt = *(size_t*)( *(long*)( param_1 + 8 ) + 0x48 );
      iVar3 = EVP_DigestInit_ex2(ctx, *(undefined8*)( param_1 + 0x18 ), 0);
      if (( ( iVar3 != 1 ) || ( iVar3 = iVar3 != 1 ) ) || ( iVar3 = iVar3 != 1 )) goto LAB_0010065c;
      iVar3 = ossl_ml_dsa_sk_encode(param_1);
      bVar4 = iVar3 != 0;
   }

   if (( *(long*)( param_1 + 0xb0 ) != 0 ) && ( ( *(byte*)( param_1 + 0xb8 ) & 2 ) == 0 )) {
      CRYPTO_clear_free(*(long*)( param_1 + 0xb0 ), 0x20, "crypto/ml_dsa/ml_dsa_key.c", 0x1c0);
      *(undefined8*)( param_1 + 0xb0 ) = 0;
   }

   LAB_00100674:EVP_MD_CTX_free(ctx);
   OPENSSL_cleanse(&local_f8, 0x22);
   OPENSSL_cleanse(&local_c8, 0x80);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar4;
}
void ossl_ml_dsa_key_reset(long param_1) {
   if (*(void**)( param_1 + 0xf0 ) != (void*)0x0) {
      memset(*(void**)( param_1 + 0xf0 ), 0, *(long*)( param_1 + 0xf8 ) << 10);
      if (*(void**)( param_1 + 0xe0 ) != (void*)0x0) {
         memset(*(void**)( param_1 + 0xe0 ), 0, *(long*)( param_1 + 0xe8 ) << 10);
      }

      if (*(void**)( param_1 + 0xd0 ) != (void*)0x0) {
         memset(*(void**)( param_1 + 0xd0 ), 0, *(long*)( param_1 + 0xd8 ) << 10);
      }

      CRYPTO_free(*(void**)( param_1 + 0xf0 ));
      *(undefined8*)( param_1 + 0xf0 ) = 0;
      *(undefined8*)( param_1 + 0xf8 ) = 0;
      *(undefined8*)( param_1 + 0xe0 ) = 0;
      *(undefined8*)( param_1 + 0xd0 ) = 0;
   }

   CRYPTO_free(*(void**)( param_1 + 0xc0 ));
   *(undefined8*)( param_1 + 0xc0 ) = 0;
   *(undefined8*)( param_1 + 200 ) = 0;
   OPENSSL_cleanse((void*)( param_1 + 0x80 ), 0x20);
   CRYPTO_free(*(void**)( param_1 + 0xa0 ));
   *(undefined8*)( param_1 + 0xa0 ) = 0;
   if (*(long*)( param_1 + 0xa8 ) != 0) {
      CRYPTO_clear_free(*(long*)( param_1 + 0xa8 ), *(undefined8*)( *(long*)( param_1 + 8 ) + 0x40 ), "crypto/ml_dsa/ml_dsa_key.c", 0xa4);
   }

   *(undefined8*)( param_1 + 0xa8 ) = 0;
   if (*(long*)( param_1 + 0xb0 ) != 0) {
      CRYPTO_clear_free(*(long*)( param_1 + 0xb0 ), 0x20, "crypto/ml_dsa/ml_dsa_key.c", 0xa7);
   }

   *(undefined8*)( param_1 + 0xb0 ) = 0;
   return;
}
void ossl_ml_dsa_key_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      EVP_MD_free(*(undefined8*)( (long)param_1 + 0x10 ));
      EVP_MD_free(*(undefined8*)( (long)param_1 + 0x18 ));
      ossl_ml_dsa_key_reset(param_1);
      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined8 *ossl_ml_dsa_key_new(undefined8 param_1, undefined8 param_2, undefined4 param_3) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   lVar1 = ossl_ml_dsa_params_get(param_3);
   if (lVar1 != 0) {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x100, "crypto/ml_dsa/ml_dsa_key.c", 0x57);
      if (puVar2 != (undefined8*)0x0) {
         *puVar2 = param_1;
         puVar2[1] = lVar1;
         *(undefined4*)( puVar2 + 0x17 ) = 3;
         uVar3 = EVP_MD_fetch(param_1, "SHAKE-128", param_2);
         puVar2[2] = uVar3;
         lVar1 = EVP_MD_fetch(param_1, "SHAKE-256", param_2);
         puVar2[3] = lVar1;
         if (( puVar2[2] != 0 ) && ( lVar1 != 0 )) {
            return puVar2;
         }

         ossl_ml_dsa_key_free(puVar2);
      }

   }

   return (undefined8*)0x0;
}
undefined8 *ossl_ml_dsa_key_dup(undefined8 *param_1, uint param_2) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   int iVar13;
   undefined8 *puVar14;
   long lVar15;
   long lVar16;
   if (( param_1 == (undefined8*)0x0 ) || ( ( ( param_1[0x14] == 0 && ( ( param_1[0x15] != 0 || ( param_1[0x16] != 0 ) ) ) ) || ( puVar14 = (undefined8*)CRYPTO_zalloc(0x100, "crypto/ml_dsa/ml_dsa_key.c", 0xbf) ),puVar14 == (undefined8*)0x0 ) )) {
      return (undefined8*)0x0;
   }

   lVar15 = param_1[1];
   *puVar14 = *param_1;
   puVar14[1] = lVar15;
   *(undefined4*)( puVar14 + 0x17 ) = *(undefined4*)( param_1 + 0x17 );
   if (( param_2 & 3 ) != 0) {
      lVar16 = param_1[0x14];
      if (lVar16 != 0) {
         uVar12 = param_1[9];
         uVar2 = param_1[4];
         uVar3 = param_1[5];
         uVar4 = param_1[6];
         uVar5 = param_1[7];
         uVar6 = param_1[10];
         uVar7 = param_1[0xb];
         uVar8 = param_1[0xc];
         uVar9 = param_1[0xd];
         uVar10 = param_1[0xe];
         uVar11 = param_1[0xf];
         puVar14[8] = param_1[8];
         puVar14[9] = uVar12;
         lVar1 = param_1[0x18];
         puVar14[4] = uVar2;
         puVar14[5] = uVar3;
         puVar14[6] = uVar4;
         puVar14[7] = uVar5;
         puVar14[10] = uVar6;
         puVar14[0xb] = uVar7;
         puVar14[0xc] = uVar8;
         puVar14[0xd] = uVar9;
         puVar14[0xe] = uVar10;
         puVar14[0xf] = uVar11;
         if (lVar1 != 0) {
            iVar13 = ossl_ml_dsa_key_pub_alloc(puVar14);
            if (iVar13 == 0) goto LAB_00100d80;
            memcpy((void*)puVar14[0x18], (void*)param_1[0x18], param_1[0x19] << 10);
            lVar15 = param_1[1];
            lVar16 = param_1[0x14];
         }

         lVar15 = CRYPTO_memdup(lVar16, *(undefined8*)( lVar15 + 0x48 ), "crypto/ml_dsa/ml_dsa_key.c", 0xce);
         puVar14[0x14] = lVar15;
         if (lVar15 == 0) goto LAB_00100d80;
      }

      if (( param_2 & 1 ) == 0) goto LAB_00100d30;
      lVar15 = param_1[0x15];
      if (lVar15 != 0) {
         uVar2 = param_1[0x11];
         uVar3 = param_1[0x12];
         uVar4 = param_1[0x13];
         lVar16 = param_1[0x1e];
         puVar14[0x10] = param_1[0x10];
         puVar14[0x11] = uVar2;
         puVar14[0x12] = uVar3;
         puVar14[0x13] = uVar4;
         if (lVar16 != 0) {
            iVar13 = ossl_ml_dsa_key_priv_alloc(puVar14);
            if (iVar13 == 0) goto LAB_00100d80;
            for (int i = 0; i < 3; i++) {
               memcpy((void*)puVar14[( -2*i + 30 )], (void*)param_1[( -2*i + 30 )], param_1[( -2*i + 31 )] << 10);
            }

            lVar15 = param_1[0x15];
         }

         lVar15 = CRYPTO_memdup(lVar15, *(undefined8*)( param_1[1] + 0x40 ), "crypto/ml_dsa/ml_dsa_key.c", 0xdd);
         puVar14[0x15] = lVar15;
         if (lVar15 == 0) goto LAB_00100d80;
      }

      if (param_1[0x16] != 0) {
         lVar15 = CRYPTO_memdup(param_1[0x16], 0x20, "crypto/ml_dsa/ml_dsa_key.c", 0xe2);
         puVar14[0x16] = lVar15;
         if (lVar15 == 0) {
            LAB_00100d80:ossl_ml_dsa_key_free(puVar14);
            return (undefined8*)0x0;
         }

      }

   }

   LAB_00100d30:EVP_MD_up_ref(param_1[2]);
   EVP_MD_up_ref(param_1[3]);
   uVar2 = param_1[3];
   puVar14[2] = param_1[2];
   puVar14[3] = uVar2;
   return puVar14;
}
bool ossl_ml_dsa_key_equal(long param_1, long param_2, byte param_3) {
   long lVar1;
   int iVar2;
   bool bVar3;
   lVar1 = *(long*)( param_1 + 8 );
   bVar3 = false;
   if (( lVar1 == *(long*)( param_2 + 8 ) ) && ( bVar3 = true(param_3 & 3) != 0 )) {
      if (( ( param_3 & 2 ) == 0 ) || ( ( *(void**)( param_1 + 0xa0 ) == (void*)0x0 || ( *(void**)( param_2 + 0xa0 ) == (void*)0x0 ) ) )) {
         bVar3 = (bool)( param_3 & 1 );
         if (( param_3 & 1 ) != 0) {
            if (( *(void**)( param_1 + 0xa8 ) == (void*)0x0 ) || ( *(void**)( param_2 + 0xa8 ) == (void*)0x0 )) {
               bVar3 = false;
            }
 else {
               iVar2 = memcmp(*(void**)( param_1 + 0xa8 ), *(void**)( param_2 + 0xa8 ), *(size_t*)( lVar1 + 0x40 ));
               bVar3 = iVar2 == 0;
            }

         }

      }
 else {
         iVar2 = memcmp(*(void**)( param_1 + 0xa0 ), *(void**)( param_2 + 0xa0 ), *(size_t*)( lVar1 + 0x48 ));
         bVar3 = iVar2 == 0;
      }

      return bVar3;
   }

   return bVar3;
}
bool ossl_ml_dsa_key_public_from_private(long param_1) {
   long lVar1;
   size_t cnt;
   int iVar2;
   void *ptr;
   EVP_MD_CTX *ctx;
   void *pvVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   void *local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( *(long*)( param_1 + 8 ) + 0x20 );
   ptr = CRYPTO_malloc((int)( lVar1 << 10 ), "crypto/ml_dsa/ml_dsa_vector.h", 0x24);
   local_58 = ptr;
   if (ptr == (void*)0x0) {
      bVar5 = false;
      goto LAB_00100ebf;
   }

   local_50 = lVar1;
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (( ( ( ctx == (EVP_MD_CTX*)0x0 ) || ( iVar2 = ossl_ml_dsa_key_pub_alloc(param_1) ),iVar2 == 0 ) ) || ( iVar2 = iVar2 == 0 )) {
      LAB_00100ea5:bVar5 = false;
   }
 else {
      if (lVar1 != 0) {
         lVar4 = 0;
         pvVar3 = ptr;
         do {
            iVar2 = CRYPTO_memcmp(pvVar3, (void*)( lVar4 * 0x400 + *(long*)( param_1 + 0xd0 ) ), 0x400);
            if (iVar2 != 0) goto LAB_00100ea5;
            lVar4 = lVar4 + 1;
            pvVar3 = (void*)( (long)pvVar3 + 0x400 );
         }
 while ( lVar1 != lVar4 );
      }

      iVar2 = ossl_ml_dsa_pk_encode(param_1);
      if (iVar2 == 0) goto LAB_00100ea5;
      pvVar3 = *(void**)( param_1 + 0xa0 );
      cnt = *(size_t*)( *(long*)( param_1 + 8 ) + 0x48 );
      iVar2 = EVP_DigestInit_ex2(ctx, *(undefined8*)( param_1 + 0x18 ), 0);
      if (( iVar2 != 1 ) || ( iVar2 = iVar2 != 1 )) goto LAB_00100ea5;
      iVar2 = EVP_DigestSqueeze(ctx, param_1 + 0x40, 0x40);
      bVar5 = iVar2 == 1;
   }

   CRYPTO_free(ptr);
   EVP_MD_CTX_free(ctx);
   LAB_00100ebf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar5;
}
undefined4 ossl_ml_dsa_key_pairwise_check(long param_1) {
   int iVar1;
   void *ptr;
   long lVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   undefined4 uVar6;
   long in_FS_OFFSET;
   void *local_68;
   ulong local_60;
   void *local_58;
   ulong local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(ulong*)( *(long*)( param_1 + 8 ) + 0x20 );
   if (( ( *(long*)( param_1 + 0xa0 ) == 0 ) || ( *(long*)( param_1 + 0xa8 ) == 0 ) ) || ( ptr = CRYPTO_malloc((int)uVar4 << 0xb, "crypto/ml_dsa/ml_dsa_key.c", 0x17f) ),ptr == (void*)0x0) {
      uVar6 = 0;
      goto LAB_001010ba;
   }

   lVar2 = EVP_MD_CTX_new();
   if (lVar2 == 0) {
      LAB_0010109b:uVar6 = 0;
   }
 else {
      uVar4 = uVar4 & 0xffffffff;
      lVar3 = uVar4 * 0x400;
      local_68 = ptr;
      local_60 = uVar4;
      local_58 = (void*)( lVar3 + (long)ptr );
      local_50 = uVar4;
      iVar1 = public_from_private(param_1, lVar2, &local_68, &local_58);
      if (( iVar1 == 0 ) || ( uVar4 != *(ulong*)( param_1 + 200 ) )) goto LAB_0010109b;
      if (uVar4 == 0) {
         if (*(long*)( param_1 + 0xd8 ) != 0) goto LAB_0010109b;
      }
 else {
         lVar5 = 0;
         do {
            iVar1 = CRYPTO_memcmp((void*)( (long)ptr + lVar5 ), (void*)( *(long*)( param_1 + 0xc0 ) + lVar5 ), 0x400);
            if (iVar1 != 0) goto LAB_0010109b;
            lVar5 = lVar5 + 0x400;
         }
 while ( lVar3 != lVar5 );
         if (uVar4 != *(ulong*)( param_1 + 0xd8 )) goto LAB_0010109b;
         lVar5 = 0;
         do {
            iVar1 = CRYPTO_memcmp((void*)( lVar3 + (long)ptr + lVar5 ), (void*)( *(long*)( param_1 + 0xd0 ) + lVar5 ), 0x400);
            uVar6 = 0;
            if (iVar1 != 0) goto LAB_0010109e;
            lVar5 = lVar5 + 0x400;
         }
 while ( lVar3 != lVar5 );
      }

      uVar6 = 1;
   }

   LAB_0010109e:EVP_MD_CTX_free(lVar2);
   CRYPTO_free(ptr);
   LAB_001010ba:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
ulong ossl_ml_dsa_generate_key(undefined8 *param_1) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   void *pvVar4;
   if (param_1[0x16] == 0) {
      pvVar4 = CRYPTO_malloc(0x20, "crypto/ml_dsa/ml_dsa_key.c", 0x1d0);
      param_1[0x16] = pvVar4;
      if (pvVar4 == (void*)0x0) {
         return 0;
      }

      iVar2 = RAND_priv_bytes_ex(*param_1, pvVar4, 0x20, 0);
      if (iVar2 < 1) {
         CRYPTO_free((void*)param_1[0x16]);
         param_1[0x16] = 0;
         return 0;
      }

   }

   pvVar4 = (void*)param_1[0x15];
   param_1[0x15] = 0;
   if (pvVar4 == (void*)0x0) {
      uVar3 = keygen_internal_constprop_0(param_1);
      return uVar3;
   }

   uVar1 = keygen_internal_constprop_0(param_1);
   uVar3 = (ulong)uVar1;
   if (uVar1 != 0) {
      iVar2 = memcmp((void*)param_1[0x15], pvVar4, *(size_t*)( param_1[1] + 0x40 ));
      if (iVar2 == 0) goto LAB_00101222;
      ossl_ml_dsa_key_reset(param_1);
      ERR_new();
      ERR_set_debug("crypto/ml_dsa/ml_dsa_key.c", 0x1e2, "ossl_ml_dsa_generate_key");
      ERR_set_error(0x39, 0x9e, "explicit %s private key does not match seed", *(undefined8*)param_1[1]);
   }

   uVar3 = 0;
   LAB_00101222:CRYPTO_free(pvVar4);
   return uVar3;
}
bool ossl_ml_dsa_key_matches(long param_1, int param_2) {
   return *(int*)( *(long*)( param_1 + 8 ) + 8 ) == param_2;
}
undefined8 ossl_ml_dsa_key_get_pub(long param_1) {
   return *(undefined8*)( param_1 + 0xa0 );
}
undefined8 ossl_ml_dsa_key_get_pub_len(long param_1) {
   return *(undefined8*)( *(long*)( param_1 + 8 ) + 0x48 );
}
long ossl_ml_dsa_key_get_collision_strength_bits(long param_1) {
   return (long)*(int*)( *(long*)( param_1 + 8 ) + 0x10 );
}
undefined8 ossl_ml_dsa_key_get_priv(long param_1) {
   return *(undefined8*)( param_1 + 0xa8 );
}
bool ossl_ml_dsa_key_has(undefined8 param_1, uint param_2) {
   long lVar1;
   if (( param_2 & 3 ) == 0) {
      return false;
   }

   lVar1 = ossl_ml_dsa_key_get_pub();
   if (lVar1 != 0) {
      if (( param_2 & 1 ) == 0) {
         return true;
      }

      lVar1 = ossl_ml_dsa_key_get_priv(param_1);
      return lVar1 != 0;
   }

   return false;
}
undefined8 ossl_ml_dsa_key_get_priv_len(long param_1) {
   return *(undefined8*)( *(long*)( param_1 + 8 ) + 0x40 );
}
undefined8 ossl_ml_dsa_key_get_sig_len(long param_1) {
   return *(undefined8*)( *(long*)( param_1 + 8 ) + 0x50 );
}
undefined8 ossl_ml_dsa_key_get0_libctx(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      return *param_1;
   }

   return 0;
}
undefined8 ossl_ml_dsa_key_get_name(long param_1) {
   return **(undefined8**)( param_1 + 8 );
}


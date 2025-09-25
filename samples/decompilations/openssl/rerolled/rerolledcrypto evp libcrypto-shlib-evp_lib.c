int evp_cipher_get_asn1_aead_params(undefined8 param_1, long param_2, void *param_3) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_50[8];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( param_3 == (void*)0x0 )) {
      iVar1 = 0;
   }
 else {
      iVar1 = ossl_asn1_type_get_octetstring_int(param_2, local_50, 0, 0x10);
      if (iVar1 < 1) {
         iVar1 = -1;
      }
 else {
         ossl_asn1_type_get_octetstring_int(param_2, local_50, local_48, iVar1);
         memcpy(param_3, local_48, (long)iVar1);
         *(int*)( (long)param_3 + 0x10 ) = iVar1;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 evp_cipher_set_asn1_aead_params(undefined8 param_1, long param_2, long param_3) {
   undefined8 uVar1;
   if (( param_2 != 0 ) && ( param_3 != 0 )) {
      uVar1 = ossl_asn1_type_set_octetstring_int(param_2, *(undefined4*)( param_3 + 0x14 ), param_3, *(undefined4*)( param_3 + 0x10 ));
      return uVar1;
   }

   return 0;
}
bool evp_cipher_cache_constants(long param_1) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_218;
   undefined8 uStack_210;
   undefined8 local_208;
   undefined8 uStack_200;
   undefined8 local_1f8;
   int local_1e8;
   int local_1e4;
   int local_1e0;
   int local_1dc;
   int local_1d8;
   uint local_1d4;
   undefined8 local_1d0;
   undefined8 local_1c8;
   undefined8 local_1c0;
   undefined8 local_1b8;
   undefined8 uStack_1b0;
   undefined8 local_1a8;
   undefined8 uStack_1a0;
   undefined8 local_198;
   undefined8 local_190;
   undefined8 uStack_188;
   undefined8 local_180;
   undefined8 uStack_178;
   undefined8 local_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 uStack_138;
   undefined8 local_130;
   undefined8 uStack_128;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 uStack_e8;
   undefined8 local_e0;
   undefined8 uStack_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 uStack_98;
   undefined8 local_90;
   undefined8 uStack_88;
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
   local_1e8 = 0;
   local_1e4 = 0;
   local_1e0 = 0;
   local_1dc = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 0;
   local_1c0 = 0;
   local_1d4 = 0;
   OSSL_PARAM_construct_size_t(&local_218, "blocksize", &local_1c8);
   local_1b8 = local_218;
   uStack_1b0 = uStack_210;
   local_1a8 = local_208;
   uStack_1a0 = uStack_200;
   local_198 = local_1f8;
   OSSL_PARAM_construct_size_t(&local_218, "ivlen", &local_1d0);
   local_190 = local_218;
   uStack_188 = uStack_210;
   local_180 = local_208;
   uStack_178 = uStack_200;
   local_170 = local_1f8;
   OSSL_PARAM_construct_size_t(&local_218, "keylen", &local_1c0);
   local_168 = local_218;
   uStack_160 = uStack_210;
   local_158 = local_208;
   uStack_150 = uStack_200;
   local_148 = local_1f8;
   OSSL_PARAM_construct_uint(&local_218, &_LC3, &local_1d4);
   local_140 = local_218;
   uStack_138 = uStack_210;
   local_130 = local_208;
   uStack_128 = uStack_200;
   local_120 = local_1f8;
   OSSL_PARAM_construct_int(&local_218, &_LC4, &local_1e8);
   local_118 = local_218;
   uStack_110 = uStack_210;
   local_108 = local_208;
   uStack_100 = uStack_200;
   local_f8 = local_1f8;
   OSSL_PARAM_construct_int(&local_218, "custom-iv", &local_1e4);
   local_f0 = local_218;
   uStack_e8 = uStack_210;
   local_e0 = local_208;
   uStack_d8 = uStack_200;
   local_d0 = local_1f8;
   OSSL_PARAM_construct_int(&local_218, &_LC6, &local_1e0);
   local_c8 = local_218;
   uStack_c0 = uStack_210;
   local_b8 = local_208;
   uStack_b0 = uStack_200;
   local_a8 = local_1f8;
   OSSL_PARAM_construct_int(&local_218, "tls-multi", &local_1dc);
   local_a0 = local_218;
   uStack_98 = uStack_210;
   local_90 = local_208;
   uStack_88 = uStack_200;
   local_80 = local_1f8;
   OSSL_PARAM_construct_int(&local_218, "has-randkey", &local_1d8);
   local_58 = local_1f8;
   local_78 = local_218;
   uStack_70 = uStack_210;
   local_68 = local_208;
   uStack_60 = uStack_200;
   OSSL_PARAM_construct_end(&local_218);
   local_50 = local_218;
   uStack_48 = uStack_210;
   local_30 = local_1f8;
   local_40 = local_208;
   uStack_38 = uStack_200;
   iVar1 = evp_do_ciph_getparams(param_1, &local_1b8);
   if (0 < iVar1) {
      *(int*)( param_1 + 4 ) = (int)local_1c8;
      *(int*)( param_1 + 0xc ) = (int)local_1d0;
      *(int*)( param_1 + 8 ) = (int)local_1c0;
      uVar2 = (ulong)local_1d4;
      *(ulong*)( param_1 + 0x10 ) = uVar2;
      if (local_1e8 != 0) {
         uVar2 = ( ulong )(local_1d4 | 0x200000);
         *(ulong*)( param_1 + 0x10 ) = uVar2;
      }

      if (local_1e4 != 0) {
         uVar2 = uVar2 | 0x10;
         *(ulong*)( param_1 + 0x10 ) = uVar2;
      }

      if (local_1e0 != 0) {
         uVar2 = uVar2 | 0x4000;
         *(ulong*)( param_1 + 0x10 ) = uVar2;
      }

      if (local_1dc != 0) {
         uVar2 = uVar2 | 0x400000;
         *(ulong*)( param_1 + 0x10 ) = uVar2;
      }

      if (*(long*)( param_1 + 0xb0 ) != 0) {
         uVar2 = uVar2 | 0x100000;
         *(ulong*)( param_1 + 0x10 ) = uVar2;
      }

      if (local_1d8 != 0) {
         *(ulong*)( param_1 + 0x10 ) = uVar2 | 0x200;
      }

      uVar3 = EVP_CIPHER_gettable_ctx_params(param_1);
      lVar4 = OSSL_PARAM_locate_const(uVar3, "algorithm-id-params");
      if (lVar4 != 0) {
         *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) | 0x1000000;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0 < iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 EVP_CIPHER_get_block_size(long param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined4*)( param_1 + 4 );
   }

   return uVar1;
}
undefined8 EVP_CIPHER_CTX_get_block_size(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1 != (undefined8*)0x0) {
      uVar1 = EVP_CIPHER_get_block_size(*param_1);
      return uVar1;
   }

   return 0;
}
undefined4 EVP_CIPHER_impl_ctx_size(long param_1) {
   return *(undefined4*)( param_1 + 0x38 );
}
int EVP_Cipher(EVP_CIPHER_CTX *c, uchar *out, uchar *in, uint inl) {
   EVP_CIPHER *pEVar1;
   int iVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   void *ptr;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( c == (EVP_CIPHER_CTX*)0x0 ) || ( pEVar1 = c.cipher ),pEVar1 == (EVP_CIPHER*)0x0) {
      iVar2 = 0;
   }
 else {
      if (pEVar1[1].do_cipher == (_func_1090*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001005b3. Too many branches */
            /* WARNING: Treating indirect jump as call */
            iVar2 = ( *pEVar1.cleanup )(c);
            return iVar2;
         }

         goto LAB_00100618;
      }

      local_38 = 0;
      iVar2 = EVP_CIPHER_CTX_get_block_size();
      lVar5 = (long)iVar2;
      iVar2 = 0;
      if (lVar5 != 0) {
         pEVar1 = c.cipher;
         if (*(code**)( pEVar1 + 2 ) == (code*)0x0) {
            if (in == (uchar*)0x0) {
               if (lVar5 == 1) {
                  lVar5 = 0;
               }

               iVar2 = ( *(code*)pEVar1[1].app_data )(c[1].engine, out, &local_38, lVar5);
            }
 else {
               ptr = (void*)( (long)(ulong)inl + lVar5 );
               if (lVar5 == 1) {
                  ptr = (void*)(ulong)inl;
               }

               iVar2 = ( *pEVar1[1].ctrl )((EVP_CIPHER_CTX*)c[1].engine, (int)out, (int)&local_38, ptr);
            }

         }
 else {
            uVar4 = (ulong)inl + lVar5;
            if (lVar5 == 1) {
               uVar4 = (ulong)inl;
            }

            iVar3 = ( **(code**)( pEVar1 + 2 ) )(c[1].engine, out, &local_38, uVar4, in);
            iVar2 = -1;
            if (iVar3 != 0) {
               iVar2 = (int)local_38;
            }

         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   LAB_00100618:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
EVP_CIPHER *EVP_CIPHER_CTX_cipher(EVP_CIPHER_CTX *ctx) {
   if (ctx != (EVP_CIPHER_CTX*)0x0) {
      return ctx.cipher;
   }

   return (EVP_CIPHER*)0x0;
}
undefined8 EVP_CIPHER_CTX_get0_cipher(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      return *param_1;
   }

   return 0;
}
long EVP_CIPHER_CTX_get1_cipher(long *param_1) {
   long lVar1;
   int iVar2;
   if (( param_1 != (long*)0x0 ) && ( lVar1 = lVar1 != 0 )) {
      iVar2 = EVP_CIPHER_up_ref(lVar1);
      if (iVar2 != 0) {
         return lVar1;
      }

   }

   return 0;
}
undefined4 EVP_CIPHER_CTX_is_encrypting(long param_1) {
   return *(undefined4*)( param_1 + 0x10 );
}
undefined8 EVP_CIPHER_get_flags(long param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0x10 );
   }

   return uVar1;
}
void *EVP_CIPHER_CTX_get_app_data(EVP_CIPHER_CTX *ctx) {
   return ctx.app_data;
}
void EVP_CIPHER_CTX_set_app_data(EVP_CIPHER_CTX *ctx, void *data) {
   ctx.app_data = data;
   return;
}
undefined8 EVP_CIPHER_CTX_get_cipher_data(long param_1) {
   return *(undefined8*)( param_1 + 0x78 );
}
undefined8 EVP_CIPHER_CTX_set_cipher_data(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x78 );
   *(undefined8*)( param_1 + 0x78 ) = param_2;
   return uVar1;
}
undefined4 EVP_CIPHER_get_iv_length(long param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined4*)( param_1 + 0xc );
   }

   return uVar1;
}
int EVP_CIPHER_CTX_get_iv_length(EVP_CIPHER_CTX *param_1) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   int local_84;
   long local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1.cipher == (EVP_CIPHER*)0x0) {
      iVar1 = 0;
      goto LAB_00100736;
   }

   iVar1 = *(int*)&param_1.field_0x6c;
   if (-1 < *(int*)&param_1.field_0x6c) goto LAB_00100736;
   local_84 = EVP_CIPHER_get_iv_length();
   local_80 = (long)local_84;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   if (param_1.cipher[2].get_asn1_parameters == (_func_1093*)0x0) {
      uVar2 = EVP_CIPHER_get_flags();
      if (( ( uVar2 & 0x800 ) != 0 ) && ( iVar1 = iVar1 < 1 )) goto LAB_00100822;
   }
 else {
      OSSL_PARAM_construct_size_t(&local_b8, "ivlen", &local_80);
      local_78._8_8_ = uStack_b0;
      local_78._0_8_ = local_b8;
      local_58._0_8_ = local_98;
      local_68._8_8_ = uStack_a0;
      local_68._0_8_ = local_a8;
      iVar1 = evp_do_ciph_ctx_getparams(param_1.cipher, param_1[1].engine, local_78);
      if (iVar1 < 1) {
         if (iVar1 != -1) {
            LAB_00100822:iVar1 = -1;
            goto LAB_00100736;
         }

      }
 else {
         iVar1 = OSSL_PARAM_modified(local_78);
         if (( iVar1 != 0 ) && ( iVar1 = iVar1 == 0 )) goto LAB_00100822;
      }

   }

   *(int*)&param_1.field_0x6c = local_84;
   iVar1 = local_84;
   LAB_00100736:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
int EVP_CIPHER_get_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type) {
   uint max_len;
   uint uVar1;
   int iVar2;
   long in_FS_OFFSET;
   uchar auStack_48[24];
   long local_30;
   uVar1 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (type != (ASN1_TYPE*)0x0) {
      max_len = EVP_CIPHER_CTX_get_iv_length();
      if (max_len < 0x11) {
         uVar1 = ASN1_TYPE_get_octetstring(type, auStack_48, max_len);
         if (max_len == uVar1) {
            iVar2 = EVP_CipherInit_ex(c, (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, auStack_48, -1);
            if (iVar2 != 0) goto LAB_001008dc;
         }

      }

      uVar1 = 0xffffffff;
   }

   LAB_001008dc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong EVP_CIPHER_CTX_get_tag_length(undefined8 *param_1) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   ulong local_70;
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
   local_70 = 0;
   OSSL_PARAM_construct_size_t(local_a8, "taglen", &local_70);
   local_48._0_8_ = local_88;
   iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_68);
   uVar2 = local_70 & 0xffffffff;
   if (iVar1 != 1) {
      uVar2 = 0;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 *EVP_CIPHER_CTX_original_iv(undefined8 *param_1) {
   int iVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined8 *local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = param_1 + 3;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   OSSL_PARAM_construct_octet_ptr(local_a8, &_LC11, &local_70, 0x10);
   local_48._0_8_ = local_88;
   iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_68);
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = local_70;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int EVP_CIPHER_set_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type) {
   uint len;
   int iVar1;
   int iVar2;
   uchar *data;
   char *pcVar3;
   long in_FS_OFFSET;
   undefined1 auStack_c0[32];
   undefined8 uStack_a0;
   char *pcStack_88;
   undefined1 auStack_80[16];
   undefined1 auStack_70[16];
   undefined1 auStack_60[16];
   undefined1 auStack_50[16];
   undefined1 auStack_40[16];
   long lStack_28;
   ASN1_TYPE *pAStack_20;
   if (type == (ASN1_TYPE*)0x0) {
      return 0;
   }

   pAStack_20 = (ASN1_TYPE*)0x100ab8;
   data = (uchar*)EVP_CIPHER_CTX_original_iv();
   pAStack_20 = (ASN1_TYPE*)0x100ac3;
   len = EVP_CIPHER_CTX_get_iv_length(c);
   if (len < 0x11) {
      iVar1 = ASN1_TYPE_set_octetstring(type, data, len);
      return iVar1;
   }

   pcVar3 = "assertion failed: j <= sizeof(c->iv)";
   pAStack_20 = (ASN1_TYPE*)0x100afb;
   OPENSSL_die("assertion failed: j <= sizeof(c->iv)", "crypto/evp/evp_lib.c", 0x4b);
   lStack_28 = *(long*)( in_FS_OFFSET + 0x28 );
   pcStack_88 = pcVar3 + 0x28;
   auStack_80 = (undefined1[16])0x0;
   auStack_70 = (undefined1[16])0x0;
   auStack_60 = (undefined1[16])0x0;
   auStack_50 = (undefined1[16])0x0;
   auStack_40 = (undefined1[16])0x0;
   pAStack_20 = type;
   OSSL_PARAM_construct_octet_ptr(auStack_c0, "updated-iv", &pcStack_88, 0x10);
   auStack_60._0_8_ = uStack_a0;
   iVar1 = evp_do_ciph_ctx_getparams(*(undefined8*)pcVar3, *(undefined8*)( pcVar3 + 0xb0 ), auStack_80);
   iVar2 = 0;
   if (iVar1 != 0) {
      iVar2 = (int)pcStack_88;
   }

   if (lStack_28 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 *EVP_CIPHER_CTX_iv(undefined8 *param_1) {
   int iVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined8 *local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = param_1 + 5;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   OSSL_PARAM_construct_octet_ptr(local_a8, "updated-iv", &local_70, 0x10);
   local_48._0_8_ = local_88;
   iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_68);
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = local_70;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 *EVP_CIPHER_CTX_iv_noconst(undefined8 *param_1) {
   int iVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined8 *local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = param_1 + 5;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   OSSL_PARAM_construct_octet_ptr(local_a8, "updated-iv", &local_70, 0x10);
   local_48._0_8_ = local_88;
   iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_68);
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = local_70;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool EVP_CIPHER_CTX_get_updated_iv(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_98[32];
   undefined8 local_78;
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
   OSSL_PARAM_construct_octet_string(local_98, "updated-iv", param_2, param_3);
   local_48._0_8_ = local_78;
   iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_68);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0 < iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool EVP_CIPHER_CTX_get_original_iv(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_98[32];
   undefined8 local_78;
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
   OSSL_PARAM_construct_octet_string(local_98, &_LC11, param_2, param_3);
   local_48._0_8_ = local_78;
   iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_68);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0 < iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long EVP_CIPHER_CTX_buf_noconst(long param_1) {
   return param_1 + 0x38;
}
undefined4 EVP_CIPHER_CTX_get_num(undefined8 *param_1) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined4 local_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6c = *(undefined4*)( param_1 + 0xb );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   OSSL_PARAM_construct_uint(local_a8, &_LC15, &local_6c);
   local_48._0_8_ = local_88;
   iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_68);
   uVar2 = local_6c;
   if (iVar1 == 0) {
      uVar2 = 0xffffffff;
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
bool EVP_CIPHER_CTX_set_num(undefined8 *param_1, undefined4 param_2) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined4 local_6c;
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
   local_6c = param_2;
   OSSL_PARAM_construct_uint(local_a8, &_LC15, &local_6c);
   local_48._0_8_ = local_88;
   iVar1 = evp_do_ciph_ctx_setparams(*param_1, param_1[0x16], local_68);
   if (iVar1 != 0) {
      *(undefined4*)( param_1 + 0xb ) = local_6c;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1 != 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 EVP_CIPHER_get_key_length(long param_1) {
   return *(undefined4*)( param_1 + 8 );
}
ulong EVP_CIPHER_CTX_get_key_length(long *param_1) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined1 local_b8[32];
   undefined8 local_98;
   ulong local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_1 == 0) {
      uVar2 = 0;
   }
 else {
      uVar2 = ( ulong ) * (uint*)( param_1 + 0xd );
      if (( (int)*(uint*)( param_1 + 0xd ) < 1 ) && ( *(long*)( *param_1 + 0x78 ) != 0 )) {
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         local_48 = (undefined1[16])0x0;
         local_38 = (undefined1[16])0x0;
         OSSL_PARAM_construct_size_t(local_b8, "keylen", &local_80);
         local_58._0_8_ = local_98;
         iVar1 = evp_do_ciph_ctx_getparams(*param_1, param_1[0x16], local_78);
         if (0 < iVar1) {
            iVar1 = OSSL_PARAM_get_int(local_78, param_1 + 0xd);
            if (iVar1 != 0) {
               *(int*)( param_1 + 0xd ) = (int)local_80;
               uVar2 = local_80 & 0xffffffff;
               goto LAB_00100ff6;
            }

         }

         uVar2 = 0xffffffff;
      }

   }

   LAB_00100ff6:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 EVP_CIPHER_get_nid(undefined4 *param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 != (undefined4*)0x0) {
      uVar1 = *param_1;
   }

   return uVar1;
}
int EVP_CIPHER_get_type(void) {
   int iVar1;
   ASN1_OBJECT *a;
   long lVar2;
   iVar1 = EVP_CIPHER_get_nid();
   if (iVar1 == 0x1a5) {
      return 0x1a5;
   }

   if (iVar1 < 0x1a6) {
      if (iVar1 != 0x3d) {
         if (iVar1 < 0x3e) {
            if (iVar1 == 0x1e) {
               return 0x1e;
            }

            if (iVar1 == 0x25) {
               return 0x25;
            }

            if (iVar1 == 5) {
               return 5;
            }

         }
 else {
            if (( iVar1 == 0x62 ) || ( iVar1 == 0xa6 )) {
               return 0x25;
            }

            if (iVar1 == 0x61) {
               return 5;
            }

         }

         goto LAB_00101156;
      }

      switchD_00101129_caseD_290:iVar1 = 0x1e;
   }
 else {
      if (0x293 < iVar1) {
         LAB_00101156:a = OBJ_nid2obj(iVar1);
         lVar2 = OBJ_get0_data(a);
         if (lVar2 == 0) {
            iVar1 = 0;
         }

         ASN1_OBJECT_free(a);
         return iVar1;
      }

      if (iVar1 < 0x28a) {
         if (iVar1 == 0x1a9) {
            return 0x1a9;
         }

         if (iVar1 == 0x1ad) {
            return 0x1ad;
         }

         goto LAB_00101156;
      }

      switch (iVar1) {
         case 0x28b:
         case 0x28e:
      iVar1 = 0x1a9;
      break;
         case 0x28c:
         case 0x28f:
      iVar1 = 0x1ad;
      break;
         default:
      iVar1 = 0x1a5;
      break;
         case 0x290:
         case 0x291:
         case 0x292:
         case 0x293:
      goto switchD_00101129_caseD_290;
      }

   }

   return iVar1;
}
void EVP_CIPHER_CTX_get_nid(undefined8 *param_1) {
   EVP_CIPHER_get_nid(*param_1);
   return;
}
undefined4 evp_cipher_get_number(long param_1) {
   return *(undefined4*)( param_1 + 0x60 );
}
void EVP_CIPHER_get0_name(long param_1) {
   int n;
   if (*(long*)( param_1 + 0x68 ) != 0) {
      return;
   }

   n = EVP_CIPHER_get_nid();
   OBJ_nid2sn(n);
   return;
}
undefined8 EVP_CIPHER_is_a(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }

   if (*(long*)( param_1 + 0x78 ) != 0) {
      uVar1 = evp_is_a(*(long*)( param_1 + 0x78 ), *(undefined4*)( param_1 + 0x60 ), 0, param_2);
      return uVar1;
   }

   uVar1 = EVP_CIPHER_get0_name();
   uVar1 = evp_is_a(0, 0, uVar1, param_2);
   return uVar1;
}
void EVP_CIPHER_get0_description(long param_1) {
   int n;
   if (*(long*)( param_1 + 0x70 ) != 0) {
      return;
   }

   n = EVP_CIPHER_get_nid();
   OBJ_nid2ln(n);
   return;
}
undefined8 EVP_CIPHER_names_do_all(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x78 ) == 0) {
      return 1;
   }

   uVar1 = evp_names_do_all(*(long*)( param_1 + 0x78 ), *(undefined4*)( param_1 + 0x60 ), param_2, param_3);
   return uVar1;
}
undefined8 EVP_CIPHER_get0_provider(long param_1) {
   return *(undefined8*)( param_1 + 0x78 );
}
uint EVP_CIPHER_get_mode(void) {
   uint uVar1;
   uVar1 = EVP_CIPHER_get_flags();
   return uVar1 & 0xf0007;
}
undefined4 evp_md_get_number(long param_1) {
   return *(undefined4*)( param_1 + 0x58 );
}
undefined8 EVP_MD_names_do_all(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x70 ) == 0) {
      return 1;
   }

   uVar1 = evp_names_do_all(*(long*)( param_1 + 0x70 ), *(undefined4*)( param_1 + 0x58 ), param_2, param_3);
   return uVar1;
}
undefined8 EVP_MD_get0_provider(long param_1) {
   return *(undefined8*)( param_1 + 0x70 );
}
undefined4 EVP_MD_get_type(undefined4 *param_1) {
   return *param_1;
}
void EVP_MD_get0_description(long param_1) {
   int n;
   if (*(long*)( param_1 + 0x68 ) != 0) {
      return;
   }

   n = EVP_MD_get_type();
   OBJ_nid2ln(n);
   return;
}
char *EVP_MD_get0_name(long param_1) {
   int n;
   char *pcVar1;
   if (param_1 == 0) {
      return (char*)0x0;
   }

   if (*(char**)( param_1 + 0x60 ) != (char*)0x0) {
      return *(char**)( param_1 + 0x60 );
   }

   n = EVP_MD_get_type();
   pcVar1 = OBJ_nid2sn(n);
   return pcVar1;
}
undefined8 EVP_MD_is_a(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }

   if (*(long*)( param_1 + 0x70 ) != 0) {
      uVar1 = evp_is_a(*(long*)( param_1 + 0x70 ), *(undefined4*)( param_1 + 0x58 ), 0, param_2);
      return uVar1;
   }

   uVar1 = EVP_MD_get0_name();
   uVar1 = evp_is_a(0, 0, uVar1, param_2);
   return uVar1;
}
undefined4 EVP_MD_get_pkey_type(long param_1) {
   return *(undefined4*)( param_1 + 4 );
}
undefined4 EVP_MD_get_block_size(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 0x48 );
   }

   ERR_new();
   ERR_set_debug("crypto/evp/evp_lib.c", 0x322, "EVP_MD_get_block_size");
   ERR_set_error(6, 0x9f, 0);
   return 0xffffffff;
}
undefined4 EVP_MD_get_size(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 8 );
   }

   ERR_new();
   ERR_set_debug("crypto/evp/evp_lib.c", 0x32b, "EVP_MD_get_size");
   ERR_set_error(6, 0x9f, 0);
   return 0xffffffff;
}
undefined8 EVP_MD_get_flags(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}
uint EVP_MD_xof(long param_1) {
   ulong uVar1;
   if (param_1 != 0) {
      uVar1 = EVP_MD_get_flags();
      return ( uint )(uVar1 >> 1) & 1;
   }

   return 0;
}
void EVP_MD_meth_new(undefined4 param_1, undefined4 param_2) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)evp_md_new();
   if (puVar1 != (undefined4*)0x0) {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[6] = 2;
   }

   return;
}
undefined8 *EVP_MD_meth_dup(undefined8 *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_1[0xe] == 0) {
      puVar3 = (undefined8*)EVP_MD_meth_new(*(undefined4*)param_1, *(undefined4*)( (long)param_1 + 4 ));
      if (puVar3 != (undefined8*)0x0) {
         uVar2 = param_1[1];
         uVar1 = *(undefined4*)( puVar3 + 0xf );
         *puVar3 = *param_1;
         puVar3[1] = uVar2;
         for (int i = 0; i < 14; i++) {
            uVar2 = param_1[( 2*i + 3 )];
            puVar3[( 2*i + 2 )] = param_1[( 2*i + 2 )];
            puVar3[( 2*i + 3 )] = uVar2;
         }

         puVar3[0x1e] = param_1[0x1e];
         *(undefined4*)( puVar3 + 0xf ) = uVar1;
         *(undefined4*)( puVar3 + 3 ) = 2;
      }

      return puVar3;
   }

   return (undefined8*)0x0;
}
void evp_md_free_int(void *param_1) {
   CRYPTO_free(*(void**)( (long)param_1 + 0x60 ));
   ossl_provider_free(*(undefined8*)( (long)param_1 + 0x70 ));
   CRYPTO_free(param_1);
   return;
}
void EVP_MD_meth_free(long param_1) {
   if (( param_1 != 0 ) && ( *(int*)( param_1 + 0x18 ) == 2 )) {
      evp_md_free_int();
      return;
   }

   return;
}
bool EVP_MD_meth_set_input_blocksize(long param_1, undefined4 param_2) {
   bool bVar1;
   bVar1 = *(int*)( param_1 + 0x48 ) == 0;
   if (bVar1) {
      *(undefined4*)( param_1 + 0x48 ) = param_2;
   }

   return bVar1;
}
bool EVP_MD_meth_set_result_size(long param_1, undefined4 param_2) {
   bool bVar1;
   bVar1 = *(int*)( param_1 + 8 ) == 0;
   if (bVar1) {
      *(undefined4*)( param_1 + 8 ) = param_2;
   }

   return bVar1;
}
bool EVP_MD_meth_set_app_datasize(long param_1, undefined4 param_2) {
   bool bVar1;
   bVar1 = *(int*)( param_1 + 0x4c ) == 0;
   if (bVar1) {
      *(undefined4*)( param_1 + 0x4c ) = param_2;
   }

   return bVar1;
}
bool EVP_MD_meth_set_flags(long param_1, undefined8 param_2) {
   bool bVar1;
   bVar1 = *(long*)( param_1 + 0x10 ) == 0;
   if (bVar1) {
      *(undefined8*)( param_1 + 0x10 ) = param_2;
   }

   return bVar1;
}
undefined8 EVP_MD_meth_set_init(long param_1, undefined8 param_2) {
   if (*(long*)( param_1 + 0x20 ) != 0) {
      return 0;
   }

   *(undefined8*)( param_1 + 0x20 ) = param_2;
   return 1;
}
undefined8 EVP_MD_meth_set_update(long param_1, undefined8 param_2) {
   if (*(long*)( param_1 + 0x28 ) != 0) {
      return 0;
   }

   *(undefined8*)( param_1 + 0x28 ) = param_2;
   return 1;
}
undefined8 EVP_MD_meth_set_final(long param_1, undefined8 param_2) {
   if (*(long*)( param_1 + 0x30 ) != 0) {
      return 0;
   }

   *(undefined8*)( param_1 + 0x30 ) = param_2;
   return 1;
}
undefined8 EVP_MD_meth_set_copy(long param_1, undefined8 param_2) {
   if (*(long*)( param_1 + 0x38 ) != 0) {
      return 0;
   }

   *(undefined8*)( param_1 + 0x38 ) = param_2;
   return 1;
}
undefined8 EVP_MD_meth_set_cleanup(long param_1, undefined8 param_2) {
   if (*(long*)( param_1 + 0x40 ) != 0) {
      return 0;
   }

   *(undefined8*)( param_1 + 0x40 ) = param_2;
   return 1;
}
undefined8 EVP_MD_meth_set_ctrl(long param_1, undefined8 param_2) {
   if (*(long*)( param_1 + 0x50 ) != 0) {
      return 0;
   }

   *(undefined8*)( param_1 + 0x50 ) = param_2;
   return 1;
}
undefined4 EVP_MD_meth_get_input_blocksize(long param_1) {
   return *(undefined4*)( param_1 + 0x48 );
}
undefined4 EVP_MD_meth_get_result_size(long param_1) {
   return *(undefined4*)( param_1 + 8 );
}
undefined4 EVP_MD_meth_get_app_datasize(long param_1) {
   return *(undefined4*)( param_1 + 0x4c );
}
undefined8 EVP_MD_meth_get_flags(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}
undefined8 EVP_MD_meth_get_init(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}
undefined8 EVP_MD_meth_get_update(long param_1) {
   return *(undefined8*)( param_1 + 0x28 );
}
undefined8 EVP_MD_meth_get_final(long param_1) {
   return *(undefined8*)( param_1 + 0x30 );
}
undefined8 EVP_MD_meth_get_copy(long param_1) {
   return *(undefined8*)( param_1 + 0x38 );
}
undefined8 EVP_MD_meth_get_cleanup(long param_1) {
   return *(undefined8*)( param_1 + 0x40 );
}
undefined8 EVP_MD_meth_get_ctrl(long param_1) {
   return *(undefined8*)( param_1 + 0x50 );
}
EVP_MD *EVP_MD_CTX_md(EVP_MD_CTX *ctx) {
   if (ctx != (EVP_MD_CTX*)0x0) {
      return ctx.digest;
   }

   return (EVP_MD*)0x0;
}
undefined8 EVP_MD_CTX_get0_md(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      return *param_1;
   }

   return 0;
}
long EVP_MD_CTX_get1_md(long *param_1) {
   long lVar1;
   int iVar2;
   if (( param_1 != (long*)0x0 ) && ( lVar1 = lVar1 != 0 )) {
      iVar2 = EVP_MD_up_ref(lVar1);
      if (iVar2 != 0) {
         return lVar1;
      }

   }

   return 0;
}
ulong EVP_MD_CTX_get_size_ex(undefined8 param_1) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined1 local_b8[32];
   undefined8 local_98;
   ulong local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = EVP_MD_CTX_gettable_params();
   if (( lVar2 == 0 ) || ( lVar2 = lVar2 == 0 )) {
      uVar4 = EVP_MD_CTX_get0_md(param_1);
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar3 = EVP_MD_get_size(uVar4);
         return uVar3;
      }

   }
 else {
      local_78 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_48 = (undefined1[16])0x0;
      local_38 = (undefined1[16])0x0;
      local_80 = 0;
      OSSL_PARAM_construct_size_t(local_b8, &_LC16, &local_80);
      local_58._0_8_ = local_98;
      iVar1 = EVP_MD_CTX_get_params(param_1, local_78);
      uVar3 = 0xffffffff;
      if (( iVar1 == 1 ) && ( uVar3 = local_80 - 1 < 0xfffffffffffffffe )) {
         uVar3 = local_80 & 0xffffffff;
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar3;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_MD_CTX_get_pkey_ctx(long param_1) {
   return *(undefined8*)( param_1 + 0x28 );
}
undefined8 EVP_MD_CTX_get0_md_data(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}
undefined8 EVP_MD_CTX_update_fn(long param_1) {
   return *(undefined8*)( param_1 + 0x30 );
}
void EVP_MD_CTX_set_update_fn(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x30 ) = param_2;
   return;
}
void EVP_MD_CTX_set_flags(EVP_MD_CTX *ctx, int flags) {
   ctx.md_data = (void*)( (ulong)ctx.md_data | (long)flags );
   return;
}
void EVP_MD_CTX_clear_flags(EVP_MD_CTX *ctx, int flags) {
   ctx.md_data = (void*)( (ulong)ctx.md_data & (long)~flags );
   return;
}
int EVP_MD_CTX_test_flags(EVP_MD_CTX *ctx, int flags) {
   return *(uint*)&ctx.md_data & flags;
}
void EVP_MD_CTX_set_pkey_ctx(EVP_MD_CTX *param_1, _func_1088 *param_2) {
   int iVar1;
   iVar1 = EVP_MD_CTX_test_flags(param_1, 0x400);
   if (iVar1 == 0) {
      EVP_PKEY_CTX_free((EVP_PKEY_CTX*)param_1.update);
   }

   param_1.update = param_2;
   if (param_2 != (_func_1088*)0x0) {
      EVP_MD_CTX_set_flags(param_1, 0x400);
      return;
   }

   EVP_MD_CTX_clear_flags(param_1, 0x400);
   return;
}
void EVP_CIPHER_CTX_set_flags(EVP_CIPHER_CTX *ctx, int flags) {
   ulong uVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined4 local_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = ctx.flags;
   uVar2 = (long)flags | uVar1;
   ctx.flags = uVar2;
   if (( ( uVar1 ^ uVar2 ) & 0x2000 ) != 0) {
      local_6c = 1;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_48 = (undefined1[16])0x0;
      local_38 = (undefined1[16])0x0;
      local_28 = (undefined1[16])0x0;
      OSSL_PARAM_construct_uint(local_a8, "use-bits", &local_6c);
      local_48._0_8_ = local_88;
      EVP_CIPHER_CTX_set_params(ctx, local_68);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void EVP_CIPHER_CTX_clear_flags(EVP_CIPHER_CTX *ctx, int flags) {
   ulong uVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined4 local_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = ctx.flags;
   uVar2 = (long)~flags & uVar1;
   ctx.flags = uVar2;
   if (( ( uVar1 ^ uVar2 ) & 0x2000 ) != 0) {
      local_6c = 0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_48 = (undefined1[16])0x0;
      local_38 = (undefined1[16])0x0;
      local_28 = (undefined1[16])0x0;
      OSSL_PARAM_construct_uint(local_a8, "use-bits", &local_6c);
      local_48._0_8_ = local_88;
      EVP_CIPHER_CTX_set_params(ctx, local_68);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int EVP_CIPHER_CTX_test_flags(EVP_CIPHER_CTX *ctx, int flags) {
   return (uint)ctx.flags & flags;
}
undefined8 EVP_PKEY_CTX_set_group_name(byte *param_1, long param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
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
   if (( param_1 == (byte*)0x0 ) || ( ( *param_1 & 6 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_lib.c", 0x48a, "EVP_PKEY_CTX_set_group_name");
      ERR_set_error(6, 0x93, 0);
      uVar1 = 0xfffffffe;
   }
 else if (param_2 == 0) {
      uVar1 = 0xffffffff;
   }
 else {
      OSSL_PARAM_construct_utf8_string(&local_98, "group", param_2, 0);
      local_68._8_8_ = uStack_90;
      local_68._0_8_ = local_98;
      local_48._0_8_ = local_78;
      local_58._8_8_ = uStack_80;
      local_58._0_8_ = local_88;
      uVar1 = EVP_PKEY_CTX_set_params(param_1, local_68);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_PKEY_CTX_get_group_name(byte *param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
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
   if (( param_1 == (byte*)0x0 ) || ( ( *param_1 & 6 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_lib.c", 0x49e, "EVP_PKEY_CTX_get_group_name");
      ERR_set_error(6, 0x93, 0);
      uVar2 = 0xfffffffe;
   }
 else {
      if (param_2 != 0) {
         OSSL_PARAM_construct_utf8_string(&local_98, "group", param_2, param_3);
         local_68._8_8_ = uStack_90;
         local_68._0_8_ = local_98;
         local_48._0_8_ = local_78;
         local_58._8_8_ = uStack_80;
         local_58._0_8_ = local_88;
         iVar1 = EVP_PKEY_CTX_get_params(param_1, local_68);
         if (iVar1 != 0) {
            uVar2 = 1;
            goto LAB_00101e78;
         }

      }

      uVar2 = 0xffffffff;
   }

   LAB_00101e78:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_PKEY_Q_keygen(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   int iVar1;
   EVP_PKEY_CTX *ctx;
   ulong uVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 local_d0;
   undefined8 local_c8;
   uint local_c0;
   undefined8 *local_b8;
   undefined1 *local_b0;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   long local_50;
   undefined1 local_48[24];
   undefined8 local_30;
   undefined8 local_28;
   local_50 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = (undefined8*)&stack0x00000008;
   local_c0 = 0x18;
   local_b0 = local_48;
   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_30 = param_4;
   local_28 = param_5;
   iVar1 = OPENSSL_strcasecmp(param_3, &_LC19);
   if (iVar1 == 0) {
      if (local_c0 < 0x30) {
         uVar2 = (ulong)local_c0;
         local_c0 = local_c0 + 8;
         puVar3 = (undefined8*)( local_b0 + uVar2 );
      }
 else {
         puVar3 = local_b8;
         local_b8 = local_b8 + 1;
      }

      local_d0 = *puVar3;
      OSSL_PARAM_construct_size_t(&local_108, &_LC20, &local_d0);
      local_88._0_8_ = local_e8;
      local_a8._8_8_ = uStack_100;
      local_a8._0_8_ = local_108;
      local_98._8_8_ = uStack_f0;
      local_98._0_8_ = local_f8;
   }
 else {
      iVar1 = OPENSSL_strcasecmp(param_3, &_LC21);
      if (iVar1 == 0) {
         if (local_c0 < 0x30) {
            uVar2 = (ulong)local_c0;
            local_c0 = local_c0 + 8;
            puVar3 = (undefined8*)( local_b0 + uVar2 );
         }
 else {
            puVar3 = local_b8;
            local_b8 = local_b8 + 1;
         }

         OSSL_PARAM_construct_utf8_string(&local_108, "group", *puVar3, 0);
         local_a8._8_8_ = uStack_100;
         local_a8._0_8_ = local_108;
         local_88._0_8_ = local_e8;
         local_98._8_8_ = uStack_f0;
         local_98._0_8_ = local_f8;
      }

   }

   local_c8 = 0;
   ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(param_1, param_3, param_2);
   if (ctx != (EVP_PKEY_CTX*)0x0) {
      iVar1 = EVP_PKEY_keygen_init(ctx);
      if (0 < iVar1) {
         iVar1 = EVP_PKEY_CTX_set_params(ctx, local_a8);
         if (iVar1 != 0) {
            EVP_PKEY_generate(ctx, &local_c8);
         }

      }

   }

   EVP_PKEY_CTX_free(ctx);
   if (local_50 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_c8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 EVP_CIPHER_CTX_set_algor_params(undefined8 param_1, long param_2) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   uchar *local_a0;
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
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = (uchar*)0x0;
   iVar1 = i2d_ASN1_TYPE(*(ASN1_TYPE**)( param_2 + 8 ), &local_a0);
   if (iVar1 < 0) {
      uVar2 = 0xffffffff;
   }
 else {
      OSSL_PARAM_construct_octet_string(&local_d8, "alg_id_param", local_a0, (long)iVar1);
      local_98 = local_d8;
      uStack_90 = uStack_d0;
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_78 = local_b8;
      OSSL_PARAM_construct_octet_string(&local_d8, "algorithm-id-params", local_a0, (long)iVar1);
      local_50 = local_b8;
      local_70 = local_d8;
      uStack_68 = uStack_d0;
      local_60 = local_c8;
      uStack_58 = uStack_c0;
      OSSL_PARAM_construct_end(&local_d8);
      local_48 = local_d8;
      uStack_40 = uStack_d0;
      local_28 = local_b8;
      local_38 = local_c8;
      uStack_30 = uStack_c0;
      uVar2 = EVP_CIPHER_CTX_set_params(param_1, &local_98);
   }

   CRYPTO_free(local_a0);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int evp_cipher_asn1_to_param_ex(EVP_CIPHER_CTX *param_1, ASN1_TYPE *param_2, undefined8 param_3, void *param_4) {
   EVP_CIPHER *pEVar1;
   int iVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_38;
   ASN1_TYPE *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (EVP_CIPHER_CTX*)0x0 ) || ( pEVar1 = param_1.cipher ),pEVar1 == (EVP_CIPHER*)0x0) {
      LAB_00102350:iVar2 = -1;
      LAB_00102355:ERR_new();
      ERR_set_debug("crypto/evp/evp_lib.c", 0xd7, "evp_cipher_asn1_to_param_ex");
      ERR_set_error(6, 0x7a, 0);
   }
 else {
      if (pEVar1.ctrl == (_func_1094*)0x0) {
         uVar3 = EVP_CIPHER_get_flags(pEVar1);
         if (( uVar3 & 0x1000000 ) == 0) {
            iVar2 = EVP_CIPHER_get_mode(pEVar1);
            if (iVar2 != 0x10001) {
               if (iVar2 < 0x10002) {
                  if (iVar2 == 6) {
                     iVar2 = evp_cipher_get_asn1_aead_params(param_1, param_2, param_3);
                     goto LAB_0010229f;
                  }

                  if (iVar2 != 7) {
                     LAB_0010233f:iVar2 = EVP_CIPHER_get_asn1_iv(param_1, param_2);
                     if (iVar2 < 0) goto LAB_00102350;
                     goto LAB_001023f7;
                  }

               }
 else {
                  if (iVar2 == 0x10002) {
                     LAB_001023f7:iVar2 = 1;
                     goto LAB_001022ac;
                  }

                  if (iVar2 != 0x10003) goto LAB_0010233f;
               }

            }

         }
 else if (pEVar1[1].do_cipher != (_func_1090*)0x0) {
            local_38 = 0;
            local_30 = param_2;
            iVar2 = EVP_CIPHER_CTX_set_algor_params(param_1, &local_38);
            goto LAB_0010229f;
         }

      }
 else {
         iVar2 = ( *pEVar1.ctrl )(param_1, (int)param_2, (int)param_3, param_4);
         LAB_0010229f:if (iVar2 != -2) {
            if (0 < iVar2) goto LAB_001022ac;
            if (iVar2 < 0) {
               iVar2 = -1;
            }

            goto LAB_00102355;
         }

      }

      ERR_new();
      iVar2 = -1;
      ERR_set_debug("crypto/evp/evp_lib.c", 0xd5, "evp_cipher_asn1_to_param_ex");
      ERR_set_error(6, 0x6b, 0);
   }

   LAB_001022ac:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
int EVP_CIPHER_asn1_to_param(EVP_CIPHER_CTX *c, ASN1_TYPE *type) {
   int iVar1;
   iVar1 = evp_cipher_asn1_to_param_ex(c, type, 0);
   return iVar1;
}
undefined8 EVP_CIPHER_CTX_get_algor_params(undefined8 param_1, long param_2) {
   long lVar1;
   int iVar2;
   uchar *ptr;
   ASN1_TYPE *pAVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   long local_120;
   ulong local_100;
   long local_f8;
   long lStack_f0;
   long local_e8;
   long lStack_e0;
   long local_d8;
   ASN1_TYPE *local_c8;
   uchar *local_c0;
   long local_b8[10];
   long local_68;
   long lStack_60;
   long local_58;
   long lStack_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (ASN1_TYPE*)0x0;
   OSSL_PARAM_construct_octet_string(&local_f8, "alg_id_param", 0, 0);
   local_b8[0] = local_f8;
   local_b8[1] = lStack_f0;
   local_b8[4] = local_d8;
   local_b8[2] = local_e8;
   local_b8[3] = lStack_e0;
   OSSL_PARAM_construct_octet_string(&local_f8, "algorithm-id-params", 0, 0);
   local_b8[9] = local_d8;
   local_b8[5] = local_f8;
   local_b8[6] = lStack_f0;
   local_b8[7] = local_e8;
   local_b8[8] = lStack_e0;
   OSSL_PARAM_construct_end(&local_f8);
   local_48 = local_d8;
   local_68 = local_f8;
   lStack_60 = lStack_f0;
   local_58 = local_e8;
   lStack_50 = lStack_e0;
   iVar2 = EVP_CIPHER_CTX_get_params(param_1, local_b8);
   if (iVar2 != 0) {
      iVar2 = OSSL_PARAM_modified(local_b8);
      if (( iVar2 == 0 ) || ( local_b8[4] == 0 )) {
         iVar2 = OSSL_PARAM_modified(local_b8 + 5);
         if (( iVar2 == 0 ) || ( local_120 = local_b8[9] == 0 )) goto LAB_0010253d;
         local_100 = 1;
      }
 else {
         iVar2 = OSSL_PARAM_modified(local_b8 + 5);
         if (iVar2 == 0) {
            local_100 = 0;
            local_120 = local_b8[4];
         }
 else {
            local_100 = ( ulong )(local_b8[9] != 0);
            local_120 = local_b8[local_100 * 5 + 4];
         }

      }

      local_c8 = *(ASN1_TYPE**)( param_2 + 8 );
      lVar1 = local_b8[local_100 * 5];
      ptr = (uchar*)CRYPTO_malloc((int)local_120, "crypto/evp/evp_lib.c", 0x526);
      if (ptr != (uchar*)0x0) {
         local_c0 = ptr;
         OSSL_PARAM_construct_octet_string(&local_f8, lVar1, ptr, local_120);
         local_b8[local_100 * 5] = local_f8;
         local_b8[local_100 * 5 + 1] = lStack_f0;
         local_b8[local_100 * 5 + 2] = local_e8;
         local_b8[local_100 * 5 + 3] = lStack_e0;
         local_b8[local_100 * 5 + 4] = local_d8;
         iVar2 = EVP_CIPHER_CTX_get_params(param_1, local_b8);
         if (( ( iVar2 == 0 ) || ( iVar2 = OSSL_PARAM_modified((long)local_b8 + ( ulong )(-(int)local_100 & 0x28)) ),iVar2 == 0 )) {
            uVar4 = 0xffffffff;
         }
 else {
            uVar4 = 1;
            *(ASN1_TYPE**)( param_2 + 8 ) = local_c8;
         }

         goto LAB_00102545;
      }

   }

   LAB_0010253d:ptr = (uchar*)0x0;
   uVar4 = 0xffffffff;
   LAB_00102545:CRYPTO_free(ptr);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
int evp_cipher_param_to_asn1_ex(EVP_CIPHER_CTX *param_1, ASN1_TYPE *param_2, undefined8 param_3) {
   EVP_CIPHER *pEVar1;
   int iVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_38;
   ASN1_TYPE *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (EVP_CIPHER_CTX*)0x0 ) || ( pEVar1 = param_1.cipher ),pEVar1 == (EVP_CIPHER*)0x0) {
      iVar2 = -1;
      LAB_00102825:ERR_new();
      ERR_set_debug("crypto/evp/evp_lib.c", 0x92, "evp_cipher_param_to_asn1_ex");
      ERR_set_error(6, 0x7a, 0);
   }
 else {
      if (pEVar1.get_asn1_parameters == (_func_1093*)0x0) {
         uVar3 = EVP_CIPHER_get_flags(pEVar1);
         if (( uVar3 & 0x1000000 ) == 0) {
            iVar2 = EVP_CIPHER_get_mode(pEVar1);
            if (iVar2 != 0x10001) {
               if (iVar2 < 0x10002) {
                  if (iVar2 == 6) {
                     iVar2 = evp_cipher_set_asn1_aead_params(param_1, param_2, param_3);
                     goto LAB_00102794;
                  }

                  if (iVar2 != 7) goto LAB_001028ed;
               }
 else {
                  if (iVar2 == 0x10002) {
                     iVar2 = EVP_CIPHER_is_a(pEVar1, "id-smime-alg-CMS3DESwrap");
                     if (iVar2 != 0) {
                        ASN1_TYPE_set(param_2, 5, (void*)0x0);
                     }

                     iVar2 = 1;
                     goto LAB_001027a1;
                  }

                  if (iVar2 != 0x10003) {
                     LAB_001028ed:iVar2 = EVP_CIPHER_set_asn1_iv(param_1, param_2);
                     goto LAB_00102794;
                  }

               }

            }

         }
 else if (pEVar1[1].do_cipher != (_func_1090*)0x0) {
            local_38 = 0;
            local_30 = param_2;
            iVar2 = EVP_CIPHER_CTX_get_algor_params(param_1, &local_38);
            goto LAB_00102794;
         }

      }
 else {
         iVar2 = ( *pEVar1.get_asn1_parameters )(param_1, param_2);
         LAB_00102794:if (iVar2 != -2) {
            if (0 < iVar2) goto LAB_001027a1;
            if (iVar2 < 0) {
               iVar2 = -1;
            }

            goto LAB_00102825;
         }

      }

      ERR_new();
      iVar2 = -1;
      ERR_set_debug("crypto/evp/evp_lib.c", 0x90, "evp_cipher_param_to_asn1_ex");
      ERR_set_error(6, 0x6b, 0);
   }

   LAB_001027a1:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
int EVP_CIPHER_param_to_asn1(EVP_CIPHER_CTX *c, ASN1_TYPE *type) {
   int iVar1;
   iVar1 = evp_cipher_param_to_asn1_ex(c, type, 0);
   return iVar1;
}
undefined8 EVP_CIPHER_CTX_get_algor(undefined8 param_1, X509_ALGOR **param_2) {
   long len;
   int iVar1;
   uchar *ptr;
   X509_ALGOR *pXVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   long local_b8;
   uchar *local_a0;
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
   OSSL_PARAM_construct_octet_string(&local_d8, "algorithm-id", 0, 0);
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
   iVar1 = EVP_CIPHER_CTX_get_params(param_1, &local_98);
   if (iVar1 < 1) {
      LAB_00102b00:uVar3 = 0xffffffff;
      goto LAB_00102a9e;
   }

   iVar1 = OSSL_PARAM_modified(&local_98);
   len = local_78;
   if (( iVar1 == 0 ) || ( local_78 == 0 )) {
      ERR_new();
      uVar3 = 0xfffffffe;
      ERR_set_debug("crypto/evp/evp_lib.c", 0x54b, "EVP_CIPHER_CTX_get_algor");
      ERR_set_error(6, 0xe5, 0);
      goto LAB_00102a9e;
   }

   if (param_2 == (X509_ALGOR**)0x0) goto LAB_00102b00;
   local_a0 = (uchar*)0x0;
   ptr = (uchar*)CRYPTO_malloc((int)local_78, "crypto/evp/evp_lib.c", 0x553);
   if (ptr == (uchar*)0x0) {
      LAB_00102a85:uVar3 = 0xffffffff;
   }
 else {
      OSSL_PARAM_construct_octet_string(&local_d8, "algorithm-id", ptr, len);
      local_78 = local_b8;
      local_98 = local_d8;
      uStack_90 = uStack_d0;
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_a0 = ptr;
      iVar1 = EVP_CIPHER_CTX_get_params(param_1, &local_98);
      if (iVar1 == 0) goto LAB_00102a85;
      iVar1 = OSSL_PARAM_modified(&local_98);
      if (iVar1 == 0) goto LAB_00102a85;
      pXVar2 = d2i_X509_ALGOR(param_2, &local_a0, len);
      if (pXVar2 == (X509_ALGOR*)0x0) goto LAB_00102a85;
      uVar3 = 1;
   }

   CRYPTO_free(ptr);
   LAB_00102a9e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 EVP_PKEY_CTX_set_algor_params(undefined8 param_1, long param_2) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   uchar *local_80;
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
   local_80 = (uchar*)0x0;
   iVar1 = i2d_ASN1_TYPE(*(ASN1_TYPE**)( param_2 + 8 ), &local_80);
   if (iVar1 < 0) {
      uVar2 = 0xffffffff;
   }
 else {
      OSSL_PARAM_construct_octet_string(&local_b8, "algorithm-id-params", local_80, (long)iVar1);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_30 = local_98;
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      uVar2 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }

   CRYPTO_free(local_80);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 EVP_PKEY_CTX_get_algor_params(undefined8 param_1, long param_2) {
   long len;
   int iVar1;
   uchar *ptr;
   ASN1_TYPE *pAVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   long local_b8;
   ASN1_TYPE *local_a8;
   uchar *local_a0;
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
   local_a8 = (ASN1_TYPE*)0x0;
   OSSL_PARAM_construct_octet_string(&local_d8, "algorithm-id-params", 0, 0);
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
   iVar1 = EVP_PKEY_CTX_get_params(param_1, &local_98);
   len = local_78;
   if (iVar1 != 0) {
      local_a8 = *(ASN1_TYPE**)( param_2 + 8 );
      iVar1 = OSSL_PARAM_modified(&local_98);
      if (( ( len != 0 ) && ( iVar1 != 0 ) ) && ( ptr = (uchar*)CRYPTO_malloc((int)len, "crypto/evp/evp_lib.c", 0x59a) ),ptr != (uchar*)0x0) {
         local_a0 = ptr;
         OSSL_PARAM_construct_octet_string(&local_d8, "algorithm-id-params", ptr, len);
         local_78 = local_b8;
         local_98 = local_d8;
         uStack_90 = uStack_d0;
         local_88 = local_c8;
         uStack_80 = uStack_c0;
         iVar1 = EVP_PKEY_CTX_get_params(param_1, &local_98);
         if (( ( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 ) ) || ( pAVar2 = d2i_ASN1_TYPE(&local_a8, &local_a0, len) ),pAVar2 == (ASN1_TYPE*)0x0) {
            uVar3 = 0xffffffff;
         }
 else {
            uVar3 = 1;
            *(ASN1_TYPE**)( param_2 + 8 ) = local_a8;
         }

         goto LAB_00102d13;
      }

   }

   ptr = (uchar*)0x0;
   uVar3 = 0xffffffff;
   LAB_00102d13:CRYPTO_free(ptr);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
undefined8 EVP_PKEY_CTX_get_algor(undefined8 param_1, X509_ALGOR **param_2) {
   long len;
   int iVar1;
   uchar *ptr;
   X509_ALGOR *pXVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   long local_b8;
   uchar *local_a0;
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
   OSSL_PARAM_construct_octet_string(&local_d8, "algorithm-id", 0, 0);
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
   iVar1 = EVP_PKEY_CTX_get_params(param_1, &local_98);
   if (iVar1 < 1) {
      LAB_00103020:uVar3 = 0xffffffff;
      goto LAB_00102fbe;
   }

   iVar1 = OSSL_PARAM_modified(&local_98);
   len = local_78;
   if (( iVar1 == 0 ) || ( local_78 == 0 )) {
      ERR_new();
      uVar3 = 0xfffffffe;
      ERR_set_debug("crypto/evp/evp_lib.c", 0x5bf, "EVP_PKEY_CTX_get_algor");
      ERR_set_error(6, 0xe5, 0);
      goto LAB_00102fbe;
   }

   if (param_2 == (X509_ALGOR**)0x0) goto LAB_00103020;
   local_a0 = (uchar*)0x0;
   ptr = (uchar*)CRYPTO_malloc((int)local_78, "crypto/evp/evp_lib.c", 0x5c7);
   if (ptr == (uchar*)0x0) {
      LAB_00102fa5:uVar3 = 0xffffffff;
   }
 else {
      OSSL_PARAM_construct_octet_string(&local_d8, "algorithm-id", ptr, len);
      local_78 = local_b8;
      local_98 = local_d8;
      uStack_90 = uStack_d0;
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_a0 = ptr;
      iVar1 = EVP_PKEY_CTX_get_params(param_1, &local_98);
      if (iVar1 == 0) goto LAB_00102fa5;
      iVar1 = OSSL_PARAM_modified(&local_98);
      if (iVar1 == 0) goto LAB_00102fa5;
      pXVar2 = d2i_X509_ALGOR(param_2, &local_a0, len);
      if (pXVar2 == (X509_ALGOR*)0x0) goto LAB_00102fa5;
      uVar3 = 1;
   }

   CRYPTO_free(ptr);
   LAB_00102fbe:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}


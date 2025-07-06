undefined8 *EVP_KDF_CTX_new(undefined8 *param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 *ptr;
   undefined8 uVar3;
   long lVar4;
   if (param_1 != (undefined8*)0x0) {
      ptr = (undefined8*)CRYPTO_zalloc(0x10, "crypto/evp/kdf_lib.c", 0x1e);
      if (ptr == (undefined8*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/evp/kdf_lib.c", 0x22, "EVP_KDF_CTX_new");
         ERR_set_error(6, 0x80006, 0);
      } else {
         pcVar1 = (code*)param_1[5];
         uVar3 = ossl_provider_ctx(*param_1);
         lVar4 = ( *pcVar1 )(uVar3);
         ptr[1] = lVar4;
         if (lVar4 != 0) {
            iVar2 = EVP_KDF_up_ref(param_1);
            if (iVar2 != 0) {
               *ptr = param_1;
               return ptr;
            }
         }
         ERR_new();
         ERR_set_debug("crypto/evp/kdf_lib.c", 0x22, "EVP_KDF_CTX_new");
         ERR_set_error(6, 0x80006, 0);
         ( *(code*)param_1[7] )(ptr[1]);
      }
      CRYPTO_free(ptr);
   }
   return (undefined8*)0x0;
}void EVP_KDF_CTX_free(long *param_1) {
   if (param_1 != (long*)0x0) {
      ( **(code**)( *param_1 + 0x38 ) )(param_1[1]);
      param_1[1] = 0;
      EVP_KDF_free(*param_1);
      CRYPTO_free(param_1);
      return;
   }
   return;
}long *EVP_KDF_CTX_dup(long *param_1) {
   int iVar1;
   long *ptr;
   long lVar2;
   if (( ( param_1 != (long*)0x0 ) && ( param_1[1] != 0 ) ) && ( *(long*)( *param_1 + 0x30 ) != 0 )) {
      ptr = (long*)CRYPTO_malloc(0x10, "crypto/evp/kdf_lib.c", 0x3e);
      if (ptr != (long*)0x0) {
         lVar2 = param_1[1];
         *ptr = *param_1;
         ptr[1] = lVar2;
         iVar1 = EVP_KDF_up_ref();
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/evp/kdf_lib.c", 0x44, "EVP_KDF_CTX_dup");
            ERR_set_error(6, 0x80006, 0);
            CRYPTO_free(ptr);
         } else {
            lVar2 = ( **(code**)( *param_1 + 0x30 ) )(param_1[1]);
            ptr[1] = lVar2;
            if (lVar2 != 0) {
               return ptr;
            }
            EVP_KDF_CTX_free(ptr);
         }
      }
   }
   return (long*)0x0;
}undefined4 evp_kdf_get_number(long param_1) {
   return *(undefined4*)( param_1 + 8 );
}undefined8 EVP_KDF_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}undefined8 EVP_KDF_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}bool EVP_KDF_is_a(undefined8 *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (undefined8*)0x0) {
      iVar1 = evp_is_a(*param_1, *(undefined4*)( param_1 + 1 ), 0, param_2);
      return iVar1 != 0;
   }
   return false;
}undefined8 EVP_KDF_get0_provider(undefined8 *param_1) {
   return *param_1;
}undefined8 EVP_KDF_CTX_kdf(undefined8 *param_1) {
   return *param_1;
}void EVP_KDF_CTX_reset(long *param_1) {
   if (( param_1 != (long*)0x0 ) && ( *(code**)( *param_1 + 0x40 ) != (code*)0x0 )) {
      for (int i_170 = 0; i_170 < 2; i_170++) {
         /* WARNING: Could not recover jumptable at 0x001002f9. Too many branches */
      }
      ( **(code**)( *param_1 + 0x40 ) )(param_1[1]);
      return;
   }
   return;
}undefined8 EVP_KDF_CTX_get_kdf_size(long *param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_70 = 0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   if (param_1 != (long*)0x0) {
      OSSL_PARAM_construct_size_t(&local_a8, &_LC1, &local_70);
      local_48._0_8_ = local_88;
      lVar2 = *param_1;
      local_68._8_8_ = uStack_a0;
      local_68._0_8_ = local_a8;
      local_58._8_8_ = uStack_90;
      local_58._0_8_ = local_98;
      if (*(code**)( lVar2 + 0x70 ) != (code*)0x0) {
         iVar1 = ( **(code**)( lVar2 + 0x70 ) )(param_1[1], local_68);
         uVar3 = local_70;
         if (iVar1 != 0) goto LAB_001003c7;
         lVar2 = *param_1;
      }
      if (( *(code**)( lVar2 + 0x68 ) != (code*)0x0 ) && ( iVar1 = ( **(code**)( lVar2 + 0x68 ) )(local_68) ),uVar3 = local_70,iVar1 != 0) goto LAB_001003c7;
   }
   uVar3 = 0;
   LAB_001003c7:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}undefined8 EVP_KDF_derive(long *param_1) {
   undefined8 uVar1;
   if (param_1 != (long*)0x0) {
      for (int i_171 = 0; i_171 < 2; i_171++) {
         /* WARNING: Could not recover jumptable at 0x00100417. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x48 ) )(param_1[1]);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KDF_get_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
      for (int i_172 = 0; i_172 < 2; i_172++) {
         /* WARNING: Could not recover jumptable at 0x00100440. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x68 ) )(param_2);
      return uVar1;
   }
   return 1;
}undefined8 EVP_KDF_CTX_get_params(long *param_1) {
   undefined8 uVar1;
   if (*(code**)( *param_1 + 0x70 ) != (code*)0x0) {
      for (int i_173 = 0; i_173 < 2; i_173++) {
         /* WARNING: Could not recover jumptable at 0x00100464. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x70 ) )(param_1[1]);
      return uVar1;
   }
   return 1;
}undefined8 EVP_KDF_CTX_set_params(long *param_1) {
   undefined8 uVar1;
   if (*(code**)( *param_1 + 0x78 ) != (code*)0x0) {
      for (int i_174 = 0; i_174 < 2; i_174++) {
         /* WARNING: Could not recover jumptable at 0x00100494. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x78 ) )(param_1[1]);
      return uVar1;
   }
   return 1;
}undefined8 EVP_KDF_names_do_all(long *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*param_1 == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*param_1, (int)param_1[1], param_2, param_3);
   return uVar1;
}

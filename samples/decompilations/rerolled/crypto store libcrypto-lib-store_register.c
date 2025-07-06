void lh_OSSL_STORE_LOADER_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_851 = 0; i_851 < 2; i_851++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OSSL_STORE_LOADER_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_852 = 0; i_852 < 2; i_852++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OSSL_STORE_LOADER_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_853 = 0; i_853 < 2; i_853++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OSSL_STORE_LOADER_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_854 = 0; i_854 < 2; i_854++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void do_registry_init_ossl_(void) {
   registry_lock = CRYPTO_THREAD_lock_new();
   do_registry_init_ossl_ret_ = ( uint )(registry_lock != 0);
   return;
}void store_loader_cmp(undefined8 *param_1, undefined8 *param_2) {
   strcmp((char*)*param_1, (char*)*param_2);
   return;
}void store_loader_hash(undefined8 *param_1) {
   OPENSSL_LH_strhash(*param_1);
   return;
}void lh_OSSL_STORE_LOADER_doall_void_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_855 = 0; i_855 < 2; i_855++) {
      /* WARNING: Could not recover jumptable at 0x00100094. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}long *OSSL_STORE_LOADER_new(long param_1, long param_2) {
   long *plVar1;
   if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/store/store_register.c", 0x2a, "OSSL_STORE_LOADER_new");
      ERR_set_error(0x2c, 0x6a, 0);
      plVar1 = (long*)0x0;
   } else {
      plVar1 = (long*)CRYPTO_zalloc(0xd8, "crypto/store/store_register.c", 0x2e);
      if (plVar1 != (long*)0x0) {
         plVar1[1] = param_1;
         *plVar1 = param_2;
      }
   }
   return plVar1;
}undefined8 OSSL_STORE_LOADER_get0_engine(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}undefined8 OSSL_STORE_LOADER_get0_scheme(undefined8 *param_1) {
   return *param_1;
}undefined8 OSSL_STORE_LOADER_set_open(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x10 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_open_ex(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x58 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_attach(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x18 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_ctrl(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x20 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_expect(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x28 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_find(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x30 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_load(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x38 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_eof(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x40 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_error(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x48 ) = param_2;
   return 1;
}undefined8 OSSL_STORE_LOADER_set_close(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x50 ) = param_2;
   return 1;
}bool ossl_store_register_loader_int(undefined8 *param_1) {
   int iVar1;
   char *pcVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   bool bVar7;
   pcVar5 = (char*)*param_1;
   iVar1 = ossl_ctype_check((int)*pcVar5, 3);
   if (iVar1 == 0) {
      cVar6 = *pcVar5;
      LAB_0010020d:if (cVar6 != '\0') {
         ERR_new();
         ERR_set_debug("crypto/store/store_register.c", 0xb3, "ossl_store_register_loader_int");
         ERR_set_error(0x2c, 0x6a, "scheme=%s", *param_1);
         return false;
      }
   } else if (*pcVar5 != '\0') {
      iVar1 = ossl_ctype_check((int)*pcVar5, 3);
      if (iVar1 == 0) goto LAB_0010032f;
      do {
         do {
            do {
               pcVar2 = pcVar5 + 1;
               pcVar5 = pcVar5 + 1;
               if (*pcVar2 == '\0') goto LAB_00100216;
               iVar1 = ossl_ctype_check((int)*pcVar2, 3);
            } while ( iVar1 != 0 );
            LAB_0010032f:iVar1 = ossl_isdigit((int)*pcVar5);
         } while ( iVar1 != 0 );
         cVar6 = *pcVar5;
         pcVar2 = strchr("+-.", (int)cVar6);
      } while ( pcVar2 != (char*)0x0 );
      goto LAB_0010020d;
   }
   LAB_00100216:if (( ( ( param_1[2] == 0 ) || ( param_1[7] == 0 ) ) || ( param_1[8] == 0 ) ) || ( ( param_1[9] == 0 || ( param_1[10] == 0 ) ) )) {
      ERR_new();
      ERR_set_debug("crypto/store/store_register.c", 0xbb, "ossl_store_register_loader_int");
      ERR_set_error(0x2c, 0x74, 0);
      return false;
   }
   iVar1 = CRYPTO_THREAD_run_once(&registry_init, do_registry_init_ossl_);
   if (( iVar1 == 0 ) || ( do_registry_init_ossl_ret_ == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/store/store_register.c", 0xc1, "ossl_store_register_loader_int");
      ERR_set_error(0x2c, 0x8000f, 0);
      return false;
   }
   iVar1 = CRYPTO_THREAD_write_lock(registry_lock);
   if (iVar1 == 0) {
      return false;
   }
   if (loader_register == 0) {
      uVar4 = OPENSSL_LH_new(store_loader_hash, store_loader_cmp);
      loader_register = OPENSSL_LH_set_thunks(uVar4, 0x100000, lh_OSSL_STORE_LOADER_cfn_thunk, lh_OSSL_STORE_LOADER_doall_thunk, lh_OSSL_STORE_LOADER_doall_arg_thunk);
      if (loader_register == 0) {
         bVar7 = false;
         goto LAB_001003d5;
      }
   }
   bVar7 = true;
   lVar3 = OPENSSL_LH_insert(loader_register, param_1);
   if (lVar3 == 0) {
      iVar1 = OPENSSL_LH_error(loader_register);
      bVar7 = iVar1 == 0;
   }
   LAB_001003d5:CRYPTO_THREAD_unlock(registry_lock);
   return bVar7;
}void OSSL_STORE_register_loader(void) {
   ossl_store_register_loader_int();
   return;
}long ossl_store_get0_loader_int(undefined8 param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_f8[2];
   undefined8 local_e8;
   undefined1 local_c0[16];
   undefined1 local_a8[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = 0;
   local_c0 = (undefined1[16])0x0;
   local_a8 = (undefined1[16])0x0;
   local_f8[0] = param_1;
   iVar1 = CRYPTO_THREAD_run_once(&registry_init, do_registry_init_ossl_);
   if (( iVar1 == 0 ) || ( do_registry_init_ossl_ret_ == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/store/store_register.c", 0xe3, "ossl_store_get0_loader_int");
      ERR_set_error(0x2c, 0x8000f, 0);
   } else {
      iVar1 = CRYPTO_THREAD_write_lock(registry_lock);
      if (iVar1 != 0) {
         if (loader_register == 0) {
            uVar3 = OPENSSL_LH_new(store_loader_hash, store_loader_cmp);
            loader_register = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_OSSL_STORE_LOADER_cfn_thunk, lh_OSSL_STORE_LOADER_doall_thunk, lh_OSSL_STORE_LOADER_doall_arg_thunk);
            if (loader_register != 0) goto LAB_001004e3;
            ERR_new();
            ERR_set_debug("crypto/store/store_register.c", 0xea, "ossl_store_get0_loader_int");
            ERR_set_error(0x2c, 0xc0103, 0);
            lVar2 = 0;
         } else {
            LAB_001004e3:lVar2 = OPENSSL_LH_retrieve(loader_register, local_f8);
            if (lVar2 == 0) {
               ERR_new();
               ERR_set_debug("crypto/store/store_register.c", 0xed, "ossl_store_get0_loader_int");
               ERR_set_error(0x2c, 0x69, "scheme=%s", param_1);
            }
         }
         CRYPTO_THREAD_unlock(registry_lock);
         goto LAB_00100506;
      }
   }
   lVar2 = 0;
   LAB_00100506:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}long ossl_store_unregister_loader_int(undefined8 param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_f8[2];
   undefined8 local_e8;
   undefined1 local_c0[16];
   undefined8 local_a8;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = 0;
   local_a8 = 0;
   local_c0 = (undefined1[16])0x0;
   local_f8[0] = param_1;
   iVar1 = CRYPTO_THREAD_run_once(&registry_init, do_registry_init_ossl_);
   if (( iVar1 == 0 ) || ( do_registry_init_ossl_ret_ == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/store/store_register.c", 0x102, "ossl_store_unregister_loader_int");
      ERR_set_error(0x2c, 0x8000f, 0);
   } else {
      iVar1 = CRYPTO_THREAD_write_lock(registry_lock);
      if (iVar1 != 0) {
         if (loader_register == 0) {
            uVar3 = OPENSSL_LH_new(store_loader_hash, store_loader_cmp);
            loader_register = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_OSSL_STORE_LOADER_cfn_thunk, lh_OSSL_STORE_LOADER_doall_thunk, lh_OSSL_STORE_LOADER_doall_arg_thunk);
            if (loader_register != 0) goto LAB_001006c7;
            ERR_new();
            ERR_set_debug("crypto/store/store_register.c", 0x109, "ossl_store_unregister_loader_int");
            ERR_set_error(0x2c, 0xc0103, 0);
            lVar2 = 0;
         } else {
            LAB_001006c7:lVar2 = OPENSSL_LH_delete(loader_register, local_f8);
            if (lVar2 == 0) {
               ERR_new();
               ERR_set_debug("crypto/store/store_register.c", 0x10c, "ossl_store_unregister_loader_int");
               ERR_set_error(0x2c, 0x69, "scheme=%s", param_1);
            }
         }
         CRYPTO_THREAD_unlock(registry_lock);
         goto LAB_001006ea;
      }
   }
   lVar2 = 0;
   LAB_001006ea:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void OSSL_STORE_unregister_loader(void) {
   ossl_store_unregister_loader_int();
   return;
}void ossl_store_destroy_loaders_int(void) {
   OPENSSL_LH_free(loader_register);
   loader_register = 0;
   CRYPTO_THREAD_lock_free(registry_lock);
   registry_lock = 0;
   return;
}undefined8 OSSL_STORE_do_all_loaders(undefined8 param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (loader_register == 0) {
      uVar1 = OPENSSL_LH_new(store_loader_hash, store_loader_cmp);
      loader_register = OPENSSL_LH_set_thunks(uVar1, 0x100000, lh_OSSL_STORE_LOADER_cfn_thunk, lh_OSSL_STORE_LOADER_doall_thunk, lh_OSSL_STORE_LOADER_doall_arg_thunk);
      if (loader_register == 0) {
         return 1;
      }
   }
   OPENSSL_LH_doall_arg_thunk(loader_register, lh_OSSL_STORE_LOADER_doall_void_thunk, param_1, param_2);
   return 1;
}

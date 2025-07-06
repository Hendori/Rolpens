void cipher_from_name(char *param_1, long *param_2) {
   char *pcVar1;
   if (*param_2 != 0) {
      return;
   }
   pcVar1 = OBJ_NAME_get(param_1, 2);
   *param_2 = (long)pcVar1;
   return;
}void digest_from_name(char *param_1, long *param_2) {
   char *pcVar1;
   if (*param_2 != 0) {
      return;
   }
   pcVar1 = OBJ_NAME_get(param_1, 1);
   *param_2 = (long)pcVar1;
   return;
}void do_all_md_fn(long param_1, undefined8 *param_2) {
   if (*(int*)( param_1 + 4 ) != 0) {
      for (int i_1251 = 0; i_1251 < 2; i_1251++) {
         /* WARNING: Could not recover jumptable at 0x0010007c. Too many branches */
      }
      ( *(code*)param_2[1] )(0, *(undefined8*)( param_1 + 8 ), *(undefined8*)( param_1 + 0x10 ), *param_2);
      return;
   }
   for (int i_1250 = 0; i_1250 < 2; i_1250++) {
      /* WARNING: Could not recover jumptable at 0x0010008a. Too many branches */
   }
   ( *(code*)param_2[1] )(*(undefined8*)( param_1 + 0x10 ), *(undefined8*)( param_1 + 8 ), 0, *param_2);
   return;
}void do_all_cipher_fn(long param_1, undefined8 *param_2) {
   if (*(int*)( param_1 + 4 ) != 0) {
      for (int i_1253 = 0; i_1253 < 2; i_1253++) {
         /* WARNING: Could not recover jumptable at 0x001000ac. Too many branches */
      }
      ( *(code*)param_2[1] )(0, *(undefined8*)( param_1 + 8 ), *(undefined8*)( param_1 + 0x10 ), *param_2);
      return;
   }
   for (int i_1252 = 0; i_1252 < 2; i_1252++) {
      /* WARNING: Could not recover jumptable at 0x001000ba. Too many branches */
   }
   ( *(code*)param_2[1] )(*(undefined8*)( param_1 + 0x10 ), *(undefined8*)( param_1 + 8 ), 0, *param_2);
   return;
}int EVP_add_cipher(EVP_CIPHER *cipher) {
   int iVar1;
   char *pcVar2;
   if (cipher == (EVP_CIPHER*)0x0) {
      return 0;
   }
   pcVar2 = OBJ_nid2sn(cipher->nid);
   iVar1 = OBJ_NAME_add(pcVar2, 2, (char*)cipher);
   if (iVar1 == 0) {
      return 0;
   }
   pcVar2 = OBJ_nid2ln(cipher->nid);
   iVar1 = OBJ_NAME_add(pcVar2, 2, (char*)cipher);
   return iVar1;
}int EVP_add_digest(EVP_MD *digest) {
   int n;
   int iVar1;
   char *name;
   char *pcVar2;
   name = OBJ_nid2sn(digest->type);
   iVar1 = OBJ_NAME_add(name, 1, (char*)digest);
   if (iVar1 != 0) {
      pcVar2 = OBJ_nid2ln(digest->type);
      iVar1 = OBJ_NAME_add(pcVar2, 1, (char*)digest);
      if (iVar1 != 0) {
         n = digest->pkey_type;
         if (n == 0) {
            return iVar1;
         }
         if (n == digest->type) {
            return iVar1;
         }
         pcVar2 = OBJ_nid2sn(n);
         iVar1 = OBJ_NAME_add(pcVar2, 0x8001, name);
         if (iVar1 != 0) {
            pcVar2 = OBJ_nid2ln(digest->pkey_type);
            iVar1 = OBJ_NAME_add(pcVar2, 0x8001, name);
            return iVar1;
         }
      }
   }
   return 0;
}char *evp_get_cipherbyname_ex(undefined8 param_1, char *param_2) {
   int iVar1;
   char *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   char *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = OPENSSL_init_crypto(4, 0);
   if (iVar1 != 0) {
      local_28 = OBJ_NAME_get(param_2, 2);
      pcVar2 = local_28;
      if (local_28 != (char*)0x0) goto LAB_00100208;
      uVar3 = ossl_namemap_stored(param_1);
      iVar1 = ossl_namemap_name2num(uVar3, param_2);
      if (iVar1 == 0) {
         ERR_set_mark();
         uVar4 = EVP_CIPHER_fetch(param_1, param_2, 0);
         EVP_CIPHER_free(uVar4);
         ERR_pop_to_mark();
         iVar1 = ossl_namemap_name2num(uVar3, param_2);
         if (iVar1 == 0) goto LAB_00100270;
      }
      iVar1 = ossl_namemap_doall_names(uVar3, iVar1, 0x100000, &local_28);
      pcVar2 = local_28;
      if (iVar1 != 0) goto LAB_00100208;
   }
   LAB_00100270:pcVar2 = (char*)0x0;
   LAB_00100208:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pcVar2;
}EVP_CIPHER *EVP_get_cipherbyname(char *name) {
   EVP_CIPHER *pEVar1;
   pEVar1 = (EVP_CIPHER*)evp_get_cipherbyname_ex(0, name);
   return pEVar1;
}char *evp_get_digestbyname_ex(undefined8 param_1, char *param_2) {
   int iVar1;
   char *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   char *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = OPENSSL_init_crypto(8, 0);
   if (iVar1 != 0) {
      local_28 = OBJ_NAME_get(param_2, 1);
      pcVar2 = local_28;
      if (local_28 != (char*)0x0) goto LAB_001002f8;
      uVar3 = ossl_namemap_stored(param_1);
      iVar1 = ossl_namemap_name2num(uVar3, param_2);
      if (iVar1 == 0) {
         ERR_set_mark();
         uVar4 = EVP_MD_fetch(param_1, param_2, 0);
         EVP_MD_free(uVar4);
         ERR_pop_to_mark();
         iVar1 = ossl_namemap_name2num(uVar3, param_2);
         if (iVar1 == 0) goto LAB_00100360;
      }
      iVar1 = ossl_namemap_doall_names(uVar3, iVar1, digest_from_name, &local_28);
      pcVar2 = local_28;
      if (iVar1 != 0) goto LAB_001002f8;
   }
   LAB_00100360:pcVar2 = (char*)0x0;
   LAB_001002f8:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pcVar2;
}EVP_MD *EVP_get_digestbyname(char *name) {
   EVP_MD *pEVar1;
   pEVar1 = (EVP_MD*)evp_get_digestbyname_ex(0, name);
   return pEVar1;
}void evp_cleanup_int(void) {
   OBJ_NAME_cleanup(6);
   OBJ_NAME_cleanup(2);
   OBJ_NAME_cleanup(1);
   OBJ_NAME_cleanup(-1);
   EVP_PBE_cleanup();
   OBJ_sigid_free();
   evp_app_cleanup_int();
   return;
}void EVP_CIPHER_do_all(fn *fn, void *arg) {
   long in_FS_OFFSET;
   void *local_38;
   fn *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   OPENSSL_init_crypto(4, 0);
   local_38 = arg;
   local_30 = fn;
   OBJ_NAME_do_all(2, do_all_cipher_fn, &local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EVP_CIPHER_do_all_sorted(fn *fn, void *arg) {
   long in_FS_OFFSET;
   void *local_38;
   fn *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   OPENSSL_init_crypto(4, 0);
   local_38 = arg;
   local_30 = fn;
   OBJ_NAME_do_all_sorted(2, do_all_cipher_fn, &local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EVP_MD_do_all(fn *fn, void *arg) {
   long in_FS_OFFSET;
   void *local_38;
   fn *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   OPENSSL_init_crypto(8, 0);
   local_38 = arg;
   local_30 = fn;
   OBJ_NAME_do_all(1, do_all_md_fn, &local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void EVP_MD_do_all_sorted(fn *fn, void *arg) {
   long in_FS_OFFSET;
   void *local_38;
   fn *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   OPENSSL_init_crypto(8, 0);
   local_38 = arg;
   local_30 = fn;
   OBJ_NAME_do_all_sorted(1, do_all_md_fn, &local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

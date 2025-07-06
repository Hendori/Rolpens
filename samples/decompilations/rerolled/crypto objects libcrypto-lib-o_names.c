void lh_OBJ_NAME_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2351 = 0; i_2351 < 2; i_2351++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OBJ_NAME_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2352 = 0; i_2352 < 2; i_2352++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OBJ_NAME_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2353 = 0; i_2353 < 2; i_2353++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_OBJ_NAME_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2354 = 0; i_2354 < 2; i_2354++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}ulong obj_name_hash(int *param_1) {
   int iVar1;
   ulong uVar2;
   undefined8 *puVar3;
   if (name_funcs_stack != 0) {
      iVar1 = OPENSSL_sk_num();
      if (*param_1 < iVar1) {
         puVar3 = (undefined8*)OPENSSL_sk_value(name_funcs_stack);
         uVar2 = ( *(code*)*puVar3 )(*(undefined8*)( param_1 + 2 ));
         return (long)*param_1 ^ uVar2;
      }
   }
   uVar2 = ossl_lh_strcasehash(*(undefined8*)( param_1 + 2 ));
   return (long)*param_1 ^ uVar2;
}void name_funcs_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void do_all_sorted_cmp(long *param_1, long *param_2) {
   strcmp(*(char**)( *param_1 + 8 ), *(char**)( *param_2 + 8 ));
   return;
}void do_all_sorted_fn(int *param_1, int *param_2) {
   int iVar1;
   if (*param_1 == *param_2) {
      iVar1 = param_2[1];
      param_2[1] = iVar1 + 1;
      *(int**)( *(long*)( param_2 + 2 ) + (long)iVar1 * 8 ) = param_1;
   }
   return;
}void o_names_init_ossl_(void) {
   undefined8 uVar1;
   names_lh = 0;
   obj_lock = CRYPTO_THREAD_lock_new();
   if (obj_lock != 0) {
      uVar1 = OPENSSL_LH_new(obj_name_hash, obj_name_cmp);
      names_lh = OPENSSL_LH_set_thunks(uVar1, 0x100000, lh_OBJ_NAME_cfn_thunk, lh_OBJ_NAME_doall_thunk, lh_OBJ_NAME_doall_arg_thunk);
   }
   if (names_lh == 0) {
      CRYPTO_THREAD_lock_free();
      obj_lock = 0;
      if (names_lh == 0) {
         o_names_init_ossl_ret_ = 0;
         return;
      }
   }
   o_names_init_ossl_ret_ = ( uint )(obj_lock != 0);
   return;
}void obj_name_cmp(int *param_1, int *param_2) {
   int iVar1;
   long lVar2;
   if (*param_1 != *param_2) {
      return;
   }
   if (name_funcs_stack != 0) {
      iVar1 = OPENSSL_sk_num();
      if (*param_1 < iVar1) {
         lVar2 = OPENSSL_sk_value(name_funcs_stack);
         for (int i_2355 = 0; i_2355 < 2; i_2355++) {
            /* WARNING: Could not recover jumptable at 0x0010023e. Too many branches */
         }
         ( **(code**)( lVar2 + 8 ) )(*(undefined8*)( param_1 + 2 ), *(undefined8*)( param_2 + 2 ));
         return;
      }
   }
   OPENSSL_strcasecmp(*(undefined8*)( param_1 + 2 ), *(undefined8*)( param_2 + 2 ));
   return;
}void do_all_fn(int *param_1, int *param_2) {
   if (*param_1 != *param_2) {
      return;
   }
   for (int i_2356 = 0; i_2356 < 2; i_2356++) {
      /* WARNING: Could not recover jumptable at 0x0010025b. Too many branches */
   }
   ( **(code**)( param_2 + 2 ) )(param_1, *(undefined8*)( param_2 + 4 ));
   return;
}void lh_OBJ_NAME_doall_OBJ_DOALL_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2357 = 0; i_2357 < 2; i_2357++) {
      /* WARNING: Could not recover jumptable at 0x00100264. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */int OBJ_NAME_init(void) {
   int iVar1;
   iVar1 = CRYPTO_THREAD_run_once(&init, o_names_init_ossl_);
   if (iVar1 != 0) {
      iVar1 = o_names_init_ossl_ret_;
   }
   return iVar1;
}int OBJ_NAME_new_index(hash_func *hash_func, cmp_func *cmp_func, free_func *free_func) {
   long lVar1;
   undefined *puVar2;
   undefined *puVar3;
   int iVar4;
   int iVar5;
   undefined8 *puVar6;
   int iVar7;
   iVar4 = OBJ_NAME_init();
   if (( iVar4 == 0 ) || ( iVar4 = iVar4 == 0 )) {
      iVar7 = 0;
   } else {
      if (( name_funcs_stack == 0 ) && ( name_funcs_stack = name_funcs_stack == 0 )) {
         LAB_001003c0:iVar7 = 0;
      } else {
         iVar7 = names_type_num;
         names_type_num = names_type_num + 1;
         iVar4 = OPENSSL_sk_num(name_funcs_stack);
         puVar3 = PTR_OPENSSL_strcasecmp_00102008;
         puVar2 = _GLOBAL_OFFSET_TABLE_;
         if (iVar4 < names_type_num) {
            do {
               puVar6 = (undefined8*)CRYPTO_zalloc(0x18, "crypto/objects/o_names.c", 0x5a);
               lVar1 = name_funcs_stack;
               if (puVar6 == (undefined8*)0x0) goto LAB_001003c0;
               *puVar6 = puVar2;
               puVar6[1] = puVar3;
               iVar5 = OPENSSL_sk_push(lVar1, puVar6);
               if (iVar5 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/objects/o_names.c", 100, "OBJ_NAME_new_index");
                  ERR_set_error(8, 0x8000f, 0);
                  CRYPTO_free(puVar6);
                  goto LAB_001003c0;
               }
               iVar4 = iVar4 + 1;
            } while ( iVar4 < names_type_num );
         }
         puVar6 = (undefined8*)OPENSSL_sk_value(name_funcs_stack, iVar7);
         if (hash_func != (hash_func*)0x0) {
            *puVar6 = hash_func;
         }
         if (cmp_func != (cmp_func*)0x0) {
            puVar6[1] = cmp_func;
         }
         if (free_func != (free_func*)0x0) {
            puVar6[2] = free_func;
         }
      }
      CRYPTO_THREAD_unlock(obj_lock);
   }
   return iVar7;
}char *OBJ_NAME_get(char *name, int type) {
   int iVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   uint local_48[2];
   char *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (name != (char*)0x0) {
      iVar1 = OBJ_NAME_init();
      if (iVar1 != 0) {
         iVar1 = CRYPTO_THREAD_read_lock(obj_lock);
         if (iVar1 != 0) {
            local_48[0] = type & 0xffff7fff;
            iVar1 = 0xb;
            local_40 = name;
            while (true) {
               pcVar2 = (char*)OPENSSL_LH_retrieve(names_lh, local_48);
               if (pcVar2 == (char*)0x0) break;
               if (( *(int*)( pcVar2 + 4 ) == 0 ) || ( ( type & 0x8000U ) != 0 )) {
                  pcVar2 = *(char**)( pcVar2 + 0x10 );
                  break;
               }
               iVar1 = iVar1 + -1;
               if (iVar1 == 0) {
                  pcVar2 = (char*)0x0;
                  break;
               }
               local_40 = *(char**)( pcVar2 + 0x10 );
            };
            CRYPTO_THREAD_unlock(obj_lock);
            goto LAB_001004ea;
         }
      }
   }
   pcVar2 = (char*)0x0;
   LAB_001004ea:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int OBJ_NAME_add(char *name, int type, char *data) {
   undefined8 uVar1;
   ulong uVar2;
   int iVar3;
   ulong *ptr;
   int *ptr_00;
   long lVar4;
   iVar3 = OBJ_NAME_init();
   if (( iVar3 == 0 ) || ( ptr = (ulong*)CRYPTO_malloc(0x18, "crypto/objects/o_names.c", 199) ),ptr == (ulong*)0x0) {
      return 0;
   }
   ptr[1] = (ulong)name;
   uVar2 = _LC1;
   ptr[2] = (ulong)data;
   uVar1 = obj_lock;
   *ptr = CONCAT44(type, type) & uVar2;
   iVar3 = CRYPTO_THREAD_write_lock(uVar1);
   if (iVar3 == 0) {
      CRYPTO_free(ptr);
      return 0;
   }
   ptr_00 = (int*)OPENSSL_LH_insert(names_lh, ptr);
   if (ptr_00 == (int*)0x0) {
      iVar3 = OPENSSL_LH_error(names_lh);
      if (iVar3 != 0) {
         iVar3 = 0;
         CRYPTO_free(ptr);
         goto LAB_001005e5;
      }
   } else {
      if (( name_funcs_stack != 0 ) && ( iVar3 = OPENSSL_sk_num() * ptr_00 < iVar3 )) {
         lVar4 = OPENSSL_sk_value(name_funcs_stack);
         ( **(code**)( lVar4 + 0x10 ) )(*(undefined8*)( ptr_00 + 2 ), *ptr_00, *(undefined8*)( ptr_00 + 4 ));
      }
      CRYPTO_free(ptr_00);
   }
   iVar3 = 1;
   LAB_001005e5:CRYPTO_THREAD_unlock(obj_lock);
   return iVar3;
}int OBJ_NAME_remove(char *name, int type) {
   int iVar1;
   int *ptr;
   long lVar2;
   long in_FS_OFFSET;
   uint local_38[2];
   char *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = OBJ_NAME_init();
   if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_write_lock(obj_lock);
      if (iVar1 != 0) {
         local_38[0] = type & 0xffff7fff;
         iVar1 = 0;
         local_30 = name;
         ptr = (int*)OPENSSL_LH_delete(names_lh, local_38);
         if (ptr != (int*)0x0) {
            if (name_funcs_stack != 0) {
               iVar1 = OPENSSL_sk_num();
               if (*ptr < iVar1) {
                  lVar2 = OPENSSL_sk_value(name_funcs_stack);
                  ( **(code**)( lVar2 + 0x10 ) )(*(undefined8*)( ptr + 2 ), *ptr, *(undefined8*)( ptr + 4 ));
               }
            }
            iVar1 = 1;
            CRYPTO_free(ptr);
         }
         CRYPTO_THREAD_unlock(obj_lock);
         goto LAB_0010069a;
      }
   }
   iVar1 = 0;
   LAB_0010069a:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void names_lh_free_doall(int *param_1) {
   if (( param_1 != (int*)0x0 ) && ( ( free_type < 0 || ( free_type == *param_1 ) ) )) {
      OBJ_NAME_remove(*(char**)( param_1 + 2 ), *param_1);
      return;
   }
   return;
}void OBJ_NAME_do_all(int type, fn *fn, void *arg) {
   long in_FS_OFFSET;
   int local_28[2];
   fn *local_20;
   void *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28[0] = type;
   local_20 = fn;
   local_18 = arg;
   OPENSSL_LH_doall_arg_thunk(names_lh, lh_OBJ_NAME_doall_OBJ_DOALL_thunk, do_all_fn, local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void OBJ_NAME_do_all_sorted(int type, fn *fn, void *arg) {
   long lVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48;
   int local_44;
   void *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = type;
   iVar2 = OPENSSL_LH_num_items(names_lh);
   local_40 = CRYPTO_malloc(iVar2 * 8, "crypto/objects/o_names.c", 0x150);
   if (local_40 != (void*)0x0) {
      local_44 = 0;
      OBJ_NAME_do_all(type, do_all_sorted_fn, &local_48);
      qsort(local_40, (long)local_44, 8, do_all_sorted_cmp);
      if (0 < local_44) {
         lVar3 = 0;
         do {
            lVar1 = lVar3 * 8;
            lVar3 = lVar3 + 1;
            ( *fn )(*(OBJ_NAME**)( (long)local_40 + lVar1 ), arg);
         } while ( (int)lVar3 < local_44 );
      }
      CRYPTO_free(local_40);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void OBJ_NAME_cleanup(int type) {
   undefined8 uVar1;
   if (names_lh != 0) {
      free_type = type;
      uVar1 = OPENSSL_LH_get_down_load();
      OPENSSL_LH_set_down_load(names_lh, 0);
      OPENSSL_LH_doall(names_lh, names_lh_free_doall);
      if (-1 < type) {
         OPENSSL_LH_set_down_load(names_lh, uVar1);
         return;
      }
      OPENSSL_LH_free(names_lh);
      OPENSSL_sk_pop_free(name_funcs_stack, name_funcs_free);
      CRYPTO_THREAD_lock_free(obj_lock);
      names_lh = 0;
      name_funcs_stack = 0;
      obj_lock = 0;
   }
   return;
}

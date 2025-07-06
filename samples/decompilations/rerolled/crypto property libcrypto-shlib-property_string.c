void lh_PROPERTY_STRING_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_631 = 0; i_631 < 2; i_631++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_PROPERTY_STRING_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_632 = 0; i_632 < 2; i_632++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_PROPERTY_STRING_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_633 = 0; i_633 < 2; i_633++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_PROPERTY_STRING_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_634 = 0; i_634 < 2; i_634++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void property_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void property_cmp(undefined8 *param_1, undefined8 *param_2) {
   strcmp((char*)*param_1, (char*)*param_2);
   return;
}void property_hash(undefined8 *param_1) {
   OPENSSL_LH_strhash(*param_1);
   return;
}void ossl_property_string_data_free(undefined8 *param_1) {
   long lVar1;
   if (param_1 != (undefined8*)0x0) {
      CRYPTO_THREAD_lock_free(*param_1);
      lVar1 = param_1[1];
      if (lVar1 != 0) {
         OPENSSL_LH_doall(lVar1, property_free);
         OPENSSL_LH_free(lVar1);
         param_1[1] = 0;
      }
      lVar1 = param_1[2];
      if (lVar1 != 0) {
         OPENSSL_LH_doall(lVar1, property_free);
         OPENSSL_LH_free(lVar1);
         param_1[2] = 0;
      }
      OPENSSL_sk_free(param_1[4]);
      OPENSSL_sk_free(param_1[5]);
      param_1[3] = 0;
      *(undefined1(*) [16])( param_1 + 4 ) = (undefined1[16])0x0;
      CRYPTO_free(param_1);
      return;
   }
   return;
}long *ossl_property_string_data_new(void) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   plVar1 = (long*)CRYPTO_zalloc(0x30, "crypto/property/property_string.c", 0x61);
   if (plVar1 != (long*)0x0) {
      lVar2 = CRYPTO_THREAD_lock_new();
      *plVar1 = lVar2;
      uVar3 = OPENSSL_LH_new(property_hash, property_cmp);
      lVar2 = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_PROPERTY_STRING_cfn_thunk, lh_PROPERTY_STRING_doall_thunk, lh_PROPERTY_STRING_doall_arg_thunk);
      plVar1[1] = lVar2;
      uVar3 = OPENSSL_LH_new(property_hash, property_cmp);
      lVar2 = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_PROPERTY_STRING_cfn_thunk, lh_PROPERTY_STRING_doall_thunk, lh_PROPERTY_STRING_doall_arg_thunk);
      plVar1[2] = lVar2;
      lVar2 = OPENSSL_sk_new_null();
      plVar1[4] = lVar2;
      lVar2 = OPENSSL_sk_new_null();
      plVar1[5] = lVar2;
      if (( ( ( *plVar1 != 0 ) && ( plVar1[4] != 0 ) ) && ( lVar2 != 0 ) ) && ( ( plVar1[1] != 0 && ( plVar1[2] != 0 ) ) )) {
         return plVar1;
      }
      ossl_property_string_data_free(plVar1);
   }
   return (long*)0x0;
}undefined4 ossl_property_name(undefined8 param_1, char *param_2, int param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined4 uVar4;
   undefined8 *puVar5;
   undefined8 *ptr;
   size_t sVar6;
   void *pvVar7;
   long in_FS_OFFSET;
   char *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = (undefined8*)ossl_lib_ctx_get_data(param_1, 3);
   if (puVar5 != (undefined8*)0x0) {
      uVar1 = puVar5[1];
      local_58[0] = param_2;
      iVar3 = CRYPTO_THREAD_read_lock(*puVar5);
      if (iVar3 == 0) {
         ERR_new();
         ERR_set_debug("crypto/property/property_string.c", 0x9d, "ossl_property_string");
         ERR_set_error(0xf, 0xc010f, 0);
      } else {
         ptr = (undefined8*)OPENSSL_LH_retrieve(uVar1, local_58);
         if (( ptr == (undefined8*)0x0 ) && ( param_3 != 0 )) {
            CRYPTO_THREAD_unlock(*puVar5);
            iVar3 = CRYPTO_THREAD_write_lock(*puVar5);
            if (iVar3 == 0) {
               ERR_new();
               ERR_set_debug("crypto/property/property_string.c", 0xa4, "ossl_property_string");
               ERR_set_error(0xf, 0xc0110, 0);
            } else {
               ptr = (undefined8*)OPENSSL_LH_retrieve(uVar1, local_58);
               if (ptr != (undefined8*)0x0) {
                  LAB_001002f0:CRYPTO_THREAD_unlock(*puVar5);
                  goto LAB_001002f8;
               }
               sVar6 = strlen(param_2);
               ptr = (undefined8*)CRYPTO_malloc((int)sVar6 + 0x10, "crypto/property/property_string.c", 0x80);
               if (ptr != (undefined8*)0x0) {
                  pvVar7 = memcpy((void*)( (long)ptr + 0xc ), param_2, sVar6 + 1);
                  *ptr = pvVar7;
                  iVar3 = *(int*)( puVar5 + 3 ) + 1;
                  *(int*)( puVar5 + 3 ) = iVar3;
                  *(int*)( ptr + 1 ) = iVar3;
                  if (iVar3 != 0) {
                     uVar2 = puVar5[4];
                     iVar3 = OPENSSL_sk_push(uVar2, pvVar7);
                     if (iVar3 < 1) {
                        CRYPTO_free(ptr);
                        CRYPTO_THREAD_unlock(*puVar5);
                     } else {
                        OPENSSL_LH_insert(uVar1, ptr);
                        iVar3 = OPENSSL_LH_error(uVar1);
                        if (iVar3 == 0) goto LAB_001002f0;
                        OPENSSL_sk_pop(uVar2);
                        CRYPTO_free(ptr);
                        *(int*)( puVar5 + 3 ) = *(int*)( puVar5 + 3 ) + -1;
                        CRYPTO_THREAD_unlock(*puVar5);
                     }
                     goto LAB_0010030a;
                  }
                  CRYPTO_free(ptr);
               }
               CRYPTO_THREAD_unlock(*puVar5);
            }
         } else {
            CRYPTO_THREAD_unlock(*puVar5);
            if (ptr != (undefined8*)0x0) {
               LAB_001002f8:uVar4 = *(undefined4*)( ptr + 1 );
               goto LAB_0010030c;
            }
         }
      }
   }
   LAB_0010030a:uVar4 = 0;
   LAB_0010030c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_property_name_str(undefined8 param_1, int param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   puVar2 = (undefined8*)ossl_lib_ctx_get_data(param_1, 3);
   if (puVar2 != (undefined8*)0x0) {
      iVar1 = CRYPTO_THREAD_read_lock(*puVar2);
      if (iVar1 != 0) {
         uVar3 = OPENSSL_sk_value(puVar2[4], param_2 + -1);
         CRYPTO_THREAD_unlock(*puVar2);
         return uVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/property/property_string.c", 0xe3, "ossl_property_str");
      ERR_set_error(0xf, 0xc010f, 0);
   }
   return 0;
}undefined4 ossl_property_value(undefined8 param_1, char *param_2, int param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined4 uVar4;
   undefined8 *puVar5;
   undefined8 *ptr;
   size_t sVar6;
   void *pvVar7;
   long in_FS_OFFSET;
   char *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = (undefined8*)ossl_lib_ctx_get_data(param_1, 3);
   if (puVar5 != (undefined8*)0x0) {
      uVar1 = puVar5[2];
      local_58[0] = param_2;
      iVar3 = CRYPTO_THREAD_read_lock(*puVar5);
      if (iVar3 == 0) {
         ERR_new();
         ERR_set_debug("crypto/property/property_string.c", 0x9d, "ossl_property_string");
         ERR_set_error(0xf, 0xc010f, 0);
      } else {
         ptr = (undefined8*)OPENSSL_LH_retrieve(uVar1, local_58);
         if (( ptr == (undefined8*)0x0 ) && ( param_3 != 0 )) {
            CRYPTO_THREAD_unlock(*puVar5);
            iVar3 = CRYPTO_THREAD_write_lock(*puVar5);
            if (iVar3 == 0) {
               ERR_new();
               ERR_set_debug("crypto/property/property_string.c", 0xa4, "ossl_property_string");
               ERR_set_error(0xf, 0xc0110, 0);
            } else {
               ptr = (undefined8*)OPENSSL_LH_retrieve(uVar1, local_58);
               if (ptr != (undefined8*)0x0) {
                  LAB_001005c0:CRYPTO_THREAD_unlock(*puVar5);
                  goto LAB_001005c8;
               }
               sVar6 = strlen(param_2);
               ptr = (undefined8*)CRYPTO_malloc((int)sVar6 + 0x10, "crypto/property/property_string.c", 0x80);
               if (ptr != (undefined8*)0x0) {
                  pvVar7 = memcpy((void*)( (long)ptr + 0xc ), param_2, sVar6 + 1);
                  *ptr = pvVar7;
                  iVar3 = *(int*)( (long)puVar5 + 0x1c ) + 1;
                  *(int*)( (long)puVar5 + 0x1c ) = iVar3;
                  *(int*)( ptr + 1 ) = iVar3;
                  if (iVar3 != 0) {
                     uVar2 = puVar5[5];
                     iVar3 = OPENSSL_sk_push(uVar2, pvVar7);
                     if (iVar3 < 1) {
                        CRYPTO_free(ptr);
                        CRYPTO_THREAD_unlock(*puVar5);
                     } else {
                        OPENSSL_LH_insert(uVar1, ptr);
                        iVar3 = OPENSSL_LH_error(uVar1);
                        if (iVar3 == 0) goto LAB_001005c0;
                        OPENSSL_sk_pop(uVar2);
                        CRYPTO_free(ptr);
                        *(int*)( (long)puVar5 + 0x1c ) = *(int*)( (long)puVar5 + 0x1c ) + -1;
                        CRYPTO_THREAD_unlock(*puVar5);
                     }
                     goto LAB_001005da;
                  }
                  CRYPTO_free(ptr);
               }
               CRYPTO_THREAD_unlock(*puVar5);
            }
         } else {
            CRYPTO_THREAD_unlock(*puVar5);
            if (ptr != (undefined8*)0x0) {
               LAB_001005c8:uVar4 = *(undefined4*)( ptr + 1 );
               goto LAB_001005dc;
            }
         }
      }
   }
   LAB_001005da:uVar4 = 0;
   LAB_001005dc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_property_value_str(undefined8 param_1, int param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   puVar2 = (undefined8*)ossl_lib_ctx_get_data(param_1, 3);
   if (puVar2 != (undefined8*)0x0) {
      iVar1 = CRYPTO_THREAD_read_lock(*puVar2);
      if (iVar1 != 0) {
         uVar3 = OPENSSL_sk_value(puVar2[5], param_2 + -1);
         CRYPTO_THREAD_unlock(*puVar2);
         return uVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/property/property_string.c", 0xe3, "ossl_property_str");
      ERR_set_error(0xf, 0xc010f, 0);
   }
   return 0;
}

void *CRYPTO_malloc(int num, char *file, int line) {
   void *pvVar1;
   undefined4 in_register_0000003c;
   size_t __size;
   __size = CONCAT44(in_register_0000003c, num);
   if (malloc_impl == _GLOBAL_OFFSET_TABLE_) {
      if (__size == 0) {
         return (void*)0x0;
      }
      if (allow_customize != 0) {
         allow_customize = 0;
      }
      pvVar1 = malloc(__size);
      if (pvVar1 != (void*)0x0) {
         return pvVar1;
      }
   } else {
      pvVar1 = (void*)( *(code*)malloc_impl )();
      if (pvVar1 != (void*)0x0) {
         return pvVar1;
      }
      if (__size == 0) {
         return (void*)0x0;
      }
   }
   if (( file == (char*)0x0 ) && ( line == 0 )) {
      return (void*)0x0;
   }
   ERR_new();
   ERR_set_debug(file, line, 0);
   ERR_set_error(0xf, 0xc0100, 0);
   return (void*)0x0;
}void CRYPTO_free(void *ptr) {
   if (free_impl != PTR_CRYPTO_free_00102008) {
      for (int i_42 = 0; i_42 < 2; i_42++) {
         /* WARNING: Could not recover jumptable at 0x001000b4. Too many branches */
      }
      ( *(code*)free_impl )();
      return;
   }
   free(ptr);
   return;
}void *CRYPTO_realloc(void *addr, int num, char *file, int line) {
   void *pvVar1;
   undefined4 in_register_00000034;
   size_t __size;
   __size = CONCAT44(in_register_00000034, num);
   if (realloc_impl != PTR_CRYPTO_realloc_00102010) {
      for (int i_43 = 0; i_43 < 2; i_43++) {
         /* WARNING: Could not recover jumptable at 0x001000ed. Too many branches */
      }
      pvVar1 = (void*)( *(code*)realloc_impl )(addr, __size);
      return pvVar1;
   }
   if (addr != (void*)0x0) {
      if (__size != 0) {
         pvVar1 = realloc(addr, __size);
         return pvVar1;
      }
      CRYPTO_free(addr);
      return (void*)0x0;
   }
   pvVar1 = CRYPTO_malloc(num, file, line);
   return pvVar1;
}int CRYPTO_set_mem_functions(m *m, r *r, f *f) {
   if (allow_customize != 0) {
      if (m != (m*)0x0) {
         malloc_impl = m;
      }
      if (r != (r*)0x0) {
         realloc_impl = r;
      }
      if (f != (f*)0x0) {
         free_impl = f;
      }
      return 1;
   }
   return 0;
}void CRYPTO_get_mem_functions(m **m, r **r, f **f) {
   if (m != (m**)0x0) {
      *m = (m*)malloc_impl;
   }
   if (r != (r**)0x0) {
      *r = (r*)realloc_impl;
   }
   if (f != (f**)0x0) {
      *f = (f*)free_impl;
   }
   return;
}void *CRYPTO_zalloc(size_t param_1, char *param_2, int param_3) {
   void *__s;
   __s = CRYPTO_malloc((int)param_1, param_2, param_3);
   if (__s != (void*)0x0) {
      __s = memset(__s, 0, param_1);
   }
   return __s;
}void *CRYPTO_aligned_alloc(size_t param_1, size_t param_2, ulong *param_3, char *param_4, int param_5) {
   int iVar1;
   void *pvVar2;
   long in_FS_OFFSET;
   bool bVar3;
   void *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar3 = (code*)malloc_impl == CRYPTO_malloc;
   *param_3 = 0;
   if (bVar3) {
      iVar1 = posix_memalign(&local_28, param_2, param_1);
      if (iVar1 == 0) {
         *param_3 = (ulong)local_28;
         goto LAB_00100249;
      }
   } else {
      pvVar2 = CRYPTO_malloc((int)param_1 + (int)param_2, param_4, param_5);
      *param_3 = (ulong)pvVar2;
      if (pvVar2 != (void*)0x0) {
         local_28 = (void*)( (long)pvVar2 + ( param_2 - 1 ) & -param_2 );
         goto LAB_00100249;
      }
   }
   local_28 = (void*)0x0;
   LAB_00100249:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void CRYPTO_clear_free(void *param_1, size_t param_2) {
   if (param_1 != (void*)0x0) {
      if (param_2 != 0) {
         OPENSSL_cleanse(param_1, param_2);
      }
      CRYPTO_free(param_1);
      return;
   }
   return;
}void *CRYPTO_clear_realloc(void *param_1, ulong param_2, ulong param_3, char *param_4, int param_5) {
   void *pvVar1;
   if (param_1 == (void*)0x0) {
      pvVar1 = CRYPTO_malloc((int)param_3, param_4, param_5);
      return pvVar1;
   }
   if (param_3 == 0) {
      pvVar1 = (void*)0x0;
      CRYPTO_clear_free(param_1, param_2, param_4, param_5);
   } else {
      if (param_3 < param_2) {
         OPENSSL_cleanse((void*)( param_3 + (long)param_1 ), param_2 - param_3);
         return param_1;
      }
      pvVar1 = CRYPTO_malloc((int)param_3, param_4, param_5);
      if (pvVar1 != (void*)0x0) {
         memcpy(pvVar1, param_1, param_2);
         CRYPTO_clear_free(param_1, param_2, param_4, param_5);
      }
   }
   return pvVar1;
}

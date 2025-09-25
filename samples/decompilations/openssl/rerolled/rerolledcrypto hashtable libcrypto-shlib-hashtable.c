void internal_free_nop(void) {
   return;
}
void free_old_entry(void *param_1) {
   ( **(code**)( *(long*)( (long)param_1 + 0x20 ) + 8 ) )();
   CRYPTO_free(param_1);
   return;
}
void free_old_neigh_table(void *param_1) {
   CRYPTO_free(*(void**)( (long)param_1 + 8 ));
   CRYPTO_free(param_1);
   return;
}
void free_old_ht_value(void *param_1) {
   CRYPTO_free(param_1);
   return;
}
void free_oldmd(long *param_1) {
   long lVar1;
   void *ptr;
   long lVar2;
   long lVar3;
   long lVar4;
   bool bVar5;
   lVar1 = param_1[2];
   lVar3 = 0;
   if (lVar1 != -1) {
      do {
         lVar2 = *param_1;
         lVar4 = 0;
         while (true) {
            ptr = *(void**)( ( lVar3 + 1 ) * 0x40 + -0x38 + lVar2 + lVar4 * 0x10 );
            if (ptr != (void*)0x0) {
               ( **(code**)( *(long*)( (long)ptr + 0x20 ) + 8 ) )(ptr);
               CRYPTO_free(ptr);
            }

            lVar4 = lVar4 + 1;
            if (lVar4 == 4) break;
            lVar2 = *param_1;
         }
;
         bVar5 = lVar1 != lVar3;
         lVar3 = lVar3 + 1;
      }
 while ( bVar5 );
   }

   CRYPTO_free((void*)param_1[1]);
   CRYPTO_free(param_1);
   return;
}
undefined8 grow_hashtable(long param_1, long param_2) {
   ulong uVar1;
   long lVar2;
   ulong uVar3;
   ulong *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   void *pvVar7;
   undefined8 uVar8;
   ulong uVar9;
   ulong *puVar10;
   size_t __n;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   undefined8 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = (undefined8*)ossl_rcu_uptr_deref(param_1 + 0x38);
   if (*(int*)( param_1 + 0x24 ) == 0) {
      puVar6 = (undefined8*)CRYPTO_zalloc(0x18, "crypto/hashtable/hashtable.c", 0x1b3);
      local_48 = puVar6;
      if (puVar6 != (undefined8*)0x0) {
         __n = param_2 << 7;
         pvVar7 = (void*)CRYPTO_aligned_alloc(__n, 0x40, puVar6 + 1, "crypto/hashtable/hashtable.c", 0x9d);
         if (pvVar7 == (void*)0x0) {
            pvVar7 = CRYPTO_malloc((int)__n, "crypto/hashtable/hashtable.c", 0xa2);
            puVar6[1] = pvVar7;
            if (pvVar7 != (void*)0x0) goto LAB_0010022d;
            pvVar7 = (void*)0x0;
         }
 else {
            LAB_0010022d:pvVar7 = memset(pvVar7, 0, __n);
         }

         *puVar6 = pvVar7;
         pvVar7 = (void*)*local_48;
         if (pvVar7 != (void*)0x0) {
            param_2 = param_2 * 2;
            lVar2 = *(long*)( param_1 + 0x40 );
            uVar1 = param_2 - 1;
            local_48[2] = uVar1;
            if (lVar2 != 0) {
               lVar11 = 0;
               puVar4 = (ulong*)*puVar5;
               do {
                  if (puVar4[1] != 0) {
                     uVar3 = *puVar4;
                     lVar12 = 0;
                     uVar9 = uVar1 & uVar3;
                     if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 8 ) == 0) {
                        LAB_001002ed:puVar10 = (ulong*)( (long)pvVar7 + lVar12 * 0x10 + uVar9 * 0x40 );
                        puVar10[1] = puVar4[1];
                        *puVar10 = uVar3;
                        goto LAB_001002fb;
                     }

                     for (int i = 0; i < 3; i++) {
                        if (*(long*)( (long)pvVar7 + uVar9 * 64 + ( 16*i + 24 ) ) == 0) {
                           lVar12 = ( i + 1 );
                           goto LAB_001002ed;
                        }

                     }

                     LAB_001002b8:CRYPTO_free(pvVar7);
                     CRYPTO_free(local_48);
                     uVar8 = grow_hashtable(param_1, param_2);
                     goto LAB_001001a9;
                  }

                  LAB_001002fb:if (puVar4[3] != 0) {
                     uVar3 = puVar4[2];
                     lVar12 = 0;
                     uVar9 = uVar1 & uVar3;
                     if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 8 ) != 0) {
                        if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x18 ) == 0) {
                           lVar12 = 1;
                        }
 else if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x28 ) == 0) {
                           lVar12 = 2;
                        }
 else {
                           if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x38 ) != 0) goto LAB_001002b8;
                           lVar12 = 3;
                        }

                     }

                     puVar10 = (ulong*)( (long)pvVar7 + lVar12 * 0x10 + uVar9 * 0x40 );
                     puVar10[1] = puVar4[3];
                     *puVar10 = uVar3;
                  }

                  if (puVar4[5] != 0) {
                     uVar3 = puVar4[4];
                     lVar12 = 0;
                     uVar9 = uVar1 & uVar3;
                     if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 8 ) != 0) {
                        if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x18 ) == 0) {
                           lVar12 = 1;
                        }
 else if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x28 ) == 0) {
                           lVar12 = 2;
                        }
 else {
                           if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x38 ) != 0) goto LAB_001002b8;
                           lVar12 = 3;
                        }

                     }

                     puVar10 = (ulong*)( (long)pvVar7 + lVar12 * 0x10 + uVar9 * 0x40 );
                     puVar10[1] = puVar4[5];
                     *puVar10 = uVar3;
                  }

                  if (puVar4[7] != 0) {
                     uVar3 = puVar4[6];
                     lVar12 = 0;
                     uVar9 = uVar1 & uVar3;
                     if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 8 ) != 0) {
                        if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x18 ) == 0) {
                           lVar12 = 1;
                        }
 else if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x28 ) == 0) {
                           lVar12 = 2;
                        }
 else {
                           if (*(long*)( (long)pvVar7 + uVar9 * 0x40 + 0x38 ) != 0) goto LAB_001002b8;
                           lVar12 = 3;
                        }

                     }

                     puVar10 = (ulong*)( (long)pvVar7 + lVar12 * 0x10 + uVar9 * 0x40 );
                     puVar10[1] = puVar4[7];
                     *puVar10 = uVar3;
                  }

                  lVar11 = lVar11 + 1;
                  puVar4 = puVar4 + 8;
               }
 while ( lVar11 != lVar2 );
            }

            *(long*)( param_1 + 0x40 ) = param_2;
            ossl_rcu_assign_uptr(param_1 + 0x38, &local_48);
            ossl_rcu_call(*(undefined8*)( param_1 + 0x28 ), free_old_neigh_table, puVar5);
            *(undefined4*)( param_1 + 0x50 ) = 1;
            uVar8 = 1;
            goto LAB_001001a9;
         }

         CRYPTO_free((void*)0x0);
         CRYPTO_free(local_48);
      }

   }

   uVar8 = 0;
   LAB_001001a9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 *ossl_ht_new(undefined8 *param_1) {
   undefined8 uVar1;
   long *plVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 *ptr;
   long lVar6;
   undefined8 *puVar7;
   void *pvVar8;
   ulong uVar9;
   size_t __n;
   ptr = (undefined8*)CRYPTO_zalloc(0x58, "crypto/hashtable/hashtable.c", 0xb1);
   if (ptr == (undefined8*)0x0) {
      return (undefined8*)0x0;
   }

   lVar6 = CRYPTO_THREAD_lock_new();
   ptr[6] = lVar6;
   if (lVar6 == 0) goto LAB_00100684;
   uVar3 = param_1[3];
   uVar1 = param_1[4];
   uVar4 = *param_1;
   uVar5 = param_1[1];
   ptr[2] = param_1[2];
   ptr[3] = uVar3;
   ptr[4] = uVar1;
   *ptr = uVar4;
   ptr[1] = uVar5;
   if (ptr[3] == 0) {
      lVar6 = ptr[1];
      ptr[8] = 0x10;
   }
 else {
      uVar9 = ptr[3] - 1;
      uVar9 = uVar9 >> 1 | uVar9;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 >> 8 | uVar9;
      lVar6 = ptr[1];
      ptr[8] = ( uVar9 >> 0x10 | uVar9 ) + 1;
   }

   if (lVar6 == 0) {
      ptr[1] = 0x100000;
   }

   puVar7 = (undefined8*)CRYPTO_zalloc(0x18, "crypto/hashtable/hashtable.c", 0xcd);
   ptr[7] = puVar7;
   if (puVar7 != (undefined8*)0x0) {
      __n = ptr[8] << 6;
      pvVar8 = (void*)CRYPTO_aligned_alloc(__n, 0x40, puVar7 + 1, "crypto/hashtable/hashtable.c", 0x9d);
      if (pvVar8 == (void*)0x0) {
         pvVar8 = CRYPTO_malloc((int)__n, "crypto/hashtable/hashtable.c", 0xa2);
         puVar7[1] = pvVar8;
         if (pvVar8 != (void*)0x0) goto LAB_001005c0;
         pvVar8 = (void*)0x0;
      }
 else {
         LAB_001005c0:pvVar8 = memset(pvVar8, 0, __n);
      }

      plVar2 = (long*)ptr[7];
      *puVar7 = pvVar8;
      if (*plVar2 != 0) {
         uVar1 = *param_1;
         plVar2[2] = ptr[8] + -1;
         lVar6 = ossl_rcu_lock_new(1, uVar1);
         ptr[5] = lVar6;
         if (lVar6 != 0) {
            if (ptr[2] != 0) {
               return ptr;
            }

            ptr[2] = &ossl_fnv1a_hash;
            return ptr;
         }

      }

   }

   lVar6 = ptr[6];
   LAB_00100684:CRYPTO_THREAD_lock_free(lVar6);
   ossl_rcu_lock_free(ptr[5]);
   pvVar8 = (void*)ptr[7];
   if (pvVar8 != (void*)0x0) {
      CRYPTO_free(*(void**)( (long)pvVar8 + 8 ));
      pvVar8 = (void*)ptr[7];
   }

   CRYPTO_free(pvVar8);
   CRYPTO_free(ptr);
   return (undefined8*)0x0;
}
void ossl_ht_read_lock(long param_1) {
   ossl_rcu_read_lock(*(undefined8*)( param_1 + 0x28 ));
   return;
}
void ossl_ht_read_unlock(long param_1) {
   ossl_rcu_read_unlock(*(undefined8*)( param_1 + 0x28 ));
   return;
}
void ossl_ht_write_lock(long param_1) {
   ossl_rcu_write_lock(*(undefined8*)( param_1 + 0x28 ));
   *(undefined4*)( param_1 + 0x50 ) = 0;
   return;
}
void ossl_ht_write_unlock(long param_1) {
   int iVar1;
   iVar1 = *(int*)( param_1 + 0x50 );
   *(undefined4*)( param_1 + 0x50 ) = 0;
   ossl_rcu_write_unlock(*(undefined8*)( param_1 + 0x28 ));
   if (iVar1 == 0) {
      return;
   }

   ossl_synchronize_rcu(*(undefined8*)( param_1 + 0x28 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ossl_ht_flush(long param_1) {
   long *plVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   byte bVar7;
   long *local_28;
   long local_20;
   bVar7 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (long*)0x0;
   plVar1 = (long*)CRYPTO_zalloc(0x18, "crypto/hashtable/hashtable.c", 0x120);
   local_28 = plVar1;
   if (plVar1 != (long*)0x0) {
      puVar2 = (undefined8*)CRYPTO_aligned_alloc(0x400, 0x40, plVar1 + 1, "crypto/hashtable/hashtable.c", 0x9d);
      if (puVar2 == (undefined8*)0x0) {
         puVar2 = (undefined8*)CRYPTO_malloc(0x400, "crypto/hashtable/hashtable.c", 0xa2);
         plVar1[1] = (long)puVar2;
         if (puVar2 != (undefined8*)0x0) goto LAB_00100818;
      }
 else {
         LAB_00100818:*puVar2 = 0;
         puVar2[0x7f] = 0;
         puVar6 = (undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
         for (uVar5 = ( ulong )(( (int)puVar2 - (int)(undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) ) + 0x400U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
         }

      }

      *plVar1 = (long)puVar2;
      if (*local_28 != 0) {
         local_28[2] = 0xf;
         uVar3 = ossl_rcu_uptr_deref(param_1 + 0x38);
         ossl_rcu_assign_uptr(param_1 + 0x38, &local_28);
         uVar4 = _UNK_00101668;
         *(undefined8*)( param_1 + 0x40 ) = __LC1;
         *(undefined8*)( param_1 + 0x48 ) = uVar4;
         ossl_rcu_call(*(undefined8*)( param_1 + 0x28 ), free_oldmd, uVar3);
         *(undefined4*)( param_1 + 0x50 ) = 1;
         uVar4 = 1;
         goto LAB_001008a1;
      }

      CRYPTO_free(local_28);
   }

   uVar4 = 0;
   LAB_001008a1:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_ht_free(void *param_1) {
   undefined8 uVar1;
   long *plVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   byte bVar7;
   long *local_38;
   long local_30;
   bVar7 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (void*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      goto LAB_00100ab2;
   }

   ossl_ht_write_lock();
   local_38 = (long*)0x0;
   plVar2 = (long*)CRYPTO_zalloc(0x18, "crypto/hashtable/hashtable.c", 0x120);
   local_38 = plVar2;
   if (plVar2 != (long*)0x0) {
      puVar3 = (undefined8*)CRYPTO_aligned_alloc(0x400, 0x40, plVar2 + 1, "crypto/hashtable/hashtable.c", 0x9d);
      if (puVar3 == (undefined8*)0x0) {
         puVar3 = (undefined8*)CRYPTO_malloc(0x400, "crypto/hashtable/hashtable.c", 0xa2);
         plVar2[1] = (long)puVar3;
         if (puVar3 != (undefined8*)0x0) goto LAB_00100988;
      }
 else {
         LAB_00100988:*puVar3 = 0;
         puVar3[0x7f] = 0;
         puVar6 = (undefined8*)( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 );
         for (uVar5 = ( ulong )(( (int)puVar3 - (int)(undefined8*)( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 ) ) + 0x400U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
         }

      }

      *plVar2 = (long)puVar3;
      if (*local_38 == 0) {
         CRYPTO_free(local_38);
      }
 else {
         local_38[2] = 0xf;
         uVar4 = ossl_rcu_uptr_deref((long)param_1 + 0x38);
         ossl_rcu_assign_uptr((long)param_1 + 0x38, &local_38);
         uVar1 = _UNK_00101668;
         *(undefined8*)( (long)param_1 + 0x40 ) = __LC1;
         *(undefined8*)( (long)param_1 + 0x48 ) = uVar1;
         ossl_rcu_call(*(undefined8*)( (long)param_1 + 0x28 ), free_oldmd, uVar4);
         *(undefined4*)( (long)param_1 + 0x50 ) = 1;
      }

   }

   ossl_ht_write_unlock(param_1);
   CRYPTO_THREAD_lock_free(*(undefined8*)( (long)param_1 + 0x30 ));
   ossl_rcu_lock_free(*(undefined8*)( (long)param_1 + 0x28 ));
   CRYPTO_free(*(void**)( *(long*)( (long)param_1 + 0x38 ) + 8 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x38 ));
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CRYPTO_free(param_1);
      return;
   }

   LAB_00100ab2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 ossl_ht_count(long param_1) {
   return *(undefined8*)( param_1 + 0x48 );
}
void ossl_ht_foreach_until(long param_1, code *param_2, undefined8 param_3) {
   int iVar1;
   long *plVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   plVar2 = (long*)ossl_rcu_uptr_deref(param_1 + 0x38);
   if (plVar2[2] != -1) {
      uVar4 = 0;
      do {
         uVar4 = uVar4 + 1;
         lVar3 = *plVar2;
         lVar5 = 0;
         while (true) {
            lVar3 = *(long*)( uVar4 * 0x40 + -0x38 + lVar3 + lVar5 * 0x10 );
            if (( lVar3 != 0 ) && ( iVar1 = iVar1 == 0 )) {
               return;
            }

            lVar5 = lVar5 + 1;
            if (lVar5 == 4) break;
            lVar3 = *plVar2;
         }
;
      }
 while ( uVar4 < plVar2[2] + 1U );
   }

   return;
}
long *ossl_ht_filter(long param_1, long param_2, code *param_3, undefined8 param_4) {
   long lVar1;
   long lVar2;
   int iVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   plVar4 = (long*)CRYPTO_zalloc(param_2 * 8 + 0x10, "crypto/hashtable/hashtable.c", 0x171);
   if (plVar4 != (long*)0x0) {
      plVar4[1] = (long)( plVar4 + 2 );
      plVar5 = (long*)ossl_rcu_uptr_deref(param_1 + 0x38);
      if (plVar5[2] != -1) {
         uVar7 = 0;
         do {
            uVar7 = uVar7 + 1;
            lVar6 = *plVar5;
            lVar8 = 0;
            while (true) {
               lVar6 = *(long*)( uVar7 * 0x40 + -0x38 + lVar6 + lVar8 * 0x10 );
               if (( lVar6 != 0 ) && ( iVar3 = iVar3 != 0 )) {
                  lVar2 = *plVar4;
                  lVar1 = lVar2 + 1;
                  *plVar4 = lVar1;
                  *(long*)( plVar4[1] + lVar2 * 8 ) = lVar6;
                  if (lVar1 == param_2) {
                     return plVar4;
                  }

               }

               lVar8 = lVar8 + 1;
               if (lVar8 == 4) break;
               lVar6 = *plVar5;
            }
;
         }
 while ( uVar7 < plVar5[2] + 1U );
      }

   }

   return plVar4;
}
void ossl_ht_value_list_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}
undefined4 ossl_ht_insert(long param_1, size_t *param_2, long *param_3, undefined8 *param_4) {
   long lVar1;
   size_t __n;
   void *__src;
   long *plVar2;
   int iVar3;
   undefined4 uVar4;
   long *ptr;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   long local_88;
   int local_6c;
   long *local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *param_3;
   if (lVar6 != 0) {
      iVar3 = 0x28;
      lVar11 = param_3[1];
      if (*(int*)( param_1 + 0x20 ) == 1) {
         iVar3 = (int)*param_2 + 0x28;
      }

      ptr = (long*)CRYPTO_malloc(iVar3, "crypto/hashtable/hashtable.c", 0x25c);
      if (ptr != (long*)0x0) {
         iVar3 = *(int*)( param_1 + 0x20 );
         ptr[4] = param_1;
         __n = *param_2;
         __src = (void*)param_2[1];
         ptr[3] = 0;
         *ptr = lVar6;
         ptr[1] = lVar11;
         if (iVar3 != 0) {
            ptr[2] = __n;
            ptr[3] = (long)( ptr + 5 );
            memcpy(ptr + 5, __src, __n);
         }

         uVar5 = ( **(code**)( param_1 + 0x10 ) )(__src, __n);
         local_6c = 5;
         LAB_00100d6a:plVar2 = *(long**)( param_1 + 0x38 );
         uVar8 = uVar5 & plVar2[2];
         uVar7 = uVar8;
         local_50 = ptr;
         if (*(int*)( param_1 + 0x24 ) == 0) {
            lVar6 = *plVar2;
            lVar12 = uVar8 * 0x40;
            lVar9 = 0;
            local_88 = -1;
            lVar11 = lVar12;
            do {
               lVar10 = lVar9 * 0x10;
               lVar1 = lVar10 + 8;
               lVar6 = ossl_rcu_uptr_deref(lVar6 + lVar12 + lVar1);
               if (lVar6 == 0) {
                  local_88 = lVar9;
                  if (lVar9 == 3) goto LAB_0010116e;
               }
 else {
                  iVar3 = CRYPTO_atomic_load(*plVar2 + lVar11, &local_48, *(undefined8*)( param_1 + 0x30 ));
                  if (iVar3 == 0) goto LAB_00101010;
                  if (uVar5 == local_48) {
                     if (( ( *(void**)( lVar6 + 0x18 ) == (void*)0x0 ) || ( (void*)local_50[3] == (void*)0x0 ) ) || ( ( local_50[2] != *(size_t*)( lVar6 + 0x10 ) || ( iVar3 = memcmp((void*)local_50[3], *(void**)( lVar6 + 0x18 ), local_50[2]) ),iVar3 == 0 ) )) goto LAB_00100ffe;
                  }

                  if (lVar9 == 3) goto code_r0x00100ebd;
               }

               lVar9 = lVar9 + 1;
               lVar11 = lVar11 + 0x10;
               lVar6 = *plVar2;
            }
 while ( true );
         }

         do {
            lVar6 = *plVar2;
            lVar9 = 0;
            lVar12 = uVar7 * 0x40;
            lVar11 = lVar12;
            while (true) {
               lVar10 = lVar9 * 0x10;
               lVar1 = lVar10 + 8;
               lVar6 = ossl_rcu_uptr_deref(lVar6 + lVar12 + lVar1);
               if (lVar6 == 0) goto LAB_00100f0e;
               iVar3 = CRYPTO_atomic_load(*plVar2 + lVar11, &local_48, *(undefined8*)( param_1 + 0x30 ));
               if (iVar3 == 0) goto LAB_00101010;
               if (uVar5 == local_48) {
                  if (( ( ( (void*)local_50[3] == (void*)0x0 ) || ( *(void**)( lVar6 + 0x18 ) == (void*)0x0 ) ) || ( local_50[2] != *(size_t*)( lVar6 + 0x10 ) ) ) || ( iVar3 = memcmp((void*)local_50[3], *(void**)( lVar6 + 0x18 ), local_50[2]) ),iVar3 == 0) goto LAB_00100ffe;
               }

               lVar9 = lVar9 + 1;
               lVar11 = lVar11 + 0x10;
               if (lVar9 == 4) break;
               lVar6 = *plVar2;
            }
;
            uVar7 = uVar7 + 1 & plVar2[2];
         }
 while ( uVar8 != uVar7 );
         goto LAB_00100ece;
      }

   }

   uVar4 = 0;
   LAB_00100f47:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
   LAB_00100ffe:local_88 = lVar1;
   if (( param_4 == (undefined8*)0x0 ) || ( iVar3 = CRYPTO_atomic_store(lVar12 + lVar10 + *plVar2, uVar5, *(undefined8*)( param_1 + 0x30 )) ),iVar3 == 0) goto LAB_00101010;
   lVar6 = *plVar2;
   *param_4 = *(undefined8*)( lVar6 + lVar12 + 8 + lVar9 * 0x10 );
   ossl_rcu_assign_uptr(local_88 + lVar6 + lVar12, &local_50);
   ossl_rcu_call(*(undefined8*)( param_1 + 0x28 ), free_old_ht_value, *param_4);
   *(undefined4*)( param_1 + 0x50 ) = 1;
   goto LAB_00100f42;
   code_r0x00100ebd:if (local_88 == -1) {
      LAB_00100ece:local_6c = local_6c + -1;
      if (( local_6c == 0 ) || ( iVar3 = iVar3 == 0 )) goto LAB_00100ef0;
      goto LAB_00100d6a;
   }

   LAB_0010116e:lVar10 = local_88 << 4;
   LAB_00100f0e:iVar3 = CRYPTO_atomic_store(lVar12 + lVar10 + *plVar2, uVar5, *(undefined8*)( param_1 + 0x30 ));
   if (iVar3 == 0) {
      LAB_00101010:uVar4 = 0;
      goto LAB_00101012;
   }

   *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
   ossl_rcu_assign_uptr(lVar12 + 8 + lVar10 + *plVar2, &local_50);
   LAB_00100f42:uVar4 = 1;
   goto LAB_00100f47;
   LAB_00100ef0:uVar4 = 0xffffffff;
   LAB_00101012:CRYPTO_free(ptr);
   goto LAB_00100f47;
}
long ossl_ht_get(long param_1, size_t *param_2) {
   int iVar1;
   ulong uVar2;
   long *plVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   long in_FS_OFFSET;
   ulong local_60;
   ulong local_48;
   long local_40;
   iVar1 = *(int*)( param_1 + 0x24 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = ( **(code**)( param_1 + 0x10 ) )(param_2[1], *param_2);
   plVar3 = (long*)ossl_rcu_uptr_deref(param_1 + 0x38);
   uVar5 = uVar2 & plVar3[2];
   if (iVar1 != 0) {
      local_60 = uVar5;
      do {
         lVar4 = *plVar3;
         lVar6 = 8;
         while (true) {
            lVar4 = ossl_rcu_uptr_deref(lVar4 + local_60 * 0x40 + lVar6);
            if (( lVar4 == 0 ) || ( iVar1 = CRYPTO_atomic_load(local_60 * 0x40 + -8 + lVar6 + *plVar3, &local_48, *(undefined8*)( param_1 + 0x30 )) ),iVar1 == 0) goto LAB_00101278;
            if (local_48 == uVar2) {
               if (( ( (void*)param_2[1] == (void*)0x0 ) || ( *(void**)( lVar4 + 0x18 ) == (void*)0x0 ) ) || ( ( *(size_t*)( lVar4 + 0x10 ) != *param_2 || ( iVar1 = memcmp(*(void**)( lVar4 + 0x18 ), (void*)param_2[1], *(size_t*)( lVar4 + 0x10 )) ),iVar1 == 0 ) )) goto LAB_0010127b;
            }

            lVar6 = lVar6 + 0x10;
            if (lVar6 == 0x48) break;
            lVar4 = *plVar3;
         }
;
         local_60 = local_60 + 1 & plVar3[2];
      }
 while ( uVar5 != local_60 );
      LAB_00101278:lVar4 = 0;
      LAB_0010127b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return lVar4;
   }

   lVar4 = *plVar3;
   lVar6 = 8;
   do {
      lVar4 = ossl_rcu_uptr_deref(lVar4 + uVar5 * 0x40 + lVar6);
      if (lVar4 != 0) {
         iVar1 = CRYPTO_atomic_load(uVar5 * 0x40 + -8 + lVar6 + *plVar3, &local_48, *(undefined8*)( param_1 + 0x30 ));
         if (iVar1 == 0) goto LAB_00101278;
         if (uVar2 == local_48) {
            if (( ( ( (void*)param_2[1] == (void*)0x0 ) || ( *(void**)( lVar4 + 0x18 ) == (void*)0x0 ) ) || ( *(size_t*)( lVar4 + 0x10 ) != *param_2 ) ) || ( iVar1 = memcmp(*(void**)( lVar4 + 0x18 ), (void*)param_2[1], *(size_t*)( lVar4 + 0x10 )) ),iVar1 == 0) goto LAB_0010127b;
         }

      }

      lVar6 = lVar6 + 0x10;
      if (lVar6 == 0x48) goto LAB_00101278;
      lVar4 = *plVar3;
   }
 while ( true );
}
undefined8 ossl_ht_delete(long param_1, size_t *param_2) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   ulong *puVar7;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (*(int*)( param_1 + 0x24 ) != 0) goto LAB_0010144c;
   uVar2 = ( **(code**)( param_1 + 0x10 ) )(param_2[1], *param_2);
   lVar5 = ( ( *(long**)( param_1 + 0x38 ) )[2] & uVar2 ) * 0x40;
   puVar7 = (ulong*)( **(long**)( param_1 + 0x38 ) + lVar5 );
   uVar6 = puVar7[1];
   if (( uVar6 == 0 ) || ( uVar2 != *puVar7 )) {
      LAB_00101413:uVar6 = puVar7[3];
      if (( uVar6 != 0 ) && ( uVar2 == puVar7[2] )) {
         if (( *(void**)( uVar6 + 0x18 ) == (void*)0x0 ) || ( (void*)param_2[1] == (void*)0x0 )) {
            lVar4 = 1;
         }
 else {
            lVar4 = 1;
            if (*param_2 == *(size_t*)( uVar6 + 0x10 )) {
               iVar1 = memcmp((void*)param_2[1], *(void**)( uVar6 + 0x18 ), *param_2);
               lVar4 = 1;
               if (iVar1 != 0) goto LAB_00101426;
            }

         }

         goto LAB_001014b0;
      }

      LAB_00101426:uVar6 = puVar7[5];
      if (( uVar6 != 0 ) && ( uVar2 == puVar7[4] )) {
         if (( *(void**)( uVar6 + 0x18 ) == (void*)0x0 ) || ( (void*)param_2[1] == (void*)0x0 )) {
            lVar4 = 2;
         }
 else {
            lVar4 = 2;
            if (*param_2 == *(size_t*)( uVar6 + 0x10 )) {
               iVar1 = memcmp((void*)param_2[1], *(void**)( uVar6 + 0x18 ), *param_2);
               lVar4 = 2;
               if (iVar1 != 0) goto LAB_00101439;
            }

         }

         goto LAB_001014b0;
      }

      LAB_00101439:uVar6 = puVar7[7];
      if (( uVar6 != 0 ) && ( puVar7[6] == uVar2 )) {
         if (( *(void**)( uVar6 + 0x18 ) == (void*)0x0 ) || ( ( ( (void*)param_2[1] == (void*)0x0 || ( *param_2 != *(size_t*)( uVar6 + 0x10 ) ) ) || ( iVar1 = memcmp((void*)param_2[1], *(void**)( uVar6 + 0x18 ), *param_2) ),iVar1 == 0 ) )) {
            lVar4 = 3;
            goto LAB_001014b0;
         }

      }

   }
 else {
      if (( *(void**)( uVar6 + 0x18 ) == (void*)0x0 ) || ( (void*)param_2[1] == (void*)0x0 )) {
         lVar4 = 0;
      }
 else {
         lVar4 = 0;
         if (*param_2 == *(size_t*)( uVar6 + 0x10 )) {
            iVar1 = memcmp((void*)param_2[1], *(void**)( uVar6 + 0x18 ), *param_2);
            lVar4 = 0;
            if (iVar1 != 0) goto LAB_00101413;
         }

      }

      LAB_001014b0:iVar1 = CRYPTO_atomic_store(puVar7 + lVar4 * 2, 0, *(undefined8*)( param_1 + 0x30 ));
      if (iVar1 != 0) {
         *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + -1;
         ossl_rcu_assign_uptr(lVar5 + 8 + lVar4 * 0x10 + **(long**)( param_1 + 0x38 ), &local_48);
         ossl_rcu_call(*(undefined8*)( param_1 + 0x28 ), free_old_entry, uVar6);
         uVar3 = 1;
         *(undefined4*)( param_1 + 0x50 ) = 1;
         goto LAB_0010144e;
      }

   }

   LAB_0010144c:uVar3 = 0;
   LAB_0010144e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}


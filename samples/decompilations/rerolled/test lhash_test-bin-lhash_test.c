void lh_int_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1846 = 0; i_1846 < 2; i_1846++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_int_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1847 = 0; i_1847 < 2; i_1847++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_int_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1848 = 0; i_1848 < 2; i_1848++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_int_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1849 = 0; i_1849 < 2; i_1849++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}uint int_hash(uint *param_1) {
   return *param_1 & 3;
}bool int_cmp(int *param_1, int *param_2) {
   return *param_1 != *param_2;
}undefined8 int_filter_all(void) {
   return 1;
}undefined4 hashtable_hash(undefined4 *param_1) {
   return *param_1;
}long stress_hash(int *param_1) {
   return (long)*param_1;
}void hashtable_mt_free(undefined8 *param_1) {
   long in_FS_OFFSET;
   int local_18;
   undefined1 local_14[4];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (undefined8*)0x0) {
      if ((undefined8*)param_1[1] == &mt_TEST_MT_ENTRY_id) {
         param_1 = (undefined8*)*param_1;
      } else {
         param_1 = (undefined8*)0x0;
      }
   }
   CRYPTO_atomic_load_int((long)param_1 + 4, &local_18, worker_lock);
   if (shutting_down != 1) {
      if (local_18 == 0) {
         test_info("test/lhash_test.c", 0x20d, "Freeing element which was not scheduled for free");
         free_failure = 1;
      } else {
         CRYPTO_atomic_add((long)param_1 + 4, 0xffffffff, local_14, worker_lock);
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 thread_run(code *param_1) {
   ( *param_1 )();
   OPENSSL_thread_stop();
   return 0;
}void hashtable_intfree(undefined8 *param_1) {
   CRYPTO_free((void*)*param_1);
   return;
}undefined8 int_foreach(undefined8 *param_1) {
   code *pcVar1;
   long lVar2;
   if (( param_1 != (undefined8*)0x0 ) && ( (undefined8*)param_1[1] == &test_int_id )) {
      lVar2 = 0;
      do {
         if (*(int*)*param_1 == ( &int_tests )[lVar2]) {
            ( &int_found )[(int)lVar2] = ( &int_found )[(int)lVar2] + 1;
            return 1;
         }
         lVar2 = lVar2 + 1;
      } while ( lVar2 != 0x15 );
      int_not_found = int_not_found + 1;
      return 1;
   }
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}void do_mt_hash_work(void) {
   long lVar1;
   undefined8 uVar2;
   byte bVar3;
   byte bVar4;
   int iVar5;
   int iVar6;
   uint uVar7;
   char *pcVar8;
   long **pplVar9;
   byte bVar10;
   char *pcVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   long in_FS_OFFSET;
   undefined8 **local_b0;
   int local_a4;
   undefined1 local_a0[4];
   undefined4 local_9c;
   undefined8 *local_98;
   long *local_90;
   size_t local_88;
   undefined8 *local_80;
   undefined8 local_78[2];
   undefined8 *local_68;
   undefined8 *local_60;
   long local_40;
   lVar14 = 1000000;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   CRYPTO_atomic_add(&worker_num, 1, &local_a4, worker_lock);
   local_80 = local_78;
   local_a4 = local_a4 + -1;
   local_78[0] = 0;
   local_88 = 8;
   do {
      iVar6 = CRYPTO_THREAD_write_lock(testrand_lock);
      iVar6 = test_true("test/lhash_test.c", 0x230, "CRYPTO_THREAD_write_lock(testrand_lock)", iVar6 != 0);
      if (iVar6 == 0) {
         LAB_001005b0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      bVar3 = test_random();
      uVar12 = (ulong)(uint)bVar3;
      bVar4 = test_random();
      CRYPTO_THREAD_unlock(testrand_lock);
      bVar10 = bVar4 & 3;
      memset(local_80, 0, local_88);
      local_78[0] = CONCAT44(local_78[0]._4_4_, (uint)bVar3);
      iVar6 = CRYPTO_atomic_add(&global_iteration, 1, &local_9c, worker_lock);
      if (iVar6 == 0) {
         ( &worker_exits )[local_a4] = "Unable to increment global iterator";
         goto LAB_001005b0;
      }
      if (bVar10 == 3) {
         ossl_ht_write_lock(m_ht);
         uVar2 = worker_lock;
         iVar6 = *(int*)( &test_mt_entries + uVar12 );
         if (iVar6 == 1) {
            *(undefined4*)( &test_mt_entries + uVar12 ) = 0;
            CRYPTO_atomic_add(uVar12 * 8 + 0x101a44, 1, local_a0, uVar2);
         }
         iVar5 = ossl_ht_delete(m_ht, &local_88);
         if (iVar5 != iVar6) {
            test_info("test/lhash_test.c", 0x275, "Iteration %d Expected rc %d on delete of element %u which is %s\n", local_9c, iVar6, uVar12);
            ( &worker_exits )[local_a4] = "Failure on delete";
         }
         LAB_00100309:ossl_ht_write_unlock(m_ht);
         lVar1 = ( &worker_exits )[local_a4];
      } else {
         if (( bVar4 & 3 ) != 0) {
            ossl_ht_write_lock(m_ht);
            if (bVar10 == 2) {
               local_b0 = &local_98;
               uVar13 = 1;
               pplVar9 = &local_90;
            } else {
               local_b0 = (undefined8**)0x0;
               uVar13 = ( uint )(*(int*)( &test_mt_entries + uVar12 ) == 0);
               pplVar9 = (long**)0x0;
            }
            local_90 = (long*)0x0;
            local_60 = &mt_TEST_MT_ENTRY_id;
            local_68 = &test_mt_entries + uVar12;
            uVar7 = ossl_ht_insert(m_ht, &local_88, &local_68, pplVar9);
            if (local_90 != (long*)0x0) {
               *local_b0 = (undefined8*)*local_90;
            }
            if (uVar7 != uVar13) {
               pcVar8 = "in table";
               pcVar11 = "insert";
               if (*(int*)( &test_mt_entries + uVar12 ) == 0) {
                  pcVar8 = "not in table";
               }
               if (bVar10 == 2) {
                  pcVar11 = "replace";
               }
               test_info("test/lhash_test.c", 0x259, "Iteration %d Expected rc %d on %s of element %u which is %s\n", local_9c, uVar13, pcVar11, uVar12, pcVar8);
               ( &worker_exits )[local_a4] = "Failure on insert";
            }
            if (uVar13 == 1) {
               *(undefined4*)( &test_mt_entries + uVar12 ) = 1;
            }
            goto LAB_00100309;
         }
         ossl_ht_read_lock();
         local_68 = (undefined8*)ossl_ht_get(m_ht, &local_88);
         if (( ( local_68 == (undefined8*)0x0 ) || ( local_98 = (undefined8*)ossl_rcu_uptr_deref(&local_68) ),local_98 == (undefined8*)0x0 )) {
            local_98 = (undefined8*)0x0;
         } else {
            local_98 = (undefined8*)*local_98;
            if (( local_98 != (undefined8*)0x0 ) && ( &test_mt_entries + uVar12 != local_98 )) {
               ( &worker_exits )[local_a4] = "Read unexpected value from hashtable";
               test_info("test/lhash_test.c", 0x244, "Iteration %d Read unexpected value %p when %p expected", local_9c);
            }
         }
         ossl_ht_read_unlock(m_ht);
         lVar1 = ( &worker_exits )[local_a4];
      }
      if (( lVar1 != 0 ) || ( lVar14 = lVar14 == 0 )) goto LAB_001005b0;
   } while ( true );
}int test_hashtable_multithread(void) {
   pthread_t __th;
   int iVar1;
   int iVar2;
   long lVar3;
   pthread_t *ppVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   undefined1 local_f8[16];
   undefined1 local_e8[16];
   undefined8 local_d8;
   pthread_t pStack_d0;
   pthread_t local_c8[17];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f8 = ZEXT816(0x100090) << 0x40;
   puVar6 = &worker_exits;
   for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }
   puVar6 = &test_mt_entries;
   for (lVar3 = 0x100; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }
   local_e8 = (undefined1[16])0x0;
   ppVar4 = local_c8;
   for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *ppVar4 = 0;
      ppVar4 = ppVar4 + 1;
   }
   local_d8 = 1;
   m_ht = ossl_ht_new(local_f8);
   iVar1 = test_ptr("test/lhash_test.c", 0x29b, &_LC15, m_ht);
   if (iVar1 == 0) goto LAB_0010072b;
   worker_lock = CRYPTO_THREAD_lock_new();
   iVar1 = test_ptr("test/lhash_test.c", 0x29e, "worker_lock = CRYPTO_THREAD_lock_new()", worker_lock);
   if (iVar1 == 0) {
      LAB_00100787:iVar1 = 0;
   } else {
      testrand_lock = CRYPTO_THREAD_lock_new();
      iVar1 = test_ptr("test/lhash_test.c", 0x2a0, "testrand_lock = CRYPTO_THREAD_lock_new()", testrand_lock);
      if (iVar1 == 0) goto LAB_00100787;
      iVar1 = 0;
      ppVar4 = local_c8;
      do {
         iVar2 = pthread_create(ppVar4, (pthread_attr_t*)0x0, thread_run, do_mt_hash_work);
         if (iVar2 != 0) {
            iVar2 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_00100813;
            goto LAB_001007f5;
         }
         iVar1 = iVar1 + 1;
         ppVar4 = ppVar4 + 1;
      } while ( iVar1 != 0x10 );
      iVar2 = 0xf;
      LAB_001007f5:ppVar4 = local_c8 + iVar2;
      do {
         __th = *ppVar4;
         ppVar4 = ppVar4 + -1;
         pthread_join(__th, (void**)0x0);
      } while ( ppVar4 != &pStack_d0 );
      LAB_00100813:uVar5 = 0;
      iVar1 = 1;
      do {
         if (( &worker_exits )[uVar5] != 0) {
            iVar1 = 0;
            test_info("test/lhash_test.c", 0x2b8, "Worker %d failed: %s\n", uVar5 & 0xffffffff);
         }
         uVar5 = uVar5 + 1;
      } while ( uVar5 != 0x10 );
      if (free_failure == 1) {
         iVar1 = 0;
         test_info("test/lhash_test.c", 0x2bd, "Encountered a free failure");
      }
   }
   shutting_down = 1;
   ossl_ht_free(m_ht);
   CRYPTO_THREAD_lock_free(worker_lock);
   CRYPTO_THREAD_lock_free(testrand_lock);
   LAB_0010072b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}undefined8 test_hashtable_stress(int param_1) {
   int iVar1;
   undefined4 uVar2;
   int iVar3;
   undefined8 uVar4;
   int *piVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   uint uVar8;
   undefined4 *puVar9;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 *local_a0;
   undefined8 local_98[2];
   int *local_88;
   undefined8 *local_80;
   undefined8 local_68;
   code *local_60;
   code *pcStack_58;
   undefined8 local_50;
   undefined4 local_48;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 1;
   local_68 = 0;
   local_50 = 0x98968;
   local_60 = hashtable_intfree;
   pcStack_58 = hashtable_hash;
   local_44 = param_1;
   uVar4 = ossl_ht_new(&local_68);
   iVar1 = test_ptr("test/lhash_test.c", 0x1aa, &_LC20, uVar4);
   if (iVar1 != 0) {
      local_a0 = local_98;
      iVar1 = 0;
      local_98[0] = 0;
      local_a8 = 8;
      do {
         piVar5 = (int*)CRYPTO_malloc(4, "test/lhash_test.c", 0x1b4);
         iVar3 = test_ptr("test/lhash_test.c", 0x1b5, &_LC21, piVar5);
         if (iVar3 == 0) {
            test_info("test/lhash_test.c", 0x1b6, "hashtable stress out of memory %d", iVar1);
            goto LAB_00100957;
         }
         iVar3 = iVar1 * 3 + 1;
         *piVar5 = iVar3;
         local_98[0] = CONCAT44(local_98[0]._4_4_, iVar3);
         local_80 = &test_int_id;
         local_88 = piVar5;
         uVar2 = ossl_ht_insert(uVar4, &local_a8, &local_88, 0);
         iVar3 = test_int_eq("test/lhash_test.c", 0x1bb, "ossl_ht_test_int_insert(h, TO_HT_KEY(&key), p, NULL)", &_LC23, uVar2, 1);
         if (iVar3 == 0) {
            test_info("test/lhash_test.c", 0x1bd, "hashtable unable to insert element %d\n", *piVar5);
            goto LAB_00100957;
         }
         iVar1 = iVar1 + 1;
      } while ( iVar1 != 2500000 );
      uVar2 = ossl_ht_count(uVar4);
      iVar1 = test_int_eq("test/lhash_test.c", 0x1c3, "(size_t)ossl_ht_count(h)", &_LC26, uVar2, 2500000);
      if (iVar1 != 0) {
         if (param_1 == 0) {
            uVar8 = 4;
            do {
               iVar1 = ( uVar8 % 2500000 ) * 3 + 1;
               local_98[0] = CONCAT44(local_98[0]._4_4_, iVar1);
               uVar2 = ossl_ht_delete(uVar4, &local_a8);
               iVar3 = test_int_eq("test/lhash_test.c", 0x1cd, "(ossl_ht_delete(h, TO_HT_KEY(&key)))", &_LC23, uVar2, 1);
               if (iVar3 == 0) {
                  test_info("test/lhash_test.c", 0x1ce, "hashtable didn\'t delete key %d\n", iVar1);
                  goto LAB_00100957;
               }
               uVar8 = uVar8 + 7;
            } while ( uVar8 != 0x10b0764 );
         } else if (param_1 == 1) {
            uVar8 = 4;
            do {
               iVar1 = ( uVar8 % 2500000 ) * 3 + 1;
               local_98[0] = CONCAT44(local_98[0]._4_4_, iVar1);
               local_88 = (int*)ossl_ht_get(uVar4, &local_a8);
               if (local_88 == (int*)0x0) {
                  LAB_00100c4c:puVar9 = (undefined4*)0x0;
               } else {
                  puVar6 = (undefined8*)ossl_rcu_uptr_deref(&local_88);
                  if (( puVar6 == (undefined8*)0x0 ) || ( (undefined8*)puVar6[1] != &test_int_id )) goto LAB_00100c4c;
                  puVar9 = (undefined4*)*puVar6;
               }
               iVar3 = test_ptr("test/lhash_test.c", 0x1d3, "p = ossl_ht_test_int_get(h, TO_HT_KEY(&key), &v)", puVar9);
               if (iVar3 == 0) {
                  LAB_00100c54:test_info("test/lhash_test.c", 0x1d5, "hashtable didn\'t get key %d\n", iVar1);
                  goto LAB_00100957;
               }
               iVar3 = test_int_eq("test/lhash_test.c", 0x1d4, &_LC30, &_LC29, *puVar9, iVar1);
               if (iVar3 == 0) goto LAB_00100c54;
               uVar8 = uVar8 + 7;
            } while ( uVar8 != 0x10b0764 );
         } else {
            local_98[0] = CONCAT44(local_98[0]._4_4_, 0x7270d8);
         }
         uVar7 = 1;
         goto LAB_00100959;
      }
   }
   LAB_00100957:uVar7 = 0;
   LAB_00100959:ossl_ht_free(uVar4);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool test_int_lhash(void) {
   int iVar1;
   undefined4 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined4 *puVar6;
   long lVar7;
   undefined2 *puVar8;
   ulong uVar9;
   undefined4 *puVar10;
   undefined1 *puVar11;
   long in_FS_OFFSET;
   bool bVar12;
   byte bVar13;
   undefined4 local_44;
   long local_40;
   bVar13 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = OPENSSL_LH_new(int_hash, int_cmp);
   uVar4 = OPENSSL_LH_set_thunks(uVar4, 0x100000, lh_int_cfn_thunk, lh_int_doall_thunk, lh_int_doall_arg_thunk);
   iVar1 = test_ptr("test/lhash_test.c", 0x65, &_LC20, uVar4);
   if (iVar1 != 0) {
      uVar9 = 0;
      do {
         uVar5 = OPENSSL_LH_insert(uVar4, &int_tests + uVar9);
         iVar1 = test_ptr_null("test/lhash_test.c", 0x6a, "lh_int_insert(h, int_tests + i)", uVar5);
         if (iVar1 == 0) {
            test_info("test/lhash_test.c", 0x6b, "int insert %d", uVar9 & 0xffffffff);
            goto LAB_00100d5d;
         }
         uVar9 = uVar9 + 1;
      } while ( uVar9 != 0x15 );
      uVar2 = OPENSSL_LH_num_items(uVar4);
      iVar1 = test_int_eq("test/lhash_test.c", 0x70, "(size_t)lh_int_num_items(h)", "n_int_tests", uVar2, 0x15);
      if (iVar1 != 0) {
         puVar10 = &int_tests;
         iVar1 = 0;
         do {
            uVar2 = *puVar10;
            puVar6 = (undefined4*)OPENSSL_LH_retrieve(uVar4, puVar10);
            iVar3 = test_int_eq("test/lhash_test.c", 0x75, "*lh_int_retrieve(h, int_tests + i)", "int_tests[i]", *puVar6, uVar2);
            if (iVar3 == 0) {
               test_info("test/lhash_test.c", 0x76, "lhash int retrieve value %d", iVar1);
               goto LAB_00100d5d;
            }
            iVar1 = iVar1 + 1;
            puVar10 = puVar10 + 1;
         } while ( iVar1 != 0x15 );
         uVar9 = 0;
         do {
            uVar5 = OPENSSL_LH_retrieve(uVar4, &int_tests + uVar9);
            iVar1 = test_ptr_eq("test/lhash_test.c", 0x7a, "lh_int_retrieve(h, int_tests + i)", "int_tests + i", uVar5, &int_tests + uVar9);
            if (iVar1 == 0) {
               test_info("test/lhash_test.c", 0x7b, "lhash int retrieve address %d", uVar9 & 0xffffffff);
               goto LAB_00100d5d;
            }
            uVar9 = uVar9 + 1;
         } while ( uVar9 != 0x15 );
         local_44 = 1;
         uVar5 = OPENSSL_LH_retrieve(uVar4, &local_44);
         iVar1 = test_ptr_eq("test/lhash_test.c", 0x7f, "lh_int_retrieve(h, &j)", "int_tests + 2", uVar5, &DAT_00101928);
         if (iVar1 != 0) {
            local_44 = 0xd;
            uVar5 = OPENSSL_LH_insert(uVar4, &local_44);
            iVar1 = test_ptr("test/lhash_test.c", 0x84, "p = lh_int_insert(h, &j)", uVar5);
            if (iVar1 != 0) {
               iVar1 = test_ptr_eq("test/lhash_test.c", 0x86, &_LC21, "int_tests + 1", uVar5, &DAT_00101924);
               if (iVar1 != 0) {
                  uVar5 = OPENSSL_LH_retrieve(uVar4, &DAT_00101924);
                  iVar1 = test_ptr_eq("test/lhash_test.c", 0x88, "lh_int_retrieve(h, int_tests + 1)", &_LC48, uVar5, &local_44);
                  if (iVar1 != 0) {
                     _DAT_00102270 = SUB1610((undefined1[16])0x0, 0);
                     uVar9 = 0;
                     int_not_found = 0;
                     _int_found = (undefined1[16])0x0;
                     _DAT_0010227a = 0;
                     Ram0000000000102280 = SUB1610((undefined1[16])0x0, 6);
                     OPENSSL_LH_doall(uVar4, int_doall);
                     iVar1 = test_int_eq("test/lhash_test.c", 0x8f, "int_not_found", &_LC50, (int)int_not_found, 0);
                     if (iVar1 == 0) {
                        test_info("test/lhash_test.c", 0x90, "lhash int doall encountered a not found condition");
                     } else {
                        do {
                           iVar1 = test_int_eq("test/lhash_test.c", 0x94, "int_found[i]", &_LC23, (int)(short)( &int_found )[uVar9], 1);
                           if (iVar1 == 0) {
                              test_info("test/lhash_test.c", 0x95, "lhash int doall %d", uVar9 & 0xffffffff);
                              goto LAB_00100d5d;
                           }
                           uVar9 = uVar9 + 1;
                        } while ( uVar9 != 0x15 );
                        int_not_found = 0;
                        puVar8 = &int_found;
                        for (lVar7 = 0x2a; lVar7 != 0; lVar7 = lVar7 + -1) {
                           *(undefined1*)puVar8 = 0;
                           puVar8 = (undefined2*)( (long)puVar8 + (ulong)bVar13 * -2 + 1 );
                        }
                        OPENSSL_LH_doall_arg_thunk(uVar4, lh_int_doall_short_thunk, int_doall_arg, &int_found);
                        iVar1 = test_int_eq("test/lhash_test.c", 0x9d, "int_not_found", &_LC50, (int)int_not_found, 0);
                        uVar9 = 0;
                        if (iVar1 != 0) {
                           do {
                              iVar1 = test_int_eq("test/lhash_test.c", 0xa2, "int_found[i]", &_LC23, (int)(short)( &int_found )[uVar9], 1);
                              if (iVar1 == 0) {
                                 test_info("test/lhash_test.c", 0xa3, "lhash int doall arg %d", uVar9 & 0xffffffff);
                                 goto LAB_00100d5d;
                              }
                              uVar9 = uVar9 + 1;
                           } while ( uVar9 != 0x15 );
                           puVar11 = dels_0;
                           iVar1 = 0;
                           do {
                              lVar7 = OPENSSL_LH_delete(uVar4, puVar11);
                              iVar3 = test_int_eq("test/lhash_test.c", 0xaa, "b ^ dels[i].null", &_LC50, ( uint )(lVar7 == 0) ^ *(uint*)( puVar11 + 4 ), 0);
                              if (iVar3 == 0) {
                                 test_info("test/lhash_test.c", 0xab, "lhash int delete %d", iVar1);
                                 goto LAB_00100d5d;
                              }
                              iVar1 = iVar1 + 1;
                              puVar11 = puVar11 + 8;
                           } while ( iVar1 != 6 );
                           uVar2 = OPENSSL_LH_error(uVar4);
                           iVar1 = test_int_eq("test/lhash_test.c", 0xb1, "lh_int_error(h)", &_LC50, uVar2, 0);
                           bVar12 = iVar1 != 0;
                           goto LAB_00100d5f;
                        }
                        test_info("test/lhash_test.c", 0x9e, "lhash int doall arg encountered a not found condition");
                     }
                  }
               }
            }
         }
      }
   }
   LAB_00100d5d:bVar12 = false;
   LAB_00100d5f:OPENSSL_LH_free(uVar4);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar12;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void lh_int_doall_short_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1850 = 0; i_1850 < 2; i_1850++) {
      /* WARNING: Could not recover jumptable at 0x001011d4. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}undefined8 test_stress(void) {
   int iVar1;
   int iVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   int *piVar5;
   undefined4 *ptr;
   undefined8 uVar6;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = OPENSSL_LH_new(stress_hash, int_cmp);
   uVar4 = OPENSSL_LH_set_thunks(uVar4, 0x100000, lh_int_cfn_thunk, lh_int_doall_thunk, lh_int_doall_arg_thunk);
   iVar1 = test_ptr("test/lhash_test.c", 0x15f, &_LC20, uVar4);
   if (iVar1 != 0) {
      iVar1 = 0;
      do {
         piVar5 = (int*)CRYPTO_malloc(4, "test/lhash_test.c", 0x166);
         iVar2 = test_ptr("test/lhash_test.c", 0x167, &_LC21, piVar5);
         if (iVar2 == 0) {
            test_info("test/lhash_test.c", 0x168, "lhash stress out of memory %d", iVar1);
            goto LAB_001012d4;
         }
         iVar2 = iVar1 * 3;
         iVar1 = iVar1 + 1;
         *piVar5 = iVar2 + 1;
         OPENSSL_LH_insert(uVar4, piVar5);
      } while ( iVar1 != 2500000 );
      uVar3 = OPENSSL_LH_num_items(uVar4);
      iVar1 = test_int_eq("test/lhash_test.c", 0x170, "lh_int_num_items(h)", &_LC26, uVar3, 2500000);
      if (iVar1 != 0) {
         iVar1 = 0;
         do {
            local_44 = ( ( iVar1 * 7 + 4U ) % 2500000 ) * 3 + 1;
            ptr = (undefined4*)OPENSSL_LH_delete(uVar4, &local_44);
            iVar2 = test_ptr("test/lhash_test.c", 0x177, "p = lh_int_delete(h, &j)", ptr);
            if (iVar2 == 0) {
               test_info("test/lhash_test.c", 0x178, "lhash stress delete %d\n", iVar1);
               goto LAB_001012d4;
            }
            iVar2 = test_int_eq("test/lhash_test.c", 0x17b, &_LC30, &_LC29, *ptr, local_44);
            if (iVar2 == 0) {
               test_info("test/lhash_test.c", 0x17c, "lhash stress bad value %d", iVar1);
               goto LAB_001012d4;
            }
            iVar1 = iVar1 + 1;
            CRYPTO_free(ptr);
         } while ( iVar1 != 2500000 );
         uVar6 = 1;
         goto LAB_001012d6;
      }
   }
   LAB_001012d4:uVar6 = 0;
   LAB_001012d6:OPENSSL_LH_free(uVar4);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void int_doall(int *param_1) {
   long lVar1;
   lVar1 = 0;
   do {
      if (*param_1 == ( &int_tests )[lVar1]) {
         ( &int_found )[(int)lVar1] = ( &int_found )[(int)lVar1] + 1;
         return;
      }
      lVar1 = lVar1 + 1;
   } while ( lVar1 != 0x15 );
   int_not_found = int_not_found + 1;
   return;
}void int_doall_arg(int *param_1, long param_2) {
   short *psVar1;
   long lVar2;
   lVar2 = 0;
   do {
      if (*param_1 == ( &int_tests )[lVar2]) {
         psVar1 = (short*)( param_2 + lVar2 * 2 );
         *psVar1 = *psVar1 + 1;
         return;
      }
      lVar2 = lVar2 + 1;
   } while ( lVar2 != 0x15 );
   int_not_found = int_not_found + 1;
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 test_int_hashtable(void) {
   undefined4 uVar1;
   int iVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 uVar5;
   undefined4 *puVar6;
   long lVar7;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined4 *local_a0;
   undefined4 local_98;
   undefined4 local_94;
   undefined4 *local_88;
   undefined8 *local_80;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   uVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = 1;
   lVar4 = ossl_ht_new(local_68);
   if (lVar4 == 0) goto LAB_001015fc;
   local_a0 = &local_98;
   lVar7 = 0;
   local_94 = 0;
   puVar6 = &int_tests;
   local_a8 = 8;
   do {
      local_98 = *puVar6;
      local_80 = &test_int_id;
      local_88 = puVar6;
      uVar1 = ossl_ht_insert(lVar4, &local_a8, &local_88, 0);
      iVar2 = test_int_eq("test/lhash_test.c", 0xfc, "ossl_ht_test_int_insert(ht, TO_HT_KEY(&key), &int_tests[i], NULL)", &_LC23, uVar1, 1);
      if (iVar2 == 0) {
         test_info("test/lhash_test.c", 0xfe, "int insert %zu", lVar7);
         goto LAB_001015f2;
      }
      lVar7 = lVar7 + 1;
      puVar6 = puVar6 + 1;
   } while ( lVar7 != 0x15 );
   uVar1 = ossl_ht_count(lVar4);
   iVar2 = test_int_eq("test/lhash_test.c", 0x104, "(size_t)ossl_ht_count(ht)", "n_int_tests", uVar1, 0x15);
   if (iVar2 == 0) {
      LAB_001015f2:uVar5 = 0;
   } else {
      int_not_found = 0;
      lVar7 = 0;
      _DAT_00102270 = SUB1610((undefined1[16])0x0, 0);
      _int_found = (undefined1[16])0x0;
      _DAT_0010227a = 0;
      Ram0000000000102280 = SUB1610((undefined1[16])0x0, 6);
      ossl_ht_foreach_until(lVar4, int_foreach, 0);
      iVar2 = test_int_eq("test/lhash_test.c", 0x10b, "int_not_found", &_LC50, (int)int_not_found, 0);
      if (iVar2 == 0) {
         test_info("test/lhash_test.c", 0x10c, "hashtable int foreach encountered a not found condition");
         goto LAB_001015f2;
      }
      do {
         iVar2 = test_int_eq("test/lhash_test.c", 0x111, "int_found[i]", &_LC23, (int)(short)( &int_found )[lVar7], 1);
         if (iVar2 == 0) {
            test_info("test/lhash_test.c", 0x112, "hashtable int foreach %zu", lVar7);
            goto LAB_001015f2;
         }
         lVar7 = lVar7 + 1;
      } while ( lVar7 != 0x15 );
      puVar6 = (undefined4*)ossl_ht_filter(lVar4, 0x40, int_filter_all, 0);
      iVar2 = test_int_eq("test/lhash_test.c", 0x118, "(size_t)list->list_len", "n_int_tests", *puVar6, 0x15);
      if (iVar2 == 0) goto LAB_001015f2;
      puVar8 = &dels_1;
      ossl_ht_value_list_free(puVar6);
      do {
         uVar1 = *puVar8;
         local_98 = uVar1;
         uVar3 = ossl_ht_delete(lVar4, &local_a8);
         if (puVar8[1] == 0) {
            iVar2 = test_int_eq("test/lhash_test.c", 0x127, "todel", &_LC50, uVar3, 0);
            if (iVar2 == 0) {
               test_info("test/lhash_test.c", 0x128, "%d found an entry that shouldn\'t be there\n", uVar1);
               goto LAB_001015f2;
            }
         } else {
            iVar2 = test_int_eq("test/lhash_test.c", 0x121, "todel", &_LC23, uVar3, 1);
            if (iVar2 == 0) {
               test_info("test/lhash_test.c", 0x122, "hashtable couldn\'t find entry %d to delete\n", uVar1);
               goto LAB_001015f2;
            }
         }
         puVar8 = puVar8 + 2;
      } while ( (NoteGnuProperty_4*)puVar8 != &NoteGnuProperty_4_00102af0 );
      uVar5 = 1;
   }
   ossl_ht_free(lVar4);
   LAB_001015fc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 setup_tests(void) {
   add_test("test_int_lhash", test_int_lhash);
   add_test("test_stress", test_stress);
   add_test("test_int_hashtable", test_int_hashtable);
   add_all_tests("test_hashtable_stress", test_hashtable_stress, 2, 1);
   add_test("test_hashtable_multithread", test_hashtable_multithread);
   return 1;
}void int_foreach_cold(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}


void once_do_run(void)

{
  once_run_count = once_run_count + 1;
  return;
}



void thread_local_destructor(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  return;
}



void free_old_rcu_data(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 thread_run(code *param_1)

{
  (*param_1)();
  OPENSSL_thread_stop();
  return 0;
}



void thread_release_shared_pkey(void)

{
  OSSL_sleep(0);
  EVP_PKEY_free(shared_evp_pkey);
  return;
}



uint test_atomic(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_58;
  undefined4 local_54;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_54 = 0;
  local_50 = 1;
  local_48 = 0;
  uVar3 = CRYPTO_THREAD_lock_new();
  uVar1 = test_ptr("test/threadstest.c",599,&_LC0,uVar3);
  if (uVar1 == 0) goto LAB_001000e1;
  iVar2 = CRYPTO_atomic_add(&local_58,1,&local_54,0);
  if (iVar2 == 0) {
    iVar2 = test_int_eq("test/threadstest.c",0x260,&_LC3,&_LC6,local_58,0);
    if ((iVar2 != 0) &&
       (iVar2 = test_int_eq("test/threadstest.c",0x260,&_LC3,&_LC4,local_58,local_54), iVar2 != 0))
    goto LAB_001001ca;
LAB_00100161:
    uVar1 = 0;
  }
  else {
    iVar2 = test_int_eq("test/threadstest.c",0x25c,&_LC3,&_LC2,local_58,1);
    if ((iVar2 == 0) ||
       (iVar2 = test_int_eq("test/threadstest.c",0x25c,&_LC3,&_LC4,local_58,local_54), iVar2 == 0))
    goto LAB_00100161;
LAB_001001ca:
    local_58 = 0;
    local_54 = 0;
    iVar2 = CRYPTO_atomic_add(&local_58,1,&local_54,uVar3);
    iVar2 = test_true("test/threadstest.c",0x266,"CRYPTO_atomic_add(&val, 1, &ret, lock)",iVar2 != 0
                     );
    if (((iVar2 == 0) ||
        (iVar2 = test_int_eq("test/threadstest.c",0x268,&_LC3,&_LC2,local_58,1), iVar2 == 0)) ||
       (iVar2 = test_int_eq("test/threadstest.c",0x268,&_LC3,&_LC4,local_58,local_54), iVar2 == 0))
    goto LAB_00100161;
    iVar2 = CRYPTO_atomic_or(&local_50,2,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x272,"(unsigned int)val64",&_LC2,
                           local_50 & 0xffffffff,1);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x273,"(unsigned int)ret64",&_LC6,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_001002e8;
      goto LAB_00100161;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x26d,"(unsigned int)val64",&_LC7,
                         local_50 & 0xffffffff,3);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x26e,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_00100161;
LAB_001002e8:
    local_50 = 1;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_or(&local_50,2,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",0x279,"CRYPTO_atomic_or(&val64, 2, &ret64, lock)",
                      iVar2 != 0);
    if (((iVar2 == 0) ||
        (iVar2 = test_uint_eq("test/threadstest.c",0x27c,"(unsigned int)val64",&_LC7,
                              local_50 & 0xffffffff,3), iVar2 == 0)) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x27d,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_00100161;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_load(&local_50,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x288,"(unsigned int)val64",&_LC7,
                           local_50 & 0xffffffff,3);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x289,"(unsigned int)ret64",&_LC6,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_001003ef;
      goto LAB_00100161;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x283,"(unsigned int)val64",&_LC7,
                         local_50 & 0xffffffff);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x284,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_00100161;
LAB_001003ef:
    local_48 = 0;
    iVar2 = CRYPTO_atomic_load(&local_50,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",0x28e,"CRYPTO_atomic_load(&val64, &ret64, lock)",
                      iVar2 != 0);
    if (((iVar2 == 0) ||
        (iVar2 = test_uint_eq("test/threadstest.c",0x291,"(unsigned int)val64",&_LC7,
                              local_50 & 0xffffffff,3), iVar2 == 0)) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x292,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_00100161;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_and(&local_50,5,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x29e,"(unsigned int)val64",&_LC7,
                           local_50 & 0xffffffff,3);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x29f,"(unsigned int)ret64",&_LC6,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_001004e6;
      goto LAB_00100161;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x299,"(unsigned int)val64",&_LC2,
                         local_50 & 0xffffffff,1);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x29a,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_00100161;
LAB_001004e6:
    local_48 = 0;
    local_50 = 3;
    iVar2 = CRYPTO_atomic_and(&local_50,5,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",0x2a5,"CRYPTO_atomic_and(&val64, 5, &ret64, lock)",
                      iVar2 != 0);
    if (((iVar2 == 0) ||
        (iVar2 = test_uint_eq("test/threadstest.c",0x2a8,"(unsigned int)val64",&_LC2,
                              local_50 & 0xffffffff,1), iVar2 == 0)) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x2a9,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_00100161;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_add64(&local_50,2,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x2b5,"(unsigned int)val64",&_LC2,
                           local_50 & 0xffffffff,1);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x2b6,"(unsigned int)ret64",&_LC6,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_001005eb;
      goto LAB_00100161;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x2b0,"(unsigned int)val64",&_LC7,
                         local_50 & 0xffffffff,3);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x2b1,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_00100161;
LAB_001005eb:
    local_48 = 0;
    local_50 = 1;
    iVar2 = CRYPTO_atomic_add64(&local_50,2,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",700,"CRYPTO_atomic_add64(&val64, 2, &ret64, lock)",
                      iVar2 != 0);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x2bf,"(unsigned int)val64",&_LC7,
                             local_50 & 0xffffffff,3), iVar2 == 0)) goto LAB_00100161;
    iVar2 = test_uint_eq("test/threadstest.c",0x2c0,"(unsigned int)val64","(unsigned int)ret64",
                         local_50 & 0xffffffff,local_48 & 0xffffffff);
    uVar1 = (uint)(iVar2 != 0);
  }
  CRYPTO_THREAD_lock_free(uVar3);
LAB_001000e1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



bool test_thread_local(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  pthread_t local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = CRYPTO_THREAD_init_local(&thread_local_key,thread_local_destructor);
  iVar1 = test_true("test/threadstest.c",0x235,
                    "CRYPTO_THREAD_init_local(&thread_local_key, thread_local_destructor)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = CRYPTO_THREAD_get_local(&thread_local_key);
    iVar1 = test_ptr_null("test/threadstest.c",0x23a,&_LC15,uVar2);
    if (iVar1 != 0) {
      iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_run,thread_local_thread_cb);
      iVar1 = test_true("test/threadstest.c",0x23b,"run_thread(&thread, thread_local_thread_cb)",
                        iVar1 == 0);
      if (iVar1 != 0) {
        iVar1 = pthread_join(local_38,(void **)0x0);
        iVar1 = test_true("test/threadstest.c",0x23c,"wait_for_thread(thread)",iVar1 == 0);
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/threadstest.c",0x23d,"thread_local_thread_cb_ok",&_LC2,
                              thread_local_thread_cb_ok,1);
          if (iVar1 != 0) {
            uVar2 = CRYPTO_THREAD_get_local(&thread_local_key);
            iVar1 = test_ptr_null("test/threadstest.c",0x243,&_LC15,uVar2);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/threadstest.c",0x247,"destructor_run_count",&_LC2,
                                  destructor_run_count,1);
              if (iVar1 != 0) {
                iVar1 = CRYPTO_THREAD_cleanup_local(&thread_local_key);
                iVar1 = test_true("test/threadstest.c",0x24c,
                                  "CRYPTO_THREAD_cleanup_local(&thread_local_key)",iVar1 != 0);
                bVar3 = iVar1 != 0;
                goto LAB_0010087c;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0010087c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_once(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  pthread_t local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_run,once_run_thread_cb);
  iVar1 = test_true("test/threadstest.c",0x207,"run_thread(&thread, once_run_thread_cb)",iVar1 == 0)
  ;
  if (iVar1 != 0) {
    iVar1 = pthread_join(local_18,(void **)0x0);
    iVar1 = test_true("test/threadstest.c",0x208,"wait_for_thread(thread)",iVar1 == 0);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_run_once(&once_run,0x100000);
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/threadstest.c",0x20a,"once_run_count",&_LC2,once_run_count,1);
        bVar2 = iVar1 != 0;
        goto LAB_00100a49;
      }
    }
  }
  bVar2 = false;
LAB_00100a49:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void once_run_thread_cb(void)

{
  CRYPTO_THREAD_run_once(&once_run,0x100000);
  return;
}



void torture_rw_high(void)

{
  contention = 1;
  _torture_rw();
  return;
}



void torture_rw_low(void)

{
  contention = 0;
  _torture_rw();
  return;
}



void torture_rcu_high2(void)

{
  contention = 2;
  _torture_rcu();
  return;
}



void torture_rcu_high(void)

{
  contention = 1;
  _torture_rcu();
  return;
}



void torture_rcu_low(void)

{
  contention = 0;
  _torture_rcu();
  return;
}



void reader_fn(int *param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  iVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_44 = 0;
  uVar3 = 0;
  do {
    while( true ) {
      if ((local_48 == 1) && (local_44 == 1)) goto LAB_00101670;
      iVar2 = iVar2 + 1;
      uVar4 = 0;
      CRYPTO_atomic_add(&writer1_done,0,&local_48,atomiclock);
      CRYPTO_atomic_add(&writer2_done,0,&local_44,atomiclock);
      ossl_rcu_read_lock(rcu_lock);
      puVar1 = (ulong *)ossl_rcu_uptr_deref(&writer_ptr);
      if (puVar1 != (ulong *)0x0) {
        uVar4 = *puVar1;
      }
      if (uVar3 <= uVar4) break;
      test_info("test/threadstest.c",0x17e,"rcu torture value went backwards! %llu : %llu",uVar3,
                uVar4);
      rcu_torture_result = 0;
      ossl_rcu_read_unlock(rcu_lock);
      uVar3 = uVar4;
      if (rcu_torture_result == 0) goto LAB_00101670;
    }
    ossl_rcu_read_unlock(rcu_lock);
    uVar3 = uVar4;
  } while (rcu_torture_result != 0);
LAB_00101670:
  *param_1 = iVar2;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void reader2_fn(void)

{
  test_info("test/threadstest.c",0x193,"Starting reader 2");
  reader_fn(&reader2_iterations);
  return;
}



void reader1_fn(void)

{
  test_info("test/threadstest.c",0x18d,"Starting reader 1");
  reader_fn(&reader1_iterations);
  return;
}



void rwreader_fn(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_44 = 0;
  iVar1 = CRYPTO_THREAD_read_lock(rwtorturelock);
  if (iVar1 != 0) {
    iVar1 = 0;
    while ((local_48 != 1 || (local_44 != 1))) {
      iVar1 = iVar1 + 1;
      CRYPTO_atomic_add(&rwwriter1_done,0,&local_48,atomiclock);
      CRYPTO_atomic_add(&rwwriter2_done,0,&local_44,atomiclock);
      if ((rwwriter_ptr != (int *)0x0) && (*rwwriter_ptr < 0)) {
        test_info("test/threadstest.c",0xba,"rwwriter pointer went backwards\n");
        rw_torture_result = 0;
      }
      iVar2 = CRYPTO_THREAD_unlock(rwtorturelock);
      iVar3 = rw_torture_result;
      if (iVar2 == 0) goto code_r0x00106177;
      *param_1 = iVar1;
      if (iVar3 == 0) goto LAB_0010184f;
      iVar3 = CRYPTO_THREAD_read_lock(rwtorturelock);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        rwreader_fn_cold();
      }
    }
    *param_1 = iVar1;
    iVar1 = CRYPTO_THREAD_unlock(rwtorturelock);
    if (iVar1 != 0) {
LAB_0010184f:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
code_r0x00106177:
                    /* WARNING: Subroutine does not return */
  abort();
}



void rwreader2_fn(void)

{
  test_info("test/threadstest.c",0xd4,"Starting reader 2");
  rwreader_fn(&rwreader2_iterations);
  return;
}



void rwreader1_fn(void)

{
  test_info("test/threadstest.c",0xce,"Starting reader 1");
  rwreader_fn(&rwreader1_iterations);
  return;
}



bool test_lock(void)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = CRYPTO_THREAD_lock_new();
  iVar1 = test_ptr("test/threadstest.c",0x5d,&_LC0,uVar2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = CRYPTO_THREAD_read_lock(uVar2);
  iVar1 = test_true("test/threadstest.c",0x60,"CRYPTO_THREAD_read_lock(lock)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_unlock(uVar2);
    iVar1 = test_true("test/threadstest.c",0x61,"CRYPTO_THREAD_unlock(lock)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_write_lock(uVar2);
      iVar1 = test_true("test/threadstest.c",0x62,"CRYPTO_THREAD_write_lock(lock)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = CRYPTO_THREAD_unlock(uVar2);
        iVar1 = test_true("test/threadstest.c",99,"CRYPTO_THREAD_unlock(lock)",iVar1 != 0);
        bVar3 = iVar1 != 0;
        goto LAB_00101969;
      }
    }
  }
  bVar3 = false;
LAB_00101969:
  CRYPTO_THREAD_lock_free(uVar2);
  return bVar3;
}



void thread_local_thread_cb(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = CRYPTO_THREAD_get_local(&thread_local_key);
  iVar2 = test_ptr_null("test/threadstest.c",0x224,&_LC15,uVar1);
  if (iVar2 != 0) {
    iVar2 = CRYPTO_THREAD_set_local(&thread_local_key,&destructor_run_count);
    iVar2 = test_true("test/threadstest.c",0x225,
                      "CRYPTO_THREAD_set_local(&thread_local_key, &destructor_run_count)",iVar2 != 0
                     );
    if (iVar2 != 0) {
      uVar1 = CRYPTO_THREAD_get_local(&thread_local_key);
      iVar2 = test_ptr_eq("test/threadstest.c",0x22a,&_LC15,"&destructor_run_count",uVar1,
                          &destructor_run_count);
      if (iVar2 != 0) {
        thread_local_thread_cb_ok = 1;
        return;
      }
    }
  }
  return;
}



undefined8 start_threads_constprop_0(void *param_1)

{
  pthread_t *__newthread;
  int iVar1;
  long lVar2;
  
  iVar1 = test_size_t_le("test/threadstest.c",0x310,"multi_num_threads + n","MAXIMUM_THREADS",
                         multi_num_threads + 2,10);
  if (iVar1 != 0) {
    lVar2 = 2;
    while( true ) {
      __newthread = &multi_threads + multi_num_threads;
      multi_num_threads = multi_num_threads + 1;
      iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_run,param_1);
      iVar1 = test_true("test/threadstest.c",0x314,
                        "run_thread(multi_threads + multi_num_threads++, thread_func)",iVar1 == 0);
      if (iVar1 == 0) break;
      if (lVar2 == 1) {
        return 1;
      }
      lVar2 = 1;
    }
  }
  return 0;
}



undefined8 start_threads_constprop_1(void *param_1)

{
  pthread_t *__newthread;
  int iVar1;
  long lVar2;
  
  iVar1 = test_size_t_le("test/threadstest.c",0x310,"multi_num_threads + n","MAXIMUM_THREADS",
                         multi_num_threads + 10,10);
  if (iVar1 != 0) {
    lVar2 = 10;
    while( true ) {
      __newthread = &multi_threads + multi_num_threads;
      multi_num_threads = multi_num_threads + 1;
      iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_run,param_1);
      iVar1 = test_true("test/threadstest.c",0x314,
                        "run_thread(multi_threads + multi_num_threads++, thread_func)",iVar1 == 0);
      if (iVar1 == 0) break;
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 start_threads_constprop_2(void *param_1)

{
  pthread_t *__newthread;
  int iVar1;
  
  iVar1 = test_size_t_le("test/threadstest.c",0x310,"multi_num_threads + n","MAXIMUM_THREADS",
                         multi_num_threads + 1,10);
  if (iVar1 != 0) {
    __newthread = &multi_threads + multi_num_threads;
    multi_num_threads = multi_num_threads + 1;
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_run,param_1);
    iVar1 = test_true("test/threadstest.c",0x314,
                      "run_thread(multi_threads + multi_num_threads++, thread_func)",iVar1 == 0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



void writer_fn_isra_0(int *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *ptr;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long in_FS_OFFSET;
  
  iVar6 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ossl_time_now();
  while( true ) {
    plVar5 = (long *)CRYPTO_zalloc(8,0,0);
    if (contention == 0) {
      OSSL_sleep(1000);
    }
    ossl_rcu_write_lock(rcu_lock);
    ptr = (void *)ossl_rcu_uptr_deref(&writer_ptr);
    lVar2 = global_ctr + 1;
    *plVar5 = global_ctr;
    global_ctr = lVar2;
    ossl_rcu_assign_uptr(&writer_ptr);
    if (contention == 0) {
      ossl_rcu_call(rcu_lock,free_old_rcu_data,ptr);
    }
    ossl_rcu_write_unlock(rcu_lock);
    if (contention != 0) {
      ossl_synchronize_rcu(rcu_lock);
      CRYPTO_free(ptr);
    }
    uVar4 = ossl_time_now();
    if (3 < uVar4 / 1000000000 - uVar3 / 1000000000) break;
    iVar6 = iVar6 + 1;
  }
  *param_1 = iVar6;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void writer1_fn(void)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  test_info("test/threadstest.c",0x15e,"Starting writer1");
  writer_fn_isra_0(&writer1_iterations);
  CRYPTO_atomic_add(&writer1_done,1,local_14,atomiclock);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void writer2_fn(void)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  test_info("test/threadstest.c",0x167,"Starting writer2");
  writer_fn_isra_0(&writer2_iterations);
  CRYPTO_atomic_add(&writer2_done,1,local_14,atomiclock);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rwwriter_fn_isra_0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int *ptr;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar4 = ossl_time_now();
  while( true ) {
    piVar6 = (int *)CRYPTO_zalloc(4,0,0);
    if (contention == 0) {
      OSSL_sleep(1000);
    }
    iVar3 = CRYPTO_THREAD_write_lock(rwtorturelock);
    ptr = rwwriter_ptr;
    uVar2 = rwtorturelock;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (rwwriter_ptr == (int *)0x0) {
      *piVar6 = 0;
      rwwriter_ptr = piVar6;
      iVar3 = CRYPTO_THREAD_unlock(uVar2);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        rwwriter_fn_isra_0_cold();
      }
    }
    else {
      iVar3 = *rwwriter_ptr;
      rwwriter_ptr = piVar6;
      *piVar6 = iVar3 + 1;
      iVar3 = CRYPTO_THREAD_unlock(uVar2);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        rwwriter_fn_isra_0_cold();
      }
      CRYPTO_free(ptr);
    }
    uVar5 = ossl_time_now();
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5 >> 9;
    if (3 < (uVar5 >> 9) / 0x1dcd65 - uVar4 / 1000000000) break;
    iVar7 = iVar7 + 1;
  }
  *param_1 = iVar7;
  return SUB168(auVar1 * ZEXT816(0x44b82fa09b5a53),0);
}



void rwwriter1_fn(void)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  test_info("test/threadstest.c",0x9b,"Starting writer1");
  rwwriter_fn_isra_0(&rwwriter1_iterations);
  CRYPTO_atomic_add(&rwwriter1_done,1,local_14,atomiclock);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rwwriter2_fn(void)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  test_info("test/threadstest.c",0xa4,"Starting writer 2");
  rwwriter_fn_isra_0(&rwwriter2_iterations);
  CRYPTO_atomic_add(&rwwriter2_done,1,local_14,atomiclock);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thread_setup_libctx(int param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1 != 0) {
    iVar2 = test_get_libctx(&multi_libctx,0,config_file,0,0);
    iVar2 = test_true("test/threadstest.c",0x2f3,
                      "test_get_libctx(&multi_libctx, NULL, config_file, NULL, NULL)",iVar2 != 0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar5 = 0;
    do {
      iVar2 = test_size_t_lt("test/threadstest.c",0x2f9,&_LC72,"MAXIMUM_PROVIDERS",lVar5,4);
      if (iVar2 == 0) {
LAB_0010227e:
        puVar4 = &multi_provider;
        lVar5 = multi_provider;
        while (lVar5 != 0) {
          OSSL_PROVIDER_unload();
          plVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          lVar5 = *plVar1;
        }
        OSSL_LIB_CTX_free(multi_libctx);
        _multi_threads = (undefined1  [16])0x0;
        _DAT_00104cd0 = (undefined1  [16])0x0;
        _DAT_00104ce0 = (undefined1  [16])0x0;
        _DAT_00104cf0 = (undefined1  [16])0x0;
        _DAT_00104d00 = (undefined1  [16])0x0;
        multi_num_threads = 0;
        _multi_provider = (undefined1  [16])0x0;
        _DAT_00104d30 = (undefined1  [16])0x0;
        _DAT_00104d40 = 0;
        multi_success = 1;
        multi_libctx = 0;
        return 0;
      }
      uVar3 = OSSL_PROVIDER_load(multi_libctx,param_2[lVar5]);
      (&multi_provider)[lVar5] = uVar3;
      iVar2 = test_ptr("test/threadstest.c",0x2fa,
                       "multi_provider[n] = OSSL_PROVIDER_load(multi_libctx, providers[n])",uVar3);
      if (iVar2 == 0) goto LAB_0010227e;
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
  }
  return 1;
}



void test_multi_load_worker(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_PROVIDER_load(multi_libctx,multi_load_provider);
  iVar1 = test_ptr("test/threadstest.c",0x44c,
                   "prov = OSSL_PROVIDER_load(multi_libctx, multi_load_provider)",uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_unload(uVar2);
    iVar1 = test_true("test/threadstest.c",0x44d,"OSSL_PROVIDER_unload(prov)",iVar1 != 0);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_lock);
  if (iVar1 == 0) {
    multi_success = 0;
    return;
  }
  multi_success = 0;
  CRYPTO_THREAD_unlock(global_lock);
  return;
}



void thread_provider_load_unload(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_PROVIDER_load(multi_libctx,"default");
  iVar1 = test_ptr("test/threadstest.c",0x3b4,"deflt",uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_available(multi_libctx,"default");
    iVar1 = test_true("test/threadstest.c",0x3b5,
                      "OSSL_PROVIDER_available(multi_libctx, \"default\")",iVar1 != 0);
    if (iVar1 != 0) goto LAB_001024cb;
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_lock);
  if (iVar1 != 0) {
    multi_success = 0;
    CRYPTO_THREAD_unlock(global_lock);
    OSSL_PROVIDER_unload(uVar2);
    return;
  }
  multi_success = 0;
LAB_001024cb:
  OSSL_PROVIDER_unload(uVar2);
  return;
}



void thread_multi_simple_fetch(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_MD_fetch(multi_libctx,"SHA2-256",0);
  if (lVar2 != 0) {
    EVP_MD_free(lVar2);
    return;
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_lock);
  multi_success = 0;
  if (iVar1 == 0) {
    return;
  }
  CRYPTO_THREAD_unlock(global_lock);
  return;
}



void test_obj_create_one(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  char local_a4 [12];
  char local_98 [32];
  char local_78 [32];
  char local_58 [40];
  long local_30;
  
  uVar1 = current_uid_0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  UNLOCK();
  uVar4 = (ulong)current_uid_0;
  current_uid_0 = current_uid_0 + 1;
  BIO_snprintf(local_a4,0xc,"%d",uVar4);
  BIO_snprintf(local_58,0x28,"1.3.6.1.4.1.16604.%s",local_a4);
  BIO_snprintf(local_98,0x1e,"short-name-%s",local_a4);
  BIO_snprintf(local_78,0x1e,"long-name-%s",local_a4);
  iVar2 = test_int_ne("test/threadstest.c",0x483,&_LC84,&_LC6,uVar1,0);
  if (iVar2 != 0) {
    iVar2 = OBJ_create(local_58,local_98,local_78);
    iVar3 = test_true("test/threadstest.c",0x484,"id = OBJ_create(oid, sn, ln)",iVar2 != 0);
    if (iVar3 != 0) {
      iVar2 = OBJ_add_sigid(iVar2,0x449,0x13);
      iVar2 = test_true("test/threadstest.c",0x485,"OBJ_add_sigid(id, NID_sha3_256, NID_rsa)",
                        iVar2 != 0);
      if (iVar2 != 0) goto LAB_00102687;
    }
  }
  iVar2 = CRYPTO_THREAD_write_lock(global_lock);
  if (iVar2 == 0) {
    multi_success = 0;
  }
  else {
    multi_success = 0;
    CRYPTO_THREAD_unlock(global_lock);
  }
LAB_00102687:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void thread_downgrade_shared_evp_pkey(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = EVP_PKEY_get0_RSA(shared_evp_pkey);
  if (lVar1 == 0) {
    iVar2 = CRYPTO_THREAD_write_lock(global_lock);
    multi_success = 0;
    if (iVar2 != 0) {
      CRYPTO_THREAD_unlock(global_lock);
      return;
    }
  }
  return;
}



void test_bio_dgram_pair_worker(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  byte local_91;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_91 = 0;
  local_68 = 0;
  local_90 = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  uVar1 = RAND_bytes_ex(multi_libctx,&local_91,1,0x40);
  iVar2 = test_int_eq("test/threadstest.c",0x49c,"RAND_bytes_ex(multi_libctx, &ch, 1, 64)",&_LC2,
                      uVar1,1);
  if (iVar2 == 0) {
    iVar2 = CRYPTO_THREAD_write_lock(global_lock);
    multi_success = 0;
    if (iVar2 != 0) {
      CRYPTO_THREAD_unlock(global_lock);
    }
  }
  else {
    local_88._8_8_ = 0x40;
    local_88._0_8_ = local_58;
    uVar3 = multi_bio2;
    if ((local_91 & 1) == 0) {
      uVar3 = multi_bio1;
    }
    if ((local_91 & 2) == 0) {
      BIO_recvmmsg();
    }
    else {
      BIO_sendmmsg(uVar3,local_88,0x28,1,0,&local_90);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void thread_shared_evp_pkey(void)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  char *pcVar3;
  long in_FS_OFFSET;
  size_t local_258;
  size_t local_250;
  uchar local_248 [256];
  uchar local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_250 = 0x100;
  if (do_fips < 0) {
    EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
  }
  else {
    iVar2 = 0;
    pcVar3 = "provider=default";
    while( true ) {
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(multi_libctx,shared_evp_pkey,pcVar3);
      iVar1 = test_ptr("test/threadstest.c",0x391,&_LC90,ctx);
      if (iVar1 == 0) break;
      iVar1 = EVP_PKEY_encrypt_init(ctx);
      iVar1 = test_int_ge("test/threadstest.c",0x394,"EVP_PKEY_encrypt_init(ctx)",&_LC6,iVar1,0);
      if (iVar1 == 0) break;
      iVar1 = EVP_PKEY_encrypt(ctx,local_248,&local_250,(uchar *)"Hello World",0xb);
      iVar1 = test_int_ge("test/threadstest.c",0x395,
                          "EVP_PKEY_encrypt(ctx, ctbuf, &ctlen, (unsigned char *)msg, strlen(msg))",
                          &_LC6,iVar1,0);
      if (iVar1 == 0) break;
      EVP_PKEY_CTX_free(ctx);
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(multi_libctx,shared_evp_pkey,0);
      iVar1 = test_ptr("test/threadstest.c",0x39d,&_LC90,ctx);
      if (iVar1 == 0) break;
      local_258 = 0x100;
      iVar1 = EVP_PKEY_decrypt_init(ctx);
      iVar1 = test_int_ge("test/threadstest.c",0x3a1,"EVP_PKEY_decrypt_init(ctx)",&_LC6,iVar1,0);
      if (iVar1 == 0) break;
      iVar1 = EVP_PKEY_decrypt(ctx,local_148,&local_258,local_248,local_250);
      iVar1 = test_int_gt("test/threadstest.c",0x3a2,
                          "EVP_PKEY_decrypt(ctx, ptbuf, &ptlen, ctbuf, ctlen)",&_LC6,iVar1,0);
      if ((iVar1 == 0) ||
         (iVar1 = test_mem_eq("test/threadstest.c",0x3a4,&_LC97,"ptbuf","Hello World",0xb,local_148,
                              local_258), iVar1 == 0)) break;
      iVar2 = iVar2 + 1;
      if (do_fips < iVar2) {
        EVP_PKEY_CTX_free(ctx);
        goto LAB_00102aba;
      }
      EVP_PKEY_CTX_free(ctx);
      pcVar3 = "provider=fips";
    }
    EVP_PKEY_CTX_free(ctx);
    iVar2 = CRYPTO_THREAD_write_lock(global_lock);
    if (iVar2 == 0) {
      multi_success = 0;
    }
    else {
      multi_success = 0;
      CRYPTO_THREAD_unlock(global_lock);
    }
  }
LAB_00102aba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void test_pem_read_one(void)

{
  int iVar1;
  void *buf;
  BIO *bp;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  buf = (void *)glue_strings(pemdataraw,local_28);
  if (buf == (void *)0x0) {
    iVar1 = CRYPTO_THREAD_write_lock(global_lock);
    if (iVar1 == 0) goto LAB_00102bf8;
    multi_success = 0;
    CRYPTO_THREAD_unlock(global_lock);
  }
  else {
    bp = BIO_new_mem_buf(buf,local_28[0]);
    if (bp != (BIO *)0x0) {
      pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
      if (pkey == (EVP_PKEY *)0x0) {
        iVar1 = CRYPTO_THREAD_write_lock(global_lock);
        multi_success = 0;
        if (iVar1 != 0) {
          CRYPTO_THREAD_unlock(global_lock);
        }
      }
      goto LAB_00102b84;
    }
    iVar1 = CRYPTO_THREAD_write_lock(global_lock);
    if (iVar1 != 0) {
      pkey = (EVP_PKEY *)0x0;
      multi_success = 0;
      CRYPTO_THREAD_unlock(global_lock);
      goto LAB_00102b84;
    }
LAB_00102bf8:
    multi_success = 0;
  }
  bp = (BIO *)0x0;
  pkey = (EVP_PKEY *)0x0;
LAB_00102b84:
  EVP_PKEY_free(pkey);
  BIO_free(bp);
  CRYPTO_free(buf);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thread_general_worker(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  EVP_CIPHER_CTX *ctx_00;
  EVP_CIPHER *cipher;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  uint local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  type = (EVP_MD *)EVP_MD_fetch(multi_libctx,"SHA2-256",0);
  ctx_00 = EVP_CIPHER_CTX_new();
  cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(multi_libctx,"AES-128-CBC",0);
  local_a8 = __LC112;
  uStack_a0 = _UNK_00106378;
  local_98 = __LC112;
  uStack_90 = _UNK_00106378;
  iVar1 = OSSL_PROVIDER_available(multi_libctx,&_LC99);
  iVar2 = test_ptr("test/threadstest.c",0x34b,"mdctx",ctx);
  if ((((iVar2 == 0) || (iVar2 = test_ptr("test/threadstest.c",0x34c,&_LC101,type), iVar2 == 0)) ||
      (iVar2 = test_ptr("test/threadstest.c",0x34d,"cipherctx",ctx_00), iVar2 == 0)) ||
     (iVar2 = test_ptr("test/threadstest.c",0x34e,&_LC103,cipher), iVar2 == 0)) {
LAB_00102d32:
    EVP_MD_CTX_free(ctx);
    EVP_MD_free(type);
    EVP_CIPHER_CTX_free(ctx_00);
    EVP_CIPHER_free();
    EVP_PKEY_free((EVP_PKEY *)0x0);
  }
  else {
    iVar2 = 5;
    do {
      iVar3 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      iVar3 = test_true("test/threadstest.c",0x353,"EVP_DigestInit_ex(mdctx, md, NULL)",iVar3 != 0);
      if (iVar3 == 0) goto LAB_00102d32;
      iVar3 = EVP_DigestUpdate(ctx,"Hello World",0xb);
      iVar3 = test_true("test/threadstest.c",0x354,"EVP_DigestUpdate(mdctx, message, messlen)",
                        iVar3 != 0);
      if (iVar3 == 0) goto LAB_00102d32;
      iVar3 = EVP_DigestFinal(ctx,local_88,&local_b0);
      iVar3 = test_true("test/threadstest.c",0x355,"EVP_DigestFinal(mdctx, out, &mdoutl)",iVar3 != 0
                       );
      if (iVar3 == 0) goto LAB_00102d32;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 5;
    do {
      iVar3 = EVP_EncryptInit_ex(ctx_00,cipher,(ENGINE *)0x0,(uchar *)&local_a8,(uchar *)&local_98);
      iVar3 = test_true("test/threadstest.c",0x359,
                        "EVP_EncryptInit_ex(cipherctx, ciph, NULL, key, iv)",iVar3 != 0);
      if (iVar3 == 0) goto LAB_00102d32;
      iVar3 = EVP_EncryptUpdate(ctx_00,local_88,&local_ac,(uchar *)"Hello World",0xb);
      iVar3 = test_true("test/threadstest.c",0x35a,
                        "EVP_EncryptUpdate(cipherctx, out, &ciphoutl, (unsigned char *)message, messlen)"
                        ,iVar3 != 0);
      if (iVar3 == 0) goto LAB_00102d32;
      iVar3 = EVP_EncryptFinal(ctx_00,local_88,&local_ac);
      iVar3 = test_true("test/threadstest.c",0x35d,"EVP_EncryptFinal(cipherctx, out, &ciphoutl)",
                        iVar3 != 0);
      if (iVar3 == 0) goto LAB_00102d32;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pkey = (EVP_PKEY *)
           EVP_PKEY_Q_keygen(multi_libctx,0,&_LC110,
                             (-(ulong)(iVar1 == 0) & 0xfffffffffffffa00) + 0x800);
    iVar1 = test_ptr("test/threadstest.c",0x367,&_LC111,pkey);
    EVP_MD_CTX_free(ctx);
    EVP_MD_free(type);
    EVP_CIPHER_CTX_free(ctx_00);
    EVP_CIPHER_free(cipher);
    EVP_PKEY_free(pkey);
    if (iVar1 != 0) goto LAB_00102d77;
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_lock);
  multi_success = 0;
  if (iVar1 != 0) {
    CRYPTO_THREAD_unlock(global_lock);
  }
LAB_00102d77:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_pem_read(void)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  
  _multi_threads = (undefined1  [16])0x0;
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(1);
  if ((iVar2 == 0) || (iVar2 = start_threads_constprop_1(test_pem_read_one), iVar2 == 0)) {
LAB_00103117:
    bVar5 = false;
  }
  else {
    test_pem_read_one();
    if (multi_num_threads != 0) {
      uVar4 = 0;
      do {
        iVar2 = pthread_join((&multi_threads)[uVar4],(void **)0x0);
        iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar2 == 0)
        ;
        if (iVar2 == 0) goto LAB_00103117;
        uVar4 = uVar4 + 1;
      } while (uVar4 < multi_num_threads);
    }
    iVar2 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    bVar5 = iVar2 != 0;
  }
  if (multi_provider != 0) {
    puVar3 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_multi_general_worker_default_provider(void)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  
  _multi_threads = (undefined1  [16])0x0;
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(1);
  if ((iVar2 == 0) || (iVar2 = start_threads_constprop_0(thread_general_worker), iVar2 == 0)) {
LAB_00103307:
    bVar5 = false;
  }
  else {
    thread_general_worker();
    if (multi_num_threads != 0) {
      uVar4 = 0;
      do {
        iVar2 = pthread_join((&multi_threads)[uVar4],(void **)0x0);
        iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar2 == 0)
        ;
        if (iVar2 == 0) goto LAB_00103307;
        uVar4 = uVar4 + 1;
      } while (uVar4 < multi_num_threads);
    }
    iVar2 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    bVar5 = iVar2 != 0;
  }
  if (multi_provider != 0) {
    puVar3 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_obj_add(void)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  
  _multi_threads = (undefined1  [16])0x0;
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(1);
  if ((iVar2 == 0) || (iVar2 = start_threads_constprop_1(test_obj_create_one), iVar2 == 0)) {
LAB_001034f7:
    bVar5 = false;
  }
  else {
    test_obj_create_one();
    if (multi_num_threads != 0) {
      uVar4 = 0;
      do {
        iVar2 = pthread_join((&multi_threads)[uVar4],(void **)0x0);
        iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar2 == 0)
        ;
        if (iVar2 == 0) goto LAB_001034f7;
        uVar4 = uVar4 + 1;
      } while (uVar4 < multi_num_threads);
    }
    iVar2 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    bVar5 = iVar2 != 0;
  }
  if (multi_provider != 0) {
    puVar3 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_multi_load_unload_provider(void)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = test_get_libctx(&multi_libctx,0,config_file,0,0);
  iVar2 = test_true("test/threadstest.c",0x2f3,
                    "test_get_libctx(&multi_libctx, NULL, config_file, NULL, NULL)",iVar2 != 0);
  if (iVar2 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = OSSL_PROVIDER_load(multi_libctx,"default");
    uVar3 = test_ptr("test/threadstest.c",0x42c,
                     "prov = OSSL_PROVIDER_load(multi_libctx, \"default\")",uVar4);
    if (uVar3 != 0) {
      uVar5 = EVP_MD_fetch(multi_libctx,"SHA2-256",0);
      uVar3 = test_ptr("test/threadstest.c",0x42d,
                       "sha256 = EVP_MD_fetch(multi_libctx, \"SHA2-256\", NULL)",uVar5);
      if (uVar3 != 0) {
        iVar2 = OSSL_PROVIDER_unload(uVar4);
        uVar3 = test_true("test/threadstest.c",0x42e,"OSSL_PROVIDER_unload(prov)",iVar2 != 0);
        if (uVar3 != 0) {
          iVar2 = start_threads_constprop_0(thread_provider_load_unload);
          if (iVar2 == 0) {
LAB_00103876:
            uVar3 = 0;
            uVar4 = 0;
          }
          else {
            thread_provider_load_unload();
            if (multi_num_threads != 0) {
              uVar7 = 0;
              do {
                iVar2 = pthread_join((&multi_threads)[uVar7],(void **)0x0);
                iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",
                                  iVar2 == 0);
                if (iVar2 == 0) goto LAB_00103876;
                uVar7 = uVar7 + 1;
              } while (uVar7 < multi_num_threads);
            }
            iVar2 = test_true("test/threadstest.c",0x438,"multi_success",multi_success != 0);
            uVar3 = (uint)(iVar2 != 0);
            uVar4 = 0;
          }
        }
      }
    }
  }
  OSSL_PROVIDER_unload(uVar4);
  EVP_MD_free(uVar5);
  if (multi_provider != 0) {
    puVar6 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_multi_fetch_worker(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  
  _multi_threads = (undefined1  [16])0x0;
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(1,default_provider);
  if ((iVar2 == 0) || (iVar2 = start_threads_constprop_0(thread_multi_simple_fetch), iVar2 == 0)) {
LAB_001039a7:
    bVar6 = false;
  }
  else {
    lVar3 = EVP_MD_fetch(multi_libctx,"SHA2-256",0);
    if (lVar3 == 0) {
      iVar2 = CRYPTO_THREAD_write_lock(global_lock);
      multi_success = 0;
      if (iVar2 != 0) {
        CRYPTO_THREAD_unlock(global_lock);
      }
    }
    else {
      EVP_MD_free(lVar3);
    }
    uVar5 = 0;
    if (multi_num_threads != 0) {
      do {
        iVar2 = pthread_join((&multi_threads)[uVar5],(void **)0x0);
        iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar2 == 0)
        ;
        if (iVar2 == 0) goto LAB_001039a7;
        uVar5 = uVar5 + 1;
      } while (uVar5 < multi_num_threads);
    }
    iVar2 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    bVar6 = iVar2 != 0;
  }
  if (multi_provider != 0) {
    puVar4 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong test_multi_general_worker_fips_provider(void)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if (do_fips == 0) {
    uVar4 = test_skip("test/threadstest.c",0x3c4,"FIPS not supported");
    return uVar4;
  }
  _multi_threads = (undefined1  [16])0x0;
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(1);
  if ((iVar2 == 0) || (iVar2 = start_threads_constprop_0(thread_general_worker), iVar2 == 0)) {
LAB_00103be5:
    uVar4 = 0;
  }
  else {
    thread_general_worker();
    if (multi_num_threads != 0) {
      uVar4 = 0;
      do {
        iVar2 = pthread_join((&multi_threads)[uVar4],(void **)0x0);
        iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar2 == 0)
        ;
        if (iVar2 == 0) goto LAB_00103be5;
        uVar4 = uVar4 + 1;
      } while (uVar4 < multi_num_threads);
    }
    iVar2 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    uVar4 = (ulong)(iVar2 != 0);
  }
  if (multi_provider != 0) {
    puVar3 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_multi_default(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  
  if (multidefault_run != 0) {
    test_skip("test/threadstest.c",0x455,"multi default test already run");
    return true;
  }
  multidefault_run = 1;
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(0,default_provider);
  bVar6 = false;
  if ((iVar2 != 0) && (iVar2 = start_threads_constprop_0(thread_multi_simple_fetch), iVar2 != 0)) {
    lVar3 = EVP_MD_fetch(multi_libctx,"SHA2-256",0);
    if (lVar3 == 0) {
      iVar2 = CRYPTO_THREAD_write_lock(global_lock);
      multi_success = 0;
      if (iVar2 != 0) {
        CRYPTO_THREAD_unlock(global_lock);
      }
    }
    else {
      EVP_MD_free(lVar3);
    }
    uVar5 = 0;
    if (multi_num_threads != 0) {
      do {
        iVar2 = pthread_join((&multi_threads)[uVar5],(void **)0x0);
        iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar2 == 0)
        ;
        if (iVar2 == 0) goto LAB_00103e0a;
        uVar5 = uVar5 + 1;
      } while (uVar5 < multi_num_threads);
    }
    iVar2 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    bVar6 = iVar2 != 0;
  }
LAB_00103e0a:
  if (multi_provider != 0) {
    puVar4 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte test_multi_load(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  bool bVar7;
  
  bVar7 = true;
  if (multidefault_run == 0) {
    test_info("test/threadstest.c",0x465,"Running multi default test first");
    iVar2 = test_multi_default();
    bVar7 = iVar2 != 0;
  }
  lVar3 = OSSL_PROVIDER_load(0);
  if (lVar3 == 0) {
    test_info("test/threadstest.c",0x471,
              "Cannot load legacy provider - assuming this is a no-legacy build");
    multi_load_provider = _LC76;
  }
  OSSL_PROVIDER_unload(lVar3);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = start_threads_constprop_1(test_multi_load_worker);
  if (iVar2 == 0) {
LAB_001040f7:
    bVar6 = 0;
  }
  else {
    uVar4 = 0;
    if (multi_num_threads != 0) {
      do {
        iVar2 = pthread_join((&multi_threads)[uVar4],(void **)0x0);
        iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar2 == 0)
        ;
        if (iVar2 == 0) goto LAB_001040f7;
        uVar4 = uVar4 + 1;
      } while (uVar4 < multi_num_threads);
    }
    iVar2 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    bVar6 = iVar2 != 0 & bVar7;
  }
  puVar5 = &multi_provider;
  lVar3 = multi_provider;
  while (lVar3 != 0) {
    OSSL_PROVIDER_unload();
    plVar1 = puVar5 + 1;
    puVar5 = puVar5 + 1;
    lVar3 = *plVar1;
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_bio_dgram_pair(void)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  BIO *local_40;
  BIO *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BIO *)0x0;
  local_38 = (BIO *)0x0;
  uVar2 = BIO_new_bio_dgram_pair(&local_40,0,&local_38,0);
  iVar3 = test_int_eq("test/threadstest.c",0x4b9,&_LC122,&_LC2,uVar2,1);
  if (iVar3 == 0) goto LAB_001042b4;
  multi_success = 1;
  multi_bio1 = local_40;
  multi_libctx = 0;
  multi_bio2 = local_38;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar3 = thread_setup_libctx(1);
  if (iVar3 == 0) {
LAB_001043f0:
    uVar2 = 0;
  }
  else {
    iVar3 = start_threads_constprop_1(test_bio_dgram_pair_worker);
    if (iVar3 == 0) goto LAB_001043f0;
    test_bio_dgram_pair_worker();
    if (multi_num_threads != 0) {
      uVar4 = 0;
      do {
        iVar3 = pthread_join((&multi_threads)[uVar4],(void **)0x0);
        iVar3 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar3 == 0)
        ;
        if (iVar3 == 0) goto LAB_001043f0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < multi_num_threads);
    }
    iVar3 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
    uVar2 = (uint)(iVar3 != 0);
  }
  if (multi_provider != 0) {
    puVar5 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
LAB_001042b4:
  BIO_free(local_40);
  BIO_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_multi_shared_pkey_release(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  puVar6 = default_provider;
  lVar3 = 1;
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  if (do_fips != 0) {
    puVar6 = fips_and_default_providers;
  }
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104d40 = 0;
  shared_evp_pkey = (EVP_PKEY *)0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(1,puVar6);
  if (iVar2 != 0) {
    shared_evp_pkey = (EVP_PKEY *)load_pkey_pem(privkey,multi_libctx);
    iVar2 = test_ptr("test/threadstest.c",0x40c,
                     "shared_evp_pkey = load_pkey_pem(privkey, multi_libctx)",shared_evp_pkey);
    if (iVar2 != 0) {
      do {
        iVar2 = EVP_PKEY_up_ref(shared_evp_pkey);
        iVar2 = test_true("test/threadstest.c",0x40f,"EVP_PKEY_up_ref(shared_evp_pkey)",iVar2 != 0);
        if (iVar2 == 0) goto LAB_00104580;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 10);
      iVar2 = start_threads_constprop_1(thread_release_shared_pkey);
      if (iVar2 != 0) {
        if (multi_num_threads != 0) {
          uVar5 = 0;
          do {
            iVar2 = pthread_join((&multi_threads)[uVar5],(void **)0x0);
            iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",
                              iVar2 == 0);
            if (iVar2 == 0) goto LAB_00104592;
            uVar5 = uVar5 + 1;
          } while (uVar5 < multi_num_threads);
        }
        iVar2 = test_true("test/threadstest.c",0x418,"multi_success",multi_success != 0);
        bVar7 = iVar2 != 0;
        goto LAB_00104594;
      }
    }
  }
LAB_00104580:
  do {
    EVP_PKEY_free(shared_evp_pkey);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
LAB_00104592:
  bVar7 = false;
LAB_00104594:
  if (multi_provider != 0) {
    puVar4 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_multi_shared_pkey_common(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  puVar5 = default_provider;
  multi_success = 1;
  multi_libctx = 0;
  _multi_threads = (undefined1  [16])0x0;
  if (do_fips != 0) {
    puVar5 = fips_and_default_providers;
  }
  _DAT_00104cd0 = (undefined1  [16])0x0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  iVar2 = thread_setup_libctx(1,puVar5);
  if (iVar2 != 0) {
    shared_evp_pkey = (EVP_PKEY *)load_pkey_pem(privkey,multi_libctx);
    iVar2 = test_ptr("test/threadstest.c",0x3d6,
                     "shared_evp_pkey = load_pkey_pem(privkey, multi_libctx)",shared_evp_pkey);
    if (((iVar2 != 0) && (iVar2 = start_threads_constprop_2(thread_shared_evp_pkey), iVar2 != 0)) &&
       (iVar2 = start_threads_constprop_2(param_1), iVar2 != 0)) {
      thread_shared_evp_pkey();
      if (multi_num_threads != 0) {
        uVar4 = 0;
        do {
          iVar2 = pthread_join((&multi_threads)[uVar4],(void **)0x0);
          iVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",
                            iVar2 == 0);
          if (iVar2 == 0) goto LAB_001047f9;
          uVar4 = uVar4 + 1;
        } while (uVar4 < multi_num_threads);
      }
      iVar2 = test_true("test/threadstest.c",0x3de,"multi_success",multi_success != 0);
      bVar6 = iVar2 != 0;
      goto LAB_001047fb;
    }
  }
LAB_001047f9:
  bVar6 = false;
LAB_001047fb:
  EVP_PKEY_free(shared_evp_pkey);
  if (multi_provider != 0) {
    puVar3 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00104d40 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00104cd0 = (undefined1  [16])0x0;
  _DAT_00104ce0 = (undefined1  [16])0x0;
  _DAT_00104cf0 = (undefined1  [16])0x0;
  _DAT_00104d00 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00104d30 = (undefined1  [16])0x0;
  return bVar6;
}



void test_multi_downgrade_shared_pkey(void)

{
  test_multi_shared_pkey_common(thread_downgrade_shared_evp_pkey);
  return;
}



void test_multi_shared_pkey(void)

{
  test_multi_shared_pkey_common(thread_shared_evp_pkey);
  return;
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
LAB_001049da:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        uVar2 = test_get_argument(0);
        iVar1 = test_ptr("test/threadstest.c",0x522,"datadir = test_get_argument(0)",uVar2);
        if (iVar1 == 0) {
          return 0;
        }
        privkey = test_mk_file_path(uVar2,"rsakey.pem");
        iVar1 = test_ptr("test/threadstest.c",0x526,"privkey",privkey);
        if (iVar1 == 0) {
          return 0;
        }
        global_lock = CRYPTO_THREAD_lock_new();
        iVar1 = test_ptr("test/threadstest.c",0x529,"global_lock = CRYPTO_THREAD_lock_new()",
                         global_lock);
        if (iVar1 == 0) {
          return 0;
        }
        add_test("test_multi_default",test_multi_default);
        add_test("test_lock",test_lock);
        add_test("torture_rw_low",torture_rw_low);
        add_test("torture_rw_high",torture_rw_high);
        add_test("torture_rcu_low",torture_rcu_low);
        add_test("torture_rcu_high",torture_rcu_high);
        add_test("torture_rcu_high2",torture_rcu_high2);
        add_test("test_once",test_once);
        add_test("test_thread_local",test_thread_local);
        add_test("test_atomic",test_atomic);
        add_test("test_multi_load",test_multi_load);
        add_test("test_multi_general_worker_default_provider",
                 test_multi_general_worker_default_provider);
        add_test("test_multi_general_worker_fips_provider",test_multi_general_worker_fips_provider);
        add_test("test_multi_fetch_worker",test_multi_fetch_worker);
        add_test("test_multi_shared_pkey",test_multi_shared_pkey);
        add_test("test_multi_downgrade_shared_pkey",test_multi_downgrade_shared_pkey);
        add_test("test_multi_shared_pkey_release",test_multi_shared_pkey_release);
        add_test("test_multi_load_unload_provider",test_multi_load_unload_provider);
        add_test("test_obj_add",test_obj_add);
        add_test("test_bio_dgram_pair",test_bio_dgram_pair);
        add_test("test_pem_read",test_pem_read);
        return 1;
      }
      if (iVar1 == 2) {
        config_file = opt_arg();
        goto LAB_001049da;
      }
      if (2 < iVar1) break;
      if (iVar1 != 1) {
        return 0;
      }
      do_fips = 1;
      iVar1 = opt_next();
    }
    if (5 < iVar1 - 500U) {
      return 0;
    }
  } while( true );
}



void cleanup_tests(void)

{
  CRYPTO_free(privkey);
  CRYPTO_THREAD_lock_free(global_lock);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rwreader_fn_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rwwriter_fn_isra_0_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



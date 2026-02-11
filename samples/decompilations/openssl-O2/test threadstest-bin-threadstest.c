
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



undefined8 start_threads(long param_1,void *param_2)

{
  pthread_t *__newthread;
  int iVar1;
  long lVar2;
  
  iVar1 = test_size_t_le("test/threadstest.c",0x310,"multi_num_threads + n","MAXIMUM_THREADS",
                         multi_num_threads + param_1,10);
  if (iVar1 != 0) {
    lVar2 = 0;
    while( true ) {
      __newthread = &multi_threads + multi_num_threads;
      multi_num_threads = multi_num_threads + 1;
      iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_run,param_2);
      iVar1 = test_true("test/threadstest.c",0x314,
                        "run_thread(multi_threads + multi_num_threads++, thread_func)",iVar1 == 0);
      if (iVar1 == 0) break;
      lVar2 = lVar2 + 1;
      if (param_1 == lVar2) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 thread_run(code *param_1)

{
  (*param_1)();
  OPENSSL_thread_stop();
  return 0;
}



undefined8 teardown_threads(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (multi_num_threads == 0) {
    return 1;
  }
  uVar3 = 0;
  do {
    iVar1 = pthread_join((&multi_threads)[uVar3],(void **)0x0);
    uVar2 = test_true("test/threadstest.c",0x307,"wait_for_thread(multi_threads[i])",iVar1 == 0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < multi_num_threads);
  return 1;
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
  uVar1 = test_ptr("test/threadstest.c",599,&_LC5,uVar3);
  if (uVar1 == 0) goto LAB_00100251;
  iVar2 = CRYPTO_atomic_add(&local_58,1,&local_54,0);
  if (iVar2 == 0) {
    iVar2 = test_int_eq("test/threadstest.c",0x260,&_LC7,&_LC10,local_58,0);
    if ((iVar2 != 0) &&
       (iVar2 = test_int_eq("test/threadstest.c",0x260,&_LC7,&_LC8,local_58,local_54), iVar2 != 0))
    goto LAB_0010033a;
LAB_001002d1:
    uVar1 = 0;
  }
  else {
    iVar2 = test_int_eq("test/threadstest.c",0x25c,&_LC7,&_LC6,local_58,1);
    if ((iVar2 == 0) ||
       (iVar2 = test_int_eq("test/threadstest.c",0x25c,&_LC7,&_LC8,local_58,local_54), iVar2 == 0))
    goto LAB_001002d1;
LAB_0010033a:
    local_58 = 0;
    local_54 = 0;
    iVar2 = CRYPTO_atomic_add(&local_58,1,&local_54,uVar3);
    iVar2 = test_true("test/threadstest.c",0x266,"CRYPTO_atomic_add(&val, 1, &ret, lock)",iVar2 != 0
                     );
    if (((iVar2 == 0) ||
        (iVar2 = test_int_eq("test/threadstest.c",0x268,&_LC7,&_LC6,local_58,1), iVar2 == 0)) ||
       (iVar2 = test_int_eq("test/threadstest.c",0x268,&_LC7,&_LC8,local_58,local_54), iVar2 == 0))
    goto LAB_001002d1;
    iVar2 = CRYPTO_atomic_or(&local_50,2,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x272,"(unsigned int)val64",&_LC6,
                           local_50 & 0xffffffff,1);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x273,"(unsigned int)ret64",&_LC10,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_00100458;
      goto LAB_001002d1;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x26d,"(unsigned int)val64",&_LC11,
                         local_50 & 0xffffffff,3);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x26e,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_001002d1;
LAB_00100458:
    local_50 = 1;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_or(&local_50,2,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",0x279,"CRYPTO_atomic_or(&val64, 2, &ret64, lock)",
                      iVar2 != 0);
    if (((iVar2 == 0) ||
        (iVar2 = test_uint_eq("test/threadstest.c",0x27c,"(unsigned int)val64",&_LC11,
                              local_50 & 0xffffffff,3), iVar2 == 0)) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x27d,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_001002d1;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_load(&local_50,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x288,"(unsigned int)val64",&_LC11,
                           local_50 & 0xffffffff,3);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x289,"(unsigned int)ret64",&_LC10,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_0010055f;
      goto LAB_001002d1;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x283,"(unsigned int)val64",&_LC11,
                         local_50 & 0xffffffff);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x284,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_001002d1;
LAB_0010055f:
    local_48 = 0;
    iVar2 = CRYPTO_atomic_load(&local_50,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",0x28e,"CRYPTO_atomic_load(&val64, &ret64, lock)",
                      iVar2 != 0);
    if (((iVar2 == 0) ||
        (iVar2 = test_uint_eq("test/threadstest.c",0x291,"(unsigned int)val64",&_LC11,
                              local_50 & 0xffffffff,3), iVar2 == 0)) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x292,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_001002d1;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_and(&local_50,5,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x29e,"(unsigned int)val64",&_LC11,
                           local_50 & 0xffffffff,3);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x29f,"(unsigned int)ret64",&_LC10,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_00100656;
      goto LAB_001002d1;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x299,"(unsigned int)val64",&_LC6,
                         local_50 & 0xffffffff,1);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x29a,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_001002d1;
LAB_00100656:
    local_48 = 0;
    local_50 = 3;
    iVar2 = CRYPTO_atomic_and(&local_50,5,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",0x2a5,"CRYPTO_atomic_and(&val64, 5, &ret64, lock)",
                      iVar2 != 0);
    if (((iVar2 == 0) ||
        (iVar2 = test_uint_eq("test/threadstest.c",0x2a8,"(unsigned int)val64",&_LC6,
                              local_50 & 0xffffffff,1), iVar2 == 0)) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x2a9,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_001002d1;
    local_48 = 0;
    iVar2 = CRYPTO_atomic_add64(&local_50,2,&local_48,0);
    if (iVar2 == 0) {
      iVar2 = test_uint_eq("test/threadstest.c",0x2b5,"(unsigned int)val64",&_LC6,
                           local_50 & 0xffffffff,1);
      if ((iVar2 != 0) &&
         (iVar2 = test_int_eq("test/threadstest.c",0x2b6,"(unsigned int)ret64",&_LC10,
                              local_48 & 0xffffffff,0), iVar2 != 0)) goto LAB_0010075b;
      goto LAB_001002d1;
    }
    iVar2 = test_uint_eq("test/threadstest.c",0x2b0,"(unsigned int)val64",&_LC11,
                         local_50 & 0xffffffff,3);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x2b1,"(unsigned int)val64","(unsigned int)ret64",
                             local_50 & 0xffffffff,local_48 & 0xffffffff), iVar2 == 0))
    goto LAB_001002d1;
LAB_0010075b:
    local_48 = 0;
    local_50 = 1;
    iVar2 = CRYPTO_atomic_add64(&local_50,2,&local_48,uVar3);
    iVar2 = test_true("test/threadstest.c",700,"CRYPTO_atomic_add64(&val64, 2, &ret64, lock)",
                      iVar2 != 0);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/threadstest.c",0x2bf,"(unsigned int)val64",&_LC11,
                             local_50 & 0xffffffff,3), iVar2 == 0)) goto LAB_001002d1;
    iVar2 = test_uint_eq("test/threadstest.c",0x2c0,"(unsigned int)val64","(unsigned int)ret64",
                         local_50 & 0xffffffff,local_48 & 0xffffffff);
    uVar1 = (uint)(iVar2 != 0);
  }
  CRYPTO_THREAD_lock_free(uVar3);
LAB_00100251:
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
    iVar1 = test_ptr_null("test/threadstest.c",0x23a,&_LC19,uVar2);
    if (iVar1 != 0) {
      iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_run,thread_local_thread_cb);
      iVar1 = test_true("test/threadstest.c",0x23b,"run_thread(&thread, thread_local_thread_cb)",
                        iVar1 == 0);
      if (iVar1 != 0) {
        iVar1 = pthread_join(local_38,(void **)0x0);
        iVar1 = test_true("test/threadstest.c",0x23c,"wait_for_thread(thread)",iVar1 == 0);
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/threadstest.c",0x23d,"thread_local_thread_cb_ok",&_LC6,
                              thread_local_thread_cb_ok,1);
          if (iVar1 != 0) {
            uVar2 = CRYPTO_THREAD_get_local(&thread_local_key);
            iVar1 = test_ptr_null("test/threadstest.c",0x243,&_LC19,uVar2);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/threadstest.c",0x247,"destructor_run_count",&_LC6,
                                  destructor_run_count,1);
              if (iVar1 != 0) {
                iVar1 = CRYPTO_THREAD_cleanup_local(&thread_local_key);
                iVar1 = test_true("test/threadstest.c",0x24c,
                                  "CRYPTO_THREAD_cleanup_local(&thread_local_key)",iVar1 != 0);
                bVar3 = iVar1 != 0;
                goto LAB_001009ec;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001009ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void thread_local_thread_cb(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = CRYPTO_THREAD_get_local(&thread_local_key);
  iVar2 = test_ptr_null("test/threadstest.c",0x224,&_LC19,uVar1);
  if (iVar2 != 0) {
    iVar2 = CRYPTO_THREAD_set_local(&thread_local_key,&destructor_run_count);
    iVar2 = test_true("test/threadstest.c",0x225,
                      "CRYPTO_THREAD_set_local(&thread_local_key, &destructor_run_count)",iVar2 != 0
                     );
    if (iVar2 != 0) {
      uVar1 = CRYPTO_THREAD_get_local(&thread_local_key);
      iVar2 = test_ptr_eq("test/threadstest.c",0x22a,&_LC19,"&destructor_run_count",uVar1,
                          &destructor_run_count);
      if (iVar2 != 0) {
        thread_local_thread_cb_ok = 1;
        return;
      }
    }
  }
  return;
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
        iVar1 = test_int_eq("test/threadstest.c",0x20a,"once_run_count",&_LC6,once_run_count,1);
        bVar2 = iVar1 != 0;
        goto LAB_00100c79;
      }
    }
  }
  bVar2 = false;
LAB_00100c79:
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
    if ((local_48 == 1) && (local_44 == 1)) break;
    iVar2 = iVar2 + 1;
    uVar4 = 0;
    CRYPTO_atomic_add(&writer1_done,0,&local_48,atomiclock);
    CRYPTO_atomic_add(&writer2_done,0,&local_44,atomiclock);
    ossl_rcu_read_lock(rcu_lock);
    puVar1 = (ulong *)ossl_rcu_uptr_deref(&writer_ptr);
    if (puVar1 != (ulong *)0x0) {
      uVar4 = *puVar1;
    }
    if (uVar4 < uVar3) {
      test_info("test/threadstest.c",0x17e,"rcu torture value went backwards! %llu : %llu",uVar3,
                uVar4);
      rcu_torture_result = 0;
    }
    ossl_rcu_read_unlock(rcu_lock);
    uVar3 = uVar4;
  } while (rcu_torture_result != 0);
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
      if (iVar2 == 0) goto code_r0x00105097;
      *param_1 = iVar1;
      if (iVar3 == 0) goto LAB_001014df;
      iVar3 = CRYPTO_THREAD_read_lock(rwtorturelock);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        rwreader_fn_cold();
      }
    }
    *param_1 = iVar1;
    iVar1 = CRYPTO_THREAD_unlock(rwtorturelock);
    if (iVar1 != 0) {
LAB_001014df:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
code_r0x00105097:
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
  iVar1 = test_ptr("test/threadstest.c",0x5d,&_LC5,uVar2);
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
        goto LAB_001015f9;
      }
    }
  }
  bVar3 = false;
LAB_001015f9:
  CRYPTO_THREAD_lock_free(uVar2);
  return bVar3;
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
  local_a8 = __LC71;
  uStack_a0 = _UNK_00105298;
  local_98 = __LC71;
  uStack_90 = _UNK_00105298;
  iVar1 = OSSL_PROVIDER_available(multi_libctx,&_LC57);
  iVar2 = test_ptr("test/threadstest.c",0x34b,"mdctx",ctx);
  if ((((iVar2 == 0) || (iVar2 = test_ptr("test/threadstest.c",0x34c,&_LC59,type), iVar2 == 0)) ||
      (iVar2 = test_ptr("test/threadstest.c",0x34d,"cipherctx",ctx_00), iVar2 == 0)) ||
     (iVar2 = test_ptr("test/threadstest.c",0x34e,&_LC61,cipher), iVar2 == 0)) {
LAB_00101742:
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
      if (iVar3 == 0) goto LAB_00101742;
      iVar3 = EVP_DigestUpdate(ctx,"Hello World",0xb);
      iVar3 = test_true("test/threadstest.c",0x354,"EVP_DigestUpdate(mdctx, message, messlen)",
                        iVar3 != 0);
      if (iVar3 == 0) goto LAB_00101742;
      iVar3 = EVP_DigestFinal(ctx,local_88,&local_b0);
      iVar3 = test_true("test/threadstest.c",0x355,"EVP_DigestFinal(mdctx, out, &mdoutl)",iVar3 != 0
                       );
      if (iVar3 == 0) goto LAB_00101742;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 5;
    do {
      iVar3 = EVP_EncryptInit_ex(ctx_00,cipher,(ENGINE *)0x0,(uchar *)&local_a8,(uchar *)&local_98);
      iVar3 = test_true("test/threadstest.c",0x359,
                        "EVP_EncryptInit_ex(cipherctx, ciph, NULL, key, iv)",iVar3 != 0);
      if (iVar3 == 0) goto LAB_00101742;
      iVar3 = EVP_EncryptUpdate(ctx_00,local_88,&local_ac,(uchar *)"Hello World",0xb);
      iVar3 = test_true("test/threadstest.c",0x35a,
                        "EVP_EncryptUpdate(cipherctx, out, &ciphoutl, (unsigned char *)message, messlen)"
                        ,iVar3 != 0);
      if (iVar3 == 0) goto LAB_00101742;
      iVar3 = EVP_EncryptFinal(ctx_00,local_88,&local_ac);
      iVar3 = test_true("test/threadstest.c",0x35d,"EVP_EncryptFinal(cipherctx, out, &ciphoutl)",
                        iVar3 != 0);
      if (iVar3 == 0) goto LAB_00101742;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pkey = (EVP_PKEY *)
           EVP_PKEY_Q_keygen(multi_libctx,0,&_LC69,
                             (-(ulong)(iVar1 == 0) & 0xfffffffffffffa00) + 0x800);
    iVar1 = test_ptr("test/threadstest.c",0x367,&_LC70,pkey);
    EVP_MD_CTX_free(ctx);
    EVP_MD_free(type);
    EVP_CIPHER_CTX_free(ctx_00);
    EVP_CIPHER_free(cipher);
    EVP_PKEY_free(pkey);
    if (iVar1 != 0) goto LAB_00101787;
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_lock);
  multi_success = 0;
  if (iVar1 != 0) {
    CRYPTO_THREAD_unlock(global_lock);
  }
LAB_00101787:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thead_teardown_libctx(void)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (multi_provider != 0) {
    puVar2 = &multi_provider;
    do {
      OSSL_PROVIDER_unload();
      plVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while (*plVar1 != 0);
  }
  OSSL_LIB_CTX_free(multi_libctx);
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00103c60 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00103bf0 = (undefined1  [16])0x0;
  _DAT_00103c00 = (undefined1  [16])0x0;
  _DAT_00103c10 = (undefined1  [16])0x0;
  _DAT_00103c20 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00103c50 = (undefined1  [16])0x0;
  return;
}



undefined8 thread_setup_libctx(int param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    iVar1 = test_get_libctx(&multi_libctx,0,config_file,0,0);
    iVar1 = test_true("test/threadstest.c",0x2f3,
                      "test_get_libctx(&multi_libctx, NULL, config_file, NULL, NULL)",iVar1 != 0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar3 = 0;
    do {
      iVar1 = test_size_t_lt("test/threadstest.c",0x2f9,&_LC90,"MAXIMUM_PROVIDERS",lVar3,4);
      if (iVar1 == 0) {
LAB_0010261a:
        thead_teardown_libctx();
        return 0;
      }
      uVar2 = OSSL_PROVIDER_load(multi_libctx,param_2[lVar3]);
      (&multi_provider)[lVar3] = uVar2;
      iVar1 = test_ptr("test/threadstest.c",0x2fa,
                       "multi_provider[n] = OSSL_PROVIDER_load(multi_libctx, providers[n])",uVar2);
      if (iVar1 == 0) goto LAB_0010261a;
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thread_run_test(code *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5)

{
  int iVar1;
  
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00103c60 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00103bf0 = (undefined1  [16])0x0;
  _DAT_00103c00 = (undefined1  [16])0x0;
  _DAT_00103c10 = (undefined1  [16])0x0;
  _DAT_00103c20 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00103c50 = (undefined1  [16])0x0;
  iVar1 = thread_setup_libctx(param_4,param_5);
  if (iVar1 != 0) {
    iVar1 = start_threads(param_2,param_3);
    if (iVar1 != 0) {
      if (param_1 != (code *)0x0) {
        (*param_1)();
      }
      iVar1 = teardown_threads();
      if (iVar1 != 0) {
        iVar1 = test_true("test/threadstest.c",0x329,"multi_success",multi_success != 0);
        thead_teardown_libctx();
        return iVar1 != 0;
      }
    }
  }
  thead_teardown_libctx();
  return false;
}



void test_pem_read(void)

{
  thread_run_test(test_pem_read_one,10,test_pem_read_one,1,default_provider);
  return;
}



void test_obj_add(void)

{
  thread_run_test(test_obj_create_one,10,test_obj_create_one,1,default_provider);
  return;
}



void test_multi_fetch_worker(void)

{
  thread_run_test(thread_multi_simple_fetch,2,thread_multi_simple_fetch,1,default_provider);
  return;
}



void test_multi_general_worker_default_provider(void)

{
  thread_run_test(thread_general_worker,2,thread_general_worker,1,default_provider);
  return;
}



undefined4 test_bio_dgram_pair(void)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  BIO *local_20;
  BIO *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (BIO *)0x0;
  local_18 = (BIO *)0x0;
  uVar1 = BIO_new_bio_dgram_pair(&local_20,0,&local_18,0);
  iVar2 = test_int_eq("test/threadstest.c",0x4b9,&_LC93,&_LC6,uVar1,1);
  if (iVar2 != 0) {
    multi_bio1 = local_20;
    multi_bio2 = local_18;
    uVar1 = thread_run_test(test_bio_dgram_pair_worker,10,test_bio_dgram_pair_worker,1,
                            default_provider);
  }
  BIO_free(local_20);
  BIO_free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_multi_general_worker_fips_provider(void)

{
  if (do_fips != 0) {
    thread_run_test(thread_general_worker,2,thread_general_worker,1,fips_provider);
    return;
  }
  test_skip("test/threadstest.c",0x3c4,"FIPS not supported");
  return;
}



undefined8 test_multi_default(void)

{
  undefined8 uVar1;
  
  if (multidefault_run == 0) {
    multidefault_run = 1;
    uVar1 = thread_run_test(thread_multi_simple_fetch,2,thread_multi_simple_fetch,0,default_provider
                           );
    return uVar1;
  }
  test_skip("test/threadstest.c",0x455,"multi default test already run");
  return 1;
}



byte test_multi_load(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (multidefault_run == 0) {
    test_info("test/threadstest.c",0x465,"Running multi default test first");
    if (multidefault_run == 0) {
      multidefault_run = 1;
      iVar1 = thread_run_test(thread_multi_simple_fetch,2,thread_multi_simple_fetch,0,
                              default_provider);
      bVar3 = iVar1 != 0;
      goto LAB_001029e9;
    }
    test_skip("test/threadstest.c",0x455,"multi default test already run");
  }
  bVar3 = true;
LAB_001029e9:
  lVar2 = OSSL_PROVIDER_load(0,"legacy");
  if (lVar2 == 0) {
    test_info("test/threadstest.c",0x471,
              "Cannot load legacy provider - assuming this is a no-legacy build");
    multi_load_provider = _LC99;
  }
  OSSL_PROVIDER_unload(lVar2);
  iVar1 = thread_run_test(0,10,test_multi_load_worker,0,0);
  return iVar1 != 0 & bVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_multi_shared_pkey_release(void)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  puVar3 = default_provider;
  lVar2 = 1;
  if (do_fips != 0) {
    puVar3 = fips_and_default_providers;
  }
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00103c60 = 0;
  shared_evp_pkey = (EVP_PKEY *)0x0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00103bf0 = (undefined1  [16])0x0;
  _DAT_00103c00 = (undefined1  [16])0x0;
  _DAT_00103c10 = (undefined1  [16])0x0;
  _DAT_00103c20 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00103c50 = (undefined1  [16])0x0;
  iVar1 = thread_setup_libctx(1,puVar3);
  if (iVar1 == 0) {
LAB_00102b90:
    do {
      EVP_PKEY_free(shared_evp_pkey);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  else {
    shared_evp_pkey = (EVP_PKEY *)load_pkey_pem(privkey,multi_libctx);
    iVar1 = test_ptr("test/threadstest.c",0x40c,
                     "shared_evp_pkey = load_pkey_pem(privkey, multi_libctx)",shared_evp_pkey);
    if (iVar1 == 0) goto LAB_00102b90;
    do {
      iVar1 = EVP_PKEY_up_ref(shared_evp_pkey);
      iVar1 = test_true("test/threadstest.c",0x40f,"EVP_PKEY_up_ref(shared_evp_pkey)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00102b90;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 10);
    iVar1 = start_threads(10,thread_release_shared_pkey);
    if (iVar1 == 0) goto LAB_00102b90;
    iVar1 = teardown_threads();
    if (iVar1 != 0) {
      iVar1 = test_true("test/threadstest.c",0x418,"multi_success",multi_success != 0);
      bVar4 = iVar1 != 0;
      goto LAB_00102ba4;
    }
  }
  bVar4 = false;
LAB_00102ba4:
  thead_teardown_libctx();
  return bVar4;
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
    if (iVar1 != 0) goto LAB_00102dbb;
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_lock);
  if (iVar1 != 0) {
    multi_success = 0;
    CRYPTO_THREAD_unlock(global_lock);
    OSSL_PROVIDER_unload(uVar2);
    return;
  }
  multi_success = 0;
LAB_00102dbb:
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
  iVar2 = test_int_ne("test/threadstest.c",0x483,&_LC110,&_LC10,uVar1,0);
  if (iVar2 != 0) {
    iVar2 = OBJ_create(local_58,local_98,local_78);
    iVar3 = test_true("test/threadstest.c",0x484,"id = OBJ_create(oid, sn, ln)",iVar2 != 0);
    if (iVar3 != 0) {
      iVar2 = OBJ_add_sigid(iVar2,0x449,0x13);
      iVar2 = test_true("test/threadstest.c",0x485,"OBJ_add_sigid(id, NID_sha3_256, NID_rsa)",
                        iVar2 != 0);
      if (iVar2 != 0) goto LAB_00102f77;
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
LAB_00102f77:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_multi_load_unload_provider(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  multi_success = 1;
  multi_libctx = 0;
  multi_num_threads = 0;
  _DAT_00103c60 = 0;
  _multi_threads = (undefined1  [16])0x0;
  _DAT_00103bf0 = (undefined1  [16])0x0;
  _DAT_00103c00 = (undefined1  [16])0x0;
  _DAT_00103c10 = (undefined1  [16])0x0;
  _DAT_00103c20 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00103c50 = (undefined1  [16])0x0;
  iVar1 = test_get_libctx(&multi_libctx,0,config_file,0,0);
  iVar1 = test_true("test/threadstest.c",0x2f3,
                    "test_get_libctx(&multi_libctx, NULL, config_file, NULL, NULL)",iVar1 != 0);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = OSSL_PROVIDER_load(multi_libctx,"default");
    uVar2 = test_ptr("test/threadstest.c",0x42c,
                     "prov = OSSL_PROVIDER_load(multi_libctx, \"default\")",uVar3);
    if (uVar2 != 0) {
      uVar4 = EVP_MD_fetch(multi_libctx,"SHA2-256",0);
      uVar2 = test_ptr("test/threadstest.c",0x42d,
                       "sha256 = EVP_MD_fetch(multi_libctx, \"SHA2-256\", NULL)",uVar4);
      if (uVar2 != 0) {
        iVar1 = OSSL_PROVIDER_unload(uVar3);
        uVar2 = test_true("test/threadstest.c",0x42e,"OSSL_PROVIDER_unload(prov)",iVar1 != 0);
        if (uVar2 != 0) {
          iVar1 = start_threads(2,thread_provider_load_unload);
          if (iVar1 != 0) {
            thread_provider_load_unload();
            iVar1 = teardown_threads();
            if (iVar1 != 0) {
              iVar1 = test_true("test/threadstest.c",0x438,"multi_success",multi_success != 0);
              uVar2 = (uint)(iVar1 != 0);
              uVar3 = 0;
              goto LAB_00103128;
            }
          }
          uVar2 = 0;
          uVar3 = 0;
        }
      }
    }
  }
LAB_00103128:
  OSSL_PROVIDER_unload(uVar3);
  EVP_MD_free(uVar4);
  thead_teardown_libctx();
  return uVar2;
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
  iVar2 = test_int_eq("test/threadstest.c",0x49c,"RAND_bytes_ex(multi_libctx, &ch, 1, 64)",&_LC6,
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
      iVar1 = test_ptr("test/threadstest.c",0x391,&_LC118,ctx);
      if (iVar1 == 0) break;
      iVar1 = EVP_PKEY_encrypt_init(ctx);
      iVar1 = test_int_ge("test/threadstest.c",0x394,"EVP_PKEY_encrypt_init(ctx)",&_LC10,iVar1,0);
      if (iVar1 == 0) break;
      iVar1 = EVP_PKEY_encrypt(ctx,local_248,&local_250,(uchar *)"Hello World",0xb);
      iVar1 = test_int_ge("test/threadstest.c",0x395,
                          "EVP_PKEY_encrypt(ctx, ctbuf, &ctlen, (unsigned char *)msg, strlen(msg))",
                          &_LC10,iVar1,0);
      if (iVar1 == 0) break;
      EVP_PKEY_CTX_free(ctx);
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(multi_libctx,shared_evp_pkey,0);
      iVar1 = test_ptr("test/threadstest.c",0x39d,&_LC118,ctx);
      if (iVar1 == 0) break;
      local_258 = 0x100;
      iVar1 = EVP_PKEY_decrypt_init(ctx);
      iVar1 = test_int_ge("test/threadstest.c",0x3a1,"EVP_PKEY_decrypt_init(ctx)",&_LC10,iVar1,0);
      if (iVar1 == 0) break;
      iVar1 = EVP_PKEY_decrypt(ctx,local_148,&local_258,local_248,local_250);
      iVar1 = test_int_gt("test/threadstest.c",0x3a2,
                          "EVP_PKEY_decrypt(ctx, ptbuf, &ptlen, ctbuf, ctlen)",&_LC10,iVar1,0);
      if ((iVar1 == 0) ||
         (iVar1 = test_mem_eq("test/threadstest.c",0x3a4,&_LC124,"ptbuf","Hello World",0xb,local_148
                              ,local_258), iVar1 == 0)) break;
      iVar2 = iVar2 + 1;
      if (do_fips < iVar2) {
        EVP_PKEY_CTX_free(ctx);
        goto LAB_0010359a;
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
LAB_0010359a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_multi_shared_pkey_common(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  puVar2 = default_provider;
  multi_success = 1;
  multi_libctx = 0;
  _multi_threads = (undefined1  [16])0x0;
  if (do_fips != 0) {
    puVar2 = fips_and_default_providers;
  }
  _DAT_00103bf0 = (undefined1  [16])0x0;
  multi_num_threads = 0;
  _DAT_00103c60 = 0;
  _DAT_00103c00 = (undefined1  [16])0x0;
  _DAT_00103c10 = (undefined1  [16])0x0;
  _DAT_00103c20 = (undefined1  [16])0x0;
  _multi_provider = (undefined1  [16])0x0;
  _DAT_00103c50 = (undefined1  [16])0x0;
  iVar1 = thread_setup_libctx(1,puVar2);
  if (iVar1 != 0) {
    shared_evp_pkey = (EVP_PKEY *)load_pkey_pem(privkey,multi_libctx);
    iVar1 = test_ptr("test/threadstest.c",0x3d6,
                     "shared_evp_pkey = load_pkey_pem(privkey, multi_libctx)",shared_evp_pkey);
    if (iVar1 != 0) {
      iVar1 = start_threads(1,thread_shared_evp_pkey);
      if (iVar1 != 0) {
        iVar1 = start_threads(1,param_1);
        if (iVar1 != 0) {
          thread_shared_evp_pkey();
          iVar1 = teardown_threads();
          if (iVar1 != 0) {
            iVar1 = test_true("test/threadstest.c",0x3de,"multi_success",multi_success != 0);
            bVar3 = iVar1 != 0;
            goto LAB_00103693;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00103693:
  EVP_PKEY_free(shared_evp_pkey);
  thead_teardown_libctx();
  return bVar3;
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
    if (iVar1 == 0) goto LAB_00103858;
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
      goto LAB_001037e4;
    }
    iVar1 = CRYPTO_THREAD_write_lock(global_lock);
    if (iVar1 != 0) {
      pkey = (EVP_PKEY *)0x0;
      multi_success = 0;
      CRYPTO_THREAD_unlock(global_lock);
      goto LAB_001037e4;
    }
LAB_00103858:
    multi_success = 0;
  }
  bp = (BIO *)0x0;
  pkey = (EVP_PKEY *)0x0;
LAB_001037e4:
  EVP_PKEY_free(pkey);
  BIO_free(bp);
  CRYPTO_free(buf);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
LAB_001038fa:
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
        goto LAB_001038fa;
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



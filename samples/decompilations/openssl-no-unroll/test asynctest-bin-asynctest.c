
undefined8 only_pause(void)

{
  ASYNC_pause_job();
  return 1;
}



undefined8 add_two(void)

{
  ctr = ctr + 1;
  ASYNC_pause_job();
  ctr = ctr + 1;
  return 2;
}



undefined8 save_current(void)

{
  currjob = ASYNC_get_current_job();
  ASYNC_pause_job();
  return 1;
}



bool waitfd(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ASYNC_get_current_job();
  if (lVar2 != 0) {
    lVar2 = ASYNC_get_wait_ctx(lVar2);
    if (lVar2 != 0) {
      ASYNC_pause_job();
      iVar1 = ASYNC_WAIT_CTX_set_wait_fd(lVar2,lVar2,99,0,0);
      if (iVar1 != 0) {
        ASYNC_pause_job();
        iVar1 = ASYNC_WAIT_CTX_clear_fd(lVar2,lVar2);
        if (iVar1 != 0) {
          ASYNC_pause_job();
          iVar1 = ASYNC_WAIT_CTX_set_wait_fd(lVar2,lVar2,99,0,0);
          if (iVar1 != 0) {
            iVar1 = ASYNC_WAIT_CTX_clear_fd(lVar2,lVar2);
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}



undefined8 blockpause(void)

{
  ASYNC_block_pause();
  ASYNC_pause_job();
  ASYNC_unblock_pause();
  ASYNC_pause_job();
  return 1;
}



bool change_deflt_libctx(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  lVar1 = OSSL_LIB_CTX_new();
  if (lVar1 != 0) {
    uVar2 = OSSL_LIB_CTX_set0_default(lVar1);
    ASYNC_pause_job();
    lVar3 = OSSL_LIB_CTX_set0_default(uVar2);
    if (lVar1 == lVar3) {
      uVar2 = OSSL_LIB_CTX_set0_default(lVar1);
      ASYNC_pause_job();
      lVar3 = OSSL_LIB_CTX_set0_default(uVar2);
      bVar4 = lVar1 == lVar3;
    }
    OSSL_LIB_CTX_free(lVar1);
  }
  return bVar4;
}



void test_free_stack(void *param_1)

{
  custom_free_used = 1;
  CRYPTO_free(param_1);
  return;
}



void test_alloc_stack(undefined8 *param_1)

{
  custom_alloc_used = 1;
  CRYPTO_malloc((int)*param_1,"test/asynctest.c",0x1a6);
  return;
}



undefined8 test_callback(void)

{
  puts("callback test pass");
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASYNC_is_capable();
  if (iVar1 == 0) {
    fwrite("OpenSSL build is not ASYNC capable - skipping async tests\n",1,0x3a,_stderr);
    goto LAB_00100608;
  }
  local_58 = 0;
  local_50 = (code *)0x0;
  local_48 = (code *)0x0;
  iVar1 = ASYNC_init_thread(2,0);
  if (iVar1 == 0) {
LAB_0010081c:
    lVar2 = 0;
LAB_0010081e:
    fwrite("test_ASYNC_init_thread() failed\n",1,0x20,_stderr);
    ASYNC_WAIT_CTX_free(lVar2);
    ASYNC_cleanup_thread();
  }
  else {
    lVar2 = ASYNC_WAIT_CTX_new();
    if (lVar2 == 0) goto LAB_0010081c;
    iVar1 = ASYNC_start_job(&local_58,lVar2,&local_64,0x100000,0,0);
    if (iVar1 != 2) goto LAB_0010081e;
    iVar1 = ASYNC_start_job(&local_50,lVar2,&local_60,0x100000,0,0);
    if (iVar1 != 2) goto LAB_0010081e;
    iVar1 = ASYNC_start_job(&local_48,lVar2,&local_5c,0x100000,0,0);
    if (iVar1 != 1) goto LAB_0010081e;
    iVar1 = ASYNC_start_job(&local_58,lVar2,&local_64,0x100000,0,0);
    if (iVar1 != 3) goto LAB_0010081e;
    iVar1 = ASYNC_start_job(&local_48,lVar2,&local_5c,0x100000,0,0);
    if (iVar1 != 2) goto LAB_0010081e;
    iVar1 = ASYNC_start_job(&local_50,lVar2,&local_60,0x100000,0,0);
    if (iVar1 != 3) goto LAB_0010081e;
    iVar1 = ASYNC_start_job(&local_48,lVar2,&local_5c,0x100000,0,0);
    if ((((iVar1 != 3) || (local_64 != 1)) || (local_60 != 1)) || (local_5c != 1))
    goto LAB_0010081e;
    ASYNC_WAIT_CTX_free(lVar2);
    ASYNC_cleanup_thread();
    local_58 = CONCAT44(local_58._4_4_,100);
    iVar1 = ASYNC_init_thread(1,0);
    if (iVar1 == 0) {
LAB_00100852:
      lVar2 = 0;
LAB_001007f0:
      fwrite("test_ASYNC_callback_status() failed\n",1,0x24,_stderr);
      ASYNC_WAIT_CTX_free(lVar2);
      ASYNC_cleanup_thread();
    }
    else {
      lVar2 = ASYNC_WAIT_CTX_new();
      if (lVar2 == 0) goto LAB_00100852;
      iVar1 = ASYNC_WAIT_CTX_set_callback(lVar2,test_callback,&local_58);
      if (iVar1 != 1) goto LAB_001007f0;
      iVar1 = ASYNC_WAIT_CTX_get_callback(lVar2,&local_50,&local_48);
      if (((iVar1 != 1) || (local_50 != test_callback)) || (local_48 != (code *)&local_58))
      goto LAB_001007f0;
      puts("callback test pass");
      iVar1 = ASYNC_WAIT_CTX_set_status(lVar2,1);
      if (iVar1 != 1) goto LAB_001007f0;
      iVar1 = ASYNC_WAIT_CTX_get_status(lVar2);
      if (iVar1 != 1) goto LAB_001007f0;
      ASYNC_WAIT_CTX_free();
      ASYNC_cleanup_thread();
      local_48 = (code *)0x0;
      ctr = 0;
      iVar1 = ASYNC_init_thread(1,0);
      if (iVar1 == 0) {
LAB_00100949:
        lVar2 = 0;
LAB_0010091a:
        fwrite("test_ASYNC_start_job() failed\n",1,0x1e,_stderr);
        ASYNC_WAIT_CTX_free(lVar2);
        ASYNC_cleanup_thread();
      }
      else {
        lVar2 = ASYNC_WAIT_CTX_new();
        if (lVar2 == 0) goto LAB_00100949;
        iVar1 = ASYNC_start_job(&local_48,lVar2,&local_50,add_two,0,0);
        if ((iVar1 != 2) || (ctr != 1)) goto LAB_0010091a;
        iVar1 = ASYNC_start_job(&local_48,lVar2,&local_50,add_two,0,0);
        if ((iVar1 != 3) || ((ctr != 2 || ((int)local_50 != 2)))) goto LAB_0010091a;
        ASYNC_WAIT_CTX_free(lVar2);
        ASYNC_cleanup_thread();
        local_48 = (code *)0x0;
        currjob = (code *)0x0;
        iVar1 = ASYNC_init_thread(1,0);
        if (iVar1 == 0) {
LAB_00100a12:
          lVar2 = 0;
LAB_001009e3:
          fwrite("test_ASYNC_get_current_job() failed\n",1,0x24,_stderr);
          ASYNC_WAIT_CTX_free(lVar2);
          ASYNC_cleanup_thread();
        }
        else {
          lVar2 = ASYNC_WAIT_CTX_new();
          if (lVar2 == 0) goto LAB_00100a12;
          iVar1 = ASYNC_start_job(&local_48,lVar2,&local_50,save_current,0,0);
          if ((iVar1 != 2) || (currjob != local_48)) goto LAB_001009e3;
          iVar1 = ASYNC_start_job(&local_48,lVar2,&local_50,save_current,0,0);
          if ((iVar1 != 3) || ((int)local_50 != 1)) goto LAB_001009e3;
          ASYNC_WAIT_CTX_free(lVar2);
          ASYNC_cleanup_thread();
          local_58 = 0;
          local_60 = -1;
          local_5c = -1;
          iVar1 = ASYNC_init_thread(1,0);
          if (iVar1 == 0) {
LAB_00100acd:
            lVar2 = 0;
LAB_00100a9e:
            fwrite("test_ASYNC_get_wait_fd() failed\n",1,0x20,_stderr);
            ASYNC_WAIT_CTX_free(lVar2);
            ASYNC_cleanup_thread();
          }
          else {
            lVar2 = ASYNC_WAIT_CTX_new();
            if (lVar2 == 0) goto LAB_00100acd;
            iVar1 = ASYNC_start_job(&local_58,lVar2,&local_64,waitfd,0,0);
            if (iVar1 != 2) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_all_fds(lVar2,0,&local_50);
            if ((iVar1 == 0) || (local_50 != (code *)0x0)) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_changed_fds(lVar2,0,&local_50,0,&local_48);
            if ((iVar1 == 0) || (local_50 != (code *)0x0 || local_48 != (code *)0x0))
            goto LAB_00100a9e;
            iVar1 = ASYNC_start_job(&local_58,lVar2,&local_64,waitfd,0,0);
            if (iVar1 != 2) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_all_fds(lVar2,0,&local_50);
            if ((iVar1 == 0) || (local_50 != (code *)0x1)) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_all_fds(lVar2,&local_60,&local_50);
            if ((iVar1 == 0) || (local_60 != 99)) goto LAB_00100a9e;
            local_60 = -1;
            iVar1 = ASYNC_WAIT_CTX_get_changed_fds(lVar2,0,&local_50,0,&local_48);
            if (((iVar1 == 0) || (local_50 != (code *)0x1)) || (local_48 != (code *)0x0))
            goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_changed_fds(lVar2,&local_60,&local_50,0,&local_48);
            if ((iVar1 == 0) || (local_60 != 99)) goto LAB_00100a9e;
            iVar1 = ASYNC_start_job(&local_58,lVar2,&local_64,waitfd,0,0);
            if (iVar1 != 2) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_all_fds(lVar2,0,&local_50);
            if ((iVar1 == 0) || (local_50 != (code *)0x0)) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_changed_fds(lVar2,0,&local_50,0,&local_48);
            if ((iVar1 == 0) || ((local_50 != (code *)0x0 || (local_48 != (code *)0x1))))
            goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_changed_fds(lVar2,0,&local_50,&local_5c,&local_48);
            if ((iVar1 == 0) || (local_5c != 99)) goto LAB_00100a9e;
            iVar1 = ASYNC_start_job(&local_58,lVar2,&local_64,waitfd,0,0);
            if (iVar1 != 3) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_all_fds(lVar2,0,&local_50);
            if ((iVar1 == 0) || (local_50 != (code *)0x0)) goto LAB_00100a9e;
            iVar1 = ASYNC_WAIT_CTX_get_changed_fds(lVar2,0,&local_50,0,&local_48);
            if ((iVar1 == 0) ||
               ((local_50 != (code *)0x0 || local_48 != (code *)0x0 || (local_64 != 1))))
            goto LAB_00100a9e;
            ASYNC_WAIT_CTX_free(lVar2);
            ASYNC_cleanup_thread();
            local_48 = (code *)0x0;
            iVar1 = ASYNC_init_thread(1,0);
            if (iVar1 == 0) {
LAB_00100d64:
              lVar2 = 0;
LAB_00100d35:
              fwrite("test_ASYNC_block_pause() failed\n",1,0x20,_stderr);
              ASYNC_WAIT_CTX_free(lVar2);
              ASYNC_cleanup_thread();
            }
            else {
              lVar2 = ASYNC_WAIT_CTX_new();
              if (lVar2 == 0) goto LAB_00100d64;
              iVar1 = ASYNC_start_job(&local_48,lVar2,&local_50,blockpause,0,0);
              if (iVar1 != 2) goto LAB_00100d35;
              iVar1 = ASYNC_start_job(&local_48,lVar2,&local_50,blockpause,0,0);
              if ((iVar1 != 3) || ((int)local_50 != 1)) goto LAB_00100d35;
              ASYNC_WAIT_CTX_free(lVar2);
              ASYNC_cleanup_thread();
              local_48 = (code *)0x0;
              lVar2 = OSSL_LIB_CTX_new();
              if (lVar2 == 0) {
                lVar5 = 0;
                fwrite("test_ASYNC_start_job_ex() failed to create libctx\n",1,0x32,_stderr);
                goto LAB_00100e08;
              }
              lVar4 = OSSL_LIB_CTX_set0_default(lVar2);
              lVar5 = ASYNC_WAIT_CTX_new();
              if (lVar5 == 0) {
LAB_00100deb:
                fwrite("test_ASYNC_start_job_ex() failed to start job\n",1,0x2e,_stderr);
LAB_00100e08:
                ASYNC_WAIT_CTX_free(lVar5);
                ASYNC_cleanup_thread();
                OSSL_LIB_CTX_free(lVar2);
              }
              else {
                iVar1 = ASYNC_start_job(&local_48,lVar5,&local_50,change_deflt_libctx,0,0);
                if (iVar1 != 2) goto LAB_00100deb;
                lVar6 = OSSL_LIB_CTX_set0_default(lVar4);
                uVar3 = OSSL_LIB_CTX_set0_default(lVar6);
                if (lVar2 != lVar6) {
LAB_00100e45:
                  fwrite("test_ASYNC_start_job_ex() failed - unexpected libctx\n",1,0x35,_stderr);
                  goto LAB_00100e08;
                }
                iVar1 = ASYNC_start_job(&local_48,lVar5,&local_50,change_deflt_libctx,0,0);
                if (iVar1 != 2) {
                  fwrite("test_ASYNC_start_job_ex() - restarting job failed\n",1,0x32,_stderr);
                  goto LAB_00100e08;
                }
                lVar6 = OSSL_LIB_CTX_set0_default(uVar3);
                if (lVar2 != lVar6) goto LAB_00100e45;
                iVar1 = ASYNC_start_job(&local_48,lVar5,&local_50,change_deflt_libctx,0,0);
                if ((iVar1 != 3) || ((int)local_50 != 1)) {
                  fwrite("test_ASYNC_start_job_ex() - finishing job failed\n",1,0x31,_stderr);
                  goto LAB_00100e08;
                }
                lVar6 = OSSL_LIB_CTX_set0_default(lVar2);
                OSSL_LIB_CTX_set0_default(lVar6);
                if (lVar4 != lVar6) {
                  fwrite("test_ASYNC_start_job_ex() failed - global libctx check failed\n",1,0x3e,
                         _stderr);
                  goto LAB_00100e08;
                }
                ASYNC_WAIT_CTX_free(lVar5);
                ASYNC_cleanup_thread();
                OSSL_LIB_CTX_free(lVar2);
                iVar1 = ASYNC_set_mem_functions(test_alloc_stack,test_free_stack);
                if (iVar1 == 0) {
LAB_00100608:
                  puts("PASS");
                  uVar3 = 0;
                  goto LAB_00100616;
                }
                ASYNC_get_mem_functions(&local_50,&local_48);
                if ((local_50 == test_alloc_stack) && (local_48 == test_free_stack)) {
                  iVar1 = ASYNC_init_thread(1,1);
                  if (iVar1 == 0) {
                    fwrite("test_ASYNC_set_mem_functions() - failed initialising ctx pool\n",1,0x3e,
                           _stderr);
                  }
                  else {
                    ASYNC_cleanup_thread();
                    if ((custom_alloc_used != 0) && (custom_free_used != 0)) goto LAB_00100608;
                    fwrite("test_ASYNC_set_mem_functions() - custom allocation functions not used\n"
                           ,1,0x46,_stderr);
                  }
                }
                else {
                  fwrite("test_ASYNC_set_mem_functions() - setting and retrieving custom allocators failed\n"
                         ,1,0x51,_stderr);
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_00100616:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thread_fips_rand_fetch(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_MD_fetch(0,"SHA2-256",0);
  iVar1 = test_true("test/threadstest_fips.c",0x17,"md = EVP_MD_fetch(NULL, \"SHA2-256\", NULL)",
                    lVar2 != 0);
  if (iVar1 == 0) {
    success = 0;
  }
  EVP_MD_free(lVar2);
  return;
}



undefined8 thread_run(code *param_1)

{
  (*param_1)();
  OPENSSL_thread_stop();
  return 0;
}



undefined8 test_fips_rand_leak(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  success = 1;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_run,thread_fips_rand_fetch);
  iVar1 = test_true("test/threadstest_fips.c",0x22,"run_thread(&thread, thread_fips_rand_fetch)",
                    iVar1 == 0);
  if (iVar1 != 0) {
    iVar1 = pthread_join(local_18,(void **)0x0);
    iVar1 = test_true("test/threadstest_fips.c",0x24,"wait_for_thread(thread)",iVar1 == 0);
    if (iVar1 != 0) {
      uVar2 = test_true("test/threadstest_fips.c",0x26,"success",success != 0);
      goto LAB_001000d3;
    }
  }
  uVar2 = 0;
LAB_001000d3:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_fips_rand_leak",test_fips_rand_leak);
  return 1;
}



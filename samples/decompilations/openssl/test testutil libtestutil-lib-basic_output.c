
void cleanup_test_data(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 test_io_lock_part_0(void)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = "assertion failed: CRYPTO_THREAD_write_lock(io_lock) > 0";
  OPENSSL_die("assertion failed: CRYPTO_THREAD_write_lock(io_lock) > 0",
              "test/testutil/basic_output.c",0xbf);
  ptr = (undefined8 *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr == (undefined8 *)0x0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x10,"test/testutil/basic_output.c",0x3d);
    if (ptr != (undefined8 *)0x0) {
      iVar1 = CRYPTO_THREAD_set_local(&local_test_data,ptr);
      if (iVar1 != 0) goto LAB_00100066;
      CRYPTO_free(ptr);
    }
    uVar2 = 0;
  }
  else {
LAB_00100066:
    *ptr = pcVar3;
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 set_override_bio_out(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  ptr = (undefined8 *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr == (undefined8 *)0x0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x10,"test/testutil/basic_output.c",0x3d);
    if (ptr != (undefined8 *)0x0) {
      iVar1 = CRYPTO_THREAD_set_local(&local_test_data,ptr);
      if (iVar1 != 0) goto LAB_00100066;
      CRYPTO_free(ptr);
    }
    uVar2 = 0;
  }
  else {
LAB_00100066:
    *ptr = param_1;
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 set_override_bio_err(undefined8 param_1)

{
  int iVar1;
  void *ptr;
  undefined8 uVar2;
  
  ptr = (void *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr == (void *)0x0) {
    ptr = (void *)CRYPTO_zalloc(0x10,"test/testutil/basic_output.c",0x3d);
    if (ptr != (void *)0x0) {
      iVar1 = CRYPTO_THREAD_set_local(&local_test_data,ptr);
      if (iVar1 != 0) goto LAB_001000f6;
      CRYPTO_free(ptr);
    }
    uVar2 = 0;
  }
  else {
LAB_001000f6:
    *(undefined8 *)((long)ptr + 8) = param_1;
    uVar2 = 1;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_open_streams(void)

{
  BIO *pBVar1;
  int iVar2;
  BIO_METHOD *pBVar3;
  BIO *pBVar4;
  
  iVar2 = CRYPTO_THREAD_init_local(&local_test_data,0x100000);
  tap_out = BIO_new_fp(_stdout,0x10);
  tap_err = BIO_new_fp(_stderr,0x10);
  pBVar1 = tap_out;
  pBVar3 = (BIO_METHOD *)BIO_f_prefix();
  pBVar4 = BIO_new(pBVar3);
  tap_out = BIO_push(pBVar4,pBVar1);
  pBVar1 = tap_err;
  pBVar3 = (BIO_METHOD *)BIO_f_prefix();
  pBVar4 = BIO_new(pBVar3);
  tap_err = BIO_push(pBVar4,pBVar1);
  pBVar1 = tap_out;
  pBVar3 = (BIO_METHOD *)BIO_f_prefix();
  pBVar4 = BIO_new(pBVar3);
  bio_out = BIO_push(pBVar4,pBVar1);
  pBVar1 = tap_err;
  pBVar3 = (BIO_METHOD *)BIO_f_prefix();
  pBVar4 = BIO_new(pBVar3);
  bio_err = BIO_push(pBVar4,pBVar1);
  BIO_ctrl(bio_out,0x4f,0,&_LC2);
  BIO_ctrl(bio_err,0x4f,0,&_LC2);
  io_lock = CRYPTO_THREAD_lock_new();
  if (iVar2 == 0) {
    OPENSSL_die("assertion failed: ok","test/testutil/basic_output.c",0x9b);
LAB_001002cc:
    OPENSSL_die("assertion failed: io_lock != NULL","test/testutil/basic_output.c",0x9f);
  }
  else {
    if (bio_out == (BIO *)0x0) goto LAB_001002fc;
    if (bio_err != (BIO *)0x0) {
      if (io_lock != 0) {
        return;
      }
      goto LAB_001002cc;
    }
  }
  OPENSSL_die("assertion failed: bio_err != NULL","test/testutil/basic_output.c",0x9d);
LAB_001002fc:
  iVar2 = 0x100928;
  OPENSSL_die("assertion failed: bio_out != NULL","test/testutil/basic_output.c",0x9c);
  BIO_ctrl(tap_out,0x50,(long)iVar2,(void *)0x0);
  BIO_ctrl(tap_err,0x50,(long)iVar2,(void *)0x0);
  return;
}



void test_adjust_streams_tap_level(int param_1)

{
  BIO_ctrl(tap_out,0x50,(long)param_1,(void *)0x0);
  BIO_ctrl(tap_err,0x50,(long)param_1,(void *)0x0);
  return;
}



void test_close_streams(void)

{
  void *ptr;
  
  BIO_free(bio_out);
  BIO_free(bio_err);
  BIO_free_all(tap_out);
  BIO_free_all(tap_err);
  ptr = (void *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr != (void *)0x0) {
    CRYPTO_THREAD_set_local(&local_test_data,0);
    CRYPTO_free(ptr);
  }
  CRYPTO_THREAD_lock_free(io_lock);
  return;
}



int test_vprintf_stdout(char *param_1,va_list param_2)

{
  int iVar1;
  long *ptr;
  BIO *bio;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    test_io_lock_part_0();
  }
  ptr = (long *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr == (long *)0x0) {
    ptr = (long *)CRYPTO_zalloc(0x10,"test/testutil/basic_output.c",0x3d);
    if (ptr != (long *)0x0) {
      iVar1 = CRYPTO_THREAD_set_local(&local_test_data,ptr);
      if (iVar1 != 0) goto LAB_00100433;
      CRYPTO_free(ptr);
    }
  }
  else {
LAB_00100433:
    bio = (BIO *)*ptr;
    if ((BIO *)*ptr != (BIO *)0x0) goto LAB_0010043b;
  }
  bio = bio_out;
LAB_0010043b:
  iVar1 = BIO_vprintf(bio,param_1,param_2);
  CRYPTO_THREAD_unlock(io_lock);
  return iVar1;
}



int test_vprintf_stderr(char *param_1,va_list param_2)

{
  int iVar1;
  void *ptr;
  BIO *bio;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    test_io_lock_part_0();
  }
  ptr = (void *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr == (void *)0x0) {
    ptr = (void *)CRYPTO_zalloc(0x10,"test/testutil/basic_output.c",0x3d);
    if (ptr != (void *)0x0) {
      iVar1 = CRYPTO_THREAD_set_local(&local_test_data,ptr);
      if (iVar1 != 0) goto LAB_00100513;
      CRYPTO_free(ptr);
    }
  }
  else {
LAB_00100513:
    bio = *(BIO **)((long)ptr + 8);
    if (*(BIO **)((long)ptr + 8) != (BIO *)0x0) goto LAB_0010051c;
  }
  bio = bio_err;
LAB_0010051c:
  iVar1 = BIO_vprintf(bio,param_1,param_2);
  CRYPTO_THREAD_unlock(io_lock);
  return iVar1;
}



ulong test_flush_stdout(void)

{
  int iVar1;
  long *ptr;
  ulong uVar2;
  BIO *bp;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    test_io_lock_part_0();
  }
  ptr = (long *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr == (long *)0x0) {
    ptr = (long *)CRYPTO_zalloc(0x10,"test/testutil/basic_output.c",0x3d);
    if (ptr != (long *)0x0) {
      iVar1 = CRYPTO_THREAD_set_local(&local_test_data,ptr);
      if (iVar1 != 0) goto LAB_001005e9;
      CRYPTO_free(ptr);
    }
  }
  else {
LAB_001005e9:
    bp = (BIO *)*ptr;
    if ((BIO *)*ptr != (BIO *)0x0) goto LAB_001005f1;
  }
  bp = bio_out;
LAB_001005f1:
  uVar2 = BIO_ctrl(bp,0xb,0,(void *)0x0);
  CRYPTO_THREAD_unlock(io_lock);
  return uVar2 & 0xffffffff;
}



ulong test_flush_stderr(void)

{
  int iVar1;
  void *ptr;
  ulong uVar2;
  BIO *bp;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    test_io_lock_part_0();
  }
  ptr = (void *)CRYPTO_THREAD_get_local(&local_test_data);
  if (ptr == (void *)0x0) {
    ptr = (void *)CRYPTO_zalloc(0x10,"test/testutil/basic_output.c",0x3d);
    if (ptr != (void *)0x0) {
      iVar1 = CRYPTO_THREAD_set_local(&local_test_data,ptr);
      if (iVar1 != 0) goto LAB_001006b9;
      CRYPTO_free(ptr);
    }
  }
  else {
LAB_001006b9:
    bp = *(BIO **)((long)ptr + 8);
    if (*(BIO **)((long)ptr + 8) != (BIO *)0x0) goto LAB_001006c2;
  }
  bp = bio_err;
LAB_001006c2:
  uVar2 = BIO_ctrl(bp,0xb,0,(void *)0x0);
  CRYPTO_THREAD_unlock(io_lock);
  return uVar2 & 0xffffffff;
}



int test_vprintf_tapout(char *param_1,va_list param_2)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (0 < iVar1) {
    iVar1 = BIO_vprintf(tap_out,param_1,param_2);
    CRYPTO_THREAD_unlock(io_lock);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  test_io_lock_part_0();
}



int test_vprintf_taperr(char *param_1,va_list param_2)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (0 < iVar1) {
    iVar1 = BIO_vprintf(tap_err,param_1,param_2);
    CRYPTO_THREAD_unlock(io_lock);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  test_io_lock_part_0();
}



ulong test_flush_tapout(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (0 < iVar1) {
    uVar2 = BIO_ctrl(tap_out,0xb,0,(void *)0x0);
    CRYPTO_THREAD_unlock(io_lock);
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  test_io_lock_part_0();
}



ulong test_flush_taperr(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = CRYPTO_THREAD_write_lock(io_lock);
  if (0 < iVar1) {
    uVar2 = BIO_ctrl(tap_err,0xb,0,(void *)0x0);
    CRYPTO_THREAD_unlock(io_lock);
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  test_io_lock_part_0();
}



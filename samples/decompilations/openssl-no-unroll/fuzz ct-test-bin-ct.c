
undefined8 FuzzerInitialize(void)

{
  OPENSSL_init_crypto(2,0);
  CRYPTO_free_ex_index(0,0xffffffff);
  ERR_clear_error();
  return 1;
}



undefined8 FuzzerTestOneInput(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  BIO_METHOD *type;
  BIO *a;
  long in_FS_OFFSET;
  undefined8 local_30;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (void *)0x0;
  local_30 = param_1;
  lVar1 = d2i_SCT_LIST(0,&local_30,param_2);
  if (lVar1 != 0) {
    type = BIO_s_null();
    a = BIO_new(type);
    SCT_LIST_print(lVar1,a,4,&_LC0,0);
    BIO_free(a);
    i2d_SCT_LIST(lVar1,&local_28);
    CRYPTO_free(local_28);
    SCT_LIST_free(lVar1);
  }
  ERR_clear_error();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  return;
}



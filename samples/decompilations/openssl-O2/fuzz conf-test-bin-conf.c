
undefined8 FuzzerInitialize(void)

{
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  return 1;
}



undefined8 FuzzerTestOneInput(void *param_1,long param_2)

{
  int iVar1;
  CONF *conf;
  BIO_METHOD *type;
  BIO *b;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long lStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    conf = NCONF_new((CONF_METHOD *)0x0);
    type = BIO_s_mem();
    b = BIO_new(type);
    iVar1 = BIO_write(b,param_1,(int)param_2);
    if (iVar1 != param_2) {
      uVar2 = OPENSSL_die("assertion failed: (size_t)BIO_write(in, buf, len) == len","fuzz/conf.c",
                          0x25);
      return uVar2;
    }
    NCONF_load_bio(conf,b,&lStack_38);
    NCONF_free(conf);
    BIO_free(b);
    ERR_clear_error();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  return;
}



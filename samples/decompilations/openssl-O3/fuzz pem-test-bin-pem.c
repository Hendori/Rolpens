
undefined8 FuzzerInitialize(void)

{
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  return 1;
}



undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  char *pcVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *b;
  size_t sVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_40;
  char *local_38;
  void *local_30;
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (char *)0x0;
  local_38 = (char *)0x0;
  local_30 = (void *)0x0;
  if (param_2 < 2) goto LAB_0010011f;
  type = BIO_s_mem();
  b = BIO_new(type);
  iVar2 = BIO_write(b,param_1 + 1,(int)param_2 + -1);
  if ((long)iVar2 != param_2 - 1) {
    uVar4 = OPENSSL_die("assertion failed: (size_t)BIO_write(in, buf + 1, len - 1) == len - 1",
                        "fuzz/pem.c",0x22);
    return uVar4;
  }
  iVar2 = PEM_read_bio_ex(b,&local_40,&local_38,&local_30,local_28,*param_1);
  pcVar1 = local_40;
  if (iVar2 == 1) {
    sVar3 = strlen(local_40);
    BIO_write(b,pcVar1,(int)sVar3);
    pcVar1 = local_38;
    sVar3 = strlen(local_38);
    BIO_write(b,pcVar1,(int)sVar3);
    BIO_write(b,local_30,local_28[0]);
    if ((*param_1 & 1) == 0) goto LAB_001000da;
LAB_00100140:
    CRYPTO_secure_free(local_40,"fuzz/pem.c",0x2a);
    CRYPTO_secure_free(local_38,"fuzz/pem.c",0x2b);
    CRYPTO_secure_free(local_30,"fuzz/pem.c",0x2c);
  }
  else {
    if ((*param_1 & 1) != 0) goto LAB_00100140;
LAB_001000da:
    CRYPTO_free(local_40);
    CRYPTO_free(local_38);
    CRYPTO_free(local_30);
  }
  BIO_free(b);
  ERR_clear_error();
LAB_0010011f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



void FuzzerCleanup(void)

{
  return;
}



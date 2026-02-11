
undefined8 bwrite_conv(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1,param_2,param_3);
  lVar2 = 0;
  if (0 < (int)uVar1) {
    lVar2 = (long)(int)uVar1;
    uVar1 = 1;
  }
  *param_4 = lVar2;
  return uVar1;
}



undefined8 bread_conv(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x28))(param_1,param_2,param_3);
  lVar2 = 0;
  if (0 < (int)uVar1) {
    lVar2 = (long)(int)uVar1;
    uVar1 = 1;
  }
  *param_4 = lVar2;
  return uVar1;
}



undefined4 do_bio_type_init_ossl_(void)

{
  undefined4 uVar1;
  
  uVar1 = bio_type_count;
  LOCK();
  bio_type_count = 0x80;
  UNLOCK();
  do_bio_type_init_ossl_ret_ = 1;
  return uVar1;
}



int BIO_get_new_index(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&bio_type_init,do_bio_type_init_ossl_);
  if ((iVar1 == 0) || (do_bio_type_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_meth.c",0x1b,"BIO_get_new_index");
    ERR_set_error(0x20,0x8000f,0);
  }
  else {
    LOCK();
    iVar1 = bio_type_count + 1;
    UNLOCK();
    iVar2 = bio_type_count + 1;
    bio_type_count = iVar1;
    if (iVar2 < 0x100) {
      return iVar2;
    }
  }
  return -1;
}



undefined4 * BIO_meth_new(undefined4 param_1,char *param_2)

{
  undefined4 *ptr;
  char *pcVar1;
  
  ptr = (undefined4 *)CRYPTO_zalloc(0x70,"crypto/bio/bio_meth.c",0x27);
  if (ptr != (undefined4 *)0x0) {
    pcVar1 = CRYPTO_strdup(param_2,"crypto/bio/bio_meth.c",0x2a);
    *(char **)(ptr + 2) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      *ptr = param_1;
      return ptr;
    }
  }
  CRYPTO_free(ptr);
  return (undefined4 *)0x0;
}



void BIO_meth_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 BIO_meth_get_write(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 BIO_meth_get_write_ex(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 BIO_meth_set_write(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0x100000;
  return 1;
}



undefined8 BIO_meth_set_write_ex(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



undefined8 BIO_meth_get_read(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 BIO_meth_get_read_ex(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 BIO_meth_set_read(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x20) = bread_conv;
  return 1;
}



undefined8 BIO_meth_set_read_ex(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



undefined8 BIO_meth_get_puts(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 BIO_meth_set_puts(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}



undefined8 BIO_meth_get_gets(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 BIO_meth_set_gets(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



undefined8 BIO_meth_get_ctrl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined8 BIO_meth_set_ctrl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}



undefined8 BIO_meth_get_create(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



undefined8 BIO_meth_set_create(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}



undefined8 BIO_meth_get_destroy(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



undefined8 BIO_meth_set_destroy(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}



undefined8 BIO_meth_get_callback_ctrl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



undefined8 BIO_meth_set_callback_ctrl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}



undefined8 BIO_meth_set_sendmmsg(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return 1;
}



undefined8 BIO_meth_get_sendmmsg(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



undefined8 BIO_meth_set_recvmmsg(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return 1;
}



undefined8 BIO_meth_get_recvmmsg(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}




void core_bio_new_part_0(void)

{
  CRYPTO_free((void *)0x0);
  return;
}



undefined8 ossl_core_bio_up_ref(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  return 1;
}



int ossl_core_bio_free(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  if ((iVar1 != 1) && (0 < iVar1 + -1)) {
    return 1;
  }
  iVar1 = BIO_free(*(BIO **)(param_1 + 2));
  CRYPTO_free(param_1);
  return iVar1;
}



undefined4 * ossl_core_bio_new_from_bio(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)CRYPTO_malloc(0x10,"crypto/bio/ossl_core_bio.c",0x19);
  if (puVar2 == (undefined4 *)0x0) {
    core_bio_new_part_0();
  }
  else {
    LOCK();
    *puVar2 = 1;
    UNLOCK();
    iVar1 = BIO_up_ref(param_1);
    if (iVar1 != 0) {
      *(undefined8 *)(puVar2 + 2) = param_1;
      return puVar2;
    }
  }
  ossl_core_bio_free(puVar2);
  return (undefined4 *)0x0;
}



undefined1  [16] ossl_core_bio_new_file(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  BIO *a;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  a = BIO_new_file(param_1,param_2);
  uVar3 = extraout_RDX;
  if (a != (BIO *)0x0) {
    auVar4._0_8_ = (undefined4 *)CRYPTO_malloc(0x10,"crypto/bio/ossl_core_bio.c",0x19);
    if (auVar4._0_8_ != (undefined4 *)0x0) {
      LOCK();
      uVar1 = *auVar4._0_8_;
      *auVar4._0_8_ = 1;
      UNLOCK();
      *(BIO **)(auVar4._0_8_ + 2) = a;
      auVar4._8_4_ = uVar1;
      auVar4._12_4_ = 0;
      return auVar4;
    }
    core_bio_new_part_0();
    BIO_free(a);
    uVar3 = extraout_RDX_00;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}



undefined1  [16] ossl_core_bio_new_mem_buf(void *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  BIO *a;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  a = BIO_new_mem_buf(param_1,param_2);
  uVar3 = extraout_RDX;
  if (a != (BIO *)0x0) {
    auVar4._0_8_ = (undefined4 *)CRYPTO_malloc(0x10,"crypto/bio/ossl_core_bio.c",0x19);
    if (auVar4._0_8_ != (undefined4 *)0x0) {
      LOCK();
      uVar1 = *auVar4._0_8_;
      *auVar4._0_8_ = 1;
      UNLOCK();
      *(BIO **)(auVar4._0_8_ + 2) = a;
      auVar4._8_4_ = uVar1;
      auVar4._12_4_ = 0;
      return auVar4;
    }
    core_bio_new_part_0();
    BIO_free(a);
    uVar3 = extraout_RDX_00;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}



void ossl_core_bio_read_ex(long param_1)

{
  BIO_read_ex(*(undefined8 *)(param_1 + 8));
  return;
}



void ossl_core_bio_write_ex(long param_1)

{
  BIO_write_ex(*(undefined8 *)(param_1 + 8));
  return;
}



void ossl_core_bio_gets(long param_1,char *param_2,int param_3)

{
  BIO_gets(*(BIO **)(param_1 + 8),param_2,param_3);
  return;
}



void ossl_core_bio_puts(long param_1,char *param_2)

{
  BIO_puts(*(BIO **)(param_1 + 8),param_2);
  return;
}



void ossl_core_bio_ctrl(long param_1,int param_2,long param_3,void *param_4)

{
  BIO_ctrl(*(BIO **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



void ossl_core_bio_vprintf(long param_1,char *param_2,va_list param_3)

{
  BIO_vprintf(*(BIO **)(param_1 + 8),param_2,param_3);
  return;
}



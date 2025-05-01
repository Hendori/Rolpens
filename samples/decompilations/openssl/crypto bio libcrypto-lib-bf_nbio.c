
long nbiof_callback_ctrl(long param_1,int param_2,fp *param_3)

{
  long lVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return lVar1;
  }
  return 0;
}



undefined8 nbiof_new(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(8,"crypto/bio/bf_nbio.c",0x3a);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0x40) = puVar1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    return 1;
  }
  return 0;
}



int nbiof_gets(long param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    iVar1 = BIO_gets(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return iVar1;
  }
  return 0;
}



int nbiof_puts(long param_1,char *param_2)

{
  int iVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    iVar1 = BIO_puts(*(BIO **)(param_1 + 0x48),param_2);
    return iVar1;
  }
  return 0;
}



undefined8 nbiof_free(long param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}



long nbiof_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  long lVar1;
  
  if ((*(BIO **)&param_1->references != (BIO *)0x0) && (param_2 != 0xc)) {
    if (param_2 == 0x65) {
      BIO_clear_flags(param_1,0xf);
      lVar1 = BIO_ctrl(*(BIO **)&param_1->references,0x65,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return lVar1;
    }
    lVar1 = BIO_ctrl(*(BIO **)&param_1->references,param_2,param_3,param_4);
    return lVar1;
  }
  return 0;
}



int nbiof_read(BIO *param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint len;
  long in_FS_OFFSET;
  byte local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (param_2 == (void *)0x0) {
    iVar1 = 0;
  }
  else if (*(long *)&param_1->references != 0) {
    BIO_clear_flags(param_1,0xf);
    iVar1 = RAND_priv_bytes(&local_21,1);
    if (0 < iVar1) {
      len = local_21 & 7;
      if ((int)param_3 < (int)(local_21 & 7)) {
        len = param_3;
      }
      if ((local_21 & 7) != 0) {
        iVar1 = BIO_read(*(BIO **)&param_1->references,param_2,len);
        if (iVar1 < 0) {
          BIO_copy_next_retry(param_1);
        }
        goto LAB_001001f7;
      }
      BIO_set_flags(param_1,9);
    }
    iVar1 = -1;
  }
LAB_001001f7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int nbiof_write(BIO *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  bio_st *pbVar2;
  int iVar3;
  long in_FS_OFFSET;
  byte local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  if ((param_2 == (void *)0x0) || ((int)param_3 < 1)) {
    iVar3 = 0;
    goto LAB_001002bb;
  }
  if (*(long *)&param_1->references == 0) goto LAB_001002bb;
  pbVar2 = param_1->prev_bio;
  BIO_clear_flags(param_1,0xf);
  uVar1 = *(uint *)((long)&pbVar2->method + 4);
  if ((int)uVar1 < 1) {
    iVar3 = RAND_priv_bytes(&local_31,1);
    if (0 < iVar3) {
      if ((int)(local_31 & 7) <= (int)param_3) {
        param_3 = local_31 & 7;
      }
      if ((local_31 & 7) != 0) goto LAB_001002a9;
      BIO_set_flags(param_1,10);
    }
    iVar3 = -1;
  }
  else {
    *(undefined4 *)((long)&pbVar2->method + 4) = 0;
    if ((int)uVar1 < (int)param_3) {
      param_3 = uVar1;
    }
LAB_001002a9:
    iVar3 = BIO_write(*(BIO **)&param_1->references,param_2,param_3);
    if (iVar3 < 0) {
      BIO_copy_next_retry(param_1);
      *(uint *)((long)&pbVar2->method + 4) = param_3;
    }
  }
LAB_001002bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_nbio_test(void)

{
  return (BIO_METHOD *)methods_nbiof;
}




long nullf_callback_ctrl(long param_1,int param_2,fp *param_3)

{
  long lVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return lVar1;
  }
  return 0;
}



int nullf_gets(long param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    iVar1 = BIO_gets(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return iVar1;
  }
  return 0;
}



int nullf_puts(long param_1,char *param_2)

{
  int iVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    iVar1 = BIO_puts(*(BIO **)(param_1 + 0x48),param_2);
    return iVar1;
  }
  return 0;
}



int nullf_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != (void *)0x0) {
    iVar1 = 0;
    if (*(BIO **)&param_1->references != (BIO *)0x0) {
      iVar1 = BIO_read(*(BIO **)&param_1->references,param_2,param_3);
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
    }
    return iVar1;
  }
  return 0;
}



long nullf_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

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



int nullf_write(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != (void *)0x0) && (0 < param_3)) {
    iVar1 = 0;
    if (*(BIO **)&param_1->references != (BIO *)0x0) {
      iVar1 = BIO_write(*(BIO **)&param_1->references,param_2,param_3);
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
    }
    return iVar1;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_null(void)

{
  return (BIO_METHOD *)methods_nullf;
}



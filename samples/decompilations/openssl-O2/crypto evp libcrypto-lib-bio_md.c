
long md_callback_ctrl(BIO *param_1,int param_2,fp *param_3)

{
  BIO *b;
  long lVar1;
  
  b = BIO_next(param_1);
  if (b != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(b,param_2,param_3);
    return lVar1;
  }
  return 0;
}



bool md_new(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = EVP_MD_CTX_new();
  if (lVar1 != 0) {
    BIO_set_init(param_1,1);
    BIO_set_data(param_1,lVar1);
  }
  return lVar1 != 0;
}



long md_ctrl(BIO *param_1,int param_2,long param_3,EVP_MD *param_4)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  BIO *bp;
  undefined8 uVar2;
  long lVar3;
  EVP_MD_CTX *out;
  EVP_MD *type;
  
  ctx = (EVP_MD_CTX *)BIO_get_data();
  bp = BIO_next(param_1);
  if (param_2 == 0x6f) {
    iVar1 = EVP_DigestInit_ex(ctx,param_4,(ENGINE *)0x0);
    lVar3 = (long)iVar1;
    if (0 < lVar3) {
      BIO_set_init(param_1,1);
    }
  }
  else {
    if (param_2 < 0x70) {
      if (param_2 != 0xc) {
        if (param_2 == 0x65) {
          BIO_clear_flags(param_1,0xf);
          lVar3 = BIO_ctrl(bp,0x65,param_3,param_4);
          BIO_copy_next_retry(param_1);
          return lVar3;
        }
        if (param_2 == 1) {
          iVar1 = BIO_get_init(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          type = (EVP_MD *)EVP_MD_CTX_get0_md(ctx);
          iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
          if ((long)iVar1 < 1) {
            return (long)iVar1;
          }
          param_2 = 1;
        }
LAB_001001e0:
        lVar3 = BIO_ctrl(bp,param_2,param_3,param_4);
        return lVar3;
      }
      out = (EVP_MD_CTX *)BIO_get_data(param_4);
      iVar1 = EVP_MD_CTX_copy_ex(out,ctx);
      if (iVar1 == 0) {
        return 0;
      }
      BIO_set_init(param_1,1);
    }
    else if (param_2 == 0x78) {
      *(EVP_MD_CTX **)param_4 = ctx;
      BIO_set_init(param_1,1);
    }
    else if (param_2 == 0x94) {
      iVar1 = BIO_get_init(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      BIO_set_data(param_1,param_4);
    }
    else {
      if (param_2 != 0x70) goto LAB_001001e0;
      iVar1 = BIO_get_init(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = EVP_MD_CTX_get0_md(ctx);
      param_4->type = (int)uVar2;
      param_4->pkey_type = (int)((ulong)uVar2 >> 0x20);
    }
    lVar3 = 1;
  }
  return lVar3;
}



uint md_gets(undefined8 param_1,uchar *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)BIO_get_data();
  iVar1 = EVP_MD_CTX_get_size_ex(ctx);
  uVar2 = 0;
  if ((iVar1 <= param_3) &&
     (iVar1 = EVP_DigestFinal_ex(ctx,param_2,&local_24), uVar2 = local_24, iVar1 < 1)) {
    uVar2 = 0xffffffff;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int md_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  BIO *b;
  
  if (param_2 != (void *)0x0) {
    ctx = (EVP_MD_CTX *)BIO_get_data();
    b = BIO_next(param_1);
    if ((ctx != (EVP_MD_CTX *)0x0) && (b != (BIO *)0x0)) {
      iVar1 = BIO_read(b,param_2,param_3);
      iVar2 = BIO_get_init(param_1);
      if ((0 < iVar1) &&
         ((iVar2 != 0 && (iVar2 = EVP_DigestUpdate(ctx,param_2,(long)iVar1), iVar2 < 1)))) {
        return -1;
      }
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      return iVar1;
    }
  }
  return 0;
}



int md_write(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  BIO *b;
  
  if ((param_2 == (void *)0x0) || (param_3 < 1)) {
    return 0;
  }
  ctx = (EVP_MD_CTX *)BIO_get_data();
  b = BIO_next(param_1);
  if ((ctx == (EVP_MD_CTX *)0x0) || (b == (BIO *)0x0)) {
    BIO_get_init(param_1);
    if (b == (BIO *)0x0) {
      return 0;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = BIO_write(b,param_2,param_3);
    iVar2 = BIO_get_init(param_1);
    if (((iVar2 != 0) && (0 < iVar1)) &&
       (iVar2 = EVP_DigestUpdate(ctx,param_2,(long)iVar1), iVar2 == 0)) {
      BIO_clear_flags(param_1,0xf);
      return 0;
    }
  }
  BIO_clear_flags(param_1,0xf);
  BIO_copy_next_retry(param_1);
  return iVar1;
}



undefined8 md_free(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = BIO_get_data();
    EVP_MD_CTX_free(uVar1);
    BIO_set_data(param_1,0);
    BIO_set_init(param_1,0);
    return 1;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_md(void)

{
  return (BIO_METHOD *)methods_md;
}



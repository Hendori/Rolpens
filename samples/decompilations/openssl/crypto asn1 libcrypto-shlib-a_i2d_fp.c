
int ASN1_i2d_bio(undefined1 *i2d,BIO *out,uchar *x)

{
  int iVar1;
  int iVar2;
  void *ptr;
  int iVar3;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (*(code *)i2d)(x,0);
  if (0 < iVar1) {
    ptr = CRYPTO_malloc(iVar1,"crypto/asn1/a_i2d_fp.c",0x2c);
    if (ptr != (void *)0x0) {
      local_48 = ptr;
      (*(code *)i2d)(x,&local_48);
      iVar3 = 0;
      while( true ) {
        iVar2 = BIO_write(out,(void *)((long)iVar3 + (long)ptr),iVar1);
        if (iVar1 == iVar2) break;
        if (iVar2 < 1) {
          iVar1 = 0;
          goto LAB_00100092;
        }
        iVar3 = iVar3 + iVar2;
        iVar1 = iVar1 - iVar2;
      }
      iVar1 = 1;
LAB_00100092:
      CRYPTO_free(ptr);
      goto LAB_001000a2;
    }
  }
  iVar1 = 0;
LAB_001000a2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_i2d_fp(undefined1 *i2d,FILE *out,void *x)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,out);
    iVar1 = ASN1_i2d_bio(i2d,bp,(uchar *)x);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/a_i2d_fp.c",0x18,__func___3);
  ERR_set_error(0xd,0x80007,0);
  return 0;
}



int ASN1_item_i2d_bio(ASN1_ITEM *it,BIO *out,void *x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (uchar *)0x0;
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)x,&local_28,it);
  if ((iVar1 < 0) || (iVar3 = 0, local_28 == (uchar *)0x0)) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/asn1/a_i2d_fp.c",0x5c,"ASN1_item_i2d_bio");
    ERR_set_error(0xd,0x8000d,0);
  }
  else {
    for (; iVar2 = BIO_write(out,local_28 + iVar3,iVar1), iVar1 != iVar2; iVar1 = iVar1 - iVar2) {
      if (iVar2 < 1) {
        iVar1 = 0;
        goto LAB_0010020d;
      }
      iVar3 = iVar3 + iVar2;
    }
    iVar1 = 1;
LAB_0010020d:
    CRYPTO_free(local_28);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int ASN1_item_i2d_fp(ASN1_ITEM *it,FILE *out,void *x)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,out);
    iVar1 = ASN1_item_i2d_bio(it,bp,x);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/a_i2d_fp.c",0x4b,"ASN1_item_i2d_fp");
  ERR_set_error(0xd,0x80007,0);
  return 0;
}



BIO * ASN1_item_i2d_mem_bio(ASN1_ITEM *param_1,void *param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *out;
  
  if ((param_1 == (ASN1_ITEM *)0x0) || (param_2 == (void *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_i2d_fp.c",0x74,"ASN1_item_i2d_mem_bio");
    ERR_set_error(0xd,0xc0102,0);
  }
  else {
    type = BIO_s_mem();
    out = BIO_new(type);
    if (out != (BIO *)0x0) {
      iVar1 = ASN1_item_i2d_bio(param_1,out,param_2);
      if (0 < iVar1) {
        return out;
      }
      BIO_free(out);
    }
  }
  return (BIO *)0x0;
}



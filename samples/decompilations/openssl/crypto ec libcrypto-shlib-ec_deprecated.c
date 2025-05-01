
BIGNUM * EC_POINT_point2bn(EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t form,
                          BIGNUM *param_4,BN_CTX *param_5)

{
  long lVar1;
  BIGNUM *pBVar2;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  pBVar2 = (BIGNUM *)0x0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EC_POINT_point2buf(param_1,param_2,CONCAT44(in_register_00000014,form),&local_28);
  if (lVar1 != 0) {
    pBVar2 = BN_bin2bn(local_28,(int)lVar1,param_4);
    CRYPTO_free(local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EC_POINT * EC_POINT_bn2point(EC_GROUP *param_1,BIGNUM *param_2,EC_POINT *param_3,BN_CTX *param_4)

{
  int iVar1;
  int iVar2;
  uchar *buf;
  ulong len;
  
  iVar1 = BN_num_bits(param_2);
  iVar2 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar2 = iVar1 + 7;
  }
  len = (ulong)(iVar2 >> 3);
  if (len == 0) {
    len = 1;
  }
  buf = (uchar *)CRYPTO_malloc((int)len,"crypto/ec/ec_deprecated.c",0x32);
  if (buf == (uchar *)0x0) {
LAB_00100182:
    param_3 = (EC_POINT *)0x0;
  }
  else {
    iVar2 = BN_bn2binpad(param_2,buf,len & 0xffffffff);
    if (iVar2 < 0) {
      CRYPTO_free(buf);
      return (EC_POINT *)0x0;
    }
    if (param_3 == (EC_POINT *)0x0) {
      param_3 = EC_POINT_new(param_1);
      if (param_3 == (EC_POINT *)0x0) {
        CRYPTO_free(buf);
        return (EC_POINT *)0x0;
      }
      iVar2 = EC_POINT_oct2point(param_1,param_3,buf,len,param_4);
      if (iVar2 == 0) {
        EC_POINT_clear_free(param_3);
        goto LAB_00100172;
      }
    }
    else {
      iVar2 = EC_POINT_oct2point(param_1,param_3,buf,len,param_4);
      if (iVar2 == 0) {
LAB_00100172:
        CRYPTO_free(buf);
        goto LAB_00100182;
      }
    }
    CRYPTO_free(buf);
  }
  return param_3;
}



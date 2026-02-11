
int ASN1_digest(undefined1 *i2d,EVP_MD *type,char *data,uchar *md,uint *len)

{
  int iVar1;
  void *data_00;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (*(code *)i2d)(data,0);
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_digest.c",0x24,"ASN1_digest");
    ERR_set_error(0xd,0xc0103,0);
    iVar1 = 0;
  }
  else {
    data_00 = CRYPTO_malloc(iVar1,"crypto/asn1/a_digest.c",0x27);
    if (data_00 != (void *)0x0) {
      local_48 = data_00;
      (*(code *)i2d)(data,&local_48);
      iVar1 = EVP_Digest(data_00,(long)iVar1,md,len,type,(ENGINE *)0x0);
      if (iVar1 != 0) {
        CRYPTO_free(data_00);
        iVar1 = 1;
        goto LAB_001000a7;
      }
      CRYPTO_free(data_00);
    }
    iVar1 = 0;
  }
LAB_001000a7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_asn1_item_digest_ex
              (ASN1_ITEM *param_1,EVP_MD *param_2,ASN1_VALUE *param_3,uchar *param_4,uint *param_5,
              undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ENGINE *e;
  undefined8 uVar4;
  EVP_MD *type;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  iVar1 = ASN1_item_i2d(param_3,&local_48,param_1);
  iVar2 = 0;
  if ((-1 < iVar1) && (local_48 != (uchar *)0x0)) {
    lVar3 = EVP_MD_get0_provider(param_2);
    type = param_2;
    if (lVar3 == 0) {
      iVar2 = EVP_MD_get_type(param_2);
      e = ENGINE_get_digest_engine(iVar2);
      if (e == (ENGINE *)0x0) {
        uVar4 = EVP_MD_get0_name(param_2);
        type = (EVP_MD *)EVP_MD_fetch(param_6,uVar4,param_7);
      }
      else {
        ENGINE_finish(e);
      }
    }
    iVar2 = 0;
    if (type != (EVP_MD *)0x0) {
      iVar2 = EVP_Digest(local_48,(long)iVar1,param_4,param_5,type,(ENGINE *)0x0);
    }
    CRYPTO_free(local_48);
    if (type != param_2) {
      EVP_MD_free(type);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int ASN1_item_digest(ASN1_ITEM *it,EVP_MD *type,void *data,uchar *md,uint *len)

{
  int iVar1;
  
  iVar1 = ossl_asn1_item_digest_ex();
  return iVar1;
}



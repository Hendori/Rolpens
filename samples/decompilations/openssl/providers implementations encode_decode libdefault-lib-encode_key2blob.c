
undefined8 key2blob_newctx(undefined8 param_1)

{
  return param_1;
}



void key2blob_freectx(void)

{
  return;
}



bool ec2blob_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 2;
    }
  }
  return (uVar1 & 0x86) != 0;
}



void ec2blob_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void sm22blob_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void ec2blob_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void sm22blob_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,param_1,param_2,param_3);
  return;
}



int sm22blob_encode(undefined8 param_1,undefined8 param_2,EC_KEY *param_3,long param_4)

{
  uchar *data;
  int len;
  int iVar1;
  BIO *b;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    local_38 = (uchar *)0x0;
    iVar1 = 0;
    len = i2o_ECPublicKey(param_3,&local_38);
    data = local_38;
    if (((0 < len) && (local_38 != (uchar *)0x0)) &&
       (b = (BIO *)ossl_bio_new_from_core_bio(param_1,param_2), b != (BIO *)0x0)) {
      iVar1 = BIO_write(b,data,len);
      BIO_free(b);
    }
    CRYPTO_free(local_38);
  }
  else {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2blob.c",0xb1,"sm22blob_encode"
                 );
    ERR_set_error(0x39,0x80106,0);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



bool sm22blob_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 2;
    }
  }
  return (uVar1 & 0x86) != 0;
}



int ec2blob_encode(undefined8 param_1,undefined8 param_2,EC_KEY *param_3,long param_4)

{
  uchar *data;
  int len;
  int iVar1;
  BIO *b;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    local_38 = (uchar *)0x0;
    iVar1 = 0;
    len = i2o_ECPublicKey(param_3,&local_38);
    data = local_38;
    if (((0 < len) && (local_38 != (uchar *)0x0)) &&
       (b = (BIO *)ossl_bio_new_from_core_bio(param_1,param_2), b != (BIO *)0x0)) {
      iVar1 = BIO_write(b,data,len);
      BIO_free(b);
    }
    CRYPTO_free(local_38);
  }
  else {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2blob.c",0xaf,"ec2blob_encode")
    ;
    ERR_set_error(0x39,0x80106,0);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



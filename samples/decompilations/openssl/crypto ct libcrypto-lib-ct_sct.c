
void SCT_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x18));
    CRYPTO_free(*(void **)((long)param_1 + 0x30));
    CRYPTO_free(*(void **)((long)param_1 + 0x48));
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void SCT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x68,"crypto/ct/ct_sct.c",0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x16] = 0xffffffff;
    *puVar1 = 0xffffffff;
  }
  return;
}



void SCT_LIST_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,0x100000);
  return;
}



undefined8 SCT_set_version(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/ct/ct_sct.c",0x36,"SCT_set_version");
  ERR_set_error(0x32,0x67,0);
  return 0;
}



undefined8 SCT_set_log_entry_type(long param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 < 2) {
    *(uint *)(param_1 + 0x58) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/ct/ct_sct.c",0x4a,"SCT_set_log_entry_type");
  ERR_set_error(0x32,0x66,0);
  return 0;
}



undefined8 SCT_set0_log_id(int *param_1,undefined8 param_2,long param_3)

{
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    ERR_new();
    ERR_set_debug("crypto/ct/ct_sct.c",0x51,"SCT_set0_log_id");
    ERR_set_error(0x32,100,0);
    return 0;
  }
  CRYPTO_free(*(void **)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = param_2;
  *(long *)(param_1 + 8) = param_3;
  param_1[0x18] = 0;
  return 1;
}



undefined8 SCT_set1_log_id(int *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    ERR_new();
    ERR_set_debug("crypto/ct/ct_sct.c",0x5f,"SCT_set1_log_id");
    ERR_set_error(0x32,100,0);
LAB_001002e8:
    uVar1 = 0;
  }
  else {
    CRYPTO_free(*(void **)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x18] = 0;
    if ((param_2 != 0) && (param_3 != 0)) {
      lVar2 = CRYPTO_memdup(param_2,param_3,"crypto/ct/ct_sct.c",0x69);
      *(long *)(param_1 + 6) = lVar2;
      if (lVar2 == 0) goto LAB_001002e8;
      *(long *)(param_1 + 8) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}



void SCT_set_timestamp(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



undefined8 SCT_set_signature_nid(long param_1,int param_2)

{
  if (param_2 == 0x29c) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x104;
    return 1;
  }
  if (param_2 == 0x31a) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x304;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/ct/ct_sct.c",0x86,"SCT_set_signature_nid");
  ERR_set_error(0x32,0x65,0);
  return 0;
}



void SCT_set0_extensions(long param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



undefined8 SCT_set1_extensions(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto/ct/ct_sct.c",0x9b);
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x38) = param_3;
  }
  return 1;
}



void SCT_set0_signature(long param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_free(*(void **)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



undefined8 SCT_set1_signature(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto/ct/ct_sct.c",0xb3);
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x50) = param_3;
  }
  return 1;
}



undefined4 SCT_get_version(undefined4 *param_1)

{
  return *param_1;
}



undefined4 SCT_get_log_entry_type(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



undefined8 SCT_get0_log_id(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 SCT_get_timestamp(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 SCT_get_signature_nid(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == 0) && ((char)param_1[0x10] == '\x04')) {
    uVar1 = 0x29c;
    if (*(char *)((long)param_1 + 0x41) != '\x01') {
      uVar1 = 0;
      if (*(char *)((long)param_1 + 0x41) == '\x03') {
        uVar1 = 0x31a;
      }
      return uVar1;
    }
  }
  return uVar1;
}



undefined8 SCT_get0_extensions(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 SCT_get0_signature(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  return *(undefined8 *)(param_1 + 0x50);
}



ulong SCT_signature_is_complete(long param_1)

{
  ulong uVar1;
  
  uVar1 = SCT_get_signature_nid();
  if (((int)uVar1 != 0) && (uVar1 = 0, *(long *)(param_1 + 0x48) != 0)) {
    uVar1 = (ulong)(*(long *)(param_1 + 0x50) != 0);
  }
  return uVar1;
}



uint SCT_is_complete(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  if (uVar1 != 0) {
    return (uint)(*(long *)(param_1 + 2) != 0);
  }
  if (*(long *)(param_1 + 6) != 0) {
    iVar2 = SCT_signature_is_complete();
    return (uint)(iVar2 != 0);
  }
  return uVar1;
}



undefined4 SCT_get_source(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



undefined8 SCT_set_source(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 == 2) {
    uVar1 = SCT_set_log_entry_type(param_1,1);
    return uVar1;
  }
  if ((param_2 & 0xfffffffd) != 1) {
    return 1;
  }
  uVar1 = SCT_set_log_entry_type(param_1,0);
  return uVar1;
}



undefined4 SCT_get_validation_status(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



uint SCT_validate(int *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  EVP_PKEY *pEVar4;
  uint uVar5;
  long in_FS_OFFSET;
  X509_PUBKEY *local_40;
  X509_PUBKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (X509_PUBKEY *)0x0;
  local_38 = (X509_PUBKEY *)0x0;
  if (*param_1 == 0) {
    lVar2 = CTLOG_STORE_get0_log_by_id
                      (param_2[2],*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      lVar3 = SCT_CTX_new(param_2[4],param_2[5]);
      if (lVar3 == 0) {
LAB_0010076f:
        uVar5 = 0xffffffff;
      }
      else {
        pEVar4 = (EVP_PKEY *)CTLOG_get0_public_key(lVar2);
        iVar1 = X509_PUBKEY_set(&local_38,pEVar4);
        if ((iVar1 != 1) || (iVar1 = SCT_CTX_set1_pubkey(lVar3,local_38), iVar1 != 1))
        goto LAB_0010076f;
        iVar1 = SCT_get_log_entry_type(param_1);
        if (iVar1 == 1) {
          if (param_2[1] != 0) {
            pEVar4 = (EVP_PKEY *)X509_get0_pubkey();
            iVar1 = X509_PUBKEY_set(&local_40,pEVar4);
            if ((iVar1 != 1) || (iVar1 = SCT_CTX_set1_issuer_pubkey(lVar3,local_40), iVar1 != 1))
            goto LAB_0010076f;
            goto LAB_001007bf;
          }
LAB_001007de:
          iVar1 = 4;
          uVar5 = 0;
        }
        else {
LAB_001007bf:
          SCT_CTX_set_time(lVar3,param_2[3]);
          iVar1 = SCT_CTX_set1_cert(lVar3,*param_2,0);
          if (iVar1 != 1) goto LAB_001007de;
          iVar1 = SCT_CTX_verify(lVar3,param_1);
          uVar5 = (uint)(iVar1 == 1);
          iVar1 = (iVar1 != 1) + 2;
        }
        param_1[0x18] = iVar1;
      }
      X509_PUBKEY_free(local_40);
      X509_PUBKEY_free(local_38);
      SCT_CTX_free(lVar3);
      goto LAB_001006f7;
    }
    param_1[0x18] = 1;
  }
  else {
    param_1[0x18] = 5;
  }
  uVar5 = 0;
LAB_001006f7:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



uint SCT_LIST_validate(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      iVar4 = 0;
      uVar5 = 1;
      do {
        lVar3 = OPENSSL_sk_value(param_1,iVar4);
        if (lVar3 != 0) {
          uVar2 = SCT_validate(lVar3,param_2);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar5 = uVar5 & uVar2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
      return uVar5;
    }
  }
  return 1;
}



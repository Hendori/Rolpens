
int ct_base64_decode_constprop_0(uchar *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t sVar2;
  uchar *t;
  size_t sVar3;
  size_t sVar4;
  
  sVar2 = strlen((char *)param_1);
  if (sVar2 == 0) {
    *param_2 = 0;
    return 0;
  }
  t = (uchar *)CRYPTO_malloc((int)(sVar2 >> 2) * 3,"crypto/ct/ct_b64.c",0x24);
  if (t != (uchar *)0x0) {
    iVar1 = EVP_DecodeBlock(t,param_1,(int)sVar2);
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("crypto/ct/ct_b64.c",0x2a,"ct_base64_decode");
      ERR_set_error(0x32,0x6c,0);
    }
    else {
      sVar3 = sVar2;
      do {
        sVar4 = sVar3 - 1;
        if (param_1[sVar4] != '=') {
          *param_2 = t;
          return (iVar1 - (int)sVar2) + (int)sVar3;
        }
        sVar3 = sVar4;
      } while (sVar4 != sVar2 - 3);
    }
  }
  CRYPTO_free(t);
  return -1;
}



long SCT_new_from_base64(undefined1 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *ptr;
  long in_FS_OFFSET;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = SCT_new();
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  if (lVar2 == 0) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("crypto/ct/ct_b64.c",0x48,"SCT_new_from_base64");
    ERR_set_error(0x32,0x80032,0);
    goto LAB_00100233;
  }
  iVar1 = SCT_set_version(lVar2,param_1);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ct/ct_b64.c",0x51,"SCT_new_from_base64");
    ERR_set_error(0x32,0x73,0);
LAB_001002bb:
    ptr = (void *)0x0;
  }
  else {
    iVar1 = ct_base64_decode_constprop_0(param_2,&local_50);
    ptr = local_50;
    if (iVar1 < 0) {
      ERR_new();
      uVar4 = 0x57;
    }
    else {
      iVar1 = SCT_set0_log_id(lVar2,local_50,(long)iVar1);
      if (iVar1 == 0) goto LAB_00100267;
      local_50 = (void *)0x0;
      iVar1 = ct_base64_decode_constprop_0(param_5,&local_50);
      if (iVar1 < 0) {
        ERR_new();
        uVar4 = 0x60;
      }
      else {
        SCT_set0_extensions(lVar2,local_50,(long)iVar1);
        local_50 = (void *)0x0;
        iVar1 = ct_base64_decode_constprop_0(param_6,&local_50);
        ptr = local_50;
        if (-1 < iVar1) {
          local_48 = local_50;
          iVar1 = o2i_SCT_signature(lVar2,&local_48,(long)iVar1);
          if (0 < iVar1) {
            CRYPTO_free(ptr);
            local_50 = (void *)0x0;
            SCT_set_timestamp(lVar2,param_4);
            iVar1 = SCT_set_log_entry_type(lVar2,param_3);
            lVar3 = lVar2;
            if (iVar1 != 0) goto LAB_00100233;
            goto LAB_001002bb;
          }
          goto LAB_00100267;
        }
        ERR_new();
        uVar4 = 0x68;
      }
    }
    ERR_set_debug("crypto/ct/ct_b64.c",uVar4,"SCT_new_from_base64");
    ERR_set_error(0x32,0x76,0);
    ptr = local_50;
  }
LAB_00100267:
  CRYPTO_free(ptr);
  lVar3 = 0;
  SCT_free(lVar2);
LAB_00100233:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



undefined8
CTLOG_new_from_base64_ex
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  void *ptr;
  int iVar1;
  EVP_PKEY *pkey;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  if (param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ct/ct_b64.c",0x8f,"CTLOG_new_from_base64_ex");
    ERR_set_error(0x32,0x80106,0);
    uVar3 = 0;
  }
  else {
    iVar1 = ct_base64_decode_constprop_0(param_2,&local_50);
    ptr = local_50;
    if (iVar1 < 0) {
      ERR_new();
      uVar3 = 0x95;
    }
    else {
      local_48 = local_50;
      pkey = (EVP_PKEY *)d2i_PUBKEY_ex(0,&local_48,(long)iVar1,param_4,param_5);
      CRYPTO_free(ptr);
      if (pkey != (EVP_PKEY *)0x0) {
        lVar2 = CTLOG_new_ex(pkey,param_3,param_4,param_5);
        uVar3 = 1;
        *param_1 = lVar2;
        if (lVar2 == 0) {
          EVP_PKEY_free(pkey);
          uVar3 = 0;
        }
        goto LAB_00100436;
      }
      ERR_new();
      uVar3 = 0x9d;
    }
    ERR_set_debug("crypto/ct/ct_b64.c",uVar3,"CTLOG_new_from_base64_ex");
    ERR_set_error(0x32,0x6e,0);
    uVar3 = 0;
  }
LAB_00100436:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void CTLOG_new_from_base64(void)

{
  CTLOG_new_from_base64_ex();
  return;
}



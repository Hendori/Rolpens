
void ml_dsa_compare(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  EVP_PKEY_eq(param_3,param_3);
  EVP_PKEY_eq(param_3,param_4);
  return;
}



void cleanup_ml_dsa_keys(EVP_PKEY *param_1,EVP_PKEY *param_2,EVP_PKEY *param_3,EVP_PKEY *param_4)

{
  EVP_PKEY_free(param_1);
  EVP_PKEY_free(param_2);
  EVP_PKEY_free(param_3);
  EVP_PKEY_free(param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ml_dsa_export_import(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (EVP_PKEY *)0x0;
  local_18 = 0;
  iVar1 = EVP_PKEY_todata(param_3,0x87,&local_18);
  if (iVar1 == 0) {
    ctx = (EVP_PKEY_CTX *)0x0;
    fwrite("Failed todata\n",1,0xe,_stderr);
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_3,0);
    if (ctx == (EVP_PKEY_CTX *)0x0) {
      ctx = (EVP_PKEY_CTX *)0x0;
      fwrite("Failed new ctx\n",1,0xf,_stderr);
    }
    else {
      iVar1 = EVP_PKEY_fromdata(ctx,&local_20,0x87,local_18);
      if (iVar1 == 0) {
        fwrite("Failed fromdata\n",1,0x10,_stderr);
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_20);
  OSSL_PARAM_free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ml_dsa_digest_sign_verify(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *ptr;
  void *ptr_00;
  long in_FS_OFFSET;
  undefined8 local_a0;
  char *local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EVP_MD_CTX_new();
  local_90 = 5;
  local_70 = 0;
  local_98 = "context-string";
  local_88 = "A context string";
  local_80 = __LC5;
  uStack_78 = _UNK_00101318;
  local_68 = 0;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  if (*param_2 < 8) {
    ptr = (void *)0x0;
    ptr_00 = (void *)0x0;
    fwrite("Failed to set tbslen",1,0x14,_stderr);
    goto LAB_0010029f;
  }
  bVar1 = *(byte *)*param_1;
  *param_2 = *param_2 - 8;
  iVar3 = bVar1 + 1;
  ptr = CRYPTO_malloc(iVar3,"fuzz/ml-dsa.c",399);
  if ((ptr != (void *)0x0) && (lVar4 != 0)) {
    iVar2 = RAND_bytes_ex(0,ptr,iVar3,0);
    if (iVar2 != 0) {
      iVar2 = EVP_DigestSignInit_ex(lVar4,0,0,0,"?fips=true",param_3,&local_98);
      if (iVar2 == 0) {
LAB_00100325:
        ptr_00 = (void *)0x0;
      }
      else {
        iVar2 = EVP_DigestSign(lVar4,0,&local_a0,ptr,iVar3);
        if (iVar2 < 1) goto LAB_00100325;
        ptr_00 = CRYPTO_malloc((int)local_a0,"fuzz/ml-dsa.c",0x19e);
        if (ptr_00 == (void *)0x0) goto LAB_00100325;
        iVar2 = EVP_DigestSign(lVar4,ptr_00,&local_a0,ptr,iVar3);
        if (0 < iVar2) {
          EVP_MD_CTX_free(lVar4);
          lVar4 = EVP_MD_CTX_new();
          if (lVar4 != 0) {
            iVar2 = EVP_DigestVerifyInit_ex(lVar4,0,0,0,"?fips=true",param_3,&local_98);
            if (0 < iVar2) {
              iVar3 = EVP_DigestVerify(lVar4,ptr_00,local_a0,ptr,iVar3);
              if (0 < iVar3) goto LAB_0010029f;
            }
          }
          fwrite("Failed to verify digest with EVP_DigestVerify\n",1,0x2e,_stderr);
          goto LAB_0010029f;
        }
      }
      fwrite("Failed to sign digest with EVP_DigestSign\n",1,0x2a,_stderr);
      goto LAB_0010029f;
    }
  }
  ptr_00 = (void *)0x0;
  fwrite("Failed basic initialization\n",1,0x1c,_stderr);
LAB_0010029f:
  CRYPTO_free(ptr);
  EVP_MD_CTX_free(lVar4);
  EVP_SIGNATURE_free(0);
  CRYPTO_free(ptr_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ml_dsa_sign_verify(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  size_t tbslen;
  byte bVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  long lVar3;
  uchar *tbs;
  uchar *sig;
  long in_FS_OFFSET;
  size_t local_a0;
  char *local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_3,0);
  local_a0 = 0;
  lVar3 = EVP_PKEY_get0_type_name(param_3);
  local_90 = 5;
  local_70 = 0;
  local_98 = "context-string";
  local_88 = "A context string";
  local_80 = __LC5;
  uStack_78 = _UNK_00101318;
  local_68 = 0;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  if (*param_2 < 8) {
    tbs = (uchar *)0x0;
    sig = (uchar *)0x0;
    lVar3 = 0;
    fwrite("Failed to set tbslen",1,0x14,_stderr);
    goto LAB_0010058f;
  }
  bVar1 = *(byte *)*param_1;
  *param_2 = *param_2 - 8;
  tbslen = (ulong)bVar1 + 1;
  tbs = (uchar *)CRYPTO_malloc((int)tbslen,"fuzz/ml-dsa.c",0x142);
  if (((tbs != (uchar *)0x0) && (ctx != (EVP_PKEY_CTX *)0x0)) && (lVar3 != 0)) {
    iVar2 = RAND_bytes_ex(0,tbs,tbslen,0);
    if (iVar2 != 0) {
      lVar3 = EVP_SIGNATURE_fetch(0,lVar3,0);
      if (lVar3 == 0) {
LAB_00100708:
        sig = (uchar *)0x0;
      }
      else {
        iVar2 = EVP_PKEY_sign_message_init(ctx,lVar3,&local_98);
        if (iVar2 < 1) goto LAB_00100708;
        iVar2 = EVP_PKEY_sign(ctx,(uchar *)0x0,&local_a0,tbs,tbslen);
        if (iVar2 < 1) goto LAB_00100708;
        sig = (uchar *)CRYPTO_zalloc(local_a0,"fuzz/ml-dsa.c",0x152);
        if (sig == (uchar *)0x0) goto LAB_00100708;
        iVar2 = EVP_PKEY_sign(ctx,sig,&local_a0,tbs,tbslen);
        if (0 < iVar2) {
          EVP_PKEY_CTX_free(ctx);
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_3,0);
          if (ctx != (EVP_PKEY_CTX *)0x0) {
            iVar2 = EVP_PKEY_verify_message_init(ctx,lVar3,&local_98);
            if (0 < iVar2) {
              iVar2 = EVP_PKEY_verify(ctx,sig,local_a0,tbs,tbslen);
              if (0 < iVar2) goto LAB_0010058f;
            }
          }
          fwrite("Failed to verify message\n",1,0x19,_stderr);
          goto LAB_0010058f;
        }
      }
      fwrite("Failed to sign message\n",1,0x17,_stderr);
      goto LAB_0010058f;
    }
  }
  sig = (uchar *)0x0;
  lVar3 = 0;
  fwrite("Failed basic initialization\n",1,0x1c,_stderr);
LAB_0010058f:
  CRYPTO_free(tbs);
  EVP_PKEY_CTX_free(ctx);
  EVP_SIGNATURE_free(lVar3);
  CRYPTO_free(sig);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void create_ml_dsa_raw_key(long *param_1,long *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  uchar auStack_1358 [4904];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (ushort *)*param_1;
  lVar5 = *param_2;
  uVar1 = *puVar2;
  *param_1 = (long)(puVar2 + 1);
  *param_2 = lVar5 + -2;
  switch((uint)uVar1 % 6) {
  case 0:
    if ((puVar2[1] & 1) != 0) {
      lVar5 = 0x520;
      pcVar6 = "ML-DSA-44";
      iVar3 = RAND_bytes(auStack_1358,0x520);
      if (iVar3 == 0) goto LAB_00100800;
      goto LAB_00100969;
    }
    iVar3 = RAND_bytes(auStack_1358,0xa00);
    if (iVar3 == 0) goto LAB_00100800;
    uVar4 = 0xa00;
    pcVar6 = "ML-DSA-44";
LAB_001008bf:
    uVar4 = EVP_PKEY_new_raw_private_key_ex(0,pcVar6,0,auStack_1358,uVar4);
    goto LAB_001008ce;
  case 1:
    pcVar6 = "ML-DSA-65";
    if ((puVar2[1] & 1) == 0) {
LAB_001008a1:
      iVar3 = RAND_bytes(auStack_1358,0xfc0);
      uVar4 = 0xfc0;
joined_r0x0010093d:
      if (iVar3 == 0) goto LAB_00100800;
      goto LAB_001008bf;
    }
    iVar3 = 0x7a0;
    pcVar6 = "ML-DSA-65";
    lVar5 = 0x7a0;
    break;
  case 2:
    if ((puVar2[1] & 1) == 0) {
      pcVar6 = "ML-DSA-87";
      iVar3 = RAND_bytes(auStack_1358,0x1320);
      uVar4 = 0x1320;
      goto joined_r0x0010093d;
    }
    iVar3 = 0xa20;
    pcVar6 = "ML-DSA-87";
    lVar5 = 0xa20;
    break;
  case 3:
    if ((puVar2[1] & 1) == 0) goto LAB_00100800;
    iVar3 = 0x21;
    pcVar6 = "ML-DSA-33";
    lVar5 = 0x21;
    break;
  case 4:
    uVar1 = puVar2[1];
    *param_1 = (long)(puVar2 + 2);
    *param_2 = lVar5 + -4;
    lVar5 = (ulong)uVar1 + ((ulong)(uVar1 >> 5) / 0x51) * -0xa20;
    if ((puVar2[2] & 1) == 0) {
      if (lVar5 != 0x520) {
        if (lVar5 != 0x7a0) goto LAB_00100800;
        pcVar6 = "ML-DSA-87";
        goto LAB_001008a1;
      }
      pcVar6 = "ML-DSA-87";
      iVar3 = RAND_bytes(auStack_1358,0xa00);
      uVar4 = 0xa00;
      goto joined_r0x0010093d;
    }
    iVar3 = (int)lVar5;
    pcVar6 = "ML-DSA-87";
    break;
  default:
    if ((puVar2[1] & 1) == 0) goto LAB_00100800;
    iVar3 = 0;
    pcVar6 = (char *)0x0;
    lVar5 = 0;
  }
  iVar3 = RAND_bytes(auStack_1358,iVar3);
  if (iVar3 != 0) {
LAB_00100969:
    uVar4 = EVP_PKEY_new_raw_public_key_ex(0,pcVar6,0,auStack_1358,lVar5);
LAB_001008ce:
    *param_3 = uVar4;
  }
LAB_00100800:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void keygen_ml_dsa_real_key
               (undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  EVP_PKEY_CTX *pEVar3;
  EVP_PKEY *pEVar4;
  char *pcVar5;
  
  uVar1 = *(ushort *)*param_1;
  *param_1 = (ushort *)*param_1 + 1;
  *param_2 = *param_2 + -2;
  pcVar5 = "ML-DSA-65";
  uVar1 = uVar1 % 3;
  if ((uVar1 != 1) && (pcVar5 = "ML-DSA-87", uVar1 != 2)) {
    pcVar5 = "ML-DSA-44";
  }
  pEVar3 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,pcVar5,0);
  if (pEVar3 != (EVP_PKEY_CTX *)0x0) {
    iVar2 = EVP_PKEY_keygen_init(pEVar3);
    if (iVar2 == 0) {
      fwrite("Failed to init keygen ctx\n",1,0x1a,_stderr);
      EVP_PKEY_CTX_free(pEVar3);
      goto LAB_00100bb4;
    }
    pEVar4 = EVP_PKEY_new();
    *param_3 = pEVar4;
    if (pEVar4 == (EVP_PKEY *)0x0) {
      EVP_PKEY_CTX_free(pEVar3);
      goto LAB_00100bb4;
    }
    iVar2 = EVP_PKEY_generate(pEVar3,param_3);
    if (iVar2 == 0) {
      fwrite("Failed to generate new real key\n",1,0x20,_stderr);
      EVP_PKEY_CTX_free(pEVar3);
      goto LAB_00100bb4;
    }
    EVP_PKEY_CTX_free(pEVar3);
    pcVar5 = "ML-DSA-65";
    uVar1 = *(ushort *)*param_1;
    *param_1 = (ushort *)*param_1 + 1;
    *param_2 = *param_2 + -2;
    uVar1 = uVar1 % 3;
    if ((uVar1 != 1) && (pcVar5 = "ML-DSA-87", uVar1 != 2)) {
      pcVar5 = "ML-DSA-44";
    }
    pEVar3 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,pcVar5,0);
    if (pEVar3 != (EVP_PKEY_CTX *)0x0) {
      iVar2 = EVP_PKEY_keygen_init(pEVar3);
      if (iVar2 == 0) {
        fwrite("Failed to init keygen ctx\n",1,0x1a,_stderr);
        EVP_PKEY_CTX_free(pEVar3);
      }
      else {
        pEVar4 = EVP_PKEY_new();
        *param_4 = pEVar4;
        if (pEVar4 == (EVP_PKEY *)0x0) {
          EVP_PKEY_CTX_free(pEVar3);
        }
        else {
          iVar2 = EVP_PKEY_generate(pEVar3,param_4);
          if (iVar2 != 0) {
            EVP_PKEY_CTX_free(pEVar3);
            return;
          }
          fwrite("Failed to generate new real key\n",1,0x20,_stderr);
          EVP_PKEY_CTX_free(pEVar3);
        }
      }
      goto LAB_00100bb4;
    }
  }
  fwrite("Failed to generate ctx\n",1,0x17,_stderr);
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
LAB_00100bb4:
  fwrite("Unable to generate valid keys",1,0x1d,_stderr);
  return;
}



undefined8 FuzzerInitialize(void)

{
  return 0;
}



undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_50;
  byte *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (param_2 < 0x20) {
    uVar1 = 0xffffffff;
    local_50 = param_2;
  }
  else {
    local_48 = param_1 + 1;
    local_50 = param_2 - 1;
    uVar2 = (ulong)((uint)*param_1 + (uint)(ushort)(*param_1 / 6) * -6 & 0xff);
    if (*(code **)(ops + uVar2 * 0x28 + 0x10) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x28 + 0x10))(&local_48,&local_50,&local_40,&local_38);
    }
    if (*(code **)(ops + uVar2 * 0x28 + 0x18) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x28 + 0x18))
                (&local_48,&local_50,local_40,local_38,&local_30,&local_28);
    }
    if (*(code **)(ops + uVar2 * 0x28 + 0x20) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x28 + 0x20))(local_40,local_38,local_30,local_28);
    }
    uVar1 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  OPENSSL_cleanup();
  return;
}



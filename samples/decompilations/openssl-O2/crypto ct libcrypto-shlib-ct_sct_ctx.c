
undefined8
ct_public_key_hash_isra_0
          (undefined8 param_1,undefined8 param_2,X509_PUBKEY *param_3,long *param_4,ulong *param_5)

{
  int iVar1;
  EVP_MD *type;
  uchar *md;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  type = (EVP_MD *)EVP_MD_fetch(param_1,"SHA2-256",param_2);
  if ((type == (EVP_MD *)0x0) ||
     (((md = (uchar *)*param_4, md == (uchar *)0x0 || (*param_5 < 0x20)) &&
      (md = (uchar *)CRYPTO_malloc(0x20,"crypto/ct/ct_sct_ctx.c",0xd9), md == (uchar *)0x0)))) {
    md = (uchar *)0x0;
    uVar2 = 0;
  }
  else {
    iVar1 = i2d_X509_PUBKEY(param_3,&local_48);
    if ((iVar1 < 1) ||
       (iVar1 = EVP_Digest(local_48,(long)iVar1,md,&local_4c,type,(ENGINE *)0x0), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      if (md != (uchar *)*param_4) {
        CRYPTO_free((uchar *)*param_4);
        *param_4 = (long)md;
        *param_5 = 0x20;
      }
      md = (uchar *)0x0;
      uVar2 = 1;
    }
  }
  EVP_MD_free(type);
  CRYPTO_free(md);
  CRYPTO_free(local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void * SCT_CTX_new(undefined8 param_1,char *param_2)

{
  void *ptr;
  char *pcVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x60,"crypto/ct/ct_sct_ctx.c",0x19);
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x50) = param_1;
    if (param_2 == (char *)0x0) {
      return ptr;
    }
    pcVar1 = CRYPTO_strdup(param_2,"crypto/ct/ct_sct_ctx.c",0x20);
    *(char **)((long)ptr + 0x58) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void SCT_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_PKEY_free((EVP_PKEY *)*param_1);
    CRYPTO_free((void *)param_1[1]);
    CRYPTO_free((void *)param_1[3]);
    CRYPTO_free((void *)param_1[5]);
    CRYPTO_free((void *)param_1[7]);
    CRYPTO_free((void *)param_1[0xb]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 SCT_CTX_set1_cert(long param_1,X509 *param_2,X509 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int lastpos;
  undefined8 uVar5;
  X509 *x;
  X509_EXTENSION *pXVar6;
  X509_NAME *pXVar7;
  X509_EXTENSION *ex;
  ASN1_OCTET_STRING *data;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  uchar *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  local_48 = (void *)0x0;
  uVar1 = X509_get_ext_by_NID(param_2,0x3b8,-1);
  if ((int)uVar1 < 0) {
    if (uVar1 != 0xffffffff) goto LAB_00100353;
    if (param_3 == (X509 *)0x0) {
      iVar3 = i2d_X509(param_2,&local_50);
      lVar9 = (long)iVar3;
      if (iVar3 < 0) goto LAB_001002e3;
      goto LAB_00100356;
    }
LAB_001002e3:
    x = (X509 *)0x0;
  }
  else {
    iVar3 = X509_get_ext_by_NID(param_2,0x3b8,uVar1);
    if (-1 < iVar3) goto LAB_001002e3;
LAB_00100353:
    lVar9 = 0;
LAB_00100356:
    uVar2 = X509_get_ext_by_NID(param_2,0x3b7,-1);
    if (-1 < (int)uVar2) {
      uVar4 = X509_get_ext_by_NID(param_2,0x3b7,uVar2);
      uVar4 = uVar1 & uVar4;
      uVar1 = uVar2;
      if ((int)uVar4 < 0) goto LAB_00100417;
      goto LAB_001002e3;
    }
    if ((uVar2 != 0xffffffff) || ((int)uVar1 < 0)) {
      lVar8 = 0;
      x = (X509 *)0x0;
LAB_00100380:
      X509_free(x);
      CRYPTO_free(*(void **)(param_1 + 0x28));
      *(long *)(param_1 + 0x30) = lVar9;
      *(uchar **)(param_1 + 0x28) = local_50;
      CRYPTO_free(*(void **)(param_1 + 0x38));
      *(long *)(param_1 + 0x40) = lVar8;
      *(void **)(param_1 + 0x38) = local_48;
      uVar5 = 1;
      goto LAB_0010031a;
    }
LAB_00100417:
    x = X509_dup(param_2);
    if (x == (X509 *)0x0) goto LAB_001002e3;
    pXVar6 = X509_delete_ext(x,uVar1);
    X509_EXTENSION_free(pXVar6);
    if (param_3 == (X509 *)0x0) {
LAB_001004b0:
      iVar3 = i2d_re_X509_tbs(x,&local_48);
      lVar8 = (long)iVar3;
      if (0 < iVar3) goto LAB_00100380;
    }
    else {
      uVar1 = X509_get_ext_by_NID(param_3,0x5a,-1);
      if ((int)uVar1 < 0) {
        iVar3 = X509_get_ext_by_NID(x,0x5a,-1);
        if (iVar3 < 0) {
          if ((-2 < iVar3) && (-2 < (int)uVar1)) {
LAB_0010048b:
            if ((int)uVar1 < 0) {
              pXVar7 = X509_get_issuer_name(param_3);
              iVar3 = X509_set_issuer_name(x,pXVar7);
joined_r0x001005d9:
              if (iVar3 != 0) goto LAB_001004b0;
            }
          }
        }
        else {
          X509_get_ext_by_NID(x,0x5a,iVar3);
        }
      }
      else {
        iVar3 = X509_get_ext_by_NID(param_3,0x5a,uVar1);
        lastpos = X509_get_ext_by_NID(x,0x5a,-1);
        if (lastpos < 0) {
          if ((-2 < lastpos) && (iVar3 < 0)) goto LAB_0010048b;
        }
        else {
          uVar2 = X509_get_ext_by_NID(x,0x5a,lastpos);
          if (((int)(~uVar1 & uVar2) < 0) && (iVar3 < 0)) {
            pXVar7 = X509_get_issuer_name(param_3);
            iVar3 = X509_set_issuer_name(x,pXVar7);
            if (iVar3 != 0) {
              pXVar6 = X509_get_ext(param_3,uVar1);
              ex = X509_get_ext(x,lastpos);
              if (((pXVar6 != (X509_EXTENSION *)0x0) && (ex != (X509_EXTENSION *)0x0)) &&
                 (data = X509_EXTENSION_get_data(pXVar6), data != (ASN1_OCTET_STRING *)0x0)) {
                iVar3 = X509_EXTENSION_set_data(ex,data);
                goto joined_r0x001005d9;
              }
            }
          }
        }
      }
    }
  }
  CRYPTO_free(local_50);
  CRYPTO_free(local_48);
  X509_free(x);
  uVar5 = 0;
LAB_0010031a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SCT_CTX_set1_issuer_pubkey(long param_1,undefined8 param_2)

{
  ct_public_key_hash_isra_0
            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),param_2,param_1 + 0x18,
             param_1 + 0x20);
  return;
}



void SCT_CTX_set1_issuer(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_get_X509_PUBKEY(param_2);
  SCT_CTX_set1_issuer_pubkey(param_1,uVar1);
  return;
}



undefined8 SCT_CTX_set1_pubkey(undefined8 *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  pkey = X509_PUBKEY_get(param_2);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = ct_public_key_hash_isra_0(param_1[10],param_1[0xb],param_2,param_1 + 1,param_1 + 2);
    if (iVar1 != 0) {
      EVP_PKEY_free((EVP_PKEY *)*param_1);
      *param_1 = pkey;
      return 1;
    }
    EVP_PKEY_free(pkey);
  }
  return 0;
}



void SCT_CTX_set_time(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



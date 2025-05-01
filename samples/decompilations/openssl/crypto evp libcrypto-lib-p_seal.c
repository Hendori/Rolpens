
int EVP_SealInit(EVP_CIPHER_CTX *ctx,EVP_CIPHER *type,uchar **ek,int *ekl,uchar *iv,EVP_PKEY **pubk,
                int npubk)

{
  int iVar1;
  int iVar2;
  long lVar3;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  undefined8 local_b0;
  size_t local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (type == (EVP_CIPHER *)0x0) {
LAB_0010005b:
    lVar3 = EVP_CIPHER_CTX_get0_cipher(ctx);
    if ((lVar3 == 0) || (lVar3 = EVP_CIPHER_get0_provider(lVar3), lVar3 == 0)) {
      local_b0 = 0;
    }
    else {
      local_b0 = ossl_provider_libctx(lVar3);
    }
    if ((npubk < 1) || (pubk == (EVP_PKEY **)0x0)) {
      npubk = 1;
      goto LAB_001001f2;
    }
    iVar1 = EVP_CIPHER_CTX_rand_key(ctx,local_88);
    if (0 < iVar1) {
      iVar1 = EVP_CIPHER_CTX_get_iv_length(ctx);
      if ((((iVar1 < 0) || (iVar1 = RAND_priv_bytes_ex(local_b0,iv,(long)iVar1,0), iVar1 < 1)) ||
          (iVar1 = EVP_CIPHER_CTX_get_key_length(ctx), iVar1 < 0)) ||
         (iVar2 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_88,iv), iVar2 == 0))
      {
        npubk = 0;
        ctx_00 = (EVP_PKEY_CTX *)0x0;
      }
      else {
        lVar3 = 0;
        do {
          local_90 = (long)iVar1;
          ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(local_b0,pubk[lVar3],0);
          if (ctx_00 == (EVP_PKEY_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/p_seal.c",0x3d,"EVP_SealInit");
            ERR_set_error(6,0x80006,0);
LAB_001001eb:
            npubk = 0;
            goto LAB_0010021d;
          }
          iVar2 = EVP_PKEY_encrypt_init(ctx_00);
          if ((iVar2 < 1) ||
             (iVar2 = EVP_PKEY_encrypt(ctx_00,ek[lVar3],&local_90,local_88,local_90), iVar2 < 1))
          goto LAB_001001eb;
          ekl[lVar3] = (int)local_90;
          lVar3 = lVar3 + 1;
          EVP_PKEY_CTX_free(ctx_00);
        } while ((int)lVar3 < npubk);
        ctx_00 = (EVP_PKEY_CTX *)0x0;
      }
LAB_0010021d:
      EVP_PKEY_CTX_free(ctx_00);
      OPENSSL_cleanse(local_88,0x40);
      goto LAB_001001f2;
    }
  }
  else {
    EVP_CIPHER_CTX_reset();
    iVar1 = EVP_EncryptInit_ex(ctx,type,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
    if (iVar1 != 0) goto LAB_0010005b;
  }
  npubk = 0;
LAB_001001f2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return npubk;
}



int EVP_SealFinal(EVP_CIPHER_CTX *ctx,uchar *out,int *outl)

{
  int iVar1;
  
  iVar1 = EVP_EncryptFinal_ex(ctx,out,outl);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
  return iVar1;
}




int EVP_OpenInit(EVP_CIPHER_CTX *ctx,EVP_CIPHER *type,uchar *ek,int ekl,uchar *iv,EVP_PKEY *priv)

{
  int iVar1;
  uint uVar2;
  EVP_PKEY_CTX *ctx_00;
  uchar *out;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (type == (EVP_CIPHER *)0x0) {
LAB_00100061:
    uVar2 = 1;
    if (priv == (EVP_PKEY *)0x0) goto LAB_00100167;
    ctx_00 = EVP_PKEY_CTX_new(priv,(ENGINE *)0x0);
    if (ctx_00 == (EVP_PKEY_CTX *)0x0) {
      ERR_new();
      out = (uchar *)0x0;
      ERR_set_debug("crypto/evp/p_open.c",0x25,"EVP_OpenInit");
      ERR_set_error(6,0x80006,0);
      uVar2 = 0;
    }
    else {
      iVar1 = EVP_PKEY_decrypt_init(ctx_00);
      if (0 < iVar1) {
        iVar1 = EVP_PKEY_decrypt(ctx_00,(uchar *)0x0,&local_48,ek,(long)ekl);
        if (0 < iVar1) {
          out = (uchar *)CRYPTO_malloc((int)local_48,"crypto/evp/p_open.c",0x2d);
          if (out != (uchar *)0x0) {
            iVar1 = EVP_PKEY_decrypt(ctx_00,out,&local_48,ek,(long)ekl);
            if (0 < iVar1) {
              iVar1 = EVP_CIPHER_CTX_set_key_length(ctx,(int)local_48);
              if (0 < iVar1) {
                iVar1 = EVP_DecryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,out,iv);
                uVar2 = (uint)(iVar1 != 0);
                goto LAB_00100144;
              }
            }
          }
          uVar2 = 0;
          goto LAB_00100144;
        }
      }
      uVar2 = 0;
      out = (uchar *)0x0;
    }
  }
  else {
    EVP_CIPHER_CTX_reset();
    iVar1 = EVP_DecryptInit_ex(ctx,type,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
    if (iVar1 != 0) goto LAB_00100061;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    out = (uchar *)0x0;
    uVar2 = 0;
  }
LAB_00100144:
  EVP_PKEY_CTX_free(ctx_00);
  CRYPTO_clear_free(out,local_48,"crypto/evp/p_open.c",0x3a);
LAB_00100167:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int EVP_OpenFinal(EVP_CIPHER_CTX *ctx,uchar *out,int *outl)

{
  int iVar1;
  
  iVar1 = EVP_DecryptFinal_ex(ctx,out,outl);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = EVP_DecryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
  return iVar1;
}



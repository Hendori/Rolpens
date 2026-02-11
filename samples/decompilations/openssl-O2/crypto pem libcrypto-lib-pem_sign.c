
void PEM_SignInit(EVP_MD_CTX *ctx,EVP_MD *type)

{
  EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
  return;
}



void PEM_SignUpdate(EVP_MD_CTX *ctx,uchar *d,uint cnt)

{
  EVP_DigestUpdate(ctx,d,(ulong)cnt);
  return;
}



int PEM_SignFinal(EVP_MD_CTX *ctx,uchar *sigret,uint *siglen,EVP_PKEY *pkey)

{
  int iVar1;
  uint uVar2;
  uchar *md;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_size(pkey);
  md = (uchar *)CRYPTO_malloc(iVar1,"crypto/pem/pem_sign.c",0x23);
  if (md != (uchar *)0x0) {
    iVar1 = EVP_SignFinal(ctx,md,&local_44,pkey);
    if (0 < iVar1) {
      iVar1 = 1;
      uVar2 = EVP_EncodeBlock(sigret,md,local_44);
      *siglen = uVar2;
      goto LAB_001000a4;
    }
  }
  iVar1 = 0;
LAB_001000a4:
  CRYPTO_free(md);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



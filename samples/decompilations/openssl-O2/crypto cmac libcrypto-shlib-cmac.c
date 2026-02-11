
void make_kn(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  
  bVar1 = *param_2;
  if ((int)param_3 < 2) {
    bVar4 = bVar1 * '\x02';
  }
  else {
    uVar2 = 1;
    bVar3 = bVar1;
    do {
      bVar4 = param_2[uVar2];
      param_1[uVar2 - 1] = bVar4 >> 7 | bVar3 * '\x02';
      uVar2 = uVar2 + 1;
      bVar3 = bVar4;
    } while (param_3 != uVar2);
    bVar4 = bVar4 * '\x02';
    param_1 = param_1 + (param_3 - 1);
    bVar3 = 0x87;
    if (param_3 == 0x10) goto LAB_00100058;
  }
  bVar3 = 0x1b;
LAB_00100058:
  *param_1 = bVar3 & (char)bVar1 >> 7 ^ bVar4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMAC_CTX * CMAC_CTX_new(void)

{
  CMAC_CTX *ptr;
  EVP_CIPHER_CTX *pEVar1;
  
  ptr = (CMAC_CTX *)CRYPTO_malloc(0x90,"crypto/cmac/cmac.c",0x3a);
  if (ptr != (CMAC_CTX *)0x0) {
    pEVar1 = EVP_CIPHER_CTX_new();
    *(EVP_CIPHER_CTX **)ptr = pEVar1;
    if (pEVar1 != (EVP_CIPHER_CTX *)0x0) {
      *(undefined4 *)(ptr + 0x88) = 0xffffffff;
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (CMAC_CTX *)0x0;
}



void CMAC_CTX_cleanup(CMAC_CTX *ctx)

{
  EVP_CIPHER_CTX_reset(*(undefined8 *)ctx);
  OPENSSL_cleanse(ctx + 0x48,0x20);
  OPENSSL_cleanse(ctx + 8,0x20);
  OPENSSL_cleanse(ctx + 0x28,0x20);
  OPENSSL_cleanse(ctx + 0x68,0x20);
  *(undefined4 *)(ctx + 0x88) = 0xffffffff;
  return;
}



EVP_CIPHER_CTX * CMAC_CTX_get0_cipher_ctx(CMAC_CTX *ctx)

{
  return *(EVP_CIPHER_CTX **)ctx;
}



void CMAC_CTX_free(CMAC_CTX *ctx)

{
  if (ctx != (CMAC_CTX *)0x0) {
    CMAC_CTX_cleanup(ctx);
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)ctx);
    CRYPTO_free(ctx);
    return;
  }
  return;
}



int CMAC_CTX_copy(CMAC_CTX *out,CMAC_CTX *in)

{
  int iVar1;
  size_t __n;
  
  if (*(int *)(in + 0x88) == -1) {
    return 0;
  }
  iVar1 = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)in);
  __n = (size_t)iVar1;
  if (iVar1 != 0) {
    iVar1 = EVP_CIPHER_CTX_copy(*(EVP_CIPHER_CTX **)out,*(EVP_CIPHER_CTX **)in);
    if (iVar1 != 0) {
      memcpy(out + 8,in + 8,__n);
      memcpy(out + 0x28,in + 0x28,__n);
      memcpy(out + 0x48,in + 0x48,__n);
      memcpy(out + 0x68,in + 0x68,__n);
      *(undefined4 *)(out + 0x88) = *(undefined4 *)(in + 0x88);
      return 1;
    }
  }
  return 0;
}



undefined8
ossl_cmac_init(undefined8 *param_1,long param_2,long param_3,EVP_CIPHER *param_4,ENGINE *param_5,
              undefined8 param_6)

{
  uchar *out;
  int iVar1;
  uint inl;
  long lVar2;
  
  if (param_4 == (EVP_CIPHER *)0x0 && param_2 == 0) {
    if (param_5 == (ENGINE *)0x0 && param_3 == 0) {
      if (*(int *)(param_1 + 0x11) == -1) {
        return 0;
      }
      iVar1 = EVP_EncryptInit_ex2(*param_1,0,0,zero_iv_0,param_6);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = EVP_CIPHER_CTX_get_block_size(*param_1);
      if (iVar1 == 0) {
        return 0;
      }
      memset(param_1 + 9,0,(long)iVar1);
      *(undefined4 *)(param_1 + 0x11) = 0;
    }
  }
  else {
    if (param_4 != (EVP_CIPHER *)0x0) {
      *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
      if (param_5 == (ENGINE *)0x0) {
        iVar1 = EVP_EncryptInit_ex2((EVP_CIPHER_CTX *)*param_1,param_4,0,0,param_6);
      }
      else {
        iVar1 = EVP_EncryptInit_ex((EVP_CIPHER_CTX *)*param_1,param_4,param_5,(uchar *)0x0,
                                   (uchar *)0x0);
      }
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
      lVar2 = EVP_CIPHER_CTX_get0_cipher(*param_1);
      if (((lVar2 != 0) &&
          (iVar1 = EVP_CIPHER_CTX_set_key_length((EVP_CIPHER_CTX *)*param_1,(int)param_3), 0 < iVar1
          )) && (iVar1 = EVP_EncryptInit_ex2(*param_1,0,param_2,zero_iv_0,param_6), iVar1 != 0)) {
        inl = EVP_CIPHER_CTX_get_block_size(*param_1);
        if (-1 < (int)inl) {
          out = (uchar *)(param_1 + 9);
          iVar1 = EVP_Cipher((EVP_CIPHER_CTX *)*param_1,out,zero_iv_0,inl);
          if (0 < iVar1) {
            make_kn(param_1 + 1,out,inl);
            make_kn(param_1 + 5,param_1 + 1);
            OPENSSL_cleanse(out,(long)(int)inl);
            iVar1 = EVP_EncryptInit_ex2(*param_1,0,0,zero_iv_0,param_6);
            if (iVar1 != 0) {
              memset(out,0,(long)(int)inl);
              *(undefined4 *)(param_1 + 0x11) = 0;
              return 1;
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}



int CMAC_Init(CMAC_CTX *ctx,void *key,size_t keylen,EVP_CIPHER *cipher,ENGINE *impl)

{
  int iVar1;
  
  iVar1 = ossl_cmac_init();
  return iVar1;
}



int CMAC_Update(CMAC_CTX *ctx,void *data,size_t dlen)

{
  uint inl;
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong __n;
  long in_FS_OFFSET;
  uchar *local_860;
  uchar local_848 [2056];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(ctx + 0x88) == -1) {
LAB_00100540:
    iVar2 = 0;
  }
  else {
    if (dlen != 0) {
      inl = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)ctx);
      if (inl == 0) goto LAB_00100540;
      iVar2 = *(int *)(ctx + 0x88);
      if (0 < iVar2) {
        uVar4 = (long)(int)(inl - iVar2);
        if (dlen < (ulong)(long)(int)(inl - iVar2)) {
          uVar4 = dlen;
        }
        memcpy(ctx + 0x68 + iVar2,data,uVar4);
        *(int *)(ctx + 0x88) = *(int *)(ctx + 0x88) + (int)uVar4;
        dlen = dlen - uVar4;
        if (dlen == 0) goto LAB_0010046d;
        iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)(ctx + 0x48),(uchar *)(ctx + 0x68),inl);
        if (iVar2 < 1) goto LAB_00100540;
        data = (void *)((long)data + uVar4);
      }
      __n = (ulong)(int)inl;
      iVar2 = (int)(0x800 / (long)(int)inl);
      uVar4 = (ulong)iVar2;
      if (uVar4 == 0) {
        if (__n < dlen) {
          do {
            iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)(ctx + 0x48),(uchar *)data,inl);
            if (iVar2 < 1) goto LAB_00100540;
            dlen = dlen - __n;
            data = (void *)((long)data + __n);
          } while (__n < dlen);
        }
      }
      else {
        uVar3 = (dlen - 1) / __n;
        if (uVar4 < uVar3) {
          do {
            iVar1 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,local_848,(uchar *)data,iVar2 * inl);
            if (iVar1 < 1) goto LAB_00100540;
            uVar3 = uVar3 - uVar4;
            dlen = dlen - __n * uVar4;
            data = (void *)((long)data + __n * uVar4);
          } while (uVar4 < uVar3);
        }
        else if (dlen - 1 < __n) goto LAB_00100660;
        local_860 = local_848;
        iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,local_860,(uchar *)data,inl * (int)uVar3);
        if (iVar2 < 1) goto LAB_00100540;
        dlen = dlen - __n * uVar3;
        data = (void *)((long)data + __n * uVar3);
        memcpy(ctx + 0x48,local_860 + (uVar3 - 1) * __n,__n);
      }
LAB_00100660:
      memcpy(ctx + 0x68,data,dlen);
      *(int *)(ctx + 0x88) = (int)dlen;
    }
LAB_0010046d:
    iVar2 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int CMAC_Final(CMAC_CTX *ctx,uchar *out,size_t *poutlen)

{
  uint uVar1;
  uint inl;
  int iVar2;
  long lVar3;
  
  if (*(int *)(ctx + 0x88) == -1) {
    return 0;
  }
  inl = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)ctx);
  if (inl == 0) {
LAB_00100780:
    iVar2 = 0;
  }
  else {
    if (poutlen != (size_t *)0x0) {
      *poutlen = (long)(int)inl;
    }
    if (out != (uchar *)0x0) {
      uVar1 = *(uint *)(ctx + 0x88);
      if (inl == uVar1) {
        if (0 < (int)inl) {
          lVar3 = 0;
          do {
            out[lVar3] = (byte)ctx[lVar3 + 0x68] ^ (byte)ctx[lVar3 + 8];
            lVar3 = lVar3 + 1;
          } while ((int)inl != lVar3);
        }
      }
      else {
        ctx[(long)(int)uVar1 + 0x68] = (CMAC_CTX)0x80;
        if (1 < (int)(inl - uVar1)) {
          memset(ctx + (long)(int)uVar1 + 0x69,0,(long)(int)((inl - uVar1) + -1));
        }
        if (0 < (int)inl) {
          lVar3 = 0;
          do {
            out[lVar3] = (byte)ctx[lVar3 + 0x68] ^ (byte)ctx[lVar3 + 0x28];
            lVar3 = lVar3 + 1;
          } while ((int)inl != lVar3);
        }
      }
      iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,out,out,inl);
      if (iVar2 < 1) {
        OPENSSL_cleanse(out,(long)(int)inl);
        goto LAB_00100780;
      }
    }
    iVar2 = 1;
  }
  return iVar2;
}



int CMAC_resume(CMAC_CTX *ctx)

{
  int iVar1;
  
  if (*(int *)(ctx + 0x88) != -1) {
    iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                               (uchar *)(ctx + 0x48));
    return iVar1;
  }
  return 0;
}



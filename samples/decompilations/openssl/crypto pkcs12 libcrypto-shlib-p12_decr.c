
uchar * PKCS12_pbe_crypt_ex(undefined8 *param_1,undefined8 param_2,int param_3,uchar *param_4,
                           int param_5,undefined8 *param_6,int *param_7,undefined4 param_8,
                           undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar3;
  ulong uVar4;
  uchar *out;
  char *pcVar5;
  long in_FS_OFFSET;
  int *outl;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  local_44 = 0;
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
    ERR_new();
    uVar3 = 0x20;
LAB_001002d8:
    ERR_set_debug("crypto/pkcs12/p12_decr.c",uVar3,"PKCS12_pbe_crypt_ex");
    out = (uchar *)0x0;
    ERR_set_error(0x23,0x80006,0);
  }
  else {
    iVar1 = EVP_PBE_CipherInit_ex
                      (*param_1,param_2,param_3,param_1[1],ctx,param_8,param_9,param_10,param_2);
    if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_CTX_get_block_size(ctx);
      if (iVar1 == 0) {
        ERR_new();
        out = (uchar *)0x0;
        ERR_set_debug("crypto/pkcs12/p12_decr.c",0x32,"PKCS12_pbe_crypt_ex");
        ERR_set_error(0x23,0xc0102,0);
        goto LAB_00100165;
      }
      iVar1 = iVar1 + param_5;
      uVar3 = EVP_CIPHER_CTX_get0_cipher(ctx);
      uVar4 = EVP_CIPHER_get_flags(uVar3);
      if ((uVar4 & 0x2000000) == 0) {
LAB_001000c7:
        out = (uchar *)CRYPTO_malloc(iVar1,"crypto/pkcs12/p12_decr.c",0x4e);
        if (out != (uchar *)0x0) {
          outl = &local_48;
          iVar2 = EVP_CipherUpdate(ctx,out,outl,param_4,param_5);
          iVar1 = local_48;
          if (iVar2 == 0) {
            CRYPTO_free(out);
            ERR_new();
            uVar3 = 0x54;
            goto LAB_001002d8;
          }
          iVar2 = EVP_CipherFinal_ex(ctx,out + local_48,outl);
          if (iVar2 != 0) {
            iVar1 = iVar1 + local_48;
            uVar3 = EVP_CIPHER_CTX_get0_cipher(ctx);
            uVar4 = EVP_CIPHER_get_flags(uVar3);
            if ((uVar4 & 0x2000000) != 0) {
              iVar2 = EVP_CIPHER_CTX_is_encrypting(ctx);
              if (iVar2 != 0) {
                iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x10,local_44,out + iVar1);
                if (iVar2 < 0) {
                  CRYPTO_free(out);
                  ERR_new();
                  uVar3 = 0x69;
                  goto LAB_00100210;
                }
                iVar1 = iVar1 + local_44;
              }
            }
            if (param_7 != (int *)0x0) {
              *param_7 = iVar1;
            }
            if (param_6 != (undefined8 *)0x0) {
              *param_6 = out;
            }
            goto LAB_00100165;
          }
          CRYPTO_free(out);
          ERR_new();
          ERR_set_debug("crypto/pkcs12/p12_decr.c",0x5c,"PKCS12_pbe_crypt_ex");
          pcVar5 = "maybe wrong password";
          if (param_3 == 0) {
            pcVar5 = "empty password";
          }
          ERR_set_error(0x23,0x74,pcVar5);
        }
      }
      else {
        iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x16,0,&local_44);
        if (-1 < iVar2) {
          iVar2 = EVP_CIPHER_CTX_is_encrypting(ctx);
          if (iVar2 == 0) {
            if (param_5 < local_44) {
              ERR_new();
              ERR_set_debug("crypto/pkcs12/p12_decr.c",0x42,"PKCS12_pbe_crypt_ex");
              ERR_set_error(0x23,0x77,0);
              goto LAB_00100228;
            }
            param_5 = param_5 - local_44;
            iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,local_44,param_4 + param_5);
            if (iVar2 < 0) {
              ERR_new();
              uVar3 = 0x48;
              goto LAB_00100210;
            }
          }
          else {
            iVar1 = iVar1 + local_44;
          }
          goto LAB_001000c7;
        }
        ERR_new();
        uVar3 = 0x3a;
LAB_00100210:
        ERR_set_debug("crypto/pkcs12/p12_decr.c",uVar3,"PKCS12_pbe_crypt_ex");
        ERR_set_error(0x23,0xc0103,0);
      }
    }
LAB_00100228:
    out = (uchar *)0x0;
  }
LAB_00100165:
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return out;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uchar * PKCS12_pbe_crypt(X509_ALGOR *algor,char *pass,int passlen,uchar *in,int inlen,uchar **data,
                        int *datalen,int en_de)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)PKCS12_pbe_crypt_ex();
  return puVar1;
}



ASN1_VALUE *
PKCS12_item_decrypt_d2i_ex
          (undefined8 param_1,ASN1_ITEM *param_2,undefined8 param_3,undefined4 param_4,
          undefined4 *param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  int local_34;
  uchar *local_30;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  local_30 = (uchar *)0x0;
  lVar1 = PKCS12_pbe_crypt_ex(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,
                              &local_30,&local_34,0,param_7,param_8);
  if (lVar1 == 0) {
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    local_28 = local_30;
    pAVar2 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,(long)local_34,param_2);
    if (param_6 != 0) {
      OPENSSL_cleanse(local_30,(long)local_34);
    }
    if (pAVar2 == (ASN1_VALUE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_decr.c",0x9f,"PKCS12_item_decrypt_d2i_ex");
      ERR_set_error(0x23,0x65,0);
    }
    CRYPTO_free(local_30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * PKCS12_item_decrypt_d2i
                 (X509_ALGOR *algor,ASN1_ITEM *it,char *pass,int passlen,ASN1_OCTET_STRING *oct,
                 int zbuf)

{
  void *pvVar1;
  
  pvVar1 = (void *)PKCS12_item_decrypt_d2i_ex();
  return pvVar1;
}



ASN1_OCTET_STRING *
PKCS12_item_i2d_encrypt_ex
          (undefined8 param_1,ASN1_ITEM *param_2,undefined8 param_3,undefined4 param_4,
          ASN1_VALUE *param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ASN1_OCTET_STRING *a;
  long lVar2;
  ASN1_OCTET_STRING *pAVar3;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  a = ASN1_OCTET_STRING_new();
  if (a == (ASN1_OCTET_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_decr.c",0xbd,"PKCS12_item_i2d_encrypt_ex");
    ERR_set_error(0x23,0x8000d,0);
  }
  else {
    iVar1 = ASN1_item_i2d(param_5,&local_48,param_2);
    if (local_48 == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_decr.c",0xc2,"PKCS12_item_i2d_encrypt_ex");
      ERR_set_error(0x23,0x66,0);
    }
    else {
      lVar2 = PKCS12_pbe_crypt_ex(param_1,param_3,param_4,local_48,iVar1,&a->data,a,1,param_7,
                                  param_8);
      if (lVar2 != 0) {
        if (param_6 != 0) {
          OPENSSL_cleanse(local_48,(long)iVar1);
        }
        CRYPTO_free(local_48);
        pAVar3 = a;
        goto LAB_00100648;
      }
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_decr.c",199,"PKCS12_item_i2d_encrypt_ex");
      ERR_set_error(0x23,0x67,0);
      CRYPTO_free(local_48);
    }
  }
  pAVar3 = (ASN1_OCTET_STRING *)0x0;
  ASN1_OCTET_STRING_free(a);
LAB_00100648:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_OCTET_STRING *
PKCS12_item_i2d_encrypt(X509_ALGOR *algor,ASN1_ITEM *it,char *pass,int passlen,void *obj,int zbuf)

{
  ASN1_OCTET_STRING *pAVar1;
  
  pAVar1 = (ASN1_OCTET_STRING *)PKCS12_item_i2d_encrypt_ex();
  return pAVar1;
}




undefined8 shake_ctrl(long param_1,int param_2,int param_3)

{
  if ((param_1 != 0) && (param_2 == 3)) {
    *(long *)(*(long *)(param_1 + 0x20) + 0x178) = (long)param_3;
    return 1;
  }
  return 0;
}



void sha1_int_ctrl(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    param_1 = EVP_MD_CTX_get0_md_data();
  }
  ossl_sha1_ctrl(param_1,param_2,param_3,param_4);
  return;
}



void sha1_final(undefined8 param_1,uchar *param_2)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Final(param_2,c);
  return;
}



void sha1_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Update(c,param_2,param_3);
  return;
}



void sha1_init(void)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Init(c);
  return;
}



void sha224_final(undefined8 param_1,uchar *param_2)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA224_Final(param_2,c);
  return;
}



void sha224_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA224_Update(c,param_2,param_3);
  return;
}



void sha224_init(void)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA224_Init(c);
  return;
}



void sha256_final(undefined8 param_1,uchar *param_2)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA256_Final(param_2,c);
  return;
}



void sha256_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA256_Update(c,param_2,param_3);
  return;
}



void sha256_init(void)

{
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_get0_md_data();
  SHA256_Init(c);
  return;
}



void sha512_final(undefined8 param_1,uchar *param_2)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Final(param_2,c);
  return;
}



void sha512_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Update(c,param_2,param_3);
  return;
}



void sha512_224_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  sha512_224_init(uVar1);
  return;
}



void sha512_256_int_init(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  sha512_256_init(uVar1);
  return;
}



void sha384_final(undefined8 param_1,uchar *param_2)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA384_Final(param_2,c);
  return;
}



void sha384_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA384_Update(c,param_2,param_3);
  return;
}



void sha384_init(void)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA384_Init(c);
  return;
}



void sha512_init(void)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Init(c);
  return;
}



void sha3_int_final(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = EVP_MD_CTX_get0_md_data();
  ossl_sha3_final(lVar1,param_2,*(undefined8 *)(lVar1 + 0x178));
  return;
}



void sha3_int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_sha3_update(uVar1,param_2,param_3);
  return;
}



void sha3_int_init(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 8);
  uVar2 = EVP_MD_CTX_get0_md_data();
  ossl_sha3_init(uVar2,6,(long)(iVar1 << 3));
  return;
}



void shake_init(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 8);
  uVar2 = EVP_MD_CTX_get0_md_data();
  ossl_sha3_init(uVar2,0x1f,(long)(iVar1 << 3));
  return;
}



void sha512_256_int_final(undefined8 param_1,uchar *param_2)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Final(param_2,c);
  return;
}



void sha512_224_int_final(undefined8 param_1,uchar *param_2)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Final(param_2,c);
  return;
}



void sha512_224_int_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Update(c,param_2,param_3);
  return;
}



void sha512_256_int_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_get0_md_data();
  SHA512_Update(c,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_sha1(void)

{
  return (EVP_MD *)sha1_md;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_sha224(void)

{
  return (EVP_MD *)sha224_md;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_sha256(void)

{
  return (EVP_MD *)sha256_md;
}



undefined1 * EVP_sha512_224(void)

{
  return sha512_224_md;
}



undefined1 * EVP_sha512_256(void)

{
  return sha512_256_md;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_sha384(void)

{
  return (EVP_MD *)sha384_md;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_sha512(void)

{
  return (EVP_MD *)sha512_md;
}



undefined1 * EVP_sha3_224(void)

{
  return sha3_224_md_5;
}



undefined1 * EVP_sha3_256(void)

{
  return sha3_256_md_4;
}



undefined1 * EVP_sha3_384(void)

{
  return sha3_384_md_3;
}



undefined1 * EVP_sha3_512(void)

{
  return sha3_512_md_2;
}



undefined1 * EVP_shake128(void)

{
  return shake128_md_1;
}



undefined1 * EVP_shake256(void)

{
  return shake256_md_0;
}



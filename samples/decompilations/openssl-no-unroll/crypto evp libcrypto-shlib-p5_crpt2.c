
bool ossl_pkcs5_pbkdf2_hmac_ex
               (char *param_1,int param_2,undefined *param_3,int param_4,undefined4 param_5,
               undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_14c [4];
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = 1;
  local_14c[0] = param_5;
  uVar2 = EVP_MD_get0_name(param_6);
  if (param_1 == (char *)0x0) {
    param_2 = 0;
    param_1 = "";
  }
  else if (param_2 == -1) {
    sVar5 = strlen(param_1);
    param_2 = (int)sVar5;
  }
  if ((param_3 == (undefined *)0x0) && (param_4 == 0)) {
    param_3 = &_LC0;
  }
  lVar3 = EVP_KDF_fetch(param_9,"PBKDF2",param_10);
  if (lVar3 != 0) {
    lVar4 = EVP_KDF_CTX_new(lVar3);
    EVP_KDF_free(lVar3);
    if (lVar4 != 0) {
      OSSL_PARAM_construct_octet_string(&local_188,&_LC2,param_1,(long)param_2);
      local_138 = local_188;
      uStack_130 = uStack_180;
      local_128 = local_178;
      uStack_120 = uStack_170;
      local_118 = local_168;
      OSSL_PARAM_construct_int(&local_188,"pkcs5",&local_13c);
      local_f0 = local_168;
      local_110 = local_188;
      uStack_108 = uStack_180;
      local_100 = local_178;
      uStack_f8 = uStack_170;
      OSSL_PARAM_construct_octet_string(&local_188,&_LC4,param_3,(long)param_4);
      local_e8 = local_188;
      uStack_e0 = uStack_180;
      local_d8 = local_178;
      uStack_d0 = uStack_170;
      local_c8 = local_168;
      OSSL_PARAM_construct_int(&local_188,&_LC5,local_14c);
      local_c0 = local_188;
      uStack_b8 = uStack_180;
      local_b0 = local_178;
      uStack_a8 = uStack_170;
      local_a0 = local_168;
      OSSL_PARAM_construct_utf8_string(&local_188,"digest",uVar2,0);
      local_78 = local_168;
      local_98 = local_188;
      uStack_90 = uStack_180;
      local_88 = local_178;
      uStack_80 = uStack_170;
      OSSL_PARAM_construct_end(&local_188);
      local_70 = local_188;
      uStack_68 = uStack_180;
      local_50 = local_168;
      local_60 = local_178;
      uStack_58 = uStack_170;
      iVar1 = EVP_KDF_derive(lVar4,param_8,(long)param_7,&local_138);
      bVar6 = iVar1 == 1;
      EVP_KDF_CTX_free(lVar4);
      goto LAB_00100262;
    }
  }
  bVar6 = false;
LAB_00100262:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS5_PBKDF2_HMAC(char *pass,int passlen,uchar *salt,int saltlen,int iter,EVP_MD *digest,
                     int keylen,uchar *out)

{
  int iVar1;
  
  iVar1 = ossl_pkcs5_pbkdf2_hmac_ex();
  return iVar1;
}



int PKCS5_PBKDF2_HMAC_SHA1
              (char *pass,int passlen,uchar *salt,int saltlen,int iter,int keylen,uchar *out)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_MD_fetch(0,&_LC7,0);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = ossl_pkcs5_pbkdf2_hmac_ex(pass,passlen,salt,saltlen,iter,lVar2,keylen,out,0,0);
  }
  EVP_MD_free(lVar2);
  return iVar1;
}



undefined4
PKCS5_v2_PBE_keyivgen_ex
          (EVP_CIPHER_CTX *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  PBE2PARAM *a;
  EVP_CIPHER *pEVar4;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  code *local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = PBE2PARAM_it();
  a = (PBE2PARAM *)ASN1_TYPE_unpack_sequence(uVar3,param_4);
  if (a == (PBE2PARAM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/p5_crpt2.c",0x7f,"PKCS5_v2_PBE_keyivgen_ex");
    ERR_set_error(6,0x72,0);
  }
  else {
    iVar1 = OBJ_obj2nid(a->keyfunc->algorithm);
    iVar1 = EVP_PBE_find_ex(2,iVar1,0,0,0,&local_a0);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p5_crpt2.c",0x86,"PKCS5_v2_PBE_keyivgen_ex");
      ERR_set_error(6,0x7c,0);
    }
    else {
      iVar1 = OBJ_obj2txt(local_98,0x50,a->encryption->algorithm,0);
      if (0 < iVar1) {
        ERR_set_mark();
        pEVar4 = (EVP_CIPHER *)EVP_CIPHER_fetch(param_8,local_98,param_9);
        cipher = pEVar4;
        if (pEVar4 == (EVP_CIPHER *)0x0) {
          cipher = EVP_get_cipherbyname(local_98);
          if (cipher == (EVP_CIPHER *)0x0) {
            ERR_clear_last_mark();
            ERR_new();
            uVar3 = 0x9a;
            goto LAB_00100541;
          }
        }
        ERR_pop_to_mark();
        iVar1 = EVP_CipherInit_ex(param_1,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,param_7);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          iVar1 = EVP_CIPHER_asn1_to_param(param_1,a->encryption->parameter);
          if (iVar1 < 1) {
            ERR_new();
            uVar2 = 0;
            ERR_set_debug("crypto/evp/p5_crpt2.c",0xa3,"PKCS5_v2_PBE_keyivgen_ex");
            ERR_set_error(6,0x7a,0);
          }
          else {
            uVar2 = (*local_a0)(param_1,param_2,param_3,a->keyfunc->parameter,0,0,param_7,param_8,
                                param_9);
          }
        }
        goto LAB_001004a5;
      }
      ERR_new();
      uVar3 = 0x8e;
LAB_00100541:
      ERR_set_debug("crypto/evp/p5_crpt2.c",uVar3,"PKCS5_v2_PBE_keyivgen_ex");
      ERR_set_error(6,0x6b,0);
    }
  }
  uVar2 = 0;
  pEVar4 = (EVP_CIPHER *)0x0;
LAB_001004a5:
  EVP_CIPHER_free(pEVar4);
  PBE2PARAM_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS5_v2_PBE_keyivgen
              (EVP_CIPHER_CTX *ctx,char *pass,int passlen,ASN1_TYPE *param,EVP_CIPHER *cipher,
              EVP_MD *md,int en_de)

{
  int iVar1;
  
  iVar1 = PKCS5_v2_PBE_keyivgen_ex();
  return iVar1;
}



ulong PKCS5_v2_PBKDF2_keyivgen_ex
                (EVP_CIPHER_CTX *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                undefined8 param_9)

{
  ASN1_STRING *pAVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  PBKDF2PARAM *a;
  size_t sVar8;
  char *pcVar9;
  EVP_MD *pEVar10;
  ulong uVar11;
  EVP_MD *pEVar12;
  size_t len;
  long in_FS_OFFSET;
  int local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = EVP_CIPHER_CTX_get0_cipher();
  if (lVar6 == 0) {
    pEVar10 = (EVP_MD *)0x0;
    len = 0;
    uVar3 = 0;
    ERR_new();
    ERR_set_debug("crypto/evp/p5_crpt2.c",0xc3,"PKCS5_v2_PBKDF2_keyivgen_ex");
    ERR_set_error(6,0x83,0);
    a = (PBKDF2PARAM *)0x0;
    goto LAB_001007d0;
  }
  uVar3 = EVP_CIPHER_CTX_get_key_length(param_1);
  len = (size_t)(int)uVar3;
  if (0x40 < uVar3) {
    OPENSSL_die("assertion failed: keylen <= sizeof(key)","crypto/evp/p5_crpt2.c",199);
    uVar11 = PKCS5_v2_PBKDF2_keyivgen_ex();
    return uVar11;
  }
  uVar7 = PBKDF2PARAM_it();
  a = (PBKDF2PARAM *)ASN1_TYPE_unpack_sequence(uVar7,param_4);
  if (a == (PBKDF2PARAM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/p5_crpt2.c",0xce,"PKCS5_v2_PBKDF2_keyivgen_ex");
    uVar7 = 0x72;
LAB_0010090c:
    ERR_set_error(6,uVar7,0);
  }
  else {
    iVar4 = EVP_CIPHER_CTX_get_key_length(param_1);
    if (iVar4 < 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p5_crpt2.c",0xd4,"PKCS5_v2_PBKDF2_keyivgen_ex");
      uVar7 = 0x82;
      goto LAB_0010090c;
    }
    len = (size_t)iVar4;
    if (a->keylength != (ASN1_INTEGER *)0x0) {
      sVar8 = ASN1_INTEGER_get(a->keylength);
      if (sVar8 != len) {
        ERR_new();
        ERR_set_debug("crypto/evp/p5_crpt2.c",0xdc,"PKCS5_v2_PBKDF2_keyivgen_ex");
        uVar7 = 0x7b;
        goto LAB_0010090c;
      }
    }
    iVar5 = 0xa3;
    if (a->prf != (X509_ALGOR *)0x0) {
      iVar5 = OBJ_obj2nid(a->prf->algorithm);
    }
    iVar5 = EVP_PBE_find(1,iVar5,(int *)0x0,&local_8c,(undefined1 **)0x0);
    if (iVar5 == 0) {
      ERR_new();
      pEVar10 = (EVP_MD *)0x0;
      ERR_set_debug("crypto/evp/p5_crpt2.c",0xe6,"PKCS5_v2_PBKDF2_keyivgen_ex");
      ERR_set_error(6,0x7d,0);
      uVar3 = 0;
      goto LAB_001007d0;
    }
    ERR_set_mark();
    pcVar9 = OBJ_nid2sn(local_8c);
    pEVar10 = (EVP_MD *)EVP_MD_fetch(param_8,pcVar9,param_9);
    pEVar12 = pEVar10;
    if (pEVar10 != (EVP_MD *)0x0) {
LAB_00100752:
      ERR_pop_to_mark();
      if (a->salt->type == 4) {
        pAVar1 = (a->salt->value).asn1_string;
        puVar2 = pAVar1->data;
        iVar5 = pAVar1->length;
        uVar11 = ASN1_INTEGER_get(a->iter);
        iVar4 = ossl_pkcs5_pbkdf2_hmac_ex
                          (param_2,param_3,puVar2,iVar5,uVar11 & 0xffffffff,pEVar12,iVar4,local_88,
                           param_8,param_9);
        if (iVar4 != 0) {
          uVar3 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_88,(uchar *)0x0,
                                    param_7);
          goto LAB_001007d0;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/evp/p5_crpt2.c",0xf6,"PKCS5_v2_PBKDF2_keyivgen_ex");
        ERR_set_error(6,0x7e,0);
      }
      uVar3 = 0;
      goto LAB_001007d0;
    }
    pcVar9 = OBJ_nid2sn(local_8c);
    pEVar12 = EVP_get_digestbyname(pcVar9);
    if (pEVar12 != (EVP_MD *)0x0) goto LAB_00100752;
    ERR_clear_last_mark();
    ERR_new();
    ERR_set_debug("crypto/evp/p5_crpt2.c",0xf0,"PKCS5_v2_PBKDF2_keyivgen_ex");
    ERR_set_error(6,0x7d,0);
  }
  pEVar10 = (EVP_MD *)0x0;
  uVar3 = 0;
LAB_001007d0:
  OPENSSL_cleanse(local_88,len);
  PBKDF2PARAM_free(a);
  EVP_MD_free(pEVar10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void PKCS5_v2_PBKDF2_keyivgen(void)

{
  PKCS5_v2_PBKDF2_keyivgen_ex();
  return;
}



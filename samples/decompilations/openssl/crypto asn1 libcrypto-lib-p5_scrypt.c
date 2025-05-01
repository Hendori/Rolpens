
undefined1 * SCRYPT_PARAMS_it(void)

{
  return local_it_3;
}



void d2i_SCRYPT_PARAMS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SCRYPT_PARAMS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_SCRYPT_PARAMS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SCRYPT_PARAMS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void SCRYPT_PARAMS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SCRYPT_PARAMS_it();
  ASN1_item_new(it);
  return;
}



void SCRYPT_PARAMS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SCRYPT_PARAMS_it();
  ASN1_item_free(param_1,it);
  return;
}



X509_ALGOR *
PKCS5_pbe2_set_scrypt
          (EVP_CIPHER *param_1,void *param_2,int param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  PBE2PARAM *a;
  ASN1_OBJECT *pAVar3;
  ASN1_TYPE *pAVar4;
  EVP_CIPHER_CTX *ctx;
  long *plVar5;
  ASN1_INTEGER *pAVar6;
  X509_ALGOR *pXVar7;
  undefined8 uVar8;
  long lVar9;
  X509_ALGOR *pXVar10;
  long in_FS_OFFSET;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (EVP_CIPHER *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/p5_scrypt.c",0x36,"PKCS5_pbe2_set_scrypt");
    uVar8 = 0xc0102;
LAB_001003f4:
    ERR_set_error(0xd,uVar8,0);
LAB_00100400:
    a = (PBE2PARAM *)0x0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    pXVar7 = (X509_ALGOR *)0x0;
  }
  else {
    iVar1 = EVP_PBE_scrypt(0,0,0,0,param_5,param_6,param_7,0,0,0);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/p5_scrypt.c",0x3b,"PKCS5_pbe2_set_scrypt");
      uVar8 = 0xe3;
      goto LAB_001003f4;
    }
    iVar1 = EVP_CIPHER_get_type(param_1);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/p5_scrypt.c",0x41,"PKCS5_pbe2_set_scrypt");
      ERR_set_error(0xd,0x6c,0);
      goto LAB_00100400;
    }
    a = PBE2PARAM_new();
    if (a == (PBE2PARAM *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/p5_scrypt.c",0x47,"PKCS5_pbe2_set_scrypt");
      ERR_set_error(0xd,0x8000d,0);
      goto LAB_00100400;
    }
    pXVar7 = a->encryption;
    pAVar3 = OBJ_nid2obj(iVar1);
    pXVar7->algorithm = pAVar3;
    pAVar4 = ASN1_TYPE_new();
    pXVar7->parameter = pAVar4;
    if (pAVar4 == (ASN1_TYPE *)0x0) {
      ERR_new();
      uVar8 = 0x51;
LAB_001003ae:
      ERR_set_debug("crypto/asn1/p5_scrypt.c",uVar8,"PKCS5_pbe2_set_scrypt");
      ERR_set_error(0xd,0x8000d,0);
LAB_001003c6:
      ctx = (EVP_CIPHER_CTX *)0x0;
      pXVar7 = (X509_ALGOR *)0x0;
    }
    else {
      iVar2 = EVP_CIPHER_get_iv_length(param_1);
      if (iVar2 != 0) {
        if (param_4 != 0) {
          iVar2 = EVP_CIPHER_get_iv_length(param_1);
          __memcpy_chk(local_58,param_4,(long)iVar2);
          goto LAB_0010019a;
        }
        iVar2 = EVP_CIPHER_get_iv_length(param_1);
        iVar2 = RAND_bytes(local_58,iVar2);
        if (0 < iVar2) goto LAB_0010019a;
        goto LAB_001003c6;
      }
LAB_0010019a:
      ctx = EVP_CIPHER_CTX_new();
      if (ctx == (EVP_CIPHER_CTX *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/p5_scrypt.c",0x5f,"PKCS5_pbe2_set_scrypt");
        ERR_set_error(0xd,0x80006,0);
        goto LAB_001003c6;
      }
      iVar2 = EVP_CipherInit_ex(ctx,param_1,(ENGINE *)0x0,(uchar *)0x0,local_58,0);
      if (iVar2 == 0) {
        pXVar7 = (X509_ALGOR *)0x0;
      }
      else {
        iVar2 = EVP_CIPHER_param_to_asn1(ctx,pXVar7->parameter);
        if (0 < iVar2) {
          lVar9 = 0;
          EVP_CIPHER_CTX_free(ctx);
          if (iVar1 == 0x25) {
            iVar1 = EVP_CIPHER_get_key_length(param_1);
            lVar9 = (long)iVar1;
          }
          X509_ALGOR_free(a->keyfunc);
          plVar5 = (long *)SCRYPT_PARAMS_new();
          if (plVar5 == (long *)0x0) {
            ERR_new();
            uVar8 = 0xa4;
LAB_00100551:
            ERR_set_debug("crypto/asn1/p5_scrypt.c",uVar8,"pkcs5_scrypt_set");
            ERR_set_error(0xd,0x8000d,0);
LAB_00100380:
            pXVar7 = (X509_ALGOR *)0x0;
          }
          else {
            if (param_3 == 0) {
              param_3 = 0x10;
            }
            iVar1 = ASN1_STRING_set((ASN1_STRING *)*plVar5,param_2,param_3);
            if (iVar1 == 0) {
              ERR_new();
              uVar8 = 0xad;
              goto LAB_00100551;
            }
            if ((param_2 == (void *)0x0) &&
               (iVar1 = RAND_bytes(*(uchar **)(*plVar5 + 8),param_3), iVar1 < 1)) goto LAB_00100380;
            iVar1 = ASN1_INTEGER_set_uint64(plVar5[1],param_5);
            if (iVar1 == 0) {
              ERR_new();
              uVar8 = 0xb5;
              goto LAB_00100551;
            }
            iVar1 = ASN1_INTEGER_set_uint64(plVar5[2],param_6);
            if (iVar1 == 0) {
              ERR_new();
              uVar8 = 0xba;
              goto LAB_00100551;
            }
            iVar1 = ASN1_INTEGER_set_uint64(plVar5[3],param_7);
            if (iVar1 == 0) {
              ERR_new();
              uVar8 = 0xbf;
              goto LAB_00100551;
            }
            if (lVar9 != 0) {
              pAVar6 = ASN1_INTEGER_new();
              plVar5[4] = (long)pAVar6;
              if (pAVar6 == (ASN1_INTEGER *)0x0) {
                ERR_new(0);
                uVar8 = 200;
              }
              else {
                iVar1 = ASN1_INTEGER_set_int64(pAVar6,lVar9);
                if (iVar1 != 0) goto LAB_001002ab;
                ERR_new();
                uVar8 = 0xcc;
              }
              goto LAB_00100551;
            }
LAB_001002ab:
            pXVar7 = X509_ALGOR_new();
            if (pXVar7 == (X509_ALGOR *)0x0) {
              ERR_new();
              uVar8 = 0xd5;
              goto LAB_00100551;
            }
            pAVar3 = OBJ_nid2obj(0x3cd);
            pXVar7->algorithm = pAVar3;
            uVar8 = SCRYPT_PARAMS_it();
            lVar9 = ASN1_TYPE_pack_sequence(uVar8,plVar5,&pXVar7->parameter);
            if (lVar9 != 0) {
              SCRYPT_PARAMS_free(plVar5);
              a->keyfunc = pXVar7;
              pXVar7 = X509_ALGOR_new();
              if (pXVar7 == (X509_ALGOR *)0x0) {
                ERR_new();
                uVar8 = 0x81;
                goto LAB_001003ae;
              }
              pAVar3 = OBJ_nid2obj(0xa1);
              pXVar7->algorithm = pAVar3;
              uVar8 = PBE2PARAM_it();
              lVar9 = ASN1_TYPE_pack_sequence(uVar8,a,&pXVar7->parameter);
              if (lVar9 != 0) {
                PBE2PARAM_free(a);
                pXVar10 = pXVar7;
                goto LAB_00100339;
              }
              ERR_new();
              ERR_set_debug("crypto/asn1/p5_scrypt.c",0x8b,"PKCS5_pbe2_set_scrypt");
              ERR_set_error(0xd,0x8000d,0);
              ctx = (EVP_CIPHER_CTX *)0x0;
              goto LAB_00100407;
            }
            ERR_new();
            ERR_set_debug("crypto/asn1/p5_scrypt.c",0xdf,"pkcs5_scrypt_set");
            ERR_set_error(0xd,0x8000d,0);
          }
          SCRYPT_PARAMS_free(plVar5);
          X509_ALGOR_free(pXVar7);
          a->keyfunc = (X509_ALGOR *)0x0;
          ERR_new();
          uVar8 = 0x79;
          goto LAB_001003ae;
        }
        ERR_new();
        pXVar7 = (X509_ALGOR *)0x0;
        ERR_set_debug("crypto/asn1/p5_scrypt.c",0x67,"PKCS5_pbe2_set_scrypt");
        ERR_set_error(0xd,0x72,0);
      }
    }
  }
LAB_00100407:
  PBE2PARAM_free(a);
  pXVar10 = (X509_ALGOR *)0x0;
  X509_ALGOR_free(pXVar7);
  EVP_CIPHER_CTX_free(ctx);
LAB_00100339:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pXVar10;
}



int PKCS5_v2_scrypt_keyivgen_ex
              (EVP_CIPHER_CTX *param_1,undefined8 param_2,int param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
              undefined8 param_9)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  size_t len;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  size_t local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get0_cipher();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/p5_scrypt.c",0xf9,"PKCS5_v2_scrypt_keyivgen_ex");
    ERR_set_error(6,0x83,0);
  }
  else {
    uVar3 = SCRYPT_PARAMS_it();
    puVar4 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar3,param_4);
    if (puVar4 != (undefined8 *)0x0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      if (iVar1 < 0) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("crypto/asn1/p5_scrypt.c",0x108,"PKCS5_v2_scrypt_keyivgen_ex");
        ERR_set_error(6,0x82,0);
        goto LAB_00100830;
      }
      len = (size_t)iVar1;
      if (puVar4[4] == 0) {
LAB_00100868:
        iVar1 = ASN1_INTEGER_get_uint64(&local_90,puVar4[1]);
        if (iVar1 == 0) {
LAB_00100887:
          ERR_new();
          ERR_set_debug("crypto/asn1/p5_scrypt.c",0x11d,"PKCS5_v2_scrypt_keyivgen_ex");
          ERR_set_error(6,0xab,0);
          goto LAB_0010081b;
        }
        iVar1 = ASN1_INTEGER_get_uint64(&local_98,puVar4[2]);
        if (iVar1 == 0) goto LAB_00100887;
        iVar1 = ASN1_INTEGER_get_uint64(&local_a0,puVar4[3]);
        if (iVar1 == 0) goto LAB_00100887;
        iVar1 = EVP_PBE_scrypt_ex(0,0,0,0,local_90,local_98,local_a0,0,0,0,param_8,param_9);
        if (iVar1 == 0) goto LAB_00100887;
        iVar1 = EVP_PBE_scrypt_ex(param_2,(long)param_3,*(undefined8 *)((int *)*puVar4 + 2),
                                  (long)*(int *)*puVar4,local_90,local_98,local_a0,0,local_88,len,
                                  param_8,param_9);
        if (iVar1 == 0) goto LAB_0010081b;
        iVar1 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_88,(uchar *)0x0,
                                  param_7);
      }
      else {
        iVar1 = ASN1_INTEGER_get_uint64();
        if ((iVar1 != 0) && (local_90 == len)) goto LAB_00100868;
        ERR_new();
        ERR_set_debug("crypto/asn1/p5_scrypt.c",0x113,"PKCS5_v2_scrypt_keyivgen_ex");
        ERR_set_error(6,0x7b,0);
LAB_0010081b:
        iVar1 = 0;
      }
      if (len != 0) {
        OPENSSL_cleanse(local_88,len);
      }
      goto LAB_00100830;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/p5_scrypt.c",0x102,"PKCS5_v2_scrypt_keyivgen_ex");
    ERR_set_error(6,0x72,0);
  }
  puVar4 = (undefined8 *)0x0;
  iVar1 = 0;
LAB_00100830:
  SCRYPT_PARAMS_free(puVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void PKCS5_v2_scrypt_keyivgen(void)

{
  PKCS5_v2_scrypt_keyivgen_ex();
  return;
}



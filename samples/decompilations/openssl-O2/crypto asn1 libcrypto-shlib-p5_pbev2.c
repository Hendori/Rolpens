
undefined1 * PBE2PARAM_it(void)

{
  return local_it_4;
}



PBE2PARAM * d2i_PBE2PARAM(PBE2PARAM **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PBE2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBE2PARAM_it();
  pPVar1 = (PBE2PARAM *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PBE2PARAM(PBE2PARAM *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PBE2PARAM_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PBE2PARAM * PBE2PARAM_new(void)

{
  ASN1_ITEM *it;
  PBE2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBE2PARAM_it();
  pPVar1 = (PBE2PARAM *)ASN1_item_new(it);
  return pPVar1;
}



void PBE2PARAM_free(PBE2PARAM *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBE2PARAM_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * PBKDF2PARAM_it(void)

{
  return local_it_3;
}



PBKDF2PARAM * d2i_PBKDF2PARAM(PBKDF2PARAM **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PBKDF2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBKDF2PARAM_it();
  pPVar1 = (PBKDF2PARAM *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PBKDF2PARAM(PBKDF2PARAM *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PBKDF2PARAM_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PBKDF2PARAM * PBKDF2PARAM_new(void)

{
  ASN1_ITEM *it;
  PBKDF2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBKDF2PARAM_it();
  pPVar1 = (PBKDF2PARAM *)ASN1_item_new(it);
  return pPVar1;
}



void PBKDF2PARAM_free(PBKDF2PARAM *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBKDF2PARAM_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * PBMAC1PARAM_it(void)

{
  return local_it_2;
}



void d2i_PBMAC1PARAM(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBMAC1PARAM_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_PBMAC1PARAM(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBMAC1PARAM_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void PBMAC1PARAM_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBMAC1PARAM_it();
  ASN1_item_new(it);
  return;
}



void PBMAC1PARAM_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBMAC1PARAM_it();
  ASN1_item_free(param_1,it);
  return;
}



X509_ALGOR *
PKCS5_pbkdf2_set_ex(int param_1,void *param_2,int param_3,int param_4,int param_5,undefined8 param_6
                   )

{
  ASN1_TYPE *pAVar1;
  int iVar2;
  PBKDF2PARAM *a;
  ASN1_OCTET_STRING *pAVar3;
  uchar *__dest;
  X509_ALGOR *pXVar4;
  ASN1_OBJECT *pAVar5;
  undefined8 uVar6;
  long lVar7;
  ASN1_INTEGER *a_00;
  size_t __n;
  
  a = PBKDF2PARAM_new();
  if (a == (PBKDF2PARAM *)0x0) {
    ERR_new();
    uVar6 = 0xbf;
  }
  else {
    pAVar3 = ASN1_OCTET_STRING_new();
    if (pAVar3 == (ASN1_OCTET_STRING *)0x0) {
      ERR_new();
      uVar6 = 0xc3;
    }
    else {
      pAVar1 = a->salt;
      (pAVar1->value).octet_string = pAVar3;
      pAVar1->type = 4;
      if (param_3 < 0) {
        ERR_new();
        pXVar4 = (X509_ALGOR *)0x0;
        ERR_set_debug("crypto/asn1/p5_pbev2.c",0xcb,"PKCS5_pbkdf2_set_ex");
        ERR_set_error(0xd,0x80106,0);
        goto LAB_00100510;
      }
      __n = (size_t)param_3;
      if (param_3 == 0) {
        __n = 0x10;
        param_3 = 0x10;
      }
      __dest = (uchar *)CRYPTO_malloc((int)__n,"crypto/asn1/p5_pbev2.c",0xd0);
      pAVar3->data = __dest;
      if (__dest == (uchar *)0x0) {
LAB_0010040a:
        pXVar4 = (X509_ALGOR *)0x0;
        goto LAB_00100510;
      }
      pAVar3->length = param_3;
      if (param_2 == (void *)0x0) {
        iVar2 = RAND_bytes_ex(param_6,__dest,__n,0);
        if (iVar2 < 1) {
          ERR_new();
          ERR_set_debug("crypto/asn1/p5_pbev2.c",0xd9,"PKCS5_pbkdf2_set_ex");
          ERR_set_error(0xd,0x80024,0);
          goto LAB_0010040a;
        }
      }
      else {
        memcpy(__dest,param_2,__n);
      }
      if (param_1 < 1) {
        param_1 = 0x800;
      }
      iVar2 = ASN1_INTEGER_set(a->iter,(long)param_1);
      if (iVar2 == 0) {
        ERR_new();
        uVar6 = 0xe1;
      }
      else {
        if (param_5 < 1) {
LAB_001002ec:
          if ((param_4 < 1) || (param_4 == 0xa3)) {
LAB_00100316:
            pXVar4 = X509_ALGOR_new();
            if (pXVar4 != (X509_ALGOR *)0x0) {
              pAVar5 = OBJ_nid2obj(0x45);
              pXVar4->algorithm = pAVar5;
              uVar6 = PBKDF2PARAM_it();
              lVar7 = ASN1_TYPE_pack_sequence(uVar6,a,&pXVar4->parameter);
              if (lVar7 != 0) {
                PBKDF2PARAM_free(a);
                return pXVar4;
              }
              ERR_new();
              ERR_set_debug("crypto/asn1/p5_pbev2.c",0x109,"PKCS5_pbkdf2_set_ex");
              ERR_set_error(0xd,0x8000d,0);
              goto LAB_00100510;
            }
            ERR_new();
            uVar6 = 0xff;
          }
          else {
            pXVar4 = (X509_ALGOR *)ossl_X509_ALGOR_from_nid(param_4,5,0);
            a->prf = pXVar4;
            if (pXVar4 != (X509_ALGOR *)0x0) goto LAB_00100316;
            ERR_new();
            uVar6 = 0xf6;
          }
          pXVar4 = (X509_ALGOR *)0x0;
          ERR_set_debug("crypto/asn1/p5_pbev2.c",uVar6,"PKCS5_pbkdf2_set_ex");
          ERR_set_error(0xd,0x8000b,0);
          goto LAB_00100510;
        }
        a_00 = ASN1_INTEGER_new();
        a->keylength = a_00;
        if (a_00 == (ASN1_INTEGER *)0x0) {
          ERR_new();
          uVar6 = 0xe9;
        }
        else {
          iVar2 = ASN1_INTEGER_set(a_00,(long)param_5);
          if (iVar2 != 0) goto LAB_001002ec;
          ERR_new();
          uVar6 = 0xed;
        }
      }
    }
  }
  pXVar4 = (X509_ALGOR *)0x0;
  ERR_set_debug("crypto/asn1/p5_pbev2.c",uVar6,"PKCS5_pbkdf2_set_ex");
  ERR_set_error(0xd,0x8000d,0);
LAB_00100510:
  PBKDF2PARAM_free(a);
  X509_ALGOR_free(pXVar4);
  return (X509_ALGOR *)0x0;
}



X509_ALGOR *
PKCS5_pbe2_set_iv_ex
          (EVP_CIPHER *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,long param_5
          ,int param_6,undefined8 param_7)

{
  int n;
  int iVar1;
  undefined4 uVar2;
  PBE2PARAM *a;
  ASN1_OBJECT *pAVar3;
  ASN1_TYPE *pAVar4;
  EVP_CIPHER_CTX *ctx;
  X509_ALGOR *pXVar5;
  undefined8 uVar6;
  long lVar7;
  X509_ALGOR *pXVar8;
  long in_FS_OFFSET;
  int local_5c;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = param_6;
  n = EVP_CIPHER_get_type();
  if (n == 0) {
    ERR_new();
    a = (PBE2PARAM *)0x0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    pXVar5 = (X509_ALGOR *)0x0;
    ERR_set_debug("crypto/asn1/p5_pbev2.c",0x40,"PKCS5_pbe2_set_iv_ex");
    ERR_set_error(0xd,0x6c,0);
  }
  else {
    a = PBE2PARAM_new();
    if (a == (PBE2PARAM *)0x0) {
      ERR_new();
      ctx = (EVP_CIPHER_CTX *)0x0;
      pXVar5 = (X509_ALGOR *)0x0;
      ERR_set_debug("crypto/asn1/p5_pbev2.c",0x45,"PKCS5_pbe2_set_iv_ex");
      ERR_set_error(0xd,0x8000d,0);
    }
    else {
      pXVar5 = a->encryption;
      pAVar3 = OBJ_nid2obj(n);
      pXVar5->algorithm = pAVar3;
      pAVar4 = ASN1_TYPE_new();
      pXVar5->parameter = pAVar4;
      if (pAVar4 == (ASN1_TYPE *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/p5_pbev2.c",0x4d,"PKCS5_pbe2_set_iv_ex");
        ERR_set_error(0xd,0x8000d,0);
LAB_00100880:
        ctx = (EVP_CIPHER_CTX *)0x0;
        pXVar5 = (X509_ALGOR *)0x0;
      }
      else {
        iVar1 = EVP_CIPHER_get_iv_length(param_1);
        if (iVar1 < 1) {
LAB_0010063e:
          ctx = EVP_CIPHER_CTX_new();
          if (ctx == (EVP_CIPHER_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/p5_pbev2.c",0x5c,"PKCS5_pbe2_set_iv_ex");
            ERR_set_error(0xd,0x80006,0);
            goto LAB_00100880;
          }
          iVar1 = EVP_CipherInit_ex(ctx,param_1,(ENGINE *)0x0,(uchar *)0x0,local_58,0);
          if (iVar1 != 0) {
            iVar1 = EVP_CIPHER_param_to_asn1(ctx,pXVar5->parameter);
            if (iVar1 < 1) {
              ERR_new();
              pXVar5 = (X509_ALGOR *)0x0;
              ERR_set_debug("crypto/asn1/p5_pbev2.c",100,"PKCS5_pbe2_set_iv_ex");
              ERR_set_error(0xd,0x72,0);
            }
            else {
              ERR_set_mark();
              if (local_5c == -1) {
                iVar1 = EVP_CIPHER_CTX_ctrl(ctx,7,0,&local_5c);
                if (iVar1 < 1) {
                  local_5c = 799;
                }
              }
              ERR_pop_to_mark();
              uVar2 = 0xffffffff;
              EVP_CIPHER_CTX_free(ctx);
              if (n == 0x25) {
                uVar2 = EVP_CIPHER_get_key_length(param_1);
              }
              X509_ALGOR_free(a->keyfunc);
              pXVar5 = (X509_ALGOR *)
                       PKCS5_pbkdf2_set_ex(param_2,param_3,param_4,local_5c,uVar2,param_7);
              a->keyfunc = pXVar5;
              if (pXVar5 == (X509_ALGOR *)0x0) {
                ERR_new();
                ctx = (EVP_CIPHER_CTX *)0x0;
                ERR_set_debug("crypto/asn1/p5_pbev2.c",0x83,"PKCS5_pbe2_set_iv_ex");
                ERR_set_error(0xd,0x8000d,0);
                pXVar5 = (X509_ALGOR *)0x0;
              }
              else {
                pXVar5 = X509_ALGOR_new();
                if (pXVar5 == (X509_ALGOR *)0x0) {
                  ERR_new();
                  ctx = (EVP_CIPHER_CTX *)0x0;
                  ERR_set_debug("crypto/asn1/p5_pbev2.c",0x8a,"PKCS5_pbe2_set_iv_ex");
                  ERR_set_error(0xd,0x8000b,0);
                }
                else {
                  pAVar3 = OBJ_nid2obj(0xa1);
                  pXVar5->algorithm = pAVar3;
                  uVar6 = PBE2PARAM_it();
                  lVar7 = ASN1_TYPE_pack_sequence(uVar6,a,&pXVar5->parameter);
                  if (lVar7 != 0) {
                    PBE2PARAM_free(a);
                    pXVar8 = pXVar5;
                    goto LAB_0010072b;
                  }
                  ERR_new();
                  ERR_set_debug("crypto/asn1/p5_pbev2.c",0x94,"PKCS5_pbe2_set_iv_ex");
                  ERR_set_error(0xd,0x8000d,0);
                  ctx = (EVP_CIPHER_CTX *)0x0;
                }
              }
            }
            goto LAB_00100773;
          }
        }
        else {
          if (param_5 != 0) {
            __memcpy_chk(local_58,param_5);
            goto LAB_0010063e;
          }
          iVar1 = RAND_bytes_ex(param_7,local_58,(long)iVar1);
          ctx = (EVP_CIPHER_CTX *)0x0;
          if (0 < iVar1) goto LAB_0010063e;
        }
        pXVar5 = (X509_ALGOR *)0x0;
      }
    }
  }
LAB_00100773:
  EVP_CIPHER_CTX_free(ctx);
  PBE2PARAM_free(a);
  pXVar8 = (X509_ALGOR *)0x0;
  X509_ALGOR_free(pXVar5);
LAB_0010072b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



X509_ALGOR *
PKCS5_pbe2_set_iv(EVP_CIPHER *cipher,int iter,uchar *salt,int saltlen,uchar *aiv,int prf_nid)

{
  X509_ALGOR *pXVar1;
  
  pXVar1 = (X509_ALGOR *)PKCS5_pbe2_set_iv_ex();
  return pXVar1;
}



X509_ALGOR * PKCS5_pbe2_set(EVP_CIPHER *cipher,int iter,uchar *salt,int saltlen)

{
  X509_ALGOR *pXVar1;
  
  pXVar1 = (X509_ALGOR *)PKCS5_pbe2_set_iv_ex();
  return pXVar1;
}



X509_ALGOR * PKCS5_pbkdf2_set(int iter,uchar *salt,int saltlen,int prf_nid,int keylen)

{
  X509_ALGOR *pXVar1;
  
  pXVar1 = (X509_ALGOR *)PKCS5_pbkdf2_set_ex();
  return pXVar1;
}



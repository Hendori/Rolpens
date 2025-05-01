
int ASN1_verify(undefined1 *i2d,X509_ALGOR *algor1,ASN1_BIT_STRING *signature,char *data,
               EVP_PKEY *pkey)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  char *name;
  EVP_MD *type;
  size_t cnt;
  void *d;
  undefined8 uVar2;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_verify.c",0x24,"ASN1_verify");
    ERR_set_error(0xd,0x80006,0);
  }
  else {
    iVar1 = OBJ_obj2nid(algor1->algorithm);
    name = OBJ_nid2sn(iVar1);
    type = EVP_get_digestbyname(name);
    if (type == (EVP_MD *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_verify.c",0x2a,"ASN1_verify");
      ERR_set_error(0xd,0xa1,0);
    }
    else if ((signature->type == 3) && ((signature->flags & 7) != 0)) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_verify.c",0x2f,"ASN1_verify");
      ERR_set_error(0xd,0xdc,0);
    }
    else {
      iVar1 = (*(code *)i2d)(data,0);
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_verify.c",0x35,"ASN1_verify");
        ERR_set_error(0xd,0xc0103,0);
      }
      else {
        cnt = (size_t)iVar1;
        d = CRYPTO_malloc(iVar1,"crypto/asn1/a_verify.c",0x38);
        if (d != (void *)0x0) {
          local_48 = d;
          (*(code *)i2d)(data,&local_48);
          iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
          if (iVar1 == 0) {
LAB_001000df:
            CRYPTO_clear_free(d,cnt,"crypto/asn1/a_verify.c",0x41);
            ERR_new();
            uVar2 = 0x44;
          }
          else {
            iVar1 = EVP_DigestUpdate(ctx,d,cnt);
            if (iVar1 == 0) goto LAB_001000df;
            CRYPTO_clear_free(d,cnt,"crypto/asn1/a_verify.c",0x41);
            iVar1 = EVP_VerifyFinal(ctx,signature->data,signature->length,pkey);
            if (0 < iVar1) {
              iVar1 = 1;
              goto LAB_0010011a;
            }
            ERR_new();
            uVar2 = 0x4b;
          }
          iVar1 = 0;
          ERR_set_debug("crypto/asn1/a_verify.c",uVar2,"ASN1_verify");
          ERR_set_error(0xd,0x80006,0);
          goto LAB_0010011a;
        }
      }
    }
  }
  iVar1 = -1;
LAB_0010011a:
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_item_verify_ctx
              (ASN1_ITEM *param_1,undefined8 *param_2,int *param_3,ASN1_VALUE *param_4,
              EVP_MD_CTX *param_5)

{
  code *pcVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey;
  char *name;
  EVP_MD *type;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx(param_5);
  pkey = EVP_PKEY_CTX_get0_pkey(ctx);
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_verify.c",0x7b,"ASN1_item_verify_ctx");
    ERR_set_error(0xd,0xc0102,0);
  }
  else {
    if ((param_3[1] != 3) || ((*(byte *)(param_3 + 4) & 7) == 0)) {
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
      iVar2 = OBJ_find_sigid_algs(iVar2,&local_50,&local_4c);
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0x86;
LAB_00100521:
        ERR_set_debug("crypto/asn1/a_verify.c",uVar3,"ASN1_item_verify_ctx");
        ERR_set_error(0xd,199,0);
LAB_00100543:
        lVar4 = 0;
        iVar2 = -1;
      }
      else {
        if (local_50 != 0) {
LAB_00100367:
          OBJ_nid2sn(local_4c);
          iVar2 = EVP_PKEY_is_a(pkey);
          if (iVar2 == 0) {
            ERR_new();
            uVar3 = 0xb0;
LAB_00100591:
            ERR_set_debug("crypto/asn1/a_verify.c",uVar3,"ASN1_item_verify_ctx");
            ERR_set_error(0xd,200,0);
          }
          else {
            if (local_50 == 0) {
              type = (EVP_MD *)0x0;
            }
            else {
              name = OBJ_nid2sn(local_50);
              type = EVP_get_digestbyname(name);
              if (type == (EVP_MD *)0x0) {
                ERR_new();
                ERR_set_debug("crypto/asn1/a_verify.c",0xb7,"ASN1_item_verify_ctx");
                ERR_set_error(0xd,0xa1,"nid=0x%x",local_50);
                goto LAB_00100543;
              }
            }
            iVar2 = EVP_DigestVerifyInit(param_5,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
            if (iVar2 == 0) {
              ERR_new();
              uVar3 = 0xc3;
              iVar2 = 0;
LAB_001005c9:
              lVar4 = 0;
              ERR_set_debug("crypto/asn1/a_verify.c",uVar3,"ASN1_item_verify_ctx");
              ERR_set_error(0xd,0x80006,0);
              goto LAB_0010040f;
            }
LAB_001003bd:
            iVar2 = ASN1_item_i2d(param_4,&local_48,param_1);
            if (iVar2 < 1) {
              ERR_new();
              uVar3 = 0xcc;
              goto LAB_00100641;
            }
            if (local_48 != (uchar *)0x0) {
              lVar4 = (long)iVar2;
              iVar2 = EVP_DigestVerify(param_5,*(undefined8 *)(param_3 + 2),(long)*param_3,local_48,
                                       lVar4);
              if (iVar2 < 1) {
                ERR_new();
                ERR_set_debug("crypto/asn1/a_verify.c",0xda,"ASN1_item_verify_ctx");
                ERR_set_error(0xd,0x80006,0);
              }
              else {
                iVar2 = 1;
              }
              goto LAB_0010040f;
            }
            ERR_new();
            ERR_set_debug("crypto/asn1/a_verify.c",0xd1,"ASN1_item_verify_ctx");
            ERR_set_error(0xd,0x8000d,0);
          }
          goto LAB_00100543;
        }
        if ((pkey->type == 0) || (*(long *)&pkey[1].save_parameters != 0)) {
          if (local_4c != 0x390) goto LAB_00100367;
          iVar2 = EVP_PKEY_is_a(pkey,&_LC1);
          if ((iVar2 == 0) && (iVar2 = EVP_PKEY_is_a(pkey,"RSA-PSS"), iVar2 == 0)) {
            ERR_new();
            uVar3 = 0xa5;
            goto LAB_00100591;
          }
          iVar2 = ossl_rsa_pss_to_ctx(param_5,0,param_2,pkey);
          if (0 < iVar2) goto LAB_001003bd;
          ERR_new();
          uVar3 = 0xaa;
LAB_00100641:
          ERR_set_debug("crypto/asn1/a_verify.c",uVar3,"ASN1_item_verify_ctx");
          ERR_set_error(0xd,0xc0103,0);
          goto LAB_00100543;
        }
        if ((*(long *)&pkey->references == 0) ||
           (pcVar1 = *(code **)(*(long *)&pkey->references + 200), pcVar1 == (code *)0x0)) {
          ERR_new();
          uVar3 = 0x8c;
          goto LAB_00100521;
        }
        iVar2 = (*pcVar1)(param_5,param_1,param_4,param_2,param_3,pkey);
        if (iVar2 < 1) {
          ERR_new();
          uVar3 = 0x97;
          goto LAB_001005c9;
        }
        if (iVar2 != 1) goto LAB_001003bd;
        lVar4 = 0;
      }
LAB_0010040f:
      CRYPTO_clear_free(local_48,lVar4,"crypto/asn1/a_verify.c",0xdf);
      goto LAB_00100424;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/a_verify.c",0x80,"ASN1_item_verify_ctx");
    ERR_set_error(0xd,0xdc,0);
  }
  iVar2 = -1;
LAB_00100424:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined4
ASN1_item_verify_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  EVP_PKEY_CTX *ctx;
  
  lVar2 = evp_md_ctx_new_ex(param_6,param_5,param_7,param_8);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ASN1_item_verify_ctx(param_1,param_2,param_3,param_4,lVar2);
    ctx = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx(lVar2);
    EVP_PKEY_CTX_free(ctx);
    EVP_MD_CTX_free(lVar2);
  }
  return uVar1;
}



int ASN1_item_verify(ASN1_ITEM *it,X509_ALGOR *algor1,ASN1_BIT_STRING *signature,void *data,
                    EVP_PKEY *pkey)

{
  int iVar1;
  
  iVar1 = ASN1_item_verify_ex();
  return iVar1;
}



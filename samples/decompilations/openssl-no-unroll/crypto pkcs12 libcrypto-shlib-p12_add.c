
PKCS12_SAFEBAG * PKCS12_item_pack_safebag(void *obj,ASN1_ITEM *it,int nid1,int nid2)

{
  X509_SIG *a;
  ASN1_OBJECT *pAVar1;
  ASN1_STRING *pAVar2;
  PKCS12_SAFEBAG *pPVar3;
  undefined8 uVar4;
  
  a = (X509_SIG *)PKCS12_BAGS_new();
  if (a == (X509_SIG *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x1b,"PKCS12_item_pack_safebag");
    ERR_set_error(0x23,0x8000d,0);
  }
  else {
    pAVar1 = OBJ_nid2obj(nid1);
    a->algor = (X509_ALGOR *)pAVar1;
    pAVar2 = ASN1_item_pack(obj,it,&((_union_991 *)&a->digest)->x509cert);
    if (pAVar2 == (ASN1_STRING *)0x0) {
      ERR_new();
      uVar4 = 0x20;
    }
    else {
      pPVar3 = PKCS12_SAFEBAG_new();
      if (pPVar3 != (PKCS12_SAFEBAG *)0x0) {
        (pPVar3->value).shkeybag = a;
        pAVar1 = OBJ_nid2obj(nid2);
        pPVar3->type = pAVar1;
        return pPVar3;
      }
      ERR_new();
      uVar4 = 0x24;
    }
    ERR_set_debug("crypto/pkcs12/p12_add.c",uVar4,"PKCS12_item_pack_safebag");
    ERR_set_error(0x23,0x8000d,0);
    PKCS12_BAGS_free((PKCS12_BAGS *)a);
  }
  return (PKCS12_SAFEBAG *)0x0;
}



PKCS7 * PKCS12_pack_p7data(stack_st_PKCS12_SAFEBAG *sk)

{
  PKCS7 *a;
  ASN1_OBJECT *pAVar1;
  ASN1_OCTET_STRING *pAVar2;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar3;
  
  a = PKCS7_new();
  if (a == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x36,"PKCS12_pack_p7data");
    ERR_set_error(0x23,0x8000d,0);
  }
  else {
    pAVar1 = OBJ_nid2obj(0x15);
    a->type = pAVar1;
    pAVar2 = ASN1_OCTET_STRING_new();
    (a->d).data = pAVar2;
    if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_add.c",0x3b,"PKCS12_pack_p7data");
      ERR_set_error(0x23,0x8000d,0);
    }
    else {
      it = (ASN1_ITEM *)PKCS12_SAFEBAGS_it();
      pAVar3 = ASN1_item_pack(sk,it,&(a->d).data);
      if (pAVar3 != (ASN1_STRING *)0x0) {
        return a;
      }
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_add.c",0x40,"PKCS12_pack_p7data");
      ERR_set_error(0x23,100,0);
    }
    PKCS7_free(a);
  }
  return (PKCS7 *)0x0;
}



stack_st_PKCS12_SAFEBAG * PKCS12_unpack_p7data(PKCS7 *p7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  stack_st_PKCS12_SAFEBAG *psVar5;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x15) {
    if ((p7->d).ptr != (char *)0x0) {
      uVar2 = ossl_pkcs7_ctx_get0_propq(p7 + 1);
      uVar3 = ossl_pkcs7_ctx_get0_libctx(p7 + 1);
      uVar4 = PKCS12_SAFEBAGS_it();
      psVar5 = (stack_st_PKCS12_SAFEBAG *)ASN1_item_unpack_ex((p7->d).ptr,uVar4,uVar3,uVar2);
      return psVar5;
    }
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x53,"PKCS12_unpack_p7data");
    ERR_set_error(0x23,0x65,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x4e,"PKCS12_unpack_p7data");
    ERR_set_error(0x23,0x79,0);
  }
  return (stack_st_PKCS12_SAFEBAG *)0x0;
}



PKCS7 * PKCS12_pack_p7encdata_ex
                  (int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  PKCS7_ENC_CONTENT *pPVar1;
  int iVar2;
  PKCS7 *p7;
  char *pcVar3;
  EVP_CIPHER *pEVar4;
  X509_ALGOR *pXVar5;
  undefined8 uVar6;
  ASN1_OCTET_STRING *pAVar7;
  EVP_CIPHER *pEVar8;
  
  p7 = (PKCS7 *)PKCS7_new_ex(param_8,param_9);
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x69,"PKCS12_pack_p7encdata_ex");
    ERR_set_error(0x23,0x8000d,0);
    return (PKCS7 *)0x0;
  }
  iVar2 = PKCS7_set_type(p7,0x1a);
  if (iVar2 == 0) {
    ERR_new();
    pEVar4 = (EVP_CIPHER *)0x0;
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x6d,"PKCS12_pack_p7encdata_ex");
    ERR_set_error(0x23,0x78,0);
    goto LAB_001004ca;
  }
  ERR_set_mark();
  pcVar3 = OBJ_nid2sn(param_1);
  pEVar4 = (EVP_CIPHER *)EVP_CIPHER_fetch(param_8,pcVar3,param_9);
  if (pEVar4 == (EVP_CIPHER *)0x0) {
    pcVar3 = OBJ_nid2sn(param_1);
    pEVar8 = EVP_get_cipherbyname(pcVar3);
    ERR_pop_to_mark();
    if (pEVar8 != (EVP_CIPHER *)0x0) goto LAB_0010039d;
    pXVar5 = (X509_ALGOR *)PKCS5_pbe_set_ex(param_1,param_6,param_4,param_5,param_8);
  }
  else {
    ERR_pop_to_mark();
    pEVar8 = pEVar4;
LAB_0010039d:
    pXVar5 = (X509_ALGOR *)PKCS5_pbe2_set_iv_ex(pEVar8,param_6,param_4,param_5,0,0xffffffff,param_8)
    ;
  }
  if (pXVar5 == (X509_ALGOR *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x7e,"PKCS12_pack_p7encdata_ex");
    ERR_set_error(0x23,0x8000d,0);
  }
  else {
    X509_ALGOR_free(((p7->d).encrypted)->enc_data->algorithm);
    pPVar1 = ((p7->d).encrypted)->enc_data;
    pPVar1->algorithm = pXVar5;
    ASN1_OCTET_STRING_free(pPVar1->enc_data);
    uVar6 = PKCS12_SAFEBAGS_it();
    pPVar1 = ((p7->d).encrypted)->enc_data;
    pAVar7 = (ASN1_OCTET_STRING *)PKCS12_item_i2d_encrypt_ex(pXVar5,uVar6,param_2,param_3,param_7,1)
    ;
    pPVar1->enc_data = pAVar7;
    if (pAVar7 != (ASN1_OCTET_STRING *)0x0) {
      EVP_CIPHER_free(pEVar4);
      return p7;
    }
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0x87,"PKCS12_pack_p7encdata_ex");
    ERR_set_error(0x23,0x67,0);
  }
LAB_001004ca:
  PKCS7_free(p7);
  EVP_CIPHER_free(pEVar4);
  return (PKCS7 *)0x0;
}



PKCS7 * PKCS12_pack_p7encdata
                  (int pbe_nid,char *pass,int passlen,uchar *salt,int saltlen,int iter,
                  stack_st_PKCS12_SAFEBAG *bags)

{
  PKCS7 *pPVar1;
  
  pPVar1 = (PKCS7 *)PKCS12_pack_p7encdata_ex();
  return pPVar1;
}



stack_st_PKCS12_SAFEBAG * PKCS12_unpack_p7encdata(PKCS7 *p7,char *pass,int passlen)

{
  long lVar1;
  uchar *puVar2;
  ASN1_OCTET_STRING *pAVar3;
  int iVar4;
  undefined8 uVar5;
  stack_st_PKCS12_SAFEBAG *psVar6;
  
  iVar4 = OBJ_obj2nid(p7->type);
  if (iVar4 == 0x1a) {
    if ((p7->d).encrypted != (PKCS7_ENCRYPT *)0x0) {
      lVar1 = p7[1].length;
      puVar2 = p7[1].asn1;
      pAVar3 = ((p7->d).encrypted)->enc_data->enc_data;
      uVar5 = PKCS12_SAFEBAGS_it();
      psVar6 = (stack_st_PKCS12_SAFEBAG *)
               PKCS12_item_decrypt_d2i_ex
                         (((p7->d).digest)->md->parameter,uVar5,pass,passlen,pAVar3,1,puVar2,lVar1);
      return psVar6;
    }
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_add.c",0xa3,"PKCS12_unpack_p7encdata");
    ERR_set_error(0x23,0x65,0);
  }
  return (stack_st_PKCS12_SAFEBAG *)0x0;
}



void PKCS12_decrypt_skey_ex(long param_1)

{
  PKCS8_decrypt_ex(*(undefined8 *)(param_1 + 8));
  return;
}



PKCS8_PRIV_KEY_INFO * PKCS12_decrypt_skey(PKCS12_SAFEBAG *bag,char *pass,int passlen)

{
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)PKCS12_decrypt_skey_ex();
  return pPVar1;
}



int PKCS12_pack_authsafes(PKCS12 *p12,stack_st_PKCS7 *safes)

{
  PKCS7 *pPVar1;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar2;
  
  pPVar1 = p12->authsafes;
  it = (ASN1_ITEM *)PKCS12_AUTHSAFES_it();
  pAVar2 = ASN1_item_pack(safes,it,&(pPVar1->d).data);
  return (int)(pAVar2 != (ASN1_STRING *)0x0);
}



stack_st_PKCS7 * PKCS12_unpack_authsafes(PKCS12 *p12)

{
  PKCS7 *pPVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  stack_st_PKCS7 *psVar7;
  
  iVar2 = OBJ_obj2nid(p12->authsafes->type);
  if (iVar2 == 0x15) {
    if ((p12->authsafes->d).ptr == (char *)0x0) {
      ERR_new();
      psVar7 = (stack_st_PKCS7 *)0x0;
      ERR_set_debug("crypto/pkcs12/p12_add.c",0xd0,"PKCS12_unpack_authsafes");
      ERR_set_error(0x23,0x65,0);
    }
    else {
      pPVar1 = p12->authsafes + 1;
      uVar4 = ossl_pkcs7_ctx_get0_propq(pPVar1);
      uVar5 = ossl_pkcs7_ctx_get0_libctx(pPVar1);
      uVar6 = PKCS12_AUTHSAFES_it();
      iVar2 = 0;
      psVar7 = (stack_st_PKCS7 *)ASN1_item_unpack_ex((p12->authsafes->d).ptr,uVar6,uVar5,uVar4);
      if (psVar7 == (stack_st_PKCS7 *)0x0) {
LAB_00100798:
        psVar7 = (stack_st_PKCS7 *)0x0;
      }
      else {
        for (; iVar3 = OPENSSL_sk_num(psVar7), iVar2 < iVar3; iVar2 = iVar2 + 1) {
          uVar4 = OPENSSL_sk_value(psVar7,iVar2);
          iVar3 = ossl_pkcs7_ctx_propagate(p12->authsafes,uVar4);
          if (iVar3 == 0) {
            OPENSSL_sk_free(psVar7);
            goto LAB_00100798;
          }
        }
      }
    }
  }
  else {
    ERR_new();
    psVar7 = (stack_st_PKCS7 *)0x0;
    ERR_set_debug("crypto/pkcs12/p12_add.c",0xcb,"PKCS12_unpack_authsafes");
    ERR_set_error(0x23,0x79,0);
  }
  return psVar7;
}




void PKCS12_get_attr(long param_1,int param_2)

{
  PKCS12_get_attr_gen(*(stack_st_X509_ATTRIBUTE **)(param_1 + 0x10),param_2);
  return;
}



void PKCS12_SAFEBAG_get0_attr(long param_1,int param_2)

{
  PKCS12_get_attr_gen(*(stack_st_X509_ATTRIBUTE **)(param_1 + 0x10),param_2);
  return;
}



void PKCS8_get_attr(undefined8 param_1,int param_2)

{
  stack_st_X509_ATTRIBUTE *attrs;
  
  attrs = (stack_st_X509_ATTRIBUTE *)PKCS8_pkey_get0_attrs();
  PKCS12_get_attr_gen(attrs,param_2);
  return;
}



undefined8 PKCS12_SAFEBAG_get0_pkcs8(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  uVar2 = 0;
  if (iVar1 == 0x97) {
    uVar2 = param_1[1];
  }
  return uVar2;
}



undefined8 PKCS12_SAFEBAG_get0_safes(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  uVar2 = 0;
  if (iVar1 == 0x9b) {
    uVar2 = param_1[1];
  }
  return uVar2;
}



undefined8 PKCS12_SAFEBAG_get0_type(undefined8 *param_1)

{
  return *param_1;
}



void PKCS12_SAFEBAG_get_nid(undefined8 *param_1)

{
  OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  return;
}



undefined8 PKCS12_SAFEBAG_get0_p8inf(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = PKCS12_SAFEBAG_get_nid();
  uVar2 = 0;
  if (iVar1 == 0x96) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  return uVar2;
}



int PKCS12_SAFEBAG_get_bag_nid(long param_1)

{
  int iVar1;
  
  iVar1 = PKCS12_SAFEBAG_get_nid();
  if (iVar1 - 0x98U < 3) {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8));
    return iVar1;
  }
  return -1;
}



undefined8 PKCS12_SAFEBAG_get0_bag_type(long param_1)

{
  return **(undefined8 **)(param_1 + 8);
}



undefined8 PKCS12_SAFEBAG_get0_bag_obj(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 8);
}



void * PKCS12_SAFEBAG_get1_cert(long param_1)

{
  int iVar1;
  ASN1_ITEM *it;
  void *pvVar2;
  
  iVar1 = PKCS12_SAFEBAG_get_nid();
  if (iVar1 == 0x98) {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8));
    if (iVar1 == 0x9e) {
      it = (ASN1_ITEM *)X509_it();
      pvVar2 = ASN1_item_unpack(*(ASN1_STRING **)(*(long *)(param_1 + 8) + 8),it);
      return pvVar2;
    }
  }
  return (void *)0x0;
}



void * PKCS12_SAFEBAG_get1_crl(long param_1)

{
  int iVar1;
  ASN1_ITEM *it;
  void *pvVar2;
  
  iVar1 = PKCS12_SAFEBAG_get_nid();
  if (iVar1 == 0x99) {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8));
    if (iVar1 == 0xa0) {
      it = (ASN1_ITEM *)X509_CRL_it();
      pvVar2 = ASN1_item_unpack(*(ASN1_STRING **)(*(long *)(param_1 + 8) + 8),it);
      return pvVar2;
    }
  }
  return (void *)0x0;
}



X509 * PKCS12_SAFEBAG_get1_cert_ex(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  X509 *a;
  
  iVar1 = PKCS12_SAFEBAG_get_nid();
  if ((iVar1 == 0x98) &&
     (iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8)), iVar1 == 0x9e)) {
    uVar2 = X509_it();
    a = (X509 *)ASN1_item_unpack_ex(*(undefined8 *)(*(long *)(param_1 + 8) + 8),uVar2,param_2,
                                    param_3);
    iVar1 = ossl_x509_set0_libctx(a,param_2,param_3);
    if (iVar1 != 0) {
      return a;
    }
    X509_free(a);
  }
  return (X509 *)0x0;
}



X509_CRL * PKCS12_SAFEBAG_get1_crl_ex(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  X509_CRL *a;
  
  iVar1 = PKCS12_SAFEBAG_get_nid();
  if ((iVar1 == 0x99) &&
     (iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8)), iVar1 == 0xa0)) {
    uVar2 = X509_CRL_it();
    a = (X509_CRL *)
        ASN1_item_unpack_ex(*(undefined8 *)(*(long *)(param_1 + 8) + 8),uVar2,param_2,param_3);
    iVar1 = ossl_x509_crl_set0_libctx(a,param_2,param_3);
    if (iVar1 != 0) {
      return a;
    }
    X509_CRL_free(a);
  }
  return (X509_CRL *)0x0;
}



void PKCS12_SAFEBAG_create_cert(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_it();
  PKCS12_item_pack_safebag(param_1,it,0x9e,0x98);
  return;
}



void PKCS12_SAFEBAG_create_crl(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  PKCS12_item_pack_safebag(param_1,it,0xa0,0x99);
  return;
}



PKCS12_SAFEBAG * PKCS12_SAFEBAG_create_secret(int param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  X509_SIG *a;
  ASN1_OBJECT *pAVar2;
  ASN1_OCTET_STRING *str;
  ASN1_TYPE *a_00;
  PKCS12_SAFEBAG *pPVar3;
  undefined8 uVar4;
  
  a = (X509_SIG *)PKCS12_BAGS_new();
  if (a == (X509_SIG *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_sbag.c",0x9f,"PKCS12_SAFEBAG_create_secret");
    ERR_set_error(0x23,0x8000d,0);
    return (PKCS12_SAFEBAG *)0x0;
  }
  pAVar2 = OBJ_nid2obj(param_1);
  a->algor = (X509_ALGOR *)pAVar2;
  if (param_2 == 4) {
    str = ASN1_OCTET_STRING_new();
    if (str == (ASN1_OCTET_STRING *)0x0) {
      ERR_new();
      uVar4 = 0xaa;
    }
    else {
      iVar1 = ASN1_OCTET_STRING_set(str,param_3,param_4);
      if (iVar1 == 0) {
        ASN1_OCTET_STRING_free(str);
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_sbag.c",0xb0,"PKCS12_SAFEBAG_create_secret");
        ERR_set_error(0x23,0x66,0);
        goto LAB_00100430;
      }
      a_00 = ASN1_TYPE_new();
      ((_union_991 *)&a->digest)->other = a_00;
      if (a_00 == (ASN1_TYPE *)0x0) {
        ASN1_OCTET_STRING_free(str);
        ERR_new();
        uVar4 = 0xb6;
      }
      else {
        ASN1_TYPE_set(a_00,4,str);
        pPVar3 = PKCS12_SAFEBAG_new();
        if (pPVar3 != (PKCS12_SAFEBAG *)0x0) {
          (pPVar3->value).shkeybag = a;
          pAVar2 = OBJ_nid2obj(0x9a);
          pPVar3->type = pAVar2;
          return pPVar3;
        }
        ERR_new();
        uVar4 = 0xc3;
      }
    }
    ERR_set_debug("crypto/pkcs12/p12_sbag.c",uVar4,"PKCS12_SAFEBAG_create_secret");
    ERR_set_error(0x23,0x8000d,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_sbag.c",0xbe,"PKCS12_SAFEBAG_create_secret");
    ERR_set_error(0x23,0x70,0);
  }
LAB_00100430:
  PKCS12_BAGS_free((PKCS12_BAGS *)a);
  return (PKCS12_SAFEBAG *)0x0;
}



PKCS12_SAFEBAG * PKCS12_SAFEBAG_create0_p8inf(_union_984 param_1)

{
  PKCS12_SAFEBAG *pPVar1;
  ASN1_OBJECT *pAVar2;
  
  pPVar1 = PKCS12_SAFEBAG_new();
  if (pPVar1 != (PKCS12_SAFEBAG *)0x0) {
    pAVar2 = OBJ_nid2obj(0x96);
    pPVar1->value = param_1;
    pPVar1->type = pAVar2;
    return pPVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/pkcs12/p12_sbag.c",0xd6,"PKCS12_SAFEBAG_create0_p8inf");
  ERR_set_error(0x23,0x8000d,0);
  return (PKCS12_SAFEBAG *)0x0;
}



PKCS12_SAFEBAG * PKCS12_SAFEBAG_create0_pkcs8(_union_984 param_1)

{
  PKCS12_SAFEBAG *pPVar1;
  ASN1_OBJECT *pAVar2;
  
  pPVar1 = PKCS12_SAFEBAG_new();
  if (pPVar1 != (PKCS12_SAFEBAG *)0x0) {
    pAVar2 = OBJ_nid2obj(0x97);
    pPVar1->value = param_1;
    pPVar1->type = pAVar2;
    return pPVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/pkcs12/p12_sbag.c",0xe6,"PKCS12_SAFEBAG_create0_pkcs8");
  ERR_set_error(0x23,0x8000d,0);
  return (PKCS12_SAFEBAG *)0x0;
}



X509_SIG *
PKCS12_SAFEBAG_create_pkcs8_encrypt_ex
          (int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,
          undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  EVP_CIPHER *pEVar2;
  X509_SIG *a;
  X509_SIG *pXVar3;
  EVP_CIPHER *pEVar4;
  
  ERR_set_mark();
  pcVar1 = OBJ_nid2sn(param_1);
  pEVar2 = (EVP_CIPHER *)EVP_CIPHER_fetch(param_8,pcVar1,param_9);
  if (pEVar2 == (EVP_CIPHER *)0x0) {
    pcVar1 = OBJ_nid2sn(param_1);
    pEVar4 = EVP_get_cipherbyname(pcVar1);
    ERR_pop_to_mark();
    if (pEVar4 != (EVP_CIPHER *)0x0) {
      param_1 = -1;
    }
  }
  else {
    ERR_pop_to_mark();
    pEVar4 = pEVar2;
    param_1 = -1;
  }
  a = (X509_SIG *)
      PKCS8_encrypt_ex(param_1,pEVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
  pXVar3 = a;
  if ((a != (X509_SIG *)0x0) &&
     (pXVar3 = (X509_SIG *)PKCS12_SAFEBAG_create0_pkcs8(a), pXVar3 == (X509_SIG *)0x0)) {
    X509_SIG_free(a);
  }
  EVP_CIPHER_free(pEVar2);
  return pXVar3;
}



void PKCS12_SAFEBAG_create_pkcs8_encrypt(void)

{
  PKCS12_SAFEBAG_create_pkcs8_encrypt_ex();
  return;
}




int PKCS7_add_attrib_smimecap(PKCS7_SIGNER_INFO *si,stack_st_X509_ALGOR *cap)

{
  int iVar1;
  ASN1_STRING *a;
  ASN1_ITEM *it;
  
  a = ASN1_STRING_new();
  if (a == (ASN1_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_attr.c",0x1a,"PKCS7_add_attrib_smimecap");
    ERR_set_error(0x21,0x8000d,0);
    iVar1 = 0;
  }
  else {
    it = (ASN1_ITEM *)X509_ALGORS_it();
    iVar1 = ASN1_item_i2d((ASN1_VALUE *)cap,&a->data,it);
    a->length = iVar1;
    if ((iVar1 < 1) || (a->data == (uchar *)0x0)) {
      ASN1_STRING_free(a);
    }
    else {
      iVar1 = PKCS7_add_signed_attribute(si,0xa7,0x10,a);
      if (iVar1 == 0) {
        ASN1_STRING_free(a);
        return 0;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}



stack_st_X509_ALGOR * PKCS7_get_smimecap(PKCS7_SIGNER_INFO *si)

{
  ASN1_TYPE *pAVar1;
  ASN1_ITEM *it;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pAVar1 = PKCS7_get_signed_attribute(si,0xa7);
  if (pAVar1 != (ASN1_TYPE *)0x0) {
    if (pAVar1->type == 0x10) {
      local_18 = ((pAVar1->value).asn1_string)->data;
      it = (ASN1_ITEM *)X509_ALGORS_it();
      pAVar1 = (ASN1_TYPE *)
               ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,
                             (long)((pAVar1->value).asn1_string)->length,it);
    }
    else {
      pAVar1 = (ASN1_TYPE *)0x0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (stack_st_X509_ALGOR *)pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS7_simple_smimecap(stack_st_X509_ALGOR *sk,int nid,int arg)

{
  int iVar1;
  X509_ALGOR *a;
  ASN1_OBJECT *pAVar2;
  ASN1_TYPE *pAVar3;
  ASN1_INTEGER *a_00;
  undefined8 uVar4;
  
  a = X509_ALGOR_new();
  if (a == (X509_ALGOR *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_attr.c",0x40,"PKCS7_simple_smimecap");
    ERR_set_error(0x21,0x8000d,0);
    return 0;
  }
  ASN1_OBJECT_free(a->algorithm);
  pAVar2 = OBJ_nid2obj(nid);
  a->algorithm = pAVar2;
  if (arg < 1) {
LAB_001001d2:
    iVar1 = OPENSSL_sk_push(sk,a);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_attr.c",0x57,"PKCS7_simple_smimecap");
    ERR_set_error(0x21,0x8000f,0);
  }
  else {
    pAVar3 = ASN1_TYPE_new();
    a->parameter = pAVar3;
    if (pAVar3 == (ASN1_TYPE *)0x0) {
      ERR_new();
      uVar4 = 0x47;
    }
    else {
      a_00 = ASN1_INTEGER_new();
      if (a_00 != (ASN1_INTEGER *)0x0) {
        iVar1 = ASN1_INTEGER_set(a_00,(long)arg);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_attr.c",0x4f,"PKCS7_simple_smimecap");
          ERR_set_error(0x21,0x8000d,0);
          goto LAB_0010022b;
        }
        pAVar3 = a->parameter;
        (pAVar3->value).integer = a_00;
        pAVar3->type = 2;
        goto LAB_001001d2;
      }
      ERR_new();
      uVar4 = 0x4b;
    }
    ERR_set_debug("crypto/pkcs7/pk7_attr.c",uVar4,"PKCS7_simple_smimecap");
    ERR_set_error(0x21,0x8000d,0);
  }
  a_00 = (ASN1_INTEGER *)0x0;
LAB_0010022b:
  ASN1_INTEGER_free(a_00);
  X509_ALGOR_free(a);
  return 0;
}



int PKCS7_add_attrib_content_type(PKCS7_SIGNER_INFO *si,ASN1_OBJECT *coid)

{
  int iVar1;
  ASN1_TYPE *pAVar2;
  
  pAVar2 = PKCS7_get_signed_attribute(si,0x32);
  if (pAVar2 != (ASN1_TYPE *)0x0) {
    return 0;
  }
  if (coid == (ASN1_OBJECT *)0x0) {
    coid = OBJ_nid2obj(0x15);
  }
  iVar1 = PKCS7_add_signed_attribute(si,0x32,6,coid);
  return iVar1;
}



int PKCS7_add0_attrib_signing_time(PKCS7_SIGNER_INFO *si,ASN1_TIME *t)

{
  int iVar1;
  ASN1_TIME *a;
  
  a = (ASN1_TIME *)0x0;
  if ((t == (ASN1_TIME *)0x0) &&
     (t = X509_gmtime_adj((ASN1_TIME *)0x0,0), a = t, t == (ASN1_TIME *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_attr.c",0x70,"PKCS7_add0_attrib_signing_time");
    ERR_set_error(0x21,0x8000b,0);
    return 0;
  }
  iVar1 = PKCS7_add_signed_attribute(si,0x34,0x17,t);
  if (iVar1 == 0) {
    ASN1_TIME_free(a);
    return 0;
  }
  return 1;
}



int PKCS7_add1_attrib_digest(PKCS7_SIGNER_INFO *si,uchar *md,int mdlen)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  str = ASN1_OCTET_STRING_new();
  if (str != (ASN1_OCTET_STRING *)0x0) {
    iVar1 = ASN1_STRING_set(str,md,mdlen);
    if (iVar1 != 0) {
      iVar1 = PKCS7_add_signed_attribute(si,0x33,4,str);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ASN1_OCTET_STRING_free(str);
  }
  return 0;
}



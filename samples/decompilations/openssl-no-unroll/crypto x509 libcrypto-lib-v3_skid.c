
char * i2s_ASN1_OCTET_STRING(X509V3_EXT_METHOD *method,ASN1_OCTET_STRING *ia5)

{
  char *pcVar1;
  
  pcVar1 = (char *)OPENSSL_buf2hexstr(ia5->data,(long)ia5->length);
  return pcVar1;
}



ASN1_OCTET_STRING * s2i_ASN1_OCTET_STRING(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,char *str)

{
  ASN1_OCTET_STRING *a;
  uchar *puVar1;
  ASN1_OCTET_STRING *pAVar2;
  long in_FS_OFFSET;
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  a = ASN1_OCTET_STRING_new();
  if (a == (ASN1_OCTET_STRING *)0x0) {
    ERR_new();
    pAVar2 = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("crypto/x509/v3_skid.c",0x28,"s2i_ASN1_OCTET_STRING");
    ERR_set_error(0x22,0x8000d,0);
  }
  else {
    puVar1 = (uchar *)OPENSSL_hexstr2buf(str,local_28);
    a->data = puVar1;
    if (puVar1 == (uchar *)0x0) {
      pAVar2 = (ASN1_OCTET_STRING *)0x0;
      ASN1_OCTET_STRING_free(a);
    }
    else {
      a->length = local_28[0];
      pAVar2 = a;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_OCTET_STRING * ossl_x509_pubkey_hash(X509_PUBKEY *param_1)

{
  int iVar1;
  EVP_MD *type;
  ASN1_OCTET_STRING *str;
  long in_FS_OFFSET;
  int local_88;
  uint local_84;
  uchar *local_80;
  undefined8 local_78;
  undefined8 local_70;
  uchar local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (X509_PUBKEY *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_skid.c",0x43,"ossl_x509_pubkey_hash");
    ERR_set_error(0x22,0x72,0);
  }
  else {
    iVar1 = ossl_x509_PUBKEY_get0_libctx(&local_70,&local_78,param_1);
    if (iVar1 != 0) {
      type = (EVP_MD *)EVP_MD_fetch(local_70,&_LC1,local_78);
      if (type != (EVP_MD *)0x0) {
        str = ASN1_OCTET_STRING_new();
        if (str == (ASN1_OCTET_STRING *)0x0) {
          EVP_MD_free(type);
        }
        else {
          X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_80,&local_88,(X509_ALGOR **)0x0,param_1)
          ;
          iVar1 = EVP_Digest(local_80,(long)local_88,local_68,&local_84,type,(ENGINE *)0x0);
          if (iVar1 != 0) {
            iVar1 = ASN1_OCTET_STRING_set(str,local_68,local_84);
            if (iVar1 != 0) {
              EVP_MD_free(type);
              goto LAB_0010019f;
            }
          }
          EVP_MD_free(type);
          ASN1_OCTET_STRING_free(str);
        }
      }
    }
  }
  str = (ASN1_OCTET_STRING *)0x0;
LAB_0010019f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_OCTET_STRING * s2i_skey_id(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,char *param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  iVar1 = strcmp(param_3,"none");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_3,"hash");
    if (iVar1 != 0) {
      pAVar2 = s2i_ASN1_OCTET_STRING(param_1,param_2,param_3);
      return pAVar2;
    }
    if (param_2 != (X509V3_CTX *)0x0) {
      if ((param_2->flags & 1) != 0) goto LAB_00100280;
      if (param_2->subject_cert != (X509 *)0x0) {
        pAVar2 = (ASN1_OCTET_STRING *)ossl_x509_pubkey_hash(param_2->subject_cert->ex_kusage);
        return pAVar2;
      }
      if (param_2->subject_req != (X509_REQ *)0x0) {
        pAVar2 = (ASN1_OCTET_STRING *)ossl_x509_pubkey_hash(param_2->subject_req[1].sig_alg);
        return pAVar2;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/x509/v3_skid.c",0x68,"s2i_skey_id");
    ERR_set_error(0x22,0x7d,0);
    return (ASN1_OCTET_STRING *)0x0;
  }
LAB_00100280:
  pAVar2 = ASN1_OCTET_STRING_new();
  return pAVar2;
}



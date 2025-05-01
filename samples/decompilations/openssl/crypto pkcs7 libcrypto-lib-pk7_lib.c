
long PKCS7_ctrl(PKCS7 *p7,int cmd,long larg,char *parg)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (cmd == 1) {
    if (iVar1 == 0x16) {
      if ((p7->d).sign == (PKCS7_SIGNED *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x20,__func___11);
        ERR_set_error(0x21,0x7a,0);
        return 0;
      }
      p7->detached = (int)larg;
      lVar3 = (long)(int)larg;
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = OBJ_obj2nid(((p7->d).sign)->contents->type);
      if (iVar1 == 0x15) {
        ASN1_OCTET_STRING_free((((p7->d).sign)->contents->d).data);
        (((p7->d).sign)->contents->d).ptr = (char *)0x0;
        return lVar3;
      }
      return lVar3;
    }
    ERR_new();
    uVar5 = 0x2c;
  }
  else {
    if (cmd != 2) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x41,__func___11);
      ERR_set_error(0x21,0x6e,0);
      return 0;
    }
    if (iVar1 == 0x16) {
      if ((p7->d).sign == (PKCS7_SIGNED *)0x0) {
        uVar2 = 1;
        uVar4 = 1;
      }
      else {
        bVar6 = (((p7->d).sign)->contents->d).ptr == (char *)0x0;
        uVar4 = (ulong)bVar6;
        uVar2 = (uint)bVar6;
      }
      p7->detached = uVar2;
      return uVar4;
    }
    ERR_new();
    uVar5 = 0x3a;
  }
  ERR_set_debug("crypto/pkcs7/pk7_lib.c",uVar5,__func___11);
  ERR_set_error(0x21,0x68,0);
  return 0;
}



int PKCS7_set_content(PKCS7 *p7,PKCS7 *p7_data)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x16) {
    PKCS7_free(((p7->d).sign)->contents);
    ((p7->d).sign)->contents = p7_data;
  }
  else {
    if (iVar1 != 0x19) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x6b,"PKCS7_set_content");
      ERR_set_error(0x21,0x70,0);
      return 0;
    }
    PKCS7_free((PKCS7 *)((p7->d).sign)->cert);
    ((p7->d).sign)->cert = (stack_st_X509 *)p7_data;
  }
  return 1;
}



int PKCS7_set_type(PKCS7 *p7,int type)

{
  PKCS7_ENC_CONTENT *pPVar1;
  X509_ALGOR *pXVar2;
  int iVar3;
  ASN1_OBJECT *pAVar4;
  PKCS7_DIGEST *pPVar5;
  PKCS7_ENCRYPT *pPVar6;
  ASN1_OCTET_STRING *pAVar7;
  PKCS7_SIGNED *pPVar8;
  PKCS7_ENVELOPE *pPVar9;
  PKCS7_SIGN_ENVELOPE *pPVar10;
  
  pAVar4 = OBJ_nid2obj(type);
  if (5 < type - 0x15U) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0xb2,"PKCS7_set_type");
    ERR_set_error(0x21,0x70,0);
    return 0;
  }
  p7->type = pAVar4;
  switch(type) {
  case 0x15:
    pAVar7 = ASN1_OCTET_STRING_new();
    (p7->d).data = pAVar7;
    return (int)(pAVar7 != (ASN1_OCTET_STRING *)0x0);
  case 0x16:
    pPVar8 = PKCS7_SIGNED_new();
    (p7->d).sign = pPVar8;
    if (pPVar8 == (PKCS7_SIGNED *)0x0) {
      return 0;
    }
    iVar3 = ASN1_INTEGER_set(pPVar8->version,1);
    if (iVar3 == 0) {
      PKCS7_SIGNED_free((p7->d).sign);
      (p7->d).ptr = (char *)0x0;
      return 0;
    }
    break;
  case 0x17:
    pPVar9 = PKCS7_ENVELOPE_new();
    (p7->d).enveloped = pPVar9;
    if (pPVar9 == (PKCS7_ENVELOPE *)0x0) {
      return 0;
    }
    iVar3 = ASN1_INTEGER_set(pPVar9->version,0);
    if (iVar3 == 0) {
      return 0;
    }
    pPVar1 = ((p7->d).enveloped)->enc_data;
    pAVar4 = OBJ_nid2obj(0x15);
    pPVar1->content_type = pAVar4;
    break;
  case 0x18:
    pPVar10 = PKCS7_SIGN_ENVELOPE_new();
    (p7->d).signed_and_enveloped = pPVar10;
    if (pPVar10 == (PKCS7_SIGN_ENVELOPE *)0x0) {
      return 0;
    }
    iVar3 = ASN1_INTEGER_set(pPVar10->version,1);
    if (iVar3 == 0) {
      return 0;
    }
    pPVar1 = ((p7->d).signed_and_enveloped)->enc_data;
    pAVar4 = OBJ_nid2obj(0x15);
    pPVar1->content_type = pAVar4;
    break;
  case 0x19:
    pPVar5 = PKCS7_DIGEST_new();
    (p7->d).digest = pPVar5;
    if (pPVar5 != (PKCS7_DIGEST *)0x0) {
      iVar3 = ASN1_INTEGER_set(pPVar5->version,0);
      return (uint)(iVar3 != 0);
    }
    return 0;
  case 0x1a:
    pPVar6 = PKCS7_ENCRYPT_new();
    (p7->d).encrypted = pPVar6;
    if (pPVar6 == (PKCS7_ENCRYPT *)0x0) {
      return 0;
    }
    iVar3 = ASN1_INTEGER_set(pPVar6->version,0);
    if (iVar3 == 0) {
      return 0;
    }
    pXVar2 = ((p7->d).digest)->md;
    pAVar4 = OBJ_nid2obj(0x15);
    pXVar2->algorithm = pAVar4;
  }
  return 1;
}



int PKCS7_content_new(PKCS7 *p7,int nid)

{
  int iVar1;
  PKCS7 *p7_00;
  
  p7_00 = PKCS7_new();
  if (p7_00 != (PKCS7 *)0x0) {
    iVar1 = PKCS7_set_type(p7_00,nid);
    if (iVar1 != 0) {
      iVar1 = PKCS7_set_content(p7,p7_00);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  PKCS7_free(p7_00);
  return 0;
}



int PKCS7_set0_type_other(PKCS7 *p7,int type,ASN1_TYPE *other)

{
  ASN1_OBJECT *pAVar1;
  
  pAVar1 = OBJ_nid2obj(type);
  (p7->d).other = other;
  p7->type = pAVar1;
  return 1;
}



int PKCS7_add_certificate(PKCS7 *p7,X509 *x509)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if ((iVar1 != 0x16) && (iVar1 != 0x18)) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x10e,"PKCS7_add_certificate");
    ERR_set_error(0x21,0x71,0);
    return 0;
  }
  iVar1 = ossl_x509_add_cert_new(&((p7->d).data)->flags,x509,1);
  return iVar1;
}



int PKCS7_add_crl(PKCS7 *p7,X509_CRL *x509)

{
  stack_st_X509_CRL **ppsVar1;
  int iVar2;
  stack_st_X509_CRL *psVar3;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if ((iVar2 == 0x16) || (iVar2 == 0x18)) {
    ppsVar1 = &((p7->d).sign)->crl;
    if (((p7->d).sign)->crl == (stack_st_X509_CRL *)0x0) {
      psVar3 = (stack_st_X509_CRL *)OPENSSL_sk_new_null();
      *ppsVar1 = psVar3;
    }
    if (*ppsVar1 == (stack_st_X509_CRL *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x12a,"PKCS7_add_crl");
      ERR_set_error(0x21,0x8000f,0);
    }
    else {
      iVar2 = X509_CRL_up_ref(x509);
      if (iVar2 != 0) {
        iVar2 = OPENSSL_sk_push(*ppsVar1,x509);
        if (iVar2 != 0) {
          return 1;
        }
        X509_CRL_free(x509);
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x123,"PKCS7_add_crl");
    ERR_set_error(0x21,0x71,0);
  }
  return 0;
}



undefined8 pkcs7_get0_certificates(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x18));
  if (iVar1 != 0x16) {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x18));
    if (iVar1 != 0x18) {
      return 0;
    }
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
}



long ossl_pkcs7_get0_ctx(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



int PKCS7_add_signer(PKCS7 *p7,PKCS7_SIGNER_INFO *p7i)

{
  stack_st_PKCS7_SIGNER_INFO *psVar1;
  stack_st_X509_ALGOR *psVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  X509_ALGOR *a;
  ASN1_TYPE *pAVar6;
  ASN1_OBJECT *pAVar7;
  ASN1_INTEGER *pAVar8;
  
  iVar3 = OBJ_obj2nid(p7->type);
  if ((iVar3 == 0x16) || (iVar3 == 0x18)) {
    psVar1 = ((p7->d).sign)->signer_info;
    psVar2 = ((p7->d).sign)->md_algs;
    pAVar7 = p7i->digest_alg->algorithm;
    for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar2), iVar3 < iVar4; iVar3 = iVar3 + 1) {
      puVar5 = (undefined8 *)OPENSSL_sk_value(psVar2,iVar3);
      iVar4 = OBJ_cmp(pAVar7,(ASN1_OBJECT *)*puVar5);
      if (iVar4 == 0) goto LAB_001007d8;
    }
    a = X509_ALGOR_new();
    if (a != (X509_ALGOR *)0x0) {
      pAVar6 = ASN1_TYPE_new();
      a->parameter = pAVar6;
      if (pAVar6 != (ASN1_TYPE *)0x0) {
        iVar3 = OBJ_obj2nid(pAVar7);
        if (iVar3 == 0) {
          pAVar7 = OBJ_dup(pAVar7);
        }
        else {
          pAVar7 = OBJ_nid2obj(iVar3);
        }
        a->algorithm = pAVar7;
        a->parameter->type = 5;
        if ((pAVar7 == (ASN1_OBJECT *)0x0) || (iVar3 = OPENSSL_sk_push(psVar2,a), iVar3 == 0)) {
          X509_ALGOR_free(a);
          return 0;
        }
LAB_001007d8:
        pAVar8 = (ASN1_INTEGER *)ossl_pkcs7_get0_ctx(p7);
        p7i[1].version = pAVar8;
        iVar3 = OPENSSL_sk_push(psVar1,p7i);
        return (int)(iVar3 != 0);
      }
    }
    X509_ALGOR_free(a);
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0xe8,"PKCS7_add_signer");
    ERR_set_error(0x21,0x8000d,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0xd4,"PKCS7_add_signer");
    ERR_set_error(0x21,0x71,0);
  }
  return 0;
}



void ossl_pkcs7_set0_libctx(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



bool ossl_pkcs7_set1_propq(long param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    CRYPTO_free(*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  bVar2 = true;
  if (param_2 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(param_2,"crypto/pkcs7/pk7_lib.c",0x1f5);
    bVar2 = pcVar1 != (char *)0x0;
    *(char **)(param_1 + 0x30) = pcVar1;
  }
  return bVar2;
}



undefined8 ossl_pkcs7_ctx_get0_libctx(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined8 ossl_pkcs7_ctx_get0_propq(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



int PKCS7_set_digest(PKCS7 *p7,EVP_MD *md)

{
  X509_ALGOR *pXVar1;
  int iVar2;
  ASN1_TYPE *pAVar3;
  ASN1_OBJECT *pAVar4;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if (iVar2 == 0x19) {
    pXVar1 = ((p7->d).digest)->md;
    pAVar3 = ASN1_TYPE_new();
    pXVar1->parameter = pAVar3;
    if (pAVar3 == (ASN1_TYPE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x213,"PKCS7_set_digest");
      ERR_set_error(0x21,0x8000d,0);
      return 0;
    }
    ((p7->d).digest)->md->parameter->type = 5;
    iVar2 = EVP_MD_get_type(md);
    pXVar1 = ((p7->d).digest)->md;
    pAVar4 = OBJ_nid2obj(iVar2);
    pXVar1->algorithm = pAVar4;
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x21b,"PKCS7_set_digest");
    ERR_set_error(0x21,0x71,0);
  }
  return 1;
}



stack_st_PKCS7_SIGNER_INFO * PKCS7_get_signer_info(PKCS7 *p7)

{
  int iVar1;
  
  if (p7 == (PKCS7 *)0x0) {
    return (stack_st_PKCS7_SIGNER_INFO *)0x0;
  }
  if ((p7->d).ptr == (char *)0x0) {
    return (stack_st_PKCS7_SIGNER_INFO *)0x0;
  }
  iVar1 = OBJ_obj2nid(p7->type);
  if ((iVar1 != 0x16) && (iVar1 = OBJ_obj2nid(p7->type), iVar1 != 0x18)) {
    return (stack_st_PKCS7_SIGNER_INFO *)0x0;
  }
  return ((p7->d).sign)->signer_info;
}



void ossl_pkcs7_resolve_libctx(PKCS7 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  stack_st_PKCS7_SIGNER_INFO *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  stack_st_PKCS7_RECIP_INFO *psVar10;
  
  lVar3 = ossl_pkcs7_get0_ctx();
  uVar4 = ossl_pkcs7_ctx_get0_libctx(lVar3);
  uVar5 = ossl_pkcs7_ctx_get0_propq(lVar3);
  if ((lVar3 != 0) && ((param_1->d).ptr != (char *)0x0)) {
    iVar1 = OBJ_obj2nid(param_1->type);
    if (iVar1 == 0x18) {
      psVar10 = ((param_1->d).signed_and_enveloped)->recipientinfo;
    }
    else {
      psVar10 = (stack_st_PKCS7_RECIP_INFO *)0x0;
      iVar1 = OBJ_obj2nid(param_1->type);
      if (iVar1 == 0x17) {
        psVar10 = (stack_st_PKCS7_RECIP_INFO *)((param_1->d).data)->data;
      }
    }
    psVar6 = PKCS7_get_signer_info(param_1);
    uVar7 = pkcs7_get0_certificates(param_1);
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar7);
      if (iVar2 <= iVar1) break;
      uVar8 = OPENSSL_sk_value(uVar7,iVar1);
      ossl_x509_set0_libctx(uVar8,uVar4,uVar5);
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(psVar10);
      if (iVar2 <= iVar1) break;
      lVar9 = OPENSSL_sk_value(psVar10,iVar1);
      ossl_x509_set0_libctx(*(undefined8 *)(lVar9 + 0x20),uVar4,uVar5);
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(psVar6);
      if (iVar2 <= iVar1) break;
      lVar9 = OPENSSL_sk_value(psVar6,iVar1);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x40) = lVar3;
      }
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



undefined8 ossl_pkcs7_ctx_propagate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  ossl_pkcs7_set0_libctx(param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = ossl_pkcs7_set1_propq(param_2,*(undefined8 *)(param_1 + 0x30));
  if ((int)uVar1 != 0) {
    ossl_pkcs7_resolve_libctx(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



void PKCS7_SIGNER_INFO_get0_algs
               (PKCS7_SIGNER_INFO *si,EVP_PKEY **pk,X509_ALGOR **pdig,X509_ALGOR **psig)

{
  if (pk != (EVP_PKEY **)0x0) {
    *pk = si->pkey;
  }
  if (pdig != (X509_ALGOR **)0x0) {
    *pdig = si->digest_alg;
  }
  if (psig != (X509_ALGOR **)0x0) {
    *psig = si->digest_enc_alg;
  }
  return;
}



int PKCS7_SIGNER_INFO_set(PKCS7_SIGNER_INFO *p7i,X509 *x509,EVP_PKEY *pkey,EVP_MD *dgst)

{
  PKCS7_ISSUER_AND_SERIAL *pPVar1;
  code *pcVar2;
  EVP_PKEY *pEVar3;
  int iVar4;
  int pkey_nid;
  X509_NAME *name;
  ASN1_INTEGER *pAVar5;
  ASN1_OBJECT *pAVar6;
  long in_FS_OFFSET;
  int local_44;
  X509_ALGOR *local_40;
  X509_ALGOR *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = ASN1_INTEGER_set(p7i->version,1);
  if (iVar4 != 0) {
    name = X509_get_issuer_name(x509);
    iVar4 = X509_NAME_set(&p7i->issuer_and_serial->issuer,name);
    if (iVar4 != 0) {
      ASN1_INTEGER_free(p7i->issuer_and_serial->serial);
      pAVar5 = (ASN1_INTEGER *)X509_get0_serialNumber(x509);
      pPVar1 = p7i->issuer_and_serial;
      pAVar5 = ASN1_INTEGER_dup(pAVar5);
      pPVar1->serial = pAVar5;
      if (pAVar5 != (ASN1_INTEGER *)0x0) {
        iVar4 = EVP_PKEY_up_ref(pkey);
        if (iVar4 != 0) {
          p7i->pkey = pkey;
          iVar4 = EVP_MD_get_type(dgst);
          pAVar6 = OBJ_nid2obj(iVar4);
          iVar4 = X509_ALGOR_set0(p7i->digest_alg,pAVar6,5,(void *)0x0);
          if (iVar4 != 0) {
            iVar4 = EVP_PKEY_is_a(pkey);
            if (iVar4 == 0) {
              iVar4 = EVP_PKEY_is_a(pkey);
              if (iVar4 == 0) {
                iVar4 = EVP_PKEY_is_a(pkey);
                if (iVar4 != 0) {
                  local_38 = (X509_ALGOR *)0x0;
                  PKCS7_SIGNER_INFO_get0_algs(p7i,(EVP_PKEY **)0x0,(X509_ALGOR **)0x0,&local_38);
                  if (local_38 != (X509_ALGOR *)0x0) {
                    pAVar6 = OBJ_nid2obj(6);
                    iVar4 = X509_ALGOR_set0(local_38,pAVar6,5,(void *)0x0);
                    goto LAB_00100c50;
                  }
LAB_00100e1b:
                  iVar4 = 1;
                  goto LAB_00100c50;
                }
                if ((*(long *)&pkey->references != 0) &&
                   (pcVar2 = *(code **)(*(long *)&pkey->references + 0xb0), pcVar2 != (code *)0x0))
                {
                  iVar4 = (*pcVar2)(pkey,1,0,p7i);
                  if (0 < iVar4) goto LAB_00100e1b;
                  if (iVar4 != -2) {
                    ERR_new();
                    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x184,"PKCS7_SIGNER_INFO_set");
                    ERR_set_error(0x21,0x93,0);
                    goto LAB_00100c4b;
                  }
                }
                ERR_new();
                ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x188,"PKCS7_SIGNER_INFO_set");
                ERR_set_error(0x21,0x94,0);
                goto LAB_00100c4b;
              }
            }
            pEVar3 = p7i->pkey;
            PKCS7_SIGNER_INFO_get0_algs(p7i,(EVP_PKEY **)0x0,&local_40,&local_38);
            if ((local_40 != (X509_ALGOR *)0x0) && (local_40->algorithm != (ASN1_OBJECT *)0x0)) {
              iVar4 = OBJ_obj2nid(local_40->algorithm);
              if (iVar4 != 0) {
                pkey_nid = EVP_PKEY_get_id(pEVar3);
                iVar4 = OBJ_find_sigid_by_algs(&local_44,iVar4,pkey_nid);
                if (iVar4 != 0) {
                  pAVar6 = OBJ_nid2obj(local_44);
                  iVar4 = X509_ALGOR_set0(local_38,pAVar6,-1,(void *)0x0);
                  goto LAB_00100c50;
                }
              }
            }
            iVar4 = -1;
            goto LAB_00100c50;
          }
        }
      }
    }
  }
LAB_00100c4b:
  iVar4 = 0;
LAB_00100c50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



PKCS7_SIGNER_INFO * PKCS7_add_signature(PKCS7 *p7,X509 *x509,EVP_PKEY *pkey,EVP_MD *dgst)

{
  int iVar1;
  PKCS7_SIGNER_INFO *p7i;
  char *name;
  PKCS7_SIGNER_INFO *pPVar2;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (dgst == (EVP_MD *)0x0) {
    iVar1 = EVP_PKEY_get_default_digest_nid(pkey,&local_34);
    if (0 < iVar1) {
      name = OBJ_nid2sn(local_34);
      dgst = EVP_get_digestbyname(name);
      if (dgst != (EVP_MD *)0x0) goto LAB_00100ee1;
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x197,"PKCS7_add_signature");
      ERR_set_error(0x21,0x97,0);
    }
LAB_00100fb0:
    p7i = (PKCS7_SIGNER_INFO *)0x0;
  }
  else {
LAB_00100ee1:
    p7i = PKCS7_SIGNER_INFO_new();
    if (p7i == (PKCS7_SIGNER_INFO *)0x0) goto LAB_00100fb0;
    iVar1 = PKCS7_SIGNER_INFO_set(p7i,x509,pkey,dgst);
    if (0 < iVar1) {
      iVar1 = PKCS7_add_signer(p7,p7i);
      pPVar2 = p7i;
      if (iVar1 != 0) goto LAB_00100f1e;
    }
  }
  pPVar2 = (PKCS7_SIGNER_INFO *)0x0;
  PKCS7_SIGNER_INFO_free(p7i);
LAB_00100f1e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void PKCS7_RECIP_INFO_get0_alg(PKCS7_RECIP_INFO *ri,X509_ALGOR **penc)

{
  if (penc != (X509_ALGOR **)0x0) {
    *penc = ri->key_enc_algor;
  }
  return;
}



int PKCS7_add_recipient_info(PKCS7 *p7,PKCS7_RECIP_INFO *ri)

{
  int iVar1;
  stack_st_PKCS7_RECIP_INFO *psVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x17) {
    psVar2 = (stack_st_PKCS7_RECIP_INFO *)((p7->d).data)->data;
  }
  else {
    if (iVar1 != 0x18) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x25b,"PKCS7_add_recipient_info");
      ERR_set_error(0x21,0x71,0);
      return 0;
    }
    psVar2 = ((p7->d).signed_and_enveloped)->recipientinfo;
  }
  iVar1 = OPENSSL_sk_push(psVar2,ri);
  return (int)(iVar1 != 0);
}



int PKCS7_RECIP_INFO_set(PKCS7_RECIP_INFO *p7i,X509 *x509)

{
  PKCS7_ISSUER_AND_SERIAL *pPVar1;
  code *pcVar2;
  int iVar3;
  X509_NAME *name;
  ASN1_INTEGER *pAVar4;
  long lVar5;
  ASN1_OBJECT *aobj;
  undefined8 uVar6;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ASN1_INTEGER_set(p7i->version,0);
  if (iVar3 != 0) {
    name = X509_get_issuer_name(x509);
    iVar3 = X509_NAME_set(&p7i->issuer_and_serial->issuer,name);
    if (iVar3 != 0) {
      ASN1_INTEGER_free(p7i->issuer_and_serial->serial);
      pAVar4 = (ASN1_INTEGER *)X509_get0_serialNumber(x509);
      pPVar1 = p7i->issuer_and_serial;
      pAVar4 = ASN1_INTEGER_dup(pAVar4);
      pPVar1->serial = pAVar4;
      if ((pAVar4 != (ASN1_INTEGER *)0x0) && (lVar5 = X509_get0_pubkey(x509), lVar5 != 0)) {
        iVar3 = EVP_PKEY_is_a(lVar5,"RSA-PSS");
        if (iVar3 != 0) {
          iVar3 = -2;
          goto LAB_001010c2;
        }
        iVar3 = EVP_PKEY_is_a(lVar5,&_LC3);
        if (iVar3 == 0) {
          if ((*(long *)(lVar5 + 8) == 0) ||
             (pcVar2 = *(code **)(*(long *)(lVar5 + 8) + 0xb0), pcVar2 == (code *)0x0)) {
            ERR_new();
            uVar6 = 0x28d;
          }
          else {
            iVar3 = (*pcVar2)(lVar5,2,0,p7i);
            if (iVar3 != -2) {
              if (iVar3 < 1) {
                ERR_new();
                ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x299,"PKCS7_RECIP_INFO_set");
                ERR_set_error(0x21,0x95,0);
                goto LAB_001010c0;
              }
              goto LAB_0010119b;
            }
            ERR_new();
            uVar6 = 0x294;
          }
          ERR_set_debug("crypto/pkcs7/pk7_lib.c",uVar6,"PKCS7_RECIP_INFO_set");
          ERR_set_error(0x21,0x96,0);
        }
        else {
          local_28 = (X509_ALGOR *)0x0;
          PKCS7_RECIP_INFO_get0_alg(p7i,&local_28);
          if (local_28 != (X509_ALGOR *)0x0) {
            aobj = OBJ_nid2obj(6);
            iVar3 = X509_ALGOR_set0(local_28,aobj,5,(void *)0x0);
            if (iVar3 < 1) goto LAB_001010c0;
          }
LAB_0010119b:
          iVar3 = X509_up_ref(x509);
          if (iVar3 != 0) {
            p7i->cert = x509;
            iVar3 = 1;
            goto LAB_001010c2;
          }
        }
      }
    }
  }
LAB_001010c0:
  iVar3 = 0;
LAB_001010c2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



PKCS7_RECIP_INFO * PKCS7_add_recipient(PKCS7 *p7,X509 *x509)

{
  int iVar1;
  PKCS7_RECIP_INFO *p7i;
  ASN1_INTEGER *pAVar2;
  
  p7i = PKCS7_RECIP_INFO_new();
  if (p7i != (PKCS7_RECIP_INFO *)0x0) {
    iVar1 = PKCS7_RECIP_INFO_set(p7i,x509);
    if (0 < iVar1) {
      iVar1 = PKCS7_add_recipient_info(p7,p7i);
      if (iVar1 != 0) {
        pAVar2 = (ASN1_INTEGER *)ossl_pkcs7_get0_ctx(p7);
        p7i[1].version = pAVar2;
        return p7i;
      }
    }
  }
  PKCS7_RECIP_INFO_free(p7i);
  return (PKCS7_RECIP_INFO *)0x0;
}



X509 * PKCS7_cert_from_signer_info(PKCS7 *p7,PKCS7_SIGNER_INFO *si)

{
  int iVar1;
  X509 *pXVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 != 0x16) {
    return (X509 *)0x0;
  }
  pXVar2 = X509_find_by_issuer_and_serial
                     (((p7->d).sign)->cert,si->issuer_and_serial->issuer,
                      si->issuer_and_serial->serial);
  return pXVar2;
}



int PKCS7_set_cipher(PKCS7 *p7,EVP_CIPHER *cipher)

{
  pkcs7_st *ppVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if (iVar2 == 0x17) {
    ppVar1 = ((p7->d).digest)->contents;
    iVar2 = EVP_CIPHER_get_type(cipher);
  }
  else {
    if (iVar2 != 0x18) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x2c1,"PKCS7_set_cipher");
      ERR_set_error(0x21,0x71,0);
      return 0;
    }
    ppVar1 = ((p7->d).sign)->contents;
    iVar2 = EVP_CIPHER_get_type(cipher);
  }
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_lib.c",0x2c8,"PKCS7_set_cipher");
    ERR_set_error(0x21,0x90,0);
    return 0;
  }
  ppVar1->type = (ASN1_OBJECT *)cipher;
  pcVar3 = (char *)ossl_pkcs7_get0_ctx(p7);
  (ppVar1->d).ptr = pcVar3;
  return 1;
}



int PKCS7_stream(uchar ***boundary,PKCS7 *p7)

{
  int iVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x17) {
    pAVar2 = ((p7->d).enveloped)->enc_data->enc_data;
    if (pAVar2 != (ASN1_OCTET_STRING *)0x0) goto LAB_00101487;
    pAVar2 = ASN1_OCTET_STRING_new();
    ((p7->d).enveloped)->enc_data->enc_data = pAVar2;
  }
  else if (iVar1 < 0x18) {
    if (iVar1 == 0x15) {
      pAVar2 = (p7->d).data;
    }
    else {
      if (iVar1 != 0x16) {
        return 0;
      }
      pAVar2 = (((p7->d).sign)->contents->d).data;
    }
  }
  else {
    if (iVar1 != 0x18) {
      return 0;
    }
    pAVar2 = ((p7->d).signed_and_enveloped)->enc_data->enc_data;
    if (pAVar2 != (ASN1_OCTET_STRING *)0x0) goto LAB_00101487;
    pAVar2 = ASN1_OCTET_STRING_new();
    ((p7->d).signed_and_enveloped)->enc_data->enc_data = pAVar2;
  }
  if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
    return 0;
  }
LAB_00101487:
  pAVar2->flags = pAVar2->flags | 0x10;
  *boundary = &pAVar2->data;
  return 1;
}



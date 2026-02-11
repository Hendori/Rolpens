
OCSP_CERTID *
OCSP_cert_id_new(EVP_MD *dgst,X509_NAME *issuerName,ASN1_BIT_STRING *issuerKey,
                ASN1_INTEGER *serialNumber)

{
  int iVar1;
  OCSP_CERTID *a;
  ASN1_OBJECT *pAVar2;
  ASN1_OCTET_STRING *pAVar3;
  OCSP_CERTID *pOVar4;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = OCSP_CERTID_new();
  if (a != (OCSP_CERTID *)0x0) {
    ASN1_OBJECT_free((ASN1_OBJECT *)a->hashAlgorithm);
    iVar1 = EVP_MD_get_type(dgst);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_lib.c",0x3b,"OCSP_cert_id_new");
      ERR_set_error(0x27,0x78,0);
    }
    else {
      pAVar2 = OBJ_nid2obj(iVar1);
      a->hashAlgorithm = (X509_ALGOR *)pAVar2;
      if (pAVar2 != (ASN1_OBJECT *)0x0) {
        pAVar3 = (ASN1_OCTET_STRING *)ASN1_TYPE_new();
        a->issuerNameHash = pAVar3;
        if (pAVar3 != (ASN1_OCTET_STRING *)0x0) {
          pAVar3->length = 5;
          iVar1 = X509_NAME_digest(issuerName,dgst,local_88,&local_8c);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/ocsp/ocsp_lib.c",0x56,"OCSP_cert_id_new");
            ERR_set_error(0x27,0x66,0);
          }
          else {
            iVar1 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)&a->issuerKeyHash,local_88,local_8c);
            if ((((iVar1 != 0) &&
                 (iVar1 = EVP_Digest(issuerKey->data,(long)issuerKey->length,local_88,&local_8c,dgst
                                     ,(ENGINE *)0x0), iVar1 != 0)) &&
                (iVar1 = ASN1_OCTET_STRING_set
                                   ((ASN1_OCTET_STRING *)&a[1].issuerNameHash,local_88,local_8c),
                iVar1 != 0)) &&
               ((pOVar4 = a, serialNumber == (ASN1_INTEGER *)0x0 ||
                (iVar1 = ASN1_STRING_copy((ASN1_STRING *)(a + 2),serialNumber), iVar1 != 0))))
            goto LAB_0010011b;
          }
        }
      }
    }
  }
  pOVar4 = (OCSP_CERTID *)0x0;
  OCSP_CERTID_free(a);
LAB_0010011b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar4;
}



OCSP_CERTID * OCSP_cert_to_id(EVP_MD *dgst,X509 *subject,X509 *issuer)

{
  X509_NAME *issuerName;
  ASN1_INTEGER *serialNumber;
  ASN1_BIT_STRING *issuerKey;
  OCSP_CERTID *pOVar1;
  
  if (dgst == (EVP_MD *)0x0) {
    dgst = EVP_sha1();
  }
  if (subject == (X509 *)0x0) {
    issuerName = X509_get_subject_name(issuer);
    serialNumber = (ASN1_INTEGER *)0x0;
  }
  else {
    issuerName = X509_get_issuer_name(subject);
    serialNumber = (ASN1_INTEGER *)X509_get0_serialNumber(subject);
  }
  issuerKey = X509_get0_pubkey_bitstr(issuer);
  pOVar1 = OCSP_cert_id_new(dgst,issuerName,issuerKey,serialNumber);
  return pOVar1;
}



int OCSP_id_issuer_cmp(OCSP_CERTID *a,OCSP_CERTID *b)

{
  int iVar1;
  
  iVar1 = OBJ_cmp((ASN1_OBJECT *)a->hashAlgorithm,(ASN1_OBJECT *)b->hashAlgorithm);
  if (iVar1 == 0) {
    iVar1 = ASN1_OCTET_STRING_cmp
                      ((ASN1_OCTET_STRING *)&a->issuerKeyHash,(ASN1_OCTET_STRING *)&b->issuerKeyHash
                      );
    if (iVar1 == 0) {
      iVar1 = ASN1_OCTET_STRING_cmp
                        ((ASN1_OCTET_STRING *)&a[1].issuerNameHash,
                         (ASN1_OCTET_STRING *)&b[1].issuerNameHash);
      return iVar1;
    }
  }
  return iVar1;
}



int OCSP_id_cmp(OCSP_CERTID *a,OCSP_CERTID *b)

{
  int iVar1;
  
  iVar1 = OCSP_id_issuer_cmp(a,b);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)(a + 2),(ASN1_INTEGER *)(b + 2));
  return iVar1;
}



OCSP_CERTID * OCSP_CERTID_dup(OCSP_CERTID *id)

{
  ASN1_ITEM *it;
  OCSP_CERTID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTID_it();
  pOVar1 = (OCSP_CERTID *)ASN1_item_dup(it,id);
  return pOVar1;
}



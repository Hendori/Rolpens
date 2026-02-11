
int OCSP_request_onereq_count(OCSP_REQUEST *req)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_num(req[1].tbsRequest);
  return iVar1;
}



OCSP_ONEREQ * OCSP_request_onereq_get0(OCSP_REQUEST *req,int i)

{
  OCSP_ONEREQ *pOVar1;
  
  pOVar1 = (OCSP_ONEREQ *)OPENSSL_sk_value(req[1].tbsRequest);
  return pOVar1;
}



OCSP_CERTID * OCSP_onereq_get0_id(OCSP_ONEREQ *one)

{
  return one->reqCert;
}



int OCSP_id_get0_info(ASN1_OCTET_STRING **piNameHash,ASN1_OBJECT **pmd,ASN1_OCTET_STRING **pikeyHash
                     ,ASN1_INTEGER **pserial,OCSP_CERTID *cid)

{
  if (cid != (OCSP_CERTID *)0x0) {
    if (pmd != (ASN1_OBJECT **)0x0) {
      *pmd = (ASN1_OBJECT *)cid->hashAlgorithm;
    }
    if (piNameHash != (ASN1_OCTET_STRING **)0x0) {
      *piNameHash = (ASN1_OCTET_STRING *)&cid->issuerKeyHash;
    }
    if (pikeyHash != (ASN1_OCTET_STRING **)0x0) {
      *pikeyHash = (ASN1_OCTET_STRING *)&cid[1].issuerNameHash;
    }
    if (pserial != (ASN1_INTEGER **)0x0) {
      *pserial = (ASN1_INTEGER *)(cid + 2);
    }
    return 1;
  }
  return 0;
}



int OCSP_request_is_signed(OCSP_REQUEST *req)

{
  return (int)(req[2].tbsRequest != (OCSP_REQINFO *)0x0);
}



OCSP_RESPONSE * OCSP_response_create(int status,OCSP_BASICRESP *bs)

{
  int iVar1;
  OCSP_RESPONSE *a;
  OCSP_RESPBYTES *pOVar2;
  ASN1_OBJECT *pAVar3;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar4;
  
  a = OCSP_RESPONSE_new();
  if ((a != (OCSP_RESPONSE *)0x0) &&
     (iVar1 = ASN1_ENUMERATED_set(a->responseStatus,(long)status), iVar1 != 0)) {
    if (bs == (OCSP_BASICRESP *)0x0) {
      return a;
    }
    pOVar2 = OCSP_RESPBYTES_new();
    a->responseBytes = pOVar2;
    if (pOVar2 != (OCSP_RESPBYTES *)0x0) {
      pAVar3 = OBJ_nid2obj(0x16d);
      pOVar2->responseType = pAVar3;
      pOVar2 = a->responseBytes;
      it = (ASN1_ITEM *)OCSP_BASICRESP_it();
      pAVar4 = ASN1_item_pack(bs,it,&pOVar2->response);
      if (pAVar4 != (ASN1_STRING *)0x0) {
        return a;
      }
    }
  }
  OCSP_RESPONSE_free(a);
  return (OCSP_RESPONSE *)0x0;
}



OCSP_SINGLERESP *
OCSP_basic_add1_status
          (OCSP_BASICRESP *rsp,OCSP_CERTID *cid,int status,int reason,ASN1_TIME *revtime,
          ASN1_TIME *thisupd,ASN1_TIME *nextupd)

{
  OCSP_CERTSTATUS *pOVar1;
  int iVar2;
  OCSP_SINGLERESP *a;
  ASN1_GENERALIZEDTIME *pAVar3;
  OCSP_CERTID *pOVar4;
  ASN1_NULL *pAVar5;
  OCSP_RESPDATA *pOVar6;
  OCSP_REVOKEDINFO *out;
  ASN1_ENUMERATED *a_00;
  
  if (rsp[1].tbsResponseData == (OCSP_RESPDATA *)0x0) {
    pOVar6 = (OCSP_RESPDATA *)OPENSSL_sk_new_null();
    rsp[1].tbsResponseData = pOVar6;
    if (pOVar6 != (OCSP_RESPDATA *)0x0) goto LAB_0010014f;
  }
  else {
LAB_0010014f:
    a = OCSP_SINGLERESP_new();
    if (a != (OCSP_SINGLERESP *)0x0) {
      pAVar3 = ASN1_TIME_to_generalizedtime(thisupd,&a->thisUpdate);
      if ((pAVar3 != (ASN1_GENERALIZEDTIME *)0x0) &&
         ((nextupd == (ASN1_TIME *)0x0 ||
          (pAVar3 = ASN1_TIME_to_generalizedtime(nextupd,&a->nextUpdate),
          pAVar3 != (ASN1_GENERALIZEDTIME *)0x0)))) {
        OCSP_CERTID_free(a->certId);
        pOVar4 = OCSP_CERTID_dup(cid);
        a->certId = pOVar4;
        if (pOVar4 != (OCSP_CERTID *)0x0) {
          pOVar1 = a->certStatus;
          pOVar1->type = status;
          if (status == 1) {
            if (revtime == (ASN1_TIME *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/ocsp/ocsp_srv.c",0x77,"OCSP_basic_add1_status");
              ERR_set_error(0x27,0x6d,0);
              goto LAB_001001ba;
            }
            out = OCSP_REVOKEDINFO_new();
            (pOVar1->value).revoked = out;
            if ((out == (OCSP_REVOKEDINFO *)0x0) ||
               (pAVar3 = ASN1_TIME_to_generalizedtime(revtime,&out->revocationTime),
               pAVar3 == (ASN1_GENERALIZEDTIME *)0x0)) goto LAB_001001ba;
            if (reason != -1) {
              a_00 = ASN1_ENUMERATED_new();
              out->revocationReason = a_00;
              if ((a_00 == (ASN1_ENUMERATED *)0x0) ||
                 (iVar2 = ASN1_ENUMERATED_set(a_00,(long)reason), iVar2 == 0)) goto LAB_001001ba;
            }
          }
          else {
            if ((status != 2) && (status != 0)) goto LAB_001001ba;
            pAVar5 = ASN1_NULL_new();
            (pOVar1->value).good = pAVar5;
            if (pAVar5 == (ASN1_NULL *)0x0) goto LAB_001001ba;
          }
          iVar2 = OPENSSL_sk_push(rsp[1].tbsResponseData,a);
          if (iVar2 != 0) {
            return a;
          }
        }
      }
      goto LAB_001001ba;
    }
  }
  a = (OCSP_SINGLERESP *)0x0;
LAB_001001ba:
  OCSP_SINGLERESP_free(a);
  return (OCSP_SINGLERESP *)0x0;
}



int OCSP_basic_add1_cert(OCSP_BASICRESP *resp,X509 *cert)

{
  int iVar1;
  
  iVar1 = ossl_x509_add_cert_new(&resp[2].signatureAlgorithm,cert,1);
  return iVar1;
}



int OCSP_RESPID_set_by_name(undefined4 *param_1,X509 *param_2)

{
  int iVar1;
  X509_NAME *name;
  
  name = X509_get_subject_name(param_2);
  iVar1 = X509_NAME_set((X509_NAME **)(param_1 + 2),name);
  if (iVar1 != 0) {
    *param_1 = 0;
    iVar1 = 1;
  }
  return iVar1;
}



undefined8
OCSP_RESPID_set_by_key_ex(undefined4 *param_1,X509 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD *type;
  ASN1_OCTET_STRING *str;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar auStack_48 [24];
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(param_3,&_LC1,param_4);
  if (type == (EVP_MD *)0x0) goto LAB_001003bc;
  iVar1 = X509_pubkey_digest(param_2,type,auStack_48,(uint *)0x0);
  if (iVar1 == 0) {
LAB_00100378:
    uVar2 = 0;
  }
  else {
    str = ASN1_OCTET_STRING_new();
    if (str == (ASN1_OCTET_STRING *)0x0) goto LAB_00100378;
    iVar1 = ASN1_OCTET_STRING_set(str,auStack_48,0x14);
    if (iVar1 == 0) {
      ASN1_OCTET_STRING_free(str);
      goto LAB_00100378;
    }
    *param_1 = 1;
    uVar2 = 1;
    *(ASN1_OCTET_STRING **)(param_1 + 2) = str;
  }
  EVP_MD_free(type);
LAB_001003bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OCSP_RESPID_set_by_key(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = OCSP_RESPID_set_by_key_ex
                      (param_1,param_2,*(undefined8 *)(param_2 + 0x170),
                       *(undefined8 *)(param_2 + 0x178));
    return uVar1;
  }
  return 0;
}



bool OCSP_basic_sign_ctx(OCSP_BASICRESP *param_1,X509 *param_2,EVP_MD_CTX *param_3,
                        undefined8 param_4,ulong param_5)

{
  OCSP_RESPDATA *signature;
  int iVar1;
  long lVar2;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey;
  ASN1_TIME *pAVar3;
  ASN1_ITEM *it;
  
  if ((param_3 == (EVP_MD_CTX *)0x0) || (lVar2 = EVP_MD_CTX_get_pkey_ctx(param_3), lVar2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ocsp/ocsp_srv.c",0xaf,"OCSP_basic_sign_ctx");
    ERR_set_error(0x27,0x82,0);
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx(param_3);
    pkey = EVP_PKEY_CTX_get0_pkey(ctx);
    if ((pkey == (EVP_PKEY *)0x0) || (iVar1 = X509_check_private_key(param_2,pkey), iVar1 == 0)) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_srv.c",0xb5,"OCSP_basic_sign_ctx");
      ERR_set_error(0x27,0x6e,0);
    }
    else if (((param_5 & 1) != 0) ||
            ((iVar1 = OCSP_basic_add1_cert(param_1,param_2), iVar1 != 0 &&
             (iVar1 = X509_add_certs(param_1[2].signatureAlgorithm,param_4,1), iVar1 != 0)))) {
      if ((param_5 & 0x400) == 0) {
        iVar1 = OCSP_RESPID_set_by_name();
      }
      else {
        iVar1 = OCSP_RESPID_set_by_key(&param_1->signatureAlgorithm);
      }
      if ((iVar1 != 0) &&
         (((param_5 & 0x800) != 0 ||
          (pAVar3 = X509_gmtime_adj((ASN1_TIME *)param_1->certs,0), pAVar3 != (ASN1_TIME *)0x0)))) {
        signature = param_1[2].tbsResponseData;
        it = (ASN1_ITEM *)OCSP_RESPDATA_it();
        iVar1 = ASN1_item_sign_ctx(it,(X509_ALGOR *)&param_1[1].signature,(X509_ALGOR *)0x0,
                                   (ASN1_BIT_STRING *)signature,param_1,param_3);
        return iVar1 != 0;
      }
    }
  }
  return false;
}



int OCSP_basic_sign(OCSP_BASICRESP *brsp,X509 *signer,EVP_PKEY *key,EVP_MD *dgst,
                   stack_st_X509 *certs,ulong flags)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EVP_MD_CTX_new();
  local_48 = 0;
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(signer[1].sha1_hash + 8);
    uVar2 = *(undefined8 *)signer[1].sha1_hash;
    uVar5 = EVP_MD_get0_name(dgst);
    iVar3 = EVP_DigestSignInit_ex(lVar4,&local_48,uVar5,uVar2,uVar1,key);
    if (iVar3 != 0) {
      iVar3 = OCSP_basic_sign_ctx(brsp,signer,lVar4,certs,flags);
      EVP_MD_CTX_free(lVar4);
      goto LAB_00100669;
    }
    EVP_MD_CTX_free(lVar4);
  }
  iVar3 = 0;
LAB_00100669:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool OCSP_RESPID_match_ex(int *param_1,X509 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  X509_NAME *b;
  EVP_MD *type;
  long *plVar2;
  byte bVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_48;
  long local_40;
  int local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 1) {
    type = (EVP_MD *)EVP_MD_fetch(param_3,&_LC1,param_4);
    if (((type == (EVP_MD *)0x0) || (*(long *)(param_1 + 2) == 0)) ||
       (iVar1 = X509_pubkey_digest(param_2,type,(uchar *)&local_48,(uint *)0x0), iVar1 == 0)) {
      bVar4 = false;
    }
    else {
      bVar3 = 0;
      bVar4 = false;
      iVar1 = ASN1_STRING_length(*(ASN1_STRING **)(param_1 + 2));
      if (iVar1 == 0x14) {
        plVar2 = (long *)ASN1_STRING_get0_data(*(undefined8 *)(param_1 + 2));
        if ((*plVar2 != local_48 || plVar2[1] != local_40) || ((int)plVar2[2] != local_38)) {
          bVar3 = 1;
        }
        bVar4 = (bool)(bVar3 ^ 1);
      }
    }
  }
  else {
    if (*param_1 == 0) {
      bVar4 = false;
      if (*(long *)(param_1 + 2) != 0) {
        b = X509_get_subject_name(param_2);
        iVar1 = X509_NAME_cmp(*(X509_NAME **)(param_1 + 2),b);
        bVar4 = iVar1 == 0;
      }
      goto LAB_001006ec;
    }
    bVar4 = false;
    type = (EVP_MD *)0x0;
  }
  EVP_MD_free(type);
LAB_001006ec:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



undefined8 OCSP_RESPID_match(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = OCSP_RESPID_match_ex
                      (param_1,param_2,*(undefined8 *)(param_2 + 0x170),
                       *(undefined8 *)(param_2 + 0x178));
    return uVar1;
  }
  return 0;
}




OCSP_ONEREQ * OCSP_request_add0_id(OCSP_REQUEST *req,OCSP_CERTID *cid)

{
  int iVar1;
  OCSP_ONEREQ *a;
  
  a = OCSP_ONEREQ_new();
  if (a != (OCSP_ONEREQ *)0x0) {
    OCSP_CERTID_free(a->reqCert);
    a->reqCert = cid;
    if (req == (OCSP_REQUEST *)0x0) {
      return a;
    }
    iVar1 = OPENSSL_sk_push(req[1].tbsRequest,a);
    if (iVar1 != 0) {
      return a;
    }
    a->reqCert = (OCSP_CERTID *)0x0;
    OCSP_ONEREQ_free(a);
  }
  return (OCSP_ONEREQ *)0x0;
}



int OCSP_request_set1_name(OCSP_REQUEST *req,X509_NAME *nm)

{
  int iVar1;
  OCSP_SIGNATURE *a;
  
  a = (OCSP_SIGNATURE *)GENERAL_NAME_new();
  if (a != (OCSP_SIGNATURE *)0x0) {
    iVar1 = X509_NAME_set(&((_union_851 *)&a->signature)->directoryName,nm);
    if (iVar1 != 0) {
      *(int *)&a->signatureAlgorithm = 4;
      GENERAL_NAME_free((GENERAL_NAME *)req->optionalSignature);
      req->optionalSignature = a;
      return 1;
    }
    GENERAL_NAME_free((GENERAL_NAME *)a);
  }
  return 0;
}



int OCSP_request_add1_cert(OCSP_REQUEST *req,X509 *cert)

{
  int iVar1;
  OCSP_REQINFO *pOVar2;
  
  if (req[2].tbsRequest == (OCSP_REQINFO *)0x0) {
    pOVar2 = (OCSP_REQINFO *)OCSP_SIGNATURE_new();
    req[2].tbsRequest = pOVar2;
    if (pOVar2 == (OCSP_REQINFO *)0x0) {
      return 0;
    }
  }
  if (cert == (X509 *)0x0) {
    return 1;
  }
  iVar1 = ossl_x509_add_cert_new(&(req[2].tbsRequest)->requestExtensions,cert,1);
  return iVar1;
}



int OCSP_request_sign(OCSP_REQUEST *req,X509 *signer,EVP_PKEY *key,EVP_MD *dgst,stack_st_X509 *certs
                     ,ulong flags)

{
  undefined8 uVar1;
  undefined8 uVar2;
  stack_st_OCSP_ONEREQ *psVar3;
  int iVar4;
  X509_NAME *nm;
  OCSP_REQINFO *pOVar5;
  undefined8 uVar6;
  
  nm = X509_get_subject_name(signer);
  iVar4 = OCSP_request_set1_name(req,nm);
  if (iVar4 != 0) {
    pOVar5 = (OCSP_REQINFO *)OCSP_SIGNATURE_new();
    req[2].tbsRequest = pOVar5;
    if (pOVar5 == (OCSP_REQINFO *)0x0) goto LAB_0010015f;
    if (key != (EVP_PKEY *)0x0) {
      iVar4 = X509_check_private_key(signer,key);
      if (iVar4 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x5d,"OCSP_request_sign");
        ERR_set_error(0x27,0x6e,0);
        pOVar5 = req[2].tbsRequest;
        goto LAB_0010015f;
      }
      pOVar5 = req[2].tbsRequest;
      uVar1 = *(undefined8 *)(signer[1].sha1_hash + 8);
      uVar2 = *(undefined8 *)signer[1].sha1_hash;
      psVar3 = pOVar5->requestList;
      uVar6 = OCSP_REQINFO_it();
      iVar4 = ASN1_item_sign_ex(uVar6,pOVar5,0,psVar3,req,0,key,dgst,uVar2,uVar1);
      if (iVar4 == 0) goto LAB_0010015b;
    }
    if (((flags & 1) != 0) ||
       ((iVar4 = OCSP_request_add1_cert(req,signer), iVar4 != 0 &&
        (iVar4 = X509_add_certs((req[2].tbsRequest)->requestExtensions,certs,1), iVar4 != 0)))) {
      return 1;
    }
  }
LAB_0010015b:
  pOVar5 = req[2].tbsRequest;
LAB_0010015f:
  OCSP_SIGNATURE_free((OCSP_SIGNATURE *)pOVar5);
  req[2].tbsRequest = (OCSP_REQINFO *)0x0;
  return 0;
}



int OCSP_response_status(OCSP_RESPONSE *resp)

{
  long lVar1;
  
  lVar1 = ASN1_ENUMERATED_get(resp->responseStatus);
  return (int)lVar1;
}



OCSP_BASICRESP * OCSP_response_get1_basic(OCSP_RESPONSE *resp)

{
  OCSP_RESPBYTES *pOVar1;
  int iVar2;
  ASN1_ITEM *it;
  OCSP_BASICRESP *pOVar3;
  
  pOVar1 = resp->responseBytes;
  if (pOVar1 == (OCSP_RESPBYTES *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x82,"OCSP_response_get1_basic");
    ERR_set_error(0x27,0x6c,0);
  }
  else {
    iVar2 = OBJ_obj2nid(pOVar1->responseType);
    if (iVar2 == 0x16d) {
      it = (ASN1_ITEM *)OCSP_BASICRESP_it();
      pOVar3 = (OCSP_BASICRESP *)ASN1_item_unpack(pOVar1->response,it);
      return pOVar3;
    }
    ERR_new();
    ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x86,"OCSP_response_get1_basic");
    ERR_set_error(0x27,0x68,0);
  }
  return (OCSP_BASICRESP *)0x0;
}



undefined8 OCSP_resp_get0_signature(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



long OCSP_resp_get0_tbs_sigalg(long param_1)

{
  return param_1 + 0x30;
}



undefined8 OCSP_resp_get0_respdata(undefined8 param_1)

{
  return param_1;
}



int OCSP_resp_count(OCSP_BASICRESP *bs)

{
  int iVar1;
  
  if (bs != (OCSP_BASICRESP *)0x0) {
    iVar1 = OPENSSL_sk_num(bs[1].tbsResponseData);
    return iVar1;
  }
  return -1;
}



OCSP_SINGLERESP * OCSP_resp_get0(OCSP_BASICRESP *bs,int idx)

{
  OCSP_SINGLERESP *pOVar1;
  
  if (bs != (OCSP_BASICRESP *)0x0) {
    pOVar1 = (OCSP_SINGLERESP *)OPENSSL_sk_value(bs[1].tbsResponseData);
    return pOVar1;
  }
  return (OCSP_SINGLERESP *)0x0;
}



undefined8 OCSP_resp_get0_produced_at(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 OCSP_resp_get0_certs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



undefined8 OCSP_resp_get0_id(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 8) == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x10);
    *param_3 = 0;
  }
  return 1;
}



bool OCSP_resp_get1_id(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  X509_NAME *pXVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    pXVar1 = X509_NAME_dup(*(X509_NAME **)(param_1 + 0x10));
    *param_3 = pXVar1;
    *param_2 = 0;
    if (pXVar1 != (X509_NAME *)0x0) {
      return true;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return false;
    }
    pXVar1 = (X509_NAME *)ASN1_OCTET_STRING_dup(*(ASN1_OCTET_STRING **)(param_1 + 0x10));
    *param_2 = pXVar1;
    *param_3 = 0;
  }
  return pXVar1 != (X509_NAME *)0x0;
}



int OCSP_resp_find(OCSP_BASICRESP *bs,OCSP_CERTID *id,int last)

{
  OCSP_RESPDATA *pOVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (bs == (OCSP_BASICRESP *)0x0) {
LAB_00100510:
    last = -1;
  }
  else {
    pOVar1 = bs[1].tbsResponseData;
    if (last < 0) {
      last = -1;
    }
    do {
      last = last + 1;
      iVar2 = OPENSSL_sk_num(pOVar1);
      if (iVar2 <= last) goto LAB_00100510;
      puVar3 = (undefined8 *)OPENSSL_sk_value(pOVar1,last);
      iVar2 = OCSP_id_cmp(id,(OCSP_CERTID *)*puVar3);
    } while (iVar2 != 0);
  }
  return last;
}



int OCSP_single_get0_status
              (OCSP_SINGLERESP *single,int *reason,ASN1_GENERALIZEDTIME **revtime,
              ASN1_GENERALIZEDTIME **thisupd,ASN1_GENERALIZEDTIME **nextupd)

{
  OCSP_REVOKEDINFO *pOVar1;
  ASN1_ENUMERATED *a;
  long lVar2;
  int iVar3;
  
  if (single == (OCSP_SINGLERESP *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = single->certStatus->type;
    if (iVar3 == 1) {
      pOVar1 = (single->certStatus->value).revoked;
      if (revtime != (ASN1_GENERALIZEDTIME **)0x0) {
        *revtime = pOVar1->revocationTime;
      }
      if (reason != (int *)0x0) {
        a = pOVar1->revocationReason;
        if (a == (ASN1_ENUMERATED *)0x0) {
          *reason = -1;
        }
        else {
          lVar2 = ASN1_ENUMERATED_get(a);
          *reason = (int)lVar2;
        }
      }
    }
    if (thisupd != (ASN1_GENERALIZEDTIME **)0x0) {
      *thisupd = single->thisUpdate;
    }
    if (nextupd != (ASN1_GENERALIZEDTIME **)0x0) {
      *nextupd = single->nextUpdate;
    }
  }
  return iVar3;
}



int OCSP_resp_find_status
              (OCSP_BASICRESP *bs,OCSP_CERTID *id,int *status,int *reason,
              ASN1_GENERALIZEDTIME **revtime,ASN1_GENERALIZEDTIME **thisupd,
              ASN1_GENERALIZEDTIME **nextupd)

{
  int iVar1;
  int iVar2;
  OCSP_SINGLERESP *single;
  
  iVar1 = OCSP_resp_find(bs,id,-1);
  iVar2 = 0;
  if (-1 < iVar1) {
    single = OCSP_resp_get0(bs,iVar1);
    iVar1 = OCSP_single_get0_status(single,reason,revtime,thisupd,nextupd);
    if (status != (int *)0x0) {
      *status = iVar1;
    }
    iVar2 = 1;
  }
  return iVar2;
}



int OCSP_check_validity(ASN1_GENERALIZEDTIME *thisupd,ASN1_GENERALIZEDTIME *nextupd,long sec,
                       long maxsec)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  time(&local_50);
  iVar1 = ASN1_GENERALIZEDTIME_check(thisupd);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x13f,"OCSP_check_validity");
    ERR_set_error(0x27,0x7b,0);
LAB_001006b8:
    uVar2 = 0;
  }
  else {
    local_48 = local_50 + sec;
    iVar1 = X509_cmp_time(thisupd,&local_48);
    if (0 < iVar1) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x144,"OCSP_check_validity");
      ERR_set_error(0x27,0x7e,0);
    }
    uVar2 = (uint)(0 >= iVar1);
    if (-1 < maxsec) {
      local_48 = local_50 - maxsec;
      iVar1 = X509_cmp_time(thisupd,&local_48);
      if (iVar1 < 0) {
        ERR_new();
        ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x14f,"OCSP_check_validity");
        ERR_set_error(0x27,0x7f,0);
        goto LAB_001006b8;
      }
    }
  }
  if (nextupd == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00100745;
  iVar1 = ASN1_GENERALIZEDTIME_check(nextupd);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x15a,"OCSP_check_validity");
    ERR_set_error(0x27,0x7a,0);
LAB_00100705:
    uVar2 = 0;
  }
  else {
    local_48 = local_50 - sec;
    iVar1 = X509_cmp_time(nextupd,&local_48);
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x15f,"OCSP_check_validity");
      ERR_set_error(0x27,0x7d,0);
      goto LAB_00100705;
    }
  }
  iVar1 = ASN1_STRING_cmp(nextupd,thisupd);
  if (iVar1 < 0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("crypto/ocsp/ocsp_cl.c",0x166,"OCSP_check_validity");
    ERR_set_error(0x27,0x7c,0);
  }
LAB_00100745:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 OCSP_SINGLERESP_get0_id(undefined8 *param_1)

{
  return *param_1;
}



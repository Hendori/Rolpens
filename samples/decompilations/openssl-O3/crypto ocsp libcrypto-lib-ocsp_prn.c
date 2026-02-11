
undefined8 ocsp_certid_print(BIO *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (int)param_3 + 2;
  BIO_printf(param_1,"%*sCertificate ID:\n",param_3,&_LC0);
  BIO_printf(param_1,"%*sHash Algorithm: ",(ulong)uVar1,&_LC0);
  i2a_ASN1_OBJECT(param_1,(ASN1_OBJECT *)*param_2);
  BIO_printf(param_1,"\n%*sIssuer Name Hash: ",(ulong)uVar1,&_LC0);
  i2a_ASN1_STRING(param_1,(ASN1_STRING *)(param_2 + 2),0);
  BIO_printf(param_1,"\n%*sIssuer Key Hash: ",(ulong)uVar1,&_LC0);
  i2a_ASN1_STRING(param_1,(ASN1_STRING *)(param_2 + 5),0);
  BIO_printf(param_1,"\n%*sSerial Number: ",(ulong)uVar1,&_LC0);
  i2a_ASN1_INTEGER(param_1,(ASN1_INTEGER *)(param_2 + 8));
  BIO_printf(param_1,"\n");
  return 1;
}



char * OCSP_response_status_str(long s)

{
  undefined1 *puVar1;
  
  if (s == 0) {
    puVar1 = rstat_tbl_2;
  }
  else if (s == 1) {
    puVar1 = (undefined1 *)0x100c30;
  }
  else if (s == 2) {
    puVar1 = (undefined1 *)0x100c40;
  }
  else if (s == 3) {
    puVar1 = (undefined1 *)0x100c50;
  }
  else if (s == 5) {
    puVar1 = (undefined1 *)0x100c60;
  }
  else {
    if (s != 6) {
      return "(UNKNOWN)";
    }
    puVar1 = (undefined1 *)0x100c70;
  }
  return *(char **)(puVar1 + 8);
}



char * OCSP_cert_status_str(long s)

{
  undefined1 *puVar1;
  
  if (s == 0) {
    puVar1 = cstat_tbl_1;
  }
  else if (s == 1) {
    puVar1 = (undefined1 *)0x100bf0;
  }
  else {
    if (s != 2) {
      return "(UNKNOWN)";
    }
    puVar1 = (undefined1 *)0x100c00;
  }
  return *(char **)(puVar1 + 8);
}



char * OCSP_crl_reason_str(long s)

{
  undefined1 *puVar1;
  
  if (s == 0) {
    puVar1 = reason_tbl_0;
  }
  else if (s == 1) {
    puVar1 = (undefined1 *)0x100b50;
  }
  else if (s == 2) {
    puVar1 = (undefined1 *)0x100b60;
  }
  else if (s == 3) {
    puVar1 = (undefined1 *)0x100b70;
  }
  else if (s == 4) {
    puVar1 = (undefined1 *)0x100b80;
  }
  else if (s == 5) {
    puVar1 = (undefined1 *)0x100b90;
  }
  else if (s == 6) {
    puVar1 = (undefined1 *)0x100ba0;
  }
  else if (s == 8) {
    puVar1 = (undefined1 *)0x100bb0;
  }
  else if (s == 9) {
    puVar1 = (undefined1 *)0x100bc0;
  }
  else {
    if (s != 10) {
      return "(UNKNOWN)";
    }
    puVar1 = (undefined1 *)0x100bd0;
  }
  return *(char **)(puVar1 + 8);
}



int OCSP_REQUEST_print(BIO *bp,OCSP_REQUEST *a,ulong flags)

{
  OCSP_REQINFO *alg;
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  X509 *pXVar5;
  
  alg = a[2].tbsRequest;
  iVar1 = BIO_write(bp,"OCSP Request Data:\n",0x13);
  if (0 < iVar1) {
    lVar3 = ASN1_INTEGER_get((ASN1_INTEGER *)a->tbsRequest);
    iVar1 = BIO_printf(bp,"    Version: %lu (0x%lx)",lVar3 + 1,lVar3);
    if (0 < iVar1) {
      if (a->optionalSignature != (OCSP_SIGNATURE *)0x0) {
        iVar1 = BIO_write(bp,"\n    Requestor Name: ",0x15);
        if (iVar1 < 1) {
          return 0;
        }
        GENERAL_NAME_print(bp,(GENERAL_NAME *)a->optionalSignature);
      }
      iVar2 = 0;
      iVar1 = BIO_write(bp,"\n    Requestor List:\n",0x15);
      if (0 < iVar1) {
        for (; iVar1 = OPENSSL_sk_num(a[1].tbsRequest), iVar2 < iVar1; iVar2 = iVar2 + 1) {
          puVar4 = (undefined8 *)OPENSSL_sk_value(a[1].tbsRequest,iVar2);
          ocsp_certid_print(bp,*puVar4,8);
          iVar1 = X509V3_extensions_print
                            (bp,"Request Single Extensions",(stack_st_X509_EXTENSION *)puVar4[1],
                             flags,8);
          if (iVar1 == 0) {
            return 0;
          }
        }
        iVar1 = X509V3_extensions_print
                          (bp,"Request Extensions",(stack_st_X509_EXTENSION *)a[1].optionalSignature
                           ,flags,4);
        if (iVar1 != 0) {
          if (alg != (OCSP_REQINFO *)0x0) {
            X509_signature_print(bp,(X509_ALGOR *)alg,(ASN1_STRING *)alg->requestList);
            for (iVar1 = 0; iVar2 = OPENSSL_sk_num(alg->requestExtensions), iVar1 < iVar2;
                iVar1 = iVar1 + 1) {
              pXVar5 = (X509 *)OPENSSL_sk_value(alg->requestExtensions,iVar1);
              X509_print(bp,pXVar5);
              pXVar5 = (X509 *)OPENSSL_sk_value(alg->requestExtensions,iVar1);
              PEM_write_bio_X509(bp,pXVar5);
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



int OCSP_RESPONSE_print(BIO *bp,OCSP_RESPONSE *o,ulong flags)

{
  OCSP_RESPBYTES *pOVar1;
  int *piVar2;
  undefined8 *puVar3;
  ASN1_ENUMERATED *a;
  int iVar4;
  long lVar5;
  char *pcVar6;
  OCSP_BASICRESP *a_00;
  undefined8 *puVar7;
  X509 *pXVar8;
  int iVar9;
  
  pOVar1 = o->responseBytes;
  iVar4 = BIO_puts(bp,"OCSP Response Data:\n");
  if (0 < iVar4) {
    lVar5 = ASN1_ENUMERATED_get(o->responseStatus);
    pcVar6 = OCSP_response_status_str(lVar5);
    iVar4 = BIO_printf(bp,"    OCSP Response Status: %s (0x%lx)\n",pcVar6,lVar5);
    if (0 < iVar4) {
      if (pOVar1 == (OCSP_RESPBYTES *)0x0) {
        return 1;
      }
      iVar4 = BIO_puts(bp,"    Response Type: ");
      if ((0 < iVar4) && (iVar4 = i2a_ASN1_OBJECT(bp,pOVar1->responseType), 0 < iVar4)) {
        iVar4 = OBJ_obj2nid(pOVar1->responseType);
        if (iVar4 != 0x16d) {
          BIO_puts(bp," (unknown response type)\n");
          return 1;
        }
        a_00 = OCSP_response_get1_basic(o);
        if (a_00 != (OCSP_BASICRESP *)0x0) {
          lVar5 = ASN1_INTEGER_get((ASN1_INTEGER *)a_00->tbsResponseData);
          iVar4 = BIO_printf(bp,"\n    Version: %lu (0x%lx)\n",lVar5 + 1,lVar5);
          if ((0 < iVar4) && (iVar4 = BIO_puts(bp,"    Responder Id: "), 0 < iVar4)) {
            if (*(int *)&a_00->signatureAlgorithm == 0) {
              X509_NAME_print_ex(bp,(X509_NAME *)a_00->signature,0,0x82031f);
            }
            else if (*(int *)&a_00->signatureAlgorithm == 1) {
              i2a_ASN1_STRING(bp,a_00->signature,0);
            }
            iVar4 = BIO_printf(bp,"\n    Produced At: ");
            if ((0 < iVar4) &&
               (iVar4 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)a_00->certs),
               iVar4 != 0)) {
              iVar9 = 0;
              iVar4 = BIO_printf(bp,"\n    Responses:\n");
              if (0 < iVar4) {
                for (; iVar4 = OPENSSL_sk_num(a_00[1].tbsResponseData), iVar9 < iVar4;
                    iVar9 = iVar9 + 1) {
                  lVar5 = OPENSSL_sk_value(a_00[1].tbsResponseData,iVar9);
                  if (lVar5 != 0) {
                    puVar7 = (undefined8 *)OPENSSL_sk_value(a_00[1].tbsResponseData,iVar9);
                    iVar4 = ocsp_certid_print(bp,*puVar7,4);
                    if (iVar4 < 1) goto LAB_001006f8;
                    piVar2 = (int *)puVar7[1];
                    pcVar6 = OCSP_cert_status_str((long)*piVar2);
                    iVar4 = BIO_printf(bp,"    Cert Status: %s",pcVar6);
                    if (iVar4 < 1) goto LAB_001006f8;
                    if (*piVar2 == 1) {
                      puVar3 = *(undefined8 **)(piVar2 + 2);
                      iVar4 = BIO_printf(bp,"\n    Revocation Time: ");
                      if ((iVar4 < 1) ||
                         (iVar4 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)*puVar3),
                         iVar4 == 0)) goto LAB_001006f8;
                      a = (ASN1_ENUMERATED *)puVar3[1];
                      if (a != (ASN1_ENUMERATED *)0x0) {
                        lVar5 = ASN1_ENUMERATED_get(a);
                        pcVar6 = OCSP_crl_reason_str(lVar5);
                        iVar4 = BIO_printf(bp,"\n    Revocation Reason: %s (0x%lx)",pcVar6,lVar5);
                        if (iVar4 < 1) goto LAB_001006f8;
                      }
                    }
                    iVar4 = BIO_printf(bp,"\n    This Update: ");
                    if (((((iVar4 < 1) ||
                          (iVar4 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)puVar7[2]),
                          iVar4 == 0)) ||
                         ((puVar7[3] != 0 &&
                          ((iVar4 = BIO_printf(bp,"\n    Next Update: "), iVar4 < 1 ||
                           (iVar4 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)puVar7[3])
                           , iVar4 == 0)))))) || (iVar4 = BIO_write(bp,&_LC6,1), iVar4 < 1)) ||
                       ((iVar4 = X509V3_extensions_print
                                           (bp,"Response Single Extensions",
                                            (stack_st_X509_EXTENSION *)puVar7[4],flags,8),
                        iVar4 == 0 || (iVar4 = BIO_write(bp,&_LC6,1), iVar4 < 1))))
                    goto LAB_001006f8;
                  }
                }
                iVar4 = X509V3_extensions_print
                                  (bp,"Response Extensions",
                                   (stack_st_X509_EXTENSION *)a_00[1].signatureAlgorithm,flags,4);
                if ((iVar4 != 0) &&
                   (iVar4 = X509_signature_print
                                      (bp,(X509_ALGOR *)&a_00[1].signature,
                                       (ASN1_STRING *)a_00[2].tbsResponseData), 0 < iVar4)) {
                  for (iVar4 = 0; iVar9 = OPENSSL_sk_num(a_00[2].signatureAlgorithm), iVar4 < iVar9;
                      iVar4 = iVar4 + 1) {
                    pXVar8 = (X509 *)OPENSSL_sk_value(a_00[2].signatureAlgorithm,iVar4);
                    X509_print(bp,pXVar8);
                    pXVar8 = (X509 *)OPENSSL_sk_value(a_00[2].signatureAlgorithm,iVar4);
                    PEM_write_bio_X509(bp,pXVar8);
                  }
                  iVar4 = 1;
                  goto LAB_00100705;
                }
              }
            }
          }
LAB_001006f8:
          iVar4 = 0;
          goto LAB_00100705;
        }
      }
    }
  }
  a_00 = (OCSP_BASICRESP *)0x0;
  iVar4 = 0;
LAB_00100705:
  OCSP_BASICRESP_free(a_00);
  return iVar4;
}



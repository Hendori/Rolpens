
undefined8
process_pollReq(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if ((((param_4 == (long *)0x0) || (*param_4 = 0, lVar3 == 0)) || (param_2 == 0)) ||
     (param_5 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x2b9,"process_pollReq");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x50);
    if ((iVar2 != 1) && (iVar1 = OSSL_CMP_MSG_get_bodytype(param_2), iVar2 != iVar1)) {
      if (*(long *)(lVar3 + 0x58) == 0) {
        ERR_new();
        ERR_set_debug("apps/lib/cmp_mock_srv.c",0x2c3,"process_pollReq");
        ERR_set_error(0x3a,0x69,0);
        return 0;
      }
      iVar2 = *(int *)(lVar3 + 100) + 1;
      *(int *)(lVar3 + 100) = iVar2;
      if (iVar2 < *(int *)(lVar3 + 0x60)) {
        *param_5 = (long)*(int *)(lVar3 + 0x68);
      }
      else {
        *param_4 = *(long *)(lVar3 + 0x58);
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *param_5 = 0;
      }
      return 1;
    }
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x2bf,"process_pollReq");
    ERR_set_error(0x3a,0x9e,0);
  }
  return 0;
}



undefined8 delayed_delivery(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  uVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
  if ((lVar1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0xe1,"delayed_delivery");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    if (((uint)uVar2 < 0x18) && ((0x800095UL >> (uVar2 & 0x3f) & 1) != 0)) {
      return 0;
    }
    if (*(int *)(lVar1 + 0x60) < 1) {
      return 0;
    }
    if (*(int *)(lVar1 + 100) != 0) {
      return 0;
    }
    lVar3 = OSSL_CMP_MSG_dup(param_2);
    *(long *)(lVar1 + 0x58) = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0xffffffff;
}



undefined8
process_certConf(undefined8 param_1,long param_2,undefined8 param_3,ASN1_OCTET_STRING *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ASN1_OCTET_STRING *b;
  
  lVar3 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if ((param_2 == 0 || param_4 == (ASN1_OCTET_STRING *)0x0) || (lVar3 == 0)) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x298,"process_certConf");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x50);
    if (((iVar2 != 1) && (iVar1 = OSSL_CMP_MSG_get_bodytype(param_2), iVar2 != iVar1)) &&
       (*(long *)(lVar3 + 8) != 0)) {
      b = (ASN1_OCTET_STRING *)X509_digest_sig(*(long *)(lVar3 + 8),0,0);
      if (b == (ASN1_OCTET_STRING *)0x0) {
        return 0;
      }
      iVar2 = ASN1_OCTET_STRING_cmp(param_4,b);
      if (iVar2 != 0) {
        ASN1_OCTET_STRING_free(b);
        ERR_new();
        ERR_set_debug("apps/lib/cmp_mock_srv.c",0x2a6,"process_certConf");
        ERR_set_error(0x3a,0x9c,0);
        return 0;
      }
      ASN1_OCTET_STRING_free(b);
      return 1;
    }
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x29e,"process_certConf");
    ERR_set_error(0x3a,0x9e,0);
  }
  return 0;
}



bool process_genm(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ASN1_OBJECT *pAVar6;
  X509_NAME *pXVar7;
  X509_ALGOR *alg;
  undefined8 uVar8;
  int *piVar9;
  X509_NAME *pXVar10;
  long lVar11;
  X509 *a;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if ((((puVar3 == (undefined8 *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
     (param_4 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x246,"process_genm");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    iVar2 = *(int *)(puVar3 + 10);
    if (((iVar2 == 1) || (iVar1 = OSSL_CMP_MSG_get_bodytype(param_2), iVar2 == iVar1)) ||
       (iVar2 = OPENSSL_sk_num(param_3), 1 < iVar2)) {
      ERR_new();
      ERR_set_debug("apps/lib/cmp_mock_srv.c",0x24c,"process_genm");
      ERR_set_error(0x3a,0x9e,0);
    }
    else {
      iVar2 = OPENSSL_sk_num(param_3);
      if (iVar2 != 1) {
        lVar4 = OPENSSL_sk_deep_copy(param_3,OSSL_CMP_ITAV_dup,&OSSL_CMP_ITAV_free);
        bVar12 = lVar4 != 0;
        *param_4 = lVar4;
        goto LAB_00100411;
      }
      uVar5 = OPENSSL_sk_value(param_3,0);
      pAVar6 = (ASN1_OBJECT *)OSSL_CMP_ITAV_get0_type(uVar5);
      lVar4 = OPENSSL_sk_new_reserve(0,1);
      *param_4 = lVar4;
      if (lVar4 == 0) goto LAB_0010040f;
      iVar2 = OBJ_obj2nid(pAVar6);
      if (iVar2 == 0x4e6) {
        local_48 = (X509 *)0x0;
        iVar2 = OSSL_CMP_ITAV_get0_rootCaCert(uVar5,&local_48);
        if (iVar2 == 0) goto LAB_00100666;
        a = (X509 *)puVar3[6];
        if (local_48 != (X509 *)0x0) {
          pXVar7 = X509_get_subject_name(a);
          pXVar10 = X509_get_subject_name(local_48);
          iVar2 = X509_NAME_cmp(pXVar10,pXVar7);
          if (iVar2 != 0) {
            lVar4 = OSSL_CMP_ITAV_new_rootCaKeyUpdate(0,0,0);
            goto LAB_00100650;
          }
          a = (X509 *)puVar3[6];
        }
        lVar4 = OSSL_CMP_ITAV_new_rootCaKeyUpdate(a,puVar3[7],puVar3[8]);
LAB_00100650:
        lVar11 = *param_4;
        if (lVar4 != 0) {
          iVar2 = OPENSSL_sk_push(lVar11);
          bVar12 = true;
          if (iVar2 != 0) goto LAB_00100411;
LAB_00100666:
          lVar11 = *param_4;
        }
      }
      else {
        if (iVar2 < 0x4e7) {
          if (iVar2 != 0x4c7) {
            if (iVar2 == 0x4c9) {
              local_48 = (X509 *)0x0;
              lVar4 = OSSL_CRMF_CERTTEMPLATE_new();
              if (lVar4 == 0) goto LAB_00100666;
              pXVar7 = X509_get_issuer_name((X509 *)*puVar3);
              iVar2 = OSSL_CRMF_CERTTEMPLATE_fill(lVar4,0,0,pXVar7,0);
              if ((iVar2 != 0) && (alg = X509_ALGOR_new(), alg != (X509_ALGOR *)0x0)) {
                pAVar6 = OBJ_nid2obj(0x198);
                X509_ALGOR_set0(alg,pAVar6,-1,(void *)0x0);
                uVar5 = OSSL_CMP_ATAV_new_algId(alg);
                uVar8 = OSSL_CMP_ATAV_new_rsaKeyLen(0x1000);
                iVar2 = OSSL_CMP_ATAV_push1(&local_48,uVar5);
                if ((iVar2 != 0) && (iVar2 = OSSL_CMP_ATAV_push1(&local_48,uVar8), iVar2 != 0)) {
                  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(uVar5);
                  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(uVar8);
                  X509_ALGOR_free(alg);
                  lVar4 = OSSL_CMP_ITAV_new0_certReqTemplate(lVar4,local_48);
                  goto LAB_00100650;
                }
                OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(uVar5);
                OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(uVar8);
                X509_ALGOR_free(alg);
              }
              OSSL_CRMF_CERTTEMPLATE_free(lVar4);
              OSSL_CMP_ATAVS_free(local_48);
              lVar11 = *param_4;
              goto LAB_001005e0;
            }
            goto LAB_00100760;
          }
          lVar4 = OSSL_CMP_ITAV_new_caCerts(puVar3[5]);
          goto LAB_00100650;
        }
        if (iVar2 != 0x4e8) {
LAB_00100760:
          lVar4 = OSSL_CMP_ITAV_dup(uVar5);
          goto LAB_00100650;
        }
        local_60 = 0;
        iVar2 = OSSL_CMP_ITAV_get0_crlStatusList(uVar5,&local_60);
        uVar5 = local_60;
        if (iVar2 == 0) goto LAB_00100666;
        lVar4 = puVar3[3];
        local_58 = 0;
        local_50 = 0;
        local_48 = (X509 *)0x0;
        iVar2 = OPENSSL_sk_num(local_60);
        if (iVar2 != 1) {
          ERR_new();
          ERR_set_debug("apps/lib/cmp_mock_srv.c",0x1c6,"check_client_crl");
          ERR_set_error(0x3a,0xc9,0);
          lVar11 = *param_4;
          goto LAB_001005e0;
        }
        if (lVar4 == 0) {
LAB_001007cd:
          uVar5 = 0;
LAB_001007cf:
          lVar4 = OSSL_CMP_ITAV_new_crls(uVar5);
          goto LAB_00100650;
        }
        uVar5 = OPENSSL_sk_value(uVar5,0);
        iVar2 = OSSL_CMP_CRLSTATUS_get0(uVar5,&local_58,&local_50,&local_48);
        if (iVar2 == 0) goto LAB_00100666;
        if (local_50 == 0) {
LAB_001007dc:
          if (local_48 != (X509 *)0x0) {
            uVar5 = X509_CRL_get0_lastUpdate(lVar4);
            iVar2 = ASN1_TIME_compare(local_48,uVar5);
            if (-1 < iVar2) goto LAB_001007cd;
          }
          uVar5 = puVar3[3];
          goto LAB_001007cf;
        }
        piVar9 = (int *)OPENSSL_sk_value(local_50,0);
        if ((piVar9 == (int *)0x0) || (*piVar9 != 4)) {
          ERR_new();
          ERR_set_debug("apps/lib/cmp_mock_srv.c",0x1db,"check_client_crl");
          ERR_set_error(0x3a,0x96,0);
          lVar11 = *param_4;
        }
        else {
          pXVar7 = *(X509_NAME **)(piVar9 + 2);
          pXVar10 = (X509_NAME *)X509_CRL_get_issuer(lVar4);
          iVar2 = X509_NAME_cmp(pXVar7,pXVar10);
          if (iVar2 == 0) goto LAB_001007dc;
          ERR_new();
          ERR_set_debug("apps/lib/cmp_mock_srv.c",0x1d7,"check_client_crl");
          ERR_set_error(0x3a,200,0);
          lVar11 = *param_4;
        }
      }
LAB_001005e0:
      OPENSSL_sk_free(lVar11);
    }
  }
LAB_0010040f:
  bVar12 = false;
LAB_00100411:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar12;
}



long process_cert_request
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 *param_6,long *param_7,long *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ASN1_INTEGER *x;
  X509_NAME *a;
  X509_NAME *b;
  ASN1_INTEGER *y;
  X509 *pXVar6;
  EVP_PKEY *pkey;
  undefined8 uVar7;
  undefined8 uVar8;
  ASN1_OBJECT *o;
  char *__s1;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if ((((plVar4 == (long *)0x0) || (param_2 == 0)) ||
      (param_6 == (undefined8 *)0x0 || param_7 == (long *)0x0)) || (param_8 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x12a,"process_cert_request");
    ERR_set_error(0x3a,0x67,0);
LAB_00100a50:
    lVar5 = 0;
  }
  else {
    iVar1 = OSSL_CMP_MSG_get_bodytype(param_2);
    if (((int)plVar4[10] == iVar1) || ((int)plVar4[10] == 1)) {
      ERR_new();
      ERR_set_debug("apps/lib/cmp_mock_srv.c",0x12f,"process_cert_request");
      ERR_set_error(0x3a,0x9e,0);
      goto LAB_00100a50;
    }
    lVar5 = plVar4[0xc];
    iVar2 = *(int *)((long)plVar4 + 100);
    *param_6 = 0;
    *param_7 = 0;
    *param_8 = 0;
    if ((0 < (int)lVar5) && (iVar2 == 0)) {
      lVar5 = OSSL_CMP_MSG_dup(param_2);
      plVar4[0xb] = lVar5;
      if (lVar5 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          lVar5 = OSSL_CMP_STATUSINFO_new(3,0,0);
          return lVar5;
        }
        goto LAB_00100df7;
      }
      goto LAB_00100a50;
    }
    if ((int)lVar5 <= iVar2) {
      *(undefined4 *)((long)plVar4 + 100) = 0;
    }
    iVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
    if (iVar2 == 2) {
      uVar7 = OSSL_CMP_MSG_get0_header(param_2);
      uVar7 = OSSL_CMP_HDR_get0_geninfo_ITAVs(uVar7);
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar7), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        uVar8 = OPENSSL_sk_value(uVar7,iVar2);
        o = (ASN1_OBJECT *)OSSL_CMP_ITAV_get0_type(uVar8);
        iVar3 = OBJ_obj2nid(o);
        if (iVar3 == 0x4e7) {
          iVar2 = OSSL_CMP_ITAV_get0_certProfile(uVar8,&local_48);
          if (iVar2 == 0) goto LAB_00100a50;
          iVar2 = OPENSSL_sk_num(local_48);
          if (iVar2 < 1) {
            ERR_new();
            uVar7 = 0x152;
          }
          else {
            lVar5 = OPENSSL_sk_value(local_48,0);
            if ((lVar5 == 0) || (__s1 = (char *)ASN1_STRING_get0_data(lVar5), __s1 == (char *)0x0))
            {
              ERR_new();
              ERR_set_debug("apps/lib/cmp_mock_srv.c",0x159,"process_cert_request");
              ERR_set_error(0x3a,0x80106,0);
              goto LAB_00100a50;
            }
            iVar2 = strcmp(__s1,"profile1");
            if (iVar2 == 0) break;
            ERR_new();
            uVar7 = 0x15d;
          }
          ERR_set_debug("apps/lib/cmp_mock_srv.c",uVar7,"process_cert_request");
          ERR_set_error(0x3a,0xc4,0);
          goto LAB_00100a50;
        }
      }
    }
    if (((iVar1 == 7) && (param_4 != 0)) && (*plVar4 != 0)) {
      lVar5 = OSSL_CRMF_MSG_get0_regCtrl_oldCertID(param_4);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("apps/lib/cmp_mock_srv.c",0x16b,"process_cert_request");
        ERR_set_error(0x3a,0xa5,0);
        goto LAB_00100a50;
      }
      x = (ASN1_INTEGER *)OSSL_CRMF_CERTID_get0_serialNumber(lVar5);
      a = (X509_NAME *)OSSL_CRMF_CERTID_get0_issuer(lVar5);
      pXVar6 = (X509 *)*plVar4;
      if (pXVar6 != (X509 *)0x0) {
        b = X509_get_issuer_name(pXVar6);
        y = (ASN1_INTEGER *)X509_get0_serialNumber(pXVar6);
        if (((b != (X509_NAME *)0x0) && (iVar1 = X509_NAME_cmp(a,b), iVar1 != 0)) ||
           ((y != (ASN1_INTEGER *)0x0 && (iVar1 = ASN1_INTEGER_cmp(x,y), iVar1 != 0)))) {
          ERR_new();
          ERR_set_debug("apps/lib/cmp_mock_srv.c",0x171,"process_cert_request");
          ERR_set_error(0x3a,0xbd,0);
          goto LAB_00100a50;
        }
      }
    }
    if ((X509 *)plVar4[1] != (X509 *)0x0) {
      pXVar6 = X509_dup((X509 *)plVar4[1]);
      *param_6 = pXVar6;
      if (pXVar6 != (X509 *)0x0) goto LAB_00100a9f;
LAB_00100b0c:
      X509_free(pXVar6);
      *param_6 = 0;
      OSSL_STACK_OF_X509_free(*param_7);
      *param_7 = 0;
      OSSL_STACK_OF_X509_free(*param_8);
      *param_8 = 0;
      goto LAB_00100a50;
    }
LAB_00100a9f:
    iVar1 = OSSL_CRMF_MSG_centralkeygen_requested(param_4,param_5);
    if (iVar1 < 0) {
LAB_00100b08:
      pXVar6 = (X509 *)*param_6;
      goto LAB_00100b0c;
    }
    if (iVar1 == 1) {
      if ((plVar4[2] == 0) || (pkey = (EVP_PKEY *)EVP_PKEY_dup(), pkey == (EVP_PKEY *)0x0)) {
        pkey = (EVP_PKEY *)0x0;
      }
      else {
        uVar7 = OSSL_CMP_SRV_CTX_get0_cmp_ctx(param_1);
        iVar1 = OSSL_CMP_CTX_set0_newPkey(uVar7,1,pkey);
        if (iVar1 != 0) goto LAB_00100abb;
      }
      EVP_PKEY_free(pkey);
      pXVar6 = (X509 *)*param_6;
      goto LAB_00100b0c;
    }
LAB_00100abb:
    if (plVar4[4] != 0) {
      lVar5 = X509_chain_up_ref();
      *param_7 = lVar5;
      if (lVar5 == 0) goto LAB_00100b08;
    }
    if (plVar4[5] != 0) {
      lVar5 = X509_chain_up_ref();
      *param_8 = lVar5;
      if (lVar5 == 0) goto LAB_00100b08;
    }
    if (plVar4[9] == 0) goto LAB_00100a50;
    lVar5 = OSSL_CMP_PKISI_dup();
    if (lVar5 == 0) goto LAB_00100b08;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
LAB_00100df7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 clean_transaction(void)

{
  long lVar1;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 100) = 0;
    OSSL_CMP_MSG_free(*(undefined8 *)(lVar1 + 0x58));
    *(undefined8 *)(lVar1 + 0x58) = 0;
    return 1;
  }
  ERR_new();
  ERR_set_debug("apps/lib/cmp_mock_srv.c",0x110,"clean_transaction");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_error_part_0(long param_1,ASN1_INTEGER *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ASN1_STRING *str;
  long in_FS_OFFSET;
  undefined1 auStack_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_printf(_bio_err,"mock server received error:\n");
  if (param_1 == 0) {
    BIO_printf(_bio_err,"pkiStatusInfo absent\n");
  }
  else {
    pcVar3 = (char *)OSSL_CMP_snprint_PKIStatusInfo(param_1,auStack_428,0x400);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "<invalid>";
    }
    BIO_printf(_bio_err,"pkiStatusInfo: %s\n",pcVar3);
  }
  if (param_2 == (ASN1_INTEGER *)0x0) {
    BIO_printf(_bio_err,"errorCode absent\n");
  }
  else {
    lVar4 = ASN1_INTEGER_get(param_2);
    BIO_printf(_bio_err,"errorCode: %ld\n",lVar4);
  }
  iVar1 = OPENSSL_sk_num(param_3);
  if (iVar1 < 1) {
    BIO_printf(_bio_err,"errorDetails absent\n");
  }
  else {
    BIO_printf(_bio_err,"errorDetails: ");
    iVar2 = OPENSSL_sk_num(param_3);
    iVar1 = 0;
    if (0 < iVar2) {
      while( true ) {
        str = (ASN1_STRING *)OPENSSL_sk_value(param_3,iVar1);
        ASN1_STRING_print_ex(_bio_err,str,8);
        iVar2 = OPENSSL_sk_num(param_3);
        if (iVar2 <= iVar1 + 1) break;
        BIO_printf(_bio_err,", ");
        iVar1 = iVar1 + 1;
      }
    }
    BIO_printf(_bio_err,"\n");
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void process_error(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if ((lVar1 != 0) && (param_2 != 0)) {
    process_error_part_0(param_3,param_4,param_5);
    return;
  }
  ERR_new();
  ERR_set_debug("apps/lib/cmp_mock_srv.c",0x26c,"process_error");
  ERR_set_error(0x3a,0x67,0);
  return;
}



undefined8 process_rr(undefined8 param_1,long param_2,X509_NAME *param_3,ASN1_INTEGER *param_4)

{
  X509 *a;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  X509_NAME *b;
  ASN1_INTEGER *y;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if ((puVar3 == (undefined8 *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x1a8,"process_rr");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  iVar2 = *(int *)(puVar3 + 10);
  if ((iVar2 != 1) && (iVar1 = OSSL_CMP_MSG_get_bodytype(param_2), iVar2 != iVar1)) {
    if ((param_4 != (ASN1_INTEGER *)0x0 || param_3 != (X509_NAME *)0x0) &&
       (a = (X509 *)*puVar3, a != (X509 *)0x0)) {
      b = X509_get_issuer_name(a);
      y = (ASN1_INTEGER *)X509_get0_serialNumber(a);
      if (((b != (X509_NAME *)0x0) && (iVar2 = X509_NAME_cmp(param_3,b), iVar2 != 0)) ||
         ((y != (ASN1_INTEGER *)0x0 && (iVar2 = ASN1_INTEGER_cmp(param_4,y), iVar2 != 0)))) {
        ERR_new();
        ERR_set_debug("apps/lib/cmp_mock_srv.c",0x1b5,"process_rr");
        ERR_set_error(0x3a,0x95,"wrong certificate to revoke");
        return 0;
      }
    }
    uVar4 = OSSL_CMP_PKISI_dup(puVar3[9]);
    return uVar4;
  }
  ERR_new();
  ERR_set_debug("apps/lib/cmp_mock_srv.c",0x1ad,"process_rr");
  ERR_set_error(0x3a,0x9e,0);
  return 0;
}



undefined8 ossl_cmp_mock_srv_set1_refCert(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (plVar2 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x58,"ossl_cmp_mock_srv_set1_refCert");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = X509_up_ref(param_2), iVar1 == 0)) {
    return 0;
  }
  X509_free((X509 *)*plVar2);
  *plVar2 = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_certOut(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x59,"ossl_cmp_mock_srv_set1_certOut");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = X509_up_ref(param_2), iVar1 == 0)) {
    return 0;
  }
  X509_free(*(X509 **)(lVar2 + 8));
  *(long *)(lVar2 + 8) = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_keyOut(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x60,"ossl_cmp_mock_srv_set1_keyOut");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = EVP_PKEY_up_ref(param_2), iVar1 == 0)) {
    return 0;
  }
  EVP_PKEY_free(*(EVP_PKEY **)(lVar2 + 0x10));
  *(long *)(lVar2 + 0x10) = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_crlOut(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x70,"ossl_cmp_mock_srv_set1_crlOut");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = X509_CRL_up_ref(param_2), iVar1 == 0)) {
    return 0;
  }
  X509_CRL_free(*(X509_CRL **)(lVar2 + 0x18));
  *(long *)(lVar2 + 0x18) = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_chainOut(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x81,"ossl_cmp_mock_srv_set1_chainOut");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (param_2 = X509_chain_up_ref(param_2), param_2 == 0)) {
    return 0;
  }
  OSSL_STACK_OF_X509_free(*(undefined8 *)(lVar1 + 0x20));
  *(long *)(lVar1 + 0x20) = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_caPubsOut(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x92,"ossl_cmp_mock_srv_set1_caPubsOut");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (param_2 = X509_chain_up_ref(param_2), param_2 == 0)) {
    return 0;
  }
  OSSL_STACK_OF_X509_free(*(undefined8 *)(lVar1 + 0x28));
  *(long *)(lVar1 + 0x28) = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_newWithNew(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x9c,"ossl_cmp_mock_srv_set1_newWithNew");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = X509_up_ref(param_2), iVar1 == 0)) {
    return 0;
  }
  X509_free(*(X509 **)(lVar2 + 0x30));
  *(long *)(lVar2 + 0x30) = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_newWithOld(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x9d,"ossl_cmp_mock_srv_set1_newWithOld");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = X509_up_ref(param_2), iVar1 == 0)) {
    return 0;
  }
  X509_free(*(X509 **)(lVar2 + 0x38));
  *(long *)(lVar2 + 0x38) = param_2;
  return 1;
}



undefined8 ossl_cmp_mock_srv_set1_oldWithNew(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0x9e,"ossl_cmp_mock_srv_set1_oldWithNew");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = X509_up_ref(param_2), iVar1 == 0)) {
    return 0;
  }
  X509_free(*(X509 **)(lVar2 + 0x40));
  *(long *)(lVar2 + 0x40) = param_2;
  return 1;
}



undefined8
ossl_cmp_mock_srv_set_statusInfo
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0xa7,"ossl_cmp_mock_srv_set_statusInfo");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    lVar2 = OSSL_CMP_STATUSINFO_new(param_2,param_3,param_4);
    if (lVar2 != 0) {
      OSSL_CMP_PKISI_free(*(undefined8 *)(lVar1 + 0x48));
      *(long *)(lVar1 + 0x48) = lVar2;
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_cmp_mock_srv_set_sendError(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x50) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("apps/lib/cmp_mock_srv.c",0xb6,"ossl_cmp_mock_srv_set_sendError");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 ossl_cmp_mock_srv_set_pollCount(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",0xc3,"ossl_cmp_mock_srv_set_pollCount");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    if (-1 < param_2) {
      *(int *)(lVar1 + 0x60) = param_2;
      return 1;
    }
    ERR_new();
    ERR_set_debug("apps/lib/cmp_mock_srv.c",199,"ossl_cmp_mock_srv_set_pollCount");
    ERR_set_error(0x3a,100,0);
  }
  return 0;
}



undefined8 ossl_cmp_mock_srv_set_checkAfterTime(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = OSSL_CMP_SRV_CTX_get0_custom_ctx();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x68) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("apps/lib/cmp_mock_srv.c",0xd3,"ossl_cmp_mock_srv_set_checkAfterTime");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



long ossl_cmp_mock_srv_new(void)

{
  int iVar1;
  long lVar2;
  undefined8 *ptr;
  long lVar3;
  long lVar4;
  
  lVar2 = OSSL_CMP_SRV_CTX_new();
  ptr = (undefined8 *)CRYPTO_zalloc(0x70,"apps/lib/cmp_mock_srv.c",0x35);
  if (ptr != (undefined8 *)0x0) {
    lVar3 = OSSL_CMP_PKISI_new();
    ptr[9] = lVar3;
    lVar4 = 0;
    if ((lVar3 != 0) && (*(undefined4 *)(ptr + 10) = 0xffffffff, lVar4 = lVar3, lVar2 != 0)) {
      iVar1 = OSSL_CMP_SRV_CTX_init
                        (lVar2,ptr,process_cert_request,process_rr,process_genm,process_error);
      if ((iVar1 != 0) &&
         (iVar1 = OSSL_CMP_SRV_CTX_init_trans(lVar2,delayed_delivery,clean_transaction,0x100000),
         iVar1 != 0)) {
        return lVar2;
      }
      lVar4 = ptr[9];
    }
    OSSL_CMP_PKISI_free(lVar4);
    X509_free((X509 *)*ptr);
    X509_free((X509 *)ptr[1]);
    OSSL_STACK_OF_X509_free(ptr[4]);
    OSSL_STACK_OF_X509_free(ptr[5]);
    OSSL_CMP_MSG_free(ptr[0xb]);
    CRYPTO_free(ptr);
  }
  OSSL_CMP_SRV_CTX_free(lVar2);
  return 0;
}



void ossl_cmp_mock_srv_free(long param_1)

{
  undefined8 *ptr;
  
  if (param_1 != 0) {
    ptr = (undefined8 *)OSSL_CMP_SRV_CTX_get0_custom_ctx();
    if (ptr != (undefined8 *)0x0) {
      OSSL_CMP_PKISI_free(ptr[9]);
      X509_free((X509 *)*ptr);
      X509_free((X509 *)ptr[1]);
      OSSL_STACK_OF_X509_free(ptr[4]);
      OSSL_STACK_OF_X509_free(ptr[5]);
      OSSL_CMP_MSG_free(ptr[0xb]);
      CRYPTO_free(ptr);
    }
  }
  OSSL_CMP_SRV_CTX_free(param_1);
  return;
}



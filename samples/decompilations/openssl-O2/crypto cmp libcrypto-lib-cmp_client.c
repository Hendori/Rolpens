
bool is_crep_with_waiting(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = OSSL_CMP_MSG_get_bodytype();
  if (((uVar1 & 0xfffffffd) == 1) || (uVar1 == 8)) {
    lVar3 = ossl_cmp_certrepmessage_get0_certresponse
                      (*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_2);
    if (lVar3 != 0) {
      iVar2 = ossl_cmp_pkisi_get_status(*(undefined8 *)(lVar3 + 8));
      return iVar2 == 3;
    }
  }
  return false;
}



undefined8 unprotected_exception(long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar3 = OSSL_CMP_MSG_get_bodytype(param_2);
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    return 0;
  }
  uVar1 = (uint)uVar3;
  if (uVar1 == 0x13) {
    pcVar7 = "PKI Confirmation message";
  }
  else {
    if (uVar1 != 0x17) {
      if (uVar1 == 0xc) {
        lVar5 = ossl_cmp_revrepcontent_get_pkisi(*(undefined8 *)(*(long *)(param_2 + 8) + 8),0);
        if (lVar5 == 0) {
          return 0xffffffff;
        }
        iVar2 = ossl_cmp_pkisi_get_status(lVar5);
        if (iVar2 == 2) {
          pcVar7 = "revocation response message with rejection status";
          goto LAB_00100157;
        }
      }
      else if ((uVar1 < 9) && ((0x10aUL >> (uVar3 & 0x3f) & 1) != 0)) {
        lVar5 = *(long *)(*(long *)(param_2 + 8) + 8);
        lVar4 = ossl_cmp_certrepmessage_get0_certresponse(lVar5,0xffffffff);
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 8));
        if (lVar4 == 0) {
          return 0xffffffff;
        }
        if (1 < iVar2) {
          return 0xffffffff;
        }
        iVar2 = ossl_cmp_pkisi_get_status(*(undefined8 *)(lVar4 + 8));
        pcVar7 = "CertRepMessage with rejection status";
        if (iVar2 == 2) goto LAB_00100157;
      }
      return 0;
    }
    pcVar7 = "error response";
  }
LAB_00100157:
  pcVar6 = "missing";
  if (param_3 != 0) {
    pcVar6 = "invalid";
  }
  ossl_cmp_print_log(4,param_1,"unprotected_exception","crypto/cmp/cmp_client.c",0x52,&_LC6,
                     "ignoring %s protection of %s",pcVar6,pcVar7);
  return 1;
}



undefined8 save_statusInfo(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ASN1_STRING *pAVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = ossl_cmp_pkisi_get_status(param_2);
    *(int *)(param_1 + 0x1d0) = iVar1;
    if (-1 < iVar1) {
      uVar2 = ossl_cmp_pkisi_get_pkifailureinfo(param_2);
      *(undefined4 *)(param_1 + 0x1e0) = uVar2;
      uVar4 = OPENSSL_sk_new_null();
      iVar1 = ossl_cmp_ctx_set0_statusString(param_1,uVar4);
      if ((iVar1 != 0) && (*(long *)(param_1 + 0x1d8) != 0)) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        iVar1 = 0;
        while( true ) {
          iVar3 = OPENSSL_sk_num(uVar4);
          if (iVar3 <= iVar1) {
            return 1;
          }
          pAVar5 = (ASN1_STRING *)OPENSSL_sk_value(uVar4,iVar1);
          pAVar5 = ASN1_STRING_dup(pAVar5);
          if ((pAVar5 == (ASN1_STRING *)0x0) ||
             (iVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x1d8),pAVar5), iVar3 == 0)) break;
          iVar1 = iVar1 + 1;
        }
        ASN1_UTF8STRING_free(pAVar5);
      }
    }
  }
  return 0;
}



undefined8 send_receive_check(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  time_t tVar6;
  int iVar7;
  long lVar8;
  char *extraout_RDX;
  undefined8 uVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  char *pcVar11;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
  uVar4 = ossl_cmp_bodytype_to_string(uVar2);
  uVar5 = ossl_cmp_bodytype_to_string();
  uVar2 = *(undefined4 *)(param_1 + 100);
  tVar6 = time((time_t *)0x0);
  pcVar10 = *(code **)(param_1 + 0x20);
  if (pcVar10 == (code *)0x0) {
    pcVar10 = (code *)&OSSL_CMP_MSG_http_perform;
  }
  iVar7 = *(int *)(param_1 + 0x68);
  *param_3 = 0;
  if (iVar7 == 0) {
LAB_0010037f:
    OSSL_CMP_CTX_print_errors(param_1);
    pcVar11 = extraout_RDX;
    if (*(long *)(param_1 + 0x40) != 0) {
      pcVar11 = "sending %s";
      ossl_cmp_print_log(6,param_1,"send_receive_check","crypto/cmp/cmp_client.c",0xb8,&_LC11,
                         "sending %s",uVar4);
    }
    lVar8 = (*pcVar10)(param_1,param_2,pcVar11);
    *param_3 = lVar8;
    *(undefined4 *)(param_1 + 100) = uVar2;
    if (lVar8 == 0) {
      ERR_new(0);
      ERR_set_debug("crypto/cmp/cmp_client.c",0xbe,"send_receive_check");
      if ((*(int *)(param_1 + 0x68) == 0) ||
         (tVar6 = time((time_t *)0x0), tVar6 < *(long *)(param_1 + 0x70))) {
        uVar9 = 0x9f;
      }
      else {
        uVar9 = 0xb8;
      }
      ERR_set_error(0x3a,uVar9,"request sent: %s, expected response: %s",uVar4,uVar5);
    }
    else {
      iVar7 = OSSL_CMP_MSG_get_bodytype();
      pcVar11 = "";
      iVar3 = ossl_cmp_is_error_with_waiting(*param_3);
      if (iVar3 != 0) {
        pcVar11 = " (waiting)";
      }
      uVar4 = ossl_cmp_bodytype_to_string(iVar7);
      ossl_cmp_print_log(6,param_1,"send_receive_check","crypto/cmp/cmp_client.c",0xcc,&_LC11,
                         "received %s%s",uVar4,pcVar11);
      if ((((iVar7 == 0x1a) || (iVar7 == 0x13)) ||
          (iVar3 = ossl_cmp_ctx_set1_extraCertsIn(param_1,*(undefined8 *)(*param_3 + 0x18)),
          iVar3 != 0)) &&
         (iVar3 = ossl_cmp_msg_check_update(param_1,*param_3,unprotected_exception,param_4),
         iVar3 != 0)) {
        if (param_4 == iVar7) {
LAB_00100688:
          uVar4 = 1;
          goto LAB_00100592;
        }
        if (param_4 == 0x1a) {
          if (iVar7 != 0x17) goto LAB_00100688;
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_client.c",0xe6,"send_receive_check");
          ERR_set_error(0x3a,0xb4,0);
        }
        else {
          iVar3 = ossl_cmp_is_error_with_waiting(*param_3);
          if (iVar3 != 0) goto LAB_00100688;
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_client.c",0xe6,"send_receive_check");
          if (iVar7 != 0x17) {
            ERR_set_error(0x3a,0x85,0);
            uVar4 = ossl_cmp_bodytype_to_string(iVar7);
            ERR_add_error_data(3,"message type is \'",uVar4,&_LC15);
            goto LAB_00100590;
          }
          ERR_set_error(0x3a,0xb4,0);
        }
        puVar1 = *(undefined8 **)(*(long *)(*param_3 + 8) + 8);
        iVar7 = save_statusInfo(param_1,*puVar1);
        if (iVar7 != 0) {
          lVar8 = OSSL_CMP_CTX_snprint_PKIStatus(param_1,local_448,0x400);
          if (lVar8 != 0) {
            ERR_add_error_data(1,local_448);
          }
        }
        if ((ASN1_INTEGER *)puVar1[1] != (ASN1_INTEGER *)0x0) {
          lVar8 = ASN1_INTEGER_get((ASN1_INTEGER *)puVar1[1]);
          iVar7 = BIO_snprintf(local_448,0x400,"; errorCode: %08lX",lVar8);
          if (0 < iVar7) {
            ERR_add_error_data(1,local_448);
          }
        }
        if (puVar1[2] != 0) {
          pcVar11 = (char *)ossl_sk_ASN1_UTF8STRING2text(puVar1[2],&_LC18,0x3ff);
          if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
            ERR_add_error_data(2,"; errorDetails: ",pcVar11);
          }
          CRYPTO_free(pcVar11);
        }
        if (*(int *)(param_1 + 0x1d0) != 2) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_client.c",0x102,"send_receive_check");
          ERR_set_error(0x3a,0xb9,0);
          if (*(int *)(param_1 + 0x1d0) == 3) {
            *(undefined4 *)(param_1 + 0x1d0) = 2;
          }
        }
      }
    }
  }
  else {
    if ((param_4 == 0x1a) || (param_4 == 0x13)) {
      lVar8 = *(long *)(param_1 + 0x70);
    }
    else {
      lVar8 = iVar7 + tVar6;
      *(long *)(param_1 + 0x70) = lVar8;
    }
    if (tVar6 < lVar8) {
      if (lVar8 - tVar6 < 0x7fffffff) {
        iVar7 = (int)lVar8 - (int)tVar6;
        if ((*(int *)(param_1 + 100) == 0) || (iVar7 < *(int *)(param_1 + 100))) {
          *(int *)(param_1 + 100) = iVar7;
        }
        goto LAB_0010037f;
      }
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0xac,"send_receive_check");
      ERR_set_error(0x3a,100,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0xa7,"send_receive_check");
      ERR_set_error(0x3a,0xb8,0);
    }
  }
LAB_00100590:
  uVar4 = 0;
LAB_00100592:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OSSL_CMP_certConf_cb(undefined8 *param_1,X509 *param_2,int param_3)

{
  int iVar1;
  X509_STORE *store;
  X509_STORE_CTX *ctx;
  X509 *pXVar2;
  X509_VERIFY_PARAM *param;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  char *pcVar5;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  store = (X509_STORE *)OSSL_CMP_CTX_get_certConf_cb_arg();
  local_48 = 0;
  if (param_3 != 0) goto LAB_00100951;
  if (store == (X509_STORE *)0x0) {
    ossl_cmp_print_log(7,param_1,"OSSL_CMP_certConf_cb","crypto/cmp/cmp_client.c",0x251,"DEBUG",
                       &_LC22,"trying to build chain for newly enrolled cert");
    local_48 = X509_build_chain(param_2,param_1[0x16],0,0,*param_1,param_1[1]);
    iVar1 = OPENSSL_sk_num(local_48);
    if (0 < iVar1) {
      pXVar2 = (X509 *)OPENSSL_sk_shift(local_48);
      X509_free(pXVar2);
    }
    if (local_48 != 0) {
      uVar3 = 0x27d;
      pcVar5 = "success building approximate chain for newly enrolled cert";
      goto LAB_00100921;
    }
    param_3 = 0;
    ossl_cmp_print_log(4,param_1,"OSSL_CMP_certConf_cb","crypto/cmp/cmp_client.c",0x27a,&_LC6,&_LC22
                       ,
                       "could not build approximate chain for newly enrolled cert, resorting to received extraCerts"
                      );
    auVar4 = OSSL_CMP_CTX_get1_extraCertsIn(param_1);
  }
  else {
    ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(*param_1,param_1[1]);
    ossl_cmp_print_log(7,param_1,"OSSL_CMP_certConf_cb","crypto/cmp/cmp_client.c",599,"DEBUG",&_LC22
                       ,"validating newly enrolled cert");
    if (ctx != (X509_STORE_CTX *)0x0) {
      iVar1 = X509_STORE_CTX_init(ctx,store,param_2,(stack_st_X509 *)param_1[0x16]);
      if (iVar1 != 0) {
        param = X509_STORE_CTX_get0_param(ctx);
        X509_VERIFY_PARAM_clear_flags(param,0xffffffffffd7ff7d);
        iVar1 = X509_verify_cert(ctx);
        if (0 < iVar1) {
          uVar3 = X509_STORE_CTX_get0_chain(ctx);
          iVar1 = ossl_x509_add_certs_new(&local_48,uVar3,0xd);
          if (iVar1 == 0) {
            OPENSSL_sk_free(local_48);
            local_48 = 0;
          }
        }
      }
    }
    X509_STORE_CTX_free(ctx);
    iVar1 = OPENSSL_sk_num(local_48);
    if (0 < iVar1) {
      pXVar2 = (X509 *)OPENSSL_sk_shift(local_48);
      X509_free(pXVar2);
    }
    if (local_48 == 0) {
      param_3 = 0x80;
      ossl_cmp_print_log(3,param_1,"OSSL_CMP_certConf_cb","crypto/cmp/cmp_client.c",0x273,"ERROR",
                         &_LC22,"failed to validate newly enrolled cert");
      auVar4._8_8_ = extraout_RDX;
      auVar4._0_8_ = local_48;
    }
    else {
      uVar3 = 0x276;
      pcVar5 = "success validating newly enrolled cert";
LAB_00100921:
      param_3 = 0;
      ossl_cmp_print_log(7,param_1,"OSSL_CMP_certConf_cb","crypto/cmp/cmp_client.c",uVar3,"DEBUG",
                         &_LC22);
      auVar4._8_8_ = pcVar5;
      auVar4._0_8_ = local_48;
    }
  }
  local_48 = auVar4._0_8_;
  ossl_cmp_ctx_set1_newChain(param_1,local_48,auVar4._8_8_);
  OSSL_STACK_OF_X509_free(local_48);
LAB_00100951:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long get1_cert_status(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *pcVar4;
  undefined1 auStack_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_00100d0a;
  uVar1 = ossl_cmp_pkisi_get_status(*(undefined8 *)(param_3 + 8));
  switch(uVar1) {
  case 0:
    goto switchD_00100b8b_caseD_0;
  case 1:
    uVar3 = 0x20a;
    pcVar4 = "received \"grantedWithMods\" for certificate";
    break;
  case 2:
    ossl_cmp_print_log(3,param_1,"get1_cert_status","crypto/cmp/cmp_client.c",0x210,"ERROR",&_LC22,
                       "received \"rejection\" status rather than cert");
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x211,"get1_cert_status");
    ERR_set_error(0x3a,0xb6,0);
    goto LAB_00100ce3;
  case 3:
    ossl_cmp_print_log(3,param_1,"get1_cert_status","crypto/cmp/cmp_client.c",0x205,"ERROR",&_LC22,
                       "received \"waiting\" status for cert when actually aiming to extract cert");
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x207,"get1_cert_status");
    ERR_set_error(0x3a,0xa2,0);
    goto LAB_00100ce3;
  case 4:
    uVar3 = 0x214;
    pcVar4 = "received \"revocationWarning\" - a revocation of the cert is imminent";
    break;
  case 5:
    uVar3 = 0x218;
    pcVar4 = "received \"revocationNotification\" - a revocation of the cert has occurred";
    break;
  case 6:
    if (param_2 != 7) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0x21d,"get1_cert_status");
      ERR_set_error(0x3a,0xb0,0);
      goto LAB_00100ce3;
    }
    goto switchD_00100b8b_caseD_0;
  default:
    ossl_cmp_print_log(3,param_1,"get1_cert_status","crypto/cmp/cmp_client.c",0x222,"ERROR",
                       "received unsupported PKIStatus %d for certificate",
                       *(undefined4 *)(param_1 + 0x1d0));
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x225,"get1_cert_status");
    ERR_set_error(0x3a,0xba,0);
LAB_00100ce3:
    lVar2 = OSSL_CMP_CTX_snprint_PKIStatus(param_1,auStack_428,0x400);
    if (lVar2 != 0) {
      ERR_add_error_data(1,auStack_428);
    }
LAB_00100d0a:
    lVar2 = 0;
    goto LAB_00100be3;
  }
  ossl_cmp_print_log(4,param_1,"get1_cert_status","crypto/cmp/cmp_client.c",uVar3,&_LC6,&_LC22,
                     pcVar4);
switchD_00100b8b_caseD_0:
  lVar2 = ossl_cmp_certresponse_get1_cert(param_1,param_3);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x22a,"get1_cert_status");
    ERR_set_error(0x3a,0x70,0);
  }
LAB_00100be3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



undefined4
initial_certreq_constprop_0
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x1d0) = 0xfffffffd;
  iVar1 = ossl_cmp_ctx_set0_newCert(param_1,0);
  if (iVar1 != 0) {
    lVar3 = ossl_cmp_certreq_new(param_1,param_2,param_3);
    if (lVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1d0) = 0xfffffffe;
      uVar2 = send_receive_check(param_1,lVar3,param_4,param_5);
      OSSL_CMP_MSG_free(lVar3);
      return uVar2;
    }
  }
  return 0;
}



undefined4
ossl_cmp_exchange_error
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,int param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  lVar2 = OSSL_CMP_STATUSINFO_new(param_2,param_3,param_4);
  if (lVar2 == 0) {
    uVar4 = 0;
    lVar3 = 0;
    uVar1 = 0;
  }
  else {
    lVar3 = ossl_cmp_error_new(param_1,lVar2,(long)param_5,param_6,0);
    if (lVar3 == 0) {
      uVar4 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = send_receive_also_delayed(param_1,lVar3,&local_38,0x13);
      uVar4 = local_38;
    }
  }
  OSSL_CMP_MSG_free(lVar3);
  OSSL_CMP_PKISI_free(lVar2);
  OSSL_CMP_MSG_free(uVar4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
poll_for_response_constprop_0
          (long param_1,uint param_2,undefined4 param_3,long *param_4,undefined4 *param_5)

{
  int iVar1;
  ulong uVar2;
  time_t tVar3;
  long lVar4;
  long lVar5;
  void *ptr;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_458;
  ulong local_450;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_458 = 0;
  ossl_cmp_print_log(6,param_1,"poll_for_response","crypto/cmp/cmp_client.c",0x120,&_LC11,&_LC22,
                     "received \'waiting\' PKIStatus, starting to poll for response");
  uVar2 = 0x7fffffff;
  if ((param_2 & 1) != 0) {
    uVar2 = 0x4189374bc6a7ef;
  }
  *param_4 = 0;
  while( true ) {
    lVar4 = ossl_cmp_pollReq_new(param_1,param_3);
    lVar8 = local_458;
    if ((lVar4 == 0) ||
       (iVar1 = send_receive_check(param_1,lVar4,&local_458,0x1a), lVar8 = local_458, iVar1 == 0))
    goto LAB_001012c8;
    iVar1 = OSSL_CMP_MSG_get_bodytype(local_458);
    if (iVar1 != 0x1a) break;
    uVar6 = *(undefined8 *)(*(long *)(lVar8 + 8) + 8);
    iVar1 = OPENSSL_sk_num(uVar6);
    if (1 < iVar1) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0x133,"poll_for_response");
      ERR_set_error(0x3a,0xaa,0);
      goto LAB_001012c8;
    }
    lVar5 = ossl_cmp_pollrepcontent_get0_pollrep(uVar6,param_3);
    if (lVar5 == 0) goto LAB_001012c8;
    iVar1 = ASN1_INTEGER_get_int64(&local_450,*(undefined8 *)(lVar5 + 8));
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0x13b,"poll_for_response");
      ERR_set_error(0x3a,0xa7,0);
      goto LAB_001012c8;
    }
    if (((long)local_450 < 0) || (uVar2 < local_450)) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0x140,"poll_for_response");
      ERR_set_error(0x3a,0xb5,0);
      iVar1 = BIO_snprintf(local_448,0x400,"value = %jd",local_450);
      if (-1 < iVar1) {
        ERR_add_error_data(1,local_448);
      }
      goto LAB_001012c8;
    }
    if ((*(long *)(lVar5 + 0x10) == 0) ||
       (iVar1 = BIO_snprintf(local_448,0x400," with reason = \'"), iVar1 < 0)) {
      local_448[0] = '\0';
    }
    else {
      lVar7 = (long)iVar1;
      ptr = (void *)ossl_sk_ASN1_UTF8STRING2text(*(undefined8 *)(lVar5 + 0x10),&_LC18,0x3fe - lVar7)
      ;
      if ((ptr == (void *)0x0) ||
         (iVar1 = BIO_snprintf(local_448 + lVar7,0x400 - lVar7,"%s\'",ptr), iVar1 < 0)) {
        local_448[0] = '\0';
      }
      CRYPTO_free(ptr);
    }
    ossl_cmp_print_log(6,param_1,"poll_for_response","crypto/cmp/cmp_client.c",0x155,&_LC11,
                       "received polling response%s; checkAfter = %ld seconds",local_448,local_450);
    if (*(int *)(param_1 + 0x68) != 0) {
      lVar5 = *(long *)(param_1 + 0x70);
      tVar3 = time((time_t *)0x0);
      uVar9 = (lVar5 + -2) - tVar3;
      if ((long)uVar9 < 1) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_client.c",0x15e,"poll_for_response");
        ERR_set_error(0x3a,0xb8,0);
        goto LAB_001012c8;
      }
      if ((long)uVar9 < (long)local_450) {
        local_450 = uVar9;
      }
    }
    OSSL_CMP_MSG_free(lVar4);
    OSSL_CMP_MSG_free(lVar8);
    local_458 = 0;
    if (param_2 == 0) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = (int)local_450;
      }
      uVar6 = 0xffffffff;
      goto LAB_001012e4;
    }
    OSSL_sleep(local_450 * 1000);
  }
  iVar1 = is_crep_with_waiting(lVar8,param_3);
  if ((iVar1 == 0) && (iVar1 = ossl_cmp_is_error_with_waiting(lVar8), iVar1 == 0)) {
    ossl_cmp_print_log(6,param_1,"poll_for_response","crypto/cmp/cmp_client.c",0x17b,&_LC11);
    iVar1 = ossl_cmp_ctx_set1_first_senderNonce(param_1,0);
    if (iVar1 == 0) goto LAB_001012e2;
    if (lVar8 != 0) {
      OSSL_CMP_MSG_free(lVar4);
      *param_4 = lVar8;
      uVar6 = 1;
      goto LAB_001012e4;
    }
  }
  else {
    ossl_cmp_exchange_error(param_1,2,4,"polling already started",0,0);
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x178,"poll_for_response");
    ERR_set_error(0x3a,0xb9,0);
  }
LAB_001012c8:
  ossl_cmp_ctx_set1_first_senderNonce(param_1,0);
  OSSL_CMP_MSG_free(lVar4);
  OSSL_CMP_MSG_free(lVar8);
LAB_001012e2:
  uVar6 = 0;
LAB_001012e4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8 send_receive_also_delayed(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = send_receive_check();
  if (iVar1 == 0) {
LAB_0010150c:
    uVar2 = 0;
  }
  else {
    iVar1 = ossl_cmp_is_error_with_waiting(*param_3);
    if (iVar1 != 0) {
      lVar3 = *param_3;
      iVar1 = is_crep_with_waiting(lVar3,0xffffffff);
      if (((iVar1 != 0) || (iVar1 = ossl_cmp_is_error_with_waiting(lVar3), iVar1 != 0)) &&
         (iVar1 = ossl_cmp_ctx_set1_first_senderNonce(param_1,*(undefined8 *)(param_1 + 0x120)),
         iVar1 == 0)) goto LAB_0010150c;
      lVar3 = *param_3;
      if (param_4 != 0x13) {
        iVar1 = save_statusInfo(param_1,**(undefined8 **)(*(long *)(lVar3 + 8) + 8));
        if (iVar1 == 0) goto LAB_0010150c;
        lVar3 = *param_3;
      }
      OSSL_CMP_MSG_free(lVar3);
      *param_3 = 0;
      iVar1 = poll_for_response_constprop_0(param_1,1,0xffffffff,param_3,0);
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_client.c",0x1b7,"send_receive_also_delayed");
        ERR_set_error(0x3a,0xac,0);
        return 0;
      }
    }
    iVar1 = OSSL_CMP_MSG_get_bodytype(*param_3);
    uVar2 = 1;
    if (iVar1 != param_4) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0x1bc,"send_receive_also_delayed");
      ERR_set_error(0x3a,0x85,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined4 ossl_cmp_exchange_certConf(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  lVar2 = ossl_cmp_certConf_new();
  if (lVar2 == 0) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = send_receive_also_delayed(param_1,lVar2,&local_28,0x13);
    uVar3 = local_28;
  }
  OSSL_CMP_MSG_free(lVar2);
  OSSL_CMP_MSG_free(uVar3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int cert_response_isra_0
              (long param_1,undefined4 param_2,int param_3,long *param_4,undefined8 param_5,
              uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  X509 *a;
  X509_NAME *a_00;
  char *ptr;
  EVP_PKEY *pkey;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined8 *local_58;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (char *)0x0;
  local_58 = (undefined8 *)0x0;
  if (param_1 == 0) {
LAB_001018b8:
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    plVar6 = (long *)0x0;
    do {
      uVar2 = OSSL_CMP_MSG_get_bodytype(*param_4);
      if (((uVar2 & 0xfffffffd) != 1) && (uVar2 != 8)) {
        if (uVar2 == 0x17) {
          uVar5 = **(undefined8 **)(*(long *)(*param_4 + 8) + 8);
          goto LAB_00101761;
        }
        ERR_new();
        uVar5 = 0x2ba;
LAB_00101896:
        ERR_set_debug("crypto/cmp/cmp_client.c",uVar5,"cert_response");
        ERR_set_error(0x3a,0x85,0);
        goto LAB_001018b8;
      }
      plVar6 = *(long **)(*(long *)(*param_4 + 8) + 8);
      iVar3 = OPENSSL_sk_num(plVar6[1]);
      if (1 < iVar3) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_client.c",0x2a7,"cert_response");
        ERR_set_error(0x3a,0xaa,0);
        goto LAB_001018b8;
      }
      local_58 = (undefined8 *)ossl_cmp_certrepmessage_get0_certresponse(plVar6,param_3);
      if (local_58 == (undefined8 *)0x0) goto LAB_001018b8;
      uVar5 = local_58[1];
      if ((param_3 == -1) && (param_3 = ossl_cmp_asn1_get_int(*local_58), param_3 < -1)) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_client.c",0x2b3,"cert_response");
        ERR_set_error(0x3a,0x6c,0);
        goto LAB_001018b8;
      }
LAB_00101761:
      iVar3 = save_statusInfo(param_1,uVar5);
      if (iVar3 == 0) goto LAB_001018b8;
      iVar3 = ossl_cmp_pkisi_get_status(uVar5);
      if (iVar3 != 3) {
        if (uVar2 == 0x17) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_client.c",0x2d5,"cert_response");
          ERR_set_error(0x3a,0xb4,0);
          goto LAB_001018b8;
        }
        if (uVar2 != param_6) {
          ERR_new();
          uVar5 = 0x2da;
          goto LAB_00101896;
        }
        a = (X509 *)get1_cert_status(param_1,**(undefined4 **)(*param_4 + 8),local_58);
        if (a == (X509 *)0x0) {
          ERR_add_error_data(1,"; cannot extract certificate from response");
          goto LAB_001018b8;
        }
        iVar3 = ossl_cmp_ctx_set0_newCert(param_1);
        if (iVar3 == 0) {
          X509_free(a);
          goto LAB_001018b8;
        }
        if (((plVar6 != (long *)0x0) && (*plVar6 != 0)) &&
           (iVar3 = ossl_cmp_ctx_set1_caPubs(param_1), iVar3 == 0)) goto LAB_001018b8;
        a_00 = X509_get_subject_name(a);
        ptr = X509_NAME_oneline(a_00,(char *)0x0,0);
        pkey = (EVP_PKEY *)ossl_cmp_ctx_get0_newPubkey(param_1);
        if ((pkey == (EVP_PKEY *)0x0) ||
           (iVar3 = X509_check_private_key(*(X509 **)(param_1 + 0x1e8),pkey), iVar3 != 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0x80;
          local_48 = "public key in new certificate does not match our enrollment key";
        }
        pcVar4 = *(code **)(param_1 + 0x208);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = OSSL_CMP_certConf_cb;
        }
        iVar3 = (*pcVar4)(param_1,*(undefined8 *)(param_1 + 0x1e8),uVar5,&local_48);
        if (iVar3 == 0) {
          if (((*(int *)(param_1 + 0x14c) == 0) &&
              (iVar3 = ossl_cmp_hdr_has_implicitConfirm(*(undefined8 *)*param_4), iVar3 == 0)) &&
             (iVar3 = ossl_cmp_exchange_certConf(param_1,param_3,0,local_48), iVar3 == 0))
          goto LAB_00101b0c;
        }
        else {
          if (local_48 == (char *)0x0) {
            local_48 = "CMP client did not accept it";
          }
          ossl_cmp_print_log(3,param_1,"cert_response","crypto/cmp/cmp_client.c",0x30a,"ERROR",
                             "rejecting newly enrolled cert with subject: %s");
          if ((*(int *)(param_1 + 0x14c) == 0) &&
             (iVar1 = ossl_cmp_hdr_has_implicitConfirm(*(undefined8 *)*param_4), iVar1 == 0)) {
            ossl_cmp_exchange_certConf(param_1,param_3,iVar3,local_48);
          }
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_client.c",0x318,"cert_response");
          ERR_set_error(0x3a,0xa9,"rejecting newly enrolled cert with subject: %s; %s",ptr,local_48)
          ;
          *(undefined4 *)(param_1 + 0x1d0) = 2;
LAB_00101b0c:
          iVar1 = 0;
        }
        CRYPTO_free(ptr);
        break;
      }
      OSSL_CMP_MSG_free(*param_4);
      *param_4 = 0;
      iVar1 = poll_for_response_constprop_0(param_1,param_2,param_3,param_4,param_5);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_client.c",0x2ce,"cert_response");
        ERR_set_error(0x3a,0xac,0);
        goto LAB_001018b8;
      }
    } while (iVar1 != -1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



ulong OSSL_CMP_try_certreq(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iVar2 = (int)param_2;
  if (iVar2 == 4) {
    if (param_1 == 0) goto LAB_00101d88;
    iVar5 = *(int *)(param_1 + 0x1d0);
    uVar6 = 0xffffffff;
    if (iVar5 == 3) goto LAB_00101d0b;
    iVar5 = 3;
LAB_00101cba:
    uVar3 = initial_certreq_constprop_0(param_1,param_2,param_3,&local_48,iVar5);
    uVar1 = local_48;
    if (uVar3 != 0) {
      iVar2 = is_crep_with_waiting(local_48,uVar6);
      if (((iVar2 != 0) || (iVar2 = ossl_cmp_is_error_with_waiting(uVar1), iVar2 != 0)) &&
         (iVar2 = ossl_cmp_ctx_set1_first_senderNonce(param_1,*(undefined8 *)(param_1 + 0x120)),
         iVar2 == 0)) goto LAB_00101cfc;
LAB_00101d28:
      uVar3 = cert_response_isra_0(param_1,0,uVar6,&local_48,param_4,iVar5);
    }
    uVar4 = (ulong)uVar3;
    OSSL_CMP_MSG_free(local_48);
  }
  else {
    iVar5 = iVar2 + 1;
    if (param_1 == 0) {
LAB_00101d88:
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_client.c",0x341,"OSSL_CMP_try_certreq");
      ERR_set_error(0x3a,0x67,0);
LAB_00101cfc:
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      if (*(int *)(param_1 + 0x1d0) != 3) goto LAB_00101cba;
      if (iVar2 < 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = ossl_cmp_exchange_error(param_1,2,0,"polling aborted",0,"by application");
          return uVar4;
        }
        goto LAB_00101dbd;
      }
      uVar6 = 0;
LAB_00101d0b:
      uVar3 = poll_for_response_constprop_0(param_1,0,uVar6,&local_48,param_4);
      uVar4 = (ulong)uVar3;
      if (0 < (int)uVar3) goto LAB_00101d28;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00101dbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OSSL_CMP_exec_certreq(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if ((int)param_2 == 4) {
    uVar4 = 0xffffffff;
    iVar3 = 3;
  }
  else {
    iVar3 = (int)param_2 + 1;
    uVar4 = 0;
  }
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x36d,"OSSL_CMP_exec_certreq");
    ERR_set_error(0x3a,0x67,0);
LAB_00101f00:
    uVar4 = 0;
    goto LAB_00101e33;
  }
  iVar2 = initial_certreq_constprop_0(param_1,param_2,param_3,&local_38,iVar3);
  uVar1 = local_38;
  if (iVar2 == 0) {
LAB_00101e28:
    uVar4 = 0;
  }
  else {
    iVar2 = is_crep_with_waiting(local_38,uVar4);
    if (iVar2 == 0) {
      iVar2 = ossl_cmp_is_error_with_waiting(uVar1);
      if (iVar2 != 0) goto LAB_00101e7f;
    }
    else {
LAB_00101e7f:
      iVar2 = ossl_cmp_ctx_set1_first_senderNonce(param_1,*(undefined8 *)(param_1 + 0x120));
      if (iVar2 == 0) goto LAB_00101f00;
    }
    iVar3 = cert_response_isra_0(param_1,1,uVar4,&local_38,0,iVar3);
    if (iVar3 < 1) goto LAB_00101e28;
    uVar4 = *(undefined8 *)(param_1 + 0x1e8);
  }
  OSSL_CMP_MSG_free(local_38);
LAB_00101e33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OSSL_CMP_exec_RR_ses(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  X509_NAME *a;
  ASN1_INTEGER *x;
  X509_NAME *b;
  ASN1_INTEGER *y;
  long lVar9;
  long in_FS_OFFSET;
  char *pcVar10;
  long local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_450 = 0;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x38d,"OSSL_CMP_exec_RR_ses");
    ERR_set_error(0x3a,100,0);
LAB_001021f8:
    iVar2 = 0;
    goto LAB_00101fb9;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0xfffffffd;
  if (((*(long *)(param_1 + 0x1b0) == 0) && (*(long *)(param_1 + 0x1b8) == 0)) &&
     ((*(long *)(param_1 + 0x170) == 0 || (*(long *)(param_1 + 0x168) == 0)))) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x393,"OSSL_CMP_exec_RR_ses");
    ERR_set_error(0x3a,0xa8,0);
    goto LAB_001021f8;
  }
  lVar5 = ossl_cmp_rr_new(param_1);
  if (lVar5 == 0) {
    lVar9 = 0;
    goto LAB_001020aa;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0xfffffffe;
  iVar2 = send_receive_also_delayed(param_1,lVar5,&local_450,0xc);
  lVar9 = local_450;
  if (iVar2 == 0) goto LAB_00101fa9;
  puVar1 = *(undefined8 **)(*(long *)(local_450 + 8) + 8);
  iVar2 = OPENSSL_sk_num(*puVar1);
  if (iVar2 != 1) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x3a2,"OSSL_CMP_exec_RR_ses");
    ERR_set_error(0x3a,0xbc,0);
    goto LAB_001020aa;
  }
  uVar6 = ossl_cmp_revrepcontent_get_pkisi(puVar1,0);
  iVar2 = save_statusInfo(param_1,uVar6);
  if (iVar2 == 0) goto LAB_00102190;
  uVar3 = ossl_cmp_pkisi_get_status(uVar6);
  switch(uVar3) {
  case 0:
    uVar6 = 0x3b2;
    pcVar10 = "revocation accepted (PKIStatus=accepted)";
    goto LAB_0010210d;
  case 1:
    uVar6 = 0x3b6;
    pcVar10 = "revocation accepted (PKIStatus=grantedWithMods)";
    goto LAB_0010210d;
  case 2:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x3ba,"OSSL_CMP_exec_RR_ses");
    ERR_set_error(0x3a,0xb6,0);
    break;
  case 3:
  case 6:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x3c8,"OSSL_CMP_exec_RR_ses");
    ERR_set_error(0x3a,0xb9,0);
    break;
  case 4:
    uVar6 = 0x3bd;
    pcVar10 = "revocation accepted (PKIStatus=revocationWarning)";
LAB_0010210d:
    ossl_cmp_print_log(6,param_1,"OSSL_CMP_exec_RR_ses","crypto/cmp/cmp_client.c",uVar6,&_LC11,
                       &_LC22,pcVar10);
LAB_00102137:
    iVar2 = OPENSSL_sk_num(puVar1[1]);
    if (0 < iVar2) {
      puVar8 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar5 + 8) + 8),0);
      uVar6 = *puVar8;
      a = (X509_NAME *)OSSL_CRMF_CERTTEMPLATE_get0_issuer();
      x = (ASN1_INTEGER *)OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(uVar6);
      iVar2 = OPENSSL_sk_num(puVar1[1]);
      if (iVar2 != 1) {
        ERR_new();
        uVar6 = 0x3d9;
        goto LAB_00102173;
      }
      lVar7 = ossl_cmp_revrepcontent_get_CertId(puVar1,0);
      if (lVar7 == 0) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_client.c",0x3de,"OSSL_CMP_exec_RR_ses");
        ERR_set_error(0x3a,0xa5,0);
      }
      else {
        b = (X509_NAME *)OSSL_CRMF_CERTID_get0_issuer(lVar7);
        iVar2 = X509_NAME_cmp(a,b);
        if (iVar2 == 0) {
          y = (ASN1_INTEGER *)OSSL_CRMF_CERTID_get0_serialNumber(lVar7);
          iVar2 = ASN1_INTEGER_cmp(x,y);
          if (iVar2 == 0) goto LAB_00102149;
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_client.c",0x3ec,"OSSL_CMP_exec_RR_ses");
          ERR_set_error(0x3a,0xad,0);
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_client.c",0x3e4,"OSSL_CMP_exec_RR_ses");
          ERR_set_error(0x3a,0xbb,0);
        }
      }
      break;
    }
LAB_00102149:
    iVar2 = 1;
    if ((puVar1[2] != 0) && (iVar4 = OPENSSL_sk_num(), iVar4 != 1)) {
      ERR_new();
      uVar6 = 0x3f5;
LAB_00102173:
      ERR_set_debug("crypto/cmp/cmp_client.c",uVar6,"OSSL_CMP_exec_RR_ses");
      ERR_set_error(0x3a,0xbc,0);
      break;
    }
    goto LAB_00101fa9;
  case 5:
    ossl_cmp_print_log(4,param_1,"OSSL_CMP_exec_RR_ses","crypto/cmp/cmp_client.c",0x3c2,&_LC6,&_LC22
                      );
    goto LAB_00102137;
  default:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x3cb,"OSSL_CMP_exec_RR_ses");
    ERR_set_error(0x3a,0xba,0);
  }
LAB_00102190:
  lVar7 = OSSL_CMP_CTX_snprint_PKIStatus(param_1,local_448,0x400);
  if (lVar7 != 0) {
    ERR_add_error_data(1,local_448);
  }
LAB_001020aa:
  iVar2 = 0;
LAB_00101fa9:
  OSSL_CMP_MSG_free(lVar5);
  OSSL_CMP_MSG_free(lVar9);
LAB_00101fb9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



long OSSL_CMP_exec_GENM_ses(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_client.c",0x40c,"OSSL_CMP_exec_GENM_ses");
    ERR_set_error(0x3a,100,0);
    lVar4 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1d0) = 0xfffffffd;
    lVar2 = ossl_cmp_genm_new();
    if (lVar2 == 0) {
      lVar5 = 0;
      lVar4 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1d0) = 0xfffffffe;
      iVar1 = send_receive_also_delayed(param_1,lVar2,&local_28,0x16);
      lVar5 = local_28;
      if (iVar1 == 0) {
        lVar4 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        lVar3 = *(long *)(local_28 + 8);
        lVar4 = *(long *)(lVar3 + 8);
        if (lVar4 == 0) {
          lVar4 = OPENSSL_sk_new_null();
          lVar3 = *(long *)(lVar5 + 8);
        }
        *(undefined8 *)(lVar3 + 8) = 0;
      }
    }
    OSSL_CMP_MSG_free(lVar2);
    OSSL_CMP_MSG_free(lVar5);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



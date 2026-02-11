
undefined1  [16] unprotected_exception(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong extraout_RDX;
  ulong uVar3;
  ulong extraout_RDX_00;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char *pcVar7;
  char *pcStack_10;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    auVar6._8_8_ = param_3;
    auVar6._0_8_ = 0xffffffff;
    return auVar6;
  }
  if (param_4 != 0) {
    pcStack_10 = "missing";
    uVar4 = 0x236;
    if ((int)param_3 != 0) {
      pcStack_10 = "invalid";
    }
    pcVar7 = "ignoring %s protection of request message";
LAB_00100048:
    ossl_cmp_print_log(4,param_1,"unprotected_exception","crypto/cmp/cmp_server.c",uVar4,&_LC2,
                       pcVar7);
    auVar5._8_8_ = pcStack_10;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  iVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
  uVar3 = extraout_RDX;
  if (iVar2 == 0x17) {
    iVar2 = OSSL_CMP_CTX_get_option(param_1,0x1f);
    uVar3 = extraout_RDX_00;
    if (iVar2 == 1) {
      uVar4 = 0x23c;
      pcStack_10 = "ignoring missing protection of error message";
      pcVar7 = "%s";
      goto LAB_00100048;
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}



long process_non_polling_request(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong e;
  char *extraout_RDX;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  undefined4 local_64;
  X509 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) || (param_2 == 0)) ||
     (*(long *)(param_2 + 8) == 0)) goto LAB_00100270;
  uVar1 = OSSL_CMP_MSG_get_bodytype(param_2);
  if (uVar1 == 0x17) {
    if ((code *)param_1[6] == (code *)0x0) {
      ERR_new();
      uVar13 = 0x1e9;
      goto LAB_00100521;
    }
    if (*param_1 == 0) goto LAB_00100270;
    puVar6 = *(undefined8 **)(*(long *)(param_2 + 8) + 8);
    (*(code *)param_1[6])(param_1,param_2,*puVar6,puVar6[1],puVar6[2]);
    lVar7 = ossl_cmp_pkiconf_new(*param_1);
    if (lVar7 != 0) goto LAB_00100273;
    ERR_new();
    pcVar11 = "process_error";
    uVar13 = 0x189;
LAB_001003b5:
    ERR_set_debug("crypto/cmp/cmp_server.c",uVar13,pcVar11);
    ERR_set_error(0x3a,0x7a,0);
    goto LAB_00100273;
  }
  if (0x17 < (int)uVar1) {
    if (uVar1 == 0x18) {
      if (param_1[7] == 0) {
        ERR_new();
        uVar13 = 0x1ef;
        goto LAB_00100521;
      }
      lVar7 = *param_1;
      if (lVar7 != 0) {
        uVar13 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
        iVar2 = OPENSSL_sk_num(uVar13);
        iVar3 = OSSL_CMP_CTX_get_option(lVar7,0x19);
        if ((iVar3 != 1) && (*(int *)(lVar7 + 0x1d0) == -2)) {
          if (iVar2 == 0) {
            ossl_cmp_print_log(3,lVar7,"process_certConf","crypto/cmp/cmp_server.c",0x1a4,"ERROR",
                               &_LC6,"certificate rejected by client");
          }
          else {
            pcVar11 = extraout_RDX;
            if (1 < iVar2) {
              pcVar11 = "All CertStatus but the first will be ignored";
              ossl_cmp_print_log(4,lVar7,"process_certConf","crypto/cmp/cmp_server.c",0x1a7,&_LC2,
                                 &_LC6);
            }
            puVar6 = (undefined8 *)OPENSSL_sk_value(uVar13,0,pcVar11);
            if (puVar6 != (undefined8 *)0x0) {
              iVar2 = ossl_cmp_asn1_get_int(puVar6[1]);
              lVar8 = puVar6[2];
              if (iVar2 != (int)param_1[2]) {
                ERR_new();
                pcVar11 = "process_certConf";
                uVar13 = 0x1b1;
                goto LAB_00100751;
              }
              iVar2 = (*(code *)param_1[7])(param_1,param_2,iVar2,*puVar6,lVar8);
              if (iVar2 == 0) goto LAB_00100270;
              if ((lVar8 != 0) && (iVar2 = ossl_cmp_pkisi_get_status(lVar8), iVar2 != 0)) {
                uVar5 = ossl_cmp_pkisi_get_status(lVar8);
                pcVar11 = (char *)ossl_cmp_PKIStatus_to_string(uVar5);
                pcVar12 = "with";
                if (pcVar11 == (char *)0x0) {
                  pcVar11 = "PKIStatus";
                  pcVar12 = "without";
                }
                ossl_cmp_print_log(6,lVar7,"process_certConf","crypto/cmp/cmp_server.c",0x1bc,&_LC13
                                   ,"certificate rejected by client %s %s",pcVar12,pcVar11);
              }
            }
          }
          lVar7 = ossl_cmp_pkiconf_new(lVar7);
          if (lVar7 != 0) goto LAB_00100273;
          ERR_new();
          pcVar11 = "process_certConf";
          uVar13 = 0x1c3;
          goto LAB_001003b5;
        }
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_server.c",0x19f,"process_certConf");
        ERR_set_error(0x3a,0xa0,0);
      }
    }
    else {
      if (uVar1 != 0x19) goto LAB_00100510;
      ERR_new();
      pcVar11 = "process_non_polling_request";
      uVar13 = 0x1f5;
LAB_0010024f:
      ERR_set_debug("crypto/cmp/cmp_server.c",uVar13,pcVar11);
      ERR_set_error(0x3a,0x85,0);
    }
    goto LAB_00100270;
  }
  if (uVar1 < 0x16) {
    if ((1L << ((byte)uVar1 & 0x3f) & 0x95U) == 0) {
      if (uVar1 == 0x15) {
        if ((code *)param_1[5] != (code *)0x0) {
          if ((*param_1 != 0) &&
             (iVar2 = (*(code *)param_1[5])
                                (param_1,param_2,*(undefined8 *)(*(long *)(param_2 + 8) + 8),
                                 &local_48), iVar2 != 0)) {
            lVar7 = ossl_cmp_genp_new(*param_1,local_48);
            OPENSSL_sk_pop_free(local_48,&OSSL_CMP_ITAV_free);
            goto LAB_00100273;
          }
          goto LAB_00100270;
        }
        ERR_new();
        uVar13 = 0x1e3;
      }
      else {
        if (uVar1 != 0xb) goto LAB_00100510;
        if (param_1[4] != 0) {
          if (*param_1 != 0) {
            iVar2 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(param_2 + 8) + 8));
            if (iVar2 != 1) {
              ERR_new();
              pcVar11 = "process_rr";
              uVar13 = 0x14b;
              goto LAB_001007c1;
            }
            puVar6 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_2 + 8) + 8),0);
            if (puVar6 != (undefined8 *)0x0) {
              uVar13 = *puVar6;
              lVar7 = OSSL_CRMF_CERTTEMPLATE_get0_issuer(uVar13);
              lVar8 = OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(uVar13);
              if ((lVar7 == 0) || (lVar8 == 0)) {
                lVar9 = 0;
              }
              else {
                lVar9 = OSSL_CRMF_CERTID_gen(lVar7,lVar8);
                if (lVar9 == 0) goto LAB_00100270;
              }
              lVar8 = (*(code *)param_1[4])(param_1,param_2,lVar7,lVar8);
              lVar7 = 0;
              if ((lVar8 != 0) &&
                 (lVar7 = ossl_cmp_rp_new(*param_1,lVar8,lVar9,(int)param_1[0xb]), lVar7 == 0)) {
                ERR_new();
                ERR_set_debug("crypto/cmp/cmp_server.c",0x15f,"process_rr");
                ERR_set_error(0x3a,0x7e,0);
              }
              OSSL_CRMF_CERTID_free(lVar9);
              OSSL_CMP_PKISI_free(lVar8);
              goto LAB_00100273;
            }
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_server.c",0x150,"process_rr");
            ERR_set_error(0x3a,0x9e,0);
          }
          goto LAB_00100270;
        }
        ERR_new();
        uVar13 = 0x1dd;
      }
      goto LAB_00100521;
    }
    if (param_1[3] == 0) {
      ERR_new();
      uVar13 = 0x1d7;
      goto LAB_00100521;
    }
    local_58 = (X509 *)0x0;
    local_50 = 0;
    local_48 = 0;
    if (*param_1 == 0) goto LAB_00100270;
    iVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
    if (iVar2 == 4) {
LAB_001007f8:
      local_64 = 3;
    }
    else if (iVar2 < 5) {
      if (iVar2 != 0) {
        if (iVar2 != 2) goto LAB_001004f4;
        goto LAB_001007f8;
      }
      local_64 = 1;
    }
    else {
      local_64 = 8;
      if (iVar2 != 7) {
LAB_001004f4:
        ERR_new();
        pcVar11 = "process_cert_request";
        uVar13 = 0xf1;
        goto LAB_0010024f;
      }
    }
    iVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
    if (iVar2 == 4) {
      uVar13 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
      iVar2 = -1;
      lVar8 = 0;
LAB_00100575:
      *(int *)(param_1 + 2) = iVar2;
      iVar3 = OSSL_CRMF_MSG_centralkeygen_requested(lVar8,uVar13);
      if (-1 < iVar3) {
        if ((iVar3 == 0) &&
           (iVar4 = ossl_cmp_verify_popo(*param_1,param_2,(int)param_1[0xc]), iVar4 == 0)) {
          e = ERR_peek_error();
          pcVar11 = ERR_reason_error_string(e);
          lVar8 = OSSL_CMP_STATUSINFO_new(2,0x200,pcVar11);
          if (lVar8 == 0) goto LAB_00100270;
          lVar7 = *param_1;
          uVar13 = 0;
LAB_00100647:
          lVar7 = ossl_cmp_certrep_new
                            (lVar7,local_64,iVar2,lVar8,local_58,uVar13,0,local_50,local_48,
                             (int)param_1[0xb]);
          if (lVar7 == 0) {
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_server.c",0x131,"process_cert_request");
            ERR_set_error(0x3a,0x75,0);
          }
        }
        else {
          uVar10 = OSSL_CMP_MSG_get0_header(param_2);
          lVar7 = 0;
          lVar8 = (*(code *)param_1[3])
                            (param_1,param_2,iVar2,lVar8,uVar13,&local_58,&local_50,&local_48);
          if (lVar8 != 0) {
            iVar4 = ossl_cmp_pkisi_get_status(lVar8);
            if (iVar4 == 3) {
              *(undefined4 *)((long)param_1 + 0x14) = 1;
            }
            uVar1 = ossl_cmp_hdr_has_implicitConfirm(uVar10);
            if ((uVar1 != 0) && (uVar1 = *(uint *)((long)param_1 + 100), uVar1 != 0)) {
              uVar1 = (uint)(local_58 != (X509 *)0x0);
            }
            lVar7 = 0;
            iVar4 = OSSL_CMP_CTX_set_option(*param_1,0x19,uVar1);
            if (iVar4 != 0) {
              lVar7 = *param_1;
              uVar13 = 0;
              if ((iVar3 == 1) && (*(int *)(lVar7 + 0x160) != 0)) {
                uVar13 = *(undefined8 *)(lVar7 + 0x158);
              }
              goto LAB_00100647;
            }
          }
        }
        OSSL_CMP_PKISI_free(lVar8);
        X509_free(local_58);
        OSSL_CMP_CTX_set0_newPkey(*param_1,0,0);
        OSSL_STACK_OF_X509_free(local_50);
        OSSL_STACK_OF_X509_free(local_48);
        goto LAB_00100273;
      }
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
      iVar2 = OPENSSL_sk_num(uVar13);
      if (iVar2 == 1) {
        lVar8 = OPENSSL_sk_value(uVar13,0);
        if (lVar8 == 0) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_server.c",0x100,"process_cert_request");
          ERR_set_error(0x3a,0x9d,0);
        }
        else {
          uVar13 = 0;
          iVar2 = OSSL_CRMF_MSG_get_certReqId(lVar8);
          if (iVar2 == 0) goto LAB_00100575;
          ERR_new();
          pcVar11 = "process_cert_request";
          uVar13 = 0x105;
LAB_00100751:
          ERR_set_debug("crypto/cmp/cmp_server.c",uVar13,pcVar11);
          ERR_set_error(0x3a,0x6c,0);
        }
      }
      else {
        ERR_new();
        pcVar11 = "process_cert_request";
        uVar13 = 0xfc;
LAB_001007c1:
        ERR_set_debug("crypto/cmp/cmp_server.c",uVar13,pcVar11);
        ERR_set_error(0x3a,0xa1,0);
      }
    }
  }
  else {
LAB_00100510:
    ERR_new();
    uVar13 = 0x1f8;
LAB_00100521:
    ERR_set_debug("crypto/cmp/cmp_server.c",uVar13,"process_non_polling_request");
    ERR_set_error(0x3a,0x65,0);
  }
LAB_00100270:
  lVar7 = 0;
LAB_00100273:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}



void OSSL_CMP_SRV_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    OSSL_CMP_CTX_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long * OSSL_CMP_SRV_CTX_new(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)CRYPTO_zalloc(0x68,"crypto/cmp/cmp_server.c",0x38);
  if (plVar1 != (long *)0x0) {
    lVar2 = OSSL_CMP_CTX_new(param_1,param_2);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      plVar1[2] = _LC15;
      return plVar1;
    }
  }
  OSSL_CMP_SRV_CTX_free(plVar1);
  return (long *)0x0;
}



bool OSSL_CMP_SRV_CTX_init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_server.c",0x52,"OSSL_CMP_SRV_CTX_init");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = param_3;
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x38) = param_7;
    *(undefined8 *)(param_1 + 0x20) = param_4;
    *(undefined8 *)(param_1 + 0x28) = param_5;
    *(undefined8 *)(param_1 + 0x30) = param_6;
    *(undefined8 *)(param_1 + 0x40) = param_8;
  }
  return param_1 != 0;
}



undefined8 OSSL_CMP_SRV_CTX_init_trans(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x48) = param_2;
    *(undefined8 *)(param_1 + 0x50) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_server.c",100,"OSSL_CMP_SRV_CTX_init_trans");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_SRV_CTX_get0_cmp_ctx(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_server.c",0x6f,"OSSL_CMP_SRV_CTX_get0_cmp_ctx");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_SRV_CTX_get0_custom_ctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_server.c",0x78,"OSSL_CMP_SRV_CTX_get0_custom_ctx");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_SRV_CTX_set_send_unprotected_errors(long param_1,int param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x58) = (uint)(param_2 != 0);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_server.c",0x82,"OSSL_CMP_SRV_CTX_set_send_unprotected_errors");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_SRV_CTX_set_accept_unprotected(long param_1,int param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x5c) = (uint)(param_2 != 0);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_server.c",0x8c,"OSSL_CMP_SRV_CTX_set_accept_unprotected");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_SRV_CTX_set_accept_raverified(long param_1,int param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x60) = (uint)(param_2 != 0);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_server.c",0x96,"OSSL_CMP_SRV_CTX_set_accept_raverified");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(long param_1,int param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 100) = (uint)(param_2 != 0);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_server.c",0xa1,"OSSL_CMP_SRV_CTX_set_grant_implicit_confirm");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



long OSSL_CMP_SRV_process_request(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ASN1_OCTET_STRING *ia5;
  undefined8 uVar14;
  long in_FS_OFFSET;
  uint local_50;
  undefined4 uStack_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) || (param_2 == 0)) ||
     ((*(long *)(param_2 + 8) == 0 || (lVar6 = OSSL_CMP_MSG_get0_header(param_2), lVar6 == 0)))) {
    ERR_new();
    lVar6 = 0;
    ERR_set_debug("crypto/cmp/cmp_server.c",0x252,"OSSL_CMP_SRV_process_request");
    ERR_set_error(0x3a,0x67,0);
    goto LAB_0010109a;
  }
  lVar1 = *param_1;
  uVar11 = *(undefined8 *)(lVar1 + 0xe8);
  uVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
  uVar7 = ossl_cmp_bodytype_to_string(uVar2);
  ossl_cmp_print_log(7,lVar1,"OSSL_CMP_SRV_process_request","crypto/cmp/cmp_server.c",600,"DEBUG",
                     "received %s");
  if (**(int **)(lVar6 + 8) == 4) {
    iVar3 = OSSL_CMP_CTX_set1_recipient(lVar1,*(undefined8 *)(*(int **)(lVar6 + 8) + 2),uVar7);
    if (iVar3 == 0) goto LAB_00100f16;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      if ((uVar2 - 0x17 & 0xfffffffd) == 0) {
        ia5 = *(ASN1_OCTET_STRING **)(lVar1 + 0x118);
        if (0x17 < uVar2) goto LAB_001012af;
LAB_00101103:
        if (ia5 != (ASN1_OCTET_STRING *)0x0) {
          pcVar9 = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD *)0x0,ia5);
          if (pcVar9 != (char *)0x0) {
            ossl_cmp_print_log(4,lVar1,"OSSL_CMP_SRV_process_request","crypto/cmp/cmp_server.c",
                               0x278,&_LC2,"Assuming that last transaction with ID=%s got aborted",
                               pcVar9);
          }
          CRYPTO_free(pcVar9);
        }
        iVar3 = OSSL_CMP_CTX_set1_transactionID(lVar1,0);
        if ((iVar3 != 0) && (iVar3 = OSSL_CMP_CTX_set1_senderNonce(lVar1,0), iVar3 != 0)) {
          if (((code *)param_1[10] == (code *)0x0) ||
             (iVar3 = (*(code *)param_1[10])(param_1,0), iVar3 != 0)) goto LAB_001012b8;
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_server.c",0x284,"OSSL_CMP_SRV_process_request");
          ERR_set_error(0x3a,0x9e,0);
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_server.c",0x268,"OSSL_CMP_SRV_process_request");
        ERR_set_error(0x3a,0x68,0);
      }
      goto LAB_00100f16;
    }
    ia5 = *(ASN1_OCTET_STRING **)(lVar1 + 0x118);
    if ((uVar2 < 0x18) && ((0xa00895UL >> ((ulong)uVar2 & 0x3f) & 1) != 0)) goto LAB_00101103;
LAB_001012af:
    if (ia5 == (ASN1_OCTET_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_server.c",0x28d,"OSSL_CMP_SRV_process_request");
      ERR_set_error(0x3a,0x85,0);
      goto LAB_00100f16;
    }
LAB_001012b8:
    iVar3 = ossl_cmp_msg_check_update(lVar1,param_2,0x100000);
    if (((*(long *)(lVar1 + 0xe8) != 0) && (*(long *)(lVar1 + 0xd8) != 0)) &&
       (iVar4 = ossl_cmp_hdr_get_protection_nid(lVar6), iVar4 != 0x30e)) {
      *(undefined8 *)(lVar1 + 0xe8) = 0;
    }
    if (iVar3 == 0) goto LAB_00100f16;
    if (uVar2 == 0x19) {
      if (param_1[8] == 0) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_server.c",0x29d,"OSSL_CMP_SRV_process_request");
        ERR_set_error(0x3a,0x65,0);
        local_48 = (char *)0x0;
        local_50 = 0;
        uVar8 = ERR_peek_error_data(&local_48,&local_50);
      }
      else {
        local_48 = (char *)0x0;
        if (*param_1 == 0) goto LAB_00101483;
        if (*(int *)((long)param_1 + 0x14) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
          iVar3 = OPENSSL_sk_num(uVar7);
          if (iVar3 != 1) {
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_server.c",0x213,"process_pollReq");
            uVar7 = 0xa1;
            goto LAB_001015ec;
          }
          puVar12 = (undefined8 *)OPENSSL_sk_value(uVar7,0);
          uVar5 = ossl_cmp_asn1_get_int(*puVar12);
          iVar3 = (*(code *)param_1[8])(param_1,param_2,uVar5);
          if (iVar3 == 0) goto LAB_00101483;
          if (CONCAT44(uStack_4c,local_50) == 0) {
            lVar6 = ossl_cmp_pollRep_new(*param_1,uVar5,local_48);
            if (lVar6 != 0) goto LAB_001013a2;
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_server.c",0x224,"process_pollReq");
            ERR_set_error(0x3a,0x7b,0);
            goto LAB_00101483;
          }
          *(undefined4 *)((long)param_1 + 0x14) = 0;
          lVar6 = process_non_polling_request(param_1);
          OSSL_CMP_MSG_free(CONCAT44(uStack_4c,local_50));
          goto LAB_00101470;
        }
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_server.c",0x20d,"process_pollReq");
        uVar7 = 0x85;
LAB_001015ec:
        ERR_set_error(0x3a,uVar7,0);
LAB_00101483:
        local_48 = (char *)0x0;
        local_50 = 0;
        uVar8 = ERR_peek_error_data(&local_48,&local_50);
      }
      goto LAB_00100f53;
    }
    if ((((code *)param_1[9] == (code *)0x0) || (*param_1 == 0)) ||
       (iVar3 = (*(code *)param_1[9])(param_1,param_2), iVar3 == 0)) {
LAB_001014c8:
      lVar6 = process_non_polling_request(param_1,param_2);
LAB_00101470:
      if (lVar6 == 0) goto LAB_00101483;
    }
    else {
      if (iVar3 == 1) {
        *(undefined4 *)((long)param_1 + 0x14) = 1;
        pcVar9 = (char *)0x0;
        pcVar13 = (char *)0x0;
        uVar2 = 0;
        uVar7 = 0;
        uVar14 = 3;
      }
      else {
        uVar8 = ERR_peek_error();
        uVar2 = (uint)uVar8 & 0x7fffffff;
        if ((uVar8 & 0x80000000) == 0) {
          uVar2 = (uint)uVar8 & 0x7fffff;
        }
        pcVar9 = ERR_reason_error_string(uVar8);
        uVar7 = 0x2000000;
        uVar14 = 2;
        pcVar13 = "server application error";
      }
      lVar10 = OSSL_CMP_STATUSINFO_new(uVar14,uVar7,pcVar13);
      if (lVar10 == 0) goto LAB_001014c8;
      lVar6 = ossl_cmp_error_new(*param_1,lVar10,uVar2,pcVar9,(int)param_1[0xb]);
      OSSL_CMP_PKISI_free(lVar10);
      if (lVar6 == 0) goto LAB_001014c8;
    }
LAB_001013a2:
    OSSL_CMP_CTX_print_errors(lVar1);
    *(undefined8 *)(lVar1 + 0xe8) = uVar11;
LAB_00100fd5:
    uVar2 = OSSL_CMP_MSG_get_bodytype(lVar6);
    uVar11 = ossl_cmp_bodytype_to_string(uVar2);
    ossl_cmp_print_log(7,lVar1,"OSSL_CMP_SRV_process_request","crypto/cmp/cmp_server.c",0x2ce,
                       "DEBUG","sending %s");
    *(undefined4 *)(lVar1 + 0x1d0) = 0xfffffffe;
    if (0x17 < uVar2) goto LAB_0010109a;
    uVar8 = 1L << ((byte)uVar2 & 0x3f);
    if ((uVar8 & 0x481000) == 0) {
      if ((uVar8 & 0x10a) == 0) {
        if (uVar2 != 0x17) goto LAB_0010109a;
      }
      else {
        iVar3 = OSSL_CMP_CTX_get_option(lVar1,0x19,uVar11);
        if (iVar3 == 0) goto LAB_0010109a;
      }
      iVar3 = ossl_cmp_is_error_with_waiting(lVar6);
      if (iVar3 != 0) goto LAB_0010109a;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_server.c",0x260,"OSSL_CMP_SRV_process_request");
    ERR_set_error(0x3a,0x96,0);
LAB_00100f16:
    local_48 = (char *)0x0;
    local_50 = 0;
    uVar8 = ERR_peek_error_data(&local_48,&local_50);
    if (*(long *)(lVar1 + 0x118) == 0) {
      OSSL_CMP_CTX_set1_transactionID(lVar1,*(undefined8 *)(lVar6 + 0x38));
    }
    ossl_cmp_ctx_set1_recipNonce(lVar1,*(undefined8 *)(lVar6 + 0x40));
LAB_00100f53:
    if (((local_50 & 2) == 0) || (*local_48 == '\0')) {
      local_48 = (char *)0x0;
    }
    pcVar9 = ERR_reason_error_string(uVar8);
    lVar10 = OSSL_CMP_STATUSINFO_new(2,4,pcVar9);
    if (lVar10 == 0) {
      OSSL_CMP_CTX_print_errors(lVar1,0);
      *(undefined8 *)(lVar1 + 0xe8) = uVar11;
    }
    else {
      lVar6 = ossl_cmp_error_new(*param_1,lVar10,uVar8,local_48,(int)param_1[0xb]);
      OSSL_CMP_PKISI_free(lVar10);
      OSSL_CMP_CTX_print_errors(lVar1);
      *(undefined8 *)(lVar1 + 0xe8) = uVar11;
      if (lVar6 != 0) goto LAB_00100fd5;
    }
    lVar6 = 0;
    ossl_cmp_print_log(3,lVar1,"OSSL_CMP_SRV_process_request","crypto/cmp/cmp_server.c",0x2d1,&_LC20
                       ,&_LC6,"cannot send proper CMP response");
    *(undefined4 *)(lVar1 + 0x1d0) = 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 2) = 0xfffffffe;
  if ((code *)param_1[10] != (code *)0x0) {
    (*(code *)param_1[10])(param_1,*(undefined8 *)(lVar1 + 0x118));
  }
  OSSL_CMP_CTX_set1_transactionID(lVar1,0);
  OSSL_CMP_CTX_set1_senderNonce(lVar1,0);
  *(undefined4 *)(lVar1 + 0x1d0) = 0xffffffff;
LAB_0010109a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}



undefined8 OSSL_CMP_CTX_server_perform(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_server.c",0x300,"OSSL_CMP_CTX_server_perform");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    lVar1 = OSSL_CMP_CTX_get_transfer_cb_arg();
    if (lVar1 != 0) {
      uVar2 = OSSL_CMP_SRV_process_request(lVar1,param_2);
      return uVar2;
    }
    ERR_new(0);
    ERR_set_debug("crypto/cmp/cmp_server.c",0x305,"OSSL_CMP_CTX_server_perform");
    ERR_set_error(0x3a,0x9f,0);
  }
  return 0;
}



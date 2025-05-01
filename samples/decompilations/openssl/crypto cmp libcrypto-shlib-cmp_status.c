
undefined8 ossl_cmp_pkisi_get_status(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = ossl_cmp_asn1_get_int();
    if ((int)uVar1 != -2) {
      return uVar1;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}



char * ossl_cmp_PKIStatus_to_string(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "PKIStatus: accepted";
  case 1:
    return "PKIStatus: granted with modifications";
  case 2:
    return "PKIStatus: rejection";
  case 3:
    return "PKIStatus: waiting";
  case 4:
    return "PKIStatus: revocation warning - a revocation of the cert is imminent";
  case 5:
    return "PKIStatus: revocation notification - a revocation of the cert has occurred";
  case 6:
    return "PKIStatus: key update warning - update already done for the cert";
  default:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_status.c",0x3b,"ossl_cmp_PKIStatus_to_string");
    ERR_set_error(0x3a,0x6b,"PKIStatus: invalid=%d",param_1);
    return (char *)0x0;
  }
}



char * snprint_PKIStatusInfo_parts
                 (uint param_1,int param_2,undefined8 param_3,char *param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ASN1_STRING *x;
  undefined8 uVar7;
  undefined *puVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  
  if ((((param_4 == (char *)0x0) || ((int)param_1 < 0)) ||
      (lVar5 = ossl_cmp_PKIStatus_to_string(), lVar5 == 0)) ||
     ((iVar1 = BIO_snprintf(param_4,param_5,"%s",lVar5), iVar1 < 0 ||
      (uVar6 = (ulong)iVar1, param_5 <= uVar6)))) {
    return (char *)0x0;
  }
  pcVar11 = param_4 + uVar6;
  param_5 = param_5 - uVar6;
  bVar9 = 1;
  if (1 < param_2 + 1U) {
    iVar1 = BIO_snprintf(pcVar11,param_5,"; PKIFailureInfo: ");
    if (iVar1 < 0) {
      return (char *)0x0;
    }
    uVar6 = (ulong)iVar1;
    if (param_5 <= uVar6) {
      return (char *)0x0;
    }
    pcVar11 = pcVar11 + uVar6;
    param_5 = param_5 - uVar6;
    uVar3 = 0;
    iVar1 = 0;
    do {
      uVar12 = param_2 >> ((byte)iVar1 & 0x1f) & 1;
      if (uVar12 != 0) {
        switch(iVar1) {
        default:
          pcVar10 = "badAlg";
          break;
        case 1:
          pcVar10 = "badMessageCheck";
          break;
        case 2:
          pcVar10 = "badRequest";
          break;
        case 3:
          pcVar10 = "badTime";
          break;
        case 4:
          pcVar10 = "badCertId";
          break;
        case 5:
          pcVar10 = "badDataFormat";
          break;
        case 6:
          pcVar10 = "wrongAuthority";
          break;
        case 7:
          pcVar10 = "incorrectData";
          break;
        case 8:
          pcVar10 = "missingTimeStamp";
          break;
        case 9:
          pcVar10 = "badPOP";
          break;
        case 10:
          pcVar10 = "certRevoked";
          break;
        case 0xb:
          pcVar10 = "certConfirmed";
          break;
        case 0xc:
          pcVar10 = "wrongIntegrity";
          break;
        case 0xd:
          pcVar10 = "badRecipientNonce";
          break;
        case 0xe:
          pcVar10 = "timeNotAvailable";
          break;
        case 0xf:
          pcVar10 = "unacceptedPolicy";
          break;
        case 0x10:
          pcVar10 = "unacceptedExtension";
          break;
        case 0x11:
          pcVar10 = "addInfoNotAvailable";
          break;
        case 0x12:
          pcVar10 = "badSenderNonce";
          break;
        case 0x13:
          pcVar10 = "badCertTemplate";
          break;
        case 0x14:
          pcVar10 = "signerNotTrusted";
          break;
        case 0x15:
          pcVar10 = "transactionIdInUse";
          break;
        case 0x16:
          pcVar10 = "unsupportedVersion";
          break;
        case 0x17:
          pcVar10 = "notAuthorized";
          break;
        case 0x18:
          pcVar10 = "systemUnavail";
          break;
        case 0x19:
          pcVar10 = "systemFailure";
          break;
        case 0x1a:
          pcVar10 = "duplicateCertReq";
        }
        puVar8 = &_LC36;
        if (uVar3 == 0) {
          puVar8 = &_LC37;
        }
        iVar2 = BIO_snprintf(pcVar11,param_5,"%s%s",puVar8,pcVar10);
        if (iVar2 < 0) {
          return (char *)0x0;
        }
        uVar6 = (ulong)iVar2;
        if (param_5 <= uVar6) {
          return (char *)0x0;
        }
        pcVar11 = pcVar11 + uVar6;
        param_5 = param_5 - uVar6;
        uVar3 = uVar12;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x1b);
    bVar9 = (byte)uVar3 ^ 1;
  }
  if ((1 < param_1) && (bVar9 != 0)) {
    iVar1 = BIO_snprintf(pcVar11,param_5,"; <no failure info>");
    if (iVar1 < 0) {
      return (char *)0x0;
    }
    uVar6 = (ulong)iVar1;
    if (param_5 <= uVar6) {
      return (char *)0x0;
    }
    pcVar11 = pcVar11 + uVar6;
    param_5 = param_5 - uVar6;
  }
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    puVar8 = &_LC38;
    if (iVar1 == 1) {
      puVar8 = &_LC37;
    }
    iVar2 = BIO_snprintf(pcVar11,param_5,"; StatusString%s: ",puVar8);
    if (iVar2 < 0) {
      return (char *)0x0;
    }
    uVar6 = (ulong)iVar2;
    if (param_5 <= uVar6) {
      return (char *)0x0;
    }
    pcVar11 = pcVar11 + uVar6;
    param_5 = param_5 - uVar6;
    iVar2 = 0;
    do {
      puVar8 = &_LC36;
      x = (ASN1_STRING *)OPENSSL_sk_value(param_3,iVar2);
      if (iVar1 + -1 <= iVar2) {
        puVar8 = &_LC37;
      }
      uVar7 = ASN1_STRING_get0_data(x);
      uVar3 = ASN1_STRING_length(x);
      iVar4 = BIO_snprintf(pcVar11,param_5,"\"%.*s\"%s",(ulong)uVar3,uVar7,puVar8);
      if (iVar4 < 0) {
        return (char *)0x0;
      }
      uVar6 = (ulong)iVar4;
      if (param_5 <= uVar6) {
        return (char *)0x0;
      }
      pcVar11 = pcVar11 + uVar6;
      param_5 = param_5 - uVar6;
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return param_4;
}



undefined8 ossl_cmp_pkisi_get0_statusString(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



uint ossl_cmp_pkisi_get_pkifailureinfo(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int n;
  ASN1_BIT_STRING *a;
  
  if (param_1 != 0) {
    a = *(ASN1_BIT_STRING **)(param_1 + 0x10);
    uVar3 = 0;
    if (a != (ASN1_BIT_STRING *)0x0) {
      n = 0;
      while( true ) {
        iVar2 = ASN1_BIT_STRING_get_bit(a,n);
        uVar1 = uVar3 | 1 << ((byte)n & 0x1f);
        if (iVar2 == 0) {
          uVar1 = uVar3;
        }
        uVar3 = uVar1;
        n = n + 1;
        if (n == 0x1b) break;
        a = *(ASN1_BIT_STRING **)(param_1 + 0x10);
      }
    }
    return uVar3;
  }
  return 0xffffffff;
}



int ossl_cmp_pkisi_check_pkifailureinfo(long param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(ASN1_BIT_STRING **)(param_1 + 0x10) != (ASN1_BIT_STRING *)0x0)) {
    if (param_2 < 0x1b) {
      iVar1 = ASN1_BIT_STRING_get_bit(*(ASN1_BIT_STRING **)(param_1 + 0x10),param_2);
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_status.c",0x9d,"ossl_cmp_pkisi_check_pkifailureinfo");
    ERR_set_error(0x3a,100,0);
    return -1;
  }
  return -1;
}



undefined8 OSSL_CMP_snprint_PKIStatusInfo(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = ossl_cmp_pkisi_get_pkifailureinfo();
    uVar3 = param_1[1];
    uVar2 = ASN1_INTEGER_get((ASN1_INTEGER *)*param_1);
    uVar3 = snprint_PKIStatusInfo_parts(uVar2 & 0xffffffff,uVar1,uVar3,param_2,param_3);
    return uVar3;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_status.c",0xf7,"OSSL_CMP_snprint_PKIStatusInfo");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 OSSL_CMP_CTX_snprint_PKIStatus(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar3 = OSSL_CMP_CTX_get0_statusString();
    uVar1 = OSSL_CMP_CTX_get_failInfoCode(param_1);
    uVar2 = OSSL_CMP_CTX_get_status(param_1);
    uVar3 = snprint_PKIStatusInfo_parts(uVar2,uVar1,uVar3,param_2,param_3);
    return uVar3;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_status.c",0x106,"OSSL_CMP_CTX_snprint_PKIStatus");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



undefined8 * OSSL_CMP_STATUSINFO_new(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_UTF8STRING *str;
  long lVar3;
  ASN1_BIT_STRING *a;
  uint n;
  
  puVar2 = (undefined8 *)OSSL_CMP_PKISI_new();
  if ((puVar2 != (undefined8 *)0x0) &&
     (iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)*puVar2,(long)param_1), iVar1 != 0)) {
    if (param_3 == (void *)0x0) {
LAB_0010081d:
      n = 0;
      do {
        if ((param_2 >> (n & 0x1f) & 1) != 0) {
          a = (ASN1_BIT_STRING *)puVar2[2];
          if (a == (ASN1_BIT_STRING *)0x0) {
            a = ASN1_BIT_STRING_new();
            puVar2[2] = a;
            if (a == (ASN1_BIT_STRING *)0x0) goto LAB_00100860;
          }
          iVar1 = ASN1_BIT_STRING_set_bit(a,n,1);
          if (iVar1 == 0) goto LAB_00100860;
        }
        n = n + 1;
        if (n == 0x1b) {
          return puVar2;
        }
      } while( true );
    }
    str = ASN1_UTF8STRING_new();
    if (str != (ASN1_UTF8STRING *)0x0) {
      iVar1 = ASN1_STRING_set(str,param_3,-1);
      if (iVar1 != 0) {
        lVar3 = OPENSSL_sk_new_null();
        puVar2[1] = lVar3;
        if ((lVar3 != 0) && (iVar1 = OPENSSL_sk_push(lVar3,str), iVar1 != 0)) goto LAB_0010081d;
      }
      goto LAB_00100862;
    }
  }
LAB_00100860:
  str = (ASN1_UTF8STRING *)0x0;
LAB_00100862:
  OSSL_CMP_PKISI_free(puVar2);
  ASN1_UTF8STRING_free(str);
  return (undefined8 *)0x0;
}




undefined8 X509_ACERT_print_ex(BIO *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  GENERAL_NAME *gen;
  ASN1_INTEGER *pAVar6;
  ASN1_STRING *pAVar7;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar8;
  X509_NAME *pXVar9;
  ASN1_GENERALIZEDTIME *pAVar10;
  long lVar11;
  X509_EXTENSION *ex;
  ASN1_OBJECT *pAVar12;
  ASN1_OCTET_STRING *v;
  char *pcVar13;
  uint uVar14;
  long in_FS_OFFSET;
  X509_ALGOR *local_50;
  ASN1_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = 10;
  if (((uint)param_3 & 0xf0000) != 0x40000) {
    uVar14 = 0x20;
  }
  if (((param_4 & 1) == 0) &&
     ((iVar4 = BIO_printf(param_1,"Attribute Certificate:\n"), iVar4 < 1 ||
      (iVar4 = BIO_printf(param_1,"%4sData:\n",&_LC1), iVar4 < 1)))) {
LAB_00100108:
    ERR_new();
    ERR_set_debug("crypto/x509/t_acert.c",0x116,"X509_ACERT_print_ex");
    ERR_set_error(0xb,0x80007,0);
  }
  else {
    if ((param_4 & 2) == 0) {
      lVar11 = X509_ACERT_get_version(param_2);
      if (lVar11 == 1) {
        iVar4 = BIO_printf(param_1,"%8sVersion: %ld (0x%lx)\n",&_LC1,2,1);
      }
      else {
        iVar4 = BIO_printf(param_1,"%8sVersion: Unknown (%ld)\n",&_LC1);
      }
      if (iVar4 < 1) goto LAB_00100108;
    }
    if ((param_4 & 4) == 0) {
      pAVar6 = (ASN1_INTEGER *)X509_ACERT_get0_serialNumber(param_2);
      iVar4 = BIO_printf(param_1,"%8sSerial Number: ",&_LC1);
      if (((iVar4 < 1) || (iVar4 = i2a_ASN1_INTEGER(param_1,pAVar6), iVar4 < 1)) ||
         (iVar4 = BIO_write(param_1,&_LC7,1), iVar4 < 1)) goto LAB_00100108;
    }
    if ((param_4 & 0x40) == 0) {
      iVar4 = BIO_printf(param_1,"%8sHolder:\n",&_LC1);
      if (0 < iVar4) {
        iVar4 = 0;
        lVar11 = X509_ACERT_get0_holder_entityName(param_2);
        if (lVar11 != 0) {
          for (; iVar3 = OPENSSL_sk_num(lVar11), iVar4 < iVar3; iVar4 = iVar4 + 1) {
            gen = (GENERAL_NAME *)OPENSSL_sk_value(lVar11,iVar4);
            iVar3 = BIO_printf(param_1,"%12sName:%c",&_LC1);
            if (((iVar3 < 1) || (iVar3 = GENERAL_NAME_print(param_1,gen), iVar3 < 1)) ||
               (iVar3 = BIO_write(param_1,&_LC7,1), iVar3 < 1)) goto LAB_00100108;
          }
        }
        lVar11 = X509_ACERT_get0_holder_baseCertId(param_2);
        if ((lVar11 == 0) ||
           (pXVar9 = (X509_NAME *)OSSL_ISSUER_SERIAL_get0_issuer(lVar11), pXVar9 == (X509_NAME *)0x0
           )) goto LAB_0010006d;
        iVar4 = BIO_printf(param_1,"%12sIssuer:%c",&_LC1,(ulong)uVar14);
        if ((0 < iVar4) &&
           (((iVar4 = X509_NAME_print_ex(param_1,pXVar9,0,param_3), 0 < iVar4 &&
             (iVar4 = BIO_write(param_1,&_LC7,1), 0 < iVar4)) &&
            (iVar4 = BIO_printf(param_1,"%12sSerial: ",&_LC1), 0 < iVar4)))) {
          pAVar6 = (ASN1_INTEGER *)OSSL_ISSUER_SERIAL_get0_serial(lVar11);
          iVar4 = i2a_ASN1_INTEGER(param_1,pAVar6);
          if ((0 < iVar4) &&
             (((pAVar7 = (ASN1_STRING *)OSSL_ISSUER_SERIAL_get0_issuerUID(lVar11),
               pAVar7 == (ASN1_STRING *)0x0 ||
               ((iVar4 = BIO_printf(param_1,"%12sIssuer UID: ",&_LC1), 0 < iVar4 &&
                (iVar4 = X509_signature_dump(param_1,pAVar7,0x18), 0 < iVar4)))) &&
              (iVar4 = BIO_write(param_1,&_LC7,1), 0 < iVar4)))) goto LAB_0010006d;
        }
      }
      goto LAB_00100108;
    }
LAB_0010006d:
    if ((param_4 & 0x10) == 0) {
      iVar4 = BIO_printf(param_1,"%8sIssuer:%c",&_LC1);
      if (0 < iVar4) {
        pXVar9 = (X509_NAME *)X509_ACERT_get0_issuerName(param_2);
        if (pXVar9 == (X509_NAME *)0x0) {
          iVar4 = BIO_printf(param_1,"Unsupported Issuer Type");
          if (0 < iVar4) goto LAB_00100605;
        }
        else {
          iVar4 = X509_NAME_print_ex(param_1,pXVar9,0,param_3);
          if (-1 < iVar4) {
LAB_00100605:
            iVar4 = BIO_write(param_1,&_LC7,1);
            if (0 < iVar4) goto LAB_00100077;
          }
        }
      }
      goto LAB_00100108;
    }
LAB_00100077:
    if ((param_4 & 0x20) == 0) {
      iVar4 = BIO_printf(param_1,"%8sValidity\n",&_LC1);
      if ((0 < iVar4) && (iVar4 = BIO_printf(param_1,"%12sNot Before: ",&_LC1), 0 < iVar4)) {
        pAVar10 = (ASN1_GENERALIZEDTIME *)X509_ACERT_get0_notBefore(param_2);
        iVar4 = ASN1_GENERALIZEDTIME_print(param_1,pAVar10);
        if ((iVar4 != 0) && (iVar4 = BIO_printf(param_1,"\n%12sNot After : ",&_LC1), 0 < iVar4)) {
          pAVar10 = (ASN1_GENERALIZEDTIME *)X509_ACERT_get0_notAfter(param_2);
          iVar4 = ASN1_GENERALIZEDTIME_print(param_1,pAVar10);
          if ((iVar4 != 0) && (iVar4 = BIO_write(param_1,&_LC7,1), 0 < iVar4)) goto LAB_00100081;
        }
      }
      goto LAB_00100108;
    }
LAB_00100081:
    if ((param_4 & 0x800) == 0) {
      iVar4 = BIO_printf(param_1,"%8sAttributes:\n",&_LC1);
      if (iVar4 < 1) goto LAB_00100108;
      iVar4 = X509_ACERT_get_attr_count(param_2);
      if (iVar4 == 0) {
        iVar4 = BIO_printf(param_1,"%12s(none)\n",&_LC1);
        if (iVar4 < 1) goto LAB_00100108;
      }
      else {
        for (iVar4 = 0; iVar3 = X509_ACERT_get_attr_count(param_2), iVar4 < iVar3; iVar4 = iVar4 + 1
            ) {
          attr = (X509_ATTRIBUTE *)X509_ACERT_get_attr(param_2,iVar4);
          pAVar12 = X509_ATTRIBUTE_get0_object(attr);
          iVar3 = BIO_printf(param_1,"%12s",&_LC1);
          if ((iVar3 < 1) || (iVar3 = i2a_ASN1_OBJECT(param_1,pAVar12), iVar3 < 1))
          goto LAB_00100108;
          iVar1 = X509_ATTRIBUTE_count(attr);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/t_acert.c",0x20,"print_attribute");
            ERR_set_error(0xb,0x8a,0);
            goto LAB_00100108;
          }
          if (((iVar3 < 0x19) &&
              (iVar3 = BIO_printf(param_1,"%*s",(ulong)(0x19 - iVar3),&_LC23), iVar3 < 1)) ||
             (iVar3 = BIO_puts(param_1,":"), iVar3 < 1)) goto LAB_00100108;
          iVar3 = 0;
          if (0 < iVar1) {
            do {
              pAVar8 = X509_ATTRIBUTE_get0_type(attr,iVar3);
              uVar14 = pAVar8->type;
              if (uVar14 == 0x10) {
                iVar2 = BIO_puts(param_1,"\n");
                if (iVar2 < 1) goto LAB_00100108;
                ASN1_parse_dump(param_1,((pAVar8->value).asn1_string)->data,
                                (long)((pAVar8->value).asn1_string)->length,iVar3,1);
              }
              else {
                if ((int)uVar14 < 0x11) {
                  if (uVar14 != 0xc) goto LAB_00100841;
                }
                else if ((int)uVar14 < 0x15) {
                  if (uVar14 == 0x11) {
LAB_00100841:
                    iVar2 = BIO_printf(param_1,"unable to print attribute of type 0x%X\n",
                                       (ulong)uVar14);
                    if (-1 < iVar2) goto LAB_0010055d;
                    goto LAB_00100108;
                  }
                }
                else if (uVar14 != 0x16) goto LAB_00100841;
                pAVar7 = (pAVar8->value).asn1_string;
                iVar2 = BIO_write(param_1,pAVar7->data,pAVar7->length);
                if ((iVar2 != pAVar7->length) || (iVar2 = BIO_puts(param_1,"\n"), iVar2 < 1))
                goto LAB_00100108;
              }
LAB_0010055d:
              iVar3 = iVar3 + 1;
            } while (iVar1 != iVar3);
          }
        }
      }
    }
    if (((param_4 & 0x100) == 0) && (lVar11 = X509_ACERT_get0_extensions(param_2), lVar11 != 0)) {
      iVar4 = BIO_printf(param_1,"%8sExtensions:\n",&_LC1);
      if (iVar4 < 1) goto LAB_00100108;
      for (iVar4 = 0; iVar3 = OPENSSL_sk_num(lVar11), iVar4 < iVar3; iVar4 = iVar4 + 1) {
        ex = (X509_EXTENSION *)OPENSSL_sk_value(lVar11,iVar4);
        iVar3 = BIO_printf(param_1,"%12s",&_LC1);
        if (iVar3 < 1) goto LAB_00100108;
        pAVar12 = X509_EXTENSION_get_object(ex);
        iVar3 = i2a_ASN1_OBJECT(param_1,pAVar12);
        if (iVar3 < 1) goto LAB_00100108;
        iVar3 = X509_EXTENSION_get_critical(ex);
        pcVar13 = "critical";
        if (iVar3 == 0) {
          pcVar13 = "";
        }
        iVar3 = BIO_printf(param_1,": %s\n",pcVar13);
        if (iVar3 < 1) goto LAB_00100108;
        iVar3 = X509V3_EXT_print(param_1,ex,param_4,0x14);
        if (iVar3 < 1) {
          iVar3 = BIO_printf(param_1,"%16s",&_LC1);
          if (iVar3 < 1) goto LAB_00100108;
          v = X509_EXTENSION_get_data(ex);
          iVar3 = ASN1_STRING_print(param_1,v);
          if (iVar3 < 1) goto LAB_00100108;
        }
        iVar3 = BIO_write(param_1,&_LC7,1);
        if (iVar3 < 1) goto LAB_00100108;
      }
    }
    if ((param_4 & 0x200) != 0) {
LAB_001000a5:
      uVar5 = 1;
      goto LAB_0010013a;
    }
    X509_ACERT_get0_signature(param_2,&local_48,&local_50);
    iVar4 = X509_signature_print(param_1,local_50,local_48);
    if (0 < iVar4) goto LAB_001000a5;
  }
  uVar5 = 0;
LAB_0010013a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



void X509_ACERT_print(undefined8 param_1,undefined8 param_2)

{
  X509_ACERT_print_ex(param_1,param_2,0,0);
  return;
}




undefined8 X509_ACERT_print_ex(BIO *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  GENERAL_NAME *gen;
  ASN1_INTEGER *pAVar8;
  ASN1_STRING *pAVar9;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar10;
  X509_NAME *pXVar11;
  ASN1_GENERALIZEDTIME *pAVar12;
  long lVar13;
  X509_EXTENSION *ex;
  ASN1_OBJECT *pAVar14;
  ASN1_OCTET_STRING *v;
  char *pcVar15;
  long in_FS_OFFSET;
  X509_ALGOR *local_50;
  ASN1_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = ' ';
  if (((uint)param_3 & 0xf0000) == 0x40000) {
    cVar2 = '\n';
  }
  if (((param_4 & 1) == 0) &&
     ((iVar6 = BIO_printf(param_1,"Attribute Certificate:\n"), iVar6 < 1 ||
      (iVar6 = BIO_printf(param_1,"%4sData:\n",&_LC1), iVar6 < 1)))) {
LAB_00100110:
    ERR_new();
    ERR_set_debug("crypto/x509/t_acert.c",0x116,"X509_ACERT_print_ex");
    ERR_set_error(0xb,0x80007,0);
  }
  else {
    if ((param_4 & 2) == 0) {
      lVar13 = X509_ACERT_get_version(param_2);
      if (lVar13 == 1) {
        iVar6 = BIO_printf(param_1,"%8sVersion: %ld (0x%lx)\n",&_LC1,2,1);
      }
      else {
        iVar6 = BIO_printf(param_1,"%8sVersion: Unknown (%ld)\n",&_LC1);
      }
      if (iVar6 < 1) goto LAB_00100110;
    }
    if ((param_4 & 4) == 0) {
      pAVar8 = (ASN1_INTEGER *)X509_ACERT_get0_serialNumber(param_2);
      iVar6 = BIO_printf(param_1,"%8sSerial Number: ",&_LC1);
      if (((iVar6 < 1) || (iVar6 = i2a_ASN1_INTEGER(param_1,pAVar8), iVar6 < 1)) ||
         (iVar6 = BIO_write(param_1,&_LC7,1), iVar6 < 1)) goto LAB_00100110;
    }
    if ((param_4 & 0x40) == 0) {
      iVar6 = BIO_printf(param_1,"%8sHolder:\n",&_LC1);
      if (0 < iVar6) {
        iVar6 = 0;
        lVar13 = X509_ACERT_get0_holder_entityName(param_2);
        if (lVar13 != 0) {
          for (; iVar5 = OPENSSL_sk_num(lVar13), iVar6 < iVar5; iVar6 = iVar6 + 1) {
            gen = (GENERAL_NAME *)OPENSSL_sk_value(lVar13,iVar6);
            iVar5 = BIO_printf(param_1,"%12sName:%c",&_LC1);
            if (((iVar5 < 1) || (iVar5 = GENERAL_NAME_print(param_1,gen), iVar5 < 1)) ||
               (iVar5 = BIO_write(param_1,&_LC7,1), iVar5 < 1)) goto LAB_00100110;
          }
        }
        lVar13 = X509_ACERT_get0_holder_baseCertId(param_2);
        if ((lVar13 == 0) ||
           (pXVar11 = (X509_NAME *)OSSL_ISSUER_SERIAL_get0_issuer(lVar13),
           pXVar11 == (X509_NAME *)0x0)) goto LAB_00100070;
        iVar6 = BIO_printf(param_1,"%12sIssuer:%c",&_LC1,(ulong)(uint)(int)cVar2);
        if ((0 < iVar6) &&
           (((iVar6 = X509_NAME_print_ex(param_1,pXVar11,0,param_3), 0 < iVar6 &&
             (iVar6 = BIO_write(param_1,&_LC7,1), 0 < iVar6)) &&
            (iVar6 = BIO_printf(param_1,"%12sSerial: ",&_LC1), 0 < iVar6)))) {
          pAVar8 = (ASN1_INTEGER *)OSSL_ISSUER_SERIAL_get0_serial(lVar13);
          iVar6 = i2a_ASN1_INTEGER(param_1,pAVar8);
          if ((0 < iVar6) &&
             (((pAVar9 = (ASN1_STRING *)OSSL_ISSUER_SERIAL_get0_issuerUID(lVar13),
               pAVar9 == (ASN1_STRING *)0x0 ||
               ((iVar6 = BIO_printf(param_1,"%12sIssuer UID: ",&_LC1), 0 < iVar6 &&
                (iVar6 = X509_signature_dump(param_1,pAVar9,0x18), 0 < iVar6)))) &&
              (iVar6 = BIO_write(param_1,&_LC7,1), 0 < iVar6)))) goto LAB_00100070;
        }
      }
      goto LAB_00100110;
    }
LAB_00100070:
    if ((param_4 & 0x10) == 0) {
      iVar6 = BIO_printf(param_1,"%8sIssuer:%c",&_LC1);
      if (0 < iVar6) {
        pXVar11 = (X509_NAME *)X509_ACERT_get0_issuerName(param_2);
        if (pXVar11 == (X509_NAME *)0x0) {
          iVar6 = BIO_printf(param_1,"Unsupported Issuer Type");
          if (0 < iVar6) goto LAB_0010061e;
        }
        else {
          iVar6 = X509_NAME_print_ex(param_1,pXVar11,0,param_3);
          if (-1 < iVar6) {
LAB_0010061e:
            iVar6 = BIO_write(param_1,&_LC7,1);
            if (0 < iVar6) goto LAB_0010007a;
          }
        }
      }
      goto LAB_00100110;
    }
LAB_0010007a:
    if ((param_4 & 0x20) == 0) {
      iVar6 = BIO_printf(param_1,"%8sValidity\n",&_LC1);
      if ((0 < iVar6) && (iVar6 = BIO_printf(param_1,"%12sNot Before: ",&_LC1), 0 < iVar6)) {
        pAVar12 = (ASN1_GENERALIZEDTIME *)X509_ACERT_get0_notBefore(param_2);
        iVar6 = ASN1_GENERALIZEDTIME_print(param_1,pAVar12);
        if ((iVar6 != 0) && (iVar6 = BIO_printf(param_1,"\n%12sNot After : ",&_LC1), 0 < iVar6)) {
          pAVar12 = (ASN1_GENERALIZEDTIME *)X509_ACERT_get0_notAfter(param_2);
          iVar6 = ASN1_GENERALIZEDTIME_print(param_1,pAVar12);
          if ((iVar6 != 0) && (iVar6 = BIO_write(param_1,&_LC7,1), 0 < iVar6)) goto LAB_00100084;
        }
      }
      goto LAB_00100110;
    }
LAB_00100084:
    if ((param_4 & 0x800) == 0) {
      iVar6 = BIO_printf(param_1,"%8sAttributes:\n",&_LC1);
      if (iVar6 < 1) goto LAB_00100110;
      iVar6 = X509_ACERT_get_attr_count(param_2);
      iVar5 = 0;
      if (iVar6 == 0) {
        iVar6 = BIO_printf(param_1,"%12s(none)\n",&_LC1);
        if (iVar6 < 1) goto LAB_00100110;
      }
      else {
        for (; iVar6 = X509_ACERT_get_attr_count(param_2), iVar5 < iVar6; iVar5 = iVar5 + 1) {
          attr = (X509_ATTRIBUTE *)X509_ACERT_get_attr(param_2,iVar5);
          pAVar14 = X509_ATTRIBUTE_get0_object(attr);
          iVar6 = BIO_printf(param_1,"%12s",&_LC1);
          if ((iVar6 < 1) || (iVar6 = i2a_ASN1_OBJECT(param_1,pAVar14), iVar6 < 1))
          goto LAB_00100110;
          iVar3 = X509_ATTRIBUTE_count(attr);
          if (iVar3 == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/t_acert.c",0x20,"print_attribute");
            ERR_set_error(0xb,0x8a,0);
            goto LAB_00100110;
          }
          if (((iVar6 < 0x19) &&
              (iVar6 = BIO_printf(param_1,"%*s",(ulong)(0x19 - iVar6),&_LC23), iVar6 < 1)) ||
             (iVar6 = BIO_puts(param_1,":"), iVar6 < 1)) goto LAB_00100110;
          if (0 < iVar3) {
            iVar6 = 0;
            do {
              pAVar10 = X509_ATTRIBUTE_get0_type(attr,iVar6);
              uVar1 = pAVar10->type;
              if (uVar1 == 0x10) {
                iVar4 = BIO_puts(param_1,"\n");
                if (iVar4 < 1) goto LAB_00100110;
                ASN1_parse_dump(param_1,((pAVar10->value).asn1_string)->data,
                                (long)((pAVar10->value).asn1_string)->length,iVar6,1);
              }
              else {
                if ((int)uVar1 < 0x11) {
                  if (uVar1 != 0xc) goto LAB_00100851;
                }
                else if ((int)uVar1 < 0x15) {
                  if (uVar1 == 0x11) {
LAB_00100851:
                    iVar4 = BIO_printf(param_1,"unable to print attribute of type 0x%X\n",
                                       (ulong)uVar1);
                    if (-1 < iVar4) goto LAB_0010057b;
                    goto LAB_00100110;
                  }
                }
                else if (uVar1 != 0x16) goto LAB_00100851;
                pAVar9 = (pAVar10->value).asn1_string;
                iVar4 = BIO_write(param_1,pAVar9->data,pAVar9->length);
                if ((iVar4 != pAVar9->length) || (iVar4 = BIO_puts(param_1,"\n"), iVar4 < 1))
                goto LAB_00100110;
              }
LAB_0010057b:
              iVar6 = iVar6 + 1;
            } while (iVar3 != iVar6);
          }
        }
      }
    }
    if (((param_4 & 0x100) == 0) && (lVar13 = X509_ACERT_get0_extensions(param_2), lVar13 != 0)) {
      iVar6 = BIO_printf(param_1,"%8sExtensions:\n",&_LC1);
      if (iVar6 < 1) goto LAB_00100110;
      for (iVar6 = 0; iVar5 = OPENSSL_sk_num(lVar13), iVar6 < iVar5; iVar6 = iVar6 + 1) {
        ex = (X509_EXTENSION *)OPENSSL_sk_value(lVar13,iVar6);
        iVar5 = BIO_printf(param_1,"%12s",&_LC1);
        if (iVar5 < 1) goto LAB_00100110;
        pAVar14 = X509_EXTENSION_get_object(ex);
        iVar5 = i2a_ASN1_OBJECT(param_1,pAVar14);
        if (iVar5 < 1) goto LAB_00100110;
        iVar5 = X509_EXTENSION_get_critical(ex);
        pcVar15 = "critical";
        if (iVar5 == 0) {
          pcVar15 = "";
        }
        iVar5 = BIO_printf(param_1,": %s\n",pcVar15);
        if (iVar5 < 1) goto LAB_00100110;
        iVar5 = X509V3_EXT_print(param_1,ex,param_4,0x14);
        if (iVar5 < 1) {
          iVar5 = BIO_printf(param_1,"%16s",&_LC1);
          if (iVar5 < 1) goto LAB_00100110;
          v = X509_EXTENSION_get_data(ex);
          iVar5 = ASN1_STRING_print(param_1,v);
          if (iVar5 < 1) goto LAB_00100110;
        }
        iVar5 = BIO_write(param_1,&_LC7,1);
        if (iVar5 < 1) goto LAB_00100110;
      }
    }
    if ((param_4 & 0x200) != 0) {
LAB_001000a8:
      uVar7 = 1;
      goto LAB_00100142;
    }
    X509_ACERT_get0_signature(param_2,&local_48,&local_50);
    iVar6 = X509_signature_print(param_1,local_50,local_48);
    if (0 < iVar6) goto LAB_001000a8;
  }
  uVar7 = 0;
LAB_00100142:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



void X509_ACERT_print(undefined8 param_1,undefined8 param_2)

{
  X509_ACERT_print_ex(param_1,param_2,0,0);
  return;
}



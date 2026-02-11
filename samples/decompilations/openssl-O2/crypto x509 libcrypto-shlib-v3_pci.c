
undefined8 process_pci_value(CONF_VALUE *param_1,long *param_2,ASN1_INTEGER **param_3,long *param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  ASN1_OBJECT *pAVar8;
  void *pvVar9;
  BIO *b;
  ASN1_OCTET_STRING *pAVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  size_t local_850;
  undefined1 local_848 [2056];
  long local_40;
  
  pcVar2 = param_1->name;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = strcmp(pcVar2,"language");
  if (iVar6 == 0) {
    if (*param_2 == 0) {
      pAVar8 = OBJ_txt2obj(param_1->value,0);
      *param_2 = (long)pAVar8;
      if (pAVar8 != (ASN1_OBJECT *)0x0) goto LAB_00100220;
      ERR_new();
      ERR_set_debug("crypto/x509/v3_pci.c",0x62,"process_pci_value");
      uVar11 = 0x6e;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_pci.c",0x5d,"process_pci_value");
      uVar11 = 0x9b;
    }
LAB_00100076:
    ERR_set_error(0x22,uVar11,0);
    ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",param_1->value
                      );
  }
  else {
    iVar6 = strcmp(pcVar2,"pathlen");
    if (iVar6 == 0) {
      if (*param_3 == (ASN1_INTEGER *)0x0) {
        iVar6 = X509V3_get_value_int(param_1,param_3);
        if (iVar6 != 0) goto LAB_00100220;
        ERR_new();
        ERR_set_debug("crypto/x509/v3_pci.c",0x6e,"process_pci_value");
        uVar11 = 0x9c;
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_pci.c",0x68,"process_pci_value");
        uVar11 = 0x9d;
      }
      goto LAB_00100076;
    }
    iVar6 = strcmp(pcVar2,"policy");
    if (iVar6 != 0) {
LAB_00100220:
      uVar11 = 1;
      goto LAB_00100225;
    }
    pcVar2 = param_1->value;
    bVar5 = false;
    if (*param_4 == 0) {
      pAVar10 = ASN1_OCTET_STRING_new();
      bVar5 = true;
      *param_4 = (long)pAVar10;
      if (pAVar10 == (ASN1_OCTET_STRING *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_pci.c",0x7a,"process_pci_value");
        uVar11 = 0x8000d;
        goto LAB_00100076;
      }
    }
    iVar6 = strncmp(pcVar2,"hex:",4);
    if (iVar6 == 0) {
      pvVar7 = (void *)OPENSSL_hexstr2buf(pcVar2 + 4,&local_850);
      if (pvVar7 != (void *)0x0) {
        pvVar9 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),
                                *(int *)*param_4 + (int)local_850 + 1,"crypto/x509/v3_pci.c",0x89);
        if (pvVar9 != (void *)0x0) {
          piVar3 = (int *)*param_4;
          *(void **)(piVar3 + 2) = pvVar9;
          memcpy((void *)((long)pvVar9 + (long)*piVar3),pvVar7,local_850);
          piVar3 = (int *)*param_4;
          iVar6 = *piVar3;
          *piVar3 = iVar6 + (int)local_850;
          *(undefined1 *)(*(long *)(piVar3 + 2) + (long)(iVar6 + (int)local_850)) = 0;
          CRYPTO_free(pvVar7);
          goto LAB_00100220;
        }
        CRYPTO_free(pvVar7);
        pvVar7 = *(void **)(*param_4 + 8);
LAB_0010050e:
        CRYPTO_free(pvVar7);
        puVar4 = (undefined4 *)*param_4;
        *(undefined8 *)(puVar4 + 2) = 0;
        *puVar4 = 0;
      }
    }
    else {
      iVar6 = strncmp(pcVar2,"file:",5);
      if (iVar6 == 0) {
        pvVar7 = (void *)0x0;
        b = BIO_new_file(pcVar2 + 5,"r");
        if (b == (BIO *)0x0) {
          ERR_new();
          uVar11 = 0xa3;
LAB_00100565:
          ERR_set_debug("crypto/x509/v3_pci.c",uVar11,"process_pci_value");
          ERR_set_error(0x22,0x80020,0);
        }
        else {
          do {
            while( true ) {
              iVar6 = BIO_read(b,local_848,0x800);
              if (iVar6 < 1) break;
              pvVar7 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),*(int *)*param_4 + iVar6 + 1,
                                      "crypto/x509/v3_pci.c",0xac);
              piVar3 = (int *)*param_4;
              if (pvVar7 == (void *)0x0) {
                pvVar7 = *(void **)(piVar3 + 2);
                CRYPTO_free(pvVar7);
                puVar4 = (undefined4 *)*param_4;
                *(undefined8 *)(puVar4 + 2) = 0;
                *puVar4 = 0;
                ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",
                                   param_1->value,pvVar7);
                BIO_free_all(b);
                goto LAB_001002f1;
              }
              *(void **)(piVar3 + 2) = pvVar7;
              memcpy((void *)((long)*piVar3 + (long)pvVar7),local_848,(long)iVar6);
              piVar3 = (int *)*param_4;
              iVar1 = *piVar3;
              *piVar3 = iVar6 + iVar1;
              *(undefined1 *)(*(long *)(piVar3 + 2) + (long)(iVar6 + iVar1)) = 0;
            }
            if (iVar6 != 0) {
              BIO_free_all(b);
              ERR_new();
              uVar11 = 0xc0;
              goto LAB_00100565;
            }
            iVar6 = BIO_test_flags(b,8);
          } while (iVar6 != 0);
          BIO_free_all(b);
          if (pvVar7 != (void *)0x0) goto LAB_00100220;
        }
      }
      else {
        iVar6 = strncmp(pcVar2,"text:",5);
        if (iVar6 == 0) {
          local_850 = strlen(pcVar2 + 5);
          pvVar7 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),
                                  (int)local_850 + 1 + *(int *)*param_4,"crypto/x509/v3_pci.c",0xc6)
          ;
          if (pvVar7 == (void *)0x0) {
            pvVar7 = *(void **)(*param_4 + 8);
            goto LAB_0010050e;
          }
          piVar3 = (int *)*param_4;
          pcVar2 = param_1->value;
          *(void **)(piVar3 + 2) = pvVar7;
          memcpy((void *)((long)pvVar7 + (long)*piVar3),pcVar2 + 5,local_850);
          piVar3 = (int *)*param_4;
          iVar6 = *piVar3;
          *piVar3 = iVar6 + (int)local_850;
          *(undefined1 *)(*(long *)(piVar3 + 2) + (long)(iVar6 + (int)local_850)) = 0;
          goto LAB_00100220;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_pci.c",0xda,"process_pci_value");
        ERR_set_error(0x22,0x98,0);
      }
    }
    ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",param_1->value
                      );
LAB_001002f1:
    if (bVar5) {
      ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)*param_4);
      *param_4 = 0;
      uVar11 = 0;
      goto LAB_00100225;
    }
  }
  uVar11 = 0;
LAB_00100225:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



PROXY_CERT_INFO_EXTENSION * r2i_pci(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  char *pcVar1;
  PROXY_POLICY *pPVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  stack_st_CONF_VALUE *psVar6;
  undefined8 *puVar7;
  stack_st_CONF_VALUE *section;
  undefined8 uVar8;
  PROXY_CERT_INFO_EXTENSION *pPVar9;
  int iVar10;
  ASN1_OBJECT *a;
  ASN1_OCTET_STRING *a_00;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_58;
  ASN1_INTEGER *local_50;
  ASN1_OCTET_STRING *local_48;
  long local_40;
  
  iVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (ASN1_OBJECT *)0x0;
  local_50 = (ASN1_INTEGER *)0x0;
  local_48 = (ASN1_OCTET_STRING *)0x0;
  psVar6 = X509V3_parse_list(param_3);
  while( true ) {
    iVar3 = OPENSSL_sk_num(psVar6);
    a_00 = local_48;
    a = local_58;
    if (iVar3 <= iVar10) break;
    puVar7 = (undefined8 *)OPENSSL_sk_value(psVar6,iVar10);
    pcVar1 = (char *)puVar7[1];
    if (pcVar1 == (char *)0x0) {
LAB_00100728:
      ERR_new();
      ERR_set_debug("crypto/x509/v3_pci.c",0xfb,"r2i_pci");
      uVar8 = 0x99;
LAB_0010074c:
      ERR_set_error(0x22,uVar8,0);
      ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
      a = local_58;
      a_00 = local_48;
      goto LAB_00100793;
    }
    if (*pcVar1 == '@') {
      section = X509V3_get_section(param_2,pcVar1 + 1);
      if (section == (stack_st_CONF_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_pci.c",0x105,"r2i_pci");
        uVar8 = 0x87;
        goto LAB_0010074c;
      }
      iVar3 = 0;
      while( true ) {
        iVar4 = OPENSSL_sk_num(section);
        if (iVar4 <= iVar3) break;
        uVar8 = OPENSSL_sk_value(section,iVar3);
        iVar4 = process_pci_value(uVar8,&local_58,&local_50,&local_48);
        iVar3 = iVar3 + 1;
        if (iVar4 == 0) {
          X509V3_section_free(param_2,section);
          a = local_58;
          a_00 = local_48;
          goto LAB_00100793;
        }
      }
      X509V3_section_free(param_2,section);
    }
    else {
      if (puVar7[2] == 0) goto LAB_00100728;
      iVar3 = process_pci_value(puVar7,&local_58,&local_50,&local_48);
      if (iVar3 == 0) {
        ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        a = local_58;
        a_00 = local_48;
        goto LAB_00100793;
      }
    }
    iVar10 = iVar10 + 1;
  }
  if (local_58 == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_pci.c",0x11b,"r2i_pci");
    ERR_set_error(0x22,0x9a,0);
  }
  else {
    uVar5 = OBJ_obj2nid(local_58);
    if (((uVar5 & 0xfffffffd) == 0x299) && (a_00 != (ASN1_OCTET_STRING *)0x0)) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_pci.c",0x121,"r2i_pci");
      ERR_set_error(0x22,0x9f,0);
    }
    else {
      pPVar9 = PROXY_CERT_INFO_EXTENSION_new();
      if (pPVar9 != (PROXY_CERT_INFO_EXTENSION *)0x0) {
        pPVar2 = pPVar9->proxyPolicy;
        pPVar2->policyLanguage = a;
        pPVar2->policy = a_00;
        pPVar9->pcPathLengthConstraint = local_50;
        local_50 = (ASN1_INTEGER *)0x0;
        goto LAB_001007bf;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/v3_pci.c",0x128,"r2i_pci");
      ERR_set_error(0x22,0x8000d,0);
    }
  }
LAB_00100793:
  pPVar9 = (PROXY_CERT_INFO_EXTENSION *)0x0;
  ASN1_OBJECT_free(a);
  ASN1_INTEGER_free(local_50);
  local_50 = (ASN1_INTEGER *)0x0;
  ASN1_OCTET_STRING_free(a_00);
  PROXY_CERT_INFO_EXTENSION_free((PROXY_CERT_INFO_EXTENSION *)0x0);
LAB_001007bf:
  OPENSSL_sk_pop_free(psVar6,&X509V3_conf_free);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 i2r_pci(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  uint *puVar1;
  
  BIO_printf(param_3,"%*sPath Length Constraint: ",(ulong)param_4,&_LC11);
  if ((ASN1_INTEGER *)*param_2 == (ASN1_INTEGER *)0x0) {
    BIO_printf(param_3,"infinite");
  }
  else {
    i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)*param_2);
  }
  BIO_puts(param_3,"\n");
  BIO_printf(param_3,"%*sPolicy Language: ",(ulong)param_4,&_LC11);
  i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)param_2[1]);
  puVar1 = *(uint **)(param_2[1] + 8);
  if ((puVar1 != (uint *)0x0) && (*(long *)(puVar1 + 2) != 0)) {
    BIO_printf(param_3,"\n%*sPolicy Text: %.*s",(ulong)param_4,&_LC11,(ulong)*puVar1);
  }
  return 1;
}



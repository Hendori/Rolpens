
undefined1 * ISSUER_SIGN_TOOL_it(void)

{
  return local_it_2;
}



undefined8 i2r_issuer_sign_tool(undefined8 param_1,long *param_2,BIO *param_3,ulong param_4)

{
  if (param_2 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_ist.c",0x66,"i2r_issuer_sign_tool");
    ERR_set_error(0x22,0x80106,0);
    return 0;
  }
  param_4 = param_4 & 0xffffffff;
  if (*param_2 == 0) {
    if (param_2[1] != 0) goto LAB_00100084;
    if (param_2[2] == 0) {
      if (param_2[3] == 0) {
        return 1;
      }
      goto LAB_0010010c;
    }
LAB_001000c8:
    BIO_printf(param_3,"%*ssignToolCert: ",param_4,&_LC1);
    BIO_write(param_3,*(void **)((int *)param_2[2] + 2),*(int *)param_2[2]);
  }
  else {
    BIO_printf(param_3,"%*ssignTool    : ",param_4,&_LC1);
    BIO_write(param_3,*(void **)((int *)*param_2 + 2),*(int *)*param_2);
    if (param_2[1] != 0) {
      BIO_write(param_3,&_LC3,1);
LAB_00100084:
      BIO_printf(param_3,"%*scATool      : ",param_4,&_LC1);
      BIO_write(param_3,*(void **)((int *)param_2[1] + 2),*(int *)param_2[1]);
    }
    if (param_2[2] != 0) {
      BIO_write(param_3,&_LC3,1);
      goto LAB_001000c8;
    }
  }
  if (param_2[3] == 0) {
    return 1;
  }
  BIO_write(param_3,&_LC3,1);
LAB_0010010c:
  BIO_printf(param_3,"%*scAToolCert  : ",param_4,&_LC1);
  BIO_write(param_3,*(void **)((int *)param_2[3] + 2),*(int *)param_2[3]);
  return 1;
}



void d2i_ISSUER_SIGN_TOOL(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ISSUER_SIGN_TOOL_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_ISSUER_SIGN_TOOL(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ISSUER_SIGN_TOOL_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void ISSUER_SIGN_TOOL_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ISSUER_SIGN_TOOL_it();
  ASN1_item_new(it);
  return;
}



void ISSUER_SIGN_TOOL_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ISSUER_SIGN_TOOL_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined8 * v2i_issuer_sign_tool(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ASN1_UTF8STRING *pAVar5;
  size_t sVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar7 = 0;
  puVar3 = (undefined8 *)ISSUER_SIGN_TOOL_new();
  if (puVar3 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_ist.c",0x2a,"v2i_issuer_sign_tool");
    ERR_set_error(0x22,0x8000d,0);
LAB_001003b2:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    while( true ) {
      iVar2 = OPENSSL_sk_num(param_3);
      if (iVar2 <= iVar7) break;
      lVar4 = OPENSSL_sk_value(param_3,iVar7);
      if (lVar4 != 0) {
        pcVar1 = *(char **)(lVar4 + 8);
        iVar2 = strcmp(pcVar1,"signTool");
        if (iVar2 == 0) {
          pAVar5 = ASN1_UTF8STRING_new();
          *puVar3 = pAVar5;
          if ((pAVar5 != (ASN1_UTF8STRING *)0x0) &&
             (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
            sVar6 = strlen(pcVar1);
            iVar2 = ASN1_STRING_set(pAVar5,pcVar1,(int)sVar6);
            if (iVar2 != 0) goto LAB_0010030c;
          }
          ERR_new();
          uVar8 = 0x38;
LAB_0010038b:
          ERR_set_debug("crypto/x509/v3_ist.c",uVar8,"v2i_issuer_sign_tool");
          ERR_set_error(0x22,0x8000d,0);
        }
        else {
          iVar2 = strcmp(pcVar1,"cATool");
          if (iVar2 == 0) {
            pAVar5 = ASN1_UTF8STRING_new();
            puVar3[1] = pAVar5;
            if ((pAVar5 != (ASN1_UTF8STRING *)0x0) &&
               (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
              sVar6 = strlen(pcVar1);
              iVar2 = ASN1_STRING_set(pAVar5,pcVar1,(int)sVar6);
              if (iVar2 != 0) goto LAB_0010030c;
            }
            ERR_new();
            uVar8 = 0x40;
            goto LAB_0010038b;
          }
          iVar2 = strcmp(pcVar1,"signToolCert");
          if (iVar2 == 0) {
            pAVar5 = ASN1_UTF8STRING_new();
            puVar3[2] = pAVar5;
            if ((pAVar5 != (ASN1_UTF8STRING *)0x0) &&
               (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
              sVar6 = strlen(pcVar1);
              iVar2 = ASN1_STRING_set(pAVar5,pcVar1,(int)sVar6);
              if (iVar2 != 0) goto LAB_0010030c;
            }
            ERR_new();
            uVar8 = 0x48;
            goto LAB_0010038b;
          }
          iVar2 = strcmp(pcVar1,"cAToolCert");
          if (iVar2 == 0) {
            pAVar5 = ASN1_UTF8STRING_new();
            puVar3[3] = pAVar5;
            if ((pAVar5 != (ASN1_UTF8STRING *)0x0) &&
               (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
              sVar6 = strlen(pcVar1);
              iVar2 = ASN1_STRING_set(pAVar5,pcVar1,(int)sVar6);
              if (iVar2 != 0) goto LAB_0010030c;
            }
            ERR_new();
            uVar8 = 0x50;
            goto LAB_0010038b;
          }
          ERR_new();
          ERR_set_debug("crypto/x509/v3_ist.c",0x54,"v2i_issuer_sign_tool");
          ERR_set_error(0x22,0x80106,0);
        }
        ISSUER_SIGN_TOOL_free(puVar3);
        goto LAB_001003b2;
      }
LAB_0010030c:
      iVar7 = iVar7 + 1;
    }
  }
  return puVar3;
}



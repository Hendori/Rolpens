
undefined1 * OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it(void)

{
  return local_it_0;
}



undefined8 i2r_auth_attr_id(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar5;
  ulong uVar4;
  
  iVar5 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar5) {
      return 1;
    }
    iVar1 = BIO_printf(param_3,"%*sIssuer-Serials:\n",(ulong)param_4,&_LC0);
    if (iVar1 < 1) {
      return 0;
    }
    uVar3 = param_4 + 4;
    uVar4 = (ulong)uVar3;
    plVar2 = (long *)OPENSSL_sk_value(param_2,iVar5);
    if (*plVar2 == 0) {
      BIO_printf(param_3,"%*sIssuer Names: <none>\n",uVar4,&_LC0);
    }
    else {
      BIO_printf(param_3,"%*sIssuer Names:\n",uVar4,&_LC0);
      OSSL_GENERAL_NAMES_print(param_3,*plVar2,uVar3);
      BIO_puts(param_3,"\n");
    }
    BIO_printf(param_3,"%*sIssuer Serial: ",(ulong)uVar3,&_LC0);
    iVar1 = i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)(plVar2 + 1));
    if (iVar1 < 1) {
      return 0;
    }
    BIO_puts(param_3,"\n");
    if (plVar2[4] == 0) {
      BIO_printf(param_3,"%*sIssuer UID: <none>\n",uVar4,&_LC0);
    }
    else {
      BIO_printf(param_3,"%*sIssuer UID: ",uVar4,&_LC0);
      iVar1 = i2a_ASN1_STRING(param_3,(ASN1_STRING *)plVar2[4],3);
      if (iVar1 < 1) {
        return 0;
      }
      BIO_puts(param_3,"\n");
    }
    iVar1 = BIO_puts(param_3,"\n");
    if (iVar1 < 1) break;
    iVar5 = iVar5 + 1;
  }
  return 0;
}



void d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}




undefined1 * OSSL_ROLE_SPEC_CERT_ID_it(void)

{
  return local_it_1;
}



undefined1 * OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it(void)

{
  return local_it_0;
}



undefined8
i2r_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_4 + 4;
  iVar1 = OPENSSL_sk_num(param_2);
  uVar4 = 0;
  if (iVar1 < 1) {
LAB_00100201:
    uVar3 = 1;
  }
  else {
    while( true ) {
      uVar5 = uVar4 + 1;
      iVar1 = BIO_printf(param_3,"%*sRole Specification Certificate Identifier #%d:\n",
                         (ulong)param_4,&_LC0,(ulong)uVar5);
      if (iVar1 < 1) break;
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,uVar4);
      iVar1 = BIO_printf(param_3,"%*sRole Name: ",(ulong)uVar6,&_LC0);
      if (((((iVar1 < 1) || (iVar1 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)*puVar2), iVar1 < 1)
            ) || (iVar1 = BIO_puts(param_3,"\n"), iVar1 < 1)) ||
          (((iVar1 = BIO_printf(param_3,"%*sRole Certificate Issuer: ",(ulong)uVar6,&_LC0),
            iVar1 < 1 || (iVar1 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)puVar2[1]), iVar1 < 1))
           || ((puVar2[2] != 0 &&
               (((iVar1 = BIO_puts(param_3,"\n"), iVar1 < 1 ||
                 (iVar1 = BIO_printf(param_3,"%*sRole Certificate Serial Number:",(ulong)uVar6,&_LC0
                                    ), iVar1 < 1)) ||
                (iVar1 = ossl_serial_number_print(param_3,puVar2[2],uVar6), iVar1 != 0)))))))) ||
         (((puVar2[3] != 0 &&
           (((iVar1 = BIO_puts(param_3,"\n"), iVar1 < 1 ||
             (iVar1 = BIO_printf(param_3,"%*sRole Certificate Locator:\n",(ulong)uVar6,&_LC0),
             iVar1 < 1)) || (iVar1 = OSSL_GENERAL_NAMES_print(param_3,puVar2[3],uVar6), iVar1 < 1)))
           ) || (iVar1 = BIO_puts(param_3,"\n"), iVar1 != 1)))) break;
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= (int)uVar5) goto LAB_00100201;
      iVar1 = BIO_puts(param_3,"\n");
      uVar4 = uVar5;
      if (iVar1 < 1) break;
    }
    uVar3 = 0;
  }
  return uVar3;
}



void d2i_OSSL_ROLE_SPEC_CERT_ID(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ROLE_SPEC_CERT_ID(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ROLE_SPEC_CERT_ID_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ROLE_SPEC_CERT_ID_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}




undefined1 * OSSL_USER_NOTICE_SYNTAX_it(void)

{
  return local_it_0;
}



undefined8 i2r_USER_NOTICE_SYNTAX(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  char *buf;
  ASN1_INTEGER *aint;
  undefined *puVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar3 = BIO_printf(param_3,"%*sUser Notices:\n",(ulong)param_4,&_LC1);
  if (iVar3 < 1) {
    return 0;
  }
  iVar3 = OPENSSL_sk_num(param_2);
  if (0 < iVar3) {
    do {
      puVar6 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
      puVar1 = (undefined8 *)*puVar6;
      uVar4 = param_4 + 4;
      if (puVar1 == (undefined8 *)0x0) {
LAB_001001d0:
        puVar2 = (uint *)puVar6[1];
        if ((puVar2 != (uint *)0x0) &&
           (iVar3 = BIO_printf(param_3,"%*sExplicit Text: %.*s",(ulong)uVar4,&_LC1,(ulong)*puVar2,
                               *(undefined8 *)(puVar2 + 2)), iVar3 < 0)) {
          return 0;
        }
      }
      else {
        iVar3 = BIO_printf(param_3,"%*sOrganization: %.*s\n",(ulong)uVar4,&_LC1,
                           (ulong)*(uint *)*puVar1,*(undefined8 *)((uint *)*puVar1 + 2));
        if (iVar3 < 1) {
          return 0;
        }
        iVar3 = OPENSSL_sk_num(puVar1[1]);
        puVar7 = &_LC0;
        if (iVar3 < 2) {
          puVar7 = &_LC1;
        }
        iVar3 = BIO_printf(param_3,"%*sNumber%s: ",(ulong)uVar4,&_LC1,puVar7);
        if (iVar3 < 1) {
          return 0;
        }
        for (iVar3 = 0; iVar5 = OPENSSL_sk_num(puVar1[1]), iVar3 < iVar5; iVar3 = iVar3 + 1) {
          aint = (ASN1_INTEGER *)OPENSSL_sk_value(puVar1[1],iVar3);
          if ((iVar3 != 0) && (iVar5 = BIO_puts(param_3,", "), iVar5 < 1)) {
            return 0;
          }
          if ((aint == (ASN1_INTEGER *)0x0) && (iVar5 = BIO_puts(param_3,"(null)"), iVar5 < 1)) {
            return 0;
          }
          buf = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,aint);
          if (buf == (char *)0x0) {
            return 0;
          }
          iVar5 = BIO_puts(param_3,buf);
          if (iVar5 < 1) {
            CRYPTO_free(buf);
            return 0;
          }
          CRYPTO_free(buf);
        }
        if (puVar6[1] != 0) {
          iVar3 = BIO_puts(param_3,"\n");
          if (iVar3 < 1) {
            return 0;
          }
          goto LAB_001001d0;
        }
      }
      iVar3 = BIO_puts(param_3,"\n\n");
      if (iVar3 < 1) {
        return 0;
      }
      iVar8 = iVar8 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar3);
  }
  return 1;
}



void d2i_OSSL_USER_NOTICE_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_USER_NOTICE_SYNTAX_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_USER_NOTICE_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_USER_NOTICE_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_USER_NOTICE_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_USER_NOTICE_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void OSSL_USER_NOTICE_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_USER_NOTICE_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}



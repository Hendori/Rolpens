
undefined1 * OSSL_IETF_ATTR_SYNTAX_VALUE_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_IETF_ATTR_SYNTAX_it(void)

{
  return local_it_2;
}



void OSSL_IETF_ATTR_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_IETF_ATTR_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void OSSL_IETF_ATTR_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_IETF_ATTR_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_IETF_ATTR_SYNTAX_VALUE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_IETF_ATTR_SYNTAX_VALUE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_IETF_ATTR_SYNTAX_VALUE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_IETF_ATTR_SYNTAX_VALUE_it();
  ASN1_item_free(param_1,it);
  return;
}



ASN1_VALUE * d2i_OSSL_IETF_ATTR_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  int iVar1;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar2;
  int *piVar3;
  int iVar4;
  
  it = (ASN1_ITEM *)OSSL_IETF_ATTR_SYNTAX_it();
  pAVar2 = ASN1_item_d2i(param_1,param_2,param_3,it);
  if (pAVar2 == (ASN1_VALUE *)0x0) {
LAB_00100148:
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    iVar4 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(pAVar2 + 0x10));
      if (iVar1 <= iVar4) break;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(pAVar2 + 0x10),iVar4);
      if (iVar4 == 0) {
        *(int *)(pAVar2 + 8) = *piVar3;
      }
      else if (*piVar3 != *(int *)(pAVar2 + 8)) {
        OSSL_IETF_ATTR_SYNTAX_free(pAVar2);
        if (param_1 != (ASN1_VALUE **)0x0) {
          *param_1 = (ASN1_VALUE *)0x0;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/x_ietfatt.c",0x58,"d2i_OSSL_IETF_ATTR_SYNTAX");
        ERR_set_error(0x22,0x80106,0);
        goto LAB_00100148;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return pAVar2;
}



void i2d_OSSL_IETF_ATTR_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_IETF_ATTR_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



undefined8 OSSL_IETF_ATTR_SYNTAX_get_value_num(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = OPENSSL_sk_num();
    return uVar1;
  }
  return 0;
}



undefined8 OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority(undefined8 *param_1)

{
  return *param_1;
}



void OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority(undefined8 *param_1,undefined8 param_2)

{
  GENERAL_NAMES_free((GENERAL_NAMES *)*param_1);
  *param_1 = param_2;
  return;
}



undefined8 OSSL_IETF_ATTR_SYNTAX_get0_value(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10));
  if (piVar2 != (int *)0x0) {
    if (param_3 != (int *)0x0) {
      *param_3 = *piVar2;
    }
    iVar1 = *piVar2;
    if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 0)) {
      return *(undefined8 *)(piVar2 + 2);
    }
  }
  return 0;
}



undefined8 OSSL_IETF_ATTR_SYNTAX_add1_value(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(int *)(param_1 + 8) = param_2;
      goto LAB_001002b1;
    }
LAB_00100320:
    ERR_new();
    ERR_set_debug("crypto/x509/x_ietfatt.c",0xbe,"OSSL_IETF_ATTR_SYNTAX_add1_value");
    ERR_set_error(0x22,0x8000f,0);
  }
  else {
    if (*(int *)(param_1 + 8) == param_2) {
LAB_001002b1:
      piVar3 = (int *)OSSL_IETF_ATTR_SYNTAX_VALUE_new();
      if (piVar3 == (int *)0x0) goto LAB_00100320;
      *piVar3 = param_2;
      if (((param_2 == 1) || (param_2 == 2)) || (param_2 == 0)) {
        *(long *)(piVar3 + 2) = param_3;
        iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x10),piVar3);
        if (iVar1 < 1) {
          OSSL_IETF_ATTR_SYNTAX_VALUE_free(piVar3);
          return 0;
        }
        return 1;
      }
      OSSL_IETF_ATTR_SYNTAX_VALUE_free(piVar3);
      ERR_new();
      uVar4 = 0xb2;
    }
    else {
      ERR_new();
      uVar4 = 0x9e;
    }
    ERR_set_debug("crypto/x509/x_ietfatt.c",uVar4,"OSSL_IETF_ATTR_SYNTAX_add1_value");
    ERR_set_error(0x22,0x80106,0);
  }
  return 0;
}



bool OSSL_IETF_ATTR_SYNTAX_print(BIO *param_1,long *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  GENERAL_NAME *gen;
  ASN1_OBJECT *a;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  uint local_9c;
  char local_98 [88];
  long local_40;
  
  iVar3 = 0;
  lVar4 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 != 0) {
    for (; iVar2 = OPENSSL_sk_num(lVar4), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar2 = BIO_printf(param_1,"%*s",(ulong)param_3,&_LC1);
      if (iVar2 < 1) goto LAB_001004c0;
      gen = (GENERAL_NAME *)OPENSSL_sk_value(*param_2,iVar3);
      iVar2 = GENERAL_NAME_print(param_1,gen);
      if ((iVar2 < 1) || (iVar2 = BIO_printf(param_1,"\n"), iVar2 < 1)) goto LAB_001004c0;
      lVar4 = *param_2;
    }
  }
  for (iVar3 = 0; iVar2 = OSSL_IETF_ATTR_SYNTAX_get_value_num(param_2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    a = (ASN1_OBJECT *)OSSL_IETF_ATTR_SYNTAX_get0_value(param_2,iVar3,&local_9c);
    if ((a == (ASN1_OBJECT *)0x0) || (iVar2 = BIO_printf(param_1,"%*s",(ulong)param_3), iVar2 < 1))
    goto LAB_001004c0;
    if (local_9c == 1) {
      OBJ_obj2txt(local_98,0x50,a,0);
      BIO_printf(param_1,"%.*s",0x50,local_98);
    }
    else if ((local_9c & 0xfffffffd) == 0) {
      ASN1_STRING_print(param_1,(ASN1_STRING *)a);
    }
  }
  iVar3 = BIO_printf(param_1,"\n");
  bVar1 = 0 < iVar3;
LAB_001004c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
LAB_001004c0:
  bVar1 = false;
  goto LAB_001004c2;
}



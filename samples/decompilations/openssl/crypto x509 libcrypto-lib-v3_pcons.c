
undefined1 * POLICY_CONSTRAINTS_it(void)

{
  return local_it_0;
}



stack_st_CONF_VALUE *
i2v_POLICY_CONSTRAINTS(undefined8 param_1,undefined8 *param_2,stack_st_CONF_VALUE *param_3)

{
  stack_st_CONF_VALUE *local_20 [2];
  
  local_20[0] = param_3;
  X509V3_add_value_int("Require Explicit Policy",(ASN1_INTEGER *)*param_2,local_20);
  X509V3_add_value_int("Inhibit Policy Mapping",(ASN1_INTEGER *)param_2[1],local_20);
  return local_20[0];
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICY_CONSTRAINTS * POLICY_CONSTRAINTS_new(void)

{
  ASN1_ITEM *it;
  POLICY_CONSTRAINTS *pPVar1;
  
  it = (ASN1_ITEM *)POLICY_CONSTRAINTS_it();
  pPVar1 = (POLICY_CONSTRAINTS *)ASN1_item_new(it);
  return pPVar1;
}



void POLICY_CONSTRAINTS_free(POLICY_CONSTRAINTS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)POLICY_CONSTRAINTS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



POLICY_CONSTRAINTS *
v2i_POLICY_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  POLICY_CONSTRAINTS *a;
  CONF_VALUE *value;
  int iVar2;
  
  iVar2 = 0;
  a = POLICY_CONSTRAINTS_new();
  if (a == (POLICY_CONSTRAINTS *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_pcons.c",0x40,"v2i_POLICY_CONSTRAINTS");
    ERR_set_error(0x22,0x8000d,0);
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(param_3), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar2);
      __s1 = value->name;
      iVar1 = strcmp(__s1,"requireExplicitPolicy");
      if (iVar1 == 0) {
        iVar1 = X509V3_get_value_int(value,&a->requireExplicitPolicy);
      }
      else {
        iVar1 = strcmp(__s1,"inhibitPolicyMapping");
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_pcons.c",0x4c,"v2i_POLICY_CONSTRAINTS");
          ERR_set_error(0x22,0x6a,&_LC5,value->name);
          goto LAB_00100150;
        }
        iVar1 = X509V3_get_value_int(value,&a->inhibitPolicyMapping);
      }
      if (iVar1 == 0) goto LAB_00100150;
    }
    if (a->inhibitPolicyMapping != (ASN1_INTEGER *)0x0) {
      return a;
    }
    if (a->requireExplicitPolicy != (ASN1_INTEGER *)0x0) {
      return a;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/v3_pcons.c",0x53,"v2i_POLICY_CONSTRAINTS");
    ERR_set_error(0x22,0x97,0);
LAB_00100150:
    POLICY_CONSTRAINTS_free(a);
  }
  return (POLICY_CONSTRAINTS *)0x0;
}



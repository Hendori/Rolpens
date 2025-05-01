
undefined1 * POLICY_MAPPING_it(void)

{
  return local_it_1;
}



undefined1 * POLICY_MAPPINGS_it(void)

{
  return local_it_0;
}



stack_st_CONF_VALUE *
i2v_POLICY_MAPPINGS(undefined8 param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  stack_st_CONF_VALUE *local_e0;
  char local_d8 [80];
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  local_e0 = param_3;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar3) break;
    puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
    i2t_ASN1_OBJECT(local_d8,0x50,(ASN1_OBJECT *)*puVar2);
    i2t_ASN1_OBJECT(local_88,0x50,(ASN1_OBJECT *)puVar2[1]);
    X509V3_add_value(local_d8,local_88,&local_e0);
    iVar3 = iVar3 + 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void POLICY_MAPPING_free(POLICY_MAPPING *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)POLICY_MAPPING_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICY_MAPPING * POLICY_MAPPING_new(void)

{
  ASN1_ITEM *it;
  POLICY_MAPPING *pPVar1;
  
  it = (ASN1_ITEM *)POLICY_MAPPING_it();
  pPVar1 = (POLICY_MAPPING *)ASN1_item_new(it);
  return pPVar1;
}



long v2i_POLICY_MAPPINGS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ASN1_OBJECT *a;
  ASN1_OBJECT *a_00;
  POLICY_MAPPING *pPVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_pmaps.c",0x4c,"v2i_POLICY_MAPPINGS");
    ERR_set_error(0x22,0x8000f,0);
LAB_00100236:
    lVar2 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(param_3);
        if ((*(long *)(lVar4 + 0x10) == 0) || (*(char **)(lVar4 + 8) == (char *)0x0)) {
          ERR_new();
          a_00 = (ASN1_OBJECT *)0x0;
          a = (ASN1_OBJECT *)0x0;
          ERR_set_debug("crypto/x509/v3_pmaps.c",0x53,"v2i_POLICY_MAPPINGS");
          ERR_set_error(0x22,0x6e,&_LC1,*(undefined8 *)(lVar4 + 8));
LAB_00100217:
          ASN1_OBJECT_free(a);
          ASN1_OBJECT_free(a_00);
          OPENSSL_sk_pop_free(lVar2,POLICY_MAPPING_free);
          goto LAB_00100236;
        }
        a = OBJ_txt2obj(*(char **)(lVar4 + 8),0);
        a_00 = OBJ_txt2obj(*(char **)(lVar4 + 0x10),0);
        if ((a == (ASN1_OBJECT *)0x0) || (a_00 == (ASN1_OBJECT *)0x0)) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_pmaps.c",0x5a,"v2i_POLICY_MAPPINGS");
          ERR_set_error(0x22,0x6e,&_LC1,*(undefined8 *)(lVar4 + 8));
          goto LAB_00100217;
        }
        pPVar3 = POLICY_MAPPING_new();
        if (pPVar3 == (POLICY_MAPPING *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_pmaps.c",0x60,"v2i_POLICY_MAPPINGS");
          ERR_set_error(0x22,0x8000d,0);
          goto LAB_00100217;
        }
        pPVar3->issuerDomainPolicy = a;
        iVar5 = iVar5 + 1;
        pPVar3->subjectDomainPolicy = a_00;
        OPENSSL_sk_push(lVar2);
      } while (iVar1 != iVar5);
    }
  }
  return lVar2;
}




undefined8 ossl_policy_cache_set_mapping(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = 0;
  plVar1 = *(long **)(param_1 + 0x108);
  iVar3 = OPENSSL_sk_num(param_2);
  if (iVar3 == 0) {
LAB_001000f8:
    uVar6 = 0xffffffff;
  }
  else {
    for (; iVar3 = OPENSSL_sk_num(param_2), iVar7 < iVar3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_2,iVar7);
      iVar3 = OBJ_obj2nid((ASN1_OBJECT *)puVar4[1]);
      if ((iVar3 == 0x2ea) || (iVar3 = OBJ_obj2nid((ASN1_OBJECT *)*puVar4), iVar3 == 0x2ea))
      goto LAB_001000f8;
      puVar5 = (uint *)ossl_policy_cache_find_data(plVar1,*puVar4);
      if (puVar5 == (uint *)0x0) {
        if ((uint *)*plVar1 != (uint *)0x0) {
          puVar5 = (uint *)ossl_policy_data_new(0,*puVar4,*(uint *)*plVar1 & 0x10);
          if (puVar5 != (uint *)0x0) {
            lVar2 = plVar1[1];
            uVar6 = *(undefined8 *)(*plVar1 + 0x10);
            *puVar5 = *puVar5 | 6;
            *(undefined8 *)(puVar5 + 4) = uVar6;
            iVar3 = OPENSSL_sk_push(lVar2,puVar5);
            if (iVar3 != 0) goto LAB_00100033;
            ossl_policy_data_free(puVar5);
          }
          goto LAB_001000f0;
        }
      }
      else {
        *puVar5 = *puVar5 | 1;
LAB_00100033:
        iVar3 = OPENSSL_sk_push(*(undefined8 *)(puVar5 + 6),puVar4[1]);
        if (iVar3 == 0) {
LAB_001000f0:
          uVar6 = 0;
          goto LAB_001000fd;
        }
        puVar4[1] = 0;
      }
    }
    uVar6 = 1;
  }
LAB_001000fd:
  OPENSSL_sk_pop_free(param_2,&POLICY_MAPPING_free);
  return uVar6;
}



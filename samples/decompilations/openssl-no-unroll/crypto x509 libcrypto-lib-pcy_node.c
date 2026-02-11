
void node_cmp(undefined8 *param_1,undefined8 *param_2)

{
  OBJ_cmp(*(ASN1_OBJECT **)(*(long *)*param_1 + 8),*(ASN1_OBJECT **)(*(long *)*param_2 + 8));
  return;
}



void ossl_policy_node_cmp_new(void)

{
  OPENSSL_sk_new(0x100000);
  return;
}



void ossl_policy_tree_find_sk(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 *local_58 [4];
  undefined1 local_38 [8];
  undefined8 local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = local_38;
  local_30 = param_2;
  uVar1 = OPENSSL_sk_find(param_1,local_58);
  OPENSSL_sk_value(param_1,uVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * ossl_policy_level_find_node(long param_1,long param_2,ASN1_OBJECT *param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 <= iVar3) {
      return (long *)0x0;
    }
    plVar2 = (long *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
    if (plVar2[1] == param_2) {
      iVar1 = OBJ_cmp(*(ASN1_OBJECT **)(*plVar2 + 8),param_3);
      if (iVar1 == 0) {
        return plVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



void ossl_policy_node_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



long * ossl_policy_level_add_node(long param_1,long param_2,long param_3,ulong *param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_4[1] != 0) && (param_4[1] <= *param_4)) {
    return (long *)0x0;
  }
  plVar2 = (long *)CRYPTO_zalloc(0x18,"crypto/x509/pcy_node.c",0x47);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 != 0) {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_00100230;
      *(long **)(param_1 + 0x10) = plVar2;
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        lVar4 = ossl_policy_node_cmp_new();
        *(long *)(param_1 + 8) = lVar4;
        if (lVar4 == 0) {
          ERR_new(0);
          ERR_set_debug("crypto/x509/pcy_node.c",0x56,"ossl_policy_level_add_node");
          ERR_set_error(0x22,0x8000b,0);
          goto LAB_00100230;
        }
      }
      iVar1 = OPENSSL_sk_push(lVar4,plVar2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/x509/pcy_node.c",0x5a,"ossl_policy_level_add_node");
        ERR_set_error(0x22,0x8000f,0);
        goto LAB_00100230;
      }
    }
  }
  if (param_5 == 0) goto LAB_001001e1;
  uVar3 = param_4[4];
  if (uVar3 == 0) {
    uVar3 = OPENSSL_sk_new_null();
    param_4[4] = uVar3;
    if (uVar3 != 0) goto LAB_001001d1;
    ERR_new(0);
    uVar5 = 100;
  }
  else {
LAB_001001d1:
    iVar1 = OPENSSL_sk_push(uVar3,param_2);
    if (iVar1 != 0) {
LAB_001001e1:
      *param_4 = *param_4 + 1;
      if (param_3 != 0) {
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        return plVar2;
      }
      return plVar2;
    }
    ERR_new();
    uVar5 = 0x68;
  }
  ERR_set_debug("crypto/x509/pcy_node.c",uVar5,"ossl_policy_level_add_node");
  ERR_set_error(0x22,0x8000f,0);
  if (param_1 != 0) {
    if (*(long **)(param_1 + 0x10) == plVar2) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      OPENSSL_sk_pop(*(undefined8 *)(param_1 + 8));
    }
  }
LAB_00100230:
  ossl_policy_node_free(plVar2);
  return (long *)0x0;
}



bool ossl_policy_node_match(long param_1,undefined8 *param_2,ASN1_OBJECT *param_3)

{
  byte *pbVar1;
  int iVar2;
  ASN1_OBJECT *a;
  int iVar3;
  
  pbVar1 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) & 4) == 0) && ((*pbVar1 & 3) != 0)) {
    iVar3 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(pbVar1 + 0x18));
      if (iVar2 <= iVar3) {
        return false;
      }
      a = (ASN1_OBJECT *)OPENSSL_sk_value(*(undefined8 *)(pbVar1 + 0x18),iVar3);
      iVar2 = OBJ_cmp(a,param_3);
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
    }
    return true;
  }
  iVar3 = OBJ_cmp(*(ASN1_OBJECT **)(pbVar1 + 8),param_3);
  return iVar3 == 0;
}




int property_idx_cmp(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



undefined8 ossl_property_find_property(undefined4 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (undefined4 *)0x0) && (param_3 != 0)) {
    local_14 = ossl_property_name(param_2,param_3,0);
    if (local_14 != 0) {
      uVar1 = ossl_bsearch(&local_14,param_1 + 2,*param_1,0x18,0x100000,0);
      goto LAB_00100072;
    }
  }
  uVar1 = 0;
LAB_00100072:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_property_get_type(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined8 ossl_property_get_string_value(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 0)) {
    uVar1 = ossl_property_value_str(param_1,*(undefined4 *)(param_2 + 0x10));
    return uVar1;
  }
  return 0;
}



undefined8 ossl_property_get_number_value(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) == 1)) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



byte ossl_property_has_optional(long param_1)

{
  return *(byte *)(param_1 + 4) & 1;
}



bool ossl_property_is_enabled(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = ossl_property_find_property(param_3,param_1,param_2);
  bVar3 = false;
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0xc) & 1) == 0)) &&
      (iVar1 = *(int *)(lVar2 + 8), iVar1 != 2)) && (bVar3 = false, *(int *)(lVar2 + 4) == 0)) {
    if (iVar1 == 0) {
      return *(int *)(lVar2 + 0x10) == 1;
    }
    if (iVar1 == 1) {
      bVar3 = *(int *)(lVar2 + 0x10) != 1;
    }
  }
  return bVar3;
}



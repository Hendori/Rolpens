
undefined8 * record_file(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_RAX;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  if (param_1 == 0) {
    return in_RAX;
  }
  puVar4 = (undefined8 *)xmalloc(0x18);
  uVar5 = xstrdup(param_2);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *puVar4 = uVar5;
  puVar4[1] = uVar3;
  puVar4[2] = uVar2;
  puVar6 = (undefined8 *)hash_insert();
  if (puVar6 != (undefined8 *)0x0) {
    if (puVar4 != puVar6) {
      puVar4 = (undefined8 *)triple_free(puVar4);
      return puVar4;
    }
    return puVar6;
  }
  xalloc_die();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    lVar7 = hash_lookup();
    puVar4 = (undefined8 *)(ulong)(lVar7 != 0);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool seen_file(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = false;
  if (param_1 != 0) {
    uStack_18 = *param_3;
    local_20 = param_3[1];
    local_28 = param_2;
    lVar1 = hash_lookup(param_1,&local_28);
    bVar2 = lVar1 != 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



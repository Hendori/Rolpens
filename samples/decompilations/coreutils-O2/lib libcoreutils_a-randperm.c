
ulong sparse_hash_(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 sparse_cmp_(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



long randperm_bound(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  
  uVar4 = 1;
  if (param_2 != 0) {
    lVar1 = 0x3f;
    if (param_2 != 0) {
      for (; param_2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar4 = (ulong)((int)lVar1 + 2);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  auVar2 = auVar2 * auVar3;
  if (auVar2._8_8_ == 0) {
    return (auVar2._0_8_ >> 3) + (ulong)((auVar2 & (undefined1  [16])0x7) != (undefined1  [16])0x0);
  }
  return -1;
}



undefined8 * randperm_new(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong local_68 [3];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else if (param_2 == 1) {
    puVar3 = (undefined8 *)xmalloc(8);
    uVar4 = randint_genmax(param_1,param_3 - 1);
    *puVar3 = uVar4;
  }
  else {
    if (param_3 < 0x20000) {
      puVar3 = (undefined8 *)xnmalloc(param_3,8);
      if (param_3 != 0) goto LAB_00100117;
LAB_00100165:
      bVar2 = false;
      lVar9 = 0;
    }
    else {
      if (param_3 / param_2 < 0x20) {
        puVar3 = (undefined8 *)xnmalloc(param_3,8,param_3 % param_2);
LAB_00100117:
        *puVar3 = 0;
        uVar5 = 1;
        if (1 < param_3) {
          if (((int)param_3 - 1U & 1) != 0) {
            puVar3[1] = 1;
            uVar5 = 2;
            if (param_3 < 3) goto LAB_00100165;
          }
          do {
            puVar3[uVar5] = uVar5;
            lVar9 = uVar5 + 1;
            uVar5 = uVar5 + 2;
            puVar3[lVar9] = lVar9;
          } while (uVar5 < param_3);
        }
        goto LAB_00100165;
      }
      lVar9 = hash_initialize(param_2 * 2,0,0x100000,sparse_cmp_,&free);
      if (lVar9 == 0) {
LAB_0010038e:
        xalloc_die();
        goto LAB_00100393;
      }
      puVar3 = (undefined8 *)xnmalloc(param_2,8);
      bVar2 = true;
    }
    uVar5 = 0;
    do {
      while( true ) {
        lVar6 = randint_genmax(param_1,(param_3 - 1) - uVar5);
        uVar10 = lVar6 + uVar5;
        if (!bVar2) break;
        local_50 = 0;
        local_68[2] = uVar5;
        puVar7 = (ulong *)hash_remove(lVar9,local_68 + 2);
        local_68[1] = 0;
        local_68[0] = uVar10;
        puVar8 = (ulong *)hash_remove(lVar9,local_68);
        if (puVar7 == (ulong *)0x0) {
          puVar7 = (ulong *)xmalloc(0x10);
          *puVar7 = uVar5;
          puVar7[1] = uVar5;
        }
        if (puVar8 == (ulong *)0x0) {
          puVar8 = (ulong *)xmalloc(0x10);
          *puVar8 = uVar10;
          puVar8[1] = uVar10;
        }
        else {
          uVar10 = puVar8[1];
        }
        uVar1 = puVar7[1];
        puVar7[1] = uVar10;
        puVar8[1] = uVar1;
        lVar6 = hash_insert(lVar9,puVar7);
        if ((lVar6 == 0) || (lVar6 = hash_insert(lVar9,puVar8), lVar6 == 0)) goto LAB_0010038e;
        puVar3[uVar5] = puVar7[1];
        uVar5 = uVar5 + 1;
        if (param_2 <= uVar5) goto LAB_00100266;
      }
      uVar4 = puVar3[uVar5];
      puVar3[uVar5] = puVar3[uVar10];
      uVar5 = uVar5 + 1;
      puVar3[uVar10] = uVar4;
    } while (uVar5 < param_2);
LAB_00100266:
    if (!bVar2) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        puVar3 = (undefined8 *)xreallocarray(puVar3,param_2,8);
        return puVar3;
      }
      goto LAB_00100393;
    }
    hash_free(lVar9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
LAB_00100393:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



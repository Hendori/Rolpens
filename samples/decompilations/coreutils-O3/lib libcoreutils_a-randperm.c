
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * randperm_new(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long in_FS_OFFSET;
  long lVar13;
  long lVar14;
  ulong local_68 [3];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (param_2 != 1) {
      if (param_3 < 0x20000) {
        plVar4 = (long *)xnmalloc(param_3,8);
        if (param_3 != 0) {
          if (param_3 != 1) goto LAB_0010010f;
          uVar7 = 0;
LAB_00100152:
          plVar4[uVar7] = uVar7;
        }
      }
      else {
        if (0x1f < param_3 / param_2) {
          lVar9 = hash_initialize(param_2 * 2,0,0x100000,sparse_cmp_,&free);
          if (lVar9 == 0) {
LAB_00100384:
            xalloc_die();
            goto LAB_00100389;
          }
          puVar2 = (undefined8 *)xnmalloc(param_2,8);
          uVar7 = 0;
          do {
            lVar8 = randint_genmax(param_1,(param_3 - 1) - uVar7);
            local_50 = 0;
            uVar10 = lVar8 + uVar7;
            local_68[2] = uVar7;
            puVar11 = (ulong *)hash_remove(lVar9,local_68 + 2);
            local_68[1] = 0;
            local_68[0] = uVar10;
            puVar12 = (ulong *)hash_remove(lVar9,local_68);
            if (puVar11 == (ulong *)0x0) {
              puVar11 = (ulong *)xmalloc(0x10);
              *puVar11 = uVar7;
              puVar11[1] = uVar7;
            }
            if (puVar12 == (ulong *)0x0) {
              puVar12 = (ulong *)xmalloc(0x10);
              *puVar12 = uVar10;
              puVar12[1] = uVar10;
            }
            else {
              uVar10 = puVar12[1];
            }
            uVar1 = puVar11[1];
            puVar11[1] = uVar10;
            puVar12[1] = uVar1;
            lVar8 = hash_insert(lVar9,puVar11);
            if (lVar8 == 0) goto LAB_00100384;
            lVar8 = hash_insert(lVar9,puVar12);
            if (lVar8 == 0) goto LAB_00100384;
            puVar2[uVar7] = puVar11[1];
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_2);
          hash_free(lVar9);
          goto LAB_001000b6;
        }
        plVar4 = (long *)xnmalloc(param_3,8,param_3 % param_2);
LAB_0010010f:
        lVar8 = _UNK_001003a8;
        lVar9 = __LC1;
        plVar5 = plVar4;
        lVar13 = __LC0;
        lVar14 = _UNK_00100398;
        do {
          plVar6 = plVar5 + 2;
          *plVar5 = lVar13;
          plVar5[1] = lVar14;
          plVar5 = plVar6;
          lVar13 = lVar13 + lVar9;
          lVar14 = lVar14 + lVar8;
        } while (plVar6 != plVar4 + (param_3 & 0xfffffffffffffffe));
        if ((param_3 & 1) != 0) {
          uVar7 = param_3 & 0xfffffffffffffffe;
          goto LAB_00100152;
        }
      }
      uVar7 = 0;
      do {
        lVar8 = randint_genmax(param_1,(param_3 - 1) - uVar7);
        lVar9 = plVar4[uVar7];
        lVar8 = lVar8 + uVar7;
        plVar4[uVar7] = plVar4[lVar8];
        uVar7 = uVar7 + 1;
        plVar4[lVar8] = lVar9;
      } while (uVar7 < param_2);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        puVar2 = (undefined8 *)xreallocarray(plVar4,param_2,8);
        return puVar2;
      }
      goto LAB_00100389;
    }
    puVar2 = (undefined8 *)xmalloc(8);
    uVar3 = randint_genmax(param_1,param_3 - 1);
    *puVar2 = uVar3;
  }
LAB_001000b6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
LAB_00100389:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 *
careadlinkat(undefined4 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4,
            undefined8 *param_5,code *param_6)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  void *__dest;
  undefined1 *puVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  size_t local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == (undefined8 *)0x0) {
    param_5 = (undefined8 *)&stdlib_allocator;
  }
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_448;
    sVar5 = 0x400;
    puVar4 = param_3;
  }
  else {
    sVar5 = 0x7fffffffffffffff;
    puVar4 = param_3;
    if (param_4 < 0x8000000000000000) {
      sVar5 = param_4;
    }
  }
  do {
    lVar2 = (*param_6)(param_1,param_2,param_3,sVar5);
    if (lVar2 < 0) {
      if (puVar4 != param_3) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        (*(code *)param_5[2])(param_3);
        *piVar3 = iVar1;
      }
      goto LAB_001000e1;
    }
    if (lVar2 < (long)sVar5) {
      param_3[lVar2] = 0;
      local_450 = lVar2 + 1;
      if (param_3 != local_448) {
        if (((((long)sVar5 <= (long)local_450) || (puVar4 == param_3)) ||
            ((code *)param_5[1] == (code *)0x0)) ||
           (puVar4 = (undefined1 *)(*(code *)param_5[1])(param_3,local_450),
           puVar4 == (undefined1 *)0x0)) {
          puVar4 = param_3;
        }
        goto LAB_001000e3;
      }
      __dest = (void *)(*(code *)*param_5)(local_450);
      if (__dest != (void *)0x0) {
        puVar4 = (undefined1 *)memcpy(__dest,param_3,local_450);
        goto LAB_001000e3;
      }
      break;
    }
    if (puVar4 != param_3) {
      (*(code *)param_5[2])(param_3);
    }
    if (0x3ffffffffffffffe < (long)sVar5) {
      piVar3 = __errno_location();
      *piVar3 = 0x24;
      goto LAB_001000e1;
    }
    local_450 = sVar5 * 2 + 1;
    param_3 = (undefined1 *)(*(code *)*param_5)(local_450);
    sVar5 = local_450;
  } while (param_3 != (undefined1 *)0x0);
  if ((code *)param_5[3] != (code *)0x0) {
    (*(code *)param_5[3])(local_450);
  }
  piVar3 = __errno_location();
  *piVar3 = 0xc;
LAB_001000e1:
  puVar4 = (undefined1 *)0x0;
LAB_001000e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



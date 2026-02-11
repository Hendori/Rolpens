
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ldtoastr(char *param_1,ulong param_2,uint param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined2 param_8)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  long in_FS_OFFSET;
  longdouble in_ST0;
  longdouble lVar5;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble lVar6;
  longdouble lVar7;
  undefined1 local_4c [5];
  char acStack_47 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c._0_2_ = 0x2d25;
  lVar5 = (longdouble)CONCAT28(param_8,param_7);
  if (lVar5 <= (longdouble)0 || (longdouble)0 != lVar5) {
    lVar5 = -(longdouble)CONCAT28(param_8,param_7);
  }
  puVar3 = local_4c + (ulong)(param_3 & 1) + 1;
  *puVar3 = 0x2b;
  puVar3[param_3 >> 1 & 1] = 0x20;
  puVar3 = puVar3 + (param_3 >> 1 & 1) + (param_3 >> 2 & 1);
  *puVar3 = 0x30;
  uVar2 = (ulong)(param_3 >> 3 & 1);
  *(undefined4 *)(puVar3 + uVar2) = 0x4c2a2e2a;
  puVar3[uVar2 + 5] = 0;
  puVar3[uVar2 + 4] = (-((param_3 & 0x10) == 0) & 0x20U) + 0x47;
  iVar4 = 1;
  lVar6 = in_ST4;
  lVar7 = in_ST4;
  if (__LC3 <= lVar5) {
    iVar4 = 0x12;
  }
  while (((iVar1 = __snprintf_chk(param_1,param_2,2,0xffffffffffffffff,local_4c,param_4,iVar4),
          -1 < iVar1 && (iVar4 < 0x15)) &&
         ((lVar5 = in_ST0, param_2 <= (ulong)(long)iVar1 ||
          (lVar5 = in_ST1, in_ST1 = in_ST2, in_ST2 = in_ST3, in_ST3 = in_ST4, in_ST4 = lVar6,
          lVar6 = lVar7, strtold(param_1,(char **)0x0), lVar7 = lVar6,
          in_ST0 != (longdouble)CONCAT28(param_8,param_7)))))) {
    iVar4 = iVar4 + 1;
    in_ST0 = lVar5;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



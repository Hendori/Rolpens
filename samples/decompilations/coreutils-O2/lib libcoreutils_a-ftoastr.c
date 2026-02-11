
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ftoastr(float param_1,char *param_2,ulong param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined1 local_4c [3];
  char acStack_49 [9];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c._0_2_ = 0x2d25;
  puVar3 = local_4c + (ulong)(param_4 & 1) + 1;
  *puVar3 = 0x2b;
  puVar3[param_4 >> 1 & 1] = 0x20;
  puVar3 = puVar3 + (param_4 >> 1 & 1) + (param_4 >> 2 & 1);
  *puVar3 = 0x30;
  uVar2 = (ulong)(param_4 >> 3 & 1);
  *(undefined2 *)(puVar3 + uVar2) = 0x2e2a;
  puVar3[uVar2 + 2] = 0x2a;
  puVar3[uVar2 + 4] = 0;
  puVar3[uVar2 + 3] = (-((param_4 & 0x10) == 0) & 0x20U) + 0x47;
  iVar4 = 1;
  if (_LC4 <= (float)(((uint)param_1 ^ __LC1) & -(uint)(param_1 < 0.0) |
                     ~-(uint)(param_1 < 0.0) & (uint)param_1)) {
    iVar4 = 6;
  }
  while (((iVar1 = __snprintf_chk((double)param_1,param_2,param_3,2,0xffffffffffffffff,local_4c,
                                  param_5,iVar4), -1 < iVar1 && (iVar4 < 9)) &&
         ((param_3 <= (ulong)(long)iVar1 || (fVar5 = strtof(param_2,(char **)0x0), fVar5 != param_1)
          )))) {
    iVar4 = iVar4 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



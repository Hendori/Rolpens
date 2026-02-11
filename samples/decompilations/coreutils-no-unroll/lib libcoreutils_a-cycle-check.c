
void cycle_check_init(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x95f616;
  return;
}



undefined8 cycle_check(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((int)param_1[3] != 0x95f616) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("state->magic == 9827862","lib/cycle-check.c",0x3b,"cycle_check");
  }
  uVar2 = param_1[2];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if (uVar2 == 0) {
    param_1[2] = 1;
  }
  else {
    if (param_1[1] == lVar3 && *param_1 == lVar4) {
      return 1;
    }
    uVar1 = uVar2 + 1;
    param_1[2] = uVar1;
    if ((uVar2 & uVar1) != 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 1;
    }
  }
  param_1[1] = lVar3;
  *param_1 = lVar4;
  return 0;
}



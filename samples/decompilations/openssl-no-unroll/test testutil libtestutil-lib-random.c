
uint test_random(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (pos_0 == 0x1f) {
    iVar4 = 1;
    uVar3 = 0x1c;
    pos_0 = 0;
  }
  else {
    iVar4 = pos_0 + 1;
    uVar3 = (ulong)((pos_0 + 0x1c) % 0x1f);
  }
  iVar1 = (&test_random_state)[uVar3];
  iVar2 = (&test_random_state)[pos_0];
  uVar3 = (ulong)pos_0;
  pos_0 = iVar4;
  (&test_random_state)[uVar3] = iVar1 + iVar2;
  return (uint)(iVar1 + iVar2) >> 1;
}



void test_random_seed(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)&DAT_00100104;
  test_random_state = param_1;
  do {
    piVar3 = piVar2 + 1;
    param_1 = (int)((long)param_1 * 0x41a7) +
              (int)(((long)param_1 * 0x41a7) / 0x7fffffff) * -0x7fffffff;
    *piVar2 = param_1;
    piVar2 = piVar3;
  } while (piVar3 != (int *)0x10017c);
  iVar1 = 0x136;
  do {
    test_random();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



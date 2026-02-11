
undefined4 findMapping(float param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  
  pfVar1 = (float *)&DAT_00100124;
  uVar3 = 0;
  do {
    if ((*pfVar1 - *param_2 <= param_1) && (*param_2 - *pfVar1 <= param_1)) {
      if ((pfVar1[2] - param_2[2] <= param_1) && (param_2[2] - pfVar1[2] <= param_1)) {
        if ((pfVar1[4] - param_2[4] <= param_1) && (param_2[4] - pfVar1[4] <= param_1)) {
          if ((pfVar1[6] - param_2[6] <= param_1) && (param_2[6] - pfVar1[6] <= param_1)) {
            return (&primaryMap)[uVar3 * 9];
          }
        }
      }
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar2;
    pfVar1 = pfVar1 + 9;
    if (uVar2 == 0xb) {
      return 0;
    }
  } while( true );
}



undefined8 getPrimaries(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = &primaryMap;
  do {
    if (*piVar4 == param_1) {
      uVar1 = *(undefined8 *)(&DAT_0010012c + uVar3 * 9);
      *param_2 = *(undefined8 *)(&DAT_00100124 + uVar3 * 0x24);
      param_2[1] = uVar1;
      uVar1 = *(undefined8 *)(&DAT_0010013c + uVar3 * 9);
      param_2[2] = *(undefined8 *)(&DAT_00100134 + uVar3 * 9);
      param_2[3] = uVar1;
      return 1;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar2;
    piVar4 = piVar4 + 9;
  } while (uVar2 != 0xb);
  return 0;
}



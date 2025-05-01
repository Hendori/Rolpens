
void BrotliSharedDictionaryDestroyInstance(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x570);
    uVar1 = *(undefined8 *)(param_1 + 0x578);
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(param_1 + 0x548));
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(param_1 + 0x558));
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(param_1 + 0x560));
                    /* WARNING: Could not recover jumptable at 0x0010004f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  return;
}



undefined8
BrotliSharedDictionaryAttach(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if (((param_2 == 0) && (param_1 != (uint *)0x0)) && (uVar1 = *param_1, uVar1 < 0xf)) {
    *(undefined8 *)(param_1 + (ulong)uVar1 * 2 + 2) = param_3;
    *(undefined8 *)(param_1 + (ulong)uVar1 * 2 + 0x20) = param_4;
    *param_1 = uVar1 + 1;
    return 1;
  }
  return 0;
}



undefined8 *
BrotliSharedDictionaryCreateInstance(code *param_1,undefined *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (param_1 == (code *)0x0 && param_2 == (undefined *)0x0) {
    puVar1 = (undefined8 *)calloc(0x580,1);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar1 + 0x13c) = 1;
      uVar2 = BrotliGetDictionary();
      puVar1[0x28] = uVar2;
      uVar2 = BrotliGetTransforms();
      param_2 = &BrotliDefaultFreeFunc;
      puVar1[0x68] = uVar2;
      puVar1[0xad] = &BrotliDefaultAllocFunc;
LAB_0010013f:
      puVar1[0xae] = param_2;
      puVar1[0xaf] = param_3;
      return puVar1;
    }
  }
  else if ((param_1 != (code *)0x0) && (param_2 != (undefined *)0x0)) {
    puVar1 = (undefined8 *)(*param_1)(param_3,0x580);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[0xaf] = 0;
      puVar4 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      for (uVar3 = (ulong)(((int)puVar1 -
                           (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)) + 0x580U
                          >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      *(undefined1 *)((long)puVar1 + 0x13c) = 1;
      uVar2 = BrotliGetDictionary();
      puVar1[0x28] = uVar2;
      uVar2 = BrotliGetTransforms();
      puVar1[0xad] = param_1;
      puVar1[0x68] = uVar2;
      goto LAB_0010013f;
    }
  }
  return (undefined8 *)0x0;
}



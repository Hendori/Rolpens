
undefined8
CRYPTO_xts128_encrypt
          (undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
          int param_6)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  long in_FS_OFFSET;
  ulong local_68;
  undefined8 uStack_60;
  ulong local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0x10) {
    uVar5 = 0xffffffff;
    goto LAB_001000fc;
  }
  local_68 = *param_2;
  uStack_60 = param_2[1];
  (*(code *)param_1[3])(&local_68,&local_68,param_1[1]);
  if (((param_6 == 0) && ((param_5 & 0xf) != 0)) && (param_5 = param_5 - 0x10, param_5 < 0x10)) {
LAB_00100150:
    uVar4 = (ulong)(uStack_60._4_4_ >> 0x1f & 0x87) ^ local_68 * 2;
    uVar3 = uStack_60 << 1 | local_68 >> 0x3f;
    local_58[0] = uVar4 ^ *param_3;
    local_58[1] = param_3[1] ^ uVar3;
    (*(code *)param_1[2])(local_58,local_58,*param_1);
    uVar6 = 0;
    local_58[0] = uVar4 ^ local_58[0];
    local_58[1] = local_58[1] ^ uVar3;
    if (param_5 != 0) {
      do {
        uVar1 = *(undefined1 *)((long)local_58 + uVar6);
        *(undefined1 *)((long)local_58 + uVar6) = *(undefined1 *)((long)param_3 + uVar6 + 0x10);
        *(undefined1 *)((long)param_4 + uVar6 + 0x10) = uVar1;
        uVar6 = uVar6 + 1;
      } while (param_5 != uVar6);
    }
    local_58[0] = local_58[0] ^ local_68;
    local_58[1] = local_58[1] ^ uStack_60;
    (*(code *)param_1[2])(local_58,local_58,*param_1);
    *param_4 = local_68 ^ local_58[0];
    param_4[1] = uStack_60 ^ local_58[1];
  }
  else {
    do {
      puVar7 = param_4;
      local_58[0] = *param_3;
      puVar2 = param_3 + 1;
      param_3 = param_3 + 2;
      param_4 = puVar7 + 2;
      local_58[0] = local_58[0] ^ local_68;
      local_58[1] = *puVar2 ^ uStack_60;
      (*(code *)param_1[2])(local_58,local_58,*param_1);
      *puVar7 = local_68 ^ local_58[0];
      puVar7[1] = uStack_60 ^ local_58[1];
      local_58[0] = local_68 ^ local_58[0];
      local_58[1] = uStack_60 ^ local_58[1];
      param_5 = param_5 - 0x10;
      if (param_5 == 0) goto LAB_001000fa;
      uVar3 = uStack_60 << 1 | local_68 >> 0x3f;
      local_68 = (ulong)(uStack_60._4_4_ >> 0x1f & 0x87) ^ local_68 * 2;
      uStack_60 = uVar3;
    } while (0xf < param_5);
    if (param_6 == 0) goto LAB_00100150;
    uVar4 = 0;
    do {
      uVar1 = *(undefined1 *)((long)local_58 + uVar4);
      *(undefined1 *)((long)local_58 + uVar4) = *(undefined1 *)((long)param_3 + uVar4);
      *(undefined1 *)((long)param_4 + uVar4) = uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_5);
    local_58[0] = local_68 ^ local_58[0];
    local_58[1] = uVar3 ^ local_58[1];
    (*(code *)param_1[2])(local_58,local_58,*param_1);
    *puVar7 = local_58[0] ^ local_68;
    puVar7[1] = local_58[1] ^ uStack_60;
  }
LAB_001000fa:
  uVar5 = 0;
LAB_001000fc:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



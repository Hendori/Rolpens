
undefined8
ossl_crypto_xts128gb_encrypt
          (undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
          int param_6)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long in_FS_OFFSET;
  ulong local_68;
  ulong uStack_60;
  ulong local_58 [5];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0x10) {
    uVar8 = 0xffffffff;
    goto LAB_00100121;
  }
  local_68 = *param_2;
  uStack_60 = param_2[1];
  (*(code *)param_1[3])(&local_68,&local_68,param_1[1]);
  if (((param_6 == 0) && ((param_5 & 0xf) != 0)) && (param_5 = param_5 - 0x10, param_5 < 0x10)) {
LAB_00100178:
    uVar10 = local_68 >> 0x38 | (local_68 & 0xff000000000000) >> 0x28 |
             (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
             (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
             (local_68 & 0xff00) << 0x28 | local_68 << 0x38;
    uVar4 = uStack_60 >> 0x38 | (uStack_60 & 0xff000000000000) >> 0x28 |
            (uStack_60 & 0xff0000000000) >> 0x18;
    uVar3 = uVar4 | (uStack_60 & 0xff00000000) >> 8;
    uVar2 = uVar3 | (uStack_60 & 0xff000000) << 8;
    uVar11 = uVar2 | (uStack_60 & 0xff0000) << 0x18;
    uVar7 = uVar11 | (uStack_60 & 0xff00) << 0x28;
    uVar5 = (uVar7 | uStack_60 << 0x38) >> 1;
    uVar9 = uVar10 >> 1;
    if ((uStack_60 >> 0x38 & 1) != 0) {
      uVar9 = uVar9 & 0xffffffffffffff | (ulong)((uint)(uVar10 >> 0x39) ^ 0xffffffe1) << 0x38;
    }
    uVar11 = ((local_68 >> 0x38) << 0x3f | uVar5) >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
             (uVar7 & 0x1fe0000000000) >> 0x19 | (uVar11 & 0x1fe00000000) >> 9 |
             ((uVar2 & 0x1fe000000) >> 1) << 8 | ((uVar3 & 0x1fe0000) >> 1) << 0x18 |
             ((uVar4 & 0x1fe00) >> 1) << 0x28 | uVar5 << 0x38;
    uVar7 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
    local_58[0] = *param_3 ^ uVar7;
    local_58[1] = param_3[1] ^ uVar11;
    (*(code *)param_1[2])(local_58,local_58,*param_1);
    local_58[0] = uVar7 ^ local_58[0];
    local_58[1] = uVar11 ^ local_58[1];
    if (param_5 != 0) {
      uVar7 = 0;
      do {
        uVar1 = *(undefined1 *)((long)local_58 + uVar7);
        *(undefined1 *)((long)local_58 + uVar7) = *(undefined1 *)((long)param_3 + uVar7 + 0x10);
        *(undefined1 *)((long)param_4 + uVar7 + 0x10) = uVar1;
        uVar7 = uVar7 + 1;
      } while (param_5 != uVar7);
    }
    local_58[0] = local_58[0] ^ local_68;
    local_58[1] = local_58[1] ^ uStack_60;
    (*(code *)param_1[2])(local_58,local_58,*param_1);
    *param_4 = local_58[0] ^ local_68;
    param_4[1] = local_58[1] ^ uStack_60;
  }
  else {
    do {
      puVar12 = param_4;
      local_58[0] = *param_3;
      puVar6 = param_3 + 1;
      param_3 = param_3 + 2;
      param_4 = puVar12 + 2;
      local_58[0] = local_58[0] ^ local_68;
      local_58[1] = *puVar6 ^ uStack_60;
      (*(code *)param_1[2])(local_58,local_58,*param_1);
      *puVar12 = local_68 ^ local_58[0];
      puVar12[1] = uStack_60 ^ local_58[1];
      local_58[0] = local_68 ^ local_58[0];
      local_58[1] = uStack_60 ^ local_58[1];
      param_5 = param_5 - 0x10;
      if (param_5 == 0) goto LAB_0010011f;
      uVar7 = local_68 >> 0x38;
      uVar2 = uStack_60 >> 0x38;
      uVar3 = uVar2 | (uStack_60 & 0xff000000000000) >> 0x28 | (uStack_60 & 0xff0000000000) >> 0x18;
      uVar4 = uVar3 | (uStack_60 & 0xff00000000) >> 8;
      uVar11 = uVar4 | (uStack_60 & 0xff000000) << 8;
      uVar9 = uVar11 | (uStack_60 & 0xff0000) << 0x18;
      uVar5 = uVar9 | (uStack_60 & 0xff00) << 0x28;
      uVar10 = (uVar5 | uStack_60 << 0x38) >> 1;
      uStack_60 = (uVar7 | (local_68 & 0xff000000000000) >> 0x28 |
                   (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
                   (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
                   (local_68 & 0xff00) << 0x28 | local_68 << 0x38) >> 1;
      if ((uVar2 & 1) != 0) {
        uStack_60 = CONCAT17((byte)local_68 >> 1,(undefined7)uStack_60) ^ 0xe100000000000000;
      }
      local_68 = uStack_60 >> 0x38 | (uStack_60 & 0xff000000000000) >> 0x28 |
                 (uStack_60 & 0xff0000000000) >> 0x18 | (uStack_60 & 0xff00000000) >> 8 |
                 (uStack_60 & 0xff000000) << 8 | (uStack_60 & 0xff0000) << 0x18 |
                 (uStack_60 & 0xff00) << 0x28 | uStack_60 << 0x38;
      uStack_60 = (uVar7 << 0x3f | uVar10) >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                  (uVar5 & 0x1fe0000000000) >> 0x19 | (uVar9 & 0x1fe00000000) >> 9 |
                  ((uVar11 & 0x1fe000000) >> 1) << 8 | ((uVar4 & 0x1fe0000) >> 1) << 0x18 |
                  ((uVar3 & 0x1fe00) >> 1) << 0x28 | uVar10 << 0x38;
    } while (0xf < param_5);
    if (param_6 == 0) goto LAB_00100178;
    uVar7 = 0;
    do {
      uVar1 = *(undefined1 *)((long)local_58 + uVar7);
      *(undefined1 *)((long)local_58 + uVar7) = *(undefined1 *)((long)param_3 + uVar7);
      *(undefined1 *)((long)param_4 + uVar7) = uVar1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_5);
    local_58[0] = local_68 ^ local_58[0];
    local_58[1] = uStack_60 ^ local_58[1];
    (*(code *)param_1[2])(local_58,local_58,*param_1);
    *puVar12 = local_58[0] ^ local_68;
    puVar12[1] = local_58[1] ^ uStack_60;
  }
LAB_0010011f:
  uVar8 = 0;
LAB_00100121:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



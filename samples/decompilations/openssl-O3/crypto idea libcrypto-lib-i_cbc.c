
void IDEA_encrypt(ulong *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  short sVar13;
  
  uVar10 = *param_1;
  uVar5 = param_1[1];
  uVar4 = (ulong)*param_2 * (uVar10 >> 0x10 & 0xffff);
  if (uVar4 == 0) {
    uVar7 = (1 - (short)*param_2) - (short)(uVar10 >> 0x10);
  }
  else {
    lVar8 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar4 = (ulong)param_2[3] * (uVar5 & 0xffff);
  uVar2 = (short)param_2[2] + (short)(uVar5 >> 0x10);
  if (uVar4 == 0) {
    uVar12 = (1 - (short)param_2[3]) - (short)uVar5;
  }
  else {
    lVar8 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar12 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = uVar7 ^ uVar2;
  uVar5 = (ulong)param_2[4] * (ulong)uVar6;
  if (uVar5 == 0) {
    uVar5 = (ulong)((1 - param_2[4]) - (uint)uVar6);
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar5 = uVar5 - (uVar5 >> 0x10);
  }
  uVar6 = (uVar12 ^ (ushort)(param_2[1] + uVar10)) + (short)uVar5;
  uVar4 = (ulong)param_2[5] * (ulong)uVar6;
  if (uVar4 == 0) {
    uVar4 = (ulong)((1 - param_2[5]) - (uint)uVar6);
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar4 = uVar4 - (uVar4 >> 0x10);
  }
  uVar7 = uVar7 ^ (ushort)uVar4;
  uVar12 = uVar12 ^ (ushort)(uVar5 + uVar4);
  uVar9 = (ulong)param_2[6] * (ulong)uVar7;
  if (uVar9 == 0) {
    uVar7 = (1 - (short)param_2[6]) - uVar7;
  }
  else {
    lVar8 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar9 = (ulong)param_2[9] * (ulong)uVar12;
  uVar2 = (short)param_2[7] + ((ushort)uVar4 ^ uVar2);
  uVar10 = (ulong)param_2[8] + (param_2[1] + uVar10 ^ uVar5 + uVar4);
  if (uVar9 == 0) {
    uVar12 = (1 - (short)param_2[9]) - uVar12;
  }
  else {
    lVar8 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    uVar12 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = uVar7 ^ (ushort)uVar10;
  uVar5 = (ulong)param_2[10] * (ulong)uVar6;
  if (uVar5 == 0) {
    sVar13 = (1 - (short)param_2[10]) - uVar6;
  }
  else {
    lVar8 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    sVar13 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = (uVar12 ^ uVar2) + sVar13;
  uVar5 = (ulong)param_2[0xb] * (ulong)uVar6;
  if (uVar5 == 0) {
    uVar5 = (ulong)((1 - param_2[0xb]) - (uint)uVar6);
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar5 = uVar5 - (uVar5 >> 0x10);
  }
  uVar6 = sVar13 + (ushort)uVar5;
  uVar7 = uVar7 ^ (ushort)uVar5;
  uVar12 = uVar12 ^ uVar6;
  uVar4 = (ulong)param_2[0xc] * (ulong)uVar7;
  if (uVar4 == 0) {
    uVar7 = (1 - (short)param_2[0xc]) - uVar7;
  }
  else {
    lVar8 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar5 = (ulong)param_2[0xd] + (uVar5 ^ uVar10);
  uVar2 = (short)param_2[0xe] + (uVar2 ^ uVar6);
  uVar10 = (ulong)param_2[0xf] * (ulong)uVar12;
  if (uVar10 == 0) {
    uVar12 = (1 - (short)param_2[0xf]) - uVar12;
  }
  else {
    lVar8 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar12 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = uVar7 ^ uVar2;
  uVar10 = (ulong)param_2[0x10] * (ulong)uVar6;
  if (uVar10 == 0) {
    uVar10 = (ulong)((1 - param_2[0x10]) - (uint)uVar6);
  }
  else {
    uVar10 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar10 = uVar10 - (uVar10 >> 0x10);
  }
  uVar6 = (uVar12 ^ (ushort)uVar5) + (short)uVar10;
  uVar4 = (ulong)param_2[0x11] * (ulong)uVar6;
  if (uVar4 == 0) {
    uVar4 = (ulong)((1 - param_2[0x11]) - (uint)uVar6);
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar4 = uVar4 - (uVar4 >> 0x10);
  }
  uVar7 = uVar7 ^ (ushort)uVar4;
  uVar12 = uVar12 ^ (ushort)(uVar10 + uVar4);
  uVar9 = (ulong)param_2[0x12] * (ulong)uVar7;
  if (uVar9 == 0) {
    uVar7 = (1 - (short)param_2[0x12]) - uVar7;
  }
  else {
    lVar8 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar2 = (short)param_2[0x13] + ((ushort)uVar4 ^ uVar2);
  uVar5 = (ulong)param_2[0x14] + (uVar5 ^ uVar10 + uVar4);
  uVar10 = (ulong)param_2[0x15] * (ulong)uVar12;
  if (uVar10 == 0) {
    uVar12 = (1 - (short)param_2[0x15]) - uVar12;
  }
  else {
    lVar8 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar12 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = uVar7 ^ (ushort)uVar5;
  uVar10 = (ulong)param_2[0x16] * (ulong)uVar6;
  if (uVar10 == 0) {
    sVar13 = (1 - (short)param_2[0x16]) - uVar6;
  }
  else {
    lVar8 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    sVar13 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = (uVar12 ^ uVar2) + sVar13;
  uVar10 = (ulong)param_2[0x17] * (ulong)uVar6;
  if (uVar10 == 0) {
    uVar10 = (ulong)((1 - param_2[0x17]) - (uint)uVar6);
  }
  else {
    uVar10 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar10 = uVar10 - (uVar10 >> 0x10);
  }
  uVar6 = sVar13 + (ushort)uVar10;
  uVar7 = uVar7 ^ (ushort)uVar10;
  uVar12 = uVar12 ^ uVar6;
  uVar4 = (ulong)param_2[0x18] * (ulong)uVar7;
  if (uVar4 == 0) {
    uVar7 = (1 - (short)param_2[0x18]) - uVar7;
  }
  else {
    lVar8 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar5 = (ulong)param_2[0x19] + (uVar10 ^ uVar5);
  uVar2 = (short)param_2[0x1a] + (uVar2 ^ uVar6);
  uVar10 = (ulong)param_2[0x1b] * (ulong)uVar12;
  if (uVar10 == 0) {
    uVar12 = (1 - (short)param_2[0x1b]) - uVar12;
  }
  else {
    lVar8 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar12 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = uVar7 ^ uVar2;
  uVar10 = (ulong)param_2[0x1c] * (ulong)uVar6;
  if (uVar10 == 0) {
    uVar10 = (ulong)((1 - param_2[0x1c]) - (uint)uVar6);
  }
  else {
    uVar10 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar10 = uVar10 - (uVar10 >> 0x10);
  }
  uVar6 = (uVar12 ^ (ushort)uVar5) + (short)uVar10;
  uVar4 = (ulong)param_2[0x1d] * (ulong)uVar6;
  if (uVar4 == 0) {
    uVar4 = (ulong)((1 - param_2[0x1d]) - (uint)uVar6);
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar4 = uVar4 - (uVar4 >> 0x10);
  }
  uVar7 = uVar7 ^ (ushort)uVar4;
  uVar12 = uVar12 ^ (ushort)(uVar10 + uVar4);
  uVar9 = (ulong)param_2[0x1e] * (ulong)uVar7;
  if (uVar9 == 0) {
    uVar7 = (1 - (short)param_2[0x1e]) - uVar7;
  }
  else {
    lVar8 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar2 = (short)param_2[0x1f] + ((ushort)uVar4 ^ uVar2);
  uVar5 = (ulong)param_2[0x20] + (uVar5 ^ uVar10 + uVar4);
  uVar10 = (ulong)param_2[0x21] * (ulong)uVar12;
  if (uVar10 == 0) {
    uVar12 = (1 - (short)param_2[0x21]) - uVar12;
  }
  else {
    lVar8 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar12 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = uVar7 ^ (ushort)uVar5;
  uVar10 = (ulong)param_2[0x22] * (ulong)uVar6;
  if (uVar10 == 0) {
    sVar13 = (1 - (short)param_2[0x22]) - uVar6;
  }
  else {
    lVar8 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    sVar13 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = (uVar12 ^ uVar2) + sVar13;
  uVar10 = (ulong)param_2[0x23] * (ulong)uVar6;
  if (uVar10 == 0) {
    uVar10 = (ulong)((1 - param_2[0x23]) - (uint)uVar6);
  }
  else {
    uVar10 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar10 = uVar10 - (uVar10 >> 0x10);
  }
  uVar6 = sVar13 + (ushort)uVar10;
  uVar7 = uVar7 ^ (ushort)uVar10;
  uVar12 = uVar12 ^ uVar6;
  uVar4 = (ulong)param_2[0x24] * (ulong)uVar7;
  if (uVar4 == 0) {
    uVar7 = (1 - (short)param_2[0x24]) - uVar7;
  }
  else {
    lVar8 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar5 = (ulong)param_2[0x25] + (uVar10 ^ uVar5);
  uVar2 = (short)param_2[0x26] + (uVar2 ^ uVar6);
  uVar10 = (ulong)param_2[0x27] * (ulong)uVar12;
  if (uVar10 == 0) {
    uVar12 = (1 - (short)param_2[0x27]) - uVar12;
  }
  else {
    lVar8 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar12 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar6 = uVar7 ^ uVar2;
  uVar10 = (ulong)param_2[0x28] * (ulong)uVar6;
  if (uVar10 == 0) {
    uVar10 = (ulong)((1 - param_2[0x28]) - (uint)uVar6);
  }
  else {
    uVar10 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar10 = uVar10 - (uVar10 >> 0x10);
  }
  uVar6 = (uVar12 ^ (ushort)uVar5) + (short)uVar10;
  uVar4 = (ulong)param_2[0x29] * (ulong)uVar6;
  if (uVar4 == 0) {
    uVar4 = (ulong)((1 - param_2[0x29]) - (uint)uVar6);
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar4 = uVar4 - (uVar4 >> 0x10);
  }
  uVar7 = uVar7 ^ (ushort)uVar4;
  uVar12 = uVar12 ^ (ushort)(uVar10 + uVar4);
  uVar9 = (ulong)param_2[0x2a] * (ulong)uVar7;
  if (uVar9 == 0) {
    uVar7 = (1 - (short)param_2[0x2a]) - uVar7;
  }
  else {
    lVar8 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  uVar2 = (short)param_2[0x2b] + ((ushort)uVar4 ^ uVar2);
  uVar5 = (ulong)param_2[0x2c] + (uVar5 ^ uVar10 + uVar4);
  uVar10 = (ulong)param_2[0x2d] * (ulong)uVar12;
  if (uVar10 == 0) {
    uVar10 = (ulong)((1 - param_2[0x2d]) - (uint)uVar12);
  }
  else {
    uVar10 = (uVar10 & 0xffff) - (uVar10 >> 0x10);
    uVar10 = uVar10 - (uVar10 >> 0x10);
  }
  uVar12 = uVar7 ^ (ushort)uVar5;
  uVar4 = (ulong)param_2[0x2e] * (ulong)uVar12;
  if (uVar4 == 0) {
    uVar4 = (ulong)((1 - param_2[0x2e]) - (uint)uVar12);
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar4 = uVar4 - (uVar4 >> 0x10);
  }
  uVar12 = ((ushort)uVar10 ^ uVar2) + (short)uVar4;
  uVar9 = (ulong)param_2[0x2f] * (ulong)uVar12;
  if (uVar9 == 0) {
    uVar9 = (ulong)((1 - param_2[0x2f]) - (uint)uVar12);
  }
  else {
    uVar9 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    uVar9 = uVar9 - (uVar9 >> 0x10);
  }
  uVar7 = uVar7 ^ (ushort)uVar9;
  uVar10 = uVar10 ^ uVar4 + uVar9;
  uVar11 = (ulong)param_2[0x30] * (ulong)uVar7;
  if (uVar11 == 0) {
    uVar11 = (ulong)((1 - param_2[0x30]) - (uint)uVar7);
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar11 = uVar11 - (uVar11 >> 0x10);
  }
  uVar1 = param_2[0x31];
  uVar3 = (ulong)param_2[0x33] * (uVar10 & 0xffff);
  if (uVar3 == 0) {
    uVar7 = (1 - (short)param_2[0x33]) - (short)uVar10;
  }
  else {
    lVar8 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar7 = (short)lVar8 - (short)((ulong)lVar8 >> 0x10);
  }
  param_1[1] = (ulong)uVar7 | ((ulong)param_2[0x32] + (uVar9 ^ uVar5)) * 0x10000 & 0xffffffff;
  *param_1 = (uVar11 & 0xffff) << 0x10 |
             (ulong)(ushort)((short)uVar1 + (uVar2 ^ (ushort)(uVar4 + uVar9)));
  return;
}



void IDEA_cbc_encrypt(uint *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                     int param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  ulong *local_98;
  ulong *local_78;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar8 = param_3 - 8;
  uVar3 = (uint)*param_5;
  uVar2 = *(uint *)((long)param_5 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = 0;
  uVar16 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  uVar11 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  if (param_6 != 0) {
    local_78 = param_2;
    if (-1 < (long)uVar8) {
      uVar15 = uVar8 >> 3;
      local_78 = param_2 + uVar15 + 1;
      local_58 = uVar16;
      local_50 = uVar11;
      puVar14 = param_1;
      do {
        uVar3 = *puVar14;
        uVar2 = puVar14[1];
        puVar13 = param_2 + 1;
        puVar14 = puVar14 + 2;
        local_58 = local_58 ^
                   (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
        ;
        local_50 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                   ^ local_50;
        IDEA_encrypt(&local_58,param_4);
        *param_2 = (((((((local_50 & 0xff) << 8 | local_50 >> 8 & 0xff) << 8 |
                       local_50 >> 0x10 & 0xff) << 8 | local_50 >> 0x18 & 0xff) << 8 |
                     local_58 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 >> 0x10 & 0xff)
                   << 8 | local_58 >> 0x18 & 0xff;
        param_2 = puVar13;
      } while (puVar13 != local_78);
      lVar6 = param_3 - 0x10;
      param_1 = param_1 + uVar15 * 2 + 2;
      param_3 = uVar15 * -8 + uVar8;
      uVar8 = lVar6 + uVar15 * -8;
      uVar15 = local_50;
      uVar11 = local_50;
      uVar16 = local_58;
    }
    uVar9 = uVar11;
    uVar7 = uVar16;
    if (uVar8 == 0xfffffffffffffff8) goto LAB_00100e90;
    lVar6 = (long)param_1 + uVar8 + 8;
    if (param_3 < 8) {
      uVar15 = (long)&switchD_00100c57::switchdataD_00101108 +
               (long)(int)(&switchD_00100c57::switchdataD_00101108)[param_3];
      switch(param_3) {
      case 0:
        goto switchD_00100c57_caseD_0;
      case 1:
        uVar15 = 0;
        goto LAB_00100f91;
      case 2:
        uVar15 = 0;
        lVar12 = lVar6;
        goto LAB_00100f82;
      case 3:
        uVar15 = 0;
        goto LAB_00100f73;
      case 4:
        goto LAB_00100f6b;
      case 5:
        uVar8 = 0;
        goto LAB_00100f59;
      case 6:
        uVar8 = 0;
        break;
      case 7:
        pbVar1 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar8 = (ulong)*pbVar1 << 8;
      }
      pbVar1 = (byte *)(lVar6 + -1);
      lVar6 = lVar6 + -1;
      uVar8 = (ulong)*pbVar1 << 0x10 | uVar8;
LAB_00100f59:
      uVar11 = uVar11 ^ ((ulong)*(byte *)(lVar6 + -1) << 0x18 | uVar8);
      lVar6 = lVar6 + -1;
LAB_00100f6b:
      uVar15 = (ulong)*(byte *)(lVar6 + -1);
      lVar6 = lVar6 + -1;
LAB_00100f73:
      uVar15 = (ulong)*(byte *)(lVar6 + -1) << 8 | uVar15;
      lVar12 = lVar6 + -1;
LAB_00100f82:
      lVar6 = lVar12 + -1;
      uVar15 = (ulong)*(byte *)(lVar12 + -1) << 0x10 | uVar15;
LAB_00100f91:
      uVar16 = uVar16 ^ ((ulong)*(byte *)(lVar6 + -1) << 0x18 | uVar15);
    }
switchD_00100c57_caseD_0:
    local_58 = uVar16;
    local_50 = uVar11;
    IDEA_encrypt(&local_58,param_4,uVar15);
    uVar7 = local_58 & 0xffffffff;
    uVar8 = local_58 >> 8 & 0xffffffff;
    uVar15 = local_58 >> 0x10 & 0xffffffff;
    uVar9 = local_50 & 0xffffffff;
    uVar11 = local_58 >> 0x18 & 0xffffffff;
    bVar4 = (byte)(local_50 >> 8);
    uVar17 = local_50 >> 0x10 & 0xffffffff;
    uVar16 = local_50 >> 0x18 & 0xffffffff;
    *local_78 = (((((((local_50 & 0xff) << 8 | local_50 >> 8 & 0xff) << 8 | local_50 >> 0x10 & 0xff)
                    << 8 | local_50 >> 0x18 & 0xff) << 8 | local_58 & 0xff) << 8 |
                 local_58 >> 8 & 0xff) << 8 | local_58 >> 0x10 & 0xff) << 8 |
                local_58 >> 0x18 & 0xff;
LAB_00100ebb:
    *param_5 = (((((((uVar9 & 0xff) << 8 | (ulong)bVar4) << 8 | uVar17 & 0xff) << 8 | uVar16 & 0xff)
                  << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff) << 8 | uVar15 & 0xff) << 8 |
               uVar11 & 0xff;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_98 = param_2;
  if (7 < (long)param_3) {
    uVar17 = uVar8 >> 3;
    uVar15 = uVar17 * 8 + 8;
    local_98 = param_2 + uVar17 + 1;
    puVar14 = param_1;
    uVar9 = uVar16;
    uVar7 = uVar11;
    do {
      uVar3 = *puVar14;
      puVar13 = param_2 + 1;
      uVar16 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18);
      uVar3 = puVar14[1];
      uVar11 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18);
      local_58 = uVar16;
      local_50 = uVar11;
      IDEA_encrypt(&local_58,param_4);
      uVar7 = local_50 ^ uVar7;
      uVar9 = local_58 ^ uVar9;
      *param_2 = (((((((uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 | uVar7 >> 0x10 & 0xff) << 8 |
                    uVar7 >> 0x18 & 0xff) << 8 | uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff) << 8 |
                 uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18 & 0xff;
      puVar14 = puVar14 + 2;
      param_2 = puVar13;
      uVar9 = uVar16;
      uVar7 = uVar11;
    } while (puVar13 != local_98);
    lVar6 = param_3 - 0x10;
    param_1 = param_1 + uVar17 * 2 + 2;
    param_3 = uVar17 * -8 + uVar8;
    uVar8 = lVar6 + uVar17 * -8;
  }
  uVar9 = uVar11;
  uVar7 = uVar16;
  if (uVar8 == 0xfffffffffffffff8) {
LAB_00100e90:
    uVar11 = uVar7 >> 0x18;
    uVar8 = uVar7 >> 8 & 0xff;
    uVar15 = uVar7 >> 0x10;
    uVar16 = uVar9 >> 0x18;
    bVar4 = (byte)(uVar9 >> 8);
    uVar17 = uVar9 >> 0x10;
    goto LAB_00100ebb;
  }
  uVar3 = *param_1;
  uVar2 = param_1[1];
  uVar7 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  uVar9 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  local_58 = uVar7;
  local_50 = uVar9;
  IDEA_encrypt(&local_58,param_4,uVar15);
  uVar16 = uVar16 ^ local_58;
  uVar11 = uVar11 ^ local_50;
  puVar5 = (undefined1 *)((long)local_98 + uVar8 + 8);
  switch(param_3) {
  default:
switchD_00100e40_caseD_0:
    goto LAB_00100e90;
  case 1:
    goto switchD_00100e40_caseD_1;
  case 2:
    puVar10 = puVar5;
    goto LAB_00100e74;
  case 3:
    goto switchD_00100e40_caseD_3;
  case 4:
    break;
  case 7:
    puVar5[-1] = (char)(uVar11 >> 8);
    puVar5 = puVar5 + -1;
  case 6:
    puVar5 = puVar5 + -1;
    *puVar5 = (char)(uVar11 >> 0x10);
  case 5:
    puVar5[-1] = (char)(uVar11 >> 0x18);
    puVar5 = puVar5 + -1;
  }
  puVar5[-1] = (char)uVar16;
  puVar5 = puVar5 + -1;
switchD_00100e40_caseD_3:
  puVar5[-1] = (char)(uVar16 >> 8);
  puVar10 = puVar5 + -1;
LAB_00100e74:
  puVar5 = puVar10 + -1;
  puVar10[-1] = (char)(uVar16 >> 0x10);
switchD_00100e40_caseD_1:
  puVar5[-1] = (char)(uVar16 >> 0x18);
  goto switchD_00100e40_caseD_0;
}



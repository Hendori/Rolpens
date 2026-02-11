
undefined8 poly_encode_6_bits(undefined4 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  byte *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = WPACKET_allocate_bytes(param_2,0xc0,&local_18);
  if ((int)uVar5 != 0) {
    puVar6 = param_1;
    do {
      uVar2 = puVar6[1];
      puVar7 = puVar6 + 4;
      uVar3 = puVar6[2];
      iVar4 = puVar6[3];
      *local_18 = (byte)(uVar2 << 6) | (byte)*puVar6;
      pbVar1 = local_18 + 2;
      local_18[1] = (byte)(uVar2 >> 2) | (byte)(uVar3 << 4);
      local_18 = local_18 + 3;
      *pbVar1 = (byte)(iVar4 << 2) | (byte)(uVar3 >> 4);
      puVar6 = puVar7;
    } while (puVar7 != param_1 + 0x100);
    uVar5 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 poly_encode_4_bits(undefined4 *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  byte *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = WPACKET_allocate_bytes(param_2,0x80,&local_18);
  if ((int)uVar5 != 0) {
    puVar3 = param_1 + 0x100;
    do {
      uVar4 = *param_1;
      pcVar1 = (char *)(param_1 + 1);
      param_1 = param_1 + 2;
      pbVar2 = local_18 + 1;
      *local_18 = *pcVar1 << 4 | (byte)uVar4;
      local_18 = pbVar2;
    } while (puVar3 != param_1);
    uVar5 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 poly_encode_signed_4(int *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  long in_FS_OFFSET;
  byte *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = WPACKET_allocate_bytes(param_2,0x80,&local_38);
  if ((int)uVar3 != 0) {
    piVar7 = param_1;
    do {
      piVar8 = piVar7 + 2;
      iVar6 = 0x7fe005 - *piVar7;
      iVar9 = 4 - *piVar7;
      bVar2 = (byte)((uint)iVar6 >> 0x18);
      uVar4 = 0x7fe005 - piVar7[1];
      uVar10 = 4 - piVar7[1];
      bVar2 = (char)((bVar2 | (byte)((uint)iVar9 >> 0x18)) ^ bVar2) >> 7;
      uVar5 = (int)((uVar4 ^ 0x7fe001 | uVar10 ^ 0x7fe001) ^ uVar4) >> 0x1f;
      pbVar1 = local_38 + 1;
      *local_38 = (byte)iVar6 & bVar2 | (byte)iVar9 & ~bVar2 |
                  (byte)((uVar4 & uVar5 | uVar10 & ~uVar5) << 4);
      piVar7 = piVar8;
      local_38 = pbVar1;
    } while (piVar8 != param_1 + 0x100);
    uVar3 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 poly_encode_signed_2(int *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long in_FS_OFFSET;
  undefined2 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = WPACKET_allocate_bytes(param_2,0x60,&local_28);
  if ((int)uVar9 != 0) {
    piVar3 = param_1 + 0x100;
    do {
      uVar18 = 0x7fe003 - *param_1;
      uVar19 = 2 - *param_1;
      uVar17 = 0x7fe003 - param_1[1];
      uVar16 = 2 - param_1[1];
      uVar4 = (int)((uVar18 ^ 0x7fe001 | uVar19 ^ 0x7fe001) ^ uVar18) >> 0x1f;
      uVar10 = (int)((uVar17 ^ 0x7fe001 | uVar16 ^ 0x7fe001) ^ uVar17) >> 0x1f;
      uVar11 = 0x7fe003 - param_1[2];
      uVar20 = 2 - param_1[2];
      uVar5 = (int)((uVar11 ^ 0x7fe001 | uVar20 ^ 0x7fe001) ^ uVar11) >> 0x1f;
      uVar12 = 0x7fe003 - param_1[3];
      uVar21 = 2 - param_1[3];
      uVar6 = (int)((uVar12 ^ 0x7fe001 | uVar21 ^ 0x7fe001) ^ uVar12) >> 0x1f;
      uVar13 = 0x7fe003 - param_1[4];
      uVar22 = 2 - param_1[4];
      uVar7 = (int)((uVar13 ^ 0x7fe001 | uVar22 ^ 0x7fe001) ^ uVar13) >> 0x1f;
      uVar14 = 0x7fe003 - param_1[5];
      uVar23 = 2 - param_1[5];
      uVar8 = (int)((uVar14 ^ 0x7fe001 | uVar23 ^ 0x7fe001) ^ uVar14) >> 0x1f;
      uVar15 = 0x7fe003 - param_1[6];
      uVar24 = 2 - param_1[6];
      uVar7 = (uVar8 & uVar14 | uVar23 & ~uVar8) << 0xf |
              (uVar7 & uVar13 | uVar22 & ~uVar7) << 0xc |
              (uVar6 & uVar12 | uVar21 & ~uVar6) << 9 |
              (uVar5 & uVar11 | uVar20 & ~uVar5) << 6 |
              uVar18 & uVar4 | uVar19 & ~uVar4 | (uVar17 & uVar10 | uVar16 & ~uVar10) << 3;
      uVar4 = (int)((uVar15 ^ 0x7fe001 | uVar24 ^ 0x7fe001) ^ uVar15) >> 0x1f;
      piVar1 = param_1 + 7;
      param_1 = param_1 + 8;
      uVar5 = 0x7fe003 - *piVar1;
      uVar8 = 2 - *piVar1;
      uVar6 = (int)((uVar5 ^ 0x7fe001 | uVar8 ^ 0x7fe001) ^ uVar5) >> 0x1f;
      puVar2 = (undefined2 *)((long)local_28 + 3);
      *local_28 = (short)uVar7;
      *(byte *)(local_28 + 1) =
           (byte)(((uVar5 & uVar6 | uVar8 & ~uVar6) << 0x15) >> 0x10) |
           (byte)(((uVar4 & uVar15 | uVar24 & ~uVar4) << 0x12) >> 0x10) | (byte)(uVar7 >> 0x10);
      local_28 = puVar2;
    } while (piVar3 != param_1);
    uVar9 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 poly_encode_signed_two_to_power_17(int *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  long in_FS_OFFSET;
  uint *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar12 = param_1;
  do {
    uVar2 = WPACKET_allocate_bytes(param_2,9,&local_48);
    if ((int)uVar2 == 0) goto LAB_0010062b;
    uVar5 = 0x81e001 - *piVar12;
    uVar7 = 0x20000 - *piVar12;
    uVar3 = 0x81e001 - piVar12[1];
    uVar8 = 0x20000 - piVar12[1];
    uVar1 = (int)((uVar5 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar5) >> 0x1f;
    uVar4 = (int)((uVar3 ^ 0x7fe001 | uVar8 ^ 0x7fe001) ^ uVar3) >> 0x1f;
    uVar3 = uVar3 & uVar4 | uVar8 & ~uVar4;
    uVar10 = 0x81e001 - piVar12[2];
    uVar9 = 0x20000 - piVar12[2];
    uVar4 = (int)((uVar10 ^ 0x7fe001 | uVar9 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    piVar11 = piVar12 + 4;
    uVar13 = 0x81e001 - piVar12[3];
    uVar6 = 0x20000 - piVar12[3];
    uVar8 = (int)((uVar13 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar13) >> 0x1f;
    uVar8 = uVar13 & uVar8 | uVar6 & ~uVar8;
    *local_48 = uVar3 << 0x12 | uVar5 & uVar1 | uVar7 & ~uVar1;
    *(char *)(local_48 + 2) = (char)(uVar8 >> 10);
    local_48[1] = uVar8 << 0x16 | (uVar10 & uVar4 | uVar9 & ~uVar4) << 4 | uVar3 >> 0xe;
    piVar12 = piVar11;
  } while (param_1 + 0x100 != piVar11);
  uVar2 = 1;
LAB_0010062b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 poly_encode_signed_two_to_power_19(int *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  long in_FS_OFFSET;
  uint *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar12 = param_1;
  do {
    uVar2 = WPACKET_allocate_bytes(param_2,10,&local_48);
    if ((int)uVar2 == 0) goto LAB_001007cc;
    uVar5 = 0x87e001 - *piVar12;
    uVar7 = 0x80000 - *piVar12;
    uVar3 = 0x87e001 - piVar12[1];
    uVar8 = 0x80000 - piVar12[1];
    uVar1 = (int)((uVar5 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar5) >> 0x1f;
    uVar4 = (int)((uVar3 ^ 0x7fe001 | uVar8 ^ 0x7fe001) ^ uVar3) >> 0x1f;
    uVar3 = uVar3 & uVar4 | uVar8 & ~uVar4;
    uVar10 = 0x87e001 - piVar12[2];
    uVar9 = 0x80000 - piVar12[2];
    uVar4 = (int)((uVar10 ^ 0x7fe001 | uVar9 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    piVar11 = piVar12 + 4;
    uVar13 = 0x87e001 - piVar12[3];
    uVar6 = 0x80000 - piVar12[3];
    uVar8 = (int)((uVar13 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar13) >> 0x1f;
    uVar8 = uVar13 & uVar8 | uVar6 & ~uVar8;
    *local_48 = uVar3 << 0x14 | uVar5 & uVar1 | uVar7 & ~uVar1;
    *(short *)(local_48 + 2) = (short)(uVar8 >> 4);
    local_48[1] = uVar8 << 0x1c | (uVar10 & uVar4 | uVar9 & ~uVar4) << 8 | uVar3 >> 0xc;
    piVar12 = piVar11;
  } while (param_1 + 0x100 != piVar11);
  uVar2 = 1;
LAB_001007cc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 poly_decode_signed_two_to_power_17(uint *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar8 = param_2[1];
  puVar1 = param_1 + 0x100;
  if (uVar8 < 9) {
    return 0;
  }
  do {
    puVar2 = (uint *)*param_2;
    uVar8 = uVar8 - 9;
    param_2[1] = uVar8;
    *param_2 = (long)puVar2 + 9;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar3 = *puVar2 & 0x3ffff;
    uVar9 = 0x81e001 - uVar3;
    uVar3 = 0x20000 - uVar3;
    uVar4 = (int)((uVar9 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar9) >> 0x1f;
    uVar5 = (uVar6 & 0xf) << 0xe | *puVar2 >> 0x12;
    *param_1 = uVar9 & uVar4 | uVar3 & ~uVar4;
    uVar4 = 0x20000 - uVar5;
    uVar5 = 0x81e001 - uVar5;
    uVar3 = (int)((uVar5 ^ 0x7fe001 | uVar4 ^ 0x7fe001) ^ uVar5) >> 0x1f;
    param_1[1] = uVar5 & uVar3 | uVar4 & ~uVar3;
    uVar3 = uVar6 >> 4 & 0x3ffff;
    uVar5 = 0x81e001 - uVar3;
    uVar3 = 0x20000 - uVar3;
    uVar4 = (uint)(byte)uVar7 << 10 | uVar6 >> 0x16;
    uVar6 = (int)((uVar5 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar5) >> 0x1f;
    param_1[2] = uVar5 & uVar6 | uVar3 & ~uVar6;
    uVar7 = 0x20000 - uVar4;
    uVar4 = 0x81e001 - uVar4;
    uVar6 = (int)((uVar4 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar4) >> 0x1f;
    param_1[3] = uVar4 & uVar6 | uVar7 & ~uVar6;
    if (puVar1 == param_1 + 4) {
      return 1;
    }
    param_1 = param_1 + 4;
  } while (8 < uVar8);
  return 0;
}



undefined8 poly_decode_signed_two_to_power_19(uint *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar8 = param_2[1];
  puVar1 = param_1 + 0x100;
  if (uVar8 < 10) {
    return 0;
  }
  do {
    puVar2 = (uint *)*param_2;
    uVar8 = uVar8 - 10;
    param_2[1] = uVar8;
    *param_2 = (long)puVar2 + 10;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar3 = *puVar2 & 0xfffff;
    uVar9 = 0x87e001 - uVar3;
    uVar3 = 0x80000 - uVar3;
    uVar4 = (int)((uVar9 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar9) >> 0x1f;
    uVar5 = (uVar6 & 0xff) << 0xc | *puVar2 >> 0x14;
    *param_1 = uVar9 & uVar4 | uVar3 & ~uVar4;
    uVar4 = 0x80000 - uVar5;
    uVar5 = 0x87e001 - uVar5;
    uVar3 = (int)((uVar5 ^ 0x7fe001 | uVar4 ^ 0x7fe001) ^ uVar5) >> 0x1f;
    param_1[1] = uVar5 & uVar3 | uVar4 & ~uVar3;
    uVar3 = uVar6 >> 8 & 0xfffff;
    uVar5 = 0x87e001 - uVar3;
    uVar3 = 0x80000 - uVar3;
    uVar4 = (uint)(ushort)uVar7 << 4 | uVar6 >> 0x1c;
    uVar6 = (int)((uVar5 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar5) >> 0x1f;
    param_1[2] = uVar5 & uVar6 | uVar3 & ~uVar6;
    uVar7 = 0x80000 - uVar4;
    uVar4 = 0x87e001 - uVar4;
    uVar6 = (int)((uVar4 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar4) >> 0x1f;
    param_1[3] = uVar4 & uVar6 | uVar7 & ~uVar6;
    if (param_1 + 4 == puVar1) {
      return 1;
    }
    param_1 = param_1 + 4;
  } while (9 < uVar8);
  return 0;
}



undefined8 poly_decode_signed_4(uint *param_1,long *param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = param_2[1];
  uVar1 = uVar8 - 0x80;
  uVar9 = (ulong)((uint)uVar8 & 3);
  if (uVar8 == uVar9) {
    return 0;
  }
  while( true ) {
    puVar2 = (uint *)*param_2;
    uVar8 = uVar8 - 4;
    param_2[1] = uVar8;
    *param_2 = (long)(puVar2 + 1);
    uVar4 = *puVar2;
    uVar5 = uVar4 & 0x88888888;
    if (((uVar5 >> 1 | uVar5 >> 2 | uVar5 >> 3) & uVar4) != 0) {
      return 0;
    }
    uVar6 = 0x7fe005 - (uVar4 & 0xf);
    uVar7 = 4 - (uVar4 & 0xf);
    uVar5 = (int)((uVar6 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar6) >> 0x1f;
    uVar3 = uVar4 >> 4 & 0xf;
    *param_1 = uVar6 & uVar5 | uVar7 & ~uVar5;
    uVar7 = 0x7fe005 - uVar3;
    uVar3 = 4 - uVar3;
    uVar5 = (int)((uVar7 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar7) >> 0x1f;
    uVar6 = uVar4 >> 8 & 0xf;
    param_1[1] = uVar7 & uVar5 | uVar3 & ~uVar5;
    uVar7 = 0x7fe005 - uVar6;
    uVar6 = 4 - uVar6;
    uVar5 = (int)((uVar7 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar7) >> 0x1f;
    uVar3 = uVar4 >> 0xc & 0xf;
    param_1[2] = uVar7 & uVar5 | uVar6 & ~uVar5;
    uVar7 = 0x7fe005 - uVar3;
    uVar3 = 4 - uVar3;
    uVar5 = (int)((uVar7 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar7) >> 0x1f;
    uVar6 = uVar4 >> 0x10 & 0xf;
    param_1[3] = uVar7 & uVar5 | uVar3 & ~uVar5;
    uVar7 = 0x7fe005 - uVar6;
    uVar6 = 4 - uVar6;
    uVar5 = (int)((uVar7 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar7) >> 0x1f;
    uVar3 = uVar4 >> 0x14 & 0xf;
    param_1[4] = uVar7 & uVar5 | uVar6 & ~uVar5;
    uVar7 = 0x7fe005 - uVar3;
    uVar3 = 4 - uVar3;
    uVar5 = (int)((uVar7 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar7) >> 0x1f;
    uVar6 = uVar4 >> 0x18 & 0xf;
    param_1[5] = uVar7 & uVar5 | uVar3 & ~uVar5;
    uVar3 = 0x7fe005 - uVar6;
    uVar6 = 4 - uVar6;
    uVar5 = (int)((uVar3 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar3) >> 0x1f;
    param_1[6] = uVar3 & uVar5 | uVar6 & ~uVar5;
    uVar3 = 4 - (uVar4 >> 0x1c);
    uVar5 = 0x7fe005 - (uVar4 >> 0x1c);
    uVar4 = (int)((uVar5 ^ 0x7fe001 | uVar3 ^ 0x7fe001) ^ uVar5) >> 0x1f;
    param_1[7] = uVar5 & uVar4 | uVar3 & ~uVar4;
    if (uVar8 == uVar1) break;
    param_1 = param_1 + 8;
    if (uVar8 == uVar9) {
      return 0;
    }
  }
  return 1;
}



undefined8 poly_decode_signed_2(uint *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  uint3 *puVar3;
  uint3 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  
  uVar7 = param_2[1];
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = uVar7 - 0x60;
  do {
    if (uVar7 < 3) {
LAB_00101028:
      uVar5 = 0;
      goto LAB_0010102a;
    }
    puVar3 = (uint3 *)*param_2;
    uVar7 = uVar7 - 3;
    param_2[1] = uVar7;
    *param_2 = (long)puVar3 + 3;
    uVar4 = *puVar3;
    if ((((uVar4 & 0x924924) >> 2 | (uVar4 & 0x924924) >> 1) & (uint)uVar4) != 0) goto LAB_00101028;
    uVar10 = 0x7fe003 - (uVar4 & 7);
    uVar6 = 2 - (uVar4 & 7);
    uVar8 = (int)((uVar10 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    uVar9 = (uVar4 & 0x38) >> 3;
    *param_1 = uVar10 & uVar8 | uVar6 & ~uVar8;
    uVar10 = 0x7fe003 - uVar9;
    uVar9 = 2 - uVar9;
    uVar8 = (int)((uVar10 ^ 0x7fe001 | uVar9 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    uVar6 = (uVar4 & 0x1c0) >> 6;
    param_1[1] = uVar10 & uVar8 | uVar9 & ~uVar8;
    uVar10 = 0x7fe003 - uVar6;
    uVar6 = 2 - uVar6;
    uVar8 = (int)((uVar10 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    uVar9 = (uVar4 & 0xe00) >> 9;
    param_1[2] = uVar10 & uVar8 | uVar6 & ~uVar8;
    uVar10 = 0x7fe003 - uVar9;
    uVar9 = 2 - uVar9;
    uVar8 = (int)((uVar10 ^ 0x7fe001 | uVar9 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    uVar6 = (uVar4 & 0x7000) >> 0xc;
    param_1[3] = uVar10 & uVar8 | uVar9 & ~uVar8;
    uVar10 = 0x7fe003 - uVar6;
    uVar6 = 2 - uVar6;
    uVar8 = (int)((uVar10 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    uVar9 = (uVar4 & 0x38000) >> 0xf;
    param_1[4] = uVar10 & uVar8 | uVar6 & ~uVar8;
    uVar10 = 0x7fe003 - uVar9;
    uVar9 = 2 - uVar9;
    uVar8 = (int)((uVar10 ^ 0x7fe001 | uVar9 ^ 0x7fe001) ^ uVar10) >> 0x1f;
    uVar6 = (uVar4 & 0x1c0000) >> 0x12;
    param_1[5] = uVar10 & uVar8 | uVar9 & ~uVar8;
    uVar8 = 0x7fe003 - uVar6;
    uVar6 = 2 - uVar6;
    uVar9 = (int)((uVar8 ^ 0x7fe001 | uVar6 ^ 0x7fe001) ^ uVar8) >> 0x1f;
    param_1[6] = uVar8 & uVar9 | uVar6 & ~uVar9;
    uVar9 = 0x7fe003 - (uVar4 >> 0x15);
    uVar8 = 2 - (uVar4 >> 0x15);
    uVar6 = (int)((uVar9 ^ 0x7fe001 | uVar8 ^ 0x7fe001) ^ uVar9) >> 0x1f;
    param_1[7] = uVar9 & uVar6 | uVar8 & ~uVar6;
    param_1 = param_1 + 8;
  } while (uVar7 != uVar1);
  uVar5 = 1;
LAB_0010102a:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_ml_dsa_pk_encode(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  void *ptr;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long local_88;
  undefined1 *local_80;
  undefined1 local_78 [56];
  long local_40;
  
  puVar9 = *(undefined4 **)(param_1 + 0xc0);
  lVar6 = *(long *)(param_1 + 200);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  ptr = CRYPTO_malloc((int)lVar7,"crypto/ml_dsa/ml_dsa_encoders.c",0x275);
  if (ptr != (void *)0x0) {
    iVar8 = WPACKET_init_static_len(local_78,ptr,lVar7,0);
    if ((iVar8 != 0) && (iVar8 = WPACKET_memcpy(local_78,param_1 + 0x20,0x20), iVar8 != 0)) {
      if (lVar6 != 0) {
        lVar12 = 0;
        do {
          puVar13 = puVar9 + 0x100;
          iVar8 = WPACKET_allocate_bytes(local_78,0x140,&local_80);
          if (iVar8 == 0) goto LAB_001010d2;
          do {
            uVar2 = *puVar9;
            puVar10 = puVar9 + 4;
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            *local_80 = (char)uVar2;
            local_80[1] = (char)uVar3 * '\x04' | (byte)((uint)uVar2 >> 8);
            local_80[2] = (byte)(uVar3 >> 6) | (byte)(uVar4 << 4);
            puVar1 = local_80 + 4;
            local_80[3] = (byte)(uVar4 >> 4) | (byte)(uVar5 << 6);
            local_80 = local_80 + 5;
            *puVar1 = (char)(uVar5 >> 2);
            puVar9 = puVar10;
          } while (puVar10 != puVar13);
          lVar12 = lVar12 + 1;
          puVar9 = puVar13;
        } while (lVar6 != lVar12);
      }
      iVar8 = WPACKET_get_total_written(local_78,&local_88);
      if ((iVar8 != 0) && (local_88 == lVar7)) {
        CRYPTO_free(*(void **)(param_1 + 0xa0));
        *(void **)(param_1 + 0xa0) = ptr;
        WPACKET_finish(local_78);
        uVar11 = 1;
        goto LAB_001010f1;
      }
    }
LAB_001010d2:
    WPACKET_finish(local_78);
    CRYPTO_free(ptr);
  }
  uVar11 = 0;
LAB_001010f1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



bool ossl_ml_dsa_pk_decode(long param_1,undefined8 *param_2,size_t param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  EVP_MD_CTX *ctx;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    return false;
  }
  if (((*(long *)(param_1 + 0xa0) != 0) || (*(size_t *)(*(long *)(param_1 + 8) + 0x48) != param_3))
     || (iVar5 = ossl_ml_dsa_key_pub_alloc(), iVar5 == 0)) {
    return false;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if ((ctx != (EVP_MD_CTX *)0x0) && (uVar11 = param_3 - 0x20, uVar11 < 0x7fffffffffffffe0)) {
    uVar3 = param_2[1];
    lVar6 = *(long *)(param_1 + 200);
    puVar8 = (uint *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x20) = *param_2;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x30) = param_2[2];
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    if (lVar6 != 0) {
      lVar12 = 0;
      puVar2 = *(ulong **)(param_1 + 0xc0);
      do {
        puVar7 = puVar8;
        puVar9 = puVar2;
        do {
          if (uVar11 < 5) goto LAB_001013d0;
          uVar1 = *puVar7;
          puVar10 = puVar9 + 2;
          puVar8 = (uint *)((long)puVar7 + 5);
          uVar11 = uVar11 - 5;
          uVar4 = puVar7[1];
          *puVar9 = CONCAT44(uVar1 >> 10,uVar1) & 0x3ff000003ff;
          puVar9[1] = CONCAT44(uVar1 >> 0x1e | (uint)(byte)uVar4 << 2,uVar1 >> 0x14) &
                      0xffffffff000003ff;
          puVar7 = puVar8;
          puVar9 = puVar10;
        } while (puVar10 != puVar2 + 0x80);
        lVar12 = lVar12 + 1;
        puVar2 = puVar2 + 0x80;
      } while (lVar6 != lVar12);
    }
    iVar5 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
    if (((iVar5 == 1) && (iVar5 = EVP_DigestUpdate(ctx,param_2,param_3), iVar5 == 1)) &&
       (iVar5 = EVP_DigestSqueeze(ctx,param_1 + 0x40,0x40), iVar5 == 1)) {
      lVar6 = CRYPTO_memdup(param_2,param_3,"crypto/ml_dsa/ml_dsa_encoders.c",0x2b4);
      bVar13 = lVar6 != 0;
      *(long *)(param_1 + 0xa0) = lVar6;
      goto LAB_001013d2;
    }
  }
LAB_001013d0:
  bVar13 = false;
LAB_001013d2:
  EVP_MD_CTX_free(ctx);
  return bVar13;
}



undefined8 ossl_ml_dsa_sk_encode(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  int *piVar30;
  code *pcVar31;
  int *piVar32;
  int *piVar33;
  uint uVar34;
  long in_FS_OFFSET;
  long local_88;
  ulong *local_80;
  undefined1 local_78 [56];
  long local_40;
  
  lVar29 = *(long *)(param_1 + 8);
  piVar30 = *(int **)(param_1 + 0xd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  lVar1 = *(long *)(lVar29 + 0x20);
  lVar2 = *(long *)(lVar29 + 0x28);
  lVar3 = *(long *)(lVar29 + 0x40);
  pvVar9 = CRYPTO_malloc((int)lVar3,"crypto/ml_dsa/ml_dsa_encoders.c",0x2cc);
  if (pvVar9 != (void *)0x0) {
    pcVar31 = poly_encode_signed_2;
    if (*(int *)(lVar29 + 0x30) == 4) {
      pcVar31 = poly_encode_signed_4;
    }
    iVar4 = WPACKET_init_static_len(local_78,pvVar9,lVar3,0);
    if ((((iVar4 != 0) && (iVar4 = WPACKET_memcpy(local_78,param_1 + 0x20,0x20), iVar4 != 0)) &&
        (iVar4 = WPACKET_memcpy(local_78,param_1 + 0x80,0x20), iVar4 != 0)) &&
       (iVar4 = WPACKET_memcpy(local_78,param_1 + 0x40,0x40), iVar4 != 0)) {
      if (lVar2 != 0) {
        lVar29 = 0;
        do {
          iVar4 = (*pcVar31)(lVar29 * 0x400 + *(long *)(param_1 + 0xf0),local_78);
          if (iVar4 == 0) goto LAB_001014df;
          lVar29 = lVar29 + 1;
        } while (lVar2 != lVar29);
      }
      if (lVar1 != 0) {
        lVar29 = 0;
        do {
          iVar4 = (*pcVar31)(lVar29 * 0x400 + *(long *)(param_1 + 0xe0),local_78);
          if (iVar4 == 0) goto LAB_001014df;
          lVar29 = lVar29 + 1;
        } while (lVar1 != lVar29);
        lVar29 = 0;
        do {
          piVar33 = piVar30;
          do {
            iVar4 = WPACKET_allocate_bytes(local_78,0xd,&local_80);
            if (iVar4 == 0) goto LAB_001014df;
            uVar23 = 0x7ff001 - *piVar33;
            uVar13 = 0x1000 - *piVar33;
            uVar5 = (int)((uVar23 ^ 0x7fe001 | uVar13 ^ 0x7fe001) ^ uVar23) >> 0x1f;
            uVar34 = 0x7ff001 - piVar33[1];
            uVar28 = 0x1000 - piVar33[1];
            uVar21 = 0x7ff001 - piVar33[2];
            uVar26 = 0x1000 - piVar33[2];
            uVar14 = (int)((uVar34 ^ 0x7fe001 | uVar28 ^ 0x7fe001) ^ uVar34) >> 0x1f;
            uVar6 = (int)((uVar21 ^ 0x7fe001 | uVar26 ^ 0x7fe001) ^ uVar21) >> 0x1f;
            uVar15 = 0x1000 - piVar33[3];
            uVar22 = 0x7ff001 - piVar33[3];
            uVar7 = (int)((uVar22 ^ 0x7fe001 | uVar15 ^ 0x7fe001) ^ uVar22) >> 0x1f;
            uVar16 = 0x1000 - piVar33[4];
            uVar19 = 0x7ff001 - piVar33[4];
            uVar8 = (int)((uVar19 ^ 0x7fe001 | uVar16 ^ 0x7fe001) ^ uVar19) >> 0x1f;
            uVar20 = uVar19 & uVar8 | uVar16 & ~uVar8;
            piVar32 = piVar33 + 8;
            uVar17 = 0x7ff001 - piVar33[5];
            uVar24 = 0x1000 - piVar33[5];
            uVar8 = (int)((uVar17 ^ 0x7fe001 | uVar24 ^ 0x7fe001) ^ uVar17) >> 0x1f;
            uVar25 = 0x7ff001 - piVar33[6];
            uVar27 = 0x1000 - piVar33[6];
            uVar16 = (int)((uVar25 ^ 0x7fe001 | uVar27 ^ 0x7fe001) ^ uVar25) >> 0x1f;
            uVar19 = 0x7ff001 - piVar33[7];
            uVar12 = 0x1000 - piVar33[7];
            uVar18 = (int)((uVar19 ^ 0x7fe001 | uVar12 ^ 0x7fe001) ^ uVar19) >> 0x1f;
            *local_80 = (ulong)uVar20 << 0x34 |
                        (ulong)(uVar22 & uVar7 | uVar15 & ~uVar7) << 0x27 |
                        (ulong)(uVar14 & uVar34 | uVar28 & ~uVar14) << 0xd |
                        (ulong)(uVar21 & uVar6 | uVar26 & ~uVar6) << 0x1a |
                        (ulong)(uVar23 & uVar5 | uVar13 & ~uVar5);
            uVar10 = (ulong)(uVar19 & uVar18 | uVar12 & ~uVar18) << 0x1b |
                     (ulong)(uVar25 & uVar16 | uVar27 & ~uVar16) << 0xe |
                     (ulong)(uVar17 & uVar8 | uVar24 & ~uVar8) * 2 | (ulong)(uVar20 >> 0xc);
            *(int *)(local_80 + 1) = (int)uVar10;
            *(char *)((long)local_80 + 0xc) = (char)(uVar10 >> 0x20);
            piVar33 = piVar32;
          } while (piVar30 + 0x100 != piVar32);
          lVar29 = lVar29 + 1;
          piVar30 = piVar30 + 0x100;
        } while (lVar1 != lVar29);
      }
      iVar4 = WPACKET_get_total_written(local_78,&local_88);
      if ((iVar4 != 0) && (local_88 == lVar3)) {
        CRYPTO_clear_free(*(undefined8 *)(param_1 + 0xa8),lVar3,"crypto/ml_dsa/ml_dsa_encoders.c",
                          0x2e8);
        *(void **)(param_1 + 0xa8) = pvVar9;
        WPACKET_finish(local_78);
        uVar11 = 1;
        goto LAB_00101502;
      }
    }
LAB_001014df:
    WPACKET_finish(local_78);
    CRYPTO_clear_free(pvVar9,lVar3,"crypto/ml_dsa/ml_dsa_encoders.c",0x2ee);
  }
  uVar11 = 0;
LAB_00101502:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



undefined8 ossl_ml_dsa_sk_decode(long param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  code *pcVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  ulong *local_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  lVar16 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(lVar16 + 0x20);
  lVar4 = *(long *)(lVar16 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0xb0),0x20,"crypto/ml_dsa/ml_dsa_encoders.c",0x305);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if ((((*(ulong **)(param_1 + 0xa8) == (ulong *)0x0) || (*(ulong **)(param_1 + 0xa8) == param_2))
      && (*(long *)(param_1 + 0xa0) == 0)) &&
     ((*(ulong *)(*(long *)(param_1 + 8) + 0x40) == param_3 &&
      (iVar7 = ossl_ml_dsa_key_priv_alloc(param_1), iVar7 != 0)))) {
    pcVar13 = poly_decode_signed_4;
    if (*(int *)(lVar16 + 0x30) != 4) {
      pcVar13 = poly_decode_signed_2;
    }
    if ((-1 < (long)param_3) && (local_98 = param_2, local_90 = param_3, 0x1f < param_3)) {
      uVar5 = param_2[1];
      local_98 = param_2 + 4;
      local_90 = param_3 - 0x20;
      *(ulong *)(param_1 + 0x20) = *param_2;
      *(ulong *)(param_1 + 0x28) = uVar5;
      uVar5 = param_2[3];
      *(ulong *)(param_1 + 0x30) = param_2[2];
      *(ulong *)(param_1 + 0x38) = uVar5;
      if (0x1f < local_90) {
        uVar5 = param_2[5];
        local_98 = param_2 + 8;
        local_90 = param_3 - 0x40;
        *(ulong *)(param_1 + 0x80) = param_2[4];
        *(ulong *)(param_1 + 0x88) = uVar5;
        uVar5 = param_2[7];
        *(ulong *)(param_1 + 0x90) = param_2[6];
        *(ulong *)(param_1 + 0x98) = uVar5;
        if (0x3f < local_90) {
          local_88 = param_2[8];
          uStack_80 = param_2[9];
          local_78 = param_2[10];
          uStack_70 = param_2[0xb];
          local_98 = param_2 + 0x10;
          local_68 = param_2[0xc];
          uStack_60 = param_2[0xd];
          local_58 = param_2[0xe];
          uStack_50 = param_2[0xf];
          local_90 = param_3 - 0x80;
          lVar16 = 0;
          if (lVar4 != 0) {
            do {
              iVar7 = (*pcVar13)(lVar16 * 0x400 + *(long *)(param_1 + 0xf0),&local_98);
              if (iVar7 == 0) goto LAB_0010195b;
              lVar16 = lVar16 + 1;
            } while (lVar4 != lVar16);
          }
          lVar16 = 0;
          if (lVar3 != 0) {
            do {
              iVar7 = (*pcVar13)(lVar16 * 0x400 + *(long *)(param_1 + 0xe0),&local_98);
              if (iVar7 == 0) goto LAB_0010195b;
              lVar16 = lVar16 + 1;
            } while (lVar3 != lVar16);
            lVar16 = 0;
            puVar6 = *(uint **)(param_1 + 0xd0);
            do {
              puVar14 = puVar6;
              do {
                if (local_90 < 0xd) goto LAB_0010195b;
                local_90 = local_90 - 0xd;
                puVar1 = (ulong *)((long)local_98 + 0xd);
                uVar11 = (uint)local_98[1];
                uVar5 = *local_98;
                bVar2 = *(byte *)((long)local_98 + 0xc);
                uVar8 = (uint)uVar5 & 0x1fff;
                uVar17 = 0x7ff001 - uVar8;
                uVar8 = 0x1000 - uVar8;
                uVar9 = (int)((uVar17 ^ 0x7fe001 | uVar8 ^ 0x7fe001) ^ uVar17) >> 0x1f;
                uVar10 = (uint)(uVar5 >> 0xd) & 0x1fff;
                *puVar14 = uVar17 & uVar9 | uVar8 & ~uVar9;
                uVar17 = 0x7ff001 - uVar10;
                uVar10 = 0x1000 - uVar10;
                uVar8 = (int)((uVar17 ^ 0x7fe001 | uVar10 ^ 0x7fe001) ^ uVar17) >> 0x1f;
                uVar9 = (uint)(uVar5 >> 0x1a) & 0x1fff;
                puVar14[1] = uVar17 & uVar8 | uVar10 & ~uVar8;
                uVar18 = 0x7ff001 - uVar9;
                uVar9 = 0x1000 - uVar9;
                uVar10 = (int)((uVar18 ^ 0x7fe001 | uVar9 ^ 0x7fe001) ^ uVar18) >> 0x1f;
                uVar8 = (uint)(uVar5 >> 0x20);
                uVar17 = uVar8 >> 7 & 0x1fff;
                puVar14[2] = uVar18 & uVar10 | uVar9 & ~uVar10;
                uVar10 = 0x7ff001 - uVar17;
                uVar17 = 0x1000 - uVar17;
                uVar9 = (int)((uVar10 ^ 0x7fe001 | uVar17 ^ 0x7fe001) ^ uVar10) >> 0x1f;
                uVar18 = uVar8 >> 0x14 | (uVar11 & 1) << 0xc;
                puVar14[3] = uVar10 & uVar9 | uVar17 & ~uVar9;
                uVar10 = 0x1000 - uVar18;
                uVar18 = 0x7ff001 - uVar18;
                uVar8 = (int)((uVar18 ^ 0x7fe001 | uVar10 ^ 0x7fe001) ^ uVar18) >> 0x1f;
                uVar9 = uVar11 >> 1 & 0x1fff;
                puVar14[4] = uVar18 & uVar8 | uVar10 & ~uVar8;
                uVar17 = 0x7ff001 - uVar9;
                uVar9 = 0x1000 - uVar9;
                uVar8 = (int)((uVar17 ^ 0x7fe001 | uVar9 ^ 0x7fe001) ^ uVar17) >> 0x1f;
                uVar10 = uVar11 >> 0xe & 0x1fff;
                puVar14[5] = uVar17 & uVar8 | uVar9 & ~uVar8;
                uVar17 = 0x7ff001 - uVar10;
                uVar10 = 0x1000 - uVar10;
                uVar8 = (int)((uVar17 ^ 0x7fe001 | uVar10 ^ 0x7fe001) ^ uVar17) >> 0x1f;
                uVar9 = (uint)bVar2 << 5 | uVar11 >> 0x1b;
                puVar15 = puVar14 + 8;
                puVar14[6] = uVar17 & uVar8 | uVar10 & ~uVar8;
                uVar8 = 0x1000 - uVar9;
                uVar9 = 0x7ff001 - uVar9;
                uVar11 = (int)((uVar9 ^ 0x7fe001 | uVar8 ^ 0x7fe001) ^ uVar9) >> 0x1f;
                puVar14[7] = uVar9 & uVar11 | uVar8 & ~uVar11;
                puVar14 = puVar15;
                local_98 = puVar1;
              } while (puVar15 != puVar6 + 0x100);
              lVar16 = lVar16 + 1;
              puVar6 = puVar6 + 0x100;
            } while (lVar3 != lVar16);
          }
          if (local_90 == 0) {
            if (*(long *)(param_1 + 0xa8) == 0) {
              lVar16 = CRYPTO_memdup(param_2,param_3,"crypto/ml_dsa/ml_dsa_encoders.c",0x329);
              *(long *)(param_1 + 0xa8) = lVar16;
              if (lVar16 == 0) goto LAB_0010195b;
            }
            iVar7 = ossl_ml_dsa_key_public_from_private(param_1);
            if (iVar7 != 0) {
              iVar7 = memcmp(&local_88,(void *)(param_1 + 0x40),0x40);
              uVar12 = 1;
              if (iVar7 == 0) goto LAB_0010195d;
            }
            ERR_new();
            ERR_set_debug("crypto/ml_dsa/ml_dsa_encoders.c",0x331,"ossl_ml_dsa_sk_decode");
            ERR_set_error(0x39,0x9e,"%s private key does not match its pubkey part",
                          **(undefined8 **)(param_1 + 8));
            ossl_ml_dsa_key_reset(param_1);
          }
        }
      }
    }
  }
LAB_0010195b:
  uVar12 = 0;
LAB_0010195d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



undefined8 ossl_ml_dsa_sig_encode(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  long in_FS_OFFSET;
  void *local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uVar6 = 0;
    goto LAB_00101eff;
  }
  pcVar8 = poly_encode_signed_two_to_power_17;
  if (*(int *)(param_2 + 0x14) == 0x80000) {
    pcVar8 = poly_encode_signed_two_to_power_19;
  }
  iVar1 = WPACKET_init_static_len(local_78,param_3,*(undefined8 *)(param_2 + 0x50),0);
  if ((iVar1 == 0) || (iVar1 = WPACKET_memcpy(local_78,param_1[4],param_1[5]), iVar1 == 0)) {
LAB_00101ef5:
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = (*pcVar8)(uVar4 * 0x400 + *param_1,local_78);
        if (iVar1 == 0) goto LAB_00101ef5;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulong)param_1[1]);
    }
    uVar7 = *(uint *)(param_2 + 0x38);
    lVar5 = param_1[2];
    lVar2 = param_1[3];
    uVar9 = uVar7 + (int)lVar2;
    iVar1 = WPACKET_allocate_bytes(local_78,(ulong)uVar9,&local_80);
    if (iVar1 == 0) goto LAB_00101ef5;
    memset(local_80,0,(ulong)uVar9);
    lVar3 = 0;
    if (0 < (int)lVar2) {
      do {
        uVar4 = (ulong)uVar7;
        lVar2 = 0;
        do {
          if (*(int *)(lVar5 + lVar2 * 4) != 0) {
            *(char *)((long)local_80 + lVar3) = (char)lVar2;
            lVar3 = lVar3 + 1;
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0x100);
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x400;
        *(char *)((long)local_80 + uVar4) = (char)lVar3;
      } while (uVar9 != uVar7);
    }
    uVar6 = 1;
  }
  WPACKET_finish(local_78);
LAB_00101eff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



bool ossl_ml_dsa_sig_decode(long *param_1,void *param_2,ulong param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong __n;
  int iVar5;
  ulong uVar6;
  void *__s;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  void *pvVar15;
  long in_FS_OFFSET;
  bool bVar16;
  
  pcVar11 = poly_decode_signed_two_to_power_17;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_4 + 0x14) == 0x80000) {
    pcVar11 = poly_decode_signed_two_to_power_19;
  }
  if (-1 < (long)param_3) {
    __n = param_1[5];
    if (__n <= param_3) {
      memcpy((void *)param_1[4],param_2,__n);
      if (param_1[1] != 0) {
        uVar10 = 0;
        do {
          iVar5 = (*pcVar11)(uVar10 * 0x400 + *param_1);
          if (iVar5 == 0) goto LAB_00102059;
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)param_1[1]);
      }
      uVar3 = *(uint *)(param_4 + 0x38);
      uVar12 = (ulong)uVar3;
      uVar10 = param_1[3];
      __s = (void *)param_1[2];
      if ((uVar12 <= param_3 - __n) && (uVar6 = (param_3 - __n) - uVar12, uVar10 <= uVar6)) {
        pbVar1 = (byte *)((long)param_2 + uVar12 + __n);
        if (__s != (void *)0x0) {
          __s = memset(__s,0,uVar10 * 0x400);
        }
        pvVar15 = (void *)(uVar10 * 0x400 + (long)__s);
        uVar7 = 0;
        pbVar14 = pbVar1;
        do {
          bVar2 = *pbVar14;
          uVar13 = (ulong)bVar2;
          pbVar14 = pbVar14 + 1;
          if ((uVar3 < bVar2) || (uVar13 < uVar7)) goto LAB_00102059;
          if (uVar7 < uVar13) {
            uVar8 = 0xffffffff;
            do {
              uVar7 = uVar7 + 1;
              uVar9 = (uint)*(byte *)((long)param_2 + uVar7 + (__n - 1));
              if ((int)uVar9 <= (int)uVar8) goto LAB_00102059;
              *(undefined4 *)((long)__s + (long)(int)uVar9 * 4) = 1;
              uVar8 = uVar9;
            } while (uVar13 != uVar7);
          }
          __s = (void *)((long)__s + 0x400);
        } while (__s < pvVar15);
        pbVar14 = (byte *)((long)param_2 + uVar7 + __n);
        if (uVar7 < uVar12) {
          do {
            if (*pbVar14 != 0) goto LAB_00102059;
            pbVar14 = pbVar14 + 1;
          } while (pbVar1 != pbVar14);
        }
        bVar16 = uVar6 == uVar10;
        goto LAB_0010205b;
      }
    }
  }
LAB_00102059:
  bVar16 = false;
LAB_0010205b:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar16;
}



undefined8
ossl_ml_dsa_poly_decode_expand_mask(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (-1 < param_3) {
    local_28 = param_2;
    local_20 = param_3;
    if (param_4 == 0x80000) {
      uVar1 = poly_decode_signed_two_to_power_19(param_1,&local_28);
    }
    else {
      uVar1 = poly_decode_signed_two_to_power_17();
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_ml_dsa_w1_encode(long *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init_static_len(auStack_68,param_3,param_4,0);
  if (iVar1 != 0) {
    pcVar2 = poly_encode_6_bits;
    if (param_2 == 0x3ff00) {
      pcVar2 = poly_encode_4_bits;
    }
    if (param_1[1] != 0) {
      uVar3 = 0;
      do {
        iVar1 = (*pcVar2)(uVar3 * 0x400 + *param_1,auStack_68);
        if (iVar1 == 0) goto LAB_001022b9;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulong)param_1[1]);
    }
    iVar1 = 1;
LAB_001022b9:
    WPACKET_finish(auStack_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



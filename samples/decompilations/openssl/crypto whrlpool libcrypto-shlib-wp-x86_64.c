
void whirlpool_block(ulong *param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
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
  ulong uVar22;
  ulong uVar23;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong *local_78;
  long local_70;
  long local_68;
  
  local_100 = *param_1;
  local_f8 = param_1[1];
  local_f0 = param_1[2];
  local_e8 = param_1[3];
  local_e0 = param_1[4];
  local_d8 = param_1[5];
  local_d0 = param_1[6];
  local_c8 = param_1[7];
  local_78 = param_2;
  local_70 = param_3;
  do {
    local_c0 = local_100 ^ *local_78;
    local_b8 = local_f8 ^ local_78[1];
    local_b0 = local_f0 ^ local_78[2];
    local_a8 = local_e8 ^ local_78[3];
    local_a0 = local_e0 ^ local_78[4];
    local_98 = local_d8 ^ local_78[5];
    local_90 = local_d0 ^ local_78[6];
    local_68 = 0;
    local_88 = local_c8 ^ local_78[7];
    do {
      uVar1 = (uint)local_100 >> 8;
      uVar13 = (uint)local_100 >> 0x10;
      uVar2 = (uint)local_100 >> 0x18;
      uVar18 = local_100._4_4_ & 0xff;
      uVar3 = local_100._4_4_ >> 8;
      uVar21 = local_100._4_4_ >> 0x10;
      uVar4 = (uint)local_f8 >> 8;
      uVar14 = (uint)local_f8 >> 0x10;
      uVar5 = (uint)local_f8 >> 0x18;
      uVar19 = local_f8._4_4_ & 0xff;
      uVar6 = local_f8._4_4_ >> 8;
      uVar7 = (uint)local_f0 >> 8;
      uVar15 = (uint)local_f0 >> 0x10;
      uVar8 = (uint)local_f0 >> 0x18;
      uVar20 = local_f0._4_4_ & 0xff;
      uVar9 = (uint)local_e8 >> 8;
      uVar16 = (uint)local_e8 >> 0x10;
      uVar10 = (uint)local_e8 >> 0x18;
      uVar11 = (uint)local_e0 >> 8;
      uVar17 = (uint)local_e0 >> 0x10;
      uVar12 = (uint)local_d8 >> 8;
      uVar22 = *(ulong *)(&DAT_00100901 + (ulong)(local_100._4_4_ >> 0x18) * 0x10) ^
               *(ulong *)(&DAT_00100902 + (ulong)(local_f8._4_4_ >> 0x10 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_00100903 + (ulong)(local_f0._4_4_ >> 8 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_00100904 + (ulong)(local_e8._4_4_ & 0xff) * 0x10) ^
               (&DAT_00100905)[(ulong)((uint)local_e0 >> 0x18) * 2] ^
               *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_d8 >> 0x10 & 0xff) * 0x10 + 1) ^
               *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_d0 >> 8 & 0xff) * 0x10 + 2) ^
               *(ulong *)(&DAT_00100900 + (ulong)((uint)local_c8 & 0xff) * 0x10);
      local_100 = (&DAT_00101900)[local_68] ^
                  *(ulong *)(&DAT_00100900 + (ulong)((uint)local_100 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_00100901 + (ulong)(local_f8._4_4_ >> 0x18) * 0x10) ^
                  *(ulong *)(&DAT_00100902 + (ulong)(local_f0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_00100903 + (ulong)(local_e8._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_00100904 + (ulong)(local_e0._4_4_ & 0xff) * 0x10) ^
                  (&DAT_00100905)[(ulong)((uint)local_d8 >> 0x18) * 2] ^
                  *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_d0 >> 0x10 & 0xff) * 0x10 + 1
                            ) ^
                  *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_c8 >> 8 & 0xff) * 0x10 + 2);
      local_f8 = *(ulong *)((long)&DAT_00100905 + (ulong)(uVar1 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_f8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_f0._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_e8._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_e0._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)(local_d8._4_4_ & 0xff) * 0x10) ^
                 (&DAT_00100905)[(ulong)((uint)local_d0 >> 0x18) * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_c8 >> 0x10 & 0xff) * 0x10 + 1)
      ;
      local_f0 = *(ulong *)((long)&DAT_00100905 + (ulong)(uVar13 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar4 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_f0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_e8._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_e0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_d8._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)(local_d0._4_4_ & 0xff) * 0x10) ^
                 (&DAT_00100905)[(ulong)((uint)local_c8 >> 0x18) * 2];
      local_e8 = (&DAT_00100905)[(ulong)uVar2 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar14 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar7 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_e8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_e0._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_d8._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_d0._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)(local_c8._4_4_ & 0xff) * 0x10);
      local_e0 = *(ulong *)(&DAT_00100904 + (ulong)uVar18 * 0x10) ^
                 (&DAT_00100905)[(ulong)uVar5 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar15 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar9 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_e0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_d8._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_d0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_c8._4_4_ >> 8 & 0xff) * 0x10);
      uVar1 = (uint)local_c0 >> 8;
      local_d8 = *(ulong *)(&DAT_00100903 + (ulong)(uVar3 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)uVar19 * 0x10) ^
                 (&DAT_00100905)[(ulong)uVar8 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar16 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar11 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_d8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_d0._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_c8._4_4_ >> 0x10 & 0xff) * 0x10);
      local_d0 = *(ulong *)(&DAT_00100902 + (ulong)(uVar21 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(uVar6 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)uVar20 * 0x10) ^
                 (&DAT_00100905)[(ulong)uVar10 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar17 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar12 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_d0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_c8._4_4_ >> 0x18) * 0x10);
      uVar13 = (uint)local_c0 >> 0x10;
      uVar2 = (uint)local_c0 >> 0x18;
      uVar18 = local_c0._4_4_ & 0xff;
      uVar3 = local_c0._4_4_ >> 8;
      uVar21 = local_c0._4_4_ >> 0x10;
      uVar4 = (uint)local_b8 >> 8;
      uVar14 = (uint)local_b8 >> 0x10;
      uVar5 = (uint)local_b8 >> 0x18;
      uVar19 = local_b8._4_4_ & 0xff;
      uVar6 = local_b8._4_4_ >> 8;
      uVar7 = (uint)local_b0 >> 8;
      uVar15 = (uint)local_b0 >> 0x10;
      uVar8 = (uint)local_b0 >> 0x18;
      uVar20 = local_b0._4_4_ & 0xff;
      uVar9 = (uint)local_a8 >> 8;
      uVar16 = (uint)local_a8 >> 0x10;
      uVar10 = (uint)local_a8 >> 0x18;
      uVar11 = (uint)local_a0 >> 8;
      uVar17 = (uint)local_a0 >> 0x10;
      uVar12 = (uint)local_98 >> 8;
      uVar23 = uVar22 ^ *(ulong *)(&DAT_00100901 + (ulong)(local_c0._4_4_ >> 0x18) * 0x10) ^
               *(ulong *)(&DAT_00100902 + (ulong)(local_b8._4_4_ >> 0x10 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_00100903 + (ulong)(local_b0._4_4_ >> 8 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_00100904 + (ulong)(local_a8._4_4_ & 0xff) * 0x10) ^
               (&DAT_00100905)[(ulong)((uint)local_a0 >> 0x18) * 2] ^
               *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_98 >> 0x10 & 0xff) * 0x10 + 1) ^
               *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_90 >> 8 & 0xff) * 0x10 + 2) ^
               *(ulong *)(&DAT_00100900 + (ulong)((uint)local_88 & 0xff) * 0x10);
      local_c0 = local_100 ^ *(ulong *)(&DAT_00100900 + (ulong)((uint)local_c0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_b8._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_b0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_a8._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)(local_a0._4_4_ & 0xff) * 0x10) ^
                 (&DAT_00100905)[(ulong)((uint)local_98 >> 0x18) * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_90 >> 0x10 & 0xff) * 0x10 + 1)
                 ^ *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_88 >> 8 & 0xff) * 0x10 + 2);
      local_b8 = local_f8 ^ *(ulong *)((long)&DAT_00100905 + (ulong)(uVar1 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_b8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_b0._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_a8._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_a0._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)(local_98._4_4_ & 0xff) * 0x10) ^
                 (&DAT_00100905)[(ulong)((uint)local_90 >> 0x18) * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)((uint)local_88 >> 0x10 & 0xff) * 0x10 + 1)
      ;
      local_b0 = local_f0 ^ *(ulong *)((long)&DAT_00100905 + (ulong)(uVar13 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar4 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_b0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_a8._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_a0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_98._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)(local_90._4_4_ & 0xff) * 0x10) ^
                 (&DAT_00100905)[(ulong)((uint)local_88 >> 0x18) * 2];
      local_a8 = local_e8 ^ (&DAT_00100905)[(ulong)uVar2 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar14 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar7 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_a8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_a0._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_98._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_90._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)(local_88._4_4_ & 0xff) * 0x10);
      local_a0 = local_e0 ^ *(ulong *)(&DAT_00100904 + (ulong)uVar18 * 0x10) ^
                 (&DAT_00100905)[(ulong)uVar5 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar15 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar9 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_a0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_98._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_90._4_4_ >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(local_88._4_4_ >> 8 & 0xff) * 0x10);
      local_98 = local_d8 ^ *(ulong *)(&DAT_00100903 + (ulong)(uVar3 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)uVar19 * 0x10) ^
                 (&DAT_00100905)[(ulong)uVar8 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar16 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar11 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_98 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_90._4_4_ >> 0x18) * 0x10) ^
                 *(ulong *)(&DAT_00100902 + (ulong)(local_88._4_4_ >> 0x10 & 0xff) * 0x10);
      local_90 = local_d0 ^ *(ulong *)(&DAT_00100902 + (ulong)(uVar21 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100903 + (ulong)(uVar6 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100904 + (ulong)uVar20 * 0x10) ^
                 (&DAT_00100905)[(ulong)uVar10 * 2] ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar17 & 0xff) * 0x10 + 1) ^
                 *(ulong *)((long)&DAT_00100905 + (ulong)(uVar12 & 0xff) * 0x10 + 2) ^
                 *(ulong *)(&DAT_00100900 + (ulong)((uint)local_90 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_00100901 + (ulong)(local_88._4_4_ >> 0x18) * 0x10);
      local_68 = local_68 + 1;
      local_c8 = uVar22;
      local_88 = uVar23;
    } while (local_68 != 10);
    local_100 = local_c0 ^ *local_78 ^ *param_1;
    local_f8 = local_b8 ^ local_78[1] ^ param_1[1];
    local_f0 = local_b0 ^ local_78[2] ^ param_1[2];
    local_e8 = local_a8 ^ local_78[3] ^ param_1[3];
    local_e0 = local_a0 ^ local_78[4] ^ param_1[4];
    local_d8 = local_98 ^ local_78[5] ^ param_1[5];
    local_d0 = local_90 ^ local_78[6] ^ param_1[6];
    local_c8 = uVar23 ^ local_78[7] ^ param_1[7];
    *param_1 = local_100;
    param_1[1] = local_f8;
    param_1[2] = local_f0;
    param_1[3] = local_e8;
    param_1[4] = local_e0;
    param_1[5] = local_d8;
    param_1[6] = local_d0;
    param_1[7] = local_c8;
    local_78 = local_78 + 8;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  return;
}



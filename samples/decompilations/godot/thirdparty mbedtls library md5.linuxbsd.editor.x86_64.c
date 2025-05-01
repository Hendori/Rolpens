
void mbedtls_md5_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[10] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x58U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_md5_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_platform_zeroize(param_1,0x58);
    return;
  }
  return;
}



void mbedtls_md5_clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 mbedtls_md5_starts(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00101168;
  uVar1 = __LC0;
  param_1[2] = _LC1;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



undefined8 mbedtls_internal_md5_process(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  iVar14 = *(int *)(param_2 + 3);
  iVar2 = *(int *)((long)param_2 + 0xc);
  iVar3 = *(int *)((long)param_2 + 0x2c);
  local_88 = *(int *)(param_2 + 2);
  uStack_84 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_80 = *(undefined4 *)(param_2 + 3);
  uStack_7c = *(undefined4 *)((long)param_2 + 0x1c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)((long)param_2 + 0x14);
  iVar5 = *(int *)((long)param_2 + 0x1c);
  iVar6 = *(int *)((long)param_2 + 4);
  iVar7 = *(int *)(param_2 + 1);
  iVar8 = *(int *)(param_2 + 5);
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_78 = *(int *)(param_2 + 4);
  uStack_74 = *(undefined4 *)((long)param_2 + 0x24);
  uStack_70 = *(undefined4 *)(param_2 + 5);
  uStack_6c = *(undefined4 *)((long)param_2 + 0x2c);
  iVar9 = *(int *)((long)param_2 + 0x24);
  iVar17 = (int)local_98;
  iVar10 = *(int *)((long)param_2 + 0x3c);
  iVar11 = *(int *)(param_2 + 7);
  iVar12 = *(int *)((long)param_2 + 0x34);
  local_68 = *(int *)(param_2 + 6);
  uStack_64 = *(undefined4 *)((long)param_2 + 0x34);
  uStack_60 = *(undefined4 *)(param_2 + 7);
  uStack_5c = *(undefined4 *)((long)param_2 + 0x3c);
  uVar18 = *(uint *)(param_1 + 0xc);
  uVar15 = ((*(uint *)(param_1 + 0x14) ^ *(uint *)(param_1 + 0x10)) & uVar18 ^
           *(uint *)(param_1 + 0x14)) + iVar17 + -0x28955b88 + *(int *)(param_1 + 8);
  uVar16 = (uVar15 * 0x80 | uVar15 >> 0x19) + uVar18;
  uVar15 = ((*(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0xc)) & uVar16 ^
           *(uint *)(param_1 + 0x10)) + iVar6 + -0x173848aa + *(uint *)(param_1 + 0x14);
  uVar15 = (uVar15 * 0x1000 | uVar15 >> 0x14) + uVar16;
  uVar13 = ((uVar16 ^ uVar18) & uVar15 ^ uVar18) + iVar7 + 0x242070db + *(uint *)(param_1 + 0x10);
  uVar13 = (uVar13 >> 0xf | uVar13 * 0x20000) + uVar15;
  uVar18 = ((uVar16 ^ uVar15) & uVar13 ^ uVar16) + iVar2 + -0x3e423112 + uVar18;
  uVar19 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar13;
  uVar18 = ((uVar15 ^ uVar13) & uVar19 ^ uVar15) + uVar16 + 0xf57c0faf + local_88;
  uVar16 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar19;
  uVar18 = ((uVar13 ^ uVar19) & uVar16 ^ uVar13) + uVar15 + 0x4787c62a + iVar4;
  uVar18 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar16;
  uVar15 = ((uVar19 ^ uVar16) & uVar18 ^ uVar19) + uVar13 + 0xa8304613 + iVar14;
  uVar13 = (uVar15 >> 0xf | uVar15 * 0x20000) + uVar18;
  uVar15 = ((uVar16 ^ uVar18) & uVar13 ^ uVar16) + uVar19 + 0xfd469501 + iVar5;
  uVar15 = (uVar15 >> 10 | uVar15 * 0x400000) + uVar13;
  uVar16 = ((uVar18 ^ uVar13) & uVar15 ^ uVar18) + uVar16 + 0x698098d8 + local_78;
  uVar19 = (uVar16 * 0x80 | uVar16 >> 0x19) + uVar15;
  uVar18 = ((uVar13 ^ uVar15) & uVar19 ^ uVar13) + uVar18 + 0x8b44f7af + iVar9;
  uVar16 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar19;
  uVar18 = ((uVar15 ^ uVar19) & uVar16 ^ uVar15) + (uVar13 - 0xa44f) + iVar8;
  uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar16;
  uVar15 = ((uVar19 ^ uVar16) & uVar18 ^ uVar19) + uVar15 + 0x895cd7be + iVar3;
  uVar13 = (uVar15 >> 10 | uVar15 * 0x400000) + uVar18;
  uVar15 = ((uVar16 ^ uVar18) & uVar13 ^ uVar16) + uVar19 + 0x6b901122 + local_68;
  uVar15 = (uVar15 * 0x80 | uVar15 >> 0x19) + uVar13;
  uVar16 = ((uVar18 ^ uVar13) & uVar15 ^ uVar18) + uVar16 + 0xfd987193 + iVar12;
  uVar16 = (uVar16 * 0x1000 | uVar16 >> 0x14) + uVar15;
  uVar18 = ((uVar13 ^ uVar15) & uVar16 ^ uVar13) + uVar18 + 0xa679438e + iVar11;
  uVar19 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar16;
  uVar18 = ((uVar15 ^ uVar16) & uVar19 ^ uVar15) + uVar13 + 0x49b40821 + iVar10;
  uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar19;
  uVar15 = ((uVar19 ^ uVar18) & uVar16 ^ uVar19) + uVar15 + 0xf61e2562 + iVar6;
  uVar13 = (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar18;
  uVar15 = ((uVar18 ^ uVar13) & uVar19 ^ uVar18) + uVar16 + 0xc040b340 + iVar14;
  uVar16 = (uVar15 * 0x200 | uVar15 >> 0x17) + uVar13;
  uVar15 = ((uVar13 ^ uVar16) & uVar18 ^ uVar13) + uVar19 + 0x265e5a51 + iVar3;
  uVar15 = (uVar15 * 0x4000 | uVar15 >> 0x12) + uVar16;
  uVar18 = ((uVar16 ^ uVar15) & uVar13 ^ uVar16) + uVar18 + 0xe9b6c7aa + iVar17;
  uVar19 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar15;
  uVar18 = ((uVar15 ^ uVar19) & uVar16 ^ uVar15) + uVar13 + 0xd62f105d + iVar4;
  uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar19;
  uVar13 = ((uVar19 ^ uVar18) & uVar15 ^ uVar19) + uVar16 + 0x2441453 + iVar8;
  uVar13 = (uVar13 * 0x200 | uVar13 >> 0x17) + uVar18;
  uVar15 = ((uVar18 ^ uVar13) & uVar19 ^ uVar18) + uVar15 + 0xd8a1e681 + iVar10;
  uVar16 = (uVar15 * 0x4000 | uVar15 >> 0x12) + uVar13;
  uVar15 = ((uVar13 ^ uVar16) & uVar18 ^ uVar13) + uVar19 + 0xe7d3fbc8 + local_88;
  uVar15 = (uVar15 >> 0xc | uVar15 * 0x100000) + uVar16;
  uVar18 = ((uVar16 ^ uVar15) & uVar13 ^ uVar16) + uVar18 + 0x21e1cde6 + iVar9;
  uVar20 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar15;
  uVar18 = ((uVar15 ^ uVar20) & uVar16 ^ uVar15) + uVar13 + 0xc33707d6 + iVar11;
  uVar18 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar20;
  uVar13 = ((uVar20 ^ uVar18) & uVar15 ^ uVar20) + uVar16 + 0xf4d50d87 + iVar2;
  uVar16 = (uVar13 * 0x4000 | uVar13 >> 0x12) + uVar18;
  uVar15 = ((uVar18 ^ uVar16) & uVar20 ^ uVar18) + uVar15 + 0x455a14ed + local_78;
  uVar19 = (uVar15 >> 0xc | uVar15 * 0x100000) + uVar16;
  uVar15 = ((uVar16 ^ uVar19) & uVar18 ^ uVar16) + uVar20 + 0xa9e3e905 + iVar12;
  uVar13 = (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar19;
  uVar18 = ((uVar19 ^ uVar13) & uVar16 ^ uVar19) + uVar18 + 0xfcefa3f8 + iVar7;
  uVar20 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar13;
  uVar18 = ((uVar13 ^ uVar20) & uVar19 ^ uVar13) + uVar16 + 0x676f02d9 + iVar5;
  uVar15 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar20;
  uVar18 = (uVar13 & (uVar20 ^ uVar15) ^ uVar20) + uVar19 + 0x8d2a4c8a + local_68;
  uVar16 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar15;
  uVar18 = (uVar13 - 0x5c6be) + iVar4 + (uVar20 ^ uVar15 ^ uVar16);
  uVar18 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar16;
  uVar13 = (uVar15 ^ uVar16 ^ uVar18) + uVar20 + 0x8771f681 + local_78;
  uVar13 = (uVar13 * 0x800 | uVar13 >> 0x15) + uVar18;
  uVar15 = (uVar16 ^ uVar18 ^ uVar13) + uVar15 + 0x6d9d6122 + iVar3;
  uVar19 = (uVar15 * 0x10000 | uVar15 >> 0x10) + uVar13;
  uVar15 = (uVar18 ^ uVar13 ^ uVar19) + uVar16 + 0xfde5380c + iVar11;
  uVar15 = (uVar15 >> 9 | uVar15 * 0x800000) + uVar19;
  uVar18 = (uVar13 ^ uVar19 ^ uVar15) + uVar18 + 0xa4beea44 + iVar6;
  uVar20 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar15;
  uVar18 = (uVar19 ^ uVar15 ^ uVar20) + uVar13 + 0x4bdecfa9 + local_88;
  uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar20;
  uVar13 = (uVar15 ^ uVar20 ^ uVar18) + uVar19 + 0xf6bb4b60 + iVar5;
  uVar16 = (uVar13 * 0x10000 | uVar13 >> 0x10) + uVar18;
  uVar15 = (uVar20 ^ uVar18 ^ uVar16) + uVar15 + 0xbebfbc70 + iVar8;
  uVar19 = (uVar15 >> 9 | uVar15 * 0x800000) + uVar16;
  uVar15 = (uVar18 ^ uVar16 ^ uVar19) + uVar20 + 0x289b7ec6 + iVar12;
  uVar15 = (uVar15 * 0x10 | uVar15 >> 0x1c) + uVar19;
  uVar18 = (uVar16 ^ uVar19 ^ uVar15) + uVar18 + 0xeaa127fa + iVar17;
  uVar13 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar15;
  uVar18 = (uVar19 ^ uVar15 ^ uVar13) + uVar16 + 0xd4ef3085 + iVar2;
  uVar16 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar13;
  uVar18 = (uVar15 ^ uVar13 ^ uVar16) + uVar19 + 0x4881d05 + iVar14;
  uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar16;
  uVar15 = (uVar13 ^ uVar16 ^ uVar18) + uVar15 + 0xd9d4d039 + iVar9;
  uVar19 = (uVar15 * 0x10 | uVar15 >> 0x1c) + uVar18;
  uVar15 = (uVar16 ^ uVar18 ^ uVar19) + uVar13 + 0xe6db99e5 + local_68;
  uVar20 = (uVar15 * 0x800 | uVar15 >> 0x15) + uVar19;
  uVar15 = (uVar18 ^ uVar19 ^ uVar20) + uVar16 + 0x1fa27cf8 + iVar10;
  uVar15 = (uVar15 * 0x10000 | uVar15 >> 0x10) + uVar20;
  uVar18 = (uVar19 ^ uVar20 ^ uVar15) + uVar18 + 0xc4ac5665 + iVar7;
  uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar15;
  uVar13 = ((~uVar20 | uVar18) ^ uVar15) + uVar19 + 0xf4292244 + iVar17;
  uVar13 = (uVar13 * 0x40 | uVar13 >> 0x1a) + uVar18;
  uVar16 = ((~uVar15 | uVar13) ^ uVar18) + uVar20 + 0x432aff97 + iVar5;
  uVar16 = (uVar16 * 0x400 | uVar16 >> 0x16) + uVar13;
  uVar15 = ((~uVar18 | uVar16) ^ uVar13) + uVar15 + 0xab9423a7 + iVar11;
  uVar20 = (uVar15 * 0x8000 | uVar15 >> 0x11) + uVar16;
  uVar18 = ((~uVar13 | uVar20) ^ uVar16) + uVar18 + 0xfc93a039 + iVar4;
  uVar15 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar20;
  uVar18 = ((~uVar16 | uVar15) ^ uVar20) + uVar13 + 0x655b59c3 + local_68;
  uVar19 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar15;
  uVar18 = ((~uVar20 | uVar19) ^ uVar15) + uVar16 + 0x8f0ccc92 + iVar2;
  uVar18 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar19;
  uVar13 = ((~uVar15 | uVar18) ^ uVar19) + (uVar20 - 0x100b83) + iVar8;
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  uVar13 = (uVar13 * 0x8000 | uVar13 >> 0x11) + uVar18;
  uVar15 = ((~uVar19 | uVar13) ^ uVar18) + uVar15 + 0x85845dd1 + iVar6;
  uVar15 = (uVar15 >> 0xb | uVar15 * 0x200000) + uVar13;
  uVar16 = ((~uVar18 | uVar15) ^ uVar13) + uVar19 + 0x6fa87e4f + local_78;
  uVar19 = (uVar16 * 0x40 | uVar16 >> 0x1a) + uVar15;
  uVar18 = ((~uVar13 | uVar19) ^ uVar15) + uVar18 + 0xfe2ce6e0 + iVar10;
  uVar16 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar19;
  uVar18 = ((~uVar15 | uVar16) ^ uVar19) + uVar13 + 0xa3014314 + iVar14;
  uVar13 = (uVar18 * 0x8000 | uVar18 >> 0x11) + uVar16;
  uVar18 = ((~uVar19 | uVar13) ^ uVar16) + uVar15 + 0x4e0811a1 + iVar12;
  uVar15 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar13;
  uVar18 = ((~uVar16 | uVar15) ^ uVar13) + uVar19 + 0xf7537e82 + local_88;
  uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar15;
  uVar16 = ((~uVar13 | uVar18) ^ uVar15) + uVar16 + 0xbd3af235 + iVar3;
  uVar16 = (uVar16 * 0x400 | uVar16 >> 0x16) + uVar18;
  uVar13 = ((~uVar15 | uVar16) ^ uVar18) + uVar13 + 0x2ad7d2bb + iVar7;
  uVar13 = (uVar13 * 0x8000 | uVar13 >> 0x11) + uVar16;
  uStack_50 = CONCAT44(uVar16,uVar13);
  uVar15 = uVar15 + 0xeb86d391 + iVar9 + ((~uVar18 | uVar13) ^ uVar16);
  iVar14 = (uVar15 >> 0xb | uVar15 * 0x200000) + uVar13;
  local_58 = CONCAT44(iVar14,uVar18);
  *(uint *)(param_1 + 8) = uVar18 + auVar1._0_4_;
  *(int *)(param_1 + 0xc) = iVar14 + auVar1._4_4_;
  *(uint *)(param_1 + 0x10) = uVar13 + auVar1._8_4_;
  *(uint *)(param_1 + 0x14) = uVar16 + auVar1._12_4_;
  mbedtls_platform_zeroize(&local_98,0x50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_md5_update(uint *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar4 = *param_1;
  uVar5 = uVar4 & 0x3f;
  uVar2 = (ulong)uVar5;
  uVar3 = 0x40 - uVar5;
  *param_1 = uVar4 + (uint)param_3;
  uVar8 = (ulong)uVar3;
  if (CARRY4(uVar4,(uint)param_3)) {
    param_1[1] = param_1[1] + 1;
  }
  if ((uVar5 == 0) || (param_3 < uVar8)) {
    if (0x3f < param_3) goto LAB_001009ce;
  }
  else {
    puVar6 = (undefined8 *)(uVar2 + (long)(param_1 + 6));
    if (uVar3 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 != 0) && (*(undefined1 *)puVar6 = *(undefined1 *)param_2, (uVar3 & 2) != 0)) {
          *(undefined2 *)((long)puVar6 + (uVar8 - 2)) = *(undefined2 *)((long)param_2 + (uVar8 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)puVar6 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar6 + (uVar8 - 4)) = *(undefined4 *)((long)param_2 + (uVar8 - 4));
      }
    }
    else {
      *puVar6 = *param_2;
      *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = *(undefined8 *)((long)param_2 + (uVar8 - 8));
      lVar7 = (long)puVar6 - ((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
      uVar4 = uVar3 + (int)lVar7 & 0xfffffff8;
      if (7 < uVar4) {
        uVar3 = 0;
        do {
          uVar2 = (ulong)uVar3;
          uVar3 = uVar3 + 8;
          *(undefined8 *)(((ulong)(puVar6 + 1) & 0xfffffffffffffff8) + uVar2) =
               *(undefined8 *)((long)param_2 + (uVar2 - lVar7));
        } while (uVar3 < uVar4);
      }
    }
    uVar1 = mbedtls_internal_md5_process(param_1,param_1 + 6);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    param_2 = (undefined8 *)((long)param_2 + uVar8);
    uVar2 = 0;
    for (param_3 = param_3 - uVar8; 0x3f < param_3; param_3 = param_3 - 0x40) {
LAB_001009ce:
      uVar1 = mbedtls_internal_md5_process(param_1,param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      param_2 = param_2 + 8;
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  puVar6 = (undefined8 *)((long)param_1 + uVar2 + 0x18);
  uVar4 = (uint)param_3;
  uVar2 = param_3 & 0xffffffff;
  if (uVar4 < 8) {
    if ((param_3 & 4) != 0) {
      *(undefined4 *)puVar6 = *(undefined4 *)param_2;
      *(undefined4 *)((long)puVar6 + (uVar2 - 4)) = *(undefined4 *)((long)param_2 + (uVar2 - 4));
      return 0;
    }
    if ((uVar4 != 0) && (*(undefined1 *)puVar6 = *(undefined1 *)param_2, (param_3 & 2) != 0)) {
      *(undefined2 *)((long)puVar6 + (uVar2 - 2)) = *(undefined2 *)((long)param_2 + (uVar2 - 2));
      return 0;
    }
  }
  else {
    *puVar6 = *param_2;
    *(undefined8 *)((long)puVar6 + ((param_3 & 0xffffffff) - 8)) =
         *(undefined8 *)((long)param_2 + ((param_3 & 0xffffffff) - 8));
    lVar7 = (long)puVar6 - ((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
    uVar4 = uVar4 + (int)lVar7 & 0xfffffff8;
    if (7 < uVar4) {
      uVar2 = 0;
      do {
        uVar3 = (int)uVar2 + 8;
        *(undefined8 *)(((ulong)(puVar6 + 1) & 0xfffffffffffffff8) + uVar2) =
             *(undefined8 *)((long)param_2 + (uVar2 - lVar7));
        uVar2 = (ulong)uVar3;
      } while (uVar3 < uVar4);
      return 0;
    }
  }
  return 0;
}



int mbedtls_md5_finish(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = (*param_1 & 0x3f) + 1;
  *(undefined1 *)((long)param_1 + (ulong)(*param_1 & 0x3f) + 0x18) = 0x80;
  if (uVar3 < 0x39) {
    uVar4 = 0x38 - uVar3;
    puVar2 = (undefined8 *)((long)param_1 + (ulong)uVar3 + 0x18);
    if (uVar4 < 8) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 != 0) && (*(undefined1 *)puVar2 = 0, (uVar4 & 2) != 0)) {
          *(undefined2 *)((long)puVar2 + ((ulong)uVar4 - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar2 = 0;
        *(undefined4 *)((long)puVar2 + ((ulong)uVar4 - 4)) = 0;
      }
    }
    else {
      *puVar2 = 0;
      *(undefined8 *)((long)puVar2 + ((ulong)uVar4 - 8)) = 0;
      uVar3 = uVar4 + ((int)puVar2 - (int)((ulong)(puVar2 + 1) & 0xfffffffffffffff8)) & 0xfffffff8;
      if (7 < uVar3) {
        uVar4 = 0;
        do {
          uVar5 = (ulong)uVar4;
          uVar4 = uVar4 + 8;
          *(undefined8 *)(((ulong)(puVar2 + 1) & 0xfffffffffffffff8) + uVar5) = 0;
        } while (uVar4 < uVar3);
      }
    }
  }
  else {
    if (-uVar3 != -0x40) {
      uVar5 = 0;
      do {
        uVar4 = (int)uVar5 + 1;
        *(undefined1 *)((long)(param_1 + 6) + uVar5 + uVar3) = 0;
        uVar5 = (ulong)uVar4;
      } while (uVar4 < -uVar3 + 0x40);
    }
    iVar1 = mbedtls_internal_md5_process(param_1,param_1 + 6);
    if (iVar1 != 0) goto LAB_00100ba8;
    *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  }
  param_1[0x14] = *param_1 * 8;
  param_1[0x15] = *param_1 >> 0x1d | param_1[1] << 3;
  iVar1 = mbedtls_internal_md5_process(param_1,param_1 + 6);
  if (iVar1 == 0) {
    *param_2 = param_1[2];
    param_2[1] = param_1[3];
    param_2[2] = param_1[4];
    param_2[3] = param_1[5];
  }
LAB_00100ba8:
  mbedtls_platform_zeroize(param_1,0x58);
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mbedtls_md5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 auStack_78 [11];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = auStack_78;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  auStack_78[1] = __LC2;
  auStack_78[2] = _LC1;
  iVar1 = mbedtls_md5_update(auStack_78,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = mbedtls_md5_finish(auStack_78,param_3);
  }
  mbedtls_platform_zeroize(auStack_78,0x58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_md5_self_test(int param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_40;
  
  uVar4 = 1;
  plVar3 = &md5_test_sum;
  puVar2 = &md5_test_buf;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (param_1 != 0) {
      __printf_chk(2,"  MD5 test #%d: ",uVar4 & 0xffffffff);
    }
    iVar1 = mbedtls_md5(puVar2,*(undefined8 *)(&DAT_00100ed8 + uVar4 * 8),&local_58);
    if (iVar1 != 0) {
LAB_00100d7e:
      if (param_1 != 0) {
        puts("failed");
      }
      goto LAB_00100d8a;
    }
    if (local_58 != *plVar3 || local_50 != plVar3[1]) {
      iVar1 = 1;
      goto LAB_00100d7e;
    }
    if (param_1 != 0) {
      puts("passed");
    }
    uVar4 = uVar4 + 1;
    plVar3 = plVar3 + 2;
    puVar2 = puVar2 + 0x51;
  } while (uVar4 != 8);
  if (param_1 != 0) {
    putchar(10);
  }
LAB_00100d8a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



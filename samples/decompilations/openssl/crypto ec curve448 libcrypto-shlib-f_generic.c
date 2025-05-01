
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gf_strong_reduce(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar9 = _UNK_00100ec8;
  uVar6 = __LC0;
  uVar13 = param_1[7] & __LC0;
  uVar14 = param_1[6] & _UNK_00100ec8;
  param_1[4] = param_1[4] + (ulong)*(byte *)((long)param_1 + 0x3f);
  uVar13 = uVar13 + (param_1[6] >> 0x38);
  uVar14 = uVar14 + (param_1[5] >> 0x38);
  uVar2 = (*param_1 & 0xffffffffffffff) + (ulong)*(byte *)((long)param_1 + 0x3f);
  uVar11 = (param_1[5] & uVar6) + (param_1[4] >> 0x38);
  uVar12 = (param_1[4] & uVar9) + (param_1[3] >> 0x38);
  lVar7 = (ulong)(0xfffffffffffffe < uVar2) - 1;
  uVar1 = (*param_1 >> 0x38) + (param_1[1] & 0xffffffffffffff);
  uVar4 = uVar2 + 0xff00000000000001 >> 0x38 | lVar7 * 0x100;
  uVar3 = uVar2 + 0xff00000000000001 & 0xffffffffffffff;
  uVar2 = uVar4 + uVar1;
  uVar5 = uVar2 + 0xff00000000000001;
  lVar7 = (lVar7 >> 0x38) + (ulong)CARRY8(uVar4,uVar1) + -1 + (ulong)(0xfffffffffffffe < uVar2);
  uVar2 = (param_1[2] >> 0x38) + (param_1[3] & uVar6);
  uVar1 = (param_1[1] >> 0x38) + (param_1[2] & uVar9);
  uVar6 = uVar5 >> 0x38 | lVar7 * 0x100;
  uVar9 = uVar6 + uVar1;
  uVar10 = uVar9 + 0xff00000000000001;
  lVar7 = (lVar7 >> 0x38) + (ulong)CARRY8(uVar6,uVar1) + -1 + (ulong)(0xfffffffffffffe < uVar9);
  uVar6 = uVar10 >> 0x38 | lVar7 * 0x100;
  uVar9 = uVar6 + uVar2;
  uVar1 = uVar9 + 0xff00000000000001;
  lVar7 = (lVar7 >> 0x38) + (ulong)CARRY8(uVar6,uVar2) + -1 + (ulong)(0xfffffffffffffe < uVar9);
  uVar6 = uVar1 >> 0x38 | lVar7 * 0x100;
  uVar9 = uVar6 + uVar12;
  uVar8 = uVar9 + 0xff00000000000002;
  lVar7 = (lVar7 >> 0x38) + (ulong)CARRY8(uVar6,uVar12) + -1 + (ulong)(0xfffffffffffffd < uVar9);
  uVar6 = uVar8 >> 0x38 | lVar7 * 0x100;
  uVar9 = uVar6 + uVar11;
  uVar12 = uVar9 + 0xff00000000000001;
  lVar7 = (lVar7 >> 0x38) + (ulong)CARRY8(uVar6,uVar11) + -1 + (ulong)(0xfffffffffffffe < uVar9);
  uVar9 = uVar12 >> 0x38 | lVar7 * 0x100;
  uVar6 = uVar9 + uVar14;
  uVar2 = uVar6 + 0xff00000000000001;
  lVar7 = (lVar7 >> 0x38) + (ulong)CARRY8(uVar9,uVar14) + -1 + (ulong)(0xfffffffffffffe < uVar6);
  uVar9 = uVar2 >> 0x38 | lVar7 * 0x100;
  uVar4 = uVar9 + uVar13;
  uVar11 = uVar4 + 0xff00000000000001;
  uVar6 = uVar11 >> 0x38;
  uVar9 = ((lVar7 >> 0x38) + (ulong)CARRY8(uVar9,uVar13) + -1 + (ulong)(0xfffffffffffffe < uVar4)) *
          0x100;
  uVar13 = uVar6 | uVar9 & 0xffffffffffffff;
  uVar5 = uVar5 & 0xffffffffffffff;
  *param_1 = uVar13 + uVar3 & 0xffffffffffffff;
  uVar4 = uVar13 + uVar3 >> 0x38 | (ulong)CARRY8(uVar13,uVar3) << 8;
  uVar3 = uVar13 + uVar5;
  uVar14 = uVar3 + uVar4;
  uVar10 = uVar10 & 0xffffffffffffff;
  uVar5 = uVar14 >> 0x38 | ((ulong)CARRY8(uVar13,uVar5) + (ulong)CARRY8(uVar3,uVar4)) * 0x100;
  param_1[1] = uVar14 & 0xffffffffffffff;
  uVar4 = uVar13 + uVar10;
  uVar3 = uVar4 + uVar5;
  uVar1 = uVar1 & 0xffffffffffffff;
  uVar5 = uVar3 >> 0x38 | ((ulong)CARRY8(uVar13,uVar10) + (ulong)CARRY8(uVar4,uVar5)) * 0x100;
  param_1[2] = uVar3 & 0xffffffffffffff;
  uVar14 = uVar13 + uVar1;
  uVar3 = uVar14 + uVar5;
  uVar4 = (uVar6 | uVar9) & 0xfffffffffffffe;
  uVar8 = uVar8 & 0xffffffffffffff;
  uVar1 = uVar3 >> 0x38 | ((ulong)CARRY8(uVar13,uVar1) + (ulong)CARRY8(uVar14,uVar5)) * 0x100;
  uVar6 = uVar4 + uVar8;
  param_1[3] = uVar3 & 0xffffffffffffff;
  uVar9 = uVar6 + uVar1;
  uVar12 = uVar12 & 0xffffffffffffff;
  uVar6 = uVar9 >> 0x38 | ((ulong)CARRY8(uVar4,uVar8) + (ulong)CARRY8(uVar6,uVar1)) * 0x100;
  param_1[4] = uVar9 & 0xffffffffffffff;
  uVar9 = uVar13 + uVar12;
  uVar1 = uVar9 + uVar6;
  uVar2 = uVar2 & 0xffffffffffffff;
  uVar9 = uVar1 >> 0x38 | ((ulong)CARRY8(uVar13,uVar12) + (ulong)CARRY8(uVar9,uVar6)) * 0x100;
  param_1[5] = uVar1 & 0xffffffffffffff;
  uVar6 = uVar13 + uVar2;
  uVar1 = uVar9 + uVar6;
  param_1[6] = uVar1 & 0xffffffffffffff;
  param_1[7] = uVar13 + (uVar11 & 0xffffffffffffff) +
               (uVar1 >> 0x38 | ((ulong)CARRY8(uVar13,uVar2) + (ulong)CARRY8(uVar9,uVar6)) * 0x100)
               & 0xffffffffffffff;
  return;
}



void gf_serialize(undefined1 *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  ulong local_58 [4];
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  ulong uStack_20;
  long local_10;
  
  local_58[0] = *param_2;
  local_58[1] = param_2[1];
  local_58[2] = param_2[2];
  local_58[3] = param_2[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2[4];
  uStack_30 = param_2[5];
  local_28 = param_2[6];
  uStack_20 = param_2[7];
  gf_strong_reduce(local_58);
  puVar1 = param_1 + 0x38;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar5 = uVar4;
    puVar6 = param_1;
    if (((uint)uVar4 | uVar3) < 8) {
      puVar6 = param_1 + 1;
      uVar5 = (ulong)((uint)uVar4 + 1);
      uVar4 = local_58[uVar4];
      *param_1 = (char)(uVar2 | uVar4);
      uVar2 = (uVar2 | uVar4) >> 8;
      if (puVar6 == puVar1) break;
      uVar3 = 0x30;
    }
    *puVar6 = (char)uVar2;
    param_1 = puVar6 + 1;
    uVar2 = uVar2 >> 8;
    uVar3 = uVar3 - 8;
    uVar4 = uVar5;
  } while (param_1 != puVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long gf_lobit(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  gf_strong_reduce(&local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(ulong)((uint)local_58 & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gf_sub(ulong *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar4 = _UNK_00100ed8;
  lVar3 = __LC1;
  uVar2 = _UNK_00100ec8;
  uVar1 = __LC0;
  uVar7 = (param_2[2] + __LC1) - param_3[2];
  uVar8 = (param_2[3] + _UNK_00100ed8) - param_3[3];
  uVar5 = (*param_2 - *param_3) + __LC1;
  uVar6 = (param_2[1] - param_3[1]) + _UNK_00100ed8;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  uVar9 = (lVar3 + param_2[6]) - param_3[6];
  uVar10 = (lVar4 + param_2[7]) - param_3[7];
  uVar11 = (param_2[4] - param_3[4]) + __LC2;
  uVar12 = (param_2[5] - param_3[5]) + _UNK_00100ee8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  param_1[4] = uVar11;
  param_1[5] = uVar12;
  uVar12 = __LC3;
  uVar13 = (param_1[6] >> 0x38) + (uVar10 & uVar1);
  uVar14 = (param_1[5] >> 0x38) + (uVar9 & uVar2);
  param_1[4] = uVar11 + (uVar10 >> 0x38);
  uVar9 = param_1[4];
  param_1[6] = uVar14;
  param_1[7] = uVar13;
  uVar11 = (param_1[4] & uVar2) + (param_1[3] >> 0x38);
  param_1[4] = uVar11;
  param_1[5] = (param_1[5] & uVar1) + (uVar9 >> 0x38);
  uVar8 = (uVar8 & uVar1) + (param_1[2] >> 0x38);
  uVar7 = (uVar7 & uVar2) + (param_1[1] >> 0x38);
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  uVar10 = (uVar5 & uVar12) + (uVar10 >> 0x38);
  uVar6 = (uVar6 & uVar12) + (uVar5 >> 0x38);
  param_1[4] = uVar11 + (uVar13 >> 0x38);
  uVar9 = param_1[6];
  param_1[1] = uVar6;
  uVar5 = param_1[4];
  param_1[6] = (param_1[5] >> 0x38) + (uVar14 & uVar2);
  param_1[7] = (uVar9 >> 0x38) + (uVar13 & uVar1);
  param_1[4] = (param_1[4] & uVar2) + (param_1[3] >> 0x38);
  param_1[5] = (param_1[5] & uVar1) + (uVar5 >> 0x38);
  uVar9 = param_1[2];
  param_1[2] = (uVar7 & uVar2) + (param_1[1] >> 0x38);
  param_1[3] = (uVar8 & uVar1) + (uVar9 >> 0x38);
  param_1[1] = (uVar6 & uVar12) + (uVar10 >> 0x38);
  *param_1 = (uVar10 & uVar12) + (uVar13 >> 0x38);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gf_add(ulong *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  uVar13 = _UNK_00100ec8;
  uVar12 = __LC0;
  lVar1 = param_2[1];
  lVar2 = param_3[1];
  uVar20 = *param_2 + *param_3;
  *param_1 = uVar20;
  param_1[1] = lVar1 + lVar2;
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  lVar5 = param_3[2];
  lVar6 = param_3[3];
  param_1[2] = lVar3 + lVar5;
  param_1[3] = lVar4 + lVar6;
  lVar7 = param_2[4];
  lVar8 = param_2[5];
  lVar9 = param_3[4];
  lVar10 = param_3[5];
  param_1[4] = lVar7 + lVar9;
  param_1[5] = lVar8 + lVar10;
  lVar8 = param_2[6];
  lVar10 = param_3[6];
  uVar16 = param_2[7] + param_3[7];
  param_1[6] = lVar8 + lVar10;
  param_1[7] = uVar16;
  uVar14 = __LC3;
  param_1[4] = lVar7 + lVar9 + (uVar16 >> 0x38);
  uVar11 = param_1[4];
  uVar15 = (uVar16 & uVar12) + (param_1[6] >> 0x38);
  uVar17 = (lVar8 + lVar10 & uVar13) + (param_1[5] >> 0x38);
  param_1[6] = uVar17;
  param_1[7] = uVar15;
  uVar21 = (param_1[4] & uVar13) + (param_1[3] >> 0x38);
  param_1[4] = uVar21;
  param_1[5] = (param_1[5] & uVar12) + (uVar11 >> 0x38);
  uVar18 = (lVar4 + lVar6 & uVar12) + (param_1[2] >> 0x38);
  uVar19 = (lVar3 + lVar5 & uVar13) + (param_1[1] >> 0x38);
  param_1[2] = uVar19;
  param_1[3] = uVar18;
  uVar22 = (uVar20 & uVar14) + (uVar16 >> 0x38);
  uVar16 = (lVar1 + lVar2 & uVar14) + (uVar20 >> 0x38);
  param_1[4] = uVar21 + (uVar15 >> 0x38);
  uVar11 = param_1[6];
  param_1[1] = uVar16;
  param_1[6] = (uVar17 & uVar13) + (param_1[5] >> 0x38);
  param_1[7] = (uVar15 & uVar12) + (uVar11 >> 0x38);
  uVar11 = param_1[4];
  param_1[4] = (param_1[3] >> 0x38) + (param_1[4] & uVar13);
  param_1[5] = (uVar11 >> 0x38) + (param_1[5] & uVar12);
  uVar11 = param_1[2];
  param_1[2] = (uVar19 & uVar13) + (param_1[1] >> 0x38);
  param_1[3] = (uVar18 & uVar12) + (uVar11 >> 0x38);
  param_1[1] = (uVar22 >> 0x38) + (uVar16 & uVar14);
  *param_1 = (uVar22 & uVar14) + (uVar15 >> 0x38);
  return;
}



long gf_hibit(undefined8 param_1)

{
  long in_FS_OFFSET;
  uint local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gf_add(local_58,param_1,param_1);
  gf_strong_reduce(local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(ulong)(local_58[0] & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong gf_deserialize(long param_1,long param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar3 = 0;
  uVar16 = 0;
  uVar6 = 0;
  uVar14 = 0;
  lVar11 = 0;
  uVar9 = 0xffffffffffffff;
  uVar10 = 0;
  lVar7 = 0;
  do {
    pbVar8 = (byte *)((ulong)uVar6 + param_2);
    uVar5 = uVar14;
    uVar15 = uVar16;
    uVar2 = uVar6;
    while (uVar2 < 0x38) {
      uVar6 = uVar6 + 1;
      bVar1 = *pbVar8;
      uVar2 = uVar3 + 8;
      bVar4 = (byte)uVar3;
      if (uVar6 == 0x38) {
        uVar12 = (uint)bVar1 & ~param_4;
        uVar13 = (ulong)uVar12 << (bVar4 & 0x3f);
        uVar16 = uVar13;
        uVar14 = 0L << (bVar4 & 0x3f) | (ulong)(uVar12 >> 0x40 - (bVar4 & 0x3f));
        if ((uVar3 & 0x40) != 0) {
          uVar16 = 0;
          uVar14 = uVar13;
        }
        uVar5 = uVar16 | uVar5;
        uVar15 = uVar14 | uVar15;
        uVar3 = uVar2;
        break;
      }
      uVar13 = (ulong)(uint)bVar1 << (bVar4 & 0x3f);
      uVar14 = uVar13;
      uVar16 = 0L << (bVar4 & 0x3f) | (ulong)(bVar1 >> 0x40 - (bVar4 & 0x3f));
      if ((uVar3 & 0x40) != 0) {
        uVar14 = 0;
        uVar16 = uVar13;
      }
      uVar5 = uVar5 | uVar14;
      uVar15 = uVar15 | uVar16;
      pbVar8 = pbVar8 + 1;
      uVar3 = uVar2;
    }
    do {
      uVar14 = uVar5 >> 0x38 | uVar15 << 8;
      uVar16 = uVar15 >> 0x38;
      if (lVar7 == 7) {
        uVar16 = 0xffffffffffffffff;
        *(ulong *)(param_1 + 0x38) = uVar5;
        if (param_3 == 0) {
          uVar16 = gf_hibit(param_1);
          uVar16 = ~uVar16;
        }
        uVar9 = (uVar15 + lVar11 + (ulong)CARRY8(uVar5,uVar10)) - (ulong)(uVar5 + uVar10 < uVar9);
        return ~((long)(uVar9 - 1 & ~uVar9) >> 0x3f) & (long)(~uVar14 & uVar14 - 1) >> 0x3f & uVar16
        ;
      }
      uVar3 = uVar3 - 0x38;
      uVar5 = uVar5 & 0xffffffffffffff;
      *(ulong *)(param_1 + lVar7 * 8) = uVar5;
      uVar10 = (lVar11 + (ulong)CARRY8(uVar10,uVar5)) - (ulong)(uVar10 + uVar5 < uVar9);
      lVar7 = lVar7 + 1;
      uVar9 = *(ulong *)(MODULUS + lVar7 * 8);
      lVar11 = (long)uVar10 >> 0x3f;
      uVar5 = uVar14;
      uVar15 = uVar16;
    } while (0x37 < uVar3);
  } while( true );
}



long gf_eq(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  ulong uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gf_sub(&local_58,param_1,param_2);
  gf_strong_reduce(&local_58);
  uVar1 = local_58 | local_48 | local_28 | local_38 | uStack_50 | uStack_40 | uStack_20 | uStack_30;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(~uVar1 & uVar1 - 1) >> 0x3f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gf_isr(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_148 [64];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  iVar1 = 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_sqr(&local_108);
  ossl_gf_mul(local_c8,param_2,&local_108);
  ossl_gf_sqr(&local_108,local_c8);
  ossl_gf_mul(local_c8,param_2,&local_108);
  ossl_gf_sqr(&local_108,local_c8);
  ossl_gf_sqr(local_88,&local_108);
  ossl_gf_sqr(&local_108,local_88);
  ossl_gf_mul(local_148,local_c8,&local_108);
  ossl_gf_sqr(&local_108,local_148);
  ossl_gf_sqr(local_88,&local_108);
  ossl_gf_sqr(&local_108,local_88);
  ossl_gf_mul(local_148,local_c8,&local_108);
  ossl_gf_sqr(local_c8,local_148);
  do {
    ossl_gf_sqr(local_88,local_c8);
    ossl_gf_sqr(local_c8,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 8;
  ossl_gf_mul(&local_108,local_148,local_c8);
  ossl_gf_sqr(local_148,&local_108);
  ossl_gf_mul(local_c8,param_2,local_148);
  ossl_gf_sqr(local_88,local_c8);
  ossl_gf_sqr(local_148,local_88);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  ossl_gf_mul(local_c8,&local_108,local_148);
  ossl_gf_sqr(local_148,local_c8);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  ossl_gf_mul(&local_108,local_c8,local_148);
  ossl_gf_sqr(local_148,&local_108);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x37;
  ossl_gf_mul(&local_108,local_c8,local_148);
  ossl_gf_sqr(local_148,&local_108);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x6f;
  ossl_gf_mul(local_c8,&local_108,local_148);
  ossl_gf_sqr(local_148,local_c8);
  ossl_gf_mul(&local_108,param_2,local_148);
  ossl_gf_sqr(local_148,&local_108);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ossl_gf_mul(&local_108,local_c8,local_148);
  ossl_gf_sqr(local_c8,&local_108);
  ossl_gf_mul(local_148,local_c8,param_2);
  *param_1 = local_108;
  param_1[1] = uStack_100;
  param_1[2] = local_f8;
  param_1[3] = uStack_f0;
  param_1[4] = local_e8;
  param_1[5] = uStack_e0;
  param_1[6] = local_d8;
  param_1[7] = uStack_d0;
  gf_eq(local_148,ONE);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



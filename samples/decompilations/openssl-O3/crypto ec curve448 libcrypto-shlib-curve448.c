
void recode_wnaf_isra_0(long param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar5 = (ulong)*param_2;
  iVar10 = 0;
  uVar9 = 1 << ((byte)(param_3 + 1U) & 0x1f);
  uVar6 = 1;
  iVar2 = (int)(0x1be / (ulong)(param_3 + 1U));
  *(undefined8 *)(param_1 + (ulong)(iVar2 + 2) * 8) = _LC0;
  uVar7 = (ulong)(iVar2 + 1);
  do {
    while (uVar6 < 0x1c) {
      uVar5 = uVar5 + (uint)((int)(*(ulong *)(param_2 + (ulong)(uVar6 >> 2) * 4) >>
                                  (sbyte)((uVar6 & 3) << 4)) << 0x10);
      if ((short)uVar5 == 0) {
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 >> 0x10;
        iVar10 = iVar10 + 0x10;
      }
      else {
LAB_00100074:
        uVar3 = (long)((int)uVar7 + -1);
        do {
          uVar7 = uVar3;
          iVar1 = 0;
          for (uVar4 = (uint)uVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar1 = iVar1 + 1;
          }
          uVar8 = (uint)uVar5 >> ((byte)iVar1 & 0x1f);
          uVar4 = uVar8 & uVar9 - 1;
          if ((uVar9 & uVar8) != 0) {
            uVar4 = uVar4 - uVar9;
          }
          *(uint *)(param_1 + 0xc + uVar7 * 8) = uVar4;
          *(int *)(param_1 + 8 + uVar7 * 8) = iVar1 + iVar10;
          uVar5 = uVar5 - (long)(int)(uVar4 << ((byte)iVar1 & 0x1f));
          uVar3 = uVar7 - 1;
        } while ((short)uVar5 != 0);
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 >> 0x10;
        iVar10 = iVar10 + 0x10;
        if (uVar6 == 0x1e) goto LAB_001000d3;
      }
    }
    if ((short)uVar5 != 0) goto LAB_00100074;
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 >> 0x10;
    iVar10 = iVar10 + 0x10;
  } while (uVar6 != 0x1e);
LAB_001000d3:
  iVar10 = (int)uVar7 + 1;
  uVar5 = 0;
  uVar6 = (iVar2 + 3) - iVar10;
  if (uVar6 != 0) {
    do {
      *(undefined8 *)(param_1 + uVar5 * 8) =
           *(undefined8 *)(param_1 + (ulong)(uint)(iVar10 + (int)uVar5) * 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void add_niels_to_pt(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  plVar1 = param_1 + 8;
  uVar10 = (param_1[0xe] + __LC1) - param_1[6];
  uVar11 = (param_1[0xf] + _UNK_00104758) - param_1[7];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (param_1[8] - *param_1) + __LC1;
  uVar14 = (param_1[9] - param_1[1]) + _UNK_00104758;
  uVar7 = (param_1[10] + __LC1) - param_1[2];
  uVar8 = (param_1[0xb] + _UNK_00104758) - param_1[3];
  uVar6 = (param_1[0xd] - param_1[5]) + _UNK_00104768;
  uVar5 = (param_1[0xc] - param_1[4]) + __LC2 + (uVar11 >> 0x38);
  local_c8 = (uVar11 >> 0x38) + (uVar12 & __LC3);
  lStack_c0 = (uVar12 >> 0x38) + (uVar14 & _UNK_00104778);
  lStack_90 = (uVar11 & __LC3) + (uVar10 >> 0x38);
  local_98 = (uVar10 & _UNK_00104778) + (uVar6 >> 0x38);
  lStack_a0 = (uVar6 & __LC3) + (uVar5 >> 0x38);
  local_a8 = (uVar5 & _UNK_00104778) + (uVar8 >> 0x38);
  lStack_b0 = (uVar8 & __LC3) + (uVar7 >> 0x38);
  local_b8 = (uVar7 & _UNK_00104778) + (uVar14 >> 0x38);
  ossl_gf_mul(&local_108,param_2,&local_c8);
  uVar5 = param_1[7] + param_1[0xf];
  uVar6 = param_1[4] + param_1[0xc] + (uVar5 >> 0x38);
  lStack_90 = (uVar5 & __LC3) + ((ulong)(param_1[6] + param_1[0xe]) >> 0x38);
  local_98 = (param_1[6] + param_1[0xe] & _UNK_00104778) +
             ((ulong)(param_1[5] + param_1[0xd]) >> 0x38);
  local_c8 = (uVar5 >> 0x38) + (*param_1 + param_1[8] & __LC3);
  lStack_c0 = ((ulong)(*param_1 + param_1[8]) >> 0x38) + (param_1[1] + param_1[9] & _UNK_00104778);
  lStack_a0 = (param_1[5] + param_1[0xd] & __LC3) + (uVar6 >> 0x38);
  local_a8 = (uVar6 & _UNK_00104778) + ((ulong)(param_1[3] + param_1[0xb]) >> 0x38);
  lStack_b0 = (param_1[3] + param_1[0xb] & __LC3) + ((ulong)(param_1[2] + param_1[10]) >> 0x38);
  local_b8 = (param_1[2] + param_1[10] & _UNK_00104778) + ((ulong)(param_1[1] + param_1[9]) >> 0x38)
  ;
  ossl_gf_mul(plVar1,param_2 + 0x40,&local_c8);
  ossl_gf_mul(param_1,param_2 + 0x80);
  uVar7 = _UNK_00104778;
  uVar6 = __LC3;
  lVar4 = _UNK_00104768;
  lVar9 = __LC2;
  lVar3 = _UNK_00104758;
  lVar2 = __LC1;
  uVar8 = lStack_d0 + param_1[0xf];
  uVar5 = (uVar8 >> 0x38) + local_e8 + param_1[0xc];
  lStack_50 = (uVar8 & __LC3) + ((ulong)(local_d8 + param_1[0xe]) >> 0x38);
  local_58 = (local_d8 + param_1[0xe] & _UNK_00104778) + ((ulong)(lStack_e0 + param_1[0xd]) >> 0x38)
  ;
  lStack_60 = (lStack_e0 + param_1[0xd] & __LC3) + (uVar5 >> 0x38);
  local_68 = (uVar5 & _UNK_00104778) + ((ulong)(lStack_f0 + param_1[0xb]) >> 0x38);
  lStack_70 = (lStack_f0 + param_1[0xb] & __LC3) + ((ulong)(local_f8 + param_1[10]) >> 0x38);
  local_78 = (local_f8 + param_1[10] & _UNK_00104778) + ((ulong)(lStack_100 + param_1[9]) >> 0x38);
  local_88 = (uVar8 >> 0x38) + (local_108 + param_1[8] & __LC3);
  lStack_80 = ((ulong)(local_108 + param_1[8]) >> 0x38) + (lStack_100 + param_1[9] & _UNK_00104778);
  uVar13 = (__LC1 - local_108) + param_1[8];
  uVar15 = (_UNK_00104758 - lStack_100) + param_1[9];
  uVar5 = (__LC1 - local_f8) + param_1[10];
  uVar8 = (_UNK_00104758 - lStack_f0) + param_1[0xb];
  uVar14 = (_UNK_00104768 - lStack_e0) + param_1[0xd];
  uVar10 = (__LC1 - local_d8) + param_1[0xe];
  uVar11 = (_UNK_00104758 - lStack_d0) + param_1[0xf];
  uVar12 = (__LC2 - local_e8) + param_1[0xc] + (uVar11 >> 0x38);
  lStack_90 = (uVar11 & __LC3) + (uVar10 >> 0x38);
  local_98 = (uVar10 & _UNK_00104778) + (uVar14 >> 0x38);
  local_c8 = (uVar11 >> 0x38) + (uVar13 & __LC3);
  lStack_c0 = (uVar13 >> 0x38) + (uVar15 & _UNK_00104778);
  lStack_a0 = (uVar14 & __LC3) + (uVar12 >> 0x38);
  local_a8 = (uVar12 & _UNK_00104778) + (uVar8 >> 0x38);
  lStack_b0 = (uVar8 & __LC3) + (uVar5 >> 0x38);
  local_b8 = (uVar5 & _UNK_00104778) + (uVar15 >> 0x38);
  uVar14 = (param_1[0x10] - *param_1) + __LC1;
  uVar13 = (param_1[0x11] - param_1[1]) + _UNK_00104758;
  param_1[8] = uVar14;
  param_1[9] = uVar13;
  lVar9 = lVar9 + (param_1[0x14] - param_1[4]);
  uVar8 = (param_1[0x12] - param_1[2]) + lVar2;
  uVar10 = (param_1[0x13] - param_1[3]) + lVar3;
  param_1[0xc] = lVar9;
  param_1[0xd] = lVar4 + (param_1[0x15] - param_1[5]);
  uVar11 = lVar2 + (param_1[0x16] - param_1[6]);
  uVar12 = lVar3 + (param_1[0x17] - param_1[7]);
  param_1[10] = uVar8;
  param_1[0xb] = uVar10;
  param_1[0xe] = uVar11;
  param_1[0xf] = uVar12;
  param_1[0xc] = lVar9 + (uVar12 >> 0x38);
  uVar5 = param_1[0xe];
  param_1[0xe] = ((ulong)param_1[0xd] >> 0x38) + (uVar11 & uVar7);
  param_1[0xf] = (uVar5 >> 0x38) + (uVar12 & uVar6);
  uVar5 = param_1[0xc];
  param_1[0xc] = ((ulong)param_1[0xb] >> 0x38) + (param_1[0xc] & uVar7);
  param_1[0xd] = (uVar5 >> 0x38) + (param_1[0xd] & uVar6);
  uVar5 = param_1[10];
  param_1[10] = (uVar8 & uVar7) + ((ulong)param_1[9] >> 0x38);
  param_1[0xb] = (uVar10 & uVar6) + (uVar5 >> 0x38);
  param_1[8] = (uVar12 >> 0x38) + (uVar14 & uVar6);
  param_1[9] = (uVar14 >> 0x38) + (uVar13 & uVar7);
  uVar5 = param_1[0x17] + param_1[7];
  uVar8 = param_1[0x14] + param_1[4] + (uVar5 >> 0x38);
  lStack_d0 = (uVar5 & uVar6) + ((ulong)(param_1[0x16] + param_1[6]) >> 0x38);
  local_d8 = (param_1[0x16] + param_1[6] & uVar7) + ((ulong)(param_1[0x15] + param_1[5]) >> 0x38);
  local_108 = (uVar5 >> 0x38) + (param_1[0x10] + *param_1 & uVar6);
  lStack_100 = ((ulong)(param_1[0x10] + *param_1) >> 0x38) + (param_1[0x11] + param_1[1] & uVar7);
  lStack_e0 = (param_1[0x15] + param_1[5] & uVar6) + (uVar8 >> 0x38);
  local_e8 = (uVar8 & uVar7) + ((ulong)(param_1[3] + param_1[0x13]) >> 0x38);
  lStack_f0 = (param_1[3] + param_1[0x13] & uVar6) + ((ulong)(param_1[2] + param_1[0x12]) >> 0x38);
  local_f8 = (param_1[2] + param_1[0x12] & uVar7) + ((ulong)(param_1[0x11] + param_1[1]) >> 0x38);
  ossl_gf_mul(param_1 + 0x10,&local_108,plVar1);
  ossl_gf_mul(param_1,plVar1,&local_c8);
  ossl_gf_mul(plVar1,&local_108,&local_88);
  if (param_3 == 0) {
    ossl_gf_mul(param_1 + 0x18,&local_c8,&local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void point_double_internal(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  plVar1 = param_1 + 0x18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_sqr(&local_c8);
  ossl_gf_sqr(&local_148,param_2 + 8);
  uVar7 = _UNK_00104778;
  uVar6 = __LC3;
  uVar11 = lStack_90 + lStack_110;
  uVar8 = local_a8 + local_128 + (uVar11 >> 0x38);
  uVar9 = lStack_b0 + lStack_130 & __LC3;
  uVar12 = local_b8 + local_138 & _UNK_00104778;
  lStack_50 = (uVar11 & __LC3) + ((ulong)(local_98 + local_118) >> 0x38);
  local_58 = (local_98 + local_118 & _UNK_00104778) + ((ulong)(lStack_a0 + lStack_120) >> 0x38);
  local_88 = (uVar11 >> 0x38) + (local_c8 + local_148 & __LC3);
  lStack_80 = ((ulong)(local_c8 + local_148) >> 0x38) + (lStack_c0 + lStack_140 & _UNK_00104778);
  lVar2 = param_2[9];
  lVar3 = param_2[1];
  uVar16 = param_2[8] + *param_2;
  uVar11 = lStack_a0 + lStack_120 & __LC3;
  uVar17 = uVar8 & _UNK_00104778;
  param_1[0x18] = uVar16;
  param_1[0x19] = lVar2 + lVar3;
  lStack_60 = uVar11 + (uVar8 >> 0x38);
  local_68 = uVar17 + ((ulong)(lStack_b0 + lStack_130) >> 0x38);
  lStack_70 = uVar9 + ((ulong)(local_b8 + local_138) >> 0x38);
  local_78 = uVar12 + ((ulong)(lStack_c0 + lStack_140) >> 0x38);
  lVar10 = param_2[10];
  lVar13 = param_2[0xb];
  lVar14 = param_2[2];
  lVar15 = param_2[3];
  param_1[0x1a] = lVar10 + lVar14;
  param_1[0x1b] = lVar13 + lVar15;
  lVar19 = param_2[0xc];
  lVar21 = param_2[0xd];
  lVar4 = param_2[4];
  lVar5 = param_2[5];
  param_1[0x1c] = lVar19 + lVar4;
  param_1[0x1d] = lVar21 + lVar5;
  lVar21 = param_2[0xe];
  lVar5 = param_2[6];
  uVar8 = param_2[0xf] + param_2[7];
  param_1[0x1e] = lVar21 + lVar5;
  param_1[0x1f] = uVar8;
  uVar9 = param_1[0x1e];
  param_1[0x1c] = lVar19 + lVar4 + (uVar8 >> 0x38);
  uVar12 = param_1[0x1c];
  param_1[0x1e] = (lVar21 + lVar5 & uVar7) + ((ulong)param_1[0x1d] >> 0x38);
  param_1[0x1f] = (uVar8 & uVar6) + (uVar9 >> 0x38);
  param_1[0x1c] = (param_1[0x1c] & uVar7) + ((ulong)param_1[0x1b] >> 0x38);
  param_1[0x1d] = (param_1[0x1d] & uVar6) + (uVar12 >> 0x38);
  uVar9 = param_1[0x19];
  uVar12 = param_1[0x1a];
  param_1[0x18] = (uVar8 >> 0x38) + (uVar16 & uVar6);
  param_1[0x19] = (uVar16 >> 0x38) + (lVar2 + lVar3 & uVar7);
  param_1[0x1a] = (lVar10 + lVar14 & uVar7) + (uVar9 >> 0x38);
  param_1[0x1b] = (lVar13 + lVar15 & uVar6) + (uVar12 >> 0x38);
  ossl_gf_sqr(&local_108,plVar1);
  uVar7 = _UNK_00104778;
  uVar6 = __LC3;
  lVar3 = _UNK_00104758;
  lVar2 = __LC1;
  uVar8 = (local_d8 + __LC1) - local_58;
  uVar11 = (lStack_d0 + _UNK_00104758) - lStack_50;
  uVar16 = (lStack_e0 + _UNK_00104768) - lStack_60;
  uVar9 = (local_f8 + __LC1) - local_78;
  uVar12 = (lStack_f0 + _UNK_00104758) - lStack_70;
  uVar18 = (local_108 + __LC1) - local_88;
  uVar20 = (lStack_100 + _UNK_00104758) - lStack_80;
  uVar17 = ((local_e8 + __LC2) - local_68) + (uVar11 >> 0x38);
  lStack_d0 = (uVar11 & __LC3) + (uVar8 >> 0x38);
  local_d8 = (uVar8 & _UNK_00104778) + (uVar16 >> 0x38);
  lStack_e0 = (uVar16 & __LC3) + (uVar17 >> 0x38);
  local_e8 = (uVar17 & _UNK_00104778) + (uVar12 >> 0x38);
  local_108 = (uVar11 >> 0x38) + (uVar18 & __LC3);
  lStack_100 = (uVar18 >> 0x38) + (uVar20 & _UNK_00104778);
  lStack_f0 = (uVar12 & __LC3) + (uVar9 >> 0x38);
  local_f8 = (uVar9 & _UNK_00104778) + (uVar20 >> 0x38);
  uVar18 = (local_148 + __LC1) - local_c8;
  uVar20 = (lStack_140 + _UNK_00104758) - lStack_c0;
  lStack_120 = lStack_120 + _UNK_00104768;
  local_a8 = (local_128 + __LC2) - local_a8;
  local_138 = local_138 + __LC1;
  lStack_130 = lStack_130 + _UNK_00104758;
  param_1[0x18] = uVar18;
  param_1[0x19] = uVar20;
  uVar8 = local_138 - local_b8;
  uVar11 = lStack_130 - lStack_b0;
  param_1[0x1a] = uVar8;
  param_1[0x1b] = uVar11;
  param_1[0x1c] = local_a8;
  param_1[0x1d] = lStack_120 - lStack_a0;
  uVar17 = (local_118 + lVar2) - local_98;
  uVar16 = (lStack_110 + lVar3) - lStack_90;
  param_1[0x1e] = uVar17;
  param_1[0x1f] = uVar16;
  param_1[0x1c] = local_a8 + (uVar16 >> 0x38);
  uVar9 = param_1[0x1e];
  uVar12 = param_1[0x1c];
  param_1[0x1e] = ((ulong)param_1[0x1d] >> 0x38) + (uVar17 & uVar7);
  param_1[0x1f] = (uVar9 >> 0x38) + (uVar16 & uVar6);
  param_1[0x1c] = (param_1[0x1c] & uVar7) + ((ulong)param_1[0x1b] >> 0x38);
  param_1[0x1d] = (param_1[0x1d] & uVar6) + (uVar12 >> 0x38);
  uVar9 = param_1[0x19];
  uVar12 = param_1[0x1a];
  param_1[0x18] = (uVar16 >> 0x38) + (uVar18 & uVar6);
  param_1[0x19] = (uVar18 >> 0x38) + (uVar20 & uVar7);
  param_1[0x1a] = (uVar8 & uVar7) + (uVar9 >> 0x38);
  param_1[0x1b] = (uVar11 & uVar6) + (uVar12 >> 0x38);
  ossl_gf_sqr(param_1,param_2 + 0x10);
  uVar6 = _UNK_00104778;
  uVar12 = __LC3;
  param_1[0x12] = param_1[2] * 2;
  lVar3 = _UNK_00104758;
  lVar2 = __LC1;
  param_1[0x11] = param_1[1] * 2;
  uVar9 = param_1[0x11];
  param_1[0x13] = param_1[3] * 2;
  param_1[0x15] = param_1[5] * 2;
  param_1[0x16] = param_1[6] * 2;
  param_1[0x17] = param_1[7] * 2;
  uVar7 = (ulong)(param_1[7] * 2) >> 0x38;
  param_1[0x14] = uVar7 + param_1[4] * 2;
  lVar19 = ((ulong)param_1[0x16] >> 0x38) + (param_1[0x17] & uVar12);
  lVar21 = ((ulong)param_1[0x15] >> 0x38) + (param_1[0x16] & uVar6);
  lVar10 = (param_1[0x15] & uVar12) + ((ulong)param_1[0x14] >> 0x38);
  lVar13 = (param_1[0x14] & uVar6) + ((ulong)param_1[0x13] >> 0x38);
  param_1[0x10] = (*param_1 * 2 & 0xffffffffffffffU) + uVar7;
  param_1[0x11] = (param_1[1] * 2 & 0xffffffffffffffU) + ((ulong)(*param_1 * 2) >> 0x38);
  param_1[0x16] = lVar21;
  param_1[0x17] = lVar19;
  lVar14 = (param_1[0x13] & uVar12) + ((ulong)param_1[0x12] >> 0x38);
  lVar15 = (param_1[0x12] & uVar6) + (uVar9 >> 0x38);
  param_1[0x14] = lVar13;
  param_1[0x15] = lVar10;
  param_1[0x12] = lVar15;
  param_1[0x13] = lVar14;
  uVar11 = lVar15 + (lVar2 - param_1[0x1a]);
  uVar17 = lVar14 + (lVar3 - param_1[0x1b]);
  uVar18 = (param_1[0x10] + lVar2) - param_1[0x18];
  uVar20 = (param_1[0x11] + lVar3) - param_1[0x19];
  uVar9 = (lVar2 - param_1[0x1e]) + lVar21;
  uVar7 = (lVar3 - param_1[0x1f]) + lVar19;
  uVar16 = (_UNK_00104768 - param_1[0x1d]) + lVar10;
  uVar8 = (uVar7 >> 0x38) + (__LC2 - param_1[0x1c]) + lVar13;
  local_148 = (uVar7 >> 0x38) + (uVar18 & uVar12);
  lStack_140 = (uVar18 >> 0x38) + (uVar20 & uVar6);
  lStack_110 = (uVar9 >> 0x38) + (uVar7 & uVar12);
  local_118 = (uVar16 >> 0x38) + (uVar9 & uVar6);
  lStack_120 = (uVar16 & uVar12) + (uVar8 >> 0x38);
  local_128 = (uVar8 & uVar6) + (uVar17 >> 0x38);
  lStack_130 = (uVar11 >> 0x38) + (uVar17 & uVar12);
  local_138 = (uVar20 >> 0x38) + (uVar11 & uVar6);
  ossl_gf_mul(param_1,&local_148,&local_108);
  ossl_gf_mul(param_1 + 0x10,plVar1,&local_148);
  ossl_gf_mul(param_1 + 8,plVar1,&local_88);
  if (param_3 == 0) {
    ossl_gf_mul(plVar1,&local_108,&local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_niels_from_pt(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  plVar1 = param_1 + 8;
  uVar10 = (param_1[0xe] + __LC1) - param_1[6];
  uVar11 = (param_1[0xf] + _UNK_00104758) - param_1[7];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (param_1[0xd] - param_1[5]) + _UNK_00104768;
  uVar8 = (param_1[10] + __LC1) - param_1[2];
  uVar9 = (param_1[0xb] + _UNK_00104758) - param_1[3];
  uVar14 = (param_1[8] - *param_1) + __LC1;
  uVar16 = (param_1[9] - param_1[1]) + _UNK_00104758;
  uVar6 = (param_1[0xc] - param_1[4]) + __LC2 + (uVar11 >> 0x38);
  local_c8 = (uVar11 >> 0x38) + (uVar14 & __LC3);
  lStack_c0 = (uVar14 >> 0x38) + (uVar16 & _UNK_00104778);
  lStack_90 = (uVar11 & __LC3) + (uVar10 >> 0x38);
  local_98 = (uVar10 & _UNK_00104778) + (uVar7 >> 0x38);
  lStack_a0 = (uVar7 & __LC3) + (uVar6 >> 0x38);
  local_a8 = (uVar6 & _UNK_00104778) + (uVar9 >> 0x38);
  lStack_b0 = (uVar9 & __LC3) + (uVar8 >> 0x38);
  local_b8 = (uVar8 & _UNK_00104778) + (uVar16 >> 0x38);
  ossl_gf_mul(&local_108,param_2 + 0x40,&local_c8);
  uVar6 = param_1[7] + param_1[0xf];
  uVar7 = param_1[4] + param_1[0xc] + (uVar6 >> 0x38);
  lStack_90 = (uVar6 & __LC3) + ((ulong)(param_1[6] + param_1[0xe]) >> 0x38);
  local_98 = (param_1[6] + param_1[0xe] & _UNK_00104778) +
             ((ulong)(param_1[5] + param_1[0xd]) >> 0x38);
  local_c8 = (uVar6 >> 0x38) + (*param_1 + param_1[8] & __LC3);
  lStack_c0 = ((ulong)(*param_1 + param_1[8]) >> 0x38) + (param_1[1] + param_1[9] & _UNK_00104778);
  lStack_a0 = (param_1[5] + param_1[0xd] & __LC3) + (uVar7 >> 0x38);
  local_a8 = (uVar7 & _UNK_00104778) + ((ulong)(param_1[3] + param_1[0xb]) >> 0x38);
  lStack_b0 = (param_1[3] + param_1[0xb] & __LC3) + ((ulong)(param_1[2] + param_1[10]) >> 0x38);
  local_b8 = (param_1[2] + param_1[10] & _UNK_00104778) + ((ulong)(param_1[1] + param_1[9]) >> 0x38)
  ;
  ossl_gf_mul(plVar1,param_2,&local_c8);
  ossl_gf_mul(param_1,param_2 + 0x80);
  uVar8 = _UNK_00104778;
  uVar7 = __LC3;
  lVar5 = _UNK_00104768;
  lVar4 = __LC2;
  lVar3 = _UNK_00104758;
  lVar2 = __LC1;
  uVar9 = lStack_d0 + param_1[0xf];
  uVar6 = (uVar9 >> 0x38) + local_e8 + param_1[0xc];
  lStack_50 = (uVar9 & __LC3) + ((ulong)(local_d8 + param_1[0xe]) >> 0x38);
  local_58 = (local_d8 + param_1[0xe] & _UNK_00104778) + ((ulong)(lStack_e0 + param_1[0xd]) >> 0x38)
  ;
  lStack_60 = (lStack_e0 + param_1[0xd] & __LC3) + (uVar6 >> 0x38);
  local_68 = (uVar6 & _UNK_00104778) + ((ulong)(lStack_f0 + param_1[0xb]) >> 0x38);
  lStack_70 = (lStack_f0 + param_1[0xb] & __LC3) + ((ulong)(local_f8 + param_1[10]) >> 0x38);
  local_78 = (local_f8 + param_1[10] & _UNK_00104778) + ((ulong)(lStack_100 + param_1[9]) >> 0x38);
  local_88 = (uVar9 >> 0x38) + (local_108 + param_1[8] & __LC3);
  lStack_80 = ((ulong)(local_108 + param_1[8]) >> 0x38) + (lStack_100 + param_1[9] & _UNK_00104778);
  uVar15 = (__LC1 - local_108) + param_1[8];
  uVar17 = (_UNK_00104758 - lStack_100) + param_1[9];
  uVar6 = (__LC1 - local_f8) + param_1[10];
  uVar10 = (_UNK_00104758 - lStack_f0) + param_1[0xb];
  uVar13 = (_UNK_00104768 - lStack_e0) + param_1[0xd];
  uVar14 = (__LC1 - local_d8) + param_1[0xe];
  uVar16 = (_UNK_00104758 - lStack_d0) + param_1[0xf];
  uVar9 = uVar10 & __LC3;
  uVar11 = uVar6 & _UNK_00104778;
  uVar12 = (__LC2 - local_e8) + param_1[0xc] + (uVar16 >> 0x38);
  lStack_90 = (uVar16 & __LC3) + (uVar14 >> 0x38);
  local_98 = (uVar14 & _UNK_00104778) + (uVar13 >> 0x38);
  local_c8 = (uVar16 >> 0x38) + (uVar15 & __LC3);
  lStack_c0 = (uVar15 >> 0x38) + (uVar17 & _UNK_00104778);
  uVar14 = param_1[0x10] + *param_1;
  lStack_a0 = (uVar13 & __LC3) + (uVar12 >> 0x38);
  local_a8 = (uVar12 & _UNK_00104778) + (uVar10 >> 0x38);
  uVar10 = param_1[0x17] + param_1[7];
  param_1[0xc] = param_1[4] + param_1[0x14];
  param_1[0xd] = param_1[5] + param_1[0x15];
  lStack_b0 = uVar9 + (uVar6 >> 0x38);
  local_b8 = uVar11 + (uVar17 >> 0x38);
  param_1[0xe] = param_1[0x16] + param_1[6];
  param_1[0xf] = uVar10;
  param_1[8] = uVar14;
  param_1[9] = param_1[0x11] + param_1[1];
  param_1[0xc] = (uVar10 >> 0x38) + param_1[4] + param_1[0x14];
  uVar6 = param_1[0xe];
  param_1[10] = param_1[0x12] + param_1[2];
  param_1[0xb] = param_1[0x13] + param_1[3];
  param_1[0xe] = ((ulong)param_1[0xd] >> 0x38) + (param_1[0x16] + param_1[6] & uVar8);
  param_1[0xf] = (uVar6 >> 0x38) + (uVar10 & uVar7);
  uVar6 = param_1[0xc];
  param_1[0xc] = ((ulong)param_1[0xb] >> 0x38) + (param_1[0xc] & uVar8);
  param_1[0xd] = (uVar6 >> 0x38) + (param_1[0xd] & uVar7);
  uVar6 = param_1[10];
  param_1[10] = (param_1[0x12] + param_1[2] & uVar8) + ((ulong)param_1[9] >> 0x38);
  param_1[0xb] = (param_1[0x13] + param_1[3] & uVar7) + (uVar6 >> 0x38);
  param_1[8] = (uVar10 >> 0x38) + (uVar14 & uVar7);
  param_1[9] = (uVar14 >> 0x38) + (param_1[0x11] + param_1[1] & uVar8);
  uVar13 = (param_1[0x15] - param_1[5]) + lVar5;
  uVar6 = (param_1[0x12] - param_1[2]) + lVar2;
  uVar9 = (param_1[0x13] - param_1[3]) + lVar3;
  uVar10 = (param_1[0x16] - param_1[6]) + lVar2;
  uVar11 = (param_1[0x17] - param_1[7]) + lVar3;
  uVar16 = (param_1[0x10] - *param_1) + lVar2;
  uVar12 = (param_1[0x11] - param_1[1]) + lVar3;
  uVar14 = (uVar11 >> 0x38) + (param_1[0x14] - param_1[4]) + lVar4;
  lStack_d0 = (uVar11 & uVar7) + (uVar10 >> 0x38);
  local_d8 = (uVar10 & uVar8) + (uVar13 >> 0x38);
  local_108 = (uVar11 >> 0x38) + (uVar16 & uVar7);
  lStack_100 = (uVar16 >> 0x38) + (uVar12 & uVar8);
  lStack_e0 = (uVar13 & uVar7) + (uVar14 >> 0x38);
  local_e8 = (uVar14 & uVar8) + (uVar9 >> 0x38);
  lStack_f0 = (uVar9 & uVar7) + (uVar6 >> 0x38);
  local_f8 = (uVar6 & uVar8) + (uVar12 >> 0x38);
  ossl_gf_mul(param_1 + 0x10,&local_108,plVar1);
  ossl_gf_mul(param_1,plVar1,&local_c8);
  ossl_gf_mul(plVar1,&local_108,&local_88);
  if (param_3 == 0) {
    ossl_gf_mul(param_1 + 0x18,&local_c8,&local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_point_double(undefined8 param_1,undefined8 param_2)

{
  point_double_internal(param_1,param_2,0);
  return;
}



void ossl_curve448_point_eq(long param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_a8 [64];
  undefined1 local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_mul(auStack_a8,param_1 + 0x40,param_2);
  ossl_gf_mul(local_68,param_2 + 0x40,param_1);
  gf_eq(auStack_a8,local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_curve448_point_valid(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1 + 0x80;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_mul(local_108,param_1,param_1 + 0x40);
  ossl_gf_mul(local_c8,lVar1,param_1 + 0xc0);
  uVar2 = gf_eq(local_108,local_c8);
  ossl_gf_sqr(local_108,param_1);
  ossl_gf_sqr(local_c8,param_1 + 0x40);
  gf_sub(local_108,local_c8,local_108);
  ossl_gf_sqr(local_c8,param_1 + 0xc0);
  ossl_gf_mulw_unsigned(local_88,local_c8,0x98aa);
  gf_sub(local_88,ZERO,local_88);
  ossl_gf_sqr(local_c8,lVar1);
  gf_add(local_c8,local_c8,local_88);
  uVar3 = gf_eq(local_108,local_c8);
  uVar4 = gf_eq(lVar1,ZERO);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ~uVar4 & uVar2 & uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_precomputed_scalarmul(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  long in_FS_OFFSET;
  byte bVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  int local_1a0;
  ulong local_188 [8];
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_curve448_scalar_add(local_188,param_3,precomputed_scalarmul_adjustment);
  ossl_curve448_scalar_halve(local_188,local_188);
  local_1a0 = 0x12;
  while( true ) {
    uVar17 = (ulong)(local_1a0 + 0x47);
    iVar15 = 0;
    pbVar18 = (byte *)(param_2 + 0xc00);
    while( true ) {
      while( true ) {
        uVar3 = (uint)uVar17;
        uVar10 = (int)(local_188[uVar3 - 0x36 >> 6] >> ((byte)(uVar3 - 0x36) & 0x3f)) * 2 & 2U |
                 (uint)((local_188[uVar3 - 0x24 >> 6] >> ((byte)(uVar3 - 0x24) & 0x3f)) << 2) & 4 |
                 (uint)(local_188[uVar3 - 0x48 >> 6] >> ((byte)(uVar3 - 0x48) & 0x3f)) & 1 |
                 (uint)((local_188[uVar3 - 0x12 >> 6] >> ((byte)(uVar3 - 0x12) & 0x3f)) << 3) & 8;
        if (uVar3 < 0x1be) {
          uVar10 = uVar10 | (uint)((local_188[uVar17 >> 6] >> ((byte)uVar17 & 0x3f)) << 4) & 0x10;
        }
        pbVar16 = pbVar18 + -0xc00;
        uVar1 = ((int)uVar10 >> 4) - 1;
        uVar17 = (ulong)(int)uVar1;
        puVar11 = &local_108;
        for (lVar13 = 0x18; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + (ulong)bVar19 * -2 + 1;
        }
        uVar12 = (ulong)((uVar1 ^ uVar10) & 0xf);
        do {
          puVar11 = &local_108;
          pbVar14 = pbVar16;
          do {
            bVar2 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            *(byte *)puVar11 =
                 (byte)*puVar11 |
                 bVar2 & (char)(~(byte)(uVar12 >> 0x38) & (byte)(uVar12 - 1 >> 0x38)) >> 7;
            puVar11 = (ulong *)((long)puVar11 + 1);
          } while (puVar11 != &local_48);
          pbVar16 = pbVar16 + 0xc0;
          uVar12 = uVar12 - 1;
        } while (pbVar16 != pbVar18);
        uVar25 = (local_c8 ^ local_108) & uVar17;
        uVar26 = (uStack_c0 ^ uStack_100) & uVar17;
        uVar23 = (local_b8 ^ local_f8) & uVar17;
        uVar24 = (uStack_b0 ^ uStack_f0) & uVar17;
        uVar21 = (local_a8 ^ local_e8) & uVar17;
        uVar22 = (uStack_a0 ^ uStack_e0) & uVar17;
        uVar12 = (local_98 ^ local_d8) & uVar17;
        uVar20 = (uStack_90 ^ uStack_d0) & uVar17;
        local_108 = local_108 ^ uVar25;
        uStack_100 = uStack_100 ^ uVar26;
        local_c8 = uVar25 ^ local_c8;
        uStack_c0 = uVar26 ^ uStack_c0;
        local_f8 = local_f8 ^ uVar23;
        uStack_f0 = uStack_f0 ^ uVar24;
        local_b8 = uVar23 ^ local_b8;
        uStack_b0 = uVar24 ^ uStack_b0;
        local_e8 = local_e8 ^ uVar21;
        uStack_e0 = uStack_e0 ^ uVar22;
        local_a8 = uVar21 ^ local_a8;
        uStack_a0 = uVar22 ^ uStack_a0;
        local_d8 = local_d8 ^ uVar12;
        uStack_d0 = uStack_d0 ^ uVar20;
        local_98 = uVar12 ^ local_98;
        uStack_90 = uVar20 ^ uStack_90;
        gf_sub(&local_148,ZERO,&local_88);
        uVar12 = (ulong)-((int)uVar10 >> 4);
        local_88 = local_88 & uVar12 | local_148 & uVar17;
        local_80 = local_140 & uVar17 | local_80 & uVar12;
        local_78 = local_138 & uVar17 | local_78 & uVar12;
        local_70 = local_130 & uVar17 | local_70 & uVar12;
        local_68 = local_128 & uVar17 | local_68 & uVar12;
        local_60 = local_120 & uVar17 | local_60 & uVar12;
        local_58 = local_118 & uVar17 | local_58 & uVar12;
        local_50 = uVar12 & local_50 | uVar17 & local_110;
        if ((iVar15 != 0) || (local_1a0 != 0x12)) break;
        pbVar18 = pbVar18 + 0xc00;
        gf_add(param_1 + 0x40,&local_c8,&local_108);
        gf_sub(param_1,&local_c8,&local_108);
        ossl_gf_mul(param_1 + 0xc0,param_1 + 0x40,param_1);
        uVar8 = ONE._40_8_;
        uVar7 = ONE._32_8_;
        uVar6 = ONE._24_8_;
        uVar5 = ONE._16_8_;
        uVar4 = ONE._8_8_;
        iVar15 = 1;
        *(undefined8 *)(param_1 + 0x80) = ONE._0_8_;
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        uVar9 = ONE._56_8_;
        uVar4 = ONE._48_8_;
        uVar17 = (ulong)(uVar3 + 0x5a);
        *(undefined8 *)(param_1 + 0x90) = uVar5;
        *(undefined8 *)(param_1 + 0x98) = uVar6;
        *(undefined8 *)(param_1 + 0xa0) = uVar7;
        *(undefined8 *)(param_1 + 0xa8) = uVar8;
        *(undefined8 *)(param_1 + 0xb0) = uVar4;
        *(undefined8 *)(param_1 + 0xb8) = uVar9;
      }
      add_niels_to_pt(param_1,&local_108,local_1a0 != 1 && iVar15 == 4);
      iVar15 = iVar15 + 1;
      if (iVar15 == 5) break;
      pbVar18 = pbVar18 + 0xc00;
      uVar17 = (ulong)(uVar3 + 0x5a);
    }
    if (local_1a0 + -1 == 0) break;
    point_double_internal(param_1,param_1,0);
    local_1a0 = local_1a0 + -1;
  }
  OPENSSL_cleanse(&local_108,0xc0);
  OPENSSL_cleanse(local_188,0x38);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  ulong uStack_57;
  long local_40;
  
  puVar1 = param_1 + 8;
  puVar2 = param_1 + 0x10;
  local_68 = param_2[4];
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = *(ulong *)((long)param_2 + 0x31);
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  uStack_60 = (undefined1)param_2[5];
  uStack_5f = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  puVar3 = param_1 + 0x18;
  uStack_57 = uVar15 & 0x7fffffffffffffff;
  uVar12 = gf_deserialize(puVar1,&local_88,1,0);
  uVar4 = uStack_57 >> 0x38;
  ossl_gf_sqr(param_1,puVar1);
  gf_sub(puVar2,ONE,param_1);
  ossl_gf_mulw_unsigned(puVar3,param_1,0x98a9);
  gf_sub(puVar3,ZERO,puVar3);
  gf_sub(puVar3,ONE,puVar3);
  ossl_gf_mul(param_1,puVar2,puVar3);
  uVar13 = gf_isr(puVar3,param_1);
  ossl_gf_mul(param_1,puVar3,puVar2);
  uVar14 = gf_lobit(param_1);
  uVar14 = -(ulong)((uVar15 & 0x8000000000000000) == 0) ^ uVar14;
  gf_sub(&local_c8,ZERO,param_1);
  uVar11 = ONE._56_8_;
  uVar10 = ONE._48_8_;
  uVar9 = ONE._40_8_;
  uVar8 = ONE._32_8_;
  uVar7 = ONE._24_8_;
  uVar6 = ONE._16_8_;
  uVar5 = ONE._8_8_;
  uVar15 = ~uVar14;
  param_1[0x10] = ONE._0_8_;
  param_1[0x11] = uVar5;
  *param_1 = local_c8 & uVar15 | *param_1 & uVar14;
  param_1[0x12] = uVar6;
  param_1[0x13] = uVar7;
  param_1[0x14] = uVar8;
  param_1[0x15] = uVar9;
  param_1[1] = local_c0 & uVar15 | param_1[1] & uVar14;
  param_1[2] = local_b8 & uVar15 | param_1[2] & uVar14;
  param_1[3] = local_b0 & uVar15 | param_1[3] & uVar14;
  param_1[4] = local_a8 & uVar15 | param_1[4] & uVar14;
  param_1[5] = local_a0 & uVar15 | param_1[5] & uVar14;
  param_1[7] = uVar14 & param_1[7] | uVar15 & local_90;
  param_1[6] = local_98 & uVar15 | param_1[6] & uVar14;
  param_1[0x16] = uVar10;
  param_1[0x17] = uVar11;
  ossl_gf_sqr(local_108,param_1);
  ossl_gf_sqr(local_188,puVar1);
  gf_add(&local_c8,local_108,local_188);
  gf_add(puVar3,puVar1,param_1);
  ossl_gf_sqr(local_148,puVar3);
  gf_sub(local_148,local_148,&local_c8);
  gf_sub(puVar3,local_188,local_108);
  ossl_gf_sqr(param_1,puVar2);
  gf_add(puVar2,param_1,param_1);
  gf_sub(local_188,puVar2,&local_c8);
  ossl_gf_mul(param_1,local_188,local_148);
  ossl_gf_mul(puVar2,puVar3,local_188);
  ossl_gf_mul(puVar1,puVar3,&local_c8);
  ossl_gf_mul(puVar3,local_148,&local_c8);
  OPENSSL_cleanse(local_188,0x40);
  OPENSSL_cleanse(local_148,0x40);
  OPENSSL_cleanse(local_108,0x40);
  OPENSSL_cleanse(&local_c8,0x40);
  OPENSSL_cleanse(&local_88,0x39);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(~uVar4 & uVar4 - 1) >> 0x3f & uVar12 & uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_x448_int(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  int local_37c;
  ulong local_288;
  ulong uStack_280;
  ulong local_278;
  ulong uStack_270;
  ulong local_268;
  ulong uStack_260;
  ulong local_258;
  ulong uStack_250;
  ulong local_248;
  ulong uStack_240;
  ulong local_238;
  ulong uStack_230;
  ulong local_228;
  ulong uStack_220;
  ulong local_218;
  ulong uStack_210;
  ulong local_208;
  ulong uStack_200;
  ulong local_1f8;
  ulong uStack_1f0;
  ulong local_1e8;
  ulong uStack_1e0;
  ulong local_1d8;
  ulong uStack_1d0;
  ulong local_1c8;
  ulong uStack_1c0;
  ulong local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong local_188;
  ulong uStack_180;
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong uStack_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined1 local_c8 [64];
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  gf_deserialize(&local_288,param_2,1,0);
  local_208 = ZERO._0_8_;
  uStack_200 = ZERO._8_8_;
  uVar2 = 0xff;
  local_1f8 = ZERO._16_8_;
  uStack_1f0 = ZERO._24_8_;
  local_1e8 = ZERO._32_8_;
  uStack_1e0 = ZERO._40_8_;
  local_1d8 = ZERO._48_8_;
  uStack_1d0 = ZERO._56_8_;
  local_37c = 0x1bf;
  local_248 = ONE._0_8_;
  uStack_240 = ONE._8_8_;
  local_238 = ONE._16_8_;
  uStack_230 = ONE._24_8_;
  local_228 = ONE._32_8_;
  uStack_220 = ONE._40_8_;
  local_218 = ONE._48_8_;
  uStack_210 = ONE._56_8_;
  local_1c8 = local_288;
  uStack_1c0 = uStack_280;
  local_1b8 = local_278;
  uStack_1b0 = uStack_270;
  local_1a8 = local_268;
  uStack_1a0 = uStack_260;
  local_198 = local_258;
  uStack_190 = uStack_250;
  local_188 = ONE._0_8_;
  uStack_180 = ONE._8_8_;
  local_178 = ONE._16_8_;
  uStack_170 = ONE._24_8_;
  local_168 = ONE._32_8_;
  uStack_160 = ONE._40_8_;
  local_158 = ONE._48_8_;
  uStack_150 = ONE._56_8_;
  uVar13 = 0;
  while( true ) {
    uVar3 = -(ulong)((int)uVar2 >> ((byte)local_37c & 7) & 1);
    uVar13 = uVar13 ^ uVar3;
    uVar4 = (local_248 ^ local_1c8) & uVar13;
    local_1c8 = local_1c8 ^ uVar4;
    local_248 = local_248 ^ uVar4;
    uVar4 = (uStack_240 ^ uStack_1c0) & uVar13;
    uStack_240 = uStack_240 ^ uVar4;
    uStack_1c0 = uStack_1c0 ^ uVar4;
    uVar4 = (local_238 ^ local_1b8) & uVar13;
    local_238 = local_238 ^ uVar4;
    local_1b8 = local_1b8 ^ uVar4;
    uVar4 = (uStack_230 ^ uStack_1b0) & uVar13;
    uStack_230 = uStack_230 ^ uVar4;
    uStack_1b0 = uStack_1b0 ^ uVar4;
    uVar4 = (local_228 ^ local_1a8) & uVar13;
    local_228 = local_228 ^ uVar4;
    local_1a8 = local_1a8 ^ uVar4;
    uVar4 = (uStack_220 ^ uStack_1a0) & uVar13;
    uStack_220 = uStack_220 ^ uVar4;
    uStack_1a0 = uStack_1a0 ^ uVar4;
    uVar4 = (local_218 ^ local_198) & uVar13;
    local_218 = local_218 ^ uVar4;
    local_198 = local_198 ^ uVar4;
    uVar4 = (uStack_210 ^ uStack_190) & uVar13;
    uStack_210 = uStack_210 ^ uVar4;
    uStack_190 = uStack_190 ^ uVar4;
    uVar4 = (local_208 ^ local_188) & uVar13;
    local_188 = local_188 ^ uVar4;
    local_208 = local_208 ^ uVar4;
    uVar4 = (uStack_200 ^ uStack_180) & uVar13;
    uStack_200 = uStack_200 ^ uVar4;
    uStack_180 = uStack_180 ^ uVar4;
    uVar4 = (local_1f8 ^ local_178) & uVar13;
    local_1f8 = local_1f8 ^ uVar4;
    local_178 = local_178 ^ uVar4;
    uVar4 = (uStack_1f0 ^ uStack_170) & uVar13;
    uStack_170 = uStack_170 ^ uVar4;
    uStack_1f0 = uStack_1f0 ^ uVar4;
    uVar4 = (local_1e8 ^ local_168) & uVar13;
    local_168 = local_168 ^ uVar4;
    local_1e8 = local_1e8 ^ uVar4;
    uVar4 = (uStack_1e0 ^ uStack_160) & uVar13;
    uStack_160 = uStack_160 ^ uVar4;
    uStack_1e0 = uStack_1e0 ^ uVar4;
    uVar4 = (local_1d8 ^ local_158) & uVar13;
    local_1d8 = local_1d8 ^ uVar4;
    local_158 = local_158 ^ uVar4;
    uVar13 = (uStack_1d0 ^ uStack_150) & uVar13;
    uStack_150 = uStack_150 ^ uVar13;
    uStack_1d0 = uStack_1d0 ^ uVar13;
    uVar13 = local_208 + local_248;
    uVar4 = uStack_200 + uStack_240;
    uVar7 = local_1f8 + local_238;
    uVar12 = uStack_1e0 + uStack_220;
    uVar9 = uStack_1f0 + uStack_230;
    uVar10 = local_1d8 + local_218;
    uVar11 = uStack_1d0 + uStack_210;
    uVar5 = uVar11 >> 0x38;
    uVar6 = local_1e8 + local_228 + uVar5;
    local_110 = (uVar11 & 0xffffffffffffff) + (uVar10 >> 0x38);
    local_118 = (uVar10 & 0xffffffffffffff) + (uVar12 >> 0x38);
    local_120 = (uVar12 & 0xffffffffffffff) + (uVar6 >> 0x38);
    local_128 = (uVar6 & 0xffffffffffffff) + (uVar9 >> 0x38);
    local_130 = (uVar9 & 0xffffffffffffff) + (uVar7 >> 0x38);
    local_138 = (uVar7 & 0xffffffffffffff) + (uVar4 >> 0x38);
    local_140 = (uVar4 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_148 = (uVar13 & 0xffffffffffffff) + uVar5;
    local_208 = (local_248 + 0x1fffffffffffffe) - local_208;
    uStack_200 = (uStack_240 + 0x1fffffffffffffe) - uStack_200;
    local_1f8 = (local_238 + 0x1fffffffffffffe) - local_1f8;
    uStack_1f0 = (uStack_230 + 0x1fffffffffffffe) - uStack_1f0;
    local_1d8 = (local_218 + 0x1fffffffffffffe) - local_1d8;
    uStack_1e0 = (uStack_220 + 0x1fffffffffffffe) - uStack_1e0;
    uStack_1d0 = (uStack_210 + 0x1fffffffffffffe) - uStack_1d0;
    uVar4 = uStack_1d0 >> 0x38;
    uVar13 = ((local_228 + 0x1fffffffffffffc) - local_1e8) + uVar4;
    local_d0 = (uStack_1d0 & 0xffffffffffffff) + (local_1d8 >> 0x38);
    local_d8 = (local_1d8 & 0xffffffffffffff) + (uStack_1e0 >> 0x38);
    local_e0 = (uStack_1e0 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_e8 = (uVar13 & 0xffffffffffffff) + (uStack_1f0 >> 0x38);
    local_f0 = (uStack_1f0 & 0xffffffffffffff) + (local_1f8 >> 0x38);
    local_f8 = (local_1f8 & 0xffffffffffffff) + (uStack_200 >> 0x38);
    local_100 = (uStack_200 & 0xffffffffffffff) + (local_208 >> 0x38);
    local_108 = (local_208 & 0xffffffffffffff) + uVar4;
    uVar13 = (local_1c8 + 0x1fffffffffffffe) - local_188;
    uVar7 = (uStack_1c0 + 0x1fffffffffffffe) - uStack_180;
    uVar4 = (local_1b8 + 0x1fffffffffffffe) - local_178;
    uVar9 = (uStack_1b0 + 0x1fffffffffffffe) - uStack_170;
    uVar10 = (uStack_1a0 + 0x1fffffffffffffe) - uStack_160;
    uVar11 = (local_198 + 0x1fffffffffffffe) - local_158;
    uVar12 = (uStack_190 + 0x1fffffffffffffe) - uStack_150;
    local_208 = uVar12 >> 0x38;
    uStack_1d0 = (uVar12 & 0xffffffffffffff) + (uVar11 >> 0x38);
    uVar12 = ((local_1a8 + 0x1fffffffffffffc) - local_168) + local_208;
    local_1d8 = (uVar11 & 0xffffffffffffff) + (uVar10 >> 0x38);
    uStack_1e0 = (uVar10 & 0xffffffffffffff) + (uVar12 >> 0x38);
    local_1e8 = (uVar12 & 0xffffffffffffff) + (uVar9 >> 0x38);
    uStack_1f0 = (uVar9 & 0xffffffffffffff) + (uVar4 >> 0x38);
    local_1f8 = (uVar4 & 0xffffffffffffff) + (uVar7 >> 0x38);
    uStack_200 = (uVar7 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_208 = (uVar13 & 0xffffffffffffff) + local_208;
    ossl_gf_mul(&local_248,&local_148,&local_208);
    uStack_1d0 = (uStack_190 + uStack_150 & 0xffffffffffffff) + (local_198 + local_158 >> 0x38);
    local_208 = uStack_190 + uStack_150 >> 0x38;
    uVar13 = local_1a8 + local_168 + local_208;
    local_1d8 = (local_198 + local_158 & 0xffffffffffffff) + (uStack_1a0 + uStack_160 >> 0x38);
    uStack_1e0 = (uStack_1a0 + uStack_160 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_1e8 = (uVar13 & 0xffffffffffffff) + (uStack_1b0 + uStack_170 >> 0x38);
    uStack_1f0 = (uStack_1b0 + uStack_170 & 0xffffffffffffff) + (local_1b8 + local_178 >> 0x38);
    local_1f8 = (local_1b8 + local_178 & 0xffffffffffffff) + (uStack_1c0 + uStack_180 >> 0x38);
    local_208 = (local_1c8 + local_188 & 0xffffffffffffff) + local_208;
    uStack_200 = (uStack_1c0 + uStack_180 & 0xffffffffffffff) + (local_1c8 + local_188 >> 0x38);
    ossl_gf_mul(&local_1c8,&local_108,&local_208);
    uVar12 = (local_218 + 0x1fffffffffffffe) - local_198;
    uVar5 = (uStack_210 + 0x1fffffffffffffe) - uStack_190;
    uVar11 = (uStack_220 + 0x1fffffffffffffe) - uStack_1a0;
    local_188 = uVar5 >> 0x38;
    uVar7 = (local_248 + 0x1fffffffffffffe) - local_1c8;
    uVar4 = (uStack_240 + 0x1fffffffffffffe) - uStack_1c0;
    uVar10 = (uStack_230 + 0x1fffffffffffffe) - uStack_1b0;
    uVar13 = ((local_228 + 0x1fffffffffffffc) - local_1a8) + local_188;
    uVar9 = (local_238 + 0x1fffffffffffffe) - local_1b8;
    uStack_150 = (uVar5 & 0xffffffffffffff) + (uVar12 >> 0x38);
    local_158 = (uVar12 & 0xffffffffffffff) + (uVar11 >> 0x38);
    uStack_160 = (uVar11 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_168 = (uVar13 & 0xffffffffffffff) + (uVar10 >> 0x38);
    uStack_170 = (uVar10 & 0xffffffffffffff) + (uVar9 >> 0x38);
    local_178 = (uVar9 & 0xffffffffffffff) + (uVar4 >> 0x38);
    local_188 = (uVar7 & 0xffffffffffffff) + local_188;
    uStack_180 = (uVar4 & 0xffffffffffffff) + (uVar7 >> 0x38);
    ossl_gf_sqr(&local_208,&local_188);
    ossl_gf_mul(&local_188,&local_288,&local_208);
    uStack_1d0 = (uStack_190 + uStack_210 & 0xffffffffffffff) + (local_198 + local_218 >> 0x38);
    local_208 = uStack_190 + uStack_210 >> 0x38;
    uVar13 = local_1a8 + local_228 + local_208;
    local_1d8 = (local_198 + local_218 & 0xffffffffffffff) + (uStack_1a0 + uStack_220 >> 0x38);
    uStack_1e0 = (uStack_1a0 + uStack_220 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_1e8 = (uVar13 & 0xffffffffffffff) + (uStack_1b0 + uStack_230 >> 0x38);
    uStack_1f0 = (uStack_1b0 + uStack_230 & 0xffffffffffffff) + (local_1b8 + local_238 >> 0x38);
    local_1f8 = (local_1b8 + local_238 & 0xffffffffffffff) + (uStack_1c0 + uStack_240 >> 0x38);
    local_208 = (local_1c8 + local_248 & 0xffffffffffffff) + local_208;
    uStack_200 = (uStack_1c0 + uStack_240 & 0xffffffffffffff) + (local_1c8 + local_248 >> 0x38);
    ossl_gf_sqr(&local_1c8,&local_208);
    ossl_gf_sqr(&local_208,&local_148);
    ossl_gf_sqr(&local_148,&local_108);
    ossl_gf_mul(&local_248,&local_208,&local_148);
    uVar7 = (local_208 + 0x1fffffffffffffe) - local_148;
    uVar4 = (uStack_200 + 0x1fffffffffffffe) - local_140;
    uVar9 = (local_1f8 + 0x1fffffffffffffe) - local_138;
    uVar10 = (uStack_1f0 + 0x1fffffffffffffe) - local_130;
    uVar11 = (uStack_1e0 + 0x1fffffffffffffe) - local_120;
    uVar12 = (local_1d8 + 0x1fffffffffffffe) - local_118;
    uVar5 = (uStack_1d0 + 0x1fffffffffffffe) - local_110;
    local_d0 = (uVar5 & 0xffffffffffffff) + (uVar12 >> 0x38);
    uVar5 = uVar5 >> 0x38;
    uVar13 = ((local_1e8 + 0x1fffffffffffffc) - local_128) + uVar5;
    local_d8 = (uVar12 & 0xffffffffffffff) + (uVar11 >> 0x38);
    local_e0 = (uVar11 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_e8 = (uVar13 & 0xffffffffffffff) + (uVar10 >> 0x38);
    local_f0 = (uVar10 & 0xffffffffffffff) + (uVar9 >> 0x38);
    local_f8 = (uVar9 & 0xffffffffffffff) + (uVar4 >> 0x38);
    local_108 = (uVar7 & 0xffffffffffffff) + uVar5;
    local_100 = (uVar4 & 0xffffffffffffff) + (uVar7 >> 0x38);
    ossl_gf_mulw_unsigned(&local_148,&local_108,0x98a9);
    uVar4 = uStack_1d0 + local_110;
    local_110 = (uVar4 & 0xffffffffffffff) + (local_1d8 + local_118 >> 0x38);
    uVar4 = uVar4 >> 0x38;
    uVar13 = local_1e8 + local_128 + uVar4;
    local_118 = (local_1d8 + local_118 & 0xffffffffffffff) + (uStack_1e0 + local_120 >> 0x38);
    local_120 = (uStack_1e0 + local_120 & 0xffffffffffffff) + (uVar13 >> 0x38);
    local_128 = (uVar13 & 0xffffffffffffff) + (uStack_1f0 + local_130 >> 0x38);
    local_130 = (uStack_1f0 + local_130 & 0xffffffffffffff) + (local_1f8 + local_138 >> 0x38);
    local_138 = (local_1f8 + local_138 & 0xffffffffffffff) + (uStack_200 + local_140 >> 0x38);
    local_140 = (uStack_200 + local_140 & 0xffffffffffffff) + (local_208 + local_148 >> 0x38);
    local_148 = (local_208 + local_148 & 0xffffffffffffff) + uVar4;
    ossl_gf_mul(&local_208,&local_108,&local_148);
    iVar1 = local_37c + -1;
    if (local_37c == 0) break;
    uVar8 = local_37c + 6;
    uVar2 = (uint)*(byte *)(param_3 + (iVar1 >> 3));
    uVar13 = uVar3;
    local_37c = iVar1;
    if (uVar8 < 0xf) {
      uVar2 = uVar2 & 0xfc;
    }
  }
  uVar13 = (local_1c8 ^ local_248) & uVar3;
  uVar4 = (uStack_1c0 ^ uStack_240) & uVar3;
  local_248 = local_248 ^ uVar13;
  uStack_240 = uStack_240 ^ uVar4;
  local_1c8 = uVar13 ^ local_1c8;
  uStack_1c0 = uVar4 ^ uStack_1c0;
  uVar13 = (local_1b8 ^ local_238) & uVar3;
  uVar4 = (uStack_1b0 ^ uStack_230) & uVar3;
  local_238 = local_238 ^ uVar13;
  uStack_230 = uStack_230 ^ uVar4;
  local_1b8 = uVar13 ^ local_1b8;
  uStack_1b0 = uVar4 ^ uStack_1b0;
  uVar13 = (local_1a8 ^ local_228) & uVar3;
  uVar4 = (uStack_1a0 ^ uStack_220) & uVar3;
  local_228 = local_228 ^ uVar13;
  uStack_220 = uStack_220 ^ uVar4;
  local_1a8 = uVar13 ^ local_1a8;
  uStack_1a0 = uVar4 ^ uStack_1a0;
  uVar13 = (local_198 ^ local_218) & uVar3;
  uVar4 = (uStack_190 ^ uStack_210) & uVar3;
  local_218 = local_218 ^ uVar13;
  uStack_210 = uStack_210 ^ uVar4;
  local_198 = uVar13 ^ local_198;
  uStack_190 = uVar4 ^ uStack_190;
  uVar13 = (local_208 ^ local_188) & uVar3;
  uVar4 = (uStack_200 ^ uStack_180) & uVar3;
  local_208 = local_208 ^ uVar13;
  uStack_200 = uStack_200 ^ uVar4;
  local_188 = uVar13 ^ local_188;
  uStack_180 = uVar4 ^ uStack_180;
  uVar13 = (local_178 ^ local_1f8) & uVar3;
  uVar4 = (uStack_170 ^ uStack_1f0) & uVar3;
  local_1f8 = local_1f8 ^ uVar13;
  uStack_1f0 = uStack_1f0 ^ uVar4;
  local_178 = uVar13 ^ local_178;
  uStack_170 = uVar4 ^ uStack_170;
  uVar13 = (local_168 ^ local_1e8) & uVar3;
  uVar4 = (uStack_160 ^ uStack_1e0) & uVar3;
  local_1e8 = local_1e8 ^ uVar13;
  uStack_1e0 = uStack_1e0 ^ uVar4;
  local_168 = uVar13 ^ local_168;
  uStack_160 = uVar4 ^ uStack_160;
  uVar13 = uVar3 & (local_158 ^ local_1d8);
  uVar3 = uVar3 & (uStack_150 ^ uStack_1d0);
  local_1d8 = local_1d8 ^ uVar13;
  uStack_1d0 = uStack_1d0 ^ uVar3;
  local_158 = uVar13 ^ local_158;
  uStack_150 = uVar3 ^ uStack_150;
  ossl_gf_sqr(local_c8,&local_208);
  gf_isr(&local_88,local_c8);
  ossl_gf_sqr(local_c8,&local_88);
  ossl_gf_mul(&local_88,local_c8,&local_208);
  local_208 = local_88;
  uStack_200 = uStack_80;
  local_1f8 = local_78;
  uStack_1f0 = uStack_70;
  local_1e8 = local_68;
  uStack_1e0 = uStack_60;
  local_1d8 = local_58;
  uStack_1d0 = uStack_50;
  ossl_gf_mul(&local_288,&local_248,&local_208);
  gf_serialize(param_1,&local_288,1);
  uVar2 = gf_eq(&local_288,ZERO);
  OPENSSL_cleanse(&local_288,0x40);
  OPENSSL_cleanse(&local_248,0x40);
  OPENSSL_cleanse(&local_208,0x40);
  OPENSSL_cleanse(&local_1c8,0x40);
  OPENSSL_cleanse(&local_188,0x40);
  OPENSSL_cleanse(&local_148,0x40);
  OPENSSL_cleanse(&local_108,0x40);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ~uVar2;
}



void ossl_curve448_point_destroy(void *param_1)

{
  OPENSSL_cleanse(param_1,0x100);
  return;
}



void ossl_curve448_point_mul_by_ratio_and_encode_like_eddsa(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long in_FS_OFFSET;
  undefined1 local_2c8 [64];
  undefined1 local_288 [64];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [64];
  undefined1 local_1c8 [64];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_138 = param_2[2];
  uStack_130 = param_2[3];
  local_148 = *param_2;
  uStack_140 = param_2[1];
  local_128 = param_2[4];
  uStack_120 = param_2[5];
  local_118 = param_2[6];
  uStack_110 = param_2[7];
  local_108 = param_2[8];
  uStack_100 = param_2[9];
  local_f8 = param_2[10];
  uStack_f0 = param_2[0xb];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = param_2[0xc];
  uStack_e0 = param_2[0xd];
  local_d8 = param_2[0xe];
  uStack_d0 = param_2[0xf];
  local_c8 = param_2[0x10];
  uStack_c0 = param_2[0x11];
  local_88 = param_2[0x18];
  uStack_80 = param_2[0x19];
  local_78 = param_2[0x1a];
  uStack_70 = param_2[0x1b];
  local_68 = param_2[0x1c];
  uStack_60 = param_2[0x1d];
  local_58 = param_2[0x1e];
  uStack_50 = param_2[0x1f];
  local_b8 = param_2[0x12];
  uStack_b0 = param_2[0x13];
  local_a8 = param_2[0x14];
  uStack_a0 = param_2[0x15];
  local_98 = param_2[0x16];
  uStack_90 = param_2[0x17];
  ossl_gf_sqr(local_2c8,&local_148);
  ossl_gf_sqr(local_208,&local_108);
  gf_add(&local_188,local_2c8,local_208);
  gf_add(&local_248,&local_108,&local_148);
  ossl_gf_sqr(local_288,&local_248);
  gf_sub(local_288,local_288,&local_188);
  gf_sub(&local_248,local_208,local_2c8);
  ossl_gf_sqr(local_2c8,&local_c8);
  gf_add(local_208,local_2c8,local_2c8);
  gf_sub(local_208,local_208,&local_248);
  ossl_gf_mul(local_2c8,local_208,local_288);
  ossl_gf_mul(local_288,&local_248,&local_188);
  ossl_gf_mul(&local_248,&local_188,local_208);
  OPENSSL_cleanse(&local_188,0x40);
  ossl_gf_sqr(local_1c8,&local_248);
  gf_isr(&local_188,local_1c8);
  ossl_gf_sqr(local_1c8,&local_188);
  ossl_gf_mul(&local_188,local_1c8,&local_248);
  local_248 = local_188;
  uStack_240 = uStack_180;
  local_238 = local_178;
  uStack_230 = uStack_170;
  local_228 = local_168;
  uStack_220 = uStack_160;
  local_218 = local_158;
  uStack_210 = uStack_150;
  ossl_gf_mul(local_208,local_2c8,&local_248);
  ossl_gf_mul(local_2c8,local_288,&local_248);
  *(undefined1 *)(param_1 + 0x38) = 0;
  gf_serialize(param_1,local_2c8,1);
  bVar1 = gf_lobit(local_208);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar1 & 0x80;
  OPENSSL_cleanse(local_2c8,0x40);
  OPENSSL_cleanse(local_288,0x40);
  OPENSSL_cleanse(&local_248,0x40);
  OPENSSL_cleanse(local_208,0x40);
  ossl_curve448_point_destroy(&local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_point_mul_by_ratio_and_encode_like_x448(undefined8 param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_1b8 [64];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_138 = *param_2;
  uStack_130 = param_2[1];
  local_128 = param_2[2];
  uStack_120 = param_2[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = param_2[6];
  uStack_100 = param_2[7];
  local_f8 = param_2[8];
  uStack_f0 = param_2[9];
  local_e8 = param_2[10];
  uStack_e0 = param_2[0xb];
  local_d8 = param_2[0xc];
  uStack_d0 = param_2[0xd];
  local_c8 = param_2[0xe];
  uStack_c0 = param_2[0xf];
  local_b8 = param_2[0x10];
  uStack_b0 = param_2[0x11];
  local_a8 = param_2[0x12];
  uStack_a0 = param_2[0x13];
  local_118 = param_2[4];
  uStack_110 = param_2[5];
  local_98 = param_2[0x14];
  uStack_90 = param_2[0x15];
  local_78 = param_2[0x18];
  uStack_70 = param_2[0x19];
  local_68 = param_2[0x1a];
  uStack_60 = param_2[0x1b];
  local_58 = param_2[0x1c];
  uStack_50 = param_2[0x1d];
  local_48 = param_2[0x1e];
  uStack_40 = param_2[0x1f];
  local_88 = param_2[0x16];
  uStack_80 = param_2[0x17];
  ossl_gf_sqr(auStack_1b8,&local_138);
  gf_isr(&local_178,auStack_1b8);
  ossl_gf_sqr(auStack_1b8,&local_178);
  ossl_gf_mul(&local_178,auStack_1b8,&local_138);
  local_78 = local_178;
  uStack_70 = uStack_170;
  local_68 = local_168;
  uStack_60 = uStack_160;
  local_58 = local_158;
  uStack_50 = uStack_150;
  local_48 = local_148;
  uStack_40 = uStack_140;
  ossl_gf_mul(&local_b8,&local_78,&local_f8);
  ossl_gf_sqr(&local_f8,&local_b8);
  gf_serialize(param_1,&local_f8,1);
  ossl_curve448_point_destroy(&local_138);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_x448_derive_public_key(undefined8 param_1,ulong *param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_198 [64];
  undefined1 local_158 [256];
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  long local_20;
  
  uStack_50 = param_2[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2[2];
  uStack_40 = param_2[3];
  local_38 = param_2[4];
  uStack_30 = param_2[5];
  local_28 = param_2[6] | 0x8000000000000000;
  local_58 = *param_2 & 0xfffffffffffffffc;
  ossl_curve448_scalar_decode_long(auStack_198,&local_58,0x38);
  ossl_curve448_scalar_halve(auStack_198,auStack_198);
  ossl_curve448_precomputed_scalarmul(local_158,_ossl_curve448_precomputed_base,auStack_198);
  ossl_curve448_point_mul_by_ratio_and_encode_like_x448(param_1,local_158);
  ossl_curve448_point_destroy(local_158);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_curve448_base_double_scalarmul_non_secret
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined1 local_1048 [64];
  undefined1 local_1008 [64];
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined1 local_f88 [64];
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined1 local_f08 [64];
  undefined1 local_ec8 [64];
  undefined1 local_e88 [64];
  int local_e48 [156];
  int local_bd8 [228];
  undefined1 local_848 [64];
  undefined1 local_808 [64];
  undefined1 local_7c8 [64];
  undefined1 local_788 [64];
  undefined1 local_748 [64];
  undefined1 local_708 [64];
  undefined1 local_6c8 [64];
  undefined1 local_688 [64];
  undefined1 local_648 [1536];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  recode_wnaf_isra_0(local_e48,param_2,5);
  recode_wnaf_isra_0(local_bd8,param_4,3);
  gf_sub(local_848,param_3 + 0x40,param_3);
  gf_add(local_808,param_3,param_3 + 0x40);
  ossl_gf_mulw_unsigned(local_7c8,param_3 + 0xc0,0x13154);
  gf_sub(local_7c8,ZERO,local_7c8);
  gf_add(local_788,param_3 + 0x80,param_3 + 0x80);
  ossl_curve448_point_double(local_1048,param_3);
  gf_sub(&local_f48,local_1008,local_1048);
  gf_add(local_f08,local_1048,local_1008);
  ossl_gf_mulw_unsigned(local_ec8,local_f88,0x13154);
  gf_sub(local_ec8,ZERO,local_ec8);
  gf_add(local_e88,&local_fc8,&local_fc8);
  ossl_gf_mul(&local_1088,&local_fc8,local_788);
  local_fc8 = local_1088;
  uStack_fc0 = uStack_1080;
  local_fb8 = local_1078;
  uStack_fb0 = uStack_1070;
  local_fa8 = local_1068;
  uStack_fa0 = uStack_1060;
  local_f98 = local_1058;
  uStack_f90 = uStack_1050;
  add_niels_to_pt(local_1048,local_848,0);
  gf_sub(local_748,local_1008,local_1048);
  gf_add(local_708,local_1048,local_1008);
  ossl_gf_mulw_unsigned(local_6c8,local_f88,0x13154);
  gf_sub(local_6c8,ZERO,local_6c8);
  gf_add(local_688,&local_fc8,&local_fc8);
  puVar15 = local_648;
  do {
    puVar2 = puVar15 + 0x80;
    ossl_gf_mul(&local_1088,&local_fc8,local_e88);
    local_fc8 = local_1088;
    uStack_fc0 = uStack_1080;
    local_fb8 = local_1078;
    uStack_fb0 = uStack_1070;
    local_fa8 = local_1068;
    uStack_fa0 = uStack_1060;
    local_f98 = local_1058;
    uStack_f90 = uStack_1050;
    add_niels_to_pt(local_1048,&local_f48,0);
    gf_sub(puVar15,local_1008,local_1048);
    gf_add(puVar15 + 0x40,local_1048,local_1008);
    ossl_gf_mulw_unsigned(puVar2,local_f88,0x13154);
    gf_sub(puVar2,ZERO,puVar2);
    gf_add(puVar15 + 0xc0,&local_fc8,&local_fc8);
    puVar15 = puVar15 + 0x100;
  } while (puVar15 != local_48);
  ossl_curve448_point_destroy(local_1048);
  OPENSSL_cleanse(&local_f48,0x100);
  uVar13 = ossl_curve448_point_identity._56_8_;
  uVar12 = ossl_curve448_point_identity._48_8_;
  uVar11 = ossl_curve448_point_identity._40_8_;
  uVar10 = ossl_curve448_point_identity._32_8_;
  uVar9 = ossl_curve448_point_identity._24_8_;
  uVar8 = ossl_curve448_point_identity._16_8_;
  uVar7 = ossl_curve448_point_identity._8_8_;
  if (local_bd8[0] < 0) {
    *param_1 = ossl_curve448_point_identity._0_8_;
    param_1[1] = uVar7;
    uVar14 = ossl_curve448_point_identity._72_8_;
    uVar7 = ossl_curve448_point_identity._64_8_;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    uVar9 = ossl_curve448_point_identity._88_8_;
    uVar8 = ossl_curve448_point_identity._80_8_;
    param_1[4] = uVar10;
    param_1[5] = uVar11;
    uVar11 = ossl_curve448_point_identity._104_8_;
    uVar10 = ossl_curve448_point_identity._96_8_;
    param_1[6] = uVar12;
    param_1[7] = uVar13;
    uVar13 = ossl_curve448_point_identity._120_8_;
    uVar12 = ossl_curve448_point_identity._112_8_;
    param_1[8] = uVar7;
    param_1[9] = uVar14;
    uVar14 = ossl_curve448_point_identity._136_8_;
    uVar7 = ossl_curve448_point_identity._128_8_;
    param_1[10] = uVar8;
    param_1[0xb] = uVar9;
    uVar9 = ossl_curve448_point_identity._152_8_;
    uVar8 = ossl_curve448_point_identity._144_8_;
    param_1[0xc] = uVar10;
    param_1[0xd] = uVar11;
    uVar11 = ossl_curve448_point_identity._168_8_;
    uVar10 = ossl_curve448_point_identity._160_8_;
    param_1[0xe] = uVar12;
    param_1[0xf] = uVar13;
    uVar13 = ossl_curve448_point_identity._184_8_;
    uVar12 = ossl_curve448_point_identity._176_8_;
    param_1[0x10] = uVar7;
    param_1[0x11] = uVar14;
    uVar14 = ossl_curve448_point_identity._200_8_;
    uVar7 = ossl_curve448_point_identity._192_8_;
    param_1[0x12] = uVar8;
    param_1[0x13] = uVar9;
    uVar9 = ossl_curve448_point_identity._216_8_;
    uVar8 = ossl_curve448_point_identity._208_8_;
    param_1[0x14] = uVar10;
    param_1[0x15] = uVar11;
    uVar11 = ossl_curve448_point_identity._232_8_;
    uVar10 = ossl_curve448_point_identity._224_8_;
    param_1[0x16] = uVar12;
    param_1[0x17] = uVar13;
    uVar13 = ossl_curve448_point_identity._248_8_;
    uVar12 = ossl_curve448_point_identity._240_8_;
    param_1[0x18] = uVar7;
    param_1[0x19] = uVar14;
    param_1[0x1a] = uVar8;
    param_1[0x1b] = uVar9;
    param_1[0x1c] = uVar10;
    param_1[0x1d] = uVar11;
    param_1[0x1e] = uVar12;
    param_1[0x1f] = uVar13;
  }
  else {
    if (local_e48[0] < local_bd8[0]) {
      puVar1 = param_1 + 8;
      lVar16 = (long)(local_bd8[1] >> 1) * 0x100;
      puVar15 = local_848 + lVar16;
      gf_add(&local_f48,local_808 + lVar16,puVar15);
      gf_sub(puVar1,local_808 + lVar16,puVar15);
      puVar15 = local_788 + lVar16;
      ossl_gf_mul(param_1 + 0x18,puVar1,&local_f48);
      ossl_gf_mul(param_1,puVar15,puVar1);
      ossl_gf_mul(puVar1,puVar15,&local_f48);
      ossl_gf_sqr(param_1 + 0x10,puVar15);
      iVar3 = 1;
      iVar4 = 0;
      local_e48[0] = local_bd8[0];
    }
    else if (local_e48[0] == local_bd8[0]) {
      puVar1 = param_1 + 8;
      lVar16 = (long)(local_bd8[1] >> 1) * 0x100;
      puVar15 = local_848 + lVar16;
      gf_add(&local_f48,local_808 + lVar16,puVar15);
      gf_sub(puVar1,local_808 + lVar16,puVar15);
      puVar15 = local_788 + lVar16;
      ossl_gf_mul(param_1 + 0x18,puVar1,&local_f48);
      ossl_gf_mul(param_1,puVar15,puVar1);
      ossl_gf_mul(puVar1,puVar15,&local_f48);
      ossl_gf_sqr(param_1 + 0x10,puVar15);
      add_niels_to_pt(param_1,(long)(local_e48[1] >> 1) * 0xc0 + _ossl_curve448_wnaf_base,
                      local_bd8[0]);
      iVar3 = 1;
      iVar4 = 1;
      local_e48[0] = local_bd8[0];
    }
    else {
      lVar16 = (long)(local_e48[1] >> 1) * 0xc0 + _ossl_curve448_wnaf_base;
      gf_add(param_1 + 8,lVar16 + 0x40,lVar16);
      gf_sub(param_1,lVar16 + 0x40,lVar16);
      ossl_gf_mul(param_1 + 0x18,param_1 + 8,param_1);
      uVar13 = ONE._56_8_;
      uVar12 = ONE._48_8_;
      uVar11 = ONE._40_8_;
      uVar10 = ONE._32_8_;
      uVar9 = ONE._24_8_;
      uVar8 = ONE._16_8_;
      uVar7 = ONE._8_8_;
      iVar3 = 0;
      iVar4 = 1;
      param_1[0x10] = ONE._0_8_;
      param_1[0x11] = uVar7;
      param_1[0x12] = uVar8;
      param_1[0x13] = uVar9;
      param_1[0x14] = uVar10;
      param_1[0x15] = uVar11;
      param_1[0x16] = uVar12;
      param_1[0x17] = uVar13;
    }
    lVar18 = (long)iVar3;
    lVar16 = (long)iVar4;
    iVar17 = local_e48[0] + -1;
    if (local_e48[0] != 0) {
      while( true ) {
        while( true ) {
          iVar5 = local_bd8[lVar18 * 2];
          iVar6 = local_e48[lVar16 * 2];
          if (((iVar17 == 0) || (iVar5 == iVar17)) || (iVar6 == iVar17)) break;
          iVar17 = iVar17 + -1;
          point_double_internal(param_1,param_1,1);
        }
        point_double_internal(param_1,param_1,0);
        if (iVar5 == iVar17) {
          iVar5 = local_bd8[lVar18 * 2 + 1];
          bVar19 = iVar6 != iVar17 && iVar17 != 0;
          if (iVar5 < 1) {
            lVar18 = (long)(-iVar5 >> 1) * 0x100;
            ossl_gf_mul(&local_f48,param_1 + 0x10,local_788 + lVar18);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            sub_niels_from_pt(param_1,local_848 + lVar18,bVar19);
          }
          else {
            lVar18 = (long)(iVar5 >> 1) * 0x100;
            ossl_gf_mul(&local_f48,param_1 + 0x10,local_788 + lVar18);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            add_niels_to_pt(param_1,local_848 + lVar18,bVar19);
          }
          iVar3 = iVar3 + 1;
        }
        if (iVar6 == iVar17) {
          iVar5 = local_e48[lVar16 * 2 + 1];
          if (iVar5 < 1) {
            sub_niels_from_pt(param_1,_ossl_curve448_wnaf_base + (long)(-iVar5 >> 1) * 0xc0,iVar17);
          }
          else {
            add_niels_to_pt(param_1,_ossl_curve448_wnaf_base + (long)(iVar5 >> 1) * 0xc0,iVar17);
          }
          iVar4 = iVar4 + 1;
        }
        bVar19 = iVar17 == 0;
        iVar17 = iVar17 + -1;
        if (bVar19) break;
        lVar18 = (long)iVar3;
        lVar16 = (long)iVar4;
      }
    }
    OPENSSL_cleanse(local_bd8,0x390);
    OPENSSL_cleanse(local_e48,0x268);
    OPENSSL_cleanse(local_848,0x800);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



bool ossl_x448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_x448_int(param_1,param_3,param_2);
  return iVar1 == -1;
}



void ossl_x448_public_from_private(void)

{
  ossl_x448_derive_public_key();
  return;
}




void StoreGray(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(short *)(param_2 + lVar1 * 2) =
         (short)((ulong)*(ushort *)(param_1 + lVar1 * 2) * 0x366d +
                 (ulong)*(ushort *)(param_1 + (long)param_3 * 2 + lVar1 * 2) * 0xb717 + 0x8000 +
                 (ulong)*(ushort *)(param_1 + (long)param_3 * 4 + lVar1 * 2) * 0x127c >> 0x10);
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 < param_3);
  return;
}



void ImportOneRow(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6,
                 long param_7)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  short *psVar8;
  int iVar9;
  
  if (8 < param_5) {
    param_4 = param_4 / 2;
  }
  lVar6 = 0;
  lVar7 = 0;
  uVar3 = param_6 + 1 & 0xfffffffe;
  bVar4 = (char)param_5 - 0xe;
  psVar8 = (short *)(param_7 + (long)(int)uVar3 * 2);
  do {
    if (param_5 < 0xd) {
      if (param_5 == 8) {
        *(ushort *)(param_7 + lVar7 * 2) = (ushort)*(byte *)(param_1 + lVar6) << 2;
        *psVar8 = (ushort)*(byte *)(param_2 + lVar6) << 2;
        sVar2 = (ushort)*(byte *)(param_3 + lVar6) << 2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + lVar6 * 2);
        iVar9 = 2;
LAB_0010013a:
        bVar5 = (byte)iVar9;
        *(ushort *)(param_7 + lVar7 * 2) = uVar1 << (bVar5 & 0x1f);
        *psVar8 = *(short *)(param_2 + lVar6 * 2) << (bVar5 & 0x1f);
        sVar2 = *(short *)(param_3 + lVar6 * 2) << (bVar5 & 0x1f);
      }
    }
    else {
      uVar1 = *(ushort *)(param_1 + lVar6 * 2);
      iVar9 = 0xe - param_5;
      if (-1 < 0xe - param_5) goto LAB_0010013a;
      *(short *)(param_7 + lVar7 * 2) = (short)((int)(uint)uVar1 >> (bVar4 & 0x1f));
      *psVar8 = (short)((int)(uint)*(ushort *)(param_2 + lVar6 * 2) >> (bVar4 & 0x1f));
      sVar2 = (short)((int)(uint)*(ushort *)(param_3 + lVar6 * 2) >> (bVar4 & 0x1f));
    }
    *(short *)(param_7 + (long)(int)(uVar3 * 2) * 2 + lVar7 * 2) = sVar2;
    lVar7 = lVar7 + 1;
    psVar8 = psVar8 + 1;
    lVar6 = lVar6 + param_4;
    if ((int)param_6 <= (int)lVar7) {
      if ((param_6 & 1) != 0) {
        iVar9 = param_6 + uVar3;
        *(undefined2 *)(param_7 + (long)(int)param_6 * 2) =
             *(undefined2 *)(param_7 + -2 + (long)(int)param_6 * 2);
        *(undefined2 *)(param_7 + (long)iVar9 * 2) = *(undefined2 *)(param_7 + -2 + (long)iVar9 * 2)
        ;
        *(undefined2 *)(param_7 + (long)(int)(iVar9 + uVar3) * 2) =
             *(undefined2 *)(param_7 + -2 + (long)(int)(iVar9 + uVar3) * 2);
      }
      return;
    }
  } while( true );
}



undefined2
ScaleDown(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5,
         undefined4 param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0xc < param_5) {
    param_5 = 0xc;
  }
  param_5 = param_5 + 2;
  iVar2 = SharpYuvGammaToLinear(param_1,param_5,param_6);
  iVar3 = SharpYuvGammaToLinear(param_2,param_5,param_6);
  iVar4 = SharpYuvGammaToLinear(param_3,param_5,param_6);
  iVar5 = SharpYuvGammaToLinear(param_4,param_5,param_6);
  uVar1 = SharpYuvLinearToGamma((uint)(iVar2 + 2 + iVar3 + iVar4 + iVar5) >> 2,param_5,param_6);
  return uVar1;
}



void UpdateChroma(undefined2 *param_1,undefined2 *param_2,short *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  iVar10 = 0;
  lVar9 = (long)param_4;
  do {
    iVar6 = ScaleDown(*param_1,param_1[1],*param_2,param_2[1],param_5,param_6);
    iVar7 = ScaleDown(param_1[lVar9 * 2],param_1[lVar9 * 2 + 1],param_2[lVar9 * 2],
                      param_2[lVar9 * 2 + 1],param_5,param_6);
    puVar2 = param_2 + lVar9 * 4 + 1;
    puVar4 = param_2 + lVar9 * 4;
    puVar3 = param_1 + lVar9 * 4 + 1;
    puVar1 = param_1 + lVar9 * 4;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    iVar8 = ScaleDown(*puVar1,*puVar3,*puVar4,*puVar2,param_5,param_6);
    iVar10 = iVar10 + 1;
    sVar5 = (short)((ulong)((long)iVar6 * 0x366d + (long)iVar7 * 0xb717 + 0x8000 +
                           (long)iVar8 * 0x127c) >> 0x10);
    *param_3 = (short)iVar6 - sVar5;
    param_3[lVar9] = (short)iVar7 - sVar5;
    param_3[lVar9 * 2] = (short)iVar8 - sVar5;
    param_3 = param_3 + 1;
  } while (iVar10 < param_4);
  return;
}



undefined8 SharpYuvGetVersion(void)

{
  return 0x40000;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SharpYuvInit(undefined *param_1)

{
  if (param_1 != &SharpYuvGetCPUInfo) {
    _SharpYuvGetCPUInfo = param_1;
  }
  if (sharpyuv_last_cpuinfo_used_0 == _SharpYuvGetCPUInfo) {
    return;
  }
  SharpYuvInitDsp();
  SharpYuvInitGammaTables();
  sharpyuv_last_cpuinfo_used_0 = _SharpYuvGetCPUInfo;
  return;
}



undefined8 SharpYuvOptionsInitInternal(long param_1,long *param_2,uint param_3)

{
  if ((((param_2 != (long *)0x0) && (param_1 != 0)) &&
      ((param_3 & 0xff0000) == 0x40000 || (int)param_3 >> 0x18 != 0)) && ((int)param_3 >> 0x18 == 0)
     ) {
    *param_2 = param_1;
    *(undefined4 *)(param_2 + 1) = 0xd;
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
SharpYuvConvertWithOptions
          (long param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6,
          long param_7,uint param_8,long param_9,uint param_10,long param_11,uint param_12,
          uint param_13,int param_14,int param_15,undefined8 *param_16)

{
  undefined2 *puVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  size_t sVar6;
  ulong uVar7;
  size_t __size;
  undefined2 uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined2 *__ptr;
  ushort *__ptr_00;
  undefined2 *__ptr_01;
  undefined2 *__ptr_02;
  short *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  size_t __size_00;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  short *psVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  ushort uVar28;
  int iVar29;
  int iVar30;
  ushort *puVar31;
  undefined2 *puVar32;
  short *psVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  undefined2 *puVar39;
  undefined2 *puVar40;
  undefined2 *puVar41;
  short *psVar42;
  long lVar43;
  undefined2 *puVar44;
  int iVar45;
  int *piVar46;
  short *psVar47;
  long in_FS_OFFSET;
  bool bVar48;
  double dVar49;
  ushort *local_1f0;
  uint local_1e4;
  ushort *local_1e0;
  short *local_1d0;
  void *local_1c8;
  ushort *local_1c0;
  ulong local_1b8;
  long local_1b0;
  long local_1a8;
  short *local_198;
  int local_190;
  int local_18c;
  uint local_188;
  undefined2 *local_170;
  void *local_168;
  short *local_160;
  ulong local_100;
  ulong local_98;
  ulong local_88;
  int local_80;
  undefined8 local_78;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  int local_58;
  undefined8 local_54;
  int local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar45 = 2;
  if (0xc < (int)param_6) {
    iVar45 = 0xe - param_6;
  }
  if ((((((0x7ffffffd < param_15 - 1U) || (0x7ffffffd < param_14 - 1U)) || (param_1 == 0)) ||
       ((param_2 == 0 || (param_3 == 0)))) || (param_7 == 0)) || ((param_9 == 0 || (param_11 == 0)))
     ) {
    uVar16 = 0;
    goto LAB_0010068a;
  }
  piVar5 = (int *)*param_16;
  uVar4 = *(undefined4 *)(param_16 + 1);
  uVar10 = (1 << ((byte)param_13 & 0x1f)) - 1;
  if ((param_6 & 0xfffffffd) == 8) {
    if (((param_13 & 0xfffffffd) != 8) && (uVar16 = 0, param_13 != 0xc)) goto LAB_0010068a;
    if (param_6 != 8) goto LAB_00100567;
    if (param_13 != 8) goto LAB_00100587;
    if (_SharpYuvGetCPUInfo != sharpyuv_last_cpuinfo_used_0) {
      SharpYuvInitDsp();
      SharpYuvInitGammaTables();
      sharpyuv_last_cpuinfo_used_0 = _SharpYuvGetCPUInfo;
    }
LAB_0010073b:
    local_78 = *(undefined8 *)piVar5;
    iStack_70 = (int)*(undefined8 *)(piVar5 + 2);
    local_68 = *(undefined8 *)(piVar5 + 4);
    local_54 = *(undefined8 *)(piVar5 + 9);
    iStack_60 = (int)*(undefined8 *)(piVar5 + 6);
    local_58 = (int)((ulong)*(undefined8 *)(piVar5 + 7) >> 0x20);
  }
  else {
    uVar16 = 0;
    if (((param_6 - 0xc & 0xfffffffb) != 0) ||
       (((param_13 & 0xfffffffd) != 8 && (uVar16 = 0, param_13 != 0xc)))) goto LAB_0010068a;
LAB_00100567:
    uVar16 = 0;
    if (((param_4 | param_5) & 1) != 0) goto LAB_0010068a;
    if (param_13 == 8) {
      if (sharpyuv_last_cpuinfo_used_0 != _SharpYuvGetCPUInfo) {
        SharpYuvInitDsp();
        SharpYuvInitGammaTables();
        sharpyuv_last_cpuinfo_used_0 = _SharpYuvGetCPUInfo;
      }
    }
    else {
LAB_00100587:
      uVar16 = 0;
      if (((param_10 | param_12 | param_8) & 1) != 0) goto LAB_0010068a;
      if (sharpyuv_last_cpuinfo_used_0 != _SharpYuvGetCPUInfo) {
        SharpYuvInitDsp();
        SharpYuvInitGammaTables();
        sharpyuv_last_cpuinfo_used_0 = _SharpYuvGetCPUInfo;
      }
      if (param_6 == param_13) goto LAB_0010073b;
    }
    iVar35 = 1 << ((byte)param_6 - 1 & 0x1f);
    iVar30 = (1 << ((byte)param_6 & 0x1f)) + -1;
    piVar26 = (int *)&local_78;
    piVar46 = piVar5;
    do {
      piVar27 = piVar26 + 1;
      *piVar26 = (int)(*piVar46 * uVar10 + iVar35) / iVar30;
      piVar26[4] = (int)(piVar46[4] * uVar10 + iVar35) / iVar30;
      piVar26[8] = (int)(piVar46[8] * uVar10 + iVar35) / iVar30;
      piVar26 = piVar27;
      piVar46 = piVar46 + 1;
    } while (piVar27 != &iStack_6c);
  }
  bVar22 = (byte)iVar45;
  if (iVar45 < 0) {
    bVar23 = -bVar22;
    local_80 = piVar5[3] >> (bVar23 & 0x1f);
    local_18c = piVar5[7] >> (bVar23 & 0x1f);
    local_190 = piVar5[0xb] >> (bVar23 & 0x1f);
  }
  else {
    local_18c = piVar5[7] << (bVar22 & 0x1f);
    local_190 = piVar5[0xb] << (bVar22 & 0x1f);
    local_80 = piVar5[3] << (bVar22 & 0x1f);
  }
  iStack_5c = local_18c;
  uVar37 = param_15 + 1U & 0xfffffffe;
  _iStack_70 = CONCAT44(local_80,iStack_70);
  iVar45 = param_6 + iVar45;
  local_4c = local_190;
  uVar11 = param_14 + 1;
  uVar12 = (int)uVar11 >> 1;
  uVar24 = uVar11 & 0xfffffffe;
  iVar30 = uVar24 * 2;
  lVar34 = (long)(int)(uVar24 * 3);
  __size_00 = lVar34 * 4;
  __ptr = (undefined2 *)malloc(__size_00);
  local_188 = uVar11 & 0xfffffffe;
  lVar43 = (long)(int)uVar24;
  sVar6 = (int)uVar37 * lVar43 * 2;
  __ptr_00 = (ushort *)malloc(sVar6);
  __ptr_01 = (undefined2 *)malloc(sVar6);
  __ptr_02 = (undefined2 *)malloc(lVar43 * 4);
  lVar38 = (long)(int)(uVar12 * 3);
  iVar35 = (int)(param_15 + 1U) >> 1;
  sVar6 = iVar35 * lVar38 * 2;
  __ptr_03 = (short *)malloc(sVar6);
  __ptr_04 = malloc(sVar6);
  __size = lVar38 * 2;
  __ptr_05 = malloc(__size);
  dVar49 = (double)(int)local_188 * __LC0 * (double)(int)uVar37;
  if (_LC1 <= dVar49) {
    local_88 = (long)(dVar49 - _LC1) ^ 0x8000000000000000;
  }
  else {
    local_88 = (ulong)dVar49;
  }
  if ((((__ptr_00 == (ushort *)0x0) || (__ptr_03 == (short *)0x0)) ||
      (__ptr_01 == (undefined2 *)0x0)) ||
     (((__ptr_04 == (void *)0x0 || (__ptr_05 == (void *)0x0 || __ptr_02 == (undefined2 *)0x0)) ||
      (__ptr == (undefined2 *)0x0)))) {
    uVar16 = 0;
  }
  else {
    uVar7 = lVar34 * 2;
    if (__size_00 < uVar7) {
      __size_00 = uVar7;
    }
    local_1e4 = 0;
    lVar17 = (long)(int)(param_5 * 2);
    puVar1 = __ptr + lVar34;
    lVar18 = (long)(int)param_5;
    local_1e0 = __ptr_01;
    local_1d0 = __ptr_03;
    local_1c8 = __ptr_04;
    local_1c0 = __ptr_00;
    local_1b8 = sVar6;
    local_1b0 = param_1;
    local_1a8 = param_2;
    local_198 = (short *)param_3;
    do {
      ImportOneRow(local_1b0,local_1a8,local_198,param_4,param_6,param_14,__ptr);
      if (local_1e4 == param_15 - 1U) {
        __memcpy_chk(puVar1,__ptr,uVar7,__size_00 + lVar34 * -2);
      }
      else {
        ImportOneRow(local_1b0 + lVar18,local_1a8 + lVar18,(long)local_198 + lVar18,param_4);
      }
      uVar19 = (ulong)uVar11 & 0xfffffffe;
      StoreGray(__ptr,local_1c0,uVar19);
      StoreGray(puVar1,local_1c0 + lVar43,uVar19 & 0xffffffff);
      puVar31 = local_1e0;
      puVar32 = __ptr;
      do {
        uVar24 = SharpYuvGammaToLinear(*puVar32,iVar45,uVar4);
        uVar13 = SharpYuvGammaToLinear(puVar32[lVar43],iVar45,uVar4);
        puVar39 = puVar32 + iVar30;
        puVar32 = puVar32 + 1;
        uVar14 = SharpYuvGammaToLinear(*puVar39,iVar45,uVar4);
        uVar8 = SharpYuvLinearToGamma
                          ((long)((ulong)uVar24 * 0x366d + (ulong)uVar13 * 0xb717 + 0x8000 +
                                 (ulong)uVar14 * 0x127c) >> 0x10,iVar45,uVar4);
        *puVar31 = uVar8;
        puVar31 = puVar31 + 1;
      } while (puVar32 != __ptr + lVar43);
      puVar32 = local_1e0 + lVar43;
      puVar39 = puVar1;
      do {
        uVar24 = SharpYuvGammaToLinear(*puVar39,iVar45,uVar4);
        uVar13 = SharpYuvGammaToLinear(puVar39[lVar43],iVar45,uVar4);
        puVar40 = puVar39 + iVar30;
        puVar39 = puVar39 + 1;
        uVar14 = SharpYuvGammaToLinear(*puVar40,iVar45,uVar4);
        uVar8 = SharpYuvLinearToGamma
                          ((long)((ulong)uVar24 * 0x366d + (ulong)uVar13 * 0xb717 + 0x8000 +
                                 (ulong)uVar14 * 0x127c) >> 0x10,iVar45,uVar4);
        *puVar32 = uVar8;
        puVar32 = puVar32 + 1;
      } while (puVar39 != puVar1 + lVar43);
      UpdateChroma(__ptr,puVar1,local_1c8,uVar12,param_6,uVar4);
      __memcpy_chk(local_1d0,local_1c8,__size,local_1b8);
      local_1c0 = local_1c0 + lVar43 * 2;
      uVar19 = local_1b8;
      if (local_1b8 <= sVar6) {
        uVar19 = sVar6;
      }
      uVar20 = (__size + uVar19) - local_1b8;
      if (uVar20 < uVar19) {
        uVar20 = uVar19;
      }
      local_1d0 = local_1d0 + lVar38;
      local_1c8 = (void *)((long)local_1c8 + __size);
      local_1e4 = local_1e4 + 2;
      local_1b8 = uVar20 + (local_1b8 - (__size + uVar19));
      local_1e0 = local_1e0 + lVar43 * 2;
      local_1b0 = local_1b0 + lVar17;
      local_1a8 = local_1a8 + lVar17;
      local_198 = (short *)((long)local_198 + lVar17);
    } while ((int)local_1e4 < param_15);
    local_98 = 0xffffffffffffffff;
    iVar25 = (int)(local_188 - 1) >> 1;
    iVar29 = 1 << ((byte)iVar45 & 0x1f);
    uVar11 = iVar29 - 1;
    uVar24 = -iVar29;
    lVar34 = (long)(int)uVar12;
    iVar29 = 0;
    do {
      while( true ) {
        iVar2 = 0;
        local_100 = 0;
        psVar33 = __ptr_03;
        local_1f0 = __ptr_00 + lVar43 + 1;
        local_1e0 = __ptr_00;
        local_198 = __ptr_03;
        local_170 = __ptr_01;
        local_168 = __ptr_04;
        local_160 = __ptr_03;
        do {
          iVar36 = 3;
          psVar21 = local_198 + lVar38;
          if ((int)(uVar37 - 2) <= iVar2) {
            psVar21 = local_198;
          }
          puVar32 = puVar1 + 1;
          psVar42 = psVar21;
          puVar39 = __ptr + 1;
          psVar47 = local_198;
          do {
            sVar3 = *psVar47;
            uVar13 = (sVar3 * 3 + 2 + (int)*psVar33 >> 2) + (uint)*local_1e0;
            if (((uVar13 & uVar24) != 0) && (bVar48 = -1 < (int)uVar13, uVar13 = 0, bVar48)) {
              uVar13 = uVar11 & 0xffff;
            }
            puVar39[-1] = (short)uVar13;
            uVar13 = (sVar3 * 3 + 2 + (int)*psVar42 >> 2) + (uint)local_1f0[-1];
            if (((uVar13 & uVar24) != 0) && (bVar48 = -1 < (int)uVar13, uVar13 = 0, bVar48)) {
              uVar13 = uVar11 & 0xffff;
            }
            puVar32[-1] = (short)uVar13;
            (*_SharpYuvFilterRow)(psVar47,psVar33,iVar25,local_1e0 + 1,puVar39,iVar45);
            (*_SharpYuvFilterRow)(psVar47,psVar42,iVar25,local_1f0,puVar32,iVar45);
            sVar3 = psVar47[lVar34 + -1];
            uVar13 = (sVar3 * 3 + 2 + (int)psVar33[lVar34 + -1] >> 2) + (uint)local_1f0[-2];
            if (((uVar24 & uVar13) != 0) && (bVar48 = -1 < (int)uVar13, uVar13 = 0, bVar48)) {
              uVar13 = uVar11 & 0xffff;
            }
            puVar39[lVar43 + -2] = (short)uVar13;
            uVar13 = (sVar3 * 3 + 2 + (int)psVar42[lVar34 + -1] >> 2) +
                     (uint)local_1e0[(int)((local_188 - 1) + local_188)];
            if (((uVar24 & uVar13) != 0) && (bVar48 = -1 < (int)uVar13, uVar13 = 0, bVar48)) {
              uVar13 = uVar11 & 0xffff;
            }
            puVar32[lVar43 + -2] = (short)uVar13;
            psVar33 = psVar33 + lVar34;
            psVar47 = psVar47 + lVar34;
            psVar42 = psVar42 + lVar34;
            puVar39 = puVar39 + lVar43;
            puVar32 = puVar32 + lVar43;
            iVar36 = iVar36 + -1;
            puVar40 = __ptr;
            puVar44 = __ptr_02;
          } while (iVar36 != 0);
          do {
            uVar13 = SharpYuvGammaToLinear(*puVar40,iVar45,uVar4);
            uVar14 = SharpYuvGammaToLinear(puVar40[lVar43],iVar45,uVar4);
            puVar41 = puVar40 + 1;
            uVar15 = SharpYuvGammaToLinear(puVar40[iVar30],iVar45,uVar4);
            uVar8 = SharpYuvLinearToGamma
                              ((long)((ulong)uVar13 * 0x366d + (ulong)uVar14 * 0xb717 + 0x8000 +
                                     (ulong)uVar15 * 0x127c) >> 0x10,iVar45,uVar4);
            *puVar44 = uVar8;
            puVar32 = puVar1;
            puVar40 = puVar41;
            puVar39 = __ptr_02 + lVar43;
            puVar44 = puVar44 + 1;
          } while (puVar41 != __ptr + lVar43);
          do {
            uVar13 = SharpYuvGammaToLinear(*puVar32,iVar45,uVar4);
            uVar14 = SharpYuvGammaToLinear(puVar32[lVar43],iVar45,uVar4);
            puVar40 = puVar32 + 1;
            uVar15 = SharpYuvGammaToLinear(puVar32[iVar30],iVar45,uVar4);
            uVar8 = SharpYuvLinearToGamma
                              ((long)((ulong)uVar13 * 0x366d + (ulong)uVar14 * 0xb717 + 0x8000 +
                                     (ulong)uVar15 * 0x127c) >> 0x10,iVar45,uVar4);
            *puVar39 = uVar8;
            puVar32 = puVar40;
            puVar39 = puVar39 + 1;
          } while (puVar40 != puVar1 + lVar43);
          UpdateChroma(__ptr,puVar1,__ptr_05,uVar12,param_6,uVar4);
          lVar17 = (*_SharpYuvUpdateY)(local_170,__ptr_02,local_1e0,iVar30,iVar45);
          local_100 = local_100 + lVar17;
          (*_SharpYuvUpdateRGB)(local_168,__ptr_05,local_160,uVar12 * 3);
          iVar2 = iVar2 + 2;
          local_1f0 = local_1f0 + lVar43 * 2;
          local_170 = local_170 + lVar43 * 2;
          local_1e0 = local_1e0 + lVar43 * 2;
          local_160 = local_160 + lVar38;
          local_168 = (void *)((long)local_168 + __size);
          psVar33 = local_198;
          local_198 = psVar21;
        } while (iVar2 < (int)uVar37);
        if (iVar29 != 0) break;
        iVar29 = 1;
        local_98 = local_100;
      }
    } while (((local_88 <= local_100) && (local_100 <= local_98)) &&
            (iVar29 = iVar29 + 1, local_98 = local_100, iVar29 != 4));
    iVar45 = 1 << (bVar22 + 0xf & 0x1f);
    bVar22 = bVar22 + 0x10;
    psVar33 = __ptr_03;
    puVar31 = __ptr_00;
    uVar11 = 0;
    do {
      lVar17 = 0;
      do {
        while( true ) {
          uVar9 = puVar31[lVar17];
          iVar29 = (int)lVar17 >> 1;
          iVar30 = uVar12 + iVar29;
          uVar24 = (int)(((int)psVar33[iVar30] + (uint)uVar9) * local_78._4_4_ +
                         ((int)psVar33[iVar29] + (uint)uVar9) * (int)local_78 +
                         ((int)psVar33[(int)(iVar30 + uVar12)] + (uint)uVar9) * iStack_70 + local_80
                        + iVar45) >> (bVar22 & 0x1f);
          uVar9 = (ushort)uVar24;
          if ((int)param_13 < 9) break;
          uVar37 = 0;
          if ((-1 < (short)uVar9) && (uVar37 = uVar24, (int)uVar10 < (int)(short)uVar9)) {
            uVar37 = uVar10;
          }
          *(short *)(param_7 + lVar17 * 2) = (short)uVar37;
          lVar17 = lVar17 + 1;
          if (param_14 <= (int)lVar17) goto LAB_00101438;
        }
        if (0xff < uVar9) {
          uVar24 = (uint)(ushort)((short)~uVar9 >> 0xf);
        }
        *(char *)(param_7 + lVar17) = (char)uVar24;
        lVar17 = lVar17 + 1;
      } while ((int)lVar17 < param_14);
LAB_00101438:
      puVar31 = puVar31 + lVar43;
      uVar24 = uVar11 + 1;
      psVar33 = psVar33 + (int)((-(uVar11 & 1) & uVar12) * 3);
      param_7 = param_7 + (int)param_8;
      uVar11 = uVar24;
    } while ((int)uVar24 < param_15);
    iVar30 = 0;
    psVar33 = __ptr_03 + lVar34;
    psVar21 = psVar33 + lVar34;
    do {
      lVar43 = 0;
      do {
        while( true ) {
          uVar12 = psVar33[lVar43] * local_68._4_4_ + psVar33[lVar43 - lVar34] * (int)local_68 +
                   psVar21[lVar43] * iStack_60 + local_18c + iVar45 >> (bVar22 & 0x1f);
          uVar11 = psVar33[lVar43] * (int)local_54 + psVar33[lVar43 - lVar34] * local_58 +
                   psVar21[lVar43] * local_54._4_4_ + local_190 + iVar45 >> (bVar22 & 0x1f);
          uVar28 = (ushort)uVar12;
          uVar9 = (ushort)uVar11;
          if ((int)param_13 < 9) break;
          uVar11 = 0;
          if ((-1 < (short)uVar28) && (uVar11 = uVar12, (int)uVar10 < (int)(short)uVar28)) {
            uVar11 = uVar10;
          }
          *(short *)(param_9 + lVar43 * 2) = (short)uVar11;
          uVar28 = 0;
          if ((-1 < (short)uVar9) && (uVar28 = uVar9, (int)uVar10 < (int)(short)uVar9)) {
            uVar28 = (ushort)uVar10;
          }
          *(ushort *)(param_11 + lVar43 * 2) = uVar28;
          lVar43 = lVar43 + 1;
          if (lVar34 == lVar43) goto LAB_0010160d;
        }
        if (0xff < uVar28) {
          uVar12 = (uint)(ushort)((short)~uVar28 >> 0xf);
        }
        *(char *)(param_9 + lVar43) = (char)uVar12;
        if (0xff < uVar9) {
          uVar11 = (uint)(ushort)((short)~uVar9 >> 0xf);
        }
        *(char *)(param_11 + lVar43) = (char)uVar11;
        lVar43 = lVar43 + 1;
      } while (lVar34 != lVar43);
LAB_0010160d:
      param_9 = param_9 + (int)param_10;
      iVar30 = iVar30 + 1;
      param_11 = param_11 + (int)param_12;
      psVar33 = psVar33 + lVar38;
      psVar21 = psVar21 + lVar38;
    } while (iVar35 != iVar30);
    uVar16 = 1;
  }
  free(__ptr_00);
  free(__ptr_03);
  free(__ptr_01);
  free(__ptr_04);
  free(__ptr_02);
  free(__ptr_05);
  free(__ptr);
LAB_0010068a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}



void SharpYuvConvert(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  SharpYuvConvertWithOptions();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



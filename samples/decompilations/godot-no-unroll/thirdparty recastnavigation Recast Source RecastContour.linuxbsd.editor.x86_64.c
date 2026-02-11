
/* between(int const*, int const*, int const*) */

uint between(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined3 uVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = *param_2;
  iVar2 = param_3[2];
  iVar3 = *param_1;
  iVar4 = param_1[2];
  iVar5 = *param_3;
  iVar6 = param_2[2];
  iVar9 = (iVar5 - iVar3) * (iVar6 - iVar4);
  uVar8 = 0;
  if ((iVar1 - iVar3) * (iVar2 - iVar4) == iVar9) {
    uVar7 = (undefined3)((uint)iVar9 >> 8);
    if (iVar1 != iVar3) {
      if (iVar3 <= iVar5) {
        return (uint)(iVar3 == iVar5) | CONCAT31(uVar7,iVar5 <= iVar1);
      }
      return (uint)(iVar1 <= iVar5);
    }
    if (iVar4 <= iVar2) {
      return (uint)(iVar2 == iVar4) | CONCAT31(uVar7,iVar2 <= iVar6);
    }
    uVar8 = (uint)(iVar6 <= iVar2);
  }
  return uVar8;
}



/* intersectSegContour(int const*, int const*, int, int, int const*) */

undefined8 intersectSegContour(int *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  
  if (param_4 < 1) {
    return 0;
  }
  bVar17 = param_3 == 0;
  iVar9 = 1;
  if (param_4 < 2) goto LAB_0010026c;
LAB_001000c0:
  if (param_3 == iVar9) goto LAB_00100257;
  if (bVar17) goto LAB_00100257;
  iVar6 = iVar9 * 4;
  piVar16 = param_5 + iVar6;
  do {
    piVar1 = param_5 + (iVar6 + -4);
    iVar6 = *param_1;
    iVar10 = *piVar1;
    if ((iVar10 != iVar6) || (piVar1[2] != param_1[2])) {
      iVar2 = *param_2;
      if (iVar10 == iVar2) {
        if (param_2[2] == piVar1[2]) goto joined_r0x001002cf;
        iVar3 = *piVar16;
      }
      else {
        iVar3 = *piVar16;
      }
      if (iVar6 == iVar3) {
        if (param_1[2] == piVar16[2]) goto joined_r0x001002cf;
        iVar4 = param_2[2];
      }
      else {
        iVar4 = param_2[2];
      }
      if ((iVar2 != iVar3) || (piVar16[2] != iVar4)) {
        iVar5 = piVar1[2];
        iVar8 = param_1[2];
        iVar13 = (iVar5 - iVar8) * (iVar2 - iVar6);
        iVar11 = (iVar10 - iVar6) * (iVar4 - iVar8);
        if (iVar13 != iVar11) {
          iVar15 = (piVar16[2] - iVar8) * (iVar2 - iVar6);
          iVar14 = (iVar3 - iVar6) * (iVar4 - iVar8);
          if (iVar15 != iVar14) {
            iVar12 = piVar16[2] - iVar5;
            iVar6 = (iVar6 - iVar10) * iVar12;
            iVar8 = (iVar8 - iVar5) * (iVar3 - iVar10);
            if (iVar8 != iVar6) {
              iVar12 = (iVar2 - iVar10) * iVar12;
              iVar10 = (iVar4 - iVar5) * (iVar3 - iVar10);
              if ((iVar10 != iVar12) &&
                 (((iVar13 - iVar11 ^ iVar15 - iVar14) & (iVar8 - iVar6 ^ iVar10 - iVar12)) < 0)) {
                return 1;
              }
            }
          }
        }
        uVar7 = between(param_1,param_2,piVar1);
        if ((char)uVar7 != '\0') {
          return uVar7;
        }
        uVar7 = between(param_1,param_2,piVar16);
        if ((char)uVar7 != '\0') {
          return uVar7;
        }
        uVar7 = between(piVar1,piVar16,param_1);
        if ((char)uVar7 != '\0') {
          return uVar7;
        }
        uVar7 = between(piVar1,piVar16,param_2);
        if ((char)uVar7 != '\0') {
          return uVar7;
        }
      }
    }
joined_r0x001002cf:
    if (param_4 == iVar9) {
      return 0;
    }
LAB_00100257:
    bVar17 = param_3 == iVar9;
    iVar9 = iVar9 + 1;
    if (iVar9 < param_4) goto LAB_001000c0;
LAB_0010026c:
    if (param_3 == 0) {
      return 0;
    }
    if (bVar17) {
      return 0;
    }
    iVar6 = iVar9 * 4;
    piVar16 = param_5;
  } while( true );
}



/* compareDiagDist(void const*, void const*) */

ulong compareDiagDist(void *param_1,void *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4));
  if (*(int *)((long)param_1 + 4) < *(int *)((long)param_2 + 4)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* compareHoles(void const*, void const*) */

uint compareHoles(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((long)param_2 + 8);
  iVar2 = *(int *)((long)param_1 + 8);
  if (iVar2 != iVar1) {
    return ((iVar1 <= iVar2) - 1) + (uint)(iVar1 <= iVar2);
  }
  uVar3 = (uint)(*(int *)((long)param_2 + 0xc) < *(int *)((long)param_1 + 0xc));
  if (*(int *)((long)param_1 + 0xc) < *(int *)((long)param_2 + 0xc)) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rcBuildContours(rcContext*, rcCompactHeightfield const&, float, int, rcContourSet&, int) */

bool rcBuildContours(rcContext *param_1,rcCompactHeightfield *param_2,float param_3,int param_4,
                    rcContourSet *param_5,int param_6)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  void *pvVar12;
  uint3 uVar13;
  sbyte sVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint *__src;
  char cVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  void *pvVar26;
  long lVar27;
  byte *pbVar28;
  uint *puVar29;
  long lVar30;
  undefined8 *puVar31;
  void *pvVar32;
  long lVar33;
  int *piVar34;
  char *pcVar35;
  long *__s;
  undefined8 *puVar36;
  long *plVar37;
  int *piVar38;
  int *piVar39;
  undefined4 *puVar40;
  bool bVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  long lVar46;
  undefined4 *puVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  long *plVar52;
  uint uVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  ulong uVar59;
  char *pcVar60;
  byte bVar61;
  int iVar62;
  uint uVar63;
  int iVar64;
  uint uVar65;
  int iVar66;
  undefined1 auVar67 [8];
  uint uVar68;
  uint uVar69;
  int *piVar70;
  int iVar71;
  uint uVar72;
  size_t __n;
  int *piVar73;
  uint uVar74;
  long in_FS_OFFSET;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  uint uVar82;
  float fVar83;
  uint local_190;
  ulong local_188;
  long local_178;
  ulong local_170;
  long local_160;
  byte local_138;
  int local_10c;
  uint local_d4;
  uint local_d0;
  uint local_c4;
  uint local_9c;
  rcVectorBase<int,(rcAllocHint)1> local_98 [8];
  ulong uStack_90;
  uint *local_88;
  undefined1 local_78 [8];
  ulong uStack_70;
  int *local_68;
  uint auStack_5c [3];
  ulong local_50;
  long local_40;
  
  iVar58 = *(int *)(param_2 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *(undefined8 *)param_2;
  iVar54 = iVar58;
  uVar77 = uVar9;
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,4);
    iVar54 = *(int *)(param_2 + 0x14);
    uVar77 = *(undefined8 *)param_2;
  }
  fVar78 = *(float *)(param_2 + 0x1c);
  *(float *)(param_5 + 0xc) = fVar78;
  *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(param_2 + 0x20);
  fVar79 = *(float *)(param_2 + 0x24);
  *(float *)(param_5 + 0x14) = fVar79;
  fVar80 = *(float *)(param_2 + 0x28);
  *(float *)(param_5 + 0x18) = fVar80;
  *(undefined4 *)(param_5 + 0x1c) = *(undefined4 *)(param_2 + 0x2c);
  fVar81 = *(float *)(param_2 + 0x30);
  *(float *)(param_5 + 0x20) = fVar81;
  if (iVar58 < 1) {
    fVar83 = *(float *)(param_2 + 0x34);
  }
  else {
    fVar83 = *(float *)(param_2 + 0x34);
    fVar75 = (float)iVar58 * fVar83;
    *(float *)(param_5 + 0xc) = fVar78 + fVar75;
    *(float *)(param_5 + 0x14) = fVar79 + fVar75;
    *(float *)(param_5 + 0x18) = fVar80 - fVar75;
    *(float *)(param_5 + 0x20) = fVar81 - fVar75;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  *(int *)(param_5 + 0x34) = iVar54;
  *(float *)(param_5 + 0x38) = param_3;
  uVar6 = *(ushort *)(param_2 + 0x1a);
  *(ulong *)(param_5 + 0x24) = CONCAT44(uVar4,fVar83);
  local_c4 = 8;
  if (7 < uVar6) {
    local_c4 = (uint)uVar6;
  }
  *(ulong *)(param_5 + 0x2c) =
       CONCAT44((int)((ulong)uVar77 >> 0x20) + iVar54 * -2,(int)uVar77 + iVar54 * -2);
  lVar25 = rcAlloc((long)(int)local_c4 << 5,0);
  bVar41 = false;
  *(long *)param_5 = lVar25;
  if (lVar25 == 0) goto LAB_00100e0e;
  *(undefined4 *)(param_5 + 8) = 0;
  pvVar26 = (void *)rcAlloc();
  if (pvVar26 == (void *)0x0) {
    rcContext::log(param_1,3,"rcBuildContours: Out of memory \'flags\' (%d).",
                   *(undefined4 *)(param_2 + 8));
  }
  else {
    uVar82 = (uint)((ulong)uVar9 >> 0x20);
    local_190 = (uint)uVar9;
    if (param_1[9] == (rcContext)0x0) {
      if (0 < (int)uVar82) goto LAB_00100575;
      auVar19._12_4_ = 0;
      auVar19._0_12_ = stack0xffffffffffffff8c;
      _local_78 = auVar19 << 0x20;
      _local_98 = (undefined1  [16])0x0;
      local_88 = (uint *)0x0;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl(local_98,0x100,(int *)local_78);
      _local_78 = (undefined1  [16])0x0;
      local_9c = 0;
      local_68 = (int *)0x0;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,0x40,(int *)&local_9c);
    }
    else {
      lVar25 = *(long *)param_1;
      if (*(code **)(lVar25 + 0x28) == rcContext::doStartTimer) {
        if (0 < (int)uVar82) {
LAB_00100575:
          iVar55 = 0;
          iVar54 = 0;
          if (0 < (int)local_190) {
            do {
              uVar53 = 0;
              lVar25 = (long)iVar55 << 2;
              do {
                uVar42 = *(uint *)(*(long *)(param_2 + 0x40) + lVar25) & 0xffffff;
                uVar74 = *(byte *)(*(long *)(param_2 + 0x40) + lVar25 + 3) + uVar42;
                uVar59 = (ulong)uVar42;
                if (uVar42 < uVar74) {
                  do {
                    uVar42 = 0;
                    bVar61 = 0;
                    lVar30 = *(long *)(param_2 + 0x48) + uVar59 * 8;
                    sVar7 = *(short *)(lVar30 + 2);
                    if (0 < sVar7) {
                      lVar27 = 0;
                      do {
                        uVar43 = (int)(*(uint *)(lVar30 + 4) & 0xffffff) >>
                                 ((byte)lVar27 * '\x06' & 0x1f) & 0x3f;
                        if ((uVar43 != 0x3f) &&
                           (sVar7 == *(short *)(*(long *)(param_2 + 0x48) + 2 +
                                               (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                                     (long)(int)(((&
                                                  rcGetDirOffsetY(int)::offset)[lVar27] + iVar54) *
                                                  local_190 +
                                                  (&rcGetDirOffsetX(int)::offset)[lVar27] + uVar53)
                                                  * 4) & 0xffffff) + uVar43) * 8))) {
                          uVar42 = uVar42 | 1 << ((byte)lVar27 & 0x1f);
                        }
                        lVar27 = lVar27 + 1;
                      } while (lVar27 != 4);
                      bVar61 = (byte)uVar42 ^ 0xf;
                    }
                    *(byte *)((long)pvVar26 + uVar59) = bVar61;
                    uVar59 = uVar59 + 1;
                  } while ((int)uVar59 < (int)uVar74);
                }
                uVar53 = uVar53 + 1;
                lVar25 = lVar25 + 4;
              } while (uVar53 != local_190);
              iVar54 = iVar54 + 1;
              iVar55 = iVar55 + local_190;
            } while (iVar54 < (int)uVar82);
          }
          goto LAB_001006c6;
        }
LAB_001006d7:
        if (*(code **)(lVar25 + 0x30) != rcContext::doStopTimer) {
          (**(code **)(lVar25 + 0x30))(param_1,5);
        }
      }
      else {
        (**(code **)(lVar25 + 0x28))();
        if (0 < (int)uVar82) goto LAB_00100575;
LAB_001006c6:
        if (param_1[9] != (rcContext)0x0) {
          lVar25 = *(long *)param_1;
          goto LAB_001006d7;
        }
      }
      auVar20._12_4_ = 0;
      auVar20._0_12_ = stack0xffffffffffffff8c;
      _local_78 = auVar20 << 0x20;
      _local_98 = (undefined1  [16])0x0;
      local_88 = (uint *)0x0;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl(local_98,0x100,(int *)local_78);
      local_9c = 0;
      local_68 = (int *)0x0;
      _local_78 = (undefined1  [16])0x0;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,0x40,(int *)&local_9c);
      if (0 < (int)uVar82) {
        iVar54 = 0;
        local_d4 = 0;
        do {
          local_d0 = 0;
          lVar25 = (long)iVar54 * 4;
          if (0 < (int)local_190) {
            do {
              uVar53 = *(uint *)(*(long *)(param_2 + 0x40) + lVar25) & 0xffffff;
              local_170 = (ulong)uVar53;
              uVar42 = *(byte *)(*(long *)(param_2 + 0x40) + lVar25 + 3) + uVar53;
              if (uVar53 < uVar42) {
LAB_00100820:
                bVar61 = *(byte *)((long)pvVar26 + local_170);
                uVar53 = (uint)bVar61;
                bVar41 = bVar61 == 0xf || bVar61 == 0;
                if (bVar61 != 0xf && bVar61 != 0) {
                  sVar7 = *(short *)(*(long *)(param_2 + 0x48) + 2 + local_170 * 8);
                  if (sVar7 < 1) goto LAB_001012b4;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uStack_90;
                  _local_98 = auVar17 << 0x40;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uStack_70;
                  _local_78 = auVar18 << 0x40;
                  cVar21 = *(char *)(*(long *)(param_2 + 0x58) + local_170);
                  cVar5 = cVar21;
                  if ((param_1[9] != (rcContext)0x0) &&
                     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
                    (**(code **)(*(long *)param_1 + 0x28))(param_1,5);
                    cVar5 = *(char *)(*(long *)(param_2 + 0x58) + local_170);
                    uVar53 = (uint)*(byte *)((long)pvVar26 + local_170);
                  }
                  uVar74 = uVar53 & 1;
                  if (uVar74 == 0) {
                    do {
                      uVar74 = uVar74 + 1;
                    } while ((uVar53 >> (uVar74 & 0x1f) & 1) == 0);
                    local_138 = (byte)uVar74;
                  }
                  else {
                    local_138 = 0;
                  }
                  iVar55 = 40000;
                  uVar43 = (uint)local_138;
                  local_188 = local_170 & 0xffffffff;
                  uVar74 = local_d4;
                  uVar53 = local_d0;
                  do {
                    iVar55 = iVar55 + -1;
                    if (iVar55 == 0) break;
                    lVar27 = (long)(int)local_188;
                    bVar61 = (byte)uVar43;
                    lVar30 = *(long *)(param_2 + 0x48);
                    pbVar28 = (byte *)((long)pvVar26 + lVar27);
                    puVar1 = (ushort *)(lVar30 + lVar27 * 8);
                    uVar63 = (int)(uint)*pbVar28 >> (bVar61 & 0x1f);
                    uVar44 = (int)(*(uint *)(puVar1 + 2) & 0xffffff) >> (bVar61 * '\x06' & 0x1f) &
                             0x3f;
                    uVar72 = uVar63 & 1;
                    if ((uVar63 & 1) == 0) {
                      uVar53 = uVar53 + (&rcGetDirOffsetX(int)::offset)[uVar43 & 3];
                      uVar74 = uVar74 + (&rcGetDirOffsetY(int)::offset)[uVar43 & 3];
                      if (uVar44 == 0x3f) break;
                      uVar43 = uVar43 + 3;
                      local_188 = (ulong)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                    (long)(int)(uVar74 * *(int *)param_2 + uVar53) *
                                                    4) & 0xffffff) + uVar44);
                    }
                    else {
                      auStack_5c[2] = 0;
                      local_50 = 0;
                      uVar65 = uVar43 + 1 & 3;
                      uVar63 = (uint)*puVar1;
                      lVar33 = *(long *)(param_2 + 0x58);
                      auStack_5c[1] = (uint)CONCAT12(*(undefined1 *)(lVar33 + lVar27),puVar1[1]);
                      sVar14 = (char)uVar65 * '\x06';
                      if (uVar44 != 0x3f) {
                        lVar27 = (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                       (long)(int)(*(int *)param_2 *
                                                                   (uVar74 + (&rcGetDirOffsetY(int)
                                                                               ::offset)[uVar43 & 3]
                                                                   ) + uVar53 + (&
                                                  rcGetDirOffsetX(int)::offset)[uVar43 & 3]) * 4) &
                                             0xffffff) + uVar44);
                        puVar2 = (ushort *)(lVar30 + lVar27 * 8);
                        uVar69 = (uint)*puVar2;
                        if (*puVar2 <= uVar63) {
                          uVar69 = uVar63;
                        }
                        auStack_5c[2] = (uint)CONCAT12(*(undefined1 *)(lVar33 + lVar27),puVar2[1]);
                        uVar68 = (int)(*(uint *)(puVar2 + 2) & 0xffffff) >> sVar14 & 0x3f;
                        uVar63 = uVar69;
                        if (uVar68 != 0x3f) {
                          lVar27 = (long)(int)(uVar68 + (*(uint *)(*(long *)(param_2 + 0x40) +
                                                                  (long)(int)((uVar74 + (&
                                                  rcGetDirOffsetY(int)::offset)[uVar43 & 3] +
                                                  (&rcGetDirOffsetY(int)::offset)[(int)uVar65]) *
                                                  *(int *)param_2 +
                                                  uVar53 + (&rcGetDirOffsetX(int)::offset)
                                                           [uVar43 & 3] +
                                                  (&rcGetDirOffsetX(int)::offset)[(int)uVar65]) * 4)
                                                  & 0xffffff));
                          puVar2 = (ushort *)(lVar30 + lVar27 * 8);
                          uVar6 = *puVar2;
                          uVar63 = (uint)uVar6;
                          if (uVar6 <= uVar69) {
                            uVar63 = uVar69;
                          }
                          local_50 = (ulong)CONCAT12(*(undefined1 *)(lVar33 + lVar27),puVar2[1]);
                        }
                      }
                      uVar68 = (int)(*(uint *)(puVar1 + 2) & 0xffffff) >> sVar14 & 0x3f;
                      uVar69 = (uint)local_50;
                      if (uVar68 == 0x3f) {
                        uVar23 = 0;
                        uVar68 = uVar63;
                      }
                      else {
                        lVar27 = (long)(int)(uVar68 + (*(uint *)(*(long *)(param_2 + 0x40) +
                                                                (long)(int)((uVar74 + (&
                                                  rcGetDirOffsetY(int)::offset)[uVar65]) *
                                                  *(int *)param_2 +
                                                  uVar53 + (&rcGetDirOffsetX(int)::offset)[uVar65])
                                                  * 4) & 0xffffff));
                        puVar1 = (ushort *)(lVar30 + lVar27 * 8);
                        uVar68 = (uint)*puVar1;
                        if (*puVar1 <= uVar63) {
                          uVar68 = uVar63;
                        }
                        uVar13 = CONCAT12(*(undefined1 *)(lVar33 + lVar27),puVar1[1]);
                        uVar23 = (uint)uVar13;
                        local_50 = (ulong)CONCAT34(uVar13,(uint)local_50);
                        uVar63 = (int)(*(uint *)(puVar1 + 2) & 0xffffff) >> (bVar61 * '\x06' & 0x1f)
                                 & 0x3f;
                        if (uVar63 != 0x3f) {
                          lVar27 = (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                         (long)(int)((uVar74 + (&
                                                  rcGetDirOffsetY(int)::offset)[uVar65] +
                                                  (&rcGetDirOffsetY(int)::offset)[uVar43 & 3]) *
                                                  *(int *)param_2 +
                                                  uVar53 + (&rcGetDirOffsetX(int)::offset)[uVar65] +
                                                  (&rcGetDirOffsetX(int)::offset)[uVar43 & 3]) * 4)
                                               & 0xffffff) + uVar63);
                          puVar1 = (ushort *)(lVar30 + lVar27 * 8);
                          uVar6 = *puVar1;
                          uVar63 = (uint)uVar6;
                          if (uVar6 <= uVar68) {
                            uVar63 = uVar68;
                          }
                          uVar69 = (uint)CONCAT12(*(undefined1 *)(lVar33 + lVar27),puVar1[1]);
                          local_50 = (ulong)CONCAT34(uVar13,uVar69);
                          uVar68 = uVar63;
                        }
                      }
                      lVar27 = 1;
                      uVar63 = auStack_5c[2];
                      while( true ) {
                        uVar65 = auStack_5c[lVar27];
                        if (((((uVar63 != 0 && uVar65 != 0) && uVar69 != 0) && (uVar23 != 0)) &&
                            ((byte)(uVar65 == uVar63 & (byte)((uVar65 & uVar63) >> 0xf) &
                                   ((byte)((uVar69 | uVar23) >> 0xf) ^ 1)) != 0)) &&
                           (uVar69 >> 0x10 == uVar23 >> 0x10)) goto LAB_00101195;
                        lVar46 = lVar27 + 1;
                        if (lVar46 == 5) break;
                        uVar63 = auStack_5c[(ulong)((uint)lVar46 & 3) + 1];
                        uVar69 = auStack_5c[(ulong)((int)lVar27 + 2U & 3) + 1];
                        lVar27 = lVar46;
                        uVar23 = uVar65;
                      }
                      uVar72 = 0;
LAB_00101195:
                      if (bVar61 == 1) {
                        local_9c = uVar53 + 1;
                        uVar63 = uVar74 + 1;
                      }
                      else {
                        uVar63 = uVar74;
                        if (bVar61 == 2) {
                          local_9c = uVar53 + 1;
                        }
                        else {
                          local_9c = uVar53;
                          if (bVar61 == 0) {
                            uVar63 = uVar74 + 1;
                          }
                        }
                      }
                      uVar72 = uVar72 << 0x10;
                      if ((uVar44 != 0x3f) &&
                         (lVar27 = (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                         (long)(int)((uVar74 + (&
                                                  rcGetDirOffsetY(int)::offset)[uVar43 & 3]) *
                                                  *(int *)param_2 +
                                                  uVar53 + (&rcGetDirOffsetX(int)::offset)
                                                           [uVar43 & 3]) * 4) & 0xffffff) + uVar44),
                         uVar72 = uVar72 | *(ushort *)(lVar30 + 2 + lVar27 * 8),
                         *(char *)(lVar33 + lVar27) != cVar5)) {
                        uVar72 = uVar72 | 0x20000;
                      }
                      uVar43 = uVar43 + 1;
                      rcVectorBase<int,(rcAllocHint)1>::push_back(local_98,(int *)&local_9c);
                      local_9c = uVar68;
                      rcVectorBase<int,(rcAllocHint)1>::push_back(local_98,(int *)&local_9c);
                      local_9c = uVar63;
                      rcVectorBase<int,(rcAllocHint)1>::push_back(local_98,(int *)&local_9c);
                      local_9c = uVar72;
                      rcVectorBase<int,(rcAllocHint)1>::push_back(local_98,(int *)&local_9c);
                      *pbVar28 = *pbVar28 & ~(byte)(1 << (bVar61 & 0x1f));
                    }
                    uVar43 = uVar43 & 3;
                  } while (((int)local_188 != (int)local_170) || ((byte)uVar43 != local_138));
                  if (param_1[9] != (rcContext)0x0) {
                    lVar30 = *(long *)param_1;
                    if (*(code **)(lVar30 + 0x30) != rcContext::doStopTimer) {
                      (**(code **)(lVar30 + 0x30))(param_1,5);
                      if (param_1[9] == (rcContext)0x0) goto LAB_00100a21;
                      lVar30 = *(long *)param_1;
                    }
                    if (*(code **)(lVar30 + 0x28) != rcContext::doStartTimer) {
                      (**(code **)(lVar30 + 0x28))(param_1,6);
                    }
                  }
LAB_00100a21:
                  __src = local_88;
                  iVar45 = SUB164(_local_98,0);
                  iVar55 = iVar45 + 3;
                  if (-1 < iVar45) {
                    iVar55 = iVar45;
                  }
                  iVar55 = iVar55 >> 2;
                  if (0 < iVar45) {
                    puVar29 = local_88 + 3;
                    do {
                      if ((short)*puVar29 != 0) {
                        uVar53 = 0;
                        puVar29 = local_88;
                        if (3 < iVar45) goto LAB_00100abd;
                        break;
                      }
                      puVar29 = puVar29 + 4;
                    } while (local_88 + (ulong)(iVar45 - 1U >> 2) * 4 + 7 != puVar29);
                    goto LAB_00100b6d;
                  }
                  local_9c = *local_88;
                  uVar53 = local_88[1];
                  uVar63 = 0;
                  uVar43 = 0;
                  uVar74 = local_88[2];
                  uVar72 = uVar53;
                  uVar44 = local_9c;
                  uVar65 = uVar74;
                  goto LAB_00100bea;
                }
                *(undefined1 *)((long)pvVar26 + local_170) = 0;
                goto LAB_001012b4;
              }
LAB_001012dc:
              local_d0 = local_d0 + 1;
              lVar25 = lVar25 + 4;
            } while (local_d0 != local_190);
          }
          local_d4 = local_d4 + 1;
          iVar54 = iVar54 + local_190;
        } while (local_d4 != uVar82);
      }
    }
    if (*(int *)(param_5 + 8) < 1) {
LAB_00101333:
      bVar41 = true;
      piVar38 = local_68;
    }
    else {
      pcVar35 = (char *)rcAlloc((long)*(int *)(param_5 + 8));
      if (pcVar35 != (char *)0x0) {
        lVar25 = 0;
        iVar58 = 0;
        if (0 < *(int *)(param_5 + 8)) {
          do {
            puVar31 = (undefined8 *)(lVar25 * 0x20 + *(long *)param_5);
            iVar54 = *(int *)(puVar31 + 1);
            piVar38 = (int *)*puVar31;
            if (iVar54 < 1) {
              cVar21 = '\x01';
            }
            else {
              lVar30 = (long)((iVar54 + -1) * 4);
              iVar45 = 0;
              iVar54 = (piVar38 + lVar30)[2];
              piVar34 = piVar38;
              iVar55 = piVar38[lVar30];
              do {
                iVar62 = *piVar34;
                piVar70 = piVar34 + 4;
                iVar66 = iVar54 * iVar62;
                iVar54 = piVar34[2];
                iVar45 = iVar45 + (iVar66 - iVar55 * iVar54);
                piVar34 = piVar70;
                iVar55 = iVar62;
              } while (piVar70 != piVar38 + lVar30 + 4);
              cVar21 = '\x01';
              if (iVar45 < -2) {
                iVar58 = iVar58 + 1;
                cVar21 = -1;
              }
            }
            pcVar35[lVar25] = cVar21;
            lVar25 = lVar25 + 1;
          } while ((int)lVar25 < *(int *)(param_5 + 8));
          if (0 < iVar58) {
            uVar6 = *(ushort *)(param_2 + 0x1a);
            __n = (long)(int)(uVar6 + 1) * 0x18;
            __s = (long *)rcAlloc(__n);
            if (__s == (long *)0x0) {
              rcContext::log(param_1,3,"rcBuildContours: Out of memory \'regions\' (%d).",uVar6 + 1)
              ;
            }
            else {
              memset(__s,0,__n);
              pvVar32 = (void *)rcAlloc((long)*(int *)(param_5 + 8) * 0x18);
              if (pvVar32 != (void *)0x0) {
                memset(pvVar32,0,(long)*(int *)(param_5 + 8) * 0x18);
                lVar25 = (long)*(int *)(param_5 + 8);
                if (0 < *(int *)(param_5 + 8)) {
                  lVar30 = 0;
                  do {
                    lVar27 = lVar30 * 0x20 + *(long *)param_5;
                    plVar52 = __s + (ulong)*(ushort *)(lVar27 + 0x1c) * 3;
                    if (pcVar35[lVar30] < '\x01') {
                      *(int *)(plVar52 + 2) = (int)plVar52[2] + 1;
                    }
                    else {
                      if (*plVar52 != 0) {
                        rcContext::log(param_1,3,"rcBuildContours: Multiple outlines for region %d."
                                       ,(ulong)*(ushort *)(lVar27 + 0x1c));
                        plVar52 = __s + (ulong)*(ushort *)(lVar27 + 0x1c) * 3;
                        lVar25 = (long)*(int *)(param_5 + 8);
                      }
                      *plVar52 = lVar27;
                    }
                    lVar30 = lVar30 + 1;
                  } while ((int)lVar30 < (int)lVar25);
                }
                plVar52 = __s + 2;
                iVar58 = 0;
                do {
                  lVar30 = *plVar52;
                  if (0 < (int)lVar30) {
                    lVar27 = (long)iVar58;
                    *(int *)plVar52 = 0;
                    iVar58 = iVar58 + (int)lVar30;
                    plVar52[-1] = (long)((long)pvVar32 + lVar27 * 0x18);
                  }
                  plVar52 = plVar52 + 3;
                } while (__s + (ulong)uVar6 * 3 + 5 != plVar52);
                if (0 < (int)lVar25) {
                  lVar30 = *(long *)param_5;
                  lVar25 = lVar25 * 0x20 + lVar30;
                  pcVar60 = pcVar35;
                  do {
                    if (*pcVar60 < '\0') {
                      uVar8 = *(ushort *)(lVar30 + 0x1c);
                      lVar27 = __s[(ulong)uVar8 * 3 + 2];
                      *(int *)(__s + (ulong)uVar8 * 3 + 2) = (int)lVar27 + 1;
                      *(long *)(__s[(ulong)uVar8 * 3 + 1] + (long)(int)lVar27 * 0x18) = lVar30;
                    }
                    lVar30 = lVar30 + 0x20;
                    pcVar60 = pcVar60 + 1;
                  } while (lVar30 != lVar25);
                }
                iVar58 = 0;
                plVar52 = __s;
                do {
                  iVar54 = (int)plVar52[2];
                  if (iVar54 != 0) {
                    if (*plVar52 == 0) {
                      rcContext::log(param_1,3,
                                     "rcBuildContours: Bad outline for region %d, contour simplification is likely too aggressive."
                                     ,iVar58);
                    }
                    else {
                      puVar31 = (undefined8 *)plVar52[1];
                      if (0 < iVar54) {
                        iVar55 = 0;
                        puVar36 = puVar31;
                        do {
                          puVar10 = (undefined8 *)*puVar36;
                          piVar38 = (int *)*puVar10;
                          iVar54 = *piVar38;
                          *(int *)(puVar36 + 1) = iVar54;
                          iVar45 = piVar38[2];
                          *(undefined4 *)(puVar36 + 2) = 0;
                          *(int *)((long)puVar36 + 0xc) = iVar45;
                          if (1 < *(int *)(puVar10 + 1)) {
                            iVar45 = 1;
                            do {
                              iVar62 = piVar38[4];
                              iVar66 = piVar38[6];
                              if ((iVar62 < iVar54) ||
                                 ((iVar62 == iVar54 && (iVar66 < *(int *)((long)puVar36 + 0xc))))) {
                                *(int *)(puVar36 + 2) = iVar45;
                                puVar36[1] = CONCAT44(iVar66,iVar62);
                                if (*(int *)(puVar10 + 1) <= iVar45 + 1) break;
                              }
                              else if (*(int *)(puVar10 + 1) <= iVar45 + 1) break;
                              iVar45 = iVar45 + 1;
                              iVar54 = *(int *)(puVar36 + 1);
                              piVar38 = piVar38 + 4;
                            } while( true );
                          }
                          iVar54 = (int)plVar52[2];
                          iVar55 = iVar55 + 1;
                          puVar36 = puVar36 + 3;
                        } while (iVar55 < iVar54);
                      }
                      qsort(puVar31,(long)iVar54,0x18,compareHoles);
                      iVar54 = *(int *)(*plVar52 + 8);
                      if (0 < (int)plVar52[2]) {
                        plVar37 = (long *)plVar52[1];
                        plVar11 = plVar37 + (long)(int)plVar52[2] * 3;
                        do {
                          lVar25 = *plVar37;
                          plVar37 = plVar37 + 3;
                          iVar54 = iVar54 + *(int *)(lVar25 + 8);
                        } while (plVar11 != plVar37);
                      }
                      piVar38 = (int *)rcAlloc((long)iVar54 << 3);
                      if (piVar38 == (int *)0x0) {
                        rcContext::log(param_1,2,"mergeRegionHoles: Failed to allocated diags %d.",
                                       iVar54);
                        rcFree((void *)0x0);
                      }
                      else {
                        puVar31 = (undefined8 *)*plVar52;
                        local_160 = 0;
                        local_178 = 0;
                        if (0 < (int)plVar52[2]) {
                          do {
                            local_10c = 0;
                            plVar11 = *(long **)(local_160 + plVar52[1]);
                            iVar54 = *(int *)((undefined8 *)(local_160 + plVar52[1]) + 2);
                            if (0 < (int)plVar11[1]) {
LAB_001022cf:
                              piVar34 = (int *)(*plVar11 + (long)(iVar54 << 2) * 4);
                              iVar55 = *(int *)(puVar31 + 1);
                              if (0 < iVar55) {
                                piVar73 = (int *)*puVar31;
                                piVar70 = piVar73 + 2;
                                if (iVar55 == 1) {
                                  iVar45 = 0;
                                  iVar62 = 0;
                                  piVar39 = piVar73;
                                  goto LAB_00102336;
                                }
                                iVar45 = 0;
                                iVar62 = 0;
                                iVar66 = 1;
                                do {
                                  piVar39 = piVar73 + iVar66 * 4;
                                  iVar57 = iVar62;
                                  iVar50 = iVar62;
                                  if (iVar66 == 1) {
LAB_00102336:
                                    iVar57 = iVar55;
                                    iVar66 = 1;
                                    iVar50 = iVar62;
                                  }
                                  do {
                                    iVar62 = iVar66;
                                    iVar66 = piVar70[-2];
                                    iVar51 = piVar39[2];
                                    iVar49 = *piVar39;
                                    iVar24 = *piVar34;
                                    iVar22 = *piVar70;
                                    iVar48 = piVar73[(iVar57 + -1) * 4];
                                    iVar57 = (piVar73 + (iVar57 + -1) * 4)[2];
                                    iVar56 = piVar34[2];
                                    if ((iVar49 - iVar48) * (iVar22 - iVar57) <
                                        (iVar66 - iVar48) * (iVar51 - iVar57)) {
                                      iVar71 = iVar66 - iVar24;
                                      if (((iVar49 - iVar66) * (iVar56 - iVar22) <
                                           (iVar51 - iVar22) * (iVar24 - iVar66)) ||
                                         ((iVar48 - iVar24) * (iVar22 - iVar56) <
                                          (iVar57 - iVar56) * iVar71)) {
LAB_001023cc:
                                        lVar25 = (long)iVar45;
                                        iVar45 = iVar45 + 1;
                                        piVar38[lVar25 * 2] = iVar50;
                                        (piVar38 + lVar25 * 2)[1] =
                                             iVar71 * iVar71 + (iVar22 - iVar56) * (iVar22 - iVar56)
                                        ;
                                      }
                                    }
                                    else if (((iVar57 - iVar22) * (iVar24 - iVar66) <
                                              (iVar48 - iVar66) * (iVar56 - iVar22)) &&
                                            (iVar71 = iVar66 - iVar24,
                                            (iVar51 - iVar56) * iVar71 <
                                            (iVar22 - iVar56) * (iVar49 - iVar24)))
                                    goto LAB_001023cc;
                                    piVar70 = piVar70 + 4;
                                    if (iVar55 == iVar62) {
                                      qsort(piVar38,(long)iVar45,8,compareDiagDist);
                                      if (iVar45 < 1) goto LAB_001025ad;
                                      piVar70 = (int *)*puVar31;
                                      iVar55 = *(int *)(puVar31 + 1);
                                      iVar62 = piVar38[local_178 * 2];
                                      lVar25 = plVar52[2];
                                      piVar73 = piVar38;
                                      goto LAB_00102518;
                                    }
                                    iVar66 = iVar62 + 1;
                                    piVar39 = piVar73;
                                    iVar57 = iVar62;
                                    iVar50 = iVar62;
                                  } while (iVar55 <= iVar66);
                                } while( true );
                              }
                              qsort(piVar38,0,8,compareDiagDist);
                              goto LAB_001025ad;
                            }
LAB_001025f1:
                            rcContext::log(param_1,2,
                                           "mergeHoles: Failed to find merge points for %p and %p.",
                                           *plVar52);
LAB_00102619:
                            local_178 = local_178 + 1;
                            local_160 = local_160 + 0x18;
                          } while ((int)local_178 < (int)plVar52[2]);
                        }
                        rcFree(piVar38);
                      }
                    }
                  }
                  iVar58 = iVar58 + 1;
                  plVar52 = plVar52 + 3;
                } while (iVar58 != uVar6 + 1);
                rcFree(pvVar32);
                rcFree(__s);
                goto LAB_00102667;
              }
              rcContext::log(param_1,3,"rcBuildContours: Out of memory \'holes\' (%d).",
                             *(undefined4 *)(param_5 + 8));
              rcFree((void *)0x0);
            }
            rcFree(__s);
            goto LAB_00102461;
          }
        }
LAB_00102667:
        rcFree(pcVar35);
        goto LAB_00101333;
      }
      rcContext::log(param_1,3,"rcBuildContours: Out of memory \'hole\' (%d).",
                     *(undefined4 *)(param_5 + 8));
LAB_00102461:
      rcFree(pcVar35);
      bVar41 = false;
      piVar38 = local_68;
    }
LAB_00100def:
    rcFree(piVar38);
    rcFree(local_88);
  }
  rcFree(pvVar26);
LAB_00100e0e:
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar41;
LAB_00100abd:
  do {
    uVar74 = uVar53 + 1;
    if (((__src[((int)uVar74 % iVar55) * 4 + 3] ^ puVar29[3]) & 0x2ffff) != 0) {
      local_9c = *puVar29;
      rcVectorBase<int,(rcAllocHint)1>::push_back
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
      local_9c = puVar29[1];
      rcVectorBase<int,(rcAllocHint)1>::push_back
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
      local_9c = puVar29[2];
      rcVectorBase<int,(rcAllocHint)1>::push_back
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
      local_9c = uVar53;
      rcVectorBase<int,(rcAllocHint)1>::push_back
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    }
    puVar29 = puVar29 + 4;
    uVar53 = uVar74;
  } while ((int)uVar74 < iVar55);
  iVar62 = SUB164(_local_78,0);
  if (iVar62 == 0) {
LAB_00100b6d:
    local_9c = *__src;
    uVar53 = __src[1];
    uVar74 = __src[2];
    lVar30 = 0;
    uVar63 = 0;
    uVar43 = 0;
    uVar72 = uVar53;
    uVar44 = local_9c;
    uVar65 = uVar74;
    do {
      uVar69 = __src[lVar30];
      uVar68 = __src[lVar30 + 2];
      uVar23 = (int)lVar30 >> 2;
      if (((int)uVar69 < (int)local_9c) || (((int)uVar68 < (int)uVar74 && (uVar69 == local_9c)))) {
        local_9c = uVar69;
        uVar53 = __src[lVar30 + 1];
        uVar74 = uVar68;
        uVar43 = uVar23;
      }
      if (((int)uVar44 < (int)uVar69) || (((int)uVar65 < (int)uVar68 && (uVar69 == uVar44)))) {
        uVar72 = __src[lVar30 + 1];
        uVar44 = uVar69;
        uVar63 = uVar23;
        uVar65 = uVar68;
      }
      lVar30 = lVar30 + 4;
    } while ((int)lVar30 < iVar45);
LAB_00100bea:
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    local_9c = uVar53;
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    local_9c = uVar74;
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    local_9c = uVar43;
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    local_9c = uVar44;
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    local_9c = uVar72;
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    local_9c = uVar65;
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    local_9c = uVar63;
    rcVectorBase<int,(rcAllocHint)1>::push_back
              ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(int *)&local_9c);
    iVar62 = SUB164(_local_78,0);
  }
  iVar45 = iVar62 + 3;
  if (-1 < iVar62) {
    iVar45 = iVar62;
  }
  iVar45 = iVar45 >> 2;
  if (3 < iVar62) {
    piVar38 = local_68;
    auVar67 = local_78;
    iVar66 = 0;
    do {
      while( true ) {
        iVar57 = iVar66 * 4;
        iVar50 = iVar66 + 1;
        iVar51 = piVar38[iVar57];
        iVar49 = piVar38[(long)(iVar57 + 2) + 1];
        iVar24 = piVar38[iVar57 + 2];
        iVar22 = (iVar50 % iVar45) * 4;
        iVar45 = piVar38[iVar22];
        lVar30 = (long)(iVar22 + 2);
        iVar22 = piVar38[lVar30];
        if ((iVar51 < iVar45) || ((iVar51 == iVar45 && (iVar24 < iVar22)))) {
          iVar48 = iVar49 + 1;
          iVar64 = 1;
          iVar49 = piVar38[lVar30 + 1];
          iVar56 = iVar51;
          iVar71 = iVar22;
          iVar51 = iVar45;
          iVar22 = iVar24;
        }
        else {
          iVar64 = iVar55 + -1;
          iVar48 = piVar38[lVar30 + 1] + iVar64;
          iVar56 = iVar45;
          iVar71 = iVar24;
        }
        iVar48 = iVar48 % iVar55;
        iVar45 = iVar48 * 4;
        if ((((short)__src[iVar45 + 3] == 0) || ((__src[iVar45 + 3] & 0x20000) != 0)) &&
           (iVar48 != iVar49)) break;
LAB_00100d40:
        iVar62 = SUB84(auVar67,0);
        iVar45 = iVar62 + 3;
        if (-1 < iVar62) {
          iVar45 = iVar62;
        }
        iVar45 = iVar45 >> 2;
        iVar66 = iVar50;
        if (iVar45 <= iVar50) goto LAB_00101610;
      }
      fVar79 = (float)(iVar71 - iVar22);
      iVar24 = -1;
      fVar80 = (float)(iVar51 - iVar56);
      fVar78 = 0.0;
      fVar81 = fVar80 * fVar80 + fVar79 * fVar79;
      while( true ) {
        fVar83 = (float)(int)(__src[iVar45] - iVar56) * fVar80 +
                 (float)(int)(__src[iVar45 + 2] - iVar22) * fVar79;
        if (0.0 < fVar81) {
          fVar83 = fVar83 / fVar81;
        }
        if (0.0 <= fVar83) {
          fVar75 = fVar79;
          fVar76 = fVar80;
          if (fVar83 <= __LC2) {
            fVar76 = fVar80 * fVar83;
            fVar75 = fVar83 * fVar79;
          }
        }
        else {
          fVar75 = fVar79 * 0.0;
          fVar76 = fVar80 * 0.0;
        }
        fVar83 = (fVar76 + (float)iVar56) - (float)(int)__src[iVar45];
        fVar75 = (fVar75 + (float)iVar22) - (float)(int)__src[iVar45 + 2];
        fVar83 = fVar83 * fVar83 + fVar75 * fVar75;
        if (fVar78 < fVar83) {
          fVar78 = fVar83;
          iVar24 = iVar48;
        }
        iVar48 = (iVar64 + iVar48) % iVar55;
        if (iVar48 == iVar49) break;
        iVar45 = iVar48 * 4;
      }
      if ((iVar24 == -1) || (fVar78 <= param_3 * param_3)) goto LAB_00100d40;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(long)(iVar62 + 4),(int *)0x0);
      iVar62 = SUB164(_local_78,0);
      iVar45 = iVar62 + 3;
      if (-1 < iVar62) {
        iVar45 = iVar62;
      }
      iVar45 = iVar45 >> 2;
      if (iVar66 < iVar45 + -1) {
        uVar53 = 0;
        lVar30 = 0;
        do {
          puVar40 = (undefined4 *)((long)local_68 + lVar30 + (long)iVar45 * 0x10 + -0x20);
          uVar4 = puVar40[1];
          uVar15 = puVar40[2];
          uVar16 = puVar40[3];
          uVar53 = uVar53 + 1;
          puVar47 = (undefined4 *)((long)local_68 + lVar30 + (long)iVar45 * 0x10 + -0x10);
          *puVar47 = *puVar40;
          puVar47[1] = uVar4;
          puVar47[2] = uVar15;
          puVar47[3] = uVar16;
          lVar30 = lVar30 + -0x10;
        } while (uVar53 < (uint)((iVar45 + -1) - iVar66));
      }
      lVar27 = (long)(iVar57 + 5);
      lVar30 = (long)(iVar24 * 4 + 1);
      local_68[(long)iVar57 + 4] = __src[iVar24 * 4];
      local_68[lVar27] = __src[lVar30];
      uVar53 = __src[lVar30 + 1];
      local_68[lVar27 + 2] = iVar24;
      local_68[lVar27 + 1] = uVar53;
      piVar38 = local_68;
      auVar67 = local_78;
    } while (iVar66 < iVar45);
LAB_00101610:
    if ((0 < param_4) && ((param_6 & 3U) != 0)) {
      if (iVar62 < 4) goto LAB_00101bb4;
      iVar66 = 0;
      do {
        iVar57 = iVar66 * 4;
        iVar50 = piVar38[iVar57 + 3];
        iVar51 = (iVar50 + 1) % iVar55;
        if ((((param_6 & 1U) == 0) || ((short)__src[iVar51 * 4 + 3] != 0)) &&
           (((param_6 & 2U) == 0 ||
            ((*(byte *)((long)__src + (long)(iVar51 * 4 + 3) * 4 + 2) & 2) == 0)))) {
LAB_00101700:
          iVar62 = SUB84(auVar67,0);
          iVar45 = iVar62 + 3;
          if (-1 < iVar62) {
            iVar45 = iVar62;
          }
          iVar45 = iVar45 >> 2;
          iVar66 = iVar66 + 1;
        }
        else {
          iVar51 = piVar38[iVar57];
          iVar45 = ((iVar66 + 1) % iVar45) * 4;
          lVar30 = (long)(iVar45 + 2);
          iVar45 = piVar38[iVar45];
          iVar49 = piVar38[lVar30] - piVar38[(long)(iVar57 + 3) + -1];
          if ((iVar45 - iVar51) * (iVar45 - iVar51) + iVar49 * iVar49 <= param_4 * param_4)
          goto LAB_00101700;
          iVar49 = piVar38[lVar30 + 1];
          iVar24 = iVar49 - iVar50;
          if (iVar49 < iVar50) {
            iVar24 = (iVar49 + iVar55) - iVar50;
          }
          if (iVar24 < 2) goto LAB_00101700;
          if ((iVar45 <= iVar51) &&
             ((iVar51 != iVar45 || (piVar38[lVar30] <= piVar38[(long)(iVar57 + 3) + -1])))) {
            iVar24 = iVar24 + 1;
          }
          iVar50 = ((iVar24 >> 1) + iVar50) % iVar55;
          if (iVar50 == -1) goto LAB_00101700;
          rcVectorBase<int,(rcAllocHint)1>::resize_impl
                    ((rcVectorBase<int,(rcAllocHint)1> *)local_78,(long)(iVar62 + 4),(int *)0x0);
          iVar62 = SUB164(_local_78,0);
          iVar45 = iVar62 + 3;
          if (-1 < iVar62) {
            iVar45 = iVar62;
          }
          iVar45 = iVar45 >> 2;
          if (iVar66 < iVar45 + -1) {
            uVar53 = 0;
            lVar30 = 0;
            do {
              uVar53 = uVar53 + 1;
              *(undefined1 (*) [16])((long)local_68 + lVar30 + (long)iVar45 * 0x10 + -0x10) =
                   *(undefined1 (*) [16])((long)local_68 + lVar30 + (long)iVar45 * 0x10 + -0x20);
              lVar30 = lVar30 + -0x10;
            } while (uVar53 < (uint)((iVar45 + -1) - iVar66));
          }
          local_68[(long)iVar57 + 4] = __src[iVar50 * 4];
          lVar27 = (long)(iVar50 * 4 + 1);
          lVar30 = (long)(iVar57 + 5);
          local_68[lVar30] = __src[lVar27];
          uVar53 = __src[lVar27 + 1];
          local_68[lVar30 + 2] = iVar50;
          local_68[lVar30 + 1] = uVar53;
          piVar38 = local_68;
          auVar67 = local_78;
        }
      } while (iVar66 < iVar45);
    }
    if (3 < iVar62) {
      iVar62 = 0;
      puVar29 = (uint *)(piVar38 + 3);
      do {
        iVar62 = iVar62 + 1;
        *puVar29 = __src[((int)(*puVar29 + 1) % iVar55) * 4 + 3] & 0x2ffff |
                   __src[(int)(*puVar29 * 4 + 3)] & 0x10000;
        puVar29 = puVar29 + 4;
      } while (iVar62 < iVar45);
      lVar30 = 0;
      do {
        iVar62 = (int)lVar30;
        piVar34 = piVar38;
        if (iVar62 + 1 < iVar45) {
          piVar34 = piVar38 + (iVar62 + 1) * 4;
        }
        iVar66 = SUB84(auVar67,0);
        piVar70 = piVar38 + lVar30 * 4;
        if ((*piVar70 == *piVar34) && (piVar70[2] == piVar34[2])) {
          iVar57 = iVar66 + 3;
          if (-1 < iVar66) {
            iVar57 = iVar66;
          }
          if (iVar62 < (iVar57 >> 2) + -1) {
            uVar53 = 0;
            lVar27 = 0;
            do {
              puVar40 = (undefined4 *)((long)piVar38 + lVar27 + lVar30 * 0x10 + 0x10);
              uVar4 = puVar40[1];
              uVar15 = puVar40[2];
              uVar16 = puVar40[3];
              uVar53 = uVar53 + 1;
              puVar47 = (undefined4 *)((long)piVar70 + lVar27);
              *puVar47 = *puVar40;
              puVar47[1] = uVar4;
              puVar47[2] = uVar15;
              puVar47[3] = uVar16;
              lVar27 = lVar27 + 0x10;
            } while (uVar53 < ((iVar57 >> 2) - iVar62) - 1U);
          }
          lVar27 = (long)(iVar66 + -4);
          if (lVar27 < (long)auVar67) {
LAB_00101874:
            local_78 = (undefined1  [8])lVar27;
            auVar67 = (undefined1  [8])lVar27;
            iVar66 = iVar66 + -4;
          }
          else if ((long)auVar67 < lVar27) {
            if ((long)uStack_70 < lVar27) {
              lVar33 = uStack_70 * 2;
              if ((long)(uStack_70 * 2) < lVar27) {
                lVar33 = lVar27;
              }
              piVar34 = (int *)rcAlloc(lVar33 * 4,1);
              if ((piVar34 != (int *)0x0) && (0 < (long)auVar67 << 2)) {
                lVar46 = 0;
                do {
                  piVar34[lVar46] = piVar38[lVar46];
                  lVar46 = lVar46 + 1;
                } while (lVar46 < ((long)auVar67 << 2) >> 2);
              }
              rcFree(piVar38);
              local_68 = piVar34;
              uStack_70 = lVar33;
            }
            goto LAB_00101874;
          }
          iVar45 = iVar45 + -1;
          if (iVar45 <= iVar62 + 1) goto LAB_00101898;
        }
        else if (iVar45 <= iVar62 + 1) goto LAB_00101898;
        lVar30 = lVar30 + 1;
        piVar38 = local_68;
      } while( true );
    }
  }
LAB_00101bb4:
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,6);
  }
LAB_001012b4:
  local_170 = local_170 + 1;
  if ((int)uVar42 <= (int)local_170) goto LAB_001012dc;
  goto LAB_00100820;
LAB_00101898:
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,6);
  }
  if (0xb < iVar66) {
    iVar45 = *(int *)(param_5 + 8);
    if ((int)local_c4 <= iVar45) {
      local_c4 = local_c4 * 2;
      lVar30 = rcAlloc((long)(int)local_c4 << 5,0);
      iVar45 = *(int *)(param_5 + 8);
      if (iVar45 < 1) {
        pvVar32 = *(void **)param_5;
      }
      else {
        pvVar32 = *(void **)param_5;
        lVar27 = 0;
        do {
          uVar9 = ((undefined8 *)((long)pvVar32 + lVar27))[1];
          *(undefined8 *)(lVar30 + lVar27) = *(undefined8 *)((long)pvVar32 + lVar27);
          ((undefined8 *)(lVar30 + lVar27))[1] = uVar9;
          *(undefined1 (*) [16])(lVar30 + 0x10 + lVar27) =
               *(undefined1 (*) [16])((long)pvVar32 + lVar27 + 0x10);
          *(undefined8 *)((long)pvVar32 + lVar27) = 0;
          *(undefined8 *)((long)pvVar32 + lVar27 + 0x10) = 0;
          lVar27 = lVar27 + 0x20;
        } while ((long)iVar45 * 0x20 != lVar27);
      }
      rcFree(pvVar32);
      *(long *)param_5 = lVar30;
      rcContext::log(param_1,2,"rcBuildContours: Expanding max contours from %d to %d.");
      iVar45 = *(int *)(param_5 + 8);
    }
    puVar31 = (undefined8 *)((long)iVar45 * 0x20 + *(long *)param_5);
    *(int *)(param_5 + 8) = iVar45 + 1;
    *(int *)(puVar31 + 1) = iVar66 >> 2;
    pvVar32 = (void *)rcAlloc((long)(iVar66 >> 2) << 4,0);
    piVar38 = local_68;
    *puVar31 = pvVar32;
    if (pvVar32 == (void *)0x0) {
      rcContext::log(param_1,3,"rcBuildContours: Out of memory \'verts\' (%d).",
                     *(undefined4 *)(puVar31 + 1));
      goto LAB_00100def;
    }
    memcpy(pvVar32,local_68,(long)*(int *)(puVar31 + 1) << 4);
    if (iVar58 < 1) {
      *(int *)(puVar31 + 3) = iVar55;
      pvVar32 = (void *)rcAlloc((long)iVar55 << 4,0);
      puVar31[2] = pvVar32;
      if (pvVar32 == (void *)0x0) {
LAB_00101d73:
        rcContext::log(param_1,3,"rcBuildContours: Out of memory \'rverts\' (%d).",
                       *(undefined4 *)(puVar31 + 3));
        goto LAB_00100def;
      }
      memcpy(pvVar32,__src,(long)*(int *)(puVar31 + 3) << 4);
    }
    else {
      if (0 < *(int *)(puVar31 + 1)) {
        piVar34 = (int *)*puVar31;
        iVar45 = 0;
        do {
          *piVar34 = *piVar34 - iVar58;
          iVar45 = iVar45 + 1;
          piVar34[2] = piVar34[2] - iVar58;
          piVar34 = piVar34 + 4;
        } while (iVar45 < *(int *)(puVar31 + 1));
      }
      *(int *)(puVar31 + 3) = iVar55;
      pvVar32 = (void *)rcAlloc((long)iVar55 << 4,0);
      puVar31[2] = pvVar32;
      if (pvVar32 == (void *)0x0) goto LAB_00101d73;
      memcpy(pvVar32,__src,(long)*(int *)(puVar31 + 3) << 4);
      if (0 < *(int *)(puVar31 + 3)) {
        piVar38 = (int *)puVar31[2];
        iVar55 = 0;
        do {
          *piVar38 = *piVar38 - iVar58;
          iVar55 = iVar55 + 1;
          piVar38[2] = piVar38[2] - iVar58;
          piVar38 = piVar38 + 4;
        } while (iVar55 < *(int *)(puVar31 + 3));
      }
    }
    *(short *)((long)puVar31 + 0x1c) = sVar7;
    *(char *)((long)puVar31 + 0x1e) = cVar21;
  }
  goto LAB_001012b4;
LAB_00102518:
  do {
    iVar66 = *piVar73;
    piVar39 = piVar70 + iVar66 * 4;
    cVar21 = intersectSegContour(piVar39,piVar34,iVar62,iVar55,piVar70);
    if ((int)local_178 < (int)lVar25) {
      if (cVar21 == '\0') {
        lVar30 = plVar52[1];
        plVar37 = (long *)(lVar30 + local_160);
        do {
          cVar21 = intersectSegContour(piVar39,piVar34,-1,*(int *)((undefined8 *)*plVar37 + 1),
                                       *(int **)*plVar37);
          if ((long *)(lVar30 + ((ulong)(uint)(((int)lVar25 + -1) - (int)local_178) + local_178) *
                                0x18) == plVar37) goto LAB_00102596;
          plVar37 = plVar37 + 3;
        } while (cVar21 == '\0');
      }
    }
    else {
LAB_00102596:
      if (cVar21 == '\0') {
        if (iVar66 != -1) {
          puVar36 = (undefined8 *)*plVar52;
          puVar40 = (undefined4 *)
                    rcAlloc((long)((int)plVar11[1] + *(int *)(puVar36 + 1) + 2) << 4,0);
          if (puVar40 == (undefined4 *)0x0) {
            rcContext::log(param_1,2,"mergeHoles: Failed to merge contours %p and %p.",*plVar52);
          }
          else {
            iVar55 = *(int *)(puVar36 + 1);
            pvVar12 = (void *)*puVar36;
            if (iVar55 < 0) {
              iVar45 = 0;
            }
            else {
              iVar45 = 0;
              puVar47 = puVar40;
              do {
                iVar62 = iVar66 + iVar45;
                iVar45 = iVar45 + 1;
                puVar3 = (undefined4 *)((long)pvVar12 + (long)((iVar62 % iVar55) * 4) * 4);
                *puVar47 = *puVar3;
                puVar47[1] = puVar3[1];
                puVar47[2] = puVar3[2];
                puVar47[3] = puVar3[3];
                iVar55 = *(int *)(puVar36 + 1);
                puVar47 = puVar47 + 4;
              } while (iVar45 <= iVar55);
            }
            iVar55 = (int)plVar11[1];
            if (-1 < iVar55) {
              lVar25 = *plVar11;
              puVar47 = puVar40 + (long)iVar45 * 4;
              iVar62 = 0;
              do {
                iVar66 = iVar62;
                puVar3 = (undefined4 *)(lVar25 + (long)(((iVar54 + iVar66) % iVar55) * 4) * 4);
                *puVar47 = *puVar3;
                puVar47[1] = puVar3[1];
                puVar47[2] = puVar3[2];
                puVar47[3] = puVar3[3];
                iVar55 = (int)plVar11[1];
                puVar47 = puVar47 + 4;
                iVar62 = iVar66 + 1;
              } while (iVar66 + 1 <= iVar55);
              iVar45 = iVar45 + 1 + iVar66;
            }
            rcFree(pvVar12);
            *(int *)(puVar36 + 1) = iVar45;
            *puVar36 = puVar40;
            rcFree((void *)*plVar11);
            *plVar11 = 0;
            *(undefined4 *)(plVar11 + 1) = 0;
          }
          goto LAB_00102619;
        }
        break;
      }
    }
    piVar73 = piVar73 + 2;
  } while (piVar38 + (long)iVar45 * 2 != piVar73);
LAB_001025ad:
  local_10c = local_10c + 1;
  iVar54 = (iVar54 + 1) % (int)plVar11[1];
  if ((int)plVar11[1] <= local_10c) goto LAB_001025f1;
  goto LAB_001022cf;
}



/* rcContext::doStartTimer(rcTimerLabel) */

void rcContext::doStartTimer(void)

{
  return;
}



/* rcContext::doStopTimer(rcTimerLabel) */

void rcContext::doStopTimer(void)

{
  return;
}



/* rcVectorBase<int, (rcAllocHint)1>::push_back(int const&) */

void __thiscall
rcVectorBase<int,(rcAllocHint)1>::push_back(rcVectorBase<int,(rcAllocHint)1> *this,int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)this;
  lVar5 = *(long *)(this + 8);
  if (lVar1 < lVar5) {
    *(long *)this = lVar1 + 1;
    *(int *)(*(long *)(this + 0x10) + lVar1 * 4) = *param_1;
    return;
  }
  if (lVar5 < 0x3fffffffffffffff) {
    lVar6 = lVar5 + 1;
    if (lVar5 + 1 <= lVar5 * 2) {
      lVar6 = lVar5 * 2;
    }
    lVar1 = lVar6 * 4;
  }
  else {
    lVar1 = -4;
    lVar6 = 0x7fffffffffffffff;
  }
  lVar1 = rcAlloc(lVar1,1);
  if (lVar1 == 0) {
    lVar3 = *(long *)this;
    pvVar4 = *(void **)(this + 0x10);
    lVar5 = lVar3 * 4;
  }
  else {
    lVar3 = *(long *)this;
    pvVar4 = *(void **)(this + 0x10);
    lVar5 = lVar3 * 4;
    if (0 < lVar5) {
      lVar2 = 0;
      do {
        *(undefined4 *)(lVar1 + lVar2 * 4) = *(undefined4 *)((long)pvVar4 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 < lVar5 >> 2);
    }
  }
  *(int *)(lVar1 + lVar5) = *param_1;
  *(long *)(this + 8) = lVar6;
  *(long *)this = lVar3 + 1;
  rcFree(pvVar4);
  *(long *)(this + 0x10) = lVar1;
  return;
}



/* rcVectorBase<int, (rcAllocHint)1>::resize_impl(long, int const*) */

void __thiscall
rcVectorBase<int,(rcAllocHint)1>::resize_impl
          (rcVectorBase<int,(rcAllocHint)1> *this,long param_1,int *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  lVar3 = *(long *)this;
  if (lVar3 <= param_1) {
    if (param_1 <= lVar3) {
      return;
    }
    lVar1 = *(long *)(this + 8);
    if (lVar1 < param_1) {
      if (lVar1 < 0x3fffffffffffffff) {
        lVar6 = lVar1 * 2;
        if (lVar1 * 2 < param_1) {
          lVar6 = param_1;
        }
        lVar3 = lVar6 * 4;
      }
      else {
        lVar3 = -4;
        lVar6 = 0x7fffffffffffffff;
      }
      lVar3 = rcAlloc(lVar3,1);
      pvVar2 = *(void **)(this + 0x10);
      if ((lVar3 != 0) && (lVar1 = *(long *)this, 0 < lVar1 << 2)) {
        lVar4 = 0;
        do {
          *(undefined4 *)(lVar3 + lVar4 * 4) = *(undefined4 *)((long)pvVar2 + lVar4 * 4);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (lVar1 << 2) >> 2);
      }
      if (param_2 != (int *)0x0) {
        for (piVar5 = (int *)(lVar3 + *(long *)this * 4); piVar5 < (int *)(lVar3 + param_1 * 4);
            piVar5 = piVar5 + 1) {
          *piVar5 = *param_2;
        }
      }
      rcFree(pvVar2);
      *(long *)(this + 0x10) = lVar3;
      *(long *)(this + 8) = lVar6;
    }
    else if (param_2 != (int *)0x0) {
      lVar1 = *(long *)(this + 0x10);
      for (piVar5 = (int *)(lVar1 + lVar3 * 4); piVar5 < (int *)(lVar1 + param_1 * 4);
          piVar5 = piVar5 + 1) {
        *piVar5 = *param_2;
      }
    }
  }
  *(long *)this = param_1;
  return;
}



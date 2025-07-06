/* removeAdjacentNeighbours(rcRegion&) */

void removeAdjacentNeighbours(rcRegion *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  lVar5 = 0;
  iVar4 = 0;
  lVar7 = *(long *)(param_1 + 0x10);
  do {
    iVar6 = (int)lVar7;
    lVar5 = lVar5 * 4;
    iVar3 = iVar4;
    do {
      iVar4 = iVar3;
      iVar3 = 1;
      if (0 < iVar4) {
        iVar3 = iVar4;
      }
      if (iVar6 <= iVar3) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x20);
      piVar1 = (int *)(lVar2 + lVar5);
      lVar5 = lVar5 + 4;
      iVar3 = iVar4 + 1;
    } while (*piVar1 != *(int *)(lVar2 + (long)((iVar4 + 1) % iVar6) * 4));
    lVar5 = (long)iVar4;
    if (iVar4 < iVar6 + -1) {
      memmove((void *)(lVar5 * 4 + lVar2),(void *)(lVar2 + 4 + lVar5 * 4),
              (ulong)(uint)((iVar6 + -2) - iVar4) * 4 + 4);
    }
    lVar7 = lVar7 + -1;
    *(long *)(param_1 + 0x10) = lVar7;
  } while( true );
}



/* isSolidEdge(rcCompactHeightfield&, unsigned short const*, int, int, int, int) */

undefined8
isSolidEdge(rcCompactHeightfield *param_1,ushort *param_2,int param_3,int param_4,int param_5,
           int param_6)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = (ulong)(uint)param_4;
  uVar2 = 0;
  uVar3 = (int)(*(uint *)(*(long *)(param_1 + 0x48) + 4 + (long)param_5 * 8) & 0xffffff) >>
          ((char)param_6 * '\x06' & 0x1fU) & 0x3f;
  if (uVar3 != 0x3f) {
    uVar1 = (ulong)(int)((*(uint *)(*(long *)(param_1 + 0x40) +
                                   (long)((param_4 + (&rcGetDirOffsetY(int)::offset)[param_6 & 3U])
                                          * *(int *)param_1 +
                                         param_3 + (&rcGetDirOffsetX(int)::offset)[param_6 & 3U]) *
                                   4) & 0xffffff) + uVar3);
    uVar2 = param_2[uVar1];
  }
  return CONCAT71((int7)(uVar1 >> 8),param_2[param_5] != uVar2);
}



/* paintRectRegion(int, int, int, int, unsigned short, rcCompactHeightfield&, unsigned short*) */

void paintRectRegion(int param_1,int param_2,int param_3,int param_4,ushort param_5,
                    rcCompactHeightfield *param_6,ushort *param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  iVar1 = *(int *)param_6;
  if (param_3 < param_4) {
    iVar6 = param_3 * iVar1;
    do {
      if (param_1 < param_2) {
        lVar2 = *(long *)(param_6 + 0x40);
        puVar8 = (uint *)(lVar2 + ((long)param_1 + (long)iVar6) * 4);
        do {
          uVar4 = *puVar8 & 0xffffff;
          uVar5 = (ulong)uVar4;
          uVar7 = *(byte *)((long)puVar8 + 3) + uVar4;
          if (uVar4 < uVar7) {
            lVar3 = *(long *)(param_6 + 0x58);
            do {
              if (*(char *)(lVar3 + uVar5) != '\0') {
                param_7[uVar5] = param_5;
              }
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < (int)uVar7);
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != (uint *)(lVar2 + ((long)iVar6 +
                                            (ulong)(uint)(param_2 - param_1) + (long)param_1) * 4));
      }
      param_3 = param_3 + 1;
      iVar6 = iVar6 + iVar1;
    } while (param_4 != param_3);
  }
  return;
}



/* canMergeWithRegion(rcRegion const&, rcRegion const&) [clone .isra.0] */

undefined8 canMergeWithRegion(rcRegion *param_1,rcRegion *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  rcRegion in_DL;
  int iVar5;
  
  if (param_1[6] != in_DL) {
    return 0;
  }
  if (0 < (int)*(undefined8 *)(param_1 + 0x10)) {
    puVar1 = *(uint **)(param_1 + 0x20) + 1;
    iVar5 = 0;
    puVar3 = puVar1;
    puVar4 = *(uint **)(param_1 + 0x20);
    while (puVar2 = puVar3, iVar5 = iVar5 + (uint)(((uint)param_2 & 0xffff) == *puVar4),
          puVar2 != puVar1 + ((int)*(undefined8 *)(param_1 + 0x10) - 1)) {
      puVar4 = puVar2;
      puVar3 = puVar2 + 1;
    }
    if (1 < iVar5) {
      return 0;
    }
  }
  if (0 < (int)*(undefined8 *)(param_1 + 0x28)) {
    puVar3 = *(uint **)(param_1 + 0x38);
    puVar1 = puVar3 + (ulong)((int)*(undefined8 *)(param_1 + 0x28) - 1) + 1;
    do {
      if (((uint)param_2 & 0xffff) == *puVar3) {
        return 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
  }
  return 1;
}



/* rcVectorBase<(anonymous namespace)::LevelStackEntry, (rcAllocHint)1>::push_back((anonymous
   namespace)::LevelStackEntry const&) */

void __thiscall
rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1>::push_back
          (rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> *this,
          LevelStackEntry *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)this;
  lVar6 = *(long *)(this + 8);
  if (lVar4 < lVar6) {
    *(long *)this = lVar4 + 1;
    puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar4 * 0xc);
    *puVar1 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    return;
  }
  if (lVar6 < 0x3fffffffffffffff) {
    lVar4 = lVar6 + 1;
    if (lVar6 + 1 <= lVar6 * 2) {
      lVar4 = lVar6 * 2;
    }
    lVar6 = lVar4 * 0xc;
  }
  else {
    lVar6 = -0xc;
    lVar4 = 0x7fffffffffffffff;
  }
  lVar6 = rcAlloc(lVar6,1);
  if (lVar6 == 0) {
    lVar9 = *(long *)this;
    pvVar7 = *(void **)(this + 0x10);
    lVar8 = lVar9 * 0xc;
  }
  else {
    lVar9 = *(long *)this;
    pvVar7 = *(void **)(this + 0x10);
    lVar8 = lVar9 * 0xc;
    lVar5 = (lVar8 >> 2) * -0x5555555555555555;
    if (0 < lVar8) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        lVar3 = lVar3 + 1;
        *(undefined8 *)(lVar6 + lVar2) = *(undefined8 *)((long)pvVar7 + lVar2);
        *(undefined4 *)(lVar6 + 8 + lVar2) = *(undefined4 *)((long)pvVar7 + lVar2 + 8);
        lVar2 = lVar2 + 0xc;
      } while (lVar5 - lVar3 != 0 && lVar3 <= lVar5);
    }
  }
  *(undefined8 *)(lVar6 + lVar8) = *(undefined8 *)param_1;
  *(undefined4 *)(lVar6 + 8 + lVar8) = *(undefined4 *)(param_1 + 8);
  *(long *)(this + 8) = lVar4;
  *(long *)this = lVar9 + 1;
  rcFree(pvVar7);
  *(long *)(this + 0x10) = lVar6;
  return;
}



/* expandRegions(int, unsigned short, rcCompactHeightfield&, unsigned short*, unsigned short*,
   rcTempVector<(anonymous namespace)::LevelStackEntry>&, bool) */

void expandRegions(int param_1,ushort param_2,rcCompactHeightfield *param_3,ushort *param_4,
                  ushort *param_5,rcTempVector *param_6,bool param_7)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  ushort uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long in_FS_OFFSET;
  long local_80;
  int *local_78;
  long local_60;
  int local_4c;
  int local_48;
  undefined4 local_44;
  long local_40;
  
  iVar14 = *(int *)(param_3 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)param_3;
  if (param_7) {
    *(undefined8 *)param_6 = 0;
    if (0 < iVar14) {
      iVar15 = 0;
      iVar16 = 0;
      if (0 < iVar2) {
        do {
          lVar4 = (long)iVar16 * 4;
          iVar7 = 0;
          do {
            uVar11 = *(uint *)(*(long *)(param_3 + 0x40) + lVar4) & 0xffffff;
            uVar8 = *(byte *)(*(long *)(param_3 + 0x40) + lVar4 + 3) + uVar11;
            uVar10 = (ulong)uVar11;
            if (uVar11 < uVar8) {
              do {
                if (((param_2 <= *(ushort *)(*(long *)(param_3 + 0x50) + uVar10 * 2)) &&
                    (param_4[uVar10] == 0)) &&
                   (*(char *)(*(long *)(param_3 + 0x58) + uVar10) != '\0')) {
                  local_44 = (undefined4)uVar10;
                  local_4c = iVar7;
                  local_48 = iVar15;
                  rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1>::push_back
                            ((rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> *)
                             param_6,(LevelStackEntry *)&local_4c);
                }
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)uVar8);
            }
            iVar7 = iVar7 + 1;
            lVar4 = lVar4 + 4;
          } while (iVar2 != iVar7);
          iVar16 = iVar16 + iVar2;
          iVar15 = iVar15 + 1;
        } while (iVar15 != iVar14);
      }
      if (0 < *(long *)param_6) {
        lVar4 = *(long *)(param_6 + 0x10);
        goto LAB_0010044a;
      }
    }
  }
  else if (0 < *(long *)param_6) {
    lVar4 = *(long *)(param_6 + 0x10);
    piVar6 = (int *)(lVar4 + 8);
    piVar5 = piVar6 + *(long *)param_6 * 3;
    do {
      if (param_4[*piVar6] != 0) {
        *piVar6 = -1;
      }
      piVar6 = piVar6 + 3;
    } while (piVar6 != piVar5);
LAB_0010044a:
    local_78 = (int *)0x0;
    iVar14 = 0;
    local_60 = 0;
LAB_00100470:
    lVar17 = 0;
    local_80 = 0;
    iVar15 = 0;
    do {
      piVar6 = (int *)(lVar4 + lVar17 * 0xc);
      iVar16 = piVar6[2];
      if (iVar16 < 0) {
LAB_001005bd:
        lVar4 = *(long *)param_6;
        iVar15 = iVar15 + 1;
        if (lVar4 <= lVar17 + 1) goto LAB_00100780;
      }
      else {
        lVar4 = (long)iVar16;
        iVar7 = 0;
        uVar1 = param_4[lVar4];
        uVar12 = 0xffff;
        piVar9 = &rcGetDirOffsetX(int)::offset;
        piVar5 = &rcGetDirOffsetY(int)::offset;
        do {
          uVar11 = (int)(*(uint *)(*(long *)(param_3 + 0x48) + 4 + lVar4 * 8) & 0xffffff) >>
                   ((byte)iVar7 & 0x1f) & 0x3f;
          if (((uVar11 != 0x3f) &&
              (lVar13 = (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                              (long)((*piVar5 + piVar6[1]) * iVar2 +
                                                    *piVar9 + *piVar6) * 4) & 0xffffff) + uVar11),
              *(char *)(*(long *)(param_3 + 0x58) + lVar13) ==
              *(char *)(*(long *)(param_3 + 0x58) + lVar4))) &&
             ((0 < (short)param_4[lVar13] && (param_5[lVar13] + 2 < (uint)uVar12)))) {
            uVar12 = param_5[lVar13] + 2;
            uVar1 = param_4[lVar13];
          }
          iVar7 = iVar7 + 6;
          piVar9 = piVar9 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar7 != 0x18);
        if (uVar1 == 0) goto LAB_001005bd;
        piVar6[2] = -1;
        lVar13 = local_80 + 1;
        if (local_80 < local_60) {
          piVar6 = local_78 + local_80 * 2;
          *piVar6 = iVar16;
          *(ushort *)(piVar6 + 1) = uVar1;
          *(ushort *)((long)piVar6 + 6) = uVar12;
        }
        else {
          lVar4 = local_60 + 1;
          if (local_60 < 0x3fffffffffffffff) {
            lVar3 = local_60 * 2;
            local_60 = lVar4;
            if (lVar4 <= lVar3) {
              local_60 = lVar3;
            }
            lVar4 = local_60 * 8;
          }
          else {
            lVar4 = -8;
            local_60 = 0x7fffffffffffffff;
          }
          piVar6 = (int *)rcAlloc(lVar4,1);
          if ((piVar6 != (int *)0x0) && (0 < local_80 * 8)) {
            lVar4 = 0;
            do {
              *(undefined8 *)(piVar6 + lVar4 * 2) = *(undefined8 *)(local_78 + lVar4 * 2);
              lVar4 = lVar4 + 1;
            } while (lVar4 < local_80 * 8 >> 3);
          }
          piVar5 = piVar6 + local_80 * 2;
          *piVar5 = iVar16;
          *(ushort *)(piVar5 + 1) = uVar1;
          *(ushort *)((long)piVar5 + 6) = uVar12;
          rcFree(local_78);
          local_78 = piVar6;
        }
        lVar4 = *(long *)param_6;
        local_80 = lVar13;
        if (lVar4 <= lVar17 + 1) goto LAB_00100780;
      }
      lVar17 = lVar17 + 1;
      lVar4 = *(long *)(param_6 + 0x10);
    } while( true );
  }
  local_78 = (int *)0x0;
LAB_001008d3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  rcFree(local_78);
  return;
LAB_00100780:
  if (0 < local_80) {
    piVar6 = local_78;
    do {
      iVar16 = *piVar6;
      piVar5 = piVar6 + 2;
      param_4[iVar16] = *(ushort *)(piVar6 + 1);
      param_5[iVar16] = *(ushort *)((long)piVar6 + 6);
      piVar6 = piVar5;
    } while (piVar5 != local_78 + local_80 * 2);
  }
  if ((lVar4 == iVar15) ||
     (((param_2 != 0 && (iVar14 = iVar14 + 1, param_1 <= iVar14)) || (*(long *)param_6 < 1))))
  goto LAB_001008d3;
  lVar4 = *(long *)(param_6 + 0x10);
  goto LAB_00100470;
}



/* rcBuildDistanceField(rcContext*, rcCompactHeightfield&) */

undefined8 rcBuildDistanceField(rcContext *param_1,rcCompactHeightfield *param_2)

{
  uint uVar1;
  ushort *__s;
  long lVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ushort uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  rcContext rVar23;
  uint uVar24;
  long local_98;
  int *local_90;
  int *local_88;
  int local_74;
  uint local_68;
  int local_64;
  
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x11);
  }
  if (*(void **)(param_2 + 0x50) != (void *)0x0) {
    rcFree(*(void **)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  __s = (ushort *)rcAlloc((long)*(int *)(param_2 + 8) * 2,1);
  if (__s == (ushort *)0x0) {
    uVar9 = 0;
    rcContext::log(param_1,3,"rcBuildDistanceField: Out of memory \'src\' (%d).",
                   *(undefined4 *)(param_2 + 8));
    goto LAB_001013a9;
  }
  lVar2 = rcAlloc((long)*(int *)(param_2 + 8) * 2,1);
  if (lVar2 == 0) {
    uVar9 = 0;
    rcContext::log(param_1,3,"rcBuildDistanceField: Out of memory \'dst\' (%d).",
                   *(undefined4 *)(param_2 + 8));
    rcFree(__s);
    goto LAB_001013a9;
  }
  rVar23 = param_1[9];
  if ((rVar23 != (rcContext)0x0) && (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)
     ) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x12);
    rVar23 = param_1[9];
  }
  local_68 = *(uint *)param_2;
  uVar24 = *(uint *)(param_2 + 8);
  local_64 = *(int *)(param_2 + 4);
  if ((int)uVar24 < 1) {
    if (0 < local_64) goto LAB_001009f6;
    *(undefined2 *)(param_2 + 0x18) = 0;
    if (rVar23 != (rcContext)0x0) goto LAB_00101070;
LAB_001014de:
    *(long *)(param_2 + 0x50) = lVar2;
  }
  else {
    memset(__s,0xff,(ulong)uVar24 * 2);
    if (local_64 < 1) {
LAB_0010101f:
      uVar19 = 0;
      puVar4 = __s;
      if ((uVar24 & 1) == 0) goto LAB_00101046;
      if (*__s != 0) {
        uVar19 = *__s;
      }
      for (puVar4 = __s + 1; puVar4 != __s + (int)uVar24; puVar4 = puVar4 + 2) {
LAB_00101046:
        if (uVar19 < *puVar4) {
          uVar19 = *puVar4;
        }
        if (uVar19 < puVar4[1]) {
          uVar19 = puVar4[1];
        }
      }
      *(ushort *)(param_2 + 0x18) = uVar19;
      if (rVar23 == (rcContext)0x0) {
        if (local_64 < 1) goto LAB_001014de;
        rVar23 = (rcContext)0x0;
        goto LAB_001010bb;
      }
LAB_00101070:
      lVar5 = *(long *)param_1;
      if (*(code **)(lVar5 + 0x30) != rcContext::doStopTimer) {
        (**(code **)(lVar5 + 0x30))(param_1,0x12);
        if (param_1[9] == (rcContext)0x0) {
          local_68 = *(uint *)param_2;
          local_64 = *(int *)(param_2 + 4);
          rVar23 = (rcContext)0x0;
          if (local_64 < 1) goto LAB_001014de;
          goto LAB_001010bb;
        }
        lVar5 = *(long *)param_1;
      }
      if (*(code **)(lVar5 + 0x28) == rcContext::doStartTimer) {
        local_68 = *(uint *)param_2;
        rVar23 = param_1[9];
        local_64 = *(int *)(param_2 + 4);
      }
      else {
        (**(code **)(lVar5 + 0x28))(param_1,0x13);
        local_68 = *(uint *)param_2;
        rVar23 = param_1[9];
        local_64 = *(int *)(param_2 + 4);
      }
      if (0 < local_64) goto LAB_001010bb;
    }
    else {
LAB_001009f6:
      if (0 < (int)local_68) {
        lVar5 = *(long *)(param_2 + 0x40);
        iVar8 = 0;
        local_74 = 0;
        do {
          uVar18 = 0;
          puVar6 = (uint *)(lVar5 + (long)iVar8 * 4);
          do {
            uVar1 = *puVar6 & 0xffffff;
            uVar3 = (ulong)uVar1;
            uVar13 = *(byte *)((long)puVar6 + 3) + uVar1;
            if (uVar1 < uVar13) {
              lVar20 = *(long *)(param_2 + 0x58);
              lVar12 = *(long *)(param_2 + 0x48) + uVar3 * 8;
              do {
                iVar7 = 0;
                local_88 = &rcGetDirOffsetX(int)::offset;
                local_90 = &rcGetDirOffsetY(int)::offset;
                iVar14 = 0;
                do {
                  uVar1 = (int)(*(uint *)(lVar12 + 4) & 0xffffff) >> ((byte)iVar14 & 0x1f);
                  if (((uVar1 & 0x3f) != 0x3f) &&
                     (*(char *)(lVar20 + uVar3) ==
                      *(char *)(lVar20 + (int)((*(uint *)(lVar5 + (long)(int)((local_74 + *local_90)
                                                                              * local_68 +
                                                                             *local_88 + uVar18) * 4
                                                         ) & 0xffffff) + (uVar1 & 0x3f))))) {
                    iVar7 = iVar7 + 1;
                  }
                  iVar14 = iVar14 + 6;
                  local_88 = local_88 + 1;
                  local_90 = local_90 + 1;
                } while (iVar14 != 0x18);
                if (iVar7 != 4) {
                  __s[uVar3] = 0;
                }
                uVar3 = uVar3 + 1;
                lVar12 = lVar12 + 8;
              } while ((int)uVar3 < (int)uVar13);
            }
            uVar18 = uVar18 + 1;
            puVar6 = puVar6 + 1;
          } while (local_68 != uVar18);
          local_74 = local_74 + 1;
          iVar8 = iVar8 + local_68;
        } while (local_64 != local_74);
      }
      iVar8 = 0;
      iVar7 = 0;
      uVar18 = 0xffffffff;
      uVar1 = ~local_68;
      do {
        if (0 < (int)local_68) {
          lVar5 = *(long *)(param_2 + 0x40);
          puVar6 = (uint *)(lVar5 + (long)iVar8 * 4);
          uVar13 = uVar1;
          do {
            while( true ) {
              uVar10 = *puVar6 & 0xffffff;
              uVar21 = *(byte *)((long)puVar6 + 3) + uVar10;
              if (uVar21 <= uVar10) break;
              uVar3 = (ulong)uVar10;
              lVar20 = *(long *)(param_2 + 0x48);
              uVar15 = uVar13 + 1;
              puVar4 = __s + uVar3;
              lVar12 = lVar20 + uVar3 * 8;
              do {
                uVar11 = *(uint *)(lVar12 + 4);
                if ((uVar11 & 0x3f) != 0x3f) {
                  lVar22 = (long)(int)((*(uint *)(lVar5 + (long)(int)((iVar8 - uVar1) + -1 + uVar13)
                                                          * 4) & 0xffffff) + (uVar11 & 0x3f));
                  if (__s[lVar22] + 2 < (uint)*puVar4) {
                    *puVar4 = __s[lVar22] + 2;
                  }
                  iVar14 = (int)(*(uint *)(lVar20 + lVar22 * 8 + 4) & 0xffffff) >> 0x12;
                  if ((iVar14 != 0x3f) &&
                     (__s[(int)((*(uint *)(lVar5 + (long)(int)uVar13 * 4) & 0xffffff) + iVar14)] + 3
                      < (uint)*puVar4)) {
                    *puVar4 = __s[(int)((*(uint *)(lVar5 + (long)(int)uVar13 * 4) & 0xffffff) +
                                       iVar14)] + 3;
                  }
                  uVar11 = *(uint *)(lVar12 + 4);
                }
                iVar14 = (int)(uVar11 & 0xffffff) >> 0x12;
                if (iVar14 != 0x3f) {
                  lVar22 = (long)(int)(iVar14 + (*(uint *)(lVar5 + (long)(int)uVar15 * 4) & 0xffffff
                                                ));
                  if (__s[lVar22] + 2 < (uint)*puVar4) {
                    *puVar4 = __s[lVar22] + 2;
                  }
                  uVar11 = *(uint *)(lVar20 + lVar22 * 8 + 4) >> 0xc & 0x3f;
                  if ((uVar11 != 0x3f) &&
                     (__s[(int)((*(uint *)(lVar5 + (long)(int)(uVar13 + 2) * 4) & 0xffffff) + uVar11
                               )] + 3 < (uint)*puVar4)) {
                    *puVar4 = __s[(int)((*(uint *)(lVar5 + (long)(int)(uVar13 + 2) * 4) & 0xffffff)
                                       + uVar11)] + 3;
                  }
                }
                puVar4 = puVar4 + 1;
                lVar12 = lVar12 + 8;
              } while (__s + (uVar21 - uVar10) + uVar3 != puVar4);
              puVar6 = puVar6 + 1;
              uVar13 = uVar15;
              if (uVar18 == uVar15) goto LAB_00100daf;
            }
            uVar13 = uVar13 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar18 != uVar13);
        }
LAB_00100daf:
        uVar18 = uVar18 + local_68;
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + local_68;
        uVar1 = uVar1 + local_68;
      } while (local_64 != iVar7);
      iVar8 = local_64 + -1;
      iVar7 = local_64 * local_68;
      iVar14 = local_68 * iVar8;
      do {
        if (0 < (int)local_68) {
          lVar5 = *(long *)(param_2 + 0x40);
          puVar6 = (uint *)(lVar5 + ((long)iVar14 + (long)(int)(local_68 - 1)) * 4);
          iVar17 = local_68 + iVar7;
          do {
            while( true ) {
              uVar18 = *puVar6 & 0xffffff;
              uVar1 = *(byte *)((long)puVar6 + 3) + uVar18;
              if (uVar1 <= uVar18) break;
              uVar3 = (ulong)uVar18;
              lVar20 = *(long *)(param_2 + 0x48);
              iVar16 = iVar17 + -1;
              puVar4 = __s + uVar3;
              lVar12 = lVar20 + uVar3 * 8;
              do {
                uVar10 = *(uint *)(lVar12 + 4) & 0xffffff;
                uVar13 = (int)uVar10 >> 0xc & 0x3f;
                if (uVar13 != 0x3f) {
                  lVar22 = (long)(int)((*(uint *)(lVar5 + (long)((iVar14 - iVar7) + iVar17) * 4) &
                                       0xffffff) + uVar13);
                  if (__s[lVar22] + 2 < (uint)*puVar4) {
                    *puVar4 = __s[lVar22] + 2;
                  }
                  uVar13 = *(uint *)(lVar20 + lVar22 * 8 + 4) >> 6 & 0x3f;
                  if ((uVar13 != 0x3f) &&
                     (__s[(int)((*(uint *)(lVar5 + (long)iVar17 * 4) & 0xffffff) + uVar13)] + 3 <
                      (uint)*puVar4)) {
                    *puVar4 = __s[(int)((*(uint *)(lVar5 + (long)iVar17 * 4) & 0xffffff) + uVar13)]
                              + 3;
                  }
                  uVar10 = *(uint *)(lVar12 + 4) & 0xffffff;
                }
                uVar13 = (int)uVar10 >> 6 & 0x3f;
                if (uVar13 != 0x3f) {
                  lVar22 = (long)(int)(uVar13 + (*(uint *)(lVar5 + (long)iVar16 * 4) & 0xffffff));
                  if (__s[lVar22] + 2 < (uint)*puVar4) {
                    *puVar4 = __s[lVar22] + 2;
                  }
                  uVar13 = *(uint *)(lVar20 + lVar22 * 8 + 4) & 0x3f;
                  if ((uVar13 != 0x3f) &&
                     (__s[(int)((*(uint *)(lVar5 + (long)(iVar17 + -2) * 4) & 0xffffff) + uVar13)] +
                      3 < (uint)*puVar4)) {
                    *puVar4 = __s[(int)((*(uint *)(lVar5 + (long)(iVar17 + -2) * 4) & 0xffffff) +
                                       uVar13)] + 3;
                  }
                }
                puVar4 = puVar4 + 1;
                lVar12 = lVar12 + 8;
              } while (__s + (uVar1 - uVar18) + uVar3 != puVar4);
              puVar6 = puVar6 + -1;
              iVar17 = iVar16;
              if (iVar7 == iVar16) goto LAB_00100fec;
            }
            iVar17 = iVar17 + -1;
            puVar6 = puVar6 + -1;
          } while (iVar7 != iVar17);
        }
LAB_00100fec:
        iVar8 = iVar8 + -1;
        iVar7 = iVar7 - local_68;
        iVar14 = iVar14 - local_68;
      } while (iVar8 != -1);
      if (0 < (int)uVar24) goto LAB_0010101f;
      *(undefined2 *)(param_2 + 0x18) = 0;
      if (rVar23 != (rcContext)0x0) goto LAB_00101070;
      rVar23 = (rcContext)0x0;
LAB_001010bb:
      if (0 < (int)local_68) {
        lVar5 = *(long *)(param_2 + 0x40);
        local_74 = 0;
        iVar8 = 0;
        do {
          uVar24 = 0;
          puVar6 = (uint *)(lVar5 + (long)iVar8 * 4);
          do {
            uVar1 = *puVar6 & 0xffffff;
            uVar18 = *(byte *)((long)puVar6 + 3) + uVar1;
            if (uVar1 < uVar18) {
              lVar12 = *(long *)(param_2 + 0x48);
              uVar3 = (ulong)uVar1;
              local_98 = lVar12 + uVar3 * 8;
              do {
                uVar19 = __s[uVar3];
                if (2 < uVar19) {
                  lVar20 = 0;
                  uVar1 = (uint)uVar19;
                  do {
                    uVar13 = (int)(*(uint *)(local_98 + 4) & 0xffffff) >>
                             ((char)lVar20 * '\x06' & 0x1fU) & 0x3f;
                    if (uVar13 == 0x3f) {
                      uVar1 = uVar1 + (uint)uVar19 + (uint)uVar19;
                    }
                    else {
                      lVar22 = (long)(int)((*(uint *)(lVar5 + (long)(int)(local_68 *
                                                                          (local_74 +
                                                                          (&rcGetDirOffsetY(int)::
                                                                            offset)[lVar20]) +
                                                                         (&rcGetDirOffsetX(int)::
                                                                           offset)[lVar20] + uVar24)
                                                              * 4) & 0xffffff) + uVar13);
                      uVar10 = (int)lVar20 + 1U & 3;
                      iVar7 = __s[lVar22] + uVar1;
                      uVar13 = (int)(*(uint *)(lVar12 + 4 + lVar22 * 8) & 0xffffff) >>
                               (char)uVar10 * '\x06' & 0x3f;
                      uVar1 = (uint)uVar19 + iVar7;
                      if (uVar13 != 0x3f) {
                        uVar1 = (uint)__s[(int)((*(uint *)(lVar5 + (long)(int)((local_74 +
                                                                                (&
                                                  rcGetDirOffsetY(int)::offset)[lVar20] +
                                                  (&rcGetDirOffsetY(int)::offset)[uVar10]) *
                                                  local_68 +
                                                  (&rcGetDirOffsetX(int)::offset)[lVar20] + uVar24 +
                                                  (&rcGetDirOffsetX(int)::offset)[uVar10]) * 4) &
                                                0xffffff) + uVar13)] + iVar7;
                      }
                    }
                    lVar20 = lVar20 + 1;
                  } while (lVar20 != 4);
                  uVar19 = (ushort)((int)(uVar1 + 5) / 9);
                }
                local_98 = local_98 + 8;
                *(ushort *)(lVar2 + uVar3 * 2) = uVar19;
                uVar3 = uVar3 + 1;
              } while ((int)uVar3 < (int)uVar18);
            }
            uVar24 = uVar24 + 1;
            puVar6 = puVar6 + 1;
          } while (local_68 != uVar24);
          local_74 = local_74 + 1;
          iVar8 = iVar8 + local_68;
        } while (local_64 != local_74);
      }
    }
    *(long *)(param_2 + 0x50) = lVar2;
    if ((rVar23 != (rcContext)0x0) &&
       (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,0x13);
    }
  }
  uVar9 = 1;
  rcFree(__s);
LAB_001013a9:
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x11);
  }
  return uVar9;
}



/* rcBuildLayerRegions(rcContext*, rcCompactHeightfield&, int, int) */

undefined8
rcBuildLayerRegions(rcContext *param_1,rcCompactHeightfield *param_2,int param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  char cVar11;
  rcVectorBase<int,(rcAllocHint)1> rVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ushort *__s;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  ushort uVar28;
  ushort uVar29;
  long lVar30;
  undefined1 *puVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  ushort uVar35;
  short sVar36;
  uint *puVar37;
  uint *puVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  undefined2 uVar43;
  int iVar44;
  rcVectorBase<int,(rcAllocHint)1> *this;
  long lVar45;
  int *piVar46;
  uint uVar47;
  long lVar48;
  int *piVar49;
  long in_FS_OFFSET;
  bool bVar50;
  void *local_1b0;
  short local_1a8;
  uint local_16c;
  long local_160;
  int local_150;
  uint local_140;
  int local_ec;
  undefined1 local_e8 [16];
  void *local_d8;
  undefined1 local_c8 [16];
  int *local_b8;
  rcVectorBase<int,(rcAllocHint)1> local_a8 [8];
  ulong uStack_a0;
  void *local_98;
  undefined1 local_88 [6];
  undefined1 auStack_82 [6];
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x14);
  }
  iVar15 = *(int *)param_2;
  iVar27 = *(int *)(param_2 + 4);
  __s = (ushort *)rcAlloc((long)*(int *)(param_2 + 8) * 2);
  if (__s == (ushort *)0x0) {
    uVar33 = 0;
    rcContext::log(param_1,3,"rcBuildLayerRegions: Out of memory \'src\' (%d).",
                   *(undefined4 *)(param_2 + 8));
    goto LAB_0010245d;
  }
  memset(__s,0,(long)*(int *)(param_2 + 8) * 2);
  iVar34 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) < *(int *)param_2) {
    iVar34 = *(int *)param_2;
  }
  pvVar16 = (void *)rcAlloc((long)iVar34 << 3,1);
  if (pvVar16 == (void *)0x0) {
    uVar33 = 0;
    rcContext::log(param_1,3,"rcBuildLayerRegions: Out of memory \'sweeps\' (%d).",iVar34);
  }
  else {
    if (param_3 < 1) {
      local_140 = 2;
      lVar48 = 2;
      uVar47 = 1;
      local_16c = 1;
    }
    else {
      iVar34 = iVar15;
      if (param_3 < iVar15) {
        iVar34 = param_3;
      }
      iVar32 = param_3;
      if (iVar27 <= param_3) {
        iVar32 = iVar27;
      }
      paintRectRegion(0,iVar34,0,iVar27,0x8001,param_2,__s);
      paintRectRegion(iVar15 - iVar34,iVar15,0,iVar27,0x8002,param_2,__s);
      paintRectRegion(0,iVar15,0,iVar32,0x8003,param_2,__s);
      paintRectRegion(0,iVar15,iVar27 - iVar32,iVar27,0x8004,param_2,__s);
      uVar47 = 5;
      local_140 = 6;
      lVar48 = 6;
      local_16c = 5;
    }
    uVar43 = (undefined2)uVar47;
    *(int *)(param_2 + 0x14) = param_3;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = stack0xffffffffffffff7c;
    _local_88 = auVar4 << 0x20;
    local_d8 = (void *)0x0;
    local_e8 = (undefined1  [16])0x0;
    rcVectorBase<int,(rcAllocHint)1>::resize_impl
              ((rcVectorBase<int,(rcAllocHint)1> *)local_e8,0x100,(int *)local_88);
    if (param_3 < iVar27 - param_3) {
      local_150 = iVar15 * param_3;
      iVar13 = iVar15 - param_3;
      local_1b0 = local_d8;
      iVar34 = local_150 + -1 + iVar13;
      iVar32 = param_3;
      local_16c = uVar47;
      do {
        uVar33 = local_e8._0_8_;
        local_140 = local_16c + 1;
        lVar48 = (long)(int)local_140;
        if (lVar48 < (long)local_e8._0_8_) {
LAB_00101f08:
          local_e8._0_8_ = lVar48;
        }
        else if ((long)local_e8._0_8_ < lVar48) {
          if (lVar48 <= (long)local_e8._8_8_) goto LAB_00101f08;
          lVar45 = local_e8._8_8_ * 2;
          if (local_e8._8_8_ * 2 < lVar48) {
            lVar45 = lVar48;
          }
          pvVar17 = (void *)rcAlloc(lVar45 * 4);
          if ((pvVar17 != (void *)0x0) && (0 < (long)(uVar33 << 2))) {
            lVar30 = 0;
            do {
              *(undefined4 *)((long)pvVar17 + lVar30 * 4) =
                   *(undefined4 *)((long)local_1b0 + lVar30 * 4);
              lVar30 = lVar30 + 1;
            } while (lVar30 < (long)(uVar33 << 2) >> 2);
          }
          rcFree(local_1b0);
          local_e8._8_8_ = lVar45;
          local_e8._0_8_ = lVar48;
          local_1b0 = pvVar17;
          local_d8 = pvVar17;
        }
        memset(local_1b0,0,(ulong)(uVar47 & 0xffff) << 2);
        if (param_3 < iVar13) {
          uVar28 = 1;
          lVar45 = *(long *)(param_2 + 0x40);
          iVar40 = local_150 + -1 + param_3;
          puVar37 = (uint *)(lVar45 + ((long)param_3 + (long)local_150) * 4);
          puVar38 = puVar37;
          do {
            uVar14 = *puVar38 & 0xffffff;
            uVar18 = (ulong)uVar14;
            uVar39 = *(byte *)((long)puVar38 + 3) + uVar14;
            if (uVar14 < uVar39) {
              lVar25 = *(long *)(param_2 + 0x58);
              lVar30 = *(long *)(param_2 + 0x48) + uVar18 * 8;
              do {
                if (*(char *)(lVar25 + uVar18) != '\0') {
                  uVar14 = *(uint *)(lVar30 + 4);
                  uVar41 = uVar14 & 0x3f;
                  if (uVar41 == 0x3f) {
LAB_001018a0:
                    puVar21 = (ushort *)((long)pvVar16 + (ulong)uVar28 * 8);
                    *puVar21 = uVar28;
                    puVar21[2] = 0;
                    puVar21[3] = 0;
                    uVar29 = uVar28 + 1;
                    uVar35 = uVar28;
                  }
                  else {
                    lVar42 = (long)(int)((*(uint *)(lVar45 + (long)iVar40 * 4) & 0xffffff) + uVar41)
                    ;
                    uVar35 = __s[lVar42];
                    if ((((short)uVar35 < 0) ||
                        (*(char *)(lVar25 + lVar42) != *(char *)(lVar25 + uVar18))) ||
                       (uVar29 = uVar28, uVar35 == 0)) goto LAB_001018a0;
                  }
                  iVar44 = (int)(uVar14 & 0xffffff) >> 0x12;
                  if (iVar44 != 0x3f) {
                    lVar42 = (long)(int)((*(uint *)(lVar45 + (long)((1 - iVar15) + iVar40) * 4) &
                                         0xffffff) + iVar44);
                    uVar28 = __s[lVar42];
                    if ((0 < (short)uVar28) &&
                       (*(char *)(lVar25 + uVar18) == *(char *)(lVar25 + lVar42))) {
                      uVar2 = *(ushort *)((long)pvVar16 + (ulong)uVar35 * 8 + 6);
                      if ((uVar2 == 0) || (uVar28 == uVar2)) {
                        *(uint *)((long)pvVar16 + (ulong)uVar35 * 8 + 4) =
                             CONCAT22(uVar28,*(short *)((long)pvVar16 + (ulong)uVar35 * 8 + 4) + 1);
                        piVar49 = (int *)((long)local_1b0 + (ulong)uVar28 * 4);
                        *piVar49 = *piVar49 + 1;
                      }
                      else {
                        *(undefined2 *)((long)pvVar16 + (ulong)uVar35 * 8 + 6) = 0xffff;
                      }
                    }
                  }
                  __s[uVar18] = uVar35;
                  uVar28 = uVar29;
                }
                uVar18 = uVar18 + 1;
                lVar30 = lVar30 + 8;
              } while ((int)uVar18 < (int)uVar39);
            }
            iVar40 = iVar40 + 1;
            puVar38 = puVar38 + 1;
          } while (iVar40 != iVar34);
          uVar47 = uVar47 & 0xffff;
          if (1 < uVar28) {
            puVar21 = (ushort *)((long)pvVar16 + (ulong)(uVar28 - 2) * 8 + 0x12);
            puVar20 = (ushort *)((long)pvVar16 + 10);
            uVar14 = uVar47;
            do {
              while ((uVar35 = puVar20[2], 0xfffd < (ushort)(uVar35 - 1) ||
                     (*(uint *)((long)local_1b0 + (ulong)uVar35 * 4) != (uint)puVar20[1]))) {
                puVar19 = puVar20 + 4;
                uVar47 = uVar14 + 1;
                *puVar20 = (ushort)uVar14;
                puVar20 = puVar19;
                uVar14 = uVar47;
                if (puVar21 == puVar19) goto LAB_001019a0;
              }
              *puVar20 = uVar35;
              puVar20 = puVar20 + 4;
              uVar47 = uVar14;
            } while (puVar21 != puVar20);
LAB_001019a0:
            local_16c = uVar47 & 0xffff;
            local_140 = local_16c + 1;
            lVar48 = (long)(int)local_140;
          }
          do {
            uVar39 = *puVar37 & 0xffffff;
            uVar14 = *(byte *)((long)puVar37 + 3) + uVar39;
            if (uVar39 < uVar14) {
              puVar21 = __s + uVar39;
              do {
                uVar35 = *puVar21;
                if ((uVar35 != 0) && (uVar35 < uVar28)) {
                  *puVar21 = *(ushort *)((long)pvVar16 + (ulong)uVar35 * 8 + 2);
                }
                puVar21 = puVar21 + 1;
              } while (__s + (ulong)(uVar14 - uVar39) + (ulong)uVar39 != puVar21);
            }
            puVar37 = puVar37 + 1;
          } while ((uint *)(lVar45 + ((long)local_150 +
                                     (ulong)(uint)(iVar13 - param_3) + (long)param_3) * 4) !=
                   puVar37);
        }
        uVar43 = (undefined2)uVar47;
        iVar32 = iVar32 + 1;
        local_150 = local_150 + iVar15;
        iVar34 = iVar34 + iVar15;
      } while (iVar32 != iVar27 - param_3);
    }
    if ((param_1[9] != (rcContext)0x0) &&
       (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
      (**(code **)(*(long *)param_1 + 0x28))(param_1,0x18);
    }
    iVar34 = 0;
    iVar15 = *(int *)param_2;
    iVar27 = *(int *)(param_2 + 4);
    *(undefined2 *)(param_2 + 0x1a) = uVar43;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (int *)0x0;
    cVar11 = rcVectorBase<rcRegion,(rcAllocHint)1>::reserve
                       ((rcVectorBase<rcRegion,(rcAllocHint)1> *)local_c8,lVar48);
    uVar10 = _LC5;
    if (cVar11 == '\0') {
      rcContext::log(param_1,3,"mergeAndFilterLayerRegions: Out of memory \'regions\' (%d).",
                     local_140);
      cVar11 = '\0';
      lVar48 = local_c8._0_8_;
      piVar49 = local_b8;
      if ((long)local_c8._0_8_ < 1) {
        rcFree(local_b8);
      }
      else {
LAB_0010239b:
        lVar45 = 0;
        piVar24 = piVar49;
        do {
          lVar45 = lVar45 + 1;
          rcFree(*(void **)(piVar24 + 0xe));
          rcFree(*(void **)(piVar24 + 8));
          piVar24 = piVar24 + 0x10;
        } while (lVar45 != lVar48);
        rcFree(piVar49);
        if (cVar11 != '\0') goto LAB_001023de;
      }
      if ((param_1[9] == (rcContext)0x0) ||
         (*(code **)(*(long *)param_1 + 0x30) == rcContext::doStopTimer)) {
        uVar33 = 0;
      }
      else {
        uVar33 = 0;
        (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
      }
    }
    else {
      do {
        auVar4 = _local_88;
        local_78 = (undefined1  [16])0x0;
        local_60 = (undefined1  [16])0x0;
        auVar5._2_10_ = _auStack_82;
        auVar5._0_2_ = (short)iVar34;
        local_88 = (undefined1  [6])(auVar5._0_6_ << 0x20);
        stack0xffffffffffffff83 = auVar4._11_5_;
        auStack_82._0_5_ = 0;
        uStack_7c = uVar10;
        local_68 = 0;
        local_50 = 0;
        rcVectorBase<rcRegion,(rcAllocHint)1>::push_back
                  ((rcVectorBase<rcRegion,(rcAllocHint)1> *)local_c8,(rcRegion *)local_88);
        rcFree((void *)0x0);
        rcFree((void *)0x0);
        bVar50 = iVar34 < (int)local_16c;
        iVar34 = iVar34 + 1;
      } while (bVar50);
      _local_a8 = (undefined1  [16])0x0;
      auVar6._12_4_ = 0;
      auVar6._0_12_ = stack0xffffffffffffff7c;
      _local_88 = auVar6 << 0x20;
      local_98 = (void *)0x0;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl(local_a8,0x20,(int *)local_88);
      piVar49 = local_b8;
      if ((0 < iVar27) && (0 < iVar15)) {
        iVar34 = 0;
        iVar32 = 0;
        do {
          iVar13 = 0;
          local_160 = (long)iVar32 << 2;
          do {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uStack_a0;
            _local_a8 = auVar7 << 0x40;
            uVar14 = *(uint *)(local_160 + *(long *)(param_2 + 0x40)) & 0xffffff;
            uVar47 = *(byte *)(local_160 + *(long *)(param_2 + 0x40) + 3) + uVar14;
            uVar18 = (ulong)uVar14;
            if (uVar14 < uVar47) {
              do {
                while ((uVar28 = __s[uVar18], uVar28 != 0 && (CONCAT22(0,uVar28) < local_140))) {
                  piVar46 = &rcGetDirOffsetY(int)::offset;
                  piVar24 = piVar49 + (ulong)uVar28 * 0x10;
                  puVar21 = (ushort *)(*(long *)(param_2 + 0x48) + uVar18 * 8);
                  uVar35 = *puVar21;
                  local_88._0_4_ = CONCAT22(0,uVar28);
                  *piVar24 = *piVar24 + 1;
                  uVar29 = *(ushort *)(piVar24 + 3);
                  if (uVar35 < *(ushort *)(piVar24 + 3)) {
                    uVar29 = uVar35;
                  }
                  *(ushort *)(piVar24 + 3) = uVar29;
                  uVar29 = *(ushort *)((long)piVar24 + 0xe);
                  if (*(ushort *)((long)piVar24 + 0xe) < uVar35) {
                    uVar29 = uVar35;
                  }
                  *(ushort *)((long)piVar24 + 0xe) = uVar29;
                  rcVectorBase<int,(rcAllocHint)1>::push_back(local_a8,(int *)local_88);
                  iVar40 = 0;
                  piVar22 = &rcGetDirOffsetX(int)::offset;
                  do {
                    uVar14 = (int)(*(uint *)(puVar21 + 2) & 0xffffff) >> ((byte)iVar40 & 0x1f) &
                             0x3f;
                    if (uVar14 != 0x3f) {
                      uVar35 = __s[(int)(uVar14 + (*(uint *)(*(long *)(param_2 + 0x40) +
                                                            (long)((iVar34 + *piVar46) * iVar15 +
                                                                  iVar13 + *piVar22) * 4) & 0xffffff
                                                  ))];
                      uVar14 = CONCAT22(0,uVar35);
                      if (uVar35 != 0) {
                        if ((uVar28 != uVar35) && (uVar14 < local_140)) {
                          if (0 < (int)*(undefined8 *)(piVar24 + 4)) {
                            puVar38 = *(uint **)(piVar24 + 8);
                            puVar37 = puVar38 + (ulong)((int)*(undefined8 *)(piVar24 + 4) - 1) + 1;
                            do {
                              if (uVar14 == *puVar38) goto LAB_00101d41;
                              puVar38 = puVar38 + 1;
                            } while (puVar37 != puVar38);
                          }
                          local_88._0_4_ = uVar14;
                          rcVectorBase<int,(rcAllocHint)1>::push_back
                                    ((rcVectorBase<int,(rcAllocHint)1> *)(piVar24 + 4),
                                     (int *)local_88);
                        }
LAB_00101d41:
                        if ((short)uVar35 < 0) {
                          *(undefined1 *)((long)piVar24 + 10) = 1;
                        }
                      }
                    }
                    iVar40 = iVar40 + 6;
                    piVar22 = piVar22 + 1;
                    piVar46 = piVar46 + 1;
                  } while (iVar40 != 0x18);
                  uVar18 = uVar18 + 1;
                  if ((int)uVar47 <= (int)uVar18) goto LAB_00101d76;
                }
                uVar18 = uVar18 + 1;
              } while ((int)uVar18 < (int)uVar47);
LAB_00101d76:
              iVar40 = SUB164(_local_a8,0);
              if (1 < iVar40) {
                uVar18 = 0;
                do {
                  if ((int)uVar18 + 1 < iVar40) {
                    piVar46 = (int *)((long)local_98 + uVar18 * 4 + 4);
                    piVar24 = (int *)((long)local_98 + uVar18 * 4);
                    piVar22 = (int *)((long)local_98 +
                                     (((iVar40 - 2U) - (int)uVar18) + uVar18) * 4 + 8);
                    do {
                      while( true ) {
                        iVar44 = *piVar24;
                        iVar3 = *piVar46;
                        if (iVar44 != iVar3) break;
LAB_00101e79:
                        piVar46 = piVar46 + 1;
                        if (piVar22 == piVar46) goto LAB_00101e8e;
                      }
                      if (0 < (int)*(undefined8 *)(piVar49 + (long)iVar44 * 0x10 + 10)) {
                        piVar23 = *(int **)(piVar49 + (long)iVar44 * 0x10 + 0xe);
                        piVar1 = piVar23 + (ulong)((int)*(undefined8 *)
                                                         (piVar49 + (long)iVar44 * 0x10 + 10) - 1) +
                                           1;
                        do {
                          if (iVar3 == *piVar23) {
                            iVar26 = (int)*(undefined8 *)(piVar49 + (long)iVar3 * 0x10 + 10);
                            goto joined_r0x00101e4f;
                          }
                          piVar23 = piVar23 + 1;
                        } while (piVar1 != piVar23);
                      }
                      local_88._0_4_ = iVar3;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)
                                 (piVar49 + (long)iVar44 * 0x10 + 10),(int *)local_88);
                      iVar44 = *piVar24;
                      iVar26 = (int)*(undefined8 *)(piVar49 + (long)iVar3 * 0x10 + 10);
joined_r0x00101e4f:
                      if (0 < iVar26) {
                        piVar23 = *(int **)(piVar49 + (long)iVar3 * 0x10 + 0xe);
                        piVar1 = piVar23 + (ulong)(iVar26 - 1) + 1;
                        do {
                          if (*piVar23 == iVar44) goto LAB_00101e79;
                          piVar23 = piVar23 + 1;
                        } while (piVar23 != piVar1);
                      }
                      piVar46 = piVar46 + 1;
                      stack0xffffffffffffff7c = SUB1612(_local_88,4);
                      local_88._0_4_ = iVar44;
                      rcVectorBase<int,(rcAllocHint)1>::push_back
                                ((rcVectorBase<int,(rcAllocHint)1> *)
                                 (piVar49 + (long)iVar3 * 0x10 + 10),(int *)local_88);
                    } while (piVar22 != piVar46);
                  }
LAB_00101e8e:
                  bVar50 = iVar40 - 2U != uVar18;
                  uVar18 = uVar18 + 1;
                } while (bVar50);
              }
            }
            iVar13 = iVar13 + 1;
            local_160 = local_160 + 4;
          } while (iVar15 != iVar13);
          iVar34 = iVar34 + 1;
          iVar32 = iVar32 + iVar15;
        } while (iVar27 != iVar34);
      }
      piVar24 = piVar49 + 1;
      iVar15 = 0;
      do {
        *(short *)piVar24 = 0;
        bVar50 = iVar15 < (int)local_16c;
        piVar24 = piVar24 + 0x10;
        iVar15 = iVar15 + 1;
      } while (bVar50);
      this = (rcVectorBase<int,(rcAllocHint)1> *)(piVar49 + 0x1a);
      local_ec = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_78._8_8_;
      local_78 = auVar9 << 0x40;
      _local_88 = (undefined1  [16])0x0;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl
                ((rcVectorBase<int,(rcAllocHint)1> *)local_88,0x20,&local_ec);
      local_1a8 = 1;
      if (local_140 != 1) {
        iVar15 = 1;
        do {
          while (*(short *)(this + -0x24) != 0) {
            this = this + 0x40;
            bVar50 = (int)local_16c <= iVar15;
            iVar15 = iVar15 + 1;
            if (bVar50) goto LAB_00102244;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = stack0xffffffffffffff80;
          _local_88 = auVar8 << 0x40;
          *(short *)(this + -0x24) = local_1a8;
          local_ec = iVar15;
          rcVectorBase<int,(rcAllocHint)1>::push_back
                    ((rcVectorBase<int,(rcAllocHint)1> *)local_88,&local_ec);
          iVar27 = SUB164(_local_88,0);
          lVar48 = _local_88;
          while (0 < iVar27) {
            iVar27 = *(int *)local_78._0_8_;
            uVar47 = (int)lVar48 - 1;
            if (uVar47 == 0) {
              lVar45 = 0;
              piVar24 = (int *)local_78._0_8_;
              if (lVar48 < 1) {
LAB_001025cc:
                if ((long)stack0xffffffffffffff80 < lVar45) {
                  lVar30 = stack0xffffffffffffff80 * 2;
                  if ((long)(stack0xffffffffffffff80 * 2) < lVar45) {
                    lVar30 = lVar45;
                  }
                  lVar25 = rcAlloc(lVar30 * 4);
                  if ((lVar25 != 0) && (0 < lVar48 * 4)) {
                    lVar42 = 0;
                    do {
                      *(int *)(lVar25 + lVar42 * 4) = piVar24[lVar42];
                      lVar42 = lVar42 + 1;
                    } while (lVar42 < lVar48 * 4 >> 2);
                  }
                  rcFree(piVar24);
                  local_78._0_8_ = lVar25;
                  unique0x10001021 = lVar30;
                }
              }
LAB_0010264c:
              _local_88 = lVar45;
            }
            else {
              lVar45 = (long)(int)uVar47;
              piVar24 = (int *)memmove((void *)local_78._0_8_,(int *)(local_78._0_8_ + 4),
                                       (ulong)uVar47 << 2);
              if (lVar45 < lVar48) goto LAB_0010264c;
              if (lVar48 < lVar45) goto LAB_001025cc;
            }
            if (0 < (int)*(undefined8 *)(piVar49 + (long)iVar27 * 0x10 + 4)) {
              lVar45 = 0;
              lVar48 = (ulong)((int)*(undefined8 *)(piVar49 + (long)iVar27 * 0x10 + 4) - 1) * 4 + 4;
              do {
                while( true ) {
                  iVar34 = *(int *)(*(long *)(piVar49 + (long)iVar27 * 0x10 + 8) + lVar45);
                  piVar24 = piVar49 + (long)iVar34 * 0x10;
                  if ((short)piVar24[1] != 0) break;
                  if (0 < (int)*(undefined8 *)this) {
                    piVar22 = *(int **)(this + 0x10);
                    piVar46 = piVar22 + (ulong)((int)*(undefined8 *)this - 1) + 1;
                    do {
                      if (iVar34 == *piVar22) goto LAB_001020e5;
                      piVar22 = piVar22 + 1;
                    } while (piVar46 != piVar22);
                  }
                  local_ec = iVar34;
                  rcVectorBase<int,(rcAllocHint)1>::push_back
                            ((rcVectorBase<int,(rcAllocHint)1> *)local_88,&local_ec);
                  uVar33 = *(undefined8 *)(piVar24 + 10);
                  lVar30 = 0;
                  *(short *)(piVar24 + 1) = local_1a8;
                  if (0 < (int)uVar33) {
LAB_00102162:
                    do {
                      iVar34 = *(int *)(*(long *)(piVar24 + 0xe) + lVar30 * 4);
                      if (0 < (int)*(undefined8 *)this) {
                        piVar22 = *(int **)(this + 0x10);
                        piVar46 = piVar22 + (ulong)((int)*(undefined8 *)this - 1) + 1;
                        do {
                          if (iVar34 == *piVar22) {
                            lVar30 = lVar30 + 1;
                            if ((int)lVar30 < (int)uVar33) goto LAB_00102162;
                            goto LAB_001021a9;
                          }
                          piVar22 = piVar22 + 1;
                        } while (piVar22 != piVar46);
                      }
                      lVar30 = lVar30 + 1;
                      local_ec = iVar34;
                      rcVectorBase<int,(rcAllocHint)1>::push_back(this,&local_ec);
                      uVar33 = *(undefined8 *)(piVar24 + 10);
                    } while ((int)lVar30 < (int)uVar33);
                  }
LAB_001021a9:
                  uVar28 = *(ushort *)(this + -0x1c);
                  if (*(ushort *)(piVar24 + 3) < *(ushort *)(this + -0x1c)) {
                    uVar28 = *(ushort *)(piVar24 + 3);
                  }
                  *(ushort *)(this + -0x1c) = uVar28;
                  uVar28 = *(ushort *)(this + -0x1a);
                  if (*(ushort *)(this + -0x1a) < *(ushort *)((long)piVar24 + 0xe)) {
                    uVar28 = *(ushort *)((long)piVar24 + 0xe);
                  }
                  *(ushort *)(this + -0x1a) = uVar28;
                  *(int *)(this + -0x28) = *(int *)(this + -0x28) + *piVar24;
                  rVar12 = this[-0x1e];
                  *piVar24 = 0;
                  if (rVar12 == (rcVectorBase<int,(rcAllocHint)1>)0x0) {
                    rVar12 = *(rcVectorBase<int,(rcAllocHint)1> *)((long)piVar24 + 10);
                  }
                  lVar45 = lVar45 + 4;
                  this[-0x1e] = rVar12;
                  if (lVar48 == lVar45) goto LAB_001021fe;
                }
LAB_001020e5:
                lVar45 = lVar45 + 4;
              } while (lVar48 != lVar45);
            }
LAB_001021fe:
            lVar48 = _local_88;
            iVar27 = SUB164(_local_88,0);
          }
          local_1a8 = local_1a8 + 1;
          this = this + 0x40;
          bVar50 = iVar15 < (int)local_16c;
          iVar15 = iVar15 + 1;
        } while (bVar50);
      }
LAB_00102244:
      iVar15 = 0;
      piVar24 = piVar49;
      while( true ) {
        if (((0 < *piVar24) && (*piVar24 < param_4)) && (*(char *)((long)piVar24 + 10) == '\0')) {
          iVar27 = piVar24[1];
          piVar46 = piVar49 + 1;
          iVar34 = 0;
          do {
            if ((short)*piVar46 == (short)iVar27) {
              *(short *)piVar46 = 0;
            }
            piVar46 = piVar46 + 0x10;
            bVar50 = iVar34 < (int)local_16c;
            iVar34 = iVar34 + 1;
          } while (bVar50);
        }
        if ((int)local_16c <= iVar15) break;
        iVar15 = iVar15 + 1;
        piVar24 = piVar24 + 0x10;
      }
      puVar31 = (undefined1 *)((long)piVar49 + 7);
      iVar15 = 0;
      do {
        *puVar31 = 0;
        if (0 < *(short *)(puVar31 + -3)) {
          *puVar31 = 1;
        }
        puVar31 = puVar31 + 0x40;
        bVar50 = iVar15 < (int)local_16c;
        iVar15 = iVar15 + 1;
      } while (bVar50);
      sVar36 = 0;
      iVar15 = 0;
      piVar24 = piVar49;
      while( true ) {
        if (*(char *)((long)piVar24 + 7) != '\0') {
          iVar34 = piVar24[1];
          sVar36 = sVar36 + 1;
          piVar46 = piVar24;
          iVar27 = iVar15;
          if (iVar15 < (int)local_140) {
            do {
              if ((short)iVar34 == (short)piVar46[1]) {
                *(short *)(piVar46 + 1) = sVar36;
                *(undefined1 *)((long)piVar46 + 7) = 0;
              }
              piVar46 = piVar46 + 0x10;
              bVar50 = iVar27 < (int)local_16c;
              iVar27 = iVar27 + 1;
            } while (bVar50);
          }
        }
        if ((int)local_16c <= iVar15) break;
        iVar15 = iVar15 + 1;
        piVar24 = piVar24 + 0x10;
      }
      *(short *)(param_2 + 0x1a) = sVar36;
      iVar15 = *(int *)(param_2 + 8);
      puVar21 = __s;
      if (0 < iVar15) {
        do {
          if (-1 < (short)*puVar21) {
            *puVar21 = *(ushort *)(piVar49 + (ulong)*puVar21 * 0x10 + 1);
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != __s + iVar15);
      }
      rcFree((void *)local_78._0_8_);
      rcFree(local_98);
      lVar48 = local_c8._0_8_;
      if (0 < (long)local_c8._0_8_) goto LAB_0010239b;
      rcFree(piVar49);
LAB_001023de:
      if ((param_1[9] != (rcContext)0x0) &&
         (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
        (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
      }
      iVar15 = *(int *)(param_2 + 8);
      if (0 < iVar15) {
        lVar45 = 0;
        lVar48 = *(long *)(param_2 + 0x48);
        do {
          *(ushort *)(lVar48 + 2 + lVar45 * 8) = __s[lVar45];
          lVar45 = lVar45 + 1;
        } while (lVar45 != iVar15);
      }
      uVar33 = 1;
    }
    rcFree(local_d8);
  }
  rcFree(pvVar16);
LAB_0010245d:
  rcFree(__s);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x14);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar33;
}



/* mergeAndFilterRegions(rcContext*, int, int, unsigned short&, rcCompactHeightfield&, unsigned
   short*, rcIntArray&) [clone .constprop.0] */

char mergeAndFilterRegions
               (rcContext *param_1,int param_2,int param_3,ushort *param_4,
               rcCompactHeightfield *param_5,ushort *param_6,rcIntArray *param_7)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  void *pvVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  void *pvVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  int iVar33;
  long lVar34;
  rcRegion *prVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  ulong uVar39;
  int *piVar40;
  ushort *puVar41;
  undefined8 uVar42;
  ushort uVar43;
  rcRegion *prVar44;
  rcRegion *prVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
  long in_FS_OFFSET;
  bool bVar50;
  rcRegion *local_150;
  ushort local_120;
  uint local_cc;
  undefined1 local_c8 [16];
  rcRegion *local_b8;
  undefined1 local_a8 [16];
  void *local_98;
  undefined1 local_88 [6];
  undefined1 auStack_82 [6];
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  uVar2 = *param_4;
  iVar46 = *(int *)param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar37 = *(int *)(param_5 + 4);
  local_c8 = (undefined1  [16])0x0;
  uVar15 = uVar2 + 1;
  local_b8 = (rcRegion *)0x0;
  cVar13 = rcVectorBase<rcRegion,(rcAllocHint)1>::reserve
                     ((rcVectorBase<rcRegion,(rcAllocHint)1> *)local_c8,(long)(int)uVar15);
  uVar12 = _LC5;
  if (cVar13 == '\0') {
    rcContext::log(param_1,3,"mergeAndFilterRegions: Out of memory \'regions\' (%d).",uVar15);
    local_150 = local_b8;
  }
  else {
    uVar48 = (uint)uVar2;
    uVar32 = 0;
    do {
      auVar8 = _local_88;
      local_78 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
      auVar7._2_10_ = _auStack_82;
      auVar7._0_2_ = (short)uVar32;
      uVar32 = uVar32 + 1;
      local_88 = (undefined1  [6])(auVar7._0_6_ << 0x20);
      stack0xffffffffffffff83 = auVar8._11_5_;
      auStack_82._0_5_ = 0;
      uStack_7c = uVar12;
      local_68 = 0;
      local_50 = 0;
      rcVectorBase<rcRegion,(rcAllocHint)1>::push_back
                ((rcVectorBase<rcRegion,(rcAllocHint)1> *)local_c8,(rcRegion *)local_88);
      rcFree((void *)0x0);
      rcFree((void *)0x0);
      prVar35 = local_b8;
    } while (uVar32 != uVar15);
    local_150 = local_b8;
    if ((0 < iVar37) && (0 < iVar46)) {
      iVar36 = 0;
      iVar27 = 0;
      puVar41 = param_6;
      do {
        lVar34 = (long)iVar27 * 4;
        iVar1 = 0;
        do {
          puVar29 = (uint *)(*(long *)(param_5 + 0x40) + lVar34);
          uVar16 = *puVar29 & 0xffffff;
          uVar32 = *(byte *)((long)puVar29 + 3) + uVar16;
          uVar19 = (ulong)uVar16;
          if (uVar16 < uVar32) {
LAB_00102aa5:
            uVar43 = puVar41[uVar19];
            iVar47 = (int)uVar19;
            if ((uVar43 != 0) && (uVar43 < uVar15)) {
              prVar44 = prVar35 + (ulong)uVar43 * 0x40;
              *(int *)prVar44 = *(int *)prVar44 + 1;
              uVar39 = (ulong)(*puVar29 & 0xffffff);
              if ((*puVar29 & 0xffffff) < uVar32) {
                do {
                  while ((((int)uVar39 == iVar47 || (uVar3 = puVar41[uVar39], uVar3 == 0)) ||
                         (uVar15 <= uVar3))) {
LAB_00102b61:
                    uVar39 = uVar39 + 1;
                    if ((int)uVar32 <= (int)uVar39) goto LAB_00102b7b;
                  }
                  if (uVar43 == uVar3) {
                    prVar44[9] = (rcRegion)0x1;
                  }
                  if (0 < (int)*(undefined8 *)(prVar44 + 0x28)) {
                    puVar18 = *(uint **)(prVar44 + 0x38);
                    puVar22 = puVar18 + (ulong)((int)*(undefined8 *)(prVar44 + 0x28) - 1) + 1;
                    do {
                      if (CONCAT22(0,uVar3) == *puVar18) goto LAB_00102b61;
                      puVar18 = puVar18 + 1;
                    } while (puVar18 != puVar22);
                  }
                  uVar39 = uVar39 + 1;
                  local_88._0_4_ = CONCAT22(0,uVar3);
                  rcVectorBase<int,(rcAllocHint)1>::push_back
                            ((rcVectorBase<int,(rcAllocHint)1> *)(prVar44 + 0x28),(int *)local_88);
                } while ((int)uVar39 < (int)uVar32);
              }
LAB_00102b7b:
              if (*(int *)(prVar44 + 0x10) < 1) {
                uVar39 = uVar19 & 0xffffffff;
                uVar16 = 0;
                prVar44[6] = *(rcRegion *)(*(long *)(param_5 + 0x58) + uVar19);
                do {
                  cVar14 = isSolidEdge(param_5,puVar41,iVar1,iVar36,iVar47,uVar16);
                  if (cVar14 != '\0') {
                    uVar30 = (int)(*(uint *)(*(long *)(param_5 + 0x48) + 4 + uVar19 * 8) & 0xffffff)
                             >> ((char)uVar16 * '\x06' & 0x1fU) & 0x3f;
                    if (uVar30 == 0x3f) {
                      uVar30 = 0;
                      local_120 = 0;
                    }
                    else {
                      local_120 = puVar41[(int)(uVar30 + (*(uint *)(*(long *)(param_5 + 0x40) +
                                                                   (long)((iVar36 + (&
                                                  rcGetDirOffsetY(int)::offset)[(int)uVar16]) *
                                                  *(int *)param_5 +
                                                  iVar1 + (&rcGetDirOffsetX(int)::offset)
                                                          [(int)uVar16]) * 4) & 0xffffff))];
                      uVar30 = (uint)local_120;
                    }
                    local_88._0_4_ = uVar30;
                    rcVectorBase<int,(rcAllocHint)1>::push_back
                              ((rcVectorBase<int,(rcAllocHint)1> *)(prVar44 + 0x10),(int *)local_88)
                    ;
                    iVar38 = 40000;
                    uVar30 = uVar16;
                    iVar49 = iVar1;
                    iVar33 = iVar36;
                    goto LAB_00103570;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 != 4);
              }
            }
            goto joined_r0x00102a9f;
          }
LAB_00102be5:
          iVar1 = iVar1 + 1;
          lVar34 = lVar34 + 4;
        } while (iVar46 != iVar1);
        iVar36 = iVar36 + 1;
        iVar27 = iVar27 + iVar46;
      } while (iVar37 != iVar36);
    }
    local_a8 = (undefined1  [16])0x0;
    auVar8._12_4_ = 0;
    auVar8._0_12_ = stack0xffffffffffffff7c;
    _local_88 = auVar8 << 0x20;
    local_98 = (void *)0x0;
    rcVectorBase<int,(rcAllocHint)1>::resize_impl
              ((rcVectorBase<int,(rcAllocHint)1> *)local_a8,0x20,(int *)local_88);
    local_cc = 0;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_78._8_8_;
    local_78 = auVar9 << 0x40;
    _local_88 = (undefined1  [16])0x0;
    rcVectorBase<int,(rcAllocHint)1>::resize_impl
              ((rcVectorBase<int,(rcAllocHint)1> *)local_88,0x20,(int *)&local_cc);
    uVar32 = 0;
    prVar44 = prVar35;
LAB_00102cd3:
    do {
      if (((0 < *(short *)(prVar44 + 4)) && (*(int *)prVar44 != 0)) && (prVar44[8] == (rcRegion)0x0)
         ) {
        prVar44[8] = (rcRegion)0x1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_a8._8_8_;
        local_a8 = auVar10 << 0x40;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = stack0xffffffffffffff80;
        _local_88 = auVar11 << 0x40;
        local_cc = uVar32;
        rcVectorBase<int,(rcAllocHint)1>::push_back
                  ((rcVectorBase<int,(rcAllocHint)1> *)local_a8,(int *)&local_cc);
        if (local_a8._0_4_ != 0) {
          iVar46 = 0;
          cVar14 = '\0';
          lVar34 = local_a8._0_8_;
          do {
            local_cc = *(uint *)((long)local_98 + lVar34 * 4 + -4);
            local_a8._0_8_ = lVar34 + -1;
            prVar45 = prVar35 + (long)(int)local_cc * 0x40;
            iVar46 = iVar46 + *(int *)prVar45;
            rcVectorBase<int,(rcAllocHint)1>::push_back
                      ((rcVectorBase<int,(rcAllocHint)1> *)local_88,(int *)&local_cc);
            uVar42 = *(undefined8 *)(prVar45 + 0x10);
            lVar34 = lVar34 + -1;
            if (0 < (int)uVar42) {
              lVar34 = 0;
              do {
                while (uVar19 = (ulong)*(int *)(*(long *)(prVar45 + 0x20) + lVar34 * 4),
                      (uVar19 & 0x8000) != 0) {
                  lVar34 = lVar34 + 1;
                  cVar14 = cVar13;
                  if ((int)uVar42 <= (int)lVar34) goto LAB_00102e1a;
                }
                if ((prVar35[uVar19 * 0x40 + 8] == (rcRegion)0x0) &&
                   (0 < (short)*(ushort *)(prVar35 + uVar19 * 0x40 + 4))) {
                  local_cc = (uint)*(ushort *)(prVar35 + uVar19 * 0x40 + 4);
                  rcVectorBase<int,(rcAllocHint)1>::push_back
                            ((rcVectorBase<int,(rcAllocHint)1> *)local_a8,(int *)&local_cc);
                  prVar35[uVar19 * 0x40 + 8] = (rcRegion)0x1;
                  uVar42 = *(undefined8 *)(prVar45 + 0x10);
                }
                lVar34 = lVar34 + 1;
              } while ((int)lVar34 < (int)uVar42);
LAB_00102e1a:
              lVar34 = local_a8._0_8_;
            }
          } while ((int)lVar34 != 0);
          if (((iVar46 < param_2) && (cVar14 != '\x01')) && (0 < SUB164(_local_88,0))) {
            piVar31 = (int *)(local_78._0_8_ + 4);
            piVar25 = (int *)local_78._0_8_;
            while( true ) {
              piVar40 = piVar31;
              *(undefined4 *)(prVar35 + (long)*piVar25 * 0x40) = 0;
              *(undefined2 *)(prVar35 + (long)*piVar25 * 0x40 + 4) = 0;
              if ((int *)(local_78._0_8_ + 4) + (SUB164(_local_88,0) - 1) == piVar40) break;
              piVar31 = piVar40 + 1;
              piVar25 = piVar40;
            }
            uVar32 = uVar32 + 1;
            prVar44 = prVar44 + 0x40;
            if (uVar32 == uVar15) break;
            goto LAB_00102cd3;
          }
        }
      }
      uVar32 = uVar32 + 1;
      prVar44 = prVar44 + 0x40;
    } while (uVar32 != uVar15);
    lVar34 = (ulong)uVar2 * 0x40;
    do {
      iVar46 = 0;
      prVar44 = prVar35;
      do {
        uVar43 = *(ushort *)(prVar44 + 4);
        if (((0 < (short)uVar43) && (prVar44[9] == (rcRegion)0x0)) && (*(int *)prVar44 != 0)) {
          iVar37 = (int)*(undefined8 *)(prVar44 + 0x10);
          if (param_3 < *(int *)prVar44) {
            if (0 < iVar37) {
              piVar31 = *(int **)(prVar44 + 0x20);
              uVar19 = (ulong)(iVar37 - 1);
              piVar25 = piVar31;
              do {
                if (*piVar25 == 0) goto LAB_001033c0;
                piVar25 = piVar25 + 1;
              } while (piVar31 + uVar19 + 1 != piVar25);
              goto LAB_00102f55;
            }
          }
          else if (0 < iVar37) {
            piVar31 = *(int **)(prVar44 + 0x20);
            uVar19 = (ulong)(iVar37 - 1);
LAB_00102f55:
            iVar37 = 0xfffffff;
            piVar25 = piVar31;
            piVar40 = piVar31 + 1;
            uVar3 = uVar43;
            while( true ) {
              if (((long)*piVar25 & 0x8000U) == 0) {
                prVar45 = prVar35 + (long)*piVar25 * 0x40;
                uVar4 = *(ushort *)(prVar45 + 4);
                if (((0 < (short)uVar4) && (prVar45[9] == (rcRegion)0x0)) &&
                   ((iVar36 = *(int *)prVar45, iVar36 < iVar37 &&
                    ((cVar14 = canMergeWithRegion(prVar44,(rcRegion *)(ulong)uVar4), cVar14 != '\0'
                     && (cVar14 = canMergeWithRegion(prVar45,(rcRegion *)(ulong)uVar43),
                        cVar14 != '\0')))))) {
                  iVar37 = iVar36;
                  uVar3 = uVar4;
                }
              }
              if (piVar31 + 1 + uVar19 == piVar40) break;
              piVar25 = piVar40;
              piVar40 = piVar40 + 1;
            }
            uVar32 = (uint)uVar43;
            if (uVar43 != uVar3) {
              prVar45 = prVar35 + (ulong)uVar3 * 0x40;
              uVar4 = *(ushort *)(prVar45 + 4);
              iVar37 = (int)*(undefined8 *)(prVar45 + 0x10);
              lVar20 = (long)iVar37;
              if ((lVar20 < 0) || (lVar20 == 0)) {
                pvVar21 = (void *)0x0;
              }
              else {
                pvVar21 = (void *)rcAlloc(lVar20 * 4,1);
                rcFree((void *)0x0);
                uVar42 = *(undefined8 *)(prVar45 + 0x10);
                if (0 < (int)uVar42) {
                  lVar20 = *(long *)(prVar45 + 0x20);
                  uVar19 = 0;
                  do {
                    *(undefined4 *)((long)pvVar21 + uVar19 * 4) =
                         *(undefined4 *)(lVar20 + uVar19 * 4);
                    bVar50 = (int)uVar42 - 1 != uVar19;
                    uVar19 = uVar19 + 1;
                  } while (bVar50);
                }
                uVar19 = 0;
                do {
                  if (*(uint *)((long)pvVar21 + uVar19 * 4) == uVar32) {
                    if (0 < (int)*(undefined8 *)(prVar44 + 0x10)) {
                      uVar39 = 0;
                      goto LAB_001030f8;
                    }
                    break;
                  }
                  bVar50 = iVar37 - 1 != uVar19;
                  uVar19 = uVar19 + 1;
                } while (bVar50);
              }
LAB_001037db:
              rcFree(pvVar21);
            }
          }
        }
LAB_001033c0:
        prVar44 = prVar44 + 0x40;
      } while (prVar35 + lVar34 + 0x40 != prVar44);
    } while (0 < iVar46);
    prVar44 = prVar35 + 7;
    do {
      *prVar44 = (rcRegion)0x0;
      if (0 < *(short *)(prVar44 + -3)) {
        *prVar44 = (rcRegion)0x1;
      }
      prVar44 = prVar44 + 0x40;
    } while (prVar35 + lVar34 + 0x47 != prVar44);
    uVar43 = 0;
    prVar44 = prVar35;
    uVar19 = 0;
    do {
      if (prVar44[7] != (rcRegion)0x0) {
        sVar5 = *(short *)(prVar44 + 4);
        uVar43 = uVar43 + 1;
        if ((int)uVar19 < (int)uVar15) {
          prVar45 = prVar44;
          do {
            if (sVar5 == *(short *)(prVar45 + 4)) {
              *(ushort *)(prVar45 + 4) = uVar43;
              prVar45[7] = (rcRegion)0x0;
            }
            prVar45 = prVar45 + 0x40;
          } while (prVar45 != prVar35 + (uVar48 + uVar19) * 0x40 + 0x40);
        }
      }
      prVar44 = prVar44 + 0x40;
      uVar48 = uVar48 - 1;
      bVar50 = uVar2 != uVar19;
      uVar19 = uVar19 + 1;
    } while (bVar50);
    *param_4 = uVar43;
    if (0 < *(int *)(param_5 + 8)) {
      puVar41 = param_6 + *(int *)(param_5 + 8);
      do {
        if (-1 < (short)*param_6) {
          *param_6 = *(ushort *)(prVar35 + (ulong)*param_6 * 0x40 + 4);
        }
        param_6 = param_6 + 1;
      } while (param_6 != puVar41);
    }
    prVar44 = prVar35 + 4;
    do {
      while (prVar44[5] != (rcRegion)0x0) {
        uVar2 = *(ushort *)prVar44;
        prVar44 = prVar44 + 0x40;
        local_cc = (uint)uVar2;
        rcVectorBase<int,(rcAllocHint)1>::push_back
                  ((rcVectorBase<int,(rcAllocHint)1> *)param_7,(int *)&local_cc);
        if (prVar44 == prVar35 + lVar34 + 0x44) goto LAB_001039e5;
      }
      prVar44 = prVar44 + 0x40;
    } while (prVar44 != prVar35 + lVar34 + 0x44);
LAB_001039e5:
    rcFree((void *)local_78._0_8_);
    rcFree(local_98);
  }
  uVar42 = local_c8._0_8_;
  lVar34 = 0;
  prVar35 = local_150;
  if (0 < (long)local_c8._0_8_) {
    do {
      lVar34 = lVar34 + 1;
      rcFree(*(void **)(prVar35 + 0x38));
      rcFree(*(void **)(prVar35 + 0x20));
      prVar35 = prVar35 + 0x40;
    } while (uVar42 != lVar34);
  }
  rcFree(local_150);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    lVar20 = *(long *)(param_5 + 0x48) + (long)(int)uVar39 * 8;
    cVar14 = isSolidEdge(param_5,puVar41,iVar49,iVar33,(int)uVar39,uVar30);
    uVar17 = (int)(*(uint *)(lVar20 + 4) & 0xffffff) >> ((char)uVar30 * '\x06' & 0x1fU) & 0x3f;
    if (cVar14 == '\0') {
      iVar49 = iVar49 + (&rcGetDirOffsetX(int)::offset)[(int)uVar30];
      iVar33 = iVar33 + (&rcGetDirOffsetY(int)::offset)[(int)uVar30];
      if (uVar17 == 0x3f) goto joined_r0x00102a9f;
      uVar30 = uVar30 + 3;
      uVar39 = (ulong)((*(uint *)(*(long *)(param_5 + 0x40) +
                                 (long)(*(int *)param_5 * iVar33 + iVar49) * 4) & 0xffffff) + uVar17
                      );
    }
    else {
      uVar28 = 0;
      if (uVar17 != 0x3f) {
        uVar28 = (uint)puVar41[(int)(uVar17 + (*(uint *)(*(long *)(param_5 + 0x40) +
                                                        (long)(((&rcGetDirOffsetY(int)::offset)
                                                                [(int)uVar30] + iVar33) *
                                                               *(int *)param_5 +
                                                              (&rcGetDirOffsetX(int)::offset)
                                                              [(int)uVar30] + iVar49) * 4) &
                                              0xffffff))];
      }
      if (local_120 != (ushort)uVar28) {
        local_88._0_4_ = uVar28;
        rcVectorBase<int,(rcAllocHint)1>::push_back
                  ((rcVectorBase<int,(rcAllocHint)1> *)(prVar44 + 0x10),(int *)local_88);
      }
      uVar30 = uVar30 + 1;
      local_120 = (ushort)uVar28;
    }
    uVar30 = uVar30 & 3;
    if (((int)uVar39 == iVar47) && (uVar16 == uVar30)) break;
LAB_00103570:
    iVar38 = iVar38 + -1;
    if (iVar38 == 0) break;
  }
  iVar38 = 0;
  lVar24 = 0;
  lVar20 = *(long *)(prVar44 + 0x10);
  if (1 < (int)lVar20) {
    do {
      iVar33 = (int)lVar20;
      lVar24 = lVar24 << 2;
      iVar49 = iVar38;
      do {
        iVar38 = iVar49;
        if (iVar33 <= iVar38) goto joined_r0x00102a9f;
        lVar26 = *(long *)(prVar44 + 0x20);
        piVar31 = (int *)(lVar26 + lVar24);
        lVar24 = lVar24 + 4;
        iVar49 = iVar38 + 1;
      } while (*piVar31 != *(int *)(lVar26 + (long)((iVar38 + 1) % iVar33) * 4));
      if (iVar38 < iVar33 + -1) {
        memmove((void *)(lVar26 + (long)iVar38 * 4),(void *)(lVar26 + 4 + (long)iVar38 * 4),
                (ulong)(uint)((iVar33 + -2) - iVar38) * 4 + 4);
      }
      lVar24 = (long)iVar38;
      lVar20 = lVar20 + -1;
      *(long *)(prVar44 + 0x10) = lVar20;
    } while( true );
  }
joined_r0x00102a9f:
  uVar19 = uVar19 + 1;
  if ((int)uVar32 <= iVar47 + 1) goto LAB_00102be5;
  goto LAB_00102aa5;
LAB_001030f8:
  if (*(uint *)(*(long *)(prVar44 + 0x20) + uVar39 * 4) != (uint)uVar4) goto LAB_001030e8;
  iVar36 = (int)uVar19 + 1;
  *(undefined8 *)(prVar45 + 0x10) = 0;
  if (iVar37 != 1) {
    do {
      iVar27 = iVar36 + 1;
      local_cc = *(uint *)((long)pvVar21 + (long)(iVar36 % iVar37) * 4);
      rcVectorBase<int,(rcAllocHint)1>::push_back
                ((rcVectorBase<int,(rcAllocHint)1> *)(prVar45 + 0x10),(int *)&local_cc);
      iVar36 = iVar27;
    } while ((int)uVar19 + iVar37 != iVar27);
  }
  iVar37 = (int)uVar39 + 1;
  iVar36 = (int)*(undefined8 *)(prVar44 + 0x10);
  if (1 < iVar36) {
    do {
      iVar27 = iVar37 + 1;
      local_cc = *(uint *)(*(long *)(prVar44 + 0x20) + (long)(iVar37 % iVar36) * 4);
      rcVectorBase<int,(rcAllocHint)1>::push_back
                ((rcVectorBase<int,(rcAllocHint)1> *)(prVar45 + 0x10),(int *)&local_cc);
      iVar37 = iVar27;
    } while ((int)uVar39 + iVar36 != iVar27);
  }
  lVar20 = 0;
  removeAdjacentNeighbours(prVar45);
  uVar42 = *(undefined8 *)(prVar44 + 0x28);
  if (0 < (int)uVar42) {
LAB_00103270:
    do {
      uVar16 = *(uint *)(*(long *)(prVar44 + 0x38) + lVar20 * 4);
      if (0 < (int)*(undefined8 *)(prVar45 + 0x28)) {
        puVar22 = *(uint **)(prVar45 + 0x38);
        puVar29 = puVar22 + (ulong)((int)*(undefined8 *)(prVar45 + 0x28) - 1) + 1;
        do {
          if (uVar16 == *puVar22) {
            lVar20 = lVar20 + 1;
            if ((int)uVar42 <= (int)lVar20) goto LAB_001032bf;
            goto LAB_00103270;
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 != puVar29);
      }
      lVar20 = lVar20 + 1;
      local_cc = uVar16;
      rcVectorBase<int,(rcAllocHint)1>::push_back
                ((rcVectorBase<int,(rcAllocHint)1> *)(prVar45 + 0x28),(int *)&local_cc);
      uVar42 = *(undefined8 *)(prVar44 + 0x28);
    } while ((int)lVar20 < (int)uVar42);
  }
LAB_001032bf:
  *(int *)prVar45 = *(int *)prVar45 + *(int *)prVar44;
  *(undefined4 *)prVar44 = 0;
  prVar45 = prVar35;
  if (*(long *)(prVar44 + 0x10) < 1) {
    if (*(long *)(prVar44 + 0x10) == 0) {
      rcFree(pvVar21);
    }
    else {
      if (-1 < *(long *)(prVar44 + 0x18)) goto LAB_001032df;
      lVar20 = rcAlloc(0,1);
      pvVar6 = *(void **)(prVar44 + 0x20);
      if ((lVar20 != 0) && (lVar24 = *(long *)(prVar44 + 0x10), 0 < lVar24 << 2)) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar20 + lVar26 * 4) = *(undefined4 *)((long)pvVar6 + lVar26 * 4);
          lVar26 = lVar26 + 1;
        } while (lVar26 < (lVar24 << 2) >> 2);
      }
      rcFree(pvVar6);
      *(long *)(prVar44 + 0x20) = lVar20;
      *(undefined1 (*) [16])(prVar44 + 0x10) = (undefined1  [16])0x0;
      rcFree(pvVar21);
    }
  }
  else {
LAB_001032df:
    *(undefined8 *)(prVar44 + 0x10) = 0;
    rcFree(pvVar21);
  }
  do {
    if (0 < (short)*(ushort *)(prVar45 + 4)) {
      if (uVar43 == *(ushort *)(prVar45 + 4)) {
        iVar36 = (int)*(undefined8 *)(prVar45 + 0x28);
        *(ushort *)(prVar45 + 4) = uVar3;
        iVar37 = (int)*(undefined8 *)(prVar45 + 0x10);
        if (iVar37 < 1) goto LAB_00103804;
LAB_0010333d:
        cVar14 = '\0';
        puVar29 = *(uint **)(prVar45 + 0x20) + 1;
        puVar22 = puVar29;
        puVar18 = *(uint **)(prVar45 + 0x20);
        while( true ) {
          puVar23 = puVar22;
          if (*puVar18 == uVar32) {
            *puVar18 = (uint)uVar3;
            cVar14 = cVar13;
          }
          if (puVar29 + (iVar37 - 1) == puVar23) break;
          puVar22 = puVar23 + 1;
          puVar18 = puVar23;
        }
        if (0 < iVar36) goto LAB_0010336b;
      }
      else {
        iVar36 = (int)*(undefined8 *)(prVar45 + 0x28);
        iVar37 = (int)*(undefined8 *)(prVar45 + 0x10);
        if (0 < iVar37) goto LAB_0010333d;
LAB_00103804:
        cVar14 = '\0';
        if (iVar36 < 1) goto LAB_001033a1;
LAB_0010336b:
        lVar20 = *(long *)(prVar45 + 0x38);
        lVar24 = 0;
        do {
          if (*(uint *)(lVar20 + lVar24 * 4) == uVar32) {
            *(uint *)(lVar20 + lVar24 * 4) = (uint)uVar3;
          }
          lVar24 = lVar24 + 1;
        } while ((int)lVar24 < iVar36);
      }
      if (cVar14 != '\0') {
        removeAdjacentNeighbours(prVar45);
      }
    }
LAB_001033a1:
    prVar45 = prVar45 + 0x40;
  } while (prVar35 + lVar34 + 0x40 != prVar45);
  iVar46 = iVar46 + 1;
  goto LAB_001033c0;
LAB_001030e8:
  bVar50 = (int)*(undefined8 *)(prVar44 + 0x10) - 1 == uVar39;
  uVar39 = uVar39 + 1;
  if (bVar50) goto LAB_001037db;
  goto LAB_001030f8;
}



/* rcBuildRegions(rcContext*, rcCompactHeightfield&, int, int, int) */

undefined4
rcBuildRegions(rcContext *param_1,rcCompactHeightfield *param_2,int param_3,int param_4,int param_5)

{
  ushort *__s;
  LevelStackEntry *pLVar1;
  ulong *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  undefined4 uVar11;
  ushort *__s_00;
  rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> *prVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> *prVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> *prVar25;
  undefined8 *puVar26;
  byte bVar27;
  long lVar28;
  int *piVar29;
  int *piVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined8 uStack_200;
  rcIntArray *local_1d8;
  ushort local_192;
  rcTempVector *local_180;
  ushort local_160;
  uint local_15c;
  undefined1 local_148 [16];
  void *local_138;
  undefined1 local_128 [16];
  void *local_118;
  long local_110;
  rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> local_108 [16];
  undefined8 local_f8 [19];
  rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> local_60 [24];
  rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x14);
  }
  iVar34 = *(int *)param_2;
  iVar5 = *(int *)(param_2 + 4);
  __s_00 = (ushort *)rcAlloc((long)*(int *)(param_2 + 8) << 2,1);
  if (__s_00 == (ushort *)0x0) {
    uVar11 = 0;
    rcContext::log(param_1,3,"rcBuildRegions: Out of memory \'tmp\' (%d).",
                   *(int *)(param_2 + 8) << 2);
    goto LAB_0010447c;
  }
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x15);
  }
  prVar12 = local_108;
  do {
    *(undefined8 *)&prVar12[0x10].field_0x0 = 0;
    prVar16 = prVar12 + 0x18;
    *(undefined1 (*) [16])prVar12 = (undefined1  [16])0x0;
    prVar12 = prVar16;
    prVar25 = local_108;
  } while (local_48 != prVar16);
  do {
    if ((*(long *)(prVar25 + 8) < 0x100) && (lVar13 = rcAlloc(0xc00,1), lVar13 != 0)) {
      pvVar15 = *(void **)&prVar25[0x10].field_0x0;
      lVar21 = 0;
      lVar18 = *(long *)&prVar25->field_0x0 * 0xc;
      lVar28 = (lVar18 >> 2) * -0x5555555555555555;
      lVar14 = 0;
      if (0 < lVar18) {
        do {
          lVar21 = lVar21 + 1;
          *(undefined8 *)(lVar13 + lVar14) = *(undefined8 *)((long)pvVar15 + lVar14);
          *(undefined4 *)(lVar13 + 8 + lVar14) = *(undefined4 *)((long)pvVar15 + lVar14 + 8);
          lVar14 = lVar14 + 0xc;
        } while (lVar28 - lVar21 != 0 && lVar21 <= lVar28);
      }
      rcFree(pvVar15);
      *(long *)&prVar25[0x10].field_0x0 = lVar13;
      *(undefined8 *)(prVar25 + 8) = 0x100;
    }
    prVar25 = prVar25 + 0x18;
  } while (local_48 != prVar25);
  local_138 = (void *)0x0;
  local_148 = (undefined1  [16])0x0;
  pvVar15 = (void *)rcAlloc();
  if (pvVar15 != (void *)0x0) {
    rcFree((void *)0x0);
    local_148._8_8_ = 0x100;
    local_138 = pvVar15;
  }
  __s = __s_00 + *(int *)(param_2 + 8);
  memset(__s_00,0,(long)*(int *)(param_2 + 8) * 2);
  uStack_200 = 0x103bf2;
  memset(__s,0,(long)*(int *)(param_2 + 8) * 2);
  local_160 = *(short *)(param_2 + 0x18) + 1U & 0xfffe;
  local_192 = 1;
  if (0 < param_3) {
    iVar17 = param_3;
    if (iVar34 <= param_3) {
      iVar17 = iVar34;
    }
    iVar22 = param_3;
    if (iVar5 <= param_3) {
      iVar22 = iVar5;
    }
    paintRectRegion(0,iVar17,0,iVar5,0x8001,param_2,__s_00);
    paintRectRegion(iVar34 - iVar17,iVar34,0,iVar5,0x8002,param_2,__s_00);
    paintRectRegion(0,iVar34,0,iVar22,0x8003,param_2,__s_00);
    paintRectRegion(0,iVar34,iVar5 - iVar22,iVar5,0x8004,param_2,__s_00);
    local_192 = 5;
  }
  *(int *)(param_2 + 0x14) = param_3;
  if (local_160 != 0) {
    local_15c = 0xffffffff;
    do {
      uVar9 = 2;
      if (1 < local_160) {
        uVar9 = local_160;
      }
      local_160 = uVar9 - 2;
      uVar32 = (ulong)(local_15c + 1 & 7);
      local_15c = local_15c + 1 & 7;
      prVar12 = local_108 + uVar32 * 0x18;
      if (local_15c == 0) {
        iVar34 = *(int *)param_2;
        iVar5 = *(int *)(param_2 + 4);
        prVar16 = local_108;
        do {
          *(undefined8 *)&prVar16->field_0x0 = 0;
          prVar25 = prVar16 + 0x30;
          *(undefined8 *)(prVar16 + 0x18) = 0;
          prVar16 = prVar25;
        } while (prVar25 != local_48);
        if (0 < iVar5) {
          iVar17 = 0;
          iVar22 = 0;
          if (0 < iVar34) {
            do {
              iVar23 = 0;
              lVar13 = (long)iVar22 << 2;
              do {
                uVar20 = *(uint *)(*(long *)(param_2 + 0x40) + lVar13) & 0xffffff;
                uVar24 = *(byte *)(*(long *)(param_2 + 0x40) + lVar13 + 3) + uVar20;
                uVar35 = (ulong)uVar20;
                if (uVar20 < uVar24) {
                  do {
                    auVar7 = local_128;
                    if (((*(char *)(*(long *)(param_2 + 0x58) + uVar35) != '\0') &&
                        (__s_00[uVar35] == 0)) &&
                       (iVar10 = ((int)(uint)local_160 >> 1) -
                                 ((int)(uint)*(ushort *)(*(long *)(param_2 + 0x50) + uVar35 * 2) >>
                                 1), iVar10 < 8)) {
                      if (iVar10 < 0) {
                        iVar10 = 0;
                      }
                      local_128._4_4_ = iVar17;
                      local_128._0_4_ = iVar23;
                      local_128._12_4_ = auVar7._12_4_;
                      local_128._8_4_ = (int)uVar35;
                      uStack_200 = 0x103e6a;
                      rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1>::push_back
                                (local_108 + (long)iVar10 * 0x18,(LevelStackEntry *)local_128);
                    }
                    uVar35 = uVar35 + 1;
                  } while ((int)uVar35 < (int)uVar24);
                }
                iVar23 = iVar23 + 1;
                lVar13 = lVar13 + 4;
              } while (iVar34 != iVar23);
              iVar22 = iVar22 + iVar34;
              iVar17 = iVar17 + 1;
            } while (iVar17 != iVar5);
          }
        }
      }
      else if (0 < *(long *)(local_128 + uVar32 * 0x18 + 8)) {
        lVar13 = 0;
        do {
          pLVar1 = (LevelStackEntry *)((&local_110)[uVar32 * 3] + lVar13 * 0xc);
          iVar34 = *(int *)(pLVar1 + 8);
          if ((-1 < iVar34) && (__s_00[iVar34] == 0)) {
            uStack_200 = 0x1045b4;
            rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1>::push_back
                      (prVar12,pLVar1);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(long *)(local_128 + uVar32 * 0x18 + 8));
      }
      if ((param_1[9] != (rcContext)0x0) &&
         (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
        uStack_200 = 0x1045d6;
        (**(code **)(*(long *)param_1 + 0x28))(param_1,0x16);
      }
      expandRegions(8,local_160,param_2,__s_00,__s,(rcTempVector *)prVar12,false);
      if (param_1[9] == (rcContext)0x0) {
LAB_0010454e:
        lVar14 = *(long *)(local_108 + uVar32 * 0x18);
        if (0 < lVar14) goto LAB_00103f65;
      }
      else {
        lVar13 = *(long *)param_1;
        if (*(code **)(lVar13 + 0x30) != rcContext::doStopTimer) {
          uStack_200 = 0x10461f;
          (**(code **)(lVar13 + 0x30))(param_1);
          if (param_1[9] == (rcContext)0x0) goto LAB_0010454e;
          lVar13 = *(long *)param_1;
        }
        if (*(code **)(lVar13 + 0x28) == rcContext::doStartTimer) {
          lVar14 = *(long *)(local_108 + uVar32 * 0x18);
          if (0 < lVar14) {
LAB_00103f65:
            lVar13 = 0;
            puVar26 = (undefined8 *)local_f8[uVar32 * 3];
            uVar9 = 2;
            if (1 < local_160) {
              uVar9 = local_160;
            }
            do {
              while( true ) {
                iVar34 = *(int *)(puVar26 + 1);
                if (-1 < iVar34) break;
LAB_00103f98:
                lVar13 = lVar13 + 1;
                puVar26 = (undefined8 *)((long)puVar26 + 0xc);
                if (lVar14 <= lVar13) goto LAB_00104309;
              }
              lVar18 = (long)iVar34;
              if (__s_00[lVar18] != 0) goto LAB_00103f98;
              iVar5 = *(int *)param_2;
              local_128._8_4_ = iVar34;
              local_128._0_8_ = *puVar26;
              cVar3 = *(char *)(*(long *)(param_2 + 0x58) + lVar18);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = local_148._8_8_;
              local_148 = auVar7 << 0x40;
              uStack_200 = 0x104004;
              rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1>::push_back
                        ((rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1> *)
                         local_148,(LevelStackEntry *)local_128);
              __s_00[lVar18] = local_192;
              __s[lVar18] = 0;
              if ((long)local_148._0_8_ < 1) goto LAB_00103f98;
              iVar34 = 0;
              lVar18 = local_148._0_8_;
              do {
                bVar27 = 0;
                lVar21 = lVar18 + -1;
                puVar2 = (ulong *)((long)local_138 + lVar18 * 0xc + -0xc);
                local_148._0_8_ = lVar21;
                piVar30 = &rcGetDirOffsetY(int)::offset;
                uVar24 = 1;
                lVar28 = (long)(int)puVar2[1];
                uVar32 = *puVar2;
                auVar37._8_8_ = 0;
                auVar37._0_8_ = uVar32;
                lVar18 = *(long *)(param_2 + 0x48) + lVar28 * 8;
                uVar20 = *(uint *)(lVar18 + 4) & 0xffffff;
                piVar29 = &rcGetDirOffsetX(int)::offset;
                do {
                  uVar31 = (int)uVar20 >> (bVar27 & 0x1f) & 0x3f;
                  if (uVar31 != 0x3f) {
                    iVar17 = (int)(uVar32 >> 0x20) + *piVar30;
                    iVar22 = (int)uVar32 + *piVar29;
                    lVar19 = (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                   (long)(iVar5 * iVar17 + iVar22) * 4) & 0xffffff)
                                        + uVar31);
                    if (cVar3 == *(char *)(*(long *)(param_2 + 0x58) + lVar19)) {
                      uVar4 = __s_00[lVar19];
                      if (-1 < (short)uVar4) {
                        if ((uVar4 == 0) || (uVar4 == local_192)) {
                          uVar33 = uVar24 & 3;
                          uVar31 = (int)(*(uint *)(*(long *)(param_2 + 0x48) + 4 + lVar19 * 8) &
                                        0xffffff) >> (char)uVar33 * '\x06' & 0x3f;
                          if ((uVar31 == 0x3f) ||
                             (((lVar19 = (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                               (long)((iVar17 + (&
                                                  rcGetDirOffsetY(int)::offset)[uVar33]) * iVar5 +
                                                  iVar22 + (&rcGetDirOffsetX(int)::offset)[uVar33])
                                                  * 4) & 0xffffff) + uVar31),
                               cVar3 != *(char *)(*(long *)(param_2 + 0x58) + lVar19) ||
                               (__s_00[lVar19] == 0)) || (__s_00[lVar19] == local_192))))
                          goto LAB_001041e0;
                        }
                        __s_00[lVar28] = 0;
                        goto LAB_001042bc;
                      }
                    }
                  }
LAB_001041e0:
                  uVar24 = uVar24 + 1;
                  bVar27 = bVar27 + 6;
                  piVar29 = piVar29 + 1;
                  piVar30 = piVar30 + 1;
                } while (uVar24 != 5);
                piVar29 = &rcGetDirOffsetX(int)::offset;
                iVar34 = iVar34 + 1;
                iVar17 = 0;
                piVar30 = &rcGetDirOffsetY(int)::offset;
                while( true ) {
                  auVar7 = local_128;
                  uVar20 = (int)uVar20 >> ((byte)iVar17 & 0x1f) & 0x3f;
                  local_128 = auVar7;
                  if (uVar20 != 0x3f) {
                    local_128._0_4_ = *piVar29 + auVar37._0_4_;
                    local_128._4_4_ = *piVar30 + auVar37._4_4_;
                    uVar8 = local_128._0_8_;
                    iVar22 = uVar20 + (*(uint *)(*(long *)(param_2 + 0x40) +
                                                (long)(local_128._4_4_ * iVar5 + local_128._0_4_) *
                                                4) & 0xffffff);
                    lVar21 = (long)iVar22;
                    if (((cVar3 == *(char *)(*(long *)(param_2 + 0x58) + lVar21)) &&
                        ((ushort)(uVar9 - 2) <= *(ushort *)(*(long *)(param_2 + 0x50) + lVar21 * 2))
                        ) && (__s_00[lVar21] == 0)) {
                      __s_00[lVar21] = local_192;
                      __s[lVar21] = 0;
                      local_128._12_4_ = auVar7._12_4_;
                      local_128._0_8_ = auVar7._0_8_;
                      local_128._8_4_ = iVar22;
                      local_128 = CONCAT88(local_128._8_8_,uVar8);
                      uStack_200 = 0x104534;
                      rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1>::push_back
                                ((rcVectorBase<(anonymous_namespace)::LevelStackEntry,(rcAllocHint)1>
                                  *)local_148,(LevelStackEntry *)local_128);
                      auVar37._8_8_ = 0;
                    }
                  }
                  iVar17 = iVar17 + 6;
                  piVar29 = piVar29 + 1;
                  piVar30 = piVar30 + 1;
                  if (iVar17 == 0x18) break;
                  uVar20 = *(uint *)(lVar18 + 4) & 0xffffff;
                }
                lVar21 = local_148._0_8_;
LAB_001042bc:
                lVar18 = lVar21;
              } while (0 < lVar21);
              if (iVar34 < 1) goto LAB_00103f98;
              if (local_192 == 0xffff) {
                rcContext::log(param_1,3,"rcBuildRegions: Region ID overflow");
                if ((param_1[9] == (rcContext)0x0) ||
                   (*(code **)(*(long *)param_1 + 0x30) == rcContext::doStopTimer))
                goto LAB_00104672;
                uVar11 = 0;
                (**(code **)(*(long *)param_1 + 0x30))(param_1,0x17);
                goto LAB_0010444d;
              }
              lVar13 = lVar13 + 1;
              local_192 = local_192 + 1;
              puVar26 = (undefined8 *)((long)puVar26 + 0xc);
            } while (lVar13 < lVar14);
            goto LAB_00104309;
          }
        }
        else {
          uStack_200 = 0x1045ef;
          (**(code **)(lVar13 + 0x28))(param_1);
          lVar14 = *(long *)(local_108 + uVar32 * 0x18);
          if (0 < lVar14) goto LAB_00103f65;
LAB_00104309:
          if (param_1[9] == (rcContext)0x0) goto LAB_0010432b;
          lVar13 = *(long *)param_1;
        }
        if (*(code **)(lVar13 + 0x30) != rcContext::doStopTimer) {
          uStack_200 = 0x10468c;
          (**(code **)(lVar13 + 0x30))(param_1);
        }
      }
LAB_0010432b:
    } while (local_160 != 0);
  }
  local_180 = (rcTempVector *)local_148;
  local_1d8 = (rcIntArray *)local_128;
  expandRegions(0x40,0,param_2,__s_00,__s,local_180,true);
  if (param_1[9] != (rcContext)0x0) {
    lVar13 = *(long *)param_1;
    pcVar6 = *(code **)(lVar13 + 0x30);
    if (pcVar6 != rcContext::doStopTimer) {
      (*pcVar6)(param_1,0x15,pcVar6,rcContext::doStopTimer,uStack_200);
      if (param_1[9] == (rcContext)0x0) goto LAB_001043a3;
      lVar13 = *(long *)param_1;
    }
    if (*(code **)(lVar13 + 0x28) != rcContext::doStartTimer) {
      (**(code **)(lVar13 + 0x28))(param_1,0x18);
    }
  }
LAB_001043a3:
  local_128 = (undefined1  [16])0x0;
  local_118 = (void *)0x0;
  *(ushort *)(param_2 + 0x1a) = local_192;
  uVar11 = mergeAndFilterRegions
                     (param_1,param_4,param_5,(ushort *)(param_2 + 0x1a),param_2,__s_00,local_1d8);
  if ((char)uVar11 == '\0') {
    rcFree(local_118);
    if ((param_1[9] == (rcContext)0x0) ||
       (*(code **)(*(long *)param_1 + 0x30) == rcContext::doStopTimer)) {
LAB_00104672:
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
    }
  }
  else {
    if (0 < local_128._0_4_) {
      rcContext::log(param_1,3,"rcBuildRegions: %d overlapping regions.",
                     local_128._0_8_ & 0xffffffff);
    }
    rcFree(local_118);
    if ((param_1[9] != (rcContext)0x0) &&
       (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
    }
    iVar34 = *(int *)(param_2 + 8);
    if (0 < iVar34) {
      lVar13 = *(long *)(param_2 + 0x48);
      lVar14 = 0;
      do {
        *(ushort *)(lVar13 + 2 + lVar14 * 8) = __s_00[lVar14];
        lVar14 = lVar14 + 1;
      } while (lVar14 != iVar34);
    }
  }
LAB_0010444d:
  rcFree(local_138);
  prVar12 = local_60;
  do {
    rcFree(*(void **)&prVar12[0x10].field_0x0);
    bVar36 = local_108 != prVar12;
    prVar12 = prVar12 + -0x18;
  } while (bVar36);
LAB_0010447c:
  rcFree(__s_00);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x14);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* rcBuildRegionsMonotone(rcContext*, rcCompactHeightfield&, int, int, int) */

undefined4
rcBuildRegionsMonotone
          (rcContext *param_1,rcCompactHeightfield *param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort *__s;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  long lVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  ushort uVar29;
  ushort uVar30;
  long in_FS_OFFSET;
  void *local_d8;
  int local_d0;
  int local_cc;
  undefined1 local_78 [16];
  void *local_68;
  rcIntArray local_58 [4];
  undefined1 auStack_54 [12];
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x14);
  }
  iVar4 = *(int *)param_2;
  iVar5 = *(int *)(param_2 + 4);
  __s = (ushort *)rcAlloc((long)*(int *)(param_2 + 8) * 2);
  if (__s == (ushort *)0x0) {
    uVar9 = 0;
    rcContext::log(param_1,3,"rcBuildRegionsMonotone: Out of memory \'src\' (%d).",
                   *(undefined4 *)(param_2 + 8));
  }
  else {
    memset(__s,0,(long)*(int *)(param_2 + 8) * 2);
    iVar21 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) < *(int *)param_2) {
      iVar21 = *(int *)param_2;
    }
    pvVar10 = (void *)rcAlloc((long)iVar21 << 3,1);
    if (pvVar10 == (void *)0x0) {
      uVar9 = 0;
      rcContext::log(param_1,3,"rcBuildRegionsMonotone: Out of memory \'sweeps\' (%d).",iVar21);
    }
    else {
      uVar29 = 1;
      if (0 < param_3) {
        iVar21 = param_3;
        if (iVar4 <= param_3) {
          iVar21 = iVar4;
        }
        iVar25 = param_3;
        if (iVar5 <= param_3) {
          iVar25 = iVar5;
        }
        paintRectRegion(0,iVar21,0,iVar5,0x8001,param_2,__s);
        paintRectRegion(iVar4 - iVar21,iVar4,0,iVar5,0x8002,param_2,__s);
        paintRectRegion(0,iVar4,0,iVar25,0x8003,param_2,__s);
        uVar29 = 5;
        paintRectRegion(0,iVar4,iVar5 - iVar25,iVar5,0x8004,param_2,__s);
      }
      *(int *)(param_2 + 0x14) = param_3;
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auStack_54;
      _local_58 = auVar6 << 0x20;
      local_68 = (void *)0x0;
      local_78 = (undefined1  [16])0x0;
      rcVectorBase<int,(rcAllocHint)1>::resize_impl
                ((rcVectorBase<int,(rcAllocHint)1> *)local_78,0x100,(int *)local_58);
      if (param_3 < iVar5 - param_3) {
        iVar25 = param_3 * iVar4;
        iVar21 = iVar4 - param_3;
        local_d8 = local_68;
        local_d0 = iVar21 + -1 + iVar25;
        local_cc = param_3;
        do {
          uVar7 = local_78._0_8_;
          lVar1 = (ulong)uVar29 + 1;
          if (lVar1 < (long)local_78._0_8_) {
LAB_00104ec7:
            local_78._0_8_ = lVar1;
          }
          else if ((long)local_78._0_8_ < lVar1) {
            if (lVar1 <= (long)local_78._8_8_) goto LAB_00104ec7;
            lVar17 = local_78._8_8_ * 2;
            if (local_78._8_8_ * 2 < lVar1) {
              lVar17 = lVar1;
            }
            pvVar11 = (void *)rcAlloc(lVar17 * 4);
            if ((pvVar11 != (void *)0x0) && (0 < (long)(uVar7 << 2))) {
              lVar12 = 0;
              do {
                *(undefined4 *)((long)pvVar11 + lVar12 * 4) =
                     *(undefined4 *)((long)local_d8 + lVar12 * 4);
                lVar12 = lVar12 + 1;
              } while (lVar12 < (long)(uVar7 << 2) >> 2);
            }
            rcFree(local_d8);
            local_78._8_8_ = lVar17;
            local_78._0_8_ = lVar1;
            local_d8 = pvVar11;
            local_68 = pvVar11;
          }
          memset(local_d8,0,(ulong)uVar29 << 2);
          if (param_3 < iVar21) {
            lVar1 = *(long *)(param_2 + 0x40);
            iVar28 = iVar25 + -1 + param_3;
            uVar18 = 1;
            puVar22 = (uint *)(lVar1 + ((long)param_3 + (long)iVar25) * 4);
            puVar27 = puVar22;
            do {
              uVar8 = *puVar27 & 0xffffff;
              uVar13 = (ulong)uVar8;
              uVar23 = *(byte *)((long)puVar27 + 3) + uVar8;
              if (uVar8 < uVar23) {
                lVar12 = *(long *)(param_2 + 0x58);
                lVar17 = *(long *)(param_2 + 0x48) + uVar13 * 8;
                do {
                  if (*(char *)(lVar12 + uVar13) != '\0') {
                    uVar8 = *(uint *)(lVar17 + 4);
                    uVar20 = uVar8 & 0x3f;
                    if (uVar20 == 0x3f) {
LAB_00104b80:
                      puVar16 = (ushort *)((long)pvVar10 + (ulong)uVar18 * 8);
                      *puVar16 = uVar18;
                      puVar16[2] = 0;
                      puVar16[3] = 0;
                      uVar19 = uVar18 + 1;
                      uVar30 = uVar18;
                    }
                    else {
                      lVar24 = (long)(int)((*(uint *)(lVar1 + (long)iVar28 * 4) & 0xffffff) + uVar20
                                          );
                      uVar30 = __s[lVar24];
                      if ((((short)uVar30 < 0) ||
                          (*(char *)(lVar12 + lVar24) != *(char *)(lVar12 + uVar13))) ||
                         (uVar19 = uVar18, uVar30 == 0)) goto LAB_00104b80;
                    }
                    iVar26 = (int)(uVar8 & 0xffffff) >> 0x12;
                    if (iVar26 != 0x3f) {
                      lVar24 = (long)(int)(iVar26 + (*(uint *)(lVar1 + (long)((1 - iVar4) + iVar28)
                                                                       * 4) & 0xffffff));
                      uVar18 = __s[lVar24];
                      if ((0 < (short)uVar18) &&
                         (*(char *)(lVar12 + uVar13) == *(char *)(lVar12 + lVar24))) {
                        uVar3 = *(ushort *)((long)pvVar10 + (ulong)uVar30 * 8 + 6);
                        if ((uVar3 == 0) || (uVar18 == uVar3)) {
                          *(uint *)((long)pvVar10 + (ulong)uVar30 * 8 + 4) =
                               CONCAT22(uVar18,*(short *)((long)pvVar10 + (ulong)uVar30 * 8 + 4) + 1
                                       );
                          piVar2 = (int *)((long)local_d8 + (ulong)uVar18 * 4);
                          *piVar2 = *piVar2 + 1;
                        }
                        else {
                          *(undefined2 *)((long)pvVar10 + (ulong)uVar30 * 8 + 6) = 0xffff;
                        }
                      }
                    }
                    __s[uVar13] = uVar30;
                    uVar18 = uVar19;
                  }
                  uVar13 = uVar13 + 1;
                  lVar17 = lVar17 + 8;
                } while ((int)uVar13 < (int)uVar23);
              }
              iVar28 = iVar28 + 1;
              puVar27 = puVar27 + 1;
            } while (iVar28 != local_d0);
            if (1 < uVar18) {
              puVar16 = (ushort *)((long)pvVar10 + (ulong)(uVar18 - 2) * 8 + 0x12);
              puVar15 = (ushort *)((long)pvVar10 + 10);
              do {
                while ((uVar30 = puVar15[2], 0xfffd < (ushort)(uVar30 - 1) ||
                       (*(uint *)((long)local_d8 + (ulong)uVar30 * 4) != (uint)puVar15[1]))) {
                  puVar14 = puVar15 + 4;
                  uVar30 = uVar29 + 1;
                  *puVar15 = uVar29;
                  puVar15 = puVar14;
                  uVar29 = uVar30;
                  if (puVar16 == puVar14) goto LAB_00104c8c;
                }
                *puVar15 = uVar30;
                puVar15 = puVar15 + 4;
              } while (puVar16 != puVar15);
            }
LAB_00104c8c:
            do {
              uVar23 = *puVar22 & 0xffffff;
              uVar8 = *(byte *)((long)puVar22 + 3) + uVar23;
              if (uVar23 < uVar8) {
                puVar16 = __s + uVar23;
                do {
                  uVar30 = *puVar16;
                  if ((uVar30 != 0) && (uVar30 < uVar18)) {
                    *puVar16 = *(ushort *)((long)pvVar10 + (ulong)uVar30 * 8 + 2);
                  }
                  puVar16 = puVar16 + 1;
                } while (puVar16 != __s + (ulong)(uVar8 - uVar23) + (ulong)uVar23);
              }
              puVar22 = puVar22 + 1;
            } while (puVar22 !=
                     (uint *)(lVar1 + ((long)iVar25 +
                                      (ulong)(uint)(iVar21 - param_3) + (long)param_3) * 4));
          }
          local_cc = local_cc + 1;
          iVar25 = iVar25 + iVar4;
          local_d0 = local_d0 + iVar4;
        } while (local_cc != iVar5 - param_3);
      }
      else {
        local_d8 = local_68;
      }
      if ((param_1[9] != (rcContext)0x0) &&
         (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
        (**(code **)(*(long *)param_1 + 0x28))(param_1,0x18);
      }
      _local_58 = (undefined1  [16])0x0;
      local_48 = (void *)0x0;
      *(ushort *)(param_2 + 0x1a) = uVar29;
      uVar9 = mergeAndFilterRegions
                        (param_1,param_4,param_5,(ushort *)(param_2 + 0x1a),param_2,__s,local_58);
      if ((char)uVar9 == '\0') {
        rcFree(local_48);
        if ((param_1[9] != (rcContext)0x0) &&
           (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
          (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
        }
      }
      else {
        rcFree(local_48);
        if ((param_1[9] != (rcContext)0x0) &&
           (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
          (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
        }
        iVar4 = *(int *)(param_2 + 8);
        if (0 < iVar4) {
          lVar1 = *(long *)(param_2 + 0x48);
          lVar17 = 0;
          do {
            *(ushort *)(lVar1 + 2 + lVar17 * 8) = __s[lVar17];
            lVar17 = lVar17 + 1;
          } while (lVar17 != iVar4);
        }
      }
      rcFree(local_d8);
    }
    rcFree(pvVar10);
  }
  rcFree(__s);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x14);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
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



/* rcVectorBase<int, (rcAllocHint)1>::assign(int const*, int const*) */

void __thiscall
rcVectorBase<int,(rcAllocHint)1>::assign
          (rcVectorBase<int,(rcAllocHint)1> *this,int *param_1,int *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  lVar6 = lVar5 >> 2;
  *(undefined8 *)this = 0;
  if ((*(long *)(this + 8) < lVar6) && (lVar2 = rcAlloc(lVar5,1), lVar2 != 0)) {
    lVar3 = *(long *)this;
    pvVar1 = *(void **)(this + 0x10);
    lVar4 = 0;
    if (0 < lVar3 << 2) {
      do {
        *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)((long)pvVar1 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (lVar3 << 2) >> 2);
    }
    rcFree(pvVar1);
    *(long *)(this + 0x10) = lVar2;
    *(long *)(this + 8) = lVar6;
  }
  else {
    lVar2 = *(long *)(this + 0x10);
  }
  *(long *)this = lVar6;
  lVar3 = 0;
  if (0 < lVar5) {
    do {
      *(int *)(lVar2 + lVar3 * 4) = param_1[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar6);
  }
  return;
}



/* rcVectorBase<rcRegion, (rcAllocHint)1>::allocate_and_copy(long) */

undefined4 * __thiscall
rcVectorBase<rcRegion,(rcAllocHint)1>::allocate_and_copy
          (rcVectorBase<rcRegion,(rcAllocHint)1> *this,long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  
  puVar5 = (undefined4 *)rcAlloc(param_1 << 6,1);
  if (puVar5 != (undefined4 *)0x0) {
    lVar2 = *(long *)this;
    if (0 < lVar2 << 6) {
      lVar8 = 0;
      puVar6 = puVar5;
      puVar7 = *(undefined4 **)(this + 0x10);
      do {
        lVar8 = lVar8 + 1;
        *puVar6 = *puVar7;
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar7 + 1);
        *(undefined1 *)((long)puVar6 + 6) = *(undefined1 *)((long)puVar7 + 6);
        piVar3 = *(int **)(puVar7 + 8);
        *(undefined4 *)((long)puVar6 + 7) = *(undefined4 *)((long)puVar7 + 7);
        uVar1 = puVar7[3];
        *(undefined8 *)(puVar6 + 8) = 0;
        puVar6[3] = uVar1;
        lVar4 = *(long *)(puVar7 + 4);
        *(undefined1 (*) [16])(puVar6 + 4) = (undefined1  [16])0x0;
        rcVectorBase<int,(rcAllocHint)1>::assign
                  ((rcVectorBase<int,(rcAllocHint)1> *)(puVar6 + 4),piVar3,piVar3 + lVar4);
        piVar3 = *(int **)(puVar7 + 0xe);
        lVar4 = *(long *)(puVar7 + 10);
        *(undefined8 *)(puVar6 + 0xe) = 0;
        *(undefined1 (*) [16])(puVar6 + 10) = (undefined1  [16])0x0;
        rcVectorBase<int,(rcAllocHint)1>::assign
                  ((rcVectorBase<int,(rcAllocHint)1> *)(puVar6 + 10),piVar3,piVar3 + lVar4);
        puVar6 = puVar6 + 0x10;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 < (lVar2 << 6) >> 6);
    }
  }
  return puVar5;
}



/* rcVectorBase<rcRegion, (rcAllocHint)1>::reserve(long) */

undefined8 __thiscall
rcVectorBase<rcRegion,(rcAllocHint)1>::reserve
          (rcVectorBase<rcRegion,(rcAllocHint)1> *this,long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 <= *(long *)(this + 8)) {
    return 1;
  }
  lVar2 = allocate_and_copy(this,param_1);
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar1 = *(long *)this;
    if (0 < lVar1) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        lVar4 = lVar4 * 0x40 + *(long *)(this + 0x10);
        rcFree(*(void **)(lVar4 + 0x38));
        rcFree(*(void **)(lVar4 + 0x20));
        lVar4 = lVar5;
      } while (lVar1 != lVar5);
    }
    rcFree(*(void **)(this + 0x10));
    *(long *)(this + 0x10) = lVar2;
    uVar3 = 1;
    *(long *)(this + 8) = param_1;
  }
  return uVar3;
}



/* rcVectorBase<rcRegion, (rcAllocHint)1>::push_back(rcRegion const&) */

void __thiscall
rcVectorBase<rcRegion,(rcAllocHint)1>::push_back
          (rcVectorBase<rcRegion,(rcAllocHint)1> *this,rcRegion *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)this;
  lVar3 = *(long *)(this + 8);
  if (lVar4 < lVar3) {
    puVar5 = (undefined8 *)(lVar4 * 0x40 + *(long *)(this + 0x10));
    *(long *)this = lVar4 + 1;
    *puVar5 = *(undefined8 *)param_1;
    *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(param_1 + 8);
    *(rcRegion *)((long)puVar5 + 10) = param_1[10];
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    piVar2 = *(int **)(param_1 + 0x20);
    puVar5[4] = 0;
    *(undefined4 *)((long)puVar5 + 0xc) = uVar1;
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    rcVectorBase<int,(rcAllocHint)1>::assign
              ((rcVectorBase<int,(rcAllocHint)1> *)(puVar5 + 2),piVar2,piVar2 + lVar4);
    piVar2 = *(int **)(param_1 + 0x38);
    lVar4 = *(long *)(param_1 + 0x28);
    puVar5[7] = 0;
    *(undefined1 (*) [16])(puVar5 + 5) = (undefined1  [16])0x0;
    rcVectorBase<int,(rcAllocHint)1>::assign
              ((rcVectorBase<int,(rcAllocHint)1> *)(puVar5 + 5),piVar2,piVar2 + lVar4);
    return;
  }
  lVar4 = lVar3 * 2;
  if (lVar3 * 2 < lVar3 + 1) {
    lVar4 = lVar3 + 1;
  }
  lVar7 = 0x7fffffffffffffff;
  if (lVar3 < 0x3fffffffffffffff) {
    lVar7 = lVar4;
  }
  lVar3 = allocate_and_copy(this,lVar7);
  puVar5 = (undefined8 *)(*(long *)this * 0x40 + lVar3);
  *puVar5 = *(undefined8 *)param_1;
  piVar2 = *(int **)(param_1 + 0x20);
  *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(param_1 + 8);
  *(rcRegion *)((long)puVar5 + 10) = param_1[10];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  puVar5[4] = 0;
  *(undefined4 *)((long)puVar5 + 0xc) = uVar1;
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  rcVectorBase<int,(rcAllocHint)1>::assign
            ((rcVectorBase<int,(rcAllocHint)1> *)(puVar5 + 2),piVar2,piVar2 + lVar4);
  piVar2 = *(int **)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x28);
  puVar5[7] = 0;
  *(undefined1 (*) [16])(puVar5 + 5) = (undefined1  [16])0x0;
  rcVectorBase<int,(rcAllocHint)1>::assign
            ((rcVectorBase<int,(rcAllocHint)1> *)(puVar5 + 5),piVar2,piVar2 + lVar4);
  lVar4 = *(long *)this;
  if (0 < lVar4) {
    lVar6 = 0;
    do {
      lVar8 = lVar6 + 1;
      lVar6 = lVar6 * 0x40 + *(long *)(this + 0x10);
      rcFree(*(void **)(lVar6 + 0x38));
      rcFree(*(void **)(lVar6 + 0x20));
      lVar6 = lVar8;
    } while (lVar4 != lVar8);
    lVar4 = *(long *)this;
  }
  *(long *)(this + 8) = lVar7;
  *(long *)this = lVar4 + 1;
  rcFree(*(void **)(this + 0x10));
  *(long *)(this + 0x10) = lVar3;
  return;
}




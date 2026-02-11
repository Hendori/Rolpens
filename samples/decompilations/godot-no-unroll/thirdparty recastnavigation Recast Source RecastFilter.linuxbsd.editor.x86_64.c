
/* rcFilterLowHangingWalkableObstacles(rcContext*, int, rcHeightfield&) */

void rcFilterLowHangingWalkableObstacles(rcContext *param_1,int param_2,rcHeightfield *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  uint *puVar5;
  rcContext rVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  byte bVar15;
  
  rVar6 = param_1[9];
  if (rVar6 != (rcContext)0x0) {
    lVar8 = *(long *)param_1;
    if (*(code **)(lVar8 + 0x28) == rcContext::doStartTimer) {
      iVar9 = *(int *)(param_3 + 4);
      iVar13 = *(int *)param_3;
      if (0 < iVar9) goto LAB_0010004d;
    }
    else {
      (**(code **)(lVar8 + 0x28))(param_1,10);
      iVar9 = *(int *)(param_3 + 4);
      iVar13 = *(int *)param_3;
      rVar6 = param_1[9];
      if (0 < iVar9) goto LAB_0010004d;
LAB_0010014a:
      if (rVar6 == (rcContext)0x0) {
        return;
      }
      lVar8 = *(long *)param_1;
    }
    if (*(code **)(lVar8 + 0x30) == rcContext::doStopTimer) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x001001a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))(param_1,10);
    return;
  }
  iVar9 = *(int *)(param_3 + 4);
  iVar13 = *(int *)param_3;
  if (iVar9 < 1) {
    return;
  }
LAB_0010004d:
  iVar10 = 0;
  iVar12 = 0;
LAB_00100052:
  if (iVar13 < 1) goto LAB_00100180;
  lVar8 = *(long *)(param_3 + 0x28);
  do {
    puVar14 = (undefined8 *)(lVar8 + (long)iVar10 * 8);
    do {
      bVar15 = 0;
      puVar5 = (uint *)*puVar14;
      puVar3 = (uint *)0x0;
      bVar4 = false;
      while (puVar2 = puVar5, puVar2 != (uint *)0x0) {
        bVar1 = *(byte *)((long)puVar2 + 3);
        if ((bVar1 < 4) && (bVar4)) {
          iVar7 = (*puVar2 >> 0xd & 0x1fff) - (*puVar3 >> 0xd & 0x1fff);
          iVar11 = -iVar7;
          if (0 < iVar7) {
            iVar11 = iVar7;
          }
          if (param_2 < iVar11) goto LAB_0010010b;
          *(byte *)((long)puVar2 + 3) = bVar1 & 3 | bVar15 * '\x04';
          puVar5 = *(uint **)(puVar2 + 2);
          puVar3 = puVar2;
          bVar4 = 3 < bVar1;
        }
        else {
LAB_0010010b:
          bVar15 = bVar1 >> 2;
          puVar5 = *(uint **)(puVar2 + 2);
          puVar3 = puVar2;
          bVar4 = 3 < bVar1;
        }
      }
      puVar14 = puVar14 + 1;
    } while ((undefined8 *)(lVar8 + ((long)iVar10 + (long)iVar13) * 8) != puVar14);
    iVar12 = iVar12 + 1;
    iVar10 = iVar10 + iVar13;
  } while (iVar12 < iVar9);
  goto LAB_0010014a;
LAB_00100180:
  iVar12 = iVar12 + 1;
  iVar10 = iVar10 + iVar13;
  if (iVar9 <= iVar12) goto LAB_0010014a;
  goto LAB_00100052;
}



/* rcFilterLedgeSpans(rcContext*, int, int, rcHeightfield&) */

void rcFilterLedgeSpans(rcContext *param_1,int param_2,int param_3,rcHeightfield *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  rcContext rVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  int *piVar20;
  uint uVar21;
  int local_90;
  int local_8c;
  int local_84;
  
  rVar6 = param_1[9];
  if (rVar6 == (rcContext)0x0) {
    local_8c = *(int *)param_4;
    local_84 = *(int *)(param_4 + 4);
    if (local_84 < 1) {
      return;
    }
LAB_00100227:
    iVar15 = 0;
    local_90 = 0;
    do {
      if (0 < local_8c) {
        lVar5 = *(long *)(param_4 + 0x28);
        uVar13 = -param_3;
        do {
          lVar4 = 0;
          do {
            puVar1 = *(uint **)(lVar5 + (long)iVar15 * 8 + lVar4 * 8);
joined_r0x001002a0:
            puVar18 = puVar1;
            if (puVar1 != (uint *)0x0) {
              do {
                puVar1 = *(uint **)(puVar18 + 2);
                if (3 < *(byte *)((long)puVar18 + 3)) {
                  uVar16 = 0xffff;
                  uVar12 = *puVar18 >> 0xd & 0x1fff;
                  if (puVar1 != (uint *)0x0) {
                    uVar16 = (ushort)*puVar1 & 0x1fff;
                  }
                  uVar2 = uVar13;
                  if ((int)uVar13 <= (int)uVar12) {
                    uVar2 = uVar12;
                  }
                  piVar20 = &rcGetDirOffsetX(int)::offset;
                  iVar14 = 0xffff;
                  piVar10 = &rcGetDirOffsetY(int)::offset;
                  uVar11 = uVar12;
                  uVar21 = uVar12;
                  do {
                    uVar7 = (int)lVar4 + *piVar20;
                    uVar3 = local_90 + *piVar10;
                    if ((((int)(uVar7 | uVar3) < 0) || (local_8c <= (int)uVar7)) ||
                       (local_84 <= (int)uVar3)) {
                      if ((int)(uVar13 - uVar12) < iVar14) {
                        iVar14 = uVar13 - uVar12;
                      }
                    }
                    else {
                      puVar19 = *(uint **)(lVar5 + (long)(int)(uVar3 * local_8c + uVar7) * 8);
                      if (puVar19 == (uint *)0x0) {
                        iVar9 = uVar13 - uVar12;
                        if (iVar14 <= (int)(uVar13 - uVar12)) {
                          iVar9 = iVar14;
                        }
                        if (param_2 < (int)(uVar16 - uVar2)) {
                          iVar14 = iVar9;
                        }
                      }
                      else {
                        uVar3 = (ushort)*puVar19 & 0x1fff;
                        if (uVar16 < uVar3) {
                          uVar3 = uVar16;
                        }
                        iVar9 = uVar13 - uVar12;
                        if (iVar14 <= (int)(uVar13 - uVar12)) {
                          iVar9 = iVar14;
                        }
                        if (param_2 < (int)(uVar3 - uVar2)) {
                          iVar14 = iVar9;
                        }
                        while( true ) {
                          uVar3 = *puVar19;
                          puVar19 = *(uint **)(puVar19 + 2);
                          uVar7 = uVar3 >> 0xd & 0x1fff;
                          uVar3 = uVar7;
                          if (uVar7 <= uVar12) {
                            uVar3 = uVar12;
                          }
                          if (puVar19 == (uint *)0x0) break;
                          uVar8 = (ushort)*puVar19 & 0x1fff;
                          if (uVar16 < uVar8) {
                            uVar8 = uVar16;
                          }
                          if (param_2 < (int)(uVar8 - uVar3)) {
                            iVar9 = uVar7 - uVar12;
                            if (iVar9 < iVar14) {
                              iVar14 = iVar9;
                            }
                            if (iVar9 < 1) {
                              iVar9 = -iVar9;
                            }
                            if (iVar9 <= param_3) {
                              if (uVar7 < uVar21) {
                                uVar21 = uVar7;
                              }
                              if (uVar11 < uVar7) {
                                uVar11 = uVar7;
                              }
                            }
                          }
                        }
                        if (param_2 < (int)(uVar16 - uVar3)) {
                          iVar9 = uVar7 - uVar12;
                          if (iVar9 < iVar14) {
                            iVar14 = iVar9;
                          }
                          iVar17 = -iVar9;
                          if (0 < iVar9) {
                            iVar17 = iVar9;
                          }
                          if (iVar17 <= param_3) {
                            if (uVar7 < uVar21) {
                              uVar21 = uVar7;
                            }
                            if (uVar11 < uVar7) {
                              uVar11 = uVar7;
                            }
                          }
                        }
                      }
                    }
                    piVar20 = piVar20 + 1;
                    piVar10 = piVar10 + 1;
                  } while ((NoteGnuProperty_4 *)piVar20 != &NoteGnuProperty_4_00100770);
                  if ((iVar14 < (int)uVar13) || (param_3 < (int)(uVar11 - uVar21)))
                  goto LAB_00100465;
                }
                puVar18 = puVar1;
                if (puVar1 == (uint *)0x0) break;
              } while( true );
            }
            lVar4 = lVar4 + 1;
          } while (local_8c != lVar4);
          local_90 = local_90 + 1;
          iVar15 = iVar15 + local_8c;
          if (local_84 <= local_90) goto LAB_001004b1;
        } while( true );
      }
      local_90 = local_90 + 1;
      iVar15 = iVar15 + local_8c;
    } while (local_90 < local_84);
  }
  else {
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0x28) == rcContext::doStartTimer) {
      local_8c = *(int *)param_4;
      local_84 = *(int *)(param_4 + 4);
      if (local_84 < 1) goto LAB_001004bc;
      goto LAB_00100227;
    }
    (**(code **)(lVar5 + 0x28))();
    local_8c = *(int *)param_4;
    rVar6 = param_1[9];
    local_84 = *(int *)(param_4 + 4);
    if (0 < local_84) goto LAB_00100227;
  }
LAB_001004b1:
  if (rVar6 == (rcContext)0x0) {
    return;
  }
  lVar5 = *(long *)param_1;
LAB_001004bc:
  if (*(code **)(lVar5 + 0x30) == rcContext::doStopTimer) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001004e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(param_1,7);
  return;
LAB_00100465:
  *(byte *)((long)puVar18 + 3) = *(byte *)((long)puVar18 + 3) & 3;
  goto joined_r0x001002a0;
}



/* rcFilterWalkableLowHeightSpans(rcContext*, int, rcHeightfield&) */

void rcFilterWalkableLowHeightSpans(rcContext *param_1,int param_2,rcHeightfield *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  rcContext rVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  
  rVar5 = param_1[9];
  if (rVar5 == (rcContext)0x0) {
    iVar7 = *(int *)(param_3 + 4);
    iVar10 = *(int *)param_3;
    if (0 < iVar7) goto LAB_001005dd;
  }
  else {
    lVar4 = *(long *)param_1;
    if (*(code **)(lVar4 + 0x28) == rcContext::doStartTimer) {
      iVar7 = *(int *)(param_3 + 4);
      iVar10 = *(int *)param_3;
      if (0 < iVar7) {
LAB_001005dd:
        iVar9 = 0;
        iVar6 = 0;
LAB_001005e5:
        if (iVar10 < 1) goto LAB_001006dd;
        lVar4 = *(long *)(param_3 + 0x28);
        do {
          puVar8 = (undefined8 *)(lVar4 + (long)iVar9 * 8);
          do {
            puVar2 = (uint *)*puVar8;
            if (puVar2 != (uint *)0x0) {
              uVar1 = *puVar2;
              for (puVar3 = *(uint **)(puVar2 + 2); uVar1 = uVar1 >> 0xd & 0x1fff,
                  puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
                if ((int)(((ushort)*puVar3 & 0x1fff) - uVar1) < param_2) {
                  *(byte *)((long)puVar2 + 3) = *(byte *)((long)puVar2 + 3) & 3;
                }
                uVar1 = *puVar3;
                puVar2 = puVar3;
              }
              if ((int)(0xffff - uVar1) < param_2) {
                *(byte *)((long)puVar2 + 3) = *(byte *)((long)puVar2 + 3) & 3;
              }
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 != (undefined8 *)(lVar4 + ((long)iVar9 + (long)iVar10) * 8));
          iVar9 = iVar9 + iVar10;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
        goto LAB_0010069f;
      }
    }
    else {
      (**(code **)(lVar4 + 0x28))(param_1,8);
      iVar7 = *(int *)(param_3 + 4);
      iVar10 = *(int *)param_3;
      rVar5 = param_1[9];
      if (0 < iVar7) goto LAB_001005dd;
LAB_0010069f:
      if (rVar5 == (rcContext)0x0) {
        return;
      }
      lVar4 = *(long *)param_1;
    }
    if (*(code **)(lVar4 + 0x30) != rcContext::doStopTimer) {
                    /* WARNING: Could not recover jumptable at 0x00100706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x30))(param_1,8);
      return;
    }
  }
  return;
LAB_001006dd:
  iVar6 = iVar6 + 1;
  iVar9 = iVar9 + iVar10;
  if (iVar7 <= iVar6) goto LAB_0010069f;
  goto LAB_001005e5;
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



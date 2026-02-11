
/* rcErodeWalkableArea(rcContext*, int, rcCompactHeightfield&) */

undefined8 rcErodeWalkableArea(rcContext *param_1,int param_2,rcCompactHeightfield *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void *__s;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  
  uVar2 = *(uint *)param_3;
  iVar15 = *(int *)(param_3 + 4);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0xd);
  }
  __s = (void *)rcAlloc((long)*(int *)(param_3 + 8),1);
  if (__s == (void *)0x0) {
    uVar13 = 0;
    rcContext::log(param_1,3,"erodeWalkableArea: Out of memory \'dist\' (%d).",
                   *(undefined4 *)(param_3 + 8));
  }
  else {
    memset(__s,0xff,(long)*(int *)(param_3 + 8));
    if (0 < iVar15) {
      iVar3 = 0;
      iVar23 = 0;
      if (0 < (int)uVar2) {
        do {
          uVar22 = 0;
          lVar17 = (long)iVar3 * 4;
          do {
            uVar5 = *(uint *)(*(long *)(param_3 + 0x40) + lVar17) & 0xffffff;
            uVar14 = *(byte *)(*(long *)(param_3 + 0x40) + lVar17 + 3) + uVar5;
            uVar10 = (ulong)uVar5;
            if (uVar5 < uVar14) {
              do {
                while (*(char *)(*(long *)(param_3 + 0x58) + uVar10) == '\0') {
LAB_001000f0:
                  *(undefined1 *)((long)__s + uVar10) = 0;
                  uVar10 = uVar10 + 1;
                  if ((int)uVar14 <= (int)uVar10) goto LAB_001001bb;
                }
                piVar18 = &rcGetDirOffsetX(int)::offset;
                piVar16 = &rcGetDirOffsetY(int)::offset;
                iVar21 = 0;
                iVar6 = 0;
                do {
                  uVar5 = (int)(*(uint *)(*(long *)(param_3 + 0x48) + 4 + uVar10 * 8) & 0xffffff) >>
                          ((byte)iVar6 & 0x1f) & 0x3f;
                  if (uVar5 != 0x3f) {
                    iVar21 = (iVar21 + 1) -
                             (uint)(*(char *)(*(long *)(param_3 + 0x58) +
                                             (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                                                   (long)(int)((*piVar16 + iVar23) *
                                                                               uVar2 + *piVar18 +
                                                                                       uVar22) * 4)
                                                         & 0xffffff) + uVar5)) == '\0');
                  }
                  iVar6 = iVar6 + 6;
                  piVar18 = piVar18 + 1;
                  piVar16 = piVar16 + 1;
                } while (iVar6 != 0x18);
                if (iVar21 != 4) goto LAB_001000f0;
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)uVar14);
            }
LAB_001001bb:
            uVar22 = uVar22 + 1;
            lVar17 = lVar17 + 4;
          } while (uVar2 != uVar22);
          iVar23 = iVar23 + 1;
          iVar3 = iVar3 + uVar2;
        } while (iVar23 != iVar15);
      }
      iVar3 = 0;
      iVar23 = 0;
      uVar5 = 0xffffffff;
      uVar22 = ~uVar2;
      do {
        lVar17 = (long)iVar3 << 2;
        uVar14 = uVar22;
        if (0 < (int)uVar2) {
          do {
            uVar9 = *(uint *)(*(long *)(param_3 + 0x40) + lVar17) & 0xffffff;
            uVar19 = *(byte *)(*(long *)(param_3 + 0x40) + lVar17 + 3) + uVar9;
            if (uVar9 < uVar19) {
              lVar7 = (ulong)uVar9 * 8;
              pbVar4 = (byte *)((ulong)uVar9 + (long)__s);
              pbVar20 = pbVar4 + (uVar19 - uVar9);
              do {
                lVar12 = *(long *)(param_3 + 0x48);
                lVar1 = lVar12 + lVar7;
                uVar9 = *(uint *)(lVar1 + 4);
                if ((uVar9 & 0x3f) != 0x3f) {
                  lVar11 = (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                                 (long)(int)((iVar3 - uVar22) + -1 + uVar14) * 4) &
                                       0xffffff) + (uVar9 & 0x3f));
                  uVar9 = *(byte *)((long)__s + lVar11) + 2;
                  bVar8 = (byte)uVar9;
                  if (0xff < uVar9) {
                    bVar8 = 0xff;
                  }
                  if (bVar8 < *pbVar4) {
                    *pbVar4 = bVar8;
                  }
                  iVar6 = (int)(*(uint *)(lVar12 + lVar11 * 8 + 4) & 0xffffff) >> 0x12;
                  if (iVar6 != 0x3f) {
                    uVar9 = *(byte *)((long)__s +
                                     (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                                           (long)(int)uVar14 * 4) & 0xffffff) +
                                                iVar6)) + 3;
                    bVar8 = (byte)uVar9;
                    if (0xff < uVar9) {
                      bVar8 = 0xff;
                    }
                    if (bVar8 < *pbVar4) {
                      *pbVar4 = bVar8;
                    }
                  }
                  uVar9 = *(uint *)(lVar1 + 4);
                }
                iVar6 = (int)(uVar9 & 0xffffff) >> 0x12;
                if (iVar6 != 0x3f) {
                  lVar1 = *(long *)(param_3 + 0x48);
                  lVar12 = (long)(int)(iVar6 + (*(uint *)(*(long *)(param_3 + 0x40) +
                                                         (long)(int)(uVar14 + 1) * 4) & 0xffffff));
                  uVar9 = *(byte *)((long)__s + lVar12) + 2;
                  bVar8 = (byte)uVar9;
                  if (0xff < uVar9) {
                    bVar8 = 0xff;
                  }
                  if (bVar8 < *pbVar4) {
                    *pbVar4 = bVar8;
                  }
                  uVar9 = *(uint *)(lVar1 + lVar12 * 8 + 4) >> 0xc & 0x3f;
                  if (uVar9 != 0x3f) {
                    uVar9 = *(byte *)((long)__s +
                                     (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                                           (long)(int)(uVar14 + 2) * 4) & 0xffffff)
                                                + uVar9)) + 3;
                    bVar8 = (byte)uVar9;
                    if (0xff < uVar9) {
                      bVar8 = 0xff;
                    }
                    if (bVar8 < *pbVar4) {
                      *pbVar4 = bVar8;
                    }
                  }
                }
                pbVar4 = pbVar4 + 1;
                lVar7 = lVar7 + 8;
              } while (pbVar20 != pbVar4);
            }
            uVar14 = uVar14 + 1;
            lVar17 = lVar17 + 4;
          } while (uVar14 != uVar5);
        }
        iVar23 = iVar23 + 1;
        uVar5 = uVar5 + uVar2;
        iVar3 = iVar3 + uVar2;
        uVar22 = uVar22 + uVar2;
      } while (iVar15 != iVar23);
      iVar3 = iVar15 + -1;
      iVar15 = uVar2 * iVar15;
      iVar23 = uVar2 * iVar3;
      do {
        if (0 < (int)uVar2) {
          iVar6 = uVar2 + iVar15;
          lVar17 = ((long)iVar23 + (long)(int)(uVar2 - 1)) * 4;
          do {
            uVar22 = *(uint *)(*(long *)(param_3 + 0x40) + lVar17) & 0xffffff;
            uVar5 = *(byte *)(*(long *)(param_3 + 0x40) + lVar17 + 3) + uVar22;
            if (uVar22 < uVar5) {
              lVar7 = (ulong)uVar22 * 8;
              pbVar4 = (byte *)((ulong)uVar22 + (long)__s);
              pbVar20 = pbVar4 + (uVar5 - uVar22);
              do {
                lVar12 = *(long *)(param_3 + 0x48);
                lVar1 = lVar12 + lVar7;
                uVar22 = *(uint *)(lVar1 + 4) & 0xffffff;
                uVar5 = (int)uVar22 >> 0xc & 0x3f;
                if (uVar5 != 0x3f) {
                  lVar11 = (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                                 (long)((iVar23 - iVar15) + iVar6) * 4) & 0xffffff)
                                      + uVar5);
                  uVar22 = *(byte *)((long)__s + lVar11) + 2;
                  bVar8 = (byte)uVar22;
                  if (0xff < uVar22) {
                    bVar8 = 0xff;
                  }
                  if (bVar8 < *pbVar4) {
                    *pbVar4 = bVar8;
                  }
                  uVar22 = *(uint *)(lVar12 + lVar11 * 8 + 4) >> 6 & 0x3f;
                  if (uVar22 != 0x3f) {
                    uVar22 = *(byte *)((long)__s +
                                      (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                                            (long)iVar6 * 4) & 0xffffff) + uVar22))
                             + 3;
                    bVar8 = (byte)uVar22;
                    if (0xff < uVar22) {
                      bVar8 = 0xff;
                    }
                    if (bVar8 < *pbVar4) {
                      *pbVar4 = bVar8;
                    }
                  }
                  uVar22 = *(uint *)(lVar1 + 4) & 0xffffff;
                }
                uVar22 = (int)uVar22 >> 6 & 0x3f;
                if (uVar22 != 0x3f) {
                  lVar1 = *(long *)(param_3 + 0x48);
                  lVar12 = (long)(int)(uVar22 + (*(uint *)(*(long *)(param_3 + 0x40) +
                                                          (long)(iVar6 + -1) * 4) & 0xffffff));
                  uVar22 = *(byte *)((long)__s + lVar12) + 2;
                  bVar8 = (byte)uVar22;
                  if (0xff < uVar22) {
                    bVar8 = 0xff;
                  }
                  if (bVar8 < *pbVar4) {
                    *pbVar4 = bVar8;
                  }
                  uVar22 = *(uint *)(lVar1 + lVar12 * 8 + 4) & 0x3f;
                  if (uVar22 != 0x3f) {
                    uVar22 = *(byte *)((long)__s +
                                      (long)(int)((*(uint *)(*(long *)(param_3 + 0x40) +
                                                            (long)(iVar6 + -2) * 4) & 0xffffff) +
                                                 uVar22)) + 3;
                    bVar8 = (byte)uVar22;
                    if (0xff < uVar22) {
                      bVar8 = 0xff;
                    }
                    if (bVar8 < *pbVar4) {
                      *pbVar4 = bVar8;
                    }
                  }
                }
                pbVar4 = pbVar4 + 1;
                lVar7 = lVar7 + 8;
              } while (pbVar20 != pbVar4);
            }
            iVar6 = iVar6 + -1;
            lVar17 = lVar17 + -4;
          } while (iVar15 != iVar6);
        }
        iVar3 = iVar3 + -1;
        iVar15 = iVar15 - uVar2;
        iVar23 = iVar23 - uVar2;
      } while (iVar3 != -1);
    }
    lVar17 = 0;
    if (0 < *(int *)(param_3 + 8)) {
      do {
        if (*(byte *)((long)__s + lVar17) < (byte)((char)param_2 * '\x02')) {
          *(undefined1 *)(*(long *)(param_3 + 0x58) + lVar17) = 0;
        }
        lVar17 = lVar17 + 1;
      } while ((int)lVar17 < *(int *)(param_3 + 8));
    }
    uVar13 = 1;
    rcFree(__s);
  }
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0xd);
  }
  return uVar13;
}



/* rcMedianFilterWalkableArea(rcContext*, rcCompactHeightfield&) */

undefined8 rcMedianFilterWalkableArea(rcContext *param_1,rcCompactHeightfield *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  void *__s;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long in_FS_OFFSET;
  int local_90;
  int local_8c;
  byte local_49 [9];
  long local_40 [2];
  
  iVar5 = *(int *)param_2;
  iVar6 = *(int *)(param_2 + 4);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,9);
  }
  __s = (void *)rcAlloc((long)*(int *)(param_2 + 8),1);
  if (__s == (void *)0x0) {
    rcContext::log(param_1,3,"medianFilterWalkableArea: Out of memory \'areas\' (%d).",
                   *(undefined4 *)(param_2 + 8));
    uVar17 = 0;
  }
  else {
    memset(__s,0xff,(long)*(int *)(param_2 + 8));
    if ((0 < iVar6) && (0 < iVar5)) {
      iVar8 = 0;
      local_8c = 0;
      do {
        local_90 = 0;
        lVar12 = (long)iVar8 << 2;
        do {
          uVar9 = *(uint *)(*(long *)(param_2 + 0x40) + lVar12) & 0xffffff;
          uVar1 = *(byte *)(*(long *)(param_2 + 0x40) + lVar12 + 3) + uVar9;
          uVar20 = (ulong)uVar9;
          pbVar2 = local_49 + 1;
          if (uVar9 < uVar1) {
            do {
              while( true ) {
                lVar22 = *(long *)(param_2 + 0x58);
                bVar3 = *(byte *)(lVar22 + uVar20);
                if (bVar3 == 0) break;
                lVar15 = *(long *)(param_2 + 0x48);
                local_49[0] = bVar3;
                pbVar16 = pbVar2;
                do {
                  pbVar13 = pbVar16 + 1;
                  *pbVar16 = *(byte *)(lVar22 + uVar20);
                  pbVar16 = pbVar13;
                } while (pbVar13 != (byte *)local_40);
                lVar14 = 0;
                uVar9 = 0;
                do {
                  uVar9 = uVar9 + 1;
                  uVar10 = (int)(*(uint *)(lVar15 + uVar20 * 8 + 4) & 0xffffff) >>
                           ((char)lVar14 * '\x03' & 0x1fU) & 0x3f;
                  if (uVar10 != 0x3f) {
                    lVar7 = *(long *)(param_2 + 0x40);
                    iVar21 = local_90 + *(int *)((long)&rcGetDirOffsetX(int)::offset + lVar14 * 2);
                    iVar18 = local_8c + *(int *)((long)&rcGetDirOffsetY(int)::offset + lVar14 * 2);
                    lVar11 = (long)(int)(uVar10 + (*(uint *)(lVar7 + (long)(iVar5 * iVar18 + iVar21)
                                                                     * 4) & 0xffffff));
                    bVar3 = *(byte *)(lVar22 + lVar11);
                    if (bVar3 != 0) {
                      local_49[lVar14] = bVar3;
                    }
                    uVar19 = uVar9 & 3;
                    uVar10 = (int)(*(uint *)(lVar15 + 4 + lVar11 * 8) & 0xffffff) >>
                             (char)uVar19 * '\x06' & 0x3f;
                    if ((uVar10 != 0x3f) &&
                       (bVar3 = *(byte *)(lVar22 + (int)((*(uint *)(lVar7 + (long)((iVar18 + (&
                                                  rcGetDirOffsetY(int)::offset)[uVar19]) * iVar5 +
                                                  iVar21 + (&rcGetDirOffsetX(int)::offset)[uVar19])
                                                  * 4) & 0xffffff) + uVar10)), bVar3 != 0)) {
                      pbVar2[lVar14] = bVar3;
                    }
                  }
                  lVar14 = lVar14 + 2;
                } while (uVar9 != 4);
                lVar22 = 0;
                do {
                  bVar3 = pbVar2[lVar22];
                  lVar15 = lVar22;
                  do {
                    bVar4 = local_49[lVar15];
                    if (bVar4 <= bVar3) {
                      pbVar16 = local_49 + ((int)lVar15 + 1);
                      break;
                    }
                    pbVar2[lVar15] = bVar4;
                    lVar15 = lVar15 + -1;
                    pbVar16 = local_49;
                  } while ((int)lVar15 != -1);
                  lVar22 = lVar22 + 1;
                  *pbVar16 = bVar3;
                } while (lVar22 != 8);
                *(byte *)((long)__s + uVar20) = local_49[4];
                uVar20 = uVar20 + 1;
                if ((int)uVar1 <= (int)uVar20) goto LAB_001009ec;
              }
              *(undefined1 *)((long)__s + uVar20) = 0;
              uVar20 = uVar20 + 1;
            } while ((int)uVar20 < (int)uVar1);
          }
LAB_001009ec:
          local_90 = local_90 + 1;
          lVar12 = lVar12 + 4;
        } while (iVar5 != local_90);
        local_8c = local_8c + 1;
        iVar8 = iVar8 + iVar5;
      } while (local_8c != iVar6);
    }
    memcpy(*(void **)(param_2 + 0x58),__s,(long)*(int *)(param_2 + 8));
    uVar17 = 1;
    rcFree(__s);
  }
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,9);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



/* rcMarkBoxArea(rcContext*, float const*, float const*, unsigned char, rcCompactHeightfield&) */

void rcMarkBoxArea(rcContext *param_1,float *param_2,float *param_3,uchar param_4,
                  rcCompactHeightfield *param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (param_1[9] == (rcContext)0x0) {
    fVar15 = *(float *)(param_5 + 0x1c);
    fVar17 = *(float *)(param_5 + 0x34);
    fVar14 = *param_2;
    fVar22 = param_2[1];
    fVar16 = param_2[2];
    fVar20 = *(float *)(param_5 + 0x20);
    fVar19 = *(float *)(param_5 + 0x38);
    fVar18 = *(float *)(param_5 + 0x24);
    fVar21 = param_3[1];
    iVar11 = (int)((*param_3 - fVar15) / fVar17);
    fVar13 = param_3[2];
    if (iVar11 < 0) {
      return;
    }
LAB_00100b63:
    iVar8 = *(int *)param_5;
    iVar10 = (int)((fVar14 - fVar15) / fVar17);
    iVar12 = (int)((fVar13 - fVar18) / fVar17);
    if ((iVar10 < iVar8) && (-1 < iVar12)) {
      iVar2 = *(int *)(param_5 + 4);
      iVar9 = (int)((fVar16 - fVar18) / fVar17);
      if (iVar9 < iVar2) {
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        if (iVar8 <= iVar11) {
          iVar11 = iVar8 + -1;
        }
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        if (iVar2 <= iVar12) {
          iVar12 = iVar2 + -1;
        }
        if (iVar9 <= iVar12) {
          do {
            iVar8 = iVar10;
            if (iVar10 <= iVar11) {
              do {
                puVar1 = (uint *)(*(long *)(param_5 + 0x40) +
                                 (long)(*(int *)param_5 * iVar9 + iVar8) * 4);
                uVar3 = *puVar1 & 0xffffff;
                uVar4 = (ulong)uVar3;
                uVar6 = *(byte *)((long)puVar1 + 3) + uVar3;
                if (uVar3 < uVar6) {
                  do {
                    while (((uVar3 = (uint)*(ushort *)(*(long *)(param_5 + 0x48) + uVar4 * 8),
                            (int)uVar3 <= (int)((fVar21 - fVar20) / fVar19) &&
                            ((int)((fVar22 - fVar20) / fVar19) <= (int)uVar3)) &&
                           (puVar7 = (uchar *)(*(long *)(param_5 + 0x58) + uVar4), *puVar7 != '\0'))
                          ) {
                      uVar4 = uVar4 + 1;
                      *puVar7 = param_4;
                      if ((int)uVar6 <= (int)uVar4) goto LAB_00100c70;
                    }
                    uVar4 = uVar4 + 1;
                  } while ((int)uVar4 < (int)uVar6);
                }
LAB_00100c70:
                iVar8 = iVar8 + 1;
              } while (iVar8 != iVar11 + 1);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar12 + 1);
        }
      }
    }
  }
  else {
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0x28) == rcContext::doStartTimer) {
      fVar15 = *(float *)(param_5 + 0x1c);
      fVar17 = *(float *)(param_5 + 0x34);
      fVar14 = *param_2;
      fVar22 = param_2[1];
      fVar16 = param_2[2];
      fVar20 = *(float *)(param_5 + 0x20);
      fVar19 = *(float *)(param_5 + 0x38);
      fVar18 = *(float *)(param_5 + 0x24);
      fVar21 = param_3[1];
      iVar11 = (int)((*param_3 - fVar15) / fVar17);
      fVar13 = param_3[2];
      if (iVar11 < 0) goto LAB_00100c90;
      goto LAB_00100b63;
    }
    (**(code **)(lVar5 + 0x28))(param_1,0xe);
    fVar14 = *param_2;
    fVar22 = param_2[1];
    fVar15 = *(float *)(param_5 + 0x1c);
    fVar17 = *(float *)(param_5 + 0x34);
    fVar16 = param_2[2];
    fVar20 = *(float *)(param_5 + 0x20);
    fVar19 = *(float *)(param_5 + 0x38);
    fVar18 = *(float *)(param_5 + 0x24);
    fVar21 = param_3[1];
    iVar11 = (int)((*param_3 - fVar15) / fVar17);
    fVar13 = param_3[2];
    if (-1 < iVar11) goto LAB_00100b63;
  }
  if (param_1[9] == (rcContext)0x0) {
    return;
  }
  lVar5 = *(long *)param_1;
LAB_00100c90:
  if (*(code **)(lVar5 + 0x30) == rcContext::doStopTimer) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(param_1,0xe);
  return;
}



/* rcMarkConvexPolyArea(rcContext*, float const*, int, float, float, unsigned char,
   rcCompactHeightfield&) */

void rcMarkConvexPolyArea
               (rcContext *param_1,float *param_2,int param_3,float param_4,float param_5,
               uchar param_6,rcCompactHeightfield *param_7)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uchar *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((param_1[9] == (rcContext)0x0) ||
     (*(code **)(*(long *)param_1 + 0x28) == rcContext::doStartTimer)) {
    fVar22 = *param_2;
    fVar20 = param_2[2];
    fVar5 = _LC2;
  }
  else {
    (**(code **)(*(long *)param_1 + 0x28))();
    fVar22 = *param_2;
    fVar20 = param_2[2];
    fVar5 = _LC2;
  }
  fVar21 = fVar22;
  fVar23 = fVar20;
  if (1 < param_3) {
    pfVar8 = param_2 + 3;
    do {
      fVar2 = *pfVar8;
      fVar3 = pfVar8[2];
      pfVar8 = pfVar8 + 3;
      if (fVar2 <= fVar21) {
        fVar21 = fVar2;
      }
      if (fVar3 <= fVar23) {
        fVar23 = fVar3;
      }
      if (fVar22 <= fVar2) {
        fVar22 = fVar2;
      }
      if (fVar20 <= fVar3) {
        fVar20 = fVar3;
      }
    } while (pfVar8 != param_2 + (ulong)(param_3 - 2) * 3 + 6);
  }
  fVar2 = *(float *)(param_7 + 0x34);
  fVar3 = *(float *)(param_7 + 0x20);
  fVar4 = *(float *)(param_7 + 0x38);
  iVar10 = (int)((fVar22 - *(float *)(param_7 + 0x1c)) / fVar2);
  _LC2 = fVar5;
  if (-1 < iVar10) {
    iVar19 = *(int *)param_7;
    iVar9 = (int)((fVar21 - *(float *)(param_7 + 0x1c)) / fVar2);
    iVar7 = (int)((fVar20 - *(float *)(param_7 + 0x24)) / fVar2);
    if ((iVar9 < iVar19) && (-1 < iVar7)) {
      iVar14 = *(int *)(param_7 + 4);
      iVar17 = (int)((fVar23 - *(float *)(param_7 + 0x24)) / fVar2);
      if (iVar17 < iVar14) {
        iVar12 = 0;
        if (-1 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar19 <= iVar10) {
          iVar10 = iVar19 + -1;
        }
        iVar19 = 0;
        if (-1 < iVar17) {
          iVar19 = iVar17;
        }
        if (iVar14 <= iVar7) {
          iVar7 = iVar14 + -1;
        }
        if (iVar19 <= iVar7) {
          do {
            iVar9 = iVar12;
            if (iVar12 <= iVar10) {
              do {
                puVar1 = (uint *)(*(long *)(param_7 + 0x40) +
                                 (long)(*(int *)param_7 * iVar19 + iVar9) * 4);
                uVar13 = *puVar1 & 0xffffff;
                uVar18 = *(byte *)((long)puVar1 + 3) + uVar13;
                uVar11 = (ulong)uVar13;
                if (uVar13 < uVar18) {
LAB_00100f95:
                  do {
                    puVar16 = (uchar *)(*(long *)(param_7 + 0x58) + uVar11);
                    if (((*puVar16 != '\0') &&
                        (uVar13 = (uint)*(ushort *)(*(long *)(param_7 + 0x48) + uVar11 * 8),
                        (int)uVar13 <= (int)((param_5 - fVar3) / fVar4))) &&
                       ((int)((param_4 - fVar3) / fVar4) <= (int)uVar13)) {
                      fVar22 = ((float)iVar19 + fVar5) * *(float *)(param_7 + 0x34) +
                               *(float *)(param_7 + 0x24);
                      if (0 < param_3) {
                        bVar6 = false;
                        pfVar8 = param_2;
                        fVar20 = param_2[(long)((param_3 + -1) * 3) + 2];
                        iVar14 = param_3 + -1;
                        iVar17 = 0;
                        do {
                          fVar21 = pfVar8[2];
                          if ((fVar22 < fVar21 != fVar22 < fVar20) &&
                             (((float)iVar9 + fVar5) * *(float *)(param_7 + 0x34) +
                              *(float *)(param_7 + 0x1c) <
                              ((fVar22 - fVar21) * (param_2[iVar14 * 3] - *pfVar8)) /
                              (fVar20 - fVar21) + *pfVar8)) {
                            bVar6 = (bool)(bVar6 ^ 1);
                          }
                          iVar15 = iVar17 + 1;
                          pfVar8 = pfVar8 + 3;
                          fVar20 = fVar21;
                          iVar14 = iVar17;
                          iVar17 = iVar15;
                        } while (param_3 != iVar15);
                        if (bVar6) {
                          uVar11 = uVar11 + 1;
                          *puVar16 = param_6;
                          if ((int)uVar18 <= (int)uVar11) break;
                          goto LAB_00100f95;
                        }
                      }
                    }
                    uVar11 = uVar11 + 1;
                  } while ((int)uVar11 < (int)uVar18);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 != iVar10 + 1);
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 != iVar7 + 1);
        }
      }
    }
  }
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
                    /* WARNING: Could not recover jumptable at 0x0010114e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x10);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rcOffsetPoly(float const*, int, float, float*, int) */

int rcOffsetPoly(float *param_1,int param_2,float param_3,float *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_2 < 1) {
LAB_00101530:
    iVar1 = 0;
  }
  else {
    iVar3 = 0;
    pfVar5 = param_1;
    fVar7 = _LC4;
    fVar9 = _LC2;
    fVar10 = _LC6;
    iVar4 = 0;
    do {
      while( true ) {
        fVar11 = *pfVar5;
        fVar12 = pfVar5[2];
        iVar1 = param_2 + -1 + iVar3;
        iVar3 = iVar3 + 1;
        fVar13 = fVar11 - param_1[(iVar1 % param_2) * 3];
        fVar8 = fVar12 - (param_1 + (iVar1 % param_2) * 3)[2];
        fVar6 = fVar13 * fVar13 + fVar8 * fVar8;
        if (__LC3 < fVar6) {
          fVar7 = (float)rcSqrt(fVar6);
          fVar11 = *pfVar5;
          fVar12 = pfVar5[2];
          fVar13 = fVar13 * (_LC4 / fVar7);
          fVar8 = fVar8 * (_LC4 / fVar7);
          fVar7 = _LC4;
          fVar9 = _LC2;
          fVar10 = _LC6;
        }
        fVar11 = param_1[(iVar3 % param_2) * 3] - fVar11;
        fVar12 = (param_1 + (iVar3 % param_2) * 3)[2] - fVar12;
        fVar6 = fVar11 * fVar11 + fVar12 * fVar12;
        if (__LC3 < fVar6) {
          fVar7 = (float)rcSqrt(fVar6);
          fVar11 = fVar11 * (_LC4 / fVar7);
          fVar12 = fVar12 * (_LC4 / fVar7);
          fVar7 = _LC4;
          fVar9 = _LC2;
          fVar10 = _LC6;
        }
        fVar15 = (fVar13 + fVar11) * fVar9;
        fVar6 = ((float)((uint)fVar8 ^ __LC5) - fVar12) * fVar9;
        fVar14 = fVar6 * fVar6 + fVar15 * fVar15;
        if (__LC3 < fVar14) {
          fVar6 = fVar6 * (fVar7 / fVar14);
          fVar15 = fVar15 * (fVar7 / fVar14);
        }
        if ((fVar7 <= fVar14 * fVar10 * fVar10) || (0.0 <= fVar8 * fVar11 - fVar13 * fVar12)) break;
        iVar1 = iVar4 + 2;
        if (param_5 <= iVar1) goto LAB_00101530;
        lVar2 = (long)(iVar4 * 3);
        fVar14 = (fVar7 - (fVar13 * fVar11 + fVar8 * fVar12)) * fVar9;
        param_4[lVar2] = (fVar13 * fVar14 + fVar8) * param_3 + *pfVar5;
        param_4[lVar2 + 1] = pfVar5[1];
        param_4[lVar2 + 2] = (fVar8 * fVar14 - fVar13) * param_3 + pfVar5[2];
        fVar6 = (float)((uint)fVar11 ^ __LC5);
        param_4[lVar2 + 3] = (fVar12 - fVar11 * fVar14) * param_3 + *pfVar5;
        param_4[lVar2 + 4] = pfVar5[1];
        param_4[lVar2 + 5] = (fVar6 - fVar12 * fVar14) * param_3 + pfVar5[2];
        pfVar5 = pfVar5 + 3;
        iVar4 = iVar1;
        if (iVar3 == param_2) {
          return iVar1;
        }
      }
      iVar1 = iVar4 + 1;
      if (param_5 <= iVar1) goto LAB_00101530;
      lVar2 = (long)(iVar4 * 3);
      param_4[lVar2] = *pfVar5 - fVar6 * param_3;
      param_4[lVar2 + 1] = pfVar5[1];
      param_4[lVar2 + 2] = pfVar5[2] - fVar15 * param_3;
      pfVar5 = pfVar5 + 3;
      iVar4 = iVar1;
    } while (iVar3 != param_2);
  }
  return iVar1;
}



/* rcMarkCylinderArea(rcContext*, float const*, float, float, unsigned char, rcCompactHeightfield&)
    */

void rcMarkCylinderArea(rcContext *param_1,float *param_2,float param_3,float param_4,uchar param_5,
                       rcCompactHeightfield *param_6)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uchar *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (param_1[9] == (rcContext)0x0) {
    fVar14 = *param_2;
    fVar15 = *(float *)(param_6 + 0x1c);
    fVar17 = *(float *)(param_6 + 0x34);
    fVar18 = param_2[1];
    fVar16 = param_2[2];
    fVar19 = *(float *)(param_6 + 0x38);
    fVar20 = *(float *)(param_6 + 0x20);
    fVar21 = *(float *)(param_6 + 0x24);
    iVar12 = (int)(((param_3 + fVar14) - fVar15) / fVar17);
    if (iVar12 < 0) {
      return;
    }
LAB_001015ca:
    fVar3 = _LC2;
    iVar9 = *(int *)param_6;
    iVar8 = (int)(((fVar14 - param_3) - fVar15) / fVar17);
    iVar4 = (int)(((param_3 + fVar16) - fVar21) / fVar17);
    if ((iVar8 < iVar9) && (-1 < iVar4)) {
      iVar2 = *(int *)(param_6 + 4);
      iVar11 = (int)(((fVar16 - param_3) - fVar21) / fVar17);
      if (iVar11 < iVar2) {
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        if (iVar9 <= iVar12) {
          iVar12 = iVar9 + -1;
        }
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        if (iVar2 <= iVar4) {
          iVar4 = iVar2 + -1;
        }
        if (iVar11 <= iVar4) {
          do {
            iVar9 = iVar8;
            if (iVar8 <= iVar12) {
              do {
                puVar1 = (uint *)(*(long *)(param_6 + 0x40) +
                                 (long)(*(int *)param_6 * iVar11 + iVar9) * 4);
                uVar5 = *puVar1 & 0xffffff;
                uVar6 = (ulong)uVar5;
                uVar13 = *(byte *)((long)puVar1 + 3) + uVar5;
                if (uVar5 < uVar13) {
                  do {
                    while ((((puVar10 = (uchar *)(*(long *)(param_6 + 0x58) + uVar6),
                             *puVar10 != '\0' &&
                             (uVar5 = (uint)*(ushort *)(*(long *)(param_6 + 0x48) + uVar6 * 8),
                             (int)uVar5 <= (int)(((param_4 + fVar18) - fVar20) / fVar19))) &&
                            ((int)((fVar18 - fVar20) / fVar19) <= (int)uVar5)) &&
                           (fVar14 = (((float)iVar9 + fVar3) * *(float *)(param_6 + 0x34) +
                                     *(float *)(param_6 + 0x1c)) - *param_2,
                           fVar15 = (((float)iVar11 + fVar3) * *(float *)(param_6 + 0x34) +
                                    *(float *)(param_6 + 0x24)) - param_2[2],
                           fVar14 * fVar14 + fVar15 * fVar15 < param_3 * param_3))) {
                      uVar6 = uVar6 + 1;
                      *puVar10 = param_5;
                      if ((int)uVar13 <= (int)uVar6) goto LAB_00101750;
                    }
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < (int)uVar13);
                }
LAB_00101750:
                iVar9 = iVar9 + 1;
              } while (iVar9 != iVar12 + 1);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 != iVar4 + 1);
        }
      }
    }
  }
  else {
    lVar7 = *(long *)param_1;
    if (*(code **)(lVar7 + 0x28) == rcContext::doStartTimer) {
      fVar14 = *param_2;
      fVar15 = *(float *)(param_6 + 0x1c);
      fVar17 = *(float *)(param_6 + 0x34);
      fVar18 = param_2[1];
      fVar16 = param_2[2];
      fVar19 = *(float *)(param_6 + 0x38);
      fVar20 = *(float *)(param_6 + 0x20);
      fVar21 = *(float *)(param_6 + 0x24);
      iVar12 = (int)(((param_3 + fVar14) - fVar15) / fVar17);
      if (iVar12 < 0) goto LAB_00101777;
      goto LAB_001015ca;
    }
    (**(code **)(lVar7 + 0x28))(param_1,0xf);
    fVar14 = *param_2;
    fVar15 = *(float *)(param_6 + 0x1c);
    fVar17 = *(float *)(param_6 + 0x34);
    fVar18 = param_2[1];
    fVar16 = param_2[2];
    fVar20 = *(float *)(param_6 + 0x20);
    fVar19 = *(float *)(param_6 + 0x38);
    fVar21 = *(float *)(param_6 + 0x24);
    iVar12 = (int)(((fVar14 + param_3) - fVar15) / fVar17);
    if (-1 < iVar12) goto LAB_001015ca;
  }
  if (param_1[9] == (rcContext)0x0) {
    return;
  }
  lVar7 = *(long *)param_1;
LAB_00101777:
  if (*(code **)(lVar7 + 0x30) == rcContext::doStopTimer) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))(param_1,0xf);
  return;
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




bool IsValidSimpleFormat(long param_1)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((((*(int *)(param_1 + 0x28) != 0) && (bVar2 = false, 0 < *(int *)(param_1 + 0x34))) &&
      (0 < *(int *)(param_1 + 0x38))) &&
     (((lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0 || (*(int *)(param_1 + 0x28) != 2)) &&
      (bVar2 = false, 0 < *(int *)(lVar1 + 8))))) {
    bVar2 = 0 < *(int *)(lVar1 + 0xc);
  }
  return bVar2;
}



undefined8 IsValidExtendedFormat(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x48);
  if (iVar1 == 0) {
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if ((((0 < iVar2) && (iVar3 = *(int *)(param_1 + 0x38), 0 < iVar3)) &&
      (-1 < *(int *)(param_1 + 0x3c))) &&
     (((plVar4 != (long *)0x0 || (iVar1 != 2)) && ((*(uint *)(param_1 + 0x30) & 0xffffffc1) == 0))))
  {
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    iVar8 = (int)plVar4[4];
    uVar5 = *(uint *)(param_1 + 0x30) & 2;
    if ((iVar8 < 2) || (uVar5 != 0)) {
LAB_001000b5:
      if (*(int *)((long)plVar4 + 0x24) == 0) goto LAB_00100152;
      do {
        if (plVar4[8] == 0) {
          if (plVar4[6] == 0) {
            return 0;
          }
        }
        else if ((ulong)plVar4[5] < (ulong)plVar4[7]) {
          return 0;
        }
        iVar6 = (int)plVar4[1];
        if ((iVar6 < 1) || (iVar7 = *(int *)((long)plVar4 + 0xc), iVar7 < 1)) {
          return 0;
        }
        while( true ) {
          if (uVar5 == 0) {
            if (iVar3 != iVar7 || iVar2 != iVar6) {
              return 0;
            }
            if (*plVar4 != 0) {
              return 0;
            }
          }
          else {
            if ((int)*plVar4 < 0) {
              return 0;
            }
            if (*(int *)((long)plVar4 + 4) < 0) {
              return 0;
            }
            if (iVar2 < (int)*plVar4 + iVar6) {
              return 0;
            }
            if (iVar3 < *(int *)((long)plVar4 + 4) + iVar7) {
              return 0;
            }
          }
          plVar4 = (long *)plVar4[9];
          if (plVar4 == (long *)0x0) {
            return 1;
          }
          iVar6 = (int)plVar4[4];
          if (iVar6 != iVar8) {
            iVar8 = iVar6;
          }
          if (iVar6 < 2) goto LAB_001000b5;
          if (uVar5 == 0) {
            return 0;
          }
          if (*(int *)((long)plVar4 + 0x24) != 0) break;
LAB_00100152:
          if (iVar1 == 2) {
            return 0;
          }
          if (((plVar4[8] != 0) && (plVar4[6] != 0)) && ((ulong)plVar4[5] < (ulong)plVar4[7])) {
            return 0;
          }
          if (plVar4[9] != 0) {
            return 0;
          }
          iVar6 = (int)plVar4[1];
          if ((iVar6 < 1) || (iVar7 = *(int *)((long)plVar4 + 0xc), iVar7 < 1)) {
            return 1;
          }
        }
      } while( true );
    }
  }
  return 0;
}



bool SetFrame(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = param_2[9];
  if (((lVar4 != 0) && (-1 < param_1)) && (iVar1 = *(int *)(lVar4 + 0x44), param_1 <= iVar1)) {
    puVar5 = *(undefined8 **)(lVar4 + 0x48);
    if (param_1 == 0) {
      param_1 = iVar1;
    }
    for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)puVar5[9]) {
      if (param_1 == *(int *)(puVar5 + 4)) {
        lVar6 = puVar5[8];
        lVar10 = puVar5[6];
        lVar8 = puVar5[5];
        lVar9 = lVar8;
        if (lVar6 != 0) {
          lVar9 = puVar5[7];
          if (lVar8 != 0) {
            lVar8 = lVar8 - (lVar9 + lVar6);
          }
          lVar10 = lVar6 + lVar10 + lVar8;
        }
        lVar9 = *(long *)(lVar4 + 0x20) + lVar9;
        if (lVar9 != 0) {
          uVar7 = *puVar5;
          *param_2 = CONCAT44(iVar1,*(undefined4 *)(puVar5 + 4));
          param_2[1] = uVar7;
          param_2[2] = puVar5[1];
          *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar5 + 2);
          *(undefined4 *)(param_2 + 3) = *(undefined4 *)((long)puVar5 + 0x14);
          *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)(puVar5 + 3);
          uVar2 = *(undefined4 *)((long)puVar5 + 0x1c);
          uVar3 = *(undefined4 *)((long)puVar5 + 0x24);
          param_2[5] = lVar9;
          *(undefined4 *)((long)param_2 + 0x3c) = uVar2;
          *(undefined4 *)(param_2 + 4) = uVar3;
          param_2[6] = lVar10;
        }
        return lVar9 != 0;
      }
    }
  }
  return false;
}



ulong SetChunk(int *param_1,uint param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  
  lVar1 = *(long *)(param_3 + 0xc);
  if ((param_1 != (int *)0x0 && -1 < (int)param_2) && (lVar1 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x58);
    lVar1 = *(long *)(lVar1 + 0x20);
    if (plVar8 != (long *)0x0) {
      uVar5 = 0;
      plVar4 = plVar8;
      do {
        lVar2 = *plVar4;
        plVar4 = (long *)plVar4[2];
        uVar6 = (int)uVar5 + (uint)(*(int *)(lVar1 + lVar2) == *param_1);
        uVar5 = (ulong)uVar6;
      } while (plVar4 != (long *)0x0);
      if (uVar6 == 0) {
        return uVar5;
      }
      uVar7 = uVar6;
      if ((param_2 == 0) || (uVar7 = param_2, (int)param_2 <= (int)uVar6)) {
        uVar3 = 0;
        while( true ) {
          if (*param_1 == *(int *)(lVar1 + *plVar8)) {
            uVar3 = uVar3 + 1;
          }
          if (uVar7 == uVar3) break;
          plVar8 = (long *)plVar8[2];
          if (plVar8 == (long *)0x0) {
            uVar5 = SetChunk_cold();
            return uVar5;
          }
        }
        *(long *)(param_3 + 2) = lVar1 + 8 + *plVar8;
        lVar1 = plVar8[1];
        param_3[1] = uVar6;
        *param_3 = uVar7;
        *(long *)(param_3 + 4) = lVar1 + -8;
        return 1;
      }
    }
  }
  return 0;
}



undefined1 StoreFrame_part_0(undefined4 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined1 uVar14;
  undefined8 local_68;
  uint local_60;
  long local_40;
  
  bVar5 = false;
  lVar13 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar7 = false;
  do {
    piVar3 = (int *)(param_2[4] + lVar13);
    iVar8 = *piVar3;
    *param_2 = lVar13 + 4;
    uVar4 = *(uint *)(param_2[4] + 4 + lVar13);
    lVar1 = lVar13 + 8;
    *param_2 = lVar1;
    if (0xfffffff6 < uVar4) {
LAB_001005a0:
      uVar14 = 2;
      break;
    }
    lVar9 = param_2[2];
    uVar10 = (ulong)(uVar4 + 1 & 0xfffffffe);
    uVar11 = param_2[1] - lVar1;
    uVar12 = uVar11;
    if (uVar10 <= uVar11) {
      uVar12 = uVar10;
    }
    lVar2 = uVar12 + 8;
    if ((ulong)(lVar9 - lVar1) < uVar10) goto LAB_001005a0;
    uVar14 = uVar11 < uVar10;
    if (iVar8 != 0x48504c41) {
      if (iVar8 == 0x4c385056) {
        if (bVar7) goto LAB_001005a0;
      }
      else if (iVar8 != 0x20385056) goto LAB_00100570;
      if (bVar5) goto LAB_00100570;
      iVar8 = WebPGetFeaturesInternal(piVar3,lVar2,&local_68,0x209);
      if ((iVar8 != 7) || (!(bool)uVar14)) {
        if (iVar8 != 0) goto LAB_001005a0;
        *(long *)(param_3 + 0x28) = lVar13;
        bVar5 = true;
        *(long *)(param_3 + 0x30) = lVar2;
        lVar9 = param_2[2];
        *(undefined8 *)(param_3 + 8) = local_68;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | local_60;
        *(undefined4 *)(param_3 + 0x20) = param_1;
        lVar13 = uVar12 + *param_2;
        bVar6 = false;
        *(uint *)(param_3 + 0x24) = (uint)(uVar10 <= uVar11);
        *param_2 = lVar13;
        goto LAB_0010051a;
      }
LAB_00100580:
      uVar14 = 1;
      break;
    }
    if (bVar7) {
LAB_00100570:
      *param_2 = lVar13;
      bVar6 = true;
    }
    else {
      *(long *)(param_3 + 0x40) = lVar2;
      bVar6 = false;
      *(long *)(param_3 + 0x38) = lVar13;
      lVar13 = uVar12 + lVar1;
      *(undefined4 *)(param_3 + 0x10) = 1;
      *(undefined4 *)(param_3 + 0x20) = param_1;
      bVar7 = true;
      *param_2 = lVar13;
    }
LAB_0010051a:
    if (lVar13 == lVar9) break;
    if ((ulong)(param_2[1] - lVar13) < 8) goto LAB_00100580;
  } while (!bVar6 && !(bool)uVar14);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



int ParseSingleImage(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((param_1[9] == 0) && (7 < (ulong)(param_1[2] - *param_1))) {
    iVar4 = 1;
    if ((ulong)(param_1[1] - *param_1) < 8) {
      return 1;
    }
    lVar5 = WebPSafeCalloc(1,0x50);
    if (lVar5 != 0) {
      if (((ulong)(param_1[1] - *param_1) < 8) ||
         (iVar4 = StoreFrame_part_0(1,param_1,lVar5), iVar4 != 2)) {
        uVar1 = *(uint *)(param_1 + 6);
        if (((uVar1 & 0x10) == 0) && (*(long *)(lVar5 + 0x40) != 0)) {
          *(undefined4 *)(lVar5 + 0x10) = 0;
          *(undefined1 (*) [16])(lVar5 + 0x38) = (undefined1  [16])0x0;
        }
        if (((*(int *)((long)param_1 + 0x2c) == 0) && (0 < *(int *)(lVar5 + 8))) &&
           (0 < *(int *)(lVar5 + 0xc))) {
          *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)(lVar5 + 8);
          iVar2 = *(int *)(lVar5 + 0x10);
          *(undefined4 *)(param_1 + 5) = 1;
          *(uint *)(param_1 + 6) = uVar1 | (uint)(iVar2 != 0) << 4;
        }
        lVar3 = *(long *)param_1[10];
        if ((lVar3 == 0) || (*(int *)(lVar3 + 0x24) != 0)) {
          *(long *)param_1[10] = lVar5;
          *(undefined8 *)(lVar5 + 0x48) = 0;
          param_1[10] = lVar5 + 0x48;
          *(undefined4 *)((long)param_1 + 0x44) = 1;
          return iVar4;
        }
      }
      WebPSafeFree(lVar5);
    }
  }
  return 2;
}



int ParseVP8X(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  
  lVar12 = param_1[1];
  lVar21 = *param_1;
  if ((ulong)(lVar12 - lVar21) < 8) {
LAB_00100755:
    iVar15 = 1;
  }
  else {
    lVar14 = param_1[4];
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    *param_1 = lVar21 + 4;
    lVar9 = lVar21 + 8;
    iVar15 = *(int *)(lVar14 + 4 + lVar21);
    *param_1 = lVar9;
    if (iVar15 - 10U < 0xffffffed) {
      lVar18 = param_1[2];
      uVar13 = iVar15 + 1U & 0xfffffffe;
      if ((ulong)uVar13 <= (ulong)(lVar18 - lVar9)) {
        if ((ulong)(lVar12 - lVar9) < (ulong)uVar13) goto LAB_00100755;
        bVar1 = *(byte *)(lVar14 + 8 + lVar21);
        *(uint *)(param_1 + 6) = (uint)bVar1;
        *param_1 = lVar21 + 0xc;
        pbVar17 = (byte *)(lVar21 + 0xc + lVar14);
        bVar2 = pbVar17[1];
        bVar3 = pbVar17[2];
        bVar4 = *pbVar17;
        *param_1 = lVar21 + 0xf;
        pbVar17 = (byte *)(lVar21 + 0xf + lVar14);
        iVar19 = ((uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4) + 1;
        *(int *)((long)param_1 + 0x34) = iVar19;
        bVar2 = pbVar17[1];
        bVar3 = pbVar17[2];
        bVar4 = *pbVar17;
        *param_1 = lVar21 + 0x12;
        iVar15 = ((uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4) + 1;
        *(int *)(param_1 + 7) = iVar15;
        if ((ulong)((long)iVar19 * (long)iVar15) >> 0x20 == 0) {
          *(undefined4 *)(param_1 + 5) = 1;
          lVar21 = (ulong)(uVar13 - 10) + lVar21 + 0x12;
          *param_1 = lVar21;
          if (7 < (ulong)(lVar18 - lVar21)) {
            if ((ulong)(lVar12 - lVar21) < 8) goto LAB_00100755;
            bVar8 = false;
            while( true ) {
              uVar13 = *(uint *)(lVar14 + lVar21);
              *param_1 = lVar21 + 4;
              uVar5 = *(uint *)(lVar14 + 4 + lVar21);
              lVar9 = lVar21 + 8;
              *param_1 = lVar9;
              if (0xfffffff6 < uVar5) break;
              uVar22 = uVar5 + 1 & 0xfffffffe;
              uVar20 = (ulong)uVar22;
              if ((ulong)(lVar18 - lVar9) < uVar20) break;
              if (uVar13 == 0x48504c41) {
LAB_00100c30:
                if ((!bVar8) && ((bVar1 >> 1 & 1) == 0)) {
                  *param_1 = lVar21;
                  iVar15 = ParseSingleImage(param_1);
                  lVar18 = param_1[2];
                  lVar9 = *param_1;
                  goto LAB_0010091b;
                }
                break;
              }
              if (uVar13 < 0x48504c42) {
                if (uVar13 == 0x46495845) {
                  uVar13 = *(uint *)(param_1 + 6) >> 3 & 1;
                }
                else {
                  if (0x46495845 < uVar13) {
                    if (uVar13 != 0x464d4e41) goto LAB_00100bbc;
                    if (bVar8) {
                      if ((0xf < (ulong)(lVar18 - lVar9)) && (0xf < uVar22)) {
                        iVar15 = 1;
                        if ((ulong)(lVar12 - lVar9) < 0x10) goto LAB_0010091b;
                        uVar13 = *(uint *)(param_1 + 6);
                        piVar10 = (int *)WebPSafeCalloc(1,0x50);
                        if (piVar10 != (int *)0x0) {
                          lVar12 = *param_1;
                          lVar21 = param_1[4];
                          pbVar17 = (byte *)(lVar21 + lVar12);
                          bVar2 = pbVar17[1];
                          bVar3 = pbVar17[2];
                          bVar4 = *pbVar17;
                          *param_1 = lVar12 + 3;
                          pbVar17 = (byte *)(lVar12 + 3 + lVar21);
                          *piVar10 = ((uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4) * 2;
                          bVar2 = pbVar17[1];
                          bVar3 = pbVar17[2];
                          bVar4 = *pbVar17;
                          *param_1 = lVar12 + 6;
                          pbVar17 = (byte *)(lVar12 + 6 + lVar21);
                          piVar10[1] = ((uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4) * 2;
                          bVar2 = pbVar17[1];
                          bVar3 = pbVar17[2];
                          bVar4 = *pbVar17;
                          *param_1 = lVar12 + 9;
                          pbVar17 = (byte *)(lVar12 + 9 + lVar21);
                          iVar19 = ((uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4) + 1;
                          piVar10[2] = iVar19;
                          bVar2 = pbVar17[1];
                          bVar3 = pbVar17[2];
                          bVar4 = *pbVar17;
                          *param_1 = lVar12 + 0xc;
                          pbVar17 = (byte *)(lVar12 + 0xc + lVar21);
                          iVar16 = ((uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4) + 1;
                          piVar10[3] = iVar16;
                          bVar2 = pbVar17[1];
                          bVar3 = pbVar17[2];
                          bVar4 = *pbVar17;
                          *param_1 = lVar12 + 0xf;
                          piVar10[5] = (uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
                          bVar2 = *(byte *)(lVar21 + 0xf + lVar12);
                          lVar12 = lVar12 + 0x10;
                          *param_1 = lVar12;
                          piVar10[6] = bVar2 & 1;
                          piVar10[7] = bVar2 >> 1 & 1;
                          if ((ulong)((long)iVar19 * (long)iVar16) >> 0x20 == 0) {
                            if ((((ulong)(param_1[1] - lVar12) < 8) ||
                                ((ulong)(param_1[1] - lVar12) < (ulong)(uVar22 - 0x10))) ||
                               ((iVar15 = StoreFrame_part_0(*(int *)((long)param_1 + 0x44) + 1,
                                                            param_1), iVar15 != 2 &&
                                ((ulong)(*param_1 - lVar12) <= (ulong)(uVar22 - 0x10))))) {
                              if (((uVar13 & 2) != 0) && (0 < piVar10[8])) {
                                lVar12 = *(long *)param_1[10];
                                if ((lVar12 == 0) || (*(int *)(lVar12 + 0x24) != 0)) {
                                  *(long *)param_1[10] = (long)piVar10;
                                  piVar10 = piVar10 + 0x12;
                                  lVar9 = *param_1;
                                  piVar10[0] = 0;
                                  piVar10[1] = 0;
                                  lVar18 = param_1[2];
                                  *(int *)((long)param_1 + 0x44) =
                                       *(int *)((long)param_1 + 0x44) + 1;
                                  param_1[10] = (long)piVar10;
                                  goto LAB_0010091b;
                                }
                                goto LAB_00100b97;
                              }
                            }
                            else {
LAB_00100b97:
                              iVar15 = 2;
                            }
                            WebPSafeFree(piVar10);
                            lVar9 = *param_1;
                            lVar18 = param_1[2];
                            goto LAB_0010091b;
                          }
                          WebPSafeFree(piVar10);
                        }
                        lVar9 = *param_1;
                        lVar18 = param_1[2];
                      }
                      iVar15 = 2;
                      goto LAB_0010091b;
                    }
                    break;
                  }
                  if (uVar13 == 0x20385056) goto LAB_00100c30;
                  if (uVar13 != 0x20504d58) goto LAB_00100bbc;
                  uVar13 = *(uint *)(param_1 + 6) >> 2 & 1;
                }
LAB_001008ff:
                if ((ulong)(lVar12 - lVar9) < uVar20) {
LAB_001009e0:
                  iVar15 = 1;
                }
                else {
                  if (uVar13 != 0) {
LAB_00100bc8:
                    plVar11 = (long *)WebPSafeCalloc(1,0x18);
                    if (plVar11 == (long *)0x0) break;
                    plVar7 = (long *)param_1[0xc];
                    lVar18 = param_1[2];
                    *plVar11 = lVar21;
                    plVar11[1] = (ulong)(uVar5 + 8);
                    *plVar7 = (long)plVar11;
                    plVar11[2] = 0;
                    param_1[0xc] = (long)(plVar11 + 2);
                    lVar9 = *param_1;
                  }
LAB_00100913:
                  lVar9 = lVar9 + uVar20;
                  iVar15 = 0;
                  *param_1 = lVar9;
                }
              }
              else {
                if (uVar13 == 0x50434349) {
                  uVar13 = *(uint *)(param_1 + 6) >> 5 & 1;
                  goto LAB_001008ff;
                }
                if (0x50434349 < uVar13) {
                  if (uVar13 != 0x58385056) {
LAB_00100bbc:
                    if (uVar20 <= (ulong)(lVar12 - lVar9)) goto LAB_00100bc8;
                    goto LAB_001009e0;
                  }
                  break;
                }
                if (uVar13 == 0x4c385056) goto LAB_00100c30;
                if (uVar13 != 0x4d494e41) goto LAB_00100bbc;
                if (uVar22 < 6) break;
                iVar15 = 1;
                if (uVar20 <= (ulong)(lVar12 - lVar9)) {
                  if (bVar8) goto LAB_00100913;
                  uVar6 = *(undefined4 *)(lVar14 + lVar9);
                  iVar15 = 0;
                  bVar8 = true;
                  *param_1 = lVar21 + 0xc;
                  *(undefined4 *)(param_1 + 8) = uVar6;
                  *(uint *)((long)param_1 + 0x3c) = (uint)*(ushort *)(lVar14 + 0xc + lVar21);
                  lVar9 = lVar21 + 0xe + (ulong)(uVar22 - 6);
                  *param_1 = lVar9;
                }
              }
LAB_0010091b:
              if (lVar9 == lVar18) {
                return iVar15;
              }
              lVar12 = param_1[1];
              if ((ulong)(lVar12 - lVar9) < 8) goto LAB_00100755;
              if (iVar15 != 0) {
                return iVar15;
              }
              lVar14 = param_1[4];
              lVar21 = lVar9;
            }
          }
        }
      }
    }
    iVar15 = 2;
  }
  return iVar15;
}



undefined8 WebPGetDemuxVersion(void)

{
  return 0x10400;
}



undefined8 * WebPDemuxInternal(undefined8 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  long in_FS_OFFSET;
  ulong uStack_80;
  undefined8 local_58;
  uint local_50;
  long local_30;
  ulong uVar10;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xffffffff;
  }
  if ((((param_4 >> 8 == 1) && (param_1 != (undefined8 *)0x0)) &&
      (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) && (uStack_80 = param_1[1], uStack_80 != 0))
  {
    if (uStack_80 < 0x14) {
LAB_00100f08:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
    }
    else if (((*piVar1 == 0x46464952) && (piVar1[2] == 0x50424557)) && (piVar1[1] - 8U < 0xffffffef)
            ) {
      uVar9 = piVar1[1] + 8;
      uVar10 = (ulong)uVar9;
      if (uVar10 < uStack_80) {
        uStack_80 = (ulong)uVar9;
      }
      else if ((uStack_80 < uVar10) && (param_2 == 0)) goto LAB_00100db8;
      puVar5 = (undefined8 *)WebPSafeCalloc(1,0x68);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 5) = 0;
        piVar8 = &kMasterChunks;
        *(undefined8 *)((long)puVar5 + 0x34) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar5 + 0x3c) = 0xffffffff00000001;
        puVar5[10] = puVar5 + 9;
        puVar5[0xc] = puVar5 + 0xb;
        puVar5[4] = piVar1;
        *puVar5 = 0xc;
        puVar5[1] = uStack_80;
        pcVar6 = ParseSingleImage;
        puVar5[2] = uVar10;
        puVar5[3] = uStack_80;
        do {
          if (*piVar8 == piVar1[3]) {
            iVar4 = (*pcVar6)(puVar5);
            if (iVar4 == 0) {
              *(undefined4 *)(puVar5 + 5) = 2;
LAB_00100ede:
              iVar4 = (**(code **)(piVar8 + 4))(puVar5);
              if (iVar4 != 0) {
                if (param_3 != (undefined4 *)0x0) {
                  *param_3 = *(undefined4 *)(puVar5 + 5);
                }
                goto LAB_00100dba;
              }
            }
            else if ((iVar4 != 1 || uStack_80 < uVar10) && (iVar4 != 2)) goto LAB_00100ede;
            *(undefined4 *)(puVar5 + 5) = 0xffffffff;
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 0xffffffff;
            }
            goto LAB_0010103b;
          }
          pcVar6 = *(code **)(piVar8 + 8);
          piVar8 = piVar8 + 6;
        } while (pcVar6 != (code *)0x0);
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0;
        }
LAB_0010103b:
        lVar7 = puVar5[9];
        while (lVar7 != 0) {
          lVar2 = *(long *)(lVar7 + 0x48);
          WebPSafeFree(lVar7);
          lVar7 = lVar2;
        }
        lVar7 = puVar5[0xb];
        while (lVar7 != 0) {
          lVar2 = *(long *)(lVar7 + 0x10);
          WebPSafeFree(lVar7);
          lVar7 = lVar2;
        }
        WebPSafeFree(puVar5);
      }
    }
    else {
      iVar4 = WebPGetFeaturesInternal(piVar1,uStack_80,&local_58,0x209);
      if (iVar4 == 0) {
        puVar5 = (undefined8 *)WebPSafeCalloc(1,0x68);
        lVar7 = WebPSafeCalloc(1,0x50);
        if ((puVar5 != (undefined8 *)0x0) && (lVar7 != 0)) {
          *(undefined8 *)((long)puVar5 + 0x34) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar5 + 0x3c) = 0xffffffff00000001;
          uVar3 = _LC2;
          puVar5[10] = puVar5 + 9;
          puVar5[0xc] = puVar5 + 0xb;
          *(undefined4 *)(puVar5 + 5) = 0;
          puVar5[4] = piVar1;
          uVar9 = *(uint *)(lVar7 + 0x10);
          *puVar5 = 0;
          puVar5[1] = uStack_80;
          puVar5[2] = 0;
          puVar5[3] = uStack_80;
          *(undefined8 *)(lVar7 + 0x20) = uVar3;
          lVar2 = puVar5[9];
          *(undefined8 *)(lVar7 + 8) = local_58;
          uVar9 = uVar9 | local_50;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(ulong *)(lVar7 + 0x30) = uStack_80;
          *(uint *)(lVar7 + 0x10) = uVar9;
          if ((lVar2 == 0) || (*(int *)(lVar2 + 0x24) != 0)) {
            puVar5[9] = lVar7;
            *(undefined8 *)(lVar7 + 0x48) = 0;
            puVar5[10] = (undefined8 *)(lVar7 + 0x48);
            *(undefined4 *)(puVar5 + 5) = 2;
            *(undefined8 *)((long)puVar5 + 0x34) = local_58;
            *(uint *)(puVar5 + 6) = *(uint *)(puVar5 + 6) | (uint)(uVar9 != 0) << 4;
            *(undefined4 *)((long)puVar5 + 0x44) = 1;
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 2;
            }
            goto LAB_00100dba;
          }
        }
        WebPSafeFree(puVar5);
        WebPSafeFree(lVar7);
      }
      else if (iVar4 == 7) goto LAB_00100f08;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0xffffffff;
      }
    }
  }
LAB_00100db8:
  puVar5 = (undefined8 *)0x0;
LAB_00100dba:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void WebPDemuxDelete(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    while (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 0x48);
      WebPSafeFree(lVar2);
      lVar2 = lVar1;
    }
    lVar2 = *(long *)(param_1 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 0x10);
      WebPSafeFree(lVar2);
      lVar2 = lVar1;
    }
    WebPSafeFree(param_1);
    return;
  }
  return;
}



undefined4 WebPDemuxGetI(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    switch(param_2) {
    case 0:
      return *(undefined4 *)(param_1 + 0x30);
    case 1:
      return *(undefined4 *)(param_1 + 0x34);
    case 2:
      return *(undefined4 *)(param_1 + 0x38);
    case 3:
      return *(undefined4 *)(param_1 + 0x3c);
    case 4:
      return *(undefined4 *)(param_1 + 0x40);
    case 5:
      return *(undefined4 *)(param_1 + 0x44);
    default:
      return 0;
    }
  }
  return 0;
}



undefined8 WebPDemuxGetFrame(undefined8 param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  
  if (param_3 != (undefined1 (*) [16])0x0) {
    param_3[4] = (undefined1  [16])0x0;
    *(undefined8 *)(param_3[4] + 8) = param_1;
    *param_3 = (undefined1  [16])0x0;
    param_3[1] = (undefined1  [16])0x0;
    param_3[2] = (undefined1  [16])0x0;
    param_3[3] = (undefined1  [16])0x0;
    uVar1 = SetFrame(param_2,param_3);
    return uVar1;
  }
  return 0;
}



undefined8 WebPDemuxNextFrame(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = SetFrame(*param_1 + 1,param_1);
    return uVar1;
  }
  return 0;
}



undefined8 WebPDemuxPrevFrame(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (1 < *param_1)) {
    uVar1 = SetFrame(*param_1 + -1,param_1);
    return uVar1;
  }
  return 0;
}



void WebPDemuxReleaseIterator(void)

{
  return;
}



undefined8
WebPDemuxGetChunk(undefined8 param_1,undefined8 param_2,undefined4 param_3,
                 undefined1 (*param_4) [16])

{
  undefined8 uVar1;
  
  if (param_4 != (undefined1 (*) [16])0x0) {
    *(undefined8 *)param_4[3] = param_1;
    *param_4 = (undefined1  [16])0x0;
    param_4[1] = (undefined1  [16])0x0;
    param_4[2] = (undefined1  [16])0x0;
    uVar1 = SetChunk(param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



undefined8 WebPDemuxNextChunk(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = SetChunk(*(long *)(param_1 + 2) + -8,*param_1 + 1,param_1);
  return uVar1;
}



undefined8 WebPDemuxPrevChunk(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (1 < *param_1)) {
    uVar1 = SetChunk(*(long *)(param_1 + 2) + -8,*param_1 + -1,param_1);
    return uVar1;
  }
  return 0;
}



void WebPDemuxReleaseChunkIterator(void)

{
  return;
}



void SetChunk_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



undefined8 WebPDemuxGetI_cold(void)

{
  return 0;
}



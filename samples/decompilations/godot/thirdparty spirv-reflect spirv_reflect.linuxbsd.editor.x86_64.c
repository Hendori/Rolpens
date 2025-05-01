
int SortCompareUint32(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



int SortCompareAccessedVariable(long param_1,long param_2)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc);
}



int SortCompareFunctions(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



int SortCompareDescriptorBinding(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[4] - param_2[4];
  if (iVar1 == 0) {
    iVar1 = *param_1 - *param_2;
  }
  return iVar1;
}



undefined8
TraverseCallGraph(long param_1,undefined4 *param_2,long *param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x50) < param_5) {
    return 0xf;
  }
  lVar1 = *param_3;
  *param_3 = lVar1 + 1;
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + lVar1 * 4) = *param_2;
  }
  if (param_2[1] != 0) {
    lVar1 = *(long *)(param_2 + 4);
    uVar3 = 0;
    do {
      uVar2 = TraverseCallGraph(param_1,*(undefined8 *)(lVar1 + uVar3 * 8),param_3,param_4,
                                param_5 + 1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_2[1]);
  }
  return 0;
}



int SortCompareDescriptorSet(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



void SafeFreeTypes(long param_1)

{
  ulong uVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x168) == 0) &&
       (__ptr = *(void **)(param_1 + 0x170), __ptr != (void *)0x0)) {
      if (*(int *)(param_1 + 0x16c) != 0) {
        lVar3 = 0;
        uVar1 = 0;
        do {
          lVar2 = (long)__ptr + lVar3;
          uVar1 = uVar1 + 1;
          lVar3 = lVar3 + 0x178;
          SafeFreeTypes(lVar2);
          __ptr = *(void **)(param_1 + 0x170);
        } while (uVar1 < *(uint *)(param_1 + 0x16c));
      }
      free(__ptr);
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    return;
  }
  return;
}



bool UserTypeMatches(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  
  __n = strlen(param_2);
  iVar2 = strncmp(param_1,param_2,__n);
  bVar1 = false;
  if (iVar2 == 0) {
    bVar1 = param_1[__n] == ':' || param_1[__n] == '\0';
  }
  return bVar1;
}



undefined8 ReadStr_constprop_0(ulong *param_1,uint param_2,int param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    return 0xb;
  }
  if ((ulong)(param_2 + param_3) < *param_1) {
    if (param_3 << 2 != 0) {
      pcVar1 = (char *)(param_1[1] + (ulong)param_2 * 4);
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        if (*pcVar1 == '\0') {
          *param_4 = iVar2;
          return 0;
        }
        pcVar1 = pcVar1 + 1;
      } while (param_3 << 2 != iVar2);
      return 0xb;
    }
  }
  return 0xb;
}



undefined8
IntersectSortedAccessedVariable_constprop_0
          (long param_1,long param_2,uint *param_3,long param_4,undefined8 *param_5,size_t *param_6)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  size_t __nmemb;
  
  *param_5 = 0;
  *param_6 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 != (uint *)0x0) {
    puVar1 = param_3 + param_4;
    lVar2 = param_1 + param_2 * 0x10;
    if ((param_1 != lVar2) && (param_3 != puVar1)) {
      __nmemb = 0;
      lVar5 = param_1;
      puVar6 = param_3;
      do {
        uVar3 = *puVar6;
        if (*(uint *)(lVar5 + 0xc) < uVar3) {
LAB_00100298:
          lVar5 = lVar5 + 0x10;
        }
        else {
          puVar6 = puVar6 + 1;
          if (*(uint *)(lVar5 + 0xc) <= uVar3) {
            __nmemb = __nmemb + 1;
            *param_6 = __nmemb;
            goto LAB_00100298;
          }
        }
      } while ((lVar2 != lVar5) && (puVar1 != puVar6));
      if (__nmemb != 0) {
        puVar6 = (uint *)calloc(__nmemb,4);
        *param_5 = puVar6;
        if (puVar6 == (uint *)0x0) {
          return 3;
        }
        do {
          uVar3 = *(uint *)(param_1 + 0xc);
          uVar4 = *param_3;
          if (uVar3 < uVar4) {
            param_1 = param_1 + 0x10;
          }
          else {
            param_3 = param_3 + 1;
            if (uVar3 <= uVar4) {
              *puVar6 = uVar3;
              param_1 = param_1 + 0x10;
              puVar6 = puVar6 + 1;
            }
          }
        } while ((lVar2 != param_1) && (puVar1 != param_3));
      }
    }
  }
  return 0;
}



uint ApplyDecorations_isra_0
               (byte param_1,byte param_2,int param_3,int param_4,int param_5,int param_6,
               byte param_7,byte param_8,byte param_9,byte param_10,byte param_11,byte param_12,
               byte param_13,byte param_14,byte param_15)

{
  return -(uint)param_15 & 0x4000 | -(uint)param_14 & 0x2000 | -(uint)param_13 & 0x1000 |
         -(uint)param_12 & 0x800 | -(uint)param_11 & 0x400 | -(uint)param_10 & 0x200 |
         -(uint)param_9 & 0x80 | -(uint)param_8 & 0x40 | -(uint)param_7 & 0x20 | -param_6 & 0x10U |
         -param_5 & 8U | (uint)param_2 | -param_4 & 4U | -param_3 & 2U | (uint)param_1 << 8;
}



undefined8
ParseInterfaceVariable_isra_0
          (long param_1,undefined1 *param_2,undefined1 *param_3,int *param_4,long param_5,
          byte *param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  
  bVar18 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar15 = *(int **)(param_1 + 0x40);
    lVar13 = 0;
    do {
      if (*param_4 == *piVar15) {
        uVar9 = param_4[0x5b];
        if (uVar9 != 0) {
          *(uint *)(param_5 + 0x150) = uVar9;
          pvVar11 = calloc((ulong)uVar9,0x178);
          *(void **)(param_5 + 0x158) = pvVar11;
          if (pvVar11 == (void *)0x0) {
            return 3;
          }
          if (piVar15[0x32] != 0) {
            lVar13 = 0;
            while( true ) {
              lVar7 = *(long *)(param_4 + 0x5c);
              pvVar11 = (void *)((long)pvVar11 + lVar13 * 0x178);
              lVar8 = *(long *)(piVar15 + 0x36);
              *(undefined4 *)((long)pvVar11 + 0x18) = *(undefined4 *)(param_5 + 0x18);
              uVar12 = ParseInterfaceVariable_isra_0
                                 (param_1,0,lVar13 * 0x70 + lVar8,lVar7 + lVar13 * 0x178,pvVar11,
                                  param_6);
              if ((int)uVar12 != 0) {
                return uVar12;
              }
              lVar13 = lVar13 + 1;
              if ((uint)piVar15[0x32] <= (uint)lVar13) break;
              pvVar11 = *(void **)(param_5 + 0x158);
            }
          }
        }
        uVar1 = param_3[3];
        uVar2 = param_3[2];
        uVar3 = param_3[1];
        *(undefined8 *)(param_5 + 8) = *(undefined8 *)(piVar15 + 0x14);
        uVar9 = ApplyDecorations_isra_0
                          (*param_3,uVar3,uVar2,uVar1,param_3[4],param_3[5],param_3[6],param_3[7],
                           param_3[8],param_3[9],param_3[10],param_3[0xb],param_3[0xc],param_3[0xd],
                           param_3[0xe]);
        *(uint *)(param_5 + 0x28) = uVar9;
        if (param_2 == (undefined1 *)0x0) {
          *(ulong *)(param_5 + 0x10) =
               CONCAT44(*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x30));
        }
        else {
          uVar10 = ApplyDecorations_isra_0
                             (*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                              param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],
                              param_2[0xc],param_2[0xd],param_2[0xe]);
          *(uint *)(param_5 + 0x28) = uVar9 | uVar10;
        }
        *(undefined4 *)(param_5 + 0x2c) = *(undefined4 *)(param_3 + 0x6c);
        uVar12 = *(undefined8 *)(param_4 + 0xb);
        *(undefined8 *)(param_5 + 0x30) = *(undefined8 *)(param_4 + 9);
        *(undefined8 *)(param_5 + 0x38) = uVar12;
        *(undefined8 *)(param_5 + 0x40) = *(undefined8 *)(param_4 + 0xd);
        if (param_4[1] == 0x1c) {
          puVar17 = (undefined8 *)(param_5 + 0x50U & 0xfffffffffffffff8);
          lVar13 = (param_5 + 0x48) - (long)puVar17;
          *(undefined8 *)(param_5 + 0x48) = *(undefined8 *)(param_4 + 0x15);
          *(undefined8 *)(param_5 + 0x148) = *(undefined8 *)(param_4 + 0x55);
          puVar16 = (undefined8 *)((long)param_4 + (0x54 - lVar13));
          for (uVar14 = (ulong)((int)lVar13 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
            puVar17 = puVar17 + (ulong)bVar18 * -2 + 1;
          }
        }
        bVar18 = param_3[5];
        *(int **)(param_5 + 0x168) = param_4;
        *param_6 = *param_6 | bVar18;
        if ((*(uint *)(param_5 + 0x18) & 0xfffffffd) == 1) {
          uVar9 = param_4[7];
          iVar4 = param_4[10];
          iVar5 = param_4[9];
          if ((uVar9 & 0x100) == 0) {
            if ((uVar9 & 8) == 0) {
              if ((uVar9 & 6) == 0) {
                if ((uVar9 & 0x10000000) == 0) {
                  return 6;
                }
                *(undefined4 *)(param_5 + 0x160) = 0;
                return 0;
              }
              if (iVar5 == 0x20) {
                *(uint *)(param_5 + 0x160) = 99 - (uint)(iVar4 == 0);
                return 0;
              }
              if (iVar5 == 0x40) {
                *(uint *)(param_5 + 0x160) = 0x6f - (uint)(iVar4 == 0);
                return 0;
              }
              if (iVar5 == 0x10) {
                *(uint *)(param_5 + 0x160) = 0x4b - (uint)(iVar4 == 0);
                return 0;
              }
            }
            else {
              if (iVar5 == 0x20) {
                *(undefined4 *)(param_5 + 0x160) = 100;
                return 0;
              }
              if (iVar5 == 0x40) {
                *(undefined4 *)(param_5 + 0x160) = 0x70;
                return 0;
              }
              if (iVar5 == 0x10) {
                *(undefined4 *)(param_5 + 0x160) = 0x4c;
                return 0;
              }
            }
          }
          else {
            iVar6 = param_4[0xb];
            if ((uVar9 & 8) == 0) {
              if ((uVar9 & 6) == 0) {
                return 6;
              }
              if (iVar5 == 0x20) {
                if (iVar6 == 3) {
                  *(uint *)(param_5 + 0x160) = 0x69 - (uint)(iVar4 == 0);
                  return 0;
                }
                if (iVar6 == 4) {
                  *(uint *)(param_5 + 0x160) = 0x6c - (uint)(iVar4 == 0);
                  return 0;
                }
                if (iVar6 == 2) {
                  *(uint *)(param_5 + 0x160) = 0x66 - (uint)(iVar4 == 0);
                  return 0;
                }
              }
              else if (iVar5 == 0x40) {
                if (iVar6 == 3) {
                  *(uint *)(param_5 + 0x160) = 0x75 - (uint)(iVar4 == 0);
                  return 0;
                }
                if (iVar6 == 4) {
                  *(uint *)(param_5 + 0x160) = 0x78 - (uint)(iVar4 == 0);
                  return 0;
                }
                if (iVar6 == 2) {
                  *(uint *)(param_5 + 0x160) = 0x72 - (uint)(iVar4 == 0);
                  return 0;
                }
              }
              else if (iVar5 == 0x10) {
                if (iVar6 == 3) {
                  *(uint *)(param_5 + 0x160) = 0x59 - (uint)(iVar4 == 0);
                  return 0;
                }
                if (iVar6 == 4) {
                  *(uint *)(param_5 + 0x160) = 0x60 - (uint)(iVar4 == 0);
                  return 0;
                }
                if (iVar6 == 2) {
                  *(uint *)(param_5 + 0x160) = 0x52 - (uint)(iVar4 == 0);
                  return 0;
                }
              }
            }
            else if (iVar5 == 0x20) {
              if (iVar6 == 3) {
                *(undefined4 *)(param_5 + 0x160) = 0x6a;
                return 0;
              }
              if (iVar6 == 4) {
                *(undefined4 *)(param_5 + 0x160) = 0x6d;
                return 0;
              }
              if (iVar6 == 2) {
                *(undefined4 *)(param_5 + 0x160) = 0x67;
                return 0;
              }
            }
            else if (iVar5 == 0x40) {
              if (iVar6 == 3) {
                *(undefined4 *)(param_5 + 0x160) = 0x76;
                return 0;
              }
              if (iVar6 == 4) {
                *(undefined4 *)(param_5 + 0x160) = 0x79;
                return 0;
              }
              if (iVar6 == 2) {
                *(undefined4 *)(param_5 + 0x160) = 0x73;
                return 0;
              }
            }
            else if (iVar5 == 0x10) {
              if (iVar6 == 3) {
                *(undefined4 *)(param_5 + 0x160) = 0x5a;
                return 0;
              }
              if (iVar6 == 4) {
                *(undefined4 *)(param_5 + 0x160) = 0x61;
                return 0;
              }
              if (iVar6 == 2) {
                *(undefined4 *)(param_5 + 0x160) = 0x53;
                return 0;
              }
            }
          }
        }
        return 0;
      }
      lVar13 = lVar13 + 1;
      piVar15 = piVar15 + 0x38;
    } while (lVar13 != *(long *)(param_1 + 0x38));
  }
  return 0xc;
}



undefined8 ParseDescriptorSets_constprop_0(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  size_t sVar9;
  void *pvVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  
  if (*(uint *)(param_1 + 0x50) != 0) {
    piVar15 = (int *)(*(long *)(param_1 + 0x58) + 0x18);
    piVar12 = piVar15 + (ulong)*(uint *)(param_1 + 0x50) * 0x9a;
    do {
      uVar8 = 0;
      piVar14 = (int *)(param_1 + 0x68);
      do {
        if (*piVar14 == *piVar15) {
          lVar21 = param_1 + 0x68 + uVar8 * 0x10;
          goto LAB_00100aaf;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0x40);
      uVar8 = 0;
      piVar14 = (int *)(param_1 + 0x68);
      while (*piVar14 != -1) {
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        piVar14 = piVar14 + 4;
        if (uVar7 == 0x40) {
          return 6;
        }
      }
      *(int *)(uVar8 * 0x10 + 0x68 + param_1) = *piVar15;
      lVar21 = param_1 + 0x68 + uVar8 * 0x10;
LAB_00100aaf:
      piVar15 = piVar15 + 0x9a;
      *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + 1;
    } while (piVar15 != piVar12);
  }
  sVar9 = (size_t)*(uint *)(param_1 + 0x60);
  piVar15 = (int *)(param_1 + 0x68);
  do {
    if (*piVar15 != -1) {
      uVar7 = (int)sVar9 + 1;
      sVar9 = (size_t)uVar7;
      *(uint *)(param_1 + 0x60) = uVar7;
    }
    piVar15 = piVar15 + 4;
  } while (piVar15 != (int *)(param_1 + 0x468));
  if ((int)sVar9 != 0) {
    qsort((int *)(param_1 + 0x68),sVar9,0x10,SortCompareDescriptorSet);
    uVar7 = *(uint *)(param_1 + 0x60);
    if (uVar7 != 0) {
      lVar21 = param_1;
      do {
        pvVar10 = calloc((ulong)*(uint *)(lVar21 + 0x6c),8);
        *(void **)(lVar21 + 0x70) = pvVar10;
        if (*(uint *)(param_1 + 0x50) != 0) {
          lVar16 = *(long *)(param_1 + 0x58);
          iVar4 = *(int *)(lVar21 + 0x68);
          uVar22 = 0;
          lVar23 = (ulong)*(uint *)(param_1 + 0x50) * 0x268 + lVar16;
          do {
            if (*(int *)(lVar16 + 0x18) == iVar4) {
              uVar8 = (ulong)uVar22;
              uVar22 = uVar22 + 1;
              *(long *)((long)pvVar10 + uVar8 * 8) = lVar16;
            }
            lVar16 = lVar16 + 0x268;
          } while (lVar16 != lVar23);
        }
        lVar21 = lVar21 + 0x10;
      } while (lVar21 != (ulong)uVar7 * 0x10 + param_1);
    }
  }
  lVar21 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      lVar16 = *(long *)(param_1 + 0x18) + lVar21 * 0x98;
      pvVar10 = *(void **)(lVar16 + 0x48);
      if (*(int *)(lVar16 + 0x40) != 0) {
        lVar23 = 0;
        do {
          lVar17 = lVar23 + 1;
          free(*(void **)((long)pvVar10 + lVar23 * 0x10 + 8));
          pvVar10 = *(void **)(lVar16 + 0x48);
          *(undefined8 *)((long)pvVar10 + lVar23 * 0x10 + 8) = 0;
          lVar23 = lVar17;
        } while ((uint)lVar17 < *(uint *)(lVar16 + 0x40));
      }
      free(pvVar10);
      uVar7 = *(uint *)(param_1 + 0x60);
      *(undefined8 *)(lVar16 + 0x48) = 0;
      *(undefined4 *)(lVar16 + 0x40) = 0;
      if (uVar7 != 0) {
        uVar22 = 0;
        lVar17 = (ulong)uVar7 * 0x10 + param_1;
        lVar23 = param_1;
        do {
          if (*(uint *)(lVar23 + 0x6c) != 0) {
            puVar20 = *(undefined8 **)(lVar23 + 0x70);
            puVar1 = puVar20 + *(uint *)(lVar23 + 0x6c);
            do {
              uVar8 = 0;
              uVar11 = (ulong)*(uint *)(lVar16 + 0x50);
              while (uVar13 = uVar11, uVar8 < uVar13) {
                uVar11 = (uVar13 - uVar8 >> 1) + uVar8;
                uVar7 = *(uint *)(*(long *)(lVar16 + 0x58) + uVar11 * 4);
                if (*(uint *)*puVar20 == uVar7) {
                  uVar22 = uVar22 + 1;
                  *(uint *)(lVar16 + 0x40) = uVar22;
                  goto joined_r0x00100dcf;
                }
                if (uVar7 < *(uint *)*puVar20) {
                  uVar8 = uVar11 + 1;
                  uVar11 = uVar13;
                }
              }
              puVar20 = puVar20 + 1;
            } while (puVar1 != puVar20);
          }
joined_r0x00100dcf:
          lVar23 = lVar23 + 0x10;
        } while (lVar23 != lVar17);
        if (uVar22 != 0) {
          pvVar10 = calloc((ulong)uVar22,0x10);
          *(void **)(lVar16 + 0x48) = pvVar10;
          if (pvVar10 == (void *)0x0) {
            return 3;
          }
        }
        *(undefined4 *)(lVar16 + 0x40) = 0;
        lVar23 = param_1;
        do {
          if (*(uint *)(lVar23 + 0x6c) != 0) {
            puVar20 = *(undefined8 **)(lVar23 + 0x70);
            uVar7 = *(uint *)(lVar16 + 0x50);
            sVar9 = 0;
            lVar5 = *(long *)(lVar16 + 0x58);
            puVar1 = puVar20 + *(uint *)(lVar23 + 0x6c);
            do {
              uVar8 = 0;
              uVar11 = (ulong)uVar7;
              while (uVar13 = uVar11, uVar8 < uVar13) {
                uVar11 = (uVar13 - uVar8 >> 1) + uVar8;
                uVar22 = *(uint *)(lVar5 + uVar11 * 4);
                if (*(uint *)*puVar20 == uVar22) {
                  sVar9 = (size_t)((int)sVar9 + 1);
                  break;
                }
                if (uVar22 < *(uint *)*puVar20) {
                  uVar8 = uVar11 + 1;
                  uVar11 = uVar13;
                }
              }
              puVar20 = puVar20 + 1;
            } while (puVar20 != puVar1);
            if ((int)sVar9 != 0) {
              uVar2 = *(undefined4 *)(lVar23 + 0x68);
              puVar18 = (undefined4 *)
                        ((ulong)*(uint *)(lVar16 + 0x40) * 0x10 + *(long *)(lVar16 + 0x48));
              *(uint *)(lVar16 + 0x40) = *(uint *)(lVar16 + 0x40) + 1;
              *puVar18 = uVar2;
              pvVar10 = calloc(sVar9,8);
              *(void **)(puVar18 + 2) = pvVar10;
              if (pvVar10 == (void *)0x0) {
                return 3;
              }
              if (*(int *)(lVar23 + 0x6c) != 0) {
                lVar19 = 0;
LAB_00100d50:
                do {
                  uVar8 = 0;
                  puVar6 = *(uint **)(*(long *)(lVar23 + 0x70) + lVar19 * 8);
                  uVar22 = *puVar6;
                  uVar11 = (ulong)uVar7;
                  while (uVar13 = uVar11, uVar8 < uVar13) {
                    uVar11 = (uVar13 - uVar8 >> 1) + uVar8;
                    uVar3 = *(uint *)(lVar5 + uVar11 * 4);
                    if (uVar22 == uVar3) {
                      uVar22 = puVar18[1];
                      lVar19 = lVar19 + 1;
                      puVar18[1] = uVar22 + 1;
                      *(uint **)((long)pvVar10 + (ulong)uVar22 * 8) = puVar6;
                      if (*(uint *)(lVar23 + 0x6c) <= (uint)lVar19) goto LAB_00100c6a;
                      goto LAB_00100d50;
                    }
                    if (uVar3 < uVar22) {
                      uVar8 = uVar11 + 1;
                      uVar11 = uVar13;
                    }
                  }
                  lVar19 = lVar19 + 1;
                } while ((uint)lVar19 < *(uint *)(lVar23 + 0x6c));
              }
            }
          }
LAB_00100c6a:
          lVar23 = lVar23 + 0x10;
        } while (lVar17 != lVar23);
      }
      lVar21 = lVar21 + 1;
    } while ((uint)lVar21 < *(uint *)(param_1 + 0x14));
  }
  return 0;
}



void MarkSelfAndAllMemberVarsAsUsed_part_0(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    uVar8 = 0;
    puVar11 = (uint *)(*(long *)(param_1 + 0x150) + 0x144);
    do {
      *puVar11 = *puVar11 & 0xfffffffe;
      if ((*(int *)(*(long *)(puVar11 + 5) + 4) == 0x1e) && (puVar11[1] != 0)) {
        lVar6 = *(long *)(puVar11 + 3);
        uVar7 = 0;
        puVar1 = (uint *)(lVar6 + 0x144);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar2 = *(int *)(*(long *)(lVar6 + 0x158) + 4);
        while( true ) {
          if ((iVar2 == 0x1e) && (puVar1[1] != 0)) {
            lVar6 = *(long *)(puVar1 + 3);
            uVar4 = 0;
            puVar10 = (uint *)(lVar6 + 0x144);
            *puVar10 = *puVar10 & 0xfffffffe;
            iVar2 = *(int *)(*(long *)(lVar6 + 0x158) + 4);
            while( true ) {
              if ((iVar2 == 0x1e) && (puVar10[1] != 0)) {
                lVar6 = *(long *)(puVar10 + 3);
                puVar9 = (uint *)(lVar6 + 0x144);
                uVar3 = 0;
                *puVar9 = *puVar9 & 0xfffffffe;
                iVar2 = *(int *)(*(long *)(lVar6 + 0x158) + 4);
                while( true ) {
                  if ((iVar2 == 0x1e) && (puVar9[1] != 0)) {
                    lVar6 = *(long *)(puVar9 + 3);
                    uVar12 = 0;
                    do {
                      *(uint *)(lVar6 + 0x144) = *(uint *)(lVar6 + 0x144) & 0xfffffffe;
                      if (*(int *)(*(long *)(lVar6 + 0x158) + 4) == 0x1e) {
                        MarkSelfAndAllMemberVarsAsUsed_part_0(lVar6);
                      }
                      uVar12 = uVar12 + 1;
                      lVar6 = lVar6 + 0x168;
                    } while (uVar12 < puVar9[1]);
                  }
                  uVar3 = uVar3 + 1;
                  puVar5 = puVar9 + 0x5a;
                  if (puVar10[1] <= uVar3) break;
                  *puVar5 = *puVar5 & 0xfffffffe;
                  iVar2 = *(int *)(*(long *)(puVar9 + 0x5f) + 4);
                  puVar9 = puVar5;
                }
              }
              uVar4 = uVar4 + 1;
              puVar9 = puVar10 + 0x5a;
              if (puVar1[1] <= uVar4) break;
              *puVar9 = *puVar9 & 0xfffffffe;
              iVar2 = *(int *)(*(long *)(puVar10 + 0x5f) + 4);
              puVar10 = puVar9;
            }
          }
          uVar7 = uVar7 + 1;
          puVar10 = puVar1 + 0x5a;
          if (puVar11[1] <= uVar7) break;
          *puVar10 = *puVar10 & 0xfffffffe;
          iVar2 = *(int *)(*(long *)(puVar1 + 0x5f) + 4);
          puVar1 = puVar10;
        }
      }
      uVar8 = uVar8 + 1;
      puVar11 = puVar11 + 0x5a;
    } while (uVar8 < *(uint *)(param_1 + 0x148));
    return;
  }
  return;
}



void SafeFreeBlockVariables_part_0(long param_1)

{
  void *__ptr;
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  
  __ptr = *(void **)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x148) != 0) {
    if (__ptr == (void *)0x0) {
      uVar1 = 0;
      lVar2 = 0;
      goto LAB_001010b8;
    }
    uVar1 = 0;
    lVar2 = 0;
    pvVar3 = __ptr;
    do {
      if (((*(byte *)((long)pvVar3 + 0x144) & 2) == 0) && (*(long *)((long)pvVar3 + 0x150) != 0)) {
        SafeFreeBlockVariables_part_0();
        __ptr = *(void **)(param_1 + 0x150);
      }
LAB_001010b8:
      lVar2 = lVar2 + 0x168;
      uVar1 = uVar1 + 1;
      pvVar3 = (void *)((long)__ptr + lVar2);
    } while (uVar1 < *(uint *)(param_1 + 0x148));
  }
  free(__ptr);
  *(undefined8 *)(param_1 + 0x150) = 0;
  return;
}



undefined4 GetUint32Constant(ulong *param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  
  if (param_1[7] != 0) {
    piVar1 = (int *)param_1[8];
    uVar2 = 0;
    do {
      if (param_2 == *piVar1) {
        if (piVar1[1] != 0x2b) {
          return 0xffffffff;
        }
        if (param_1[1] == 0) {
          return 0xffffffff;
        }
        if (*param_1 <= (ulong)(piVar1[6] + 3)) {
          return 0xffffffff;
        }
        return *(undefined4 *)(param_1[1] + (ulong)(piVar1[6] + 3) * 4);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x38;
    } while (param_1[7] != uVar2);
  }
  return 0xffffffff;
}



void SafeFreeInterfaceVariable(long param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  void *__ptr;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *__ptr_00;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  
  if (param_1 == 0) {
    return;
  }
  pvVar9 = *(void **)(param_1 + 0x158);
  if (pvVar9 != (void *)0x0) {
    pvVar18 = pvVar9;
    if (*(int *)(param_1 + 0x150) != 0) {
      lVar8 = 0;
      uVar22 = 0;
      while( true ) {
        pvVar4 = *(void **)((long)pvVar9 + 0x158);
        if (pvVar4 != (void *)0x0) {
          pvVar18 = pvVar4;
          if (*(int *)((long)pvVar9 + 0x150) != 0) {
            uVar13 = 0;
            lVar21 = 0;
            while( true ) {
              pvVar17 = *(void **)((long)pvVar4 + 0x158);
              if (pvVar17 != (void *)0x0) {
                if (*(int *)((long)pvVar4 + 0x150) != 0) {
                  lVar12 = 0;
                  uVar7 = 0;
                  pvVar18 = pvVar17;
                  while( true ) {
                    pvVar16 = *(void **)((long)pvVar18 + 0x158);
                    if (pvVar16 != (void *)0x0) {
                      if (*(int *)((long)pvVar18 + 0x150) != 0) {
                        lVar20 = 0;
                        uVar26 = 0;
                        pvVar17 = pvVar16;
                        while( true ) {
                          pvVar10 = *(void **)((long)pvVar17 + 0x158);
                          if (pvVar10 != (void *)0x0) {
                            pvVar16 = pvVar10;
                            if (*(int *)((long)pvVar17 + 0x150) != 0) {
                              uVar23 = 0;
                              lVar27 = 0;
                              while( true ) {
                                pvVar2 = *(void **)((long)pvVar10 + 0x158);
                                if (pvVar2 != (void *)0x0) {
                                  pvVar16 = pvVar2;
                                  if (*(int *)((long)pvVar10 + 0x150) != 0) {
                                    uVar6 = 0;
                                    lVar25 = 0;
                                    while( true ) {
                                      pvVar15 = *(void **)((long)pvVar2 + 0x158);
                                      if (pvVar15 != (void *)0x0) {
                                        if (*(int *)((long)pvVar2 + 0x150) != 0) {
                                          lVar1 = 0;
                                          uVar3 = 0;
                                          pvVar16 = pvVar15;
                                          while( true ) {
                                            __ptr_00 = *(void **)((long)pvVar16 + 0x158);
                                            if (__ptr_00 != (void *)0x0) {
                                              if (*(int *)((long)pvVar16 + 0x150) != 0) {
                                                lVar5 = 0;
                                                uVar11 = 0;
                                                pvVar15 = __ptr_00;
                                                while( true ) {
                                                  __ptr = *(void **)((long)pvVar15 + 0x158);
                                                  if (__ptr != (void *)0x0) {
                                                    if (*(int *)((long)pvVar15 + 0x150) != 0) {
                                                      lVar24 = 0;
                                                      uVar19 = 0;
                                                      do {
                                                        lVar14 = (long)__ptr + lVar24;
                                                        uVar19 = uVar19 + 1;
                                                        lVar24 = lVar24 + 0x178;
                                                        SafeFreeInterfaceVariable(lVar14);
                                                        __ptr = *(void **)((long)pvVar15 + 0x158);
                                                      } while (uVar19 < *(uint *)((long)pvVar15 +
                                                                                 0x150));
                                                    }
                                                    free(__ptr);
                                                    *(undefined8 *)((long)pvVar15 + 0x158) = 0;
                                                    __ptr_00 = *(void **)((long)pvVar16 + 0x158);
                                                  }
                                                  uVar11 = uVar11 + 1;
                                                  lVar5 = lVar5 + 0x178;
                                                  if (*(uint *)((long)pvVar16 + 0x150) <= uVar11)
                                                  break;
                                                  pvVar15 = (void *)((long)__ptr_00 + lVar5);
                                                }
                                              }
                                              free(__ptr_00);
                                              *(undefined8 *)((long)pvVar16 + 0x158) = 0;
                                              pvVar15 = *(void **)((long)pvVar2 + 0x158);
                                            }
                                            uVar3 = uVar3 + 1;
                                            lVar1 = lVar1 + 0x178;
                                            if (*(uint *)((long)pvVar2 + 0x150) <= uVar3) break;
                                            pvVar16 = (void *)((long)pvVar15 + lVar1);
                                          }
                                        }
                                        free(pvVar15);
                                        *(undefined8 *)((long)pvVar2 + 0x158) = 0;
                                        pvVar16 = *(void **)((long)pvVar10 + 0x158);
                                      }
                                      uVar6 = uVar6 + 1;
                                      lVar25 = lVar25 + 0x178;
                                      if (*(uint *)((long)pvVar10 + 0x150) <= uVar6) break;
                                      pvVar2 = (void *)((long)pvVar16 + lVar25);
                                    }
                                  }
                                  free(pvVar16);
                                  *(undefined8 *)((long)pvVar10 + 0x158) = 0;
                                  pvVar16 = *(void **)((long)pvVar17 + 0x158);
                                }
                                uVar23 = uVar23 + 1;
                                lVar27 = lVar27 + 0x178;
                                if (*(uint *)((long)pvVar17 + 0x150) <= uVar23) break;
                                pvVar10 = (void *)((long)pvVar16 + lVar27);
                              }
                            }
                            free(pvVar16);
                            *(undefined8 *)((long)pvVar17 + 0x158) = 0;
                            pvVar16 = *(void **)((long)pvVar18 + 0x158);
                          }
                          uVar26 = uVar26 + 1;
                          lVar20 = lVar20 + 0x178;
                          if (*(uint *)((long)pvVar18 + 0x150) <= uVar26) break;
                          pvVar17 = (void *)((long)pvVar16 + lVar20);
                        }
                      }
                      free(pvVar16);
                      *(undefined8 *)((long)pvVar18 + 0x158) = 0;
                      pvVar17 = *(void **)((long)pvVar4 + 0x158);
                    }
                    uVar7 = uVar7 + 1;
                    lVar12 = lVar12 + 0x178;
                    if (*(uint *)((long)pvVar4 + 0x150) <= uVar7) break;
                    pvVar18 = (void *)((long)pvVar17 + lVar12);
                  }
                }
                free(pvVar17);
                *(undefined8 *)((long)pvVar4 + 0x158) = 0;
                pvVar18 = *(void **)((long)pvVar9 + 0x158);
              }
              uVar13 = uVar13 + 1;
              lVar21 = lVar21 + 0x178;
              if (*(uint *)((long)pvVar9 + 0x150) <= uVar13) break;
              pvVar4 = (void *)((long)pvVar18 + lVar21);
            }
          }
          free(pvVar18);
          *(undefined8 *)((long)pvVar9 + 0x158) = 0;
          pvVar18 = *(void **)(param_1 + 0x158);
        }
        uVar22 = uVar22 + 1;
        lVar8 = lVar8 + 0x178;
        if (*(uint *)(param_1 + 0x150) <= uVar22) break;
        pvVar9 = (void *)((long)pvVar18 + lVar8);
      }
    }
    free(pvVar18);
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  return;
}



void spvReflectDestroyShaderModule_part_0(long param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  byte *__ptr;
  long lVar8;
  long lVar9;
  ulong local_40;
  
  free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      uVar3 = uVar5 + 1;
      free(*(void **)(param_1 + 0x70 + uVar5 * 0x10));
      uVar5 = uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x60));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    do {
      lVar4 = uVar5 * 0x268 + *(long *)(param_1 + 0x58);
      if (*(void **)(lVar4 + 0x248) != (void *)0x0) {
        free(*(void **)(lVar4 + 0x248));
        *(undefined8 *)(lVar4 + 0x248) = 0;
      }
      if (((*(byte *)(lVar4 + 0x184) & 2) == 0) && (*(long *)(lVar4 + 400) != 0)) {
        SafeFreeBlockVariables_part_0(lVar4 + 0x40);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x50));
  }
  free(*(void **)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      lVar4 = *(long *)(param_1 + 0x18) + local_40 * 0x98;
      if (*(int *)(lVar4 + 0x30) != 0) {
        lVar9 = *(long *)(lVar4 + 0x38);
        uVar5 = 0;
        if (lVar9 == 0) goto LAB_001017e3;
        while( true ) {
          pvVar2 = *(void **)(lVar9 + 0x158);
          if (pvVar2 != (void *)0x0) {
            if (*(int *)(lVar9 + 0x150) != 0) {
              lVar8 = 0;
              uVar3 = 0;
              do {
                lVar6 = (long)pvVar2 + lVar8;
                uVar3 = uVar3 + 1;
                lVar8 = lVar8 + 0x178;
                SafeFreeInterfaceVariable(lVar6);
                pvVar2 = *(void **)(lVar9 + 0x158);
              } while (uVar3 < *(uint *)(lVar9 + 0x150));
            }
            free(pvVar2);
            *(undefined8 *)(lVar9 + 0x158) = 0;
          }
LAB_001017e3:
          uVar5 = uVar5 + 1;
          if (*(uint *)(lVar4 + 0x30) <= uVar5) break;
          lVar9 = uVar5 * 0x178 + *(long *)(lVar4 + 0x38);
        }
      }
      pvVar2 = *(void **)(lVar4 + 0x48);
      lVar9 = 0;
      if (*(int *)(lVar4 + 0x40) != 0) {
        do {
          lVar8 = lVar9 + 1;
          free(*(void **)((long)pvVar2 + lVar9 * 0x10 + 8));
          pvVar2 = *(void **)(lVar4 + 0x48);
          *(undefined8 *)((long)pvVar2 + lVar9 * 0x10 + 8) = 0;
          lVar9 = lVar8;
        } while ((uint)lVar8 < *(uint *)(lVar4 + 0x40));
      }
      free(pvVar2);
      *(undefined8 *)(lVar4 + 0x48) = 0;
      free(*(void **)(lVar4 + 0x18));
      *(undefined8 *)(lVar4 + 0x18) = 0;
      free(*(void **)(lVar4 + 0x28));
      *(undefined8 *)(lVar4 + 0x28) = 0;
      free(*(void **)(lVar4 + 0x38));
      *(undefined8 *)(lVar4 + 0x38) = 0;
      free(*(void **)(lVar4 + 0x58));
      *(undefined8 *)(lVar4 + 0x58) = 0;
      free(*(void **)(lVar4 + 0x68));
      *(undefined8 *)(lVar4 + 0x68) = 0;
      free(*(void **)(lVar4 + 0x78));
      local_40 = local_40 + 1;
      uVar1 = *(uint *)(param_1 + 0x14);
      *(undefined8 *)(lVar4 + 0x78) = 0;
    } while (local_40 < uVar1);
  }
  free(*(void **)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  free(*(void **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  free(*(void **)(param_1 + 0x4b0));
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  if (*(int *)(param_1 + 0x498) == 0) {
    pvVar2 = *(void **)(param_1 + 0x4a0);
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x4a0);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
      uVar5 = 0;
      lVar4 = 0;
      goto LAB_00101954;
    }
    uVar5 = 0;
    lVar4 = 0;
    pvVar7 = pvVar2;
    while( true ) {
      if (((*(byte *)((long)pvVar7 + 0x144) & 2) == 0) && (*(long *)((long)pvVar7 + 0x150) != 0)) {
        SafeFreeBlockVariables_part_0();
        pvVar2 = *(void **)(param_1 + 0x4a0);
      }
LAB_00101954:
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x168;
      if (*(uint *)(param_1 + 0x498) <= uVar5) break;
      pvVar7 = (void *)((long)pvVar2 + lVar4);
    }
  }
  free(pvVar2);
  lVar4 = *(long *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if (*(long *)(lVar4 + 0x20) != 0) {
    lVar9 = 0;
    uVar5 = 0;
    do {
      lVar8 = *(long *)(lVar4 + 0x28) + lVar9;
      pvVar2 = *(void **)(lVar8 + 0x170);
      if (pvVar2 != (void *)0x0) {
        SafeFreeTypes(lVar8);
        pvVar2 = *(void **)(lVar8 + 0x170);
      }
      free(pvVar2);
      uVar5 = uVar5 + 1;
      lVar4 = *(long *)(param_1 + 0x4b8);
      *(undefined8 *)(lVar8 + 0x170) = 0;
      lVar9 = lVar9 + 0x178;
    } while (uVar5 < *(ulong *)(lVar4 + 0x20));
  }
  free(*(void **)(lVar4 + 0x28));
  __ptr = *(byte **)(param_1 + 0x4b8);
  __ptr[0x28] = 0;
  __ptr[0x29] = 0;
  __ptr[0x2a] = 0;
  __ptr[0x2b] = 0;
  __ptr[0x2c] = 0;
  __ptr[0x2d] = 0;
  __ptr[0x2e] = 0;
  __ptr[0x2f] = 0;
  if ((*__ptr & 1) == 0) {
    free(*(void **)(__ptr + 0x10));
    __ptr = *(byte **)(param_1 + 0x4b8);
    __ptr[0x10] = 0;
    __ptr[0x11] = 0;
    __ptr[0x12] = 0;
    __ptr[0x13] = 0;
    __ptr[0x14] = 0;
    __ptr[0x15] = 0;
    __ptr[0x16] = 0;
    __ptr[0x17] = 0;
  }
  free(__ptr);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  return;
}



undefined8
ParseDescriptorBlockVariableSizes
          (long param_1,long param_2,char param_3,byte param_4,char param_5,long param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long *__ptr;
  long *plVar9;
  int *piVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  char cVar24;
  ulong uVar25;
  
  uVar16 = *(uint *)(param_6 + 0x148);
  if (uVar16 == 0) {
    return 0;
  }
  lVar22 = *(long *)(param_6 + 0x150);
  puVar1 = (uint *)(lVar22 + 0x10);
  iVar2 = *(int *)(*(long *)(param_6 + 0x158) + 4);
  puVar11 = puVar1;
  if (param_3 == '\0') {
    do {
      uVar20 = 0;
      if ((param_4 == 0) && (uVar20 = *puVar11, iVar2 != 0x20)) {
        uVar20 = uVar20 + *(int *)(param_6 + 0x14);
      }
      puVar11[1] = uVar20;
      puVar11 = puVar11 + 0x5a;
    } while (puVar11 != puVar1 + (ulong)uVar16 * 0x5a);
  }
  else {
    do {
      puVar6 = puVar11 + 0x5a;
      puVar11[1] = *puVar11;
      puVar11 = puVar6;
    } while (puVar6 != puVar1 + (ulong)uVar16 * 0x5a);
  }
  uVar25 = (ulong)param_4;
  uVar16 = 0;
  lVar18 = lVar22;
  do {
    piVar7 = *(int **)(lVar18 + 0x158);
    if (piVar7 == (int *)0x0) goto switchD_00101b26_caseD_19;
    switch(piVar7[1]) {
    case 0x14:
      *(undefined4 *)(lVar18 + 0x18) = 4;
      break;
    case 0x15:
    case 0x16:
      *(uint *)(lVar18 + 0x18) = (uint)piVar7[9] >> 3;
      break;
    case 0x17:
      *(uint *)(lVar18 + 0x18) = ((uint)piVar7[9] >> 3) * piVar7[0xb];
      break;
    case 0x18:
      if ((*(uint *)(lVar18 + 0x20) & 8) == 0) {
        if ((*(uint *)(lVar18 + 0x20) & 4) != 0) {
          *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x34) * *(int *)(lVar18 + 0x38);
        }
      }
      else {
        *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x30) * *(int *)(lVar18 + 0x38);
      }
      break;
    case 0x1c:
      if ((((*(byte *)((long)piVar7 + 0x1f) & 0x10) != 0) && ((*(byte *)(lVar18 + 0x144) & 2) == 0))
         && (uVar8 = ParseDescriptorBlockVariableSizes(param_1,param_2,0,1,param_5), (int)uVar8 != 0
            )) {
        return uVar8;
      }
      uVar20 = *(uint *)(lVar18 + 0x3c);
      uVar13 = (ulong)uVar20;
      if (uVar20 != 0) {
        uVar20 = 1;
        lVar14 = lVar18;
        do {
          if (*(int *)(lVar14 + 0xc0) != -1) {
            uVar20 = 0;
          }
          uVar20 = uVar20 * *(int *)(lVar14 + 0x40);
          lVar14 = lVar14 + 4;
        } while (lVar14 != lVar18 + uVar13 * 4);
      }
      *(uint *)(lVar18 + 0x18) = uVar20 * *(int *)(lVar18 + 0x140);
      break;
    case 0x1d:
      if ((*(byte *)((long)piVar7 + 0x1f) & 0x10) == 0) break;
      cVar24 = '\x01';
      uVar13 = 1;
      goto LAB_00101bc3;
    case 0x20:
      if (*(long *)(param_1 + 0x38) == 0) {
        return 0xc;
      }
      piVar10 = *(int **)(param_1 + 0x40);
      lVar14 = 0;
      while (*piVar7 != *piVar10) {
        lVar14 = lVar14 + 1;
        piVar10 = piVar10 + 0x38;
        if (lVar14 == *(long *)(param_1 + 0x38)) {
          return 0xc;
        }
      }
      lVar14 = *(long *)(*(long *)(param_2 + 0x4b8) + 0x20);
      if (lVar14 == 0) {
        return 0xc;
      }
      piVar7 = *(int **)(*(long *)(param_2 + 0x4b8) + 0x28);
      lVar12 = 0;
      while (piVar10[3] != *piVar7) {
        lVar12 = lVar12 + 1;
        piVar7 = piVar7 + 0x5e;
        if (lVar14 == lVar12) {
          return 0xc;
        }
      }
    case 0x1e:
      if ((*(byte *)(lVar18 + 0x144) & 2) == 0) {
        uVar13 = uVar25 & 0xff;
        cVar24 = param_5;
LAB_00101bc3:
        uVar8 = ParseDescriptorBlockVariableSizes(param_1,param_2,0,uVar13,cVar24,lVar18,uVar25);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      else {
        uVar20 = *(uint *)(param_1 + 0x490);
        piVar10 = *(int **)(param_1 + 0x488);
        if (uVar20 != 0) {
          piVar15 = piVar10 + (ulong)uVar20 * 4;
          do {
            if (*piVar7 == *piVar10) {
              uVar20 = *(uint *)(*(long *)(piVar10 + 2) + 0x18);
              goto LAB_00101e9c;
            }
            piVar10 = piVar10 + 4;
          } while (piVar10 != piVar15);
          uVar20 = 0;
        }
LAB_00101e9c:
        *(uint *)(lVar18 + 0x18) = uVar20;
      }
    }
switchD_00101b26_caseD_19:
    uVar20 = *(uint *)(param_6 + 0x148);
    uVar16 = uVar16 + 1;
    lVar18 = lVar18 + 0x168;
  } while (uVar16 < uVar20);
  cVar24 = param_5;
  __ptr = (long *)calloc((ulong)uVar20,8);
  if (__ptr == (long *)0x0) {
    return 3;
  }
  if (uVar20 != 0) {
    uVar16 = 0;
    plVar9 = __ptr;
    do {
      uVar5 = 0;
      uVar23 = 0;
      uVar19 = 0xffffffff;
      puVar11 = puVar1;
      do {
        uVar3 = *puVar11;
        if ((uVar16 <= uVar3) && (uVar3 < uVar19)) {
          uVar19 = uVar3;
          uVar23 = uVar5;
        }
        uVar5 = uVar5 + 1;
        puVar11 = puVar11 + 0x5a;
      } while (uVar20 != uVar5);
      plVar21 = plVar9 + 1;
      uVar16 = uVar19 + 1;
      *plVar9 = (ulong)uVar23 * 0x168 + lVar22;
      plVar9 = plVar21;
    } while (plVar21 != __ptr + uVar20);
    plVar9 = __ptr;
    if (uVar20 == 1) goto LAB_00101d0e;
  }
  lVar18 = 0;
  lVar22 = *__ptr;
  iVar17 = *(int *)(*__ptr + 0x10);
  do {
    lVar14 = __ptr[lVar18 + 1];
    iVar4 = *(int *)(lVar14 + 0x10);
    uVar16 = iVar4 - iVar17;
    *(uint *)(lVar22 + 0x1c) = uVar16;
    if (uVar16 < *(uint *)(lVar22 + 0x18)) {
      *(uint *)(lVar22 + 0x18) = uVar16;
    }
    if (param_5 != '\0') {
      *(undefined4 *)(lVar22 + 0x1c) = *(undefined4 *)(lVar22 + 0x18);
    }
    lVar18 = lVar18 + 1;
    lVar22 = lVar14;
    iVar17 = iVar4;
  } while ((uint)lVar18 < uVar20 - 1);
  plVar9 = __ptr + (uVar20 - 1);
LAB_00101d0e:
  lVar22 = *plVar9;
  iVar17 = *(int *)(lVar22 + 0x10);
  uVar16 = (iVar17 + 0xf + *(uint *)(lVar22 + 0x18) & 0xfffffff0) - iVar17;
  *(uint *)(lVar22 + 0x1c) = uVar16;
  if (uVar16 < *(uint *)(lVar22 + 0x18)) {
    *(uint *)(lVar22 + 0x18) = uVar16;
  }
  if (cVar24 != '\0') {
    *(undefined4 *)(lVar22 + 0x1c) = *(undefined4 *)(lVar22 + 0x18);
  }
  free(__ptr);
  if (iVar2 != 0x20) {
    iVar17 = iVar17 + *(int *)(lVar22 + 0x1c);
    *(ulong *)(param_6 + 0x18) = CONCAT44(iVar17,iVar17);
    return 0;
  }
  *(undefined8 *)(param_6 + 0x18) = _LC0;
  return 0;
}



undefined8 ParseDescriptorBindings(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  void *pvVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  int *piVar24;
  int *piVar25;
  int iVar26;
  byte bVar27;
  ulong uVar28;
  int *piVar29;
  int iVar30;
  ulong uVar31;
  uint extraout_XMM0_Da;
  byte local_98;
  byte local_8c;
  byte local_8b;
  byte local_8a;
  byte local_89;
  byte local_88;
  byte local_87;
  byte local_86;
  byte local_85;
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  long local_78;
  int local_68;
  byte local_64;
  byte local_63;
  byte local_62;
  
  uVar28 = *(ulong *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (uVar28 != 0) {
    piVar29 = *(int **)(param_1 + 0x40);
    uVar16 = 0;
    piVar12 = piVar29;
    do {
      if (((piVar12[1] == 0x3b) &&
          ((((piVar12[5] & 0xfffffffdU) == 0 || (piVar12[5] == 0xc)) && (piVar12[0x1c] != -1)))) &&
         (piVar12[0x1e] != -1)) {
        uVar16 = uVar16 + 1;
        *(uint *)(param_2 + 0x50) = uVar16;
      }
      piVar12 = piVar12 + 0x38;
    } while (piVar29 + uVar28 * 0x38 != piVar12);
    if (uVar16 != 0) {
      pvVar13 = calloc((ulong)uVar16,0x268);
      *(void **)(param_2 + 0x58) = pvVar13;
      if (pvVar13 == (void *)0x0) {
        return 3;
      }
      puVar17 = (undefined4 *)((long)pvVar13 + 0x10);
      do {
        *puVar17 = 0xffffffff;
        puVar17[1] = 0xffffffff;
        puVar17[2] = 0xffffffff;
        puVar17[3] = 0xffffffff;
        puVar18 = puVar17 + 0x9a;
        puVar17[0x89] = 0xffffffff;
        puVar17 = puVar18;
      } while ((undefined4 *)((long)pvVar13 + (ulong)uVar16 * 0x268 + 0x10) != puVar18);
      local_78 = 0;
      uVar31 = 0;
      do {
        piVar12 = piVar29 + uVar31 * 0x38;
        if (((piVar12[1] == 0x3b) && (((piVar12[5] & 0xfffffffdU) == 0 || (piVar12[5] == 0xc)))) &&
           ((iVar26 = piVar12[0x1c], iVar26 != -1 && (iVar6 = piVar12[0x1e], iVar6 != -1)))) {
          lVar15 = *(long *)(*(long *)(param_2 + 0x4b8) + 0x20);
          if (lVar15 == 0) {
            return 0xc;
          }
          piVar24 = *(int **)(*(long *)(param_2 + 0x4b8) + 0x28);
          lVar21 = 0;
          piVar14 = piVar24;
          while (iVar30 = *piVar14, piVar12[3] != iVar30) {
            lVar21 = lVar21 + 1;
            piVar14 = piVar14 + 0x5e;
            if (lVar21 == lVar15) {
              return 0xc;
            }
          }
          local_68 = 0x7fffffff;
          piVar25 = piVar14;
          if (piVar14[1] == 0x20) {
            uVar19 = 0;
            piVar20 = piVar29;
            while (*piVar20 != iVar30) {
              uVar19 = uVar19 + 1;
              piVar20 = piVar20 + 0x38;
              if (uVar19 == uVar28) {
                return 0xc;
              }
            }
            lVar21 = 0;
            piVar25 = piVar24;
            while (iVar30 = *piVar25, piVar20[3] != iVar30) {
              lVar21 = lVar21 + 1;
              piVar25 = piVar25 + 0x5e;
              if (lVar21 == lVar15) {
                return 0xc;
              }
            }
            local_68 = piVar14[6];
          }
          uVar1 = *(undefined1 *)((long)piVar12 + 0x5a);
          piVar24 = (int *)(local_78 * 0x268 + *(long *)(param_2 + 0x58));
          iVar7 = piVar12[0x20];
          iVar10 = piVar12[0x17];
          uVar2 = *(undefined1 *)((long)piVar12 + 0x5b);
          uVar3 = *(undefined1 *)((long)piVar12 + 0x59);
          *piVar24 = *piVar12;
          uVar8 = *(undefined8 *)(piVar12 + 0x14);
          piVar24[6] = iVar26;
          *(ulong *)(piVar24 + 4) = CONCAT44(iVar7,iVar6);
          uVar4 = *(undefined1 *)((long)piVar12 + 0x5d);
          iVar6 = piVar12[0x16];
          *(undefined8 *)(piVar24 + 2) = uVar8;
          iVar26 = piVar12[0x28];
          piVar24[0x8b] = 1;
          piVar24[0x8d] = iVar26;
          uVar5 = *(undefined1 *)((long)piVar12 + 0x66);
          *(int **)(piVar24 + 0x94) = piVar25;
          uVar11 = ApplyDecorations_isra_0
                             ((char)iVar6,uVar3,uVar1,uVar2,(char)iVar10,uVar4,
                              *(undefined1 *)((long)piVar12 + 0x5e),
                              *(undefined1 *)((long)piVar12 + 0x5f),(char)piVar12[0x18],
                              *(undefined1 *)((long)piVar12 + 0x61),
                              *(undefined1 *)((long)piVar12 + 0x62),
                              *(undefined1 *)((long)piVar12 + 99),(char)piVar12[0x19],
                              *(undefined1 *)((long)piVar12 + 0x65),uVar5);
          uVar19 = 0;
          *(ulong *)(piVar24 + 0x98) = CONCAT44(piVar12[0x1a],uVar11);
          do {
            if (*piVar29 == iVar30) {
              iVar26 = piVar29[0x32];
              if (iVar26 != 0) {
                pbVar9 = *(byte **)(piVar29 + 0x36);
                bVar27 = *pbVar9;
                local_8c = pbVar9[1];
                local_89 = pbVar9[2];
                local_8a = pbVar9[3];
                local_84 = pbVar9[4];
                local_87 = pbVar9[5];
                local_8b = pbVar9[6];
                local_85 = pbVar9[7];
                local_88 = pbVar9[8];
                local_82 = pbVar9[9];
                local_81 = pbVar9[10];
                local_63 = pbVar9[0xb];
                local_83 = pbVar9[0xc];
                local_64 = pbVar9[0xd];
                local_86 = pbVar9[0xe];
                local_62 = local_89;
                if (iVar26 != 1) {
                  pbVar22 = pbVar9 + 0x70;
                  local_98 = local_8b;
                  do {
                    local_8b = bVar27;
                    pbVar23 = pbVar22 + 0x70;
                    local_89 = local_89 & pbVar22[2];
                    bVar27 = local_8b & *pbVar22;
                    local_8c = local_8c & pbVar22[1];
                    local_8a = local_8a & pbVar22[3];
                    local_84 = local_84 & pbVar22[4];
                    local_87 = local_87 & pbVar22[5];
                    local_8b = local_98 & pbVar22[6];
                    local_85 = local_85 & pbVar22[7];
                    local_88 = local_88 & pbVar22[8];
                    local_82 = local_82 & pbVar22[9];
                    local_81 = local_81 & pbVar22[10];
                    local_86 = local_86 & pbVar22[0xe];
                    local_63 = local_63 & pbVar22[0xb];
                    local_83 = local_83 & pbVar22[0xc];
                    local_64 = local_64 & pbVar22[0xd];
                    pbVar22 = pbVar23;
                    local_62 = local_89;
                    local_98 = local_8b;
                  } while (pbVar23 != pbVar9 + (ulong)(iVar26 - 2) * 0x70 + 0xe0);
                }
                uVar16 = ApplyDecorations_isra_0
                                   (bVar27,local_8c,local_62,local_8a,local_84,local_87,local_8b,
                                    local_85,local_88,local_82,local_81,local_63,local_83,local_64,
                                    local_86);
                piVar24[0x98] = extraout_XMM0_Da | uVar16;
              }
              break;
            }
            uVar19 = uVar19 + 1;
            piVar29 = piVar29 + 0x38;
          } while (uVar19 != uVar28);
          if (local_68 == 0xc) {
            piVar24[7] = 7;
          }
          uVar16 = piVar25[7];
          if ((uVar16 & 0xff0000) == 0x10000) {
            uVar8 = *(undefined8 *)(piVar25 + 0x11);
            *(undefined8 *)(piVar24 + 9) = *(undefined8 *)(piVar25 + 0xf);
            *(undefined8 *)(piVar24 + 0xb) = uVar8;
            *(undefined8 *)(piVar24 + 0xd) = *(undefined8 *)(piVar25 + 0x13);
            uVar16 = piVar25[7];
          }
          if ((~uVar16 & 0x50000) == 0) {
            uVar8 = *(undefined8 *)(piVar25 + 0x11);
            *(undefined8 *)(piVar24 + 9) = *(undefined8 *)(piVar25 + 0xf);
            *(undefined8 *)(piVar24 + 0xb) = uVar8;
            *(undefined8 *)(piVar24 + 0xd) = *(undefined8 *)(piVar25 + 0x13);
          }
          uVar16 = piVar25[0x15];
          if (uVar16 != 0) {
            piVar24[0x6a] = uVar16;
            iVar26 = 1;
            lVar15 = 0;
            do {
              iVar6 = *(int *)((long)piVar25 + lVar15 + 0x58);
              *(int *)((long)piVar24 + lVar15 + 0x1ac) = iVar6;
              lVar15 = lVar15 + 4;
              iVar26 = iVar26 * iVar6;
            } while ((ulong)uVar16 * 4 - lVar15 != 0);
            piVar24[0x8b] = iVar26;
          }
          local_78 = local_78 + 1;
          *(ulong *)(piVar24 + 0x96) = CONCAT44(piVar12[0x1b],piVar12[0x1d]);
        }
        uVar28 = *(ulong *)(param_1 + 0x38);
        uVar31 = uVar31 + 1;
        if (uVar28 <= uVar31) {
          if (*(uint *)(param_2 + 0x50) != 0) {
            qsort(*(void **)(param_2 + 0x58),(ulong)*(uint *)(param_2 + 0x50),0x268,
                  SortCompareDescriptorBinding);
            return 0;
          }
          return 0;
        }
        piVar29 = *(int **)(param_1 + 0x40);
      } while( true );
    }
  }
  return 0;
}



ulong ParseEntryPoints(ulong *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong __nmemb;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulong __nmemb_00;
  int *piVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  size_t __nmemb_01;
  ulong *puVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  size_t *psVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  undefined4 *local_110;
  ulong local_108;
  undefined4 *local_100;
  ulong local_f8;
  long *local_f0;
  void *local_e8;
  long local_d8;
  long local_d0;
  int local_a4;
  size_t local_a0;
  undefined1 local_98 [8];
  char local_90;
  undefined7 uStack_8f;
  long alStack_88 [9];
  long local_40;
  
  uVar16 = (uint)param_1[9];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar16 == 0) {
    uVar9 = 0;
    goto LAB_00102aad;
  }
  *(uint *)(param_2 + 0x14) = uVar16;
  pvVar6 = calloc((ulong)uVar16,0x98);
  *(void **)(param_2 + 0x18) = pvVar6;
  if (pvVar6 != (void *)0x0) {
    __nmemb_00 = (ulong)*(uint *)(param_2 + 0x50);
    if (__nmemb_00 == 0) {
      local_108 = (ulong)*(uint *)(param_2 + 0x498);
      if (local_108 == 0) {
        local_100 = (undefined4 *)0x0;
        local_110 = (undefined4 *)0x0;
LAB_00102757:
        local_f8 = 0;
        uVar32 = 0;
        do {
          uVar26 = param_1[7];
          if (uVar26 <= uVar32) break;
          piVar18 = (int *)param_1[8];
          if (piVar18[uVar32 * 0x38 + 1] == 0xf) {
            uVar19 = param_1[1];
            uVar9 = (ulong)(piVar18[uVar32 * 0x38 + 6] + 1);
            if ((uVar19 != 0) && (uVar30 = *param_1, uVar9 < uVar30)) {
              uVar16 = *(uint *)(uVar19 + uVar9 * 4);
              uVar9 = (ulong)(piVar18[uVar32 * 0x38 + 6] + 2);
              plVar1 = (long *)(*(long *)(param_2 + 0x18) + local_f8 * 0x98);
              *(uint *)((long)plVar1 + 0xc) = uVar16;
              if (uVar9 < uVar30) {
                *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(uVar19 + uVar9 * 4);
                if (uVar16 < 0x14f6) {
                  if (uVar16 < 0x14c1) {
                    switch(uVar16) {
                    case 0:
                      *(undefined4 *)(plVar1 + 2) = 1;
                      break;
                    case 1:
                      *(undefined4 *)(plVar1 + 2) = 2;
                      break;
                    case 2:
                      *(undefined4 *)(plVar1 + 2) = 4;
                      break;
                    case 3:
                      *(undefined4 *)(plVar1 + 2) = 8;
                      break;
                    case 4:
                      *(undefined4 *)(plVar1 + 2) = 0x10;
                      break;
                    case 5:
                      *(undefined4 *)(plVar1 + 2) = 0x20;
                      break;
                    default:
                      if (uVar16 == 0x1493) goto switchD_00102cd5_caseD_14f4;
                      if (uVar16 == 0x1494) goto switchD_00102cd5_caseD_14f5;
                    }
                  }
                  else {
                    switch(uVar16) {
                    case 0x14c1:
                      *(undefined4 *)(plVar1 + 2) = 0x100;
                      break;
                    case 0x14c2:
                      *(undefined4 *)(plVar1 + 2) = 0x1000;
                      break;
                    case 0x14c3:
                      *(undefined4 *)(plVar1 + 2) = 0x200;
                      break;
                    case 0x14c4:
                      *(undefined4 *)(plVar1 + 2) = 0x400;
                      break;
                    case 0x14c5:
                      *(undefined4 *)(plVar1 + 2) = 0x800;
                      break;
                    case 0x14c6:
                      *(undefined4 *)(plVar1 + 2) = 0x2000;
                      break;
                    case 0x14f4:
switchD_00102cd5_caseD_14f4:
                      *(undefined4 *)(plVar1 + 2) = 0x40;
                      break;
                    case 0x14f5:
switchD_00102cd5_caseD_14f5:
                      *(undefined4 *)(plVar1 + 2) = 0x80;
                    }
                  }
                }
                uVar28 = (ulong)(uint)piVar18[uVar32 * 0x38 + 6];
                iVar27 = piVar18[uVar32 * 0x38 + 7];
                local_a4 = 0;
                uVar9 = ReadStr_constprop_0(param_1,piVar18[uVar32 * 0x38 + 6] + 3,iVar27,&local_a4)
                ;
                if ((int)uVar9 != 0) goto LAB_00102aad;
                local_f0 = (long *)0x0;
                *plVar1 = uVar19 + 0xc + (uVar28 & 0xffffffff) * 4;
                iVar20 = (local_a4 + 3U >> 2) + 3;
                uVar16 = iVar27 - iVar20;
                if (uVar16 != 0) {
                  __nmemb = (ulong)uVar16;
                  local_f0 = (long *)calloc(__nmemb,4);
                  if (local_f0 == (long *)0x0) goto LAB_001035b0;
                  uVar21 = iVar20 + (int)uVar28;
                  uVar9 = (ulong)uVar21;
                  if (uVar30 <= uVar9) goto LAB_00102aa8;
                  puVar17 = (undefined4 *)local_f0;
                  while( true ) {
                    uVar21 = uVar21 + 1;
                    *puVar17 = *(undefined4 *)(uVar19 + uVar9 * 4);
                    if (iVar27 + (int)uVar28 == uVar21) break;
                    uVar9 = (ulong)uVar21;
                    puVar17 = puVar17 + 1;
                    if (uVar30 <= uVar9) goto LAB_00102aa8;
                  }
                  *(uint *)(plVar1 + 6) = uVar16;
                  uVar9 = 0;
                  *(undefined4 *)((long)plVar1 + 0x14) = 0;
                  *(undefined4 *)(plVar1 + 4) = 0;
                  do {
                    uVar19 = 0;
                    piVar15 = piVar18;
                    while (*(int *)((long)local_f0 + uVar9 * 4) != *piVar15) {
                      uVar19 = uVar19 + 1;
                      piVar15 = piVar15 + 0x38;
                      if (uVar26 <= uVar19) goto LAB_00102da0;
                    }
                    if (piVar15[5] == 1) {
                      *(int *)((long)plVar1 + 0x14) = *(int *)((long)plVar1 + 0x14) + 1;
                    }
                    else if (piVar15[5] == 3) {
                      *(int *)(plVar1 + 4) = (int)plVar1[4] + 1;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 != __nmemb);
                  if (*(uint *)((long)plVar1 + 0x14) != 0) {
                    pvVar6 = calloc((ulong)*(uint *)((long)plVar1 + 0x14),8);
                    plVar1[3] = (long)pvVar6;
                    if (pvVar6 == (void *)0x0) goto LAB_001035b0;
                  }
                  if (*(uint *)(plVar1 + 4) != 0) {
                    pvVar6 = calloc((ulong)*(uint *)(plVar1 + 4),8);
                    plVar1[5] = (long)pvVar6;
                    if (pvVar6 == (void *)0x0) goto LAB_001035b0;
                  }
                  pvVar6 = calloc(__nmemb,0x178);
                  plVar1[7] = (long)pvVar6;
                  if (pvVar6 == (void *)0x0) goto LAB_001035b0;
                  uVar19 = 0;
                  local_d0 = 0;
                  local_d8 = 0;
                  while( true ) {
                    if (uVar26 == 0) goto LAB_00102da0;
                    piVar18 = (int *)param_1[8];
                    uVar9 = 0;
                    piVar15 = piVar18;
                    while (*(int *)((long)local_f0 + uVar19 * 4) != *piVar15) {
                      uVar9 = uVar9 + 1;
                      piVar15 = piVar15 + 0x38;
                      if (uVar9 == uVar26) goto LAB_00102da0;
                    }
                    lVar31 = *(long *)(*(long *)(param_2 + 0x4b8) + 0x20);
                    if (lVar31 == 0) goto LAB_00102da0;
                    piVar23 = *(int **)(*(long *)(param_2 + 0x4b8) + 0x28);
                    lVar12 = 0;
                    piVar13 = piVar23;
                    while (iVar27 = *piVar13, piVar15[3] != iVar27) {
                      lVar12 = lVar12 + 1;
                      piVar13 = piVar13 + 0x5e;
                      if (lVar31 == lVar12) goto LAB_00102da0;
                    }
                    if (piVar13[1] == 0x20) {
                      uVar9 = 0;
                      piVar14 = piVar18;
                      while (*piVar14 != iVar27) {
                        uVar9 = uVar9 + 1;
                        piVar14 = piVar14 + 0x38;
                        if (uVar9 == uVar26) goto LAB_00102da0;
                      }
                      lVar12 = 0;
                      piVar13 = piVar23;
                      while (iVar27 = *piVar13, piVar14[3] != iVar27) {
                        lVar12 = lVar12 + 1;
                        piVar13 = piVar13 + 0x5e;
                        if (lVar31 == lVar12) goto LAB_00102da0;
                      }
                    }
                    uVar9 = 0;
                    while (*piVar18 != iVar27) {
                      uVar9 = uVar9 + 1;
                      piVar18 = piVar18 + 0x38;
                      if (uVar9 == uVar26) goto LAB_00102da0;
                    }
                    piVar23 = (int *)(uVar19 * 0x178 + plVar1[7]);
                    piVar23[6] = piVar15[5];
                    local_90 = *(char *)((long)piVar15 + 0x5d);
                    uVar9 = ParseInterfaceVariable_isra_0
                                      (param_1,piVar15 + 0x16,piVar18 + 0x16,piVar13);
                    if ((int)uVar9 != 0) goto LAB_00102aad;
                    if (piVar23[6] == 1) {
                      *(int **)(plVar1[3] + local_d8 * 8) = piVar23;
                      local_d8 = local_d8 + 1;
                    }
                    else if (piVar15[5] == 3) {
                      *(int **)(plVar1[5] + local_d0 * 8) = piVar23;
                      local_d0 = local_d0 + 1;
                    }
                    *piVar23 = *piVar15;
                    *(undefined8 *)(piVar23 + 2) = *(undefined8 *)(piVar15 + 0x14);
                    *(undefined8 *)(piVar23 + 8) = *(undefined8 *)(piVar15 + 0x2c);
                    if (local_90 != '\0') {
                      piVar23[10] = piVar23[10] | 0x10;
                    }
                    cVar2 = *(char *)((long)piVar15 + 0x5d);
                    *(ulong *)(piVar23 + 4) =
                         CONCAT44((int)((ulong)*(undefined8 *)(piVar15 + 0x23) >> 0x20),
                                  (int)((ulong)*(undefined8 *)(piVar15 + 0x21) >> 0x20));
                    piVar23[0x5c] = piVar15[0x21];
                    if (cVar2 != '\0') {
                      piVar23[0xb] = piVar15[0x31];
                    }
                    uVar19 = uVar19 + 1;
                    if (__nmemb == uVar19) break;
                    uVar26 = param_1[7];
                  }
                }
                free(local_f0);
                if ((uint)param_1[10] != 0) {
                  piVar18 = (int *)param_1[0xb];
                  uVar9 = 0;
                  while (*piVar18 != (int)plVar1[1]) {
                    uVar9 = uVar9 + 1;
                    piVar18 = piVar18 + 10;
                    if (uVar9 == (uint)param_1[10]) goto LAB_00102da0;
                  }
                  local_a0 = 1;
                  uVar16 = piVar18[1];
                  if (uVar16 == 0) {
LAB_00103515:
                    piVar15 = (int *)calloc(local_a0,4);
                    if (piVar15 == (int *)0x0) goto LAB_001035b0;
                    psVar29 = &local_a0;
                  }
                  else {
                    lVar31 = *(long *)(piVar18 + 4);
                    uVar26 = 0;
                    psVar29 = &local_a0;
                    do {
                      uVar9 = TraverseCallGraph(param_1,*(undefined8 *)(lVar31 + uVar26 * 8),psVar29
                                                ,0,1);
                      if ((int)uVar9 != 0) goto LAB_00102aad;
                      uVar26 = uVar26 + 1;
                    } while (uVar26 != uVar16);
                    piVar15 = (int *)0x0;
                    if (local_a0 != 0) goto LAB_00103515;
                  }
                  local_a0 = 0;
                  uVar16 = TraverseCallGraph(param_1,piVar18,psVar29,piVar15,0);
                  if (uVar16 != 0) {
                    free(piVar15);
                    uVar9 = (ulong)uVar16;
                    goto LAB_00102aad;
                  }
                  if ((local_a0 == 0) ||
                     (qsort(piVar15,local_a0,4,SortCompareUint32), local_a0 == 0)) {
LAB_00102bac:
                    uVar9 = 0;
                    free(piVar15);
                    local_f0 = (long *)0x0;
                    uVar16 = 0;
                  }
                  else {
                    lVar31 = 0;
                    piVar18 = piVar15;
                    do {
                      if (piVar15[lVar31] != *piVar18) {
                        piVar15[lVar31 + 1] = *piVar18;
                        lVar31 = lVar31 + 1;
                      }
                      piVar18 = piVar18 + 1;
                    } while (piVar18 != piVar15 + local_a0);
                    local_a0 = lVar31 + 1;
                    if (local_a0 == 0) goto LAB_00102bac;
                    uVar9 = param_1[0xb];
                    uVar16 = 0;
                    lVar12 = 0;
                    piVar18 = piVar15;
                    do {
                      piVar23 = (int *)(uVar9 + lVar12 * 0x28);
                      iVar27 = *piVar23;
                      piVar13 = (int *)(uVar9 + 0x28 + lVar12 * 0x28);
                      while (*piVar18 != iVar27) {
                        lVar12 = lVar12 + 1;
                        iVar27 = *piVar13;
                        piVar23 = piVar13;
                        piVar13 = piVar13 + 10;
                      }
                      piVar18 = piVar18 + 1;
                      uVar16 = uVar16 + piVar23[6];
                    } while (piVar18 != piVar15 + lVar31 + 1);
                    local_f0 = (long *)0x0;
                    if ((uVar16 != 0) &&
                       (local_f0 = (long *)calloc((ulong)uVar16,0x10), local_f0 == (long *)0x0)) {
                      free(piVar15);
                      goto LAB_001035b0;
                    }
                    lVar12 = 0;
                    uVar16 = 0;
                    piVar18 = piVar15;
                    do {
                      piVar23 = (int *)(uVar9 + lVar12 * 0x28);
                      iVar27 = *piVar23;
                      piVar13 = (int *)(uVar9 + 0x28 + lVar12 * 0x28);
                      while (*piVar18 != iVar27) {
                        lVar12 = lVar12 + 1;
                        iVar27 = *piVar13;
                        piVar23 = piVar13;
                        piVar13 = piVar13 + 10;
                      }
                      piVar18 = piVar18 + 1;
                      memcpy(local_f0 + (ulong)uVar16 * 2,*(void **)(piVar23 + 8),
                             (ulong)(uint)piVar23[6] << 4);
                      uVar16 = uVar16 + piVar23[6];
                    } while (piVar15 + lVar31 + 1 != piVar18);
                    uVar9 = (ulong)uVar16;
                    free(piVar15);
                    if (uVar16 != 0) {
                      qsort(local_f0,uVar9,0x10,SortCompareAccessedVariable);
                    }
                  }
                  uVar21 = IntersectSortedAccessedVariable_constprop_0
                                     (local_f0,uVar9,local_110,__nmemb_00,plVar1 + 0xb,local_98);
                  if ((uVar21 == 0) &&
                     (uVar21 = IntersectSortedAccessedVariable_constprop_0
                                         (local_f0,uVar9,local_100,local_108,plVar1 + 0xd),
                     uVar21 == 0)) {
                    if (*(int *)(param_2 + 0x50) != 0) {
                      lVar31 = 0;
                      uVar21 = 0;
LAB_00102c55:
                      piVar18 = (int *)(*(long *)(param_2 + 0x58) + lVar31);
                      if (uVar16 == 0) goto LAB_0010292d;
                      __nmemb_01 = 0;
                      plVar10 = local_f0;
                      do {
                        if (*(int *)((long)plVar10 + 0xc) == *piVar18) {
                          piVar18[0x8c] = 1;
                          lVar12 = *plVar10;
                          if ((((lVar12 != 0) && (*(int *)(lVar12 + 4) == 0x41)) &&
                              (*(int *)(lVar12 + 0x1c) == 6)) &&
                             ((piVar18[0x99] == 5 || (piVar18[0x99] == 0x14)))) {
                            __nmemb_01 = (size_t)((int)__nmemb_01 + 1);
                          }
                        }
                        plVar10 = plVar10 + 2;
                      } while (local_f0 + (ulong)uVar16 * 2 != plVar10);
                      if ((int)__nmemb_01 != 0) {
                        uVar4 = piVar18[0x90];
                        if (uVar4 == 0) {
                          local_e8 = calloc(__nmemb_01,4);
                          *(void **)(piVar18 + 0x92) = local_e8;
                        }
                        else {
                          uVar9 = (ulong)(uVar4 + (int)__nmemb_01);
                          pvVar6 = *(void **)(piVar18 + 0x92);
                          pvVar11 = calloc(uVar9,4);
                          *(void **)(piVar18 + 0x92) = pvVar11;
                          __memcpy_chk(pvVar11,pvVar6,(ulong)uVar4 << 2,uVar9 << 2);
                          free(pvVar6);
                          local_e8 = *(void **)(piVar18 + 0x92);
                        }
                        puVar22 = param_1;
                        plVar10 = local_f0;
                        if (local_e8 != (void *)0x0) {
LAB_00102e5d:
                          if ((((*(int *)((long)plVar10 + 0xc) == *piVar18) &&
                               (lVar12 = *plVar10, lVar12 != 0)) &&
                              ((*(int *)(lVar12 + 4) == 0x41 && (*(int *)(lVar12 + 0x1c) == 6)))) &&
                             ((piVar18[0x99] == 5 || (piVar18[0x99] == 0x14)))) {
                            uVar9 = puVar22[1];
                            iVar27 = *(int *)(lVar12 + 0x18);
                            if (uVar9 == 0) {
                              uVar24 = GetUint32Constant();
                              uVar26 = (ulong)uVar24;
                              if (uVar24 == 0) goto LAB_00102ec2;
                            }
                            else {
                              uVar19 = *puVar22;
                              uVar26 = 0;
                              if (iVar27 + 4 < uVar19) {
                                uVar26 = (ulong)*(uint *)(uVar9 + (ulong)(iVar27 + 4) * 4);
                              }
                              iVar20 = GetUint32Constant();
                              if (iVar20 == 0) {
                                if (iVar27 + 5 < uVar19) {
                                  uVar26 = (ulong)*(uint *)(uVar9 + (ulong)(iVar27 + 5) * 4);
                                }
LAB_00102ec2:
                                uVar19 = puVar22[7];
                                if (uVar19 != 0) {
                                  piVar15 = (int *)puVar22[8];
                                  uVar30 = 0;
                                  piVar23 = piVar15;
                                  do {
                                    if (*piVar23 == (int)uVar26) {
                                      iVar27 = piVar23[1];
                                      if (iVar27 != 0x2b) {
                                        lVar12 = 0;
                                        goto LAB_00102f14;
                                      }
                                      uVar5 = GetUint32Constant();
                                      *(undefined4 *)
                                       ((long)local_e8 + (ulong)(uint)piVar18[0x90] * 4) = uVar5;
                                      piVar18[0x90] = piVar18[0x90] + 1;
                                      break;
                                    }
                                    uVar30 = uVar30 + 1;
                                    piVar23 = piVar23 + 0x38;
                                  } while (uVar30 != uVar19);
                                }
                              }
                            }
                          }
                          goto LAB_00102e50;
                        }
                        free(local_f0);
                        goto LAB_001035b0;
                      }
                      goto LAB_0010292d;
                    }
LAB_00102954:
                    local_f8 = local_f8 + 1;
                    free(local_f0);
                    *(int *)(plVar1 + 10) = local_98._0_4_;
                    *(int *)(plVar1 + 0xc) = (int)CONCAT71(uStack_8f,local_90);
                    goto LAB_00102980;
                  }
                  free(local_f0);
                  uVar9 = (ulong)uVar21;
                  goto LAB_00102aad;
                }
LAB_00102da0:
                uVar9 = 0xc;
                goto LAB_00102aad;
              }
            }
LAB_00102aa8:
            uVar9 = 0xb;
            goto LAB_00102aad;
          }
LAB_00102980:
          uVar32 = uVar32 + 1;
        } while (local_f8 < (uint)param_1[9]);
        goto LAB_00102895;
      }
      local_110 = (undefined4 *)0x0;
LAB_00102829:
      local_100 = (undefined4 *)calloc(local_108,4);
      if (local_100 != (undefined4 *)0x0) {
        puVar17 = *(undefined4 **)(param_2 + 0x4a0);
        puVar8 = local_100;
        do {
          uVar5 = *puVar17;
          puVar7 = puVar8 + 1;
          puVar17 = puVar17 + 0x5a;
          *puVar8 = uVar5;
          puVar8 = puVar7;
        } while (puVar7 != local_100 + local_108);
        qsort(local_100,local_108,4,SortCompareUint32);
        goto LAB_00102888;
      }
    }
    else {
      local_110 = (undefined4 *)calloc(__nmemb_00,4);
      if (local_110 != (undefined4 *)0x0) {
        puVar17 = *(undefined4 **)(param_2 + 0x58);
        puVar8 = local_110;
        do {
          uVar5 = *puVar17;
          puVar7 = puVar8 + 1;
          puVar17 = puVar17 + 0x9a;
          *puVar8 = uVar5;
          puVar8 = puVar7;
        } while (puVar7 != local_110 + __nmemb_00);
        qsort(local_110,__nmemb_00,4,SortCompareUint32);
        local_108 = (ulong)*(uint *)(param_2 + 0x498);
        local_100 = (undefined4 *)0x0;
        if (local_108 != 0) goto LAB_00102829;
LAB_00102888:
        if ((int)param_1[9] != 0) goto LAB_00102757;
LAB_00102895:
        free(local_110);
        free(local_100);
        uVar9 = 0;
        goto LAB_00102aad;
      }
    }
  }
LAB_001035b0:
  uVar9 = 3;
LAB_00102aad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
LAB_00102f14:
  uVar24 = (uint)lVar12;
  if ((iVar27 == 0x7c || iVar27 == 0x3d) || (iVar27 == 0x2b)) goto LAB_0010362b;
  alStack_88[lVar12] = (long)piVar23;
  if (lVar12 == 7) goto LAB_00102e50;
  if ((uVar9 != 0) && ((ulong)(piVar23[6] + 3) < *puVar22)) {
    uVar26 = (ulong)*(uint *)(uVar9 + (ulong)(piVar23[6] + 3) * 4);
  }
  uVar30 = 0;
  piVar23 = piVar15;
  while (*piVar23 != (int)uVar26) {
    uVar30 = uVar30 + 1;
    piVar23 = piVar23 + 0x38;
    if (uVar30 == uVar19) {
      uVar24 = uVar24 + 1;
      goto LAB_00103296;
    }
  }
  iVar27 = piVar23[1];
  lVar12 = lVar12 + 1;
  goto LAB_00102f14;
LAB_0010362b:
  if (uVar24 != 0) {
LAB_00103296:
    uVar26 = (ulong)uVar24;
    uVar9 = 0;
    do {
      uVar26 = (ulong)((int)uVar26 - 1);
      lVar12 = alStack_88[uVar26];
      uVar24 = GetUint32Constant();
      if (uVar24 == 0xffffffff) {
switchD_001032fa_caseD_81:
        goto LAB_00102e50;
      }
      uVar3 = *(uint *)(lVar12 + 4);
      uVar25 = (uint)uVar9;
      if (0x87 < uVar3) {
        if (uVar3 == 0xc2) {
          uVar9 = (ulong)(uVar25 >> ((byte)uVar24 & 0x1f));
          goto LAB_00103307;
        }
        goto switchD_001032fa_caseD_81;
      }
      if (uVar3 < 0x80) goto switchD_001032fa_caseD_81;
      switch(uVar3) {
      case 0x80:
        uVar9 = (ulong)(uVar25 + uVar24);
        break;
      default:
        goto switchD_001032fa_caseD_81;
      case 0x82:
        uVar9 = (ulong)(uVar25 - uVar24);
        break;
      case 0x84:
        uVar9 = (ulong)(uVar25 * uVar24);
        break;
      case 0x86:
      case 0x87:
        uVar9 = (uVar9 & 0xffffffff) / (ulong)uVar24;
      }
LAB_00103307:
      uVar24 = (uint)uVar9;
    } while ((int)uVar26 != 0);
  }
  *(uint *)((long)local_e8 + (ulong)(uint)piVar18[0x90] * 4) = uVar24;
  piVar18[0x90] = piVar18[0x90] + 1;
LAB_00102e50:
  plVar10 = plVar10 + 2;
  if (local_f0 + (ulong)uVar16 * 2 == plVar10) goto LAB_001028b0;
  goto LAB_00102e5d;
LAB_001028b0:
  if (uVar4 != 0) {
    qsort(local_e8,(ulong)(uint)piVar18[0x90],4,SortCompareUint32);
    uVar4 = piVar18[0x90];
    if ((ulong)uVar4 != 0) {
      piVar15 = *(int **)(piVar18 + 0x92);
      lVar12 = 0;
      piVar23 = piVar15;
      do {
        if (piVar15[lVar12] != *piVar23) {
          piVar15[lVar12 + 1] = *piVar23;
          lVar12 = lVar12 + 1;
        }
        piVar23 = piVar23 + 1;
      } while (piVar23 != piVar15 + uVar4);
      uVar4 = (int)lVar12 + 1;
    }
    piVar18[0x90] = uVar4;
  }
LAB_0010292d:
  uVar21 = uVar21 + 1;
  lVar31 = lVar31 + 0x268;
  if (*(uint *)(param_2 + 0x50) <= uVar21) goto LAB_00102954;
  goto LAB_00102c55;
}



undefined8 ParseType(ulong *param_1,int *param_2,long param_3,long param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong *puVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  
  bVar16 = 0;
  uVar15 = param_2[0x32];
  if (uVar15 != 0) {
    lVar10 = *(long *)(*(long *)(param_4 + 0x4b8) + 0x20);
    if (lVar10 != 0) {
      piVar8 = *(int **)(*(long *)(param_4 + 0x4b8) + 0x28);
      lVar13 = 0;
      do {
        if (*param_2 == *piVar8) goto LAB_00103787;
        lVar13 = lVar13 + 1;
        piVar8 = piVar8 + 0x5e;
      } while (lVar13 != lVar10);
    }
    piVar8 = (int *)0x0;
LAB_00103787:
    *(int **)(param_5 + 0x58) = piVar8;
    param_5[0x5b] = uVar15;
    puVar2 = (undefined8 *)calloc((ulong)uVar15,0x178);
    *(undefined8 **)(param_5 + 0x5c) = puVar2;
    uVar5 = _LC1;
    if (puVar2 == (undefined8 *)0x0) {
      return 3;
    }
    uVar15 = *(uint *)((long)puVar2 + 0x16c);
    if (uVar15 != 0) {
      puVar3 = puVar2;
      do {
        *puVar3 = uVar5;
        puVar4 = puVar3 + 0x2f;
        *(undefined4 *)(puVar3 + 3) = 0xffffffff;
        puVar3 = puVar4;
      } while (puVar4 != puVar2 + (ulong)uVar15 * 0x2f);
    }
  }
  uVar15 = param_2[1];
  if (*param_5 == -1) {
    *(undefined8 *)param_5 = *(undefined8 *)param_2;
  }
  iVar1 = ApplyDecorations_isra_0
                    ((char)param_2[0x16],*(undefined1 *)((long)param_2 + 0x59),
                     *(undefined1 *)((long)param_2 + 0x5a),*(undefined1 *)((long)param_2 + 0x5b),
                     (char)param_2[0x17],*(undefined1 *)((long)param_2 + 0x5d),
                     *(undefined1 *)((long)param_2 + 0x5e),*(undefined1 *)((long)param_2 + 0x5f),
                     (char)param_2[0x18],*(undefined1 *)((long)param_2 + 0x61),
                     *(undefined1 *)((long)param_2 + 0x62),*(undefined1 *)((long)param_2 + 99),
                     (char)param_2[0x19],*(undefined1 *)((long)param_2 + 0x65),
                     *(undefined1 *)((long)param_2 + 0x66));
  param_5[8] = iVar1;
  if (0x20 < uVar15) {
    if (uVar15 == 0x14dd) {
      param_5[7] = param_5[7] | 0x100000;
    }
    goto switchD_00103709_caseD_1f;
  }
  if (uVar15 < 0x13) goto switchD_00103709_caseD_1f;
  switch(uVar15) {
  case 0x13:
    param_5[7] = param_5[7] | 1;
  default:
switchD_00103709_caseD_1f:
    if (*(long *)(param_5 + 2) == 0) {
      *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_2 + 0x14);
    }
    return 0;
  case 0x14:
    param_5[7] = param_5[7] | 2;
    goto switchD_00103709_caseD_1f;
  case 0x15:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 4;
    if (uVar7 != 0) {
      uVar6 = *param_1;
      if (param_2[6] + 2 < uVar6) {
        param_5[9] = *(int *)(uVar7 + (ulong)(param_2[6] + 2) * 4);
        if (param_2[6] + 3 < uVar6) {
          param_5[10] = *(int *)(uVar7 + (ulong)(param_2[6] + 3) * 4);
          goto switchD_00103709_caseD_1f;
        }
      }
    }
    return 0xb;
  case 0x16:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 8;
    if (uVar7 == 0) {
      return 0xb;
    }
    if (*param_1 <= (ulong)(param_2[6] + 2)) {
      return 0xb;
    }
    param_5[9] = *(int *)(uVar7 + (ulong)(param_2[6] + 2) * 4);
    goto switchD_00103709_caseD_1f;
  case 0x17:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 0x100;
    if (uVar7 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      uVar6 = (ulong)(param_2[6] + 2);
      if (uVar6 < *param_1) {
        uVar12 = (ulong)(param_2[6] + 3);
        iVar1 = *(int *)(uVar7 + uVar6 * 4);
        if (uVar12 < *param_1) {
          param_5[0xb] = *(int *)(uVar7 + uVar12 * 4);
        }
      }
    }
    if (param_1[7] != 0) {
      piVar8 = (int *)param_1[8];
      uVar7 = 0;
      do {
        if (*piVar8 == iVar1) goto LAB_00103910;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x38;
      } while (uVar7 != param_1[7]);
    }
    break;
  case 0x18:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 0x200;
    if (uVar7 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      uVar6 = (ulong)(param_2[6] + 2);
      if (uVar6 < *param_1) {
        uVar12 = (ulong)(param_2[6] + 3);
        iVar1 = *(int *)(uVar7 + uVar6 * 4);
        if (uVar12 < *param_1) {
          param_5[0xc] = *(int *)(uVar7 + uVar12 * 4);
        }
      }
    }
    if (param_1[7] != 0) {
      piVar8 = (int *)param_1[8];
      uVar7 = 0;
      do {
        if (*piVar8 == iVar1) {
          uVar5 = ParseType(param_1,piVar8,0,param_4,param_5);
          *(ulong *)(param_5 + 0xd) = CONCAT44(param_2[0x2f],param_5[0xb]);
          if (param_3 != 0) {
            param_5[0xe] = *(int *)(param_3 + 100);
          }
          goto LAB_00103920;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x38;
      } while (uVar7 != param_1[7]);
    }
    *(ulong *)(param_5 + 0xd) = CONCAT44(param_2[0x2f],param_5[0xb]);
    if (param_3 != 0) {
      param_5[0xe] = *(int *)(param_3 + 100);
    }
    break;
  case 0x19:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 0x10000;
    if (uVar7 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      if ((ulong)(param_2[6] + 2) < *param_1) {
        iVar1 = *(int *)(uVar7 + (ulong)(param_2[6] + 2) * 4);
      }
    }
    if (param_1[7] != 0) {
      piVar8 = (int *)param_1[8];
      uVar7 = 0;
      do {
        if (*piVar8 == iVar1) {
          uVar5 = ParseType(param_1,piVar8,0,param_4,param_5);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          iVar1 = param_2[6];
          uVar7 = param_1[1];
          uVar6 = (ulong)(iVar1 + 3);
          if (uVar7 == 0) {
            return 0xb;
          }
          uVar12 = *param_1;
          if (uVar12 <= uVar6) {
            return 0xb;
          }
          param_5[0xf] = *(int *)(uVar7 + uVar6 * 4);
          uVar6 = (ulong)(iVar1 + 4);
          if (uVar12 <= uVar6) {
            return 0xb;
          }
          param_5[0x10] = *(int *)(uVar7 + uVar6 * 4);
          if (uVar12 <= param_2[6] + 5) {
            return 0xb;
          }
          param_5[0x11] = *(int *)(uVar7 + (ulong)(param_2[6] + 5) * 4);
          if (uVar12 <= param_2[6] + 6) {
            return 0xb;
          }
          param_5[0x12] = *(int *)(uVar7 + (ulong)(param_2[6] + 6) * 4);
          if (uVar12 <= param_2[6] + 7) {
            return 0xb;
          }
          param_5[0x13] = *(int *)(uVar7 + (ulong)(param_2[6] + 7) * 4);
          if (uVar12 <= param_2[6] + 8) {
            return 0xb;
          }
          param_5[0x14] = *(int *)(uVar7 + (ulong)(param_2[6] + 8) * 4);
          goto switchD_00103709_caseD_1f;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x38;
      } while (param_1[7] != uVar7);
    }
    break;
  case 0x1a:
    param_5[7] = param_5[7] | 0x20000;
    goto switchD_00103709_caseD_1f;
  case 0x1b:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 0x40000;
    if (uVar7 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      if ((ulong)(param_2[6] + 2) < *param_1) {
        iVar1 = *(int *)(uVar7 + (ulong)(param_2[6] + 2) * 4);
      }
    }
    if (param_1[7] != 0) {
      piVar8 = (int *)param_1[8];
      uVar7 = 0;
      do {
        if (*piVar8 == iVar1) goto LAB_00103910;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x38;
      } while (uVar7 != param_1[7]);
    }
    break;
  case 0x1c:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 0x20000000;
    if (uVar7 == 0) {
LAB_00103ee3:
      iVar1 = -1;
      iVar14 = -1;
      uVar5 = 0xb;
    }
    else {
      uVar6 = (ulong)(param_2[6] + 2);
      if (*param_1 <= uVar6) goto LAB_00103ee3;
      uVar12 = (ulong)(param_2[6] + 3);
      iVar1 = *(int *)(uVar7 + uVar6 * 4);
      if (uVar12 < *param_1) {
        iVar14 = *(int *)(uVar7 + uVar12 * 4);
        uVar5 = 0;
      }
      else {
        iVar14 = -1;
        uVar5 = 0xb;
      }
    }
    uVar6 = param_1[7];
    param_5[0x56] = param_2[0x2e];
    if (uVar6 != 0) {
      piVar8 = (int *)param_1[8];
      uVar12 = 0;
      piVar11 = piVar8;
      do {
        if (*piVar11 == iVar14) {
          if ((((int)uVar5 == 0) && (uVar7 != 0)) && ((ulong)(piVar11[6] + 3) < *param_1)) {
            uVar15 = param_5[0x15];
            param_5[(ulong)uVar15 + 0x16] = *(int *)(uVar7 + (ulong)(piVar11[6] + 3) * 4);
            param_5[0x15] = uVar15 + 1;
            if ((piVar11[1] - 0x30U < 3) || (iVar14 = -1, piVar11[1] == 0x34)) {
              iVar14 = piVar11[0x30];
            }
            param_5[(ulong)uVar15 + 0x36] = iVar14;
          }
          else {
            uVar5 = 0xc;
          }
          uVar7 = 0;
          goto LAB_00103c74;
        }
        uVar12 = uVar12 + 1;
        piVar11 = piVar11 + 0x38;
      } while (uVar12 != uVar6);
    }
    break;
  case 0x1d:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 0x20000000;
    if (uVar7 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      if ((ulong)(param_2[6] + 2) < *param_1) {
        iVar1 = *(int *)(uVar7 + (ulong)(param_2[6] + 2) * 4);
      }
    }
    uVar15 = param_5[0x15];
    param_5[0x56] = param_2[0x2e];
    param_5[(ulong)uVar15 + 0x16] = 0;
    param_5[(ulong)uVar15 + 0x36] = -1;
    uVar7 = param_1[7];
    param_5[0x15] = uVar15 + 1;
    if (uVar7 != 0) {
      piVar8 = (int *)param_1[8];
      uVar6 = 0;
      do {
        if (*piVar8 == iVar1) goto LAB_00103910;
        uVar6 = uVar6 + 1;
        piVar8 = piVar8 + 0x38;
      } while (uVar6 != uVar7);
    }
    break;
  case 0x1e:
    param_5[7] = param_5[7] | 0x10080000;
    uVar15 = 2;
    if (2 < (uint)param_2[7]) {
      do {
        uVar7 = (ulong)(uVar15 - 2);
        if (param_1[1] == 0) {
          iVar1 = -1;
        }
        else {
          iVar1 = -1;
          if ((ulong)(param_2[6] + uVar15) < *param_1) {
            iVar1 = *(int *)(param_1[1] + (ulong)(param_2[6] + uVar15) * 4);
          }
        }
        if (param_1[7] == 0) {
          return 0xc;
        }
        piVar8 = (int *)param_1[8];
        uVar6 = 0;
        while (*piVar8 != iVar1) {
          uVar6 = uVar6 + 1;
          piVar8 = piVar8 + 0x38;
          if (uVar6 == param_1[7]) {
            return 0xc;
          }
        }
        puVar2 = (undefined8 *)(uVar7 * 0x178 + *(long *)(param_5 + 0x5c));
        lVar10 = *(long *)(param_2 + 0x36);
        *puVar2 = CONCAT44(piVar8[1],iVar1);
        uVar5 = ParseType(param_1,piVar8,uVar7 * 0x70 + lVar10,param_4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar15 = uVar15 + 1;
        puVar2[2] = *(undefined8 *)(*(long *)(param_2 + 0x34) + uVar7 * 8);
      } while (uVar15 < (uint)param_2[7]);
    }
    goto switchD_00103709_caseD_1f;
  case 0x20:
    uVar7 = param_1[1];
    param_5[7] = param_5[7] | 0x40000000;
    if ((uVar7 == 0) || (*param_1 <= (ulong)(param_2[6] + 2))) {
      iVar1 = param_5[6];
    }
    else {
      iVar1 = *(int *)(uVar7 + (ulong)(param_2[6] + 2) * 4);
      param_5[6] = iVar1;
    }
    if (iVar1 == 0x14e5) {
      uVar15 = (uint)param_1[0x90];
      if (uVar15 == 0) {
        *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
        param_1[0x10] = (ulong)param_5;
        *(undefined4 *)(param_1 + 0x90) = 1;
      }
      else {
        puVar9 = param_1;
        do {
          piVar8 = (int *)puVar9[0x10];
          if (*param_5 == *piVar8) {
            *(undefined8 *)param_5 = *(undefined8 *)piVar8;
            *(undefined8 *)(param_5 + 0x5c) = *(undefined8 *)(piVar8 + 0x5c);
            lVar10 = (long)param_5 - (long)((ulong)(param_5 + 2) & 0xfffffffffffffff8);
            puVar2 = (undefined8 *)((long)piVar8 - lVar10);
            puVar3 = (undefined8 *)((ulong)(param_5 + 2) & 0xfffffffffffffff8);
            for (uVar7 = (ulong)((int)lVar10 + 0x178U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + (ulong)bVar16 * -2 + 1;
              puVar3 = puVar3 + (ulong)bVar16 * -2 + 1;
            }
            param_5[0x5a] = 1;
            return 0;
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 != param_1 + uVar15);
        *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
        param_1[(ulong)uVar15 + 0x10] = (ulong)param_5;
        *(uint *)(param_1 + 0x90) = uVar15 + 1;
        if (0x7f < uVar15 + 1) {
          return 0x15;
        }
      }
    }
    if (param_1[7] != 0) {
      piVar8 = (int *)param_1[8];
      uVar7 = 0;
      do {
        if (param_2[3] == *piVar8) {
          if (piVar8[1] != 0x1e) goto LAB_00103910;
          lVar10 = *(long *)(*(long *)(param_4 + 0x4b8) + 0x20);
          if (lVar10 == 0) goto LAB_00104035;
          piVar11 = *(int **)(*(long *)(param_4 + 0x4b8) + 0x28);
          lVar13 = 0;
          goto LAB_00103ea3;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x38;
      } while (param_1[7] != uVar7);
    }
  }
  return 0xc;
  while( true ) {
    lVar13 = lVar13 + 1;
    piVar11 = piVar11 + 0x5e;
    if (lVar10 == lVar13) break;
LAB_00103ea3:
    if (param_2[3] == *piVar11) goto LAB_00103ea7;
  }
LAB_00104035:
  piVar11 = (int *)0x0;
LAB_00103ea7:
  *(int **)(param_5 + 0x58) = piVar11;
LAB_00103910:
  uVar5 = ParseType(param_1,piVar8,0,param_4,param_5);
LAB_00103920:
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  goto switchD_00103709_caseD_1f;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 0x38;
    if (uVar7 == uVar6) break;
LAB_00103c74:
    if (*piVar8 == iVar1) goto LAB_00103910;
  }
  goto LAB_00103920;
}



undefined8 ParseDescriptorBlockVariable(long param_1,long param_2,int *param_3,long param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  void *pvVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  undefined4 *puVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  int *piVar22;
  undefined8 *puVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  byte bVar28;
  byte bVar29;
  
  bVar29 = 0;
  lVar25 = *(long *)(param_3 + 0x5c);
  if (lVar25 != 0) {
    uVar24 = param_3[0x5b];
    if (uVar24 != 0) {
      *(uint *)(param_4 + 0x148) = uVar24;
      pvVar10 = calloc((ulong)uVar24,0x168);
      *(void **)(param_4 + 0x150) = pvVar10;
      if (pvVar10 == (void *)0x0) {
        return 3;
      }
      lVar27 = *(long *)(param_1 + 0x38);
      if (lVar27 != 0) {
        lVar20 = 0;
        piVar26 = *(int **)(param_1 + 0x40);
        piVar11 = piVar26;
        do {
          if (*param_3 == *piVar11) goto LAB_00104130;
          lVar20 = lVar20 + 1;
          piVar11 = piVar11 + 0x38;
        } while (lVar20 != lVar27);
      }
      return 0xc;
    }
  }
  uVar12 = *(undefined8 *)(param_3 + 2);
  *(int **)(param_4 + 0x158) = param_3;
  *(undefined8 *)(param_4 + 8) = uVar12;
  return 0;
LAB_00104130:
  while (piVar11[1] - 0x1cU < 2) {
    piVar14 = piVar11 + 9;
    if (piVar11[1] == 0x1c) {
      lVar20 = 0;
      piVar11 = piVar26;
      while (*piVar11 != *piVar14) {
        lVar20 = lVar20 + 1;
        piVar11 = piVar11 + 0x38;
        if (lVar20 == lVar27) {
          return 0xc;
        }
      }
    }
    else {
      lVar20 = *(long *)(*(long *)(param_2 + 0x4b8) + 0x20);
      if (lVar20 == 0) {
        return 0xc;
      }
      piVar15 = *(int **)(*(long *)(param_2 + 0x4b8) + 0x28);
      lVar16 = 0;
      while (*piVar15 != *piVar14) {
        lVar16 = lVar16 + 1;
        piVar15 = piVar15 + 0x5e;
        if (lVar16 == lVar20) {
          return 0xc;
        }
      }
      lVar20 = 0;
      piVar11 = piVar26;
      while (*piVar11 != *piVar15) {
        lVar20 = lVar20 + 1;
        piVar11 = piVar11 + 0x38;
        if (lVar20 == lVar27) {
          return 0xc;
        }
      }
    }
  }
  lVar27 = 0;
  bVar28 = 0;
  do {
    piVar26 = (int *)(lVar25 + lVar27 * 0x178);
    pvVar10 = (void *)((long)pvVar10 + lVar27 * 0x168);
    if ((*(ulong *)(piVar26 + 6) & 0x40000000ffffffff) == 0x40000000000014e5) {
      iVar19 = *piVar26;
      if (piVar26[1] == 0x1c) {
        if (*(long *)(param_1 + 0x38) == 0) {
          return 0xc;
        }
        piVar14 = *(int **)(param_1 + 0x40);
        lVar25 = 0;
        while (*piVar14 != iVar19) {
          lVar25 = lVar25 + 1;
          piVar14 = piVar14 + 0x38;
          if (*(long *)(param_1 + 0x38) == lVar25) {
            return 0xc;
          }
        }
        lVar25 = *(long *)(param_2 + 0x4b8);
        if (*(long *)(lVar25 + 0x20) == 0) {
          return 0xc;
        }
        piVar15 = *(int **)(lVar25 + 0x28);
        lVar20 = 0;
        while (iVar19 = *piVar15, piVar14[9] != iVar19) {
          lVar20 = lVar20 + 1;
          piVar15 = piVar15 + 0x5e;
          if (lVar20 == *(long *)(lVar25 + 0x20)) {
            return 0xc;
          }
        }
        uVar17 = (ulong)*(uint *)(param_1 + 0x480);
        if (*(uint *)(param_1 + 0x480) != 0) goto LAB_0010438f;
        lVar20 = *(long *)(lVar25 + 0x20);
      }
      else {
        uVar17 = (ulong)*(uint *)(param_1 + 0x480);
        piVar15 = piVar26;
        if (*(uint *)(param_1 + 0x480) != 0) {
LAB_0010438f:
          lVar25 = param_1;
          do {
            if (**(int **)(lVar25 + 0x80) == iVar19) {
              bVar8 = true;
              goto LAB_001043bd;
            }
            lVar25 = lVar25 + 8;
          } while (lVar25 != param_1 + uVar17 * 8);
        }
        lVar25 = *(long *)(param_2 + 0x4b8);
        lVar20 = *(long *)(lVar25 + 0x20);
        if (lVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
      }
      piVar14 = *(int **)(lVar25 + 0x28);
      lVar25 = 0;
      while (iVar19 != *piVar14) {
        lVar25 = lVar25 + 1;
        piVar14 = piVar14 + 0x5e;
        if (lVar25 == lVar20) {
          uVar12 = ParseDescriptorBlockVariable_cold();
          return uVar12;
        }
      }
      uVar24 = *(uint *)(param_1 + 0x490);
      puVar18 = (undefined4 *)((ulong)uVar24 * 0x10 + *(long *)(param_1 + 0x488));
      *puVar18 = **(undefined4 **)(piVar14 + 0x58);
      *(void **)(puVar18 + 2) = pvVar10;
      *(uint *)(param_1 + 0x490) = uVar24 + 1;
      uVar24 = (int)uVar17 + 1;
      *(int **)(param_1 + 0x80 + uVar17 * 8) = piVar15;
      *(uint *)(param_1 + 0x480) = uVar24;
      if (0x7f < uVar24) {
        return 0x15;
      }
      bVar8 = false;
LAB_001043bd:
      if (*(long *)(param_1 + 0x38) == 0) {
        return 0xc;
      }
      piVar15 = *(int **)(param_1 + 0x40);
      lVar25 = 0;
      while (iVar19 != *piVar15) {
        lVar25 = lVar25 + 1;
        piVar15 = piVar15 + 0x38;
        if (*(long *)(param_1 + 0x38) == lVar25) {
          return 0xc;
        }
      }
      lVar25 = *(long *)(*(long *)(param_2 + 0x4b8) + 0x20);
      if (lVar25 == 0) {
        return 0xc;
      }
      piVar14 = *(int **)(*(long *)(param_2 + 0x4b8) + 0x28);
      lVar20 = 0;
      while (iVar19 = *piVar14, piVar15[3] != iVar19) {
        lVar20 = lVar20 + 1;
        piVar14 = piVar14 + 0x5e;
        if (lVar20 == lVar25) {
          return 0xc;
        }
      }
      if ((*(byte *)((long)piVar14 + 0x1f) & 0x10) != 0) {
        if (!bVar8) goto LAB_001041fb;
        if (*(uint *)(param_1 + 0x490) != 0) {
          piVar15 = *(int **)(param_1 + 0x488);
          piVar22 = piVar15 + (ulong)*(uint *)(param_1 + 0x490) * 4;
          do {
            if (*piVar15 == iVar19) {
              uVar9 = *(undefined4 *)(*(long *)(piVar15 + 2) + 0x148);
              *(undefined8 *)((long)pvVar10 + 0x150) =
                   *(undefined8 *)(*(long *)(piVar15 + 2) + 0x150);
              *(ulong *)((long)pvVar10 + 0x144) =
                   CONCAT44(uVar9,*(undefined4 *)((long)pvVar10 + 0x144)) | 2;
            }
            piVar15 = piVar15 + 4;
          } while (piVar15 != piVar22);
        }
      }
      lVar25 = *(long *)(piVar11 + 0x34);
      if (piVar11[5] != 0x14e5) goto LAB_0010422b;
LAB_00104460:
      if (lVar25 != 0) goto LAB_0010422b;
    }
    else {
      pbVar1 = (byte *)((long)piVar26 + 0x1f);
      piVar14 = piVar26;
      piVar26 = (int *)0x0;
      if ((*pbVar1 & 0x10) != 0) {
LAB_001041fb:
        uVar12 = ParseDescriptorBlockVariable(param_1,param_2,piVar14);
        if ((int)uVar12 != 0) {
          return uVar12;
        }
      }
      lVar25 = *(long *)(piVar11 + 0x34);
      if (piVar11[5] == 0x14e5) goto LAB_00104460;
LAB_0010422b:
      *(undefined8 *)((long)pvVar10 + 8) = *(undefined8 *)(lVar25 + lVar27 * 8);
      lVar25 = lVar27 * 0x70;
      puVar13 = (undefined1 *)(*(long *)(piVar11 + 0x36) + lVar25);
      uVar2 = puVar13[0xe];
      uVar3 = puVar13[5];
      uVar4 = puVar13[4];
      uVar5 = puVar13[3];
      uVar6 = puVar13[1];
      *(undefined4 *)((long)pvVar10 + 0x10) = *(undefined4 *)(puVar13 + 0x40);
      uVar9 = ApplyDecorations_isra_0
                        (*puVar13,uVar6,puVar13[2],uVar5,uVar4,uVar3,puVar13[6],puVar13[7],
                         puVar13[8],puVar13[9],puVar13[10],puVar13[0xb],puVar13[0xc],puVar13[0xd],
                         uVar2);
      *(uint *)((long)pvVar10 + 0x144) = *(uint *)((long)pvVar10 + 0x144) | 1;
      *(undefined4 *)((long)pvVar10 + 0x20) = uVar9;
      uVar12 = *(undefined8 *)(piVar14 + 0xb);
      if (bVar28 == 0) {
        bVar28 = (byte)uVar9 >> 7;
      }
      *(undefined8 *)((long)pvVar10 + 0x24) = *(undefined8 *)(piVar14 + 9);
      *(undefined8 *)((long)pvVar10 + 0x2c) = uVar12;
      *(undefined8 *)((long)pvVar10 + 0x34) = *(undefined8 *)(piVar14 + 0xd);
      if (piVar14[1] == 0x1c) {
        puVar23 = (undefined8 *)((long)pvVar10 + 0x44U & 0xfffffffffffffff8);
        lVar20 = (long)pvVar10 + (0x3c - (long)puVar23);
        *(undefined8 *)((long)pvVar10 + 0x3c) = *(undefined8 *)(piVar14 + 0x15);
        *(undefined8 *)((long)pvVar10 + 0x13c) = *(undefined8 *)(piVar14 + 0x55);
        puVar21 = (undefined8 *)((long)piVar14 + (0x54 - lVar20));
        for (uVar17 = (ulong)((int)lVar20 + 0x108U >> 3); uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar23 = *puVar21;
          puVar21 = puVar21 + (ulong)bVar29 * -2 + 1;
          puVar23 = puVar23 + (ulong)bVar29 * -2 + 1;
        }
      }
      if (piVar26 == (int *)0x0) {
        piVar26 = piVar14;
      }
      uVar9 = *(undefined4 *)(*(long *)(piVar11 + 0x36) + 0x3c + lVar25);
      *(int **)((long)pvVar10 + 0x158) = piVar26;
      *(undefined4 *)((long)pvVar10 + 0x160) = uVar9;
    }
    lVar27 = lVar27 + 1;
    if ((uint)param_3[0x5b] <= (uint)lVar27) {
      uVar12 = *(undefined8 *)(param_3 + 2);
      *(int **)(param_4 + 0x158) = param_3;
      *(undefined8 *)(param_4 + 8) = uVar12;
      if (bVar28 == 0) {
        return 0;
      }
      *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) | 0x80;
      return 0;
    }
    lVar25 = *(long *)(param_3 + 0x5c);
    pvVar10 = *(void **)(param_4 + 0x150);
  } while( true );
}



undefined8 ParseExecutionModes(ulong *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  void *__ptr;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (piVar16 = (int *)param_1[8], piVar16 != (int *)0x0)) {
    uVar3 = param_1[7];
    if (uVar3 != 0) {
      piVar8 = piVar16 + 6;
      uVar7 = 0;
      do {
        if (piVar8[-5] == 0x10 || piVar8[-5] == 0x14b) {
          iVar1 = *piVar8;
          uVar10 = *param_1;
          if (uVar10 <= iVar1 + 1) {
            return 0xb;
          }
          if (*(uint *)(param_2 + 0x14) == 0) {
            return 0x13;
          }
          lVar6 = *(long *)(param_2 + 0x18);
          uVar9 = 0;
          while (*(int *)(lVar6 + 8) != *(int *)(uVar2 + (ulong)(iVar1 + 1) * 4)) {
            uVar9 = uVar9 + 1;
            lVar6 = lVar6 + 0x98;
            if (uVar9 == *(uint *)(param_2 + 0x14)) {
              return 0x13;
            }
          }
          if (uVar10 <= iVar1 + 2) {
            return 0xb;
          }
          uVar12 = *(uint *)(uVar2 + (ulong)(iVar1 + 2) * 4);
          if (uVar12 == 0x1a) {
            if (uVar10 <= iVar1 + 3) {
              return 0xb;
            }
            *(undefined4 *)(lVar6 + 0x90) = *(undefined4 *)(uVar2 + (ulong)(iVar1 + 3) * 4);
          }
          else if (uVar12 < 0x1b) {
            if (uVar12 == 0) {
              if (uVar10 <= iVar1 + 3) {
                return 0xb;
              }
              *(undefined4 *)(lVar6 + 0x8c) = *(undefined4 *)(uVar2 + (ulong)(iVar1 + 3) * 4);
            }
            else if (uVar12 == 0x11) {
              if (uVar10 <= iVar1 + 3) {
                return 0xb;
              }
              *(undefined4 *)(lVar6 + 0x80) = *(undefined4 *)(uVar2 + (ulong)(iVar1 + 3) * 4);
              if (uVar10 <= *piVar8 + 4) {
                return 0xb;
              }
              *(undefined4 *)(lVar6 + 0x84) = *(undefined4 *)(uVar2 + (ulong)(*piVar8 + 4) * 4);
              uVar12 = *piVar8 + 5;
joined_r0x0010487b:
              if (uVar10 <= uVar12) {
                return 0xb;
              }
              *(undefined4 *)(lVar6 + 0x88) = *(undefined4 *)(uVar2 + (ulong)uVar12 * 4);
            }
          }
          else if (uVar12 == 0x26) {
            if (uVar10 <= iVar1 + 3) {
              return 0xb;
            }
            if (uVar10 <= iVar1 + 4) {
              return 0xb;
            }
            if (uVar10 <= iVar1 + 5) {
              return 0xb;
            }
            uVar9 = 0;
            piVar14 = piVar16;
            do {
              if (*(int *)(uVar2 + (ulong)(iVar1 + 3) * 4) == *piVar14) {
                bVar4 = true;
                goto LAB_0010490e;
              }
              uVar9 = uVar9 + 1;
              piVar14 = piVar14 + 0x38;
            } while (uVar9 < uVar3);
            bVar4 = false;
            piVar14 = (int *)0x0;
LAB_0010490e:
            uVar9 = 0;
            piVar13 = piVar16;
            do {
              if (*(int *)(uVar2 + (ulong)(iVar1 + 4) * 4) == *piVar13) goto LAB_00104939;
              uVar9 = uVar9 + 1;
              piVar13 = piVar13 + 0x38;
            } while (uVar9 < uVar3);
            bVar4 = false;
            piVar13 = (int *)0x0;
LAB_00104939:
            uVar9 = 0;
            piVar15 = piVar16;
            do {
              if (*(int *)(uVar2 + (ulong)(iVar1 + 5) * 4) == *piVar15) {
                if (bVar4) {
                  if ((piVar14[1] - 0x30U < 3) || (piVar14[1] == 0x34)) {
                    *(undefined4 *)(lVar6 + 0x80) = 0xffffffff;
                  }
                  else {
                    if (uVar10 <= piVar14[6] + 3) {
                      return 0xb;
                    }
                    *(undefined4 *)(lVar6 + 0x80) =
                         *(undefined4 *)(uVar2 + (ulong)(piVar14[6] + 3) * 4);
                  }
                  if ((piVar13[1] - 0x30U < 3) || (piVar13[1] == 0x34)) {
                    *(undefined4 *)(lVar6 + 0x84) = 0xffffffff;
                  }
                  else {
                    if (uVar10 <= piVar13[6] + 3) {
                      return 0xb;
                    }
                    *(undefined4 *)(lVar6 + 0x84) =
                         *(undefined4 *)(uVar2 + (ulong)(piVar13[6] + 3) * 4);
                  }
                  if ((2 < piVar15[1] - 0x30U) && (piVar15[1] != 0x34)) {
                    uVar12 = piVar15[6] + 3;
                    goto joined_r0x0010487b;
                  }
                  *(undefined4 *)(lVar6 + 0x88) = 0xffffffff;
                }
                break;
              }
              uVar9 = uVar9 + 1;
              piVar15 = piVar15 + 0x38;
            } while (uVar9 < uVar3);
          }
          *(int *)(lVar6 + 0x70) = *(int *)(lVar6 + 0x70) + 1;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x38;
      } while (uVar7 != uVar3);
    }
    uVar7 = (ulong)*(uint *)(param_2 + 0x14);
    __ptr = calloc(uVar7,8);
    if (__ptr == (void *)0x0) {
      return 3;
    }
    if (uVar7 != 0) {
      uVar10 = 0;
      puVar11 = (uint *)(*(long *)(param_2 + 0x18) + 0x70);
      do {
        if (*puVar11 != 0) {
          pvVar5 = calloc((ulong)*puVar11,4);
          *(void **)(puVar11 + 2) = pvVar5;
          if (pvVar5 == (void *)0x0) {
            free(__ptr);
            return 3;
          }
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 0x26;
      } while (uVar7 != uVar10);
    }
    piVar16 = piVar16 + 1;
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        if (*piVar16 == 0x10) {
          uVar10 = (ulong)(piVar16[5] + 1);
          if (*param_1 <= uVar10) {
            return 0xb;
          }
          if (*(uint *)(param_2 + 0x14) != 0) {
            lVar6 = *(long *)(param_2 + 0x18);
            uVar9 = 0;
            do {
              if (*(int *)(lVar6 + 8) == *(int *)(uVar2 + uVar10 * 4)) {
                puVar11 = (uint *)((long)__ptr + uVar9 * 4);
                goto LAB_00104aa0;
              }
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x98;
            } while (uVar9 != *(uint *)(param_2 + 0x14));
          }
          puVar11 = (uint *)0x0;
          lVar6 = 0;
LAB_00104aa0:
          uVar10 = (ulong)(piVar16[5] + 2);
          if (*param_1 <= uVar10) {
            return 0xb;
          }
          uVar12 = *puVar11;
          *(undefined4 *)(*(long *)(lVar6 + 0x78) + (ulong)uVar12 * 4) =
               *(undefined4 *)(uVar2 + uVar10 * 4);
          *puVar11 = uVar12 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar16 = piVar16 + 0x38;
      } while (uVar7 != uVar3);
    }
    free(__ptr);
  }
  return 0;
}



undefined8 IsPointerToPointer(ulong *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar1 = param_1[7];
  if (uVar1 != 0) {
    piVar5 = (int *)param_1[8];
    uVar4 = 0;
    piVar2 = piVar5;
    do {
      if (param_2 == *piVar2) {
        if (piVar2[1] != 0x20) {
          return 0;
        }
        if (param_1[1] == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          if ((ulong)(piVar2[6] + 3) < *param_1) {
            uVar4 = (ulong)*(uint *)(param_1[1] + (ulong)(piVar2[6] + 3) * 4);
          }
        }
        uVar3 = 0;
        do {
          if (*piVar5 == (int)uVar4) {
            return CONCAT71((int7)(uVar4 >> 8),piVar5[1] == 0x20);
          }
          uVar3 = uVar3 + 1;
          piVar5 = piVar5 + 0x38;
        } while (uVar3 != uVar1);
        return 0;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 0x38;
    } while (uVar4 != uVar1);
  }
  return 0;
}



undefined8
ParseDescriptorBlockVariableUsage
          (long param_1,long param_2,long param_3,uint param_4,int param_5,long param_6)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  
  uVar9 = (ulong)param_4;
LAB_00104bcc:
  piVar4 = *(int **)(param_6 + 0x158);
  *(uint *)(param_6 + 0x144) = *(uint *)(param_6 + 0x144) & 0xfffffffe;
  iVar10 = piVar4[1];
  if (param_5 == -1) goto LAB_00104da0;
  do {
    if (param_5 != 0x1e) {
      if (param_5 != 0x20) break;
      if (*(long *)(param_1 + 0x38) == 0) {
        return 0xc;
      }
      piVar3 = *(int **)(param_1 + 0x40);
      lVar5 = 0;
      while (*piVar4 != *piVar3) {
        lVar5 = lVar5 + 1;
        piVar3 = piVar3 + 0x38;
        if (lVar5 == *(long *)(param_1 + 0x38)) {
          return 0xc;
        }
      }
      lVar5 = *(long *)(*(long *)(param_2 + 0x4b8) + 0x20);
      if (lVar5 == 0) {
        return 0xc;
      }
      piVar4 = *(int **)(*(long *)(param_2 + 0x4b8) + 0x28);
      lVar6 = 0;
      while (piVar3[3] != *piVar4) {
        lVar6 = lVar6 + 1;
        piVar4 = piVar4 + 0x5e;
        if (lVar6 == lVar5) {
          return 0xc;
        }
      }
      if (piVar4[1] != 0x1e) {
        return 0;
      }
    }
    if (*(uint *)(param_6 + 0x148) == 0) {
      return 0x11;
    }
    uVar7 = *(uint *)(param_3 + 0xc);
    if (uVar7 == 0) {
      return 0;
    }
    uVar1 = *(uint *)(*(long *)(param_3 + 0x10) + uVar9 * 4);
    if (*(uint *)(param_6 + 0x148) <= uVar1) {
      return 0x12;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulong)uVar8;
    param_6 = (ulong)uVar1 * 0x168 + *(long *)(param_6 + 0x150);
    cVar2 = IsPointerToPointer();
    if (cVar2 == '\0') {
      if (uVar7 <= uVar8) {
        *(uint *)(param_6 + 0x144) = *(uint *)(param_6 + 0x144) & 0xfffffffe;
        iVar10 = *(int *)(*(long *)(param_6 + 0x158) + 4);
        goto joined_r0x00104ca0;
      }
    }
    else {
      *(long *)(param_3 + 0x18) = param_6;
      if (uVar7 <= uVar8) {
        return 0;
      }
    }
    piVar4 = *(int **)(param_6 + 0x158);
    *(uint *)(param_6 + 0x144) = *(uint *)(param_6 + 0x144) & 0xfffffffe;
    iVar10 = piVar4[1];
LAB_00104da0:
    param_5 = iVar10;
  } while( true );
  if (param_5 != 0x1c) {
    return 0;
  }
  param_5 = iVar10;
  while (uVar7 = (uint)uVar9, param_5 == 0x1c) {
    if (*(uint *)(param_3 + 0xc) <= uVar7) {
      param_5 = 0x1c;
      break;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      return 0xc;
    }
    piVar3 = *(int **)(param_1 + 0x40);
    lVar5 = 0;
    while (*piVar4 != *piVar3) {
      lVar5 = lVar5 + 1;
      piVar3 = piVar3 + 0x38;
      if (lVar5 == *(long *)(param_1 + 0x38)) {
        return 0xc;
      }
    }
    lVar5 = *(long *)(*(long *)(param_2 + 0x4b8) + 0x20);
    if (lVar5 == 0) {
      return 0xc;
    }
    piVar4 = *(int **)(*(long *)(param_2 + 0x4b8) + 0x28);
    lVar6 = 0;
    while (piVar3[9] != *piVar4) {
      lVar6 = lVar6 + 1;
      piVar4 = piVar4 + 0x5e;
      if (lVar6 == lVar5) {
        return 0xc;
      }
    }
    uVar9 = (ulong)(uVar7 + 1);
    param_5 = piVar4[1];
  }
  if (*(uint *)(param_3 + 0xc) <= uVar7) {
joined_r0x00104ca0:
    if (iVar10 == 0x1e) {
      MarkSelfAndAllMemberVarsAsUsed_part_0(param_6);
    }
    return 0;
  }
  goto LAB_00104bcc;
}



ulong CreateShaderModule(uint param_1,ulong param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  size_t sVar12;
  void *pvVar13;
  undefined8 uVar14;
  char *pcVar15;
  size_t sVar16;
  char *pcVar17;
  int *piVar18;
  void *pvVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  int *piVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  int *piVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  long in_FS_OFFSET;
  byte bVar39;
  ulong local_938;
  undefined1 local_8ec [4];
  ulong local_8e8;
  int *local_8e0;
  uint local_8d8;
  int *local_8d0;
  int local_8c8;
  int iStack_8c4;
  int local_8c0;
  char *local_8b8;
  ulong local_8b0;
  int *local_8a8;
  int local_8a0;
  uint local_89c;
  uint local_898;
  void *local_890;
  uint local_888;
  int *local_880;
  uint local_878;
  undefined4 local_468;
  void *local_460;
  uint local_458;
  char local_448 [1032];
  long local_40;
  
  bVar39 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[0x12e] = 0;
  param_4[0x12f] = 0;
  puVar31 = (undefined8 *)((ulong)(param_4 + 2) & 0xfffffffffffffff8);
  for (uVar25 = (ulong)(((int)param_4 -
                        (int)(undefined8 *)((ulong)(param_4 + 2) & 0xfffffffffffffff8)) + 0x4c0U >>
                       3); uVar25 != 0; uVar25 = uVar25 - 1) {
    *puVar31 = 0;
    puVar31 = puVar31 + 1;
  }
  puVar10 = (uint *)calloc(1,0x30);
  *(uint **)(param_4 + 0x12e) = puVar10;
  if (puVar10 == (uint *)0x0) {
LAB_00106990:
    uVar25 = 3;
    goto LAB_00105107;
  }
  *puVar10 = param_1;
  *(ulong *)(puVar10 + 2) = param_2;
  uVar24 = (uint)(param_2 >> 2);
  if ((param_1 & 1) == 0) {
    pvVar13 = calloc(1,param_2);
    puVar10[6] = uVar24;
    *(void **)(puVar10 + 4) = pvVar13;
    if (pvVar13 == (void *)0x0) {
      free(puVar10);
      param_4[0x12e] = 0;
      param_4[0x12f] = 0;
      goto LAB_00106990;
    }
    __memcpy_chk(pvVar13,param_3,param_2,param_2);
  }
  else {
    *(undefined8 *)(puVar10 + 4) = param_3;
    puVar10[6] = uVar24;
  }
  piVar34 = *(int **)(puVar10 + 4);
  uVar35 = *(ulong *)(puVar10 + 2);
  puVar38 = &local_8e8;
  for (lVar26 = 0x93; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar38 = 0;
    puVar38 = puVar38 + (ulong)bVar39 * -2 + 1;
  }
  if (piVar34 == (int *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((uVar35 < 0x14) || (uVar36 = (ulong)((uint)uVar35 & 3), (uVar35 & 3) != 0)) {
    uVar25 = 9;
    *param_4 = (uint)*(ushort *)((long)piVar34 + 10);
  }
  else {
    uVar35 = uVar35 >> 2;
    iVar9 = *piVar34;
    uVar25 = 10;
    *param_4 = (uint)*(ushort *)((long)piVar34 + 10);
    local_8e8 = uVar35;
    local_8e0 = piVar34;
    if (iVar9 != 0x7230203) goto LAB_00104f60;
    if (uVar35 == 5) {
LAB_00105401:
      uVar25 = 0xb;
      goto LAB_00104f60;
    }
    uVar24 = 0;
    uVar25 = 5;
    do {
      uVar5 = (uint)piVar34[uVar25] >> 0x10;
      if (uVar5 == 0) {
        uVar25 = 0x10;
        goto LAB_00104f50;
      }
      if ((piVar34[uVar25] & 0xffffU) == 0x41) {
        local_888 = local_888 + 1;
      }
      uVar25 = (ulong)(uVar5 + (int)uVar25);
      uVar24 = uVar24 + 1;
    } while (uVar25 < uVar35);
    if (uVar24 == 0) goto LAB_00105401;
    uVar25 = (ulong)uVar24;
    local_8b0 = uVar25;
    piVar11 = (int *)calloc(uVar25,0xe0);
    local_8a8 = piVar11;
    if (piVar11 != (int *)0x0) {
      piVar23 = piVar11;
      do {
        uVar14 = _LC1;
        piVar23[1] = -1;
        piVar27 = piVar23 + 0x38;
        piVar23[5] = -1;
        piVar23[0x1c] = -1;
        piVar23[0x1e] = -1;
        piVar23[0x22] = -1;
        piVar23[0x24] = -1;
        piVar23[0x26] = -1;
        piVar23[0x28] = -1;
        *(undefined8 *)(piVar23 + 0x30) = uVar14;
        piVar23 = piVar27;
      } while (piVar27 != piVar11 + uVar25 * 0x38);
      local_8c0 = -1;
      if ((local_888 != 0) &&
         (local_880 = (int *)calloc((ulong)local_888,0x20), local_880 == (int *)0x0))
      goto LAB_00105d1f;
      uVar37 = 0;
      local_938 = 0xffffffff;
      uVar24 = 0;
      uVar25 = 5;
      piVar23 = local_8e0;
      do {
        uVar5 = piVar34[uVar25];
        uVar6 = uVar5 & 0xffff;
        uVar7 = uVar5 >> 0x10;
        piVar27 = piVar11 + uVar37 * 0x38;
        piVar27[1] = uVar6;
        iVar9 = (int)uVar25;
        piVar27[6] = iVar9;
        piVar27[7] = uVar7;
        if (uVar6 < 0x42) {
          if ((uVar5 & 0xfffe) == 0) goto switchD_001052c8_caseD_0;
          switch(uVar6) {
          case 2:
            sVar12 = strlen((char *)(piVar23 + uVar25 + 1));
            pcVar15 = local_8b8;
            sVar16 = strlen(local_8b8);
            sVar12 = sVar12 + 1 + sVar16;
            pvVar13 = calloc(sVar12,1);
            if (pvVar13 == (void *)0x0) goto LAB_00106281;
            pcVar17 = (char *)__memcpy_chk(pvVar13,pcVar15,sVar16,sVar12);
            __strcpy_chk(pcVar17 + sVar16,piVar23 + uVar25 + 1,sVar12 - sVar16);
            free(pcVar15);
            piVar23 = local_8e0;
            local_8b8 = pcVar17;
            break;
          case 3:
            if ((piVar23 == (int *)0x0) || (uVar35 <= iVar9 + 1)) goto LAB_001056a8;
            local_8c8 = piVar23[iVar9 + 1];
            if (uVar35 <= iVar9 + 2) goto LAB_001056a8;
            iStack_8c4 = piVar23[iVar9 + 2];
            if (3 < (uint)piVar27[7]) {
              if (uVar35 <= piVar27[6] + 3) goto LAB_001056a8;
              local_8c0 = piVar23[piVar27[6] + 3];
              if (4 < (uint)piVar27[7]) {
                uVar5 = piVar27[6];
                sVar12 = strlen((char *)(piVar23 + (ulong)uVar5 + 4));
                sVar12 = sVar12 + 1;
                pcVar15 = (char *)calloc(sVar12,1);
                if (pcVar15 == (char *)0x0) goto LAB_00106281;
                __memcpy_chk(pcVar15,piVar23 + (ulong)uVar5 + 4,sVar12,sVar12);
                free(local_8b8);
                piVar23 = local_8e0;
                local_8b8 = pcVar15;
              }
            }
            break;
          case 5:
          case 6:
            *(int **)(piVar27 + 0x14) = piVar23 + (iVar9 + 2 + (uint)(uVar6 == 6));
            break;
          case 7:
            local_8d8 = local_8d8 + 1;
            break;
          case 0xf:
            local_8a0 = local_8a0 + 1;
            break;
          case 0x11:
            if ((piVar23 == (int *)0x0) || (uVar35 <= iVar9 + 1)) goto LAB_001056a8;
            piVar27[4] = piVar23[iVar9 + 1];
            local_89c = local_89c + 1;
            break;
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x1a:
          case 0x1f:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
            goto switchD_001052c8_caseD_13;
          case 0x19:
            if ((piVar23 != (int *)0x0) && (iVar9 + 1 < uVar35)) {
              *piVar27 = piVar23[iVar9 + 1];
              if (iVar9 + 2 < uVar35) {
                piVar27[0xb] = piVar23[iVar9 + 2];
                if (iVar9 + 3 < uVar35) {
                  piVar27[0xc] = piVar23[iVar9 + 3];
                  if (iVar9 + 4 < uVar35) {
                    piVar27[0xd] = piVar23[iVar9 + 4];
                    if (iVar9 + 5 < uVar35) {
                      piVar27[0xe] = piVar23[iVar9 + 5];
                      if (iVar9 + 6 < uVar35) {
                        piVar27[0xf] = piVar23[iVar9 + 6];
                        if (iVar9 + 7 < uVar35) {
                          piVar27[0x10] = piVar23[iVar9 + 7];
                          if (iVar9 + 8 < uVar35) {
                            piVar27[0x11] = piVar23[iVar9 + 8];
                            goto LAB_00105430;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_001056a8;
          case 0x1b:
            if ((piVar23 != (int *)0x0) && (iVar9 + 1 < uVar35)) {
              *piVar27 = piVar23[iVar9 + 1];
              if (iVar9 + 2 < uVar35) {
                piVar27[0x12] = piVar23[iVar9 + 2];
                goto LAB_00105430;
              }
            }
            goto LAB_001056a8;
          case 0x1c:
            if ((piVar23 != (int *)0x0) && (iVar9 + 1 < uVar35)) {
              *piVar27 = piVar23[iVar9 + 1];
              if (iVar9 + 2 < uVar35) {
                piVar27[9] = piVar23[iVar9 + 2];
                if (iVar9 + 3 < uVar35) {
                  piVar27[10] = piVar23[iVar9 + 3];
                  goto LAB_00105430;
                }
              }
            }
            goto LAB_001056a8;
          case 0x1d:
            if ((piVar23 != (int *)0x0) && (iVar9 + 1 < uVar35)) {
              *piVar27 = piVar23[iVar9 + 1];
              if (iVar9 + 2 < uVar35) {
                piVar27[9] = piVar23[iVar9 + 2];
                goto LAB_00105430;
              }
            }
            goto LAB_001056a8;
          case 0x1e:
            piVar27[0x32] = uVar7 - 2;
switchD_001052c8_caseD_13:
            if ((piVar23 != (int *)0x0) && (iVar9 + 1 < uVar35)) {
              *piVar27 = piVar23[iVar9 + 1];
              goto LAB_00105430;
            }
            goto LAB_001056a8;
          case 0x20:
            if ((piVar23 != (int *)0x0) && (iVar9 + 1 < uVar35)) {
              iVar8 = piVar23[iVar9 + 1];
              if (local_8b0 != 0) {
                uVar25 = 0;
                do {
                  if (iVar8 == *piVar11) {
                    *piVar11 = 0;
                    break;
                  }
                  uVar25 = uVar25 + 1;
                  piVar11 = piVar11 + 0x38;
                } while (local_8b0 != uVar25);
              }
              *piVar27 = iVar8;
              if (iVar9 + 2 < uVar35) {
                piVar27[5] = piVar23[iVar9 + 2];
                if (iVar9 + 3 < uVar35) {
                  piVar27[3] = piVar23[iVar9 + 3];
                  goto LAB_00105430;
                }
              }
            }
            goto LAB_001056a8;
          case 0x27:
            if ((piVar23 != (int *)0x0) && (iVar9 + 1 < uVar35)) {
              *piVar27 = piVar23[iVar9 + 1];
              if (iVar9 + 2 < uVar35) {
                piVar27[5] = piVar23[iVar9 + 2];
LAB_00105430:
                *(undefined1 *)(piVar27 + 8) = 1;
                goto LAB_00105434;
              }
            }
            goto LAB_001056a8;
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x3d:
            if ((piVar23 == (int *)0x0) || (uVar35 <= iVar9 + 1)) goto LAB_001056a8;
            piVar27[2] = piVar23[iVar9 + 1];
            uVar25 = (ulong)(iVar9 + 2);
            if (uVar35 <= uVar25) goto LAB_001056a8;
LAB_001052f4:
            *piVar27 = piVar23[uVar25];
            break;
          case 0x36:
            if ((piVar23 == (int *)0x0) || (uVar35 <= iVar9 + 2)) goto LAB_001056a8;
            *piVar27 = piVar23[iVar9 + 2];
            local_938 = uVar37;
            break;
          case 0x37:
            goto switchD_001052c8_caseD_37;
          case 0x38:
            goto switchD_001052c8_caseD_38;
          case 0x3b:
            if ((piVar23 == (int *)0x0) || (uVar35 <= iVar9 + 1)) goto LAB_001056a8;
            piVar27[3] = piVar23[iVar9 + 1];
            if (uVar35 <= iVar9 + 2) goto LAB_001056a8;
            *piVar27 = piVar23[iVar9 + 2];
            if (uVar35 <= iVar9 + 3) goto LAB_001056a8;
            piVar27[5] = piVar23[iVar9 + 3];
            break;
          case 0x41:
            if ((piVar23 == (int *)0x0) || (uVar35 <= iVar9 + 1)) goto LAB_001056a8;
            piVar18 = local_880 + (ulong)uVar24 * 8;
            piVar18[1] = piVar23[iVar9 + 1];
            if (uVar35 <= piVar27[6] + 2) goto LAB_001056a8;
            *piVar18 = piVar23[piVar27[6] + 2];
            if (uVar35 <= piVar27[6] + 3) goto LAB_001056a8;
            uVar5 = uVar7 - 4;
            *(ulong *)(piVar18 + 2) = CONCAT44(uVar5,piVar23[piVar27[6] + 3]);
            piVar29 = piVar23;
            if (uVar5 != 0) {
              pvVar13 = calloc((ulong)uVar5,4);
              *(void **)(piVar18 + 4) = pvVar13;
              if (pvVar13 == (void *)0x0) goto LAB_00106281;
              uVar25 = 0;
              while (uVar5 = (uint)uVar25, piVar29 = local_8e0, uVar5 < (uint)piVar18[3]) {
                uVar32 = (ulong)(uVar5 + 4 + piVar27[6]);
                if (uVar35 <= uVar32) goto LAB_001056a8;
                if (local_8b0 != 0) {
                  uVar28 = 0;
                  piVar29 = piVar11;
                  do {
                    if (piVar23[uVar32] == *piVar29) {
                      if ((piVar29[1] == 0x2b) || (piVar29[1] == 0x32)) {
                        if (uVar35 <= piVar29[6] + 3) goto LAB_001056a8;
                        *(int *)((long)pvVar13 + uVar25 * 4) = piVar23[piVar29[6] + 3];
                      }
                      break;
                    }
                    uVar28 = uVar28 + 1;
                    piVar29 = piVar29 + 0x38;
                  } while (uVar28 != local_8b0);
                }
                uVar25 = (ulong)(uVar5 + 1);
              }
            }
            uVar24 = uVar24 + 1;
            piVar23 = piVar29;
          }
        }
        else if (uVar6 == 0xf8) {
          if ((int)local_938 != -1) {
            uVar25 = (ulong)((piVar11 + local_938 * 0x38)[6] + 2);
            if ((piVar23 == (int *)0x0) || (uVar35 <= uVar25)) goto LAB_001056a8;
            piVar11[local_938 * 0x38] = piVar23[uVar25];
            local_898 = local_898 + 1;
          }
switchD_001052c8_caseD_38:
          local_938 = 0xffffffff;
        }
        else if (uVar6 < 0xf9) {
          if (uVar6 < 0x88) {
            if ((uVar6 < 0x7c) || ((0xd51UL >> ((ulong)(uVar6 - 0x7c) & 0x3f) & 1) == 0))
            goto switchD_001052c8_caseD_0;
switchD_001052c8_caseD_37:
            uVar25 = (ulong)(iVar9 + 2);
            if ((piVar23 != (int *)0x0) && (uVar25 < uVar35)) goto LAB_001052f4;
            goto LAB_001056a8;
          }
          if (uVar6 == 0xc2) goto switchD_001052c8_caseD_37;
        }
        else {
          if (uVar6 == 0x14a1) goto switchD_001052c8_caseD_13;
          if (uVar6 < 0x14a2) {
            if ((uVar5 & 0xffef) == 0x1168) goto switchD_001052c8_caseD_13;
          }
          else if ((uVar6 == 0x14dd) || (uVar6 == 0x14ee)) goto switchD_001052c8_caseD_13;
        }
switchD_001052c8_caseD_0:
        if ((char)piVar27[8] != '\0') {
LAB_00105434:
          local_878 = local_878 + 1;
        }
        piVar11 = local_8a8;
        uVar5 = local_8d8;
        uVar25 = (ulong)(iVar9 + uVar7);
        uVar37 = (ulong)((int)uVar37 + 1);
        uVar35 = local_8e8;
      } while (uVar25 < local_8e8);
      uVar35 = (ulong)local_8d8;
      if (local_8d8 != 0) {
        if (piVar23 != (int *)0x0) {
          if ((local_8a8 != (int *)0x0) && (local_8d0 = (int *)calloc(uVar35,0x10), local_8b0 != 0))
          {
            piVar11 = piVar11 + 6;
            uVar37 = 0;
            uVar24 = 0;
            do {
              uVar25 = (ulong)(uint)piVar11[-5];
              if (piVar11[-5] == 7) {
                if (uVar24 < uVar5) {
                  if (*piVar11 + 1 < local_8e8) {
                    uVar25 = (ulong)uVar24;
                    uVar24 = uVar24 + 1;
                    local_8d0[uVar25 * 4] = piVar23[*piVar11 + 1];
                    *(int **)(local_8d0 + uVar25 * 4 + 2) = piVar23 + (*piVar11 + 2);
                    goto LAB_001053e3;
                  }
                  uVar25 = 0xb;
                }
                if (*(long *)(param_4 + 0x12e) == 0) goto LAB_00104f83;
                goto LAB_00104f60;
              }
LAB_001053e3:
              uVar37 = uVar37 + 1;
              piVar11 = piVar11 + 0x38;
            } while (uVar37 != local_8b0);
          }
          if (local_8d0 != (int *)0x0) {
            piVar34 = local_8d0;
            do {
              if (*piVar34 == local_8c0) {
                *(undefined8 *)(param_4 + 10) = *(undefined8 *)(piVar34 + 2);
                break;
              }
              piVar34 = piVar34 + 4;
            } while (piVar34 != local_8d0 + uVar35 * 4);
          }
          goto LAB_00105479;
        }
LAB_00105bd1:
        piVar23 = (int *)0x0;
        piVar34 = local_8a8;
        goto LAB_00105be3;
      }
      if (piVar23 == (int *)0x0) goto LAB_00105bd1;
LAB_00105479:
      pcVar15 = local_8b8;
      if (local_8b8 == (char *)0x0) {
LAB_001054d8:
        piVar34 = local_8a8;
        if (local_8a8 != (int *)0x0) {
          if (local_898 == 0) goto LAB_00105500;
          sVar12 = (size_t)local_898;
          pvVar13 = calloc(sVar12,0x28);
          local_890 = pvVar13;
          if (pvVar13 != (void *)0x0) {
            if (local_8b0 != 0) {
              lVar26 = 0;
              uVar35 = 0;
              uVar25 = local_8b0;
LAB_00105e35:
              piVar11 = piVar34 + uVar35 * 0x38;
              if ((piVar11[1] == 0x36) && (piVar23 = piVar11, uVar35 < uVar25)) {
                do {
                  if (piVar23[1] == 0xf8) {
                    piVar23 = (int *)((long)pvVar13 + lVar26 * 0x28);
                    *piVar23 = *piVar11;
                    piVar23[1] = 0;
                    piVar23[6] = 0;
                    if (uVar25 <= uVar35) goto LAB_00105fce;
                    sVar12 = 0;
                    piVar11 = piVar34 + uVar35 * 0x38;
                    uVar37 = uVar35;
                    goto LAB_00105ee1;
                  }
                  if (piVar23[1] == 0x38) break;
                  uVar35 = uVar35 + 1;
                  piVar23 = piVar23 + 0x38;
                } while (uVar25 != uVar35);
              }
              goto LAB_00105e20;
            }
            goto LAB_00106146;
          }
LAB_0010673a:
          uVar25 = 3;
          goto LAB_0010622e;
        }
        goto LAB_00105be3;
      }
      sVar12 = strlen(local_8b8);
      sVar12 = sVar12 + 1;
      pvVar13 = calloc(sVar12,1);
      if (pvVar13 != (void *)0x0) {
        uVar14 = __memcpy_chk(pvVar13,pcVar15,sVar12,sVar12);
        *(undefined8 *)(param_4 + 0xc) = uVar14;
        goto LAB_001054d8;
      }
      goto LAB_00106585;
    }
LAB_00105d1f:
    uVar25 = 3;
  }
  goto LAB_00104f60;
LAB_00105ee1:
  do {
    uVar24 = piVar11[1];
    if (uVar24 == 0x38) break;
    if (uVar24 < 0x41) {
      if (uVar24 < 0x3f) {
        if (uVar24 == 0x39) {
          uVar24 = (int)sVar12 + 1;
          sVar12 = (size_t)uVar24;
          piVar23[1] = uVar24;
        }
        else if (uVar24 - 0x3c < 3) goto LAB_00105ecd;
      }
      else {
        piVar23[6] = piVar23[6] + 2;
      }
    }
    else if (uVar24 - 0x41 < 6) {
LAB_00105ecd:
      piVar23[6] = piVar23[6] + 1;
    }
    uVar37 = uVar37 + 1;
    piVar11 = piVar11 + 0x38;
  } while (uVar25 != uVar37);
  if ((int)sVar12 != 0) {
    pvVar13 = calloc(sVar12,4);
    *(void **)(piVar23 + 2) = pvVar13;
    if (pvVar13 == (void *)0x0) goto LAB_00106281;
  }
  if (piVar23[6] != 0) {
    pvVar13 = calloc((ulong)(uint)piVar23[6],0x10);
    *(void **)(piVar23 + 8) = pvVar13;
    if (pvVar13 == (void *)0x0) goto LAB_00106281;
  }
  piVar23[1] = 0;
  piVar23[6] = 0;
  piVar34 = piVar34 + uVar35 * 0x38;
  uVar37 = uVar35;
  do {
    if (piVar34[1] == 0x38) break;
    switch(piVar34[1]) {
    case 0x39:
      if ((local_8e0 == (int *)0x0) || (local_8e8 <= piVar34[6] + 3)) goto LAB_001056a8;
      *(int *)(*(long *)(piVar23 + 2) + (ulong)(uint)piVar23[1] * 4) = local_8e0[piVar34[6] + 3];
      piVar23[1] = piVar23[1] + 1;
      break;
    case 0x3c:
    case 0x3d:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      iVar9 = piVar34[6];
      puVar31 = (undefined8 *)((ulong)(uint)piVar23[6] * 0x10 + *(long *)(piVar23 + 8));
      uVar32 = (ulong)(iVar9 + 2);
      *puVar31 = piVar34;
      if ((local_8e0 == (int *)0x0) || (local_8e8 <= uVar32)) goto LAB_001056a8;
      *(int *)(puVar31 + 1) = local_8e0[uVar32];
      uVar32 = (ulong)(iVar9 + 3);
      if (local_8e8 <= uVar32) goto LAB_001056a8;
      *(int *)((long)puVar31 + 0xc) = local_8e0[uVar32];
      piVar23[6] = piVar23[6] + 1;
      break;
    case 0x3e:
      lVar33 = *(long *)(piVar23 + 8);
      if ((local_8e0 == (int *)0x0) || (local_8e8 <= piVar34[6] + 2)) goto LAB_001056a8;
      *(int *)(lVar33 + 0xc + (ulong)(uint)piVar23[6] * 0x10) = local_8e0[piVar34[6] + 2];
      uVar24 = piVar23[6];
      *(int **)(lVar33 + (ulong)uVar24 * 0x10) = piVar34;
      piVar23[6] = uVar24 + 1;
      break;
    case 0x3f:
    case 0x40:
      lVar33 = *(long *)(piVar23 + 8);
      if ((local_8e0 == (int *)0x0) || (local_8e8 <= piVar34[6] + 1)) goto LAB_001056a8;
      *(int *)(lVar33 + 0xc + (ulong)(uint)piVar23[6] * 0x10) = local_8e0[piVar34[6] + 1];
      iVar9 = piVar23[6];
      piVar23[6] = iVar9 + 1U;
      if (local_8e8 <= piVar34[6] + 2) goto LAB_001056a8;
      *(int *)(lVar33 + 0xc + (ulong)(iVar9 + 1U) * 0x10) = local_8e0[piVar34[6] + 2];
      piVar23[6] = piVar23[6] + 1;
    }
    uVar37 = uVar37 + 1;
    piVar34 = piVar34 + 0x38;
  } while (uVar25 != uVar37);
  if (piVar23[1] != 0) {
    qsort(*(void **)(piVar23 + 2),(ulong)(uint)piVar23[1],4,SortCompareUint32);
    uVar24 = piVar23[1];
    piVar34 = *(int **)(piVar23 + 2);
    if ((ulong)uVar24 != 0) {
      lVar33 = 0;
      piVar11 = piVar34;
      do {
        if (piVar34[lVar33] != *piVar11) {
          piVar34[lVar33 + 1] = *piVar11;
          lVar33 = lVar33 + 1;
        }
        piVar11 = piVar11 + 1;
      } while (piVar11 != piVar34 + uVar24);
      iVar9 = (int)lVar33 + 1;
      goto LAB_00106113;
    }
  }
LAB_00105fce:
  iVar9 = 0;
LAB_00106113:
  piVar23[1] = iVar9;
  if (piVar23[6] != 0) {
    qsort(*(void **)(piVar23 + 8),(ulong)(uint)piVar23[6],0x10,SortCompareAccessedVariable);
  }
  lVar26 = lVar26 + 1;
  pvVar13 = local_890;
  uVar25 = local_8b0;
LAB_00105e20:
  uVar35 = uVar35 + 1;
  piVar34 = local_8a8;
  if (uVar25 <= uVar35) goto LAB_0010613a;
  goto LAB_00105e35;
LAB_00106281:
  uVar25 = 3;
  goto LAB_00104f50;
LAB_0010613a:
  sVar12 = (size_t)local_898;
LAB_00106146:
  qsort(pvVar13,sVar12,0x28,SortCompareFunctions);
  pvVar13 = local_890;
  uVar25 = (ulong)local_898;
  if (uVar25 != 0) {
    uVar35 = 0;
    puVar10 = (uint *)((long)local_890 + 4);
    do {
      uVar24 = *puVar10;
      if (uVar24 != 0) {
        pvVar19 = calloc((ulong)uVar24,8);
        lVar26 = *(long *)(puVar10 + 1);
        uVar37 = 0;
        uVar32 = 0;
        *(void **)(puVar10 + 3) = pvVar19;
        do {
          piVar34 = (int *)((long)pvVar13 + uVar37 * 0x28);
          while (*piVar34 != *(int *)(lVar26 + uVar32 * 4)) {
            uVar37 = uVar37 + 1;
            piVar34 = piVar34 + 10;
            if (uVar25 <= uVar37) goto LAB_00106253;
          }
          *(int **)((long)pvVar19 + uVar32 * 8) = piVar34;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar24);
      }
      uVar35 = uVar35 + 1;
      puVar10 = puVar10 + 10;
    } while (uVar35 != uVar25);
  }
  piVar23 = local_8e0;
  piVar34 = local_8a8;
  if ((local_8e0 == (int *)0x0) || (local_8a8 == (int *)0x0)) {
LAB_00105be3:
    uVar25 = local_8b0;
    if (local_8b0 == 0) goto LAB_001067e8;
    uVar24 = 0;
    uVar35 = 0;
    uVar5 = 0;
    do {
      iVar9 = piVar34[uVar35 * 0x38 + 1];
      if ((iVar9 - 0x47U < 2) || (iVar9 == 0x14c)) {
        uVar7 = (uint)(iVar9 == 0x48);
LAB_00105c53:
        uVar6 = piVar34[uVar35 * 0x38 + 6];
        uVar37 = (ulong)uVar6;
        iVar8 = uVar7 + uVar6;
        if ((piVar23 == (int *)0x0) || (local_8e8 <= iVar8 + 2)) goto LAB_001056a8;
        uVar7 = piVar23[iVar8 + 2];
        if (uVar7 < 0x2c) {
          if ((0x80ec300e8ffU >> ((ulong)uVar7 & 0x3f) & 1) == 0) goto switchD_00107578_caseD_8;
        }
        else if (uVar7 != 0x14a5) {
          if (uVar7 < 0x14a6) {
            if (uVar7 < 0x1189) {
              if (0x1186 < uVar7) goto LAB_00105c95;
            }
            else if (uVar7 == 0x1499) goto LAB_00105c95;
            goto switchD_00107578_caseD_8;
          }
          if (2 < uVar7 - 0x1602) goto switchD_00107578_caseD_8;
        }
LAB_00105c95:
        if (local_8e8 <= uVar6 + 1) goto LAB_001056a8;
        uVar32 = 0;
        piVar11 = piVar34;
        do {
          if (piVar23[uVar6 + 1] == *piVar11) {
            if (iVar9 == 0x48) {
              if (local_8e8 <= uVar6 + 2) goto LAB_001056a8;
              piVar27 = (int *)((ulong)(uint)piVar23[uVar6 + 2] * 0x70 + *(long *)(piVar11 + 0x36));
              switch((ulong)uVar7) {
              case 0:
switchD_00105cef_caseD_0:
                *(undefined1 *)piVar27 = 1;
                goto switchD_00107578_caseD_8;
              case 1:
                goto switchD_00105cef_caseD_1;
              case 2:
                goto switchD_00105cef_caseD_2;
              case 3:
                goto switchD_00105cef_caseD_3;
              case 4:
                goto switchD_00105cef_caseD_4;
              case 5:
                goto switchD_00105cef_caseD_5;
              case 6:
                goto switchD_00105cef_caseD_6;
              case 7:
                goto switchD_00105cef_caseD_7;
              case 8:
              case 9:
              case 10:
              case 0xc:
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x13:
              case 0x14:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x1a:
              case 0x1b:
              case 0x1c:
              case 0x1d:
              case 0x20:
              case 0x24:
              case 0x25:
              case 0x26:
              case 0x27:
              case 0x28:
              case 0x29:
              case 0x2a:
                goto switchD_00107578_caseD_8;
              case 0xb:
                goto switchD_00105cef_caseD_b;
              case 0xd:
                goto switchD_00105cef_caseD_d;
              case 0xe:
                goto switchD_00105cef_caseD_e;
              case 0xf:
                goto switchD_00105cef_caseD_f;
              case 0x18:
                goto switchD_00105cef_caseD_18;
              case 0x19:
                goto switchD_00105cef_caseD_19;
              case 0x1e:
                goto switchD_00105cef_caseD_1e;
              case 0x1f:
                goto switchD_00105cef_caseD_1f;
              case 0x21:
                goto switchD_00105cef_caseD_21;
              case 0x22:
                goto switchD_00105cef_caseD_22;
              case 0x23:
                goto switchD_00105cef_caseD_23;
              case 0x2b:
                goto switchD_00105cef_caseD_2b;
              }
              if (uVar7 == 0x14a5) {
LAB_0010763e:
                *(undefined1 *)((long)piVar27 + 0xb) = 1;
                goto switchD_00107578_caseD_8;
              }
              if (uVar7 < 0x14a6) {
LAB_00107528:
                if (uVar7 == 0x1188) {
                  *(undefined1 *)((long)piVar27 + 0xe) = 1;
                }
                else if (uVar7 == 0x1499) {
                  *(undefined1 *)(piVar27 + 3) = 1;
                }
                else {
                  *(undefined1 *)((long)piVar27 + 0xd) = 1;
                }
              }
              else if (uVar7 == 0x1602) {
LAB_001075f2:
                uVar7 = iVar8 + 3;
                if (local_8e8 <= uVar7) goto LAB_001056a8;
                *(ulong *)(piVar27 + 0x11) = CONCAT44(piVar23[uVar7],uVar7);
              }
              else if (uVar7 == 0x1603) {
LAB_001075bc:
                *(int **)(piVar27 + 0x16) = piVar23 + (iVar8 + 3U);
                piVar27[0x14] = iVar8 + 3U;
              }
              goto switchD_00107578_caseD_8;
            }
            piVar27 = piVar11 + 0x16;
            switch(uVar7) {
            case 0:
              goto switchD_00105cef_caseD_0;
            case 1:
switchD_00105cef_caseD_1:
              if (local_8e8 <= iVar8 + 3) goto LAB_001056a8;
              uVar5 = uVar5 + 1;
              piVar27[0x1a] = piVar23[iVar8 + 3];
              goto switchD_00107578_caseD_8;
            case 2:
switchD_00105cef_caseD_2:
              *(undefined1 *)((long)piVar27 + 1) = 1;
              goto switchD_00107578_caseD_8;
            case 3:
switchD_00105cef_caseD_3:
              *(undefined1 *)((long)piVar27 + 2) = 1;
              goto switchD_00107578_caseD_8;
            case 4:
switchD_00105cef_caseD_4:
              *(undefined1 *)((long)piVar27 + 3) = 1;
              goto switchD_00107578_caseD_8;
            case 5:
switchD_00105cef_caseD_5:
              *(undefined1 *)(piVar27 + 1) = 1;
              goto switchD_00107578_caseD_8;
            case 6:
switchD_00105cef_caseD_6:
              if (local_8e8 <= iVar8 + 3) goto LAB_001056a8;
              piVar27[0x18] = piVar23[iVar8 + 3];
              goto switchD_00107578_caseD_8;
            case 7:
switchD_00105cef_caseD_7:
              if (local_8e8 <= iVar8 + 3) goto LAB_001056a8;
              piVar27[0x19] = piVar23[iVar8 + 3];
              goto switchD_00107578_caseD_8;
            case 8:
            case 9:
            case 10:
            case 0xc:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x20:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
              goto switchD_00105cef_caseD_8;
            case 0xb:
switchD_00105cef_caseD_b:
              *(undefined1 *)((long)piVar27 + 5) = 1;
              if (local_8e8 <= iVar8 + 3) goto LAB_001056a8;
              piVar27[0x1b] = piVar23[iVar8 + 3];
              goto switchD_00107578_caseD_8;
            case 0xd:
switchD_00105cef_caseD_d:
              *(undefined1 *)((long)piVar27 + 6) = 1;
              goto switchD_00107578_caseD_8;
            case 0xe:
switchD_00105cef_caseD_e:
              *(undefined1 *)((long)piVar27 + 7) = 1;
              goto switchD_00107578_caseD_8;
            case 0xf:
switchD_00105cef_caseD_f:
              *(undefined1 *)((long)piVar27 + 10) = 1;
              goto switchD_00107578_caseD_8;
            case 0x18:
switchD_00105cef_caseD_18:
              *(undefined1 *)(piVar27 + 2) = 1;
              goto switchD_00107578_caseD_8;
            case 0x19:
switchD_00105cef_caseD_19:
              *(undefined1 *)((long)piVar27 + 9) = 1;
              goto switchD_00107578_caseD_8;
            case 0x1e:
switchD_00105cef_caseD_1e:
              uVar7 = iVar8 + 3;
              if (local_8e8 <= uVar7) goto LAB_001056a8;
              *(ulong *)(piVar27 + 0xb) = CONCAT44(piVar23[uVar7],uVar7);
              goto switchD_00107578_caseD_8;
            case 0x1f:
switchD_00105cef_caseD_1f:
              uVar7 = iVar8 + 3;
              if (local_8e8 <= uVar7) goto LAB_001056a8;
              *(ulong *)(piVar27 + 0xd) = CONCAT44(piVar23[uVar7],uVar7);
              goto switchD_00107578_caseD_8;
            case 0x21:
switchD_00105cef_caseD_21:
              uVar7 = iVar8 + 3;
              if (local_8e8 <= uVar7) goto LAB_001056a8;
              *(ulong *)(piVar27 + 7) = CONCAT44(piVar23[uVar7],uVar7);
              goto switchD_00107578_caseD_8;
            case 0x22:
switchD_00105cef_caseD_22:
              uVar7 = iVar8 + 3;
              if (local_8e8 <= uVar7) goto LAB_001056a8;
              *(ulong *)(piVar27 + 5) = CONCAT44(piVar23[uVar7],uVar7);
              goto switchD_00107578_caseD_8;
            case 0x23:
switchD_00105cef_caseD_23:
              uVar7 = iVar8 + 3;
              if (local_8e8 <= uVar7) goto LAB_001056a8;
              *(ulong *)(piVar27 + 0xf) = CONCAT44(piVar23[uVar7],uVar7);
              goto switchD_00107578_caseD_8;
            case 0x2b:
switchD_00105cef_caseD_2b:
              uVar7 = iVar8 + 3;
              if (local_8e8 <= uVar7) goto LAB_001056a8;
              *(ulong *)(piVar27 + 9) = CONCAT44(piVar23[uVar7],uVar7);
              goto switchD_00107578_caseD_8;
            }
            if (uVar7 == 0x14a5) goto LAB_0010763e;
            if (uVar7 < 0x14a6) goto LAB_00107528;
            if (uVar7 == 0x1602) goto LAB_001075f2;
            if (uVar7 == 0x1603) goto LAB_001075bc;
switchD_00105cef_caseD_8:
            if ((iVar9 != 0x1600) || (uVar7 != 0x1604)) goto switchD_00107578_caseD_8;
            uVar7 = ReadStr_constprop_0(&local_8e8,uVar6 + 3,piVar34[uVar35 * 0x38 + 7],local_8ec);
            if (uVar7 != 0) {
              uVar25 = (ulong)uVar7;
              lVar26 = *(long *)(param_4 + 0x12e);
              goto LAB_00104f5b;
            }
            piVar27 = piVar23 + uVar37 + 3;
            iVar9 = strncmp((char *)piVar27,"cbuffer",7);
            if (iVar9 == 0) {
              if ((*(char *)((long)piVar27 + 7) == ':') || (*(char *)((long)piVar27 + 7) == '\0')) {
                piVar11[0x1a] = 1;
                goto switchD_00107578_caseD_8;
              }
            }
            else {
              iVar9 = strncmp((char *)piVar27,"tbuffer",7);
              if ((iVar9 == 0) &&
                 ((*(char *)((long)piVar27 + 7) == ':' || (*(char *)((long)piVar27 + 7) == '\0'))))
              {
                piVar11[0x1a] = 2;
                goto switchD_00107578_caseD_8;
              }
            }
            iVar9 = strncmp((char *)piVar27,"appendstructuredbuffer",0x16);
            if ((iVar9 == 0) &&
               ((*(char *)((long)piVar27 + 0x16) == ':' || (*(char *)((long)piVar27 + 0x16) == '\0')
                ))) {
              piVar11[0x1a] = 3;
            }
            else {
              iVar9 = strncmp((char *)piVar27,"buffer",6);
              if ((iVar9 == 0) &&
                 ((*(char *)((long)piVar27 + 6) == ':' || (*(char *)((long)piVar27 + 6) == '\0'))))
              {
                piVar11[0x1a] = 4;
              }
              else {
                cVar4 = UserTypeMatches(piVar27);
                if (cVar4 == '\0') {
                  cVar4 = UserTypeMatches(piVar27);
                  if (cVar4 == '\0') {
                    cVar4 = UserTypeMatches(piVar27);
                    if (cVar4 == '\0') {
                      cVar4 = UserTypeMatches(piVar27);
                      if (cVar4 == '\0') {
                        cVar4 = UserTypeMatches(piVar27);
                        if (cVar4 == '\0') {
                          cVar4 = UserTypeMatches(piVar27);
                          if (cVar4 == '\0') {
                            cVar4 = UserTypeMatches(piVar27);
                            if (cVar4 == '\0') {
                              cVar4 = UserTypeMatches(piVar27);
                              if (cVar4 == '\0') {
                                cVar4 = UserTypeMatches(piVar27);
                                if (cVar4 == '\0') {
                                  cVar4 = UserTypeMatches(piVar27);
                                  if (cVar4 == '\0') {
                                    cVar4 = UserTypeMatches(piVar27);
                                    if (cVar4 == '\0') {
                                      cVar4 = UserTypeMatches(piVar27);
                                      if (cVar4 == '\0') {
                                        cVar4 = UserTypeMatches(piVar27);
                                        if (cVar4 == '\0') {
                                          cVar4 = UserTypeMatches(piVar27);
                                          if (cVar4 == '\0') {
                                            cVar4 = UserTypeMatches(piVar27);
                                            if (cVar4 == '\0') {
                                              cVar4 = UserTypeMatches(piVar27);
                                              if (cVar4 == '\0') {
                                                cVar4 = UserTypeMatches(piVar27);
                                                if (cVar4 == '\0') {
                                                  cVar4 = UserTypeMatches(piVar27);
                                                  if (cVar4 == '\0') {
                                                    cVar4 = UserTypeMatches(piVar27);
                                                    if (cVar4 == '\0') {
                                                      cVar4 = UserTypeMatches(piVar27);
                                                      if (cVar4 == '\0') {
                                                        cVar4 = UserTypeMatches(piVar27);
                                                        if (cVar4 == '\0') {
                                                          cVar4 = UserTypeMatches(piVar27);
                                                          if (cVar4 == '\0') {
                                                            cVar4 = UserTypeMatches(piVar27);
                                                            if (cVar4 == '\0') {
                                                              cVar4 = UserTypeMatches(piVar27);
                                                              if (cVar4 == '\0') {
                                                                cVar4 = UserTypeMatches(piVar27);
                                                                if (cVar4 == '\0') {
                                                                  cVar4 = UserTypeMatches(piVar27);
                                                                  if (cVar4 == '\0') {
                                                                    cVar4 = UserTypeMatches(piVar27)
                                                                    ;
                                                                    if (cVar4 == '\0') {
                                                                      cVar4 = UserTypeMatches(
                                                  piVar27);
                                                  if (cVar4 == '\0') {
                                                    cVar4 = UserTypeMatches(piVar27);
                                                    if (cVar4 == '\0') {
                                                      cVar4 = UserTypeMatches(piVar27);
                                                      if (cVar4 == '\0') {
                                                        cVar4 = UserTypeMatches(piVar27);
                                                        if (cVar4 == '\0') {
                                                          cVar4 = UserTypeMatches(piVar27);
                                                          if (cVar4 == '\0') {
                                                            cVar4 = UserTypeMatches(piVar27);
                                                            if (cVar4 == '\0') {
                                                              cVar4 = UserTypeMatches(piVar27);
                                                              if (cVar4 == '\0') {
                                                                cVar4 = UserTypeMatches(piVar27);
                                                                if (cVar4 != '\0') {
                                                                  piVar11[0x1a] = 0x27;
                                                                }
                                                              }
                                                              else {
                                                                piVar11[0x1a] = 0x26;
                                                              }
                                                            }
                                                            else {
                                                              piVar11[0x1a] = 0x25;
                                                            }
                                                          }
                                                          else {
                                                            piVar11[0x1a] = 0x24;
                                                          }
                                                        }
                                                        else {
                                                          piVar11[0x1a] = 0x23;
                                                        }
                                                      }
                                                      else {
                                                        piVar11[0x1a] = 0x22;
                                                      }
                                                    }
                                                    else {
                                                      piVar11[0x1a] = 0x21;
                                                    }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x20;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x1f;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x1e;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x1d;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x1c;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x1b;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x1a;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x19;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x18;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x17;
                                                  }
                                                  }
                                                  else {
                                                    piVar11[0x1a] = 0x16;
                                                  }
                                                }
                                                else {
                                                  piVar11[0x1a] = 0x15;
                                                }
                                              }
                                              else {
                                                piVar11[0x1a] = 0x14;
                                              }
                                            }
                                            else {
                                              piVar11[0x1a] = 0x13;
                                            }
                                          }
                                          else {
                                            piVar11[0x1a] = 0x12;
                                          }
                                        }
                                        else {
                                          piVar11[0x1a] = 0x11;
                                        }
                                      }
                                      else {
                                        piVar11[0x1a] = 0x10;
                                      }
                                    }
                                    else {
                                      piVar11[0x1a] = 0xf;
                                    }
                                  }
                                  else {
                                    piVar11[0x1a] = 0xe;
                                  }
                                }
                                else {
                                  piVar11[0x1a] = 0xd;
                                }
                              }
                              else {
                                piVar11[0x1a] = 0xc;
                              }
                            }
                            else {
                              piVar11[0x1a] = 0xb;
                            }
                          }
                          else {
                            piVar11[0x1a] = 10;
                          }
                        }
                        else {
                          piVar11[0x1a] = 9;
                        }
                      }
                      else {
                        piVar11[0x1a] = 8;
                      }
                    }
                    else {
                      piVar11[0x1a] = 7;
                    }
                  }
                  else {
                    piVar11[0x1a] = 6;
                  }
                }
                else {
                  piVar11[0x1a] = 5;
                }
              }
            }
            goto switchD_00107578_caseD_8;
          }
          uVar32 = uVar32 + 1;
          piVar11 = piVar11 + 0x38;
        } while (uVar32 != uVar25);
        if ((iVar9 != 0x47) || (uVar7 != 0)) goto LAB_00106253;
      }
      else {
        uVar7 = 0;
        if (iVar9 - 0x1600U < 2) goto LAB_00105c53;
      }
switchD_00107578_caseD_8:
      uVar24 = uVar24 + 1;
      uVar35 = (ulong)uVar24;
    } while (uVar35 < uVar25);
    if (uVar5 == 0) goto LAB_00106346;
    pvVar13 = calloc((ulong)uVar5,0x18);
    *(void **)(param_4 + 300) = pvVar13;
    if (pvVar13 != (void *)0x0) goto LAB_00106346;
LAB_00106585:
    lVar26 = *(long *)(param_4 + 0x12e);
    uVar25 = 3;
    goto LAB_00104f5b;
  }
LAB_00105500:
  piVar34 = local_8a8;
  uVar35 = local_8b0;
  uVar25 = local_8e8;
  if (local_8b0 != 0) {
    piVar11 = local_8a8 + 1;
    uVar37 = 0;
    piVar27 = piVar11;
    do {
      if ((*piVar27 == 6) || (*piVar27 == 0x48)) {
        uVar32 = (ulong)(piVar27[5] + 1);
        if ((local_8e8 <= uVar32) || (uVar28 = (ulong)(piVar27[5] + 2), local_8e8 <= uVar28))
        goto LAB_00106228;
        uVar30 = 0;
        piVar18 = local_8a8;
        do {
          if (piVar23[uVar32] == *piVar18) {
            if (piVar23[uVar28] == -1) {
              uVar25 = 4;
              goto LAB_0010622e;
            }
            uVar24 = piVar23[uVar28] + 1;
            if (uVar24 < (uint)piVar18[0x32]) {
              uVar24 = piVar18[0x32];
            }
            piVar18[0x32] = uVar24;
            break;
          }
          uVar30 = uVar30 + 1;
          piVar18 = piVar18 + 0x38;
        } while (uVar30 != local_8b0);
      }
      uVar37 = uVar37 + 1;
      piVar27 = piVar27 + 0x38;
    } while (uVar37 != local_8b0);
    uVar37 = 0;
    do {
      uVar24 = piVar34[uVar37 * 0x38 + 0x32];
      if (uVar24 != 0) {
        pvVar13 = calloc((ulong)uVar24,8);
        *(void **)(piVar34 + uVar37 * 0x38 + 0x34) = pvVar13;
        if (pvVar13 == (void *)0x0) goto LAB_0010673a;
        pvVar13 = calloc((ulong)uVar24,0x70);
        *(void **)(piVar34 + uVar37 * 0x38 + 0x36) = pvVar13;
        if (pvVar13 == (void *)0x0) goto LAB_0010673a;
      }
      uVar37 = (ulong)((int)uVar37 + 1);
    } while (uVar37 < uVar35);
    uVar37 = 0;
    do {
      if (*piVar11 - 5U < 2) {
        uVar32 = (ulong)(piVar11[5] + 1);
        if (uVar25 <= uVar32) goto LAB_00106228;
        uVar28 = 0;
        piVar27 = piVar34;
        do {
          if (piVar23[uVar32] == *piVar27) {
            if (*piVar11 == 6) {
              uVar32 = (ulong)(piVar11[5] + 2);
              if (uVar25 <= uVar32) goto LAB_00106228;
              piVar27 = (int *)(*(long *)(piVar27 + 0x34) + (ulong)(uint)piVar23[uVar32] * 8);
            }
            else {
              piVar27 = piVar27 + 0x14;
            }
            *(undefined8 *)piVar27 = *(undefined8 *)(piVar11 + 0x13);
            break;
          }
          uVar28 = uVar28 + 1;
          piVar27 = piVar27 + 0x38;
        } while (uVar28 != uVar35);
      }
      uVar37 = uVar37 + 1;
      piVar11 = piVar11 + 0x38;
    } while (uVar37 != uVar35);
    goto LAB_00105be3;
  }
LAB_001067e8:
  uVar25 = 0;
LAB_00106346:
  uVar14 = _LC42;
  for (uVar35 = 0; uVar35 < uVar25; uVar35 = (ulong)((int)uVar35 + 1)) {
    uVar24 = param_4[0x12a];
    piVar34 = local_8a8 + uVar35 * 0x38;
    iVar9 = piVar34[1];
    if (iVar9 == 0x31) {
      *(undefined8 *)((ulong)uVar24 * 0x18 + *(long *)(param_4 + 300) + 0x10) = 0;
      lVar26 = *(long *)(param_4 + 300);
LAB_0010637c:
      puVar31 = (undefined8 *)(lVar26 + (ulong)uVar24 * 0x18);
      uVar2 = *(undefined8 *)(piVar34 + 0x14);
      *puVar31 = CONCAT44(piVar34[0x30],*piVar34);
      puVar31[1] = uVar2;
      param_4[0x12a] = uVar24 + 1;
    }
    else {
      if (iVar9 == 0x32) {
        uVar37 = (ulong)(piVar34[6] + 1);
        if ((piVar23 == (int *)0x0) || (local_8e8 <= uVar37)) goto LAB_001056a8;
        uVar32 = (ulong)(piVar34[6] + 3);
        if (local_8e8 <= uVar32) goto LAB_001056a8;
        iVar9 = piVar23[uVar32];
        uVar32 = 0;
        piVar11 = local_8a8;
        while (piVar23[uVar37] != *piVar11) {
          uVar32 = uVar32 + 1;
          piVar11 = piVar11 + 0x38;
          if (uVar25 == uVar32) {
            uVar25 = FUN_00109afd();
            return uVar25;
          }
        }
        if (piVar11[1] == 0x15) {
          lVar26 = *(long *)(param_4 + 300);
          *(undefined4 *)(lVar26 + 0x10 + (ulong)uVar24 * 0x18) = 1;
        }
        else {
          if (piVar11[1] != 0x16) {
            uVar25 = 2;
            goto LAB_00104f50;
          }
          lVar26 = *(long *)(param_4 + 300);
          *(undefined4 *)(lVar26 + 0x10 + (ulong)uVar24 * 0x18) = 2;
        }
        *(int *)(lVar26 + 0x14 + (ulong)uVar24 * 0x18) = iVar9;
        goto LAB_0010637c;
      }
      if (iVar9 == 0x30) {
        *(undefined8 *)((ulong)uVar24 * 0x18 + *(long *)(param_4 + 300) + 0x10) = uVar14;
        lVar26 = *(long *)(param_4 + 300);
        goto LAB_0010637c;
      }
    }
  }
  *(ulong *)(param_4 + 8) = CONCAT44(iStack_8c4,local_8c8);
  puVar10 = param_4 + 0x1a;
  param_4[0x18] = 0;
  param_4[0x1a] = 0;
  param_4[0x1b] = 0;
  param_4[0x118] = 0;
  param_4[0x119] = 0;
  puVar31 = (undefined8 *)((ulong)(param_4 + 0x1c) & 0xfffffffffffffff8);
  for (uVar35 = (ulong)(((int)puVar10 -
                        (int)(undefined8 *)((ulong)(param_4 + 0x1c) & 0xfffffffffffffff8)) + 0x400U
                       >> 3); uVar35 != 0; uVar35 = uVar35 - 1) {
    *puVar31 = 0;
    puVar31 = puVar31 + (ulong)bVar39 * -2 + 1;
  }
  do {
    *puVar10 = 0xffffffff;
    puVar20 = puVar10 + 8;
    puVar10[4] = 0xffffffff;
    puVar10 = puVar20;
  } while (puVar20 != param_4 + 0x11a);
  uVar35 = (ulong)local_878;
  if (local_878 != 0) {
    lVar26 = *(long *)(param_4 + 0x12e);
    *(ulong *)(lVar26 + 0x20) = uVar35;
    puVar31 = (undefined8 *)calloc(uVar35,0x178);
    *(undefined8 **)(lVar26 + 0x28) = puVar31;
    if (puVar31 == (undefined8 *)0x0) goto LAB_00105d1f;
    puVar21 = puVar31;
    do {
      uVar14 = _LC1;
      *(undefined4 *)(puVar21 + 3) = 0xffffffff;
      puVar22 = puVar21 + 0x2f;
      *puVar21 = uVar14;
      puVar21 = puVar22;
    } while (puVar22 != puVar31 + uVar35 * 0x2f);
    if (uVar25 != 0) {
      lVar26 = 0;
      uVar35 = 0;
      do {
        if (*(char *)((long)local_8a8 + lVar26 + 0x20) != '\0') {
          local_468 = 0;
          uVar24 = ParseType(&local_8e8,(long)local_8a8 + lVar26,0);
          uVar25 = (ulong)uVar24;
          if (uVar24 != 0) goto LAB_00104f50;
        }
        uVar35 = uVar35 + 1;
        lVar26 = lVar26 + 0xe0;
      } while (uVar35 < local_8b0);
    }
    if ((local_458 != 0) && (local_460 = calloc((ulong)local_458,0x10), local_460 == (void *)0x0))
    goto LAB_00106585;
  }
  uVar24 = ParseDescriptorBindings(&local_8e8,param_4);
  uVar25 = (ulong)uVar24;
  if (uVar24 != 0) goto LAB_00106601;
  uVar24 = param_4[0x14];
  if (uVar24 != 0) {
    uVar5 = 0;
    puVar10 = (uint *)(*(long *)(param_4 + 0x16) + 0x1c);
    do {
      uVar7 = *puVar10;
      if (uVar7 == 0xffffffff) {
        uVar7 = *(uint *)(*(long *)(puVar10 + 0x8d) + 0x1c) & 0xff0000;
        if (uVar7 == 0x50000) {
          if (puVar10[2] != 5) {
            *puVar10 = 1;
            goto switchD_0010679a_caseD_1;
          }
LAB_00106f54:
          if (puVar10[6] == 1) {
            *puVar10 = 4;
            goto switchD_0010679a_caseD_2;
          }
          if (puVar10[6] == 2) {
            *puVar10 = 5;
            goto switchD_0010679a_caseD_3;
          }
        }
        else if (uVar7 < 0x50001) {
          if (uVar7 == 0x10000) {
            if (puVar10[2] == 5) goto LAB_00106f54;
            if (puVar10[2] == 6) {
              *puVar10 = 10;
            }
            else {
              if (puVar10[6] == 1) {
                *puVar10 = 2;
                goto switchD_0010679a_caseD_2;
              }
              if (puVar10[6] == 2) {
                *puVar10 = 3;
                goto switchD_0010679a_caseD_3;
              }
            }
          }
          else if (uVar7 == 0x20000) {
            *puVar10 = 0;
            goto switchD_0010679a_default;
          }
        }
        else if (uVar7 == 0x80000) {
          uVar7 = *(uint *)(*(long *)(puVar10 + 0x8d) + 0x20);
          if ((uVar7 & 1) != 0) {
            *puVar10 = 6;
            goto switchD_0010679a_caseD_6;
          }
          if ((uVar7 & 2) != 0) {
            *puVar10 = 7;
            goto switchD_0010679a_caseD_3;
          }
        }
        else if (uVar7 == 0x100000) {
          *puVar10 = 0x3b9d13f0;
          goto switchD_0010679a_caseD_2;
        }
      }
      else if (uVar7 < 10) {
        switch(uVar7) {
        case 1:
switchD_0010679a_caseD_1:
          puVar10[1] = 5;
          break;
        case 2:
        case 4:
switchD_0010679a_caseD_2:
          puVar10[1] = 4;
          break;
        case 3:
        case 5:
        case 7:
        case 9:
switchD_0010679a_caseD_3:
          puVar10[1] = 8;
          break;
        case 6:
        case 8:
switchD_0010679a_caseD_6:
          puVar10[1] = 2;
          break;
        default:
switchD_0010679a_default:
          puVar10[1] = 1;
        }
      }
      else if (uVar7 == 0x3b9d13f0) goto switchD_0010679a_caseD_2;
      uVar5 = uVar5 + 1;
      puVar10 = puVar10 + 0x9a;
    } while (uVar24 != uVar5);
  }
  lVar26 = 0;
LAB_001069c3:
  if ((uint)lVar26 < uVar24) {
    piVar34 = *(int **)(param_4 + 0x16);
    if (piVar34[lVar26 * 0x9a + 7] == 7) {
      piVar11 = piVar34;
      if (piVar34[lVar26 * 0x9a + 0x8d] == -1) {
        pcVar15 = *(char **)(piVar34 + lVar26 * 0x9a + 2);
        if (pcVar15 == (char *)0x0) {
          sVar12 = 0;
        }
        else {
          sVar12 = strlen(pcVar15);
        }
        pcVar17 = local_448;
        for (lVar33 = 0x80; lVar33 != 0; lVar33 = lVar33 + -1) {
          pcVar17[0] = '\0';
          pcVar17[1] = '\0';
          pcVar17[2] = '\0';
          pcVar17[3] = '\0';
          pcVar17[4] = '\0';
          pcVar17[5] = '\0';
          pcVar17[6] = '\0';
          pcVar17[7] = '\0';
          pcVar17 = pcVar17 + (ulong)bVar39 * -0x10 + 8;
        }
        __memcpy_chk(local_448,pcVar15,sVar12,0x400);
        sVar12 = strlen(local_448);
        builtin_strncpy(local_448 + sVar12,"@count",7);
        do {
          if (((piVar11[7] == 7) && (*(char **)(piVar11 + 2) != (char *)0x0)) &&
             (iVar9 = strcmp(local_448,*(char **)(piVar11 + 2)), iVar9 == 0)) goto LAB_00106bb3;
          piVar11 = piVar11 + 0x9a;
        } while (piVar11 != piVar34 + (ulong)uVar24 * 0x9a);
      }
      else {
        do {
          if ((piVar11[7] == 7) && (piVar34[lVar26 * 0x9a + 0x8d] == *piVar11)) goto LAB_00106bb3;
          piVar11 = piVar11 + 0x9a;
        } while (piVar11 != piVar34 + (ulong)uVar24 * 0x9a);
      }
    }
    goto LAB_00106a1e;
  }
  if (uVar24 != 0) {
    local_458 = 0;
    for (uVar35 = 0; (uint)uVar35 < param_4[0x14]; uVar35 = (ulong)((uint)uVar35 + 1)) {
      piVar34 = (int *)(uVar35 * 0x268 + *(long *)(param_4 + 0x16));
      if (piVar34[7] - 6U < 2) {
        piVar34[0x61] = piVar34[0x61] | 1;
        local_468 = 0;
        uVar24 = ParseDescriptorBlockVariable
                           (&local_8e8,param_4,*(undefined8 *)(piVar34 + 0x94),piVar34 + 0x10);
        uVar37 = (ulong)uVar24;
        if (uVar24 == 0) {
          for (; (uint)uVar37 < local_888; uVar37 = (ulong)((uint)uVar37 + 1)) {
            if ((*piVar34 == (local_880 + uVar37 * 8)[2]) &&
               (uVar24 = ParseDescriptorBlockVariableUsage
                                   (&local_8e8,param_4,local_880 + uVar37 * 8,0,0xffffffff,
                                    piVar34 + 0x10), uVar24 != 0)) {
              uVar37 = (ulong)uVar24;
              goto LAB_00106ba0;
            }
          }
          iVar9 = piVar34[7];
          *(undefined8 *)(piVar34 + 0x12) = *(undefined8 *)(piVar34 + 2);
          uVar24 = ParseDescriptorBlockVariableSizes(&local_8e8,param_4,1,0);
          uVar37 = (ulong)uVar24;
          if (uVar24 == 0) {
            if (iVar9 == 7) {
              piVar34[0x16] = 0;
              piVar34[0x17] = 0;
            }
            goto LAB_00106af8;
          }
        }
LAB_00106ba0:
        lVar26 = *(long *)(param_4 + 0x12e);
        uVar25 = uVar37;
        goto LAB_00104f5b;
      }
LAB_00106af8:
    }
  }
  uVar24 = param_4[0x126];
  for (lVar26 = 0; lVar26 != local_8b0 * 0xe0; lVar26 = lVar26 + 0xe0) {
    if ((*(int *)((long)local_8a8 + lVar26 + 4) == 0x3b) &&
       (*(int *)((long)local_8a8 + lVar26 + 0x14) == 9)) {
      uVar24 = uVar24 + 1;
      param_4[0x126] = uVar24;
    }
  }
  if (uVar24 != 0) {
    pvVar13 = calloc((ulong)uVar24,0x168);
    *(void **)(param_4 + 0x128) = pvVar13;
    if (pvVar13 != (void *)0x0) {
      local_458 = 0;
      uVar35 = local_8b0;
      for (uVar37 = 0; uVar37 < uVar35; uVar37 = uVar37 + 1) {
        piVar34 = local_8a8 + uVar37 * 0x38;
        if ((piVar34[1] == 0x3b) && (piVar34[5] == 9)) {
          lVar33 = 0;
          lVar26 = *(long *)(*(long *)(param_4 + 0x12e) + 0x20);
          while( true ) {
            if (lVar33 == lVar26) goto LAB_00106cc4;
            piVar11 = *(int **)(*(long *)(param_4 + 0x12e) + 0x28);
            piVar23 = piVar11 + lVar33 * 0x5e;
            if (piVar34[3] == *piVar23) break;
            lVar33 = lVar33 + 1;
          }
          if (piVar23[1] == 0x20) {
            uVar32 = 0;
            piVar27 = local_8a8;
            while (*piVar27 != *piVar23) {
              uVar32 = uVar32 + 1;
              piVar27 = piVar27 + 0x38;
              if (uVar32 == uVar35) goto LAB_00106cc4;
            }
            lVar33 = 0;
            piVar23 = piVar11;
            while( true ) {
              if (lVar26 == lVar33) goto LAB_00106cc4;
              if (piVar27[3] == *piVar23) break;
              lVar33 = lVar33 + 1;
              piVar23 = piVar23 + 0x5e;
            }
            if (piVar23 != (int *)0x0) goto LAB_0010706b;
LAB_00106cc4:
            uVar24 = 0xc;
          }
          else {
LAB_0010706b:
            uVar32 = 0;
            piVar11 = local_8a8;
            while (*piVar23 != *piVar11) {
              uVar32 = uVar32 + 1;
              piVar11 = piVar11 + 0x38;
              if (uVar35 == uVar32) goto LAB_00106cc4;
            }
            piVar11 = (int *)(uVar25 * 0x168 + *(long *)(param_4 + 0x128));
            *piVar11 = *piVar34;
            local_468 = 0;
            uVar24 = ParseDescriptorBlockVariable(&local_8e8);
            if (uVar24 == 0) {
              uVar35 = 0;
              uVar5 = local_888;
LAB_001070cf:
              if ((uint)uVar35 < uVar5) {
                local_938 = 0;
                iVar9 = (local_880 + uVar35 * 8)[2];
                piVar23 = local_8a8;
                for (; local_938 != local_8b0; local_938 = local_938 + 1) {
                  if (iVar9 == *piVar23) {
                    iVar8 = iVar9;
                    if (piVar23 != (int *)0x0) goto LAB_00107183;
                    break;
                  }
                  piVar23 = piVar23 + 0x38;
                }
                iVar8 = 0;
                goto LAB_00107228;
              }
              *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar34 + 0x14);
              uVar24 = ParseDescriptorBlockVariableSizes(&local_8e8,param_4,1,0,0,piVar11);
              if (uVar24 == 0) {
                piVar11[4] = -1;
                for (lVar26 = 0; (uint)lVar26 < (uint)piVar11[0x52]; lVar26 = lVar26 + 1) {
                  uVar24 = *(uint *)(lVar26 * 0x168 + *(long *)(piVar11 + 0x54) + 0x10);
                  uVar5 = piVar11[4];
                  if (uVar24 < (uint)piVar11[4]) {
                    uVar5 = uVar24;
                  }
                  piVar11[4] = uVar5;
                }
                uVar25 = (ulong)((int)uVar25 + 1);
                uVar35 = local_8b0;
                goto LAB_00106c5e;
              }
            }
          }
LAB_00106cc9:
          uVar25 = (ulong)uVar24;
          lVar26 = *(long *)(param_4 + 0x12e);
          goto LAB_00104f5b;
        }
LAB_00106c5e:
      }
      goto LAB_00106cdf;
    }
    lVar26 = *(long *)(param_4 + 0x12e);
    uVar25 = 3;
    goto LAB_00104f5b;
  }
LAB_00106cdf:
  uVar24 = ParseEntryPoints(&local_8e8);
  uVar25 = (ulong)uVar24;
  if (uVar24 != 0) {
LAB_00106601:
    lVar26 = *(long *)(param_4 + 0x12e);
    goto LAB_00104f5b;
  }
  if (local_89c != 0) {
    uVar35 = (ulong)local_89c;
    param_4[0xe] = local_89c;
    pvVar13 = calloc(uVar35,8);
    *(void **)(param_4 + 0x10) = pvVar13;
    uVar14 = _LC43;
    if (pvVar13 == (void *)0x0) goto LAB_00106585;
    uVar37 = 0;
    do {
      *(undefined8 *)((long)pvVar13 + uVar37 * 8) = uVar14;
      uVar37 = uVar37 + 1;
    } while (uVar37 < uVar35);
    lVar26 = 0;
    piVar34 = local_8a8 + 1;
    for (uVar35 = 0; uVar35 != local_8b0; uVar35 = uVar35 + 1) {
      if (*piVar34 == 0x11) {
        *(ulong *)((long)pvVar13 + lVar26 * 8) = CONCAT44(piVar34[5] + 1,piVar34[3]);
        lVar26 = lVar26 + 1;
      }
      piVar34 = piVar34 + 0x38;
    }
  }
  if (param_4[5] != 0) {
    puVar31 = *(undefined8 **)(param_4 + 6);
    *(undefined8 *)(param_4 + 2) = *puVar31;
    param_4[4] = *(uint *)(puVar31 + 1);
    *(undefined8 *)(param_4 + 0x12) = *(undefined8 *)((long)puVar31 + 0xc);
    param_4[0x11a] = *(uint *)((long)puVar31 + 0x14);
    *(undefined8 *)(param_4 + 0x11c) = puVar31[3];
    param_4[0x11e] = *(uint *)(puVar31 + 4);
    *(undefined8 *)(param_4 + 0x120) = puVar31[5];
    uVar14 = puVar31[7];
    param_4[0x122] = *(uint *)(puVar31 + 6);
    *(undefined8 *)(param_4 + 0x124) = uVar14;
  }
  uVar24 = param_4[0x14];
  uVar14 = _LC44;
  if (uVar24 != 0) {
    piVar34 = (int *)(*(long *)(param_4 + 0x16) + 0x1c);
    do {
      if ((*piVar34 == 7) && ((*(byte *)(piVar34 + 0x11) & 0x80) != 0)) {
        piVar34[1] = 4;
      }
      uVar5 = (int)uVar25 + 1;
      uVar25 = (ulong)uVar5;
      piVar34 = piVar34 + 0x9a;
      uVar14 = _LC44;
    } while (uVar24 != uVar5);
  }
  do {
    free(*(void **)((long)param_4 + uVar36 + 0x70));
    *(undefined8 *)((long)param_4 + uVar36 + 0x68) = uVar14;
    *(undefined8 *)((long)param_4 + uVar36 + 0x70) = 0;
    uVar36 = uVar36 + 0x10;
  } while (uVar36 != 0x400);
  param_4[0x18] = 0;
  uVar24 = ParseDescriptorSets_constprop_0(param_4);
  uVar25 = (ulong)uVar24;
  if (uVar24 != 0) goto LAB_00106601;
  uVar24 = ParseExecutionModes(&local_8e8,param_4);
  uVar25 = (ulong)uVar24;
  if (uVar24 != 0) goto LAB_00106601;
  goto LAB_00104f69;
LAB_00106228:
  uVar25 = 0xb;
LAB_0010622e:
  if (*(long *)(param_4 + 0x12e) != 0) goto LAB_00104f60;
  goto LAB_00104f78;
LAB_00106253:
  uVar25 = 0xc;
  goto LAB_00104f50;
LAB_00106bb3:
  *(int **)(piVar34 + lVar26 * 0x9a + 0x8e) = piVar11;
LAB_00106a1e:
  lVar26 = lVar26 + 1;
  goto LAB_001069c3;
LAB_00107183:
  iVar1 = piVar23[1];
  if (iVar1 == 0x3b) goto LAB_00107228;
  if (iVar1 == 0x3d) {
    uVar24 = piVar23[6] + 3;
joined_r0x0010721f:
    if ((local_8e0 != (int *)0x0) && (uVar24 < local_8e8)) {
      iVar8 = local_8e0[uVar24];
    }
  }
  else {
    if (iVar1 == 0x7c) goto LAB_00107208;
    if (iVar1 == 0x37) {
      uVar24 = piVar23[6] + 2;
      goto joined_r0x0010721f;
    }
  }
  uVar24 = 0;
  piVar27 = local_880;
  while (*piVar27 != iVar8) {
    uVar24 = uVar24 + 1;
    piVar27 = piVar27 + 8;
    if (uVar5 == uVar24) goto LAB_00107208;
  }
  uVar32 = 0;
  piVar23 = local_8a8;
  while( true ) {
    if (local_8b0 == uVar32) goto LAB_00107208;
    if (piVar27[2] == *piVar23) break;
    uVar32 = uVar32 + 1;
    piVar23 = piVar23 + 0x38;
  }
  iVar8 = piVar27[2];
  if (piVar23 == (int *)0x0) goto LAB_00107208;
  goto LAB_00107183;
LAB_00107208:
  iVar8 = 0;
LAB_00107228:
  if (*piVar11 == iVar8) {
    piVar23 = piVar11;
    if (*piVar11 != iVar9) {
      uVar32 = 0;
      piVar23 = local_8a8;
      while( true ) {
        if (local_8b0 == uVar32) {
          uVar25 = FUN_00109af4();
          return uVar25;
        }
        if (iVar9 == *piVar23) break;
        uVar32 = uVar32 + 1;
        piVar23 = piVar23 + 0x38;
      }
      if ((local_8e0 != (int *)0x0) && (piVar23[6] + 3 < local_8e8)) {
        iVar9 = local_8e0[piVar23[6] + 3];
      }
      uVar24 = 0;
      piVar23 = local_880;
      while (*piVar23 != iVar9) {
        uVar24 = uVar24 + 1;
        piVar23 = piVar23 + 8;
        if (uVar5 == uVar24) {
          uVar25 = CreateShaderModule_cold();
          return uVar25;
        }
      }
      piVar23 = *(int **)(piVar23 + 6);
    }
    uVar24 = ParseDescriptorBlockVariableUsage
                       (&local_8e8,param_4,local_880 + uVar35 * 8,0,0xffffffff,piVar23);
    uVar5 = local_888;
    if (uVar24 != 0) goto LAB_00106cc9;
  }
  uVar35 = (ulong)((uint)uVar35 + 1);
  goto LAB_001070cf;
LAB_001056a8:
  uVar25 = 0xb;
LAB_00104f50:
  lVar26 = *(long *)(param_4 + 0x12e);
LAB_00104f5b:
  if (lVar26 != 0) {
LAB_00104f60:
    spvReflectDestroyShaderModule_part_0(param_4);
  }
LAB_00104f69:
  if (local_8a8 != (int *)0x0) {
LAB_00104f78:
    if (local_8b0 != 0) {
LAB_00104f83:
      lVar26 = 0;
      uVar35 = 0;
      do {
        piVar34 = local_8a8;
        pvVar13 = *(void **)((long)local_8a8 + lVar26 + 0xd0);
        if (pvVar13 != (void *)0x0) {
          free(pvVar13);
          *(undefined8 *)((long)piVar34 + lVar26 + 0xd0) = 0;
        }
        pvVar13 = *(void **)((long)piVar34 + lVar26 + 0xd8);
        if (pvVar13 != (void *)0x0) {
          free(pvVar13);
          *(undefined8 *)((long)piVar34 + lVar26 + 0xd8) = 0;
        }
        uVar35 = uVar35 + 1;
        lVar26 = lVar26 + 0xe0;
      } while (uVar35 < local_8b0);
    }
    if (local_898 != 0) {
      uVar35 = 0;
      do {
        uVar36 = uVar35 + 1;
        lVar26 = uVar35 * 0x28;
        free(*(void **)((long)local_890 + lVar26 + 8));
        *(undefined8 *)((long)local_890 + lVar26 + 8) = 0;
        free(*(void **)((long)local_890 + lVar26 + 0x10));
        *(undefined8 *)((long)local_890 + lVar26 + 0x10) = 0;
        free(*(void **)((long)local_890 + lVar26 + 0x20));
        *(undefined8 *)((long)local_890 + lVar26 + 0x20) = 0;
        uVar35 = uVar36;
      } while (uVar36 < local_898);
    }
    if (local_888 != 0) {
      lVar26 = 0;
      do {
        lVar33 = lVar26 + 1;
        free(*(void **)(local_880 + lVar26 * 8 + 4));
        (local_880 + lVar26 * 8 + 4)[0] = 0;
        (local_880 + lVar26 * 8 + 4)[1] = 0;
        lVar26 = lVar33;
      } while ((uint)lVar33 < local_888);
    }
    free(local_8a8);
    free(local_8d0);
    free(local_8b8);
    free(local_890);
    free(local_880);
    if (local_460 != (void *)0x0) {
      free(local_460);
    }
  }
LAB_00105107:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void spvReflectCreateShaderModule(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CreateShaderModule(0,param_1,param_2,param_3);
  return;
}



void spvReflectCreateShaderModule2(void)

{
  CreateShaderModule();
  return;
}



void spvReflectGetShaderModule(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CreateShaderModule(0,param_1,param_2,param_3);
  return;
}



void spvReflectDestroyShaderModule(long param_1)

{
  if (*(long *)(param_1 + 0x4b8) != 0) {
    spvReflectDestroyShaderModule_part_0();
    return;
  }
  return;
}



undefined4 spvReflectGetCodeSize(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x4b8) + 8);
  }
  return 0;
}



undefined8 spvReflectGetCode(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x4b8) + 0x10);
  }
  return 0;
}



undefined8 * spvReflectGetEntryPoint(long param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (*(uint *)(param_1 + 0x14) != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar1 = puVar3 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
    do {
      iVar2 = strcmp((char *)*puVar3,param_2);
      if (iVar2 == 0) {
        return puVar3;
      }
      puVar3 = puVar3 + 0x13;
    } while (puVar3 != puVar1);
  }
  return (undefined8 *)0x0;
}



undefined8 spvReflectEnumerateDescriptorBindings(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_2 != (uint *)0x0) && (param_1 != 0)) {
    if (param_3 == (long *)0x0) {
      *param_2 = *(uint *)(param_1 + 0x50);
      uVar3 = 0;
    }
    else {
      uVar1 = *param_2;
      uVar3 = 7;
      if (uVar1 == *(uint *)(param_1 + 0x50)) {
        if (uVar1 != 0) {
          lVar2 = 0;
          plVar5 = param_3;
          do {
            plVar6 = plVar5 + 1;
            lVar4 = *(long *)(param_1 + 0x58) + lVar2;
            lVar2 = lVar2 + 0x268;
            *plVar5 = lVar4;
            plVar5 = plVar6;
          } while (plVar6 != param_3 + uVar1);
        }
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 5;
}



undefined8
spvReflectEnumerateEntryPointDescriptorBindings
          (long param_1,char *param_2,uint *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  
  if (param_3 == (uint *)0x0) {
    return 5;
  }
  if (param_1 == 0) {
    return 5;
  }
  if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
    puVar15 = *(undefined8 **)(param_1 + 0x18);
    puVar1 = puVar15 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
    do {
      iVar6 = strcmp((char *)*puVar15,param_2);
      if (iVar6 == 0) {
        uVar12 = *(uint *)(param_1 + 0x50);
        uVar13 = (ulong)uVar12;
        if (uVar12 != 0) {
          uVar2 = *(uint *)(puVar15 + 10);
          lVar5 = puVar15[0xb];
          lVar10 = 0;
          uVar14 = 0;
          do {
            uVar12 = (uint)uVar14;
            uVar9 = 0;
            puVar11 = (uint *)(*(long *)(param_1 + 0x58) + lVar10);
            uVar3 = *puVar11;
            uVar7 = (ulong)uVar2;
            while (uVar8 = uVar7, uVar9 < uVar8) {
              uVar7 = (uVar8 - uVar9 >> 1) + uVar9;
              uVar4 = *(uint *)(lVar5 + uVar7 * 4);
              if (uVar3 == uVar4) {
                if (param_4 != 0) {
                  if (*param_3 <= uVar12) {
                    return 7;
                  }
                  *(uint **)(param_4 + uVar14 * 8) = puVar11;
                }
                uVar12 = uVar12 + 1;
                uVar14 = (ulong)uVar12;
                break;
              }
              if (uVar4 < uVar3) {
                uVar9 = uVar7 + 1;
                uVar7 = uVar8;
              }
            }
            lVar10 = lVar10 + 0x268;
          } while (lVar10 != uVar13 * 0x268);
        }
        if (param_4 == 0) {
          *param_3 = uVar12;
        }
        else if (*param_3 != uVar12) {
          return 7;
        }
        return 0;
      }
      puVar15 = puVar15 + 0x13;
    } while (puVar15 != puVar1);
  }
  return 8;
}



undefined8 spvReflectEnumerateDescriptorSets(long param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((param_2 != (uint *)0x0) && (param_1 != 0)) {
    if (param_3 == (long *)0x0) {
      *param_2 = *(uint *)(param_1 + 0x60);
      uVar3 = 0;
    }
    else {
      uVar2 = *param_2;
      uVar3 = 7;
      if (uVar2 == *(uint *)(param_1 + 0x60)) {
        if (uVar2 != 0) {
          param_1 = param_1 + 0x68;
          plVar1 = param_3 + uVar2;
          do {
            *param_3 = param_1;
            param_3 = param_3 + 1;
            param_1 = param_1 + 0x10;
          } while (param_3 != plVar1);
        }
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 5;
}



undefined8
spvReflectEnumerateEntryPointDescriptorSets(long param_1,char *param_2,uint *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((param_3 != (uint *)0x0) && (param_1 != 0)) {
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar6 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar3 = strcmp((char *)*puVar6,param_2);
        if (iVar3 == 0) {
          if (param_4 == 0) {
            *param_3 = *(uint *)(puVar6 + 8);
            uVar4 = 0;
          }
          else {
            uVar2 = *param_3;
            uVar4 = 7;
            if (uVar2 == *(uint *)(puVar6 + 8)) {
              uVar5 = 0;
              if (uVar2 != 0) {
                do {
                  *(ulong *)(param_4 + uVar5 * 8) = uVar5 * 0x10 + puVar6[9];
                  uVar5 = uVar5 + 1;
                } while (uVar2 != uVar5);
              }
              uVar4 = 0;
            }
          }
          return uVar4;
        }
        puVar6 = puVar6 + 0x13;
      } while (puVar6 != puVar1);
    }
    return 8;
  }
  return 5;
}



undefined8 spvReflectEnumerateInterfaceVariables(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_2 != (uint *)0x0) && (param_1 != 0)) {
    if (param_3 == (long *)0x0) {
      *param_2 = *(uint *)(param_1 + 0x488);
      uVar3 = 0;
    }
    else {
      uVar1 = *param_2;
      uVar3 = 7;
      if (uVar1 == *(uint *)(param_1 + 0x488)) {
        if (uVar1 != 0) {
          lVar2 = 0;
          plVar5 = param_3;
          do {
            plVar6 = plVar5 + 1;
            lVar4 = *(long *)(param_1 + 0x490) + lVar2;
            lVar2 = lVar2 + 0x178;
            *plVar5 = lVar4;
            plVar5 = plVar6;
          } while (plVar6 != param_3 + uVar1);
        }
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 5;
}



undefined8
spvReflectEnumerateEntryPointInterfaceVariables
          (long param_1,char *param_2,uint *param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((param_3 != (uint *)0x0) && (param_1 != 0)) {
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar9 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar9 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar3 = strcmp((char *)*puVar9,param_2);
        if (iVar3 == 0) {
          if (param_4 == (long *)0x0) {
            *param_3 = *(uint *)(puVar9 + 6);
            uVar4 = 0;
          }
          else {
            uVar2 = *param_3;
            uVar4 = 7;
            if (uVar2 == *(uint *)(puVar9 + 6)) {
              if (uVar2 != 0) {
                lVar8 = 0;
                plVar5 = param_4;
                do {
                  plVar6 = plVar5 + 1;
                  lVar7 = puVar9[7] + lVar8;
                  lVar8 = lVar8 + 0x178;
                  *plVar5 = lVar7;
                  plVar5 = plVar6;
                } while (plVar6 != param_4 + uVar2);
              }
              uVar4 = 0;
            }
          }
          return uVar4;
        }
        puVar9 = puVar9 + 0x13;
      } while (puVar9 != puVar1);
    }
    return 8;
  }
  return 5;
}



undefined8 spvReflectEnumerateInputVariables(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 == (uint *)0x0) || (param_1 == 0)) {
    uVar3 = 5;
  }
  else {
    if (param_3 == 0) {
      *param_2 = *(uint *)(param_1 + 0x468);
      return 0;
    }
    uVar1 = *param_2;
    uVar3 = 7;
    if (uVar1 == *(uint *)(param_1 + 0x468)) {
      if (uVar1 != 0) {
        lVar2 = *(long *)(param_1 + 0x470);
        lVar4 = 0;
        do {
          *(undefined8 *)(param_3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          lVar4 = lVar4 + 8;
        } while (lVar4 != (ulong)uVar1 << 3);
      }
      return 0;
    }
  }
  return uVar3;
}



undefined8
spvReflectEnumerateEntryPointInputVariables(long param_1,char *param_2,uint *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((param_3 != (uint *)0x0) && (param_1 != 0)) {
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar7 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar4 = strcmp((char *)*puVar7,param_2);
        if (iVar4 == 0) {
          if (param_4 == 0) {
            *param_3 = *(uint *)((long)puVar7 + 0x14);
            uVar5 = 0;
          }
          else {
            uVar2 = *param_3;
            uVar5 = 7;
            if (uVar2 == *(uint *)((long)puVar7 + 0x14)) {
              if (uVar2 != 0) {
                lVar3 = puVar7[3];
                lVar6 = 0;
                do {
                  *(undefined8 *)(param_4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
                  lVar6 = lVar6 + 8;
                } while ((ulong)uVar2 << 3 != lVar6);
              }
              uVar5 = 0;
            }
          }
          return uVar5;
        }
        puVar7 = puVar7 + 0x13;
      } while (puVar7 != puVar1);
    }
    return 8;
  }
  return 5;
}



undefined8 spvReflectEnumerateOutputVariables(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 == (uint *)0x0) || (param_1 == 0)) {
    uVar3 = 5;
  }
  else {
    if (param_3 == 0) {
      *param_2 = *(uint *)(param_1 + 0x478);
      return 0;
    }
    uVar1 = *param_2;
    uVar3 = 7;
    if (uVar1 == *(uint *)(param_1 + 0x478)) {
      if (uVar1 != 0) {
        lVar2 = *(long *)(param_1 + 0x480);
        lVar4 = 0;
        do {
          *(undefined8 *)(param_3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          lVar4 = lVar4 + 8;
        } while (lVar4 != (ulong)uVar1 << 3);
      }
      return 0;
    }
  }
  return uVar3;
}



undefined8
spvReflectEnumerateEntryPointOutputVariables(long param_1,char *param_2,uint *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((param_3 != (uint *)0x0) && (param_1 != 0)) {
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar7 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar4 = strcmp((char *)*puVar7,param_2);
        if (iVar4 == 0) {
          if (param_4 == 0) {
            *param_3 = *(uint *)(puVar7 + 4);
            uVar5 = 0;
          }
          else {
            uVar2 = *param_3;
            uVar5 = 7;
            if (uVar2 == *(uint *)(puVar7 + 4)) {
              if (uVar2 != 0) {
                lVar3 = puVar7[5];
                lVar6 = 0;
                do {
                  *(undefined8 *)(param_4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
                  lVar6 = lVar6 + 8;
                } while ((ulong)uVar2 << 3 != lVar6);
              }
              uVar5 = 0;
            }
          }
          return uVar5;
        }
        puVar7 = puVar7 + 0x13;
      } while (puVar7 != puVar1);
    }
    return 8;
  }
  return 5;
}



undefined8 spvReflectEnumeratePushConstantBlocks(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_2 != (uint *)0x0) && (param_1 != 0)) {
    if (param_3 == (long *)0x0) {
      *param_2 = *(uint *)(param_1 + 0x498);
      uVar3 = 0;
    }
    else {
      uVar1 = *param_2;
      uVar3 = 7;
      if (uVar1 == *(uint *)(param_1 + 0x498)) {
        if (uVar1 != 0) {
          lVar2 = 0;
          plVar5 = param_3;
          do {
            plVar6 = plVar5 + 1;
            lVar4 = *(long *)(param_1 + 0x4a0) + lVar2;
            lVar2 = lVar2 + 0x168;
            *plVar5 = lVar4;
            plVar5 = plVar6;
          } while (plVar6 != param_3 + uVar1);
        }
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 5;
}



undefined8 spvReflectEnumeratePushConstants(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_2 != (uint *)0x0) && (param_1 != 0)) {
    if (param_3 == (long *)0x0) {
      *param_2 = *(uint *)(param_1 + 0x498);
      uVar3 = 0;
    }
    else {
      uVar1 = *param_2;
      uVar3 = 7;
      if (uVar1 == *(uint *)(param_1 + 0x498)) {
        if (uVar1 != 0) {
          lVar2 = 0;
          plVar5 = param_3;
          do {
            plVar6 = plVar5 + 1;
            lVar4 = *(long *)(param_1 + 0x4a0) + lVar2;
            lVar2 = lVar2 + 0x168;
            *plVar5 = lVar4;
            plVar5 = plVar6;
          } while (plVar6 != param_3 + uVar1);
        }
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 5;
}



undefined8
spvReflectEnumerateEntryPointPushConstantBlocks
          (long param_1,char *param_2,uint *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  
  if (param_3 == (uint *)0x0) {
    return 5;
  }
  if (param_1 == 0) {
    return 5;
  }
  if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
    puVar15 = *(undefined8 **)(param_1 + 0x18);
    puVar1 = puVar15 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
    do {
      iVar6 = strcmp((char *)*puVar15,param_2);
      if (iVar6 == 0) {
        uVar12 = *(uint *)(param_1 + 0x498);
        uVar13 = (ulong)uVar12;
        if (uVar12 != 0) {
          uVar2 = *(uint *)(puVar15 + 0xc);
          lVar5 = puVar15[0xd];
          lVar10 = 0;
          uVar14 = 0;
          do {
            uVar12 = (uint)uVar14;
            uVar9 = 0;
            puVar11 = (uint *)(*(long *)(param_1 + 0x4a0) + lVar10);
            uVar3 = *puVar11;
            uVar7 = (ulong)uVar2;
            while (uVar8 = uVar7, uVar9 < uVar8) {
              uVar7 = (uVar8 - uVar9 >> 1) + uVar9;
              uVar4 = *(uint *)(lVar5 + uVar7 * 4);
              if (uVar3 == uVar4) {
                if (param_4 != 0) {
                  if (*param_3 <= uVar12) {
                    return 7;
                  }
                  *(uint **)(param_4 + uVar14 * 8) = puVar11;
                }
                uVar12 = uVar12 + 1;
                uVar14 = (ulong)uVar12;
                break;
              }
              if (uVar4 < uVar3) {
                uVar9 = uVar7 + 1;
                uVar7 = uVar8;
              }
            }
            lVar10 = lVar10 + 0x168;
          } while (lVar10 != uVar13 * 0x168);
        }
        if (param_4 == 0) {
          *param_3 = uVar12;
        }
        else if (*param_3 != uVar12) {
          return 7;
        }
        return 0;
      }
      puVar15 = puVar15 + 0x13;
    } while (puVar15 != puVar1);
  }
  return 8;
}



undefined8 spvReflectEnumerateSpecializationConstants(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_2 != (uint *)0x0) && (param_1 != 0)) {
    if (param_3 == (long *)0x0) {
      *param_2 = *(uint *)(param_1 + 0x4a8);
      uVar3 = 0;
    }
    else {
      uVar1 = *param_2;
      uVar3 = 7;
      if (uVar1 == *(uint *)(param_1 + 0x4a8)) {
        if (uVar1 != 0) {
          lVar2 = 0;
          plVar5 = param_3;
          do {
            plVar6 = plVar5 + 1;
            lVar4 = *(long *)(param_1 + 0x4b0) + lVar2;
            lVar2 = lVar2 + 0x18;
            *plVar5 = lVar4;
            plVar5 = plVar6;
          } while (plVar6 != param_3 + uVar1);
        }
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 5;
}



undefined4 *
spvReflectGetDescriptorBinding(long param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    uVar1 = 5;
    puVar2 = (undefined4 *)0x0;
    if (param_4 == (undefined4 *)0x0) {
      return param_4;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x50) != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x58);
      puVar3 = puVar2 + (ulong)*(uint *)(param_1 + 0x50) * 0x9a;
      do {
        if ((puVar2[4] == param_2) && (puVar2[6] == param_3)) {
          if (param_4 == (undefined4 *)0x0) {
            return puVar2;
          }
          uVar1 = 0;
          goto LAB_0010866a;
        }
        puVar2 = puVar2 + 0x9a;
      } while (puVar2 != puVar3);
    }
    if (param_4 == (undefined4 *)0x0) {
      return param_4;
    }
    puVar2 = (undefined4 *)0x0;
    uVar1 = 8;
  }
LAB_0010866a:
  *param_4 = uVar1;
  return puVar2;
}



uint * spvReflectGetEntryPointDescriptorBinding
                 (long param_1,char *param_2,uint param_3,uint param_4,int *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (*(uint *)(param_1 + 0x14) != 0)) {
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    puVar1 = puVar9 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
    do {
      iVar3 = strcmp((char *)*puVar9,param_2);
      if (iVar3 == 0) {
        if (*(uint *)(param_1 + 0x50) != 0) {
          puVar7 = *(uint **)(param_1 + 0x58);
          puVar8 = puVar7 + (ulong)*(uint *)(param_1 + 0x50) * 0x9a;
          do {
            uVar6 = 0;
            uVar4 = (ulong)*(uint *)(puVar9 + 10);
            while (uVar5 = uVar4, uVar6 < uVar5) {
              uVar4 = (uVar5 - uVar6 >> 1) + uVar6;
              uVar2 = *(uint *)(puVar9[0xb] + uVar4 * 4);
              if (*puVar7 == uVar2) {
                if ((puVar7[4] == param_3) && (puVar7[6] == param_4)) goto LAB_00108777;
                break;
              }
              if (uVar2 < *puVar7) {
                uVar6 = uVar4 + 1;
                uVar4 = uVar5;
              }
            }
            puVar7 = puVar7 + 0x9a;
          } while (puVar8 != puVar7);
        }
        puVar7 = (uint *)0x0;
LAB_00108777:
        if (param_5 == (int *)0x0) {
          return puVar7;
        }
        *param_5 = (uint)(puVar7 == (uint *)0x0) << 3;
        return puVar7;
      }
      puVar9 = puVar9 + 0x13;
    } while (puVar9 != puVar1);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 8;
  }
  return (uint *)0x0;
}



int * spvReflectGetDescriptorSet(long param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
    iVar2 = 5;
    if (param_3 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  else if (*(uint *)(param_1 + 0x60) == 0) {
    piVar1 = (int *)0x0;
    iVar2 = 8;
    if (param_3 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  else {
    piVar4 = (int *)(param_1 + 0x68);
    piVar1 = (int *)0x0;
    piVar3 = piVar4 + (ulong)*(uint *)(param_1 + 0x60) * 4;
    do {
      if (param_2 == *piVar4) {
        piVar1 = piVar4;
      }
      piVar4 = piVar4 + 4;
    } while (piVar3 != piVar4);
    if (param_3 == (int *)0x0) {
      return piVar1;
    }
    iVar2 = (uint)(piVar1 == (int *)0x0) << 3;
  }
  *param_3 = iVar2;
  return piVar1;
}



int * spvReflectGetEntryPointDescriptorSet(long param_1,char *param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    piVar5 = (int *)0x0;
    iVar2 = 5;
    if (param_4 != (int *)0x0) {
LAB_001088ef:
      *param_4 = iVar2;
      return piVar5;
    }
  }
  else {
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar6 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar2 = strcmp((char *)*puVar6,param_2);
        if (iVar2 == 0) {
          piVar5 = (int *)0x0;
          if (*(uint *)(puVar6 + 8) != 0) {
            piVar3 = (int *)puVar6[9];
            piVar5 = (int *)0x0;
            piVar4 = piVar3 + (ulong)*(uint *)(puVar6 + 8) * 4;
            do {
              if (param_3 == *piVar3) {
                piVar5 = piVar3;
              }
              piVar3 = piVar3 + 4;
            } while (piVar4 != piVar3);
          }
          if (param_4 == (int *)0x0) {
            return piVar5;
          }
          iVar2 = (uint)(piVar5 == (int *)0x0) << 3;
          goto LAB_001088ef;
        }
        puVar6 = puVar6 + 0x13;
      } while (puVar6 != puVar1);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 8;
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



long spvReflectGetInputVariableByLocation(long param_1,int param_2,int *param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == -1) {
    if (param_3 != (int *)0x0) {
      *param_3 = 8;
      return 0;
    }
LAB_00108994:
    lVar4 = 0;
  }
  else {
    if (param_1 == 0) {
      lVar4 = 0;
      iVar2 = 5;
      if (param_3 == (int *)0x0) goto LAB_00108994;
    }
    else {
      if (*(uint *)(param_1 + 0x468) == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = 8;
          return 0;
        }
        goto LAB_00108994;
      }
      plVar3 = *(long **)(param_1 + 0x470);
      lVar4 = 0;
      plVar1 = plVar3 + *(uint *)(param_1 + 0x468);
      do {
        if (param_2 == *(int *)(*plVar3 + 0x10)) {
          lVar4 = *plVar3;
        }
        plVar3 = plVar3 + 1;
      } while (plVar1 != plVar3);
      if (param_3 == (int *)0x0) {
        return lVar4;
      }
      iVar2 = (uint)(lVar4 == 0) << 3;
    }
    *param_3 = iVar2;
  }
  return lVar4;
}



void spvReflectGetInputVariable(void)

{
  spvReflectGetInputVariableByLocation();
  return;
}



long spvReflectGetEntryPointInputVariableByLocation
               (long param_1,char *param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_3 != -1) {
    if (param_1 == 0) {
      lVar5 = 0;
      iVar3 = 5;
      if (param_4 == (int *)0x0) {
        return 0;
      }
LAB_00108a84:
      *param_4 = iVar3;
      return lVar5;
    }
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar6 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar3 = strcmp((char *)*puVar6,param_2);
        if (iVar3 == 0) {
          lVar5 = 0;
          if (*(uint *)((long)puVar6 + 0x14) != 0) {
            plVar4 = (long *)puVar6[3];
            lVar5 = 0;
            plVar2 = plVar4 + *(uint *)((long)puVar6 + 0x14);
            do {
              if (param_3 == *(int *)(*plVar4 + 0x10)) {
                lVar5 = *plVar4;
              }
              plVar4 = plVar4 + 1;
            } while (plVar2 != plVar4);
          }
          if (param_4 == (int *)0x0) {
            return lVar5;
          }
          iVar3 = (uint)(lVar5 == 0) << 3;
          goto LAB_00108a84;
        }
        puVar6 = puVar6 + 0x13;
      } while (puVar6 != puVar1);
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 8;
  }
  return 0;
}



long spvReflectGetInputVariableBySemantic(long param_1,char *param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  char *__s1;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == (char *)0x0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 5;
    }
  }
  else {
    if (*param_2 == '\0') {
      if (param_3 == (int *)0x0) {
        return 0;
      }
      *param_3 = 8;
      return 0;
    }
    if (param_1 == 0) {
      iVar3 = 5;
    }
    else {
      if (*(uint *)(param_1 + 0x468) != 0) {
        plVar4 = *(long **)(param_1 + 0x470);
        lVar5 = 0;
        plVar1 = plVar4 + *(uint *)(param_1 + 0x468);
        do {
          lVar2 = *plVar4;
          __s1 = *(char **)(lVar2 + 0x20);
          if ((__s1 != (char *)0x0) && (iVar3 = strcmp(__s1,param_2), iVar3 == 0)) {
            lVar5 = lVar2;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar1);
        if (param_3 == (int *)0x0) {
          return lVar5;
        }
        iVar3 = (uint)(lVar5 == 0) << 3;
        goto LAB_00108b43;
      }
      iVar3 = 8;
    }
    lVar5 = 0;
    if (param_3 != (int *)0x0) {
LAB_00108b43:
      *param_3 = iVar3;
      return lVar5;
    }
  }
  return 0;
}



long spvReflectGetEntryPointInputVariableBySemantic
               (long param_1,char *param_2,char *param_3,int *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  char *__s1;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  if (param_3 == (char *)0x0) {
    if (param_4 != (int *)0x0) {
      *param_4 = 5;
    }
  }
  else {
    if (*param_3 != '\0') {
      if (param_1 == 0) {
        lVar7 = 0;
        iVar4 = 5;
        if (param_4 == (int *)0x0) {
          return 0;
        }
LAB_00108c8d:
        *param_4 = iVar4;
        return lVar7;
      }
      if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
        puVar5 = *(undefined8 **)(param_1 + 0x18);
        puVar1 = puVar5 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
        do {
          iVar4 = strcmp((char *)*puVar5,param_2);
          if (iVar4 == 0) {
            lVar7 = 0;
            if (*(uint *)((long)puVar5 + 0x14) != 0) {
              plVar6 = (long *)puVar5[3];
              lVar7 = 0;
              plVar2 = plVar6 + *(uint *)((long)puVar5 + 0x14);
              do {
                lVar3 = *plVar6;
                __s1 = *(char **)(lVar3 + 0x20);
                if ((__s1 != (char *)0x0) && (iVar4 = strcmp(__s1,param_3), iVar4 == 0)) {
                  lVar7 = lVar3;
                }
                plVar6 = plVar6 + 1;
              } while (plVar2 != plVar6);
            }
            if (param_4 == (int *)0x0) {
              return lVar7;
            }
            iVar4 = (uint)(lVar7 == 0) << 3;
            goto LAB_00108c8d;
          }
          puVar5 = puVar5 + 0x13;
        } while (puVar5 != puVar1);
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 8;
    }
  }
  return 0;
}



long spvReflectGetOutputVariableByLocation(long param_1,int param_2,int *param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == -1) {
    if (param_3 != (int *)0x0) {
      *param_3 = 8;
      return 0;
    }
LAB_00108d34:
    lVar4 = 0;
  }
  else {
    if (param_1 == 0) {
      lVar4 = 0;
      iVar2 = 5;
      if (param_3 == (int *)0x0) goto LAB_00108d34;
    }
    else {
      if (*(uint *)(param_1 + 0x478) == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = 8;
          return 0;
        }
        goto LAB_00108d34;
      }
      plVar3 = *(long **)(param_1 + 0x480);
      lVar4 = 0;
      plVar1 = plVar3 + *(uint *)(param_1 + 0x478);
      do {
        if (param_2 == *(int *)(*plVar3 + 0x10)) {
          lVar4 = *plVar3;
        }
        plVar3 = plVar3 + 1;
      } while (plVar1 != plVar3);
      if (param_3 == (int *)0x0) {
        return lVar4;
      }
      iVar2 = (uint)(lVar4 == 0) << 3;
    }
    *param_3 = iVar2;
  }
  return lVar4;
}



void spvReflectGetOutputVariable(void)

{
  spvReflectGetOutputVariableByLocation();
  return;
}



long spvReflectGetEntryPointOutputVariableByLocation
               (long param_1,char *param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_3 != -1) {
    if (param_1 == 0) {
      lVar5 = 0;
      iVar3 = 5;
      if (param_4 == (int *)0x0) {
        return 0;
      }
LAB_00108e24:
      *param_4 = iVar3;
      return lVar5;
    }
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar6 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar3 = strcmp((char *)*puVar6,param_2);
        if (iVar3 == 0) {
          lVar5 = 0;
          if (*(uint *)(puVar6 + 4) != 0) {
            plVar4 = (long *)puVar6[5];
            lVar5 = 0;
            plVar2 = plVar4 + *(uint *)(puVar6 + 4);
            do {
              if (param_3 == *(int *)(*plVar4 + 0x10)) {
                lVar5 = *plVar4;
              }
              plVar4 = plVar4 + 1;
            } while (plVar2 != plVar4);
          }
          if (param_4 == (int *)0x0) {
            return lVar5;
          }
          iVar3 = (uint)(lVar5 == 0) << 3;
          goto LAB_00108e24;
        }
        puVar6 = puVar6 + 0x13;
      } while (puVar6 != puVar1);
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 8;
  }
  return 0;
}



long spvReflectGetOutputVariableBySemantic(long param_1,char *param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  char *__s1;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == (char *)0x0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 5;
    }
  }
  else {
    if (*param_2 == '\0') {
      if (param_3 == (int *)0x0) {
        return 0;
      }
      *param_3 = 8;
      return 0;
    }
    if (param_1 == 0) {
      iVar3 = 5;
    }
    else {
      if (*(uint *)(param_1 + 0x478) != 0) {
        plVar4 = *(long **)(param_1 + 0x480);
        lVar5 = 0;
        plVar1 = plVar4 + *(uint *)(param_1 + 0x478);
        do {
          lVar2 = *plVar4;
          __s1 = *(char **)(lVar2 + 0x20);
          if ((__s1 != (char *)0x0) && (iVar3 = strcmp(__s1,param_2), iVar3 == 0)) {
            lVar5 = lVar2;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar1);
        if (param_3 == (int *)0x0) {
          return lVar5;
        }
        iVar3 = (uint)(lVar5 == 0) << 3;
        goto LAB_00108ee3;
      }
      iVar3 = 8;
    }
    lVar5 = 0;
    if (param_3 != (int *)0x0) {
LAB_00108ee3:
      *param_3 = iVar3;
      return lVar5;
    }
  }
  return 0;
}



long spvReflectGetEntryPointOutputVariableBySemantic
               (long param_1,char *param_2,char *param_3,int *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  char *__s1;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  if (param_3 == (char *)0x0) {
    if (param_4 != (int *)0x0) {
      *param_4 = 5;
    }
  }
  else {
    if (*param_3 != '\0') {
      if (param_1 == 0) {
        lVar7 = 0;
        iVar4 = 5;
        if (param_4 == (int *)0x0) {
          return 0;
        }
LAB_0010902d:
        *param_4 = iVar4;
        return lVar7;
      }
      if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
        puVar5 = *(undefined8 **)(param_1 + 0x18);
        puVar1 = puVar5 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
        do {
          iVar4 = strcmp((char *)*puVar5,param_2);
          if (iVar4 == 0) {
            lVar7 = 0;
            if (*(uint *)(puVar5 + 4) != 0) {
              plVar6 = (long *)puVar5[5];
              lVar7 = 0;
              plVar2 = plVar6 + *(uint *)(puVar5 + 4);
              do {
                lVar3 = *plVar6;
                __s1 = *(char **)(lVar3 + 0x20);
                if ((__s1 != (char *)0x0) && (iVar4 = strcmp(__s1,param_3), iVar4 == 0)) {
                  lVar7 = lVar3;
                }
                plVar6 = plVar6 + 1;
              } while (plVar2 != plVar6);
            }
            if (param_4 == (int *)0x0) {
              return lVar7;
            }
            iVar4 = (uint)(lVar7 == 0) << 3;
            goto LAB_0010902d;
          }
          puVar5 = puVar5 + 0x13;
        } while (puVar5 != puVar1);
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 8;
    }
  }
  return 0;
}



long spvReflectGetPushConstantBlock(long param_1,uint param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_1 == 0) {
    lVar1 = 0;
    if (param_3 != (int *)0x0) {
      *param_3 = 5;
      return 0;
    }
  }
  else {
    if (param_2 < *(uint *)(param_1 + 0x498)) {
      lVar1 = (ulong)param_2 * 0x168 + *(long *)(param_1 + 0x4a0);
      if (param_3 == (int *)0x0) {
        return lVar1;
      }
      iVar2 = (uint)(lVar1 == 0) << 3;
    }
    else {
      lVar1 = 0;
      iVar2 = 8;
      if (param_3 == (int *)0x0) {
        return 0;
      }
    }
    *param_3 = iVar2;
  }
  return lVar1;
}



long spvReflectGetPushConstant(long param_1,uint param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_1 == 0) {
    lVar1 = 0;
    iVar2 = 5;
    if (param_3 == (int *)0x0) {
      return 0;
    }
  }
  else if (param_2 < *(uint *)(param_1 + 0x498)) {
    lVar1 = (ulong)param_2 * 0x168 + *(long *)(param_1 + 0x4a0);
    if (param_3 == (int *)0x0) {
      return lVar1;
    }
    iVar2 = (uint)(lVar1 == 0) << 3;
  }
  else {
    lVar1 = 0;
    iVar2 = 8;
    if (param_3 == (int *)0x0) {
      return 0;
    }
  }
  *param_3 = iVar2;
  return lVar1;
}



uint * spvReflectGetEntryPointPushConstantBlock(long param_1,char *param_2,int *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  if (param_1 == 0) {
    puVar8 = (uint *)0x0;
    iVar3 = 5;
    if (param_3 != (int *)0x0) {
LAB_00109210:
      *param_3 = iVar3;
      return puVar8;
    }
  }
  else {
    if ((param_2 != (char *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      puVar1 = puVar7 + (ulong)*(uint *)(param_1 + 0x14) * 0x13;
      do {
        iVar3 = strcmp((char *)*puVar7,param_2);
        if (iVar3 == 0) {
          if (*(uint *)(param_1 + 0x498) != 0) {
            puVar8 = *(uint **)(param_1 + 0x4a0);
            puVar9 = puVar8 + (ulong)*(uint *)(param_1 + 0x498) * 0x5a;
            do {
              uVar6 = 0;
              uVar4 = (ulong)*(uint *)(puVar7 + 0xc);
              while (uVar5 = uVar4, uVar6 < uVar5) {
                uVar4 = (uVar5 - uVar6 >> 1) + uVar6;
                uVar2 = *(uint *)(puVar7[0xd] + uVar4 * 4);
                if (*puVar8 == uVar2) goto LAB_00109200;
                if (uVar2 < *puVar8) {
                  uVar6 = uVar4 + 1;
                  uVar4 = uVar5;
                }
              }
              puVar8 = puVar8 + 0x5a;
            } while (puVar9 != puVar8);
          }
          puVar8 = (uint *)0x0;
LAB_00109200:
          if (param_3 == (int *)0x0) {
            return puVar8;
          }
          iVar3 = (uint)(puVar8 == (uint *)0x0) << 3;
          goto LAB_00109210;
        }
        puVar7 = puVar7 + 0x13;
      } while (puVar7 != puVar1);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = 8;
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



undefined8
spvReflectChangeDescriptorBindingNumbers(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    return 5;
  }
  if (param_1 == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
LAB_001092b3:
    if (param_4 != -1) {
LAB_0010930e:
      uVar3 = _LC44;
      puVar5 = (undefined8 *)(param_1 + 0x70);
      do {
        puVar6 = puVar5 + 2;
        free((void *)*puVar5);
        *puVar5 = 0;
        puVar5[-1] = uVar3;
        puVar5 = puVar6;
      } while ((undefined8 *)(param_1 + 0x470) != puVar6);
      *(undefined4 *)(param_1 + 0x60) = 0;
      uVar3 = ParseDescriptorSets_constprop_0(param_1);
      return uVar3;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != param_2) {
      lVar2 = lVar4 + 0x268;
      lVar1 = lVar2;
      do {
        lVar4 = lVar1;
        if (lVar4 == (ulong)(*(int *)(param_1 + 0x50) - 1) * 0x268 + lVar2) goto LAB_001092b3;
        lVar1 = lVar4 + 0x268;
      } while (param_2 != lVar4);
    }
    lVar1 = *(long *)(param_1 + 0x4b8);
    if (*(int *)(lVar1 + 0x18) - 1U < *(uint *)(lVar4 + 600)) {
      return 4;
    }
    if (param_3 != -1) {
      *(int *)(*(long *)(lVar1 + 0x10) + (ulong)*(uint *)(lVar4 + 600) * 4) = param_3;
      *(int *)(lVar4 + 0x10) = param_3;
    }
    if (param_4 != -1) {
      *(int *)(*(long *)(lVar1 + 0x10) + (ulong)*(uint *)(lVar4 + 0x25c) * 4) = param_4;
      *(int *)(lVar4 + 0x18) = param_4;
      goto LAB_0010930e;
    }
  }
  return 0;
}



void spvReflectChangeDescriptorBindingNumber(void)

{
  spvReflectChangeDescriptorBindingNumbers();
  return;
}



undefined8 spvReflectChangeDescriptorSetNumber(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    piVar5 = (int *)(param_1 + 0x68);
    do {
      if (*piVar5 == *param_2) {
        if (param_3 == -1) {
          return 0;
        }
        if (param_2[1] != 0) {
          lVar2 = *(long *)(param_2 + 2);
          lVar3 = *(long *)(param_1 + 0x4b8);
          lVar9 = 0;
          do {
            lVar4 = *(long *)(lVar2 + lVar9 * 8);
            uVar1 = *(uint *)(lVar4 + 0x25c);
            if (*(int *)(lVar3 + 0x18) - 1U < uVar1) {
              return 4;
            }
            lVar9 = lVar9 + 1;
            *(int *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 4) = param_3;
            *(int *)(lVar4 + 0x18) = param_3;
          } while ((uint)lVar9 < (uint)param_2[1]);
        }
        uVar6 = _LC44;
        puVar7 = (undefined8 *)(param_1 + 0x70);
        do {
          puVar8 = puVar7 + 2;
          free((void *)*puVar7);
          *puVar7 = 0;
          puVar7[-1] = uVar6;
          puVar7 = puVar8;
        } while ((undefined8 *)(param_1 + 0x470) != puVar8);
        *(undefined4 *)(param_1 + 0x60) = 0;
        uVar6 = ParseDescriptorSets_constprop_0(param_1);
        return uVar6;
      }
      piVar5 = piVar5 + 4;
    } while (piVar5 != (int *)(param_1 + 0x468));
    return 0;
  }
  return 5;
}



undefined8 spvReflectChangeInputVariableLocation(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(uint *)(param_1 + 0x468) != 0) {
      plVar2 = *(long **)(param_1 + 0x470);
      plVar1 = plVar2 + *(uint *)(param_1 + 0x468);
      do {
        if (*plVar2 == param_2) {
          if (*(int *)(*(long *)(param_1 + 0x4b8) + 0x18) - 1U < *(uint *)(param_2 + 0x170)) {
            return 4;
          }
          *(undefined4 *)
           (*(long *)(*(long *)(param_1 + 0x4b8) + 0x10) + (ulong)*(uint *)(param_2 + 0x170) * 4) =
               param_3;
          *(undefined4 *)(param_2 + 0x10) = param_3;
          return 0;
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar1);
    }
    return 8;
  }
  return 5;
}



undefined8 spvReflectChangeOutputVariableLocation(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(uint *)(param_1 + 0x478) != 0) {
      plVar2 = *(long **)(param_1 + 0x480);
      plVar1 = plVar2 + *(uint *)(param_1 + 0x478);
      do {
        if (*plVar2 == param_2) {
          if (*(int *)(*(long *)(param_1 + 0x4b8) + 0x18) - 1U < *(uint *)(param_2 + 0x170)) {
            return 4;
          }
          *(undefined4 *)
           (*(long *)(*(long *)(param_1 + 0x4b8) + 0x10) + (ulong)*(uint *)(param_2 + 0x170) * 4) =
               param_3;
          *(undefined4 *)(param_2 + 0x10) = param_3;
          return 0;
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar1);
    }
    return 8;
  }
  return 5;
}



char * spvReflectSourceLanguage(undefined4 param_1)

{
  switch(param_1) {
  default:
    return "Unknown";
  case 1:
    return "ESSL";
  case 2:
    return "GLSL";
  case 3:
    return "OpenCL_C";
  case 4:
    return "OpenCL_CPP";
  case 5:
    return "HLSL";
  case 6:
    return "CPP_for_OpenCL";
  case 7:
    return "SYCL";
  case 8:
    return "Hero C";
  case 9:
    return "NZSL";
  }
}



undefined8 spvReflectBlockVariableTypeName(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x158) + 8);
  }
  return 0;
}



void ParseDescriptorBlockVariable_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void CreateShaderModule_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00109af4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00109afd(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



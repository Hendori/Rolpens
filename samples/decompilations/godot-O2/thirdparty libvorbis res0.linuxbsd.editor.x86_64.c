
ulong local_book_besterror(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  iVar7 = *(int *)(param_1 + 10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(param_1 + 0xb);
  iVar15 = *(int *)((long)param_1 + 0x54);
  local_88 = (undefined1  [16])0x0;
  pcVar3 = *(char **)(param_1[3] + 0x10);
  local_78 = (undefined1  [16])0x0;
  iVar14 = iVar7 >> 1;
  iVar5 = (int)*param_1;
  if (iVar2 == 1) {
    if (0 < iVar5) {
      lVar13 = (long)(int)(iVar5 - 1U);
      uVar11 = 0;
      do {
        iVar6 = *(int *)(param_2 + lVar13 * 4);
        iVar12 = iVar6 - iVar15;
        if (iVar12 < iVar14) {
          iVar12 = (iVar14 - iVar12) * 2 + -1;
        }
        else {
          iVar12 = (iVar12 - iVar14) * 2;
        }
        uVar10 = (int)uVar11 * iVar7;
        uVar11 = (ulong)uVar10;
        if (-1 < iVar12) {
          uVar11 = (ulong)(uVar10 + iVar7 + -1);
          if (iVar12 < iVar7) {
            uVar11 = (ulong)(uVar10 + iVar12);
          }
        }
        *(int *)(local_88 + lVar13 * 4) = iVar6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != ((long)iVar5 + -2) - (ulong)(iVar5 - 1U));
      goto LAB_001000ff;
    }
LAB_00100145:
    uVar11 = 0;
    if ('\0' < *pcVar3) goto LAB_00100120;
LAB_00100150:
    uVar4 = param_1[1];
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    iVar15 = (iVar7 + -1) * iVar2 + iVar15;
    if (0 < (long)uVar4) {
      uVar9 = 0;
      iVar7 = 0;
      iVar14 = -1;
      if ('\0' < *pcVar3) goto LAB_001001ed;
LAB_00100190:
      iVar6 = iVar14;
      if (iVar7 < iVar15) goto LAB_00100250;
      do {
        puVar8 = (undefined4 *)local_68;
        iVar12 = 0;
        do {
          *puVar8 = 0;
          iVar7 = puVar8[1];
          puVar8 = puVar8 + 1;
          iVar12 = iVar12 + 1;
          iVar14 = iVar6;
        } while (iVar15 <= iVar7);
        while( true ) {
          iVar6 = iVar2 + iVar7;
          if (iVar7 < 0) {
            iVar6 = *(int *)(local_68 + (long)iVar12 * 4);
          }
          uVar9 = uVar9 + 1;
          *(int *)(local_68 + (long)iVar12 * 4) = -iVar6;
          if (uVar4 == uVar9) goto LAB_00100260;
          iVar7 = local_68._0_4_;
          if (pcVar3[uVar9] < '\x01') goto LAB_00100190;
LAB_001001ed:
          if (iVar5 < 1) {
            iVar6 = 0;
          }
          else {
            lVar13 = 0;
            iVar6 = 0;
            do {
              iVar12 = *(int *)(local_68 + lVar13 * 4) - *(int *)(param_2 + lVar13 * 4);
              lVar13 = lVar13 + 1;
              iVar6 = iVar6 + iVar12 * iVar12;
            } while ((int)lVar13 < iVar5);
          }
          if ((iVar14 != -1) && (iVar14 <= iVar6)) goto LAB_00100190;
          uVar11 = uVar9 & 0xffffffff;
          local_88 = local_68;
          local_78 = local_58;
          if (iVar15 <= iVar7) break;
LAB_00100250:
          iVar12 = 0;
          iVar14 = iVar6;
        }
      } while( true );
    }
LAB_00100260:
    if (((int)uVar11 < 0) || (iVar5 < 1)) goto LAB_00100120;
  }
  else {
    if (iVar5 < 1) goto LAB_00100145;
    lVar13 = (long)(int)(iVar5 - 1U);
    uVar11 = 0;
    do {
      iVar6 = ((*(int *)(param_2 + lVar13 * 4) + (iVar2 >> 1)) - iVar15) / iVar2;
      if (iVar6 < iVar14) {
        iVar12 = (iVar14 - iVar6) * 2 + -1;
      }
      else {
        iVar12 = (iVar6 - iVar14) * 2;
      }
      uVar10 = (int)uVar11 * iVar7;
      uVar11 = (ulong)uVar10;
      if (-1 < iVar12) {
        uVar11 = (ulong)(uVar10 + iVar7 + -1);
        if (iVar12 < iVar7) {
          uVar11 = (ulong)(uVar10 + iVar12);
        }
      }
      *(int *)(local_88 + lVar13 * 4) = iVar6 * iVar2 + iVar15;
      lVar13 = lVar13 + -1;
    } while (lVar13 != ((long)iVar5 + -2) - (ulong)(iVar5 - 1U));
LAB_001000ff:
    if (pcVar3[(int)uVar11] < '\x01') goto LAB_00100150;
    if ((int)uVar11 < 0) goto LAB_00100120;
  }
  lVar13 = 0;
  do {
    piVar1 = (int *)(param_2 + lVar13 * 4);
    *piVar1 = *piVar1 - *(int *)(local_88 + lVar13 * 4);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < iVar5);
LAB_00100120:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



void res0_free_info(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}



void res0_pack(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  oggpack_write(param_2,*param_1,0x18);
  oggpack_write(param_2,param_1[1],0x18);
  oggpack_write(param_2,(long)(*(int *)(param_1 + 2) + -1),0x18);
  oggpack_write(param_2,(long)(*(int *)((long)param_1 + 0x14) + -1),6);
  oggpack_write(param_2,(long)*(int *)((long)param_1 + 0x1c),8);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar7 = 0;
    iVar6 = 0;
    do {
      iVar3 = ov_ilog(*(undefined4 *)((long)param_1 + lVar7 * 4 + 0x20));
      lVar5 = (long)*(int *)((long)param_1 + lVar7 * 4 + 0x20);
      if (iVar3 < 4) {
        oggpack_write(param_2,lVar5,4);
      }
      else {
        oggpack_write(param_2,lVar5,3);
        oggpack_write(param_2,1,1);
        oggpack_write(param_2,(long)(*(int *)((long)param_1 + lVar7 * 4 + 0x20) >> 3),5);
      }
      uVar4 = *(uint *)((long)param_1 + lVar7 * 4 + 0x20);
      if (uVar4 != 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + (uVar4 & 1);
          uVar4 = uVar4 >> 1;
        } while (uVar4 != 0);
        iVar6 = iVar6 + iVar3;
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)((long)param_1 + 0x14));
    if (0 < iVar6) {
      puVar2 = (undefined8 *)((long)param_1 + (long)iVar6 * 4);
      do {
        piVar1 = (int *)(param_1 + 0x24);
        param_1 = (undefined8 *)((long)param_1 + 4);
        oggpack_write(param_2,(long)*piVar1,8);
      } while (puVar2 != param_1);
    }
  }
  return;
}



undefined8 * res0_unpack(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *__ptr;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  __ptr = (undefined8 *)calloc(1,0xb20);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar8 = oggpack_read(param_2,0x18);
  *__ptr = uVar8;
  uVar8 = oggpack_read(param_2,0x18);
  __ptr[1] = uVar8;
  iVar5 = oggpack_read(param_2,0x18);
  *(int *)(__ptr + 2) = iVar5 + 1;
  iVar5 = oggpack_read(param_2,6);
  *(int *)((long)__ptr + 0x14) = iVar5 + 1;
  iVar5 = oggpack_read(param_2,8);
  *(int *)((long)__ptr + 0x1c) = iVar5;
  if (-1 < iVar5) {
    if (*(int *)((long)__ptr + 0x14) < 1) {
      lVar10 = (long)iVar5;
      if (*(int *)(lVar2 + 0x20) <= iVar5) goto LAB_001005e0;
    }
    else {
      lVar10 = 0;
      iVar5 = 0;
      do {
        uVar6 = oggpack_read(param_2,3);
        iVar7 = oggpack_read(param_2,1);
        if (iVar7 < 0) goto LAB_001005e0;
        if (iVar7 != 0) {
          iVar7 = oggpack_read(param_2,5);
          if (iVar7 < 0) goto LAB_001005e0;
          uVar6 = iVar7 << 3 | uVar6;
        }
        *(uint *)((long)__ptr + lVar10 * 4 + 0x20) = uVar6;
        if (uVar6 != 0) {
          iVar7 = 0;
          do {
            iVar7 = iVar7 + (uVar6 & 1);
            uVar6 = uVar6 >> 1;
          } while (uVar6 != 0);
          iVar5 = iVar5 + iVar7;
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)((long)__ptr + 0x14));
      if (iVar5 < 1) {
        lVar10 = (long)*(int *)((long)__ptr + 0x1c);
        if (*(int *)(lVar2 + 0x20) <= *(int *)((long)__ptr + 0x1c)) goto LAB_001005e0;
      }
      else {
        puVar1 = (undefined8 *)((long)__ptr + (long)iVar5 * 4);
        puVar11 = __ptr;
        do {
          iVar5 = oggpack_read(param_2,8);
          if (iVar5 < 0) goto LAB_001005e0;
          *(int *)(puVar11 + 0x24) = iVar5;
          puVar11 = (undefined8 *)((long)puVar11 + 4);
        } while (puVar11 != puVar1);
        lVar10 = (long)*(int *)((long)__ptr + 0x1c);
        puVar11 = __ptr;
        if (*(int *)(lVar2 + 0x20) <= *(int *)((long)__ptr + 0x1c)) goto LAB_001005e0;
        do {
          if ((*(int *)(lVar2 + 0x20) <= *(int *)(puVar11 + 0x24)) ||
             (*(int *)(*(long *)(lVar2 + 0xb28 + (long)*(int *)(puVar11 + 0x24) * 8) + 0x18) == 0))
          goto LAB_001005e0;
          puVar11 = (undefined8 *)((long)puVar11 + 4);
        } while (puVar11 != puVar1);
      }
    }
    puVar3 = *(ulong **)(lVar2 + 0xb28 + lVar10 * 8);
    uVar4 = *puVar3;
    uVar9 = uVar4 & 0xffffffff;
    if (0 < (int)uVar4) {
      for (iVar5 = *(int *)((long)__ptr + 0x14); iVar5 <= (int)puVar3[1];
          iVar5 = iVar5 * *(int *)((long)__ptr + 0x14)) {
        uVar6 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar6;
        if (uVar6 == 0) {
          *(int *)(__ptr + 3) = iVar5;
          return __ptr;
        }
      }
    }
  }
LAB_001005e0:
  free(__ptr);
  return (undefined8 *)0x0;
}



long * res0_look(long param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  void *pvVar8;
  size_t sVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long local_60;
  int local_58;
  
  plVar6 = (long *)calloc(1,0x50);
  iVar4 = *(int *)(param_2 + 0x14);
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x30);
  iVar13 = *(int *)(param_2 + 0x1c);
  *plVar6 = param_2;
  *(int *)(plVar6 + 1) = iVar4;
  lVar15 = *(long *)(lVar16 + 0x1328);
  puVar7 = (ulong *)((long)iVar13 * 0x60 + lVar15);
  uVar3 = *puVar7;
  plVar6[2] = lVar15;
  plVar6[3] = (long)puVar7;
  pvVar8 = calloc((long)iVar4,8);
  plVar6[4] = (long)pvVar8;
  if (iVar4 < 1) {
    local_60._0_4_ = 0;
  }
  else {
    local_60._0_4_ = 0;
    lVar15 = 0;
    iVar13 = 0;
LAB_00100791:
    do {
      iVar4 = ov_ilog(*(undefined4 *)(param_2 + 0x20 + lVar15 * 4));
      if (iVar4 != 0) {
        if ((int)local_60 < iVar4) {
          local_60._0_4_ = iVar4;
        }
        lVar11 = plVar6[4];
        pvVar8 = calloc((long)iVar4,8);
        *(void **)(lVar11 + lVar15 * 8) = pvVar8;
        if (0 < iVar4) {
          uVar2 = *(uint *)(param_2 + 0x20 + lVar15 * 4);
          sVar9 = 0;
          do {
            if ((uVar2 >> ((uint)sVar9 & 0x1f) & 1) != 0) {
              lVar11 = (long)iVar13;
              iVar13 = iVar13 + 1;
              *(long *)((long)pvVar8 + sVar9 * 8) =
                   (long)*(int *)(param_2 + 0x120 + lVar11 * 4) * 0x60 + *(long *)(lVar16 + 0x1328);
            }
            sVar9 = sVar9 + 1;
          } while ((long)iVar4 != sVar9);
          iVar4 = (int)plVar6[1];
          lVar15 = lVar15 + 1;
          if (iVar4 <= (int)lVar15) break;
          goto LAB_00100791;
        }
      }
      iVar4 = (int)plVar6[1];
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < iVar4);
  }
  local_58 = (int)uVar3;
  *(undefined4 *)(plVar6 + 5) = 1;
  iVar13 = 1;
  iVar5 = 0;
  if (local_58 < 1) {
    *(int *)((long)plVar6 + 0xc) = (int)local_60;
    pvVar8 = malloc(8);
    local_60 = 1;
    plVar6[6] = (long)pvVar8;
  }
  else {
    iVar13 = 1;
    if (((uVar3 & 1) == 0) || (iVar5 = 1, iVar13 = iVar4, local_58 != 1)) {
      do {
        iVar5 = iVar5 + 2;
        iVar13 = iVar13 * iVar4 * iVar4;
      } while (local_58 != iVar5);
    }
    *(int *)(plVar6 + 5) = iVar13;
    *(int *)((long)plVar6 + 0xc) = (int)local_60;
    local_60 = (long)iVar13;
    pvVar8 = malloc(local_60 * 8);
    plVar6[6] = (long)pvVar8;
    if (iVar13 < 1) {
      return plVar6;
    }
  }
  lVar16 = 0;
  do {
    puVar10 = (undefined4 *)malloc((long)local_58 << 2);
    *(undefined4 **)((long)pvVar8 + lVar16 * 8) = puVar10;
    puVar1 = puVar10 + (ulong)(local_58 - 1) + 1;
    lVar15 = (long)(iVar13 / iVar4);
    lVar11 = lVar16;
    if (0 < local_58) {
      do {
        puVar14 = puVar10 + 1;
        lVar12 = lVar11 % lVar15;
        *puVar10 = (int)(lVar11 / lVar15);
        lVar15 = lVar15 / (long)iVar4;
        puVar10 = puVar14;
        lVar11 = lVar12;
      } while (puVar14 != puVar1);
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != local_60);
  return plVar6;
}



long res1_class(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *__s;
  int *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  double dVar19;
  
  if (param_5 < 1) {
    return 0;
  }
  lVar8 = 0;
  iVar12 = 0;
  do {
    if (*(int *)(param_4 + lVar8 * 4) != 0) {
      lVar15 = (long)iVar12;
      iVar12 = iVar12 + 1;
      *(undefined8 *)(param_3 + lVar15 * 8) = *(undefined8 *)(param_3 + lVar8 * 8);
    }
    lVar8 = lVar8 + 1;
  } while (param_5 != lVar8);
  lVar8 = 0;
  if (iVar12 != 0) {
    piVar5 = (int *)*param_2;
    lVar15 = (long)iVar12;
    lVar16 = 0;
    iVar12 = piVar5[5];
    iVar2 = piVar5[4];
    iVar6 = (int)*(undefined8 *)(piVar5 + 2) - *piVar5;
    iVar7 = iVar6 / iVar2;
    lVar8 = _vorbis_block_alloc(param_1,lVar15 * 8,(long)iVar6 % (long)iVar2 & 0xffffffff);
    dVar19 = _LC1 / (double)iVar2;
    if (0 < lVar15) {
      do {
        __s = (void *)_vorbis_block_alloc(param_1);
        *(void **)(lVar8 + lVar16 * 8) = __s;
        lVar16 = lVar16 + 1;
        memset(__s,0,(long)iVar7 << 3);
      } while (lVar16 != lVar15);
    }
    if (0 < iVar7) {
      lVar16 = 0;
      iVar6 = 0;
      do {
        iVar3 = *piVar5;
        if (0 < lVar15) {
          lVar17 = 0;
          do {
            fVar18 = 0.0;
            iVar11 = 0;
            if (0 < iVar2) {
              lVar10 = *(long *)(param_3 + lVar17 * 8);
              iVar14 = 0;
              iVar11 = 0;
              piVar9 = (int *)(lVar10 + (long)(iVar3 + iVar6) * 4);
              do {
                iVar4 = *piVar9;
                iVar13 = -iVar4;
                if (0 < iVar4) {
                  iVar13 = iVar4;
                }
                if (iVar11 < iVar13) {
                  iVar11 = iVar13;
                }
                piVar9 = piVar9 + 1;
                iVar14 = iVar14 + iVar13;
              } while ((int *)(lVar10 + ((long)(iVar3 + iVar6) + (long)iVar2) * 4) != piVar9);
              fVar18 = (float)iVar14;
            }
            lVar10 = 0;
            if (1 < iVar12) {
              do {
                if ((iVar11 <= piVar5[lVar10 + 0x248]) &&
                   ((piVar5[lVar10 + 0x288] < 0 ||
                    ((int)(fVar18 * (float)dVar19) < piVar5[lVar10 + 0x288])))) break;
                lVar10 = lVar10 + 1;
              } while (lVar10 != (long)iVar12 + -1);
            }
            lVar1 = lVar17 * 8;
            lVar17 = lVar17 + 1;
            *(long *)(*(long *)(lVar8 + lVar1) + lVar16) = lVar10;
          } while (lVar17 != lVar15);
        }
        iVar6 = iVar6 + iVar2;
        lVar16 = lVar16 + 8;
      } while ((long)iVar7 * 8 != lVar16);
    }
    param_2[9] = param_2[9] + 1;
  }
  return lVar8;
}



undefined8 *
res2_class(undefined8 param_1,undefined8 *param_2,long *param_3,int *param_4,int param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  void *__s;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  if (param_5 < 1) {
    return (undefined8 *)0x0;
  }
  lVar15 = (long)param_5;
  piVar1 = param_4 + lVar15;
  iVar11 = 0;
  do {
    iVar11 = (iVar11 + 1) - (uint)(*param_4 == 0);
    param_4 = param_4 + 1;
  } while (param_4 != piVar1);
  puVar8 = (undefined8 *)0x0;
  if (iVar11 != 0) {
    plVar5 = (long *)*param_2;
    iVar11 = *(int *)((long)plVar5 + 0x14);
    iVar3 = (int)plVar5[2];
    iVar6 = (int)plVar5[1] - (int)*plVar5;
    iVar7 = iVar6 / iVar3;
    puVar8 = (undefined8 *)_vorbis_block_alloc(param_1,8,(long)iVar6 % (long)iVar3 & 0xffffffff);
    __s = (void *)_vorbis_block_alloc(param_1);
    *puVar8 = __s;
    memset(__s,0,(long)iVar7 * 8);
    lVar9 = *plVar5 / lVar15;
    if (0 < iVar7) {
      plVar2 = (long *)*puVar8 + iVar7;
      lVar13 = (long)iVar11 + -1;
      plVar14 = (long *)*puVar8;
      do {
        while( true ) {
          iVar6 = 0;
          iVar7 = 0;
          if (0 < iVar3) {
            iVar6 = 0;
            lVar16 = 0;
            iVar7 = 0;
            do {
              iVar4 = *(int *)(*param_3 + lVar9 * 4);
              iVar12 = -iVar4;
              if (0 < iVar4) {
                iVar12 = iVar4;
              }
              if (iVar7 < iVar12) {
                iVar7 = iVar12;
              }
              if (lVar15 != 1) {
                plVar10 = param_3 + 1;
                do {
                  iVar4 = *(int *)(*plVar10 + lVar9 * 4);
                  iVar12 = -iVar4;
                  if (0 < iVar4) {
                    iVar12 = iVar4;
                  }
                  if (iVar6 < iVar12) {
                    iVar6 = iVar12;
                  }
                  plVar10 = plVar10 + 1;
                } while (plVar10 != param_3 + lVar15);
              }
              lVar16 = lVar16 + lVar15;
              lVar9 = lVar9 + 1;
            } while (lVar16 < iVar3);
          }
          if (iVar11 < 2) break;
          lVar16 = 0;
          do {
            if ((iVar7 <= *(int *)((long)plVar5 + lVar16 * 4 + 0x920)) &&
               (iVar6 <= *(int *)((long)plVar5 + lVar16 * 4 + 0xa20))) {
              *plVar14 = lVar16;
              goto joined_r0x00100df4;
            }
            lVar16 = lVar16 + 1;
          } while (lVar13 != lVar16);
          *plVar14 = lVar13;
joined_r0x00100df4:
          plVar14 = plVar14 + 1;
          if (plVar14 == plVar2) goto LAB_00100dcf;
        }
        plVar10 = plVar14 + 1;
        *plVar14 = 0;
        plVar14 = plVar10;
      } while (plVar10 != plVar2);
    }
LAB_00100dcf:
    param_2[9] = param_2[9] + 1;
  }
  return puVar8;
}



undefined8 res0_inverse(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (0 < param_5) {
    lVar1 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(param_4 + lVar1 * 4) != 0) {
        lVar4 = (long)iVar3;
        iVar3 = iVar3 + 1;
        *(undefined8 *)(param_3 + lVar4 * 8) = *(undefined8 *)(param_3 + lVar1 * 8);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != param_5);
    if (iVar3 != 0) {
      uVar2 = _01inverse(param_1,param_2,param_3,iVar3,&vorbis_book_decodevs_add);
      return uVar2;
    }
  }
  return 0;
}



undefined8 res1_inverse(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (0 < param_5) {
    lVar1 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(param_4 + lVar1 * 4) != 0) {
        lVar4 = (long)iVar3;
        iVar3 = iVar3 + 1;
        *(undefined8 *)(param_3 + lVar4 * 8) = *(undefined8 *)(param_3 + lVar1 * 8);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != param_5);
    if (iVar3 != 0) {
      uVar2 = _01inverse(param_1,param_2,param_3,iVar3,&vorbis_book_decodev_add);
      return uVar2;
    }
  }
  return 0;
}



undefined8
res2_inverse(long param_1,undefined8 *param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long local_48;
  
  plVar2 = (long *)*param_2;
  iVar3 = *(int *)(param_1 + 0x48) * param_5 >> 1;
  if (plVar2[1] < (long)iVar3) {
    iVar3 = (int)plVar2[1];
  }
  iVar3 = iVar3 - (int)*plVar2;
  if (0 < iVar3) {
    iVar1 = (int)plVar2[2];
    iVar3 = iVar3 / iVar1;
    iVar7 = (int)*(undefined8 *)param_2[3];
    iVar4 = iVar3 + -1 + iVar7;
    plVar5 = (long *)_vorbis_block_alloc(param_1,(long)(iVar4 / iVar7) * 8,
                                         (long)iVar4 % (long)iVar7 & 0xffffffff);
    lVar8 = (long)param_5;
    lVar11 = 0;
    if (lVar8 < 1) {
LAB_00101419:
      if ((lVar8 != lVar11) && (0 < *(int *)((long)param_2 + 0xc))) {
        local_48 = 0;
        lVar11 = (long)iVar3;
        do {
          if (0 < iVar3) {
            do {
              lVar8 = 0;
              plVar10 = plVar5;
              do {
                if (local_48 == 0) {
                  iVar3 = vorbis_book_decode(param_2[3],param_1 + 8);
                  if (iVar3 == -1) {
                    return 0;
                  }
                  if ((int)plVar2[3] <= iVar3) {
                    return 0;
                  }
                  lVar9 = *(long *)(param_2[6] + (long)iVar3 * 8);
                  *plVar10 = lVar9;
                  if (lVar9 == 0) {
                    return 0;
                  }
                }
                if ((lVar8 < lVar11) && (lVar9 = 0, 0 < (long)iVar7)) {
                  do {
                    lVar6 = (long)*(int *)(*plVar10 + lVar9 * 4);
                    if (((1 << ((byte)local_48 & 0x1f) & *(uint *)((long)plVar2 + lVar6 * 4 + 0x20))
                         != 0) &&
                       ((lVar6 = *(long *)(*(long *)(param_2[4] + lVar6 * 8) + local_48 * 8),
                        lVar6 != 0 &&
                        (lVar6 = vorbis_book_decodevv_add
                                           (lVar6,param_3,iVar1 * lVar8 + *plVar2,param_5,
                                            param_1 + 8,(long)iVar1), lVar6 == -1)))) {
                      return 0;
                    }
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + 1;
                  } while ((lVar9 < iVar7) && (lVar8 < lVar11));
                }
                plVar10 = plVar10 + 1;
              } while (lVar8 < lVar11);
              local_48 = local_48 + 1;
              if (*(int *)((long)param_2 + 0xc) <= local_48) {
                return 0;
              }
            } while( true );
          }
          local_48 = local_48 + 1;
        } while (local_48 < *(int *)((long)param_2 + 0xc));
      }
    }
    else {
      do {
        if (*(int *)(param_4 + lVar11 * 4) != 0) goto LAB_00101419;
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar8);
    }
  }
  return 0;
}



void res0_free_look(void *param_1)

{
  long lVar1;
  void *__ptr;
  void *__ptr_00;
  long lVar2;
  
  if (param_1 != (void *)0x0) {
    __ptr_00 = *(void **)((long)param_1 + 0x20);
    if (0 < *(int *)((long)param_1 + 8)) {
      lVar2 = 0;
      do {
        __ptr = *(void **)((long)__ptr_00 + lVar2 * 8);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          __ptr_00 = *(void **)((long)param_1 + 0x20);
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)((long)param_1 + 8));
    }
    lVar2 = 0;
    free(__ptr_00);
    if (0 < *(int *)((long)param_1 + 0x28)) {
      do {
        lVar1 = lVar2 * 8;
        lVar2 = lVar2 + 1;
        free(*(void **)(*(long *)((long)param_1 + 0x30) + lVar1));
      } while ((int)lVar2 < *(int *)((long)param_1 + 0x28));
    }
    free(*(void **)((long)param_1 + 0x30));
    free(param_1);
    return;
  }
  return;
}



undefined8
res2_forward(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
            int param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined4 *local_48;
  long local_40;
  
  lVar11 = (long)param_6;
  iVar2 = *(int *)(param_2 + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = (long)(iVar2 / 2);
  local_48 = (undefined4 *)_vorbis_block_alloc(param_2,lVar7 * lVar11 * 4);
  if (0 < lVar11) {
    lVar10 = 0;
    lVar8 = 0;
    puVar9 = local_48;
    do {
      puVar4 = *(undefined4 **)(param_4 + lVar8 * 8);
      lVar10 = (lVar10 + 1) - (ulong)(*(int *)(param_5 + lVar8 * 4) == 0);
      if (1 < iVar2) {
        puVar1 = puVar4 + lVar7;
        puVar6 = puVar9;
        do {
          uVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar6 = uVar3;
          puVar6 = puVar6 + lVar11;
        } while (puVar4 != puVar1);
      }
      lVar8 = lVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar11 != lVar8);
    if (lVar10 != 0) {
      uVar5 = _01forward_constprop_0(param_1,param_3,&local_48,1,param_7);
      goto LAB_00101b8c;
    }
  }
  uVar5 = 0;
LAB_00101b8c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
res1_forward(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            int param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (0 < param_6) {
    lVar1 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(param_5 + lVar1 * 4) != 0) {
        lVar4 = (long)iVar3;
        iVar3 = iVar3 + 1;
        *(undefined8 *)(param_4 + lVar4 * 8) = *(undefined8 *)(param_4 + lVar1 * 8);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != param_6);
    if (iVar3 != 0) {
      uVar2 = _01forward_constprop_0(param_1,param_3,param_4,iVar3,param_7);
      return uVar2;
    }
  }
  return 0;
}




undefined4 utrie_defaultGetFoldingOffset_76_godot(undefined4 param_1)

{
  return param_1;
}



/* enumSameValue(void const*, unsigned int) */

uint enumSameValue(void *param_1,uint param_2)

{
  return param_2;
}



/* utrie_getDataBlock(UNewTrie*, int) */

ulong utrie_getDataBlock(UNewTrie *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar5 = (ulong)*(int *)(param_1 + (long)(param_2 >> 5) * 4);
  if (*(int *)(param_1 + (long)(param_2 >> 5) * 4) < 1) {
    uVar2 = *(uint *)(param_1 + 0x22094);
    if ((*(int *)(param_1 + 0x22090) < (int)(uVar2 + 0x20)) ||
       (*(uint *)(param_1 + 0x22094) = uVar2 + 0x20, (int)uVar2 < 0)) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(param_1 + 0x22080);
    *(uint *)(param_1 + (long)(param_2 >> 5) * 4) = uVar2;
    puVar1 = (undefined8 *)(lVar3 + (long)(int)uVar2 * 4);
    puVar6 = (undefined8 *)(lVar3 + uVar5 * -4);
    uVar5 = (ulong)uVar2;
    uVar4 = puVar6[1];
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
    uVar4 = puVar6[3];
    puVar1[2] = puVar6[2];
    puVar1[3] = uVar4;
    uVar4 = puVar6[5];
    puVar1[4] = puVar6[4];
    puVar1[5] = uVar4;
    uVar4 = puVar6[7];
    puVar1[6] = puVar6[6];
    puVar1[7] = uVar4;
    uVar4 = puVar6[9];
    puVar1[8] = puVar6[8];
    puVar1[9] = uVar4;
    uVar4 = puVar6[0xb];
    puVar1[10] = puVar6[10];
    puVar1[0xb] = uVar4;
    uVar4 = puVar6[0xd];
    puVar1[0xc] = puVar6[0xc];
    puVar1[0xd] = uVar4;
    uVar4 = puVar6[0xf];
    puVar1[0xe] = puVar6[0xe];
    puVar1[0xf] = uVar4;
  }
  return uVar5;
}



/* utrie_compact(UNewTrie*, signed char, UErrorCode*) [clone .part.0] */

void utrie_compact(int *param_1,char param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  memset(param_1 + 0x8827,0xff,0x22084);
  iVar12 = param_1[0x8823];
  if (0 < iVar12) {
    piVar8 = param_1;
    do {
      iVar11 = *piVar8;
      iVar10 = -iVar11;
      if (0 < iVar11) {
        iVar10 = iVar11;
      }
      piVar8 = piVar8 + 1;
      param_1[(long)(iVar10 >> 5) + 0x8827] = 0;
    } while (piVar8 != param_1 + iVar12);
  }
  cVar2 = *(char *)((long)param_1 + 0x2209a);
  param_1[0x8827] = 0;
  if (param_1[0x8825] < 0x21) {
    iVar11 = 0x20;
  }
  else {
    iVar11 = 0x20;
    iVar12 = 0x20;
    do {
      lVar14 = (long)(iVar12 >> 5);
      if (param_1[lVar14 + 0x8827] < 0) {
LAB_001002d0:
        iVar12 = iVar12 + 0x20;
      }
      else {
        if (iVar12 < (int)((-(uint)(cVar2 == '\0') & 0xffffff00) + 0x120)) {
LAB_00100240:
          if (iVar12 <= iVar11) {
            param_1[lVar14 + 0x8827] = iVar12;
            iVar12 = iVar11 + 0x20;
            iVar11 = iVar12;
            goto LAB_00100258;
          }
          lVar13 = *(long *)(param_1 + 0x8820);
        }
        else {
          lVar13 = *(long *)(param_1 + 0x8820);
          lVar1 = lVar13 + (long)iVar12 * 4;
          if (-1 < iVar11 + -0x20) {
            iVar10 = 0;
            lVar7 = lVar13;
            do {
              lVar4 = 0;
              while (*(int *)(lVar7 + lVar4) == *(int *)(lVar1 + lVar4)) {
                lVar4 = lVar4 + 4;
                if (lVar4 == 0x80) {
                  if (iVar10 < 0) goto LAB_001001fd;
                  param_1[lVar14 + 0x8827] = iVar10;
                  goto LAB_001002d0;
                }
              }
              iVar10 = iVar10 + (-(uint)(param_2 == '\0') & 0x1c) + 4;
              lVar7 = lVar7 + (ulong)(-(uint)(param_2 == '\0') & 0x1c) * 4 + 0x10;
            } while (iVar10 <= iVar11 + -0x20);
LAB_001001fd:
            if (param_2 != '\0') goto LAB_00100204;
            goto LAB_00100240;
          }
          if (param_2 != '\0') {
LAB_00100204:
            uVar15 = 0x1c;
            lVar7 = lVar13 + -0x70 + (long)iVar11 * 4;
            do {
              iVar10 = (int)uVar15;
              uVar5 = 0;
              while (*(int *)(lVar7 + uVar5 * 4) == *(int *)(lVar1 + uVar5 * 4)) {
                uVar5 = uVar5 + 1;
                if (uVar5 == uVar15) {
                  param_1[lVar14 + 0x8827] = iVar11 - iVar10;
                  lVar14 = (long)(iVar12 + iVar10);
                  puVar6 = (undefined4 *)(lVar13 + lVar14 * 4);
                  do {
                    puVar6[iVar11 - lVar14] = *puVar6;
                    puVar6 = puVar6 + 1;
                  } while (puVar6 != (undefined4 *)
                                     (lVar13 + 4 + ((ulong)(0x1f - iVar10) + lVar14) * 4));
                  iVar12 = iVar12 + iVar10 + 1 + (0x1f - iVar10);
                  iVar11 = iVar11 + 1 + (0x1f - iVar10);
                  goto LAB_00100258;
                }
              }
              lVar7 = lVar7 + 0x10;
              uVar15 = (ulong)(iVar10 - 4U);
            } while (iVar10 - 4U != 0);
            goto LAB_00100240;
          }
        }
        param_1[lVar14 + 0x8827] = iVar11;
        lVar14 = (long)iVar12 * 4;
        puVar6 = (undefined4 *)(lVar13 + lVar14);
        do {
          puVar6[(long)iVar11 - (long)iVar12] = *puVar6;
          puVar6 = puVar6 + 1;
        } while (puVar6 != (undefined4 *)(lVar13 + 0x80 + lVar14));
        iVar12 = iVar12 + 0x20;
        iVar11 = iVar11 + 0x20;
      }
LAB_00100258:
    } while (iVar12 < param_1[0x8825]);
    iVar12 = param_1[0x8823];
  }
  piVar8 = param_1;
  if (0 < iVar12) {
    do {
      iVar10 = *piVar8;
      iVar3 = -iVar10;
      if (0 < iVar10) {
        iVar3 = iVar10;
      }
      piVar9 = piVar8 + 1;
      *piVar8 = param_1[(long)(iVar3 >> 5) + 0x8827];
      piVar8 = piVar9;
    } while (param_1 + iVar12 != piVar9);
  }
  param_1[0x8825] = iVar11;
  return;
}



/* defaultGetFoldedValue(UNewTrie*, int, int) */

int defaultGetFoldedValue(UNewTrie *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 + 0x400;
  while (param_1[0x2209b] != (UNewTrie)0x0) {
    param_2 = param_2 + 0x20;
    if (iVar3 <= param_2) {
      return 0;
    }
  }
  do {
    while (0x10ffff < (uint)param_2) {
LAB_00100412:
      param_2 = param_2 + 0x20;
      if (iVar3 <= param_2) {
        return 0;
      }
    }
    iVar1 = *(int *)(param_1 + (long)(param_2 >> 5) * 4);
    iVar2 = -iVar1;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar1 == 0) goto LAB_00100412;
    if (**(int **)(param_1 + 0x22080) !=
        (*(int **)(param_1 + 0x22080))[(int)(iVar2 + (param_2 & 0x1fU))]) {
      return param_3;
    }
    param_2 = param_2 + 1;
    if (iVar3 <= param_2) {
      return 0;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
utrie_open_76_godot(undefined8 *param_1,long param_2,int param_3,undefined4 param_4,
                   undefined4 param_5,char param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *__s;
  
  if (((param_3 < 0x20) || ((param_6 != '\0' && (param_3 < 0x400)))) ||
     ((__s = param_1, param_1 == (undefined8 *)0x0 &&
      (__s = (undefined8 *)uprv_malloc_76_godot(0x44120), __s == (undefined8 *)0x0)))) {
    __s = (undefined8 *)0x0;
  }
  else {
    memset(__s,0,0x44120);
    *(bool *)(__s + 0x4413) = param_1 == (undefined8 *)0x0;
    if (param_2 == 0) {
      param_2 = uprv_malloc_76_godot((long)(param_3 * 4));
      __s[0x4410] = param_2;
      if (param_2 == 0) {
        uprv_free_76_godot(__s);
        return (undefined8 *)0x0;
      }
      *(undefined1 *)((long)__s + 0x22099) = 1;
    }
    else {
      __s[0x4410] = param_2;
    }
    uVar1 = _UNK_00101928;
    lVar2 = 0x20;
    if (param_6 != '\0') {
      lVar2 = 0x120;
      *__s = __LC0;
      __s[1] = uVar1;
      uVar1 = _UNK_00101938;
      __s[2] = __LC1;
      __s[3] = uVar1;
    }
    *(int *)((long)__s + 0x22094) = (int)lVar2;
    do {
      *(undefined4 *)(param_2 + -4 + lVar2 * 4) = param_4;
      lVar2 = lVar2 + -1;
    } while ((int)lVar2 != 0);
    *(int *)(__s + 0x4412) = param_3;
    *(undefined4 *)((long)__s + 0x2208c) = 0x8800;
    *(undefined4 *)(__s + 0x4411) = param_5;
    *(char *)((long)__s + 0x2209a) = param_6;
    *(undefined1 *)((long)__s + 0x2209b) = 0;
  }
  return __s;
}



void * utrie_clone_76_godot(undefined8 param_1,void *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  undefined1 uVar5;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  puVar3 = *(undefined4 **)((long)param_2 + 0x22080);
  if (puVar3 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  if (*(char *)((long)param_2 + 0x2209b) != '\0') {
    return (void *)0x0;
  }
  uVar1 = *(uint *)((long)param_2 + 0x22090);
  uVar4 = param_3;
  if (param_3 != 0) {
    uVar4 = (ulong)param_4;
    uVar5 = 0;
    if ((int)uVar1 <= (int)param_4) goto LAB_001005fe;
  }
  param_3 = uprv_malloc_76_godot((long)(int)(uVar1 * 4),param_2,uVar4);
  if (param_3 == 0) {
    return (void *)0x0;
  }
  puVar3 = *(undefined4 **)((long)param_2 + 0x22080);
  uVar4 = (ulong)uVar1;
  uVar5 = 1;
LAB_001005fe:
  __dest = (void *)utrie_open_76_godot(param_1,param_3,uVar4,*puVar3,
                                       *(undefined4 *)((long)param_2 + 0x22088),
                                       (int)*(char *)((long)param_2 + 0x2209a));
  if (__dest == (void *)0x0) {
    uprv_free_76_godot(param_3);
    return (void *)0x0;
  }
  memcpy(__dest,param_2,0x22080);
  memcpy(*(void **)((long)__dest + 0x22080),*(void **)((long)param_2 + 0x22080),
         (long)*(int *)((long)param_2 + 0x22094) << 2);
  uVar2 = *(undefined4 *)((long)param_2 + 0x22094);
  *(undefined1 *)((long)__dest + 0x22099) = uVar5;
  *(undefined4 *)((long)__dest + 0x22094) = uVar2;
  return __dest;
}



void utrie_close_76_godot(long param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x22099) == '\0') {
    cVar1 = *(char *)(param_1 + 0x22098);
  }
  else {
    uprv_free_76_godot(*(undefined8 *)(param_1 + 0x22080));
    cVar1 = *(char *)(param_1 + 0x22098);
    *(undefined8 *)(param_1 + 0x22080) = 0;
  }
  if (cVar1 == '\0') {
    return;
  }
  uprv_free_76_godot(param_1);
  return;
}



undefined8 utrie_getData_76_godot(long param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x22094);
    return *(undefined8 *)(param_1 + 0x22080);
  }
  return 0;
}



undefined8 utrie_set32_76_godot(UNewTrie *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((param_1 != (UNewTrie *)0x0) && (param_1[0x2209b] == (UNewTrie)0x0)) && (param_2 < 0x110000))
  {
    iVar1 = utrie_getDataBlock(param_1,param_2);
    if (-1 < iVar1) {
      *(undefined4 *)(*(long *)(param_1 + 0x22080) + (long)(int)((param_2 & 0x1f) + iVar1) * 4) =
           param_3;
      return 1;
    }
    return 0;
  }
  return 0;
}



undefined4 utrie_get32_76_godot(long param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(char *)(param_1 + 0x2209b) == '\0')) && (param_2 < 0x110000)) {
    iVar1 = *(int *)(param_1 + (long)((int)param_2 >> 5) * 4);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = iVar1 == 0;
    }
    iVar2 = -iVar1;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    return *(undefined4 *)(*(long *)(param_1 + 0x22080) + (long)(int)(iVar2 + (param_2 & 0x1f)) * 4)
    ;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  return 0;
}



undefined8
utrie_setRange32_76_godot(UNewTrie *param_1,uint param_2,uint param_3,ulong param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  if ((((param_1 == (UNewTrie *)0x0) || (param_1[0x2209b] != (UNewTrie)0x0)) ||
      (0x10ffff < param_2 || 0x110000 < param_3)) ||
     (param_2 != param_3 && (int)param_3 <= (int)param_2)) {
    return 0;
  }
  if (param_2 == param_3) {
    return 1;
  }
  param_4 = param_4 & 0xffffffff;
  piVar5 = *(int **)(param_1 + 0x22080);
  iVar1 = *piVar5;
  uVar11 = param_2 & 0x1f;
  if (uVar11 != 0) {
    iVar3 = utrie_getDataBlock(param_1,param_2);
    if (iVar3 < 0) {
      return 0;
    }
    piVar5 = *(int **)(param_1 + 0x22080);
    param_2 = param_2 + 0x20 & 0xffffffe0;
    piVar6 = piVar5 + (long)iVar3 + (long)(int)uVar11;
    iVar13 = (int)param_4;
    if ((int)param_3 < (int)param_2) {
      if (param_5 != '\0') {
        for (; piVar6 < piVar5 + (long)iVar3 + (ulong)(param_3 & 0x1f); piVar6 = piVar6 + 1) {
          *piVar6 = iVar13;
        }
        return 1;
      }
      for (; piVar6 < piVar5 + (long)iVar3 + (ulong)(param_3 & 0x1f); piVar6 = piVar6 + 1) {
        if (iVar1 == *piVar6) {
          *piVar6 = iVar13;
        }
      }
      return 1;
    }
    if (param_5 == '\0') {
      for (; piVar6 < piVar5 + (long)iVar3 + 0x20; piVar6 = piVar6 + 1) {
        if (iVar1 == *piVar6) {
          *piVar6 = iVar13;
        }
      }
    }
    else {
      for (; piVar6 < piVar5 + (long)iVar3 + 0x20; piVar6 = piVar6 + 1) {
        *piVar6 = iVar13;
      }
    }
  }
  uVar8 = (ulong)(param_3 & 0xffffffe0);
  iVar9 = (int)param_4;
  iVar7 = -(uint)(iVar1 != iVar9);
  iVar3 = iVar9;
  iVar13 = iVar9;
  iVar14 = iVar9;
  iVar10 = iVar9;
  if ((int)param_2 < (int)(param_3 & 0xffffffe0)) {
    do {
      while( true ) {
        lVar12 = (long)((int)param_2 >> 5);
        iVar2 = *(int *)(param_1 + lVar12 * 4);
        iVar10 = (int)param_4;
        if (0 < iVar2) break;
        if ((piVar5[-iVar2] != iVar10) && ((iVar2 == 0 || (param_5 != '\0')))) {
          if (iVar7 < 0) {
            iVar7 = utrie_getDataBlock(param_1,param_2);
            if (iVar7 < 0) {
              return 0;
            }
            iVar10 = (int)param_4;
            piVar5 = *(int **)(param_1 + 0x22080);
            *(int *)(param_1 + lVar12 * 4) = -iVar7;
            piVar4 = piVar5 + iVar7;
            piVar6 = piVar4 + 0x20;
            do {
              *piVar4 = iVar10;
              piVar4[1] = iVar10;
              piVar4[2] = iVar10;
              piVar4[3] = iVar10;
              piVar4 = piVar4 + 4;
            } while (piVar4 != piVar6);
          }
          else {
            *(int *)(param_1 + lVar12 * 4) = -iVar7;
          }
        }
LAB_001008ae:
        iVar10 = (int)param_4;
        param_2 = param_2 + 0x20;
        if ((int)uVar8 <= (int)param_2) goto LAB_00100900;
      }
      piVar4 = piVar5 + iVar2;
      piVar6 = piVar4 + 0x20;
      if (param_5 == '\0') {
        do {
          if (iVar1 == *piVar4) {
            *piVar4 = iVar10;
          }
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar6);
        goto LAB_001008ae;
      }
      do {
        *piVar4 = iVar9;
        piVar4[1] = iVar3;
        piVar4[2] = iVar13;
        piVar4[3] = iVar14;
        piVar4 = piVar4 + 4;
      } while (piVar6 != piVar4);
      param_2 = param_2 + 0x20;
    } while ((int)param_2 < (int)uVar8);
  }
LAB_00100900:
  if ((param_3 & 0x1f) != 0) {
    iVar3 = utrie_getDataBlock(param_1,param_2);
    if (iVar3 < 0) {
      return 0;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x22080) + (long)iVar3 * 4);
    piVar6 = piVar5 + (param_3 & 0x1f);
    if (param_5 == '\0') {
      for (; piVar5 < piVar6; piVar5 = piVar5 + 1) {
        if (iVar1 == *piVar5) {
          *piVar5 = iVar10;
        }
      }
    }
    else {
      for (; piVar5 < piVar6; piVar5 = piVar5 + 1) {
        *piVar5 = iVar10;
      }
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int utrie_serialize_76_godot
              (UNewTrie *param_1,undefined8 *param_2,int param_3,code *param_4,char param_5,
              int *param_6)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  ulong uVar21;
  UNewTrie *pUVar22;
  int iVar23;
  ushort uVar24;
  UNewTrie *pUVar25;
  undefined8 *puVar26;
  int *piVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if (((param_1 == (UNewTrie *)0x0) || (param_3 < 0)) ||
       ((0 < param_3 && (param_2 == (undefined8 *)0x0)))) {
      *param_6 = 1;
    }
    else {
      if (param_4 == (code *)0x0) {
        param_4 = defaultGetFoldedValue;
      }
      if (param_1[0x2209b] != (UNewTrie)0x0) goto LAB_00100bba;
      utrie_compact(param_1,0);
      uVar4 = *(undefined8 *)(param_1 + 0x1b00);
      uVar5 = *(undefined8 *)(param_1 + 0x1b08);
      pUVar25 = param_1 + 0x1b00;
      uVar6 = *(undefined8 *)(param_1 + 0x1b10);
      uVar7 = *(undefined8 *)(param_1 + 0x1b18);
      uVar8 = *(undefined8 *)(param_1 + 0x1b20);
      uVar9 = *(undefined8 *)(param_1 + 0x1b28);
      uVar10 = *(undefined8 *)(param_1 + 0x1b30);
      uVar11 = *(undefined8 *)(param_1 + 0x1b38);
      uVar12 = *(undefined8 *)(param_1 + 0x1b60);
      uVar13 = *(undefined8 *)(param_1 + 0x1b68);
      uVar14 = *(undefined8 *)(param_1 + 0x1b40);
      uVar15 = *(undefined8 *)(param_1 + 0x1b48);
      uVar16 = *(undefined8 *)(param_1 + 0x1b70);
      uVar17 = *(undefined8 *)(param_1 + 0x1b78);
      uVar18 = *(undefined8 *)(param_1 + 0x1b50);
      uVar19 = *(undefined8 *)(param_1 + 7000);
      iVar31 = *(int *)(param_1 + 0x22088);
      if (iVar31 == **(int **)(param_1 + 0x22080)) {
        iVar23 = 0;
LAB_00100d3f:
        do {
          *(int *)pUVar25 = iVar23;
          *(int *)(pUVar25 + 4) = iVar23;
          *(int *)(pUVar25 + 8) = iVar23;
          *(int *)(pUVar25 + 0xc) = iVar23;
          pUVar25 = pUVar25 + 0x10;
        } while (pUVar25 != param_1 + 0x1b80);
        uVar30 = 0x10000;
        iVar31 = 0x800;
        do {
          if (*(int *)(param_1 + (long)((int)uVar30 >> 5) * 4) == 0) {
            uVar30 = uVar30 + 0x20;
          }
          else {
            uVar29 = uVar30 & 0xfffffc00;
            iVar23 = iVar31;
            if (0x800 < iVar31) {
              pUVar25 = param_1 + 0x2080;
              iVar32 = 0x800;
              lVar28 = (long)((int)uVar29 >> 5) + -0x800;
              do {
                pUVar22 = pUVar25 + -0x80;
                while (*(int *)pUVar22 == *(int *)(pUVar22 + lVar28 * 4)) {
                  pUVar22 = pUVar22 + 4;
                  iVar23 = iVar32;
                  if (pUVar22 == pUVar25) goto LAB_00100e08;
                }
                iVar32 = iVar32 + 0x20;
                lVar28 = lVar28 + -0x20;
                pUVar25 = pUVar25 + 0x80;
                iVar23 = iVar31;
              } while (iVar32 < iVar31);
            }
LAB_00100e08:
            iVar32 = (*param_4)(param_1,uVar29,iVar23 + 0x20);
            if (param_1[0x2209b] == (UNewTrie)0x0) {
              uVar24 = (short)((int)uVar30 >> 10) + 0xd7c0;
              uVar30 = uVar24 & 0x1f;
              iVar20 = *(int *)(param_1 + (long)((int)(uint)uVar24 >> 5) * 4);
              iVar3 = -iVar20;
              if (0 < iVar20) {
                iVar3 = iVar20;
              }
              if (iVar32 != *(int *)(*(long *)(param_1 + 0x22080) + (long)(int)(iVar3 + uVar30) * 4)
                 ) {
                iVar20 = utrie_getDataBlock(param_1,(uint)uVar24);
                if (iVar20 < 0) goto LAB_00101059;
                *(int *)(*(long *)(param_1 + 0x22080) + (long)(int)(iVar20 + uVar30) * 4) = iVar32;
                if (iVar31 == iVar23) {
                  memmove(param_1 + (long)iVar31 * 4,param_1 + (long)((int)uVar29 >> 5) * 4,0x80);
                  iVar31 = iVar23 + 0x20;
                }
              }
            }
            else if (iVar32 != 0) goto LAB_00101059;
            uVar30 = uVar29 + 0x400;
          }
        } while ((int)uVar30 < 0x110000);
        iVar23 = 8;
        if (iVar31 < 0x8800) {
          memmove(param_1 + 0x2080,param_1 + 0x2000,(long)(iVar31 * 4 + -0x2000));
          *(undefined8 *)(param_1 + 0x2000) = uVar4;
          *(undefined8 *)(param_1 + 0x2008) = uVar5;
          *(undefined8 *)(param_1 + 0x2010) = uVar6;
          *(undefined8 *)(param_1 + 0x2018) = uVar7;
          *(undefined8 *)(param_1 + 0x2020) = uVar8;
          *(undefined8 *)(param_1 + 0x2028) = uVar9;
          *(undefined8 *)(param_1 + 0x2030) = uVar10;
          *(undefined8 *)(param_1 + 0x2038) = uVar11;
          *(undefined8 *)(param_1 + 0x2040) = uVar14;
          *(undefined8 *)(param_1 + 0x2048) = uVar15;
          *(undefined8 *)(param_1 + 0x2050) = uVar18;
          *(undefined8 *)(param_1 + 0x2058) = uVar19;
          *(undefined8 *)(param_1 + 0x2060) = uVar12;
          *(undefined8 *)(param_1 + 0x2068) = uVar13;
          *(undefined8 *)(param_1 + 0x2070) = uVar16;
          *(undefined8 *)(param_1 + 0x2078) = uVar17;
          iVar23 = *param_6;
          *(int *)(param_1 + 0x2208c) = iVar31 + 0x20;
          if (iVar23 < 1) {
            if (param_1[0x2209b] == (UNewTrie)0x0) {
              utrie_compact(param_1,1);
              iVar31 = *param_6;
              param_1[0x2209b] = (UNewTrie)0x1;
              if (0 < iVar31) goto LAB_00100b70;
            }
            else {
              param_1[0x2209b] = (UNewTrie)0x1;
            }
LAB_00100bba:
            uVar30 = *(uint *)(param_1 + 0x2208c);
            uVar29 = *(uint *)(param_1 + 0x22094);
            iVar31 = uVar30 * 2 + 0x10;
            if (param_5 == '\0') {
              if (0x3ffff < (int)uVar29) {
                *param_6 = 8;
              }
              iVar31 = iVar31 + uVar29 * 4;
              if (iVar31 <= param_3) {
                puVar26 = param_2 + 2;
                *param_2 = _LC2;
                if (param_1[0x2209a] != (UNewTrie)0x0) {
                  *(undefined4 *)((long)param_2 + 4) = 0x325;
                }
                param_2[1] = CONCAT44(uVar29,uVar30);
                if (0 < (int)uVar30) {
                  uVar21 = 0;
                  do {
                    *(short *)((long)param_2 + uVar21 * 2 + 0x10) =
                         (short)(*(uint *)(param_1 + uVar21 * 4) >> 2);
                    uVar21 = uVar21 + 1;
                  } while (uVar30 != uVar21);
                  puVar26 = (undefined8 *)((long)puVar26 + (ulong)uVar30 * 2);
                }
                memcpy(puVar26,*(void **)(param_1 + 0x22080),(long)(int)uVar29 << 2);
              }
            }
            else {
              if (0x3ffff < (int)(uVar30 + uVar29)) {
                *param_6 = 8;
              }
              iVar31 = iVar31 + uVar29 * 2;
              if (iVar31 <= param_3) {
                puVar26 = param_2 + 2;
                *param_2 = __LC3;
                if (param_1[0x2209a] != (UNewTrie)0x0) {
                  *(undefined4 *)((long)param_2 + 4) = 0x225;
                }
                param_2[1] = CONCAT44(uVar29,uVar30);
                if (0 < (int)uVar30) {
                  uVar21 = 0;
                  do {
                    *(short *)((long)param_2 + uVar21 * 2 + 0x10) =
                         (short)(*(int *)(param_1 + uVar21 * 4) + uVar30 >> 2);
                    uVar21 = uVar21 + 1;
                  } while (uVar21 != uVar30);
                  puVar26 = (undefined8 *)((long)puVar26 + uVar21 * 2);
                }
                lVar28 = *(long *)(param_1 + 0x22080);
                if (0 < (int)uVar29) {
                  uVar21 = 0;
                  do {
                    *(short *)((long)puVar26 + uVar21 * 2) =
                         (short)*(undefined4 *)(lVar28 + uVar21 * 4);
                    uVar21 = uVar21 + 1;
                  } while (uVar29 != uVar21);
                }
              }
            }
            goto LAB_00100b73;
          }
          param_1[0x2209b] = (UNewTrie)0x1;
          goto LAB_00100b70;
        }
      }
      else {
        iVar23 = *(int *)(param_1 + 0x22094);
        if ((iVar23 + 0x20 <= *(int *)(param_1 + 0x22090)) &&
           (*(int *)(param_1 + 0x22094) = iVar23 + 0x20, -1 < iVar23)) {
          piVar27 = *(int **)(param_1 + 0x22080) + iVar23;
          piVar1 = piVar27 + 0x20;
          do {
            *piVar27 = iVar31;
            piVar27[1] = iVar31;
            piVar27[2] = iVar31;
            piVar27[3] = iVar31;
            piVar27 = piVar27 + 4;
          } while (piVar1 != piVar27);
          iVar23 = -iVar23;
          goto LAB_00100d3f;
        }
LAB_00101059:
        iVar23 = 7;
      }
      *param_6 = iVar23;
      param_1[0x2209b] = (UNewTrie)0x1;
    }
  }
LAB_00100b70:
  iVar31 = 0;
LAB_00100b73:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar31;
}



int utrie_unserialize_76_godot(undefined8 *param_1,int *param_2,int param_3,int *param_4)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if ((0xf < param_3) && ((*param_2 == 0x54726965 && (uVar4 = param_2[1], (char)uVar4 == '%')))) {
      *(byte *)((long)param_1 + 0x24) = (byte)(uVar4 >> 9) & 1;
      uVar2 = *(undefined8 *)(param_2 + 2);
      iVar8 = (int)((ulong)uVar2 >> 0x20);
      param_1[3] = uVar2;
      iVar6 = (int)uVar2;
      if (iVar6 * 2 <= param_3 + -0x10) {
        iVar7 = param_3 + -0x10 + iVar6 * -2;
        *param_1 = param_2 + 4;
        puVar1 = (ushort *)((long)(param_2 + 4) + (long)iVar6 * 2);
        if ((uVar4 & 0x100) == 0) {
          if (iVar8 * 2 <= iVar7) {
            uVar3 = *puVar1;
            param_1[1] = 0;
            param_1[2] = 0x100000;
            *(uint *)(param_1 + 4) = (uint)uVar3;
            return (iVar6 + 8 + iVar8) * 2;
          }
        }
        else if (iVar8 * 4 <= iVar7) {
          uVar5 = *(undefined4 *)puVar1;
          param_1[1] = puVar1;
          param_1[2] = 0x100000;
          *(undefined4 *)(param_1 + 4) = uVar5;
          return (iVar6 + 8 + iVar8 * 2) * 2;
        }
      }
    }
    *param_4 = 3;
  }
  return -1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int utrie_unserializeDummy_76_godot
              (undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
              char param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  
  if ((param_7 == (int *)0x0) || (0 < *param_7)) {
    iVar7 = -1;
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0x820;
    iVar7 = 0x100;
    if (param_5 != param_4) {
      iVar7 = 0x120;
    }
    *(int *)((long)param_1 + 0x1c) = iVar7;
    if (param_6 == '\0') {
      iVar7 = iVar7 * 4 + 0x1040;
      if (param_3 < iVar7) {
LAB_001013c2:
        *param_7 = 0xf;
        return iVar7;
      }
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      *(int *)(param_1 + 4) = param_4;
      *param_1 = param_2;
      *param_2 = 0;
      param_2[0x207] = 0;
      puVar9 = (undefined8 *)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
      for (uVar10 = (ulong)(((int)param_2 -
                            (int)(undefined8 *)((ulong)(param_2 + 1) & 0xfffffffffffffff8)) +
                            0x1040U >> 3); uVar4 = _UNK_00101968, uVar3 = __LC6, uVar10 != 0;
          uVar10 = uVar10 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      if (param_5 != param_4) {
        param_2[0x1b0] = __LC6;
        param_2[0x1b1] = uVar4;
        param_2[0x1b2] = uVar3;
        param_2[0x1b3] = uVar4;
        param_2[0x1b4] = uVar3;
        param_2[0x1b5] = uVar4;
        param_2[0x1b6] = uVar3;
        param_2[0x1b7] = uVar4;
      }
      iVar2 = *(int *)(param_1 + 3);
      piVar8 = (int *)((long)param_2 + (long)iVar2 * 2);
      param_1[1] = piVar8;
      piVar1 = piVar8 + 0x100;
      do {
        *piVar8 = param_4;
        piVar8[1] = param_4;
        piVar8[2] = param_4;
        piVar8[3] = param_4;
        piVar8 = piVar8 + 4;
      } while (piVar1 != piVar8);
      if (param_5 != param_4) {
        piVar8 = (int *)((long)param_2 + (long)iVar2 * 2 + 0x400);
        piVar1 = piVar8 + 0x20;
        do {
          *piVar8 = param_5;
          piVar8[1] = param_5;
          piVar8[2] = param_5;
          piVar8[3] = param_5;
          piVar8 = piVar8 + 4;
        } while (piVar1 != piVar8);
      }
    }
    else {
      iVar7 = iVar7 * 2 + 0x1040;
      if (param_3 < iVar7) goto LAB_001013c2;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      uVar4 = _UNK_00101948;
      uVar3 = __LC4;
      puVar9 = param_2 + 0x208;
      *(int *)(param_1 + 4) = param_4;
      *param_1 = param_2;
      puVar11 = param_2;
      do {
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        uVar6 = _UNK_00101958;
        uVar5 = __LC5;
        puVar11 = puVar11 + 2;
      } while (puVar9 != puVar11);
      if (param_5 != param_4) {
        param_2[0x1b0] = __LC5;
        param_2[0x1b1] = uVar6;
        param_2[0x1b2] = uVar5;
        param_2[0x1b3] = uVar6;
        param_2[0x1b4] = uVar5;
        param_2[0x1b5] = uVar6;
        param_2[0x1b6] = uVar5;
        param_2[0x1b7] = uVar6;
      }
      param_1[1] = 0;
      uVar12 = CONCAT22((short)param_4,(short)param_4);
      do {
        *(undefined4 *)puVar9 = uVar12;
        *(undefined4 *)((long)puVar9 + 4) = uVar12;
        *(undefined4 *)(puVar9 + 1) = uVar12;
        *(undefined4 *)((long)puVar9 + 0xc) = uVar12;
        puVar9 = puVar9 + 2;
      } while (puVar9 != param_2 + 0x248);
      if (param_5 != param_4) {
        uVar12 = CONCAT22((short)param_5,(short)param_5);
        *(undefined4 *)(param_2 + 0x248) = uVar12;
        *(undefined4 *)((long)param_2 + 0x1244) = uVar12;
        *(undefined4 *)(param_2 + 0x249) = uVar12;
        *(undefined4 *)((long)param_2 + 0x124c) = uVar12;
        *(undefined4 *)(param_2 + 0x24a) = uVar12;
        *(undefined4 *)((long)param_2 + 0x1254) = uVar12;
        *(undefined4 *)(param_2 + 0x24b) = uVar12;
        *(undefined4 *)((long)param_2 + 0x125c) = uVar12;
        *(undefined4 *)(param_2 + 0x24c) = uVar12;
        *(undefined4 *)((long)param_2 + 0x1264) = uVar12;
        *(undefined4 *)(param_2 + 0x24d) = uVar12;
        *(undefined4 *)((long)param_2 + 0x126c) = uVar12;
        *(undefined4 *)(param_2 + 0x24e) = uVar12;
        *(undefined4 *)((long)param_2 + 0x1274) = uVar12;
        *(undefined4 *)(param_2 + 0x24f) = uVar12;
        *(undefined4 *)((long)param_2 + 0x127c) = uVar12;
      }
    }
    param_1[2] = 0x100000;
  }
  return iVar7;
}



void utrie_enum_76_godot(long *param_1,code *param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int local_68;
  int local_40;
  
  if (((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
  lVar2 = param_1[1];
  if (param_2 == (code *)0x0) {
    param_2 = enumSameValue;
  }
  iVar4 = (*param_2)(param_4,(int)param_1[4]);
  local_40 = 0;
  if (lVar2 == 0) {
    local_40 = (int)param_1[3];
  }
  iVar14 = 0;
  iVar10 = 0;
  iVar8 = 0;
  local_68 = local_40;
  iVar5 = iVar4;
  do {
    if (iVar8 == 0xd800) {
      lVar6 = 0x1000;
      iVar10 = 0x800;
    }
    else if (iVar8 == 0xdc00) {
      lVar6 = 0xdc0;
      iVar10 = 0x6e0;
    }
    else {
      lVar6 = (long)iVar10 * 2;
    }
    iVar7 = (uint)*(ushort *)(lVar1 + lVar6) * 4;
    if (iVar7 == local_68) {
      iVar12 = iVar8 + 0x20;
    }
    else {
      if (local_40 != iVar7) {
        lVar6 = (long)iVar7;
        lVar13 = 0;
        iVar12 = iVar5;
        do {
          if (lVar2 == 0) {
            uVar15 = (uint)*(ushort *)(lVar1 + lVar6 * 2 + lVar13 * 2);
          }
          else {
            uVar15 = *(uint *)(lVar2 + lVar6 * 4 + lVar13 * 4);
          }
          iVar5 = (*param_2)(param_4,uVar15);
          local_68 = iVar7;
          if (iVar5 == iVar12) {
LAB_001016a5:
            lVar13 = lVar13 + 1;
            iVar12 = iVar8 + 1;
            iVar7 = local_68;
            if (lVar13 == 0x20) goto LAB_00101508;
          }
          else {
            if ((iVar14 < iVar8) &&
               (cVar3 = (*UNRECOVERED_JUMPTABLE)(param_4,iVar14,iVar8,iVar12), cVar3 == '\0')) {
              return;
            }
            iVar14 = iVar8;
            if (lVar13 != 0) {
              local_68 = -1;
              goto LAB_001016a5;
            }
            lVar13 = 1;
          }
          iVar8 = iVar8 + 1;
          iVar12 = iVar5;
        } while( true );
      }
      iVar16 = iVar14;
      if (((iVar4 != iVar5) && (iVar16 = iVar8, local_68 = iVar7, iVar14 < iVar8)) &&
         (cVar3 = (*UNRECOVERED_JUMPTABLE)(param_4,iVar14,iVar8,iVar5), cVar3 == '\0')) {
        return;
      }
      iVar12 = iVar8 + 0x20;
      iVar14 = iVar16;
      iVar5 = iVar4;
    }
LAB_00101508:
    iVar8 = iVar12;
    iVar10 = iVar10 + 1;
    if (0xffff < iVar8) {
      uVar15 = 0xd800;
      do {
        iVar7 = (uint)*(ushort *)(lVar1 + (long)((int)uVar15 >> 5) * 2) * 4;
        iVar10 = iVar14;
        if (local_40 == iVar7) {
          if (((iVar4 != iVar5) && (iVar10 = iVar8, local_68 = iVar7, iVar14 < iVar8)) &&
             (cVar3 = (*UNRECOVERED_JUMPTABLE)(param_4,iVar14,iVar8,iVar5), cVar3 == '\0')) {
            return;
          }
          uVar15 = uVar15 + 0x20;
          iVar8 = iVar8 + 0x8000;
          iVar5 = iVar4;
        }
        else {
          lVar6 = (long)(int)((uVar15 & 0x1f) + iVar7);
          if (lVar2 == 0) {
            uVar9 = (uint)*(ushort *)(lVar1 + lVar6 * 2);
          }
          else {
            uVar9 = *(uint *)(lVar2 + lVar6 * 4);
          }
          iVar7 = (*(code *)param_1[2])(uVar9);
          if (iVar7 < 1) {
            if (((iVar4 != iVar5) && (iVar10 = iVar8, local_68 = local_40, iVar14 < iVar8)) &&
               (cVar3 = (*UNRECOVERED_JUMPTABLE)(param_4,iVar14,iVar8,iVar5), cVar3 == '\0')) {
              return;
            }
            iVar8 = iVar8 + 0x400;
            iVar5 = iVar4;
          }
          else {
            puVar11 = (ushort *)(lVar1 + (long)iVar7 * 2);
            do {
              iVar14 = (uint)*puVar11 * 4;
              if (local_68 == iVar14) {
                iVar12 = iVar8 + 0x20;
              }
              else {
                if (local_40 != iVar14) {
                  lVar6 = 0;
                  local_68 = iVar14;
                  iVar12 = iVar5;
                  do {
                    if (lVar2 == 0) {
                      uVar9 = (uint)*(ushort *)(lVar1 + (long)iVar14 * 2 + lVar6 * 2);
                    }
                    else {
                      uVar9 = *(uint *)(lVar2 + (long)iVar14 * 4 + lVar6 * 4);
                    }
                    iVar5 = (*param_2)(param_4,uVar9);
                    if (iVar5 == iVar12) {
LAB_0010185e:
                      lVar6 = lVar6 + 1;
                      iVar12 = iVar8 + 1;
                      if (lVar6 == 0x20) goto LAB_001017a7;
                    }
                    else {
                      if ((iVar10 < iVar8) &&
                         (cVar3 = (*UNRECOVERED_JUMPTABLE)(param_4,iVar10,iVar8,iVar12),
                         cVar3 == '\0')) {
                        return;
                      }
                      iVar10 = iVar8;
                      if (lVar6 != 0) {
                        local_68 = -1;
                        goto LAB_0010185e;
                      }
                      lVar6 = 1;
                    }
                    iVar8 = iVar8 + 1;
                    iVar12 = iVar5;
                  } while( true );
                }
                iVar12 = iVar10;
                if (((iVar5 != iVar4) && (local_68 = iVar14, iVar12 = iVar8, iVar10 < iVar8)) &&
                   (cVar3 = (*UNRECOVERED_JUMPTABLE)(param_4,iVar10,iVar8,iVar5), cVar3 == '\0')) {
                  return;
                }
                iVar10 = iVar12;
                iVar12 = iVar8 + 0x20;
                iVar5 = iVar4;
              }
LAB_001017a7:
              iVar8 = iVar12;
              puVar11 = puVar11 + 1;
            } while (puVar11 != (ushort *)(lVar1 + 0x40 + (long)iVar7 * 2));
          }
          uVar15 = uVar15 + 1;
        }
        iVar14 = iVar10;
        if (0xdbff < (int)uVar15) {
                    /* WARNING: Could not recover jumptable at 0x001015f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_4,iVar10,iVar8,iVar5);
          return;
        }
      } while( true );
    }
  } while( true );
}



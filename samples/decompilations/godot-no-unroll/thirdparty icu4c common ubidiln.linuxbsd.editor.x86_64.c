
void ubidi_setLine_76_godot
               (long *param_1,ulong param_2,uint param_3,undefined8 *param_4,int *param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  byte *pbVar15;
  
  if (param_5 == (int *)0x0) {
    return;
  }
  if (0 < *param_5) {
    return;
  }
  if ((param_1 == (long *)0x0) || ((long *)*param_1 != param_1)) {
    *param_5 = 0x1b;
    return;
  }
  uVar6 = (uint)param_2;
  if (((((int)(uVar6 | param_3) < 0) || ((int)param_3 <= (int)uVar6)) ||
      (*(int *)((long)param_1 + 0x14) < (int)param_3)) || (param_4 == (undefined8 *)0x0)) {
LAB_00100218:
    *param_5 = 1;
    return;
  }
  iVar4 = ubidi_getParagraph_76_godot(param_1,param_2,0,0,0,param_5);
  iVar5 = ubidi_getParagraph_76_godot(param_1,param_3 - 1,0,0,0,param_5);
  if (iVar4 != iVar5) goto LAB_00100218;
  lVar10 = (long)(int)uVar6;
  *param_4 = 0;
  iVar4 = param_3 - uVar6;
  lVar14 = param_1[1];
  *(int *)(param_4 + 3) = iVar4;
  param_4[2] = CONCAT44(iVar4,iVar4);
  param_4[1] = lVar14 + lVar10 * 2;
  if ((*(char *)((long)param_1 + 0x8e) == '\0') || ((int)uVar6 < *(int *)param_1[0x1a])) {
    uVar8 = (uint)*(byte *)((long)param_1 + 0x8d);
  }
  else {
    uVar8 = ubidi_getParaLevelAtIndex_76_godot(param_1,param_2 & 0xffffffff);
  }
  bVar13 = (byte)uVar8;
  *(byte *)((long)param_4 + 0x8d) = bVar13;
  lVar14 = param_1[0x19];
  param_4[0x26] = 0;
  *(int *)(param_4 + 0x19) = (int)lVar14;
  *(undefined4 *)((long)param_4 + 0xbc) = 0;
  uVar2 = *(undefined8 *)((long)param_1 + 0x84);
  *(undefined4 *)(param_4 + 0x37) = 0;
  *(undefined8 *)((long)param_4 + 0x84) = uVar2;
  if (0 < (int)param_1[0x37]) {
    lVar14 = param_1[1];
    iVar5 = 0;
    lVar11 = lVar10;
    do {
      uVar1 = *(ushort *)(lVar14 + lVar11 * 2);
      if ((((uVar1 & 0xfffffffc) == 0x200c) || (uVar1 - 0x202a < 5)) || (uVar1 - 0x2066 < 4)) {
        iVar5 = iVar5 + 1;
        *(int *)(param_4 + 0x37) = iVar5;
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)param_3);
    *(int *)(param_4 + 3) = *(int *)(param_4 + 3) - iVar5;
  }
  lVar14 = param_1[0xe];
  lVar11 = param_1[0xf];
  lVar3 = param_1[0x17];
  *(undefined4 *)(param_4 + 0x25) = 0xffffffff;
  lVar14 = lVar10 + lVar14;
  pbVar15 = (byte *)(lVar10 + lVar11);
  param_4[0xe] = lVar14;
  param_4[0xf] = pbVar15;
  if ((int)lVar3 == 2) {
    iVar5 = *(int *)((long)param_4 + 0x14);
    uVar12 = (ulong)iVar5;
    if (*(char *)(lVar14 + -1 + uVar12) == '\a') {
      *(int *)((long)param_4 + 0xc4) = iVar5;
      if (iVar5 == 0) goto LAB_00100341;
LAB_001002ba:
      bVar7 = *pbVar15 & 1;
      if ((iVar5 < iVar4) && ((bVar13 & 1) != bVar7)) goto LAB_001002ff;
      if (iVar5 != 1) goto LAB_001002d3;
LAB_0010039b:
      uVar8 = (uint)bVar7;
    }
    else {
      pbVar9 = (byte *)(lVar14 + (uVar12 - 1));
      if (0 < iVar5) {
        do {
          if ((0x7ddb80UL >> ((ulong)*pbVar9 & 0x3f) & 1) == 0) {
            pbVar9 = pbVar15 + (long)(int)uVar12 + -1;
            goto LAB_001002ad;
          }
          pbVar9 = pbVar9 + -1;
          uVar6 = (int)uVar12 - 1;
          uVar12 = (ulong)uVar6;
        } while (uVar6 != 0);
        goto LAB_00100335;
      }
      *(int *)((long)param_4 + 0xc4) = iVar5;
      if (iVar5 != 0) {
        bVar7 = *pbVar15 & 1;
        if (bVar7 == (bVar13 & 1)) {
LAB_001002d3:
          pbVar9 = pbVar15 + 1;
          do {
            if ((*pbVar9 & 1) != bVar7) goto LAB_001002ff;
            pbVar9 = pbVar9 + 1;
          } while (pbVar15 + (ulong)(iVar5 - 2) + 2 != pbVar9);
          goto LAB_0010039b;
        }
LAB_001002ff:
        *(undefined4 *)(param_4 + 0x17) = 2;
        goto LAB_00100208;
      }
LAB_00100341:
      uVar8 = uVar8 & 1;
    }
    *(uint *)(param_4 + 0x17) = uVar8;
    if (uVar8 == 0) {
      *(undefined4 *)((long)param_4 + 0xc4) = 0;
      *(byte *)((long)param_4 + 0x8d) = bVar13 + 1 & 0xfe;
      goto LAB_00100208;
    }
    *(byte *)((long)param_4 + 0x8d) = bVar13 | 1;
  }
  else {
    *(int *)(param_4 + 0x17) = (int)lVar3;
    iVar5 = *(int *)((long)param_1 + 0xc4);
    if ((int)uVar6 < iVar5) {
      if (iVar5 < (int)param_3) {
        iVar4 = iVar5 - uVar6;
      }
      *(int *)((long)param_4 + 0xc4) = iVar4;
      goto LAB_00100208;
    }
  }
  *(undefined4 *)((long)param_4 + 0xc4) = 0;
LAB_00100208:
  *param_4 = param_1;
  return;
  while( true ) {
    pbVar9 = pbVar9 + -1;
    uVar12 = (ulong)(iVar5 - 1U);
    if (iVar5 - 1U == 0) break;
LAB_001002ad:
    iVar5 = (int)uVar12;
    if (bVar13 != *pbVar9) {
      *(int *)((long)param_4 + 0xc4) = iVar5;
      goto LAB_001002ba;
    }
  }
LAB_00100335:
  *(undefined4 *)((long)param_4 + 0xc4) = 0;
  goto LAB_00100341;
}



ulong ubidi_getLevelAt_76_godot(long *param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 == param_1) || ((uVar2 = 0, plVar1 != (long *)0x0 && (plVar1 == (long *)*plVar1)))) {
    if (param_2 < 0) {
      return 0;
    }
    if (*(int *)((long)param_1 + 0x14) <= param_2) {
      return 0;
    }
    if (((int)param_1[0x17] == 2) && (param_2 < *(int *)((long)param_1 + 0xc4))) {
      uVar2 = (ulong)*(byte *)(param_1[0xf] + (long)param_2);
    }
    else {
      if ((*(char *)((long)param_1 + 0x8e) != '\0') && (*(int *)param_1[0x1a] <= param_2)) {
        uVar2 = ubidi_getParaLevelAtIndex_76_godot();
        return uVar2;
      }
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x8d);
    }
  }
  return uVar2;
}



void * ubidi_getLevels_76_godot(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  void *__dest;
  char cVar4;
  
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if ((param_1 == (long *)0x0) ||
       ((plVar3 = (long *)*param_1, plVar3 != param_1 &&
        ((plVar3 == (long *)0x0 || (plVar3 != (long *)*plVar3)))))) {
      *param_2 = 0x1b;
    }
    else {
      iVar1 = *(int *)((long)param_1 + 0x14);
      if (iVar1 < 1) {
        *param_2 = 1;
      }
      else {
        iVar2 = *(int *)((long)param_1 + 0xc4);
        if (iVar1 == iVar2) {
          return (void *)param_1[0xf];
        }
        cVar4 = ubidi_getMemory_76_godot(param_1 + 8,param_1 + 4,(int)(char)param_1[0xd],iVar1);
        if (cVar4 != '\0') {
          __dest = (void *)param_1[8];
          if ((0 < iVar2) && ((void *)param_1[0xf] != __dest)) {
            memcpy(__dest,(void *)param_1[0xf],(long)iVar2);
          }
          memset((void *)((long)__dest + (long)iVar2),(uint)*(byte *)((long)param_1 + 0x8d),
                 (long)(iVar1 - iVar2));
          *(int *)((long)param_1 + 0xc4) = iVar1;
          param_1[0xf] = (long)__dest;
          return __dest;
        }
        *param_2 = 7;
      }
    }
  }
  return (void *)0x0;
}



undefined8 ubidi_getRuns_76_godot(long param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  undefined8 uVar12;
  uint *puVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  ushort *puVar24;
  byte bVar25;
  int iVar26;
  int iVar27;
  
  if (-1 < *(int *)(param_1 + 0x128)) {
    return 1;
  }
  iVar21 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0xb8) == 2) {
    iVar20 = *(int *)(param_1 + 0xc4);
    pbVar5 = *(byte **)(param_1 + 0x78);
    if (iVar20 < 1) {
      iVar26 = 0;
    }
    else {
      iVar26 = 0;
      pbVar11 = pbVar5;
      bVar15 = 0xfe;
      do {
        bVar25 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        iVar26 = iVar26 + (uint)(bVar25 != bVar15);
        bVar15 = bVar25;
      } while (pbVar11 != pbVar5 + iVar20);
      if ((iVar26 == 1) && (iVar20 == iVar21)) {
        bVar15 = *pbVar5;
        *(undefined4 *)(param_1 + 0x128) = 1;
        *(long *)(param_1 + 0x130) = param_1 + 0x138;
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(ulong *)(param_1 + 0x138) = CONCAT44(iVar21,(uint)bVar15 << 0x1f);
        goto LAB_001005e5;
      }
    }
    iVar26 = iVar26 + (uint)(iVar20 < iVar21);
    uVar12 = ubidi_getMemory_76_godot(param_1 + 0x58,param_1 + 0x2c,(int)*(char *)(param_1 + 0x69));
    if ((char)uVar12 == '\0') {
      return uVar12;
    }
    puVar10 = *(uint **)(param_1 + 0x58);
    bVar25 = 0;
    bVar15 = 0x7e;
    iVar14 = 0;
    puVar13 = puVar10;
    uVar17 = 0;
    do {
      bVar2 = pbVar5[(int)uVar17];
      if (bVar2 < bVar15) {
        bVar15 = bVar2;
      }
      lVar18 = (long)(int)(uVar17 + 1);
      if (bVar25 < bVar2) {
        bVar25 = bVar2;
      }
      do {
        uVar9 = (uint)lVar18;
        if (iVar20 <= (int)uVar9) {
          lVar18 = (long)iVar14;
          puVar13 = puVar10 + lVar18 * 3;
          *puVar13 = uVar17;
          puVar13[1] = uVar9 - uVar17;
          puVar13[2] = 0;
          if (iVar20 < iVar21) {
            *(ulong *)(puVar10 + lVar18 * 3 + 3) = CONCAT44(iVar21 - iVar20,iVar20);
            if (*(byte *)(param_1 + 0x8d) < bVar15) {
              bVar15 = *(byte *)(param_1 + 0x8d);
            }
          }
          *(uint **)(param_1 + 0x130) = puVar10;
          *(int *)(param_1 + 0x128) = iVar26;
          if (bVar25 <= (bVar15 | 1)) goto LAB_00100a42;
          iVar21 = *(int *)(param_1 + 0xc4);
          bVar15 = bVar15 + 1;
          iVar20 = *(int *)(param_1 + 0x14);
          lVar6 = *(long *)(param_1 + 0x78);
          iVar22 = iVar26 - (uint)(iVar21 < iVar20);
          goto joined_r0x001008e3;
        }
        pbVar11 = pbVar5 + lVar18;
        lVar18 = lVar18 + 1;
      } while (*pbVar11 == bVar2);
      *puVar13 = uVar17;
      iVar14 = iVar14 + 1;
      puVar13[2] = 0;
      puVar13[1] = uVar9 - uVar17;
      puVar13 = puVar13 + 3;
      uVar17 = uVar9;
    } while( true );
  }
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(long *)(param_1 + 0x130) = param_1 + 0x138;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(ulong *)(param_1 + 0x138) = CONCAT44(iVar21,(uint)*(byte *)(param_1 + 0x8d) << 0x1f);
  goto LAB_001005e5;
  while (iVar22 < 1) {
joined_r0x001008e3:
    bVar25 = bVar25 - 1;
    if (bVar25 < bVar15) goto LAB_001009e7;
  }
  do {
    iVar16 = 0;
    do {
      if (*(byte *)(lVar6 + (int)puVar10[(long)iVar16 * 3]) < bVar25) {
        iVar16 = iVar16 + 1;
      }
      else {
        puVar13 = puVar10 + (long)iVar16 * 3 + 3;
        iVar7 = iVar16;
        do {
          iVar8 = iVar7;
          iVar7 = iVar8 + 1;
          if (iVar22 <= iVar7) {
            if (iVar8 <= iVar16) goto LAB_001009b0;
            goto LAB_00100963;
          }
          uVar17 = *puVar13;
          puVar13 = puVar13 + 3;
        } while (bVar25 <= *(byte *)(lVar6 + (int)uVar17));
        if (iVar16 < iVar8) {
LAB_00100963:
          iVar27 = iVar16 + iVar8;
          puVar13 = puVar10 + (long)iVar16 * 3;
          puVar19 = puVar10 + (long)iVar8 * 3;
          do {
            uVar17 = puVar13[2];
            iVar16 = iVar16 + 1;
            uVar12 = *(undefined8 *)puVar13;
            *(undefined8 *)puVar13 = *(undefined8 *)puVar19;
            puVar13[2] = puVar19[2];
            puVar19[2] = uVar17;
            *(undefined8 *)puVar19 = uVar12;
            puVar13 = puVar13 + 3;
            puVar19 = puVar19 + -3;
          } while (iVar16 < iVar27 - iVar16);
LAB_001009b0:
          if (iVar22 == iVar7) break;
        }
        iVar16 = iVar8 + 2;
      }
    } while (iVar16 < iVar22);
    bVar25 = bVar25 - 1;
  } while (bVar15 <= bVar25);
LAB_001009e7:
  if (((bVar15 & 1) == 0) && (iVar22 = iVar22 - (uint)(iVar21 == iVar20), 0 < iVar22)) {
    iVar21 = 0;
    puVar13 = puVar10;
    puVar19 = puVar10 + (long)iVar22 * 3;
    do {
      uVar17 = puVar13[2];
      iVar21 = iVar21 + 1;
      uVar12 = *(undefined8 *)puVar13;
      *(undefined8 *)puVar13 = *(undefined8 *)puVar19;
      puVar13[2] = puVar19[2];
      puVar19[2] = uVar17;
      *(undefined8 *)puVar19 = uVar12;
      puVar13 = puVar13 + 3;
      puVar19 = puVar19 + -3;
    } while (iVar21 < iVar22 - iVar21);
  }
LAB_00100a42:
  if (0 < iVar26) {
    uVar17 = 0;
    puVar13 = puVar10;
    do {
      uVar17 = uVar17 + puVar13[1];
      puVar19 = puVar13 + 3;
      bVar15 = pbVar5[(int)*puVar13];
      puVar13[1] = uVar17;
      *puVar13 = (uint)bVar15 << 0x1f | *puVar13;
      puVar13 = puVar19;
    } while (puVar19 != puVar10 + (long)iVar26 * 3);
    if (iVar14 + 1 < iVar26) {
      if ((*(byte *)(param_1 + 0x8d) & 1) == 0) {
        puVar10 = puVar10 + lVar18 * 3 + 3;
      }
      *puVar10 = *puVar10 | (uint)*(byte *)(param_1 + 0x8d) << 0x1f;
    }
  }
LAB_001005e5:
  if (0 < *(int *)(param_1 + 0x1a4)) {
    piVar23 = *(int **)(param_1 + 0x1b0);
    piVar1 = piVar23 + (long)*(int *)(param_1 + 0x1a4) * 2;
    if (piVar23 < piVar1) {
      puVar10 = *(uint **)(param_1 + 0x130);
      do {
        if (*(int *)(param_1 + 0x128) < 1) goto code_r0x00101d6d;
        puVar13 = puVar10;
        uVar17 = 0;
        while( true ) {
          puVar19 = puVar13 + 1;
          if (((int)(*puVar13 & 0x7fffffff) <= *piVar23) &&
             (*piVar23 < (int)((*puVar13 & 0x7fffffff) + (*puVar19 - uVar17)))) break;
          puVar13 = puVar13 + 3;
          uVar17 = *puVar19;
          if (puVar10 + (long)*(int *)(param_1 + 0x128) * 3 == puVar13) {
                    /* WARNING: Subroutine does not return */
            ubidi_getRuns_76_godot_cold();
          }
        }
        puVar19 = (uint *)(piVar23 + 1);
        piVar23 = piVar23 + 2;
        puVar13[2] = puVar13[2] | *puVar19;
      } while (piVar23 < piVar1);
    }
  }
  if (0 < *(int *)(param_1 + 0x1b8)) {
    puVar4 = *(ushort **)(param_1 + 8);
    iVar21 = *(int *)(param_1 + 0x14);
    for (puVar24 = puVar4; puVar24 < puVar4 + iVar21; puVar24 = puVar24 + 1) {
      uVar3 = *puVar24;
      if ((((uVar3 & 0xfffffffc) == 0x200c) || (uVar3 - 0x202a < 5)) || (uVar3 - 0x2066 < 4)) {
        puVar10 = *(uint **)(param_1 + 0x130);
        if (*(int *)(param_1 + 0x128) < 1) {
code_r0x00101d6d:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar13 = puVar10 + (long)*(int *)(param_1 + 0x128) * 3;
        uVar17 = 0;
        while( true ) {
          puVar19 = puVar10 + 1;
          iVar20 = (int)((long)puVar24 - (long)puVar4 >> 1);
          if (((int)(*puVar10 & 0x7fffffff) <= iVar20) &&
             (iVar20 < (int)((*puVar10 & 0x7fffffff) + (*puVar19 - uVar17)))) break;
          puVar10 = puVar10 + 3;
          uVar17 = *puVar19;
          if (puVar10 == puVar13) {
                    /* WARNING: Subroutine does not return */
            ubidi_getRuns_76_godot_cold();
          }
        }
        puVar10[2] = puVar10[2] - 1;
      }
    }
  }
  return 1;
}



undefined4 ubidi_countRuns_76_godot(long *param_1,int *param_2)

{
  long *plVar1;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_2 < 1) {
    if ((param_1 == (long *)0x0) ||
       ((plVar1 = (long *)*param_1, plVar1 != param_1 &&
        ((plVar1 == (long *)0x0 || (plVar1 != (long *)*plVar1)))))) {
      *param_2 = 0x1b;
    }
    else {
      ubidi_getRuns_76_godot(param_1,param_2);
      if (*param_2 < 1) {
        return (int)param_1[0x25];
      }
    }
  }
  return 0xffffffff;
}



uint ubidi_getVisualRun_76_godot(long *param_1,int param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)*param_1;
    if ((plVar2 == param_1) || ((plVar2 != (long *)0x0 && (plVar2 == (long *)*plVar2)))) {
      ubidi_getRuns_76_godot(param_1,&local_34);
      if ((-1 < param_2) && (param_2 < (int)param_1[0x25])) {
        lVar3 = param_1[0x26];
        puVar1 = (uint *)(lVar3 + (long)param_2 * 0xc);
        uVar4 = *puVar1;
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar4 & 0x7fffffff;
        }
        if (param_4 != (int *)0x0) {
          if (param_2 == 0) {
            *param_4 = *(int *)(lVar3 + 4);
          }
          else {
            *param_4 = puVar1[1] - *(int *)(lVar3 + -8 + (long)param_2 * 0xc);
          }
        }
        uVar4 = uVar4 >> 0x1f;
        goto LAB_00100bea;
      }
    }
  }
  uVar4 = 0;
LAB_00100bea:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ubidi_getLogicalRun_76_godot(long *param_1,int param_2,int *param_3,byte *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (((-1 < param_2) && (param_2 < *(int *)((long)param_1 + 0x14))) &&
     ((plVar4 = (long *)*param_1, param_1 == plVar4 ||
      ((plVar4 != (long *)0x0 && (plVar4 == (long *)*plVar4)))))) {
    ubidi_getRuns_76_godot(param_1);
    puVar6 = (uint *)param_1[0x26];
    uVar8 = *puVar6;
    if ((int)param_1[0x25] < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = puVar6[1] + (uVar8 & 0x7fffffff);
      if ((param_2 < (int)(uVar8 & 0x7fffffff)) || (iVar7 <= param_2)) {
        puVar1 = puVar6 + (ulong)((int)param_1[0x25] - 1) * 3;
        uVar9 = puVar6[1];
        do {
          if (puVar1 == puVar6) break;
          uVar8 = puVar6[3];
          uVar2 = puVar6[4];
          puVar6 = puVar6 + 3;
          iVar7 = (uVar2 + (uVar8 & 0x7fffffff)) - uVar9;
          uVar9 = uVar2;
        } while ((param_2 < (int)(uVar8 & 0x7fffffff)) || (iVar7 <= param_2));
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar7;
    }
    if (param_4 != (byte *)0x0) {
      if (*(int *)((long)param_1 + 0x84) == 3) {
        *param_4 = (byte)(uVar8 >> 0x1f);
      }
      else {
        if (((int)param_1[0x17] == 2) && (param_2 < *(int *)((long)param_1 + 0xc4))) {
          bVar5 = *(byte *)(param_1[0xf] + (long)param_2);
        }
        else if ((*(char *)((long)param_1 + 0x8e) == '\0') || (param_2 < *(int *)param_1[0x1a])) {
          bVar5 = *(byte *)((long)param_1 + 0x8d);
        }
        else {
          bVar5 = ubidi_getParaLevelAtIndex_76_godot(param_1,param_2);
        }
        *param_4 = bVar5;
      }
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ubidi_reorderLogical_76_godot(long param_1,int param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  
  if (param_3 == 0) {
    return;
  }
  if ((param_1 != 0) && (0 < param_2)) {
    bVar10 = 0;
    lVar7 = (long)param_2 + -2;
    lVar5 = (long)param_2 + -1;
    bVar8 = 0x7e;
    pbVar6 = (byte *)(param_1 + lVar5);
    do {
      bVar1 = *pbVar6;
      if (0x7e < bVar1) {
        return;
      }
      if (bVar1 < bVar8) {
        bVar8 = bVar1;
      }
      if (bVar10 < bVar1) {
        bVar10 = bVar1;
      }
      pbVar6 = pbVar6 + -1;
    } while (pbVar6 != (byte *)((param_1 + lVar7) - (ulong)(param_2 - 1)));
    do {
      *(int *)(param_3 + lVar5 * 4) = (int)lVar5;
      lVar5 = lVar5 + -1;
    } while (lVar5 != lVar7 - (ulong)(param_2 - 1));
    if ((bVar8 != bVar10) || ((bVar8 & 1) != 0)) {
      do {
        iVar9 = 0;
        do {
          lVar7 = (long)iVar9;
          if (*(byte *)(param_1 + lVar7) < bVar10) {
            iVar9 = iVar9 + 1;
          }
          else {
            pbVar6 = (byte *)(param_1 + lVar7 + 1);
            iVar2 = iVar9;
            do {
              iVar3 = iVar2;
              iVar2 = iVar3 + 1;
              if (param_2 <= iVar2) break;
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar10 <= bVar1);
            lVar5 = lVar7 + 1;
            while (lVar4 = lVar5,
                  *(int *)(param_3 + lVar7 * 4) =
                       (iVar9 + -1 + iVar2) - *(int *)(param_3 + lVar7 * 4), (int)lVar4 + -1 < iVar3
                  ) {
              lVar7 = lVar4;
              lVar5 = lVar4 + 1;
            }
            if (param_2 == iVar2) break;
            iVar9 = iVar3 + 2;
          }
        } while (iVar9 < param_2);
        bVar10 = bVar10 - 1;
        if (bVar10 < (bVar8 | 1)) {
          return;
        }
      } while( true );
    }
  }
  return;
}



void ubidi_reorderVisual_76_godot(long param_1,int param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  
  if (param_3 == 0) {
    return;
  }
  if ((param_1 != 0) && (0 < param_2)) {
    bVar8 = 0;
    bVar12 = 0x7e;
    lVar9 = (long)param_2 + -1;
    lVar1 = (long)param_2 + -2;
    pbVar6 = (byte *)(param_1 + lVar9);
    do {
      bVar2 = *pbVar6;
      if (0x7e < bVar2) {
        return;
      }
      if (bVar2 < bVar12) {
        bVar12 = bVar2;
      }
      if (bVar8 < bVar2) {
        bVar8 = bVar2;
      }
      pbVar6 = pbVar6 + -1;
    } while (pbVar6 != (byte *)((param_1 + lVar1) - (ulong)(param_2 - 1)));
    do {
      *(int *)(param_3 + lVar9 * 4) = (int)lVar9;
      lVar9 = lVar9 + -1;
    } while (lVar9 != lVar1 - (ulong)(param_2 - 1));
    if ((bVar12 != bVar8) || ((bVar12 & 1) != 0)) {
      do {
        iVar11 = 0;
        do {
          lVar9 = (long)iVar11;
          if (*(byte *)(param_1 + lVar9) < bVar8) {
            iVar11 = iVar11 + 1;
          }
          else {
            pbVar6 = (byte *)(param_1 + lVar9 + 1);
            iVar10 = iVar11;
            do {
              iVar4 = iVar10;
              iVar10 = iVar4 + 1;
              if (param_2 <= iVar10) {
                if (iVar11 < iVar4) goto LAB_00100fe6;
                goto LAB_0010100f;
              }
              bVar2 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar8 <= bVar2);
            if (iVar11 < iVar4) {
LAB_00100fe6:
              lVar5 = (long)iVar4;
              lVar1 = lVar9 + 1;
              while( true ) {
                lVar7 = lVar1;
                uVar3 = *(undefined4 *)(param_3 + lVar9 * 4);
                *(undefined4 *)(param_3 + lVar9 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
                *(undefined4 *)(param_3 + lVar5 * 4) = uVar3;
                lVar5 = lVar5 + -1;
                if ((int)lVar5 <= (int)lVar7) break;
                lVar1 = lVar7 + 1;
                lVar9 = lVar7;
              }
LAB_0010100f:
              if (param_2 == iVar10) break;
            }
            iVar11 = iVar4 + 2;
          }
        } while (iVar11 < param_2);
        bVar8 = bVar8 - 1;
        if (bVar8 < (bVar12 | 1)) {
          return;
        }
      } while( true );
    }
  }
  return;
}



int ubidi_getVisualIndex_76_godot(long *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  ushort *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_3 == (int *)0x0) {
    return -1;
  }
  if (*param_3 < 1) {
    if ((param_1 == (long *)0x0) ||
       ((plVar2 = (long *)*param_1, plVar2 != param_1 &&
        ((plVar2 == (long *)0x0 || (plVar2 != (long *)*plVar2)))))) {
      *param_3 = 0x1b;
    }
    else if ((param_2 < 0) || (*(int *)((long)param_1 + 0x14) <= param_2)) {
      *param_3 = 1;
    }
    else {
      iVar11 = param_2;
      if ((int)param_1[0x17] != 0) {
        if ((int)param_1[0x17] == 1) {
          iVar11 = (*(int *)((long)param_1 + 0x14) - param_2) + -1;
        }
        else {
          cVar4 = ubidi_getRuns_76_godot(param_1,param_3);
          if (cVar4 == '\0') {
            *param_3 = 7;
            return -1;
          }
          iVar7 = (int)param_1[0x25];
          puVar9 = (uint *)param_1[0x26];
          if (iVar7 < 1) {
            return -1;
          }
          uVar15 = *puVar9;
          uVar13 = puVar9[1];
          iVar12 = param_2 - (uVar15 & 0x7fffffff);
          if ((iVar12 < 0) || ((int)uVar13 <= iVar12)) {
            iVar8 = 0;
            do {
              uVar14 = uVar13;
              puVar6 = puVar9 + 3;
              iVar8 = iVar8 + 1;
              if (iVar7 == iVar8) {
                return -1;
              }
              uVar15 = *puVar6;
              uVar13 = puVar9[4];
              iVar12 = param_2 - (uVar15 & 0x7fffffff);
              puVar9 = puVar6;
            } while (((int)(uVar13 - uVar14) <= iVar12) || (iVar12 < 0));
          }
          else {
            iVar8 = 0;
            uVar14 = 0;
          }
          iVar11 = (uVar13 - iVar12) + -1;
          if (-1 < (int)uVar15) {
            iVar11 = uVar14 + iVar12;
          }
          if (iVar7 <= iVar8) {
            return -1;
          }
        }
      }
      if (0 < *(int *)((long)param_1 + 0x1a4)) {
        iVar7 = 0;
        piVar10 = (int *)(param_1[0x26] + 4);
        while( true ) {
          iVar7 = (iVar7 + 1) - (uint)((piVar10[1] & 5U) == 0);
          if (iVar11 < *piVar10) break;
          iVar7 = (iVar7 + 1) - (uint)((piVar10[1] & 10U) == 0);
          piVar10 = piVar10 + 3;
        }
        return iVar11 + iVar7;
      }
      if ((int)param_1[0x37] < 1) {
        return iVar11;
      }
      lVar3 = param_1[1];
      puVar9 = (uint *)param_1[0x26];
      uVar1 = *(ushort *)(lVar3 + (long)param_2 * 2);
      if ((((uVar1 & 0xfffffffc) != 0x200c) && (4 < uVar1 - 0x202a)) && (3 < uVar1 - 0x2066)) {
        uVar15 = puVar9[1];
        uVar13 = puVar9[2];
        iVar7 = 0;
        puVar6 = puVar9;
        if ((int)uVar15 <= iVar11) {
          do {
            uVar14 = uVar15;
            puVar9 = puVar6 + 3;
            uVar15 = puVar6[4];
            iVar7 = iVar7 - uVar13;
            uVar13 = puVar6[5];
            puVar6 = puVar9;
          } while ((int)uVar15 <= iVar11);
          uVar15 = uVar15 - uVar14;
        }
        if (uVar13 != 0) {
          uVar14 = *puVar9;
          uVar13 = uVar14;
          if ((int)uVar14 < 0) {
            uVar13 = param_2 + 1;
            param_2 = (uVar14 & 0x7fffffff) + uVar15;
          }
          if ((int)uVar13 < param_2) {
            puVar5 = (ushort *)(lVar3 + (long)(int)uVar13 * 2);
            do {
              uVar1 = *puVar5;
              if ((((uVar1 & 0xfffffffc) == 0x200c) || (uVar1 - 0x202a < 5)) || (uVar1 - 0x2066 < 4)
                 ) {
                iVar7 = iVar7 + 1;
              }
              puVar5 = puVar5 + 1;
            } while (puVar5 != (ushort *)
                               (lVar3 + ((ulong)(param_2 - uVar13) + (long)(int)uVar13) * 2));
          }
        }
        return iVar11 - iVar7;
      }
    }
  }
  return -1;
}



uint ubidi_getLogicalIndex_76_godot(long *param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  long *plVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  if (param_3 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0 < *param_3) {
    return 0xffffffff;
  }
  if ((param_1 == (long *)0x0) ||
     ((plVar2 = (long *)*param_1, plVar2 != param_1 &&
      ((plVar2 == (long *)0x0 || (plVar2 != (long *)*plVar2)))))) {
    *param_3 = 0x1b;
    return 0xffffffff;
  }
  if (((int)param_2 < 0) || ((int)param_1[3] <= (int)param_2)) {
    *param_3 = 1;
    return 0xffffffff;
  }
  if ((*(int *)((long)param_1 + 0x1a4) == 0) && ((int)param_1[0x37] == 0)) {
    if ((int)param_1[0x17] == 0) {
      return param_2;
    }
    if ((int)param_1[0x17] == 1) {
      return ~param_2 + *(int *)((long)param_1 + 0x14);
    }
  }
  cVar4 = ubidi_getRuns_76_godot(param_1,param_3);
  if (cVar4 == '\0') {
    *param_3 = 7;
    return 0xffffffff;
  }
  puVar3 = (uint *)param_1[0x26];
  if (*(int *)((long)param_1 + 0x1a4) < 1) {
    uVar11 = param_2;
    if (0 < (int)param_1[0x37]) {
      uVar11 = puVar3[1];
      uVar14 = puVar3[2];
      iVar7 = 0;
      puVar6 = puVar3;
      if ((int)param_2 < (int)(uVar11 + uVar14)) {
        uVar8 = 0;
        iVar7 = 0;
        puVar12 = puVar3;
      }
      else {
        do {
          uVar8 = uVar11;
          puVar12 = puVar6 + 3;
          uVar11 = puVar6[4];
          iVar7 = iVar7 - uVar14;
          uVar14 = puVar6[5];
          puVar6 = puVar12;
        } while ((int)((uVar11 - iVar7) + uVar14) <= (int)param_2);
        uVar11 = uVar11 - uVar8;
      }
      if (uVar14 != 0) {
        uVar14 = *puVar12 & 0x7fffffff;
        if (0 < (int)uVar11) {
          uVar13 = uVar11 + uVar8;
          iVar16 = uVar14 + uVar11 + -1 + uVar8;
          iVar15 = uVar14 - uVar8;
          do {
            iVar5 = iVar16 - uVar8;
            if (-1 < (int)*puVar12) {
              iVar5 = iVar15 + uVar8;
            }
            uVar1 = *(ushort *)(param_1[1] + (long)iVar5 * 2);
            if ((((uVar1 & 0xfffffffc) == 0x200c) || (uVar1 - 0x202a < 5)) || (uVar1 - 0x2066 < 4))
            {
              iVar7 = iVar7 + 1;
            }
            uVar11 = uVar8;
          } while ((iVar7 + param_2 != uVar8) &&
                  (uVar8 = uVar8 + 1, uVar11 = iVar7 + param_2, uVar13 != uVar8));
          goto LAB_00101416;
        }
      }
      uVar11 = param_2 + iVar7;
    }
  }
  else {
    puVar6 = puVar3 + 1;
    iVar7 = 0;
    uVar11 = 0;
    while( true ) {
      uVar14 = *puVar6;
      if ((puVar6[1] & 5) != 0) {
        if ((int)param_2 <= (int)(uVar11 + iVar7)) {
          return 0xffffffff;
        }
        iVar7 = iVar7 + 1;
      }
      uVar11 = uVar14 + iVar7;
      if ((int)param_2 < (int)uVar11) break;
      if ((puVar6[1] & 10) != 0) {
        if (uVar11 == param_2) {
          return 0xffffffff;
        }
        iVar7 = iVar7 + 1;
      }
      puVar6 = puVar6 + 3;
      uVar11 = uVar14;
    }
    uVar11 = param_2 - iVar7;
  }
LAB_00101416:
  if ((int)param_1[0x25] < 0xb) {
    uVar8 = puVar3[1];
    lVar9 = 0xc;
    if ((int)uVar11 < (int)uVar8) {
      uVar14 = *puVar3;
      if (-1 < (int)uVar14) {
        return uVar14 + uVar11;
      }
      goto LAB_00101539;
    }
    do {
      lVar10 = lVar9;
      lVar9 = lVar10 + 0xc;
    } while (*(int *)((long)puVar3 + lVar10 + 4) <= (int)uVar11);
    uVar14 = *(uint *)((long)puVar3 + lVar10);
    puVar6 = (uint *)((long)puVar3 + lVar10);
    if ((int)uVar14 < 0) goto LAB_00101536;
  }
  else {
    iVar7 = 0;
    iVar15 = (int)param_1[0x25];
    do {
      while( true ) {
        iVar16 = iVar7 + iVar15;
        iVar5 = iVar16 / 2;
        lVar9 = (long)iVar5;
        lVar10 = lVar9 * 0xc;
        puVar6 = puVar3 + lVar9 * 3;
        if ((int)uVar11 < (int)puVar6[1]) break;
        iVar7 = iVar5 + 1;
      }
      if (iVar5 == 0) {
        uVar14 = *puVar3;
        puVar6 = puVar3;
        if (-1 < (int)uVar14) goto LAB_00101459;
        goto LAB_00101536;
      }
      iVar15 = iVar5;
    } while ((int)uVar11 < (int)puVar3[lVar9 * 3 + -2]);
    uVar14 = *puVar6;
    if ((int)uVar14 < 0) {
LAB_00101536:
      uVar8 = puVar6[1];
LAB_00101539:
      return (uVar8 - uVar11) + -1 + (uVar14 & 0x7fffffff);
    }
    if (iVar16 < 2) goto LAB_00101459;
  }
  uVar11 = uVar11 - *(int *)((long)puVar3 + lVar10 + -8);
LAB_00101459:
  return uVar14 + uVar11;
}



void ubidi_getLogicalMap_76_godot(long param_1,void *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if ((*param_3 < 1) && (ubidi_countRuns_76_godot(param_1,param_3), *param_3 < 1)) {
    if (param_2 == (void *)0x0) {
      *param_3 = 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x14);
      puVar11 = *(uint **)(param_1 + 0x130);
      if (0 < iVar9) {
        if (*(int *)(param_1 + 0x18) < iVar9) {
          memset(param_2,0xff,(long)iVar9 * 4);
        }
        if (0 < *(int *)(param_1 + 0x128)) {
          iVar15 = 0;
          iVar9 = 0;
          puVar14 = puVar11;
          do {
            uVar12 = puVar14[1];
            uVar4 = *puVar14 & 0x7fffffff;
            if ((int)*puVar14 < 0) {
              piVar8 = (int *)((long)param_2 + (long)(int)(uVar4 + (uVar12 - iVar9)) * 4);
              iVar6 = iVar9;
              do {
                iVar5 = iVar6 + 1;
                piVar8 = piVar8 + -1;
                *piVar8 = iVar6;
                iVar6 = iVar5;
              } while (iVar5 < (int)uVar12);
            }
            else {
              piVar8 = (int *)((long)param_2 + (ulong)uVar4 * 4);
              iVar6 = iVar9;
              do {
                iVar5 = iVar6 + 1;
                *piVar8 = iVar6;
                piVar8 = piVar8 + 1;
                iVar6 = iVar5;
              } while (iVar5 < (int)uVar12);
            }
            iVar6 = (uVar12 - iVar9) + -1;
            if ((int)uVar12 <= iVar9) {
              iVar6 = 0;
            }
            iVar15 = iVar15 + 1;
            puVar14 = puVar14 + 3;
            iVar9 = iVar9 + 1 + iVar6;
            iVar6 = *(int *)(param_1 + 0x128);
          } while (iVar15 < iVar6);
          if (*(int *)(param_1 + 0x1a4) < 1) {
            if ((0 < *(int *)(param_1 + 0x1b8)) && (0 < iVar6)) {
              uVar4 = 0;
              puVar14 = puVar11 + (long)iVar6 * 3;
              uVar12 = 0;
              do {
                uVar2 = puVar11[1];
                uVar12 = uVar2 - uVar12;
                if (puVar11[2] != uVar4) {
                  uVar7 = *puVar11;
                  uVar10 = uVar7 & 0x7fffffff;
                  uVar13 = uVar10 + uVar12;
                  if (puVar11[2] == 0) {
                    if ((int)uVar10 < (int)uVar13) {
                      piVar8 = (int *)((long)param_2 + (ulong)uVar10 * 4);
                      do {
                        *piVar8 = *piVar8 - uVar4;
                        piVar8 = piVar8 + 1;
                      } while ((int *)((long)param_2 + ((ulong)uVar12 + (ulong)uVar10) * 4) !=
                               piVar8);
                    }
                  }
                  else if (0 < (int)uVar12) {
                    lVar3 = *(long *)(param_1 + 8);
                    iVar9 = (uVar10 - 1) + uVar13;
                    do {
                      uVar13 = uVar13 - 1;
                      uVar12 = iVar9 - uVar13;
                      if ((int)uVar7 < 0) {
                        uVar12 = uVar13;
                      }
                      piVar8 = (int *)((long)param_2 + (long)(int)uVar12 * 4);
                      uVar1 = *(ushort *)(lVar3 + (long)(int)uVar12 * 2);
                      if ((((uVar1 & 0xfffffffc) == 0x200c) || (uVar1 - 0x202a < 5)) ||
                         (uVar1 - 0x2066 < 4)) {
                        uVar4 = uVar4 + 1;
                        iVar15 = -1;
                      }
                      else {
                        iVar15 = *piVar8 - uVar4;
                      }
                      *piVar8 = iVar15;
                    } while (uVar10 != uVar13);
                  }
                }
                puVar11 = puVar11 + 3;
                uVar12 = uVar2;
              } while (puVar11 != puVar14);
            }
          }
          else if (0 < iVar6) {
            iVar9 = 0;
            puVar14 = puVar11 + (long)iVar6 * 3;
            uVar12 = 0;
            do {
              uVar4 = puVar11[2];
              uVar2 = puVar11[1];
              iVar9 = (iVar9 + 1) - (uint)((uVar4 & 5) == 0);
              if (0 < iVar9) {
                uVar12 = uVar2 - uVar12;
                uVar7 = *puVar11 & 0x7fffffff;
                if ((int)uVar7 < (int)(uVar7 + uVar12)) {
                  piVar8 = (int *)((long)param_2 + (long)(int)uVar7 * 4);
                  do {
                    *piVar8 = *piVar8 + iVar9;
                    piVar8 = piVar8 + 1;
                  } while ((int *)((long)param_2 + ((ulong)uVar12 + (long)(int)uVar7) * 4) != piVar8
                          );
                }
              }
              iVar9 = (iVar9 + 1) - (uint)((uVar4 & 10) == 0);
              puVar11 = puVar11 + 3;
              uVar12 = uVar2;
            } while (puVar11 != puVar14);
          }
        }
      }
    }
  }
  return;
}



void ubidi_getVisualMap_76_godot(long param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if (*param_3 < 1) {
    if (param_2 == (uint *)0x0) {
      *param_3 = 1;
      return;
    }
    ubidi_countRuns_76_godot(param_1,param_3);
    if ((*param_3 < 1) && (0 < *(int *)(param_1 + 0x18))) {
      iVar13 = *(int *)(param_1 + 0x128);
      iVar12 = 0;
      puVar17 = *(uint **)(param_1 + 0x130);
      puVar16 = param_2;
      for (puVar11 = puVar17; puVar11 < puVar17 + (long)iVar13 * 3; puVar11 = puVar11 + 3) {
        uVar5 = *puVar11;
        uVar7 = puVar11[1];
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 & 0x7fffffff) + (uVar7 - iVar12);
          iVar15 = uVar5 + iVar12;
          puVar8 = puVar16;
          do {
            uVar5 = uVar5 - 1;
            *puVar8 = uVar5;
            puVar8 = puVar8 + 1;
          } while ((int)(iVar15 - uVar5) < (int)uVar7);
        }
        else {
          puVar8 = puVar16;
          uVar3 = uVar5;
          do {
            uVar4 = uVar3 + 1;
            *puVar8 = uVar3;
            puVar8 = puVar8 + 1;
            uVar3 = uVar4;
          } while ((int)((iVar12 - uVar5) + uVar4) < (int)uVar7);
        }
        uVar5 = (uVar7 - iVar12) - 1;
        lVar6 = (ulong)uVar5 * 4 + 4;
        if ((int)uVar7 <= iVar12) {
          lVar6 = 4;
        }
        puVar16 = (uint *)((long)puVar16 + lVar6);
        if ((int)uVar7 <= iVar12) {
          uVar5 = 0;
        }
        iVar12 = iVar12 + 1 + uVar5;
      }
      if (*(int *)(param_1 + 0x1a4) < 1) {
        if ((0 < *(int *)(param_1 + 0x1b8)) && (0 < *(int *)(param_1 + 0x128))) {
          uVar7 = 0;
          puVar11 = puVar17 + (long)*(int *)(param_1 + 0x128) * 3;
          uVar5 = 0;
          do {
            uVar3 = puVar17[1];
            iVar12 = uVar3 - uVar5;
            if (puVar17[2] == 0) {
              if (uVar5 == uVar7) {
                uVar7 = uVar7 + iVar12;
              }
              else if ((int)uVar5 < (int)uVar3) {
                lVar6 = (long)(int)uVar5;
                puVar16 = param_2 + lVar6;
                do {
                  puVar16[(int)uVar7 - lVar6] = *puVar16;
                  puVar16 = puVar16 + 1;
                } while (puVar16 != param_2 + (ulong)(uVar3 - uVar5) + lVar6);
                uVar7 = (uVar7 - uVar5) + uVar3;
              }
            }
            else {
              uVar5 = *puVar17;
              uVar4 = uVar5 & 0x7fffffff;
              if (0 < iVar12) {
                uVar14 = iVar12 + uVar4;
                lVar6 = *(long *)(param_1 + 8);
                iVar12 = uVar4 - 1;
                do {
                  uVar10 = (iVar12 + uVar14) - uVar4;
                  if (-1 < (int)uVar5) {
                    uVar10 = uVar4;
                  }
                  uVar1 = *(ushort *)(lVar6 + (long)(int)uVar10 * 2);
                  if ((((uVar1 & 0xfffffffc) != 0x200c) && (4 < uVar1 - 0x202a)) &&
                     (3 < uVar1 - 0x2066)) {
                    lVar9 = (long)(int)uVar7;
                    uVar7 = uVar7 + 1;
                    param_2[lVar9] = uVar10;
                  }
                  uVar4 = uVar4 + 1;
                } while (uVar4 != uVar14);
              }
            }
            puVar17 = puVar17 + 3;
            uVar5 = uVar3;
          } while (puVar17 != puVar11);
        }
      }
      else {
        iVar12 = *(int *)(param_1 + 0x128);
        if (0 < iVar12) {
          puVar11 = puVar17 + 2;
          iVar13 = 0;
          puVar16 = puVar11 + (long)iVar12 * 3;
          do {
            iVar13 = ((iVar13 - (uint)((*puVar11 & 5) == 0)) + 2) - (uint)((*puVar11 & 10) == 0);
            puVar11 = puVar11 + 3;
          } while (puVar16 != puVar11);
          iVar15 = *(int *)(param_1 + 0x18);
          iVar18 = iVar12 + -1;
          if (0 < iVar13) {
            puVar17 = puVar17 + (long)iVar12 * 3 + -5;
            do {
              uVar5 = puVar17[4];
              if ((uVar5 & 10) != 0) {
                iVar15 = iVar15 + -1;
                iVar13 = iVar13 + -1;
                param_2[iVar15] = 0xffffffff;
              }
              uVar7 = 0;
              if (iVar18 != 0) {
                uVar7 = *puVar17;
              }
              uVar3 = puVar17[3];
              bVar2 = 0 < iVar13;
              iVar12 = uVar3 - 1;
              if (((int)uVar7 <= iVar12) && (bVar2)) {
                lVar6 = (long)iVar12;
                do {
                  param_2[((long)iVar15 - (long)(int)uVar3) + lVar6] = param_2[lVar6];
                  lVar6 = lVar6 + -1;
                } while ((int)uVar7 <= (int)lVar6);
                iVar12 = uVar7 - iVar12;
                if ((int)uVar3 <= (int)uVar7) {
                  iVar12 = 0;
                }
                iVar15 = iVar15 + -1 + iVar12;
              }
              if ((uVar5 & 5) != 0) {
                iVar15 = iVar15 + -1;
                iVar13 = iVar13 + -1;
                param_2[iVar15] = 0xffffffff;
                bVar2 = 0 < iVar13;
              }
              puVar17 = puVar17 + -3;
              iVar18 = iVar18 + -1;
            } while ((-1 < iVar18) && (bVar2));
          }
        }
      }
    }
  }
  return;
}



void ubidi_invertMap_76_godot(ulong param_1,void *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((param_2 != (void *)0x0 && 0 < param_3) && (param_1 != 0)) {
    uVar5 = param_1 + (long)param_3 * 4;
    if (param_1 < uVar5) {
      iVar6 = 0;
      uVar4 = 0xffffffff;
      uVar3 = uVar5;
      do {
        uVar2 = *(uint *)(uVar3 - 4);
        uVar3 = uVar3 - 4;
        if ((int)uVar4 < (int)uVar2) {
          uVar4 = uVar2;
        }
        iVar6 = iVar6 + (uint)(uVar2 < 0x80000000);
      } while (param_1 < uVar3);
      if (iVar6 < (int)(uVar4 + 1)) {
        param_2 = memset(param_2,0xff,(long)(int)(uVar4 + 1) * 4);
      }
    }
    do {
      piVar1 = (int *)(uVar5 - 4);
      uVar5 = uVar5 - 4;
      param_3 = param_3 + -1;
      if (-1 < *piVar1) {
        *(int *)((long)param_2 + (long)*piVar1 * 4) = param_3;
      }
    } while (param_3 != 0);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ubidi_getRuns_76_godot_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



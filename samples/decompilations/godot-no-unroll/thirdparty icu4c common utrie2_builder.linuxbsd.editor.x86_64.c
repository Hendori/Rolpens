
/* allocIndex2Block(UNewTrie2*) */

int allocIndex2Block(UNewTrie2 *param_1)

{
  UNewTrie2 *pUVar1;
  UNewTrie2 *pUVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x23310);
  if (iVar4 + 0x40 < 0x8aa1) {
    *(int *)(param_1 + 0x23310) = iVar4 + 0x40;
    pUVar1 = param_1 + (long)iVar4 * 4 + 0x880;
    pUVar2 = param_1 + (long)*(int *)(param_1 + 0x23320) * 4 + 0x880;
    uVar3 = *(undefined8 *)(pUVar2 + 8);
    *(undefined8 *)pUVar1 = *(undefined8 *)pUVar2;
    *(undefined8 *)(pUVar1 + 8) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x18);
    *(undefined8 *)(pUVar1 + 0x10) = *(undefined8 *)(pUVar2 + 0x10);
    *(undefined8 *)(pUVar1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x28);
    *(undefined8 *)(pUVar1 + 0x20) = *(undefined8 *)(pUVar2 + 0x20);
    *(undefined8 *)(pUVar1 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x38);
    *(undefined8 *)(pUVar1 + 0x30) = *(undefined8 *)(pUVar2 + 0x30);
    *(undefined8 *)(pUVar1 + 0x38) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x48);
    *(undefined8 *)(pUVar1 + 0x40) = *(undefined8 *)(pUVar2 + 0x40);
    *(undefined8 *)(pUVar1 + 0x48) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x58);
    *(undefined8 *)(pUVar1 + 0x50) = *(undefined8 *)(pUVar2 + 0x50);
    *(undefined8 *)(pUVar1 + 0x58) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x68);
    *(undefined8 *)(pUVar1 + 0x60) = *(undefined8 *)(pUVar2 + 0x60);
    *(undefined8 *)(pUVar1 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x78);
    *(undefined8 *)(pUVar1 + 0x70) = *(undefined8 *)(pUVar2 + 0x70);
    *(undefined8 *)(pUVar1 + 0x78) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x88);
    *(undefined8 *)(pUVar1 + 0x80) = *(undefined8 *)(pUVar2 + 0x80);
    *(undefined8 *)(pUVar1 + 0x88) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0x98);
    *(undefined8 *)(pUVar1 + 0x90) = *(undefined8 *)(pUVar2 + 0x90);
    *(undefined8 *)(pUVar1 + 0x98) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0xa8);
    *(undefined8 *)(pUVar1 + 0xa0) = *(undefined8 *)(pUVar2 + 0xa0);
    *(undefined8 *)(pUVar1 + 0xa8) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0xb8);
    *(undefined8 *)(pUVar1 + 0xb0) = *(undefined8 *)(pUVar2 + 0xb0);
    *(undefined8 *)(pUVar1 + 0xb8) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 200);
    *(undefined8 *)(pUVar1 + 0xc0) = *(undefined8 *)(pUVar2 + 0xc0);
    *(undefined8 *)(pUVar1 + 200) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0xd8);
    *(undefined8 *)(pUVar1 + 0xd0) = *(undefined8 *)(pUVar2 + 0xd0);
    *(undefined8 *)(pUVar1 + 0xd8) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0xe8);
    *(undefined8 *)(pUVar1 + 0xe0) = *(undefined8 *)(pUVar2 + 0xe0);
    *(undefined8 *)(pUVar1 + 0xe8) = uVar3;
    uVar3 = *(undefined8 *)(pUVar2 + 0xf8);
    *(undefined8 *)(pUVar1 + 0xf0) = *(undefined8 *)(pUVar2 + 0xf0);
    *(undefined8 *)(pUVar1 + 0xf8) = uVar3;
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}



/* getDataBlock(UNewTrie2*, int, signed char) */

int getDataBlock(UNewTrie2 *param_1,uint param_2,char param_3)

{
  UNewTrie2 *pUVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined4 local_3c;
  
  if (((param_2 & 0xfffffc00) == 0xd800) && (param_3 != '\0')) {
    iVar10 = 0x800;
  }
  else {
    lVar11 = (long)((int)param_2 >> 0xb);
    iVar10 = *(int *)(param_1 + lVar11 * 4);
    if (iVar10 == *(int *)(param_1 + 0x23320)) {
      iVar10 = allocIndex2Block(param_1);
      if (iVar10 < 0) {
        return -1;
      }
      *(int *)(param_1 + lVar11 * 4) = iVar10;
    }
    else if (iVar10 < 0) {
      return -1;
    }
  }
  iVar10 = ((int)param_2 >> 5 & 0x3fU) + iVar10;
  iVar4 = *(int *)(param_1 + (long)iVar10 * 4 + 0x880);
  if ((iVar4 != *(int *)(param_1 + 0x23324)) &&
     (*(int *)(param_1 + (long)(iVar4 >> 5) * 4 + 0x23330) == 1)) {
    return iVar4;
  }
  iVar9 = *(int *)(param_1 + 0x2331c);
  if (iVar9 == 0) {
    iVar9 = *(int *)(param_1 + 0x23318);
    iVar6 = *(int *)(param_1 + 0x23314);
    if (iVar6 < iVar9 + 0x20) {
      if (iVar6 < 0x20000) {
        local_3c = 0x20000;
        uVar8 = 0x80000;
      }
      else {
        if (0x11047f < iVar6) {
          return -1;
        }
        local_3c = 0x110480;
        uVar8 = 0x441200;
      }
      lVar11 = uprv_malloc_76_godot(uVar8);
      if (lVar11 == 0) {
        return -1;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x23300);
      __memcpy_chk(lVar11,uVar5,(long)*(int *)(param_1 + 0x23318) << 2,uVar8);
      uprv_free_76_godot(uVar5);
      *(long *)(param_1 + 0x23300) = lVar11;
      *(undefined4 *)(param_1 + 0x23314) = local_3c;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x23300);
    }
    *(int *)(param_1 + 0x23318) = iVar9 + 0x20;
    lVar7 = (long)(iVar9 >> 5);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x23300);
    lVar7 = (long)(iVar9 >> 5);
    *(int *)(param_1 + 0x2331c) = -*(int *)(param_1 + lVar7 * 4 + 0x23330);
  }
  puVar2 = (undefined8 *)(lVar11 + (long)iVar4 * 4);
  uVar8 = puVar2[1];
  puVar3 = (undefined8 *)(lVar11 + (long)iVar9 * 4);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  uVar8 = puVar2[3];
  puVar3[2] = puVar2[2];
  puVar3[3] = uVar8;
  uVar8 = puVar2[5];
  puVar3[4] = puVar2[4];
  puVar3[5] = uVar8;
  uVar8 = puVar2[7];
  puVar3[6] = puVar2[6];
  puVar3[7] = uVar8;
  uVar8 = puVar2[9];
  puVar3[8] = puVar2[8];
  puVar3[9] = uVar8;
  uVar8 = puVar2[0xb];
  puVar3[10] = puVar2[10];
  puVar3[0xb] = uVar8;
  uVar8 = puVar2[0xd];
  puVar3[0xc] = puVar2[0xc];
  puVar3[0xd] = uVar8;
  uVar8 = puVar2[0xf];
  puVar3[0xe] = puVar2[0xe];
  puVar3[0xf] = uVar8;
  if (iVar9 < 0) {
    *(undefined4 *)(param_1 + lVar7 * 4 + 0x23330) = 0;
    return -1;
  }
  *(undefined4 *)(param_1 + lVar7 * 4 + 0x23330) = 1;
  iVar4 = *(int *)(param_1 + (long)iVar10 * 4 + 0x880);
  iVar6 = iVar4 >> 5;
  pUVar1 = param_1 + (long)iVar6 * 4 + 0x23330;
  *(int *)pUVar1 = *(int *)pUVar1 + -1;
  if (*(int *)pUVar1 == 0) {
    *(int *)(param_1 + (long)iVar6 * 4 + 0x23330) = -*(int *)(param_1 + 0x2331c);
    *(int *)(param_1 + 0x2331c) = iVar4;
  }
  *(int *)(param_1 + (long)iVar10 * 4 + 0x880) = iVar9;
  return iVar9;
}



void utrie2_setRange32_76_godot_part_0_isra_0
               (UNewTrie2 *param_1,ulong param_2,int param_3,int param_4,char param_5,
               undefined4 *param_6)

{
  UNewTrie2 *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint local_3c;
  
  if ((param_1 == (UNewTrie2 *)0x0) || (param_1[0x2332c] != (UNewTrie2)0x0)) {
    *param_6 = 0x1e;
    return;
  }
  uVar16 = (uint)param_2;
  if (param_5 != '\0') {
    if ((param_2 & 0x1f) != 0) goto LAB_00100728;
    goto LAB_0010051f;
  }
  if (*(int *)(param_1 + 0x23308) == param_4) {
    return;
  }
  if ((param_2 & 0x1f) == 0) {
    uVar15 = 0xffffffff;
    uVar16 = param_3 + 1U & 0xffffffe0;
    local_3c = param_3 + 1U & 0x1f;
  }
  else {
LAB_00100728:
    iVar6 = getDataBlock(param_1,param_2,1);
    if (iVar6 < 0) goto LAB_001007fa;
    uVar12 = uVar16 + 0x1f & 0xffffffe0;
    param_2 = (ulong)uVar12;
    iVar13 = *(int *)(param_1 + 0x23308);
    lVar11 = *(long *)(param_1 + 0x23300) + (long)iVar6 * 4;
    piVar8 = (int *)(lVar11 + (long)(int)(uVar16 & 0x1f) * 4);
    if ((int)(param_3 + 1U) < (int)uVar12) {
      piVar9 = (int *)(lVar11 + (ulong)(param_3 + 1U & 0x1f) * 4);
      if (param_5 != '\0') {
        for (; piVar8 < piVar9; piVar8 = piVar8 + 1) {
          *piVar8 = param_4;
        }
        return;
      }
      for (; piVar8 < piVar9; piVar8 = piVar8 + 1) {
        if (*piVar8 == iVar13) {
          *piVar8 = param_4;
        }
      }
      return;
    }
    piVar9 = (int *)(lVar11 + 0x80);
    if (param_5 == '\0') {
      if (piVar8 < piVar9) {
        do {
          if (*piVar8 == iVar13) {
            *piVar8 = param_4;
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 < piVar9);
LAB_0010051f:
        iVar13 = *(int *)(param_1 + 0x23308);
      }
    }
    else if (piVar8 < piVar9) {
      do {
        piVar10 = piVar8 + 1;
        *piVar8 = param_4;
        piVar8 = piVar10;
      } while (piVar10 < piVar9);
      goto LAB_0010051f;
    }
    uVar15 = 0xffffffff;
    uVar16 = param_3 + 1U & 0xffffffe0;
    local_3c = param_3 + 1U & 0x1f;
    if (param_4 == iVar13) {
      uVar15 = (ulong)*(uint *)(param_1 + 0x23324);
    }
  }
  if ((int)param_2 < (int)uVar16) {
    uVar12 = (int)param_2 + 0x20;
    do {
      while( true ) {
        uVar5 = uVar12 - 0x20;
        uVar14 = (ulong)uVar5;
        uVar4 = (int)uVar5 >> 5;
        iVar6 = (int)uVar5 >> 0xb;
        if (param_4 != *(int *)(param_1 + 0x23308)) break;
        iVar13 = *(int *)(param_1 + 0x23324);
        if ((uVar5 & 0xfffffc00) == 0xd800) {
          if (*(int *)(param_1 + (long)(int)(uVar4 + 0x140) * 4 + 0x880) != iVar13)
          goto LAB_001005e5;
        }
        else {
          iVar3 = *(int *)(param_1 + (long)iVar6 * 4);
          if (*(int *)(param_1 + (long)(int)((uVar4 & 0x3f) + iVar3) * 4 + 0x880) != iVar13) {
            if (*(int *)(param_1 + 0x23320) != iVar3) goto LAB_00100433;
LAB_001004dc:
            lVar7 = (long)iVar6;
            iVar3 = allocIndex2Block(param_1);
            if (iVar3 < 0) {
LAB_001006d8:
              *param_6 = 5;
              return;
            }
            lVar11 = (long)*(int *)(param_1 + 0x23324);
            *(int *)(param_1 + lVar7 * 4) = iVar3;
            uVar4 = (int)uVar14 >> 5;
            goto LAB_00100448;
          }
        }
LAB_0010048e:
        param_2 = (ulong)uVar12;
        bVar2 = (int)uVar16 <= (int)uVar12;
        uVar12 = uVar12 + 0x20;
        if (bVar2) goto LAB_001005ba;
      }
      if ((uVar5 & 0xfffffc00) == 0xd800) {
        iVar13 = *(int *)(param_1 + 0x23324);
LAB_001005e5:
        lVar11 = (long)iVar13;
        iVar3 = 0x800;
      }
      else {
        iVar3 = *(int *)(param_1 + (long)iVar6 * 4);
        if (*(int *)(param_1 + 0x23320) == iVar3) goto LAB_001004dc;
LAB_00100433:
        if (iVar3 < 0) goto LAB_001006d8;
        lVar11 = (long)*(int *)(param_1 + 0x23324);
      }
LAB_00100448:
      lVar7 = (long)(int)((uVar4 & 0x3f) + iVar3);
      iVar6 = *(int *)(param_1 + lVar7 * 4 + 0x880);
      iVar13 = iVar6 >> 5;
      if (iVar6 == (int)lVar11) {
        if (param_4 != *(int *)(*(long *)(param_1 + 0x23300) + lVar11 * 4)) goto LAB_00100561;
        goto LAB_0010048e;
      }
      if (*(int *)(param_1 + (long)iVar13 * 4 + 0x23330) == 1) {
        if ((param_5 != '\0') && (0x87f < iVar6)) goto LAB_00100561;
        iVar13 = *(int *)(param_1 + 0x23308);
        piVar8 = (int *)(*(long *)(param_1 + 0x23300) + (long)iVar6 * 4);
        if (param_5 == '\0') {
          piVar9 = piVar8 + 0x20;
          do {
            if (iVar13 == *piVar8) {
              *piVar8 = param_4;
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 != piVar9);
        }
        else {
          piVar9 = piVar8 + 0x20;
          do {
            *piVar8 = param_4;
            piVar8[1] = param_4;
            piVar8[2] = param_4;
            piVar8[3] = param_4;
            piVar8 = piVar8 + 4;
          } while (piVar9 != piVar8);
        }
        goto LAB_0010048e;
      }
      if ((param_4 == *(int *)(*(long *)(param_1 + 0x23300) + (long)iVar6 * 4)) || (param_5 == '\0')
         ) goto LAB_0010048e;
LAB_00100561:
      iVar3 = (int)uVar15;
      if (iVar3 < 0) {
        uVar5 = getDataBlock(param_1,uVar14 & 0xffffffff,1);
        uVar15 = (ulong)uVar5;
        if (-1 < (int)uVar5) {
          piVar9 = (int *)(*(long *)(param_1 + 0x23300) + (long)(int)uVar5 * 4);
          piVar8 = piVar9 + 0x20;
          do {
            *piVar9 = param_4;
            piVar9[1] = param_4;
            piVar9[2] = param_4;
            piVar9[3] = param_4;
            piVar9 = piVar9 + 4;
          } while (piVar8 != piVar9);
          goto LAB_0010048e;
        }
        goto LAB_001007fa;
      }
      *(int *)(param_1 + (long)(iVar3 >> 5) * 4 + 0x23330) =
           *(int *)(param_1 + (long)(iVar3 >> 5) * 4 + 0x23330) + 1;
      pUVar1 = param_1 + (long)iVar13 * 4 + 0x23330;
      *(int *)pUVar1 = *(int *)pUVar1 + -1;
      if (*(int *)pUVar1 == 0) {
        *(int *)(param_1 + (long)iVar13 * 4 + 0x23330) = -*(int *)(param_1 + 0x2331c);
        *(int *)(param_1 + 0x2331c) = iVar6;
      }
      param_2 = (ulong)uVar12;
      *(int *)(param_1 + lVar7 * 4 + 0x880) = iVar3;
      bVar2 = (int)uVar12 < (int)uVar16;
      uVar12 = uVar12 + 0x20;
    } while (bVar2);
  }
LAB_001005ba:
  if (local_3c == 0) {
    return;
  }
  iVar6 = getDataBlock(param_1,param_2,1);
  if (-1 < iVar6) {
    iVar13 = *(int *)(param_1 + 0x23308);
    piVar8 = (int *)(*(long *)(param_1 + 0x23300) + (long)iVar6 * 4);
    piVar9 = piVar8 + (int)local_3c;
    if (param_5 != '\0') {
      for (; piVar8 < piVar9; piVar8 = piVar8 + 1) {
        *piVar8 = param_4;
      }
      return;
    }
    for (; piVar8 < piVar9; piVar8 = piVar8 + 1) {
      if (iVar13 == *piVar8) {
        *piVar8 = param_4;
      }
    }
    return;
  }
LAB_001007fa:
  *param_6 = 7;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100fe1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void utrie2_freeze_76_godot_part_0(undefined8 *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  short sVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined4 *puVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  ushort local_5c;
  
  piVar2 = (int *)param_1[9];
  if (piVar2 == (int *)0x0) {
    if ((param_1[1] == 0) == param_2) {
      return;
    }
    *param_3 = 1;
    return;
  }
  if ((char)piVar2[0x8ccb] == '\0') {
    iVar7 = utrie2_get32_76_godot(param_1,0x10ffff);
    iVar18 = piVar2[0x8cc2];
    iVar10 = piVar2[0x8cc8];
    lVar20 = *(long *)(piVar2 + 0x8cc0);
    piVar16 = piVar2 + 0x21f;
    iVar8 = 0x110000;
    iVar9 = -1;
    iVar25 = -1;
    if (iVar7 == iVar18) {
      iVar9 = piVar2[0x8cc9];
      iVar25 = iVar10;
    }
    do {
      iVar30 = *piVar16;
      if (iVar30 == iVar25) {
        iVar8 = iVar8 + -0x800;
      }
      else if (iVar10 == iVar30) {
        if (iVar7 != iVar18) {
LAB_00100d72:
          iVar18 = *param_3;
          uVar22 = iVar8 + 0x7ffU & 0xfffff800;
          if (uVar22 != 0x110000) {
            piVar2[0x8cca] = uVar22;
            *(uint *)((long)param_1 + 0x2c) = uVar22;
            if (0x10ffff < (int)uVar22) goto LAB_00100dea;
            goto LAB_00100d9f;
          }
          iVar7 = *(int *)(param_1 + 5);
          piVar2[0x8cca] = 0x110000;
          *(undefined4 *)((long)param_1 + 0x2c) = 0x110000;
          goto LAB_00100dea;
        }
        iVar8 = iVar8 + -0x800;
        iVar25 = iVar10;
      }
      else {
        piVar17 = piVar2 + iVar30;
        iVar19 = iVar9;
        do {
          iVar9 = piVar17[0x25f];
          if (iVar9 == iVar19) {
LAB_00100d35:
            iVar8 = iVar8 + -0x20;
          }
          else {
            if (piVar2[0x8cc9] == iVar9) {
              if (iVar7 == iVar18) goto LAB_00100d35;
              goto LAB_00100d72;
            }
            iVar25 = iVar8 + -0x20;
            lVar31 = lVar20 + (long)iVar9 * 4;
            do {
              if (iVar7 != *(int *)(lVar31 + 0x7c)) goto LAB_00100d72;
              iVar8 = iVar8 + -1;
              lVar31 = lVar31 + -4;
            } while (iVar25 != iVar8);
          }
          piVar17 = piVar17 + -1;
          iVar19 = iVar9;
          iVar25 = iVar30;
        } while (piVar17 != piVar2 + (long)iVar30 + -0x40);
      }
      piVar16 = piVar16 + -1;
    } while (0 < iVar8);
    iVar18 = *param_3;
    uVar22 = 0;
    piVar2[0x8cca] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
LAB_00100d9f:
    if (0 < iVar18) {
      return;
    }
    uVar26 = 0x10000;
    if (0xffff < (int)uVar22) {
      uVar26 = uVar22;
    }
    utrie2_setRange32_76_godot_part_0_isra_0
              (param_1[9],uVar26,0x10ffff,*(undefined4 *)((long)param_1 + 0x24),1);
    iVar18 = *param_3;
    if (0 < iVar18) {
      return;
    }
    lVar20 = *(long *)(piVar2 + 0x8cc0);
LAB_00100dea:
    uVar5 = _UNK_00101f58;
    uVar4 = __LC0;
    *(undefined8 *)(piVar2 + 0x8cd0) = _LC1;
    *(undefined8 *)(piVar2 + 0x8ccc) = uVar4;
    *(undefined8 *)(piVar2 + 0x8cce) = uVar5;
    if (piVar2[0x8cc6] < 0xc1) {
      iVar9 = piVar2[0x8cc9];
      lVar31 = 0x300;
      iVar25 = 0xc1;
      iVar10 = piVar2[0x8cc4];
      iVar8 = 0xc0;
      iVar30 = piVar2[(long)(iVar9 >> 5) + 0x8ccc];
      if (0 < iVar10) {
LAB_00100f83:
        iVar30 = 0;
        do {
          if (iVar30 == 0x820) {
            iVar30 = 0xa61;
            lVar24 = 0xa60;
          }
          else {
            lVar24 = (long)iVar30;
            iVar30 = iVar30 + 1;
          }
          piVar2[lVar24 + 0x220] = piVar2[(long)(piVar2[lVar24 + 0x220] >> 5) + 0x8ccc];
        } while (iVar30 < iVar10);
        goto LAB_0010110d;
      }
    }
    else {
      iVar10 = 2;
      lVar31 = 0x40;
      iVar9 = 0xc0;
      iVar25 = 0xc0;
      do {
        iVar8 = iVar25;
        if (iVar8 == 0x880) {
          iVar10 = 1;
          lVar31 = 0x20;
        }
        lVar24 = (long)(iVar8 >> 5);
        iVar30 = (int)lVar31;
        if (piVar2[lVar24 + 0x8ccc] < 1) {
LAB_00100f39:
          iVar25 = iVar8 + iVar30;
          iVar8 = iVar9;
        }
        else {
          if (-1 < iVar9 - iVar30) {
            if (iVar30 == 0) {
              iVar25 = 0;
LAB_00100f10:
              if (iVar10 != 0) {
                piVar16 = piVar2 + lVar24;
                iVar19 = iVar10 * 0x20 + iVar25;
                do {
                  piVar16[0x8ccc] = iVar25;
                  iVar25 = iVar25 + 0x20;
                  piVar16 = piVar16 + 1;
                } while (iVar19 != iVar25);
              }
              goto LAB_00100f39;
            }
            iVar25 = 0;
            lVar29 = lVar20;
            do {
              lVar15 = 0;
              while (*(int *)(lVar29 + lVar15 * 4) ==
                     *(int *)(lVar20 + (long)iVar8 * 4 + lVar15 * 4)) {
                lVar15 = lVar15 + 1;
                if (lVar31 == lVar15) goto LAB_00100f10;
              }
              iVar25 = iVar25 + 4;
              lVar29 = lVar29 + 0x10;
            } while (iVar25 <= iVar9 - iVar30);
          }
          uVar26 = iVar30 - 4;
          if (0 < (int)uVar26) {
            lVar29 = lVar20 + ((long)iVar9 - (long)(int)uVar26) * 4;
            uVar27 = uVar26;
            do {
              uVar32 = 0;
              while (*(int *)(lVar29 + uVar32 * 4) ==
                     *(int *)(lVar20 + (long)iVar8 * 4 + uVar32 * 4)) {
                uVar32 = uVar32 + 1;
                uVar26 = uVar27;
                if (uVar32 == uVar27) goto LAB_00101098;
              }
              uVar27 = uVar27 - 4;
              lVar29 = lVar29 + 0x10;
              uVar26 = 0;
            } while (uVar27 != 0);
          }
          if (((int)uVar26 < 1) && (iVar8 <= iVar9)) {
            iVar25 = iVar8;
            if (iVar10 != 0) {
              piVar16 = piVar2 + lVar24;
              iVar9 = iVar8;
              do {
                piVar16[0x8ccc] = iVar9;
                iVar9 = iVar9 + 0x20;
                piVar16 = piVar16 + 1;
              } while (iVar9 != iVar10 * 0x20 + iVar8);
              iVar8 = iVar8 + iVar10 * 0x20;
              iVar25 = iVar8;
            }
          }
          else {
LAB_00101098:
            iVar25 = iVar9 - uVar26;
            if (iVar10 != 0) {
              piVar16 = piVar2 + lVar24;
              iVar19 = iVar10 * 0x20 + iVar25;
              do {
                piVar16[0x8ccc] = iVar25;
                iVar25 = iVar25 + 0x20;
                piVar16 = piVar16 + 1;
              } while (iVar19 != iVar25);
            }
            iVar25 = iVar8 + uVar26;
            iVar8 = iVar9;
            if (0 < (int)(iVar30 - uVar26)) {
              lVar24 = (long)iVar25;
              uVar26 = (iVar30 - uVar26) - 1;
              puVar11 = (undefined4 *)(lVar20 + lVar24 * 4);
              do {
                puVar11[iVar9 - lVar24] = *puVar11;
                puVar11 = puVar11 + 1;
              } while ((undefined4 *)(lVar20 + 4 + ((ulong)uVar26 + lVar24) * 4) != puVar11);
              iVar8 = iVar9 + 1 + uVar26;
              iVar25 = iVar25 + 1 + uVar26;
            }
          }
        }
        iVar9 = iVar8;
      } while (iVar25 < piVar2[0x8cc6]);
      iVar10 = piVar2[0x8cc4];
      iVar25 = iVar8 + 1;
      iVar9 = piVar2[0x8cc9];
      lVar31 = (long)iVar8 * 4;
      if (0 < iVar10) goto LAB_00100f83;
LAB_0010110d:
      iVar30 = piVar2[(long)(iVar9 >> 5) + 0x8ccc];
    }
    piVar2[0x8cc9] = iVar30;
    piVar2[0x8cc6] = iVar8;
    if (0x10000 < (int)uVar22) {
      piVar16 = piVar2 + 0x8ccc;
      iVar10 = 0;
      do {
        *piVar16 = iVar10;
        iVar10 = iVar10 + 0x40;
        piVar16 = piVar16 + 1;
      } while (iVar10 != 0x840);
      iVar10 = piVar2[0x8cc4];
      uVar22 = (piVar2[0x8cca] + -0x10000 >> 0xb) + 0x840;
      if (0xa60 < iVar10) {
        uVar26 = 0xa60;
        piVar16 = piVar2 + 0x220;
        do {
          iVar9 = (int)uVar26 >> 6;
          if (0x3f < (int)uVar22) {
            iVar8 = 0;
            piVar17 = piVar16;
            do {
              lVar24 = 0;
              while (*(int *)((long)piVar17 + lVar24) ==
                     *(int *)((long)piVar16 + lVar24 + (long)(int)uVar26 * 4)) {
                lVar24 = lVar24 + 4;
                if (lVar24 == 0x100) {
                  uVar26 = uVar26 + 0x40;
                  piVar2[(long)iVar9 + 0x8ccc] = iVar8;
                  goto LAB_0010135c;
                }
              }
              iVar8 = iVar8 + 1;
              piVar17 = piVar17 + 1;
            } while (uVar22 - 0x3f != iVar8);
          }
          lVar24 = 0x3f;
          piVar17 = piVar2 + (long)(int)uVar22 + 0x1e1;
          do {
            lVar29 = 0;
            while (piVar17[lVar29] == piVar16[(int)uVar26 + lVar29]) {
              lVar29 = lVar29 + 1;
              if (lVar24 == lVar29) goto LAB_001012e1;
            }
            piVar17 = piVar17 + 1;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          if ((int)uVar22 < (int)uVar26) {
            lVar24 = 0;
LAB_001012e1:
            iVar8 = (int)lVar24;
            piVar2[(long)iVar9 + 0x8ccc] = uVar22 - iVar8;
            lVar24 = (long)(int)(uVar26 + iVar8);
            piVar17 = piVar2 + lVar24;
            do {
              piVar17[((int)uVar22 - lVar24) + 0x220] = piVar17[0x220];
              piVar17 = piVar17 + 1;
            } while (piVar2 + (ulong)(0x3f - iVar8) + lVar24 + 1 != piVar17);
            uVar26 = -iVar8 + 0x40 + uVar26 + iVar8;
            uVar22 = uVar22 + -iVar8 + 0x40;
          }
          else {
            piVar2[(long)iVar9 + 0x8ccc] = uVar26;
            uVar22 = uVar26 + 0x40;
            uVar26 = uVar22;
          }
LAB_0010135c:
        } while ((int)uVar26 < iVar10);
      }
      piVar16 = piVar2;
      do {
        piVar17 = piVar16 + 1;
        *piVar16 = piVar2[(long)(*piVar16 >> 6) + 0x8ccc];
        piVar16 = piVar17;
      } while (piVar2 + 0x220 != piVar17);
      piVar2[0x8cc8] = piVar2[(long)(piVar2[0x8cc8] >> 6) + 0x8ccc];
      if ((uVar22 & 3) != 0) {
        uVar32 = (long)(int)(uVar22 + 1);
        do {
          piVar2[uVar32 + 0x21f] = 0x3fffc;
          uVar22 = (uint)uVar32;
          uVar12 = uVar32 & 3;
          uVar32 = uVar32 + 1;
        } while (uVar12 != 0);
      }
      piVar2[0x8cc4] = uVar22;
    }
    piVar2[0x8cc6] = iVar25;
    *(int *)(lVar20 + lVar31) = iVar7;
    iVar10 = piVar2[0x8cc6];
    while (((long)iVar10 & 3U) != 0) {
      uVar1 = *(undefined4 *)((long)param_1 + 0x24);
      piVar2[0x8cc6] = iVar10 + 1;
      *(undefined4 *)(lVar20 + (long)iVar10 * 4) = uVar1;
      iVar10 = piVar2[0x8cc6];
    }
    *(undefined1 *)(piVar2 + 0x8ccb) = 1;
    if (0 < iVar18) {
      return;
    }
  }
  iVar18 = *(int *)((long)param_1 + 0x2c);
  if (iVar18 < 0x10001) {
    uVar22 = 0x840;
    if (param_2 == 0) {
      bVar3 = false;
      uVar22 = 0x840;
      goto LAB_001008ed;
    }
LAB_00100c5b:
    uVar26 = 0;
    if (0xffff < piVar2[0x8cc9]) goto LAB_00100c3c;
  }
  else {
    uVar22 = piVar2[0x8cc4];
    if (param_2 != 0) {
      if (0xffff < (int)uVar22) goto LAB_00100c3c;
      goto LAB_00100c5b;
    }
    bVar3 = 0xf77f < (int)uVar22;
    if (0xffff < (int)uVar22) goto LAB_00100c3c;
LAB_001008ed:
    if ((0xffff < (int)(piVar2[0x8cc9] + uVar22)) || (uVar26 = uVar22, bVar3)) goto LAB_00100c3c;
  }
  iVar10 = piVar2[0x8cc6];
  if ((int)(iVar10 + uVar26) < 0x3fffd) {
    if (param_2 == 0) {
      iVar10 = iVar10 * 2;
    }
    else {
      iVar10 = iVar10 * 4;
    }
    iVar10 = uVar22 * 2 + 0x10 + iVar10;
    uVar32 = (ulong)iVar10;
    puVar11 = (undefined4 *)uprv_malloc_76_godot(uVar32);
    param_1[7] = puVar11;
    if (puVar11 == (undefined4 *)0x0) {
      *param_3 = 7;
      return;
    }
    *(undefined1 *)((long)param_1 + 0x44) = 1;
    uVar27 = piVar2[0x8cc6];
    uVar12 = 0xffff;
    *(int *)(param_1 + 8) = iVar10;
    param_1[3] = CONCAT44(uVar27,uVar22);
    if (0x10000 < iVar18) {
      uVar12 = (ulong)*(ushort *)(piVar2 + 0x8cc8);
    }
    *(short *)(param_1 + 4) = (short)uVar12;
    iVar10 = piVar2[0x8cc9];
    *(uint *)(param_1 + 6) = (uVar27 - 4) + uVar26;
    *puVar11 = 0x54726932;
    sVar21 = (short)iVar10 + (short)uVar26;
    *(short *)((long)param_1 + 0x22) = sVar21;
    *(short *)(puVar11 + 3) = sVar21;
    local_5c = (ushort)param_2;
    *param_1 = puVar11 + 4;
    *(ulong *)(puVar11 + 1) =
         ((uVar12 << 0x10 | (ulong)((int)uVar27 >> 2 & 0xffff)) << 0x10 | (ulong)(uVar22 & 0xffff))
         << 0x10 | (ulong)local_5c;
    *(short *)((long)puVar11 + 0xe) = (short)(iVar18 >> 0xb);
    uVar12 = 0x10;
    if (0xf < uVar32) {
      uVar12 = uVar32;
    }
    lVar20 = 0;
    uVar12 = uVar12 - 0x10;
    do {
      uVar13 = uVar12;
      if (uVar12 <= uVar32) {
        uVar13 = uVar32;
      }
      uVar23 = (uVar13 - uVar12) + 2;
      if (uVar23 < uVar13) {
        uVar23 = uVar13;
      }
      uVar12 = (uVar12 - uVar13) + -2 + uVar23;
      *(short *)((long)puVar11 + lVar20 + 0x10) =
           (short)(*(int *)((long)piVar2 + lVar20 * 2 + 0x880) + uVar26 >> 2);
      lVar20 = lVar20 + 2;
    } while (lVar20 != 0x1040);
    uVar13 = uVar12;
    if (uVar12 <= uVar32) {
      uVar13 = uVar32;
    }
    auVar33 = pshuflw(ZEXT416(uVar26 + 0x80),ZEXT416(uVar26 + 0x80),0);
    puVar11[0x414] = auVar33._0_4_;
    uVar23 = (uVar13 - uVar12) + 2;
    if (uVar23 < uVar13) {
      uVar23 = uVar13;
    }
    uVar23 = (uVar12 - uVar13) + -2 + uVar23;
    uVar12 = uVar23;
    if (uVar23 <= uVar32) {
      uVar12 = uVar32;
    }
    uVar13 = (uVar12 - uVar23) + 2;
    if (uVar13 < uVar12) {
      uVar13 = uVar12;
    }
    uVar13 = (uVar23 - uVar12) + -2 + uVar13;
    lVar20 = 0;
    do {
      uVar12 = uVar13;
      if (uVar13 <= uVar32) {
        uVar12 = uVar32;
      }
      uVar23 = (uVar12 - uVar13) + 2;
      if (uVar23 < uVar12) {
        uVar23 = uVar12;
      }
      uVar13 = (uVar13 - uVar12) + -2 + uVar23;
      *(short *)((long)puVar11 + lVar20 + 0x1054) = (short)piVar2[lVar20 + 0x224] + (short)uVar26;
      lVar20 = lVar20 + 2;
    } while (lVar20 != 0x3c);
    puVar28 = puVar11 + 0x424;
    if (0x10000 < iVar18) {
      uVar22 = iVar18 + -0x10000 >> 0xb;
      if (uVar22 != 0) {
        uVar12 = 0;
        do {
          uVar23 = uVar13;
          if (uVar13 <= uVar32) {
            uVar23 = uVar32;
          }
          uVar14 = (uVar23 - uVar13) + 2;
          if (uVar14 < uVar23) {
            uVar14 = uVar23;
          }
          uVar13 = (uVar13 - uVar23) + -2 + uVar14;
          *(short *)((long)puVar11 + uVar12 * 2 + 0x1090) = (short)piVar2[uVar12 + 0x20];
          uVar12 = uVar12 + 1;
        } while (uVar22 != uVar12);
        puVar28 = (undefined4 *)((long)puVar28 + (ulong)uVar22 * 2);
      }
      uVar6 = piVar2[0x8cc4] - (uVar22 + 0x840);
      if (0 < (int)uVar6) {
        uVar12 = 0;
        do {
          uVar23 = uVar13;
          if (uVar13 <= uVar32) {
            uVar23 = uVar32;
          }
          uVar14 = (uVar23 - uVar13) + 2;
          if (uVar14 < uVar23) {
            uVar14 = uVar23;
          }
          uVar13 = (uVar13 - uVar23) + -2 + uVar14;
          *(short *)((long)puVar28 + uVar12 * 2) =
               (short)(piVar2[(long)(int)(uVar22 + 0x840) + uVar12 + 0x220] + uVar26 >> 2);
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar6);
        puVar28 = (undefined4 *)((long)puVar28 + uVar12 * 2);
      }
    }
    lVar20 = *(long *)(piVar2 + 0x8cc0);
    if (param_2 == 1) {
      param_1[1] = 0;
      param_1[2] = puVar28;
      __memcpy_chk(puVar28,lVar20,(long)(int)uVar27 << 2);
      lVar20 = *(long *)(piVar2 + 0x8cc0);
    }
    else {
      param_1[1] = puVar28;
      param_1[2] = 0;
      if (0 < (int)uVar27) {
        uVar32 = 0;
        do {
          *(short *)((long)puVar28 + uVar32 * 2) = (short)*(undefined4 *)(lVar20 + uVar32 * 4);
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar27);
      }
    }
    uprv_free_76_godot(lVar20);
    uprv_free_76_godot(piVar2);
    param_1[9] = 0;
    return;
  }
LAB_00100c3c:
  *param_3 = 8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] utrie2_open_76_godot(undefined4 param_1,undefined4 param_2,int *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  int iVar16;
  undefined8 *puVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  bVar18 = 0;
  if (*param_3 < 1) {
    pauVar7 = (undefined1 (*) [16])uprv_malloc_76_godot(0x50);
    pauVar8 = (undefined1 (*) [16])uprv_malloc_76_godot(0x453c0);
    puVar9 = (undefined4 *)uprv_malloc_76_godot(0x10000);
    if ((pauVar7 != (undefined1 (*) [16])0x0 && pauVar8 != (undefined1 (*) [16])0x0) &&
       (puVar9 != (undefined4 *)0x0)) {
      *(undefined4 **)pauVar8[0x2330] = puVar9;
      pauVar7[2] = (undefined1  [16])0x0;
      puVar13 = puVar9 + 0x80;
      pauVar7[4] = (undefined1  [16])0x0;
      *(undefined4 *)(pauVar7[2] + 4) = param_1;
      *(undefined4 *)(pauVar7[2] + 8) = param_2;
      *(undefined4 *)(pauVar7[2] + 0xc) = 0x110000;
      *(undefined1 (**) [16])(pauVar7[4] + 8) = pauVar8;
      *(undefined4 *)(pauVar8[0x2331] + 4) = 0x4000;
      *(undefined4 *)(pauVar8[0x2330] + 8) = param_1;
      *(undefined4 *)(pauVar8[0x2330] + 0xc) = param_2;
      *(undefined4 *)(pauVar8[0x2332] + 8) = 0x110000;
      *(undefined4 *)(pauVar8[0x2331] + 0xc) = 0;
      pauVar8[0x2332][0xc] = 0;
      *pauVar7 = (undefined1  [16])0x0;
      pauVar7[1] = (undefined1  [16])0x0;
      pauVar7[3] = (undefined1  [16])0x0;
      puVar11 = puVar9;
      do {
        *puVar11 = param_1;
        puVar11[1] = param_1;
        puVar11[2] = param_1;
        puVar11[3] = param_1;
        puVar11 = puVar11 + 4;
      } while (puVar13 != puVar11);
      do {
        *puVar13 = param_2;
        puVar13[1] = param_2;
        puVar13[2] = param_2;
        puVar13[3] = param_2;
        puVar13 = puVar13 + 4;
      } while (puVar13 != puVar9 + 0xc0);
      do {
        *puVar13 = param_1;
        puVar13[1] = param_1;
        puVar13[2] = param_1;
        puVar13[3] = param_1;
        uVar3 = _UNK_00101f58;
        uVar2 = __LC0;
        puVar13 = puVar13 + 4;
      } while (puVar9 + 0x100 != puVar13);
      pauVar10 = pauVar8 + 0x89;
      *(undefined4 *)(pauVar8[0x2332] + 4) = 0xc0;
      *(undefined4 *)(pauVar8[0x2331] + 8) = 0x100;
      *(undefined8 *)pauVar8[0x88] = uVar2;
      *(undefined8 *)(pauVar8[0x88] + 8) = uVar3;
      uVar2 = _UNK_00101f78;
      *(undefined8 *)pauVar8[0x2333] = __LC3;
      *(undefined8 *)(pauVar8[0x2333] + 8) = uVar2;
      uVar2 = _UNK_00101f88;
      *(undefined8 *)pauVar8[0x2334] = __LC4;
      *(undefined8 *)(pauVar8[0x2334] + 8) = uVar2;
      uVar3 = _UNK_00101f98;
      uVar2 = __LC5;
      do {
        *(undefined8 *)*pauVar10 = uVar2;
        *(undefined8 *)(*pauVar10 + 8) = uVar3;
        pauVar10 = pauVar10 + 1;
      } while (pauVar8 + 0x290 != pauVar10);
      *(undefined8 *)pauVar8[0x290] = 0xffffffffffffffff;
      *(undefined8 *)(pauVar8[799] + 8) = 0xffffffffffffffff;
      puVar17 = (undefined8 *)((ulong)(pauVar8[0x290] + 8) & 0xfffffffffffffff8);
      uVar12 = (ulong)(((int)(pauVar8 + 0x290) - (int)puVar17) + 0x900U >> 3);
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = 0xffffffffffffffff;
        puVar17 = puVar17 + (ulong)bVar18 * -2 + 1;
      }
      pauVar10 = pauVar8 + 800;
      do {
        *(undefined8 *)*pauVar10 = uVar2;
        *(undefined8 *)(*pauVar10 + 8) = uVar3;
        pauVar10 = pauVar10 + 1;
      } while (pauVar8 + 0x330 != pauVar10);
      *(undefined4 *)pauVar8[0x2332] = 0xa60;
      auVar19 = __LC2;
      pauVar10 = pauVar8 + 8;
      *(undefined4 *)pauVar8[0x2331] = 0xaa0;
      iVar5 = _UNK_00101fac;
      iVar4 = _UNK_00101fa8;
      iVar6 = _UNK_00101fa4;
      iVar16 = __LC6;
      pauVar14 = pauVar8;
      do {
        pauVar15 = pauVar14 + 1;
        auVar20._0_4_ = auVar19._0_4_ + iVar16;
        auVar20._4_4_ = auVar19._4_4_ + iVar6;
        auVar20._8_4_ = auVar19._8_4_ + iVar4;
        auVar20._12_4_ = auVar19._12_4_ + iVar5;
        *pauVar14 = auVar19;
        uVar3 = _UNK_00101fb8;
        uVar2 = __LC7;
        pauVar14 = pauVar15;
        auVar19 = auVar20;
      } while (pauVar10 != pauVar15);
      do {
        *(undefined8 *)*pauVar10 = uVar2;
        *(undefined8 *)(*pauVar10 + 8) = uVar3;
        pauVar10 = pauVar10 + 1;
      } while (pauVar10 != pauVar8 + 0x88);
      iVar16 = 0x80;
      do {
        while (0 < *param_3) {
LAB_001016e0:
          iVar16 = iVar16 + 0x20;
          if (iVar16 == 0x800) {
            return pauVar7;
          }
        }
        lVar1 = *(long *)(pauVar7[4] + 8);
        if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2332c) == '\0')) {
          iVar6 = getDataBlock(lVar1,iVar16,1);
          if (iVar6 < 0) {
            *param_3 = 7;
          }
          else {
            *(undefined4 *)(*(long *)(lVar1 + 0x23300) + (long)iVar6 * 4) = param_1;
          }
          goto LAB_001016e0;
        }
        iVar16 = iVar16 + 0x20;
        *param_3 = 0x1e;
        if (iVar16 == 0x800) {
          return pauVar7;
        }
      } while( true );
    }
    uprv_free_76_godot(pauVar7);
    uprv_free_76_godot(pauVar8);
    uprv_free_76_godot(puVar9);
    *param_3 = 7;
  }
  return (undefined1 (*) [16])0x0;
}



long * utrie2_clone_76_godot(long *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  void *__src;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  byte bVar21;
  
  bVar21 = 0;
  if (*param_2 < 1) {
    if ((param_1 != (long *)0x0) && ((param_1[7] != 0 || (param_1[9] != 0)))) {
      plVar13 = (long *)uprv_malloc_76_godot(0x50);
      if (plVar13 == (long *)0x0) {
        *param_2 = 7;
        return (long *)0x0;
      }
      lVar14 = param_1[1];
      lVar4 = param_1[2];
      lVar12 = param_1[3];
      lVar6 = param_1[4];
      lVar7 = param_1[5];
      lVar8 = param_1[6];
      lVar9 = param_1[7];
      lVar10 = param_1[8];
      lVar11 = param_1[9];
      lVar15 = param_1[7];
      *plVar13 = *param_1;
      plVar13[1] = lVar14;
      plVar13[2] = lVar4;
      plVar13[3] = lVar12;
      plVar13[4] = lVar6;
      plVar13[5] = lVar7;
      plVar13[6] = lVar8;
      plVar13[7] = lVar9;
      plVar13[8] = lVar10;
      plVar13[9] = lVar11;
      if (lVar15 == 0) {
        puVar5 = (undefined8 *)param_1[9];
        puVar16 = (undefined8 *)uprv_malloc_76_godot(0x453c0);
        if (puVar16 != (undefined8 *)0x0) {
          lVar15 = uprv_malloc_76_godot((long)(*(int *)((long)puVar5 + 0x23314) * 4));
          puVar16[0x4660] = lVar15;
          if (lVar15 != 0) {
            *(undefined4 *)((long)puVar16 + 0x23314) = *(undefined4 *)((long)puVar5 + 0x23314);
            lVar15 = (long)puVar16 - (long)((ulong)(puVar16 + 1) & 0xfffffffffffffff8);
            *puVar16 = *puVar5;
            puVar16[0x10f] = puVar5[0x10f];
            puVar19 = (undefined8 *)((long)puVar5 - lVar15);
            puVar20 = (undefined8 *)((ulong)(puVar16 + 1) & 0xfffffffffffffff8);
            for (uVar17 = (ulong)((int)lVar15 + 0x880U >> 3); uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar20 = *puVar19;
              puVar19 = puVar19 + (ulong)bVar21 * -2 + 1;
              puVar20 = puVar20 + (ulong)bVar21 * -2 + 1;
            }
            iVar2 = *(int *)(puVar5 + 0x4662);
            __memcpy_chk(puVar16 + 0x110,puVar5 + 0x110,(long)iVar2 << 2,0x44b40);
            uVar18 = *(undefined4 *)(puVar5 + 0x4664);
            iVar3 = *(int *)(puVar5 + 0x4663);
            *(int *)(puVar16 + 0x4662) = iVar2;
            __src = (void *)puVar5[0x4660];
            *(undefined4 *)(puVar16 + 0x4664) = uVar18;
            memcpy((void *)puVar16[0x4660],__src,(long)iVar3 << 2);
            uVar18 = 0;
            *(undefined4 *)((long)puVar16 + 0x23324) = *(undefined4 *)((long)puVar5 + 0x23324);
            iVar2 = *(int *)(puVar5 + 0x4663);
            *(int *)(puVar16 + 0x4663) = iVar2;
            cVar1 = *(char *)((long)puVar5 + 0x2332c);
            if (cVar1 == '\0') {
              __memcpy_chk(puVar16 + 0x4666,puVar5 + 0x4666,((ulong)(long)iVar2 >> 5) * 4,0x22090);
              uVar18 = *(undefined4 *)((long)puVar5 + 0x2331c);
            }
            *(undefined4 *)((long)puVar16 + 0x2331c) = uVar18;
            puVar16[0x4661] = puVar5[0x4661];
            uVar18 = *(undefined4 *)(puVar5 + 0x4665);
            *(char *)((long)puVar16 + 0x2332c) = cVar1;
            *(undefined4 *)(puVar16 + 0x4665) = uVar18;
            plVar13[9] = (long)puVar16;
            return plVar13;
          }
          uprv_free_76_godot(puVar16);
        }
        lVar15 = plVar13[7];
        plVar13[9] = 0;
      }
      else {
        lVar15 = param_1[8];
        lVar14 = uprv_malloc_76_godot((long)(int)lVar15);
        plVar13[7] = lVar14;
        if (lVar14 != 0) {
          lVar4 = param_1[7];
          lVar12 = param_1[8];
          *(undefined1 *)((long)plVar13 + 0x44) = 1;
          lVar15 = __memcpy_chk(lVar14,lVar4,(long)(int)lVar12,(long)(int)lVar15);
          *plVar13 = (*param_1 + lVar15) - lVar4;
          if (param_1[1] != 0) {
            plVar13[1] = (param_1[1] - lVar4) + lVar15;
          }
          if (param_1[2] == 0) {
            return plVar13;
          }
          plVar13[2] = lVar15 + (param_1[2] - lVar4);
          return plVar13;
        }
        lVar15 = plVar13[9];
      }
      if (lVar15 != 0) {
        return plVar13;
      }
      *param_2 = 7;
      uprv_free_76_godot(plVar13);
      return (long *)0x0;
    }
    *param_2 = 1;
  }
  return (long *)0x0;
}



void utrie2_set32_76_godot(long param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  
  if (0 < *param_4) {
    return;
  }
  if (0x10ffff < (uint)param_2) {
    *param_4 = 1;
    return;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x2332c) != '\0')) {
    *param_4 = 0x1e;
  }
  else {
    iVar2 = getDataBlock(lVar1,param_2,1);
    if (iVar2 < 0) {
      *param_4 = 7;
    }
    else {
      *(undefined4 *)(*(long *)(lVar1 + 0x23300) + (long)(int)(((uint)param_2 & 0x1f) + iVar2) * 4)
           = param_3;
    }
  }
  return;
}



/* copyEnumRange(void const*, int, int, unsigned int) */

bool copyEnumRange(void *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
  if (*(uint *)(*param_1 + 0x24) == param_4) {
    return true;
  }
  uVar1 = param_3 + -1 + (uint)(*(char *)((long)param_1 + 0xc) == '\0');
  if (uVar1 != param_2) {
    if (*(int *)((long)param_1 + 8) < 1) {
      if (((uint)param_2 < 0x110000 && param_2 <= (int)uVar1) && (uVar1 < 0x110000)) {
        utrie2_setRange32_76_godot_part_0_isra_0
                  (*(undefined8 *)(*param_1 + 0x48),param_2,uVar1,param_4,1,(long)param_1 + 8);
        return *(int *)((long)param_1 + 8) < 1;
      }
      *(undefined4 *)((long)param_1 + 8) = 1;
    }
    return false;
  }
  utrie2_set32_76_godot();
  return *(int *)((long)param_1 + 8) < 1;
}



void utrie2_set32ForLeadSurrogateCodeUnit_76_godot
               (long param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  
  if (0 < *param_4) {
    return;
  }
  if (((uint)param_2 & 0xfffffc00) != 0xd800) {
    *param_4 = 1;
    return;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2332c) == '\0')) {
    iVar2 = getDataBlock(lVar1,param_2,0);
    if (iVar2 < 0) {
      *param_4 = 7;
    }
    else {
      *(undefined4 *)(*(long *)(lVar1 + 0x23300) + (long)(int)(iVar2 + ((uint)param_2 & 0x1f)) * 4)
           = param_3;
    }
    return;
  }
  *param_4 = 0x1e;
  return;
}



undefined8 utrie2_cloneAsThawed_76_godot(long *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  int local_30;
  undefined1 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 < 1) {
    if (param_1 == (long *)0x0) {
LAB_00101d1f:
      *param_2 = 1;
      goto LAB_00101d30;
    }
    lVar1 = param_1[9];
    if (param_1[7] == 0) {
      if (lVar1 == 0) goto LAB_00101d1f;
LAB_00101c69:
      if (*(char *)(lVar1 + 0x2332c) == '\0') {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = utrie2_clone_76_godot(param_1,param_2);
          return uVar2;
        }
        goto LAB_00101d85;
      }
    }
    else if (lVar1 != 0) goto LAB_00101c69;
    local_38 = utrie2_open_76_godot(*(undefined4 *)((long)param_1 + 0x24),(int)param_1[5],param_2);
    if (0 < *param_2) goto LAB_00101d30;
    uVar4 = 0xd800;
    local_2c = 0;
    local_30 = *param_2;
    utrie2_enum_76_godot(param_1,0,copyEnumRange,&local_38);
    *param_2 = local_30;
    do {
      lVar1 = (long)(int)(((uint)uVar4 & 0x1f) +
                         (uint)*(ushort *)(*param_1 + (ulong)((ushort)(uVar4 >> 5) & 0x7ff) * 2) * 4
                         );
      if (param_1[2] == 0) {
        uVar3 = (uint)*(ushort *)(*param_1 + lVar1 * 2);
      }
      else {
        uVar3 = *(uint *)(param_1[2] + lVar1 * 4);
      }
      if (*(uint *)((long)param_1 + 0x24) != uVar3) {
        utrie2_set32ForLeadSurrogateCodeUnit_76_godot(local_38,uVar4,uVar3,param_2);
      }
      uVar3 = (uint)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while (uVar3 != 0xdc00);
    uVar2 = local_38;
    if (0 < *param_2) {
      utrie2_close_76_godot(local_38);
      uVar2 = 0;
    }
  }
  else {
LAB_00101d30:
    uVar2 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00101d85:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long utrie2_fromUTrie_76_godot(long *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_38;
  int local_30;
  undefined1 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 < 1) {
    if (param_1 == (long *)0x0) {
      *param_3 = 1;
    }
    else {
      local_38 = utrie2_open_76_godot((int)param_1[4]);
      if (*param_3 < 1) {
        uVar3 = 0xd800;
        local_2c = 1;
        local_30 = *param_3;
        utrie_enum_76_godot(param_1,0,copyEnumRange,&local_38);
        *param_3 = local_30;
        do {
          lVar1 = (long)(int)(((uint)uVar3 & 0x1f) +
                             (uint)*(ushort *)(*param_1 + (ulong)((ushort)(uVar3 >> 5) & 0x7ff) * 2)
                             * 4);
          if (param_1[1] == 0) {
            uVar2 = (uint)*(ushort *)(*param_1 + lVar1 * 2);
          }
          else {
            uVar2 = *(uint *)(param_1[1] + lVar1 * 4);
          }
          if (*(uint *)(param_1 + 4) != uVar2) {
            utrie2_set32ForLeadSurrogateCodeUnit_76_godot(local_38,uVar3,uVar2,param_3);
          }
          uVar2 = (uint)uVar3 + 1;
          uVar3 = (ulong)uVar2;
        } while (uVar2 != 0xdc00);
        if (*param_3 < 1) {
          if (local_38 == 0) {
            *param_3 = 1;
          }
          else {
            utrie2_freeze_76_godot_part_0(local_38,param_1[1] != 0,param_3);
            lVar1 = local_38;
            if (*param_3 < 1) goto LAB_00101e70;
          }
        }
        utrie2_close_76_godot(local_38);
      }
    }
  }
  lVar1 = 0;
LAB_00101e70:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar1;
}



void utrie2_setRange32_76_godot
               (long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               int *param_6)

{
  if (0 < *param_6) {
    return;
  }
  if ((param_3 < 0x110000 && (int)param_2 <= (int)param_3) && (param_2 < 0x110000)) {
    utrie2_setRange32_76_godot_part_0_isra_0(*(undefined8 *)(param_1 + 0x48));
    return;
  }
  *param_6 = 1;
  return;
}



void utrie2_freeze_76_godot(long param_1,uint param_2,int *param_3)

{
  if (0 < *param_3) {
    return;
  }
  if ((param_1 != 0) && (param_2 < 2)) {
    utrie2_freeze_76_godot_part_0();
    return;
  }
  *param_3 = 1;
  return;
}



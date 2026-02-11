
/* bracketProcessBoundary(BracketData*, int, unsigned char, unsigned char) */

void bracketProcessBoundary(BracketData *param_1,int param_2,uchar param_3,uchar param_4)

{
  undefined2 uVar1;
  int iVar2;
  BracketData BVar3;
  uint uVar4;
  
  if ((0x780000UL >> ((ulong)*(byte *)(*(long *)(*(long *)param_1 + 0x70) + (long)param_2) & 0x3f) &
      1) == 0) {
    iVar2 = *(int *)(param_1 + 500);
    uVar4 = (uint)param_3;
    if ((param_3 & 0x7f) < (param_4 & 0x7f)) {
      uVar4 = (uint)param_4;
    }
    uVar1 = *(undefined2 *)(param_1 + (long)iVar2 * 0x10 + 0x1fc);
    BVar3 = SUB41(uVar4 & 1,0);
    param_1[(long)iVar2 * 0x10 + 0x202] = BVar3;
    param_1[(long)iVar2 * 0x10 + 0x201] = BVar3;
    *(undefined2 *)(param_1 + (long)iVar2 * 0x10 + 0x1fe) = uVar1;
    param_1[(long)iVar2 * 0x10 + 0x200] = (BracketData)param_4;
    *(uint *)(param_1 + (long)iVar2 * 0x10 + 0x204) = uVar4 & 1;
    *(int *)(param_1 + (long)iVar2 * 0x10 + 0x1f8) = param_2;
  }
  return;
}



/* fixN0c(BracketData*, int, int, unsigned char) */

void fixN0c(BracketData *param_1,int param_2,int param_3,uchar param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = param_2 + 1;
  iVar1 = *(int *)(param_1 + 500);
  lVar4 = *(long *)(*(long *)param_1 + 0x70);
  piVar6 = (int *)(*(long *)(param_1 + 0x1e8) + (long)iVar7 * 0x18);
  uVar5 = (uint)*(ushort *)(param_1 + (long)iVar1 * 0x10 + 0x1fe);
  if (iVar7 < (int)(uint)*(ushort *)(param_1 + (long)iVar1 * 0x10 + 0x1fe)) {
    do {
      if (piVar6[1] < 0) {
        if (param_3 < piVar6[2]) {
          return;
        }
        iVar2 = *piVar6;
        if (param_3 < iVar2) {
          if ((uint)param_4 == piVar6[4]) {
            return;
          }
          *(uchar *)(lVar4 + iVar2) = param_4;
          iVar3 = piVar6[1];
          *(uchar *)(lVar4 + -iVar3) = param_4;
          piVar6[1] = 0;
          fixN0c(param_1,iVar7,iVar2,param_4);
          fixN0c(param_1,iVar7,-iVar3,param_4);
          uVar5 = (uint)*(ushort *)(param_1 + (long)iVar1 * 0x10 + 0x1fe);
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar7 < (int)uVar5);
  }
  return;
}



/* addPoint(UBiDi*, int, int) */

void addPoint(UBiDi *param_1,int param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1a0);
  if (iVar5 == 0) {
    lVar2 = uprv_malloc_76_godot(0x50);
    *(long *)(param_1 + 0x1b0) = lVar2;
    if (lVar2 == 0) goto LAB_00100247;
    iVar3 = *(int *)(param_1 + 0x1a4);
    iVar5 = 10;
    *(undefined4 *)(param_1 + 0x1a0) = 10;
    lVar4 = lVar2;
    if (iVar3 < 10) goto LAB_001001ae;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1a4);
    lVar2 = *(long *)(param_1 + 0x1b0);
    lVar4 = lVar2;
    if (iVar3 < iVar5) goto LAB_001001ae;
  }
  lVar2 = uprv_realloc_76_godot(lVar4,(long)(iVar5 * 2) << 3);
  *(long *)(param_1 + 0x1b0) = lVar2;
  if (lVar2 == 0) {
    *(long *)(param_1 + 0x1b0) = lVar4;
LAB_00100247:
    *(undefined4 *)(param_1 + 0x1ac) = 7;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1a4);
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
LAB_001001ae:
  piVar1 = (int *)(lVar2 + (long)iVar3 * 8);
  *piVar1 = param_2;
  piVar1[1] = param_3;
  *(int *)(param_1 + 0x1a4) = iVar3 + 1;
  return;
}



/* processPropertySeq(UBiDi*, LevState*, unsigned char, int, int) */

void processPropertySeq(UBiDi *param_1,LevState *param_2,uchar param_3,int param_4,int param_5)

{
  LevState *pLVar1;
  LevState LVar2;
  char cVar3;
  LevState LVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  char cVar13;
  uint uVar14;
  LevState *pLVar15;
  LevState *pLVar16;
  LevState *pLVar17;
  byte bVar18;
  
  lVar8 = *(long *)param_2;
  LVar2 = param_2[0x1c];
  lVar6 = *(long *)(param_1 + 0x78);
  bVar18 = *(byte *)(lVar8 + (ulong)(byte)LVar2 * 8 + (ulong)param_3);
  uVar14 = bVar18 & 0xf;
  *(uint *)(param_2 + 0x1c) = uVar14;
  cVar13 = *(char *)(*(long *)(param_2 + 8) + (ulong)(bVar18 >> 4));
  cVar3 = *(char *)(lVar8 + 7 + (ulong)uVar14 * 8);
  if (cVar13 != '\0') {
    switch(cVar13) {
    case '\x02':
      lVar8 = (long)*(int *)(param_2 + 0x10);
      bVar7 = *(int *)(param_2 + 0x10) < param_4;
      goto LAB_001002b9;
    case '\x03':
      LVar2 = param_2[0x24];
      lVar8 = *(long *)(param_1 + 0x70);
      lVar9 = (long)*(int *)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x10) < param_4) {
        iVar11 = 0;
        do {
          cVar13 = *(char *)(lVar8 + lVar9);
          if (cVar13 == '\x16') {
            do {
              iVar11 = iVar11 + -1;
              if (iVar11 == 0) {
                *(char *)(lVar6 + lVar9) = (char)LVar2 + '\x01';
                goto LAB_001005b1;
              }
              lVar9 = lVar9 + 1;
              if (param_4 <= (int)lVar9) goto LAB_001002b4;
              cVar13 = *(char *)(lVar8 + lVar9);
            } while (cVar13 == '\x16');
          }
          else if (iVar11 == 0) {
            *(char *)(lVar6 + lVar9) = (char)LVar2 + '\x01';
          }
          iVar11 = iVar11 + (uint)((byte)(cVar13 - 0x14U) < 2);
LAB_001005b1:
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < param_4);
      }
      break;
    case '\x04':
      LVar2 = param_2[0x24];
      lVar8 = *(long *)(param_1 + 0x70);
      lVar9 = (long)*(int *)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x10) < param_4) {
        iVar11 = 0;
        do {
          cVar13 = *(char *)(lVar8 + lVar9);
          if (cVar13 == '\x16') {
            do {
              iVar11 = iVar11 + -1;
              if (iVar11 == 0) {
                *(char *)(lVar6 + lVar9) = (char)LVar2 + '\x02';
                goto LAB_00100511;
              }
              lVar9 = lVar9 + 1;
              if (param_4 <= (int)lVar9) goto LAB_001002b4;
              cVar13 = *(char *)(lVar8 + lVar9);
            } while (cVar13 == '\x16');
          }
          else if (iVar11 == 0) {
            *(char *)(lVar6 + lVar9) = (char)LVar2 + '\x02';
          }
          iVar11 = iVar11 + (uint)((byte)(cVar13 - 0x14U) < 2);
LAB_00100511:
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < param_4);
      }
      break;
    case '\x05':
      if (-1 < *(int *)(param_2 + 0x14)) {
        addPoint(param_1,*(int *)(param_2 + 0x14),1);
      }
      iVar11 = *(int *)(param_1 + 0x1a0);
      *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
      if ((iVar11 == 0) || (iVar11 = *(int *)(param_1 + 0x1a4), iVar11 <= *(int *)(param_1 + 0x1a8))
         ) {
        *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
        if (((*(byte *)(lVar8 + 7 + (ulong)(byte)LVar2 * 8) & 1) == 0) ||
           (iVar11 = *(int *)(param_2 + 0x10), iVar11 < 1)) {
          bVar7 = false;
          iVar11 = param_4;
        }
        else {
          bVar7 = iVar11 < param_4;
        }
        lVar8 = (long)iVar11;
        if (param_3 == '\x05') {
          addPoint(param_1,param_4,1);
          lVar8 = (long)iVar11;
          *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
        }
        goto LAB_001002b9;
      }
      iVar5 = *(int *)(param_2 + 0x18);
      if (iVar5 + 1 < param_4) {
        pbVar10 = (byte *)((iVar5 + 1) + lVar6);
        do {
          pbVar12 = pbVar10 + 1;
          *pbVar10 = *pbVar10 - 2 & 0xfe;
          pbVar10 = pbVar12;
        } while (pbVar12 !=
                 (byte *)((ulong)(uint)((param_4 + -2) - iVar5) + lVar6 + 2 + (long)iVar5));
        iVar11 = *(int *)(param_1 + 0x1a4);
      }
      *(int *)(param_1 + 0x1a8) = iVar11;
      *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
      if (param_3 == '\x05') {
        iVar11 = 1;
        goto LAB_0010076b;
      }
      break;
    case '\x06':
      if (0 < *(int *)(param_1 + 0x1a0)) {
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a8);
      }
      *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
      *(int *)(param_2 + 0x18) = param_5 + -1;
      break;
    case '\a':
      iVar11 = *(int *)(param_2 + 0x14);
      if (((param_3 == '\x03') && (*(char *)(*(long *)(param_1 + 0x70) + (long)param_4) == '\x05'))
         && (*(int *)(param_1 + 0x84) != 6)) {
        if (iVar11 == -1) {
          *(int *)(param_2 + 0x18) = param_5 + -1;
        }
        else {
          if (-1 < iVar11) {
            addPoint(param_1,iVar11,1);
            *(undefined4 *)(param_2 + 0x14) = 0xfffffffe;
          }
          addPoint(param_1,param_4,1);
        }
      }
      else if (iVar11 == -1) {
        *(int *)(param_2 + 0x14) = param_4;
      }
      break;
    case '\b':
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
      *(int *)(param_2 + 0x18) = param_5 + -1;
      break;
    case '\t':
      iVar11 = param_4 + -1;
      if (-1 < iVar11) {
        pbVar10 = (byte *)(iVar11 + lVar6);
        do {
          if ((*pbVar10 & 1) != 0) {
            addPoint(param_1,iVar11,4);
            *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
            break;
          }
          iVar11 = iVar11 + -1;
          pbVar10 = pbVar10 + -1;
        } while (iVar11 != -1);
      }
    case '\x01':
      *(int *)(param_2 + 0x10) = param_4;
      break;
    case '\n':
      addPoint(param_1,param_4,1);
      addPoint(param_1,param_4,2);
      break;
    case '\v':
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a8);
      if (param_3 == '\x05') {
        iVar11 = 4;
LAB_0010076b:
        addPoint(param_1,param_4,iVar11);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
      }
      break;
    case '\f':
      LVar2 = param_2[0x24];
      iVar11 = *(int *)(param_2 + 0x10);
      if (iVar11 < param_4) {
        pbVar10 = (byte *)(iVar11 + lVar6);
        pbVar12 = pbVar10 + (uint)(param_4 - iVar11);
        do {
          if (*pbVar10 < (byte)((char)LVar2 + cVar3)) {
            *pbVar10 = (char)LVar2 + cVar3;
          }
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 != pbVar12);
      }
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
      *(int *)(param_2 + 0x10) = param_4;
      break;
    case '\r':
      LVar2 = param_2[0x24];
      iVar11 = param_4 + -1;
      if (*(int *)(param_2 + 0x10) <= iVar11) {
        do {
          lVar8 = (long)iVar11;
          pLVar1 = (LevState *)(lVar6 + lVar8);
          uVar14 = (uint)(byte)*pLVar1;
          pLVar16 = pLVar1;
          if (uVar14 == (byte)LVar2 + 3) {
            pLVar17 = (LevState *)(lVar6 + -1 + lVar8);
            uVar14 = (uint)(byte)*pLVar1;
            do {
              pLVar15 = pLVar16;
              *pLVar15 = (LevState)((char)uVar14 - 2);
              LVar4 = *pLVar17;
              pLVar16 = pLVar15 + ((lVar8 + lVar6 + -1) - (long)pLVar1);
              uVar14 = (uint)(byte)LVar4;
              pLVar17 = pLVar17 + -1;
            } while (uVar14 == (byte)LVar2 + 3);
            iVar11 = ((iVar11 + -1) - (int)pLVar1) + (int)pLVar15;
            if (LVar4 == LVar2) {
              pLVar1 = (LevState *)(lVar6 + -1 + (long)iVar11);
              pLVar17 = pLVar1;
              do {
                pLVar16 = pLVar17;
                uVar14 = (uint)(byte)*pLVar16;
                pLVar17 = pLVar16 + -1;
              } while (*pLVar16 == LVar2);
              iVar11 = ((iVar11 + -1) - (int)pLVar1) + (int)pLVar16;
            }
          }
          iVar11 = iVar11 + -1;
          *pLVar16 = (LevState)(((byte)LVar2 + 2 != uVar14) + (char)LVar2);
        } while (*(int *)(param_2 + 0x10) <= iVar11);
      }
      break;
    case '\x0e':
      LVar2 = param_2[0x24];
      if (*(int *)(param_2 + 0x10) <= param_4 + -1) {
        lVar8 = (long)(param_4 + -1);
        do {
          if ((byte)((char)LVar2 + 1U) < *(byte *)(lVar6 + lVar8)) {
            *(byte *)(lVar6 + lVar8) = *(byte *)(lVar6 + lVar8) - 2;
          }
          lVar8 = lVar8 + -1;
        } while (*(int *)(param_2 + 0x10) <= (int)lVar8);
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_001002b4:
  lVar8 = (long)param_4;
  bVar7 = false;
LAB_001002b9:
  if ((cVar3 != '\0') || (bVar7)) {
    bVar18 = cVar3 + (char)param_2[0x24];
    iVar11 = (int)lVar8;
    if (iVar11 < *(int *)(param_2 + 0x20)) {
      lVar6 = *(long *)(param_1 + 0x70);
      lVar9 = *(long *)(param_1 + 0x78);
      if (iVar11 < param_5) {
        iVar11 = 0;
        do {
          cVar13 = *(char *)(lVar6 + lVar8);
          if (cVar13 == '\x16') {
            do {
              iVar11 = iVar11 + -1;
              if (iVar11 == 0) {
                *(byte *)(lVar9 + lVar8) = bVar18;
                goto LAB_00100359;
              }
              lVar8 = lVar8 + 1;
              if (param_5 <= (int)lVar8) {
                return;
              }
              cVar13 = *(char *)(lVar6 + lVar8);
            } while (cVar13 == '\x16');
          }
          else if (iVar11 == 0) {
            *(byte *)(lVar9 + lVar8) = bVar18;
          }
          iVar11 = iVar11 + (uint)((byte)(cVar13 - 0x14U) < 2);
LAB_00100359:
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < param_5);
      }
    }
    else if (iVar11 < param_5) {
      memset((void *)(lVar6 + lVar8),(uint)bVar18,(ulong)(uint)((param_5 + -1) - iVar11) + 1);
      return;
    }
  }
  return;
}



/* bracketAddOpening(BracketData*, char16_t, int) */

undefined8 bracketAddOpening(BracketData *param_1,wchar16 param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  BracketData *pBVar8;
  int iVar9;
  byte bVar10;
  
  bVar10 = 0;
  iVar3 = *(int *)(param_1 + 500);
  uVar2 = *(ushort *)(param_1 + (long)iVar3 * 0x10 + 0x1fe);
  if ((int)(uint)uVar2 < *(int *)(param_1 + 0x1f0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x1e8);
    goto LAB_0010090d;
  }
  lVar4 = *(long *)param_1;
  puVar5 = *(undefined8 **)(lVar4 + 0x48);
  iVar9 = ((uint)uVar2 * 4 + (uint)uVar2 * 2) * 8;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)uprv_malloc_76_godot(iVar9);
    *(undefined8 **)(lVar4 + 0x48) = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
LAB_00100995:
    *(int *)(lVar4 + 0x24) = iVar9;
  }
  else if (*(int *)(lVar4 + 0x24) < iVar9) {
    puVar5 = (undefined8 *)uprv_realloc_76_godot(puVar5,iVar9);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 **)(lVar4 + 0x48) = puVar5;
    goto LAB_00100995;
  }
  if (*(BracketData **)(param_1 + 0x1e8) == param_1 + 8) {
    *puVar5 = *(undefined8 *)(param_1 + 8);
    puVar5[0x3b] = *(undefined8 *)(param_1 + 0x1e0);
    lVar6 = (long)puVar5 - (long)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
    pBVar8 = param_1 + 8 + -lVar6;
    puVar5 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
    for (uVar7 = (ulong)((int)lVar6 + 0x1e0U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = *(undefined8 *)pBVar8;
      pBVar8 = pBVar8 + ((ulong)bVar10 * -2 + 1) * 8;
      puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x48);
  }
  iVar9 = *(int *)(lVar4 + 0x24);
  *(undefined8 **)(param_1 + 0x1e8) = puVar5;
  *(int *)(param_1 + 0x1f0) = (int)((ulong)(long)iVar9 / 0x18);
  uVar2 = *(ushort *)(param_1 + (long)iVar3 * 0x10 + 0x1fe);
LAB_0010090d:
  piVar1 = (int *)(puVar5 + (ulong)uVar2 * 3);
  piVar1[4] = *(int *)(param_1 + (long)iVar3 * 0x10 + 0x204);
  iVar9 = *(int *)(param_1 + (long)iVar3 * 0x10 + 0x1f8);
  *piVar1 = param_3;
  piVar1[2] = iVar9;
  piVar1[1] = (uint)(ushort)param_2;
  *(undefined2 *)(piVar1 + 3) = 0;
  *(ushort *)(param_1 + (long)iVar3 * 0x10 + 0x1fe) = uVar2 + 1;
  return 1;
}



/* bracketProcessChar(BracketData*, int) */

undefined8 bracketProcessChar(BracketData *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  wchar16 wVar3;
  char cVar4;
  undefined2 uVar5;
  wchar16 wVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  BracketData BVar12;
  ushort uVar13;
  long lVar14;
  uchar uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  BracketData *pBVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  BracketData BVar25;
  ulong uVar19;
  
  lVar22 = (long)param_2;
  lVar14 = *(long *)param_1;
  lVar21 = (long)*(int *)(param_1 + 500);
  lVar11 = *(long *)(lVar14 + 0x70);
  pBVar20 = (BracketData *)(lVar11 + lVar22);
  BVar12 = *pBVar20;
  if (BVar12 == (BracketData)0xa) {
    pBVar20 = param_1 + lVar21 * 0x10;
    wVar3 = *(wchar16 *)(*(long *)(lVar14 + 8) + lVar22 * 2);
    uVar13 = *(ushort *)(pBVar20 + 0x1fc);
    uVar18 = *(ushort *)(pBVar20 + 0x1fe) - 1;
    if ((int)(uint)uVar13 <= (int)uVar18) {
      lVar24 = (long)(int)uVar18 * 0x18;
      do {
        uVar19 = (ulong)uVar18;
        if (*(uint *)(*(long *)(param_1 + 0x1e8) + 4 + lVar24) == (uint)(ushort)wVar3) {
          piVar17 = (int *)(*(long *)(param_1 + 0x1e8) + lVar24);
          uVar7 = *(ushort *)(piVar17 + 3);
          uVar16 = (byte)pBVar20[0x200] & 1;
          if (((byte)pBVar20[0x200] & 1) == 0) {
            if ((uVar7 & 1) == 0) goto LAB_00100e08;
            uVar15 = '\0';
LAB_00100c39:
            *(char *)(lVar11 + *piVar17) = (char)uVar16;
            *(char *)(*(long *)(*(long *)param_1 + 0x70) + lVar22) = (char)uVar16;
            fixN0c(param_1,uVar18,*piVar17,uVar15);
            uVar13 = *(ushort *)(pBVar20 + 0x1fc);
            *(ushort *)(pBVar20 + 0x1fe) = (ushort)uVar19;
            uVar18 = (uint)uVar19;
            if ((ushort)uVar19 <= uVar13) {
              lVar11 = *(long *)(*(long *)param_1 + 0x78);
              goto LAB_00100cd3;
            }
          }
          else {
            if ((uVar7 & 2) != 0) {
              uVar15 = '\x01';
              goto LAB_00100c39;
            }
LAB_00100e08:
            if ((uVar7 & 3) == 0) {
              *(short *)(pBVar20 + 0x1fe) = (short)uVar18;
              goto LAB_00100bf6;
            }
            if (uVar16 != piVar17[4]) {
              uVar16 = piVar17[4] & 0xff;
            }
            uVar15 = (uchar)uVar16;
            *(uchar *)(lVar11 + *piVar17) = uVar15;
            *(uchar *)(*(long *)(*(long *)param_1 + 0x70) + lVar22) = uVar15;
            fixN0c(param_1,uVar18,*piVar17,uVar15);
            uVar18 = (uint)uVar19;
            if (uVar13 != uVar18) {
              uVar13 = *(ushort *)(pBVar20 + 0x1fc);
              piVar17[1] = -param_2;
              if ((int)(uVar18 - 1) < (int)(uint)uVar13) goto LAB_00100ed4;
              lVar14 = *(long *)(param_1 + 0x1e8);
              iVar8 = *piVar17;
              piVar17 = (int *)(lVar14 + -0x18 + (long)(int)uVar18 * 0x18);
              goto LAB_00100ed0;
            }
            uVar13 = *(ushort *)(pBVar20 + 0x1fc);
            *(ushort *)(pBVar20 + 0x1fe) = (ushort)uVar19;
            if ((ushort)uVar19 <= uVar13) goto LAB_00100cc1;
          }
          uVar18 = (uint)uVar19;
          uVar10 = uVar19 & 0xffffffff;
          iVar8 = *piVar17;
          lVar14 = *(long *)(param_1 + 0x1e8) + (uVar19 & 0xffff) * 0x18;
          goto LAB_00100cbc;
        }
        uVar18 = uVar18 - 1;
        lVar24 = lVar24 + -0x18;
      } while (uVar18 != uVar13 - 1);
    }
    if (wVar3 != L'\0') {
      wVar6 = u_getBidiPairedBracket_76_godot();
      if ((wVar3 != wVar6) && (iVar8 = ubidi_getPairedBracketType_76_godot(wVar3), iVar8 == 1)) {
        if (wVar6 == L'〉') {
          cVar4 = bracketAddOpening(param_1,L'〉',param_2);
          if (cVar4 == '\0') {
            return 0;
          }
        }
        else if ((wVar6 == L'〉') &&
                (cVar4 = bracketAddOpening(param_1,L'〉',param_2), cVar4 == '\0')) {
          return 0;
        }
        cVar4 = bracketAddOpening(param_1,wVar6,param_2);
        if (cVar4 == '\0') {
          return 0;
        }
      }
      lVar14 = *(long *)param_1;
    }
    goto LAB_00100bf6;
  }
  bVar1 = *(byte *)(*(long *)(lVar14 + 0x78) + lVar22);
  if ((char)bVar1 < '\0') {
    BVar25 = (BracketData)(bVar1 & 1);
    if (2 < (byte)((char)BVar12 - 8U)) {
      *pBVar20 = BVar25;
    }
    goto LAB_00100ac7;
  }
  switch(BVar12) {
  case (BracketData)0x0:
  case (BracketData)0x1:
  case (BracketData)0xd:
    BVar25 = (BracketData)(BVar12 != (BracketData)0x0);
    uVar5 = CONCAT11(BVar12,BVar12);
    goto LAB_00100acc;
  case (BracketData)0x2:
    param_1[lVar21 * 0x10 + 0x202] = (BracketData)0x2;
    if (param_1[lVar21 * 0x10 + 0x201] != (BracketData)0x0) {
      BVar12 = (BracketData)0x18;
      if (param_1[lVar21 * 0x10 + 0x201] == (BracketData)0xd) {
        BVar12 = (BracketData)0x5;
      }
      *pBVar20 = BVar12;
      *(undefined4 *)(param_1 + lVar21 * 0x10 + 0x204) = 1;
      *(int *)(param_1 + lVar21 * 0x10 + 0x1f8) = param_2;
      goto LAB_00100dfa;
    }
    if (param_1[0x9e8] == (BracketData)0x0) {
      *pBVar20 = (BracketData)0x17;
    }
    *(undefined4 *)(param_1 + lVar21 * 0x10 + 0x204) = 0;
    uVar13 = 1;
    *(int *)(param_1 + lVar21 * 0x10 + 0x1f8) = param_2;
    break;
  default:
    goto switchD_00100ab0_caseD_3;
  case (BracketData)0x5:
    param_1[lVar21 * 0x10 + 0x202] = (BracketData)0x5;
    *(undefined4 *)(param_1 + lVar21 * 0x10 + 0x204) = 1;
    *(int *)(param_1 + lVar21 * 0x10 + 0x1f8) = param_2;
LAB_00100dfa:
    uVar13 = 2;
    break;
  case (BracketData)0x11:
    BVar12 = param_1[lVar21 * 0x10 + 0x202];
    if (BVar12 == (BracketData)0xa) {
      *pBVar20 = (BracketData)0xa;
      return 1;
    }
    if ((1 < (byte)BVar12) && (BVar12 != (BracketData)0xd)) {
      return 1;
    }
    uVar13 = (ushort)(1 << (BVar12 != (BracketData)0x0));
  }
  goto LAB_00100af9;
  while( true ) {
    piVar17[1] = 0;
    piVar17 = piVar17 + -6;
    if ((int *)(lVar14 + -0x30 + (long)(int)uVar18 * 0x18 + (ulong)((uVar18 - uVar13) - 1) * -0x18)
        == piVar17) break;
LAB_00100ed0:
    if (*piVar17 != iVar8) break;
  }
LAB_00100ed4:
  uVar13 = *(ushort *)(pBVar20 + 0x1fe);
  if ((int)(uVar18 + 1) < (int)(uint)uVar13) {
    lVar14 = *(long *)(param_1 + 0x1e8);
    piVar17 = (int *)(lVar14 + 0x1c + (long)(int)uVar18 * 0x18);
    do {
      if (param_2 <= piVar17[-1]) break;
      if (0 < *piVar17) {
        *piVar17 = 0;
      }
      piVar17 = piVar17 + 6;
    } while ((int *)(lVar14 + 0x34 + ((ulong)((uVar13 - 2) - uVar18) + (long)(int)uVar18) * 0x18) !=
             piVar17);
  }
  goto LAB_00100cc1;
  while( true ) {
    uVar9 = (int)uVar10 - 1;
    uVar10 = (ulong)uVar9;
    lVar14 = lVar14 + -0x18;
    uVar7 = (ushort)uVar9;
    *(ushort *)(pBVar20 + 0x1fe) = uVar7;
    if (uVar7 <= uVar13) break;
LAB_00100cbc:
    if (*(int *)(lVar14 + -0x18) != iVar8) break;
  }
LAB_00100cc1:
  lVar14 = *(long *)param_1;
  lVar11 = *(long *)(lVar14 + 0x78);
  if ((char)uVar16 == '\n') {
LAB_00100bf6:
    bVar1 = *(byte *)(*(long *)(lVar14 + 0x78) + lVar22);
    if ((char)bVar1 < '\0') {
      BVar25 = (BracketData)(bVar1 & 1);
LAB_00100ac7:
      uVar5 = CONCAT11(BVar25,BVar25);
LAB_00100acc:
      lVar14 = lVar21 * 0x10;
      *(undefined2 *)(param_1 + lVar14 + 0x201) = uVar5;
      *(uint *)(param_1 + lVar14 + 0x204) = (uint)(byte)BVar25;
      *(int *)(param_1 + lVar14 + 0x1f8) = param_2;
      uVar13 = (ushort)(1 << (sbyte)BVar25);
LAB_00100af9:
      uVar7 = *(ushort *)(param_1 + lVar21 * 0x10 + 0x1fc);
      uVar2 = *(ushort *)(param_1 + lVar21 * 0x10 + 0x1fe);
      if (uVar7 < uVar2) {
        lVar14 = *(long *)(param_1 + 0x1e8);
        piVar17 = (int *)(lVar14 + (ulong)uVar7 * 0x18);
        do {
          if (*piVar17 < param_2) {
            *(ushort *)(piVar17 + 3) = *(ushort *)(piVar17 + 3) | uVar13;
          }
          piVar17 = piVar17 + 6;
        } while (piVar17 !=
                 (int *)(lVar14 + 0x18 + ((ulong)((uVar2 - 1) - (uint)uVar7) + (ulong)uVar7) * 0x18)
                );
      }
    }
    else {
switchD_00100ab0_caseD_3:
      param_1[lVar21 * 0x10 + 0x202] = BVar12;
    }
  }
  else {
LAB_00100cd3:
    pbVar23 = (byte *)(lVar22 + lVar11);
    pBVar20[0x202] = (BracketData)0xa;
    *(uint *)(pBVar20 + 0x204) = uVar16;
    *(int *)(pBVar20 + 0x1f8) = param_2;
    if ((char)*pbVar23 < '\0') {
      uVar13 = *(ushort *)(pBVar20 + 0x1fc);
      BVar12 = (BracketData)(*pbVar23 & 1);
      pBVar20[0x201] = BVar12;
      if ((int)(uint)uVar13 < (int)uVar18) {
        lVar11 = *(long *)(param_1 + 0x1e8);
        lVar14 = lVar11 + (ulong)uVar13 * 0x18;
        do {
          *(ushort *)(lVar14 + 0xc) = *(ushort *)(lVar14 + 0xc) | (ushort)(1 << (sbyte)BVar12);
          lVar14 = lVar14 + 0x18;
        } while (lVar11 + ((ulong)uVar13 + (ulong)(uVar18 - uVar13)) * 0x18 != lVar14);
      }
      *pbVar23 = *pbVar23 & 0x7f;
      lVar11 = *(long *)(*(long *)param_1 + 0x78);
    }
    pbVar23 = (byte *)(lVar11 + *(int *)(*(long *)(param_1 + 0x1e8) + lVar24));
    *pbVar23 = *pbVar23 & 0x7f;
  }
  return 1;
}



/* bracketInit(UBiDi*, BracketData*) [clone .constprop.0] */

void bracketInit(UBiDi *param_1,BracketData *param_2)

{
  BracketData BVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  BracketData *pBVar8;
  
  *(UBiDi **)param_2 = param_1;
  *(undefined4 *)(param_2 + 500) = 0;
  *(undefined4 *)(param_2 + 0x1fc) = 0;
  if ((param_1[0x8e] == (UBiDi)0x0) || (piVar3 = *(int **)(param_1 + 0xd0), 0 < *piVar3)) {
    BVar1 = *(BracketData *)(param_1 + 0x8d);
    param_2[0x200] = BVar1;
    uVar4 = (uint)(byte)BVar1;
  }
  else {
    iVar2 = *(int *)(param_1 + 200);
    iVar5 = 0;
    piVar7 = piVar3;
    if (iVar2 < 1) {
      iVar5 = iVar2 + -1;
      param_2[0x200] = SUB41(piVar3[(long)iVar5 * 2 + 1],0);
    }
    else {
      do {
        if (0 < *piVar7) {
          if (iVar5 < iVar2) goto LAB_00101169;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar2 != iVar5);
      iVar5 = iVar2 + -1;
LAB_00101169:
      param_2[0x200] = *(BracketData *)(piVar3 + (long)iVar5 * 2 + 1);
      iVar5 = 0;
      piVar7 = piVar3;
      do {
        if (0 < *piVar7) {
          if (iVar5 < iVar2) goto LAB_00101197;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar2 != iVar5);
      iVar5 = iVar2 + -1;
    }
LAB_00101197:
    uVar4 = piVar3[(long)iVar5 * 2 + 1];
  }
  *(undefined4 *)(param_2 + 0x1f8) = 0;
  *(ushort *)(param_2 + 0x201) = CONCAT11((char)uVar4,(char)uVar4) & 0x101;
  pBVar8 = *(BracketData **)(param_1 + 0x48);
  *(uint *)(param_2 + 0x204) = uVar4 & 1;
  if (pBVar8 == (BracketData *)0x0) {
    pBVar8 = param_2 + 8;
    uVar6 = 0x14;
  }
  else {
    uVar6 = (undefined4)((ulong)(long)*(int *)(param_1 + 0x24) / 0x18);
  }
  *(undefined4 *)(param_2 + 0x1f0) = uVar6;
  iVar5 = *(int *)(param_1 + 0x84);
  *(BracketData **)(param_2 + 0x1e8) = pBVar8;
  param_2[0x9e8] = (BracketData)(iVar5 == 6 || iVar5 == 1);
  return;
}



/* getDirProps(UBiDi*) */

undefined8 getDirProps(UBiDi *param_1)

{
  uint *puVar1;
  UBiDi UVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  UBiDi *pUVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  UBiDi *pUVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  char cVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  long in_FS_OFFSET;
  long local_468;
  int local_450;
  int local_44c;
  int local_444;
  int local_440;
  byte local_43c;
  int aiStack_438 [128];
  int local_238 [126];
  long local_40;
  
  uVar5 = *(uint *)(param_1 + 0x88);
  iVar6 = *(int *)(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar23 = *(long *)(param_1 + 8);
  UVar2 = param_1[0x8d];
  lVar19 = *(long *)(param_1 + 0x38);
  bVar11 = (byte)UVar2 & 1;
  local_43c = bVar11;
  if ((byte)UVar2 < 0xfe) {
    if ((uVar5 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    bVar8 = false;
    local_43c = 10;
    local_450 = 0;
    *(uint *)(*(long *)(param_1 + 0xd0) + 4) = (uint)(byte)UVar2;
  }
  else {
    bVar8 = *(int *)(param_1 + 0x84) - 5U < 2;
    if ((uVar5 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar15 = *(int *)(param_1 + 0x98);
    *(uint *)(*(long *)(param_1 + 0xd0) + 4) = (uint)bVar11;
    if (0 < iVar15) {
      lVar25 = *(long *)(param_1 + 0x90);
      iVar27 = 10;
      iVar16 = 0;
      do {
        iVar28 = iVar16 + 1;
        uVar3 = *(ushort *)(lVar25 + (long)iVar16 * 2);
        uVar29 = (uint)uVar3;
        if ((((uVar29 & 0xfffffc00) == 0xd800) && (iVar15 != iVar28)) &&
           (uVar4 = *(ushort *)(lVar25 + 2 + (long)iVar16 * 2), (uVar4 & 0xfc00) == 0xdc00)) {
          iVar28 = iVar16 + 2;
          uVar29 = uVar4 + 0xfca02400 + (uint)uVar3 * 0x400;
        }
        if ((*(code **)(param_1 + 0x1c0) == (code *)0x0) ||
           (iVar16 = (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),uVar29),
           iVar16 == 0x17)) {
          iVar16 = ubidi_getClass_76_godot(uVar29);
        }
        if (iVar16 < 0x17) {
          bVar12 = (byte)iVar16;
          if ((char)iVar27 == '\n') {
            if ((bVar12 < 2) || (bVar12 == 0xd)) {
              iVar27 = iVar16;
            }
          }
          else if (bVar12 == 7) {
            iVar27 = 10;
          }
        }
        iVar16 = iVar28;
      } while (iVar28 < iVar15);
      if ((char)iVar27 != '\n') {
        local_450 = 0;
        *(uint *)(*(long *)(param_1 + 0xd0) + 4) = (uint)((char)iVar27 != '\0');
        goto LAB_001012c1;
      }
    }
    local_450 = 1;
  }
LAB_001012c1:
  if (iVar6 < 1) {
    local_444 = 0;
    local_440 = -1;
    uVar26 = *(uint *)(param_1 + 0x88) & 4;
    uVar29 = 0;
    bVar10 = (bool)(local_43c == 1 & bVar8);
  }
  else {
    local_444 = 0;
    uVar29 = 0;
    local_440 = -1;
    local_44c = -1;
    iVar15 = 0;
    do {
      lVar25 = (long)iVar15;
      iVar27 = iVar15 + 1;
      uVar3 = *(ushort *)(lVar23 + lVar25 * 2);
      uVar26 = (uint)uVar3;
      lVar17 = (long)iVar27;
      local_468 = lVar17;
      if ((((uVar26 & 0xfffffc00) == 0xd800) && (iVar6 != iVar27)) &&
         (uVar4 = *(ushort *)(lVar23 + 2 + lVar25 * 2), (uVar4 & 0xfc00) == 0xdc00)) {
        iVar27 = iVar15 + 2;
        uVar26 = uVar4 + 0xfca02400 + (uint)uVar3 * 0x400;
        local_468 = (long)iVar27;
        lVar25 = lVar17;
      }
      if ((*(code **)(param_1 + 0x1c0) == (code *)0x0) ||
         (uVar13 = (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),uVar26),
         uVar13 == 0x17)) {
        uVar13 = ubidi_getClass_76_godot(uVar26);
        if (0x16 < (int)uVar13) goto LAB_00101663;
LAB_00101364:
        uVar14 = (uint)(1L << ((byte)uVar13 & 0x3f));
      }
      else {
        if ((int)uVar13 < 0x17) goto LAB_00101364;
LAB_00101663:
        uVar13 = 10;
        uVar14 = 0x400;
      }
      uVar29 = uVar29 | uVar14;
      cVar22 = (char)uVar13;
      *(char *)(lVar19 + lVar25) = cVar22;
      if ((int)uVar26 < 0x10000) {
        if (((uVar5 & 2) != 0) &&
           ((((uVar26 & 0xfffffffc) == 0x200c || (uVar26 - 0x202a < 5)) || (uVar26 - 0x2066 < 4))))
        {
          local_444 = local_444 + 1;
          goto LAB_001014e3;
        }
        switch(uVar13 & 0xff) {
        case 0:
          goto switchD_001013b8_caseD_0;
        case 1:
        case 0xd:
          goto switchD_001013b8_caseD_1;
        case 7:
          bVar9 = iVar27 < iVar6;
          if ((uVar26 != 0xd || !bVar9) ||
             (bVar9 = uVar26 == 0xd && bVar9, *(short *)(lVar23 + local_468 * 2) != 10))
          goto LAB_00101506;
          break;
        case 0x13:
        case 0x14:
        case 0x15:
          goto switchD_001013b8_caseD_13;
        case 0x16:
          goto switchD_001013b8_caseD_16;
        }
      }
      else {
        uVar29 = uVar29 | 0x40000;
        *(undefined1 *)(lVar19 + -2 + local_468) = 0x12;
        if ((uVar5 & 2) == 0) {
LAB_001014e3:
          switch(uVar13 & 0xff) {
          case 0:
            goto switchD_001013b8_caseD_0;
          case 1:
          case 0xd:
            goto switchD_001013b8_caseD_1;
          default:
            goto switchD_001013b8_caseD_2;
          case 7:
            goto switchD_001013b8_caseD_7;
          case 0x13:
          case 0x14:
          case 0x15:
            goto switchD_001013b8_caseD_13;
          case 0x16:
            goto switchD_001013b8_caseD_16;
          }
        }
        switch(uVar13 & 0xff) {
        case 0:
switchD_001013b8_caseD_0:
          if (local_450 == 1) {
            local_43c = 0;
            local_450 = 0;
            *(undefined4 *)(*(long *)(param_1 + 0xd0) + -4 + (long)*(int *)(param_1 + 200) * 8) = 0;
          }
          else {
            local_43c = 0;
            if ((local_450 == 2) && (local_450 = 3, local_44c < 0x7e)) {
              uVar29 = uVar29 | 0x100000;
            }
          }
          break;
        case 1:
        case 0xd:
switchD_001013b8_caseD_1:
          if (local_450 == 1) {
            local_450 = 0;
            *(undefined4 *)(*(long *)(param_1 + 0xd0) + -4 + (long)*(int *)(param_1 + 200) * 8) = 1;
          }
          else if (local_450 == 2) {
            local_450 = 3;
            if (local_44c < 0x7e) {
              uVar29 = uVar29 | 0x200000;
              *(undefined1 *)(lVar19 + aiStack_438[local_44c]) = 0x15;
            }
          }
          local_43c = 1;
          if (cVar22 == '\r') {
            local_440 = iVar27 + -1;
          }
        default:
          break;
        case 7:
switchD_001013b8_caseD_7:
          bVar9 = iVar27 < iVar6;
LAB_00101506:
          iVar15 = *(int *)(param_1 + 200);
          pUVar7 = *(UBiDi **)(param_1 + 0xd0);
          pUVar18 = pUVar7 + (long)iVar15 * 8 + -8;
          *(int *)pUVar18 = iVar27;
          bVar10 = (bool)(local_43c == 1 & bVar8);
          if (bVar10) {
            *(undefined4 *)(pUVar18 + 4) = 1;
          }
          uVar26 = *(uint *)(param_1 + 0x88) & 4;
          if (uVar26 != 0) {
            *(int *)(param_1 + 0x14) = iVar27;
            *(int *)(param_1 + 0x1b8) = local_444;
          }
          if (!bVar9) goto LAB_001016f1;
          iVar15 = iVar15 + 1;
          pUVar18 = param_1 + 0xd8;
          *(int *)(param_1 + 200) = iVar15;
          if (pUVar7 == pUVar18) {
            if (10 < iVar15) {
              puVar21 = *(undefined8 **)(param_1 + 0x50);
              if (puVar21 == (undefined8 *)0x0) {
                puVar21 = (undefined8 *)uprv_malloc_76_godot(0xa0);
                *(undefined8 **)(param_1 + 0x50) = puVar21;
                if (puVar21 == (undefined8 *)0x0) {
                  uVar20 = 0;
                  goto LAB_0010179f;
                }
LAB_00101881:
                *(undefined4 *)(param_1 + 0x28) = 0xa0;
              }
              else if (*(int *)(param_1 + 0x28) < 0xa0) {
                puVar21 = (undefined8 *)uprv_realloc_76_godot(puVar21,0xa0);
                if (puVar21 == (undefined8 *)0x0) goto LAB_00101b18;
                *(undefined8 **)(param_1 + 0x50) = puVar21;
                goto LAB_00101881;
              }
              uVar20 = *(undefined8 *)(param_1 + 0xe0);
              *(undefined8 **)(param_1 + 0xd0) = puVar21;
              *puVar21 = *(undefined8 *)(param_1 + 0xd8);
              puVar21[1] = uVar20;
              uVar20 = *(undefined8 *)(param_1 + 0xf0);
              puVar21[2] = *(undefined8 *)(param_1 + 0xe8);
              puVar21[3] = uVar20;
              uVar20 = *(undefined8 *)(param_1 + 0x100);
              puVar21[4] = *(undefined8 *)(param_1 + 0xf8);
              puVar21[5] = uVar20;
              uVar20 = *(undefined8 *)(param_1 + 0x110);
              puVar21[6] = *(undefined8 *)(param_1 + 0x108);
              puVar21[7] = uVar20;
              uVar20 = *(undefined8 *)(param_1 + 0x120);
              puVar21[8] = *(undefined8 *)(param_1 + 0x118);
              puVar21[9] = uVar20;
              pUVar18 = *(UBiDi **)(param_1 + 0xd0);
              iVar15 = *(int *)(param_1 + 200);
            }
          }
          else {
            pUVar18 = *(UBiDi **)(param_1 + 0x50);
            iVar16 = iVar15 * 0x10;
            if (pUVar18 == (UBiDi *)0x0) {
              pUVar18 = (UBiDi *)uprv_malloc_76_godot((long)iVar16);
              *(UBiDi **)(param_1 + 0x50) = pUVar18;
              if (pUVar18 == (UBiDi *)0x0) {
LAB_00101b18:
                uVar20 = 0;
                goto LAB_0010179f;
              }
LAB_001015a5:
              *(int *)(param_1 + 0x28) = iVar16;
              iVar15 = *(int *)(param_1 + 200);
            }
            else if (*(int *)(param_1 + 0x28) < iVar16) {
              pUVar18 = (UBiDi *)uprv_realloc_76_godot(pUVar18,(long)iVar16);
              if (pUVar18 == (UBiDi *)0x0) goto LAB_00101b18;
              *(UBiDi **)(param_1 + 0x50) = pUVar18;
              goto LAB_001015a5;
            }
            *(UBiDi **)(param_1 + 0xd0) = pUVar18;
          }
          if ((byte)UVar2 < 0xfe) {
            local_44c = -1;
            local_450 = 0;
            *(uint *)(pUVar18 + (long)iVar15 * 8 + -4) = (uint)(byte)param_1[0x8d];
          }
          else {
            local_44c = -1;
            local_450 = 1;
            *(uint *)(pUVar18 + (long)iVar15 * 8 + -4) = (uint)bVar11;
            local_43c = bVar11;
          }
          break;
        case 0x13:
        case 0x14:
        case 0x15:
switchD_001013b8_caseD_13:
          local_44c = local_44c + 1;
          if (local_44c < 0x7e) {
            aiStack_438[local_44c] = iVar27 + -1;
            local_238[local_44c] = local_450;
          }
          local_450 = 3;
          if (cVar22 == '\x13') {
            *(char *)(lVar19 + lVar25) = '\x14';
            local_450 = 2;
          }
          break;
        case 0x16:
switchD_001013b8_caseD_16:
          if (local_450 == 2) {
            if (0x7d < local_44c) goto LAB_001014ac;
            uVar29 = uVar29 | 0x100000;
            if (-1 < local_44c) goto LAB_0010149c;
          }
          else if (-1 < local_44c) {
            if (local_44c < 0x7e) {
LAB_0010149c:
              local_450 = local_238[local_44c];
            }
LAB_001014ac:
            local_44c = local_44c + -1;
          }
        }
      }
switchD_001013b8_caseD_2:
      iVar15 = iVar27;
    } while (iVar27 < iVar6);
    uVar26 = *(uint *)(param_1 + 0x88) & 4;
    bVar10 = (bool)(local_43c == 1 & bVar8);
LAB_001016f1:
    if (local_44c < 0x7e) {
      if (local_44c < 0) goto LAB_00101701;
      if (local_450 != 2) {
        piVar24 = local_238 + local_44c;
        do {
          iVar15 = *piVar24;
          if (piVar24 == local_238) goto LAB_00101701;
          piVar24 = piVar24 + -1;
        } while (iVar15 != 2);
      }
    }
    uVar29 = uVar29 | 0x100000;
  }
LAB_00101701:
  if (uVar26 == 0) {
    lVar23 = (long)*(int *)(param_1 + 200);
    *(int *)(*(long *)(param_1 + 0xd0) + -8 + lVar23 * 8) = iVar6;
    *(int *)(param_1 + 0x1b8) = local_444;
  }
  else {
    if (*(int *)(param_1 + 0x14) < iVar6) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
    }
    lVar23 = (long)*(int *)(param_1 + 200);
  }
  if (bVar10) {
    *(undefined4 *)(*(long *)(param_1 + 0xd0) + -4 + (long)(int)lVar23 * 8) = 1;
  }
  if (0xfd < (byte)UVar2) {
    param_1[0x8d] = SUB41(*(undefined4 *)(*(long *)(param_1 + 0xd0) + 4),0);
  }
  if (0 < (int)lVar23) {
    lVar19 = *(long *)(param_1 + 0xd0);
    lVar23 = lVar19 + lVar23 * 8;
    do {
      puVar1 = (uint *)(lVar19 + 4);
      lVar19 = lVar19 + 8;
      uVar29 = uVar29 | *(uint *)((long)&flagLR + (ulong)(*puVar1 & 1) * 4);
    } while (lVar19 != lVar23);
  }
  if ((param_1[0x8c] != (UBiDi)0x0) && ((uVar29 & 0x80) != 0)) {
    uVar29 = uVar29 | 1;
  }
  *(uint *)(param_1 + 0xbc) = uVar29;
  *(int *)(param_1 + 0xc0) = local_440;
  uVar20 = 1;
LAB_0010179f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
}



/* resolveImplicitLevels(UBiDi*, int, int, unsigned char, unsigned char) */

void resolveImplicitLevels(UBiDi *param_1,int param_2,int param_3,uchar param_4,uchar param_5)

{
  ushort uVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  UBiDi UVar16;
  int *piVar17;
  ulong uVar18;
  ushort uVar19;
  UBiDi *pUVar20;
  UBiDi *pUVar21;
  UBiDi *pUVar22;
  UBiDi *pUVar23;
  int iVar24;
  undefined2 uVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  long in_FS_OFFSET;
  uint local_a0;
  uchar local_7d;
  int local_70;
  byte local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  int local_48;
  byte local_44;
  long local_40;
  
  pUVar23 = (UBiDi *)(ulong)param_5;
  uVar8 = (uint)param_4;
  lVar2 = *(long *)(param_1 + 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = false;
  if (param_2 < *(int *)(param_1 + 0xc0)) {
    if ((param_1[0x8e] == (UBiDi)0x0) || (piVar3 = *(int **)(param_1 + 0xd0), param_2 < *piVar3)) {
      uVar9 = (uint)(byte)param_1[0x8d];
    }
    else {
      iVar28 = *(int *)(param_1 + 200);
      iVar7 = 0;
      piVar17 = piVar3;
      if (0 < iVar28) {
        do {
          if (param_2 < *piVar17) {
            if (iVar7 < iVar28) goto LAB_00102083;
            break;
          }
          iVar7 = iVar7 + 1;
          piVar17 = piVar17 + 2;
        } while (iVar28 != iVar7);
      }
      iVar7 = iVar28 + -1;
LAB_00102083:
      uVar9 = piVar3[(long)iVar7 * 2 + 1];
    }
    bVar4 = false;
    if ((uVar9 & 1) != 0) {
      bVar4 = *(int *)(param_1 + 0x84) - 5U < 2;
    }
  }
  uVar18 = (ulong)param_2;
  local_54 = 0xffffffffffffffff;
  local_44 = *(byte *)(*(long *)(param_1 + 0x78) + uVar18);
  local_68 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)(local_44 & 1) * 8);
  uStack_60 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10 + (ulong)(local_44 & 1) * 8);
  local_48 = param_2;
  if ((param_2 == 0) && (0 < *(int *)(param_1 + 0x98))) {
    lVar13 = *(long *)(param_1 + 0x90);
    iVar7 = *(int *)(param_1 + 0x98);
    do {
      iVar28 = iVar7 + -1;
      uVar9 = (uint)*(ushort *)(lVar13 + (long)iVar28 * 2);
      if ((((uVar9 & 0xfffffc00) == 0xdc00) && (iVar28 != 0)) &&
         (uVar8 = (uint)*(ushort *)(lVar13 + -2 + (long)iVar28 * 2), (uVar8 & 0xfffffc00) == 0xd800)
         ) {
        iVar28 = iVar7 + -2;
        uVar9 = uVar9 + 0xfca02400 + uVar8 * 0x400;
        pcVar12 = *(code **)(param_1 + 0x1c0);
        if (pcVar12 == (code *)0x0) goto LAB_00102168;
LAB_001020c0:
        uVar8 = (*pcVar12)(*(undefined8 *)(param_1 + 0x1c8),uVar9);
        if (uVar8 == 0x17) goto LAB_00102168;
      }
      else {
        pcVar12 = *(code **)(param_1 + 0x1c0);
        if (pcVar12 != (code *)0x0) goto LAB_001020c0;
LAB_00102168:
        uVar8 = ubidi_getClass_76_godot(uVar9);
      }
      if ((int)uVar8 < 0x17) {
        cVar6 = (char)uVar8;
        if (cVar6 == '\0') goto LAB_00101c6e;
        if ((cVar6 == '\x01') || (cVar6 == '\r')) {
          uVar8 = 1;
          goto LAB_00101c6e;
        }
        if (cVar6 == '\a') break;
      }
      iVar7 = iVar28;
    } while (iVar28 != 0);
    uVar8 = (uint)param_4;
  }
LAB_00101c6e:
  if (*(char *)(lVar2 + uVar18) == '\x16') {
    iVar7 = *(int *)(param_1 + 0x144);
    if (-1 < iVar7) {
      puVar14 = (undefined4 *)((long)iVar7 * 0x10 + *(long *)(param_1 + 0x148));
      local_58 = *puVar14;
      uVar8 = puVar14[1];
      uVar26 = (ulong)*(ushort *)(puVar14 + 3);
      local_4c = puVar14[2];
      *(int *)(param_1 + 0x144) = iVar7 + -1;
      goto LAB_00101cbd;
    }
    uVar26 = 0;
  }
  else {
    uVar26 = (ulong)(uVar8 + 1 & 0xff);
    if (*(char *)(lVar2 + uVar18) != '\x11') {
      uVar26 = 0;
    }
  }
  local_58 = 0xffffffff;
  local_4c = 0;
  pUVar23 = (UBiDi *)(ulong)(uint)param_2;
  processPropertySeq(param_1,(LevState *)&local_68,(uchar)uVar8,param_2,param_2);
  uVar8 = param_2;
LAB_00101cbd:
  uVar25 = (undefined2)uVar26;
  pUVar21 = (UBiDi *)(ulong)uVar8;
  local_70 = -1;
  pUVar20 = (UBiDi *)(long)(param_3 + -1);
  local_69 = 1;
  local_a0 = param_2;
  if (param_2 <= param_3) {
    do {
      while( true ) {
        uVar25 = (undefined2)uVar26;
        uVar8 = (uint)uVar18;
        pUVar22 = (UBiDi *)(uVar18 & 0xffffffff);
        iVar7 = (int)pUVar21;
        if (param_3 <= (int)uVar8) break;
        bVar5 = *(byte *)(lVar2 + uVar18);
        if (bVar5 == 7) {
          *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
          uVar9 = 6;
        }
        else if (bVar4) {
          uVar9 = 1;
          if (bVar5 != 0xd) {
            if (bVar5 != 2) goto LAB_00101dd0;
            if ((int)uVar8 < local_70) {
LAB_00101d28:
              uVar9 = (local_69 == 0xd) + 2;
            }
            else {
              if ((int)(uVar8 + 1) < param_3) {
                lVar13 = (long)(int)(uVar8 + 1);
                do {
                  local_69 = *(byte *)(lVar2 + lVar13);
                  if ((local_69 < 2) || (local_69 == 0xd)) {
                    local_70 = (int)lVar13;
                    goto LAB_00101d28;
                  }
                  lVar13 = lVar13 + 1;
                } while ((int)lVar13 < param_3);
              }
              uVar9 = 2;
              local_69 = 1;
              local_70 = param_3;
            }
          }
        }
        else {
LAB_00101dd0:
          uVar9 = (uint)(byte)groupProp[bVar5];
        }
        puVar15 = impTabProps + uVar26 * 0x10;
        bVar5 = (byte)puVar15[(int)uVar9] >> 5;
        uVar27 = (ulong)((byte)puVar15[(int)uVar9] & 0x1f);
        uVar9 = (uint)bVar5;
LAB_00101d59:
        uVar25 = (undefined2)uVar27;
        if (bVar5 != 0) {
          bVar5 = impTabProps[uVar26 * 0x10 + 0xf];
          uVar19 = (ushort)uVar9;
          if (uVar19 == 3) {
            processPropertySeq(param_1,(LevState *)&local_68,bVar5,iVar7,local_a0);
            pUVar23 = pUVar22;
            processPropertySeq(param_1,(LevState *)&local_68,'\x04',local_a0,uVar8);
            pUVar21 = pUVar22;
          }
          else if (uVar19 < 4) {
            if (uVar19 == 1) goto LAB_00101e7d;
            local_a0 = uVar8;
            if (uVar19 != 2) {
              resolveImplicitLevels(pUVar21,uVar9,(uint)bVar5,(uchar)puVar15,(uchar)pUVar23);
              return;
            }
          }
          else {
            if (uVar19 != 4) {
              resolveImplicitLevels(pUVar21,uVar9,(uint)bVar5,(uchar)puVar15,(uchar)pUVar23);
              return;
            }
            pUVar23 = (UBiDi *)(ulong)local_a0;
            processPropertySeq(param_1,(LevState *)&local_68,bVar5,iVar7,local_a0);
            pUVar21 = (UBiDi *)(ulong)local_a0;
            local_a0 = uVar8;
          }
        }
        uVar18 = uVar18 + 1;
        pUVar22 = pUVar21;
        uVar26 = uVar27;
        if (param_3 < (int)uVar18) goto LAB_00101eb0;
      }
      UVar16 = pUVar20[lVar2];
      if (param_2 < param_3 + -1) {
        lVar13 = (long)(param_3 + -2);
        do {
          lVar10 = lVar13;
          UVar16 = *(UBiDi *)(lVar2 + 1 + lVar10);
          if ((0x5d800UL >> ((ulong)(byte)UVar16 & 0x3f) & 1) == 0) goto LAB_00101e3b;
          lVar13 = lVar10 + -1;
        } while (((long)param_3 + -3) - (ulong)(uint)((param_3 + -2) - param_2) != lVar10 + -1);
        UVar16 = *(UBiDi *)(lVar2 + (int)lVar10);
      }
LAB_00101e3b:
      if ((byte)((char)UVar16 - 0x14U) < 2) goto LAB_00101eb8;
      puVar15 = impTabProps + uVar26 * 0x10;
      bVar5 = (byte)puVar15[param_5] >> 5;
      uVar27 = (ulong)((byte)puVar15[param_5] & 0x1f);
      uVar9 = (uint)bVar5;
      pUVar23 = pUVar20;
      if ((param_3 != uVar8) || (bVar5 != 0)) goto LAB_00101d59;
      bVar5 = impTabProps[uVar26 * 0x10 + 0xf];
LAB_00101e7d:
      uVar25 = (undefined2)uVar27;
      pUVar23 = pUVar22;
      processPropertySeq(param_1,(LevState *)&local_68,bVar5,iVar7,uVar8);
      uVar18 = uVar18 + 1;
      pUVar21 = pUVar22;
      uVar26 = uVar27;
    } while ((int)uVar18 <= param_3);
LAB_00101eb0:
    pUVar20 = (UBiDi *)(long)(param_3 + -1);
    pUVar21 = pUVar22;
  }
LAB_00101eb8:
  local_7d = param_5;
  if ((*(int *)(param_1 + 0x14) == param_3) && (iVar7 = *(int *)(param_1 + 0xa8), 0 < iVar7)) {
    lVar13 = *(long *)(param_1 + 0xa0);
    iVar28 = 0;
    do {
      iVar24 = iVar28 + 1;
      uVar19 = *(ushort *)(lVar13 + (long)iVar28 * 2);
      uVar8 = (uint)uVar19;
      if ((((uVar8 & 0xfffffc00) == 0xd800) && (iVar7 != iVar24)) &&
         (uVar1 = *(ushort *)(lVar13 + 2 + (long)iVar28 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
        iVar24 = iVar28 + 2;
        uVar8 = uVar1 + 0xfca02400 + (uint)uVar19 * 0x400;
      }
      if ((*(code **)(param_1 + 0x1c0) == (code *)0x0) ||
         (uVar9 = (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),uVar8),
         uVar9 == 0x17)) {
        uVar9 = ubidi_getClass_76_godot(uVar8);
      }
      if ((int)uVar9 < 0x17) {
        local_7d = (uchar)uVar9;
        switch(uVar9 & 0xff) {
        case 0:
        case 2:
          goto LAB_00101ec2;
        case 1:
        case 0xd:
          local_7d = '\x01';
          goto LAB_00101ec2;
        case 5:
          local_7d = '\x03';
          goto LAB_00101ec2;
        }
      }
      local_7d = param_5;
      iVar28 = iVar24;
    } while (iVar24 < iVar7);
  }
LAB_00101ec2:
  UVar16 = pUVar20[lVar2];
  if (param_2 < param_3 + -1) {
    pUVar23 = (UBiDi *)(long)(param_3 + -2);
    do {
      pUVar22 = pUVar23;
      UVar16 = pUVar22[lVar2 + 1];
      if ((0x5d800UL >> ((ulong)(byte)UVar16 & 0x3f) & 1) == 0) goto LAB_00101f0b;
      pUVar23 = pUVar22 + -1;
    } while (pUVar22 + -1 != pUVar20 + (-2 - (ulong)(((param_3 + -1) - param_2) - 1)));
    UVar16 = *(UBiDi *)(lVar2 + (int)pUVar22);
  }
LAB_00101f0b:
  if (((byte)((char)UVar16 - 0x14U) < 2) && (param_3 < *(int *)(param_1 + 0x14))) {
    iVar7 = *(int *)(param_1 + 0x144);
    *(int *)(param_1 + 0x144) = iVar7 + 1;
    puVar11 = (undefined8 *)((long)(iVar7 + 1) * 0x10 + *(long *)(param_1 + 0x148));
    *(undefined2 *)((long)puVar11 + 0xc) = uVar25;
    *(undefined4 *)(puVar11 + 1) = local_4c;
    *puVar11 = CONCAT44((int)pUVar21,local_58);
  }
  else {
    processPropertySeq(param_1,(LevState *)&local_68,local_7d,param_3,param_3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* resolveExplicitLevels(UBiDi*, UErrorCode*) */

uint resolveExplicitLevels(UBiDi *param_1,UErrorCode *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  UBiDi UVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  short *psVar23;
  long lVar24;
  uint uVar25;
  char *pcVar26;
  UBiDi *pUVar27;
  UBiDi UVar28;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong local_b60;
  int local_b48;
  int local_b44;
  ushort local_b38 [128];
  BracketData local_a38 [14];
  ushort auStack_a2a [2];
  undefined1 auStack_a26 [482];
  undefined8 local_844;
  undefined2 local_83a;
  UBiDi local_838;
  byte local_837;
  byte local_836 [2];
  uint local_834;
  undefined4 auStack_830 [2];
  byte abStack_828 [4];
  uint auStack_824 [505];
  long local_40;
  
  lVar22 = *(long *)(param_1 + 0x70);
  uVar25 = *(uint *)(param_1 + 0xbc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(param_1 + 0x78);
  lVar24 = *(long *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x14);
  if ((param_1[0x8e] == (UBiDi)0x0) || (piVar14 = *(int **)(param_1 + 0xd0), 0 < *piVar14)) {
    UVar19 = param_1[0x8d];
  }
  else {
    iVar6 = *(int *)(param_1 + 200);
    iVar11 = 0;
    piVar20 = piVar14;
    if (0 < iVar6) {
      do {
        if (0 < *piVar20) {
          if (iVar11 < iVar6) goto LAB_0010250f;
          break;
        }
        iVar11 = iVar11 + 1;
        piVar20 = piVar20 + 2;
      } while (iVar11 != iVar6);
    }
    iVar11 = iVar6 + -1;
LAB_0010250f:
    UVar19 = *(UBiDi *)(piVar14 + (long)iVar11 * 2 + 1);
  }
  uVar17 = (uint)(byte)UVar19;
  *(undefined4 *)(param_1 + 0x144) = 0;
  uVar10 = 0;
  if ((*(int *)param_2 < 1) &&
     ((((uVar25 & 0x20e002) != 0 ||
       ((uVar10 = uVar25 & 0x20, uVar10 != 0 && (uVar10 = uVar25 & 0x7ddfd8, uVar10 != 0)))) &&
      (uVar10 = 1, (uVar25 & 0x1901825) != 0)))) {
    if (*(int *)(param_1 + 0x84) < 2) {
      if ((uVar25 & 0x79d800) != 0) {
        auVar30._0_8_ = bracketInit(param_1,local_a38);
        auVar30._8_8_ = extraout_XMM0_Qb;
        local_b38[0] = (ushort)(byte)UVar19;
        if (iVar4 < 1) {
          uVar25 = 0;
          uVar10 = 0;
        }
        else {
          iVar6 = 0;
          uVar25 = 0;
          iVar21 = 0;
          iVar11 = 0;
          local_b48 = 0;
          local_b60 = 0;
          local_b44 = 0;
          uVar10 = uVar17;
LAB_001025b0:
          do {
            lVar18 = (long)iVar21;
            pbVar1 = (byte *)(lVar22 + lVar18);
            bVar16 = *pbVar1;
            pUVar27 = (UBiDi *)(lVar7 + lVar18);
            UVar19 = SUB41(uVar10,0);
            UVar28 = SUB41(uVar17,0);
            switch(bVar16) {
            case 7:
              uVar25 = uVar25 | 0x80;
              if ((param_1[0x8e] == (UBiDi)0x0) ||
                 (piVar14 = *(int **)(param_1 + 0xd0), iVar21 < *piVar14)) {
                UVar19 = param_1[0x8d];
              }
              else {
                iVar5 = *(int *)(param_1 + 200);
                iVar13 = 0;
                piVar20 = piVar14;
                if (0 < iVar5) {
                  do {
                    if (iVar21 < *piVar20) {
                      if (iVar13 < iVar5) goto LAB_001028a3;
                      break;
                    }
                    iVar13 = iVar13 + 1;
                    piVar20 = piVar20 + 2;
                  } while (iVar13 != iVar5);
                }
                iVar13 = iVar5 + -1;
LAB_001028a3:
                UVar19 = *(UBiDi *)(piVar14 + (long)iVar13 * 2 + 1);
              }
              *pUVar27 = UVar19;
              iVar21 = iVar21 + 1;
              if (iVar4 <= iVar21) goto LAB_00102678;
              if ((*(short *)(lVar24 + lVar18 * 2) != 0xd) ||
                 (*(short *)(lVar24 + 2 + lVar18 * 2) != 10)) {
                if ((param_1[0x8e] == (UBiDi)0x0) ||
                   (piVar14 = *(int **)(param_1 + 0xd0), iVar21 < *piVar14)) {
                  local_838 = param_1[0x8d];
                }
                else {
                  iVar6 = *(int *)(param_1 + 200);
                  iVar11 = 0;
                  piVar20 = piVar14;
                  if (0 < iVar6) {
                    do {
                      if (iVar21 < *piVar20) {
                        if (iVar11 < iVar6) goto LAB_00102993;
                        break;
                      }
                      iVar11 = iVar11 + 1;
                      piVar20 = piVar20 + 2;
                    } while (iVar6 != iVar11);
                  }
                  iVar11 = iVar6 + -1;
LAB_00102993:
                  local_838 = *(UBiDi *)(piVar14 + (long)iVar11 * 2 + 1);
                }
                uVar17 = (uint)(byte)local_838;
                local_b38[0] = (ushort)(byte)local_838;
                local_83a = 0;
                iVar6 = 0;
                local_836[0] = (byte)((byte)local_838 & 1);
                local_837 = local_836[0];
                local_834 = (byte)local_838 & 1;
                local_844 = 0;
                iVar11 = 0;
                local_b48 = 0;
                local_b60 = 0;
                uVar10 = uVar17;
              }
              goto LAB_001025b0;
            default:
              if (((uVar17 ^ uVar10) & 0x7f) != 0) {
                bracketProcessBoundary(local_a38,local_b44,(uchar)UVar19,(uchar)UVar28);
                if ((char)UVar28 < '\0') {
                  uVar25 = uVar25 | 0x80000000 | (&flagO)[uVar17 & 1];
                }
                else {
                  uVar25 = uVar25 | 0x80000000 | (&flagE)[uVar17 & 1];
                }
              }
              *pUVar27 = UVar28;
              cVar8 = bracketProcessChar(local_a38,iVar21);
              auVar30._8_8_ = extraout_XMM0_Qb_00;
              auVar30._0_8_ = extraout_XMM0_Qa;
              if (cVar8 == '\0') {
                uVar10 = 0xffffffff;
                goto LAB_001024b6;
              }
              uVar25 = uVar25 | (uint)(1L << (*pbVar1 & 0x3f));
              uVar10 = uVar17;
              break;
            case 0xb:
            case 0xc:
            case 0xe:
            case 0xf:
              *pUVar27 = UVar19;
              uVar25 = uVar25 | 0x40000;
              if ((byte)(bVar16 - 0xb) < 2) {
                uVar12 = uVar17 + 2 & 0x7e;
              }
              else {
                uVar12 = (uVar17 & 0x7f) + 1 | 1;
              }
              if (((byte)uVar12 < 0x7e) && (local_b48 == 0)) {
                if (iVar11 == 0) {
                  local_b48 = 0;
                  uVar2 = (uint)local_b60 + 1;
                  local_b60 = (ulong)uVar2;
                  uVar17 = (uint)(bVar16 == 0xc || bVar16 == 0xf) << 7 | uVar12;
                  local_b38[uVar2] = (ushort)uVar17;
                  local_b44 = iVar21;
                }
                else {
LAB_00102a3e:
                  iVar11 = iVar11 + 1;
                  local_b48 = 0;
                }
              }
              else if (local_b48 == 0) goto LAB_00102a3e;
              break;
            case 0x10:
              *pUVar27 = UVar19;
              uVar25 = uVar25 | 0x40000;
              if (local_b48 == 0) {
                if (iVar11 == 0) {
                  if (((uint)local_b60 != 0) && (local_b38[local_b60] < 0x100)) {
                    uVar17 = (uint)local_b60 - 1;
                    local_b60 = (ulong)uVar17;
                    uVar17 = (uint)(byte)local_b38[uVar17];
                    local_b44 = iVar21;
                  }
                }
                else {
                  iVar11 = iVar11 + -1;
                }
              }
              break;
            case 0x12:
              *pUVar27 = UVar19;
              uVar25 = uVar25 | 0x40000;
              break;
            case 0x14:
            case 0x15:
              uVar25 = uVar25 | *(uint *)((long)&flagLR + (ulong)(uVar17 & 1) * 4);
              *pUVar27 = SUB41(uVar17 & 0x7f,0);
              if (((uVar17 ^ uVar10) & 0x7f) == 0) {
                uVar25 = uVar25 | 0x400;
              }
              else {
                uVar25 = uVar25 | 0x80000400;
                auVar30._0_8_ =
                     bracketProcessBoundary(local_a38,local_b44,(uchar)UVar19,(uchar)UVar28);
                auVar30._8_8_ = extraout_XMM0_Qb_02;
              }
              uVar12 = (uVar17 & 0x7f) + 1 | 1;
              if (bVar16 == 0x14) {
                uVar12 = uVar17 + 2 & 0x7e;
              }
              if ((local_b48 == 0 && iVar11 == 0) && (bVar9 = (byte)uVar12, bVar9 < 0x7e)) {
                iVar6 = iVar6 + 1;
                uVar25 = uVar25 | (uint)(1L << (bVar16 & 0x3f));
                if (*(int *)(param_1 + 0x144) < iVar6) {
                  *(int *)(param_1 + 0x144) = iVar6;
                }
                uVar10 = (uint)local_b60 + 1;
                local_b60 = (ulong)uVar10;
                local_b38[uVar10] = bVar9 + 0x100;
                lVar18 = (long)(int)local_844;
                iVar11 = 0;
                local_b48 = 0;
                lVar15 = lVar18 * 0x10;
                iVar13 = (int)local_844 + 1;
                auStack_a26[(lVar18 + 0x1f) * 0x10] = 10;
                auVar29._8_8_ = auVar30._8_8_;
                auVar29._0_8_ =
                     auVar30._0_8_ & 0xffffffffffff0000 | (ulong)auStack_a2a[(lVar18 + 0x1f) * 8];
                local_844 = CONCAT44(local_844._4_4_,iVar13);
                auVar30 = pshuflw(auVar29,auVar29,0);
                bVar16 = (byte)(uVar12 & 1);
                abStack_828[lVar15 + 2] = bVar16;
                abStack_828[lVar15 + 1] = bVar16;
                abStack_828[lVar15] = bVar9;
                *(uint *)(abStack_828 + lVar15 + 4) = uVar12 & 1;
                auStack_830[lVar18 * 4] = 0;
                auStack_830[lVar18 * 4 + 1] = auVar30._0_4_;
                local_b44 = iVar21;
                uVar10 = uVar17;
                uVar17 = uVar12;
              }
              else {
                local_b48 = local_b48 + 1;
                *pbVar1 = 9;
                uVar10 = uVar17;
              }
              break;
            case 0x16:
              if (((uVar17 ^ uVar10) & 0x7f) != 0) {
                uVar25 = uVar25 | 0x80000000;
                auVar30._0_8_ =
                     bracketProcessBoundary(local_a38,local_b44,(uchar)UVar19,(uchar)UVar28);
                auVar30._8_8_ = extraout_XMM0_Qb_01;
              }
              uVar3 = local_b38[local_b60];
              if (local_b48 == 0) {
                if (iVar6 == 0) {
                  *pbVar1 = 9;
                }
                else {
                  uVar25 = uVar25 | 0x400000;
                  uVar10 = (uint)local_b60;
                  while (uVar3 < 0x100) {
                    uVar10 = (int)local_b60 - 1;
                    local_b60 = (ulong)uVar10;
                    uVar3 = local_b38[local_b60];
                  }
                  local_b60 = (ulong)(uVar10 - 1);
                  iVar6 = iVar6 + -1;
                  iVar13 = (int)local_844 + -1;
                  iVar11 = 0;
                  local_844 = CONCAT44(local_844._4_4_,iVar13);
                  local_836[(long)iVar13 * 0x10] = 10;
                  local_b44 = iVar21;
                }
              }
              else {
                local_b48 = local_b48 + -1;
                *pbVar1 = 9;
              }
              uVar3 = local_b38[local_b60];
              uVar25 = uVar25 | *(uint *)((long)&flagLR + (ulong)(uVar3 & 1) * 4) | 0x400;
              *pUVar27 = (UBiDi)((byte)uVar3 & 0x7f);
              uVar10 = (uint)uVar3;
              uVar17 = (uint)uVar3;
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < iVar4);
LAB_00102678:
          if ((((uVar25 & 0x7fdfd8) != 0) &&
              (uVar25 = uVar25 | *(uint *)((long)&flagLR + (ulong)((byte)param_1[0x8d] & 1) * 4),
              param_1[0x8c] != (UBiDi)0x0)) && ((uVar25 & 0x80) != 0)) {
            uVar25 = uVar25 | 1;
          }
          if (((uVar25 & 0x20e002) != 0) ||
             ((uVar10 = uVar25 & 0x20, (uVar25 & 0x20) != 0 &&
              (uVar10 = uVar25 & 0x7ddfd8, (uVar25 & 0x7ddfd8) != 0)))) {
            uVar10 = 2 - ((uVar25 & 0x1901825) == 0);
          }
        }
        *(uint *)(param_1 + 0xbc) = uVar25;
        goto LAB_001024b6;
      }
      bracketInit(param_1,local_a38);
      lVar18 = 0;
      if (0 < *(int *)(param_1 + 200)) {
        do {
          iVar11 = 0;
          if (lVar18 != 0) {
            iVar11 = *(int *)(*(long *)(param_1 + 0xd0) + -8 + lVar18 * 8);
          }
          piVar14 = (int *)(*(long *)(param_1 + 0xd0) + lVar18 * 8);
          iVar6 = *piVar14;
          UVar19 = *(UBiDi *)(piVar14 + 1);
          if (iVar11 < iVar6) {
            lVar15 = (long)iVar11;
            pUVar27 = (UBiDi *)(lVar7 + lVar15);
            psVar23 = (short *)(lVar24 + lVar15 * 2);
            pcVar26 = (char *)(lVar22 + lVar15);
            do {
              iVar21 = iVar11 + 1;
              *pUVar27 = UVar19;
              if (*pcVar26 != '\x12') {
                if (*pcVar26 == '\a') {
                  if ((iVar21 < iVar4) && ((*psVar23 != 0xd || (psVar23[1] != 10)))) {
                    local_83a = 0;
                    local_834 = (byte)UVar19 & 1;
                    local_844 = 0;
                    local_838 = UVar19;
                    local_837 = (byte)UVar19 & 1;
                    local_836[0] = (byte)UVar19 & 1;
                  }
                }
                else {
                  cVar8 = bracketProcessChar(local_a38,iVar11);
                  if (cVar8 == '\0') {
                    *(undefined4 *)param_2 = 7;
                    uVar10 = 0;
                    goto LAB_001024b6;
                  }
                }
              }
              pUVar27 = pUVar27 + 1;
              pcVar26 = pcVar26 + 1;
              psVar23 = psVar23 + 1;
              iVar11 = iVar21;
            } while (iVar21 < iVar6);
          }
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < *(int *)(param_1 + 200));
      }
    }
    else {
      lVar22 = 0;
      if (0 < *(int *)(param_1 + 200)) {
        do {
          lVar24 = 0;
          if (lVar22 != 0) {
            lVar24 = (long)*(int *)(*(long *)(param_1 + 0xd0) + -8 + lVar22 * 8);
          }
          piVar14 = (int *)(*(long *)(param_1 + 0xd0) + lVar22 * 8);
          iVar4 = *piVar14;
          if ((int)lVar24 < iVar4) {
            memset((void *)(lVar24 + lVar7),piVar14[1] & 0xff,
                   (ulong)(uint)((iVar4 + -1) - (int)lVar24) + 1);
          }
          lVar22 = lVar22 + 1;
        } while ((int)lVar22 < *(int *)(param_1 + 200));
      }
    }
    uVar10 = 2;
  }
LAB_001024b6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ubidi_getMemory_76_godot(long *param_1,int *param_2,char param_3,int param_4)

{
  long lVar1;
  
  if (*param_1 == 0) {
    if (param_3 == '\0') {
      return 0;
    }
    lVar1 = uprv_malloc_76_godot((long)param_4);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    if (param_4 <= *param_2) {
      return 1;
    }
    if (param_3 == '\0') {
      return 0;
    }
    lVar1 = uprv_realloc_76_godot(*param_1,(long)param_4);
    if (lVar1 == 0) {
      return 0;
    }
    *param_1 = lVar1;
  }
  *param_2 = param_4;
  return 1;
}



void ubidi_close_76_godot(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    if (param_1[7] != 0) {
      uprv_free_76_godot();
    }
    if (param_1[8] != 0) {
      uprv_free_76_godot();
    }
    if (param_1[9] != 0) {
      uprv_free_76_godot();
    }
    if (param_1[10] != 0) {
      uprv_free_76_godot();
    }
    if (param_1[0xb] != 0) {
      uprv_free_76_godot();
    }
    if (param_1[0xc] != 0) {
      uprv_free_76_godot();
    }
    if (param_1[0x36] != 0) {
      uprv_free_76_godot();
    }
    uprv_free_76_godot(param_1);
    return;
  }
  return;
}



undefined8 * ubidi_openSized_76_godot(uint param_1,uint param_2,int *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (param_3 == (int *)0x0) {
    return (undefined8 *)0x0;
  }
  if (0 < *param_3) {
    return (undefined8 *)0x0;
  }
  if ((int)(param_1 | param_2) < 0) {
    *param_3 = 1;
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)uprv_malloc_76_godot(0x1d0);
  if (puVar1 == (undefined8 *)0x0) {
    *param_3 = 7;
    return (undefined8 *)0x0;
  }
  *puVar1 = 0;
  puVar1[0x39] = 0;
  puVar5 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)puVar1 - (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8))
                       + 0x1d0U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
  }
  if (param_1 == 0) {
    *(undefined1 *)(puVar1 + 0xd) = 1;
  }
  else {
    lVar6 = (long)(int)param_1;
    lVar2 = uprv_malloc_76_godot(lVar6);
    puVar1[7] = lVar2;
    if (lVar2 == 0) {
LAB_001030f1:
      *param_3 = 7;
    }
    else {
      *(uint *)((long)puVar1 + 0x1c) = param_1;
      if (puVar1[8] == 0) {
        lVar2 = uprv_malloc_76_godot(lVar6);
        puVar1[8] = lVar2;
        if (lVar2 == 0) goto LAB_001030f1;
      }
      else {
        if ((int)param_1 <= *(int *)(puVar1 + 4)) goto LAB_00102fea;
        lVar2 = uprv_realloc_76_godot(puVar1[8],lVar6);
        if (lVar2 == 0) goto LAB_001030f1;
        puVar1[8] = lVar2;
      }
      *(uint *)(puVar1 + 4) = param_1;
    }
  }
LAB_00102fea:
  if (param_2 == 0) {
    *(undefined1 *)((long)puVar1 + 0x69) = 1;
  }
  else {
    if (param_2 != 1) {
      iVar4 = param_2 * 0xc;
      if (puVar1[0xb] == 0) {
        lVar2 = uprv_malloc_76_godot((long)iVar4);
        puVar1[0xb] = lVar2;
        if (lVar2 != 0) {
LAB_00103066:
          *(int *)((long)puVar1 + 0x2c) = iVar4;
          goto LAB_00103024;
        }
      }
      else {
        if (iVar4 <= *(int *)((long)puVar1 + 0x2c)) goto LAB_00103024;
        lVar2 = uprv_realloc_76_godot(puVar1[0xb],(long)iVar4);
        if (lVar2 != 0) {
          puVar1[0xb] = lVar2;
          goto LAB_00103066;
        }
      }
      *param_3 = 7;
      goto LAB_0010302c;
    }
    *(undefined4 *)((long)puVar1 + 0x2c) = 0xc;
  }
LAB_00103024:
  if (*param_3 < 1) {
    return puVar1;
  }
LAB_0010302c:
  ubidi_close_76_godot(puVar1);
  return (undefined8 *)0x0;
}



undefined8 * ubidi_open_76_godot(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  puVar1 = (undefined8 *)uprv_malloc_76_godot(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[0x39] = 0;
    puVar3 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)(((int)puVar1 -
                         (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)) + 0x1d0U >>
                        3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    *(undefined2 *)(puVar1 + 0xd) = 0x101;
  }
  return puVar1;
}



void ubidi_setInverse_76_godot(long param_1,char param_2)

{
  if (param_1 != 0) {
    *(char *)(param_1 + 0x80) = param_2;
    *(uint *)(param_1 + 0x84) = (uint)(param_2 != '\0') << 2;
  }
  return;
}



undefined1 ubidi_isInverse_76_godot(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x80);
  }
  return uVar1;
}



void ubidi_setReorderingMode_76_godot(long param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 7)) {
    *(uint *)(param_1 + 0x84) = param_2;
    *(bool *)(param_1 + 0x80) = param_2 == 4;
    return;
  }
  return;
}



undefined4 ubidi_getReorderingMode_76_godot(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
  }
  return uVar1;
}



void ubidi_setReorderingOptions_76_godot(long param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    param_2 = param_2 & 0xfffffffe;
  }
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x88) = param_2;
  }
  return;
}



undefined4 ubidi_getReorderingOptions_76_godot(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
  }
  return uVar1;
}



undefined8 ubidi_getBaseDirection_76_godot(long param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return 3;
  }
  if (-2 < param_2) {
    if (param_2 == -1) {
      param_2 = u_strlen_76_godot();
    }
    iVar5 = 0;
    while (iVar5 < param_2) {
      iVar3 = iVar5 + 1;
      uVar1 = *(ushort *)(param_1 + (long)iVar5 * 2);
      uVar6 = (uint)uVar1;
      if ((((uVar1 & 0xfc00) == 0xd800) && (param_2 != iVar3)) &&
         (uVar2 = *(ushort *)(param_1 + 2 + (long)iVar5 * 2), (uVar2 & 0xfc00) == 0xdc00)) {
        uVar6 = uVar2 + 0xfca02400 + (uint)uVar1 * 0x400;
        iVar3 = iVar5 + 2;
      }
      iVar5 = iVar3;
      uVar4 = u_charDirection_76_godot(uVar6);
      iVar3 = (int)uVar4;
      if (iVar3 == 0) {
        return uVar4;
      }
      if ((iVar3 == 1) || (iVar3 == 0xd)) {
        return 1;
      }
    }
  }
  return 3;
}



undefined1 ubidi_getParaLevelAtIndex_76_godot(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 200);
  piVar2 = *(int **)(param_1 + 0xd0);
  if (0 < iVar1) {
    iVar3 = 0;
    piVar4 = piVar2;
    do {
      if (param_2 < *piVar4) {
        if (iVar3 < iVar1) {
          return (char)piVar2[(long)iVar3 * 2 + 1];
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar1 != iVar3);
  }
  return (char)piVar2[(long)(iVar1 + -1) * 2 + 1];
}



void ubidi_setContext_76_godot
               (long param_1,long param_2,int param_3,long param_4,int param_5,int *param_6)

{
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if ((((param_1 == 0 || param_3 < -1) || (param_5 < -1)) || ((param_2 == 0 && (param_3 != 0))))
       || ((param_4 == 0 && (param_5 != 0)))) {
      *param_6 = 1;
    }
    else {
      if (param_3 == -1) {
        param_3 = u_strlen_76_godot(param_2);
      }
      *(int *)(param_1 + 0x98) = param_3;
      if (param_5 == -1) {
        param_5 = u_strlen_76_godot(param_4);
      }
      *(int *)(param_1 + 0xa8) = param_5;
      *(long *)(param_1 + 0x90) = param_2;
      *(long *)(param_1 + 0xa0) = param_4;
    }
    return;
  }
  return;
}



void ubidi_setPara_76_godot
               (long param_1,long param_2,int param_3,char param_4,undefined8 param_5,int *param_6)

{
  if ((param_6 == (int *)0x0) || (0 < *param_6)) {
    return;
  }
  if (((param_1 != 0 && param_2 != 0) && (-2 < param_3)) && ((char)(param_4 + -0x7e) < '\0')) {
    ubidi_setPara_76_godot_part_0();
    return;
  }
  *param_6 = 1;
  return;
}



void ubidi_setPara_76_godot_part_0
               (UBiDi *param_1,long param_2,int param_3,uint param_4,long param_5,
               UErrorCode *param_6)

{
  uint *puVar1;
  void *__src;
  undefined4 uVar2;
  undefined4 uVar3;
  UBiDi UVar4;
  char cVar5;
  UBiDi UVar6;
  UBiDi UVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  UBiDi *pUVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  UBiDi *pUVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  byte bVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  int *piVar35;
  long lVar36;
  byte bVar37;
  uint uVar38;
  int iVar39;
  uint *puVar40;
  int local_78;
  uint *local_70;
  uint *local_68;
  
  UVar7 = SUB41(param_4,0);
  if (param_3 == -1) {
    param_3 = u_strlen_76_godot(param_2);
  }
  if (*(int *)(param_1 + 0x84) != 3) {
    *(long *)(param_1 + 8) = param_2;
    *(ulong *)(param_1 + 0x10) = CONCAT44(param_3,param_3);
    *(undefined8 *)param_1 = 0;
    *(int *)(param_1 + 0x18) = param_3;
    param_1[0x8d] = UVar7;
    *(uint *)(param_1 + 0xb8) = param_4 & 1;
    *(undefined4 *)(param_1 + 200) = 1;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x1a4) = 0;
    *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
    param_1[0x8e] = (UBiDi)(0xfd < (byte)UVar7);
    if (param_3 == 0) {
      if (0xfd < (byte)UVar7) {
        param_1[0x8d] = (UBiDi)((byte)UVar7 & 1);
        param_1[0x8e] = (UBiDi)0x0;
      }
      uVar2 = *(undefined4 *)((long)&flagLR + (ulong)(param_4 & 1) * 4);
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0xbc) = uVar2;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(UBiDi **)param_1 = param_1;
      return;
    }
    *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
    pUVar17 = *(UBiDi **)(param_1 + 0x50);
    if (*(UBiDi **)(param_1 + 0x50) == (UBiDi *)0x0) {
      pUVar17 = param_1 + 0xd8;
    }
    *(UBiDi **)(param_1 + 0xd0) = pUVar17;
    cVar5 = ubidi_getMemory_76_godot(param_1 + 0x38,param_1 + 0x1c,(int)(char)param_1[0x68],param_3)
    ;
    if (cVar5 != '\0') {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x38);
      cVar5 = getDirProps(param_1);
      if (cVar5 != '\0') {
        iVar11 = *(int *)(param_1 + 0x14);
        lVar13 = *(long *)(param_1 + 0x70);
        *(int *)(param_1 + 0xc4) = iVar11;
        if (param_5 == 0) {
          cVar5 = ubidi_getMemory_76_godot
                            (param_1 + 0x40,param_1 + 0x20,(int)(char)param_1[0x68],iVar11);
          if (cVar5 == '\0') goto LAB_00103585;
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x40);
          uVar38 = resolveExplicitLevels(param_1,param_6);
          iVar9 = *(int *)param_6;
        }
        else {
          *(long *)(param_1 + 0x78) = param_5;
          *(undefined4 *)(param_1 + 0x144) = 0;
          uVar38 = (uint)(byte)param_1[0x8d];
          iVar9 = **(int **)(param_1 + 0xd0);
          if (iVar11 < 1) {
            uVar28 = 0;
            uVar38 = 0;
          }
          else {
            lVar12 = 0;
            uVar28 = 0;
            iVar32 = 0;
            iVar26 = 0;
            do {
              bVar31 = *(byte *)(lVar13 + lVar12);
              bVar37 = *(byte *)(param_5 + lVar12);
              if ((byte)(bVar31 - 0x14) < 2) {
                iVar32 = iVar32 + 1;
                if (*(int *)(param_1 + 0x144) < iVar32) {
                  *(int *)(param_1 + 0x144) = iVar32;
                }
              }
              else if (bVar31 == 0x16) {
                iVar32 = iVar32 + -1;
              }
              else if (bVar31 == 7) {
                iVar32 = 0;
              }
              if (((param_1[0x8e] != (UBiDi)0x0) && (iVar9 == (int)lVar12)) &&
                 (iVar24 = iVar26 + 1, iVar24 < *(int *)(param_1 + 200))) {
                piVar35 = (int *)(*(long *)(param_1 + 0xd0) + (long)iVar24 * 8);
                uVar38 = piVar35[1];
                iVar9 = *piVar35;
                iVar26 = iVar24;
              }
              if ((int)(bVar37 & 0x7f) < (int)uVar38) {
                if ((bVar37 & 0x7f) != 0) {
LAB_00103870:
                  *(undefined4 *)param_6 = 1;
                  return;
                }
                uVar27 = 0;
                if (bVar31 == 7) goto LAB_00103627;
                *(byte *)(param_5 + lVar12) = bVar37 & 0x80 | (byte)uVar38;
                uVar27 = (ulong)(uVar38 & 1);
                if (-1 < (char)bVar37) goto LAB_0010362f;
LAB_001036d3:
                uVar28 = uVar28 | (&flagO)[uVar27];
              }
              else {
                if (0x7d < (bVar37 & 0x7f)) goto LAB_00103870;
                uVar27 = (ulong)(bVar37 & 1);
LAB_00103627:
                if ((char)bVar37 < '\0') goto LAB_001036d3;
LAB_0010362f:
                uVar28 = (uint)(1L << (bVar31 & 0x3f)) | uVar28 | (&flagE)[uVar27];
              }
              lVar12 = lVar12 + 1;
            } while (iVar11 != lVar12);
            if ((uVar28 & 0x7fdfd8) != 0) {
              uVar28 = uVar28 | *(uint *)((long)&flagLR + (ulong)((byte)param_1[0x8d] & 1) * 4);
            }
            if (((uVar28 & 0x20e002) != 0) ||
               ((uVar38 = uVar28 & 0x20, (uVar28 & 0x20) != 0 &&
                (uVar38 = uVar28 & 0x7ddfd8, (uVar28 & 0x7ddfd8) != 0)))) {
              uVar38 = 2 - ((uVar28 & 0x1901825) == 0);
            }
          }
          iVar9 = *(int *)param_6;
          *(uint *)(param_1 + 0xbc) = uVar28;
        }
        if (0 < iVar9) {
          return;
        }
        if (*(int *)(param_1 + 0x144) < 6) {
          pUVar17 = param_1 + 0x150;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x144) << 4;
          if (*(int *)(param_1 + 0x30) < iVar9) {
            if (*(long *)(param_1 + 0x60) == 0) {
              pUVar17 = (UBiDi *)uprv_malloc_76_godot((long)iVar9);
              *(UBiDi **)(param_1 + 0x60) = pUVar17;
              if (pUVar17 == (UBiDi *)0x0) goto LAB_00103585;
            }
            else {
              pUVar17 = (UBiDi *)uprv_realloc_76_godot();
              if (pUVar17 == (UBiDi *)0x0) goto LAB_00103585;
              *(UBiDi **)(param_1 + 0x60) = pUVar17;
            }
            *(int *)(param_1 + 0x30) = iVar9;
          }
          else {
            pUVar17 = *(UBiDi **)(param_1 + 0x60);
          }
        }
        *(UBiDi **)(param_1 + 0x148) = pUVar17;
        *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
        *(uint *)(param_1 + 0xb8) = uVar38;
        if (uVar38 < 2) {
          *(undefined4 *)(param_1 + 0xc4) = 0;
        }
        else {
          switch(*(undefined4 *)(param_1 + 0x84)) {
          case 0:
            puVar16 = impTab_DEFAULT;
            break;
          case 1:
            puVar16 = impTab_NUMBERS_SPECIAL;
            break;
          case 2:
            puVar16 = impTab_GROUP_NUMBERS_WITH_R;
            break;
          default:
                    /* WARNING: Subroutine does not return */
            abort();
          case 4:
            puVar16 = impTab_INVERSE_NUMBERS_AS_L;
            break;
          case 5:
            puVar16 = impTab_INVERSE_LIKE_DIRECT_WITH_MARKS;
            if (((byte)param_1[0x88] & 1) == 0) {
              puVar16 = impTab_INVERSE_LIKE_DIRECT;
            }
            break;
          case 6:
            puVar16 = impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
            if (((byte)param_1[0x88] & 1) == 0) {
              puVar16 = impTab_INVERSE_FOR_NUMBERS_SPECIAL;
            }
          }
          *(undefined1 **)(param_1 + 0xb0) = puVar16;
          if (((param_5 == 0) && (*(int *)(param_1 + 200) < 2)) && (-1 < *(int *)(param_1 + 0xbc)))
          {
            if (param_1[0x8e] == (UBiDi)0x0) {
              bVar37 = (byte)param_1[0x8d] & 1;
              bVar31 = bVar37;
            }
            else {
              iVar9 = **(int **)(param_1 + 0xd0);
              if (iVar9 < iVar11) {
                UVar7 = (UBiDi)ubidi_getParaLevelAtIndex_76_godot(param_1);
              }
              else {
                UVar7 = param_1[0x8d];
              }
              bVar31 = (byte)UVar7 & 1;
              if (iVar9 < 1) {
                bVar37 = ubidi_getParaLevelAtIndex_76_godot(param_1);
                bVar37 = bVar37 & 1;
              }
              else {
                bVar37 = (byte)param_1[0x8d] & 1;
              }
            }
            resolveImplicitLevels(param_1,0,iVar11,bVar37,bVar31);
          }
          else {
            pUVar17 = *(UBiDi **)(param_1 + 0x78);
            if ((param_1[0x8e] == (UBiDi)0x0) || (piVar35 = *(int **)(param_1 + 0xd0), 0 < *piVar35)
               ) {
              UVar7 = param_1[0x8d];
            }
            else {
              iVar9 = *(int *)(param_1 + 200);
              iVar26 = 0;
              piVar22 = piVar35;
              if (0 < iVar9) {
                do {
                  if (0 < *piVar22) {
                    if (iVar26 < iVar9) goto LAB_001045ed;
                    break;
                  }
                  iVar26 = iVar26 + 1;
                  piVar22 = piVar22 + 2;
                } while (iVar26 != iVar9);
              }
              iVar26 = iVar9 + -1;
LAB_001045ed:
              UVar7 = *(UBiDi *)(piVar35 + (long)iVar26 * 2 + 1);
            }
            UVar6 = *pUVar17;
            if ((byte)UVar7 < (byte)UVar6) {
              UVar7 = UVar6;
            }
            bVar31 = (byte)UVar7 & 1;
            iVar9 = 0;
            do {
              bVar37 = bVar31;
              iVar26 = iVar9;
              if ((iVar9 < 1) || (*(char *)(lVar13 + -1 + (long)iVar9) != '\a')) {
LAB_00103cc3:
                iVar32 = iVar9 + 1;
                if (iVar11 <= iVar32) {
LAB_00103dd2:
                  if (param_1[0x8e] != (UBiDi)0x0) {
                    piVar35 = *(int **)(param_1 + 0xd0);
                    goto LAB_00103de2;
                  }
                  goto LAB_00103e40;
                }
LAB_00103cce:
                uVar27 = (ulong)(iVar9 + 1);
                do {
                  iVar26 = (int)uVar27;
                  if ((pUVar17[uVar27] != UVar6) &&
                     ((0x5d800UL >> ((ulong)*(byte *)(lVar13 + uVar27) & 0x3f) & 1) == 0)) {
                    iVar26 = iVar26 + -1;
                    goto LAB_00103cfd;
                  }
                  uVar27 = uVar27 + 1;
                } while ((int)uVar27 < iVar11);
                uVar27 = (ulong)(iVar26 + 1);
LAB_00103cfd:
                iVar32 = (int)uVar27;
                if (iVar11 <= iVar32) goto LAB_00103dd2;
                UVar7 = pUVar17[iVar32];
              }
              else {
                if ((param_1[0x8e] == (UBiDi)0x0) ||
                   (piVar35 = *(int **)(param_1 + 0xd0), iVar9 < *piVar35)) {
                  bVar37 = (byte)param_1[0x8d] & 1;
                  goto LAB_00103cc3;
                }
                iVar32 = *(int *)(param_1 + 200);
                iVar24 = 0;
                piVar22 = piVar35;
                if (0 < iVar32) {
                  do {
                    if (iVar9 < *piVar22) {
                      if (iVar24 < iVar32) goto LAB_00103ecd;
                      break;
                    }
                    iVar24 = iVar24 + 1;
                    piVar22 = piVar22 + 2;
                  } while (iVar24 != iVar32);
                }
                iVar24 = iVar32 + -1;
LAB_00103ecd:
                iVar32 = iVar9 + 1;
                bVar37 = (byte)piVar35[(long)iVar24 * 2 + 1] & 1;
                if (iVar32 < iVar11) goto LAB_00103cce;
LAB_00103de2:
                if (*piVar35 < iVar11) {
                  iVar24 = *(int *)(param_1 + 200);
                  if (0 < iVar24) {
                    iVar33 = 0;
                    piVar22 = piVar35;
                    do {
                      if (iVar11 + -1 < *piVar22) {
                        if (iVar33 < iVar24) goto LAB_00103e26;
                        break;
                      }
                      iVar33 = iVar33 + 1;
                      piVar22 = piVar22 + 2;
                    } while (iVar24 != iVar33);
                  }
                  iVar33 = iVar24 + -1;
LAB_00103e26:
                  UVar7 = *(UBiDi *)(piVar35 + (long)iVar33 * 2 + 1);
                }
                else {
LAB_00103e40:
                  UVar7 = param_1[0x8d];
                }
              }
              UVar4 = UVar6;
              if (((byte)UVar6 & 0x7f) < ((byte)UVar7 & 0x7f)) {
                UVar4 = UVar7;
              }
              bVar31 = (byte)UVar4 & 1;
              if ((char)UVar6 < '\0') {
                pUVar25 = pUVar17 + iVar9;
                iVar24 = (int)pUVar25;
                do {
                  *pUVar25 = (UBiDi)((byte)*pUVar25 & 0x7f);
                  pUVar25 = pUVar25 + 1;
                } while (((iVar9 + -1) - iVar24) + (int)pUVar25 < iVar26);
              }
              else {
                resolveImplicitLevels(param_1,iVar9,iVar32,bVar37,bVar31);
              }
              iVar9 = iVar32;
              UVar6 = UVar7;
            } while (iVar32 < iVar11);
          }
          if (0 < *(int *)(param_1 + 0x1ac)) {
            *(int *)param_6 = *(int *)(param_1 + 0x1ac);
            return;
          }
          if ((*(uint *)(param_1 + 0xbc) & 0x7ddb80) != 0) {
            lVar12 = *(long *)(param_1 + 0x70);
            lVar19 = *(long *)(param_1 + 0x78);
            UVar7 = param_1[0x8c];
            lVar36 = (long)*(int *)(param_1 + 0xc4);
LAB_00104300:
            if (0 < (int)lVar36) {
              uVar38 = (int)lVar36 - 1;
              lVar18 = (long)(int)uVar38;
              while( true ) {
                uVar27 = 1L << (*(byte *)(lVar12 + lVar18) & 0x3f);
                iVar11 = (int)lVar18;
                if ((uVar27 & 0x7ddb80) == 0) break;
                if ((UVar7 == (UBiDi)0x0) || (UVar6 = (UBiDi)0x0, (uVar27 & 0x80) == 0)) {
                  if ((param_1[0x8e] == (UBiDi)0x0) ||
                     (piVar35 = *(int **)(param_1 + 0xd0), iVar11 < *piVar35)) {
                    UVar6 = param_1[0x8d];
                  }
                  else {
                    iVar26 = *(int *)(param_1 + 200);
                    iVar9 = 0;
                    piVar22 = piVar35;
                    if (0 < iVar26) {
                      do {
                        if (iVar11 < *piVar22) {
                          if (iVar9 < iVar26) goto LAB_00104453;
                          break;
                        }
                        iVar9 = iVar9 + 1;
                        piVar22 = piVar22 + 2;
                      } while (iVar26 != iVar9);
                    }
                    iVar9 = iVar26 + -1;
LAB_00104453:
                    UVar6 = *(UBiDi *)(piVar35 + (long)iVar9 * 2 + 1);
                  }
                }
                *(UBiDi *)(lVar19 + lVar18) = UVar6;
                lVar18 = lVar18 + -1;
                if ((lVar36 + -2) - (ulong)uVar38 == lVar18) goto LAB_00103930;
              }
              if (iVar11 != 0) {
                lVar18 = (long)(int)(iVar11 - 1U);
                do {
                  bVar31 = *(byte *)(lVar12 + lVar18);
                  uVar27 = 1L << (bVar31 & 0x3f);
                  if ((uVar27 & 0x5d800) == 0) {
                    iVar9 = (int)lVar18;
                    lVar36 = (long)iVar9;
                    if ((UVar7 != (UBiDi)0x0) && (bVar31 == 7)) {
                      *(undefined1 *)(lVar19 + lVar18) = 0;
                      goto LAB_00104300;
                    }
                    if ((uVar27 & 0x180) != 0) goto code_r0x00104399;
                  }
                  else {
                    *(undefined1 *)(lVar19 + lVar18) = *(undefined1 *)(lVar19 + 1 + lVar18);
                  }
                  lVar18 = lVar18 + -1;
                  if (lVar18 == ((long)iVar11 + -2) - (ulong)(iVar11 - 1U)) break;
                } while( true );
              }
            }
          }
        }
LAB_00103930:
        uVar38 = *(uint *)(param_1 + 0x88);
        if ((((param_1[0x8e] != (UBiDi)0x0) && ((uVar38 & 1) != 0)) &&
            (*(int *)(param_1 + 0x84) - 5U < 2)) && (0 < *(int *)(param_1 + 200))) {
          lVar12 = 0;
          do {
            piVar35 = (int *)(*(long *)(param_1 + 0xd0) + lVar12 * 8);
            if ((char)piVar35[1] != '\0') {
              iVar11 = 0;
              if (lVar12 != 0) {
                iVar11 = *(int *)(*(long *)(param_1 + 0xd0) + -8 + lVar12 * 8);
              }
              iVar26 = *piVar35;
              iVar9 = iVar26 + -1;
              if (iVar11 <= iVar9) {
                lVar19 = (long)iVar9;
LAB_00104586:
                if (*(byte *)(lVar13 + lVar19) != 0) goto LAB_00104578;
                if (((int)lVar19 < iVar9) && (*(char *)(lVar13 + iVar9) == '\a')) {
                  lVar19 = (long)(iVar26 + -2);
                  do {
                    iVar9 = (int)lVar19;
                    lVar19 = lVar19 + -1;
                  } while (*(char *)(lVar13 + 1 + lVar19) == '\a');
                }
                addPoint(param_1,iVar9,4);
              }
            }
LAB_00104530:
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < *(int *)(param_1 + 200));
          uVar38 = *(uint *)(param_1 + 0x88);
        }
        if ((uVar38 & 2) == 0) {
          iVar11 = *(int *)(param_1 + 0x1a4);
        }
        else {
          iVar11 = -*(int *)(param_1 + 0x1b8);
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar11;
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(UBiDi **)param_1 = param_1;
        return;
      }
    }
LAB_00103585:
    *(undefined4 *)param_6 = 7;
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (param_3 == 0) {
    if ((param_6 != (UErrorCode *)0x0) && (*(int *)param_6 < 1)) {
      if ((param_2 == 0) || (-1 < (char)((char)UVar7 + 0x82U))) {
        *(undefined4 *)param_6 = 1;
      }
      else {
        ubidi_setPara_76_godot_part_0(param_1,param_2,0,param_4 & 0xff,0,param_6);
      }
    }
  }
  else {
    lVar12 = (long)param_3;
    uVar27 = lVar12 * 7;
    lVar13 = uprv_malloc_76_godot(uVar27);
    if (lVar13 != 0) {
      uVar38 = *(uint *)(param_1 + 0x88);
      if ((uVar38 & 1) != 0) {
        *(uint *)(param_1 + 0x88) = uVar38 & 0xfffffffe | 2;
      }
      ubidi_setPara_76_godot(param_1,param_2,param_3,param_4 & 1,0,param_6);
      if (0 < *(int *)param_6) goto LAB_00103845;
      uVar15 = lVar12 * 4;
      lVar19 = lVar13 + uVar15;
      uVar34 = uVar15;
      if (uVar15 <= uVar27) {
        uVar34 = uVar27;
      }
      __src = (void *)(lVar19 + lVar12 * 2);
      uVar20 = uVar34 + lVar12 * -4;
      if (uVar27 < uVar20) {
        uVar27 = uVar20;
      }
      lVar12 = uVar27 + lVar12 * 2;
      uVar14 = ubidi_getLevels_76_godot(param_1,param_6);
      iVar11 = *(int *)(param_1 + 0x14);
      uVar15 = (uVar15 - uVar34) + lVar12;
      if (uVar15 < uVar27) {
        uVar15 = uVar27;
      }
      __memcpy_chk(__src,uVar14,(long)iVar11,(uVar20 - lVar12) + uVar15);
      uVar2 = *(undefined4 *)(param_1 + 0xc4);
      uVar3 = *(undefined4 *)(param_1 + 0xb8);
      uVar8 = ubidi_writeReordered_76_godot(param_1,lVar19,param_3,2,param_6);
      ubidi_getVisualMap_76_godot(param_1,lVar13,param_6);
      if (*(int *)param_6 < 1) {
        *(uint *)(param_1 + 0x88) = uVar38;
        *(undefined4 *)(param_1 + 0x84) = 5;
        UVar6 = param_1[0x68];
        param_1[0x68] = (UBiDi)0x0;
        ubidi_setPara_76_godot(param_1,lVar19,uVar8,(byte)UVar7 & 1 ^ 1,0);
        param_1[0x68] = UVar6;
        ubidi_getRuns_76_godot(param_1,param_6);
        if (*(int *)param_6 < 1) {
          puVar40 = *(uint **)(param_1 + 0x130);
          iVar9 = *(int *)(param_1 + 0x128);
          if (0 < iVar9) {
            iVar26 = 0;
            puVar21 = puVar40;
            uVar38 = 0;
            do {
              puVar1 = puVar21 + 1;
              iVar32 = *puVar1 - uVar38;
              if (1 < iVar32) {
                uVar38 = *puVar21 & 0x7fffffff;
                lVar12 = (long)(int)(uVar38 + 1);
                iVar24 = *(int *)(lVar13 + (long)(int)uVar38 * 4);
                do {
                  iVar33 = *(int *)(lVar13 + lVar12 * 4);
                  iVar39 = iVar33 - iVar24;
                  iVar23 = -iVar39;
                  if (0 < iVar39) {
                    iVar23 = iVar39;
                  }
                  if ((iVar23 != 1) ||
                     (*(char *)((long)__src + (long)iVar33) != *(char *)((long)__src + (long)iVar24)
                     )) {
                    iVar26 = iVar26 + 1;
                  }
                  lVar12 = lVar12 + 1;
                  iVar24 = iVar33;
                } while ((int)lVar12 < (int)(iVar32 + uVar38));
              }
              puVar21 = puVar21 + 3;
              uVar38 = *puVar1;
            } while (puVar21 != puVar40 + (long)iVar9 * 3);
            local_70 = puVar40;
            if (iVar26 != 0) {
              cVar5 = ubidi_getMemory_76_godot
                                (param_1 + 0x58,param_1 + 0x2c,(int)(char)param_1[0x69],
                                 (iVar9 + iVar26) * 0xc);
              if (cVar5 == '\0') goto LAB_001042af;
              local_70 = *(uint **)(param_1 + 0x58);
              if (iVar9 == 1) {
                *(undefined8 *)local_70 = *(undefined8 *)puVar40;
                local_70[2] = puVar40[2];
              }
              *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + iVar26;
              *(uint **)(param_1 + 0x130) = local_70;
            }
            iVar32 = iVar9 + -1;
            puVar40 = local_70 + (long)iVar9 * 3 + -3;
            do {
              if (iVar32 == 0) {
                uVar38 = local_70[1];
              }
              else {
                uVar38 = puVar40[1] - puVar40[-2];
              }
              uVar28 = *puVar40 & 0x7fffffff;
              uVar27 = (ulong)uVar28;
              uVar29 = -((int)*puVar40 >> 0x1f);
              if ((int)uVar38 < 2) {
                puVar21 = local_70 + (long)(iVar32 + iVar26) * 3;
                if (iVar26 != 0) {
                  *(undefined8 *)puVar21 = *(undefined8 *)puVar40;
                  puVar21[2] = puVar40[2];
                }
                uVar38 = *(uint *)(lVar13 + uVar27 * 4);
                *puVar21 = (*(byte *)((long)__src + (long)(int)uVar38) ^ uVar29) << 0x1f | uVar38;
              }
              else {
                local_78 = 1;
                uVar38 = (uVar38 - 1) + uVar28;
                if (uVar29 == 0) {
                  local_78 = -1;
                  uVar27 = (ulong)uVar38;
                  uVar38 = uVar28;
                }
                if (uVar38 == (uint)uVar27) {
                  lVar12 = (long)(int)uVar38;
                  local_68 = (uint *)(lVar13 + lVar12 * 4);
                }
                else {
                  lVar12 = (long)local_78;
                  puVar21 = (uint *)(lVar13 + ((int)(uint)uVar27 + lVar12) * 4);
                  uVar15 = uVar27;
                  do {
                    iVar24 = (int)uVar27;
                    uVar28 = puVar21[-lVar12];
                    uVar10 = iVar24 + local_78;
                    uVar27 = (ulong)uVar10;
                    iVar33 = uVar28 - *puVar21;
                    local_68 = (uint *)(lVar13 + (long)(int)uVar15 * 4);
                    iVar9 = -iVar33;
                    if (0 < iVar33) {
                      iVar9 = iVar33;
                    }
                    if ((iVar9 != 1) ||
                       (*(char *)((long)__src + (long)(int)uVar28) !=
                        *(char *)((long)__src + (long)(int)*puVar21))) {
                      uVar30 = *local_68;
                      if ((int)uVar28 <= (int)*local_68) {
                        uVar30 = uVar28;
                      }
                      iVar9 = iVar26 + iVar32;
                      iVar24 = iVar24 - (int)uVar15;
                      iVar33 = -iVar24;
                      if (0 < iVar24) {
                        iVar33 = iVar24;
                      }
                      *(ulong *)(local_70 + (long)iVar9 * 3) =
                           CONCAT44(puVar40[1],
                                    (*(byte *)((long)__src + (long)(int)uVar30) ^ uVar29) << 0x1f |
                                    uVar30);
                      uVar28 = puVar40[2];
                      iVar26 = iVar26 + -1;
                      puVar40[1] = puVar40[1] - (iVar33 + 1);
                      (local_70 + (long)iVar9 * 3)[2] = uVar28 & 10;
                      puVar40[2] = puVar40[2] & ~(uVar28 & 10);
                      uVar15 = uVar27;
                      local_68 = puVar21;
                    }
                    puVar21 = puVar21 + lVar12;
                  } while (uVar10 != uVar38);
                  lVar12 = (long)(int)uVar10;
                }
                puVar21 = local_70 + (long)(iVar32 + iVar26) * 3;
                if (iVar26 != 0) {
                  *(undefined8 *)puVar21 = *(undefined8 *)puVar40;
                  puVar21[2] = puVar40[2];
                }
                uVar38 = *(uint *)(lVar13 + lVar12 * 4);
                if ((int)*local_68 < (int)uVar38) {
                  uVar38 = *local_68;
                }
                *puVar21 = (*(byte *)((long)__src + (long)(int)uVar38) ^ uVar29) << 0x1f | uVar38;
              }
              iVar32 = iVar32 + -1;
              puVar40 = puVar40 + -3;
            } while (iVar32 != -1);
          }
        }
LAB_001042af:
        param_1[0x8d] = (UBiDi)((byte)param_1[0x8d] ^ 1);
      }
      *(long *)(param_1 + 8) = param_2;
      *(ulong *)(param_1 + 0x10) = CONCAT44(iVar11,param_3);
      *(undefined4 *)(param_1 + 0xb8) = uVar3;
      iVar9 = *(int *)(param_1 + 0x20);
      if (iVar11 <= *(int *)(param_1 + 0x20)) {
        iVar9 = iVar11;
      }
      memcpy(*(void **)(param_1 + 0x78),__src,(long)iVar9);
      *(undefined4 *)(param_1 + 0xc4) = uVar2;
      if (1 < *(int *)(param_1 + 0x128)) {
        *(undefined4 *)(param_1 + 0xb8) = 2;
      }
      goto LAB_00103845;
    }
    *(undefined4 *)param_6 = 7;
  }
  lVar13 = 0;
LAB_00103845:
  uprv_free_76_godot(lVar13);
  *(undefined4 *)(param_1 + 0x84) = 3;
  return;
code_r0x00104399:
  if ((param_1[0x8e] == (UBiDi)0x0) || (piVar35 = *(int **)(param_1 + 0xd0), iVar9 < *piVar35)) {
    UVar6 = param_1[0x8d];
  }
  else {
    iVar26 = *(int *)(param_1 + 200);
    iVar11 = 0;
    piVar22 = piVar35;
    if (0 < iVar26) {
      do {
        if (iVar9 < *piVar22) {
          if (iVar11 < iVar26) goto LAB_001043ec;
          break;
        }
        iVar11 = iVar11 + 1;
        piVar22 = piVar22 + 2;
      } while (iVar26 != iVar11);
    }
    iVar11 = iVar26 + -1;
LAB_001043ec:
    UVar6 = *(UBiDi *)(piVar35 + (long)iVar11 * 2 + 1);
  }
  *(UBiDi *)(lVar19 + lVar18) = UVar6;
  goto LAB_00104300;
LAB_00104578:
  if (((0x2002UL >> ((ulong)*(byte *)(lVar13 + lVar19) & 0x3f) & 1) != 0) ||
     (lVar19 = lVar19 + -1, (int)lVar19 < iVar11)) goto LAB_00104530;
  goto LAB_00104586;
}



void ubidi_orderParagraphsLTR_76_godot(long param_1,undefined1 param_2)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x8c) = param_2;
  }
  return;
}



undefined1 ubidi_isOrderParagraphsLTR_76_godot(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x8c);
  }
  return uVar1;
}



undefined4 ubidi_getDirection_76_godot(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != param_1) && ((plVar1 == (long *)0x0 || (plVar1 != (long *)*plVar1)))) {
    return 0;
  }
  return (int)param_1[0x17];
}



long ubidi_getText_76_godot(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if (plVar1 != param_1) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (plVar1 != (long *)*plVar1) {
      return 0;
    }
  }
  return param_1[1];
}



undefined4 ubidi_getLength_76_godot(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != param_1) && ((plVar1 == (long *)0x0 || (plVar1 != (long *)*plVar1)))) {
    return 0;
  }
  return (int)param_1[2];
}



undefined4 ubidi_getProcessedLength_76_godot(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != param_1) && ((plVar1 == (long *)0x0 || (plVar1 != (long *)*plVar1)))) {
    return 0;
  }
  return *(undefined4 *)((long)param_1 + 0x14);
}



undefined4 ubidi_getResultLength_76_godot(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != param_1) && ((plVar1 == (long *)0x0 || (plVar1 != (long *)*plVar1)))) {
    return 0;
  }
  return (int)param_1[3];
}



undefined1 ubidi_getParaLevel_76_godot(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != param_1) && ((plVar1 == (long *)0x0 || (plVar1 != (long *)*plVar1)))) {
    return 0;
  }
  return *(undefined1 *)((long)param_1 + 0x8d);
}



undefined4 ubidi_countParagraphs_76_godot(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != param_1) && ((plVar1 == (long *)0x0 || (plVar1 != (long *)*plVar1)))) {
    return 0;
  }
  return (int)param_1[0x19];
}



void ubidi_getParagraphByIndex_76_godot
               (long *param_1,int param_2,int *param_3,undefined4 *param_4,undefined1 *param_5,
               int *param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if ((param_1 == (long *)0x0) ||
       ((plVar2 = (long *)*param_1, param_1 != plVar2 &&
        ((plVar2 == (long *)0x0 || (plVar2 != (long *)*plVar2)))))) {
      *param_6 = 0x1b;
      return;
    }
    if ((param_2 < 0) || ((int)param_1[0x19] <= param_2)) {
      *param_6 = 1;
      return;
    }
    iVar7 = 0;
    if (param_2 != 0) {
      iVar7 = *(int *)(plVar2[0x1a] + -8 + (long)param_2 * 8);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar7;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(plVar2[0x1a] + (long)param_2 * 8);
    }
    if (param_5 != (undefined1 *)0x0) {
      if ((*(char *)((long)plVar2 + 0x8e) == '\0') ||
         (piVar3 = (int *)plVar2[0x1a], iVar7 < *piVar3)) {
        uVar4 = *(undefined1 *)((long)plVar2 + 0x8d);
      }
      else {
        iVar1 = *(int *)(plVar2 + 0x19);
        iVar5 = 0;
        piVar6 = piVar3;
        if (0 < iVar1) {
          do {
            if (iVar7 < *piVar6) {
              if (iVar5 < iVar1) goto LAB_00104a04;
              break;
            }
            iVar5 = iVar5 + 1;
            piVar6 = piVar6 + 2;
          } while (iVar1 != iVar5);
        }
        iVar5 = iVar1 + -1;
LAB_00104a04:
        uVar4 = (undefined1)piVar3[(long)iVar5 * 2 + 1];
      }
      *param_5 = uVar4;
    }
  }
  return;
}



ulong ubidi_getParagraph_76_godot
                (long *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                int *param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_6 == (int *)0x0) || (0 < *param_6)) {
    return 0xffffffff;
  }
  if (param_1 == (long *)0x0) {
    *param_6 = 0x1b;
    return 0xffffffff;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 == param_1) || ((plVar1 != (long *)0x0 && (plVar1 == (long *)*plVar1)))) {
    if ((-1 < param_2) && (param_2 < *(int *)((long)plVar1 + 0x14))) {
      uVar3 = 0;
      uVar2 = 1;
      if (*(int *)plVar1[0x1a] <= param_2) {
        do {
          uVar3 = uVar2;
          uVar2 = uVar3 + 1;
        } while (((int *)plVar1[0x1a])[uVar2 * 2 + -2] <= param_2);
        uVar3 = uVar3 & 0xffffffff;
      }
      ubidi_getParagraphByIndex_76_godot(plVar1,uVar3,param_3);
      goto LAB_00104a8e;
    }
    *param_6 = 1;
  }
  else {
    *param_6 = 0x1b;
  }
  uVar3 = 0xffffffff;
LAB_00104a8e:
  return uVar3 & 0xffffffff;
}



void ubidi_setClassCallback_76_godot
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5,int *param_6)

{
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if (param_1 == 0) {
      *param_6 = 1;
      return;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(param_1 + 0x1c0);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = *(undefined8 *)(param_1 + 0x1c8);
    }
    *(undefined8 *)(param_1 + 0x1c0) = param_2;
    *(undefined8 *)(param_1 + 0x1c8) = param_3;
  }
  return;
}



void ubidi_getClassCallback_76_godot(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 != 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x1c0);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_1 + 0x1c8);
    }
  }
  return;
}



int ubidi_getCustomizedClass_76_godot(long param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
    if (iVar1 != 0x17) {
      if (0x16 < iVar1) {
        iVar1 = 10;
      }
      return iVar1;
    }
  }
  iVar1 = ubidi_getClass_76_godot(param_2);
  if (0x16 < iVar1) {
    iVar1 = 10;
  }
  return iVar1;
}



/* processPropertySeq(UBiDi*, LevState*, unsigned char, int, int) [clone .cold] */

void processPropertySeq(UBiDi *param_1,LevState *param_2,uchar param_3,int param_4,int param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* resolveImplicitLevels(UBiDi*, int, int, unsigned char, unsigned char) [clone .cold] */

void resolveImplicitLevels(UBiDi *param_1,int param_2,int param_3,uchar param_4,uchar param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ubidi_setPara_76_godot_part_0_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



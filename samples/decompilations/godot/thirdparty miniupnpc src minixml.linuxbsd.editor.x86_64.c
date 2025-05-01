
void parsexml(undefined8 *param_1)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  
  pbVar6 = (byte *)*param_1;
  pbVar5 = pbVar6 + *(int *)(param_1 + 3);
  param_1[1] = pbVar5;
  param_1[2] = pbVar6;
  if (pbVar5 + -1 <= pbVar6) {
    return;
  }
  do {
    while ((pbVar6 + 4 <= pbVar5 && (*(int *)pbVar6 == 0x2d2d213c))) {
      pbVar7 = pbVar6 + 7;
      do {
        pbVar6 = pbVar7;
        param_1[2] = pbVar6 + -3;
        if (pbVar5 <= pbVar6) {
          return;
        }
        if ((*(short *)(pbVar6 + -3) != 0x2d2d) || (bVar1 = false, pbVar6[-1] != 0x3e)) {
          bVar1 = true;
        }
        pbVar7 = pbVar6 + 1;
      } while (bVar1);
LAB_001001c0:
      param_1[2] = pbVar6;
LAB_001001c4:
      pbVar5 = (byte *)param_1[1];
      if (pbVar5 + -1 <= pbVar6) {
        return;
      }
    }
    pbVar7 = pbVar6 + 1;
    if ((*pbVar6 == 0x3c) && (pbVar6[1] != 0x3f)) {
      do {
        param_1[2] = pbVar7;
        bVar2 = *pbVar7;
        iVar9 = 0;
        pbVar3 = pbVar7;
        do {
          pbVar6 = pbVar3;
          if ((bVar2 == 0x20) || (bVar2 == 9)) goto LAB_001000b0;
          if (bVar2 == 0x2f) {
            if (iVar9 == 0) {
              pbVar6 = pbVar6 + 1;
              param_1[2] = pbVar6;
              if (pbVar5 <= pbVar6) {
                return;
              }
              iVar9 = 0;
              pbVar7 = pbVar6;
              while (*pbVar7 != 0x3e) {
                pbVar7 = pbVar7 + 1;
                iVar9 = iVar9 + 1;
                param_1[2] = pbVar7;
                if (pbVar5 == pbVar7) {
                  return;
                }
              }
              if ((code *)param_1[6] != (code *)0x0) {
                (*(code *)param_1[6])(param_1[4],pbVar6,iVar9);
                pbVar7 = (byte *)param_1[2];
              }
              pbVar6 = pbVar7 + 1;
              goto LAB_001001c0;
            }
LAB_001000b9:
            if ((code *)param_1[5] != (code *)0x0) {
              (*(code *)param_1[5])(param_1[4],pbVar7,iVar9);
              pbVar6 = (byte *)param_1[2];
            }
            pbVar7 = pbVar6;
            pbVar5 = (byte *)param_1[1];
            if (pbVar5 <= pbVar7) {
              return;
            }
            goto LAB_0010010f;
          }
          if ((char)bVar2 < '0') {
            if ((bVar2 == 10) || (bVar2 == 0xd)) {
LAB_001000b0:
              if (iVar9 != 0) goto LAB_001000b9;
              goto LAB_001001c4;
            }
          }
          else if (bVar2 == 0x3e) goto LAB_001000b0;
          pbVar3 = pbVar6 + 1;
          iVar9 = iVar9 + 1;
          param_1[2] = pbVar3;
          if (pbVar5 <= pbVar3) {
            return;
          }
          bVar2 = pbVar6[1];
        } while (bVar2 != 0x3a);
        pbVar7 = pbVar6 + 2;
      } while( true );
    }
    param_1[2] = pbVar7;
    pbVar5 = (byte *)param_1[1];
LAB_0010004b:
    pbVar6 = pbVar7;
    if (pbVar5 + -1 <= pbVar7) {
      return;
    }
  } while( true );
LAB_0010010f:
  bVar2 = *pbVar7;
  if (bVar2 != 0x2f) {
    if (bVar2 != 0x3e) goto code_r0x00100122;
    pbVar6 = pbVar7 + 1;
    param_1[2] = pbVar6;
    if (pbVar5 <= pbVar6) {
      return;
    }
    iVar9 = 0;
    pbVar3 = pbVar6;
    while ((uVar4 = (ulong)*pbVar3, *pbVar3 < 0x21 && ((0x100002600U >> (uVar4 & 0x3f) & 1) != 0)))
    {
      pbVar3 = pbVar3 + 1;
      iVar9 = iVar9 + 1;
      param_1[2] = pbVar3;
      if (pbVar3 == pbVar5) {
        return;
      }
    }
    pbVar7 = pbVar3;
    if (((pbVar5 < pbVar3 + 0xc) || (*(long *)pbVar3 != 0x41544144435b213c)) || (pbVar3[8] != 0x5b))
    {
      while ((char)uVar4 != '<') {
        pbVar8 = pbVar7 + 1;
        param_1[2] = pbVar8;
        if (pbVar5 <= pbVar7 + 2) {
          return;
        }
        pbVar7 = pbVar8;
        uVar4 = (ulong)*pbVar8;
      }
      iVar9 = (iVar9 - (int)pbVar3) + (int)pbVar7;
      if (((iVar9 == 0) || ((code *)param_1[7] == (code *)0x0)) || (pbVar7[1] != 0x2f))
      goto LAB_0010004b;
      (*(code *)param_1[7])(param_1[4],pbVar6,iVar9);
      pbVar6 = (byte *)param_1[2];
      goto LAB_001001c4;
    }
    pbVar3 = pbVar3 + 9;
    iVar9 = 0;
    param_1[2] = pbVar3;
    pbVar7 = pbVar3;
    while ((*(short *)pbVar7 != 0x5d5d || (pbVar7[2] != 0x3e))) {
      iVar9 = iVar9 + 1;
      pbVar6 = pbVar7 + 4;
      param_1[2] = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      if (pbVar5 <= pbVar6) {
        return;
      }
    }
    if ((iVar9 != 0) && ((code *)param_1[7] != (code *)0x0)) {
      (*(code *)param_1[7])(param_1[4],pbVar3);
      pbVar7 = (byte *)param_1[2];
      pbVar5 = (byte *)param_1[1];
    }
    while (*pbVar7 != 0x3c) {
      pbVar7 = pbVar7 + 1;
      param_1[2] = pbVar7;
      if (pbVar5 <= pbVar7) {
        return;
      }
    }
  }
  goto LAB_0010004b;
code_r0x00100122:
  if ((0x20 < bVar2) || ((0xfffffffeffffd9ffU >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
    iVar9 = 0;
    pbVar6 = pbVar7;
    while ((0x3d < *pbVar6 || ((0xdffffffeffffd9ffU >> ((ulong)*pbVar6 & 0x3f) & 1) != 0))) {
      pbVar6 = pbVar6 + 1;
      param_1[2] = pbVar6;
      iVar9 = iVar9 + 1;
      if (pbVar5 <= pbVar6) {
        return;
      }
    }
    while( true ) {
      pbVar3 = pbVar6 + 1;
      param_1[2] = pbVar3;
      if (*pbVar6 == 0x3d) break;
      pbVar6 = pbVar3;
      if (pbVar5 <= pbVar3) {
        return;
      }
    }
    while( true ) {
      bVar2 = *pbVar3;
      uVar4 = (ulong)bVar2;
      pbVar6 = pbVar3;
      if (0x20 < bVar2) break;
      if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) goto LAB_001003a0;
      pbVar3 = pbVar3 + 1;
      param_1[2] = pbVar3;
      if (pbVar5 <= pbVar3) {
        return;
      }
    }
    if ((bVar2 == 0x27) || (bVar2 == 0x22)) {
      pbVar3 = pbVar3 + 1;
      param_1[2] = pbVar3;
      pbVar6 = pbVar3;
      if (pbVar5 <= pbVar3) {
        return;
      }
      while (bVar2 != *pbVar6) {
        pbVar6 = pbVar6 + 1;
        param_1[2] = pbVar6;
        if (pbVar5 == pbVar6) {
          return;
        }
      }
    }
    else {
LAB_001003a0:
      while( true ) {
        pbVar6 = pbVar6 + 1;
        bVar2 = (byte)uVar4;
        if (((bVar2 == 0x20) || (bVar2 == 9)) ||
           ((bVar2 < 0x3f && ((0x4000800000002400U >> (uVar4 & 0x3f) & 1) != 0)))) break;
        param_1[2] = pbVar6;
        if (pbVar5 <= pbVar6) {
          return;
        }
        uVar4 = (ulong)*pbVar6;
      }
    }
    if ((code *)param_1[8] == (code *)0x0) {
      pbVar7 = (byte *)param_1[2];
    }
    else {
      (*(code *)param_1[8])(param_1[4],pbVar7,iVar9,pbVar3);
      pbVar7 = (byte *)param_1[2];
      pbVar5 = (byte *)param_1[1];
    }
  }
  pbVar7 = pbVar7 + 1;
  param_1[2] = pbVar7;
  if (pbVar5 <= pbVar7) {
    return;
  }
  goto LAB_0010010f;
}



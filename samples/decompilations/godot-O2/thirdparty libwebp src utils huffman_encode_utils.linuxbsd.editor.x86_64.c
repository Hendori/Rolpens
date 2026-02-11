
int CompareHuffmanTrees(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((*param_1 <= *param_2) && (iVar1 = 1, *param_2 <= *param_1)) {
    return (((int)param_2[1] <= (int)param_1[1]) - 1) + (uint)((int)param_2[1] <= (int)param_1[1]);
  }
  return iVar1;
}



void SetBitDepths(long param_1,long param_2,long param_3,char param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  long lVar16;
  long lVar17;
  
  iVar2 = *(int *)(param_1 + 8);
  while (-1 < iVar2) {
    param_4 = param_4 + '\x01';
    lVar1 = param_2 + (long)iVar2 * 0x10;
    iVar2 = *(int *)(lVar1 + 8);
    cVar8 = param_4;
    while (-1 < iVar2) {
      cVar8 = cVar8 + '\x01';
      lVar7 = param_2 + (long)iVar2 * 0x10;
      iVar2 = *(int *)(lVar7 + 8);
      cVar14 = cVar8;
      while (-1 < iVar2) {
        cVar14 = cVar14 + '\x01';
        lVar9 = param_2 + (long)iVar2 * 0x10;
        iVar2 = *(int *)(lVar9 + 8);
        cVar15 = cVar14;
        while (-1 < iVar2) {
          cVar15 = cVar15 + '\x01';
          lVar17 = (long)iVar2 * 0x10 + param_2;
          iVar2 = *(int *)(lVar17 + 8);
          cVar10 = cVar15;
          while (-1 < iVar2) {
            cVar10 = cVar10 + '\x01';
            lVar16 = param_2 + (long)iVar2 * 0x10;
            iVar2 = *(int *)(lVar16 + 8);
            cVar5 = cVar10;
            while (-1 < iVar2) {
              cVar5 = cVar5 + '\x01';
              lVar4 = (long)iVar2 * 0x10 + param_2;
              iVar2 = *(int *)(lVar4 + 8);
              cVar13 = cVar5;
              while (-1 < iVar2) {
                cVar13 = cVar13 + '\x01';
                lVar11 = (long)iVar2 * 0x10 + param_2;
                iVar2 = *(int *)(lVar11 + 8);
                cVar12 = cVar13;
                while (-1 < iVar2) {
                  cVar12 = cVar12 + '\x01';
                  lVar6 = param_2 + (long)iVar2 * 0x10;
                  iVar2 = *(int *)(lVar6 + 8);
                  cVar3 = cVar12;
                  while (-1 < iVar2) {
                    cVar3 = cVar3 + '\x01';
                    SetBitDepths((long)iVar2 * 0x10 + param_2);
                    lVar6 = (long)*(int *)(lVar6 + 0xc) * 0x10 + param_2;
                    iVar2 = *(int *)(lVar6 + 8);
                  }
                  *(char *)(param_3 + *(int *)(lVar6 + 4)) = cVar3;
                  lVar11 = (long)*(int *)(lVar11 + 0xc) * 0x10 + param_2;
                  iVar2 = *(int *)(lVar11 + 8);
                }
                *(char *)(param_3 + *(int *)(lVar11 + 4)) = cVar12;
                lVar4 = (long)*(int *)(lVar4 + 0xc) * 0x10 + param_2;
                iVar2 = *(int *)(lVar4 + 8);
              }
              *(char *)(param_3 + *(int *)(lVar4 + 4)) = cVar13;
              lVar16 = (long)*(int *)(lVar16 + 0xc) * 0x10 + param_2;
              iVar2 = *(int *)(lVar16 + 8);
            }
            *(char *)(param_3 + *(int *)(lVar16 + 4)) = cVar5;
            lVar17 = (long)*(int *)(lVar17 + 0xc) * 0x10 + param_2;
            iVar2 = *(int *)(lVar17 + 8);
          }
          *(char *)(param_3 + *(int *)(lVar17 + 4)) = cVar10;
          lVar9 = (long)*(int *)(lVar9 + 0xc) * 0x10 + param_2;
          iVar2 = *(int *)(lVar9 + 8);
        }
        *(char *)(param_3 + *(int *)(lVar9 + 4)) = cVar15;
        lVar7 = (long)*(int *)(lVar7 + 0xc) * 0x10 + param_2;
        iVar2 = *(int *)(lVar7 + 8);
      }
      *(char *)(param_3 + *(int *)(lVar7 + 4)) = cVar14;
      lVar1 = param_2 + (long)*(int *)(lVar1 + 0xc) * 0x10;
      iVar2 = *(int *)(lVar1 + 8);
    }
    *(char *)(param_3 + *(int *)(lVar1 + 4)) = cVar8;
    param_1 = param_2 + (long)*(int *)(param_1 + 0xc) * 0x10;
    iVar2 = *(int *)(param_1 + 8);
  }
  *(char *)(param_3 + *(int *)(param_1 + 4)) = param_4;
  return;
}



long VP8LCreateCompressedHuffmanTree(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  
  uVar5 = _LC1;
  uVar4 = _LC0;
  iVar2 = *param_1;
  if (iVar2 < 1) {
    return 0;
  }
  iVar12 = 0;
  cVar11 = '\b';
  lVar3 = *(long *)(param_1 + 2);
  pcVar8 = param_2;
LAB_001003f8:
  iVar10 = iVar12 + 1;
  cVar1 = *(char *)(lVar3 + iVar12);
  pcVar7 = (char *)(iVar10 + lVar3);
  pcVar9 = pcVar8;
  if (iVar2 <= iVar10) {
    if (cVar1 != '\0') {
      *pcVar8 = cVar1;
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      iVar12 = iVar10;
      cVar11 = cVar1;
      goto LAB_0010047d;
    }
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    goto LAB_00100476;
  }
  do {
    if (cVar1 != *pcVar7) {
      iVar6 = iVar10 - iVar12;
      if (cVar1 != '\0') goto LAB_001004a3;
      iVar12 = iVar10;
      if (iVar6 < 1) goto LAB_0010047d;
      goto LAB_0010045f;
    }
    iVar10 = iVar10 + 1;
    pcVar7 = pcVar7 + 1;
  } while (iVar2 != iVar10);
  iVar6 = iVar2 - iVar12;
  if (cVar1 == '\0') {
LAB_0010045f:
    do {
      iVar12 = iVar10;
      if (iVar6 < 3) goto LAB_00100528;
      if (iVar6 < 0xb) {
        *pcVar9 = '\x11';
        pcVar9[1] = (char)iVar6 + -3;
        goto LAB_00100476;
      }
      if (iVar6 < 0x8b) {
        *pcVar9 = '\x12';
        pcVar8 = pcVar9 + 2;
        pcVar9[1] = (char)iVar6 + -0xb;
        goto LAB_0010047d;
      }
      *(undefined2 *)pcVar9 = uVar4;
      iVar6 = iVar6 + -0x8a;
      pcVar9 = pcVar9 + 2;
    } while( true );
  }
LAB_001004a3:
  if (cVar1 != cVar11) {
    *pcVar8 = cVar1;
    iVar6 = iVar6 + -1;
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
  }
  pcVar9 = pcVar8;
  iVar12 = iVar10;
  cVar11 = cVar1;
  if (0 < iVar6) {
    for (; 2 < iVar6; iVar6 = iVar6 + -6) {
      if (iVar6 < 7) {
        *pcVar9 = '\x10';
        pcVar9[1] = (char)iVar6 + -3;
        goto LAB_00100501;
      }
      *(undefined2 *)pcVar9 = uVar5;
      pcVar9 = pcVar9 + 2;
    }
    *pcVar9 = cVar1;
    pcVar9[1] = '\0';
    if (iVar6 == 2) {
      pcVar9[2] = cVar1;
      pcVar8 = pcVar9 + 4;
      pcVar9[3] = '\0';
    }
    else {
LAB_00100501:
      pcVar8 = pcVar9 + 2;
    }
  }
  goto LAB_0010047d;
LAB_00100528:
  pcVar9[0] = '\0';
  pcVar9[1] = '\0';
  if (iVar6 == 2) {
    pcVar8 = pcVar9 + 4;
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
  }
  else {
LAB_00100476:
    pcVar8 = pcVar9 + 2;
    iVar12 = iVar10;
  }
LAB_0010047d:
  if (iVar2 <= iVar12) {
    return (long)pcVar8 - (long)param_2 >> 1;
  }
  goto LAB_001003f8;
}



void VP8LCreateHuffmanTree(uint *param_1,int param_2,void *param_3,uint *param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  size_t sVar15;
  byte *pbVar16;
  ulong uVar17;
  uint *puVar18;
  undefined2 uVar19;
  long lVar20;
  uint *__src;
  int iVar21;
  long lVar22;
  size_t __n;
  uint uVar23;
  uint *puVar24;
  long in_FS_OFFSET;
  uint local_c8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  iVar2 = *param_5;
  __n = (size_t)iVar2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  memset(param_3,0,__n);
  if ((iVar2 < 0) || (sVar15 = __n, iVar2 == 0)) goto LAB_0010096c;
  do {
    if (param_1[sVar15 - 1] != 0) {
      uVar7 = *param_1;
      lVar20 = 0;
      uVar6 = 0;
      goto LAB_00100648;
    }
    sVar15 = sVar15 - 1;
  } while ((int)sVar15 != 0);
  goto LAB_0010072c;
LAB_00100648:
  do {
    iVar13 = (int)sVar15;
    if ((iVar13 == (int)lVar20) || (param_1[lVar20] != uVar7)) {
      if (uVar7 == 0) {
        if (4 < (int)uVar6) goto LAB_00100663;
      }
      else if (6 < (int)uVar6) {
LAB_00100663:
        memset((void *)(((lVar20 + -1) - (ulong)(uVar6 - 1)) + (long)param_3),1,(ulong)uVar6);
      }
      if (iVar13 == (int)lVar20) break;
      uVar7 = param_1[lVar20];
      uVar6 = 1;
    }
    else {
      uVar6 = uVar6 + 1;
    }
    lVar20 = lVar20 + 1;
  } while ((int)lVar20 <= iVar13);
  uVar7 = *param_1;
  lVar20 = 0;
  uVar6 = 0;
  uVar12 = 0;
  puVar8 = param_1;
  do {
    iVar21 = (int)lVar20;
    if ((((iVar21 == iVar13) || (*(char *)((long)param_3 + lVar20) != '\0')) ||
        ((lVar20 != 0 && (*(char *)((long)param_3 + lVar20 + -1) != '\0')))) ||
       (6 < (*puVar8 - uVar7) + 3)) {
      if (uVar12 < 4) {
        if ((uVar12 == 3) && (uVar6 == 0)) {
          uVar6 = 0;
          goto LAB_00100b8c;
        }
      }
      else {
        uVar7 = (uVar12 >> 1) + uVar6;
        if (uVar7 < uVar12) {
          uVar6 = (uint)(uVar6 != 0);
        }
        else if (uVar6 != 0) {
          uVar6 = uVar7 / uVar12;
        }
LAB_00100b8c:
        uVar7 = 0;
        do {
          uVar14 = (iVar21 + -1) - uVar7;
          uVar7 = uVar7 + 1;
          param_1[uVar14] = uVar6;
        } while (uVar7 < uVar12);
      }
      if (iVar21 < iVar13 + -3) {
        uVar12 = 1;
        uVar7 = puVar8[1] + *puVar8 + 2 + puVar8[2] + puVar8[3] >> 2;
        uVar6 = *puVar8;
      }
      else if (iVar21 < iVar13) {
        uVar7 = *puVar8;
        uVar12 = 1;
        uVar6 = uVar7;
      }
      else {
        if (iVar21 == iVar13) break;
        uVar6 = *puVar8;
        uVar12 = 1;
        uVar7 = 0;
      }
    }
    else {
      uVar12 = uVar12 + 1;
      uVar6 = uVar6 + *puVar8;
      if (3 < uVar12) {
        uVar7 = ((uVar12 >> 1) + uVar6) / uVar12;
      }
    }
    lVar20 = lVar20 + 1;
    puVar8 = puVar8 + 1;
  } while ((int)lVar20 <= iVar13);
LAB_0010072c:
  iVar13 = 0;
  puVar8 = param_1;
  do {
    iVar13 = (iVar13 + 1) - (uint)(*puVar8 == 0);
    puVar8 = puVar8 + 1;
  } while (param_1 + __n != puVar8);
  if (iVar13 != 0) {
    pbVar10 = *(byte **)(param_5 + 2);
    uVar7 = 1;
    puVar8 = param_4 + (long)iVar13 * 4;
    do {
      sVar15 = 0;
      iVar21 = 0;
      do {
        uVar6 = param_1[sVar15];
        if (uVar6 != 0) {
          puVar18 = param_4 + (long)iVar21 * 4;
          if (uVar6 < uVar7) {
            uVar6 = uVar7;
          }
          puVar18[1] = (uint)sVar15;
          iVar21 = iVar21 + 1;
          puVar18[2] = 0xffffffff;
          puVar18[3] = 0xffffffff;
          *puVar18 = uVar6;
        }
        sVar15 = sVar15 + 1;
      } while (__n != sVar15);
      qsort(param_4,(long)iVar13,0x10,CompareHuffmanTrees);
      if (iVar13 < 2) {
        if (iVar13 == 1) {
          pbVar10[(int)param_4[1]] = 1;
        }
      }
      else {
        uVar6 = iVar13 - 2;
        puVar18 = puVar8;
        puVar24 = puVar8;
        uVar12 = 0;
        while( true ) {
          uVar17 = (ulong)uVar6;
          uVar4 = *(undefined8 *)(puVar24 + -2);
          uVar14 = uVar12 + 1;
          *(undefined8 *)puVar18 = *(undefined8 *)(puVar24 + -4);
          *(undefined8 *)(puVar18 + 2) = uVar4;
          uVar4 = *(undefined8 *)(puVar24 + -6);
          uVar23 = puVar24[-8] + *puVar18;
          *(undefined8 *)(puVar18 + 4) = *(undefined8 *)(puVar24 + -8);
          *(undefined8 *)(puVar18 + 6) = uVar4;
          if (uVar6 == 0) break;
          uVar9 = 0;
          __src = param_4;
          do {
            iVar21 = (int)uVar9;
            if (*__src <= uVar23) {
              lVar20 = (uVar9 + 1) * 0x10;
              goto LAB_001008f9;
            }
            uVar9 = uVar9 + 1;
            __src = __src + 4;
          } while (uVar9 != uVar17);
          iVar21 = iVar21 + 1;
          __src = param_4 + (long)iVar21 * 4;
          lVar20 = (long)iVar21 * 0x10 + 0x10;
LAB_001008f9:
          iVar21 = uVar6 - iVar21;
          puVar24 = puVar24 + -4;
          puVar18 = puVar18 + 8;
          uVar6 = uVar6 - 1;
          memmove((void *)((long)param_4 + lVar20),__src,(long)iVar21 << 4);
          __src[3] = uVar12;
          *__src = uVar23;
          __src[1] = 0xffffffff;
          __src[2] = uVar14;
          uVar12 = uVar12 + 2;
        }
        *param_4 = uVar23;
        param_4[2] = uVar14;
        param_4[1] = 0xffffffff;
        param_4[3] = uVar12;
        puVar18 = param_4;
        if ((int)uVar14 < 0) {
          uVar6 = 0;
        }
        else {
          do {
            uVar6 = (int)uVar17 + 1;
            uVar17 = (ulong)uVar6;
            SetBitDepths(puVar8 + (long)(int)uVar14 * 4,puVar8,pbVar10,uVar17);
            puVar18 = puVar8 + (long)(int)puVar18[3] * 4;
            uVar14 = puVar18[2];
          } while (-1 < (int)uVar14);
        }
        pbVar10[(int)puVar18[1]] = (byte)uVar6;
      }
      uVar6 = (uint)*pbVar10;
      if (iVar2 != 1) {
        pbVar16 = pbVar10 + 1;
        do {
          if (uVar6 < *pbVar16) {
            uVar6 = (uint)*pbVar16;
          }
          pbVar16 = pbVar16 + 1;
        } while (pbVar16 != pbVar10 + (ulong)(iVar2 - 2) + 2);
      }
      if ((int)uVar6 <= param_2) break;
      uVar7 = uVar7 * 2;
    } while( true );
  }
LAB_0010096c:
  iVar2 = *param_5;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (0 < iVar2) {
    pbVar10 = *(byte **)(param_5 + 2);
    pbVar16 = pbVar10 + iVar2;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      *(int *)(local_88 + (ulong)bVar1 * 4) = *(int *)(local_88 + (ulong)bVar1 * 4) + 1;
    } while (pbVar10 != pbVar16);
  }
  auVar5._12_4_ = 0;
  auVar5._0_12_ = local_88._4_12_;
  local_88 = auVar5 << 0x20;
  lVar20 = 0;
  iVar13 = 0;
  local_c8[0] = 0;
  do {
    iVar13 = (iVar13 + *(int *)(local_88 + lVar20)) * 2;
    *(int *)((long)local_c8 + lVar20 + 4) = iVar13;
    lVar20 = lVar20 + 4;
  } while (lVar20 != 0x3c);
  if (0 < iVar2) {
    lVar20 = *(long *)(param_5 + 2);
    lVar3 = *(long *)(param_5 + 4);
    lVar22 = 0;
    do {
      bVar1 = *(byte *)(lVar20 + lVar22);
      uVar7 = local_c8[bVar1];
      local_c8[bVar1] = uVar7 + 1;
      if (bVar1 == 0) {
        uVar19 = 0;
      }
      else {
        uVar6 = 0;
        iVar13 = 0xc;
        uVar17 = (ulong)uVar7;
        do {
          bVar11 = (byte)iVar13;
          iVar13 = iVar13 + -4;
          uVar6 = uVar6 | (uint)(byte)kReversedBits[(uint)uVar17 & 0xf] << (bVar11 & 0x1f);
          uVar17 = uVar17 >> 4;
        } while (iVar13 != 8 - (bVar1 - 1 & 0xfffffffc));
        uVar19 = (undefined2)(uVar6 >> (0x10 - bVar1 & 0x1f));
      }
      *(undefined2 *)(lVar3 + lVar22 * 2) = uVar19;
      lVar22 = lVar22 + 1;
    } while (lVar22 != iVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



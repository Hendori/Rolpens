
void VP8ResetProba(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0xff;
  *param_1 = 0xffff;
  return;
}



bool VP8ParseIntraModeRow(ulong *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  bool bVar19;
  char cVar20;
  long local_48;
  
  local_48 = 0;
  if (0 < *(int *)(param_2 + 0x198)) {
    lVar18 = 0;
    do {
      iVar11 = (int)param_1[1];
      pbVar1 = (byte *)(*(long *)(param_2 + 0xaf8) + lVar18 * 4);
      iVar13 = *(int *)((long)param_1 + 0xc);
      lVar16 = local_48 + *(long *)(param_2 + 0xb60);
      cVar20 = '\0';
      if (*(int *)(param_2 + 0x88) != 0) {
        bVar2 = *(byte *)(param_2 + 0x4a8);
        if (iVar13 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar10 = *puVar4;
            iVar13 = iVar13 + 0x38;
            param_1[2] = (long)puVar4 + 7;
            uVar10 = ((uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
                      (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 |
                      (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38) >> 8
                     | *param_1 << 0x38;
            *param_1 = uVar10;
          }
          else {
            VP8LoadFinalBytes(param_1);
            iVar13 = *(int *)((long)param_1 + 0xc);
            uVar10 = *param_1;
          }
        }
        else {
          uVar10 = *param_1;
        }
        uVar14 = (uint)bVar2 * iVar11 >> 8;
        uVar6 = uVar14 + 1;
        if (uVar14 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f))) {
          uVar14 = iVar11 - uVar14;
          uVar10 = uVar10 - ((ulong)uVar6 << ((byte)iVar13 & 0x3f));
          uVar6 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          *param_1 = uVar10;
          iVar13 = iVar13 - (uVar6 ^ 7);
          iVar11 = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
          *(int *)((long)param_1 + 0xc) = iVar13;
          *(int *)(param_1 + 1) = iVar11;
          bVar2 = *(byte *)(param_2 + 0x4aa);
          if (iVar13 < 0) {
            puVar4 = (ulong *)param_1[2];
            if (puVar4 < (ulong *)param_1[4]) {
              uVar12 = *puVar4;
              iVar13 = iVar13 + 0x38;
              param_1[2] = (long)puVar4 + 7;
              uVar10 = uVar10 << 0x38 |
                       ((uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                        (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                        (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) >>
                       8;
              *param_1 = uVar10;
            }
            else {
              VP8LoadFinalBytes(param_1);
              uVar10 = *param_1;
              iVar13 = *(int *)((long)param_1 + 0xc);
            }
          }
          uVar6 = (uint)bVar2 * iVar11 >> 8;
          bVar19 = uVar6 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f));
          uVar14 = uVar6 + 1;
          if (bVar19) {
            *param_1 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
            uVar14 = iVar11 - uVar6;
          }
          uVar6 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          cVar20 = bVar19 + '\x02';
          iVar13 = iVar13 - (uVar6 ^ 7);
          iVar11 = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
          *(int *)((long)param_1 + 0xc) = iVar13;
          *(int *)(param_1 + 1) = iVar11;
        }
        else {
          uVar14 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> uVar14 == 0; uVar14 = uVar14 - 1) {
            }
          }
          iVar13 = iVar13 - (uVar14 ^ 7);
          iVar11 = (uVar6 << ((byte)(uVar14 ^ 7) & 0x1f)) + -1;
          *(int *)((long)param_1 + 0xc) = iVar13;
          *(int *)(param_1 + 1) = iVar11;
          bVar2 = *(byte *)(param_2 + 0x4a9);
          if (iVar13 < 0) {
            puVar4 = (ulong *)param_1[2];
            if (puVar4 < (ulong *)param_1[4]) {
              uVar12 = *puVar4;
              iVar13 = iVar13 + 0x38;
              param_1[2] = (long)puVar4 + 7;
              uVar10 = uVar10 << 0x38 |
                       ((uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                        (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                        (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) >>
                       8;
              *param_1 = uVar10;
            }
            else {
              VP8LoadFinalBytes(param_1);
              uVar10 = *param_1;
              iVar13 = *(int *)((long)param_1 + 0xc);
            }
          }
          uVar6 = (uint)bVar2 * iVar11 >> 8;
          cVar20 = uVar6 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f));
          uVar14 = uVar6 + 1;
          if ((bool)cVar20) {
            *param_1 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
            uVar14 = iVar11 - uVar6;
          }
          uVar6 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          iVar13 = iVar13 - (uVar6 ^ 7);
          iVar11 = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
          *(int *)((long)param_1 + 0xc) = iVar13;
          *(int *)(param_1 + 1) = iVar11;
        }
      }
      *(char *)(lVar16 + 0x31e) = cVar20;
      if (*(int *)(param_2 + 0xaf0) == 0) {
        if (-1 < iVar13) goto LAB_001000ba;
LAB_0010061e:
        puVar4 = (ulong *)param_1[2];
        if (puVar4 < (ulong *)param_1[4]) {
          uVar10 = *puVar4;
          iVar13 = iVar13 + 0x38;
          param_1[2] = (long)puVar4 + 7;
          uVar10 = ((uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
                    (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 |
                    (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38) >> 8 |
                   *param_1 << 0x38;
          *param_1 = uVar10;
        }
        else {
          VP8LoadFinalBytes(param_1);
          iVar13 = *(int *)((long)param_1 + 0xc);
          uVar10 = *param_1;
        }
      }
      else {
        bVar2 = *(byte *)(param_2 + 0xaf4);
        if (iVar13 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar10 = *puVar4;
            iVar13 = iVar13 + 0x38;
            param_1[2] = (long)puVar4 + 7;
            uVar10 = ((uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
                      (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 |
                      (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38) >> 8
                     | *param_1 << 0x38;
            *param_1 = uVar10;
          }
          else {
            VP8LoadFinalBytes(param_1);
            uVar10 = *param_1;
            iVar13 = *(int *)((long)param_1 + 0xc);
          }
        }
        else {
          uVar10 = *param_1;
        }
        uVar6 = (uint)bVar2 * iVar11 >> 8;
        bVar19 = uVar6 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f));
        uVar14 = uVar6 + 1;
        if (bVar19) {
          *param_1 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
          uVar14 = iVar11 - uVar6;
        }
        uVar6 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        iVar13 = iVar13 - (uVar6 ^ 7);
        iVar11 = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
        *(int *)((long)param_1 + 0xc) = iVar13;
        *(int *)(param_1 + 1) = iVar11;
        *(bool *)(lVar16 + 0x31d) = bVar19;
        if (iVar13 < 0) goto LAB_0010061e;
LAB_001000ba:
        uVar10 = *param_1;
      }
      uVar6 = (uint)(iVar11 * 0x91) >> 8;
      uVar14 = uVar6 + 1;
      if (uVar6 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f))) {
        uVar6 = iVar11 - uVar6;
        uVar10 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
        uVar14 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar14 == 0; uVar14 = uVar14 - 1) {
          }
        }
        *param_1 = uVar10;
        iVar13 = iVar13 - (uVar14 ^ 7);
        iVar11 = (uVar6 << ((byte)(uVar14 ^ 7) & 0x1f)) + -1;
        *(int *)((long)param_1 + 0xc) = iVar13;
        *(int *)(param_1 + 1) = iVar11;
        *(undefined1 *)(lVar16 + 0x300) = 0;
        if (iVar13 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar12 = *puVar4;
            iVar13 = iVar13 + 0x38;
            param_1[2] = (long)puVar4 + 7;
            uVar10 = uVar10 << 0x38 |
                     ((uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                      (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                      (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) >> 8
            ;
            *param_1 = uVar10;
          }
          else {
            VP8LoadFinalBytes(param_1);
            iVar13 = *(int *)((long)param_1 + 0xc);
            uVar10 = *param_1;
          }
        }
        uVar6 = (uint)(iVar11 * 0x9c) >> 8;
        uVar14 = uVar6 + 1;
        if (uVar6 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f))) {
          uVar6 = iVar11 - uVar6;
          uVar10 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
          uVar14 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> uVar14 == 0; uVar14 = uVar14 - 1) {
            }
          }
          *param_1 = uVar10;
          iVar13 = iVar13 - (uVar14 ^ 7);
          iVar11 = (uVar6 << ((byte)(uVar14 ^ 7) & 0x1f)) + -1;
          *(int *)((long)param_1 + 0xc) = iVar13;
          *(int *)(param_1 + 1) = iVar11;
          if (iVar13 < 0) {
            puVar4 = (ulong *)param_1[2];
            if (puVar4 < (ulong *)param_1[4]) {
              uVar12 = *puVar4;
              iVar13 = iVar13 + 0x38;
              param_1[2] = (long)puVar4 + 7;
              uVar10 = uVar10 << 0x38 |
                       ((uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                        (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                        (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) >>
                       8;
              *param_1 = uVar10;
            }
            else {
              VP8LoadFinalBytes(param_1);
              iVar13 = *(int *)((long)param_1 + 0xc);
              uVar10 = *param_1;
            }
          }
          uVar6 = (uint)(iVar11 * 0x80) >> 8;
          uVar14 = uVar6 + 1;
          if (uVar6 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f))) {
            uVar6 = iVar11 - uVar6;
            uVar9 = 1;
            uVar15 = 0x1f;
            if (uVar6 != 0) {
              for (; uVar6 >> uVar15 == 0; uVar15 = uVar15 - 1) {
              }
            }
            *param_1 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
            *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar15 ^ 7);
            *(uint *)(param_1 + 1) = (uVar6 << ((byte)(uVar15 ^ 7) & 0x1f)) + -1;
            iVar11 = 1;
          }
          else {
            uVar6 = 0x1f;
            if (uVar14 != 0) {
              for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
              }
            }
            uVar9 = 3;
            *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar6 ^ 7);
            *(uint *)(param_1 + 1) = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
            iVar11 = 3;
          }
        }
        else {
          uVar6 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          iVar13 = iVar13 - (uVar6 ^ 7);
          iVar11 = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
          *(int *)((long)param_1 + 0xc) = iVar13;
          *(int *)(param_1 + 1) = iVar11;
          if (iVar13 < 0) {
            puVar4 = (ulong *)param_1[2];
            if (puVar4 < (ulong *)param_1[4]) {
              uVar12 = *puVar4;
              iVar13 = iVar13 + 0x38;
              param_1[2] = (long)puVar4 + 7;
              uVar10 = uVar10 << 0x38 |
                       ((uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                        (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                        (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) >>
                       8;
              *param_1 = uVar10;
            }
            else {
              VP8LoadFinalBytes(param_1);
              iVar13 = *(int *)((long)param_1 + 0xc);
              uVar10 = *param_1;
            }
          }
          uVar6 = (uint)(iVar11 * 0xa3) >> 8;
          uVar14 = uVar6 + 1;
          uVar15 = (uint)(uVar10 >> ((byte)iVar13 & 0x3f));
          if (uVar6 < uVar15) {
            *param_1 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
            uVar14 = iVar11 - uVar6;
          }
          uVar5 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar5 == 0; uVar5 = uVar5 - 1) {
            }
          }
          *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar5 ^ 7);
          *(uint *)(param_1 + 1) = (uVar14 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
          iVar11 = (uint)(uVar6 < uVar15) * 2;
          uVar9 = (undefined1)iVar11;
        }
        *(undefined1 *)(lVar16 + 0x301) = uVar9;
        *(int *)pbVar1 = iVar11 * 0x1010101;
        *(int *)(param_2 + 0xb00) = iVar11 * 0x1010101;
        iVar13 = *(int *)((long)param_1 + 0xc);
        iVar11 = (int)param_1[1];
        if (-1 < iVar13) goto LAB_001001d0;
LAB_00100535:
        puVar4 = (ulong *)param_1[2];
        if (puVar4 < (ulong *)param_1[4]) {
          uVar10 = *puVar4;
          iVar13 = iVar13 + 0x38;
          param_1[2] = (long)puVar4 + 7;
          uVar10 = ((uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
                    (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 |
                    (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38) >> 8 |
                   *param_1 << 0x38;
          *param_1 = uVar10;
        }
        else {
          VP8LoadFinalBytes(param_1);
          iVar13 = *(int *)((long)param_1 + 0xc);
          uVar10 = *param_1;
        }
      }
      else {
        uVar6 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        lVar8 = 0;
        iVar13 = iVar13 - (uVar6 ^ 7);
        iVar11 = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
        *(int *)((long)param_1 + 0xc) = iVar13;
        *(int *)(param_1 + 1) = iVar11;
        *(undefined1 *)(lVar16 + 0x300) = 1;
        while( true ) {
          uVar14 = (uint)*(byte *)(param_2 + 0xb00 + lVar8);
          pbVar17 = pbVar1;
          while( true ) {
            bVar2 = *pbVar17;
            bVar3 = kBModesProba[(ulong)bVar2 * 0x5a + (long)(int)uVar14 * 9];
            if (iVar13 < 0) {
              puVar4 = (ulong *)param_1[2];
              if (puVar4 < (ulong *)param_1[4]) {
                uVar10 = *puVar4;
                iVar13 = iVar13 + 0x38;
                param_1[2] = (long)puVar4 + 7;
                uVar10 = ((uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
                          (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 |
                          (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38)
                         >> 8 | *param_1 << 0x38;
                *param_1 = uVar10;
              }
              else {
                VP8LoadFinalBytes(param_1);
                iVar13 = *(int *)((long)param_1 + 0xc);
                uVar10 = *param_1;
              }
            }
            else {
              uVar10 = *param_1;
            }
            uVar15 = (uint)bVar3 * iVar11 >> 8;
            bVar19 = uVar15 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f));
            uVar6 = uVar15 + 1;
            cVar20 = kYModesIntra4[bVar19];
            lVar7 = (long)cVar20;
            if (bVar19) {
              uVar15 = iVar11 - uVar15;
              uVar5 = 0x1f;
              if (uVar15 != 0) {
                for (; uVar15 >> uVar5 == 0; uVar5 = uVar5 - 1) {
                }
              }
              *param_1 = uVar10 - ((ulong)uVar6 << ((byte)iVar13 & 0x3f));
              iVar13 = iVar13 - (uVar5 ^ 7);
              iVar11 = (uVar15 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
              *(int *)((long)param_1 + 0xc) = iVar13;
              *(int *)(param_1 + 1) = iVar11;
              while ('\0' < cVar20) {
                bVar3 = (kBModesProba + (ulong)bVar2 * 0x5a + (long)(int)uVar14 * 9)[lVar7];
                if (iVar13 < 0) {
                  puVar4 = (ulong *)param_1[2];
                  if (puVar4 < (ulong *)param_1[4]) {
                    uVar10 = *puVar4;
                    iVar13 = iVar13 + 0x38;
                    param_1[2] = (long)puVar4 + 7;
                    uVar10 = ((uVar10 & 0xff000000000000) >> 0x28 |
                              (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                              (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                              (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38) >> 8 | *param_1 << 0x38;
                    *param_1 = uVar10;
                  }
                  else {
                    VP8LoadFinalBytes(param_1);
                    uVar10 = *param_1;
                    iVar13 = *(int *)((long)param_1 + 0xc);
                  }
                }
                else {
                  uVar10 = *param_1;
                }
                uVar15 = (uint)bVar3 * iVar11 >> 8;
                bVar19 = uVar15 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f));
                uVar6 = uVar15 + 1;
                uVar12 = (ulong)uVar6;
                if (bVar19) {
                  uVar6 = iVar11 - uVar15;
                  *param_1 = uVar10 - (uVar12 << ((byte)iVar13 & 0x3f));
                }
                uVar15 = 0x1f;
                if (uVar6 != 0) {
                  for (; uVar6 >> uVar15 == 0; uVar15 = uVar15 - 1) {
                  }
                }
                cVar20 = kYModesIntra4[(int)((int)lVar7 * 2 + (uint)bVar19)];
                lVar7 = (long)cVar20;
                iVar13 = iVar13 - (uVar15 ^ 7);
                iVar11 = (uVar6 << ((byte)(uVar15 ^ 7) & 0x1f)) + -1;
                *(int *)((long)param_1 + 0xc) = iVar13;
                *(int *)(param_1 + 1) = iVar11;
              }
            }
            else {
              uVar14 = 0x1f;
              if (uVar6 != 0) {
                for (; uVar6 >> uVar14 == 0; uVar14 = uVar14 - 1) {
                }
              }
              *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar14 ^ 7);
              *(uint *)(param_1 + 1) = (uVar6 << ((byte)(uVar14 ^ 7) & 0x1f)) + -1;
            }
            uVar14 = -(int)lVar7;
            *pbVar17 = (byte)uVar14;
            if (pbVar17 + 1 == pbVar1 + 4) break;
            iVar11 = (int)param_1[1];
            iVar13 = *(int *)((long)param_1 + 0xc);
            pbVar17 = pbVar17 + 1;
          }
          *(undefined4 *)(lVar16 + 0x301 + lVar8 * 4) = *(undefined4 *)pbVar1;
          *(byte *)(param_2 + 0xb00 + lVar8) = (byte)uVar14;
          lVar8 = lVar8 + 1;
          if (lVar8 == 4) break;
          iVar11 = (int)param_1[1];
          iVar13 = *(int *)((long)param_1 + 0xc);
        }
        iVar13 = *(int *)((long)param_1 + 0xc);
        iVar11 = (int)param_1[1];
        if (iVar13 < 0) goto LAB_00100535;
LAB_001001d0:
        uVar10 = *param_1;
      }
      uVar6 = (uint)(iVar11 * 0x8e) >> 8;
      uVar14 = uVar6 + 1;
      if (uVar6 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f))) {
        uVar6 = iVar11 - uVar6;
        uVar10 = uVar10 - ((ulong)uVar14 << ((byte)iVar13 & 0x3f));
        uVar14 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar14 == 0; uVar14 = uVar14 - 1) {
          }
        }
        *param_1 = uVar10;
        iVar13 = iVar13 - (uVar14 ^ 7);
        iVar11 = (uVar6 << ((byte)(uVar14 ^ 7) & 0x1f)) + -1;
        *(int *)((long)param_1 + 0xc) = iVar13;
        *(int *)(param_1 + 1) = iVar11;
        if (iVar13 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar12 = *puVar4;
            iVar13 = iVar13 + 0x38;
            param_1[2] = (long)puVar4 + 7;
            uVar10 = uVar10 << 0x38 |
                     ((uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                      (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                      (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) >> 8
            ;
            *param_1 = uVar10;
          }
          else {
            VP8LoadFinalBytes(param_1);
            iVar13 = *(int *)((long)param_1 + 0xc);
            uVar10 = *param_1;
          }
        }
        uVar14 = (uint)(iVar11 * 0x72) >> 8;
        uVar6 = uVar14 + 1;
        if (uVar14 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f))) {
          uVar14 = iVar11 - uVar14;
          uVar10 = uVar10 - ((ulong)uVar6 << ((byte)iVar13 & 0x3f));
          uVar6 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          *param_1 = uVar10;
          iVar13 = iVar13 - (uVar6 ^ 7);
          iVar11 = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
          *(int *)((long)param_1 + 0xc) = iVar13;
          *(int *)(param_1 + 1) = iVar11;
          if (iVar13 < 0) {
            puVar4 = (ulong *)param_1[2];
            if (puVar4 < (ulong *)param_1[4]) {
              uVar12 = *puVar4;
              iVar13 = iVar13 + 0x38;
              param_1[2] = (long)puVar4 + 7;
              uVar10 = uVar10 << 0x38 |
                       ((uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                        (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                        (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) >>
                       8;
              *param_1 = uVar10;
            }
            else {
              VP8LoadFinalBytes(param_1);
              iVar13 = *(int *)((long)param_1 + 0xc);
              uVar10 = *param_1;
            }
          }
          uVar14 = (uint)(iVar11 * 0xb7) >> 8;
          uVar6 = uVar14 + 1;
          if (uVar14 < (uint)(uVar10 >> ((byte)iVar13 & 0x3f))) {
            uVar14 = iVar11 - uVar14;
            uVar15 = 0x1f;
            if (uVar14 != 0) {
              for (; uVar14 >> uVar15 == 0; uVar15 = uVar15 - 1) {
              }
            }
            *param_1 = uVar10 - ((ulong)uVar6 << ((byte)iVar13 & 0x3f));
            *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar15 ^ 7);
            *(uint *)(param_1 + 1) = (uVar14 << ((byte)(uVar15 ^ 7) & 0x1f)) + -1;
            uVar9 = 1;
          }
          else {
            uVar14 = 0x1f;
            if (uVar6 != 0) {
              for (; uVar6 >> uVar14 == 0; uVar14 = uVar14 - 1) {
              }
            }
            *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar14 ^ 7);
            *(uint *)(param_1 + 1) = (uVar6 << ((byte)(uVar14 ^ 7) & 0x1f)) + -1;
            uVar9 = 3;
          }
        }
        else {
          uVar14 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> uVar14 == 0; uVar14 = uVar14 - 1) {
            }
          }
          *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar14 ^ 7);
          *(uint *)(param_1 + 1) = (uVar6 << ((byte)(uVar14 ^ 7) & 0x1f)) + -1;
          uVar9 = 2;
        }
      }
      else {
        uVar6 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        *(uint *)((long)param_1 + 0xc) = iVar13 - (uVar6 ^ 7);
        *(uint *)(param_1 + 1) = (uVar14 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
        uVar9 = 0;
      }
      local_48 = local_48 + 800;
      lVar18 = lVar18 + 1;
      *(undefined1 *)(lVar16 + 0x311) = uVar9;
    } while ((int)lVar18 < *(int *)(param_2 + 0x198));
  }
  return *(int *)(param_2 + 0x38) == 0;
}



void VP8ParseProba(ulong *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int local_64;
  
  lVar10 = 0;
  lVar12 = 0;
  lVar15 = param_2;
  do {
    lVar9 = 0;
    do {
      local_64 = 3;
      lVar11 = lVar12 * 0x108 + 0xb + lVar9;
      do {
        lVar14 = lVar11 + -0xb;
        do {
          iVar8 = *(int *)((long)param_1 + 0xc);
          bVar2 = (&CoeffsUpdateProba)[lVar14];
          uVar5 = param_1[1];
          if (iVar8 < 0) {
            puVar3 = (ulong *)param_1[2];
            if (puVar3 < (ulong *)param_1[4]) {
              uVar13 = *puVar3;
              iVar8 = iVar8 + 0x38;
              param_1[2] = (long)puVar3 + 7;
              uVar13 = ((uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
                        (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 |
                        (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38) >>
                       8 | *param_1 << 0x38;
              *param_1 = uVar13;
            }
            else {
              VP8LoadFinalBytes(param_1);
              iVar8 = *(int *)((long)param_1 + 0xc);
              uVar13 = *param_1;
            }
          }
          else {
            uVar13 = *param_1;
          }
          uVar7 = (uint)bVar2 * (int)uVar5 >> 8;
          uVar1 = uVar7 + 1;
          if (uVar7 < (uint)(uVar13 >> ((byte)iVar8 & 0x3f))) {
            uVar7 = (int)uVar5 - uVar7;
            uVar4 = 0x1f;
            if (uVar7 != 0) {
              for (; uVar7 >> uVar4 == 0; uVar4 = uVar4 - 1) {
              }
            }
            *param_1 = uVar13 - ((ulong)uVar1 << ((byte)iVar8 & 0x3f));
            *(uint *)((long)param_1 + 0xc) = iVar8 - (uVar4 ^ 7);
            *(uint *)(param_1 + 1) = (uVar7 << ((byte)(uVar4 ^ 7) & 0x1f)) + -1;
            uVar6 = VP8GetValue(param_1,8);
          }
          else {
            uVar7 = 0x1f;
            if (uVar1 != 0) {
              for (; uVar1 >> uVar7 == 0; uVar7 = uVar7 - 1) {
              }
            }
            *(uint *)((long)param_1 + 0xc) = iVar8 - (uVar7 ^ 7);
            *(uint *)(param_1 + 1) = (uVar1 << ((byte)(uVar7 ^ 7) & 0x1f)) + -1;
            uVar6 = CoeffsProba0[lVar14];
          }
          *(undefined1 *)(param_2 + 0x4ab + lVar14) = uVar6;
          lVar14 = lVar14 + 1;
        } while (lVar11 != lVar14);
        lVar11 = lVar11 + 0xb;
        local_64 = local_64 + -1;
      } while (local_64 != 0);
      lVar9 = lVar9 + 0x21;
    } while (lVar9 != 0x108);
    lVar9 = 0;
    do {
      *(ulong *)(lVar15 + 0x8d0 + lVar9 * 8) =
           (ulong)(byte)(&kBands)[lVar9] * 0x21 + lVar10 + 0x4ab + param_2;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x11);
    lVar12 = lVar12 + 1;
    lVar10 = lVar10 + 0x108;
    lVar15 = lVar15 + 0x88;
  } while (lVar12 != 4);
  iVar8 = VP8GetValue(param_1,1);
  *(int *)(param_2 + 0xaf0) = iVar8;
  if (iVar8 == 0) {
    return;
  }
  uVar6 = VP8GetValue(param_1,8);
  *(undefined1 *)(param_2 + 0xaf4) = uVar6;
  return;
}



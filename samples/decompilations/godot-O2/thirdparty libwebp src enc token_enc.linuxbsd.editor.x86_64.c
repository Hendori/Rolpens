
void VP8TBufferInit(undefined8 *param_1,int param_2)

{
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 < 0x2000) {
    param_2 = 0x2000;
  }
  param_1[1] = param_1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void VP8TBufferClear(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      WebPSafeFree(puVar2);
      puVar2 = puVar1;
    }
    iVar3 = *(int *)((long)param_1 + 0x1c);
    param_1[1] = param_1;
    param_1[2] = 0;
    *param_1 = 0;
    if (iVar3 < 0x2000) {
      iVar3 = 0x2000;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)((long)param_1 + 0x1c) = iVar3;
    return;
  }
  return;
}



undefined8 VP8RecordCoeffTokens(int param_1,int *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  short *psVar11;
  ushort uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  
  iVar18 = *param_2;
  lVar19 = (long)iVar18;
  uVar2 = param_2[1];
  lVar3 = *(long *)(param_2 + 2);
  iVar10 = param_2[4] * 8;
  iVar20 = ((iVar10 + iVar18) * 3 + param_1) * 0xb;
  iVar13 = *(int *)(param_3 + 0x18);
  puVar17 = (uint *)((long)param_1 * 0x2c + lVar19 * 0x84 + *(long *)(param_2 + 8));
  if (iVar13 < 1) {
    if ((*(int *)(param_3 + 0x20) != 0) ||
       (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
       puVar9 == (undefined8 *)0x0)) {
      *(undefined4 *)(param_3 + 0x20) = 1;
      goto LAB_0010014f;
    }
    puVar4 = *(undefined8 **)(param_3 + 8);
    *puVar9 = 0;
    *puVar4 = puVar9;
    iVar13 = *(int *)(param_3 + 0x1c);
    *(undefined8 **)(param_3 + 8) = puVar9;
    puVar9 = puVar9 + 1;
    *(undefined8 **)(param_3 + 0x10) = puVar9;
  }
  else {
    puVar9 = *(undefined8 **)(param_3 + 0x10);
  }
  *(int *)(param_3 + 0x18) = iVar13 + -1;
  *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
       (short)((int)~uVar2 >> 0x1f) * -0x8000 | (ushort)iVar20;
LAB_0010014f:
  uVar6 = *puVar17;
  if (0xfffdffff < uVar6) {
    uVar6 = uVar6 + 1 >> 1 & 0x7fff7fff;
  }
  *puVar17 = (0x10000 - ((int)~uVar2 >> 0x1f)) + uVar6;
  uVar8 = 0;
  if (-1 < (int)uVar2) {
    if (iVar18 < 0x10) {
      psVar11 = (short *)(lVar3 + lVar19 * 2);
      pbVar15 = &DAT_00102009 + lVar19;
LAB_001001a0:
      do {
        uVar16 = (uint)*psVar11;
        iVar18 = iVar18 + 1;
        iVar13 = *(int *)(param_3 + 0x18);
        sVar5 = (short)iVar20;
        uVar6 = -uVar16;
        if (0 < (int)uVar16) {
          uVar6 = uVar16;
        }
        if (iVar13 < 1) {
          if ((*(int *)(param_3 + 0x20) == 0) &&
             (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
             puVar9 != (undefined8 *)0x0)) {
            puVar4 = *(undefined8 **)(param_3 + 8);
            *puVar9 = 0;
            *puVar4 = puVar9;
            iVar13 = *(int *)(param_3 + 0x1c);
            *(undefined8 **)(param_3 + 8) = puVar9;
            puVar9 = puVar9 + 1;
            *(undefined8 **)(param_3 + 0x10) = puVar9;
            goto LAB_001001d0;
          }
          *(undefined4 *)(param_3 + 0x20) = 1;
        }
        else {
          puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_001001d0:
          *(int *)(param_3 + 0x18) = iVar13 + -1;
          *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
               (ushort)(uVar6 != 0) << 0xf | sVar5 + 1U;
        }
        uVar7 = puVar17[1];
        if (0xfffdffff < uVar7) {
          uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
        }
        puVar17[1] = (uVar6 != 0) + 0x10000 + uVar7;
        if (uVar6 != 0) {
          iVar13 = *(int *)(param_3 + 0x18);
          if (iVar13 < 1) {
            if ((*(int *)(param_3 + 0x20) == 0) &&
               (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
               puVar9 != (undefined8 *)0x0)) {
              puVar4 = *(undefined8 **)(param_3 + 8);
              *puVar9 = 0;
              *puVar4 = puVar9;
              iVar13 = *(int *)(param_3 + 0x1c);
              *(undefined8 **)(param_3 + 8) = puVar9;
              puVar9 = puVar9 + 1;
              *(undefined8 **)(param_3 + 0x10) = puVar9;
              goto LAB_00100280;
            }
            *(undefined4 *)(param_3 + 0x20) = 1;
          }
          else {
            puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100280:
            *(int *)(param_3 + 0x18) = iVar13 + -1;
            *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                 (ushort)(1 < uVar6) << 0xf | sVar5 + 2U;
          }
          uVar7 = puVar17[2];
          if (0xfffdffff < uVar7) {
            uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
          }
          puVar17[2] = (1 < uVar6) + 0x10000 + uVar7;
          if (uVar6 == 1) {
            iVar20 = (((uint)*pbVar15 + iVar10) * 3 + 1) * 0xb;
            puVar17 = (uint *)(*(long *)(param_2 + 8) + 0x2c + (ulong)*pbVar15 * 0x84);
            iVar13 = *(int *)(param_3 + 0x18);
            if (iVar13 < 1) goto LAB_0010050a;
LAB_001002f4:
            puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_001002f8:
            *(int *)(param_3 + 0x18) = iVar13 + -1;
            *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                 (ushort)((uVar16 >> 0x1f) << 0xf) | 0x4080;
          }
          else {
            iVar13 = *(int *)(param_3 + 0x18);
            if (iVar13 < 1) {
              if ((*(int *)(param_3 + 0x20) == 0) &&
                 (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                 puVar9 != (undefined8 *)0x0)) {
                puVar4 = *(undefined8 **)(param_3 + 8);
                *puVar9 = 0;
                *puVar4 = puVar9;
                iVar13 = *(int *)(param_3 + 0x1c);
                *(undefined8 **)(param_3 + 8) = puVar9;
                puVar9 = puVar9 + 1;
                *(undefined8 **)(param_3 + 0x10) = puVar9;
                goto LAB_00100438;
              }
              *(undefined4 *)(param_3 + 0x20) = 1;
            }
            else {
              puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100438:
              *(int *)(param_3 + 0x18) = iVar13 + -1;
              *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                   (ushort)(4 < uVar6) << 0xf | sVar5 + 3U;
            }
            uVar7 = puVar17[3];
            if (0xfffdffff < uVar7) {
              uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
            }
            puVar17[3] = (4 < uVar6) + 0x10000 + uVar7;
            if (uVar6 < 5) {
              iVar13 = *(int *)(param_3 + 0x18);
              if (iVar13 < 1) {
                if ((*(int *)(param_3 + 0x20) == 0) &&
                   (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                   puVar9 != (undefined8 *)0x0)) {
                  puVar4 = *(undefined8 **)(param_3 + 8);
                  *puVar9 = 0;
                  *puVar4 = puVar9;
                  iVar13 = *(int *)(param_3 + 0x1c);
                  *(undefined8 **)(param_3 + 8) = puVar9;
                  puVar9 = puVar9 + 1;
                  *(undefined8 **)(param_3 + 0x10) = puVar9;
                  goto LAB_00100496;
                }
                *(undefined4 *)(param_3 + 0x20) = 1;
              }
              else {
                puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100496:
                *(int *)(param_3 + 0x18) = iVar13 + -1;
                *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                     (ushort)(uVar6 != 2) << 0xf | sVar5 + 4U;
              }
              uVar7 = puVar17[4];
              if (0xfffdffff < uVar7) {
                uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
              }
              puVar17[4] = (uVar6 != 2) + 0x10000 + uVar7;
              if (uVar6 == 2) {
                iVar13 = *(int *)(param_3 + 0x18);
              }
              else {
                iVar13 = *(int *)(param_3 + 0x18);
                if (iVar13 < 1) {
                  if ((*(int *)(param_3 + 0x20) == 0) &&
                     (puVar9 = (undefined8 *)
                               WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                     puVar9 != (undefined8 *)0x0)) {
                    puVar4 = *(undefined8 **)(param_3 + 8);
                    *puVar9 = 0;
                    *puVar4 = puVar9;
                    iVar13 = *(int *)(param_3 + 0x1c);
                    *(undefined8 **)(param_3 + 8) = puVar9;
                    puVar9 = puVar9 + 1;
                    *(undefined8 **)(param_3 + 0x10) = puVar9;
                    goto LAB_0010090a;
                  }
                  *(undefined4 *)(param_3 + 0x20) = 1;
                }
                else {
                  puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_0010090a:
                  *(int *)(param_3 + 0x18) = iVar13 + -1;
                  *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                       (ushort)(uVar6 == 4) << 0xf | sVar5 + 5U;
                }
                uVar7 = puVar17[5];
                if (0xfffdffff < uVar7) {
                  uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                }
                puVar17[5] = (uVar6 == 4) + 0x10000 + uVar7;
                iVar13 = *(int *)(param_3 + 0x18);
              }
            }
            else {
              iVar13 = *(int *)(param_3 + 0x18);
              if (iVar13 < 1) {
                if ((*(int *)(param_3 + 0x20) == 0) &&
                   (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                   puVar9 != (undefined8 *)0x0)) {
                  puVar4 = *(undefined8 **)(param_3 + 8);
                  *puVar9 = 0;
                  *puVar4 = puVar9;
                  iVar13 = *(int *)(param_3 + 0x1c);
                  *(undefined8 **)(param_3 + 8) = puVar9;
                  puVar9 = puVar9 + 1;
                  *(undefined8 **)(param_3 + 0x10) = puVar9;
                  goto LAB_001006b0;
                }
                *(undefined4 *)(param_3 + 0x20) = 1;
              }
              else {
                puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_001006b0:
                *(int *)(param_3 + 0x18) = iVar13 + -1;
                *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                     (ushort)(10 < uVar6) << 0xf | sVar5 + 6U;
              }
              uVar7 = puVar17[6];
              if (0xfffdffff < uVar7) {
                uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
              }
              puVar17[6] = (10 < uVar6) + 0x10000 + uVar7;
              if (uVar6 < 0xb) {
                iVar13 = *(int *)(param_3 + 0x18);
                if (iVar13 < 1) {
                  if ((*(int *)(param_3 + 0x20) == 0) &&
                     (puVar9 = (undefined8 *)
                               WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                     puVar9 != (undefined8 *)0x0)) {
                    puVar4 = *(undefined8 **)(param_3 + 8);
                    *puVar9 = 0;
                    *puVar4 = puVar9;
                    iVar13 = *(int *)(param_3 + 0x1c);
                    *(undefined8 **)(param_3 + 8) = puVar9;
                    puVar9 = puVar9 + 1;
                    *(undefined8 **)(param_3 + 0x10) = puVar9;
                    goto LAB_00100710;
                  }
                  *(undefined4 *)(param_3 + 0x20) = 1;
                }
                else {
                  puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100710:
                  *(int *)(param_3 + 0x18) = iVar13 + -1;
                  *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                       (ushort)(6 < uVar6) << 0xf | sVar5 + 7U;
                }
                uVar7 = puVar17[7];
                if (0xfffdffff < uVar7) {
                  uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                }
                puVar17[7] = (6 < uVar6) + 0x10000 + uVar7;
                if (uVar6 < 7) {
                  iVar13 = *(int *)(param_3 + 0x18);
                  if (iVar13 < 1) {
                    if (*(int *)(param_3 + 0x20) != 0) goto LAB_00100b6b;
                    puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8);
                    if (puVar9 == (undefined8 *)0x0) {
LAB_00101408:
                      iVar13 = *(int *)(param_3 + 0x18);
                      goto LAB_00100b6b;
                    }
                    puVar4 = *(undefined8 **)(param_3 + 8);
                    *puVar9 = 0;
                    *puVar4 = puVar9;
                    iVar13 = *(int *)(param_3 + 0x1c);
                    *(undefined8 **)(param_3 + 8) = puVar9;
                    puVar9 = puVar9 + 1;
                    *(undefined8 **)(param_3 + 0x10) = puVar9;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
                  }
                  iVar13 = iVar13 + -1;
                  *(int *)(param_3 + 0x18) = iVar13;
                  *(ushort *)((long)puVar9 + (long)iVar13 * 2) =
                       (ushort)(uVar6 == 6) << 0xf | 0x409f;
                }
                else {
                  iVar13 = *(int *)(param_3 + 0x18);
                  if (iVar13 < 1) {
                    if (*(int *)(param_3 + 0x20) != 0) {
LAB_00100b6b:
                      *(undefined4 *)(param_3 + 0x20) = 1;
                      goto LAB_001004d7;
                    }
                    puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8);
                    if (puVar9 != (undefined8 *)0x0) {
                      *puVar9 = 0;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_001009a6;
                    }
                    iVar13 = *(int *)(param_3 + 0x18);
                    *(undefined4 *)(param_3 + 0x20) = 1;
                    if (iVar13 < 1) goto LAB_00100b6b;
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
                    uVar7 = ~uVar6 & 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_001009a6:
                    iVar13 = iVar13 + -1;
                    *(int *)(param_3 + 0x18) = iVar13;
                    uVar7 = ~uVar6 & 1;
                    *(ushort *)((long)puVar9 + (long)iVar13 * 2) =
                         (ushort)(8 < uVar6) << 0xf | 0x40a5;
                    if (iVar13 < 1) {
                      if (*(int *)(param_3 + 0x20) != 0) goto LAB_00100b6b;
                      puVar9 = (undefined8 *)
                               WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8);
                      if (puVar9 == (undefined8 *)0x0) goto LAB_00101408;
                      *puVar9 = 0;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                    }
                  }
                  iVar13 = iVar13 + -1;
                  *(int *)(param_3 + 0x18) = iVar13;
                  *(ushort *)((long)puVar9 + (long)iVar13 * 2) = (ushort)(uVar7 << 0xf) | 0x4091;
                }
              }
              else {
                uVar7 = uVar6 - 3;
                iVar13 = *(int *)(param_3 + 0x18);
                uVar12 = sVar5 + 8;
                if (uVar7 < 0x10) {
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_00100dcc;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100dcc:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) = uVar12;
                  }
                  uVar7 = puVar17[8];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  puVar17[8] = uVar7 + 0x10000;
                  iVar13 = *(int *)(param_3 + 0x18);
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_00100e09;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100e09:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(short *)((long)puVar9 + (long)(iVar13 + -1) * 2) = sVar5 + 9;
                  }
                  uVar7 = puVar17[9];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  uVar6 = uVar6 - 0xb;
                  uVar7 = uVar7 + 0x10000;
                  pbVar14 = &VP8Cat3;
                  uVar21 = 4;
                }
                else if (uVar7 < 0x20) {
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_00100acf;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100acf:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) = uVar12;
                  }
                  uVar7 = puVar17[8];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  puVar17[8] = uVar7 + 0x10000;
                  iVar13 = *(int *)(param_3 + 0x18);
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_00100b06;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100b06:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) = sVar5 + 9U | 0x8000;
                  }
                  uVar7 = puVar17[9];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  uVar6 = uVar6 - 0x13;
                  uVar7 = uVar7 + 0x10001;
                  pbVar14 = &VP8Cat4;
                  uVar21 = 8;
                }
                else if (uVar7 < 0x40) {
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_001007b1;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_001007b1:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) = uVar12 | 0x8000;
                  }
                  uVar7 = puVar17[8];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  puVar17[8] = uVar7 + 0x10001;
                  iVar13 = *(int *)(param_3 + 0x18);
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_001007ed;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_001007ed:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(short *)((long)puVar9 + (long)(iVar13 + -1) * 2) = sVar5 + 10;
                  }
                  uVar7 = puVar17[9];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  uVar6 = uVar6 - 0x23;
                  uVar7 = uVar7 + 0x10000;
                  pbVar14 = &VP8Cat5;
                  uVar21 = 0x10;
                }
                else {
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_00100e52;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100e52:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) = uVar12 | 0x8000;
                  }
                  uVar7 = puVar17[8];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  puVar17[8] = uVar7 + 0x10001;
                  iVar13 = *(int *)(param_3 + 0x18);
                  if (iVar13 < 1) {
                    if ((*(int *)(param_3 + 0x20) == 0) &&
                       (puVar9 = (undefined8 *)
                                 WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      *puVar9 = 0;
                      **(undefined8 **)(param_3 + 8) = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_00100e8e;
                    }
                    *(undefined4 *)(param_3 + 0x20) = 1;
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100e8e:
                    *(int *)(param_3 + 0x18) = iVar13 + -1;
                    *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) = sVar5 + 10U | 0x8000;
                  }
                  uVar7 = puVar17[9];
                  if (0xfffdffff < uVar7) {
                    uVar7 = uVar7 + 1 >> 1 & 0x7fff7fff;
                  }
                  uVar6 = uVar6 - 0x43;
                  uVar7 = uVar7 + 0x10001;
                  pbVar14 = &VP8Cat6;
                  uVar21 = 0x400;
                }
                puVar17[9] = uVar7;
                iVar13 = *(int *)(param_3 + 0x18);
                do {
                  while( true ) {
                    uVar7 = uVar21 & uVar6;
                    bVar1 = *pbVar14;
                    uVar21 = (int)uVar21 >> 1;
                    if (iVar13 < 1) break;
                    puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_00100854:
                    iVar13 = iVar13 + -1;
                    *(int *)(param_3 + 0x18) = iVar13;
                    *(ushort *)((long)puVar9 + (long)iVar13 * 2) =
                         (ushort)(uVar7 != 0) << 0xf | (ushort)bVar1 | 0x4000;
                    pbVar14 = pbVar14 + 1;
                    if (uVar21 == 0) goto LAB_001004d7;
                  }
                  if (*(int *)(param_3 + 0x20) == 0) {
                    puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8);
                    if (puVar9 != (undefined8 *)0x0) {
                      puVar4 = *(undefined8 **)(param_3 + 8);
                      *puVar9 = 0;
                      *puVar4 = puVar9;
                      iVar13 = *(int *)(param_3 + 0x1c);
                      *(undefined8 **)(param_3 + 8) = puVar9;
                      puVar9 = puVar9 + 1;
                      *(undefined8 **)(param_3 + 0x10) = puVar9;
                      goto LAB_00100854;
                    }
                    iVar13 = *(int *)(param_3 + 0x18);
                  }
                  *(undefined4 *)(param_3 + 0x20) = 1;
                  pbVar14 = pbVar14 + 1;
                } while (uVar21 != 0);
              }
            }
LAB_001004d7:
            iVar20 = (((uint)*pbVar15 + iVar10) * 3 + 2) * 0xb;
            puVar17 = (uint *)(*(long *)(param_2 + 8) + 0x58 + (ulong)*pbVar15 * 0x84);
            if (0 < iVar13) goto LAB_001002f4;
LAB_0010050a:
            if ((*(int *)(param_3 + 0x20) == 0) &&
               (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
               puVar9 != (undefined8 *)0x0)) {
              puVar4 = *(undefined8 **)(param_3 + 8);
              *puVar9 = 0;
              *puVar4 = puVar9;
              iVar13 = *(int *)(param_3 + 0x1c);
              *(undefined8 **)(param_3 + 8) = puVar9;
              puVar9 = puVar9 + 1;
              *(undefined8 **)(param_3 + 0x10) = puVar9;
              goto LAB_001002f8;
            }
            *(undefined4 *)(param_3 + 0x20) = 1;
          }
          if (iVar18 == 0x10) break;
          iVar13 = *(int *)(param_3 + 0x18);
          if (iVar13 < 1) {
            if ((*(int *)(param_3 + 0x20) == 0) &&
               (puVar9 = (undefined8 *)WebPSafeMalloc(1,(long)*(int *)(param_3 + 0x1c) * 2 + 8),
               puVar9 != (undefined8 *)0x0)) {
              puVar4 = *(undefined8 **)(param_3 + 8);
              *puVar9 = 0;
              *puVar4 = puVar9;
              iVar13 = *(int *)(param_3 + 0x1c);
              *(undefined8 **)(param_3 + 8) = puVar9;
              puVar9 = puVar9 + 1;
              *(undefined8 **)(param_3 + 0x10) = puVar9;
              goto LAB_0010033e;
            }
            *(undefined4 *)(param_3 + 0x20) = 1;
          }
          else {
            puVar9 = *(undefined8 **)(param_3 + 0x10);
LAB_0010033e:
            *(int *)(param_3 + 0x18) = iVar13 + -1;
            *(ushort *)((long)puVar9 + (long)(iVar13 + -1) * 2) =
                 (ushort)(iVar18 <= (int)uVar2) << 0xf | (ushort)iVar20;
          }
          uVar6 = *puVar17;
          if (0xfffdffff < uVar6) {
            uVar6 = uVar6 + 1 >> 1 & 0x7fff7fff;
          }
          *puVar17 = (iVar18 <= (int)uVar2) + 0x10000 + uVar6;
          if ((int)uVar2 < iVar18) break;
          psVar11 = psVar11 + 1;
          pbVar15 = pbVar15 + 1;
          goto LAB_001001a0;
        }
        bVar1 = *pbVar15;
        psVar11 = psVar11 + 1;
        pbVar15 = pbVar15 + 1;
        iVar20 = ((uint)bVar1 + iVar10) * 0x21;
        puVar17 = (uint *)(*(long *)(param_2 + 8) + (ulong)bVar1 * 0x84);
      } while (iVar18 != 0x10);
    }
    uVar8 = 1;
  }
  return uVar8;
}



undefined8 VP8EmitTokens(long *param_1,undefined8 param_2,long param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ushort *puVar7;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
LAB_00101545:
    if (param_4 != 0) {
      *param_1 = 0;
    }
    return 1;
  }
  plVar6 = (long *)*plVar5;
  iVar2 = *(int *)((long)param_1 + 0x1c);
  if (plVar6 == (long *)0x0) goto LAB_00101506;
LAB_00101470:
  iVar4 = 0;
  if (iVar2 < 1) {
    if (param_4 == 0) goto LAB_001014f6;
    WebPSafeFree(plVar5);
    iVar2 = *(int *)((long)param_1 + 0x1c);
    goto LAB_001014f6;
  }
  do {
    puVar7 = (ushort *)((long)plVar5 + (long)iVar2 * 2 + 6);
    puVar3 = (ushort *)
             ((long)plVar5 + (ulong)(uint)((iVar2 + -1) - iVar4) * -2 + (long)iVar2 * 2 + 4);
    do {
      while( true ) {
        uVar1 = *puVar7;
        if ((uVar1 & 0x4000) != 0) break;
        puVar7 = puVar7 + -1;
        VP8PutBit(param_2,uVar1 >> 0xf,*(undefined1 *)(param_3 + (ulong)(uVar1 & 0x3fff)));
        if (puVar7 == puVar3) goto LAB_001014e2;
      }
      puVar7 = puVar7 + -1;
      VP8PutBit(param_2,uVar1 >> 0xf,(char)uVar1);
    } while (puVar7 != puVar3);
LAB_001014e2:
    if (param_4 != 0) {
      WebPSafeFree(plVar5);
    }
    if (plVar6 == (long *)0x0) goto LAB_00101545;
    iVar2 = *(int *)((long)param_1 + 0x1c);
LAB_001014f6:
    plVar5 = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 != (long *)0x0) goto LAB_00101470;
LAB_00101506:
    iVar4 = (int)param_1[3];
    if (iVar2 <= iVar4) {
      if (param_4 == 0) {
        return 1;
      }
      WebPSafeFree(plVar5);
      goto LAB_00101545;
    }
  } while( true );
}



long VP8EstimateTokenSize(long *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar5 = 0;
  iVar2 = *(int *)((long)param_1 + 0x1c);
  do {
    plVar3 = (long *)*plVar9;
    lVar4 = (long)(iVar2 + -2);
    if (plVar3 == (long *)0x0) {
LAB_00101650:
      iVar7 = (int)param_1[3];
      if (iVar2 <= iVar7) {
        return lVar5;
      }
      plVar3 = (long *)0x0;
      plVar8 = plVar9;
    }
    else {
      iVar7 = 0;
      plVar8 = plVar9;
      if (iVar2 < 1) {
        do {
          plVar9 = plVar3;
          plVar3 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
        goto LAB_00101650;
      }
    }
    do {
      while( true ) {
        plVar9 = plVar3;
        uVar1 = *(ushort *)((long)plVar8 + lVar4 * 2 + 10);
        plVar3 = plVar9;
        if ((uVar1 & 0x4000) == 0) break;
        bVar6 = (byte)uVar1;
        if (-1 < (short)uVar1) goto LAB_001015e9;
LAB_0010161a:
        lVar4 = lVar4 + -1;
        lVar5 = lVar5 + (ulong)*(ushort *)(&VP8EntropyCost + (long)(int)(0xff - (uint)bVar6) * 2);
        if ((int)lVar4 + 2 <= iVar7) goto LAB_00101636;
      }
      bVar6 = *(byte *)(param_2 + (ulong)(uVar1 & 0x3fff));
      if ((short)uVar1 < 0) goto LAB_0010161a;
LAB_001015e9:
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + (ulong)*(ushort *)(&VP8EntropyCost + (ulong)bVar6 * 2);
    } while (iVar7 < (int)lVar4 + 2);
LAB_00101636:
    if (plVar9 == (long *)0x0) {
      return lVar5;
    }
  } while( true );
}



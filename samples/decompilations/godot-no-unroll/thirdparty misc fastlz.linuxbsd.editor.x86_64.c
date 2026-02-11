
void fastlz_memmove(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong __n;
  
  if (4 < param_3) {
    __n = (ulong)param_3;
    if (param_2 + __n <= param_1) {
      memmove(param_1,param_2,__n);
      return;
    }
LAB_00100010:
    uVar2 = 0;
    do {
      param_1[uVar2] = param_2[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 != __n);
    return;
  }
  if (param_3 != 2) {
    if (param_3 < 3) {
      if (param_3 == 0) {
        return;
      }
      *param_1 = *param_2;
      return;
    }
    if (param_3 != 3) {
      __n = 4;
      goto LAB_00100010;
    }
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



int fastlz1_compress(char *param_1,int param_2,char *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined1 *puVar18;
  char cVar19;
  ulong uVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  uint uVar24;
  long in_FS_OFFSET;
  undefined1 auStack_10030 [65536];
  
  puVar9 = &stack0xffffffffffffffd0;
  do {
    puVar18 = puVar9;
    *(undefined8 *)(puVar18 + -0x1000) = *(undefined8 *)(puVar18 + -0x1000);
    puVar9 = puVar18 + -0x1000;
  } while (puVar18 + -0x1000 != auStack_10030);
  puVar11 = (undefined8 *)(puVar18 + -0x1018);
  *(undefined8 *)(puVar18 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar6 = (ushort *)(param_1 + (long)param_2 + -2);
  if (param_2 < 4) {
    iVar10 = 0;
    if (param_2 != 0) {
      *param_3 = (char)param_2 + -1;
      pcVar12 = (char *)0x0;
      if (param_1 <= (char *)((long)puVar6 + 1U)) {
        do {
          param_3[(long)(pcVar12 + 1)] = param_1[(long)pcVar12];
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 != (char *)((long)puVar6 + (2 - (long)param_1)));
      }
      iVar10 = param_2 + 1;
    }
  }
  else {
    do {
      *puVar11 = param_1;
      puVar11[1] = param_1;
      puVar11 = puVar11 + 2;
    } while (puVar11 != (undefined8 *)(puVar18 + 0xefe8));
    *param_3 = '\x1f';
    puVar17 = (ushort *)(param_1 + 2);
    puVar1 = (ushort *)((long)puVar6 + 1);
    uVar20 = 2;
    param_3[1] = *param_1;
    pcVar12 = param_3 + 3;
    param_3[2] = param_1[1];
    pcVar13 = pcVar12;
    puVar16 = puVar17;
    if (puVar17 < param_1 + (long)param_2 + -0xd) {
      do {
        uVar7 = *puVar16;
        cVar19 = *(char *)((long)puVar16 + 1);
        uVar8 = puVar16[1];
        uVar15 = (ulong)((*puVar16 ^ *(ushort *)((long)puVar16 + 1)) & 0x1fff ^
                        (uint)(*puVar16 >> 3));
        pcVar12 = *(char **)(puVar18 + uVar15 * 8 + -0x1018);
        *(ushort **)(puVar18 + uVar15 * 8 + -0x1018) = puVar16;
        iVar10 = (int)puVar16;
        uVar14 = (iVar10 - (int)pcVar12) - 1;
        if ((((uVar14 < 0x1fff) && ((char)uVar7 == *pcVar12)) && (cVar19 == pcVar12[1])) &&
           ((char)uVar8 == pcVar12[2])) {
          puVar22 = (ushort *)((long)puVar16 + 3);
          if (uVar14 == 0) {
            pcVar12 = pcVar12 + 3;
            if (puVar22 < puVar6) {
              do {
                if ((char)uVar8 != *pcVar12) {
                  puVar16 = (ushort *)((long)puVar22 - 3);
                  puVar21 = puVar22 + -1;
                  uVar24 = (int)puVar16 - iVar10;
                  puVar17 = (ushort *)((long)puVar22 - 1);
                  goto LAB_0010026b;
                }
                puVar23 = (ushort *)((long)puVar22 + 1);
                pcVar12 = pcVar12 + 1;
                puVar17 = puVar22;
                puVar22 = puVar23;
              } while (puVar6 != puVar23);
LAB_001003ec:
              puVar16 = puVar17 + -1;
              puVar21 = (ushort *)((long)puVar17 - 1);
              uVar24 = (int)puVar16 - iVar10;
              puVar22 = puVar23;
            }
            else {
              puVar21 = (ushort *)((long)puVar16 + 1);
              uVar24 = 0;
              puVar17 = puVar16 + 1;
            }
          }
          else {
            puVar23 = puVar16 + 2;
            if (pcVar12[3] == *(char *)((long)puVar16 + 3)) {
              puVar2 = (ushort *)((long)puVar16 + 5);
              if (pcVar12[4] == (char)puVar16[2]) {
                puVar3 = puVar16 + 3;
                if (pcVar12[5] == *(char *)((long)puVar16 + 5)) {
                  puVar4 = (ushort *)((long)puVar16 + 7);
                  if (pcVar12[6] == (char)puVar16[3]) {
                    puVar5 = puVar16 + 4;
                    if (pcVar12[7] == *(char *)((long)puVar16 + 7)) {
                      puVar2 = (ushort *)((long)puVar16 + 9);
                      if (pcVar12[8] == (char)puVar16[4]) {
                        puVar22 = puVar16 + 5;
                        if (pcVar12[9] == *(char *)((long)puVar16 + 9)) {
                          puVar23 = (ushort *)((long)puVar16 + 0xb);
                          if (pcVar12[10] == (char)puVar16[5]) {
                            pcVar12 = pcVar12 + 0xb;
                            do {
                              puVar22 = puVar23;
                              if (puVar6 <= puVar22) {
                                puVar16 = (ushort *)((long)puVar22 - 3);
                                puVar21 = puVar22 + -1;
                                uVar24 = (int)puVar16 - iVar10;
                                puVar17 = (ushort *)((long)puVar22 - 1);
                                goto LAB_0010026b;
                              }
                              puVar23 = (ushort *)((long)puVar22 + 1);
                              cVar19 = *pcVar12;
                              pcVar12 = pcVar12 + 1;
                              puVar17 = puVar22;
                            } while (cVar19 == (char)*puVar22);
                            goto LAB_001003ec;
                          }
                          uVar24 = 8;
                          puVar17 = puVar22;
                          puVar16 = puVar5;
                          puVar21 = puVar2;
                          puVar22 = puVar23;
                        }
                        else {
                          uVar24 = 7;
                          puVar17 = puVar2;
                          puVar16 = puVar4;
                          puVar21 = puVar5;
                        }
                      }
                      else {
                        uVar24 = 6;
                        puVar17 = puVar5;
                        puVar16 = puVar3;
                        puVar21 = puVar4;
                        puVar22 = puVar2;
                      }
                    }
                    else {
                      uVar24 = 5;
                      puVar17 = puVar4;
                      puVar16 = puVar2;
                      puVar21 = puVar3;
                      puVar22 = puVar5;
                    }
                  }
                  else {
                    uVar24 = 4;
                    puVar17 = puVar3;
                    puVar16 = puVar23;
                    puVar21 = puVar2;
                    puVar22 = puVar4;
                  }
                }
                else {
                  uVar24 = 3;
                  puVar17 = puVar2;
                  puVar16 = puVar22;
                  puVar21 = puVar23;
                  puVar22 = puVar3;
                }
              }
              else {
                uVar24 = 2;
                puVar17 = puVar23;
                puVar16 = puVar16 + 1;
                puVar21 = puVar22;
                puVar22 = puVar2;
              }
            }
            else {
              puVar21 = puVar16 + 1;
              uVar24 = 1;
              puVar17 = puVar22;
              puVar16 = (ushort *)((long)puVar16 + 1);
              puVar22 = puVar23;
            }
          }
LAB_0010026b:
          if ((int)uVar20 == 0) {
            pcVar13 = pcVar13 + -1;
          }
          else {
            pcVar13[~uVar20] = (char)uVar20 + -1;
          }
          cVar19 = (char)(uVar14 >> 8);
          if (0x106 < uVar24) {
            pcVar12 = pcVar13;
            do {
              *pcVar12 = cVar19 + -0x20;
              uVar24 = uVar24 - 0x106;
              pcVar13 = pcVar12 + 3;
              pcVar12[1] = -3;
              pcVar12[2] = (char)uVar14;
              pcVar12 = pcVar13;
            } while (0x106 < uVar24);
          }
          if (uVar24 < 7) {
            cVar19 = (char)uVar24 * ' ' + cVar19;
            pcVar12 = pcVar13 + 2;
          }
          else {
            cVar19 = cVar19 + -0x20;
            pcVar13[2] = (char)uVar14;
            pcVar12 = pcVar13 + 3;
            uVar14 = uVar24 - 7;
          }
          pcVar13[1] = (char)uVar14;
          *pcVar13 = cVar19;
          cVar19 = *(char *)((long)puVar22 - 1);
          uVar7 = puVar22[-1];
          *(ushort **)
           (puVar18 +
           (ulong)((ushort)(*(ushort *)((long)puVar22 - 3) ^ uVar7 ^
                           *(ushort *)((long)puVar22 - 3) >> 3) & 0x1fff) * 8 + -0x1018) = puVar16;
          uVar8 = *puVar22;
          *pcVar12 = '\x1f';
          *(ushort **)
           (puVar18 +
           (ulong)((ushort)(CONCAT11((char)uVar8,cVar19) ^ uVar7 ^ uVar7 >> 3) & 0x1fff) * 8 +
           -0x1018) = puVar21;
          pcVar12 = pcVar12 + 1;
          uVar20 = 0;
        }
        else {
          uVar14 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar14;
          *pcVar13 = (char)uVar7;
          puVar17 = (ushort *)((long)puVar16 + 1);
          pcVar12 = pcVar13 + 1;
          if (uVar14 == 0x20) {
            pcVar13[1] = '\x1f';
            uVar20 = 0;
            pcVar12 = pcVar13 + 2;
          }
        }
        pcVar13 = pcVar12;
        puVar16 = puVar17;
        if (param_1 + (long)param_2 + -0xd <= puVar17) goto LAB_001001b3;
      } while( true );
    }
    if (puVar1 < puVar17) {
      iVar10 = 3;
      cVar19 = '\x01';
    }
    else {
      do {
        while( true ) {
          uVar7 = *puVar17;
          uVar14 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar14;
          puVar17 = (ushort *)((long)puVar17 + 1);
          *pcVar12 = (char)uVar7;
          if (uVar14 == 0x20) break;
          pcVar12 = pcVar12 + 1;
          if (puVar1 < puVar17) goto LAB_001001d2;
        }
        pcVar12[1] = '\x1f';
        uVar20 = 0;
        pcVar12 = pcVar12 + 2;
LAB_001001b3:
      } while (puVar17 <= puVar1);
LAB_001001d2:
      iVar10 = (int)param_3;
      if ((int)uVar20 == 0) {
        iVar10 = ((int)pcVar12 + -1) - iVar10;
        goto LAB_001001dd;
      }
      cVar19 = (char)uVar20 + -1;
      param_3 = pcVar12 + ~uVar20;
      iVar10 = (int)pcVar12 - iVar10;
    }
    *param_3 = cVar19;
  }
LAB_001001dd:
  if (*(long *)(puVar18 + 0xeff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar18 + -0x1020) = 0x100490;
    __stack_chk_fail();
  }
  return iVar10;
}



int fastlz1_decompress(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  
  pbVar1 = param_1 + param_2;
  pbVar8 = param_1 + 1;
  uVar6 = *param_1 & 0x1f;
  pbVar9 = param_3;
  if (uVar6 < 0x20) goto LAB_00100602;
  do {
    iVar7 = (uVar6 >> 5) - 1;
    if (uVar6 >> 5 == 7) {
      if (pbVar1 + -2 < pbVar8) {
        return 0;
      }
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar7 = bVar3 + 6;
    }
    pbVar11 = pbVar8 + 1;
    if ((pbVar9 + (~(ulong)((uVar6 & 0x1f) << 8) - (ulong)*pbVar8) < param_3) ||
       (param_3 + param_4 < pbVar9 + (iVar7 + 3))) {
      return 0;
    }
    fastlz_memmove(pbVar9,pbVar9 + (~(ulong)((uVar6 & 0x1f) << 8) - (ulong)*pbVar8),
                   (ulong)(iVar7 + 3));
    pbVar2 = pbVar9 + (iVar7 + 3);
    while( true ) {
      pbVar9 = pbVar2;
      if (pbVar1 + -2 < pbVar11) {
        return (int)pbVar9 - (int)param_3;
      }
      uVar6 = (uint)*pbVar11;
      pbVar8 = pbVar11 + 1;
      if (0x1f < uVar6) break;
LAB_00100602:
      uVar6 = uVar6 + 1;
      pbVar2 = pbVar9 + uVar6;
      if (param_3 + param_4 < pbVar2) {
        return 0;
      }
      pbVar11 = pbVar8 + uVar6;
      if (pbVar1 < pbVar11) {
        return 0;
      }
      if (uVar6 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar6 != 0) && (*pbVar9 = *pbVar8, (uVar6 & 2) != 0)) {
            *(undefined2 *)(pbVar2 + -2) = *(undefined2 *)(pbVar11 + -2);
          }
        }
        else {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
          *(undefined4 *)(pbVar2 + -4) = *(undefined4 *)(pbVar11 + -4);
        }
      }
      else {
        *(undefined8 *)pbVar9 = *(undefined8 *)pbVar8;
        lVar10 = (long)pbVar9 - ((ulong)(pbVar9 + 8) & 0xfffffffffffffff8);
        uVar6 = uVar6 + (int)lVar10 & 0xfffffff8;
        *(undefined8 *)(pbVar2 + -8) = *(undefined8 *)(pbVar11 + -8);
        if (7 < uVar6) {
          uVar5 = 0;
          do {
            uVar4 = (int)uVar5 + 8;
            *(undefined8 *)(((ulong)(pbVar9 + 8) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)(pbVar8 + (uVar5 - lVar10));
            uVar5 = (ulong)uVar4;
          } while (uVar4 < uVar6);
        }
      }
    }
  } while( true );
}



int fastlz2_compress(byte *param_1,int param_2,byte *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  char cVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  undefined1 *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  uint uVar26;
  ulong uVar27;
  short sVar28;
  long in_FS_OFFSET;
  undefined1 auStack_10030 [65536];
  
  puVar10 = &stack0xffffffffffffffd0;
  do {
    puVar23 = puVar10;
    *(undefined8 *)(puVar23 + -0x1000) = *(undefined8 *)(puVar23 + -0x1000);
    puVar10 = puVar23 + -0x1000;
  } while (puVar23 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar23 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar4 = (ushort *)(param_1 + (long)param_2 + -2);
  if (param_2 < 4) {
    iVar11 = 0;
    if (param_2 != 0) {
      *param_3 = (char)param_2 - 1;
      pbVar13 = (byte *)0x0;
      if (param_1 <= (byte *)((long)puVar4 + 1U)) {
        do {
          param_3[(long)(pbVar13 + 1)] = param_1[(long)pbVar13];
          pbVar13 = pbVar13 + 1;
        } while (pbVar13 != (byte *)((long)puVar4 + (2 - (long)param_1)));
      }
      iVar11 = param_2 + 1;
    }
  }
  else {
    puVar12 = (undefined8 *)(puVar23 + -0x1018);
    do {
      *puVar12 = param_1;
      puVar12[1] = param_1;
      puVar12 = puVar12 + 2;
    } while (puVar12 != (undefined8 *)(puVar23 + 0xefe8));
    *param_3 = 0x1f;
    puVar19 = (ushort *)(param_1 + 2);
    puVar3 = (ushort *)((long)puVar4 + 1);
    param_3[1] = *param_1;
    pbVar13 = param_3 + 3;
    param_3[2] = param_1[1];
    uVar17 = 2;
    if (puVar19 < param_1 + (long)param_2 + -0xd) {
      do {
        bVar7 = (byte)*puVar19;
        bVar5 = *(byte *)((long)puVar19 + 1);
        bVar6 = (byte)puVar19[1];
        iVar15 = (int)uVar17;
        iVar11 = (int)puVar19;
        if (((bVar7 == *(byte *)((long)puVar19 - 1)) && (bVar7 == bVar5)) && (bVar7 == bVar6)) {
          puVar25 = puVar19 + 1;
LAB_001008d2:
          puVar21 = (ushort *)((long)puVar19 + 3);
          if (puVar21 < puVar4) {
            do {
              puVar19 = puVar21;
              if ((byte)*puVar25 != bVar6) {
                puVar24 = puVar19 + -1;
                uVar26 = 0;
                uVar16 = 1;
                puVar20 = (ushort *)((long)puVar19 - 1);
                puVar21 = puVar19;
                puVar19 = (ushort *)((long)puVar19 - 3);
                goto LAB_00100974;
              }
              puVar21 = (ushort *)((long)puVar19 + 1);
              puVar25 = (ushort *)((long)puVar25 + 1);
            } while (puVar4 != puVar21);
            puVar24 = (ushort *)((long)puVar19 - 1);
            uVar26 = 0;
            uVar16 = 1;
            puVar20 = puVar19;
            puVar19 = puVar19 + -1;
LAB_00100974:
            sVar28 = (short)uVar16;
            if (iVar15 != 0) goto LAB_0010097c;
            pbVar13 = pbVar13 + -1;
LAB_00100987:
            uVar16 = (int)puVar19 - iVar11;
            if (uVar26 < 0x1fff) {
              cVar18 = (char)(uVar26 >> 8);
              goto LAB_001009a6;
            }
            if (uVar16 < 7) {
              pbVar13[1] = 0xff;
              pbVar14 = pbVar13 + 4;
              *(ushort *)(pbVar13 + 2) = sVar28 * 0x100 | (ushort)(sVar28 + 0xe000U) >> 8;
              *pbVar13 = (char)uVar16 * ' ' + 0x1f;
            }
            else {
              *pbVar13 = 0xff;
              for (uVar16 = uVar16 - 7; pbVar14 = pbVar13 + 1, 0xfe < uVar16; uVar16 = uVar16 - 0xff
                  ) {
                *pbVar14 = 0xff;
                pbVar13 = pbVar14;
              }
              *pbVar14 = (byte)uVar16;
              pbVar14 = pbVar13 + 5;
              pbVar13[2] = 0xff;
              *(ushort *)(pbVar13 + 3) = sVar28 * 0x100 | (ushort)(sVar28 + 0xe000U) >> 8;
            }
          }
          else {
            puVar24 = (ushort *)((long)puVar19 + 1);
            puVar20 = puVar19 + 1;
            if (iVar15 != 0) {
              sVar28 = 1;
              uVar26 = 0;
LAB_0010097c:
              pbVar13[~uVar17] = (char)uVar17 - 1;
              goto LAB_00100987;
            }
            pbVar13 = pbVar13 + -1;
            cVar18 = '\0';
            uVar16 = 0;
            uVar26 = 0;
LAB_001009a6:
            if (uVar16 < 7) {
              pbVar13[1] = (byte)uVar26;
              *pbVar13 = (char)(uVar16 << 5) + cVar18;
              pbVar14 = pbVar13 + 2;
            }
            else {
              *pbVar13 = cVar18 - 0x20;
              for (uVar16 = uVar16 - 7; pbVar14 = pbVar13 + 1, 0xfe < uVar16; uVar16 = uVar16 - 0xff
                  ) {
                *pbVar14 = 0xff;
                pbVar13 = pbVar14;
              }
              *pbVar14 = (byte)uVar16;
              pbVar14 = pbVar13 + 3;
              pbVar13[2] = (byte)uVar26;
            }
          }
          bVar7 = *(byte *)((long)puVar21 - 1);
          uVar9 = puVar21[-1];
          *(ushort **)
           (puVar23 +
           (ulong)((ushort)(*(ushort *)((long)puVar21 - 3) ^ uVar9 ^
                           *(ushort *)((long)puVar21 - 3) >> 3) & 0x1fff) * 8 + -0x1018) = puVar19;
          uVar8 = *puVar21;
          *pbVar14 = 0x1f;
          *(ushort **)
           (puVar23 +
           (ulong)((ushort)(CONCAT11((byte)uVar8,bVar7) ^ uVar9 ^ uVar9 >> 3) & 0x1fff) * 8 +
           -0x1018) = puVar24;
          pbVar14 = pbVar14 + 1;
          uVar17 = 0;
        }
        else {
          uVar27 = (ulong)((*puVar19 ^ *(ushort *)((long)puVar19 + 1)) & 0x1fff ^
                          (uint)(*puVar19 >> 3));
          pbVar14 = *(byte **)(puVar23 + uVar27 * 8 + -0x1018);
          *(ushort **)(puVar23 + uVar27 * 8 + -0x1018) = puVar19;
          uVar16 = iVar11 - (int)pbVar14;
          uVar26 = uVar16 - 1;
          if (((uVar26 < 0x11ffc) && (bVar7 == *pbVar14)) &&
             ((pbVar14[1] == bVar5 && (pbVar14[2] == bVar6)))) {
            if (uVar16 < 0x1fff) {
              puVar25 = (ushort *)(pbVar14 + 3);
              puVar22 = (ushort *)((long)puVar19 + 3);
              if (uVar26 == 0) goto LAB_001008d2;
            }
            else {
              if ((*(byte *)((long)puVar19 + 3) != pbVar14[3]) || ((byte)puVar19[2] != pbVar14[4]))
              goto LAB_00100830;
              puVar25 = (ushort *)(pbVar14 + 5);
              puVar22 = (ushort *)((long)puVar19 + 5);
            }
            puVar24 = (ushort *)((long)puVar22 + 1);
            if ((byte)*puVar25 == (byte)*puVar22) {
              puVar1 = puVar22 + 1;
              if (*(byte *)((long)puVar25 + 1) == *(byte *)((long)puVar22 + 1)) {
                puVar2 = (ushort *)((long)puVar22 + 3);
                puVar20 = puVar1;
                puVar21 = puVar2;
                puVar19 = puVar22;
                if ((byte)puVar25[1] == (byte)puVar22[1]) {
                  *(ushort **)(puVar23 + -0x1030) = puVar22 + 2;
                  if (*(byte *)((long)puVar25 + 3) == *(byte *)((long)puVar22 + 3)) {
                    *(byte **)(puVar23 + -0x1028) = (byte *)((long)puVar22 + 5);
                    if ((byte)puVar25[2] == (byte)puVar22[2]) {
                      puVar24 = puVar22 + 3;
                      if (*(byte *)((long)puVar25 + 5) == *(byte *)((long)puVar22 + 5)) {
                        *(byte **)(puVar23 + -0x1020) = (byte *)((long)puVar22 + 7);
                        if ((byte)puVar25[3] == (byte)puVar22[3]) {
                          if (*(byte *)((long)puVar25 + 7) == *(byte *)((long)puVar22 + 7)) {
                            puVar24 = puVar22 + 4;
                            puVar19 = puVar25 + 4;
                            do {
                              puVar22 = puVar24;
                              if (puVar4 <= puVar22) {
                                puVar24 = puVar22 + -1;
                                puVar20 = (ushort *)((long)puVar22 - 1);
                                puVar21 = puVar22;
                                puVar19 = (ushort *)((long)puVar22 - 3);
                                goto LAB_00100974;
                              }
                              puVar24 = (ushort *)((long)puVar22 + 1);
                              uVar9 = *puVar19;
                              puVar19 = (ushort *)((long)puVar19 + 1);
                            } while ((byte)uVar9 == (byte)*puVar22);
                            goto LAB_0010096c;
                          }
                          puVar20 = *(ushort **)(puVar23 + -0x1020);
                          puVar21 = puVar22 + 4;
                          puVar19 = *(ushort **)(puVar23 + -0x1028);
                        }
                        else {
                          puVar20 = puVar24;
                          puVar21 = *(ushort **)(puVar23 + -0x1020);
                          puVar19 = *(ushort **)(puVar23 + -0x1030);
                          puVar24 = *(ushort **)(puVar23 + -0x1028);
                        }
                      }
                      else {
                        puVar20 = *(ushort **)(puVar23 + -0x1028);
                        puVar21 = puVar24;
                        puVar19 = puVar2;
                        puVar24 = *(ushort **)(puVar23 + -0x1030);
                      }
                    }
                    else {
                      puVar20 = *(ushort **)(puVar23 + -0x1030);
                      puVar21 = *(ushort **)(puVar23 + -0x1028);
                      puVar19 = puVar1;
                      puVar24 = puVar2;
                    }
                  }
                  else {
                    puVar20 = puVar2;
                    puVar21 = *(ushort **)(puVar23 + -0x1030);
                    puVar19 = puVar24;
                    puVar24 = puVar1;
                  }
                }
              }
              else {
                puVar20 = puVar24;
                puVar21 = puVar1;
                puVar19 = (ushort *)((long)puVar22 - 1);
                puVar24 = puVar22;
              }
            }
            else {
LAB_0010096c:
              puVar20 = puVar22;
              puVar21 = puVar24;
              puVar19 = puVar22 + -1;
              puVar24 = (ushort *)((long)puVar22 - 1);
            }
            goto LAB_00100974;
          }
LAB_00100830:
          uVar17 = (ulong)(iVar15 + 1U);
          *pbVar13 = bVar7;
          puVar20 = (ushort *)((long)puVar19 + 1);
          pbVar14 = pbVar13 + 1;
          if (iVar15 + 1U == 0x20) {
            pbVar13[1] = 0x1f;
            uVar17 = 0;
            pbVar14 = pbVar13 + 2;
          }
        }
        pbVar13 = pbVar14;
        puVar19 = puVar20;
      } while (puVar20 < param_1 + (long)param_2 + -0xd);
      while (pbVar13 = pbVar14, puVar19 = puVar20, puVar20 <= puVar3) {
LAB_00100857:
        while( true ) {
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar16;
          puVar20 = (ushort *)((long)puVar19 + 1);
          *pbVar13 = (byte)*puVar19;
          if (uVar16 == 0x20) break;
          pbVar13 = pbVar13 + 1;
          puVar19 = puVar20;
          if (puVar3 < puVar20) goto LAB_00100876;
        }
        pbVar13[1] = 0x1f;
        uVar17 = 0;
        pbVar14 = pbVar13 + 2;
      }
LAB_00100876:
      if ((int)uVar17 == 0) {
        iVar11 = ((int)pbVar13 + -1) - (int)param_3;
      }
      else {
        iVar11 = (int)pbVar13 - (int)param_3;
        pbVar13[~uVar17] = (char)uVar17 - 1;
      }
    }
    else {
      if (puVar19 <= puVar3) goto LAB_00100857;
      iVar11 = 3;
      *param_3 = 1;
    }
    *param_3 = *param_3 | 0x20;
  }
  if (*(long *)(puVar23 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar23 + -0x1040) = 0x100bee;
  __stack_chk_fail();
}



int fastlz2_decompress(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  
  pbVar6 = param_1 + 1;
  pbVar1 = param_1 + param_2;
  uVar7 = *param_1 & 0x1f;
  pbVar9 = param_3;
  if (uVar7 < 0x20) goto LAB_00100d83;
  do {
    iVar3 = (uVar7 >> 5) - 1;
    if (uVar7 >> 5 == 7) {
      do {
        if (pbVar1 + -2 < pbVar6) {
          return 0;
        }
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        iVar3 = iVar3 + (uint)bVar2;
      } while (bVar2 == 0xff);
    }
    pbVar11 = pbVar6 + 1;
    pbVar8 = pbVar9 + (~(ulong)((uVar7 & 0x1f) << 8) - (ulong)*pbVar6);
    if ((*pbVar6 == 0xff) && ((uVar7 & 0x1f) == 0x1f)) {
      if (pbVar1 + -2 <= pbVar11) {
        return 0;
      }
      pbVar11 = pbVar6 + 3;
      pbVar8 = pbVar9 + (-0x2000 -
                        (ulong)(ushort)(*(ushort *)(pbVar6 + 1) << 8 | *(ushort *)(pbVar6 + 1) >> 8)
                        );
    }
    if ((pbVar8 < param_3) || (param_3 + param_4 < pbVar9 + (iVar3 + 3U))) {
      return 0;
    }
    fastlz_memmove(pbVar9,pbVar8,iVar3 + 3U);
    pbVar8 = pbVar9 + (iVar3 + 3U);
    while( true ) {
      pbVar9 = pbVar8;
      if (pbVar1 <= pbVar11) {
        return (int)pbVar9 - (int)param_3;
      }
      uVar7 = (uint)*pbVar11;
      pbVar6 = pbVar11 + 1;
      if (0x1f < uVar7) break;
LAB_00100d83:
      uVar7 = uVar7 + 1;
      pbVar8 = pbVar9 + uVar7;
      if (param_3 + param_4 < pbVar8) {
        return 0;
      }
      pbVar11 = pbVar6 + uVar7;
      if (pbVar1 < pbVar11) {
        return 0;
      }
      if (uVar7 < 8) {
        if ((uVar7 & 4) == 0) {
          if ((uVar7 != 0) && (*pbVar9 = *pbVar6, (uVar7 & 2) != 0)) {
            *(undefined2 *)(pbVar8 + -2) = *(undefined2 *)(pbVar11 + -2);
          }
        }
        else {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
          *(undefined4 *)(pbVar8 + -4) = *(undefined4 *)(pbVar11 + -4);
        }
      }
      else {
        *(undefined8 *)pbVar9 = *(undefined8 *)pbVar6;
        lVar10 = (long)pbVar9 - ((ulong)(pbVar9 + 8) & 0xfffffffffffffff8);
        uVar7 = uVar7 + (int)lVar10 & 0xfffffff8;
        *(undefined8 *)(pbVar8 + -8) = *(undefined8 *)(pbVar11 + -8);
        if (7 < uVar7) {
          uVar5 = 0;
          do {
            uVar4 = (int)uVar5 + 8;
            *(undefined8 *)(((ulong)(pbVar9 + 8) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)(pbVar6 + (uVar5 - lVar10));
            uVar5 = (ulong)uVar4;
          } while (uVar4 < uVar7);
        }
      }
    }
  } while( true );
}



void fastlz_compress(undefined8 param_1,int param_2)

{
  if (0xffff < param_2) {
    fastlz2_compress();
    return;
  }
  fastlz1_compress();
  return;
}



undefined8 fastlz_decompress(byte *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 >> 5 == 0) {
    uVar1 = fastlz1_decompress();
    return uVar1;
  }
  if (*param_1 >> 5 != 1) {
    return 0;
  }
  uVar1 = fastlz2_decompress();
  return uVar1;
}



undefined8
fastlz_compress_level(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 1) {
    uVar1 = fastlz1_compress(param_2,param_3,param_4);
    return uVar1;
  }
  if (param_1 != 2) {
    return 0;
  }
  uVar1 = fastlz2_compress(param_2,param_3,param_4);
  return uVar1;
}



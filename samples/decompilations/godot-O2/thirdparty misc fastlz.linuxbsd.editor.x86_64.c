
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
  ushort uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 *puVar10;
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
  
  puVar8 = &stack0xffffffffffffffd0;
  do {
    puVar18 = puVar8;
    *(undefined8 *)(puVar18 + -0x1000) = *(undefined8 *)(puVar18 + -0x1000);
    puVar8 = puVar18 + -0x1000;
  } while (puVar18 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar18 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar5 = (ushort *)(param_1 + (long)param_2 + -2);
  if (param_2 < 4) {
    iVar9 = 0;
    if (param_2 != 0) {
      *param_3 = (char)param_2 + -1;
      pcVar12 = (char *)0x0;
      if (param_1 <= (char *)((long)puVar5 + 1U)) {
        do {
          param_3[(long)(pcVar12 + 1)] = param_1[(long)pcVar12];
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 != (char *)((long)puVar5 + (2 - (long)param_1)));
      }
      iVar9 = param_2 + 1;
    }
  }
  else {
    puVar10 = (undefined8 *)(puVar18 + -0x1018);
    do {
      *puVar10 = param_1;
      puVar10[1] = param_1;
      puVar11 = puVar10 + 4;
      puVar10[2] = param_1;
      puVar10[3] = param_1;
      puVar10 = puVar11;
    } while (puVar11 != (undefined8 *)(puVar18 + 0xefe8));
    *param_3 = '\x1f';
    puVar17 = (ushort *)(param_1 + 2);
    puVar1 = (ushort *)((long)puVar5 + 1);
    uVar20 = 2;
    param_3[1] = *param_1;
    pcVar12 = param_3 + 3;
    param_3[2] = param_1[1];
    pcVar13 = pcVar12;
    puVar16 = puVar17;
    if (puVar17 < param_1 + (long)param_2 + -0xd) {
      do {
        uVar6 = *puVar16;
        cVar19 = *(char *)((long)puVar16 + 1);
        uVar7 = puVar16[1];
        uVar15 = (ulong)((*puVar16 ^ *(ushort *)((long)puVar16 + 1)) & 0x1fff ^
                        (uint)(*puVar16 >> 3));
        pcVar12 = *(char **)(puVar18 + uVar15 * 8 + -0x1018);
        *(ushort **)(puVar18 + uVar15 * 8 + -0x1018) = puVar16;
        iVar9 = (int)puVar16;
        uVar14 = (iVar9 - (int)pcVar12) - 1;
        if ((((uVar14 < 0x1fff) && ((char)uVar6 == *pcVar12)) && (cVar19 == pcVar12[1])) &&
           ((char)uVar7 == pcVar12[2])) {
          puVar23 = (ushort *)((long)puVar16 + 3);
          if (uVar14 == 0) {
            pcVar12 = pcVar12 + 3;
            puVar22 = puVar23;
            if (puVar23 < puVar5) {
              do {
                if ((char)uVar7 != *pcVar12) {
                  puVar16 = (ushort *)((long)puVar22 - 3);
                  puVar21 = puVar22 + -1;
                  uVar24 = (int)puVar16 - iVar9;
                  puVar17 = (ushort *)((long)puVar22 - 1);
                  goto LAB_0010026b;
                }
                puVar23 = (ushort *)((long)puVar22 + 1);
                pcVar12 = pcVar12 + 1;
                puVar17 = puVar22;
                puVar22 = puVar23;
              } while (puVar5 != puVar23);
LAB_001003ee:
              puVar16 = puVar17 + -1;
              puVar21 = (ushort *)((long)puVar17 - 1);
              uVar24 = (int)puVar16 - iVar9;
              puVar22 = puVar23;
            }
            else {
              puVar21 = (ushort *)((long)puVar16 + 1);
              uVar24 = 0;
              puVar17 = puVar16 + 1;
            }
          }
          else {
            puVar2 = puVar16 + 2;
            if (pcVar12[3] == *(char *)((long)puVar16 + 3)) {
              puVar3 = (ushort *)((long)puVar16 + 5);
              if (pcVar12[4] == (char)puVar16[2]) {
                puVar4 = puVar16 + 3;
                if (pcVar12[5] == *(char *)((long)puVar16 + 5)) {
                  puVar23 = (ushort *)((long)puVar16 + 7);
                  if (pcVar12[6] == (char)puVar16[3]) {
                    puVar2 = puVar16 + 4;
                    if (pcVar12[7] == *(char *)((long)puVar16 + 7)) {
                      puVar22 = (ushort *)((long)puVar16 + 9);
                      if (pcVar12[8] == (char)puVar16[4]) {
                        if (pcVar12[9] == *(char *)((long)puVar16 + 9)) {
                          if (pcVar12[10] == (char)puVar16[5]) {
                            pcVar12 = pcVar12 + 0xb;
                            puVar23 = (ushort *)((long)puVar16 + 0xbU);
                            do {
                              puVar22 = puVar23;
                              if (puVar5 <= puVar22) {
                                puVar16 = (ushort *)((long)puVar22 - 3);
                                puVar21 = puVar22 + -1;
                                uVar24 = (int)puVar16 - iVar9;
                                puVar17 = (ushort *)((long)puVar22 - 1);
                                goto LAB_0010026b;
                              }
                              puVar23 = (ushort *)((long)puVar22 + 1);
                              cVar19 = *pcVar12;
                              pcVar12 = pcVar12 + 1;
                              puVar17 = puVar22;
                            } while (cVar19 == (char)*puVar22);
                            goto LAB_001003ee;
                          }
                          uVar24 = 8;
                          puVar17 = puVar16 + 5;
                          puVar21 = puVar22;
                          puVar22 = (ushort *)((long)puVar16 + 0xbU);
                          puVar16 = puVar2;
                        }
                        else {
                          uVar24 = 7;
                          puVar17 = puVar22;
                          puVar21 = puVar2;
                          puVar22 = puVar16 + 5;
                          puVar16 = puVar23;
                        }
                      }
                      else {
                        uVar24 = 6;
                        puVar17 = puVar2;
                        puVar21 = puVar23;
                        puVar16 = puVar4;
                      }
                    }
                    else {
                      uVar24 = 5;
                      puVar17 = puVar23;
                      puVar21 = puVar4;
                      puVar22 = puVar2;
                      puVar16 = puVar3;
                    }
                  }
                  else {
                    uVar24 = 4;
                    puVar17 = puVar4;
                    puVar21 = puVar3;
                    puVar22 = puVar23;
                    puVar16 = puVar2;
                  }
                }
                else {
                  uVar24 = 3;
                  puVar17 = puVar3;
                  puVar21 = puVar2;
                  puVar22 = puVar4;
                  puVar16 = puVar23;
                }
              }
              else {
                uVar24 = 2;
                puVar17 = puVar2;
                puVar21 = puVar23;
                puVar22 = puVar3;
                puVar16 = puVar16 + 1;
              }
            }
            else {
              uVar24 = 1;
              puVar17 = puVar23;
              puVar21 = puVar16 + 1;
              puVar22 = puVar2;
              puVar16 = (ushort *)((long)puVar16 + 1);
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
          uVar6 = puVar22[-1];
          *(ushort **)
           (puVar18 +
           (ulong)((ushort)(*(ushort *)((long)puVar22 - 3) ^ uVar6 ^
                           *(ushort *)((long)puVar22 - 3) >> 3) & 0x1fff) * 8 + -0x1018) = puVar16;
          uVar7 = *puVar22;
          *pcVar12 = '\x1f';
          *(ushort **)
           (puVar18 +
           (ulong)((ushort)(CONCAT11((char)uVar7,cVar19) ^ uVar6 ^ uVar6 >> 3) & 0x1fff) * 8 +
           -0x1018) = puVar21;
          pcVar12 = pcVar12 + 1;
          uVar20 = 0;
        }
        else {
          uVar14 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar14;
          *pcVar13 = (char)uVar6;
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
        if (param_1 + (long)param_2 + -0xd <= puVar17) goto LAB_001001bb;
      } while( true );
    }
    if (puVar1 < puVar17) {
      iVar9 = 3;
      cVar19 = '\x01';
    }
    else {
      do {
        while( true ) {
          uVar6 = *puVar17;
          uVar14 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar14;
          puVar17 = (ushort *)((long)puVar17 + 1);
          *pcVar12 = (char)uVar6;
          if (uVar14 == 0x20) break;
          pcVar12 = pcVar12 + 1;
          if (puVar1 < puVar17) goto LAB_001001da;
        }
        pcVar12[1] = '\x1f';
        uVar20 = 0;
        pcVar12 = pcVar12 + 2;
LAB_001001bb:
      } while (puVar17 <= puVar1);
LAB_001001da:
      iVar9 = (int)param_3;
      if ((int)uVar20 == 0) {
        iVar9 = ((int)pcVar12 + -1) - iVar9;
        goto LAB_001001e5;
      }
      cVar19 = (char)uVar20 + -1;
      param_3 = pcVar12 + ~uVar20;
      iVar9 = (int)pcVar12 - iVar9;
    }
    *param_3 = cVar19;
  }
LAB_001001e5:
  if (*(long *)(puVar18 + 0xeff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar18 + -0x1020) = &UNK_00100492;
    __stack_chk_fail();
  }
  return iVar9;
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
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  char cVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  undefined1 *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  uint uVar27;
  ulong uVar28;
  short sVar29;
  long in_FS_OFFSET;
  undefined1 auStack_10030 [65536];
  
  puVar10 = &stack0xffffffffffffffd0;
  do {
    puVar24 = puVar10;
    *(undefined8 *)(puVar24 + -0x1000) = *(undefined8 *)(puVar24 + -0x1000);
    puVar10 = puVar24 + -0x1000;
  } while (puVar24 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar24 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar4 = (ushort *)(param_1 + (long)param_2 + -2);
  if (param_2 < 4) {
    iVar11 = 0;
    if (param_2 != 0) {
      *param_3 = (char)param_2 - 1;
      pbVar14 = (byte *)0x0;
      if (param_1 <= (byte *)((long)puVar4 + 1U)) {
        do {
          param_3[(long)(pbVar14 + 1)] = param_1[(long)pbVar14];
          pbVar14 = pbVar14 + 1;
        } while (pbVar14 != (byte *)((long)puVar4 + (2 - (long)param_1)));
      }
      iVar11 = param_2 + 1;
    }
  }
  else {
    puVar12 = (undefined8 *)(puVar24 + -0x1018);
    do {
      *puVar12 = param_1;
      puVar12[1] = param_1;
      puVar13 = puVar12 + 4;
      puVar12[2] = param_1;
      puVar12[3] = param_1;
      puVar12 = puVar13;
    } while (puVar13 != (undefined8 *)(puVar24 + 0xefe8));
    *param_3 = 0x1f;
    puVar21 = (ushort *)(param_1 + 2);
    puVar3 = (ushort *)((long)puVar4 + 1);
    param_3[1] = *param_1;
    pbVar14 = param_3 + 3;
    param_3[2] = param_1[1];
    uVar18 = 2;
    pbVar15 = pbVar14;
    puVar20 = puVar21;
    if (puVar21 < param_1 + (long)param_2 + -0xd) {
      do {
        bVar7 = (byte)*puVar20;
        bVar5 = *(byte *)((long)puVar20 + 1);
        bVar6 = (byte)puVar20[1];
        iVar16 = (int)uVar18;
        iVar11 = (int)puVar20;
        if (((bVar7 == *(byte *)((long)puVar20 - 1)) && (bVar7 == bVar5)) && (bVar7 == bVar6)) {
          puVar26 = puVar20 + 1;
LAB_001008d2:
          puVar22 = (ushort *)((long)puVar20 + 3);
          if (puVar22 < puVar4) {
            do {
              puVar20 = puVar22;
              if ((byte)*puVar26 != bVar6) {
                puVar25 = puVar20 + -1;
                uVar27 = 0;
                uVar17 = 1;
                puVar21 = (ushort *)((long)puVar20 - 1);
                puVar22 = puVar20;
                puVar20 = (ushort *)((long)puVar20 - 3);
                goto LAB_00100974;
              }
              puVar22 = (ushort *)((long)puVar20 + 1);
              puVar26 = (ushort *)((long)puVar26 + 1);
            } while (puVar4 != puVar22);
            puVar25 = (ushort *)((long)puVar20 - 1);
            uVar27 = 0;
            uVar17 = 1;
            puVar21 = puVar20;
            puVar20 = puVar20 + -1;
LAB_00100974:
            sVar29 = (short)uVar17;
            if (iVar16 != 0) goto LAB_0010097c;
            pbVar15 = pbVar15 + -1;
LAB_00100987:
            uVar17 = (int)puVar20 - iVar11;
            if (uVar27 < 0x1fff) {
              cVar19 = (char)(uVar27 >> 8);
              goto LAB_001009a6;
            }
            if (uVar17 < 7) {
              pbVar15[1] = 0xff;
              pbVar14 = pbVar15 + 4;
              *(ushort *)(pbVar15 + 2) = sVar29 * 0x100 | (ushort)(sVar29 + 0xe000U) >> 8;
              *pbVar15 = (char)uVar17 * ' ' + 0x1f;
            }
            else {
              *pbVar15 = 0xff;
              for (uVar17 = uVar17 - 7; pbVar14 = pbVar15 + 1, 0xfe < uVar17; uVar17 = uVar17 - 0xff
                  ) {
                *pbVar14 = 0xff;
                pbVar15 = pbVar14;
              }
              *pbVar14 = (byte)uVar17;
              pbVar14 = pbVar15 + 5;
              pbVar15[2] = 0xff;
              *(ushort *)(pbVar15 + 3) = sVar29 * 0x100 | (ushort)(sVar29 + 0xe000U) >> 8;
            }
          }
          else {
            puVar25 = (ushort *)((long)puVar20 + 1);
            puVar21 = puVar20 + 1;
            if (iVar16 != 0) {
              sVar29 = 1;
              uVar27 = 0;
LAB_0010097c:
              pbVar15[~uVar18] = (char)uVar18 - 1;
              goto LAB_00100987;
            }
            pbVar15 = pbVar15 + -1;
            cVar19 = '\0';
            uVar17 = 0;
            uVar27 = 0;
LAB_001009a6:
            if (uVar17 < 7) {
              pbVar15[1] = (byte)uVar27;
              *pbVar15 = (char)(uVar17 << 5) + cVar19;
              pbVar14 = pbVar15 + 2;
            }
            else {
              *pbVar15 = cVar19 - 0x20;
              for (uVar17 = uVar17 - 7; pbVar14 = pbVar15 + 1, 0xfe < uVar17; uVar17 = uVar17 - 0xff
                  ) {
                *pbVar14 = 0xff;
                pbVar15 = pbVar14;
              }
              *pbVar14 = (byte)uVar17;
              pbVar14 = pbVar15 + 3;
              pbVar15[2] = (byte)uVar27;
            }
          }
          bVar7 = *(byte *)((long)puVar22 - 1);
          uVar8 = puVar22[-1];
          *(ushort **)
           (puVar24 +
           (ulong)((ushort)(*(ushort *)((long)puVar22 - 3) ^ uVar8 ^
                           *(ushort *)((long)puVar22 - 3) >> 3) & 0x1fff) * 8 + -0x1018) = puVar20;
          uVar9 = *puVar22;
          *pbVar14 = 0x1f;
          *(ushort **)
           (puVar24 +
           (ulong)((ushort)(CONCAT11((byte)uVar9,bVar7) ^ uVar8 ^ uVar8 >> 3) & 0x1fff) * 8 +
           -0x1018) = puVar25;
          pbVar14 = pbVar14 + 1;
          uVar18 = 0;
        }
        else {
          uVar28 = (ulong)((*puVar20 ^ *(ushort *)((long)puVar20 + 1)) & 0x1fff ^
                          (uint)(*puVar20 >> 3));
          pbVar14 = *(byte **)(puVar24 + uVar28 * 8 + -0x1018);
          *(ushort **)(puVar24 + uVar28 * 8 + -0x1018) = puVar20;
          uVar17 = iVar11 - (int)pbVar14;
          uVar27 = uVar17 - 1;
          if (((uVar27 < 0x11ffc) && (bVar7 == *pbVar14)) &&
             ((pbVar14[1] == bVar5 && (pbVar14[2] == bVar6)))) {
            if (uVar17 < 0x1fff) {
              puVar26 = (ushort *)(pbVar14 + 3);
              puVar23 = (ushort *)((long)puVar20 + 3);
              if (uVar27 == 0) goto LAB_001008d2;
            }
            else {
              if ((*(byte *)((long)puVar20 + 3) != pbVar14[3]) || ((byte)puVar20[2] != pbVar14[4]))
              goto LAB_00100830;
              puVar26 = (ushort *)(pbVar14 + 5);
              puVar23 = (ushort *)((long)puVar20 + 5);
            }
            puVar25 = (ushort *)((long)puVar23 + 1);
            if ((byte)*puVar26 == (byte)*puVar23) {
              puVar1 = puVar23 + 1;
              if (*(byte *)((long)puVar26 + 1) == *(byte *)((long)puVar23 + 1)) {
                puVar2 = (ushort *)((long)puVar23 + 3);
                puVar21 = puVar1;
                puVar22 = puVar2;
                puVar20 = puVar23;
                if ((byte)puVar26[1] == (byte)puVar23[1]) {
                  *(ushort **)(puVar24 + -0x1030) = puVar23 + 2;
                  if (*(byte *)((long)puVar26 + 3) == *(byte *)((long)puVar23 + 3)) {
                    *(byte **)(puVar24 + -0x1028) = (byte *)((long)puVar23 + 5);
                    if ((byte)puVar26[2] == (byte)puVar23[2]) {
                      puVar25 = puVar23 + 3;
                      if (*(byte *)((long)puVar26 + 5) == *(byte *)((long)puVar23 + 5)) {
                        *(byte **)(puVar24 + -0x1020) = (byte *)((long)puVar23 + 7);
                        if ((byte)puVar26[3] == (byte)puVar23[3]) {
                          if (*(byte *)((long)puVar26 + 7) == *(byte *)((long)puVar23 + 7)) {
                            puVar25 = puVar23 + 4;
                            puVar21 = puVar26 + 4;
                            do {
                              puVar23 = puVar25;
                              if (puVar4 <= puVar23) {
                                puVar25 = puVar23 + -1;
                                puVar21 = (ushort *)((long)puVar23 - 1);
                                puVar22 = puVar23;
                                puVar20 = (ushort *)((long)puVar23 - 3);
                                goto LAB_00100974;
                              }
                              puVar25 = (ushort *)((long)puVar23 + 1);
                              uVar8 = *puVar21;
                              puVar21 = (ushort *)((long)puVar21 + 1);
                            } while ((byte)uVar8 == (byte)*puVar23);
                            goto LAB_0010096c;
                          }
                          puVar21 = *(ushort **)(puVar24 + -0x1020);
                          puVar22 = puVar23 + 4;
                          puVar20 = *(ushort **)(puVar24 + -0x1028);
                        }
                        else {
                          puVar21 = puVar25;
                          puVar22 = *(ushort **)(puVar24 + -0x1020);
                          puVar20 = *(ushort **)(puVar24 + -0x1030);
                          puVar25 = *(ushort **)(puVar24 + -0x1028);
                        }
                      }
                      else {
                        puVar21 = *(ushort **)(puVar24 + -0x1028);
                        puVar22 = puVar25;
                        puVar20 = puVar2;
                        puVar25 = *(ushort **)(puVar24 + -0x1030);
                      }
                    }
                    else {
                      puVar21 = *(ushort **)(puVar24 + -0x1030);
                      puVar22 = *(ushort **)(puVar24 + -0x1028);
                      puVar20 = puVar1;
                      puVar25 = puVar2;
                    }
                  }
                  else {
                    puVar21 = puVar2;
                    puVar22 = *(ushort **)(puVar24 + -0x1030);
                    puVar20 = puVar25;
                    puVar25 = puVar1;
                  }
                }
              }
              else {
                puVar21 = puVar25;
                puVar22 = puVar1;
                puVar20 = (ushort *)((long)puVar23 - 1);
                puVar25 = puVar23;
              }
            }
            else {
LAB_0010096c:
              puVar21 = puVar23;
              puVar22 = puVar25;
              puVar20 = puVar23 + -1;
              puVar25 = (ushort *)((long)puVar23 - 1);
            }
            goto LAB_00100974;
          }
LAB_00100830:
          uVar18 = (ulong)(iVar16 + 1U);
          *pbVar15 = bVar7;
          puVar21 = (ushort *)((long)puVar20 + 1);
          pbVar14 = pbVar15 + 1;
          if (iVar16 + 1U == 0x20) {
            pbVar15[1] = 0x1f;
            uVar18 = 0;
            pbVar14 = pbVar15 + 2;
          }
        }
        pbVar15 = pbVar14;
        puVar20 = puVar21;
      } while (puVar21 < param_1 + (long)param_2 + -0xd);
      while (puVar21 <= puVar3) {
LAB_00100857:
        while( true ) {
          uVar8 = *puVar21;
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulong)uVar17;
          puVar21 = (ushort *)((long)puVar21 + 1);
          *pbVar14 = (byte)uVar8;
          if (uVar17 == 0x20) break;
          pbVar14 = pbVar14 + 1;
          if (puVar3 < puVar21) goto LAB_00100876;
        }
        pbVar14[1] = 0x1f;
        uVar18 = 0;
        pbVar14 = pbVar14 + 2;
      }
LAB_00100876:
      if ((int)uVar18 == 0) {
        iVar11 = ((int)pbVar14 + -1) - (int)param_3;
      }
      else {
        iVar11 = (int)pbVar14 - (int)param_3;
        pbVar14[~uVar18] = (char)uVar18 - 1;
      }
    }
    else {
      if (puVar21 <= puVar3) goto LAB_00100857;
      iVar11 = 3;
      *param_3 = 1;
    }
    *param_3 = *param_3 | 0x20;
  }
  if (*(long *)(puVar24 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar24 + -0x1040) = 0x100bee;
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



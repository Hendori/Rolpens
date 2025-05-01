
void ZSTD_safecopyLiterals
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = param_2;
  puVar7 = param_1;
  if (param_2 <= param_4) {
    uVar1 = param_2[1];
    puVar7 = (undefined8 *)((long)param_1 + ((long)param_4 - (long)param_2));
    *param_1 = *param_2;
    param_1[1] = uVar1;
    puVar6 = param_4;
    if (0x10 < (long)param_4 - (long)param_2) {
      puVar2 = param_1 + 2;
      puVar5 = param_2 + 2;
      do {
        uVar1 = puVar5[1];
        puVar3 = puVar2 + 4;
        *puVar2 = *puVar5;
        puVar2[1] = uVar1;
        uVar1 = puVar5[3];
        puVar2[2] = puVar5[2];
        puVar2[3] = uVar1;
        puVar2 = puVar3;
        puVar5 = puVar5 + 4;
      } while (puVar3 < puVar7);
    }
  }
  if (puVar6 < param_3) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puVar7 + lVar4) = *(undefined1 *)((long)puVar6 + lVar4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != (long)param_3 - (long)puVar6);
  }
  return;
}



char * ZSTD_count_2segments
                 (ulong *param_1,ulong *param_2,ulong *param_3,char *param_4,ulong *param_5)

{
  ulong *puVar1;
  uint uVar2;
  char *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  char *pcVar7;
  ulong *puVar8;
  
  puVar6 = (ulong *)(((long)param_4 - (long)param_2) + (long)param_1);
  if (param_3 <= puVar6) {
    puVar6 = param_3;
  }
  puVar1 = (ulong *)((long)puVar6 - 7);
  puVar4 = param_2;
  puVar8 = param_1;
  if (param_1 < puVar1) {
    if (*param_2 == *param_1) {
      puVar8 = param_1 + 1;
      puVar4 = param_2 + 1;
      if (puVar8 < puVar1) {
LAB_001000bd:
        if (*puVar4 == *puVar8) goto LAB_00100200;
        uVar2 = 0;
        for (uVar5 = *puVar4 ^ *puVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
          uVar2 = uVar2 + 1;
        }
        pcVar3 = (char *)((long)puVar8 + ((ulong)(uVar2 >> 3) - (long)param_1));
        goto joined_r0x00100162;
      }
      goto LAB_00100126;
    }
    uVar2 = 0;
    for (uVar5 = *param_2 ^ *param_1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
      uVar2 = uVar2 + 1;
    }
    pcVar3 = (char *)(ulong)(uVar2 >> 3);
  }
  else {
LAB_00100126:
    if ((puVar8 < (ulong *)((long)puVar6 - 3U)) && ((int)*puVar4 == (int)*puVar8)) {
      puVar8 = (ulong *)((long)puVar8 + 4);
      puVar4 = (ulong *)((long)puVar4 + 4);
    }
    if ((puVar8 < (ulong *)((long)puVar6 - 1U)) && ((short)*puVar4 == (short)*puVar8)) {
      puVar8 = (ulong *)((long)puVar8 + 2);
      puVar4 = (ulong *)((long)puVar4 + 2);
    }
    if (puVar8 < puVar6) {
      puVar8 = (ulong *)((long)puVar8 + (ulong)((char)*puVar4 == (char)*puVar8));
    }
    pcVar3 = (char *)((long)puVar8 - (long)param_1);
  }
joined_r0x00100162:
  if (param_4 != (char *)((long)param_2 + (long)pcVar3)) {
    return pcVar3;
  }
  param_1 = (ulong *)((long)param_1 + (long)pcVar3);
  puVar6 = param_1;
  if (param_1 < (ulong *)((long)param_3 - 7U)) {
    if (*param_5 != *param_1) {
      uVar2 = 0;
      for (uVar5 = *param_5 ^ *param_1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar2 = uVar2 + 1;
      }
      pcVar7 = (char *)(ulong)(uVar2 >> 3);
      goto LAB_00100112;
    }
    param_5 = param_5 + 1;
    while (puVar6 = puVar6 + 1, puVar6 < (ulong *)((long)param_3 - 7U)) {
      if (*param_5 != *puVar6) {
        uVar2 = 0;
        for (uVar5 = *param_5 ^ *puVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000)
        {
          uVar2 = uVar2 + 1;
        }
        pcVar7 = (char *)((long)puVar6 + ((ulong)(uVar2 >> 3) - (long)param_1));
        goto LAB_00100112;
      }
      param_5 = param_5 + 1;
    }
  }
  if ((puVar6 < (ulong *)((long)param_3 - 3U)) && ((int)*param_5 == (int)*puVar6)) {
    puVar6 = (ulong *)((long)puVar6 + 4);
    param_5 = (ulong *)((long)param_5 + 4);
  }
  if ((puVar6 < (ulong *)((long)param_3 - 1U)) && ((short)*param_5 == (short)*puVar6)) {
    puVar6 = (ulong *)((long)puVar6 + 2);
    param_5 = (ulong *)((long)param_5 + 2);
  }
  if (puVar6 < param_3) {
    puVar6 = (ulong *)((long)puVar6 + (ulong)((char)*param_5 == (char)*puVar6));
  }
  pcVar7 = (char *)((long)puVar6 - (long)param_1);
LAB_00100112:
  return pcVar3 + (long)pcVar7;
LAB_00100200:
  puVar8 = puVar8 + 1;
  puVar4 = puVar4 + 1;
  if (puVar1 <= puVar8) goto LAB_00100126;
  goto LAB_001000bd;
}



void ZSTD_fillDoubleHashTable(long param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  byte local_38;
  byte local_34;
  
  lVar3 = *(long *)(param_1 + 0x70);
  uVar2 = *(uint *)(param_1 + 0x110);
  lVar7 = (ulong)*(uint *)(param_1 + 0x2c) + *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x80);
  uVar1 = param_2 - 8;
  iVar11 = (int)*(long *)(param_1 + 8);
  cVar5 = (char)*(undefined4 *)(param_1 + 0x108);
  cVar6 = (char)*(undefined4 *)(param_1 + 0x104);
  if (param_4 == 1) {
    if (lVar7 + 2U <= uVar1) {
      local_34 = 0x20 - (cVar6 + '\b');
      bVar8 = 0x40 - (cVar6 + '\b');
      do {
        lVar16 = 0;
        uVar10 = ((int)lVar7 - iVar11) * 0x100;
        uVar15 = uVar10;
        do {
          lVar12 = *(long *)(lVar7 + lVar16);
          if (uVar2 == 7) {
            uVar14 = (ulong)(lVar12 * -0x30e44323405a9d00) >> (bVar8 & 0x3f);
          }
          else if (uVar2 < 8) {
            if (uVar2 == 5) {
              uVar14 = (ulong)(lVar12 * -0x30e4432345000000) >> (bVar8 & 0x3f);
            }
            else {
              if (uVar2 != 6) goto LAB_00100542;
              uVar14 = (ulong)(lVar12 * -0x30e4432340650000) >> (bVar8 & 0x3f);
            }
          }
          else {
            uVar14 = (ulong)(lVar12 * -0x30e44323485a9b9d) >> (bVar8 & 0x3f);
            if (uVar2 != 8) {
LAB_00100542:
              uVar14 = (ulong)((uint)(*(int *)(lVar7 + lVar16) * -0x61c8864f) >> (local_34 & 0x1f));
            }
          }
          uVar13 = (ulong)(lVar12 * -0x30e44323485a9b9d) >> (0x38U - cVar5 & 0x3f);
          if (lVar16 == 0) {
            *(uint *)(lVar4 + (uVar14 >> 8) * 4) = (uint)uVar14 & 0xff | uVar10;
LAB_001004c0:
            *(uint *)(lVar3 + (uVar13 >> 8) * 4) = (uint)uVar13 & 0xff | uVar15;
          }
          else if (*(int *)(lVar3 + (uVar13 >> 8) * 4) == 0) goto LAB_001004c0;
          if (param_3 == 0) break;
          lVar16 = lVar16 + 1;
          uVar15 = uVar15 + 0x100;
        } while (lVar16 != 3);
        uVar14 = lVar7 + 5;
        lVar7 = lVar7 + 3;
      } while (uVar14 <= uVar1);
    }
  }
  else if (lVar7 + 2U <= uVar1) {
    local_38 = 0x20 - cVar6;
    bVar8 = 0x40 - cVar6;
LAB_00100340:
    lVar16 = 0;
    iVar9 = (int)lVar7 - iVar11;
LAB_00100347:
    lVar12 = *(long *)(lVar7 + lVar16);
    uVar14 = lVar12 * -0x30e44323485a9b9d;
    if (uVar2 == 7) goto LAB_001003a9;
LAB_00100357:
    if (uVar2 < 8) {
      if (uVar2 == 5) {
        uVar13 = (ulong)(lVar12 * -0x30e4432345000000) >> (bVar8 & 0x3f);
        goto LAB_0010037b;
      }
      if (uVar2 == 6) {
        uVar13 = (ulong)(lVar12 * -0x30e4432340650000) >> (bVar8 & 0x3f);
        goto LAB_0010037b;
      }
    }
    else {
      uVar13 = uVar14 >> (bVar8 & 0x3f);
      if (uVar2 == 8) goto LAB_0010037b;
    }
    uVar13 = (ulong)((uint)(*(int *)(lVar7 + lVar16) * -0x61c8864f) >> (local_38 & 0x1f));
LAB_0010037b:
    do {
      uVar14 = uVar14 >> (-cVar5 & 0x3fU);
      if (lVar16 != 0) {
        if (*(int *)(lVar3 + uVar14 * 4) == 0) {
          *(int *)(lVar3 + uVar14 * 4) = iVar9 + (int)lVar16;
        }
        if ((param_3 != 0) && (lVar16 != 2)) {
          lVar16 = 2;
          goto LAB_00100347;
        }
LAB_0010032f:
        uVar14 = lVar7 + 5;
        lVar7 = lVar7 + 3;
        if (uVar1 < uVar14) {
          return;
        }
        goto LAB_00100340;
      }
      *(int *)(lVar4 + uVar13 * 4) = iVar9;
      *(int *)(lVar3 + uVar14 * 4) = iVar9;
      if (param_3 == 0) goto LAB_0010032f;
      lVar16 = 1;
      lVar12 = *(long *)(lVar7 + 1);
      uVar14 = lVar12 * -0x30e44323485a9b9d;
      if (uVar2 != 7) goto LAB_00100357;
LAB_001003a9:
      uVar13 = (ulong)(lVar12 * -0x30e44323405a9d00) >> (bVar8 & 0x3f);
    } while( true );
  }
  return;
}



char * ZSTD_compressBlock_doubleFast
                 (long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  int *piVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  char *pcVar17;
  bool bVar18;
  uint uVar19;
  ulong *puVar20;
  ulong *puVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong uVar28;
  uint uVar29;
  ulong *puVar30;
  ulong *puVar31;
  uint uVar32;
  long *plVar33;
  ulong uVar34;
  char *pcVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  bool bVar39;
  ulong *local_b8;
  uint local_a0;
  byte local_9c;
  ulong *local_98;
  byte local_78;
  ulong *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x80);
  uVar38 = *(uint *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x70);
  iVar9 = (int)lVar3;
  iVar22 = ((int)param_4 - iVar9) + (int)param_5;
  uVar29 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
  iVar25 = *(int *)(param_1 + 0x110);
  uVar37 = *param_3;
  uVar19 = iVar22 - uVar29;
  if (iVar22 - uVar38 <= uVar29) {
    uVar19 = uVar38;
  }
  uVar23 = (ulong)uVar19;
  cVar10 = (char)*(undefined4 *)(param_1 + 0x108);
  cVar11 = (char)*(undefined4 *)(param_1 + 0x104);
  local_48 = uVar37;
  local_a0 = uVar37;
  if (iVar25 == 6) {
    uVar36 = param_3[1];
    puVar20 = (ulong *)((long)param_4 + param_5);
    puVar26 = puVar20 + -1;
    if (*(int *)(param_1 + 0x28) == 0) {
      local_58 = (ulong *)(uVar23 + lVar3);
      puVar30 = (ulong *)((long)param_4 + (ulong)(param_4 == local_58));
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
      uVar38 = uVar19;
      if (uVar29 < uVar12) {
        uVar12 = uVar29;
      }
    }
    else {
      local_58 = (ulong *)((ulong)uVar38 + lVar3);
      puVar30 = (ulong *)((long)param_4 + (ulong)(param_4 == local_58));
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
    }
    local_50 = 0;
    local_4c = uVar36;
    if (uVar36 <= uVar12) {
      local_4c = 0;
      local_50 = uVar36;
    }
    if (uVar37 <= uVar12) {
      local_48 = 0;
    }
    else {
      local_a0 = 0;
    }
    bVar18 = uVar37 > uVar12;
    local_9c = 0x40 - cVar10;
    local_b8 = param_4;
LAB_00100c8b:
    puVar14 = puVar30 + 0x20;
    bVar39 = local_a0 != 0;
    if ((ulong *)((long)puVar30 + 1U) <= puVar26) {
      uVar34 = 1;
      uVar15 = *puVar30 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
      uVar28 = (ulong)*(uint *)(lVar5 + uVar15 * 4);
      local_78 = 0x40 - cVar11;
      uVar24 = (ulong)local_a0;
      puVar27 = (ulong *)(uVar28 + lVar3);
      puVar16 = (ulong *)((long)puVar30 + 1U);
      uVar23 = *puVar30;
      while( true ) {
        puVar31 = puVar16;
        iVar25 = (int)puVar30;
        uVar19 = iVar25 - iVar9;
        puVar1 = (uint *)(lVar4 + (uVar23 * -0x30e4432340650000 >> (local_78 & 0x3f)) * 4);
        uVar37 = *puVar1;
        *puVar1 = uVar19;
        *(uint *)(lVar5 + uVar15 * 4) = uVar19;
        if ((*(int *)((long)puVar30 + (1 - uVar24)) == *(int *)((long)puVar30 + 1)) && (bVar39)) {
          puVar16 = (ulong *)((long)puVar30 + 5);
          puVar14 = (ulong *)((long)puVar30 + (5 - uVar24));
          puVar27 = puVar16;
          if ((ulong *)((long)puVar20 + -7) <= puVar16) goto LAB_001014b3;
          if (*puVar14 != *(ulong *)((long)puVar30 + 5)) {
            uVar37 = 0;
            for (uVar23 = *puVar14 ^ *(ulong *)((long)puVar30 + 5); (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            pcVar17 = (char *)(ulong)(uVar37 >> 3);
            goto LAB_00100e17;
          }
          puVar27 = (ulong *)((long)puVar30 + 0xd);
          puVar14 = (ulong *)((long)puVar30 + (0xd - uVar24));
          goto joined_r0x00101aa3;
        }
        uVar6 = *puVar31;
        uVar15 = uVar6 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
        iVar22 = (int)puVar31;
        if ((uVar38 < (uint)uVar28) && (*puVar27 == uVar23)) {
          puVar14 = puVar30 + 1;
          if ((ulong *)((long)puVar20 + -7) <= puVar14) {
            puVar16 = puVar27 + 1;
            puVar31 = puVar14;
            goto LAB_00101f78;
          }
          if (puVar27[1] != puVar30[1]) {
            uVar37 = 0;
            for (uVar23 = puVar27[1] ^ puVar30[1]; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            pcVar35 = (char *)(ulong)(uVar37 >> 3);
            goto LAB_00101fc5;
          }
          puVar31 = puVar30 + 2;
          puVar16 = puVar27 + 2;
          goto joined_r0x001016bf;
        }
        uVar29 = *(uint *)(lVar5 + uVar15 * 4);
        uVar28 = (ulong)uVar29;
        puVar27 = (ulong *)(uVar28 + lVar3);
        if ((uVar38 < uVar37) &&
           (puVar16 = (ulong *)((ulong)uVar37 + lVar3), (int)*puVar16 == (int)*puVar30)) break;
        if (puVar14 <= puVar31) {
          uVar34 = uVar34 + 1;
          puVar14 = puVar14 + 0x20;
        }
        puVar16 = (ulong *)((long)puVar31 + uVar34);
        uVar23 = uVar6;
        puVar30 = puVar31;
        if (puVar26 < (ulong *)((long)puVar31 + uVar34)) goto LAB_00101258;
      }
      puVar14 = (ulong *)((long)puVar20 + -7);
      if ((uVar38 < uVar29) && (*puVar27 == uVar6)) {
        puVar30 = puVar31 + 1;
        if (puVar30 < puVar14) {
          if (puVar27[1] == puVar31[1]) {
            puVar16 = puVar31 + 2;
            puVar21 = puVar27 + 2;
            if (puVar16 < puVar14) {
LAB_0010354f:
              if (*puVar21 == *puVar16) goto LAB_0010394e;
              uVar37 = 0;
              for (uVar23 = *puVar16 ^ *puVar21; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar35 = (char *)((long)puVar16 + ((ulong)(uVar37 >> 3) - (long)puVar30));
              goto LAB_001030fe;
            }
            goto LAB_001034a1;
          }
          uVar37 = 0;
          for (uVar23 = puVar31[1] ^ puVar27[1]; (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
          puVar21 = puVar27 + 1;
          puVar16 = puVar30;
LAB_001034a1:
          if ((puVar16 < (ulong *)((long)puVar20 + -3)) && ((int)*puVar21 == (int)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar16 < (ulong *)((long)puVar20 + -1)) && ((short)*puVar21 == (short)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          if (puVar16 < puVar20) {
            puVar16 = (ulong *)((long)puVar16 + (ulong)((char)*puVar21 == (char)*puVar16));
          }
          pcVar35 = (char *)((long)puVar16 - (long)puVar30);
        }
LAB_001030fe:
        pcVar35 = pcVar35 + 8;
        uVar37 = iVar22 - (int)puVar27;
        if ((local_b8 < puVar31) && (local_58 < puVar27)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar27 = (ulong *)((long)puVar27 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
          }
        }
      }
      else {
        puVar27 = (ulong *)((long)puVar30 + 4);
        if (puVar27 < puVar14) {
          if (*(ulong *)((long)puVar16 + 4) == *(ulong *)((long)puVar30 + 4)) {
            puVar21 = (ulong *)((long)puVar30 + 0xc);
            puVar31 = (ulong *)((long)puVar16 + 0xc);
            if (puVar21 < puVar14) {
LAB_0010182b:
              if (*puVar31 == *puVar21) goto LAB_001030b0;
              uVar37 = 0;
              for (uVar23 = *puVar31 ^ *puVar21; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar35 = (char *)((long)puVar21 + ((ulong)(uVar37 >> 3) - (long)puVar27));
              goto LAB_001021ff;
            }
            goto LAB_001021b4;
          }
          uVar37 = 0;
          for (uVar23 = *(ulong *)((long)puVar16 + 4) ^ *(ulong *)((long)puVar30 + 4);
              (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
          puVar31 = (ulong *)((long)puVar16 + 4);
          puVar21 = puVar27;
LAB_001021b4:
          if ((puVar21 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar31 == (int)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar21 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar31 == (short)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if (puVar21 < puVar20) {
            puVar21 = (ulong *)((long)puVar21 + (ulong)((char)*puVar31 == (char)*puVar21));
          }
          pcVar35 = (char *)((long)puVar21 - (long)puVar27);
        }
LAB_001021ff:
        pcVar35 = pcVar35 + 4;
        uVar37 = iVar25 - (int)puVar16;
        puVar31 = puVar30;
        if ((local_b8 < puVar30) && (local_58 < puVar16)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar16 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar16 = (ulong *)((long)puVar16 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar16 <= local_58)) break;
          }
        }
      }
      goto LAB_00102012;
    }
    goto LAB_00101258;
  }
  if (iVar25 == 7) {
    uVar36 = param_3[1];
    puVar20 = (ulong *)((long)param_4 + param_5);
    puVar26 = puVar20 + -1;
    if (*(int *)(param_1 + 0x28) == 0) {
      local_58 = (ulong *)(uVar23 + lVar3);
      puVar30 = (ulong *)((long)param_4 + (ulong)(param_4 == local_58));
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
      uVar38 = uVar19;
      if (uVar29 < uVar12) {
        uVar12 = uVar29;
      }
    }
    else {
      local_58 = (ulong *)((ulong)uVar38 + lVar3);
      puVar30 = (ulong *)((long)param_4 + (ulong)(param_4 == local_58));
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
    }
    local_50 = 0;
    local_4c = uVar36;
    if (uVar36 <= uVar12) {
      local_4c = 0;
      local_50 = uVar36;
    }
    if (uVar37 <= uVar12) {
      local_48 = 0;
    }
    else {
      local_a0 = 0;
    }
    bVar18 = uVar37 > uVar12;
    local_9c = 0x40 - cVar10;
    local_b8 = param_4;
LAB_001009b1:
    puVar14 = puVar30 + 0x20;
    bVar39 = local_a0 != 0;
    if ((ulong *)((long)puVar30 + 1U) <= puVar26) {
      uVar34 = 1;
      uVar15 = *puVar30 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
      uVar28 = (ulong)*(uint *)(lVar5 + uVar15 * 4);
      local_78 = 0x40 - cVar11;
      uVar24 = (ulong)local_a0;
      puVar27 = (ulong *)(uVar28 + lVar3);
      puVar16 = (ulong *)((long)puVar30 + 1U);
      uVar23 = *puVar30;
      while( true ) {
        puVar31 = puVar16;
        iVar25 = (int)puVar30;
        uVar19 = iVar25 - iVar9;
        puVar1 = (uint *)(lVar4 + (uVar23 * -0x30e44323405a9d00 >> (local_78 & 0x3f)) * 4);
        uVar37 = *puVar1;
        *puVar1 = uVar19;
        *(uint *)(lVar5 + uVar15 * 4) = uVar19;
        if ((*(int *)((long)puVar30 + (1 - uVar24)) == *(int *)((long)puVar30 + 1)) && (bVar39)) {
          puVar16 = (ulong *)((long)puVar30 + 5);
          puVar14 = (ulong *)((long)puVar30 + (5 - uVar24));
          puVar27 = puVar16;
          if ((ulong *)((long)puVar20 + -7) <= puVar16) goto LAB_001013a3;
          if (*puVar14 != *(ulong *)((long)puVar30 + 5)) {
            uVar37 = 0;
            for (uVar23 = *puVar14 ^ *(ulong *)((long)puVar30 + 5); (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            pcVar17 = (char *)(ulong)(uVar37 >> 3);
            goto LAB_00100b37;
          }
          puVar27 = (ulong *)((long)puVar30 + 0xd);
          puVar14 = (ulong *)((long)puVar30 + (0xd - uVar24));
          goto joined_r0x00101a21;
        }
        uVar6 = *puVar31;
        uVar15 = uVar6 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
        iVar22 = (int)puVar31;
        if ((uVar38 < (uint)uVar28) && (*puVar27 == uVar23)) {
          puVar14 = puVar30 + 1;
          if ((ulong *)((long)puVar20 + -7) <= puVar14) {
            puVar16 = puVar27 + 1;
            puVar31 = puVar14;
            goto LAB_00101ada;
          }
          if (puVar27[1] != puVar30[1]) {
            uVar37 = 0;
            for (uVar23 = puVar27[1] ^ puVar30[1]; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            pcVar35 = (char *)(ulong)(uVar37 >> 3);
            goto LAB_00101b27;
          }
          puVar31 = puVar30 + 2;
          puVar16 = puVar27 + 2;
          goto joined_r0x0010172f;
        }
        uVar29 = *(uint *)(lVar5 + uVar15 * 4);
        uVar28 = (ulong)uVar29;
        puVar27 = (ulong *)(uVar28 + lVar3);
        if ((uVar38 < uVar37) &&
           (puVar16 = (ulong *)((ulong)uVar37 + lVar3), (int)*puVar16 == (int)*puVar30)) break;
        if (puVar14 <= puVar31) {
          uVar34 = uVar34 + 1;
          puVar14 = puVar14 + 0x20;
        }
        puVar16 = (ulong *)((long)puVar31 + uVar34);
        uVar23 = uVar6;
        puVar30 = puVar31;
        if (puVar26 < (ulong *)((long)puVar31 + uVar34)) goto LAB_00101258;
      }
      puVar14 = (ulong *)((long)puVar20 + -7);
      if ((uVar38 < uVar29) && (*puVar27 == uVar6)) {
        puVar30 = puVar31 + 1;
        if (puVar30 < puVar14) {
          if (puVar27[1] == puVar31[1]) {
            puVar16 = puVar31 + 2;
            puVar21 = puVar27 + 2;
            if (puVar16 < puVar14) {
LAB_001035c5:
              if (*puVar21 == *puVar16) goto LAB_00103894;
              uVar37 = 0;
              for (uVar23 = *puVar16 ^ *puVar21; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar35 = (char *)((long)puVar16 + ((ulong)(uVar37 >> 3) - (long)puVar30));
              goto LAB_0010318d;
            }
            goto LAB_001033d9;
          }
          uVar37 = 0;
          for (uVar23 = puVar31[1] ^ puVar27[1]; (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
          puVar21 = puVar27 + 1;
          puVar16 = puVar30;
LAB_001033d9:
          if ((puVar16 < (ulong *)((long)puVar20 + -3)) && ((int)*puVar21 == (int)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar16 < (ulong *)((long)puVar20 + -1)) && ((short)*puVar21 == (short)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          if (puVar16 < puVar20) {
            puVar16 = (ulong *)((long)puVar16 + (ulong)((char)*puVar21 == (char)*puVar16));
          }
          pcVar35 = (char *)((long)puVar16 - (long)puVar30);
        }
LAB_0010318d:
        pcVar35 = pcVar35 + 8;
        uVar37 = iVar22 - (int)puVar27;
        if ((local_58 < puVar27) && (local_b8 < puVar31)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar27 = (ulong *)((long)puVar27 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
          }
        }
      }
      else {
        puVar27 = (ulong *)((long)puVar30 + 4);
        if (puVar27 < puVar14) {
          if (*(ulong *)((long)puVar16 + 4) == *(ulong *)((long)puVar30 + 4)) {
            puVar21 = (ulong *)((long)puVar30 + 0xc);
            puVar31 = (ulong *)((long)puVar16 + 0xc);
            if (puVar21 < puVar14) {
LAB_001018ab:
              if (*puVar31 == *puVar21) goto LAB_00103330;
              uVar37 = 0;
              for (uVar23 = *puVar31 ^ *puVar21; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar35 = (char *)((long)puVar21 + ((ulong)(uVar37 >> 3) - (long)puVar27));
              goto LAB_00102361;
            }
            goto LAB_00102316;
          }
          uVar37 = 0;
          for (uVar23 = *(ulong *)((long)puVar16 + 4) ^ *(ulong *)((long)puVar30 + 4);
              (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
          puVar31 = (ulong *)((long)puVar16 + 4);
          puVar21 = puVar27;
LAB_00102316:
          if ((puVar21 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar31 == (int)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar21 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar31 == (short)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if (puVar21 < puVar20) {
            puVar21 = (ulong *)((long)puVar21 + (ulong)((char)*puVar31 == (char)*puVar21));
          }
          pcVar35 = (char *)((long)puVar21 - (long)puVar27);
        }
LAB_00102361:
        pcVar35 = pcVar35 + 4;
        uVar37 = iVar25 - (int)puVar16;
        puVar31 = puVar30;
        if ((local_b8 < puVar30) && (local_58 < puVar16)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar16 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar16 = (ulong *)((long)puVar16 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar16 <= local_58)) break;
          }
        }
      }
      goto LAB_00101b72;
    }
    goto LAB_00101258;
  }
  if (iVar25 == 5) {
    uVar36 = param_3[1];
    puVar20 = (ulong *)((long)param_4 + param_5);
    puVar26 = puVar20 + -1;
    if (*(int *)(param_1 + 0x28) == 0) {
      local_58 = (ulong *)(uVar23 + lVar3);
      puVar30 = (ulong *)((long)param_4 + (ulong)(param_4 == local_58));
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
      uVar38 = uVar19;
      if (uVar29 < uVar12) {
        uVar12 = uVar29;
      }
    }
    else {
      local_58 = (ulong *)((ulong)uVar38 + lVar3);
      puVar30 = (ulong *)((long)param_4 + (ulong)(param_4 == local_58));
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
    }
    local_50 = 0;
    local_4c = uVar36;
    if (uVar36 <= uVar12) {
      local_4c = 0;
      local_50 = uVar36;
    }
    if (uVar37 <= uVar12) {
      local_48 = 0;
    }
    else {
      local_a0 = 0;
    }
    bVar18 = uVar37 > uVar12;
    local_9c = 0x40 - cVar10;
    local_b8 = param_4;
LAB_00100f69:
    puVar14 = puVar30 + 0x20;
    bVar39 = local_a0 != 0;
    if ((ulong *)((long)puVar30 + 1U) <= puVar26) {
      uVar34 = 1;
      uVar15 = *puVar30 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
      uVar28 = (ulong)*(uint *)(lVar5 + uVar15 * 4);
      local_78 = 0x40 - cVar11;
      uVar24 = (ulong)local_a0;
      puVar27 = (ulong *)(uVar28 + lVar3);
      puVar16 = (ulong *)((long)puVar30 + 1U);
      uVar23 = *puVar30;
      while( true ) {
        puVar31 = puVar16;
        iVar25 = (int)puVar30;
        uVar19 = iVar25 - iVar9;
        puVar1 = (uint *)(lVar4 + (uVar23 * -0x30e4432345000000 >> (local_78 & 0x3f)) * 4);
        uVar37 = *puVar1;
        *puVar1 = uVar19;
        *(uint *)(lVar5 + uVar15 * 4) = uVar19;
        if ((*(int *)((long)puVar30 + (1 - uVar24)) == *(int *)((long)puVar30 + 1)) && (bVar39)) {
          puVar16 = (ulong *)((long)puVar30 + 5);
          puVar14 = (ulong *)((long)puVar30 + (5 - uVar24));
          puVar27 = puVar16;
          if ((ulong *)((long)puVar20 + -7) <= puVar16) goto LAB_00101453;
          if (*puVar14 != *(ulong *)((long)puVar30 + 5)) {
            uVar37 = 0;
            for (uVar23 = *puVar14 ^ *(ulong *)((long)puVar30 + 5); (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            pcVar17 = (char *)(ulong)(uVar37 >> 3);
            goto LAB_001010ef;
          }
          puVar27 = (ulong *)((long)puVar30 + 0xd);
          puVar14 = (ulong *)((long)puVar30 + (0xd - uVar24));
          goto joined_r0x00101a62;
        }
        uVar6 = *puVar31;
        uVar15 = uVar6 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
        iVar22 = (int)puVar31;
        if ((uVar38 < (uint)uVar28) && (*puVar27 == uVar23)) {
          puVar14 = puVar30 + 1;
          if ((ulong *)((long)puVar20 + -7) <= puVar14) {
            puVar16 = puVar27 + 1;
            puVar31 = puVar14;
            goto LAB_00101df4;
          }
          if (puVar27[1] != puVar30[1]) {
            uVar37 = 0;
            for (uVar23 = puVar27[1] ^ puVar30[1]; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            pcVar35 = (char *)(ulong)(uVar37 >> 3);
            goto LAB_00101e41;
          }
          puVar31 = puVar30 + 2;
          puVar16 = puVar27 + 2;
          goto joined_r0x0010179f;
        }
        uVar29 = *(uint *)(lVar5 + uVar15 * 4);
        uVar28 = (ulong)uVar29;
        puVar27 = (ulong *)(uVar28 + lVar3);
        if ((uVar38 < uVar37) &&
           (puVar16 = (ulong *)((ulong)uVar37 + lVar3), (int)*puVar16 == (int)*puVar30)) break;
        if (puVar14 <= puVar31) {
          uVar34 = uVar34 + 1;
          puVar14 = puVar14 + 0x20;
        }
        puVar16 = (ulong *)((long)puVar31 + uVar34);
        uVar23 = uVar6;
        puVar30 = puVar31;
        if (puVar26 < (ulong *)((long)puVar31 + uVar34)) goto LAB_00101258;
      }
      puVar14 = (ulong *)((long)puVar20 + -7);
      if ((uVar38 < uVar29) && (*puVar27 == uVar6)) {
        puVar30 = puVar31 + 1;
        if (puVar30 < puVar14) {
          if (puVar27[1] == puVar31[1]) {
            puVar16 = puVar31 + 2;
            puVar21 = puVar27 + 2;
            if (puVar16 < puVar14) {
LAB_00103514:
              if (*puVar21 == *puVar16) goto LAB_001038c8;
              uVar37 = 0;
              for (uVar23 = *puVar16 ^ *puVar21; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar35 = (char *)((long)puVar16 + ((ulong)(uVar37 >> 3) - (long)puVar30));
              goto LAB_0010321d;
            }
            goto LAB_0010343d;
          }
          uVar37 = 0;
          for (uVar23 = puVar31[1] ^ puVar27[1]; (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
          puVar21 = puVar27 + 1;
          puVar16 = puVar30;
LAB_0010343d:
          if ((puVar16 < (ulong *)((long)puVar20 + -3)) && ((int)*puVar21 == (int)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar16 < (ulong *)((long)puVar20 + -1)) && ((short)*puVar21 == (short)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          if (puVar16 < puVar20) {
            puVar16 = (ulong *)((long)puVar16 + (ulong)((char)*puVar21 == (char)*puVar16));
          }
          pcVar35 = (char *)((long)puVar16 - (long)puVar30);
        }
LAB_0010321d:
        pcVar35 = pcVar35 + 8;
        uVar37 = iVar22 - (int)puVar27;
        if ((local_b8 < puVar31) && (local_58 < puVar27)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar27 = (ulong *)((long)puVar27 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
          }
        }
      }
      else {
        puVar27 = (ulong *)((long)puVar30 + 4);
        if (puVar27 < puVar14) {
          if (*(ulong *)((long)puVar16 + 4) == *(ulong *)((long)puVar30 + 4)) {
            puVar21 = (ulong *)((long)puVar30 + 0xc);
            puVar31 = (ulong *)((long)puVar16 + 0xc);
            if (puVar21 < puVar14) {
LAB_001019ab:
              if (*puVar31 == *puVar21) goto LAB_00103350;
              uVar37 = 0;
              for (uVar23 = *puVar31 ^ *puVar21; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar35 = (char *)((long)puVar21 + ((ulong)(uVar37 >> 3) - (long)puVar27));
              goto LAB_001022b1;
            }
            goto LAB_00102266;
          }
          uVar37 = 0;
          for (uVar23 = *(ulong *)((long)puVar16 + 4) ^ *(ulong *)((long)puVar30 + 4);
              (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
          puVar31 = (ulong *)((long)puVar16 + 4);
          puVar21 = puVar27;
LAB_00102266:
          if ((puVar21 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar31 == (int)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar21 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar31 == (short)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if (puVar21 < puVar20) {
            puVar21 = (ulong *)((long)puVar21 + (ulong)((char)*puVar31 == (char)*puVar21));
          }
          pcVar35 = (char *)((long)puVar21 - (long)puVar27);
        }
LAB_001022b1:
        pcVar35 = pcVar35 + 4;
        uVar37 = iVar25 - (int)puVar16;
        puVar31 = puVar30;
        if ((local_b8 < puVar30) && (local_58 < puVar16)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar16 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar16 = (ulong *)((long)puVar16 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar16 <= local_58)) break;
          }
        }
      }
      goto LAB_00101e8a;
    }
LAB_00101258:
    if (((!bVar18) || (uVar38 = local_48, !bVar39)) && (uVar38 = local_4c, local_a0 == 0)) {
      local_a0 = local_48;
      uVar38 = local_4c;
    }
  }
  else {
    puVar20 = (ulong *)((long)param_4 + param_5);
    uVar36 = param_3[1];
    puVar26 = puVar20 + -1;
    if (*(int *)(param_1 + 0x28) == 0) {
      local_58 = (ulong *)(uVar23 + lVar3);
      puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
      uVar38 = uVar19;
      if (uVar29 < uVar12) {
        uVar12 = uVar29;
      }
    }
    else {
      local_58 = (ulong *)((ulong)uVar38 + lVar3);
      puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
      uVar12 = ((int)puVar30 - iVar9) - uVar38;
    }
    local_50 = 0;
    uVar19 = uVar36;
    if (uVar36 <= uVar12) {
      uVar19 = 0;
      local_50 = uVar36;
    }
    if (uVar37 <= uVar12) {
      uVar29 = 0;
    }
    else {
      local_a0 = 0;
      uVar29 = uVar37;
    }
    local_9c = 0x40 - cVar10;
    local_b8 = param_4;
LAB_001006ef:
    puVar14 = puVar30 + 0x20;
    if ((ulong *)((long)puVar30 + 1U) <= puVar26) {
      uVar28 = 1;
      local_78 = 0x20 - cVar11;
      uVar15 = *puVar30 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
      uVar23 = (ulong)local_a0;
      uVar24 = (ulong)*(uint *)(lVar5 + uVar15 * 4);
      puVar27 = (ulong *)(uVar24 + lVar3);
      puVar16 = (ulong *)((long)puVar30 + 1U);
      while( true ) {
        puVar31 = puVar16;
        iVar25 = (int)puVar30;
        uVar32 = iVar25 - iVar9;
        puVar1 = (uint *)(lVar4 + (ulong)((uint)((int)*puVar30 * -0x61c8864f) >> (local_78 & 0x1f))
                                  * 4);
        uVar36 = *puVar1;
        *puVar1 = uVar32;
        *(uint *)(lVar5 + uVar15 * 4) = uVar32;
        if ((*(int *)((long)puVar30 + (1 - uVar23)) == *(int *)((long)puVar30 + 1)) &&
           (local_a0 != 0)) {
          puVar14 = (ulong *)((long)puVar30 + 5);
          puVar16 = (ulong *)((long)puVar30 + (5 - uVar23));
          puVar27 = puVar14;
          if ((ulong *)((long)puVar20 - 7U) <= puVar14) goto LAB_001015b3;
          if (*puVar16 != *(ulong *)((long)puVar30 + 5)) {
            uVar36 = 0;
            for (uVar23 = *puVar16 ^ *(ulong *)((long)puVar30 + 5); (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar36 = uVar36 + 1;
            }
            pcVar17 = (char *)(ulong)(uVar36 >> 3);
            goto LAB_0010085c;
          }
          puVar27 = (ulong *)((long)puVar30 + 0xd);
          puVar16 = (ulong *)((long)puVar30 + (0xd - uVar23));
          goto joined_r0x001019e0;
        }
        uVar15 = *puVar31 * -0x30e44323485a9b9d >> (local_9c & 0x3f);
        iVar22 = (int)puVar31;
        if ((uVar38 < (uint)uVar24) && (*puVar27 == *puVar30)) {
          puVar14 = puVar30 + 1;
          if ((ulong *)((long)puVar20 - 7U) <= puVar14) {
            puVar31 = puVar27 + 1;
            puVar16 = puVar14;
            goto LAB_00101c60;
          }
          if (puVar27[1] != puVar30[1]) {
            uVar36 = 0;
            for (uVar23 = puVar27[1] ^ puVar30[1]; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar36 = uVar36 + 1;
            }
            pcVar35 = (char *)(ulong)(uVar36 >> 3);
            goto LAB_00101cb1;
          }
          puVar16 = puVar30 + 2;
          puVar31 = puVar27 + 2;
          goto joined_r0x0010164c;
        }
        uVar2 = *(uint *)(lVar5 + uVar15 * 4);
        uVar24 = (ulong)uVar2;
        puVar27 = (ulong *)(uVar24 + lVar3);
        if ((uVar38 < uVar36) &&
           (puVar16 = (ulong *)((ulong)uVar36 + lVar3), (int)*puVar16 == (int)*puVar30)) break;
        if (puVar14 <= puVar31) {
          uVar28 = uVar28 + 1;
          puVar14 = puVar14 + 0x20;
        }
        puVar16 = (ulong *)((long)puVar31 + uVar28);
        puVar30 = puVar31;
        if (puVar26 < (ulong *)((long)puVar31 + uVar28)) goto LAB_001012d0;
      }
      puVar14 = (ulong *)((long)puVar20 - 7);
      if ((uVar38 < uVar2) && (*puVar27 == *puVar31)) {
        puVar30 = puVar31 + 1;
        if (puVar30 < puVar14) {
          if (puVar27[1] == puVar31[1]) {
            puVar16 = puVar31 + 2;
            puVar21 = puVar27 + 2;
            if (puVar16 < puVar14) {
LAB_0010358a:
              if (*puVar21 == *puVar16) goto LAB_00103970;
              uVar36 = 0;
              for (uVar23 = *puVar16 ^ *puVar21; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar36 = uVar36 + 1;
              }
              pcVar35 = (char *)((long)puVar16 + ((ulong)(uVar36 >> 3) - (long)puVar30));
              goto LAB_001032ad;
            }
            goto LAB_00103372;
          }
          uVar36 = 0;
          for (uVar23 = puVar27[1] ^ puVar31[1]; (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar36 = uVar36 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar36 >> 3);
        }
        else {
          puVar21 = puVar27 + 1;
          puVar16 = puVar30;
LAB_00103372:
          if ((puVar16 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar21 == (int)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar16 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar21 == (short)*puVar16)) {
            puVar16 = (ulong *)((long)puVar16 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          if (puVar16 < puVar20) {
            puVar16 = (ulong *)((long)puVar16 + (ulong)((char)*puVar21 == (char)*puVar16));
          }
          pcVar35 = (char *)((long)puVar16 - (long)puVar30);
        }
LAB_001032ad:
        pcVar35 = pcVar35 + 8;
        uVar36 = iVar22 - (int)puVar27;
        if ((local_58 < puVar27) && (local_b8 < puVar31)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar27 = (ulong *)((long)puVar27 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
          }
        }
      }
      else {
        puVar27 = (ulong *)((long)puVar30 + 4);
        if (puVar27 < puVar14) {
          if (*(ulong *)((long)puVar16 + 4) == *(ulong *)((long)puVar30 + 4)) {
            puVar31 = (ulong *)((long)puVar30 + 0xc);
            puVar21 = (ulong *)((long)puVar16 + 0xc);
            if (puVar31 < puVar14) {
LAB_00101925:
              if (*puVar21 == *puVar31) goto LAB_0010330d;
              uVar36 = 0;
              for (uVar23 = *puVar21 ^ *puVar31; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar36 = uVar36 + 1;
              }
              pcVar35 = (char *)((long)puVar31 + ((ulong)(uVar36 >> 3) - (long)puVar27));
              goto LAB_0010214d;
            }
            goto LAB_00102100;
          }
          uVar36 = 0;
          for (uVar23 = *(ulong *)((long)puVar16 + 4) ^ *(ulong *)((long)puVar30 + 4);
              (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar36 = uVar36 + 1;
          }
          pcVar35 = (char *)(ulong)(uVar36 >> 3);
        }
        else {
          puVar21 = (ulong *)((long)puVar16 + 4);
          puVar31 = puVar27;
LAB_00102100:
          if ((puVar31 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar21 == (int)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar31 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar21 == (short)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          if (puVar31 < puVar20) {
            puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar21 == (char)*puVar31));
          }
          pcVar35 = (char *)((long)puVar31 - (long)puVar27);
        }
LAB_0010214d:
        pcVar35 = pcVar35 + 4;
        uVar36 = iVar25 - (int)puVar16;
        puVar31 = puVar30;
        if ((local_b8 < puVar30) && (local_58 < puVar16)) {
          while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar16 + -1)) {
            puVar31 = (ulong *)((long)puVar31 + -1);
            puVar16 = (ulong *)((long)puVar16 + -1);
            pcVar35 = pcVar35 + 1;
            if ((puVar31 <= local_b8) || (puVar16 <= local_58)) break;
          }
        }
      }
      goto LAB_00101cf8;
    }
LAB_001012d0:
    if (((uVar37 <= uVar12) || (uVar38 = uVar29, local_a0 == 0)) && (uVar38 = uVar19, local_a0 == 0)
       ) {
      local_a0 = uVar29;
    }
  }
  if (local_50 != 0) {
    uVar38 = local_50;
  }
  param_3[1] = uVar38;
  *param_3 = local_a0;
  return (char *)((long)param_4 + (param_5 - (long)local_b8));
joined_r0x00101aa3:
  if (puVar27 < (ulong *)((long)puVar20 + -7)) {
    if (*puVar14 == *puVar27) goto LAB_00102870;
    uVar37 = 0;
    for (uVar23 = *puVar14 ^ *puVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar37 = uVar37 + 1;
    }
    pcVar17 = (char *)((long)puVar27 + ((ulong)(uVar37 >> 3) - (long)puVar16));
  }
  else {
LAB_001014b3:
    if ((puVar27 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar14 == (int)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 4);
      puVar14 = (ulong *)((long)puVar14 + 4);
    }
    if ((puVar27 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar14 == (short)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 2);
      puVar14 = (ulong *)((long)puVar14 + 2);
    }
    if (puVar27 < puVar20) {
      puVar27 = (ulong *)((long)puVar27 + (ulong)((char)*puVar14 == (char)*puVar27));
    }
    pcVar17 = (char *)((long)puVar27 - (long)puVar16);
  }
  goto LAB_00100e17;
LAB_00102870:
  puVar27 = puVar27 + 1;
  puVar14 = puVar14 + 1;
  goto joined_r0x00101aa3;
LAB_00100e17:
  puVar31 = (ulong *)((long)puVar30 + 1);
  pcVar35 = pcVar17 + 4;
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_0010136a:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_0010136a;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = 1;
  if ((char *)0xffff < pcVar17 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  *(short *)((long)piVar13 + 6) = (short)(pcVar17 + 1);
  goto LAB_00100e9c;
joined_r0x001016bf:
  if (puVar31 < (ulong *)((long)puVar20 + -7)) {
    if (*puVar16 == *puVar31) goto LAB_00103090;
    uVar37 = 0;
    for (uVar23 = *puVar16 ^ *puVar31; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar37 = uVar37 + 1;
    }
    pcVar35 = (char *)((long)puVar31 + ((ulong)(uVar37 >> 3) - (long)puVar14));
  }
  else {
LAB_00101f78:
    if ((puVar31 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar16 == (int)*puVar31)) {
      puVar31 = (ulong *)((long)puVar31 + 4);
      puVar16 = (ulong *)((long)puVar16 + 4);
    }
    if ((puVar31 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar16 == (short)*puVar31)) {
      puVar31 = (ulong *)((long)puVar31 + 2);
      puVar16 = (ulong *)((long)puVar16 + 2);
    }
    if (puVar31 < puVar20) {
      puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar16 == (char)*puVar31));
    }
    pcVar35 = (char *)((long)puVar31 - (long)puVar14);
  }
  goto LAB_00101fc5;
LAB_00103090:
  puVar31 = puVar31 + 1;
  puVar16 = puVar16 + 1;
  goto joined_r0x001016bf;
LAB_00101fc5:
  pcVar35 = pcVar35 + 8;
  uVar37 = iVar25 - (int)puVar27;
  puVar31 = puVar30;
  if ((local_58 < puVar27) && (local_b8 < puVar30)) {
    while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
      puVar31 = (ulong *)((long)puVar31 + -1);
      puVar27 = (ulong *)((long)puVar27 + -1);
      pcVar35 = pcVar35 + 1;
      if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
    }
  }
LAB_00102012:
  if (uVar34 < 4) {
    *(int *)(lVar5 + uVar15 * 4) = iVar22 - iVar9;
  }
  iVar25 = uVar37 + 3;
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_001020ca:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_001020ca;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = iVar25;
  if ((char *)0xffff < pcVar35 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  local_50 = local_a0;
  *(short *)((long)piVar13 + 6) = (short)(pcVar35 + -3);
  local_a0 = uVar37;
LAB_00100e9c:
  uVar37 = local_a0;
  local_98 = (ulong *)((long)puVar20 + -7);
  puVar14 = puVar20 + -4;
  puVar30 = (ulong *)((long)puVar31 + (long)pcVar35);
  param_2[1] = (long)(piVar13 + 2);
  local_b8 = puVar30;
  if (puVar30 <= puVar26) {
    uVar19 = uVar19 + 2;
    lVar7 = *(long *)(lVar3 + (ulong)uVar19);
    *(uint *)(lVar5 + ((ulong)(lVar7 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) = uVar19;
    *(int *)(lVar5 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e44323485a9b9d) >>
                     (local_9c & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar9;
    *(uint *)(lVar4 + ((ulong)(lVar7 * -0x30e4432340650000) >> (local_78 & 0x3f)) * 4) = uVar19;
    *(int *)(lVar4 + ((ulong)(*(long *)((long)puVar30 + -1) * -0x30e4432340650000) >>
                     (local_78 & 0x3f)) * 4) = ((int)puVar30 + -1) - iVar9;
    uVar23 = (ulong)local_50;
    if ((*(int *)((long)puVar30 - uVar23) == (int)*puVar30) && (local_50 != 0)) {
      local_a0 = local_50;
      local_50 = uVar37;
      plVar33 = param_2;
      do {
        puVar27 = (ulong *)((long)puVar30 + 4);
        puVar16 = (ulong *)((long)puVar30 + (4 - uVar23));
        puVar31 = puVar27;
        if (puVar27 < local_98) {
          if (*puVar16 == *(ulong *)((long)puVar30 + 4)) {
            puVar31 = (ulong *)((long)puVar30 + 0xc);
            puVar16 = puVar16 + 1;
            if (puVar31 < local_98) {
LAB_0010380b:
              if (*puVar16 == *puVar31) goto LAB_00103849;
              uVar37 = 0;
              for (uVar23 = *puVar16 ^ *puVar31; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar17 = (char *)((long)puVar31 + ((ulong)(uVar37 >> 3) - (long)puVar27));
              goto LAB_001029c5;
            }
            goto LAB_00103660;
          }
          uVar37 = 0;
          for (uVar23 = *puVar16 ^ *(ulong *)((long)puVar30 + 4); (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar17 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
LAB_00103660:
          if ((puVar31 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar16 == (int)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 4);
            puVar16 = (ulong *)((long)puVar16 + 4);
          }
          if ((puVar31 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar16 == (short)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 2);
            puVar16 = (ulong *)((long)puVar16 + 2);
          }
          if (puVar31 < puVar20) {
            puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar16 == (char)*puVar31));
          }
          pcVar17 = (char *)((long)puVar31 - (long)puVar27);
        }
LAB_001029c5:
        uVar23 = *puVar30;
        pcVar35 = pcVar17 + 4;
        iVar25 = (int)puVar30 - iVar9;
        *(int *)(lVar4 + (uVar23 * -0x30e4432340650000 >> (local_78 & 0x3f)) * 4) = iVar25;
        *(int *)(lVar5 + (uVar23 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar25;
        puVar16 = (ulong *)plVar33[3];
        if (puVar14 < puVar30) {
          ZSTD_safecopyLiterals(puVar16,puVar30,puVar30,puVar14);
        }
        else {
          uVar23 = puVar30[1];
          *puVar16 = *puVar30;
          puVar16[1] = uVar23;
        }
        puVar8 = (undefined4 *)plVar33[1];
        *(undefined2 *)(puVar8 + 1) = 0;
        *puVar8 = 1;
        if ((char *)0xffff < pcVar17 + 1) {
          *(undefined4 *)(plVar33 + 9) = 2;
          *(int *)((long)plVar33 + 0x4c) = (int)((long)puVar8 - *plVar33 >> 3);
        }
        *(short *)((long)puVar8 + 6) = (short)(pcVar17 + 1);
        plVar33[1] = (long)(puVar8 + 2);
        puVar30 = (ulong *)((long)puVar30 + (long)pcVar35);
        local_b8 = puVar30;
        if ((puVar26 < puVar30) ||
           (uVar23 = (ulong)local_50,
           *(int *)((long)puVar30 - uVar23) != (int)*puVar30 || local_50 == 0)) break;
        uVar37 = local_a0;
        local_a0 = local_50;
        local_50 = uVar37;
      } while( true );
    }
  }
  goto LAB_00100c8b;
LAB_001030b0:
  puVar21 = puVar21 + 1;
  puVar31 = puVar31 + 1;
  if (puVar14 <= puVar21) goto LAB_001021b4;
  goto LAB_0010182b;
LAB_0010394e:
  puVar16 = puVar16 + 1;
  puVar21 = puVar21 + 1;
  if (puVar14 <= puVar16) goto LAB_001034a1;
  goto LAB_0010354f;
LAB_00103849:
  puVar31 = puVar31 + 1;
  puVar16 = puVar16 + 1;
  if (local_98 <= puVar31) goto LAB_00103660;
  goto LAB_0010380b;
joined_r0x00101a21:
  if (puVar27 < (ulong *)((long)puVar20 + -7)) {
    if (*puVar14 == *puVar27) goto LAB_001028b0;
    uVar37 = 0;
    for (uVar23 = *puVar14 ^ *puVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar37 = uVar37 + 1;
    }
    pcVar17 = (char *)((long)puVar27 + ((ulong)(uVar37 >> 3) - (long)puVar16));
  }
  else {
LAB_001013a3:
    if ((puVar27 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar14 == (int)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 4);
      puVar14 = (ulong *)((long)puVar14 + 4);
    }
    if ((puVar27 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar14 == (short)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 2);
      puVar14 = (ulong *)((long)puVar14 + 2);
    }
    if (puVar27 < puVar20) {
      puVar27 = (ulong *)((long)puVar27 + (ulong)((char)*puVar14 == (char)*puVar27));
    }
    pcVar17 = (char *)((long)puVar27 - (long)puVar16);
  }
  goto LAB_00100b37;
LAB_001028b0:
  puVar27 = puVar27 + 1;
  puVar14 = puVar14 + 1;
  goto joined_r0x00101a21;
LAB_00100b37:
  puVar31 = (ulong *)((long)puVar30 + 1);
  pcVar35 = pcVar17 + 4;
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_0010141a:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_0010141a;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = 1;
  if ((char *)0xffff < pcVar17 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  *(short *)((long)piVar13 + 6) = (short)(pcVar17 + 1);
  goto LAB_00100bbc;
joined_r0x0010172f:
  if (puVar31 < (ulong *)((long)puVar20 + -7)) {
    if (*puVar16 == *puVar31) goto LAB_00103050;
    uVar37 = 0;
    for (uVar23 = *puVar16 ^ *puVar31; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar37 = uVar37 + 1;
    }
    pcVar35 = (char *)((long)puVar31 + ((ulong)(uVar37 >> 3) - (long)puVar14));
  }
  else {
LAB_00101ada:
    if ((puVar31 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar16 == (int)*puVar31)) {
      puVar31 = (ulong *)((long)puVar31 + 4);
      puVar16 = (ulong *)((long)puVar16 + 4);
    }
    if ((puVar31 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar16 == (short)*puVar31)) {
      puVar31 = (ulong *)((long)puVar31 + 2);
      puVar16 = (ulong *)((long)puVar16 + 2);
    }
    if (puVar31 < puVar20) {
      puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar16 == (char)*puVar31));
    }
    pcVar35 = (char *)((long)puVar31 - (long)puVar14);
  }
  goto LAB_00101b27;
LAB_00103050:
  puVar31 = puVar31 + 1;
  puVar16 = puVar16 + 1;
  goto joined_r0x0010172f;
LAB_00101b27:
  pcVar35 = pcVar35 + 8;
  uVar37 = iVar25 - (int)puVar27;
  puVar31 = puVar30;
  if ((local_58 < puVar27) && (local_b8 < puVar30)) {
    while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
      puVar31 = (ulong *)((long)puVar31 + -1);
      puVar27 = (ulong *)((long)puVar27 + -1);
      pcVar35 = pcVar35 + 1;
      if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
    }
  }
LAB_00101b72:
  if (uVar34 < 4) {
    *(int *)(lVar5 + uVar15 * 4) = iVar22 - iVar9;
  }
  iVar25 = uVar37 + 3;
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_00101c2a:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_00101c2a;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = iVar25;
  if ((char *)0xffff < pcVar35 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  local_50 = local_a0;
  *(short *)((long)piVar13 + 6) = (short)(pcVar35 + -3);
  local_a0 = uVar37;
LAB_00100bbc:
  uVar37 = local_a0;
  local_98 = (ulong *)((long)puVar20 + -7);
  puVar14 = puVar20 + -4;
  puVar30 = (ulong *)((long)puVar31 + (long)pcVar35);
  param_2[1] = (long)(piVar13 + 2);
  local_b8 = puVar30;
  if (puVar30 <= puVar26) {
    uVar19 = uVar19 + 2;
    lVar7 = *(long *)(lVar3 + (ulong)uVar19);
    *(uint *)(lVar5 + ((ulong)(lVar7 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) = uVar19;
    *(int *)(lVar5 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e44323485a9b9d) >>
                     (local_9c & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar9;
    *(uint *)(lVar4 + ((ulong)(lVar7 * -0x30e44323405a9d00) >> (local_78 & 0x3f)) * 4) = uVar19;
    *(int *)(lVar4 + ((ulong)(*(long *)((long)puVar30 + -1) * -0x30e44323405a9d00) >>
                     (local_78 & 0x3f)) * 4) = ((int)puVar30 + -1) - iVar9;
    uVar23 = (ulong)local_50;
    if ((*(int *)((long)puVar30 - uVar23) == (int)*puVar30) && (local_50 != 0)) {
      local_a0 = local_50;
      local_50 = uVar37;
      plVar33 = param_2;
      do {
        puVar27 = (ulong *)((long)puVar30 + 4);
        puVar16 = (ulong *)((long)puVar30 + (4 - uVar23));
        puVar31 = puVar27;
        if (puVar27 < local_98) {
          if (*puVar16 == *(ulong *)((long)puVar30 + 4)) {
            puVar31 = (ulong *)((long)puVar30 + 0xc);
            puVar16 = puVar16 + 1;
            if (puVar31 < local_98) {
LAB_0010386d:
              if (*puVar16 == *puVar31) goto LAB_001038af;
              uVar37 = 0;
              for (uVar23 = *puVar16 ^ *puVar31; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar17 = (char *)((long)puVar31 + ((ulong)(uVar37 >> 3) - (long)puVar27));
              goto LAB_00102f45;
            }
            goto LAB_00103703;
          }
          uVar37 = 0;
          for (uVar23 = *puVar16 ^ *(ulong *)((long)puVar30 + 4); (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar17 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
LAB_00103703:
          if ((puVar31 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar16 == (int)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 4);
            puVar16 = (ulong *)((long)puVar16 + 4);
          }
          if ((puVar31 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar16 == (short)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 2);
            puVar16 = (ulong *)((long)puVar16 + 2);
          }
          if (puVar31 < puVar20) {
            puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar16 == (char)*puVar31));
          }
          pcVar17 = (char *)((long)puVar31 - (long)puVar27);
        }
LAB_00102f45:
        uVar23 = *puVar30;
        pcVar35 = pcVar17 + 4;
        iVar25 = (int)puVar30 - iVar9;
        *(int *)(lVar4 + (uVar23 * -0x30e44323405a9d00 >> (local_78 & 0x3f)) * 4) = iVar25;
        *(int *)(lVar5 + (uVar23 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar25;
        puVar16 = (ulong *)plVar33[3];
        if (puVar14 < puVar30) {
          ZSTD_safecopyLiterals(puVar16,puVar30,puVar30,puVar14);
        }
        else {
          uVar23 = puVar30[1];
          *puVar16 = *puVar30;
          puVar16[1] = uVar23;
        }
        puVar8 = (undefined4 *)plVar33[1];
        *(undefined2 *)(puVar8 + 1) = 0;
        *puVar8 = 1;
        if ((char *)0xffff < pcVar17 + 1) {
          *(undefined4 *)(plVar33 + 9) = 2;
          *(int *)((long)plVar33 + 0x4c) = (int)((long)puVar8 - *plVar33 >> 3);
        }
        *(short *)((long)puVar8 + 6) = (short)(pcVar17 + 1);
        plVar33[1] = (long)(puVar8 + 2);
        puVar30 = (ulong *)((long)puVar30 + (long)pcVar35);
        local_b8 = puVar30;
        if ((puVar26 < puVar30) ||
           (uVar23 = (ulong)local_50,
           *(int *)((long)puVar30 - uVar23) != (int)*puVar30 || local_50 == 0)) break;
        uVar37 = local_a0;
        local_a0 = local_50;
        local_50 = uVar37;
      } while( true );
    }
  }
  goto LAB_001009b1;
LAB_00103330:
  puVar21 = puVar21 + 1;
  puVar31 = puVar31 + 1;
  if (puVar14 <= puVar21) goto LAB_00102316;
  goto LAB_001018ab;
LAB_00103894:
  puVar16 = puVar16 + 1;
  puVar21 = puVar21 + 1;
  if (puVar14 <= puVar16) goto LAB_001033d9;
  goto LAB_001035c5;
LAB_001038af:
  puVar31 = puVar31 + 1;
  puVar16 = puVar16 + 1;
  if (local_98 <= puVar31) goto LAB_00103703;
  goto LAB_0010386d;
joined_r0x00101a62:
  if (puVar27 < (ulong *)((long)puVar20 + -7)) {
    if (*puVar14 == *puVar27) goto LAB_00102890;
    uVar37 = 0;
    for (uVar23 = *puVar14 ^ *puVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar37 = uVar37 + 1;
    }
    pcVar17 = (char *)((long)puVar27 + ((ulong)(uVar37 >> 3) - (long)puVar16));
  }
  else {
LAB_00101453:
    if ((puVar27 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar14 == (int)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 4);
      puVar14 = (ulong *)((long)puVar14 + 4);
    }
    if ((puVar27 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar14 == (short)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 2);
      puVar14 = (ulong *)((long)puVar14 + 2);
    }
    if (puVar27 < puVar20) {
      puVar27 = (ulong *)((long)puVar27 + (ulong)((char)*puVar14 == (char)*puVar27));
    }
    pcVar17 = (char *)((long)puVar27 - (long)puVar16);
  }
  goto LAB_001010ef;
LAB_00102890:
  puVar27 = puVar27 + 1;
  puVar14 = puVar14 + 1;
  goto joined_r0x00101a62;
LAB_001010ef:
  puVar31 = (ulong *)((long)puVar30 + 1);
  pcVar35 = pcVar17 + 4;
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_0010157a:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_0010157a;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = 1;
  if ((char *)0xffff < pcVar17 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  *(short *)((long)piVar13 + 6) = (short)(pcVar17 + 1);
  goto LAB_00101174;
joined_r0x0010179f:
  if (puVar31 < (ulong *)((long)puVar20 + -7)) {
    if (*puVar16 == *puVar31) goto LAB_00103070;
    uVar37 = 0;
    for (uVar23 = *puVar16 ^ *puVar31; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar37 = uVar37 + 1;
    }
    pcVar35 = (char *)((long)puVar31 + ((ulong)(uVar37 >> 3) - (long)puVar14));
  }
  else {
LAB_00101df4:
    if ((puVar31 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar16 == (int)*puVar31)) {
      puVar31 = (ulong *)((long)puVar31 + 4);
      puVar16 = (ulong *)((long)puVar16 + 4);
    }
    if ((puVar31 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar16 == (short)*puVar31)) {
      puVar31 = (ulong *)((long)puVar31 + 2);
      puVar16 = (ulong *)((long)puVar16 + 2);
    }
    if (puVar31 < puVar20) {
      puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar16 == (char)*puVar31));
    }
    pcVar35 = (char *)((long)puVar31 - (long)puVar14);
  }
  goto LAB_00101e41;
LAB_00103070:
  puVar31 = puVar31 + 1;
  puVar16 = puVar16 + 1;
  goto joined_r0x0010179f;
LAB_00101e41:
  pcVar35 = pcVar35 + 8;
  uVar37 = iVar25 - (int)puVar27;
  puVar31 = puVar30;
  if ((local_b8 < puVar30) && (local_58 < puVar27)) {
    while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
      puVar31 = (ulong *)((long)puVar31 + -1);
      puVar27 = (ulong *)((long)puVar27 + -1);
      pcVar35 = pcVar35 + 1;
      if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
    }
  }
LAB_00101e8a:
  if (uVar34 < 4) {
    *(int *)(lVar5 + uVar15 * 4) = iVar22 - iVar9;
  }
  iVar25 = uVar37 + 3;
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_00101f42:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_00101f42;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = iVar25;
  if ((char *)0xffff < pcVar35 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  local_50 = local_a0;
  *(short *)((long)piVar13 + 6) = (short)(pcVar35 + -3);
  local_a0 = uVar37;
LAB_00101174:
  uVar37 = local_a0;
  local_98 = (ulong *)((long)puVar20 + -7);
  puVar14 = puVar20 + -4;
  puVar30 = (ulong *)((long)puVar31 + (long)pcVar35);
  param_2[1] = (long)(piVar13 + 2);
  local_b8 = puVar30;
  if (puVar30 <= puVar26) {
    uVar19 = uVar19 + 2;
    lVar7 = *(long *)(lVar3 + (ulong)uVar19);
    *(uint *)(lVar5 + ((ulong)(lVar7 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) = uVar19;
    *(int *)(lVar5 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e44323485a9b9d) >>
                     (local_9c & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar9;
    *(uint *)(lVar4 + ((ulong)(lVar7 * -0x30e4432345000000) >> (local_78 & 0x3f)) * 4) = uVar19;
    *(int *)(lVar4 + ((ulong)(*(long *)((long)puVar30 + -1) * -0x30e4432345000000) >>
                     (local_78 & 0x3f)) * 4) = ((int)puVar30 + -1) - iVar9;
    uVar23 = (ulong)local_50;
    if ((*(int *)((long)puVar30 - uVar23) == (int)*puVar30) && (local_50 != 0)) {
      local_a0 = local_50;
      local_50 = uVar37;
      plVar33 = param_2;
      do {
        puVar27 = (ulong *)((long)puVar30 + 4);
        puVar16 = (ulong *)((long)puVar30 + (4 - uVar23));
        puVar31 = puVar27;
        if (puVar27 < local_98) {
          if (*puVar16 == *(ulong *)((long)puVar30 + 4)) {
            puVar31 = (ulong *)((long)puVar30 + 0xc);
            puVar16 = puVar16 + 1;
            if (puVar31 < local_98) {
LAB_001038f5:
              if (*puVar16 == *puVar31) goto LAB_0010392c;
              uVar37 = 0;
              for (uVar23 = *puVar16 ^ *puVar31; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              pcVar17 = (char *)((long)puVar31 + ((ulong)(uVar37 >> 3) - (long)puVar27));
              goto LAB_00102bad;
            }
            goto LAB_00103600;
          }
          uVar37 = 0;
          for (uVar23 = *puVar16 ^ *(ulong *)((long)puVar30 + 4); (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          pcVar17 = (char *)(ulong)(uVar37 >> 3);
        }
        else {
LAB_00103600:
          if ((puVar31 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar16 == (int)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 4);
            puVar16 = (ulong *)((long)puVar16 + 4);
          }
          if ((puVar31 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar16 == (short)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 2);
            puVar16 = (ulong *)((long)puVar16 + 2);
          }
          if (puVar31 < puVar20) {
            puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar16 == (char)*puVar31));
          }
          pcVar17 = (char *)((long)puVar31 - (long)puVar27);
        }
LAB_00102bad:
        uVar23 = *puVar30;
        pcVar35 = pcVar17 + 4;
        iVar25 = (int)puVar30 - iVar9;
        *(int *)(lVar4 + (uVar23 * -0x30e4432345000000 >> (local_78 & 0x3f)) * 4) = iVar25;
        *(int *)(lVar5 + (uVar23 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar25;
        puVar16 = (ulong *)plVar33[3];
        if (puVar14 < puVar30) {
          ZSTD_safecopyLiterals(puVar16,puVar30,puVar30,puVar14);
        }
        else {
          uVar23 = puVar30[1];
          *puVar16 = *puVar30;
          puVar16[1] = uVar23;
        }
        puVar8 = (undefined4 *)plVar33[1];
        *(undefined2 *)(puVar8 + 1) = 0;
        *puVar8 = 1;
        if ((char *)0xffff < pcVar17 + 1) {
          *(undefined4 *)(plVar33 + 9) = 2;
          *(int *)((long)plVar33 + 0x4c) = (int)((long)puVar8 - *plVar33 >> 3);
        }
        *(short *)((long)puVar8 + 6) = (short)(pcVar17 + 1);
        plVar33[1] = (long)(puVar8 + 2);
        puVar30 = (ulong *)((long)puVar30 + (long)pcVar35);
        local_b8 = puVar30;
        if ((puVar26 < puVar30) ||
           (uVar23 = (ulong)local_50,
           *(int *)((long)puVar30 - uVar23) != (int)*puVar30 || local_50 == 0)) break;
        uVar37 = local_a0;
        local_a0 = local_50;
        local_50 = uVar37;
      } while( true );
    }
  }
  goto LAB_00100f69;
LAB_00103350:
  puVar21 = puVar21 + 1;
  puVar31 = puVar31 + 1;
  if (puVar14 <= puVar21) goto LAB_00102266;
  goto LAB_001019ab;
LAB_001038c8:
  puVar16 = puVar16 + 1;
  puVar21 = puVar21 + 1;
  if (puVar14 <= puVar16) goto LAB_0010343d;
  goto LAB_00103514;
LAB_0010392c:
  puVar31 = puVar31 + 1;
  puVar16 = puVar16 + 1;
  if (local_98 <= puVar31) goto LAB_00103600;
  goto LAB_001038f5;
joined_r0x001019e0:
  if (puVar27 < (ulong *)((long)puVar20 - 7U)) {
    if (*puVar16 == *puVar27) goto LAB_00102853;
    uVar36 = 0;
    for (uVar23 = *puVar16 ^ *puVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar36 = uVar36 + 1;
    }
    pcVar17 = (char *)((long)puVar27 + ((ulong)(uVar36 >> 3) - (long)puVar14));
  }
  else {
LAB_001015b3:
    if ((puVar27 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar16 == (int)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 4);
      puVar16 = (ulong *)((long)puVar16 + 4);
    }
    if ((puVar27 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar16 == (short)*puVar27)) {
      puVar27 = (ulong *)((long)puVar27 + 2);
      puVar16 = (ulong *)((long)puVar16 + 2);
    }
    if (puVar27 < puVar20) {
      puVar27 = (ulong *)((long)puVar27 + (ulong)((char)*puVar16 == (char)*puVar27));
    }
    pcVar17 = (char *)((long)puVar27 - (long)puVar14);
  }
  goto LAB_0010085c;
LAB_00102853:
  puVar27 = puVar27 + 1;
  puVar16 = puVar16 + 1;
  goto joined_r0x001019e0;
LAB_0010085c:
  puVar31 = (ulong *)((long)puVar30 + 1);
  pcVar35 = pcVar17 + 4;
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_0010152a:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_0010152a;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = 1;
  if ((char *)0xffff < pcVar17 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  *(short *)((long)piVar13 + 6) = (short)(pcVar17 + 1);
  goto LAB_001008e0;
joined_r0x0010164c:
  if (puVar16 < (ulong *)((long)puVar20 - 7U)) {
    if (*puVar31 == *puVar16) goto LAB_00103030;
    uVar36 = 0;
    for (uVar23 = *puVar31 ^ *puVar16; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000)
    {
      uVar36 = uVar36 + 1;
    }
    pcVar35 = (char *)((long)puVar16 + ((ulong)(uVar36 >> 3) - (long)puVar14));
  }
  else {
LAB_00101c60:
    if ((puVar16 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar31 == (int)*puVar16)) {
      puVar16 = (ulong *)((long)puVar16 + 4);
      puVar31 = (ulong *)((long)puVar31 + 4);
    }
    if ((puVar16 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar31 == (short)*puVar16)) {
      puVar16 = (ulong *)((long)puVar16 + 2);
      puVar31 = (ulong *)((long)puVar31 + 2);
    }
    if (puVar16 < puVar20) {
      puVar16 = (ulong *)((long)puVar16 + (ulong)((char)*puVar31 == (char)*puVar16));
    }
    pcVar35 = (char *)((long)puVar16 - (long)puVar14);
  }
  goto LAB_00101cb1;
LAB_00103030:
  puVar16 = puVar16 + 1;
  puVar31 = puVar31 + 1;
  goto joined_r0x0010164c;
LAB_00101cb1:
  pcVar35 = pcVar35 + 8;
  uVar36 = iVar25 - (int)puVar27;
  puVar31 = puVar30;
  if ((local_58 < puVar27) && (local_b8 < puVar30)) {
    while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar27 + -1)) {
      puVar31 = (ulong *)((long)puVar31 + -1);
      puVar27 = (ulong *)((long)puVar27 + -1);
      pcVar35 = pcVar35 + 1;
      if ((puVar31 <= local_b8) || (puVar27 <= local_58)) break;
    }
  }
LAB_00101cf8:
  if (uVar28 < 4) {
    *(int *)(lVar5 + uVar15 * 4) = iVar22 - iVar9;
  }
  uVar23 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar20 + -4 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar20 + -4);
LAB_00101dba:
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
    if (0xffff < uVar23) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
    }
  }
  else {
    uVar15 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar15;
    if (0x10 < uVar23) {
      uVar15 = local_b8[3];
      lVar7 = param_2[3];
      *(ulong *)(lVar7 + 0x10) = local_b8[2];
      *(ulong *)(lVar7 + 0x18) = uVar15;
      if (0x20 < (long)uVar23) {
        puVar30 = (ulong *)(lVar7 + 0x20);
        do {
          uVar15 = local_b8[5];
          puVar14 = puVar30 + 4;
          *puVar30 = local_b8[4];
          puVar30[1] = uVar15;
          uVar15 = local_b8[7];
          puVar30[2] = local_b8[6];
          puVar30[3] = uVar15;
          puVar30 = puVar14;
          local_b8 = local_b8 + 4;
        } while (puVar14 < (ulong *)(lVar7 + uVar23));
      }
      goto LAB_00101dba;
    }
    param_2[3] = param_2[3] + uVar23;
    piVar13 = (int *)param_2[1];
  }
  *(short *)(piVar13 + 1) = (short)uVar23;
  *piVar13 = uVar36 + 3;
  if ((char *)0xffff < pcVar35 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar13 - *param_2 >> 3);
  }
  local_50 = local_a0;
  *(short *)((long)piVar13 + 6) = (short)(pcVar35 + -3);
  local_a0 = uVar36;
LAB_001008e0:
  uVar36 = local_a0;
  local_98 = (ulong *)((long)puVar20 - 7);
  puVar14 = puVar20 + -4;
  puVar30 = (ulong *)((long)puVar31 + (long)pcVar35);
  param_2[1] = (long)(piVar13 + 2);
  local_b8 = puVar30;
  if (puVar30 <= puVar26) {
    uVar32 = uVar32 + 2;
    *(uint *)(lVar5 + ((ulong)(*(long *)((ulong)uVar32 + lVar3) * -0x30e44323485a9b9d) >>
                      (local_9c & 0x3f)) * 4) = uVar32;
    *(int *)(lVar5 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e44323485a9b9d) >>
                     (local_9c & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar9;
    *(uint *)(lVar4 + (ulong)((uint)((int)*(long *)((ulong)uVar32 + lVar3) * -0x61c8864f) >>
                             (local_78 & 0x1f)) * 4) = uVar32;
    *(int *)(lVar4 + (ulong)((uint)(*(int *)((long)puVar30 + -1) * -0x61c8864f) >> (local_78 & 0x1f)
                            ) * 4) = ((int)puVar30 + -1) - iVar9;
    uVar23 = (ulong)local_50;
    iVar25 = (int)*puVar30;
    if ((*(int *)((long)puVar30 - uVar23) == iVar25) && (local_50 != 0)) {
      local_a0 = local_50;
      local_50 = uVar36;
      do {
        puVar16 = (ulong *)((long)puVar30 + 4);
        puVar31 = (ulong *)((long)puVar30 + (4 - uVar23));
        puVar27 = puVar16;
        if (puVar16 < local_98) {
          if (*puVar31 == *(ulong *)((long)puVar30 + 4)) {
            puVar27 = (ulong *)((long)puVar30 + 0xc);
            puVar31 = (ulong *)((long)puVar30 + (0xc - uVar23));
            if (puVar27 < local_98) {
LAB_001037d2:
              if (*puVar31 == *puVar27) goto LAB_00103832;
              uVar36 = 0;
              for (uVar23 = *puVar31 ^ *puVar27; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar36 = uVar36 + 1;
              }
              pcVar17 = (char *)((long)puVar27 + ((ulong)(uVar36 >> 3) - (long)puVar16));
              goto LAB_00102d78;
            }
            goto LAB_00103763;
          }
          uVar36 = 0;
          for (uVar23 = *puVar31 ^ *(ulong *)((long)puVar30 + 4); (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar36 = uVar36 + 1;
          }
          pcVar17 = (char *)(ulong)(uVar36 >> 3);
        }
        else {
LAB_00103763:
          if ((puVar27 < (ulong *)((long)puVar20 - 3U)) && ((int)*puVar31 == (int)*puVar27)) {
            puVar27 = (ulong *)((long)puVar27 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar27 < (ulong *)((long)puVar20 - 1U)) && ((short)*puVar31 == (short)*puVar27)) {
            puVar27 = (ulong *)((long)puVar27 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if (puVar27 < puVar20) {
            puVar27 = (ulong *)((long)puVar27 + (ulong)((char)*puVar31 == (char)*puVar27));
          }
          pcVar17 = (char *)((long)puVar27 - (long)puVar16);
        }
LAB_00102d78:
        pcVar35 = pcVar17 + 4;
        iVar22 = (int)puVar30 - iVar9;
        *(int *)(lVar4 + (ulong)((uint)(iVar25 * -0x61c8864f) >> (local_78 & 0x1f)) * 4) = iVar22;
        puVar16 = (ulong *)param_2[3];
        *(int *)(lVar5 + (*puVar30 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar22;
        if (puVar14 < puVar30) {
          ZSTD_safecopyLiterals(puVar16,puVar30,puVar30,puVar14);
        }
        else {
          uVar23 = puVar30[1];
          *puVar16 = *puVar30;
          puVar16[1] = uVar23;
        }
        puVar8 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar8 + 1) = 0;
        *puVar8 = 1;
        if ((char *)0xffff < pcVar17 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((long)puVar8 - *param_2 >> 3);
        }
        *(short *)((long)puVar8 + 6) = (short)(pcVar17 + 1);
        param_2[1] = (long)(puVar8 + 2);
        puVar30 = (ulong *)((long)puVar30 + (long)pcVar35);
        local_b8 = puVar30;
        if (puVar26 < puVar30) break;
        uVar23 = (ulong)local_50;
        iVar25 = (int)*puVar30;
        if (*(int *)((long)puVar30 - uVar23) != iVar25 || local_50 == 0) break;
        uVar36 = local_a0;
        local_a0 = local_50;
        local_50 = uVar36;
      } while( true );
    }
  }
  goto LAB_001006ef;
LAB_0010330d:
  puVar31 = puVar31 + 1;
  puVar21 = puVar21 + 1;
  if (puVar14 <= puVar31) goto LAB_00102100;
  goto LAB_00101925;
LAB_00103970:
  puVar16 = puVar16 + 1;
  puVar21 = puVar21 + 1;
  if (puVar14 <= puVar16) goto LAB_00103372;
  goto LAB_0010358a;
LAB_00103832:
  puVar27 = puVar27 + 1;
  puVar31 = puVar31 + 1;
  if (local_98 <= puVar27) goto LAB_00103763;
  goto LAB_001037d2;
}



long ZSTD_compressBlock_doubleFast_extDict_generic
               (long param_1,long *param_2,uint *param_3,long *param_4,long param_5,int param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  uint uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  ulong uVar29;
  uint uVar30;
  uint local_a8;
  uint local_a4;
  byte local_88;
  byte local_68;
  
  lVar15 = *(long *)(param_1 + 0x70);
  lVar7 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x80);
  iVar11 = (int)lVar7;
  iVar23 = ((int)param_4 - iVar11) + (int)param_5;
  param_5 = (long)param_4 + param_5;
  plVar1 = (long *)(param_5 - 8);
  uVar27 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
  uVar24 = *(uint *)(param_1 + 0x1c);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar18 = iVar23 - uVar27;
  if (iVar23 - uVar24 <= uVar27) {
    uVar18 = uVar24;
  }
  uVar27 = *(uint *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar24 = uVar18;
  }
  local_a4 = *param_3;
  local_a8 = param_3[1];
  if (uVar27 <= uVar24) {
    lVar15 = ZSTD_compressBlock_doubleFast(param_1,param_2,param_3,param_4);
    return lVar15;
  }
  if (param_4 < plVar1) {
    if (uVar27 < uVar24) {
      uVar27 = uVar24;
    }
    plVar2 = (long *)(lVar7 + (ulong)uVar27);
    plVar25 = (long *)((ulong)uVar24 + lVar9);
    lVar3 = lVar9 + (ulong)uVar27;
    cVar12 = (char)*(undefined4 *)(param_1 + 0x104);
    local_68 = 0x40 - cVar12;
    local_88 = 0x40 - (char)*(undefined4 *)(param_1 + 0x108);
    plVar21 = param_4;
    uVar18 = local_a4;
    local_a4 = local_a8;
    do {
      local_a8 = uVar18;
      lVar14 = *plVar21;
      if (param_6 == 6) {
        uVar29 = (ulong)(lVar14 * -0x30e4432340650000) >> (local_68 & 0x3f);
      }
      else if (param_6 == 7) {
        uVar29 = (ulong)(lVar14 * -0x30e44323405a9d00) >> (local_68 & 0x3f);
      }
      else if (param_6 == 5) {
        uVar29 = (ulong)(lVar14 * -0x30e4432345000000) >> (local_68 & 0x3f);
      }
      else {
        uVar29 = (ulong)((uint)((int)*plVar21 * -0x61c8864f) >> (0x20U - cVar12 & 0x1f));
      }
      puVar4 = (uint *)(lVar8 + uVar29 * 4);
      uVar18 = *puVar4;
      lVar16 = lVar9;
      if (uVar27 <= uVar18) {
        lVar16 = lVar7;
      }
      puVar5 = (uint *)(lVar15 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (local_88 & 0x3f)) * 4);
      uVar6 = *puVar5;
      lVar20 = lVar9;
      if (uVar27 <= uVar6) {
        lVar20 = lVar7;
      }
      uVar30 = (int)plVar21 - iVar11;
      *puVar5 = uVar30;
      *puVar4 = uVar30;
      uVar13 = (uVar30 - local_a8) + 1;
      lVar26 = lVar9;
      if (uVar27 <= uVar13) {
        lVar26 = lVar7;
      }
      if ((((uVar27 - 1) - uVar13 < 3) || ((1 - uVar24) + uVar30 < local_a8)) ||
         (*(int *)((long)plVar21 + 1) != *(int *)(lVar26 + (ulong)uVar13))) {
        if ((uVar24 < uVar6) && (plVar22 = (long *)(lVar20 + (ulong)uVar6), *plVar22 == lVar14)) {
          lVar14 = param_5;
          plVar28 = plVar2;
          if (uVar6 < uVar27) {
            lVar14 = lVar3;
            plVar28 = plVar25;
          }
          lVar14 = ZSTD_count_2segments(plVar21 + 1,plVar22 + 1,param_5,lVar14,plVar2);
          lVar14 = lVar14 + 8;
          local_a4 = uVar30 - uVar6;
          for (; ((param_4 < plVar21 && (plVar28 < plVar22)) &&
                 (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar22 + -1)));
              plVar21 = (long *)((long)plVar21 + -1)) {
            plVar22 = (long *)((long)plVar22 + -1);
            lVar14 = lVar14 + 1;
          }
          plVar22 = (long *)param_2[3];
          uVar29 = (long)plVar21 - (long)param_4;
          iVar23 = local_a4 + 3;
          if ((long *)(param_5 - 0x20U) < plVar21) {
LAB_00103e68:
            ZSTD_safecopyLiterals(plVar22,param_4,plVar21,param_5 + -0x20);
          }
          else {
            lVar16 = param_4[1];
            *plVar22 = *param_4;
            plVar22[1] = lVar16;
            if (uVar29 < 0x11) goto LAB_00103cd7;
            lVar16 = param_2[3];
            lVar20 = param_4[3];
            *(long *)(lVar16 + 0x10) = param_4[2];
            *(long *)(lVar16 + 0x18) = lVar20;
            if (0x20 < (long)uVar29) {
              plVar22 = (long *)(lVar16 + 0x20);
              do {
                lVar20 = param_4[5];
                plVar28 = plVar22 + 4;
                *plVar22 = param_4[4];
                plVar22[1] = lVar20;
                lVar20 = param_4[7];
                plVar22[2] = param_4[6];
                plVar22[3] = lVar20;
                plVar22 = plVar28;
                param_4 = param_4 + 4;
              } while (plVar28 < (long *)(lVar16 + uVar29));
            }
          }
LAB_00103e80:
          param_2[3] = param_2[3] + uVar29;
          piVar19 = (int *)param_2[1];
          if (0xffff < uVar29) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar19 - *param_2 >> 3);
          }
LAB_00103cdf:
          *(short *)(piVar19 + 1) = (short)uVar29;
          *piVar19 = iVar23;
          if (0xffff < lVar14 - 3U) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar19 - *param_2 >> 3);
          }
          *(short *)((long)piVar19 + 6) = (short)(lVar14 - 3U);
          goto LAB_00103d12;
        }
        if ((uVar24 < uVar18) &&
           (plVar22 = (long *)(lVar16 + (ulong)uVar18), (int)*plVar21 == (int)*plVar22)) {
          lVar14 = *(long *)((long)plVar21 + 1);
          puVar4 = (uint *)(lVar15 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (local_88 & 0x3f)) *
                                     4);
          local_a4 = *puVar4;
          lVar16 = lVar9;
          if (uVar27 <= local_a4) {
            lVar16 = lVar7;
          }
          *puVar4 = uVar30 + 1;
          if ((uVar24 < local_a4) &&
             (plVar28 = (long *)(lVar16 + (ulong)local_a4), lVar14 == *plVar28)) {
            lVar14 = param_5;
            plVar22 = plVar2;
            if (local_a4 < uVar27) {
              lVar14 = lVar3;
              plVar22 = plVar25;
            }
            lVar16 = (long)plVar21 + 9;
            plVar21 = (long *)((long)plVar21 + 1);
            lVar14 = ZSTD_count_2segments(lVar16,plVar28 + 1,param_5,lVar14,plVar2);
            lVar14 = lVar14 + 8;
            local_a4 = (uVar30 + 1) - local_a4;
            if ((plVar22 < plVar28) && (param_4 < plVar21)) {
              while (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar28 + -1)) {
                plVar21 = (long *)((long)plVar21 + -1);
                plVar28 = (long *)((long)plVar28 + -1);
                lVar14 = lVar14 + 1;
                if ((plVar21 <= param_4) || (plVar28 <= plVar22)) break;
              }
            }
          }
          else {
            lVar14 = param_5;
            plVar28 = plVar2;
            if (uVar18 < uVar27) {
              lVar14 = lVar3;
              plVar28 = plVar25;
            }
            lVar14 = ZSTD_count_2segments
                               ((int *)((long)plVar21 + 4),(int *)((long)plVar22 + 4),param_5,lVar14
                                ,plVar2);
            local_a4 = uVar30 - uVar18;
            lVar14 = lVar14 + 4;
            if ((param_4 < plVar21) && (plVar28 < plVar22)) {
              while (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar22 - 1)) {
                plVar21 = (long *)((long)plVar21 + -1);
                plVar22 = (long *)((long)plVar22 - 1);
                lVar14 = lVar14 + 1;
                if ((plVar21 <= param_4) || (plVar22 <= plVar28)) break;
              }
            }
          }
          plVar22 = (long *)param_2[3];
          uVar29 = (long)plVar21 - (long)param_4;
          iVar23 = local_a4 + 3;
          if ((long *)(param_5 - 0x20U) < plVar21) goto LAB_00103e68;
          lVar16 = param_4[1];
          *plVar22 = *param_4;
          plVar22[1] = lVar16;
          if (0x10 < uVar29) {
            lVar16 = param_2[3];
            lVar20 = param_4[3];
            *(long *)(lVar16 + 0x10) = param_4[2];
            *(long *)(lVar16 + 0x18) = lVar20;
            if (0x20 < (long)uVar29) {
              plVar22 = (long *)(lVar16 + 0x20);
              do {
                lVar20 = param_4[5];
                plVar28 = plVar22 + 4;
                *plVar22 = param_4[4];
                plVar22[1] = lVar20;
                lVar20 = param_4[7];
                plVar22[2] = param_4[6];
                plVar22[3] = lVar20;
                plVar22 = plVar28;
                param_4 = param_4 + 4;
              } while (plVar28 < (long *)(lVar16 + uVar29));
            }
            goto LAB_00103e80;
          }
LAB_00103cd7:
          param_2[3] = param_2[3] + uVar29;
          piVar19 = (int *)param_2[1];
          goto LAB_00103cdf;
        }
        plVar21 = (long *)((long)plVar21 + ((long)plVar21 - (long)param_4 >> 8) + 1);
      }
      else {
        lVar14 = (long)plVar21 + 5;
        lVar16 = lVar3;
        if (uVar27 <= uVar13) {
          lVar16 = param_5;
        }
        plVar21 = (long *)((long)plVar21 + 1);
        lVar16 = ZSTD_count_2segments
                           (lVar14,(int *)(lVar26 + (ulong)uVar13) + 1,param_5,lVar16,plVar2);
        uVar29 = (long)plVar21 - (long)param_4;
        lVar14 = lVar16 + 4;
        plVar22 = (long *)param_2[3];
        if ((long *)(param_5 - 0x20U) < plVar21) {
          ZSTD_safecopyLiterals(plVar22,param_4,plVar21,(long *)(param_5 - 0x20U));
LAB_00103fe8:
          param_2[3] = param_2[3] + uVar29;
          piVar19 = (int *)param_2[1];
          if (0xffff < uVar29) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar19 - *param_2 >> 3);
          }
        }
        else {
          lVar20 = param_4[1];
          *plVar22 = *param_4;
          plVar22[1] = lVar20;
          if (0x10 < uVar29) {
            lVar20 = param_2[3];
            lVar26 = param_4[3];
            *(long *)(lVar20 + 0x10) = param_4[2];
            *(long *)(lVar20 + 0x18) = lVar26;
            if (0x20 < (long)uVar29) {
              plVar22 = (long *)(lVar20 + 0x20);
              do {
                lVar26 = param_4[5];
                plVar28 = plVar22 + 4;
                *plVar22 = param_4[4];
                plVar22[1] = lVar26;
                lVar26 = param_4[7];
                plVar22[2] = param_4[6];
                plVar22[3] = lVar26;
                plVar22 = plVar28;
                param_4 = param_4 + 4;
              } while (plVar28 < (long *)(lVar20 + uVar29));
            }
            goto LAB_00103fe8;
          }
          param_2[3] = param_2[3] + uVar29;
          piVar19 = (int *)param_2[1];
        }
        *(short *)(piVar19 + 1) = (short)uVar29;
        *piVar19 = 1;
        if (0xffff < lVar16 + 1U) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((long)piVar19 - *param_2 >> 3);
        }
        uVar18 = local_a4;
        local_a4 = local_a8;
        *(short *)((long)piVar19 + 6) = (short)(lVar16 + 1U);
        local_a8 = uVar18;
LAB_00103d12:
        uVar18 = local_a8;
        param_2[1] = (long)(piVar19 + 2);
        param_4 = (long *)((long)plVar21 + lVar14);
        if (plVar1 < param_4) goto LAB_00103d29;
        uVar30 = uVar30 + 2;
        lVar14 = *(long *)((ulong)uVar30 + lVar7);
        lVar16 = *(long *)((long)param_4 + -2);
        *(uint *)(lVar15 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (local_88 & 0x3f)) * 4) =
             uVar30;
        *(int *)(lVar15 + ((ulong)(lVar16 * -0x30e44323485a9b9d) >> (local_88 & 0x3f)) * 4) =
             ((int)param_4 + -2) - iVar11;
        if (param_6 == 6) {
          lVar16 = -0x30e4432340650000;
          bVar17 = 0x40 - cVar12;
LAB_001043c5:
          *(uint *)(lVar8 + ((ulong)(lVar14 * lVar16) >> (bVar17 & 0x3f)) * 4) = uVar30;
          uVar29 = (ulong)(*(long *)((long)param_4 + -1) * lVar16) >> (bVar17 & 0x3f);
        }
        else {
          if (param_6 == 7) {
            lVar16 = -0x30e44323405a9d00;
            bVar17 = 0x40 - cVar12;
            goto LAB_001043c5;
          }
          if (param_6 == 5) {
            lVar16 = -0x30e4432345000000;
            bVar17 = 0x40 - cVar12;
            goto LAB_001043c5;
          }
          *(uint *)(lVar8 + (ulong)((uint)((int)*(long *)((ulong)uVar30 + lVar7) * -0x61c8864f) >>
                                   (0x20U - cVar12 & 0x1f)) * 4) = uVar30;
          uVar29 = (ulong)((uint)(*(int *)((long)param_4 + -1) * -0x61c8864f) >>
                          (0x20U - cVar12 & 0x1f));
        }
        *(int *)(lVar8 + uVar29 * 4) = ((int)param_4 + -1) - iVar11;
        local_a8 = local_a4;
        local_a4 = local_a8;
        while( true ) {
          local_a8 = local_a4;
          local_a4 = uVar18;
          iVar23 = (int)param_4 - iVar11;
          uVar18 = iVar23 - local_a4;
          lVar14 = lVar7;
          if (uVar18 < uVar27) {
            lVar14 = lVar9;
          }
          plVar21 = param_4;
          if (((((uVar27 - 1) + local_a4) - iVar23 < 3) || (iVar23 - uVar24 < local_a4)) ||
             ((int)*param_4 != *(int *)((ulong)uVar18 + lVar14))) break;
          lVar16 = lVar3;
          if (uVar27 <= uVar18) {
            lVar16 = param_5;
          }
          lVar16 = ZSTD_count_2segments
                             ((int *)((long)param_4 + 4),(int *)((ulong)uVar18 + lVar14) + 1,param_5
                              ,lVar16,plVar2);
          plVar21 = (long *)param_2[3];
          lVar14 = lVar16 + 4;
          if ((long *)(param_5 + -0x20) < param_4) {
            ZSTD_safecopyLiterals(plVar21,param_4,param_4,(long *)(param_5 + -0x20));
          }
          else {
            lVar20 = param_4[1];
            *plVar21 = *param_4;
            plVar21[1] = lVar20;
          }
          puVar10 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar10 + 1) = 0;
          *puVar10 = 1;
          if (0xffff < lVar16 + 1U) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)puVar10 - *param_2 >> 3);
          }
          *(short *)((long)puVar10 + 6) = (short)(lVar16 + 1U);
          param_2[1] = (long)(puVar10 + 2);
          lVar16 = *param_4;
          if (param_6 == 6) {
            lVar20 = -0x30e4432340650000;
LAB_001044a6:
            uVar29 = (ulong)(lVar20 * lVar16) >> (0x40U - cVar12 & 0x3f);
          }
          else {
            if (param_6 == 7) {
              lVar20 = -0x30e44323405a9d00;
              goto LAB_001044a6;
            }
            if (param_6 == 5) {
              lVar20 = -0x30e4432345000000;
              goto LAB_001044a6;
            }
            uVar29 = (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (0x20U - cVar12 & 0x1f));
          }
          param_4 = (long *)((long)param_4 + lVar14);
          *(int *)(lVar8 + uVar29 * 4) = iVar23;
          *(int *)(lVar15 + ((ulong)(lVar16 * -0x30e44323485a9b9d) >> (local_88 & 0x3f)) * 4) =
               iVar23;
          uVar18 = local_a8;
          if (plVar1 < param_4) goto LAB_00103d29;
        }
      }
      uVar18 = local_a8;
    } while (plVar21 < plVar1);
    uVar24 = local_a8;
    local_a8 = local_a4;
    local_a4 = uVar24;
  }
LAB_00103d29:
  *param_3 = local_a4;
  param_3[1] = local_a8;
  return param_5 - (long)param_4;
}



char * ZSTD_compressBlock_doubleFast_dictMatchState
                 (long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int iVar15;
  char cVar16;
  char cVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  uint uVar23;
  ulong *puVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  ulong *puVar30;
  uint uVar31;
  char *pcVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  uint uVar36;
  ulong *puVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  int local_d4;
  int local_a0;
  byte local_9c;
  byte local_80;
  byte local_7c;
  byte local_74;
  
  iVar28 = *(int *)(param_1 + 0x110);
  lVar8 = *(long *)(param_1 + 0x70);
  lVar9 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x80);
  iVar15 = (int)lVar9;
  iVar25 = (int)param_4;
  iVar42 = (iVar25 - iVar15) + (int)param_5;
  uVar27 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
  uVar23 = *(uint *)(param_1 + 0x18);
  uVar43 = iVar42 - uVar27;
  uVar36 = iVar42 - uVar23;
  cVar16 = (char)*(undefined4 *)(param_1 + 0x108);
  cVar17 = (char)*(undefined4 *)(param_1 + 0x104);
  puVar22 = param_4;
  if (iVar28 == 6) {
    if (uVar36 <= uVar27) {
      uVar43 = uVar23;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar23 = uVar43;
    }
    puVar2 = (ulong *)((long)param_4 + param_5);
    puVar30 = puVar2 + -1;
    local_d4 = *param_3;
    puVar7 = (ulong *)(lVar9 + (ulong)uVar23);
    puVar24 = *(ulong **)(param_1 + 0xf8);
    local_a0 = param_3[1];
    uVar11 = puVar24[1];
    puVar3 = (ulong *)*puVar24;
    uVar12 = puVar24[0x10];
    uVar13 = puVar24[0xe];
    puVar6 = (ulong *)(uVar11 + (uint)puVar24[3]);
    iVar28 = (int)puVar3 - (int)uVar11;
    local_80 = (byte)(int)puVar24[0x21];
    local_74 = (byte)*(undefined4 *)((long)puVar24 + 0x104);
    if (*(int *)(param_1 + 0x128) != 0) {
      uVar29 = 4L << (local_80 & 0x3f);
      uVar38 = 4L << (local_74 & 0x3f);
      if (uVar29 != 0) {
        uVar20 = 0;
        do {
          uVar20 = uVar20 + 0x40;
        } while (uVar20 < uVar29);
      }
      if (uVar38 != 0) {
        uVar29 = 0;
        do {
          uVar29 = uVar29 + 0x40;
        } while (uVar29 < uVar38);
      }
    }
    puVar24 = (ulong *)((long)param_4 +
                       (ulong)((iVar25 - (int)puVar7) + ((int)puVar3 - (int)puVar6) == 0));
    if (puVar24 < puVar30) {
      local_74 = 0x38 - local_74;
      local_80 = 0x38 - local_80;
      local_7c = 0x40 - cVar17;
      local_9c = 0x40 - cVar16;
      do {
        uVar38 = *puVar24;
        iVar25 = (int)puVar24;
        uVar39 = iVar25 - iVar15;
        uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
        uVar20 = uVar38 * -0x30e4432340650000 >> (local_74 & 0x3f);
        uVar43 = *(uint *)(uVar13 + (uVar29 >> 8) * 4);
        uVar27 = *(uint *)(uVar12 + (uVar20 >> 8) * 4);
        puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
        uVar36 = *puVar4;
        puVar5 = (uint *)(lVar10 + (uVar38 * -0x30e4432340650000 >> (local_7c & 0x3f)) * 4);
        uVar40 = *puVar5;
        uVar41 = (1 - local_d4) + uVar39;
        piVar26 = (int *)((ulong)uVar41 + lVar9);
        if (uVar41 < uVar23) {
          piVar26 = (int *)(((iVar28 - uVar23) + uVar41) + uVar11);
        }
        *puVar5 = uVar39;
        *puVar4 = uVar39;
        if (((uVar23 - 1) - uVar41 < 3) || (*piVar26 != *(int *)((long)puVar24 + 1))) {
          puVar35 = puVar24;
          if (uVar23 < uVar36) {
            puVar37 = (ulong *)((ulong)uVar36 + lVar9);
            if (*puVar37 != uVar38) goto LAB_00104fcc;
            puVar19 = puVar24 + 1;
            puVar1 = (ulong *)((long)puVar2 - 7);
            if (puVar19 < puVar1) {
              if (puVar37[1] == puVar24[1]) {
                puVar33 = puVar24 + 2;
                puVar34 = puVar37 + 2;
                if (puVar33 < puVar1) {
LAB_0010772f:
                  if (*puVar34 == *puVar33) goto LAB_00107bb0;
                  uVar43 = 0;
                  for (uVar38 = *puVar34 ^ *puVar33; (uVar38 & 1) == 0;
                      uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                    uVar43 = uVar43 + 1;
                  }
                  pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar43 >> 3) - (long)puVar19));
                  goto LAB_00106db2;
                }
                goto LAB_001075a7;
              }
              uVar43 = 0;
              for (uVar38 = puVar37[1] ^ puVar24[1]; (uVar38 & 1) == 0;
                  uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                uVar43 = uVar43 + 1;
              }
              pcVar32 = (char *)(ulong)(uVar43 >> 3);
            }
            else {
              puVar34 = puVar37 + 1;
              puVar33 = puVar19;
LAB_001075a7:
              if ((puVar33 < (ulong *)((long)puVar2 - 3U)) && ((int)*puVar34 == (int)*puVar33)) {
                puVar33 = (ulong *)((long)puVar33 + 4);
                puVar34 = (ulong *)((long)puVar34 + 4);
              }
              if ((puVar33 < (ulong *)((long)puVar2 - 1U)) && ((short)*puVar34 == (short)*puVar33))
              {
                puVar33 = (ulong *)((long)puVar33 + 2);
                puVar34 = (ulong *)((long)puVar34 + 2);
              }
              if (puVar33 < puVar2) {
                puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar34 == (char)*puVar33));
              }
              pcVar32 = (char *)((long)puVar33 - (long)puVar19);
            }
LAB_00106db2:
            pcVar32 = pcVar32 + 8;
            local_a0 = iVar25 - (int)puVar37;
            if ((puVar7 < puVar37) && (puVar22 < puVar24)) {
              while (puVar35 = puVar24,
                    *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                puVar24 = (ulong *)((long)puVar24 + -1);
                puVar37 = (ulong *)((long)puVar37 + -1);
                pcVar32 = pcVar32 + 1;
                puVar35 = puVar24;
                if ((puVar24 <= puVar22) || (puVar37 <= puVar7)) break;
              }
            }
LAB_00105193:
            uVar38 = (long)puVar35 - (long)puVar22;
            iVar25 = local_a0 + 3;
            puVar24 = (ulong *)param_2[3];
            if (puVar2 + -4 < puVar35) {
              ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar2 + -4);
LAB_001059e8:
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
              if (0xffff < uVar38) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
              }
            }
            else {
              uVar29 = puVar22[1];
              *puVar24 = *puVar22;
              puVar24[1] = uVar29;
              if (0x10 < uVar38) {
                uVar29 = puVar22[3];
                lVar18 = param_2[3];
                *(ulong *)(lVar18 + 0x10) = puVar22[2];
                *(ulong *)(lVar18 + 0x18) = uVar29;
                if (0x20 < (long)uVar38) {
                  puVar24 = (ulong *)(lVar18 + 0x20);
                  do {
                    uVar29 = puVar22[5];
                    puVar37 = puVar24 + 4;
                    *puVar24 = puVar22[4];
                    puVar24[1] = uVar29;
                    uVar29 = puVar22[7];
                    puVar24[2] = puVar22[6];
                    puVar24[3] = uVar29;
                    puVar24 = puVar37;
                    puVar22 = puVar22 + 4;
                  } while (puVar37 < (ulong *)(lVar18 + uVar38));
                }
                goto LAB_001059e8;
              }
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
            }
            *(short *)(piVar26 + 1) = (short)uVar38;
            *piVar26 = iVar25;
            if ((char *)0xffff < pcVar32 + -3) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
            }
            *(short *)((long)piVar26 + 6) = (short)(pcVar32 + -3);
            goto LAB_00105a48;
          }
          if ((char)uVar29 == (char)uVar43) {
            uVar43 = uVar43 >> 8;
            puVar37 = (ulong *)(uVar43 + uVar11);
            if ((puVar6 < puVar37) && (*puVar37 == uVar38)) {
              lVar18 = ZSTD_count_2segments(puVar24 + 1,puVar37 + 1,puVar2,puVar3,puVar7);
              pcVar32 = (char *)(lVar18 + 8);
              local_a0 = ((iVar28 - uVar23) + uVar39) - uVar43;
              if (puVar22 < puVar24) {
                while (puVar35 = puVar24,
                      *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                  puVar24 = (ulong *)((long)puVar24 + -1);
                  puVar37 = (ulong *)((long)puVar37 + -1);
                  pcVar32 = pcVar32 + 1;
                  puVar35 = puVar24;
                  if ((puVar24 <= puVar22) || (puVar37 <= puVar6)) break;
                }
              }
              goto LAB_00105193;
            }
          }
LAB_00104fcc:
          if (uVar23 < uVar40) {
            puVar37 = (ulong *)((ulong)uVar40 + lVar9);
            if ((int)*puVar37 == (int)*puVar24) {
LAB_00105222:
              uVar38 = *(ulong *)((long)puVar24 + 1);
              puVar35 = (ulong *)((long)puVar24 + 1);
              uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
              puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
              uVar43 = *puVar4;
              uVar27 = *(uint *)(uVar13 + (uVar29 >> 8) * 4);
              *puVar4 = uVar39 + 1;
              if (uVar23 < uVar43) {
                puVar19 = (ulong *)(lVar9 + (ulong)uVar43);
                if (*puVar19 == uVar38) {
                  puVar37 = (ulong *)((long)puVar24 + 9);
                  puVar1 = (ulong *)((long)puVar2 - 7);
                  if (puVar37 < puVar1) {
                    if (puVar19[1] == *(ulong *)((long)puVar24 + 9)) {
                      puVar24 = (ulong *)((long)puVar24 + 0x11);
                      puVar33 = puVar19 + 2;
                      if (puVar24 < puVar1) {
LAB_00107c29:
                        if (*puVar33 == *puVar24) goto LAB_00107ce8;
                        uVar43 = 0;
                        for (uVar38 = *puVar33 ^ *puVar24; (uVar38 & 1) == 0;
                            uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                          uVar43 = uVar43 + 1;
                        }
                        pcVar32 = (char *)((long)puVar24 + ((ulong)(uVar43 >> 3) - (long)puVar37));
                        goto LAB_0010796f;
                      }
                      goto LAB_00107a37;
                    }
                    uVar43 = 0;
                    for (uVar38 = puVar19[1] ^ *(ulong *)((long)puVar24 + 9); (uVar38 & 1) == 0;
                        uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                      uVar43 = uVar43 + 1;
                    }
                    pcVar32 = (char *)(ulong)(uVar43 >> 3);
                  }
                  else {
                    puVar33 = puVar19 + 1;
                    puVar24 = puVar37;
LAB_00107a37:
                    if ((puVar24 < (ulong *)((long)puVar2 - 3U)) && ((int)*puVar33 == (int)*puVar24)
                       ) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar33 = (ulong *)((long)puVar33 + 4);
                    }
                    if ((puVar24 < (ulong *)((long)puVar2 - 1U)) &&
                       ((short)*puVar33 == (short)*puVar24)) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar33 = (ulong *)((long)puVar33 + 2);
                    }
                    if (puVar24 < puVar2) {
                      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar33 == (char)*puVar24))
                      ;
                    }
                    pcVar32 = (char *)((long)puVar24 - (long)puVar37);
                  }
LAB_0010796f:
                  pcVar32 = pcVar32 + 8;
                  local_a0 = (int)puVar35 - (int)puVar19;
                  if ((puVar7 < puVar19) && (puVar22 < puVar35)) {
                    while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 - 1)) {
                      puVar35 = (ulong *)((long)puVar35 - 1);
                      puVar19 = (ulong *)((long)puVar19 - 1);
                      pcVar32 = pcVar32 + 1;
                      if ((puVar35 <= puVar22) || (puVar19 <= puVar7)) break;
                    }
                  }
                  goto LAB_00105193;
                }
              }
              else if ((char)uVar29 == (char)uVar27) {
                uVar27 = uVar27 >> 8;
                puVar19 = (ulong *)(uVar11 + uVar27);
                if ((puVar6 < puVar19) && (*puVar19 == uVar38)) {
                  lVar18 = ZSTD_count_2segments
                                     ((char *)((long)puVar24 + 9),puVar19 + 1,puVar2,puVar3,puVar7);
                  pcVar32 = (char *)(lVar18 + 8);
                  local_a0 = ((iVar28 - uVar23) + 1 + uVar39) - uVar27;
                  if (puVar22 < puVar35) {
                    while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 - 1)) {
                      puVar35 = (ulong *)((long)puVar35 - 1);
                      puVar19 = (ulong *)((long)puVar19 - 1);
                      pcVar32 = pcVar32 + 1;
                      if ((puVar35 <= puVar22) || (puVar19 <= puVar6)) break;
                    }
                  }
                  goto LAB_00105193;
                }
              }
              puVar19 = (ulong *)((long)puVar37 + 4);
              puVar35 = (ulong *)((long)puVar24 + 4);
              if (uVar40 < uVar23) {
                lVar18 = ZSTD_count_2segments(puVar35,puVar19,puVar2,puVar3,puVar7);
                pcVar32 = (char *)(lVar18 + 4);
                local_a0 = uVar39 - uVar40;
                puVar35 = puVar24;
                if ((puVar6 < puVar37) && (puVar22 < puVar24)) {
                  while (puVar35 = puVar24,
                        *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                    puVar24 = (ulong *)((long)puVar24 + -1);
                    puVar37 = (ulong *)((long)puVar37 + -1);
                    pcVar32 = pcVar32 + 1;
                    puVar35 = puVar24;
                    if ((puVar24 <= puVar22) || (puVar37 <= puVar6)) break;
                  }
                }
                goto LAB_00105193;
              }
              puVar1 = (ulong *)((long)puVar2 - 7);
              puVar33 = puVar35;
              if (puVar35 < puVar1) {
                if (*(ulong *)((long)puVar37 + 4) == *(ulong *)((long)puVar24 + 4)) {
                  puVar33 = (ulong *)((long)puVar24 + 0xc);
                  puVar19 = (ulong *)((long)puVar37 + 0xc);
                  if (puVar33 < puVar1) {
LAB_00106c42:
                    if (*puVar19 == *puVar33) goto LAB_00106cb8;
                    uVar43 = 0;
                    for (uVar38 = *puVar19 ^ *puVar33; (uVar38 & 1) == 0;
                        uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                      uVar43 = uVar43 + 1;
                    }
                    pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar43 >> 3) - (long)puVar35));
                    goto LAB_001061af;
                  }
                  goto LAB_0010676b;
                }
                uVar43 = 0;
                for (uVar38 = *(ulong *)((long)puVar37 + 4) ^ *(ulong *)((long)puVar24 + 4);
                    (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar43 = uVar43 + 1;
                }
                pcVar32 = (char *)(ulong)(uVar43 >> 3);
              }
              else {
LAB_0010676b:
                if ((puVar33 < (ulong *)((long)puVar2 - 3U)) && ((int)*puVar19 == (int)*puVar33)) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar19 = (ulong *)((long)puVar19 + 4);
                }
                if ((puVar33 < (ulong *)((long)puVar2 - 1U)) && ((short)*puVar19 == (short)*puVar33)
                   ) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar19 = (ulong *)((long)puVar19 + 2);
                }
                if (puVar33 < puVar2) {
                  puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar19 == (char)*puVar33));
                }
                pcVar32 = (char *)((long)puVar33 - (long)puVar35);
              }
LAB_001061af:
              pcVar32 = pcVar32 + 4;
              local_a0 = iVar25 - (int)puVar37;
              puVar35 = puVar24;
              if ((puVar7 < puVar37) && (puVar22 < puVar24)) {
                while (puVar35 = puVar24,
                      *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                  puVar24 = (ulong *)((long)puVar24 + -1);
                  puVar37 = (ulong *)((long)puVar37 + -1);
                  pcVar32 = pcVar32 + 1;
                  puVar35 = puVar24;
                  if ((puVar24 <= puVar22) || (puVar37 <= puVar7)) break;
                }
              }
              goto LAB_00105193;
            }
          }
          else if ((char)uVar20 == (char)uVar27) {
            uVar27 = uVar27 >> 8;
            puVar37 = (ulong *)(uVar27 + uVar11);
            if ((puVar6 < puVar37) && ((int)*puVar37 == (int)*puVar24)) {
              uVar40 = uVar27 + (uVar23 - iVar28);
              goto LAB_00105222;
            }
          }
          puVar24 = (ulong *)((long)puVar24 + ((long)puVar24 - (long)puVar22 >> 8) + 1);
        }
        else {
          puVar35 = (ulong *)((long)puVar24 + 1);
          puVar37 = puVar3;
          if (uVar23 <= uVar41) {
            puVar37 = puVar2;
          }
          lVar18 = ZSTD_count_2segments
                             ((char *)((long)puVar24 + 5),piVar26 + 1,puVar2,puVar37,puVar7);
          pcVar32 = (char *)(lVar18 + 4);
          puVar24 = (ulong *)param_2[3];
          uVar38 = (long)puVar35 - (long)puVar22;
          if (puVar2 + -4 < puVar35) {
            ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar2 + -4);
LAB_00106285:
            param_2[3] = param_2[3] + uVar38;
            piVar26 = (int *)param_2[1];
            if (0xffff < uVar38) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
            }
          }
          else {
            uVar29 = puVar22[1];
            *puVar24 = *puVar22;
            puVar24[1] = uVar29;
            if (0x10 < uVar38) {
              uVar29 = puVar22[3];
              lVar21 = param_2[3];
              *(ulong *)(lVar21 + 0x10) = puVar22[2];
              *(ulong *)(lVar21 + 0x18) = uVar29;
              if (0x20 < (long)uVar38) {
                puVar24 = (ulong *)(lVar21 + 0x20);
                do {
                  uVar29 = puVar22[5];
                  puVar37 = puVar24 + 4;
                  *puVar24 = puVar22[4];
                  puVar24[1] = uVar29;
                  uVar29 = puVar22[7];
                  puVar24[2] = puVar22[6];
                  puVar24[3] = uVar29;
                  puVar24 = puVar37;
                  puVar22 = puVar22 + 4;
                } while (puVar37 < (ulong *)(lVar21 + uVar38));
              }
              goto LAB_00106285;
            }
            param_2[3] = param_2[3] + uVar38;
            piVar26 = (int *)param_2[1];
          }
          *(short *)(piVar26 + 1) = (short)uVar38;
          *piVar26 = 1;
          if (0xffff < lVar18 + 1U) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
          }
          iVar25 = local_a0;
          local_a0 = local_d4;
          *(short *)((long)piVar26 + 6) = (short)(lVar18 + 1U);
          local_d4 = iVar25;
LAB_00105a48:
          iVar25 = local_d4;
          puVar24 = (ulong *)((long)puVar35 + (long)pcVar32);
          param_2[1] = (long)(piVar26 + 2);
          if (puVar30 < puVar24) goto LAB_00105848;
          uVar39 = uVar39 + 2;
          lVar18 = *(long *)(lVar9 + (ulong)uVar39);
          lVar21 = *(long *)((long)puVar24 - 2);
          *(uint *)(lVar8 + ((ulong)(lVar18 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) =
               uVar39;
          *(int *)(lVar8 + ((ulong)(lVar21 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) =
               ((int)puVar24 + -2) - iVar15;
          lVar21 = *(long *)((long)puVar24 - 1);
          *(uint *)(lVar10 + ((ulong)(lVar18 * -0x30e4432340650000) >> (local_7c & 0x3f)) * 4) =
               uVar39;
          *(int *)(lVar10 + ((ulong)(lVar21 * -0x30e4432340650000) >> (local_7c & 0x3f)) * 4) =
               ((int)puVar24 + -1) - iVar15;
          local_d4 = local_a0;
          local_a0 = local_d4;
          while( true ) {
            local_d4 = local_a0;
            local_a0 = iVar25;
            iVar25 = (int)puVar24 - iVar15;
            uVar43 = iVar25 - local_a0;
            piVar26 = (int *)(lVar9 + (ulong)uVar43);
            if (uVar43 < uVar23) {
              piVar26 = (int *)(uVar11 + ((ulong)uVar43 - (ulong)(uVar23 - iVar28)));
            }
            puVar22 = puVar24;
            if ((((uVar23 - 1) + local_a0) - iVar25 < 3) || (*piVar26 != (int)*puVar24)) break;
            puVar22 = puVar3;
            if (uVar23 <= uVar43) {
              puVar22 = puVar2;
            }
            lVar21 = ZSTD_count_2segments
                               ((int *)((long)puVar24 + 4),piVar26 + 1,puVar2,puVar22,puVar7);
            lVar18 = lVar21 + 4;
            puVar22 = (ulong *)param_2[3];
            if (puVar2 + -4 < puVar24) {
              ZSTD_safecopyLiterals(puVar22,puVar24,puVar24,puVar2 + -4);
            }
            else {
              uVar38 = puVar24[1];
              *puVar22 = *puVar24;
              puVar22[1] = uVar38;
            }
            puVar14 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar14 + 1) = 0;
            *puVar14 = 1;
            if (0xffff < lVar21 + 1U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((long)puVar14 - *param_2 >> 3);
            }
            *(short *)((long)puVar14 + 6) = (short)(lVar21 + 1U);
            param_2[1] = (long)(puVar14 + 2);
            uVar38 = *puVar24;
            puVar24 = (ulong *)((long)puVar24 + lVar18);
            *(int *)(lVar10 + (uVar38 * -0x30e4432340650000 >> (local_7c & 0x3f)) * 4) = iVar25;
            *(int *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar25;
            iVar25 = local_d4;
            if (puVar30 < puVar24) goto LAB_00105848;
          }
        }
      } while (puVar24 < puVar30);
    }
LAB_00106b70:
    puVar24 = puVar22;
    iVar28 = local_a0;
    local_a0 = local_d4;
    local_d4 = iVar28;
  }
  else {
    if (iVar28 == 7) {
      if (uVar36 <= uVar27) {
        uVar43 = uVar23;
      }
      puVar7 = (ulong *)((long)param_4 + param_5);
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar23 = uVar43;
      }
      puVar30 = puVar7 + -1;
      local_d4 = *param_3;
      puVar6 = (ulong *)(lVar9 + (ulong)uVar23);
      puVar24 = *(ulong **)(param_1 + 0xf8);
      local_a0 = param_3[1];
      uVar11 = puVar24[1];
      puVar3 = (ulong *)*puVar24;
      uVar12 = puVar24[0xe];
      uVar13 = puVar24[0x10];
      puVar2 = (ulong *)(uVar11 + (uint)puVar24[3]);
      iVar28 = (int)puVar3 - (int)uVar11;
      local_80 = (byte)(int)puVar24[0x21];
      local_74 = (byte)*(undefined4 *)((long)puVar24 + 0x104);
      if (*(int *)(param_1 + 0x128) != 0) {
        uVar29 = 4L << (local_80 & 0x3f);
        uVar38 = 4L << (local_74 & 0x3f);
        if (uVar29 != 0) {
          uVar20 = 0;
          do {
            uVar20 = uVar20 + 0x40;
          } while (uVar20 < uVar29);
        }
        if (uVar38 != 0) {
          uVar29 = 0;
          do {
            uVar29 = uVar29 + 0x40;
          } while (uVar29 < uVar38);
        }
      }
      puVar24 = (ulong *)((long)param_4 +
                         (ulong)((iVar25 - (int)puVar6) + ((int)puVar3 - (int)puVar2) == 0));
      if (puVar24 < puVar30) {
        local_74 = 0x38 - local_74;
        local_80 = 0x38 - local_80;
        local_7c = 0x40 - cVar17;
        local_9c = 0x40 - cVar16;
        do {
          uVar38 = *puVar24;
          iVar25 = (int)puVar24;
          uVar39 = iVar25 - iVar15;
          uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
          uVar20 = uVar38 * -0x30e44323405a9d00 >> (local_74 & 0x3f);
          uVar43 = *(uint *)(uVar12 + (uVar29 >> 8) * 4);
          uVar27 = *(uint *)(uVar13 + (uVar20 >> 8) * 4);
          puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
          uVar36 = *puVar4;
          puVar5 = (uint *)(lVar10 + (uVar38 * -0x30e44323405a9d00 >> (local_7c & 0x3f)) * 4);
          uVar40 = *puVar5;
          uVar41 = (1 - local_d4) + uVar39;
          piVar26 = (int *)((ulong)uVar41 + lVar9);
          if (uVar41 < uVar23) {
            piVar26 = (int *)(((iVar28 - uVar23) + uVar41) + uVar11);
          }
          *puVar5 = uVar39;
          *puVar4 = uVar39;
          if (((uVar23 - 1) - uVar41 < 3) || (*piVar26 != *(int *)((long)puVar24 + 1))) {
            puVar35 = puVar24;
            if (uVar23 < uVar36) {
              puVar37 = (ulong *)((ulong)uVar36 + lVar9);
              if (*puVar37 != uVar38) goto LAB_001049ec;
              puVar19 = puVar24 + 1;
              puVar1 = (ulong *)((long)puVar7 - 7);
              if (puVar19 < puVar1) {
                if (puVar37[1] == puVar24[1]) {
                  puVar33 = puVar24 + 2;
                  puVar34 = puVar37 + 2;
                  if (puVar33 < puVar1) {
LAB_001076f9:
                    if (*puVar34 == *puVar33) goto LAB_00107b90;
                    uVar43 = 0;
                    for (uVar38 = *puVar34 ^ *puVar33; (uVar38 & 1) == 0;
                        uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                      uVar43 = uVar43 + 1;
                    }
                    pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar43 >> 3) - (long)puVar19));
                    goto LAB_00106ed2;
                  }
                  goto LAB_00107544;
                }
                uVar43 = 0;
                for (uVar38 = puVar37[1] ^ puVar24[1]; (uVar38 & 1) == 0;
                    uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar43 = uVar43 + 1;
                }
                pcVar32 = (char *)(ulong)(uVar43 >> 3);
              }
              else {
                puVar34 = puVar37 + 1;
                puVar33 = puVar19;
LAB_00107544:
                if ((puVar33 < (ulong *)((long)puVar7 - 3U)) && ((int)*puVar34 == (int)*puVar33)) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
                if ((puVar33 < (ulong *)((long)puVar7 - 1U)) && ((short)*puVar34 == (short)*puVar33)
                   ) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
                if (puVar33 < puVar7) {
                  puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar34 == (char)*puVar33));
                }
                pcVar32 = (char *)((long)puVar33 - (long)puVar19);
              }
LAB_00106ed2:
              pcVar32 = pcVar32 + 8;
              local_a0 = iVar25 - (int)puVar37;
              if ((puVar22 < puVar24) && (puVar6 < puVar37)) {
                while (puVar35 = puVar24,
                      *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                  puVar24 = (ulong *)((long)puVar24 + -1);
                  puVar37 = (ulong *)((long)puVar37 + -1);
                  pcVar32 = pcVar32 + 1;
                  puVar35 = puVar24;
                  if ((puVar24 <= puVar22) || (puVar37 <= puVar6)) break;
                }
              }
LAB_00104bb3:
              uVar38 = (long)puVar35 - (long)puVar22;
              iVar25 = local_a0 + 3;
              puVar24 = (ulong *)param_2[3];
              if (puVar7 + -4 < puVar35) {
                ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar7 + -4);
LAB_001057c8:
                param_2[3] = param_2[3] + uVar38;
                piVar26 = (int *)param_2[1];
                if (0xffff < uVar38) {
                  *(undefined4 *)(param_2 + 9) = 1;
                  *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
                }
              }
              else {
                uVar29 = puVar22[1];
                *puVar24 = *puVar22;
                puVar24[1] = uVar29;
                if (0x10 < uVar38) {
                  uVar29 = puVar22[3];
                  lVar18 = param_2[3];
                  *(ulong *)(lVar18 + 0x10) = puVar22[2];
                  *(ulong *)(lVar18 + 0x18) = uVar29;
                  if (0x20 < (long)uVar38) {
                    puVar24 = (ulong *)(lVar18 + 0x20);
                    do {
                      uVar29 = puVar22[5];
                      puVar37 = puVar24 + 4;
                      *puVar24 = puVar22[4];
                      puVar24[1] = uVar29;
                      uVar29 = puVar22[7];
                      puVar24[2] = puVar22[6];
                      puVar24[3] = uVar29;
                      puVar24 = puVar37;
                      puVar22 = puVar22 + 4;
                    } while (puVar37 < (ulong *)(lVar18 + uVar38));
                  }
                  goto LAB_001057c8;
                }
                param_2[3] = param_2[3] + uVar38;
                piVar26 = (int *)param_2[1];
              }
              *(short *)(piVar26 + 1) = (short)uVar38;
              *piVar26 = iVar25;
              if ((char *)0xffff < pcVar32 + -3) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
              }
              *(short *)((long)piVar26 + 6) = (short)(pcVar32 + -3);
              goto LAB_00105828;
            }
            if ((char)uVar29 == (char)uVar43) {
              uVar43 = uVar43 >> 8;
              puVar37 = (ulong *)(uVar43 + uVar11);
              if ((puVar2 < puVar37) && (*puVar37 == uVar38)) {
                lVar18 = ZSTD_count_2segments(puVar24 + 1,puVar37 + 1,puVar7,puVar3,puVar6);
                pcVar32 = (char *)(lVar18 + 8);
                local_a0 = ((iVar28 - uVar23) + uVar39) - uVar43;
                if (puVar22 < puVar24) {
                  while (puVar35 = puVar24,
                        *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                    puVar24 = (ulong *)((long)puVar24 + -1);
                    puVar37 = (ulong *)((long)puVar37 + -1);
                    pcVar32 = pcVar32 + 1;
                    puVar35 = puVar24;
                    if ((puVar24 <= puVar22) || (puVar37 <= puVar2)) break;
                  }
                }
                goto LAB_00104bb3;
              }
            }
LAB_001049ec:
            if (uVar23 < uVar40) {
              puVar37 = (ulong *)((ulong)uVar40 + lVar9);
              if ((int)*puVar37 == (int)*puVar24) {
LAB_00104c42:
                uVar38 = *(ulong *)((long)puVar24 + 1);
                puVar35 = (ulong *)((long)puVar24 + 1);
                uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
                puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
                uVar43 = *puVar4;
                uVar27 = *(uint *)(uVar12 + (uVar29 >> 8) * 4);
                *puVar4 = uVar39 + 1;
                if (uVar23 < uVar43) {
                  puVar19 = (ulong *)(lVar9 + (ulong)uVar43);
                  if (*puVar19 == uVar38) {
                    puVar37 = (ulong *)((long)puVar24 + 9);
                    puVar1 = (ulong *)((long)puVar7 - 7);
                    if (puVar37 < puVar1) {
                      if (puVar19[1] == *(ulong *)((long)puVar24 + 9)) {
                        puVar24 = (ulong *)((long)puVar24 + 0x11);
                        puVar33 = puVar19 + 2;
                        if (puVar24 < puVar1) {
LAB_00107bf3:
                          if (*puVar33 == *puVar24) goto LAB_00107cb9;
                          uVar43 = 0;
                          for (uVar38 = *puVar33 ^ *puVar24; (uVar38 & 1) == 0;
                              uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                            uVar43 = uVar43 + 1;
                          }
                          pcVar32 = (char *)((long)puVar24 + ((ulong)(uVar43 >> 3) - (long)puVar37))
                          ;
                          goto LAB_0010784f;
                        }
                        goto LAB_001079d4;
                      }
                      uVar43 = 0;
                      for (uVar38 = puVar19[1] ^ *(ulong *)((long)puVar24 + 9); (uVar38 & 1) == 0;
                          uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                        uVar43 = uVar43 + 1;
                      }
                      pcVar32 = (char *)(ulong)(uVar43 >> 3);
                    }
                    else {
                      puVar33 = puVar19 + 1;
                      puVar24 = puVar37;
LAB_001079d4:
                      if ((puVar24 < (ulong *)((long)puVar7 - 3U)) &&
                         ((int)*puVar33 == (int)*puVar24)) {
                        puVar24 = (ulong *)((long)puVar24 + 4);
                        puVar33 = (ulong *)((long)puVar33 + 4);
                      }
                      if ((puVar24 < (ulong *)((long)puVar7 - 1U)) &&
                         ((short)*puVar33 == (short)*puVar24)) {
                        puVar24 = (ulong *)((long)puVar24 + 2);
                        puVar33 = (ulong *)((long)puVar33 + 2);
                      }
                      if (puVar24 < puVar7) {
                        puVar24 = (ulong *)((long)puVar24 +
                                           (ulong)((char)*puVar33 == (char)*puVar24));
                      }
                      pcVar32 = (char *)((long)puVar24 - (long)puVar37);
                    }
LAB_0010784f:
                    pcVar32 = pcVar32 + 8;
                    local_a0 = (int)puVar35 - (int)puVar19;
                    if ((puVar22 < puVar35) && (puVar6 < puVar19)) {
                      while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 - 1)) {
                        puVar35 = (ulong *)((long)puVar35 - 1);
                        puVar19 = (ulong *)((long)puVar19 - 1);
                        pcVar32 = pcVar32 + 1;
                        if ((puVar35 <= puVar22) || (puVar19 <= puVar6)) break;
                      }
                    }
                    goto LAB_00104bb3;
                  }
                }
                else if ((char)uVar29 == (char)uVar27) {
                  uVar27 = uVar27 >> 8;
                  puVar19 = (ulong *)(uVar11 + uVar27);
                  if ((puVar2 < puVar19) && (*puVar19 == uVar38)) {
                    lVar18 = ZSTD_count_2segments
                                       ((char *)((long)puVar24 + 9),puVar19 + 1,puVar7,puVar3,puVar6
                                       );
                    pcVar32 = (char *)(lVar18 + 8);
                    local_a0 = ((iVar28 - uVar23) + 1 + uVar39) - uVar27;
                    if (puVar22 < puVar35) {
                      while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 - 1)) {
                        puVar35 = (ulong *)((long)puVar35 - 1);
                        puVar19 = (ulong *)((long)puVar19 - 1);
                        pcVar32 = pcVar32 + 1;
                        if ((puVar35 <= puVar22) || (puVar19 <= puVar2)) break;
                      }
                    }
                    goto LAB_00104bb3;
                  }
                }
                puVar19 = (ulong *)((long)puVar37 + 4);
                puVar35 = (ulong *)((long)puVar24 + 4);
                if (uVar40 < uVar23) {
                  lVar18 = ZSTD_count_2segments(puVar35,puVar19,puVar7,puVar3,puVar6);
                  pcVar32 = (char *)(lVar18 + 4);
                  local_a0 = uVar39 - uVar40;
                  puVar35 = puVar24;
                  if ((puVar2 < puVar37) && (puVar22 < puVar24)) {
                    while (puVar35 = puVar24,
                          *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                      puVar24 = (ulong *)((long)puVar24 + -1);
                      puVar37 = (ulong *)((long)puVar37 + -1);
                      pcVar32 = pcVar32 + 1;
                      puVar35 = puVar24;
                      if ((puVar24 <= puVar22) || (puVar37 <= puVar2)) break;
                    }
                  }
                  goto LAB_00104bb3;
                }
                puVar1 = (ulong *)((long)puVar7 - 7);
                puVar33 = puVar35;
                if (puVar35 < puVar1) {
                  if (*(ulong *)((long)puVar37 + 4) == *(ulong *)((long)puVar24 + 4)) {
                    puVar33 = (ulong *)((long)puVar24 + 0xc);
                    puVar19 = (ulong *)((long)puVar37 + 0xc);
                    if (puVar33 < puVar1) {
LAB_00106c02:
                      if (*puVar19 == *puVar33) goto LAB_00106cd0;
                      uVar43 = 0;
                      for (uVar38 = *puVar19 ^ *puVar33; (uVar38 & 1) == 0;
                          uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                        uVar43 = uVar43 + 1;
                      }
                      pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar43 >> 3) - (long)puVar35));
                      goto LAB_00105fff;
                    }
                    goto LAB_00106873;
                  }
                  uVar43 = 0;
                  for (uVar38 = *(ulong *)((long)puVar37 + 4) ^ *(ulong *)((long)puVar24 + 4);
                      (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                    uVar43 = uVar43 + 1;
                  }
                  pcVar32 = (char *)(ulong)(uVar43 >> 3);
                }
                else {
LAB_00106873:
                  if ((puVar33 < (ulong *)((long)puVar7 - 3U)) && ((int)*puVar19 == (int)*puVar33))
                  {
                    puVar33 = (ulong *)((long)puVar33 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                  if ((puVar33 < (ulong *)((long)puVar7 - 1U)) &&
                     ((short)*puVar19 == (short)*puVar33)) {
                    puVar33 = (ulong *)((long)puVar33 + 2);
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                  if (puVar33 < puVar7) {
                    puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar19 == (char)*puVar33));
                  }
                  pcVar32 = (char *)((long)puVar33 - (long)puVar35);
                }
LAB_00105fff:
                pcVar32 = pcVar32 + 4;
                local_a0 = iVar25 - (int)puVar37;
                puVar35 = puVar24;
                if ((puVar6 < puVar37) && (puVar22 < puVar24)) {
                  while (puVar35 = puVar24,
                        *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                    puVar24 = (ulong *)((long)puVar24 + -1);
                    puVar37 = (ulong *)((long)puVar37 + -1);
                    pcVar32 = pcVar32 + 1;
                    puVar35 = puVar24;
                    if ((puVar24 <= puVar22) || (puVar37 <= puVar6)) break;
                  }
                }
                goto LAB_00104bb3;
              }
            }
            else if ((char)uVar20 == (char)uVar27) {
              uVar27 = uVar27 >> 8;
              puVar37 = (ulong *)(uVar27 + uVar11);
              if ((puVar2 < puVar37) && ((int)*puVar37 == (int)*puVar24)) {
                uVar40 = uVar27 + (uVar23 - iVar28);
                goto LAB_00104c42;
              }
            }
            puVar24 = (ulong *)((long)puVar24 + ((long)puVar24 - (long)puVar22 >> 8) + 1);
          }
          else {
            puVar35 = (ulong *)((long)puVar24 + 1);
            puVar37 = puVar3;
            if (uVar23 <= uVar41) {
              puVar37 = puVar7;
            }
            lVar18 = ZSTD_count_2segments
                               ((char *)((long)puVar24 + 5),piVar26 + 1,puVar7,puVar37,puVar6);
            pcVar32 = (char *)(lVar18 + 4);
            puVar24 = (ulong *)param_2[3];
            uVar38 = (long)puVar35 - (long)puVar22;
            if (puVar7 + -4 < puVar35) {
              ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar7 + -4);
LAB_00106568:
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
              if (0xffff < uVar38) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
              }
            }
            else {
              uVar29 = puVar22[1];
              *puVar24 = *puVar22;
              puVar24[1] = uVar29;
              if (0x10 < uVar38) {
                uVar29 = puVar22[3];
                lVar21 = param_2[3];
                *(ulong *)(lVar21 + 0x10) = puVar22[2];
                *(ulong *)(lVar21 + 0x18) = uVar29;
                if (0x20 < (long)uVar38) {
                  puVar24 = (ulong *)(lVar21 + 0x20);
                  do {
                    uVar29 = puVar22[5];
                    puVar37 = puVar24 + 4;
                    *puVar24 = puVar22[4];
                    puVar24[1] = uVar29;
                    uVar29 = puVar22[7];
                    puVar24[2] = puVar22[6];
                    puVar24[3] = uVar29;
                    puVar24 = puVar37;
                    puVar22 = puVar22 + 4;
                  } while (puVar37 < (ulong *)(lVar21 + uVar38));
                }
                goto LAB_00106568;
              }
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
            }
            *(short *)(piVar26 + 1) = (short)uVar38;
            *piVar26 = 1;
            if (0xffff < lVar18 + 1U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
            }
            iVar25 = local_a0;
            local_a0 = local_d4;
            *(short *)((long)piVar26 + 6) = (short)(lVar18 + 1U);
            local_d4 = iVar25;
LAB_00105828:
            iVar25 = local_d4;
            param_2[1] = (long)(piVar26 + 2);
            puVar24 = (ulong *)((long)puVar35 + (long)pcVar32);
            if (puVar30 < puVar24) goto LAB_00105848;
            uVar39 = uVar39 + 2;
            lVar18 = *(long *)(lVar9 + (ulong)uVar39);
            lVar21 = *(long *)((long)puVar24 - 2);
            *(uint *)(lVar8 + ((ulong)(lVar18 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) =
                 uVar39;
            *(int *)(lVar8 + ((ulong)(lVar21 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) =
                 ((int)puVar24 + -2) - iVar15;
            lVar21 = *(long *)((long)puVar24 - 1);
            *(uint *)(lVar10 + ((ulong)(lVar18 * -0x30e44323405a9d00) >> (local_7c & 0x3f)) * 4) =
                 uVar39;
            *(int *)(lVar10 + ((ulong)(lVar21 * -0x30e44323405a9d00) >> (local_7c & 0x3f)) * 4) =
                 ((int)puVar24 + -1) - iVar15;
            local_d4 = local_a0;
            local_a0 = local_d4;
            while( true ) {
              local_d4 = local_a0;
              local_a0 = iVar25;
              iVar25 = (int)puVar24 - iVar15;
              uVar43 = iVar25 - local_a0;
              piVar26 = (int *)(lVar9 + (ulong)uVar43);
              if (uVar43 < uVar23) {
                piVar26 = (int *)(uVar11 + ((ulong)uVar43 - (ulong)(uVar23 - iVar28)));
              }
              puVar22 = puVar24;
              if ((((uVar23 - 1) + local_a0) - iVar25 < 3) || (*piVar26 != (int)*puVar24)) break;
              puVar22 = puVar3;
              if (uVar23 <= uVar43) {
                puVar22 = puVar7;
              }
              lVar21 = ZSTD_count_2segments
                                 ((int *)((long)puVar24 + 4),piVar26 + 1,puVar7,puVar22,puVar6);
              lVar18 = lVar21 + 4;
              puVar22 = (ulong *)param_2[3];
              if (puVar7 + -4 < puVar24) {
                ZSTD_safecopyLiterals(puVar22,puVar24,puVar24,puVar7 + -4);
              }
              else {
                uVar38 = puVar24[1];
                *puVar22 = *puVar24;
                puVar22[1] = uVar38;
              }
              puVar14 = (undefined4 *)param_2[1];
              *(undefined2 *)(puVar14 + 1) = 0;
              *puVar14 = 1;
              if (0xffff < lVar21 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((long)puVar14 - *param_2 >> 3);
              }
              *(short *)((long)puVar14 + 6) = (short)(lVar21 + 1U);
              param_2[1] = (long)(puVar14 + 2);
              uVar38 = *puVar24;
              puVar24 = (ulong *)((long)puVar24 + lVar18);
              *(int *)(lVar10 + (uVar38 * -0x30e44323405a9d00 >> (local_7c & 0x3f)) * 4) = iVar25;
              *(int *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar25;
              iVar25 = local_d4;
              if (puVar30 < puVar24) goto LAB_00105848;
            }
          }
        } while (puVar24 < puVar30);
      }
    }
    else if (iVar28 == 5) {
      if (uVar36 <= uVar27) {
        uVar43 = uVar23;
      }
      puVar7 = (ulong *)((long)param_4 + param_5);
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar23 = uVar43;
      }
      puVar30 = puVar7 + -1;
      local_d4 = *param_3;
      puVar6 = (ulong *)(lVar9 + (ulong)uVar23);
      puVar24 = *(ulong **)(param_1 + 0xf8);
      local_a0 = param_3[1];
      uVar11 = puVar24[1];
      puVar3 = (ulong *)*puVar24;
      uVar12 = puVar24[0xe];
      uVar13 = puVar24[0x10];
      puVar2 = (ulong *)(uVar11 + (uint)puVar24[3]);
      iVar28 = (int)puVar3 - (int)uVar11;
      local_80 = (byte)(int)puVar24[0x21];
      local_74 = (byte)*(undefined4 *)((long)puVar24 + 0x104);
      if (*(int *)(param_1 + 0x128) != 0) {
        uVar29 = 4L << (local_80 & 0x3f);
        uVar38 = 4L << (local_74 & 0x3f);
        if (uVar29 != 0) {
          uVar20 = 0;
          do {
            uVar20 = uVar20 + 0x40;
          } while (uVar20 < uVar29);
        }
        if (uVar38 != 0) {
          uVar29 = 0;
          do {
            uVar29 = uVar29 + 0x40;
          } while (uVar29 < uVar38);
        }
      }
      puVar24 = (ulong *)((long)param_4 +
                         (ulong)((iVar25 - (int)puVar6) + ((int)puVar3 - (int)puVar2) == 0));
      if (puVar24 < puVar30) {
        local_74 = 0x38 - local_74;
        local_80 = 0x38 - local_80;
        local_7c = 0x40 - cVar17;
        local_9c = 0x40 - cVar16;
        do {
          uVar38 = *puVar24;
          iVar25 = (int)puVar24;
          uVar39 = iVar25 - iVar15;
          uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
          uVar20 = uVar38 * -0x30e4432345000000 >> (local_74 & 0x3f);
          uVar43 = *(uint *)(uVar12 + (uVar29 >> 8) * 4);
          uVar27 = *(uint *)(uVar13 + (uVar20 >> 8) * 4);
          puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
          uVar36 = *puVar4;
          puVar5 = (uint *)(lVar10 + (uVar38 * -0x30e4432345000000 >> (local_7c & 0x3f)) * 4);
          uVar40 = *puVar5;
          uVar41 = (1 - local_d4) + uVar39;
          piVar26 = (int *)((ulong)uVar41 + lVar9);
          if (uVar41 < uVar23) {
            piVar26 = (int *)(((iVar28 - uVar23) + uVar41) + uVar11);
          }
          *puVar5 = uVar39;
          *puVar4 = uVar39;
          if (((uVar23 - 1) - uVar41 < 3) || (*piVar26 != *(int *)((long)puVar24 + 1))) {
            puVar35 = puVar24;
            if (uVar23 < uVar36) {
              puVar37 = (ulong *)((ulong)uVar36 + lVar9);
              if (*puVar37 != uVar38) goto LAB_0010545c;
              puVar19 = puVar24 + 1;
              puVar1 = (ulong *)((long)puVar7 - 7);
              if (puVar19 < puVar1) {
                if (puVar37[1] == puVar24[1]) {
                  puVar33 = puVar24 + 2;
                  puVar34 = puVar37 + 2;
                  if (puVar33 < puVar1) {
LAB_00107765:
                    if (*puVar34 == *puVar33) goto LAB_00107b70;
                    uVar43 = 0;
                    for (uVar38 = *puVar34 ^ *puVar33; (uVar38 & 1) == 0;
                        uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                      uVar43 = uVar43 + 1;
                    }
                    pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar43 >> 3) - (long)puVar19));
                    goto LAB_00106e42;
                  }
                  goto LAB_0010760a;
                }
                uVar43 = 0;
                for (uVar38 = puVar37[1] ^ puVar24[1]; (uVar38 & 1) == 0;
                    uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar43 = uVar43 + 1;
                }
                pcVar32 = (char *)(ulong)(uVar43 >> 3);
              }
              else {
                puVar34 = puVar37 + 1;
                puVar33 = puVar19;
LAB_0010760a:
                if ((puVar33 < (ulong *)((long)puVar7 - 3U)) && ((int)*puVar34 == (int)*puVar33)) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
                if ((puVar33 < (ulong *)((long)puVar7 - 1U)) && ((short)*puVar34 == (short)*puVar33)
                   ) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
                if (puVar33 < puVar7) {
                  puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar34 == (char)*puVar33));
                }
                pcVar32 = (char *)((long)puVar33 - (long)puVar19);
              }
LAB_00106e42:
              pcVar32 = pcVar32 + 8;
              local_a0 = iVar25 - (int)puVar37;
              if ((puVar6 < puVar37) && (puVar22 < puVar24)) {
                while (puVar35 = puVar24,
                      *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                  puVar24 = (ulong *)((long)puVar24 + -1);
                  puVar37 = (ulong *)((long)puVar37 + -1);
                  pcVar32 = pcVar32 + 1;
                  puVar35 = puVar24;
                  if ((puVar24 <= puVar22) || (puVar37 <= puVar6)) break;
                }
              }
LAB_00105623:
              uVar38 = (long)puVar35 - (long)puVar22;
              iVar25 = local_a0 + 3;
              puVar24 = (ulong *)param_2[3];
              if (puVar7 + -4 < puVar35) {
                ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar7 + -4);
LAB_00105b48:
                param_2[3] = param_2[3] + uVar38;
                piVar26 = (int *)param_2[1];
                if (0xffff < uVar38) {
                  *(undefined4 *)(param_2 + 9) = 1;
                  *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
                }
              }
              else {
                uVar29 = puVar22[1];
                *puVar24 = *puVar22;
                puVar24[1] = uVar29;
                if (0x10 < uVar38) {
                  uVar29 = puVar22[3];
                  lVar18 = param_2[3];
                  *(ulong *)(lVar18 + 0x10) = puVar22[2];
                  *(ulong *)(lVar18 + 0x18) = uVar29;
                  if (0x20 < (long)uVar38) {
                    puVar24 = (ulong *)(lVar18 + 0x20);
                    do {
                      uVar29 = puVar22[5];
                      puVar37 = puVar24 + 4;
                      *puVar24 = puVar22[4];
                      puVar24[1] = uVar29;
                      uVar29 = puVar22[7];
                      puVar24[2] = puVar22[6];
                      puVar24[3] = uVar29;
                      puVar24 = puVar37;
                      puVar22 = puVar22 + 4;
                    } while (puVar37 < (ulong *)(lVar18 + uVar38));
                  }
                  goto LAB_00105b48;
                }
                param_2[3] = param_2[3] + uVar38;
                piVar26 = (int *)param_2[1];
              }
              *(short *)(piVar26 + 1) = (short)uVar38;
              *piVar26 = iVar25;
              if ((char *)0xffff < pcVar32 + -3) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
              }
              *(short *)((long)piVar26 + 6) = (short)(pcVar32 + -3);
              goto LAB_00105ba8;
            }
            if ((char)uVar29 == (char)uVar43) {
              uVar43 = uVar43 >> 8;
              puVar37 = (ulong *)(uVar43 + uVar11);
              if ((puVar2 < puVar37) && (*puVar37 == uVar38)) {
                lVar18 = ZSTD_count_2segments(puVar24 + 1,puVar37 + 1,puVar7,puVar3,puVar6);
                pcVar32 = (char *)(lVar18 + 8);
                local_a0 = ((iVar28 - uVar23) + uVar39) - uVar43;
                if (puVar22 < puVar24) {
                  while (puVar35 = puVar24,
                        *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                    puVar24 = (ulong *)((long)puVar24 + -1);
                    puVar37 = (ulong *)((long)puVar37 + -1);
                    pcVar32 = pcVar32 + 1;
                    puVar35 = puVar24;
                    if ((puVar24 <= puVar22) || (puVar37 <= puVar2)) break;
                  }
                }
                goto LAB_00105623;
              }
            }
LAB_0010545c:
            if (uVar23 < uVar40) {
              puVar37 = (ulong *)((ulong)uVar40 + lVar9);
              if ((int)*puVar37 == (int)*puVar24) {
LAB_001056b2:
                uVar38 = *(ulong *)((long)puVar24 + 1);
                puVar35 = (ulong *)((long)puVar24 + 1);
                uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
                puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
                uVar43 = *puVar4;
                uVar27 = *(uint *)(uVar12 + (uVar29 >> 8) * 4);
                *puVar4 = uVar39 + 1;
                if (uVar23 < uVar43) {
                  puVar19 = (ulong *)(lVar9 + (ulong)uVar43);
                  if (*puVar19 == uVar38) {
                    puVar37 = (ulong *)((long)puVar24 + 9);
                    puVar1 = (ulong *)((long)puVar7 - 7);
                    if (puVar37 < puVar1) {
                      if (puVar19[1] == *(ulong *)((long)puVar24 + 9)) {
                        puVar24 = (ulong *)((long)puVar24 + 0x11);
                        puVar33 = puVar19 + 2;
                        if (puVar24 < puVar1) {
LAB_00107c98:
                          if (*puVar33 == *puVar24) goto LAB_00107cd0;
                          uVar43 = 0;
                          for (uVar38 = *puVar33 ^ *puVar24; (uVar38 & 1) == 0;
                              uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                            uVar43 = uVar43 + 1;
                          }
                          pcVar32 = (char *)((long)puVar24 + ((ulong)(uVar43 >> 3) - (long)puVar37))
                          ;
                          goto LAB_001078df;
                        }
                        goto LAB_00107afd;
                      }
                      uVar43 = 0;
                      for (uVar38 = puVar19[1] ^ *(ulong *)((long)puVar24 + 9); (uVar38 & 1) == 0;
                          uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                        uVar43 = uVar43 + 1;
                      }
                      pcVar32 = (char *)(ulong)(uVar43 >> 3);
                    }
                    else {
                      puVar33 = puVar19 + 1;
                      puVar24 = puVar37;
LAB_00107afd:
                      if ((puVar24 < (ulong *)((long)puVar7 - 3U)) &&
                         ((int)*puVar33 == (int)*puVar24)) {
                        puVar24 = (ulong *)((long)puVar24 + 4);
                        puVar33 = (ulong *)((long)puVar33 + 4);
                      }
                      if ((puVar24 < (ulong *)((long)puVar7 - 1U)) &&
                         ((short)*puVar33 == (short)*puVar24)) {
                        puVar24 = (ulong *)((long)puVar24 + 2);
                        puVar33 = (ulong *)((long)puVar33 + 2);
                      }
                      if (puVar24 < puVar7) {
                        puVar24 = (ulong *)((long)puVar24 +
                                           (ulong)((char)*puVar33 == (char)*puVar24));
                      }
                      pcVar32 = (char *)((long)puVar24 - (long)puVar37);
                    }
LAB_001078df:
                    pcVar32 = pcVar32 + 8;
                    local_a0 = (int)puVar35 - (int)puVar19;
                    if ((puVar22 < puVar35) && (puVar6 < puVar19)) {
                      while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 - 1)) {
                        puVar35 = (ulong *)((long)puVar35 - 1);
                        puVar19 = (ulong *)((long)puVar19 - 1);
                        pcVar32 = pcVar32 + 1;
                        if ((puVar35 <= puVar22) || (puVar19 <= puVar6)) break;
                      }
                    }
                    goto LAB_00105623;
                  }
                }
                else if ((char)uVar29 == (char)uVar27) {
                  uVar27 = uVar27 >> 8;
                  puVar19 = (ulong *)(uVar11 + uVar27);
                  if ((puVar2 < puVar19) && (*puVar19 == uVar38)) {
                    lVar18 = ZSTD_count_2segments
                                       ((char *)((long)puVar24 + 9),puVar19 + 1,puVar7,puVar3,puVar6
                                       );
                    pcVar32 = (char *)(lVar18 + 8);
                    local_a0 = ((iVar28 - uVar23) + 1 + uVar39) - uVar27;
                    if (puVar22 < puVar35) {
                      while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 - 1)) {
                        puVar35 = (ulong *)((long)puVar35 - 1);
                        puVar19 = (ulong *)((long)puVar19 - 1);
                        pcVar32 = pcVar32 + 1;
                        if ((puVar35 <= puVar22) || (puVar19 <= puVar2)) break;
                      }
                    }
                    goto LAB_00105623;
                  }
                }
                puVar19 = (ulong *)((long)puVar37 + 4);
                puVar35 = (ulong *)((long)puVar24 + 4);
                if (uVar40 < uVar23) {
                  lVar18 = ZSTD_count_2segments(puVar35,puVar19,puVar7,puVar3,puVar6);
                  pcVar32 = (char *)(lVar18 + 4);
                  local_a0 = uVar39 - uVar40;
                  puVar35 = puVar24;
                  if ((puVar2 < puVar37) && (puVar22 < puVar24)) {
                    while (puVar35 = puVar24,
                          *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                      puVar24 = (ulong *)((long)puVar24 + -1);
                      puVar37 = (ulong *)((long)puVar37 + -1);
                      pcVar32 = pcVar32 + 1;
                      puVar35 = puVar24;
                      if ((puVar24 <= puVar22) || (puVar37 <= puVar2)) break;
                    }
                  }
                  goto LAB_00105623;
                }
                puVar1 = (ulong *)((long)puVar7 - 7);
                puVar33 = puVar35;
                if (puVar35 < puVar1) {
                  if (*(ulong *)((long)puVar37 + 4) == *(ulong *)((long)puVar24 + 4)) {
                    puVar33 = (ulong *)((long)puVar24 + 0xc);
                    puVar19 = (ulong *)((long)puVar37 + 0xc);
                    if (puVar33 < puVar1) {
LAB_00106bc2:
                      if (*puVar19 == *puVar33) goto LAB_00106cf0;
                      uVar43 = 0;
                      for (uVar38 = *puVar19 ^ *puVar33; (uVar38 & 1) == 0;
                          uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                        uVar43 = uVar43 + 1;
                      }
                      pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar43 >> 3) - (long)puVar35));
                      goto LAB_0010608f;
                    }
                    goto LAB_001067c3;
                  }
                  uVar43 = 0;
                  for (uVar38 = *(ulong *)((long)puVar37 + 4) ^ *(ulong *)((long)puVar24 + 4);
                      (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                    uVar43 = uVar43 + 1;
                  }
                  pcVar32 = (char *)(ulong)(uVar43 >> 3);
                }
                else {
LAB_001067c3:
                  if ((puVar33 < (ulong *)((long)puVar7 - 3U)) && ((int)*puVar19 == (int)*puVar33))
                  {
                    puVar33 = (ulong *)((long)puVar33 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                  if ((puVar33 < (ulong *)((long)puVar7 - 1U)) &&
                     ((short)*puVar19 == (short)*puVar33)) {
                    puVar33 = (ulong *)((long)puVar33 + 2);
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                  if (puVar33 < puVar7) {
                    puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar19 == (char)*puVar33));
                  }
                  pcVar32 = (char *)((long)puVar33 - (long)puVar35);
                }
LAB_0010608f:
                pcVar32 = pcVar32 + 4;
                local_a0 = iVar25 - (int)puVar37;
                puVar35 = puVar24;
                if ((puVar6 < puVar37) && (puVar22 < puVar24)) {
                  while (puVar35 = puVar24,
                        *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                    puVar24 = (ulong *)((long)puVar24 + -1);
                    puVar37 = (ulong *)((long)puVar37 + -1);
                    pcVar32 = pcVar32 + 1;
                    puVar35 = puVar24;
                    if ((puVar24 <= puVar22) || (puVar37 <= puVar6)) break;
                  }
                }
                goto LAB_00105623;
              }
            }
            else if ((char)uVar20 == (char)uVar27) {
              uVar27 = uVar27 >> 8;
              puVar37 = (ulong *)(uVar27 + uVar11);
              if ((puVar2 < puVar37) && ((int)*puVar37 == (int)*puVar24)) {
                uVar40 = uVar27 + (uVar23 - iVar28);
                goto LAB_001056b2;
              }
            }
            puVar24 = (ulong *)((long)puVar24 + ((long)puVar24 - (long)puVar22 >> 8) + 1);
          }
          else {
            puVar35 = (ulong *)((long)puVar24 + 1);
            puVar37 = puVar3;
            if (uVar23 <= uVar41) {
              puVar37 = puVar7;
            }
            lVar18 = ZSTD_count_2segments
                               ((char *)((long)puVar24 + 5),piVar26 + 1,puVar7,puVar37,puVar6);
            pcVar32 = (char *)(lVar18 + 4);
            puVar24 = (ulong *)param_2[3];
            uVar38 = (long)puVar35 - (long)puVar22;
            if (puVar7 + -4 < puVar35) {
              ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar7 + -4);
LAB_0010646d:
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
              if (0xffff < uVar38) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
              }
            }
            else {
              uVar29 = puVar22[1];
              *puVar24 = *puVar22;
              puVar24[1] = uVar29;
              if (0x10 < uVar38) {
                uVar29 = puVar22[3];
                lVar21 = param_2[3];
                *(ulong *)(lVar21 + 0x10) = puVar22[2];
                *(ulong *)(lVar21 + 0x18) = uVar29;
                if (0x20 < (long)uVar38) {
                  puVar24 = (ulong *)(lVar21 + 0x20);
                  do {
                    uVar29 = puVar22[5];
                    puVar37 = puVar24 + 4;
                    *puVar24 = puVar22[4];
                    puVar24[1] = uVar29;
                    uVar29 = puVar22[7];
                    puVar24[2] = puVar22[6];
                    puVar24[3] = uVar29;
                    puVar24 = puVar37;
                    puVar22 = puVar22 + 4;
                  } while (puVar37 < (ulong *)(lVar21 + uVar38));
                }
                goto LAB_0010646d;
              }
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
            }
            *(short *)(piVar26 + 1) = (short)uVar38;
            *piVar26 = 1;
            if (0xffff < lVar18 + 1U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
            }
            iVar25 = local_a0;
            local_a0 = local_d4;
            *(short *)((long)piVar26 + 6) = (short)(lVar18 + 1U);
            local_d4 = iVar25;
LAB_00105ba8:
            iVar25 = local_d4;
            puVar24 = (ulong *)((long)puVar35 + (long)pcVar32);
            param_2[1] = (long)(piVar26 + 2);
            if (puVar30 < puVar24) goto LAB_00105848;
            uVar39 = uVar39 + 2;
            lVar18 = *(long *)(lVar9 + (ulong)uVar39);
            lVar21 = *(long *)((long)puVar24 - 2);
            *(uint *)(lVar8 + ((ulong)(lVar18 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) =
                 uVar39;
            *(int *)(lVar8 + ((ulong)(lVar21 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) =
                 ((int)puVar24 + -2) - iVar15;
            lVar21 = *(long *)((long)puVar24 - 1);
            *(uint *)(lVar10 + ((ulong)(lVar18 * -0x30e4432345000000) >> (local_7c & 0x3f)) * 4) =
                 uVar39;
            *(int *)(lVar10 + ((ulong)(lVar21 * -0x30e4432345000000) >> (local_7c & 0x3f)) * 4) =
                 ((int)puVar24 + -1) - iVar15;
            local_d4 = local_a0;
            local_a0 = local_d4;
            while( true ) {
              local_d4 = local_a0;
              local_a0 = iVar25;
              iVar25 = (int)puVar24 - iVar15;
              uVar43 = iVar25 - local_a0;
              piVar26 = (int *)(lVar9 + (ulong)uVar43);
              if (uVar43 < uVar23) {
                piVar26 = (int *)(uVar11 + ((ulong)uVar43 - (ulong)(uVar23 - iVar28)));
              }
              puVar22 = puVar24;
              if ((((uVar23 - 1) + local_a0) - iVar25 < 3) || (*piVar26 != (int)*puVar24)) break;
              puVar22 = puVar3;
              if (uVar23 <= uVar43) {
                puVar22 = puVar7;
              }
              lVar21 = ZSTD_count_2segments
                                 ((int *)((long)puVar24 + 4),piVar26 + 1,puVar7,puVar22,puVar6);
              lVar18 = lVar21 + 4;
              puVar22 = (ulong *)param_2[3];
              if (puVar7 + -4 < puVar24) {
                ZSTD_safecopyLiterals(puVar22,puVar24,puVar24,puVar7 + -4);
              }
              else {
                uVar38 = puVar24[1];
                *puVar22 = *puVar24;
                puVar22[1] = uVar38;
              }
              puVar14 = (undefined4 *)param_2[1];
              *(undefined2 *)(puVar14 + 1) = 0;
              *puVar14 = 1;
              if (0xffff < lVar21 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((long)puVar14 - *param_2 >> 3);
              }
              *(short *)((long)puVar14 + 6) = (short)(lVar21 + 1U);
              param_2[1] = (long)(puVar14 + 2);
              uVar38 = *puVar24;
              puVar24 = (ulong *)((long)puVar24 + lVar18);
              *(int *)(lVar10 + (uVar38 * -0x30e4432345000000 >> (local_7c & 0x3f)) * 4) = iVar25;
              *(int *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar25;
              iVar25 = local_d4;
              if (puVar30 < puVar24) goto LAB_00105848;
            }
          }
        } while (puVar24 < puVar30);
      }
    }
    else {
      puVar7 = (ulong *)((long)param_4 + param_5);
      if (uVar36 <= uVar27) {
        uVar43 = uVar23;
      }
      puVar6 = puVar7 + -1;
      if (*(int *)(param_1 + 0x28) != 0) {
        uVar43 = uVar23;
      }
      local_d4 = *param_3;
      local_a0 = param_3[1];
      puVar2 = (ulong *)(lVar9 + (ulong)uVar43);
      puVar24 = *(ulong **)(param_1 + 0xf8);
      uVar11 = puVar24[1];
      puVar30 = (ulong *)*puVar24;
      uVar12 = puVar24[0x10];
      uVar13 = puVar24[0xe];
      puVar3 = (ulong *)(uVar11 + (uint)puVar24[3]);
      iVar28 = (int)puVar30 - (int)uVar11;
      local_80 = (byte)(int)puVar24[0x21];
      local_74 = (byte)*(undefined4 *)((long)puVar24 + 0x104);
      if (*(int *)(param_1 + 0x128) != 0) {
        uVar29 = 4L << (local_80 & 0x3f);
        uVar38 = 4L << (local_74 & 0x3f);
        if (uVar29 != 0) {
          uVar20 = 0;
          do {
            uVar20 = uVar20 + 0x40;
          } while (uVar20 < uVar29);
        }
        if (uVar38 != 0) {
          uVar29 = 0;
          do {
            uVar29 = uVar29 + 0x40;
          } while (uVar29 < uVar38);
        }
      }
      puVar24 = (ulong *)((long)param_4 +
                         (ulong)((iVar25 - (int)puVar2) + ((int)puVar30 - (int)puVar3) == 0));
      if (puVar6 <= puVar24) goto LAB_00106b70;
      local_80 = 0x38 - local_80;
      local_74 = 0x18 - local_74;
      local_9c = 0x40 - cVar16;
      local_7c = 0x20 - cVar17;
      do {
        uVar38 = *puVar24;
        uVar23 = (int)*puVar24 * -0x61c8864f;
        iVar25 = (int)puVar24;
        uVar41 = iVar25 - iVar15;
        uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
        uVar31 = uVar23 >> (local_74 & 0x1f);
        uVar27 = *(uint *)(uVar13 + (uVar29 >> 8) * 4);
        uVar36 = *(uint *)(uVar12 + (ulong)(uVar31 >> 8) * 4);
        puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
        uVar40 = *puVar4;
        puVar5 = (uint *)(lVar10 + (ulong)(uVar23 >> (local_7c & 0x1f)) * 4);
        uVar39 = *puVar5;
        uVar23 = (uVar41 - local_d4) + 1;
        piVar26 = (int *)((ulong)uVar23 + lVar9);
        if (uVar23 < uVar43) {
          piVar26 = (int *)(((iVar28 - uVar43) + uVar23) + uVar11);
        }
        *puVar5 = uVar41;
        *puVar4 = uVar41;
        if (((uVar43 - 1) - uVar23 < 3) || (*piVar26 != *(int *)((long)puVar24 + 1))) {
          puVar35 = puVar24;
          if (uVar43 < uVar40) {
            puVar37 = (ulong *)((ulong)uVar40 + lVar9);
            if (*puVar37 != uVar38) goto LAB_001046ac;
            puVar19 = puVar24 + 1;
            puVar1 = (ulong *)((long)puVar7 - 7);
            if (puVar19 < puVar1) {
              if (puVar37[1] == puVar24[1]) {
                puVar33 = puVar24 + 2;
                puVar34 = puVar37 + 2;
                if (puVar33 < puVar1) {
LAB_001076c3:
                  if (*puVar34 == *puVar33) goto LAB_00107b59;
                  uVar23 = 0;
                  for (uVar38 = *puVar34 ^ *puVar33; (uVar38 & 1) == 0;
                      uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                    uVar23 = uVar23 + 1;
                  }
                  pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar23 >> 3) - (long)puVar19));
                  goto LAB_00106f66;
                }
                goto LAB_001074de;
              }
              uVar23 = 0;
              for (uVar38 = puVar37[1] ^ puVar24[1]; (uVar38 & 1) == 0;
                  uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                uVar23 = uVar23 + 1;
              }
              pcVar32 = (char *)(ulong)(uVar23 >> 3);
            }
            else {
              puVar34 = puVar37 + 1;
              puVar33 = puVar19;
LAB_001074de:
              if ((puVar33 < (ulong *)((long)puVar7 - 3U)) && ((int)*puVar34 == (int)*puVar33)) {
                puVar33 = (ulong *)((long)puVar33 + 4);
                puVar34 = (ulong *)((long)puVar34 + 4);
              }
              if ((puVar33 < (ulong *)((long)puVar7 - 1U)) && ((short)*puVar34 == (short)*puVar33))
              {
                puVar33 = (ulong *)((long)puVar33 + 2);
                puVar34 = (ulong *)((long)puVar34 + 2);
              }
              if (puVar33 < puVar7) {
                puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar34 == (char)*puVar33));
              }
              pcVar32 = (char *)((long)puVar33 - (long)puVar19);
            }
LAB_00106f66:
            pcVar32 = pcVar32 + 8;
            local_a0 = iVar25 - (int)puVar37;
            if ((puVar2 < puVar37) && (puVar22 < puVar24)) {
              while (puVar35 = puVar24,
                    *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                puVar24 = (ulong *)((long)puVar24 + -1);
                puVar37 = (ulong *)((long)puVar37 + -1);
                pcVar32 = pcVar32 + 1;
                puVar35 = puVar24;
                if ((puVar24 <= puVar22) || (puVar37 <= puVar2)) break;
              }
            }
LAB_00104863:
            uVar38 = (long)puVar35 - (long)puVar22;
            iVar25 = local_a0 + 3;
            puVar24 = (ulong *)param_2[3];
            if (puVar7 + -4 < puVar35) {
              ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar7 + -4);
LAB_00105890:
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
              if (0xffff < uVar38) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
              }
            }
            else {
              uVar29 = puVar22[1];
              *puVar24 = *puVar22;
              puVar24[1] = uVar29;
              if (0x10 < uVar38) {
                uVar29 = puVar22[3];
                lVar18 = param_2[3];
                *(ulong *)(lVar18 + 0x10) = puVar22[2];
                *(ulong *)(lVar18 + 0x18) = uVar29;
                if (0x20 < (long)uVar38) {
                  puVar24 = (ulong *)(lVar18 + 0x20);
                  do {
                    uVar29 = puVar22[5];
                    puVar37 = puVar24 + 4;
                    *puVar24 = puVar22[4];
                    puVar24[1] = uVar29;
                    uVar29 = puVar22[7];
                    puVar24[2] = puVar22[6];
                    puVar24[3] = uVar29;
                    puVar24 = puVar37;
                    puVar22 = puVar22 + 4;
                  } while (puVar37 < (ulong *)(lVar18 + uVar38));
                }
                goto LAB_00105890;
              }
              param_2[3] = param_2[3] + uVar38;
              piVar26 = (int *)param_2[1];
            }
            *(short *)(piVar26 + 1) = (short)uVar38;
            *piVar26 = iVar25;
            if ((char *)0xffff < pcVar32 + -3) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
            }
            *(short *)((long)piVar26 + 6) = (short)(pcVar32 + -3);
            goto LAB_001058f0;
          }
          if ((char)uVar29 == (char)uVar27) {
            uVar27 = uVar27 >> 8;
            puVar37 = (ulong *)(uVar27 + uVar11);
            if ((puVar3 < puVar37) && (*puVar37 == uVar38)) {
              lVar18 = ZSTD_count_2segments(puVar24 + 1,puVar37 + 1,puVar7,puVar30,puVar2);
              pcVar32 = (char *)(lVar18 + 8);
              local_a0 = ((iVar28 - uVar43) + uVar41) - uVar27;
              if (puVar22 < puVar24) {
                while (puVar35 = puVar24,
                      *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                  puVar24 = (ulong *)((long)puVar24 + -1);
                  puVar37 = (ulong *)((long)puVar37 + -1);
                  pcVar32 = pcVar32 + 1;
                  puVar35 = puVar24;
                  if ((puVar24 <= puVar22) || (puVar37 <= puVar3)) break;
                }
              }
              goto LAB_00104863;
            }
          }
LAB_001046ac:
          if (uVar43 < uVar39) {
            puVar37 = (ulong *)((ulong)uVar39 + lVar9);
            if ((int)*puVar37 == (int)*puVar24) {
LAB_00104d91:
              uVar38 = *(ulong *)((long)puVar24 + 1);
              puVar35 = (ulong *)((long)puVar24 + 1);
              uVar29 = uVar38 * -0x30e44323485a9b9d >> (local_80 & 0x3f);
              puVar4 = (uint *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4);
              uVar23 = *puVar4;
              uVar27 = *(uint *)(uVar13 + (uVar29 >> 8) * 4);
              *puVar4 = uVar41 + 1;
              if (uVar43 < uVar23) {
                puVar19 = (ulong *)((ulong)uVar23 + lVar9);
                if (*puVar19 == uVar38) {
                  puVar37 = (ulong *)((long)puVar24 + 9);
                  puVar1 = (ulong *)((long)puVar7 - 7);
                  if (puVar37 < puVar1) {
                    if (puVar19[1] == *(ulong *)((long)puVar24 + 9)) {
                      puVar24 = (ulong *)((long)puVar24 + 0x11);
                      puVar33 = puVar19 + 2;
                      if (puVar24 < puVar1) {
LAB_00107c5f:
                        if (*puVar33 == *puVar24) goto LAB_00107d00;
                        uVar23 = 0;
                        for (uVar38 = *puVar33 ^ *puVar24; (uVar38 & 1) == 0;
                            uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                          uVar23 = uVar23 + 1;
                        }
                        pcVar32 = (char *)((long)puVar24 + ((ulong)(uVar23 >> 3) - (long)puVar37));
                        goto LAB_001077c0;
                      }
                      goto LAB_00107a9a;
                    }
                    uVar23 = 0;
                    for (uVar38 = puVar19[1] ^ *(ulong *)((long)puVar24 + 9); (uVar38 & 1) == 0;
                        uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                      uVar23 = uVar23 + 1;
                    }
                    pcVar32 = (char *)(ulong)(uVar23 >> 3);
                  }
                  else {
                    puVar33 = puVar19 + 1;
                    puVar24 = puVar37;
LAB_00107a9a:
                    if ((puVar24 < (ulong *)((long)puVar7 - 3U)) && ((int)*puVar33 == (int)*puVar24)
                       ) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar33 = (ulong *)((long)puVar33 + 4);
                    }
                    if ((puVar24 < (ulong *)((long)puVar7 - 1U)) &&
                       ((short)*puVar33 == (short)*puVar24)) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar33 = (ulong *)((long)puVar33 + 2);
                    }
                    if (puVar24 < puVar7) {
                      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar33 == (char)*puVar24))
                      ;
                    }
                    pcVar32 = (char *)((long)puVar24 - (long)puVar37);
                  }
LAB_001077c0:
                  pcVar32 = pcVar32 + 8;
                  local_a0 = (int)puVar35 - (int)puVar19;
                  if ((puVar2 < puVar19) && (puVar22 < puVar35)) {
                    while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 + -1)) {
                      puVar35 = (ulong *)((long)puVar35 - 1);
                      puVar19 = (ulong *)((long)puVar19 + -1);
                      pcVar32 = pcVar32 + 1;
                      if ((puVar35 <= puVar22) || (puVar19 <= puVar2)) break;
                    }
                  }
                  goto LAB_00104863;
                }
              }
              else if ((char)uVar29 == (char)uVar27) {
                uVar27 = uVar27 >> 8;
                puVar19 = (ulong *)(uVar27 + uVar11);
                if ((puVar3 < puVar19) && (*puVar19 == uVar38)) {
                  lVar18 = ZSTD_count_2segments
                                     ((char *)((long)puVar24 + 9),puVar19 + 1,puVar7,puVar30,puVar2)
                  ;
                  pcVar32 = (char *)(lVar18 + 8);
                  local_a0 = ((iVar28 - uVar43) + 1 + uVar41) - uVar27;
                  if (puVar22 < puVar35) {
                    while (*(char *)((long)puVar35 - 1) == *(char *)((long)puVar19 + -1)) {
                      puVar35 = (ulong *)((long)puVar35 - 1);
                      puVar19 = (ulong *)((long)puVar19 + -1);
                      pcVar32 = pcVar32 + 1;
                      if ((puVar35 <= puVar22) || (puVar19 <= puVar3)) break;
                    }
                  }
                  goto LAB_00104863;
                }
              }
              puVar19 = (ulong *)((long)puVar37 + 4);
              puVar35 = (ulong *)((long)puVar24 + 4);
              if (uVar39 < uVar43) {
                lVar18 = ZSTD_count_2segments(puVar35,puVar19,puVar7,puVar30,puVar2);
                pcVar32 = (char *)(lVar18 + 4);
                local_a0 = uVar41 - uVar39;
                puVar35 = puVar24;
                if ((puVar3 < puVar37) && (puVar22 < puVar24)) {
                  while (puVar35 = puVar24,
                        *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                    puVar24 = (ulong *)((long)puVar24 + -1);
                    puVar37 = (ulong *)((long)puVar37 + -1);
                    pcVar32 = pcVar32 + 1;
                    puVar35 = puVar24;
                    if ((puVar24 <= puVar22) || (puVar37 <= puVar3)) break;
                  }
                }
                goto LAB_00104863;
              }
              puVar1 = (ulong *)((long)puVar7 - 7);
              puVar33 = puVar35;
              if (puVar35 < puVar1) {
                if (*(ulong *)((long)puVar37 + 4) == *(ulong *)((long)puVar24 + 4)) {
                  puVar33 = (ulong *)((long)puVar24 + 0xc);
                  puVar19 = (ulong *)((long)puVar37 + 0xc);
                  if (puVar33 < puVar1) {
LAB_00106c79:
                    if (*puVar19 == *puVar33) goto LAB_00106ca0;
                    uVar23 = 0;
                    for (uVar38 = *puVar19 ^ *puVar33; (uVar38 & 1) == 0;
                        uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                      uVar23 = uVar23 + 1;
                    }
                    pcVar32 = (char *)((long)puVar33 + ((ulong)(uVar23 >> 3) - (long)puVar35));
                    goto LAB_00106122;
                  }
                  goto LAB_0010681b;
                }
                uVar23 = 0;
                for (uVar38 = *(ulong *)((long)puVar37 + 4) ^ *(ulong *)((long)puVar24 + 4);
                    (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                pcVar32 = (char *)(ulong)(uVar23 >> 3);
              }
              else {
LAB_0010681b:
                if ((puVar33 < (ulong *)((long)puVar7 - 3U)) && ((int)*puVar19 == (int)*puVar33)) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar19 = (ulong *)((long)puVar19 + 4);
                }
                if ((puVar33 < (ulong *)((long)puVar7 - 1U)) && ((short)*puVar19 == (short)*puVar33)
                   ) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar19 = (ulong *)((long)puVar19 + 2);
                }
                if (puVar33 < puVar7) {
                  puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar19 == (char)*puVar33));
                }
                pcVar32 = (char *)((long)puVar33 - (long)puVar35);
              }
LAB_00106122:
              pcVar32 = pcVar32 + 4;
              local_a0 = iVar25 - (int)puVar37;
              puVar35 = puVar24;
              if ((puVar2 < puVar37) && (puVar22 < puVar24)) {
                while (puVar35 = puVar24,
                      *(char *)((long)puVar24 + -1) == *(char *)((long)puVar37 + -1)) {
                  puVar24 = (ulong *)((long)puVar24 + -1);
                  puVar37 = (ulong *)((long)puVar37 + -1);
                  pcVar32 = pcVar32 + 1;
                  puVar35 = puVar24;
                  if ((puVar24 <= puVar22) || (puVar37 <= puVar2)) break;
                }
              }
              goto LAB_00104863;
            }
          }
          else if ((char)uVar31 == (char)uVar36) {
            uVar36 = uVar36 >> 8;
            puVar37 = (ulong *)(uVar36 + uVar11);
            if ((puVar3 < puVar37) && ((int)*puVar37 == (int)*puVar24)) {
              uVar39 = uVar36 + (uVar43 - iVar28);
              goto LAB_00104d91;
            }
          }
          puVar24 = (ulong *)((long)puVar24 + ((long)puVar24 - (long)puVar22 >> 8) + 1);
        }
        else {
          puVar35 = (ulong *)((long)puVar24 + 1);
          puVar37 = puVar30;
          if (uVar43 <= uVar23) {
            puVar37 = puVar7;
          }
          lVar18 = ZSTD_count_2segments
                             ((char *)((long)puVar24 + 5),piVar26 + 1,puVar7,puVar37,puVar2);
          pcVar32 = (char *)(lVar18 + 4);
          puVar24 = (ulong *)param_2[3];
          uVar38 = (long)puVar35 - (long)puVar22;
          if (puVar7 + -4 < puVar35) {
            ZSTD_safecopyLiterals(puVar24,puVar22,puVar35,puVar7 + -4);
LAB_00106378:
            param_2[3] = param_2[3] + uVar38;
            piVar26 = (int *)param_2[1];
            if (0xffff < uVar38) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
            }
          }
          else {
            uVar29 = puVar22[1];
            *puVar24 = *puVar22;
            puVar24[1] = uVar29;
            if (0x10 < uVar38) {
              uVar29 = puVar22[3];
              lVar21 = param_2[3];
              *(ulong *)(lVar21 + 0x10) = puVar22[2];
              *(ulong *)(lVar21 + 0x18) = uVar29;
              if (0x20 < (long)uVar38) {
                puVar24 = (ulong *)(lVar21 + 0x20);
                do {
                  uVar29 = puVar22[5];
                  puVar37 = puVar24 + 4;
                  *puVar24 = puVar22[4];
                  puVar24[1] = uVar29;
                  uVar29 = puVar22[7];
                  puVar24[2] = puVar22[6];
                  puVar24[3] = uVar29;
                  puVar24 = puVar37;
                  puVar22 = puVar22 + 4;
                } while (puVar37 < (ulong *)(lVar21 + uVar38));
              }
              goto LAB_00106378;
            }
            param_2[3] = param_2[3] + uVar38;
            piVar26 = (int *)param_2[1];
          }
          *(short *)(piVar26 + 1) = (short)uVar38;
          *piVar26 = 1;
          if (0xffff < lVar18 + 1U) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar26 - *param_2 >> 3);
          }
          iVar25 = local_a0;
          local_a0 = local_d4;
          *(short *)((long)piVar26 + 6) = (short)(lVar18 + 1U);
          local_d4 = iVar25;
LAB_001058f0:
          iVar25 = local_d4;
          puVar24 = (ulong *)((long)puVar35 + (long)pcVar32);
          param_2[1] = (long)(piVar26 + 2);
          if (puVar6 < puVar24) goto LAB_00105848;
          uVar41 = uVar41 + 2;
          lVar18 = *(long *)((long)puVar24 - 2);
          *(uint *)(lVar8 + ((ulong)(*(long *)((ulong)uVar41 + lVar9) * -0x30e44323485a9b9d) >>
                            (local_9c & 0x3f)) * 4) = uVar41;
          *(int *)(lVar8 + ((ulong)(lVar18 * -0x30e44323485a9b9d) >> (local_9c & 0x3f)) * 4) =
               ((int)puVar24 + -2) - iVar15;
          *(uint *)(lVar10 + (ulong)((uint)((int)*(long *)((ulong)uVar41 + lVar9) * -0x61c8864f) >>
                                    (local_7c & 0x1f)) * 4) = uVar41;
          *(int *)(lVar10 + (ulong)((uint)(*(int *)((long)puVar24 - 1) * -0x61c8864f) >>
                                   (local_7c & 0x1f)) * 4) = ((int)puVar24 + -1) - iVar15;
          local_d4 = local_a0;
          local_a0 = local_d4;
          while( true ) {
            local_d4 = local_a0;
            local_a0 = iVar25;
            iVar25 = (int)puVar24 - iVar15;
            uVar23 = iVar25 - local_a0;
            piVar26 = (int *)(lVar9 + (ulong)uVar23);
            if (uVar23 < uVar43) {
              piVar26 = (int *)(uVar11 + ((ulong)uVar23 - (ulong)(uVar43 - iVar28)));
            }
            puVar22 = puVar24;
            if ((((uVar43 - 1) + local_a0) - iVar25 < 3) || (*piVar26 != (int)*puVar24)) break;
            puVar22 = puVar30;
            if (uVar43 <= uVar23) {
              puVar22 = puVar7;
            }
            lVar21 = ZSTD_count_2segments
                               ((int *)((long)puVar24 + 4),piVar26 + 1,puVar7,puVar22,puVar2);
            lVar18 = lVar21 + 4;
            puVar22 = (ulong *)param_2[3];
            if (puVar7 + -4 < puVar24) {
              ZSTD_safecopyLiterals(puVar22,puVar24,puVar24,puVar7 + -4);
            }
            else {
              uVar38 = puVar24[1];
              *puVar22 = *puVar24;
              puVar22[1] = uVar38;
            }
            puVar14 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar14 + 1) = 0;
            *puVar14 = 1;
            if (0xffff < lVar21 + 1U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((long)puVar14 - *param_2 >> 3);
            }
            *(short *)((long)puVar14 + 6) = (short)(lVar21 + 1U);
            param_2[1] = (long)(puVar14 + 2);
            *(int *)(lVar10 + (ulong)((uint)((int)*puVar24 * -0x61c8864f) >> (local_7c & 0x1f)) * 4)
                 = iVar25;
            uVar38 = *puVar24;
            puVar24 = (ulong *)((long)puVar24 + lVar18);
            *(int *)(lVar8 + (uVar38 * -0x30e44323485a9b9d >> (local_9c & 0x3f)) * 4) = iVar25;
            iVar25 = local_d4;
            if (puVar6 < puVar24) goto LAB_00105848;
          }
        }
      } while (puVar24 < puVar6);
    }
    puVar24 = puVar22;
    iVar28 = local_a0;
    local_a0 = local_d4;
    local_d4 = iVar28;
  }
LAB_00105848:
  *param_3 = local_a0;
  param_3[1] = local_d4;
  return (char *)((long)param_4 + (param_5 - (long)puVar24));
LAB_00107bb0:
  puVar33 = puVar33 + 1;
  puVar34 = puVar34 + 1;
  if (puVar1 <= puVar33) goto LAB_001075a7;
  goto LAB_0010772f;
LAB_00107ce8:
  puVar24 = puVar24 + 1;
  puVar33 = puVar33 + 1;
  if (puVar1 <= puVar24) goto LAB_00107a37;
  goto LAB_00107c29;
LAB_00106cb8:
  puVar33 = puVar33 + 1;
  puVar19 = puVar19 + 1;
  if (puVar1 <= puVar33) goto LAB_0010676b;
  goto LAB_00106c42;
LAB_00107b90:
  puVar33 = puVar33 + 1;
  puVar34 = puVar34 + 1;
  if (puVar1 <= puVar33) goto LAB_00107544;
  goto LAB_001076f9;
LAB_00107cb9:
  puVar24 = puVar24 + 1;
  puVar33 = puVar33 + 1;
  if (puVar1 <= puVar24) goto LAB_001079d4;
  goto LAB_00107bf3;
LAB_00106cd0:
  puVar33 = puVar33 + 1;
  puVar19 = puVar19 + 1;
  if (puVar1 <= puVar33) goto LAB_00106873;
  goto LAB_00106c02;
LAB_00107b59:
  puVar33 = puVar33 + 1;
  puVar34 = puVar34 + 1;
  if (puVar1 <= puVar33) goto LAB_001074de;
  goto LAB_001076c3;
LAB_00107d00:
  puVar24 = puVar24 + 1;
  puVar33 = puVar33 + 1;
  if (puVar1 <= puVar24) goto LAB_00107a9a;
  goto LAB_00107c5f;
LAB_00106ca0:
  puVar33 = puVar33 + 1;
  puVar19 = puVar19 + 1;
  if (puVar1 <= puVar33) goto LAB_0010681b;
  goto LAB_00106c79;
LAB_00107b70:
  puVar33 = puVar33 + 1;
  puVar34 = puVar34 + 1;
  if (puVar1 <= puVar33) goto LAB_0010760a;
  goto LAB_00107765;
LAB_00107cd0:
  puVar24 = puVar24 + 1;
  puVar33 = puVar33 + 1;
  if (puVar1 <= puVar24) goto LAB_00107afd;
  goto LAB_00107c98;
LAB_00106cf0:
  puVar33 = puVar33 + 1;
  puVar19 = puVar19 + 1;
  if (puVar1 <= puVar33) goto LAB_001067c3;
  goto LAB_00106bc2;
}



void ZSTD_compressBlock_doubleFast_extDict(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 6) {
    ZSTD_compressBlock_doubleFast_extDict_generic();
    return;
  }
  if (iVar1 != 7) {
    if (iVar1 != 5) {
      ZSTD_compressBlock_doubleFast_extDict_generic();
      return;
    }
    ZSTD_compressBlock_doubleFast_extDict_generic();
    return;
  }
  ZSTD_compressBlock_doubleFast_extDict_generic();
  return;
}



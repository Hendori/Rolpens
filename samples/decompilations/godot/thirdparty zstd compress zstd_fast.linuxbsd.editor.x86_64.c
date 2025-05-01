
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



long ZSTD_compressBlock_fast_noDict_4_1
               (long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  ulong *puVar12;
  ulong *puVar13;
  char *pcVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  uint local_88;
  uint local_84;
  ulong *local_58;
  uint local_50;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar17 = *(uint *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x70);
  uVar29 = param_3[1];
  uVar23 = (ulong)(*(int *)(param_1 + 0x114) + 1 + (uint)(*(int *)(param_1 + 0x114) == 0));
  iVar6 = (int)lVar3;
  iVar16 = ((int)param_4 - iVar6) + (int)param_5;
  uVar22 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
  uVar30 = iVar16 - uVar22;
  if (iVar16 - uVar17 <= uVar22) {
    uVar30 = uVar17;
  }
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar18 = puVar1 + -1;
  uVar8 = *param_3;
  if (*(int *)(param_1 + 0x28) == 0) {
    local_58 = (ulong *)(lVar3 + (ulong)uVar30);
    puVar27 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
    uVar17 = ((int)puVar27 - iVar6) - uVar17;
    if (uVar22 < uVar17) {
      uVar17 = uVar22;
    }
  }
  else {
    local_58 = (ulong *)(lVar3 + (ulong)uVar17);
    puVar27 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
    uVar30 = uVar17;
    uVar17 = ((int)puVar27 - iVar6) - uVar17;
  }
  local_50 = 0;
  uVar22 = uVar29;
  if (uVar29 <= uVar17) {
    uVar22 = 0;
    local_50 = uVar29;
  }
  puVar24 = (ulong *)(uVar23 + (long)puVar27);
  puVar12 = (ulong *)((long)puVar24 + 1);
  uVar29 = uVar22;
  local_84 = uVar8;
  if (uVar17 < uVar8) {
    if (puVar18 <= puVar12) goto LAB_0010053b;
    local_84 = 0;
    bVar7 = true;
    uVar17 = uVar8;
LAB_00100398:
    bVar15 = 0x20 - (char)*(undefined4 *)(param_1 + 0x108);
    puVar9 = (ulong *)((long)puVar1 - 7);
LAB_001003cc:
    puVar21 = puVar27 + 0x10;
    uVar19 = (ulong)((uint)*puVar27 * -0x61c8864f >> (bVar15 & 0x1f));
    uVar28 = (uint)(*(int *)((long)puVar27 + 1) * -0x61c8864f) >> (bVar15 & 0x1f);
    uVar8 = *(uint *)(lVar4 + uVar19 * 4);
    bVar33 = local_84 != 0;
    puVar13 = (ulong *)((long)puVar27 + 1);
    uVar10 = uVar23;
    do {
      puVar26 = puVar12;
      puVar25 = puVar24;
      uVar31 = (int)puVar27 - iVar6;
      puVar2 = (uint *)((long)puVar25 - (ulong)local_84);
      uVar32 = *puVar2;
      *(uint *)(lVar4 + uVar19 * 4) = uVar31;
      uVar19 = *puVar25;
      if (((uint)uVar19 == uVar32) && (bVar33)) {
        iVar16 = 1;
        uVar10 = (ulong)(*(char *)((long)puVar25 - 1) == *(char *)((long)puVar2 + -1));
        *(int *)(lVar4 + (ulong)uVar28 * 4) = (int)puVar13 - iVar6;
        puVar13 = (ulong *)((long)puVar25 - uVar10);
        puVar27 = (ulong *)((long)puVar2 - uVar10);
        lVar20 = uVar10 + 4;
        local_88 = uVar31;
        goto LAB_001005ca;
      }
      uVar32 = (uint)*puVar27 ^ 1;
      if (uVar30 <= uVar8) {
        uVar32 = *(uint *)(lVar3 + (ulong)uVar8);
      }
      puVar2 = (uint *)(lVar4 + (ulong)uVar28 * 4);
      local_88 = (int)puVar13 - iVar6;
      if (uVar32 == (uint)*puVar27) {
        *puVar2 = local_88;
        puVar13 = puVar27;
        local_88 = uVar31;
        goto LAB_00100798;
      }
      uVar8 = *puVar2;
      *puVar2 = local_88;
      uVar19 = (ulong)((uint)uVar19 * -0x61c8864f >> (bVar15 & 0x1f));
      if (uVar8 < uVar30) {
        if (((uint)*puVar13 ^ 1) == (uint)*puVar13) goto LAB_001004f1;
      }
      else if (*(uint *)(lVar3 + (ulong)uVar8) == (uint)*puVar13) goto LAB_001004f1;
      puVar24 = (ulong *)((long)puVar25 + uVar10);
      uVar8 = *(uint *)(lVar4 + uVar19 * 4);
      uVar28 = (uint)*puVar26 * -0x61c8864f >> (bVar15 & 0x1f);
      puVar12 = (ulong *)((long)puVar26 + uVar10);
      if (puVar21 <= puVar24) {
        uVar10 = uVar10 + 1;
        puVar21 = puVar21 + 0x10;
      }
      puVar13 = puVar26;
      puVar27 = puVar25;
      if (puVar18 <= puVar12) goto LAB_00100528;
    } while( true );
  }
  bVar7 = false;
  uVar17 = 0;
  if (puVar12 < puVar18) goto LAB_00100398;
  bVar33 = uVar8 != 0;
LAB_0010058e:
  if (bVar33) goto LAB_0010053b;
  goto LAB_00100533;
LAB_001004f1:
  if (uVar10 < 5) {
    *(int *)(lVar4 + uVar19 * 4) = (int)puVar25 - iVar6;
  }
LAB_00100798:
  puVar27 = (ulong *)((ulong)uVar8 + lVar3);
  uVar8 = (int)puVar13 - (int)puVar27;
  iVar16 = uVar8 + 3;
  if ((local_58 < puVar27) && (lVar20 = 4, param_4 < puVar13)) {
    while (*(char *)((long)puVar13 + -1) == *(char *)((long)puVar27 + -1)) {
      puVar13 = (ulong *)((long)puVar13 + -1);
      puVar27 = (ulong *)((long)puVar27 + -1);
      lVar20 = lVar20 + 1;
      if ((puVar13 <= param_4) || (puVar27 <= local_58)) break;
    }
    local_50 = local_84;
    local_84 = uVar8;
  }
  else {
    local_50 = local_84;
    lVar20 = 4;
    local_84 = uVar8;
  }
LAB_001005ca:
  puVar24 = (ulong *)((long)puVar13 + lVar20);
  puVar27 = (ulong *)((long)puVar27 + lVar20);
  puVar12 = puVar24;
  if (puVar24 < puVar9) {
    if (*puVar27 == *puVar24) {
      puVar12 = puVar24 + 1;
      puVar27 = puVar27 + 1;
      if (puVar12 < puVar9) {
LAB_00100816:
        if (*puVar27 == *puVar12) goto LAB_001009d3;
        uVar8 = 0;
        for (uVar10 = *puVar27 ^ *puVar12; (uVar10 & 1) == 0;
            uVar10 = uVar10 >> 1 | 0x8000000000000000) {
          uVar8 = uVar8 + 1;
        }
        pcVar14 = (char *)((long)puVar12 + ((ulong)(uVar8 >> 3) - (long)puVar24));
        goto LAB_001005f9;
      }
      goto LAB_0010073b;
    }
    uVar8 = 0;
    for (uVar10 = *puVar27 ^ *puVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000)
    {
      uVar8 = uVar8 + 1;
    }
    pcVar14 = (char *)(ulong)(uVar8 >> 3);
  }
  else {
LAB_0010073b:
    if ((puVar12 < (ulong *)((long)puVar1 - 3U)) && ((uint)*puVar27 == (uint)*puVar12)) {
      puVar12 = (ulong *)((long)puVar12 + 4);
      puVar27 = (ulong *)((long)puVar27 + 4);
    }
    if ((puVar12 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar27 == (short)*puVar12)) {
      puVar12 = (ulong *)((long)puVar12 + 2);
      puVar27 = (ulong *)((long)puVar27 + 2);
    }
    if (puVar12 < puVar1) {
      puVar12 = (ulong *)((long)puVar12 + (ulong)((char)*puVar27 == (char)*puVar12));
    }
    pcVar14 = (char *)((long)puVar12 - (long)puVar24);
  }
LAB_001005f9:
  pcVar14 = pcVar14 + lVar20;
  uVar10 = (long)puVar13 - (long)param_4;
  puVar12 = puVar1 + -4;
  puVar27 = (ulong *)param_2[3];
  if (puVar12 < puVar13) {
    ZSTD_safecopyLiterals(puVar27,param_4,puVar13,puVar12);
  }
  else {
    uVar19 = param_4[1];
    *puVar27 = *param_4;
    puVar27[1] = uVar19;
    if (uVar10 < 0x11) {
      param_2[3] = param_2[3] + uVar10;
      piVar11 = (int *)param_2[1];
      goto LAB_00100638;
    }
    uVar19 = param_4[3];
    lVar20 = param_2[3];
    *(ulong *)(lVar20 + 0x10) = param_4[2];
    *(ulong *)(lVar20 + 0x18) = uVar19;
    if (0x20 < (long)uVar10) {
      puVar27 = (ulong *)(lVar20 + 0x20);
      do {
        uVar19 = param_4[5];
        puVar24 = puVar27 + 4;
        *puVar27 = param_4[4];
        puVar27[1] = uVar19;
        uVar19 = param_4[7];
        puVar27[2] = param_4[6];
        puVar27[3] = uVar19;
        puVar27 = puVar24;
        param_4 = param_4 + 4;
      } while (puVar24 < (ulong *)(lVar20 + uVar10));
    }
  }
  param_2[3] = param_2[3] + uVar10;
  piVar11 = (int *)param_2[1];
  if (0xffff < uVar10) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar11 - *param_2 >> 3);
  }
LAB_00100638:
  *(short *)(piVar11 + 1) = (short)uVar10;
  *piVar11 = iVar16;
  if ((char *)0xffff < pcVar14 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar11 - *param_2 >> 3);
  }
  *(short *)((long)piVar11 + 6) = (short)(pcVar14 + -3);
  puVar27 = (ulong *)((long)puVar13 + (long)pcVar14);
  param_2[1] = (long)(piVar11 + 2);
  if (puVar27 <= puVar18) {
    *(uint *)(lVar4 + (ulong)((uint)(*(int *)(lVar3 + 2 + (ulong)local_88) * -0x61c8864f) >>
                             (bVar15 & 0x1f)) * 4) = local_88 + 2;
    *(int *)(lVar4 + (ulong)((uint)(*(int *)((long)puVar27 + -2) * -0x61c8864f) >> (bVar15 & 0x1f))
                     * 4) = ((int)puVar27 + -2) - iVar6;
    if (local_50 != 0) {
      while( true ) {
        uVar8 = local_50;
        uVar10 = (ulong)local_50;
        if (*(uint *)((long)puVar27 - uVar10) != (uint)*puVar27) break;
        puVar24 = (ulong *)((long)puVar27 + 4);
        puVar21 = (ulong *)((long)puVar27 + (4 - uVar10));
        puVar13 = puVar24;
        if (puVar24 < puVar9) {
          if (*puVar21 == *(ulong *)((long)puVar27 + 4)) {
            puVar13 = (ulong *)((long)puVar27 + 0xc);
            puVar21 = (ulong *)((long)puVar27 + (0xc - uVar10));
            if (puVar13 < puVar9) {
LAB_00100ab0:
              if (*puVar21 == *puVar13) goto LAB_00100aee;
              uVar28 = 0;
              for (uVar10 = *puVar21 ^ *puVar13; (uVar10 & 1) == 0;
                  uVar10 = uVar10 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              pcVar14 = (char *)((long)puVar13 + ((ulong)(uVar28 >> 3) - (long)puVar24));
              goto LAB_001008c3;
            }
            goto LAB_00100a40;
          }
          uVar28 = 0;
          for (uVar10 = *puVar21 ^ *(ulong *)((long)puVar27 + 4); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          pcVar14 = (char *)(ulong)(uVar28 >> 3);
        }
        else {
LAB_00100a40:
          if ((puVar13 < (ulong *)((long)puVar1 - 3U)) && ((uint)*puVar21 == (uint)*puVar13)) {
            puVar13 = (ulong *)((long)puVar13 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar13 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar21 == (short)*puVar13)) {
            puVar13 = (ulong *)((long)puVar13 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          if (puVar13 < puVar1) {
            puVar13 = (ulong *)((long)puVar13 + (ulong)((char)*puVar21 == (char)*puVar13));
          }
          pcVar14 = (char *)((long)puVar13 - (long)puVar24);
        }
LAB_001008c3:
        puVar24 = (ulong *)((long)puVar27 + (long)(pcVar14 + 4));
        *(int *)(lVar4 + (ulong)((uint)*puVar27 * -0x61c8864f >> (bVar15 & 0x1f)) * 4) =
             (int)puVar27 - iVar6;
        puVar13 = (ulong *)param_2[3];
        if (puVar12 < puVar27) {
          ZSTD_safecopyLiterals(puVar13,puVar27,puVar27);
          puVar27 = puVar24;
        }
        else {
          uVar10 = puVar27[1];
          *puVar13 = *puVar27;
          puVar13[1] = uVar10;
          puVar27 = puVar24;
        }
        puVar5 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar5 + 1) = 0;
        *puVar5 = 1;
        if ((char *)0xffff < pcVar14 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((long)puVar5 - *param_2 >> 3);
        }
        *(short *)((long)puVar5 + 6) = (short)(pcVar14 + 1);
        param_2[1] = (long)(puVar5 + 2);
        if (puVar18 < puVar27) {
          uVar8 = local_84;
          local_84 = local_50;
          local_50 = uVar8;
          break;
        }
        local_50 = local_84;
        local_84 = uVar8;
      }
    }
  }
  puVar24 = (ulong *)((long)puVar27 + uVar23);
  puVar12 = (ulong *)((long)puVar24 + 1);
  param_4 = puVar27;
  if (puVar18 <= puVar12) goto LAB_001009ee;
  goto LAB_001003cc;
LAB_001009d3:
  puVar12 = puVar12 + 1;
  puVar27 = puVar27 + 1;
  if (puVar9 <= puVar12) goto LAB_0010073b;
  goto LAB_00100816;
LAB_00100aee:
  puVar13 = puVar13 + 1;
  puVar21 = puVar21 + 1;
  if (puVar9 <= puVar13) goto LAB_00100a40;
  goto LAB_00100ab0;
LAB_001009ee:
  bVar33 = local_84 != 0;
LAB_00100528:
  if (!bVar7) goto LAB_0010058e;
  uVar29 = uVar17;
  if (bVar33) goto LAB_0010053b;
LAB_00100533:
  uVar29 = uVar22;
  local_84 = uVar17;
LAB_0010053b:
  *param_3 = local_84;
  if (local_50 != 0) {
    uVar29 = local_50;
  }
  param_3[1] = uVar29;
  return (long)puVar1 - (long)param_4;
}



void ZSTD_fillHashTable(long param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  byte local_34;
  
  plVar1 = (long *)(param_2 - 6);
  lVar5 = *(long *)(param_1 + 0x70);
  uVar4 = *(uint *)(param_1 + 0x110);
  plVar9 = (long *)((ulong)*(uint *)(param_1 + 0x2c) + *(long *)(param_1 + 8));
  plVar10 = (long *)((long)plVar9 + 3);
  iVar6 = (int)*(long *)(param_1 + 8);
  cVar7 = (char)*(undefined4 *)(param_1 + 0x108);
  if (param_4 == 1) {
    if (plVar10 < plVar1) {
      local_34 = 0x20 - (cVar7 + '\b');
      bVar11 = 0x40 - (cVar7 + '\b');
      do {
        iVar13 = ((int)plVar10 + -3) - iVar6;
        if (uVar4 == 7) {
          uVar15 = (ulong)(*(long *)((long)plVar10 - 3) * -0x30e44323405a9d00) >> (bVar11 & 0x3f);
          bVar12 = (byte)uVar15;
        }
        else if (uVar4 < 8) {
          if (uVar4 == 5) {
            uVar15 = (ulong)(*(long *)((long)plVar10 - 3) * -0x30e4432345000000) >> (bVar11 & 0x3f);
            bVar12 = (byte)uVar15;
          }
          else {
            if (uVar4 != 6) goto LAB_00100eb0;
            uVar15 = (ulong)(*(long *)((long)plVar10 - 3) * -0x30e4432340650000) >> (bVar11 & 0x3f);
            bVar12 = (byte)uVar15;
          }
        }
        else if (uVar4 == 8) {
          uVar15 = (ulong)(*(long *)((long)plVar10 - 3) * -0x30e44323485a9b9d) >> (bVar11 & 0x3f);
          bVar12 = (byte)uVar15;
        }
        else {
LAB_00100eb0:
          uVar8 = (uint)(*(int *)((long)plVar10 - 3) * -0x61c8864f) >> (local_34 & 0x1f);
          uVar15 = (ulong)uVar8;
          bVar12 = (byte)uVar8;
        }
        *(uint *)(lVar5 + (uVar15 >> 8) * 4) = (uint)bVar12 | iVar13 * 0x100;
        if (param_3 != 0) {
          plVar9 = (long *)((long)plVar10 - 2);
          uVar8 = (iVar13 + 1) * 0x100;
          if (uVar4 == 7) goto LAB_00100e5b;
          do {
            if (uVar4 < 8) {
              if (uVar4 == 5) {
                uVar15 = (ulong)(*plVar9 * -0x30e4432345000000) >> (bVar11 & 0x3f);
              }
              else {
                if (uVar4 != 6) goto LAB_00100ef8;
                uVar15 = (ulong)(*plVar9 * -0x30e4432340650000) >> (bVar11 & 0x3f);
              }
            }
            else if (uVar4 == 8) {
              uVar15 = (ulong)(*plVar9 * -0x30e44323485a9b9d) >> (bVar11 & 0x3f);
            }
            else {
LAB_00100ef8:
              uVar15 = (ulong)((uint)((int)*plVar9 * -0x61c8864f) >> (local_34 & 0x1f));
            }
            while( true ) {
              puVar3 = (uint *)(lVar5 + (uVar15 >> 8) * 4);
              if (*puVar3 == 0) {
                *puVar3 = (uint)uVar15 & 0xff | uVar8;
              }
              plVar9 = (long *)((long)plVar9 + 1);
              uVar8 = uVar8 + 0x100;
              if (plVar10 == plVar9) goto LAB_00100d80;
              if (uVar4 != 7) break;
LAB_00100e5b:
              uVar15 = (ulong)(*plVar9 * -0x30e44323405a9d00) >> (bVar11 & 0x3f);
            }
          } while( true );
        }
LAB_00100d80:
        plVar10 = (long *)((long)plVar10 + 3);
      } while (plVar10 < plVar1);
    }
  }
  else if (plVar10 < plVar1) {
    bVar11 = 0x40 - cVar7;
    do {
      iVar13 = (int)plVar9 - iVar6;
      if (uVar4 == 7) {
        uVar15 = (ulong)(*plVar9 * -0x30e44323405a9d00) >> (bVar11 & 0x3f);
      }
      else if (uVar4 < 8) {
        if (uVar4 == 5) {
          uVar15 = (ulong)(*plVar9 * -0x30e4432345000000) >> (bVar11 & 0x3f);
        }
        else {
          if (uVar4 != 6) goto LAB_00100ca0;
          uVar15 = (ulong)(*plVar9 * -0x30e4432340650000) >> (bVar11 & 0x3f);
        }
      }
      else if (uVar4 == 8) {
        uVar15 = (ulong)(*plVar9 * -0x30e44323485a9b9d) >> (bVar11 & 0x3f);
      }
      else {
LAB_00100ca0:
        uVar15 = (ulong)((uint)((int)*plVar9 * -0x61c8864f) >> (0x20U - cVar7 & 0x1f));
      }
      *(int *)(lVar5 + uVar15 * 4) = iVar13;
      if (param_3 != 0) {
        lVar14 = 1;
        if (uVar4 == 7) goto LAB_00100c3e;
        do {
          if (uVar4 < 8) {
            if (uVar4 == 5) {
              uVar15 = (ulong)(*(long *)((long)plVar9 + lVar14) * -0x30e4432345000000) >>
                       (bVar11 & 0x3f);
            }
            else {
              if (uVar4 != 6) goto LAB_00100d20;
              uVar15 = (ulong)(*(long *)((long)plVar9 + lVar14) * -0x30e4432340650000) >>
                       (bVar11 & 0x3f);
            }
          }
          else if (uVar4 == 8) {
            uVar15 = (ulong)(*(long *)((long)plVar9 + lVar14) * -0x30e44323485a9b9d) >>
                     (bVar11 & 0x3f);
          }
          else {
LAB_00100d20:
            uVar15 = (ulong)((uint)(*(int *)((long)plVar9 + lVar14) * -0x61c8864f) >>
                            (0x20U - cVar7 & 0x1f));
          }
          while( true ) {
            piVar2 = (int *)(lVar5 + uVar15 * 4);
            if (*piVar2 == 0) {
              *piVar2 = iVar13 + (int)lVar14;
            }
            if (lVar14 != 1) goto LAB_00100b80;
            lVar14 = 2;
            if (uVar4 != 7) break;
LAB_00100c3e:
            uVar15 = (ulong)(*(long *)((long)plVar9 + lVar14) * -0x30e44323405a9d00) >>
                     (bVar11 & 0x3f);
          }
        } while( true );
      }
LAB_00100b80:
      plVar10 = (long *)((long)plVar9 + 6);
      plVar9 = (long *)((long)plVar9 + 3);
    } while (plVar10 < plVar1);
  }
  return;
}



char * ZSTD_compressBlock_fast(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  ulong *puVar10;
  char *pcVar11;
  byte bVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long lVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  ulong *local_b8;
  ulong *local_a8;
  uint local_7c;
  ulong *local_68;
  uint local_60;
  ulong *local_58;
  ulong *local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  
  uVar15 = *(uint *)(param_1 + 0x114);
  iVar22 = *(int *)(param_1 + 0x110);
  iVar14 = (int)param_5;
  iVar20 = (int)param_4;
  local_b8 = param_4;
  if (uVar15 < 2) {
    lVar1 = *(long *)(param_1 + 8);
    uVar15 = *(uint *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x70);
    iVar4 = (int)lVar1;
    iVar14 = (iVar20 - iVar4) + iVar14;
    uVar23 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
    uVar21 = iVar14 - uVar23;
    if (iVar14 - uVar15 <= uVar23) {
      uVar21 = uVar15;
    }
    uVar13 = (ulong)uVar21;
    cVar5 = (char)*(undefined4 *)(param_1 + 0x108);
    if (iVar22 == 6) {
      puVar17 = (ulong *)((long)param_4 + param_5);
      puVar19 = puVar17 + -1;
      uVar32 = *param_3;
      uVar34 = param_3[1];
      if (*(int *)(param_1 + 0x28) == 0) {
        local_58 = (ulong *)((ulong)uVar21 + lVar1);
        puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
        uVar15 = ((int)puVar30 - iVar4) - uVar15;
        if (uVar15 <= uVar23) {
          uVar23 = uVar15;
        }
      }
      else {
        local_58 = (ulong *)((ulong)uVar15 + lVar1);
        puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
        uVar21 = uVar15;
        uVar23 = ((int)puVar30 - iVar4) - uVar15;
      }
      local_40 = uVar34;
      local_60 = 0;
      if (uVar34 <= uVar23) {
        local_40 = 0;
        local_60 = uVar34;
      }
      puVar26 = (ulong *)((long)puVar30 + 3);
      local_48 = uVar32;
      if (uVar32 <= uVar23) {
        bVar6 = false;
        uVar32 = 0;
        if (puVar26 < puVar19) goto LAB_001029b8;
LAB_001018ec:
        uVar15 = 0;
        bVar37 = local_48 != 0;
        local_44 = local_40;
        goto LAB_00101900;
      }
      if (puVar26 < puVar19) {
        local_48 = 0;
        bVar6 = true;
LAB_001029b8:
        bVar12 = 0x40 - cVar5;
        local_b8 = param_4;
        do {
          local_a8 = puVar30 + 0x10;
          uVar7 = *puVar30 * -0x30e4432340650000 >> (bVar12 & 0x3f);
          uVar13 = (ulong)(*(long *)((long)puVar30 + 1) * -0x30e4432340650000) >> (bVar12 & 0x3f);
          bVar37 = local_48 != 0;
          uVar8 = 2;
          uVar15 = *(uint *)(lVar2 + uVar7 * 4);
          puVar24 = (ulong *)((long)puVar30 + 2);
          puVar31 = (ulong *)((long)puVar30 + 1);
          while( true ) {
            puVar18 = puVar26;
            puVar10 = puVar24;
            uVar34 = (int)puVar30 - iVar4;
            puVar16 = (uint *)((long)puVar10 - (ulong)local_48);
            uVar23 = *puVar16;
            *(uint *)(lVar2 + uVar7 * 4) = uVar34;
            local_44 = local_40;
            if (((uint)*puVar10 == uVar23) && (bVar37)) {
              iVar22 = 1;
              uVar8 = (ulong)(*(char *)((long)puVar10 - 1) == *(char *)((long)puVar16 + -1));
              *(int *)(lVar2 + uVar13 * 4) = (int)puVar31 - iVar4;
              puVar31 = (ulong *)((long)puVar10 - uVar8);
              puVar30 = (ulong *)((long)puVar16 - uVar8);
              lVar27 = uVar8 + 4;
              local_7c = uVar34;
              uVar15 = local_48;
              goto LAB_00103847;
            }
            uVar23 = (uint)*puVar30 ^ 1;
            if (uVar21 <= uVar15) {
              uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
            }
            puVar16 = (uint *)(lVar2 + uVar13 * 4);
            local_7c = (int)puVar31 - iVar4;
            if (uVar23 == (uint)*puVar30) {
              *puVar16 = local_7c;
              puVar31 = puVar30;
              local_7c = uVar34;
              goto LAB_00103a33;
            }
            uVar13 = *puVar10;
            uVar15 = *puVar16;
            *puVar16 = local_7c;
            uVar7 = uVar13 * -0x30e4432340650000 >> (bVar12 & 0x3f);
            if (uVar15 < uVar21) {
              uVar34 = (uint)*puVar31;
              uVar23 = uVar34 ^ 1;
            }
            else {
              uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
              uVar34 = (uint)*puVar31;
            }
            if (uVar23 == uVar34) break;
            puVar24 = (ulong *)((long)puVar10 + uVar8);
            uVar15 = *(uint *)(lVar2 + uVar7 * 4);
            uVar13 = *puVar18 * -0x30e4432340650000 >> (bVar12 & 0x3f);
            puVar26 = (ulong *)((long)puVar18 + uVar8);
            if (local_a8 <= puVar24) {
              local_a8 = local_a8 + 0x10;
              uVar8 = uVar8 + 1;
            }
            puVar30 = puVar10;
            puVar31 = puVar18;
            if (puVar19 <= puVar26) goto LAB_00102e28;
          }
          if (uVar8 < 5) {
            *(int *)(lVar2 + uVar7 * 4) = (int)puVar10 - iVar4;
          }
LAB_00103a33:
          puVar30 = (ulong *)((ulong)uVar15 + lVar1);
          uVar15 = (int)puVar31 - (int)puVar30;
          iVar22 = uVar15 + 3;
          local_60 = local_48;
          if ((local_58 < puVar30) && (lVar27 = 4, local_b8 < puVar31)) {
            while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar30 + -1)) {
              puVar31 = (ulong *)((long)puVar31 + -1);
              puVar30 = (ulong *)((long)puVar30 + -1);
              lVar27 = lVar27 + 1;
              if ((puVar31 <= local_b8) || (puVar30 <= local_58)) break;
            }
          }
          else {
            lVar27 = 4;
          }
LAB_00103847:
          local_48 = uVar15;
          puVar10 = (ulong *)((long)puVar31 + lVar27);
          puVar30 = (ulong *)((long)puVar30 + lVar27);
          puVar26 = (ulong *)((long)puVar17 - 7);
          puVar24 = puVar10;
          if (puVar10 < puVar26) {
            if (*puVar30 == *puVar10) {
              puVar24 = puVar10 + 1;
              puVar30 = puVar30 + 1;
              if (puVar24 < puVar26) {
LAB_00103ad9:
                if (*puVar30 == *puVar24) goto LAB_00104180;
                uVar15 = 0;
                for (uVar13 = *puVar30 ^ *puVar24; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                pcVar11 = (char *)((long)puVar24 + ((ulong)(uVar15 >> 3) - (long)puVar10));
                goto LAB_0010387a;
              }
              goto LAB_001039db;
            }
            uVar15 = 0;
            for (uVar13 = *puVar30 ^ *puVar10; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar15 = uVar15 + 1;
            }
            pcVar11 = (char *)(ulong)(uVar15 >> 3);
          }
          else {
LAB_001039db:
            if ((puVar24 < (ulong *)((long)puVar17 + -3)) && ((uint)*puVar30 == (uint)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
            if ((puVar24 < (ulong *)((long)puVar17 + -1)) && ((short)*puVar30 == (short)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
            if (puVar24 < puVar17) {
              puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar30 == (char)*puVar24));
            }
            pcVar11 = (char *)((long)puVar24 - (long)puVar10);
          }
LAB_0010387a:
          pcVar11 = pcVar11 + lVar27;
          puVar24 = puVar17 + -4;
          uVar13 = (long)puVar31 - (long)local_b8;
          puVar30 = (ulong *)param_2[3];
          if (puVar24 < puVar31) {
            ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar24);
LAB_001039a1:
            param_2[3] = param_2[3] + uVar13;
            piVar9 = (int *)param_2[1];
            if (0xffff < uVar13) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
            }
          }
          else {
            uVar8 = local_b8[1];
            *puVar30 = *local_b8;
            puVar30[1] = uVar8;
            if (0x10 < uVar13) {
              uVar8 = local_b8[3];
              lVar27 = param_2[3];
              *(ulong *)(lVar27 + 0x10) = local_b8[2];
              *(ulong *)(lVar27 + 0x18) = uVar8;
              if (0x20 < (long)uVar13) {
                puVar30 = (ulong *)(lVar27 + 0x20);
                do {
                  uVar8 = local_b8[5];
                  puVar10 = puVar30 + 4;
                  *puVar30 = local_b8[4];
                  puVar30[1] = uVar8;
                  uVar8 = local_b8[7];
                  puVar30[2] = local_b8[6];
                  puVar30[3] = uVar8;
                  puVar30 = puVar10;
                  local_b8 = local_b8 + 4;
                } while (puVar10 < (ulong *)(lVar27 + uVar13));
              }
              goto LAB_001039a1;
            }
            param_2[3] = param_2[3] + uVar13;
            piVar9 = (int *)param_2[1];
          }
          *(short *)(piVar9 + 1) = (short)uVar13;
          *piVar9 = iVar22;
          if ((char *)0xffff < pcVar11 + -3) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
          }
          *(short *)((long)piVar9 + 6) = (short)(pcVar11 + -3);
          puVar30 = (ulong *)((long)puVar31 + (long)pcVar11);
          param_2[1] = (long)(piVar9 + 2);
          uVar15 = local_48;
          if (puVar30 <= puVar19) {
            *(uint *)(lVar2 + ((ulong)(*(long *)(lVar1 + 2 + (ulong)local_7c) * -0x30e4432340650000)
                              >> (bVar12 & 0x3f)) * 4) = local_7c + 2;
            *(int *)(lVar2 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e4432340650000) >>
                             (bVar12 & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar4;
            if (local_60 != 0) {
              do {
                local_48 = uVar15;
                uVar13 = (ulong)local_60;
                uVar15 = local_48;
                if ((uint)*puVar30 != *(uint *)((long)puVar30 - uVar13)) break;
                puVar31 = (ulong *)((long)puVar30 + 4);
                puVar18 = (ulong *)((long)puVar30 + (4 - uVar13));
                puVar10 = puVar31;
                if (puVar31 < puVar26) {
                  if (*puVar18 == *(ulong *)((long)puVar30 + 4)) {
                    puVar10 = (ulong *)((long)puVar30 + 0xc);
                    puVar18 = (ulong *)((long)puVar30 + (0xc - uVar13));
                    if (puVar10 < puVar26) {
LAB_0010469b:
                      if (*puVar18 == *puVar10) goto LAB_001047d0;
                      uVar15 = 0;
                      for (uVar13 = *puVar18 ^ *puVar10; (uVar13 & 1) == 0;
                          uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                        uVar15 = uVar15 + 1;
                      }
                      pcVar11 = (char *)((long)puVar10 + ((ulong)(uVar15 >> 3) - (long)puVar31));
                      goto LAB_00103d0b;
                    }
                    goto LAB_00104509;
                  }
                  uVar15 = 0;
                  for (uVar13 = *puVar18 ^ *(ulong *)((long)puVar30 + 4); (uVar13 & 1) == 0;
                      uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  pcVar11 = (char *)(ulong)(uVar15 >> 3);
                }
                else {
LAB_00104509:
                  if ((puVar10 < (ulong *)((long)puVar17 + -3)) &&
                     ((uint)*puVar18 == (uint)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 4);
                    puVar18 = (ulong *)((long)puVar18 + 4);
                  }
                  if ((puVar10 < (ulong *)((long)puVar17 + -1)) &&
                     ((short)*puVar18 == (short)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 2);
                    puVar18 = (ulong *)((long)puVar18 + 2);
                  }
                  if (puVar10 < puVar17) {
                    puVar10 = (ulong *)((long)puVar10 + (ulong)((char)*puVar18 == (char)*puVar10));
                  }
                  pcVar11 = (char *)((long)puVar10 - (long)puVar31);
                }
LAB_00103d0b:
                puVar31 = (ulong *)((long)puVar30 + (long)(pcVar11 + 4));
                *(int *)(lVar2 + (*puVar30 * -0x30e4432340650000 >> (bVar12 & 0x3f)) * 4) =
                     (int)puVar30 - iVar4;
                puVar10 = (ulong *)param_2[3];
                if (puVar24 < puVar30) {
                  ZSTD_safecopyLiterals(puVar10,puVar30,puVar30,puVar24);
                  puVar30 = puVar31;
                }
                else {
                  uVar13 = puVar30[1];
                  *puVar10 = *puVar30;
                  puVar10[1] = uVar13;
                  puVar30 = puVar31;
                }
                puVar3 = (undefined4 *)param_2[1];
                *(undefined2 *)(puVar3 + 1) = 0;
                *puVar3 = 1;
                if ((char *)0xffff < pcVar11 + 1) {
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((long)puVar3 - *param_2 >> 3);
                }
                *(short *)((long)puVar3 + 6) = (short)(pcVar11 + 1);
                param_2[1] = (long)(puVar3 + 2);
                uVar15 = local_60;
                local_60 = local_48;
              } while (puVar30 <= puVar19);
            }
          }
          local_48 = uVar15;
          puVar26 = (ulong *)((long)puVar30 + 3);
          local_b8 = puVar30;
        } while (puVar26 < puVar19);
        goto LAB_001040a3;
      }
    }
    else {
      if (iVar22 == 7) {
        puVar17 = (ulong *)((long)param_4 + param_5);
        puVar19 = puVar17 + -1;
        uVar32 = *param_3;
        uVar34 = param_3[1];
        if (*(int *)(param_1 + 0x28) == 0) {
          local_58 = (ulong *)(uVar13 + lVar1);
          puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
          uVar15 = ((int)puVar30 - iVar4) - uVar15;
          if (uVar15 <= uVar23) {
            uVar23 = uVar15;
          }
        }
        else {
          local_58 = (ulong *)((ulong)uVar15 + lVar1);
          puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
          uVar21 = uVar15;
          uVar23 = ((int)puVar30 - iVar4) - uVar15;
        }
        local_40 = uVar34;
        local_60 = 0;
        if (uVar34 <= uVar23) {
          local_40 = 0;
          local_60 = uVar34;
        }
        puVar26 = (ulong *)((long)puVar30 + 3);
        local_48 = uVar32;
        if (uVar23 < uVar32) {
          if (puVar19 <= puVar26) goto LAB_0010190e;
          local_48 = 0;
          bVar6 = true;
        }
        else {
          bVar6 = false;
          uVar32 = 0;
          if (puVar19 <= puVar26) goto LAB_001018ec;
        }
        bVar12 = 0x40 - cVar5;
        local_b8 = param_4;
        do {
          local_a8 = puVar30 + 0x10;
          uVar7 = *puVar30 * -0x30e44323405a9d00 >> (bVar12 & 0x3f);
          uVar13 = (ulong)(*(long *)((long)puVar30 + 1) * -0x30e44323405a9d00) >> (bVar12 & 0x3f);
          bVar37 = local_48 != 0;
          uVar8 = 2;
          uVar15 = *(uint *)(lVar2 + uVar7 * 4);
          puVar24 = (ulong *)((long)puVar30 + 2);
          puVar31 = (ulong *)((long)puVar30 + 1);
          while( true ) {
            puVar18 = puVar26;
            puVar10 = puVar24;
            uVar34 = (int)puVar30 - iVar4;
            puVar16 = (uint *)((long)puVar10 - (ulong)local_48);
            uVar23 = *puVar16;
            *(uint *)(lVar2 + uVar7 * 4) = uVar34;
            local_44 = local_40;
            if (((uint)*puVar10 == uVar23) && (bVar37)) {
              iVar22 = 1;
              uVar8 = (ulong)(*(char *)((long)puVar10 - 1) == *(char *)((long)puVar16 + -1));
              *(int *)(lVar2 + uVar13 * 4) = (int)puVar31 - iVar4;
              puVar31 = (ulong *)((long)puVar10 - uVar8);
              puVar30 = (ulong *)((long)puVar16 - uVar8);
              lVar27 = uVar8 + 4;
              local_7c = uVar34;
              uVar15 = local_48;
              goto LAB_00103167;
            }
            uVar23 = (uint)*puVar30 ^ 1;
            if (uVar21 <= uVar15) {
              uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
            }
            puVar16 = (uint *)(lVar2 + uVar13 * 4);
            local_7c = (int)puVar31 - iVar4;
            if (uVar23 == (uint)*puVar30) {
              *puVar16 = local_7c;
              puVar31 = puVar30;
              local_7c = uVar34;
              goto LAB_00103363;
            }
            uVar13 = *puVar10;
            uVar15 = *puVar16;
            *puVar16 = local_7c;
            uVar7 = uVar13 * -0x30e44323405a9d00 >> (bVar12 & 0x3f);
            if (uVar15 < uVar21) {
              uVar34 = (uint)*puVar31;
              uVar23 = uVar34 ^ 1;
            }
            else {
              uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
              uVar34 = (uint)*puVar31;
            }
            if (uVar23 == uVar34) break;
            puVar24 = (ulong *)((long)puVar10 + uVar8);
            uVar15 = *(uint *)(lVar2 + uVar7 * 4);
            uVar13 = *puVar18 * -0x30e44323405a9d00 >> (bVar12 & 0x3f);
            puVar26 = (ulong *)((long)puVar18 + uVar8);
            if (local_a8 <= puVar24) {
              local_a8 = local_a8 + 0x10;
              uVar8 = uVar8 + 1;
            }
            puVar30 = puVar10;
            puVar31 = puVar18;
            if (puVar19 <= puVar26) goto LAB_00102e28;
          }
          if (uVar8 < 5) {
            *(int *)(lVar2 + uVar7 * 4) = (int)puVar10 - iVar4;
          }
LAB_00103363:
          puVar30 = (ulong *)((ulong)uVar15 + lVar1);
          uVar15 = (int)puVar31 - (int)puVar30;
          iVar22 = uVar15 + 3;
          local_60 = local_48;
          if ((local_b8 < puVar31) && (lVar27 = 4, local_58 < puVar30)) {
            while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar30 + -1)) {
              puVar31 = (ulong *)((long)puVar31 + -1);
              puVar30 = (ulong *)((long)puVar30 + -1);
              lVar27 = lVar27 + 1;
              if ((puVar31 <= local_b8) || (puVar30 <= local_58)) break;
            }
          }
          else {
            lVar27 = 4;
          }
LAB_00103167:
          local_48 = uVar15;
          puVar10 = (ulong *)((long)puVar31 + lVar27);
          puVar30 = (ulong *)((long)puVar30 + lVar27);
          puVar26 = (ulong *)((long)puVar17 - 7);
          puVar24 = puVar10;
          if (puVar10 < puVar26) {
            if (*puVar30 == *puVar10) {
              puVar24 = puVar10 + 1;
              puVar30 = puVar30 + 1;
              if (puVar24 < puVar26) {
LAB_00103409:
                if (*puVar30 == *puVar24) goto LAB_001041e0;
                uVar15 = 0;
                for (uVar13 = *puVar30 ^ *puVar24; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                pcVar11 = (char *)((long)puVar24 + ((ulong)(uVar15 >> 3) - (long)puVar10));
                goto LAB_0010319a;
              }
              goto LAB_00103303;
            }
            uVar15 = 0;
            for (uVar13 = *puVar30 ^ *puVar10; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar15 = uVar15 + 1;
            }
            pcVar11 = (char *)(ulong)(uVar15 >> 3);
          }
          else {
LAB_00103303:
            if ((puVar24 < (ulong *)((long)puVar17 + -3)) && ((uint)*puVar30 == (uint)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
            if ((puVar24 < (ulong *)((long)puVar17 + -1)) && ((short)*puVar30 == (short)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
            if (puVar24 < puVar17) {
              puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar30 == (char)*puVar24));
            }
            pcVar11 = (char *)((long)puVar24 - (long)puVar10);
          }
LAB_0010319a:
          pcVar11 = pcVar11 + lVar27;
          puVar24 = puVar17 + -4;
          uVar13 = (long)puVar31 - (long)local_b8;
          puVar30 = (ulong *)param_2[3];
          if (puVar24 < puVar31) {
            ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar24);
LAB_001032c9:
            param_2[3] = param_2[3] + uVar13;
            piVar9 = (int *)param_2[1];
            if (0xffff < uVar13) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
            }
          }
          else {
            uVar8 = local_b8[1];
            *puVar30 = *local_b8;
            puVar30[1] = uVar8;
            if (0x10 < uVar13) {
              uVar8 = local_b8[3];
              lVar27 = param_2[3];
              *(ulong *)(lVar27 + 0x10) = local_b8[2];
              *(ulong *)(lVar27 + 0x18) = uVar8;
              if (0x20 < (long)uVar13) {
                puVar30 = (ulong *)(lVar27 + 0x20);
                do {
                  uVar8 = local_b8[5];
                  puVar10 = puVar30 + 4;
                  *puVar30 = local_b8[4];
                  puVar30[1] = uVar8;
                  uVar8 = local_b8[7];
                  puVar30[2] = local_b8[6];
                  puVar30[3] = uVar8;
                  puVar30 = puVar10;
                  local_b8 = local_b8 + 4;
                } while (puVar10 < (ulong *)(lVar27 + uVar13));
              }
              goto LAB_001032c9;
            }
            param_2[3] = param_2[3] + uVar13;
            piVar9 = (int *)param_2[1];
          }
          *(short *)(piVar9 + 1) = (short)uVar13;
          *piVar9 = iVar22;
          if ((char *)0xffff < pcVar11 + -3) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
          }
          *(short *)((long)piVar9 + 6) = (short)(pcVar11 + -3);
          puVar30 = (ulong *)((long)puVar31 + (long)pcVar11);
          param_2[1] = (long)(piVar9 + 2);
          uVar15 = local_48;
          if (puVar30 <= puVar19) {
            *(uint *)(lVar2 + ((ulong)(*(long *)(lVar1 + 2 + (ulong)local_7c) * -0x30e44323405a9d00)
                              >> (bVar12 & 0x3f)) * 4) = local_7c + 2;
            *(int *)(lVar2 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e44323405a9d00) >>
                             (bVar12 & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar4;
            if (local_60 != 0) {
              do {
                local_48 = uVar15;
                uVar13 = (ulong)local_60;
                uVar15 = local_48;
                if ((uint)*puVar30 != *(uint *)((long)puVar30 - uVar13)) break;
                puVar31 = (ulong *)((long)puVar30 + 4);
                puVar18 = (ulong *)((long)puVar30 + (4 - uVar13));
                puVar10 = puVar31;
                if (puVar31 < puVar26) {
                  if (*puVar18 == *(ulong *)((long)puVar30 + 4)) {
                    puVar10 = (ulong *)((long)puVar30 + 0xc);
                    puVar18 = (ulong *)((long)puVar30 + (0xc - uVar13));
                    if (puVar10 < puVar26) {
LAB_001046d6:
                      if (*puVar18 == *puVar10) goto LAB_001047ba;
                      uVar15 = 0;
                      for (uVar13 = *puVar18 ^ *puVar10; (uVar13 & 1) == 0;
                          uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                        uVar15 = uVar15 + 1;
                      }
                      pcVar11 = (char *)((long)puVar10 + ((ulong)(uVar15 >> 3) - (long)puVar31));
                      goto LAB_00103eeb;
                    }
                    goto LAB_00104422;
                  }
                  uVar15 = 0;
                  for (uVar13 = *puVar18 ^ *(ulong *)((long)puVar30 + 4); (uVar13 & 1) == 0;
                      uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  pcVar11 = (char *)(ulong)(uVar15 >> 3);
                }
                else {
LAB_00104422:
                  if ((puVar10 < (ulong *)((long)puVar17 + -3)) &&
                     ((uint)*puVar18 == (uint)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 4);
                    puVar18 = (ulong *)((long)puVar18 + 4);
                  }
                  if ((puVar10 < (ulong *)((long)puVar17 + -1)) &&
                     ((short)*puVar18 == (short)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 2);
                    puVar18 = (ulong *)((long)puVar18 + 2);
                  }
                  if (puVar10 < puVar17) {
                    puVar10 = (ulong *)((long)puVar10 + (ulong)((char)*puVar18 == (char)*puVar10));
                  }
                  pcVar11 = (char *)((long)puVar10 - (long)puVar31);
                }
LAB_00103eeb:
                puVar31 = (ulong *)((long)puVar30 + (long)(pcVar11 + 4));
                *(int *)(lVar2 + (*puVar30 * -0x30e44323405a9d00 >> (bVar12 & 0x3f)) * 4) =
                     (int)puVar30 - iVar4;
                puVar10 = (ulong *)param_2[3];
                if (puVar24 < puVar30) {
                  ZSTD_safecopyLiterals(puVar10,puVar30,puVar30,puVar24);
                  puVar30 = puVar31;
                }
                else {
                  uVar13 = puVar30[1];
                  *puVar10 = *puVar30;
                  puVar10[1] = uVar13;
                  puVar30 = puVar31;
                }
                puVar3 = (undefined4 *)param_2[1];
                *(undefined2 *)(puVar3 + 1) = 0;
                *puVar3 = 1;
                if ((char *)0xffff < pcVar11 + 1) {
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((long)puVar3 - *param_2 >> 3);
                }
                *(short *)((long)puVar3 + 6) = (short)(pcVar11 + 1);
                param_2[1] = (long)(puVar3 + 2);
                uVar15 = local_60;
                local_60 = local_48;
              } while (puVar30 <= puVar19);
            }
          }
          local_48 = uVar15;
          puVar26 = (ulong *)((long)puVar30 + 3);
          local_b8 = puVar30;
        } while (puVar26 < puVar19);
      }
      else {
        if (iVar22 != 5) {
          puVar17 = (ulong *)((long)param_4 + param_5);
          puVar19 = puVar17 + -1;
          uVar32 = *param_3;
          uVar34 = param_3[1];
          if (*(int *)(param_1 + 0x28) == 0) {
            puVar30 = (ulong *)(lVar1 + uVar13);
            param_4 = (ulong *)((ulong)(param_4 == puVar30) + (long)param_4);
            uVar15 = ((int)param_4 - iVar4) - uVar15;
            if (uVar15 <= uVar23) {
              uVar23 = uVar15;
            }
          }
          else {
            puVar30 = (ulong *)(lVar1 + (ulong)uVar15);
            param_4 = (ulong *)((ulong)(param_4 == puVar30) + (long)param_4);
            uVar21 = uVar15;
            uVar23 = ((int)param_4 - iVar4) - uVar15;
          }
          local_48 = 0;
          uVar15 = uVar34;
          if (uVar34 <= uVar23) {
            uVar15 = 0;
            local_48 = uVar34;
          }
          puVar26 = (ulong *)((long)param_4 + 3);
          uVar34 = uVar15;
          local_7c = uVar32;
          if (uVar23 < uVar32) {
            if (puVar19 <= puVar26) goto LAB_0010378c;
            local_7c = 0;
            bVar6 = true;
            uVar23 = uVar32;
LAB_001012ee:
            bVar12 = 0x20 - cVar5;
            puVar24 = (ulong *)((long)puVar17 - 7);
            do {
              puVar18 = param_4 + 0x10;
              uVar13 = (ulong)((uint)*param_4 * -0x61c8864f >> (bVar12 & 0x1f));
              uVar33 = (uint)(*(int *)((long)param_4 + 1) * -0x61c8864f) >> (bVar12 & 0x1f);
              uVar32 = *(uint *)(lVar2 + uVar13 * 4);
              bVar37 = local_7c != 0;
              uVar8 = 2;
              puVar31 = (ulong *)((long)param_4 + 2);
              puVar10 = (ulong *)((long)param_4 + 1);
              while( true ) {
                puVar29 = puVar26;
                puVar25 = puVar31;
                uVar35 = (int)param_4 - iVar4;
                puVar16 = (uint *)((long)puVar25 - (ulong)local_7c);
                uVar36 = *puVar16;
                *(uint *)(lVar2 + uVar13 * 4) = uVar35;
                uVar13 = *puVar25;
                if ((uVar36 == (uint)uVar13) && (bVar37)) {
                  iVar22 = 1;
                  uVar13 = (ulong)(*(char *)((long)puVar25 - 1) == *(char *)((long)puVar16 + -1));
                  *(int *)(lVar2 + (ulong)uVar33 * 4) = (int)puVar10 - iVar4;
                  puVar10 = (ulong *)((long)puVar25 - uVar13);
                  puVar26 = (ulong *)((long)puVar16 - uVar13);
                  lVar27 = uVar13 + 4;
                  goto LAB_0010350a;
                }
                uVar36 = (uint)*param_4 ^ 1;
                if (uVar21 <= uVar32) {
                  uVar36 = *(uint *)(lVar1 + (ulong)uVar32);
                }
                puVar16 = (uint *)(lVar2 + (ulong)uVar33 * 4);
                uVar33 = (int)puVar10 - iVar4;
                if (uVar36 == (uint)*param_4) {
                  *puVar16 = uVar33;
                  puVar10 = param_4;
                  goto LAB_001036d8;
                }
                uVar32 = *puVar16;
                *puVar16 = uVar33;
                uVar13 = (ulong)((uint)uVar13 * -0x61c8864f >> (bVar12 & 0x1f));
                if (uVar32 < uVar21) {
                  uVar35 = (uint)*puVar10;
                  uVar36 = uVar35 ^ 1;
                }
                else {
                  uVar36 = *(uint *)(lVar1 + (ulong)uVar32);
                  uVar35 = (uint)*puVar10;
                }
                if (uVar36 == uVar35) break;
                puVar31 = (ulong *)((long)puVar25 + uVar8);
                uVar32 = *(uint *)(lVar2 + uVar13 * 4);
                uVar33 = (uint)*puVar29 * -0x61c8864f >> (bVar12 & 0x1f);
                puVar26 = (ulong *)((long)puVar29 + uVar8);
                if (puVar18 <= puVar31) {
                  uVar8 = uVar8 + 1;
                  puVar18 = puVar18 + 0x10;
                }
                puVar10 = puVar29;
                param_4 = puVar25;
                if (puVar19 <= puVar26) goto LAB_00103778;
              }
              uVar35 = uVar33;
              if (uVar8 < 5) {
                *(int *)(lVar2 + uVar13 * 4) = (int)puVar25 - iVar4;
              }
LAB_001036d8:
              puVar26 = (ulong *)((ulong)uVar32 + lVar1);
              uVar32 = (int)puVar10 - (int)puVar26;
              iVar22 = uVar32 + 3;
              if ((puVar30 < puVar26) && (lVar27 = 4, local_b8 < puVar10)) {
                while (*(char *)((long)puVar10 + -1) == *(char *)((long)puVar26 + -1)) {
                  puVar10 = (ulong *)((long)puVar10 + -1);
                  puVar26 = (ulong *)((long)puVar26 + -1);
                  lVar27 = lVar27 + 1;
                  if ((puVar10 <= local_b8) || (puVar26 <= puVar30)) break;
                }
                local_48 = local_7c;
                local_7c = uVar32;
              }
              else {
                local_48 = local_7c;
                lVar27 = 4;
                local_7c = uVar32;
              }
LAB_0010350a:
              puVar18 = (ulong *)((long)puVar10 + lVar27);
              puVar26 = (ulong *)((long)puVar26 + lVar27);
              puVar31 = puVar18;
              if (puVar18 < puVar24) {
                if (*puVar26 == *puVar18) {
                  puVar31 = puVar18 + 1;
                  puVar26 = puVar26 + 1;
                  if (puVar31 < puVar24) {
LAB_001037d6:
                    if (*puVar26 == *puVar31) goto LAB_001041a0;
                    uVar32 = 0;
                    for (uVar13 = *puVar26 ^ *puVar31; (uVar13 & 1) == 0;
                        uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                      uVar32 = uVar32 + 1;
                    }
                    pcVar11 = (char *)((long)puVar31 + ((ulong)(uVar32 >> 3) - (long)puVar18));
                    goto LAB_00103539;
                  }
                  goto LAB_0010367b;
                }
                uVar32 = 0;
                for (uVar13 = *puVar26 ^ *puVar18; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar32 = uVar32 + 1;
                }
                pcVar11 = (char *)(ulong)(uVar32 >> 3);
              }
              else {
LAB_0010367b:
                if ((puVar31 < (ulong *)((long)puVar17 - 3U)) && ((uint)*puVar26 == (uint)*puVar31))
                {
                  puVar31 = (ulong *)((long)puVar31 + 4);
                  puVar26 = (ulong *)((long)puVar26 + 4);
                }
                if ((puVar31 < (ulong *)((long)puVar17 - 1U)) &&
                   ((short)*puVar26 == (short)*puVar31)) {
                  puVar31 = (ulong *)((long)puVar31 + 2);
                  puVar26 = (ulong *)((long)puVar26 + 2);
                }
                if (puVar31 < puVar17) {
                  puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar26 == (char)*puVar31));
                }
                pcVar11 = (char *)((long)puVar31 - (long)puVar18);
              }
LAB_00103539:
              pcVar11 = pcVar11 + lVar27;
              uVar13 = (long)puVar10 - (long)local_b8;
              puVar26 = puVar17 + -4;
              puVar31 = (ulong *)param_2[3];
              if (puVar26 < puVar10) {
                ZSTD_safecopyLiterals(puVar31,local_b8,puVar10,puVar26);
LAB_0010363e:
                param_2[3] = param_2[3] + uVar13;
                piVar9 = (int *)param_2[1];
                if (0xffff < uVar13) {
                  *(undefined4 *)(param_2 + 9) = 1;
                  *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
                }
              }
              else {
                uVar8 = local_b8[1];
                *puVar31 = *local_b8;
                puVar31[1] = uVar8;
                if (0x10 < uVar13) {
                  uVar8 = local_b8[3];
                  lVar27 = param_2[3];
                  *(ulong *)(lVar27 + 0x10) = local_b8[2];
                  *(ulong *)(lVar27 + 0x18) = uVar8;
                  if (0x20 < (long)uVar13) {
                    puVar31 = (ulong *)(lVar27 + 0x20);
                    do {
                      uVar8 = local_b8[5];
                      puVar18 = puVar31 + 4;
                      *puVar31 = local_b8[4];
                      puVar31[1] = uVar8;
                      uVar8 = local_b8[7];
                      puVar31[2] = local_b8[6];
                      puVar31[3] = uVar8;
                      puVar31 = puVar18;
                      local_b8 = local_b8 + 4;
                    } while (puVar18 < (ulong *)(lVar27 + uVar13));
                  }
                  goto LAB_0010363e;
                }
                param_2[3] = param_2[3] + uVar13;
                piVar9 = (int *)param_2[1];
              }
              *(short *)(piVar9 + 1) = (short)uVar13;
              *piVar9 = iVar22;
              if ((char *)0xffff < pcVar11 + -3) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
              }
              *(short *)((long)piVar9 + 6) = (short)(pcVar11 + -3);
              param_4 = (ulong *)((long)puVar10 + (long)pcVar11);
              param_2[1] = (long)(piVar9 + 2);
              if (param_4 <= puVar19) {
                *(uint *)(lVar2 + (ulong)((uint)(*(int *)(lVar1 + 2 + (ulong)uVar35) * -0x61c8864f)
                                         >> (bVar12 & 0x1f)) * 4) = uVar35 + 2;
                *(int *)(lVar2 + (ulong)((uint)(*(int *)((long)param_4 + -2) * -0x61c8864f) >>
                                        (bVar12 & 0x1f)) * 4) = ((int)param_4 + -2) - iVar4;
                if (local_48 != 0) {
                  while( true ) {
                    uVar13 = (ulong)local_48;
                    if ((uint)*param_4 != *(uint *)((long)param_4 - uVar13)) break;
                    puVar31 = (ulong *)((long)param_4 + 4);
                    puVar18 = (ulong *)((long)param_4 + (4 - uVar13));
                    puVar10 = puVar31;
                    if (puVar31 < puVar24) {
                      if (*puVar18 == *(ulong *)((long)param_4 + 4)) {
                        puVar10 = (ulong *)((long)param_4 + 0xc);
                        puVar18 = (ulong *)((long)param_4 + (0xc - uVar13));
                        if (puVar10 < puVar24) {
LAB_00104751:
                          if (*puVar18 == *puVar10) goto LAB_0010478d;
                          uVar32 = 0;
                          for (uVar13 = *puVar18 ^ *puVar10; (uVar13 & 1) == 0;
                              uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                            uVar32 = uVar32 + 1;
                          }
                          pcVar11 = (char *)((long)puVar10 + ((ulong)(uVar32 >> 3) - (long)puVar31))
                          ;
                          goto LAB_00103e03;
                        }
                        goto LAB_00104495;
                      }
                      uVar32 = 0;
                      for (uVar13 = *puVar18 ^ *(ulong *)((long)param_4 + 4); (uVar13 & 1) == 0;
                          uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                        uVar32 = uVar32 + 1;
                      }
                      pcVar11 = (char *)(ulong)(uVar32 >> 3);
                    }
                    else {
LAB_00104495:
                      if ((puVar10 < (ulong *)((long)puVar17 - 3U)) &&
                         ((uint)*puVar18 == (uint)*puVar10)) {
                        puVar10 = (ulong *)((long)puVar10 + 4);
                        puVar18 = (ulong *)((long)puVar18 + 4);
                      }
                      if ((puVar10 < (ulong *)((long)puVar17 - 1U)) &&
                         ((short)*puVar18 == (short)*puVar10)) {
                        puVar10 = (ulong *)((long)puVar10 + 2);
                        puVar18 = (ulong *)((long)puVar18 + 2);
                      }
                      if (puVar10 < puVar17) {
                        puVar10 = (ulong *)((long)puVar10 +
                                           (ulong)((char)*puVar18 == (char)*puVar10));
                      }
                      pcVar11 = (char *)((long)puVar10 - (long)puVar31);
                    }
LAB_00103e03:
                    puVar31 = (ulong *)((long)param_4 + (long)(pcVar11 + 4));
                    *(int *)(lVar2 + (ulong)((uint)*param_4 * -0x61c8864f >> (bVar12 & 0x1f)) * 4) =
                         (int)param_4 - iVar4;
                    puVar10 = (ulong *)param_2[3];
                    if (puVar26 < param_4) {
                      ZSTD_safecopyLiterals(puVar10,param_4,param_4,puVar26);
                      param_4 = puVar31;
                    }
                    else {
                      uVar13 = param_4[1];
                      *puVar10 = *param_4;
                      puVar10[1] = uVar13;
                      param_4 = puVar31;
                    }
                    puVar3 = (undefined4 *)param_2[1];
                    *(undefined2 *)(puVar3 + 1) = 0;
                    *puVar3 = 1;
                    if ((char *)0xffff < pcVar11 + 1) {
                      *(undefined4 *)(param_2 + 9) = 2;
                      *(int *)((long)param_2 + 0x4c) = (int)((long)puVar3 - *param_2 >> 3);
                    }
                    *(short *)((long)puVar3 + 6) = (short)(pcVar11 + 1);
                    param_2[1] = (long)(puVar3 + 2);
                    if (puVar19 < param_4) {
                      uVar32 = local_7c;
                      local_7c = local_48;
                      local_48 = uVar32;
                      break;
                    }
                    uVar32 = local_48;
                    local_48 = local_7c;
                    local_7c = uVar32;
                  }
                }
              }
              puVar26 = (ulong *)((long)param_4 + 3);
              local_b8 = param_4;
            } while (puVar26 < puVar19);
            bVar37 = local_7c != 0;
LAB_00103778:
            if (!bVar6) goto LAB_001034be;
            uVar34 = uVar23;
            if (bVar37) goto LAB_0010378c;
          }
          else {
            bVar6 = false;
            uVar23 = 0;
            if (puVar26 < puVar19) goto LAB_001012ee;
            bVar37 = uVar32 != 0;
LAB_001034be:
            if (bVar37) goto LAB_0010378c;
          }
          uVar34 = uVar15;
          local_7c = uVar23;
LAB_0010378c:
          *param_3 = local_7c;
          if (local_48 != 0) {
            uVar34 = local_48;
          }
          param_3[1] = uVar34;
          return (char *)((long)puVar17 - (long)local_b8);
        }
        puVar17 = (ulong *)((long)param_4 + param_5);
        puVar19 = puVar17 + -1;
        uVar32 = *param_3;
        uVar34 = param_3[1];
        if (*(int *)(param_1 + 0x28) == 0) {
          local_58 = (ulong *)(uVar13 + lVar1);
          puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
          uVar15 = ((int)puVar30 - iVar4) - uVar15;
          if (uVar15 <= uVar23) {
            uVar23 = uVar15;
          }
        }
        else {
          local_58 = (ulong *)((ulong)uVar15 + lVar1);
          puVar30 = (ulong *)((ulong)(param_4 == local_58) + (long)param_4);
          uVar21 = uVar15;
          uVar23 = ((int)puVar30 - iVar4) - uVar15;
        }
        local_40 = uVar34;
        local_60 = 0;
        if (uVar34 <= uVar23) {
          local_40 = 0;
          local_60 = uVar34;
        }
        puVar26 = (ulong *)((long)puVar30 + 3);
        local_48 = uVar32;
        if (uVar23 < uVar32) {
          if (puVar19 <= puVar26) goto LAB_0010190e;
          local_48 = 0;
          bVar6 = true;
        }
        else {
          bVar6 = false;
          uVar32 = 0;
          if (puVar19 <= puVar26) goto LAB_001018ec;
        }
        bVar12 = 0x40 - cVar5;
        local_b8 = param_4;
        do {
          local_a8 = puVar30 + 0x10;
          uVar7 = *puVar30 * -0x30e4432345000000 >> (bVar12 & 0x3f);
          uVar13 = (ulong)(*(long *)((long)puVar30 + 1) * -0x30e4432345000000) >> (bVar12 & 0x3f);
          bVar37 = local_48 != 0;
          uVar8 = 2;
          uVar15 = *(uint *)(lVar2 + uVar7 * 4);
          puVar24 = (ulong *)((long)puVar30 + 2);
          puVar31 = (ulong *)((long)puVar30 + 1);
          while( true ) {
            puVar18 = puVar26;
            puVar10 = puVar24;
            uVar34 = (int)puVar30 - iVar4;
            puVar16 = (uint *)((long)puVar10 - (ulong)local_48);
            uVar23 = *puVar16;
            *(uint *)(lVar2 + uVar7 * 4) = uVar34;
            local_44 = local_40;
            if (((uint)*puVar10 == uVar23) && (bVar37)) {
              iVar22 = 1;
              uVar8 = (ulong)(*(char *)((long)puVar10 - 1) == *(char *)((long)puVar16 + -1));
              *(int *)(lVar2 + uVar13 * 4) = (int)puVar31 - iVar4;
              puVar31 = (ulong *)((long)puVar10 - uVar8);
              puVar30 = (ulong *)((long)puVar16 - uVar8);
              lVar27 = uVar8 + 4;
              local_7c = uVar34;
              uVar15 = local_48;
              local_60 = local_60;
              goto LAB_00102e77;
            }
            uVar23 = (uint)*puVar30 ^ 1;
            if (uVar21 <= uVar15) {
              uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
            }
            puVar16 = (uint *)(lVar2 + uVar13 * 4);
            local_7c = (int)puVar31 - iVar4;
            if (uVar23 == (uint)*puVar30) {
              *puVar16 = local_7c;
              puVar31 = puVar30;
              local_7c = uVar34;
              goto LAB_00103073;
            }
            uVar13 = *puVar10;
            uVar15 = *puVar16;
            *puVar16 = local_7c;
            uVar7 = uVar13 * -0x30e4432345000000 >> (bVar12 & 0x3f);
            if (uVar15 < uVar21) {
              uVar34 = (uint)*puVar31;
              uVar23 = uVar34 ^ 1;
            }
            else {
              uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
              uVar34 = (uint)*puVar31;
            }
            if (uVar23 == uVar34) break;
            puVar24 = (ulong *)((long)puVar10 + uVar8);
            uVar15 = *(uint *)(lVar2 + uVar7 * 4);
            uVar13 = *puVar18 * -0x30e4432345000000 >> (bVar12 & 0x3f);
            puVar26 = (ulong *)((long)puVar18 + uVar8);
            if (local_a8 <= puVar24) {
              local_a8 = local_a8 + 0x10;
              uVar8 = uVar8 + 1;
            }
            puVar30 = puVar10;
            puVar31 = puVar18;
            if (puVar19 <= puVar26) goto LAB_00102e28;
          }
          if (uVar8 < 5) {
            *(int *)(lVar2 + uVar7 * 4) = (int)puVar10 - iVar4;
          }
LAB_00103073:
          puVar30 = (ulong *)((ulong)uVar15 + lVar1);
          uVar15 = (int)puVar31 - (int)puVar30;
          iVar22 = uVar15 + 3;
          local_60 = local_48;
          if ((local_58 < puVar30) && (lVar27 = 4, local_b8 < puVar31)) {
            while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar30 + -1)) {
              puVar31 = (ulong *)((long)puVar31 + -1);
              puVar30 = (ulong *)((long)puVar30 + -1);
              lVar27 = lVar27 + 1;
              if ((puVar31 <= local_b8) || (puVar30 <= local_58)) break;
            }
          }
          else {
            lVar27 = 4;
          }
LAB_00102e77:
          local_48 = uVar15;
          puVar10 = (ulong *)((long)puVar31 + lVar27);
          puVar30 = (ulong *)((long)puVar30 + lVar27);
          puVar26 = (ulong *)((long)puVar17 - 7);
          puVar24 = puVar10;
          if (puVar10 < puVar26) {
            if (*puVar30 == *puVar10) {
              puVar24 = puVar10 + 1;
              puVar30 = puVar30 + 1;
              if (puVar24 < puVar26) {
LAB_00103119:
                if (*puVar30 == *puVar24) goto LAB_001041c0;
                uVar15 = 0;
                for (uVar13 = *puVar30 ^ *puVar24; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                pcVar11 = (char *)((long)puVar24 + ((ulong)(uVar15 >> 3) - (long)puVar10));
                goto LAB_00102eaa;
              }
              goto LAB_00103013;
            }
            uVar15 = 0;
            for (uVar13 = *puVar30 ^ *puVar10; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar15 = uVar15 + 1;
            }
            pcVar11 = (char *)(ulong)(uVar15 >> 3);
          }
          else {
LAB_00103013:
            if ((puVar24 < (ulong *)((long)puVar17 + -3)) && ((uint)*puVar30 == (uint)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
            if ((puVar24 < (ulong *)((long)puVar17 + -1)) && ((short)*puVar30 == (short)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
            if (puVar24 < puVar17) {
              puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar30 == (char)*puVar24));
            }
            pcVar11 = (char *)((long)puVar24 - (long)puVar10);
          }
LAB_00102eaa:
          pcVar11 = pcVar11 + lVar27;
          puVar24 = puVar17 + -4;
          uVar13 = (long)puVar31 - (long)local_b8;
          puVar30 = (ulong *)param_2[3];
          if (puVar24 < puVar31) {
            ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar24);
LAB_00102fd9:
            param_2[3] = param_2[3] + uVar13;
            piVar9 = (int *)param_2[1];
            if (0xffff < uVar13) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
            }
          }
          else {
            uVar8 = local_b8[1];
            *puVar30 = *local_b8;
            puVar30[1] = uVar8;
            if (0x10 < uVar13) {
              uVar8 = local_b8[3];
              lVar27 = param_2[3];
              *(ulong *)(lVar27 + 0x10) = local_b8[2];
              *(ulong *)(lVar27 + 0x18) = uVar8;
              if (0x20 < (long)uVar13) {
                puVar30 = (ulong *)(lVar27 + 0x20);
                do {
                  uVar8 = local_b8[5];
                  puVar10 = puVar30 + 4;
                  *puVar30 = local_b8[4];
                  puVar30[1] = uVar8;
                  uVar8 = local_b8[7];
                  puVar30[2] = local_b8[6];
                  puVar30[3] = uVar8;
                  puVar30 = puVar10;
                  local_b8 = local_b8 + 4;
                } while (puVar10 < (ulong *)(lVar27 + uVar13));
              }
              goto LAB_00102fd9;
            }
            param_2[3] = param_2[3] + uVar13;
            piVar9 = (int *)param_2[1];
          }
          *(short *)(piVar9 + 1) = (short)uVar13;
          *piVar9 = iVar22;
          if ((char *)0xffff < pcVar11 + -3) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
          }
          *(short *)((long)piVar9 + 6) = (short)(pcVar11 + -3);
          puVar30 = (ulong *)((long)puVar31 + (long)pcVar11);
          param_2[1] = (long)(piVar9 + 2);
          uVar15 = local_48;
          if (puVar30 <= puVar19) {
            *(uint *)(lVar2 + ((ulong)(*(long *)(lVar1 + 2 + (ulong)local_7c) * -0x30e4432345000000)
                              >> (bVar12 & 0x3f)) * 4) = local_7c + 2;
            *(int *)(lVar2 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e4432345000000) >>
                             (bVar12 & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar4;
            if (local_60 != 0) {
              do {
                local_48 = uVar15;
                uVar13 = (ulong)local_60;
                uVar15 = local_48;
                if ((uint)*puVar30 != *(uint *)((long)puVar30 - uVar13)) break;
                puVar31 = (ulong *)((long)puVar30 + 4);
                puVar18 = (ulong *)((long)puVar30 + (4 - uVar13));
                puVar10 = puVar31;
                if (puVar31 < puVar26) {
                  if (*puVar18 == *(ulong *)((long)puVar30 + 4)) {
                    puVar10 = (ulong *)((long)puVar30 + 0xc);
                    puVar18 = (ulong *)((long)puVar30 + (0xc - uVar13));
                    if (puVar10 < puVar26) {
LAB_00104711:
                      if (*puVar18 == *puVar10) goto LAB_001047e6;
                      uVar15 = 0;
                      for (uVar13 = *puVar18 ^ *puVar10; (uVar13 & 1) == 0;
                          uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                        uVar15 = uVar15 + 1;
                      }
                      pcVar11 = (char *)((long)puVar10 + ((ulong)(uVar15 >> 3) - (long)puVar31));
                      goto LAB_00103c18;
                    }
                    goto LAB_0010457c;
                  }
                  uVar15 = 0;
                  for (uVar13 = *puVar18 ^ *(ulong *)((long)puVar30 + 4); (uVar13 & 1) == 0;
                      uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  pcVar11 = (char *)(ulong)(uVar15 >> 3);
                }
                else {
LAB_0010457c:
                  if ((puVar10 < (ulong *)((long)puVar17 + -3)) &&
                     ((uint)*puVar18 == (uint)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 4);
                    puVar18 = (ulong *)((long)puVar18 + 4);
                  }
                  if ((puVar10 < (ulong *)((long)puVar17 + -1)) &&
                     ((short)*puVar18 == (short)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 2);
                    puVar18 = (ulong *)((long)puVar18 + 2);
                  }
                  if (puVar10 < puVar17) {
                    puVar10 = (ulong *)((long)puVar10 + (ulong)((char)*puVar18 == (char)*puVar10));
                  }
                  pcVar11 = (char *)((long)puVar10 - (long)puVar31);
                }
LAB_00103c18:
                puVar31 = (ulong *)((long)puVar30 + (long)(pcVar11 + 4));
                *(int *)(lVar2 + (*puVar30 * -0x30e4432345000000 >> (bVar12 & 0x3f)) * 4) =
                     (int)puVar30 - iVar4;
                puVar10 = (ulong *)param_2[3];
                if (puVar24 < puVar30) {
                  ZSTD_safecopyLiterals(puVar10,puVar30,puVar30,puVar24);
                  puVar30 = puVar31;
                }
                else {
                  uVar13 = puVar30[1];
                  *puVar10 = *puVar30;
                  puVar10[1] = uVar13;
                  puVar30 = puVar31;
                }
                puVar3 = (undefined4 *)param_2[1];
                *(undefined2 *)(puVar3 + 1) = 0;
                *puVar3 = 1;
                if ((char *)0xffff < pcVar11 + 1) {
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((long)puVar3 - *param_2 >> 3);
                }
                *(short *)((long)puVar3 + 6) = (short)(pcVar11 + 1);
                param_2[1] = (long)(puVar3 + 2);
                uVar15 = local_60;
                local_60 = local_48;
              } while (puVar30 <= puVar19);
            }
          }
          local_48 = uVar15;
          puVar26 = (ulong *)((long)puVar30 + 3);
          local_b8 = puVar30;
        } while (puVar26 < puVar19);
      }
LAB_001040a3:
      bVar37 = local_48 != 0;
      local_b8 = puVar30;
LAB_00102e28:
      local_40 = uVar32;
      uVar15 = local_40;
      if (bVar6) {
        if (bVar37) goto LAB_0010190e;
      }
      else {
LAB_00101900:
        local_40 = local_44;
        local_44 = local_40;
        if (bVar37) goto LAB_0010190e;
      }
      local_40 = local_44;
      local_48 = uVar15;
    }
LAB_0010190e:
    *param_3 = local_48;
    local_58._0_4_ = local_60;
    goto LAB_0010191d;
  }
  if (iVar22 == 6) {
    lVar1 = *(long *)(param_1 + 8);
    uVar13 = (ulong)(uVar15 + 1);
    uVar15 = *(uint *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x70);
    iVar22 = (int)lVar1;
    uVar23 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
    iVar14 = (iVar20 - iVar22) + iVar14;
    puVar17 = (ulong *)((long)param_4 + param_5);
    uVar21 = iVar14 - uVar23;
    if (iVar14 - uVar15 <= uVar23) {
      uVar21 = uVar15;
    }
    puVar19 = puVar17 + -1;
    uVar32 = *param_3;
    uVar34 = param_3[1];
    if (*(int *)(param_1 + 0x28) == 0) {
      local_50 = (ulong *)(lVar1 + (ulong)uVar21);
      puVar30 = (ulong *)((ulong)(param_4 == local_50) + (long)param_4);
      uVar15 = ((int)puVar30 - iVar22) - uVar15;
      if (uVar23 < uVar15) {
        uVar15 = uVar23;
      }
    }
    else {
      local_50 = (ulong *)(lVar1 + (ulong)uVar15);
      puVar30 = (ulong *)((ulong)(param_4 == local_50) + (long)param_4);
      uVar21 = uVar15;
      uVar15 = ((int)puVar30 - iVar22) - uVar15;
    }
    local_40 = uVar34;
    local_58._0_4_ = 0;
    if (uVar34 <= uVar15) {
      local_40 = 0;
      local_58._0_4_ = uVar34;
    }
    puVar24 = (ulong *)(uVar13 + (long)puVar30);
    puVar26 = (ulong *)((long)puVar24 + 1);
    local_48 = uVar32;
    if (uVar32 <= uVar15) {
      bVar6 = false;
      local_44 = 0;
      if (puVar26 < puVar19) goto LAB_00101550;
      bVar37 = uVar32 != 0;
      uVar15 = local_40;
      goto joined_r0x00102585;
    }
    if (puVar26 < puVar19) {
      local_48 = 0;
      bVar6 = true;
      local_44 = uVar32;
LAB_00101550:
      bVar12 = 0x40 - (char)*(undefined4 *)(param_1 + 0x108);
      local_b8 = param_4;
LAB_0010157a:
      local_a8 = puVar30 + 0x10;
      uVar28 = *puVar30 * -0x30e4432340650000 >> (bVar12 & 0x3f);
      uVar7 = (ulong)(*(long *)((long)puVar30 + 1) * -0x30e4432340650000) >> (bVar12 & 0x3f);
      bVar37 = local_48 != 0;
      uVar15 = *(uint *)(lVar2 + uVar28 * 4);
      uVar8 = uVar13;
      puVar31 = (ulong *)((long)puVar30 + 1);
      do {
        puVar18 = puVar26;
        puVar10 = puVar24;
        uVar32 = (int)puVar30 - iVar22;
        puVar16 = (uint *)((long)puVar10 - (ulong)local_48);
        uVar23 = *puVar16;
        *(uint *)(lVar2 + uVar28 * 4) = uVar32;
        if (((uint)*puVar10 == uVar23) && (bVar37)) {
          iVar20 = 1;
          uVar8 = (ulong)(*(char *)((long)puVar10 - 1) == *(char *)((long)puVar16 + -1));
          *(int *)(lVar2 + uVar7 * 4) = (int)puVar31 - iVar22;
          puVar31 = (ulong *)((long)puVar10 - uVar8);
          puVar30 = (ulong *)((long)puVar16 - uVar8);
          lVar27 = uVar8 + 4;
          local_7c = uVar32;
          uVar15 = local_48;
          goto LAB_00101f3e;
        }
        uVar23 = (uint)*puVar30 ^ 1;
        if (uVar21 <= uVar15) {
          uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
        }
        puVar16 = (uint *)(lVar2 + uVar7 * 4);
        local_7c = (int)puVar31 - iVar22;
        if (uVar23 == (uint)*puVar30) {
          *puVar16 = local_7c;
          puVar31 = puVar30;
          local_7c = uVar32;
          goto LAB_0010267b;
        }
        uVar7 = *puVar10;
        uVar15 = *puVar16;
        *puVar16 = local_7c;
        uVar28 = uVar7 * -0x30e4432340650000 >> (bVar12 & 0x3f);
        if (uVar15 < uVar21) {
          if (((uint)*puVar31 ^ 1) == (uint)*puVar31) goto LAB_001016a8;
        }
        else if (*(uint *)(lVar1 + (ulong)uVar15) == (uint)*puVar31) goto LAB_001016a8;
        puVar24 = (ulong *)((long)puVar10 + uVar8);
        uVar15 = *(uint *)(lVar2 + uVar28 * 4);
        uVar7 = *puVar18 * -0x30e4432340650000 >> (bVar12 & 0x3f);
        puVar26 = (ulong *)((long)puVar18 + uVar8);
        if (local_a8 <= puVar24) {
          local_a8 = local_a8 + 0x10;
          uVar8 = uVar8 + 1;
        }
        puVar30 = puVar10;
        puVar31 = puVar18;
        if (puVar19 <= puVar26) goto LAB_00101958;
      } while( true );
    }
  }
  else if (iVar22 == 7) {
    lVar1 = *(long *)(param_1 + 8);
    uVar13 = (ulong)(uVar15 + 1);
    uVar15 = *(uint *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x70);
    iVar22 = (int)lVar1;
    uVar23 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
    iVar14 = (iVar20 - iVar22) + iVar14;
    uVar21 = iVar14 - uVar23;
    if (iVar14 - uVar15 <= uVar23) {
      uVar21 = uVar15;
    }
    puVar17 = (ulong *)((long)param_4 + param_5 + -8);
    local_44 = *param_3;
    uVar32 = param_3[1];
    if (*(int *)(param_1 + 0x28) == 0) {
      local_50 = (ulong *)(lVar1 + (ulong)uVar21);
      puVar30 = (ulong *)((ulong)(param_4 == local_50) + (long)param_4);
      uVar15 = ((int)puVar30 - iVar22) - uVar15;
      if (uVar23 < uVar15) {
        uVar15 = uVar23;
      }
    }
    else {
      local_50 = (ulong *)(lVar1 + (ulong)uVar15);
      puVar30 = (ulong *)((ulong)(param_4 == local_50) + (long)param_4);
      uVar21 = uVar15;
      uVar15 = ((int)puVar30 - iVar22) - uVar15;
    }
    local_40 = uVar32;
    local_58._0_4_ = 0;
    if (uVar32 <= uVar15) {
      local_40 = 0;
      local_58._0_4_ = uVar32;
    }
    puVar26 = (ulong *)(uVar13 + (long)puVar30);
    puVar19 = (ulong *)((long)puVar26 + 1);
    local_48 = local_44;
    if (uVar15 < local_44) {
      if (puVar19 < puVar17) {
        local_48 = 0;
        bVar6 = true;
LAB_00101a78:
        bVar12 = 0x40 - (char)*(undefined4 *)(param_1 + 0x108);
        local_b8 = param_4;
LAB_00101aa5:
        local_a8 = puVar30 + 0x10;
        local_68 = (ulong *)((long)param_4 + param_5);
        uVar28 = *puVar30 * -0x30e44323405a9d00 >> (bVar12 & 0x3f);
        uVar7 = (ulong)(*(long *)((long)puVar30 + 1) * -0x30e44323405a9d00) >> (bVar12 & 0x3f);
        bVar37 = local_48 != 0;
        uVar15 = *(uint *)(lVar2 + uVar28 * 4);
        uVar8 = uVar13;
        puVar24 = (ulong *)((long)puVar30 + 1);
        do {
          puVar10 = puVar19;
          puVar31 = puVar26;
          uVar32 = (int)puVar30 - iVar22;
          puVar16 = (uint *)((long)puVar31 - (ulong)local_48);
          uVar23 = *puVar16;
          *(uint *)(lVar2 + uVar28 * 4) = uVar32;
          if (((uint)*puVar31 == uVar23) && (bVar37)) {
            iVar20 = 1;
            uVar8 = (ulong)(*(char *)((long)puVar31 - 1) == *(char *)((long)puVar16 + -1));
            *(int *)(lVar2 + uVar7 * 4) = (int)puVar24 - iVar22;
            puVar24 = (ulong *)((long)puVar31 - uVar8);
            puVar19 = (ulong *)((long)puVar16 - uVar8);
            lVar27 = uVar8 + 4;
            local_7c = uVar32;
            uVar15 = local_48;
            goto LAB_00101c16;
          }
          uVar23 = (uint)*puVar30 ^ 1;
          if (uVar21 <= uVar15) {
            uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
          }
          puVar16 = (uint *)(lVar2 + uVar7 * 4);
          local_7c = (int)puVar24 - iVar22;
          if (uVar23 == (uint)*puVar30) {
            *puVar16 = local_7c;
            puVar24 = puVar30;
            local_7c = uVar32;
            goto LAB_0010260b;
          }
          uVar7 = *puVar31;
          uVar15 = *puVar16;
          *puVar16 = local_7c;
          uVar28 = uVar7 * -0x30e44323405a9d00 >> (bVar12 & 0x3f);
          if (uVar15 < uVar21) {
            if (((uint)*puVar24 ^ 1) == (uint)*puVar24) goto LAB_00101bcc;
          }
          else if (*(uint *)(lVar1 + (ulong)uVar15) == (uint)*puVar24) goto LAB_00101bcc;
          puVar26 = (ulong *)((long)puVar31 + uVar8);
          uVar15 = *(uint *)(lVar2 + uVar28 * 4);
          uVar7 = *puVar10 * -0x30e44323405a9d00 >> (bVar12 & 0x3f);
          puVar19 = (ulong *)((long)puVar10 + uVar8);
          if (local_a8 <= puVar26) {
            local_a8 = local_a8 + 0x10;
            uVar8 = uVar8 + 1;
          }
          puVar30 = puVar31;
          puVar24 = puVar10;
          if (puVar17 <= puVar19) goto LAB_00101958;
        } while( true );
      }
    }
    else {
      bVar6 = false;
      local_44 = 0;
      if (puVar19 < puVar17) goto LAB_00101a78;
    }
  }
  else {
    if (iVar22 != 5) {
      pcVar11 = (char *)ZSTD_compressBlock_fast_noDict_4_1(param_1,param_2,param_3);
      return pcVar11;
    }
    lVar1 = *(long *)(param_1 + 8);
    uVar13 = (ulong)(uVar15 + 1);
    uVar15 = *(uint *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x70);
    iVar22 = (int)lVar1;
    uVar23 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
    iVar14 = (iVar20 - iVar22) + iVar14;
    puVar17 = (ulong *)((long)param_4 + param_5);
    uVar21 = iVar14 - uVar23;
    if (iVar14 - uVar15 <= uVar23) {
      uVar21 = uVar15;
    }
    puVar19 = puVar17 + -1;
    local_44 = *param_3;
    uVar32 = param_3[1];
    if (*(int *)(param_1 + 0x28) == 0) {
      local_50 = (ulong *)(lVar1 + (ulong)uVar21);
      puVar30 = (ulong *)((ulong)(param_4 == local_50) + (long)param_4);
      uVar15 = ((int)puVar30 - iVar22) - uVar15;
      if (uVar23 < uVar15) {
        uVar15 = uVar23;
      }
    }
    else {
      local_50 = (ulong *)(lVar1 + (ulong)uVar15);
      puVar30 = (ulong *)((ulong)(param_4 == local_50) + (long)param_4);
      uVar21 = uVar15;
      uVar15 = ((int)puVar30 - iVar22) - uVar15;
    }
    local_40 = uVar32;
    local_58._0_4_ = 0;
    if (uVar32 <= uVar15) {
      local_40 = 0;
      local_58._0_4_ = uVar32;
    }
    puVar24 = (ulong *)(uVar13 + (long)puVar30);
    puVar26 = (ulong *)((long)puVar24 + 1);
    local_48 = local_44;
    if (uVar15 < local_44) {
      if (puVar26 < puVar19) {
        local_48 = 0;
        bVar6 = true;
LAB_00101079:
        bVar12 = 0x40 - (char)*(undefined4 *)(param_1 + 0x108);
        local_b8 = param_4;
LAB_001010a3:
        local_a8 = puVar30 + 0x10;
        uVar28 = *puVar30 * -0x30e4432345000000 >> (bVar12 & 0x3f);
        uVar7 = (ulong)(*(long *)((long)puVar30 + 1) * -0x30e4432345000000) >> (bVar12 & 0x3f);
        bVar37 = local_48 != 0;
        uVar15 = *(uint *)(lVar2 + uVar28 * 4);
        uVar8 = uVar13;
        puVar31 = (ulong *)((long)puVar30 + 1);
        do {
          puVar18 = puVar26;
          puVar10 = puVar24;
          uVar32 = (int)puVar30 - iVar22;
          puVar16 = (uint *)((long)puVar10 - (ulong)local_48);
          uVar23 = *puVar16;
          *(uint *)(lVar2 + uVar28 * 4) = uVar32;
          if (((uint)*puVar10 == uVar23) && (bVar37)) {
            iVar20 = 1;
            uVar8 = (ulong)(*(char *)((long)puVar10 - 1) == *(char *)((long)puVar16 + -1));
            *(int *)(lVar2 + uVar7 * 4) = (int)puVar31 - iVar22;
            puVar31 = (ulong *)((long)puVar10 - uVar8);
            puVar30 = (ulong *)((long)puVar16 - uVar8);
            lVar27 = uVar8 + 4;
            local_7c = uVar32;
            uVar15 = local_48;
            local_58._0_4_ = (uint)local_58;
            goto LAB_0010225e;
          }
          uVar23 = (uint)*puVar30 ^ 1;
          if (uVar21 <= uVar15) {
            uVar23 = *(uint *)(lVar1 + (ulong)uVar15);
          }
          puVar16 = (uint *)(lVar2 + uVar7 * 4);
          local_7c = (int)puVar31 - iVar22;
          if (uVar23 == (uint)*puVar30) {
            *puVar16 = local_7c;
            puVar31 = puVar30;
            local_7c = uVar32;
            goto LAB_0010259b;
          }
          uVar7 = *puVar10;
          uVar15 = *puVar16;
          *puVar16 = local_7c;
          uVar28 = uVar7 * -0x30e4432345000000 >> (bVar12 & 0x3f);
          if (uVar15 < uVar21) {
            if (((uint)*puVar31 ^ 1) == (uint)*puVar31) goto LAB_001011d0;
          }
          else if (*(uint *)(lVar1 + (ulong)uVar15) == (uint)*puVar31) goto LAB_001011d0;
          puVar24 = (ulong *)((long)puVar10 + uVar8);
          uVar15 = *(uint *)(lVar2 + uVar28 * 4);
          uVar7 = *puVar18 * -0x30e4432345000000 >> (bVar12 & 0x3f);
          puVar26 = (ulong *)((long)puVar18 + uVar8);
          if (local_a8 <= puVar24) {
            local_a8 = local_a8 + 0x10;
            uVar8 = uVar8 + 1;
          }
          puVar30 = puVar10;
          puVar31 = puVar18;
          if (puVar19 <= puVar26) goto LAB_00101958;
        } while( true );
      }
    }
    else {
      bVar6 = false;
      local_44 = 0;
      if (puVar26 < puVar19) goto LAB_00101079;
    }
  }
  goto LAB_0010196c;
LAB_001016a8:
  if (uVar8 < 5) {
    *(int *)(lVar2 + uVar28 * 4) = (int)puVar10 - iVar22;
  }
LAB_0010267b:
  puVar30 = (ulong *)((ulong)uVar15 + lVar1);
  uVar15 = (int)puVar31 - (int)puVar30;
  iVar20 = uVar15 + 3;
  local_58._0_4_ = local_48;
  if ((local_50 < puVar30) && (lVar27 = 4, local_b8 < puVar31)) {
    while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar30 + -1)) {
      puVar31 = (ulong *)((long)puVar31 + -1);
      puVar30 = (ulong *)((long)puVar30 + -1);
      lVar27 = lVar27 + 1;
      if ((puVar31 <= local_b8) || (puVar30 <= local_50)) break;
    }
  }
  else {
    lVar27 = 4;
  }
LAB_00101f3e:
  local_48 = uVar15;
  puVar10 = (ulong *)((long)puVar31 + lVar27);
  puVar30 = (ulong *)((long)puVar30 + lVar27);
  puVar26 = (ulong *)((long)puVar17 - 7);
  puVar24 = puVar10;
  if (puVar10 < puVar26) {
    if (*puVar30 == *puVar10) {
      puVar24 = puVar10 + 1;
      puVar30 = puVar30 + 1;
      if (puVar24 < puVar26) {
LAB_00102ba1:
        if (*puVar30 == *puVar24) goto LAB_00104160;
        uVar15 = 0;
        for (uVar8 = *puVar30 ^ *puVar24; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000)
        {
          uVar15 = uVar15 + 1;
        }
        pcVar11 = (char *)((long)puVar24 + ((ulong)(uVar15 >> 3) - (long)puVar10));
        goto LAB_00101f71;
      }
      goto LAB_001021d3;
    }
    uVar15 = 0;
    for (uVar8 = *puVar30 ^ *puVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      uVar15 = uVar15 + 1;
    }
    pcVar11 = (char *)(ulong)(uVar15 >> 3);
  }
  else {
LAB_001021d3:
    if ((puVar24 < (ulong *)((long)puVar17 - 3U)) && ((uint)*puVar30 == (uint)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 4);
      puVar30 = (ulong *)((long)puVar30 + 4);
    }
    if ((puVar24 < (ulong *)((long)puVar17 - 1U)) && ((short)*puVar30 == (short)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 2);
      puVar30 = (ulong *)((long)puVar30 + 2);
    }
    if (puVar24 < puVar17) {
      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar30 == (char)*puVar24));
    }
    pcVar11 = (char *)((long)puVar24 - (long)puVar10);
  }
LAB_00101f71:
  pcVar11 = pcVar11 + lVar27;
  puVar24 = puVar17 + -4;
  uVar8 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar24 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar24);
  }
  else {
    uVar7 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar7;
    if (uVar8 < 0x11) {
      param_2[3] = param_2[3] + uVar8;
      piVar9 = (int *)param_2[1];
      goto LAB_00101fb8;
    }
    uVar7 = local_b8[3];
    lVar27 = param_2[3];
    *(ulong *)(lVar27 + 0x10) = local_b8[2];
    *(ulong *)(lVar27 + 0x18) = uVar7;
    if (0x20 < (long)uVar8) {
      puVar30 = (ulong *)(lVar27 + 0x20);
      do {
        uVar7 = local_b8[5];
        puVar10 = puVar30 + 4;
        *puVar30 = local_b8[4];
        puVar30[1] = uVar7;
        uVar7 = local_b8[7];
        puVar30[2] = local_b8[6];
        puVar30[3] = uVar7;
        puVar30 = puVar10;
        local_b8 = local_b8 + 4;
      } while (puVar10 < (ulong *)(lVar27 + uVar8));
    }
  }
  param_2[3] = param_2[3] + uVar8;
  piVar9 = (int *)param_2[1];
  if (0xffff < uVar8) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
  }
LAB_00101fb8:
  *(short *)(piVar9 + 1) = (short)uVar8;
  *piVar9 = iVar20;
  if ((char *)0xffff < pcVar11 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
  }
  *(short *)((long)piVar9 + 6) = (short)(pcVar11 + -3);
  puVar30 = (ulong *)((long)puVar31 + (long)pcVar11);
  param_2[1] = (long)(piVar9 + 2);
  uVar15 = local_48;
  if (puVar30 <= puVar19) {
    *(uint *)(lVar2 + ((ulong)(*(long *)(lVar1 + 2 + (ulong)local_7c) * -0x30e4432340650000) >>
                      (bVar12 & 0x3f)) * 4) = local_7c + 2;
    *(int *)(lVar2 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e4432340650000) >>
                     (bVar12 & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar22;
    if ((uint)local_58 != 0) {
      do {
        local_48 = uVar15;
        uVar8 = (ulong)(uint)local_58;
        uVar15 = local_48;
        if ((uint)*puVar30 != *(uint *)((long)puVar30 - uVar8)) break;
        puVar31 = (ulong *)((long)puVar30 + 4);
        puVar18 = (ulong *)((long)puVar30 + (4 - uVar8));
        puVar10 = puVar31;
        if (puVar31 < puVar26) {
          if (*puVar18 == *(ulong *)((long)puVar30 + 4)) {
            puVar10 = (ulong *)((long)puVar30 + 0xc);
            puVar18 = (ulong *)((long)puVar30 + (0xc - uVar8));
            if (puVar10 < puVar26) {
LAB_001045ea:
              if (*puVar18 == *puVar10) goto LAB_00104777;
              uVar15 = 0;
              for (uVar8 = *puVar18 ^ *puVar10; (uVar8 & 1) == 0;
                  uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              pcVar11 = (char *)((long)puVar10 + ((ulong)(uVar15 >> 3) - (long)puVar31));
              goto LAB_001020b4;
            }
            goto LAB_0010433c;
          }
          uVar15 = 0;
          for (uVar8 = *puVar18 ^ *(ulong *)((long)puVar30 + 4); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            uVar15 = uVar15 + 1;
          }
          pcVar11 = (char *)(ulong)(uVar15 >> 3);
        }
        else {
LAB_0010433c:
          if ((puVar10 < (ulong *)((long)puVar17 - 3U)) && ((uint)*puVar18 == (uint)*puVar10)) {
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar18 = (ulong *)((long)puVar18 + 4);
          }
          if ((puVar10 < (ulong *)((long)puVar17 - 1U)) && ((short)*puVar18 == (short)*puVar10)) {
            puVar10 = (ulong *)((long)puVar10 + 2);
            puVar18 = (ulong *)((long)puVar18 + 2);
          }
          if (puVar10 < puVar17) {
            puVar10 = (ulong *)((long)puVar10 + (ulong)((char)*puVar18 == (char)*puVar10));
          }
          pcVar11 = (char *)((long)puVar10 - (long)puVar31);
        }
LAB_001020b4:
        puVar31 = (ulong *)((long)puVar30 + (long)(pcVar11 + 4));
        *(int *)(lVar2 + (*puVar30 * -0x30e4432340650000 >> (bVar12 & 0x3f)) * 4) =
             (int)puVar30 - iVar22;
        puVar10 = (ulong *)param_2[3];
        if (puVar24 < puVar30) {
          ZSTD_safecopyLiterals(puVar10,puVar30,puVar30,puVar24);
          puVar30 = puVar31;
        }
        else {
          uVar8 = puVar30[1];
          *puVar10 = *puVar30;
          puVar10[1] = uVar8;
          puVar30 = puVar31;
        }
        puVar3 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar3 + 1) = 0;
        *puVar3 = 1;
        if ((char *)0xffff < pcVar11 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((long)puVar3 - *param_2 >> 3);
        }
        *(short *)((long)puVar3 + 6) = (short)(pcVar11 + 1);
        param_2[1] = (long)(puVar3 + 2);
        uVar15 = (uint)local_58;
        local_58._0_4_ = local_48;
      } while (puVar30 <= puVar19);
    }
  }
  local_48 = uVar15;
  puVar24 = (ulong *)((long)puVar30 + uVar13);
  puVar26 = (ulong *)((long)puVar24 + 1);
  local_b8 = puVar30;
  if (puVar19 <= puVar26) goto LAB_00102dd0;
  goto LAB_0010157a;
LAB_00104160:
  puVar24 = puVar24 + 1;
  puVar30 = puVar30 + 1;
  if (puVar26 <= puVar24) goto LAB_001021d3;
  goto LAB_00102ba1;
LAB_00104777:
  puVar10 = puVar10 + 1;
  puVar18 = puVar18 + 1;
  if (puVar26 <= puVar10) goto LAB_0010433c;
  goto LAB_001045ea;
LAB_00101bcc:
  if (uVar8 < 5) {
    *(int *)(lVar2 + uVar28 * 4) = (int)puVar31 - iVar22;
  }
LAB_0010260b:
  puVar19 = (ulong *)((ulong)uVar15 + lVar1);
  uVar15 = (int)puVar24 - (int)puVar19;
  iVar20 = uVar15 + 3;
  local_58._0_4_ = local_48;
  if ((local_b8 < puVar24) && (lVar27 = 4, local_50 < puVar19)) {
    while (*(char *)((long)puVar24 + -1) == *(char *)((long)puVar19 + -1)) {
      puVar24 = (ulong *)((long)puVar24 + -1);
      puVar19 = (ulong *)((long)puVar19 + -1);
      lVar27 = lVar27 + 1;
      if ((puVar24 <= local_b8) || (puVar19 <= local_50)) break;
    }
  }
  else {
    lVar27 = 4;
  }
LAB_00101c16:
  local_48 = uVar15;
  puVar31 = (ulong *)((long)puVar24 + lVar27);
  puVar19 = (ulong *)((long)puVar19 + lVar27);
  puVar26 = (ulong *)((long)local_68 - 7);
  puVar30 = puVar31;
  if (puVar31 < puVar26) {
    if (*puVar19 == *puVar31) {
      puVar30 = puVar31 + 1;
      puVar19 = puVar19 + 1;
      if (puVar30 < puVar26) {
LAB_00102b29:
        if (*puVar19 == *puVar30) goto LAB_00104140;
        uVar15 = 0;
        for (uVar8 = *puVar19 ^ *puVar30; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000)
        {
          uVar15 = uVar15 + 1;
        }
        pcVar11 = (char *)((long)puVar30 + ((ulong)(uVar15 >> 3) - (long)puVar31));
        goto LAB_00101c49;
      }
      goto LAB_00101eab;
    }
    uVar15 = 0;
    for (uVar8 = *puVar19 ^ *puVar31; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      uVar15 = uVar15 + 1;
    }
    pcVar11 = (char *)(ulong)(uVar15 >> 3);
  }
  else {
LAB_00101eab:
    if ((puVar30 < (ulong *)((long)local_68 + -3)) && ((uint)*puVar19 == (uint)*puVar30)) {
      puVar30 = (ulong *)((long)puVar30 + 4);
      puVar19 = (ulong *)((long)puVar19 + 4);
    }
    if ((puVar30 < (ulong *)((long)local_68 + -1)) && ((short)*puVar19 == (short)*puVar30)) {
      puVar30 = (ulong *)((long)puVar30 + 2);
      puVar19 = (ulong *)((long)puVar19 + 2);
    }
    if (puVar30 < local_68) {
      puVar30 = (ulong *)((long)puVar30 + (ulong)((char)*puVar19 == (char)*puVar30));
    }
    pcVar11 = (char *)((long)puVar30 - (long)puVar31);
  }
LAB_00101c49:
  pcVar11 = pcVar11 + lVar27;
  puVar19 = local_68 + -4;
  uVar8 = (long)puVar24 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar19 < puVar24) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar24,puVar19);
  }
  else {
    uVar7 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar7;
    if (uVar8 < 0x11) {
      param_2[3] = param_2[3] + uVar8;
      piVar9 = (int *)param_2[1];
      goto LAB_00101c90;
    }
    uVar7 = local_b8[3];
    lVar27 = param_2[3];
    *(ulong *)(lVar27 + 0x10) = local_b8[2];
    *(ulong *)(lVar27 + 0x18) = uVar7;
    if (0x20 < (long)uVar8) {
      puVar30 = (ulong *)(lVar27 + 0x20);
      do {
        uVar7 = local_b8[5];
        puVar31 = puVar30 + 4;
        *puVar30 = local_b8[4];
        puVar30[1] = uVar7;
        uVar7 = local_b8[7];
        puVar30[2] = local_b8[6];
        puVar30[3] = uVar7;
        puVar30 = puVar31;
        local_b8 = local_b8 + 4;
      } while (puVar31 < (ulong *)(lVar27 + uVar8));
    }
  }
  param_2[3] = param_2[3] + uVar8;
  piVar9 = (int *)param_2[1];
  if (0xffff < uVar8) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
  }
LAB_00101c90:
  *(short *)(piVar9 + 1) = (short)uVar8;
  *piVar9 = iVar20;
  if ((char *)0xffff < pcVar11 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
  }
  *(short *)((long)piVar9 + 6) = (short)(pcVar11 + -3);
  puVar30 = (ulong *)((long)puVar24 + (long)pcVar11);
  param_2[1] = (long)(piVar9 + 2);
  uVar15 = local_48;
  if (puVar30 <= puVar17) {
    *(uint *)(lVar2 + ((ulong)(*(long *)(lVar1 + 2 + (ulong)local_7c) * -0x30e44323405a9d00) >>
                      (bVar12 & 0x3f)) * 4) = local_7c + 2;
    *(int *)(lVar2 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e44323405a9d00) >>
                     (bVar12 & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar22;
    if ((uint)local_58 != 0) {
      do {
        local_48 = uVar15;
        local_68 = (ulong *)((long)param_4 + param_5);
        uVar8 = (ulong)(uint)local_58;
        uVar15 = local_48;
        if ((uint)*puVar30 != *(uint *)((long)puVar30 - uVar8)) break;
        puVar24 = (ulong *)((long)puVar30 + 4);
        puVar10 = (ulong *)((long)puVar30 + (4 - uVar8));
        puVar31 = puVar24;
        if (puVar24 < puVar26) {
          if (*puVar10 == *(ulong *)((long)puVar30 + 4)) {
            puVar31 = (ulong *)((long)puVar30 + 0xc);
            puVar10 = (ulong *)((long)puVar30 + (0xc - uVar8));
            if (puVar31 < puVar26) {
LAB_00104660:
              if (*puVar10 == *puVar31) goto LAB_001047a4;
              uVar15 = 0;
              for (uVar8 = *puVar10 ^ *puVar31; (uVar8 & 1) == 0;
                  uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              pcVar11 = (char *)((long)puVar31 + ((ulong)(uVar15 >> 3) - (long)puVar24));
              goto LAB_00101d8e;
            }
            goto LAB_001042c9;
          }
          uVar15 = 0;
          for (uVar8 = *puVar10 ^ *(ulong *)((long)puVar30 + 4); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            uVar15 = uVar15 + 1;
          }
          pcVar11 = (char *)(ulong)(uVar15 >> 3);
        }
        else {
LAB_001042c9:
          if ((puVar31 < (ulong *)((long)local_68 + -3)) && ((uint)*puVar10 == (uint)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 4);
            puVar10 = (ulong *)((long)puVar10 + 4);
          }
          if ((puVar31 < (ulong *)((long)local_68 + -1)) && ((short)*puVar10 == (short)*puVar31)) {
            puVar31 = (ulong *)((long)puVar31 + 2);
            puVar10 = (ulong *)((long)puVar10 + 2);
          }
          if (puVar31 < local_68) {
            puVar31 = (ulong *)((long)puVar31 + (ulong)((char)*puVar10 == (char)*puVar31));
          }
          pcVar11 = (char *)((long)puVar31 - (long)puVar24);
        }
LAB_00101d8e:
        puVar24 = (ulong *)((long)puVar30 + (long)(pcVar11 + 4));
        *(int *)(lVar2 + (*puVar30 * -0x30e44323405a9d00 >> (bVar12 & 0x3f)) * 4) =
             (int)puVar30 - iVar22;
        puVar31 = (ulong *)param_2[3];
        if (puVar19 < puVar30) {
          ZSTD_safecopyLiterals(puVar31,puVar30,puVar30,puVar19);
          puVar30 = puVar24;
        }
        else {
          uVar8 = puVar30[1];
          *puVar31 = *puVar30;
          puVar31[1] = uVar8;
          puVar30 = puVar24;
        }
        puVar3 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar3 + 1) = 0;
        *puVar3 = 1;
        if ((char *)0xffff < pcVar11 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((long)puVar3 - *param_2 >> 3);
        }
        *(short *)((long)puVar3 + 6) = (short)(pcVar11 + 1);
        param_2[1] = (long)(puVar3 + 2);
        uVar15 = (uint)local_58;
        local_58._0_4_ = local_48;
      } while (puVar30 <= puVar17);
    }
  }
  local_48 = uVar15;
  puVar26 = (ulong *)((long)puVar30 + uVar13);
  puVar19 = (ulong *)((long)puVar26 + 1);
  local_b8 = puVar30;
  if (puVar17 <= puVar19) goto LAB_00102dd0;
  goto LAB_00101aa5;
LAB_00104140:
  puVar30 = puVar30 + 1;
  puVar19 = puVar19 + 1;
  if (puVar26 <= puVar30) goto LAB_00101eab;
  goto LAB_00102b29;
LAB_001047a4:
  puVar31 = puVar31 + 1;
  puVar10 = puVar10 + 1;
  if (puVar26 <= puVar31) goto LAB_001042c9;
  goto LAB_00104660;
LAB_001011d0:
  if (uVar8 < 5) {
    *(int *)(lVar2 + uVar28 * 4) = (int)puVar10 - iVar22;
  }
LAB_0010259b:
  puVar30 = (ulong *)((ulong)uVar15 + lVar1);
  uVar15 = (int)puVar31 - (int)puVar30;
  iVar20 = uVar15 + 3;
  local_58._0_4_ = local_48;
  if ((local_b8 < puVar31) && (lVar27 = 4, local_50 < puVar30)) {
    while (*(char *)((long)puVar31 + -1) == *(char *)((long)puVar30 + -1)) {
      puVar31 = (ulong *)((long)puVar31 + -1);
      puVar30 = (ulong *)((long)puVar30 + -1);
      lVar27 = lVar27 + 1;
      if ((puVar31 <= local_b8) || (puVar30 <= local_50)) break;
    }
  }
  else {
    lVar27 = 4;
  }
LAB_0010225e:
  local_48 = uVar15;
  puVar10 = (ulong *)((long)puVar31 + lVar27);
  puVar30 = (ulong *)((long)puVar30 + lVar27);
  puVar26 = (ulong *)((long)puVar17 - 7);
  puVar24 = puVar10;
  if (puVar10 < puVar26) {
    if (*puVar30 == *puVar10) {
      puVar24 = puVar10 + 1;
      puVar30 = puVar30 + 1;
      if (puVar24 < puVar26) {
LAB_00102b61:
        if (*puVar30 == *puVar24) goto LAB_00104123;
        uVar15 = 0;
        for (uVar8 = *puVar30 ^ *puVar24; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000)
        {
          uVar15 = uVar15 + 1;
        }
        pcVar11 = (char *)((long)puVar24 + ((ulong)(uVar15 >> 3) - (long)puVar10));
        goto LAB_00102291;
      }
      goto LAB_001024f3;
    }
    uVar15 = 0;
    for (uVar8 = *puVar30 ^ *puVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      uVar15 = uVar15 + 1;
    }
    pcVar11 = (char *)(ulong)(uVar15 >> 3);
  }
  else {
LAB_001024f3:
    if ((puVar24 < (ulong *)((long)puVar17 - 3U)) && ((uint)*puVar30 == (uint)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 4);
      puVar30 = (ulong *)((long)puVar30 + 4);
    }
    if ((puVar24 < (ulong *)((long)puVar17 - 1U)) && ((short)*puVar30 == (short)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 2);
      puVar30 = (ulong *)((long)puVar30 + 2);
    }
    if (puVar24 < puVar17) {
      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar30 == (char)*puVar24));
    }
    pcVar11 = (char *)((long)puVar24 - (long)puVar10);
  }
LAB_00102291:
  pcVar11 = pcVar11 + lVar27;
  puVar24 = puVar17 + -4;
  uVar8 = (long)puVar31 - (long)local_b8;
  puVar30 = (ulong *)param_2[3];
  if (puVar24 < puVar31) {
    ZSTD_safecopyLiterals(puVar30,local_b8,puVar31,puVar24);
  }
  else {
    uVar7 = local_b8[1];
    *puVar30 = *local_b8;
    puVar30[1] = uVar7;
    if (uVar8 < 0x11) {
      param_2[3] = param_2[3] + uVar8;
      piVar9 = (int *)param_2[1];
      goto LAB_001022d8;
    }
    uVar7 = local_b8[3];
    lVar27 = param_2[3];
    *(ulong *)(lVar27 + 0x10) = local_b8[2];
    *(ulong *)(lVar27 + 0x18) = uVar7;
    if (0x20 < (long)uVar8) {
      puVar30 = (ulong *)(lVar27 + 0x20);
      do {
        uVar7 = local_b8[5];
        puVar10 = puVar30 + 4;
        *puVar30 = local_b8[4];
        puVar30[1] = uVar7;
        uVar7 = local_b8[7];
        puVar30[2] = local_b8[6];
        puVar30[3] = uVar7;
        puVar30 = puVar10;
        local_b8 = local_b8 + 4;
      } while (puVar10 < (ulong *)(lVar27 + uVar8));
    }
  }
  param_2[3] = param_2[3] + uVar8;
  piVar9 = (int *)param_2[1];
  if (0xffff < uVar8) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
  }
LAB_001022d8:
  *(short *)(piVar9 + 1) = (short)uVar8;
  *piVar9 = iVar20;
  if ((char *)0xffff < pcVar11 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar9 - *param_2 >> 3);
  }
  *(short *)((long)piVar9 + 6) = (short)(pcVar11 + -3);
  puVar30 = (ulong *)((long)puVar31 + (long)pcVar11);
  param_2[1] = (long)(piVar9 + 2);
  uVar15 = local_48;
  if (puVar30 <= puVar19) {
    *(uint *)(lVar2 + ((ulong)(*(long *)(lVar1 + 2 + (ulong)local_7c) * -0x30e4432345000000) >>
                      (bVar12 & 0x3f)) * 4) = local_7c + 2;
    *(int *)(lVar2 + ((ulong)(*(long *)((long)puVar30 + -2) * -0x30e4432345000000) >>
                     (bVar12 & 0x3f)) * 4) = ((int)puVar30 + -2) - iVar22;
    if ((uint)local_58 != 0) {
      do {
        local_48 = uVar15;
        uVar8 = (ulong)(uint)local_58;
        uVar15 = local_48;
        if ((uint)*puVar30 != *(uint *)((long)puVar30 - uVar8)) break;
        puVar31 = (ulong *)((long)puVar30 + 4);
        puVar18 = (ulong *)((long)puVar30 + (4 - uVar8));
        puVar10 = puVar31;
        if (puVar31 < puVar26) {
          if (*puVar18 == *(ulong *)((long)puVar30 + 4)) {
            puVar10 = (ulong *)((long)puVar30 + 0xc);
            puVar18 = (ulong *)((long)puVar30 + (0xc - uVar8));
            if (puVar10 < puVar26) {
LAB_00104625:
              if (*puVar18 == *puVar10) goto LAB_00104844;
              uVar15 = 0;
              for (uVar8 = *puVar18 ^ *puVar10; (uVar8 & 1) == 0;
                  uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              pcVar11 = (char *)((long)puVar10 + ((ulong)(uVar15 >> 3) - (long)puVar31));
              goto LAB_001023d4;
            }
            goto LAB_001043af;
          }
          uVar15 = 0;
          for (uVar8 = *puVar18 ^ *(ulong *)((long)puVar30 + 4); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            uVar15 = uVar15 + 1;
          }
          pcVar11 = (char *)(ulong)(uVar15 >> 3);
        }
        else {
LAB_001043af:
          if ((puVar10 < (ulong *)((long)puVar17 - 3U)) && ((uint)*puVar18 == (uint)*puVar10)) {
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar18 = (ulong *)((long)puVar18 + 4);
          }
          if ((puVar10 < (ulong *)((long)puVar17 - 1U)) && ((short)*puVar18 == (short)*puVar10)) {
            puVar10 = (ulong *)((long)puVar10 + 2);
            puVar18 = (ulong *)((long)puVar18 + 2);
          }
          if (puVar10 < puVar17) {
            puVar10 = (ulong *)((long)puVar10 + (ulong)((char)*puVar18 == (char)*puVar10));
          }
          pcVar11 = (char *)((long)puVar10 - (long)puVar31);
        }
LAB_001023d4:
        puVar31 = (ulong *)((long)puVar30 + (long)(pcVar11 + 4));
        *(int *)(lVar2 + (*puVar30 * -0x30e4432345000000 >> (bVar12 & 0x3f)) * 4) =
             (int)puVar30 - iVar22;
        puVar10 = (ulong *)param_2[3];
        if (puVar24 < puVar30) {
          ZSTD_safecopyLiterals(puVar10,puVar30,puVar30);
          puVar30 = puVar31;
        }
        else {
          uVar8 = puVar30[1];
          *puVar10 = *puVar30;
          puVar10[1] = uVar8;
          puVar30 = puVar31;
        }
        puVar3 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar3 + 1) = 0;
        *puVar3 = 1;
        if ((char *)0xffff < pcVar11 + 1) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((long)puVar3 - *param_2 >> 3);
        }
        *(short *)((long)puVar3 + 6) = (short)(pcVar11 + 1);
        param_2[1] = (long)(puVar3 + 2);
        uVar15 = (uint)local_58;
        local_58._0_4_ = local_48;
      } while (puVar30 <= puVar19);
    }
  }
  local_48 = uVar15;
  puVar24 = (ulong *)((long)puVar30 + uVar13);
  puVar26 = (ulong *)((long)puVar24 + 1);
  local_b8 = puVar30;
  if (puVar19 <= puVar26) goto LAB_00102dd0;
  goto LAB_001010a3;
LAB_00104123:
  puVar24 = puVar24 + 1;
  puVar30 = puVar30 + 1;
  if (puVar26 <= puVar24) goto LAB_001024f3;
  goto LAB_00102b61;
LAB_00104844:
  puVar10 = puVar10 + 1;
  puVar18 = puVar18 + 1;
  if (puVar26 <= puVar10) goto LAB_001043af;
  goto LAB_00104625;
LAB_00104180:
  puVar24 = puVar24 + 1;
  puVar30 = puVar30 + 1;
  if (puVar26 <= puVar24) goto LAB_001039db;
  goto LAB_00103ad9;
LAB_001047d0:
  puVar10 = puVar10 + 1;
  puVar18 = puVar18 + 1;
  if (puVar26 <= puVar10) goto LAB_00104509;
  goto LAB_0010469b;
LAB_001041e0:
  puVar24 = puVar24 + 1;
  puVar30 = puVar30 + 1;
  if (puVar26 <= puVar24) goto LAB_00103303;
  goto LAB_00103409;
LAB_001047ba:
  puVar10 = puVar10 + 1;
  puVar18 = puVar18 + 1;
  if (puVar26 <= puVar10) goto LAB_00104422;
  goto LAB_001046d6;
LAB_001041a0:
  puVar31 = puVar31 + 1;
  puVar26 = puVar26 + 1;
  if (puVar24 <= puVar31) goto LAB_0010367b;
  goto LAB_001037d6;
LAB_0010478d:
  puVar10 = puVar10 + 1;
  puVar18 = puVar18 + 1;
  if (puVar24 <= puVar10) goto LAB_00104495;
  goto LAB_00104751;
LAB_001041c0:
  puVar24 = puVar24 + 1;
  puVar30 = puVar30 + 1;
  if (puVar26 <= puVar24) goto LAB_00103013;
  goto LAB_00103119;
LAB_001047e6:
  puVar10 = puVar10 + 1;
  puVar18 = puVar18 + 1;
  if (puVar26 <= puVar10) goto LAB_0010457c;
  goto LAB_00104711;
LAB_00102dd0:
  bVar37 = local_48 != 0;
  local_b8 = puVar30;
LAB_00101958:
  uVar15 = local_40;
  uVar32 = local_48;
  if (bVar6) {
    local_40 = local_44;
  }
joined_r0x00102585:
  local_48 = uVar32;
  if (!bVar37) {
    local_40 = uVar15;
    local_48 = local_44;
  }
LAB_0010196c:
  *param_3 = local_48;
LAB_0010191d:
  if ((uint)local_58 != 0) {
    local_40 = (uint)local_58;
  }
  param_3[1] = local_40;
  return (char *)((long)param_4 + (param_5 - (long)local_b8));
}



long ZSTD_compressBlock_fast_extDict_generic_constprop_0
               (long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5,uint param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  char *pcVar25;
  int iVar26;
  ulong *puVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong *puVar32;
  uint uVar33;
  ulong uVar34;
  ulong *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong uVar38;
  int iVar39;
  ulong *puVar40;
  ulong *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  ulong *local_d8;
  ulong local_c8;
  ulong *local_c0;
  ulong local_b8;
  uint local_ac;
  byte local_a0;
  ulong *local_90;
  byte local_78;
  uint local_48;
  
  uVar38 = (ulong)param_6;
  lVar18 = *(long *)(param_1 + 0x70);
  lVar7 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar14 = (ulong)(*(int *)(param_1 + 0x114) + 1 + (uint)(*(int *)(param_1 + 0x114) == 0));
  iVar10 = (int)lVar7;
  iVar39 = (int)param_4 - iVar10;
  uVar33 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
  iVar26 = iVar39 + (int)param_5;
  uVar44 = *(uint *)(param_1 + 0x1c);
  uVar13 = iVar26 - uVar33;
  if (iVar26 - uVar44 <= uVar33) {
    uVar13 = uVar44;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar44 = uVar13;
  }
  uVar34 = (ulong)uVar44;
  puVar27 = (ulong *)(uVar34 + lVar8);
  uVar13 = *(uint *)(param_1 + 0x18);
  if (uVar44 < uVar13) {
    uVar34 = (ulong)uVar13;
  }
  puVar2 = (ulong *)(lVar7 + uVar34);
  puVar22 = (ulong *)(uVar34 + lVar8);
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar23 = puVar3 + -1;
  uVar33 = *param_3;
  uVar6 = param_3[1];
  if (uVar13 <= uVar44) {
    lVar18 = ZSTD_compressBlock_fast(param_1,param_2,param_3,param_4);
    return lVar18;
  }
  local_48 = 0;
  uVar13 = iVar39 - uVar44;
  if (uVar6 < uVar13) {
    local_48 = uVar6;
    uVar6 = 0;
  }
  if (uVar13 <= uVar33) {
    local_ac = 0;
    uVar42 = uVar33;
  }
  else {
    uVar42 = 0;
    local_ac = uVar33;
  }
  cVar11 = (char)*(undefined4 *)(param_1 + 0x108);
  local_a0 = 0x40 - cVar11;
  local_90 = param_4;
LAB_00104a11:
  local_c0 = local_90 + 0x10;
  puVar35 = (ulong *)(uVar14 + (long)local_90);
  puVar32 = (ulong *)((long)puVar35 + 1);
  if (puVar23 <= puVar32) {
LAB_001051bf:
    if (((uVar13 > uVar33 || uVar33 == 0) || (uVar44 = uVar42, uVar13 = local_ac, local_ac == 0)) &&
       (uVar44 = uVar6, uVar13 = uVar42, local_ac != 0)) {
      uVar13 = local_ac;
    }
    local_ac = uVar13;
    *param_3 = local_ac;
    if (local_48 != 0) {
      uVar44 = local_48;
    }
    param_3[1] = uVar44;
    return (long)puVar3 - (long)local_90;
  }
  iVar39 = (int)uVar38;
  if (iVar39 == 6) {
    bVar12 = 0x40 - cVar11;
    lVar28 = -0x30e4432340650000;
  }
  else if (iVar39 == 7) {
    bVar12 = 0x40 - cVar11;
    lVar28 = -0x30e44323405a9d00;
  }
  else {
    if (iVar39 != 5) {
      uVar15 = (ulong)((uint)*local_90 * -0x61c8864f >> (0x20U - cVar11 & 0x1f));
      local_c8 = (ulong)((uint)(*(int *)((long)local_90 + 1) * -0x61c8864f) >>
                        (0x20U - cVar11 & 0x1f));
      goto LAB_00104a81;
    }
    bVar12 = 0x40 - cVar11;
    lVar28 = -0x30e4432345000000;
  }
  uVar15 = *local_90 * lVar28 >> (bVar12 & 0x3f);
  local_c8 = (ulong)(lVar28 * *(long *)((long)local_90 + 1)) >> (bVar12 & 0x3f);
LAB_00104a81:
  uVar31 = *(uint *)(lVar18 + uVar15 * 4);
  uVar43 = (uint)uVar34;
  lVar28 = lVar8;
  if (uVar43 <= uVar31) {
    lVar28 = lVar7;
  }
  local_78 = 0x20 - cVar11;
  puVar37 = (ulong *)((long)local_90 + 1);
  puVar40 = local_90;
  local_b8 = uVar14;
  do {
    puVar24 = puVar32;
    puVar41 = puVar35;
    uVar20 = (ulong)uVar31;
    iVar26 = (int)puVar41 - iVar10;
    uVar29 = iVar26 - local_ac;
    lVar19 = lVar8;
    if (uVar43 <= uVar29) {
      lVar19 = lVar7;
    }
    if (((uVar43 + local_ac) - iVar26 < 4) || (local_ac == 0)) {
      uVar21 = (uint)*puVar41 ^ 1;
    }
    else {
      uVar21 = *(uint *)(lVar19 + (ulong)uVar29);
    }
    uVar30 = (int)puVar40 - iVar10;
    *(uint *)(lVar18 + uVar15 * 4) = uVar30;
    puVar32 = puVar22;
    if ((uint)*puVar41 == uVar21) {
      local_c0._0_4_ = 1;
      if (uVar43 <= uVar29) {
        puVar32 = puVar3;
      }
      uVar15 = (ulong)(*(char *)((long)puVar41 - 1) == *(char *)(lVar19 + (ulong)uVar29 + -1));
      puVar40 = (ulong *)((long)puVar41 - uVar15);
      puVar35 = (ulong *)((lVar19 + (ulong)uVar29) - uVar15);
      lVar28 = uVar15 + 4;
      goto LAB_00104dfd;
    }
    uVar29 = (uint)*puVar40 ^ 1;
    if (uVar44 <= uVar31) {
      uVar29 = *(uint *)(lVar28 + uVar20);
    }
    if (uVar29 == (uint)*puVar40) {
      uVar29 = uVar30 - uVar31;
      puVar41 = puVar37;
      goto joined_r0x00105131;
    }
    puVar4 = (uint *)(lVar18 + local_c8 * 4);
    uVar31 = *puVar4;
    uVar20 = (ulong)uVar31;
    lVar28 = lVar8;
    if (uVar43 <= uVar31) {
      lVar28 = lVar7;
    }
    if (iVar39 == 6) {
      uVar15 = *puVar41 * -0x30e4432340650000 >> (local_a0 & 0x3f);
    }
    else if (iVar39 == 7) {
      uVar15 = *puVar41 * -0x30e44323405a9d00 >> (local_a0 & 0x3f);
    }
    else if (iVar39 == 5) {
      uVar15 = *puVar41 * -0x30e4432345000000 >> (local_a0 & 0x3f);
    }
    else {
      uVar15 = (ulong)((uint)*puVar41 * -0x61c8864f >> (local_78 & 0x1f));
    }
    uVar30 = (int)puVar37 - iVar10;
    *puVar4 = uVar30;
    if (uVar31 < uVar44) {
      if (((uint)*puVar37 ^ 1) == (uint)*puVar37) break;
    }
    else if (*(uint *)(lVar28 + uVar20) == (uint)*puVar37) break;
    uVar31 = *(uint *)(lVar18 + uVar15 * 4);
    lVar28 = lVar8;
    if (uVar43 <= uVar31) {
      lVar28 = lVar7;
    }
    if (iVar39 == 6) {
      local_c8 = *puVar24 * -0x30e4432340650000 >> (local_a0 & 0x3f);
    }
    else if (iVar39 == 7) {
      local_c8 = *puVar24 * -0x30e44323405a9d00 >> (local_a0 & 0x3f);
    }
    else if (iVar39 == 5) {
      local_c8 = *puVar24 * -0x30e4432345000000 >> (local_a0 & 0x3f);
    }
    else {
      local_c8 = (ulong)((uint)*puVar24 * -0x61c8864f >> (local_78 & 0x1f));
    }
    puVar35 = (ulong *)((long)puVar41 + local_b8);
    puVar32 = (ulong *)((long)puVar24 + local_b8);
    if (local_c0 <= puVar35) {
      local_b8 = local_b8 + 1;
      local_c0 = local_c0 + 0x10;
    }
    puVar37 = puVar24;
    puVar40 = puVar41;
    if (puVar23 <= puVar32) goto LAB_001051bf;
  } while( true );
  uVar29 = uVar30 - uVar31;
  puVar40 = puVar37;
  local_c8 = uVar15;
joined_r0x00105131:
  puVar37 = puVar41;
  puVar41 = puVar27;
  if (uVar43 <= uVar31) {
    puVar41 = puVar2;
    puVar32 = puVar3;
  }
  local_c0._0_4_ = uVar29 + 3;
  puVar35 = (ulong *)(uVar20 + lVar28);
  if ((puVar41 < puVar35) && (lVar28 = 4, local_90 < puVar40)) {
    while (*(char *)((long)puVar40 + -1) == *(char *)((long)puVar35 + -1)) {
      puVar40 = (ulong *)((long)puVar40 + -1);
      puVar35 = (ulong *)((long)puVar35 + -1);
      lVar28 = lVar28 + 1;
      if ((puVar40 <= local_90) || (puVar35 <= puVar41)) break;
    }
    local_48 = local_ac;
    local_ac = uVar29;
  }
  else {
    local_48 = local_ac;
    lVar28 = 4;
    local_ac = uVar29;
  }
LAB_00104dfd:
  puVar35 = (ulong *)((long)puVar35 + lVar28);
  puVar41 = (ulong *)((long)puVar40 + lVar28);
  puVar24 = (ulong *)(((long)puVar32 - (long)puVar35) + (long)puVar41);
  if (puVar3 <= puVar24) {
    puVar24 = puVar3;
  }
  puVar1 = (ulong *)((long)puVar24 - 7);
  puVar36 = puVar41;
  local_d8 = puVar35;
  if (puVar41 < puVar1) {
    if (*puVar35 == *puVar41) {
      local_d8 = puVar35 + 1;
      puVar36 = puVar41 + 1;
      if (puVar36 < puVar1) {
LAB_001052ab:
        if (*local_d8 == *puVar36) goto LAB_001053b8;
        uVar31 = 0;
        for (uVar15 = *local_d8 ^ *puVar36; (uVar15 & 1) == 0;
            uVar15 = uVar15 >> 1 | 0x8000000000000000) {
          uVar31 = uVar31 + 1;
        }
        pcVar17 = (char *)((long)puVar36 + ((ulong)(uVar31 >> 3) - (long)puVar41));
        goto joined_r0x001050a5;
      }
      goto LAB_00105038;
    }
    uVar31 = 0;
    for (uVar15 = *puVar35 ^ *puVar41; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000)
    {
      uVar31 = uVar31 + 1;
    }
    pcVar17 = (char *)(ulong)(uVar31 >> 3);
  }
  else {
LAB_00105038:
    if ((puVar36 < (ulong *)((long)puVar24 - 3U)) && ((int)*local_d8 == (int)*puVar36)) {
      local_d8 = (ulong *)((long)local_d8 + 4);
      puVar36 = (ulong *)((long)puVar36 + 4);
    }
    if ((puVar36 < (ulong *)((long)puVar24 - 1U)) && ((short)*local_d8 == (short)*puVar36)) {
      local_d8 = (ulong *)((long)local_d8 + 2);
      puVar36 = (ulong *)((long)puVar36 + 2);
    }
    if (puVar36 < puVar24) {
      puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*local_d8 == (char)*puVar36));
    }
    pcVar17 = (char *)((long)puVar36 - (long)puVar41);
  }
joined_r0x001050a5:
  if (puVar32 == (ulong *)((long)puVar35 + (long)pcVar17)) {
    puVar41 = (ulong *)((long)puVar41 + (long)pcVar17);
    puVar24 = (ulong *)((long)puVar3 - 7);
    puVar35 = puVar2;
    puVar32 = puVar41;
    if (puVar41 < puVar24) {
      if (*puVar2 == *puVar41) {
        puVar32 = puVar41 + 1;
        puVar35 = puVar2 + 1;
        if (puVar32 < puVar24) {
LAB_001050f0:
          if (*puVar35 == *puVar32) goto LAB_001055f3;
          uVar31 = 0;
          for (uVar15 = *puVar35 ^ *puVar32; (uVar15 & 1) == 0;
              uVar15 = uVar15 >> 1 | 0x8000000000000000) {
            uVar31 = uVar31 + 1;
          }
          pcVar25 = (char *)((long)puVar32 + ((ulong)(uVar31 >> 3) - (long)puVar41));
          goto LAB_001053b0;
        }
        goto LAB_00105363;
      }
      uVar31 = 0;
      for (uVar15 = *puVar2 ^ *puVar41; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000
          ) {
        uVar31 = uVar31 + 1;
      }
      pcVar25 = (char *)(ulong)(uVar31 >> 3);
    }
    else {
LAB_00105363:
      if ((puVar32 < (ulong *)((long)puVar3 - 3U)) && ((int)*puVar35 == (int)*puVar32)) {
        puVar32 = (ulong *)((long)puVar32 + 4);
        puVar35 = (ulong *)((long)puVar35 + 4);
      }
      if ((puVar32 < (ulong *)((long)puVar3 - 1U)) && ((short)*puVar35 == (short)*puVar32)) {
        puVar32 = (ulong *)((long)puVar32 + 2);
        puVar35 = (ulong *)((long)puVar35 + 2);
      }
      if (puVar32 < puVar3) {
        puVar32 = (ulong *)((long)puVar32 + (ulong)((char)*puVar35 == (char)*puVar32));
      }
      pcVar25 = (char *)((long)puVar32 - (long)puVar41);
    }
LAB_001053b0:
    pcVar17 = pcVar17 + (long)pcVar25;
  }
  pcVar17 = pcVar17 + lVar28;
  puVar32 = puVar3 + -4;
  uVar15 = (long)puVar40 - (long)local_90;
  puVar35 = (ulong *)param_2[3];
  if (puVar32 < puVar40) {
    ZSTD_safecopyLiterals(puVar35,local_90,puVar40,puVar32);
LAB_00104ffa:
    param_2[3] = param_2[3] + uVar15;
    piVar16 = (int *)param_2[1];
    if (0xffff < uVar15) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar16 - *param_2 >> 3);
    }
  }
  else {
    uVar20 = local_90[1];
    *puVar35 = *local_90;
    puVar35[1] = uVar20;
    if (0x10 < uVar15) {
      lVar28 = param_2[3];
      uVar20 = local_90[3];
      *(ulong *)(lVar28 + 0x10) = local_90[2];
      *(ulong *)(lVar28 + 0x18) = uVar20;
      if (0x20 < (long)uVar15) {
        puVar35 = (ulong *)(lVar28 + 0x20);
        do {
          uVar20 = local_90[5];
          puVar41 = puVar35 + 4;
          *puVar35 = local_90[4];
          puVar35[1] = uVar20;
          uVar20 = local_90[7];
          puVar35[2] = local_90[6];
          puVar35[3] = uVar20;
          puVar35 = puVar41;
          local_90 = local_90 + 4;
        } while (puVar41 < (ulong *)(lVar28 + uVar15));
      }
      goto LAB_00104ffa;
    }
    param_2[3] = param_2[3] + uVar15;
    piVar16 = (int *)param_2[1];
  }
  *(short *)(piVar16 + 1) = (short)uVar15;
  *piVar16 = (int)local_c0;
  if ((char *)0xffff < pcVar17 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar16 - *param_2 >> 3);
  }
  *(short *)((long)piVar16 + 6) = (short)(pcVar17 + -3);
  param_2[1] = (long)(piVar16 + 2);
  local_90 = (ulong *)((long)puVar40 + (long)pcVar17);
  if (puVar37 < local_90) {
    *(int *)(lVar18 + local_c8 * 4) = (int)puVar37 - iVar10;
  }
  if (puVar23 < local_90) goto LAB_00104a11;
  plVar5 = (long *)(lVar7 + 2 + (ulong)uVar30);
  iVar39 = (int)uVar38;
  if (iVar39 == 6) {
    bVar12 = 0x40 - cVar11;
    lVar28 = -0x30e4432340650000;
  }
  else if (iVar39 == 7) {
    bVar12 = 0x40 - cVar11;
    lVar28 = -0x30e44323405a9d00;
  }
  else {
    if (iVar39 != 5) {
      *(uint *)(lVar18 + (ulong)((uint)((int)*plVar5 * -0x61c8864f) >> (0x20U - cVar11 & 0x1f)) * 4)
           = uVar30 + 2;
      uVar15 = (ulong)((uint)(*(int *)((long)local_90 - 2) * -0x61c8864f) >> (0x20U - cVar11 & 0x1f)
                      );
      goto LAB_00104f79;
    }
    bVar12 = 0x40 - cVar11;
    lVar28 = -0x30e4432345000000;
  }
  *(uint *)(lVar18 + ((ulong)(*plVar5 * lVar28) >> (bVar12 & 0x3f)) * 4) = uVar30 + 2;
  uVar15 = (ulong)(lVar28 * *(long *)((long)local_90 - 2)) >> (bVar12 & 0x3f);
LAB_00104f79:
  *(int *)(lVar18 + uVar15 * 4) = ((int)local_90 + -2) - iVar10;
  uVar38 = uVar38 & 0xffffffff;
  uVar15 = (ulong)(uVar43 - 1);
  uVar31 = local_ac;
  do {
    local_ac = uVar31;
    uVar31 = local_48;
    iVar39 = (int)local_90 - iVar10;
    uVar29 = iVar39 - uVar31;
    lVar28 = lVar7;
    if (uVar29 < uVar43) {
      lVar28 = lVar8;
    }
    if ((((uVar31 + (int)uVar15) - iVar39 < 3) || (uVar31 == 0)) ||
       (*(uint *)((ulong)uVar29 + lVar28) != (uint)*local_90)) {
      uVar38 = uVar38 & 0xffffffff;
      local_48 = uVar31;
      goto LAB_00104a11;
    }
    puVar35 = puVar22;
    if (uVar43 <= uVar29) {
      puVar35 = puVar3;
    }
    lVar28 = ZSTD_count_2segments
                       ((uint *)((long)local_90 + 4),(uint *)((ulong)uVar29 + lVar28) + 1,puVar3,
                        puVar35,puVar2);
    puVar35 = (ulong *)param_2[3];
    uVar15 = uVar15 & 0xffffffff;
    uVar38 = uVar38 & 0xffffffff;
    if (puVar32 < local_90) {
      ZSTD_safecopyLiterals(puVar35,local_90,local_90);
    }
    else {
      uVar20 = local_90[1];
      *puVar35 = *local_90;
      puVar35[1] = uVar20;
    }
    puVar9 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar9 + 1) = 0;
    *puVar9 = 1;
    if (0xffff < lVar28 + 1U) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((long)puVar9 - *param_2 >> 3);
    }
    *(short *)((long)puVar9 + 6) = (short)(lVar28 + 1U);
    param_2[1] = (long)(puVar9 + 2);
    iVar26 = (int)uVar38;
    if (iVar26 == 6) {
      lVar19 = -0x30e4432340650000;
LAB_00105563:
      uVar20 = lVar19 * *local_90 >> (0x40U - cVar11 & 0x3f);
    }
    else {
      if (iVar26 == 7) {
        lVar19 = -0x30e44323405a9d00;
        goto LAB_00105563;
      }
      if (iVar26 == 5) {
        lVar19 = -0x30e4432345000000;
        goto LAB_00105563;
      }
      uVar20 = (ulong)((uint)*local_90 * -0x61c8864f >> (0x20U - cVar11 & 0x1f));
    }
    local_90 = (ulong *)((long)local_90 + lVar28 + 4);
    *(int *)(lVar18 + uVar20 * 4) = iVar39;
    local_48 = local_ac;
  } while (local_90 <= puVar23);
  uVar38 = uVar38 & 0xffffffff;
  local_48 = local_ac;
  local_ac = uVar31;
  goto LAB_00104a11;
LAB_001053b8:
  puVar36 = puVar36 + 1;
  local_d8 = local_d8 + 1;
  if (puVar1 <= puVar36) goto LAB_00105038;
  goto LAB_001052ab;
LAB_001055f3:
  puVar32 = puVar32 + 1;
  puVar35 = puVar35 + 1;
  if (puVar24 <= puVar32) goto LAB_00105363;
  goto LAB_001050f0;
}



long ZSTD_compressBlock_fast_dictMatchState
               (long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  byte bVar16;
  ulong uVar17;
  ulong *puVar18;
  char *pcVar19;
  long lVar20;
  ulong *puVar21;
  char *pcVar22;
  undefined4 *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong *puVar32;
  int iVar33;
  uint uVar34;
  ulong *puVar35;
  int *piVar36;
  ulong *puVar37;
  ulong *puVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  bool bVar44;
  ulong *local_b8;
  byte local_98;
  byte local_94;
  ulong *local_90;
  int local_84;
  int local_64;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x70);
  puVar1 = (ulong *)((long)param_4 + param_5);
  iVar43 = *(int *)(param_1 + 0x110);
  uVar17 = (ulong)(*(int *)(param_1 + 0x114) + (uint)(*(int *)(param_1 + 0x114) == 0));
  puVar35 = puVar1 + -1;
  puVar18 = (ulong *)(uVar17 + (long)param_4);
  uVar4 = *(uint *)(param_1 + 0x18);
  local_84 = *param_3;
  puVar2 = (ulong *)(lVar7 + (ulong)uVar4);
  puVar32 = *(ulong **)(param_1 + 0xf8);
  local_64 = param_3[1];
  uVar9 = puVar32[0xe];
  uVar10 = puVar32[1];
  puVar11 = (ulong *)*puVar32;
  uVar5 = (uint)puVar32[3];
  piVar3 = (int *)(uVar10 + uVar5);
  iVar40 = *(int *)(param_1 + 0x128);
  iVar33 = (int)puVar11 - (int)uVar10;
  uVar39 = uVar4 - iVar33;
  iVar12 = ((int)param_4 - (int)puVar2) + (int)puVar11;
  bVar16 = (byte)(int)puVar32[0x21];
  cVar14 = bVar16 + 8;
  iVar13 = (int)piVar3;
  iVar41 = (int)lVar7;
  cVar15 = (char)*(undefined4 *)(param_1 + 0x108);
  if (iVar43 == 6) {
    if ((iVar40 != 0) && (uVar27 = 4L << (bVar16 & 0x3f), uVar27 != 0)) {
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 0x40;
      } while (uVar28 < uVar27);
    }
    puVar32 = (ulong *)((long)param_4 + (ulong)(iVar12 == iVar13));
    local_90 = param_4;
    if (puVar18 <= puVar35) {
      local_98 = 0x40 - cVar15;
      local_94 = 0x40 - cVar14;
      local_90 = param_4;
LAB_00105eb0:
      local_b8 = puVar32 + 0x20;
      uVar28 = *puVar32 * -0x30e4432340650000 >> (local_98 & 0x3f);
      uVar27 = *puVar32 * -0x30e4432340650000 >> (local_94 & 0x3f);
      uVar42 = *(uint *)(uVar9 + (uVar27 >> 8) * 4);
      uVar6 = *(uint *)(lVar8 + uVar28 * 4);
      bVar44 = (char)uVar27 == (char)uVar42;
      uVar29 = (int)puVar32 - iVar41;
      uVar27 = uVar17;
      do {
        puVar21 = puVar18;
        uVar34 = (1 - local_84) + uVar29;
        piVar36 = (int *)((ulong)uVar34 + lVar7);
        if (uVar34 < uVar4) {
          piVar36 = (int *)(((iVar33 - uVar4) + uVar34) + uVar10);
        }
        uVar31 = *puVar21;
        *(uint *)(lVar8 + uVar28 * 4) = uVar29;
        uVar28 = uVar31 * -0x30e4432340650000 >> (local_98 & 0x3f);
        uVar31 = uVar31 * -0x30e4432340650000 >> (local_94 & 0x3f);
        if ((2 < (uVar4 - 1) - uVar34) && (*piVar36 == *(int *)((long)puVar32 + 1))) {
          puVar18 = (ulong *)(piVar36 + 1);
          puVar21 = (ulong *)((long)puVar32 + 5);
          puVar25 = puVar11;
          if (uVar4 <= uVar34) {
            puVar25 = puVar1;
          }
          puVar24 = (ulong *)(((long)puVar25 - (long)puVar18) + (long)puVar21);
          if (puVar1 <= puVar24) {
            puVar24 = puVar1;
          }
          puVar38 = puVar21;
          puVar37 = puVar18;
          if ((ulong *)((long)puVar24 - 7U) <= puVar21) goto LAB_00106b14;
          if (*(ulong *)(piVar36 + 1) != *(ulong *)((long)puVar32 + 5)) {
            uVar42 = 0;
            for (uVar27 = *(ulong *)(piVar36 + 1) ^ *(ulong *)((long)puVar32 + 5); (uVar27 & 1) == 0
                ; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            pcVar22 = (char *)(ulong)(uVar42 >> 3);
            goto LAB_00106b55;
          }
          puVar38 = (ulong *)((long)puVar32 + 0xd);
          puVar37 = (ulong *)(piVar36 + 3);
          goto joined_r0x00106741;
        }
        if ((bVar44) && (uVar42 = uVar42 >> 8, uVar5 < uVar42)) {
          iVar43 = (int)*puVar32;
          piVar36 = (int *)(uVar42 + uVar10);
          if (*piVar36 != iVar43) goto LAB_00106008;
          if (uVar4 < uVar6) goto LAB_00106014;
          iVar43 = (iVar33 - (uVar42 + uVar4)) + uVar29;
          lVar20 = ZSTD_count_2segments
                             ((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar11,puVar2);
          pcVar19 = (char *)(lVar20 + 4);
          for (; ((local_90 < puVar32 && (piVar3 < piVar36)) &&
                 (*(char *)((long)puVar32 + -1) == *(char *)((long)piVar36 + -1)));
              puVar32 = (ulong *)((long)puVar32 + -1)) {
            piVar36 = (int *)((long)piVar36 + -1);
            pcVar19 = pcVar19 + 1;
          }
          iVar40 = iVar43 + 3;
          uVar27 = (long)puVar32 - (long)local_90;
          puVar18 = (ulong *)param_2[3];
          if (puVar1 + -4 < puVar32) {
            ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_00107ff0:
            param_2[3] = param_2[3] + uVar27;
            piVar36 = (int *)param_2[1];
            if (0xffff < uVar27) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
            }
          }
          else {
            uVar28 = local_90[1];
            *puVar18 = *local_90;
            puVar18[1] = uVar28;
            if (0x10 < uVar27) {
              lVar20 = param_2[3];
              uVar28 = local_90[3];
              *(ulong *)(lVar20 + 0x10) = local_90[2];
              *(ulong *)(lVar20 + 0x18) = uVar28;
              if (0x20 < (long)uVar27) {
                puVar18 = (ulong *)(lVar20 + 0x20);
                do {
                  uVar28 = local_90[5];
                  puVar21 = puVar18 + 4;
                  *puVar18 = local_90[4];
                  puVar18[1] = uVar28;
                  uVar28 = local_90[7];
                  puVar18[2] = local_90[6];
                  puVar18[3] = uVar28;
                  puVar18 = puVar21;
                  local_90 = local_90 + 4;
                } while (puVar21 < (ulong *)(lVar20 + uVar27));
              }
              goto LAB_00107ff0;
            }
            param_2[3] = param_2[3] + uVar27;
            piVar36 = (int *)param_2[1];
          }
          *(short *)(piVar36 + 1) = (short)uVar27;
          *piVar36 = iVar40;
          if ((char *)0xffff < pcVar19 + -3) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
          }
          *(short *)((long)piVar36 + 6) = (short)(pcVar19 + -3);
          piVar36 = piVar36 + 2;
          local_64 = local_84;
          local_84 = iVar43;
          goto LAB_00106d47;
        }
LAB_00106008:
        if (uVar4 < uVar6) {
          iVar43 = (int)*puVar32;
LAB_00106014:
          puVar18 = (ulong *)((ulong)uVar6 + lVar7);
          if ((int)*puVar18 == iVar43) goto code_r0x0010601f;
        }
        uVar42 = *(uint *)(uVar9 + (uVar31 >> 8) * 4);
        uVar6 = *(uint *)(lVar8 + uVar28 * 4);
        bVar44 = (char)uVar31 == (char)uVar42;
        if (local_b8 <= puVar21) {
          local_b8 = local_b8 + 0x20;
          uVar27 = uVar27 + 1;
        }
        if (puVar35 < (ulong *)((long)puVar21 + uVar27)) break;
        uVar29 = (int)puVar21 - iVar41;
        puVar18 = (ulong *)((long)puVar21 + uVar27);
        puVar32 = puVar21;
      } while( true );
    }
  }
  else if (iVar43 == 7) {
    if ((iVar40 != 0) && (uVar27 = 4L << (bVar16 & 0x3f), uVar27 != 0)) {
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 0x40;
      } while (uVar28 < uVar27);
    }
    puVar32 = (ulong *)((long)param_4 + (ulong)(iVar12 == iVar13));
    local_90 = param_4;
    if (puVar18 <= puVar35) {
      local_98 = 0x40 - cVar15;
      local_94 = 0x40 - cVar14;
      local_90 = param_4;
LAB_00105a08:
      local_b8 = puVar32 + 0x20;
      uVar28 = *puVar32 * -0x30e44323405a9d00 >> (local_98 & 0x3f);
      uVar27 = *puVar32 * -0x30e44323405a9d00 >> (local_94 & 0x3f);
      uVar42 = *(uint *)(uVar9 + (uVar27 >> 8) * 4);
      uVar6 = *(uint *)(lVar8 + uVar28 * 4);
      bVar44 = (char)uVar27 == (char)uVar42;
      uVar29 = (int)puVar32 - iVar41;
      uVar27 = uVar17;
      do {
        puVar21 = puVar18;
        uVar34 = (1 - local_84) + uVar29;
        piVar36 = (int *)((ulong)uVar34 + lVar7);
        if (uVar34 < uVar4) {
          piVar36 = (int *)(((iVar33 - uVar4) + uVar34) + uVar10);
        }
        uVar31 = *puVar21;
        *(uint *)(lVar8 + uVar28 * 4) = uVar29;
        uVar28 = uVar31 * -0x30e44323405a9d00 >> (local_98 & 0x3f);
        uVar31 = uVar31 * -0x30e44323405a9d00 >> (local_94 & 0x3f);
        if ((2 < (uVar4 - 1) - uVar34) && (*piVar36 == *(int *)((long)puVar32 + 1))) {
          puVar18 = (ulong *)(piVar36 + 1);
          puVar21 = (ulong *)((long)puVar32 + 5);
          puVar25 = puVar11;
          if (uVar4 <= uVar34) {
            puVar25 = puVar1;
          }
          puVar24 = (ulong *)(((long)puVar25 - (long)puVar18) + (long)puVar21);
          if (puVar1 <= puVar24) {
            puVar24 = puVar1;
          }
          puVar38 = puVar21;
          puVar37 = puVar18;
          if ((ulong *)((long)puVar24 - 7U) <= puVar21) goto LAB_00106807;
          if (*(ulong *)(piVar36 + 1) != *(ulong *)((long)puVar32 + 5)) {
            uVar42 = 0;
            for (uVar27 = *(ulong *)(piVar36 + 1) ^ *(ulong *)((long)puVar32 + 5); (uVar27 & 1) == 0
                ; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            pcVar22 = (char *)(ulong)(uVar42 >> 3);
            goto LAB_00106848;
          }
          puVar38 = (ulong *)((long)puVar32 + 0xd);
          puVar37 = (ulong *)(piVar36 + 3);
          goto joined_r0x00106621;
        }
        if ((bVar44) && (uVar42 = uVar42 >> 8, uVar5 < uVar42)) {
          iVar43 = (int)*puVar32;
          piVar36 = (int *)(uVar42 + uVar10);
          if (*piVar36 != iVar43) goto LAB_00105b58;
          if (uVar6 <= uVar4) {
            iVar43 = (iVar33 - (uVar42 + uVar4)) + uVar29;
            lVar20 = ZSTD_count_2segments
                               ((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar11,puVar2);
            pcVar19 = (char *)(lVar20 + 4);
            if ((piVar36 <= piVar3) || (puVar32 <= local_90)) goto LAB_00105c99;
            goto LAB_00105c8e;
          }
LAB_00105b64:
          puVar18 = (ulong *)((ulong)uVar6 + lVar7);
          if ((int)*puVar18 == iVar43) goto code_r0x00105b6f;
        }
        else {
LAB_00105b58:
          if (uVar4 < uVar6) {
            iVar43 = (int)*puVar32;
            goto LAB_00105b64;
          }
        }
        uVar42 = *(uint *)(uVar9 + (uVar31 >> 8) * 4);
        uVar6 = *(uint *)(lVar8 + uVar28 * 4);
        bVar44 = (char)uVar31 == (char)uVar42;
        if (local_b8 <= puVar21) {
          local_b8 = local_b8 + 0x20;
          uVar27 = uVar27 + 1;
        }
        if (puVar35 < (ulong *)((long)puVar21 + uVar27)) break;
        uVar29 = (int)puVar21 - iVar41;
        puVar18 = (ulong *)((long)puVar21 + uVar27);
        puVar32 = puVar21;
      } while( true );
    }
  }
  else if (iVar43 == 5) {
    if ((iVar40 != 0) && (uVar27 = 4L << (bVar16 & 0x3f), uVar27 != 0)) {
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 0x40;
      } while (uVar28 < uVar27);
    }
    puVar32 = (ulong *)((long)param_4 + (ulong)(iVar12 == iVar13));
    local_90 = param_4;
    if (puVar18 <= puVar35) {
      local_98 = 0x40 - cVar15;
      local_94 = 0x40 - cVar14;
      local_90 = param_4;
LAB_00106208:
      local_b8 = puVar32 + 0x20;
      uVar28 = *puVar32 * -0x30e4432345000000 >> (local_98 & 0x3f);
      uVar27 = *puVar32 * -0x30e4432345000000 >> (local_94 & 0x3f);
      uVar42 = *(uint *)(uVar9 + (uVar27 >> 8) * 4);
      uVar6 = *(uint *)(lVar8 + uVar28 * 4);
      bVar44 = (char)uVar27 == (char)uVar42;
      uVar29 = (int)puVar32 - iVar41;
      uVar27 = uVar17;
      do {
        puVar21 = puVar18;
        uVar34 = (1 - local_84) + uVar29;
        piVar36 = (int *)((ulong)uVar34 + lVar7);
        if (uVar34 < uVar4) {
          piVar36 = (int *)(((iVar33 - uVar4) + uVar34) + uVar10);
        }
        uVar31 = *puVar21;
        *(uint *)(lVar8 + uVar28 * 4) = uVar29;
        uVar28 = uVar31 * -0x30e4432345000000 >> (local_98 & 0x3f);
        uVar31 = uVar31 * -0x30e4432345000000 >> (local_94 & 0x3f);
        if ((2 < (uVar4 - 1) - uVar34) && (*piVar36 == *(int *)((long)puVar32 + 1))) {
          puVar18 = (ulong *)(piVar36 + 1);
          puVar21 = (ulong *)((long)puVar32 + 5);
          puVar25 = puVar11;
          if (uVar4 <= uVar34) {
            puVar25 = puVar1;
          }
          puVar24 = (ulong *)(((long)puVar25 - (long)puVar18) + (long)puVar21);
          if (puVar1 <= puVar24) {
            puVar24 = puVar1;
          }
          puVar38 = puVar21;
          puVar37 = puVar18;
          if ((ulong *)((long)puVar24 - 7U) <= puVar21) goto LAB_00106a70;
          if (*(ulong *)(piVar36 + 1) != *(ulong *)((long)puVar32 + 5)) {
            uVar42 = 0;
            for (uVar27 = *(ulong *)(piVar36 + 1) ^ *(ulong *)((long)puVar32 + 5); (uVar27 & 1) == 0
                ; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            pcVar22 = (char *)(ulong)(uVar42 >> 3);
            goto LAB_00106ab1;
          }
          puVar38 = (ulong *)((long)puVar32 + 0xd);
          puVar37 = (ulong *)(piVar36 + 3);
          goto joined_r0x001066b1;
        }
        if ((bVar44) && (uVar42 = uVar42 >> 8, uVar5 < uVar42)) {
          iVar43 = (int)*puVar32;
          piVar36 = (int *)(uVar42 + uVar10);
          if (*piVar36 != iVar43) goto LAB_00106358;
          if (uVar4 < uVar6) goto LAB_00106364;
          iVar43 = (iVar33 - (uVar42 + uVar4)) + uVar29;
          lVar20 = ZSTD_count_2segments
                             ((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar11,puVar2);
          pcVar19 = (char *)(lVar20 + 4);
          for (; ((local_90 < puVar32 && (piVar3 < piVar36)) &&
                 (*(char *)((long)puVar32 + -1) == *(char *)((long)piVar36 + -1)));
              puVar32 = (ulong *)((long)puVar32 + -1)) {
            piVar36 = (int *)((long)piVar36 + -1);
            pcVar19 = pcVar19 + 1;
          }
          iVar40 = iVar43 + 3;
          uVar27 = (long)puVar32 - (long)local_90;
          puVar18 = (ulong *)param_2[3];
          if (puVar1 + -4 < puVar32) {
            ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_00108033:
            param_2[3] = param_2[3] + uVar27;
            piVar36 = (int *)param_2[1];
            if (0xffff < uVar27) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
            }
          }
          else {
            uVar28 = local_90[1];
            *puVar18 = *local_90;
            puVar18[1] = uVar28;
            if (0x10 < uVar27) {
              lVar20 = param_2[3];
              uVar28 = local_90[3];
              *(ulong *)(lVar20 + 0x10) = local_90[2];
              *(ulong *)(lVar20 + 0x18) = uVar28;
              if (0x20 < (long)uVar27) {
                puVar18 = (ulong *)(lVar20 + 0x20);
                do {
                  uVar28 = local_90[5];
                  puVar21 = puVar18 + 4;
                  *puVar18 = local_90[4];
                  puVar18[1] = uVar28;
                  uVar28 = local_90[7];
                  puVar18[2] = local_90[6];
                  puVar18[3] = uVar28;
                  puVar18 = puVar21;
                  local_90 = local_90 + 4;
                } while (puVar21 < (ulong *)(lVar20 + uVar27));
              }
              goto LAB_00108033;
            }
            param_2[3] = param_2[3] + uVar27;
            piVar36 = (int *)param_2[1];
          }
          *(short *)(piVar36 + 1) = (short)uVar27;
          *piVar36 = iVar40;
          if ((char *)0xffff < pcVar19 + -3) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
          }
          *(short *)((long)piVar36 + 6) = (short)(pcVar19 + -3);
          piVar36 = piVar36 + 2;
          local_64 = local_84;
          local_84 = iVar43;
          goto LAB_00106c26;
        }
LAB_00106358:
        if (uVar4 < uVar6) {
          iVar43 = (int)*puVar32;
LAB_00106364:
          puVar18 = (ulong *)((ulong)uVar6 + lVar7);
          if ((int)*puVar18 == iVar43) goto code_r0x0010636f;
        }
        uVar42 = *(uint *)(uVar9 + (uVar31 >> 8) * 4);
        uVar6 = *(uint *)(lVar8 + uVar28 * 4);
        bVar44 = (char)uVar31 == (char)uVar42;
        if (local_b8 <= puVar21) {
          local_b8 = local_b8 + 0x20;
          uVar27 = uVar27 + 1;
        }
        if (puVar35 < (ulong *)((long)puVar21 + uVar27)) break;
        uVar29 = (int)puVar21 - iVar41;
        puVar18 = (ulong *)((long)puVar21 + uVar27);
        puVar32 = puVar21;
      } while( true );
    }
  }
  else {
    if ((iVar40 != 0) && (uVar27 = 4L << (bVar16 & 0x3f), uVar27 != 0)) {
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 0x40;
      } while (uVar28 < uVar27);
    }
    puVar32 = (ulong *)((long)param_4 + (ulong)(iVar12 == iVar13));
    local_90 = param_4;
    if (puVar18 <= puVar35) {
      local_98 = 0x20 - cVar15;
      local_94 = 0x20 - cVar14;
      local_90 = param_4;
LAB_001057f0:
      uVar29 = (int)*puVar32 * -0x61c8864f;
      local_b8 = puVar32 + 0x20;
      uVar28 = (ulong)(uVar29 >> (local_98 & 0x1f));
      uVar29 = uVar29 >> (local_94 & 0x1f);
      uVar42 = *(uint *)(uVar9 + (ulong)(uVar29 >> 8) * 4);
      uVar6 = *(uint *)(lVar8 + uVar28 * 4);
      bVar44 = (char)uVar29 == (char)uVar42;
      uVar29 = (int)puVar32 - iVar41;
      uVar27 = uVar17;
      do {
        puVar21 = puVar18;
        uVar34 = (1 - local_84) + uVar29;
        piVar36 = (int *)((ulong)uVar34 + lVar7);
        if (uVar34 < uVar4) {
          piVar36 = (int *)(((iVar33 - uVar4) + uVar34) + uVar10);
        }
        uVar30 = (int)*puVar21 * -0x61c8864f;
        *(uint *)(lVar8 + uVar28 * 4) = uVar29;
        uVar28 = (ulong)(uVar30 >> (local_98 & 0x1f));
        uVar30 = uVar30 >> (local_94 & 0x1f);
        if ((2 < (uVar4 - 1) - uVar34) && (*piVar36 == *(int *)((long)puVar32 + 1))) {
          puVar18 = (ulong *)(piVar36 + 1);
          puVar21 = (ulong *)((long)puVar32 + 5);
          puVar25 = puVar11;
          if (uVar4 <= uVar34) {
            puVar25 = puVar1;
          }
          puVar24 = (ulong *)(((long)puVar25 - (long)puVar18) + (long)puVar21);
          if (puVar1 <= puVar24) {
            puVar24 = puVar1;
          }
          puVar38 = puVar21;
          puVar37 = puVar18;
          if ((ulong *)((long)puVar24 - 7U) <= puVar21) goto LAB_001068ab;
          if (*(ulong *)(piVar36 + 1) != *(ulong *)((long)puVar32 + 5)) {
            uVar42 = 0;
            for (uVar27 = *(ulong *)(piVar36 + 1) ^ *(ulong *)((long)puVar32 + 5); (uVar27 & 1) == 0
                ; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            pcVar22 = (char *)(ulong)(uVar42 >> 3);
            goto LAB_001068ec;
          }
          puVar38 = (ulong *)((long)puVar32 + 0xd);
          puVar37 = (ulong *)(piVar36 + 3);
          goto joined_r0x001067d1;
        }
        if ((bVar44) && (uVar42 = uVar42 >> 8, uVar5 < uVar42)) {
          piVar36 = (int *)(uVar42 + uVar10);
          iVar43 = (int)*puVar32;
          if (*piVar36 != iVar43) goto LAB_00105930;
          if (uVar6 <= uVar4) {
            iVar43 = (iVar33 - (uVar42 + uVar4)) + uVar29;
            lVar20 = ZSTD_count_2segments
                               ((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar11,puVar2);
            pcVar19 = (char *)(lVar20 + 4);
            if ((piVar36 <= piVar3) || (puVar32 <= local_90)) goto LAB_00105dba;
            goto LAB_00105dae;
          }
LAB_0010593c:
          puVar18 = (ulong *)((ulong)uVar6 + lVar7);
          if ((int)*puVar18 == iVar43) goto code_r0x00105947;
        }
        else {
LAB_00105930:
          if (uVar4 < uVar6) {
            iVar43 = (int)*puVar32;
            goto LAB_0010593c;
          }
        }
        uVar42 = *(uint *)(uVar9 + (ulong)(uVar30 >> 8) * 4);
        uVar6 = *(uint *)(lVar8 + uVar28 * 4);
        bVar44 = (char)uVar30 == (char)uVar42;
        if (local_b8 <= puVar21) {
          local_b8 = local_b8 + 0x20;
          uVar27 = uVar27 + 1;
        }
        if (puVar35 < (ulong *)((long)puVar21 + uVar27)) break;
        uVar29 = (int)puVar21 - iVar41;
        puVar18 = (ulong *)((long)puVar21 + uVar27);
        puVar32 = puVar21;
      } while( true );
    }
  }
LAB_00105be0:
  *param_3 = local_84;
  param_3[1] = local_64;
  return (long)puVar1 - (long)local_90;
joined_r0x00106741:
  if (puVar38 < (ulong *)((long)puVar24 - 7U)) {
    if (*puVar37 == *puVar38) goto LAB_00107ee0;
    uVar42 = 0;
    for (uVar27 = *puVar37 ^ *puVar38; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000)
    {
      uVar42 = uVar42 + 1;
    }
    pcVar22 = (char *)((long)puVar38 + ((ulong)(uVar42 >> 3) - (long)puVar21));
  }
  else {
LAB_00106b14:
    if ((puVar38 < (ulong *)((long)puVar24 - 3U)) && ((int)*puVar37 == (int)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 4);
      puVar37 = (ulong *)((long)puVar37 + 4);
    }
    if ((puVar38 < (ulong *)((long)puVar24 - 1U)) && ((short)*puVar37 == (short)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 2);
      puVar37 = (ulong *)((long)puVar37 + 2);
    }
    if (puVar38 < puVar24) {
      puVar38 = (ulong *)((long)puVar38 + (ulong)((char)*puVar37 == (char)*puVar38));
    }
    pcVar22 = (char *)((long)puVar38 - (long)puVar21);
  }
  goto LAB_00106b55;
LAB_00107ee0:
  puVar38 = puVar38 + 1;
  puVar37 = puVar37 + 1;
  goto joined_r0x00106741;
LAB_00106b55:
  if (puVar25 == (ulong *)((long)puVar18 + (long)pcVar22)) {
    puVar21 = (ulong *)((long)puVar21 + (long)pcVar22);
    puVar18 = (ulong *)((long)puVar1 - 7);
    puVar25 = puVar21;
    puVar24 = puVar2;
    if (puVar21 < puVar18) {
      if (*puVar2 == *puVar21) {
        puVar25 = puVar21 + 1;
        puVar24 = puVar2 + 1;
        if (puVar25 < puVar18) {
LAB_00108135:
          if (*puVar24 == *puVar25) goto LAB_00108230;
          uVar42 = 0;
          for (uVar27 = *puVar24 ^ *puVar25; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          pcVar19 = (char *)((long)puVar25 + ((ulong)(uVar42 >> 3) - (long)puVar21));
          goto LAB_00107a1f;
        }
        goto LAB_00107af7;
      }
      uVar42 = 0;
      for (uVar27 = *puVar2 ^ *puVar21; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000
          ) {
        uVar42 = uVar42 + 1;
      }
      pcVar19 = (char *)(ulong)(uVar42 >> 3);
    }
    else {
LAB_00107af7:
      if ((puVar25 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar24 == (int)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 4);
        puVar24 = (ulong *)((long)puVar24 + 4);
      }
      if ((puVar25 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar24 == (short)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 2);
        puVar24 = (ulong *)((long)puVar24 + 2);
      }
      if (puVar25 < puVar1) {
        puVar25 = (ulong *)((long)puVar25 + (ulong)((char)*puVar24 == (char)*puVar25));
      }
      pcVar19 = (char *)((long)puVar25 - (long)puVar21);
    }
LAB_00107a1f:
    pcVar22 = pcVar22 + (long)pcVar19;
  }
  puVar32 = (ulong *)((long)puVar32 + 1);
  pcVar19 = pcVar22 + 4;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_00106ce3:
    param_2[3] = param_2[3] + uVar27;
    puVar23 = (undefined4 *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_00106ce3;
    }
    param_2[3] = param_2[3] + uVar27;
    puVar23 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar23 + 1) = (short)uVar27;
  *puVar23 = 1;
  if ((char *)0xffff < pcVar22 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
  }
  *(short *)((long)puVar23 + 6) = (short)(pcVar22 + 1);
  piVar36 = puVar23 + 2;
  goto LAB_00106d47;
LAB_00108230:
  puVar25 = puVar25 + 1;
  puVar24 = puVar24 + 1;
  if (puVar18 <= puVar25) goto LAB_00107af7;
  goto LAB_00108135;
code_r0x0010601f:
  puVar21 = (ulong *)((long)puVar32 + 4);
  iVar43 = (int)puVar32 - (int)puVar18;
  puVar25 = (ulong *)((long)puVar1 - 7);
  if (puVar21 < puVar25) {
    if (*(ulong *)((long)puVar18 + 4) == *(ulong *)((long)puVar32 + 4)) {
      puVar24 = (ulong *)((long)puVar32 + 0xc);
      puVar38 = (ulong *)((long)puVar18 + 0xc);
      if (puVar24 < puVar25) {
LAB_0010605d:
        if (*puVar38 == *puVar24) goto LAB_00107f60;
        uVar42 = 0;
        for (uVar27 = *puVar38 ^ *puVar24; (uVar27 & 1) == 0;
            uVar27 = uVar27 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        pcVar19 = (char *)((long)puVar24 + ((ulong)(uVar42 >> 3) - (long)puVar21));
        goto LAB_001071a1;
      }
      goto LAB_00107154;
    }
    uVar42 = 0;
    for (uVar27 = *(ulong *)((long)puVar18 + 4) ^ *(ulong *)((long)puVar32 + 4); (uVar27 & 1) == 0;
        uVar27 = uVar27 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    pcVar19 = (char *)(ulong)(uVar42 >> 3);
  }
  else {
    puVar38 = (ulong *)((long)puVar18 + 4);
    puVar24 = puVar21;
LAB_00107154:
    if ((puVar24 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar38 == (int)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 4);
      puVar38 = (ulong *)((long)puVar38 + 4);
    }
    if ((puVar24 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar38 == (short)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 2);
      puVar38 = (ulong *)((long)puVar38 + 2);
    }
    if (puVar24 < puVar1) {
      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar38 == (char)*puVar24));
    }
    pcVar19 = (char *)((long)puVar24 - (long)puVar21);
  }
LAB_001071a1:
  pcVar19 = pcVar19 + 4;
  if ((puVar2 < puVar18) && (local_90 < puVar32)) {
    while (*(char *)((long)puVar32 + -1) == *(char *)((long)puVar18 + -1)) {
      puVar32 = (ulong *)((long)puVar32 + -1);
      puVar18 = (ulong *)((long)puVar18 + -1);
      pcVar19 = pcVar19 + 1;
      if ((puVar32 <= local_90) || (puVar18 <= puVar2)) break;
    }
  }
  iVar40 = iVar43 + 3;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_001072bf:
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_001072bf;
    }
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
  }
  *(short *)(piVar36 + 1) = (short)uVar27;
  *piVar36 = iVar40;
  if ((char *)0xffff < pcVar19 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
  }
  local_64 = local_84;
  *(short *)((long)piVar36 + 6) = (short)(pcVar19 + -3);
  piVar36 = piVar36 + 2;
  local_84 = iVar43;
LAB_00106d47:
  puVar32 = (ulong *)((long)puVar32 + (long)pcVar19);
  param_2[1] = (long)piVar36;
  if (puVar32 <= puVar35) {
    lVar20 = *(long *)((long)puVar32 + -2);
    *(uint *)(lVar8 + ((ulong)(*(long *)(lVar7 + 2 + (ulong)uVar29) * -0x30e4432340650000) >>
                      (local_98 & 0x3f)) * 4) = uVar29 + 2;
    *(int *)(lVar8 + ((ulong)(lVar20 * -0x30e4432340650000) >> (local_98 & 0x3f)) * 4) =
         ((int)puVar32 + -2) - iVar41;
    iVar43 = local_84;
    do {
      local_84 = iVar43;
      iVar43 = local_64;
      iVar40 = (int)puVar32 - iVar41;
      uVar42 = iVar40 - iVar43;
      piVar36 = (int *)(lVar7 + (ulong)uVar42);
      if (uVar42 < uVar4) {
        piVar36 = (int *)(uVar10 + ((ulong)uVar42 - (ulong)uVar39));
      }
      local_64 = iVar43;
      if ((((uVar4 - 1) + iVar43) - iVar40 < 3) || (*piVar36 != (int)*puVar32)) goto LAB_00106d59;
      puVar18 = puVar11;
      if (uVar4 <= uVar42) {
        puVar18 = puVar1;
      }
      lVar26 = ZSTD_count_2segments((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar18,puVar2);
      lVar20 = lVar26 + 4;
      puVar18 = (ulong *)param_2[3];
      if (puVar1 + -4 < puVar32) {
        ZSTD_safecopyLiterals(puVar18,puVar32,puVar32);
      }
      else {
        uVar27 = puVar32[1];
        *puVar18 = *puVar32;
        puVar18[1] = uVar27;
      }
      puVar23 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar23 + 1) = 0;
      *puVar23 = 1;
      if (0xffff < lVar26 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
      }
      *(short *)((long)puVar23 + 6) = (short)(lVar26 + 1U);
      param_2[1] = (long)(puVar23 + 2);
      uVar27 = *puVar32;
      puVar32 = (ulong *)((long)puVar32 + lVar20);
      *(int *)(lVar8 + (uVar27 * -0x30e4432340650000 >> (local_98 & 0x3f)) * 4) = iVar40;
      local_64 = local_84;
    } while (puVar32 <= puVar35);
    local_64 = local_84;
    local_84 = iVar43;
  }
LAB_00106d59:
  puVar18 = (ulong *)(uVar17 + (long)puVar32);
  local_90 = puVar32;
  if (puVar35 < puVar18) goto LAB_00105be0;
  goto LAB_00105eb0;
LAB_00107f60:
  puVar24 = puVar24 + 1;
  puVar38 = puVar38 + 1;
  if (puVar25 <= puVar24) goto LAB_00107154;
  goto LAB_0010605d;
joined_r0x00106621:
  if (puVar38 < (ulong *)((long)puVar24 - 7U)) {
    if (*puVar37 == *puVar38) goto LAB_00107f00;
    uVar42 = 0;
    for (uVar27 = *puVar37 ^ *puVar38; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000)
    {
      uVar42 = uVar42 + 1;
    }
    pcVar22 = (char *)((long)puVar38 + ((ulong)(uVar42 >> 3) - (long)puVar21));
  }
  else {
LAB_00106807:
    if ((puVar38 < (ulong *)((long)puVar24 - 3U)) && ((int)*puVar37 == (int)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 4);
      puVar37 = (ulong *)((long)puVar37 + 4);
    }
    if ((puVar38 < (ulong *)((long)puVar24 - 1U)) && ((short)*puVar37 == (short)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 2);
      puVar37 = (ulong *)((long)puVar37 + 2);
    }
    if (puVar38 < puVar24) {
      puVar38 = (ulong *)((long)puVar38 + (ulong)((char)*puVar37 == (char)*puVar38));
    }
    pcVar22 = (char *)((long)puVar38 - (long)puVar21);
  }
  goto LAB_00106848;
LAB_00107f00:
  puVar38 = puVar38 + 1;
  puVar37 = puVar37 + 1;
  goto joined_r0x00106621;
LAB_00106848:
  if (puVar25 == (ulong *)((long)puVar18 + (long)pcVar22)) {
    puVar21 = (ulong *)((long)puVar21 + (long)pcVar22);
    puVar18 = (ulong *)((long)puVar1 - 7);
    puVar25 = puVar21;
    puVar24 = puVar2;
    if (puVar21 < puVar18) {
      if (*puVar2 == *puVar21) {
        puVar25 = puVar21 + 1;
        puVar24 = puVar2 + 1;
        if (puVar25 < puVar18) {
LAB_001080fa:
          if (*puVar24 == *puVar25) goto LAB_00108210;
          uVar42 = 0;
          for (uVar27 = *puVar24 ^ *puVar25; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          pcVar19 = (char *)((long)puVar25 + ((ulong)(uVar42 >> 3) - (long)puVar21));
          goto LAB_001079a5;
        }
        goto LAB_00107a93;
      }
      uVar42 = 0;
      for (uVar27 = *puVar2 ^ *puVar21; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000
          ) {
        uVar42 = uVar42 + 1;
      }
      pcVar19 = (char *)(ulong)(uVar42 >> 3);
    }
    else {
LAB_00107a93:
      if ((puVar25 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar24 == (int)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 4);
        puVar24 = (ulong *)((long)puVar24 + 4);
      }
      if ((puVar25 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar24 == (short)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 2);
        puVar24 = (ulong *)((long)puVar24 + 2);
      }
      if (puVar25 < puVar1) {
        puVar25 = (ulong *)((long)puVar25 + (ulong)((char)*puVar24 == (char)*puVar25));
      }
      pcVar19 = (char *)((long)puVar25 - (long)puVar21);
    }
LAB_001079a5:
    pcVar22 = pcVar22 + (long)pcVar19;
  }
  puVar32 = (ulong *)((long)puVar32 + 1);
  pcVar19 = pcVar22 + 4;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_00106959:
    param_2[3] = param_2[3] + uVar27;
    puVar23 = (undefined4 *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_00106959;
    }
    param_2[3] = param_2[3] + uVar27;
    puVar23 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar23 + 1) = (short)uVar27;
  *puVar23 = 1;
  if ((char *)0xffff < pcVar22 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
  }
  *(short *)((long)puVar23 + 6) = (short)(pcVar22 + 1);
  piVar36 = puVar23 + 2;
  goto LAB_001069bd;
LAB_00108210:
  puVar25 = puVar25 + 1;
  puVar24 = puVar24 + 1;
  if (puVar18 <= puVar25) goto LAB_00107a93;
  goto LAB_001080fa;
LAB_00105c8e:
  if (*(char *)((long)puVar32 + -1) != *(char *)((long)piVar36 + -1)) goto LAB_00105c99;
  puVar32 = (ulong *)((long)puVar32 + -1);
  piVar36 = (int *)((long)piVar36 + -1);
  pcVar19 = pcVar19 + 1;
  if ((puVar32 <= local_90) || (piVar36 <= piVar3)) goto LAB_00105c99;
  goto LAB_00105c8e;
LAB_00105c99:
  iVar40 = iVar43 + 3;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_00108076:
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_00108076;
    }
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
  }
  *(short *)(piVar36 + 1) = (short)uVar27;
  *piVar36 = iVar40;
  if ((char *)0xffff < pcVar19 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
  }
  *(short *)((long)piVar36 + 6) = (short)(pcVar19 + -3);
  piVar36 = piVar36 + 2;
  local_64 = local_84;
  local_84 = iVar43;
  goto LAB_001069bd;
code_r0x00105b6f:
  puVar21 = (ulong *)((long)puVar32 + 4);
  iVar43 = (int)puVar32 - (int)puVar18;
  puVar25 = (ulong *)((long)puVar1 - 7);
  if (puVar21 < puVar25) {
    if (*(ulong *)((long)puVar18 + 4) == *(ulong *)((long)puVar32 + 4)) {
      puVar24 = (ulong *)((long)puVar32 + 0xc);
      puVar38 = (ulong *)((long)puVar18 + 0xc);
      if (puVar24 < puVar25) {
LAB_00105bad:
        if (*puVar38 == *puVar24) goto LAB_00107fa0;
        uVar42 = 0;
        for (uVar27 = *puVar38 ^ *puVar24; (uVar27 & 1) == 0;
            uVar27 = uVar27 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        pcVar19 = (char *)((long)puVar24 + ((ulong)(uVar42 >> 3) - (long)puVar21));
        goto LAB_00107385;
      }
      goto LAB_00107338;
    }
    uVar42 = 0;
    for (uVar27 = *(ulong *)((long)puVar18 + 4) ^ *(ulong *)((long)puVar32 + 4); (uVar27 & 1) == 0;
        uVar27 = uVar27 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    pcVar19 = (char *)(ulong)(uVar42 >> 3);
  }
  else {
    puVar38 = (ulong *)((long)puVar18 + 4);
    puVar24 = puVar21;
LAB_00107338:
    if ((puVar24 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar38 == (int)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 4);
      puVar38 = (ulong *)((long)puVar38 + 4);
    }
    if ((puVar24 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar38 == (short)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 2);
      puVar38 = (ulong *)((long)puVar38 + 2);
    }
    if (puVar24 < puVar1) {
      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar38 == (char)*puVar24));
    }
    pcVar19 = (char *)((long)puVar24 - (long)puVar21);
  }
LAB_00107385:
  pcVar19 = pcVar19 + 4;
  if ((local_90 < puVar32) && (puVar2 < puVar18)) {
    while (*(char *)((long)puVar32 + -1) == *(char *)((long)puVar18 + -1)) {
      puVar32 = (ulong *)((long)puVar32 + -1);
      puVar18 = (ulong *)((long)puVar18 + -1);
      pcVar19 = pcVar19 + 1;
      if ((puVar32 <= local_90) || (puVar18 <= puVar2)) break;
    }
  }
  iVar40 = iVar43 + 3;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_0010741e:
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_0010741e;
    }
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
  }
  *(short *)(piVar36 + 1) = (short)uVar27;
  *piVar36 = iVar40;
  if ((char *)0xffff < pcVar19 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
  }
  local_64 = local_84;
  *(short *)((long)piVar36 + 6) = (short)(pcVar19 + -3);
  piVar36 = piVar36 + 2;
  local_84 = iVar43;
LAB_001069bd:
  puVar32 = (ulong *)((long)puVar32 + (long)pcVar19);
  param_2[1] = (long)piVar36;
  if (puVar32 <= puVar35) {
    lVar20 = *(long *)((long)puVar32 + -2);
    *(uint *)(lVar8 + ((ulong)(*(long *)(lVar7 + 2 + (ulong)uVar29) * -0x30e44323405a9d00) >>
                      (local_98 & 0x3f)) * 4) = uVar29 + 2;
    *(int *)(lVar8 + ((ulong)(lVar20 * -0x30e44323405a9d00) >> (local_98 & 0x3f)) * 4) =
         ((int)puVar32 + -2) - iVar41;
    iVar43 = local_84;
    do {
      local_84 = iVar43;
      iVar43 = local_64;
      iVar40 = (int)puVar32 - iVar41;
      uVar42 = iVar40 - iVar43;
      piVar36 = (int *)(lVar7 + (ulong)uVar42);
      if (uVar42 < uVar4) {
        piVar36 = (int *)(uVar10 + ((ulong)uVar42 - (ulong)uVar39));
      }
      local_64 = iVar43;
      if ((((uVar4 - 1) + iVar43) - iVar40 < 3) || (*piVar36 != (int)*puVar32)) goto LAB_001069cf;
      puVar18 = puVar11;
      if (uVar4 <= uVar42) {
        puVar18 = puVar1;
      }
      lVar26 = ZSTD_count_2segments((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar18,puVar2);
      lVar20 = lVar26 + 4;
      puVar18 = (ulong *)param_2[3];
      if (puVar1 + -4 < puVar32) {
        ZSTD_safecopyLiterals(puVar18,puVar32,puVar32,puVar1 + -4);
      }
      else {
        uVar27 = puVar32[1];
        *puVar18 = *puVar32;
        puVar18[1] = uVar27;
      }
      puVar23 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar23 + 1) = 0;
      *puVar23 = 1;
      if (0xffff < lVar26 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
      }
      *(short *)((long)puVar23 + 6) = (short)(lVar26 + 1U);
      param_2[1] = (long)(puVar23 + 2);
      uVar27 = *puVar32;
      puVar32 = (ulong *)((long)puVar32 + lVar20);
      *(int *)(lVar8 + (uVar27 * -0x30e44323405a9d00 >> (local_98 & 0x3f)) * 4) = iVar40;
      local_64 = local_84;
    } while (puVar32 <= puVar35);
    local_64 = local_84;
    local_84 = iVar43;
  }
LAB_001069cf:
  puVar18 = (ulong *)(uVar17 + (long)puVar32);
  local_90 = puVar32;
  if (puVar35 < puVar18) goto LAB_00105be0;
  goto LAB_00105a08;
LAB_00107fa0:
  puVar24 = puVar24 + 1;
  puVar38 = puVar38 + 1;
  if (puVar25 <= puVar24) goto LAB_00107338;
  goto LAB_00105bad;
joined_r0x001066b1:
  if (puVar38 < (ulong *)((long)puVar24 - 7U)) {
    if (*puVar37 == *puVar38) goto LAB_00107f20;
    uVar42 = 0;
    for (uVar27 = *puVar37 ^ *puVar38; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000)
    {
      uVar42 = uVar42 + 1;
    }
    pcVar22 = (char *)((long)puVar38 + ((ulong)(uVar42 >> 3) - (long)puVar21));
  }
  else {
LAB_00106a70:
    if ((puVar38 < (ulong *)((long)puVar24 - 3U)) && ((int)*puVar37 == (int)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 4);
      puVar37 = (ulong *)((long)puVar37 + 4);
    }
    if ((puVar38 < (ulong *)((long)puVar24 - 1U)) && ((short)*puVar37 == (short)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 2);
      puVar37 = (ulong *)((long)puVar37 + 2);
    }
    if (puVar38 < puVar24) {
      puVar38 = (ulong *)((long)puVar38 + (ulong)((char)*puVar37 == (char)*puVar38));
    }
    pcVar22 = (char *)((long)puVar38 - (long)puVar21);
  }
  goto LAB_00106ab1;
LAB_00107f20:
  puVar38 = puVar38 + 1;
  puVar37 = puVar37 + 1;
  goto joined_r0x001066b1;
LAB_00106ab1:
  if (puVar25 == (ulong *)((long)puVar18 + (long)pcVar22)) {
    puVar21 = (ulong *)((long)puVar21 + (long)pcVar22);
    puVar18 = (ulong *)((long)puVar1 - 7);
    puVar25 = puVar21;
    puVar24 = puVar2;
    if (puVar21 < puVar18) {
      if (*puVar2 == *puVar21) {
        puVar25 = puVar21 + 1;
        puVar24 = puVar2 + 1;
        if (puVar25 < puVar18) {
LAB_001080bf:
          if (*puVar24 == *puVar25) goto LAB_001081f0;
          uVar42 = 0;
          for (uVar27 = *puVar24 ^ *puVar25; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          pcVar19 = (char *)((long)puVar25 + ((ulong)(uVar42 >> 3) - (long)puVar21));
          goto LAB_00107968;
        }
        goto LAB_00107a2f;
      }
      uVar42 = 0;
      for (uVar27 = *puVar2 ^ *puVar21; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000
          ) {
        uVar42 = uVar42 + 1;
      }
      pcVar19 = (char *)(ulong)(uVar42 >> 3);
    }
    else {
LAB_00107a2f:
      if ((puVar25 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar24 == (int)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 4);
        puVar24 = (ulong *)((long)puVar24 + 4);
      }
      if ((puVar25 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar24 == (short)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 2);
        puVar24 = (ulong *)((long)puVar24 + 2);
      }
      if (puVar25 < puVar1) {
        puVar25 = (ulong *)((long)puVar25 + (ulong)((char)*puVar24 == (char)*puVar25));
      }
      pcVar19 = (char *)((long)puVar25 - (long)puVar21);
    }
LAB_00107968:
    pcVar22 = pcVar22 + (long)pcVar19;
  }
  puVar32 = (ulong *)((long)puVar32 + 1);
  pcVar19 = pcVar22 + 4;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_00106bc2:
    param_2[3] = param_2[3] + uVar27;
    puVar23 = (undefined4 *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_00106bc2;
    }
    param_2[3] = param_2[3] + uVar27;
    puVar23 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar23 + 1) = (short)uVar27;
  *puVar23 = 1;
  if ((char *)0xffff < pcVar22 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
  }
  *(short *)((long)puVar23 + 6) = (short)(pcVar22 + 1);
  piVar36 = puVar23 + 2;
  goto LAB_00106c26;
LAB_001081f0:
  puVar25 = puVar25 + 1;
  puVar24 = puVar24 + 1;
  if (puVar18 <= puVar25) goto LAB_00107a2f;
  goto LAB_001080bf;
code_r0x0010636f:
  puVar21 = (ulong *)((long)puVar32 + 4);
  iVar43 = (int)puVar32 - (int)puVar18;
  puVar25 = (ulong *)((long)puVar1 - 7);
  if (puVar21 < puVar25) {
    if (*(ulong *)((long)puVar18 + 4) == *(ulong *)((long)puVar32 + 4)) {
      puVar24 = (ulong *)((long)puVar32 + 0xc);
      puVar38 = (ulong *)((long)puVar18 + 0xc);
      if (puVar24 < puVar25) {
LAB_001063ad:
        if (*puVar38 == *puVar24) goto LAB_00107f80;
        uVar42 = 0;
        for (uVar27 = *puVar38 ^ *puVar24; (uVar27 & 1) == 0;
            uVar27 = uVar27 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        pcVar19 = (char *)((long)puVar24 + ((ulong)(uVar42 >> 3) - (long)puVar21));
        goto LAB_001070bc;
      }
      goto LAB_0010706f;
    }
    uVar42 = 0;
    for (uVar27 = *(ulong *)((long)puVar18 + 4) ^ *(ulong *)((long)puVar32 + 4); (uVar27 & 1) == 0;
        uVar27 = uVar27 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    pcVar19 = (char *)(ulong)(uVar42 >> 3);
  }
  else {
    puVar38 = (ulong *)((long)puVar18 + 4);
    puVar24 = puVar21;
LAB_0010706f:
    if ((puVar24 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar38 == (int)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 4);
      puVar38 = (ulong *)((long)puVar38 + 4);
    }
    if ((puVar24 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar38 == (short)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 2);
      puVar38 = (ulong *)((long)puVar38 + 2);
    }
    if (puVar24 < puVar1) {
      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar38 == (char)*puVar24));
    }
    pcVar19 = (char *)((long)puVar24 - (long)puVar21);
  }
LAB_001070bc:
  pcVar19 = pcVar19 + 4;
  if ((local_90 < puVar32) && (puVar2 < puVar18)) {
    while (*(char *)((long)puVar32 + -1) == *(char *)((long)puVar18 + -1)) {
      puVar32 = (ulong *)((long)puVar32 + -1);
      puVar18 = (ulong *)((long)puVar18 + -1);
      pcVar19 = pcVar19 + 1;
      if ((puVar32 <= local_90) || (puVar18 <= puVar2)) break;
    }
  }
  iVar40 = iVar43 + 3;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_0010723d:
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_0010723d;
    }
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
  }
  *(short *)(piVar36 + 1) = (short)uVar27;
  *piVar36 = iVar40;
  if ((char *)0xffff < pcVar19 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
  }
  local_64 = local_84;
  *(short *)((long)piVar36 + 6) = (short)(pcVar19 + -3);
  piVar36 = piVar36 + 2;
  local_84 = iVar43;
LAB_00106c26:
  puVar32 = (ulong *)((long)puVar32 + (long)pcVar19);
  param_2[1] = (long)piVar36;
  if (puVar32 <= puVar35) {
    lVar20 = *(long *)((long)puVar32 + -2);
    *(uint *)(lVar8 + ((ulong)(*(long *)(lVar7 + 2 + (ulong)uVar29) * -0x30e4432345000000) >>
                      (local_98 & 0x3f)) * 4) = uVar29 + 2;
    *(int *)(lVar8 + ((ulong)(lVar20 * -0x30e4432345000000) >> (local_98 & 0x3f)) * 4) =
         ((int)puVar32 + -2) - iVar41;
    iVar43 = local_84;
    do {
      local_84 = iVar43;
      iVar43 = local_64;
      iVar40 = (int)puVar32 - iVar41;
      uVar42 = iVar40 - iVar43;
      piVar36 = (int *)(lVar7 + (ulong)uVar42);
      if (uVar42 < uVar4) {
        piVar36 = (int *)(uVar10 + ((ulong)uVar42 - (ulong)uVar39));
      }
      local_64 = iVar43;
      if ((((uVar4 - 1) + iVar43) - iVar40 < 3) || (*piVar36 != (int)*puVar32)) goto LAB_00106c38;
      puVar18 = puVar11;
      if (uVar4 <= uVar42) {
        puVar18 = puVar1;
      }
      lVar26 = ZSTD_count_2segments((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar18,puVar2);
      lVar20 = lVar26 + 4;
      puVar18 = (ulong *)param_2[3];
      if (puVar1 + -4 < puVar32) {
        ZSTD_safecopyLiterals(puVar18,puVar32,puVar32,puVar1 + -4);
      }
      else {
        uVar27 = puVar32[1];
        *puVar18 = *puVar32;
        puVar18[1] = uVar27;
      }
      puVar23 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar23 + 1) = 0;
      *puVar23 = 1;
      if (0xffff < lVar26 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
      }
      *(short *)((long)puVar23 + 6) = (short)(lVar26 + 1U);
      param_2[1] = (long)(puVar23 + 2);
      uVar27 = *puVar32;
      puVar32 = (ulong *)((long)puVar32 + lVar20);
      *(int *)(lVar8 + (uVar27 * -0x30e4432345000000 >> (local_98 & 0x3f)) * 4) = iVar40;
      local_64 = local_84;
    } while (puVar32 <= puVar35);
    local_64 = local_84;
    local_84 = iVar43;
  }
LAB_00106c38:
  puVar18 = (ulong *)(uVar17 + (long)puVar32);
  local_90 = puVar32;
  if (puVar35 < puVar18) goto LAB_00105be0;
  goto LAB_00106208;
LAB_00107f80:
  puVar24 = puVar24 + 1;
  puVar38 = puVar38 + 1;
  if (puVar25 <= puVar24) goto LAB_0010706f;
  goto LAB_001063ad;
joined_r0x001067d1:
  if (puVar38 < (ulong *)((long)puVar24 - 7U)) {
    if (*puVar37 == *puVar38) goto LAB_00107f40;
    uVar42 = 0;
    for (uVar27 = *puVar37 ^ *puVar38; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000)
    {
      uVar42 = uVar42 + 1;
    }
    pcVar22 = (char *)((long)puVar38 + ((ulong)(uVar42 >> 3) - (long)puVar21));
  }
  else {
LAB_001068ab:
    if ((puVar38 < (ulong *)((long)puVar24 - 3U)) && ((int)*puVar37 == (int)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 4);
      puVar37 = (ulong *)((long)puVar37 + 4);
    }
    if ((puVar38 < (ulong *)((long)puVar24 - 1U)) && ((short)*puVar37 == (short)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 2);
      puVar37 = (ulong *)((long)puVar37 + 2);
    }
    if (puVar38 < puVar24) {
      puVar38 = (ulong *)((long)puVar38 + (ulong)((char)*puVar37 == (char)*puVar38));
    }
    pcVar22 = (char *)((long)puVar38 - (long)puVar21);
  }
  goto LAB_001068ec;
LAB_00107f40:
  puVar38 = puVar38 + 1;
  puVar37 = puVar37 + 1;
  goto joined_r0x001067d1;
LAB_001068ec:
  if (puVar25 == (ulong *)((long)puVar18 + (long)pcVar22)) {
    puVar21 = (ulong *)((long)puVar21 + (long)pcVar22);
    puVar18 = (ulong *)((long)puVar1 - 7);
    puVar25 = puVar21;
    puVar24 = puVar2;
    if (puVar21 < puVar18) {
      if (*puVar2 == *puVar21) {
        puVar25 = puVar21 + 1;
        puVar24 = puVar2 + 1;
        if (puVar25 < puVar18) {
LAB_00108170:
          if (*puVar24 == *puVar25) goto LAB_001081dd;
          uVar42 = 0;
          for (uVar27 = *puVar24 ^ *puVar25; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          pcVar19 = (char *)((long)puVar25 + ((ulong)(uVar42 >> 3) - (long)puVar21));
          goto LAB_001079e2;
        }
        goto LAB_00107b5b;
      }
      uVar42 = 0;
      for (uVar27 = *puVar2 ^ *puVar21; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000
          ) {
        uVar42 = uVar42 + 1;
      }
      pcVar19 = (char *)(ulong)(uVar42 >> 3);
    }
    else {
LAB_00107b5b:
      if ((puVar25 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar24 == (int)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 4);
        puVar24 = (ulong *)((long)puVar24 + 4);
      }
      if ((puVar25 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar24 == (short)*puVar25)) {
        puVar25 = (ulong *)((long)puVar25 + 2);
        puVar24 = (ulong *)((long)puVar24 + 2);
      }
      if (puVar25 < puVar1) {
        puVar25 = (ulong *)((long)puVar25 + (ulong)((char)*puVar24 == (char)*puVar25));
      }
      pcVar19 = (char *)((long)puVar25 - (long)puVar21);
    }
LAB_001079e2:
    pcVar22 = pcVar22 + (long)pcVar19;
  }
  puVar32 = (ulong *)((long)puVar32 + 1);
  pcVar19 = pcVar22 + 4;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
LAB_00106e04:
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
    if (0xffff < uVar27) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
    }
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (0x10 < uVar27) {
      lVar20 = param_2[3];
      uVar28 = local_90[3];
      *(ulong *)(lVar20 + 0x10) = local_90[2];
      *(ulong *)(lVar20 + 0x18) = uVar28;
      if (0x20 < (long)uVar27) {
        puVar18 = (ulong *)(lVar20 + 0x20);
        do {
          uVar28 = local_90[5];
          puVar21 = puVar18 + 4;
          *puVar18 = local_90[4];
          puVar18[1] = uVar28;
          uVar28 = local_90[7];
          puVar18[2] = local_90[6];
          puVar18[3] = uVar28;
          puVar18 = puVar21;
          local_90 = local_90 + 4;
        } while (puVar21 < (ulong *)(lVar20 + uVar27));
      }
      goto LAB_00106e04;
    }
    param_2[3] = param_2[3] + uVar27;
    piVar36 = (int *)param_2[1];
  }
  *(short *)(piVar36 + 1) = (short)uVar27;
  *piVar36 = 1;
  if ((char *)0xffff < pcVar22 + 1) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
  }
  *(short *)((long)piVar36 + 6) = (short)(pcVar22 + 1);
  goto LAB_00106e68;
LAB_001081dd:
  puVar25 = puVar25 + 1;
  puVar24 = puVar24 + 1;
  if (puVar18 <= puVar25) goto LAB_00107b5b;
  goto LAB_00108170;
LAB_00105dae:
  if (*(char *)((long)puVar32 + -1) != *(char *)((long)piVar36 + -1)) goto LAB_00105dba;
  puVar32 = (ulong *)((long)puVar32 + -1);
  piVar36 = (int *)((long)piVar36 + -1);
  pcVar19 = pcVar19 + 1;
  if ((puVar32 <= local_90) || (piVar36 <= piVar3)) goto LAB_00105dba;
  goto LAB_00105dae;
LAB_00105dba:
  iVar40 = iVar43 + 3;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) goto LAB_00106fe6;
  uVar28 = local_90[1];
  *puVar18 = *local_90;
  puVar18[1] = uVar28;
  if (0x10 < uVar27) {
    lVar20 = param_2[3];
    uVar28 = local_90[3];
    *(ulong *)(lVar20 + 0x10) = local_90[2];
    *(ulong *)(lVar20 + 0x18) = uVar28;
    if (0x20 < (long)uVar27) {
      puVar18 = (ulong *)(lVar20 + 0x20);
      do {
        uVar28 = local_90[5];
        puVar21 = puVar18 + 4;
        *puVar18 = local_90[4];
        puVar18[1] = uVar28;
        uVar28 = local_90[7];
        puVar18[2] = local_90[6];
        puVar18[3] = uVar28;
        puVar18 = puVar21;
        local_90 = local_90 + 4;
      } while (puVar21 < (ulong *)(lVar20 + uVar27));
    }
    goto LAB_00106ff6;
  }
LAB_00106fdc:
  param_2[3] = param_2[3] + uVar27;
  piVar36 = (int *)param_2[1];
  goto LAB_00107020;
code_r0x00105947:
  puVar21 = (ulong *)((long)puVar32 + 4);
  iVar43 = (int)puVar32 - (int)puVar18;
  puVar25 = (ulong *)((long)puVar1 - 7);
  if (puVar21 < puVar25) {
    if (*(ulong *)((long)puVar18 + 4) == *(ulong *)((long)puVar32 + 4)) {
      puVar24 = (ulong *)((long)puVar32 + 0xc);
      puVar38 = (ulong *)((long)puVar18 + 0xc);
      if (puVar24 < puVar25) {
LAB_00105985:
        if (*puVar38 == *puVar24) goto LAB_00107fc0;
        uVar42 = 0;
        for (uVar27 = *puVar38 ^ *puVar24; (uVar27 & 1) == 0;
            uVar27 = uVar27 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        pcVar19 = (char *)((long)puVar24 + ((ulong)(uVar42 >> 3) - (long)puVar21));
        goto LAB_00106f5d;
      }
      goto LAB_00106f10;
    }
    uVar42 = 0;
    for (uVar27 = *(ulong *)((long)puVar18 + 4) ^ *(ulong *)((long)puVar32 + 4); (uVar27 & 1) == 0;
        uVar27 = uVar27 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    pcVar19 = (char *)(ulong)(uVar42 >> 3);
  }
  else {
    puVar38 = (ulong *)((long)puVar18 + 4);
    puVar24 = puVar21;
LAB_00106f10:
    if ((puVar24 < (ulong *)((long)puVar1 - 3U)) && ((int)*puVar38 == (int)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 4);
      puVar38 = (ulong *)((long)puVar38 + 4);
    }
    if ((puVar24 < (ulong *)((long)puVar1 - 1U)) && ((short)*puVar38 == (short)*puVar24)) {
      puVar24 = (ulong *)((long)puVar24 + 2);
      puVar38 = (ulong *)((long)puVar38 + 2);
    }
    if (puVar24 < puVar1) {
      puVar24 = (ulong *)((long)puVar24 + (ulong)((char)*puVar38 == (char)*puVar24));
    }
    pcVar19 = (char *)((long)puVar24 - (long)puVar21);
  }
LAB_00106f5d:
  pcVar19 = pcVar19 + 4;
  if ((puVar2 < puVar18) && (local_90 < puVar32)) {
    while (*(char *)((long)puVar32 + -1) == *(char *)((long)puVar18 + -1)) {
      puVar32 = (ulong *)((long)puVar32 + -1);
      puVar18 = (ulong *)((long)puVar18 + -1);
      pcVar19 = pcVar19 + 1;
      if ((puVar32 <= local_90) || (puVar18 <= puVar2)) break;
    }
  }
  iVar40 = iVar43 + 3;
  uVar27 = (long)puVar32 - (long)local_90;
  puVar18 = (ulong *)param_2[3];
  if (puVar1 + -4 < puVar32) {
LAB_00106fe6:
    ZSTD_safecopyLiterals(puVar18,local_90,puVar32,puVar1 + -4);
  }
  else {
    uVar28 = local_90[1];
    *puVar18 = *local_90;
    puVar18[1] = uVar28;
    if (uVar27 < 0x11) goto LAB_00106fdc;
    lVar20 = param_2[3];
    uVar28 = local_90[3];
    *(ulong *)(lVar20 + 0x10) = local_90[2];
    *(ulong *)(lVar20 + 0x18) = uVar28;
    if (0x20 < (long)uVar27) {
      puVar18 = (ulong *)(lVar20 + 0x20);
      do {
        uVar28 = local_90[5];
        puVar21 = puVar18 + 4;
        *puVar18 = local_90[4];
        puVar18[1] = uVar28;
        uVar28 = local_90[7];
        puVar18[2] = local_90[6];
        puVar18[3] = uVar28;
        puVar18 = puVar21;
        local_90 = local_90 + 4;
      } while (puVar21 < (ulong *)(lVar20 + uVar27));
    }
  }
LAB_00106ff6:
  param_2[3] = param_2[3] + uVar27;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar27) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
  }
LAB_00107020:
  *(short *)(piVar36 + 1) = (short)uVar27;
  *piVar36 = iVar40;
  if ((char *)0xffff < pcVar19 + -3) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((long)piVar36 - *param_2 >> 3);
  }
  local_64 = local_84;
  *(short *)((long)piVar36 + 6) = (short)(pcVar19 + -3);
  local_84 = iVar43;
LAB_00106e68:
  puVar32 = (ulong *)((long)puVar32 + (long)pcVar19);
  param_2[1] = (long)(piVar36 + 2);
  if (puVar32 <= puVar35) {
    *(uint *)(lVar8 + (ulong)((uint)(*(int *)(lVar7 + 2 + (ulong)uVar29) * -0x61c8864f) >>
                             (local_98 & 0x1f)) * 4) = uVar29 + 2;
    *(int *)(lVar8 + (ulong)((uint)(*(int *)((long)puVar32 + -2) * -0x61c8864f) >> (local_98 & 0x1f)
                            ) * 4) = ((int)puVar32 + -2) - iVar41;
    iVar43 = local_84;
    do {
      local_84 = iVar43;
      iVar43 = local_64;
      iVar40 = (int)puVar32 - iVar41;
      uVar42 = iVar40 - iVar43;
      piVar36 = (int *)(lVar7 + (ulong)uVar42);
      if (uVar42 < uVar4) {
        piVar36 = (int *)(uVar10 + ((ulong)uVar42 - (ulong)uVar39));
      }
      local_64 = iVar43;
      if ((((uVar4 - 1) + iVar43) - iVar40 < 3) || (*piVar36 != (int)*puVar32)) goto LAB_00106e7a;
      puVar18 = puVar11;
      if (uVar4 <= uVar42) {
        puVar18 = puVar1;
      }
      lVar26 = ZSTD_count_2segments((int *)((long)puVar32 + 4),piVar36 + 1,puVar1,puVar18);
      lVar20 = lVar26 + 4;
      puVar18 = (ulong *)param_2[3];
      if (puVar1 + -4 < puVar32) {
        ZSTD_safecopyLiterals(puVar18,puVar32,puVar32,puVar1 + -4);
      }
      else {
        uVar27 = puVar32[1];
        *puVar18 = *puVar32;
        puVar18[1] = uVar27;
      }
      puVar23 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar23 + 1) = 0;
      *puVar23 = 1;
      if (0xffff < lVar26 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((long)puVar23 - *param_2 >> 3);
      }
      *(short *)((long)puVar23 + 6) = (short)(lVar26 + 1U);
      param_2[1] = (long)(puVar23 + 2);
      uVar27 = *puVar32;
      puVar32 = (ulong *)((long)puVar32 + lVar20);
      *(int *)(lVar8 + (ulong)((uint)((int)uVar27 * -0x61c8864f) >> (local_98 & 0x1f)) * 4) = iVar40
      ;
      local_64 = local_84;
    } while (puVar32 <= puVar35);
    local_64 = local_84;
    local_84 = iVar43;
  }
LAB_00106e7a:
  puVar18 = (ulong *)(uVar17 + (long)puVar32);
  local_90 = puVar32;
  if (puVar35 < puVar18) goto LAB_00105be0;
  goto LAB_001057f0;
LAB_00107fc0:
  puVar24 = puVar24 + 1;
  puVar38 = puVar38 + 1;
  if (puVar25 <= puVar24) goto LAB_00106f10;
  goto LAB_00105985;
}



void ZSTD_compressBlock_fast_extDict(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 6) {
    ZSTD_compressBlock_fast_extDict_generic_constprop_0();
    return;
  }
  if (iVar1 != 7) {
    if (iVar1 != 5) {
      ZSTD_compressBlock_fast_extDict_generic_constprop_0();
      return;
    }
    ZSTD_compressBlock_fast_extDict_generic_constprop_0();
    return;
  }
  ZSTD_compressBlock_fast_extDict_generic_constprop_0();
  return;
}




int enet_symbol_rescale(long param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + 1) - (*(byte *)(param_1 + 1) >> 1);
    *(byte *)(param_1 + 1) = bVar1;
    uVar3 = (uint)bVar1;
    *(ushort *)(param_1 + 2) = (ushort)bVar1;
    if (*(ushort *)(param_1 + 4) != 0) {
      uVar4 = enet_symbol_rescale(param_1 + (ulong)*(ushort *)(param_1 + 4) * 0x10);
      sVar2 = (short)uVar4 + *(short *)(param_1 + 2);
      uVar3 = (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),sVar2);
      *(short *)(param_1 + 2) = sVar2;
    }
    iVar5 = iVar5 + uVar3;
    if (*(ushort *)(param_1 + 6) == 0) break;
    param_1 = param_1 + (ulong)*(ushort *)(param_1 + 6) * 0x10;
  }
  return iVar5;
}



long enet_range_coder_compress
               (undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
               undefined1 *param_5,long param_6)

{
  long *plVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  byte *pbVar9;
  ulong uVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ushort uVar21;
  int iVar22;
  byte bVar23;
  byte *pbVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  undefined8 uVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  long local_70;
  undefined8 *local_68;
  ulong local_60;
  ulong local_50;
  ushort local_42;
  long local_40;
  
  uVar26 = _LC0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_42 = 0;
  if ((param_3 != 0 && param_4 != 0) && (param_1 != (undefined8 *)0x0)) {
    local_70 = param_3 + -1;
    local_68 = param_2 + 2;
    pbVar25 = (byte *)*param_2;
    puVar3 = param_5 + param_6;
    uVar15 = 0xffffffff;
    uVar10 = 0;
    pbVar24 = pbVar25 + param_2[1];
    *param_1 = 0;
    local_60 = 1;
    param_1[1] = 0x10100010000;
    local_50 = 0;
    puVar18 = param_5;
LAB_00100114:
    iVar16 = (int)uVar10;
    if (pbVar24 <= pbVar25) {
      if (local_70 == 0) {
        if (iVar16 == 0) goto LAB_001006fb;
        puVar17 = puVar18;
        if (puVar18 < puVar3) goto LAB_001006e9;
        goto LAB_00100300;
      }
      local_70 = local_70 + -1;
      pbVar25 = (byte *)*local_68;
      plVar1 = local_68 + 1;
      local_68 = local_68 + 2;
      pbVar24 = pbVar25 + *plVar1;
    }
    bVar5 = *pbVar25;
    puVar11 = &local_42;
    puVar19 = param_1 + (ulong)local_42 * 2;
    if ((ulong)local_42 != 0) {
LAB_00100169:
      if (*(ushort *)(puVar19 + 1) != 0) {
        iVar16 = 0;
        pbVar9 = (byte *)(puVar19 + (ulong)*(ushort *)(puVar19 + 1) * 2);
        do {
          uVar7 = *(ushort *)(pbVar9 + 2);
          if (bVar5 < *pbVar9) {
            *(ushort *)(pbVar9 + 2) = uVar7 + 2;
            uVar7 = *(ushort *)(pbVar9 + 4);
            if (uVar7 == 0) goto code_r0x00100352;
          }
          else {
            iVar16 = iVar16 + (uint)uVar7;
            if (bVar5 <= *pbVar9) {
              bVar23 = pbVar9[1];
              *(ushort *)(pbVar9 + 2) = uVar7 + 2;
              pbVar9[1] = bVar23 + 2;
              *puVar11 = (ushort)((long)pbVar9 - (long)param_1 >> 4);
              puVar11 = (ushort *)(pbVar9 + 0xe);
              uVar7 = *(ushort *)((long)puVar19 + 0xc);
              if (bVar23 == 0) goto LAB_001001c1;
              iVar22 = (int)((uVar15 & 0xffffffff) / (ulong)uVar7);
              uVar13 = (uint)bVar23 * iVar22;
              uVar14 = (int)uVar10 +
                       ((uint)*(ushort *)((long)puVar19 + 10) + (iVar16 - (uint)bVar23 & 0xffff)) *
                       iVar22;
              goto LAB_0010061b;
            }
            uVar7 = *(ushort *)(pbVar9 + 6);
            if (uVar7 == 0) {
              pbVar4 = (byte *)(param_1 + local_60 * 2);
              *pbVar4 = bVar5;
              pbVar4[1] = 2;
              *(undefined8 *)((long)param_1 + local_60 * 0x10 + 2) = 2;
              *(undefined4 *)((long)param_1 + local_60 * 0x10 + 10) = 0;
              pbVar4[0xe] = 0;
              pbVar4[0xf] = 0;
              *(short *)(pbVar9 + 6) = (short)((long)pbVar4 - (long)pbVar9 >> 4);
              goto LAB_001001ac;
            }
          }
          pbVar9 = pbVar9 + (ulong)uVar7 * 0x10;
        } while( true );
      }
      pbVar9 = (byte *)(param_1 + local_60 * 2);
      *pbVar9 = bVar5;
      pbVar9[1] = 2;
      *(undefined4 *)((long)param_1 + local_60 * 0x10 + 10) = 0;
      *(undefined8 *)((long)param_1 + local_60 * 0x10 + 2) = uVar26;
      pbVar9[0xe] = 0;
      pbVar9[0xf] = 0;
      *(short *)(puVar19 + 1) = (short)((long)pbVar9 - (long)puVar19 >> 4);
      goto LAB_001001ac;
    }
LAB_00100241:
    uVar7 = (ushort)bVar5;
    if (*(ushort *)(param_1 + 1) != 0) {
      pbVar9 = (byte *)(param_1 + (ulong)*(ushort *)(param_1 + 1) * 2);
      uVar7 = (ushort)bVar5;
      do {
        sVar6 = *(short *)(pbVar9 + 2);
        if (bVar5 < *pbVar9) {
          *(short *)(pbVar9 + 2) = sVar6 + 3;
          uVar8 = *(ushort *)(pbVar9 + 4);
          if (uVar8 == 0) goto code_r0x00100556;
        }
        else {
          uVar7 = uVar7 + sVar6;
          if (bVar5 <= *pbVar9) {
            *(short *)(pbVar9 + 2) = sVar6 + 3;
            iVar22 = pbVar9[1] + 1;
            uVar7 = uVar7 - pbVar9[1];
            uVar21 = (ushort)iVar22;
            pbVar9[1] = pbVar9[1] + 3;
            uVar8 = (ushort)((long)pbVar9 - (long)param_1 >> 4);
            goto LAB_0010029b;
          }
          uVar8 = *(ushort *)(pbVar9 + 6);
          if (uVar8 == 0) {
            lVar20 = local_60 * 0x10;
            pbVar4 = (byte *)(param_1 + local_60 * 2);
            *pbVar4 = bVar5;
            uVar21 = 1;
            pbVar4[1] = 3;
            *(undefined8 *)((long)param_1 + lVar20 + 2) = 3;
            *(undefined4 *)((long)param_1 + lVar20 + 10) = 0;
            pbVar4[0xe] = 0;
            pbVar4[0xf] = 0;
            iVar22 = 1;
            *(short *)(pbVar9 + 6) = (short)((long)pbVar4 - (long)pbVar9 >> 4);
            uVar8 = (ushort)(lVar20 >> 4);
            local_60 = local_60 + 1;
            goto LAB_0010029b;
          }
        }
        pbVar9 = pbVar9 + (ulong)uVar8 * 0x10;
      } while( true );
    }
    lVar20 = local_60 * 0x10;
    iVar22 = 1;
    pbVar9 = (byte *)(param_1 + local_60 * 2);
    *pbVar9 = bVar5;
    uVar21 = 1;
    pbVar9[1] = 3;
    *(undefined8 *)((long)param_1 + lVar20 + 2) = 3;
    *(undefined4 *)((long)param_1 + lVar20 + 10) = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    uVar8 = (ushort)(lVar20 >> 4);
    *(ushort *)(param_1 + 1) = uVar8;
    local_60 = local_60 + 1;
    goto LAB_0010029b;
  }
  goto LAB_00100300;
LAB_001006fb:
  lVar20 = (long)puVar18 - (long)param_5;
  goto LAB_00100302;
LAB_0010061b:
  uVar15 = (ulong)uVar13;
  uVar10 = (ulong)uVar14;
  if (0xffffff < (uVar14 + uVar13 ^ uVar14)) {
    if (0xffff < uVar13) goto LAB_00100640;
    uVar13 = -uVar14 & 0xffff;
  }
  if (puVar3 <= puVar18) goto LAB_00100300;
  uVar13 = uVar13 << 8;
  *puVar18 = (char)(uVar14 >> 0x18);
  puVar18 = puVar18 + 1;
  uVar14 = uVar14 << 8;
  goto LAB_0010061b;
LAB_00100640:
  uVar7 = *(short *)((long)puVar19 + 0xc) + 2;
  *(ushort *)((long)puVar19 + 0xc) = uVar7;
  if (bVar23 < 0xfc) goto LAB_001001ea;
  goto LAB_001001f4;
code_r0x00100352:
  pbVar4 = (byte *)(param_1 + local_60 * 2);
  *pbVar4 = bVar5;
  pbVar4[1] = 2;
  *(undefined8 *)((long)param_1 + local_60 * 0x10 + 2) = 2;
  *(undefined4 *)((long)param_1 + local_60 * 0x10 + 10) = 0;
  pbVar4[0xe] = 0;
  pbVar4[0xf] = 0;
  *(short *)(pbVar9 + 4) = (short)((long)pbVar4 - (long)pbVar9 >> 4);
LAB_001001ac:
  *puVar11 = (ushort)((long)(local_60 * 0x10) >> 4);
  uVar7 = *(ushort *)((long)puVar19 + 0xc);
  puVar11 = (ushort *)((long)param_1 + local_60 * 0x10 + 0xe);
  local_60 = local_60 + 1;
LAB_001001c1:
  uVar8 = *(ushort *)((long)puVar19 + 10);
  if ((uVar8 != 0) && (uVar8 < uVar7)) {
    uVar14 = (int)((uVar15 & 0xffffffff) / (ulong)uVar7) * (uint)uVar8;
    do {
      uVar15 = (ulong)uVar14;
      uVar13 = (uint)uVar10;
      if (0xffffff < (uVar13 + uVar14 ^ uVar13)) {
        if (0xffff < uVar14) goto LAB_00100460;
        uVar14 = -uVar13 & 0xffff;
      }
      if (puVar3 <= puVar18) goto LAB_00100300;
      uVar14 = uVar14 << 8;
      *puVar18 = (char)(uVar10 >> 0x18);
      uVar10 = (ulong)(uVar13 << 8);
      puVar18 = puVar18 + 1;
    } while( true );
  }
LAB_001001d6:
  uVar7 = uVar7 + 7;
  bVar23 = 0;
  *(ushort *)((long)puVar19 + 10) = uVar8 + 5;
  *(ushort *)((long)puVar19 + 0xc) = uVar7;
LAB_001001ea:
  if (0xff00 < uVar7) {
LAB_001001f4:
    uVar7 = *(ushort *)(puVar19 + 1);
    if (uVar7 != 0) {
      uVar7 = enet_symbol_rescale(puVar19 + (ulong)uVar7 * 2);
      uVar26 = extraout_XMM0_Qa;
    }
    sVar6 = *(ushort *)((long)puVar19 + 10) - (*(ushort *)((long)puVar19 + 10) >> 1);
    *(short *)((long)puVar19 + 10) = sVar6;
    *(ushort *)((long)puVar19 + 0xc) = sVar6 + uVar7;
  }
  iVar16 = (int)uVar10;
  if (bVar23 != 0) goto LAB_00100479;
  puVar2 = (ushort *)((long)puVar19 + 0xe);
  puVar19 = param_1 + (ulong)*puVar2 * 2;
  if ((ulong)*puVar2 == 0) goto LAB_00100241;
  goto LAB_00100169;
LAB_00100460:
  uVar8 = *(ushort *)((long)puVar19 + 10);
  uVar7 = *(ushort *)((long)puVar19 + 0xc);
  goto LAB_001001d6;
code_r0x00100556:
  lVar20 = local_60 * 0x10;
  iVar22 = 1;
  pbVar4 = (byte *)(param_1 + local_60 * 2);
  *pbVar4 = bVar5;
  pbVar4[1] = 3;
  *(undefined8 *)((long)param_1 + lVar20 + 2) = 3;
  *(undefined4 *)((long)param_1 + lVar20 + 10) = 0;
  pbVar4[0xe] = 0;
  pbVar4[0xf] = 0;
  uVar21 = 1;
  *(short *)(pbVar9 + 4) = (short)((long)pbVar4 - (long)pbVar9 >> 4);
  uVar8 = (ushort)(lVar20 >> 4);
  local_60 = local_60 + 1;
LAB_0010029b:
  *puVar11 = uVar8;
  iVar12 = (int)((uVar15 & 0xffffffff) / (ulong)*(ushort *)((long)param_1 + 0xc));
  uVar13 = iVar12 * iVar22;
  uVar14 = iVar16 + ((uint)*(ushort *)((long)param_1 + 10) + (uint)uVar7) * iVar12;
  do {
    uVar15 = (ulong)uVar13;
    uVar10 = (ulong)uVar14;
    if (0xffffff < (uVar14 + uVar13 ^ uVar14)) {
      if (0xffff < uVar13) break;
      uVar13 = -uVar14 & 0xffff;
    }
    if (puVar3 <= puVar18) goto LAB_00100300;
    uVar13 = uVar13 << 8;
    *puVar18 = (char)(uVar14 >> 0x18);
    puVar18 = puVar18 + 1;
    uVar14 = uVar14 << 8;
  } while( true );
  uVar7 = *(short *)((long)param_1 + 0xc) + 3;
  *(ushort *)((long)param_1 + 0xc) = uVar7;
  if ((0xfa < uVar21) || (0xff00 < uVar7)) {
    uVar7 = *(ushort *)(param_1 + 1);
    if (uVar7 != 0) {
      uVar7 = enet_symbol_rescale(param_1 + (ulong)uVar7 * 2);
      uVar26 = extraout_XMM0_Qa_00;
    }
    sVar6 = *(ushort *)((long)param_1 + 10) - (*(ushort *)((long)param_1 + 10) >> 1);
    *(short *)((long)param_1 + 10) = sVar6;
    *(ushort *)((long)param_1 + 0xc) = uVar7 + 0x100 + sVar6;
  }
LAB_00100479:
  if (local_50 < 2) {
    local_50 = local_50 + 1;
  }
  else {
    local_42 = *(ushort *)((long)param_1 + (ulong)local_42 * 0x10 + 0xe);
  }
  if (0xffd < local_60) {
    *param_1 = 0;
    local_60 = 1;
    param_1[1] = 0x10100010000;
    local_42 = 0;
    local_50 = 0;
  }
  pbVar25 = pbVar25 + 1;
  goto LAB_00100114;
  while (uVar10 = (ulong)uVar14, puVar17 = puVar18, puVar3 != puVar18) {
LAB_001006e9:
    puVar18 = puVar17 + 1;
    uVar14 = (int)uVar10 << 8;
    *puVar17 = (char)(uVar10 >> 0x18);
    if (uVar14 == 0) goto LAB_001006fb;
  }
LAB_00100300:
  lVar20 = 0;
LAB_00100302:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar20;
}



long enet_range_coder_decompress
               (undefined8 *param_1,uint *param_2,long param_3,byte *param_4,long param_5)

{
  ushort uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  uint *puVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  short sVar19;
  byte bVar20;
  ushort uVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  ushort uVar25;
  int iVar26;
  ushort *puVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  uint *puVar30;
  uint uVar31;
  long in_FS_OFFSET;
  byte *local_98;
  ulong local_90;
  ulong local_88;
  ushort local_70;
  uint local_58;
  ushort local_54;
  ushort local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_42 = 0;
  if (param_1 != (undefined8 *)0x0 && param_3 != 0) {
    puVar5 = (uint *)((long)param_2 + param_3);
    uVar31 = 0;
    *param_1 = 0;
    param_1[1] = 0x10100010000;
    puVar30 = param_2;
    if (param_2 < puVar5) {
      puVar30 = (uint *)((long)param_2 + 1);
      uVar31 = (uint)(byte)*param_2 << 0x18;
      if (puVar30 < puVar5) {
        puVar30 = (uint *)((long)param_2 + 2);
        uVar31 = uVar31 | (uint)*(byte *)((long)param_2 + 1) << 0x10;
        if (puVar30 < puVar5) {
          puVar30 = (uint *)((long)param_2 + 3);
          if (puVar30 < puVar5) {
            uVar31 = *param_2;
            puVar30 = param_2 + 1;
            uVar31 = uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 |
                     uVar31 << 0x18;
          }
          else {
            uVar31 = uVar31 | (uint)*(byte *)((long)param_2 + 2) << 8;
          }
        }
      }
    }
    uVar22 = 0;
    local_90 = 1;
    uVar16 = 0xffffffff;
    local_88 = 0;
    uVar15 = 0;
    local_98 = param_4;
LAB_0010080f:
    puVar24 = param_1 + uVar15 * 2;
    puVar29 = puVar24;
    if (uVar15 != 0) {
      uVar16 = uVar16 & 0xffffffff;
LAB_0010083b:
      do {
        uVar14 = (uint)uVar16;
        uVar11 = *(ushort *)((long)puVar29 + 10);
        if (uVar11 != 0) {
          uVar9 = *(ushort *)((long)puVar29 + 0xc);
          if (uVar11 < uVar9) {
            uVar10 = (ushort)((ulong)(uVar31 - uVar22) / (uVar16 / uVar9));
            iVar26 = (int)(uVar16 / uVar9);
            if (uVar10 < uVar11) {
              uVar14 = (uint)uVar11 * iVar26;
              do {
                uVar16 = (ulong)uVar14;
                if (0xffffff < (uVar22 + uVar14 ^ uVar22)) {
                  if (0xffff < uVar14) goto code_r0x001008af;
                  uVar14 = -uVar22 & 0xffff;
                }
                uVar31 = uVar31 << 8;
                if (puVar30 < puVar5) {
                  uVar8 = *puVar30;
                  puVar30 = (uint *)((long)puVar30 + 1);
                  uVar31 = uVar31 | (byte)uVar8;
                }
                uVar14 = uVar14 << 8;
                uVar22 = uVar22 << 8;
              } while( true );
            }
            uVar10 = uVar10 - uVar11;
            uVar25 = *(ushort *)(puVar29 + 1);
            if (uVar25 == 0) goto LAB_00100b82;
            pbVar17 = (byte *)(puVar29 + (ulong)uVar25 * 2);
            uVar21 = 0;
            goto LAB_00100b5e;
          }
        }
        puVar27 = (ushort *)((long)puVar29 + 0xe);
        puVar29 = param_1 + (ulong)*puVar27 * 2;
      } while ((ulong)*puVar27 != 0);
      goto LAB_001008c8;
    }
    goto LAB_001008ca;
  }
LAB_00100b82:
  lVar18 = 0;
LAB_00100b84:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001008af:
  puVar27 = (ushort *)((long)puVar29 + 0xe);
  puVar29 = param_1 + (ulong)*puVar27 * 2;
  if ((ulong)*puVar27 == 0) goto LAB_001008c8;
  goto LAB_0010083b;
LAB_00100b5e:
  bVar6 = pbVar17[1];
  uVar1 = *(short *)(pbVar17 + 2) + uVar21;
  if (uVar1 <= uVar10) {
    if (*(ushort *)(pbVar17 + 6) == 0) goto LAB_00100b82;
    pbVar17 = pbVar17 + (ulong)*(ushort *)(pbVar17 + 6) * 0x10;
    uVar21 = uVar1;
    goto LAB_00100b5e;
  }
  sVar12 = *(short *)(pbVar17 + 2) + 2;
  if ((int)(uint)uVar10 < (int)((uint)uVar1 - (uint)bVar6)) {
    *(short *)(pbVar17 + 2) = sVar12;
    if (*(ushort *)(pbVar17 + 4) == 0) goto LAB_00100b82;
    pbVar17 = pbVar17 + (ulong)*(ushort *)(pbVar17 + 4) * 0x10;
    goto LAB_00100b5e;
  }
  bVar20 = *pbVar17;
  *(short *)(pbVar17 + 2) = sVar12;
  pbVar17[1] = bVar6 + 2;
  uVar22 = uVar22 + ((uint)(ushort)(uVar1 - bVar6) + (uint)uVar11) * iVar26;
  uVar14 = (uint)bVar6 * iVar26;
  do {
    uVar16 = (ulong)uVar14;
    if (0xffffff < (uVar22 + uVar14 ^ uVar22)) {
      if (0xffff < uVar14) break;
      uVar14 = -uVar22 & 0xffff;
    }
    uVar31 = uVar31 << 8;
    if (puVar30 < puVar5) {
      uVar8 = *puVar30;
      puVar30 = (uint *)((long)puVar30 + 1);
      uVar31 = uVar31 | (byte)uVar8;
    }
    uVar14 = uVar14 << 8;
    uVar22 = uVar22 << 8;
  } while( true );
  *(ushort *)((long)puVar29 + 0xc) = uVar9 + 2;
  if ((0xfb < bVar6) || (0xff00 < (ushort)(uVar9 + 2))) {
    sVar12 = enet_symbol_rescale(puVar29 + (ulong)uVar25 * 2);
    sVar13 = *(ushort *)((long)puVar29 + 10) - (*(ushort *)((long)puVar29 + 10) >> 1);
    *(short *)((long)puVar29 + 10) = sVar13;
    *(short *)((long)puVar29 + 0xc) = sVar13 + sVar12;
  }
  local_70 = (ushort)((long)pbVar17 - (long)param_1 >> 4);
  goto LAB_00100a02;
LAB_001008c8:
  uVar16 = (ulong)uVar14;
LAB_001008ca:
  uVar11 = *(ushort *)((long)param_1 + 0xc);
  local_54 = *(ushort *)((long)param_1 + 10);
  uVar16 = (uVar16 & 0xffffffff) / (ulong)uVar11;
  uVar9 = (ushort)((uVar31 - uVar22) / uVar16);
  iVar26 = (int)uVar16;
  if (local_54 <= uVar9) {
    uVar9 = uVar9 - local_54;
    local_58 = (uint)uVar9;
    if (*(ushort *)(param_1 + 1) == 0) {
      lVar18 = local_90 * 0x10;
      pcVar2 = (char *)(param_1 + local_90 * 2);
      *pcVar2 = (char)uVar9;
      pcVar2[1] = '\x03';
      *(undefined8 *)((long)param_1 + lVar18 + 2) = 3;
      *(undefined4 *)((long)param_1 + lVar18 + 10) = 0;
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      local_54 = *(ushort *)((long)param_1 + 10);
      bVar7 = false;
      local_70 = (ushort)(lVar18 >> 4);
      uVar11 = *(ushort *)((long)param_1 + 0xc);
      *(ushort *)(param_1 + 1) = local_70;
      local_90 = local_90 + 1;
      uVar10 = uVar9;
    }
    else {
      pbVar17 = (byte *)(param_1 + (ulong)*(ushort *)(param_1 + 1) * 2);
      sVar12 = 0;
      while( true ) {
        while( true ) {
          uVar10 = (ushort)*pbVar17;
          bVar6 = pbVar17[1];
          sVar19 = *(short *)(pbVar17 + 2) + sVar12;
          sVar13 = uVar10 + sVar19;
          uVar25 = sVar13 + 1;
          if (uVar9 < uVar25) break;
          if (*(ushort *)(pbVar17 + 6) == 0) {
            uVar10 = (uVar10 + 1 + uVar9) - uVar25;
            puVar4 = param_1 + local_90 * 2;
            *(char *)puVar4 = (char)uVar10;
            *(undefined1 *)((long)puVar4 + 1) = 3;
            *(undefined8 *)((long)param_1 + local_90 * 0x10 + 2) = 3;
            *(undefined4 *)((long)param_1 + local_90 * 0x10 + 10) = 0;
            *(undefined2 *)((long)puVar4 + 0xe) = 0;
            *(short *)(pbVar17 + 6) = (short)((long)puVar4 - (long)pbVar17 >> 4);
            goto LAB_00100e3b;
          }
          pbVar17 = pbVar17 + (ulong)*(ushort *)(pbVar17 + 6) * 0x10;
          sVar12 = sVar19;
        }
        sVar19 = *(short *)(pbVar17 + 2) + 3;
        iVar23 = bVar6 + 1;
        if ((int)((uint)uVar25 - iVar23) <= (int)local_58) {
          *(short *)(pbVar17 + 2) = sVar19;
          bVar7 = 0xfa < (ushort)iVar23;
          pbVar17[1] = bVar6 + 3;
          local_58 = (uint)(ushort)(sVar13 - (ushort)bVar6);
          uVar16 = (ulong)(uint)(iVar23 * iVar26);
          local_70 = (ushort)((long)pbVar17 - (long)param_1 >> 4);
          goto LAB_00100972;
        }
        *(short *)(pbVar17 + 2) = sVar19;
        if (*(ushort *)(pbVar17 + 4) == 0) break;
        pbVar17 = pbVar17 + (ulong)*(ushort *)(pbVar17 + 4) * 0x10;
      }
      uVar10 = (byte)(*pbVar17 + 1 + (char)uVar9 + bVar6) - uVar25;
      puVar4 = param_1 + local_90 * 2;
      *(char *)puVar4 = (char)uVar10;
      *(undefined1 *)((long)puVar4 + 1) = 3;
      *(undefined8 *)((long)param_1 + local_90 * 0x10 + 2) = 3;
      *(undefined4 *)((long)param_1 + local_90 * 0x10 + 10) = 0;
      *(undefined2 *)((long)puVar4 + 0xe) = 0;
      *(short *)(pbVar17 + 4) = (short)((long)puVar4 - (long)pbVar17 >> 4);
LAB_00100e3b:
      lVar18 = local_90 * 0x10;
      local_90 = local_90 + 1;
      local_54 = *(ushort *)((long)param_1 + 10);
      uVar11 = *(ushort *)((long)param_1 + 0xc);
      bVar7 = false;
      local_70 = (ushort)(lVar18 >> 4);
    }
LAB_00100972:
    bVar20 = (byte)uVar10;
    uVar22 = uVar22 + (local_54 + local_58) * iVar26;
    do {
      uVar14 = (uint)uVar16;
      if (0xffffff < (uVar22 + uVar14 ^ uVar22)) {
        if (0xffff < uVar14) goto code_r0x001009bf;
        uVar14 = -uVar22 & 0xffff;
      }
      uVar31 = uVar31 << 8;
      if (puVar30 < puVar5) {
        uVar8 = *puVar30;
        puVar30 = (uint *)((long)puVar30 + 1);
        uVar31 = uVar31 | (byte)uVar8;
      }
      uVar16 = (ulong)(uVar14 << 8);
      uVar22 = uVar22 << 8;
    } while( true );
  }
  uVar31 = (uint)local_54 * iVar26;
  goto LAB_00101077;
code_r0x001009bf:
  *(ushort *)((long)param_1 + 0xc) = uVar11 + 3;
  if ((0xff00 < (ushort)(uVar11 + 3)) || (bVar7)) {
    uVar11 = *(ushort *)(param_1 + 1);
    if (uVar11 != 0) {
      uVar11 = enet_symbol_rescale(param_1 + (ulong)uVar11 * 2);
      local_54 = *(ushort *)((long)param_1 + 10);
    }
    sVar12 = local_54 - (local_54 >> 1);
    *(short *)((long)param_1 + 10) = sVar12;
    *(ushort *)((long)param_1 + 0xc) = uVar11 + 0x100 + sVar12;
  }
LAB_00100a02:
  puVar27 = &local_42;
  uVar28 = _LC0;
  if (puVar29 != puVar24) {
LAB_00100ab0:
    if (*(ushort *)(puVar24 + 1) != 0) {
      pbVar17 = (byte *)(puVar24 + (ulong)*(ushort *)(puVar24 + 1) * 2);
      do {
        if (bVar20 < *pbVar17) {
          uVar11 = *(ushort *)(pbVar17 + 4);
          *(short *)(pbVar17 + 2) = *(short *)(pbVar17 + 2) + 2;
          if (uVar11 == 0) goto code_r0x00100ae1;
        }
        else {
          if (bVar20 <= *pbVar17) {
            bVar6 = pbVar17[1];
            *(short *)(pbVar17 + 2) = *(short *)(pbVar17 + 2) + 2;
            pbVar17[1] = bVar6 + 2;
            *puVar27 = (ushort)((long)pbVar17 - (long)param_1 >> 4);
            puVar27 = (ushort *)(pbVar17 + 0xe);
            if (bVar6 == 0) goto LAB_00100a61;
            uVar11 = *(short *)((long)puVar24 + 0xc) + 2;
            *(ushort *)((long)puVar24 + 0xc) = uVar11;
            if (bVar6 < 0xfc) goto LAB_00100a74;
            goto LAB_00100a7a;
          }
          uVar11 = *(ushort *)(pbVar17 + 6);
          if (uVar11 == 0) {
            lVar18 = local_90 * 0x10;
            pbVar3 = (byte *)(param_1 + local_90 * 2);
            *pbVar3 = bVar20;
            pbVar3[1] = 2;
            *(undefined8 *)((long)param_1 + lVar18 + 2) = uVar28;
            *(undefined4 *)((long)param_1 + lVar18 + 10) = 0;
            pbVar3[0xe] = 0;
            pbVar3[0xf] = 0;
            *(short *)(pbVar17 + 6) = (short)((long)pbVar3 - (long)pbVar17 >> 4);
            *puVar27 = (ushort)(lVar18 >> 4);
            puVar27 = (ushort *)((long)param_1 + lVar18 + 0xe);
            local_90 = local_90 + 1;
            goto LAB_00100a61;
          }
        }
        pbVar17 = pbVar17 + (ulong)uVar11 * 0x10;
      } while( true );
    }
    lVar18 = local_90 * 0x10;
    pbVar17 = (byte *)(param_1 + local_90 * 2);
    *pbVar17 = bVar20;
    pbVar17[1] = 2;
    *(undefined8 *)((long)param_1 + lVar18 + 2) = uVar28;
    *(undefined4 *)((long)param_1 + lVar18 + 10) = 0;
    pbVar17[0xe] = 0;
    pbVar17[0xf] = 0;
    *(short *)(puVar24 + 1) = (short)((long)pbVar17 - (long)puVar24 >> 4);
    *puVar27 = (ushort)(lVar18 >> 4);
    puVar27 = (ushort *)((long)param_1 + lVar18 + 0xe);
    local_90 = local_90 + 1;
    goto LAB_00100a61;
  }
LAB_00100ce0:
  *puVar27 = local_70;
  if (param_4 + param_5 <= local_98) goto LAB_00100b82;
  *local_98 = bVar20;
  if (local_88 < 2) {
    local_88 = local_88 + 1;
  }
  else {
    local_42 = *(ushort *)((long)param_1 + (ulong)local_42 * 0x10 + 0xe);
  }
  if (local_90 < 0xffe) {
    uVar15 = (ulong)local_42;
    local_98 = local_98 + 1;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0x10100010000;
    local_42 = 0;
    uVar15 = 0;
    local_90 = 1;
    local_88 = 0;
    local_98 = local_98 + 1;
  }
  goto LAB_0010080f;
code_r0x00100ae1:
  lVar18 = local_90 * 0x10;
  pbVar3 = (byte *)(param_1 + local_90 * 2);
  *pbVar3 = bVar20;
  pbVar3[1] = 2;
  *(undefined8 *)((long)param_1 + lVar18 + 2) = uVar28;
  *(undefined4 *)((long)param_1 + lVar18 + 10) = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  *(short *)(pbVar17 + 4) = (short)((long)pbVar3 - (long)pbVar17 >> 4);
  *puVar27 = (ushort)(lVar18 >> 4);
  puVar27 = (ushort *)((long)param_1 + lVar18 + 0xe);
  local_90 = local_90 + 1;
LAB_00100a61:
  *(short *)((long)puVar24 + 10) = *(short *)((long)puVar24 + 10) + 5;
  uVar11 = *(short *)((long)puVar24 + 0xc) + 7;
  *(ushort *)((long)puVar24 + 0xc) = uVar11;
LAB_00100a74:
  if (0xff00 < uVar11) {
LAB_00100a7a:
    uVar11 = *(ushort *)(puVar24 + 1);
    if (uVar11 != 0) {
      uVar11 = enet_symbol_rescale(puVar24 + (ulong)uVar11 * 2);
    }
    sVar12 = *(ushort *)((long)puVar24 + 10) - (*(ushort *)((long)puVar24 + 10) >> 1);
    *(short *)((long)puVar24 + 10) = sVar12;
    *(ushort *)((long)puVar24 + 0xc) = sVar12 + uVar11;
  }
  puVar24 = param_1 + (ulong)*(ushort *)((long)puVar24 + 0xe) * 2;
  if (puVar29 == puVar24) goto LAB_00100ce0;
  goto LAB_00100ab0;
LAB_00101077:
  if (0xffffff < (uVar22 + uVar31 ^ uVar22)) {
    if (0xffff < uVar31) goto code_r0x0010108c;
    uVar31 = -uVar22 & 0xffff;
  }
  uVar31 = uVar31 << 8;
  uVar22 = uVar22 << 8;
  goto LAB_00101077;
code_r0x0010108c:
  lVar18 = (long)local_98 - (long)param_4;
  goto LAB_00100b84;
}



void enet_range_coder_destroy(long param_1)

{
  if (param_1 != 0) {
    enet_free();
    return;
  }
  return;
}



void enet_range_coder_create(void)

{
  enet_malloc(0x10000);
  return;
}



undefined8 enet_host_compress_with_range_coder(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_38._0_16_ = (undefined1  [16])0x0;
  lVar1 = enet_malloc(0x10000);
  local_48._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_48._8_8_ = enet_range_coder_compress;
    local_38._8_8_ = enet_range_coder_destroy;
    local_38._0_8_ = enet_range_coder_decompress;
    enet_host_compress(param_1,local_48);
    uVar2 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DoSegmentsJob(long param_1,long param_2)

{
  int *piVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long in_FS_OFFSET;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long local_110;
  int local_fc;
  undefined8 local_e0;
  undefined1 local_d8 [64];
  undefined1 local_98 [16];
  undefined1 auStack_80 [64];
  long local_40;
  
  iVar7 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = VP8IteratorIsDone(param_2);
  uVar4 = _LC0;
  if (iVar5 == 0) {
    do {
      VP8IteratorImport(param_2,auStack_80);
      lVar8 = *(long *)(param_2 + 0x28);
      VP8SetIntra16Mode(param_2,0);
      VP8SetSkip(param_2,0);
      VP8SetSegment(param_2,0);
      if (*(int *)(lVar8 + 0x5c40) < 2) {
        pauVar10 = (undefined1 (*) [16])local_d8;
        fVar2 = *(float *)(**(long **)(param_2 + 0x28) + 4);
        lVar8 = 0;
        do {
          lVar9 = lVar8 + 1;
          (*_VP8Mean16x4)(lVar8 * 0x80 + *(long *)(param_2 + 8),pauVar10 + lVar8);
          lVar8 = lVar9;
        } while (lVar9 != 4);
        iVar15 = 0;
        iVar16 = 0;
        iVar17 = 0;
        iVar18 = 0;
        iVar5 = 0;
        iVar7 = 0;
        iVar6 = 0;
        iVar14 = 0;
        do {
          auVar3 = *pauVar10;
          pauVar10 = pauVar10 + 1;
          iVar11 = auVar3._0_4_;
          iVar5 = iVar5 + iVar11;
          iVar12 = auVar3._4_4_;
          iVar7 = iVar7 + iVar12;
          iVar6 = iVar6 + auVar3._8_4_;
          iVar14 = iVar14 + auVar3._12_4_;
          uVar13 = auVar3._8_8_ >> 0x20;
          iVar15 = iVar15 + iVar11 * iVar11;
          iVar16 = iVar16 + iVar12 * iVar12;
          iVar17 = iVar17 + (int)((auVar3._8_8_ & 0xffffffff) * (ulong)auVar3._8_4_);
          iVar18 = iVar18 + (int)(uVar13 * uVar13);
        } while (pauVar10 != &local_98);
        iVar5 = iVar5 + iVar6 + iVar7 + iVar14;
        if ((uint)((((int)fVar2 * 9) / 100 + 8) * (iVar15 + iVar17 + iVar16 + iVar18)) <
            (uint)(iVar5 * iVar5)) {
          VP8SetIntra16Mode(param_2,0);
        }
        else {
          local_98 = (undefined1  [16])0x0;
          VP8SetIntra4Mode(param_2,pauVar10);
        }
        local_fc = 0;
      }
      else {
        lVar8 = 0;
        lVar9 = 0;
        local_fc = -1;
        VP8MakeLuma16Preds(param_2);
        while( true ) {
          local_e0 = uVar4;
          (*_VP8CollectHistogram)
                    (*(undefined8 *)(param_2 + 8),
                     (ulong)*(ushort *)(&VP8I16ModeOffsets + lVar9 * 2) + *(long *)(param_2 + 0x20),
                     0,0x10,&local_e0);
          iVar5 = 0;
          if (1 < (int)local_e0) {
            iVar5 = (int)(local_e0._4_4_ * 0x1fe) / (int)local_e0;
          }
          if (local_fc < iVar5) {
            lVar8 = lVar9;
            local_fc = iVar5;
          }
          if (lVar9 != 0) break;
          lVar9 = 1;
        }
        VP8SetIntra16Mode(param_2,lVar8);
        local_fc = local_fc * 3;
      }
      iVar5 = 0;
      lVar8 = 0;
      iVar7 = -1;
      VP8MakeChroma8Preds(param_2);
      local_110 = 0;
      while( true ) {
        local_e0 = uVar4;
        (*_VP8CollectHistogram)
                  (*(long *)(param_2 + 8) + 0x10,
                   (ulong)*(ushort *)(&VP8UVModeOffsets + lVar8 * 2) + *(long *)(param_2 + 0x20),
                   0x10,0x18,&local_e0);
        uVar13 = (ulong)local_e0._4_4_;
        iVar6 = 0;
        if (1 < (int)local_e0) {
          iVar6 = (int)(local_e0._4_4_ * 0x1fe) / (int)local_e0;
          uVar13 = (long)(int)(local_e0._4_4_ * 0x1fe) % (long)(int)local_e0 & 0xffffffff;
        }
        if (iVar7 < iVar6) {
          iVar7 = iVar6;
        }
        lVar9 = lVar8;
        if (((int)lVar8 != 0) && (iVar5 <= iVar6)) {
          iVar6 = iVar5;
          lVar9 = local_110;
        }
        local_110 = lVar9;
        iVar5 = iVar6;
        if (lVar8 != 0) break;
        lVar8 = 1;
      }
      VP8SetIntraUVMode(param_2,local_110,uVar13);
      iVar5 = 0xff - (iVar7 + 2 + local_fc >> 2);
      if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      piVar1 = (int *)(param_1 + 0x30 + (long)iVar5 * 4);
      *piVar1 = *piVar1 + 1;
      *(char *)(*(long *)(param_2 + 0x30) + 1) = (char)iVar5;
      *(ulong *)(param_1 + 0x430) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) + iVar7,
                    (int)*(undefined8 *)(param_1 + 0x430) + iVar5);
      iVar7 = VP8IteratorProgress(param_2,*(undefined4 *)(param_1 + 0x1340));
    } while ((iVar7 != 0) && (iVar5 = VP8IteratorNext(param_2), iVar5 != 0));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



undefined8 VP8EncAnalyze(long *param_1)

{
  long lVar1;
  size_t __n;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  undefined1 *puVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  long in_FS_OFFSET;
  byte bVar32;
  int local_17c8 [4];
  int local_17b8 [4];
  int local_17a8 [4];
  undefined1 local_1798 [16];
  uint auStack_1788 [256];
  undefined1 local_1388 [16];
  undefined8 local_1378;
  undefined1 *local_1370;
  undefined1 *puStack_1368;
  int local_1358 [258];
  undefined1 local_f50 [3848];
  undefined4 local_48;
  long local_40;
  
  bVar32 = 0;
  iVar30 = (int)param_1[6] * *(int *)((long)param_1 + 0x34);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(int *)(*param_1 + 0x50) == 0) && ((int)param_1[4] < 2)) && (1 < (int)param_1[0xb88])) {
    if (0 < iVar30) {
      pbVar15 = (byte *)param_1[0xb8c];
      pbVar12 = pbVar15;
      do {
        pbVar12[1] = 0;
        pbVar13 = pbVar12 + 4;
        *pbVar12 = *pbVar12 & 0x80 | 1;
        pbVar12 = pbVar13;
      } while (pbVar15 + (long)iVar30 * 4 != pbVar13);
    }
    param_1[0xa0] = 0;
    *(undefined8 *)((long)param_1 + 0xe04) = 0;
    WebPReportProgress(param_1[1],(int)param_1[0x43] + 0x14,param_1 + 0x43);
LAB_0010081a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
  else {
    lVar9 = WebPGetWorkerInterface();
    puVar10 = (undefined8 *)WebPGetWorkerInterface();
    (*(code *)*puVar10)(local_1388);
    local_1378 = 0x100000;
    local_1370 = local_1388;
    puStack_1368 = local_f50;
    VP8IteratorInit(param_1,local_f50);
    VP8IteratorSetRow(local_f50,0);
    VP8IteratorSetCountDown(local_f50);
    local_1358[0x100] = 0;
    local_1358[0x101] = 0;
    piVar11 = local_1358;
    for (lVar18 = 0x80; lVar18 != 0; lVar18 = lVar18 + -1) {
      piVar11[0] = 0;
      piVar11[1] = 0;
      piVar11 = piVar11 + ((ulong)bVar32 * -2 + 1) * 2;
    }
    local_48 = 0x14;
    (**(code **)(lVar9 + 0x20))(local_1388);
    uVar6 = (**(code **)(lVar9 + 0x10))(local_1388);
    (**(code **)(lVar9 + 0x28))();
    if ((uVar6 & 1) != 0) {
      *(int *)((long)param_1 + 0xe04) = local_1358[0x100] / iVar30;
      iVar31 = (int)param_1[4];
      lVar9 = (long)iVar31;
      iVar24 = 4;
      if (iVar31 < 5) {
        iVar24 = iVar31;
      }
      *(int *)(param_1 + 0x1c1) = local_1358[0x101] / iVar30;
      lVar18 = 0;
      do {
        if (local_1358[lVar18] != 0) {
          iVar30 = (int)lVar18;
          if (iVar30 != 0xff) {
            piVar11 = local_1358 + 0xff;
            iVar21 = 0xff;
            goto LAB_0010056c;
          }
          iVar21 = 0xff;
          goto LAB_00100572;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x100);
      iVar30 = 0x100;
      iVar21 = 0xff;
      goto LAB_00100572;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar14 = WebPEncodingSetError(param_1[1],1);
      return uVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    iVar21 = iVar21 + -1;
    piVar11 = piVar11 + -1;
    if (iVar21 == iVar30) break;
LAB_0010056c:
    if (*piVar11 != 0) break;
  }
LAB_00100572:
  if (0 < iVar31) {
    lVar18 = 0;
    iVar17 = iVar21 - iVar30;
    do {
      local_17c8[lVar18] = iVar17 / (iVar24 * 2) + iVar30;
      lVar18 = lVar18 + 1;
      iVar17 = iVar17 + (iVar21 - iVar30) * 2;
    } while ((int)lVar18 < iVar24);
  }
  __n = (ulong)(iVar24 - 1) * 4 + 4;
  if (0 < iVar31) {
    iVar31 = 6;
    goto LAB_00100858;
  }
  if (iVar21 < iVar30) {
LAB_00100848:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar31 = 6;
  __n = 4;
LAB_001005d8:
  lVar18 = (long)iVar30;
  uVar6 = 0;
  do {
    while (iVar17 = local_1358[lVar18], iVar17 != 0) {
      piVar11 = local_17c8 + (int)uVar6;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5;
        iVar23 = (int)lVar18;
        if (iVar24 <= (int)(uVar6 + 1)) break;
        iVar19 = iVar23 - piVar11[1];
        iVar3 = -iVar19;
        if (0 < iVar19) {
          iVar3 = iVar19;
        }
        iVar7 = iVar23 - *piVar11;
        iVar19 = -iVar7;
        if (0 < iVar7) {
          iVar19 = iVar7;
        }
        piVar11 = piVar11 + 1;
        uVar5 = uVar6 + 1;
      } while (iVar3 < iVar19);
      auStack_1788[lVar18] = uVar6;
      lVar18 = lVar18 + 1;
      local_17b8[(int)uVar6] = local_17b8[(int)uVar6] + iVar17;
      local_17a8[(int)uVar6] = local_17a8[(int)uVar6] + iVar23 * iVar17;
      if (iVar21 < (int)lVar18) goto LAB_00100671;
    }
    lVar18 = lVar18 + 1;
  } while ((int)lVar18 <= iVar21);
LAB_00100671:
  iVar17 = (int)lVar9;
  lVar9 = (long)iVar17;
  if (iVar17 < 1) goto LAB_00100848;
LAB_00100685:
  iVar17 = 0;
  lVar18 = 0;
  uVar28 = 0;
  iVar23 = 0;
  do {
    iVar3 = local_17b8[lVar18];
    if (iVar3 != 0) {
      iVar7 = (iVar3 / 2 + local_17a8[lVar18]) / iVar3;
      iVar20 = local_17c8[lVar18] - iVar7;
      local_17c8[lVar18] = iVar7;
      iVar19 = -iVar20;
      if (0 < iVar20) {
        iVar19 = iVar20;
      }
      iVar17 = iVar17 + iVar7 * iVar3;
      uVar28 = (ulong)(uint)((int)uVar28 + iVar3);
      iVar23 = iVar23 + iVar19;
    }
    lVar18 = lVar18 + 1;
  } while ((int)lVar18 < iVar24);
  if ((4 < iVar23) && (iVar31 = iVar31 + -1, iVar31 != 0)) goto LAB_00100858;
  iVar30 = (int)param_1[6];
  iVar31 = *(int *)((long)param_1 + 0x34);
  iVar24 = iVar30 * iVar31;
  if (0 < iVar24) {
    pbVar15 = (byte *)param_1[0xb8c];
    pbVar12 = pbVar15;
    do {
      pbVar13 = pbVar12 + 4;
      uVar6 = auStack_1788[pbVar12[1]];
      *pbVar12 = *pbVar12 & 0x9f | (byte)((uVar6 & 3) << 5);
      pbVar12[1] = (byte)local_17c8[(int)uVar6];
      pbVar12 = pbVar13;
    } while (pbVar15 + (long)iVar24 * 4 != pbVar13);
  }
  iVar21 = local_17c8[0] + 1;
  if ((int)lVar9 < 2) {
LAB_00100796:
    piVar22 = local_17c8;
    piVar11 = piVar22 + lVar9;
    plVar25 = param_1 + 0xa0;
    do {
      iVar30 = *piVar22;
      iVar31 = ((iVar30 - (((int)(uVar28 >> 0x1f) + (int)uVar28 >> 1) + iVar17) / (int)uVar28) *
               0xff) / (iVar21 - local_17c8[0]);
      if (0x7f < iVar31) {
        iVar31 = 0x7f;
      }
      if (iVar31 < -0x7f) {
        iVar31 = -0x7f;
      }
      *(int *)plVar25 = iVar31;
      iVar30 = ((iVar30 - local_17c8[0]) * 0xff) / (iVar21 - local_17c8[0]);
      if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      piVar22 = piVar22 + 1;
      *(int *)((long)plVar25 + 4) = iVar30;
      plVar25 = plVar25 + 0x5d;
    } while (piVar22 != piVar11);
    goto LAB_0010081a;
  }
  uVar6 = *(uint *)(*param_1 + 0x44) & 1;
  if (uVar6 == 0) {
LAB_00100769:
    lVar18 = 0;
    iVar21 = local_17c8[0];
    do {
      iVar30 = local_17c8[lVar18];
      if (iVar30 < local_17c8[0]) {
        local_17c8[0] = iVar30;
      }
      if (iVar21 < iVar30) {
        iVar21 = iVar30;
      }
      lVar18 = lVar18 + 1;
    } while ((int)lVar18 < (int)lVar9);
    if (local_17c8[0] == iVar21) {
      iVar21 = local_17c8[0] + 1;
    }
    goto LAB_00100796;
  }
  lVar9 = WebPSafeMalloc((long)iVar24,1);
  if (lVar9 != 0) {
    uVar5 = iVar31 - 1;
    if (1 < (int)uVar5) {
      lVar29 = (long)iVar30 * 4;
      lVar18 = (long)-iVar30 * 4;
      iVar31 = iVar30;
      uVar8 = uVar6;
LAB_001009be:
      iVar24 = iVar30;
      if (iVar30 < 3) goto LAB_00100be1;
      do {
        lVar1 = (long)iVar31 + 1;
        lVar27 = lVar1 * 4;
        puVar26 = (undefined1 *)(lVar1 + lVar9);
        do {
          local_1798 = (undefined1  [16])0x0;
          pbVar15 = (byte *)(param_1[0xb8c] + lVar27);
          bVar32 = *pbVar15;
          *(undefined4 *)(local_1798 + (ulong)(pbVar15[lVar18 + -4] >> 5 & 3) * 4) = 1;
          *(int *)(local_1798 + (ulong)(pbVar15[lVar18] >> 5 & 3) * 4) =
               *(int *)(local_1798 + (ulong)(pbVar15[lVar18] >> 5 & 3) * 4) + 1;
          *(int *)(local_1798 + (ulong)(pbVar15[lVar18 + 4] >> 5 & 3) * 4) =
               *(int *)(local_1798 + (ulong)(pbVar15[lVar18 + 4] >> 5 & 3) * 4) + 1;
          *(int *)(local_1798 + (ulong)(pbVar15[-4] >> 5 & 3) * 4) =
               *(int *)(local_1798 + (ulong)(pbVar15[-4] >> 5 & 3) * 4) + 1;
          *(int *)(local_1798 + (ulong)(pbVar15[4] >> 5 & 3) * 4) =
               *(int *)(local_1798 + (ulong)(pbVar15[4] >> 5 & 3) * 4) + 1;
          *(int *)(local_1798 + (ulong)(pbVar15[lVar29 + -4] >> 5 & 3) * 4) =
               *(int *)(local_1798 + (ulong)(pbVar15[lVar29 + -4] >> 5 & 3) * 4) + 1;
          bVar2 = pbVar15[lVar29 + 4];
          *(int *)(local_1798 + (ulong)(pbVar15[lVar29] >> 5 & 3) * 4) =
               *(int *)(local_1798 + (ulong)(pbVar15[lVar29] >> 5 & 3) * 4) + 1;
          *(int *)(local_1798 + (ulong)(bVar2 >> 5 & 3) * 4) =
               *(int *)(local_1798 + (ulong)(bVar2 >> 5 & 3) * 4) + 1;
          uVar16 = 0;
          do {
            if (4 < *(int *)(local_1798 + uVar16 * 4)) goto LAB_00100ad2;
            uVar16 = uVar16 + 1;
          } while (uVar16 != 4);
          uVar16 = (ulong)(bVar32 >> 5 & 3);
LAB_00100ad2:
          *puVar26 = (char)uVar16;
          puVar26 = puVar26 + 1;
          lVar27 = lVar27 + 4;
        } while ((undefined1 *)((long)iVar31 + (ulong)(iVar30 - 1) + lVar9) != puVar26);
        uVar8 = uVar8 + 1;
        iVar31 = iVar31 + iVar30;
      } while (uVar5 != uVar8);
LAB_00100b0d:
      do {
        if (2 < iVar30) {
          lVar18 = param_1[0xb8c];
          do {
            lVar29 = (long)iVar24 + 1;
            pbVar15 = (byte *)(lVar9 + lVar29);
            pbVar12 = (byte *)(lVar18 + lVar29 * 4);
            do {
              bVar32 = *pbVar15;
              pbVar13 = pbVar12 + 4;
              pbVar15 = pbVar15 + 1;
              *pbVar12 = *pbVar12 & 0x9f | (byte)((bVar32 & 3) << 5);
              pbVar12 = pbVar13;
            } while (pbVar13 != (byte *)(lVar18 + 8 + ((long)iVar24 + (ulong)(iVar30 - 3)) * 4));
            uVar6 = uVar6 + 1;
            iVar24 = iVar24 + iVar30;
          } while (uVar5 != uVar6);
          break;
        }
        uVar6 = uVar6 + 1;
        iVar24 = iVar24 + iVar30;
      } while (uVar5 != uVar6);
    }
    WebPSafeFree(lVar9);
  }
  iVar30 = (int)param_1[4];
  lVar9 = (long)iVar30;
  if (1 < iVar30) goto LAB_00100769;
  iVar21 = local_17c8[0] + 1;
  if (iVar30 == 1) goto LAB_00100796;
  goto LAB_0010081a;
LAB_00100858:
  memset(local_17b8,0,__n);
  memset(local_17a8,0,__n);
  if (iVar30 <= iVar21) goto LAB_001005d8;
  goto LAB_00100685;
LAB_00100be1:
  uVar8 = uVar8 + 1;
  iVar31 = iVar31 + iVar30;
  if (uVar5 == uVar8) goto LAB_00100b0d;
  goto LAB_001009be;
}



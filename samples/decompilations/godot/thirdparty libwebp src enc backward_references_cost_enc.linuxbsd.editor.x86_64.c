
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPopulationCountTableToBitEstimates(int param_1,uint *param_2,float *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  if (0 < param_1) {
    uVar5 = 0;
    puVar1 = param_2 + param_1;
    iVar3 = 0;
    puVar2 = param_2;
    do {
      uVar4 = (int)uVar5 + *puVar2;
      uVar5 = (ulong)uVar4;
      iVar3 = (iVar3 + 1) - (uint)(*puVar2 == 0);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    if (1 < iVar3) {
      if (uVar4 < 0x100) {
        fVar6 = *(float *)(&kLog2Table + uVar5 * 4);
      }
      else {
        fVar6 = (float)(*_VP8LFastLog2Slow)();
      }
      do {
        if (*param_2 < 0x100) {
          fVar7 = *(float *)(&kLog2Table + (ulong)*param_2 * 4);
        }
        else {
          fVar7 = (float)(*_VP8LFastLog2Slow)();
        }
        param_2 = param_2 + 1;
        *param_3 = fVar6 - fVar7;
        param_3 = param_3 + 1;
      } while (param_2 != puVar1);
      return;
    }
  }
  memset(param_3,0,(long)param_1 << 2);
  return;
}



void InsertInterval(float param_1,long *param_2,long param_3,float param_4,float param_5,
                   float param_6)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((int)param_6 <= (int)param_5) {
    return;
  }
  if (499 < (int)param_2[1]) {
    lVar5 = param_2[0x804];
    lVar3 = (long)(int)param_5 * 2;
    iVar4 = (int)param_5 - (int)param_4;
    do {
      iVar4 = iVar4 + 1;
      if (param_1 < *(float *)(lVar5 + lVar3 * 2)) {
        lVar1 = param_2[0x805];
        *(float *)(lVar5 + lVar3 * 2) = param_1;
        *(short *)(lVar1 + lVar3) = (short)iVar4;
      }
      lVar3 = lVar3 + 2;
    } while (((long)(int)param_5 + (ulong)(uint)((int)param_6 - (int)param_5)) * 2 != lVar3);
    return;
  }
  pfVar2 = (float *)param_2[0x82e];
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)param_2[0x82f];
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)WebPSafeMalloc(1,0x20);
      if (pfVar2 == (float *)0x0) {
        lVar5 = param_2[0x804];
        iVar4 = (int)param_5 - (int)param_4;
        lVar3 = (long)(int)param_5 * 2;
        do {
          iVar4 = iVar4 + 1;
          if (param_1 < *(float *)(lVar5 + lVar3 * 2)) {
            lVar1 = param_2[0x805];
            *(float *)(lVar5 + lVar3 * 2) = param_1;
            *(short *)(lVar1 + lVar3) = (short)iVar4;
          }
          lVar3 = lVar3 + 2;
        } while (((ulong)(uint)((int)param_6 - (int)param_5) + (long)(int)param_5) * 2 != lVar3);
        return;
      }
    }
    else {
      param_2[0x82f] = *(long *)(pfVar2 + 6);
    }
  }
  else {
    param_2[0x82e] = *(long *)(pfVar2 + 6);
  }
  pfVar2[3] = param_4;
  pfVar2[1] = param_5;
  pfVar2[2] = param_6;
  *pfVar2 = param_1;
  if ((param_3 == 0) && (param_3 = *param_2, param_3 == 0)) {
    lVar5 = 0;
  }
  else {
    do {
      if (*(int *)(param_3 + 4) <= (int)param_5) goto LAB_0010016d;
      param_3 = *(long *)(param_3 + 0x10);
    } while (param_3 != 0);
    lVar5 = *param_2;
  }
  *(long *)(pfVar2 + 6) = lVar5;
  if (lVar5 != 0) {
    *(float **)(lVar5 + 0x10) = pfVar2;
  }
  *param_2 = (long)pfVar2;
  lVar5 = 0;
  goto LAB_0010018e;
  while (*(int *)(param_3 + 4) < (int)param_5) {
LAB_0010016d:
    lVar5 = param_3;
    param_3 = *(long *)(lVar5 + 0x18);
    if (param_3 == 0) break;
  }
  lVar3 = *(long *)(lVar5 + 0x18);
  *(long *)(pfVar2 + 6) = lVar3;
  if (lVar3 != 0) {
    *(float **)(lVar3 + 0x10) = pfVar2;
  }
  *(float **)(lVar5 + 0x18) = pfVar2;
LAB_0010018e:
  *(long *)(pfVar2 + 4) = lVar5;
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  return;
}



void CostManagerClear_part_0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  puVar1 = param_1 + 0x82a;
  puVar2 = param_1 + 0x806;
  WebPSafeFree(param_1[0x804]);
  WebPSafeFree(param_1[2]);
  puVar3 = (undefined8 *)*param_1;
  while (puVar4 = puVar3, puVar3 != (undefined8 *)0x0) {
    while ((puVar3 = (undefined8 *)puVar4[3], puVar4 < puVar2 || (puVar1 < puVar4))) {
      WebPSafeFree();
      puVar4 = puVar3;
      if (puVar3 == (undefined8 *)0x0) goto LAB_00100337;
    }
  }
LAB_00100337:
  *param_1 = 0;
  puVar3 = (undefined8 *)param_1[0x82f];
  while (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar3[3];
    if ((puVar3 < puVar2) || (bVar5 = puVar1 < puVar3, puVar3 = puVar4, bVar5)) {
      WebPSafeFree();
      puVar3 = puVar4;
    }
  }
  memset(param_1,0,0x4180);
  puVar3 = (undefined8 *)0x0;
  do {
    puVar4 = puVar2;
    puVar4[3] = puVar3;
    puVar2 = puVar4 + 4;
    puVar3 = puVar4;
  } while (puVar4 + 4 != param_1 + 0x82e);
  param_1[0x82e] = puVar1;
  return;
}



void PushInterval(float param_1,long *param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float *pfVar12;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  ulong local_68;
  
  pfVar12 = (float *)*param_2;
  pfVar15 = (float *)param_2[2];
  if ((int)param_4 < 10) {
    if (param_4 != 0.0) {
      lVar7 = (long)param_3;
      lVar10 = param_2[0x804];
      lVar5 = lVar7 * -4;
      do {
        fVar16 = *(float *)((long)param_2 + lVar7 * 4 + lVar5 + 0x20) + param_1;
        if (fVar16 < *(float *)(lVar10 + lVar7 * 4)) {
          lVar4 = param_2[0x805];
          *(float *)(lVar10 + lVar7 * 4) = fVar16;
          *(short *)(lVar4 + lVar7 * 2) = (1 - (short)param_3) + (short)lVar7;
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)param_4 + param_3);
      return;
    }
  }
  else if (param_2[3] != 0) {
    local_68 = 0;
LAB_00100418:
    if ((int)pfVar15[1] < (int)param_4) {
      fVar11 = (float)((int)pfVar15[1] + param_3);
      fVar16 = *pfVar15;
      fVar13 = pfVar15[2];
      if ((int)param_4 <= (int)pfVar15[2]) {
        fVar13 = param_4;
      }
      fVar13 = (float)((int)fVar13 + param_3);
      if (pfVar12 != (float *)0x0) {
LAB_001004c0:
        do {
          if ((int)fVar13 <= (int)pfVar12[1]) goto LAB_0010054a;
          fVar2 = pfVar12[2];
          pfVar9 = *(float **)(pfVar12 + 6);
          if ((int)fVar11 < (int)fVar2) {
            fVar1 = *pfVar12;
            if (fVar1 <= param_1 + fVar16) {
              InsertInterval(param_2,pfVar12,param_3);
              fVar11 = fVar2;
              if ((int)fVar2 < (int)fVar13) goto LAB_001004b8;
              goto LAB_0010054a;
            }
            if ((int)fVar11 <= (int)pfVar12[1]) {
              if ((int)fVar2 <= (int)fVar13) {
                lVar5 = *(long *)(pfVar12 + 4);
                if (lVar5 == 0) {
                  *param_2 = (long)pfVar9;
                }
                else {
                  *(float **)(lVar5 + 0x18) = pfVar9;
                }
                if (pfVar9 != (float *)0x0) {
                  *(long *)(pfVar9 + 4) = lVar5;
                }
                if ((pfVar12 < param_2 + 0x806) || (param_2 + 0x82a < pfVar12)) {
                  *(long *)(pfVar12 + 6) = param_2[0x82f];
                  param_2[0x82f] = (long)pfVar12;
                }
                else {
                  *(long *)(pfVar12 + 6) = param_2[0x82e];
                  param_2[0x82e] = (long)pfVar12;
                }
                *(int *)(param_2 + 1) = (int)param_2[1] + -1;
                goto LAB_001004b8;
              }
              pfVar12[1] = fVar13;
              goto LAB_0010054a;
            }
            if ((int)fVar2 <= (int)fVar13) goto code_r0x001004f5;
            pfVar12[2] = fVar11;
            fVar3 = pfVar12[3];
            sVar6 = SUB42(fVar3,0);
            if (499 < (int)param_2[1]) {
              lVar5 = param_2[0x804];
              lVar10 = (long)(int)fVar13;
              do {
                if (fVar1 < *(float *)(lVar5 + lVar10 * 4)) {
                  lVar7 = param_2[0x805];
                  *(float *)(lVar5 + lVar10 * 4) = fVar1;
                  *(short *)(lVar7 + lVar10 * 2) = (1 - sVar6) + (short)lVar10;
                }
                lVar10 = lVar10 + 1;
                pfVar12 = pfVar9;
              } while ((int)lVar10 < (int)fVar2);
              goto LAB_0010054a;
            }
            pfVar9 = (float *)param_2[0x82e];
            if (pfVar9 == (float *)0x0) {
              pfVar9 = (float *)param_2[0x82f];
              if (pfVar9 != (float *)0x0) {
                param_2[0x82f] = *(long *)(pfVar9 + 6);
                goto LAB_0010068e;
              }
              pfVar9 = (float *)WebPSafeMalloc(1);
              if (pfVar9 != (float *)0x0) goto LAB_0010068e;
              lVar5 = param_2[0x804];
              lVar10 = (long)(int)fVar13;
              do {
                if (fVar1 < *(float *)(lVar5 + lVar10 * 4)) {
                  lVar7 = param_2[0x805];
                  *(float *)(lVar5 + lVar10 * 4) = fVar1;
                  *(short *)(lVar7 + lVar10 * 2) = (1 - sVar6) + (short)lVar10;
                }
                lVar10 = lVar10 + 1;
              } while ((int)lVar10 < (int)fVar2);
              goto LAB_00100707;
            }
            param_2[0x82e] = *(long *)(pfVar9 + 6);
LAB_0010068e:
            pfVar9[3] = fVar3;
            pfVar9[1] = fVar13;
            pfVar9[2] = fVar2;
            *pfVar9 = fVar1;
            pfVar8 = pfVar12;
            goto LAB_001006b5;
          }
LAB_001004b8:
          pfVar12 = pfVar9;
        } while (pfVar9 != (float *)0x0);
        goto LAB_001004fd;
      }
      goto LAB_0010054a;
    }
  }
  return;
code_r0x001004f5:
  pfVar12[2] = fVar11;
  pfVar12 = pfVar9;
  if (pfVar9 == (float *)0x0) goto LAB_001004fd;
  goto LAB_001004c0;
  while (pfVar8 = *(float **)(pfVar8 + 4), pfVar8 != (float *)0x0) {
LAB_001006b5:
    if ((int)pfVar8[1] <= (int)fVar13) goto LAB_001006dd;
  }
  lVar5 = *param_2;
  *(long *)(pfVar9 + 6) = lVar5;
  if (lVar5 != 0) {
    *(float **)(lVar5 + 0x10) = pfVar9;
  }
  *param_2 = (long)pfVar9;
  pfVar14 = (float *)0x0;
  goto LAB_001006fe;
  while ((int)pfVar8[1] < (int)fVar13) {
LAB_001006dd:
    pfVar14 = pfVar8;
    pfVar8 = *(float **)(pfVar14 + 6);
    if (pfVar8 == (float *)0x0) break;
  }
  lVar5 = *(long *)(pfVar14 + 6);
  *(long *)(pfVar9 + 6) = lVar5;
  if (lVar5 != 0) {
    *(float **)(lVar5 + 0x10) = pfVar9;
  }
  *(float **)(pfVar14 + 6) = pfVar9;
LAB_001006fe:
  *(float **)(pfVar9 + 4) = pfVar14;
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
LAB_00100707:
  pfVar12 = *(float **)(pfVar12 + 6);
LAB_0010054a:
  pfVar15 = pfVar15 + 3;
  InsertInterval(param_1 + fVar16,param_2,pfVar12,param_3,fVar11,fVar13);
  local_68 = local_68 + 1;
  if ((ulong)param_2[3] <= local_68) {
    return;
  }
  goto LAB_00100418;
LAB_001004fd:
  pfVar12 = (float *)0x0;
  goto LAB_0010054a;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool VP8LBackwardReferencesTraceBackwards
               (int param_1,int param_2,uint *param_3,int param_4,long *param_5,long param_6,
               long param_7)

{
  float fVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  byte bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  ushort *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  float *pfVar16;
  uint *puVar17;
  ulong uVar18;
  float *pfVar19;
  undefined4 *puVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  int iVar26;
  ushort *puVar27;
  float *pfVar28;
  ulong uVar29;
  undefined8 unaff_RBP;
  int iVar30;
  long lVar31;
  uint uVar32;
  int iVar33;
  ushort *puVar34;
  uint uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint local_b0;
  ulong local_88;
  int local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  long local_40;
  
  param_2 = param_2 * param_1;
  uVar29 = (ulong)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = (ushort *)WebPSafeMalloc(uVar29,2);
  if (puVar10 != (ushort *)0x0) {
    if (param_4 < 1) {
      lVar11 = WebPSafeCalloc(1,0x1108);
      puVar12 = (undefined8 *)WebPSafeCalloc(1,0x4180);
      bVar36 = puVar12 == (undefined8 *)0x0;
      if (lVar11 == 0) goto LAB_00100b60;
      if (bVar36) goto LAB_00100b88;
      local_70 = 0;
      *(long *)(lVar11 + 0xca0) = lVar11 + 0xca8;
LAB_0010091c:
      VP8LRefsCursorInit(&local_58,param_6);
      puVar13 = (undefined8 *)VP8LAllocateHistogram(param_4);
      if (puVar13 == (undefined8 *)0x0) {
        VP8LFreeHistogram(0);
LAB_00100d87:
        bVar36 = false;
        if (local_70 == 0) goto LAB_00100b64;
LAB_00100d99:
        VP8LColorCacheClear(&local_68);
      }
      else {
        VP8LHistogramInit(puVar13,param_4,1);
        while (local_58 != 0) {
          do {
            VP8LHistogramAddSinglePixOrCopy(puVar13,local_58,VP8LDistanceToPlaneCode,param_1);
            local_58 = local_58 + 8;
          } while (local_58 != local_48);
          VP8LRefsCursorNextBlock(&local_58);
        }
        iVar30 = 0x118;
        if (0 < *(int *)(puVar13 + 0x195)) {
          iVar30 = (1 << ((byte)*(int *)(puVar13 + 0x195) & 0x1f)) + 0x118;
        }
        ConvertPopulationCountTableToBitEstimates(iVar30,*puVar13,*(undefined8 *)(lVar11 + 0xca0));
        ConvertPopulationCountTableToBitEstimates(0x100,puVar13 + 1,lVar11 + 0x400);
        ConvertPopulationCountTableToBitEstimates(0x100,puVar13 + 0x81,lVar11 + 0x800);
        ConvertPopulationCountTableToBitEstimates(0x100,puVar13 + 0x101,lVar11);
        ConvertPopulationCountTableToBitEstimates(0x28,puVar13 + 0x181,lVar11 + 0xc00);
        VP8LFreeHistogram(puVar13);
        puVar12[0x804] = 0;
        puVar12[2] = 0;
        puVar12[0x805] = puVar10;
        *puVar12 = 0;
        puVar12[0x82f] = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        pfVar16 = (float *)(puVar12 + 0x806);
        pfVar19 = (float *)0x0;
        do {
          pfVar28 = pfVar16;
          *(float **)(pfVar28 + 6) = pfVar19;
          pfVar16 = pfVar28 + 8;
          pfVar19 = pfVar28;
        } while (pfVar28 + 8 != (float *)(puVar12 + 0x82e));
        puVar12[0x82e] = puVar12 + 0x82a;
        if (0 < param_2) {
          uVar23 = 0xffffffff;
          lVar15 = *(long *)(lVar11 + 0xca0);
          iVar30 = 0xfff;
          if (param_2 < 0x1000) {
            iVar30 = param_2;
          }
          uVar14 = 0;
          do {
            if (uVar14 < 0x200) {
              iVar33 = (int)(char)(&kPrefixEncodeCode)[uVar14 * 2];
              iVar9 = (int)(char)(&DAT_00102071)[uVar14 * 2];
            }
            else {
              iVar33 = 0x1f;
              if (uVar23 != 0) {
                for (; uVar23 >> iVar33 == 0; iVar33 = iVar33 + -1) {
                }
              }
              iVar9 = iVar33 + -1;
              iVar33 = ((int)uVar23 >> ((byte)iVar9 & 0x1f) & 1U) + iVar33 * 2;
            }
            uVar23 = uVar23 + 1;
            *(float *)((long)puVar12 + uVar14 * 4 + 0x20) =
                 (float)iVar9 + *(float *)(lVar15 + (long)(iVar33 + 0x100) * 4);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar30);
          puVar12[3] = 1;
          if (param_2 == 1) goto LAB_0010165d;
          lVar15 = 1;
          lVar31 = 1;
          fVar37 = *(float *)(puVar12 + 4);
          do {
            fVar24 = *(float *)((long)puVar12 + lVar15 * 4 + 0x20);
            if (fVar24 != fVar37) {
              lVar31 = lVar31 + 1;
              puVar12[3] = lVar31;
            }
            lVar15 = lVar15 + 1;
            fVar37 = fVar24;
          } while ((int)lVar15 < iVar30);
          pfVar16 = (float *)WebPSafeMalloc(lVar31,0xc);
          puVar12[2] = pfVar16;
          if (pfVar16 != (float *)0x0) {
            fVar37 = *(float *)(puVar12 + 4);
            pfVar19 = (float *)((long)puVar12 + 0x24);
            *(undefined8 *)(pfVar16 + 1) = _LC1;
            fVar24 = 1.4013e-45;
            *pfVar16 = fVar37;
            while( true ) {
              fVar1 = *pfVar19;
              if (fVar1 != fVar37) {
                pfVar16[4] = fVar24;
                pfVar16 = pfVar16 + 3;
                *pfVar16 = fVar1;
              }
              fVar24 = (float)((int)fVar24 + 1);
              pfVar19 = pfVar19 + 1;
              pfVar16[2] = fVar24;
              if (iVar30 <= (int)fVar24) break;
              fVar37 = *pfVar16;
            }
            pfVar16 = (float *)WebPSafeMalloc(uVar29,4);
            puVar12[0x804] = pfVar16;
            if (pfVar16 == (float *)0x0) goto LAB_00101627;
            bVar36 = true;
LAB_00100cce:
            bVar7 = bVar36;
            fVar37 = _LC2;
            pfVar19 = pfVar16;
            if ((uVar29 & 1) != 0) {
              *pfVar16 = _LC2;
              pfVar19 = pfVar16 + 1;
              if (pfVar16 + 1 == pfVar16 + uVar29) goto LAB_00100d02;
            }
            do {
              *pfVar19 = fVar37;
              pfVar28 = pfVar19 + 2;
              pfVar19[1] = fVar37;
              pfVar19 = pfVar28;
            } while (pfVar28 != pfVar16 + uVar29);
            goto LAB_00100d02;
          }
LAB_00101627:
          CostManagerClear_part_0(puVar12);
          goto LAB_00100d87;
        }
        puVar12[3] = 1;
LAB_0010165d:
        puVar20 = (undefined4 *)WebPSafeMalloc(1,0xc);
        puVar12[2] = puVar20;
        if (puVar20 == (undefined4 *)0x0) goto LAB_00101627;
        uVar2 = *(undefined4 *)(puVar12 + 4);
        *(undefined8 *)(puVar20 + 1) = _LC1;
        *puVar20 = uVar2;
        pfVar16 = (float *)WebPSafeMalloc(uVar29);
        puVar12[0x804] = pfVar16;
        if (pfVar16 == (float *)0x0) goto LAB_00101627;
        bVar7 = false;
        bVar36 = false;
        if (param_2 == 1) goto LAB_00100cce;
LAB_00100d02:
        lVar15 = *(long *)(lVar11 + 0xca0);
        *puVar10 = 0;
        uVar23 = *param_3;
        if (param_4 < 1) {
LAB_001010a1:
          fVar37 = (*(float *)(lVar11 + 0x400 + (ulong)(uVar23 >> 0x10 & 0xff) * 4) +
                    *(float *)(lVar11 + (ulong)(uVar23 >> 0x18) * 4) +
                    *(float *)(lVar15 + (ulong)(uVar23 >> 8 & 0xff) * 4) +
                   *(float *)(lVar11 + 0x800 + (ulong)(uVar23 & 0xff) * 4)) * __LC5;
        }
        else {
          bVar6 = (byte)local_60 & 0x1f;
          uVar25 = uVar23 * 0x1e35a7bd >> bVar6;
          puVar17 = (uint *)(local_68 + (long)(int)uVar25 * 4);
          if ((*puVar17 != uVar23) || ((int)(uVar23 * 0x1e35a7bd >> bVar6) < 0)) {
            *puVar17 = uVar23;
            goto LAB_001010a1;
          }
          fVar37 = _LC3 * *(float *)(lVar15 + (long)(int)(uVar25 + 0x118) * 4);
        }
        if (fVar37 + 0.0 < *pfVar16) {
          *pfVar16 = fVar37 + 0.0;
          *puVar10 = 1;
        }
        if (bVar7) {
          iVar9 = 0;
          auVar39 = ZEXT416(_LC0);
          local_b0 = 0xffffffff;
          iVar30 = -1;
          uVar14 = 1;
          uVar23 = 0xffffffff;
          do {
            iVar33 = (int)uVar14;
            fVar37 = pfVar16[uVar14 - 1];
            lVar31 = *param_5;
            uVar25 = *(uint *)(lVar31 + uVar14 * 4);
            uVar32 = uVar25 >> 0xc;
            uVar4 = param_3[uVar14];
            if (param_4 < 1) {
LAB_001013b3:
              fVar24 = (*(float *)(lVar11 + 0x400 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) +
                        *(float *)(lVar11 + (ulong)(uVar4 >> 0x18) * 4) +
                        *(float *)(lVar15 + (ulong)(uVar4 >> 8 & 0xff) * 4) +
                       *(float *)(lVar11 + 0x800 + (ulong)(uVar4 & 0xff) * 4)) * __LC5;
            }
            else {
              bVar6 = (byte)local_60 & 0x1f;
              uVar35 = uVar4 * 0x1e35a7bd >> bVar6;
              puVar17 = (uint *)(local_68 + (long)(int)uVar35 * 4);
              if ((*puVar17 != uVar4) || ((int)(uVar4 * 0x1e35a7bd >> bVar6) < 0)) {
                *puVar17 = uVar4;
                goto LAB_001013b3;
              }
              fVar24 = _LC3 * *(float *)(lVar15 + (long)(int)(uVar35 + 0x118) * 4);
            }
            if (fVar24 + fVar37 < pfVar16[uVar14]) {
              pfVar16[uVar14] = fVar24 + fVar37;
              puVar10[uVar14] = 1;
            }
            if ((uVar25 & 0xffe) != 0) {
              if (uVar32 == uVar23) {
                if (iVar30 != 0) {
                  iVar9 = (local_b0 - 2) + iVar33;
                }
                if (iVar9 < (int)(((uVar25 & 0xfff) - 1) + iVar33)) {
                  uVar23 = 0;
                  uVar8 = uVar14;
                  do {
                    uVar18 = uVar8;
                    iVar22 = (int)uVar18;
                    if (iVar9 < iVar22) goto LAB_001014d5;
                    uVar4 = *(uint *)(lVar31 + 4 + uVar18 * 4);
                    uVar23 = uVar4 & 0xfff;
                    uVar8 = uVar18 + 1;
                  } while (uVar32 == uVar4 >> 0xc);
                  uVar23 = *(uint *)(lVar31 + (long)iVar22 * 4) & 0xfff;
LAB_001014d5:
                  lVar15 = (long)iVar22;
                  pfVar19 = (float *)*puVar12;
                  iVar30 = iVar22 + -1;
                  if (pfVar19 != (float *)0x0) {
                    pfVar28 = pfVar19;
                    do {
                      if (iVar30 < (int)pfVar28[1]) break;
                      pfVar5 = *(float **)(pfVar28 + 6);
                      if ((iVar30 < (int)pfVar28[2]) && (*pfVar28 < pfVar16[iVar30])) {
                        fVar37 = pfVar28[3];
                        pfVar16[iVar30] = *pfVar28;
                        *(short *)(puVar12[0x805] + (long)iVar30 * 2) =
                             ((short)iVar30 - SUB42(fVar37,0)) + 1;
                      }
                      pfVar28 = pfVar5;
                    } while (pfVar5 != (float *)0x0);
                    do {
                      if (iVar22 < (int)pfVar19[1]) break;
                      pfVar28 = *(float **)(pfVar19 + 6);
                      if ((iVar22 < (int)pfVar19[2]) && (*pfVar19 < pfVar16[lVar15])) {
                        fVar37 = pfVar19[3];
                        lVar31 = puVar12[0x805];
                        pfVar16[lVar15] = *pfVar19;
                        *(short *)(lVar31 + lVar15 * 2) = ((short)uVar18 - SUB42(fVar37,0)) + 1;
                      }
                      pfVar19 = pfVar28;
                    } while (pfVar28 != (float *)0x0);
                  }
                  auVar38._4_12_ = auVar39._4_12_;
                  auVar38._0_4_ = auVar39._0_4_ + pfVar16[lVar15 + -1];
                  PushInterval(auVar38._0_8_,puVar12,uVar18 & 0xffffffff,uVar23);
                  iVar30 = 0;
                  auVar39 = ZEXT416((uint)auVar39._0_4_);
                  iVar9 = iVar22 + -1 + uVar23;
                }
                else {
                  iVar30 = 0;
                }
              }
              else {
                iVar30 = VP8LDistanceToPlaneCode(param_1,uVar32);
                if (iVar30 < 0x200) {
                  iVar26 = (int)(char)(&kPrefixEncodeCode)[(long)iVar30 * 2];
                  iVar22 = (int)(char)(&DAT_00102071)[(long)iVar30 * 2];
                }
                else {
                  uVar23 = iVar30 - 1;
                  iVar30 = 0x1f;
                  if (uVar23 != 0) {
                    for (; uVar23 >> iVar30 == 0; iVar30 = iVar30 + -1) {
                    }
                  }
                  iVar22 = iVar30 + -1;
                  iVar26 = ((int)uVar23 >> ((byte)iVar22 & 0x1f) & 1U) + iVar30 * 2;
                }
                fVar37 = *(float *)(lVar11 + 0xc00 + (long)iVar26 * 4);
                PushInterval(puVar12,uVar14 & 0xffffffff,uVar25 & 0xfff);
                auVar39 = ZEXT416((uint)((float)iVar22 + fVar37));
                iVar30 = 1;
              }
            }
            pfVar16 = (float *)*puVar12;
            while ((pfVar19 = pfVar16, pfVar19 != (float *)0x0 && ((int)pfVar19[1] <= iVar33))) {
              pfVar16 = *(float **)(pfVar19 + 6);
              if (iVar33 < (int)pfVar19[2]) {
                pfVar28 = (float *)(puVar12[0x804] + uVar14 * 4);
                if (*pfVar19 < *pfVar28) {
                  fVar37 = pfVar19[3];
                  *pfVar28 = *pfVar19;
                  *(short *)(puVar12[0x805] + uVar14 * 2) = ((short)uVar14 - SUB42(fVar37,0)) + 1;
                }
              }
              else {
                lVar15 = *(long *)(pfVar19 + 4);
                if (lVar15 == 0) {
                  *puVar12 = pfVar16;
                }
                else {
                  *(float **)(lVar15 + 0x18) = pfVar16;
                }
                if (pfVar16 != (float *)0x0) {
                  *(long *)(pfVar16 + 4) = lVar15;
                }
                if ((pfVar19 < puVar12 + 0x806) || (puVar12 + 0x82a < pfVar19)) {
                  *(undefined8 *)(pfVar19 + 6) = puVar12[0x82f];
                  puVar12[0x82f] = pfVar19;
                }
                else {
                  *(undefined8 *)(pfVar19 + 6) = puVar12[0x82e];
                  puVar12[0x82e] = pfVar19;
                }
                *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + -1;
              }
            }
            uVar14 = uVar14 + 1;
            if (param_2 <= (int)uVar14) break;
            pfVar16 = (float *)puVar12[0x804];
            lVar15 = *(long *)(lVar11 + 0xca0);
            uVar23 = uVar32;
            local_b0 = uVar25 & 0xfff;
          } while( true );
        }
        bVar36 = *(int *)(param_6 + 4) == 0;
        if (local_70 != 0) goto LAB_00100d99;
      }
      CostManagerClear_part_0(puVar12);
      WebPSafeFree(lVar11);
      WebPSafeFree(puVar12);
      if (bVar36) {
        puVar27 = puVar10 + (uVar29 - 1);
        puVar34 = puVar10 + uVar29;
        if (puVar27 < puVar10) {
          if (param_4 < 1) {
            VP8LClearBackwardRefs(param_7);
LAB_001016ca:
            bVar36 = *(int *)(param_7 + 4) == 0;
            goto LAB_00100f8e;
          }
          iVar30 = VP8LColorCacheInit(&local_58,param_4);
          if (iVar30 == 0) goto LAB_00100b7c;
          VP8LClearBackwardRefs(param_7);
LAB_00101076:
          bVar36 = *(int *)(param_7 + 4) == 0;
        }
        else {
          do {
            uVar3 = *puVar27;
            puVar34 = puVar34 + -1;
            *puVar34 = uVar3;
            puVar27 = puVar27 + -(ulong)uVar3;
          } while (puVar10 <= puVar27);
          iVar30 = (int)((long)(puVar10 + uVar29) - (long)puVar34 >> 1);
          if (param_4 < 1) {
            VP8LClearBackwardRefs(param_7);
            if (iVar30 < 1) goto LAB_001016ca;
            iVar9 = 0;
          }
          else {
            iVar9 = VP8LColorCacheInit(&local_58);
            if (iVar9 == 0) goto LAB_00100b7c;
            VP8LClearBackwardRefs(param_7);
            if (iVar30 < 1) goto LAB_00101076;
          }
          lVar11 = 0;
          iVar33 = 0;
          do {
            while( true ) {
              uVar3 = puVar34[lVar11];
              lVar15 = (long)iVar33;
              uVar23 = (uint)uVar3;
              if (uVar3 != 1) break;
              uVar23 = param_3[lVar15];
              if (param_4 < 1) {
LAB_00100fcc:
                uVar21 = 0;
                uVar25 = uVar23;
              }
              else {
                bVar6 = (byte)local_50 & 0x1f;
                uVar25 = uVar23 * 0x1e35a7bd >> bVar6;
                puVar17 = (uint *)(local_58 + (long)(int)uVar25 * 4);
                if ((*puVar17 != uVar23) || (uVar21 = 1, (int)(uVar23 * 0x1e35a7bd >> bVar6) < 0)) {
                  *puVar17 = uVar23;
                  uVar23 = param_3[lVar15];
                  goto LAB_00100fcc;
                }
              }
              iVar33 = iVar33 + 1;
              lVar11 = lVar11 + 1;
              local_88 = CONCAT44(uVar25,(int)CONCAT71((int7)(local_88 >> 8),uVar21)) &
                         0xffffffff0000ffff | 0x10000;
              VP8LBackwardRefsCursorAdd(param_7,local_88);
              if (iVar30 <= (int)lVar11) goto LAB_00100f73;
            }
            unaff_RBP = CONCAT44(*(uint *)(*param_5 + lVar15 * 4) >> 0xc,
                                 (uint)CONCAT71((int7)((ulong)unaff_RBP >> 8),2) & 0xffff |
                                 (uint)uVar3 << 0x10);
            VP8LBackwardRefsCursorAdd(param_7,unaff_RBP);
            if ((0 < param_4) && (uVar23 != 0)) {
              puVar17 = param_3 + lVar15;
              do {
                uVar25 = *puVar17;
                puVar17 = puVar17 + 1;
                *(uint *)(local_58 + (long)(int)(uVar25 * 0x1e35a7bd >> ((byte)local_50 & 0x1f)) * 4
                         ) = uVar25;
              } while (puVar17 != param_3 + lVar15 + (ulong)(uVar23 - 1) + 1);
            }
            iVar33 = iVar33 + uVar23;
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < iVar30);
LAB_00100f73:
          bVar36 = *(int *)(param_7 + 4) == 0;
          if (iVar9 == 0) goto LAB_00100f8e;
        }
        VP8LColorCacheClear(&local_58);
        goto LAB_00100f8e;
      }
    }
    else {
      lVar11 = WebPSafeCalloc(1,(long)((1 << ((byte)param_4 & 0x1f)) + 0x118) * 4 + 0xca8);
      puVar12 = (undefined8 *)WebPSafeCalloc(1,0x4180);
      bVar36 = puVar12 == (undefined8 *)0x0;
      if (lVar11 == 0) {
LAB_00100b60:
        if (bVar36) goto LAB_00100b88;
      }
      else {
        if (bVar36) {
LAB_00100b88:
          bVar36 = false;
          WebPSafeFree(lVar11);
          WebPSafeFree(0);
          goto LAB_00100f8e;
        }
        *(long *)(lVar11 + 0xca0) = lVar11 + 0xca8;
        local_70 = VP8LColorCacheInit(&local_68,param_4);
        if (local_70 != 0) goto LAB_0010091c;
      }
LAB_00100b64:
      CostManagerClear_part_0(puVar12);
      WebPSafeFree(lVar11);
      WebPSafeFree(puVar12);
    }
  }
LAB_00100b7c:
  bVar36 = false;
LAB_00100f8e:
  WebPSafeFree(puVar10);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar36;
}



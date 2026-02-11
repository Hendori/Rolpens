
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertToYUVA(long param_1,undefined4 param_2,uint param_3,long param_4)

{
  (*_WebPConvertARGBToY)
            (param_1,(long)(int)(*(int *)(param_4 + 0x30) * param_3) + *(long *)(param_4 + 0x10),
             param_2);
  (*_WebPConvertARGBToUV)
            (param_1,(long)(((int)param_3 >> 1) * *(int *)(param_4 + 0x34)) +
                     *(long *)(param_4 + 0x18),
             (long)(*(int *)(param_4 + 0x38) * ((int)param_3 >> 1)) + *(long *)(param_4 + 0x20),
             param_2,~param_3 & 1);
  if (*(long *)(param_4 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010008d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_WebPExtractAlpha)
              (param_1 + 3,0,param_2,1,
               *(long *)(param_4 + 0x28) + (long)(int)(param_3 * *(int *)(param_4 + 0x3c)),0);
    return;
  }
  return;
}



bool ReadImageInfo(long param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = VP8LReadBits(param_1,8);
  if (iVar1 == 0x2f) {
    iVar1 = VP8LReadBits(param_1,0xe);
    *param_2 = iVar1 + 1;
    iVar1 = VP8LReadBits(param_1,0xe);
    *param_3 = iVar1 + 1;
    uVar2 = VP8LReadBits(param_1,1);
    *param_4 = uVar2;
    iVar1 = VP8LReadBits(param_1,3);
    if (iVar1 == 0) {
      return *(int *)(param_1 + 0x24) == 0;
    }
  }
  return false;
}



undefined8 ReadHuffmanCode(int param_1,int *param_2,void *param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  undefined1 local_c8 [32];
  long *local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [12];
  undefined4 uStack_5c;
  undefined1 auStack_58 [12];
  long local_40;
  
  piVar1 = param_2 + 10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = VP8LReadBits(piVar1);
  memset(param_3,0,(long)param_1 << 2);
  if (iVar5 == 0) {
    local_68 = SUB1612((undefined1  [16])0x0,0);
    pbVar14 = &kCodeLengthCodeOrder;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    uStack_5c = 0;
    auStack_58 = SUB1612((undefined1  [16])0x0,4);
    iVar5 = VP8LReadBits(piVar1,4);
    if (0 < iVar5 + 4) {
      do {
        pbVar15 = pbVar14 + 1;
        uVar7 = VP8LReadBits(piVar1,3);
        *(undefined4 *)(local_98 + (ulong)*pbVar14 * 4) = uVar7;
        pbVar14 = pbVar15;
      } while (&DAT_00103621 + (iVar5 + 3) != pbVar15);
    }
    iVar5 = VP8LHuffmanTablesAllocate(0x80,local_c8);
    if ((iVar5 != 0) && (iVar5 = VP8LBuildHuffmanTable(local_c8,7,local_98,0x13), iVar5 != 0)) {
      iVar5 = VP8LReadBits(piVar1,1);
      if (iVar5 == 0) {
        iVar5 = param_1;
        if (0 < param_1) {
LAB_00100304:
          iVar6 = 0;
          uVar13 = 8;
          do {
            iVar8 = param_2[0x12];
            if (0x1f < iVar8) {
              VP8LDoFillBitWindow(piVar1);
              iVar8 = param_2[0x12];
            }
            pbVar14 = (byte *)(*local_a8 +
                              (ulong)((uint)(*(ulong *)(param_2 + 10) >> ((byte)iVar8 & 0x3f)) &
                                     0x7f) * 4);
            uVar4 = *(ushort *)(pbVar14 + 2);
            param_2[0x12] = (uint)*pbVar14 + iVar8;
            if (uVar4 < 0x10) {
              lVar9 = (long)iVar6;
              iVar6 = iVar6 + 1;
              uVar12 = (uint)uVar4;
              *(uint *)((long)param_3 + lVar9 * 4) = uVar12;
              if (uVar12 != 0) {
                uVar13 = uVar12;
              }
            }
            else {
              bVar3 = *(byte *)((long)&kCodeLengthRepeatOffsets + (long)(int)(uVar4 - 0x10));
              iVar8 = VP8LReadBits(piVar1,*(undefined1 *)
                                           ((long)&kCodeLengthExtraBits + (long)(int)(uVar4 - 0x10))
                                  );
              iVar8 = (uint)bVar3 + iVar8;
              if (param_1 < iVar8 + iVar6) goto LAB_0010029f;
              uVar12 = 0;
              if (uVar4 == 0x10) {
                uVar12 = uVar13;
              }
              if (0 < iVar8) {
                puVar11 = (uint *)((long)param_3 + (long)iVar6 * 4);
                puVar2 = (uint *)((long)param_3 + ((ulong)(iVar8 - 1U) + (long)iVar6) * 4 + 4);
                if (((int)puVar2 - (int)puVar11 & 4U) == 0) goto LAB_001004a8;
                *puVar11 = uVar12;
                for (puVar11 = puVar11 + 1; puVar11 != puVar2; puVar11 = puVar11 + 2) {
LAB_001004a8:
                  *puVar11 = uVar12;
                  puVar11[1] = uVar12;
                }
                iVar6 = iVar6 + 1 + (iVar8 - 1U);
              }
            }
          } while ((iVar6 < param_1) && (iVar5 = iVar5 + -1, iVar5 != 0));
        }
      }
      else {
        iVar5 = VP8LReadBits(piVar1,3);
        iVar5 = VP8LReadBits(piVar1,iVar5 * 2 + 2);
        iVar5 = iVar5 + 2;
        if (param_1 < iVar5) goto LAB_0010029f;
        if ((0 < param_1) && (iVar5 != 0)) goto LAB_00100304;
      }
      VP8LHuffmanTablesDeallocate(local_c8);
      goto LAB_001001ef;
    }
LAB_0010029f:
    VP8LHuffmanTablesDeallocate(local_c8);
    if ((*param_2 != 0) && (*param_2 != 5)) {
      uVar10 = 0;
      goto LAB_001003cc;
    }
LAB_00100205:
    *param_2 = 3;
  }
  else {
    iVar5 = VP8LReadBits(piVar1,1);
    iVar6 = VP8LReadBits(piVar1,1);
    iVar6 = VP8LReadBits(piVar1,(-(uint)(iVar6 == 0) & 0xfffffff9) + 8);
    *(undefined4 *)((long)param_3 + (long)iVar6 * 4) = 1;
    if (iVar5 == 1) {
      iVar5 = VP8LReadBits(piVar1,8);
      *(undefined4 *)((long)param_3 + (long)iVar5 * 4) = 1;
    }
LAB_001001ef:
    if ((param_2[0x13] == 0) &&
       (uVar10 = VP8LBuildHuffmanTable(param_4,8,param_3,param_1), (int)uVar10 != 0))
    goto LAB_001003cc;
    if ((*param_2 == 0) || (*param_2 == 5)) goto LAB_00100205;
  }
  uVar10 = 0;
LAB_001003cc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ClearMetadata(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  WebPSafeFree(param_1[7]);
  VP8LHuffmanTablesDeallocate(param_1 + 10);
  VP8LHtreeGroupsFree(param_1[9]);
  VP8LColorCacheClear(param_1 + 1);
  VP8LColorCacheClear(param_1 + 3);
  *param_1 = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  param_1[0xe] = 0;
  uVar1 = (ulong)(((int)param_1 - (int)puVar2) + 0x78U >> 3);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
  }
  return;
}



void ApplyInverseTransforms(long param_1,int param_2,int param_3,void *param_4)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  
  __dest = *(void **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x110) < 1) {
    if (param_4 != __dest) {
      memcpy(__dest,param_4,(long)(*(int *)(param_1 + 0x84) * param_3) << 2);
      return;
    }
  }
  else {
    uVar1 = *(int *)(param_1 + 0x110) - 1;
    lVar2 = (long)(int)uVar1 * 0x18;
    lVar3 = param_1 + 0x118 + lVar2;
    do {
      VP8LInverseTransform(lVar3,param_2,param_3 + param_2,param_4,__dest);
      lVar3 = lVar3 + -0x18;
      param_4 = __dest;
    } while (lVar3 != param_1 + 0x100 + lVar2 + (ulong)uVar1 * -0x18);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessRows(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int local_74;
  int local_68;
  
  iVar14 = *(int *)(param_1 + 0x8c);
  if (0 < param_2 - iVar14) {
    piVar4 = *(int **)(param_1 + 8);
    lVar13 = *(long *)(param_1 + 0x20);
    iVar2 = *piVar4 * 4;
    ApplyInverseTransforms
              (param_1,iVar14,param_2 - iVar14,
               *(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x84) * iVar14) * 4);
    iVar14 = *(int *)(param_1 + 0x8c);
    iVar7 = piVar4[0x20];
    iVar6 = piVar4[0x21];
    if (param_2 <= piVar4[0x21]) {
      iVar6 = param_2;
    }
    if (iVar14 < iVar7) {
      lVar13 = lVar13 + (iVar7 - iVar14) * iVar2;
      iVar14 = iVar7;
    }
    if (iVar14 < iVar6) {
      iVar6 = iVar6 - iVar14;
      piVar4[4] = iVar6;
      lVar13 = lVar13 + (long)piVar4[0x1e] * 4;
      puVar9 = *(uint **)(param_1 + 0x10);
      iVar16 = piVar4[0x1f] - piVar4[0x1e];
      local_68 = *(int *)(param_1 + 0x94);
      piVar4[2] = iVar14 - iVar7;
      uVar3 = *puVar9;
      piVar4[3] = iVar16;
      if (uVar3 < 0xb) {
        lVar11 = (long)(int)puVar9[6];
        lVar12 = local_68 * lVar11 + *(long *)(puVar9 + 4);
        iVar14 = iVar6;
        if (piVar4[0x22] == 0) {
          do {
            iVar14 = iVar14 + -1;
            VP8LConvertFromBGRA(lVar13,iVar16,uVar3,lVar12);
            lVar12 = lVar12 + lVar11;
            lVar13 = lVar13 + iVar2;
            local_74 = iVar6;
          } while (iVar14 != 0);
        }
        else {
          iVar14 = 0;
          local_74 = 0;
          do {
            lVar15 = (long)iVar14 * (long)iVar2 + lVar13;
            uVar8 = WebPRescaleNeededLines(*(undefined8 *)(param_1 + 0x188),iVar6 - iVar14);
            WebPMultARGBRows(lVar15,iVar2,*(undefined4 *)(*(long *)(param_1 + 0x188) + 0x2c),uVar8);
            iVar7 = WebPRescalerImport(*(undefined8 *)(param_1 + 0x188),iVar6 - iVar14,lVar15,iVar2)
            ;
            iVar14 = iVar14 + iVar7;
            lVar15 = *(long *)(param_1 + 0x188);
            if (*(int *)(lVar15 + 0x40) < *(int *)(lVar15 + 0x38)) {
              iVar7 = 0;
              uVar5 = *(undefined8 *)(lVar15 + 0x48);
              uVar8 = *(undefined4 *)(lVar15 + 0x34);
              lVar10 = local_74 * lVar11 + lVar12;
              do {
                if (0 < *(int *)(lVar15 + 0x18)) break;
                WebPRescalerExportRow(lVar15);
                (*_WebPMultARGBRow)(uVar5,uVar8,1);
                VP8LConvertFromBGRA(uVar5,uVar8,uVar3,lVar10);
                lVar10 = lVar10 + lVar11;
                iVar7 = iVar7 + 1;
              } while (*(int *)(lVar15 + 0x40) < *(int *)(lVar15 + 0x38));
              local_74 = local_74 + iVar7;
            }
          } while (iVar14 < iVar6);
        }
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + local_74;
      }
      else {
        if (piVar4[0x22] == 0) {
          iVar14 = local_68;
          while( true ) {
            ConvertToYUVA(lVar13,iVar16,iVar14,puVar9);
            lVar13 = lVar13 + iVar2;
            if (iVar14 + 1 == iVar6 + local_68) break;
            puVar9 = *(uint **)(param_1 + 0x10);
            iVar14 = iVar14 + 1;
          }
          local_68 = local_68 + iVar6;
        }
        else {
          iVar14 = 0;
          do {
            iVar7 = WebPRescaleNeededLines(*(undefined8 *)(param_1 + 0x188),iVar6 - iVar14);
            WebPMultARGBRows(lVar13,iVar2,*(undefined4 *)(*(long *)(param_1 + 0x188) + 0x2c),iVar7,0
                            );
            iVar16 = WebPRescalerImport(*(undefined8 *)(param_1 + 0x188),iVar6 - iVar14,lVar13,iVar2
                                       );
            iVar14 = iVar14 + iVar16;
            lVar12 = *(long *)(param_1 + 0x188);
            if (*(int *)(lVar12 + 0x40) < *(int *)(lVar12 + 0x38)) {
              uVar5 = *(undefined8 *)(lVar12 + 0x48);
              uVar8 = *(undefined4 *)(lVar12 + 0x34);
              iVar16 = 0;
              do {
                if (0 < *(int *)(lVar12 + 0x18)) break;
                WebPRescalerExportRow(lVar12);
                (*_WebPMultARGBRow)(uVar5,uVar8,1);
                iVar1 = iVar16 + local_68;
                iVar16 = iVar16 + 1;
                ConvertToYUVA(uVar5,uVar8,iVar1,*(undefined8 *)(param_1 + 0x10));
              } while (*(int *)(lVar12 + 0x40) < *(int *)(lVar12 + 0x38));
              local_68 = local_68 + iVar16;
            }
            lVar13 = lVar13 + iVar7 * iVar2;
          } while (iVar14 < iVar6);
        }
        *(int *)(param_1 + 0x94) = local_68;
      }
    }
  }
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}



void ExtractPalettedAlphaRows(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0x8c);
  lVar4 = *(long *)(piVar3 + 0xe);
  if ((*(uint *)(lVar4 + 0xc) < 2) && (iVar9 < piVar3[0x20])) {
    iVar9 = piVar3[0x20];
  }
  if (iVar9 < param_2) {
    iVar1 = *piVar3;
    lVar6 = *(long *)(lVar4 + 200) + (long)(iVar1 * iVar9);
    VP8LColorIndexInverseTransformAlpha
              (param_1 + 0x118,iVar9,param_2,
               (long)(*(int *)(param_1 + 0x84) * iVar9) + *(long *)(param_1 + 0x18),lVar6);
    uVar2 = *(uint *)(lVar4 + 0xc);
    if (uVar2 != 0) {
      lVar7 = *(long *)(lVar4 + 0xd0);
      lVar8 = lVar6;
      iVar5 = iVar9;
      while( true ) {
        (**(code **)(&WebPUnfilters + (ulong)uVar2 * 8))(lVar7,lVar8,lVar8,iVar1);
        if (param_2 == iVar5 + 1) break;
        uVar2 = *(uint *)(lVar4 + 0xc);
        lVar7 = lVar8;
        lVar8 = lVar8 + iVar1;
        iVar5 = iVar5 + 1;
      }
      *(ulong *)(lVar4 + 0xd0) = lVar6 + (ulong)(uint)(iVar5 - iVar9) * (long)iVar1;
    }
  }
  *(int *)(param_1 + 0x94) = param_2;
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}



undefined8 AllocateInternalBuffers32b(int *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)param_1[0x21] * (long)param_1[0x22] + (ulong)(param_2 & 0xffff);
  lVar1 = WebPSafeMalloc((long)(int)param_2 * 0x10 + lVar3,4);
  *(long *)(param_1 + 6) = lVar1;
  if (lVar1 == 0) {
    param_1[8] = 0;
    param_1[9] = 0;
    if ((*param_1 == 0) || (*param_1 == 5)) {
      *param_1 = 1;
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    *(long *)(param_1 + 8) = lVar1 + lVar3 * 4;
    uVar2 = 1;
  }
  return uVar2;
}



void VP8LClear_part_0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  ClearMetadata(param_1 + 0x98);
  WebPSafeFree(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x110)) {
    iVar2 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x128);
    do {
      iVar2 = iVar2 + 1;
      WebPSafeFree(*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x110));
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  WebPSafeFree(*(undefined8 *)(param_1 + 0x180));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ExtractAlphaRows(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  
  iVar10 = *(int *)(param_1 + 0x8c);
  lVar1 = *(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x84) * iVar10) * 4;
  iVar9 = param_2 - iVar10;
  for (; 0 < iVar9; iVar9 = iVar9 - iVar6) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    iVar6 = 0x10;
    if (iVar9 < 0x11) {
      iVar6 = iVar9;
    }
    lVar5 = *(long *)(*(int **)(param_1 + 8) + 0xe);
    iVar2 = **(int **)(param_1 + 8);
    lVar7 = (long)(iVar2 * iVar10) + *(long *)(lVar5 + 200);
    ApplyInverseTransforms(param_1,iVar10,iVar6,lVar1);
    (*_WebPExtractGreen)(uVar4,lVar7,iVar6 * iVar2);
    uVar3 = *(uint *)(lVar5 + 0xc);
    iVar11 = iVar10 + iVar6;
    if (uVar3 != 0) {
      lVar8 = *(long *)(lVar5 + 0xd0);
      lVar12 = lVar7;
      while( true ) {
        iVar10 = iVar10 + 1;
        (**(code **)(&WebPUnfilters + (ulong)uVar3 * 8))(lVar8,lVar12,lVar12,iVar2);
        if (iVar11 <= iVar10) break;
        uVar3 = *(uint *)(lVar5 + 0xc);
        lVar8 = lVar12;
        lVar12 = lVar12 + iVar2;
      }
      *(ulong *)(lVar5 + 0xd0) = lVar7 + (ulong)(iVar6 - 1) * (long)iVar2;
    }
    lVar1 = lVar1 + (long)(*(int *)(param_1 + 0x84) * iVar6) * 4;
    iVar10 = iVar11;
  }
  *(int *)(param_1 + 0x94) = param_2;
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}



undefined8
DecodeImageData(int *param_1,long param_2,int param_3,int param_4,int param_5,code *param_6)

{
  int *piVar1;
  ulong *puVar2;
  size_t __n;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong *local_98;
  int local_90;
  ulong *local_58;
  
  iVar7 = param_1[0x24];
  local_98 = (ulong *)(param_2 + (long)iVar7 * 4);
  uVar10 = (long)iVar7 / (long)param_3;
  uVar16 = (long)iVar7 % (long)param_3;
  uVar22 = uVar10 & 0xffffffff;
  iVar20 = (int)uVar10;
  piVar1 = param_1 + 10;
  plVar18 = (long *)(param_1 + 0x28);
  puVar2 = (ulong *)(param_2 + (long)(param_5 * param_3) * 4);
  iVar7 = param_1[0x26];
  local_90 = 0x1000000;
  if (param_1[0x14] != 0) {
    local_90 = iVar20;
  }
  if (iVar7 < 1) {
    plVar18 = (long *)0x0;
  }
  uVar6 = param_1[0x30];
  if (local_98 < puVar2) {
    uVar10 = uVar16 & 0xffffffff;
    lVar13 = 0;
    if (param_1[0x31] != 0) {
      bVar8 = (byte)param_1[0x31];
      lVar13 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                             (long)((iVar20 >> (bVar8 & 0x1f)) * param_1[0x32] +
                                   ((int)uVar16 >> (bVar8 & 0x1f))) * 4) * 0x238;
    }
    plVar14 = (long *)(lVar13 + *(long *)(param_1 + 0x38));
    puVar11 = local_98;
LAB_00100f6e:
    iVar20 = (int)uVar22;
    if (local_90 <= iVar20) {
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x10);
      param_1[0x20] = (int)((long)puVar11 - param_2 >> 2);
      if (param_1[0x26] < 1) {
        local_90 = iVar20 + 8;
      }
      else {
        VP8LColorCacheCopy(param_1 + 0x28,param_1 + 0x2c);
        local_90 = iVar20 + 8;
      }
    }
    uVar21 = (uint)uVar10;
    if ((uVar6 & uVar21) == 0) {
      lVar13 = 0;
      if (param_1[0x31] != 0) {
        bVar8 = (byte)param_1[0x31];
        lVar13 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                               (long)((iVar20 >> (bVar8 & 0x1f)) * param_1[0x32] +
                                     ((int)uVar21 >> (bVar8 & 0x1f))) * 4) * 0x238;
      }
      plVar14 = (long *)(lVar13 + *(long *)(param_1 + 0x38));
    }
    if ((int)plVar14[6] == 0) {
      iVar9 = param_1[0x12];
      if (0x1f < iVar9) {
        VP8LDoFillBitWindow(piVar1);
        iVar9 = param_1[0x12];
      }
      uVar10 = *(ulong *)(param_1 + 10);
      uVar16 = uVar10 >> ((byte)iVar9 & 0x3f);
      if (*(int *)((long)plVar14 + 0x34) == 0) {
        pbVar17 = (byte *)(*plVar14 + (uVar16 & 0xff) * 4);
        bVar8 = *pbVar17;
        if (0 < (int)(bVar8 - 8)) {
          iVar9 = iVar9 + 8;
          pbVar17 = pbVar17 + ((ulong)((1 << ((byte)(bVar8 - 8) & 0x1f)) - 1U &
                                      (uint)(uVar10 >> ((byte)iVar9 & 0x3f))) +
                              (ulong)*(ushort *)(pbVar17 + 2)) * 4;
          bVar8 = *pbVar17;
        }
        uVar3 = *(ushort *)(pbVar17 + 2);
        param_1[0x12] = iVar9 + (uint)bVar8;
        if (param_1[0x13] != 0) goto LAB_00101102;
        uVar23 = (uint)uVar3;
        if (*(long *)(param_1 + 0xe) == *(long *)(param_1 + 0x10)) {
LAB_001015fa:
          puVar15 = puVar11;
          if (0x40 < param_1[0x12]) goto LAB_00101604;
        }
LAB_00101240:
        if (0xff < (int)uVar23) {
          if (0x117 < (int)uVar23) {
            if ((int)uVar23 < iVar7 + 0x118) {
              lVar13 = *plVar18;
              puVar15 = local_98;
              if (local_98 < puVar11) {
                do {
                  puVar12 = (ulong *)((long)puVar15 + 4);
                  *(uint *)(lVar13 + (long)(int)((uint)*puVar15 * 0x1e35a7bd >>
                                                ((byte)(int)plVar18[1] & 0x1f)) * 4) =
                       (uint)*puVar15;
                  puVar15 = puVar12;
                } while (puVar12 < puVar11);
                local_98 = (ulong *)((long)local_98 +
                                    ((long)puVar11 + (-1 - (long)local_98) & 0xfffffffffffffffcU) +
                                    4);
              }
              *(uint *)puVar11 = *(uint *)(lVar13 + (long)(int)(uVar23 - 0x118) * 4);
              goto LAB_0010103e;
            }
            goto LAB_00101114;
          }
          uVar19 = uVar23 - 0xff;
          if (3 < (int)(uVar23 - 0x100)) {
            iVar9 = VP8LReadBits(piVar1);
            uVar10 = *(ulong *)(param_1 + 10);
            uVar19 = ((uVar23 - 0x100 & 1) + 2 << ((byte)((int)(uVar23 - 0x102) >> 1) & 0x1f)) + 1 +
                     iVar9;
          }
          iVar9 = param_1[0x12];
          pbVar17 = (byte *)(plVar14[4] + (uVar10 >> ((byte)iVar9 & 0x3f) & 0xff) * 4);
          bVar8 = *pbVar17;
          if (0 < (int)(bVar8 - 8)) {
            iVar9 = iVar9 + 8;
            pbVar17 = pbVar17 + ((ulong)((1 << ((byte)(bVar8 - 8) & 0x1f)) - 1U &
                                        (uint)(uVar10 >> ((byte)iVar9 & 0x3f))) +
                                (ulong)*(ushort *)(pbVar17 + 2)) * 4;
            bVar8 = *pbVar17;
          }
          uVar3 = *(ushort *)(pbVar17 + 2);
          uVar23 = (uint)uVar3;
          param_1[0x12] = iVar9 + (uint)bVar8;
          if (0x1f < (int)(iVar9 + (uint)bVar8)) {
            VP8LDoFillBitWindow(piVar1);
          }
          if (uVar3 < 4) {
LAB_001016f0:
            iVar9 = (8 - ((byte)kCodeToPlane[(int)uVar23] & 0xf)) +
                    ((int)(uint)(byte)kCodeToPlane[(int)uVar23] >> 4) * param_3;
            if (iVar9 < 1) {
              iVar9 = 1;
            }
          }
          else {
            iVar9 = VP8LReadBits(piVar1);
            uVar23 = ((uVar3 & 1) + 2 << ((byte)((int)(uVar3 - 2) >> 1) & 0x1f)) + iVar9;
            iVar9 = uVar23 - 0x77;
            if ((int)(uVar23 + 1) < 0x79) goto LAB_001016f0;
          }
          if (param_1[0x13] != 0) goto LAB_00101102;
          lVar13 = *(long *)(param_1 + 0x10);
          if ((lVar13 == *(long *)(param_1 + 0xe)) && (0x40 < param_1[0x12])) goto LAB_0010119f;
          if (((long)puVar11 - param_2 >> 2 < (long)iVar9) ||
             ((param_2 + (long)(param_4 * param_3) * 4) - (long)puVar11 >> 2 < (long)(int)uVar19))
          goto LAB_00101114;
          __n = (long)(int)uVar19 * 4;
          puVar15 = (ulong *)((long)puVar11 + (long)iVar9 * -4);
          if ((iVar9 < 3) && (3 < (int)uVar19)) {
            if (((ulong)puVar11 & 3) == 0) {
              if (iVar9 == 1) {
                uVar10 = CONCAT44((uint)*puVar15,(uint)*puVar15);
              }
              else {
                uVar10 = *puVar15;
              }
              uVar23 = uVar19;
              local_58 = puVar11;
              if (((ulong)puVar11 & 4) != 0) {
                uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
                *(uint *)puVar11 = (uint)*puVar15;
                puVar15 = (ulong *)((long)puVar15 + 4);
                uVar23 = uVar19 - 1;
                local_58 = (ulong *)((long)puVar11 + 4);
              }
              puVar12 = local_58;
              if (((int)uVar23 >> 1 & 1U) == 0) goto LAB_00101440;
              *local_58 = uVar10;
              for (puVar12 = local_58 + 1; local_58 + ((int)uVar23 >> 1) != puVar12;
                  puVar12 = puVar12 + 2) {
LAB_00101440:
                *puVar12 = uVar10;
                puVar12[1] = uVar10;
              }
              if ((uVar23 & 1) != 0) {
                *(uint *)((long)local_58 + (long)(int)(uVar23 & 0xfffffffe) * 4) =
                     *(uint *)((long)puVar15 + (long)(int)(uVar23 & 0xfffffffe) * 4);
              }
            }
            else {
LAB_001019c8:
              lVar13 = 0;
              do {
                *(uint *)((long)puVar11 + lVar13 * 4) = *(uint *)((long)puVar15 + lVar13 * 4);
                lVar13 = lVar13 + 1;
              } while ((int)lVar13 < (int)uVar19);
            }
          }
          else {
            if (iVar9 < (int)uVar19) goto LAB_001019c8;
            memcpy(puVar11,puVar15,__n);
          }
          uVar10 = (ulong)(uVar21 + uVar19);
          puVar15 = (ulong *)((long)puVar11 + __n);
          if (param_3 <= (int)(uVar21 + uVar19)) {
            do {
              uVar21 = (int)uVar22 + 1;
              uVar22 = (ulong)uVar21;
              uVar23 = (int)uVar10 - param_3;
              uVar10 = (ulong)uVar23;
              if ((((int)uVar21 <= param_5) && (param_6 != (code *)0x0)) && ((uVar21 & 0xf) == 0)) {
                (*param_6)(param_1,uVar22);
              }
            } while (param_3 <= (int)uVar23);
          }
          if ((uVar6 & (uint)uVar10) != 0) {
            lVar13 = 0;
            if (param_1[0x31] != 0) {
              bVar8 = (byte)param_1[0x31];
              lVar13 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                                     (long)(((int)uVar22 >> (bVar8 & 0x1f)) * param_1[0x32] +
                                           ((int)(uint)uVar10 >> (bVar8 & 0x1f))) * 4) * 0x238;
            }
            plVar14 = (long *)(lVar13 + *(long *)(param_1 + 0x38));
          }
          if ((plVar18 != (long *)0x0) && (local_98 < puVar15)) {
            lVar13 = *plVar18;
            puVar11 = local_98;
            do {
              uVar16 = *puVar11;
              puVar11 = (ulong *)((long)puVar11 + 4);
              *(uint *)(lVar13 + (long)(int)((uint)uVar16 * 0x1e35a7bd >>
                                            ((byte)(int)plVar18[1] & 0x1f)) * 4) = (uint)uVar16;
            } while (puVar11 < puVar15);
            local_98 = (ulong *)((long)local_98 +
                                ((long)puVar15 + (-1 - (long)local_98) & 0xfffffffffffffffcU) + 4);
          }
          goto LAB_001011f3;
        }
        if ((int)plVar14[5] != 0) {
          *(uint *)puVar11 = *(uint *)((long)plVar14 + 0x2c) | uVar23 << 8;
          goto LAB_0010103e;
        }
        iVar9 = param_1[0x12];
        pbVar17 = (byte *)(plVar14[1] + (uVar10 >> ((byte)iVar9 & 0x3f) & 0xff) * 4);
        bVar8 = *pbVar17;
        if (0 < (int)(bVar8 - 8)) {
          iVar9 = iVar9 + 8;
          pbVar17 = pbVar17 + ((ulong)((1 << ((byte)(bVar8 - 8) & 0x1f)) - 1U &
                                      (uint)(uVar10 >> ((byte)iVar9 & 0x3f))) +
                              (ulong)*(ushort *)(pbVar17 + 2)) * 4;
          bVar8 = *pbVar17;
        }
        uVar3 = *(ushort *)(pbVar17 + 2);
        iVar9 = iVar9 + (uint)bVar8;
        param_1[0x12] = iVar9;
        if (0x1f < iVar9) {
          VP8LDoFillBitWindow(piVar1);
          uVar10 = *(ulong *)(param_1 + 10);
          iVar9 = param_1[0x12];
        }
        pbVar17 = (byte *)(plVar14[2] + (uVar10 >> ((byte)iVar9 & 0x3f) & 0xff) * 4);
        bVar8 = *pbVar17;
        if (0 < (int)(bVar8 - 8)) {
          iVar9 = iVar9 + 8;
          pbVar17 = pbVar17 + ((ulong)((1 << ((byte)(bVar8 - 8) & 0x1f)) - 1U &
                                      (uint)(uVar10 >> ((byte)iVar9 & 0x3f))) +
                              (ulong)*(ushort *)(pbVar17 + 2)) * 4;
          bVar8 = *pbVar17;
        }
        iVar9 = iVar9 + (uint)bVar8;
        uVar4 = *(ushort *)(pbVar17 + 2);
        pbVar17 = (byte *)(plVar14[3] + (uVar10 >> ((byte)iVar9 & 0x3f) & 0xff) * 4);
        bVar8 = *pbVar17;
        if (0 < (int)(bVar8 - 8)) {
          iVar9 = iVar9 + 8;
          pbVar17 = pbVar17 + ((ulong)((1 << ((byte)(bVar8 - 8) & 0x1f)) - 1U &
                                      (uint)(uVar10 >> ((byte)iVar9 & 0x3f))) +
                              (ulong)*(ushort *)(pbVar17 + 2)) * 4;
          bVar8 = *pbVar17;
        }
        uVar5 = *(ushort *)(pbVar17 + 2);
        param_1[0x12] = iVar9 + (uint)bVar8;
        if (param_1[0x13] != 0) goto LAB_00101102;
        lVar13 = *(long *)(param_1 + 0x10);
        if ((lVar13 == *(long *)(param_1 + 0xe)) && (0x40 < (int)(iVar9 + (uint)bVar8)))
        goto LAB_0010119f;
        local_58._0_4_ = (uint)uVar3;
        *(uint *)puVar11 = (uint)uVar5 << 0x18 | (uint)local_58 << 0x10 | uVar23 << 8 | (uint)uVar4;
      }
      else {
        uVar16 = (ulong)((uint)uVar16 & 0x3f);
        uVar23 = *(uint *)((long)plVar14 + (uVar16 + 6) * 8 + 0xc);
        iVar9 = iVar9 + (int)plVar14[uVar16 + 7];
        if ((int)plVar14[uVar16 + 7] < 0x100) {
          param_1[0x12] = iVar9;
          *(uint *)puVar11 = uVar23;
          if (param_1[0x13] != 0) goto LAB_00101102;
          lVar13 = *(long *)(param_1 + 0xe);
          if ((lVar13 == *(long *)(param_1 + 0x10)) && (0x40 < param_1[0x12])) goto LAB_0010119f;
        }
        else {
          iVar9 = iVar9 + -0x100;
          param_1[0x12] = iVar9;
          if (param_1[0x13] != 0) goto LAB_00101102;
          lVar13 = *(long *)(param_1 + 0xe);
          if (lVar13 != *(long *)(param_1 + 0x10)) {
            if (uVar23 != 0) goto LAB_00101240;
            goto LAB_0010103e;
          }
          if (0x40 < iVar9) goto LAB_0010119f;
          if (uVar23 != 0) goto LAB_001015fa;
        }
      }
    }
    else {
      *(uint *)puVar11 = *(uint *)((long)plVar14 + 0x2c);
    }
LAB_0010103e:
    uVar10 = (ulong)(uVar21 + 1);
    puVar15 = (ulong *)((long)puVar11 + 4);
    if (param_3 <= (int)(uVar21 + 1)) {
      uVar21 = iVar20 + 1;
      uVar22 = (ulong)uVar21;
      if (((param_6 != (code *)0x0) && ((int)uVar21 <= param_5)) && ((uVar21 & 0xf) == 0)) {
        (*param_6)(param_1,uVar22);
      }
      if ((plVar18 == (long *)0x0) || (puVar15 <= local_98)) {
        uVar10 = 0;
      }
      else {
        lVar13 = *plVar18;
        puVar12 = local_98;
        do {
          uVar10 = *puVar12;
          puVar12 = (ulong *)((long)puVar12 + 4);
          *(uint *)(lVar13 + (long)(int)((uint)uVar10 * 0x1e35a7bd >> ((byte)(int)plVar18[1] & 0x1f)
                                        ) * 4) = (uint)uVar10;
        } while (puVar12 < puVar15);
        uVar10 = 0;
        local_98 = (ulong *)((long)local_98 +
                            ((long)puVar11 + (3 - (long)local_98) & 0xfffffffffffffffcU) + 4);
      }
    }
LAB_001011f3:
    iVar20 = (int)uVar22;
    puVar11 = puVar15;
    if (puVar2 <= puVar15) goto LAB_00101604;
    goto LAB_00100f6e;
  }
  iVar7 = param_1[0x13];
LAB_00101193:
  puVar11 = local_98;
  if (iVar7 == 0) {
    lVar13 = *(long *)(param_1 + 0x10);
LAB_0010119f:
    local_98 = puVar11;
    if ((lVar13 != *(long *)(param_1 + 0xe)) || (puVar11 = local_98, param_1[0x12] < 0x41))
    goto LAB_001011a9;
  }
LAB_00101102:
  param_1[0x13] = 1;
  if (param_1[0x14] == 0) {
LAB_00101114:
    if ((*param_1 != 0) && (*param_1 != 5)) {
      return 0;
    }
    *param_1 = 3;
    return 0;
  }
  local_98 = puVar11;
  if (puVar11 < puVar2) {
    *param_1 = 5;
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
    param_1[0x24] = param_1[0x20];
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
    if (param_1[0x26] < 1) {
      return 1;
    }
    VP8LColorCacheCopy(param_1 + 0x2c,param_1 + 0x28);
    return 1;
  }
LAB_001011a9:
  if (param_6 != (code *)0x0) {
    if (iVar20 <= param_5) {
      param_5 = iVar20;
    }
    (*param_6)(param_1,param_5);
  }
  *param_1 = 0;
  param_1[0x24] = (int)((long)local_98 - param_2 >> 2);
  return 1;
LAB_00101604:
  iVar7 = param_1[0x13];
  local_98 = puVar15;
  goto LAB_00101193;
}



bool VP8LCheckSignature(char *param_1,ulong param_2)

{
  if ((4 < param_2) && (*param_1 == '/')) {
    return (byte)param_1[4] >> 5 == 0;
  }
  return false;
}



undefined8
VP8LGetInfo(char *param_1,ulong param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if ((param_1 == (char *)0x0) || (param_2 < 5)) {
    uVar1 = 0;
  }
  else if ((*param_1 == '/') && ((byte)param_1[4] >> 5 == 0)) {
    VP8LInitBitReader(local_48,param_1,param_2);
    uVar1 = ReadImageInfo(local_48,&local_54,&local_50,&local_4c);
    if ((int)uVar1 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_54;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_50;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = local_4c;
      }
      uVar1 = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ReadHuffmanCodesHelper
          (int param_1,int param_2,int param_3,int *param_4,int *param_5,long param_6,long *param_7)

{
  long *plVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int local_68;
  int local_64;
  long local_50;
  
  iVar17 = 0x118;
  if (0 < param_1) {
    iVar17 = (1 << ((byte)param_1 & 0x1f)) + 0x118;
  }
  uVar8 = *(ushort *)(kTableSize + (long)param_1 * 2);
  if (((param_4 == (int *)0x0) && (param_2 != param_3)) || (param_3 < param_2)) {
    WebPSafeFree(0);
  }
  else {
    piVar12 = (int *)WebPSafeCalloc((long)iVar17,4);
    lVar13 = VP8LHtreeGroupsNew(param_2);
    *param_7 = lVar13;
    if (((lVar13 != 0) && (piVar12 != (int *)0x0)) &&
       (iVar17 = VP8LHuffmanTablesAllocate((uint)uVar8 * param_2,param_6), iVar17 != 0)) {
      if (0 < param_3) {
        iVar17 = 1 << ((byte)param_1 & 0x1f);
        local_50 = 0;
        piVar15 = param_4;
        do {
          if (param_4 == (int *)0x0) {
            lVar13 = *param_7;
            lVar14 = local_50;
          }
          else {
            while( true ) {
              if (*piVar15 != -1) break;
              lVar13 = 0;
              do {
                while (((int)lVar13 == 0 && (0 < param_1))) {
                  iVar10 = ReadHuffmanCode((uint)(ushort)(&kAlphabetSize)[lVar13] + iVar17,param_5,
                                           piVar12,0);
                  if (iVar10 == 0) goto LAB_00101da5;
                  lVar13 = 1;
                }
                iVar10 = ReadHuffmanCode((&kAlphabetSize)[lVar13],param_5,piVar12,0);
                if (iVar10 == 0) goto LAB_00101da5;
                lVar13 = lVar13 + 1;
              } while (lVar13 != 5);
              local_50 = local_50 + 0x238;
              piVar15 = piVar15 + 1;
              if (param_4 + param_3 == piVar15) goto LAB_00101e5c;
            }
            lVar13 = *param_7;
            lVar14 = (long)*piVar15 * 0x238;
          }
          local_64 = 0;
          lVar19 = 0;
          plVar1 = (long *)(lVar13 + lVar14);
          uVar11 = 1;
          local_68 = 0;
          while( true ) {
            uVar8 = (&kAlphabetSize)[lVar19];
            uVar18 = (uint)uVar8;
            if ((int)lVar19 == 0) {
              uVar18 = (uint)uVar8;
              if (0 < param_1) {
                uVar18 = iVar17 + (uint)uVar8;
              }
            }
            iVar10 = ReadHuffmanCode(uVar18,param_5,piVar12,param_6);
            lVar13 = *(long *)(param_6 + 0x20);
            pbVar9 = *(byte **)(lVar13 + 8);
            plVar1[lVar19] = (long)pbVar9;
            if (iVar10 == 0) goto LAB_00101da5;
            if ((uVar11 != 0) && ((&kLiteralMap)[lVar19] == '\x01')) {
              uVar11 = (uint)(*pbVar9 == 0);
            }
            local_68 = local_68 + (uint)*pbVar9;
            *(byte **)(lVar13 + 8) = pbVar9 + (long)iVar10 * 4;
            if (lVar19 == 4) break;
            iVar10 = *piVar12;
            if (1 < (int)uVar18) {
              piVar16 = piVar12 + 1;
              piVar3 = piVar12 + (ulong)(uVar18 - 2) + 2;
              if (((int)piVar3 - (int)piVar16 & 4U) != 0) {
                if (iVar10 < piVar12[1]) {
                  iVar10 = piVar12[1];
                }
                piVar16 = piVar12 + 2;
                if (piVar16 == piVar3) goto LAB_00101d88;
              }
              do {
                if (iVar10 < *piVar16) {
                  iVar10 = *piVar16;
                }
                if (iVar10 < piVar16[1]) {
                  iVar10 = piVar16[1];
                }
                piVar16 = piVar16 + 2;
              } while (piVar16 != piVar3);
            }
LAB_00101d88:
            local_64 = local_64 + iVar10;
            lVar19 = lVar19 + 1;
          }
          *(uint *)(plVar1 + 5) = uVar11;
          *(undefined4 *)(plVar1 + 6) = 0;
          if (uVar11 == 0) {
LAB_00101e30:
            if (5 < local_64) goto LAB_00101e3b;
            *(undefined4 *)((long)plVar1 + 0x34) = 1;
            lVar13 = *plVar1;
            lVar14 = 0;
            do {
              uVar8 = *(ushort *)(lVar13 + 2 + lVar14 * 4);
              uVar11 = (uint)uVar8;
              bVar5 = *(byte *)(lVar13 + lVar14 * 4);
              if (uVar8 < 0x100) {
                uVar11 = (uint)lVar14 >> (bVar5 & 0x1f);
                pbVar9 = (byte *)(plVar1[1] + (ulong)uVar11 * 4);
                bVar6 = *pbVar9;
                uVar11 = uVar11 >> (bVar6 & 0x1f);
                pbVar2 = (byte *)(plVar1[2] + (ulong)uVar11 * 4);
                bVar7 = *pbVar2;
                pbVar4 = (byte *)(plVar1[3] + (ulong)(uVar11 >> (bVar7 & 0x1f)) * 4);
                iVar10 = (uint)*pbVar4 + (uint)bVar6 + (uint)bVar5 + (uint)bVar7;
                uVar11 = (uint)*(ushort *)(pbVar4 + 2) << 0x18 |
                         (uint)*(ushort *)(pbVar9 + 2) << 0x10 | (uint)uVar8 << 8 |
                         (uint)*(ushort *)(pbVar2 + 2);
              }
              else {
                iVar10 = bVar5 + 0x100;
              }
              *(uint *)((long)plVar1 + lVar14 * 8 + 0x3c) = uVar11;
              *(int *)(plVar1 + lVar14 + 7) = iVar10;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0x40);
          }
          else {
            uVar11 = (uint)*(ushort *)(plVar1[3] + 2) << 0x18 |
                     (uint)*(ushort *)(plVar1[1] + 2) << 0x10 | (uint)*(ushort *)(plVar1[2] + 2);
            *(uint *)((long)plVar1 + 0x2c) = uVar11;
            if ((local_68 != 0) || (uVar8 = *(ushort *)(*plVar1 + 2), 0xff < uVar8))
            goto LAB_00101e30;
            *(undefined4 *)(plVar1 + 6) = 1;
            *(uint *)((long)plVar1 + 0x2c) = uVar11 | (uint)uVar8 << 8;
LAB_00101e3b:
            *(undefined4 *)((long)plVar1 + 0x34) = 0;
          }
          local_50 = local_50 + 0x238;
          piVar15 = piVar15 + 1;
        } while (param_4 + param_3 != piVar15);
      }
LAB_00101e5c:
      WebPSafeFree(piVar12);
      return 1;
    }
    if ((*param_5 == 0) || (*param_5 == 5)) {
      *param_5 = 1;
    }
LAB_00101da5:
    WebPSafeFree(piVar12);
  }
  VP8LHuffmanTablesDeallocate(param_6);
  VP8LHtreeGroupsFree(*param_7);
  *param_7 = 0;
  return 0;
}



undefined8 DecodeImageStream(uint param_1,int param_2,uint param_3,int *param_4,long *param_5)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  void *__s;
  byte bVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  byte bVar22;
  undefined8 uStack_90;
  int *local_88;
  uint *local_50;
  undefined8 local_48;
  long local_40;
  
  bVar22 = 0;
  piVar1 = param_4 + 10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uStack_90 = 0x102375;
    iVar5 = VP8LReadBits(piVar1,1);
    if (iVar5 == 0) {
      puVar11 = (undefined8 *)0x0;
      local_50 = (uint *)0x0;
      uVar6 = 1;
      local_48 = 0;
      uVar15 = 1;
      iVar5 = 0;
    }
    else {
      uStack_90 = 0x102575;
      iVar5 = VP8LReadBits(piVar1,4);
      if (10 < iVar5 - 1U) goto LAB_00102130;
      puVar11 = (undefined8 *)0x0;
      uVar15 = 1;
      local_50 = (uint *)0x0;
      uVar6 = 1;
      local_48 = 0;
    }
LAB_001023b0:
    iVar20 = param_4[0x13];
joined_r0x001023b5:
    if (iVar20 != 0) {
LAB_00102530:
      WebPSafeFree(puVar11);
LAB_00102538:
      local_88 = param_4 + 0x3a;
      WebPSafeFree(local_50);
      VP8LHuffmanTablesDeallocate(local_88);
      VP8LHtreeGroupsFree(local_48);
      iVar5 = *param_4;
      if (iVar5 != 0) goto LAB_0010213a;
      goto LAB_00102358;
    }
    local_88 = param_4 + 0x3a;
    iVar20 = ReadHuffmanCodesHelper(iVar5,uVar15,uVar6,puVar11,param_4,local_88);
    if (iVar20 == 0) goto LAB_00102530;
    *(uint **)(param_4 + 0x34) = local_50;
    param_4[0x36] = uVar15;
    *(undefined8 *)(param_4 + 0x38) = local_48;
    WebPSafeFree(puVar11,uVar15,&local_48,uStack_90);
    if (iVar5 != 0) {
      param_4[0x26] = 1 << ((byte)iVar5 & 0x1f);
      iVar5 = VP8LColorCacheInit(param_4 + 0x28);
      if (iVar5 != 0) goto LAB_00102435;
LAB_00102787:
      if ((*param_4 == 0) || (*param_4 == 5)) {
        *param_4 = 1;
      }
      goto LAB_00102143;
    }
    param_4[0x26] = 0;
LAB_00102435:
    param_4[0x21] = param_1;
    param_4[0x22] = param_2;
    bVar22 = (byte)param_4[0x31];
    iVar5 = (1 << (bVar22 & 0x1f)) + -1;
    param_4[0x32] = iVar5 + param_1 >> (bVar22 & 0x1f);
    if (param_4[0x31] == 0) {
      iVar5 = -1;
    }
    param_4[0x30] = iVar5;
    if (param_3 != 0) {
      param_4[1] = 1;
      if (param_5 != (long *)0x0) {
        *param_5 = 0;
      }
      param_4[0x24] = 0;
LAB_00102496:
      uVar10 = 1;
      goto LAB_0010215a;
    }
    lVar17 = WebPSafeMalloc((long)(int)param_1 * (long)param_2,4);
    if (lVar17 == 0) goto LAB_00102787;
    iVar5 = DecodeImageData(param_4,lVar17,param_1,param_2,param_2,0);
    if ((iVar5 != 0) && (param_4[0x13] == 0)) {
      if (param_5 != (long *)0x0) {
        *param_5 = lVar17;
      }
      param_4[0x24] = 0;
      ClearMetadata(param_4 + 0x26);
      goto LAB_00102496;
    }
  }
  else {
LAB_0010203a:
    do {
      iVar5 = VP8LReadBits(piVar1,1);
      if (iVar5 == 0) {
        iVar5 = VP8LReadBits(piVar1,1);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = VP8LReadBits(piVar1,4);
          if (10 < iVar5 - 1U) break;
        }
        local_50 = (uint *)0x0;
        local_48 = 0;
        uStack_90 = 0x102512;
        iVar20 = VP8LReadBits(piVar1,1);
        uVar6 = param_3;
        if (iVar20 == 0) {
          iVar20 = param_4[0x13];
          puVar11 = (undefined8 *)0x0;
          uVar15 = param_3;
          goto joined_r0x001023b5;
        }
        iVar20 = VP8LReadBits(piVar1,3);
        bVar13 = (byte)(iVar20 + 2);
        iVar7 = 1 << (bVar13 & 0x1f);
        uVar15 = (uint)(iVar7 + -1 + param_2) >> (bVar13 & 0x1f);
        uVar18 = iVar7 + -1 + param_1 >> (bVar13 & 0x1f);
        uStack_90 = 0x1025fa;
        iVar7 = DecodeImageStream(uVar18,uVar15,0,param_4,&local_50);
        if (iVar7 == 0) goto LAB_001027d3;
        iVar7 = uVar18 * uVar15;
        param_4[0x31] = iVar20 + 2;
        if (0 < iVar7) {
          puVar12 = local_50;
          do {
            uVar3 = *(ushort *)((long)puVar12 + 1);
            *puVar12 = (uint)uVar3;
            if ((int)uVar6 <= (int)(uint)uVar3) {
              uVar6 = uVar3 + 1;
            }
            puVar12 = puVar12 + 1;
          } while (puVar12 != local_50 + iVar7);
          if (1000 < (int)uVar6) {
            __s = (void *)WebPSafeMalloc((long)(int)uVar6,4);
            if (__s != (void *)0x0) {
              uStack_90 = 0x102836;
              puVar11 = (undefined8 *)memset(__s,0xff,(long)(int)uVar6 << 2);
LAB_001026c2:
              puVar12 = local_50;
              uVar18 = 0;
              do {
                puVar2 = (uint *)((long)puVar11 + (ulong)*puVar12 * 4);
                uVar16 = *puVar2;
                uVar15 = uVar18;
                if (uVar16 == 0xffffffff) {
                  *puVar2 = uVar18;
                  uVar15 = uVar18 + 1;
                  uVar16 = uVar18;
                }
                *puVar12 = uVar16;
                puVar12 = puVar12 + 1;
                uVar18 = uVar15;
              } while (local_50 + iVar7 != puVar12);
              goto LAB_001023b0;
            }
LAB_001027c2:
            if ((*param_4 == 0) || (*param_4 == 5)) {
              *param_4 = 1;
            }
LAB_001027d3:
            WebPSafeFree(0);
            goto LAB_00102538;
          }
        }
        if ((int)(param_2 * param_1) < (int)uVar6) {
          uStack_90 = 0x10267f;
          puVar11 = (undefined8 *)WebPSafeMalloc((long)(int)uVar6);
          if (puVar11 == (undefined8 *)0x0) goto LAB_001027c2;
          uVar14 = (long)(int)uVar6 * 4;
          uVar15 = (uint)uVar14;
          if (uVar15 < 8) {
            if ((uVar14 & 4) == 0) {
              if (uVar15 != 0) {
                *(undefined1 *)puVar11 = 0xff;
              }
            }
            else {
              *(undefined4 *)puVar11 = 0xffffffff;
              *(undefined4 *)((long)puVar11 + ((uVar14 & 0xffffffff) - 4)) = 0xffffffff;
            }
          }
          else {
            *puVar11 = 0xffffffffffffffff;
            *(undefined8 *)((long)puVar11 + ((uVar14 & 0xffffffff) - 8)) = 0xffffffffffffffff;
            puVar19 = (undefined8 *)((ulong)(puVar11 + 1) & 0xfffffffffffffff8);
            for (uVar14 = (ulong)(((int)puVar11 -
                                  (int)(undefined8 *)((ulong)(puVar11 + 1) & 0xfffffffffffffff8)) +
                                  uVar15 >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar19 = 0xffffffffffffffff;
              puVar19 = puVar19 + (ulong)bVar22 * -2 + 1;
            }
          }
          uVar15 = 0;
          if (0 < iVar7) goto LAB_001026c2;
        }
        else {
          puVar11 = (undefined8 *)0x0;
          uVar15 = uVar6;
        }
        goto LAB_001023b0;
      }
      lVar17 = (long)param_4[0x44];
      uVar6 = VP8LReadBits(piVar1,2);
      uVar15 = 1 << ((byte)uVar6 & 0x1f);
      if ((param_4[0x5e] & uVar15) != 0) break;
      param_4[0x5e] = param_4[0x5e] | uVar15;
      param_4[lVar17 * 6 + 0x46] = uVar6;
      param_4[lVar17 * 6 + 0x48] = param_1;
      param_4[lVar17 * 6 + 0x49] = param_2;
      (param_4 + lVar17 * 6 + 0x4a)[0] = 0;
      (param_4 + lVar17 * 6 + 0x4a)[1] = 0;
      param_4[0x44] = param_4[0x44] + 1;
      if (uVar6 < 2) {
        iVar5 = VP8LReadBits(piVar1,3);
        bVar13 = (byte)(iVar5 + 2);
        iVar20 = 1 << (bVar13 & 0x1f);
        param_4[lVar17 * 6 + 0x47] = iVar5 + 2;
        iVar20 = DecodeImageStream((uint)(iVar20 + -1 + param_4[lVar17 * 6 + 0x48]) >>
                                   (bVar13 & 0x1f),
                                   (uint)(iVar20 + -1 + param_4[lVar17 * 6 + 0x49]) >>
                                   (bVar13 & 0x1f),0,param_4,param_4 + lVar17 * 6 + 0x4a);
      }
      else {
        if (uVar6 != 3) goto LAB_0010203a;
        iVar20 = VP8LReadBits(piVar1,8);
        local_88._0_1_ = 0;
        iVar5 = iVar20 + 1;
        if (iVar5 < 0x11) {
          if (iVar5 < 5) {
            bVar21 = iVar20 + -2 < 0;
            iVar20 = (uint)(SBORROW4(iVar5,3) != bVar21) * 4 + 4;
            local_88._0_1_ = (SBORROW4(iVar5,3) != bVar21) + 2;
            uVar6 = (iVar5 < 3) + 2;
          }
          else {
            iVar20 = 2;
            local_88._0_1_ = 1;
            uVar6 = param_3;
          }
        }
        else {
          iVar20 = 1;
          uVar6 = 0;
        }
        param_4[lVar17 * 6 + 0x47] = uVar6;
        param_1 = (uint)(iVar20 + -1 + param_4[lVar17 * 6 + 0x48]) >> (sbyte)local_88;
        iVar20 = DecodeImageStream(iVar5,1,0,param_4,param_4 + lVar17 * 6 + 0x4a);
        if (iVar20 == 0) break;
        bVar13 = (byte)(8 >> ((byte)param_4[lVar17 * 6 + 0x47] & 0x1f));
        puVar8 = (undefined4 *)WebPSafeMalloc((long)(1 << (bVar13 & 0x1f)),4);
        if (puVar8 == (undefined4 *)0x0) {
          if ((*param_4 == 0) || (*param_4 == 5)) {
            *param_4 = 1;
          }
          break;
        }
        puVar4 = *(undefined4 **)(param_4 + lVar17 * 6 + 0x4a);
        iVar5 = iVar5 * 4;
        *puVar8 = *puVar4;
        if (iVar5 < 5) {
          iVar5 = 4;
        }
        else {
          lVar9 = 4;
          do {
            *(char *)((long)puVar8 + lVar9) =
                 *(char *)((long)puVar8 + lVar9 + -4) + *(char *)((long)puVar4 + lVar9);
            lVar9 = lVar9 + 1;
          } while (iVar5 - (int)lVar9 != 0 && (int)lVar9 <= iVar5);
        }
        iVar7 = 4 << (bVar13 & 0x1f);
        if (iVar5 < iVar7) {
          memset((void *)((long)puVar8 + (long)iVar5),0,(ulong)(uint)((iVar7 + -1) - iVar5) + 1);
        }
        WebPSafeFree(*(undefined8 *)(param_4 + lVar17 * 6 + 0x4a));
        *(undefined4 **)(param_4 + lVar17 * 6 + 0x4a) = puVar8;
      }
    } while (iVar20 != 0);
LAB_00102130:
    iVar5 = *param_4;
    if (iVar5 == 0) {
LAB_00102358:
      *param_4 = 3;
    }
    else {
LAB_0010213a:
      if (iVar5 == 5) goto LAB_00102358;
    }
LAB_00102143:
    lVar17 = 0;
  }
  WebPSafeFree(lVar17);
  ClearMetadata(param_4 + 0x26);
  uVar10 = 0;
LAB_0010215a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * VP8LNew(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)WebPSafeCalloc(1,400);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC0;
    VP8LDspInit();
  }
  return puVar1;
}



void VP8LClear(long param_1)

{
  if (param_1 != 0) {
    VP8LClear_part_0();
    return;
  }
  return;
}



void VP8LDelete(long param_1)

{
  if (param_1 != 0) {
    VP8LClear_part_0();
    WebPSafeFree(param_1);
    return;
  }
  return;
}



undefined8 VP8LDecodeAlphaHeader(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  piVar4 = (int *)WebPSafeCalloc(1,400);
  if (piVar4 != (int *)0x0) {
    *(undefined8 *)piVar4 = _LC0;
    VP8LDspInit();
    uVar2 = *param_1;
    *(undefined8 **)(piVar4 + 2) = param_1 + 4;
    *(undefined8 *)(piVar4 + 0x21) = uVar2;
    param_1[0xb] = param_1;
    param_1[4] = uVar2;
    *piVar4 = 0;
    VP8LInitBitReader(piVar4 + 10,param_2,param_3);
    iVar3 = DecodeImageStream(*(undefined4 *)param_1,*(undefined4 *)((long)param_1 + 4),1,piVar4,0);
    if (iVar3 != 0) {
      if (((piVar4[0x44] == 1) && (piVar4[0x46] == 3)) && (piVar4[0x26] < 1)) {
        if (0 < piVar4[0x36]) {
          puVar6 = (undefined8 *)(*(long *)(piVar4 + 0x38) + 8);
          puVar7 = puVar6 + (long)piVar4[0x36] * 0x47;
          do {
            if (((*(char *)*puVar6 != '\0') || (*(char *)puVar6[1] != '\0')) ||
               (*(char *)puVar6[2] != '\0')) goto LAB_001029c5;
            puVar6 = puVar6 + 0x47;
          } while (puVar7 != puVar6);
        }
        iVar3 = piVar4[0x21];
        iVar1 = piVar4[0x22];
        *(undefined4 *)(param_1 + 0x18) = 1;
        piVar4[8] = 0;
        piVar4[9] = 0;
        lVar5 = WebPSafeMalloc((long)iVar3 * (long)iVar1,1);
        *(long *)(piVar4 + 6) = lVar5;
        if (lVar5 != 0) goto LAB_001029de;
        if ((*piVar4 == 0) || (*piVar4 == 5)) {
          *piVar4 = 1;
        }
      }
      else {
LAB_001029c5:
        *(undefined4 *)(param_1 + 0x18) = 0;
        iVar3 = AllocateInternalBuffers32b(piVar4,*(undefined4 *)param_1);
        if (iVar3 != 0) {
LAB_001029de:
          param_1[3] = piVar4;
          return 1;
        }
      }
    }
    VP8LClear_part_0(piVar4);
    WebPSafeFree(piVar4);
  }
  return 0;
}



undefined8 VP8LDecodeAlphaImageStream(long param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  byte bVar13;
  byte *pbVar14;
  uint *puVar15;
  size_t sVar16;
  ulong uVar17;
  uint *puVar18;
  uint *__dest;
  uint *puVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  int iVar24;
  uint *__src;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  byte bVar29;
  
  bVar29 = 0;
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6[0x23] < param_2) {
    if ((*(int *)(param_1 + 0xc0) == 0) &&
       (WebPInitAlphaProcessing(), *(int *)(param_1 + 0xc0) == 0)) {
      uVar12 = DecodeImageData(piVar6,*(undefined8 *)(piVar6 + 6),piVar6[0x21],piVar6[0x22],param_2,
                               ExtractAlphaRows);
      return uVar12;
    }
    lVar7 = *(long *)(piVar6 + 6);
    iVar20 = piVar6[0x24];
    iVar3 = piVar6[0x21];
    uVar4 = piVar6[0x30];
    uVar17 = (long)iVar20 / (long)iVar3;
    uVar9 = (long)iVar20 % (long)iVar3;
    uVar26 = uVar17 & 0xffffffff;
    iVar11 = (int)uVar17;
    iVar5 = piVar6[0x22];
    iVar10 = param_2 * iVar3;
    if (iVar20 < iVar10) {
      uVar17 = uVar9 & 0xffffffff;
      lVar21 = 0;
      if (piVar6[0x31] != 0) {
        bVar13 = (byte)piVar6[0x31];
        lVar21 = (long)*(int *)(*(long *)(piVar6 + 0x34) +
                               (long)((iVar11 >> (bVar13 & 0x1f)) * piVar6[0x32] +
                                     ((int)uVar9 >> (bVar13 & 0x1f))) * 4) * 0x238;
      }
      plVar22 = (long *)(lVar21 + *(long *)(piVar6 + 0x38));
      if (piVar6[0x13] == 0) {
        piVar1 = piVar6 + 10;
        do {
          uVar25 = (uint)uVar17;
          if ((uVar4 & uVar25) == 0) {
            lVar21 = 0;
            if (piVar6[0x31] != 0) {
              bVar13 = (byte)piVar6[0x31];
              lVar21 = (long)*(int *)(*(long *)(piVar6 + 0x34) +
                                     (long)(((int)uVar26 >> (bVar13 & 0x1f)) * piVar6[0x32] +
                                           ((int)uVar25 >> (bVar13 & 0x1f))) * 4) * 0x238;
            }
            plVar22 = (long *)(lVar21 + *(long *)(piVar6 + 0x38));
          }
          iVar11 = piVar6[0x12];
          if (0x1f < iVar11) {
            VP8LDoFillBitWindow(piVar1);
            iVar11 = piVar6[0x12];
          }
          uVar17 = *(ulong *)(piVar6 + 10);
          pbVar14 = (byte *)(*plVar22 + (uVar17 >> ((byte)iVar11 & 0x3f) & 0xff) * 4);
          bVar13 = *pbVar14;
          if (0 < (int)(bVar13 - 8)) {
            iVar11 = iVar11 + 8;
            pbVar14 = pbVar14 + ((ulong)((1 << ((byte)(bVar13 - 8) & 0x1f)) - 1U &
                                        (uint)(uVar17 >> ((byte)iVar11 & 0x3f))) +
                                (ulong)*(ushort *)(pbVar14 + 2)) * 4;
            bVar13 = *pbVar14;
          }
          uVar2 = *(ushort *)(pbVar14 + 2);
          iVar11 = iVar11 + (uint)bVar13;
          piVar6[0x12] = iVar11;
          if (0xff < uVar2) {
            if (uVar2 < 0x118) {
              if ((int)(uVar2 - 0x100) < 4) {
                iVar27 = uVar2 - 0xff;
              }
              else {
                iVar27 = VP8LReadBits(piVar1);
                uVar17 = *(ulong *)(piVar6 + 10);
                iVar27 = ((uVar2 - 0x100 & 1) + 2 << ((byte)((int)(uVar2 - 0x102) >> 1) & 0x1f)) + 1
                         + iVar27;
                iVar11 = piVar6[0x12];
              }
              pbVar14 = (byte *)(plVar22[4] + (uVar17 >> ((byte)iVar11 & 0x3f) & 0xff) * 4);
              bVar13 = *pbVar14;
              if (0 < (int)(bVar13 - 8)) {
                iVar11 = iVar11 + 8;
                pbVar14 = pbVar14 + ((ulong)((1 << ((byte)(bVar13 - 8) & 0x1f)) - 1U &
                                            (uint)(uVar17 >> ((byte)iVar11 & 0x3f))) +
                                    (ulong)*(ushort *)(pbVar14 + 2)) * 4;
                bVar13 = *pbVar14;
              }
              uVar2 = *(ushort *)(pbVar14 + 2);
              uVar28 = (uint)uVar2;
              piVar6[0x12] = iVar11 + (uint)bVar13;
              if (0x1f < (int)(iVar11 + (uint)bVar13)) {
                VP8LDoFillBitWindow(piVar1);
              }
              if (uVar2 < 4) {
LAB_00103080:
                iVar11 = (8 - ((byte)kCodeToPlane[(int)uVar28] & 0xf)) +
                         ((int)(uint)(byte)kCodeToPlane[(int)uVar28] >> 4) * iVar3;
                if (iVar11 < 1) {
                  iVar11 = 1;
                }
              }
              else {
                iVar11 = VP8LReadBits(piVar1);
                uVar28 = ((uVar2 & 1) + 2 << ((byte)((int)(uVar2 - 2) >> 1) & 0x1f)) + iVar11;
                if ((int)(uVar28 + 1) < 0x79) goto LAB_00103080;
                iVar11 = uVar28 - 0x77;
              }
              if ((iVar11 <= iVar20) && (iVar27 <= iVar5 * iVar3 - iVar20)) {
                __dest = (uint *)(iVar20 + lVar7);
                __src = (uint *)((long)__dest - (long)iVar11);
                if (iVar27 < 8) {
LAB_00103050:
                  sVar16 = 0;
                  if (iVar11 < iVar27) {
                    do {
                      *(byte *)((long)__dest + sVar16) = *(byte *)((long)__src + sVar16);
                      sVar16 = sVar16 + 1;
                    } while (sVar16 != (long)iVar27);
                  }
                  else {
                    memcpy(__dest,__src,(long)iVar27);
                  }
                }
                else {
                  if (iVar11 == 2) {
                    uVar28 = (uint)(ushort)*__src * 0x10001;
                  }
                  else if (iVar11 == 4) {
                    uVar28 = *__src;
                  }
                  else {
                    if (iVar11 != 1) goto LAB_00103050;
                    uVar28 = (uint)(byte)*__src * 0x1010101;
                  }
                  puVar15 = __src;
                  iVar11 = iVar27;
                  if (((ulong)__dest & 3) == 0) {
LAB_00102f52:
                    uVar23 = iVar11 >> 2;
                    puVar15 = __dest;
                    if ((uVar23 & 1) == 0) goto LAB_00102f70;
                    *__dest = uVar28;
                    for (puVar15 = __dest + 1; puVar15 != __dest + (int)uVar23;
                        puVar15 = puVar15 + 2) {
LAB_00102f70:
                      *puVar15 = uVar28;
                      puVar15[1] = uVar28;
                    }
                    iVar24 = uVar23 << 2;
                    puVar18 = __src;
                    puVar19 = __dest;
                  }
                  else {
                    do {
                      puVar19 = (uint *)((long)__dest + (ulong)bVar29 * -2 + 1);
                      puVar18 = (uint *)((long)puVar15 + (ulong)bVar29 * -2 + 1);
                      *(byte *)__dest = (byte)*puVar15;
                      uVar28 = uVar28 >> 8 | uVar28 << 0x18;
                      puVar15 = puVar18;
                      __dest = puVar19;
                    } while (((ulong)puVar19 & 3) != 0);
                    iVar11 = (iVar27 - (int)puVar18) + (int)__src;
                    __src = puVar18;
                    if (0 < iVar11 >> 2) goto LAB_00102f52;
                    iVar24 = 0;
                  }
                  lVar21 = (long)iVar24;
                  while (iVar24 < iVar11) {
                    *(byte *)((long)puVar19 + lVar21) = *(byte *)((long)puVar18 + lVar21);
                    lVar21 = lVar21 + 1;
                    iVar24 = (int)lVar21;
                  }
                }
                uVar25 = uVar25 + iVar27;
                uVar17 = (ulong)uVar25;
                iVar20 = iVar20 + iVar27;
                while (iVar3 <= (int)uVar25) {
                  while( true ) {
                    uVar28 = (int)uVar26 + 1;
                    uVar26 = (ulong)uVar28;
                    uVar25 = (int)uVar17 - iVar3;
                    uVar17 = (ulong)uVar25;
                    if ((param_2 < (int)uVar28) || ((uVar28 & 0xf) != 0)) break;
                    ExtractPalettedAlphaRows(piVar6,uVar26);
                    if ((int)uVar25 < iVar3) goto LAB_00102ff8;
                  }
                }
LAB_00102ff8:
                if ((iVar20 < iVar10) && ((uVar4 & (uint)uVar17) != 0)) {
                  lVar21 = 0;
                  if (piVar6[0x31] != 0) {
                    bVar13 = (byte)piVar6[0x31];
                    lVar21 = (long)*(int *)(*(long *)(piVar6 + 0x34) +
                                           (long)(((int)uVar26 >> (bVar13 & 0x1f)) * piVar6[0x32] +
                                                 ((int)(uint)uVar17 >> (bVar13 & 0x1f))) * 4) *
                             0x238;
                  }
                  plVar22 = (long *)(lVar21 + *(long *)(piVar6 + 0x38));
                }
                goto LAB_00102ca0;
              }
            }
            if ((piVar6[0x13] != 0) ||
               ((*(long *)(piVar6 + 0x10) == *(long *)(piVar6 + 0xe) && (0x40 < piVar6[0x12])))) {
              piVar6[0x13] = 1;
              goto LAB_0010319e;
            }
            iVar20 = 3;
            goto LAB_001031a3;
          }
          lVar21 = (long)iVar20;
          uVar17 = (ulong)(uVar25 + 1);
          iVar20 = iVar20 + 1;
          *(char *)(lVar7 + lVar21) = (char)uVar2;
          if (iVar3 <= (int)(uVar25 + 1)) {
            uVar25 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar25;
            if (((int)uVar25 <= param_2) && ((uVar25 & 0xf) == 0)) {
              ExtractPalettedAlphaRows(piVar6,uVar26);
            }
            uVar17 = 0;
          }
LAB_00102ca0:
          iVar11 = (int)uVar26;
          if (piVar6[0x13] != 0) {
            piVar6[0x13] = 1;
            break;
          }
          bVar8 = true;
          uVar25 = 0;
          if (*(long *)(piVar6 + 0x10) == *(long *)(piVar6 + 0xe)) {
            uVar25 = (uint)(0x40 < piVar6[0x12]);
            bVar8 = piVar6[0x12] < 0x41;
          }
          piVar6[0x13] = uVar25;
          if ((iVar10 <= iVar20) || (!bVar8)) break;
        } while( true );
      }
    }
    if (iVar11 < param_2) {
      param_2 = iVar11;
    }
    ExtractPalettedAlphaRows(piVar6,param_2);
    if (((piVar6[0x13] != 0) ||
        ((*(long *)(piVar6 + 0xe) == *(long *)(piVar6 + 0x10) && (0x40 < piVar6[0x12])))) &&
       (piVar6[0x13] = 1, iVar20 < iVar5 * iVar3)) {
LAB_0010319e:
      iVar20 = 5;
LAB_001031a3:
      if ((*piVar6 != 0) && (*piVar6 != 5)) {
        return 0;
      }
      *piVar6 = iVar20;
      return 0;
    }
    piVar6[0x24] = iVar20;
  }
  return 1;
}



undefined8 VP8LDecodeHeader(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (int *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      if ((*param_1 == 0) || (*param_1 == 5)) {
        *param_1 = 2;
      }
    }
    else {
      *(undefined8 **)(param_1 + 2) = param_2;
      uVar2 = param_2[0xc];
      *param_1 = 0;
      VP8LInitBitReader(param_1 + 10,param_2[0xd],uVar2);
      iVar1 = ReadImageInfo(param_1 + 10,&local_2c,&local_28,local_24);
      if (iVar1 == 0) {
        if ((*param_1 == 0) || (*param_1 == 5)) {
          *param_1 = 3;
          VP8LClear_part_0(param_1);
          goto LAB_00103280;
        }
      }
      else {
        param_1[1] = 2;
        *param_2 = CONCAT44(local_28,local_2c);
        iVar1 = DecodeImageStream(local_2c,local_28,1,param_1,0);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_00103282;
        }
      }
      VP8LClear_part_0(param_1);
    }
  }
LAB_00103280:
  uVar2 = 0;
LAB_00103282:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 VP8LDecodeImage(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 2);
  puVar5 = *(undefined8 **)(puVar4 + 0xe);
  if (param_1[1] == 0) {
LAB_001033e0:
    iVar7 = DecodeImageData(param_1,*(undefined8 *)(param_1 + 6),param_1[0x21],param_1[0x22],
                            puVar4[0x21],ProcessRows);
    if (iVar7 != 0) {
      *(int *)(puVar5 + 4) = param_1[0x25];
      return 1;
    }
  }
  else {
    uVar6 = puVar5[5];
    *(undefined8 *)(param_1 + 4) = *puVar5;
    iVar7 = WebPIoInitFromOptions(uVar6,puVar4,3);
    if (iVar7 == 0) {
      if ((*param_1 == 0) || (*param_1 == 5)) {
        *param_1 = 2;
        VP8LClear_part_0(param_1);
        return 0;
      }
      goto LAB_00103372;
    }
    iVar7 = AllocateInternalBuffers32b(param_1,*puVar4);
    if (iVar7 == 0) goto LAB_00103372;
    if (puVar4[0x22] == 0) {
LAB_001033ad:
      uVar8 = **(uint **)(param_1 + 4);
      if (uVar8 - 7 < 4) {
LAB_001033bb:
        WebPInitAlphaProcessing();
        uVar8 = **(uint **)(param_1 + 4);
      }
      if ((10 < uVar8) &&
         (WebPInitConvertARGBToYUV(), *(long *)(*(long *)(param_1 + 4) + 0x28) != 0)) {
        WebPInitAlphaProcessing();
      }
      if ((((param_1[0x14] == 0) || (param_1[0x26] < 1)) || (*(long *)(param_1 + 0x2c) != 0)) ||
         (iVar7 = VP8LColorCacheInit(param_1 + 0x2c,param_1[0x2b]), iVar7 != 0)) {
        param_1[1] = 0;
        goto LAB_001033e0;
      }
    }
    else {
      uVar1 = puVar4[3];
      iVar7 = puVar4[0x23];
      uVar2 = puVar4[0x24];
      uVar3 = puVar4[4];
      lVar9 = WebPSafeMalloc((long)iVar7 * 0x24 + 0x68,1);
      if (lVar9 != 0) {
        *(long *)(param_1 + 0x60) = lVar9;
        *(long *)(param_1 + 0x62) = lVar9;
        iVar7 = WebPRescalerInit(lVar9,uVar1,uVar3,(long)iVar7 * 0x20 + lVar9 + 0x68,iVar7,uVar2,0,4
                                 ,lVar9 + 0x68);
        if (iVar7 == 0) goto LAB_00103372;
        if (puVar4[0x22] == 0) goto LAB_001033ad;
        goto LAB_001033bb;
      }
    }
    if ((*param_1 == 0) || (*param_1 == 5)) {
      *param_1 = 1;
    }
  }
LAB_00103372:
  VP8LClear_part_0(param_1);
  return 0;
}



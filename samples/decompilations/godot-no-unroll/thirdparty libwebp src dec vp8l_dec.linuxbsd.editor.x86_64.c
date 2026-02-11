
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
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
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
  iVar4 = VP8LReadBits(piVar1);
  memset(param_3,0,(long)param_1 << 2);
  if (iVar4 == 0) {
    local_68 = SUB1612((undefined1  [16])0x0,0);
    pbVar13 = &kCodeLengthCodeOrder;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    uStack_5c = 0;
    auStack_58 = SUB1612((undefined1  [16])0x0,4);
    iVar4 = VP8LReadBits(piVar1,4);
    if (0 < iVar4 + 4) {
      do {
        pbVar14 = pbVar13 + 1;
        uVar6 = VP8LReadBits(piVar1,3);
        *(undefined4 *)(local_98 + (ulong)*pbVar13 * 4) = uVar6;
        pbVar13 = pbVar14;
      } while (&DAT_00103581 + (iVar4 + 3) != pbVar14);
    }
    iVar4 = VP8LHuffmanTablesAllocate(0x80,local_c8);
    if ((iVar4 != 0) && (iVar4 = VP8LBuildHuffmanTable(local_c8,7,local_98,0x13), iVar4 != 0)) {
      iVar4 = VP8LReadBits(piVar1,1);
      if (iVar4 == 0) {
        iVar4 = param_1;
        if (0 < param_1) {
LAB_00100304:
          iVar5 = 0;
          uVar12 = 8;
          do {
            iVar7 = param_2[0x12];
            if (0x1f < iVar7) {
              VP8LDoFillBitWindow(piVar1);
              iVar7 = param_2[0x12];
            }
            pbVar13 = (byte *)(*local_a8 +
                              (ulong)((uint)(*(ulong *)(param_2 + 10) >> ((byte)iVar7 & 0x3f)) &
                                     0x7f) * 4);
            uVar3 = *(ushort *)(pbVar13 + 2);
            param_2[0x12] = (uint)*pbVar13 + iVar7;
            if (uVar3 < 0x10) {
              lVar8 = (long)iVar5;
              iVar5 = iVar5 + 1;
              uVar11 = (uint)uVar3;
              *(uint *)((long)param_3 + lVar8 * 4) = uVar11;
              if (uVar11 != 0) {
                uVar12 = uVar11;
              }
            }
            else {
              bVar2 = *(byte *)((long)&kCodeLengthRepeatOffsets + (long)(int)(uVar3 - 0x10));
              iVar7 = VP8LReadBits(piVar1,*(undefined1 *)
                                           ((long)&kCodeLengthExtraBits + (long)(int)(uVar3 - 0x10))
                                  );
              iVar7 = (uint)bVar2 + iVar7;
              if (param_1 < iVar7 + iVar5) goto LAB_0010029f;
              uVar11 = 0;
              if (uVar3 == 0x10) {
                uVar11 = uVar12;
              }
              if (0 < iVar7) {
                puVar10 = (uint *)((long)param_3 + (long)iVar5 * 4);
                do {
                  *puVar10 = uVar11;
                  puVar10 = puVar10 + 1;
                } while (puVar10 !=
                         (uint *)((long)param_3 + ((ulong)(iVar7 - 1U) + (long)iVar5) * 4 + 4));
                iVar5 = iVar5 + 1 + (iVar7 - 1U);
              }
            }
          } while ((iVar5 < param_1) && (iVar4 = iVar4 + -1, iVar4 != 0));
        }
      }
      else {
        iVar4 = VP8LReadBits(piVar1,3);
        iVar4 = VP8LReadBits(piVar1,iVar4 * 2 + 2);
        iVar4 = iVar4 + 2;
        if (param_1 < iVar4) goto LAB_0010029f;
        if ((0 < param_1) && (iVar4 != 0)) goto LAB_00100304;
      }
      VP8LHuffmanTablesDeallocate(local_c8);
      goto LAB_001001ef;
    }
LAB_0010029f:
    VP8LHuffmanTablesDeallocate(local_c8);
    if ((*param_2 != 0) && (*param_2 != 5)) {
      uVar9 = 0;
      goto LAB_001003cc;
    }
LAB_00100205:
    *param_2 = 3;
  }
  else {
    iVar4 = VP8LReadBits(piVar1,1);
    iVar5 = VP8LReadBits(piVar1,1);
    iVar5 = VP8LReadBits(piVar1,(-(uint)(iVar5 == 0) & 0xfffffff9) + 8);
    *(undefined4 *)((long)param_3 + (long)iVar5 * 4) = 1;
    if (iVar4 == 1) {
      iVar4 = VP8LReadBits(piVar1,8);
      *(undefined4 *)((long)param_3 + (long)iVar4 * 4) = 1;
    }
LAB_001001ef:
    if ((param_2[0x13] == 0) &&
       (uVar9 = VP8LBuildHuffmanTable(param_4,8,param_3,param_1), (int)uVar9 != 0))
    goto LAB_001003cc;
    if ((*param_2 == 0) || (*param_2 == 5)) goto LAB_00100205;
  }
  uVar9 = 0;
LAB_001003cc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
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
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulong *puVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  ulong uVar17;
  byte *pbVar18;
  long *plVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  size_t __n;
  ulong *local_98;
  int local_90;
  uint local_58;
  
  iVar7 = param_1[0x24];
  local_98 = (ulong *)(param_2 + (long)iVar7 * 4);
  uVar11 = (long)iVar7 / (long)param_3;
  uVar17 = (long)iVar7 % (long)param_3;
  uVar23 = uVar11 & 0xffffffff;
  iVar21 = (int)uVar11;
  piVar1 = param_1 + 10;
  plVar19 = (long *)(param_1 + 0x28);
  puVar2 = (ulong *)(param_2 + (long)(param_5 * param_3) * 4);
  iVar7 = param_1[0x26];
  local_90 = 0x1000000;
  if (param_1[0x14] != 0) {
    local_90 = iVar21;
  }
  if (iVar7 < 1) {
    plVar19 = (long *)0x0;
  }
  uVar6 = param_1[0x30];
  if (local_98 < puVar2) {
    uVar11 = uVar17 & 0xffffffff;
    lVar14 = 0;
    if (param_1[0x31] != 0) {
      bVar9 = (byte)param_1[0x31];
      lVar14 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                             (long)((iVar21 >> (bVar9 & 0x1f)) * param_1[0x32] +
                                   ((int)uVar17 >> (bVar9 & 0x1f))) * 4) * 0x238;
    }
    plVar15 = (long *)(lVar14 + *(long *)(param_1 + 0x38));
    puVar12 = local_98;
LAB_00100f5e:
    iVar21 = (int)uVar23;
    if (local_90 <= iVar21) {
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x10);
      param_1[0x20] = (int)((long)puVar12 - param_2 >> 2);
      if (param_1[0x26] < 1) {
        local_90 = iVar21 + 8;
      }
      else {
        VP8LColorCacheCopy(param_1 + 0x28,param_1 + 0x2c);
        local_90 = iVar21 + 8;
      }
    }
    uVar22 = (uint)uVar11;
    if ((uVar6 & uVar22) == 0) {
      lVar14 = 0;
      if (param_1[0x31] != 0) {
        bVar9 = (byte)param_1[0x31];
        lVar14 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                               (long)((iVar21 >> (bVar9 & 0x1f)) * param_1[0x32] +
                                     ((int)uVar22 >> (bVar9 & 0x1f))) * 4) * 0x238;
      }
      plVar15 = (long *)(lVar14 + *(long *)(param_1 + 0x38));
    }
    if ((int)plVar15[6] == 0) {
      iVar10 = param_1[0x12];
      if (0x1f < iVar10) {
        VP8LDoFillBitWindow(piVar1);
        iVar10 = param_1[0x12];
      }
      uVar11 = *(ulong *)(param_1 + 10);
      uVar17 = uVar11 >> ((byte)iVar10 & 0x3f);
      if (*(int *)((long)plVar15 + 0x34) == 0) {
        pbVar18 = (byte *)(*plVar15 + (uVar17 & 0xff) * 4);
        bVar9 = *pbVar18;
        if (0 < (int)(bVar9 - 8)) {
          iVar10 = iVar10 + 8;
          pbVar18 = pbVar18 + ((ulong)((1 << ((byte)(bVar9 - 8) & 0x1f)) - 1U &
                                      (uint)(uVar11 >> ((byte)iVar10 & 0x3f))) +
                              (ulong)*(ushort *)(pbVar18 + 2)) * 4;
          bVar9 = *pbVar18;
        }
        uVar24 = (uint)*(ushort *)(pbVar18 + 2);
        param_1[0x12] = iVar10 + (uint)bVar9;
        if (param_1[0x13] != 0) goto LAB_001010f2;
        if (*(long *)(param_1 + 0xe) == *(long *)(param_1 + 0x10)) {
LAB_001015a6:
          puVar16 = puVar12;
          if (0x40 < param_1[0x12]) goto LAB_001015b0;
        }
LAB_0010122d:
        if (0xff < (int)uVar24) {
          if (0x117 < (int)uVar24) {
            if ((int)uVar24 < iVar7 + 0x118) {
              lVar14 = *plVar19;
              puVar16 = local_98;
              if (local_98 < puVar12) {
                do {
                  puVar13 = (ulong *)((long)puVar16 + 4);
                  *(uint *)(lVar14 + (long)(int)((uint)*puVar16 * 0x1e35a7bd >>
                                                ((byte)(int)plVar19[1] & 0x1f)) * 4) =
                       (uint)*puVar16;
                  puVar16 = puVar13;
                } while (puVar13 < puVar12);
                local_98 = (ulong *)((long)local_98 +
                                    ((long)puVar12 + (-1 - (long)local_98) & 0xfffffffffffffffcU) +
                                    4);
              }
              *(uint *)puVar12 = *(uint *)(lVar14 + (long)(int)(uVar24 - 0x118) * 4);
              goto LAB_00101036;
            }
            goto LAB_00101104;
          }
          uVar20 = uVar24 - 0xff;
          if (3 < (int)(uVar24 - 0x100)) {
            iVar10 = VP8LReadBits(piVar1);
            uVar11 = *(ulong *)(param_1 + 10);
            uVar20 = ((uVar24 - 0x100 & 1) + 2 << ((byte)((int)(uVar24 - 0x102) >> 1) & 0x1f)) + 1 +
                     iVar10;
          }
          iVar10 = param_1[0x12];
          pbVar18 = (byte *)(plVar15[4] + (uVar11 >> ((byte)iVar10 & 0x3f) & 0xff) * 4);
          bVar9 = *pbVar18;
          if (0 < (int)(bVar9 - 8)) {
            iVar10 = iVar10 + 8;
            pbVar18 = pbVar18 + ((ulong)((1 << ((byte)(bVar9 - 8) & 0x1f)) - 1U &
                                        (uint)(uVar11 >> ((byte)iVar10 & 0x3f))) +
                                (ulong)*(ushort *)(pbVar18 + 2)) * 4;
            bVar9 = *pbVar18;
          }
          uVar3 = *(ushort *)(pbVar18 + 2);
          uVar24 = (uint)uVar3;
          param_1[0x12] = iVar10 + (uint)bVar9;
          if (0x1f < (int)(iVar10 + (uint)bVar9)) {
            VP8LDoFillBitWindow(piVar1);
          }
          if (uVar3 < 4) {
LAB_001016a0:
            iVar10 = (8 - ((byte)kCodeToPlane[(int)uVar24] & 0xf)) +
                     ((int)(uint)(byte)kCodeToPlane[(int)uVar24] >> 4) * param_3;
            if (iVar10 < 1) {
              iVar10 = 1;
            }
          }
          else {
            iVar10 = VP8LReadBits(piVar1);
            uVar24 = ((uVar3 & 1) + 2 << ((byte)((int)(uVar3 - 2) >> 1) & 0x1f)) + iVar10;
            iVar10 = uVar24 - 0x77;
            if ((int)(uVar24 + 1) < 0x79) goto LAB_001016a0;
          }
          if (param_1[0x13] != 0) goto LAB_001010f2;
          lVar14 = *(long *)(param_1 + 0x10);
          if ((lVar14 == *(long *)(param_1 + 0xe)) && (0x40 < param_1[0x12])) goto LAB_0010118f;
          if (((long)puVar12 - param_2 >> 2 < (long)iVar10) ||
             ((param_2 + (long)(param_4 * param_3) * 4) - (long)puVar12 >> 2 < (long)(int)uVar20))
          goto LAB_00101104;
          __n = (long)(int)uVar20 * 4;
          puVar16 = (ulong *)((long)puVar12 + (long)iVar10 * -4);
          if ((iVar10 < 3) && (3 < (int)uVar20)) {
            if (((ulong)puVar12 & 3) == 0) {
              if (iVar10 == 1) {
                uVar11 = CONCAT44((uint)*puVar16,(uint)*puVar16);
              }
              else {
                uVar11 = *puVar16;
              }
              puVar13 = puVar12;
              uVar24 = uVar20;
              if (((ulong)puVar12 & 4) != 0) {
                uVar17 = *puVar16;
                uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
                puVar16 = (ulong *)((long)puVar16 + 4);
                *(uint *)puVar12 = (uint)uVar17;
                puVar13 = (ulong *)((long)puVar12 + 4);
                uVar24 = uVar20 - 1;
              }
              puVar8 = puVar13;
              do {
                *puVar8 = uVar11;
                puVar8 = puVar8 + 1;
              } while (puVar13 + ((int)uVar24 >> 1) != puVar8);
              if ((uVar24 & 1) != 0) {
                *(uint *)((long)puVar13 + (long)(int)(uVar24 & 0xfffffffe) * 4) =
                     *(uint *)((long)puVar16 + (long)(int)(uVar24 & 0xfffffffe) * 4);
              }
            }
            else {
LAB_00101978:
              lVar14 = 0;
              do {
                *(uint *)((long)puVar12 + lVar14 * 4) = *(uint *)((long)puVar16 + lVar14 * 4);
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < (int)uVar20);
            }
          }
          else {
            if (iVar10 < (int)uVar20) goto LAB_00101978;
            memcpy(puVar12,puVar16,__n);
          }
          uVar11 = (ulong)(uVar22 + uVar20);
          puVar16 = (ulong *)((long)puVar12 + __n);
          if (param_3 <= (int)(uVar22 + uVar20)) {
            do {
              uVar22 = (int)uVar23 + 1;
              uVar23 = (ulong)uVar22;
              uVar24 = (int)uVar11 - param_3;
              uVar11 = (ulong)uVar24;
              if ((((int)uVar22 <= param_5) && (param_6 != (code *)0x0)) && ((uVar22 & 0xf) == 0)) {
                (*param_6)(param_1,uVar23);
              }
            } while (param_3 <= (int)uVar24);
          }
          if ((uVar6 & (uint)uVar11) != 0) {
            lVar14 = 0;
            if (param_1[0x31] != 0) {
              bVar9 = (byte)param_1[0x31];
              lVar14 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                                     (long)(((int)uVar23 >> (bVar9 & 0x1f)) * param_1[0x32] +
                                           ((int)(uint)uVar11 >> (bVar9 & 0x1f))) * 4) * 0x238;
            }
            plVar15 = (long *)(lVar14 + *(long *)(param_1 + 0x38));
          }
          if ((plVar19 != (long *)0x0) && (local_98 < puVar16)) {
            lVar14 = *plVar19;
            puVar12 = local_98;
            do {
              uVar17 = *puVar12;
              puVar12 = (ulong *)((long)puVar12 + 4);
              *(uint *)(lVar14 + (long)(int)((uint)uVar17 * 0x1e35a7bd >>
                                            ((byte)(int)plVar19[1] & 0x1f)) * 4) = (uint)uVar17;
            } while (puVar12 < puVar16);
            local_98 = (ulong *)((long)local_98 +
                                ((long)puVar16 + (-1 - (long)local_98) & 0xfffffffffffffffcU) + 4);
          }
          goto LAB_001011e3;
        }
        if ((int)plVar15[5] == 0) {
          iVar10 = param_1[0x12];
          pbVar18 = (byte *)(plVar15[1] + (uVar11 >> ((byte)iVar10 & 0x3f) & 0xff) * 4);
          bVar9 = *pbVar18;
          if (0 < (int)(bVar9 - 8)) {
            iVar10 = iVar10 + 8;
            pbVar18 = pbVar18 + ((ulong)((1 << ((byte)(bVar9 - 8) & 0x1f)) - 1U &
                                        (uint)(uVar11 >> ((byte)iVar10 & 0x3f))) +
                                (ulong)*(ushort *)(pbVar18 + 2)) * 4;
            bVar9 = *pbVar18;
          }
          uVar3 = *(ushort *)(pbVar18 + 2);
          iVar10 = iVar10 + (uint)bVar9;
          param_1[0x12] = iVar10;
          if (0x1f < iVar10) {
            VP8LDoFillBitWindow(piVar1);
            uVar11 = *(ulong *)(param_1 + 10);
            iVar10 = param_1[0x12];
          }
          pbVar18 = (byte *)(plVar15[2] + (uVar11 >> ((byte)iVar10 & 0x3f) & 0xff) * 4);
          bVar9 = *pbVar18;
          if (0 < (int)(bVar9 - 8)) {
            iVar10 = iVar10 + 8;
            pbVar18 = pbVar18 + ((ulong)((1 << ((byte)(bVar9 - 8) & 0x1f)) - 1U &
                                        (uint)(uVar11 >> ((byte)iVar10 & 0x3f))) +
                                (ulong)*(ushort *)(pbVar18 + 2)) * 4;
            bVar9 = *pbVar18;
          }
          iVar10 = iVar10 + (uint)bVar9;
          uVar4 = *(ushort *)(pbVar18 + 2);
          pbVar18 = (byte *)(plVar15[3] + (uVar11 >> ((byte)iVar10 & 0x3f) & 0xff) * 4);
          bVar9 = *pbVar18;
          if (0 < (int)(bVar9 - 8)) {
            iVar10 = iVar10 + 8;
            pbVar18 = pbVar18 + ((ulong)((1 << ((byte)(bVar9 - 8) & 0x1f)) - 1U &
                                        (uint)(uVar11 >> ((byte)iVar10 & 0x3f))) +
                                (ulong)*(ushort *)(pbVar18 + 2)) * 4;
            bVar9 = *pbVar18;
          }
          uVar5 = *(ushort *)(pbVar18 + 2);
          param_1[0x12] = iVar10 + (uint)bVar9;
          if (param_1[0x13] == 0) {
            lVar14 = *(long *)(param_1 + 0x10);
            if ((lVar14 != *(long *)(param_1 + 0xe)) || ((int)(iVar10 + (uint)bVar9) < 0x41)) {
              local_58 = (uint)uVar3;
              *(uint *)puVar12 = (uint)uVar5 << 0x18 | local_58 << 0x10 | uVar24 << 8 | (uint)uVar4;
              goto LAB_00101036;
            }
            goto LAB_0010118f;
          }
          goto LAB_001010f2;
        }
        *(uint *)puVar12 = uVar24 << 8 | *(uint *)((long)plVar15 + 0x2c);
      }
      else {
        uVar17 = (ulong)((uint)uVar17 & 0x3f);
        uVar24 = *(uint *)((long)plVar15 + (uVar17 + 6) * 8 + 0xc);
        iVar10 = iVar10 + (int)plVar15[uVar17 + 7];
        if ((int)plVar15[uVar17 + 7] < 0x100) {
          param_1[0x12] = iVar10;
          *(uint *)puVar12 = uVar24;
          if (param_1[0x13] != 0) goto LAB_001010f2;
          lVar14 = *(long *)(param_1 + 0xe);
          if ((lVar14 == *(long *)(param_1 + 0x10)) && (0x40 < param_1[0x12])) goto LAB_0010118f;
        }
        else {
          iVar10 = iVar10 + -0x100;
          param_1[0x12] = iVar10;
          if (param_1[0x13] != 0) goto LAB_001010f2;
          lVar14 = *(long *)(param_1 + 0xe);
          if (lVar14 == *(long *)(param_1 + 0x10)) {
            if (iVar10 < 0x41) {
              if (uVar24 != 0) goto LAB_001015a6;
              goto LAB_00101036;
            }
            goto LAB_0010118f;
          }
          if (uVar24 != 0) goto LAB_0010122d;
        }
      }
    }
    else {
      *(uint *)puVar12 = *(uint *)((long)plVar15 + 0x2c);
    }
LAB_00101036:
    uVar11 = (ulong)(uVar22 + 1);
    puVar16 = (ulong *)((long)puVar12 + 4);
    if (param_3 <= (int)(uVar22 + 1)) {
      uVar22 = iVar21 + 1;
      uVar23 = (ulong)uVar22;
      if (((param_6 != (code *)0x0) && ((int)uVar22 <= param_5)) && ((uVar22 & 0xf) == 0)) {
        (*param_6)(param_1,uVar23);
      }
      if ((plVar19 == (long *)0x0) || (puVar16 <= local_98)) {
        uVar11 = 0;
      }
      else {
        lVar14 = *plVar19;
        puVar13 = local_98;
        do {
          uVar11 = *puVar13;
          puVar13 = (ulong *)((long)puVar13 + 4);
          *(uint *)(lVar14 + (long)(int)((uint)uVar11 * 0x1e35a7bd >> ((byte)(int)plVar19[1] & 0x1f)
                                        ) * 4) = (uint)uVar11;
        } while (puVar13 < puVar16);
        uVar11 = 0;
        local_98 = (ulong *)((long)local_98 +
                            ((long)puVar12 + (3 - (long)local_98) & 0xfffffffffffffffcU) + 4);
      }
    }
LAB_001011e3:
    iVar21 = (int)uVar23;
    puVar12 = puVar16;
    if (puVar2 <= puVar16) goto LAB_001015b0;
    goto LAB_00100f5e;
  }
  iVar7 = param_1[0x13];
LAB_00101183:
  puVar12 = local_98;
  if (iVar7 == 0) {
    lVar14 = *(long *)(param_1 + 0x10);
LAB_0010118f:
    local_98 = puVar12;
    if ((lVar14 != *(long *)(param_1 + 0xe)) || (puVar12 = local_98, param_1[0x12] < 0x41))
    goto LAB_00101199;
  }
LAB_001010f2:
  param_1[0x13] = 1;
  if (param_1[0x14] == 0) {
LAB_00101104:
    if ((*param_1 != 0) && (*param_1 != 5)) {
      return 0;
    }
    *param_1 = 3;
    return 0;
  }
  local_98 = puVar12;
  if (puVar12 < puVar2) {
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
LAB_00101199:
  if (param_6 != (code *)0x0) {
    if (iVar21 <= param_5) {
      param_5 = iVar21;
    }
    (*param_6)(param_1,param_5);
  }
  *param_1 = 0;
  param_1[0x24] = (int)((long)local_98 - param_2 >> 2);
  return 1;
LAB_001015b0:
  iVar7 = param_1[0x13];
  local_98 = puVar16;
  goto LAB_00101183;
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
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  bool local_61;
  int local_60;
  int local_5c;
  long local_48;
  
  iVar16 = 0x118;
  if (0 < param_1) {
    iVar16 = (1 << ((byte)param_1 & 0x1f)) + 0x118;
  }
  uVar7 = *(ushort *)(kTableSize + (long)param_1 * 2);
  if (((param_4 == (int *)0x0) && (param_2 != param_3)) || (param_3 < param_2)) {
    WebPSafeFree(0);
  }
  else {
    piVar11 = (int *)WebPSafeCalloc((long)iVar16,4);
    lVar12 = VP8LHtreeGroupsNew(param_2);
    *param_7 = lVar12;
    if (((lVar12 != 0) && (piVar11 != (int *)0x0)) &&
       (iVar16 = VP8LHuffmanTablesAllocate((uint)uVar7 * param_2,param_6), iVar16 != 0)) {
      if (0 < param_3) {
        local_48 = 0;
        iVar16 = 1 << ((byte)param_1 & 0x1f);
        piVar17 = param_4;
        do {
          if (param_4 == (int *)0x0) {
            lVar12 = *param_7;
            lVar14 = local_48;
          }
          else {
            while( true ) {
              local_61 = 0 < param_1;
              if (*piVar17 != -1) break;
              lVar12 = 0;
              do {
                while (((int)lVar12 == 0 && (local_61))) {
                  iVar9 = ReadHuffmanCode((uint)(ushort)(&kAlphabetSize)[lVar12] + iVar16,param_5,
                                          piVar11,0);
                  if (iVar9 == 0) goto LAB_00101d2d;
                  lVar12 = 1;
                }
                iVar9 = ReadHuffmanCode((&kAlphabetSize)[lVar12],param_5,piVar11,0);
                if (iVar9 == 0) goto LAB_00101d2d;
                lVar12 = lVar12 + 1;
              } while (lVar12 != 5);
              local_48 = local_48 + 0x238;
              piVar17 = piVar17 + 1;
              if (param_4 + param_3 == piVar17) goto LAB_00101ddb;
            }
            lVar12 = *param_7;
            lVar14 = (long)*piVar17 * 0x238;
          }
          local_5c = 0;
          lVar15 = 0;
          plVar1 = (long *)(lVar12 + lVar14);
          uVar10 = 1;
          local_60 = 0;
          while( true ) {
            uVar7 = (&kAlphabetSize)[lVar15];
            uVar18 = (uint)uVar7;
            if ((int)lVar15 == 0) {
              uVar18 = (uint)uVar7;
              if (0 < param_1) {
                uVar18 = iVar16 + (uint)uVar7;
              }
            }
            iVar9 = ReadHuffmanCode(uVar18,param_5,piVar11,param_6);
            lVar12 = *(long *)(param_6 + 0x20);
            pbVar8 = *(byte **)(lVar12 + 8);
            plVar1[lVar15] = (long)pbVar8;
            if (iVar9 == 0) goto LAB_00101d2d;
            if ((uVar10 != 0) && ((&kLiteralMap)[lVar15] == '\x01')) {
              uVar10 = (uint)(*pbVar8 == 0);
            }
            local_60 = local_60 + (uint)*pbVar8;
            *(byte **)(lVar12 + 8) = pbVar8 + (long)iVar9 * 4;
            if (lVar15 == 4) break;
            iVar9 = *piVar11;
            if (1 < (int)uVar18) {
              piVar13 = piVar11 + 1;
              do {
                if (iVar9 < *piVar13) {
                  iVar9 = *piVar13;
                }
                piVar13 = piVar13 + 1;
              } while (piVar13 != piVar11 + (ulong)(uVar18 - 2) + 2);
            }
            local_5c = local_5c + iVar9;
            lVar15 = lVar15 + 1;
          }
          *(uint *)(plVar1 + 5) = uVar10;
          *(undefined4 *)(plVar1 + 6) = 0;
          if (uVar10 == 0) {
LAB_00101db0:
            if (5 < local_5c) goto LAB_00101dbb;
            *(undefined4 *)((long)plVar1 + 0x34) = 1;
            lVar12 = *plVar1;
            lVar14 = 0;
            do {
              uVar7 = *(ushort *)(lVar12 + 2 + lVar14 * 4);
              uVar10 = (uint)uVar7;
              bVar4 = *(byte *)(lVar12 + lVar14 * 4);
              if (uVar7 < 0x100) {
                uVar10 = (uint)lVar14 >> (bVar4 & 0x1f);
                pbVar8 = (byte *)(plVar1[1] + (ulong)uVar10 * 4);
                bVar5 = *pbVar8;
                uVar10 = uVar10 >> (bVar5 & 0x1f);
                pbVar2 = (byte *)(plVar1[2] + (ulong)uVar10 * 4);
                bVar6 = *pbVar2;
                pbVar3 = (byte *)(plVar1[3] + (ulong)(uVar10 >> (bVar6 & 0x1f)) * 4);
                iVar9 = (uint)*pbVar3 + (uint)bVar5 + (uint)bVar4 + (uint)bVar6;
                uVar10 = (uint)*(ushort *)(pbVar3 + 2) << 0x18 |
                         (uint)*(ushort *)(pbVar8 + 2) << 0x10 | (uint)uVar7 << 8 |
                         (uint)*(ushort *)(pbVar2 + 2);
              }
              else {
                iVar9 = bVar4 + 0x100;
              }
              *(uint *)((long)plVar1 + lVar14 * 8 + 0x3c) = uVar10;
              *(int *)(plVar1 + lVar14 + 7) = iVar9;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0x40);
          }
          else {
            uVar10 = (uint)*(ushort *)(plVar1[3] + 2) << 0x18 |
                     (uint)*(ushort *)(plVar1[1] + 2) << 0x10 | (uint)*(ushort *)(plVar1[2] + 2);
            *(uint *)((long)plVar1 + 0x2c) = uVar10;
            if ((local_60 != 0) || (uVar7 = *(ushort *)(*plVar1 + 2), 0xff < uVar7))
            goto LAB_00101db0;
            *(undefined4 *)(plVar1 + 6) = 1;
            *(uint *)((long)plVar1 + 0x2c) = uVar10 | (uint)uVar7 << 8;
LAB_00101dbb:
            *(undefined4 *)((long)plVar1 + 0x34) = 0;
          }
          local_48 = local_48 + 0x238;
          piVar17 = piVar17 + 1;
        } while (param_4 + param_3 != piVar17);
      }
LAB_00101ddb:
      WebPSafeFree(piVar11);
      return 1;
    }
    if ((*param_5 == 0) || (*param_5 == 5)) {
      *param_5 = 1;
    }
LAB_00101d2d:
    WebPSafeFree(piVar11);
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
    uStack_90 = 0x1022e5;
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
      uStack_90 = 0x1024e5;
      iVar5 = VP8LReadBits(piVar1,4);
      if (10 < iVar5 - 1U) goto LAB_001020a0;
      puVar11 = (undefined8 *)0x0;
      uVar15 = 1;
      local_50 = (uint *)0x0;
      uVar6 = 1;
      local_48 = 0;
    }
LAB_00102320:
    iVar20 = param_4[0x13];
joined_r0x00102325:
    if (iVar20 != 0) {
LAB_001024a0:
      WebPSafeFree(puVar11);
LAB_001024a8:
      local_88 = param_4 + 0x3a;
      WebPSafeFree(local_50);
      VP8LHuffmanTablesDeallocate(local_88);
      VP8LHtreeGroupsFree(local_48);
      iVar5 = *param_4;
      if (iVar5 != 0) goto LAB_001020aa;
      goto LAB_001022c8;
    }
    local_88 = param_4 + 0x3a;
    iVar20 = ReadHuffmanCodesHelper(iVar5,uVar15,uVar6,puVar11,param_4,local_88);
    if (iVar20 == 0) goto LAB_001024a0;
    *(uint **)(param_4 + 0x34) = local_50;
    param_4[0x36] = uVar15;
    *(undefined8 *)(param_4 + 0x38) = local_48;
    WebPSafeFree(puVar11,uVar15,&local_48,uStack_90);
    if (iVar5 != 0) {
      param_4[0x26] = 1 << ((byte)iVar5 & 0x1f);
      iVar5 = VP8LColorCacheInit(param_4 + 0x28);
      if (iVar5 != 0) goto LAB_001023a5;
LAB_001026f7:
      if ((*param_4 == 0) || (*param_4 == 5)) {
        *param_4 = 1;
      }
      goto LAB_001020b3;
    }
    param_4[0x26] = 0;
LAB_001023a5:
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
LAB_00102406:
      uVar10 = 1;
      goto LAB_001020ca;
    }
    lVar17 = WebPSafeMalloc((long)(int)param_1 * (long)param_2,4);
    if (lVar17 == 0) goto LAB_001026f7;
    iVar5 = DecodeImageData(param_4,lVar17,param_1,param_2,param_2,0);
    if ((iVar5 != 0) && (param_4[0x13] == 0)) {
      if (param_5 != (long *)0x0) {
        *param_5 = lVar17;
      }
      param_4[0x24] = 0;
      ClearMetadata(param_4 + 0x26);
      goto LAB_00102406;
    }
  }
  else {
LAB_00101faa:
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
        uStack_90 = 0x102482;
        iVar20 = VP8LReadBits(piVar1,1);
        uVar6 = param_3;
        if (iVar20 == 0) {
          iVar20 = param_4[0x13];
          puVar11 = (undefined8 *)0x0;
          uVar15 = param_3;
          goto joined_r0x00102325;
        }
        iVar20 = VP8LReadBits(piVar1,3);
        bVar13 = (byte)(iVar20 + 2);
        iVar7 = 1 << (bVar13 & 0x1f);
        uVar15 = (uint)(iVar7 + -1 + param_2) >> (bVar13 & 0x1f);
        uVar18 = iVar7 + -1 + param_1 >> (bVar13 & 0x1f);
        uStack_90 = 0x10256a;
        iVar7 = DecodeImageStream(uVar18,uVar15,0,param_4,&local_50);
        if (iVar7 == 0) goto LAB_00102743;
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
              uStack_90 = 0x1027a6;
              puVar11 = (undefined8 *)memset(__s,0xff,(long)(int)uVar6 << 2);
LAB_00102632:
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
              goto LAB_00102320;
            }
LAB_00102732:
            if ((*param_4 == 0) || (*param_4 == 5)) {
              *param_4 = 1;
            }
LAB_00102743:
            WebPSafeFree(0);
            goto LAB_001024a8;
          }
        }
        if ((int)(param_2 * param_1) < (int)uVar6) {
          uStack_90 = 0x1025ef;
          puVar11 = (undefined8 *)WebPSafeMalloc((long)(int)uVar6);
          if (puVar11 == (undefined8 *)0x0) goto LAB_00102732;
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
          if (0 < iVar7) goto LAB_00102632;
        }
        else {
          puVar11 = (undefined8 *)0x0;
          uVar15 = uVar6;
        }
        goto LAB_00102320;
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
        if (uVar6 != 3) goto LAB_00101faa;
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
LAB_001020a0:
    iVar5 = *param_4;
    if (iVar5 == 0) {
LAB_001022c8:
      *param_4 = 3;
    }
    else {
LAB_001020aa:
      if (iVar5 == 5) goto LAB_001022c8;
    }
LAB_001020b3:
    lVar17 = 0;
  }
  WebPSafeFree(lVar17);
  ClearMetadata(param_4 + 0x26);
  uVar10 = 0;
LAB_001020ca:
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
               (*(char *)puVar6[2] != '\0')) goto LAB_00102935;
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
        if (lVar5 != 0) goto LAB_0010294e;
        if ((*piVar4 == 0) || (*piVar4 == 5)) {
          *piVar4 = 1;
        }
      }
      else {
LAB_00102935:
        *(undefined4 *)(param_1 + 0x18) = 0;
        iVar3 = AllocateInternalBuffers32b(piVar4,*(undefined4 *)param_1);
        if (iVar3 != 0) {
LAB_0010294e:
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
  uint *__src;
  uint *puVar13;
  byte bVar14;
  size_t sVar15;
  byte *pbVar16;
  ulong uVar17;
  uint *puVar18;
  uint *__dest;
  uint *puVar19;
  long lVar20;
  long *plVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  byte bVar28;
  
  bVar28 = 0;
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6[0x23] < param_2) {
    if ((*(int *)(param_1 + 0xc0) == 0) &&
       (WebPInitAlphaProcessing(), *(int *)(param_1 + 0xc0) == 0)) {
      uVar12 = DecodeImageData(piVar6,*(undefined8 *)(piVar6 + 6),piVar6[0x21],piVar6[0x22],param_2,
                               ExtractAlphaRows);
      return uVar12;
    }
    lVar7 = *(long *)(piVar6 + 6);
    iVar26 = piVar6[0x24];
    iVar3 = piVar6[0x21];
    uVar4 = piVar6[0x30];
    uVar17 = (long)iVar26 / (long)iVar3;
    uVar9 = (long)iVar26 % (long)iVar3;
    uVar25 = uVar17 & 0xffffffff;
    iVar11 = (int)uVar17;
    iVar5 = piVar6[0x22];
    iVar10 = iVar3 * param_2;
    if (iVar26 < iVar10) {
      uVar17 = uVar9 & 0xffffffff;
      lVar20 = 0;
      if (piVar6[0x31] != 0) {
        bVar14 = (byte)piVar6[0x31];
        lVar20 = (long)*(int *)(*(long *)(piVar6 + 0x34) +
                               (long)((iVar11 >> (bVar14 & 0x1f)) * piVar6[0x32] +
                                     ((int)uVar9 >> (bVar14 & 0x1f))) * 4) * 0x238;
      }
      plVar21 = (long *)(lVar20 + *(long *)(piVar6 + 0x38));
      if (piVar6[0x13] == 0) {
        piVar1 = piVar6 + 10;
        do {
          uVar24 = (uint)uVar17;
          if ((uVar4 & uVar24) == 0) {
            lVar20 = 0;
            if (piVar6[0x31] != 0) {
              bVar14 = (byte)piVar6[0x31];
              lVar20 = (long)*(int *)(*(long *)(piVar6 + 0x34) +
                                     (long)(((int)uVar25 >> (bVar14 & 0x1f)) * piVar6[0x32] +
                                           ((int)uVar24 >> (bVar14 & 0x1f))) * 4) * 0x238;
            }
            plVar21 = (long *)(lVar20 + *(long *)(piVar6 + 0x38));
          }
          iVar11 = piVar6[0x12];
          if (0x1f < iVar11) {
            VP8LDoFillBitWindow(piVar1);
            iVar11 = piVar6[0x12];
          }
          uVar17 = *(ulong *)(piVar6 + 10);
          pbVar16 = (byte *)(*plVar21 + (uVar17 >> ((byte)iVar11 & 0x3f) & 0xff) * 4);
          bVar14 = *pbVar16;
          if (0 < (int)(bVar14 - 8)) {
            iVar11 = iVar11 + 8;
            pbVar16 = pbVar16 + ((ulong)((1 << ((byte)(bVar14 - 8) & 0x1f)) - 1U &
                                        (uint)(uVar17 >> ((byte)iVar11 & 0x3f))) +
                                (ulong)*(ushort *)(pbVar16 + 2)) * 4;
            bVar14 = *pbVar16;
          }
          uVar2 = *(ushort *)(pbVar16 + 2);
          iVar11 = iVar11 + (uint)bVar14;
          piVar6[0x12] = iVar11;
          if (0xff < uVar2) {
            if (uVar2 < 0x118) {
              if ((int)(uVar2 - 0x100) < 4) {
                iVar22 = uVar2 - 0xff;
              }
              else {
                iVar22 = VP8LReadBits(piVar1);
                uVar17 = *(ulong *)(piVar6 + 10);
                iVar22 = ((uVar2 - 0x100 & 1) + 2 << ((byte)((int)(uVar2 - 0x102) >> 1) & 0x1f)) + 1
                         + iVar22;
                iVar11 = piVar6[0x12];
              }
              pbVar16 = (byte *)(plVar21[4] + (uVar17 >> ((byte)iVar11 & 0x3f) & 0xff) * 4);
              bVar14 = *pbVar16;
              if (0 < (int)(bVar14 - 8)) {
                iVar11 = iVar11 + 8;
                pbVar16 = pbVar16 + ((ulong)((1 << ((byte)(bVar14 - 8) & 0x1f)) - 1U &
                                            (uint)(uVar17 >> ((byte)iVar11 & 0x3f))) +
                                    (ulong)*(ushort *)(pbVar16 + 2)) * 4;
                bVar14 = *pbVar16;
              }
              uVar2 = *(ushort *)(pbVar16 + 2);
              uVar27 = (uint)uVar2;
              piVar6[0x12] = iVar11 + (uint)bVar14;
              if (0x1f < (int)(iVar11 + (uint)bVar14)) {
                VP8LDoFillBitWindow(piVar1);
              }
              if (uVar2 < 4) {
LAB_00102e1f:
                iVar11 = (8 - ((byte)kCodeToPlane[(int)uVar27] & 0xf)) +
                         ((int)(uint)(byte)kCodeToPlane[(int)uVar27] >> 4) * iVar3;
                if (iVar11 < 1) {
                  iVar11 = 1;
                }
              }
              else {
                iVar11 = VP8LReadBits(piVar1);
                uVar27 = ((uVar2 & 1) + 2 << ((byte)((int)(uVar2 - 2) >> 1) & 0x1f)) + iVar11;
                iVar11 = uVar27 - 0x77;
                if ((int)(uVar27 + 1) < 0x79) goto LAB_00102e1f;
              }
              if ((iVar11 <= iVar26) && (iVar22 <= iVar5 * iVar3 - iVar26)) {
                __dest = (uint *)(iVar26 + lVar7);
                __src = (uint *)((long)__dest - (long)iVar11);
                if (iVar22 < 8) {
LAB_00102fd0:
                  sVar15 = 0;
                  if (iVar11 < iVar22) {
                    do {
                      *(byte *)((long)__dest + sVar15) = *(byte *)((long)__src + sVar15);
                      sVar15 = sVar15 + 1;
                    } while (sVar15 != (long)iVar22);
                  }
                  else {
                    memcpy(__dest,__src,(long)iVar22);
                  }
                }
                else {
                  if (iVar11 == 2) {
                    uVar27 = (uint)(ushort)*__src * 0x10001;
                  }
                  else if (iVar11 == 4) {
                    uVar27 = *__src;
                  }
                  else {
                    if (iVar11 != 1) goto LAB_00102fd0;
                    uVar27 = (uint)(byte)*__src * 0x1010101;
                  }
                  puVar13 = __src;
                  iVar11 = iVar22;
                  if (((ulong)__dest & 3) == 0) {
LAB_00102ee1:
                    puVar13 = __dest;
                    do {
                      *puVar13 = uVar27;
                      puVar13 = puVar13 + 1;
                    } while (puVar13 != __dest + (iVar11 >> 2));
                    iVar23 = (iVar11 >> 2) << 2;
                    puVar18 = __src;
                    puVar19 = __dest;
                  }
                  else {
                    do {
                      puVar19 = (uint *)((long)__dest + (ulong)bVar28 * -2 + 1);
                      puVar18 = (uint *)((long)puVar13 + (ulong)bVar28 * -2 + 1);
                      *(byte *)__dest = (byte)*puVar13;
                      uVar27 = uVar27 >> 8 | uVar27 << 0x18;
                      puVar13 = puVar18;
                      __dest = puVar19;
                    } while (((ulong)puVar19 & 3) != 0);
                    iVar11 = (iVar22 - (int)puVar18) + (int)__src;
                    __src = puVar18;
                    if (0 < iVar11 >> 2) goto LAB_00102ee1;
                    iVar23 = 0;
                  }
                  lVar20 = (long)iVar23;
                  while (iVar23 < iVar11) {
                    *(byte *)((long)puVar19 + lVar20) = *(byte *)((long)puVar18 + lVar20);
                    lVar20 = lVar20 + 1;
                    iVar23 = (int)lVar20;
                  }
                }
                uVar24 = uVar24 + iVar22;
                uVar17 = (ulong)uVar24;
                iVar26 = iVar26 + iVar22;
                while (iVar3 <= (int)uVar24) {
                  while( true ) {
                    uVar27 = (int)uVar25 + 1;
                    uVar25 = (ulong)uVar27;
                    uVar24 = (int)uVar17 - iVar3;
                    uVar17 = (ulong)uVar24;
                    if ((param_2 < (int)uVar27) || ((uVar27 & 0xf) != 0)) break;
                    ExtractPalettedAlphaRows(piVar6,uVar25);
                    if ((int)uVar24 < iVar3) goto LAB_00102f7b;
                  }
                }
LAB_00102f7b:
                if ((iVar26 < iVar10) && ((uVar4 & (uint)uVar17) != 0)) {
                  lVar20 = 0;
                  if (piVar6[0x31] != 0) {
                    bVar14 = (byte)piVar6[0x31];
                    lVar20 = (long)*(int *)(*(long *)(piVar6 + 0x34) +
                                           (long)(((int)uVar25 >> (bVar14 & 0x1f)) * piVar6[0x32] +
                                                 ((int)(uint)uVar17 >> (bVar14 & 0x1f))) * 4) *
                             0x238;
                  }
                  plVar21 = (long *)(lVar20 + *(long *)(piVar6 + 0x38));
                }
                goto LAB_00102c00;
              }
            }
            if ((piVar6[0x13] != 0) ||
               ((*(long *)(piVar6 + 0x10) == *(long *)(piVar6 + 0xe) && (0x40 < piVar6[0x12])))) {
              piVar6[0x13] = 1;
              goto LAB_001030fd;
            }
            iVar26 = 3;
            goto LAB_00103102;
          }
          lVar20 = (long)iVar26;
          uVar17 = (ulong)(uVar24 + 1);
          iVar26 = iVar26 + 1;
          *(char *)(lVar7 + lVar20) = (char)uVar2;
          if (iVar3 <= (int)(uVar24 + 1)) {
            uVar24 = (int)uVar25 + 1;
            uVar25 = (ulong)uVar24;
            if (((int)uVar24 <= param_2) && ((uVar24 & 0xf) == 0)) {
              ExtractPalettedAlphaRows(piVar6,uVar25);
            }
            uVar17 = 0;
          }
LAB_00102c00:
          iVar11 = (int)uVar25;
          if (piVar6[0x13] != 0) {
            piVar6[0x13] = 1;
            break;
          }
          bVar8 = true;
          uVar24 = 0;
          if (*(long *)(piVar6 + 0x10) == *(long *)(piVar6 + 0xe)) {
            uVar24 = (uint)(0x40 < piVar6[0x12]);
            bVar8 = piVar6[0x12] < 0x41;
          }
          piVar6[0x13] = uVar24;
          if ((iVar10 <= iVar26) || (!bVar8)) break;
        } while( true );
      }
    }
    if (param_2 <= iVar11) {
      iVar11 = param_2;
    }
    ExtractPalettedAlphaRows(piVar6,iVar11);
    if (((piVar6[0x13] != 0) ||
        ((*(long *)(piVar6 + 0xe) == *(long *)(piVar6 + 0x10) && (0x40 < piVar6[0x12])))) &&
       (piVar6[0x13] = 1, iVar26 < iVar5 * iVar3)) {
LAB_001030fd:
      iVar26 = 5;
LAB_00103102:
      if ((*piVar6 != 0) && (*piVar6 != 5)) {
        return 0;
      }
      *piVar6 = iVar26;
      return 0;
    }
    piVar6[0x24] = iVar26;
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
          goto LAB_001031e0;
        }
      }
      else {
        param_1[1] = 2;
        *param_2 = CONCAT44(local_28,local_2c);
        iVar1 = DecodeImageStream(local_2c,local_28,1,param_1,0);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_001031e2;
        }
      }
      VP8LClear_part_0(param_1);
    }
  }
LAB_001031e0:
  uVar2 = 0;
LAB_001031e2:
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
LAB_00103340:
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
      goto LAB_001032d2;
    }
    iVar7 = AllocateInternalBuffers32b(param_1,*puVar4);
    if (iVar7 == 0) goto LAB_001032d2;
    if (puVar4[0x22] == 0) {
LAB_0010330d:
      uVar8 = **(uint **)(param_1 + 4);
      if (uVar8 - 7 < 4) {
LAB_0010331b:
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
        goto LAB_00103340;
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
        if (iVar7 == 0) goto LAB_001032d2;
        if (puVar4[0x22] == 0) goto LAB_0010330d;
        goto LAB_0010331b;
      }
    }
    if ((*param_1 == 0) || (*param_1 == 5)) {
      *param_1 = 1;
    }
  }
LAB_001032d2:
  VP8LClear_part_0(param_1);
  return 0;
}



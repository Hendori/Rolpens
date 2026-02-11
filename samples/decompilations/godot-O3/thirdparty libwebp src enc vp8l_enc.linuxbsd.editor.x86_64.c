
void AddSingle(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + (ulong)(param_1 >> 0x18) * 4);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(param_3 + (ulong)(param_1 >> 0x10 & 0xff) * 4);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(param_4 + (ulong)(param_1 >> 8 & 0xff) * 4);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(param_5 + (ulong)(param_1 & 0xff) * 4);
  *piVar1 = *piVar1 + 1;
  return;
}



uint ApplyPaletteHash0(uint param_1)

{
  return param_1 >> 8 & 0xff;
}



uint ApplyPaletteHash1(uint param_1)

{
  return (param_1 & 0xffffff) * -0x455ab19 >> 0x15;
}



uint ApplyPaletteHash2(uint param_1)

{
  return param_1 * -0x80000000 - (param_1 & 0xffffff) >> 0x15;
}



undefined8 AllocateTransformBuffer(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    lVar7 = 0;
    if (*(int *)(param_1 + 0x50) == 0) {
      lVar2 = 0;
      goto LAB_001000cd;
    }
  }
  else {
    uVar1 = (ulong)(param_2 * 2 + 2);
    lVar7 = (uVar1 >> 2) + uVar1;
  }
  bVar5 = (byte)*(undefined4 *)(param_1 + 0x48);
  iVar6 = 1 << (bVar5 & 0x1f);
  lVar2 = (ulong)((uint)(iVar6 + -1 + param_2) >> (bVar5 & 0x1f)) *
          (ulong)((uint)(iVar6 + -1 + param_3) >> (bVar5 & 0x1f));
LAB_001000cd:
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = lVar2 + 0x10 + (long)param_2 * (long)param_3 + lVar7;
  if ((lVar3 == 0) || (*(ulong *)(param_1 + 0x38) < uVar1)) {
    WebPSafeFree();
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar3 = WebPSafeMalloc(uVar1,4);
    if (lVar3 == 0) {
      uVar4 = WebPEncodingSetError(*(undefined8 *)(param_1 + 8),1);
      return uVar4;
    }
    *(long *)(param_1 + 0x30) = lVar3;
    *(ulong *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(long *)(param_1 + 0x10) = lVar3;
  uVar1 = lVar3 + 0x1f + (long)param_2 * (long)param_3 * 4 & 0xffffffffffffffe0;
  *(int *)(param_1 + 0x40) = param_2;
  *(ulong *)(param_1 + 0x20) = uVar1;
  *(ulong *)(param_1 + 0x28) = uVar1 + 0x1f + lVar7 * 4 & 0xffffffffffffffe0;
  return 1;
}



undefined8 GetHuffBitLengthsAndCodes(int *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
  iVar2 = *param_1;
  if (iVar2 < 1) {
    lVar8 = WebPSafeCalloc(0);
    if (lVar8 == 0) goto LAB_0010043d;
    lVar11 = WebPSafeMalloc(1,0);
    lVar6 = WebPSafeMalloc(0);
    if ((lVar11 != 0) && (lVar6 != 0)) goto LAB_00100379;
  }
  else {
    plVar10 = *(long **)(param_1 + 2);
    lVar11 = 0;
    plVar1 = plVar10 + iVar2;
    piVar9 = param_2;
    do {
      if (*(int *)(*plVar10 + 0xca8) < 1) {
        lVar8 = 0x118;
        iVar7 = 0x118;
      }
      else {
        iVar7 = (1 << ((byte)*(int *)(*plVar10 + 0xca8) & 0x1f)) + 0x118;
        lVar8 = (long)iVar7;
      }
      iVar4 = 0;
      piVar5 = piVar9;
      do {
        iVar4 = iVar4 + 1;
        *piVar5 = iVar7;
        lVar11 = lVar11 + lVar8;
        piVar5 = piVar5 + 6;
        iVar7 = 0x100;
        lVar8 = 0x100;
      } while (iVar4 != 4);
      plVar10 = plVar10 + 1;
      piVar9[0x18] = 0x28;
      lVar11 = lVar11 + 0x28;
      piVar9 = piVar9 + 0x1e;
    } while (plVar10 != plVar1);
    lVar8 = WebPSafeCalloc(lVar11);
    if (lVar8 == 0) {
LAB_0010043d:
      WebPSafeFree(0);
      WebPSafeFree(0);
      lVar8 = 0;
      goto LAB_0010040f;
    }
    piVar9 = param_2 + 6;
    lVar11 = lVar8 + lVar11 * 2;
    iVar7 = 0;
    piVar5 = param_2;
    lVar6 = lVar8;
    do {
      iVar4 = *piVar5;
      *(long *)(piVar5 + 2) = lVar11;
      *(long *)(piVar5 + 4) = lVar6;
      lVar11 = lVar11 + iVar4;
      lVar6 = lVar6 + (long)iVar4 * 2;
      if (iVar7 < iVar4) {
        iVar7 = iVar4;
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != piVar9 + (ulong)(iVar2 * 5 - 1) * 6);
    lVar11 = WebPSafeMalloc(1,(long)iVar7);
    lVar6 = WebPSafeMalloc((long)iVar7 * 3);
    if ((lVar11 != 0) && (lVar6 != 0)) {
      lVar8 = 0;
      do {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar8);
        lVar8 = lVar8 + 8;
        VP8LCreateHuffmanTree(*puVar3,0xf,lVar11,lVar6,piVar9 + -6);
        VP8LCreateHuffmanTree(puVar3 + 1,0xf,lVar11,lVar6,piVar9);
        VP8LCreateHuffmanTree(puVar3 + 0x81,0xf,lVar11,lVar6,piVar9 + 6);
        VP8LCreateHuffmanTree(puVar3 + 0x101,0xf,lVar11,lVar6,piVar9 + 0xc);
        piVar5 = piVar9 + 0x12;
        piVar9 = piVar9 + 0x1e;
        VP8LCreateHuffmanTree(puVar3 + 0x181,0xf,lVar11,lVar6,piVar5);
      } while (lVar8 != (long)iVar2 * 8);
LAB_00100379:
      WebPSafeFree(lVar6);
      WebPSafeFree(lVar11);
      return 1;
    }
  }
  WebPSafeFree(lVar6);
  WebPSafeFree(lVar11);
LAB_0010040f:
  WebPSafeFree(lVar8);
  memset(param_2,0,(long)(iVar2 * 5) * 0x18);
  return 0;
}



undefined8 EncoderInit(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(long *)(param_1 + 8) + 8) * *(int *)(*(long *)(param_1 + 8) + 0xc);
  uVar1 = VP8LHashChainInit(param_1 + 0x908,iVar2);
  if ((int)uVar1 != 0) {
    iVar3 = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      iVar3 = iVar2 + 0xe;
    }
    iVar2 = (iVar3 >> 4) + 1;
    VP8LBackwardRefsInit(param_1 + 0x868,iVar2);
    VP8LBackwardRefsInit(param_1 + 0x890,iVar2);
    VP8LBackwardRefsInit(param_1 + 0x8b8,iVar2);
    VP8LBackwardRefsInit(param_1 + 0x8e0,iVar2);
    uVar1 = 1;
  }
  return uVar1;
}



void ClearHuffmanTreeIfOnlyOneSymbol(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  
  if (0 < *param_1) {
    pcVar1 = *(char **)(param_1 + 2);
    iVar4 = 0;
    pcVar2 = pcVar1;
    do {
      if ((*pcVar2 != '\0') && (iVar4 = iVar4 + 1, 1 < iVar4)) {
        return;
      }
      pcVar2 = pcVar2 + 1;
    } while (pcVar2 != pcVar1 + *param_1);
    *pcVar1 = '\0';
    iVar4 = *param_1;
    **(undefined2 **)(param_1 + 4) = 0;
    lVar3 = 1;
    if (1 < iVar4) {
      do {
        *(undefined1 *)(*(long *)(param_1 + 2) + lVar3) = 0;
        *(undefined2 *)(*(long *)(param_1 + 4) + lVar3 * 2) = 0;
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *param_1);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ApplyPalette(uint *param_1,uint param_2,long param_3,uint param_4,uint *param_5,int param_6,
            int param_7,uint param_8,undefined4 param_9,undefined8 param_10)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  char cVar10;
  short *psVar11;
  undefined4 uVar12;
  long lVar13;
  short sVar14;
  uint uVar15;
  long lVar16;
  char cVar17;
  uint uVar18;
  undefined1 *puVar19;
  long in_FS_OFFSET;
  byte bVar20;
  uint *local_1898;
  long local_1890;
  code *local_1868 [4];
  undefined4 local_1848 [256];
  undefined1 local_1448 [1024];
  short local_1048 [2052];
  long local_40;
  
  bVar20 = 0;
  lVar16 = (long)param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined1 *)WebPSafeMalloc(lVar16);
  if (puVar4 == (undefined1 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = WebPEncodingSetError(param_10,1);
      return uVar5;
    }
  }
  else {
    if (param_6 < 4) {
      uVar2 = *param_5;
      if (0 < (int)param_8) {
        cVar17 = '\0';
        uVar15 = 0;
        do {
          lVar6 = 0;
          if (0 < param_7) {
            do {
              while (uVar18 = param_1[lVar6], uVar18 == uVar2) {
                puVar4[lVar6] = cVar17;
                lVar6 = lVar6 + 1;
                uVar2 = uVar18;
                if (lVar16 == lVar6) goto LAB_00100690;
              }
              if (*param_5 == uVar18) {
                cVar10 = '\0';
                cVar17 = '\0';
              }
              else if (uVar18 == param_5[1]) {
                cVar10 = '\x01';
                cVar17 = '\x01';
              }
              else {
                cVar10 = (uVar18 != param_5[2]) + '\x02';
                cVar17 = (uVar18 != param_5[2]) + '\x02';
              }
              puVar4[lVar6] = cVar10;
              lVar6 = lVar6 + 1;
              uVar2 = uVar18;
            } while (lVar16 != lVar6);
          }
LAB_00100690:
          uVar15 = uVar15 + 1;
          (*_VP8LBundleColorMap)(puVar4,param_7,param_9);
          param_1 = param_1 + param_2;
        } while (param_8 != uVar15);
      }
    }
    else {
      uVar7 = 0;
      local_1868[2] = ApplyPaletteHash2;
      local_1868[0] = ApplyPaletteHash0;
      local_1868[1] = ApplyPaletteHash1;
      do {
        lVar13 = 0;
        psVar11 = local_1048;
        for (lVar6 = 0x200; lVar6 != 0; lVar6 = lVar6 + -1) {
          psVar11[0] = -1;
          psVar11[1] = -1;
          psVar11[2] = -1;
          psVar11[3] = -1;
          psVar11 = psVar11 + ((ulong)bVar20 * -2 + 1) * 4;
        }
        pcVar1 = local_1868[uVar7];
        while( true ) {
          uVar2 = (*pcVar1)(param_5[lVar13]);
          if (local_1048[uVar2] != -1) break;
          local_1048[uVar2] = (short)lVar13;
          lVar13 = lVar13 + 1;
          if (lVar13 == param_6) {
            uVar2 = *param_5;
            if ((int)uVar7 == 0) {
              if (0 < (int)param_8) {
                sVar14 = 0;
                uVar7 = uVar7 & 0xffffffff;
                do {
                  lVar6 = 0;
                  uVar15 = uVar2;
                  if (0 < param_7) {
                    do {
                      uVar2 = param_1[lVar6];
                      if (uVar2 != uVar15) {
                        sVar14 = local_1048[uVar2 >> 8 & 0xff];
                      }
                      puVar4[lVar6] = (char)sVar14;
                      lVar6 = lVar6 + 1;
                      uVar15 = uVar2;
                    } while (lVar16 != lVar6);
                  }
                  uVar15 = (int)uVar7 + 1;
                  uVar7 = (ulong)uVar15;
                  (*_VP8LBundleColorMap)(puVar4,param_7,param_9,param_3);
                  param_1 = param_1 + param_2;
                  param_3 = param_3 + (ulong)param_4 * 4;
                } while (param_8 != uVar15);
              }
            }
            else if ((int)uVar7 == 1) {
              if (0 < (int)param_8) {
                sVar14 = 0;
                uVar15 = 0;
                do {
                  lVar6 = 0;
                  uVar18 = uVar2;
                  if (0 < param_7) {
                    do {
                      uVar2 = param_1[lVar6];
                      if (uVar2 != uVar18) {
                        sVar14 = local_1048[(uVar2 & 0xffffff) * -0x455ab19 >> 0x15];
                      }
                      puVar4[lVar6] = (char)sVar14;
                      lVar6 = lVar6 + 1;
                      uVar18 = uVar2;
                    } while (lVar16 != lVar6);
                  }
                  uVar15 = uVar15 + 1;
                  (*_VP8LBundleColorMap)(puVar4,param_7,param_9);
                  param_1 = param_1 + param_2;
                } while (param_8 != uVar15);
              }
            }
            else if (0 < (int)param_8) {
              uVar15 = 0;
              sVar14 = 0;
              do {
                lVar6 = 0;
                if (0 < param_7) {
                  do {
                    uVar18 = param_1[lVar6];
                    if (uVar18 != uVar2) {
                      sVar14 = local_1048[uVar18 * -0x80000000 - (uVar18 & 0xffffff) >> 0x15];
                    }
                    puVar4[lVar6] = (char)sVar14;
                    lVar6 = lVar6 + 1;
                    uVar2 = uVar18;
                  } while (lVar16 != lVar6);
                }
                uVar15 = uVar15 + 1;
                (*_VP8LBundleColorMap)(puVar4,param_7,param_9);
                param_1 = param_1 + param_2;
              } while (param_8 != uVar15);
            }
            goto LAB_001006cd;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 3);
      PrepareMapToPalette(param_5,param_6,local_1448,local_1848);
      uVar2 = *param_5;
      if (0 < (int)param_8) {
        puVar8 = param_1 + lVar16;
        uVar15 = 0;
        uVar12 = 0;
        local_1898 = param_1;
        local_1890 = param_3;
        do {
          puVar9 = local_1898;
          puVar19 = puVar4;
          if (0 < param_7) {
            do {
              uVar18 = *puVar9;
              if (uVar18 != uVar2) {
                iVar3 = SearchColorNoIdx(local_1448,uVar18,param_6);
                uVar12 = local_1848[iVar3];
              }
              puVar9 = puVar9 + 1;
              *puVar19 = (char)uVar12;
              puVar19 = puVar19 + 1;
              uVar2 = uVar18;
            } while (puVar8 != puVar9);
          }
          (*_VP8LBundleColorMap)(puVar4,param_7,param_9,local_1890);
          uVar15 = uVar15 + 1;
          local_1890 = local_1890 + (ulong)param_4 * 4;
          local_1898 = local_1898 + param_2;
          puVar8 = puVar8 + param_2;
        } while (param_8 != uVar15);
      }
    }
LAB_001006cd:
    WebPSafeFree(puVar4);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
StoreImageToBitMask(ulong *param_1,int param_2,int param_3,undefined8 param_4,ushort *param_5,
                   long param_6,undefined8 param_7)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  uint local_90;
  char *local_58 [2];
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar10 = (byte)param_3;
  if (param_3 == 0) {
    local_90 = 1;
    uVar7 = 0;
  }
  else {
    iVar6 = 1 << (bVar10 & 0x1f);
    uVar7 = -iVar6;
    local_90 = (uint)(param_2 + -1 + iVar6) >> (bVar10 & 0x1f);
  }
  lVar8 = param_6 + (long)(int)((uint)*param_5 + (uint)*param_5 * 4) * 0x18;
  VP8LRefsCursorInit(local_58,param_4);
  if (local_58[0] != (char *)0x0) {
    uVar16 = 0;
    uVar14 = 0;
    uVar20 = 0;
    uVar23 = 0;
    do {
      pcVar5 = local_58[0];
      uVar19 = uVar7 & uVar16;
      uVar18 = uVar7 & uVar14;
      if ((uVar18 != uVar20) || (uVar23 != uVar19)) {
        lVar8 = param_6 + (long)(int)((uint)param_5[(int)(((int)uVar16 >> (bVar10 & 0x1f)) *
                                                          local_90 +
                                                         ((int)uVar14 >> (bVar10 & 0x1f)))] +
                                     (uint)param_5[(int)(((int)uVar16 >> (bVar10 & 0x1f)) * local_90
                                                        + ((int)uVar14 >> (bVar10 & 0x1f)))] * 4) *
                          0x18;
      }
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar4 = *(long *)(lVar8 + 8);
      iVar6 = *(int *)(local_58[0] + 4);
      uVar24 = (ulong)iVar6;
      if (*local_58[0] == '\0') {
        plVar17 = (long *)(lVar8 + 0x10);
        pbVar15 = &order_1;
        while( true ) {
          uVar24 = (ulong)((uint)uVar24 >> ((*pbVar15 & 3) << 3) & 0xff);
          bVar1 = *(byte *)(plVar17[-1] + uVar24);
          if (bVar1 != 0) {
            uVar2 = *(ushort *)(*plVar17 + uVar24 * 2);
            iVar6 = (int)param_1[1];
            if (0x1f < iVar6) {
              VP8LPutBitsFlushBits();
              iVar6 = (int)param_1[1];
            }
            *param_1 = *param_1 | (ulong)uVar2 << ((byte)iVar6 & 0x3f);
            *(uint *)(param_1 + 1) = (uint)bVar1 + iVar6;
          }
          pbVar15 = pbVar15 + 1;
          plVar17 = plVar17 + 3;
          if (pbVar15 == &DAT_0010477e) break;
          uVar24 = (ulong)*(uint *)(pcVar5 + 4);
        }
      }
      else if (*local_58[0] == '\x01') {
        bVar1 = *(byte *)(lVar4 + (iVar6 + 0x118));
        uVar2 = *(ushort *)(lVar3 + (long)(iVar6 + 0x118) * 2);
        if (bVar1 != 0) {
          iVar6 = (int)param_1[1];
          if (0x1f < iVar6) {
            VP8LPutBitsFlushBits(param_1);
            iVar6 = (int)param_1[1];
          }
          *(uint *)(param_1 + 1) = (uint)bVar1 + iVar6;
          *param_1 = *param_1 | (ulong)uVar2 << ((byte)iVar6 & 0x3f);
        }
      }
      else {
        uVar2 = *(ushort *)(local_58[0] + 2);
        uVar13 = (ulong)uVar2;
        if (uVar2 < 0x200) {
          bVar1 = *(byte *)(lVar4 + ((char)(&kPrefixEncodeCode)[uVar13 * 2] + 0x100));
          iVar21 = (int)(char)(&DAT_00105069)[uVar13 * 2] + (uint)bVar1;
          if (0 < iVar21) {
            iVar12 = (int)param_1[1];
            uVar20 = (uint)(byte)(&kPrefixEncodeExtraBitsValue)[uVar13] << (bVar1 & 0x1f) |
                     (uint)*(ushort *)
                            (lVar3 + (long)((char)(&kPrefixEncodeCode)[uVar13 * 2] + 0x100) * 2);
            goto joined_r0x0010104e;
          }
        }
        else {
          uVar20 = uVar2 - 1;
          iVar12 = 0x1f;
          if (uVar20 != 0) {
            for (; uVar20 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          bVar11 = (byte)(iVar12 + -1);
          lVar22 = (long)(int)(((int)uVar20 >> (bVar11 & 0x1f) & 1U) + 0x100 + iVar12 * 2);
          bVar1 = *(byte *)(lVar4 + lVar22);
          iVar21 = (uint)bVar1 + iVar12 + -1;
          uVar20 = (uVar20 & (1 << (bVar11 & 0x1f)) - 1U) << (bVar1 & 0x1f) |
                   (uint)*(ushort *)(lVar3 + lVar22 * 2);
          iVar12 = (int)param_1[1];
joined_r0x0010104e:
          if (0x1f < iVar12) {
            VP8LPutBitsFlushBits(param_1);
            iVar12 = (int)param_1[1];
          }
          *param_1 = *param_1 | (ulong)uVar20 << ((byte)iVar12 & 0x3f);
          *(int *)(param_1 + 1) = iVar21 + iVar12;
        }
        if (iVar6 < 0x200) {
          iVar6 = (int)(char)(&kPrefixEncodeCode)[uVar24 * 2];
          iVar12 = (int)(char)(&DAT_00105069)[uVar24 * 2];
          uVar23 = (uint)(byte)(&kPrefixEncodeExtraBitsValue)[uVar24];
        }
        else {
          uVar20 = iVar6 - 1;
          iVar6 = 0x1f;
          if (uVar20 != 0) {
            for (; uVar20 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar12 = iVar6 + -1;
          uVar23 = (1 << ((byte)iVar12 & 0x1f)) - 1U & uVar20;
          iVar6 = ((int)uVar20 >> ((byte)iVar12 & 0x1f) & 1U) + iVar6 * 2;
        }
        bVar1 = *(byte *)(*(long *)(lVar8 + 0x68) + (long)iVar6);
        if (bVar1 != 0) {
          uVar2 = *(ushort *)(*(long *)(lVar8 + 0x70) + (long)iVar6 * 2);
          iVar6 = (int)param_1[1];
          if (0x1f < iVar6) {
            VP8LPutBitsFlushBits(param_1);
            iVar6 = (int)param_1[1];
          }
          *param_1 = *param_1 | (ulong)uVar2 << ((byte)iVar6 & 0x3f);
          *(uint *)(param_1 + 1) = (uint)bVar1 + iVar6;
        }
        if (0 < iVar12) {
          iVar6 = (int)param_1[1];
          if (0x1f < iVar6) {
            VP8LPutBitsFlushBits(param_1);
            iVar6 = (int)param_1[1];
          }
          *param_1 = *param_1 | (long)(int)uVar23 << ((byte)iVar6 & 0x3f);
          *(int *)(param_1 + 1) = iVar12 + iVar6;
        }
      }
      for (uVar14 = uVar14 + *(ushort *)(pcVar5 + 2); param_2 <= (int)uVar14;
          uVar14 = uVar14 - param_2) {
        uVar16 = uVar16 + 1;
      }
      local_58[0] = local_58[0] + 8;
      uVar20 = uVar18;
      uVar23 = uVar19;
    } while ((local_58[0] != local_48) ||
            (VP8LRefsCursorNextBlock(local_58), local_58[0] != (char *)0x0));
  }
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = WebPEncodingSetError(param_7,1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



void StoreHuffmanCode(ulong *param_1,undefined8 param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined4 local_118 [2];
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [14];
  undefined2 uStack_da;
  undefined6 uStack_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  undefined1 auStack_88 [12];
  undefined1 local_78 [15];
  undefined1 uStack_69;
  undefined2 uStack_68;
  byte bStack_66;
  undefined1 local_58 [15];
  undefined4 uStack_49;
  long local_40;
  
  iVar3 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  if (iVar3 < 1) {
    iVar8 = (int)param_1[1];
  }
  else {
    lVar14 = *(long *)(param_4 + 2);
    lVar5 = 0;
    iVar11 = 0;
    do {
      if (*(char *)(lVar14 + lVar5) != '\0') {
        if (iVar11 == 2) {
          iVar8 = (int)param_1[1];
          goto LAB_00101268;
        }
        lVar9 = (long)iVar11;
        iVar11 = iVar11 + 1;
        *(int *)(local_f8 + lVar9 * 4 + -8) = (int)lVar5;
      }
      uVar13 = local_100;
      lVar5 = lVar5 + 1;
    } while (iVar3 != lVar5);
    iVar8 = (int)param_1[1];
    if (iVar11 != 0) {
      if (((int)local_100 < 0x100) && (uVar12 = local_100._4_4_, (int)local_100._4_4_ < 0x100)) {
        if (0x1f < iVar8) {
          VP8LPutBitsFlushBits(param_1);
          iVar8 = (int)param_1[1];
          uVar13 = uVar13 & 0xffffffff;
        }
        iVar3 = iVar8 + 1;
        uVar10 = 1L << ((byte)iVar8 & 0x3f) | *param_1;
        *param_1 = uVar10;
        *(int *)(param_1 + 1) = iVar3;
        if (0x1f < iVar3) {
          VP8LPutBitsFlushBits(param_1);
          uVar10 = *param_1;
          iVar3 = (int)param_1[1];
        }
        uVar4 = iVar3 + 1;
        *(uint *)(param_1 + 1) = uVar4;
        uVar10 = (ulong)(iVar11 - 1) << ((byte)iVar3 & 0x3f) | uVar10;
        *param_1 = uVar10;
        if ((int)uVar13 < 2) {
          if (0x1f < (int)uVar4) {
            VP8LPutBitsFlushBits(param_1);
            uVar4 = (uint)param_1[1];
          }
          iVar3 = uVar4 + 1;
          *(int *)(param_1 + 1) = iVar3;
          if (0x1f < iVar3) {
            VP8LPutBitsFlushBits(param_1);
            iVar3 = (int)param_1[1];
          }
          iVar8 = iVar3 + 1;
          uVar10 = *param_1 | (uVar13 & 0xffffffff) << ((byte)iVar3 & 0x3f);
        }
        else {
          if (0x1f < (int)uVar4) {
            VP8LPutBitsFlushBits(param_1);
            uVar10 = *param_1;
            uVar4 = (uint)param_1[1];
          }
          uVar10 = uVar10 | 1L << ((ulong)uVar4 & 0x3f);
          iVar3 = uVar4 + 1;
          *param_1 = uVar10;
          *(int *)(param_1 + 1) = iVar3;
          if (0x1f < iVar3) {
            VP8LPutBitsFlushBits(param_1);
            uVar10 = *param_1;
            iVar3 = (int)param_1[1];
          }
          iVar8 = iVar3 + 8;
          uVar10 = (long)(int)uVar13 << ((byte)iVar3 & 0x3f) | uVar10;
        }
        *param_1 = uVar10;
        *(int *)(param_1 + 1) = iVar8;
        if (iVar11 == 2) {
          if (0x1f < iVar8) {
            VP8LPutBitsFlushBits(param_1);
            iVar8 = (int)param_1[1];
          }
          *param_1 = *param_1 | (ulong)uVar12 << ((byte)iVar8 & 0x3f);
          *(int *)(param_1 + 1) = iVar8 + 8;
        }
        goto LAB_0010168a;
      }
LAB_00101268:
      local_118[0] = 0x13;
      local_78 = SUB1615((undefined1  [16])0x0,0);
      local_e8 = SUB1614((undefined1  [16])0x0,0);
      uStack_69 = 0;
      uStack_68 = 0;
      bStack_66 = 0;
      uStack_da = 0;
      uStack_d8 = 0;
      local_f8 = (undefined1  [16])0x0;
      local_110 = local_78;
      puStack_108 = local_f8;
      if (0x1f < iVar8) {
        VP8LPutBitsFlushBits(param_1);
        iVar8 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar8 + 1;
      iVar3 = VP8LCreateCompressedHuffmanTree(param_4,param_3,iVar3);
      local_98 = SUB1612((undefined1  [16])0x0,0);
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      uStack_8c = 0;
      auStack_88 = SUB1612((undefined1  [16])0x0,4);
      local_58 = SUB1615((undefined1  [16])0x0,0);
      uStack_49 = 0;
      if (0 < iVar3) {
        pbVar6 = param_3;
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 2;
          *(int *)(local_c8 + (ulong)bVar1 * 4) = *(int *)(local_c8 + (ulong)bVar1 * 4) + 1;
        } while (param_3 + (long)iVar3 * 2 != pbVar6);
      }
      VP8LCreateHuffmanTree(local_c8,7,local_58,param_2);
      lVar14 = 0x13;
      do {
        lVar5 = lVar14;
        if (lVar5 == 4) {
          iVar8 = (int)param_1[1];
          lVar14 = 4;
          lVar5 = 0;
          goto joined_r0x001016c7;
        }
        lVar14 = lVar5 + -1;
      } while (local_78[(byte)(&DAT_0010477f)[lVar5]] == '\0');
      iVar8 = (int)param_1[1];
      lVar14 = (long)(int)lVar5;
      lVar5 = (long)((int)lVar5 + -4);
joined_r0x001016c7:
      if (iVar8 < 0x20) {
        uVar13 = lVar5 << ((byte)iVar8 & 0x3f) | *param_1;
      }
      else {
        VP8LPutBitsFlushBits(param_1);
        iVar8 = (int)param_1[1];
        uVar13 = lVar5 << ((byte)iVar8 & 0x3f) | *param_1;
      }
      iVar8 = iVar8 + 4;
      pbVar6 = &kStorageOrder_2;
      *param_1 = uVar13;
      *(int *)(param_1 + 1) = iVar8;
      do {
        bVar1 = local_78[*pbVar6];
        if (0x1f < iVar8) {
          VP8LPutBitsFlushBits(param_1);
          iVar8 = (int)param_1[1];
        }
        pbVar6 = pbVar6 + 1;
        bVar7 = (byte)iVar8;
        iVar8 = iVar8 + 3;
        *param_1 = *param_1 | (ulong)bVar1 << (bVar7 & 0x3f);
        *(int *)(param_1 + 1) = iVar8;
      } while (pbVar6 != &kStorageOrder_2 + lVar14);
      ClearHuffmanTreeIfOnlyOneSymbol(local_118);
      if (iVar3 < 1) {
        if ((int)param_1[1] < 0x20) {
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          goto LAB_0010168a;
        }
LAB_00101740:
        VP8LPutBitsFlushBits(param_1);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        if (iVar3 < 1) goto LAB_0010168a;
      }
      else {
        lVar14 = (long)(int)(iVar3 - 1U);
        iVar8 = 0;
LAB_00101502:
        bVar1 = param_3[lVar14 * 2];
        iVar11 = (int)lVar14;
        if ((bVar1 == 0) || (bVar1 == 0x11)) {
          iVar8 = iVar8 + (uint)(byte)local_78[(int)(uint)bVar1];
          if (bVar1 == 0x11) {
            iVar8 = iVar8 + 3;
          }
joined_r0x0010152d:
          if (lVar14 + -1 == ((long)iVar3 + -2) - (ulong)(iVar3 - 1U)) goto LAB_00101532;
          lVar14 = lVar14 + -1;
          goto LAB_00101502;
        }
        if (bVar1 == 0x12) {
          iVar8 = iVar8 + 7 + (uint)bStack_66;
          goto joined_r0x0010152d;
        }
        iVar11 = iVar11 + 1;
LAB_00101532:
        if ((iVar11 < 2) || (iVar8 < 0xd)) {
          if (0x1f < (int)param_1[1]) goto LAB_00101740;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        }
        else {
          iVar3 = (int)param_1[1];
          if (0x1f < iVar3) {
            VP8LPutBitsFlushBits(param_1);
            iVar3 = (int)param_1[1];
          }
          iVar8 = iVar3 + 1;
          *param_1 = 1L << ((byte)iVar3 & 0x3f) | *param_1;
          *(int *)(param_1 + 1) = iVar8;
          if (iVar11 == 2) {
            if (0x1f < iVar8) {
              VP8LPutBitsFlushBits(param_1);
            }
            iVar3 = (int)param_1[1] + 5;
          }
          else {
            uVar12 = iVar11 - 2;
            iVar3 = 0x1f;
            if (uVar12 != 0) {
              for (; uVar12 >> iVar3 == 0; iVar3 = iVar3 + -1) {
              }
            }
            if (0x1f < iVar8) {
              VP8LPutBitsFlushBits(param_1);
            }
            iVar8 = (int)param_1[1] + 3;
            uVar13 = (long)(iVar3 >> 1) << ((byte)(int)param_1[1] & 0x3f) | *param_1;
            *param_1 = uVar13;
            *(int *)(param_1 + 1) = iVar8;
            if (0x1f < iVar8) {
              VP8LPutBitsFlushBits(param_1);
              uVar13 = *param_1;
              iVar8 = (int)param_1[1];
            }
            iVar3 = ((iVar3 >> 1) + 1) * 2 + iVar8;
            *param_1 = (long)(int)uVar12 << ((byte)iVar8 & 0x3f) | uVar13;
          }
          *(int *)(param_1 + 1) = iVar3;
          iVar3 = iVar11;
        }
      }
      pbVar6 = param_3 + (long)iVar3 * 2;
      do {
        bVar1 = *param_3;
        uVar13 = (ulong)param_3[1];
        bVar7 = local_110[bVar1];
        if (bVar7 != 0) {
          uVar2 = *(ushort *)(puStack_108 + (ulong)bVar1 * 2);
          iVar3 = (int)param_1[1];
          if (0x1f < iVar3) {
            VP8LPutBitsFlushBits(param_1);
            iVar3 = (int)param_1[1];
          }
          *param_1 = *param_1 | (ulong)uVar2 << ((byte)iVar3 & 0x3f);
          *(uint *)(param_1 + 1) = (uint)bVar7 + iVar3;
        }
        if (bVar1 == 0x11) {
          iVar3 = (int)param_1[1];
          if (0x1f < iVar3) {
            VP8LPutBitsFlushBits(param_1);
            iVar3 = (int)param_1[1];
          }
          *param_1 = *param_1 | uVar13 << ((byte)iVar3 & 0x3f);
          *(int *)(param_1 + 1) = iVar3 + 3;
        }
        else if (bVar1 == 0x12) {
          iVar3 = (int)param_1[1];
          if (0x1f < iVar3) {
            VP8LPutBitsFlushBits(param_1);
            iVar3 = (int)param_1[1];
          }
          *param_1 = *param_1 | uVar13 << ((byte)iVar3 & 0x3f);
          *(int *)(param_1 + 1) = iVar3 + 7;
        }
        else if (bVar1 == 0x10) {
          iVar3 = (int)param_1[1];
          if (0x1f < iVar3) {
            VP8LPutBitsFlushBits(param_1);
            iVar3 = (int)param_1[1];
          }
          *param_1 = *param_1 | uVar13 << ((byte)iVar3 & 0x3f);
          *(int *)(param_1 + 1) = iVar3 + 2;
        }
        param_3 = param_3 + 2;
      } while (param_3 != pbVar6);
      goto LAB_0010168a;
    }
  }
  if (0x1f < iVar8) {
    VP8LPutBitsFlushBits(param_1);
    iVar8 = (int)param_1[1];
  }
  *param_1 = *param_1 | 1L << ((byte)iVar8 & 0x3f);
  *(int *)(param_1 + 1) = iVar8 + 4;
LAB_0010168a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool EncodeImageNoHuffman
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,int param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined4 local_c0;
  undefined2 local_ba;
  long local_b8 [3];
  int local_a0;
  int local_88;
  int local_70;
  int local_58;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  plVar5 = local_b8;
  for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar5 = 0;
    plVar5 = plVar5 + 1;
  }
  local_ba = 0;
  lVar4 = WebPSafeMalloc(0x39,0x10);
  if (lVar4 != 0) {
    iVar1 = VP8LHashChainFill(param_3,param_7,param_2,param_5,param_6,param_8,param_9,param_10 / 2,
                              param_11);
    if ((iVar1 == 0) ||
       (iVar1 = VP8LGetBackwardReferences
                          (param_5,param_6,param_2,param_7,0,3,local_c0,0,param_3,param_4,&local_c0,
                           param_9,param_10 - param_10 / 2,param_11), iVar1 == 0)) {
      lVar2 = 0;
      lVar3 = 0;
      goto LAB_00101a53;
    }
    lVar2 = VP8LAllocateHistogramSet(1,local_c0);
    if (lVar2 != 0) {
      VP8LHistogramSetClear(lVar2);
      VP8LHistogramStoreRefs(param_4,**(undefined8 **)(lVar2 + 8));
      iVar1 = GetHuffBitLengthsAndCodes(lVar2,local_b8);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (0x1f < iVar1) {
          VP8LPutBitsFlushBits(param_1);
          iVar1 = *(int *)(param_1 + 8);
        }
        *(int *)(param_1 + 8) = iVar1 + 1;
        if ((int)local_b8[0] < local_a0) {
          local_b8[0]._0_4_ = local_a0;
        }
        if ((int)local_b8[0] < 0) {
          local_b8[0]._0_4_ = 0;
        }
        if ((int)local_b8[0] < local_88) {
          local_b8[0]._0_4_ = local_88;
        }
        if ((int)local_b8[0] < local_70) {
          local_b8[0]._0_4_ = local_70;
        }
        if ((int)local_b8[0] < local_58) {
          local_b8[0]._0_4_ = local_58;
        }
        lVar3 = WebPSafeMalloc((long)(int)local_b8[0],2);
        plVar5 = local_b8;
        if (lVar3 != 0) {
          do {
            StoreHuffmanCode(param_1,lVar4,lVar3,plVar5);
            plVar6 = plVar5 + 3;
            ClearHuffmanTreeIfOnlyOneSymbol(plVar5);
            plVar5 = plVar6;
          } while (plVar6 != local_40);
          StoreImageToBitMask(param_1,param_5,0,param_4,&local_ba,local_b8,param_9);
          goto LAB_00101a53;
        }
      }
      lVar3 = 0;
      WebPEncodingSetError(param_9,1);
      goto LAB_00101a53;
    }
  }
  lVar2 = 0;
  lVar3 = 0;
  WebPEncodingSetError(param_9,1);
LAB_00101a53:
  WebPSafeFree(lVar3);
  WebPSafeFree(lVar4);
  VP8LFreeHistogramSet(lVar2);
  WebPSafeFree(local_b8[2]);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(int *)(param_9 + 0x88) == 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool EncodeStreamHook(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  size_t __n;
  ushort uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  void *pvVar32;
  long lVar33;
  int *piVar34;
  long lVar35;
  int *piVar36;
  ulong uVar37;
  byte bVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  void *__src;
  uint uVar45;
  uint uVar46;
  sbyte sVar47;
  char cVar48;
  long lVar49;
  int *piVar50;
  long in_FS_OFFSET;
  bool bVar51;
  uint *local_640;
  long *local_630;
  uint local_610;
  int iStack_608;
  ulong uStack_5d8;
  long lStack_5c0;
  ulong local_5b8;
  int local_578;
  int local_56c;
  int local_558;
  int local_520;
  int iStack_51c;
  undefined1 auStack_518 [16];
  ulong local_508;
  ulong uStack_500;
  ulong local_4f8;
  ulong uStack_4f0;
  ulong local_4e8;
  ulong uStack_4e0;
  undefined1 local_4d8 [48];
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined1 auStack_478 [48];
  uint local_448 [258];
  long local_40;
  
  lVar10 = param_1[1];
  lVar11 = *param_1;
  puVar12 = (ulong *)param_1[2];
  plVar13 = (long *)param_1[3];
  iVar4 = (int)param_1[0x35];
  fVar5 = *(float *)(lVar11 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)((long)param_1 + 0x1ac);
  iVar22 = *(int *)(lVar11 + 8);
  lVar14 = param_1[0x36];
  uVar7 = *(undefined4 *)(lVar10 + 8);
  iVar8 = *(int *)(lVar10 + 0xc);
  local_508 = *puVar12;
  uStack_500 = puVar12[1];
  uVar42 = puVar12[3];
  local_520 = 2;
  uVar43 = puVar12[2];
  uVar18 = puVar12[1];
  local_4f8 = puVar12[2];
  uStack_4f0 = puVar12[3];
  local_4e8 = puVar12[4];
  uStack_4e0 = puVar12[5];
  iVar21 = VP8LBitWriterInit(local_4d8,0);
  if (iVar21 == 0) {
LAB_0010211b:
    WebPEncodingSetError(lVar10,1);
  }
  else {
    if (iVar4 < 2) {
      if (iVar4 == 1) goto LAB_00101d77;
    }
    else {
      iVar21 = VP8LBitWriterClone(puVar12,local_4d8);
      if (iVar21 == 0) goto LAB_0010211b;
LAB_00101d77:
      bVar51 = iVar22 == 0;
      local_56c = 0;
      iVar22 = (int)fVar5;
      local_558 = 0;
      local_5b8 = 0xffffffffffffffff;
      local_578 = ((int)uVar18 + 7 >> 3) + ((int)uVar42 - (int)uVar43);
      uVar23 = (uint)(0x61 / (long)iVar4);
      uVar45 = uVar23 - ((int)uVar23 >> 2);
      local_640 = (uint *)(param_1 + 4);
      puVar2 = local_640 + (long)iVar4 * 7;
      plVar1 = plVar13 + 0x10d;
      do {
        uVar26 = *local_640;
        uVar25 = 0;
        if (uVar26 < 6) {
          uVar25 = (uint)((0x2aUL >> ((ulong)uVar26 & 0x3f) & 1) != 0);
        }
        if ((bVar51) || (uVar26 - 4 < 2)) {
          uVar46 = 0;
        }
        else {
          uVar46 = 0;
          if (iVar6 == 0) {
            uVar46 = uVar25;
          }
        }
        *(uint *)(plVar13 + 10) = uVar46;
        *(uint *)((long)plVar13 + 0x5c) = (uint)(uVar26 - 4 < 2);
        *(uint *)((long)plVar13 + 0x54) = (uint)(uVar26 - 2 < 2);
        *(uint *)(plVar13 + 0xb) = uVar25;
        *(undefined4 *)((long)plVar13 + 0x4c) = 0;
        VP8LBackwardRefsClear(plVar1);
        VP8LBackwardRefsClear(plVar13 + 0x112);
        local_610 = uVar23;
        if ((*(int *)(lVar11 + 0x5c) < 100) && (plVar13[0xb] == 0)) {
          iVar21 = AllocateTransformBuffer(plVar13,uVar7,iVar8);
          if (iVar21 == 0) goto LAB_001020a0;
          if (((int)plVar13[3] != 2) &&
             (iVar21 = VP8ApplyNearLossless(lVar10,*(undefined4 *)(lVar11 + 0x5c),plVar13[2]),
             iVar21 == 0)) goto LAB_0010211b;
          *(undefined4 *)(plVar13 + 3) = 2;
          if (*(int *)((long)plVar13 + 0x5c) != 0) {
            lVar49 = plVar13[1];
LAB_00101ef5:
            iVar21 = PaletteSort(local_640[1],lVar49,(long)plVar13 + 0x464,(int)plVar13[0xc]);
            if (iVar21 == 0) {
              WebPEncodingSetError(plVar13[1],1);
              goto LAB_001020a0;
            }
            iVar21 = (int)puVar12[1];
            lVar49 = plVar13[0xc];
            if (0x1f < iVar21) {
              VP8LPutBitsFlushBits(puVar12);
              iVar21 = (int)puVar12[1];
            }
            iVar39 = iVar21 + 1;
            uVar42 = 1L << ((byte)iVar21 & 0x3f) | *puVar12;
            *puVar12 = uVar42;
            *(int *)(puVar12 + 1) = iVar39;
            if (0x1f < iVar39) {
              VP8LPutBitsFlushBits(puVar12);
              uVar42 = *puVar12;
              iVar39 = (int)puVar12[1];
            }
            uVar26 = (int)lVar49 - 1;
            iVar21 = iVar39 + 2;
            uVar42 = 3L << ((byte)iVar39 & 0x3f) | uVar42;
            *(int *)(puVar12 + 1) = iVar21;
            *puVar12 = uVar42;
            if (0x1f < iVar21) {
              VP8LPutBitsFlushBits(puVar12);
              uVar42 = *puVar12;
              iVar21 = (int)puVar12[1];
            }
            *(int *)(puVar12 + 1) = iVar21 + 8;
            lVar41 = (long)(int)uVar26;
            *puVar12 = (ulong)uVar26 << ((byte)iVar21 & 0x3f) | uVar42;
            while (0 < (int)uVar26) {
              uVar26 = *(uint *)((long)plVar13 + lVar41 * 4 + 0x60);
              uVar25 = *(uint *)((long)plVar13 + lVar41 * 4 + 100);
              local_448[lVar41] =
                   (uVar25 | 0xff00ff00) - (uVar26 & 0xff00ff) & 0xff00ff |
                   (uVar25 | 0xff00ff) - (uVar26 & 0xff00ff00) & 0xff00ff00;
              lVar41 = lVar41 + -1;
              uVar26 = (uint)lVar41;
            }
            local_448[0] = *(uint *)((long)plVar13 + 100);
            iVar21 = EncodeImageNoHuffman
                               (puVar12,local_448,plVar13 + 0x121,plVar1,(int)lVar49,1,0x14,bVar51,
                                plVar13[1],(int)uVar23 >> 2,&local_520);
            if (iVar21 == 0) goto LAB_001020a0;
            lVar49 = plVar13[1];
            iVar21 = (int)plVar13[0xc];
            uVar15 = *(undefined8 *)(lVar49 + 0x48);
            iVar39 = *(int *)(lVar49 + 8);
            uVar31 = *(undefined4 *)(lVar49 + 0xc);
            uVar9 = *(undefined4 *)(lVar49 + 0x50);
            if (iVar21 < 5) {
              iVar24 = (uint)(iVar21 < 3) * 4 + 4;
              sVar47 = (iVar21 < 3) + 2;
              cVar48 = (iVar21 < 3) + '\x02';
            }
            else {
              sVar47 = iVar21 < 0x11;
              iVar24 = 1 << (iVar21 < 0x11);
              cVar48 = sVar47;
            }
            iVar24 = AllocateTransformBuffer(plVar13,(uint)(iVar39 + -1 + iVar24) >> sVar47,uVar31);
            if ((iVar24 == 0) ||
               (iVar21 = ApplyPalette(uVar15,uVar9,plVar13[2],(int)plVar13[8],(long)plVar13 + 100,
                                      iVar21,iVar39,uVar31,cVar48,lVar49), iVar21 == 0))
            goto LAB_001020a0;
            uVar26 = *(uint *)(plVar13 + 0xc);
            *(undefined4 *)(plVar13 + 3) = 3;
            local_610 = uVar45;
            if ((int)uVar26 < 0x400) {
              iVar21 = 0x1f;
              if (uVar26 != 0) {
                for (; uVar26 >> iVar21 == 0; iVar21 = iVar21 + -1) {
                }
              }
              *(int *)((long)plVar13 + 0x4c) = iVar21 + 1;
            }
          }
        }
        else {
          lVar49 = plVar13[1];
          *(undefined4 *)(plVar13 + 3) = 0;
          if (*(int *)((long)plVar13 + 0x5c) != 0) goto LAB_00101ef5;
          iVar21 = *(int *)(lVar49 + 0xc);
          iVar39 = *(int *)(lVar49 + 8);
          iVar24 = AllocateTransformBuffer(plVar13,iVar39,iVar21);
          if (iVar24 == 0) goto LAB_001020a0;
          if ((int)plVar13[3] != 1) {
            pvVar32 = (void *)plVar13[2];
            __src = *(void **)(lVar49 + 0x48);
            __n = (long)iVar39 * 4;
            if (0 < iVar21) {
              iVar39 = 0;
              do {
                iVar39 = iVar39 + 1;
                pvVar32 = memcpy(pvVar32,__src,__n);
                pvVar32 = (void *)((long)pvVar32 + __n);
                __src = (void *)((long)__src + (long)*(int *)(lVar49 + 0x50) * 4);
              } while (iVar21 != iVar39);
            }
            *(undefined4 *)(plVar13 + 3) = 1;
          }
        }
        if (*(int *)((long)plVar13 + 0x54) == 0) {
          iVar21 = (int)plVar13[0xb];
        }
        else {
          iVar21 = (int)puVar12[1];
          lVar49 = plVar13[8];
          if (0x1f < iVar21) {
            VP8LPutBitsFlushBits(puVar12);
            iVar21 = (int)puVar12[1];
          }
          iVar39 = iVar21 + 1;
          uVar42 = 1L << ((byte)iVar21 & 0x3f) | *puVar12;
          *puVar12 = uVar42;
          *(int *)(puVar12 + 1) = iVar39;
          if (0x1f < iVar39) {
            VP8LPutBitsFlushBits(puVar12);
            uVar42 = *puVar12;
            iVar39 = (int)puVar12[1];
          }
          lVar41 = plVar13[2];
          *(int *)(puVar12 + 1) = iVar39 + 2;
          *puVar12 = 2L << ((byte)iVar39 & 0x3f) | uVar42;
          (*_VP8LSubtractGreenFromBlueAndRed)(lVar41,iVar8 * (int)lVar49);
          iVar21 = (int)plVar13[0xb];
        }
        if (iVar21 != 0) {
          lVar49 = plVar13[8];
          iVar21 = (int)plVar13[9];
          uVar31 = 100;
          if (*(int *)((long)plVar13 + 0x5c) == 0) {
            uVar31 = *(undefined4 *)(*plVar13 + 0x5c);
          }
          iVar39 = VP8LResidualImage((int)lVar49,iVar8,iVar21,bVar51,plVar13[2],plVar13[4],
                                     plVar13[5],uVar31,*(undefined4 *)(*plVar13 + 0x60),
                                     *(undefined4 *)((long)plVar13 + 0x54),plVar13[1],
                                     (ulong)local_610 / 6,&local_520);
          if (iVar39 == 0) goto LAB_001020a0;
          iVar39 = (int)puVar12[1];
          if (0x1f < iVar39) {
            VP8LPutBitsFlushBits(puVar12);
            iVar39 = (int)puVar12[1];
          }
          *puVar12 = *puVar12 | 1L << ((byte)iVar39 & 0x3f);
          iVar39 = iVar39 + 1;
          *(int *)(puVar12 + 1) = iVar39;
          if (0x1f < iVar39) {
            VP8LPutBitsFlushBits(puVar12);
            iVar39 = (int)puVar12[1];
          }
          iVar39 = iVar39 + 2;
          *(int *)(puVar12 + 1) = iVar39;
          if (0x1f < iVar39) {
            VP8LPutBitsFlushBits(puVar12);
            iVar39 = (int)puVar12[1];
          }
          bVar38 = (byte)iVar21;
          iVar24 = 1 << (bVar38 & 0x1f);
          *(int *)(puVar12 + 1) = iVar39 + 3;
          *puVar12 = *puVar12 | (ulong)(iVar21 - 2) << ((byte)iVar39 & 0x3f);
          iVar21 = EncodeImageNoHuffman
                             (puVar12,plVar13[5],plVar13 + 0x121,plVar1,
                              (uint)((int)lVar49 + -1 + iVar24) >> (bVar38 & 0x1f),
                              (uint)(iVar24 + iVar8 + -1) >> (bVar38 & 0x1f),iVar22,bVar51,
                              plVar13[1],local_610 / 3 - local_610 / 6,&local_520);
          if (iVar21 == 0) goto LAB_001020a0;
          local_610 = local_610 - local_610 / 3;
        }
        if ((int)plVar13[10] != 0) {
          lVar49 = plVar13[8];
          iVar21 = (int)plVar13[9];
          uVar26 = local_610 + 3;
          if (-1 < (int)local_610) {
            uVar26 = local_610;
          }
          iVar39 = VP8LColorSpaceTransform
                             ((int)lVar49,iVar8,iVar21,iVar22,plVar13[2],plVar13[5],plVar13[1],
                              (int)uVar26 >> 2,&local_520);
          if (iVar39 == 0) goto LAB_001020a0;
          iVar39 = (int)puVar12[1];
          if (0x1f < iVar39) {
            VP8LPutBitsFlushBits(puVar12);
            iVar39 = (int)puVar12[1];
          }
          uVar25 = iVar39 + 1;
          uVar42 = 1L << ((byte)iVar39 & 0x3f) | *puVar12;
          *(uint *)(puVar12 + 1) = uVar25;
          *puVar12 = uVar42;
          if (0x1f < (int)uVar25) {
            VP8LPutBitsFlushBits(puVar12);
            uVar42 = *puVar12;
            uVar25 = (uint)puVar12[1];
          }
          uVar42 = uVar42 | 1L << ((ulong)uVar25 & 0x3f);
          iVar39 = uVar25 + 2;
          *puVar12 = uVar42;
          *(int *)(puVar12 + 1) = iVar39;
          if (0x1f < iVar39) {
            VP8LPutBitsFlushBits(puVar12);
            uVar42 = *puVar12;
            iVar39 = (int)puVar12[1];
          }
          bVar38 = (byte)iVar21;
          iVar24 = 1 << (bVar38 & 0x1f);
          *(int *)(puVar12 + 1) = iVar39 + 3;
          *puVar12 = (ulong)(iVar21 - 2) << ((byte)iVar39 & 0x3f) | uVar42;
          iVar21 = EncodeImageNoHuffman
                             (puVar12,plVar13[5],plVar13 + 0x121,plVar1,
                              (uint)((int)lVar49 + -1 + iVar24) >> (bVar38 & 0x1f),
                              (uint)(iVar24 + iVar8 + -1) >> (bVar38 & 0x1f),iVar22,bVar51,
                              plVar13[1],(int)local_610 / 2 - ((int)uVar26 >> 2),&local_520);
          if (iVar21 == 0) goto LAB_001020a0;
          local_610 = local_610 - (int)local_610 / 2;
        }
        iVar21 = (int)puVar12[1];
        if (0x1f < iVar21) {
          VP8LPutBitsFlushBits(puVar12);
          iVar21 = (int)puVar12[1];
        }
        iVar20 = local_520;
        iVar39 = *(int *)((long)plVar13 + 0x44);
        iVar24 = (int)plVar13[8];
        *(int *)(puVar12 + 1) = iVar21 + 1;
        lVar49 = plVar13[2];
        bVar38 = (byte)iVar39;
        iVar21 = 1 << (bVar38 & 0x1f);
        uVar26 = (uint)(iVar21 + iVar8 + -1) >> (bVar38 & 0x1f);
        uVar25 = (uint)(iVar24 + -1 + iVar21) >> (bVar38 & 0x1f);
        uVar46 = uVar25 * uVar26;
        lVar41 = WebPSafeMalloc(0x39,0x10);
        uVar42 = (ulong)uVar46;
        lVar33 = WebPSafeMalloc(uVar42,2);
        uStack_4a8 = *puVar12;
        uStack_4a0 = puVar12[1];
        uStack_498 = puVar12[2];
        uStack_490 = puVar12[3];
        uStack_488 = puVar12[4];
        uStack_480 = puVar12[5];
        auStack_518 = (undefined1  [16])0x0;
        iVar21 = VP8LBitWriterInit(auStack_478,0);
        if ((((iVar21 == 0) || (lVar41 == 0)) || (lVar33 == 0)) ||
           (iVar21 = VP8LHashChainInit(auStack_518,uVar46), iVar21 == 0)) {
LAB_00102130:
          WebPEncodingSetError(lVar10,1);
        }
        else {
          iVar21 = VP8LHashChainFill(plVar13 + 0x121,iVar22,lVar49,iVar24,iVar8,bVar51,lVar10,
                                     (int)local_610 / 5,&local_520);
          if (iVar21 != 0) {
            iVar21 = *(int *)((long)plVar13 + 0x4c);
            if (*(int *)((long)plVar13 + 0x4c) == 0) {
              iVar21 = 10;
            }
            uVar44 = local_640[6];
            if ((1 < (int)uVar44) || (local_640[3] != 0)) {
              iVar27 = VP8LBitWriterClone(puVar12,auStack_478);
              if (iVar27 == 0) goto LAB_00102130;
              uVar44 = local_640[6];
            }
            if (0 < (int)uVar44) {
              lStack_5c0 = 0;
              uStack_5d8 = 0xffffffffffffffff;
              do {
                iStack_608 = (int)(local_610 - (int)local_610 / 5) / (int)uVar44;
                iVar27 = iStack_608 + 3;
                if (-1 < iStack_608) {
                  iVar27 = iStack_608;
                }
                iStack_608 = iStack_608 - (iVar27 >> 2);
                iVar28 = VP8LGetBackwardReferences
                                   (iVar24,iVar8,lVar49,iVar22,bVar51,local_640[lStack_5c0 * 2 + 2],
                                    iVar21,local_640[lStack_5c0 * 2 + 3],plVar13 + 0x121,plVar1,
                                    &iStack_51c,lVar10,iVar27 >> 2,&local_520);
                local_630 = plVar1;
                iVar27 = iStack_51c;
                if (iVar28 == 0) {
                  lVar35 = 0;
                  piVar34 = (int *)0x0;
LAB_00103141:
                  WebPSafeFree(0);
                  WebPSafeFree(lVar41);
                  VP8LFreeHistogramSet(piVar34);
                  VP8LFreeHistogram(lVar35);
                  VP8LHashChainClear(auStack_518);
                  goto LAB_00102167;
                }
                do {
                  VP8LBitWriterReset(&uStack_4a8,puVar12);
                  piVar34 = (int *)VP8LAllocateHistogramSet(uVar46,iVar27);
                  lVar35 = VP8LAllocateHistogram(iVar27);
                  if ((piVar34 == (int *)0x0) || (lVar35 == 0)) {
                    WebPEncodingSetError(lVar10,1);
                    goto LAB_00103141;
                  }
                  iVar28 = iStack_608 / 3;
                  iStack_608 = iStack_608 - iVar28;
                  iVar28 = VP8LGetHistoImageSymbols
                                     (iVar24,iVar8,local_630,iVar22,bVar51,iVar39,iVar27,piVar34,
                                      lVar35,lVar33,lVar10,iVar28,&local_520);
                  if (iVar28 == 0) goto LAB_00103141;
                  iVar28 = *piVar34;
                  iVar30 = iVar28 * 5;
                  piVar36 = (int *)WebPSafeCalloc((long)iVar30,0x18);
                  if ((piVar36 == (int *)0x0) ||
                     (iVar29 = GetHuffBitLengthsAndCodes(piVar34,piVar36), iVar29 == 0)) {
                    WebPEncodingSetError(lVar10,1);
                    WebPSafeFree(0);
                    WebPSafeFree(lVar41);
                    VP8LFreeHistogramSet(piVar34);
                    VP8LFreeHistogram(lVar35);
                    VP8LHashChainClear(auStack_518);
                    if (piVar36 != (int *)0x0) {
LAB_00102a4d:
                      WebPSafeFree(*(undefined8 *)(piVar36 + 4));
                      WebPSafeFree(piVar36);
                    }
                    goto LAB_00102167;
                  }
                  VP8LFreeHistogramSet(piVar34);
                  VP8LFreeHistogram();
                  iVar29 = (int)puVar12[1];
                  if (iVar27 < 1) {
                    if (0x1f < iVar29) {
                      VP8LPutBitsFlushBits();
                      iVar29 = (int)puVar12[1];
                    }
                    iVar29 = iVar29 + 1;
                    *(int *)(puVar12 + 1) = iVar29;
                  }
                  else {
                    if (0x1f < iVar29) {
                      VP8LPutBitsFlushBits();
                      iVar29 = (int)puVar12[1];
                    }
                    iVar40 = iVar29 + 1;
                    uVar43 = 1L << ((byte)iVar29 & 0x3f) | *puVar12;
                    *puVar12 = uVar43;
                    *(int *)(puVar12 + 1) = iVar40;
                    if (0x1f < iVar40) {
                      VP8LPutBitsFlushBits();
                      uVar43 = *puVar12;
                      iVar40 = (int)puVar12[1];
                    }
                    iVar29 = iVar40 + 4;
                    *(int *)(puVar12 + 1) = iVar29;
                    *puVar12 = (long)iVar27 << ((byte)iVar40 & 0x3f) | uVar43;
                  }
                  if (0x1f < iVar29) {
                    VP8LPutBitsFlushBits();
                    iVar29 = (int)puVar12[1];
                  }
                  *puVar12 = *puVar12 | (ulong)(1 < iVar28) << ((byte)iVar29 & 0x3f);
                  *(int *)(puVar12 + 1) = iVar29 + 1;
                  if (1 < iVar28) {
                    lVar35 = WebPSafeMalloc(uVar42,4);
                    if (lVar35 == 0) goto LAB_00102ebc;
                    uVar43 = 0;
                    uVar44 = 0;
                    if (uVar46 != 0) {
                      do {
                        uVar3 = *(ushort *)(lVar33 + uVar43 * 2);
                        *(uint *)(lVar35 + uVar43 * 4) = (uint)uVar3 << 8;
                        if (uVar44 <= uVar3) {
                          uVar44 = uVar3 + 1;
                        }
                        uVar43 = uVar43 + 1;
                      } while (uVar42 != uVar43);
                    }
                    iVar28 = (int)puVar12[1];
                    if (0x1f < iVar28) {
                      VP8LPutBitsFlushBits(puVar12);
                      iVar28 = (int)puVar12[1];
                    }
                    *puVar12 = *puVar12 | (ulong)(iVar39 - 2) << ((byte)iVar28 & 0x3f);
                    *(int *)(puVar12 + 1) = iVar28 + 3;
                    iVar28 = iStack_608 / 2;
                    iStack_608 = iStack_608 - iVar28;
                    iVar28 = EncodeImageNoHuffman
                                       (puVar12,lVar35,auStack_518,plVar13 + 0x117,uVar25,uVar26,
                                        iVar22,bVar51,lVar10,iVar28,&local_520);
                    if (iVar28 != 0) {
                      WebPSafeFree();
                      iVar30 = uVar44 * 5;
                      if (iVar30 == 0) goto LAB_00102ea4;
                      goto LAB_00102854;
                    }
                    WebPSafeFree(lVar35);
LAB_00102ed2:
                    lVar35 = 0;
LAB_00102ed4:
                    WebPSafeFree(lVar35);
                    WebPSafeFree(lVar41);
                    VP8LFreeHistogramSet(0);
                    VP8LFreeHistogram(0);
                    VP8LHashChainClear(auStack_518);
                    goto LAB_00102a4d;
                  }
                  if (iVar30 < 1) {
LAB_00102ea4:
                    lVar35 = WebPSafeMalloc(0,2);
                    if (lVar35 == 0) goto LAB_00102ebc;
                  }
                  else {
LAB_00102854:
                    lVar35 = 0;
                    piVar34 = piVar36;
                    if (((long)iVar30 * 3 & 1U) == 0) goto LAB_00102880;
                    if (0 < *piVar36) {
                      lVar35 = (long)*piVar36;
                    }
                    for (piVar34 = piVar36 + 6; piVar34 != piVar36 + (long)iVar30 * 6;
                        piVar34 = piVar34 + 0xc) {
LAB_00102880:
                      if ((int)lVar35 < *piVar34) {
                        lVar35 = (long)*piVar34;
                      }
                      if ((int)lVar35 < piVar34[6]) {
                        lVar35 = (long)piVar34[6];
                      }
                    }
                    lVar35 = WebPSafeMalloc(lVar35,2);
                    piVar34 = piVar36;
                    if (lVar35 == 0) {
LAB_00102ebc:
                      WebPEncodingSetError(lVar10,1);
                      goto LAB_00102ed2;
                    }
                    do {
                      StoreHuffmanCode(puVar12,lVar41,lVar35,piVar34);
                      piVar50 = piVar34 + 6;
                      ClearHuffmanTreeIfOnlyOneSymbol(piVar34);
                      piVar34 = piVar50;
                    } while (piVar50 != piVar36 + (long)iVar30 * 6);
                  }
                  uVar43 = puVar12[2];
                  uVar18 = puVar12[3];
                  uVar19 = puVar12[1];
                  iVar28 = StoreImageToBitMask(puVar12,iVar24,iVar39,local_630,lVar33,piVar36,lVar10
                                              );
                  if (iVar28 == 0) goto LAB_00102ed4;
                  uVar16 = puVar12[3];
                  uVar17 = puVar12[2];
                  uVar37 = (long)((int)puVar12[1] + 7 >> 3) + (uVar16 - uVar17);
                  if (uVar37 < uStack_5d8) {
                    local_56c = ((int)uVar18 - (int)uVar43) + ((int)uVar19 + 7 >> 3);
                    local_558 = local_56c - local_578;
                    *(int *)((long)plVar13 + 0x4c) = iVar27;
                    local_56c = ((int)(uVar16 - uVar17) + ((int)puVar12[1] + 7 >> 3)) - local_56c;
                    VP8LBitWriterSwap(puVar12,auStack_478);
                    uStack_5d8 = uVar37;
                  }
                  WebPSafeFree(lVar35);
                  WebPSafeFree(*(undefined8 *)(piVar36 + 4));
                  WebPSafeFree(piVar36);
                  if ((local_640[lStack_5c0 * 2 + 3] == 0) || (local_630 == plVar13 + 0x112)) break;
                  local_630 = local_630 + 5;
                  iVar27 = 0;
                } while (iStack_51c != 0);
                lStack_5c0 = lStack_5c0 + 1;
                uVar44 = local_640[6];
              } while ((int)lStack_5c0 < (int)uVar44);
            }
            VP8LBitWriterSwap(puVar12,auStack_478);
            WebPReportProgress(lVar10,local_610 + iVar20,&local_520);
          }
        }
        WebPSafeFree(0);
        WebPSafeFree(lVar41);
        VP8LFreeHistogramSet(0);
        VP8LFreeHistogram(0);
        VP8LHashChainClear(auStack_518);
LAB_00102167:
        WebPSafeFree(lVar33);
        VP8LBitWriterWipeOut(auStack_478);
        if (*(int *)(lVar10 + 0x88) != 0) goto LAB_001020a0;
        uVar42 = (puVar12[3] - puVar12[2]) + (long)((int)puVar12[1] + 7 >> 3);
        if ((uVar42 < local_5b8) &&
           (VP8LBitWriterSwap(puVar12,local_4d8), local_5b8 = uVar42, lVar14 != 0)) {
          uVar26 = (uint)((int)plVar13[0xb] != 0);
          *(uint *)(lVar14 + 0x94) = uVar26;
          if ((int)plVar13[10] != 0) {
            *(uint *)(lVar14 + 0x94) = uVar26 | 2;
          }
          if (*(int *)((long)plVar13 + 0x54) != 0) {
            *(uint *)(lVar14 + 0x94) = *(uint *)(lVar14 + 0x94) | 4;
          }
          if (*(int *)((long)plVar13 + 0x5c) != 0) {
            *(uint *)(lVar14 + 0x94) = *(uint *)(lVar14 + 0x94) | 8;
          }
          uVar31 = *(undefined4 *)((long)plVar13 + 0x44);
          lVar49 = plVar13[9];
          uVar9 = *(undefined4 *)((long)plVar13 + 0x4c);
          lVar41 = plVar13[0xc];
          *(int *)(lVar14 + 0xa8) = (int)uVar42 - local_578;
          *(undefined4 *)(lVar14 + 0x98) = uVar31;
          *(int *)(lVar14 + 0x9c) = (int)lVar49;
          *(undefined4 *)(lVar14 + 0xa0) = uVar9;
          *(int *)(lVar14 + 0xa4) = (int)lVar41;
          *(int *)(lVar14 + 0xac) = local_558;
          *(int *)(lVar14 + 0xb0) = local_56c;
        }
        if (iVar4 == 1) break;
        VP8LBitWriterReset(&local_508,puVar12);
        local_640 = local_640 + 7;
      } while (local_640 != puVar2);
    }
    VP8LBitWriterSwap(local_4d8,puVar12);
  }
LAB_001020a0:
  VP8LBitWriterWipeOut(local_4d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(int *)(param_1[1] + 0x88) == 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong VP8LEncodeStream(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  int *piVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  uint uVar30;
  uint *puVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  byte bVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 local_798 [16];
  code *local_788;
  undefined8 *local_780;
  undefined8 local_778;
  undefined1 local_768 [16];
  code *local_758;
  undefined8 *local_750;
  undefined8 local_748;
  undefined1 local_738 [8];
  int local_730;
  long local_728;
  long local_720;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined8 uStack_654;
  undefined1 local_648 [136];
  undefined4 local_5c0;
  undefined8 local_5b8;
  int local_548 [7];
  undefined8 local_52c;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a8;
  long *local_3a0;
  undefined1 local_398 [392];
  uint local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1c4 [46];
  uint local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  long local_40;
  
  bVar33 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = (long *)WebPSafeCalloc(1,0x918);
  if (plVar8 == (long *)0x0) {
    WebPEncodingSetError(param_2,1);
    WebPGetWorkerInterface();
  }
  else {
    *plVar8 = param_1;
    plVar8[1] = param_2;
    *(undefined4 *)(plVar8 + 3) = 0;
    VP8LEncDspInit();
    puVar9 = (undefined8 *)WebPGetWorkerInterface();
    iVar5 = VP8LBitWriterInit(local_738,0);
    if (iVar5 != 0) {
      iVar5 = WebPPictureInitInternal(local_648,0x20f);
      if (iVar5 == 0) {
LAB_0010328c:
        plVar11 = (long *)0x0;
      }
      else {
        lVar16 = plVar8[1];
        iVar5 = *(int *)(lVar16 + 8);
        iVar15 = *(int *)(lVar16 + 0xc);
        lVar3 = *plVar8;
        iVar2 = *(int *)(lVar3 + 8);
        iVar6 = GetColorPalette(lVar16,(long)plVar8 + 0x464);
        *(int *)(plVar8 + 0xc) = iVar6;
        if (iVar6 < 0x101) {
          iVar20 = *(int *)(lVar16 + 0xc);
          iVar21 = *(int *)(lVar16 + 8);
          iVar14 = 9;
        }
        else {
          *(undefined4 *)(plVar8 + 0xc) = 0;
          iVar20 = *(int *)(lVar16 + 0xc);
          iVar14 = 7;
          iVar21 = *(int *)(lVar16 + 8);
        }
        iVar14 = iVar14 - iVar2;
        bVar13 = (byte)iVar14;
        iVar7 = 1 << (bVar13 & 0x1f);
        for (iVar7 = ((uint)(iVar21 + -1 + iVar7) >> (bVar13 & 0x1f)) *
                     ((uint)(iVar7 + iVar20 + -1) >> (bVar13 & 0x1f)); 0xa28 < iVar7;
            iVar7 = ((uint)(iVar7 + iVar21 + -1) >> (bVar13 & 0x1f)) *
                    ((uint)(iVar7 + iVar20 + -1) >> (bVar13 & 0x1f))) {
          iVar14 = iVar14 + 1;
          bVar13 = (byte)iVar14;
          iVar7 = 1 << (bVar13 & 0x1f);
        }
        if (9 < iVar14) {
          iVar14 = 9;
        }
        if (iVar14 < 2) {
          iVar14 = 2;
        }
        *(int *)((long)plVar8 + 0x44) = iVar14;
        if (3 < iVar2) {
          if (iVar2 == 4) {
            iVar20 = 5;
            if (iVar14 < 6) {
              iVar20 = iVar14;
            }
            *(int *)(plVar8 + 9) = iVar20;
          }
          else {
            iVar20 = 4;
            if (iVar14 < 5) {
              iVar20 = iVar14;
            }
            *(int *)(plVar8 + 9) = iVar20;
          }
LAB_00103456:
          iVar21 = (int)plVar8[0xc];
          iVar14 = *(int *)(lVar16 + 0x50);
          puVar4 = *(uint **)(lVar16 + 0x48);
          iVar7 = (iVar21 - 1U < 0x10) + 1;
          if ((iVar6 < 0x101) && (iVar21 < 0x11)) {
            if (iVar2 != 6) {
              uVar34 = 1;
              local_548[0] = 4;
              local_548[1] = 1;
              if ((iVar2 == 5) && (__LC1 <= *(float *)(lVar3 + 4))) {
LAB_00103dd5:
                uVar30 = 2;
                iVar5 = 1;
                local_52c = 0x100000005;
                goto LAB_0010360c;
              }
LAB_001034d8:
              uVar30 = 1;
              iVar5 = 0;
              goto LAB_0010360c;
            }
            uVar34 = 1;
            if (*(float *)(lVar3 + 4) != __LC0) {
              local_548[0] = 4;
              uVar34 = 1;
LAB_001034c6:
              local_548[1] = 1;
              goto LAB_001034d8;
            }
LAB_001041c1:
            uVar30 = 0;
            iVar5 = 0;
            while( true ) {
              for (; 1 < iVar5 - 4U; iVar5 = iVar5 + 1) {
                lVar16 = (long)(int)uVar30;
                uVar30 = uVar30 + 1;
                local_548[lVar16 * 7] = iVar5;
                local_548[lVar16 * 7 + 1] = 3;
              }
              if (iVar6 < 0x101) {
                uVar17 = 0;
                do {
                  if ((9UL >> (uVar17 & 0x3f) & 1) == 0) {
                    lVar16 = (long)(int)uVar30;
                    uVar30 = uVar30 + 1;
                    local_548[lVar16 * 7] = iVar5;
                    local_548[lVar16 * 7 + 1] = (int)uVar17;
                  }
                  uVar24 = (int)uVar17 + 1;
                  uVar17 = (ulong)uVar24;
                } while (uVar24 != 4);
              }
              if (iVar5 == 5) break;
              iVar5 = 5;
            }
            if (0 < (int)uVar30) goto LAB_00104198;
            goto LAB_00103649;
          }
          lVar16 = WebPSafeCalloc(0xd);
          if (lVar16 != 0) {
            if (0 < iVar15) {
              iVar18 = 0;
              lVar27 = (long)iVar5 << 2;
              uVar17 = (ulong)*puVar4;
              puVar31 = (uint *)0x0;
              do {
                puVar28 = puVar4;
                lVar29 = 0;
                uVar32 = uVar17;
                if (0 < iVar5) {
                  do {
                    uVar30 = *(uint *)((long)puVar28 + lVar29);
                    uVar32 = (ulong)uVar30;
                    uVar24 = ((uVar30 & 0xff00ff) - ((uint)uVar17 & 0xff00ff)) - 0xff0100 & 0xff00ff
                             | ((uVar30 & 0xff00ff00) - ((uint)uVar17 & 0xff00ff00)) + 0xff00ff &
                               0xff00ff00;
                    uVar17 = (ulong)uVar24;
                    if ((uVar24 != 0) &&
                       ((puVar31 == (uint *)0x0 || (uVar30 != *(uint *)((long)puVar31 + lVar29)))))
                    {
                      AddSingle(uVar30,lVar16,lVar16 + 0x1000,lVar16 + 0x800,lVar16 + 0x1800);
                      iVar25 = (int)uVar17;
                      AddSingle(uVar17 & 0xffffffff,lVar16 + 0x400,lVar16 + 0x1400,lVar16 + 0xc00,
                                lVar16 + 0x1c00);
                      iVar26 = (int)uVar32;
                      piVar10 = (int *)(lVar16 + 0x2000 +
                                       (ulong)((iVar26 >> 0x10) - (iVar26 >> 8) & 0xff) * 4);
                      *piVar10 = *piVar10 + 1;
                      piVar10 = (int *)(lVar16 + 0x2800 + (ulong)(iVar26 - (iVar26 >> 8) & 0xff) * 4
                                       );
                      *piVar10 = *piVar10 + 1;
                      piVar10 = (int *)(lVar16 + 0x2400 +
                                       (ulong)((iVar25 >> 0x10) - (iVar25 >> 8) & 0xff) * 4);
                      *piVar10 = *piVar10 + 1;
                      piVar10 = (int *)(lVar16 + 0x2c00 + (ulong)(iVar25 - (iVar25 >> 8) & 0xff) * 4
                                       );
                      *piVar10 = *piVar10 + 1;
                      piVar10 = (int *)(lVar16 + (ulong)(((((uint)(uVar32 >> 0x13) & 0x1fff) +
                                                          iVar26) * 0x39c5fba7 >> 0x18) + 0xc00) * 4
                                       );
                      *piVar10 = *piVar10 + 1;
                    }
                    lVar29 = lVar29 + 4;
                    uVar17 = uVar32;
                  } while (lVar29 != lVar27);
                }
                iVar18 = iVar18 + 1;
                uVar17 = uVar32;
                puVar4 = puVar28 + iVar14;
                puVar31 = puVar28;
              } while (iVar15 != iVar18);
            }
            uVar30 = (iVar6 < 0x101) + 3;
            *(int *)(lVar16 + 0x2400) = *(int *)(lVar16 + 0x2400) + 1;
            *(int *)(lVar16 + 0x2c00) = *(int *)(lVar16 + 0x2c00) + 1;
            *(int *)(lVar16 + 0x1400) = *(int *)(lVar16 + 0x1400) + 1;
            *(int *)(lVar16 + 0xc00) = *(int *)(lVar16 + 0xc00) + 1;
            *(int *)(lVar16 + 0x1c00) = *(int *)(lVar16 + 0x1c00) + 1;
            piVar10 = (int *)(lVar16 + 0x400);
            *piVar10 = *piVar10 + 1;
            puVar19 = &local_1f8;
            lVar27 = lVar16;
            do {
              puVar22 = (undefined8 *)((long)puVar19 + 4);
              uVar34 = VP8LBitsEntropy(lVar27,0x100);
              *(undefined4 *)puVar19 = uVar34;
              puVar19 = puVar22;
              lVar27 = lVar27 + 0x400;
            } while (local_1c4 != puVar22);
            bVar13 = (byte)iVar20;
            iVar20 = 1 << (bVar13 & 0x1f);
            fVar37 = (float)(((uint)(iVar5 + -1 + iVar20) >> (bVar13 & 0x1f)) *
                            ((uint)(iVar15 + -1 + iVar20) >> (bVar13 & 0x1f)));
            fVar35 = (float)local_1e8 + (float)local_1f8 + (float)uStack_1f0 + (float)local_1e0;
            fVar36 = local_1e8._4_4_ + local_1f8._4_4_ + uStack_1f0._4_4_ + local_1e0._4_4_ +
                     _DAT_001051b0 * fVar37;
            local_3b8 = CONCAT44(fVar36,fVar35);
            uStack_3b0 = CONCAT44(local_1f8._4_4_ + local_1d4 + uStack_1f0._4_4_ + local_1cc +
                                  fVar37 * _DAT_001051d8,
                                  local_1d8 + (float)local_1f8 + (float)uStack_1f0 + local_1d0);
            local_3a8 = CONCAT44(local_3a8._4_4_,(float)(iVar21 << 3) + local_1c8);
            uVar32 = (ulong)(fVar36 < fVar35);
            uVar17 = 2;
            if (1 < uVar30) {
              do {
                fVar35 = *(float *)((long)&local_3b8 + uVar32 * 4);
                pfVar1 = (float *)((long)&local_3b8 + uVar17 * 4);
                if (*pfVar1 <= fVar35 && fVar35 != *pfVar1) {
                  uVar32 = uVar17 & 0xffffffff;
                }
                uVar17 = uVar17 + 1;
              } while ((int)uVar17 <= (int)uVar30);
            }
            iVar5 = (int)uVar32;
            bVar13 = kHistoPairs_0[uVar32 * 2];
            piVar12 = (int *)(lVar16 + (long)(int)((uint)bVar13 * 0x100 + 1) * 4);
            do {
              if (piVar12[(ulong)bVar13 * -0x100 +
                          (ulong)(byte)kHistoPairs_0[uVar32 * 2 + 1] * 0x100] != 0 || *piVar12 != 0)
              {
                uVar34 = 0;
                goto LAB_00104125;
              }
              piVar12 = piVar12 + 1;
            } while (piVar12 != piVar10 + (ulong)bVar13 * 0x100);
            uVar34 = 1;
LAB_00104125:
            WebPSafeFree(lVar16);
            if (iVar2 == 6) {
              if (*(float *)(lVar3 + 4) == __LC0) goto LAB_001041c1;
              local_548[0] = iVar5;
              if (iVar6 < 0x101) goto LAB_001034c6;
              local_548[1] = 3;
            }
            else {
              local_548[1] = (0x100 < iVar6) + 1 + (uint)(0x100 < iVar6);
              local_548[0] = iVar5;
              if ((iVar2 == 5) && (__LC1 <= *(float *)(lVar3 + 4))) {
                if (iVar5 == 4) goto LAB_00103dd5;
                uVar30 = 1;
LAB_00104198:
                iVar5 = 1;
                goto LAB_0010360c;
              }
            }
            goto LAB_001034d8;
          }
LAB_00103b98:
          WebPEncodingSetError(param_2,1);
          goto LAB_0010328c;
        }
        iVar20 = 6;
        if (iVar14 < 7) {
          iVar20 = iVar14;
        }
        *(int *)(plVar8 + 9) = iVar20;
        if (iVar2 != 0) goto LAB_00103456;
        uVar30 = 1;
        iVar7 = 1;
        uVar34 = 0;
        local_548[1] = (uint)(0x100 < iVar6) + (uint)(0x100 < iVar6) * 2;
        local_548[0] = (iVar6 < 0x101) + 3;
        iVar5 = 0;
LAB_0010360c:
        piVar10 = local_548 + 2;
        iVar15 = 0;
        do {
          *piVar10 = 3;
          piVar10[1] = iVar5;
          if (iVar7 == 2) {
            piVar10[2] = 4;
            piVar10[3] = iVar5;
          }
          iVar15 = iVar15 + 1;
          piVar10[4] = iVar7;
          piVar10 = piVar10 + 7;
        } while (iVar15 < (int)uVar30);
LAB_00103649:
        iVar5 = EncoderInit(plVar8);
        if (iVar5 == 0) goto LAB_00103b98;
        local_3a0 = plVar8;
        local_20c = uVar34;
        if (*(int *)(param_1 + 0x54) < 1) {
          uVar23 = 0;
          uVar24 = uVar30;
          local_210 = uVar30;
          if (0 < (int)uVar30) goto LAB_001036f0;
LAB_00103e1b:
          local_208 = *(undefined8 *)(param_2 + 0x80);
          local_3b8 = param_1;
          uStack_3b0 = param_2;
          local_3a8 = param_3;
          (*(code *)*puVar9)(local_798);
          local_780 = &local_3b8;
          local_778 = 0;
          local_788 = EncodeStreamHook;
          if (uVar23 == 0) {
            (*(code *)puVar9[4])(local_798);
            (*(code *)puVar9[2])(local_798);
            (*(code *)puVar9[5])(local_798);
            goto LAB_0010328c;
          }
          plVar11 = (long *)0x0;
LAB_00103935:
          iVar5 = (*(code *)puVar9[1])(local_768);
          if (iVar5 == 0) goto LAB_00103bbf;
          puVar19 = *(undefined8 **)(param_2 + 0x80);
          if (puVar19 != (undefined8 *)0x0) {
            local_708 = *puVar19;
            uStack_700 = puVar19[1];
            local_6f8 = puVar19[2];
            uStack_6f0 = puVar19[3];
            local_6e8 = puVar19[4];
            uStack_6e0 = puVar19[5];
            local_6d8 = puVar19[6];
            uStack_6d0 = puVar19[7];
            local_6c8 = puVar19[8];
            uStack_6c0 = puVar19[9];
            local_6b8 = puVar19[10];
            uStack_6b0 = puVar19[0xb];
            local_6a8 = puVar19[0xc];
            uStack_6a0 = puVar19[0xd];
            local_698 = puVar19[0xe];
            uStack_690 = puVar19[0xf];
            local_688 = puVar19[0x10];
            uStack_680 = puVar19[0x11];
            local_678 = puVar19[0x12];
            uStack_670 = puVar19[0x13];
            local_668 = puVar19[0x14];
            uStack_660 = (undefined4)puVar19[0x15];
            uStack_654 = *(undefined8 *)((long)puVar19 + 0xb4);
            uStack_65c = (undefined4)*(undefined8 *)((long)puVar19 + 0xac);
            uStack_658 = (undefined4)((ulong)*(undefined8 *)((long)puVar19 + 0xac) >> 0x20);
          }
          (*(code *)puVar9[3])(local_768);
          (*(code *)puVar9[4])(local_798);
          iVar5 = (*(code *)puVar9[2])(local_798);
          (*(code *)puVar9[5])(local_798);
          iVar15 = (*(code *)puVar9[2])(local_768);
          (*(code *)puVar9[5])(local_768);
          if ((iVar5 == 0) || (iVar15 == 0)) {
            if (*(int *)(param_2 + 0x88) == 0) {
              WebPEncodingSetError(param_2,local_5c0);
            }
          }
          else if ((ulong)((long)(local_730 + 7 >> 3) + (local_720 - local_728)) <
                   (ulong)((*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) +
                          (long)(*(int *)(param_3 + 8) + 7 >> 3))) {
            VP8LBitWriterSwap(param_3,local_738);
            puVar9 = *(undefined8 **)(param_2 + 0x80);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = local_708;
              puVar9[1] = uStack_700;
              puVar9[2] = local_6f8;
              puVar9[3] = uStack_6f0;
              puVar9[4] = local_6e8;
              puVar9[5] = uStack_6e0;
              puVar9[6] = local_6d8;
              puVar9[7] = uStack_6d0;
              puVar9[8] = local_6c8;
              puVar9[9] = uStack_6c0;
              puVar9[10] = local_6b8;
              puVar9[0xb] = uStack_6b0;
              puVar9[0xc] = local_6a8;
              puVar9[0xd] = uStack_6a0;
              puVar9[0xe] = local_698;
              puVar9[0xf] = uStack_690;
              puVar9[0x10] = local_688;
              puVar9[0x11] = uStack_680;
              puVar9[0x12] = local_678;
              puVar9[0x13] = uStack_670;
              puVar9[0x14] = local_668;
              puVar9[0x15] = CONCAT44(uStack_65c,uStack_660);
              *(ulong *)((long)puVar9 + 0xac) = CONCAT44(uStack_658,uStack_65c);
              *(undefined8 *)((long)puVar9 + 0xb4) = uStack_654;
            }
          }
        }
        else {
          uVar23 = (int)uVar30 / 2;
          uVar24 = uVar30 - uVar23;
          local_50 = uVar23;
          if ((int)uVar30 < 2) {
            if (0 < (int)uVar24) goto LAB_001036f0;
LAB_00103712:
            local_210 = uVar24;
            if ((int)uVar23 < 1) goto LAB_00103e1b;
          }
          else {
            memcpy(&local_1d8,local_548 + (long)(int)uVar24 * 7,(ulong)uVar23 * 0x1c);
            local_210 = uVar24;
            if (0 < (int)uVar24) {
LAB_001036f0:
              memcpy(local_398,local_548,(ulong)uVar24 * 0x1c);
              goto LAB_00103712;
            }
          }
          local_208 = *(undefined8 *)(param_2 + 0x80);
          local_3b8 = param_1;
          uStack_3b0 = param_2;
          local_3a8 = param_3;
          (*(code *)*puVar9)(local_798);
          local_780 = &local_3b8;
          local_788 = EncodeStreamHook;
          local_778 = 0;
          local_1f8 = param_1;
          local_4c = uVar34;
          WebPPictureView(param_2,0,0,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                          local_648);
          local_5b8 = 0;
          local_48 = *(undefined8 **)(param_2 + 0x80);
          if (*(undefined8 **)(param_2 + 0x80) != (undefined8 *)0x0) {
            local_48 = &local_708;
          }
          uStack_1f0 = local_648;
          iVar5 = VP8LBitWriterClone(param_3,local_738);
          if (iVar5 == 0) goto LAB_00103b98;
          local_1e8 = local_738;
          plVar11 = (long *)WebPSafeCalloc(1,0x918);
          if (plVar11 == (long *)0x0) {
            WebPEncodingSetError(local_648,1);
          }
          else {
            *plVar11 = param_1;
            *(undefined4 *)(plVar11 + 3) = 0;
            plVar11[1] = (long)local_648;
            VP8LEncDspInit();
            iVar5 = EncoderInit(plVar11);
            if (iVar5 != 0) {
              *(undefined8 *)((long)plVar11 + 0x44) = *(undefined8 *)((long)plVar8 + 0x44);
              *(int *)(plVar11 + 0xc) = (int)plVar8[0xc];
              *(undefined8 *)((long)plVar11 + 100) = *(undefined8 *)((long)plVar8 + 100);
              *(undefined8 *)((long)plVar11 + 0x45c) = *(undefined8 *)((long)plVar8 + 0x45c);
              puVar22 = (undefined8 *)((long)plVar11 + 0x6cU & 0xfffffffffffffff8);
              lVar16 = (long)plVar11 + (100 - (long)puVar22);
              puVar19 = (undefined8 *)((long)plVar8 + (100 - lVar16));
              for (uVar17 = (ulong)((int)lVar16 + 0x400U >> 3); uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar22 = *puVar19;
                puVar19 = puVar19 + (ulong)bVar33 * -2 + 1;
                puVar22 = puVar22 + (ulong)bVar33 * -2 + 1;
              }
              puVar22 = (undefined8 *)((long)plVar11 + 0x46cU & 0xfffffffffffffff8);
              lVar16 = (long)plVar11 + (0x464 - (long)puVar22);
              *(undefined8 *)((long)plVar11 + 0x464) = *(undefined8 *)((long)plVar8 + 0x464);
              *(undefined8 *)((long)plVar11 + 0x85c) = *(undefined8 *)((long)plVar8 + 0x85c);
              puVar19 = (undefined8 *)(((long)plVar8 + 0x464) - lVar16);
              for (uVar17 = (ulong)((int)lVar16 + 0x400U >> 3); uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar22 = *puVar19;
                puVar19 = puVar19 + (ulong)bVar33 * -2 + 1;
                puVar22 = puVar22 + (ulong)bVar33 * -2 + 1;
              }
              local_1e0 = plVar11;
              (*(code *)*puVar9)(local_768);
              local_750 = &local_1f8;
              local_748 = 0;
              local_758 = EncodeStreamHook;
              goto LAB_00103935;
            }
          }
LAB_00103bbf:
          WebPEncodingSetError(param_2,1);
        }
      }
      VP8LBitWriterWipeOut(local_738);
      VP8LHashChainClear(plVar8 + 0x121);
      VP8LBackwardRefsClear(plVar8 + 0x10d);
      VP8LBackwardRefsClear(plVar8 + 0x112);
      VP8LBackwardRefsClear(plVar8 + 0x117);
      VP8LBackwardRefsClear(plVar8 + 0x11c);
      WebPSafeFree(plVar8[6]);
      plVar8[6] = 0;
      plVar8[7] = 0;
      WebPSafeFree(plVar8);
      if (plVar11 != (long *)0x0) {
        VP8LHashChainClear(plVar11 + 0x121);
        VP8LBackwardRefsClear(plVar11 + 0x10d);
        VP8LBackwardRefsClear(plVar11 + 0x112);
        VP8LBackwardRefsClear(plVar11 + 0x117);
        VP8LBackwardRefsClear(plVar11 + 0x11c);
        WebPSafeFree(plVar11[6]);
        plVar11[6] = 0;
        plVar11[7] = 0;
        WebPSafeFree(plVar11);
      }
      uVar17 = (ulong)(*(int *)(param_2 + 0x88) == 0);
      goto LAB_00103552;
    }
    VP8LHashChainClear(plVar8 + 0x121);
    VP8LBackwardRefsClear(plVar8 + 0x10d);
    VP8LBackwardRefsClear(plVar8 + 0x112);
    VP8LBackwardRefsClear(plVar8 + 0x117);
    VP8LBackwardRefsClear(plVar8 + 0x11c);
    WebPSafeFree(plVar8[6]);
    plVar8[6] = 0;
    plVar8[7] = 0;
    WebPSafeFree(plVar8);
  }
  uVar17 = WebPEncodingSetError(param_2,1);
LAB_00103552:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong VP8LEncodeImage(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  byte bVar13;
  undefined4 local_8c;
  ulong local_88;
  int local_80;
  long local_78;
  long local_70;
  int local_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  uint uStack_48;
  undefined1 uStack_44;
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  if (param_2 == 0) {
    uVar9 = 0;
    goto LAB_00104657;
  }
  if ((param_1 == 0) || (*(long *)(param_2 + 0x48) == 0)) {
    uVar9 = WebPEncodingSetError(param_2,3);
    goto LAB_00104657;
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar11 = iVar1 * iVar2;
  if (*(int *)(param_1 + 0xc) != 3) {
    iVar11 = iVar11 * 2;
  }
  iVar11 = VP8LBitWriterInit(&local_88,(long)iVar11);
  if (iVar11 == 0) goto LAB_00104628;
  iVar11 = WebPReportProgress(param_2,1,&local_8c);
  if (iVar11 == 0) goto LAB_001046e0;
  puVar3 = *(undefined8 **)(param_2 + 0x80);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    uVar5 = _LC3;
    *(undefined8 *)((long)puVar3 + 0xb4) = 0;
    puVar12 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    for (uVar9 = (ulong)(((int)puVar3 -
                         (int)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) + 0xbcU >> 3
                        ); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar13 * -2 + 1;
    }
    *(undefined4 *)((long)puVar3 + 0x14) = 0x42c60000;
    *(undefined4 *)((long)puVar3 + 4) = uVar5;
    *(undefined4 *)(puVar3 + 1) = uVar5;
    *(undefined4 *)((long)puVar3 + 0xc) = uVar5;
    *(undefined4 *)(puVar3 + 2) = uVar5;
  }
  iVar11 = *(int *)(param_2 + 0xc);
  iVar7 = *(int *)(param_2 + 8);
  if (0x1f < local_80) {
    VP8LPutBitsFlushBits(&local_88);
  }
  bVar13 = (byte)local_80;
  local_80 = local_80 + 0xe;
  local_88 = (ulong)(iVar7 - 1) << (bVar13 & 0x3f) | local_88;
  if (0x1f < local_80) {
    VP8LPutBitsFlushBits(&local_88);
  }
  bVar13 = (byte)local_80;
  local_80 = local_80 + 0xe;
  local_88 = (ulong)(iVar11 - 1) << (bVar13 & 0x3f) | local_88;
  if (local_60 == 0) {
    uVar6 = WebPPictureHasTransparency(param_2);
    if (0x1f < local_80) {
      VP8LPutBitsFlushBits(&local_88);
    }
    bVar13 = (byte)local_80;
    local_80 = local_80 + 1;
    local_88 = local_88 | (ulong)uVar6 << (bVar13 & 0x3f);
    if (0x1f < local_80) {
      VP8LPutBitsFlushBits(&local_88);
    }
    local_80 = local_80 + 3;
    if (local_60 != 0) goto LAB_00104628;
    iVar11 = WebPReportProgress(param_2,2,&local_8c);
    if (iVar11 == 0) {
LAB_001046e0:
      WebPEncodingSetError(param_2,10);
    }
    else {
      iVar11 = VP8LEncodeStream(param_1,param_2,&local_88);
      if (iVar11 != 0) {
        iVar11 = WebPReportProgress(param_2,99,&local_8c);
        if (iVar11 == 0) goto LAB_001046e0;
        uVar8 = VP8LBitWriterFinish(&local_88);
        if (local_60 == 0) {
          uStack_50 = (undefined5)_UNK_001047a8;
          lVar10 = (long)(local_80 + 7 >> 3) + (local_70 - local_78);
          uVar9 = lVar10 + 1;
          uStack_4b = 0x4c3850;
          uStack_44 = 0x2f;
          uStack_48 = (uint)uVar9;
          iVar11 = uStack_48 + (uStack_48 & 1);
          local_58 = CONCAT44(iVar11 + 0xc,(int)__LC4);
          iVar7 = (**(code **)(param_2 + 0x60))(&local_58,0x15,param_2);
          if (iVar7 == 0) {
LAB_00104739:
            iVar11 = WebPEncodingSetError(param_2,8);
            goto LAB_00104746;
          }
          iVar7 = (**(code **)(param_2 + 0x60))(uVar8,lVar10,param_2);
          if (iVar7 == 0) goto LAB_00104739;
          if ((uVar9 & 1) != 0) {
            local_58 = local_58 & 0xffffffffffffff00;
            iVar7 = (**(code **)(param_2 + 0x60))(&local_58,1,param_2);
            if (iVar7 == 0) goto LAB_00104739;
          }
          iVar11 = iVar11 + 0x14;
        }
        else {
          iVar11 = WebPEncodingSetError(param_2,1);
LAB_00104746:
          if (iVar11 == 0) goto LAB_00104635;
          iVar11 = 0;
        }
        iVar7 = WebPReportProgress(param_2,100,&local_8c);
        if (iVar7 == 0) goto LAB_001046e0;
        piVar4 = *(int **)(param_2 + 0x80);
        if (piVar4 != (int *)0x0) {
          *piVar4 = *piVar4 + iVar11;
          piVar4[0x2a] = iVar11;
        }
        if (*(void **)(param_2 + 0x78) != (void *)0x0) {
          memset(*(void **)(param_2 + 0x78),0,(long)((iVar1 + 0xf >> 4) * (iVar2 + 0xf >> 4)));
        }
      }
    }
  }
  else {
LAB_00104628:
    WebPEncodingSetError(param_2,1);
  }
LAB_00104635:
  if (local_60 != 0) {
    WebPEncodingSetError(param_2,1);
  }
  VP8LBitWriterWipeOut(&local_88);
  uVar9 = (ulong)(*(int *)(param_2 + 0x88) == 0);
LAB_00104657:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



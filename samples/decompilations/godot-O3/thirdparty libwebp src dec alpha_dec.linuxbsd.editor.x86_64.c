
void WebPDeallocateAlphaMemory(long param_1)

{
  long lVar1;
  
  WebPSafeFree(*(undefined8 *)(param_1 + 0xbb0));
  lVar1 = *(long *)(param_1 + 0xb90);
  *(undefined1 (*) [16])(param_1 + 0xbb0) = (undefined1  [16])0x0;
  if (lVar1 != 0) {
    VP8LDelete(*(undefined8 *)(lVar1 + 0x18));
    *(undefined8 *)(lVar1 + 0x18) = 0;
    WebPSafeFree(lVar1);
  }
  *(undefined8 *)(param_1 + 0xb90) = 0;
  return;
}



long VP8DecompressAlphaRows(long param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  
  iVar7 = param_2[0x21];
  if (((param_3 < 0) || ((int)param_4 < 1)) || (iVar14 = param_3 + param_4, iVar7 < iVar14)) {
LAB_001002f9:
    lVar11 = 0;
  }
  else {
    iVar3 = *param_2;
    if (*(int *)(param_1 + 0xba8) == 0) {
      piVar18 = *(int **)(param_1 + 0xb90);
      if (piVar18 == (int *)0x0) {
        lVar11 = WebPSafeCalloc(1,0xd8);
        *(long *)(param_1 + 0xb90) = lVar11;
        if (lVar11 == 0) {
          VP8SetError(param_1,1,"Alpha decoder initialization failed.");
          return 0;
        }
        lVar11 = WebPSafeMalloc((long)*param_2 * (long)param_2[0x21],1);
        *(long *)(param_1 + 0xbb0) = lVar11;
        if (lVar11 == 0) {
          iVar8 = VP8SetError(param_1,1,"Alpha decoder initialization failed.");
          if (iVar8 != 0) {
            lVar11 = *(long *)(param_1 + 3000);
            goto LAB_00100394;
          }
        }
        else {
          *(long *)(param_1 + 3000) = lVar11;
          *(undefined8 *)(param_1 + 0xbc0) = 0;
LAB_00100394:
          uVar15 = *(ulong *)(param_1 + 0xba0);
          pbVar4 = *(byte **)(param_1 + 0xb98);
          piVar18 = *(int **)(param_1 + 0xb90);
          VP8FiltersInit();
          *(long *)(piVar18 + 0x32) = lVar11;
          *(undefined8 *)piVar18 = *(undefined8 *)param_2;
          if (1 < uVar15) {
            bVar1 = *pbVar4;
            piVar18[2] = bVar1 & 3;
            piVar18[3] = *pbVar4 >> 2 & 3;
            bVar2 = *pbVar4;
            piVar18[4] = bVar2 >> 4 & 3;
            if ((*pbVar4 >> 6 == 0 && (bVar1 & 2) == 0) && (bVar2 & 0x20) == 0) {
              iVar8 = VP8InitIoInternal(piVar18 + 8,0x209);
              if (iVar8 != 0) {
                uVar15 = uVar15 - 1;
                WebPInitCustomIo(0,piVar18 + 8);
                *(int **)(piVar18 + 0x16) = piVar18;
                *(undefined8 *)(piVar18 + 8) = *(undefined8 *)param_2;
                uVar6 = *(undefined8 *)(param_2 + 0x1f);
                *(undefined8 *)(piVar18 + 0x25) = *(undefined8 *)(param_2 + 0x1d);
                *(undefined8 *)(piVar18 + 0x27) = uVar6;
                piVar18[0x29] = param_2[0x21];
                if (piVar18[2] == 0) {
                  if ((ulong)(long)(*piVar18 * piVar18[1]) <= uVar15) {
LAB_0010054b:
                    piVar18 = *(int **)(param_1 + 0xb90);
                    if (piVar18[4] == 1) {
                      param_4 = iVar7 - param_3;
                      iVar14 = iVar7;
                    }
                    else {
                      *(undefined4 *)(param_1 + 0xbc8) = 0;
                    }
                    goto LAB_001000c1;
                  }
                }
                else {
                  iVar8 = VP8LDecodeAlphaHeader(piVar18,pbVar4 + 1,uVar15);
                  if (iVar8 != 0) goto LAB_0010054b;
                }
              }
            }
          }
          uVar12 = 1;
          puVar5 = *(undefined4 **)(*(long *)(param_1 + 0xb90) + 0x18);
          if (puVar5 != (undefined4 *)0x0) {
            uVar12 = *puVar5;
          }
          VP8SetError(param_1,uVar12,"Alpha decoder initialization failed.");
        }
LAB_001002ad:
        WebPSafeFree(*(undefined8 *)(param_1 + 0xbb0));
        lVar11 = *(long *)(param_1 + 0xb90);
        *(undefined1 (*) [16])(param_1 + 0xbb0) = (undefined1  [16])0x0;
        if (lVar11 != 0) {
          VP8LDelete(*(undefined8 *)(lVar11 + 0x18));
          *(undefined8 *)(lVar11 + 0x18) = 0;
          WebPSafeFree(lVar11);
        }
        *(undefined8 *)(param_1 + 0xb90) = 0;
        goto LAB_001002f9;
      }
LAB_001000c1:
      iVar7 = piVar18[0x29];
      iVar8 = *piVar18;
      if (piVar18[2] == 0) {
        lVar9 = (long)(param_3 * iVar8) + *(long *)(param_1 + 3000);
        lVar10 = (long)iVar8;
        uVar16 = 0;
        lVar11 = *(long *)(param_1 + 0xb98) + 1 + (long)(param_3 * iVar8);
        lVar13 = *(long *)(param_1 + 0xbc0);
        lVar17 = lVar9;
        do {
          (**(code **)(&WebPUnfilters + (ulong)(uint)piVar18[3] * 8))(lVar13,lVar11,lVar17,iVar8);
          uVar15 = (ulong)uVar16;
          uVar16 = uVar16 + 1;
          lVar11 = lVar11 + lVar10;
          lVar13 = lVar17;
          lVar17 = lVar17 + lVar10;
        } while (param_4 != uVar16);
        *(ulong *)(param_1 + 0xbc0) = lVar9 + uVar15 * lVar10;
      }
      else {
        iVar8 = VP8LDecodeAlphaImageStream(piVar18,iVar14);
        if (iVar8 == 0) goto LAB_001002ad;
      }
      if (iVar14 < iVar7) {
        if (*(int *)(param_1 + 0xba8) == 0) goto LAB_00100258;
      }
      else {
        *(undefined4 *)(param_1 + 0xba8) = 1;
      }
      lVar11 = *(long *)(param_1 + 0xb90);
      if (lVar11 != 0) {
        VP8LDelete(*(undefined8 *)(lVar11 + 0x18));
        *(undefined8 *)(lVar11 + 0x18) = 0;
        WebPSafeFree(lVar11);
      }
      lVar11 = *(long *)(param_1 + 3000);
      *(undefined8 *)(param_1 + 0xb90) = 0;
      if (0 < *(int *)(param_1 + 0xbc8)) {
        iVar7 = WebPDequantizeLevels
                          ((long)(param_2[0x20] * iVar3) + (long)param_2[0x1e] + lVar11,
                           param_2[0x1f] - param_2[0x1e],param_2[0x21] - param_2[0x20]);
        if (iVar7 == 0) goto LAB_001002ad;
        lVar11 = *(long *)(param_1 + 3000);
      }
    }
    else {
LAB_00100258:
      lVar11 = *(long *)(param_1 + 3000);
    }
    lVar11 = lVar11 + iVar3 * param_3;
  }
  return lVar11;
}



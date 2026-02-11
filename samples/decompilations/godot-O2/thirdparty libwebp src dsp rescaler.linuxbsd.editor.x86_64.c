
void WebPRescalerImportRowExpand_C(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 8);
  if (0 < iVar3) {
    lVar6 = (long)iVar3;
    lVar4 = *(long *)(param_1 + 0x60);
    lVar13 = lVar6;
    iVar14 = iVar3;
    do {
      iVar5 = *(int *)(param_1 + 0x24);
      bVar1 = *(byte *)((param_2 - lVar6) + lVar13);
      uVar11 = (uint)bVar1;
      uVar9 = uVar11;
      if (1 < *(int *)(param_1 + 0x2c)) {
        uVar9 = (uint)*(byte *)(param_2 + lVar13);
      }
      *(uint *)(lVar4 + lVar6 * -4 + lVar13 * 4) = iVar5 * (uint)bVar1;
      lVar8 = lVar13;
      iVar12 = iVar14;
      iVar7 = iVar14;
      while (iVar7 < iVar2 * iVar3) {
        iVar5 = iVar5 - *(int *)(param_1 + 0x28);
        uVar10 = uVar9;
        if (iVar5 < 0) {
          iVar12 = iVar12 + iVar3;
          iVar5 = iVar5 + *(int *)(param_1 + 0x24);
          uVar10 = (uint)*(byte *)(param_2 + iVar12);
          uVar11 = uVar9;
        }
        *(uint *)(lVar4 + lVar8 * 4) = (uVar11 - uVar10) * iVar5 + *(int *)(param_1 + 0x24) * uVar10
        ;
        lVar8 = lVar8 + lVar6;
        uVar9 = uVar10;
        iVar7 = (int)lVar8;
      }
      iVar14 = iVar14 + 1;
      lVar13 = lVar13 + 1;
    } while (lVar6 * 2 != lVar13);
  }
  return;
}



void WebPRescalerImportRowShrink_C(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar14 = *(int *)(param_1 + 0x34) * iVar1;
  if (0 < iVar1) {
    uVar13 = (ulong)iVar1;
    uVar12 = 0;
    do {
      uVar8 = uVar12 & 0xffffffff;
      if ((int)uVar12 < iVar14) {
        lVar3 = *(long *)(param_1 + 0x60);
        iVar10 = 0;
        uVar7 = 0;
        uVar9 = uVar12;
        do {
          uVar6 = (uint)uVar7;
          iVar10 = iVar10 + *(int *)(param_1 + 0x24);
          iVar2 = *(int *)(param_1 + 0x28);
          if (iVar10 < 1) {
            uVar7 = 0;
            uVar5 = 0;
          }
          else {
            uVar4 = (long)((int)uVar8 + iVar1);
            do {
              iVar11 = iVar10;
              uVar8 = uVar4;
              iVar10 = iVar11 - iVar2;
              uVar5 = (uint)*(byte *)((param_2 - uVar13) + uVar8);
              uVar6 = (int)uVar7 + uVar5;
              uVar7 = (ulong)uVar6;
              uVar4 = uVar8 + uVar13;
            } while (0 < iVar10);
            uVar5 = (iVar2 - iVar11) * uVar5;
            uVar7 = (ulong)uVar5;
          }
          *(uint *)(lVar3 + uVar9 * 4) = iVar2 * uVar6 - uVar5;
          uVar9 = uVar9 + uVar13;
          uVar7 = *(uint *)(param_1 + 0xc) * uVar7 + 0x80000000 >> 0x20;
        } while ((int)uVar9 < iVar14);
      }
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
  }
  return;
}



void WebPRescalerExportRowExpand_C(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  lVar1 = *(long *)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar7 = *(long *)(param_1 + 0x58);
  iVar9 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar7 = 0;
    if (0 < iVar9) {
      do {
        lVar6 = (ulong)*(uint *)(param_1 + 0x10) * (ulong)*(uint *)(lVar1 + lVar7 * 4) + 0x80000000;
        uVar4 = (undefined1)((ulong)lVar6 >> 0x20);
        if (0xff < (int)((ulong)lVar6 >> 0x20)) {
          uVar4 = 0xff;
        }
        *(undefined1 *)(lVar2 + lVar7) = uVar4;
        lVar7 = lVar7 + 1;
      } while (iVar9 != lVar7);
    }
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)*(int *)(param_1 + 0x20);
    uVar5 = SUB164((ZEXT416((uint)-*(int *)(param_1 + 0x18)) << 0x20) / auVar3,0);
    if (0 < iVar9) {
      lVar6 = 0;
      do {
        lVar8 = ((ulong)*(uint *)(lVar7 + lVar6 * 4) * (ulong)uVar5 +
                 (ulong)*(uint *)(lVar1 + lVar6 * 4) * (ulong)-uVar5 + 0x80000000 >> 0x20) *
                (ulong)*(uint *)(param_1 + 0x10) + 0x80000000;
        uVar4 = (undefined1)((ulong)lVar8 >> 0x20);
        if (0xff < (int)((ulong)lVar8 >> 0x20)) {
          uVar4 = 0xff;
        }
        *(undefined1 *)(lVar2 + lVar6) = uVar4;
        lVar6 = lVar6 + 1;
      } while (lVar6 != iVar9);
      return;
    }
  }
  return;
}



void WebPRescalerExportRowShrink_C(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x60);
  uVar8 = -*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x58);
  if (uVar8 == 0) {
    lVar7 = 0;
    if (0 < iVar9) {
      do {
        lVar4 = (ulong)*(uint *)(param_1 + 0x14) * (ulong)*(uint *)(lVar2 + lVar7 * 4) + 0x80000000;
        uVar3 = (undefined1)((ulong)lVar4 >> 0x20);
        if (0xff < (int)((ulong)lVar4 >> 0x20)) {
          uVar3 = 0xff;
        }
        *(undefined1 *)(lVar1 + lVar7) = uVar3;
        *(undefined4 *)(lVar2 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 != iVar9);
    }
  }
  else if (0 < iVar9) {
    lVar4 = 0;
    do {
      iVar6 = (int)((ulong)*(uint *)(lVar7 + lVar4 * 4) * (ulong)uVar8 >> 0x20);
      lVar5 = (ulong)(uint)(*(int *)(lVar2 + lVar4 * 4) - iVar6) * (ulong)*(uint *)(param_1 + 0x14)
              + 0x80000000;
      uVar3 = (undefined1)((ulong)lVar5 >> 0x20);
      if (0xff < (int)((ulong)lVar5 >> 0x20)) {
        uVar3 = 0xff;
      }
      *(undefined1 *)(lVar1 + lVar4) = uVar3;
      *(int *)(lVar2 + lVar4 * 4) = iVar6;
      lVar4 = lVar4 + 1;
    } while (iVar9 != lVar4);
    return;
  }
  return;
}



void WebPRescalerImportRow(int *param_1)

{
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001003ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*WebPRescalerImportRowShrink)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*WebPRescalerImportRowExpand)();
  return;
}



void WebPRescalerExportRow(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      if (0 < *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34)) {
        lVar3 = *(long *)(param_1 + 0x58);
        lVar2 = 0;
        do {
          *(char *)(*(long *)(param_1 + 0x48) + lVar2) = (char)*(undefined4 *)(lVar3 + lVar2 * 4);
          lVar3 = *(long *)(param_1 + 0x58);
          *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
          lVar2 = lVar2 + 1;
        } while ((int)lVar2 < *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34));
        iVar1 = *(int *)(param_1 + 0x18);
      }
    }
    else {
      (*WebPRescalerExportRowShrink)();
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    (*WebPRescalerExportRowExpand)();
    iVar1 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x18) = iVar1 + *(int *)(param_1 + 0x1c);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPRescalerDspInit(void)

{
  int iVar1;
  
  if ((code *)WebPRescalerDspInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  WebPRescalerExportRowExpand = WebPRescalerExportRowExpand_C;
  WebPRescalerExportRowShrink = WebPRescalerExportRowShrink_C;
  WebPRescalerImportRowExpand = 0x100000;
  WebPRescalerImportRowShrink = WebPRescalerImportRowShrink_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      WebPRescalerDspInitSSE2();
    }
    WebPRescalerDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  WebPRescalerDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}




void GetAlphaSourceRow(int *param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  iVar1 = param_1[2];
  *param_3 = iVar2;
  if (param_1[0x16] != 0) {
    if (iVar1 == 0) {
      *param_3 = iVar2 + -1;
      iVar1 = 0;
    }
    else {
      *param_2 = *param_2 - (long)*param_1;
      iVar1 = iVar1 + -1;
    }
    iVar2 = param_1[2] + param_1[0x20] + param_1[4];
    if (iVar2 == param_1[0x21]) {
      *param_3 = (iVar2 - param_1[0x20]) - iVar1;
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EmitAlphaRGB(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *(long *)(param_1 + 0x26);
  if (local_48 != 0) {
    piVar3 = (int *)*param_2;
    uVar1 = param_1[3];
    iVar2 = *piVar3;
    iVar4 = GetAlphaSourceRow(param_1,&local_48,&local_4c);
    lVar5 = (long)piVar3[6] * (long)iVar4 + *(long *)(piVar3 + 4);
    lVar6 = lVar5 + 3;
    if (iVar2 == 4 || iVar2 == 9) {
      lVar6 = lVar5;
    }
    iVar4 = (*_WebPDispatchAlpha)(local_48,*param_1,uVar1,local_4c,lVar6,(long)piVar3[6]);
    if ((iVar4 != 0) && (iVar2 - 7U < 4)) {
      (*_WebPApplyAlphaMultiply)(lVar5,iVar2 == 4 || iVar2 == 9,uVar1,local_4c,piVar3[6]);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 EmitAlphaRGBA4444(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  int local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(long *)(param_1 + 0x26);
  if (local_38 != 0) {
    piVar1 = (int *)*param_2;
    iVar10 = param_1[3];
    iVar9 = *piVar1;
    iVar2 = GetAlphaSourceRow(param_1,&local_38,&local_3c);
    uVar5 = (ulong)piVar1[6];
    lVar6 = uVar5 * (long)iVar2 + *(long *)(piVar1 + 4);
    lVar7 = lVar6 + 1;
    if (0 < local_3c) {
      iVar2 = 0;
      bVar8 = 0xf;
      do {
        lVar3 = 0;
        if (0 < iVar10) {
          do {
            bVar4 = *(byte *)(local_38 + lVar3) >> 4;
            bVar8 = bVar8 & bVar4;
            *(byte *)(lVar7 + lVar3 * 2) = *(byte *)(lVar7 + lVar3 * 2) & 0xf0 | bVar4;
            lVar3 = lVar3 + 1;
          } while (lVar3 != iVar10);
          uVar5 = (ulong)(uint)piVar1[6];
        }
        iVar2 = iVar2 + 1;
        local_38 = local_38 + *param_1;
        lVar7 = lVar7 + (int)uVar5;
      } while (iVar2 != local_3c);
      if ((bVar8 != 0xf) && (iVar9 - 7U < 4)) {
        (*_WebPApplyAlphaMultiply4444)(lVar6,iVar10,iVar2);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



undefined8 CustomPut(long param_1)

{
  long lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) < 1) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar1 = *(long *)(param_1 + 0x38);
    iVar2 = (**(code **)(lVar1 + 0x58))(param_1,lVar1);
    if (*(code **)(lVar1 + 0x60) != (code *)0x0) {
      (**(code **)(lVar1 + 0x60))(param_1,lVar1,iVar2);
    }
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + iVar2;
    return 1;
  }
  return 0;
}



void CustomTeardown(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  WebPSafeFree(*(undefined8 *)(lVar1 + 0x50));
  *(undefined8 *)(lVar1 + 0x50) = 0;
  return;
}



uint EmitFancyRGB(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  code *pcVar4;
  long lVar5;
  size_t __n;
  void *__src;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  void *__src_00;
  long lVar9;
  int iVar10;
  uint local_4c;
  
  puVar3 = (uint *)*param_2;
  iVar10 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  lVar9 = *(long *)(param_1 + 0x18);
  pvVar7 = *(void **)(param_1 + 0x20);
  lVar5 = (long)iVar10 * (long)(int)puVar3[6] + *(long *)(puVar3 + 4);
  pcVar4 = *(code **)(&WebPUpsamplers + (ulong)*puVar3 * 8);
  pvVar8 = *(void **)(param_1 + 0x28);
  uVar6 = iVar10 + iVar1;
  if (iVar10 == 0) {
    (*pcVar4)(lVar9,0,pvVar7,pvVar8,pvVar7,pvVar8,lVar5,0,iVar2);
    local_4c = uVar6;
  }
  else {
    (*pcVar4)(param_2[1],lVar9,param_2[2],param_2[3],pvVar7,pvVar8,lVar5 - (int)puVar3[6],lVar5,
              iVar2);
    local_4c = iVar1 + 1;
  }
  iVar10 = iVar10 + 2;
  __src = pvVar7;
  __src_00 = pvVar8;
  if (2 < iVar1) {
    do {
      iVar10 = iVar10 + 2;
      __src = (void *)((long)pvVar7 + (long)*(int *)(param_1 + 0x34));
      __src_00 = (void *)((long)pvVar8 + (long)*(int *)(param_1 + 0x34));
      lVar5 = lVar5 + (int)(puVar3[6] * 2);
      lVar9 = lVar9 + *(int *)(param_1 + 0x30) * 2;
      (*pcVar4)(lVar9 - *(int *)(param_1 + 0x30),lVar9,pvVar7,pvVar8,__src,__src_00,
                lVar5 - (int)puVar3[6],lVar5,iVar2);
      pvVar7 = __src;
      pvVar8 = __src_00;
    } while (iVar10 < (int)uVar6);
  }
  pvVar7 = (void *)(*(int *)(param_1 + 0x30) + lVar9);
  if ((int)(uVar6 + *(int *)(param_1 + 0x80)) < *(int *)(param_1 + 0x84)) {
    memcpy((void *)param_2[1],pvVar7,(long)iVar2);
    __n = (size_t)((iVar2 + 1) / 2);
    memcpy((void *)param_2[2],__src,__n);
    memcpy((void *)param_2[3],__src_00,__n);
    local_4c = local_4c - 1;
  }
  else if ((uVar6 & 1) == 0) {
    (*pcVar4)(pvVar7,0,__src,__src_00,__src,__src_00,lVar5 + (int)puVar3[6],0,iVar2);
  }
  return local_4c;
}



undefined8 EmitAlphaYUV(int *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *__src;
  
  lVar3 = *param_2;
  __src = *(void **)(param_1 + 0x26);
  iVar1 = param_1[3];
  iVar5 = *(int *)(lVar3 + 0x3c);
  iVar2 = param_1[4];
  pvVar4 = (void *)((long)param_1[2] * (long)iVar5 + *(long *)(lVar3 + 0x28));
  if (__src == (void *)0x0) {
    if ((*(long *)(lVar3 + 0x28) != 0) && (0 < iVar2)) {
      iVar6 = 0;
      do {
        pvVar4 = memset(pvVar4,0xff,(long)iVar1);
        iVar6 = iVar6 + 1;
        pvVar4 = (void *)((long)pvVar4 + (long)iVar5);
      } while (iVar2 != iVar6);
    }
  }
  else {
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = iVar5 + 1;
        pvVar4 = memcpy(pvVar4,__src,(long)iVar1);
        __src = (void *)((long)__src + (long)*param_1);
        pvVar4 = (void *)((long)pvVar4 + (long)*(int *)(lVar3 + 0x3c));
      } while (iVar2 != iVar5);
    }
  }
  return 0;
}



undefined4 EmitYUV(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 0x34);
  iVar2 = *(int *)(lVar3 + 0x38);
  lVar6 = (long)(*(int *)(param_1 + 8) >> 1);
  lVar4 = *(long *)(lVar3 + 0x18);
  lVar5 = *(long *)(lVar3 + 0x20);
  iVar7 = (*(int *)(param_1 + 0xc) + 1) / 2;
  iVar8 = (*(int *)(param_1 + 0x10) + 1) / 2;
  WebPCopyPlane(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),
                (long)*(int *)(param_1 + 8) * (long)*(int *)(lVar3 + 0x30) + *(long *)(lVar3 + 0x10)
                ,*(int *)(lVar3 + 0x30),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
  WebPCopyPlane(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34),
                iVar1 * lVar6 + lVar4,*(undefined4 *)(lVar3 + 0x34),iVar7,iVar8);
  WebPCopyPlane(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),
                iVar2 * lVar6 + lVar5,*(undefined4 *)(lVar3 + 0x38),iVar7,iVar8);
  return *(undefined4 *)(param_1 + 0x10);
}



undefined4 EmitSampledRGB(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  WebPSamplerProcessPlane
            (*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x34),
             (long)*(int *)(param_1 + 8) * (long)(int)puVar1[6] + *(long *)(puVar1 + 4),
             (long)(int)puVar1[6],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
             *(undefined8 *)(&WebPSamplers + (ulong)*puVar1 * 8));
  return *(undefined4 *)(param_1 + 0x10);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ExportAlpha(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  
  piVar3 = (int *)*param_1;
  lVar4 = param_1[9];
  iVar1 = *piVar3;
  lVar6 = (long)piVar3[6] * (long)param_2 + *(long *)(piVar3 + 4);
  lVar8 = lVar6 + 3;
  if (iVar1 == 4 || iVar1 == 9) {
    lVar8 = lVar6;
  }
  iVar9 = 0;
  if (*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38)) {
    if ((*(int *)(lVar4 + 0x18) < 1) && (0 < param_3)) {
      uVar2 = *(undefined4 *)(lVar4 + 0x34);
      uVar7 = 0;
      do {
        WebPRescalerExportRow();
        iVar9 = iVar9 + 1;
        uVar5 = (*_WebPDispatchAlpha)(*(undefined8 *)(param_1[9] + 0x48),0,uVar2,1,lVar8,0);
        lVar4 = param_1[9];
        uVar7 = uVar7 | uVar5;
        lVar8 = lVar8 + piVar3[6];
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar4 + 0x40)) || (0 < *(int *)(lVar4 + 0x18)))
        break;
      } while (iVar9 < param_3);
      if ((iVar1 - 7U < 4) && (uVar7 != 0)) {
        (*_WebPApplyAlphaMultiply)(lVar6,iVar1 == 4 || iVar1 == 9,uVar2,iVar9);
      }
    }
    else {
      iVar9 = 0;
    }
  }
  return iVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ExportAlphaRGBA4444(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  int iVar12;
  
  iVar12 = 0;
  lVar10 = param_1[9];
  if (*(int *)(lVar10 + 0x40) < *(int *)(lVar10 + 0x38)) {
    if ((*(int *)(lVar10 + 0x18) < 1) && (0 < param_3)) {
      piVar3 = (int *)*param_1;
      iVar1 = *(int *)(lVar10 + 0x34);
      bVar11 = 0xf;
      iVar2 = *piVar3;
      lVar9 = (long)piVar3[6] * (long)param_2 + *(long *)(piVar3 + 4);
      lVar10 = lVar9 + 1;
      uVar8 = (long)iVar1;
      do {
        iVar7 = (int)uVar8;
        WebPRescalerExportRow();
        uVar8 = uVar8 & 0xffffffff;
        if (0 < iVar7) {
          uVar5 = 0;
          do {
            bVar6 = *(byte *)(*(long *)(param_1[9] + 0x48) + uVar5) >> 4;
            bVar11 = bVar11 & bVar6;
            *(byte *)(lVar10 + uVar5 * 2) = *(byte *)(lVar10 + uVar5 * 2) & 0xf0 | bVar6;
            uVar5 = uVar5 + 1;
          } while (uVar5 != (long)iVar1);
        }
        lVar4 = param_1[9];
        iVar12 = iVar12 + 1;
        lVar10 = lVar10 + piVar3[6];
      } while (((*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38)) && (*(int *)(lVar4 + 0x18) < 1))
              && (iVar12 < param_3));
      if ((iVar2 - 7U < 4) && (bVar11 != 0xf)) {
        (*_WebPApplyAlphaMultiply4444)(lVar9,uVar8,iVar12);
      }
    }
    else {
      iVar12 = 0;
    }
  }
  return iVar12;
}



undefined8 EmitRescaledAlphaRGB(int *param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x26);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_2 + 0x48);
    iVar4 = *(int *)(param_2 + 0x20) + param_3;
    if (0 < param_3) {
      while( true ) {
        iVar2 = *(int *)(lVar1 + 0x3c);
        WebPRescalerImport(lVar1,(param_1[2] + param_1[4]) - iVar2,
                           lVar3 + ((long)iVar2 - (long)param_1[2]) * (long)*param_1);
        iVar2 = (**(code **)(param_2 + 0x68))(param_2,iVar4 - param_3,param_3);
        param_3 = param_3 - iVar2;
        if (param_3 < 1) break;
        lVar3 = *(long *)(param_1 + 0x26);
      }
    }
  }
  return 0;
}



int EmitRescaledRGB(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int local_54;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    local_54 = 0;
  }
  else {
    local_54 = 0;
    iVar10 = 0;
    iVar6 = 0;
    lVar9 = param_2[6];
    do {
      iVar5 = WebPRescalerImport(lVar9,iVar1 - iVar6,
                                 (long)iVar6 * (long)*(int *)(param_1 + 0x30) +
                                 *(long *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x30));
      iVar6 = iVar6 + iVar5;
      iVar7 = (iVar1 + 1 >> 1) - iVar10;
      iVar5 = WebPRescaleNeededLines(param_2[7],iVar7);
      if (iVar5 != 0) {
        iVar5 = WebPRescalerImport(param_2[7],iVar7,
                                   (long)*(int *)(param_1 + 0x34) * (long)iVar10 +
                                   *(long *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x34));
        WebPRescalerImport(param_2[8],iVar7,
                           (long)*(int *)(param_1 + 0x34) * (long)iVar10 + *(long *)(param_1 + 0x28)
                           ,(long)*(int *)(param_1 + 0x34));
        iVar10 = iVar10 + iVar5;
      }
      lVar9 = param_2[6];
      if (*(int *)(lVar9 + 0x40) < *(int *)(lVar9 + 0x38)) {
        puVar2 = (uint *)*param_2;
        iVar5 = 0;
        pcVar3 = *(code **)(&WebPYUV444Converters + (ulong)*puVar2 * 8);
        lVar8 = (long)(local_54 + *(int *)(param_2 + 4)) * (long)(int)puVar2[6] +
                *(long *)(puVar2 + 4);
        do {
          if (((0 < *(int *)(lVar9 + 0x18)) ||
              (lVar4 = param_2[7], *(int *)(lVar4 + 0x38) <= *(int *)(lVar4 + 0x40))) ||
             (0 < *(int *)(lVar4 + 0x18))) break;
          WebPRescalerExportRow();
          WebPRescalerExportRow(param_2[7]);
          WebPRescalerExportRow(param_2[8]);
          (*pcVar3)(*(undefined8 *)(param_2[6] + 0x48),*(undefined8 *)(param_2[7] + 0x48),
                    *(undefined8 *)(param_2[8] + 0x48),lVar8,*(undefined4 *)(param_2[6] + 0x34));
          lVar9 = param_2[6];
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + (int)puVar2[6];
        } while (*(int *)(lVar9 + 0x40) < *(int *)(lVar9 + 0x38));
        local_54 = local_54 + iVar5;
      }
    } while (iVar6 < iVar1);
  }
  return local_54;
}



undefined8 EmitRescaledAlphaYUV(int *param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  void *__s;
  
  lVar2 = *param_2;
  lVar5 = param_2[4];
  lVar9 = *(long *)(param_1 + 0x26);
  iVar7 = *(int *)(lVar2 + 0x3c);
  __s = (void *)((long)(int)lVar5 * (long)iVar7 + *(long *)(lVar2 + 0x28));
  if (lVar9 == 0) {
    if ((*(long *)(lVar2 + 0x28) != 0) && (iVar1 = param_1[0x23], 0 < param_3)) {
      iVar8 = 0;
      do {
        iVar8 = iVar8 + 1;
        memset(__s,0xff,(long)iVar1);
        __s = (void *)((long)__s + (long)iVar7);
      } while (param_3 != iVar8);
    }
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x10);
    iVar7 = param_1[4];
    iVar10 = 0;
    lVar4 = param_2[9];
    iVar1 = *param_1;
    iVar8 = *(int *)(lVar2 + 0x30);
    if (0 < iVar7) {
      do {
        iVar6 = WebPRescalerImport(lVar4,iVar7,lVar9,iVar1);
        iVar7 = iVar7 - iVar6;
        lVar9 = lVar9 + iVar1 * iVar6;
        iVar6 = WebPRescalerExport(lVar4);
        iVar10 = iVar10 + iVar6;
      } while (0 < iVar7);
      if (0 < iVar10) {
        WebPMultRows(lVar3 + (long)iVar8 * (long)(int)lVar5,*(undefined4 *)(lVar2 + 0x30),__s,
                     *(undefined4 *)(lVar2 + 0x3c),*(undefined4 *)(param_2[9] + 0x34),iVar10,1);
      }
    }
  }
  return 0;
}



undefined8 CustomSetup(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  uint *puVar20;
  bool bVar21;
  int local_74;
  long local_68;
  long local_50;
  long local_48;
  long local_40;
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  uVar1 = *(uint *)*puVar5;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  *(undefined1 (*) [16])(puVar5 + 0xb) = (undefined1  [16])0x0;
  if ((uVar1 < 0xd) && ((0x17baUL >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    iVar8 = WebPIoInitFromOptions(puVar5[5],param_1,0xb);
    if (iVar8 == 0) {
      return 0;
    }
    if (uVar1 - 7 < 4) {
      WebPInitUpsamplers();
      if (*(int *)(param_1 + 0x88) != 0) {
        puVar20 = (uint *)*puVar5;
        goto LAB_00100fc8;
      }
    }
    else {
      if (*(int *)(param_1 + 0x88) != 0) goto LAB_00100e20;
      if (10 < uVar1) {
        puVar5[0xb] = EmitYUV;
        puVar5[0xc] = EmitAlphaYUV;
        return 1;
      }
    }
    WebPInitSamplers();
    iVar8 = *(int *)(param_1 + 0x58);
    puVar5[0xb] = EmitSampledRGB;
    if (iVar8 == 0) goto LAB_00101288;
    bVar7 = true;
  }
  else {
    iVar8 = WebPIoInitFromOptions(puVar5[5],param_1,0xc);
    if (iVar8 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x88) != 0) {
LAB_00100e20:
      puVar20 = (uint *)*puVar5;
      if (10 < uVar1) {
        if ((*puVar20 < 0xd) && ((0x17baUL >> ((ulong)*puVar20 & 0x3f) & 1) != 0)) {
          iVar8 = *(int *)(param_1 + 0x8c);
          iVar10 = *(int *)(param_1 + 0xc);
          bVar7 = true;
          local_74 = *(int *)(param_1 + 0x90);
          uVar1 = iVar8 + 1;
          local_48 = (long)(int)(uVar1 & 0xfffffffe);
          iVar17 = *(int *)(param_1 + 0x10);
          local_68 = (long)iVar8;
          local_50 = local_48 + local_68;
          lVar15 = local_50 * 8 + local_68 * 8;
          lVar12 = 0x1a0;
          local_40 = local_50 * 8;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x8c);
          iVar10 = *(int *)(param_1 + 0xc);
          bVar7 = false;
          local_74 = *(int *)(param_1 + 0x90);
          uVar1 = iVar8 + 1;
          local_48 = (long)(int)(uVar1 & 0xfffffffe);
          iVar17 = *(int *)(param_1 + 0x10);
          local_68 = (long)iVar8;
          local_50 = local_48 + local_68;
          lVar15 = local_50 * 8;
          lVar12 = 0x138;
          local_40 = lVar15;
        }
        local_50 = local_50 * 2;
        lVar12 = WebPSafeMalloc(1,lVar15 + 0x1f + lVar12);
        puVar5[10] = lVar12;
        if (lVar12 == 0) {
          return 0;
        }
        uVar6 = *(undefined8 *)(puVar20 + 4);
        uVar16 = lVar12 + 0x1f + lVar15 & 0xffffffffffffffe0;
        puVar5[6] = uVar16;
        uVar2 = *(undefined4 *)(param_1 + 0xc);
        puVar5[7] = uVar16 + 0x68;
        puVar5[8] = uVar16 + 0xd0;
        lVar15 = uVar16 + 0x138;
        if (!bVar7) {
          lVar15 = 0;
        }
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        puVar5[9] = lVar15;
        iVar9 = WebPRescalerInit(uVar16,uVar2,uVar3,uVar6,iVar8,local_74,puVar20[0xc],1,lVar12);
        if (iVar9 == 0) {
          return 0;
        }
        iVar18 = iVar10 + 1 >> 1;
        iVar9 = local_74 + 1 >> 1;
        iVar17 = iVar17 + 1 >> 1;
        iVar10 = WebPRescalerInit(puVar5[7],iVar18,iVar17,*(undefined8 *)(puVar20 + 6),
                                  (int)uVar1 >> 1,iVar9,puVar20[0xd],1,lVar12 + local_68 * 8);
        if (iVar10 == 0) {
          return 0;
        }
        iVar10 = WebPRescalerInit(puVar5[8],iVar18,iVar17,*(undefined8 *)(puVar20 + 8),
                                  (int)uVar1 >> 1,iVar9,puVar20[0xe],1,
                                  lVar12 + (local_50 - local_48) * 4);
        if (iVar10 != 0) {
          puVar5[0xb] = EmitRescaledYUV;
          if (!bVar7) {
            return 1;
          }
          iVar8 = WebPRescalerInit(puVar5[9],*(undefined4 *)(param_1 + 0xc),
                                   *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(puVar20 + 10),
                                   iVar8,local_74,puVar20[0xf],1,lVar12 + local_40);
          if (iVar8 != 0) {
            puVar5[0xc] = EmitRescaledAlphaYUV;
            WebPInitAlphaProcessing();
            return 1;
          }
          return 0;
        }
        return 0;
      }
LAB_00100fc8:
      uVar1 = *puVar20;
      bVar7 = 0xc < uVar1;
      if (bVar7) {
        lVar12 = 0x157;
        lVar15 = 3;
      }
      else {
        bVar21 = (0x17baUL >> ((ulong)uVar1 & 0x3f) & 1) == 0;
        lVar12 = (-(ulong)bVar21 & 0xffffffffffffff98) + 0x1bf;
        lVar15 = 4 - (ulong)bVar21;
      }
      bVar21 = (0x17baUL >> ((ulong)uVar1 & 0x3f) & 1) == 0;
      iVar8 = *(int *)(param_1 + 0x8c);
      lVar19 = (long)iVar8;
      iVar10 = *(int *)(param_1 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x90);
      iVar17 = *(int *)(param_1 + 0xc);
      lVar13 = lVar15 * lVar19 * 9;
      lVar12 = WebPSafeMalloc(1,lVar12 + lVar13);
      puVar5[10] = lVar12;
      if (lVar12 == 0) {
        return 0;
      }
      lVar15 = lVar15 * lVar19 * 8 + lVar12;
      uVar16 = lVar12 + 0x1f + lVar13 & 0xffffffffffffffe0;
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      puVar5[6] = uVar16;
      puVar5[7] = uVar16 + 0x68;
      puVar5[8] = uVar16 + 0xd0;
      lVar13 = uVar16 + 0x138;
      if (bVar7 || bVar21) {
        lVar13 = 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      puVar5[9] = lVar13;
      iVar9 = WebPRescalerInit(uVar16,uVar3,uVar4,lVar15,iVar8,uVar2,0,1,lVar12);
      if (iVar9 == 0) {
        return 0;
      }
      lVar15 = lVar15 + lVar19;
      lVar13 = lVar19 * 8;
      iVar9 = iVar17 + 1 >> 1;
      iVar17 = iVar10 + 1 >> 1;
      iVar10 = WebPRescalerInit(puVar5[7],iVar9,iVar17,lVar15,iVar8,uVar2,0,1,lVar12 + lVar13);
      if (iVar10 == 0) {
        return 0;
      }
      lVar12 = lVar13 + lVar12 + lVar13;
      lVar15 = lVar15 + lVar19;
      iVar10 = WebPRescalerInit(puVar5[8],iVar9,iVar17,lVar15,iVar8,uVar2,0,1,lVar12);
      if (iVar10 == 0) {
        return 0;
      }
      puVar5[0xb] = EmitRescaledRGB;
      WebPInitYUV444Converters();
      if (bVar7 || bVar21) {
        return 1;
      }
      iVar8 = WebPRescalerInit(puVar5[9],*(undefined4 *)(param_1 + 0xc),
                               *(undefined4 *)(param_1 + 0x10),lVar15 + lVar19,iVar8,uVar2,0,1,
                               lVar12 + lVar13);
      if (iVar8 != 0) {
        puVar5[0xc] = EmitRescaledAlphaRGB;
        if ((*(int *)*puVar5 == 5) || (pcVar14 = ExportAlpha, *(int *)*puVar5 == 10)) {
          pcVar14 = ExportAlphaRGBA4444;
        }
        puVar5[0xd] = pcVar14;
        WebPInitAlphaProcessing();
        return 1;
      }
      return 0;
    }
    if (10 < uVar1) {
      puVar5[0xb] = EmitYUV;
      return 1;
    }
    WebPInitSamplers();
    puVar5[0xb] = EmitSampledRGB;
    if (*(int *)(param_1 + 0x58) == 0) {
      return 1;
    }
    bVar7 = false;
  }
  uVar11 = *(int *)(param_1 + 0xc) + 1;
  lVar15 = WebPSafeMalloc(1,(long)(int)((uVar11 & 0xfffffffe) + *(int *)(param_1 + 0xc)));
  puVar5[10] = lVar15;
  if (lVar15 == 0) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  puVar5[1] = lVar15;
  lVar15 = lVar15 + iVar8;
  puVar5[2] = lVar15;
  puVar5[3] = lVar15 + ((int)uVar11 >> 1);
  puVar5[0xb] = EmitFancyRGB;
  WebPInitUpsamplers();
  if (!bVar7) {
    return 1;
  }
LAB_00101288:
  if ((uVar1 == 10) || (pcVar14 = EmitAlphaRGB, uVar1 == 5)) {
    pcVar14 = EmitAlphaRGBA4444;
  }
  puVar5[0xc] = pcVar14;
  WebPInitAlphaProcessing();
  return 1;
}



int EmitRescaledYUV(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1[4];
  uVar1 = param_2[6];
  iVar3 = iVar7 + 1 >> 1;
  if (((*(uint *)*param_2 < 0xd) && ((0x17baUL >> ((ulong)*(uint *)*param_2 & 0x3f) & 1) != 0)) &&
     (*(long *)(param_1 + 0x26) != 0)) {
    WebPMultRows(*(undefined8 *)(param_1 + 6),param_1[0xc],*(long *)(param_1 + 0x26),*param_1,
                 param_1[3],iVar7,0);
  }
  iVar6 = 0;
  iVar4 = param_1[0xc];
  lVar5 = *(long *)(param_1 + 6);
  if (0 < iVar7) {
    do {
      iVar2 = WebPRescalerImport(uVar1,iVar7,lVar5,iVar4);
      iVar7 = iVar7 - iVar2;
      lVar5 = lVar5 + iVar4 * iVar2;
      iVar2 = WebPRescalerExport(uVar1);
      iVar6 = iVar6 + iVar2;
    } while (0 < iVar7);
    uVar1 = param_2[7];
    iVar7 = param_1[0xd];
    lVar5 = *(long *)(param_1 + 8);
    iVar4 = iVar3;
    do {
      iVar2 = WebPRescalerImport(uVar1,iVar4,lVar5,iVar7);
      iVar4 = iVar4 - iVar2;
      lVar5 = lVar5 + iVar2 * iVar7;
      WebPRescalerExport(uVar1);
    } while (0 < iVar4);
    uVar1 = param_2[8];
    iVar7 = param_1[0xd];
    lVar5 = *(long *)(param_1 + 10);
    do {
      iVar4 = WebPRescalerImport(uVar1,iVar3,lVar5,iVar7);
      iVar3 = iVar3 - iVar4;
      lVar5 = lVar5 + iVar7 * iVar4;
      WebPRescalerExport(uVar1);
    } while (0 < iVar3);
  }
  return iVar6;
}



void WebPInitCustomIo(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(code **)(param_2 + 0x50) = CustomTeardown;
  *(code **)(param_2 + 0x40) = CustomPut;
  *(code **)(param_2 + 0x48) = CustomSetup;
  return;
}



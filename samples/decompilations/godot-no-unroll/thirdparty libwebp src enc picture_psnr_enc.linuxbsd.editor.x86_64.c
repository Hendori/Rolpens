
double AccumulateLSIM(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (param_6 < 1) {
    return 0.0;
  }
  iVar10 = 0;
  dVar15 = 0.0;
  iVar7 = 0;
  do {
    iVar6 = 2;
    if (1 < iVar7) {
      iVar6 = iVar7;
    }
    iVar5 = iVar7 + 3;
    if (param_6 < iVar7 + 3) {
      iVar5 = param_6;
    }
    iVar6 = iVar6 + -2;
    if (0 < param_5) {
      lVar4 = 0;
      do {
        iVar9 = (int)lVar4;
        iVar2 = 2;
        if (1 < iVar9) {
          iVar2 = iVar9;
        }
        iVar12 = iVar9 + 3;
        if (param_5 < iVar9 + 3) {
          iVar12 = param_5;
        }
        dVar14 = _LC1;
        if (iVar6 < iVar5) {
          pbVar8 = (byte *)((long)iVar2 + (long)(iVar6 * param_2) + param_1 + -1 +
                           (ulong)((iVar12 - iVar2) + 1));
          lVar11 = (long)(iVar6 * param_2);
          iVar9 = iVar6;
          do {
            if (iVar2 + -2 < iVar12) {
              pbVar3 = (byte *)((iVar2 + -2) + param_1 + lVar11);
              do {
                bVar1 = *pbVar3;
                pbVar3 = pbVar3 + 1;
                dVar13 = (double)bVar1 - (double)*(byte *)(iVar10 + param_3 + lVar4);
                dVar13 = dVar13 * dVar13;
                if (dVar14 <= dVar13) {
                  dVar13 = dVar14;
                }
                dVar14 = dVar13;
              } while (pbVar8 != pbVar3);
            }
            iVar9 = iVar9 + 1;
            pbVar8 = pbVar8 + param_2;
            lVar11 = lVar11 + param_2;
          } while (iVar5 != iVar9);
        }
        lVar4 = lVar4 + 1;
        dVar15 = dVar15 + dVar14;
      } while (lVar4 != param_5);
    }
    iVar7 = iVar7 + 1;
    iVar10 = iVar10 + param_4;
  } while (param_6 != iVar7);
  return dVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double AccumulateSSE(long param_1,int param_2,long param_3,int param_4,undefined4 param_5,
                    int param_6)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  
  if (0 < param_6) {
    dVar3 = 0.0;
    iVar2 = 0;
    do {
      uVar1 = (*_VP8AccumulateSSE)(param_1,param_3,param_5);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      dVar3 = dVar3 + (double)uVar1;
    } while (param_6 != iVar2);
    return dVar3;
  }
  return 0.0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double AccumulateSSIM(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  double dVar8;
  double local_80;
  int local_6c;
  int local_60;
  int local_5c;
  
  local_80 = 0.0;
  if (0 < param_6) {
    local_6c = 3;
    if (param_6 < 4) {
      local_6c = param_6;
    }
    if (0 < param_5) {
      iVar5 = 0;
      do {
        iVar4 = 0;
        do {
          iVar2 = iVar4 + 1;
          dVar8 = (double)(*_VP8SSIMGetClipped)
                                    (param_1,param_2,param_3,param_4,iVar4,iVar5,param_5,param_6);
          local_80 = dVar8 + local_80;
          iVar4 = iVar2;
        } while (param_5 != iVar2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_6c);
    }
    iVar5 = param_6 + -4;
    iVar4 = local_6c;
    if (local_6c < iVar5) {
      iVar2 = 3;
      if (param_5 < 4) {
        iVar2 = param_5;
      }
      local_60 = param_2 * (local_6c + -3);
      local_5c = (local_6c + -3) * param_4;
      lVar1 = (long)iVar2 + -3;
      do {
        iVar4 = 0;
        if (0 < param_5) {
          do {
            iVar6 = iVar4 + 1;
            dVar8 = (double)(*_VP8SSIMGetClipped)
                                      (param_1,param_2,param_3,param_4,iVar4,local_6c,param_5,
                                       param_6);
            local_80 = dVar8 + local_80;
            iVar4 = iVar6;
          } while (iVar6 < iVar2);
          iVar4 = iVar2;
          if (iVar2 < param_5 + -4) {
            lVar3 = param_1 + local_60 + lVar1;
            lVar7 = param_3 + local_5c + lVar1;
            do {
              dVar8 = (double)(*_VP8SSIMGet)(lVar3,param_2,lVar7,param_4);
              local_80 = dVar8 + local_80;
              lVar3 = lVar3 + 1;
              lVar7 = lVar7 + 1;
              iVar4 = param_5 + -4;
            } while (lVar3 != (ulong)(uint)((param_5 + -5) - iVar2) + param_1 + -2 + (long)iVar2 +
                              (long)local_60);
          }
          if (iVar4 < param_5) {
            do {
              iVar6 = iVar4 + 1;
              dVar8 = (double)(*_VP8SSIMGetClipped)
                                        (param_1,param_2,param_3,param_4,iVar4,local_6c,param_5,
                                         param_6);
              local_80 = dVar8 + local_80;
              iVar4 = iVar6;
            } while (param_5 != iVar6);
          }
        }
        local_6c = local_6c + 1;
        local_60 = local_60 + param_2;
        local_5c = local_5c + param_4;
        iVar4 = iVar5;
      } while (iVar5 != local_6c);
    }
    if ((iVar4 < param_6) && (0 < param_5)) {
      do {
        iVar5 = 0;
        do {
          iVar2 = iVar5 + 1;
          dVar8 = (double)(*_VP8SSIMGetClipped)
                                    (param_1,param_2,param_3,param_4,iVar5,iVar4,param_5,param_6);
          local_80 = dVar8 + local_80;
          iVar5 = iVar2;
        } while (param_5 != iVar2);
        iVar4 = iVar4 + 1;
      } while (param_6 != iVar4);
    }
  }
  return local_80;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
WebPPlaneDistortion(long param_1,ulong param_2,long param_3,ulong param_4,int param_5,int param_6,
                   long param_7,int param_8,float *param_9,float *param_10)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  code *pcVar12;
  float fVar13;
  double dVar14;
  
  pcVar12 = AccumulateSSE;
  if ((param_8 != 0) && (pcVar12 = AccumulateLSIM, param_8 == 1)) {
    pcVar12 = AccumulateSSIM;
  }
  if ((param_1 != 0) && (param_3 != 0)) {
    lVar8 = (long)param_5;
    uVar5 = param_4;
    if (param_2 <= param_4) {
      uVar5 = param_2;
    }
    if ((((ulong)(lVar8 * param_7) <= uVar5) && (param_10 != (float *)0x0)) &&
       (param_9 != (float *)0x0)) {
      VP8SSIMDspInit();
      lVar3 = param_1;
      lVar7 = param_3;
      lVar10 = 0;
      if (param_7 != 1) {
        lVar3 = WebPSafeMalloc(param_6 * lVar8 * 2,1);
        if (lVar3 == 0) {
          return 0;
        }
        lVar7 = lVar3 + param_6 * lVar8;
        lVar10 = lVar3;
        if (0 < param_6) {
          iVar9 = 0;
          iVar11 = 0;
          do {
            lVar4 = (long)iVar11;
            lVar6 = 0;
            lVar1 = lVar8 + lVar4;
            if (0 < param_5) {
              do {
                *(undefined1 *)(lVar3 + lVar4) = *(undefined1 *)(param_1 + lVar6);
                puVar2 = (undefined1 *)(param_3 + lVar6);
                lVar6 = lVar6 + param_7;
                *(undefined1 *)(lVar7 + lVar4) = *puVar2;
                lVar4 = lVar4 + 1;
              } while (lVar1 != lVar4);
            }
            iVar9 = iVar9 + 1;
            iVar11 = iVar11 + param_5;
            param_1 = param_1 + param_2;
            param_3 = param_3 + param_4;
          } while (param_6 != iVar9);
        }
      }
      dVar14 = (double)(*pcVar12)(lVar3,param_5,lVar7,param_5,param_5);
      *param_9 = (float)dVar14;
      WebPSafeFree(lVar10);
      fVar13 = _LC2;
      if (param_8 == 1) {
        if ((0.0 < (double)param_5 * (double)param_6) &&
           (dVar14 = (double)*param_9 / ((double)param_5 * (double)param_6), dVar14 < _LC3)) {
          dVar14 = log10(_LC3 - dVar14);
          fVar13 = (float)(dVar14 * __LC4);
        }
      }
      else if ((0.0 < *param_9) && (0.0 < (double)param_5 * (double)param_6)) {
        dVar14 = log((double)*param_9 / ((double)param_5 * (double)param_6 * _LC6 * _LC6));
        fVar13 = (float)(dVar14 * __LC7);
      }
      *param_10 = fVar13;
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 WebPPictureDistortion(long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  double dVar9;
  float local_24c;
  int local_248 [18];
  long local_200;
  int local_1f8;
  int local_148 [18];
  long local_100;
  int local_f8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 != 0) && (param_2 != 0)) && (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) &&
     (param_4 != 0)) {
    VP8SSIMDspInit();
    iVar2 = WebPPictureInitInternal(local_248,0x20f);
    if (iVar2 != 0) {
      iVar2 = WebPPictureInitInternal(local_148,0x20f);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0xc);
        iVar1 = *(int *)(param_1 + 8);
        iVar3 = WebPPictureView(param_1,0,0,iVar1,iVar2,local_248);
        if ((((iVar3 == 0) ||
             (iVar3 = WebPPictureView(param_2,0,0,iVar1,iVar2,local_148), iVar3 == 0)) ||
            ((local_248[0] == 0 && (iVar3 = WebPPictureYUVAToARGB(local_248), iVar3 == 0)))) ||
           ((local_148[0] == 0 && (iVar3 = WebPPictureYUVAToARGB(local_148), iVar3 == 0)))) {
LAB_00100891:
          uVar4 = 0;
        }
        else {
          lVar5 = 0;
          dVar8 = 0.0;
          dVar9 = 0.0;
          lVar6 = param_4;
          do {
            iVar3 = WebPPlaneDistortion(local_200 + lVar5,(long)local_1f8 << 2,local_100 + lVar5,
                                        (long)local_f8 << 2,iVar1,iVar2,4,param_3,&local_24c,lVar6);
            if (iVar3 == 0) goto LAB_00100891;
            lVar5 = lVar5 + 1;
            lVar6 = lVar6 + 4;
            dVar8 = dVar8 + (double)local_24c;
            dVar9 = dVar9 + (double)(iVar1 * iVar2);
          } while (lVar5 != 4);
          fVar7 = _LC2;
          if (param_3 == 1) {
            if ((0.0 < dVar9) && (dVar8 / dVar9 < _LC3)) {
              dVar9 = log10(_LC3 - dVar8 / dVar9);
              fVar7 = (float)(dVar9 * __LC4);
            }
          }
          else if ((0.0 < dVar8) && (0.0 < dVar9)) {
            dVar9 = log(dVar8 / (dVar9 * _LC6 * _LC6));
            fVar7 = (float)(dVar9 * __LC7);
          }
          *(float *)(param_4 + 0x10) = fVar7;
          uVar4 = 1;
        }
        WebPPictureFree(local_248);
        WebPPictureFree(local_148);
        goto LAB_00100822;
      }
    }
  }
  uVar4 = 0;
LAB_00100822:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



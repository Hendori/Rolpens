
void BlendPixelRowNonPremult(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  if (0 < param_3) {
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(param_1 + lVar4);
      uVar6 = uVar1 >> 0x18;
      if (uVar6 != 0xff) {
        uVar3 = *(uint *)(param_2 + lVar4);
        if (uVar1 >> 0x18 != 0) {
          iVar5 = (int)((uVar3 >> 0x18) * (0x100 - uVar6)) >> 8;
          uVar2 = 0x1000000 / (uVar6 + iVar5 & 0xff);
          uVar3 = (((uVar1 >> 8 & 0xff) * uVar6 + (uVar3 >> 8 & 0xff) * iVar5) * uVar2 >> 0x18) << 8
                  | ((uVar1 & 0xff) * uVar6 + (uVar3 & 0xff) * iVar5) * uVar2 >> 0x18 |
                    (uVar6 + iVar5) * 0x1000000 |
                  (((uVar1 >> 0x10 & 0xff) * uVar6 + (uVar3 >> 0x10 & 0xff) * iVar5) * uVar2 >> 0x18
                  ) << 0x10;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
      }
      lVar4 = lVar4 + 4;
    } while (lVar4 != (long)param_3 * 4);
    return;
  }
  return;
}



void BlendPixelRowPremult(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_1 + lVar2) >> 0x18;
      if (uVar1 != 0xff) {
        iVar3 = 0x100 - uVar1;
        *(uint *)(param_1 + lVar2) =
             ((*(uint *)(param_2 + lVar2) & 0xff00ff) * iVar3 >> 8 & 0xff00ff |
             (*(uint *)(param_2 + lVar2) >> 8 & 0xff00ff) * iVar3 & 0xff00ff00) +
             *(uint *)(param_1 + lVar2);
      }
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



int WebPAnimDecoderOptionsInitInternal(undefined8 *param_1,int param_2)

{
  if ((param_1 != (undefined8 *)0x0) && (param_2 >> 8 == 1)) {
    *param_1 = 1;
    return param_2 >> 8;
  }
  return 0;
}



long * WebPAnimDecoderNewInternal(undefined8 *param_1,uint *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (undefined8 *)0x0) && (param_3 >> 8 == 1)) {
    iVar1 = WebPGetFeaturesInternal(*param_1,param_1[1],auStack_58,0x209);
    if (iVar1 == 0) {
      plVar3 = (long *)WebPSafeCalloc(1,0x198);
      if (plVar3 != (long *)0x0) {
        if (param_2 == (uint *)0x0) {
          uVar7 = 1;
          uVar6 = 0;
LAB_00100415:
          pcVar4 = BlendPixelRowNonPremult;
LAB_00100269:
          plVar3[0x1f] = (long)pcVar4;
          iVar1 = WebPInitDecoderConfigInternal(plVar3 + 1,0x209);
          if (iVar1 != 0) {
            *(uint *)(plVar3 + 6) = uVar7;
            *(undefined4 *)((long)plVar3 + 0x3c) = 1;
            *(uint *)(plVar3 + 0x1a) = uVar6;
            lVar5 = WebPDemuxInternal(param_1,0,0,0x107);
            *plVar3 = lVar5;
            if (lVar5 != 0) {
              uVar2 = WebPDemuxGetI(lVar5,1);
              *(undefined4 *)(plVar3 + 0x20) = uVar2;
              uVar2 = WebPDemuxGetI(*plVar3,2);
              *(undefined4 *)((long)plVar3 + 0x104) = uVar2;
              uVar2 = WebPDemuxGetI(*plVar3,3);
              *(undefined4 *)(plVar3 + 0x21) = uVar2;
              uVar2 = WebPDemuxGetI(*plVar3,4);
              *(undefined4 *)((long)plVar3 + 0x10c) = uVar2;
              uVar2 = WebPDemuxGetI(*plVar3,5);
              *(undefined4 *)(plVar3 + 0x22) = uVar2;
              lVar5 = WebPSafeCalloc((int)plVar3[0x20] * 4,*(undefined4 *)((long)plVar3 + 0x104));
              plVar3[0x25] = lVar5;
              if (lVar5 != 0) {
                lVar5 = WebPSafeCalloc((int)plVar3[0x20] * 4,*(undefined4 *)((long)plVar3 + 0x104));
                plVar3[0x26] = lVar5;
                if (lVar5 != 0) {
                  *(undefined4 *)(plVar3 + 0x27) = 0;
                  WebPDemuxReleaseIterator(plVar3 + 0x28);
                  lVar5 = _LC0;
                  *(undefined1 (*) [16])(plVar3 + 0x28) = (undefined1  [16])0x0;
                  plVar3[0x32] = lVar5;
                  *(undefined1 (*) [16])(plVar3 + 0x2a) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(plVar3 + 0x2c) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(plVar3 + 0x2e) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(plVar3 + 0x30) = (undefined1  [16])0x0;
                  goto LAB_001003e6;
                }
              }
            }
          }
        }
        else {
          uVar7 = *param_2;
          uVar6 = param_2[1];
          if ((uVar7 & 0xfffffffd) == 1) goto LAB_00100415;
          if (uVar7 - 7 < 2) {
            pcVar4 = BlendPixelRowPremult;
            goto LAB_00100269;
          }
        }
        WebPDemuxReleaseIterator(plVar3 + 0x28);
        WebPDemuxDelete(*plVar3);
        WebPSafeFree(plVar3[0x25]);
        WebPSafeFree(plVar3[0x26]);
        WebPSafeFree(plVar3);
      }
    }
  }
  plVar3 = (long *)0x0;
LAB_001003e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WebPAnimDecoderGetInfo(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    *param_2 = *(undefined8 *)(param_1 + 0x100);
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    param_2[2] = *(undefined8 *)(param_1 + 0x110);
    param_2[3] = uVar1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x120);
    return 1;
  }
  return 0;
}



undefined8 WebPAnimDecoderGetNext(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  int local_c8;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (undefined8 *)0x0 && param_3 != (int *)0x0) && (param_1 != (undefined8 *)0x0)) &&
     (*(int *)((long)param_1 + 0x194) <= *(int *)(param_1 + 0x22))) {
    pcVar3 = (code *)param_1[0x1f];
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar2 = *(uint *)((long)param_1 + 0x104);
    uVar9 = (ulong)uVar2;
    iVar5 = WebPDemuxGetFrame(*param_1);
    iVar4 = iStack_80;
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x27);
      if (((local_98 == 1) ||
          (((iStack_60 == 0 || (iStack_5c == 1)) && ((local_88 == uVar1 && (uStack_84 == uVar2))))))
         || ((*(int *)((long)param_1 + 0x15c) == 1 &&
             ((*(uint *)(param_1 + 0x2a) == uVar1 && *(uint *)((long)param_1 + 0x154) == uVar2 ||
              (*(int *)(param_1 + 0x32) != 0)))))) {
        memset((void *)param_1[0x25],0,uVar1 * uVar9 * 4);
        local_c8 = 1;
      }
      else {
        memcpy((void *)param_1[0x25],(void *)param_1[0x26],uVar1 * uVar9 * 4);
        local_c8 = 0;
      }
      uVar2 = uVar1 * 4;
      *(uint *)(param_1 + 9) = uVar2;
      param_1[8] = (long)iStack_8c * (ulong)uVar2 + (long)iStack_90 * 4 + param_1[0x25];
      param_1[10] = (long)(int)uStack_84 * (ulong)uVar2;
      iVar6 = WebPDecode(uStack_70,local_68,param_1 + 1);
      if (iVar6 == 0) {
        if ((1 < local_98) && (local_c8 == 0 && iStack_5c == 0)) {
          if (*(int *)((long)param_1 + 0x15c) == 0) {
            if (0 < (int)uStack_84) {
              iVar6 = 0;
              do {
                iVar11 = iStack_8c + iVar6;
                iVar6 = iVar6 + 1;
                lVar8 = (ulong)(iVar11 * uVar1 + iStack_90) * 4;
                (*pcVar3)(lVar8 + param_1[0x25],param_1[0x26] + lVar8,local_88);
              } while (iVar6 < (int)uStack_84);
            }
          }
          else if (0 < (int)uStack_84) {
            iVar6 = 0;
            do {
              iVar10 = iStack_8c + iVar6;
              iVar11 = *(int *)(param_1 + 0x29);
              if ((((iVar10 < *(int *)((long)param_1 + 0x14c)) ||
                   (*(int *)((long)param_1 + 0x14c) + *(int *)((long)param_1 + 0x154) <= iVar10)) ||
                  (iVar14 = *(int *)(param_1 + 0x2a) + iVar11, iVar14 <= iStack_90)) ||
                 (iVar13 = iStack_90 + local_88, iVar13 <= iVar11)) {
                if (0 < (int)local_88) {
                  lVar8 = (ulong)(iVar10 * uVar1 + iStack_90) * 4;
                  (*pcVar3)(param_1[0x25] + lVar8,param_1[0x26] + lVar8,local_88);
                }
              }
              else if (iStack_90 < iVar11) {
                if (iVar14 < iVar13) {
                  lVar8 = (ulong)(iStack_90 + iVar10 * uVar1) * 4;
                  (*pcVar3)(lVar8 + param_1[0x25],param_1[0x26] + lVar8,iVar11 - iStack_90);
                  goto LAB_00100667;
                }
                lVar8 = (ulong)(iVar10 * uVar1 + iStack_90) * 4;
                (*pcVar3)(param_1[0x25] + lVar8,param_1[0x26] + lVar8);
              }
              else if (iVar14 < iVar13) {
LAB_00100667:
                lVar8 = (ulong)(iVar14 + iVar10 * uVar1) * 4;
                (*pcVar3)(lVar8 + param_1[0x25],param_1[0x26] + lVar8,iVar13 - iVar14);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uStack_84);
          }
        }
        *(int *)(param_1 + 0x27) = iVar5 + iVar4;
        WebPDemuxReleaseIterator(param_1 + 0x28);
        *(int *)(param_1 + 0x32) = local_c8;
        param_1[0x28] = CONCAT44(uStack_94,local_98);
        param_1[0x29] = CONCAT44(iStack_8c,iStack_90);
        param_1[0x2a] = CONCAT44(uStack_84,local_88);
        param_1[0x2b] = CONCAT44(uStack_7c,iStack_80);
        param_1[0x2c] = local_78;
        param_1[0x2d] = uStack_70;
        param_1[0x2e] = local_68;
        param_1[0x2f] = CONCAT44(iStack_5c,iStack_60);
        param_1[0x30] = local_58;
        param_1[0x31] = uStack_50;
        memcpy((void *)param_1[0x26],(void *)param_1[0x25],uVar1 * uVar9 * 4);
        if (*(int *)((long)param_1 + 0x15c) == 1) {
          iVar6 = *(int *)((long)param_1 + 0x154);
          iVar11 = *(int *)(param_1 + 0x2a);
          pvVar12 = (void *)((long)(int)(*(int *)((long)param_1 + 0x14c) * uVar2 +
                                        *(int *)(param_1 + 0x29) * 4) + param_1[0x26]);
          if (0 < iVar6) {
            iVar10 = 0;
            do {
              iVar10 = iVar10 + 1;
              pvVar12 = memset(pvVar12,0,(long)(iVar11 << 2));
              pvVar12 = (void *)((long)pvVar12 + (long)(int)uVar2);
            } while (iVar6 != iVar10);
          }
        }
        *(int *)((long)param_1 + 0x194) = *(int *)((long)param_1 + 0x194) + 1;
        *param_2 = param_1[0x25];
        uVar7 = 1;
        *param_3 = iVar5 + iVar4;
        goto LAB_001004c6;
      }
      WebPDemuxReleaseIterator(&local_98);
    }
  }
  uVar7 = 0;
LAB_001004c6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



bool WebPAnimDecoderHasMoreFrames(long param_1)

{
  if (param_1 != 0) {
    return *(int *)(param_1 + 0x194) <= *(int *)(param_1 + 0x110);
  }
  return false;
}



void WebPAnimDecoderReset(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    WebPDemuxReleaseIterator(param_1 + 0x140);
    uVar1 = _LC0;
    *(undefined1 (*) [16])(param_1 + 0x140) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 400) = uVar1;
    *(undefined1 (*) [16])(param_1 + 0x150) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x160) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x170) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x180) = (undefined1  [16])0x0;
    return;
  }
  return;
}



undefined8 WebPAnimDecoderGetDemuxer(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



void WebPAnimDecoderDelete(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    WebPDemuxReleaseIterator(param_1 + 0x28);
    WebPDemuxDelete(*param_1);
    WebPSafeFree(param_1[0x25]);
    WebPSafeFree(param_1[0x26]);
    WebPSafeFree(param_1);
    return;
  }
  return;
}



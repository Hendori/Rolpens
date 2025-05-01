
void NearLossless(int param_1,int param_2,undefined4 *param_3,int param_4,byte param_5,void *param_6
                 ,undefined4 *param_7)

{
  size_t __n;
  void *pvVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  void *__dest;
  void *local_80;
  void *local_78;
  undefined4 *local_60;
  
  lVar4 = (long)param_1;
  __n = lVar4 * 4;
  __dest = (void *)((long)param_6 + __n);
  iVar5 = 1 << (param_5 & 0x1f);
  local_80 = (void *)((long)__dest + __n);
  memcpy(__dest,param_3,__n);
  local_60 = param_3 + param_4;
  memcpy(local_80,local_60,__n);
  if (param_2 < 1) {
    return;
  }
  uVar6 = iVar5 - 1U >> 1;
  uVar13 = -iVar5;
  iVar11 = 0;
  local_78 = param_6;
  do {
    pvVar1 = local_80;
    memcpy(param_7,param_3,__n);
    local_80 = local_78;
    param_3 = local_60;
    local_78 = __dest;
    while( true ) {
      __dest = pvVar1;
      iVar11 = iVar11 + 1;
      param_7 = param_7 + lVar4;
      if (param_2 == iVar11) {
        return;
      }
      local_60 = param_3 + param_4;
      if (param_2 + -1 == iVar11) break;
      memcpy(local_80,local_60,__n);
      uVar9 = 1;
      *param_7 = *param_3;
      param_7[lVar4 + -1] = param_3[lVar4 + -1];
      if (2 < param_1) {
        iVar10 = -iVar5;
        do {
          while( true ) {
            uVar14 = *(uint *)((long)__dest + uVar9 * 4);
            uVar15 = *(uint *)((long)__dest + uVar9 * 4 + -4);
            uVar12 = uVar14 & 0xff;
            iVar3 = uVar12 - (uVar15 & 0xff);
            if ((iVar3 < iVar5) && (iVar3 != iVar10 && SBORROW4(iVar3,iVar10) == iVar3 + iVar5 < 0))
            break;
LAB_00100320:
            uVar15 = ((uVar14 >> 0x18) >> (param_5 & 0x1f) & 1) + (uVar14 >> 0x18) + uVar6;
            uVar2 = uVar14 >> 8 & 0xff;
            uVar7 = (uVar15 & uVar13) << 0x18;
            if (0xff < uVar15) {
              uVar7 = 0xff000000;
            }
            uVar14 = uVar14 >> 0x10 & 0xff;
            uVar15 = uVar14 + uVar6 + (uVar14 >> (param_5 & 0x1f) & 1);
            uVar14 = (uVar15 & uVar13) << 0x10;
            if (0xff < uVar15) {
              uVar14 = 0xff0000;
            }
            uVar2 = (uVar2 >> (param_5 & 0x1f) & 1) + uVar2 + uVar6;
            uVar15 = (uVar2 & uVar13) << 8;
            if (0xff < uVar2) {
              uVar15 = 0xff00;
            }
            uVar2 = (uVar12 >> (param_5 & 0x1f) & 1) + uVar12 + uVar6;
            uVar12 = 0xff;
            if (uVar2 < 0x100) {
              uVar12 = uVar2 & uVar13;
            }
            param_7[uVar9] = uVar15 | uVar7 | uVar14 | uVar12;
            uVar9 = uVar9 + 1;
            if (uVar9 == param_1 - 1) goto LAB_001002fa;
          }
          iVar3 = 8;
          do {
            iVar8 = (uVar14 >> ((byte)iVar3 & 0x1f) & 0xff) -
                    (uVar15 >> ((byte)iVar3 & 0x1f) & 0xff);
            if ((iVar5 <= iVar8) ||
               (iVar3 = iVar3 + 8, iVar8 == iVar10 || SBORROW4(iVar8,iVar10) != iVar8 + iVar5 < 0))
            goto LAB_00100320;
          } while (iVar3 != 0x20);
          uVar15 = *(uint *)((long)__dest + uVar9 * 4 + 4);
          iVar3 = uVar12 - (uVar15 & 0xff);
          if ((iVar5 <= iVar3) || (iVar3 == iVar10 || SBORROW4(iVar3,iVar10) != iVar3 + iVar5 < 0))
          goto LAB_00100320;
          iVar3 = 8;
          do {
            iVar8 = (uVar14 >> ((byte)iVar3 & 0x1f) & 0xff) -
                    (uVar15 >> ((byte)iVar3 & 0x1f) & 0xff);
            if ((iVar5 <= iVar8) ||
               (iVar3 = iVar3 + 8, iVar8 == iVar10 || SBORROW4(iVar8,iVar10) != iVar8 + iVar5 < 0))
            goto LAB_00100320;
          } while (iVar3 != 0x20);
          uVar15 = *(uint *)((long)local_78 + uVar9 * 4);
          iVar3 = uVar12 - (uVar15 & 0xff);
          if ((iVar5 <= iVar3) || (iVar3 == iVar10 || SBORROW4(iVar3,iVar10) != iVar3 + iVar5 < 0))
          goto LAB_00100320;
          iVar3 = 8;
          do {
            iVar8 = (uVar14 >> ((byte)iVar3 & 0x1f) & 0xff) -
                    (uVar15 >> ((byte)iVar3 & 0x1f) & 0xff);
            if ((iVar5 <= iVar8) ||
               (iVar3 = iVar3 + 8, iVar8 == iVar10 || SBORROW4(iVar8,iVar10) != iVar8 + iVar5 < 0))
            goto LAB_00100320;
          } while (iVar3 != 0x20);
          uVar15 = *(uint *)((long)local_80 + uVar9 * 4);
          iVar3 = uVar12 - (uVar15 & 0xff);
          if ((iVar5 <= iVar3) || (iVar3 == iVar10 || SBORROW4(iVar3,iVar10) != iVar3 + iVar5 < 0))
          goto LAB_00100320;
          iVar3 = 8;
          do {
            iVar8 = (uVar14 >> ((byte)iVar3 & 0x1f) & 0xff) -
                    (uVar15 >> ((byte)iVar3 & 0x1f) & 0xff);
            if ((iVar5 <= iVar8) ||
               (iVar3 = iVar3 + 8, iVar8 == iVar10 || SBORROW4(iVar8,iVar10) != iVar8 + iVar5 < 0))
            goto LAB_00100320;
          } while (iVar3 != 0x20);
          param_7[uVar9] = uVar14;
          uVar9 = uVar9 + 1;
        } while (uVar9 != param_1 - 1);
      }
LAB_001002fa:
      param_3 = local_60;
      pvVar1 = local_80;
      local_80 = local_78;
      local_78 = __dest;
    }
  } while( true );
}



undefined8 VP8ApplyNearLossless(long param_1,int param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0xc);
  lVar5 = WebPSafeMalloc((long)(iVar1 * 3),4);
  if (lVar5 != 0) {
    if ((iVar1 < 0x40 && iVar3 < 0x40) || (iVar3 < 3)) {
      if (0 < iVar3) {
        iVar6 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x50) * iVar6;
          iVar6 = iVar6 + 1;
          param_3 = memcpy(param_3,(void *)(*(long *)(param_1 + 0x48) + (long)iVar4 * 4),
                           (long)iVar1 * 4);
          param_3 = (void *)((long)param_3 + (long)iVar1 * 4);
        } while (iVar3 != iVar6);
      }
    }
    else {
      NearLossless(iVar1,iVar3,*(undefined8 *)(param_1 + 0x48),uVar2,-(param_2 / 0x14) + 5,lVar5,
                   param_3);
      for (iVar6 = -(param_2 / 0x14) + 4; iVar6 != 0; iVar6 = iVar6 + -1) {
        NearLossless(iVar1,iVar3,param_3,iVar1,iVar6,lVar5,param_3);
      }
    }
    WebPSafeFree(lVar5);
    return 1;
  }
  return 0;
}



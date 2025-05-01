
undefined8 updatewindow(long param_1,long param_2,uint param_3)

{
  long lVar1;
  void *__dest;
  uint uVar2;
  int iVar3;
  size_t __n;
  
  lVar1 = *(long *)(param_1 + 0x38);
  __dest = *(void **)(lVar1 + 0x48);
  if (__dest == (void *)0x0) {
    __dest = (void *)(**(code **)(param_1 + 0x40))
                               (*(undefined8 *)(param_1 + 0x50),
                                1 << ((byte)*(undefined4 *)(lVar1 + 0x38) & 0x1f),1);
    *(void **)(lVar1 + 0x48) = __dest;
    if (__dest == (void *)0x0) {
      return 1;
    }
  }
  uVar2 = *(uint *)(lVar1 + 0x3c);
  if (uVar2 == 0) {
    *(undefined8 *)(lVar1 + 0x40) = 0;
    uVar2 = 1 << ((byte)*(undefined4 *)(lVar1 + 0x38) & 0x1f);
    *(uint *)(lVar1 + 0x3c) = uVar2;
  }
  if (param_3 < uVar2) {
    uVar2 = uVar2 - *(uint *)(lVar1 + 0x44);
    __n = (size_t)uVar2;
    if (param_3 < uVar2) {
      __n = (size_t)param_3;
    }
    iVar3 = (int)__n;
    memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar1 + 0x44)),
           (void *)(param_2 - (ulong)param_3),__n);
    param_3 = param_3 - iVar3;
    if (param_3 == 0) {
      uVar2 = *(int *)(lVar1 + 0x44) + iVar3;
      if (uVar2 == *(uint *)(lVar1 + 0x3c)) {
        uVar2 = 0;
      }
      *(uint *)(lVar1 + 0x44) = uVar2;
      if (*(uint *)(lVar1 + 0x40) < *(uint *)(lVar1 + 0x3c)) {
        *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) + iVar3;
      }
    }
    else {
      memcpy(*(void **)(lVar1 + 0x48),(void *)(param_2 - (ulong)param_3),(ulong)param_3);
      *(ulong *)(lVar1 + 0x40) = CONCAT44(param_3,*(undefined4 *)(lVar1 + 0x3c));
    }
  }
  else {
    memcpy(__dest,(void *)(param_2 - (ulong)uVar2),(ulong)uVar2);
    *(undefined4 *)(lVar1 + 0x44) = 0;
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar1 + 0x3c);
  }
  return 0;
}



bool inflateStateCheck(long param_1)

{
  long *plVar1;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
    plVar1 = *(long **)(param_1 + 0x38);
    if ((plVar1 != (long *)0x0) && (param_1 == *plVar1)) {
      return 0x1f < (int)plVar1[1] - 0x3f34U;
    }
    return true;
  }
  return true;
}



undefined8 inflateResetKeep(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = inflateStateCheck();
  if ((int)uVar5 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    uVar2 = *(uint *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (uVar2 != 0) {
      *(ulong *)(param_1 + 0x60) = (ulong)(uVar2 & 1);
    }
    uVar4 = _LC0;
    *(undefined8 *)(lVar3 + 8) = 0x3f34;
    *(undefined4 *)(lVar3 + 0x1c) = 0x8000;
    *(undefined8 *)(lVar3 + 0x14) = uVar4;
    lVar1 = lVar3 + 0x558;
    *(long *)(lVar3 + 0x90) = lVar1;
    uVar4 = _LC1;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined4 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x1be8) = uVar4;
    *(long *)(lVar3 + 0x68) = lVar1;
    *(long *)(lVar3 + 0x70) = lVar1;
  }
  else {
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}



undefined8 inflateReset(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (param_1 == *plVar1)))) {
    if ((int)plVar1[1] - 0x3f34U < 0x20) {
      *(undefined8 *)((long)plVar1 + 0x3c) = 0;
      *(undefined4 *)((long)plVar1 + 0x44) = 0;
      uVar2 = inflateResetKeep();
      return uVar2;
    }
  }
  return 0xfffffffe;
}



undefined8 inflateReset2(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar2 = inflateStateCheck();
  if (iVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if ((int)param_2 < 0) {
      if ((int)param_2 < -0xf) {
        return 0xfffffffe;
      }
      uVar4 = -param_2;
      iVar2 = 0;
    }
    else {
      if (0x2f < (int)param_2) {
        return 0xfffffffe;
      }
      uVar4 = param_2 & 0xf;
      iVar2 = ((int)param_2 >> 4) + 5;
    }
    if ((uVar4 - 8 < 8) || (uVar4 == 0)) {
      if ((*(long *)(lVar1 + 0x48) != 0) && (uVar4 != *(uint *)(lVar1 + 0x38))) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(lVar1 + 0x48) = 0;
      }
      *(int *)(lVar1 + 0x10) = iVar2;
      *(uint *)(lVar1 + 0x38) = uVar4;
      iVar2 = inflateStateCheck(param_1);
      if (iVar2 == 0) {
        lVar1 = *(long *)(param_1 + 0x38);
        *(undefined8 *)(lVar1 + 0x3c) = 0;
        *(undefined4 *)(lVar1 + 0x44) = 0;
        uVar3 = inflateResetKeep();
        return uVar3;
      }
    }
  }
  return 0xfffffffe;
}



int inflateInit2_(long param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x70)) {
    iVar1 = -6;
  }
  else if (param_1 == 0) {
    iVar1 = -2;
  }
  else {
    pcVar3 = *(code **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)&zcalloc;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined **)(param_1 + 0x40) = &zcalloc;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined **)(param_1 + 0x48) = &zcfree;
    }
    plVar2 = (long *)(*pcVar3)(uVar4,1,0x1bf8);
    if (plVar2 == (long *)0x0) {
      iVar1 = -4;
    }
    else {
      *(long **)(param_1 + 0x38) = plVar2;
      *plVar2 = param_1;
      plVar2[9] = 0;
      *(undefined4 *)(plVar2 + 1) = 0x3f34;
      iVar1 = inflateReset2(param_1,param_2);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
  }
  return iVar1;
}



void inflateInit_(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  inflateInit2_(param_1,0xf,param_2,param_3);
  return;
}



undefined8 inflatePrime(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  plVar2 = *(long **)(param_1 + 0x38);
  uVar4 = 0xfffffffe;
  if (plVar2 == (long *)0x0) {
    return uVar4;
  }
  if ((param_1 == *plVar2) && ((int)plVar2[1] - 0x3f34U < 0x20)) {
    if (param_2 != 0) {
      if (param_2 < 0) {
        plVar2[10] = 0;
        *(undefined4 *)(plVar2 + 0xb) = 0;
        return 0;
      }
      if (0x10 < param_2) {
        return uVar4;
      }
      lVar3 = plVar2[0xb];
      uVar1 = param_2 + (int)lVar3;
      if (0x20 < uVar1) {
        return 0xfffffffe;
      }
      *(uint *)(plVar2 + 0xb) = uVar1;
      plVar2[10] = plVar2[10] +
                   (ulong)(((int)(1L << ((byte)param_2 & 0x3f)) - 1U & param_3) <<
                          ((byte)(int)lVar3 & 0x1f));
    }
    return 0;
  }
  return uVar4;
}



/* WARNING: Type propagation algorithm not settling */

int inflate(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  byte bVar20;
  ushort *puVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  long *plVar26;
  ushort uVar27;
  undefined2 uVar28;
  undefined1 *puVar29;
  undefined1 *__dest;
  byte *__src;
  ulong uVar30;
  int iVar31;
  long in_FS_OFFSET;
  bool bVar32;
  uint local_90;
  size_t local_68;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar26 = param_1;
  iVar6 = inflateStateCheck();
  if ((iVar6 == 0) && (__dest = (undefined1 *)plVar26[3], __dest != (undefined1 *)0x0)) {
    __src = (byte *)*plVar26;
    uVar2 = *(uint *)(plVar26 + 1);
    if ((__src != (byte *)0x0) || (uVar2 == 0)) {
      lVar4 = param_1[7];
      iVar6 = *(int *)(lVar4 + 8);
      if (iVar6 == 0x3f3f) {
        *(undefined4 *)(lVar4 + 8) = 0x3f40;
        iVar6 = 0x3f40;
      }
      uVar30 = *(ulong *)(lVar4 + 0x50);
      uVar3 = *(uint *)(param_1 + 4);
      uVar19 = *(uint *)(lVar4 + 0x58);
      uVar22 = uVar2;
      local_90 = uVar3;
LAB_001005c8:
      iVar31 = 0;
      puVar29 = __dest;
      switch(iVar6) {
      case 0x3f34:
        uVar8 = *(uint *)(lVar4 + 0x10);
        if (uVar8 != 0) goto joined_r0x001019e7;
        *(undefined4 *)(lVar4 + 8) = 0x3f40;
      case 0x3f40:
switchD_001005e4_caseD_3f40:
        bVar20 = (byte)uVar19;
        if (*(int *)(lVar4 + 0xc) != 0) {
          *(undefined4 *)(lVar4 + 8) = 0x3f4e;
          uVar19 = uVar19 & 0xfffffff8;
          uVar30 = uVar30 >> (bVar20 & 7);
          goto LAB_001006e3;
        }
        if (uVar19 < 3) {
          if (uVar22 != 0) {
            bVar17 = *__src;
            uVar22 = uVar22 - 1;
            __src = __src + 1;
            uVar19 = uVar19 + 8;
            uVar30 = uVar30 + ((ulong)bVar17 << (bVar20 & 0x3f));
            goto LAB_00100871;
          }
LAB_00101f3f:
          iVar31 = 0;
          uVar16 = (ulong)(uVar3 - local_90);
          goto LAB_001009c0;
        }
LAB_00100871:
        *(uint *)(lVar4 + 0xc) = (uint)uVar30 & 1;
        uVar15 = _LC8;
        uVar8 = (uint)(uVar30 >> 1) & 3;
        if (uVar8 == 2) {
          *(undefined4 *)(lVar4 + 8) = 0x3f44;
          uVar30 = uVar30 >> 3;
          uVar19 = uVar19 - 3;
switchD_001005e4_caseD_3f44:
          for (; uVar19 < 0xe; uVar19 = uVar19 + 8) {
            if (uVar22 == 0) goto LAB_00101452;
            bVar20 = *__src;
            __src = __src + 1;
            uVar22 = uVar22 - 1;
            uVar30 = uVar30 + ((ulong)bVar20 << ((byte)uVar19 & 0x3f));
          }
          uVar19 = uVar19 - 0xe;
          uVar16 = uVar30 >> 5;
          uVar24 = uVar30 >> 10;
          uVar23 = ((uint)uVar30 & 0x1f) + 0x101;
          uVar30 = uVar30 >> 0xe;
          uVar7 = ((uint)uVar16 & 0x1f) + 1;
          uVar8 = ((uint)uVar24 & 0xf) + 4;
          *(uint *)(lVar4 + 0x84) = uVar23;
          *(uint *)(lVar4 + 0x88) = uVar7;
          *(uint *)(lVar4 + 0x80) = uVar8;
          if ((uVar23 < 0x11f) && (uVar7 < 0x1f)) {
            *(undefined4 *)(lVar4 + 0x8c) = 0;
            uVar16 = 0;
            *(undefined4 *)(lVar4 + 8) = 0x3f45;
LAB_00100ca6:
            uVar7 = (uint)uVar16;
            puVar21 = &order_2 + uVar16;
            uVar16 = uVar30;
            do {
              uVar7 = uVar7 + 1;
              if (uVar19 < 3) {
                uVar30 = uVar16;
                if (uVar22 == 0) goto LAB_00101452;
                bVar20 = *__src;
                uVar22 = uVar22 - 1;
                __src = __src + 1;
                bVar17 = (byte)uVar19;
                uVar19 = uVar19 + 8;
                uVar16 = uVar16 + ((ulong)bVar20 << (bVar17 & 0x3f));
              }
              uVar27 = *puVar21;
              uVar19 = uVar19 - 3;
              uVar30 = uVar16 >> 3;
              *(uint *)(lVar4 + 0x8c) = uVar7;
              puVar21 = puVar21 + 1;
              *(ushort *)(lVar4 + 0x98 + (ulong)uVar27 * 2) = (ushort)uVar16 & 7;
              uVar16 = uVar30;
            } while (uVar8 != uVar7);
            uVar16 = (ulong)uVar8;
LAB_00101c53:
            if ((uint)uVar16 < 0x13) {
              puVar21 = &order_2 + uVar16;
              do {
                uVar27 = *puVar21;
                puVar21 = puVar21 + 1;
                *(undefined2 *)(lVar4 + 0x98 + (ulong)uVar27 * 2) = 0;
              } while (puVar21 != &DAT_00103782 + (0x12 - (uint)uVar16) + uVar16);
              *(undefined4 *)(lVar4 + 0x8c) = 0x13;
            }
            *(undefined4 *)(lVar4 + 0x78) = 7;
            *(long *)(lVar4 + 0x90) = lVar4 + 0x558;
            *(long *)(lVar4 + 0x68) = lVar4 + 0x558;
            iVar6 = inflate_table(0,lVar4 + 0x98,0x13,lVar4 + 0x90,lVar4 + 0x78,lVar4 + 0x318);
            if (iVar6 == 0) {
              iVar6 = *(int *)(lVar4 + 0x84);
              *(undefined4 *)(lVar4 + 8) = 0x3f46;
              *(undefined4 *)(lVar4 + 0x8c) = 0;
              uVar8 = iVar6 + *(int *)(lVar4 + 0x88);
              if (uVar8 != 0) {
                uVar24 = 0;
                uVar16 = uVar30;
LAB_00100d41:
                lVar14 = *(long *)(lVar4 + 0x68);
                uVar7 = ~(-1 << ((byte)*(undefined4 *)(lVar4 + 0x78) & 0x1f));
                do {
                  lVar1 = lVar14 + (ulong)(uVar7 & (uint)uVar16) * 4;
                  bVar20 = *(byte *)(lVar1 + 1);
                  uVar27 = *(ushort *)(lVar1 + 2);
                  if (uVar19 < bVar20) {
                    do {
                      uVar30 = uVar16;
                      if (uVar22 == 0) goto LAB_00101452;
                      bVar20 = *__src;
                      __src = __src + 1;
                      uVar22 = uVar22 - 1;
                      bVar17 = (byte)uVar19;
                      uVar19 = uVar19 + 8;
                      uVar16 = uVar16 + ((ulong)bVar20 << (bVar17 & 0x3f));
                      lVar1 = lVar14 + (ulong)(uVar7 & (uint)uVar16) * 4;
                      bVar20 = *(byte *)(lVar1 + 1);
                      uVar27 = *(ushort *)(lVar1 + 2);
                    } while (uVar19 < bVar20);
                  }
                  uVar23 = (uint)bVar20;
                  iVar5 = (int)uVar24;
                  if (0xf < uVar27) {
                    if (uVar27 == 0x10) {
                      for (; uVar19 < uVar23 + 2; uVar19 = uVar19 + 8) {
                        uVar30 = uVar16;
                        if (uVar22 == 0) goto LAB_00101452;
                        bVar17 = *__src;
                        __src = __src + 1;
                        uVar22 = uVar22 - 1;
                        uVar16 = uVar16 + ((ulong)bVar17 << ((byte)uVar19 & 0x3f));
                      }
                      uVar19 = uVar19 - uVar23;
                      uVar30 = uVar16 >> (bVar20 & 0x3f);
                      if (iVar5 != 0) {
                        uVar16 = uVar30 >> 2;
                        uVar19 = uVar19 - 2;
                        uVar28 = *(undefined2 *)(lVar4 + 0x98 + (ulong)(iVar5 - 1) * 2);
                        iVar18 = ((uint)uVar30 & 3) + 3;
                        goto LAB_00100e2d;
                      }
                    }
                    else {
                      if (uVar27 == 0x11) {
                        for (; uVar19 < uVar23 + 3; uVar19 = uVar19 + 8) {
                          uVar30 = uVar16;
                          if (uVar22 == 0) goto LAB_00101452;
                          bVar17 = *__src;
                          __src = __src + 1;
                          uVar22 = uVar22 - 1;
                          uVar16 = uVar16 + ((ulong)bVar17 << ((byte)uVar19 & 0x3f));
                        }
                        uVar28 = 0;
                        uVar30 = uVar16 >> (bVar20 & 0x3f);
                        uVar19 = (uVar19 - uVar23) - 3;
                        uVar16 = uVar30 >> 3;
                        iVar18 = ((uint)uVar30 & 7) + 3;
                      }
                      else {
                        for (; uVar19 < uVar23 + 7; uVar19 = uVar19 + 8) {
                          uVar30 = uVar16;
                          if (uVar22 == 0) goto LAB_00101452;
                          bVar17 = *__src;
                          __src = __src + 1;
                          uVar22 = uVar22 - 1;
                          uVar16 = uVar16 + ((ulong)bVar17 << ((byte)uVar19 & 0x3f));
                        }
                        uVar28 = 0;
                        uVar30 = uVar16 >> (bVar20 & 0x3f);
                        uVar19 = (uVar19 - uVar23) - 7;
                        uVar16 = uVar30 >> 7;
                        iVar18 = ((uint)uVar30 & 0x7f) + 0xb;
                      }
LAB_00100e2d:
                      uVar30 = uVar16;
                      if ((uint)(iVar5 + iVar18) <= uVar8) {
                        uVar9 = *(uint *)(lVar4 + 0x8c);
                        uVar23 = uVar9 + iVar18;
                        do {
                          uVar30 = (ulong)uVar9;
                          uVar9 = uVar9 + 1;
                          *(undefined2 *)(lVar4 + 0x98 + uVar30 * 2) = uVar28;
                        } while (uVar9 != uVar23);
                        *(uint *)(lVar4 + 0x8c) = uVar23;
                        goto LAB_0010181c;
                      }
                    }
                    param_1[6] = (long)"invalid bit length repeat";
                    *(undefined4 *)(lVar4 + 8) = 0x3f51;
                    goto LAB_001009a7;
                  }
                  uVar19 = uVar19 - uVar23;
                  uVar23 = iVar5 + 1;
                  uVar16 = uVar16 >> (bVar20 & 0x3f);
                  *(uint *)(lVar4 + 0x8c) = uVar23;
                  *(ushort *)(lVar4 + 0x98 + uVar24 * 2) = uVar27;
LAB_0010181c:
                  uVar24 = (ulong)uVar23;
                } while (uVar23 < uVar8);
LAB_00101829:
                uVar30 = uVar16;
                if (*(int *)(lVar4 + 8) == 0x3f51) goto switchD_001005e4_caseD_3f51;
              }
              if (*(short *)(lVar4 + 0x298) == 0) {
                param_1[6] = (long)"invalid code -- missing end-of-block";
                *(undefined4 *)(lVar4 + 8) = 0x3f51;
              }
              else {
                *(undefined4 *)(lVar4 + 0x78) = 9;
                *(long *)(lVar4 + 0x68) = lVar4 + 0x558;
                *(long *)(lVar4 + 0x90) = lVar4 + 0x558;
                iVar6 = inflate_table(1,lVar4 + 0x98,iVar6,lVar4 + 0x90,lVar4 + 0x78);
                if (iVar6 == 0) {
                  *(undefined4 *)(lVar4 + 0x7c) = 6;
                  *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x90);
                  iVar6 = inflate_table(2,lVar4 + 0x98 + (ulong)*(uint *)(lVar4 + 0x84) * 2,
                                        *(undefined4 *)(lVar4 + 0x88),lVar4 + 0x90,lVar4 + 0x7c);
                  if (iVar6 == 0) {
                    *(undefined4 *)(lVar4 + 8) = 0x3f47;
                    if (param_2 != 6) goto switchD_001005e4_caseD_3f47;
                    goto LAB_00101f3f;
                  }
                  param_1[6] = (long)"invalid distances set";
                  *(undefined4 *)(lVar4 + 8) = 0x3f51;
                }
                else {
                  param_1[6] = (long)"invalid literal/lengths set";
                  *(undefined4 *)(lVar4 + 8) = 0x3f51;
                }
              }
            }
            else {
              param_1[6] = (long)"invalid code lengths set";
              *(undefined4 *)(lVar4 + 8) = 0x3f51;
            }
          }
          else {
            param_1[6] = (long)"too many length or distance symbols";
            *(undefined4 *)(lVar4 + 8) = 0x3f51;
          }
          goto LAB_001009a7;
        }
        if (uVar8 == 3) {
          uVar30 = uVar30 >> 3;
          uVar19 = uVar19 - 3;
          param_1[6] = (long)"invalid block type";
          *(undefined4 *)(lVar4 + 8) = 0x3f51;
          goto LAB_001009a7;
        }
        if (uVar8 == 1) {
          *(undefined4 *)(lVar4 + 8) = 0x3f47;
          *(undefined8 *)(lVar4 + 0x78) = uVar15;
          *(undefined1 **)(lVar4 + 0x68) = lenfix_1;
          *(undefined1 **)(lVar4 + 0x70) = distfix_0;
          if (param_2 != 6) {
            uVar30 = uVar30 >> 3;
            uVar19 = uVar19 - 3;
switchD_001005e4_caseD_3f47:
            do {
              *(undefined4 *)(lVar4 + 8) = 0x3f48;
switchD_001005e4_caseD_3f48:
              if ((5 < uVar22) && (0x101 < local_90)) {
                param_1[3] = (long)__dest;
                *param_1 = (long)__src;
                *(uint *)(param_1 + 1) = uVar22;
                *(uint *)(param_1 + 4) = local_90;
                *(ulong *)(lVar4 + 0x50) = uVar30;
                *(uint *)(lVar4 + 0x58) = uVar19;
                inflate_fast(param_1,uVar3);
                __dest = (undefined1 *)param_1[3];
                local_90 = *(uint *)(param_1 + 4);
                __src = (byte *)*param_1;
                uVar22 = *(uint *)(param_1 + 1);
                iVar6 = *(int *)(lVar4 + 8);
                uVar30 = *(ulong *)(lVar4 + 0x50);
                uVar19 = *(uint *)(lVar4 + 0x58);
                if (iVar6 != 0x3f3f) goto LAB_001005c8;
                *(undefined4 *)(lVar4 + 0x1bec) = 0xffffffff;
                goto switchD_001005e4_caseD_3f3f;
              }
              lVar14 = *(long *)(lVar4 + 0x68);
              *(undefined4 *)(lVar4 + 0x1bec) = 0;
              uVar23 = ~(-1 << ((byte)*(undefined4 *)(lVar4 + 0x78) & 0x1f));
              pbVar25 = (byte *)(lVar14 + (ulong)(uVar23 & (uint)uVar30) * 4);
              bVar20 = pbVar25[1];
              bVar17 = *pbVar25;
              uVar27 = *(ushort *)(pbVar25 + 2);
              uVar7 = (uint)bVar20;
              uVar8 = uVar19;
              if (uVar19 < uVar7) {
                do {
                  if (uVar22 == 0) goto LAB_00101452;
                  bVar20 = *__src;
                  __src = __src + 1;
                  uVar22 = uVar22 - 1;
                  uVar8 = uVar19 + 8;
                  uVar30 = uVar30 + ((ulong)bVar20 << ((byte)uVar19 & 0x3f));
                  pbVar25 = (byte *)(lVar14 + (ulong)(uVar23 & (uint)uVar30) * 4);
                  bVar20 = pbVar25[1];
                  bVar17 = *pbVar25;
                  uVar27 = *(ushort *)(pbVar25 + 2);
                  uVar7 = (uint)bVar20;
                  uVar19 = uVar8;
                } while (uVar8 < uVar7);
              }
              uVar23 = (uint)uVar27;
              if (bVar17 == 0) {
                *(uint *)(lVar4 + 0x1bec) = uVar7;
                uVar30 = uVar30 >> (bVar20 & 0x3f);
                uVar19 = uVar8 - uVar7;
                *(uint *)(lVar4 + 0x5c) = uVar23;
LAB_0010140e:
                *(undefined4 *)(lVar4 + 8) = 0x3f4d;
                puVar29 = __dest;
switchD_001005e4_caseD_3f4d:
                __dest = puVar29;
                if (local_90 == 0) goto LAB_00101e3d;
                local_90 = local_90 - 1;
                __dest = puVar29 + 1;
                *puVar29 = (char)*(undefined4 *)(lVar4 + 0x5c);
                *(undefined4 *)(lVar4 + 8) = 0x3f48;
                goto switchD_001005e4_caseD_3f48;
              }
              bVar20 = (byte)uVar7;
              if (bVar17 < 0x10) {
                uVar10 = ~(-1 << (bVar17 + bVar20 & 0x1f));
                pbVar25 = (byte *)(lVar14 + (ulong)(((uVar10 & (uint)uVar30) >> (bVar20 & 0x1f)) +
                                                   uVar23) * 4);
                uVar11 = (uint)pbVar25[1];
                bVar17 = *pbVar25;
                uVar27 = *(ushort *)(pbVar25 + 2);
                uVar9 = uVar11 + uVar7;
                uVar19 = uVar8;
                if (uVar8 < uVar9) {
                  do {
                    if (uVar22 == 0) goto LAB_00101452;
                    bVar17 = *__src;
                    uVar8 = uVar19 + 8;
                    __src = __src + 1;
                    uVar22 = uVar22 - 1;
                    uVar30 = uVar30 + ((ulong)bVar17 << ((byte)uVar19 & 0x3f));
                    pbVar25 = (byte *)(lVar14 + (ulong)(((uVar10 & (uint)uVar30) >> (bVar20 & 0x1f))
                                                       + uVar23) * 4);
                    bVar17 = *pbVar25;
                    uVar27 = *(ushort *)(pbVar25 + 2);
                    uVar11 = (uint)pbVar25[1];
                    uVar9 = uVar11 + uVar7;
                    uVar19 = uVar8;
                  } while (uVar8 < uVar9);
                }
                *(uint *)(lVar4 + 0x1bec) = uVar9;
                *(uint *)(lVar4 + 0x5c) = (uint)uVar27;
                uVar19 = (uVar8 - uVar7) - uVar11;
                uVar30 = (uVar30 >> (bVar20 & 0x3f)) >> ((byte)uVar11 & 0x3f);
                if (bVar17 != 0) goto LAB_0010160b;
                goto LAB_0010140e;
              }
              *(uint *)(lVar4 + 0x1bec) = uVar7;
              uVar19 = uVar8 - uVar7;
              *(uint *)(lVar4 + 0x5c) = uVar23;
              uVar30 = uVar30 >> (bVar20 & 0x3f);
LAB_0010160b:
              if ((bVar17 & 0x20) != 0) goto code_r0x00101614;
              if ((bVar17 & 0x40) != 0) {
                param_1[6] = (long)"invalid literal/length code";
                *(undefined4 *)(lVar4 + 8) = 0x3f51;
                goto LAB_001009a7;
              }
              uVar8 = bVar17 & 0xf;
              *(undefined4 *)(lVar4 + 8) = 0x3f49;
              *(uint *)(lVar4 + 100) = uVar8;
LAB_00100ae4:
              if (uVar8 == 0) {
                iVar6 = *(int *)(lVar4 + 0x5c);
              }
              else {
                for (; uVar19 < uVar8; uVar19 = uVar19 + 8) {
                  if (uVar22 == 0) goto LAB_00101452;
                  bVar20 = *__src;
                  __src = __src + 1;
                  uVar22 = uVar22 - 1;
                  uVar30 = uVar30 + ((ulong)bVar20 << ((byte)uVar19 & 0x3f));
                }
                *(int *)(lVar4 + 0x1bec) = *(int *)(lVar4 + 0x1bec) + uVar8;
                uVar19 = uVar19 - uVar8;
                iVar6 = (~(-1 << ((byte)uVar8 & 0x1f)) & (uint)uVar30) + *(int *)(lVar4 + 0x5c);
                uVar30 = uVar30 >> ((byte)uVar8 & 0x3f);
                *(int *)(lVar4 + 0x5c) = iVar6;
              }
              *(int *)(lVar4 + 0x1bf0) = iVar6;
              *(undefined4 *)(lVar4 + 8) = 0x3f4a;
switchD_001005e4_caseD_3f4a:
              lVar14 = *(long *)(lVar4 + 0x70);
              uVar23 = ~(-1 << ((byte)*(undefined4 *)(lVar4 + 0x7c) & 0x1f));
              pbVar25 = (byte *)(lVar14 + (ulong)(uVar23 & (uint)uVar30) * 4);
              bVar20 = pbVar25[1];
              bVar17 = *pbVar25;
              uVar27 = *(ushort *)(pbVar25 + 2);
              uVar7 = (uint)bVar20;
              uVar8 = uVar19;
              if (uVar19 < uVar7) {
                do {
                  if (uVar22 == 0) goto LAB_00101452;
                  bVar20 = *__src;
                  __src = __src + 1;
                  uVar22 = uVar22 - 1;
                  uVar8 = uVar19 + 8;
                  uVar30 = uVar30 + ((ulong)bVar20 << ((byte)uVar19 & 0x3f));
                  pbVar25 = (byte *)(lVar14 + (ulong)(uVar23 & (uint)uVar30) * 4);
                  bVar20 = pbVar25[1];
                  bVar17 = *pbVar25;
                  uVar27 = *(ushort *)(pbVar25 + 2);
                  uVar7 = (uint)bVar20;
                  uVar19 = uVar8;
                } while (uVar8 < uVar7);
              }
              uVar9 = (uint)uVar27;
              uVar23 = (uint)bVar20;
              if (bVar17 < 0x10) {
                uVar10 = ~(-1 << (bVar17 + bVar20 & 0x1f));
                pbVar25 = (byte *)(lVar14 + (ulong)(((uVar10 & (uint)uVar30) >> (bVar20 & 0x1f)) +
                                                   uVar9) * 4);
                bVar17 = *pbVar25;
                uVar27 = *(ushort *)(pbVar25 + 2);
                uVar11 = (uint)pbVar25[1];
                uVar19 = uVar8;
                if (uVar8 < uVar11 + uVar23) {
                  do {
                    if (uVar22 == 0) goto LAB_00101452;
                    bVar17 = *__src;
                    uVar8 = uVar19 + 8;
                    __src = __src + 1;
                    uVar22 = uVar22 - 1;
                    uVar30 = uVar30 + ((ulong)bVar17 << ((byte)uVar19 & 0x3f));
                    pbVar25 = (byte *)(lVar14 + (ulong)(((uVar10 & (uint)uVar30) >> (bVar20 & 0x1f))
                                                       + uVar9) * 4);
                    bVar17 = *pbVar25;
                    uVar27 = *(ushort *)(pbVar25 + 2);
                    uVar11 = (uint)pbVar25[1];
                    uVar19 = uVar8;
                  } while (uVar8 < uVar11 + uVar23);
                }
                uVar9 = (uint)uVar27;
                uVar8 = uVar8 - uVar7;
                iVar6 = uVar23 + *(int *)(lVar4 + 0x1bec);
                uVar30 = uVar30 >> (bVar20 & 0x3f);
              }
              else {
                iVar6 = *(int *)(lVar4 + 0x1bec);
                uVar11 = uVar23;
              }
              uVar19 = uVar8 - uVar11;
              *(uint *)(lVar4 + 0x1bec) = uVar11 + iVar6;
              uVar30 = uVar30 >> ((byte)uVar11 & 0x3f);
              if ((bVar17 & 0x40) != 0) {
                param_1[6] = (long)"invalid distance code";
                *(undefined4 *)(lVar4 + 8) = 0x3f51;
                goto LAB_001009a7;
              }
              uVar8 = bVar17 & 0xf;
              *(uint *)(lVar4 + 0x60) = uVar9;
              *(uint *)(lVar4 + 100) = uVar8;
              *(undefined4 *)(lVar4 + 8) = 0x3f4b;
LAB_0010093c:
              if (uVar8 != 0) {
                for (; uVar19 < uVar8; uVar19 = uVar19 + 8) {
                  if (uVar22 == 0) goto LAB_00101452;
                  bVar20 = *__src;
                  __src = __src + 1;
                  uVar22 = uVar22 - 1;
                  uVar30 = uVar30 + ((ulong)bVar20 << ((byte)uVar19 & 0x3f));
                }
                *(int *)(lVar4 + 0x1bec) = *(int *)(lVar4 + 0x1bec) + uVar8;
                uVar19 = uVar19 - uVar8;
                uVar7 = (uint)uVar30;
                uVar30 = uVar30 >> ((byte)uVar8 & 0x3f);
                *(int *)(lVar4 + 0x60) =
                     *(int *)(lVar4 + 0x60) + (~(-1 << ((byte)uVar8 & 0x1f)) & uVar7);
              }
              *(undefined4 *)(lVar4 + 8) = 0x3f4c;
switchD_001005e4_caseD_3f4c:
              if (local_90 == 0) {
LAB_00101e3d:
                uVar16 = (ulong)uVar3;
                goto LAB_001009c0;
              }
              uVar8 = *(uint *)(lVar4 + 0x60);
              if (uVar3 - local_90 < uVar8) {
                uVar7 = (local_90 + uVar8) - uVar3;
                if ((*(uint *)(lVar4 + 0x40) < uVar7) && (*(int *)(lVar4 + 0x1be8) != 0)) {
                  param_1[6] = (long)"invalid distance too far back";
                  *(undefined4 *)(lVar4 + 8) = 0x3f51;
                  goto LAB_001009a7;
                }
                uVar23 = *(uint *)(lVar4 + 0x44);
                if (uVar23 < uVar7) {
                  uVar7 = uVar7 - uVar23;
                  uVar23 = uVar23 + *(int *)(lVar4 + 0x3c);
                }
                lVar14 = *(long *)(lVar4 + 0x48) + (ulong)(uVar23 + (uVar3 - (local_90 + uVar8)));
                uVar8 = *(uint *)(lVar4 + 0x5c);
                if (uVar8 <= uVar7) {
                  uVar7 = uVar8;
                }
              }
              else {
                lVar14 = (long)__dest - (ulong)uVar8;
                uVar8 = *(uint *)(lVar4 + 0x5c);
                uVar7 = uVar8;
              }
              if (local_90 <= uVar7) {
                uVar7 = local_90;
              }
              local_90 = local_90 - uVar7;
              *(uint *)(lVar4 + 0x5c) = uVar8 - uVar7;
              uVar16 = 0;
              do {
                __dest[uVar16] = *(undefined1 *)(lVar14 + uVar16);
                bVar32 = uVar16 != uVar7 - 1;
                uVar16 = uVar16 + 1;
              } while (bVar32);
              __dest = __dest + (ulong)(uVar7 - 1) + 1;
              if (*(int *)(lVar4 + 0x5c) != 0) {
                iVar6 = *(int *)(lVar4 + 8);
                goto LAB_001005c8;
              }
            } while( true );
          }
          uVar30 = uVar30 >> 3;
          uVar19 = uVar19 - 3;
          iVar31 = 0;
          uVar16 = (ulong)(uVar3 - local_90);
          goto LAB_001009c0;
        }
        *(undefined4 *)(lVar4 + 8) = 0x3f41;
        uVar30 = uVar30 >> 3;
        uVar19 = uVar19 - 3;
switchD_001005e4_caseD_3f41:
        uVar8 = uVar19 & 0xfffffff8;
        uVar30 = uVar30 >> ((byte)uVar19 & 7);
        uVar19 = uVar8;
        if (uVar8 < 0x20) {
          do {
            if (uVar22 == 0) goto LAB_00101452;
            bVar20 = *__src;
            __src = __src + 1;
            uVar22 = uVar22 - 1;
            bVar17 = (byte)uVar19;
            uVar19 = uVar19 + 8;
            uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
          } while (uVar19 < 0x20);
          uVar19 = 0x20;
        }
        if ((uVar30 & 0xffff) != (uVar30 >> 0x10 ^ 0xffff)) {
          param_1[6] = (long)"invalid stored block lengths";
          *(undefined4 *)(lVar4 + 8) = 0x3f51;
          goto LAB_001009a7;
        }
        uVar8 = (uint)(ushort)uVar30;
        *(undefined4 *)(lVar4 + 8) = 0x3f42;
        *(uint *)(lVar4 + 0x5c) = uVar8;
        if (param_2 == 6) {
          uVar19 = 0;
          uVar30 = 0;
          uVar16 = (ulong)(uVar3 - local_90);
          goto LAB_001009c0;
        }
        uVar19 = 0;
        uVar30 = 0;
LAB_00100c24:
        *(undefined4 *)(lVar4 + 8) = 0x3f43;
LAB_00100c2c:
        if (uVar8 == 0) goto LAB_00101620;
        if (uVar22 <= uVar8) {
          uVar8 = uVar22;
        }
        if (local_90 < uVar8) {
          uVar8 = local_90;
        }
        if (uVar8 == 0) goto LAB_00101452;
        uVar16 = (ulong)uVar8;
        pvVar12 = memcpy(__dest,__src,uVar16);
        local_90 = local_90 - uVar8;
        iVar6 = *(int *)(lVar4 + 8);
        *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) - uVar8;
        uVar22 = uVar22 - uVar8;
        __src = __src + uVar16;
        __dest = (undefined1 *)((long)pvVar12 + uVar16);
        goto LAB_001005c8;
      case 0x3f35:
        goto joined_r0x001012cb;
      case 0x3f36:
        goto joined_r0x00100f43;
      case 0x3f37:
        goto joined_r0x00100fb3;
      case 0x3f38:
        uVar8 = *(uint *)(lVar4 + 0x18);
        if ((uVar8 & 0x400) != 0) goto joined_r0x001019d9;
        goto LAB_001010d8;
      case 0x3f39:
        uVar8 = *(uint *)(lVar4 + 0x18);
        uVar7 = uVar8 & 0x400;
        goto LAB_001010f3;
      case 0x3f3a:
        uVar8 = *(uint *)(lVar4 + 0x18);
        goto LAB_001011c4;
      case 0x3f3b:
        uVar8 = *(uint *)(lVar4 + 0x18);
        goto LAB_001011f2;
      case 0x3f3c:
        uVar8 = *(uint *)(lVar4 + 0x18);
        goto joined_r0x00100bdb;
      case 0x3f3d:
        goto joined_r0x001005f3;
      case 0x3f3e:
        goto switchD_001005e4_caseD_3f3e;
      case 0x3f3f:
        goto switchD_001005e4_caseD_3f3f;
      case 0x3f41:
        goto switchD_001005e4_caseD_3f41;
      case 0x3f42:
        uVar8 = *(uint *)(lVar4 + 0x5c);
        goto LAB_00100c24;
      case 0x3f43:
        uVar8 = *(uint *)(lVar4 + 0x5c);
        goto LAB_00100c2c;
      case 0x3f44:
        goto switchD_001005e4_caseD_3f44;
      case 0x3f45:
        uVar8 = *(uint *)(lVar4 + 0x80);
        uVar16 = (ulong)*(uint *)(lVar4 + 0x8c);
        if (uVar8 <= *(uint *)(lVar4 + 0x8c)) goto LAB_00101c53;
        goto LAB_00100ca6;
      case 0x3f46:
        iVar6 = *(int *)(lVar4 + 0x84);
        uVar24 = (ulong)*(uint *)(lVar4 + 0x8c);
        uVar8 = *(int *)(lVar4 + 0x88) + iVar6;
        uVar16 = uVar30;
        if (uVar8 <= *(uint *)(lVar4 + 0x8c)) goto LAB_00101829;
        goto LAB_00100d41;
      case 0x3f47:
        goto switchD_001005e4_caseD_3f47;
      case 0x3f48:
        goto switchD_001005e4_caseD_3f48;
      case 0x3f49:
        uVar8 = *(uint *)(lVar4 + 100);
        goto LAB_00100ae4;
      case 0x3f4a:
        goto switchD_001005e4_caseD_3f4a;
      case 0x3f4b:
        uVar8 = *(uint *)(lVar4 + 100);
        goto LAB_0010093c;
      case 0x3f4c:
        goto switchD_001005e4_caseD_3f4c;
      case 0x3f4d:
        goto switchD_001005e4_caseD_3f4d;
      case 0x3f4e:
LAB_001006e3:
        uVar8 = *(uint *)(lVar4 + 0x10);
        if (uVar8 == 0) goto LAB_001017e0;
        if (0x1f < uVar19) goto LAB_00100724;
        if (uVar22 != 0) goto LAB_00100708;
        goto LAB_00101452;
      case 0x3f4f:
        uVar8 = *(uint *)(lVar4 + 0x10);
        goto LAB_00100e7c;
      case 0x3f50:
        iVar31 = 1;
        uVar16 = (ulong)(uVar3 - local_90);
        goto LAB_001009c0;
      case 0x3f51:
switchD_001005e4_caseD_3f51:
        goto LAB_001009a7;
      case 0x3f52:
        goto switchD_001005e4_caseD_3f52;
      }
    }
  }
  iVar31 = -2;
  goto LAB_00100ab5;
joined_r0x001019e7:
  if (0xf < uVar19) goto LAB_00101a1c;
  if (uVar22 == 0) goto LAB_00101452;
  bVar20 = *__src;
  __src = __src + 1;
  uVar22 = uVar22 - 1;
  bVar17 = (byte)uVar19;
  uVar19 = uVar19 + 8;
  uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
  goto joined_r0x001019e7;
LAB_00101a1c:
  if (((uVar8 & 2) == 0) || (uVar30 != 0x8b1f)) {
    if (*(long *)(lVar4 + 0x30) != 0) {
      *(undefined4 *)(*(long *)(lVar4 + 0x30) + 0x48) = 0xffffffff;
    }
    if ((uVar8 & 1) == 0) {
LAB_00101d98:
      param_1[6] = (long)"incorrect header check";
      *(undefined4 *)(lVar4 + 8) = 0x3f51;
    }
    else {
      uVar16 = (ulong)(((uint)uVar30 & 0xff) << 8) + (uVar30 >> 8);
      if (uVar16 != ((uVar16 - uVar16 / 0x1f >> 1) + uVar16 / 0x1f >> 4) * 0x1f) goto LAB_00101d98;
      if (((uint)uVar30 & 0xf) == 8) {
        uVar30 = uVar30 >> 4;
        uVar8 = ((uint)uVar30 & 0xf) + 8;
        if (*(uint *)(lVar4 + 0x38) == 0) {
          *(uint *)(lVar4 + 0x38) = uVar8;
          if (uVar8 < 0x10) {
LAB_001021d5:
            *(undefined4 *)(lVar4 + 0x18) = 0;
            *(int *)(lVar4 + 0x1c) = 1 << (sbyte)uVar8;
            lVar14 = adler32(0,0,0);
            uVar16 = uVar30 & 0x200;
            uVar30 = (ulong)((uint)uVar30 & 0x200);
            *(long *)(lVar4 + 0x20) = lVar14;
            param_1[0xc] = lVar14;
            if (uVar16 == 0) {
              *(undefined4 *)(lVar4 + 8) = 0x3f3f;
              uVar19 = 0;
              goto switchD_001005e4_caseD_3f3f;
            }
            *(undefined4 *)(lVar4 + 8) = 0x3f3d;
            uVar30 = 0;
            uVar19 = 0;
            do {
              if (uVar22 == 0) goto LAB_00101452;
              bVar20 = *__src;
              __src = __src + 1;
              uVar22 = uVar22 - 1;
              bVar17 = (byte)uVar19;
              uVar19 = uVar19 + 8;
              uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
joined_r0x001005f3:
            } while (uVar19 < 0x20);
            lVar14 = (ulong)((uint)(uVar30 << 8) & 0xff0000) + (uVar30 & 0xff) * 0x1000000 +
                     ((ulong)((uint)(uVar30 >> 8) & 0xff00) | uVar30 >> 0x18 & 0xff);
            uVar30 = 0;
            *(long *)(lVar4 + 0x20) = lVar14;
            param_1[0xc] = lVar14;
            uVar19 = 0;
            *(undefined4 *)(lVar4 + 8) = 0x3f3e;
switchD_001005e4_caseD_3f3e:
            if (*(int *)(lVar4 + 0x14) != 0) {
              lVar14 = adler32(0,0,0);
              goto LAB_00100693;
            }
            iVar31 = 2;
            param_1[3] = (long)__dest;
            *(uint *)(param_1 + 4) = local_90;
            *param_1 = (long)__src;
            *(uint *)(param_1 + 1) = uVar22;
            *(ulong *)(lVar4 + 0x50) = uVar30;
            *(uint *)(lVar4 + 0x58) = uVar19;
            goto LAB_00100ab5;
          }
        }
        else if ((uVar8 < 0x10) && (uVar8 <= *(uint *)(lVar4 + 0x38))) goto LAB_001021d5;
        uVar19 = uVar19 - 4;
        param_1[6] = (long)"invalid window size";
        *(undefined4 *)(lVar4 + 8) = 0x3f51;
      }
      else {
        param_1[6] = (long)"unknown compression method";
        *(undefined4 *)(lVar4 + 8) = 0x3f51;
      }
    }
  }
  else {
    if (*(int *)(lVar4 + 0x38) == 0) {
      *(undefined4 *)(lVar4 + 0x38) = 0xf;
    }
    uVar15 = crc32(0,0,0);
    uVar30 = 0;
    uVar19 = 0;
    *(undefined8 *)(lVar4 + 0x20) = uVar15;
    local_44 = CONCAT22(local_44._2_2_,0x8b1f);
    uVar15 = crc32(uVar15,&local_44,2);
    *(undefined4 *)(lVar4 + 8) = 0x3f35;
    *(undefined8 *)(lVar4 + 0x20) = uVar15;
    do {
      if (uVar22 == 0) goto LAB_00101452;
      bVar20 = *__src;
      __src = __src + 1;
      uVar22 = uVar22 - 1;
      bVar17 = (byte)uVar19;
      uVar19 = uVar19 + 8;
      uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
joined_r0x001012cb:
    } while (uVar19 < 0x10);
    *(int *)(lVar4 + 0x18) = (int)uVar30;
    if ((char)uVar30 == '\b') {
      if ((uVar30 & 0xe000) != 0) {
        pcVar13 = "unknown header flags set";
        goto LAB_0010131f;
      }
      if (*(uint **)(lVar4 + 0x30) != (uint *)0x0) {
        **(uint **)(lVar4 + 0x30) = (uint)(uVar30 >> 8) & 1;
      }
      if (((uVar30 & 0x200) != 0) && ((*(byte *)(lVar4 + 0x10) & 4) != 0)) {
        local_44._2_2_ = (undefined2)((uint)local_44 >> 0x10);
        local_44 = CONCAT22(local_44._2_2_,(short)uVar30);
        uVar15 = crc32(*(undefined8 *)(lVar4 + 0x20),&local_44,2);
        *(undefined8 *)(lVar4 + 0x20) = uVar15;
      }
      *(undefined4 *)(lVar4 + 8) = 0x3f36;
      uVar30 = 0;
      uVar19 = 0;
      do {
        if (uVar22 == 0) goto LAB_00101452;
        bVar20 = *__src;
        __src = __src + 1;
        uVar22 = uVar22 - 1;
        bVar17 = (byte)uVar19;
        uVar19 = uVar19 + 8;
        uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
joined_r0x00100f43:
      } while (uVar19 < 0x20);
      if (*(long *)(lVar4 + 0x30) != 0) {
        *(ulong *)(*(long *)(lVar4 + 0x30) + 8) = uVar30;
      }
      if (((*(byte *)(lVar4 + 0x19) & 2) != 0) && ((*(byte *)(lVar4 + 0x10) & 4) != 0)) {
        local_44 = (undefined4)uVar30;
        uVar15 = crc32(*(undefined8 *)(lVar4 + 0x20),&local_44,4);
        *(undefined8 *)(lVar4 + 0x20) = uVar15;
      }
      *(undefined4 *)(lVar4 + 8) = 0x3f37;
      uVar19 = 0;
      uVar30 = 0;
      do {
        if (uVar22 == 0) goto LAB_00101452;
        bVar20 = *__src;
        __src = __src + 1;
        uVar22 = uVar22 - 1;
        bVar17 = (byte)uVar19;
        uVar19 = uVar19 + 8;
        uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
joined_r0x00100fb3:
      } while (uVar19 < 0x10);
      lVar14 = *(long *)(lVar4 + 0x30);
      if (lVar14 != 0) {
        *(uint *)(lVar14 + 0x10) = (uint)uVar30 & 0xff;
        *(int *)(lVar14 + 0x14) = (int)(uVar30 >> 8);
      }
      uVar8 = *(uint *)(lVar4 + 0x18);
      if (((uVar8 & 0x200) != 0) && ((*(byte *)(lVar4 + 0x10) & 4) != 0)) {
        local_44._2_2_ = (undefined2)((uint)local_44 >> 0x10);
        local_44 = CONCAT22(local_44._2_2_,(short)uVar30);
        uVar15 = crc32(*(undefined8 *)(lVar4 + 0x20),&local_44,2);
        uVar8 = *(uint *)(lVar4 + 0x18);
        *(undefined8 *)(lVar4 + 0x20) = uVar15;
      }
      *(undefined4 *)(lVar4 + 8) = 0x3f38;
      uVar19 = 0;
      uVar30 = 0;
      if ((uVar8 & 0x400) == 0) {
LAB_001010d8:
        if (*(long *)(lVar4 + 0x30) != 0) {
          *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x18) = 0;
        }
        uVar7 = 0;
      }
      else {
        do {
          if (uVar22 == 0) goto LAB_00101452;
          bVar20 = *__src;
          __src = __src + 1;
          uVar22 = uVar22 - 1;
          bVar17 = (byte)uVar19;
          uVar19 = uVar19 + 8;
          uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
joined_r0x001019d9:
        } while (uVar19 < 0x10);
        *(int *)(lVar4 + 0x5c) = (int)uVar30;
        if (*(long *)(lVar4 + 0x30) != 0) {
          *(int *)(*(long *)(lVar4 + 0x30) + 0x20) = (int)uVar30;
        }
        if (((uVar8 & 0x200) == 0) || ((*(byte *)(lVar4 + 0x10) & 4) == 0)) {
          uVar19 = 0;
          uVar30 = 0;
          uVar7 = uVar8 & 0x400;
        }
        else {
          uVar19 = 0;
          local_44._2_2_ = (undefined2)((uint)local_44 >> 0x10);
          local_44 = CONCAT22(local_44._2_2_,(short)uVar30);
          uVar30 = 0;
          uVar15 = crc32(*(undefined8 *)(lVar4 + 0x20),&local_44,2);
          uVar8 = *(uint *)(lVar4 + 0x18);
          *(undefined8 *)(lVar4 + 0x20) = uVar15;
          uVar7 = uVar8 & 0x400;
        }
      }
      *(undefined4 *)(lVar4 + 8) = 0x3f39;
LAB_001010f3:
      if (uVar7 == 0) {
LAB_001011ae:
        *(undefined4 *)(lVar4 + 0x5c) = 0;
        *(undefined4 *)(lVar4 + 8) = 0x3f3a;
LAB_001011c4:
        if ((uVar8 & 0x800) == 0) {
          if (*(long *)(lVar4 + 0x30) != 0) {
            *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x28) = 0;
          }
LAB_001011e2:
          *(undefined4 *)(lVar4 + 0x5c) = 0;
          *(undefined4 *)(lVar4 + 8) = 0x3f3b;
LAB_001011f2:
          if ((uVar8 & 0x1000) == 0) {
            if (*(long *)(lVar4 + 0x30) != 0) {
              *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x38) = 0;
            }
LAB_00101210:
            *(undefined4 *)(lVar4 + 8) = 0x3f3c;
joined_r0x00100bdb:
            if ((uVar8 & 0x200) != 0) {
              for (; uVar19 < 0x10; uVar19 = uVar19 + 8) {
                if (uVar22 == 0) goto LAB_00101452;
                bVar20 = *__src;
                __src = __src + 1;
                uVar22 = uVar22 - 1;
                uVar30 = uVar30 + ((ulong)bVar20 << ((byte)uVar19 & 0x3f));
              }
              if (((*(byte *)(lVar4 + 0x10) & 4) != 0) && (uVar30 != *(ushort *)(lVar4 + 0x20))) {
                param_1[6] = (long)"header crc mismatch";
                *(undefined4 *)(lVar4 + 8) = 0x3f51;
                goto LAB_001009a7;
              }
              uVar19 = 0;
              uVar30 = 0;
            }
            lVar14 = *(long *)(lVar4 + 0x30);
            if (lVar14 != 0) {
              *(undefined4 *)(lVar14 + 0x48) = 1;
              *(uint *)(lVar14 + 0x44) = (int)uVar8 >> 9 & 1;
            }
            lVar14 = crc32(0,0,0);
LAB_00100693:
            *(long *)(lVar4 + 0x20) = lVar14;
            param_1[0xc] = lVar14;
            *(undefined4 *)(lVar4 + 8) = 0x3f3f;
            goto switchD_001005e4_caseD_3f3f;
          }
          if (uVar22 != 0) {
            uVar8 = 0;
            pbVar25 = __src;
            do {
              lVar14 = *(long *)(lVar4 + 0x30);
              bVar20 = *pbVar25;
              uVar8 = uVar8 + 1;
              if ((lVar14 != 0) && (lVar1 = *(long *)(lVar14 + 0x38), lVar1 != 0)) {
                uVar7 = *(uint *)(lVar4 + 0x5c);
                if (uVar7 < *(uint *)(lVar14 + 0x40)) {
                  *(uint *)(lVar4 + 0x5c) = uVar7 + 1;
                  *(byte *)(lVar1 + (ulong)uVar7) = bVar20;
                }
              }
              pbVar25 = pbVar25 + 1;
            } while ((bVar20 != 0) && (uVar8 < uVar22));
            if (((*(byte *)(lVar4 + 0x19) & 2) != 0) && ((*(byte *)(lVar4 + 0x10) & 4) != 0)) {
              uVar15 = crc32(*(undefined8 *)(lVar4 + 0x20),__src);
              *(undefined8 *)(lVar4 + 0x20) = uVar15;
            }
            uVar22 = uVar22 - uVar8;
            __src = __src + uVar8;
            if (bVar20 == 0) {
              uVar8 = *(uint *)(lVar4 + 0x18);
              goto LAB_00101210;
            }
          }
        }
        else if (uVar22 != 0) {
          uVar8 = 0;
          pbVar25 = __src;
          do {
            lVar14 = *(long *)(lVar4 + 0x30);
            bVar20 = *pbVar25;
            uVar8 = uVar8 + 1;
            if ((lVar14 != 0) && (lVar1 = *(long *)(lVar14 + 0x28), lVar1 != 0)) {
              uVar7 = *(uint *)(lVar4 + 0x5c);
              if (uVar7 < *(uint *)(lVar14 + 0x30)) {
                *(uint *)(lVar4 + 0x5c) = uVar7 + 1;
                *(byte *)(lVar1 + (ulong)uVar7) = bVar20;
              }
            }
            pbVar25 = pbVar25 + 1;
          } while ((bVar20 != 0) && (uVar8 < uVar22));
          if (((*(byte *)(lVar4 + 0x19) & 2) != 0) && ((*(byte *)(lVar4 + 0x10) & 4) != 0)) {
            uVar15 = crc32(*(undefined8 *)(lVar4 + 0x20),__src);
            *(undefined8 *)(lVar4 + 0x20) = uVar15;
          }
          uVar22 = uVar22 - uVar8;
          __src = __src + uVar8;
          if (bVar20 == 0) {
            uVar8 = *(uint *)(lVar4 + 0x18);
            goto LAB_001011e2;
          }
        }
      }
      else {
        uVar7 = *(uint *)(lVar4 + 0x5c);
        uVar23 = uVar7;
        if (uVar22 <= uVar7) {
          uVar23 = uVar22;
        }
        if (uVar23 != 0) {
          lVar14 = *(long *)(lVar4 + 0x30);
          if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
            uVar9 = *(uint *)(lVar14 + 0x24);
            uVar11 = *(int *)(lVar14 + 0x20) - uVar7;
            if (uVar11 < uVar9) {
              local_68 = (ulong)uVar23;
              if (uVar9 < uVar23 + uVar11) {
                local_68 = (size_t)((uVar9 + uVar7) - *(int *)(lVar14 + 0x20));
              }
              memcpy((void *)(*(long *)(lVar14 + 0x18) + (ulong)uVar11),__src,local_68);
              uVar8 = *(uint *)(lVar4 + 0x18);
            }
          }
          if (((uVar8 & 0x200) != 0) && ((*(byte *)(lVar4 + 0x10) & 4) != 0)) {
            uVar15 = crc32(*(undefined8 *)(lVar4 + 0x20),__src,uVar23);
            *(undefined8 *)(lVar4 + 0x20) = uVar15;
          }
          uVar22 = uVar22 - uVar23;
          __src = __src + uVar23;
          uVar7 = *(int *)(lVar4 + 0x5c) - uVar23;
          *(uint *)(lVar4 + 0x5c) = uVar7;
        }
        if (uVar7 == 0) {
          uVar8 = *(uint *)(lVar4 + 0x18);
          goto LAB_001011ae;
        }
      }
LAB_00101452:
      uVar16 = (ulong)(uVar3 - local_90);
      goto LAB_001009c0;
    }
    pcVar13 = "unknown compression method";
LAB_0010131f:
    param_1[6] = (long)pcVar13;
    *(undefined4 *)(lVar4 + 8) = 0x3f51;
  }
LAB_001009a7:
  iVar31 = -3;
  uVar16 = (ulong)(uVar3 - local_90);
  goto LAB_001009c0;
LAB_00100724:
  uVar23 = uVar8 & 4;
  uVar7 = uVar3 - local_90;
  uVar16 = (ulong)uVar7;
  param_1[5] = param_1[5] + uVar16;
  *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + uVar16;
  uVar3 = local_90;
  if (uVar7 == 0) {
LAB_00101b4e:
    if (uVar23 != 0) {
      uVar16 = uVar30;
      if (*(int *)(lVar4 + 0x18) == 0) {
        uVar16 = (ulong)((uint)(uVar30 << 8) & 0xff0000) + (uVar30 & 0xff) * 0x1000000 +
                 (uVar30 >> 0x18 & 0xff | (ulong)((uint)(uVar30 >> 8) & 0xff00));
      }
      if (*(ulong *)(lVar4 + 0x20) != uVar16) {
        param_1[6] = (long)"incorrect data check";
        *(undefined4 *)(lVar4 + 8) = 0x3f51;
        goto LAB_001009a7;
      }
    }
  }
  else if (uVar23 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      lVar14 = adler32(*(undefined8 *)(lVar4 + 0x20),(long)__dest - uVar16,uVar7);
    }
    else {
      lVar14 = crc32();
    }
    *(long *)(lVar4 + 0x20) = lVar14;
    param_1[0xc] = lVar14;
    uVar8 = *(uint *)(lVar4 + 0x10);
    uVar23 = uVar8 & 4;
    goto LAB_00101b4e;
  }
  *(undefined4 *)(lVar4 + 8) = 0x3f4f;
  uVar19 = 0;
  uVar30 = 0;
LAB_00100e7c:
  if ((uVar8 != 0) && (*(int *)(lVar4 + 0x18) != 0)) {
    if (uVar19 < 0x20) {
      if (uVar22 == 0) goto LAB_00101452;
      do {
        bVar20 = *__src;
        __src = __src + 1;
        uVar22 = uVar22 - 1;
        bVar17 = (byte)uVar19;
        uVar19 = uVar19 + 8;
        uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
        if (0x1f < uVar19) goto LAB_00100ec4;
      } while (uVar22 != 0);
      goto LAB_001016d0;
    }
LAB_00100ec4:
    if (((uVar8 & 4) != 0) && (*(uint *)(lVar4 + 0x28) != uVar30)) {
      param_1[6] = (long)"incorrect length check";
      *(undefined4 *)(lVar4 + 8) = 0x3f51;
      goto LAB_001009a7;
    }
    uVar19 = 0;
    uVar30 = 0;
  }
LAB_001017e0:
  *(undefined4 *)(lVar4 + 8) = 0x3f50;
  iVar31 = 1;
  uVar16 = (ulong)(uVar3 - local_90);
  goto LAB_001009c0;
code_r0x00101614:
  *(undefined4 *)(lVar4 + 0x1bec) = 0xffffffff;
LAB_00101620:
  *(undefined4 *)(lVar4 + 8) = 0x3f3f;
switchD_001005e4_caseD_3f3f:
  if (param_2 - 5U < 2) goto LAB_00101452;
  goto switchD_001005e4_caseD_3f40;
  while (uVar22 != 0) {
LAB_00100708:
    bVar20 = *__src;
    __src = __src + 1;
    uVar22 = uVar22 - 1;
    bVar17 = (byte)uVar19;
    uVar19 = uVar19 + 8;
    uVar30 = uVar30 + ((ulong)bVar20 << (bVar17 & 0x3f));
    if (0x1f < uVar19) goto LAB_00100724;
  }
LAB_001016d0:
  uVar16 = (ulong)(uVar3 - local_90);
LAB_001009c0:
  iVar6 = *(int *)(lVar4 + 0x3c);
  param_1[3] = (long)__dest;
  *(uint *)(param_1 + 4) = local_90;
  *param_1 = (long)__src;
  *(uint *)(param_1 + 1) = uVar22;
  *(ulong *)(lVar4 + 0x50) = uVar30;
  *(uint *)(lVar4 + 0x58) = uVar19;
  if ((iVar6 != 0) ||
     (((uVar3 != local_90 && (*(uint *)(lVar4 + 8) < 0x3f51)) &&
      ((param_2 != 4 || (*(uint *)(lVar4 + 8) < 0x3f4e)))))) {
    iVar6 = updatewindow(param_1,__dest);
    if (iVar6 != 0) {
      *(undefined4 *)(lVar4 + 8) = 0x3f52;
switchD_001005e4_caseD_3f52:
      iVar31 = -4;
      goto LAB_00100ab5;
    }
    uVar22 = *(uint *)(param_1 + 1);
    uVar16 = (ulong)(uVar3 - (int)param_1[4]);
  }
  param_1[2] = param_1[2] + (ulong)(uVar2 - uVar22);
  param_1[5] = param_1[5] + uVar16;
  *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + uVar16;
  if (((*(byte *)(lVar4 + 0x10) & 4) != 0) && ((int)uVar16 != 0)) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      lVar14 = adler32(*(undefined8 *)(lVar4 + 0x20),param_1[3] - uVar16);
    }
    else {
      lVar14 = crc32();
    }
    *(long *)(lVar4 + 0x20) = lVar14;
    param_1[0xc] = lVar14;
  }
  iVar6 = *(int *)(lVar4 + 8);
  if (iVar6 == 0x3f3f) {
    iVar6 = 0x80;
  }
  else {
    iVar6 = (uint)(iVar6 == 0x3f47 || iVar6 == 0x3f42) * 0x100;
  }
  *(uint *)(param_1 + 0xb) =
       (uint)(*(int *)(lVar4 + 0xc) != 0) * 0x40 + *(int *)(lVar4 + 0x58) + iVar6;
  if (((uVar2 - uVar22 == 0 && (int)uVar16 == 0) || (param_2 == 4)) && (iVar31 == 0)) {
    iVar31 = -5;
  }
LAB_00100ab5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar31;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 inflateEnd(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  iVar1 = inflateStateCheck();
  if (iVar1 == 0) {
    lVar3 = *(long *)(lVar4 + 0x38);
    uVar2 = 0;
    if (*(long *)(lVar3 + 0x48) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(lVar4 + 0x50),*(long *)(lVar3 + 0x48));
      lVar3 = *(long *)(param_1 + 0x38);
    }
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar3);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



undefined8 inflateGetDictionary(long param_1,void *param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = inflateStateCheck();
  if (iVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    uVar3 = 0;
    if ((*(int *)(lVar1 + 0x40) != 0) && (param_2 != (void *)0x0)) {
      memcpy(param_2,(void *)((ulong)*(uint *)(lVar1 + 0x44) + *(long *)(lVar1 + 0x48)),
             (ulong)(*(int *)(lVar1 + 0x40) - *(uint *)(lVar1 + 0x44)));
      memcpy((void *)((long)param_2 +
                     ((ulong)*(uint *)(lVar1 + 0x40) - (ulong)*(uint *)(lVar1 + 0x44))),
             *(void **)(lVar1 + 0x48),(ulong)*(uint *)(lVar1 + 0x44));
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar1 + 0x40);
    }
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}



undefined8 inflateSetDictionary(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  param_3 = param_3 & 0xffffffff;
  lVar4 = param_1;
  iVar1 = inflateStateCheck();
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  lVar4 = *(long *)(lVar4 + 0x38);
  if (*(int *)(lVar4 + 0x10) == 0) {
    if (*(int *)(lVar4 + 8) != 0x3f3e) goto LAB_00102406;
  }
  else if (*(int *)(lVar4 + 8) != 0x3f3e) {
    return 0xfffffffe;
  }
  uVar2 = adler32(0,0,0);
  lVar3 = adler32(uVar2,param_2,param_3);
  if (*(long *)(lVar4 + 0x20) != lVar3) {
    return 0xfffffffd;
  }
LAB_00102406:
  uVar2 = updatewindow(param_1,param_3 + param_2,param_3);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(lVar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(lVar4 + 8) = 0x3f52;
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}



undefined8 inflateGetHeader(long param_1,long param_2)

{
  long *plVar1;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (((plVar1 != (long *)0x0) && (param_1 == *plVar1)) &&
     (((int)plVar1[1] - 0x3f34U < 0x20 && ((*(byte *)(plVar1 + 2) & 2) != 0)))) {
    plVar1[6] = param_2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    return 0;
  }
  return 0xfffffffe;
}



ulong inflateSync(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  char local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = inflateStateCheck();
  if (iVar4 != 0) {
    uVar14 = 0xfffffffe;
    goto LAB_00102740;
  }
  uVar11 = *(uint *)(param_1 + 1);
  lVar13 = param_1[7];
  uVar14 = 0;
  if (uVar11 == 0) {
    uVar11 = *(uint *)(lVar13 + 0x58);
    if (uVar11 < 8) {
      uVar14 = 0xfffffffb;
      goto LAB_00102740;
    }
    if (*(int *)(lVar13 + 8) != 0x3f53) {
      *(undefined4 *)(lVar13 + 8) = 0x3f53;
      uVar5 = uVar11 & 0xfffffff8;
      uVar10 = *(ulong *)(lVar13 + 0x50) >> ((byte)uVar11 & 7);
LAB_00102562:
      pcVar9 = local_24;
      uVar11 = uVar5 - 8 >> 3;
      pcVar7 = pcVar9;
      do {
        *pcVar7 = (char)uVar10;
        pcVar7 = pcVar7 + 1;
        uVar10 = uVar10 >> 8;
      } while (local_24 + (ulong)uVar11 + 1 != pcVar7);
      *(ulong *)(lVar13 + 0x50) = uVar10;
      uVar5 = 0;
      *(undefined4 *)(lVar13 + 0x58) = 0;
      iVar4 = (int)pcVar9;
      do {
        cVar1 = *pcVar9;
        if (uVar5 < 2) {
          if (cVar1 == '\0') {
LAB_00102760:
            uVar5 = uVar5 + 1;
            bVar2 = uVar5 < 4;
          }
          else {
LAB_001025f3:
            bVar2 = true;
            uVar5 = 0;
          }
        }
        else {
          if (cVar1 == -1) goto LAB_00102760;
          if (cVar1 != '\0') goto LAB_001025f3;
          uVar5 = 4 - uVar5;
          bVar2 = true;
        }
        iVar6 = (int)pcVar9;
        pcVar9 = pcVar9 + 1;
      } while ((bool)((uint)((1 - iVar4) + iVar6) < uVar11 + 1 & bVar2));
      goto LAB_00102648;
    }
    pcVar9 = (char *)*param_1;
    uVar5 = *(uint *)(lVar13 + 0x8c);
    uVar10 = 0;
  }
  else {
    if (*(int *)(lVar13 + 8) == 0x3f53) {
      uVar5 = *(uint *)(lVar13 + 0x8c);
      bVar2 = uVar5 < 4;
    }
    else {
      uVar11 = *(uint *)(lVar13 + 0x58);
      *(undefined4 *)(lVar13 + 8) = 0x3f53;
      uVar5 = uVar11 & 0xfffffff8;
      *(uint *)(lVar13 + 0x58) = uVar5;
      uVar10 = *(ulong *)(lVar13 + 0x50) >> ((byte)uVar11 & 7);
      *(ulong *)(lVar13 + 0x50) = uVar10;
      if (7 < uVar5) goto LAB_00102562;
      bVar2 = true;
      uVar5 = 0;
LAB_00102648:
      *(uint *)(lVar13 + 0x8c) = uVar5;
      uVar11 = *(uint *)(param_1 + 1);
    }
    pcVar9 = (char *)*param_1;
    bVar2 = (bool)(uVar11 != 0 & bVar2);
    if (bVar2) {
      uVar10 = 0;
      pcVar7 = pcVar9;
      do {
        cVar1 = *pcVar7;
        bVar3 = bVar2;
        if (uVar5 < 2) {
          if (cVar1 == '\0') {
LAB_00102770:
            uVar5 = uVar5 + 1;
            bVar3 = uVar5 < 4;
          }
          else {
LAB_001026b6:
            uVar5 = 0;
          }
        }
        else {
          if (cVar1 == -1) goto LAB_00102770;
          if (cVar1 != '\0') goto LAB_001026b6;
          uVar5 = 4 - uVar5;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar8;
      } while ((uVar8 < uVar11) && (pcVar7 = pcVar7 + 1, bVar3));
      pcVar9 = pcVar9 + uVar10;
    }
    else {
      uVar10 = 0;
    }
  }
  lVar12 = uVar10 + param_1[2];
  *(uint *)(lVar13 + 0x8c) = uVar5;
  *param_1 = pcVar9;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) - (int)uVar10;
  param_1[2] = lVar12;
  if (uVar5 == 4) {
    iVar4 = *(int *)(lVar13 + 0x18);
    uVar11 = 0;
    if (iVar4 != -1) {
      uVar11 = *(uint *)(lVar13 + 0x10) & 0xfffffffb;
    }
    *(uint *)(lVar13 + 0x10) = uVar11;
    uVar15 = param_1[5];
    iVar6 = inflateStateCheck();
    if (iVar6 == 0) {
      *(undefined8 *)(lVar13 + 0x3c) = 0;
      *(undefined4 *)(lVar13 + 0x44) = 0;
      inflateResetKeep();
    }
    param_1[2] = lVar12;
    param_1[5] = uVar15;
    *(int *)(lVar13 + 0x18) = iVar4;
    *(undefined4 *)(lVar13 + 8) = 0x3f3f;
  }
  else {
    uVar14 = 0xfffffffd;
  }
LAB_00102740:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14 & 0xffffffff;
}



ulong inflateSyncPoint(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  uVar2 = 0xfffffffe;
  if (((plVar1 != (long *)0x0) && (param_1 == *plVar1)) &&
     (((int)plVar1[1] - 0x3f34U < 0x20 && (uVar2 = 0, (int)plVar1[1] == 0x3f41)))) {
    return (ulong)((int)plVar1[0xb] == 0);
  }
  return uVar2;
}



undefined8 inflateCopy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  iVar2 = inflateStateCheck(param_2);
  if ((iVar2 != 0) || (param_1 == (undefined8 *)0x0)) {
    return 0xfffffffe;
  }
  puVar1 = (undefined8 *)param_2[7];
  puVar3 = (undefined8 *)(*(code *)param_2[8])(param_2[10],1,0x1bf8);
  if (puVar3 == (undefined8 *)0x0) {
LAB_00102ac4:
    uVar6 = 0xfffffffc;
  }
  else {
    if (puVar1[9] == 0) {
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      uVar6 = param_2[3];
      lVar7 = (long)puVar3 - (long)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
      param_1[2] = param_2[2];
      param_1[3] = uVar6;
      uVar6 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar6;
      uVar6 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar6;
      uVar6 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar6;
      uVar6 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar6;
      uVar6 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar6;
      *puVar3 = *puVar1;
      puVar3[0x37e] = puVar1[0x37e];
      puVar5 = (undefined8 *)((long)puVar1 - lVar7);
      puVar9 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
      for (uVar8 = (ulong)((int)lVar7 + 0x1bf8U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
        puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
      }
      *puVar3 = param_1;
      puVar5 = (undefined8 *)puVar1[0xd];
      pvVar4 = (void *)0x0;
      if (puVar5 < puVar1 + 0xab) {
        puVar3[0x12] = (long)puVar3 + (puVar1[0x12] - (long)(puVar1 + 0xab)) + 0x558;
      }
      else {
LAB_00102953:
        puVar9 = puVar1 + 0xab;
        if (puVar5 <= (undefined8 *)((long)puVar1 + 0x1be4U)) {
          lVar7 = puVar1[0xe];
          puVar3[0xd] = (long)puVar3 + (long)puVar5 + (0x558 - (long)puVar9);
          puVar3[0xe] = (long)puVar3 + (lVar7 - (long)puVar9) + 0x558;
        }
        puVar3[0x12] = (long)puVar3 + (puVar1[0x12] - (long)puVar9) + 0x558;
        if (pvVar4 != (void *)0x0) goto LAB_001029d9;
      }
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)(*(code *)param_2[8])
                                 (param_2[10],1 << ((byte)*(undefined4 *)(puVar1 + 7) & 0x1f),1);
      if (pvVar4 == (void *)0x0) {
        (*(code *)param_2[9])(param_2[10],puVar3);
        goto LAB_00102ac4;
      }
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      uVar6 = param_2[3];
      lVar7 = (long)puVar3 - (long)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
      param_1[2] = param_2[2];
      param_1[3] = uVar6;
      uVar6 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar6;
      uVar6 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar6;
      uVar6 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar6;
      uVar6 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar6;
      uVar6 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar6;
      *puVar3 = *puVar1;
      puVar3[0x37e] = puVar1[0x37e];
      puVar5 = (undefined8 *)((long)puVar1 - lVar7);
      puVar9 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
      for (uVar8 = (ulong)((int)lVar7 + 0x1bf8U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
        puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
      }
      *puVar3 = param_1;
      puVar5 = (undefined8 *)puVar1[0xd];
      if (puVar1 + 0xab <= puVar5) goto LAB_00102953;
      puVar3[0x12] = (long)puVar3 + (puVar1[0x12] - (long)(puVar1 + 0xab)) + 0x558;
LAB_001029d9:
      pvVar4 = memcpy(pvVar4,(void *)puVar1[9],
                      (ulong)(uint)(1 << ((byte)*(undefined4 *)(puVar1 + 7) & 0x1f)));
    }
    puVar3[9] = pvVar4;
    uVar6 = 0;
    param_1[7] = puVar3;
  }
  return uVar6;
}



undefined8 inflateUndermine(long param_1)

{
  long *plVar1;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (((plVar1 != (long *)0x0) && (param_1 == *plVar1)) && ((int)plVar1[1] - 0x3f34U < 0x20)) {
    *(undefined4 *)(plVar1 + 0x37d) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}



undefined8 inflateValidate(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (((plVar2 != (long *)0x0) && (param_1 == *plVar2)) && ((int)plVar2[1] - 0x3f34U < 0x20)) {
    uVar1 = *(uint *)(plVar2 + 2);
    if ((param_2 != 0) && (uVar1 != 0)) {
      *(uint *)(plVar2 + 2) = uVar1 | 4;
      return 0;
    }
    *(uint *)(plVar2 + 2) = uVar1 & 0xfffffffb;
    return 0;
  }
  return 0xfffffffe;
}



long inflateMark(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return -0x10000;
  }
  plVar2 = *(long **)(param_1 + 0x38);
  lVar3 = -0x10000;
  if (((plVar2 != (long *)0x0) && (param_1 == *plVar2)) &&
     (iVar1 = (int)plVar2[1], iVar1 - 0x3f34U < 0x20)) {
    lVar3 = (long)*(int *)((long)plVar2 + 0x1bec) * 0x10000;
    if (iVar1 == 0x3f43) {
      return lVar3 + (ulong)*(uint *)((long)plVar2 + 0x5c);
    }
    if (iVar1 == 0x3f4c) {
      return lVar3 + (ulong)(uint)((int)plVar2[0x37e] - *(int *)((long)plVar2 + 0x5c));
    }
  }
  return lVar3;
}



long inflateCodesUsed(long param_1)

{
  long *plVar1;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return -1;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (((plVar1 != (long *)0x0) && (param_1 == *plVar1)) && ((int)plVar1[1] - 0x3f34U < 0x20)) {
    return plVar1[0x12] - (long)(plVar1 + 0xab) >> 2;
  }
  return -1;
}



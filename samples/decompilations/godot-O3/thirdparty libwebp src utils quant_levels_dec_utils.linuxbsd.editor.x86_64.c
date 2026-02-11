
undefined8 WebPDequantizeLevels(long param_1,int param_2,int param_3,int param_4,uint param_5)

{
  void *pvVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  size_t __n;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  short *psVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  void *pvVar15;
  void *__s;
  ulong uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  void *pvVar21;
  short sVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  short *psVar26;
  void *pvVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  long in_FS_OFFSET;
  int local_22c;
  long local_1f8;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((100 < param_5) ||
     (bVar6 = (param_1 == 0 || param_2 < 1) || param_3 < 1,
     (param_1 == 0 || param_2 < 1) || param_3 < 1)) {
LAB_0010004f:
    uVar14 = 0;
  }
  else {
    local_22c = (int)param_5 / 0x19;
    uVar11 = local_22c * 2;
    if (param_2 <= (int)uVar11) {
      uVar11 = param_2 - 1U & 0xfffffffe;
      local_22c = (int)(param_2 - 1U) >> 1;
    }
    iVar4 = param_3 + -1 >> 1;
    if ((int)uVar11 < param_3) {
      iVar4 = local_22c;
    }
    if (iVar4 != 0) {
      iVar12 = iVar4 + 1;
      __n = (long)param_2 * 2;
      lVar5 = (long)(iVar12 * param_2 * 2) * 2;
      pvVar15 = (void *)WebPSafeMalloc(1,lVar5 + 0xffe + __n);
      if (pvVar15 == (void *)0x0) goto LAB_0010004f;
      iVar13 = iVar4 * 2 + 1;
      pvVar1 = (void *)((long)pvVar15 + (long)(param_2 * iVar13) * 2);
      __s = (void *)((long)pvVar1 + (long)param_2 * -2);
      memset(__s,0,__n);
      lVar33 = (long)param_4;
      uVar31 = 0;
      bVar7 = false;
      iVar29 = 0;
      uVar11 = 0xff;
      iVar28 = -iVar4;
      bVar8 = false;
      local_148 = (undefined1  [16])0x0;
      local_138 = (undefined1  [16])0x0;
      local_128 = (undefined1  [16])0x0;
      local_118 = (undefined1  [16])0x0;
      local_108 = (undefined1  [16])0x0;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      iVar13 = (int)(0x40000 / (long)(iVar13 * iVar13));
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      lVar20 = param_1;
      do {
        lVar23 = 0;
        do {
          bVar3 = *(byte *)(lVar20 + lVar23);
          if (bVar3 < uVar11) {
            bVar8 = true;
            uVar11 = (uint)bVar3;
          }
          if (uVar31 < bVar3) {
            bVar7 = true;
            uVar31 = (uint)bVar3;
          }
          lVar23 = lVar23 + 1;
          local_148[bVar3] = 1;
        } while ((int)lVar23 < param_2);
        iVar29 = iVar29 + 1;
        lVar20 = lVar20 + lVar33;
      } while (iVar29 < param_3);
      if (!bVar7) {
        uVar31 = 0;
      }
      if (!bVar8) {
        uVar11 = 0xff;
      }
      bVar7 = false;
      uVar16 = 0;
      iVar34 = 0;
      iVar32 = uVar31 - uVar11;
      uVar24 = 0xffffffff;
      iVar29 = iVar32;
      do {
        if (local_148[uVar16] != '\0') {
          iVar34 = iVar34 + 1;
          if (((int)uVar24 < 0) || (iVar30 = (int)uVar16 - (int)uVar24, iVar29 <= iVar30)) {
            uVar24 = uVar16 & 0xffffffff;
            bVar6 = true;
          }
          else {
            uVar24 = uVar16 & 0xffffffff;
            bVar7 = true;
            bVar6 = true;
            iVar29 = iVar30;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x100);
      if (bVar7) {
        iVar32 = iVar29;
      }
      if (!bVar6) {
        iVar34 = 0;
      }
      iVar29 = iVar32 * 4;
      lVar20 = 1;
      psVar2 = (short *)((long)pvVar15 + __n + lVar5 + 0x7fe);
      iVar30 = iVar32 * 0xc >> 2;
      iVar32 = (iVar29 + -1) * iVar30;
      psVar26 = psVar2;
      do {
        psVar26 = psVar26 + -1;
        iVar18 = (int)lVar20;
        if (iVar30 < iVar18) {
          if (iVar18 < iVar29) {
            sVar22 = (short)(iVar32 / (iVar29 - iVar30) >> 2);
            sVar10 = -sVar22;
          }
          else {
            sVar10 = 0;
            sVar22 = 0;
          }
        }
        else {
          sVar22 = (short)(iVar18 >> 2);
          sVar10 = -sVar22;
        }
        psVar2[lVar20] = sVar22;
        lVar20 = lVar20 + 1;
        iVar32 = iVar32 - iVar30;
        *psVar26 = sVar10;
      } while (lVar20 != 0x400);
      *psVar2 = 0;
      if (2 < iVar34) {
        lVar20 = (long)iVar4;
        iVar32 = param_2 - iVar4;
        iVar29 = iVar32;
        if (iVar32 <= iVar12) {
          iVar29 = iVar12;
        }
        lVar23 = (long)iVar29;
        psVar26 = (short *)((long)pvVar1 + (((param_2 * 2 + -2) - iVar4) - lVar23) * 2);
        pvVar21 = pvVar15;
        local_1f8 = param_1;
        do {
          pvVar27 = pvVar21;
          lVar17 = 0;
          sVar22 = 0;
          do {
            sVar22 = sVar22 + (ushort)*(byte *)(param_1 + lVar17);
            sVar10 = *(short *)((long)__s + lVar17 * 2) + sVar22;
            *(short *)((long)pvVar1 + lVar17 * 2) = sVar10 - *(short *)((long)pvVar27 + lVar17 * 2);
            *(short *)((long)pvVar27 + lVar17 * 2) = sVar10;
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 < param_2);
          pvVar21 = (void *)((long)pvVar27 + __n);
          if (pvVar1 == (void *)((long)pvVar27 + __n)) {
            pvVar21 = pvVar15;
          }
          if (-1 < iVar28) {
            if (iVar28 < param_3 + -1) {
              param_1 = lVar33 + param_1;
            }
            if (iVar4 <= iVar28) {
              lVar17 = 0;
              do {
                *(short *)((long)pvVar15 + lVar17 + lVar5) =
                     (short)((uint)(ushort)(*(short *)((long)pvVar1 + lVar17 + lVar20 * 2 + -2) +
                                           *(short *)((long)pvVar1 + (lVar20 * 2 - lVar17))) *
                             iVar13 >> 0x10);
                lVar17 = lVar17 + 2;
              } while (lVar17 != (long)iVar12 * 2);
              lVar17 = lVar23;
              psVar9 = psVar26;
              iVar34 = iVar29;
              if (iVar12 < iVar32) {
                lVar25 = (long)iVar12;
                do {
                  *(short *)((long)pvVar15 + lVar25 * 2 + lVar5) =
                       (short)((uint)(ushort)(*(short *)((long)pvVar1 + lVar25 * 2 + lVar20 * 2) -
                                             *(short *)((long)pvVar1 + lVar25 * 2 + lVar20 * -2 + -2
                                                       )) * iVar13 >> 0x10);
                  lVar25 = lVar25 + 1;
                } while ((int)lVar25 < iVar32);
              }
              while (iVar34 < param_2) {
                *(short *)((long)pvVar15 + lVar17 * 2 + lVar5) =
                     (short)((uint)(ushort)((*(short *)((long)pvVar1 + (__n - 2)) * 2 -
                                            *(short *)((long)pvVar1 + lVar17 * 2 + lVar20 * -2 + -2)
                                            ) - *psVar9) * iVar13 >> 0x10);
                lVar17 = lVar17 + 1;
                psVar9 = psVar9 + -1;
                iVar34 = (int)lVar17;
              }
              lVar17 = 0;
              do {
                bVar3 = *(byte *)(local_1f8 + lVar17);
                if ((bVar3 < uVar31) && (uVar11 < bVar3)) {
                  uVar19 = (int)psVar2[(int)((uint)*(ushort *)((long)pvVar15 + lVar17 * 2 + lVar5) +
                                            (uint)bVar3 * -4)] + (uint)bVar3;
                  if (0xff < uVar19) {
                    uVar19 = (int)~uVar19 >> 0x1f;
                  }
                  *(char *)(local_1f8 + lVar17) = (char)uVar19;
                }
                lVar17 = lVar17 + 1;
              } while ((int)lVar17 < param_2);
              local_1f8 = local_1f8 + lVar33;
            }
            if (param_3 <= iVar28 + 1) break;
          }
          iVar28 = iVar28 + 1;
          __s = pvVar27;
        } while( true );
      }
      WebPSafeFree(pvVar15);
    }
    uVar14 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



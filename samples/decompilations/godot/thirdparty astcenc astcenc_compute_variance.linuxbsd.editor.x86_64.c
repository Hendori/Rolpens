
/* brent_kung_prefix_sum(vfloat4*, unsigned long, int) [clone .part.0] */

void brent_kung_prefix_sum(vfloat4 *param_1,ulong param_2,int param_3)

{
  vfloat4 *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  vfloat4 *pvVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = (long)param_3;
  bVar6 = 1;
  uVar8 = 2;
  do {
    uVar7 = param_2 >> (bVar6 & 0x3f);
    pvVar5 = param_1 + (uVar8 - 1) * lVar10 * 0x10;
    if (uVar7 != 0) {
      do {
        pvVar1 = pvVar5 + (uVar8 >> 1) * lVar10 * -0x10;
        fVar2 = *(float *)(pvVar1 + 4);
        fVar3 = *(float *)(pvVar1 + 8);
        fVar4 = *(float *)(pvVar1 + 0xc);
        *(float *)pvVar5 = *(float *)pvVar5 + *(float *)pvVar1;
        *(float *)(pvVar5 + 4) = *(float *)(pvVar5 + 4) + fVar2;
        *(float *)(pvVar5 + 8) = *(float *)(pvVar5 + 8) + fVar3;
        *(float *)(pvVar5 + 0xc) = *(float *)(pvVar5 + 0xc) + fVar4;
        pvVar5 = pvVar5 + (long)(param_3 << (bVar6 & 0x1f)) * 0x10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar8 = uVar8 * 2;
    bVar6 = bVar6 + 1;
  } while (uVar8 <= param_2);
  do {
    uVar9 = uVar8 >> 1;
    bVar6 = bVar6 - 1;
    uVar8 = uVar8 >> 2;
    uVar7 = param_2 - uVar8 >> (bVar6 & 0x3f);
    pvVar5 = param_1 + ((uVar9 - 1) + uVar8) * lVar10 * 0x10;
    if (uVar7 != 0) {
      do {
        pvVar1 = pvVar5 + uVar8 * lVar10 * -0x10;
        fVar2 = *(float *)(pvVar1 + 4);
        fVar3 = *(float *)(pvVar1 + 8);
        fVar4 = *(float *)(pvVar1 + 0xc);
        *(float *)pvVar5 = *(float *)pvVar5 + *(float *)pvVar1;
        *(float *)(pvVar5 + 4) = *(float *)(pvVar5 + 4) + fVar2;
        *(float *)(pvVar5 + 8) = *(float *)(pvVar5 + 8) + fVar3;
        *(float *)(pvVar5 + 0xc) = *(float *)(pvVar5 + 0xc) + fVar4;
        pvVar5 = pvVar5 + (long)(param_3 << (bVar6 & 0x1f)) * 0x10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar8 = uVar9;
  } while (2 < uVar9);
  return;
}



/* compute_pixel_region_variance(astcenc_contexti&, pixel_region_args const&) */

void compute_pixel_region_variance(astcenc_contexti *param_1,pixel_region_args *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  pixel_region_args pVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  float *pfVar31;
  int iVar32;
  uint uVar33;
  undefined8 *puVar34;
  int iVar35;
  long lVar36;
  float *pfVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  ulong uVar44;
  long lVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  long lVar49;
  long in_FS_OFFSET;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  uint local_c4;
  int local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined2 local_44;
  long local_40;
  
  iVar38 = *(int *)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0x24);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(uint *)(param_2 + 0x28);
  pVar3 = param_2[0x18];
  iVar39 = *(int *)(param_2 + 0xc);
  piVar15 = *(int **)param_2;
  iVar27 = *(int *)(param_2 + 0x10);
  iVar43 = *(int *)(param_2 + 0x14);
  iVar9 = *(int *)(param_2 + 0x20);
  iVar10 = *(int *)(param_2 + 0x2c);
  lVar16 = *(long *)(param_2 + 0x38);
  iVar41 = *(int *)(param_2 + 0x30);
  iVar11 = *(int *)(param_2 + 0x34);
  iVar12 = *(int *)(param_2 + 0x1c);
  lVar17 = *(long *)(param_1 + 0x88);
  uVar18 = iVar12 * 2;
  iVar25 = uVar18 + 1;
  iVar32 = iVar9 + iVar25;
  iVar22 = iVar7 + iVar25;
  uVar33 = iVar32 * iVar22;
  if (pVar3 == (pixel_region_args)0x0) {
    local_78 = 0;
    local_c4 = uVar8;
  }
  else {
    local_c4 = iVar25 + uVar8;
    local_78 = iVar12;
  }
  bVar19 = pVar3 != (pixel_region_args)0x0;
  iVar13 = piVar15[1];
  lVar24 = lVar16 + (long)(int)(uVar33 * local_c4) * 0x10;
  iVar14 = *piVar15;
  uVar29 = (uint)bVar19;
  if (piVar15[3] == 0) {
    local_44 = 0xff00;
    if ((int)uVar29 < (int)local_c4) {
      iVar23 = piVar15[2];
      lVar30 = *(long *)(piVar15 + 4);
      iVar35 = iVar11 - local_78;
      iVar26 = (-uVar29 & uVar33) + iVar32;
      do {
        iVar47 = 0;
        if (-1 < iVar35) {
          iVar47 = iVar35;
        }
        if (iVar23 + -1 < iVar35) {
          iVar47 = iVar23 + -1;
        }
        lVar40 = *(long *)(lVar30 + (long)iVar47 * 8);
        if (1 < iVar22) {
          iVar42 = iVar41 - iVar12;
          iVar47 = iVar26;
          do {
            fVar54 = _LC2;
            iVar48 = 0;
            if (-1 < iVar42) {
              iVar48 = iVar42;
            }
            if (iVar13 + -1 < iVar42) {
              iVar48 = iVar13 + -1;
            }
            if (1 < iVar32) {
              iVar20 = iVar10 - iVar12;
              lVar36 = ((long)iVar47 + 1) * 0x10;
              pfVar31 = (float *)(lVar36 + lVar24);
              pfVar37 = (float *)(lVar16 + lVar36);
              do {
                iVar46 = 0;
                if (-1 < iVar20) {
                  iVar46 = iVar20;
                }
                if (iVar14 + -1 < iVar20) {
                  iVar46 = iVar14 + -1;
                }
                iVar20 = iVar20 + 1;
                local_48 = *(undefined4 *)(lVar40 + (ulong)(uint)(iVar48 * iVar14 * 4 + iVar46 * 4))
                ;
                fVar50 = (float)*(byte *)((long)&local_48 + (long)iVar38) * fVar54;
                fVar51 = (float)*(byte *)((long)&local_48 + (long)iVar39) * fVar54;
                fVar52 = (float)*(byte *)((long)&local_48 + (long)iVar27) * fVar54;
                fVar53 = (float)*(byte *)((long)&local_48 + (long)iVar43) * fVar54;
                *pfVar37 = fVar50;
                pfVar37[1] = fVar51;
                pfVar37[2] = fVar52;
                pfVar37[3] = fVar53;
                *pfVar31 = fVar50 * fVar50;
                pfVar31[1] = fVar51 * fVar51;
                pfVar31[2] = fVar52 * fVar52;
                pfVar31[3] = fVar53 * fVar53;
                pfVar31 = pfVar31 + 4;
                pfVar37 = pfVar37 + 4;
              } while (((iVar10 + -1) - iVar12) + iVar32 != iVar20);
            }
            iVar42 = iVar42 + 1;
            iVar47 = iVar47 + iVar32;
          } while (((iVar41 + -1) - iVar12) + iVar22 != iVar42);
        }
        iVar35 = iVar35 + 1;
        iVar26 = iVar26 + uVar33;
      } while (((local_c4 + iVar11) - local_78) - uVar29 != iVar35);
      goto LAB_0010046b;
    }
    if (local_c4 == 1) goto LAB_0010046b;
LAB_001011d6:
    if (pVar3 == (pixel_region_args)0x0) goto LAB_00100d5a;
    if (0 < iVar22) goto LAB_00100514;
  }
  else {
    if (piVar15[3] == 1) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0x3c000000);
      if ((int)local_c4 <= (int)uVar29) goto LAB_001011f1;
      iVar23 = (-uVar29 & uVar33) + iVar32;
      iVar26 = iVar11 - local_78;
      do {
        iVar35 = 0;
        if (-1 < iVar26) {
          iVar35 = iVar26;
        }
        iVar47 = piVar15[2] + -1;
        if (iVar26 <= piVar15[2] + -1) {
          iVar47 = iVar35;
        }
        lVar30 = *(long *)(*(long *)(piVar15 + 4) + (long)iVar47 * 8);
        if (1 < iVar22) {
          iVar47 = iVar41 - iVar12;
          iVar35 = iVar23;
          do {
            iVar42 = 0;
            if (-1 < iVar47) {
              iVar42 = iVar47;
            }
            iVar48 = piVar15[1] + -1;
            if (iVar47 <= piVar15[1] + -1) {
              iVar48 = iVar42;
            }
            if (1 < iVar32) {
              iVar42 = iVar10 - iVar12;
              lVar40 = ((long)iVar35 + 1) * 0x10;
              pfVar31 = (float *)(lVar24 + lVar40);
              puVar34 = (undefined8 *)(lVar16 + lVar40);
              do {
                iVar20 = 0;
                if (-1 < iVar42) {
                  iVar20 = iVar42;
                }
                iVar46 = *piVar15 + -1;
                if (iVar42 <= iVar46) {
                  iVar46 = iVar20;
                }
                iVar42 = iVar42 + 1;
                local_68 = *(undefined8 *)
                            (lVar30 + (ulong)(uint)(iVar46 * 4 + *piVar15 * iVar48 * 4) * 2);
                uVar4 = *(ushort *)((long)&local_68 + (long)iVar27 * 2);
                uVar5 = *(ushort *)((long)&local_68 + (long)iVar38 * 2);
                uVar6 = *(ushort *)((long)&local_68 + (long)iVar39 * 2);
                fVar54 = (float)sf16_to_float(*(ushort *)((long)&local_68 + (long)iVar43 * 2));
                fVar50 = (float)sf16_to_float(uVar4);
                fVar51 = (float)sf16_to_float(uVar6);
                fVar52 = (float)sf16_to_float(uVar5);
                *puVar34 = CONCAT44(fVar51,fVar52);
                puVar34[1] = CONCAT44(fVar54,fVar50);
                *pfVar31 = fVar52 * fVar52;
                pfVar31[1] = fVar51 * fVar51;
                pfVar31[2] = fVar50 * fVar50;
                pfVar31[3] = fVar54 * fVar54;
                pfVar31 = pfVar31 + 4;
                puVar34 = puVar34 + 2;
              } while (((iVar10 + -1) - iVar12) + iVar32 != iVar42);
            }
            iVar47 = iVar47 + 1;
            iVar35 = iVar35 + iVar32;
          } while (((iVar41 + -1) - iVar12) + iVar22 != iVar47);
        }
        iVar26 = iVar26 + 1;
        iVar23 = iVar23 + uVar33;
      } while (((local_c4 + iVar11) - local_78) - uVar29 != iVar26);
    }
    else {
      local_58 = CONCAT44(_LC4._4_4_,(undefined4)_LC4);
      if ((int)uVar29 < (int)local_c4) {
        iVar26 = piVar15[2];
        lVar30 = *(long *)(piVar15 + 4);
        iVar23 = (-uVar29 & uVar33) + iVar32;
        iVar35 = iVar11 - local_78;
        do {
          iVar47 = 0;
          if (-1 < iVar35) {
            iVar47 = iVar35;
          }
          if (iVar26 + -1 < iVar35) {
            iVar47 = iVar26 + -1;
          }
          lVar40 = *(long *)(lVar30 + (long)iVar47 * 8);
          if (1 < iVar22) {
            iVar42 = iVar41 - iVar12;
            iVar47 = iVar23;
            do {
              iVar48 = 0;
              if (-1 < iVar42) {
                iVar48 = iVar42;
              }
              if (iVar13 + -1 < iVar42) {
                iVar48 = iVar13 + -1;
              }
              if (1 < iVar32) {
                iVar20 = iVar10 - iVar12;
                lVar36 = ((long)iVar47 + 1) * 0x10;
                pfVar31 = (float *)(lVar36 + lVar24);
                puVar34 = (undefined8 *)(lVar16 + lVar36);
                do {
                  iVar46 = 0;
                  if (-1 < iVar20) {
                    iVar46 = iVar20;
                  }
                  if (iVar14 + -1 < iVar20) {
                    iVar46 = iVar14 + -1;
                  }
                  iVar20 = iVar20 + 1;
                  puVar2 = (undefined8 *)
                           (lVar40 + (ulong)(uint)(iVar48 * iVar14 * 4 + iVar46 * 4) * 4);
                  local_68 = *puVar2;
                  uStack_60 = puVar2[1];
                  fVar54 = *(float *)((long)&local_68 + (long)iVar43 * 4);
                  fVar50 = *(float *)((long)&local_68 + (long)iVar27 * 4);
                  fVar51 = *(float *)((long)&local_68 + (long)iVar39 * 4);
                  fVar52 = *(float *)((long)&local_68 + (long)iVar38 * 4);
                  *puVar34 = CONCAT44(fVar51,fVar52);
                  puVar34[1] = CONCAT44(fVar54,fVar50);
                  *pfVar31 = fVar52 * fVar52;
                  pfVar31[1] = fVar51 * fVar51;
                  pfVar31[2] = fVar50 * fVar50;
                  pfVar31[3] = fVar54 * fVar54;
                  pfVar31 = pfVar31 + 4;
                  puVar34 = puVar34 + 2;
                } while (((iVar10 + -1) - iVar12) + iVar32 != iVar20);
              }
              iVar42 = iVar42 + 1;
              iVar47 = iVar47 + iVar32;
            } while (iVar42 != ((iVar41 + -1) - iVar12) + iVar22);
          }
          iVar35 = iVar35 + 1;
          iVar23 = iVar23 + uVar33;
        } while (iVar35 != ((local_c4 + iVar11) - local_78) - uVar29);
      }
      else {
LAB_001011f1:
        if ((int)local_c4 < 1) goto LAB_001011d6;
      }
    }
LAB_0010046b:
    iVar38 = 0;
    iVar39 = 0;
    do {
      iVar27 = 0;
      lVar30 = (long)iVar38 << 4;
      if (0 < iVar22) {
        do {
          iVar27 = iVar27 + 1;
          *(undefined1 (*) [16])(lVar16 + lVar30) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar24 + lVar30) = (undefined1  [16])0x0;
          lVar30 = lVar30 + (long)iVar32 * 0x10;
        } while (iVar27 != iVar22);
      }
      if (0 < iVar32) {
        lVar30 = (long)iVar38 << 4;
        do {
          *(undefined1 (*) [16])(lVar16 + lVar30) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar24 + lVar30) = (undefined1  [16])0x0;
          lVar30 = lVar30 + 0x10;
        } while (((long)iVar38 + (long)iVar32) * 0x10 != lVar30);
      }
      iVar39 = iVar39 + 1;
      iVar38 = iVar38 + uVar33;
    } while (iVar39 < (int)local_c4);
    if (pVar3 == (pixel_region_args)0x0) {
      if ((int)local_c4 <= (int)(uint)bVar19) goto LAB_00100d5a;
    }
    else {
      if (0 < iVar22) {
LAB_00100514:
        iVar39 = 0;
        iVar38 = 0;
LAB_0010051e:
        if (iVar32 < 1) goto LAB_00100e87;
        do {
          lVar30 = (long)iVar39 << 4;
          do {
            *(undefined1 (*) [16])(lVar16 + lVar30) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar24 + lVar30) = (undefined1  [16])0x0;
            lVar30 = lVar30 + 0x10;
          } while (((long)iVar39 + (long)iVar32) * 0x10 != lVar30);
          iVar38 = iVar38 + 1;
          iVar39 = iVar39 + iVar32;
        } while (iVar38 < iVar22);
LAB_00100576:
        if ((int)(uint)bVar19 < (int)local_c4) goto LAB_00100586;
        goto LAB_00100695;
      }
      if ((int)local_c4 <= (int)(uint)bVar19) goto LAB_00100724;
    }
LAB_00100586:
    uVar21 = (uint)bVar19;
    iVar38 = iVar32 + (uVar33 & -uVar21);
    uVar44 = (ulong)(iVar32 + -1);
    uVar29 = uVar21;
    if (1 < iVar22) {
LAB_001005d0:
      iVar39 = 1;
      iVar27 = iVar38;
      do {
        if (1 < uVar44) goto LAB_00100c08;
        iVar39 = iVar39 + 1;
        iVar27 = iVar27 + iVar32;
      } while (iVar39 != iVar22);
      goto LAB_001005ec;
    }
    if ((int)uVar21 < (int)local_c4) goto LAB_0010061f;
    if (pVar3 == (pixel_region_args)0x0) goto LAB_00100d5a;
  }
  goto LAB_00100724;
LAB_00100e87:
  iVar38 = iVar38 + 1;
  iVar39 = iVar39 + iVar32;
  if (iVar22 <= iVar38) goto LAB_00100576;
  goto LAB_0010051e;
LAB_00100c08:
  do {
    lVar30 = (long)iVar27;
    iVar39 = iVar39 + 1;
    iVar27 = iVar27 + iVar32;
    lVar30 = (lVar30 + 1) * 0x10;
    brent_kung_prefix_sum((vfloat4 *)(lVar16 + lVar30),uVar44,1);
    brent_kung_prefix_sum((vfloat4 *)(lVar24 + lVar30),uVar44,1);
  } while (iVar39 != iVar22);
LAB_001005ec:
  uVar29 = uVar29 + 1;
  iVar38 = iVar38 + uVar33;
  if ((int)local_c4 <= (int)uVar29) goto code_r0x00100601;
  goto LAB_001005d0;
code_r0x00100601:
  if ((int)uVar21 < (int)local_c4) {
LAB_0010061f:
    iVar38 = (uVar33 & -uVar21) + iVar32 * 2;
    do {
      if (1 < iVar32) {
        goto LAB_00100660;
      }
      uVar21 = uVar21 + 1;
      iVar38 = iVar38 + uVar33;
    } while (uVar21 != local_c4);
    goto LAB_00100695;
  }
  if (pVar3 != (pixel_region_args)0x0) goto LAB_001006a8;
LAB_00100d5a:
  fVar54 = _LC4._4_4_ / ((float)iVar25 * (float)iVar25);
  if (0 < iVar7) {
    iVar38 = 0;
    iVar22 = 0;
    iVar41 = iVar41 * iVar14;
    iVar25 = iVar25 * iVar32;
    do {
      if (0 < iVar9) {
        lVar30 = (long)iVar38;
        lVar24 = lVar16 + lVar30 * 0x10;
        pfVar31 = (float *)(lVar17 + ((long)iVar41 + (long)iVar10) * 4);
        do {
          pfVar37 = (float *)(lVar24 + 0xc);
          lVar36 = lVar24 + 0x1c;
          lVar49 = lVar24 + lVar30 * -0x10;
          lVar40 = (long)iVar12 * 0x20 + lVar30 * -0x10 + lVar24;
          lVar24 = lVar24 + 0x10;
          *pfVar31 = (((*pfVar37 - *(float *)(lVar36 + (long)iVar12 * 0x20)) -
                      *(float *)(lVar49 + 0xc + (long)iVar25 * 0x10)) +
                     *(float *)(lVar40 + 0x1c + (long)iVar25 * 0x10)) * fVar54;
          pfVar31 = pfVar31 + 1;
        } while ((lVar30 + (ulong)(iVar9 - 1)) * 0x10 + lVar16 + 0x10 != lVar24);
      }
      iVar22 = iVar22 + 1;
      iVar38 = iVar38 + iVar32;
      iVar25 = iVar25 + iVar32;
      iVar41 = iVar41 + iVar14;
    } while (iVar7 != iVar22);
  }
  goto LAB_00100962;
LAB_001006f8:
  do {
    uVar44 = (ulong)(int)(local_c4 - 1);
    iVar27 = (1 - iVar32) + iVar38;
    do {
      if (1 < uVar44) goto LAB_00100cc8;
      iVar27 = iVar27 + 1;
    } while (iVar38 != iVar27);
    iVar39 = iVar39 + 1;
    iVar38 = iVar38 + iVar32;
  } while (iVar22 != iVar39);
  goto LAB_00100724;
LAB_00100cc8:
  do {
    lVar30 = (long)iVar27;
    iVar27 = iVar27 + 1;
    brent_kung_prefix_sum((vfloat4 *)(lVar16 + lVar30 * 0x10),uVar44,uVar33);
    brent_kung_prefix_sum((vfloat4 *)(lVar24 + lVar30 * 0x10),uVar44,uVar33);
  } while (iVar27 != iVar38);
  iVar39 = iVar39 + 1;
  iVar38 = iVar38 + iVar32;
  if (iVar22 == iVar39) goto LAB_00100724;
  goto LAB_001006f8;
LAB_00100c70:
  do {
    lVar30 = (long)iVar39;
    iVar39 = iVar39 + 1;
    brent_kung_prefix_sum((vfloat4 *)(lVar16 + lVar30 * 0x10),uVar44,iVar32);
    brent_kung_prefix_sum((vfloat4 *)(lVar24 + lVar30 * 0x10),uVar44,iVar32);
  } while (iVar39 != iVar38);
  while( true ) {
    uVar21 = uVar21 + 1;
    iVar38 = iVar38 + uVar33;
    if (uVar21 == local_c4) break;
LAB_00100660:
    uVar44 = (ulong)(iVar22 + -1);
    iVar39 = (1 - iVar32) + iVar38;
    do {
      if (1 < uVar44) goto LAB_00100c70;
      iVar39 = iVar39 + 1;
    } while (iVar39 != iVar38);
  }
LAB_00100695:
  if (pVar3 == (pixel_region_args)0x0) goto LAB_00100d5a;
  if (1 < iVar22) {
LAB_001006a8:
    iVar39 = 1;
    iVar38 = uVar33 + iVar32 * 2;
    do {
      if (1 < iVar32) {
        goto LAB_001006f8;
      }
      iVar39 = iVar39 + 1;
      iVar38 = iVar38 + iVar32;
    } while (iVar39 != iVar22);
  }
LAB_00100724:
  fVar54 = (float)iVar25;
  fVar54 = _LC4._4_4_ / (fVar54 * fVar54 * fVar54);
  if (0 < (int)uVar8) {
    iVar22 = (iVar12 + 1 + local_78) * uVar33;
    iVar38 = iVar11 * iVar13 * iVar14 + iVar41 * iVar14;
    uVar29 = 0;
    do {
      if (0 < iVar7) {
        iVar41 = 0;
        iVar39 = iVar22 + iVar32 * (uVar18 + 1);
        iVar27 = iVar22;
        iVar43 = iVar38;
        do {
          if (0 < iVar9) {
            lVar49 = (long)iVar27;
            lVar36 = (long)(int)(uVar33 * ~uVar18 + iVar27) * 0x10;
            lVar24 = lVar16 + lVar49 * 0x10;
            lVar30 = ((long)iVar12 * 2 + 1 + lVar49) * 0x10 + lVar16;
            lVar40 = (long)(int)(iVar39 + uVar33 * ~uVar18) * 0x10;
            pfVar31 = (float *)(lVar17 + ((long)iVar43 + (long)iVar10) * 4);
            do {
              pfVar37 = (float *)(lVar24 + 0xc);
              pfVar1 = (float *)(lVar30 + 0xc);
              lVar45 = lVar24 + lVar49 * -0x10;
              lVar28 = lVar30 + lVar49 * -0x10;
              lVar24 = lVar24 + 0x10;
              lVar30 = lVar30 + 0x10;
              *pfVar31 = ((((*pfVar37 - *pfVar1) - *(float *)(lVar45 + 0xc + (long)iVar39 * 0x10)) +
                          *(float *)(lVar28 + 0xc + (long)iVar39 * 0x10)) -
                         (((*(float *)(lVar45 + 0xc + lVar36) - *(float *)(lVar28 + 0xc + lVar36)) -
                          *(float *)(lVar45 + 0xc + lVar40)) + *(float *)(lVar28 + 0xc + lVar40))) *
                         fVar54;
              pfVar31 = pfVar31 + 1;
            } while (lVar24 != (lVar49 + (ulong)(iVar9 - 1)) * 0x10 + lVar16 + 0x10);
          }
          iVar41 = iVar41 + 1;
          iVar27 = iVar27 + iVar32;
          iVar39 = iVar39 + iVar32;
          iVar43 = iVar43 + iVar14;
        } while (iVar7 != iVar41);
      }
      uVar29 = uVar29 + 1;
      iVar22 = iVar22 + uVar33;
      iVar38 = iVar38 + iVar13 * iVar14;
    } while (uVar8 != uVar29);
  }
LAB_00100962:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* init_compute_averages(astcenc_image const&, unsigned int, astcenc_swizzle const&, avg_args&) */

int init_compute_averages
              (astcenc_image *param_1,uint param_2,astcenc_swizzle *param_3,avg_args *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(param_1 + 8);
  iVar3 = param_2 * 2;
  iVar2 = *(int *)(param_1 + 4);
  uVar4 = *(undefined8 *)param_1;
  if (uVar1 < 2) {
    iVar8 = iVar3 + 0x21;
    uVar10 = 0x20;
    uVar7 = uVar1;
    uVar9 = uVar1;
  }
  else {
    iVar8 = iVar3 + 0x11;
    uVar7 = 0x10;
    if (uVar1 < 0x11) {
      uVar7 = uVar1;
    }
    uVar10 = 0x10;
    uVar9 = iVar3 + 1 + uVar7;
  }
  *(astcenc_image **)param_4 = param_1;
  *(undefined1 (*) [16])(param_4 + 0x20) = (undefined1  [16])0x0;
  uVar5 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)(param_3 + 8);
  *(uint *)(param_4 + 0x50) = uVar7;
  param_4[0x18] = (avg_args)(1 < uVar1);
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(uint *)(param_4 + 0x1c) = param_2;
  *(uint *)(param_4 + 0x54) = iVar8 * iVar8 * uVar9 * 2;
  *(undefined8 *)(param_4 + 8) = uVar5;
  *(undefined8 *)(param_4 + 0x10) = uVar6;
  *(undefined8 *)(param_4 + 0x40) = uVar4;
  *(ulong *)(param_4 + 0x48) = CONCAT44(uVar10,uVar1);
  return ((iVar2 + -1 + uVar10) / uVar10) * (((uVar1 - 1) + uVar7) / uVar7);
}



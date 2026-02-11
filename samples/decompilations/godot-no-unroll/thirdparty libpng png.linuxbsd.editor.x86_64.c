
int png_fp_sub(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 < 1) {
    if (param_2 == 0) {
      return param_1;
    }
    if (param_1 <= param_2 + 0x7fffffff) goto LAB_0010002e;
  }
  else if (param_2 + -0x7fffffff <= param_1) {
LAB_0010002e:
    return param_1 - param_2;
  }
  *param_3 = 1;
  return 50000;
}



bool png_colorspace_endpoints_match(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = false;
  if ((param_2[6] - param_3 <= param_1[6]) && (param_1[6] <= param_2[6] + param_3)) {
    if ((param_2[7] - param_3 <= param_1[7]) && (bVar2 = bVar1, param_1[7] <= param_2[7] + param_3))
    {
      if ((*param_2 - param_3 <= *param_1) && (*param_1 <= *param_2 + param_3)) {
        if ((param_2[1] - param_3 <= param_1[1]) && (param_1[1] <= param_2[1] + param_3)) {
          if ((param_2[2] - param_3 <= param_1[2]) && (param_1[2] <= param_2[2] + param_3)) {
            if ((param_2[3] - param_3 <= param_1[3]) && (param_1[3] <= param_2[3] + param_3)) {
              if ((param_2[4] - param_3 <= param_1[4]) && (param_1[4] <= param_2[4] + param_3)) {
                if (param_2[5] - param_3 <= param_1[5]) {
                  bVar2 = param_1[5] <= param_2[5] + param_3;
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar2;
}



double png_pow10(uint param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = _LC0;
  dVar3 = _LC1;
  if ((int)param_1 < 0) {
    if ((int)param_1 < -0x133) {
      return 0.0;
    }
    param_1 = -param_1;
    bVar1 = true;
  }
  else {
    if (param_1 == 0) {
      return _LC1;
    }
    bVar1 = false;
  }
  do {
    if ((param_1 & 1) != 0) {
      dVar3 = dVar3 * dVar2;
    }
    param_1 = (int)param_1 >> 1;
    dVar2 = dVar2 * dVar2;
  } while (param_1 != 0);
  if (!bVar1) {
    return dVar3;
  }
  return _LC1 / dVar3;
}



undefined8 png_zalloc(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = png_malloc_warn(param_1,(ulong)param_2 * (ulong)param_3);
    return uVar1;
  }
  return 0;
}



void png_zfree(void)

{
  png_free();
  return;
}



undefined8
png_colorspace_set_xy_and_XYZ
          (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,int param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ushort uVar11;
  
  uVar11 = *(ushort *)(param_2 + 0x4a);
  if ((short)uVar11 < 0) {
    return 0;
  }
  if ((param_5 < 2) && ((uVar11 & 2) != 0)) {
    iVar10 = png_colorspace_endpoints_match(param_3,param_2 + 4,100);
    if (iVar10 == 0) {
      *(ushort *)(param_2 + 0x4a) = uVar11 | 0x8000;
      png_benign_error(param_1,"inconsistent chromaticities");
      return 0;
    }
    if (param_5 == 0) {
      return 1;
    }
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = *param_4;
  uVar7 = param_4[1];
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_4 + 4);
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *(undefined8 *)(param_2 + 4) = uVar2;
  *(undefined8 *)(param_2 + 0xc) = uVar3;
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  *(undefined8 *)(param_2 + 0x1c) = uVar5;
  *(undefined8 *)(param_2 + 0x24) = uVar6;
  *(undefined8 *)(param_2 + 0x2c) = uVar7;
  *(undefined8 *)(param_2 + 0x34) = uVar8;
  *(undefined8 *)(param_2 + 0x3c) = uVar9;
  iVar10 = png_colorspace_endpoints_match(param_3,sRGB_xy,1000);
  uVar1 = uVar11 | 0x42;
  if (iVar10 == 0) {
    uVar1 = uVar11 & 0xffbf | 2;
  }
  *(ushort *)(param_2 + 0x4a) = uVar1;
  return 2;
}



int png_compare_ICC_profile_with_sRGB(long param_1,uint *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((~*(uint *)(param_1 + 0x388) & 0x30) == 0) {
    return 0;
  }
  uVar10 = 0;
  uVar9 = 0x10000;
  uVar2 = param_2[0x15];
  uVar8 = 0;
  puVar4 = &DAT_00106f68;
  do {
    if ((((puVar4[1] ==
           (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)) &&
         (uVar3 = param_2[0x16],
         puVar4[2] ==
         (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18))) &&
        (uVar3 = param_2[0x17],
        puVar4[3] ==
        (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18))) &&
       (uVar3 = param_2[0x18],
       puVar4[4] ==
       (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18))) {
      if (uVar10 == 0) {
        uVar9 = *param_2;
        uVar3 = param_2[0x10];
        uVar10 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      }
      if ((*puVar4 == uVar10) && (*(ushort *)((long)puVar4 + 0x16) == uVar9)) {
        if (param_3 == 0) {
          uVar6 = adler32(0,0,0);
          param_3 = adler32(uVar6,param_2,uVar10);
        }
        uVar5 = (ulong)uVar8;
        if ((uint)(&png_sRGB_checks)[uVar5 * 8] == param_3) {
          uVar6 = crc32(0,0,0);
          uVar7 = crc32(uVar6,param_2,uVar10);
          if ((uint)(&DAT_00106f64)[uVar5 * 8] == uVar7) {
            bVar1 = (&DAT_00106f7d)[uVar5 * 0x20];
            if (bVar1 == 0) {
              if ((&DAT_00106f7c)[uVar5 * 0x20] == '\0') {
                png_chunk_report(param_1,"out-of-date sRGB profile with no signature",0);
              }
            }
            else {
              png_chunk_report(param_1,"known incorrect sRGB profile",2);
            }
            return bVar1 + 1;
          }
        }
        png_chunk_report(param_1,"Not recognizing known sRGB profile that has been edited",0);
        return 0;
      }
    }
    uVar8 = uVar8 + 1;
    puVar4 = puVar4 + 8;
    if (uVar8 == 7) {
      return 0;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_build_16bit_table(undefined8 param_1,ulong *param_2,int param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  double __y;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  
  cVar2 = (char)param_3;
  bVar6 = 8 - cVar2;
  uVar10 = (1 << (0x10U - cVar2 & 0x1f)) - 1;
  uVar8 = (ulong)(uint)(1 << (bVar6 & 0x1f));
  dVar13 = _LC1 / (double)(int)uVar10;
  uVar4 = png_calloc(param_1,uVar8 << 3);
  uVar9 = 0;
  *param_2 = uVar4;
  uVar7 = uVar4;
  do {
    auVar14 = png_malloc(param_1,0x200,uVar7);
    uVar7 = auVar14._8_8_;
    lVar5 = auVar14._0_8_;
    *(long *)(uVar4 + uVar9 * 8) = lVar5;
    if (param_4 - 95000U < 0x2711) {
      lVar11 = 0;
      do {
        uVar3 = ((int)lVar11 << (bVar6 & 0x1f)) + (int)uVar9;
        if (param_3 != 0) {
          uVar1 = uVar3 * 0xffff + (1 << (0xfU - cVar2 & 0x1f));
          uVar3 = uVar1 / uVar10;
          uVar7 = (ulong)uVar1 % (ulong)uVar10;
        }
        *(short *)(lVar5 + lVar11 * 2) = (short)uVar3;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x100);
    }
    else {
      lVar11 = 0;
      __y = (double)param_4 * _LC7;
      do {
        dVar12 = pow((double)(((int)lVar11 << (bVar6 & 0x1f)) + (int)uVar9) * dVar13,__y);
        dVar12 = dVar12 * __LC8 + _LC9;
        if ((double)(_LC12 & (ulong)dVar12) < _LC10) {
          dVar12 = (double)((ulong)((double)(long)dVar12 -
                                   (double)(-(ulong)(dVar12 < (double)(long)dVar12) & (ulong)_LC1))
                           | ~_LC12 & (ulong)dVar12);
        }
        uVar7 = (ulong)(uint)(int)dVar12;
        *(short *)(lVar5 + lVar11 * 2) = (short)(int)dVar12;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x100);
    }
    uVar9 = uVar9 + 1;
  } while (uVar8 != uVar9);
  return;
}



void png_free_data_part_0(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar2 = *(uint *)(param_2 + 0x134);
  lVar3 = *(long *)(param_2 + 0xa8);
  uVar1 = param_3 & uVar2;
  if ((lVar3 != 0) && ((uVar1 & 0x4000) != 0)) {
    if (param_4 == -1) {
      lVar5 = 0;
      iVar4 = 0;
      if (0 < *(int *)(param_2 + 0x9c)) {
        do {
          puVar7 = (undefined8 *)(lVar3 + 8 + lVar5);
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 0x38;
          png_free(param_1,*puVar7);
          lVar3 = *(long *)(param_2 + 0xa8);
        } while (iVar4 < *(int *)(param_2 + 0x9c));
      }
      png_free(param_1);
      uVar2 = *(uint *)(param_2 + 0x134);
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0x9c) = 0;
      uVar1 = param_3 & uVar2;
    }
    else {
      png_free(param_1,*(undefined8 *)(lVar3 + 8 + (long)param_4 * 0x38));
      uVar2 = *(uint *)(param_2 + 0x134);
      *(undefined8 *)(*(long *)(param_2 + 0xa8) + 8 + (long)param_4 * 0x38) = 0;
      uVar1 = param_3 & uVar2;
    }
  }
  if ((uVar1 & 0x2000) != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
    png_free(param_1,*(undefined8 *)(param_2 + 0xc0));
    uVar2 = *(uint *)(param_2 + 0x134);
    *(undefined8 *)(param_2 + 0xc0) = 0;
    uVar1 = param_3 & uVar2;
    *(undefined2 *)(param_2 + 0x22) = 0;
  }
  if ((uVar1 & 0x100) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x158));
    png_free(param_1,*(undefined8 *)(param_2 + 0x160));
    uVar2 = *(uint *)(param_2 + 0x134);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
    uVar1 = param_3 & uVar2;
    *(undefined1 (*) [16])(param_2 + 0x158) = (undefined1  [16])0x0;
  }
  if ((uVar1 & 0x80) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x110));
    png_free(param_1,*(undefined8 *)(param_2 + 0x120));
    lVar3 = *(long *)(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0x120) = 0;
    if (lVar3 != 0) {
      if (*(char *)(param_2 + 0x131) != '\0') {
        lVar5 = 0;
        do {
          lVar6 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          png_free(param_1,*(undefined8 *)(lVar3 + lVar6));
          lVar3 = *(long *)(param_2 + 0x128);
        } while ((int)lVar5 < (int)(uint)*(byte *)(param_2 + 0x131));
      }
      png_free(param_1);
      *(undefined8 *)(param_2 + 0x128) = 0;
    }
    uVar2 = *(uint *)(param_2 + 0x134);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    uVar1 = param_3 & uVar2;
  }
  if ((uVar1 & 0x10) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x88));
    png_free(param_1,*(undefined8 *)(param_2 + 0x90));
    uVar2 = *(uint *)(param_2 + 0x134);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
    *(undefined1 (*) [16])(param_2 + 0x88) = (undefined1  [16])0x0;
    uVar1 = param_3 & uVar2;
  }
  lVar3 = *(long *)(param_2 + 0x148);
  if ((lVar3 != 0) && ((uVar1 & 0x20) != 0)) {
    if (param_4 == -1) {
      lVar5 = 0;
      if (0 < *(int *)(param_2 + 0x150)) {
        do {
          lVar6 = lVar5 + 1;
          png_free(param_1,*(undefined8 *)(lVar3 + lVar5 * 0x20));
          png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x148) + 0x10 + lVar5 * 0x20));
          lVar3 = *(long *)(param_2 + 0x148);
          lVar5 = lVar6;
        } while ((int)lVar6 < *(int *)(param_2 + 0x150));
      }
      png_free(param_1);
      uVar2 = *(uint *)(param_2 + 0x134);
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x150) = 0;
      uVar1 = param_3 & uVar2;
    }
    else {
      lVar5 = (long)param_4 * 0x20;
      png_free(param_1,*(undefined8 *)(lVar3 + lVar5));
      png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x148) + 0x10 + lVar5));
      uVar2 = *(uint *)(param_2 + 0x134);
      puVar7 = (undefined8 *)(lVar5 + *(long *)(param_2 + 0x148));
      *puVar7 = 0;
      puVar7[2] = 0;
      uVar1 = param_3 & uVar2;
    }
  }
  lVar3 = *(long *)(param_2 + 0x138);
  if ((lVar3 != 0) && ((uVar1 & 0x200) != 0)) {
    if (param_4 == -1) {
      lVar5 = 0;
      if (0 < *(int *)(param_2 + 0x140)) {
        do {
          lVar6 = lVar5 + 1;
          png_free(param_1,*(undefined8 *)(lVar3 + 8 + lVar5 * 0x20));
          lVar3 = *(long *)(param_2 + 0x138);
          lVar5 = lVar6;
        } while ((int)lVar6 < *(int *)(param_2 + 0x140));
      }
      png_free(param_1);
      uVar2 = *(uint *)(param_2 + 0x134);
      *(undefined8 *)(param_2 + 0x138) = 0;
      *(undefined4 *)(param_2 + 0x140) = 0;
      uVar1 = param_3 & uVar2;
    }
    else {
      png_free(param_1,*(undefined8 *)(lVar3 + 8 + (long)param_4 * 0x20));
      uVar2 = *(uint *)(param_2 + 0x134);
      *(undefined8 *)(*(long *)(param_2 + 0x138) + 8 + (long)param_4 * 0x20) = 0;
      uVar1 = param_3 & uVar2;
    }
  }
  if ((uVar1 & 0x8000) != 0) {
    if (*(long *)(param_2 + 0x100) != 0) {
      png_free(param_1);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
    if (*(long *)(param_2 + 0xf8) != 0) {
      png_free(param_1);
      *(undefined8 *)(param_2 + 0xf8) = 0;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffeffff;
    uVar2 = *(uint *)(param_2 + 0x134);
    uVar1 = param_3 & uVar2;
  }
  if ((uVar1 & 8) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x108));
    uVar2 = *(uint *)(param_2 + 0x134);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
    *(undefined8 *)(param_2 + 0x108) = 0;
    uVar1 = param_3 & uVar2;
  }
  if ((uVar1 & 0x1000) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x18));
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
    *(undefined2 *)(param_2 + 0x20) = 0;
    uVar2 = *(uint *)(param_2 + 0x134);
    *(undefined8 *)(param_2 + 0x18) = 0;
    uVar1 = param_3 & uVar2;
  }
  if ((uVar1 & 0x40) != 0) {
    lVar3 = *(long *)(param_2 + 0x168);
    if (lVar3 != 0) {
      if (*(int *)(param_2 + 4) != 0) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          png_free(param_1,*(undefined8 *)(lVar3 + lVar6));
          lVar3 = *(long *)(param_2 + 0x168);
        } while ((uint)lVar5 < *(uint *)(param_2 + 4));
      }
      png_free(param_1);
      uVar2 = *(uint *)(param_2 + 0x134);
      *(undefined8 *)(param_2 + 0x168) = 0;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
  }
  if (param_4 != -1) {
    param_3 = param_3 & 0xffffbddf;
  }
  *(uint *)(param_2 + 0x134) = ~param_3 & uVar2;
  return;
}



undefined8 png_muldiv_part_0(int *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0;
    return 1;
  }
  dVar1 = ((double)param_3 * (double)param_2) / (double)param_4 + _LC9;
  if ((double)((ulong)dVar1 & _LC12) < _LC10) {
    dVar1 = (double)((ulong)((double)(long)dVar1 -
                            (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                    ~_LC12 & (ulong)dVar1);
  }
  if ((dVar1 <= _LC13) && (_LC14 <= dVar1)) {
    *param_1 = (int)dVar1;
    return 1;
  }
  return 0;
}



undefined8 png_safe_add(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 < 1) {
    if (param_2 == 0) {
      if (iVar1 < 1) {
        if (iVar1 == 0) goto LAB_00100cd8;
        if (param_3 < -0x7fffffff - iVar1) {
          return 1;
        }
      }
      else if (0x7fffffff - iVar1 < param_3) {
        return 1;
      }
    }
    else {
      if (param_3 < -0x7fffffff - param_2) {
        return 1;
      }
      param_3 = param_3 + param_2;
      if (iVar1 < 1) {
        if (iVar1 == 0) goto LAB_00100cd8;
        if (param_3 < -0x7fffffff - iVar1) {
          return 1;
        }
      }
      else if (0x7fffffff - iVar1 < param_3) {
        return 1;
      }
    }
  }
  else {
    if (0x7fffffff - param_2 < param_3) {
      return 1;
    }
    param_3 = param_3 + param_2;
    if (iVar1 < 1) {
      if (iVar1 == 0) goto LAB_00100cd8;
      if (param_3 < -0x7fffffff - iVar1) {
        return 1;
      }
    }
    else if (0x7fffffff - iVar1 < param_3) {
      return 1;
    }
  }
  param_3 = param_3 + iVar1;
LAB_00100cd8:
  *param_1 = param_3;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_build_8bit_table(undefined8 param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar37 [16];
  char *pcVar38;
  long lVar39;
  char *pcVar40;
  char *pcVar41;
  int iVar42;
  double dVar43;
  int iVar57;
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined2 uVar70;
  undefined2 uVar71;
  undefined2 uVar72;
  undefined1 auVar74 [16];
  undefined1 auVar44 [12];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  int iVar73;
  int iVar75;
  int iVar76;
  int iVar77;
  
  pcVar38 = (char *)png_malloc(param_1,0x100);
  *param_2 = pcVar38;
  auVar37 = __LC21;
  iVar36 = _UNK_0010717c;
  iVar35 = _UNK_00107178;
  iVar34 = _UNK_00107174;
  iVar33 = __LC20;
  iVar32 = _UNK_0010716c;
  iVar31 = _UNK_00107168;
  iVar30 = _UNK_00107164;
  iVar29 = __LC19;
  iVar28 = _UNK_0010715c;
  iVar27 = _UNK_00107158;
  iVar26 = _UNK_00107154;
  iVar25 = __LC18;
  iVar24 = _UNK_0010714c;
  iVar23 = _UNK_00107148;
  iVar22 = _UNK_00107144;
  iVar21 = __LC17;
  if (param_3 - 95000U < 0x2711) {
    pcVar40 = pcVar38;
    auVar45 = __LC15;
    do {
      pcVar41 = pcVar40 + 0x10;
      iVar73 = auVar45._0_4_;
      auVar74._0_4_ = iVar73 + iVar21;
      iVar75 = auVar45._4_4_;
      auVar74._4_4_ = iVar75 + iVar22;
      iVar76 = auVar45._8_4_;
      iVar77 = auVar45._12_4_;
      auVar74._8_4_ = iVar76 + iVar23;
      auVar74._12_4_ = iVar77 + iVar24;
      auVar61._0_12_ = auVar45._0_12_;
      auVar61._12_2_ = auVar45._6_2_;
      auVar61._14_2_ = (short)((uint)(iVar75 + iVar26) >> 0x10);
      auVar60._12_4_ = auVar61._12_4_;
      auVar60._0_10_ = auVar45._0_10_;
      uVar71 = (undefined2)(iVar75 + iVar26);
      auVar60._10_2_ = uVar71;
      auVar59._10_6_ = auVar60._10_6_;
      auVar59._0_8_ = auVar45._0_8_;
      auVar59._8_2_ = auVar45._4_2_;
      uVar70 = (undefined2)((uint)(iVar73 + iVar25) >> 0x10);
      auVar17._2_8_ = auVar59._8_8_;
      auVar17._0_2_ = uVar70;
      auVar17._10_6_ = 0;
      auVar69._0_2_ = auVar45._0_2_;
      auVar58._12_4_ = 0;
      auVar58._0_12_ = SUB1612(auVar17 << 0x30,4);
      auVar58 = auVar58 << 0x20;
      uVar72 = (undefined2)(iVar76 + iVar27);
      auVar65._0_12_ = auVar58._0_12_;
      auVar65._12_2_ = uVar70;
      auVar65._14_2_ = (short)((uint)(iVar76 + iVar27) >> 0x10);
      auVar64._12_4_ = auVar65._12_4_;
      auVar64._0_10_ = auVar58._0_10_;
      auVar64._10_2_ = auVar45._10_2_;
      auVar63._10_6_ = auVar64._10_6_;
      auVar63._0_8_ = auVar58._0_8_;
      auVar63._8_2_ = auVar45._2_2_;
      auVar18._2_8_ = auVar63._8_8_;
      auVar18._0_2_ = uVar72;
      auVar18._10_6_ = 0;
      auVar62._12_4_ = 0;
      auVar62._0_12_ = SUB1612(auVar18 << 0x30,4);
      auVar62 = auVar62 << 0x20;
      iVar42 = iVar73 + iVar29;
      iVar57 = iVar75 + iVar30;
      auVar44._0_8_ = CONCAT44(iVar57,iVar42);
      auVar44._8_4_ = iVar76 + iVar31;
      auVar68._0_12_ = auVar62._0_12_;
      auVar68._12_2_ = uVar72;
      auVar68._14_2_ = (short)(iVar77 + iVar28);
      auVar67._12_4_ = auVar68._12_4_;
      auVar67._0_10_ = auVar62._0_10_;
      auVar67._10_2_ = uVar71;
      auVar66._10_6_ = auVar67._10_6_;
      auVar66._0_8_ = auVar62._0_8_;
      auVar66._8_2_ = (short)(iVar73 + iVar25);
      auVar69._8_8_ = auVar66._8_8_;
      auVar69._6_2_ = auVar45._12_2_;
      auVar69._4_2_ = auVar45._8_2_;
      auVar69._2_2_ = auVar45._4_2_;
      auVar48._12_2_ = (short)((uint)iVar57 >> 0x10);
      auVar48._0_12_ = auVar44;
      auVar48._14_2_ = (short)((uint)(iVar75 + iVar34) >> 0x10);
      auVar47._12_4_ = auVar48._12_4_;
      auVar47._0_10_ = auVar44._0_10_;
      uVar71 = (undefined2)(iVar75 + iVar34);
      auVar47._10_2_ = uVar71;
      auVar46._10_6_ = auVar47._10_6_;
      auVar46._8_2_ = (short)iVar57;
      auVar46._0_8_ = auVar44._0_8_;
      uVar70 = (undefined2)((uint)(iVar73 + iVar33) >> 0x10);
      auVar19._2_8_ = auVar46._8_8_;
      auVar19._0_2_ = uVar70;
      auVar19._10_6_ = 0;
      auVar56._0_2_ = (undefined2)iVar42;
      auVar45._12_4_ = 0;
      auVar45._0_12_ = SUB1612(auVar19 << 0x30,4);
      auVar45 = auVar45 << 0x20;
      auVar69 = auVar69 & auVar37;
      uVar72 = (undefined2)(iVar76 + iVar35);
      auVar52._0_12_ = auVar45._0_12_;
      auVar52._12_2_ = uVar70;
      auVar52._14_2_ = (short)((uint)(iVar76 + iVar35) >> 0x10);
      auVar51._12_4_ = auVar52._12_4_;
      auVar51._0_10_ = auVar45._0_10_;
      auVar51._10_2_ = (short)((uint)auVar44._8_4_ >> 0x10);
      auVar50._10_6_ = auVar51._10_6_;
      auVar50._0_8_ = auVar45._0_8_;
      auVar50._8_2_ = (short)((uint)iVar42 >> 0x10);
      auVar20._2_8_ = auVar50._8_8_;
      auVar20._0_2_ = uVar72;
      auVar20._10_6_ = 0;
      auVar49._12_4_ = 0;
      auVar49._0_12_ = SUB1612(auVar20 << 0x30,4);
      auVar49 = auVar49 << 0x20;
      auVar55._0_12_ = auVar49._0_12_;
      auVar55._12_2_ = uVar72;
      auVar55._14_2_ = (short)(iVar77 + iVar36);
      auVar54._12_4_ = auVar55._12_4_;
      auVar54._0_10_ = auVar49._0_10_;
      auVar54._10_2_ = uVar71;
      auVar53._10_6_ = auVar54._10_6_;
      auVar53._0_8_ = auVar49._0_8_;
      auVar53._8_2_ = (short)(iVar73 + iVar33);
      auVar56._8_8_ = auVar53._8_8_;
      auVar56._6_2_ = (short)(iVar77 + iVar32);
      auVar56._4_2_ = (short)auVar44._8_4_;
      auVar56._2_2_ = (short)iVar57;
      auVar56 = auVar56 & auVar37;
      sVar1 = auVar69._0_2_;
      sVar2 = auVar69._2_2_;
      sVar3 = auVar69._4_2_;
      sVar4 = auVar69._6_2_;
      sVar5 = auVar69._8_2_;
      sVar6 = auVar69._10_2_;
      sVar7 = auVar69._12_2_;
      sVar8 = auVar69._14_2_;
      sVar9 = auVar56._0_2_;
      sVar10 = auVar56._2_2_;
      sVar11 = auVar56._4_2_;
      sVar12 = auVar56._6_2_;
      sVar13 = auVar56._8_2_;
      sVar14 = auVar56._10_2_;
      sVar15 = auVar56._12_2_;
      sVar16 = auVar56._14_2_;
      *pcVar40 = (0 < sVar1) * (sVar1 < 0x100) * auVar69[0] - (0xff < sVar1);
      pcVar40[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar69[2] - (0xff < sVar2);
      pcVar40[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar69[4] - (0xff < sVar3);
      pcVar40[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar69[6] - (0xff < sVar4);
      pcVar40[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar69[8] - (0xff < sVar5);
      pcVar40[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar69[10] - (0xff < sVar6);
      pcVar40[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0xc] - (0xff < sVar7);
      pcVar40[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar69[0xe] - (0xff < sVar8);
      pcVar40[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar56[0] - (0xff < sVar9);
      pcVar40[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar56[2] - (0xff < sVar10);
      pcVar40[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar56[4] - (0xff < sVar11);
      pcVar40[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar56[6] - (0xff < sVar12);
      pcVar40[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar56[8] - (0xff < sVar13);
      pcVar40[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar56[10] - (0xff < sVar14);
      pcVar40[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar56[0xc] - (0xff < sVar15);
      pcVar40[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar56[0xe] - (0xff < sVar16);
      pcVar40 = pcVar41;
      auVar45 = auVar74;
    } while (pcVar41 != pcVar38 + 0x100);
    return;
  }
  lVar39 = 0;
  do {
    if (0xfd < (int)lVar39 - 1U) {
      pcVar38[lVar39] = (char)lVar39;
      if (lVar39 == 0xff) {
        return;
      }
      lVar39 = 1;
    }
    dVar43 = pow((double)(int)lVar39 / __LC16,(double)param_3 * _LC7);
    dVar43 = dVar43 * __LC16 + _LC9;
    if ((double)((ulong)dVar43 & _LC12) < _LC10) {
      dVar43 = (double)((ulong)((double)(long)dVar43 -
                               (double)(-(ulong)(dVar43 < (double)(long)dVar43) & _LC1)) |
                       ~_LC12 & (ulong)dVar43);
    }
    pcVar38[lVar39] = (char)(int)dVar43;
    lVar39 = lVar39 + 1;
  } while( true );
}



undefined8
png_icc_profile_error
          (undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  long in_FS_OFFSET;
  undefined1 auStack_128 [24];
  undefined1 local_110 [8];
  byte local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  }
  lVar2 = png_safecat(local_108,0xc4,0,"profile \'");
  uVar3 = png_safecat(local_108,lVar2 + 0x4f,lVar2,param_3);
  lVar2 = png_safecat(local_108,0xc4,uVar3,&_LC23);
  uVar4 = param_4 >> 0x18;
  if ((((uVar4 - 0x30 < 10) || (uVar4 == 0x20)) || ((uVar4 & 0xffffffffffffffdf) - 0x41 < 0x1a)) &&
     (((uVar4 = param_4 >> 0x10 & 0xff, uVar1 = (uint)(param_4 >> 0x10), uVar4 - 0x30 < 10 ||
       (uVar4 == 0x20)) || ((ulong)(uVar1 & 0xdf) - 0x41 < 0x1a)))) {
    bVar7 = (byte)(param_4 >> 8);
    if ((((ulong)bVar7 - 0x30 < 10) || ((ulong)bVar7 == 0x20)) ||
       ((ulong)((uint)(param_4 >> 8) & 0xdf) - 0x41 < 0x1a)) {
      if ((((param_4 & 0xff) - 0x30 < 10) || ((param_4 & 0xff) == 0x20)) ||
         ((ulong)((uint)param_4 & 0xdf) - 0x41 < 0x1a)) {
        local_108[lVar2] = 0x27;
        local_108[lVar2 + 5] = 0x27;
        bVar6 = (byte)(param_4 >> 0x18);
        if (0x5e < ((uint)(param_4 >> 0x18) & 0xff) - 0x20) {
          bVar6 = 0x3f;
        }
        local_108[lVar2 + 1] = bVar6;
        bVar6 = (byte)(param_4 >> 0x10);
        if (0x5e < (uVar1 & 0xff) - 0x20) {
          bVar6 = 0x3f;
        }
        local_108[lVar2 + 2] = bVar6;
        if (0x5e < bVar7 - 0x20) {
          bVar7 = 0x3f;
        }
        if (0x5e < ((uint)param_4 & 0xff) - 0x20) {
          param_4 = 0x3f;
        }
        local_108[lVar2 + 3] = bVar7;
        local_108[lVar2 + 4] = (byte)param_4;
        lVar5 = lVar2 + 8;
        (local_108 + lVar2 + 6)[0] = 0x3a;
        (local_108 + lVar2 + 6)[1] = 0x20;
        goto LAB_00101028;
      }
    }
  }
  uVar3 = png_format_number(auStack_128,local_110,3,param_4);
  uVar3 = png_safecat(local_108,0xc4,lVar2,uVar3);
  lVar5 = png_safecat(local_108,0xc4,uVar3,&_LC24);
LAB_00101028:
  png_safecat(local_108,0xc4,lVar5,param_5);
  png_chunk_report(param_1,local_108,2 - (uint)(param_2 == 0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool png_colorspace_check_gamma(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  double dVar1;
  
  if ((*(ushort *)((long)param_2 + 0x4a) & 1) == 0) {
    return true;
  }
  if ((param_3 != 0) && (*param_2 != 0)) {
    dVar1 = ((double)*param_2 * __LC26) / (double)param_3 + _LC9;
    if ((double)((ulong)dVar1 & _LC12) < _LC10) {
      dVar1 = (double)((ulong)((double)(long)dVar1 -
                              (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                      ~_LC12 & (ulong)dVar1);
    }
    if (((dVar1 <= _LC13) && (_LC14 <= dVar1)) && ((int)dVar1 - 95000U < 0x2711)) {
      return true;
    }
  }
  if (((*(ushort *)((long)param_2 + 0x4a) & 0x20) == 0) && (param_4 != 2)) {
    png_chunk_report(param_1,"gamma value does not match libpng estimate",0);
    return true;
  }
  png_chunk_report(param_1,"gamma value does not match sRGB",2);
  return param_4 == 2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool png_xy_from_XYZ(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  double dVar8;
  uint local_34;
  long local_30;
  
  uVar3 = *param_2;
  uVar4 = param_2[2];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_2[1];
  if ((int)uVar1 < 1) {
    if (uVar1 == 0) {
      if ((int)uVar3 < 1) {
LAB_001013b0:
        if (uVar3 == 0) {
          local_34 = uVar4;
          if (uVar4 != 0) {
            iVar2 = 0;
LAB_0010140e:
            *param_1 = iVar2;
            uVar3 = param_2[1];
            if (uVar3 != 0) {
              dVar8 = ((double)(int)uVar3 * __LC26) / (double)(int)uVar4 + _LC9;
              if ((double)((ulong)dVar8 & _LC12) < _LC10) {
                dVar8 = (double)((ulong)((double)(long)dVar8 -
                                        (double)(-(ulong)(dVar8 < (double)(long)dVar8) & _LC1)) |
                                ~_LC12 & (ulong)dVar8);
              }
              local_34 = uVar4;
              if ((_LC13 < dVar8) || (dVar8 < _LC14)) goto LAB_001012cf;
              uVar3 = (uint)dVar8;
            }
            param_1[1] = uVar3;
            uVar3 = param_2[3];
            local_34 = uVar3;
            iVar2 = png_safe_add(&local_34,param_2[4],param_2[5]);
            uVar1 = local_34;
            if ((iVar2 == 0) && (local_34 != 0)) {
              if (uVar3 != 0) {
                dVar8 = ((double)(int)uVar3 * __LC26) / (double)(int)local_34 + _LC9;
                if ((double)((ulong)dVar8 & _LC12) < _LC10) {
                  dVar8 = (double)((ulong)((double)(long)dVar8 -
                                          (double)(-(ulong)(dVar8 < (double)(long)dVar8) & _LC1)) |
                                  ~_LC12 & (ulong)dVar8);
                }
                if ((_LC13 < dVar8) || (dVar8 < _LC14)) goto LAB_001012cf;
                uVar3 = (uint)dVar8;
              }
              param_1[2] = uVar3;
              uVar3 = param_2[4];
              if (uVar3 != 0) {
                dVar8 = ((double)(int)uVar3 * __LC26) / (double)(int)local_34 + _LC9;
                if ((double)((ulong)dVar8 & _LC12) < _LC10) {
                  dVar8 = (double)((ulong)((double)(long)dVar8 -
                                          (double)(-(ulong)(dVar8 < (double)(long)dVar8) & _LC1)) |
                                  ~_LC12 & (ulong)dVar8);
                }
                if ((_LC13 < dVar8) || (dVar8 < _LC14)) goto LAB_001012cf;
                uVar3 = (uint)dVar8;
              }
              param_1[3] = uVar3;
              uVar3 = param_2[6];
              local_34 = uVar3;
              iVar2 = png_safe_add(&local_34,param_2[7],param_2[8]);
              if ((iVar2 == 0) && (local_34 != 0)) {
                if (uVar3 != 0) {
                  dVar8 = ((double)(int)uVar3 * __LC26) / (double)(int)local_34 + _LC9;
                  if ((double)((ulong)dVar8 & _LC12) < _LC10) {
                    dVar8 = (double)((ulong)((double)(long)dVar8 -
                                            (double)(-(ulong)(dVar8 < (double)(long)dVar8) & _LC1))
                                    | ~_LC12 & (ulong)dVar8);
                  }
                  if ((_LC13 < dVar8) || (dVar8 < _LC14)) goto LAB_001012cf;
                  uVar3 = (uint)dVar8;
                }
                param_1[4] = uVar3;
                uVar3 = param_2[7];
                if (uVar3 != 0) {
                  dVar8 = floor(((double)(int)uVar3 * __LC26) / (double)(int)local_34 + _LC9);
                  if ((_LC13 < dVar8) || (dVar8 < _LC14)) goto LAB_001012cf;
                  uVar3 = (uint)dVar8;
                }
                param_1[5] = uVar3;
                iVar2 = png_safe_add(&local_34,uVar4,uVar1);
                if (iVar2 == 0) {
                  uVar3 = local_34;
                  local_34 = *param_2;
                  iVar2 = png_safe_add(&local_34,param_2[3],param_2[6]);
                  if (iVar2 == 0) {
                    uVar6 = (ulong)local_34;
                    local_34 = param_2[1];
                    iVar2 = png_safe_add(&local_34,param_2[4],param_2[7]);
                    if (((iVar2 == 0) && (uVar5 = (ulong)local_34, uVar3 != 0)) &&
                       (iVar2 = png_muldiv_part_0(param_1 + 6,uVar6 & 0xffffffff,100000,uVar3,uVar5)
                       , iVar2 != 0)) {
                      iVar2 = png_muldiv_part_0(param_1 + 7,uVar5 & 0xffffffff);
                      bVar7 = iVar2 == 0;
                      goto LAB_001012d4;
                    }
                  }
                }
              }
            }
          }
        }
        else if ((int)(-0x7fffffff - uVar3) <= (int)uVar4) goto LAB_00101308;
      }
      else if ((int)uVar4 <= (int)(0x7fffffff - uVar3)) {
LAB_00101308:
        uVar4 = uVar4 + uVar3;
        local_34 = uVar4;
        if (uVar4 != 0) {
          dVar8 = ((double)(int)uVar3 * __LC26) / (double)(int)uVar4 + _LC9;
          if ((double)((ulong)dVar8 & _LC12) < _LC10) {
            dVar8 = (double)((ulong)((double)(long)dVar8 -
                                    (double)(-(ulong)(dVar8 < (double)(long)dVar8) & _LC1)) |
                            ~_LC12 & (ulong)dVar8);
          }
          if ((dVar8 <= _LC13) && (_LC14 <= dVar8)) {
            iVar2 = (int)dVar8;
            goto LAB_0010140e;
          }
        }
      }
    }
    else if ((int)(-0x7fffffff - uVar1) <= (int)uVar4) {
      uVar4 = uVar4 + uVar1;
      if ((int)uVar3 < 1) goto LAB_001013b0;
      if ((int)uVar4 <= (int)(0x7fffffff - uVar3)) goto LAB_00101308;
    }
  }
  else if ((int)uVar4 <= (int)(0x7fffffff - uVar1)) {
    uVar4 = uVar4 + uVar1;
    if ((int)uVar3 < 1) goto LAB_001013b0;
    if ((int)uVar4 <= (int)(0x7fffffff - uVar3)) goto LAB_00101308;
  }
LAB_001012cf:
  bVar7 = true;
LAB_001012d4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



void png_set_sig_bytes(long param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((int)param_2 < 0) {
      param_2 = 0;
    }
    else if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Too many bytes for PNG signature");
    }
    *(char *)(param_1 + 0x26d) = (char)param_2;
  }
  return;
}



int png_sig_cmp(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
  if (param_3 < 9) {
    if (param_3 == 0) {
      return -1;
    }
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
    return -1;
  }
  if (8 < param_3 + param_2) {
    param_3 = 8 - param_2;
  }
  iVar1 = memcmp((void *)(param_1 + param_2),(void *)((long)&png_signature_1 + param_2),param_3);
  return iVar1;
}



void png_reset_crc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0,0,0);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  return;
}



void png_calculate_crc(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x21b) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x130) & 0x800) != 0) {
      return;
    }
  }
  else if ((~*(uint *)(param_1 + 0x130) & 0x300) == 0) {
    return;
  }
  if (param_3 != 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x24c);
    do {
      for (; (int)param_3 == 0; param_3 = param_3 - 0xffffffff) {
        uVar1 = crc32(uVar1,param_2,0xffffffff);
        param_2 = param_2 + 0xffffffff;
      }
      uVar2 = param_3 & 0xffffffff;
      uVar1 = crc32(uVar1,param_2,param_3 & 0xffffffff);
      param_3 = param_3 - uVar2;
      param_2 = param_2 + uVar2;
    } while (param_3 != 0);
    *(int *)(param_1 + 0x24c) = (int)uVar1;
  }
  return;
}



undefined8 png_user_version_check(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [136];
  long local_20;
  
  uVar5 = *(uint *)(param_1 + 0x130);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    cVar4 = '1';
    iVar6 = 0;
    lVar2 = 0;
    do {
      cVar1 = *(char *)(param_2 + lVar2);
      if (cVar1 != cVar4) {
        uVar5 = uVar5 | 0x20000;
        *(uint *)(param_1 + 0x130) = uVar5;
      }
      if (cVar1 == '.') {
        iVar6 = iVar6 + 1;
        if (iVar6 == 2) goto LAB_00101a1a;
      }
      else if (cVar1 == '\0') goto LAB_00101a1a;
      if (cVar4 == '\0') goto LAB_00101a1a;
      cVar4 = ".6.45"[lVar2];
      lVar2 = lVar2 + 1;
    } while( true );
  }
  *(uint *)(param_1 + 0x130) = uVar5 | 0x20000;
LAB_00101a5c:
  uVar3 = png_safecat(auStack_a8,0x80,0,"Application built with libpng-");
  uVar3 = png_safecat(auStack_a8,0x80,uVar3,param_2);
  uVar3 = png_safecat(auStack_a8,0x80,uVar3," but running with ");
  png_safecat(auStack_a8,0x80,uVar3,&_LC30);
  png_warning(param_1,auStack_a8);
  uVar3 = 0;
LAB_00101a29:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101a1a:
  uVar3 = 1;
  if ((uVar5 & 0x20000) == 0) goto LAB_00101a29;
  goto LAB_00101a5c;
}



undefined8 *
png_create_png_struct
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  byte bVar6;
  __jmp_buf_tag local_5f8;
  undefined8 local_528 [25];
  code *local_460;
  __jmp_buf_tag *local_458;
  undefined8 local_450;
  code *local_3a8;
  code *pcStack_3a0;
  undefined8 *local_398;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  long local_30;
  
  bVar6 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = local_528;
  for (lVar3 = 0x9e; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_fc = 1000;
  local_104 = _LC33;
  local_f8 = 8000000;
  png_set_mem_fn(local_528,param_5,param_6,param_7);
  png_set_error_fn(local_528,param_2,param_3,param_4);
  iVar1 = _setjmp(&local_5f8);
  if (iVar1 == 0) {
    local_458 = &local_5f8;
    local_450 = 0;
    local_460 = __longjmp_chk;
    iVar1 = png_user_version_check(local_528,param_1);
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)png_malloc_warn(local_528,0x4f0);
      if (puVar2 != (undefined8 *)0x0) {
        local_398 = puVar2;
        local_458 = (__jmp_buf_tag *)0x0;
        local_450 = 0;
        local_460 = (code *)0x0;
        local_3a8 = png_zalloc;
        pcStack_3a0 = png_zfree;
        puVar4 = local_528;
        puVar5 = puVar2;
        for (lVar3 = 0x9e; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
          puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
        }
      }
      goto LAB_00101c32;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_00101c32:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar2;
}



undefined8 * png_create_info_struct(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (param_1 != 0) {
    puVar1 = (undefined8 *)png_malloc_base(param_1,0x170);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[0x2d] = 0;
      puVar3 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      for (uVar2 = (ulong)(((int)puVar1 -
                           (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)) + 0x170U
                          >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
      }
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



void png_destroy_info_struct(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if ((param_1 != 0) && (puVar1 = (undefined8 *)*param_2, puVar1 != (undefined8 *)0x0)) {
    *param_2 = 0;
    png_free_data_part_0(param_1,puVar1,0xffff,0xffffffff);
    *puVar1 = 0;
    puVar1[0x2d] = 0;
    puVar3 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)(((int)puVar1 -
                         (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)) + 0x170U >>
                        3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    png_free(param_1,puVar1);
    return;
  }
  return;
}



void png_info_init_3(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  
  bVar3 = 0;
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 < 0x170) {
    *param_1 = 0;
    free(puVar1);
    puVar1 = (undefined8 *)png_malloc_base(0,0x170);
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    *param_1 = puVar1;
  }
  *puVar1 = 0;
  puVar1[0x2d] = 0;
  uVar2 = (ulong)(((int)puVar1 - (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)) +
                  0x170U >> 3);
  puVar1 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  return;
}



void png_data_freer(long param_1,long param_2,int param_3,uint param_4)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (param_3 == 1) {
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | param_4;
    return;
  }
  if (param_3 == 2) {
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) & ~param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Unknown freer parameter in png_data_freer");
}



void png_free_data(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    png_free_data_part_0();
    return;
  }
  return;
}



undefined8 png_get_io_ptr(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x108);
  }
  return 0;
}



void png_init_io(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x108) = param_2;
  }
  return;
}



void png_save_int_32(void)

{
  png_save_uint_32();
  return;
}



undefined8 png_convert_to_rfc1123_buffer(long param_1,ushort *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_35;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if ((((*param_2 < 10000) && ((byte)((char)param_2[1] - 1U) < 0xc)) &&
        ((byte)(*(char *)((long)param_2 + 3) - 1U) < 0x1f)) &&
       (((uVar1 = uVar3, (byte)param_2[2] < 0x18 && (*(byte *)((long)param_2 + 5) < 0x3c)) &&
        ((byte)param_2[3] < 0x3d)))) {
      local_31 = 0;
      local_35 = 0;
      uVar1 = png_format_number(&local_35,&local_30,1);
      uVar2 = png_safecat(param_1,0x1d,0,uVar1);
      if (uVar2 < 0x1c) {
        *(undefined1 *)(param_1 + uVar2) = 0x20;
        uVar2 = uVar2 + 1;
      }
      uVar2 = png_safecat(param_1,0x1d,uVar2,short_months_0 + (long)(int)((byte)param_2[1] - 1) * 4)
      ;
      if (uVar2 < 0x1c) {
        *(undefined1 *)(param_1 + uVar2) = 0x20;
        uVar2 = uVar2 + 1;
      }
      uVar1 = png_format_number(&local_35,&local_30,1,*param_2);
      uVar2 = png_safecat(param_1,0x1d,uVar2,uVar1);
      if (uVar2 < 0x1c) {
        *(undefined1 *)(param_1 + uVar2) = 0x20;
        uVar2 = uVar2 + 1;
      }
      uVar1 = png_format_number(&local_35,&local_30,2,(char)param_2[2]);
      uVar2 = png_safecat(param_1,0x1d,uVar2,uVar1);
      if (uVar2 < 0x1c) {
        *(undefined1 *)(param_1 + uVar2) = 0x3a;
        uVar2 = uVar2 + 1;
      }
      uVar1 = png_format_number(&local_35,&local_30,2,*(undefined1 *)((long)param_2 + 5));
      uVar2 = png_safecat(param_1,0x1d,uVar2,uVar1);
      if (uVar2 < 0x1c) {
        *(undefined1 *)(param_1 + uVar2) = 0x3a;
        uVar2 = uVar2 + 1;
      }
      uVar1 = png_format_number(&local_35,&local_30,2,(char)param_2[3]);
      uVar1 = png_safecat(param_1,0x1d,uVar2,uVar1);
      png_safecat(param_1,0x1d,uVar1," +0000");
      uVar1 = 1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long png_convert_to_rfc1123(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = png_convert_to_rfc1123_buffer(param_1 + 0x38c);
    if (iVar1 != 0) {
      return param_1 + 0x38c;
    }
    png_warning(param_1,"Ignoring invalid time value");
  }
  return 0;
}



char * png_get_copyright(void)

{
  return 
  "\nlibpng version 1.6.45\nCopyright (c) 2018-2025 Cosmin Truta\nCopyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson\nCopyright (c) 1996-1997 Andreas Dilger\nCopyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.\n"
  ;
}



undefined * png_get_libpng_ver(void)

{
  return &_LC30;
}



undefined * png_get_header_ver(void)

{
  return &_LC30;
}



char * png_get_header_version(void)

{
  return " libpng version 1.6.45\n\n";
}



void png_build_grayscale_palette(int param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  
  if ((param_2 != (undefined2 *)0x0) && (uVar7 = param_1 - 1, uVar7 < 8)) {
    iVar1 = *(int *)(CSWTCH_182 + (ulong)uVar7 * 4);
    iVar2 = *(int *)(CSWTCH_183 + (ulong)uVar7 * 4);
    if (0 < iVar1) {
      iVar4 = 0;
      puVar5 = param_2;
      do {
        uVar3 = (undefined1)iVar4;
        *(undefined1 *)(puVar5 + 1) = uVar3;
        puVar6 = (undefined2 *)((long)puVar5 + 3);
        iVar4 = iVar4 + iVar2;
        *puVar5 = CONCAT11(uVar3,uVar3);
        puVar5 = puVar6;
      } while (puVar6 != (undefined2 *)((long)iVar1 * 3 + (long)param_2));
    }
  }
  return;
}



undefined1 png_handle_as_unknown(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (*(int *)(param_1 + 0x3c4) != 0)) {
    piVar2 = (int *)((ulong)(uint)(*(int *)(param_1 + 0x3c4) * 5) + (long)*(int **)(param_1 + 0x3c8)
                    );
    do {
      piVar1 = (int *)((long)piVar2 + -5);
      if (*param_2 == *piVar1) {
        return *(undefined1 *)((long)piVar2 + -1);
      }
      piVar2 = piVar1;
    } while (*(int **)(param_1 + 0x3c8) < piVar1);
  }
  return 0;
}



void png_chunk_unknown_handling(undefined8 param_1,uint param_2)

{
  long in_FS_OFFSET;
  uint local_18;
  undefined1 local_14;
  long local_10;
  
  local_18 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  png_handle_as_unknown(param_1,&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 png_reset_zstream(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = inflateReset(param_1 + 0x140);
    return uVar1;
  }
  return 0xfffffffe;
}



undefined8 png_access_version_number(void)

{
  return 0x2995;
}



void png_zstream_error(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x170) != 0) {
    return;
  }
  switch(param_2) {
  default:
    *(char **)(param_1 + 0x170) = "unexpected zlib return code";
    return;
  case 1:
    *(char **)(param_1 + 0x170) = "unexpected end of LZ stream";
    return;
  case 2:
    *(char **)(param_1 + 0x170) = "missing LZ dictionary";
    return;
  case 0xfffffff9:
    *(char **)(param_1 + 0x170) = "unexpected zlib return";
    return;
  case 0xfffffffa:
    *(char **)(param_1 + 0x170) = "unsupported zlib version";
    return;
  case 0xfffffffb:
    *(char **)(param_1 + 0x170) = "truncated";
    return;
  case 0xfffffffc:
    *(char **)(param_1 + 0x170) = "insufficient memory";
    return;
  case 0xfffffffd:
    *(char **)(param_1 + 0x170) = "damaged LZ stream";
    return;
  case 0xfffffffe:
    *(char **)(param_1 + 0x170) = "bad parameters to zlib";
    return;
  case 0xffffffff:
    *(char **)(param_1 + 0x170) = "zlib IO error";
    return;
  }
}



void png_colorspace_set_gamma(long param_1,int *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = *(ushort *)((long)param_2 + 0x4a);
  if (param_3 - 0x10U < 0x2540be31) {
    if (((*(byte *)(param_1 + 0x12d) & 0x80) == 0) || ((uVar1 & 8) == 0)) {
      if (-1 < (short)uVar1) {
        iVar2 = png_colorspace_check_gamma(param_1,param_2,param_3,1);
        if (iVar2 != 0) {
          *(ushort *)((long)param_2 + 0x4a) = *(ushort *)((long)param_2 + 0x4a) | 9;
          *param_2 = param_3;
          return;
        }
      }
      return;
    }
    pcVar3 = "duplicate";
  }
  else {
    pcVar3 = "gamma value out of range";
  }
  *(ushort *)((long)param_2 + 0x4a) = uVar1 | 0x8000;
  png_chunk_report(param_1,pcVar3,1);
  return;
}



void png_colorspace_sync_info(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 0x7e);
  uVar3 = *(uint *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    *(uint *)(param_2 + 8) = uVar3 & 0xffffe7fa;
    if (param_1 != 0) {
      png_free_data_part_0(param_1,param_2,0x10,0xffffffff);
      return;
    }
  }
  else {
    uVar2 = uVar3 & 0xfffff7ff;
    if ((uVar1 & 0x80) != 0) {
      uVar2 = uVar3 | 0x800;
    }
    uVar3 = uVar2 & 0xfffffffb;
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar2 | 4;
    }
    uVar2 = uVar3 | 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar3 & 0xfffffffe;
    }
    *(uint *)(param_2 + 8) = uVar2;
  }
  return;
}



void png_colorspace_sync(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x4a8);
    uVar2 = *(undefined8 *)(param_1 + 0x4b0);
    uVar3 = *(undefined8 *)(param_1 + 0x4b8);
    uVar4 = *(undefined8 *)(param_1 + 0x4c0);
    uVar5 = *(undefined8 *)(param_1 + 0x4c8);
    uVar6 = *(undefined8 *)(param_1 + 0x4d0);
    uVar7 = *(undefined8 *)(param_1 + 0x4d8);
    uVar8 = *(undefined8 *)(param_1 + 0x4dc);
    uVar9 = *(undefined8 *)(param_1 + 0x4e4);
    *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_1 + 0x4a0);
    *(undefined8 *)(param_2 + 0x3c) = uVar1;
    *(undefined8 *)(param_2 + 100) = uVar6;
    *(undefined8 *)(param_2 + 0x6c) = uVar7;
    *(undefined8 *)(param_2 + 0x44) = uVar2;
    *(undefined8 *)(param_2 + 0x4c) = uVar3;
    *(undefined8 *)(param_2 + 0x54) = uVar4;
    *(undefined8 *)(param_2 + 0x5c) = uVar5;
    *(undefined8 *)(param_2 + 0x70) = uVar8;
    *(undefined8 *)(param_2 + 0x78) = uVar9;
    png_colorspace_sync_info();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 png_colorspace_set_sRGB(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  uVar1 = *(ushort *)((long)param_2 + 0x4a);
  if ((short)uVar1 < 0) {
    return 0;
  }
  pcVar6 = "invalid sRGB rendering intent";
  if (param_3 < 4) {
    if (((uVar1 & 4) == 0) || (*(ushort *)(param_2 + 9) == param_3)) {
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 2) != 0) {
          iVar4 = png_colorspace_endpoints_match(sRGB_xy,(long)param_2 + 4,100);
          if (iVar4 == 0) {
            png_chunk_report(param_1,"cHRM chunk does not match sRGB",2);
          }
        }
        png_colorspace_check_gamma(param_1,param_2,0xb18f,2);
        uVar5 = _LC56;
        *(ushort *)((long)param_2 + 0x4a) = *(ushort *)((long)param_2 + 0x4a) | 0xe7;
        uVar3 = _UNK_00107198;
        uVar2 = __LC57;
        *(short *)(param_2 + 9) = (short)param_3;
        param_2[8] = uVar5;
        uVar5 = 1;
        *param_2 = uVar2;
        param_2[1] = uVar3;
        uVar2 = _UNK_001071a8;
        param_2[2] = __LC58;
        param_2[3] = uVar2;
        uVar2 = _UNK_001071b8;
        param_2[4] = __LC59;
        param_2[5] = uVar2;
        uVar2 = _UNK_001071c8;
        param_2[6] = __LC60;
        param_2[7] = uVar2;
      }
      else {
        png_benign_error(param_1,"duplicate sRGB information ignored");
        uVar5 = 0;
      }
      return uVar5;
    }
    pcVar6 = "inconsistent rendering intents";
  }
  uVar5 = png_icc_profile_error(param_1,param_2,&_LC52,(long)(int)param_3,pcVar6);
  return uVar5;
}



undefined8 png_icc_check_length(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((0x83 < param_4) || (uVar1 = png_icc_profile_error(), (int)uVar1 != 0)) {
    uVar1 = 1;
    if ((*(ulong *)(param_1 + 0x430) != 0) &&
       (uVar1 = 1, *(ulong *)(param_1 + 0x430) < (ulong)param_4)) {
      uVar1 = png_icc_profile_error
                        (param_1,param_2,param_3,(ulong)param_4,"exceeds application limits");
      return uVar1;
    }
  }
  return uVar1;
}



undefined8
png_icc_check_header
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint *param_5,
          uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar1 = *param_5;
  uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar3 != param_4) {
    pcVar4 = "length does not match profile";
    goto LAB_00102779;
  }
  if ((3 < (byte)param_5[2]) && ((uVar1 >> 0x18 & 3) != 0)) {
    pcVar4 = "invalid length";
    goto LAB_00102779;
  }
  uVar1 = param_5[0x20];
  uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if ((0x1555554a < uVar3) || (param_4 < uVar3 * 0xc + 0x84)) {
    pcVar4 = "tag count too large";
    goto LAB_00102779;
  }
  uVar1 = param_5[0x10];
  uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (0xfffe < uVar3) {
    pcVar4 = "invalid rendering intent";
    goto LAB_00102779;
  }
  if (3 < uVar3) {
    png_icc_profile_error(param_1,0,param_3,uVar3,"intent outside defined range");
  }
  uVar1 = param_5[9];
  if (uVar1 != 0x70736361) {
    uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    pcVar4 = "invalid signature";
    goto LAB_00102779;
  }
  if ((*(long *)(param_5 + 0x11) != 0x100d6f60000) || (param_5[0x13] != 0x2dd30000)) {
    png_icc_profile_error(param_1,0,param_3,0,"PCS illuminant is not D50");
  }
  uVar1 = param_5[4];
  if (uVar1 == 0x59415247) {
    pcVar4 = "Gray color space not permitted on RGB PNG";
    uVar3 = 0x47524159;
    if ((param_6 & 2) != 0) goto LAB_00102779;
  }
  else {
    if (uVar1 != 0x20424752) {
      uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      pcVar4 = "invalid ICC profile color space";
      goto LAB_00102779;
    }
    pcVar4 = "RGB color space not permitted on grayscale PNG";
    uVar3 = 0x52474220;
    if ((param_6 & 2) == 0) goto LAB_00102779;
  }
  uVar1 = param_5[3];
  uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 != 0x72746e6d) {
    if (uVar3 < 0x6d6e7473) {
      if (uVar1 == 0x74736261) {
        pcVar4 = "invalid embedded Abstract ICC profile";
        uVar3 = 0x61627374;
        goto LAB_00102779;
      }
      if (uVar1 == 0x6b6e696c) {
        pcVar4 = "unexpected DeviceLink ICC profile class";
        uVar3 = 0x6c696e6b;
        goto LAB_00102779;
      }
LAB_00102874:
      pcVar4 = "unrecognized ICC profile class";
    }
    else {
      if (uVar1 != 0x6c636d6e) {
        if ((0x6e6d636b < uVar3) &&
           (((uVar1 == 0x726e6373 || (uVar1 == 0x63617073)) || (uVar1 == 0x72747270))))
        goto LAB_00102891;
        goto LAB_00102874;
      }
      pcVar4 = "unexpected NamedColor ICC profile class";
      uVar3 = 0x6e6d636c;
    }
    png_icc_profile_error(param_1,0,param_3,uVar3,pcVar4);
  }
LAB_00102891:
  uVar1 = param_5[5];
  if ((uVar1 == 0x2062614c) || (uVar1 == 0x205a5958)) {
    return 1;
  }
  uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  pcVar4 = "unexpected ICC PCS encoding";
LAB_00102779:
  uVar2 = png_icc_profile_error(param_1,param_2,param_3,uVar3,pcVar4);
  return uVar2;
}



undefined8
png_icc_check_tag_table
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = *(uint *)(param_5 + 0x80);
  if (uVar7 != 0) {
    puVar6 = (uint *)(param_5 + 0x84);
    uVar8 = 0;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    do {
      while( true ) {
        uVar1 = puVar6[1];
        uVar4 = *puVar6;
        uVar2 = puVar6[2];
        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        uVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        if ((param_4 < uVar5) ||
           (param_4 - uVar5 <
            (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))) {
          uVar3 = png_icc_profile_error
                            (param_1,param_2,param_3,uVar4,"ICC profile tag outside profile");
          return uVar3;
        }
        if ((uVar1 & 0x3000000) == 0) break;
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 3;
        png_icc_profile_error(param_1,0,param_3,uVar4,"ICC profile tag start not a multiple of 4");
        if (uVar7 <= uVar8) {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar8 < uVar7);
  }
  return 1;
}



void png_icc_set_sRGB(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = png_compare_ICC_profile_with_sRGB(param_1,param_3,param_4);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x40);
  png_colorspace_set_sRGB
            (param_1,param_2,
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  return;
}



undefined8
png_colorspace_set_ICC
          (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5,
          ulong param_6)

{
  uint uVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 0x4a) < 0) {
    return 0;
  }
  if (param_4 < 0x84) {
    iVar2 = png_icc_profile_error();
    param_6 = param_6 & 0xffffffff;
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = png_icc_check_header(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((iVar2 != 0) &&
     (iVar2 = png_icc_check_tag_table(param_1,param_2,param_3,param_4,param_5), iVar2 != 0)) {
    iVar2 = png_compare_ICC_profile_with_sRGB(param_1,param_5,0);
    if (iVar2 != 0) {
      uVar1 = *(uint *)(param_5 + 0x40);
      png_colorspace_set_sRGB
                (param_1,param_2,
                 uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
    }
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_colorspace_set_rgb_coefficients(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  if ((*(char *)(param_1 + 0x3d1) != '\0') || ((*(byte *)(param_1 + 0x4ea) & 2) == 0)) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x4c8);
  uVar3 = *(uint *)(param_1 + 0x4d4);
  uVar2 = *(uint *)(param_1 + 0x4e0);
  iVar4 = uVar1 + uVar3 + uVar2;
  if (((int)uVar1 < 0) || (iVar4 < 1)) {
LAB_00102bd4:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error handling cHRM->XYZ");
  }
  if (uVar1 != 0) {
    dVar6 = ((double)(int)uVar1 * __LC80) / (double)iVar4 + _LC9;
    if ((double)((ulong)dVar6 & _LC12) < _LC10) {
      dVar6 = (double)((ulong)((double)(long)dVar6 -
                              (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                      ~_LC12 & (ulong)dVar6);
    }
    if (((_LC13 < dVar6) || (dVar6 < _LC14)) || (uVar1 = (uint)dVar6, 0x8000 < uVar1))
    goto LAB_00102bd4;
  }
  if ((int)uVar3 < 0) goto LAB_00102bd4;
  if (uVar3 != 0) {
    dVar6 = ((double)(int)uVar3 * __LC80) / (double)iVar4 + _LC9;
    if ((double)((ulong)dVar6 & _LC12) < _LC10) {
      dVar6 = (double)((ulong)((double)(long)dVar6 -
                              (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                      ~_LC12 & (ulong)dVar6);
    }
    if (((_LC13 < dVar6) || (dVar6 < _LC14)) || (uVar3 = (uint)dVar6, 0x8000 < uVar3))
    goto LAB_00102bd4;
  }
  if ((int)uVar2 < 0) goto LAB_00102bd4;
  if (uVar2 != 0) {
    dVar6 = ((double)(int)uVar2 * __LC80) / (double)iVar4 + _LC9;
    if ((double)((ulong)dVar6 & _LC12) < _LC10) {
      dVar6 = (double)((ulong)((double)(long)dVar6 -
                              (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                      ~_LC12 & (ulong)dVar6);
    }
    if (((_LC13 < dVar6) || (dVar6 < _LC14)) || (uVar2 = (uint)dVar6, 0x8000 < uVar2))
    goto LAB_00102bd4;
  }
  iVar4 = uVar3 + uVar1;
  iVar5 = iVar4 + uVar2;
  if (0x8001 < iVar5) goto LAB_00102bd4;
  if (iVar5 == 0x8001) {
    iVar5 = -1;
  }
  else {
    if (iVar5 == 0x8000) goto LAB_00102db1;
    iVar5 = 1;
  }
  if ((int)uVar3 < (int)uVar1) {
    if ((int)uVar1 < (int)uVar2) {
LAB_00102da4:
      uVar2 = uVar2 + iVar5;
    }
    else {
      uVar1 = uVar1 + iVar5;
      iVar4 = uVar1 + uVar3;
    }
  }
  else {
    if ((int)uVar3 < (int)uVar2) goto LAB_00102da4;
    uVar3 = uVar3 + iVar5;
    iVar4 = uVar3 + uVar1;
  }
  if (iVar4 + uVar2 != 0x8000) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error handling cHRM coefficients");
  }
LAB_00102db1:
  *(short *)(param_1 + 0x3d2) = (short)uVar1;
  *(short *)(param_1 + 0x3d4) = (short)uVar3;
  return;
}



void png_check_IHDR(long param_1,uint param_2,uint param_3,ulong param_4,ulong param_5,int param_6,
                   int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = (int)param_2 < 0;
  if (param_2 == 0) {
    png_warning(param_1,"Image width is zero in IHDR");
LAB_00102e44:
    bVar3 = true;
  }
  else {
    if (bVar3) {
      png_warning(param_1,"Invalid image width in IHDR");
    }
    if (*(uint *)(param_1 + 0x424) < param_2) {
      png_warning(param_1,"Image width exceeds user limit in IHDR");
      goto LAB_00102e44;
    }
  }
  if (param_3 == 0) {
    png_warning(param_1,"Image height is zero in IHDR");
LAB_00102f9f:
    bVar3 = true;
  }
  else {
    if ((int)param_3 < 0) {
      bVar3 = true;
      png_warning(param_1,"Invalid image height in IHDR");
      uVar2 = *(uint *)(param_1 + 0x428);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x428);
    }
    if (uVar2 < param_3) {
      png_warning(param_1,"Image height exceeds user limit in IHDR");
      goto LAB_00102f9f;
    }
  }
  uVar2 = (uint)param_4;
  if ((0x10 < uVar2) || ((0xfffffffffffefee9U >> (param_4 & 0x3f) & 1) != 0)) {
    bVar3 = true;
    png_warning(param_1,"Invalid bit depth in IHDR");
  }
  uVar1 = (uint)param_5;
  if (((((int)uVar1 < 0) || (uVar1 == 1)) || (uVar1 == 5)) || (6 < (int)uVar1)) {
    bVar3 = true;
    png_warning(param_1,"Invalid color type in IHDR");
  }
  else if (((uVar1 == 3) && (8 < (int)uVar2)) ||
          (((0x54UL >> (param_5 & 0x3f) & 1) != 0 && ((int)uVar2 < 8)))) {
    bVar3 = true;
    png_warning(param_1,"Invalid color type/bit depth combination in IHDR");
  }
  if (1 < param_6) {
    bVar3 = true;
    png_warning(param_1,"Unknown interlace method in IHDR");
  }
  if (param_7 == 0) {
    if ((*(byte *)(param_1 + 0x12d) & 0x10) == 0) {
LAB_00102fbf:
      if (param_8 != 0) {
LAB_00102fc7:
        if (((((*(byte *)(param_1 + 0x3e0) & 4) == 0) || (param_8 != 0x40)) ||
            ((*(byte *)(param_1 + 0x12d) & 0x10) != 0)) || ((uVar1 & 0xfffffffb) != 2))
        goto LAB_00102f20;
      }
    }
    else {
      if (*(int *)(param_1 + 0x3e0) != 0) {
        png_warning(param_1,"MNG features are not allowed in a PNG datastream");
        goto LAB_00102fbf;
      }
      if (param_8 != 0) goto LAB_00102f20;
    }
    if (!bVar3) {
      return;
    }
  }
  else {
    png_warning(param_1,"Unknown compression method in IHDR");
    if ((*(byte *)(param_1 + 0x12d) & 0x10) == 0) {
      if ((param_8 == 0) ||
         ((((*(byte *)(param_1 + 0x3e0) & 4) != 0 && (param_8 == 0x40)) &&
          ((uVar1 & 0xfffffffb) == 2)))) goto LAB_00102f3c;
    }
    else {
      if (*(int *)(param_1 + 0x3e0) != 0) {
        png_warning(param_1,"MNG features are not allowed in a PNG datastream");
        if (param_8 == 0) goto LAB_00102f3c;
        bVar3 = true;
        goto LAB_00102fc7;
      }
      if (param_8 == 0) goto LAB_00102f3c;
    }
LAB_00102f20:
    png_warning(param_1,"Unknown filter method in IHDR");
    if ((*(byte *)(param_1 + 0x12d) & 0x10) != 0) {
      png_warning(param_1,"Invalid filter method in IHDR");
    }
  }
LAB_00102f3c:
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Invalid IHDR data");
}



bool png_check_fp_number(long param_1,ulong param_2,uint *param_3,ulong *param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_4;
  uVar4 = *param_3;
  if ((param_2 <= uVar3) || (bVar1 = *(char *)(param_1 + uVar3) - 0x2b, 0x3a < bVar1)) {
    *param_3 = uVar4;
    *param_4 = uVar3;
    return (uVar4 & 8) != 0;
  }
  do {
    switch(bVar1) {
    case 0:
      uVar2 = 4;
      uVar5 = 4;
      break;
    default:
switchD_00103191_caseD_1:
      uVar2 = uVar4 & 8;
LAB_001031c5:
      *param_3 = uVar4;
      *param_4 = uVar3;
      return uVar2 != 0;
    case 2:
      uVar2 = 4;
      uVar5 = 0x84;
      break;
    case 3:
      uVar2 = 0x10;
      uVar5 = 0x10;
      break;
    case 5:
      uVar2 = 8;
      uVar5 = 8;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      uVar2 = 8;
      uVar5 = 0x108;
      break;
    case 0x1a:
    case 0x3a:
      uVar2 = 0x20;
      uVar5 = 0x20;
    }
    switch(uVar4 & 3 | uVar2) {
    case 4:
      if ((uVar4 & 0x3c) != 0) goto switchD_00103191_caseD_1;
      uVar4 = uVar4 | uVar5;
      break;
    default:
      goto switchD_00103191_caseD_1;
    case 6:
      if ((uVar4 & 0x3c) != 0) goto switchD_00103191_caseD_1;
      uVar4 = uVar4 | 4;
      break;
    case 8:
      if ((uVar4 & 0x10) != 0) {
        uVar4 = uVar4 & 0x1c0 | 0x11;
      }
      uVar4 = uVar5 | uVar4 | 0x40;
      break;
    case 9:
      uVar4 = uVar5 | uVar4 | 0x40;
      break;
    case 10:
      uVar4 = uVar4 | 0x48;
      break;
    case 0x10:
      uVar2 = uVar4 & 8;
      if ((uVar4 & 0x10) != 0) goto LAB_001031c5;
      if (uVar2 == 0) {
        uVar4 = uVar4 & 0x1c0 | uVar5 | 1;
      }
      else {
        uVar4 = uVar4 | uVar5;
      }
      break;
    case 0x20:
    case 0x21:
      uVar2 = uVar4 & 8;
      if (uVar2 == 0) goto LAB_001031c5;
      uVar4 = uVar4 & 0x1c0 | 2;
    }
    uVar3 = uVar3 + 1;
    if ((param_2 == uVar3) || (bVar1 = *(char *)(param_1 + uVar3) - 0x2b, 0x3a < bVar1))
    goto switchD_00103191_caseD_1;
  } while( true );
}



ulong png_check_fp_string(long param_1,long param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 0;
  local_18 = 0;
  uVar1 = png_check_fp_number(param_1,param_2,&local_1c,&local_18);
  if (((int)uVar1 != 0) &&
     ((local_18 == param_2 || (uVar1 = 0, *(char *)(param_1 + local_18) == '\0')))) {
    uVar1 = (ulong)local_1c;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_ascii_from_fp(double param_1,undefined8 param_2,char *param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong extraout_RDX;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  double dVar18;
  double dVar19;
  uint local_5c;
  double local_58;
  char local_4b [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) {
    uVar16 = 0x14;
    uVar2 = 0xf;
  }
  else {
    uVar2 = 0x10;
    if (param_5 < 0x11) {
      uVar2 = param_5;
    }
    uVar16 = (ulong)(uVar2 + 5);
  }
  if (param_4 < uVar16) {
LAB_0010392d:
                    /* WARNING: Subroutine does not return */
    png_error(param_2,"ASCII conversion buffer too small");
  }
  if (param_1 < 0.0) {
    param_1 = (double)((ulong)param_1 ^ __LC98);
    *param_3 = '-';
    param_4 = param_4 - 1;
    param_3 = param_3 + 1;
  }
  if (param_1 < _LC99) {
    param_3[0] = '0';
    param_3[1] = '\0';
  }
  else if (param_1 <= _LC100) {
    frexp(param_1,(int *)&local_5c);
    uVar8 = 0;
    uVar13 = (int)(local_5c * 0x4d) >> 8;
    uVar16 = (ulong)uVar13;
    local_5c = uVar13;
    dVar18 = (double)png_pow10(uVar13);
    while( true ) {
      uVar14 = (uint)uVar16;
      cVar9 = (char)uVar8;
      if (((_LC99 <= dVar18) && (param_1 <= dVar18)) ||
         (dVar19 = (double)png_pow10(uVar14 + 1), _LC100 < dVar19)) break;
      uVar8 = 1;
      uVar16 = extraout_RDX & 0xffffffff;
      dVar18 = dVar19;
    }
    if (cVar9 != '\0') {
      uVar13 = uVar14;
      local_5c = uVar14;
    }
    for (param_1 = param_1 / dVar18; _LC1 <= param_1; param_1 = param_1 / _LC0) {
      uVar13 = uVar13 + 1;
      local_5c = uVar13;
    }
    uVar15 = 0;
    uVar14 = uVar13;
    if (0xfffffffd < uVar13) {
      local_5c = 0;
      uVar14 = 0;
      uVar15 = -uVar13;
    }
    uVar13 = 0;
    dVar18 = _LC0;
    dVar19 = _LC1;
    uVar16 = _LC12;
    uVar3 = uVar15;
    do {
      uVar10 = uVar15 + uVar13;
      uVar4 = uVar2 + uVar3;
      if (uVar10 + 1 < uVar4) {
        param_1 = modf(param_1 * dVar18,&local_58);
        dVar18 = _LC0;
        dVar19 = _LC1;
        uVar16 = _LC12;
LAB_00103754:
        if (local_58 != 0.0) {
          pcVar7 = param_3 + 1;
          cVar9 = (char)(int)local_58 + '0';
LAB_00103604:
          iVar11 = uVar10 - uVar3;
          if (uVar15 != 0) {
            bVar17 = false;
            uVar13 = uVar14;
            do {
              pcVar7 = param_3;
              if (uVar13 != 0xffffffff) {
                if (uVar13 == 0) {
                  *pcVar7 = '.';
                  param_4 = param_4 - 1;
                  pcVar7 = pcVar7 + 1;
                }
                uVar13 = uVar13 - 1;
                bVar17 = true;
              }
              *pcVar7 = '0';
              param_3 = pcVar7 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            if (bVar17) {
              uVar14 = uVar13;
              local_5c = uVar13;
            }
            pcVar7 = pcVar7 + 2;
          }
          goto LAB_00103656;
        }
        uVar15 = uVar15 + 1;
LAB_0010376c:
        uVar10 = uVar13 + uVar15;
        if (uVar13 == 0) {
          uVar3 = uVar3 + 1;
          uVar4 = uVar2 + uVar3;
          uVar15 = uVar10;
        }
      }
      else {
        local_58 = param_1 * dVar18 + _LC9;
        if ((double)((ulong)local_58 & uVar16) < _LC10) {
          local_58 = (double)((ulong)((double)(long)local_58 -
                                     (double)(-(ulong)(local_58 < (double)(long)local_58) &
                                             (ulong)dVar19)) | ~uVar16 & (ulong)local_58);
        }
        if (local_58 <= __LC101) {
          param_1 = 0.0;
          goto LAB_00103754;
        }
        if (uVar15 != 0) {
          uVar10 = uVar13 + (uVar15 - 1);
          pcVar7 = param_3 + 1;
          pcVar5 = param_3;
          uVar15 = uVar15 - 1;
          if (uVar13 == 0) {
            uVar3 = uVar3 - 1;
            uVar15 = uVar10;
          }
LAB_001035f5:
          cVar9 = '1';
          param_1 = 0.0;
          param_3 = pcVar5;
          local_58 = dVar19;
          goto LAB_00103604;
        }
        bVar17 = false;
        pcVar7 = param_3;
        uVar10 = uVar14;
        if (uVar13 == 0) {
          uVar13 = 0;
LAB_00103858:
          uVar10 = uVar13;
          if (uVar14 == 0xffffffff) {
            pcVar5 = param_3 + -1;
            pcVar7 = param_3;
            if (param_3[-1] == '.') {
              param_4 = param_4 + 1;
              local_5c = 1;
              uVar14 = 1;
            }
          }
          else {
            uVar14 = uVar14 + 1;
            pcVar7 = param_3 + 1;
            pcVar5 = param_3;
            local_5c = uVar14;
          }
          goto LAB_001035f5;
        }
        do {
          iVar11 = (int)pcVar7[-1];
          param_3 = pcVar7 + -1;
          if (uVar10 == 0xffffffff) {
            if (iVar11 == 0x2e) {
              iVar11 = (int)pcVar7[-2];
              param_4 = param_4 + 1;
              param_3 = pcVar7 + -2;
              bVar17 = true;
              uVar10 = 1;
            }
          }
          else {
            uVar10 = uVar10 + 1;
            bVar17 = true;
          }
          iVar11 = iVar11 + -0x2f;
          local_58 = (double)iVar11;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) {
            if (!bVar17) goto LAB_0010388a;
            goto LAB_00103883;
          }
          pcVar7 = param_3;
        } while (9 < iVar11);
        if (bVar17) {
LAB_00103883:
          uVar14 = uVar10;
          local_5c = uVar10;
LAB_0010388a:
          if (9 < iVar11) goto LAB_00103858;
        }
        if (iVar11 == 0) {
          uVar15 = 1;
          param_1 = 0.0;
          goto LAB_0010376c;
        }
        cVar9 = (char)iVar11 + '0';
        pcVar7 = param_3 + 1;
        param_1 = 0.0;
        iVar11 = uVar13 - uVar3;
LAB_00103656:
        if (uVar14 != 0xffffffff) {
          pcVar5 = pcVar7;
          if (uVar14 == 0) {
            *param_3 = '.';
            param_4 = param_4 - 1;
            pcVar5 = pcVar7 + 1;
            param_3 = pcVar7;
          }
          uVar14 = uVar14 - 1;
          pcVar7 = pcVar5;
          local_5c = uVar14;
        }
        *param_3 = cVar9;
        uVar13 = iVar11 + 1;
        uVar3 = 0;
        param_3 = pcVar7;
        uVar15 = 0;
        uVar4 = uVar2;
        uVar10 = uVar13;
      }
    } while ((uVar10 < uVar4) && (_LC99 < param_1));
    if (uVar14 + 1 < 4) {
      if (0 < (int)uVar14) {
        uVar2 = 0;
        do {
          uVar16 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
          param_3[uVar16] = '0';
        } while (uVar2 < uVar14);
        param_3 = param_3 + (int)uVar14;
      }
      *param_3 = '\0';
    }
    else {
      *param_3 = 'E';
      if ((int)uVar14 < 0) {
        param_3[1] = '-';
        param_3 = param_3 + 2;
        uVar16 = (param_4 - uVar13) - 2;
        uVar14 = -uVar14;
      }
      else {
        param_3 = param_3 + 1;
        uVar16 = (param_4 - uVar13) - 1;
      }
      uVar6 = (ulong)uVar14;
      uVar1 = 1;
      do {
        uVar12 = uVar1;
        uVar1 = uVar6 / 10;
        uVar2 = (uint)uVar6;
        cVar9 = (char)uVar6;
        uVar6 = uVar6 / 10;
        local_4b[uVar12] = cVar9 + (char)uVar1 * -10 + '0';
        uVar1 = uVar12 + 1;
      } while (9 < uVar2);
      if (uVar16 <= uVar12) goto LAB_0010392d;
      pcVar7 = local_4b + 1 + ((int)uVar12 - 1);
      pcVar5 = param_3;
      do {
        *pcVar5 = *pcVar7;
        bVar17 = local_4b + 1 != pcVar7;
        pcVar7 = pcVar7 + -1;
        pcVar5 = pcVar5 + 1;
      } while (bVar17);
      param_3[uVar12] = '\0';
    }
  }
  else {
    builtin_strncpy(param_3,"inf",4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void png_ascii_from_fixed(undefined8 param_1,char *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0xd) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ASCII conversion buffer too small");
  }
  iVar10 = (int)param_4;
  if (iVar10 < 0) {
    *param_2 = '-';
    param_4 = (ulong)(uint)-iVar10;
    param_2 = param_2 + 1;
    local_1b[1] = '\0';
    local_1b[2] = '\0';
    local_1b[3] = '\0';
    local_1b[4] = '\0';
    local_1b[5] = '\0';
    local_1b[6] = '\0';
    local_1b[7] = '\0';
    local_1b[8] = '\0';
    local_1b[9] = '\0';
    local_1b[10] = '\0';
  }
  else {
    local_1b[1] = '\0';
    local_1b[2] = '\0';
    local_1b[3] = '\0';
    local_1b[4] = '\0';
    local_1b[5] = '\0';
    local_1b[6] = '\0';
    local_1b[7] = '\0';
    local_1b[8] = '\0';
    local_1b[9] = '\0';
    local_1b[10] = '\0';
    if (iVar10 == 0) {
      *param_2 = '0';
      param_2 = param_2 + 1;
      goto LAB_00103a3d;
    }
  }
  local_1b[9] = '\0';
  local_1b[10] = '\0';
  local_1b[1] = '\0';
  local_1b[2] = '\0';
  local_1b[3] = '\0';
  local_1b[4] = '\0';
  local_1b[5] = '\0';
  local_1b[6] = '\0';
  local_1b[7] = '\0';
  local_1b[8] = '\0';
  uVar2 = 1;
  uVar9 = 0x10;
  do {
    uVar8 = param_4 & 0xffffffff;
    uVar4 = (uint)param_4;
    param_4 = uVar8 / 10;
    iVar10 = uVar4 + (int)(uVar8 / 10) * -10;
    uVar6 = (uint)uVar2;
    uVar8 = uVar2 & 0xffffffff;
    local_1b[uVar2] = (char)iVar10 + '0';
    if ((uVar9 == 0x10) && (iVar10 != 0)) {
      uVar9 = uVar6;
    }
    uVar2 = uVar2 + 1;
  } while (9 < uVar4);
  if (uVar6 < 6) {
    if (5 < uVar9) goto LAB_00103a3d;
    *param_2 = '.';
    pcVar7 = param_2 + 1;
    if (uVar6 != 5) {
      uVar4 = 5 - uVar6;
      if (uVar4 != 0) {
        uVar2 = 0;
        do {
          uVar5 = (int)uVar2 + 1;
          pcVar7[uVar2] = '0';
          uVar2 = (ulong)uVar5;
        } while (uVar5 < uVar4);
      }
      pcVar7 = pcVar7 + uVar4;
      param_2 = pcVar7;
      if (uVar6 < uVar9) goto LAB_00103a3d;
    }
  }
  else {
    pcVar7 = local_1b + (ulong)(uVar6 - 1) + 1;
    pcVar3 = param_2 + (uVar6 - 5);
    do {
      cVar1 = *pcVar7;
      pcVar11 = param_2 + 1;
      pcVar7 = pcVar7 + -1;
      *param_2 = cVar1;
      param_2 = pcVar11;
    } while (pcVar3 != pcVar11);
    param_2 = pcVar3;
    if (5 < uVar9) goto LAB_00103a3d;
    *pcVar3 = '.';
    uVar8 = 5;
    pcVar7 = pcVar3 + 1;
  }
  do {
    uVar6 = (int)uVar8 - 1;
    uVar8 = (ulong)uVar6;
    param_2 = pcVar7 + 1;
    *pcVar7 = local_1b[uVar8 + 1];
    pcVar7 = param_2;
  } while (uVar9 <= uVar6);
LAB_00103a3d:
  *param_2 = '\0';
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int png_fixed(double param_1,int *param_2,int param_3,undefined8 param_4,int param_5)

{
  int extraout_EDX;
  double dVar1;
  
  dVar1 = param_1 * __LC26 + _LC9;
  if ((double)((ulong)dVar1 & _LC12) < _LC10) {
    dVar1 = (double)((ulong)((double)(long)dVar1 -
                            (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                    ~_LC12 & (ulong)dVar1);
  }
  if ((dVar1 <= _LC13) && (_LC14 <= dVar1)) {
    return (int)dVar1;
  }
  png_fixed_error();
  if (param_5 != 0) {
    if ((param_3 == 0) || (extraout_EDX == 0)) {
      *param_2 = 0;
      return 1;
    }
    dVar1 = ((double)extraout_EDX * (double)param_3) / (double)param_5 + _LC9;
    if ((double)((ulong)dVar1 & _LC12) < _LC10) {
      dVar1 = (double)((ulong)((double)(long)dVar1 -
                              (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                      ~_LC12 & (ulong)dVar1);
    }
    if ((dVar1 <= _LC13) && (_LC14 <= dVar1)) {
      *param_2 = (int)dVar1;
      return 1;
    }
    param_5 = 0;
  }
  return param_5;
}



int png_muldiv(int *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  
  if (param_4 != 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      *param_1 = 0;
      return 1;
    }
    dVar1 = ((double)param_3 * (double)param_2) / (double)param_4 + _LC9;
    if ((double)((ulong)dVar1 & _LC12) < _LC10) {
      dVar1 = (double)((ulong)((double)(long)dVar1 -
                              (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                      ~_LC12 & (ulong)dVar1);
    }
    if ((dVar1 <= _LC13) && (_LC14 <= dVar1)) {
      *param_1 = (int)dVar1;
      return 1;
    }
    param_4 = 0;
  }
  return param_4;
}



int png_muldiv_warn(undefined8 param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  
  if (param_4 != 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      return 0;
    }
    dVar1 = ((double)param_3 * (double)param_2) / (double)param_4 + _LC9;
    if ((double)((ulong)dVar1 & _LC12) < _LC10) {
      dVar1 = (double)((ulong)((double)(long)dVar1 -
                              (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                      ~_LC12 & (ulong)dVar1);
    }
    if ((dVar1 <= _LC13) && (_LC14 <= dVar1)) {
      return (int)dVar1;
    }
  }
  png_warning(param_1,"fixed point overflow ignored");
  return 0;
}



int png_reciprocal(int param_1)

{
  double dVar1;
  
  dVar1 = _LC106 / (double)param_1 + _LC9;
  if ((double)((ulong)dVar1 & _LC12) < _LC10) {
    dVar1 = (double)((ulong)((double)(long)dVar1 -
                            (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                    ~_LC12 & (ulong)dVar1);
  }
  if ((dVar1 <= _LC13) && (_LC14 <= dVar1)) {
    return (int)dVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool png_XYZ_from_xy(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 extraout_RDX;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  double dVar18;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  long local_40;
  ulong uVar14;
  
  uVar9 = *param_2;
  uVar12 = (ulong)uVar9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((uVar9 < 0x1adb1) && (uVar13 = param_2[1], -1 < (int)uVar13)) &&
       ((int)uVar13 <= (int)(110000 - uVar9))) &&
      ((uVar1 = param_2[2], uVar1 < 0x1adb1 && (uVar2 = param_2[3], -1 < (int)uVar2)))) &&
     (((((int)uVar2 <= (int)(110000 - uVar1) &&
        ((uVar3 = param_2[4], uVar3 < 0x1adb1 && (uVar4 = param_2[5], -1 < (int)uVar4)))) &&
       ((int)uVar4 <= (int)(110000 - uVar3))) &&
      (((uVar5 = param_2[6], uVar5 < 0x1adb1 && (uVar6 = param_2[7], 4 < (int)uVar6)) &&
       ((int)uVar6 <= (int)(110000 - uVar5))))))) {
    local_44 = 0;
    uVar13 = uVar13 - uVar4;
    uVar14 = (ulong)uVar13;
    iVar11 = uVar1 - uVar3;
    if ((iVar11 == 0) || (uVar13 == 0)) {
      local_4c = 0;
    }
    else {
      dVar18 = (double)(int)uVar13 * (double)iVar11 * __LC107 + _LC9;
      if ((double)((ulong)dVar18 & _LC12) < _LC10) {
        dVar18 = (double)((ulong)((double)(long)dVar18 -
                                 (double)(-(ulong)(dVar18 < (double)(long)dVar18) & _LC1)) |
                         ~_LC12 & (ulong)dVar18);
      }
      if ((_LC13 < dVar18) || (dVar18 < _LC14)) goto LAB_001042e0;
      local_4c = (int)dVar18;
    }
    iVar16 = uVar9 - uVar3;
    iVar10 = uVar2 - uVar4;
    iVar15 = local_4c;
    if ((iVar10 == 0) || (iVar16 == 0)) {
      local_48 = 0;
      goto LAB_0010408b;
    }
    dVar18 = (double)iVar16 * (double)iVar10 * __LC107 + _LC9;
    if ((double)((ulong)dVar18 & _LC12) < _LC10) {
      dVar18 = (double)((ulong)((double)(long)dVar18 -
                               (double)(-(ulong)(dVar18 < (double)(long)dVar18) & _LC1)) |
                       ~_LC12 & (ulong)dVar18);
    }
    if ((dVar18 <= _LC13) && (_LC14 <= dVar18)) {
      local_48 = (int)dVar18;
      if (local_48 < 1) {
        if (local_48 == 0) goto LAB_0010408b;
        if (local_4c <= local_48 + 0x7fffffff) goto LAB_00104088;
      }
      else if (local_48 + -0x7fffffff <= local_4c) {
LAB_00104088:
        iVar15 = local_4c - local_48;
LAB_0010408b:
        iVar11 = png_muldiv_part_0(&local_4c,iVar11,uVar6 - uVar4,8,param_2,param_1);
        if (iVar11 != 0) {
          iVar11 = png_muldiv_part_0(&local_48,iVar10,uVar5 - uVar3,8);
          if (iVar11 != 0) {
            iVar11 = png_fp_sub(local_4c,local_48,&local_44);
            if (((((iVar11 != 0) &&
                  (iVar11 = png_muldiv_part_0(&local_54,uVar6,iVar15,iVar11), iVar11 != 0)) &&
                 (local_44 == 0)) &&
                ((((int)uVar6 < local_54 &&
                  (iVar11 = png_muldiv_part_0(&local_4c,uVar14 & 0xffffffff,uVar5 - uVar3,8),
                  iVar11 != 0)) &&
                 ((iVar11 = png_muldiv_part_0(&local_48,iVar16,uVar6 - uVar4), iVar11 != 0 &&
                  ((iVar11 = png_fp_sub(local_4c,local_48,&local_44), iVar11 != 0 &&
                   (iVar11 = png_muldiv_part_0(&local_50,uVar6,iVar15,iVar11), iVar11 != 0))))))))
               && ((local_44 == 0 && ((int)uVar6 < local_50)))) {
              uVar7 = png_reciprocal(local_50);
              uVar8 = png_reciprocal(local_54);
              uVar8 = png_reciprocal(uVar6,uVar8);
              uVar8 = png_fp_sub(uVar8);
              uVar9 = png_fp_sub(uVar8,uVar7);
              uVar14 = (ulong)uVar9;
              if ((((local_44 == 0) && (0 < (int)uVar9)) &&
                  (iVar11 = png_muldiv_part_0(param_1,uVar12 & 0xffffffff,100000,local_54),
                  iVar11 != 0)) && (iVar11 = png_muldiv_part_0(param_1 + 4,param_2[1]), iVar11 != 0)
                 ) {
                iVar15 = 100000;
                iVar11 = png_muldiv_part_0(param_1 + 8,(100000 - *param_2) - param_2[1]);
                if ((((iVar11 != 0) &&
                     (iVar11 = png_muldiv_part_0(param_1 + 0xc,param_2[2],extraout_RDX,local_50),
                     iVar11 != 0)) &&
                    ((iVar11 = png_muldiv_part_0(param_1 + 0x10,param_2[3]), iVar11 != 0 &&
                     ((iVar11 = png_muldiv_part_0(param_1 + 0x14,(iVar15 - param_2[2]) - param_2[3])
                      , iVar11 != 0 &&
                      (iVar11 = png_muldiv_part_0(param_1 + 0x18,param_2[4],uVar14 & 0xffffffff,
                                                  100000), iVar11 != 0)))))) &&
                   (iVar11 = png_muldiv_part_0(param_1 + 0x1c,param_2[5]), iVar11 != 0)) {
                  iVar11 = png_muldiv_part_0(param_1 + 0x20,(100000 - param_2[4]) - param_2[5]);
                  bVar17 = iVar11 == 0;
                  goto LAB_001042e5;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001042e0:
  bVar17 = true;
LAB_001042e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar17;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
png_colorspace_set_endpoints(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  uVar4 = param_3[2];
  uVar1 = param_3[3];
  uVar2 = *param_3;
  uStack_90 = param_3[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = *(undefined4 *)(param_3 + 4);
  uStack_80._4_4_ = (int)((ulong)uVar1 >> 0x20);
  iVar3 = uStack_80._4_4_;
  local_88._0_4_ = (int)uVar4;
  local_98._4_4_ = (int)((ulong)uVar2 >> 0x20);
  if ((int)local_88 < 1) {
    iVar5 = uStack_80._4_4_;
    if ((int)local_88 == 0) goto LAB_001043e5;
    if (-0x7fffffff - (int)local_88 <= uStack_80._4_4_) goto LAB_001043e1;
  }
  else if (uStack_80._4_4_ <= 0x7fffffff - (int)local_88) {
LAB_001043e1:
    iVar5 = uStack_80._4_4_ + (int)local_88;
LAB_001043e5:
    if (local_98._4_4_ < 1) {
      if (local_98._4_4_ == 0) goto LAB_001043fc;
      if (-0x7fffffff - local_98._4_4_ <= iVar5) goto LAB_001043f9;
    }
    else if (iVar5 <= 0x7fffffff - local_98._4_4_) {
LAB_001043f9:
      iVar5 = iVar5 + local_98._4_4_;
LAB_001043fc:
      if (iVar5 == 100000) {
LAB_00104409:
        uStack_80 = uVar1;
        local_88 = uVar4;
        local_98 = uVar2;
        iVar3 = png_xy_from_XYZ(local_d8,&local_98);
        if (iVar3 == 0) {
          local_48 = local_78[0];
          local_68 = local_98;
          uStack_60 = uStack_90;
          local_58 = local_88;
          uStack_50 = uStack_80;
          iVar3 = png_XYZ_from_xy(&local_68,local_d8);
          if (iVar3 == 0) {
            iVar3 = png_xy_from_XYZ(local_b8,&local_68);
            if (iVar3 == 0) {
              iVar3 = png_colorspace_endpoints_match(local_d8,local_b8,5);
              uVar2 = local_98;
              uVar4 = local_88;
              uVar1 = uStack_80;
              if (iVar3 != 0) {
                uVar4 = png_colorspace_set_xy_and_XYZ(param_1,param_2,local_d8,&local_98,param_4);
                goto LAB_0010439d;
              }
              goto LAB_00104386;
            }
          }
        }
        uVar2 = local_98;
        uVar4 = local_88;
        uVar1 = uStack_80;
        if (iVar3 != 1) {
          *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"internal error checking chromaticities");
        }
      }
      else {
        local_98._0_4_ = (int)uVar2;
        if (iVar5 != 0) {
          if ((int)local_98 != 0) {
            dVar6 = ((double)(int)local_98 * __LC26) / (double)iVar5 + _LC9;
            if ((double)((ulong)dVar6 & _LC12) < _LC10) {
              dVar6 = (double)((ulong)((double)(long)dVar6 -
                                      (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                              ~_LC12 & (ulong)dVar6);
            }
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            local_98._0_4_ = (int)dVar6;
          }
          if (local_98._4_4_ != 0) {
            dVar6 = ((double)local_98._4_4_ * __LC26) / (double)iVar5 + _LC9;
            if ((double)((ulong)dVar6 & _LC12) < _LC10) {
              dVar6 = (double)((ulong)((double)(long)dVar6 -
                                      (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                              ~_LC12 & (ulong)dVar6);
            }
            uVar2 = local_98;
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            local_98._4_4_ = (int)dVar6;
          }
          uVar2 = local_98;
          if ((int)uStack_90 != 0) {
            dVar6 = ((double)(int)uStack_90 * __LC26) / (double)iVar5 + _LC9;
            if ((double)((ulong)dVar6 & _LC12) < _LC10) {
              dVar6 = (double)((ulong)((double)(long)dVar6 -
                                      (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                              ~_LC12 & (ulong)dVar6);
            }
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            uStack_90._4_4_ = (int)((ulong)uStack_90 >> 0x20);
            uStack_90 = CONCAT44(uStack_90._4_4_,(int)dVar6);
          }
          if (uStack_90._4_4_ != 0) {
            dVar6 = ((double)uStack_90._4_4_ * __LC26) / (double)iVar5 + _LC9;
            if ((double)((ulong)dVar6 & _LC12) < _LC10) {
              dVar6 = (double)((ulong)((double)(long)dVar6 -
                                      (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                              ~_LC12 & (ulong)dVar6);
            }
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            uStack_90 = CONCAT44((int)dVar6,(int)uStack_90);
          }
          if ((int)local_88 != 0) {
            dVar6 = ((double)(int)local_88 * __LC26) / (double)iVar5 + _LC9;
            if ((double)((ulong)dVar6 & _LC12) < _LC10) {
              dVar6 = (double)((ulong)((double)(long)dVar6 -
                                      (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                              ~_LC12 & (ulong)dVar6);
            }
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            local_88._0_4_ = (int)dVar6;
          }
          local_88._4_4_ = (int)((ulong)uVar4 >> 0x20);
          if (local_88._4_4_ != 0) {
            dVar6 = ((double)local_88._4_4_ * __LC26) / (double)iVar5 + _LC9;
            if ((double)((ulong)dVar6 & _LC12) < _LC10) {
              dVar6 = (double)((ulong)((double)(long)dVar6 -
                                      (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                              ~_LC12 & (ulong)dVar6);
            }
            uVar4 = local_88;
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            local_88 = CONCAT44((int)dVar6,(int)local_88);
          }
          uStack_80._0_4_ = (int)uVar1;
          if ((int)uStack_80 != 0) {
            dVar6 = ((double)(int)uStack_80 * __LC26) / (double)iVar5 + _LC9;
            if ((double)((ulong)dVar6 & _LC12) < _LC10) {
              dVar6 = (double)((ulong)((double)(long)dVar6 -
                                      (double)(-(ulong)(dVar6 < (double)(long)dVar6) & _LC1)) |
                              ~_LC12 & (ulong)dVar6);
            }
            uVar4 = local_88;
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            uStack_80 = CONCAT44(uStack_80._4_4_,(int)dVar6);
            uVar1 = uStack_80;
          }
          uStack_80 = uVar1;
          if (iVar3 != 0) {
            dVar6 = floor(((double)iVar3 * __LC26) / (double)iVar5 + _LC9);
            uVar2 = local_98;
            uVar4 = local_88;
            uVar1 = uStack_80;
            if ((_LC13 < dVar6) || (dVar6 < _LC14)) goto LAB_00104386;
            iVar3 = (int)dVar6;
          }
          uStack_80 = CONCAT44(iVar3,(int)uStack_80);
          iVar3 = png_muldiv_part_0(local_78,local_78[0],100000,iVar5);
          uVar2 = local_98;
          uVar4 = local_88;
          uVar1 = uStack_80;
          if (iVar3 != 0) goto LAB_00104409;
        }
      }
    }
  }
LAB_00104386:
  uStack_80 = uVar1;
  local_88 = uVar4;
  local_98 = uVar2;
  *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  png_benign_error(param_1,"invalid end points");
  uVar4 = 0;
LAB_0010439d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8
png_colorspace_set_chromaticities
          (undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = png_XYZ_from_xy(local_68,param_3);
  if (iVar1 == 0) {
    iVar1 = png_xy_from_XYZ(auStack_88,local_68);
    if (iVar1 != 0) goto LAB_00104a82;
    iVar1 = png_colorspace_endpoints_match(param_3,auStack_88,5);
    if (iVar1 != 0) {
      uVar2 = png_colorspace_set_xy_and_XYZ(param_1,param_2,param_3,local_68,param_4);
      goto LAB_00104aa2;
    }
  }
  else {
LAB_00104a82:
    if (iVar1 != 1) {
      *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal error checking chromaticities");
    }
  }
  *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  png_benign_error(param_1,"invalid chromaticities");
  uVar2 = 0;
LAB_00104aa2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool png_gamma_significant(int param_1)

{
  return 10000 < param_1 - 95000U;
}



int png_reciprocal2(int param_1,int param_2)

{
  double dVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    dVar1 = (_LC111 / (double)param_1) / (double)param_2 + _LC9;
    if ((double)((ulong)dVar1 & _LC12) < _LC10) {
      dVar1 = (double)((ulong)((double)(long)dVar1 -
                              (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                      ~_LC12 & (ulong)dVar1);
    }
    if ((dVar1 <= _LC13) && (_LC14 <= dVar1)) {
      return (int)dVar1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int png_gamma_8bit_correct(int param_1,int param_2)

{
  double dVar1;
  
  if (0xfd < param_1 - 1U) {
    return param_1;
  }
  dVar1 = pow((double)param_1 / __LC16,(double)param_2 * _LC7);
  dVar1 = dVar1 * __LC16 + _LC9;
  if (_LC10 <= (double)((ulong)dVar1 & _LC12)) {
    return (int)dVar1;
  }
  return (int)(double)((ulong)((double)(long)dVar1 -
                              (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                      ~_LC12 & (ulong)dVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int png_gamma_16bit_correct(int param_1,int param_2)

{
  double dVar1;
  
  if (0xfffd < param_1 - 1U) {
    return param_1;
  }
  dVar1 = pow((double)param_1 / __LC8,(double)param_2 * _LC7);
  dVar1 = dVar1 * __LC8 + _LC9;
  if (_LC10 <= (double)((ulong)dVar1 & _LC12)) {
    return (int)dVar1;
  }
  return (int)(double)((ulong)((double)(long)dVar1 -
                              (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                      ~_LC12 & (ulong)dVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint png_gamma_correct(long param_1,uint param_2,int param_3)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x268) == '\b') {
    if (param_2 - 1 < 0xfe) {
      dVar1 = pow((double)(int)param_2 / __LC16,(double)param_3 * _LC7);
      dVar1 = dVar1 * __LC16 + _LC9;
      if ((double)((ulong)dVar1 & _LC12) < _LC10) {
        dVar1 = (double)((ulong)((double)(long)dVar1 -
                                (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                        ~_LC12 & (ulong)dVar1);
      }
      param_2 = (uint)dVar1;
    }
    return param_2 & 0xff;
  }
  if (0xfffd < param_2 - 1) {
    return param_2;
  }
  dVar1 = pow((double)(int)param_2 / __LC8,(double)param_3 * _LC7);
  dVar1 = dVar1 * __LC8 + _LC9;
  if ((double)((ulong)dVar1 & _LC12) < _LC10) {
    dVar1 = (double)((ulong)((double)(long)dVar1 -
                            (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                    ~_LC12 & (ulong)dVar1);
  }
  return (int)dVar1;
}



void png_destroy_gamma_table(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  png_free(param_1,*(undefined8 *)(param_1 + 0x2a8));
  lVar3 = *(long *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (lVar3 != 0) {
    iVar4 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x2a0) & 0x1f);
    if (0 < iVar4) {
      lVar2 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + lVar2);
        lVar2 = lVar2 + 8;
        png_free(param_1,*puVar1);
        lVar3 = *(long *)(param_1 + 0x2b0);
      } while (lVar2 != (long)iVar4 * 8);
    }
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  png_free(param_1,*(undefined8 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  png_free(param_1,*(undefined8 *)(param_1 + 0x2c0));
  lVar3 = *(long *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (lVar3 != 0) {
    iVar4 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x2a0) & 0x1f);
    if (0 < iVar4) {
      lVar2 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + lVar2);
        lVar2 = lVar2 + 8;
        png_free(param_1,*puVar1);
        lVar3 = *(long *)(param_1 + 0x2c8);
      } while ((long)iVar4 * 8 != lVar2);
    }
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    iVar4 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x2a0) & 0x1f);
    if (0 < iVar4) {
      lVar2 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + lVar2);
        lVar2 = lVar2 + 8;
        png_free(param_1,*puVar1);
        lVar3 = *(long *)(param_1 + 0x2d0);
      } while ((long)iVar4 * 8 != lVar2);
    }
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_build_gamma_table(long param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  byte bVar8;
  ulong uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  byte bVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double local_80;
  ulong local_78;
  double local_68;
  int local_60;
  double local_58;
  byte local_4c;
  
  if ((*(long *)(param_1 + 0x2a8) != 0) || (*(long *)(param_1 + 0x2b0) != 0)) {
    png_warning(param_1,"gamma table being rebuilt");
    png_destroy_gamma_table(param_1);
  }
  iVar11 = *(int *)(param_1 + 0x2a4);
  if (param_2 < 9) {
    iVar12 = 100000;
    if ((0 < iVar11) && (iVar12 = *(int *)(param_1 + 0x4a0), iVar12 != 0)) {
      dVar22 = (_LC111 / (double)iVar12) / (double)iVar11 + _LC9;
      if ((double)((ulong)dVar22 & _LC12) < _LC10) {
        dVar22 = (double)((ulong)((double)(long)dVar22 -
                                 (double)(-(ulong)(dVar22 < (double)(long)dVar22) & _LC1)) |
                         ~_LC12 & (ulong)dVar22);
      }
      if ((_LC13 < dVar22) || (dVar22 < _LC14)) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)dVar22;
      }
    }
    png_build_8bit_table(param_1,param_1 + 0x2a8,iVar12);
    uVar9 = _LC12;
    dVar3 = _LC106;
    dVar2 = _LC13;
    dVar1 = _LC10;
    dVar22 = _LC9;
    if ((*(uint *)(param_1 + 0x134) & 0x600080) == 0) {
      return;
    }
    dVar23 = _LC106 / (double)*(int *)(param_1 + 0x4a0) + _LC9;
    if ((double)((ulong)dVar23 & _LC12) < _LC10) {
      dVar23 = (double)((ulong)((double)(long)dVar23 -
                               (double)(-(ulong)(dVar23 < (double)(long)dVar23) & _LC1)) |
                       ~_LC12 & (ulong)dVar23);
    }
    if ((_LC13 < dVar23) || (dVar23 < _LC14)) {
      iVar11 = 0;
    }
    else {
      iVar11 = (int)dVar23;
    }
    png_build_8bit_table(param_1,param_1 + 0x2c0,iVar11);
    if (*(int *)(param_1 + 0x2a4) < 1) {
      iVar11 = *(int *)(param_1 + 0x4a0);
    }
    else {
      dVar22 = dVar22 + dVar3 / (double)*(int *)(param_1 + 0x2a4);
      if ((double)((ulong)dVar22 & uVar9) < dVar1) {
        dVar22 = (double)((ulong)((double)(long)dVar22 -
                                 (double)(-(ulong)(dVar22 < (double)(long)dVar22) & _LC1)) |
                         ~uVar9 & (ulong)dVar22);
      }
      if ((dVar2 < dVar22) || (dVar22 < _LC14)) {
        iVar11 = 0;
      }
      else {
        iVar11 = (int)dVar22;
      }
    }
    png_build_8bit_table(param_1,param_1 + 0x2b8,iVar11);
    return;
  }
  if ((*(byte *)(param_1 + 0x267) & 2) == 0) {
    bVar20 = *(byte *)(param_1 + 0x2db);
  }
  else {
    bVar20 = *(byte *)(param_1 + 0x2d9);
    if (*(byte *)(param_1 + 0x2d9) < *(byte *)(param_1 + 0x2d8)) {
      bVar20 = *(byte *)(param_1 + 0x2d8);
    }
    if (bVar20 < *(byte *)(param_1 + 0x2da)) {
      bVar20 = *(byte *)(param_1 + 0x2da);
    }
  }
  uVar15 = *(uint *)(param_1 + 0x134) & 0x4000400;
  if ((byte)(bVar20 - 1) < 0xf) {
    bVar20 = 0x10 - bVar20;
    if (uVar15 == 0) {
      local_4c = 8;
      if (bVar20 < 9) {
        local_4c = bVar20;
      }
      uVar15 = (uint)local_4c;
      goto LAB_00105647;
    }
    if (bVar20 < 5) goto LAB_001051e5;
    local_4c = 8;
    if (bVar20 < 9) {
      local_4c = bVar20;
    }
    bVar8 = 8 - local_4c;
    *(uint *)(param_1 + 0x2a0) = (uint)local_4c;
    uVar13 = 1 << (bVar8 & 0x1f);
    lVar16 = (ulong)uVar13 << 3;
    local_60 = (1 << (0x10 - local_4c & 0x1f)) + -1;
    uVar15 = uVar13 << 8;
    uVar6 = 0xff >> (local_4c & 0x1f);
    bVar5 = bVar8;
    bVar20 = local_4c;
    if (iVar11 < 1) goto LAB_00105883;
LAB_0010522a:
    local_4c = bVar20;
    bVar8 = bVar5;
    local_58 = _LC7;
    local_68 = _LC10;
    local_80 = _LC9;
    dVar22 = (double)iVar11 * (double)*(int *)(param_1 + 0x4a0) * _LC7 + _LC9;
    local_78 = _LC12;
    if ((double)((ulong)dVar22 & _LC12) < _LC10) {
      dVar22 = (double)((ulong)((double)(long)dVar22 -
                               (double)(-(ulong)(dVar22 < (double)(long)dVar22) & _LC1)) |
                       ~_LC12 & (ulong)dVar22);
    }
    if ((_LC13 < dVar22) || (dVar22 < _LC14)) {
      iVar11 = 0;
    }
    else {
      iVar11 = (int)dVar22;
    }
  }
  else {
    if (uVar15 == 0) {
      local_4c = 0;
      uVar15 = 0;
LAB_00105647:
      *(uint *)(param_1 + 0x2a0) = uVar15;
      uVar9 = 100000;
      if (0 < iVar11) {
        uVar13 = *(uint *)(param_1 + 0x4a0);
        uVar9 = (ulong)uVar13;
        if (uVar13 != 0) {
          dVar22 = (_LC111 / (double)(int)uVar13) / (double)iVar11 + _LC9;
          if ((double)((ulong)dVar22 & _LC12) < _LC10) {
            dVar22 = (double)((ulong)((double)(long)dVar22 -
                                     (double)(-(ulong)(dVar22 < (double)(long)dVar22) & _LC1)) |
                             ~_LC12 & (ulong)dVar22);
          }
          if ((_LC13 < dVar22) || (dVar22 < _LC14)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (ulong)(uint)(int)dVar22;
          }
        }
      }
      png_build_16bit_table(param_1,param_1 + 0x2b0,uVar15,uVar9);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      goto LAB_00105496;
    }
LAB_001051e5:
    uVar15 = 0x800;
    lVar16 = 0x40;
    local_60 = 0x7ff;
    local_4c = 5;
    bVar20 = local_4c;
    local_4c = 5;
    uVar6 = 7;
    uVar13 = 8;
    bVar8 = 3;
    *(undefined4 *)(param_1 + 0x2a0) = 5;
    bVar5 = 3;
    if (0 < iVar11) goto LAB_0010522a;
LAB_00105883:
    local_80 = _LC9;
    iVar11 = 100000;
    local_68 = _LC10;
    local_78 = _LC12;
    local_58 = _LC7;
  }
  lVar14 = 0;
  _LC7 = local_58;
  _LC9 = local_80;
  _LC10 = local_68;
  _LC12 = local_78;
  lVar16 = png_calloc(param_1,lVar16);
  *(long *)(param_1 + 0x2b0) = lVar16;
  do {
    uVar7 = png_malloc(param_1,0x200);
    *(undefined8 *)(lVar16 + lVar14 * 8) = uVar7;
    lVar14 = lVar14 + 1;
  } while ((uint)lVar14 < uVar13);
  uVar13 = 0;
  uVar19 = 0x80;
  do {
    dVar22 = pow((double)uVar19 / __LC8,(double)iVar11 * local_58);
    dVar22 = dVar22 * __LC8 + local_80;
    if ((double)((ulong)dVar22 & local_78) < local_68) {
      dVar22 = (double)((ulong)((double)(long)dVar22 -
                               (double)(-(ulong)(dVar22 < (double)(long)dVar22) & _LC1)) |
                       ~local_78 & (ulong)dVar22);
    }
    uVar17 = ((int)dVar22 & 0xffffU) * local_60 + 0x8000;
    uVar18 = uVar17 / 0xffff + 1;
    uVar4 = uVar13;
    if (uVar13 < uVar18) {
      do {
        *(ushort *)
         (*(long *)(lVar16 + (ulong)(uVar13 & uVar6) * 8) + (ulong)(uVar13 >> (bVar8 & 0x1f)) * 2) =
             uVar19 - 0x80;
        bVar21 = uVar17 / 0xffff != uVar13;
        uVar13 = uVar13 + 1;
        uVar4 = uVar18;
      } while (bVar21);
    }
    uVar13 = uVar4;
    uVar19 = uVar19 + 0x101;
  } while (uVar19 != 0x7f);
  uVar10 = 0;
  if (uVar13 < uVar15) {
    do {
      uVar6 = 0xff >> (local_4c & 0x1f) & uVar13;
      uVar17 = uVar13 >> (bVar8 & 0x1f);
      uVar13 = uVar13 + 1;
      *(undefined2 *)(*(long *)(lVar16 + (ulong)uVar6 * 8) + (ulong)uVar17 * 2) = 0xffff;
      uVar10 = 0;
    } while (uVar13 != uVar15);
  }
LAB_00105496:
  uVar9 = _LC12;
  dVar3 = _LC106;
  dVar2 = _LC13;
  dVar1 = _LC10;
  dVar22 = _LC9;
  if ((*(uint *)(param_1 + 0x134) & 0x600080) == 0) {
    return;
  }
  dVar23 = _LC106 / (double)*(int *)(param_1 + 0x4a0) + _LC9;
  if ((double)((ulong)dVar23 & _LC12) < _LC10) {
    dVar23 = (double)((ulong)((double)(long)dVar23 -
                             (double)(-(ulong)(dVar23 < (double)(long)dVar23) & _LC1)) |
                     ~_LC12 & (ulong)dVar23);
  }
  if ((_LC13 < dVar23) || (dVar23 < _LC14)) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT44(uVar10,(int)dVar23);
  }
  png_build_16bit_table(param_1,param_1 + 0x2d0,local_4c,uVar7);
  if (*(int *)(param_1 + 0x2a4) < 1) {
    iVar11 = *(int *)(param_1 + 0x4a0);
  }
  else {
    dVar22 = dVar3 / (double)*(int *)(param_1 + 0x2a4) + dVar22;
    if ((double)((ulong)dVar22 & uVar9) < dVar1) {
      dVar22 = (double)((ulong)((double)(long)dVar22 -
                               (double)(-(ulong)(dVar22 < (double)(long)dVar22) & _LC1)) |
                       ~uVar9 & (ulong)dVar22);
    }
    if ((dVar2 < dVar22) || (dVar22 < _LC14)) {
      iVar11 = 0;
    }
    else {
      iVar11 = (int)dVar22;
    }
  }
  png_build_16bit_table(param_1,param_1 + 0x2c8,local_4c,iVar11);
  return;
}



uint png_set_option(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = (byte)param_2;
  if ((param_1 == 0) || (0xd < param_2)) {
    param_2 = 1;
  }
  else {
    param_2 = param_2 & 1;
    if (param_2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x388);
      uVar4 = 3 << (bVar3 & 0x1f);
      uVar2 = 2 << (bVar3 & 0x1f);
      if (param_3 != 0) {
        uVar2 = uVar4;
      }
      *(uint *)(param_1 + 0x388) = ~uVar4 & uVar1 | uVar2;
      return (int)(uVar4 & uVar1) >> (bVar3 & 0x1f);
    }
  }
  return param_2;
}



void png_image_free(long *param_1)

{
  long *plVar1;
  long lVar2;
  FILE *__stream;
  long in_FS_OFFSET;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  ulong uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (long *)0x0) && (plVar1 = (long *)*param_1, plVar1 != (long *)0x0)) &&
     (plVar1[2] == 0)) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      if ((*(byte *)(plVar1 + 5) & 2) != 0) {
        __stream = *(FILE **)(lVar2 + 0x108);
        *(byte *)(plVar1 + 5) = *(byte *)(plVar1 + 5) & 0xfd;
        if (__stream != (FILE *)0x0) {
          *(undefined8 *)(lVar2 + 0x108) = 0;
          fclose(__stream);
        }
      }
      local_58 = *plVar1;
      lStack_50 = plVar1[1];
      local_48 = plVar1[2];
      lStack_40 = plVar1[3];
      local_38 = plVar1[4];
      uStack_30 = plVar1[5];
      *param_1 = (long)&local_58;
      png_free(local_58,plVar1);
      if ((uStack_30 & 1) == 0) {
        png_destroy_read_struct(&local_58,&lStack_50,0);
      }
      else {
        png_destroy_write_struct(&local_58);
      }
    }
    *param_1 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 png_image_error(long param_1,undefined8 param_2)

{
  png_safecat(param_1 + 0x24,0x40,0,param_2);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  png_image_free(param_1);
  return 0;
}



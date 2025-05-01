
void vorbis_bitrate_init(long param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = (undefined1  [16])0x0;
  param_2[1] = (undefined1  [16])0x0;
  param_2[2] = (undefined1  [16])0x0;
  param_2[3] = (undefined1  [16])0x0;
  param_2[4] = (undefined1  [16])0x0;
  uVar6 = _LC1;
  dVar1 = _LC0;
  lVar7 = plVar2[0x2ab];
  if (0 < lVar7) {
    lVar3 = plVar2[1];
    lVar4 = *plVar2;
    lVar5 = plVar2[0x2a8];
    dVar9 = (double)*(long *)(param_1 + 8);
    *(undefined4 *)*param_2 = 1;
    dVar10 = (double)(int)(lVar4 >> 1);
    dVar8 = ((double)lVar5 * dVar10) / dVar9;
    *(long *)param_2[3] = lVar3 / lVar4;
    if ((double)((ulong)dVar8 & uVar6) < dVar1) {
      dVar8 = (double)((ulong)(((double)((ulong)dVar8 & uVar6) + dVar1) - dVar1) |
                      ~uVar6 & (ulong)dVar8);
    }
    lVar3 = plVar2[0x2a9];
    *(long *)(param_2[1] + 8) = (long)dVar8;
    dVar8 = ((double)lVar3 * dVar10) / dVar9;
    if ((double)((ulong)dVar8 & uVar6) < dVar1) {
      dVar8 = (double)((ulong)(((double)((ulong)dVar8 & uVar6) + dVar1) - dVar1) |
                      ~uVar6 & (ulong)dVar8);
    }
    lVar3 = plVar2[0x2aa];
    *(long *)param_2[2] = (long)dVar8;
    dVar9 = ((double)lVar3 * dVar10) / dVar9;
    if ((double)((ulong)dVar9 & uVar6) < dVar1) {
      dVar9 = (double)((ulong)(((double)((ulong)dVar9 & uVar6) + dVar1) - dVar1) |
                      ~uVar6 & (ulong)dVar9);
    }
    dVar1 = (double)plVar2[0x2ac];
    *(long *)(param_2[2] + 8) = (long)dVar9;
    *(undefined8 *)(param_2[3] + 8) = _LC2;
    lVar7 = (long)((double)lVar7 * dVar1);
    *(long *)(*param_2 + 8) = lVar7;
    *(long *)param_2[1] = lVar7;
  }
  return;
}



void vorbis_bitrate_clear(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  return;
}



bool vorbis_bitrate_managed(long param_1)

{
  return *(int *)(*(long *)(*(long *)(param_1 + 0x68) + 0x88) + 0x90) != 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 vorbis_bitrate_addblock(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long local_70;
  
  lVar9 = *(long *)(param_1 + 0xb8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x88);
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 8);
  dVar19 = *(double *)(lVar1 + 200);
  lVar11 = *(long *)(lVar10 + 0x30);
  if ((double)((ulong)dVar19 & _LC1) < _LC0) {
    dVar19 = (double)((ulong)(((double)((ulong)dVar19 & _LC1) + _LC0) - _LC0) |
                     ~_LC1 & (ulong)dVar19);
  }
  iVar16 = (int)dVar19;
  lVar13 = (long)iVar16;
  lVar5 = oggpack_bytes(*(undefined8 *)(lVar9 + 0x10 + lVar13 * 8));
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) {
    local_70 = *(long *)(lVar1 + 0xb0);
    lVar15 = *(long *)(lVar1 + 0xb8);
  }
  else {
    local_70 = *(long *)(lVar1 + 0xb0) * *(long *)(lVar1 + 0xc0);
    lVar15 = *(long *)(lVar1 + 0xc0) * *(long *)(lVar1 + 0xb8);
  }
  lVar2 = *(long *)(lVar11 + lVar7 * 8);
  lVar6 = *(long *)(lVar11 + 0x1558);
  dVar19 = *(double *)(lVar11 + 0x1560);
  if (*(int *)(lVar1 + 0x90) == 0) {
    if (*(long *)(lVar1 + 0xd0) == 0) {
      *(long *)(lVar1 + 0xd0) = param_1;
      return 0;
    }
    return 0xffffffff;
  }
  lVar8 = lVar5 * 8;
  *(long *)(lVar1 + 0xd0) = param_1;
  lVar12 = *(long *)(lVar1 + 0xa8);
  lVar6 = (long)((double)lVar6 * dVar19);
  if (0 < lVar12) {
    if (lVar7 != 0) {
      lVar12 = lVar12 * *(long *)(lVar1 + 0xc0);
    }
    dVar19 = _LC5 / *(double *)(lVar11 + 0x1568);
    lVar7 = (lVar8 - lVar12) + *(long *)(lVar1 + 0x98);
    if (lVar6 < lVar7) {
      if ((0 < iVar16) && (SBORROW8(lVar12,lVar8) != lVar12 + lVar5 * -8 < 0)) {
        lVar7 = (long)(iVar16 + -1);
        do {
          iVar16 = (int)lVar7;
          lVar5 = oggpack_bytes(*(undefined8 *)(lVar9 + 0x10 + lVar7 * 8));
          if ((iVar16 < 1) || (lVar5 * 8 <= lVar12)) break;
          lVar7 = lVar7 + -1;
        } while (lVar6 < (lVar5 * 8 - lVar12) + *(long *)(lVar1 + 0x98));
      }
    }
    else if (((lVar7 < lVar6) && (iVar16 < 0xe)) &&
            (lVar12 != lVar8 && SBORROW8(lVar12,lVar8) == lVar12 + lVar5 * -8 < 0)) {
      lVar7 = (long)(iVar16 + 1);
      do {
        iVar16 = (int)lVar7;
        lVar5 = oggpack_bytes(*(undefined8 *)(lVar9 + 0x10 + lVar7 * 8));
        if ((0xd < iVar16) || (lVar12 <= lVar5 * 8)) break;
        lVar7 = lVar7 + 1;
      } while ((lVar5 * 8 - lVar12) + *(long *)(lVar1 + 0x98) < lVar6);
    }
    uVar4 = _LC1;
    dVar3 = _LC0;
    dVar17 = (double)iVar16 - *(double *)(lVar1 + 200);
    if ((double)((ulong)dVar17 & _LC1) < _LC0) {
      dVar17 = (double)((ulong)(((double)((ulong)dVar17 & _LC1) + _LC0) - _LC0) |
                       ~_LC1 & (ulong)dVar17);
    }
    dVar20 = (double)(int)(lVar2 >> 1);
    dVar21 = (double)*(long *)(lVar10 + 8);
    dVar18 = (dVar17 / dVar20) * dVar21;
    dVar17 = (double)((ulong)dVar19 ^ __LC6);
    if ((double)((ulong)dVar19 ^ __LC6) <= dVar18) {
      dVar17 = dVar18;
    }
    if (dVar17 <= dVar19) {
      dVar19 = dVar17;
    }
    dVar19 = (dVar19 / dVar21) * dVar20 + *(double *)(lVar1 + 200);
    *(double *)(lVar1 + 200) = dVar19;
    dVar17 = (double)((ulong)dVar19 & uVar4);
    if (dVar17 < dVar3) {
      dVar19 = (double)((ulong)((dVar17 + dVar3) - dVar3) | ~uVar4 & (ulong)dVar19);
    }
    iVar16 = (int)dVar19;
    lVar13 = (long)iVar16;
    lVar8 = oggpack_bytes(*(undefined8 *)(lVar9 + 0x10 + lVar13 * 8));
    lVar8 = lVar8 * 8;
  }
  lVar10 = *(long *)(lVar1 + 0xa0);
  if (((0 < *(long *)(lVar1 + 0xb0)) && (lVar8 < local_70)) &&
     ((lVar10 < local_70 - lVar8 && (iVar16 = iVar16 + 1, iVar16 < 0xf)))) {
    lVar7 = lVar9 + lVar13 * 8;
    do {
      lVar5 = oggpack_bytes(*(undefined8 *)(lVar7 + 0x18));
      lVar8 = lVar5 * 8;
      lVar10 = *(long *)(lVar1 + 0xa0);
      if (local_70 + lVar5 * -8 <= lVar10) break;
      iVar16 = iVar16 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar16 != 0xf);
  }
  if (((*(long *)(lVar1 + 0xb8) < 1) || (lVar8 <= lVar15)) ||
     (lVar7 = *(long *)(lVar11 + 0x1558), (lVar8 - lVar15) + lVar10 <= lVar7)) {
    if (iVar16 < 0) goto LAB_001007a7;
LAB_001004f3:
    lVar11 = (local_70 - lVar10) + 7;
    lVar10 = (local_70 - lVar10) + 0xe;
    if (-1 < lVar11) {
      lVar10 = lVar11;
    }
    iVar14 = 0xe;
    if (iVar16 < 0xf) {
      iVar14 = iVar16;
    }
    *(int *)(lVar1 + 0xd8) = iVar14;
    lVar11 = (long)iVar14 + 2;
    lVar7 = oggpack_bytes(*(undefined8 *)(lVar9 + lVar11 * 8));
    lVar7 = (lVar10 >> 3) - lVar7;
    if (0 < lVar7) {
      do {
        lVar7 = lVar7 + -1;
        oggpack_write(*(undefined8 *)(lVar9 + lVar11 * 8),0,8);
      } while (lVar7 != 0);
    }
    lVar8 = oggpack_bytes(*(undefined8 *)(lVar9 + 0x10 + (long)iVar14 * 8));
    lVar8 = lVar8 * 8;
  }
  else {
    if (-1 < iVar16 + -1) {
      lVar7 = lVar9 + (long)iVar16 * 8;
      iVar16 = iVar16 + -1;
      do {
        lVar8 = oggpack_bytes(*(undefined8 *)(lVar7 + 8));
        lVar8 = lVar8 * 8;
        lVar10 = *(long *)(lVar1 + 0xa0);
        if ((lVar8 - lVar15) + lVar10 <= *(long *)(lVar11 + 0x1558)) goto LAB_001004f3;
        iVar16 = iVar16 + -1;
        lVar7 = lVar7 + -8;
      } while (iVar16 != -1);
LAB_001007a7:
      lVar7 = *(long *)(lVar11 + 0x1558);
    }
    *(undefined4 *)(lVar1 + 0xd8) = 0;
    lVar10 = (lVar7 - lVar10) + lVar15;
    lVar11 = lVar10 + 7;
    if (-1 < lVar10) {
      lVar11 = lVar10;
    }
    lVar10 = oggpack_bytes(*(undefined8 *)(lVar9 + 0x10));
    if (lVar11 >> 3 < lVar10) {
      oggpack_writetrunc(*(undefined8 *)(lVar9 + 0x10));
      lVar8 = oggpack_bytes(*(undefined8 *)(lVar9 + 0x10));
      lVar8 = lVar8 * 8;
    }
  }
  if ((0 < *(long *)(lVar1 + 0xb0)) || (0 < *(long *)(lVar1 + 0xb8))) {
    lVar9 = *(long *)(lVar1 + 0xa0);
    if ((lVar15 < 1) || (lVar8 <= lVar15)) {
      lVar10 = 0;
      if (-1 < lVar8) {
        lVar10 = lVar8;
      }
      if (lVar10 < local_70) {
        *(long *)(lVar1 + 0xa0) = lVar9 + (lVar8 - local_70);
      }
      else {
        if (lVar6 < lVar9) {
          if (0 < lVar15) {
            lVar9 = lVar9 + (lVar8 - lVar15);
            if (lVar9 < lVar6) {
              lVar9 = lVar6;
            }
            *(long *)(lVar1 + 0xa0) = lVar9;
            goto LAB_001005ac;
          }
        }
        else if (0 < local_70) {
          lVar9 = lVar9 + (lVar8 - local_70);
          if (lVar6 < lVar9) {
            lVar9 = lVar6;
          }
          *(long *)(lVar1 + 0xa0) = lVar9;
          goto LAB_001005ac;
        }
        *(long *)(lVar1 + 0xa0) = lVar6;
      }
    }
    else {
      *(long *)(lVar1 + 0xa0) = lVar9 + (lVar8 - lVar15);
    }
  }
LAB_001005ac:
  lVar9 = *(long *)(lVar1 + 0xa8);
  if (0 < lVar9) {
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar9 = lVar9 * *(long *)(lVar1 + 0xc0);
    }
    *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + (lVar8 - lVar9);
  }
  return 0;
}



undefined8 vorbis_bitrate_flushpacket(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x88);
  lVar2 = *(long *)(lVar1 + 0xd0);
  if (lVar2 != 0) {
    if (param_2 != (undefined8 *)0x0) {
      lVar3 = *(long *)(lVar2 + 0xb8);
      lVar6 = 7;
      if (*(int *)(*(long *)(*(long *)(lVar2 + 0x68) + 0x88) + 0x90) != 0) {
        lVar6 = (long)*(int *)(lVar1 + 0xd8);
      }
      uVar4 = oggpack_get_buffer(*(undefined8 *)(lVar3 + (lVar6 + 2) * 8));
      uVar5 = *(undefined8 *)(lVar3 + (lVar6 + 2) * 8);
      *param_2 = uVar4;
      uVar5 = oggpack_bytes(uVar5);
      param_2[2] = 0;
      param_2[1] = uVar5;
      param_2[3] = (long)*(int *)(lVar2 + 0x50);
      param_2[4] = *(undefined8 *)(lVar2 + 0x58);
      param_2[5] = *(undefined8 *)(lVar2 + 0x60);
    }
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    return 1;
  }
  return 0;
}



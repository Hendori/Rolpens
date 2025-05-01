
/* mathMean(long long, long long) */

long mathMean(longlong param_1,longlong param_2)

{
  long lVar1;
  
  lVar1 = (param_2 - param_1) % 0x1680000;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 0x1680000;
  }
  if (0xb40000 < lVar1) {
    lVar1 = lVar1 + -0x1680000;
  }
  return lVar1 / 2 + param_1;
}



/* mathCubicAngle(SwPoint const*, long long&, long long&, long long&) */

ulong mathCubicAngle(SwPoint *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_48;
  
  local_48 = _LC2;
  fVar12 = _LC1;
  fVar11 = _LC0;
  uVar9 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x20);
  uVar6 = *(long *)param_1 - *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x30);
  uVar8 = *(long *)(param_1 + 8) - *(long *)(param_1 + 0x18);
  uVar3 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x38);
  uVar4 = -uVar9;
  if (0 < (long)uVar9) {
    uVar4 = uVar9;
  }
  uVar1 = -uVar6;
  if (0 < (long)uVar6) {
    uVar1 = uVar6;
  }
  lVar2 = -lVar5;
  if (0 < lVar5) {
    lVar2 = lVar5;
  }
  if (lVar2 < 2) {
    lVar2 = -lVar7;
    if (0 < lVar7) {
      lVar2 = lVar7;
    }
    if (1 < lVar2) goto LAB_001000f0;
    if ((long)uVar4 < 2) {
      uVar4 = -uVar3;
      if (0 < (long)uVar3) {
        uVar4 = uVar3;
      }
      if (1 < (long)uVar4) goto LAB_00100352;
      if ((long)uVar1 < 2) {
        uVar4 = -uVar8;
        if (0 < (long)uVar8) {
          uVar4 = uVar8;
        }
        if ((long)uVar4 < 2) {
          *param_4 = 0;
          *param_3 = 0;
          *param_2 = 0;
          return 0xffffffff;
        }
      }
      fVar12 = (float)(long)uVar6;
      fVar11 = (float)(long)uVar8;
LAB_001005ec:
      fVar11 = (float)tvg::atan2(fVar11 * _LC0,_LC0 * fVar12);
      lVar5 = 0;
      uVar3 = (ulong)(fVar11 * _LC1 * _LC2);
      *param_4 = uVar3;
      *param_3 = uVar3;
      *param_2 = uVar3;
      uVar4 = *param_4;
      goto LAB_0010022f;
    }
LAB_00100352:
    if ((long)uVar1 < 2) {
      uVar4 = -uVar8;
      if (0 < (long)uVar8) {
        uVar4 = uVar8;
      }
      if ((long)uVar4 < 2) {
        fVar12 = (float)(long)uVar9;
        fVar11 = (float)(long)uVar3;
        goto LAB_001005ec;
      }
    }
    fVar12 = (float)tvg::atan2((float)(long)uVar3 * _LC0,(float)(long)uVar9 * _LC0);
    fVar11 = _LC0;
    fVar10 = (float)(long)uVar6 * _LC0;
    lVar5 = (long)(fVar12 * _LC1 * _LC2);
    *param_3 = lVar5;
    *param_2 = lVar5;
    fVar11 = (float)tvg::atan2((float)(long)uVar8 * fVar11,fVar10);
    uVar4 = (ulong)(fVar11 * _LC1 * _LC2);
    *param_4 = uVar4;
    uVar3 = *param_3;
    lVar5 = *param_2;
  }
  else {
LAB_001000f0:
    if ((long)uVar4 < 2) {
      uVar4 = -uVar3;
      if (0 < (long)uVar3) {
        uVar4 = uVar3;
      }
      if ((long)uVar4 < 2) {
        if ((long)uVar1 < 2) {
          uVar4 = -uVar8;
          if (0 < (long)uVar8) {
            uVar4 = uVar8;
          }
          if ((long)uVar4 < 2) {
            fVar12 = (float)lVar5;
            fVar11 = (float)lVar7;
            goto LAB_001005ec;
          }
        }
        fVar12 = (float)tvg::atan2((float)lVar7 * _LC0,(float)lVar5 * _LC0);
        fVar11 = _LC0;
        fVar10 = (float)(long)uVar6 * _LC0;
        *param_2 = (long)(fVar12 * _LC1 * _LC2);
        fVar11 = (float)tvg::atan2((float)(long)uVar8 * fVar11,fVar10);
        lVar5 = (long)(fVar11 * _LC1 * _LC2);
        *param_4 = lVar5;
        lVar5 = (lVar5 - *param_2) % 0x1680000;
        if (lVar5 < 0) {
          lVar5 = lVar5 + 0x1680000;
        }
        if (0xb40000 < lVar5) {
          lVar5 = lVar5 + -0x1680000;
        }
        uVar3 = lVar5 / 2 + *param_2;
        *param_3 = uVar3;
        lVar5 = *param_2;
        uVar4 = *param_4;
        goto LAB_001001e4;
      }
    }
    if ((long)uVar1 < 2) {
      uVar4 = -uVar8;
      if (0 < (long)uVar8) {
        uVar4 = uVar8;
      }
      if (1 < (long)uVar4) {
        if (lVar5 != 0 || lVar7 != 0) goto LAB_001002b8;
        *param_2 = 0;
        fVar11 = _LC0;
        goto LAB_00100160;
      }
      fVar11 = (float)tvg::atan2((float)lVar7 * _LC0,(float)lVar5 * _LC0);
      *param_2 = (long)(fVar11 * _LC1 * _LC2);
      uVar4 = uVar9 | uVar3;
      if (uVar4 != 0) {
        fVar11 = (float)tvg::atan2((float)(long)uVar3 * _LC0,(float)(long)uVar9 * _LC0);
        uVar4 = (ulong)(fVar11 * _LC1 * _LC2);
      }
      *param_4 = uVar4;
      *param_3 = uVar4;
      lVar5 = *param_2;
      uVar3 = uVar4;
    }
    else {
LAB_001002b8:
      fVar10 = (float)tvg::atan2((float)lVar7 * _LC0,(float)lVar5 * _LC0);
      fVar12 = _LC1;
      local_48 = _LC2;
      *param_2 = (long)(fVar10 * _LC1 * _LC2);
      if (uVar9 == 0 && uVar3 == 0) {
        lVar5 = 0;
      }
      else {
LAB_00100160:
        fVar10 = (float)tvg::atan2((float)(long)uVar3 * fVar11,(float)(long)uVar9 * fVar11);
        lVar5 = (long)(fVar10 * fVar12 * local_48);
      }
      *param_3 = lVar5;
      uVar4 = uVar6 | uVar8;
      if (uVar4 != 0) {
        fVar11 = (float)tvg::atan2((float)(long)uVar8 * fVar11,(float)(long)uVar6 * fVar11);
        uVar4 = (ulong)(fVar11 * fVar12 * local_48);
      }
      *param_4 = uVar4;
      lVar5 = *param_2;
      uVar3 = *param_3;
    }
  }
LAB_001001e4:
  lVar5 = (long)(uVar3 - lVar5) % 0x1680000;
  if (lVar5 < 0) {
    lVar5 = lVar5 + 0x1680000;
  }
  if (0xb40000 < lVar5) {
    lVar5 = lVar5 + -0x1680000;
  }
LAB_0010022f:
  lVar7 = -lVar5;
  if (0 < lVar5) {
    lVar7 = lVar5;
  }
  lVar5 = (long)(uVar4 - uVar3) % 0x1680000;
  if (lVar5 < 0) {
    lVar5 = lVar5 + 0x1680000;
  }
  if (0xb40000 < lVar5) {
    lVar5 = lVar5 + -0x1680000;
  }
  lVar2 = -lVar5;
  if (0 < lVar5) {
    lVar2 = lVar5;
  }
  return (ulong)(0x167fff < lVar2 || 0x167fff < lVar7);
}



/* mathMultiply(long, long) */

long mathMultiply(long param_1,long param_2)

{
  if (param_1 < 0) {
    if (-1 < param_2) {
      return -(-param_1 * param_2 + 0x8000 >> 0x10);
    }
  }
  else if (param_2 < 0) {
    return -(-param_2 * param_1 + 0x8000 >> 0x10);
  }
  return param_1 * param_2 + 0x8000 >> 0x10;
}



/* mathDivide(long, long) */

long mathDivide(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 < 0) {
    lVar2 = -param_1;
    if (param_2 < 0) {
      param_2 = -param_2;
      goto LAB_00100713;
    }
    lVar1 = -0x7fffffff;
    if (param_2 != 0) {
      return -(((param_2 >> 1) + param_1 * -0x10000) / param_2);
    }
  }
  else {
    if (param_2 < 0) {
      return -(((-param_2 >> 1) + param_1 * 0x10000) / -param_2);
    }
    lVar1 = 0x7fffffff;
    lVar2 = param_1;
    if (param_2 != 0) {
LAB_00100713:
      return ((param_2 >> 1) + lVar2 * 0x10000) / param_2;
    }
  }
  return lVar1;
}



/* mathMulDiv(long, long, long) */

long mathMulDiv(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_1 < 0) {
    param_1 = -param_1;
    iVar2 = -1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
    iVar2 = -iVar2;
  }
  if (param_3 < 0) {
    param_3 = -param_3;
    iVar2 = -iVar2;
  }
  else if (param_3 == 0) {
    lVar1 = 0x7fffffff;
    if (iVar2 != 1) {
      lVar1 = -0x7fffffff;
    }
    return lVar1;
  }
  lVar1 = ((param_3 >> 1) + param_1 * param_2) / param_3;
  if (iVar2 != 1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mathRotate(SwPoint&, long long) */

void mathRotate(SwPoint *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_10;
  float local_c;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long *)param_1 == 0 && *(long *)(param_1 + 8) == 0) {
    return;
  }
  fVar3 = (float)*(long *)param_1 * _LC0;
  fVar4 = (float)*(long *)(param_1 + 8) * _LC0;
  sincosf((float)param_2 * __LC3 * __LC4,&local_c,&local_10);
  fVar1 = nearbyintf((fVar3 * local_10 - fVar4 * local_c) * _LC5);
  fVar2 = _LC5;
  *(long *)param_1 = (long)fVar1;
  fVar2 = nearbyintf(fVar2 * (local_c * fVar3 + local_10 * fVar4));
  *(long *)(param_1 + 8) = (long)fVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mathTan(long long) */

long mathTan(longlong param_1)

{
  float fVar1;
  
  if (param_1 != 0) {
    fVar1 = tanf((float)param_1 * __LC3 * __LC4);
    return (long)(fVar1 * _LC2);
  }
  return 0;
}



/* mathAtan(SwPoint const&) */

long mathAtan(SwPoint *param_1)

{
  float fVar1;
  
  if (*(long *)param_1 == 0 && *(long *)(param_1 + 8) == 0) {
    return 0;
  }
  fVar1 = (float)tvg::atan2((float)*(long *)(param_1 + 8) * _LC0,_LC0 * (float)*(long *)param_1);
  return (long)(fVar1 * _LC1 * _LC2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mathSin(long long) */

long mathSin(longlong param_1)

{
  float fVar1;
  
  if (param_1 != 0) {
    fVar1 = cosf((float)(0x5a0000 - param_1) * __LC3 * __LC4);
    return (long)(fVar1 * _LC2);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mathCos(long long) */

long mathCos(longlong param_1)

{
  float fVar1;
  
  fVar1 = cosf((float)param_1 * __LC3 * __LC4);
  return (long)(fVar1 * _LC2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mathLength(SwPoint const&) */

long mathLength(SwPoint *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)param_1;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = -lVar1;
    if (0 < lVar1) {
      lVar2 = lVar1;
    }
    if (lVar1 != 0) {
      lVar1 = lVar2;
    }
    return lVar1;
  }
  if (lVar1 != 0) {
    fVar3 = (float)lVar2 * _LC0;
    fVar4 = (float)lVar1 * _LC0;
    if (fVar3 < 0.0) {
      fVar3 = (float)((uint)fVar3 ^ __LC7);
    }
    if (fVar4 < 0.0) {
      fVar4 = (float)((uint)fVar4 ^ __LC7);
    }
    if (fVar4 < fVar3) {
      return (long)(fVar4 * __LC8 + fVar3);
    }
    return (long)(fVar3 * __LC8 + fVar4);
  }
  lVar1 = -lVar2;
  if (0 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* mathSplitCubic(SwPoint*) */

void mathSplitCubic(SwPoint *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x30);
  auVar3._8_4_ = (undefined4)((ulong)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x28)) >> 1);
  auVar3._0_8_ = CONCAT44((int)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x20) >> 0x21),
                          (int)((ulong)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x20)) >> 1)
                         );
  auVar3._12_4_ = (int)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x28) >> 0x21);
  lVar1 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x20) >> 1;
  lVar2 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x20) >> 1;
  *(long *)(param_1 + 0x50) = lVar1;
  lVar1 = lVar1 + lVar2 >> 1;
  *(long *)(param_1 + 0x40) = lVar1;
  auVar5._8_4_ = (undefined4)((ulong)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18)) >> 1);
  auVar5._0_8_ = CONCAT44((int)(*(long *)param_1 + *(long *)(param_1 + 0x10) >> 0x21),
                          (int)((ulong)(*(long *)param_1 + *(long *)(param_1 + 0x10)) >> 1));
  auVar5._12_4_ = (int)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18) >> 0x21);
  uVar6 = auVar3._8_8_ + auVar5._8_8_;
  *(long *)(param_1 + 0x30) =
       lVar1 + ((*(long *)param_1 + *(long *)(param_1 + 0x10) >> 1) + lVar2 >> 1) >> 1;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar5;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x38) >> 1;
  auVar4._0_4_ = (undefined4)((ulong)(auVar3._0_8_ + auVar5._0_8_) >> 1);
  auVar4._8_4_ = (undefined4)(uVar6 >> 1);
  auVar4._4_4_ = (int)(auVar3._0_8_ + auVar5._0_8_ >> 0x21);
  auVar4._12_4_ = (int)((long)uVar6 >> 0x21);
  *(long *)(param_1 + 0x58) = lVar1;
  lVar1 = auVar3._8_8_ + lVar1 >> 1;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar4;
  *(long *)(param_1 + 0x48) = lVar1;
  *(long *)(param_1 + 0x38) = lVar1 + auVar4._8_8_ >> 1;
  return;
}



/* mathSplitLine(SwPoint*) */

void mathSplitLine(SwPoint *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x10) = (int)((ulong)(*(long *)param_1 + lVar1) >> 1);
  *(int *)(param_1 + 0x14) = (int)(*(long *)param_1 + lVar1 >> 0x21);
  *(int *)(param_1 + 0x18) = (int)((ulong)(*(long *)(param_1 + 8) + lVar2) >> 1);
  *(int *)(param_1 + 0x1c) = (int)(*(long *)(param_1 + 8) + lVar2 >> 0x21);
  return;
}



/* mathDiff(long long, long long) */

long mathDiff(longlong param_1,longlong param_2)

{
  long lVar1;
  
  lVar1 = (param_2 - param_1) % 0x1680000;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 0x1680000;
  }
  if (0xb40000 < lVar1) {
    lVar1 = lVar1 + -0x1680000;
  }
  return lVar1;
}



/* mathTransform(tvg::Point const*, tvg::Matrix const&) */

long mathTransform(Point *param_1,Matrix *param_2)

{
  return (long)((*(float *)param_1 * *(float *)param_2 +
                 *(float *)(param_1 + 4) * *(float *)(param_2 + 4) + *(float *)(param_2 + 8)) * _LC5
               );
}



/* mathClipBBox(SwBBox const&, SwBBox&) */

bool mathClipBBox(SwBBox *param_1,SwBBox *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (*(long *)(param_1 + 0x10) < *(long *)(param_2 + 0x10)) {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_2 + 0x10) = lVar2;
  if (*(long *)(param_2 + 0x18) <= lVar5) {
    lVar5 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar5;
  lVar3 = *(long *)param_2;
  if (*(long *)param_2 < *(long *)param_1) {
    lVar3 = *(long *)param_1;
  }
  *(long *)param_2 = lVar3;
  lVar6 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 8) < lVar1) {
    lVar6 = lVar1;
  }
  *(long *)(param_2 + 8) = lVar6;
  if ((lVar2 <= lVar3) && (lVar5 <= lVar6)) {
    return false;
  }
  bVar4 = false;
  if (((lVar3 < *(long *)(param_1 + 0x10)) && (lVar6 < *(long *)(param_1 + 0x18))) &&
     (*(long *)param_1 < lVar2)) {
    bVar4 = *(long *)(param_1 + 8) < lVar5;
  }
  return bVar4;
}



/* mathUpdateOutlineBBox(SwOutline const*, SwBBox const&, SwBBox&, bool) */

undefined8 mathUpdateOutlineBBox(SwOutline *param_1,SwBBox *param_2,SwBBox *param_3,bool param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  
  if (param_1 == (SwOutline *)0x0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    plVar1 = *(long **)param_1;
    lVar4 = *plVar1;
    lVar6 = plVar1[1];
    plVar7 = plVar1 + (ulong)*(uint *)(param_1 + 8) * 2;
    lVar5 = lVar4;
    lVar2 = lVar6;
    while (plVar1 = plVar1 + 2, plVar1 < plVar7) {
      lVar8 = *plVar1;
      if (lVar8 < lVar4) {
        lVar4 = lVar8;
      }
      if (lVar5 < lVar8) {
        lVar5 = lVar8;
      }
      lVar8 = plVar1[1];
      if (lVar8 < lVar6) {
        lVar6 = lVar8;
      }
      if (lVar2 < lVar8) {
        lVar2 = lVar8;
      }
    }
    if (param_4) {
      fVar9 = nearbyintf((float)lVar4 * _LC0);
      lVar4 = (long)fVar9;
      fVar9 = nearbyintf((float)lVar5 * _LC0);
      lVar8 = (long)fVar9;
      fVar9 = nearbyintf((float)lVar6 * _LC0);
      lVar6 = (long)fVar9;
      fVar9 = nearbyintf((float)lVar2 * _LC0);
      lVar5 = (long)fVar9;
    }
    else {
      lVar4 = lVar4 >> 6;
      lVar6 = lVar6 >> 6;
      lVar8 = lVar5 + 0x3f >> 6;
      lVar5 = lVar2 + 0x3f >> 6;
    }
    *(long *)param_3 = lVar4;
    *(long *)(param_3 + 0x10) = lVar8;
    *(long *)(param_3 + 8) = lVar6;
    *(long *)(param_3 + 0x18) = lVar5;
    uVar3 = mathClipBBox(param_2,param_3);
    return uVar3;
  }
  *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x10) = (undefined1  [16])0x0;
  return 0;
}



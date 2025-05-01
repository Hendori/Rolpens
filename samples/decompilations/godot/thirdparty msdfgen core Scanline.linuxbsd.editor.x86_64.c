
/* msdfgen::compareIntersections(void const*, void const*) */

int msdfgen::compareIntersections(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return (uint)(0.0 < *param_1 - *param_2) - (uint)(*param_1 - *param_2 < 0.0);
}



/* msdfgen::interpretFillRule(int, msdfgen::FillRule) */

uint msdfgen::interpretFillRule(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 2) {
    return (uint)(0 < (int)param_1);
  }
  if (param_2 < 3) {
    if (param_2 != 0) {
      return param_1 & 1;
    }
    return (uint)(param_1 != 0);
  }
  uVar1 = 0;
  if (param_2 == 3) {
    uVar1 = param_1 >> 0x1f;
  }
  return uVar1;
}



/* msdfgen::Scanline::overlap(msdfgen::Scanline const&, msdfgen::Scanline const&, double, double,
   msdfgen::FillRule) */

double msdfgen::Scanline::overlap
                 (double param_3,double param_4,undefined8 *param_1,undefined8 *param_2,uint param_5
                 )

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pdVar1 = (double *)*param_1;
  dVar13 = param_4;
  if (pdVar1 != (double *)param_1[1]) {
    dVar13 = *pdVar1;
  }
  pdVar2 = (double *)*param_2;
  dVar14 = param_4;
  if (pdVar2 != (double *)param_2[1]) {
    dVar14 = *pdVar2;
  }
  iVar6 = 0;
  uVar5 = 0;
  iVar3 = 0;
  uVar8 = 0;
LAB_001000c0:
  do {
    iVar10 = (int)((long)param_2[1] - (long)pdVar2 >> 4);
    iVar9 = (int)((long)param_1[1] - (long)pdVar1 >> 4);
    if (param_3 <= dVar13) goto LAB_00100170;
LAB_001000ca:
    dVar15 = dVar13;
    if (dVar14 < dVar13) goto LAB_00100120;
    while( true ) {
      dVar13 = dVar15;
      if (iVar3 < iVar9) {
        lVar11 = (long)iVar3;
        uVar8 = *(uint *)(pdVar1 + lVar11 * 2 + 1);
        if (param_5 == 2) {
          uVar8 = (uint)(0 < (int)uVar8);
        }
        else if (param_5 < 3) {
          if (param_5 == 0) {
            uVar8 = (uint)(uVar8 != 0);
          }
          else {
            uVar8 = uVar8 & 1;
          }
        }
        else {
          uVar8 = uVar8 >> 0x1f;
          if (param_5 != 3) {
            uVar8 = 0;
          }
        }
        iVar3 = iVar3 + 1;
        dVar13 = param_4;
        if (iVar3 < iVar9) {
          dVar13 = pdVar1[lVar11 * 2 + 2];
        }
      }
      if (dVar14 != dVar15) break;
LAB_00100120:
      do {
        if (iVar10 <= iVar6) goto LAB_001000c0;
        lVar11 = (long)iVar6;
        uVar5 = *(uint *)(pdVar2 + lVar11 * 2 + 1);
        if (param_5 == 2) {
          uVar5 = (uint)(0 < (int)uVar5);
        }
        else if (param_5 < 3) {
          if (param_5 == 0) {
            uVar5 = (uint)(uVar5 != 0);
          }
          else {
            uVar5 = uVar5 & 1;
          }
        }
        else {
          uVar5 = uVar5 >> 0x1f;
          if (param_5 != 3) {
            uVar5 = 0;
          }
        }
        iVar6 = iVar6 + 1;
        dVar14 = param_4;
        if (iVar10 <= iVar6) goto LAB_001000c0;
        dVar14 = pdVar2[lVar11 * 2 + 2];
        if (dVar13 < param_3) goto LAB_001000ca;
LAB_00100170:
        if (param_3 <= dVar14) {
          dVar15 = 0.0;
          goto joined_r0x00100204;
        }
      } while (dVar14 < dVar13);
      do {
        dVar15 = dVar13;
      } while (NAN(dVar13));
    }
  } while( true );
joined_r0x00100204:
  cVar4 = (char)uVar5;
  cVar7 = (char)uVar8;
  dVar12 = dVar13;
  if (dVar13 < param_4) {
    if (dVar13 <= dVar14) {
      if (cVar7 == cVar4) {
        dVar15 = dVar15 + (dVar13 - param_3);
      }
LAB_001002a0:
      if (iVar3 < iVar9) {
        lVar11 = (long)iVar3;
        uVar8 = *(uint *)(pdVar1 + lVar11 * 2 + 1);
        if (param_5 == 2) {
          uVar8 = (uint)(0 < (int)uVar8);
        }
        else if (param_5 < 3) {
          if (param_5 == 0) {
            uVar8 = (uint)(uVar8 != 0);
          }
          else {
            uVar8 = uVar8 & 1;
          }
        }
        else {
          uVar8 = uVar8 >> 0x1f;
          if (param_5 != 3) {
            uVar8 = 0;
          }
        }
        iVar3 = iVar3 + 1;
        dVar13 = param_4;
        if (iVar3 < iVar9) {
          dVar13 = pdVar1[lVar11 * 2 + 2];
        }
      }
      goto LAB_001002e6;
    }
    dVar12 = dVar14;
    if (cVar7 == cVar4) {
      dVar15 = dVar15 + (dVar14 - param_3);
      goto LAB_001002e6;
    }
    goto LAB_00100234;
  }
  if (param_4 <= dVar14) {
    if (cVar7 == cVar4) {
      dVar15 = dVar15 + (param_4 - param_3);
    }
    return dVar15;
  }
  if (dVar14 < dVar13) {
    dVar12 = dVar14;
    if (cVar7 == cVar4) {
      dVar15 = dVar15 + (dVar14 - param_3);
    }
    goto LAB_00100234;
  }
  if (cVar7 == cVar4) {
    dVar15 = dVar15 + (dVar13 - param_3);
  }
  if (!NAN(dVar13)) goto LAB_001002a0;
LAB_001002e6:
  param_3 = dVar12;
  if (dVar14 == dVar12) {
LAB_00100234:
    param_3 = dVar12;
    if (iVar6 < iVar10) {
      lVar11 = (long)iVar6;
      uVar5 = *(uint *)(pdVar2 + lVar11 * 2 + 1);
      if (param_5 == 2) {
        uVar5 = (uint)(0 < (int)uVar5);
      }
      else if (param_5 < 3) {
        if (param_5 == 0) {
          uVar5 = (uint)(uVar5 != 0);
        }
        else {
          uVar5 = uVar5 & 1;
        }
      }
      else {
        uVar5 = uVar5 >> 0x1f;
        if (param_5 != 3) {
          uVar5 = 0;
        }
      }
      iVar6 = iVar6 + 1;
      dVar14 = param_4;
      if (iVar6 < iVar10) {
        dVar14 = pdVar2[lVar11 * 2 + 2];
      }
    }
  }
  goto joined_r0x00100204;
}



/* msdfgen::Scanline::Scanline() */

void __thiscall msdfgen::Scanline::Scanline(Scanline *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* msdfgen::Scanline::preprocess() */

void __thiscall msdfgen::Scanline::preprocess(Scanline *this)

{
  void *__base;
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  *(undefined4 *)(this + 0x18) = 0;
  __base = *(void **)this;
  if (*(void **)(this + 8) != __base) {
    qsort(__base,(long)*(void **)(this + 8) - (long)__base >> 4,0x10,compareIntersections);
    lVar1 = *(long *)(this + 8);
    if (*(long *)this != lVar1) {
      iVar4 = 0;
      lVar2 = *(long *)this;
      do {
        iVar4 = iVar4 + *(int *)(lVar2 + 8);
        lVar3 = lVar2 + 0x10;
        *(int *)(lVar2 + 8) = iVar4;
        lVar2 = lVar3;
      } while (lVar3 != lVar1);
    }
  }
  return;
}



/* msdfgen::Scanline::setIntersections(std::vector<msdfgen::Scanline::Intersection,
   std::allocator<msdfgen::Scanline::Intersection> > const&) */

ulong __thiscall msdfgen::Scanline::setIntersections(Scanline *this,vector *param_1)

{
  double *pdVar1;
  undefined8 *__src;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  double *pdVar7;
  uint uVar8;
  size_t sVar9;
  undefined8 *__dest;
  ulong uVar10;
  long *__src_00;
  double dVar11;
  
  if (this != (Scanline *)param_1) {
    lVar5 = *(long *)(param_1 + 8);
    __src_00 = *(long **)param_1;
    plVar6 = *(long **)this;
    uVar10 = lVar5 - (long)__src_00;
    if ((ulong)(*(long *)(this + 0x10) - (long)plVar6) < uVar10) {
      if (0x7ffffffffffffff0 < uVar10) {
        dVar11 = (double)std::__throw_bad_array_new_length();
        lVar5 = *plVar6;
        if (lVar5 == plVar6[1]) {
          return 0xffffffff;
        }
        uVar10 = (ulong)(int)plVar6[3];
        pdVar7 = (double *)(uVar10 * 0x10 + lVar5);
        if (dVar11 < *pdVar7) {
          do {
            if ((int)uVar10 == 0) {
              *(undefined4 *)(plVar6 + 3) = 0;
              return 0xffffffff;
            }
            pdVar1 = pdVar7 + -2;
            pdVar7 = pdVar7 + -2;
            uVar8 = (int)uVar10 - 1;
            uVar10 = (ulong)uVar8;
          } while (dVar11 < *pdVar1);
        }
        else {
          while (uVar8 = (uint)uVar10, (int)uVar8 < (int)(plVar6[1] - lVar5 >> 4) + -1) {
            pdVar7 = pdVar7 + 2;
            if (dVar11 < *pdVar7) break;
            uVar10 = (ulong)(uVar8 + 1);
          }
        }
        *(uint *)(plVar6 + 3) = uVar8;
        return (ulong)uVar8;
      }
      plVar6 = (long *)operator_new(uVar10);
      if ((long)uVar10 < 0x11) {
        lVar5 = __src_00[1];
        *plVar6 = *__src_00;
        plVar6[1] = lVar5;
      }
      else {
        memmove(plVar6,__src_00,uVar10);
      }
      pvVar2 = *(void **)this;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
      }
      lVar5 = (long)plVar6 + uVar10;
      *(long **)this = plVar6;
      *(long *)(this + 0x10) = lVar5;
    }
    else {
      __dest = *(undefined8 **)(this + 8);
      sVar9 = (long)__dest - (long)plVar6;
      if (sVar9 < uVar10) {
        if ((long)sVar9 < 0x11) {
          if (sVar9 == 0x10) {
            lVar3 = __src_00[1];
            *plVar6 = *__src_00;
            plVar6[1] = lVar3;
          }
        }
        else {
          memmove(plVar6,__src_00,sVar9);
          __dest = *(undefined8 **)(this + 8);
          plVar6 = *(long **)this;
          lVar5 = *(long *)(param_1 + 8);
          __src_00 = *(long **)param_1;
          sVar9 = (long)__dest - (long)plVar6;
        }
        __src = (undefined8 *)((long)__src_00 + sVar9);
        sVar9 = lVar5 - (long)__src;
        if ((long)sVar9 < 0x11) {
          lVar5 = (long)plVar6 + uVar10;
          if (sVar9 == 0x10) {
            uVar4 = __src[1];
            *__dest = *__src;
            __dest[1] = uVar4;
          }
        }
        else {
          memmove(__dest,__src,sVar9);
          lVar5 = *(long *)this + uVar10;
        }
      }
      else if ((long)uVar10 < 0x11) {
        lVar5 = (long)plVar6 + uVar10;
        if (uVar10 == 0x10) {
          lVar3 = __src_00[1];
          *plVar6 = *__src_00;
          plVar6[1] = lVar3;
        }
      }
      else {
        memmove(plVar6,__src_00,uVar10);
        lVar5 = *(long *)this + uVar10;
      }
    }
    *(long *)(this + 8) = lVar5;
  }
  uVar10 = preprocess(this);
  return uVar10;
}



/* msdfgen::Scanline::moveTo(double) const */

uint __thiscall msdfgen::Scanline::moveTo(Scanline *this,double param_1)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  double *pdVar4;
  uint uVar5;
  
  lVar2 = *(long *)this;
  if (lVar2 == *(long *)(this + 8)) {
    return 0xffffffff;
  }
  uVar3 = (ulong)*(int *)(this + 0x18);
  pdVar4 = (double *)(uVar3 * 0x10 + lVar2);
  if (param_1 < *pdVar4) {
    do {
      if ((int)uVar3 == 0) {
        *(undefined4 *)(this + 0x18) = 0;
        return 0xffffffff;
      }
      pdVar1 = pdVar4 + -2;
      pdVar4 = pdVar4 + -2;
      uVar5 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar5;
    } while (param_1 < *pdVar1);
  }
  else {
    while (uVar5 = (uint)uVar3, (int)uVar5 < (int)(*(long *)(this + 8) - lVar2 >> 4) + -1) {
      pdVar4 = pdVar4 + 2;
      if (param_1 < *pdVar4) break;
      uVar3 = (ulong)(uVar5 + 1);
    }
  }
  *(uint *)(this + 0x18) = uVar5;
  return uVar5;
}



/* msdfgen::Scanline::countIntersections(double) const */

int __thiscall msdfgen::Scanline::countIntersections(Scanline *this,double param_1)

{
  int iVar1;
  
  iVar1 = moveTo(this,param_1);
  return iVar1 + 1;
}



/* msdfgen::Scanline::sumIntersections(double) const */

undefined4 __thiscall msdfgen::Scanline::sumIntersections(Scanline *this,double param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = moveTo(this,param_1);
  uVar2 = 0;
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)((long)iVar1 * 0x10 + *(long *)this + 8);
  }
  return uVar2;
}



/* msdfgen::Scanline::filled(double, msdfgen::FillRule) const */

uint __thiscall msdfgen::Scanline::filled(double param_1,Scanline *this,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = moveTo(this,param_1);
  uVar3 = 0;
  if (-1 < iVar1) {
    uVar3 = *(uint *)((long)iVar1 * 0x10 + *(long *)this + 8);
  }
  if (param_3 == 2) {
    return (uint)(0 < (int)uVar3);
  }
  if (2 < param_3) {
    uVar2 = 0;
    if (param_3 == 3) {
      uVar2 = uVar3 >> 0x1f;
    }
    return uVar2;
  }
  if (param_3 != 0) {
    return uVar3 & 1;
  }
  return (uint)(uVar3 != 0);
}



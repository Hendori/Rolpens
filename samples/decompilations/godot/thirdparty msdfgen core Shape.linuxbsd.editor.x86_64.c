
/* compare(void const*, void const*) */

int msdfgen::Shape::orientContours()::Intersection::compare(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return (uint)(0.0 < *param_1 - *param_2) - (uint)(*param_1 - *param_2 < 0.0);
}



/* msdfgen::deconvergeEdge(msdfgen::EdgeHolder&, int, msdfgen::Vector2) */

void __thiscall msdfgen::deconvergeEdge(double param_1,double param_2,msdfgen *this,int param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long in_FS_OFFSET;
  double dVar4;
  double dVar5;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)this);
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if (iVar1 == 2) {
    msdfgen::EdgeHolder::operator*((EdgeHolder *)this);
    local_28 = msdfgen::QuadraticSegment::convertToCubic();
    msdfgen::EdgeHolder::operator=((EdgeHolder *)this,(EdgeHolder *)&local_28);
    msdfgen::EdgeHolder::~EdgeHolder((EdgeHolder *)&local_28);
  }
  else if (iVar1 != 3) goto LAB_00100070;
  lVar3 = msdfgen::EdgeHolder::operator*((EdgeHolder *)this);
  if (param_4 == 1) {
    dVar5 = *(double *)(lVar3 + 0x38) - *(double *)(lVar3 + 0x48);
    dVar4 = *(double *)(lVar3 + 0x30) - *(double *)(lVar3 + 0x40);
    dVar4 = SQRT(dVar4 * dVar4 + dVar5 * dVar5);
    *(double *)(lVar3 + 0x30) = dVar4 * param_1 + *(double *)(lVar3 + 0x30);
    *(double *)(lVar3 + 0x38) = dVar4 * param_2 + *(double *)(lVar3 + 0x38);
  }
  else {
    dVar5 = *(double *)(lVar3 + 0x28) - *(double *)(lVar3 + 0x18);
    dVar4 = *(double *)(lVar3 + 0x20) - *(double *)(lVar3 + 0x10);
    dVar4 = SQRT(dVar4 * dVar4 + dVar5 * dVar5);
    *(double *)(lVar3 + 0x20) = dVar4 * param_1 + *(double *)(lVar3 + 0x20);
    *(double *)(lVar3 + 0x28) = dVar4 * param_2 + *(double *)(lVar3 + 0x28);
  }
LAB_00100070:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::Shape::Shape() */

void __thiscall msdfgen::Shape::Shape(Shape *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (Shape)0x0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* msdfgen::Shape::validate() const */

undefined8 msdfgen::Shape::validate(void)

{
  long *plVar1;
  EdgeSegment *pEVar2;
  long *plVar3;
  EdgeHolder *this;
  EdgeHolder *pEVar4;
  long *in_RDI;
  double dVar5;
  double in_XMM1_Qa;
  double dVar6;
  double local_28;
  
  plVar3 = (long *)*in_RDI;
  if (plVar3 != (long *)in_RDI[1]) {
    do {
      if (*plVar3 != plVar3[1]) {
        plVar1 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)(plVar3[1] + -8));
        local_28 = (double)(**(code **)(*plVar1 + 0x28))(_LC1,plVar1);
        this = (EdgeHolder *)*plVar3;
        dVar6 = in_XMM1_Qa;
        if ((EdgeHolder *)*plVar3 != (EdgeHolder *)plVar3[1]) {
          do {
            in_XMM1_Qa = dVar6;
            pEVar2 = msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(this);
            if (pEVar2 == (EdgeSegment *)0x0) {
              return 0;
            }
            plVar1 = (long *)msdfgen::EdgeHolder::operator->(this);
            dVar5 = (double)(**(code **)(*plVar1 + 0x28))(0,plVar1);
            if (dVar5 != local_28) {
              return 0;
            }
            if (in_XMM1_Qa != dVar6) {
              return 0;
            }
            pEVar4 = this + 8;
            plVar1 = (long *)msdfgen::EdgeHolder::operator->(this);
            local_28 = (double)(**(code **)(*plVar1 + 0x28))(_LC1,plVar1);
            this = pEVar4;
            dVar6 = in_XMM1_Qa;
          } while ((EdgeHolder *)plVar3[1] != pEVar4);
        }
      }
      plVar3 = plVar3 + 3;
    } while ((long *)in_RDI[1] != plVar3);
  }
  return 1;
}



/* msdfgen::Shape::bound(double&, double&, double&, double&) const */

void msdfgen::Shape::bound(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = (double *)*param_1;
  if (pdVar1 != (double *)param_1[1]) {
    do {
      pdVar2 = pdVar1 + 3;
      msdfgen::Contour::bound(pdVar1,param_2,param_3,param_4);
      pdVar1 = pdVar2;
    } while ((double *)param_1[1] != pdVar2);
  }
  return;
}



/* msdfgen::Shape::boundMiters(double&, double&, double&, double&, double, double, int) const */

void msdfgen::Shape::boundMiters
               (double *param_1,double *param_2,double *param_3,double *param_4,double param_5,
               double param_6,int param_7)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = (double *)*param_1;
  if (pdVar1 != (double *)param_1[1]) {
    do {
      pdVar2 = pdVar1 + 3;
      msdfgen::Contour::boundMiters(pdVar1,param_2,param_3,param_4,param_5,param_6,param_7);
      pdVar1 = pdVar2;
    } while ((double *)param_1[1] != pdVar2);
  }
  return;
}



/* msdfgen::Shape::getBounds(double, double, int) const */

Shape * __thiscall msdfgen::Shape::getBounds(Shape *this,double param_1,double param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 in_register_00000034;
  long *plVar2;
  double *pdVar3;
  double *pdVar4;
  
  uVar1 = _LC3;
  plVar2 = (long *)CONCAT44(in_register_00000034,param_3);
  pdVar4 = (double *)*plVar2;
  *(undefined8 *)this = _LC3;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = _LC5;
  *(undefined8 *)(this + 0x10) = _LC5;
  *(undefined8 *)(this + 0x18) = uVar1;
  if (pdVar4 != (double *)plVar2[1]) {
    do {
      pdVar3 = pdVar4 + 3;
      msdfgen::Contour::bound(pdVar4,(double *)this,(double *)(this + 8),(double *)(this + 0x10));
      pdVar4 = pdVar3;
    } while ((double *)plVar2[1] != pdVar3);
  }
  if (0.0 < param_1) {
    *(double *)this = *(double *)this - param_1;
    *(double *)(this + 8) = *(double *)(this + 8) - param_1;
    *(double *)(this + 0x10) = *(double *)(this + 0x10) + param_1;
    *(double *)(this + 0x18) = *(double *)(this + 0x18) + param_1;
    if ((0.0 < param_2) && ((double *)*plVar2 != (double *)plVar2[1])) {
      pdVar4 = (double *)*plVar2;
      do {
        pdVar3 = pdVar4 + 3;
        msdfgen::Contour::boundMiters
                  (pdVar4,(double *)this,(double *)(this + 8),(double *)(this + 0x10),param_1,
                   param_2,(int)this + 0x18);
        pdVar4 = pdVar3;
      } while ((double *)plVar2[1] != pdVar3);
    }
  }
  return this;
}



/* msdfgen::Shape::edgeCount() const */

int __thiscall msdfgen::Shape::edgeCount(Shape *this)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = 0;
  for (plVar2 = *(long **)this; plVar2 != *(long **)(this + 8); plVar2 = plVar2 + 3) {
    iVar1 = iVar1 + (int)(plVar2[1] - *plVar2 >> 3);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::Shape::orientContours() */

void msdfgen::Shape::orientContours(void)

{
  EdgeHolder *pEVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  double *pdVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  double *pdVar12;
  size_t sVar13;
  ulong uVar14;
  long *in_RDI;
  long lVar15;
  double *__src;
  long lVar16;
  int iVar17;
  double *pdVar18;
  ulong uVar19;
  EdgeHolder *pEVar20;
  double *pdVar21;
  long in_FS_OFFSET;
  double dVar22;
  double dVar23;
  double in_XMM1_Qa;
  double dVar24;
  double *local_d0;
  undefined4 local_64 [3];
  double local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = in_RDI[1] - *in_RDI >> 3;
  if (in_RDI[1] - *in_RDI < 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (lVar9 * -0x5555555555555555 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar14 = lVar9 * -0x5555555555555554;
    puVar4 = (undefined4 *)operator_new(uVar14);
    *puVar4 = 0;
    if (lVar9 * -0x5555555555555555 == 1) {
      lVar10 = *in_RDI;
      uVar14 = 4;
      iVar17 = (int)(in_RDI[1] - lVar10 >> 3) * -0x55555555;
    }
    else {
      lVar10 = *in_RDI;
      iVar17 = (int)(in_RDI[1] - lVar10 >> 3) * -0x55555555;
      if (puVar4 + 1 != puVar4 + lVar9 * -0x1555555555555555) {
        memset(puVar4 + 1,0,uVar14 - 4);
      }
    }
    if (0 < iVar17) {
      lVar9 = 0;
      pdVar18 = (double *)0x0;
      local_d0 = (double *)0x0;
      do {
        if (puVar4[lVar9] == 0) {
          lVar15 = lVar9 * 0x18;
          pEVar20 = *(EdgeHolder **)(lVar10 + lVar15);
          if (pEVar20 == (EdgeHolder *)((undefined8 *)(lVar10 + lVar15))[1]) goto LAB_001005b0;
          plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar20);
          (**(code **)(*plVar5 + 0x28))(0,plVar5);
          lVar10 = *in_RDI;
          pEVar20 = *(EdgeHolder **)(lVar10 + lVar15);
          dVar24 = in_XMM1_Qa;
          dVar22 = _LC8;
          if (((EdgeHolder *)((long *)(lVar10 + lVar15))[1] != pEVar20) && (!NAN(in_XMM1_Qa))) {
            do {
              plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar20);
              (**(code **)(*plVar5 + 0x28))(_LC1,plVar5);
              dVar22 = _LC8;
              lVar10 = *in_RDI;
              bVar2 = in_XMM1_Qa == dVar24;
              pEVar1 = (EdgeHolder *)((long *)(lVar10 + lVar15))[1];
              if (pEVar20 + 8 == pEVar1) break;
              pEVar20 = pEVar20 + 8;
            } while (bVar2);
            pEVar20 = *(EdgeHolder **)(lVar10 + lVar15);
            if (pEVar20 != pEVar1) {
              while (bVar2) {
                plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar20);
                (**(code **)(*plVar5 + 0x28))(_LC8,plVar5);
                lVar10 = *in_RDI;
                if (*(EdgeHolder **)(lVar10 + 8 + lVar15) == pEVar20 + 8) break;
                bVar2 = in_XMM1_Qa == dVar24;
                pEVar20 = pEVar20 + 8;
              }
            }
          }
          lVar15 = in_RDI[1];
          dVar24 = dVar24 * dVar22;
          lVar16 = 0;
          dVar22 = in_XMM1_Qa * __LC7;
          pdVar6 = local_d0;
          in_XMM1_Qa = dVar24;
          if (0 < (int)(lVar15 - lVar10 >> 3) * -0x55555555) {
            do {
              plVar5 = (long *)(lVar10 + lVar16 * 0x18);
              pEVar20 = (EdgeHolder *)*plVar5;
              if (pEVar20 != (EdgeHolder *)plVar5[1]) {
                do {
                  plVar5 = (long *)msdfgen::EdgeHolder::operator->(pEVar20);
                  iVar17 = (**(code **)(*plVar5 + 0x50))(dVar22 + dVar24,plVar5,local_58,local_64);
                  if (0 < iVar17) {
                    lVar10 = 0;
                    pdVar12 = pdVar6;
                    __src = local_d0;
                    pdVar21 = pdVar18;
                    do {
                      in_XMM1_Qa = local_58[lVar10];
                      dVar23 = (double)CONCAT44((int)lVar16,local_64[lVar10]);
                      if (pdVar12 == pdVar21) {
                        sVar13 = (long)pdVar12 - (long)__src;
                        uVar7 = (long)sVar13 >> 4;
                        if (uVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__throw_length_error("vector::_M_realloc_insert");
                        }
                        if (__src == pdVar21) {
                          if (0xfffffffffffffffe < uVar7) goto LAB_001009f8;
                          uVar19 = 0x7ffffffffffffff;
                          if (uVar7 + 1 < 0x800000000000000) {
                            uVar19 = uVar7 + 1;
                          }
                          uVar19 = uVar19 << 4;
LAB_0010099e:
                          local_d0 = (double *)operator_new(uVar19);
                          pdVar18 = (double *)(uVar19 + (long)local_d0);
                        }
                        else {
                          uVar3 = uVar7 * 2;
                          if (uVar3 < uVar7) {
LAB_001009f8:
                            uVar19 = 0x7ffffffffffffff0;
                            goto LAB_0010099e;
                          }
                          pdVar18 = (double *)0x0;
                          local_d0 = (double *)0x0;
                          if (uVar3 != 0) {
                            uVar19 = 0x7ffffffffffffff;
                            if (uVar3 < 0x800000000000000) {
                              uVar19 = uVar3;
                            }
                            uVar19 = uVar19 << 4;
                            goto LAB_0010099e;
                          }
                        }
                        pdVar6 = (double *)((long)local_d0 + sVar13 + 0x10);
                        *(double *)((long)local_d0 + sVar13) = in_XMM1_Qa;
                        ((double *)((long)local_d0 + sVar13))[1] = dVar23;
                        if ((long)sVar13 < 1) {
                          if (__src == (double *)0x0) goto LAB_00100755;
                        }
                        else {
                          local_d0 = (double *)memmove(local_d0,__src,sVar13);
                        }
                        operator_delete(__src,(long)pdVar21 - (long)__src);
                      }
                      else {
                        *pdVar12 = in_XMM1_Qa;
                        pdVar6 = pdVar12 + 2;
                        pdVar12[1] = dVar23;
                        local_d0 = __src;
                        pdVar18 = pdVar21;
                      }
LAB_00100755:
                      lVar10 = lVar10 + 1;
                      pdVar12 = pdVar6;
                      __src = local_d0;
                      pdVar21 = pdVar18;
                    } while (lVar10 != iVar17);
                  }
                  pEVar20 = pEVar20 + 8;
                  lVar10 = *in_RDI;
                } while (*(EdgeHolder **)(lVar10 + 8 + lVar16 * 0x18) != pEVar20);
                lVar15 = in_RDI[1];
              }
              lVar16 = lVar16 + 1;
            } while ((int)lVar16 < (int)(lVar15 - lVar10 >> 3) * -0x55555555);
            if (pdVar6 != local_d0) {
              sVar13 = (long)pdVar6 - (long)local_d0 >> 4;
              qsort(local_d0,sVar13,0x10,orientContours()::Intersection::compare);
              uVar11 = (uint)sVar13;
              if ((int)uVar11 < 2) {
                if (uVar11 != 1) goto LAB_001005b0;
              }
              else {
                pdVar6 = local_d0 + 1;
                dVar24 = *local_d0;
                do {
                  in_XMM1_Qa = dVar24;
                  pdVar12 = pdVar6 + 1;
                  if (*pdVar12 == in_XMM1_Qa) {
                    *(undefined4 *)pdVar6 = 0;
                    *(undefined4 *)(pdVar6 + 2) = 0;
                  }
                  pdVar6 = pdVar6 + 2;
                  dVar24 = *pdVar12;
                } while (local_d0 + (ulong)(uVar11 - 2) * 2 + 3 != pdVar6);
              }
              pdVar6 = local_d0 + 1;
              uVar8 = 0;
              do {
                if (*(int *)pdVar6 != 0) {
                  puVar4[*(int *)((long)pdVar6 + 4)] =
                       puVar4[*(int *)((long)pdVar6 + 4)] +
                       ((uint)(0 < *(int *)pdVar6) ^ uVar8 & 1) * 2 + -1;
                }
                uVar8 = uVar8 + 1;
                pdVar6 = pdVar6 + 2;
              } while (uVar8 != uVar11);
              goto LAB_001005b0;
            }
          }
        }
        else {
LAB_001005b0:
          lVar15 = in_RDI[1];
          lVar10 = *in_RDI;
        }
        lVar9 = lVar9 + 1;
        iVar17 = (int)(lVar15 - lVar10 >> 3) * -0x55555555;
      } while ((int)lVar9 < iVar17);
      if (0 < iVar17) {
        lVar9 = 0;
        do {
          if ((int)puVar4[lVar9] < 0) {
            msdfgen::Contour::reverse();
            lVar15 = in_RDI[1];
            lVar10 = *in_RDI;
          }
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)(lVar15 - lVar10 >> 3) * -0x55555555);
      }
      if (local_d0 != (double *)0x0) {
        operator_delete(local_d0,(long)pdVar18 - (long)local_d0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      operator_delete(puVar4,uVar14);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::Shape::addContour(msdfgen::Contour const&) */

EdgeHolder * __thiscall msdfgen::Shape::addContour(Shape *this,Contour *param_1)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  EdgeHolder *in_RAX;
  EdgeHolder *extraout_RAX;
  ulong uVar3;
  EdgeHolder *pEVar4;
  EdgeHolder *pEVar5;
  EdgeHolder *pEVar6;
  long *plVar7;
  long *plVar8;
  
  pauVar1 = *(undefined1 (**) [16])(this + 8);
  if (pauVar1 == *(undefined1 (**) [16])(this + 0x10)) {
    std::vector<msdfgen::Contour,std::allocator<msdfgen::Contour>>::
    _M_realloc_insert<msdfgen::Contour_const&>
              ((vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *)this,pauVar1,param_1);
    return extraout_RAX;
  }
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  *(undefined8 *)pauVar1[1] = 0;
  *pauVar1 = (undefined1  [16])0x0;
  if (uVar3 == 0) {
    uVar3 = 0;
    pEVar6 = (EdgeHolder *)0x0;
  }
  else {
    if (0x7ffffffffffffff8 < uVar3) {
      std::__throw_bad_array_new_length();
      plVar2 = *(long **)((vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *)this + 8);
      plVar8 = *(long **)this;
      if ((long)plVar2 - (long)plVar8 == -0x18) {
        plVar7 = plVar8;
        if (plVar2 != plVar8) {
          do {
            pEVar6 = (EdgeHolder *)plVar7[1];
            pEVar5 = (EdgeHolder *)*plVar7;
            if (pEVar6 != pEVar5) {
              do {
                pEVar4 = pEVar5 + 8;
                msdfgen::EdgeHolder::~EdgeHolder(pEVar5);
                pEVar5 = pEVar4;
              } while (pEVar6 != pEVar4);
              pEVar5 = (EdgeHolder *)*plVar7;
            }
            if (pEVar5 != (EdgeHolder *)0x0) {
              operator_delete(pEVar5,plVar7[2] - (long)pEVar5);
            }
            plVar7 = plVar7 + 3;
          } while (plVar2 != plVar7);
          *(long **)((vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *)this + 8) = plVar8
          ;
        }
      }
      else {
        std::vector<msdfgen::Contour,std::allocator<msdfgen::Contour>>::_M_default_append
                  ((vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *)this,1);
        plVar8 = *(long **)((vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *)this + 8);
      }
      return (EdgeHolder *)(plVar8 + -3);
    }
    in_RAX = (EdgeHolder *)operator_new(uVar3);
    pEVar6 = in_RAX;
  }
  *(EdgeHolder **)pauVar1[1] = pEVar6 + uVar3;
  *(EdgeHolder **)*pauVar1 = pEVar6;
  *(EdgeHolder **)(*pauVar1 + 8) = pEVar6;
  pEVar5 = *(EdgeHolder **)(param_1 + 8);
  for (pEVar4 = *(EdgeHolder **)param_1; pEVar5 != pEVar4; pEVar4 = pEVar4 + 8) {
    in_RAX = (EdgeHolder *)msdfgen::EdgeHolder::EdgeHolder(pEVar6,pEVar4);
    pEVar6 = pEVar6 + 8;
  }
  *(EdgeHolder **)(*pauVar1 + 8) = pEVar6;
  *(long *)(this + 8) = *(long *)(this + 8) + 0x18;
  return in_RAX;
}



/* msdfgen::Shape::addContour() */

long * __thiscall msdfgen::Shape::addContour(Shape *this)

{
  long *plVar1;
  EdgeHolder *pEVar2;
  EdgeHolder *pEVar3;
  EdgeHolder *this_00;
  long *plVar4;
  long *plVar5;
  
  plVar1 = *(long **)(this + 8);
  plVar5 = *(long **)this;
  if ((long)plVar1 - (long)plVar5 == -0x18) {
    plVar4 = plVar5;
    if (plVar1 != plVar5) {
      do {
        pEVar2 = (EdgeHolder *)plVar4[1];
        this_00 = (EdgeHolder *)*plVar4;
        if (pEVar2 != this_00) {
          do {
            pEVar3 = this_00 + 8;
            msdfgen::EdgeHolder::~EdgeHolder(this_00);
            this_00 = pEVar3;
          } while (pEVar2 != pEVar3);
          this_00 = (EdgeHolder *)*plVar4;
        }
        if (this_00 != (EdgeHolder *)0x0) {
          operator_delete(this_00,plVar4[2] - (long)this_00);
        }
        plVar4 = plVar4 + 3;
      } while (plVar1 != plVar4);
      *(long **)(this + 8) = plVar5;
    }
  }
  else {
    std::vector<msdfgen::Contour,std::allocator<msdfgen::Contour>>::_M_default_append
              ((vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *)this,1);
    plVar5 = *(long **)(this + 8);
  }
  return plVar5 + -3;
}



/* msdfgen::Shape::scanline(msdfgen::Scanline&, double) const */

void __thiscall msdfgen::Shape::scanline(Shape *this,Scanline *param_1,double param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  EdgeHolder *this_00;
  long lVar4;
  long in_FS_OFFSET;
  long local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  long *local_78;
  undefined4 local_64 [3];
  long local_58 [5];
  
  plVar3 = *(long **)this;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (long *)0x0;
  if (plVar3 != *(long **)(this + 8)) {
    do {
      this_00 = (EdgeHolder *)*plVar3;
      if (this_00 != (EdgeHolder *)plVar3[1]) {
        do {
          plVar2 = (long *)msdfgen::EdgeHolder::operator->(this_00);
          iVar1 = (**(code **)(*plVar2 + 0x50))(param_2,plVar2,local_58,local_64);
          if (0 < iVar1) {
            lVar4 = 0;
            do {
              local_98 = local_58[lVar4];
              uStack_90 = local_64[lVar4];
              if ((long *)local_88._8_8_ == local_78) {
                std::
                vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
                ::_M_realloc_insert<msdfgen::Scanline::Intersection_const&>
                          ((vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
                            *)local_88,local_88._8_8_,&local_98);
              }
              else {
                *(long *)local_88._8_8_ = local_98;
                *(long *)(local_88._8_8_ + 8) = CONCAT44(uStack_8c,uStack_90);
                local_88._8_8_ = (long *)(local_88._8_8_ + 0x10);
              }
              lVar4 = lVar4 + 1;
            } while (lVar4 != iVar1);
          }
          this_00 = this_00 + 8;
        } while ((EdgeHolder *)plVar3[1] != this_00);
      }
      plVar3 = plVar3 + 3;
    } while (*(long **)(this + 8) != plVar3);
  }
  msdfgen::Scanline::setIntersections((vector *)param_1);
  if ((void *)local_88._0_8_ != (void *)0x0) {
    operator_delete((void *)local_88._0_8_,(long)local_78 - local_88._0_8_);
  }
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* msdfgen::Shape::normalize() */

void msdfgen::Shape::normalize(void)

{
  msdfgen *pmVar1;
  long *plVar2;
  EdgeHolder *pEVar3;
  EdgeHolder *pEVar4;
  EdgeHolder *pEVar5;
  vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *pvVar6;
  long *in_RDI;
  EdgeHolder *pEVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double in_XMM1_Qa;
  msdfgen *pmVar12;
  msdfgen *pmVar13;
  double dVar14;
  double dVar15;
  msdfgen *local_98;
  double dStack_90;
  msdfgen *local_88;
  double dStack_80;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  pvVar6 = (vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *)*in_RDI;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  dStack_90 = in_XMM1_Qa;
  if (pvVar6 != (vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *)in_RDI[1]) {
    do {
      while( true ) {
        pEVar3 = *(EdgeHolder **)(pvVar6 + 8);
        pEVar7 = *(EdgeHolder **)pvVar6;
        if ((long)pEVar3 - (long)pEVar7 == 8) break;
        pEVar4 = pEVar3 + -8;
        if (pEVar7 != pEVar3) {
          do {
            while( true ) {
              pEVar3 = pEVar7;
              plVar2 = (long *)msdfgen::EdgeHolder::operator->(pEVar4);
              dVar8 = (double)(**(code **)(*plVar2 + 0x30))(_LC1,plVar2);
              dVar15 = SQRT(dVar8 * dVar8 + dStack_90 * dStack_90);
              if (dVar15 == 0.0) {
                dVar8 = 0.0;
                dVar9 = _LC1;
              }
              else {
                dVar9 = dStack_90 / dVar15;
                dVar8 = dVar8 / dVar15;
              }
              plVar2 = (long *)msdfgen::EdgeHolder::operator->(pEVar3);
              dVar15 = (double)(**(code **)(*plVar2 + 0x30))(0,plVar2);
              dVar14 = SQRT(dVar15 * dVar15 + dStack_90 * dStack_90);
              if (dVar14 == 0.0) {
                dVar15 = 0.0;
                dStack_90 = _LC1;
                dVar14 = dVar9;
              }
              else {
                dStack_90 = dStack_90 / dVar14;
                dVar15 = dVar15 / dVar14;
                dVar14 = dStack_90 * dVar9;
              }
              if (dVar15 * dVar8 + dVar14 < _LC13) break;
              pEVar7 = pEVar3 + 8;
              pEVar4 = pEVar3;
              if (*(EdgeHolder **)(pvVar6 + 8) == pEVar3 + 8) goto LAB_00101287;
            }
            pmVar12 = (msdfgen *)(dStack_90 - dVar9);
            dVar15 = dVar15 - dVar8;
            dVar8 = SQRT((double)pmVar12 * (double)pmVar12 + dVar15 * dVar15);
            if (dVar8 == 0.0) {
              local_88 = _LC14;
              dStack_80 = 0.0;
              local_98 = __LC12;
              dStack_90 = _UNK_00101ca8;
            }
            else {
              pmVar12 = (msdfgen *)(((double)pmVar12 / dVar8) * (double)_LC14);
              local_98 = (msdfgen *)((ulong)pmVar12 ^ __LC15);
              dStack_90 = (dVar15 / dVar8) * (double)_LC14;
              dStack_80 = (double)((ulong)dStack_90 ^ __LC15);
              local_88 = pmVar12;
            }
            dVar8 = dStack_90;
            pmVar1 = local_98;
            plVar2 = (long *)msdfgen::EdgeHolder::operator->(pEVar3);
            dVar9 = (double)(**(code **)(*plVar2 + 0x30))(0,plVar2);
            pmVar13 = pmVar12;
            plVar2 = (long *)msdfgen::EdgeHolder::operator->(pEVar4);
            dVar15 = (double)(**(code **)(*plVar2 + 0x38))(_LC1,plVar2);
            dVar9 = (double)pmVar13 * dVar9;
            dVar14 = dVar15 * (double)pmVar12 - dVar9;
            plVar2 = (long *)msdfgen::EdgeHolder::operator->(pEVar4);
            dVar10 = (double)(**(code **)(*plVar2 + 0x30))(_LC1,plVar2);
            dVar15 = dVar9;
            plVar2 = (long *)msdfgen::EdgeHolder::operator->(pEVar3);
            dVar11 = (double)(**(code **)(*plVar2 + 0x38))(0,plVar2);
            if (0.0 <= (dVar11 * dVar9 - dVar15 * dVar10) + dVar14) {
              local_98 = local_88;
              dStack_90 = dStack_80;
              local_88 = pmVar1;
              dStack_80 = dVar8;
            }
            deconvergeEdge(local_88,dStack_80,pEVar4,1);
            deconvergeEdge(local_98,pEVar3,0);
            pEVar7 = pEVar3 + 8;
            pEVar4 = pEVar3;
          } while (*(EdgeHolder **)(pvVar6 + 8) != pEVar3 + 8);
        }
LAB_00101287:
        pvVar6 = pvVar6 + 0x18;
        if ((vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *)in_RDI[1] == pvVar6)
        goto LAB_00101295;
      }
      local_38 = 0;
      local_48 = (undefined1  [16])0x0;
      plVar2 = (long *)msdfgen::EdgeHolder::operator->(pEVar7);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_48,local_48 + 8,&local_38);
      pEVar3 = *(EdgeHolder **)pvVar6;
      pEVar7 = *(EdgeHolder **)(pvVar6 + 8);
      pEVar4 = pEVar3;
      if (pEVar3 != pEVar7) {
        do {
          pEVar5 = pEVar4 + 8;
          msdfgen::EdgeHolder::~EdgeHolder(pEVar4);
          pEVar4 = pEVar5;
        } while (pEVar7 != pEVar5);
        *(EdgeHolder **)(pvVar6 + 8) = pEVar3;
        pEVar7 = pEVar3;
      }
      local_50 = local_48._0_8_;
      if (pEVar7 == *(EdgeHolder **)(pvVar6 + 0x10)) {
        std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
        _M_realloc_insert<msdfgen::EdgeHolder>(pvVar6,pEVar7,(EdgeHolder *)&local_50);
      }
      else {
        msdfgen::EdgeHolder::EdgeHolder(pEVar7,(EdgeHolder *)&local_50);
        *(long *)(pvVar6 + 8) = *(long *)(pvVar6 + 8) + 8;
      }
      msdfgen::EdgeHolder::~EdgeHolder((EdgeHolder *)&local_50);
      pEVar3 = *(EdgeHolder **)(pvVar6 + 8);
      local_50 = local_48._8_8_;
      if (pEVar3 == *(EdgeHolder **)(pvVar6 + 0x10)) {
        std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
        _M_realloc_insert<msdfgen::EdgeHolder>(pvVar6,pEVar3,(EdgeHolder *)&local_50);
      }
      else {
        msdfgen::EdgeHolder::EdgeHolder(pEVar3,(EdgeHolder *)&local_50);
        *(long *)(pvVar6 + 8) = *(long *)(pvVar6 + 8) + 8;
      }
      msdfgen::EdgeHolder::~EdgeHolder((EdgeHolder *)&local_50);
      pEVar3 = *(EdgeHolder **)(pvVar6 + 8);
      local_50 = local_38;
      if (pEVar3 == *(EdgeHolder **)(pvVar6 + 0x10)) {
        std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
        _M_realloc_insert<msdfgen::EdgeHolder>(pvVar6,pEVar3,(EdgeHolder *)&local_50);
      }
      else {
        msdfgen::EdgeHolder::EdgeHolder(pEVar3,(EdgeHolder *)&local_50);
        *(long *)(pvVar6 + 8) = *(long *)(pvVar6 + 8) + 8;
      }
      pvVar6 = pvVar6 + 0x18;
      msdfgen::EdgeHolder::~EdgeHolder((EdgeHolder *)&local_50);
    } while ((vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *)in_RDI[1] != pvVar6)
    ;
  }
LAB_00101295:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<msdfgen::Contour, std::allocator<msdfgen::Contour>
   >::_M_realloc_insert<msdfgen::Contour const&>(__gnu_cxx::__normal_iterator<msdfgen::Contour*,
   std::vector<msdfgen::Contour, std::allocator<msdfgen::Contour> > >, msdfgen::Contour const&) */

void __thiscall
std::vector<msdfgen::Contour,std::allocator<msdfgen::Contour>>::
_M_realloc_insert<msdfgen::Contour_const&>
          (vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *this,undefined8 *param_2,
          long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  EdgeHolder *this_00;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  EdgeHolder *pEVar13;
  EdgeHolder *pEVar14;
  undefined8 *local_60;
  ulong local_48;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar6 = (long)puVar1 - (long)puVar2 >> 3;
  uVar7 = lVar6 * -0x5555555555555555;
  if (uVar7 == 0x555555555555555) goto LAB_001016dc;
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar7) goto LAB_00101677;
    local_48 = 0x555555555555555;
    if (uVar7 + 1 < 0x555555555555556) {
      local_48 = uVar7 + 1;
    }
    uVar7 = local_48 * 0x18;
LAB_00101686:
    local_60 = (undefined8 *)operator_new(uVar7);
  }
  else {
    uVar4 = lVar6 * 0x5555555555555556;
    if (uVar4 < uVar7) {
LAB_00101677:
      uVar7 = 0x7ffffffffffffff8;
      local_48 = 0x555555555555555;
      goto LAB_00101686;
    }
    if (uVar4 != 0) {
      local_48 = 0x555555555555555;
      if (uVar4 < 0x555555555555556) {
        local_48 = uVar4;
      }
      uVar7 = local_48 * 0x18;
      goto LAB_00101686;
    }
    local_60 = (undefined8 *)0x0;
    local_48 = uVar4;
  }
  pEVar13 = (EdgeHolder *)param_3[1];
  pEVar14 = (EdgeHolder *)*param_3;
  pauVar8 = (undefined1 (*) [16])((long)local_60 + ((long)param_2 - (long)puVar2));
  *(undefined8 *)pauVar8[1] = 0;
  *pauVar8 = (undefined1  [16])0x0;
  uVar7 = (long)pEVar13 - (long)pEVar14;
  if (uVar7 == 0) {
    this_00 = (EdgeHolder *)0x0;
  }
  else {
    if (0x7ffffffffffffff8 < uVar7) {
      std::__throw_bad_array_new_length();
LAB_001016dc:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    this_00 = (EdgeHolder *)operator_new(uVar7);
    pEVar13 = (EdgeHolder *)param_3[1];
    pEVar14 = (EdgeHolder *)*param_3;
  }
  *(EdgeHolder **)pauVar8[1] = this_00 + uVar7;
  *(EdgeHolder **)*pauVar8 = this_00;
  *(EdgeHolder **)(*pauVar8 + 8) = this_00;
  for (; pEVar13 != pEVar14; pEVar14 = pEVar14 + 8) {
    msdfgen::EdgeHolder::EdgeHolder(this_00,pEVar14);
    this_00 = this_00 + 8;
  }
  *(EdgeHolder **)(*pauVar8 + 8) = this_00;
  puVar9 = puVar2;
  puVar12 = local_60;
  if (param_2 != puVar2) {
    do {
      uVar5 = puVar9[1];
      uVar3 = puVar9[2];
      puVar10 = puVar9 + 3;
      *puVar12 = *puVar9;
      puVar12[1] = uVar5;
      puVar12[2] = uVar3;
      puVar9 = puVar10;
      puVar12 = puVar12 + 3;
    } while (param_2 != puVar10);
    puVar12 = (undefined8 *)
              ((long)local_60 +
              ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x18);
  }
  puVar9 = puVar12 + 3;
  puVar10 = param_2;
  if (param_2 != puVar1) {
    do {
      uVar5 = puVar10[1];
      uVar3 = puVar10[2];
      puVar11 = puVar10 + 3;
      *puVar9 = *puVar10;
      puVar9[1] = uVar5;
      puVar9[2] = uVar3;
      puVar10 = puVar11;
      puVar9 = puVar9 + 3;
    } while (puVar1 != puVar11);
    puVar9 = (undefined8 *)
             ((long)puVar12 + ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x30)
    ;
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = local_60;
  *(undefined8 **)(this + 8) = puVar9;
  *(undefined8 **)(this + 0x10) = local_60 + local_48 * 3;
  return;
}



/* std::vector<msdfgen::Contour, std::allocator<msdfgen::Contour> >::_M_default_append(unsigned
   long) */

void __thiscall
std::vector<msdfgen::Contour,std::allocator<msdfgen::Contour>>::_M_default_append
          (vector<msdfgen::Contour,std::allocator<msdfgen::Contour>> *this,ulong param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  
  if (param_1 == 0) {
    return;
  }
  pauVar2 = *(undefined1 (**) [16])(this + 8);
  pauVar12 = *(undefined1 (**) [16])this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pauVar2 >> 3) * -0x5555555555555555)) {
    pauVar12 = pauVar2;
    do {
      *(undefined8 *)pauVar12[1] = 0;
      pauVar13 = (undefined1 (*) [16])(pauVar12[1] + 8);
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    } while (pauVar13 != (undefined1 (*) [16])((long)pauVar2 + param_1 * 0x18));
    *(undefined1 (**) [16])(this + 8) = pauVar13;
    return;
  }
  lVar8 = (long)pauVar2 - (long)pauVar12 >> 3;
  if (param_1 <= lVar8 * 0x5555555555555555 + 0x555555555555555U) {
    uVar1 = param_1 + lVar8 * -0x5555555555555555;
    uVar9 = 0x555555555555555;
    if (uVar1 < 0x555555555555556) {
      uVar9 = uVar1;
    }
    if ((param_1 <= (ulong)(lVar8 * -0x5555555555555555)) &&
       (uVar9 = lVar8 * 0x5555555555555556, 0x555555555555555 < uVar9)) {
      uVar9 = 0x555555555555555;
    }
    puVar10 = (undefined8 *)operator_new(uVar9 * 0x18);
    pauVar13 = (undefined1 (*) [16])((long)puVar10 + ((long)pauVar2 - (long)pauVar12));
    pauVar11 = pauVar13;
    do {
      *(undefined8 *)pauVar11[1] = 0;
      pauVar7 = pauVar11 + 1;
      *pauVar11 = (undefined1  [16])0x0;
      pauVar11 = (undefined1 (*) [16])(*pauVar7 + 8);
      pauVar5 = pauVar12;
      puVar6 = puVar10;
    } while ((undefined1 (*) [16])(*pauVar7 + 8) !=
             (undefined1 (*) [16])((long)pauVar13 + param_1 * 0x18));
    for (; pauVar5 != pauVar2; pauVar5 = (undefined1 (*) [16])(pauVar5[1] + 8)) {
      uVar4 = *(undefined8 *)(*pauVar5 + 8);
      uVar3 = *(undefined8 *)pauVar5[1];
      *puVar6 = *(undefined8 *)*pauVar5;
      puVar6[1] = uVar4;
      puVar6[2] = uVar3;
      puVar6 = puVar6 + 3;
    }
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar12,*(long *)(this + 0x10) - (long)pauVar12);
    }
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar10 + uVar1 * 3;
    *(undefined8 **)(this + 0x10) = puVar10 + uVar9 * 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("vector::_M_default_append");
}



/* void std::vector<msdfgen::Scanline::Intersection, std::allocator<msdfgen::Scanline::Intersection>
   >::_M_realloc_insert<msdfgen::Scanline::Intersection
   const&>(__gnu_cxx::__normal_iterator<msdfgen::Scanline::Intersection*,
   std::vector<msdfgen::Scanline::Intersection, std::allocator<msdfgen::Scanline::Intersection> > >,
   msdfgen::Scanline::Intersection const&) */

void __thiscall
std::vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>::
_M_realloc_insert<msdfgen::Scanline::Intersection_const&>
          (vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
           *this,void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  undefined8 uVar2;
  ulong uVar3;
  void *__dest_00;
  ulong uVar4;
  size_t __n;
  long lVar5;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar3 = (long)pvVar1 - (long)__src >> 4;
  if (uVar3 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00101990;
    uVar4 = 0x7ffffffffffffff;
    if (uVar3 + 1 < 0x800000000000000) {
      uVar4 = uVar3 + 1;
    }
    uVar4 = uVar4 << 4;
LAB_0010199a:
    __dest_00 = operator_new(uVar4);
    lVar5 = uVar4 + (long)__dest_00;
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar3) {
LAB_00101990:
      uVar4 = 0x7ffffffffffffff0;
      goto LAB_0010199a;
    }
    if (uVar4 != 0) {
      if (0x7ffffffffffffff < uVar4) {
        uVar4 = 0x7ffffffffffffff;
      }
      uVar4 = uVar4 << 4;
      goto LAB_0010199a;
    }
    lVar5 = 0;
    __dest_00 = (void *)0x0;
  }
  uVar2 = param_3[1];
  __dest = (void *)((long)__dest_00 + __n + 0x10);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  ((undefined8 *)((long)__dest_00 + __n))[1] = uVar2;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010196e;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010196e:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar5;
  return;
}



/* void std::vector<msdfgen::EdgeHolder, std::allocator<msdfgen::EdgeHolder>
   >::_M_realloc_insert<msdfgen::EdgeHolder>(__gnu_cxx::__normal_iterator<msdfgen::EdgeHolder*,
   std::vector<msdfgen::EdgeHolder, std::allocator<msdfgen::EdgeHolder> > >, msdfgen::EdgeHolder&&)
    */

void __thiscall
std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
_M_realloc_insert<msdfgen::EdgeHolder>
          (vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *this,EdgeHolder *param_2
          ,EdgeHolder *param_3)

{
  EdgeHolder *pEVar1;
  EdgeHolder *pEVar2;
  ulong uVar3;
  ulong uVar4;
  EdgeHolder *pEVar5;
  EdgeHolder *pEVar6;
  EdgeHolder *pEVar7;
  EdgeHolder *pEVar8;
  EdgeHolder *local_60;
  EdgeHolder *local_50;
  
  pEVar1 = *(EdgeHolder **)(this + 8);
  pEVar2 = *(EdgeHolder **)this;
  uVar3 = (long)pEVar1 - (long)pEVar2 >> 3;
  if (uVar3 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pEVar2 == pEVar1) {
    uVar4 = uVar3 + 1;
    if (0xfffffffffffffffe < uVar3) goto LAB_00101ba0;
    if (0xfffffffffffffff < uVar4) {
      uVar4 = 0xfffffffffffffff;
    }
    uVar4 = uVar4 * 8;
LAB_00101baa:
    local_60 = (EdgeHolder *)operator_new(uVar4);
    local_50 = local_60 + uVar4;
    msdfgen::EdgeHolder::EdgeHolder(local_60 + (long)(param_2 + -(long)pEVar2),param_3);
    pEVar6 = local_60;
    pEVar5 = pEVar2;
    if (param_2 != pEVar2) goto LAB_00101af8;
    pEVar6 = local_60 + 8;
    if (pEVar2 != pEVar1) goto LAB_00101b20;
LAB_00101b51:
    if (pEVar2 == (EdgeHolder *)0x0) goto LAB_00101b72;
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar3) {
LAB_00101ba0:
      uVar4 = 0x7ffffffffffffff8;
      goto LAB_00101baa;
    }
    if (uVar4 != 0) {
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
      goto LAB_00101baa;
    }
    msdfgen::EdgeHolder::EdgeHolder(param_2 + -(long)pEVar2,param_3);
    local_50 = (EdgeHolder *)0x0;
    local_60 = (EdgeHolder *)0x0;
    pEVar6 = local_60;
    pEVar5 = pEVar2;
    if (param_2 == pEVar2) {
      pEVar6 = (EdgeHolder *)0x8;
      goto LAB_00101b20;
    }
LAB_00101af8:
    do {
      pEVar7 = pEVar6;
      pEVar8 = pEVar5 + 8;
      msdfgen::EdgeHolder::EdgeHolder(pEVar7,pEVar5);
      pEVar6 = pEVar7 + 8;
      pEVar5 = pEVar8;
    } while (pEVar8 != param_2);
    pEVar6 = pEVar7 + 0x10;
    pEVar5 = pEVar2;
    if (pEVar8 == pEVar1) {
LAB_00101b40:
      do {
        pEVar7 = pEVar5 + 8;
        msdfgen::EdgeHolder::~EdgeHolder(pEVar5);
        pEVar5 = pEVar7;
      } while (pEVar7 != pEVar1);
      goto LAB_00101b51;
    }
LAB_00101b20:
    do {
      pEVar7 = param_2 + 8;
      pEVar5 = pEVar6 + 8;
      msdfgen::EdgeHolder::EdgeHolder(pEVar6,param_2);
      pEVar6 = pEVar5;
      param_2 = pEVar7;
    } while (pEVar7 != pEVar1);
    pEVar5 = pEVar2;
    if (pEVar2 != pEVar1) goto LAB_00101b40;
  }
  operator_delete(pEVar2,*(long *)(this + 0x10) - (long)pEVar2);
LAB_00101b72:
  *(EdgeHolder **)this = local_60;
  *(EdgeHolder **)(this + 8) = pEVar6;
  *(EdgeHolder **)(this + 0x10) = local_50;
  return;
}



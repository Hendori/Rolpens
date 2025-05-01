
/* msdfgen::Contour::bound(double&, double&, double&, double&) const */

void __thiscall
msdfgen::Contour::bound
          (Contour *this,double *param_1,double *param_2,double *param_3,double *param_4)

{
  long *plVar1;
  EdgeHolder *this_00;
  EdgeHolder *pEVar2;
  
  this_00 = *(EdgeHolder **)this;
  if (this_00 != *(EdgeHolder **)(this + 8)) {
    do {
      pEVar2 = this_00 + 8;
      plVar1 = (long *)msdfgen::EdgeHolder::operator->(this_00);
      (**(code **)(*plVar1 + 0x58))(plVar1,param_1,param_2,param_3,param_4);
      this_00 = pEVar2;
    } while (*(EdgeHolder **)(this + 8) != pEVar2);
  }
  return;
}



/* msdfgen::Contour::boundMiters(double&, double&, double&, double&, double, double, int) const */

void __thiscall
msdfgen::Contour::boundMiters
          (Contour *this,double *param_1,double *param_2,double *param_3,double *param_4,
          double param_5,double param_6,int param_7)

{
  long *plVar1;
  EdgeHolder *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  if (*(long *)(this + 8) != *(long *)this) {
    plVar1 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)(*(long *)(this + 8) + -8));
    auVar8 = (**(code **)(*plVar1 + 0x30))(_LC2,plVar1);
    dVar7 = auVar8._8_8_;
    dVar3 = auVar8._0_8_;
    dVar4 = SQRT(dVar3 * dVar3 + dVar7 * dVar7);
    if (dVar4 == 0.0) {
      dVar7 = 0.0;
      dVar3 = 0.0;
    }
    else {
      dVar7 = dVar7 / dVar4;
      dVar3 = dVar3 / dVar4;
    }
    this_00 = *(EdgeHolder **)this;
    if (this_00 != *(EdgeHolder **)(this + 8)) {
      do {
        plVar1 = (long *)msdfgen::EdgeHolder::operator->(this_00);
        auVar8 = (**(code **)(*plVar1 + 0x30))(0,plVar1);
        dVar6 = auVar8._8_8_;
        dVar4 = auVar8._0_8_;
        dVar5 = SQRT(dVar4 * dVar4 + dVar6 * dVar6);
        if (dVar5 == 0.0) {
          dVar6 = 0.0;
          dVar4 = 0.0;
          dVar5 = _LC1;
          dVar2 = _LC1;
        }
        else {
          dVar6 = dVar6 / dVar5;
          dVar4 = dVar4 / dVar5;
          dVar5 = (double)((ulong)dVar6 ^ (ulong)_LC1);
          dVar2 = (double)((ulong)dVar4 ^ (ulong)_LC1);
        }
        if (0.0 <= (dVar3 * dVar5 - dVar7 * dVar2) * (double)param_7) {
          dVar6 = dVar7 - dVar6;
          dVar4 = dVar3 - dVar4;
          dVar7 = (_LC2 - (dVar2 * dVar3 + dVar5 * dVar7)) * _LC4;
          dVar3 = param_6;
          if ((0.0 < dVar7) && (dVar7 = _LC2 / SQRT(dVar7), dVar7 <= param_6)) {
            dVar3 = dVar7;
          }
          dVar7 = SQRT(dVar6 * dVar6 + dVar4 * dVar4);
          if (dVar7 == 0.0) {
            dVar6 = 0.0;
            dVar4 = 0.0;
          }
          else {
            dVar6 = dVar6 / dVar7;
            dVar4 = dVar4 / dVar7;
          }
          plVar1 = (long *)msdfgen::EdgeHolder::operator->(this_00);
          auVar8 = (**(code **)(*plVar1 + 0x28))(0,plVar1);
          dVar7 = auVar8._0_8_ + dVar3 * param_5 * dVar4;
          dVar3 = auVar8._8_8_ + dVar6 * dVar3 * param_5;
          if (dVar7 < *param_1) {
            *param_1 = dVar7;
          }
          if (dVar3 < *param_2) {
            *param_2 = dVar3;
          }
          if (*param_3 <= dVar7 && dVar7 != *param_3) {
            *param_3 = dVar7;
          }
          if (*param_4 <= dVar3 && dVar3 != *param_4) {
            *param_4 = dVar3;
          }
        }
        plVar1 = (long *)msdfgen::EdgeHolder::operator->(this_00);
        auVar8 = (**(code **)(*plVar1 + 0x30))(_LC2,plVar1);
        dVar7 = auVar8._8_8_;
        dVar3 = auVar8._0_8_;
        dVar4 = SQRT(dVar3 * dVar3 + dVar7 * dVar7);
        if (dVar4 == 0.0) {
          dVar7 = 0.0;
          dVar3 = 0.0;
        }
        else {
          dVar7 = dVar7 / dVar4;
          dVar3 = dVar3 / dVar4;
        }
        this_00 = this_00 + 8;
      } while (*(EdgeHolder **)(this + 8) != this_00);
    }
  }
  return;
}



/* msdfgen::Contour::winding() const */

int msdfgen::Contour::winding(void)

{
  long *plVar1;
  EdgeHolder *pEVar2;
  EdgeHolder *pEVar3;
  long *in_RDI;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double in_XMM1_Qa;
  double dVar10;
  
  pEVar2 = (EdgeHolder *)in_RDI[1];
  pEVar3 = (EdgeHolder *)*in_RDI;
  if (pEVar3 != pEVar2) {
    if ((long)pEVar2 - (long)pEVar3 == 8) {
      plVar1 = (long *)msdfgen::EdgeHolder::operator->(pEVar3);
      dVar9 = (double)(**(code **)(*plVar1 + 0x28))(0,plVar1);
      dVar4 = in_XMM1_Qa;
      plVar1 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)*in_RDI);
      dVar5 = (double)(**(code **)(*plVar1 + 0x28))(_LC5,plVar1);
      dVar10 = dVar4;
      plVar1 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)*in_RDI);
      dVar6 = (double)(**(code **)(*plVar1 + 0x28))(_LC6,plVar1);
      dVar4 = (in_XMM1_Qa + dVar10) * (dVar9 - dVar6) +
              (dVar4 + dVar10) * (dVar6 - dVar5) + (dVar5 - dVar9) * (in_XMM1_Qa + dVar4) + 0.0;
      return (uint)(0.0 < dVar4) - (uint)(dVar4 < 0.0);
    }
    if ((long)pEVar2 - (long)pEVar3 == 0x10) {
      plVar1 = (long *)msdfgen::EdgeHolder::operator->(pEVar3);
      dVar5 = (double)(**(code **)(*plVar1 + 0x28))(0,plVar1);
      dVar4 = in_XMM1_Qa;
      plVar1 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)*in_RDI);
      dVar6 = (double)(**(code **)(*plVar1 + 0x28))(_LC4,plVar1);
      dVar10 = dVar4;
      plVar1 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)(*in_RDI + 8));
      dVar7 = (double)(**(code **)(*plVar1 + 0x28))(0,plVar1);
      dVar9 = dVar10;
      plVar1 = (long *)msdfgen::EdgeHolder::operator->((EdgeHolder *)(*in_RDI + 8));
      dVar8 = (double)(**(code **)(*plVar1 + 0x28))(_LC4,plVar1);
      dVar4 = (dVar5 - dVar8) * (in_XMM1_Qa + dVar9) +
              (dVar10 + dVar9) * (dVar8 - dVar7) +
              (dVar4 + dVar10) * (dVar7 - dVar6) + (dVar6 - dVar5) * (dVar4 + in_XMM1_Qa) + 0.0;
      return (uint)(0.0 < dVar4) - (uint)(dVar4 < 0.0);
    }
    plVar1 = (long *)msdfgen::EdgeHolder::operator->(pEVar2 + -8);
    dVar4 = (double)(**(code **)(*plVar1 + 0x28))(0,plVar1);
    if ((EdgeHolder *)*in_RDI != (EdgeHolder *)in_RDI[1]) {
      dVar10 = 0.0;
      pEVar2 = (EdgeHolder *)*in_RDI;
      do {
        pEVar3 = pEVar2 + 8;
        dVar9 = in_XMM1_Qa;
        plVar1 = (long *)msdfgen::EdgeHolder::operator->(pEVar2);
        dVar5 = (double)(**(code **)(*plVar1 + 0x28))(0,plVar1);
        dVar10 = dVar10 + (dVar5 - dVar4) * (in_XMM1_Qa + dVar9);
        pEVar2 = pEVar3;
        in_XMM1_Qa = dVar9;
        dVar4 = dVar5;
      } while ((EdgeHolder *)in_RDI[1] != pEVar3);
      return (uint)(0.0 < dVar10) - (uint)(dVar10 < 0.0);
    }
  }
  return 0;
}



/* msdfgen::Contour::reverse() */

void __thiscall msdfgen::Contour::reverse(Contour *this)

{
  long lVar1;
  EdgeHolder *this_00;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  EdgeHolder *pEVar6;
  int iVar7;
  long lVar8;
  
  pEVar6 = *(EdgeHolder **)(this + 8);
  this_00 = *(EdgeHolder **)this;
  uVar4 = (long)pEVar6 - (long)this_00 >> 3;
  iVar3 = (int)uVar4;
  iVar7 = (int)(((uint)(uVar4 >> 0x1f) & 1) + iVar3) >> 1;
  if (1 < iVar3) {
    lVar1 = (long)iVar7 + -1;
    lVar5 = (long)iVar7;
    lVar8 = lVar1;
    while( true ) {
      msdfgen::EdgeHolder::swap
                (this_00 + lVar5 * 8 + -8,
                 this_00 + (((long)pEVar6 - (long)this_00 >> 3) - lVar5) * 8);
      if (lVar1 - (ulong)(iVar7 - 1) == lVar8) break;
      pEVar6 = *(EdgeHolder **)(this + 8);
      this_00 = *(EdgeHolder **)this;
      lVar5 = lVar8;
      lVar8 = lVar8 + -1;
    }
    this_00 = *(EdgeHolder **)this;
    pEVar6 = *(EdgeHolder **)(this + 8);
  }
  if (this_00 != pEVar6) {
    do {
      pEVar6 = this_00 + 8;
      plVar2 = (long *)msdfgen::EdgeHolder::operator->(this_00);
      (**(code **)(*plVar2 + 0x60))(plVar2);
      this_00 = pEVar6;
    } while (*(EdgeHolder **)(this + 8) != pEVar6);
  }
  return;
}



/* msdfgen::Contour::addEdge(msdfgen::EdgeHolder const&) */

void __thiscall msdfgen::Contour::addEdge(Contour *this,EdgeHolder *param_1)

{
  EdgeHolder *this_00;
  
  this_00 = *(EdgeHolder **)(this + 8);
  if (this_00 != *(EdgeHolder **)(this + 0x10)) {
    msdfgen::EdgeHolder::EdgeHolder(this_00,param_1);
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
    return;
  }
  std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
  _M_realloc_insert<msdfgen::EdgeHolder_const&>(this,this_00,param_1);
  return;
}



/* msdfgen::Contour::addEdge() */

EdgeHolder * __thiscall msdfgen::Contour::addEdge(Contour *this)

{
  EdgeHolder *pEVar1;
  EdgeHolder *pEVar2;
  EdgeHolder *this_00;
  EdgeHolder *pEVar3;
  
  pEVar1 = *(EdgeHolder **)(this + 8);
  pEVar2 = *(EdgeHolder **)this;
  if ((long)pEVar1 - (long)pEVar2 != -8) {
    std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::_M_default_append
              ((vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *)this,1);
    return (EdgeHolder *)(*(long *)(this + 8) + -8);
  }
  this_00 = pEVar2;
  if (pEVar1 != pEVar2) {
    do {
      pEVar3 = this_00 + 8;
      msdfgen::EdgeHolder::~EdgeHolder(this_00);
      this_00 = pEVar3;
    } while (pEVar1 != pEVar3);
    *(EdgeHolder **)(this + 8) = pEVar2;
  }
  return pEVar2 + -8;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<msdfgen::EdgeHolder, std::allocator<msdfgen::EdgeHolder>
   >::_M_realloc_insert<msdfgen::EdgeHolder
   const&>(__gnu_cxx::__normal_iterator<msdfgen::EdgeHolder*, std::vector<msdfgen::EdgeHolder,
   std::allocator<msdfgen::EdgeHolder> > >, msdfgen::EdgeHolder const&) */

void std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::
     _M_realloc_insert<msdfgen::EdgeHolder_const&>
               (undefined8 *param_1,EdgeHolder *param_2,EdgeHolder *param_3,byte param_4)

{
  byte *pbVar1;
  EdgeHolder *pEVar2;
  EdgeHolder *pEVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  EdgeHolder *pEVar7;
  EdgeHolder *pEVar8;
  EdgeHolder *pEVar9;
  EdgeHolder *pEVar10;
  bool bVar11;
  bool bVar12;
  EdgeHolder *local_60;
  EdgeHolder *local_50;
  
  pEVar2 = (EdgeHolder *)param_1[1];
  pEVar3 = (EdgeHolder *)*param_1;
  uVar5 = (long)pEVar2 - (long)pEVar3 >> 3;
  bVar11 = uVar5 < 0xfffffffffffffff;
  bVar12 = uVar5 == 0xfffffffffffffff;
  if (bVar12) {
    uVar4 = std::__throw_length_error("vector::_M_realloc_insert");
    if (bVar11 || bVar12) {
      pbVar1 = (byte *)((ulong)(uVar4 & 0x53894800) - 0x7d);
      *pbVar1 = *pbVar1 | param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pEVar3 == pEVar2) {
    uVar6 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_00100950;
    if (0xfffffffffffffff < uVar6) {
      uVar6 = 0xfffffffffffffff;
    }
    uVar6 = uVar6 * 8;
LAB_0010095a:
    local_60 = (EdgeHolder *)operator_new(uVar6);
    local_50 = local_60 + uVar6;
    msdfgen::EdgeHolder::EdgeHolder(local_60 + (long)(param_2 + -(long)pEVar3),param_3);
    pEVar8 = local_60;
    pEVar7 = pEVar3;
    if (param_2 != pEVar3) goto LAB_001008a8;
    pEVar8 = local_60 + 8;
    if (pEVar3 != pEVar2) goto LAB_001008d0;
LAB_00100901:
    if (pEVar3 == (EdgeHolder *)0x0) goto LAB_00100922;
  }
  else {
    uVar6 = uVar5 * 2;
    if (uVar6 < uVar5) {
LAB_00100950:
      uVar6 = 0x7ffffffffffffff8;
      goto LAB_0010095a;
    }
    if (uVar6 != 0) {
      if (0xfffffffffffffff < uVar6) {
        uVar6 = 0xfffffffffffffff;
      }
      uVar6 = uVar6 * 8;
      goto LAB_0010095a;
    }
    msdfgen::EdgeHolder::EdgeHolder(param_2 + -(long)pEVar3,param_3);
    local_50 = (EdgeHolder *)0x0;
    local_60 = (EdgeHolder *)0x0;
    pEVar8 = local_60;
    pEVar7 = pEVar3;
    if (param_2 == pEVar3) {
      pEVar8 = (EdgeHolder *)0x8;
      goto LAB_001008d0;
    }
LAB_001008a8:
    do {
      pEVar9 = pEVar8;
      pEVar10 = pEVar7 + 8;
      msdfgen::EdgeHolder::EdgeHolder(pEVar9,pEVar7);
      pEVar8 = pEVar9 + 8;
      pEVar7 = pEVar10;
    } while (pEVar10 != param_2);
    pEVar8 = pEVar9 + 0x10;
    pEVar7 = pEVar3;
    if (pEVar10 == pEVar2) {
LAB_001008f0:
      do {
        pEVar9 = pEVar7 + 8;
        msdfgen::EdgeHolder::~EdgeHolder(pEVar7);
        pEVar7 = pEVar9;
      } while (pEVar9 != pEVar2);
      goto LAB_00100901;
    }
LAB_001008d0:
    do {
      pEVar9 = param_2 + 8;
      pEVar7 = pEVar8 + 8;
      msdfgen::EdgeHolder::EdgeHolder(pEVar8,param_2);
      pEVar8 = pEVar7;
      param_2 = pEVar9;
    } while (pEVar9 != pEVar2);
    pEVar7 = pEVar3;
    if (pEVar3 != pEVar2) goto LAB_001008f0;
  }
  operator_delete(pEVar3,param_1[2] - (long)pEVar3);
LAB_00100922:
  *param_1 = local_60;
  param_1[1] = pEVar8;
  param_1[2] = local_50;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<msdfgen::EdgeHolder, std::allocator<msdfgen::EdgeHolder>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>>::_M_default_append
          (vector<msdfgen::EdgeHolder,std::allocator<msdfgen::EdgeHolder>> *this,ulong param_1)

{
  ulong uVar1;
  EdgeHolder *__s;
  EdgeHolder *pEVar2;
  ulong uVar3;
  EdgeHolder *pEVar4;
  ulong uVar5;
  EdgeHolder *this_00;
  EdgeHolder *pEVar6;
  EdgeHolder *pEVar7;
  EdgeHolder *pEVar8;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(EdgeHolder **)(this + 8);
  pEVar2 = *(EdgeHolder **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__s >> 3) < param_1) {
    uVar3 = (long)__s - (long)pEVar2 >> 3;
    if (0xfffffffffffffff - uVar3 < param_1) {
      std::__throw_length_error("vector::_M_default_append");
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = param_1 + uVar3;
    uVar5 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar5 = uVar1;
    }
    if ((param_1 <= uVar3) && (uVar5 = uVar3 * 2, 0xfffffffffffffff < uVar5)) {
      uVar5 = 0xfffffffffffffff;
    }
    pEVar4 = (EdgeHolder *)operator_new(uVar5 * 8);
    memset(pEVar4 + ((long)__s - (long)pEVar2),0,param_1 << 3);
    pEVar6 = pEVar4;
    pEVar7 = pEVar2;
    if (pEVar2 != __s) {
      do {
        pEVar8 = pEVar7 + 8;
        msdfgen::EdgeHolder::EdgeHolder(pEVar6,pEVar7);
        this_00 = pEVar2;
        pEVar6 = pEVar6 + 8;
        pEVar7 = pEVar8;
      } while (__s != pEVar8);
      do {
        pEVar6 = this_00 + 8;
        msdfgen::EdgeHolder::~EdgeHolder(this_00);
        this_00 = pEVar6;
      } while (__s != pEVar6);
    }
    if (pEVar2 != (EdgeHolder *)0x0) {
      operator_delete(pEVar2,*(long *)(this + 0x10) - (long)pEVar2);
    }
    *(EdgeHolder **)this = pEVar4;
    *(EdgeHolder **)(this + 8) = pEVar4 + uVar1 * 8;
    *(EdgeHolder **)(this + 0x10) = pEVar4 + uVar5 * 8;
    return;
  }
  memset(__s,0,param_1 * 8);
  *(EdgeHolder **)(this + 8) = __s + param_1 * 8;
  return;
}



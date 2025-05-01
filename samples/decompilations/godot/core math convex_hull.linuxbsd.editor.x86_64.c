
/* LocalVector<ConvexHullInternal::Point32, unsigned int, false, false>::resize(unsigned int) [clone
   .part.0] */

void LocalVector<ConvexHullInternal::Point32,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* get_vertex_copy(ConvexHullInternal::Vertex*, LocalVector<ConvexHullInternal::Vertex*, unsigned
   int, false, false>&) [clone .part.0] */

uint get_vertex_copy(Vertex *param_1,LocalVector *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)param_2;
  *(uint *)(param_1 + 0x78) = uVar1;
  pvVar4 = *(void **)(param_2 + 8);
  uVar2 = uVar1;
  if (uVar1 == *(uint *)(param_2 + 4)) {
    uVar5 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar5 = 1;
    }
    *(int *)(param_2 + 4) = (int)uVar5;
    pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar5 * 8,false);
    *(void **)(param_2 + 8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *(uint *)param_2;
  }
  *(uint *)param_2 = uVar2 + 1;
  *(Vertex **)((long)pvVar4 + (ulong)uVar2 * 8) = param_1;
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::Int128::to_scalar() const [clone .isra.0] */

undefined8 ConvexHullInternal::Int128::to_scalar(void)

{
  long lVar1;
  long in_RSI;
  ulong in_RDI;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  
  if (in_RSI < 0) {
    while( true ) {
      lVar1 = (ulong)(in_RDI == 0) - in_RSI;
      in_RSI = -0x8000000000000000;
      lVar1 = lVar1 + -1;
      if (-1 < lVar1) break;
      in_RDI = 0;
    }
    if ((long)in_RDI < 1) {
      fVar4 = (float)(long)-in_RDI;
    }
    else {
      fVar4 = (float)-in_RDI;
    }
    return CONCAT44(_UNK_0010b884,(uint)((float)lVar1 * __LC8 + fVar4) ^ _LC9);
  }
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  if (-1 < (long)in_RDI) {
    auVar2._0_4_ = (float)in_RSI * __LC8 + (float)(long)in_RDI;
    return auVar2._0_8_;
  }
  auVar3._0_4_ = (float)in_RSI * __LC8 + (float)in_RDI;
  auVar3._4_12_ = auVar2._4_12_;
  return auVar3._0_8_;
}



/* ConvexHullInternal::Int128::mul(long, long) */

undefined1  [16] ConvexHullInternal::Int128::mul(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar4 = -param_1;
  if (0 < param_1) {
    uVar4 = param_1;
  }
  bVar1 = (byte)((ulong)param_1 >> 0x38);
  if (param_2 < 0) {
    bVar1 = ~bVar1;
    param_2 = -param_2;
  }
  uVar6 = (uVar4 & 0xffffffff) * ((ulong)param_2 >> 0x20);
  uVar9 = (param_2 & 0xffffffffU) * (uVar4 >> 0x20);
  uVar2 = (uVar4 & 0xffffffff) * (param_2 & 0xffffffffU);
  uVar8 = (uVar6 & 0xffffffff) + (uVar9 & 0xffffffff);
  lVar5 = (uVar8 >> 0x20) +
          (uVar6 >> 0x20) + (uVar9 >> 0x20) + ((ulong)param_2 >> 0x20) * (uVar4 >> 0x20);
  uVar8 = uVar8 << 0x20;
  lVar3 = uVar2 + uVar8;
  if (CARRY8(uVar2,uVar8)) {
    lVar5 = lVar5 + 1;
  }
  lVar7 = lVar3;
  if ((char)bVar1 < '\0') {
    lVar7 = -lVar3;
    lVar5 = -lVar5 - (ulong)(lVar3 != 0);
  }
  auVar10._8_8_ = lVar5;
  auVar10._0_8_ = lVar7;
  return auVar10;
}



/* ConvexHullInternal::Int128::mul(unsigned long, unsigned long) */

undefined1  [16] ConvexHullInternal::Int128::mul(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = (param_1 & 0xffffffff) * (param_2 >> 0x20);
  uVar2 = (param_2 & 0xffffffff) * (param_1 >> 0x20);
  uVar1 = (param_1 & 0xffffffff) * (param_2 & 0xffffffff);
  uVar5 = (uVar4 & 0xffffffff) + (uVar2 & 0xffffffff);
  lVar3 = (uVar2 >> 0x20) + (uVar4 >> 0x20) + (param_2 >> 0x20) * (param_1 >> 0x20) +
          (uVar5 >> 0x20);
  uVar5 = uVar5 << 0x20;
  auVar6._0_8_ = uVar1 + uVar5;
  if (CARRY8(uVar1,uVar5)) {
    lVar3 = lVar3 + 1;
  }
  auVar6._8_8_ = lVar3;
  return auVar6;
}



/* ConvexHullInternal::Int128::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined1  [16] __thiscall ConvexHullInternal::Int128::operator*(Int128 *this,long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)(this + 8);
  uVar1 = *(ulong *)this;
  if (lVar3 < 0) {
    lVar3 = ((ulong)(uVar1 == 0) - lVar3) + -1;
    if (param_1 < 0) {
      auVar4 = mul(-uVar1,-param_1);
      auVar4._8_8_ = auVar4._8_8_ + lVar3 * -param_1;
      return auVar4;
    }
    auVar4 = mul(-uVar1,param_1);
    lVar2 = auVar4._0_8_;
    lVar3 = param_1 * lVar3 + auVar4._8_8_;
  }
  else {
    if (-1 < param_1) {
      auVar4 = mul(uVar1,param_1);
      auVar5._0_8_ = auVar4._0_8_;
      auVar5._8_8_ = lVar3 * param_1 + auVar4._8_8_;
      return auVar5;
    }
    lVar3 = -param_1 * lVar3;
    auVar4 = mul(uVar1,-param_1);
    lVar2 = auVar4._0_8_;
    lVar3 = lVar3 + auVar4._8_8_;
  }
  auVar6._0_8_ = -lVar2;
  auVar6._8_8_ = ((ulong)(lVar2 == 0) - lVar3) + -1;
  return auVar6;
}



/* ConvexHullInternal::Rational64::compare(ConvexHullInternal::Rational64 const&) const */

ulong __thiscall ConvexHullInternal::Rational64::compare(Rational64 *this,Rational64 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = *(uint *)(this + 0x10);
  uVar2 = (ulong)uVar1;
  if (uVar1 == *(uint *)(param_1 + 0x10)) {
    if (uVar1 != 0) {
      auVar3 = Int128::mul(*(ulong *)this,*(ulong *)(param_1 + 8));
      auVar4 = Int128::mul(*(ulong *)(this + 8),*(ulong *)param_1);
      if (auVar4._8_8_ <= auVar3._8_8_) {
        if (auVar3._8_8_ <= auVar4._8_8_) {
          if (auVar3._0_8_ < auVar4._0_8_) goto LAB_001003e0;
          uVar2 = uVar2 & 0xffffffff;
          if (auVar3._0_8_ <= auVar4._0_8_) {
            uVar2 = 0;
          }
        }
        return uVar2 & 0xffffffff;
      }
LAB_001003e0:
      return (ulong)(uint)-(int)uVar2;
    }
  }
  else {
    uVar2 = (ulong)(uVar1 - *(uint *)(param_1 + 0x10));
  }
  return uVar2;
}



/* ConvexHullInternal::Rational128::compare(long) const */

int __thiscall ConvexHullInternal::Rational128::compare(Rational128 *this,long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  iVar2 = *(int *)(this + 0x20);
  if (this[0x24] != (Rational128)0x0) {
    iVar1 = -(uint)((long)iVar2 * *(long *)this < param_1);
    if (param_1 < (long)iVar2 * *(long *)this) {
      iVar1 = 1;
    }
    return iVar1;
  }
  if (param_1 < 1) {
    if (param_1 == 0) {
      return iVar2;
    }
    if (-1 < iVar2) {
      return 1;
    }
    param_1 = -param_1;
  }
  else if (iVar2 < 1) {
    return -1;
  }
  auVar3 = Int128::operator*((Int128 *)(this + 0x10),param_1);
  if (*(ulong *)(this + 8) < auVar3._8_8_) {
LAB_00100470:
    return -iVar2;
  }
  if (*(ulong *)(this + 8) <= auVar3._8_8_) {
    if (*(ulong *)this < auVar3._0_8_) goto LAB_00100470;
    if (*(ulong *)this <= auVar3._0_8_) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ConvexHullInternal::Rational128::compare(ConvexHullInternal::Rational128 const&) const */

int __thiscall ConvexHullInternal::Rational128::compare(Rational128 *this,Rational128 *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  iVar1 = *(int *)(this + 0x20);
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    return iVar1 - *(int *)(param_1 + 0x20);
  }
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(ulong *)this;
  if (this[0x24] != (Rational128)0x0) {
    iVar1 = compare(param_1,(long)iVar1 * uVar2);
    return -iVar1;
  }
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar7 = *(ulong *)(param_1 + 0x18);
  uVar5 = *(ulong *)(this + 8);
  auVar12 = Int128::mul(uVar2,uVar3);
  auVar13 = Int128::mul(uVar2,uVar7);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auVar13._8_8_;
  auVar14 = Int128::mul(uVar5,uVar3);
  uVar4 = auVar14._8_8_;
  auVar15 = Int128::mul(uVar5,uVar7);
  uVar7 = auVar14._0_8_ + auVar13._0_8_;
  uVar3 = (ulong)CARRY8(auVar14._0_8_,auVar13._0_8_);
  uVar5 = SUB168(auVar15 + auVar16,0);
  uVar11 = SUB168(auVar15 + auVar16,8);
  uVar10 = uVar4 + uVar5;
  uVar2 = uVar3 + uVar10;
  uVar6 = auVar12._8_8_ + uVar7;
  uVar7 = (ulong)CARRY8(auVar12._8_8_,uVar7);
  if (CARRY8(uVar4,uVar5)) {
    uVar11 = uVar11 + 1;
LAB_001005c6:
    if (uVar7 != 0) {
      uVar2 = uVar2 + 1;
      uVar11 = uVar11 + (uVar2 == 0);
    }
  }
  else {
    if (!CARRY8(uVar3,uVar10)) goto LAB_001005c6;
    uVar11 = uVar11 + 1;
    uVar2 = uVar2 + uVar7;
  }
  uVar3 = *(ulong *)param_1;
  uVar7 = *(ulong *)(this + 0x10);
  uVar5 = *(ulong *)(param_1 + 8);
  uVar4 = *(ulong *)(this + 0x18);
  auVar16 = Int128::mul(uVar7,uVar3);
  auVar14 = Int128::mul(uVar7,uVar5);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = auVar14._8_8_;
  auVar15 = Int128::mul(uVar4,uVar3);
  uVar3 = auVar15._0_8_;
  auVar17 = Int128::mul(uVar4,uVar5);
  uVar8 = auVar14._0_8_ + uVar3;
  uVar10 = SUB168(auVar17 + auVar13,0);
  uVar5 = (ulong)CARRY8(auVar14._0_8_,uVar3);
  uVar3 = SUB168(auVar17 + auVar13,8);
  uVar9 = auVar15._8_8_ + uVar10;
  uVar7 = auVar16._8_8_ + uVar8;
  uVar4 = uVar5 + uVar9;
  uVar8 = (ulong)CARRY8(auVar16._8_8_,uVar8);
  if (CARRY8(auVar15._8_8_,uVar10)) {
    uVar3 = uVar3 + 1;
LAB_00100686:
    if ((uVar8 == 0) || (uVar4 = uVar4 + 1, uVar4 != 0)) goto LAB_001006bc;
    if (uVar11 < uVar3 + 1) goto LAB_00100710;
    if (uVar3 + 1 < uVar11) {
      return iVar1;
    }
  }
  else {
    if (!CARRY8(uVar5,uVar9)) goto LAB_00100686;
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + uVar8;
LAB_001006bc:
    if (uVar11 < uVar3) goto LAB_00100710;
    if (uVar3 < uVar11) {
      return iVar1;
    }
    if (uVar2 < uVar4) goto LAB_00100710;
  }
  if (uVar4 < uVar2) {
    return iVar1;
  }
  if (uVar7 <= uVar6) {
    if (uVar7 < uVar6) {
      return iVar1;
    }
    if (auVar16._0_8_ <= auVar12._0_8_) {
      if (auVar16._0_8_ < auVar12._0_8_) {
        return iVar1;
      }
      return 0;
    }
  }
LAB_00100710:
  return -iVar1;
}



/* ConvexHullInternal::new_edge_pair(ConvexHullInternal::Vertex*, ConvexHullInternal::Vertex*) */

undefined1 (*) [16] __thiscall
ConvexHullInternal::new_edge_pair(ConvexHullInternal *this,Vertex *param_1,Vertex *param_2)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  if ((param_1 == (Vertex *)0x0) || (param_2 == (Vertex *)0x0)) {
    _err_print_error("new_edge_pair","core/math/convex_hull.cpp",0x32b,
                     "Assertion \"p_from && p_to\" failed.",0,0);
    iVar7 = *(int *)(this + 0x94);
  }
  else {
    iVar7 = *(int *)(this + 0x94);
  }
  if (iVar7 == 0) {
    uVar6 = *(uint *)(this + 0x90) + 1;
    lVar14 = (ulong)*(uint *)(this + 0x90) * 8;
    *(uint *)(this + 0x90) = uVar6;
    uVar8 = Memory::realloc_static(*(void **)(this + 0x80),(ulong)uVar6 << 3,false);
    *(undefined8 *)(this + 0x80) = uVar8;
    uVar8 = Memory::realloc_static(*(void **)(this + 0x88),(ulong)*(uint *)(this + 0x90) << 3,false)
    ;
    lVar4 = *(long *)(this + 0x80);
    *(undefined8 *)(this + 0x88) = uVar8;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0xa0) * 0x30,false);
    uVar6 = *(uint *)(this + 0xa0);
    *(undefined8 *)(lVar4 + lVar14) = uVar8;
    lVar4 = *(long *)(this + 0x88);
    uVar8 = Memory::alloc_static((ulong)uVar6 << 3,false);
    *(undefined8 *)(lVar4 + lVar14) = uVar8;
    uVar6 = *(uint *)(this + 0xa0);
    if (uVar6 == 0) {
      plVar12 = *(long **)(this + 0x88);
    }
    else {
      plVar12 = *(long **)(this + 0x88);
      lVar4 = *(long *)(this + 0x80);
      plVar5 = (long *)*plVar12;
      lVar9 = 0;
      plVar11 = plVar5;
      do {
        plVar10 = plVar11 + 1;
        lVar13 = *(long *)(lVar4 + lVar14) + lVar9;
        lVar9 = lVar9 + 0x30;
        *plVar11 = lVar13;
        plVar11 = plVar10;
      } while (plVar5 + uVar6 != plVar10);
    }
    iVar7 = uVar6 + *(int *)(this + 0x94);
  }
  else {
    plVar12 = *(long **)(this + 0x88);
  }
  uVar6 = iVar7 - 1;
  *(uint *)(this + 0x94) = uVar6;
  pauVar2 = *(undefined1 (**) [16])
             (plVar12[uVar6 >> ((byte)*(undefined4 *)(this + 0x98) & 0x1f)] +
             (ulong)(uVar6 & *(uint *)(this + 0x9c)) * 8);
  *(undefined4 *)(pauVar2[2] + 8) = 0xffffffff;
  *pauVar2 = (undefined1  [16])0x0;
  pauVar2[1] = (undefined1  [16])0x0;
  iVar7 = *(int *)(this + 0x94);
  *(undefined8 *)pauVar2[2] = 0;
  if (iVar7 == 0) {
    uVar6 = *(uint *)(this + 0x90) + 1;
    lVar14 = (ulong)*(uint *)(this + 0x90) * 8;
    *(uint *)(this + 0x90) = uVar6;
    uVar8 = Memory::realloc_static(*(void **)(this + 0x80),(ulong)uVar6 << 3,false);
    *(undefined8 *)(this + 0x80) = uVar8;
    uVar8 = Memory::realloc_static(*(void **)(this + 0x88),(ulong)*(uint *)(this + 0x90) << 3,false)
    ;
    lVar4 = *(long *)(this + 0x80);
    *(undefined8 *)(this + 0x88) = uVar8;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0xa0) * 0x30,false);
    uVar6 = *(uint *)(this + 0xa0);
    *(undefined8 *)(lVar4 + lVar14) = uVar8;
    lVar4 = *(long *)(this + 0x88);
    uVar8 = Memory::alloc_static((ulong)uVar6 << 3,false);
    *(undefined8 *)(lVar4 + lVar14) = uVar8;
    uVar6 = *(uint *)(this + 0xa0);
    if (uVar6 == 0) {
      plVar12 = *(long **)(this + 0x88);
    }
    else {
      plVar12 = *(long **)(this + 0x88);
      lVar4 = *(long *)(this + 0x80);
      plVar5 = (long *)*plVar12;
      lVar9 = 0;
      plVar11 = plVar5;
      do {
        plVar10 = plVar11 + 1;
        lVar13 = *(long *)(lVar14 + lVar4) + lVar9;
        lVar9 = lVar9 + 0x30;
        *plVar11 = lVar13;
        plVar11 = plVar10;
      } while (plVar10 != plVar5 + uVar6);
    }
    iVar7 = uVar6 + *(int *)(this + 0x94);
  }
  uVar6 = iVar7 - 1;
  *(uint *)(this + 0x94) = uVar6;
  pauVar3 = *(undefined1 (**) [16])
             (plVar12[uVar6 >> ((byte)*(undefined4 *)(this + 0x98) & 0x1f)] +
             (ulong)(uVar6 & *(uint *)(this + 0x9c)) * 8);
  *(undefined4 *)(pauVar3[2] + 8) = 0xffffffff;
  uVar1 = *(undefined4 *)(this + 0x160);
  *pauVar3 = (undefined1  [16])0x0;
  *(undefined1 (**) [16])pauVar2[1] = pauVar3;
  *(undefined1 (**) [16])pauVar3[1] = pauVar2;
  *(undefined4 *)(pauVar2[2] + 8) = uVar1;
  *(undefined4 *)(pauVar3[2] + 8) = uVar1;
  *(Vertex **)(pauVar2[1] + 8) = param_2;
  *(Vertex **)(pauVar3[1] + 8) = param_1;
  *(undefined8 *)pauVar2[2] = 0;
  *(undefined8 *)pauVar3[2] = 0;
  iVar7 = *(int *)(this + 0x170) + 1;
  *(int *)(this + 0x170) = iVar7;
  if (*(int *)(this + 0x174) < iVar7) {
    *(int *)(this + 0x174) = iVar7;
  }
  return pauVar2;
}



/* ConvexHullInternal::merge_projection(ConvexHullInternal::IntermediateHull&,
   ConvexHullInternal::IntermediateHull&, ConvexHullInternal::Vertex*&,
   ConvexHullInternal::Vertex*&) */

undefined8 __thiscall
ConvexHullInternal::merge_projection
          (ConvexHullInternal *this,IntermediateHull *param_1,IntermediateHull *param_2,
          Vertex **param_3,Vertex **param_4)

{
  int iVar1;
  Vertex *pVVar2;
  Vertex *pVVar3;
  Vertex *pVVar4;
  long *plVar5;
  bool bVar6;
  bool bVar7;
  Vertex *pVVar8;
  Vertex *pVVar9;
  undefined8 uVar10;
  Vertex *pVVar11;
  int iVar12;
  Vertex *pVVar13;
  long *plVar14;
  int iVar15;
  Vertex *pVVar16;
  int iVar17;
  Vertex *pVVar18;
  Vertex *pVVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  Vertex *pVVar26;
  int iVar27;
  
  pVVar16 = *(Vertex **)(param_2 + 0x10);
  pVVar2 = *(Vertex **)(param_1 + 0x18);
  if (*(long *)(pVVar2 + 0x68) == *(long *)(pVVar16 + 0x68)) {
    if (*(int *)(pVVar16 + 0x70) <= *(int *)(pVVar2 + 0x70)) {
      _err_print_error("merge_projection","core/math/convex_hull.cpp",0x341,
                       "Assertion \"v0->point.z < v1->point.z\" failed.",0);
    }
    pVVar26 = *(Vertex **)(pVVar16 + 8);
    if (pVVar16 == pVVar26) {
      *param_3 = pVVar2;
      plVar5 = *(long **)(pVVar16 + 0x10);
      if (plVar5 != (long *)0x0) {
        plVar14 = (long *)*plVar5;
        if (plVar5 != plVar14) {
          _err_print_error("merge_projection","core/math/convex_hull.cpp",0x346,
                           "Assertion \"v1->edges->next == v1->edges\" failed.",0,0);
          plVar14 = *(long **)(pVVar16 + 0x10);
        }
        pVVar16 = *(Vertex **)((long)plVar14 + 0x18);
        if (*(long **)(pVVar16 + 0x10) != (long *)**(long **)(pVVar16 + 0x10)) {
          _err_print_error("merge_projection","core/math/convex_hull.cpp",0x348,
                           "Assertion \"v1->edges->next == v1->edges\" failed.",0,0);
        }
      }
      uVar10 = 0;
      goto LAB_00100cac;
    }
    pVVar2 = *(Vertex **)pVVar16;
    *(Vertex **)pVVar26 = pVVar2;
    *(Vertex **)(pVVar2 + 8) = pVVar26;
    if (*(Vertex **)param_2 == pVVar16) {
      if ((*(int *)(pVVar2 + 0x68) < *(int *)(pVVar26 + 0x68)) ||
         ((*(int *)(pVVar2 + 0x68) == *(int *)(pVVar26 + 0x68) &&
          (*(int *)(pVVar2 + 0x6c) < *(int *)(pVVar26 + 0x6c))))) {
        *(Vertex **)param_2 = pVVar2;
      }
      else {
        *(Vertex **)param_2 = pVVar26;
      }
    }
    pVVar3 = *(Vertex **)(param_2 + 8);
    if (pVVar3 == pVVar16) {
      iVar1 = *(int *)(pVVar2 + 0x68);
      iVar22 = *(int *)(pVVar26 + 0x68);
      if (iVar22 < iVar1) {
        iVar12 = *(int *)(pVVar2 + 0x6c);
      }
      else {
        iVar20 = *(int *)(pVVar26 + 0x6c);
        if ((iVar1 != iVar22) ||
           (iVar12 = *(int *)(pVVar2 + 0x6c), *(int *)(pVVar2 + 0x6c) <= iVar20)) {
          *(Vertex **)(param_2 + 8) = pVVar26;
          goto LAB_00100ad7;
        }
      }
      iVar20 = iVar12;
      *(Vertex **)(param_2 + 8) = pVVar2;
      pVVar26 = pVVar2;
      iVar22 = iVar1;
    }
    else {
      iVar20 = *(int *)(pVVar3 + 0x6c);
      pVVar26 = pVVar3;
      iVar22 = *(int *)(pVVar3 + 0x68);
    }
  }
  else {
    pVVar26 = *(Vertex **)(param_2 + 8);
    iVar20 = *(int *)(pVVar26 + 0x6c);
    iVar22 = *(int *)(pVVar26 + 0x68);
  }
LAB_00100ad7:
  pVVar2 = *(Vertex **)param_2;
  pVVar3 = *(Vertex **)(param_1 + 8);
  pVVar4 = *(Vertex **)param_1;
  iVar1 = *(int *)(pVVar2 + 0x68);
  bVar7 = false;
  iVar23 = 1;
  pVVar11 = pVVar3;
  pVVar18 = (Vertex *)0x0;
  pVVar19 = pVVar26;
  pVVar16 = (Vertex *)0x0;
  iVar12 = iVar22;
  do {
    iVar27 = *(int *)(pVVar11 + 0x68);
    iVar21 = *(int *)(pVVar11 + 0x6c);
    iVar12 = (iVar12 - iVar27) * iVar23;
    if (0 < iVar12) {
      iVar27 = iVar20 - iVar21;
      pVVar9 = pVVar11;
      if (!bVar7) goto LAB_00100d1d;
LAB_00100bd8:
      pVVar11 = *(Vertex **)pVVar9;
      pVVar8 = pVVar9;
      pVVar13 = pVVar19;
      if ((pVVar9 != pVVar11) &&
         (iVar17 = *(int *)(pVVar11 + 0x6c) - iVar21, pVVar9 = pVVar11, iVar17 < 1))
      goto LAB_00100cc8;
      do {
        pVVar19 = *(Vertex **)pVVar13;
        pVVar9 = pVVar8;
        while( true ) {
          if (pVVar13 == pVVar19) goto LAB_00100c50;
          iVar17 = *(int *)(pVVar19 + 0x6c);
          iVar24 = (*(int *)(pVVar19 + 0x68) - *(int *)(pVVar9 + 0x68)) * iVar23;
          iVar25 = iVar17 - iVar20;
          iVar15 = (*(int *)(pVVar19 + 0x68) - *(int *)(pVVar13 + 0x68)) * iVar23;
          if (((iVar24 < 1) || (-1 < iVar25)) ||
             ((iVar20 = iVar17, iVar15 != 0 &&
              ((-1 < iVar15 || (iVar15 * iVar27 <= iVar25 * iVar12)))))) goto LAB_00100c50;
          while( true ) {
            iVar12 = iVar24;
            iVar27 = iVar20 - iVar21;
            if (bVar7) goto LAB_00100bd8;
LAB_00100d1d:
            pVVar11 = *(Vertex **)(pVVar9 + 8);
            pVVar8 = pVVar9;
            pVVar13 = pVVar19;
            if ((pVVar9 == pVVar11) ||
               (iVar17 = *(int *)(pVVar11 + 0x6c) - iVar21, pVVar9 = pVVar11, 0 < iVar17))
            goto LAB_00100d30;
LAB_00100cc8:
            iVar24 = (*(int *)(pVVar9 + 0x68) - *(int *)(pVVar8 + 0x68)) * iVar23;
            if ((iVar24 != 0) && ((-1 < iVar24 || (iVar24 * iVar27 < iVar17 * iVar12)))) break;
            iVar21 = *(int *)(pVVar9 + 0x6c);
            iVar24 = (*(int *)(pVVar19 + 0x68) - *(int *)(pVVar9 + 0x68)) * iVar23;
          }
          pVVar13 = pVVar19;
          if (bVar7) break;
LAB_00100d30:
          pVVar19 = *(Vertex **)(pVVar13 + 8);
          pVVar9 = pVVar8;
        }
      } while( true );
    }
    pVVar13 = pVVar11;
    if (iVar12 != 0) {
      iVar27 = iVar20 - iVar21;
      if (!bVar7) goto LAB_00100e12;
LAB_00100d68:
      pVVar13 = *(Vertex **)(pVVar19 + 8);
      if (pVVar19 == pVVar13) goto LAB_00100d9e;
      iVar17 = *(int *)(pVVar13 + 0x6c) - iVar20;
      if (iVar17 < 0) goto LAB_00100d9e;
      do {
        iVar24 = (*(int *)(pVVar13 + 0x68) - *(int *)(pVVar19 + 0x68)) * iVar23;
        if ((iVar24 == 0) || ((iVar24 < 0 && (iVar17 * iVar12 <= iVar24 * iVar27)))) {
          iVar20 = *(int *)(pVVar13 + 0x6c);
          iVar17 = (*(int *)(pVVar13 + 0x68) - *(int *)(pVVar11 + 0x68)) * iVar23;
          goto LAB_00100e03;
        }
        if (!bVar7) goto LAB_00100e25;
LAB_00100d9e:
        pVVar9 = pVVar11;
        pVVar11 = *(Vertex **)(pVVar11 + 8);
        pVVar13 = pVVar19;
        while( true ) {
          if (pVVar9 == pVVar11) goto LAB_00100c50;
          iVar24 = *(int *)(pVVar11 + 0x6c);
          iVar25 = iVar24 - iVar21;
          iVar15 = (*(int *)(pVVar11 + 0x68) - *(int *)(pVVar9 + 0x68)) * iVar23;
          iVar17 = (*(int *)(pVVar13 + 0x68) - *(int *)(pVVar11 + 0x68)) * iVar23;
          if (((-1 < iVar17) || (iVar25 < 1)) ||
             ((iVar21 = iVar24, iVar15 != 0 &&
              ((-1 < iVar15 || (iVar15 * iVar27 <= iVar25 * iVar12)))))) goto LAB_00100c50;
LAB_00100e03:
          iVar12 = iVar17;
          iVar27 = iVar20 - iVar21;
          pVVar19 = pVVar13;
          if (bVar7) goto LAB_00100d68;
LAB_00100e12:
          pVVar13 = *(Vertex **)pVVar19;
          if ((pVVar19 != pVVar13) && (iVar17 = *(int *)(pVVar13 + 0x6c) - iVar20, -1 < iVar17))
          break;
LAB_00100e25:
          pVVar9 = pVVar11;
          pVVar11 = *(Vertex **)pVVar11;
          pVVar13 = pVVar19;
        }
      } while( true );
    }
    do {
      pVVar9 = pVVar13;
      pVVar13 = *(Vertex **)(pVVar9 + 8);
      if (bVar7) {
        pVVar13 = *(Vertex **)pVVar9;
      }
      pVVar8 = pVVar19;
    } while (((pVVar11 != pVVar13) && (iVar27 == *(int *)(pVVar13 + 0x68))) &&
            (bVar6 = *(int *)(pVVar13 + 0x6c) <= iVar21, iVar21 = *(int *)(pVVar13 + 0x6c), bVar6));
    do {
      pVVar13 = pVVar8;
      if (bVar7) {
        pVVar8 = *(Vertex **)(pVVar13 + 8);
        if (pVVar19 == pVVar8) goto LAB_00100c6d;
      }
      else {
        pVVar8 = *(Vertex **)pVVar13;
        if (pVVar19 == pVVar8) goto LAB_00100e36;
      }
    } while ((iVar27 == *(int *)(pVVar8 + 0x68)) &&
            (bVar6 = iVar20 <= *(int *)(pVVar8 + 0x6c), iVar20 = *(int *)(pVVar8 + 0x6c), bVar6));
LAB_00100c50:
    if (bVar7) break;
LAB_00100e36:
    iVar20 = *(int *)(pVVar2 + 0x6c);
    bVar7 = true;
    iVar23 = -1;
    pVVar11 = pVVar4;
    pVVar18 = pVVar9;
    pVVar19 = pVVar2;
    pVVar16 = pVVar13;
    iVar12 = iVar1;
  } while( true );
LAB_00100c6d:
  *(Vertex **)(pVVar9 + 8) = pVVar13;
  *(Vertex **)pVVar13 = pVVar9;
  *(Vertex **)pVVar18 = pVVar16;
  *(Vertex **)(pVVar16 + 8) = pVVar18;
  if (iVar1 < *(int *)(pVVar4 + 0x68)) {
    *(Vertex **)param_1 = pVVar2;
  }
  if (*(int *)(pVVar3 + 0x68) <= iVar22) {
    *(Vertex **)(param_1 + 8) = pVVar26;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *param_3 = pVVar18;
  uVar10 = 1;
LAB_00100cac:
  *param_4 = pVVar16;
  return uVar10;
}



/* ConvexHullInternal::get_orientation(ConvexHullInternal::Edge const*, ConvexHullInternal::Edge
   const*, ConvexHullInternal::Point32 const&, ConvexHullInternal::Point32 const&) */

bool ConvexHullInternal::get_orientation
               (Edge *param_1,Edge *param_2,Point32 *param_3,Point32 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x18) != *(long *)(*(long *)(param_2 + 0x10) + 0x18)) {
    _err_print_error("get_orientation","core/math/convex_hull.cpp",0x46e,
                     "Assertion \"p_prev->reverse->target == p_next->reverse->target\" failed.",0,0)
    ;
  }
  if (*(Edge **)param_1 == param_2) {
    if (*(Edge **)(param_1 + 8) != param_2) {
      return (bool)2;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(param_2 + 0x18);
    lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
    lVar4 = (long)(*(int *)(lVar5 + 0x68) - *(int *)(lVar7 + 0x68));
    lVar1 = (long)(*(int *)(lVar5 + 0x6c) - *(int *)(lVar7 + 0x6c));
    lVar6 = (long)(*(int *)(lVar3 + 0x6c) - *(int *)(lVar7 + 0x6c));
    lVar2 = (long)(*(int *)(lVar3 + 0x68) - *(int *)(lVar7 + 0x68));
    lVar5 = (long)(*(int *)(lVar5 + 0x70) - *(int *)(lVar7 + 0x70));
    lVar7 = (long)(*(int *)(lVar3 + 0x70) - *(int *)(lVar7 + 0x70));
    lVar8 = lVar4 * lVar6 - lVar1 * lVar2;
    lVar3 = lVar2 * lVar5 - lVar4 * lVar7;
    lVar5 = lVar1 * lVar7 - lVar6 * lVar5;
    if ((lVar8 == 0 && lVar3 == 0) && lVar5 == 0) {
      _err_print_error("get_orientation","core/math/convex_hull.cpp",0x473,
                       "Assertion \"!m.is_zero()\" failed.",0,0);
    }
    else {
      lVar5 = lVar5 * ((long)*(int *)(param_4 + 4) * (long)*(int *)(param_3 + 8) -
                      (long)*(int *)(param_3 + 4) * (long)*(int *)(param_4 + 8)) +
              lVar3 * ((long)*(int *)param_3 * (long)*(int *)(param_4 + 8) -
                      (long)*(int *)param_4 * (long)*(int *)(param_3 + 8)) +
              lVar8 * ((long)*(int *)param_4 * (long)*(int *)(param_3 + 4) -
                      (long)*(int *)(param_4 + 4) * (long)*(int *)param_3);
      if (lVar5 != 0) {
        if (lVar5 < 1) {
          return true;
        }
        return (bool)2;
      }
    }
    _err_print_error("get_orientation","core/math/convex_hull.cpp",0x475,
                     "Assertion \"dot != 0\" failed.",0,0);
    return true;
  }
  return *(Edge **)(param_1 + 8) == param_2;
}



/* ConvexHullInternal::find_max_angle(bool, ConvexHullInternal::Vertex const*,
   ConvexHullInternal::Point32 const&, ConvexHullInternal::Point64 const&,
   ConvexHullInternal::Point64 const&, ConvexHullInternal::Rational64&) */

Edge * __thiscall
ConvexHullInternal::find_max_angle
          (ConvexHullInternal *this,bool param_1,Vertex *param_2,Point32 *param_3,Point64 *param_4,
          Point64 *param_5,Rational64 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  Edge *pEVar4;
  long lVar5;
  Edge *pEVar6;
  Edge *pEVar7;
  long in_FS_OFFSET;
  int iVar8;
  int iVar9;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  long local_58;
  long lStack_50;
  int local_48;
  long local_40;
  
  pEVar4 = *(Edge **)(param_2 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pEVar4 == (Edge *)0x0) {
    pEVar7 = (Edge *)0x0;
  }
  else {
    pEVar6 = (Edge *)0x0;
    do {
      while( true ) {
        pEVar7 = pEVar6;
        if (*(int *)(pEVar4 + 0x28) <= *(int *)(this + 0x160)) goto LAB_001012b0;
        local_5c = 0xffffffff;
        uVar1 = *(undefined8 *)(*(long *)(pEVar4 + 0x18) + 0x68);
        local_60 = *(int *)(*(long *)(pEVar4 + 0x18) + 0x70) - *(int *)(param_2 + 0x70);
        iVar8 = (int)uVar1 - (int)*(undefined8 *)(param_2 + 0x68);
        iVar9 = (int)((ulong)uVar1 >> 0x20) - (int)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20);
        local_68 = CONCAT44(iVar9,iVar8);
        lVar3 = (long)local_60;
        lVar5 = (long)iVar8;
        lVar2 = (long)iVar9;
        lStack_50 = *(long *)param_4 * lVar5 + *(long *)(param_4 + 8) * lVar2 +
                    *(long *)(param_4 + 0x10) * lVar3;
        local_58 = *(long *)param_5 * lVar5 + *(long *)(param_5 + 8) * lVar2 +
                   *(long *)(param_5 + 0x10) * lVar3;
        local_48 = 1;
        if (local_58 < 1) break;
LAB_00101353:
        if (0 < lStack_50) goto LAB_0010136b;
LAB_0010141e:
        if (lStack_50 != 0) {
          local_48 = -local_48;
          lStack_50 = -lStack_50;
          goto LAB_0010136b;
        }
        lStack_50 = 0;
        if (local_48 != 0) goto LAB_0010136b;
        lVar2 = lVar2 * *(int *)(param_3 + 4) + *(int *)param_3 * lVar5 +
                *(int *)(param_3 + 8) * lVar3;
        if (param_1) {
          if (-1 < lVar2) {
LAB_001014bf:
            _err_print_error("find_max_angle","core/math/convex_hull.cpp",0x491,
                             "Assertion \"p_ccw ? (t.dot(p_s) < 0) : (t.dot(p_s) > 0)\" failed.",0,0
                            );
          }
        }
        else if (lVar2 < 1) goto LAB_001014bf;
LAB_001012b0:
        pEVar4 = *(Edge **)pEVar4;
        pEVar6 = pEVar7;
        if (*(Edge **)(param_2 + 0x10) == pEVar4) goto LAB_001013d8;
      }
      if (local_58 == 0) {
        local_58 = 0;
        local_48 = 0;
        goto LAB_00101353;
      }
      local_58 = -local_58;
      local_48 = -1;
      if (lStack_50 < 1) goto LAB_0010141e;
LAB_0010136b:
      pEVar7 = pEVar4;
      if (pEVar6 == (Edge *)0x0) {
        *(int *)(param_6 + 0x10) = local_48;
        *(long *)param_6 = local_58;
        *(long *)(param_6 + 8) = lStack_50;
        goto LAB_001012b0;
      }
      iVar8 = Rational64::compare((Rational64 *)&local_58,param_6);
      if (iVar8 < 0) {
        *(long *)param_6 = local_58;
        *(long *)(param_6 + 8) = lStack_50;
        *(int *)(param_6 + 0x10) = local_48;
        goto LAB_001012b0;
      }
      pEVar7 = pEVar6;
      if ((iVar8 != 0) ||
         (iVar8 = get_orientation(pEVar6,pEVar4,param_3,(Point32 *)&local_68), pEVar7 = pEVar4,
         (iVar8 == 2) == param_1)) goto LAB_001012b0;
      pEVar4 = *(Edge **)pEVar4;
      pEVar7 = pEVar6;
    } while (*(Edge **)(param_2 + 0x10) != pEVar4);
  }
LAB_001013d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar7;
}



/* ConvexHullInternal::find_edge_for_coplanar_faces(ConvexHullInternal::Vertex*,
   ConvexHullInternal::Vertex*, ConvexHullInternal::Edge*&, ConvexHullInternal::Edge*&,
   ConvexHullInternal::Vertex const*, ConvexHullInternal::Vertex const*) */

void __thiscall
ConvexHullInternal::find_edge_for_coplanar_faces
          (ConvexHullInternal *this,Vertex *param_1,Vertex *param_2,Edge **param_3,Edge **param_4,
          Vertex *param_5,Vertex *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Edge *pEVar6;
  Edge *pEVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Vertex *pVVar11;
  long lVar12;
  char *pcVar13;
  Edge *pEVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  Edge *pEVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long in_FS_OFFSET;
  int local_110;
  int local_f8;
  long local_78;
  long local_70;
  undefined4 local_68;
  long local_58;
  long local_50;
  int local_48;
  long local_40;
  
  pEVar6 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar7 = *param_4;
  pVVar11 = param_1 + 0x68;
  if (pEVar6 != (Edge *)0x0) {
    pVVar11 = (Vertex *)(*(long *)(pEVar6 + 0x18) + 0x68);
  }
  local_110 = *(int *)pVVar11;
  iVar9 = *(int *)(pVVar11 + 4);
  iVar1 = *(int *)(pVVar11 + 8);
  pVVar11 = param_2 + 0x68;
  if (pEVar7 != (Edge *)0x0) {
    pVVar11 = (Vertex *)(*(long *)(pEVar7 + 0x18) + 0x68);
  }
  local_f8 = *(int *)pVVar11;
  iVar2 = *(int *)(param_1 + 0x70);
  iVar8 = *(int *)(pVVar11 + 4);
  iVar3 = *(int *)(pVVar11 + 8);
  lVar29 = (long)(*(int *)(param_2 + 0x70) - iVar2);
  iVar4 = *(int *)(param_1 + 0x6c);
  iVar5 = *(int *)(param_1 + 0x68);
  lVar28 = (long)(*(int *)(param_2 + 0x6c) - iVar4);
  pEVar14 = pEVar6;
  if (pEVar6 == (Edge *)0x0) {
    pEVar14 = pEVar7;
  }
  lVar25 = (long)(*(int *)(param_2 + 0x68) - iVar5);
  lVar15 = *(long *)(pEVar14 + 0x18);
  lVar12 = (long)(*(int *)(lVar15 + 0x68) - iVar5);
  lVar20 = (long)(*(int *)(lVar15 + 0x6c) - iVar4);
  lVar15 = (long)(*(int *)(lVar15 + 0x70) - iVar2);
  lVar24 = lVar28 * lVar12 - lVar25 * lVar20;
  lVar12 = lVar25 * lVar15 - lVar12 * lVar29;
  lVar15 = lVar20 * lVar29 - lVar15 * lVar28;
  lVar20 = iVar4 * lVar12 + iVar5 * lVar15 + iVar2 * lVar24;
  if ((pEVar7 != (Edge *)0x0) &&
     (lVar21 = *(long *)(pEVar7 + 0x18),
     lVar20 != *(int *)(lVar21 + 0x68) * lVar15 + *(int *)(lVar21 + 0x6c) * lVar12 +
               *(int *)(lVar21 + 0x70) * lVar24)) {
    _err_print_error("find_edge_for_coplanar_faces","core/math/convex_hull.cpp",0x4b0,
                     "Assertion \"!start1 || (start1->target->point.dot(normal) == dist)\" failed.",
                     0,0);
  }
  lVar21 = lVar25 * lVar12 - lVar28 * lVar15;
  lVar26 = lVar29 * lVar15 - lVar25 * lVar24;
  lVar27 = lVar28 * lVar24 - lVar29 * lVar12;
  if ((lVar21 == 0 && lVar26 == 0) && lVar27 == 0) {
    _err_print_error("find_edge_for_coplanar_faces","core/math/convex_hull.cpp",0x4b2,
                     "Assertion \"!perp.is_zero()\" failed.",0,0);
  }
  lVar30 = local_110 * lVar27 + iVar9 * lVar26 + iVar1 * lVar21;
  pEVar14 = *param_3;
  if ((pEVar14 != (Edge *)0x0) && (*(Vertex **)(pEVar14 + 0x18) != param_5)) {
    while( true ) {
      pEVar14 = *(Edge **)(*(long *)(pEVar14 + 0x10) + 8);
      lVar16 = *(long *)(pEVar14 + 0x18);
      lVar16 = *(int *)(lVar16 + 0x68) * lVar15 + *(int *)(lVar16 + 0x6c) * lVar12 +
               *(int *)(lVar16 + 0x70) * lVar24;
      if (lVar20 != lVar16 && lVar16 <= lVar20) break;
      if (lVar20 == lVar16) {
        if (*(int *)(pEVar14 + 0x28) == *(int *)(this + 0x160)) break;
      }
      else {
        _err_print_error("find_edge_for_coplanar_faces","core/math/convex_hull.cpp",0x4bf,
                         "Assertion \"e->target->point.dot(normal) == dist\" failed.",0,0);
        if (*(int *)(pEVar14 + 0x28) == *(int *)(this + 0x160)) break;
      }
      pVVar11 = *(Vertex **)(pEVar14 + 0x18);
      iVar2 = *(int *)(pVVar11 + 0x68);
      iVar4 = *(int *)(pVVar11 + 0x6c);
      iVar5 = *(int *)(pVVar11 + 0x70);
      lVar16 = iVar2 * lVar27 + iVar4 * lVar26 + iVar5 * lVar21;
      if ((lVar16 <= lVar30) ||
         (*param_3 = pEVar14, lVar30 = lVar16, local_110 = iVar2, iVar9 = iVar4, iVar1 = iVar5,
         pVVar11 == param_5)) break;
    }
  }
  lVar16 = local_f8 * lVar27 + iVar8 * lVar26 + iVar3 * lVar21;
  pEVar14 = *param_4;
  if ((pEVar14 != (Edge *)0x0) && (*(Vertex **)(pEVar14 + 0x18) != param_6)) {
    while( true ) {
      pEVar14 = (Edge *)**(long **)(pEVar14 + 0x10);
      lVar17 = *(long *)(pEVar14 + 0x18);
      lVar17 = *(int *)(lVar17 + 0x68) * lVar15 + *(int *)(lVar17 + 0x6c) * lVar12 +
               *(int *)(lVar17 + 0x70) * lVar24;
      if (lVar20 != lVar17 && lVar17 <= lVar20) break;
      if (lVar20 == lVar17) {
        if (*(int *)(pEVar14 + 0x28) == *(int *)(this + 0x160)) break;
      }
      else {
        _err_print_error("find_edge_for_coplanar_faces","core/math/convex_hull.cpp",0x4d4,
                         "Assertion \"e->target->point.dot(normal) == dist\" failed.",0,0);
        if (*(int *)(pEVar14 + 0x28) == *(int *)(this + 0x160)) break;
      }
      pVVar11 = *(Vertex **)(pEVar14 + 0x18);
      iVar2 = *(int *)(pVVar11 + 0x68);
      iVar4 = *(int *)(pVVar11 + 0x6c);
      iVar5 = *(int *)(pVVar11 + 0x70);
      lVar17 = iVar2 * lVar27 + iVar4 * lVar26 + iVar5 * lVar21;
      if ((lVar17 <= lVar16) ||
         (*param_4 = pEVar14, lVar16 = lVar17, local_f8 = iVar2, iVar8 = iVar4, iVar3 = iVar5,
         pVVar11 == param_6)) break;
    }
  }
  lVar16 = lVar16 - lVar30;
  if (lVar16 < 1) {
    if (lVar16 != 0) {
LAB_00101d2d:
      while( true ) {
        lVar20 = (local_f8 - local_110) * lVar25 + (iVar8 - iVar9) * lVar28 +
                 (iVar3 - iVar1) * lVar29;
        pEVar14 = *param_4;
        if (((pEVar14 == (Edge *)0x0) || (*(Vertex **)(pEVar14 + 0x18) == param_6)) ||
           (pEVar22 = *(Edge **)(*(long *)(pEVar14 + 8) + 0x10),
           *(int *)(pEVar22 + 0x28) <= *(int *)(this + 0x160))) break;
        lVar30 = *(long *)(pEVar22 + 0x18);
        iVar2 = *(int *)(lVar30 + 0x6c);
        iVar4 = *(int *)(lVar30 + 0x70);
        iVar5 = *(int *)(lVar30 + 0x68);
        lVar30 = (iVar4 - iVar3) * lVar29 + (iVar2 - iVar8) * lVar28 + (iVar5 - local_f8) * lVar25;
        lVar17 = (iVar4 - iVar3) * lVar21 + (iVar5 - local_f8) * lVar27 + (iVar2 - iVar8) * lVar26;
        if (lVar17 != 0) {
          if (lVar17 < 0) {
            local_68 = 0xffffffff;
            if (lVar30 < 1) {
              if (lVar30 == 0) {
                lVar30 = 0;
                local_68 = 0;
              }
              else {
                lVar30 = -lVar30;
                local_68 = 1;
              }
            }
            local_70 = -lVar17;
            if (lVar20 < 1) {
              if (lVar20 == 0) {
                local_48 = 0;
                local_58 = 0;
              }
              else {
                local_48 = -1;
                local_58 = -lVar20;
              }
            }
            else {
              local_48 = 1;
              local_58 = lVar20;
            }
            local_50 = lVar16;
            if (lVar16 < 1) {
              if (lVar16 == 0) {
                local_50 = 0;
              }
              else {
                local_48 = -local_48;
                local_50 = -lVar16;
              }
            }
            local_78 = lVar30;
            iVar10 = Rational64::compare((Rational64 *)&local_78,(Rational64 *)&local_58);
            if (iVar10 < 1) goto LAB_00101ee4;
          }
          break;
        }
        if (lVar30 < 1) break;
LAB_00101ee4:
        if (pEVar14 == pEVar7) {
          pEVar22 = (Edge *)0x0;
        }
        *param_4 = pEVar22;
        lVar16 = (iVar5 - local_110) * lVar27 + (iVar2 - iVar9) * lVar26 + (iVar4 - iVar1) * lVar21;
        local_f8 = iVar5;
        iVar8 = iVar2;
        iVar3 = iVar4;
      }
      pEVar14 = *param_3;
      if (((pEVar14 == (Edge *)0x0) || (*(Vertex **)(pEVar14 + 0x18) == param_5)) ||
         (pEVar22 = *(Edge **)(*(long *)(pEVar14 + 0x10) + 8),
         *(int *)(pEVar22 + 0x28) <= *(int *)(this + 0x160))) goto LAB_00101cc4;
      lVar30 = *(long *)(pEVar22 + 0x18);
      iVar2 = *(int *)(lVar30 + 0x6c);
      iVar4 = *(int *)(lVar30 + 0x70);
      iVar5 = *(int *)(lVar30 + 0x68);
      lVar30 = (long)(iVar2 - iVar9);
      lVar17 = (long)(iVar5 - local_110);
      lVar18 = (long)(iVar4 - iVar1);
      lVar23 = lVar12 * lVar30 + lVar15 * lVar17 + lVar24 * lVar18;
      if (lVar23 == 0) {
        lVar23 = lVar18 * lVar21 + lVar30 * lVar26 + lVar17 * lVar27;
        lVar17 = lVar18 * lVar29 + lVar30 * lVar28 + lVar17 * lVar25;
        lVar30 = (local_f8 - iVar5) * lVar27 + (iVar8 - iVar2) * lVar26 + (iVar3 - iVar4) * lVar21;
        if (-1 < lVar30) goto LAB_00101cc4;
        if (lVar23 == 0) {
          if (lVar17 < 1) goto LAB_00101cc4;
        }
        else {
          if (-1 < lVar23) goto LAB_00101cc4;
          local_68 = 0xffffffff;
          if (lVar17 < 1) {
            if (lVar17 == 0) {
              lVar17 = 0;
              local_68 = 0;
            }
            else {
              lVar17 = -lVar17;
              local_68 = 1;
            }
          }
          local_70 = -lVar23;
          if (lVar20 < 1) {
            if (lVar20 == 0) {
              local_48 = 0;
              lVar20 = 0;
            }
            else {
              local_48 = -1;
              lVar20 = -lVar20;
            }
          }
          else {
            local_48 = 1;
          }
          local_50 = lVar16;
          if (lVar16 < 1) {
            if (lVar16 == 0) {
              local_50 = 0;
            }
            else {
              local_48 = -local_48;
              local_50 = -lVar16;
            }
          }
          local_78 = lVar17;
          local_58 = lVar20;
          iVar9 = Rational64::compare((Rational64 *)&local_78,(Rational64 *)&local_58);
          if (-1 < iVar9) goto LAB_00101cc4;
        }
        *param_3 = pEVar22;
        lVar16 = lVar30;
        local_110 = iVar5;
        iVar9 = iVar2;
        iVar1 = iVar4;
        goto LAB_00101d2d;
      }
      if ((pEVar14 != pEVar6) || (-1 < lVar23)) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102567;
        uVar19 = 0x530;
        pcVar13 = "Assertion \"(p_e0 == start0) && (d0.dot(normal) < 0)\" failed.";
        goto LAB_0010243f;
      }
    }
LAB_00101cc4:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00102567:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00101a36:
  do {
    lVar20 = (local_f8 - local_110) * lVar25 + (iVar8 - iVar9) * lVar28 + (iVar3 - iVar1) * lVar29;
    pEVar14 = *param_3;
    if (((pEVar14 != (Edge *)0x0) && (*(Vertex **)(pEVar14 + 0x18) != param_5)) &&
       (pEVar22 = *(Edge **)(*(long *)pEVar14 + 0x10),
       *(int *)(this + 0x160) < *(int *)(pEVar22 + 0x28))) {
      lVar30 = *(long *)(pEVar22 + 0x18);
      iVar2 = *(int *)(lVar30 + 0x6c);
      iVar4 = *(int *)(lVar30 + 0x70);
      iVar5 = *(int *)(lVar30 + 0x68);
      lVar30 = (iVar4 - iVar1) * lVar29 + (iVar2 - iVar9) * lVar28 + (iVar5 - local_110) * lVar25;
      lVar17 = (iVar4 - iVar1) * lVar21 + (iVar5 - local_110) * lVar27 + (iVar2 - iVar9) * lVar26;
      if (lVar17 == 0) {
        if (lVar30 < 0) {
LAB_001021e4:
          lVar16 = (local_f8 - iVar5) * lVar27 + (iVar8 - iVar2) * lVar26 + (iVar3 - iVar4) * lVar21
          ;
          if (pEVar14 == pEVar6) {
            pEVar22 = (Edge *)0x0;
          }
          *param_3 = pEVar22;
          local_110 = iVar5;
          iVar9 = iVar2;
          iVar1 = iVar4;
          goto LAB_00101a36;
        }
      }
      else if (lVar17 < 0) {
        local_68 = 0xffffffff;
        if (lVar30 < 1) {
          if (lVar30 == 0) {
            lVar30 = 0;
            local_68 = 0;
          }
          else {
            lVar30 = -lVar30;
            local_68 = 1;
          }
        }
        local_70 = -lVar17;
        if (lVar20 < 1) {
          if (lVar20 == 0) {
            local_48 = 0;
            local_58 = 0;
          }
          else {
            local_48 = -1;
            local_58 = -lVar20;
          }
        }
        else {
          local_48 = 1;
          local_58 = lVar20;
        }
        local_50 = lVar16;
        if (lVar16 < 1) {
          if (lVar16 == 0) {
            local_50 = 0;
          }
          else {
            local_48 = -local_48;
            local_50 = -lVar16;
          }
        }
        local_78 = lVar30;
        iVar10 = Rational64::compare((Rational64 *)&local_78,(Rational64 *)&local_58);
        if (-1 < iVar10) goto LAB_001021e4;
      }
    }
    pEVar14 = *param_4;
    if (((pEVar14 == (Edge *)0x0) || (*(Vertex **)(pEVar14 + 0x18) == param_6)) ||
       (pEVar22 = (Edge *)**(long **)(pEVar14 + 0x10),
       *(int *)(pEVar22 + 0x28) <= *(int *)(this + 0x160))) goto LAB_00101cc4;
    lVar30 = *(long *)(pEVar22 + 0x18);
    iVar2 = *(int *)(lVar30 + 0x6c);
    iVar4 = *(int *)(lVar30 + 0x70);
    iVar5 = *(int *)(lVar30 + 0x68);
    lVar30 = (long)(iVar2 - iVar8);
    lVar17 = (long)(iVar5 - local_f8);
    lVar18 = (long)(iVar4 - iVar3);
    lVar23 = lVar12 * lVar30 + lVar15 * lVar17 + lVar24 * lVar18;
    if (lVar23 != 0) {
      if ((pEVar14 != pEVar7) || (-1 < lVar23)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar19 = 0x508;
          pcVar13 = "Assertion \"(p_e1 == start1) && (d1.dot(normal) < 0)\" failed.";
LAB_0010243f:
          _err_print_error("find_edge_for_coplanar_faces","core/math/convex_hull.cpp",uVar19,pcVar13
                           ,0,0);
          return;
        }
        goto LAB_00102567;
      }
      goto LAB_00101cc4;
    }
    lVar23 = lVar18 * lVar21 + lVar30 * lVar26 + lVar17 * lVar27;
    lVar17 = lVar18 * lVar29 + lVar30 * lVar28 + lVar17 * lVar25;
    lVar30 = (iVar5 - local_110) * lVar27 + (iVar2 - iVar9) * lVar26 + (iVar4 - iVar1) * lVar21;
    if (lVar30 < 1) goto LAB_00101cc4;
    if (lVar23 == 0) {
      if (-1 < lVar17) goto LAB_00101cc4;
    }
    else {
      if (-1 < lVar23) goto LAB_00101cc4;
      local_68 = 0xffffffff;
      if (lVar17 < 1) {
        if (lVar17 == 0) {
          lVar17 = 0;
          local_68 = 0;
        }
        else {
          lVar17 = -lVar17;
          local_68 = 1;
        }
      }
      local_70 = -lVar23;
      if (lVar20 < 1) {
        if (lVar20 == 0) {
          local_48 = 0;
          lVar20 = 0;
        }
        else {
          local_48 = -1;
          lVar20 = -lVar20;
        }
      }
      else {
        local_48 = 1;
      }
      local_50 = lVar16;
      if (lVar16 < 1) {
        if (lVar16 == 0) {
          local_50 = 0;
        }
        else {
          local_48 = -local_48;
          local_50 = -lVar16;
        }
      }
      local_78 = lVar17;
      local_58 = lVar20;
      iVar8 = Rational64::compare((Rational64 *)&local_78,(Rational64 *)&local_58);
      if (iVar8 < 1) goto LAB_00101cc4;
    }
    *param_4 = pEVar22;
    lVar16 = lVar30;
    local_f8 = iVar5;
    iVar8 = iVar2;
    iVar3 = iVar4;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::merge(ConvexHullInternal::IntermediateHull&,
   ConvexHullInternal::IntermediateHull&) [clone .part.0] */

void __thiscall
ConvexHullInternal::merge
          (ConvexHullInternal *this,IntermediateHull *param_1,IntermediateHull *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  Edge *pEVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  Edge *pEVar16;
  Edge *pEVar17;
  Edge *pEVar18;
  Edge *pEVar19;
  long *plVar20;
  long lVar21;
  Edge *pEVar22;
  long lVar23;
  Edge *pEVar24;
  long lVar25;
  long lVar26;
  Vertex *pVVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  Vertex *pVVar32;
  long in_FS_OFFSET;
  int iVar33;
  int iVar34;
  Edge *local_180;
  Point64 *local_178;
  Point64 *local_170;
  undefined8 *local_160;
  Point32 *local_138;
  Point32 *local_130;
  Edge *local_128;
  Vertex *local_120;
  long local_110;
  Edge *local_108;
  Vertex *local_100;
  Edge *local_f8;
  Edge *local_f0;
  Vertex *local_e8;
  Vertex *local_e0;
  Edge *local_d8;
  Edge *local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  Edge *local_b8;
  long local_b0;
  long local_a8;
  Edge *local_98;
  long local_90;
  long local_88;
  undefined1 local_78 [16];
  int local_68;
  undefined1 local_58 [16];
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x160) = *(int *)(this + 0x160) + -1;
  local_e8 = (Vertex *)0x0;
  cVar12 = merge_projection(this,param_1,param_2,&local_e8,&local_e0);
  uVar9 = local_78._0_8_;
  pVVar32 = local_e0;
  pVVar27 = local_e8;
  if (cVar12 == '\0') {
    local_c8 = *(int *)(local_e0 + 0x68);
    local_c4 = *(int *)(local_e0 + 0x6c);
    local_c0 = *(int *)(local_e0 + 0x70);
    local_100 = local_e0;
    iVar13 = local_c8 + 1;
    local_120 = local_e8;
    iVar33 = local_c0;
  }
  else {
    local_120 = local_e8;
    iVar13 = *(int *)(local_e0 + 0x70) - *(int *)(local_e8 + 0x70);
    local_100 = local_e0;
    iVar33 = (int)*(undefined8 *)(local_e0 + 0x68) - (int)*(undefined8 *)(local_e8 + 0x68);
    iVar34 = (int)((ulong)*(undefined8 *)(local_e0 + 0x68) >> 0x20) -
             (int)((ulong)*(undefined8 *)(local_e8 + 0x68) >> 0x20);
    local_78._4_4_ = iVar34;
    local_78._0_4_ = iVar33;
    uVar10 = local_78._0_8_;
    local_78._8_4_ = iVar13;
    local_78._0_12_ = CONCAT48(local_78._8_4_,uVar9);
    local_78._12_4_ = 0xffffffff;
    local_78 = CONCAT88(local_78._8_8_,uVar10);
    lVar30 = (long)iVar34;
    lVar28 = (long)iVar33;
    lVar25 = lVar30 * iVar13;
    lVar31 = -lVar28;
    lVar29 = lVar28 * iVar13;
    lVar28 = lVar28 * lVar31 - lVar30 * lVar30;
    if ((lVar25 == 0 && lVar29 == 0) && lVar28 == 0) {
      _err_print_error("merge","core/math/convex_hull.cpp",0x558,
                       "Assertion \"!t.is_zero()\" failed.",0);
    }
    local_b8 = (Edge *)0x0;
    if (*(Edge **)(pVVar27 + 0x10) == (Edge *)0x0) {
      pEVar16 = *(Edge **)(pVVar32 + 0x10);
      if (pEVar16 != (Edge *)0x0) {
        pEVar17 = (Edge *)0x0;
        goto LAB_0010279f;
      }
    }
    else {
      pEVar16 = *(Edge **)(pVVar27 + 0x10);
      pEVar17 = (Edge *)0x0;
      do {
        while( true ) {
          pEVar18 = pEVar16;
          lVar26 = *(long *)(pEVar18 + 0x18);
          lVar15 = (long)(*(int *)(lVar26 + 0x68) - *(int *)(pVVar27 + 0x68));
          lVar21 = (long)(*(int *)(lVar26 + 0x6c) - *(int *)(pVVar27 + 0x6c));
          lVar23 = lVar15 * lVar30 + lVar21 * lVar31;
          if (lVar23 < 1) break;
          _err_print_error("merge","core/math/convex_hull.cpp",0x55f,
                           "Assertion \"dot <= 0\" failed.",0);
LAB_001026f0:
          pEVar16 = *(Edge **)pEVar18;
          if (*(Edge **)pEVar18 == *(Edge **)(pVVar27 + 0x10)) goto LAB_00102770;
        }
        if ((lVar23 != 0) ||
           (lVar15 * lVar29 + lVar21 * lVar25 +
            (*(int *)(lVar26 + 0x70) - *(int *)(pVVar27 + 0x70)) * lVar28 < 1)) goto LAB_001026f0;
        if (pEVar17 != (Edge *)0x0) {
          local_58._8_8_ = _UNK_0010b898;
          local_58._0_8_ = __LC34;
          iVar13 = get_orientation(pEVar17,pEVar18,(Point32 *)local_78,(Point32 *)local_58);
          if (iVar13 != 1) goto LAB_001026f0;
        }
        pEVar16 = *(Edge **)pEVar18;
        pEVar17 = pEVar18;
        local_b8 = pEVar18;
      } while (*(Edge **)pEVar18 != *(Edge **)(pVVar27 + 0x10));
LAB_00102770:
      local_98 = (Edge *)0x0;
      pEVar16 = *(Edge **)(pVVar32 + 0x10);
      pEVar18 = pEVar17;
      if (pEVar16 == (Edge *)0x0) {
joined_r0x00103928:
        if (pEVar18 == (Edge *)0x0) goto LAB_00102919;
      }
      else {
LAB_0010279f:
        local_130 = (Point32 *)local_58;
        local_138 = (Point32 *)local_78;
        local_98 = (Edge *)0x0;
        do {
          while( true ) {
            pEVar18 = pEVar16;
            lVar26 = *(long *)(pEVar18 + 0x18);
            lVar15 = (long)(*(int *)(lVar26 + 0x68) - *(int *)(pVVar32 + 0x68));
            lVar21 = (long)(*(int *)(lVar26 + 0x6c) - *(int *)(pVVar32 + 0x6c));
            lVar23 = lVar15 * lVar30 + lVar21 * lVar31;
            if (lVar23 < 1) break;
            _err_print_error("merge","core/math/convex_hull.cpp",0x56e,
                             "Assertion \"dot <= 0\" failed.",0);
LAB_001027f8:
            pEVar16 = *(Edge **)pEVar18;
            if (*(Edge **)pEVar18 == *(Edge **)(pVVar32 + 0x10)) goto LAB_00102880;
          }
          if ((lVar23 != 0) ||
             (lVar15 * lVar29 + lVar21 * lVar25 +
              (*(int *)(lVar26 + 0x70) - *(int *)(pVVar32 + 0x70)) * lVar28 < 1)) goto LAB_001027f8;
          if (local_98 != (Edge *)0x0) {
            local_58._8_8_ = _UNK_0010b898;
            local_58._0_8_ = __LC34;
            iVar13 = get_orientation(local_98,pEVar18,local_138,local_130);
            if (iVar13 != 2) goto LAB_001027f8;
          }
          pEVar16 = *(Edge **)pEVar18;
          local_98 = pEVar18;
        } while (*(Edge **)pEVar18 != *(Edge **)(pVVar32 + 0x10));
LAB_00102880:
        pEVar18 = local_98;
        if (pEVar17 == (Edge *)0x0) goto joined_r0x00103928;
      }
      find_edge_for_coplanar_faces
                (this,pVVar27,pVVar32,&local_b8,&local_98,(Vertex *)0x0,(Vertex *)0x0);
      if (local_b8 != (Edge *)0x0) {
        local_e8 = *(Vertex **)(local_b8 + 0x18);
      }
      if (local_98 != (Edge *)0x0) {
        local_100 = *(Vertex **)(local_98 + 0x18);
        local_e0 = local_100;
      }
      local_120 = local_e8;
    }
LAB_00102919:
    local_c8 = *(int *)(local_100 + 0x68);
    local_c4 = *(int *)(local_100 + 0x6c);
    local_c0 = *(int *)(local_100 + 0x70);
    iVar33 = local_c0 + 1;
    iVar13 = local_c8;
  }
  local_170 = (Point64 *)&local_98;
  local_178 = (Point64 *)&local_b8;
  local_130 = (Point32 *)local_58;
  local_138 = (Point32 *)local_78;
  pEVar16 = (Edge *)0x0;
  local_128 = (Edge *)0x0;
  bVar8 = true;
  local_f8 = (Edge *)0x0;
  local_160 = (undefined8 *)0x0;
  local_180 = (Edge *)0x0;
  local_108 = (Edge *)0x0;
  local_f0 = (Edge *)0x0;
  local_110 = 0;
  pVVar27 = local_120;
  pVVar32 = local_100;
  iVar34 = local_c4;
  while( true ) {
    local_78 = (undefined1  [16])0x0;
    local_bc = 0xffffffff;
    local_c8 = local_c8 - *(int *)(pVVar27 + 0x68);
    local_c4 = local_c4 - *(int *)(pVVar27 + 0x6c);
    lVar30 = (long)local_c8;
    lVar26 = (long)(iVar13 - *(int *)(pVVar27 + 0x68));
    local_c0 = local_c0 - *(int *)(pVVar27 + 0x70);
    lVar29 = (long)local_c4;
    lVar25 = (long)local_c0;
    lVar28 = (long)(iVar34 - *(int *)(pVVar27 + 0x6c));
    local_68 = 0;
    local_a8 = lVar26 * lVar29 - lVar28 * lVar30;
    lVar31 = (long)(iVar33 - *(int *)(pVVar27 + 0x70));
    local_b0 = lVar30 * lVar31 - lVar26 * lVar25;
    local_b8 = (Edge *)(lVar28 * lVar25 - lVar31 * lVar29);
    local_98 = (Edge *)(lVar29 * local_a8 - lVar25 * local_b0);
    local_90 = lVar25 * (long)local_b8 - local_a8 * lVar30;
    local_88 = lVar30 * local_b0 - lVar29 * (long)local_b8;
    pEVar17 = (Edge *)find_max_angle(this,false,pVVar27,(Point32 *)&local_c8,local_178,local_170,
                                     (Rational64 *)local_138);
    local_58 = (undefined1  [16])0x0;
    local_48 = 0;
    pEVar18 = (Edge *)find_max_angle(this,true,pVVar32,(Point32 *)&local_c8,local_178,local_170,
                                     (Rational64 *)local_130);
    if (pEVar17 == (Edge *)0x0 && pEVar18 == (Edge *)0x0) break;
    if (pEVar17 == (Edge *)0x0) {
      iVar14 = 1;
      iVar11 = 1;
      if (bVar8) {
LAB_00102cc0:
        pEVar19 = (Edge *)new_edge_pair(this,pVVar27,pVVar32);
        pEVar22 = pEVar19;
        if (local_180 != (Edge *)0x0) {
          *(Edge **)(local_180 + 8) = pEVar19;
          pEVar22 = local_108;
        }
        local_108 = pEVar22;
        *(Edge **)pEVar19 = local_180;
        pEVar22 = *(Edge **)(pEVar19 + 0x10);
        pEVar4 = pEVar22;
        if (pEVar16 != (Edge *)0x0) {
          *(Edge **)pEVar16 = pEVar22;
          pEVar4 = local_128;
        }
        local_128 = pEVar4;
        *(Edge **)(pEVar22 + 8) = pEVar16;
        pEVar16 = pEVar22;
        local_180 = pEVar19;
        if (iVar14 == 0) goto LAB_00102d2d;
        local_d8 = pEVar17;
        local_d0 = pEVar18;
        if (iVar14 < 0) goto LAB_00102a29;
LAB_00102fc6:
        local_d8 = pEVar17;
        pEVar19 = pEVar18;
        pEVar16 = pEVar22;
        local_d0 = pEVar18;
        if (pEVar18 != (Edge *)0x0) goto joined_r0x00102fdb;
      }
      else {
LAB_00102f8f:
        iVar14 = iVar11;
        if ((-1 < local_48) || (local_58._8_8_ != 0)) goto LAB_00102cc0;
        pEVar22 = pEVar16;
        if (iVar14 != 0) goto LAB_00102fc6;
LAB_00102d2d:
        local_d8 = pEVar17;
        local_d0 = pEVar18;
        find_edge_for_coplanar_faces
                  (this,pVVar27,pVVar32,&local_d8,&local_d0,(Vertex *)0x0,(Vertex *)0x0);
        iVar14 = 0;
        pEVar19 = local_d0;
        pEVar22 = pEVar16;
        if (local_d0 != (Edge *)0x0) {
joined_r0x00102fdb:
          local_d0 = pEVar19;
          if (local_160 == (undefined8 *)0x0) {
            local_f8 = pEVar18;
            if (pEVar22 != (Edge *)0x0) {
              local_160 = *(undefined8 **)(pEVar18 + 8);
              if (*(long *)(local_160[2] + 0x18) != *(long *)(*(long *)(local_128 + 0x10) + 0x18)) {
                _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                                 "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
              }
              *local_160 = local_128;
              local_f8 = local_128;
LAB_00102dd2:
              lVar25 = *(long *)(pEVar18 + 0x10);
              lVar28 = *(long *)(pEVar22 + 0x10);
              *(undefined8 **)(local_128 + 8) = local_160;
              if (*(long *)(lVar28 + 0x18) != *(long *)(lVar25 + 0x18)) {
                _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                                 "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
              }
              *(Edge **)pEVar22 = pEVar18;
              local_128 = (Edge *)0x0;
              *(Edge **)(pEVar18 + 8) = pEVar22;
            }
          }
          else {
            pEVar16 = (Edge *)*local_160;
            while (pEVar18 != pEVar16) {
              pEVar4 = *(Edge **)pEVar16;
              lVar25 = *(long *)(pEVar16 + 0x18);
              plVar6 = *(long **)(pEVar16 + 0x10);
              if ((lVar25 == 0) || (lVar28 = plVar6[3], lVar28 == 0)) {
                _err_print_error("remove_edge_pair","core/math/convex_hull.cpp",0x271,
                                 "Assertion \"p_edge->target && r->target\" failed.",0,0);
                lVar28 = plVar6[3];
                lVar25 = *(long *)(pEVar16 + 0x18);
              }
              pEVar24 = (Edge *)0x0;
              if (pEVar4 != pEVar16) {
                puVar7 = *(undefined8 **)(pEVar16 + 8);
                *(undefined8 **)(pEVar4 + 8) = puVar7;
                *puVar7 = pEVar4;
                pEVar24 = pEVar4;
              }
              *(Edge **)(lVar28 + 0x10) = pEVar24;
              plVar20 = (long *)*plVar6;
              if (plVar6 == plVar20) {
                plVar20 = (long *)0x0;
              }
              else {
                plVar5 = (long *)plVar6[1];
                plVar20[1] = (long)plVar5;
                *plVar5 = (long)plVar20;
              }
              *(long **)(lVar25 + 0x10) = plVar20;
              uVar1 = *(uint *)(this + 0x94);
              uVar3 = *(uint *)(this + 0x9c);
              lVar25 = *(long *)(*(long *)(this + 0x88) +
                                (ulong)(uVar1 + 1 >> ((byte)*(undefined4 *)(this + 0x98) & 0x1f)) *
                                8);
              *(Edge **)(*(long *)(*(long *)(this + 0x88) +
                                  (ulong)(uVar1 >> ((byte)*(undefined4 *)(this + 0x98) & 0x1f)) * 8)
                        + (ulong)(uVar1 & uVar3) * 8) = pEVar16;
              *(long **)(lVar25 + (ulong)(uVar3 & uVar1 + 1) * 8) = plVar6;
              *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
              *(uint *)(this + 0x94) = uVar1 + 2;
              pEVar16 = pEVar4;
            }
            if (pEVar22 != (Edge *)0x0) {
              if (*(long *)(local_160[2] + 0x18) != *(long *)(*(long *)(local_128 + 0x10) + 0x18)) {
                _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                                 "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
              }
              *local_160 = local_128;
              goto LAB_00102dd2;
            }
          }
          iVar13 = *(int *)(pVVar32 + 0x68);
          iVar34 = *(int *)(pVVar32 + 0x6c);
          iVar33 = *(int *)(pVVar32 + 0x70);
          pVVar32 = *(Vertex **)(pEVar19 + 0x18);
          local_160 = *(undefined8 **)(pEVar19 + 0x10);
          local_e0 = pVVar32;
          if (iVar14 != 0) {
            pEVar16 = (Edge *)0x0;
            goto joined_r0x00102e46;
          }
          pEVar16 = (Edge *)0x0;
        }
LAB_00102a29:
        if (local_d8 != (Edge *)0x0) {
          if (local_110 == 0) goto LAB_00102a3e;
LAB_00103150:
          pEVar22 = local_d8;
          pEVar18 = *(Edge **)(local_110 + 8);
          while (pEVar17 != pEVar18) {
            pEVar19 = *(Edge **)(pEVar18 + 8);
            lVar25 = *(long *)(pEVar18 + 0x18);
            pEVar4 = *(Edge **)pEVar18;
            plVar6 = *(long **)(pEVar18 + 0x10);
            if ((lVar25 == 0) || (lVar28 = plVar6[3], lVar28 == 0)) {
              _err_print_error("remove_edge_pair","core/math/convex_hull.cpp",0x271,
                               "Assertion \"p_edge->target && r->target\" failed.",0,0);
              lVar28 = plVar6[3];
              lVar25 = *(long *)(pEVar18 + 0x18);
            }
            if (pEVar18 == pEVar4) {
              plVar20 = (long *)*plVar6;
              *(undefined8 *)(lVar28 + 0x10) = 0;
              if (plVar6 != plVar20) goto LAB_001031ac;
LAB_00103257:
              plVar20 = (long *)0x0;
            }
            else {
              puVar7 = *(undefined8 **)(pEVar18 + 8);
              *(undefined8 **)(pEVar4 + 8) = puVar7;
              *puVar7 = pEVar4;
              plVar20 = (long *)*plVar6;
              *(Edge **)(lVar28 + 0x10) = pEVar4;
              if (plVar6 == plVar20) goto LAB_00103257;
LAB_001031ac:
              puVar7 = (undefined8 *)plVar6[1];
              plVar20[1] = (long)puVar7;
              *puVar7 = plVar20;
            }
            *(long **)(lVar25 + 0x10) = plVar20;
            uVar1 = *(uint *)(this + 0x94);
            uVar2 = *(undefined4 *)(this + 0x98);
            lVar25 = *(long *)(this + 0x88);
            uVar3 = *(uint *)(this + 0x9c);
            *(Edge **)(*(long *)(lVar25 + (ulong)(uVar1 >> ((byte)uVar2 & 0x1f)) * 8) +
                      (ulong)(uVar1 & uVar3) * 8) = pEVar18;
            *(long **)(*(long *)(lVar25 + (ulong)(uVar1 + 1 >> ((byte)uVar2 & 0x1f)) * 8) +
                      (ulong)(uVar3 & uVar1 + 1) * 8) = plVar6;
            *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
            *(uint *)(this + 0x94) = uVar1 + 2;
            pEVar18 = pEVar19;
          }
          if (local_180 != (Edge *)0x0) {
            if (*(long *)(*(long *)(local_108 + 0x10) + 0x18) !=
                *(long *)(*(long *)(local_110 + 0x10) + 0x18)) {
              _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                               "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
            }
            *(long *)local_108 = local_110;
            *(Edge **)(local_110 + 8) = local_108;
            goto LAB_00102a80;
          }
          goto LAB_00102aaa;
        }
      }
    }
    else {
      if (pEVar18 != (Edge *)0x0) {
        iVar14 = Rational64::compare((Rational64 *)local_138,(Rational64 *)local_130);
        if (!bVar8) {
          iVar11 = iVar14;
          if (-1 < iVar14) goto LAB_00102f8f;
          if (local_68 < 0) goto LAB_00103116;
        }
        goto LAB_00102cc0;
      }
      iVar14 = -1;
      if ((bVar8) || (iVar11 = -1, -1 < local_68)) goto LAB_00102cc0;
LAB_00103116:
      iVar14 = iVar11;
      if (local_78._8_8_ != 0) goto LAB_00102cc0;
      local_d8 = pEVar17;
      local_d0 = pEVar18;
      if (local_110 != 0) goto LAB_00103150;
LAB_00102a3e:
      pEVar22 = local_d8;
      local_f0 = pEVar17;
      if (local_180 != (Edge *)0x0) {
        lVar25 = *(long *)pEVar17;
        if (*(long *)(*(long *)(local_108 + 0x10) + 0x18) !=
            *(long *)(*(long *)(lVar25 + 0x10) + 0x18)) {
          _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                           "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
        }
        *(long *)local_108 = lVar25;
        local_f0 = local_108;
        *(Edge **)(lVar25 + 8) = local_108;
LAB_00102a80:
        if (*(long *)(*(long *)(pEVar17 + 0x10) + 0x18) !=
            *(long *)(*(long *)(local_180 + 0x10) + 0x18)) {
          _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                           "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
        }
        *(Edge **)pEVar17 = local_180;
        local_108 = (Edge *)0x0;
        *(Edge **)(local_180 + 8) = pEVar17;
      }
LAB_00102aaa:
      local_180 = (Edge *)0x0;
      iVar13 = *(int *)(pVVar27 + 0x68);
      iVar34 = *(int *)(pVVar27 + 0x6c);
      iVar33 = *(int *)(pVVar27 + 0x70);
      pVVar27 = *(Vertex **)(pEVar22 + 0x18);
      local_110 = *(long *)(pEVar22 + 0x10);
      local_e8 = pVVar27;
    }
joined_r0x00102e46:
    if ((local_120 == pVVar27) && (local_100 == pVVar32)) {
      if (local_110 != 0) {
        pEVar17 = *(Edge **)(local_110 + 8);
        goto joined_r0x00102e96;
      }
      if (*(long *)(*(long *)(local_108 + 0x10) + 0x18) !=
          *(long *)(*(long *)(local_180 + 0x10) + 0x18)) {
        _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                         "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
      }
      *(Edge **)local_108 = local_180;
      *(Edge **)(local_180 + 8) = local_108;
      *(Edge **)(pVVar27 + 0x10) = local_180;
      goto LAB_001036fd;
    }
    local_c0 = *(int *)(pVVar32 + 0x70);
    local_c4 = *(int *)(pVVar32 + 0x6c);
    bVar8 = false;
    local_c8 = *(int *)(pVVar32 + 0x68);
  }
  lVar28 = new_edge_pair(this,pVVar27,pVVar32);
  lVar25 = *(long *)(lVar28 + 0x10);
  *(long *)lVar28 = lVar28;
  *(long *)(lVar28 + 8) = lVar28;
  *(long *)(pVVar27 + 0x10) = lVar28;
  *(long *)lVar25 = lVar25;
  *(long *)(lVar25 + 8) = lVar25;
  *(long *)(pVVar32 + 0x10) = lVar25;
LAB_00103408:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
joined_r0x00102e96:
  if (pEVar17 == local_f0) goto LAB_00103687;
  pEVar18 = *(Edge **)(pEVar17 + 8);
  lVar25 = *(long *)(pEVar17 + 0x18);
  pEVar22 = *(Edge **)pEVar17;
  plVar6 = *(long **)(pEVar17 + 0x10);
  if ((lVar25 == 0) || (lVar28 = plVar6[3], lVar28 == 0)) {
    _err_print_error("remove_edge_pair","core/math/convex_hull.cpp",0x271,
                     "Assertion \"p_edge->target && r->target\" failed.",0,0);
    lVar28 = plVar6[3];
    lVar25 = *(long *)(pEVar17 + 0x18);
  }
  if (pEVar17 == pEVar22) {
    *(undefined8 *)(lVar28 + 0x10) = 0;
    plVar20 = (long *)*plVar6;
    if (plVar6 != plVar20) goto LAB_00102ec4;
LAB_00102f71:
    plVar20 = (long *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(pEVar17 + 8);
    *(undefined8 **)(pEVar22 + 8) = puVar7;
    *puVar7 = pEVar22;
    *(Edge **)(lVar28 + 0x10) = pEVar22;
    plVar20 = (long *)*plVar6;
    if (plVar6 == plVar20) goto LAB_00102f71;
LAB_00102ec4:
    puVar7 = (undefined8 *)plVar6[1];
    plVar20[1] = (long)puVar7;
    *puVar7 = plVar20;
  }
  *(long **)(lVar25 + 0x10) = plVar20;
  uVar1 = *(uint *)(this + 0x94);
  uVar2 = *(undefined4 *)(this + 0x98);
  lVar25 = *(long *)(this + 0x88);
  uVar3 = *(uint *)(this + 0x9c);
  *(Edge **)(*(long *)(lVar25 + (ulong)(uVar1 >> ((byte)uVar2 & 0x1f)) * 8) +
            (ulong)(uVar1 & uVar3) * 8) = pEVar17;
  *(long **)(*(long *)(lVar25 + (ulong)(uVar1 + 1 >> ((byte)uVar2 & 0x1f)) * 8) +
            (ulong)(uVar3 & uVar1 + 1) * 8) = plVar6;
  *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
  *(uint *)(this + 0x94) = uVar1 + 2;
  pEVar17 = pEVar18;
  goto joined_r0x00102e96;
LAB_00103687:
  if (local_180 != (Edge *)0x0) {
    if (*(long *)(*(long *)(local_108 + 0x10) + 0x18) !=
        *(long *)(*(long *)(local_110 + 0x10) + 0x18)) {
      _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                       "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
    }
    *(long *)local_108 = local_110;
    *(Edge **)(local_110 + 8) = local_108;
    if (*(long *)(*(long *)(local_f0 + 0x10) + 0x18) !=
        *(long *)(*(long *)(local_180 + 0x10) + 0x18)) {
      _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                       "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
    }
    *(Edge **)local_f0 = local_180;
    *(Edge **)(local_180 + 8) = local_f0;
  }
LAB_001036fd:
  if (local_160 == (undefined8 *)0x0) {
    if (*(long *)(*(long *)(pEVar16 + 0x10) + 0x18) != *(long *)(*(long *)(local_128 + 0x10) + 0x18)
       ) {
      _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                       "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
    }
    *(Edge **)pEVar16 = local_128;
    *(Edge **)(local_128 + 8) = pEVar16;
    *(Edge **)(pVVar32 + 0x10) = pEVar16;
  }
  else {
    pEVar17 = (Edge *)*local_160;
    while (local_f8 != pEVar17) {
      pEVar18 = *(Edge **)pEVar17;
      lVar25 = *(long *)(pEVar17 + 0x18);
      plVar6 = *(long **)(pEVar17 + 0x10);
      if ((lVar25 == 0) || (lVar28 = plVar6[3], lVar28 == 0)) {
        _err_print_error("remove_edge_pair","core/math/convex_hull.cpp",0x271,
                         "Assertion \"p_edge->target && r->target\" failed.",0,0);
        lVar28 = plVar6[3];
        lVar25 = *(long *)(pEVar17 + 0x18);
      }
      pEVar22 = (Edge *)0x0;
      if (pEVar18 != pEVar17) {
        puVar7 = *(undefined8 **)(pEVar17 + 8);
        *(undefined8 **)(pEVar18 + 8) = puVar7;
        *puVar7 = pEVar18;
        pEVar22 = pEVar18;
      }
      *(Edge **)(lVar28 + 0x10) = pEVar22;
      plVar20 = (long *)*plVar6;
      if (plVar6 == plVar20) {
        plVar20 = (long *)0x0;
      }
      else {
        plVar5 = (long *)plVar6[1];
        plVar20[1] = (long)plVar5;
        *plVar5 = (long)plVar20;
      }
      *(long **)(lVar25 + 0x10) = plVar20;
      uVar1 = *(uint *)(this + 0x94);
      uVar2 = *(undefined4 *)(this + 0x98);
      lVar25 = *(long *)(this + 0x88);
      uVar3 = *(uint *)(this + 0x9c);
      *(Edge **)(*(long *)(lVar25 + (ulong)(uVar1 >> ((byte)uVar2 & 0x1f)) * 8) +
                (ulong)(uVar1 & uVar3) * 8) = pEVar17;
      *(long **)(*(long *)(lVar25 + (ulong)(uVar1 + 1 >> ((byte)uVar2 & 0x1f)) * 8) +
                (ulong)(uVar3 & uVar1 + 1) * 8) = plVar6;
      *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
      *(uint *)(this + 0x94) = uVar1 + 2;
      pEVar17 = pEVar18;
    }
    if (pEVar16 != (Edge *)0x0) {
      if (*(long *)(local_160[2] + 0x18) != *(long *)(*(long *)(local_128 + 0x10) + 0x18)) {
        _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                         "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
      }
      *local_160 = local_128;
      *(undefined8 **)(local_128 + 8) = local_160;
      if (*(long *)(*(long *)(pEVar16 + 0x10) + 0x18) !=
          *(long *)(*(long *)(local_f8 + 0x10) + 0x18)) {
        _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                         "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
      }
      *(Edge **)pEVar16 = local_f8;
      *(Edge **)(local_f8 + 8) = pEVar16;
    }
  }
  goto LAB_00103408;
}



/* ConvexHullInternal::compute_internal(int, int, ConvexHullInternal::IntermediateHull&) */

void __thiscall
ConvexHullInternal::compute_internal
          (ConvexHullInternal *this,int param_1,int param_2,IntermediateHull *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  Vertex *pVVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  Vertex *pVVar12;
  Vertex *pVVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  Vertex *pVVar17;
  Vertex *pVVar18;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  uVar10 = (ulong)(uint)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = param_2 - param_1;
  if (iVar7 == 1) {
    uVar15 = (ulong)*(uint *)(this + 0x150);
    if (*(uint *)(this + 0x150) <= (uint)param_1) goto LAB_00103dd2;
    pVVar13 = *(Vertex **)(*(long *)(this + 0x158) + (ulong)(uint)param_1 * 8);
LAB_00103c86:
    *(long *)(pVVar13 + 0x10) = 0;
    *(Vertex **)pVVar13 = pVVar13;
    *(Vertex **)(pVVar13 + 8) = pVVar13;
    *(Vertex **)param_3 = pVVar13;
    *(Vertex **)(param_3 + 8) = pVVar13;
    *(Vertex **)(param_3 + 0x10) = pVVar13;
    *(Vertex **)(param_3 + 0x18) = pVVar13;
    goto LAB_00103b99;
  }
  if (iVar7 != 2) {
    if (iVar7 != 0) {
      uVar4 = *(uint *)(this + 0x150);
      uVar15 = (ulong)uVar4;
      uVar11 = iVar7 / 2 + param_1;
      uVar10 = (ulong)(uVar11 - 1);
      if (uVar11 - 1 < uVar4) {
        lVar5 = *(long *)(*(long *)(this + 0x158) + uVar10 * 8);
        uVar16 = uVar11;
        if (param_2 <= (int)uVar11) {
LAB_00103d08:
          compute_internal(this,param_1,uVar11,param_3);
          local_58 = (undefined1  [16])0x0;
          local_48 = (undefined1  [16])0x0;
          compute_internal(this,uVar16,param_2,(IntermediateHull *)local_58);
          if (local_58._8_8_ != 0) {
            if (*(long *)(param_3 + 8) == 0) {
              *(undefined8 *)param_3 = local_58._0_8_;
              *(undefined8 *)(param_3 + 8) = local_58._8_8_;
              *(undefined8 *)(param_3 + 0x10) = local_48._0_8_;
              *(undefined8 *)(param_3 + 0x18) = local_48._8_8_;
            }
            else {
              merge(this,param_3,(IntermediateHull *)local_58);
            }
          }
          goto LAB_00103b99;
        }
        uVar10 = (ulong)uVar11;
        if (uVar11 < uVar4) {
          plVar14 = (long *)(*(long *)(this + 0x158) + (ulong)uVar11 * 8);
          do {
            lVar9 = *plVar14;
            if ((((*(int *)(lVar5 + 0x68) != *(int *)(lVar9 + 0x68)) ||
                 (*(int *)(lVar5 + 0x6c) != *(int *)(lVar9 + 0x6c))) ||
                (*(int *)(lVar5 + 0x70) != *(int *)(lVar9 + 0x70))) ||
               (uVar16 = uVar16 + 1, param_2 == uVar16)) goto LAB_00103d08;
            uVar10 = (ulong)uVar16;
            plVar14 = plVar14 + 1;
          } while (uVar16 < uVar4);
        }
      }
      goto LAB_00103dd2;
    }
    *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_3 + 0x10) = (undefined1  [16])0x0;
    goto LAB_00103b99;
  }
  uVar4 = *(uint *)(this + 0x150);
  uVar15 = (ulong)uVar4;
  if (uVar4 <= (uint)param_1) {
LAB_00103dd2:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,uVar15,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar10 = (ulong)(param_1 + 1U);
  pVVar13 = *(Vertex **)(*(long *)(this + 0x158) + (ulong)(uint)param_1 * 8);
  if (uVar4 <= param_1 + 1U) goto LAB_00103dd2;
  pVVar17 = *(Vertex **)(*(long *)(this + 0x158) + uVar10 * 8);
  iVar7 = *(int *)(pVVar13 + 0x68);
  iVar1 = *(int *)(pVVar17 + 0x68);
  pVVar8 = pVVar17;
  pVVar12 = pVVar13;
  if (iVar7 == iVar1) {
    iVar7 = *(int *)(pVVar17 + 0x6c);
    iVar1 = *(int *)(pVVar13 + 0x6c);
    if (iVar1 == iVar7) {
      iVar7 = *(int *)(pVVar13 + 0x70);
      if (iVar7 == *(int *)(pVVar17 + 0x70)) goto LAB_00103c86;
      pVVar18 = pVVar13;
      if ((iVar7 <= *(int *)(pVVar17 + 0x70)) &&
         (pVVar18 = pVVar17, pVVar8 = pVVar13, iVar7 == *(int *)(pVVar17 + 0x70))) {
        _err_print_error("compute_internal","core/math/convex_hull.cpp",0x3eb,
                         "Assertion \"v->point.z < w->point.z\" failed.",0,0);
      }
      pVVar13 = pVVar8;
      *(Vertex **)pVVar13 = pVVar13;
      *(Vertex **)(pVVar13 + 8) = pVVar13;
      *(Vertex **)param_3 = pVVar13;
      *(Vertex **)(param_3 + 8) = pVVar13;
      pVVar8 = pVVar13;
      pVVar12 = pVVar13;
      pVVar17 = pVVar18;
    }
    else {
      *(Vertex **)pVVar13 = pVVar17;
      *(Vertex **)(pVVar13 + 8) = pVVar17;
      *(Vertex **)pVVar17 = pVVar13;
      *(Vertex **)(pVVar17 + 8) = pVVar13;
      if (iVar7 <= iVar1) {
        *(Vertex **)param_3 = pVVar17;
        *(Vertex **)(param_3 + 8) = pVVar13;
        goto LAB_00103c51;
      }
      *(Vertex **)param_3 = pVVar13;
      *(Vertex **)(param_3 + 8) = pVVar17;
    }
  }
  else {
    iVar2 = *(int *)(pVVar13 + 0x6c);
    iVar3 = *(int *)(pVVar17 + 0x6c);
    *(Vertex **)pVVar13 = pVVar17;
    *(Vertex **)(pVVar13 + 8) = pVVar17;
    *(Vertex **)pVVar17 = pVVar13;
    *(Vertex **)(pVVar17 + 8) = pVVar13;
    if (iVar7 < iVar1) {
      *(Vertex **)param_3 = pVVar13;
      *(Vertex **)(param_3 + 8) = pVVar17;
      if (0 < iVar2 - iVar3) goto LAB_00103c51;
    }
    else {
      *(Vertex **)param_3 = pVVar17;
      *(Vertex **)(param_3 + 8) = pVVar13;
      if (-1 < iVar2 - iVar3) {
LAB_00103c51:
        pVVar8 = pVVar13;
        pVVar12 = pVVar17;
      }
    }
  }
  *(Vertex **)(param_3 + 0x10) = pVVar12;
  *(Vertex **)(param_3 + 0x18) = pVVar8;
  lVar9 = new_edge_pair(this,pVVar13,pVVar17);
  lVar5 = *(long *)(lVar9 + 0x10);
  *(long *)lVar9 = lVar9;
  *(long *)(lVar9 + 8) = lVar9;
  *(long *)(pVVar13 + 0x10) = lVar9;
  *(long *)lVar5 = lVar5;
  *(long *)(lVar5 + 8) = lVar5;
  *(long *)(pVVar17 + 0x10) = lVar5;
LAB_00103b99:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConvexHullInternal::merge(ConvexHullInternal::IntermediateHull&,
   ConvexHullInternal::IntermediateHull&) */

void __thiscall
ConvexHullInternal::merge
          (ConvexHullInternal *this,IntermediateHull *param_1,IntermediateHull *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    merge(this,param_1,param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* ConvexHullInternal::to_gd_vector(ConvexHullInternal::Point32 const&) */

undefined1  [16] __thiscall
ConvexHullInternal::to_gd_vector(ConvexHullInternal *this,Point32 *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  float local_30 [6];
  float local_18;
  long local_10;
  
  uVar1 = *(undefined8 *)this;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_30[2] = 0.0;
  local_30[*(int *)(this + 0x168)] = (float)*(int *)param_1;
  local_30[*(int *)(this + 0x16c)] = (float)*(int *)(param_1 + 4);
  local_30[*(int *)(this + 0x164)] = (float)*(int *)(param_1 + 8);
  local_18 = *(float *)(this + 8) * local_30[2];
  auVar2._4_4_ = (float)((ulong)uVar1 >> 0x20) * SUB84(local_30._0_8_,4);
  auVar2._0_4_ = (float)uVar1 * (float)local_30._0_8_;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._8_4_ = local_18;
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::get_gd_normal(ConvexHullInternal::Face*) */

undefined1  [16] __thiscall
ConvexHullInternal::get_gd_normal(ConvexHullInternal *this,Face *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  float local_50;
  float fStack_4c;
  float local_40;
  float fStack_3c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  auVar9 = to_gd_vector(this,(Point32 *)(param_1 + 0x28));
  local_50 = auVar9._0_4_;
  fStack_4c = auVar9._4_4_;
  auVar10 = to_gd_vector(this,(Point32 *)(param_1 + 0x38));
  local_40 = auVar10._0_4_;
  fStack_3c = auVar10._4_4_;
  fVar5 = fStack_3c * local_50 - fStack_4c * local_40;
  auVar4._0_4_ = auVar10._8_4_ * fStack_4c - auVar9._8_4_ * fStack_3c;
  auVar4._4_4_ = local_40 * auVar9._8_4_ - local_50 * auVar10._8_4_;
  auVar4._8_8_ = 0;
  fVar3 = auVar4._0_4_ * auVar4._0_4_ + auVar4._4_4_ * auVar4._4_4_ + fVar5 * fVar5;
  fVar6 = 0.0;
  uVar2 = 0;
  if (fVar3 != 0.0) {
    fVar3 = SQRT(fVar3);
    fVar6 = fVar5 / fVar3;
    auVar7._4_4_ = fVar3;
    auVar7._0_4_ = fVar3;
    auVar7._8_8_ = __LC63;
    auVar4 = divps(auVar4,auVar7);
    uVar2 = auVar4._0_8_;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar8._8_4_ = fVar6;
  auVar8._0_8_ = uVar2;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::get_coordinates(ConvexHullInternal::Vertex const*) */

undefined1  [16] __thiscall
ConvexHullInternal::get_coordinates(ConvexHullInternal *this,Vertex *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ConvexHullInternal *extraout_RDX;
  ConvexHullInternal *extraout_RDX_00;
  ConvexHullInternal *extraout_RDX_01;
  ConvexHullInternal *extraout_RDX_02;
  ConvexHullInternal *extraout_RDX_03;
  ConvexHullInternal *extraout_RDX_04;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_30 [6];
  float local_18;
  long local_10;
  
  lVar5 = (long)*(int *)(this + 0x16c);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_30[2] = 0.0;
  lVar6 = (long)*(int *)(this + 0x168);
  if (*(int *)(param_1 + 0x74) < 0) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 < 0) {
      lVar4 = ((ulong)(uVar7 == 0) - lVar4) + -1;
      if (lVar4 < 0) {
        fVar9 = (float)Int128::to_scalar();
        this = extraout_RDX_02;
      }
      else {
        if ((long)uVar7 < 1) {
          fVar9 = (float)(long)-uVar7;
        }
        else {
          fVar9 = (float)-uVar7;
        }
        fVar9 = (float)lVar4 * __LC8 + fVar9;
      }
      fVar9 = (float)((uint)fVar9 ^ _LC9);
    }
    else {
      fVar9 = (float)lVar4 * __LC8 + (float)uVar7;
    }
    lVar4 = *(long *)(param_1 + 0x60);
    uVar7 = *(ulong *)(param_1 + 0x58);
    if (lVar4 < 0) {
      lVar3 = ((ulong)(uVar7 == 0) - lVar4) + -1;
      if (lVar3 < 0) {
        fVar8 = (float)Int128::to_scalar();
        this = extraout_RDX_03;
      }
      else {
        if ((long)uVar7 < 1) {
          fVar8 = (float)(long)-uVar7;
        }
        else {
          fVar8 = (float)-uVar7;
        }
        fVar8 = (float)lVar3 * __LC8 + fVar8;
      }
      fVar8 = (float)((uint)fVar8 ^ _LC9);
    }
    else {
      fVar8 = (float)lVar4 * __LC8 + (float)uVar7;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    uVar2 = *(ulong *)(param_1 + 0x38);
    local_30[lVar6] = fVar9 / fVar8;
    if (lVar3 < 0) {
      lVar6 = ((ulong)(uVar2 == 0) - lVar3) + -1;
      if (lVar6 < 0) {
        fVar9 = (float)Int128::to_scalar();
        this = extraout_RDX_04;
      }
      else {
        if ((long)uVar2 < 1) {
          fVar9 = (float)(long)-uVar2;
        }
        else {
          fVar9 = (float)-uVar2;
        }
        fVar9 = (float)lVar6 * __LC8 + fVar9;
      }
      fVar9 = (float)((uint)fVar9 ^ _LC9);
    }
    else {
      fVar9 = (float)lVar3 * __LC8 + (float)uVar2;
    }
    if (lVar4 < 0) {
      lVar6 = ((ulong)(uVar7 == 0) - lVar4) + -1;
      if (lVar6 < 0) {
        fVar8 = (float)Int128::to_scalar();
        this = extraout_RDX;
      }
      else {
        if ((long)uVar7 < 1) {
          fVar8 = (float)(long)-uVar7;
        }
        else {
          fVar8 = (float)-uVar7;
        }
        fVar8 = (float)lVar6 * __LC8 + fVar8;
      }
      fVar8 = (float)((uint)fVar8 ^ _LC9);
    }
    else {
      fVar8 = (float)lVar4 * __LC8 + (float)uVar7;
    }
    uVar2 = *(ulong *)(param_1 + 0x48);
    lVar6 = *(long *)(param_1 + 0x50);
    local_30[lVar5] = fVar9 / fVar8;
    if (lVar6 < 0) {
      lVar5 = ((ulong)(uVar2 == 0) - lVar6) + -1;
      if (lVar5 < 0) {
        fVar9 = (float)Int128::to_scalar();
        this = extraout_RDX_00;
      }
      else {
        if ((long)uVar2 < 1) {
          fVar9 = (float)(long)-uVar2;
        }
        else {
          fVar9 = (float)-uVar2;
        }
        fVar9 = (float)lVar5 * __LC8 + fVar9;
      }
      fVar9 = (float)((uint)fVar9 ^ _LC9);
    }
    else {
      fVar9 = (float)lVar6 * __LC8 + (float)uVar2;
    }
    if (lVar4 < 0) {
      lVar5 = ((ulong)(uVar7 == 0) - lVar4) + -1;
      if (lVar5 < 0) {
        fVar8 = (float)Int128::to_scalar();
        this = extraout_RDX_01;
      }
      else {
        if ((long)uVar7 < 1) {
          fVar8 = (float)(long)-uVar7;
        }
        else {
          fVar8 = (float)-uVar7;
        }
        fVar8 = (float)lVar5 * __LC8 + fVar8;
      }
      fVar8 = (float)((uint)fVar8 ^ _LC9);
    }
    else {
      fVar8 = (float)lVar4 * __LC8 + (float)uVar7;
    }
    fVar9 = fVar9 / fVar8;
  }
  else {
    fVar9 = (float)*(int *)(param_1 + 0x70);
    local_30[lVar6] = (float)*(int *)(param_1 + 0x68);
    local_30[lVar5] = (float)*(int *)(param_1 + 0x6c);
  }
  uVar1 = *(undefined8 *)this;
  local_30[*(int *)(this + 0x164)] = fVar9;
  local_18 = local_30[2] * *(float *)(this + 8) + *(float *)(this + 0x14);
  auVar10._4_4_ =
       (float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20) +
       (float)((ulong)uVar1 >> 0x20) * SUB84(local_30._0_8_,4);
  auVar10._0_4_ = (float)*(undefined8 *)(this + 0xc) + (float)uVar1 * (float)local_30._0_8_;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar10._8_4_ = local_18;
    auVar10._12_4_ = 0;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::shift_face(ConvexHullInternal::Face*, float,
   LocalVector<ConvexHullInternal::Vertex*, unsigned int, false, false>&) */

undefined8 __thiscall
ConvexHullInternal::shift_face
          (ConvexHullInternal *this,Face *param_1,float param_2,LocalVector *param_3)

{
  undefined4 uVar1;
  Vertex *pVVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  void *pvVar17;
  long *plVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long lVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  long lVar46;
  ulong uVar47;
  long in_FS_OFFSET;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  long local_1d8;
  long *local_1c8;
  long *local_168;
  long local_140;
  ulong local_b8;
  long lStack_b0;
  undefined8 local_a8;
  ulong local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_60;
  float local_58;
  undefined1 local_50 [12];
  long local_40;
  
  fVar49 = (float)((uint)param_2 ^ _LC9);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = get_gd_normal(this,param_1);
  local_58 = fVar49 * local_50._8_4_;
  fVar48 = local_50._0_4_ * fVar49;
  fVar49 = local_50._4_4_ * fVar49;
  local_60 = CONCAT44(fVar49,fVar48);
  if (*(float *)this != 0.0) {
    local_60 = CONCAT44(fVar49,fVar48 / *(float *)this);
  }
  if (*(float *)(this + 4) != 0.0) {
    local_60 = CONCAT44(fVar49 / *(float *)(this + 4),(undefined4)local_60);
  }
  if (*(float *)(this + 8) != 0.0) {
    local_58 = local_58 / *(float *)(this + 8);
  }
  iVar34 = (int)*(float *)((long)&local_60 + (long)*(int *)(this + 0x164) * 4);
  iVar33 = (int)*(float *)((long)&local_60 + (long)*(int *)(this + 0x16c) * 4);
  iVar20 = (int)*(float *)((long)&local_60 + (long)*(int *)(this + 0x168) * 4);
  if ((iVar34 != 0 || iVar33 != 0) || iVar20 != 0) {
    lVar30 = (long)*(int *)(param_1 + 0x28) * (long)*(int *)(param_1 + 0x3c) -
             (long)*(int *)(param_1 + 0x2c) * (long)*(int *)(param_1 + 0x38);
    iVar34 = iVar34 + *(int *)(param_1 + 0x20);
    lVar11 = (long)*(int *)(param_1 + 0x2c) * (long)*(int *)(param_1 + 0x40) -
             (long)*(int *)(param_1 + 0x3c) * (long)*(int *)(param_1 + 0x30);
    lVar25 = (long)*(int *)(param_1 + 0x38) * (long)*(int *)(param_1 + 0x30) -
             (long)*(int *)(param_1 + 0x28) * (long)*(int *)(param_1 + 0x40);
    iVar20 = iVar20 + *(int *)(param_1 + 0x18);
    iVar33 = iVar33 + *(int *)(param_1 + 0x1c);
    lVar27 = *(int *)(param_1 + 0x18) * lVar11 + *(int *)(param_1 + 0x1c) * lVar25 +
             *(int *)(param_1 + 0x20) * lVar30;
    lVar11 = lVar11 * iVar20 + iVar33 * lVar25 + iVar34 * lVar30;
    if (lVar27 < lVar11) {
      _err_print_error("shift_face","core/math/convex_hull.cpp",0x708,
                       "Assertion \"shifted_dot <= orig_dot\" failed.",0,0);
    }
    else if (lVar11 != lVar27) {
      lVar25 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      Vertex::dot((Point64 *)&local_b8);
      iVar6 = Rational128::compare((Rational128 *)&local_b8,lVar11);
      lVar30 = lVar25;
      if (iVar6 < 0) {
        do {
          Vertex::dot((Point64 *)&local_88);
          iVar6 = Rational128::compare((Rational128 *)&local_88,lVar27);
          if (0 < iVar6) {
            _err_print_error("shift_face","core/math/convex_hull.cpp",0x73f,
                             "Assertion \"dot.compare(orig_dot) <= 0\" failed.",0,0);
          }
          iVar6 = Rational128::compare((Rational128 *)&local_88,(Rational128 *)&local_b8);
          lVar12 = lVar30;
          if (0 < iVar6) {
            iVar6 = Rational128::compare((Rational128 *)&local_88,lVar11);
            if (-1 < iVar6) goto LAB_00104c4b;
            lVar25 = *(long *)(lVar30 + 0x10);
            local_b8 = local_88;
            lStack_b0 = lStack_80;
            local_a8 = local_78;
            lVar12 = lVar25;
          }
          lVar30 = *(long *)(lVar12 + 8);
        } while (lVar25 != *(long *)(lVar12 + 8));
        goto LAB_00106b12;
      }
      do {
        while( true ) {
          Vertex::dot((Point64 *)&local_88);
          iVar7 = Rational128::compare((Rational128 *)&local_88,lVar27);
          if (0 < iVar7) {
            _err_print_error("shift_face","core/math/convex_hull.cpp",0x721,
                             "Assertion \"dot.compare(orig_dot) <= 0\" failed.",0,0);
          }
          iVar7 = Rational128::compare((Rational128 *)&local_88,(Rational128 *)&local_b8);
          if (-1 < iVar7) break;
          iVar7 = Rational128::compare((Rational128 *)&local_88,lVar11);
          lVar25 = *(long *)(lVar30 + 0x10);
          local_b8 = local_88;
          lStack_b0 = lStack_80;
          local_a8 = local_78;
          if (iVar7 < 0) {
            lVar30 = lVar25;
            if (lVar25 != 0) goto LAB_00104c4b;
            goto LAB_00104ac8;
          }
          lVar30 = *(long *)(lVar25 + 8);
          iVar6 = iVar7;
          if (lVar25 == *(long *)(lVar25 + 8)) goto LAB_00104ac8;
        }
        plVar13 = (long *)(lVar30 + 8);
        lVar30 = *plVar13;
      } while (lVar25 != *plVar13);
    }
LAB_00104ac8:
    uVar19 = 0;
    goto LAB_00104aca;
  }
LAB_00106b12:
  uVar19 = 1;
LAB_00104aca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104c4b:
  if (iVar6 == 0) {
    puVar16 = *(undefined8 **)(lVar30 + 0x10);
    puVar28 = (undefined8 *)*puVar16;
    do {
      Vertex::dot((Point64 *)&local_88);
      iVar7 = Rational128::compare((Rational128 *)&local_88,lVar11);
      if (0 < iVar7) goto LAB_00104c9f;
      puVar28 = (undefined8 *)*puVar28;
    } while (puVar16 != puVar28);
  }
  else {
LAB_00104c9f:
    local_168 = (long *)0x0;
    local_1c8 = (long *)0x0;
    local_140 = 0;
    if (iVar6 == 0) goto LAB_001056ff;
LAB_00104cd8:
    lVar25 = lVar30;
    lVar27 = lVar30;
    iVar7 = iVar6;
    if (local_140 == 0) goto LAB_00104cf2;
LAB_00104ce9:
    lVar25 = lVar30;
    lVar27 = local_140;
    iVar7 = iVar6;
    if (lVar30 != local_140) {
LAB_00104cf2:
      local_140 = lVar27;
      lVar27 = *(long *)(lVar25 + 0x10);
      lVar30 = lVar27;
      while( true ) {
        lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + 8);
        if (lVar30 == lVar27) {
          _err_print_error("shift_face","core/math/convex_hull.cpp",0x7b4,
                           "Assertion \"e != intersection->reverse\" failed.",0,0);
        }
        pVVar2 = *(Vertex **)(lVar30 + 0x18);
        Vertex::dot((Point64 *)&local_88);
        iVar6 = Rational128::compare((Rational128 *)&local_88,lVar11);
        if (-1 < iVar6) break;
        lVar27 = *(long *)(lVar25 + 0x10);
      }
      if (iVar6 == 0) {
        if (iVar7 != 0) {
          plVar13 = (long *)new_edge_pair(this,*(Vertex **)(lVar25 + 0x18),pVVar2);
          if (local_1c8 == (long *)0x0) {
            plVar15 = (long *)plVar13[2];
            lVar25 = *(long *)(lVar30 + 0x10);
          }
          else {
            plVar18 = *(long **)(lVar25 + 0x10);
            plVar15 = (long *)plVar13[2];
            if (plVar15[3] != *(long *)(plVar18[2] + 0x18)) goto LAB_001063aa;
            *plVar18 = (long)plVar13;
            lVar25 = *(long *)(lVar30 + 0x10);
            plVar13[1] = (long)plVar18;
          }
LAB_0010583e:
          puVar16 = *(undefined8 **)(lVar25 + 8);
          lVar27 = *(long *)(plVar15[2] + 0x18);
          plVar14 = plVar15;
          if (*(long *)(puVar16[2] + 0x18) != lVar27) {
            _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                             "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
            plVar14 = (long *)plVar13[2];
            lVar25 = *(long *)(lVar30 + 0x10);
            lVar27 = *(long *)(plVar14[2] + 0x18);
          }
          *puVar16 = plVar15;
          plVar15[1] = (long)puVar16;
          goto LAB_00105865;
        }
        plVar13 = (long *)**(long **)(lVar25 + 0x10);
        if (pVVar2 != (Vertex *)plVar13[3]) {
          plVar13 = (long *)new_edge_pair(this,*(Vertex **)(lVar25 + 0x18),pVVar2);
          goto LAB_001057ea;
        }
        if (local_1c8 != (long *)0x0) {
          plVar15 = (long *)local_1c8[2];
          goto LAB_001058da;
        }
LAB_00105a9d:
        lVar25 = plVar13[2];
        local_1c8 = plVar13;
      }
      else {
        plVar13 = *(long **)(lVar30 + 0x10);
        plVar15 = (long *)plVar13[1];
        plVar18 = plVar13;
        if (plVar15 == plVar13) {
          *(undefined8 *)(pVVar2 + 0x10) = 0;
        }
        else {
          lVar27 = plVar15[2];
          lVar12 = *plVar13;
          *(long **)(pVVar2 + 0x10) = plVar15;
          if (*(long *)(lVar27 + 0x18) != *(long *)(*(long *)(lVar12 + 0x10) + 0x18)) {
            _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                             "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
            plVar18 = *(long **)(lVar30 + 0x10);
          }
          *plVar15 = lVar12;
          *(long **)(lVar12 + 8) = plVar15;
          *plVar13 = (long)plVar13;
          plVar13[1] = (long)plVar13;
        }
        lVar12 = *(long *)(lVar30 + 0x20);
        lVar42 = (long)*(int *)(lVar12 + 0x28) * (long)*(int *)(lVar12 + 0x3c) -
                 (long)*(int *)(lVar12 + 0x2c) * (long)*(int *)(lVar12 + 0x38);
        lVar21 = (long)*(int *)(lVar12 + 0x40) * (long)*(int *)(lVar12 + 0x2c) -
                 (long)*(int *)(lVar12 + 0x3c) * (long)*(int *)(lVar12 + 0x30);
        lVar26 = plVar18[4];
        lVar41 = (long)*(int *)(lVar12 + 0x38) * (long)*(int *)(lVar12 + 0x30) -
                 (long)*(int *)(lVar12 + 0x28) * (long)*(int *)(lVar12 + 0x40);
        lVar36 = (long)*(int *)(lVar26 + 0x28) * (long)*(int *)(lVar26 + 0x3c) -
                 (long)*(int *)(lVar26 + 0x2c) * (long)*(int *)(lVar26 + 0x38);
        lVar35 = (long)*(int *)(lVar26 + 0x38) * (long)*(int *)(lVar26 + 0x30) -
                 (long)*(int *)(lVar26 + 0x28) * (long)*(int *)(lVar26 + 0x40);
        lVar31 = (long)*(int *)(lVar26 + 0x40) * (long)*(int *)(lVar26 + 0x2c) -
                 (long)*(int *)(lVar26 + 0x3c) * (long)*(int *)(lVar26 + 0x30);
        lVar22 = lVar41 * *(int *)(param_1 + 0x2c) + lVar21 * *(int *)(param_1 + 0x28) +
                 lVar42 * *(int *)(param_1 + 0x30);
        lVar46 = lVar41 * *(int *)(param_1 + 0x3c) + lVar21 * *(int *)(param_1 + 0x38) +
                 lVar42 * *(int *)(param_1 + 0x40);
        lVar32 = *(int *)(param_1 + 0x2c) * lVar35 + *(int *)(param_1 + 0x28) * lVar31 +
                 *(int *)(param_1 + 0x30) * lVar36;
        lVar27 = *(int *)(param_1 + 0x3c) * lVar35 + *(int *)(param_1 + 0x38) * lVar31 +
                 *(int *)(param_1 + 0x40) * lVar36;
        lVar21 = (*(int *)(lVar12 + 0x20) - iVar34) * lVar42 +
                 (*(int *)(lVar12 + 0x1c) - iVar33) * lVar41 +
                 (*(int *)(lVar12 + 0x18) - iVar20) * lVar21;
        lVar12 = (*(int *)(lVar26 + 0x20) - iVar34) * lVar36 +
                 (*(int *)(lVar26 + 0x18) - iVar20) * lVar31 +
                 (*(int *)(lVar26 + 0x1c) - iVar33) * lVar35;
        auVar50 = Int128::mul(lVar46,lVar32);
        auVar51 = Int128::mul(lVar22,lVar27);
        uVar23 = auVar51._0_8_ - auVar50._0_8_;
        lVar26 = ((auVar51._8_8_ + -1) - auVar50._8_8_) + (ulong)(uVar23 < auVar51._0_8_) +
                 (ulong)(auVar50._0_8_ == 0);
        local_88 = uVar23;
        lStack_80 = lVar26;
        if (uVar23 == 0 && lVar26 == 0) {
          _err_print_error("shift_face","core/math/convex_hull.cpp",0x7db,
                           "Assertion \"det.get_sign() != 0\" failed.",0,0);
        }
        iVar10 = *(int *)(this + 0x2c);
        if (iVar10 == 0) {
          uVar8 = *(uint *)(this + 0x28) + 1;
          lVar35 = (ulong)*(uint *)(this + 0x28) * 8;
          *(uint *)(this + 0x28) = uVar8;
          uVar19 = Memory::realloc_static(*(void **)(this + 0x18),(ulong)uVar8 * 8,false);
          *(undefined8 *)(this + 0x18) = uVar19;
          uVar19 = Memory::realloc_static
                             (*(void **)(this + 0x20),(ulong)*(uint *)(this + 0x28) << 3,false);
          lVar31 = *(long *)(this + 0x18);
          *(undefined8 *)(this + 0x20) = uVar19;
          uVar19 = Memory::alloc_static((ulong)*(uint *)(this + 0x38) << 7,false);
          uVar8 = *(uint *)(this + 0x38);
          *(undefined8 *)(lVar31 + lVar35) = uVar19;
          lVar31 = *(long *)(this + 0x20);
          uVar19 = Memory::alloc_static((ulong)uVar8 << 3,false);
          *(undefined8 *)(lVar31 + lVar35) = uVar19;
          uVar8 = *(uint *)(this + 0x38);
          if (uVar8 == 0) {
            plVar15 = *(long **)(this + 0x20);
          }
          else {
            plVar15 = *(long **)(this + 0x20);
            lVar31 = *(long *)(this + 0x18);
            uVar37 = 0;
            lVar36 = *plVar15;
            do {
              *(ulong *)(lVar36 + uVar37 * 8) = uVar37 * 0x80 + *(long *)(lVar31 + lVar35);
              uVar37 = uVar37 + 1;
            } while (uVar37 != uVar8);
          }
          iVar10 = uVar8 + *(int *)(this + 0x2c);
        }
        else {
          plVar15 = *(long **)(this + 0x20);
        }
        uVar8 = iVar10 - 1;
        *(uint *)(this + 0x2c) = uVar8;
        uVar5 = _UNK_0010b8a8;
        uVar19 = __LC53;
        pauVar40 = *(undefined1 (**) [16])
                    (plVar15[uVar8 >> ((byte)*(undefined4 *)(this + 0x30) & 0x1f)] +
                    (ulong)(uVar8 & *(uint *)(this + 0x34)) * 8);
        *(undefined4 *)(pauVar40[7] + 8) = 0xffffffff;
        *pauVar40 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar40[1] + 8) = (undefined1  [16])0x0;
        *(undefined8 *)(pauVar40[6] + 8) = uVar19;
        *(undefined8 *)pauVar40[7] = uVar5;
        auVar50 = Int128::operator*((Int128 *)&local_88,(long)iVar34);
        iVar10 = *(int *)(param_1 + 0x40);
        auVar51 = Int128::mul(lVar21 * iVar10,lVar32);
        auVar52 = Int128::mul(lVar12 * iVar10,lVar22);
        iVar10 = *(int *)(param_1 + 0x30);
        auVar53 = Int128::mul(lVar12 * iVar10,lVar46);
        auVar54 = Int128::mul(lVar21 * iVar10,lVar27);
        uVar37 = auVar54._0_8_ - auVar53._0_8_;
        uVar43 = auVar52._0_8_ + uVar37;
        uVar38 = uVar43 - auVar51._0_8_;
        uVar47 = auVar50._0_8_ + uVar38;
        lVar35 = (ulong)CARRY8(auVar50._0_8_,uVar38) +
                 (ulong)CARRY8(auVar52._0_8_,uVar37) +
                 (((auVar52._8_8_ + -2 + auVar54._8_8_ + auVar50._8_8_) - auVar53._8_8_) -
                 auVar51._8_8_) + (ulong)(auVar51._0_8_ == 0) + (ulong)(auVar53._0_8_ == 0) +
                 (ulong)(uVar37 < auVar54._0_8_) + (ulong)(uVar38 < uVar43);
        auVar50 = Int128::operator*((Int128 *)&local_88,(long)iVar33);
        iVar10 = *(int *)(param_1 + 0x3c);
        auVar51 = Int128::mul(lVar21 * iVar10,lVar32);
        auVar52 = Int128::mul(lVar12 * iVar10,lVar22);
        iVar10 = *(int *)(param_1 + 0x2c);
        auVar53 = Int128::mul(lVar12 * iVar10,lVar46);
        auVar54 = Int128::mul(lVar21 * iVar10,lVar27);
        uVar37 = auVar54._0_8_ - auVar53._0_8_;
        uVar43 = auVar52._0_8_ + uVar37;
        uVar38 = uVar43 - auVar51._0_8_;
        uVar39 = auVar50._0_8_ + uVar38;
        lVar31 = (ulong)CARRY8(auVar50._0_8_,uVar38) +
                 (ulong)CARRY8(auVar52._0_8_,uVar37) +
                 (((auVar52._8_8_ + -2 + auVar54._8_8_ + auVar50._8_8_) - auVar53._8_8_) -
                 auVar51._8_8_) + (ulong)(auVar51._0_8_ == 0) + (ulong)(auVar53._0_8_ == 0) +
                 (ulong)(uVar37 < auVar54._0_8_) + (ulong)(uVar38 < uVar43);
        auVar50 = Int128::operator*((Int128 *)&local_88,(long)iVar20);
        iVar10 = *(int *)(param_1 + 0x38);
        auVar51 = Int128::mul(lVar21 * iVar10,lVar32);
        auVar52 = Int128::mul(lVar12 * iVar10,lVar22);
        iVar10 = *(int *)(param_1 + 0x28);
        auVar53 = Int128::mul(lVar12 * iVar10,lVar46);
        auVar54 = Int128::mul(lVar21 * iVar10,lVar27);
        uVar38 = auVar54._0_8_ - auVar53._0_8_;
        uVar44 = auVar52._0_8_ + uVar38;
        uVar43 = uVar44 - auVar51._0_8_;
        uVar37 = auVar50._0_8_ + uVar43;
        *(ulong *)(pauVar40[2] + 8) = uVar37;
        *(ulong *)(pauVar40[3] + 8) = uVar39;
        lVar27 = (ulong)CARRY8(auVar52._0_8_,uVar38) +
                 (((auVar52._8_8_ + -2 + auVar54._8_8_ + auVar50._8_8_) - auVar53._8_8_) -
                 auVar51._8_8_) + (ulong)(auVar51._0_8_ == 0) + (ulong)(auVar53._0_8_ == 0) +
                 (ulong)(uVar38 < auVar54._0_8_) + (ulong)CARRY8(auVar50._0_8_,uVar43) +
                 (ulong)(uVar43 < uVar44);
        *(long *)pauVar40[3] = lVar27;
        *(long *)pauVar40[4] = lVar31;
        *(ulong *)(pauVar40[4] + 8) = uVar47;
        *(ulong *)(pauVar40[5] + 8) = uVar23;
        *(long *)pauVar40[5] = lVar35;
        *(long *)pauVar40[6] = lVar26;
        if (lVar27 < 0) {
          lVar27 = -lVar27 - (ulong)(uVar37 != 0);
          if (lVar27 < 0) {
            fVar48 = (float)Int128::to_scalar();
          }
          else {
            if ((long)uVar37 < 1) {
              fVar48 = (float)(long)-uVar37;
            }
            else {
              fVar48 = (float)-uVar37;
            }
            fVar48 = (float)((uint)((float)lVar27 * __LC8 + fVar48) ^ _LC9);
          }
        }
        else {
          fVar48 = (float)lVar27 * __LC8 + (float)uVar37;
        }
        if (lVar26 < 0) {
          lVar27 = -lVar26 - (ulong)(uVar23 != 0);
          if (lVar27 < 0) {
            fVar49 = (float)Int128::to_scalar();
          }
          else {
            if ((long)uVar23 < 1) {
              fVar49 = (float)(long)-uVar23;
            }
            else {
              fVar49 = (float)-uVar23;
            }
            fVar49 = (float)((uint)((float)lVar27 * __LC8 + fVar49) ^ _LC9);
          }
        }
        else {
          fVar49 = (float)lVar26 * __LC8 + (float)uVar23;
        }
        *(int *)(pauVar40[6] + 8) = (int)(fVar48 / fVar49);
        if (lVar31 < 0) {
          lVar27 = -lVar31 - (ulong)(uVar39 != 0);
          if (lVar27 < 0) {
            fVar48 = (float)Int128::to_scalar();
          }
          else {
            if ((long)uVar39 < 1) {
              fVar48 = (float)(long)-uVar39;
            }
            else {
              fVar48 = (float)-uVar39;
            }
            fVar48 = (float)((uint)((float)lVar27 * __LC8 + fVar48) ^ _LC9);
          }
        }
        else {
          fVar48 = (float)lVar31 * __LC8 + (float)uVar39;
        }
        if (lVar26 < 0) {
          lVar27 = -lVar26 - (ulong)(uVar23 != 0);
          if (lVar27 < 0) {
            fVar49 = (float)Int128::to_scalar();
          }
          else {
            if ((long)uVar23 < 1) {
              fVar49 = (float)(long)-uVar23;
            }
            else {
              fVar49 = (float)-uVar23;
            }
            fVar49 = (float)((uint)((float)lVar27 * __LC8 + fVar49) ^ _LC9);
          }
        }
        else {
          fVar49 = (float)lVar26 * __LC8 + (float)uVar23;
        }
        *(int *)(pauVar40[6] + 0xc) = (int)(fVar48 / fVar49);
        if (lVar35 < 0) {
          lVar27 = -lVar35 - (ulong)(uVar47 != 0);
          if (lVar27 < 0) {
            fVar48 = (float)Int128::to_scalar();
          }
          else {
            if ((long)uVar47 < 1) {
              fVar48 = (float)(long)-uVar47;
            }
            else {
              fVar48 = (float)-uVar47;
            }
            fVar48 = (float)((uint)((float)lVar27 * __LC8 + fVar48) ^ _LC9);
          }
        }
        else {
          fVar48 = (float)lVar35 * __LC8 + (float)uVar47;
        }
        if (lVar26 < 0) {
          lVar27 = -lVar26 - (ulong)(uVar23 != 0);
          if (lVar27 < 0) {
            fVar49 = (float)Int128::to_scalar();
          }
          else {
            if ((long)uVar23 < 1) {
              fVar49 = (float)(long)-uVar23;
            }
            else {
              fVar49 = (float)-uVar23;
            }
            fVar49 = (float)((uint)((float)lVar27 * __LC8 + fVar49) ^ _LC9);
          }
        }
        else {
          fVar49 = (float)lVar26 * __LC8 + (float)uVar23;
        }
        uVar8 = *(uint *)(param_3 + 4);
        pvVar17 = *(void **)(param_3 + 8);
        *(int *)pauVar40[7] = (int)(fVar48 / fVar49);
        *(undefined1 (**) [16])(lVar30 + 0x18) = pauVar40;
        *(long **)pauVar40[1] = plVar13;
        uVar9 = *(uint *)param_3;
        if (uVar9 == uVar8) {
          uVar23 = (ulong)(uVar9 * 2);
          if (uVar9 * 2 == 0) {
            uVar23 = 1;
          }
          *(int *)(param_3 + 4) = (int)uVar23;
          pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
          *(void **)(param_3 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
          uVar8 = *(uint *)(param_3 + 4);
          uVar9 = *(uint *)param_3;
        }
        uVar24 = uVar9 + 1;
        *(uint *)param_3 = uVar24;
        *(undefined1 (**) [16])((long)pvVar17 + (ulong)uVar9 * 8) = pauVar40;
        if (uVar24 == uVar8) {
          uVar23 = (ulong)(uVar8 * 2);
          if (uVar8 * 2 == 0) {
            uVar23 = 1;
          }
          *(int *)(param_3 + 4) = (int)uVar23;
          pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
          *(void **)(param_3 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
          uVar8 = *(uint *)(param_3 + 4);
          uVar24 = *(uint *)param_3;
        }
        uVar9 = uVar24 + 1;
        *(uint *)param_3 = uVar9;
        *(Vertex **)((long)pvVar17 + (ulong)uVar24 * 8) = pVVar2;
        if (uVar9 == uVar8) {
          uVar23 = (ulong)(uVar8 * 2);
          if (uVar8 * 2 == 0) {
            uVar23 = 1;
          }
          *(int *)(param_3 + 4) = (int)uVar23;
          pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
          *(void **)(param_3 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
          uVar9 = *(uint *)param_3;
        }
        *(uint *)param_3 = uVar9 + 1;
        *(undefined8 *)((long)pvVar17 + (ulong)uVar9 * 8) = 0;
        plVar13 = (long *)new_edge_pair(this,*(Vertex **)(lVar25 + 0x18),*(Vertex **)(lVar30 + 0x18)
                                       );
        if (iVar7 == 0) {
LAB_001057ea:
          plVar18 = *(long **)(lVar25 + 0x10);
          plVar14 = (long *)plVar13[2];
          lVar27 = *plVar18;
          lVar12 = *(long *)(*(long *)(lVar27 + 0x10) + 0x18);
          if (plVar14[3] != lVar12) {
            _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                             "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
            plVar14 = (long *)plVar13[2];
            plVar18 = *(long **)(lVar25 + 0x10);
            lVar12 = plVar14[3];
          }
          lVar25 = plVar18[2];
          *plVar13 = lVar27;
          *(long **)(lVar27 + 8) = plVar13;
          if (lVar12 != *(long *)(lVar25 + 0x18)) {
LAB_001063aa:
            _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                             "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
            plVar14 = (long *)plVar13[2];
          }
          lVar25 = *(long *)(lVar30 + 0x10);
          lVar27 = plVar14[2];
          *plVar18 = (long)plVar13;
          plVar13[1] = (long)plVar18;
          lVar27 = *(long *)(lVar27 + 0x18);
          plVar15 = plVar14;
          if (iVar6 == 0) goto LAB_0010583e;
LAB_00105865:
          if (lVar27 != *(long *)(*(long *)(lVar25 + 0x10) + 0x18)) {
LAB_00105e00:
            _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                             "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
          }
          *plVar14 = lVar25;
          *(long **)(lVar25 + 8) = plVar14;
          if (local_1c8 != (long *)0x0) {
            plVar15 = (long *)local_1c8[2];
            if (0 < iVar7) {
              lVar25 = plVar13[2];
              if (*(long *)(lVar25 + 0x18) != *(long *)(plVar15[2] + 0x18)) {
                _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                                 "Assertion \"reverse->target == n->reverse->target\" failed.");
                lVar25 = plVar13[2];
              }
              *plVar13 = (long)plVar15;
              plVar15[1] = (long)plVar13;
              local_1c8 = plVar13;
              goto LAB_001056c1;
            }
LAB_001058da:
            if (plVar15 != plVar13) {
              lVar25 = local_1c8[3];
              pvVar17 = *(void **)(param_3 + 8);
              uVar8 = *(uint *)param_3;
              if (uVar8 == *(uint *)(param_3 + 4)) {
                uVar23 = (ulong)(uVar8 * 2);
                if (uVar8 * 2 == 0) {
                  uVar23 = 1;
                }
                *(int *)(param_3 + 4) = (int)uVar23;
                pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
                *(void **)(param_3 + 8) = pvVar17;
                if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
                uVar8 = *(uint *)param_3;
                plVar15 = (long *)local_1c8[2];
              }
              uVar9 = uVar8 + 1;
              *(uint *)param_3 = uVar9;
              *(long *)((long)pvVar17 + (ulong)uVar8 * 8) = lVar25;
              plVar18 = (long *)*plVar13;
              if (plVar15 != plVar18) {
                do {
                  lVar25 = plVar18[3];
                  plVar15 = (long *)*plVar18;
                  plVar14 = (long *)plVar18[2];
                  if ((lVar25 == 0) || (lVar27 = plVar14[3], lVar12 = lVar25, lVar27 == 0)) {
                    _err_print_error("remove_edge_pair","core/math/convex_hull.cpp",0x271,
                                     "Assertion \"p_edge->target && r->target\" failed.",0,0);
                    lVar27 = plVar14[3];
                    lVar12 = plVar18[3];
                  }
                  if (plVar18 == plVar15) {
                    *(undefined8 *)(lVar27 + 0x10) = 0;
                    plVar15 = (long *)*plVar14;
                    if (plVar14 == plVar15) goto LAB_00105a1b;
LAB_0010595c:
                    puVar16 = (undefined8 *)plVar14[1];
                    plVar15[1] = (long)puVar16;
                    *puVar16 = plVar15;
                  }
                  else {
                    puVar16 = (undefined8 *)plVar18[1];
                    plVar15[1] = (long)puVar16;
                    *puVar16 = plVar15;
                    *(long **)(lVar27 + 0x10) = plVar15;
                    plVar15 = (long *)*plVar14;
                    if (plVar14 != plVar15) goto LAB_0010595c;
LAB_00105a1b:
                    plVar15 = (long *)0x0;
                  }
                  uVar1 = *(undefined4 *)(this + 0x98);
                  uVar8 = *(uint *)(this + 0x9c);
                  *(long **)(lVar12 + 0x10) = plVar15;
                  uVar9 = *(uint *)(this + 0x94);
                  lVar27 = *(long *)(this + 0x88);
                  *(long **)(*(long *)(lVar27 + (ulong)(uVar9 >> ((byte)uVar1 & 0x1f)) * 8) +
                            (ulong)(uVar9 & uVar8) * 8) = plVar18;
                  pvVar17 = *(void **)(param_3 + 8);
                  *(long **)(*(long *)(lVar27 + (ulong)(uVar9 + 1 >> ((byte)uVar1 & 0x1f)) * 8) +
                            (ulong)(uVar8 & uVar9 + 1) * 8) = plVar14;
                  *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
                  *(uint *)(this + 0x94) = uVar9 + 2;
                  uVar8 = *(uint *)param_3;
                  if (uVar8 == *(uint *)(param_3 + 4)) {
                    uVar23 = (ulong)(uVar8 * 2);
                    if (uVar8 * 2 == 0) {
                      uVar23 = 1;
                    }
                    *(int *)(param_3 + 4) = (int)uVar23;
                    pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
                    *(void **)(param_3 + 8) = pvVar17;
                    if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
                    uVar8 = *(uint *)param_3;
                  }
                  uVar9 = uVar8 + 1;
                  plVar18 = (long *)*plVar13;
                  *(uint *)param_3 = uVar9;
                  *(long *)((long)pvVar17 + (ulong)uVar8 * 8) = lVar25;
                } while (plVar18 != (long *)local_1c8[2]);
              }
              if (*(uint *)(param_3 + 4) == uVar9) {
                uVar23 = (ulong)(uVar9 * 2);
                if (uVar9 * 2 == 0) {
                  uVar23 = 1;
                }
                *(int *)(param_3 + 4) = (int)uVar23;
                pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
                *(void **)(param_3 + 8) = pvVar17;
                if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
                uVar9 = *(uint *)param_3;
              }
              *(uint *)param_3 = uVar9 + 1;
              *(undefined8 *)((long)pvVar17 + (ulong)uVar9 * 8) = 0;
            }
            goto LAB_00105a9d;
          }
        }
        else {
          plVar14 = (long *)plVar13[2];
          if (local_1c8 != (long *)0x0) {
            plVar18 = *(long **)(lVar25 + 0x10);
            if (plVar14[3] != *(long *)(plVar18[2] + 0x18)) goto LAB_001063aa;
            lVar27 = plVar14[2];
            *plVar18 = (long)plVar13;
            plVar13[1] = (long)plVar18;
            lVar25 = *(long *)(lVar30 + 0x10);
            lVar27 = *(long *)(lVar27 + 0x18);
            goto LAB_00105865;
          }
          lVar25 = *(long *)(lVar30 + 0x10);
          if (*(long *)(plVar14[2] + 0x18) != *(long *)(*(long *)(lVar25 + 0x10) + 0x18))
          goto LAB_00105e00;
          *plVar14 = lVar25;
          *(long **)(lVar25 + 8) = plVar14;
        }
        lVar25 = plVar13[2];
        local_1c8 = plVar13;
      }
LAB_001056c1:
      local_1c8[4] = (long)param_1;
      *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(lVar30 + 0x20);
      plVar13 = local_1c8;
      if (local_168 != (long *)0x0) {
        plVar13 = local_168;
      }
      local_168 = plVar13;
      if (iVar6 != 0) goto LAB_00104cd8;
LAB_001056ff:
      plVar13 = (long *)**(long **)(lVar30 + 0x10);
      plVar15 = plVar13;
      while( true ) {
        Vertex::dot((Point64 *)&local_88);
        iVar7 = Rational128::compare((Rational128 *)&local_88,lVar11);
        if (-1 < iVar7) break;
        lVar30 = plVar15[2];
        plVar15 = (long *)*plVar15;
        if (plVar13 == plVar15) goto LAB_00106b12;
      }
      lVar25 = lVar30;
      lVar27 = lVar30;
      iVar7 = iVar6;
      if (local_140 != 0) goto LAB_00104ce9;
      goto LAB_00104cf2;
    }
    if (iVar6 < 1) {
      plVar13 = (long *)local_1c8[2];
      uVar8 = *(uint *)param_3;
      if (plVar13 != local_168) {
        lVar11 = local_1c8[3];
        pvVar17 = *(void **)(param_3 + 8);
        if (*(uint *)(param_3 + 4) == uVar8) {
          uVar23 = (ulong)(uVar8 * 2);
          if (uVar8 * 2 == 0) {
            uVar23 = 1;
          }
          *(int *)(param_3 + 4) = (int)uVar23;
          pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
          *(void **)(param_3 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
          uVar8 = *(uint *)param_3;
          plVar13 = (long *)local_1c8[2];
        }
        uVar9 = uVar8 + 1;
        *(uint *)param_3 = uVar9;
        *(long *)((long)pvVar17 + (ulong)uVar8 * 8) = lVar11;
        plVar15 = (long *)*local_168;
        if (plVar13 != plVar15) {
          do {
            lVar11 = plVar15[3];
            plVar13 = (long *)*plVar15;
            plVar18 = (long *)plVar15[2];
            if ((lVar11 == 0) || (lVar25 = plVar18[3], lVar27 = lVar11, lVar25 == 0)) {
              _err_print_error("remove_edge_pair","core/math/convex_hull.cpp",0x271,
                               "Assertion \"p_edge->target && r->target\" failed.",0,0);
              lVar25 = plVar18[3];
              lVar27 = plVar15[3];
            }
            if (plVar15 == plVar13) {
              plVar13 = (long *)0x0;
            }
            else {
              puVar16 = (undefined8 *)plVar15[1];
              plVar13[1] = (long)puVar16;
              *puVar16 = plVar13;
            }
            *(long **)(lVar25 + 0x10) = plVar13;
            plVar13 = (long *)*plVar18;
            if (plVar18 == plVar13) {
              plVar13 = (long *)0x0;
            }
            else {
              plVar14 = (long *)plVar18[1];
              plVar13[1] = (long)plVar14;
              *plVar14 = (long)plVar13;
            }
            *(long **)(lVar27 + 0x10) = plVar13;
            uVar8 = *(uint *)(this + 0x94);
            uVar1 = *(undefined4 *)(this + 0x98);
            lVar25 = *(long *)(this + 0x88);
            uVar9 = *(uint *)(this + 0x9c);
            *(long **)(*(long *)(lVar25 + (ulong)(uVar8 >> ((byte)uVar1 & 0x1f)) * 8) +
                      (ulong)(uVar8 & uVar9) * 8) = plVar15;
            pvVar17 = *(void **)(param_3 + 8);
            *(long **)(*(long *)(lVar25 + (ulong)(uVar8 + 1 >> ((byte)uVar1 & 0x1f)) * 8) +
                      (ulong)(uVar9 & uVar8 + 1) * 8) = plVar18;
            *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
            *(uint *)(this + 0x94) = uVar8 + 2;
            uVar8 = *(uint *)param_3;
            if (uVar8 == *(uint *)(param_3 + 4)) {
              uVar23 = (ulong)(uVar8 * 2);
              if (uVar8 * 2 == 0) {
                uVar23 = 1;
              }
              *(int *)(param_3 + 4) = (int)uVar23;
              pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
              *(void **)(param_3 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
              uVar8 = *(uint *)param_3;
            }
            uVar9 = uVar8 + 1;
            plVar15 = (long *)*local_168;
            *(uint *)param_3 = uVar9;
            *(long *)((long)pvVar17 + (ulong)uVar8 * 8) = lVar11;
          } while (plVar15 != (long *)local_1c8[2]);
        }
        if (*(uint *)(param_3 + 4) == uVar9) {
          uVar23 = (ulong)(uVar9 * 2);
          if (uVar9 * 2 == 0) {
            uVar23 = 1;
          }
          *(int *)(param_3 + 4) = (int)uVar23;
          pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
          *(void **)(param_3 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
LAB_00105e9f:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar9 = *(uint *)param_3;
        }
        uVar8 = uVar9 + 1;
        *(uint *)param_3 = uVar8;
        *(undefined8 *)((long)pvVar17 + (ulong)uVar9 * 8) = 0;
      }
    }
    else {
      puVar16 = *(undefined8 **)(lVar30 + 0x10);
      lVar11 = local_1c8[3];
      *(long *)(local_168[2] + 0x18) = lVar11;
      lVar25 = *(long *)(puVar16[2] + 0x18);
      if (lVar11 != lVar25) {
        _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                         "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
        lVar25 = *(long *)(local_168[2] + 0x18);
      }
      *puVar16 = local_168;
      local_168[1] = (long)puVar16;
      lVar11 = local_1c8[2];
      if (lVar25 != *(long *)(*(long *)(lVar11 + 0x10) + 0x18)) {
        _err_print_error(&_LC38,"core/math/convex_hull.cpp",0x1e7,
                         "Assertion \"reverse->target == n->reverse->target\" failed.",0,0);
      }
      *local_168 = lVar11;
      *(long **)(lVar11 + 8) = local_168;
      uVar8 = *(uint *)param_3;
    }
    if (uVar8 == 0) {
      _err_print_error("shift_face","core/math/convex_hull.cpp",0x82a,
                       "Assertion \"p_stack.size() > 0\" failed.",0,0);
      uVar8 = *(uint *)param_3;
      if (uVar8 == 0) {
        uVar37 = 0;
        uVar23 = 0;
LAB_00106a28:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar23,uVar37,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar24 = 0;
    puVar16 = *(undefined8 **)(param_3 + 8);
    *(undefined8 *)(this + 0x178) = *puVar16;
    uVar9 = uVar8;
    if (uVar8 == 0) {
      uVar8 = *(uint *)param_3;
      goto LAB_00106acf;
    }
    do {
      do {
        uVar37 = (ulong)uVar8;
        uVar29 = uVar24 + 1;
        uVar45 = uVar24;
        if (uVar8 <= uVar24) {
LAB_00106a0a:
          uVar23 = (ulong)uVar45;
          goto LAB_00106a28;
        }
        uVar23 = (ulong)uVar24;
        uVar24 = uVar24 + 2;
        lVar11 = puVar16[uVar23];
        uVar45 = uVar29;
        if (uVar8 <= uVar29) goto LAB_00106a0a;
        local_1d8 = (ulong)uVar29 << 3;
        bVar4 = false;
LAB_001066a5:
        lVar25 = *(long *)((long)puVar16 + local_1d8);
        if (lVar25 != 0) {
          lVar27 = *(long *)(lVar25 + 0x18);
          if (*(long *)(lVar11 + 0x20) == 0) {
            *(long *)(lVar11 + 0x18) = lVar27;
          }
          else {
            *(long *)(*(long *)(lVar11 + 0x20) + 0x10) = lVar27;
          }
          if (*(long *)(lVar25 + 0x20) != 0) {
            *(long *)(lVar11 + 0x20) = *(long *)(lVar25 + 0x20);
          }
          for (; lVar27 != 0; lVar27 = *(long *)(lVar27 + 0x10)) {
            if (lVar25 != *(long *)(lVar27 + 8)) {
              _err_print_error("receive_nearby_faces","core/math/convex_hull.cpp",0x1d5,
                               "Assertion \"f->nearby_vertex == p_src\" failed.",0,0);
            }
            *(long *)(lVar27 + 8) = lVar11;
          }
          *(undefined1 (*) [16])(lVar25 + 0x18) = (undefined1  [16])0x0;
          if (*(long *)(lVar25 + 0x10) == 0) goto LAB_0010692f;
          uVar8 = *(uint *)param_3;
          uVar23 = (ulong)uVar8;
          uVar29 = *(uint *)(param_3 + 4);
          pvVar17 = *(void **)(param_3 + 8);
          if (!bVar4) {
            uVar37 = uVar23;
            if (uVar8 == uVar29) {
              uVar23 = (ulong)(uVar8 * 2);
              if (uVar8 * 2 == 0) {
                uVar23 = 1;
              }
              *(int *)(param_3 + 4) = (int)uVar23;
              pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
              *(void **)(param_3 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
              uVar37 = (ulong)*(uint *)param_3;
              uVar29 = *(uint *)(param_3 + 4);
            }
            uVar8 = (int)uVar37 + 1;
            uVar23 = (ulong)uVar8;
            *(uint *)param_3 = uVar8;
            *(long *)((long)pvVar17 + uVar37 * 8) = lVar11;
          }
          do {
            plVar13 = *(long **)(lVar25 + 0x10);
            lVar27 = plVar13[3];
            if ((uint)uVar23 == uVar29) {
              uVar8 = (uint)uVar23 * 2;
              uVar23 = (ulong)uVar8;
              if (uVar8 == 0) {
                uVar23 = 1;
              }
              *(int *)(param_3 + 4) = (int)uVar23;
              pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar23 * 8,false);
              *(void **)(param_3 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) goto LAB_00105e9f;
              plVar13 = *(long **)(lVar25 + 0x10);
              uVar23 = (ulong)*(uint *)param_3;
            }
            plVar15 = (long *)plVar13[2];
            *(int *)param_3 = (int)uVar23 + 1;
            *(long *)((long)pvVar17 + uVar23 * 8) = lVar27;
            lVar27 = plVar13[3];
            plVar18 = (long *)*plVar13;
            if ((lVar27 == 0) || (lVar30 = plVar15[3], lVar30 == 0)) {
              _err_print_error("remove_edge_pair","core/math/convex_hull.cpp",0x271,
                               "Assertion \"p_edge->target && r->target\" failed.",0,0);
              lVar27 = plVar13[3];
              lVar30 = plVar15[3];
            }
            if (plVar13 == plVar18) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              plVar18 = (long *)*plVar15;
              if (plVar15 == plVar18) goto LAB_00106836;
LAB_00106773:
              puVar16 = (undefined8 *)plVar15[1];
              plVar18[1] = (long)puVar16;
              *puVar16 = plVar18;
            }
            else {
              plVar14 = (long *)plVar13[1];
              plVar18[1] = (long)plVar14;
              *plVar14 = (long)plVar18;
              *(long **)(lVar30 + 0x10) = plVar18;
              plVar18 = (long *)*plVar15;
              if (plVar15 != plVar18) goto LAB_00106773;
LAB_00106836:
              plVar18 = (long *)0x0;
            }
            *(long **)(lVar27 + 0x10) = plVar18;
            uVar8 = *(uint *)(this + 0x94);
            uVar1 = *(undefined4 *)(this + 0x98);
            lVar27 = *(long *)(this + 0x88);
            uVar29 = *(uint *)(this + 0x9c);
            *(long **)(*(long *)(lVar27 + (ulong)(uVar8 >> ((byte)uVar1 & 0x1f)) * 8) +
                      (ulong)(uVar8 & uVar29) * 8) = plVar13;
            *(long **)(*(long *)(lVar27 + (ulong)(uVar8 + 1 >> ((byte)uVar1 & 0x1f)) * 8) +
                      (ulong)(uVar29 & uVar8 + 1) * 8) = plVar15;
            *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
            lVar27 = *(long *)(lVar25 + 0x10);
            *(uint *)(this + 0x94) = uVar8 + 2;
            if (lVar27 == 0) goto LAB_0010692a;
            uVar23 = (ulong)*(uint *)param_3;
            uVar29 = *(uint *)(param_3 + 4);
            pvVar17 = *(void **)(param_3 + 8);
          } while( true );
        }
        if (bVar4) {
          if (*(int *)(param_3 + 4) == (int)uVar37) {
            uVar8 = (int)uVar37 * 2;
            uVar23 = (ulong)uVar8;
            if (uVar8 == 0) {
              uVar23 = 1;
            }
            *(int *)(param_3 + 4) = (int)uVar23;
            puVar16 = (undefined8 *)Memory::realloc_static(puVar16,uVar23 * 8,false);
            *(undefined8 **)(param_3 + 8) = puVar16;
            if (puVar16 == (undefined8 *)0x0) goto LAB_00105e9f;
          }
          uVar29 = *(uint *)param_3;
          uVar8 = uVar29 + 1;
          *(uint *)param_3 = uVar8;
          puVar16[uVar29] = 0;
        }
        else {
          uVar8 = *(uint *)param_3;
        }
      } while (uVar24 < uVar9);
LAB_00106acf:
      uVar9 = uVar8;
    } while (uVar24 < uVar8);
    if (uVar8 != 0) {
      *(undefined4 *)param_3 = 0;
    }
    *(int *)(param_1 + 0x18) = iVar20;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(int *)(param_1 + 0x1c) = iVar33;
    *(int *)(param_1 + 0x20) = iVar34;
  }
  goto LAB_00106b12;
LAB_0010692a:
  bVar4 = true;
LAB_0010692f:
  uVar37 = (ulong)*(uint *)param_3;
  local_1d8 = local_1d8 + 8;
  uVar45 = uVar24;
  if (*(uint *)param_3 <= uVar24) goto LAB_00106a0a;
  puVar16 = *(undefined8 **)(param_3 + 8);
  uVar24 = uVar24 + 1;
  goto LAB_001066a5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::compute(Vector3 const*, int) */

void __thiscall ConvexHullInternal::compute(ConvexHullInternal *this,Vector3 *param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  Vector3 *pVVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  void *pvVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 in_XMM6 [16];
  float in_XMM7_Da;
  float in_XMM8_Da;
  undefined8 local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_50;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 1) {
    fVar33 = 0.0;
    uVar13 = 2;
    uVar7 = 1;
    *(undefined4 *)(this + 0x16c) = 0;
    fVar32 = 0.0;
    auVar28 = ZEXT816(0) << 0x20;
    fVar34 = 0.0;
    fVar30 = fVar34;
    fVar31 = fVar34;
    goto LAB_00107457;
  }
  in_XMM6 = (undefined1  [16])0x0;
  iVar22 = 0;
  in_XMM8_Da = 0.0;
  in_XMM7_Da = 0.0;
  pVVar16 = param_1;
  fVar34 = in_XMM7_Da;
  fVar32 = in_XMM7_Da;
  fVar33 = in_XMM8_Da;
  do {
    while( true ) {
      fVar27 = *(float *)pVVar16;
      fVar25 = *(float *)(pVVar16 + 4);
      fVar31 = *(float *)(pVVar16 + 8);
      fVar30 = fVar27;
      if (iVar22 != 0) break;
      iVar22 = 1;
      pVVar16 = pVVar16 + 0xc;
      fVar34 = fVar25;
      fVar32 = fVar27;
      fVar33 = fVar31;
      if (param_2 == 1) goto LAB_00106d91;
    }
    if (((in_XMM6._0_4_ < 0.0) || (in_XMM7_Da < 0.0)) || (in_XMM8_Da < 0.0)) {
      _err_print_error("expand_to","./core/math/aabb.h",0x158,
                       "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                       ,0,0);
      in_XMM6 = ZEXT416((uint)in_XMM6._0_4_);
    }
    iVar22 = iVar22 + 1;
    if (fVar32 <= fVar27) {
      fVar30 = fVar32;
    }
    in_XMM7_Da = in_XMM7_Da + fVar34;
    pVVar16 = pVVar16 + 0xc;
    fVar32 = in_XMM6._0_4_ + fVar32;
    fVar26 = fVar25;
    if (fVar34 <= fVar25) {
      fVar26 = fVar34;
    }
    fVar34 = fVar26;
    fVar26 = fVar31;
    if (fVar31 <= in_XMM8_Da + fVar33) {
      fVar26 = in_XMM8_Da + fVar33;
    }
    if (fVar33 <= fVar31) {
      fVar31 = fVar33;
    }
    if (fVar27 <= fVar32) {
      fVar27 = fVar32;
    }
    if (fVar25 <= in_XMM7_Da) {
      fVar25 = in_XMM7_Da;
    }
    in_XMM8_Da = fVar26 - fVar31;
    in_XMM6 = ZEXT416((uint)(fVar27 - fVar30));
    in_XMM7_Da = fVar25 - fVar34;
    fVar32 = fVar30;
    fVar33 = fVar31;
  } while (param_2 != iVar22);
LAB_00106d91:
  fVar27 = in_XMM6._0_4_;
  auVar28._4_12_ = in_XMM6._4_12_;
  auVar28._0_4_ = fVar27 / _LC62;
  fVar32 = in_XMM7_Da / _LC62;
  fVar33 = in_XMM8_Da / _LC62;
  if (in_XMM7_Da <= fVar27) goto LAB_00107400;
  if (in_XMM7_Da < in_XMM8_Da) {
    *(undefined4 *)(this + 0x16c) = 2;
    uVar13 = 0;
    uVar7 = 1;
    goto LAB_00107425;
  }
  *(undefined4 *)(this + 0x16c) = 1;
  iVar9 = (uint)(in_XMM8_Da <= fVar27) * 2;
  iVar22 = iVar9 + 1;
  *(int *)(this + 0x164) = iVar9;
  *(int *)(this + 0x168) = 3 - iVar22;
  if (0xaaaaaaaa < (uint)((4 - iVar22) * -0x55555555)) goto LAB_00106e1d;
  do {
    auVar29._0_4_ = auVar28._0_4_ ^ _LC9;
    auVar29._4_4_ = auVar28._4_4_;
    auVar29._8_4_ = auVar28._8_4_;
    auVar29._12_4_ = auVar28._12_4_;
    fVar32 = (float)((uint)fVar32 ^ _LC9);
    fVar33 = (float)((uint)fVar33 ^ _LC9);
    auVar28 = auVar29;
LAB_00106e1d:
    fVar27 = auVar28._0_4_;
    *(float *)this = fVar27;
    *(float *)(this + 4) = fVar32;
    *(float *)(this + 8) = fVar33;
    if (fVar27 != 0.0) {
      auVar28 = ZEXT416((uint)(_LC63 / fVar27));
    }
    if (fVar32 != 0.0) {
      fVar32 = _LC63 / fVar32;
    }
    if (fVar33 != 0.0) {
      fVar33 = _LC63 / fVar33;
    }
    local_88 = 0;
    local_80 = (undefined8 *)0x0;
    *(float *)(this + 0xc) = fVar30;
    *(float *)(this + 0x10) = fVar34;
    *(float *)(this + 0x14) = fVar31;
    if (param_2 != 0) {
      uVar6 = param_2 - 1U | param_2 - 1U >> 1;
      fVar27 = auVar28._0_4_;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      local_88._4_4_ = (uVar6 >> 0x10 | uVar6) + 1;
      local_88._0_4_ = 0;
      local_80 = (undefined8 *)Memory::realloc_static((void *)0x0,(ulong)local_88._4_4_ << 4,false);
      uVar5 = _UNK_0010b8a8;
      uVar4 = __LC53;
      auVar28 = ZEXT416((uint)fVar27);
      if (local_80 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar15 = (ulong)(uint)param_2;
      puVar10 = local_80;
      if ((uVar15 * 0x10 & 0x10) == 0) goto LAB_00106f50;
      *local_80 = __LC53;
      local_80[1] = uVar5;
      for (puVar10 = local_80 + 2; puVar10 != local_80 + uVar15 * 2; puVar10 = puVar10 + 4) {
LAB_00106f50:
        *puVar10 = uVar4;
        puVar10[1] = uVar5;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
      }
      local_88 = CONCAT44(local_88._4_4_,param_2);
      if (0 < param_2) {
        in_XMM8_Da = *(float *)(this + 0x14);
        in_XMM7_Da = *(float *)(this + 0x10);
        fVar25 = *(float *)(this + 0xc);
        in_XMM6 = ZEXT416((uint)fVar25);
        iVar22 = *(int *)(this + 0x168);
        puVar10 = local_80;
        iVar9 = 0;
        do {
          local_50._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
          local_50._0_4_ = (float)*(undefined8 *)param_1;
          local_48 = (*(float *)(param_1 + 8) - in_XMM8_Da) * fVar33;
          local_50 = CONCAT44((local_50._4_4_ - in_XMM7_Da) * fVar32,
                              ((float)local_50 - fVar25) * fVar27);
          if (param_2 == iVar9) {
            uVar21 = (long)param_2;
            goto LAB_001074c8;
          }
          iVar12 = iVar9 + 1;
          param_1 = param_1 + 0xc;
          fVar26 = *(float *)((long)&local_50 + (long)*(int *)(this + 0x164) * 4);
          *puVar10 = CONCAT44((int)*(float *)((long)&local_50 + (long)*(int *)(this + 0x16c) * 4),
                              (int)*(float *)((long)&local_50 + (long)iVar22 * 4));
          puVar10[1] = CONCAT44(iVar9,(int)fVar26);
          puVar10 = puVar10 + 2;
          iVar9 = iVar12;
        } while (param_2 != iVar12);
      }
    }
    LocalVector<ConvexHullInternal::Point32,unsigned_int,false,false>::sort_custom<PointComparator>
              ((LocalVector<ConvexHullInternal::Point32,unsigned_int,false,false> *)&local_88);
    if (*(int *)(this + 0x28) != 0) {
      lVar18 = 0;
      do {
        Memory::free_static(*(void **)(*(long *)(this + 0x18) + lVar18 * 8),false);
        lVar24 = lVar18 * 8;
        lVar18 = lVar18 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x20) + lVar24),false);
      } while ((uint)lVar18 < *(uint *)(this + 0x28));
      Memory::free_static(*(void **)(this + 0x18),false);
      Memory::free_static(*(void **)(this + 0x20),false);
      uVar6 = *(uint *)(this + 0x150);
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (uVar6 <= (uint)param_2) goto LAB_0010738e;
LAB_0010714c:
      *(int *)(this + 0x150) = param_2;
LAB_00107153:
      uVar5 = _UNK_0010b8a8;
      uVar4 = __LC53;
      iVar22 = (int)local_88;
      if (param_2 < 1) goto LAB_0010721a;
      uVar23 = local_88 & 0xffffffff;
      uVar17 = 0;
      break;
    }
    uVar6 = *(uint *)(this + 0x150);
    if ((uint)param_2 < uVar6) goto LAB_0010714c;
LAB_0010738e:
    if ((uint)param_2 <= uVar6) goto LAB_00107153;
    if ((uint)param_2 <= *(uint *)(this + 0x154)) goto LAB_0010714c;
    pvVar20 = *(void **)(this + 0x158);
    uVar6 = param_2 - 1U >> 1 | param_2 - 1U;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 >> 8 | uVar6;
    uVar6 = (uVar6 >> 0x10 | uVar6) + 1;
    *(uint *)(this + 0x154) = uVar6;
    lVar18 = Memory::realloc_static(pvVar20,(ulong)uVar6 * 8,false);
    *(long *)(this + 0x158) = lVar18;
    if (lVar18 != 0) goto LAB_0010714c;
    LocalVector<ConvexHullInternal::Point32,unsigned_int,false,false>::resize((uint)pvVar20);
LAB_00107400:
    fVar27 = in_XMM6._0_4_;
    if (fVar27 < in_XMM8_Da) {
      uVar8 = 0;
      uVar7 = 0;
      uVar13 = 1;
      *(undefined4 *)(this + 0x16c) = 2;
      uVar14 = uVar13;
      if (in_XMM7_Da < in_XMM8_Da) goto LAB_00107457;
LAB_00107480:
      *(undefined4 *)(this + 0x164) = uVar8;
      *(undefined4 *)(this + 0x168) = uVar14;
      goto LAB_00106e1d;
    }
    *(undefined4 *)(this + 0x16c) = 0;
    if (fVar27 < in_XMM7_Da) {
      uVar14 = 2;
      uVar13 = 2;
      uVar8 = 1;
      uVar7 = 1;
      if (in_XMM8_Da <= fVar27) goto LAB_00107457;
      goto LAB_00107480;
    }
    uVar13 = 1;
    uVar7 = 2;
    if (in_XMM7_Da < in_XMM8_Da) {
LAB_00107425:
      *(undefined4 *)(this + 0x164) = uVar13;
      *(undefined4 *)(this + 0x168) = uVar7;
      goto LAB_00106e1d;
    }
    uVar13 = 2;
    uVar7 = 1;
LAB_00107457:
    *(undefined4 *)(this + 0x164) = uVar13;
    *(undefined4 *)(this + 0x168) = uVar7;
  } while( true );
LAB_0010717d:
  iVar9 = *(int *)(this + 0x2c);
  if (iVar9 == 0) {
    uVar6 = *(uint *)(this + 0x28) + 1;
    lVar24 = (ulong)*(uint *)(this + 0x28) * 8;
    *(uint *)(this + 0x28) = uVar6;
    uVar11 = Memory::realloc_static(*(void **)(this + 0x18),(ulong)uVar6 * 8,false);
    *(undefined8 *)(this + 0x18) = uVar11;
    uVar11 = Memory::realloc_static
                       (*(void **)(this + 0x20),(ulong)*(uint *)(this + 0x28) << 3,false);
    lVar18 = *(long *)(this + 0x18);
    *(undefined8 *)(this + 0x20) = uVar11;
    uVar11 = Memory::alloc_static((ulong)*(uint *)(this + 0x38) << 7,false);
    uVar6 = *(uint *)(this + 0x38);
    *(undefined8 *)(lVar18 + lVar24) = uVar11;
    lVar18 = *(long *)(this + 0x20);
    uVar11 = Memory::alloc_static((ulong)uVar6 << 3,false);
    *(undefined8 *)(lVar18 + lVar24) = uVar11;
    uVar6 = *(uint *)(this + 0x38);
    if (uVar6 == 0) {
      plVar19 = *(long **)(this + 0x20);
    }
    else {
      plVar19 = *(long **)(this + 0x20);
      lVar18 = *(long *)(this + 0x18);
      uVar15 = 0;
      lVar2 = *plVar19;
      do {
        *(ulong *)(lVar2 + uVar15 * 8) = uVar15 * 0x80 + *(long *)(lVar24 + lVar18);
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar6);
    }
    iVar9 = uVar6 + *(int *)(this + 0x2c);
  }
  else {
    plVar19 = *(long **)(this + 0x20);
  }
  uVar6 = iVar9 - 1;
  *(uint *)(this + 0x2c) = uVar6;
  pauVar1 = *(undefined1 (**) [16])
             (plVar19[uVar6 >> ((byte)*(undefined4 *)(this + 0x30) & 0x1f)] +
             (ulong)(uVar6 & *(uint *)(this + 0x34)) * 8);
  *(undefined8 *)pauVar1[2] = 0;
  *(undefined4 *)(pauVar1[7] + 8) = 0xffffffff;
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[1] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar1[2] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar1[3] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar1[4] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar1[5] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar1[6] + 8) = uVar4;
  *(undefined8 *)pauVar1[7] = uVar5;
  uVar15 = uVar23;
  uVar21 = uVar23;
  if (uVar23 == uVar17) {
LAB_001074c8:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar15,uVar21,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = *(uint *)(this + 0x150);
  uVar21 = (ulong)uVar6;
  uVar11 = (local_80 + uVar17 * 2)[1];
  *(undefined8 *)(pauVar1[6] + 8) = local_80[uVar17 * 2];
  *(undefined8 *)pauVar1[7] = uVar11;
  uVar15 = uVar17;
  if (uVar6 <= (uint)uVar17) goto LAB_001074c8;
  *(undefined1 (**) [16])(*(long *)(this + 0x158) + uVar17 * 8) = pauVar1;
  uVar17 = uVar17 + 1;
  if (uVar17 == (long)param_2) {
LAB_0010721a:
    puVar10 = local_80;
    if (iVar22 != 0) {
      local_88 = local_88 & 0xffffffff00000000;
    }
    if (*(int *)(this + 0x90) != 0) {
      lVar18 = 0;
      do {
        Memory::free_static(*(void **)(*(long *)(this + 0x80) + lVar18 * 8),false);
        lVar24 = lVar18 * 8;
        lVar18 = lVar18 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x88) + lVar24),false);
      } while ((uint)lVar18 < *(uint *)(this + 0x90));
      Memory::free_static(*(void **)(this + 0x80),false);
      Memory::free_static(*(void **)(this + 0x88),false);
      *(undefined8 *)(this + 0x90) = 0;
      *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
    }
    *(undefined8 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x160) = 0xfffffffd;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    compute_internal(this,0,param_2,(IntermediateHull *)local_78);
    *(undefined8 *)(this + 0x178) = local_78._0_8_;
    if (puVar10 != (undefined8 *)0x0) {
      Memory::free_static(puVar10,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_0010717d;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::shrink(float, float) */

void __thiscall ConvexHullInternal::shrink(ConvexHullInternal *this,float param_1,float param_2)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  char cVar17;
  uint uVar18;
  ulong uVar19;
  Face *pFVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [12];
  long *local_118;
  int local_10c;
  int local_108;
  int local_104;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  int local_a0;
  undefined8 *local_98;
  uint local_88;
  uint local_78;
  uint local_74;
  long *local_70;
  float local_64 [3];
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_4c [8];
  undefined4 local_44;
  long local_40;
  
  lVar22 = *(long *)(this + 0x178);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar22 == 0) {
LAB_00107844:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_74 = 1;
  iVar1 = *(int *)(this + 0x160) + -1;
  *(int *)(this + 0x160) = iVar1;
  *(int *)(lVar22 + 0x78) = iVar1;
  local_70 = (long *)Memory::realloc_static((void *)0x0,8,false);
  if (local_70 != (long *)0x0) {
    *local_70 = lVar22;
    local_98 = (undefined8 *)0x0;
    lVar22 = *(long *)(this + 0x178);
    local_78 = 1;
    uVar18 = 0;
    iVar6 = *(int *)(lVar22 + 0x68);
    iVar7 = *(int *)(lVar22 + 0x6c);
    local_100 = 0;
    iVar8 = *(int *)(lVar22 + 0x70);
    local_c8 = 0;
    local_e8 = 0;
    local_b0 = 0;
    local_f0 = 0;
    local_c0 = 0;
    local_f8 = 0;
    local_b8 = 0;
    local_88 = 0;
    uVar19 = 1;
    do {
      plVar24 = local_70;
      auVar16._8_4_ = local_44;
      auVar16._0_8_ = local_4c;
      auVar38._8_4_ = local_44;
      auVar38._0_8_ = local_4c;
      auVar15._8_4_ = local_50;
      auVar15._0_8_ = local_58;
      bVar31 = false;
      do {
        if ((int)uVar19 == 0) {
          if (bVar31) {
            local_78 = 0;
          }
          if ((local_100 < 0) ||
             (_local_58 = auVar15, auVar38 = auVar16, local_100 == 0 && local_c8 == 0))
          goto LAB_0010780e;
          local_64[2] = 0.0;
          local_64[0] = 0.0;
          local_64[1] = 0.0;
          if (local_f8 < 0) {
            lVar22 = ((ulong)(local_b8 == 0) - local_f8) + -1;
            if (lVar22 < 0) {
              fVar32 = (float)Int128::to_scalar();
            }
            else {
              if ((long)local_b8 < 1) {
                fVar32 = (float)(long)-local_b8;
              }
              else {
                fVar32 = (float)-local_b8;
              }
              fVar32 = (float)((uint)((float)lVar22 * __LC8 + fVar32) ^ _LC9);
            }
          }
          else {
            fVar32 = (float)local_f8 * __LC8 + (float)local_b8;
          }
          local_64[*(int *)(this + 0x168)] = fVar32;
          if (local_f0 < 0) {
            lVar22 = ((ulong)(local_c0 == 0) - local_f0) + -1;
            if (lVar22 < 0) {
              fVar32 = (float)Int128::to_scalar();
            }
            else {
              if ((long)local_c0 < 1) {
                fVar32 = (float)(long)-local_c0;
              }
              else {
                fVar32 = (float)-local_c0;
              }
              fVar32 = (float)((uint)((float)lVar22 * __LC8 + fVar32) ^ _LC9);
            }
          }
          else {
            fVar32 = (float)local_f0 * __LC8 + (float)local_c0;
          }
          local_64[*(int *)(this + 0x16c)] = fVar32;
          if (local_e8 < 0) {
            lVar22 = ((ulong)(local_b0 == 0) - local_e8) + -1;
            if (lVar22 < 0) {
              fVar32 = (float)Int128::to_scalar();
            }
            else {
              if ((long)local_b0 < 1) {
                fVar32 = (float)(long)-local_b0;
              }
              else {
                fVar32 = (float)-local_b0;
              }
              fVar32 = (float)((uint)((float)lVar22 * __LC8 + fVar32) ^ _LC9);
            }
          }
          else {
            fVar32 = (float)local_e8 * __LC8 + (float)local_b0;
          }
          fVar3 = *(float *)this;
          fVar4 = *(float *)(this + 4);
          local_64[*(int *)(this + 0x164)] = fVar32;
          auVar38._8_4_ = local_44;
          auVar38._0_8_ = local_4c;
          fVar32 = *(float *)(this + 8);
          if (0.0 < param_2) {
            if ((int)uVar18 < 1) goto LAB_0010780e;
            fVar33 = ((float)local_100 * __LC8 + (float)local_c8) * __LC68;
            uVar19 = 1;
            fVar37 = local_64[0] / fVar33;
            fVar35 = local_64[1] / fVar33;
            fVar33 = local_64[2] / fVar33;
            fVar36 = _LC64;
            while( true ) {
              pFVar20 = (Face *)local_98[uVar19 - 1];
              _local_4c = auVar38;
              auVar38 = get_gd_normal(this,pFVar20);
              _local_58 = auVar38;
              auVar38 = to_gd_vector(this,(Point32 *)(pFVar20 + 0x18));
              local_4c._0_4_ = auVar38._0_4_;
              local_4c._4_4_ = auVar38._4_4_;
              fVar34 = ((float)local_4c._0_4_ - fVar37 * fVar3) * (float)local_58._0_4_ +
                       ((float)local_4c._4_4_ - fVar35 * fVar4) * (float)local_58._4_4_ +
                       (auVar38._8_4_ - fVar33 * fVar32) * local_50;
              if (fVar36 <= fVar34) {
                fVar34 = fVar36;
              }
              fVar36 = fVar34;
              if (uVar19 == uVar18) break;
              uVar19 = uVar19 + 1;
            }
            if (fVar36 <= 0.0) {
LAB_00107813:
              _local_4c = auVar38;
              Memory::free_static(local_98,false);
            }
            else {
              if (fVar36 * param_2 <= param_1) {
                param_1 = fVar36 * param_2;
              }
LAB_00108121:
              uVar21 = (ulong)uVar18;
              uVar19 = 0x3b7f7 % uVar21;
              uVar29 = 0;
              uVar23 = 0x3b7f7;
              puVar26 = local_98;
              while( true ) {
                uVar13 = *puVar26;
                uVar29 = uVar29 + 1;
                *puVar26 = local_98[uVar19];
                uVar23 = uVar23 * 0x19660d + 0x3c6ef35f;
                local_98[uVar19] = uVar13;
                if ((int)uVar18 <= (int)uVar29) break;
                puVar26 = puVar26 + 1;
                uVar19 = (ulong)uVar23 % uVar21;
                if (uVar18 <= uVar29) {
LAB_00108198:
                  _local_4c = auVar38;
                  _err_print_index_error
                            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar29,
                             uVar21,"p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
              }
              uVar29 = 0;
              puVar26 = local_98;
              _local_4c = auVar38;
              while( true ) {
                cVar17 = shift_face(this,(Face *)*puVar26,param_1,(LocalVector *)&local_78);
                plVar24 = local_70;
                auVar38 = _local_4c;
                if ((cVar17 == '\0') || (uVar29 = uVar29 + 1, (int)uVar18 <= (int)uVar29)) break;
                puVar26 = puVar26 + 1;
                if (uVar18 <= uVar29) goto LAB_00108198;
              }
LAB_0010780e:
              _local_4c = auVar38;
              if (local_98 != (undefined8 *)0x0) goto LAB_00107813;
            }
            if (plVar24 != (long *)0x0) {
              Memory::free_static(plVar24,false);
            }
            goto LAB_00107844;
          }
          if ((int)uVar18 < 1) goto LAB_0010780e;
          goto LAB_00108121;
        }
        uVar29 = (int)uVar19 - 1;
        uVar19 = (ulong)uVar29;
        lVar22 = local_70[uVar19];
        bVar31 = true;
        local_118 = *(long **)(lVar22 + 0x10);
      } while (local_118 == (long *)0x0);
      do {
        local_78 = uVar29;
        uVar29 = local_78;
        lVar12 = local_118[3];
        if (iVar1 != *(int *)(lVar12 + 0x78)) {
          *(int *)(lVar12 + 0x78) = iVar1;
          uVar19 = (ulong)local_78;
          if (local_78 == local_74) {
            uVar21 = (ulong)(local_78 * 2);
            if (local_78 * 2 == 0) {
              uVar21 = 1;
            }
            local_74 = (uint)uVar21;
            local_70 = (long *)Memory::realloc_static(local_70,uVar21 * 8,false);
            if (local_70 == (long *)0x0) goto LAB_00108030;
          }
          local_78 = uVar29 + 1;
          local_70[uVar19] = lVar12;
        }
        if (iVar1 != (int)local_118[5]) {
          pFVar20 = PagedAllocator<ConvexHullInternal::Face,false,4096u>::alloc<>
                              ((PagedAllocator<ConvexHullInternal::Face,false,4096u> *)(this + 0xe8)
                              );
          lVar12 = *(long *)(*(long *)(local_118[2] + 8) + 0x18);
          lVar27 = local_118[3];
          uVar13 = *(undefined8 *)(lVar27 + 0x68);
          uVar5 = *(undefined8 *)(lVar27 + 0x70);
          *(long *)(pFVar20 + 8) = lVar27;
          *(undefined8 *)(pFVar20 + 0x18) = uVar13;
          *(undefined8 *)(pFVar20 + 0x20) = uVar5;
          uVar13 = *(undefined8 *)(lVar12 + 0x68);
          uVar5 = *(undefined8 *)(lVar27 + 0x68);
          iVar28 = *(int *)(lVar12 + 0x70);
          iVar9 = *(int *)(lVar27 + 0x70);
          *(undefined4 *)(pFVar20 + 0x34) = 0xffffffff;
          *(int *)(pFVar20 + 0x30) = iVar28 - iVar9;
          *(ulong *)(pFVar20 + 0x28) =
               CONCAT44((int)((ulong)uVar13 >> 0x20) - (int)((ulong)uVar5 >> 0x20),
                        (int)uVar13 - (int)uVar5);
          iVar28 = *(int *)(lVar22 + 0x6c);
          iVar9 = *(int *)(lVar22 + 0x68);
          iVar10 = *(int *)(lVar27 + 0x6c);
          iVar11 = *(int *)(lVar27 + 0x68);
          *(int *)(pFVar20 + 0x40) = *(int *)(lVar22 + 0x70) - *(int *)(lVar27 + 0x70);
          lVar12 = *(long *)(lVar27 + 0x20);
          *(int *)(pFVar20 + 0x38) = iVar9 - iVar11;
          *(int *)(pFVar20 + 0x3c) = iVar28 - iVar10;
          *(undefined4 *)(pFVar20 + 0x44) = 0xffffffff;
          if (lVar12 == 0) {
            *(Face **)(lVar27 + 0x18) = pFVar20;
          }
          else {
            *(Face **)(lVar12 + 0x10) = pFVar20;
          }
          *(Face **)(lVar27 + 0x20) = pFVar20;
          if (local_88 == uVar18) {
            uVar29 = local_88 << 1;
            local_88 = 1;
            if (uVar29 != 0) {
              local_88 = uVar29;
            }
            local_98 = (undefined8 *)Memory::realloc_static(local_98,(ulong)local_88 << 3,false);
            if (local_98 == (undefined8 *)0x0) goto LAB_00108030;
          }
          uVar19 = (ulong)uVar18;
          uVar18 = uVar18 + 1;
          local_98[uVar19] = pFVar20;
          lVar12 = 0;
          lVar27 = 0;
          plVar24 = local_118;
          do {
            lVar25 = lVar12;
            if ((lVar27 != 0) && (lVar25 != 0)) {
              local_d4 = *(int *)(lVar25 + 0x6c);
              iVar28 = *(int *)(lVar27 + 0x6c);
              local_d0 = *(int *)(lVar25 + 0x68);
              local_104 = *(int *)(lVar22 + 0x68);
              local_108 = *(int *)(lVar22 + 0x70);
              local_10c = *(int *)(lVar22 + 0x6c);
              local_a0 = *(int *)(lVar27 + 0x68);
              local_cc = *(int *)(lVar27 + 0x70);
              local_d8 = *(int *)(lVar25 + 0x70);
              uVar19 = (long)(local_104 - iVar6) *
                       ((long)(iVar28 - iVar7) * (long)(local_d8 - iVar8) -
                       (long)(local_d4 - iVar7) * (long)(local_cc - iVar8)) +
                       ((long)(local_cc - iVar8) * (long)(local_d0 - iVar6) -
                       (long)(local_d8 - iVar8) * (long)(local_a0 - iVar6)) *
                       (long)(local_10c - iVar7) +
                       ((long)(local_a0 - iVar6) * (long)(local_d4 - iVar7) -
                       (long)(local_d0 - iVar6) * (long)(iVar28 - iVar7)) *
                       (long)(local_108 - iVar8);
              if ((long)uVar19 < 0) {
                _err_print_error("shrink","core/math/convex_hull.cpp",0x6ae,
                                 "Assertion \"vol >= 0\" failed.",0);
                local_d0 = *(int *)(lVar25 + 0x68);
                local_d8 = *(int *)(lVar25 + 0x70);
                local_104 = *(int *)(lVar22 + 0x68);
                local_a0 = *(int *)(lVar27 + 0x68);
                local_d4 = *(int *)(lVar25 + 0x6c);
                local_10c = *(int *)(lVar22 + 0x6c);
                local_108 = *(int *)(lVar22 + 0x70);
                iVar28 = *(int *)(lVar27 + 0x6c);
                local_cc = *(int *)(lVar27 + 0x70);
              }
              uVar21 = (long)(local_a0 + local_104 + local_d0 + iVar6) * uVar19;
              bVar31 = CARRY8(local_b8,uVar21);
              local_b8 = local_b8 + uVar21;
              uVar30 = (long)(iVar28 + local_10c + local_d4 + iVar7) * uVar19;
              local_f8 = ((local_f8 + 1) - (ulong)!bVar31) + ((long)uVar21 >> 0x3f);
              bVar31 = CARRY8(local_c0,uVar30);
              local_c0 = local_c0 + uVar30;
              uVar21 = (long)(local_108 + local_cc + local_d8 + iVar8) * uVar19;
              local_f0 = ((local_f0 + 1) - (ulong)!bVar31) + ((long)uVar30 >> 0x3f);
              bVar31 = CARRY8(uVar21,local_b0);
              local_b0 = uVar21 + local_b0;
              local_e8 = ((local_e8 + 1) - (ulong)!bVar31) + ((long)uVar21 >> 0x3f);
              bVar31 = CARRY8(local_c8,uVar19);
              local_c8 = local_c8 + uVar19;
              local_100 = ((local_100 + 1) - (ulong)!bVar31) + ((long)uVar19 >> 0x3f);
            }
            if (iVar1 == (int)plVar24[5]) {
              _err_print_error("shrink","core/math/convex_hull.cpp",0x6b6,
                               "Assertion \"f->copy != stamp\" failed.",0);
            }
            plVar2 = plVar24 + 3;
            *(int *)(plVar24 + 5) = iVar1;
            plVar24[4] = (long)pFVar20;
            plVar24 = *(long **)(plVar24[2] + 8);
            lVar12 = *plVar2;
            lVar27 = lVar25;
          } while (local_118 != plVar24);
        }
        local_118 = (long *)*local_118;
        uVar29 = local_78;
      } while ((long *)*(long *)(lVar22 + 0x10) != local_118);
      uVar19 = (ulong)local_78;
    } while( true );
  }
LAB_00108030:
  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar14 = (code *)invalidInstructionException();
  (*pcVar14)();
}



/* ConvexHullComputer::compute(Vector3 const*, int, float, float) [clone .part.0] */

float __thiscall
ConvexHullComputer::compute
          (ConvexHullComputer *this,Vector3 *param_1,int param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  Vertex *pVVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  long *plVar9;
  ulong uVar10;
  void *pvVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  float local_1fc;
  ulong local_1f8;
  void *local_1f0;
  undefined8 local_1e0;
  float local_1d8;
  undefined8 local_1d4;
  float local_1cc;
  ConvexHullInternal local_1c8 [376];
  Vertex *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar22 = param_4;
  ConvexHullInternal::ConvexHullInternal(local_1c8);
  ConvexHullInternal::compute(local_1c8,param_1,param_2);
  if (param_3 <= 0.0) {
    local_1fc = 0.0;
  }
  else {
    local_1fc = (float)ConvexHullInternal::shrink(local_1c8,param_3,param_4);
    fVar22 = param_4;
    if (local_1fc < 0.0) goto LAB_00108505;
  }
  local_1f8 = 0;
  local_1f0 = (void *)0x0;
  if (*(int *)(local_50 + 0x78) < 0) {
    get_vertex_copy(local_50,(LocalVector *)&local_1f8);
    uVar13 = local_1f8 & 0xffffffff;
    pvVar8 = local_1f0;
    if (0 < (int)(uint)local_1f8) {
      uVar18 = 0;
      uVar10 = uVar18;
      if ((uint)local_1f8 != 0) {
        do {
          pVVar2 = *(Vertex **)((long)local_1f0 + uVar18 * 8);
          local_1e0 = ConvexHullInternal::get_coordinates(local_1c8,pVVar2);
          uVar17 = *(uint *)this;
          pvVar8 = *(void **)(this + 8);
          local_1d8 = fVar22;
          local_1d4 = local_1e0;
          local_1cc = fVar22;
          if (uVar17 == *(uint *)(this + 4)) {
            uVar13 = (ulong)(uVar17 * 2);
            if (uVar17 * 2 == 0) {
              uVar13 = 1;
            }
            *(int *)(this + 4) = (int)uVar13;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar13 * 0xc,false);
            *(void **)(this + 8) = pvVar8;
            if (pvVar8 == (void *)0x0) {
LAB_001088e2:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar17 = *(uint *)this;
          }
          plVar3 = *(long **)(pVVar2 + 0x10);
          *(uint *)this = uVar17 + 1;
          puVar1 = (undefined8 *)((long)pvVar8 + (ulong)uVar17 * 0xc);
          *puVar1 = local_1e0;
          *(float *)(puVar1 + 1) = local_1d8;
          if (plVar3 != (long *)0x0) {
            uVar17 = *(uint *)(this + 0x10);
            plVar14 = plVar3;
            uVar19 = 0xffffffff;
            uVar16 = 0xffffffff;
            do {
              uVar12 = *(uint *)(plVar14 + 5);
              if ((int)uVar12 < 0) {
                uVar12 = *(uint *)(this + 0x14);
                pvVar8 = *(void **)(this + 0x18);
                uVar15 = uVar17;
                if (uVar12 == uVar17) {
                  uVar13 = (ulong)(uVar17 * 2);
                  if (uVar17 * 2 == 0) {
                    uVar13 = 1;
                  }
                  *(int *)(this + 0x14) = (int)uVar13;
                  pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar13 * 0xc,false);
                  *(void **)(this + 0x18) = pvVar8;
                  if (pvVar8 == (void *)0x0) goto LAB_001088e2;
                  uVar15 = *(uint *)(this + 0x10);
                  uVar12 = *(uint *)(this + 0x14);
                }
                uVar6 = uVar15 + 1;
                puVar1 = (undefined8 *)((long)pvVar8 + (ulong)uVar15 * 0xc);
                *(uint *)(this + 0x10) = uVar6;
                *puVar1 = 0;
                *(undefined4 *)(puVar1 + 1) = 0;
                if (uVar6 == uVar12) {
                  uVar13 = (ulong)(uVar12 * 2);
                  if (uVar12 * 2 == 0) {
                    uVar13 = 1;
                  }
                  *(int *)(this + 0x14) = (int)uVar13;
                  pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar13 * 0xc,false);
                  *(void **)(this + 0x18) = pvVar8;
                  if (pvVar8 == (void *)0x0) goto LAB_001088e2;
                  uVar6 = *(uint *)(this + 0x10);
                }
                uVar15 = uVar6 + 1;
                puVar1 = (undefined8 *)((long)pvVar8 + (ulong)uVar6 * 0xc);
                *(uint *)(this + 0x10) = uVar15;
                *puVar1 = 0;
                *(undefined4 *)(puVar1 + 1) = 0;
                if (uVar17 < uVar15) {
                  uVar12 = uVar17 + 1;
                  uVar10 = (ulong)uVar12;
                  if (uVar12 < uVar15) {
                    *(uint *)(plVar14 + 5) = uVar17;
                    *(uint *)(plVar14[2] + 0x28) = uVar12;
                    pVVar2 = (Vertex *)plVar14[3];
                    *(undefined4 *)((long)pvVar8 + (ulong)uVar17 * 0xc + 4) = 1;
                    iVar7 = *(int *)(pVVar2 + 0x78);
                    *(undefined4 *)((long)pvVar8 + uVar10 * 0xc + 4) = 0xffffffff;
                    if (iVar7 < 0) {
                      iVar7 = get_vertex_copy(pVVar2,(LocalVector *)&local_1f8);
                      uVar15 = *(uint *)(this + 0x10);
                    }
                    *(int *)((long)pvVar8 + (ulong)uVar17 * 0xc + 8) = iVar7;
                    *(int *)((long)pvVar8 + uVar10 * 0xc + 8) = (int)uVar18;
                    uVar12 = *(uint *)(plVar14 + 5);
                    uVar17 = uVar15;
                    goto joined_r0x0010874d;
                  }
                }
                else {
                  uVar10 = (ulong)uVar17;
                }
                uVar13 = (ulong)uVar15;
                goto LAB_00108791;
              }
joined_r0x0010874d:
              uVar10 = (ulong)uVar12;
              uVar15 = uVar12;
              if (-1 < (int)uVar19) {
                if (uVar17 <= uVar12) goto LAB_001087c0;
                *(uint *)(*(long *)(this + 0x18) + uVar10 * 0xc) = uVar19 - uVar12;
                uVar15 = uVar16;
              }
              plVar14 = (long *)*plVar14;
              uVar19 = uVar12;
              uVar16 = uVar15;
            } while (plVar3 != plVar14);
            if (uVar17 <= uVar15) {
              uVar10 = (ulong)uVar15;
LAB_001087c0:
              uVar13 = (ulong)uVar17;
              break;
            }
            *(uint *)(*(long *)(this + 0x18) + (ulong)uVar15 * 0xc) = uVar12 - uVar15;
          }
          pvVar8 = local_1f0;
          uVar13 = local_1f8 & 0xffffffff;
          uVar18 = uVar18 + 1;
          if ((int)(uint)local_1f8 <= (int)(uint)uVar18) {
            if ((uint)local_1f8 != 0) {
              uVar20 = 1;
              goto LAB_00108951;
            }
            uVar13 = 0;
            uVar10 = uVar13;
            break;
          }
          uVar10 = uVar18;
        } while ((uint)uVar18 < (uint)local_1f8);
      }
      goto LAB_00108791;
    }
LAB_00108a33:
    if (pvVar8 != (void *)0x0) {
      Memory::free_static(pvVar8,false);
    }
  }
LAB_00108505:
  ConvexHullInternal::~ConvexHullInternal(local_1c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1fc;
  while (bVar21 = uVar20 != uVar13, uVar10 = uVar13, uVar20 = uVar20 + 1, bVar21) {
LAB_00108951:
    plVar3 = *(long **)(*(long *)((long)pvVar8 + uVar20 * 8 + -8) + 0x10);
    plVar14 = plVar3;
    if (plVar3 != (long *)0x0) {
      do {
        lVar5 = plVar14[5];
        if (-1 < (int)lVar5) {
          uVar17 = *(uint *)(this + 0x20);
          pvVar11 = *(void **)(this + 0x28);
          if (uVar17 == *(uint *)(this + 0x24)) {
            uVar10 = (ulong)(uVar17 * 2);
            if (uVar17 * 2 == 0) {
              uVar10 = 1;
            }
            *(int *)(this + 0x24) = (int)uVar10;
            pvVar11 = (void *)Memory::realloc_static(pvVar11,uVar10 * 4,false);
            *(void **)(this + 0x28) = pvVar11;
            if (pvVar11 == (void *)0x0) goto LAB_001088e2;
            uVar17 = *(uint *)(this + 0x20);
          }
          *(uint *)(this + 0x20) = uVar17 + 1;
          *(int *)((long)pvVar11 + (ulong)uVar17 * 4) = (int)lVar5;
          plVar9 = plVar14;
          do {
            *(undefined4 *)(plVar9 + 5) = 0xffffffff;
            plVar9 = *(long **)(plVar9[2] + 8);
          } while (plVar14 != plVar9);
        }
        plVar14 = (long *)*plVar14;
      } while (plVar3 != plVar14);
    }
    if (uVar20 == uVar18) goto LAB_00108a33;
  }
LAB_00108791:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,uVar13,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* ConvexHullComputer::compute(Vector3 const*, int, float, float) */

undefined8 __thiscall
ConvexHullComputer::compute
          (ConvexHullComputer *this,Vector3 *param_1,int param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  
  if (*(int *)this != 0) {
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (0 < param_2) {
    uVar1 = compute(this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



/* ConvexHullComputer::convex_hull(Vector<Vector3> const&, Geometry3D::MeshData&) */

undefined8 ConvexHullComputer::convex_hull(Vector *param_1,MeshData *param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  Vector3 *pVVar9;
  code *pcVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined8 uVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int iVar24;
  int *piVar25;
  float *pfVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_a4;
  ulong local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  uint local_80;
  undefined4 local_7c;
  ulong local_78;
  long local_70;
  ulong local_68;
  long local_60;
  ulong local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
            ((LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *)param_2,0);
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(param_2 + 8),false);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*(void **)(param_2 + 0x18) != (void *)0x0) {
    Memory::free_static(*(void **)(param_2 + 0x18),false);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (*(int *)(param_2 + 0x20) != 0) {
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    Memory::free_static(*(void **)(param_2 + 0x28),false);
  }
  pVVar9 = *(Vector3 **)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (pVVar9 == (Vector3 *)0x0) {
    uVar17 = 1;
    goto LAB_00108b6e;
  }
  uVar17 = 1;
  if (*(long *)(pVVar9 + -8) == 0) goto LAB_00108b6e;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  compute((ConvexHullComputer *)&local_78,pVVar9,(int)*(long *)(pVVar9 + -8),_LC70,_LC70);
  uVar12 = (uint)local_78;
  uVar27 = local_78 & 0xffffffff;
  uVar15 = *(uint *)(param_2 + 0x20);
  if ((uint)local_78 < uVar15) {
    *(uint *)(param_2 + 0x20) = (uint)local_78;
LAB_00108c0c:
    if ((uint)local_78 != 0) goto LAB_00108c10;
  }
  else {
    if ((uint)local_78 <= uVar15) goto LAB_00108c0c;
    uVar13 = (uint)local_78 - 1;
    if (*(uint *)(param_2 + 0x24) < (uint)local_78) {
      uVar15 = uVar13 >> 1 | uVar13;
      uVar15 = uVar15 >> 2 | uVar15;
      uVar15 = uVar15 >> 4 | uVar15;
      uVar15 = uVar15 >> 8 | uVar15;
      uVar15 = (uVar15 >> 0x10 | uVar15) + 1;
      *(uint *)(param_2 + 0x24) = uVar15;
      lVar20 = Memory::realloc_static(*(void **)(param_2 + 0x28),(ulong)uVar15 * 0xc,false);
      *(long *)(param_2 + 0x28) = lVar20;
      if (lVar20 == 0) goto LAB_001090cb;
      uVar15 = *(uint *)(param_2 + 0x20);
      if (uVar15 < uVar12) goto LAB_00108cf5;
    }
    else {
LAB_00108cf5:
      memset((void *)(*(long *)(param_2 + 0x28) + (ulong)uVar15 * 0xc),0,
             ((ulong)(uVar13 - uVar15) * 3 + 3) * 4);
    }
    *(uint *)(param_2 + 0x20) = uVar12;
LAB_00108c10:
    lVar20 = *(long *)(param_2 + 0x28);
    lVar18 = 0;
    do {
      *(undefined8 *)(lVar20 + lVar18) = *(undefined8 *)(local_70 + lVar18);
      *(undefined4 *)(lVar20 + 8 + lVar18) = *(undefined4 *)(local_70 + 8 + lVar18);
      lVar18 = lVar18 + 0xc;
    } while (uVar27 * 0xc != lVar18);
  }
  uVar27 = local_68;
  uVar15 = (uint)local_68;
  pvVar19 = (void *)0x0;
  if ((uint)local_68 != 0) {
    uVar12 = (uint)local_68 - 1 >> 1 | (uint)local_68 - 1;
    uVar12 = uVar12 | uVar12 >> 2;
    uVar12 = uVar12 >> 4 | uVar12;
    uVar12 = uVar12 >> 8 | uVar12;
    pvVar19 = (void *)Memory::realloc_static
                                ((void *)0x0,(ulong)((uVar12 | uVar12 >> 0x10) + 1) << 2,false);
    if (pvVar19 == (void *)0x0) goto LAB_001090cb;
    uVar22 = 0;
    do {
      uVar31 = uVar22;
      if (uVar22 == (uVar27 & 0xffffffff)) goto LAB_00108dc4;
      *(undefined4 *)((long)pvVar19 + uVar22 * 4) = 0xffffffff;
      uVar22 = uVar22 + 1;
    } while ((uVar27 & 0xffffffff) != uVar22);
  }
  uVar11 = local_58;
  uVar12 = (uint)local_58;
  if ((uint)local_58 != 0) {
    uVar22 = 0;
    do {
      uVar13 = *(uint *)(local_50 + uVar22 * 4);
      if (uVar15 <= uVar13) {
        uVar31 = (ulong)uVar13;
LAB_00108da6:
        uVar22 = uVar27 & 0xffffffff;
        goto LAB_00108dc4;
      }
      piVar1 = (int *)(local_60 + (ulong)uVar13 * 0xc);
      piVar25 = piVar1;
      do {
        uVar13 = (int)((long)piVar25 - local_60 >> 2) * -0x55555555;
        uVar31 = (ulong)uVar13;
        if (uVar15 <= uVar13) goto LAB_00108da6;
        *(int *)((long)pvVar19 + uVar31 * 4) = (int)uVar22;
        piVar25 = piVar25 + (long)piVar25[1] * 3 + (long)piVar25[(long)piVar25[1] * 3] * 3;
      } while (piVar1 != piVar25);
      uVar22 = uVar22 + 1;
    } while (uVar22 != (local_58 & 0xffffffff));
  }
  uVar13 = uVar15 >> 1;
  if (uVar13 < *(uint *)(param_2 + 0x10)) {
LAB_00108e2a:
    *(uint *)(param_2 + 0x10) = uVar13;
  }
  else if (*(uint *)(param_2 + 0x10) < uVar13) {
    if (*(uint *)(param_2 + 0x14) < uVar13) {
      uVar14 = uVar13 - 1 >> 1 | uVar13 - 1;
      uVar14 = uVar14 | uVar14 >> 2;
      uVar14 = uVar14 >> 4 | uVar14;
      uVar14 = uVar14 >> 8 | uVar14;
      uVar14 = (uVar14 | uVar14 >> 0x10) + 1;
      *(uint *)(param_2 + 0x14) = uVar14;
      lVar20 = Memory::realloc_static(*(void **)(param_2 + 0x18),(ulong)uVar14 << 4,false);
      *(long *)(param_2 + 0x18) = lVar20;
      if (lVar20 == 0) {
LAB_001090cb:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
    }
    goto LAB_00108e2a;
  }
  local_80 = uVar15 * 4;
  local_7c = 0;
  if (local_80 == 0) {
    local_80 = 1;
  }
  uVar22 = (ulong)local_80 << 2;
  local_90 = (void *)Memory::alloc_static((ulong)local_80 * 8,false);
  local_98 = (void *)Memory::alloc_static(uVar22,false);
  local_88 = (void *)Memory::alloc_static(uVar22,false);
  memset(local_88,0,uVar22);
  if (uVar15 == 0) {
    uVar13 = 0;
  }
  else {
    uVar31 = 0;
    if ((uVar27 & 0xffffffff) == 0) {
      uVar22 = 0;
      uVar31 = 0;
LAB_00108dc4:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar31,uVar22,"p_index","count"
                 ,"",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar13 = 0;
    do {
      iVar24 = *(int *)((long)pvVar19 + uVar31 * 4);
      if (iVar24 == -1) {
        _err_print_error("convex_hull","core/math/convex_hull.cpp",0x8e2,
                         "Condition \"edge_faces[i] == -1\" is true. Continuing.",0);
      }
      else {
        lVar20 = local_60 + uVar31 * 0xc;
        uVar14 = *(uint *)(lVar20 + 8 + (long)*(int *)(lVar20 + 4) * 0xc);
        uVar8 = *(uint *)(lVar20 + 8);
        if (uVar14 < uVar8) {
          if (*(uint *)(param_2 + 0x10) <= uVar13) {
            _err_print_error("convex_hull","core/math/convex_hull.cpp",0x8e7,
                             "Condition \"edges_copied >= (uint32_t)r_mesh.edges.size()\" is true. Breaking."
                             ,0,0);
            break;
          }
          puVar23 = (undefined8 *)((ulong)uVar13 * 0x10 + *(long *)(param_2 + 0x18));
          *puVar23 = CONCAT44(uVar8,uVar14);
          uVar7 = *(undefined4 *)((long)pvVar19 + uVar31 * 4);
          local_a0 = CONCAT44(uVar14,uVar8);
          *(undefined4 *)((long)puVar23 + 0xc) = 0xffffffff;
          *(undefined4 *)(puVar23 + 1) = uVar7;
          local_a4 = uVar13;
          OAHashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
          ::insert((OAHashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                    *)&local_98,&local_a0,(int *)&local_a4);
          uVar13 = uVar13 + 1;
        }
        else {
          uVar22 = CONCAT44(uVar8,uVar14) * 0x3ffff - 1;
          uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
          uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
          uVar22 = uVar22 >> 0x16 ^ uVar22;
          uVar30 = uVar22 & 0xffffffff;
          if ((int)uVar22 == 0) {
            uVar30 = 1;
          }
          uVar22 = uVar30 % (ulong)local_80;
          uVar28 = *(uint *)((long)local_88 + uVar22 * 4);
          if (uVar28 != 0) {
            uVar29 = 0;
            do {
              if ((uVar28 == (uint)uVar30) &&
                 (CONCAT44(uVar8,uVar14) == *(long *)((long)local_90 + uVar22 * 8))) {
                uVar14 = *(uint *)((long)local_98 + uVar22 * 4);
                uVar22 = (ulong)*(uint *)(param_2 + 0x10);
                if (uVar14 < *(uint *)(param_2 + 0x10)) {
                  *(int *)((ulong)uVar14 * 0x10 + *(long *)(param_2 + 0x18) + 0xc) = iVar24;
                  goto LAB_00108f36;
                }
                uVar31 = (ulong)uVar14;
                goto LAB_00108dc4;
              }
              uVar29 = uVar29 + 1;
              uVar22 = (ulong)((int)uVar22 + 1) % (ulong)local_80;
              uVar28 = *(uint *)((long)local_88 + uVar22 * 4);
            } while ((uVar28 != 0) &&
                    (uVar29 <= ((local_80 + (int)uVar22) - uVar28 % local_80) % local_80));
          }
          _err_print_error("convex_hull","core/math/convex_hull.cpp",0x8f9,"Invalid edge",0);
        }
      }
LAB_00108f36:
      uVar31 = uVar31 + 1;
    } while ((uVar27 & 0xffffffff) != uVar31);
  }
  if (*(uint *)(param_2 + 0x10) != uVar13) {
    _err_print_error("convex_hull","core/math/convex_hull.cpp",0x901,"Invalid edge count.",0,0);
  }
  LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
            ((LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *)param_2,uVar12);
  lVar20 = local_50;
  if (uVar12 != 0) {
    uVar30 = 0;
    do {
      uVar12 = *(uint *)(lVar20 + uVar30 * 4);
      if (uVar15 <= uVar12) {
        uVar22 = uVar27 & 0xffffffff;
        uVar31 = (ulong)uVar12;
        goto LAB_00108dc4;
      }
      uVar22 = (ulong)*(uint *)param_2;
      piVar1 = (int *)(local_60 + (ulong)uVar12 * 0xc);
      uVar31 = uVar30;
      if (*(uint *)param_2 <= (uint)uVar30) goto LAB_00108dc4;
      pfVar26 = (float *)(uVar30 * 0x20 + *(long *)(param_2 + 8));
      puVar21 = *(uint **)(pfVar26 + 6);
      piVar25 = piVar1;
      do {
        uVar12 = piVar25[2];
        fVar16 = pfVar26[4];
        if (fVar16 == pfVar26[5]) {
          uVar22 = (ulong)(uint)((int)fVar16 * 2);
          if ((int)fVar16 * 2 == 0) {
            uVar22 = 1;
          }
          pfVar26[5] = (float)uVar22;
          puVar21 = (uint *)Memory::realloc_static(puVar21,uVar22 * 4,false);
          *(uint **)(pfVar26 + 6) = puVar21;
          if (puVar21 == (uint *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          fVar16 = pfVar26[4];
        }
        pfVar26[4] = (float)((int)fVar16 + 1);
        puVar21[(uint)fVar16] = uVar12;
        piVar25 = piVar25 + (long)piVar25[1] * 3 + (long)piVar25[(long)piVar25[1] * 3] * 3;
      } while (piVar1 != piVar25);
      fVar16 = pfVar26[4];
      if ((uint)fVar16 < 3) {
LAB_00109341:
        _err_print_error("convex_hull","core/math/convex_hull.cpp",0x91d,
                         "Too few vertices per face.",0);
      }
      else {
        lVar18 = 0;
        do {
          iVar24 = (int)lVar18;
          uVar12 = puVar21[lVar18 + 1];
          puVar21[lVar18 + 1] = puVar21[((int)fVar16 - iVar24) - 1];
          lVar18 = lVar18 + 1;
          puVar21[((int)fVar16 - iVar24) - 1] = uVar12;
          fVar16 = pfVar26[4];
        } while ((uint)lVar18 < (int)fVar16 - 1U >> 1);
        if ((uint)fVar16 < 3) goto LAB_00109341;
        uVar12 = puVar21[2];
        uVar13 = *(uint *)(param_2 + 0x20);
        uVar22 = (ulong)uVar13;
        uVar31 = (ulong)uVar12;
        if (uVar13 <= uVar12) goto LAB_00108dc4;
        lVar18 = *(long *)(param_2 + 0x28);
        uVar31 = (ulong)puVar21[1];
        pfVar2 = (float *)(lVar18 + (ulong)uVar12 * 0xc);
        if (uVar13 <= puVar21[1]) goto LAB_00108dc4;
        uVar12 = *puVar21;
        pfVar3 = (float *)(lVar18 + uVar31 * 0xc);
        if (uVar13 <= uVar12) {
          uVar31 = (ulong)uVar12;
          goto LAB_00108dc4;
        }
        pfVar4 = (float *)(lVar18 + (ulong)uVar12 * 0xc);
        fVar16 = pfVar4[1];
        fVar5 = pfVar4[2];
        fVar6 = *pfVar4;
        fVar34 = (fVar6 - *pfVar3) * (fVar5 - pfVar2[2]) - (fVar6 - *pfVar2) * (fVar5 - pfVar3[2]);
        fVar35 = (fVar6 - *pfVar2) * (fVar16 - pfVar3[1]) - (fVar16 - pfVar2[1]) * (fVar6 - *pfVar3)
        ;
        fVar33 = (fVar16 - pfVar2[1]) * (fVar5 - pfVar3[2]) -
                 (fVar5 - pfVar2[2]) * (fVar16 - pfVar3[1]);
        fVar32 = fVar33 * fVar33 + fVar34 * fVar34 + fVar35 * fVar35;
        if (fVar32 == 0.0) {
          fVar35 = 0.0;
          fVar33 = 0.0;
          fVar34 = fVar33;
        }
        else {
          fVar32 = sqrtf(fVar32);
          fVar35 = fVar35 / fVar32;
          fVar33 = fVar33 / fVar32;
          fVar34 = fVar34 / fVar32;
        }
        *pfVar26 = fVar33;
        pfVar26[1] = fVar34;
        pfVar26[2] = fVar35;
        pfVar26[3] = fVar6 * fVar33 + fVar16 * fVar34 + fVar5 * fVar35;
      }
      uVar30 = uVar30 + 1;
    } while ((uVar11 & 0xffffffff) != uVar30);
  }
  Memory::free_static(local_90,false);
  Memory::free_static(local_98,false);
  Memory::free_static(local_88,false);
  if (pvVar19 != (void *)0x0) {
    Memory::free_static(pvVar19,false);
  }
  ~ConvexHullComputer((ConvexHullComputer *)&local_78);
  uVar17 = 0;
LAB_00108b6e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<ConvexHullInternal::Point32, PointComparator, true>::adjust_heap(long, long, long,
   ConvexHullInternal::Point32, ConvexHullInternal::Point32*) const [clone .isra.0] */

void __thiscall
SortArray<ConvexHullInternal::Point32,PointComparator,true>::adjust_heap
          (SortArray<ConvexHullInternal::Point32,PointComparator,true> *this,long param_1,
          long param_2,undefined8 param_3,undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  lVar7 = param_1 * 2 + 2;
  lVar8 = param_1;
  if (lVar7 < param_2) {
    do {
      lVar9 = lVar7 + -1;
      piVar6 = (int *)((long)(this + lVar7) * 0x10 + param_6);
      piVar4 = (int *)((long)(this + lVar9) * 0x10 + param_6);
      lVar5 = lVar7;
      if ((piVar4[1] <= piVar6[1]) &&
         ((piVar6[1] != piVar4[1] ||
          ((*piVar4 <= *piVar6 && ((*piVar6 != *piVar4 || (piVar4[2] <= piVar6[2])))))))) {
        lVar5 = lVar7 + 1;
        piVar4 = piVar6;
        lVar9 = lVar7;
      }
      uVar3 = *(undefined8 *)(piVar4 + 2);
      lVar7 = lVar5 * 2;
      puVar1 = (undefined8 *)(param_6 + (long)(this + lVar8) * 0x10);
      *puVar1 = *(undefined8 *)piVar4;
      puVar1[1] = uVar3;
      lVar8 = lVar9;
    } while (lVar7 < param_2);
  }
  else {
    piVar4 = (int *)((long)(this + param_1) * 0x10 + param_6);
    lVar9 = param_1;
  }
  piVar6 = piVar4;
  if (param_2 == lVar7) {
    lVar9 = param_2 + -1;
    piVar6 = (int *)((long)(this + lVar9) * 0x10 + param_6);
    uVar3 = *(undefined8 *)(piVar6 + 2);
    *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
    *(undefined8 *)(piVar4 + 2) = uVar3;
  }
  local_18 = (int)param_3;
  iStack_14 = (int)((ulong)param_3 >> 0x20);
  iStack_10 = (int)param_5;
  iStack_c = (int)((ulong)param_5 >> 0x20);
  lVar7 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
  do {
    if (lVar9 <= param_1) {
LAB_00109e92:
      *piVar6 = local_18;
      piVar6[1] = iStack_14;
      piVar6[2] = iStack_10;
      piVar6[3] = iStack_c;
      return;
    }
    lVar8 = lVar7 >> 1;
    piVar6 = (int *)((long)(this + lVar8) * 0x10 + param_6);
    iVar2 = piVar6[1];
    if (iStack_14 == iVar2 || iStack_14 < iVar2) {
      if (iStack_14 != iVar2) {
LAB_00109e87:
        piVar6 = (int *)((long)(this + lVar9) * 0x10 + param_6);
        goto LAB_00109e92;
      }
      if (local_18 <= *piVar6) {
        if (local_18 != *piVar6) goto LAB_00109e87;
        if (iStack_10 <= piVar6[2]) {
          piVar6 = (int *)(param_6 + (long)(this + lVar9) * 0x10);
          goto LAB_00109e92;
        }
      }
    }
    uVar3 = *(undefined8 *)(piVar6 + 2);
    puVar1 = (undefined8 *)(param_6 + (long)(this + lVar9) * 0x10);
    *puVar1 = *(undefined8 *)piVar6;
    puVar1[1] = uVar3;
    lVar7 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
    lVar9 = lVar8;
  } while( true );
}



/* SortArray<ConvexHullInternal::Point32, PointComparator, true>::introsort(long, long,
   ConvexHullInternal::Point32*, long) const [clone .isra.0] */

void SortArray<ConvexHullInternal::Point32,PointComparator,true>::introsort
               (long param_1,long param_2,Point32 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  Point32 *pPVar7;
  Point32 *pPVar8;
  long lVar9;
  Point32 *pPVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  
  lVar9 = param_2 - param_1;
  if (0x10 < lVar9) {
    if (param_4 != 0) {
      pPVar8 = param_3 + param_1 * 0x10;
      lVar14 = param_2;
LAB_00109fa0:
      param_4 = param_4 + -1;
      pPVar10 = param_3 + lVar14 * 0x10 + -0x10;
      iVar13 = *(int *)(pPVar8 + 4);
      pPVar7 = param_3 + ((lVar9 >> 1) + param_1) * 0x10;
      iVar1 = *(int *)(pPVar7 + 4);
      iVar15 = iVar13;
      if ((iVar13 < iVar1) ||
         ((iVar13 == iVar1 &&
          ((*(int *)pPVar8 < *(int *)pPVar7 ||
           ((*(int *)pPVar8 == *(int *)pPVar7 && (*(int *)(pPVar8 + 8) < *(int *)(pPVar7 + 8))))))))
         ) {
        iVar12 = *(int *)(pPVar10 + 4);
        if (iVar1 < iVar12) {
LAB_0010a228:
          iVar2 = *(int *)pPVar7;
LAB_0010a22d:
          iVar15 = iVar1;
          iVar11 = *(int *)(pPVar7 + 8);
          goto LAB_00109ff7;
        }
        if (iVar1 == iVar12) {
          iVar2 = *(int *)pPVar7;
          if (iVar2 < *(int *)pPVar10) goto LAB_0010a22d;
          if ((iVar2 == *(int *)pPVar10) &&
             (iVar15 = iVar1, iVar11 = *(int *)(pPVar7 + 8),
             *(int *)(pPVar7 + 8) < *(int *)(pPVar10 + 8))) goto LAB_00109ff7;
        }
        if (iVar12 <= iVar13) {
          iVar2 = *(int *)pPVar8;
          if (iVar13 == iVar12) {
            iVar1 = *(int *)pPVar10;
            if (iVar2 < iVar1) {
              iVar15 = iVar13;
              iVar11 = *(int *)(pPVar10 + 8);
              iVar2 = iVar1;
            }
            else {
              iVar11 = *(int *)(pPVar8 + 8);
              iVar15 = iVar13;
              if ((iVar1 == iVar2) && (iVar11 < *(int *)(pPVar10 + 8))) {
                iVar11 = *(int *)(pPVar10 + 8);
              }
            }
          }
          else {
            iVar15 = iVar13;
            iVar11 = *(int *)(pPVar8 + 8);
          }
          goto LAB_00109ff7;
        }
LAB_0010a20b:
        iVar15 = iVar12;
        iVar11 = *(int *)(pPVar10 + 8);
        iVar2 = *(int *)pPVar10;
      }
      else {
        iVar12 = *(int *)(pPVar10 + 4);
        if (iVar13 < iVar12) {
          iVar11 = *(int *)(pPVar8 + 8);
          iVar2 = *(int *)pPVar8;
          goto LAB_00109ff7;
        }
        if (iVar13 == iVar12) {
          iVar13 = *(int *)pPVar10;
          iVar2 = *(int *)pPVar8;
          if (iVar2 < iVar13) {
            iVar11 = *(int *)(pPVar8 + 8);
            goto LAB_00109ff7;
          }
          if ((iVar2 == iVar13) &&
             (iVar11 = *(int *)(pPVar8 + 8), *(int *)(pPVar8 + 8) < *(int *)(pPVar10 + 8)))
          goto LAB_00109ff7;
          if (iVar12 <= iVar1) goto LAB_0010a34e;
        }
        else {
          if (iVar1 < iVar12) goto LAB_0010a20b;
          if (iVar1 != iVar12) goto LAB_0010a228;
          iVar13 = *(int *)pPVar10;
LAB_0010a34e:
          iVar2 = *(int *)pPVar7;
          if (iVar13 <= iVar2) {
            iVar11 = *(int *)(pPVar7 + 8);
            iVar15 = iVar1;
            if ((iVar2 == iVar13) && (iVar11 < *(int *)(pPVar10 + 8))) {
              iVar15 = iVar12;
              iVar11 = *(int *)(pPVar10 + 8);
            }
            goto LAB_00109ff7;
          }
        }
        iVar15 = iVar12;
        iVar11 = *(int *)(pPVar10 + 8);
        iVar2 = iVar13;
      }
LAB_00109ff7:
      param_2 = param_1;
      pPVar10 = pPVar8;
      lVar9 = lVar14;
      do {
        if ((*(int *)(pPVar10 + 4) < iVar15) ||
           ((*(int *)(pPVar10 + 4) == iVar15 &&
            ((*(int *)pPVar10 < iVar2 ||
             ((*(int *)pPVar10 == iVar2 && (*(int *)(pPVar10 + 8) < iVar11)))))))) {
          if (param_2 == lVar14 + -1) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_0010a059;
          }
        }
        else {
LAB_0010a059:
          pPVar7 = param_3 + lVar9 * 0x10 + -0x10;
          while( true ) {
            lVar9 = lVar9 + -1;
            if ((*(int *)(pPVar7 + 4) <= iVar15) &&
               ((*(int *)(pPVar7 + 4) != iVar15 ||
                ((*(int *)pPVar7 <= iVar2 &&
                 ((*(int *)pPVar7 != iVar2 || (*(int *)(pPVar7 + 8) <= iVar11))))))))
            goto joined_r0x0010a029;
            if (param_1 == lVar9) break;
            pPVar7 = pPVar7 + -0x10;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
joined_r0x0010a029:
          if (lVar9 <= param_2) goto LAB_0010a170;
          uVar3 = *(undefined8 *)(pPVar7 + 8);
          uVar4 = *(undefined8 *)pPVar10;
          uVar6 = *(undefined8 *)(pPVar10 + 8);
          *(undefined8 *)pPVar10 = *(undefined8 *)pPVar7;
          *(undefined8 *)(pPVar10 + 8) = uVar3;
          *(undefined8 *)pPVar7 = uVar4;
          *(undefined8 *)(pPVar7 + 8) = uVar6;
        }
        pPVar10 = pPVar10 + 0x10;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_0010a238:
    lVar14 = lVar9 + -2 >> 1;
    pPVar8 = param_3 + (param_1 + lVar14) * 0x10;
    while( true ) {
      uVar3 = *(undefined8 *)pPVar8;
      pPVar10 = pPVar8 + 8;
      pPVar8 = pPVar8 + -0x10;
      adjust_heap((SortArray<ConvexHullInternal::Point32,PointComparator,true> *)param_1,lVar14,
                  lVar9,uVar3,*(undefined8 *)pPVar10);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
    }
    pPVar8 = param_3 + param_2 * 0x10;
    lVar9 = (param_2 + -1) - param_1;
    do {
      uVar6 = *(undefined8 *)(param_3 + param_1 * 0x10 + 8);
      uVar3 = *(undefined8 *)(pPVar8 + -0x10);
      uVar4 = *(undefined8 *)(pPVar8 + -8);
      *(undefined8 *)(pPVar8 + -0x10) = *(undefined8 *)(param_3 + param_1 * 0x10);
      *(undefined8 *)(pPVar8 + -8) = uVar6;
      adjust_heap((SortArray<ConvexHullInternal::Point32,PointComparator,true> *)param_1,0,lVar9,
                  uVar3,uVar4);
      bVar5 = 1 < lVar9;
      pPVar8 = pPVar8 + -0x10;
      lVar9 = lVar9 + -1;
    } while (bVar5);
  }
  return;
LAB_0010a170:
  introsort(param_2,lVar14,param_3,param_4);
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  lVar14 = param_2;
  if (param_4 == 0) goto LAB_0010a238;
  goto LAB_00109fa0;
}



/* ConvexHullInternal::~ConvexHullInternal() */

void __thiscall ConvexHullInternal::~ConvexHullInternal(ConvexHullInternal *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x28) != 0) {
    lVar5 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x18) + lVar5 * 8),false);
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x20) + lVar2),false);
    } while ((uint)lVar5 < *(uint *)(this + 0x28));
    Memory::free_static(*(void **)(this + 0x18),false);
    Memory::free_static(*(void **)(this + 0x20),false);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  }
  if (*(int *)(this + 0x90) != 0) {
    lVar5 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x80) + lVar5 * 8),false);
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x88) + lVar2),false);
    } while ((uint)lVar5 < *(uint *)(this + 0x90));
    Memory::free_static(*(void **)(this + 0x80),false);
    Memory::free_static(*(void **)(this + 0x88),false);
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  }
  if (*(int *)(this + 0xf8) != 0) {
    lVar5 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0xe8) + lVar5 * 8),false);
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0xf0) + lVar2),false);
    } while ((uint)lVar5 < *(uint *)(this + 0xf8));
    Memory::free_static(*(void **)(this + 0xe8),false);
    Memory::free_static(*(void **)(this + 0xf0),false);
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  }
  if (*(void **)(this + 0x158) != (void *)0x0) {
    if (*(int *)(this + 0x150) != 0) {
      *(undefined4 *)(this + 0x150) = 0;
    }
    Memory::free_static(*(void **)(this + 0x158),false);
  }
  if (*(uint *)(this + 0xfc) < (uint)(*(int *)(this + 0x108) * *(int *)(this + 0xf8))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_40 = 0x1b;
      local_48 = "N18ConvexHullInternal4FaceE";
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar5 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0xf8) != 0) {
    lVar5 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0xe8) + lVar5 * 8),false);
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0xf0) + lVar2),false);
    } while ((uint)lVar5 < *(uint *)(this + 0xf8));
    Memory::free_static(*(void **)(this + 0xe8),false);
    Memory::free_static(*(void **)(this + 0xf0),false);
  }
  if (*(uint *)(this + 0x94) < (uint)(*(int *)(this + 0xa0) * *(int *)(this + 0x90))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_40 = 0x1b;
      local_48 = "N18ConvexHullInternal4EdgeE";
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar5 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
LAB_0010a613:
    iVar4 = *(int *)(this + 0x28);
    if (*(uint *)(this + 0x2c) < (uint)(*(int *)(this + 0x38) * iVar4)) goto LAB_0010a625;
LAB_0010aa30:
    if (iVar4 != 0) {
      lVar5 = 0;
      do {
        Memory::free_static(*(void **)(*(long *)(this + 0x18) + lVar5 * 8),false);
        lVar2 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x20) + lVar2),false);
      } while ((uint)lVar5 < *(uint *)(this + 0x28));
      Memory::free_static(*(void **)(this + 0x18),false);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(*(void **)(this + 0x20),false);
        return;
      }
      goto LAB_0010ab01;
    }
  }
  else {
    if (*(int *)(this + 0x90) == 0) goto LAB_0010a613;
    lVar5 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x80) + lVar5 * 8),false);
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x88) + lVar2),false);
    } while ((uint)lVar5 < *(uint *)(this + 0x90));
    Memory::free_static(*(void **)(this + 0x80),false);
    Memory::free_static(*(void **)(this + 0x88),false);
    iVar4 = *(int *)(this + 0x28);
    if ((uint)(*(int *)(this + 0x38) * iVar4) <= *(uint *)(this + 0x2c)) goto LAB_0010aa30;
LAB_0010a625:
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_40 = 0x1d;
      local_48 = "N18ConvexHullInternal6VertexE";
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar5 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ab01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConvexHullInternal::Vertex::dot(ConvexHullInternal::Point64 const&) const */

Point64 * ConvexHullInternal::Vertex::dot(Point64 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *in_RDX;
  long extraout_RDX;
  long in_RSI;
  long lVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar4 = in_RDX[1];
  lVar8 = *in_RDX;
  if (*(int *)(in_RSI + 0x74) < 0) {
    auVar9 = Int128::operator*((Int128 *)(in_RSI + 0x48),in_RDX[2]);
    auVar10 = Int128::operator*((Int128 *)(in_RSI + 0x38),lVar4);
    uVar5 = Int128::operator*((Int128 *)(in_RSI + 0x28),lVar8);
    *(undefined8 *)param_1 = extraout_XMM0_Qa;
    *(undefined8 *)(param_1 + 8) = extraout_XMM0_Qb;
    uVar6 = uVar5 + auVar10._0_8_;
    *(undefined8 *)(param_1 + 0x10) = extraout_XMM0_Qa;
    *(undefined8 *)(param_1 + 0x18) = extraout_XMM0_Qb;
    lVar8 = auVar9._0_8_ + uVar6;
    lVar4 = extraout_RDX + auVar10._8_8_ + auVar9._8_8_ + (ulong)CARRY8(uVar5,auVar10._0_8_) +
            (ulong)CARRY8(auVar9._0_8_,uVar6);
    if (lVar4 < 0) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      *(long *)param_1 = -lVar8;
      lVar1 = *(long *)(in_RSI + 0x60);
      *(ulong *)(param_1 + 8) = -lVar4 - (ulong)(lVar8 != 0);
      uVar3 = 0xffffffff;
    }
    else {
      if (lVar8 == 0 && lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
      uVar3 = (uint)(lVar8 != 0 || lVar4 != 0);
      *(long *)(param_1 + 8) = lVar4;
      lVar1 = *(long *)(in_RSI + 0x60);
      *(long *)param_1 = lVar8;
    }
    if (lVar1 < 0) {
      *(uint *)(param_1 + 0x20) = -uVar3;
      lVar4 = *(long *)(in_RSI + 0x58);
      *(long *)(param_1 + 0x10) = -lVar4;
      *(ulong *)(param_1 + 0x18) = ((ulong)(lVar4 == 0) - lVar1) + -1;
    }
    else {
      uVar2 = *(undefined8 *)(in_RSI + 0x60);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(in_RSI + 0x58);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    param_1[0x24] = (Point64)0x0;
    return param_1;
  }
  lVar4 = *(int *)(in_RSI + 0x68) * lVar8 + *(int *)(in_RSI + 0x6c) * lVar4 +
          (long)*(int *)(in_RSI + 0x70) * in_RDX[2];
  uVar7 = 1;
  if (lVar4 < 1) {
    if (lVar4 == 0) {
      uVar7 = 0;
      lVar4 = 0;
    }
    else {
      lVar4 = -lVar4;
      uVar7 = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(long *)param_1 = lVar4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x24] = (Point64)0x1;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::ConvexHullInternal() */

void __thiscall ConvexHullInternal::ConvexHullInternal(ConvexHullInternal *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_0010b8b8;
  uVar1 = __LC57;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x3c] = (ConvexHullInternal)0x0;
  *(undefined4 *)(this + 0x38) = 0x1000;
  this[0xa4] = (ConvexHullInternal)0x0;
  *(undefined4 *)(this + 0xa0) = 0x1000;
  this[0x10c] = (ConvexHullInternal)0x0;
  *(undefined4 *)(this + 0x108) = 0x1000;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = uVar1;
  *(undefined8 *)(this + 0x98) = uVar2;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xf8) = uVar1;
  *(undefined8 *)(this + 0x100) = uVar2;
  return;
}



/* ConvexHullComputer::~ConvexHullComputer() */

void __thiscall ConvexHullComputer::~ConvexHullComputer(ConvexHullComputer *this)

{
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (*(int *)(this + 0x20) != 0) {
      *(undefined4 *)(this + 0x20) = 0;
    }
    Memory::free_static(*(void **)(this + 0x28),false);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    Memory::free_static(*(void **)(this + 0x18),false);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 0;
    }
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* void LocalVector<ConvexHullInternal::Point32, unsigned int, false,
   false>::sort_custom<PointComparator>() */

void __thiscall
LocalVector<ConvexHullInternal::Point32,unsigned_int,false,false>::sort_custom<PointComparator>
          (LocalVector<ConvexHullInternal::Point32,unsigned_int,false,false> *this)

{
  uint uVar1;
  int iVar2;
  Point32 *__src;
  undefined8 uVar3;
  undefined8 uVar4;
  Point32 *pPVar5;
  long lVar6;
  size_t __n;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  Point32 *pPVar13;
  Point32 *pPVar14;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 0) {
    return;
  }
  uVar10 = (ulong)uVar1;
  __src = *(Point32 **)(this + 8);
  if (uVar1 == 1) {
    SortArray<ConvexHullInternal::Point32,PointComparator,true>::introsort(0,1,__src,0);
    return;
  }
  lVar6 = 0;
  uVar8 = uVar10;
  do {
    uVar8 = (long)uVar8 >> 1;
    lVar6 = lVar6 + 1;
  } while (uVar8 != 1);
  SortArray<ConvexHullInternal::Point32,PointComparator,true>::introsort(0,uVar10,__src,lVar6 * 2);
  pPVar13 = __src + 0x10;
  lVar6 = 1;
  pPVar14 = pPVar13;
  if (uVar10 < 0x11) {
    uVar8 = 1;
    do {
      while( true ) {
        uVar3 = *(undefined8 *)pPVar14;
        uVar4 = *(undefined8 *)(pPVar14 + 8);
        iVar2 = *(int *)(pPVar14 + 4);
        if (*(int *)(__src + 4) <= iVar2) break;
LAB_0010aff2:
        __n = uVar8 << 4;
        uVar8 = uVar8 + 1;
        pPVar14 = pPVar14 + 0x10;
        memmove(pPVar13,__src,__n);
        *(undefined8 *)__src = uVar3;
        *(undefined8 *)(__src + 8) = uVar4;
        if (uVar10 == uVar8) {
          return;
        }
      }
      iVar12 = (int)uVar3;
      pPVar5 = pPVar14;
      uVar7 = uVar8;
      if ((*(int *)(__src + 4) == iVar2) &&
         ((iVar12 < *(int *)__src ||
          ((*(int *)__src == iVar12 && ((int)uVar4 < *(int *)(__src + 8))))))) goto LAB_0010aff2;
      while( true ) {
        iVar11 = *(int *)(pPVar5 + -0xc);
        if ((iVar11 == iVar2 || iVar11 < iVar2) &&
           ((iVar11 != iVar2 ||
            ((*(int *)(pPVar5 + -0x10) <= iVar12 &&
             ((*(int *)(pPVar5 + -0x10) != iVar12 || (*(int *)(pPVar5 + -8) <= (int)uVar4))))))))
        goto LAB_0010afcb;
        if (uVar7 - 1 == 0) break;
        *(undefined8 *)pPVar5 = *(undefined8 *)(pPVar5 + -0x10);
        *(undefined8 *)(pPVar5 + 8) = *(undefined8 *)(pPVar5 + -8);
        pPVar5 = pPVar5 + -0x10;
        uVar7 = uVar7 - 1;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
      uVar7 = 1;
LAB_0010afcb:
      uVar8 = uVar8 + 1;
      pPVar14 = pPVar14 + 0x10;
      *(undefined8 *)(__src + uVar7 * 0x10) = uVar3;
      *(undefined8 *)(__src + uVar7 * 0x10 + 8) = uVar4;
    } while (uVar10 != uVar8);
  }
  else {
    do {
      while( true ) {
        lVar9 = lVar6;
        uVar3 = *(undefined8 *)pPVar14;
        uVar4 = *(undefined8 *)(pPVar14 + 8);
        iVar2 = *(int *)(pPVar14 + 4);
        if (*(int *)(__src + 4) <= iVar2) break;
LAB_0010aef3:
        pPVar14 = pPVar14 + 0x10;
        memmove(pPVar13,__src,lVar9 << 4);
        *(undefined8 *)__src = uVar3;
        *(undefined8 *)(__src + 8) = uVar4;
        lVar6 = lVar9 + 1;
        if (lVar9 + 1 == 0x10) goto LAB_0010af20;
      }
      iVar12 = (int)uVar3;
      pPVar5 = pPVar14;
      lVar6 = lVar9;
      if ((*(int *)(__src + 4) == iVar2) &&
         ((iVar12 < *(int *)__src ||
          ((*(int *)__src == iVar12 && ((int)uVar4 < *(int *)(__src + 8))))))) goto LAB_0010aef3;
      while( true ) {
        iVar11 = *(int *)(pPVar5 + -0xc);
        if ((iVar11 == iVar2 || iVar11 < iVar2) &&
           ((iVar11 != iVar2 ||
            ((*(int *)(pPVar5 + -0x10) <= iVar12 &&
             ((*(int *)(pPVar5 + -0x10) != iVar12 || (*(int *)(pPVar5 + -8) <= (int)uVar4))))))))
        goto LAB_0010aecb;
        if (lVar6 == 1) break;
        *(undefined8 *)pPVar5 = *(undefined8 *)(pPVar5 + -0x10);
        *(undefined8 *)(pPVar5 + 8) = *(undefined8 *)(pPVar5 + -8);
        pPVar5 = pPVar5 + -0x10;
        lVar6 = lVar6 + -1;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010aecb:
      pPVar14 = pPVar14 + 0x10;
      *(undefined8 *)(__src + lVar6 * 0x10) = uVar3;
      *(undefined8 *)(__src + lVar6 * 0x10 + 8) = uVar4;
      lVar6 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
LAB_0010af20:
    uVar8 = lVar9 + 1;
    pPVar13 = __src + 0x100;
    do {
      iVar2 = *(int *)(pPVar13 + 8);
      iVar12 = *(int *)(pPVar13 + 4);
      uVar3 = *(undefined8 *)pPVar13;
      uVar4 = *(undefined8 *)(pPVar13 + 8);
      iVar11 = (int)uVar3;
      pPVar14 = pPVar13;
      uVar7 = uVar8;
      while( true ) {
        if ((*(int *)(pPVar14 + -0xc) <= iVar12) &&
           ((iVar12 != *(int *)(pPVar14 + -0xc) ||
            ((*(int *)(pPVar14 + -0x10) <= iVar11 &&
             ((*(int *)(pPVar14 + -0x10) != iVar11 || (*(int *)(pPVar14 + -8) <= iVar2))))))))
        goto LAB_0010af46;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) break;
        *(undefined8 *)pPVar14 = *(undefined8 *)(pPVar14 + -0x10);
        *(undefined8 *)(pPVar14 + 8) = *(undefined8 *)(pPVar14 + -8);
        pPVar14 = pPVar14 + -0x10;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
      uVar7 = 1;
LAB_0010af46:
      uVar8 = uVar8 + 1;
      pPVar13 = pPVar13 + 0x10;
      *(undefined8 *)(__src + uVar7 * 0x10) = uVar3;
      *(undefined8 *)(__src + uVar7 * 0x10 + 8) = uVar4;
    } while (uVar10 != uVar8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvexHullInternal::Face* PagedAllocator<ConvexHullInternal::Face, false, 4096u>::alloc<>() */

Face * __thiscall
PagedAllocator<ConvexHullInternal::Face,false,4096u>::alloc<>
          (PagedAllocator<ConvexHullInternal::Face,false,4096u> *this)

{
  Face *pFVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  iVar6 = *(int *)(this + 0x14);
  if (iVar6 == 0) {
    uVar5 = *(uint *)(this + 0x10) + 1;
    lVar11 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar5;
    uVar7 = Memory::realloc_static(*(void **)this,(ulong)uVar5 << 3,false);
    *(undefined8 *)this = uVar7;
    uVar7 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar2 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar7;
    uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x48,false);
    uVar5 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar2 + lVar11) = uVar7;
    lVar2 = *(long *)(this + 8);
    uVar7 = Memory::alloc_static((ulong)uVar5 << 3,false);
    *(undefined8 *)(lVar2 + lVar11) = uVar7;
    uVar5 = *(uint *)(this + 0x20);
    if (uVar5 == 0) {
      plVar12 = *(long **)(this + 8);
    }
    else {
      plVar12 = *(long **)(this + 8);
      lVar2 = *(long *)this;
      plVar3 = (long *)*plVar12;
      lVar8 = 0;
      plVar9 = plVar3;
      do {
        plVar10 = plVar9 + 1;
        lVar13 = *(long *)(lVar2 + lVar11) + lVar8;
        lVar8 = lVar8 + 0x48;
        *plVar9 = lVar13;
        plVar9 = plVar10;
      } while (plVar3 + uVar5 != plVar10);
    }
    iVar6 = uVar5 + *(int *)(this + 0x14);
  }
  else {
    plVar12 = *(long **)(this + 8);
  }
  uVar5 = iVar6 - 1;
  *(uint *)(this + 0x14) = uVar5;
  pFVar1 = *(Face **)(plVar12[uVar5 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
                     (ulong)(uVar5 & *(uint *)(this + 0x1c)) * 8);
  *(undefined1 (*) [16])pFVar1 = (undefined1  [16])0x0;
  uVar4 = _UNK_0010b8a8;
  uVar7 = __LC53;
  *(undefined8 *)(pFVar1 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + 0x18) = uVar7;
  *(undefined8 *)(pFVar1 + 0x20) = uVar4;
  *(undefined8 *)(pFVar1 + 0x28) = uVar7;
  *(undefined8 *)(pFVar1 + 0x30) = uVar4;
  *(undefined8 *)(pFVar1 + 0x38) = uVar7;
  *(undefined8 *)(pFVar1 + 0x40) = uVar4;
  return pFVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OAHashMap<unsigned long, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned long>
   >::insert(unsigned long const&, int const&) */

void __thiscall
OAHashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert
          (OAHashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
           *this,ulong *param_1,int *param_2)

{
  ulong *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint *puVar20;
  int *piVar21;
  uint uVar22;
  undefined4 *puVar23;
  ulong uVar24;
  int iVar25;
  undefined4 uVar26;
  uint *local_80;
  undefined8 *local_78;
  undefined4 *local_70;
  
  puVar4 = *(uint **)(this + 0x10);
  uVar16 = *(uint *)(this + 0x18);
  uVar17 = (ulong)uVar16;
  local_80 = puVar4;
  if ((double)uVar17 * __LC69 < (double)(*(int *)(this + 0x1c) + 1)) {
    uVar11 = (ulong)(uVar16 * 2);
    puVar6 = *(undefined8 **)(this + 8);
    puVar7 = *(undefined4 **)this;
    *(undefined4 *)(this + 0x1c) = 0;
    if (uVar16 * 2 == 0) {
      uVar11 = 1;
    }
    *(int *)(this + 0x18) = (int)uVar11;
    uVar12 = Memory::alloc_static(uVar11 * 8,false);
    *(undefined8 *)(this + 8) = uVar12;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    *(undefined8 *)this = uVar12;
    local_80 = (uint *)Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    *(uint **)(this + 0x10) = local_80;
    lVar13 = 0;
    if (*(int *)(this + 0x18) != 0) {
      do {
        local_80[lVar13] = 0;
        lVar13 = lVar13 + 1;
      } while ((uint)lVar13 < *(uint *)(this + 0x18));
    }
    if (uVar16 == 0) {
      uVar17 = (ulong)*(uint *)(this + 0x18);
    }
    else {
      puVar20 = puVar4;
      local_78 = puVar6;
      local_70 = puVar7;
      do {
        uVar16 = *puVar20;
        if (uVar16 != 0) {
          uVar18 = (ulong)*(uint *)(this + 0x18);
          uVar22 = 0;
          uVar11 = (ulong)uVar16 % uVar18;
          lVar13 = *(long *)(this + 8);
          lVar5 = *(long *)this;
          puVar2 = local_80 + uVar11;
          uVar14 = *puVar2;
          uVar12 = *local_78;
          uVar8 = *local_70;
          while (uVar14 != 0) {
            uVar15 = (uint)((ulong)(uint)(((int)uVar11 + (int)uVar18) -
                                         (int)((ulong)uVar14 % uVar18)) % uVar18);
            uVar19 = uVar12;
            uVar26 = uVar8;
            if (uVar15 < uVar22) {
              *puVar2 = uVar16;
              puVar3 = (undefined8 *)(lVar13 + uVar11 * 8);
              uVar19 = *puVar3;
              *puVar3 = uVar12;
              puVar23 = (undefined4 *)(uVar11 * 4 + lVar5);
              uVar26 = *puVar23;
              *puVar23 = uVar8;
              uVar18 = (ulong)*(uint *)(this + 0x18);
              uVar16 = uVar14;
              uVar22 = uVar15;
            }
            uVar22 = uVar22 + 1;
            uVar11 = (ulong)((int)uVar11 + 1) % uVar18;
            puVar2 = local_80 + uVar11;
            uVar12 = uVar19;
            uVar8 = uVar26;
            uVar14 = *puVar2;
          }
          *(undefined8 *)(lVar13 + uVar11 * 8) = uVar12;
          *(undefined4 *)(lVar5 + uVar11 * 4) = uVar8;
          *puVar2 = uVar16;
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
        }
        puVar20 = puVar20 + 1;
        local_78 = local_78 + 1;
        local_70 = local_70 + 1;
      } while (puVar20 != puVar4 + uVar17);
      Memory::free_static(puVar6,false);
      Memory::free_static(puVar7,false);
      Memory::free_static(puVar4,false);
      local_80 = *(uint **)(this + 0x10);
      uVar17 = (ulong)*(uint *)(this + 0x18);
    }
  }
  lVar13 = *(long *)(this + 8);
  uVar11 = *param_1 * 0x3ffff - 1;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uVar11 = uVar11 >> 0x16 ^ uVar11;
  uVar18 = uVar11 & 0xffffffff;
  if ((int)uVar11 == 0) {
    uVar18 = 1;
  }
  uVar22 = 0;
  uVar14 = (uint)uVar18;
  uVar11 = uVar18 % uVar17;
  puVar4 = local_80 + uVar11;
  lVar5 = *(long *)this;
  uVar16 = *puVar4;
  uVar9 = *param_1;
  iVar10 = *param_2;
  while (uVar16 != 0) {
    uVar14 = (uint)((ulong)(uint)(((int)uVar11 + (int)uVar17) - (int)((ulong)uVar16 % uVar17)) %
                   uVar17);
    uVar24 = uVar9;
    iVar25 = iVar10;
    if (uVar14 < uVar22) {
      puVar1 = (ulong *)(lVar13 + uVar11 * 8);
      *puVar4 = (uint)uVar18;
      uVar18 = (ulong)uVar16;
      uVar24 = *puVar1;
      *puVar1 = uVar9;
      piVar21 = (int *)(uVar11 * 4 + lVar5);
      iVar25 = *piVar21;
      *piVar21 = iVar10;
      uVar17 = (ulong)*(uint *)(this + 0x18);
      uVar22 = uVar14;
    }
    uVar14 = (uint)uVar18;
    uVar22 = uVar22 + 1;
    uVar11 = (ulong)((int)uVar11 + 1) % uVar17;
    puVar4 = local_80 + uVar11;
    uVar9 = uVar24;
    iVar10 = iVar25;
    uVar16 = *puVar4;
  }
  *(ulong *)(lVar13 + uVar11 * 8) = uVar9;
  *(int *)(lVar5 + uVar11 * 4) = iVar10;
  *puVar4 = uVar14;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  return;
}



/* LocalVector<Geometry3D::MeshData::Face, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
          (LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 << 5;
    uVar7 = param_1;
    do {
      lVar2 = *(long *)(this + 8) + lVar6;
      if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
        if (*(int *)(lVar2 + 0x10) != 0) {
          *(undefined4 *)(lVar2 + 0x10) = 0;
        }
        Memory::free_static(*(void **)(lVar2 + 0x18),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar5 >> 1 | uVar5;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 << 5,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_0010b70b;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar7 * 0x20 + lVar6);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 4;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x20 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x20)
            );
  }
LAB_0010b70b:
  *(uint *)this = param_1;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ConvexHullInternal::~ConvexHullInternal() */

void __thiscall ConvexHullInternal::~ConvexHullInternal(ConvexHullInternal *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConvexHullComputer::~ConvexHullComputer() */

void __thiscall ConvexHullComputer::~ConvexHullComputer(ConvexHullComputer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConvexHullInternal::ConvexHullInternal() */

void __thiscall ConvexHullInternal::ConvexHullInternal(ConvexHullInternal *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



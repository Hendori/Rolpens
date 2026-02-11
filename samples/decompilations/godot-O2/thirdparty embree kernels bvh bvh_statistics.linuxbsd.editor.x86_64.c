
/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::endl<char, std::char_traits<char> >(std::ostream&) [clone .isra.0] */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
  long *plVar1;
  ostream *poVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)param_1);
    poVar2 = (ostream *)std::ostream::flush();
    return poVar2;
  }
  uVar3 = std::__throw_bad_cast();
  LOCK();
  poVar2 = param_1 + 8;
  *(long *)poVar2 = *(long *)poVar2 + -1;
  UNLOCK();
  if ((param_1 != (ostream *)0x0) && (*(long *)poVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x001009a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    poVar2 = (ostream *)(**(code **)(*(long *)param_1 + 8))();
    return poVar2;
  }
  return (ostream *)CONCAT71((int7)((ulong)uVar3 >> 8),*(long *)poVar2 == 0);
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x001009a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::BVHNStatistics<4>::Statistics::add(embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::Statistics const&) */

void __thiscall
embree::BVHNStatistics<4>::Statistics::add(Statistics *this,Statistics *param_1,Statistics *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  ulong uVar59;
  
  lVar15 = *(long *)(param_2 + 0x100);
  lVar16 = *(long *)(param_2 + 0xf8);
  lVar17 = *(long *)(param_1 + 0x100);
  lVar18 = *(long *)(param_1 + 0xf8);
  lVar19 = *(long *)(param_2 + 0xe8);
  lVar20 = *(long *)(param_2 + 0xe0);
  lVar21 = *(long *)(param_1 + 0xe8);
  lVar22 = *(long *)(param_1 + 0xe0);
  lVar23 = *(long *)(param_2 + 0xd0);
  lVar24 = *(long *)(param_1 + 0xd0);
  dVar1 = *(double *)(param_1 + 0xf0);
  dVar2 = *(double *)(param_2 + 0xf0);
  dVar3 = *(double *)(param_1 + 0xd8);
  lVar25 = *(long *)(param_2 + 200);
  dVar4 = *(double *)(param_2 + 0xd8);
  lVar26 = *(long *)(param_1 + 200);
  lVar27 = *(long *)(param_2 + 0xb8);
  lVar28 = *(long *)(param_2 + 0xb0);
  lVar29 = *(long *)(param_1 + 0xb8);
  lVar30 = *(long *)(param_1 + 0xb0);
  lVar31 = *(long *)(param_2 + 0xa0);
  lVar32 = *(long *)(param_2 + 0x30);
  lVar33 = *(long *)(param_1 + 0xa0);
  lVar34 = *(long *)(param_1 + 0x30);
  lVar35 = *(long *)(param_2 + 0x98);
  lVar36 = *(long *)(param_2 + 0x88);
  lVar37 = *(long *)(param_1 + 0x98);
  lVar38 = *(long *)(param_1 + 0x88);
  lVar39 = *(long *)(param_2 + 0x80);
  lVar40 = *(long *)(param_1 + 0x80);
  dVar5 = *(double *)(param_1 + 0xc0);
  dVar6 = *(double *)(param_1 + 0x78);
  dVar7 = *(double *)(param_2 + 0xc0);
  dVar8 = *(double *)(param_2 + 0x78);
  dVar9 = *(double *)(param_1 + 0xa8);
  dVar10 = *(double *)(param_1 + 0x90);
  dVar11 = *(double *)(param_2 + 0xa8);
  dVar12 = *(double *)(param_2 + 0x90);
  lVar41 = *(long *)(param_2 + 0x28);
  lVar42 = *(long *)(param_1 + 0x28);
  lVar43 = *(long *)(param_2 + 0x18);
  lVar44 = *(long *)(param_1 + 0x18);
  lVar45 = *(long *)(param_2 + 0x10);
  *(long *)(this + 0x20) = *(long *)(param_2 + 0x20) + *(long *)(param_1 + 0x20);
  lVar46 = *(long *)(param_1 + 0x10);
  dVar13 = *(double *)(param_1 + 8);
  *(long *)(this + 0x18) = lVar43 + lVar44;
  dVar14 = *(double *)(param_2 + 8);
  lVar43 = *(long *)(param_2 + 0x38);
  *(long *)(this + 0x10) = lVar45 + lVar46;
  lVar44 = *(long *)(param_1 + 0x38);
  lVar45 = *(long *)(param_2 + 0x40);
  lVar46 = *(long *)(param_2 + 0x48);
  lVar47 = *(long *)(param_1 + 0x40);
  lVar48 = *(long *)(param_1 + 0x48);
  lVar49 = *(long *)(param_2 + 0x50);
  *(double *)(this + 8) = dVar13 + dVar14;
  lVar50 = *(long *)(param_1 + 0x50);
  lVar51 = *(long *)(param_2 + 0x58);
  lVar52 = *(long *)(param_2 + 0x60);
  lVar53 = *(long *)(param_1 + 0x58);
  lVar54 = *(long *)(param_1 + 0x60);
  lVar55 = *(long *)(param_2 + 0x68);
  lVar56 = *(long *)(param_2 + 0x70);
  lVar57 = *(long *)(param_1 + 0x68);
  lVar58 = *(long *)(param_1 + 0x70);
  uVar59 = *(ulong *)param_2;
  if (*(ulong *)param_2 < *(ulong *)param_1) {
    uVar59 = *(ulong *)param_1;
  }
  *(ulong *)this = uVar59;
  *(long *)(this + 0x28) = lVar41 + lVar42;
  *(long *)(this + 0x38) = lVar43 + lVar44;
  *(long *)(this + 0x48) = lVar46 + lVar48;
  *(long *)(this + 0x50) = lVar49 + lVar50;
  *(long *)(this + 0x58) = lVar51 + lVar53;
  *(long *)(this + 0x60) = lVar52 + lVar54;
  *(long *)(this + 0x40) = lVar45 + lVar47;
  *(long *)(this + 0x68) = lVar55 + lVar57;
  *(long *)(this + 0x70) = lVar56 + lVar58;
  *(long *)(this + 0x80) = lVar39 + lVar40;
  *(long *)(this + 0x88) = lVar36 + lVar38;
  *(long *)(this + 0x98) = lVar35 + lVar37;
  *(long *)(this + 0xa0) = lVar31 + lVar33;
  *(long *)(this + 0xb0) = lVar28 + lVar30;
  *(long *)(this + 0x30) = lVar32 + lVar34;
  *(long *)(this + 0xb8) = lVar27 + lVar29;
  *(long *)(this + 200) = lVar25 + lVar26;
  *(long *)(this + 0xd0) = lVar23 + lVar24;
  *(double *)(this + 0x78) = dVar6 + dVar8;
  *(double *)(this + 0x90) = dVar10 + dVar12;
  *(double *)(this + 0xa8) = dVar9 + dVar11;
  *(double *)(this + 0xc0) = dVar5 + dVar7;
  *(double *)(this + 0xd8) = dVar3 + dVar4;
  *(long *)(this + 0xe0) = lVar20 + lVar22;
  *(double *)(this + 0xf0) = dVar1 + dVar2;
  *(long *)(this + 0xe8) = lVar19 + lVar21;
  *(long *)(this + 0xf8) = lVar16 + lVar18;
  *(long *)(this + 0x100) = lVar15 + lVar17;
  return;
}



/* embree::BVHNStatistics<4>::bytesUsed() const */

long __thiscall embree::BVHNStatistics<4>::bytesUsed(BVHNStatistics<4> *this)

{
  return *(long *)(this + 0x88) * 0x80 + *(long *)(this + 0xd0) * 0x100 + *(long *)(this + 0x38) +
         *(long *)(this + 0xe8) * 0x140 + *(long *)(this + 0x100) * 0x50 +
         (*(long *)(this + 0xb8) + *(long *)(this + 0xa0)) * 0xe0;
}



/* embree::BVHNStatistics<4>::Statistics::Statistics(unsigned long,
   embree::BVHNStatistics<4>::Statistics::LeafStat,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNode_t<embree::NodeRefPtr<4>, 4> >,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNode_t<embree::NodeRefPtr<4>, 4> >,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4> >,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>
   >, embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNodeMB_t<embree::NodeRefPtr<4>, 4>
   >, embree::BVHNStatistics<4>::Statistics::NodeStat<embree::QuantizedNode_t<embree::NodeRefPtr<4>,
   4> >) */

void __thiscall
embree::BVHNStatistics<4>::Statistics::Statistics(Statistics *this,undefined8 param_1)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = in_stack_00000008;
  *(undefined8 *)(this + 0x10) = in_stack_00000010;
  *(undefined8 *)(this + 0x18) = in_stack_00000018;
  *(undefined8 *)(this + 0x20) = in_stack_00000020;
  *(undefined8 *)(this + 0x88) = in_stack_00000088;
  *(undefined8 *)(this + 0x28) = in_stack_00000028;
  *(undefined8 *)(this + 0x30) = in_stack_00000030;
  *(undefined8 *)(this + 0xa0) = in_stack_000000a0;
  *(undefined8 *)(this + 0x38) = in_stack_00000038;
  *(undefined8 *)(this + 0x40) = in_stack_00000040;
  *(undefined8 *)(this + 0x48) = in_stack_00000048;
  *(undefined8 *)(this + 0x50) = in_stack_00000050;
  *(undefined8 *)(this + 0xb8) = in_stack_000000b8;
  *(undefined8 *)(this + 0x58) = in_stack_00000058;
  *(undefined8 *)(this + 0x60) = in_stack_00000060;
  *(undefined8 *)(this + 0xd0) = in_stack_000000d0;
  *(undefined8 *)(this + 0x68) = in_stack_00000068;
  *(undefined8 *)(this + 0x70) = in_stack_00000070;
  *(undefined8 *)(this + 0x78) = in_stack_00000078;
  *(undefined8 *)(this + 0x80) = in_stack_00000080;
  *(undefined8 *)(this + 0x90) = in_stack_00000090;
  *(undefined8 *)(this + 0x98) = in_stack_00000098;
  *(undefined8 *)(this + 0xa8) = in_stack_000000a8;
  *(undefined8 *)(this + 0xb0) = in_stack_000000b0;
  *(undefined8 *)(this + 0xc0) = in_stack_000000c0;
  *(undefined8 *)(this + 200) = in_stack_000000c8;
  *(undefined8 *)(this + 0xd8) = in_stack_000000d8;
  *(undefined8 *)(this + 0xe0) = in_stack_000000e0;
  *(undefined8 *)(this + 0xe8) = in_stack_000000e8;
  *(undefined8 *)(this + 0xf0) = in_stack_000000f0;
  *(undefined8 *)(this + 0xf8) = in_stack_000000f8;
  *(undefined8 *)(this + 0x100) = in_stack_00000100;
  return;
}



/* embree::BVHNStatistics<4>::Statistics::sah(embree::BVHN<4>*) const */

double __thiscall embree::BVHNStatistics<4>::Statistics::sah(Statistics *this,BVHN *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  double dVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18);
  fVar1 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar6;
  fVar2 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar7;
  fVar3 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar4;
  fVar8 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar4;
  fVar9 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar6;
  fVar10 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar7;
  dVar5 = (double)((fVar6 * fVar8 + fVar4 * fVar1) * _LC2 + fVar6 * fVar4 + fVar8 * fVar1 * _LC4 +
                   (fVar7 * fVar9 + fVar6 * fVar2) * _LC2 + fVar7 * fVar6 + fVar9 * fVar2 * _LC4 +
                  (fVar4 * fVar10 + fVar7 * fVar3) * _LC2 + fVar4 * fVar7 + fVar10 * fVar3 * _LC4);
  return *(double *)(this + 0x78) / dVar5 + *(double *)(this + 8) / dVar5 +
         *(double *)(this + 0x90) / dVar5 + *(double *)(this + 0xa8) / dVar5 +
         *(double *)(this + 0xc0) / dVar5 + *(double *)(this + 0xd8) / dVar5 +
         *(double *)(this + 0xf0) / dVar5;
}



/* embree::BVHNStatistics<4>::sah() const */

void __thiscall embree::BVHNStatistics<4>::sah(BVHNStatistics<4> *this)

{
  Statistics::sah((Statistics *)(this + 8),*(BVHN **)this);
  return;
}



/* embree::BVHNStatistics<4>::Statistics::bytes(embree::BVHN<4>*) const */

long embree::BVHNStatistics<4>::Statistics::bytes(BVHN *param_1)

{
  return *(long *)(param_1 + 200) * 0x100 + *(long *)(param_1 + 0x80) * 0x80 +
         *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0xe0) * 0x140 +
         *(long *)(param_1 + 0xf8) * 0x50 +
         (*(long *)(param_1 + 0x98) + *(long *)(param_1 + 0xb0)) * 0xe0;
}



/* embree::BVHNStatistics<4>::Statistics::size() const */

long __thiscall embree::BVHNStatistics<4>::Statistics::size(Statistics *this)

{
  return *(long *)(this + 0x80) + *(long *)(this + 0x10) + *(long *)(this + 0x98) +
         *(long *)(this + 0xb0) + *(long *)(this + 200) + *(long *)(this + 0xe0) +
         *(long *)(this + 0xf8);
}



/* embree::BVHNStatistics<4>::Statistics::fillRate(embree::BVHN<4>*) const */

double embree::BVHNStatistics<4>::Statistics::fillRate(BVHN *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((long)*(ulong *)(param_1 + 0x88) < 0) {
    uVar6 = *(ulong *)(param_1 + 0x18);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x18);
  }
  if ((long)uVar6 < 0) {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  if ((long)uVar1 < 0) {
    uVar2 = *(ulong *)(param_1 + 0xb8);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0xb8);
  }
  if ((long)uVar2 < 0) {
    uVar3 = *(ulong *)(param_1 + 0xd0);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0xd0);
  }
  if ((long)uVar3 < 0) {
    uVar4 = *(ulong *)(param_1 + 0xe8);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0xe8);
  }
  if ((long)uVar4 < 0) {
    uVar5 = *(ulong *)(param_1 + 0x100);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x100);
  }
  dVar7 = (double)*(ulong *)(param_1 + 0x88) + (double)uVar6 + (double)uVar1 + (double)uVar2 +
          (double)uVar3 + (double)uVar4 + (double)uVar5;
  uVar6 = *(long *)(param_1 + 0x80) << 2;
  if ((long)uVar6 < 0) {
    dVar8 = (double)(uVar6 >> 1) + (double)(uVar6 >> 1);
  }
  else {
    dVar8 = (double)(long)uVar6;
  }
  uVar6 = *(long *)(param_1 + 0x98) << 2;
  if ((long)uVar6 < 0) {
    dVar9 = (double)(uVar6 >> 1) + (double)(uVar6 >> 1);
  }
  else {
    dVar9 = (double)(long)uVar6;
  }
  uVar6 = *(long *)(param_1 + 0xb0) << 2;
  if ((long)uVar6 < 0) {
    dVar10 = (double)(uVar6 >> 1) + (double)(uVar6 >> 1);
  }
  else {
    dVar10 = (double)(long)uVar6;
  }
  uVar6 = *(long *)(param_1 + 200) << 2;
  if ((long)uVar6 < 0) {
    dVar11 = (double)(uVar6 >> 1) + (double)(uVar6 >> 1);
  }
  else {
    dVar11 = (double)(long)uVar6;
  }
  uVar6 = *(long *)(param_1 + 0xe0) << 2;
  if ((long)uVar6 < 0) {
    dVar12 = (double)(uVar6 >> 1) + (double)(uVar6 >> 1);
  }
  else {
    dVar12 = (double)(long)uVar6;
  }
  dVar12 = dVar8 + (double)*(ulong *)(param_1 + 0x20) + dVar9 + dVar10 + dVar11 + dVar12;
  uVar6 = *(long *)(param_1 + 0xf8) << 2;
  if (-1 < (long)uVar6) {
    return dVar7 / (dVar12 + (double)(long)uVar6);
  }
  return dVar7 / (dVar12 + (double)(uVar6 >> 1) + (double)(uVar6 >> 1));
}



/* embree::BVHNStatistics<4>::Statistics::LeafStat::LeafStat(double, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long) */

void __thiscall
embree::BVHNStatistics<4>::Statistics::LeafStat::LeafStat
          (LeafStat *this,double param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
          ulong param_6)

{
  *(double *)this = param_1;
  *(ulong *)(this + 8) = param_2;
  *(ulong *)(this + 0x10) = param_3;
  *(ulong *)(this + 0x18) = param_4;
  *(ulong *)(this + 0x20) = param_5;
  *(ulong *)(this + 0x28) = param_6;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  return;
}



/* embree::BVHNStatistics<4>::Statistics::LeafStat::sah(embree::BVHN<4>*) const */

double __thiscall embree::BVHNStatistics<4>::Statistics::LeafStat::sah(LeafStat *this,BVHN *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18);
  fVar7 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar1;
  fVar8 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar3;
  fVar9 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar5;
  fVar2 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar3;
  fVar4 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar5;
  fVar6 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar1;
  return *(double *)this /
         (double)((fVar7 * fVar3 + fVar1 * fVar2) * _LC2 + fVar1 * fVar3 + fVar7 * fVar2 * _LC4 +
                  (fVar8 * fVar5 + fVar3 * fVar4) * _LC2 + fVar3 * fVar5 + fVar8 * fVar4 * _LC4 +
                 (fVar9 * fVar1 + fVar5 * fVar6) * _LC2 + fVar5 * fVar1 + fVar9 * fVar6 * _LC4);
}



/* embree::BVHNStatistics<4>::Statistics::LeafStat::bytes(embree::BVHN<4>*) const */

undefined8 embree::BVHNStatistics<4>::Statistics::LeafStat::bytes(BVHN *param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* embree::BVHNStatistics<4>::Statistics::LeafStat::size() const */

undefined8 __thiscall embree::BVHNStatistics<4>::Statistics::LeafStat::size(LeafStat *this)

{
  return *(undefined8 *)(this + 8);
}



/* embree::BVHNStatistics<4>::Statistics::LeafStat::fillRateNom(embree::BVHN<4>*) const */

double embree::BVHNStatistics<4>::Statistics::LeafStat::fillRateNom(BVHN *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (-1 < (long)uVar1) {
    return (double)(long)uVar1;
  }
  return (double)uVar1;
}



/* embree::BVHNStatistics<4>::Statistics::LeafStat::fillRateDen(embree::BVHN<4>*) const */

double embree::BVHNStatistics<4>::Statistics::LeafStat::fillRateDen(BVHN *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (-1 < (long)uVar1) {
    return (double)(long)uVar1;
  }
  return (double)uVar1;
}



/* embree::BVHNStatistics<4>::Statistics::LeafStat::fillRate(embree::BVHN<4>*) const */

double embree::BVHNStatistics<4>::Statistics::LeafStat::fillRate(BVHN *param_1)

{
  ulong uVar1;
  double dVar2;
  
  if ((long)*(ulong *)(param_1 + 0x10) < 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  dVar2 = (double)*(ulong *)(param_1 + 0x10);
  if (-1 < (long)uVar1) {
    return dVar2 / (double)(long)uVar1;
  }
  return dVar2 / (double)uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::LeafStat::toString[abi:cxx11](embree::BVHN<4>*, double,
   unsigned long) const */

BVHN * embree::BVHNStatistics<4>::Statistics::LeafStat::toString_abi_cxx11_
                 (BVHN *param_1,double param_2,ulong param_3)

{
  code *pcVar1;
  ostream *poVar2;
  ulong in_RCX;
  long in_RDX;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar1 = _vtable;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_1b8[0] = _vtable;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"sah = ",6);
  fVar9 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar10 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar11 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar3 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar4 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar5 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  fVar6 = fVar9 - fVar3;
  fVar7 = fVar10 - fVar4;
  fVar8 = fVar11 - fVar5;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  fVar10 = fVar10 - fVar4;
  fVar11 = fVar11 - fVar5;
  fVar9 = fVar9 - fVar3;
  std::ostream::_M_insert<double>
            (*(double *)param_3 /
             (double)((fVar4 * fVar6 + fVar3 * fVar10) * _LC2 + fVar4 * fVar3 +
                      fVar10 * fVar6 * _LC4 +
                      (fVar5 * fVar7 + fVar4 * fVar11) * _LC2 + fVar5 * fVar4 +
                      fVar11 * fVar7 * _LC4 +
                     (fVar3 * fVar8 + fVar5 * fVar9) * _LC2 + fVar3 * fVar5 + fVar9 * fVar8 * _LC4))
  ;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8," (",2);
  fVar9 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar10 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar11 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar3 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar4 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar5 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  fVar6 = fVar9 - fVar3;
  fVar7 = fVar10 - fVar4;
  fVar8 = fVar11 - fVar5;
  fVar10 = fVar10 - fVar4;
  fVar11 = fVar11 - fVar5;
  fVar9 = fVar9 - fVar3;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>
                     (((*(double *)param_3 /
                       (double)((fVar4 * fVar6 + fVar3 * fVar10) * _LC2 + fVar4 * fVar3 +
                                fVar6 * fVar10 * _LC4 +
                                (fVar5 * fVar7 + fVar4 * fVar11) * _UNK_0010dcd4 + fVar5 * fVar4 +
                                fVar7 * fVar11 * _UNK_0010dce4 +
                               (fVar3 * fVar8 + fVar5 * fVar9) * _UNK_0010dcd8 + fVar3 * fVar5 +
                               fVar8 * fVar9 * _UNK_0010dce8)) * __LC7) / param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>((double)*(ulong *)(param_3 + 0x28) / __LC10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," MB ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"(",1);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>
                     (((double)*(ulong *)(param_3 + 0x28) * __LC7) / (double)in_RCX);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#nodes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," (",2);
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>
                     (((double)*(ulong *)(param_3 + 0x10) / (double)*(ulong *)(param_3 + 0x18)) *
                      __LC7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"% filled), ",0xb);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes/prim = ",0xe);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  std::ostream::_M_insert<double>
            ((double)*(ulong *)(param_3 + 0x28) / (double)*(ulong *)(in_RDX + 0x1f0));
  *(undefined8 *)(param_1 + 8) = 0;
  *(BVHN **)param_1 = param_1 + 0x10;
  param_1[0x10] = (BVHN)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)param_1,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = pcVar1;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar1 + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::LeafStat::histToString[abi:cxx11]() const */

void embree::BVHNStatistics<4>::Statistics::LeafStat::histToString_abi_cxx11_(void)

{
  ulong uVar1;
  ostream *poVar2;
  long in_RSI;
  string *in_RDI;
  ulong *puVar3;
  long in_FS_OFFSET;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  puVar3 = (ulong *)(in_RSI + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_68 = 0;
  local_70 = 0;
  local_1b8[0] = _vtable;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  do {
    *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
    *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    poVar2 = std::ostream::_M_insert<double>
                       ((double)(((float)uVar1 * __LC16) / (float)*(ulong *)(in_RSI + 8)));
    std::__ostream_insert<char,std::char_traits<char>>(poVar2,"% ",2);
  } while ((ulong *)(in_RSI + 0x70) != puVar3);
  *(undefined8 *)(in_RDI + 8) = 0;
  *(string **)in_RDI = in_RDI + 0x10;
  in_RDI[0x10] = (string)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign(in_RDI);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)in_RDI,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = _vtable;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNode_t<embree::NodeRefPtr<4>, 4>
   >::toString[abi:cxx11](embree::BVHN<4>*, double, unsigned long) const */

BVHN * embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNode_t<embree::NodeRefPtr<4>,4>>
       ::toString_abi_cxx11_(BVHN *param_1,double param_2,ulong param_3)

{
  code *pcVar1;
  ostream *poVar2;
  ulong uVar3;
  ulong in_RCX;
  long in_RDX;
  long in_FS_OFFSET;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar1 = _vtable;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_1b8[0] = _vtable;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"sah = ",6);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  std::ostream::_M_insert<double>
            (*(double *)param_3 /
             (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                      fVar12 * fVar8 * _LC4 +
                      (fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                      fVar13 * fVar9 * _LC4 +
                     (fVar5 * fVar10 + fVar7 * fVar11) * _LC2 + fVar5 * fVar7 +
                     fVar11 * fVar10 * _LC4));
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8," (",2);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>
                     (((*(double *)param_3 /
                       (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                                fVar8 * fVar12 * _LC4 +
                                (fVar7 * fVar9 + fVar6 * fVar13) * _UNK_0010dcd4 + fVar7 * fVar6 +
                                fVar9 * fVar13 * _UNK_0010dce4 +
                               (fVar5 * fVar10 + fVar7 * fVar11) * _UNK_0010dcd8 + fVar5 * fVar7 +
                               fVar10 * fVar11 * _UNK_0010dce8)) * __LC7) / param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 7;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(dVar4 / __LC10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," MB ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"(",1);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 7;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>((dVar4 * __LC7) / (double)in_RCX);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#nodes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," (",2);
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 2;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(((double)*(ulong *)(param_3 + 0x10) / dVar4) * __LC7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"% filled), ",0xb);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes/prim = ",0xe);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 7;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  std::ostream::_M_insert<double>(dVar4 / (double)*(ulong *)(in_RDX + 0x1f0));
  *(undefined8 *)(param_1 + 8) = 0;
  *(BVHN **)param_1 = param_1 + 0x10;
  param_1[0x10] = (BVHN)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)param_1,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = pcVar1;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar1 + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNode_t<embree::NodeRefPtr<4>, 4>
   >::toString[abi:cxx11](embree::BVHN<4>*, double, unsigned long) const */

BVHN * embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNode_t<embree::NodeRefPtr<4>,4>>::
       toString_abi_cxx11_(BVHN *param_1,double param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ostream *poVar3;
  ulong uVar4;
  ulong in_RCX;
  long in_RDX;
  long in_FS_OFFSET;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar2 = _vtable;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_1b8[0] = _vtable;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"sah = ",6);
  fVar12 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar13 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar14 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar6 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar7 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar8 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar11 = fVar14 - fVar8;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  fVar13 = fVar13 - fVar7;
  fVar14 = fVar14 - fVar8;
  fVar12 = fVar12 - fVar6;
  std::ostream::_M_insert<double>
            (*(double *)param_3 /
             (double)((fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                      fVar13 * fVar9 * _LC4 +
                      (fVar8 * fVar10 + fVar7 * fVar14) * _LC2 + fVar8 * fVar7 +
                      fVar14 * fVar10 * _LC4 +
                     (fVar6 * fVar11 + fVar8 * fVar12) * _LC2 + fVar6 * fVar8 +
                     fVar12 * fVar11 * _LC4));
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8," (",2);
  fVar12 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar13 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar14 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar6 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar7 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar8 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar11 = fVar14 - fVar8;
  fVar13 = fVar13 - fVar7;
  fVar14 = fVar14 - fVar8;
  fVar12 = fVar12 - fVar6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar3 = std::ostream::_M_insert<double>
                     (((*(double *)param_3 /
                       (double)((fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                                fVar9 * fVar13 * _LC4 +
                                (fVar8 * fVar10 + fVar7 * fVar14) * _UNK_0010dcd4 + fVar8 * fVar7 +
                                fVar10 * fVar14 * _UNK_0010dce4 +
                               (fVar6 * fVar11 + fVar8 * fVar12) * _UNK_0010dcd8 + fVar6 * fVar8 +
                               fVar11 * fVar12 * _UNK_0010dce8)) * __LC7) / param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  lVar1 = *(long *)(param_3 + 8);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar4 = lVar1 * 0xe0;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  poVar3 = std::ostream::_M_insert<double>(dVar5 / __LC10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3," MB ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"(",1);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  lVar1 = *(long *)(param_3 + 8);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar4 = lVar1 * 0xe0;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  poVar3 = std::ostream::_M_insert<double>((dVar5 * __LC7) / (double)in_RCX);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#nodes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3," (",2);
  *(undefined8 *)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 8) = 2;
  uVar4 = *(long *)(param_3 + 8) << 2;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  poVar3 = std::ostream::_M_insert<double>(((double)*(ulong *)(param_3 + 0x10) / dVar5) * __LC7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,"% filled), ",0xb);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes/prim = ",0xe);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  lVar1 = *(long *)(param_3 + 8);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar4 = lVar1 * 0xe0;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  std::ostream::_M_insert<double>(dVar5 / (double)*(ulong *)(in_RDX + 0x1f0));
  *(undefined8 *)(param_1 + 8) = 0;
  *(BVHN **)param_1 = param_1 + 0x10;
  param_1[0x10] = (BVHN)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)param_1,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = pcVar2;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar2 + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>
   >::toString[abi:cxx11](embree::BVHN<4>*, double, unsigned long) const */

BVHN * embree::BVHNStatistics<4>::Statistics::
       NodeStat<embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                 (BVHN *param_1,double param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ostream *poVar3;
  ulong uVar4;
  ulong in_RCX;
  long in_RDX;
  long in_FS_OFFSET;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar2 = _vtable;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_1b8[0] = _vtable;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"sah = ",6);
  fVar12 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar13 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar14 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar6 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar7 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar8 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar11 = fVar14 - fVar8;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  fVar13 = fVar13 - fVar7;
  fVar14 = fVar14 - fVar8;
  fVar12 = fVar12 - fVar6;
  std::ostream::_M_insert<double>
            (*(double *)param_3 /
             (double)((fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                      fVar13 * fVar9 * _LC4 +
                      (fVar8 * fVar10 + fVar7 * fVar14) * _LC2 + fVar8 * fVar7 +
                      fVar14 * fVar10 * _LC4 +
                     (fVar6 * fVar11 + fVar8 * fVar12) * _LC2 + fVar6 * fVar8 +
                     fVar12 * fVar11 * _LC4));
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8," (",2);
  fVar12 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar13 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar14 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar6 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar7 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar8 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar11 = fVar14 - fVar8;
  fVar13 = fVar13 - fVar7;
  fVar14 = fVar14 - fVar8;
  fVar12 = fVar12 - fVar6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar3 = std::ostream::_M_insert<double>
                     (((*(double *)param_3 /
                       (double)((fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                                fVar9 * fVar13 * _LC4 +
                                (fVar8 * fVar10 + fVar7 * fVar14) * _UNK_0010dcd4 + fVar8 * fVar7 +
                                fVar10 * fVar14 * _UNK_0010dce4 +
                               (fVar6 * fVar11 + fVar8 * fVar12) * _UNK_0010dcd8 + fVar6 * fVar8 +
                               fVar11 * fVar12 * _UNK_0010dce8)) * __LC7) / param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  lVar1 = *(long *)(param_3 + 8);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar4 = lVar1 * 0xe0;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  poVar3 = std::ostream::_M_insert<double>(dVar5 / __LC10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3," MB ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"(",1);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  lVar1 = *(long *)(param_3 + 8);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar4 = lVar1 * 0xe0;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  poVar3 = std::ostream::_M_insert<double>((dVar5 * __LC7) / (double)in_RCX);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#nodes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3," (",2);
  *(undefined8 *)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 8) = 2;
  uVar4 = *(long *)(param_3 + 8) << 2;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  poVar3 = std::ostream::_M_insert<double>(((double)*(ulong *)(param_3 + 0x10) / dVar5) * __LC7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,"% filled), ",0xb);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes/prim = ",0xe);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  lVar1 = *(long *)(param_3 + 8);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar4 = lVar1 * 0xe0;
  if ((long)uVar4 < 0) {
    dVar5 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
  }
  else {
    dVar5 = (double)(long)uVar4;
  }
  std::ostream::_M_insert<double>(dVar5 / (double)*(ulong *)(in_RDX + 0x1f0));
  *(undefined8 *)(param_1 + 8) = 0;
  *(BVHN **)param_1 = param_1 + 0x10;
  param_1[0x10] = (BVHN)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)param_1,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = pcVar2;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar2 + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>
   >::toString[abi:cxx11](embree::BVHN<4>*, double, unsigned long) const */

BVHN * embree::BVHNStatistics<4>::Statistics::
       NodeStat<embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                 (BVHN *param_1,double param_2,ulong param_3)

{
  code *pcVar1;
  ostream *poVar2;
  ulong uVar3;
  ulong in_RCX;
  long in_RDX;
  long in_FS_OFFSET;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar1 = _vtable;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_1b8[0] = _vtable;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"sah = ",6);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  std::ostream::_M_insert<double>
            (*(double *)param_3 /
             (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                      fVar12 * fVar8 * _LC4 +
                      (fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                      fVar13 * fVar9 * _LC4 +
                     (fVar5 * fVar10 + fVar7 * fVar11) * _LC2 + fVar5 * fVar7 +
                     fVar11 * fVar10 * _LC4));
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8," (",2);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>
                     (((*(double *)param_3 /
                       (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                                fVar8 * fVar12 * _LC4 +
                                (fVar7 * fVar9 + fVar6 * fVar13) * _UNK_0010dcd4 + fVar7 * fVar6 +
                                fVar9 * fVar13 * _UNK_0010dce4 +
                               (fVar5 * fVar10 + fVar7 * fVar11) * _UNK_0010dcd8 + fVar5 * fVar7 +
                               fVar10 * fVar11 * _UNK_0010dce8)) * __LC7) / param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 8;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(dVar4 / __LC10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," MB ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"(",1);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 8;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>((dVar4 * __LC7) / (double)in_RCX);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#nodes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," (",2);
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 2;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(((double)*(ulong *)(param_3 + 0x10) / dVar4) * __LC7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"% filled), ",0xb);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes/prim = ",0xe);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 8;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  std::ostream::_M_insert<double>(dVar4 / (double)*(ulong *)(in_RDX + 0x1f0));
  *(undefined8 *)(param_1 + 8) = 0;
  *(BVHN **)param_1 = param_1 + 0x10;
  param_1[0x10] = (BVHN)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)param_1,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = pcVar1;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar1 + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNodeMB_t<embree::NodeRefPtr<4>, 4>
   >::toString[abi:cxx11](embree::BVHN<4>*, double, unsigned long) const */

BVHN * embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNodeMB_t<embree::NodeRefPtr<4>,4>>
       ::toString_abi_cxx11_(BVHN *param_1,double param_2,ulong param_3)

{
  code *pcVar1;
  ostream *poVar2;
  ulong uVar3;
  ulong in_RCX;
  long in_RDX;
  long in_FS_OFFSET;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar1 = _vtable;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_1b8[0] = _vtable;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"sah = ",6);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  std::ostream::_M_insert<double>
            (*(double *)param_3 /
             (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                      fVar12 * fVar8 * _LC4 +
                      (fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                      fVar13 * fVar9 * _LC4 +
                     (fVar5 * fVar10 + fVar7 * fVar11) * _LC2 + fVar5 * fVar7 +
                     fVar11 * fVar10 * _LC4));
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8," (",2);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>
                     (((*(double *)param_3 /
                       (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                                fVar8 * fVar12 * _LC4 +
                                (fVar7 * fVar9 + fVar6 * fVar13) * _UNK_0010dcd4 + fVar7 * fVar6 +
                                fVar9 * fVar13 * _UNK_0010dce4 +
                               (fVar5 * fVar10 + fVar7 * fVar11) * _UNK_0010dcd8 + fVar5 * fVar7 +
                               fVar10 * fVar11 * _UNK_0010dce8)) * __LC7) / param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) * 0x140;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(dVar4 / __LC10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," MB ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"(",1);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) * 0x140;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>((dVar4 * __LC7) / (double)in_RCX);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#nodes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," (",2);
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 2;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(((double)*(ulong *)(param_3 + 0x10) / dVar4) * __LC7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"% filled), ",0xb);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes/prim = ",0xe);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) * 0x140;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  std::ostream::_M_insert<double>(dVar4 / (double)*(ulong *)(in_RDX + 0x1f0));
  *(undefined8 *)(param_1 + 8) = 0;
  *(BVHN **)param_1 = param_1 + 0x10;
  param_1[0x10] = (BVHN)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)param_1,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = pcVar1;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar1 + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::Statistics::NodeStat<embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>
   >::toString[abi:cxx11](embree::BVHN<4>*, double, unsigned long) const */

BVHN * embree::BVHNStatistics<4>::Statistics::
       NodeStat<embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                 (BVHN *param_1,double param_2,ulong param_3)

{
  code *pcVar1;
  ostream *poVar2;
  ulong uVar3;
  ulong in_RCX;
  long in_RDX;
  long in_FS_OFFSET;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  pcVar1 = _vtable;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  local_1b8[0] = _vtable;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _init;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  local_1b8[2] = (code *)0x0;
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"sah = ",6);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  std::ostream::_M_insert<double>
            (*(double *)param_3 /
             (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                      fVar12 * fVar8 * _LC4 +
                      (fVar7 * fVar9 + fVar6 * fVar13) * _LC2 + fVar7 * fVar6 +
                      fVar13 * fVar9 * _LC4 +
                     (fVar5 * fVar10 + fVar7 * fVar11) * _LC2 + fVar5 * fVar7 +
                     fVar11 * fVar10 * _LC4));
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8," (",2);
  fVar11 = *(float *)(in_RDX + 0x40) - *(float *)(in_RDX + 0x30);
  fVar12 = *(float *)(in_RDX + 0x44) - *(float *)(in_RDX + 0x34);
  fVar13 = *(float *)(in_RDX + 0x48) - *(float *)(in_RDX + 0x38);
  fVar5 = *(float *)(in_RDX + 0x20) - *(float *)(in_RDX + 0x10);
  fVar6 = *(float *)(in_RDX + 0x24) - *(float *)(in_RDX + 0x14);
  fVar7 = *(float *)(in_RDX + 0x28) - *(float *)(in_RDX + 0x18);
  fVar8 = fVar11 - fVar5;
  fVar9 = fVar12 - fVar6;
  fVar10 = fVar13 - fVar7;
  fVar12 = fVar12 - fVar6;
  fVar13 = fVar13 - fVar7;
  fVar11 = fVar11 - fVar5;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  poVar2 = std::ostream::_M_insert<double>
                     (((*(double *)param_3 /
                       (double)((fVar6 * fVar8 + fVar5 * fVar12) * _LC2 + fVar6 * fVar5 +
                                fVar8 * fVar12 * _LC4 +
                                (fVar7 * fVar9 + fVar6 * fVar13) * _UNK_0010dcd4 + fVar7 * fVar6 +
                                fVar9 * fVar13 * _UNK_0010dce4 +
                               (fVar5 * fVar10 + fVar7 * fVar11) * _UNK_0010dcd8 + fVar5 * fVar7 +
                               fVar10 * fVar11 * _UNK_0010dce8)) * __LC7) / param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) * 0x50;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(dVar4 / __LC10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," MB ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"(",1);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) * 0x50;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>((dVar4 * __LC7) / (double)in_RCX);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"%), ",4);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#nodes = ",9);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  poVar2 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," (",2);
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) << 2;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  poVar2 = std::ostream::_M_insert<double>(((double)*(ulong *)(param_3 + 0x10) / dVar4) * __LC7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"% filled), ",0xb);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#bytes/prim = ",0xe);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 6;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 2;
  uVar3 = *(long *)(param_3 + 8) * 0x50;
  if ((long)uVar3 < 0) {
    dVar4 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar4 = (double)(long)uVar3;
  }
  std::ostream::_M_insert<double>(dVar4 / (double)*(ulong *)(in_RDX + 0x1f0));
  *(undefined8 *)(param_1 + 8) = 0;
  *(BVHN **)param_1 = param_1 + 0x10;
  param_1[0x10] = (BVHN)0x0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)param_1,0,(char *)0x0,local_190);
  }
  local_1b8[0] = (code *)&std::__cxx11::stringbuf::vtable;
  local_148[0] = operator_delete;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  local_1b8[0] = pcVar1;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar1 + -0x18)) = _init;
  local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHNStatistics<4>::str[abi:cxx11]() */

string * embree::BVHNStatistics<4>::str_abi_cxx11_(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ostream *poVar10;
  ulong uVar11;
  ulong *puVar12;
  long *in_RSI;
  string *in_RDI;
  double dVar13;
  long in_FS_OFFSET;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long *local_378;
  long local_370;
  long local_368 [2];
  char *local_358;
  long local_350;
  char local_348;
  undefined7 uStack_347;
  long *local_338;
  code *local_330 [4];
  ulong local_310;
  long local_308;
  locale local_2f8 [16];
  long *local_2e8;
  long local_2d8 [2];
  code *local_2c8 [3];
  uint local_2b0;
  long *local_1b8;
  code *local_1b0;
  long local_1a8 [4];
  long local_188;
  locale local_178 [16];
  long *local_168;
  long local_158 [2];
  code *local_148 [3];
  uint local_130;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_338);
  local_2b0 = local_2b0 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_338,"  primitives = ",0xf);
  poVar10 = std::ostream::_M_insert<unsigned_long>((ulong)&local_338);
  std::__ostream_insert<char,std::char_traits<char>>(poVar10,", vertices = ",0xd);
  poVar10 = std::ostream::_M_insert<unsigned_long>((ulong)poVar10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar10,", depth = ",10);
  poVar10 = std::ostream::_M_insert<unsigned_long>((ulong)poVar10);
  plVar1 = *(long **)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar10);
    std::ostream::flush();
    lVar2 = in_RSI[0x11];
    lVar3 = in_RSI[0x1a];
    lVar4 = in_RSI[0x17];
    lVar5 = in_RSI[0x14];
    lVar6 = in_RSI[0x1d];
    lVar7 = in_RSI[7];
    lVar8 = in_RSI[0x20];
    dVar14 = (double)Statistics::sah((Statistics *)(in_RSI + 1),(BVHN *)*in_RSI);
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&local_338,"  total            : sah = ",0x1b);
    *(undefined8 *)((long)local_330 + local_338[-3] + 8) = 7;
    *(undefined8 *)((long)local_330 + local_338[-3]) = 3;
    poVar10 = std::ostream::_M_insert<double>(dVar14);
    std::__ostream_insert<char,std::char_traits<char>>(poVar10," (100.00%), ",0xc);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_338,"#bytes = ",9);
    *(undefined8 *)((long)local_330 + local_338[-3] + 8) = 7;
    *(undefined8 *)((long)local_330 + local_338[-3]) = 2;
    dVar13 = (double)(ulong)(lVar2 * 0x80 + lVar3 * 0x100 + lVar7 + lVar6 * 0x140 + lVar8 * 0x50 +
                            (lVar4 + lVar5) * 0xe0);
    poVar10 = std::ostream::_M_insert<double>(dVar13 / __LC10);
    std::__ostream_insert<char,std::char_traits<char>>(poVar10," MB (100.00%), ",0xf);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_338,"#nodes = ",9);
    *(undefined8 *)((long)local_330 + local_338[-3] + 8) = 7;
    poVar10 = std::ostream::_M_insert<unsigned_long>((ulong)&local_338);
    std::__ostream_insert<char,std::char_traits<char>>(poVar10," (",2);
    *(undefined8 *)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0x10) = 6;
    *(undefined8 *)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 8) = 2;
    uVar11 = in_RSI[0x11] << 2;
    if ((long)uVar11 < 0) {
      dVar15 = (double)(uVar11 >> 1) + (double)(uVar11 >> 1);
    }
    else {
      dVar15 = (double)(long)uVar11;
    }
    uVar11 = in_RSI[0x14] << 2;
    if ((long)uVar11 < 0) {
      dVar16 = (double)(uVar11 >> 1) + (double)(uVar11 >> 1);
    }
    else {
      dVar16 = (double)(long)uVar11;
    }
    uVar11 = in_RSI[0x17] << 2;
    if ((long)uVar11 < 0) {
      dVar17 = (double)(uVar11 >> 1) + (double)(uVar11 >> 1);
    }
    else {
      dVar17 = (double)(long)uVar11;
    }
    uVar11 = in_RSI[0x1a] << 2;
    if ((long)uVar11 < 0) {
      dVar18 = (double)(uVar11 >> 1) + (double)(uVar11 >> 1);
    }
    else {
      dVar18 = (double)(long)uVar11;
    }
    uVar11 = in_RSI[0x1d] << 2;
    if ((long)uVar11 < 0) {
      dVar19 = (double)(uVar11 >> 1) + (double)(uVar11 >> 1);
    }
    else {
      dVar19 = (double)(long)uVar11;
    }
    uVar11 = in_RSI[0x20] << 2;
    if ((long)uVar11 < 0) {
      dVar20 = (double)(uVar11 >> 1) + (double)(uVar11 >> 1);
    }
    else {
      dVar20 = (double)(long)uVar11;
    }
    poVar10 = std::ostream::_M_insert<double>
                        ((((double)(ulong)in_RSI[4] + (double)(ulong)in_RSI[0x12] +
                           (double)(ulong)in_RSI[0x15] + (double)(ulong)in_RSI[0x18] +
                           (double)(ulong)in_RSI[0x1b] + (double)(ulong)in_RSI[0x1e] +
                          (double)(ulong)in_RSI[0x21]) /
                         (dVar15 + (double)(ulong)in_RSI[5] + dVar16 + dVar17 + dVar18 + dVar19 +
                         dVar20)) * __LC7);
    std::__ostream_insert<char,std::char_traits<char>>(poVar10,"% filled), ",0xb);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_338,"#bytes/prim = ",0xe);
    *(undefined8 *)((long)local_330 + local_338[-3] + 8) = 6;
    *(undefined8 *)((long)local_330 + local_338[-3]) = 2;
    poVar10 = std::ostream::_M_insert<double>(dVar13 / (double)*(ulong *)(*in_RSI + 0x1f0));
    plVar1 = *(long **)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put((char)poVar10);
      std::ostream::flush();
      if (in_RSI[0x11] != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_338,"  getAABBNodes     : ",0x15);
        Statistics::NodeStat<embree::AABBNode_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                  ((BVHN *)&local_378,dVar14,(ulong)(in_RSI + 0x10));
        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_338,(char *)local_378,local_370);
        plVar1 = *(long **)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
        if (plVar1 == (long *)0x0) goto LAB_00106082;
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1,10);
          }
        }
        std::ostream::put((char)poVar10);
        std::ostream::flush();
        if (local_378 != local_368) {
          operator_delete(local_378,local_368[0] + 1);
        }
      }
      if (in_RSI[0x14] != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_338,"  ungetAABBNodes   : ",0x15);
        Statistics::NodeStat<embree::OBBNode_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                  ((BVHN *)&local_1b8,dVar14,(ulong)(in_RSI + 0x13));
        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_338,(char *)local_1b8,(long)local_1b0);
        std::endl<char,std::char_traits<char>>(poVar10);
        if (local_1b8 != local_1a8) {
          operator_delete(local_1b8,local_1a8[0] + 1);
        }
      }
      if (in_RSI[0x17] != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_338,"  getAABBNodesMB   : ",0x15);
        Statistics::NodeStat<embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                  ((BVHN *)&local_1b8,dVar14,(ulong)(in_RSI + 0x16));
        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_338,(char *)local_1b8,(long)local_1b0);
        std::endl<char,std::char_traits<char>>(poVar10);
        if (local_1b8 != local_1a8) {
          operator_delete(local_1b8,local_1a8[0] + 1);
        }
      }
      if (in_RSI[0x1a] != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_338,"  getAABBNodesMB4D : ",0x15);
        Statistics::NodeStat<embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                  ((BVHN *)&local_1b8,dVar14,(ulong)(in_RSI + 0x19));
        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_338,(char *)local_1b8,(long)local_1b0);
        std::endl<char,std::char_traits<char>>(poVar10);
        if (local_1b8 != local_1a8) {
          operator_delete(local_1b8,local_1a8[0] + 1);
        }
      }
      if (in_RSI[0x1d] == 0) {
LAB_001055ea:
        lVar2 = in_RSI[0x20];
      }
      else {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_338,"  ungetAABBNodesMB : ",0x15);
        Statistics::NodeStat<embree::OBBNodeMB_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                  ((BVHN *)&local_1b8,dVar14,(ulong)(in_RSI + 0x1c));
        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_338,(char *)local_1b8,(long)local_1b0);
        std::endl<char,std::char_traits<char>>(poVar10);
        if (local_1b8 == local_1a8) goto LAB_001055ea;
        operator_delete(local_1b8,local_1a8[0] + 1);
        lVar2 = in_RSI[0x20];
      }
      if (lVar2 != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_338,"  quantizedNodes   : ",0x15);
        Statistics::NodeStat<embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>>::toString_abi_cxx11_
                  ((BVHN *)&local_1b8,dVar14,(ulong)(in_RSI + 0x1f));
        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_338,(char *)local_1b8,(long)local_1b0);
        std::endl<char,std::char_traits<char>>(poVar10);
        if (local_1b8 != local_1a8) {
          operator_delete(local_1b8,local_1a8[0] + 1);
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_338,"  leaves           : ",0x15);
      Statistics::LeafStat::toString_abi_cxx11_((BVHN *)&local_1b8,dVar14,(ulong)(in_RSI + 2));
      poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                          ((ostream *)&local_338,(char *)local_1b8,(long)local_1b0);
      plVar1 = *(long **)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
      if (plVar1 != (long *)0x0) {
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1,10);
          }
        }
        std::ostream::put((char)poVar10);
        std::ostream::flush();
        if (local_1b8 != local_1a8) {
          operator_delete(local_1b8,local_1a8[0] + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_338,"    histogram      : ",0x15);
        puVar12 = (ulong *)(in_RSI + 8);
        std::__cxx11::ostringstream::ostringstream((ostringstream *)&local_1b8);
        local_130 = local_130 & 0xfffffefb | 4;
        do {
          *(undefined8 *)((long)local_1a8 + local_1b8[-3]) = 6;
          *(undefined8 *)((long)local_1a8 + local_1b8[-3] + -8) = 2;
          uVar11 = *puVar12;
          puVar12 = puVar12 + 1;
          poVar10 = std::ostream::_M_insert<double>
                              ((double)(((float)uVar11 * __LC16) / (float)(ulong)in_RSI[3]));
          std::__ostream_insert<char,std::char_traits<char>>(poVar10,"% ",2);
        } while (puVar12 != (ulong *)(in_RSI + 0x10));
        local_348 = '\0';
        local_350 = 0;
        local_358 = &local_348;
        if (local_188 == 0) {
          std::__cxx11::string::_M_assign((string *)&local_358);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)&local_358,0,(char *)0x0,local_1a8[3]);
        }
        local_1b0 = std::ostream::_M_insert<double>;
        local_1b8 = (long *)&std::__cxx11::stringbuf::vtable;
        local_148[0] = operator_delete;
        if (local_168 != local_158) {
          operator_delete(local_168,local_158[0] + 1);
        }
        local_1b0 = (code *)&std::__cxx11::stringbuf::vtable;
        std::locale::~locale(local_178);
        plVar9 = _vtable;
        local_1b8 = _vtable;
        *(undefined8 *)((long)&local_1b8 + _vtable[-3]) = _init;
        local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
        std::ios_base::~ios_base((ios_base *)local_148);
        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_338,local_358,local_350);
        plVar1 = *(long **)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
        if (plVar1 != (long *)0x0) {
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))();
            }
          }
          std::ostream::put((char)poVar10);
          std::ostream::flush();
          if (local_358 != &local_348) {
            operator_delete(local_358,CONCAT71(uStack_347,local_348) + 1);
          }
          *(undefined8 *)(in_RDI + 8) = 0;
          *(string **)in_RDI = in_RDI + 0x10;
          in_RDI[0x10] = (string)0x0;
          if (local_308 == 0) {
            std::__cxx11::string::_M_assign(in_RDI);
          }
          else {
            std::__cxx11::string::_M_replace((ulong)in_RDI,0,(char *)0x0,local_310);
          }
          local_338 = (long *)&std::__cxx11::stringbuf::vtable;
          local_330[0] = std::ostream::_M_insert<double>;
          local_2c8[0] = operator_delete;
          if (local_2e8 != local_2d8) {
            operator_delete(local_2e8,local_2d8[0] + 1);
          }
          local_330[0] = (code *)&std::__cxx11::stringbuf::vtable;
          std::locale::~locale(local_2f8);
          local_338 = plVar9;
          *(undefined8 *)((long)&local_338 + plVar9[-3]) = _init;
          local_2c8[0] = (code *)&std::__cxx11::ostringstream::vtable;
          std::ios_base::~ios_base((ios_base *)local_2c8);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return in_RDI;
          }
          goto LAB_00106087;
        }
      }
    }
  }
LAB_00106082:
  std::__throw_bad_cast();
LAB_00106087:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TEMPNAMEPLACEHOLDERVALUE(embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::Statistics const&) */

void __thiscall embree::operator+(embree *this,Statistics *param_1,Statistics *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  ulong uVar59;
  
  lVar15 = *(long *)(param_2 + 0x100);
  lVar16 = *(long *)(param_2 + 0xf8);
  lVar17 = *(long *)(param_1 + 0x100);
  lVar18 = *(long *)(param_1 + 0xf8);
  lVar19 = *(long *)(param_2 + 0xe8);
  lVar20 = *(long *)(param_2 + 0xe0);
  lVar21 = *(long *)(param_1 + 0xe8);
  lVar22 = *(long *)(param_1 + 0xe0);
  lVar23 = *(long *)(param_2 + 0xd0);
  lVar24 = *(long *)(param_1 + 0xd0);
  dVar1 = *(double *)(param_1 + 0xf0);
  dVar2 = *(double *)(param_2 + 0xf0);
  dVar3 = *(double *)(param_1 + 0xd8);
  lVar25 = *(long *)(param_2 + 200);
  dVar4 = *(double *)(param_2 + 0xd8);
  lVar26 = *(long *)(param_1 + 200);
  lVar27 = *(long *)(param_2 + 0xb8);
  lVar28 = *(long *)(param_2 + 0xb0);
  lVar29 = *(long *)(param_1 + 0xb8);
  lVar30 = *(long *)(param_1 + 0xb0);
  lVar31 = *(long *)(param_2 + 0xa0);
  lVar32 = *(long *)(param_2 + 0x30);
  lVar33 = *(long *)(param_1 + 0xa0);
  lVar34 = *(long *)(param_1 + 0x30);
  lVar35 = *(long *)(param_2 + 0x98);
  lVar36 = *(long *)(param_2 + 0x88);
  lVar37 = *(long *)(param_1 + 0x98);
  lVar38 = *(long *)(param_1 + 0x88);
  lVar39 = *(long *)(param_2 + 0x80);
  lVar40 = *(long *)(param_1 + 0x80);
  dVar5 = *(double *)(param_1 + 0xc0);
  dVar6 = *(double *)(param_1 + 0x78);
  dVar7 = *(double *)(param_2 + 0xc0);
  dVar8 = *(double *)(param_2 + 0x78);
  dVar9 = *(double *)(param_1 + 0xa8);
  dVar10 = *(double *)(param_1 + 0x90);
  dVar11 = *(double *)(param_2 + 0xa8);
  dVar12 = *(double *)(param_2 + 0x90);
  lVar41 = *(long *)(param_2 + 0x28);
  lVar42 = *(long *)(param_1 + 0x28);
  lVar43 = *(long *)(param_2 + 0x18);
  lVar44 = *(long *)(param_1 + 0x18);
  lVar45 = *(long *)(param_2 + 0x10);
  *(long *)(this + 0x20) = *(long *)(param_2 + 0x20) + *(long *)(param_1 + 0x20);
  lVar46 = *(long *)(param_1 + 0x10);
  dVar13 = *(double *)(param_1 + 8);
  *(long *)(this + 0x18) = lVar43 + lVar44;
  dVar14 = *(double *)(param_2 + 8);
  lVar43 = *(long *)(param_2 + 0x38);
  *(long *)(this + 0x10) = lVar45 + lVar46;
  lVar44 = *(long *)(param_1 + 0x38);
  lVar45 = *(long *)(param_2 + 0x40);
  lVar46 = *(long *)(param_2 + 0x48);
  lVar47 = *(long *)(param_1 + 0x40);
  lVar48 = *(long *)(param_1 + 0x48);
  lVar49 = *(long *)(param_2 + 0x50);
  *(double *)(this + 8) = dVar13 + dVar14;
  lVar50 = *(long *)(param_1 + 0x50);
  lVar51 = *(long *)(param_2 + 0x58);
  lVar52 = *(long *)(param_2 + 0x60);
  lVar53 = *(long *)(param_1 + 0x58);
  lVar54 = *(long *)(param_1 + 0x60);
  lVar55 = *(long *)(param_2 + 0x68);
  lVar56 = *(long *)(param_2 + 0x70);
  lVar57 = *(long *)(param_1 + 0x68);
  lVar58 = *(long *)(param_1 + 0x70);
  uVar59 = *(ulong *)param_2;
  if (*(ulong *)param_2 < *(ulong *)param_1) {
    uVar59 = *(ulong *)param_1;
  }
  *(ulong *)this = uVar59;
  *(long *)(this + 0x28) = lVar41 + lVar42;
  *(long *)(this + 0x38) = lVar43 + lVar44;
  *(long *)(this + 0x48) = lVar46 + lVar48;
  *(long *)(this + 0x50) = lVar49 + lVar50;
  *(long *)(this + 0x58) = lVar51 + lVar53;
  *(long *)(this + 0x60) = lVar52 + lVar54;
  *(long *)(this + 0x40) = lVar45 + lVar47;
  *(long *)(this + 0x68) = lVar55 + lVar57;
  *(long *)(this + 0x70) = lVar56 + lVar58;
  *(long *)(this + 0x80) = lVar39 + lVar40;
  *(long *)(this + 0x88) = lVar36 + lVar38;
  *(long *)(this + 0x98) = lVar35 + lVar37;
  *(long *)(this + 0xa0) = lVar31 + lVar33;
  *(long *)(this + 0xb0) = lVar28 + lVar30;
  *(long *)(this + 0x30) = lVar32 + lVar34;
  *(long *)(this + 0xb8) = lVar27 + lVar29;
  *(long *)(this + 200) = lVar25 + lVar26;
  *(long *)(this + 0xd0) = lVar23 + lVar24;
  *(double *)(this + 0x78) = dVar6 + dVar8;
  *(double *)(this + 0x90) = dVar10 + dVar12;
  *(double *)(this + 0xa8) = dVar9 + dVar11;
  *(double *)(this + 0xc0) = dVar5 + dVar7;
  *(double *)(this + 0xd8) = dVar3 + dVar4;
  *(long *)(this + 0xe0) = lVar20 + lVar22;
  *(double *)(this + 0xf0) = dVar1 + dVar2;
  *(long *)(this + 0xe8) = lVar19 + lVar21;
  *(long *)(this + 0xf8) = lVar16 + lVar18;
  *(long *)(this + 0x100) = lVar15 + lVar17;
  return;
}



/* embree::BVHNStatistics<4>::Statistics embree::parallel_reduce_internal<int,
   embree::BVHNStatistics<4>::Statistics, embree::parallel_reduce<int,
   embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)) [clone .isra.0] */

Statistics *
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_1_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
          (int param_1,int param_2,int param_3,int param_4,Statistics *param_5,
          _lambda_embree__range<int>__1_ *param_6,
          _func_Statistics_Statistics_ptr_Statistics_ptr *param_7)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  Statistics *pSVar6;
  undefined4 in_register_0000003c;
  Statistics *pSVar7;
  Statistics *pSVar8;
  long in_FS_OFFSET;
  byte bVar9;
  Statistics local_2220 [276];
  int local_210c;
  int local_2108;
  int local_2104;
  long local_2100;
  long local_20f8;
  int *local_20f0;
  int *local_20e8;
  int *local_20e0;
  undefined8 ***local_20d8;
  _lambda_embree__range<int>__1_ *local_20d0;
  undefined8 **local_20c0 [1023];
  undefined8 ***local_c8;
  long local_c0;
  long local_48;
  
  pSVar7 = (Statistics *)CONCAT44(in_register_0000003c,param_1);
  bVar9 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  iVar1 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (iVar1 < local_2104) {
    local_2104 = iVar1;
  }
  local_c0 = (long)local_2104;
  ppppuVar2 = (undefined8 ****)local_20c0;
  do {
    *ppppuVar2 = (undefined8 ***)0x0;
    ppppuVar3 = ppppuVar2 + 0x21;
    ppppuVar2[1] = (undefined8 ***)0x0;
    ppppuVar2[2] = (undefined8 ***)0x0;
    ppppuVar2[3] = (undefined8 ***)0x0;
    ppppuVar2[4] = (undefined8 ***)0x0;
    ppppuVar2[5] = (undefined8 ***)0x0;
    ppppuVar2[6] = (undefined8 ***)0x0;
    ppppuVar2[7] = (undefined8 ***)0x0;
    ppppuVar2[8] = (undefined8 ***)0x0;
    ppppuVar2[9] = (undefined8 ***)0x0;
    ppppuVar2[10] = (undefined8 ***)0x0;
    ppppuVar2[0xb] = (undefined8 ***)0x0;
    ppppuVar2[0xc] = (undefined8 ***)0x0;
    ppppuVar2[0xd] = (undefined8 ***)0x0;
    ppppuVar2[0xe] = (undefined8 ***)0x0;
    ppppuVar2[0xf] = (undefined8 ***)0x0;
    ppppuVar2[0x10] = (undefined8 ***)0x0;
    ppppuVar2[0x11] = (undefined8 ***)0x0;
    ppppuVar2[0x12] = (undefined8 ***)0x0;
    ppppuVar2[0x13] = (undefined8 ***)0x0;
    ppppuVar2[0x14] = (undefined8 ***)0x0;
    ppppuVar2[0x15] = (undefined8 ***)0x0;
    ppppuVar2[0x16] = (undefined8 ***)0x0;
    ppppuVar2[0x17] = (undefined8 ***)0x0;
    ppppuVar2[0x18] = (undefined8 ***)0x0;
    ppppuVar2[0x19] = (undefined8 ***)0x0;
    ppppuVar2[0x1a] = (undefined8 ***)0x0;
    ppppuVar2[0x1b] = (undefined8 ***)0x0;
    ppppuVar2[0x1c] = (undefined8 ***)0x0;
    ppppuVar2[0x1d] = (undefined8 ***)0x0;
    ppppuVar2[0x1e] = (undefined8 ***)0x0;
    ppppuVar2[0x1f] = (undefined8 ***)0x0;
    ppppuVar2[0x20] = (undefined8 ***)0x0;
    ppppuVar2 = ppppuVar3;
  } while (ppppuVar3 != &local_c8);
  local_c8 = local_20c0;
  if (0x2000 < (ulong)(local_c0 * 0x108)) {
    local_c8 = (undefined8 ***)embree::alignedMalloc(local_c0 * 0x108,0x40);
  }
  local_20f0 = &local_2108;
  local_20e8 = &local_210c;
  local_20e0 = &local_2104;
  local_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2104 == 0) {
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIiZNS_12parallel_forIiZNS_24parallel_reduce_internalIiNS_14BVHNStatisticsILi4EE10StatisticsEZNS_15parallel_reduceIiS6_ZNS5_10statisticsENS_10NodeRefPtrILi4EEEdNS_4BBoxIfEEEUliE_FS6_RKS6_SE_EEET0_T_SH_RKSG_RKT1_RKT2_EUlNS_5rangeIiEEE_SF_EESG_SH_SH_SH_SH_SJ_SM_SP_EUliE_EEvSH_SJ_EUlRKSR_E_EEvSH_SH_SH_SJ_PNS0_16TaskGroupContextE_isra_0
              (0,local_2104,1,&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_00106c5d;
    }
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
    if (0 < local_2104) {
      lVar4 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        (*param_7)(local_2220,pSVar7,(Statistics *)((long)local_c8 + lVar4));
        lVar4 = lVar4 + 0x108;
        pSVar6 = local_2220;
        pSVar8 = pSVar7;
        for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)pSVar8 = *(undefined8 *)pSVar6;
          pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
          pSVar8 = pSVar8 + ((ulong)bVar9 * -2 + 1) * 8;
        }
      } while (iVar1 < local_2104);
    }
  }
  if (local_c8 != local_20c0) {
    embree::alignedFree(local_c8);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar7;
  }
LAB_00106c5d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNStatistics<4>::Statistics embree::parallel_reduce_internal<int,
   embree::BVHNStatistics<4>::Statistics, embree::parallel_reduce<int,
   embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)) [clone .isra.0] */

Statistics *
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_2_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_2_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
          (int param_1,int param_2,int param_3,int param_4,Statistics *param_5,
          _lambda_embree__range<int>__1_ *param_6,
          _func_Statistics_Statistics_ptr_Statistics_ptr *param_7)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  Statistics *pSVar6;
  undefined4 in_register_0000003c;
  Statistics *pSVar7;
  Statistics *pSVar8;
  long in_FS_OFFSET;
  byte bVar9;
  Statistics local_2220 [276];
  int local_210c;
  int local_2108;
  int local_2104;
  long local_2100;
  long local_20f8;
  int *local_20f0;
  int *local_20e8;
  int *local_20e0;
  undefined8 ***local_20d8;
  _lambda_embree__range<int>__1_ *local_20d0;
  undefined8 **local_20c0 [1023];
  undefined8 ***local_c8;
  long local_c0;
  long local_48;
  
  pSVar7 = (Statistics *)CONCAT44(in_register_0000003c,param_1);
  bVar9 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  iVar1 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (iVar1 < local_2104) {
    local_2104 = iVar1;
  }
  local_c0 = (long)local_2104;
  ppppuVar2 = (undefined8 ****)local_20c0;
  do {
    *ppppuVar2 = (undefined8 ***)0x0;
    ppppuVar3 = ppppuVar2 + 0x21;
    ppppuVar2[1] = (undefined8 ***)0x0;
    ppppuVar2[2] = (undefined8 ***)0x0;
    ppppuVar2[3] = (undefined8 ***)0x0;
    ppppuVar2[4] = (undefined8 ***)0x0;
    ppppuVar2[5] = (undefined8 ***)0x0;
    ppppuVar2[6] = (undefined8 ***)0x0;
    ppppuVar2[7] = (undefined8 ***)0x0;
    ppppuVar2[8] = (undefined8 ***)0x0;
    ppppuVar2[9] = (undefined8 ***)0x0;
    ppppuVar2[10] = (undefined8 ***)0x0;
    ppppuVar2[0xb] = (undefined8 ***)0x0;
    ppppuVar2[0xc] = (undefined8 ***)0x0;
    ppppuVar2[0xd] = (undefined8 ***)0x0;
    ppppuVar2[0xe] = (undefined8 ***)0x0;
    ppppuVar2[0xf] = (undefined8 ***)0x0;
    ppppuVar2[0x10] = (undefined8 ***)0x0;
    ppppuVar2[0x11] = (undefined8 ***)0x0;
    ppppuVar2[0x12] = (undefined8 ***)0x0;
    ppppuVar2[0x13] = (undefined8 ***)0x0;
    ppppuVar2[0x14] = (undefined8 ***)0x0;
    ppppuVar2[0x15] = (undefined8 ***)0x0;
    ppppuVar2[0x16] = (undefined8 ***)0x0;
    ppppuVar2[0x17] = (undefined8 ***)0x0;
    ppppuVar2[0x18] = (undefined8 ***)0x0;
    ppppuVar2[0x19] = (undefined8 ***)0x0;
    ppppuVar2[0x1a] = (undefined8 ***)0x0;
    ppppuVar2[0x1b] = (undefined8 ***)0x0;
    ppppuVar2[0x1c] = (undefined8 ***)0x0;
    ppppuVar2[0x1d] = (undefined8 ***)0x0;
    ppppuVar2[0x1e] = (undefined8 ***)0x0;
    ppppuVar2[0x1f] = (undefined8 ***)0x0;
    ppppuVar2[0x20] = (undefined8 ***)0x0;
    ppppuVar2 = ppppuVar3;
  } while (ppppuVar3 != &local_c8);
  local_c8 = local_20c0;
  if (0x2000 < (ulong)(local_c0 * 0x108)) {
    local_c8 = (undefined8 ***)embree::alignedMalloc(local_c0 * 0x108,0x40);
  }
  local_20f0 = &local_2108;
  local_20e8 = &local_210c;
  local_20e0 = &local_2104;
  local_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2104 == 0) {
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIiZNS_12parallel_forIiZNS_24parallel_reduce_internalIiNS_14BVHNStatisticsILi4EE10StatisticsEZNS_15parallel_reduceIiS6_ZNS5_10statisticsENS_10NodeRefPtrILi4EEEdNS_4BBoxIfEEEUliE0_FS6_RKS6_SE_EEET0_T_SH_RKSG_RKT1_RKT2_EUlNS_5rangeIiEEE_SF_EESG_SH_SH_SH_SH_SJ_SM_SP_EUliE_EEvSH_SJ_EUlRKSR_E_EEvSH_SH_SH_SJ_PNS0_16TaskGroupContextE_isra_0
              (0,local_2104,1,&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_0010753d;
    }
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
    if (0 < local_2104) {
      lVar4 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        (*param_7)(local_2220,pSVar7,(Statistics *)((long)local_c8 + lVar4));
        lVar4 = lVar4 + 0x108;
        pSVar6 = local_2220;
        pSVar8 = pSVar7;
        for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)pSVar8 = *(undefined8 *)pSVar6;
          pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
          pSVar8 = pSVar8 + ((ulong)bVar9 * -2 + 1) * 8;
        }
      } while (iVar1 < local_2104);
    }
  }
  if (local_c8 != local_20c0) {
    embree::alignedFree(local_c8);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar7;
  }
LAB_0010753d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNStatistics<4>::Statistics embree::parallel_reduce_internal<int,
   embree::BVHNStatistics<4>::Statistics, embree::parallel_reduce<int,
   embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)) [clone .isra.0] */

Statistics *
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_3_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_3_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
          (int param_1,int param_2,int param_3,int param_4,Statistics *param_5,
          _lambda_embree__range<int>__1_ *param_6,
          _func_Statistics_Statistics_ptr_Statistics_ptr *param_7)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  Statistics *pSVar6;
  undefined4 in_register_0000003c;
  Statistics *pSVar7;
  Statistics *pSVar8;
  long in_FS_OFFSET;
  byte bVar9;
  Statistics local_2220 [276];
  int local_210c;
  int local_2108;
  int local_2104;
  long local_2100;
  long local_20f8;
  int *local_20f0;
  int *local_20e8;
  int *local_20e0;
  undefined8 ***local_20d8;
  _lambda_embree__range<int>__1_ *local_20d0;
  undefined8 **local_20c0 [1023];
  undefined8 ***local_c8;
  long local_c0;
  long local_48;
  
  pSVar7 = (Statistics *)CONCAT44(in_register_0000003c,param_1);
  bVar9 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  iVar1 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (iVar1 < local_2104) {
    local_2104 = iVar1;
  }
  local_c0 = (long)local_2104;
  ppppuVar2 = (undefined8 ****)local_20c0;
  do {
    *ppppuVar2 = (undefined8 ***)0x0;
    ppppuVar3 = ppppuVar2 + 0x21;
    ppppuVar2[1] = (undefined8 ***)0x0;
    ppppuVar2[2] = (undefined8 ***)0x0;
    ppppuVar2[3] = (undefined8 ***)0x0;
    ppppuVar2[4] = (undefined8 ***)0x0;
    ppppuVar2[5] = (undefined8 ***)0x0;
    ppppuVar2[6] = (undefined8 ***)0x0;
    ppppuVar2[7] = (undefined8 ***)0x0;
    ppppuVar2[8] = (undefined8 ***)0x0;
    ppppuVar2[9] = (undefined8 ***)0x0;
    ppppuVar2[10] = (undefined8 ***)0x0;
    ppppuVar2[0xb] = (undefined8 ***)0x0;
    ppppuVar2[0xc] = (undefined8 ***)0x0;
    ppppuVar2[0xd] = (undefined8 ***)0x0;
    ppppuVar2[0xe] = (undefined8 ***)0x0;
    ppppuVar2[0xf] = (undefined8 ***)0x0;
    ppppuVar2[0x10] = (undefined8 ***)0x0;
    ppppuVar2[0x11] = (undefined8 ***)0x0;
    ppppuVar2[0x12] = (undefined8 ***)0x0;
    ppppuVar2[0x13] = (undefined8 ***)0x0;
    ppppuVar2[0x14] = (undefined8 ***)0x0;
    ppppuVar2[0x15] = (undefined8 ***)0x0;
    ppppuVar2[0x16] = (undefined8 ***)0x0;
    ppppuVar2[0x17] = (undefined8 ***)0x0;
    ppppuVar2[0x18] = (undefined8 ***)0x0;
    ppppuVar2[0x19] = (undefined8 ***)0x0;
    ppppuVar2[0x1a] = (undefined8 ***)0x0;
    ppppuVar2[0x1b] = (undefined8 ***)0x0;
    ppppuVar2[0x1c] = (undefined8 ***)0x0;
    ppppuVar2[0x1d] = (undefined8 ***)0x0;
    ppppuVar2[0x1e] = (undefined8 ***)0x0;
    ppppuVar2[0x1f] = (undefined8 ***)0x0;
    ppppuVar2[0x20] = (undefined8 ***)0x0;
    ppppuVar2 = ppppuVar3;
  } while (ppppuVar3 != &local_c8);
  local_c8 = local_20c0;
  if (0x2000 < (ulong)(local_c0 * 0x108)) {
    local_c8 = (undefined8 ***)embree::alignedMalloc(local_c0 * 0x108,0x40);
  }
  local_20f0 = &local_2108;
  local_20e8 = &local_210c;
  local_20e0 = &local_2104;
  local_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2104 == 0) {
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIiZNS_12parallel_forIiZNS_24parallel_reduce_internalIiNS_14BVHNStatisticsILi4EE10StatisticsEZNS_15parallel_reduceIiS6_ZNS5_10statisticsENS_10NodeRefPtrILi4EEEdNS_4BBoxIfEEEUliE1_FS6_RKS6_SE_EEET0_T_SH_RKSG_RKT1_RKT2_EUlNS_5rangeIiEEE_SF_EESG_SH_SH_SH_SH_SJ_SM_SP_EUliE_EEvSH_SJ_EUlRKSR_E_EEvSH_SH_SH_SJ_PNS0_16TaskGroupContextE_isra_0
              (0,local_2104,1,&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_00107e1d;
    }
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
    if (0 < local_2104) {
      lVar4 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        (*param_7)(local_2220,pSVar7,(Statistics *)((long)local_c8 + lVar4));
        lVar4 = lVar4 + 0x108;
        pSVar6 = local_2220;
        pSVar8 = pSVar7;
        for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)pSVar8 = *(undefined8 *)pSVar6;
          pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
          pSVar8 = pSVar8 + ((ulong)bVar9 * -2 + 1) * 8;
        }
      } while (iVar1 < local_2104);
    }
  }
  if (local_c8 != local_20c0) {
    embree::alignedFree(local_c8);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar7;
  }
LAB_00107e1d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNStatistics<4>::Statistics embree::parallel_reduce_internal<int,
   embree::BVHNStatistics<4>::Statistics, embree::parallel_reduce<int,
   embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)) [clone .isra.0] */

Statistics *
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_4_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_4_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
          (int param_1,int param_2,int param_3,int param_4,Statistics *param_5,
          _lambda_embree__range<int>__1_ *param_6,
          _func_Statistics_Statistics_ptr_Statistics_ptr *param_7)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  Statistics *pSVar6;
  undefined4 in_register_0000003c;
  Statistics *pSVar7;
  Statistics *pSVar8;
  long in_FS_OFFSET;
  byte bVar9;
  Statistics local_2220 [276];
  int local_210c;
  int local_2108;
  int local_2104;
  long local_2100;
  long local_20f8;
  int *local_20f0;
  int *local_20e8;
  int *local_20e0;
  undefined8 ***local_20d8;
  _lambda_embree__range<int>__1_ *local_20d0;
  undefined8 **local_20c0 [1023];
  undefined8 ***local_c8;
  long local_c0;
  long local_48;
  
  pSVar7 = (Statistics *)CONCAT44(in_register_0000003c,param_1);
  bVar9 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  iVar1 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (iVar1 < local_2104) {
    local_2104 = iVar1;
  }
  local_c0 = (long)local_2104;
  ppppuVar2 = (undefined8 ****)local_20c0;
  do {
    *ppppuVar2 = (undefined8 ***)0x0;
    ppppuVar3 = ppppuVar2 + 0x21;
    ppppuVar2[1] = (undefined8 ***)0x0;
    ppppuVar2[2] = (undefined8 ***)0x0;
    ppppuVar2[3] = (undefined8 ***)0x0;
    ppppuVar2[4] = (undefined8 ***)0x0;
    ppppuVar2[5] = (undefined8 ***)0x0;
    ppppuVar2[6] = (undefined8 ***)0x0;
    ppppuVar2[7] = (undefined8 ***)0x0;
    ppppuVar2[8] = (undefined8 ***)0x0;
    ppppuVar2[9] = (undefined8 ***)0x0;
    ppppuVar2[10] = (undefined8 ***)0x0;
    ppppuVar2[0xb] = (undefined8 ***)0x0;
    ppppuVar2[0xc] = (undefined8 ***)0x0;
    ppppuVar2[0xd] = (undefined8 ***)0x0;
    ppppuVar2[0xe] = (undefined8 ***)0x0;
    ppppuVar2[0xf] = (undefined8 ***)0x0;
    ppppuVar2[0x10] = (undefined8 ***)0x0;
    ppppuVar2[0x11] = (undefined8 ***)0x0;
    ppppuVar2[0x12] = (undefined8 ***)0x0;
    ppppuVar2[0x13] = (undefined8 ***)0x0;
    ppppuVar2[0x14] = (undefined8 ***)0x0;
    ppppuVar2[0x15] = (undefined8 ***)0x0;
    ppppuVar2[0x16] = (undefined8 ***)0x0;
    ppppuVar2[0x17] = (undefined8 ***)0x0;
    ppppuVar2[0x18] = (undefined8 ***)0x0;
    ppppuVar2[0x19] = (undefined8 ***)0x0;
    ppppuVar2[0x1a] = (undefined8 ***)0x0;
    ppppuVar2[0x1b] = (undefined8 ***)0x0;
    ppppuVar2[0x1c] = (undefined8 ***)0x0;
    ppppuVar2[0x1d] = (undefined8 ***)0x0;
    ppppuVar2[0x1e] = (undefined8 ***)0x0;
    ppppuVar2[0x1f] = (undefined8 ***)0x0;
    ppppuVar2[0x20] = (undefined8 ***)0x0;
    ppppuVar2 = ppppuVar3;
  } while (ppppuVar3 != &local_c8);
  local_c8 = local_20c0;
  if (0x2000 < (ulong)(local_c0 * 0x108)) {
    local_c8 = (undefined8 ***)embree::alignedMalloc(local_c0 * 0x108,0x40);
  }
  local_20f0 = &local_2108;
  local_20e8 = &local_210c;
  local_20e0 = &local_2104;
  local_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2104 == 0) {
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIiZNS_12parallel_forIiZNS_24parallel_reduce_internalIiNS_14BVHNStatisticsILi4EE10StatisticsEZNS_15parallel_reduceIiS6_ZNS5_10statisticsENS_10NodeRefPtrILi4EEEdNS_4BBoxIfEEEUliE2_FS6_RKS6_SE_EEET0_T_SH_RKSG_RKT1_RKT2_EUlNS_5rangeIiEEE_SF_EESG_SH_SH_SH_SH_SJ_SM_SP_EUliE_EEvSH_SJ_EUlRKSR_E_EEvSH_SH_SH_SJ_PNS0_16TaskGroupContextE_isra_0
              (0,local_2104,1,&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_001086fd;
    }
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
    if (0 < local_2104) {
      lVar4 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        (*param_7)(local_2220,pSVar7,(Statistics *)((long)local_c8 + lVar4));
        lVar4 = lVar4 + 0x108;
        pSVar6 = local_2220;
        pSVar8 = pSVar7;
        for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)pSVar8 = *(undefined8 *)pSVar6;
          pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
          pSVar8 = pSVar8 + ((ulong)bVar9 * -2 + 1) * 8;
        }
      } while (iVar1 < local_2104);
    }
  }
  if (local_c8 != local_20c0) {
    embree::alignedFree(local_c8);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar7;
  }
LAB_001086fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNStatistics<4>::Statistics embree::parallel_reduce_internal<int,
   embree::BVHNStatistics<4>::Statistics, embree::parallel_reduce<int,
   embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)) [clone .isra.0] */

Statistics *
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_5_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_5_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
          (int param_1,int param_2,int param_3,int param_4,Statistics *param_5,
          _lambda_embree__range<int>__1_ *param_6,
          _func_Statistics_Statistics_ptr_Statistics_ptr *param_7)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  Statistics *pSVar6;
  undefined4 in_register_0000003c;
  Statistics *pSVar7;
  Statistics *pSVar8;
  long in_FS_OFFSET;
  byte bVar9;
  Statistics local_2220 [276];
  int local_210c;
  int local_2108;
  int local_2104;
  long local_2100;
  long local_20f8;
  int *local_20f0;
  int *local_20e8;
  int *local_20e0;
  undefined8 ***local_20d8;
  _lambda_embree__range<int>__1_ *local_20d0;
  undefined8 **local_20c0 [1023];
  undefined8 ***local_c8;
  long local_c0;
  long local_48;
  
  pSVar7 = (Statistics *)CONCAT44(in_register_0000003c,param_1);
  bVar9 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  iVar1 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (iVar1 < local_2104) {
    local_2104 = iVar1;
  }
  local_c0 = (long)local_2104;
  ppppuVar2 = (undefined8 ****)local_20c0;
  do {
    *ppppuVar2 = (undefined8 ***)0x0;
    ppppuVar3 = ppppuVar2 + 0x21;
    ppppuVar2[1] = (undefined8 ***)0x0;
    ppppuVar2[2] = (undefined8 ***)0x0;
    ppppuVar2[3] = (undefined8 ***)0x0;
    ppppuVar2[4] = (undefined8 ***)0x0;
    ppppuVar2[5] = (undefined8 ***)0x0;
    ppppuVar2[6] = (undefined8 ***)0x0;
    ppppuVar2[7] = (undefined8 ***)0x0;
    ppppuVar2[8] = (undefined8 ***)0x0;
    ppppuVar2[9] = (undefined8 ***)0x0;
    ppppuVar2[10] = (undefined8 ***)0x0;
    ppppuVar2[0xb] = (undefined8 ***)0x0;
    ppppuVar2[0xc] = (undefined8 ***)0x0;
    ppppuVar2[0xd] = (undefined8 ***)0x0;
    ppppuVar2[0xe] = (undefined8 ***)0x0;
    ppppuVar2[0xf] = (undefined8 ***)0x0;
    ppppuVar2[0x10] = (undefined8 ***)0x0;
    ppppuVar2[0x11] = (undefined8 ***)0x0;
    ppppuVar2[0x12] = (undefined8 ***)0x0;
    ppppuVar2[0x13] = (undefined8 ***)0x0;
    ppppuVar2[0x14] = (undefined8 ***)0x0;
    ppppuVar2[0x15] = (undefined8 ***)0x0;
    ppppuVar2[0x16] = (undefined8 ***)0x0;
    ppppuVar2[0x17] = (undefined8 ***)0x0;
    ppppuVar2[0x18] = (undefined8 ***)0x0;
    ppppuVar2[0x19] = (undefined8 ***)0x0;
    ppppuVar2[0x1a] = (undefined8 ***)0x0;
    ppppuVar2[0x1b] = (undefined8 ***)0x0;
    ppppuVar2[0x1c] = (undefined8 ***)0x0;
    ppppuVar2[0x1d] = (undefined8 ***)0x0;
    ppppuVar2[0x1e] = (undefined8 ***)0x0;
    ppppuVar2[0x1f] = (undefined8 ***)0x0;
    ppppuVar2[0x20] = (undefined8 ***)0x0;
    ppppuVar2 = ppppuVar3;
  } while (ppppuVar3 != &local_c8);
  local_c8 = local_20c0;
  if (0x2000 < (ulong)(local_c0 * 0x108)) {
    local_c8 = (undefined8 ***)embree::alignedMalloc(local_c0 * 0x108,0x40);
  }
  local_20f0 = &local_2108;
  local_20e8 = &local_210c;
  local_20e0 = &local_2104;
  local_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2104 == 0) {
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIiZNS_12parallel_forIiZNS_24parallel_reduce_internalIiNS_14BVHNStatisticsILi4EE10StatisticsEZNS_15parallel_reduceIiS6_ZNS5_10statisticsENS_10NodeRefPtrILi4EEEdNS_4BBoxIfEEEUliE3_FS6_RKS6_SE_EEET0_T_SH_RKSG_RKT1_RKT2_EUlNS_5rangeIiEEE_SF_EESG_SH_SH_SH_SH_SJ_SM_SP_EUliE_EEvSH_SJ_EUlRKSR_E_EEvSH_SH_SH_SJ_PNS0_16TaskGroupContextE_isra_0
              (0,local_2104,1,&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_00108fdd;
    }
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
    if (0 < local_2104) {
      lVar4 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        (*param_7)(local_2220,pSVar7,(Statistics *)((long)local_c8 + lVar4));
        lVar4 = lVar4 + 0x108;
        pSVar6 = local_2220;
        pSVar8 = pSVar7;
        for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)pSVar8 = *(undefined8 *)pSVar6;
          pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
          pSVar8 = pSVar8 + ((ulong)bVar9 * -2 + 1) * 8;
        }
      } while (iVar1 < local_2104);
    }
  }
  if (local_c8 != local_20c0) {
    embree::alignedFree(local_c8);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar7;
  }
LAB_00108fdd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNStatistics<4>::Statistics embree::parallel_reduce_internal<int,
   embree::BVHNStatistics<4>::Statistics, embree::parallel_reduce<int,
   embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)) [clone .isra.0] */

Statistics *
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_6_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_6_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
          (int param_1,int param_2,int param_3,int param_4,Statistics *param_5,
          _lambda_embree__range<int>__1_ *param_6,
          _func_Statistics_Statistics_ptr_Statistics_ptr *param_7)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  Statistics *pSVar6;
  undefined4 in_register_0000003c;
  Statistics *pSVar7;
  Statistics *pSVar8;
  long in_FS_OFFSET;
  byte bVar9;
  Statistics local_2220 [276];
  int local_210c;
  int local_2108;
  int local_2104;
  long local_2100;
  long local_20f8;
  int *local_20f0;
  int *local_20e8;
  int *local_20e0;
  undefined8 ***local_20d8;
  _lambda_embree__range<int>__1_ *local_20d0;
  undefined8 **local_20c0 [1023];
  undefined8 ***local_c8;
  long local_c0;
  long local_48;
  
  pSVar7 = (Statistics *)CONCAT44(in_register_0000003c,param_1);
  bVar9 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  iVar1 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (iVar1 < local_2104) {
    local_2104 = iVar1;
  }
  local_c0 = (long)local_2104;
  ppppuVar2 = (undefined8 ****)local_20c0;
  do {
    *ppppuVar2 = (undefined8 ***)0x0;
    ppppuVar3 = ppppuVar2 + 0x21;
    ppppuVar2[1] = (undefined8 ***)0x0;
    ppppuVar2[2] = (undefined8 ***)0x0;
    ppppuVar2[3] = (undefined8 ***)0x0;
    ppppuVar2[4] = (undefined8 ***)0x0;
    ppppuVar2[5] = (undefined8 ***)0x0;
    ppppuVar2[6] = (undefined8 ***)0x0;
    ppppuVar2[7] = (undefined8 ***)0x0;
    ppppuVar2[8] = (undefined8 ***)0x0;
    ppppuVar2[9] = (undefined8 ***)0x0;
    ppppuVar2[10] = (undefined8 ***)0x0;
    ppppuVar2[0xb] = (undefined8 ***)0x0;
    ppppuVar2[0xc] = (undefined8 ***)0x0;
    ppppuVar2[0xd] = (undefined8 ***)0x0;
    ppppuVar2[0xe] = (undefined8 ***)0x0;
    ppppuVar2[0xf] = (undefined8 ***)0x0;
    ppppuVar2[0x10] = (undefined8 ***)0x0;
    ppppuVar2[0x11] = (undefined8 ***)0x0;
    ppppuVar2[0x12] = (undefined8 ***)0x0;
    ppppuVar2[0x13] = (undefined8 ***)0x0;
    ppppuVar2[0x14] = (undefined8 ***)0x0;
    ppppuVar2[0x15] = (undefined8 ***)0x0;
    ppppuVar2[0x16] = (undefined8 ***)0x0;
    ppppuVar2[0x17] = (undefined8 ***)0x0;
    ppppuVar2[0x18] = (undefined8 ***)0x0;
    ppppuVar2[0x19] = (undefined8 ***)0x0;
    ppppuVar2[0x1a] = (undefined8 ***)0x0;
    ppppuVar2[0x1b] = (undefined8 ***)0x0;
    ppppuVar2[0x1c] = (undefined8 ***)0x0;
    ppppuVar2[0x1d] = (undefined8 ***)0x0;
    ppppuVar2[0x1e] = (undefined8 ***)0x0;
    ppppuVar2[0x1f] = (undefined8 ***)0x0;
    ppppuVar2[0x20] = (undefined8 ***)0x0;
    ppppuVar2 = ppppuVar3;
  } while (ppppuVar3 != &local_c8);
  local_c8 = local_20c0;
  if (0x2000 < (ulong)(local_c0 * 0x108)) {
    local_c8 = (undefined8 ***)embree::alignedMalloc(local_c0 * 0x108,0x40);
  }
  local_20f0 = &local_2108;
  local_20e8 = &local_210c;
  local_20e0 = &local_2104;
  local_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2104 == 0) {
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIiZNS_12parallel_forIiZNS_24parallel_reduce_internalIiNS_14BVHNStatisticsILi4EE10StatisticsEZNS_15parallel_reduceIiS6_ZNS5_10statisticsENS_10NodeRefPtrILi4EEEdNS_4BBoxIfEEEUliE4_FS6_RKS6_SE_EEET0_T_SH_RKSG_RKT1_RKT2_EUlNS_5rangeIiEEE_SF_EESG_SH_SH_SH_SH_SJ_SM_SP_EUliE_EEvSH_SJ_EUlRKSR_E_EEvSH_SH_SH_SJ_PNS0_16TaskGroupContextE_isra_0
              (0,local_2104,1,&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_001098bd;
    }
    pSVar6 = pSVar7;
    for (lVar4 = 0x21; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pSVar6 = *(undefined8 *)param_5;
      param_5 = param_5 + (ulong)bVar9 * -0x10 + 8;
      pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
    }
    if (0 < local_2104) {
      lVar4 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        (*param_7)(local_2220,pSVar7,(Statistics *)((long)local_c8 + lVar4));
        lVar4 = lVar4 + 0x108;
        pSVar6 = local_2220;
        pSVar8 = pSVar7;
        for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)pSVar8 = *(undefined8 *)pSVar6;
          pSVar6 = pSVar6 + ((ulong)bVar9 * -2 + 1) * 8;
          pSVar8 = pSVar8 + ((ulong)bVar9 * -2 + 1) * 8;
        }
      } while (iVar1 < local_2104);
    }
  }
  if (local_c8 != local_20c0) {
    embree::alignedFree(local_c8);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar7;
  }
LAB_001098bd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double, embree::BBox<float>) */

Statistics *
embree::BVHNStatistics<4>::statistics
          (double param_1,undefined8 param_2,Statistics *param_3,long *param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  embree *peVar3;
  Statistics *pSVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  byte bVar10;
  double local_3f0;
  embree local_3c8 [280];
  undefined8 local_2b0;
  ulong local_2a0;
  ulong *local_298;
  undefined8 *local_290;
  long *local_288;
  Statistics *local_278;
  code *local_270;
  ulong **local_268;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  Statistics local_148 [264];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  *(undefined8 *)(param_3 + 0x68) = 0;
  *(undefined8 *)(param_3 + 0x70) = 0;
  local_2b0._4_4_ = (float)((ulong)param_2 >> 0x20);
  local_2b0._0_4_ = (float)param_2;
  *(undefined8 *)(param_3 + 0x78) = 0;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x88) = 0;
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined8 *)(param_3 + 0x98) = 0;
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  *(undefined8 *)(param_3 + 0xb0) = 0;
  *(undefined8 *)(param_3 + 0xb8) = 0;
  *(undefined8 *)(param_3 + 0xc0) = 0;
  *(undefined8 *)(param_3 + 200) = 0;
  *(undefined8 *)(param_3 + 0xd0) = 0;
  *(undefined8 *)(param_3 + 0xd8) = 0;
  *(undefined8 *)(param_3 + 0xe0) = 0;
  *(undefined8 *)(param_3 + 0xe8) = 0;
  *(undefined8 *)(param_3 + 0xf0) = 0;
  *(undefined8 *)(param_3 + 0xf8) = 0;
  *(undefined8 *)(param_3 + 0x100) = 0;
  if (local_2b0._4_4_ - (float)local_2b0 <= 0.0) {
    local_3f0 = 0.0;
  }
  else {
    local_3f0 = (double)(local_2b0._4_4_ - (float)local_2b0);
  }
  uVar7 = (ulong)((uint)param_5 & 0xf);
  local_2b0 = param_2;
  switch(uVar7) {
  case 0:
    local_298 = &local_2a0;
    local_278 = (Statistics *)&local_258;
    local_290 = &local_2b0;
    local_268 = &local_298;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_270 = Statistics::add;
    local_2a0 = param_5;
    local_288 = param_4;
    parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_1_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
              ((int)local_148,4,0,4,local_278,(_lambda_embree__range<int>__1_ *)&local_278,
               Statistics::add);
    operator+(local_3c8,param_3,local_148);
    peVar3 = local_3c8;
    pSVar4 = param_3;
    for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pSVar4 = *(undefined8 *)peVar3;
      peVar3 = peVar3 + (ulong)bVar10 * -0x10 + 8;
      pSVar4 = pSVar4 + (ulong)bVar10 * -0x10 + 8;
    }
    *(long *)(param_3 + 0x80) = *(long *)(param_3 + 0x80) + 1;
    *(long *)param_3 = *(long *)param_3 + 1;
    *(double *)(param_3 + 0x78) = param_1 * local_3f0 + *(double *)(param_3 + 0x78);
    break;
  case 1:
    local_2a0 = param_5 & 0xfffffffffffffff0;
    local_298 = &local_2a0;
    local_278 = (Statistics *)&local_258;
    local_290 = &local_2b0;
    local_268 = &local_298;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_270 = Statistics::add;
    local_288 = param_4;
    parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_3_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_3_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
              ((int)local_148,4,0,4,local_278,(_lambda_embree__range<int>__1_ *)&local_278,
               Statistics::add);
    operator+(local_3c8,param_3,local_148);
    peVar3 = local_3c8;
    pSVar4 = param_3;
    for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pSVar4 = *(undefined8 *)peVar3;
      peVar3 = peVar3 + (ulong)bVar10 * -0x10 + 8;
      pSVar4 = pSVar4 + (ulong)bVar10 * -0x10 + 8;
    }
    *(long *)(param_3 + 0xb0) = *(long *)(param_3 + 0xb0) + 1;
    *(long *)param_3 = *(long *)param_3 + 1;
    *(double *)(param_3 + 0xa8) = param_1 * local_3f0 + *(double *)(param_3 + 0xa8);
    break;
  case 2:
    local_2a0 = param_5 & 0xfffffffffffffff0;
    local_298 = &local_2a0;
    local_278 = (Statistics *)&local_258;
    local_290 = &local_2b0;
    local_268 = &local_298;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_270 = Statistics::add;
    local_288 = param_4;
    parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_2_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_2_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
              ((int)local_148,4,0,4,local_278,(_lambda_embree__range<int>__1_ *)&local_278,
               Statistics::add);
    operator+(local_3c8,param_3,local_148);
    peVar3 = local_3c8;
    pSVar4 = param_3;
    for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pSVar4 = *(undefined8 *)peVar3;
      peVar3 = peVar3 + (ulong)bVar10 * -0x10 + 8;
      pSVar4 = pSVar4 + (ulong)bVar10 * -0x10 + 8;
    }
    *(long *)(param_3 + 0x98) = *(long *)(param_3 + 0x98) + 1;
    *(long *)param_3 = *(long *)param_3 + 1;
    *(double *)(param_3 + 0x90) = param_1 * local_3f0 + *(double *)(param_3 + 0x90);
    break;
  case 3:
    local_2a0 = param_5 & 0xfffffffffffffff0;
    local_298 = &local_2a0;
    local_278 = (Statistics *)&local_258;
    local_290 = &local_2b0;
    local_268 = &local_298;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_270 = Statistics::add;
    local_288 = param_4;
    parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_5_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_5_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
              ((int)local_148,4,0,4,local_278,(_lambda_embree__range<int>__1_ *)&local_278,
               Statistics::add);
    operator+(local_3c8,param_3,local_148);
    peVar3 = local_3c8;
    pSVar4 = param_3;
    for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pSVar4 = *(undefined8 *)peVar3;
      peVar3 = peVar3 + (ulong)bVar10 * -0x10 + 8;
      pSVar4 = pSVar4 + (ulong)bVar10 * -0x10 + 8;
    }
    *(long *)(param_3 + 0xe0) = *(long *)(param_3 + 0xe0) + 1;
    *(long *)param_3 = *(long *)param_3 + 1;
    *(double *)(param_3 + 0xd8) = param_1 * local_3f0 + *(double *)(param_3 + 0xd8);
    break;
  default:
    if ((param_5 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar7 != 8) {
      param_5 = param_5 & 0xfffffffffffffff0;
      lVar6 = 0;
      lVar5 = 0;
      lVar9 = 0;
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        lVar1 = (**(code **)(**(long **)(*param_4 + 0x58) + 0x18))
                          (*(long **)(*param_4 + 0x58),param_5);
        lVar2 = (**(code **)(**(long **)(*param_4 + 0x58) + 8))(*(long **)(*param_4 + 0x58),param_5)
        ;
        lVar9 = lVar9 + lVar2;
        lVar2 = *param_4;
        *(long *)(param_3 + 0x18) = lVar9;
        lVar2 = (**(code **)(**(long **)(lVar2 + 0x58) + 0x10))(*(long **)(lVar2 + 0x58),param_5);
        lVar5 = lVar5 + lVar2;
        param_5 = param_5 + lVar1;
        lVar6 = lVar6 + lVar1;
        *(long *)(param_3 + 0x20) = lVar5;
        *(long *)(param_3 + 0x30) = lVar6;
      } while (uVar8 != uVar7 - 8);
      *(ulong *)(param_3 + 0x28) = uVar8;
      *(undefined8 *)(param_3 + 0x10) = 1;
      *(double *)(param_3 + 8) = param_1 * local_3f0 * (double)uVar8 + 0.0;
      if (uVar7 - 9 < 8) {
        *(long *)(param_3 + uVar7 * 8 + -0x10) = *(long *)(param_3 + uVar7 * 8 + -0x10) + 1;
      }
    }
    break;
  case 5:
    local_2a0 = param_5 & 0xfffffffffffffff0;
    local_298 = &local_2a0;
    local_278 = (Statistics *)&local_258;
    local_290 = &local_2b0;
    local_268 = &local_298;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_270 = Statistics::add;
    local_288 = param_4;
    parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_6_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_6_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
              ((int)local_148,4,0,4,local_278,(_lambda_embree__range<int>__1_ *)&local_278,
               Statistics::add);
    operator+(local_3c8,param_3,local_148);
    peVar3 = local_3c8;
    pSVar4 = param_3;
    for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pSVar4 = *(undefined8 *)peVar3;
      peVar3 = peVar3 + (ulong)bVar10 * -0x10 + 8;
      pSVar4 = pSVar4 + (ulong)bVar10 * -0x10 + 8;
    }
    *(long *)(param_3 + 0xf8) = *(long *)(param_3 + 0xf8) + 1;
    *(long *)param_3 = *(long *)param_3 + 1;
    *(double *)(param_3 + 0xf0) = param_1 * local_3f0 + *(double *)(param_3 + 0xf0);
    break;
  case 6:
    local_2a0 = param_5 & 0xfffffffffffffff0;
    local_298 = &local_2a0;
    local_278 = (Statistics *)&local_258;
    local_290 = &local_2b0;
    local_268 = &local_298;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_270 = Statistics::add;
    local_288 = param_4;
    parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_4_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::_lambda(int)_4_const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::_lambda(embree::range<int>)_1_,embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>
              ((int)local_148,4,0,4,local_278,(_lambda_embree__range<int>__1_ *)&local_278,
               Statistics::add);
    operator+(local_3c8,param_3,local_148);
    peVar3 = local_3c8;
    pSVar4 = param_3;
    for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pSVar4 = *(undefined8 *)peVar3;
      peVar3 = peVar3 + (ulong)bVar10 * -0x10 + 8;
      pSVar4 = pSVar4 + (ulong)bVar10 * -0x10 + 8;
    }
    *(long *)(param_3 + 200) = *(long *)(param_3 + 200) + 1;
    *(long *)param_3 = *(long *)param_3 + 1;
    *(double *)(param_3 + 0xc0) = param_1 * local_3f0 + *(double *)(param_3 + 0xc0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNStatistics<4>::BVHNStatistics(embree::BVHN<4>*) */

void __thiscall embree::BVHNStatistics<4>::BVHNStatistics(BVHNStatistics<4> *this,BVHN *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  BVHNStatistics<4> *pBVar3;
  long in_FS_OFFSET;
  byte bVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 auStack_138 [35];
  long local_20;
  
  bVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(BVHN **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  fVar6 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14);
  fVar10 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18);
  fVar12 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar6;
  fVar13 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar8;
  fVar14 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar10;
  fVar7 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar8;
  fVar9 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar10;
  fVar11 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar6;
  fVar6 = (fVar12 * fVar8 + fVar7 * fVar6) * _LC2 + fVar8 * fVar6 + fVar12 * fVar7 * _LC4 +
          (fVar13 * fVar10 + fVar9 * fVar8) * _LC2 + fVar10 * fVar8 + fVar13 * fVar9 * _LC4 +
          (fVar14 * fVar6 + fVar11 * fVar10) * _LC2 + fVar6 * fVar10 + fVar14 * fVar11 * _LC4;
  if (fVar6 <= 0.0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = (double)fVar6;
  }
  statistics(dVar5,0x3f80000000000000,auStack_138,this,*(undefined8 *)(param_1 + 0x70));
  puVar2 = auStack_138;
  pBVar3 = this + 8;
  for (lVar1 = 0x21; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)pBVar3 = *puVar2;
    puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
    pBVar3 = pBVar3 + (ulong)bVar4 * -0x10 + 8;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::parallel_reduce_internal<int, embree::BVHNStatistics<4>::Statistics,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))
::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long in_FS_OFFSET;
  byte bVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined8 local_478 [34];
  undefined8 local_368 [34];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148 [17];
  long local_c0;
  long local_40;
  
  bVar13 = 0;
  puVar9 = *(undefined8 **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = **(int **)this;
  iVar10 = param_1 * (**(int **)(this + 8) - iVar3);
  iVar5 = iVar10 / **(int **)(this + 0x10);
  iVar1 = iVar3 + iVar5;
  iVar10 = ((**(int **)(this + 8) - iVar3) + iVar10) / **(int **)(this + 0x10);
  puVar8 = (undefined8 *)*puVar9;
  puVar11 = local_368;
  for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  if (iVar1 < iVar3 + iVar10) {
    lVar12 = (long)iVar1;
    lVar6 = (ulong)(uint)(iVar10 - iVar5) + lVar12;
    do {
      puVar8 = (undefined8 *)puVar9[2];
      pcVar4 = (code *)puVar9[1];
      lVar7 = *(long *)*puVar8;
      if (*(long *)(lVar7 + lVar12 * 8) == 8) {
        local_258 = 0;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
      }
      else {
        lVar2 = lVar7 + lVar12 * 4;
        fVar15 = *(float *)(lVar2 + 0x50) - *(float *)(lVar2 + 0x40);
        fVar16 = *(float *)(lVar7 + 0x70 + lVar12 * 4) - *(float *)(lVar2 + 0x60);
        fVar15 = (fVar15 + fVar16) * (*(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x20)) +
                 fVar15 * fVar16;
        if (fVar15 <= 0.0) {
          dVar14 = 0.0;
        }
        else {
          dVar14 = (double)fVar15;
        }
        BVHNStatistics<4>::statistics
                  (dVar14,*(undefined8 *)puVar8[1],local_148,puVar8[2],
                   *(undefined8 *)(lVar7 + lVar12 * 8));
        local_c0 = local_c0 + 1;
        puVar8 = local_148;
        puVar11 = &local_258;
        for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
          puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
        }
      }
      lVar12 = lVar12 + 1;
      (*pcVar4)(local_478,local_368,&local_258);
      puVar8 = local_478;
      puVar11 = local_368;
      for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
      }
    } while (lVar6 != lVar12);
  }
  puVar9 = local_368;
  puVar8 = (undefined8 *)(*(long *)(*(long *)(this + 0x18) + 0x1ff8) + (long)param_1 * 0x108);
  for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
    puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::parallel_reduce_internal<int, embree::BVHNStatistics<4>::Statistics,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#2} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#2},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#2}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#2},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#2}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))
::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long in_FS_OFFSET;
  byte bVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  undefined8 local_478 [34];
  undefined8 local_368 [34];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148 [20];
  long local_a8;
  long local_40;
  
  bVar13 = 0;
  puVar9 = *(undefined8 **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = **(int **)this;
  iVar10 = param_1 * (**(int **)(this + 8) - iVar3);
  iVar5 = iVar10 / **(int **)(this + 0x10);
  iVar1 = iVar3 + iVar5;
  iVar10 = ((**(int **)(this + 8) - iVar3) + iVar10) / **(int **)(this + 0x10);
  puVar8 = (undefined8 *)*puVar9;
  puVar11 = local_368;
  for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  if (iVar1 < iVar3 + iVar10) {
    lVar12 = (long)iVar1;
    lVar6 = (ulong)(uint)(iVar10 - iVar5) + lVar12;
    do {
      puVar8 = (undefined8 *)puVar9[2];
      pcVar4 = (code *)puVar9[1];
      lVar7 = *(long *)*puVar8;
      if (*(long *)(lVar7 + lVar12 * 8) == 8) {
        local_258 = 0;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
      }
      else {
        lVar2 = lVar7 + lVar12 * 4;
        fVar14 = *(float *)(lVar7 + 0x40 + lVar12 * 4);
        auVar16._0_4_ = *(float *)(lVar2 + 0x80) * *(float *)(lVar2 + 0x80);
        auVar16._4_4_ = *(float *)(lVar2 + 0x90) * *(float *)(lVar2 + 0x90);
        auVar16._8_4_ = *(float *)(lVar2 + 0xa0) * *(float *)(lVar2 + 0xa0);
        auVar16._12_4_ = 0;
        auVar17._0_4_ =
             *(float *)(lVar2 + 0x50) * *(float *)(lVar2 + 0x50) +
             *(float *)(lVar2 + 0x20) * *(float *)(lVar2 + 0x20) + auVar16._0_4_;
        auVar17._4_4_ =
             *(float *)(lVar2 + 0x60) * *(float *)(lVar2 + 0x60) +
             *(float *)(lVar2 + 0x30) * *(float *)(lVar2 + 0x30) + auVar16._4_4_;
        auVar17._8_4_ =
             *(float *)(lVar2 + 0x70) * *(float *)(lVar2 + 0x70) + fVar14 * fVar14 + auVar16._8_4_;
        auVar17._12_4_ = 0;
        auVar16 = rsqrtps(auVar16,auVar17);
        fVar14 = auVar16._0_4_;
        fVar18 = auVar16._4_4_;
        fVar19 = auVar16._8_4_;
        fVar18 = auVar17._4_4_ * _LC40 * fVar18 * fVar18 * fVar18 + fVar18 * _LC42;
        fVar19 = auVar17._8_4_ * _LC40 * fVar19 * fVar19 * fVar19 + fVar19 * _LC42;
        fVar14 = (fVar18 + fVar19) *
                 (auVar17._0_4_ * _LC40 * fVar14 * fVar14 * fVar14 + fVar14 * _LC42) +
                 fVar18 * fVar19;
        if (fVar14 <= 0.0) {
          dVar15 = 0.0;
        }
        else {
          dVar15 = (double)fVar14;
        }
        BVHNStatistics<4>::statistics
                  (dVar15,*(undefined8 *)puVar8[1],local_148,puVar8[2],
                   *(undefined8 *)(lVar7 + lVar12 * 8));
        local_a8 = local_a8 + 1;
        puVar8 = local_148;
        puVar11 = &local_258;
        for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
          puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
        }
      }
      lVar12 = lVar12 + 1;
      (*pcVar4)(local_478,local_368,&local_258);
      puVar8 = local_478;
      puVar11 = local_368;
      for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
      }
    } while (lVar6 != lVar12);
  }
  puVar9 = local_368;
  puVar8 = (undefined8 *)(*(long *)(*(long *)(this + 0x18) + 0x1ff8) + (long)param_1 * 0x108);
  for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
    puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::parallel_reduce_internal<int, embree::BVHNStatistics<4>::Statistics,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#5} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#5},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#5}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#5},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#5}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))
::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long in_FS_OFFSET;
  byte bVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  undefined8 local_478 [34];
  undefined8 local_368 [34];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148 [29];
  long local_60;
  long local_40;
  
  bVar13 = 0;
  puVar9 = *(undefined8 **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = **(int **)this;
  iVar10 = param_1 * (**(int **)(this + 8) - iVar3);
  iVar5 = iVar10 / **(int **)(this + 0x10);
  iVar1 = iVar3 + iVar5;
  iVar10 = ((**(int **)(this + 8) - iVar3) + iVar10) / **(int **)(this + 0x10);
  puVar8 = (undefined8 *)*puVar9;
  puVar11 = local_368;
  for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  if (iVar1 < iVar3 + iVar10) {
    lVar12 = (long)iVar1;
    lVar6 = (ulong)(uint)(iVar10 - iVar5) + lVar12;
    do {
      puVar8 = (undefined8 *)puVar9[2];
      pcVar4 = (code *)puVar9[1];
      lVar7 = *(long *)*puVar8;
      if (*(long *)(lVar7 + lVar12 * 8) == 8) {
        local_258 = 0;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
      }
      else {
        lVar2 = lVar7 + lVar12 * 4;
        fVar14 = *(float *)(lVar7 + 0x40 + lVar12 * 4);
        auVar16._0_4_ = *(float *)(lVar2 + 0x80) * *(float *)(lVar2 + 0x80);
        auVar16._4_4_ = *(float *)(lVar2 + 0x90) * *(float *)(lVar2 + 0x90);
        auVar16._8_4_ = *(float *)(lVar2 + 0xa0) * *(float *)(lVar2 + 0xa0);
        auVar16._12_4_ = 0;
        auVar17._0_4_ =
             *(float *)(lVar2 + 0x50) * *(float *)(lVar2 + 0x50) +
             *(float *)(lVar2 + 0x20) * *(float *)(lVar2 + 0x20) + auVar16._0_4_;
        auVar17._4_4_ =
             *(float *)(lVar2 + 0x60) * *(float *)(lVar2 + 0x60) +
             *(float *)(lVar2 + 0x30) * *(float *)(lVar2 + 0x30) + auVar16._4_4_;
        auVar17._8_4_ =
             *(float *)(lVar2 + 0x70) * *(float *)(lVar2 + 0x70) + fVar14 * fVar14 + auVar16._8_4_;
        auVar17._12_4_ = 0;
        auVar16 = rsqrtps(auVar16,auVar17);
        fVar14 = auVar16._0_4_;
        fVar18 = auVar16._4_4_;
        fVar19 = auVar16._8_4_;
        fVar18 = auVar17._4_4_ * _LC40 * fVar18 * fVar18 * fVar18 + fVar18 * _LC42;
        fVar19 = auVar17._8_4_ * _LC40 * fVar19 * fVar19 * fVar19 + fVar19 * _LC42;
        fVar14 = (fVar18 + fVar19) *
                 (auVar17._0_4_ * _LC40 * fVar14 * fVar14 * fVar14 + fVar14 * _LC42) +
                 fVar18 * fVar19;
        if (fVar14 <= 0.0) {
          dVar15 = 0.0;
        }
        else {
          dVar15 = (double)fVar14;
        }
        BVHNStatistics<4>::statistics
                  (dVar15,*(undefined8 *)puVar8[1],local_148,puVar8[2],
                   *(undefined8 *)(lVar7 + lVar12 * 8));
        local_60 = local_60 + 1;
        puVar8 = local_148;
        puVar11 = &local_258;
        for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
          puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
        }
      }
      lVar12 = lVar12 + 1;
      (*pcVar4)(local_478,local_368,&local_258);
      puVar8 = local_478;
      puVar11 = local_368;
      for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
      }
    } while (lVar6 != lVar12);
  }
  puVar9 = local_368;
  puVar8 = (undefined8 *)(*(long *)(*(long *)(this + 0x18) + 0x1ff8) + (long)param_1 * 0x108);
  for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
    puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::parallel_reduce_internal<int, embree::BVHNStatistics<4>::Statistics,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#6} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#6},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#6}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#6},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#6}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))
::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long in_FS_OFFSET;
  byte bVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined8 local_478 [34];
  undefined8 local_368 [34];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148 [32];
  long local_48;
  long local_40;
  
  bVar12 = 0;
  puVar8 = *(undefined8 **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = **(int **)this;
  iVar9 = param_1 * (**(int **)(this + 8) - iVar2);
  iVar4 = iVar9 / **(int **)(this + 0x10);
  iVar1 = iVar2 + iVar4;
  iVar9 = ((**(int **)(this + 8) - iVar2) + iVar9) / **(int **)(this + 0x10);
  puVar7 = (undefined8 *)*puVar8;
  puVar10 = local_368;
  for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  if (iVar1 < iVar2 + iVar9) {
    lVar11 = (long)iVar1;
    lVar5 = (ulong)(uint)(iVar9 - iVar4) + lVar11;
    do {
      puVar7 = (undefined8 *)puVar8[2];
      pcVar3 = (code *)puVar8[1];
      lVar6 = *(long *)*puVar7;
      if (*(long *)(lVar6 + lVar11 * 8) == 8) {
        local_258 = 0;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
      }
      else {
        fVar14 = ((float)*(byte *)(lVar6 + 0x2c + lVar11) * *(float *)(lVar6 + 0x48) +
                 *(float *)(lVar6 + 0x3c)) -
                 (*(float *)(lVar6 + 0x3c) +
                 (float)*(byte *)(lVar6 + 0x28 + lVar11) * *(float *)(lVar6 + 0x48));
        fVar15 = ((float)*(byte *)(lVar6 + 0x34 + lVar11) * *(float *)(lVar6 + 0x4c) +
                 *(float *)(lVar6 + 0x40)) -
                 ((float)*(byte *)(lVar6 + 0x30 + lVar11) * *(float *)(lVar6 + 0x4c) +
                 *(float *)(lVar6 + 0x40));
        fVar14 = (fVar14 + fVar15) *
                 (((float)*(byte *)(lVar6 + 0x24 + lVar11) * *(float *)(lVar6 + 0x44) +
                  *(float *)(lVar6 + 0x38)) -
                 ((float)*(byte *)(lVar6 + 0x20 + lVar11) * *(float *)(lVar6 + 0x44) +
                 *(float *)(lVar6 + 0x38))) + fVar14 * fVar15;
        if (fVar14 <= 0.0) {
          dVar13 = 0.0;
        }
        else {
          dVar13 = (double)fVar14;
        }
        BVHNStatistics<4>::statistics
                  (dVar13,*(undefined8 *)puVar7[1],local_148,puVar7[2],
                   *(undefined8 *)(lVar6 + lVar11 * 8));
        local_48 = local_48 + 1;
        puVar7 = local_148;
        puVar10 = &local_258;
        for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + (ulong)bVar12 * -2 + 1;
          puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
        }
      }
      lVar11 = lVar11 + 1;
      (*pcVar3)(local_478,local_368,&local_258);
      puVar7 = local_478;
      puVar10 = local_368;
      for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + (ulong)bVar12 * -2 + 1;
        puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
      }
    } while (lVar5 != lVar11);
  }
  puVar8 = local_368;
  puVar7 = (undefined8 *)(*(long *)(*(long *)(this + 0x18) + 0x1ff8) + (long)param_1 * 0x108);
  for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + (ulong)bVar12 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar12 * -2 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::parallel_reduce_internal<int, embree::BVHNStatistics<4>::Statistics,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#3} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#3},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#3}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#3},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#3}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))
::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  byte bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  double dVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_478 [34];
  undefined8 local_368 [34];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148 [23];
  long local_90;
  long local_40;
  
  bVar15 = 0;
  puVar12 = *(undefined8 **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = **(int **)this;
  iVar13 = (**(int **)(this + 8) - iVar4) * param_1;
  iVar7 = iVar13 / **(int **)(this + 0x10);
  iVar1 = iVar4 + iVar7;
  iVar13 = ((**(int **)(this + 8) - iVar4) + iVar13) / **(int **)(this + 0x10);
  puVar11 = (undefined8 *)*puVar12;
  puVar14 = local_368;
  for (lVar8 = 0x21; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 1;
  }
  if (iVar1 < iVar4 + iVar13) {
    lVar10 = (long)iVar1;
    lVar8 = (ulong)(uint)(iVar13 - iVar7) + lVar10;
    do {
      puVar11 = (undefined8 *)puVar12[2];
      pcVar6 = (code *)puVar12[1];
      lVar9 = *(long *)*puVar11;
      if (*(long *)(lVar9 + lVar10 * 8) == 8) {
        local_258 = 0;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
      }
      else {
        lVar2 = lVar9 + lVar10 * 4;
        pfVar5 = (float *)puVar11[1];
        fVar18 = *(float *)(lVar2 + 0x50);
        fVar21 = *(float *)(lVar2 + 0x70);
        fVar17 = *(float *)(lVar2 + 0x30);
        fVar16 = *(float *)(lVar2 + 0x90) + fVar17;
        fVar20 = *(float *)(lVar2 + 0x40);
        fVar22 = *(float *)(lVar2 + 0x20);
        fVar28 = *(float *)(lVar2 + 0xb0) + fVar18;
        fVar24 = *(float *)(lVar2 + 0xd0) + fVar21;
        fVar33 = *(float *)(lVar2 + 0xa0) + fVar20;
        fVar23 = *(float *)(lVar2 + 0x60);
        fVar29 = *(float *)(lVar2 + 0x80) + fVar22;
        fVar30 = *(float *)(lVar2 + 0xc0) + fVar23;
        fVar3 = pfVar5[1];
        fVar32 = _LC43 - fVar3;
        fVar27 = *pfVar5;
        fVar31 = _LC43 - fVar27;
        fVar25 = (fVar16 * fVar27 + fVar17 * fVar31) - (fVar27 * fVar29 + fVar31 * fVar22);
        fVar26 = (fVar28 * fVar27 + fVar18 * fVar31) - (fVar27 * fVar33 + fVar31 * fVar20);
        fVar27 = (fVar24 * fVar27 + fVar21 * fVar31) - (fVar27 * fVar30 + fVar31 * fVar23);
        fVar17 = (fVar16 * fVar3 + fVar17 * fVar32) - (fVar29 * fVar3 + fVar22 * fVar32);
        fVar20 = (fVar28 * fVar3 + fVar18 * fVar32) - (fVar33 * fVar3 + fVar20 * fVar32);
        fVar22 = (fVar24 * fVar3 + fVar21 * fVar32) - (fVar30 * fVar3 + fVar23 * fVar32);
        fVar18 = fVar20 - fVar26;
        fVar21 = fVar22 - fVar27;
        fVar23 = fVar17 - fVar25;
        fVar17 = fVar17 - fVar25;
        fVar20 = fVar20 - fVar26;
        fVar22 = fVar22 - fVar27;
        fVar18 = (fVar26 * fVar17 + fVar25 * fVar18) * _LC2 + fVar26 * fVar25 +
                 fVar17 * fVar18 * _LC4 +
                 (fVar27 * fVar20 + fVar26 * fVar21) * _LC2 + fVar27 * fVar26 +
                 fVar20 * fVar21 * _LC4 +
                 (fVar25 * fVar22 + fVar27 * fVar23) * _LC2 + fVar25 * fVar27 +
                 fVar22 * fVar23 * _LC4;
        if (fVar18 <= 0.0) {
          dVar19 = 0.0;
        }
        else {
          dVar19 = (double)fVar18;
        }
        BVHNStatistics<4>::statistics
                  (dVar19,*(undefined8 *)pfVar5,local_148,puVar11[2],
                   *(undefined8 *)(lVar9 + lVar10 * 8));
        local_90 = local_90 + 1;
        puVar11 = local_148;
        puVar14 = &local_258;
        for (lVar9 = 0x21; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar14 = *puVar11;
          puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
          puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
        }
      }
      lVar10 = lVar10 + 1;
      (*pcVar6)(local_478,local_368,&local_258);
      puVar11 = local_478;
      puVar14 = local_368;
      for (lVar9 = 0x21; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
        puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
      }
    } while (lVar8 != lVar10);
  }
  puVar12 = local_368;
  puVar11 = (undefined8 *)(*(long *)(*(long *)(this + 0x18) + 0x1ff8) + (long)param_1 * 0x108);
  for (lVar8 = 0x21; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + (ulong)bVar15 * -2 + 1;
    puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::parallel_reduce_internal<int, embree::BVHNStatistics<4>::Statistics,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::parallel_reduce<int, embree::BVHNStatistics<4>::Statistics,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4}, embree::BVHNStatistics<4>::Statistics
   (embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&)>(int, int, embree::BVHNStatistics<4>::Statistics const&,
   embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>, double,
   embree::BBox<float>)::{lambda(int)#4} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(embree::range<int>)#1} const&, embree::BVHNStatistics<4>::Statistics (
   const&)(embree::BVHNStatistics<4>::Statistics const&, embree::BVHNStatistics<4>::Statistics
   const&))::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall
embree::
parallel_reduce_internal<int,embree::BVHNStatistics<4>::Statistics,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#4},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#4}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::parallel_reduce<int,embree::BVHNStatistics<4>::Statistics,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#4},embree::BVHNStatistics<4>::Statistics(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&)>(int,int,embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::statistics(embree::NodeRefPtr<4>,double,embree::BBox<float>)::{lambda(int)#4}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))::{lambda(embree::range<int>)#1}const&,embree::BVHNStatistics<4>::Statistics(const&)(embree::BVHNStatistics<4>::Statistics_const&,embree::BVHNStatistics<4>::Statistics_const&))
::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_478 [34];
  undefined8 local_368 [34];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148 [26];
  long local_78;
  long local_40;
  
  bVar14 = 0;
  puVar11 = *(undefined8 **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = **(int **)this;
  iVar12 = (**(int **)(this + 8) - iVar4) * param_1;
  iVar6 = iVar12 / **(int **)(this + 0x10);
  iVar1 = iVar4 + iVar6;
  iVar12 = ((**(int **)(this + 8) - iVar4) + iVar12) / **(int **)(this + 0x10);
  puVar10 = (undefined8 *)*puVar11;
  puVar13 = local_368;
  for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  if (iVar1 < iVar4 + iVar12) {
    lVar9 = (long)iVar1;
    lVar7 = (ulong)(uint)(iVar12 - iVar6) + lVar9;
    do {
      puVar10 = (undefined8 *)puVar11[2];
      pcVar5 = (code *)puVar11[1];
      lVar8 = *(long *)*puVar10;
      if (*(long *)(lVar8 + lVar9 * 8) == 8) {
        local_258 = 0;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
      }
      else {
        lVar2 = lVar8 + lVar9 * 4;
        fVar18 = *(float *)(lVar2 + 0x70);
        fVar17 = *(float *)(lVar2 + 0x50);
        fVar16 = *(float *)(lVar2 + 0x30);
        fVar15 = *(float *)(lVar2 + 0x90) + fVar16;
        fVar24 = *(float *)(lVar2 + 0x40);
        fVar25 = *(float *)(lVar2 + 0x20);
        fVar22 = *(float *)(lVar2 + 0xb0) + fVar17;
        fVar19 = *(float *)(lVar2 + 0xd0) + fVar18;
        fVar26 = ((float *)puVar10[1])[1];
        if (*(float *)(lVar2 + 0xf0) <= fVar26) {
          fVar26 = *(float *)(lVar2 + 0xf0);
        }
        fVar31 = *(float *)(lVar2 + 0xa0) + fVar24;
        fVar3 = *(float *)puVar10[1];
        fVar30 = *(float *)(lVar2 + 0xe0);
        if (*(float *)(lVar2 + 0xe0) <= fVar3) {
          fVar30 = fVar3;
        }
        fVar3 = *(float *)(lVar2 + 0x60);
        fVar23 = *(float *)(lVar2 + 0x80) + fVar25;
        fVar28 = *(float *)(lVar2 + 0xc0) + fVar3;
        fVar29 = _LC43 - fVar26;
        fVar27 = _LC43 - fVar30;
        fVar20 = (fVar15 * fVar30 + fVar16 * fVar27) - (fVar30 * fVar23 + fVar27 * fVar25);
        fVar21 = (fVar22 * fVar30 + fVar17 * fVar27) - (fVar30 * fVar31 + fVar27 * fVar24);
        fVar27 = (fVar19 * fVar30 + fVar18 * fVar27) - (fVar30 * fVar28 + fVar27 * fVar3);
        fVar16 = (fVar15 * fVar26 + fVar16 * fVar29) - (fVar23 * fVar26 + fVar25 * fVar29);
        fVar17 = (fVar22 * fVar26 + fVar17 * fVar29) - (fVar31 * fVar26 + fVar24 * fVar29);
        fVar18 = (fVar19 * fVar26 + fVar18 * fVar29) - (fVar28 * fVar26 + fVar3 * fVar29);
        fVar24 = fVar16 - fVar20;
        fVar25 = fVar17 - fVar21;
        fVar15 = fVar18 - fVar27;
        fVar17 = fVar17 - fVar21;
        fVar18 = fVar18 - fVar27;
        fVar16 = fVar16 - fVar20;
        BVHNStatistics<4>::statistics
                  ((double)((fVar21 * fVar24 + fVar20 * fVar17) * _LC2 + fVar21 * fVar20 +
                            fVar24 * fVar17 * _LC4 +
                            (fVar27 * fVar25 + fVar21 * fVar18) * _LC2 + fVar27 * fVar21 +
                            fVar25 * fVar18 * _LC4 +
                           (fVar20 * fVar15 + fVar27 * fVar16) * _LC2 + fVar20 * fVar27 +
                           fVar15 * fVar16 * _LC4),CONCAT44(fVar26,fVar30),local_148,puVar10[2],
                   *(undefined8 *)(lVar8 + lVar9 * 8));
        local_78 = local_78 + 1;
        puVar10 = local_148;
        puVar13 = &local_258;
        for (lVar8 = 0x21; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
          puVar13 = puVar13 + (ulong)bVar14 * -2 + 1;
        }
      }
      lVar9 = lVar9 + 1;
      (*pcVar5)(local_478,local_368,&local_258);
      puVar10 = local_478;
      puVar13 = local_368;
      for (lVar8 = 0x21; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
        puVar13 = puVar13 + (ulong)bVar14 * -2 + 1;
      }
    } while (lVar7 != lVar9);
  }
  puVar11 = local_368;
  puVar10 = (undefined8 *)(*(long *)(*(long *)(this + 0x18) + 0x1ff8) + (long)param_1 * 0x108);
  for (lVar7 = 0x21; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::BVHNStatistics<4>::BVHNStatistics(embree::BVHN<4>*) */

void embree::BVHNStatistics<4>::BVHNStatistics(BVHN *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::BVHNStatistics<4>::Statistics::LeafStat::LeafStat(double, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long) */

void __thiscall
embree::BVHNStatistics<4>::Statistics::LeafStat::LeafStat
          (LeafStat *this,double param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
          ulong param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::BVHNStatistics<4>::Statistics::Statistics(unsigned long,
   embree::BVHNStatistics<4>::Statistics::LeafStat,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNode_t<embree::NodeRefPtr<4>, 4> >,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNode_t<embree::NodeRefPtr<4>, 4> >,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4> >,
   embree::BVHNStatistics<4>::Statistics::NodeStat<embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>
   >, embree::BVHNStatistics<4>::Statistics::NodeStat<embree::OBBNodeMB_t<embree::NodeRefPtr<4>, 4>
   >, embree::BVHNStatistics<4>::Statistics::NodeStat<embree::QuantizedNode_t<embree::NodeRefPtr<4>,
   4> >) */

void __thiscall embree::BVHNStatistics<4>::Statistics::Statistics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



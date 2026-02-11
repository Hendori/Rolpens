
/* embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&) const [clone .isra.0]
    */

_lambda_embree__range<unsigned_long>const___1_ * __thiscall
embree::sse2::
createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)
::{lambda(embree::range<unsigned_long>const&)#1}::operator()
          (_lambda_embree__range<unsigned_long>const___1_ *this,range *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_RCX;
  long *plVar5;
  ulong in_RDX;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (in_RDX < in_RCX) {
    lVar1 = *(long *)param_1;
    lVar13 = 0;
    auVar18._4_4_ = _LC1;
    auVar18._0_4_ = _LC1;
    auVar18._8_4_ = _LC1;
    auVar18._12_4_ = _LC1;
    auVar19._4_4_ = _LC3;
    auVar19._0_4_ = _LC3;
    auVar19._8_4_ = _LC3;
    auVar19._12_4_ = _LC3;
    uVar2 = (*(long **)(lVar1 + 0xd0))[2];
    puVar12 = (uint *)(*(long *)(lVar1 + 0x60) * in_RDX + *(long *)(lVar1 + 0x58));
    do {
      uVar8 = (ulong)*puVar12;
      if (((uVar8 < uVar2) && (uVar9 = (ulong)puVar12[1], uVar9 < uVar2)) &&
         (uVar10 = (ulong)puVar12[2], uVar10 < uVar2)) {
        if (*(uint *)(lVar1 + 0x24) != 0) {
          uVar11 = 0;
          plVar5 = *(long **)(lVar1 + 0xd0);
          do {
            lVar3 = plVar5[1];
            lVar4 = *plVar5;
            pfVar6 = (float *)(lVar4 + uVar8 * lVar3);
            auVar15 = *(undefined1 (*) [16])(lVar4 + uVar9 * lVar3);
            auVar17._0_4_ = -(uint)(*pfVar6 < _LC5 && _LC7 < *pfVar6);
            auVar17._4_4_ = -(uint)(pfVar6[1] < _LC5 && _LC7 < pfVar6[1]);
            auVar17._8_4_ = -(uint)(_LC7 < pfVar6[2] && pfVar6[2] < _LC5);
            auVar17._12_4_ = -(uint)(pfVar6[3] < _LC5 && _LC7 < pfVar6[3]);
            pfVar6 = (float *)(lVar3 * uVar10 + lVar4);
            uVar7 = movmskps((int)lVar4,auVar17);
            if ((((~uVar7 & 7) != 0) ||
                (auVar16._0_4_ = -(uint)(_LC7 < auVar15._0_4_ && auVar15._0_4_ < _LC5),
                auVar16._4_4_ = -(uint)(_LC7 < auVar15._4_4_ && auVar15._4_4_ < _LC5),
                auVar16._8_4_ = -(uint)(_LC7 < auVar15._8_4_ && auVar15._8_4_ < _LC5),
                auVar16._12_4_ = -(uint)(_LC7 < auVar15._12_4_ && auVar15._12_4_ < _LC5),
                uVar7 = movmskps(0,auVar16), (~uVar7 & 7) != 0)) ||
               (auVar15._0_4_ = -(uint)(_LC7 < *pfVar6 && *pfVar6 < _LC5),
               auVar15._4_4_ = -(uint)(_LC7 < pfVar6[1] && pfVar6[1] < _LC5),
               auVar15._8_4_ = -(uint)(_LC7 < pfVar6[2] && pfVar6[2] < _LC5),
               auVar15._12_4_ = -(uint)(_LC7 < pfVar6[3] && pfVar6[3] < _LC5),
               uVar7 = movmskps((int)pfVar6,auVar15), (~uVar7 & 7) != 0)) goto LAB_0010018c;
            uVar11 = uVar11 + 1;
            plVar5 = plVar5 + 6;
          } while (*(uint *)(lVar1 + 0x24) != uVar11);
        }
        lVar3 = *(long *)(lVar1 + 0x90);
        lVar4 = *(long *)(lVar1 + 0x88);
        lVar13 = lVar13 + 1;
        auVar15 = *(undefined1 (*) [16])(lVar4 + uVar8 * lVar3);
        auVar17 = *(undefined1 (*) [16])(lVar4 + uVar9 * lVar3);
        auVar16 = *(undefined1 (*) [16])(lVar4 + uVar10 * lVar3);
        auVar14 = maxps(auVar15,auVar17);
        auVar17 = minps(auVar15,auVar17);
        auVar15 = maxps(auVar14,auVar16);
        auVar17 = minps(auVar17,auVar16);
        auVar14._0_4_ = auVar15._0_4_ + auVar17._0_4_;
        auVar14._4_4_ = auVar15._4_4_ + auVar17._4_4_;
        auVar14._8_4_ = auVar15._8_4_ + auVar17._8_4_;
        auVar14._12_4_ = auVar15._12_4_ + auVar17._12_4_;
        auVar19 = minps(auVar19,auVar14);
        auVar18 = maxps(auVar18,auVar14);
      }
LAB_0010018c:
      in_RDX = in_RDX + 1;
      puVar12 = (uint *)((long)puVar12 + *(long *)(lVar1 + 0x60));
    } while (in_RDX != in_RCX);
  }
  else {
    lVar13 = 0;
    auVar18._4_4_ = _LC1;
    auVar18._0_4_ = _LC1;
    auVar18._8_4_ = _LC1;
    auVar18._12_4_ = _LC1;
    auVar19._4_4_ = _LC3;
    auVar19._0_4_ = _LC3;
    auVar19._8_4_ = _LC3;
    auVar19._12_4_ = _LC3;
  }
  *(long *)this = lVar13;
  *(undefined1 (*) [16])(this + 0x10) = auVar19;
  *(undefined1 (*) [16])(this + 0x20) = auVar18;
  return this;
}



/* embree::parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned
   long> const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned long,
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned
   long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long)#1},
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned
   long> const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned long,
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned
   long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned
   long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, unsigned long, embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned
   long> const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned long,
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned
   long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long)#1}
   const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned
   long> const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, embree::BuildProgressMonitor&,
   unsigned long)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned long,
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned
   long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned
   long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,unsigned_long,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>,embree::sse2::createPrimRefArrayMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRef,embree::aligned_monitored_allocator<embree::PrimRef,32ul>>&,embree::BuildProgressMonitor&,unsigned_long)::{lambda(embree::Geometry*,embree::range<unsigned_long>const&,unsigned_long,unsigned_long,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#1},embree::sse2::createPrimRefArrayMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRef,embree::aligned_monitored_allocator<embree::PrimRef,32ul>>&,embree::BuildProgressMonitor&,unsigned_long)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa>>>&,embree::Scene::Iterator...embree::BBox<embree::Vec3fa>>const&,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#2}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong local_a8;
  ulong local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  long local_50;
  long local_40;
  
  lVar9 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(lVar9 + param_1 * 8);
  uVar12 = *(ulong *)(lVar9 + 0x200 + param_1 * 8);
  uVar13 = param_1 * *(long *)(lVar9 + 0x408);
  uVar4 = uVar13 / **(ulong **)(this + 8);
  uVar13 = (uVar13 + *(long *)(lVar9 + 0x408)) / **(ulong **)(this + 8);
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  auVar17 = *pauVar1;
  auVar16 = pauVar1[1];
  auVar15 = pauVar1[2];
  auVar14 = pauVar1[3];
  lVar10 = *(long *)pauVar1[4];
  lVar5 = *(long *)(pauVar1[4] + 8);
  if (uVar4 < uVar13) {
    do {
      plVar3 = (long *)**(long **)(this + 0x18);
      lVar6 = *(long *)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
      if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x3e) & 0x20) == 0)) ||
         (((long)(1 << (*(byte *)(lVar6 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if ((*(int *)(lVar6 + 0x24) != 1) == (bool)(char)plVar3[2]) {
          uVar7 = (uVar12 + uVar13) - uVar4;
          if (*(uint *)(lVar6 + 0x20) < uVar7) {
            uVar7 = (ulong)*(uint *)(lVar6 + 0x20);
          }
          if (uVar12 < uVar7) {
            lVar9 = lVar9 + param_1 * 0x50;
            puVar2 = (undefined8 *)**(long **)(this + 0x28);
            plVar3 = (long *)(*(long **)(this + 0x28))[1];
            plVar8 = *(long **)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
            if (plVar8 != (long *)0x0) {
              if (((*(byte *)((long)plVar8 + 0x3e) & 0x20) == 0) ||
                 (((long)(1 << (*(byte *)((long)plVar8 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
                plVar8 = (long *)0x0;
              }
              else if ((*(int *)((long)plVar8 + 0x24) != 1) != (bool)(char)plVar3[2]) {
                plVar8 = (long *)0x0;
              }
            }
            local_a8 = uVar12;
            local_a0 = uVar7;
            (**(code **)(*plVar8 + 0x178))
                      (local_98,plVar8,*puVar2,*(undefined8 *)puVar2[1],&local_a8,
                       ((*(long *)(lVar9 + 0x1858) - lVar10) + lVar5) - *(long *)(lVar9 + 0x1850),
                       lVar11);
            lVar9 = *(long *)this;
            auVar17 = minps(auVar17,local_98);
            auVar16 = maxps(auVar16,local_88);
            auVar15 = minps(auVar15,local_78);
            auVar14 = maxps(auVar14,local_68);
            lVar10 = lVar10 + local_58;
            lVar5 = lVar5 + local_50;
          }
        }
      }
      lVar6 = uVar4 - uVar12;
      lVar11 = lVar11 + 1;
      uVar12 = 0;
      uVar4 = lVar6 + uVar7;
    } while (uVar4 < uVar13);
  }
  pauVar1 = (undefined1 (*) [16])(lVar9 + 0x410 + param_1 * 0x50);
  lVar9 = lVar9 + param_1 * 0x50;
  *pauVar1 = auVar17;
  pauVar1[1] = auVar16;
  pauVar1[2] = auVar15;
  pauVar1[3] = auVar14;
  *(long *)(lVar9 + 0x450) = lVar10;
  *(long *)(lVar9 + 0x458) = lVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long)#1},
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, unsigned long, embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long)#1}
   const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,unsigned_long,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>,embree::sse2::createPrimRefArray(embree::Scene*,embree::Geometry::GTypeMask,bool,unsigned_long,embree::vector_t<embree::PrimRef,embree::aligned_monitored_allocator<embree::PrimRef,32ul>>&,embree::vector_t<embree::SubGridBuildData,embree::aligned_monitored_allocator<embree::SubGridBuildData,4ul>>&,embree::BuildProgressMonitor&)::{lambda(embree::Geometry*,embree::range<unsigned_long>const&,unsigned_long,unsigned_long,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#1},embree::sse2::createPrimRefArray(embree::Scene*,embree::Geometry::GTypeMask,bool,unsigned_long,embree::vector_t<embree::PrimRef,embree::aligned_monitored_allocator<embree::PrimRef,32ul>>&,embree::vector_t<embree::SubGridBuildData,embree::aligned_monitored_allocator<embree::SubGridBuildData,4ul>>&,embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<...embree::BBox<embree::Vec3fa>>const&,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#2}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong local_a8;
  ulong local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  long local_50;
  long local_40;
  
  lVar9 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(lVar9 + param_1 * 8);
  uVar12 = *(ulong *)(lVar9 + 0x200 + param_1 * 8);
  uVar13 = param_1 * *(long *)(lVar9 + 0x408);
  uVar4 = uVar13 / **(ulong **)(this + 8);
  uVar13 = (uVar13 + *(long *)(lVar9 + 0x408)) / **(ulong **)(this + 8);
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  auVar17 = *pauVar1;
  auVar16 = pauVar1[1];
  auVar15 = pauVar1[2];
  auVar14 = pauVar1[3];
  lVar10 = *(long *)pauVar1[4];
  lVar5 = *(long *)(pauVar1[4] + 8);
  if (uVar4 < uVar13) {
    do {
      plVar3 = (long *)**(long **)(this + 0x18);
      lVar6 = *(long *)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
      if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x3e) & 0x20) == 0)) ||
         (((long)(1 << (*(byte *)(lVar6 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if ((*(int *)(lVar6 + 0x24) != 1) == (bool)(char)plVar3[2]) {
          uVar7 = (uVar12 + uVar13) - uVar4;
          if (*(uint *)(lVar6 + 0x20) < uVar7) {
            uVar7 = (ulong)*(uint *)(lVar6 + 0x20);
          }
          if (uVar12 < uVar7) {
            lVar9 = lVar9 + param_1 * 0x50;
            puVar2 = (undefined8 *)**(long **)(this + 0x28);
            plVar3 = (long *)(*(long **)(this + 0x28))[1];
            plVar8 = *(long **)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
            if (plVar8 != (long *)0x0) {
              if (((*(byte *)((long)plVar8 + 0x3e) & 0x20) == 0) ||
                 (((long)(1 << (*(byte *)((long)plVar8 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
                plVar8 = (long *)0x0;
              }
              else if ((*(int *)((long)plVar8 + 0x24) != 1) != (bool)(char)plVar3[2]) {
                plVar8 = (long *)0x0;
              }
            }
            local_a8 = uVar12;
            local_a0 = uVar7;
            (**(code **)(*plVar8 + 0x170))
                      (local_98,plVar8,*puVar2,puVar2[1],&local_a8,
                       ((*(long *)(lVar9 + 0x1858) - lVar10) + lVar5) - *(long *)(lVar9 + 0x1850),
                       lVar11);
            lVar9 = *(long *)this;
            auVar17 = minps(auVar17,local_98);
            auVar16 = maxps(auVar16,local_88);
            auVar15 = minps(auVar15,local_78);
            auVar14 = maxps(auVar14,local_68);
            lVar10 = lVar10 + local_58;
            lVar5 = lVar5 + local_50;
          }
        }
      }
      lVar6 = uVar4 - uVar12;
      lVar11 = lVar11 + 1;
      uVar12 = 0;
      uVar4 = lVar6 + uVar7;
    } while (uVar4 < uVar13);
  }
  pauVar1 = (undefined1 (*) [16])(lVar9 + 0x410 + param_1 * 0x50);
  lVar9 = lVar9 + param_1 * 0x50;
  *pauVar1 = auVar17;
  pauVar1[1] = auVar16;
  pauVar1[2] = auVar15;
  pauVar1[3] = auVar14;
  *(long *)(lVar9 + 0x450) = lVar10;
  *(long *)(lVar9 + 0x458) = lVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,
   unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long>
   const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>
   > const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long>
   const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>
   > const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long, embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>
   > const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, unsigned long, embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long>
   const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>
   > const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1} const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long>
   const&, unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#1}, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool,
   unsigned long, embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::Geometry*, embree::range<unsigned long> const&,
   unsigned long, unsigned long, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>
   > const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long, embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>
   > const&, embree::PrimInfoT<embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,unsigned_long,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>,embree::sse2::createPrimRefArray(embree::Scene*,embree::Geometry::GTypeMask,bool,unsigned_long,embree::vector_t<embree::PrimRef,embree::aligned_monitored_allocator<embree::PrimRef,32ul>>&,embree::BuildProgressMonitor&)::{lambda(embree::Geometry*,embree::range<unsigned_long>const&,unsigned_long,unsigned_long,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#1},embree::sse2::createPrimRefArray(embree::Scene*,embree::Geometry::GTypeMask,bool,unsigned_long,embree::vector_t<embree::PrimRef,embree::aligned_monitored_allocator<embree::PrimRef,32ul>>&,embree::BuildProgressMonitor&)::{lambda(embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoT<embree::BBox<embree::Vec3fa>>>&,embree::Scene::Iterator2&,unsigned_long,embree::Pri...embree::BBox<embree::Vec3fa>>const&,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&)#2}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long local_110;
  ulong local_a8;
  ulong local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  long local_50;
  long local_40;
  
  lVar8 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *(ulong *)(lVar8 + param_1 * 8);
  uVar10 = *(ulong *)(lVar8 + 0x200 + param_1 * 8);
  uVar11 = param_1 * *(long *)(lVar8 + 0x408);
  uVar3 = uVar11 / **(ulong **)(this + 8);
  uVar11 = (uVar11 + *(long *)(lVar8 + 0x408)) / **(ulong **)(this + 8);
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  local_110 = *(long *)pauVar1[4];
  auVar15 = *pauVar1;
  auVar14 = pauVar1[1];
  auVar13 = pauVar1[2];
  auVar12 = pauVar1[3];
  lVar4 = *(long *)(pauVar1[4] + 8);
  if (uVar3 < uVar11) {
    do {
      plVar2 = (long *)**(long **)(this + 0x18);
      lVar5 = *(long *)(*(long *)(*plVar2 + 0x1e0) + uVar9 * 8);
      if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0x3e) & 0x20) == 0)) ||
         (((long)(1 << (*(byte *)(lVar5 + 0x3c) & 0x1f)) & plVar2[1]) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((*(int *)(lVar5 + 0x24) != 1) == (bool)(char)plVar2[2]) {
          uVar6 = (uVar10 + uVar11) - uVar3;
          if (*(uint *)(lVar5 + 0x20) < uVar6) {
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
          }
          if (uVar10 < uVar6) {
            lVar8 = lVar8 + param_1 * 0x50;
            plVar2 = (long *)(*(undefined8 **)(this + 0x28))[1];
            plVar7 = *(long **)(*(long *)(*plVar2 + 0x1e0) + uVar9 * 8);
            if (plVar7 != (long *)0x0) {
              if (((*(byte *)((long)plVar7 + 0x3e) & 0x20) == 0) ||
                 (((long)(1 << (*(byte *)((long)plVar7 + 0x3c) & 0x1f)) & plVar2[1]) == 0)) {
                plVar7 = (long *)0x0;
              }
              else if ((*(int *)((long)plVar7 + 0x24) != 1) != (bool)(char)plVar2[2]) {
                plVar7 = (long *)0x0;
              }
            }
            local_a8 = uVar10;
            local_a0 = uVar6;
            (**(code **)(*plVar7 + 0x168))
                      (local_98,plVar7,
                       *(undefined8 *)(*(long *)**(undefined8 **)(this + 0x28) + 0x20),&local_a8,
                       ((*(long *)(lVar8 + 0x1858) - local_110) + lVar4) - *(long *)(lVar8 + 0x1850)
                       ,uVar9 & 0xffffffff);
            lVar8 = *(long *)this;
            auVar15 = minps(auVar15,local_98);
            auVar14 = maxps(auVar14,local_88);
            auVar13 = minps(auVar13,local_78);
            auVar12 = maxps(auVar12,local_68);
            local_110 = local_110 + local_58;
            lVar4 = lVar4 + local_50;
          }
        }
      }
      lVar5 = uVar3 - uVar10;
      uVar9 = uVar9 + 1;
      uVar10 = 0;
      uVar3 = lVar5 + uVar6;
    } while (uVar3 < uVar11);
  }
  pauVar1 = (undefined1 (*) [16])(lVar8 + 0x410 + param_1 * 0x50);
  lVar8 = lVar8 + param_1 * 0x50;
  *pauVar1 = auVar15;
  pauVar1[1] = auVar14;
  pauVar1[2] = auVar13;
  pauVar1[3] = auVar12;
  *(long *)(lVar8 + 0x450) = local_110;
  *(long *)(lVar8 + 0x458) = lVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::parallel_for_for_prefix_sum0_<embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2,
   unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned
   long)#1}, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, unsigned long, embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2, unsigned
   long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned long)#1}
   const&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_for_for_prefix_sum0_<embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2,unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::vector_t<embree::SubGridBuildData,embree::aligned_monitored_allocator<embree::SubGridBuildData,4ul>>&,embree::BuildProgressMonitor&,embree::BBox<float>)::{lambda(embree::Geometry*,embree::range<unsigned_long>const&,unsigned_long,unsigned_long)#1},embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::vector_t<embree::SubGridBuildData,embree::aligned_monitored_allocator<embree::SubGridBuildData,4ul>>&,embree::BuildProgressMonitor&,embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LB...ee::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#1}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong local_180;
  long local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  ulong local_e8;
  ulong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  lVar7 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(lVar7 + param_1 * 8);
  uVar12 = *(ulong *)(lVar7 + 0x200 + param_1 * 8);
  uVar13 = param_1 * *(long *)(lVar7 + 0x408);
  uVar5 = uVar13 / **(ulong **)(this + 8);
  uVar13 = (uVar13 + *(long *)(lVar7 + 0x408)) / **(ulong **)(this + 8);
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  local_100 = *(long *)pauVar1[7];
  auVar21 = *pauVar1;
  auVar20 = pauVar1[1];
  auVar19 = pauVar1[2];
  auVar18 = pauVar1[3];
  auVar17 = pauVar1[4];
  auVar16 = pauVar1[5];
  lVar10 = *(long *)pauVar1[6];
  lVar6 = *(long *)(pauVar1[6] + 8);
  local_180 = *(ulong *)(pauVar1[7] + 8);
  fVar15 = *(float *)(pauVar1[8] + 8);
  local_f8 = *(undefined4 *)pauVar1[8];
  fVar14 = *(float *)(pauVar1[8] + 0xc);
  local_f4 = *(undefined4 *)(pauVar1[8] + 4);
  if (uVar5 < uVar13) {
    do {
      plVar3 = (long *)**(long **)(this + 0x18);
      lVar7 = *(long *)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
      if (((lVar7 == 0) || ((*(byte *)(lVar7 + 0x3e) & 0x20) == 0)) ||
         (((long)(1 << (*(byte *)(lVar7 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if ((*(int *)(lVar7 + 0x24) != 1) == (bool)(char)plVar3[2]) {
          uVar8 = (uVar13 + uVar12) - uVar5;
          if (*(uint *)(lVar7 + 0x20) < uVar8) {
            uVar8 = (ulong)*(uint *)(lVar7 + 0x20);
          }
          if (uVar12 < uVar8) {
            plVar3 = (long *)(*(long **)(this + 0x28))[1];
            puVar2 = (undefined8 *)**(long **)(this + 0x28);
            plVar9 = *(long **)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
            if (plVar9 != (long *)0x0) {
              if (((*(byte *)((long)plVar9 + 0x3e) & 0x20) == 0) ||
                 (((long)(1 << (*(byte *)((long)plVar9 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
                plVar9 = (long *)0x0;
              }
              else if ((*(int *)((long)plVar9 + 0x24) != 1) != (bool)(char)plVar3[2]) {
                plVar9 = (long *)0x0;
              }
            }
            local_e8 = uVar12;
            local_e0 = uVar8;
            (**(code **)(*plVar9 + 400))
                      (local_d8,plVar9,*puVar2,puVar2[1],puVar2[2],&local_e8,uVar5,lVar11);
            auVar21 = minps(auVar21,local_d8);
            auVar20 = maxps(auVar20,local_c8);
            auVar19 = minps(auVar19,local_b8);
            auVar18 = maxps(auVar18,local_a8);
            auVar17 = minps(auVar17,local_98);
            auVar16 = maxps(auVar16,local_88);
            fVar4 = local_4c;
            if (local_4c <= fVar14) {
              fVar4 = fVar14;
            }
            fVar14 = fVar4;
            local_100 = local_100 + local_68;
            if (local_50 <= fVar15) {
              fVar15 = local_50;
            }
            lVar10 = lVar10 + local_78;
            lVar6 = lVar6 + local_70;
            if (local_180 < local_60) {
              local_180 = local_60;
              local_f8 = local_58;
              local_f4 = local_54;
            }
          }
        }
      }
      lVar7 = uVar5 - uVar12;
      lVar11 = lVar11 + 1;
      uVar12 = 0;
      uVar5 = lVar7 + uVar8;
    } while (uVar5 < uVar13);
    lVar7 = *(long *)this;
  }
  lVar11 = param_1 * 0x90;
  pauVar1 = (undefined1 (*) [16])(lVar7 + 0x410 + lVar11);
  plVar3 = (long *)(lVar7 + 0x470 + lVar11);
  *pauVar1 = auVar21;
  pauVar1[1] = auVar20;
  pauVar1[2] = auVar19;
  pauVar1[3] = auVar18;
  pauVar1[4] = auVar17;
  pauVar1[5] = auVar16;
  plVar3[1] = lVar6;
  *plVar3 = lVar10;
  *(long *)(lVar7 + lVar11 + 0x480) = local_100;
  *(ulong *)(lVar7 + lVar11 + 0x488) = local_180;
  *(undefined4 *)pauVar1[8] = local_f8;
  *(undefined4 *)(pauVar1[8] + 4) = local_f4;
  *(float *)(pauVar1[8] + 8) = fVar15;
  *(float *)(pauVar1[8] + 0xc) = fVar14;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::parallel_for_for_prefix_sum0_<embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2,
   unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long)#1} const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,
   embree::Geometry::GTypeMask, unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned
   long)#1}, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long)#1} const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,
   embree::Geometry::GTypeMask, unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, unsigned long, embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2, unsigned
   long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long)#1} const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,
   embree::Geometry::GTypeMask, unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned long)#1}
   const&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long)#1} const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,
   embree::Geometry::GTypeMask, unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_for_for_prefix_sum0_<embree::parallel_for_for_prefix_sum0<embree::Scene::Iterator2,unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::BuildProgressMonitor&,embree::BBox<float>)::{lambda(embree::Geometry*,embree::range<unsigned_long>const&,unsigned_long,unsigned_long)#1},embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::BuildProgressMonitor&,embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#1}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>>&,embree::Scene::Iterator2&,unsigned_long,e...ee::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#1}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong local_180;
  undefined4 local_f8;
  undefined4 local_f4;
  ulong local_e8;
  ulong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  lVar9 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(lVar9 + param_1 * 8);
  uVar12 = *(ulong *)(lVar9 + 0x200 + param_1 * 8);
  uVar13 = param_1 * *(long *)(lVar9 + 0x408);
  uVar5 = uVar13 / **(ulong **)(this + 8);
  uVar13 = (uVar13 + *(long *)(lVar9 + 0x408)) / **(ulong **)(this + 8);
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  auVar22 = *pauVar1;
  auVar21 = pauVar1[1];
  auVar20 = pauVar1[2];
  auVar19 = pauVar1[3];
  auVar18 = pauVar1[4];
  auVar17 = pauVar1[5];
  lVar14 = *(long *)pauVar1[6];
  lVar10 = *(long *)(pauVar1[6] + 8);
  lVar11 = *(long *)pauVar1[7];
  local_180 = *(ulong *)(pauVar1[7] + 8);
  fVar16 = *(float *)(pauVar1[8] + 8);
  fVar15 = *(float *)(pauVar1[8] + 0xc);
  local_f8 = *(undefined4 *)pauVar1[8];
  local_f4 = *(undefined4 *)(pauVar1[8] + 4);
  if (uVar5 < uVar13) {
    do {
      plVar3 = (long *)**(long **)(this + 0x18);
      lVar9 = *(long *)(*(long *)(*plVar3 + 0x1e0) + lVar7 * 8);
      if (((lVar9 == 0) || ((*(byte *)(lVar9 + 0x3e) & 0x20) == 0)) ||
         (((long)(1 << (*(byte *)(lVar9 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((*(int *)(lVar9 + 0x24) != 1) == (bool)(char)plVar3[2]) {
          uVar6 = (uVar13 + uVar12) - uVar5;
          if (*(uint *)(lVar9 + 0x20) < uVar6) {
            uVar6 = (ulong)*(uint *)(lVar9 + 0x20);
          }
          if (uVar12 < uVar6) {
            plVar3 = (long *)(*(long **)(this + 0x28))[1];
            puVar2 = (undefined8 *)**(long **)(this + 0x28);
            plVar8 = *(long **)(*(long *)(*plVar3 + 0x1e0) + lVar7 * 8);
            if (plVar8 != (long *)0x0) {
              if (((*(byte *)((long)plVar8 + 0x3e) & 0x20) == 0) ||
                 (((long)(1 << (*(byte *)((long)plVar8 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
                plVar8 = (long *)0x0;
              }
              else if ((*(int *)((long)plVar8 + 0x24) != 1) != (bool)(char)plVar3[2]) {
                plVar8 = (long *)0x0;
              }
            }
            local_e8 = uVar12;
            local_e0 = uVar6;
            (**(code **)(*plVar8 + 0x188))(local_d8,plVar8,*puVar2,puVar2[1],&local_e8,uVar5,lVar7);
            auVar22 = minps(auVar22,local_d8);
            auVar21 = maxps(auVar21,local_c8);
            auVar20 = minps(auVar20,local_b8);
            auVar19 = maxps(auVar19,local_a8);
            auVar18 = minps(auVar18,local_98);
            auVar17 = maxps(auVar17,local_88);
            lVar14 = lVar14 + local_78;
            fVar4 = local_4c;
            if (local_4c <= fVar15) {
              fVar4 = fVar15;
            }
            fVar15 = fVar4;
            lVar10 = lVar10 + local_70;
            lVar11 = lVar11 + local_68;
            if (local_50 <= fVar16) {
              fVar16 = local_50;
            }
            if (local_180 < local_60) {
              local_180 = local_60;
              local_f8 = local_58;
              local_f4 = local_54;
            }
          }
        }
      }
      lVar9 = uVar5 - uVar12;
      lVar7 = lVar7 + 1;
      uVar12 = 0;
      uVar5 = lVar9 + uVar6;
    } while (uVar5 < uVar13);
    lVar9 = *(long *)this;
  }
  lVar7 = param_1 * 0x90;
  pauVar1 = (undefined1 (*) [16])(lVar9 + 0x410 + lVar7);
  plVar3 = (long *)(lVar9 + 0x470 + lVar7);
  *pauVar1 = auVar22;
  pauVar1[1] = auVar21;
  pauVar1[2] = auVar20;
  pauVar1[3] = auVar19;
  pauVar1[4] = auVar18;
  pauVar1[5] = auVar17;
  *plVar3 = lVar14;
  plVar3[1] = lVar10;
  *(long *)(lVar9 + lVar7 + 0x480) = lVar11;
  *(ulong *)(lVar9 + lVar7 + 0x488) = local_180;
  *(undefined4 *)pauVar1[8] = local_f8;
  *(undefined4 *)(pauVar1[8] + 4) = local_f4;
  *(float *)(pauVar1[8] + 8) = fVar16;
  *(float *)(pauVar1[8] + 0xc) = fVar15;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,
   unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, unsigned long, embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned
   long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long)#1}
   const&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::vector_t<embree::SubGridBuildData,embree::aligned_monitored_allocator<embree::SubGridBuildData,4ul>>&,embree::BuildProgressMonitor&,embree::BBox<float>)::{lambda(embree::Geometry*,embree::range<unsigned_long>const&,unsigned_long,unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#1},embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::vector_t<embree::SubGridBuildData,embree::aligned_monitored_allocator<embree::SubGridBuildData,4ul>>&,embree::BuildProgressMonitor&,emb...ee::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#2}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long local_198;
  long local_190;
  ulong local_128;
  long local_118;
  undefined4 local_108;
  undefined4 local_104;
  ulong local_e8;
  ulong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  lVar10 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(lVar10 + param_1 * 8);
  uVar12 = *(ulong *)(lVar10 + 0x200 + param_1 * 8);
  uVar13 = param_1 * *(long *)(lVar10 + 0x408);
  uVar5 = uVar13 / **(ulong **)(this + 8);
  uVar13 = (uVar13 + *(long *)(lVar10 + 0x408)) / **(ulong **)(this + 8);
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  local_198 = *(long *)(pauVar1[6] + 8);
  auVar21 = *pauVar1;
  auVar20 = pauVar1[1];
  auVar19 = pauVar1[2];
  auVar18 = pauVar1[3];
  auVar17 = pauVar1[4];
  auVar16 = pauVar1[5];
  local_190 = *(long *)pauVar1[6];
  local_118 = *(long *)pauVar1[7];
  local_128 = *(ulong *)(pauVar1[7] + 8);
  fVar15 = *(float *)(pauVar1[8] + 8);
  fVar14 = *(float *)(pauVar1[8] + 0xc);
  local_108 = *(undefined4 *)pauVar1[8];
  local_104 = *(undefined4 *)(pauVar1[8] + 4);
  lVar6 = param_1 * 0x90;
  if (uVar5 < uVar13) {
    do {
      plVar3 = (long *)**(long **)(this + 0x18);
      lVar7 = *(long *)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
      if (((lVar7 == 0) || ((*(byte *)(lVar7 + 0x3e) & 0x20) == 0)) ||
         (((long)(1 << (*(byte *)(lVar7 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if ((*(int *)(lVar7 + 0x24) != 1) == (bool)(char)plVar3[2]) {
          uVar8 = (uVar13 + uVar12) - uVar5;
          if (*(uint *)(lVar7 + 0x20) < uVar8) {
            uVar8 = (ulong)*(uint *)(lVar7 + 0x20);
          }
          if (uVar12 < uVar8) {
            lVar10 = lVar10 + lVar6 + 0x2810;
            puVar2 = (undefined8 *)**(long **)(this + 0x28);
            plVar3 = (long *)(*(long **)(this + 0x28))[1];
            plVar9 = *(long **)(*(long *)(*plVar3 + 0x1e0) + lVar11 * 8);
            if (plVar9 != (long *)0x0) {
              if (((*(byte *)((long)plVar9 + 0x3e) & 0x20) == 0) ||
                 (((long)(1 << (*(byte *)((long)plVar9 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
                plVar9 = (long *)0x0;
              }
              else if ((*(int *)((long)plVar9 + 0x24) != 1) != (bool)(char)plVar3[2]) {
                plVar9 = (long *)0x0;
              }
            }
            local_e8 = uVar12;
            local_e0 = uVar8;
            (**(code **)(*plVar9 + 400))
                      (local_d8,plVar9,*puVar2,puVar2[1],puVar2[2],&local_e8,
                       ((local_198 - local_190) + *(long *)(lVar10 + 0x68)) -
                       *(long *)(lVar10 + 0x60),lVar11);
            auVar21 = minps(auVar21,local_d8);
            auVar20 = maxps(auVar20,local_c8);
            auVar19 = minps(auVar19,local_b8);
            auVar18 = maxps(auVar18,local_a8);
            auVar17 = minps(auVar17,local_98);
            auVar16 = maxps(auVar16,local_88);
            local_190 = local_190 + local_78;
            local_118 = local_118 + local_68;
            fVar4 = local_4c;
            if (local_4c <= fVar14) {
              fVar4 = fVar14;
            }
            fVar14 = fVar4;
            local_198 = local_198 + local_70;
            if (local_50 <= fVar15) {
              fVar15 = local_50;
            }
            if (local_128 < local_60) {
              local_128 = local_60;
              local_108 = local_58;
              local_104 = local_54;
            }
            lVar10 = *(long *)this;
          }
        }
      }
      lVar7 = uVar5 - uVar12;
      lVar11 = lVar11 + 1;
      uVar12 = 0;
      uVar5 = lVar7 + uVar8;
    } while (uVar5 < uVar13);
  }
  pauVar1 = (undefined1 (*) [16])(lVar10 + 0x410 + lVar6);
  plVar3 = (long *)(lVar10 + 0x470 + lVar6);
  *pauVar1 = auVar21;
  pauVar1[1] = auVar20;
  lVar10 = lVar10 + param_1 * 0x90;
  pauVar1[2] = auVar19;
  pauVar1[3] = auVar18;
  pauVar1[4] = auVar17;
  pauVar1[5] = auVar16;
  *plVar3 = local_190;
  plVar3[1] = local_198;
  *(long *)(lVar10 + 0x480) = local_118;
  *(ulong *)(lVar10 + 0x488) = local_128;
  *(undefined4 *)pauVar1[8] = local_108;
  *(undefined4 *)(pauVar1[8] + 4) = local_104;
  *(float *)(pauVar1[8] + 8) = fVar15;
  *(float *)(pauVar1[8] + 0xc) = fVar14;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,
   unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, unsigned long, embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned
   long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long)#1}
   const&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>)::{lambda(embree::Geometry*,
   embree::range<unsigned long> const&, unsigned long, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1},
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > >&, embree::Scene::Iterator2&, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   > const&, embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask,
   unsigned long, embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::Geometry*, embree::range<unsigned long> const&, unsigned
   long, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned long,
   embree::range<unsigned long> const&, unsigned long,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#1} const&,
   embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&,
   embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_for_for_prefix_sum1_<embree::parallel_for_for_prefix_sum1<embree::Scene::Iterator2,unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::BuildProgressMonitor&,embree::BBox<float>)::{lambda(embree::Geometry*,embree::range<unsigned_long>const&,unsigned_long,unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#1},embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*,embree::Geometry::GTypeMask,unsigned_long,embree::vector_t<embree::PrimRefMB,embree::aligned_monitored_allocator<embree::PrimRefMB,16ul>>&,embree::BuildProgressMonitor&,embree::BBox<float>)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#2}>(embree::ParallelForForPrefixSumState<embree::PrimInfoMBT<embree::LBBox<emb...ee::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#2}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong local_198;
  long local_118;
  undefined4 local_108;
  undefined4 local_104;
  ulong local_e8;
  ulong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  lVar11 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = *(long *)(lVar11 + param_1 * 8);
  uVar14 = *(ulong *)(lVar11 + 0x200 + param_1 * 8);
  uVar15 = param_1 * *(long *)(lVar11 + 0x408);
  uVar5 = uVar15 / **(ulong **)(this + 8);
  uVar15 = (uVar15 + *(long *)(lVar11 + 0x408)) / **(ulong **)(this + 8);
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  local_118 = *(long *)pauVar1[7];
  auVar23 = *pauVar1;
  auVar22 = pauVar1[1];
  auVar21 = pauVar1[2];
  auVar20 = pauVar1[3];
  auVar19 = pauVar1[4];
  auVar18 = pauVar1[5];
  lVar12 = *(long *)pauVar1[6];
  lVar6 = *(long *)(pauVar1[6] + 8);
  local_198 = *(ulong *)(pauVar1[7] + 8);
  fVar17 = *(float *)(pauVar1[8] + 8);
  local_108 = *(undefined4 *)pauVar1[8];
  fVar16 = *(float *)(pauVar1[8] + 0xc);
  local_104 = *(undefined4 *)(pauVar1[8] + 4);
  lVar7 = param_1 * 0x90;
  if (uVar5 < uVar15) {
    do {
      plVar3 = (long *)**(long **)(this + 0x18);
      lVar8 = *(long *)(*(long *)(*plVar3 + 0x1e0) + lVar13 * 8);
      if (((lVar8 == 0) || ((*(byte *)(lVar8 + 0x3e) & 0x20) == 0)) ||
         (((long)(1 << (*(byte *)(lVar8 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if ((*(int *)(lVar8 + 0x24) != 1) == (bool)(char)plVar3[2]) {
          uVar9 = (uVar15 + uVar14) - uVar5;
          if (*(uint *)(lVar8 + 0x20) < uVar9) {
            uVar9 = (ulong)*(uint *)(lVar8 + 0x20);
          }
          if (uVar14 < uVar9) {
            plVar3 = (long *)(*(long **)(this + 0x28))[1];
            lVar11 = lVar7 + 0x2810 + lVar11;
            puVar2 = (undefined8 *)**(long **)(this + 0x28);
            plVar10 = *(long **)(*(long *)(*plVar3 + 0x1e0) + lVar13 * 8);
            if (plVar10 != (long *)0x0) {
              if (((*(byte *)((long)plVar10 + 0x3e) & 0x20) == 0) ||
                 (((long)(1 << (*(byte *)((long)plVar10 + 0x3c) & 0x1f)) & plVar3[1]) == 0)) {
                plVar10 = (long *)0x0;
              }
              else if ((*(int *)((long)plVar10 + 0x24) != 1) != (bool)(char)plVar3[2]) {
                plVar10 = (long *)0x0;
              }
            }
            local_e8 = uVar14;
            local_e0 = uVar9;
            (**(code **)(*plVar10 + 0x188))
                      (local_d8,plVar10,*puVar2,puVar2[1],&local_e8,
                       ((lVar6 - lVar12) + *(long *)(lVar11 + 0x68)) - *(long *)(lVar11 + 0x60),
                       lVar13);
            auVar23 = minps(auVar23,local_d8);
            auVar22 = maxps(auVar22,local_c8);
            auVar21 = minps(auVar21,local_b8);
            auVar20 = maxps(auVar20,local_a8);
            auVar19 = minps(auVar19,local_98);
            auVar18 = maxps(auVar18,local_88);
            fVar4 = local_4c;
            if (local_4c <= fVar16) {
              fVar4 = fVar16;
            }
            fVar16 = fVar4;
            local_118 = local_118 + local_68;
            if (local_50 <= fVar17) {
              fVar17 = local_50;
            }
            lVar12 = lVar12 + local_78;
            lVar6 = lVar6 + local_70;
            if (local_198 < local_60) {
              local_198 = local_60;
              local_108 = local_58;
              local_104 = local_54;
            }
            lVar11 = *(long *)this;
          }
        }
      }
      lVar8 = uVar5 - uVar14;
      lVar13 = lVar13 + 1;
      uVar14 = 0;
      uVar5 = lVar8 + uVar9;
    } while (uVar5 < uVar15);
  }
  pauVar1 = (undefined1 (*) [16])(lVar11 + 0x410 + lVar7);
  plVar3 = (long *)(lVar11 + 0x470 + lVar7);
  *pauVar1 = auVar23;
  pauVar1[1] = auVar22;
  lVar11 = lVar11 + param_1 * 0x90;
  pauVar1[2] = auVar21;
  pauVar1[3] = auVar20;
  pauVar1[4] = auVar19;
  pauVar1[5] = auVar18;
  plVar3[1] = lVar6;
  *plVar3 = lVar12;
  *(long *)(lVar11 + 0x480) = local_118;
  *(ulong *)(lVar11 + 0x488) = local_198;
  *(undefined4 *)pauVar1[8] = local_108;
  *(undefined4 *)(pauVar1[8] + 4) = local_104;
  *(float *)(pauVar1[8] + 8) = fVar17;
  *(float *)(pauVar1[8] + 0xc) = fVar16;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::sse2::createPrimRefArray(embree::Geometry*, unsigned int, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&) */

sse2 * __thiscall
embree::sse2::createPrimRefArray
          (sse2 *this,Geometry *param_1,uint param_2,ulong param_3,vector_t *param_4,
          BuildProgressMonitor *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_28d4;
  Geometry *local_28d0 [2];
  long local_28c0;
  ulong local_28b8;
  ulong local_28b0;
  long local_28a8;
  long local_28a0;
  Geometry **local_2898;
  vector_t *local_2890;
  uint *local_2888;
  long *local_2878;
  ulong *local_2870;
  ulong *local_2868;
  undefined1 (*local_2860) [16];
  Geometry ***local_2858;
  undefined1 local_2848 [10248];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_28d4 = param_2;
  local_28d0[0] = param_1;
  if ((code *)**(undefined8 **)param_5 == Scene::BuildProgressMonitorInterface::operator()) {
    embree::Scene::progressMonitor(0.0);
  }
  else {
    (*(code *)**(undefined8 **)param_5)(param_5,0);
  }
  local_28b8 = (ulong)*(uint *)(local_28d0[0] + 0x20);
  local_28c0 = 0;
  local_2898 = local_28d0;
  local_2890 = param_4;
  local_2888 = &local_28d4;
  uVar1 = embree::TaskScheduler::threadCount();
  uVar16 = _LC3;
  uVar15 = _LC1;
  uVar2 = (local_28b8 + 0x3ff) - local_28c0 >> 10;
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  local_28b0 = 0x40;
  if (uVar2 < 0x41) {
    local_28b0 = uVar2;
  }
  local_2878 = &local_28c0;
  local_2870 = &local_28b8;
  local_2868 = &local_28b0;
  local_2860 = (undefined1 (*) [16])local_2848;
  local_2858 = &local_2898;
  if (uVar2 == 0) {
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)this = uVar16;
    *(undefined4 *)(this + 4) = uVar16;
    *(undefined4 *)(this + 8) = uVar16;
    *(undefined4 *)(this + 0xc) = uVar16;
    *(undefined4 *)(this + 0x10) = uVar15;
    *(undefined4 *)(this + 0x14) = uVar15;
    *(undefined4 *)(this + 0x18) = uVar15;
    *(undefined4 *)(this + 0x1c) = uVar15;
    *(undefined4 *)(this + 0x20) = uVar16;
    *(undefined4 *)(this + 0x24) = uVar16;
    *(undefined4 *)(this + 0x28) = uVar16;
    *(undefined4 *)(this + 0x2c) = uVar16;
    *(undefined4 *)(this + 0x30) = uVar15;
    *(undefined4 *)(this + 0x34) = uVar15;
    *(undefined4 *)(this + 0x38) = uVar15;
    *(undefined4 *)(this + 0x3c) = uVar15;
LAB_0010763b:
    uVar2 = 0;
  }
  else {
    local_28a8 = 0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_19parallel_prefix_sumImNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse218createPrimRefArrayEPNS_8GeometryEjmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISD_Lm32EEEEERNS_20BuildProgressMonitorEEUlRKNS_5rangeImEERKS8_E_ZNS9_18createPrimRefArrayESB_jmSH_SJ_EUlSP_SP_E_EET0_RNS_22ParallelPrefixSumStateISS_EET_SW_SW_RKSS_RKT1_RKT2_EUlmE_EEvSW_SY_EUlSN_E_EEvSW_SW_SW_SY_PNS0_16TaskGroupContextE_isra_0
              (0,local_28b0,1,&local_2878,&local_28a8);
    embree::TaskScheduler::wait();
    uVar16 = _LC3;
    uVar15 = _LC1;
    if (local_28a8 != 0) goto LAB_001079a6;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)this = uVar16;
    *(undefined4 *)(this + 4) = uVar16;
    *(undefined4 *)(this + 8) = uVar16;
    *(undefined4 *)(this + 0xc) = uVar16;
    *(undefined4 *)(this + 0x10) = uVar15;
    *(undefined4 *)(this + 0x14) = uVar15;
    *(undefined4 *)(this + 0x18) = uVar15;
    *(undefined4 *)(this + 0x1c) = uVar15;
    *(undefined4 *)(this + 0x20) = uVar16;
    *(undefined4 *)(this + 0x24) = uVar16;
    *(undefined4 *)(this + 0x28) = uVar16;
    *(undefined4 *)(this + 0x2c) = uVar16;
    *(undefined4 *)(this + 0x30) = uVar15;
    *(undefined4 *)(this + 0x34) = uVar15;
    *(undefined4 *)(this + 0x38) = uVar15;
    *(undefined4 *)(this + 0x3c) = uVar15;
    if (local_28b0 == 0) goto LAB_0010763b;
    lVar6 = 0;
    lVar5 = 0;
    auVar7._4_4_ = uVar15;
    auVar7._0_4_ = uVar15;
    auVar7._8_4_ = uVar15;
    auVar7._12_4_ = uVar15;
    auVar9._4_4_ = uVar16;
    auVar9._0_4_ = uVar16;
    auVar9._8_4_ = uVar16;
    auVar9._12_4_ = uVar16;
    auVar11._4_4_ = uVar15;
    auVar11._0_4_ = uVar15;
    auVar11._8_4_ = uVar15;
    auVar11._12_4_ = uVar15;
    auVar13._4_4_ = uVar16;
    auVar13._0_4_ = uVar16;
    auVar13._8_4_ = uVar16;
    auVar13._12_4_ = uVar16;
    pauVar3 = (undefined1 (*) [16])local_2848;
    do {
      *(long *)pauVar3[0x144] = lVar5;
      lVar5 = lVar5 + *(long *)pauVar3[4];
      pauVar4 = pauVar3 + 5;
      pauVar3[0x140] = auVar13;
      auVar13 = minps(auVar13,*pauVar3);
      pauVar3[0x141] = auVar11;
      auVar11 = maxps(auVar11,pauVar3[1]);
      pauVar3[0x142] = auVar9;
      auVar9 = minps(auVar9,pauVar3[2]);
      pauVar3[0x143] = auVar7;
      auVar7 = maxps(auVar7,pauVar3[3]);
      *(long *)(pauVar3[0x144] + 8) = lVar6;
      lVar6 = lVar6 + *(long *)(pauVar3[4] + 8);
      pauVar3 = pauVar4;
    } while (pauVar4 != (undefined1 (*) [16])local_2848 + local_28b0 * 5);
    *(long *)(this + 0x40) = lVar5;
    *(long *)(this + 0x48) = lVar6;
    uVar2 = lVar6 - lVar5;
    *(undefined1 (*) [16])this = auVar13;
    *(undefined1 (*) [16])(this + 0x10) = auVar11;
    *(undefined1 (*) [16])(this + 0x20) = auVar9;
    *(undefined1 (*) [16])(this + 0x30) = auVar7;
  }
  if (param_3 == uVar2) goto LAB_00107877;
  if ((code *)**(undefined8 **)param_5 == Scene::BuildProgressMonitorInterface::operator()) {
    embree::Scene::progressMonitor(0.0);
  }
  else {
    (*(code *)**(undefined8 **)param_5)(param_5,0);
  }
  local_28b8 = (ulong)*(uint *)(local_28d0[0] + 0x20);
  local_28c0 = 0;
  local_2898 = local_28d0;
  local_2890 = param_4;
  local_2888 = &local_28d4;
  uVar1 = embree::TaskScheduler::threadCount();
  uVar2 = (local_28b8 + 0x3ff) - local_28c0 >> 10;
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  local_28b0 = 0x40;
  if (uVar2 < 0x41) {
    local_28b0 = uVar2;
  }
  local_2878 = &local_28c0;
  local_2870 = &local_28b8;
  local_2868 = &local_28b0;
  local_2860 = (undefined1 (*) [16])local_2848;
  local_2858 = &local_2898;
  if (uVar2 == 0) {
LAB_0010784e:
    lVar5 = 0;
    auVar8._4_4_ = uVar15;
    auVar8._0_4_ = uVar15;
    auVar8._8_4_ = uVar15;
    auVar8._12_4_ = uVar15;
    auVar10._4_4_ = uVar16;
    auVar10._0_4_ = uVar16;
    auVar10._8_4_ = uVar16;
    auVar10._12_4_ = uVar16;
    lVar6 = 0;
    auVar12._4_4_ = uVar15;
    auVar12._0_4_ = uVar15;
    auVar12._8_4_ = uVar15;
    auVar12._12_4_ = uVar15;
    auVar14._4_4_ = uVar16;
    auVar14._0_4_ = uVar16;
    auVar14._8_4_ = uVar16;
    auVar14._12_4_ = uVar16;
  }
  else {
    local_28a8 = 0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_19parallel_prefix_sumImNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse218createPrimRefArrayEPNS_8GeometryEjmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISD_Lm32EEEEERNS_20BuildProgressMonitorEEUlRKNS_5rangeImEERKS8_E0_ZNS9_18createPrimRefArrayESB_jmSH_SJ_EUlSP_SP_E0_EET0_RNS_22ParallelPrefixSumStateISS_EET_SW_SW_RKSS_RKT1_RKT2_EUlmE_EEvSW_SY_EUlSN_E_EEvSW_SW_SW_SY_PNS0_16TaskGroupContextE_isra_0
              (0,local_28b0,1,&local_2878,&local_28a8);
    embree::TaskScheduler::wait();
    auVar8._4_4_ = uVar15;
    auVar8._0_4_ = uVar15;
    auVar8._8_4_ = uVar15;
    auVar8._12_4_ = uVar15;
    auVar10._4_4_ = uVar16;
    auVar10._0_4_ = uVar16;
    auVar10._8_4_ = uVar16;
    auVar10._12_4_ = uVar16;
    if (local_28a8 != 0) {
LAB_001079a6:
      local_28a0 = local_28a8;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_28a0);
    }
    if (local_28b0 == 0) goto LAB_0010784e;
    lVar5 = 0;
    lVar6 = 0;
    pauVar3 = (undefined1 (*) [16])local_2848;
    auVar12 = auVar8;
    auVar14 = auVar10;
    do {
      *(long *)pauVar3[0x144] = lVar6;
      lVar6 = lVar6 + *(long *)pauVar3[4];
      pauVar4 = pauVar3 + 5;
      pauVar3[0x140] = auVar14;
      auVar14 = minps(auVar14,*pauVar3);
      pauVar3[0x141] = auVar12;
      auVar12 = maxps(auVar12,pauVar3[1]);
      pauVar3[0x142] = auVar10;
      auVar10 = minps(auVar10,pauVar3[2]);
      pauVar3[0x143] = auVar8;
      auVar8 = maxps(auVar8,pauVar3[3]);
      *(long *)(pauVar3[0x144] + 8) = lVar5;
      lVar5 = lVar5 + *(long *)(pauVar3[4] + 8);
      pauVar3 = pauVar4;
    } while ((undefined1 (*) [16])local_2848 + local_28b0 * 5 != pauVar4);
  }
  *(long *)(this + 0x40) = lVar6;
  *(long *)(this + 0x48) = lVar5;
  *(undefined1 (*) [16])this = auVar14;
  *(undefined1 (*) [16])(this + 0x10) = auVar12;
  *(undefined1 (*) [16])(this + 0x20) = auVar10;
  *(undefined1 (*) [16])(this + 0x30) = auVar8;
LAB_00107877:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::BuildProgressMonitor&) */

sse2 * __thiscall
embree::sse2::createPrimRefArray
          (sse2 *this,long param_1,ulong param_3,char param_4,long param_5,undefined8 param_6,
          undefined8 *param_7)

{
  long *plVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 local_2d31;
  undefined8 local_2d30;
  ulong local_2d28;
  long local_2d20;
  long *local_2d18;
  long local_2d10;
  undefined8 *local_2d08;
  long *local_2d00;
  long local_2cf8;
  ulong local_2cf0;
  char local_2ce8;
  long *local_2cd8;
  ulong *local_2cd0;
  undefined4 *local_2cc8;
  long **local_2cc0;
  undefined1 *local_2cb8;
  undefined8 **local_2cb0;
  undefined4 local_2ca8;
  undefined4 uStack_2ca4;
  undefined4 uStack_2ca0;
  undefined4 uStack_2c9c;
  undefined4 local_2c98;
  undefined4 uStack_2c94;
  undefined4 uStack_2c90;
  undefined4 uStack_2c8c;
  undefined4 local_2c88;
  undefined4 uStack_2c84;
  undefined4 uStack_2c80;
  undefined4 uStack_2c7c;
  undefined4 local_2c78;
  undefined4 uStack_2c74;
  undefined4 uStack_2c70;
  undefined4 uStack_2c6c;
  long local_2c68;
  long local_2c60;
  long local_2c58 [64];
  ulong local_2a58 [64];
  ulong local_2858;
  ulong local_2850;
  undefined1 local_2848 [10248];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2858 = 0;
  local_2cf8 = param_1;
  local_2cf0 = param_3;
  local_2ce8 = param_4;
  if (*(code **)*param_7 == Scene::BuildProgressMonitorInterface::operator()) {
    embree::Scene::progressMonitor(0.0);
  }
  else {
    (**(code **)*param_7)(param_7,0);
  }
  if (*(long *)(local_2cf8 + 0x1d0) == 0) {
    local_2850 = 0;
    embree::TaskScheduler::threadCount();
    local_2858 = 1;
LAB_001080e3:
    local_2a58[0] = 0;
    local_2c58[0] = 0;
    local_2d28 = 1;
  }
  else {
    plVar6 = *(long **)(local_2cf8 + 0x1e0);
    uVar14 = 0;
    plVar1 = plVar6 + *(long *)(local_2cf8 + 0x1d0);
    do {
      lVar15 = *plVar6;
      if ((((lVar15 != 0) && ((*(byte *)(lVar15 + 0x3e) & 0x20) != 0)) &&
          (((long)(1 << (*(byte *)(lVar15 + 0x3c) & 0x1f)) & local_2cf0) != 0)) &&
         ((*(int *)(lVar15 + 0x24) != 1) == (bool)local_2ce8)) {
        uVar14 = uVar14 + *(uint *)(lVar15 + 0x20);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    local_2850 = uVar14;
    uVar2 = embree::TaskScheduler::threadCount();
    local_2c58[0] = 0;
    local_2a58[0] = 0;
    uVar4 = uVar14 + 0x3ff >> 10;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    local_2d28 = 0x40;
    if (uVar4 < 0x41) {
      local_2d28 = uVar4;
    }
    if (local_2d28 == 0) {
      local_2d28 = 1;
    }
    uVar2 = uVar14 / local_2d28;
    local_2858 = local_2d28;
    if (uVar4 < 2) goto LAB_001080e3;
    uVar12 = 1;
    lVar15 = 0;
    uVar4 = 0;
    do {
      lVar10 = *(long *)(*(long *)(local_2cf8 + 0x1e0) + lVar15 * 8);
      uVar7 = uVar4;
      if (((((lVar10 != 0) && ((*(byte *)(lVar10 + 0x3e) & 0x20) != 0)) &&
           (((local_2cf0 & (long)(1 << (*(byte *)(lVar10 + 0x3c) & 0x1f))) != 0 &&
            (((*(int *)(lVar10 + 0x24) != 1) == (bool)local_2ce8 &&
             (uVar16 = (ulong)*(uint *)(lVar10 + 0x20), uVar16 != 0)))))) &&
          (uVar7 = uVar4 + uVar16, uVar12 < local_2d28)) && (uVar2 <= uVar7)) {
        uVar5 = 0;
        uVar9 = (uVar12 + 1) * uVar14;
        uVar7 = uVar12 + 1;
        uVar13 = uVar12;
        while( true ) {
          uVar12 = uVar7;
          uVar11 = uVar2;
          lVar10 = uVar11 + uVar5;
          local_2c58[uVar13] = lVar15;
          uVar2 = uVar9 / local_2d28;
          uVar5 = lVar10 - uVar4;
          local_2a58[uVar13] = uVar5;
          if (uVar16 <= uVar5) break;
          uVar9 = uVar9 + uVar14;
          uVar7 = (uVar11 + uVar16 + uVar4) - lVar10;
          if ((uVar7 < uVar2) || (local_2d28 <= uVar12)) goto LAB_00107c73;
          uVar7 = uVar12 + 1;
          uVar13 = uVar12;
          uVar4 = uVar11;
        }
        uVar7 = (uVar4 + uVar11 + uVar16) - lVar10;
      }
LAB_00107c73:
      lVar15 = lVar15 + 1;
      uVar4 = uVar7;
    } while (uVar12 < local_2d28);
  }
  local_2ca8 = _LC3;
  uStack_2ca4 = _LC3;
  uStack_2ca0 = _LC3;
  uStack_2c9c = _LC3;
  local_2c98 = _LC1;
  uStack_2c94 = _LC1;
  uStack_2c90 = _LC1;
  uStack_2c8c = _LC1;
  local_2c88 = _LC3;
  uStack_2c84 = _LC3;
  uStack_2c80 = _LC3;
  uStack_2c7c = _LC3;
  local_2c78 = _LC1;
  uStack_2c74 = _LC1;
  uStack_2c70 = _LC1;
  uStack_2c6c = _LC1;
  local_2c68 = 0;
  local_2c60 = 0;
  local_2d20 = 0;
  local_2d30 = param_6;
  local_2d18 = &local_2cf8;
  local_2d08 = &local_2d30;
  local_2d00 = &local_2cf8;
  local_2cd8 = local_2c58;
  local_2cd0 = &local_2d28;
  local_2cc8 = &local_2ca8;
  local_2cc0 = &local_2d18;
  local_2cb8 = &local_2d31;
  local_2cb0 = &local_2d08;
  _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum0_IZNS_28parallel_for_for_prefix_sum0INS_5Scene9Iterator2EmNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse218createPrimRefArrayEPS5_NS_8Geometry9GTypeMaskEbmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISH_Lm32EEEEERNS_20BuildProgressMonitorEEUlPSE_RKNS_5rangeImEEmmE_ZNSC_18createPrimRefArrayESD_SF_bmSL_SN_EUlRKSB_SV_E_EET1_RNS_28ParallelForForPrefixSumStateISX_EERT_T0_RKSX_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_ST_SW_EESX_S10_S12_S13_S15_S18_S1B_EUlmSS_mE_SW_EESX_S10_S13_RKS11_S15_S18_S1B_EUlmE_EEvS11_RKS13_EUlSS_E_EEvS11_S11_S11_S1I_PNS0_16TaskGroupContextE_isra_0
            (0,local_2d28,1,&local_2cd8,&local_2d20);
  embree::TaskScheduler::wait();
  if (local_2d20 != 0) {
LAB_001080fb:
    local_2d10 = local_2d20;
    std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
    std::rethrow_exception(&local_2d10);
  }
  auVar23._4_4_ = uStack_2ca4;
  auVar23._0_4_ = local_2ca8;
  auVar23._8_4_ = uStack_2ca0;
  auVar23._12_4_ = uStack_2c9c;
  auVar21._4_4_ = uStack_2c94;
  auVar21._0_4_ = local_2c98;
  auVar21._8_4_ = uStack_2c90;
  auVar21._12_4_ = uStack_2c8c;
  auVar19._4_4_ = uStack_2c84;
  auVar19._0_4_ = local_2c88;
  auVar19._8_4_ = uStack_2c80;
  auVar19._12_4_ = uStack_2c7c;
  auVar17._4_4_ = uStack_2c74;
  auVar17._0_4_ = local_2c78;
  auVar17._8_4_ = uStack_2c70;
  auVar17._12_4_ = uStack_2c6c;
  *(undefined1 (*) [16])this = auVar23;
  *(undefined1 (*) [16])(this + 0x10) = auVar21;
  *(long *)(this + 0x40) = local_2c68;
  *(long *)(this + 0x48) = local_2c60;
  *(undefined1 (*) [16])(this + 0x20) = auVar19;
  *(undefined1 (*) [16])(this + 0x30) = auVar17;
  lVar15 = local_2c60;
  lVar10 = local_2c68;
  if (local_2d28 != 0) {
    pauVar3 = (undefined1 (*) [16])local_2848;
    do {
      *(long *)pauVar3[0x144] = lVar10;
      lVar10 = lVar10 + *(long *)pauVar3[4];
      pauVar8 = pauVar3 + 5;
      pauVar3[0x140] = auVar23;
      auVar23 = minps(auVar23,*pauVar3);
      pauVar3[0x141] = auVar21;
      auVar21 = maxps(auVar21,pauVar3[1]);
      pauVar3[0x142] = auVar19;
      auVar19 = minps(auVar19,pauVar3[2]);
      pauVar3[0x143] = auVar17;
      auVar17 = maxps(auVar17,pauVar3[3]);
      *(long *)(pauVar3[0x144] + 8) = lVar15;
      lVar15 = lVar15 + *(long *)(pauVar3[4] + 8);
      pauVar3 = pauVar8;
    } while ((undefined1 (*) [16])local_2848 + local_2d28 * 5 != pauVar8);
    *(long *)(this + 0x40) = lVar10;
    *(long *)(this + 0x48) = lVar15;
    *(undefined1 (*) [16])this = auVar23;
    *(undefined1 (*) [16])(this + 0x10) = auVar21;
    *(undefined1 (*) [16])(this + 0x20) = auVar19;
    *(undefined1 (*) [16])(this + 0x30) = auVar17;
  }
  if (param_5 != lVar15 - lVar10) {
    if (*(code **)*param_7 == Scene::BuildProgressMonitorInterface::operator()) {
      embree::Scene::progressMonitor(0.0);
    }
    else {
      (**(code **)*param_7)(param_7,0);
    }
    local_2c68 = 0;
    local_2c60 = 0;
    local_2d28 = local_2858;
    local_2ca8 = _LC3;
    uStack_2ca4 = _UNK_00110594;
    uStack_2ca0 = _UNK_00110598;
    uStack_2c9c = _UNK_0011059c;
    local_2c98 = _LC1;
    uStack_2c94 = _UNK_00110584;
    uStack_2c90 = _UNK_00110588;
    uStack_2c8c = _UNK_0011058c;
    local_2c88 = _LC3;
    uStack_2c84 = _UNK_00110594;
    uStack_2c80 = _UNK_00110598;
    uStack_2c7c = _UNK_0011059c;
    local_2c78 = _LC1;
    uStack_2c74 = _UNK_00110584;
    uStack_2c70 = _UNK_00110588;
    uStack_2c6c = _UNK_0011058c;
    if (local_2858 == 0) {
      auVar18._4_4_ = _UNK_00110584;
      auVar18._0_4_ = _LC1;
      auVar18._8_4_ = _UNK_00110588;
      auVar18._12_4_ = _UNK_0011058c;
      auVar20._4_4_ = _UNK_00110594;
      auVar20._0_4_ = _LC3;
      auVar20._8_4_ = _UNK_00110598;
      auVar20._12_4_ = _UNK_0011059c;
      auVar22._4_4_ = _UNK_00110584;
      auVar22._0_4_ = _LC1;
      auVar22._8_4_ = _UNK_00110588;
      auVar22._12_4_ = _UNK_0011058c;
      auVar24._4_4_ = _UNK_00110594;
      auVar24._0_4_ = _LC3;
      auVar24._8_4_ = _UNK_00110598;
      auVar24._12_4_ = _UNK_0011059c;
      lVar15 = 0;
      lVar10 = 0;
      local_2d30 = param_6;
      local_2d18 = &local_2cf8;
      local_2d08 = &local_2d30;
      local_2d00 = &local_2cf8;
      local_2cd8 = local_2c58;
      local_2cd0 = &local_2d28;
      local_2cc8 = &local_2ca8;
      local_2cc0 = &local_2d18;
      local_2cb8 = &local_2d31;
      local_2cb0 = &local_2d08;
    }
    else {
      local_2d20 = 0;
      local_2d30 = param_6;
      local_2d18 = &local_2cf8;
      local_2d08 = &local_2d30;
      local_2d00 = &local_2cf8;
      local_2cd8 = local_2c58;
      local_2cd0 = &local_2d28;
      local_2cc8 = &local_2ca8;
      local_2cc0 = &local_2d18;
      local_2cb8 = &local_2d31;
      local_2cb0 = &local_2d08;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum1_IZNS_28parallel_for_for_prefix_sum1INS_5Scene9Iterator2EmNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse218createPrimRefArrayEPS5_NS_8Geometry9GTypeMaskEbmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISH_Lm32EEEEERNS_20BuildProgressMonitorEEUlPSE_RKNS_5rangeImEEmmRKSB_E_ZNSC_18createPrimRefArrayESD_SF_bmSL_SN_EUlSU_SU_E0_EET1_RNS_28ParallelForForPrefixSumStateISX_EERT_T0_RKSX_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_SV_SW_EESX_S10_S12_S13_S15_S18_S1B_EUlmSS_mSU_E_SW_EESX_S10_S13_RKS11_S15_S18_S1B_EUlmE_EEvS11_RKS13_EUlSS_E_EEvS11_S11_S11_S1I_PNS0_16TaskGroupContextE_isra_0
                (0,local_2858,1,&local_2cd8,&local_2d20);
      embree::TaskScheduler::wait();
      if (local_2d20 != 0) goto LAB_001080fb;
      auVar24._4_4_ = uStack_2ca4;
      auVar24._0_4_ = local_2ca8;
      auVar24._8_4_ = uStack_2ca0;
      auVar24._12_4_ = uStack_2c9c;
      auVar22._4_4_ = uStack_2c94;
      auVar22._0_4_ = local_2c98;
      auVar22._8_4_ = uStack_2c90;
      auVar22._12_4_ = uStack_2c8c;
      auVar20._4_4_ = uStack_2c84;
      auVar20._0_4_ = local_2c88;
      auVar20._8_4_ = uStack_2c80;
      auVar20._12_4_ = uStack_2c7c;
      auVar18._4_4_ = uStack_2c74;
      auVar18._0_4_ = local_2c78;
      auVar18._8_4_ = uStack_2c70;
      auVar18._12_4_ = uStack_2c6c;
      lVar15 = local_2c60;
      lVar10 = local_2c68;
      if (local_2d28 != 0) {
        pauVar3 = (undefined1 (*) [16])local_2848;
        do {
          *(long *)pauVar3[0x144] = lVar10;
          lVar10 = lVar10 + *(long *)pauVar3[4];
          pauVar8 = pauVar3 + 5;
          pauVar3[0x140] = auVar24;
          auVar24 = minps(auVar24,*pauVar3);
          pauVar3[0x141] = auVar22;
          auVar22 = maxps(auVar22,pauVar3[1]);
          pauVar3[0x142] = auVar20;
          auVar20 = minps(auVar20,pauVar3[2]);
          pauVar3[0x143] = auVar18;
          auVar18 = maxps(auVar18,pauVar3[3]);
          *(long *)(pauVar3[0x144] + 8) = lVar15;
          lVar15 = lVar15 + *(long *)(pauVar3[4] + 8);
          pauVar3 = pauVar8;
        } while ((undefined1 (*) [16])local_2848 + local_2d28 * 5 != pauVar8);
      }
    }
    *(long *)(this + 0x40) = lVar10;
    *(long *)(this + 0x48) = lVar15;
    *(undefined1 (*) [16])this = auVar24;
    *(undefined1 (*) [16])(this + 0x10) = auVar22;
    *(undefined1 (*) [16])(this + 0x20) = auVar20;
    *(undefined1 (*) [16])(this + 0x30) = auVar18;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createPrimRefArray(embree::Scene*, embree::Geometry::GTypeMask, bool, unsigned
   long, embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef,
   32ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&) */

sse2 * __thiscall
embree::sse2::createPrimRefArray
          (sse2 *this,long param_1,ulong param_3,char param_4,long param_5,undefined8 param_6,
          undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 local_2d39;
  ulong local_2d38;
  long local_2d30;
  long *local_2d28;
  long local_2d20;
  undefined8 local_2d18;
  undefined8 local_2d10;
  undefined8 *local_2d08;
  long *local_2d00;
  long local_2cf8;
  ulong local_2cf0;
  char local_2ce8;
  long *local_2cd8;
  ulong *local_2cd0;
  undefined4 *local_2cc8;
  long **local_2cc0;
  undefined1 *local_2cb8;
  undefined8 **local_2cb0;
  undefined4 local_2ca8;
  undefined4 uStack_2ca4;
  undefined4 uStack_2ca0;
  undefined4 uStack_2c9c;
  undefined4 local_2c98;
  undefined4 uStack_2c94;
  undefined4 uStack_2c90;
  undefined4 uStack_2c8c;
  undefined4 local_2c88;
  undefined4 uStack_2c84;
  undefined4 uStack_2c80;
  undefined4 uStack_2c7c;
  undefined4 local_2c78;
  undefined4 uStack_2c74;
  undefined4 uStack_2c70;
  undefined4 uStack_2c6c;
  long local_2c68;
  long local_2c60;
  long local_2c58 [64];
  ulong local_2a58 [64];
  ulong local_2858;
  ulong local_2850;
  undefined1 local_2848 [10248];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2858 = 0;
  local_2cf8 = param_1;
  local_2cf0 = param_3;
  local_2ce8 = param_4;
  if (*(code **)*param_8 == Scene::BuildProgressMonitorInterface::operator()) {
    embree::Scene::progressMonitor(0.0);
  }
  else {
    (**(code **)*param_8)(param_8,0);
  }
  if (*(long *)(local_2cf8 + 0x1d0) == 0) {
    local_2850 = 0;
    embree::TaskScheduler::threadCount();
    local_2858 = 1;
LAB_0010887b:
    local_2a58[0] = 0;
    local_2c58[0] = 0;
    local_2d38 = 1;
  }
  else {
    plVar6 = *(long **)(local_2cf8 + 0x1e0);
    uVar14 = 0;
    plVar1 = plVar6 + *(long *)(local_2cf8 + 0x1d0);
    do {
      lVar15 = *plVar6;
      if ((((lVar15 != 0) && ((*(byte *)(lVar15 + 0x3e) & 0x20) != 0)) &&
          (((long)(1 << (*(byte *)(lVar15 + 0x3c) & 0x1f)) & local_2cf0) != 0)) &&
         ((*(int *)(lVar15 + 0x24) != 1) == (bool)local_2ce8)) {
        uVar14 = uVar14 + *(uint *)(lVar15 + 0x20);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    local_2850 = uVar14;
    uVar2 = embree::TaskScheduler::threadCount();
    local_2c58[0] = 0;
    local_2a58[0] = 0;
    uVar4 = uVar14 + 0x3ff >> 10;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    local_2d38 = 0x40;
    if (uVar4 < 0x41) {
      local_2d38 = uVar4;
    }
    if (local_2d38 == 0) {
      local_2d38 = 1;
    }
    uVar2 = uVar14 / local_2d38;
    local_2858 = local_2d38;
    if (uVar4 < 2) goto LAB_0010887b;
    uVar12 = 1;
    lVar15 = 0;
    uVar4 = 0;
    do {
      lVar10 = *(long *)(*(long *)(local_2cf8 + 0x1e0) + lVar15 * 8);
      uVar7 = uVar4;
      if (((((lVar10 != 0) && ((*(byte *)(lVar10 + 0x3e) & 0x20) != 0)) &&
           (((local_2cf0 & (long)(1 << (*(byte *)(lVar10 + 0x3c) & 0x1f))) != 0 &&
            (((*(int *)(lVar10 + 0x24) != 1) == (bool)local_2ce8 &&
             (uVar16 = (ulong)*(uint *)(lVar10 + 0x20), uVar16 != 0)))))) &&
          (uVar7 = uVar4 + uVar16, uVar12 < local_2d38)) && (uVar2 <= uVar7)) {
        uVar5 = 0;
        uVar9 = (uVar12 + 1) * uVar14;
        uVar7 = uVar12 + 1;
        uVar13 = uVar12;
        while( true ) {
          uVar12 = uVar7;
          uVar11 = uVar2;
          lVar10 = uVar11 + uVar5;
          local_2c58[uVar13] = lVar15;
          uVar2 = uVar9 / local_2d38;
          uVar5 = lVar10 - uVar4;
          local_2a58[uVar13] = uVar5;
          if (uVar16 <= uVar5) break;
          uVar9 = uVar9 + uVar14;
          uVar7 = (uVar11 + uVar16 + uVar4) - lVar10;
          if ((uVar7 < uVar2) || (local_2d38 <= uVar12)) goto LAB_001083d3;
          uVar7 = uVar12 + 1;
          uVar13 = uVar12;
          uVar4 = uVar11;
        }
        uVar7 = (uVar4 + uVar11 + uVar16) - lVar10;
      }
LAB_001083d3:
      lVar15 = lVar15 + 1;
      uVar4 = uVar7;
    } while (uVar12 < local_2d38);
  }
  local_2d10 = param_7;
  local_2ca8 = _LC3;
  uStack_2ca4 = _LC3;
  uStack_2ca0 = _LC3;
  uStack_2c9c = _LC3;
  local_2c98 = _LC1;
  uStack_2c94 = _LC1;
  uStack_2c90 = _LC1;
  uStack_2c8c = _LC1;
  local_2c88 = _LC3;
  uStack_2c84 = _LC3;
  uStack_2c80 = _LC3;
  uStack_2c7c = _LC3;
  local_2c78 = _LC1;
  uStack_2c74 = _LC1;
  uStack_2c70 = _LC1;
  uStack_2c6c = _LC1;
  local_2c68 = 0;
  local_2c60 = 0;
  local_2d30 = 0;
  local_2d28 = &local_2cf8;
  local_2d18 = param_6;
  local_2d08 = &local_2d18;
  local_2d00 = &local_2cf8;
  local_2cd8 = local_2c58;
  local_2cd0 = &local_2d38;
  local_2cc8 = &local_2ca8;
  local_2cc0 = &local_2d28;
  local_2cb8 = &local_2d39;
  local_2cb0 = &local_2d08;
  _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum0_IZNS_28parallel_for_for_prefix_sum0INS_5Scene9Iterator2EmNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse218createPrimRefArrayEPS5_NS_8Geometry9GTypeMaskEbmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISH_Lm32EEEEERNSG_INS_16SubGridBuildDataENSI_ISM_Lm4EEEEERNS_20BuildProgressMonitorEEUlPSE_RKNS_5rangeImEEmmE_ZNSC_18createPrimRefArrayESD_SF_bmSL_SP_SR_EUlRKSB_SZ_E_EET1_RNS_28ParallelForForPrefixSumStateIS11_EERT_T0_RKS11_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_SX_S10_EES11_S14_S16_S17_S19_S1C_S1F_EUlmSW_mE_S10_EES11_S14_S17_RKS15_S19_S1C_S1F_EUlmE_EEvS15_RKS17_EUlSW_E_EEvS15_S15_S15_S1M_PNS0_16TaskGroupContextE_isra_0
            (0,local_2d38,1,&local_2cd8,&local_2d30);
  embree::TaskScheduler::wait();
  if (local_2d30 != 0) {
LAB_00108893:
    local_2d20 = local_2d30;
    std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
    std::rethrow_exception(&local_2d20);
  }
  auVar23._4_4_ = uStack_2ca4;
  auVar23._0_4_ = local_2ca8;
  auVar23._8_4_ = uStack_2ca0;
  auVar23._12_4_ = uStack_2c9c;
  auVar21._4_4_ = uStack_2c94;
  auVar21._0_4_ = local_2c98;
  auVar21._8_4_ = uStack_2c90;
  auVar21._12_4_ = uStack_2c8c;
  auVar19._4_4_ = uStack_2c84;
  auVar19._0_4_ = local_2c88;
  auVar19._8_4_ = uStack_2c80;
  auVar19._12_4_ = uStack_2c7c;
  auVar17._4_4_ = uStack_2c74;
  auVar17._0_4_ = local_2c78;
  auVar17._8_4_ = uStack_2c70;
  auVar17._12_4_ = uStack_2c6c;
  *(undefined1 (*) [16])this = auVar23;
  *(undefined1 (*) [16])(this + 0x10) = auVar21;
  *(long *)(this + 0x40) = local_2c68;
  *(long *)(this + 0x48) = local_2c60;
  *(undefined1 (*) [16])(this + 0x20) = auVar19;
  *(undefined1 (*) [16])(this + 0x30) = auVar17;
  lVar15 = local_2c60;
  lVar10 = local_2c68;
  if (local_2d38 != 0) {
    pauVar3 = (undefined1 (*) [16])local_2848;
    do {
      *(long *)pauVar3[0x144] = lVar10;
      lVar10 = lVar10 + *(long *)pauVar3[4];
      pauVar8 = pauVar3 + 5;
      pauVar3[0x140] = auVar23;
      auVar23 = minps(auVar23,*pauVar3);
      pauVar3[0x141] = auVar21;
      auVar21 = maxps(auVar21,pauVar3[1]);
      pauVar3[0x142] = auVar19;
      auVar19 = minps(auVar19,pauVar3[2]);
      pauVar3[0x143] = auVar17;
      auVar17 = maxps(auVar17,pauVar3[3]);
      *(long *)(pauVar3[0x144] + 8) = lVar15;
      lVar15 = lVar15 + *(long *)(pauVar3[4] + 8);
      pauVar3 = pauVar8;
    } while ((undefined1 (*) [16])local_2848 + local_2d38 * 5 != pauVar8);
    *(long *)(this + 0x40) = lVar10;
    *(long *)(this + 0x48) = lVar15;
    *(undefined1 (*) [16])this = auVar23;
    *(undefined1 (*) [16])(this + 0x10) = auVar21;
    *(undefined1 (*) [16])(this + 0x20) = auVar19;
    *(undefined1 (*) [16])(this + 0x30) = auVar17;
  }
  if (param_5 != lVar15 - lVar10) {
    if (*(code **)*param_8 == Scene::BuildProgressMonitorInterface::operator()) {
      embree::Scene::progressMonitor(0.0);
    }
    else {
      (**(code **)*param_8)(param_8,0);
    }
    local_2c68 = 0;
    local_2c60 = 0;
    local_2d10 = param_7;
    local_2d38 = local_2858;
    local_2ca8 = _LC3;
    uStack_2ca4 = _UNK_00110594;
    uStack_2ca0 = _UNK_00110598;
    uStack_2c9c = _UNK_0011059c;
    local_2c98 = _LC1;
    uStack_2c94 = _UNK_00110584;
    uStack_2c90 = _UNK_00110588;
    uStack_2c8c = _UNK_0011058c;
    local_2c88 = _LC3;
    uStack_2c84 = _UNK_00110594;
    uStack_2c80 = _UNK_00110598;
    uStack_2c7c = _UNK_0011059c;
    local_2c78 = _LC1;
    uStack_2c74 = _UNK_00110584;
    uStack_2c70 = _UNK_00110588;
    uStack_2c6c = _UNK_0011058c;
    if (local_2858 == 0) {
      auVar18._4_4_ = _UNK_00110584;
      auVar18._0_4_ = _LC1;
      auVar18._8_4_ = _UNK_00110588;
      auVar18._12_4_ = _UNK_0011058c;
      auVar20._4_4_ = _UNK_00110594;
      auVar20._0_4_ = _LC3;
      auVar20._8_4_ = _UNK_00110598;
      auVar20._12_4_ = _UNK_0011059c;
      auVar22._4_4_ = _UNK_00110584;
      auVar22._0_4_ = _LC1;
      auVar22._8_4_ = _UNK_00110588;
      auVar22._12_4_ = _UNK_0011058c;
      auVar24._4_4_ = _UNK_00110594;
      auVar24._0_4_ = _LC3;
      auVar24._8_4_ = _UNK_00110598;
      auVar24._12_4_ = _UNK_0011059c;
      lVar15 = 0;
      lVar10 = 0;
      local_2d28 = &local_2cf8;
      local_2d18 = param_6;
      local_2d08 = &local_2d18;
      local_2d00 = &local_2cf8;
      local_2cd8 = local_2c58;
      local_2cd0 = &local_2d38;
      local_2cc8 = &local_2ca8;
      local_2cc0 = &local_2d28;
      local_2cb8 = &local_2d39;
      local_2cb0 = &local_2d08;
    }
    else {
      local_2d30 = 0;
      local_2d28 = &local_2cf8;
      local_2d18 = param_6;
      local_2d08 = &local_2d18;
      local_2d00 = &local_2cf8;
      local_2cd8 = local_2c58;
      local_2cd0 = &local_2d38;
      local_2cc8 = &local_2ca8;
      local_2cc0 = &local_2d28;
      local_2cb8 = &local_2d39;
      local_2cb0 = &local_2d08;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum1_IZNS_28parallel_for_for_prefix_sum1INS_5Scene9Iterator2EmNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse218createPrimRefArrayEPS5_NS_8Geometry9GTypeMaskEbmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISH_Lm32EEEEERNSG_INS_16SubGridBuildDataENSI_ISM_Lm4EEEEERNS_20BuildProgressMonitorEEUlPSE_RKNS_5rangeImEEmmRKSB_E_ZNSC_18createPrimRefArrayESD_SF_bmSL_SP_SR_EUlSY_SY_E0_EET1_RNS_28ParallelForForPrefixSumStateIS11_EERT_T0_RKS11_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_SZ_S10_EES11_S14_S16_S17_S19_S1C_S1F_EUlmSW_mSY_E_S10_EES11_S14_S17_RKS15_S19_S1C_S1F_EUlmE_EEvS15_RKS17_EUlSW_E_EEvS15_S15_S15_S1M_PNS0_16TaskGroupContextE_isra_0
                (0,local_2858,1,&local_2cd8,&local_2d30);
      embree::TaskScheduler::wait();
      if (local_2d30 != 0) goto LAB_00108893;
      auVar24._4_4_ = uStack_2ca4;
      auVar24._0_4_ = local_2ca8;
      auVar24._8_4_ = uStack_2ca0;
      auVar24._12_4_ = uStack_2c9c;
      auVar22._4_4_ = uStack_2c94;
      auVar22._0_4_ = local_2c98;
      auVar22._8_4_ = uStack_2c90;
      auVar22._12_4_ = uStack_2c8c;
      auVar20._4_4_ = uStack_2c84;
      auVar20._0_4_ = local_2c88;
      auVar20._8_4_ = uStack_2c80;
      auVar20._12_4_ = uStack_2c7c;
      auVar18._4_4_ = uStack_2c74;
      auVar18._0_4_ = local_2c78;
      auVar18._8_4_ = uStack_2c70;
      auVar18._12_4_ = uStack_2c6c;
      lVar15 = local_2c60;
      lVar10 = local_2c68;
      if (local_2d38 != 0) {
        pauVar3 = (undefined1 (*) [16])local_2848;
        do {
          *(long *)pauVar3[0x144] = lVar10;
          lVar10 = lVar10 + *(long *)pauVar3[4];
          pauVar8 = pauVar3 + 5;
          pauVar3[0x140] = auVar24;
          auVar24 = minps(auVar24,*pauVar3);
          pauVar3[0x141] = auVar22;
          auVar22 = maxps(auVar22,pauVar3[1]);
          pauVar3[0x142] = auVar20;
          auVar20 = minps(auVar20,pauVar3[2]);
          pauVar3[0x143] = auVar18;
          auVar18 = maxps(auVar18,pauVar3[3]);
          *(long *)(pauVar3[0x144] + 8) = lVar15;
          lVar15 = lVar15 + *(long *)(pauVar3[4] + 8);
          pauVar3 = pauVar8;
        } while ((undefined1 (*) [16])local_2848 + local_2d38 * 5 != pauVar8);
      }
    }
    *(long *)(this + 0x40) = lVar10;
    *(long *)(this + 0x48) = lVar15;
    *(undefined1 (*) [16])this = auVar24;
    *(undefined1 (*) [16])(this + 0x10) = auVar22;
    *(undefined1 (*) [16])(this + 0x20) = auVar20;
    *(undefined1 (*) [16])(this + 0x30) = auVar18;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createPrimRefArrayMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned long,
   embree::vector_t<embree::PrimRef, embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::BuildProgressMonitor&, unsigned long) */

undefined1 (*) [16]
embree::sse2::createPrimRefArrayMBlur
          (undefined1 (*param_1) [16],long param_2,ulong param_3,long param_4,undefined8 param_5,
          undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 local_2d39;
  ulong local_2d38;
  long local_2d30;
  long *local_2d28;
  long local_2d20;
  undefined8 local_2d18;
  undefined1 *local_2d10;
  undefined8 *local_2d08;
  long *local_2d00;
  long local_2cf8;
  ulong local_2cf0;
  char local_2ce8;
  long *local_2cd8;
  ulong *local_2cd0;
  undefined4 *local_2cc8;
  long **local_2cc0;
  undefined1 *local_2cb8;
  undefined8 **local_2cb0;
  undefined4 local_2ca8;
  undefined4 uStack_2ca4;
  undefined4 uStack_2ca0;
  undefined4 uStack_2c9c;
  undefined4 local_2c98;
  undefined4 uStack_2c94;
  undefined4 uStack_2c90;
  undefined4 uStack_2c8c;
  undefined4 local_2c88;
  undefined4 uStack_2c84;
  undefined4 uStack_2c80;
  undefined4 uStack_2c7c;
  undefined4 local_2c78;
  undefined4 uStack_2c74;
  undefined4 uStack_2c70;
  undefined4 uStack_2c6c;
  long local_2c68;
  long local_2c60;
  long local_2c58 [64];
  ulong local_2a58 [64];
  ulong local_2858;
  ulong local_2850;
  undefined1 local_2848 [10248];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2858 = 0;
  local_2ce8 = '\x01';
  local_2cf8 = param_2;
  local_2cf0 = param_3;
  if (*(code **)*param_6 == Scene::BuildProgressMonitorInterface::operator()) {
    embree::Scene::progressMonitor(0.0);
  }
  else {
    (**(code **)*param_6)(param_6,0);
  }
  if (*(long *)(local_2cf8 + 0x1d0) == 0) {
    local_2850 = 0;
    embree::TaskScheduler::threadCount();
    local_2858 = 1;
LAB_00108ffb:
    local_2a58[0] = 0;
    local_2c58[0] = 0;
    local_2d38 = 1;
  }
  else {
    plVar6 = *(long **)(local_2cf8 + 0x1e0);
    uVar14 = 0;
    plVar1 = plVar6 + *(long *)(local_2cf8 + 0x1d0);
    do {
      lVar15 = *plVar6;
      if ((((lVar15 != 0) && ((*(byte *)(lVar15 + 0x3e) & 0x20) != 0)) &&
          (((long)(1 << (*(byte *)(lVar15 + 0x3c) & 0x1f)) & local_2cf0) != 0)) &&
         ((*(int *)(lVar15 + 0x24) != 1) == (bool)local_2ce8)) {
        uVar14 = uVar14 + *(uint *)(lVar15 + 0x20);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    local_2850 = uVar14;
    uVar2 = embree::TaskScheduler::threadCount();
    local_2c58[0] = 0;
    local_2a58[0] = 0;
    uVar4 = uVar14 + 0x3ff >> 10;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    local_2d38 = 0x40;
    if (uVar4 < 0x41) {
      local_2d38 = uVar4;
    }
    if (local_2d38 == 0) {
      local_2d38 = 1;
    }
    uVar2 = uVar14 / local_2d38;
    local_2858 = local_2d38;
    if (uVar4 < 2) goto LAB_00108ffb;
    uVar12 = 1;
    lVar15 = 0;
    uVar4 = 0;
    do {
      lVar10 = *(long *)(*(long *)(local_2cf8 + 0x1e0) + lVar15 * 8);
      uVar7 = uVar4;
      if (((((lVar10 != 0) && ((*(byte *)(lVar10 + 0x3e) & 0x20) != 0)) &&
           (((local_2cf0 & (long)(1 << (*(byte *)(lVar10 + 0x3c) & 0x1f))) != 0 &&
            (((*(int *)(lVar10 + 0x24) != 1) == (bool)local_2ce8 &&
             (uVar16 = (ulong)*(uint *)(lVar10 + 0x20), uVar16 != 0)))))) &&
          (uVar7 = uVar4 + uVar16, uVar12 < local_2d38)) && (uVar2 <= uVar7)) {
        uVar5 = 0;
        uVar9 = (uVar12 + 1) * uVar14;
        uVar7 = uVar12 + 1;
        uVar13 = uVar12;
        while( true ) {
          uVar12 = uVar7;
          uVar11 = uVar2;
          lVar10 = uVar11 + uVar5;
          local_2c58[uVar13] = lVar15;
          uVar2 = uVar9 / local_2d38;
          uVar5 = lVar10 - uVar4;
          local_2a58[uVar13] = uVar5;
          if (uVar16 <= uVar5) break;
          uVar9 = uVar9 + uVar14;
          uVar7 = (uVar11 + uVar16 + uVar4) - lVar10;
          if ((uVar7 < uVar2) || (local_2d38 <= uVar12)) goto LAB_00108b63;
          uVar7 = uVar12 + 1;
          uVar13 = uVar12;
          uVar4 = uVar11;
        }
        uVar7 = (uVar4 + uVar11 + uVar16) - lVar10;
      }
LAB_00108b63:
      lVar15 = lVar15 + 1;
      uVar4 = uVar7;
    } while (uVar12 < local_2d38);
  }
  local_2d10 = &stack0x00000008;
  local_2ca8 = _LC3;
  uStack_2ca4 = _LC3;
  uStack_2ca0 = _LC3;
  uStack_2c9c = _LC3;
  local_2c98 = _LC1;
  uStack_2c94 = _LC1;
  uStack_2c90 = _LC1;
  uStack_2c8c = _LC1;
  local_2c88 = _LC3;
  uStack_2c84 = _LC3;
  uStack_2c80 = _LC3;
  uStack_2c7c = _LC3;
  local_2c78 = _LC1;
  uStack_2c74 = _LC1;
  uStack_2c70 = _LC1;
  uStack_2c6c = _LC1;
  local_2c68 = 0;
  local_2c60 = 0;
  local_2d30 = 0;
  local_2d28 = &local_2cf8;
  local_2d18 = param_5;
  local_2d08 = &local_2d18;
  local_2d00 = &local_2cf8;
  local_2cd8 = local_2c58;
  local_2cd0 = &local_2d38;
  local_2cc8 = &local_2ca8;
  local_2cc0 = &local_2d28;
  local_2cb8 = &local_2d39;
  local_2cb0 = &local_2d08;
  _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum0_IZNS_28parallel_for_for_prefix_sum0INS_5Scene9Iterator2EmNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse223createPrimRefArrayMBlurEPS5_NS_8Geometry9GTypeMaskEmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISH_Lm32EEEEERNS_20BuildProgressMonitorEmEUlPSE_RKNS_5rangeImEEmmE_ZNSC_23createPrimRefArrayMBlurESD_SF_mSL_SN_mEUlRKSB_SV_E_EET1_RNS_28ParallelForForPrefixSumStateISX_EERT_T0_RKSX_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_ST_SW_EESX_S10_S12_S13_S15_S18_S1B_EUlmSS_mE_SW_EESX_S10_S13_RKS11_S15_S18_S1B_EUlmE_EEvS11_RKS13_EUlSS_E_EEvS11_S11_S11_S1I_PNS0_16TaskGroupContextE_isra_0
            (0,local_2d38,1,&local_2cd8,&local_2d30);
  embree::TaskScheduler::wait();
  if (local_2d30 != 0) {
LAB_00109013:
    local_2d20 = local_2d30;
    std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
    std::rethrow_exception(&local_2d20);
  }
  auVar23._4_4_ = uStack_2ca4;
  auVar23._0_4_ = local_2ca8;
  auVar23._8_4_ = uStack_2ca0;
  auVar23._12_4_ = uStack_2c9c;
  auVar21._4_4_ = uStack_2c94;
  auVar21._0_4_ = local_2c98;
  auVar21._8_4_ = uStack_2c90;
  auVar21._12_4_ = uStack_2c8c;
  auVar19._4_4_ = uStack_2c84;
  auVar19._0_4_ = local_2c88;
  auVar19._8_4_ = uStack_2c80;
  auVar19._12_4_ = uStack_2c7c;
  auVar17._4_4_ = uStack_2c74;
  auVar17._0_4_ = local_2c78;
  auVar17._8_4_ = uStack_2c70;
  auVar17._12_4_ = uStack_2c6c;
  *param_1 = auVar23;
  param_1[1] = auVar21;
  *(long *)param_1[4] = local_2c68;
  *(long *)(param_1[4] + 8) = local_2c60;
  param_1[2] = auVar19;
  param_1[3] = auVar17;
  lVar15 = local_2c60;
  lVar10 = local_2c68;
  if (local_2d38 != 0) {
    pauVar3 = (undefined1 (*) [16])local_2848;
    do {
      *(long *)pauVar3[0x144] = lVar10;
      lVar10 = lVar10 + *(long *)pauVar3[4];
      pauVar8 = pauVar3 + 5;
      pauVar3[0x140] = auVar23;
      auVar23 = minps(auVar23,*pauVar3);
      pauVar3[0x141] = auVar21;
      auVar21 = maxps(auVar21,pauVar3[1]);
      pauVar3[0x142] = auVar19;
      auVar19 = minps(auVar19,pauVar3[2]);
      pauVar3[0x143] = auVar17;
      auVar17 = maxps(auVar17,pauVar3[3]);
      *(long *)(pauVar3[0x144] + 8) = lVar15;
      lVar15 = lVar15 + *(long *)(pauVar3[4] + 8);
      pauVar3 = pauVar8;
    } while ((undefined1 (*) [16])local_2848 + local_2d38 * 5 != pauVar8);
    *(long *)param_1[4] = lVar10;
    *(long *)(param_1[4] + 8) = lVar15;
    *param_1 = auVar23;
    param_1[1] = auVar21;
    param_1[2] = auVar19;
    param_1[3] = auVar17;
  }
  if (param_4 != lVar15 - lVar10) {
    if (*(code **)*param_6 == Scene::BuildProgressMonitorInterface::operator()) {
      embree::Scene::progressMonitor(0.0);
    }
    else {
      (**(code **)*param_6)(param_6,0);
    }
    local_2c68 = 0;
    local_2c60 = 0;
    local_2d10 = &stack0x00000008;
    local_2d38 = local_2858;
    local_2ca8 = _LC3;
    uStack_2ca4 = _UNK_00110594;
    uStack_2ca0 = _UNK_00110598;
    uStack_2c9c = _UNK_0011059c;
    local_2c98 = _LC1;
    uStack_2c94 = _UNK_00110584;
    uStack_2c90 = _UNK_00110588;
    uStack_2c8c = _UNK_0011058c;
    local_2c88 = _LC3;
    uStack_2c84 = _UNK_00110594;
    uStack_2c80 = _UNK_00110598;
    uStack_2c7c = _UNK_0011059c;
    local_2c78 = _LC1;
    uStack_2c74 = _UNK_00110584;
    uStack_2c70 = _UNK_00110588;
    uStack_2c6c = _UNK_0011058c;
    if (local_2858 == 0) {
      auVar18._4_4_ = _UNK_00110584;
      auVar18._0_4_ = _LC1;
      auVar18._8_4_ = _UNK_00110588;
      auVar18._12_4_ = _UNK_0011058c;
      auVar20._4_4_ = _UNK_00110594;
      auVar20._0_4_ = _LC3;
      auVar20._8_4_ = _UNK_00110598;
      auVar20._12_4_ = _UNK_0011059c;
      auVar22._4_4_ = _UNK_00110584;
      auVar22._0_4_ = _LC1;
      auVar22._8_4_ = _UNK_00110588;
      auVar22._12_4_ = _UNK_0011058c;
      auVar24._4_4_ = _UNK_00110594;
      auVar24._0_4_ = _LC3;
      auVar24._8_4_ = _UNK_00110598;
      auVar24._12_4_ = _UNK_0011059c;
      lVar15 = 0;
      lVar10 = 0;
      local_2d28 = &local_2cf8;
      local_2d18 = param_5;
      local_2d08 = &local_2d18;
      local_2d00 = &local_2cf8;
      local_2cd8 = local_2c58;
      local_2cd0 = &local_2d38;
      local_2cc8 = &local_2ca8;
      local_2cc0 = &local_2d28;
      local_2cb8 = &local_2d39;
      local_2cb0 = &local_2d08;
    }
    else {
      local_2d30 = 0;
      local_2d28 = &local_2cf8;
      local_2d18 = param_5;
      local_2d08 = &local_2d18;
      local_2d00 = &local_2cf8;
      local_2cd8 = local_2c58;
      local_2cd0 = &local_2d38;
      local_2cc8 = &local_2ca8;
      local_2cc0 = &local_2d28;
      local_2cb8 = &local_2d39;
      local_2cb0 = &local_2d08;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum1_IZNS_28parallel_for_for_prefix_sum1INS_5Scene9Iterator2EmNS_9PrimInfoTINS_4BBoxINS_6Vec3faEEEEEZNS_4sse223createPrimRefArrayMBlurEPS5_NS_8Geometry9GTypeMaskEmRNS_8vector_tINS_7PrimRefENS_27aligned_monitored_allocatorISH_Lm32EEEEERNS_20BuildProgressMonitorEmEUlPSE_RKNS_5rangeImEEmmRKSB_E_ZNSC_23createPrimRefArrayMBlurESD_SF_mSL_SN_mEUlSU_SU_E0_EET1_RNS_28ParallelForForPrefixSumStateISX_EERT_T0_RKSX_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_SV_SW_EESX_S10_S12_S13_S15_S18_S1B_EUlmSS_mSU_E_SW_EESX_S10_S13_RKS11_S15_S18_S1B_EUlmE_EEvS11_RKS13_EUlSS_E_EEvS11_S11_S11_S1I_PNS0_16TaskGroupContextE_isra_0
                (0,local_2858,1,&local_2cd8,&local_2d30);
      embree::TaskScheduler::wait();
      if (local_2d30 != 0) goto LAB_00109013;
      auVar24._4_4_ = uStack_2ca4;
      auVar24._0_4_ = local_2ca8;
      auVar24._8_4_ = uStack_2ca0;
      auVar24._12_4_ = uStack_2c9c;
      auVar22._4_4_ = uStack_2c94;
      auVar22._0_4_ = local_2c98;
      auVar22._8_4_ = uStack_2c90;
      auVar22._12_4_ = uStack_2c8c;
      auVar20._4_4_ = uStack_2c84;
      auVar20._0_4_ = local_2c88;
      auVar20._8_4_ = uStack_2c80;
      auVar20._12_4_ = uStack_2c7c;
      auVar18._4_4_ = uStack_2c74;
      auVar18._0_4_ = local_2c78;
      auVar18._8_4_ = uStack_2c70;
      auVar18._12_4_ = uStack_2c6c;
      lVar15 = local_2c60;
      lVar10 = local_2c68;
      if (local_2d38 != 0) {
        pauVar3 = (undefined1 (*) [16])local_2848;
        do {
          *(long *)pauVar3[0x144] = lVar10;
          lVar10 = lVar10 + *(long *)pauVar3[4];
          pauVar8 = pauVar3 + 5;
          pauVar3[0x140] = auVar24;
          auVar24 = minps(auVar24,*pauVar3);
          pauVar3[0x141] = auVar22;
          auVar22 = maxps(auVar22,pauVar3[1]);
          pauVar3[0x142] = auVar20;
          auVar20 = minps(auVar20,pauVar3[2]);
          pauVar3[0x143] = auVar18;
          auVar18 = maxps(auVar18,pauVar3[3]);
          *(long *)(pauVar3[0x144] + 8) = lVar15;
          lVar15 = lVar15 + *(long *)(pauVar3[4] + 8);
          pauVar3 = pauVar8;
        } while ((undefined1 (*) [16])local_2848 + local_2d38 * 5 != pauVar8);
      }
    }
    *(long *)param_1[4] = lVar10;
    *(long *)(param_1[4] + 8) = lVar15;
    *param_1 = auVar24;
    param_1[1] = auVar22;
    param_1[2] = auVar20;
    param_1[3] = auVar18;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::BuildProgressMonitor&, embree::BBox<float>) */

sse2 * __thiscall
embree::sse2::createPrimRefArrayMSMBlur
          (undefined8 param_1_00,sse2 *this,undefined8 param_1,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 local_4030 [16384];
  
  puVar2 = &stack0xffffffffffffffd0;
  do {
    puVar17 = puVar2;
    *(undefined8 *)(puVar17 + -0x1000) = *(undefined8 *)(puVar17 + -0x1000);
    puVar2 = puVar17 + -0x1000;
  } while (puVar17 + -0x1000 != local_4030);
  *(undefined8 *)(puVar17 + -0x1de8) = param_5;
  *(undefined8 *)(puVar17 + -0x1df0) = param_6;
  *(undefined8 *)(puVar17 + -0x1dc0) = param_1_00;
  *(undefined8 *)(puVar17 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)*param_7;
  *(undefined8 *)(puVar17 + -0x1828) = 0;
  *(undefined8 *)(puVar17 + -0x1d68) = param_1;
  *(undefined8 *)(puVar17 + -0x1d60) = param_4;
  puVar17[-0x1d58] = 1;
  pcVar4 = (code *)*puVar3;
  if (pcVar4 == Scene::BuildProgressMonitorInterface::operator()) {
    *(undefined8 *)(puVar17 + -0x1e10) = 0x1090de;
    embree::Scene::progressMonitor(0.0);
  }
  else {
    *(undefined8 *)(puVar17 + -0x1e10) = 0x109a70;
    (*pcVar4)(param_7,0);
  }
  lVar25 = *(long *)(*(long *)(puVar17 + -0x1d68) + 0x1d0);
  if (lVar25 == 0) {
    *(undefined8 *)(puVar17 + -0x1820) = 0;
    *(undefined8 *)(puVar17 + -0x1e10) = 0x109aa2;
    embree::TaskScheduler::threadCount();
    *(undefined8 *)(puVar17 + -0x1828) = 1;
    *(undefined8 *)(puVar17 + -0x1c28) = 0;
    *(undefined8 *)(puVar17 + -0x1a28) = 0;
LAB_00109ac6:
    uVar10 = 1;
  }
  else {
    plVar15 = *(long **)(*(long *)(puVar17 + -0x1d68) + 0x1e0);
    uVar24 = 0;
    plVar1 = plVar15 + lVar25;
    do {
      lVar25 = *plVar15;
      if ((((lVar25 != 0) && ((*(byte *)(lVar25 + 0x3e) & 0x20) != 0)) &&
          (((long)(1 << (*(byte *)(lVar25 + 0x3c) & 0x1f)) & *(ulong *)(puVar17 + -0x1d60)) != 0))
         && ((*(int *)(lVar25 + 0x24) != 1) == (bool)puVar17[-0x1d58])) {
        uVar24 = uVar24 + *(uint *)(lVar25 + 0x20);
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar1);
    *(ulong *)(puVar17 + -0x1820) = uVar24;
    *(undefined8 *)(puVar17 + -0x1e10) = 0x109166;
    uVar10 = embree::TaskScheduler::threadCount();
    *(undefined8 *)(puVar17 + -0x1c28) = 0;
    *(undefined8 *)(puVar17 + -0x1a28) = 0;
    uVar13 = uVar24 + 0x3ff >> 10;
    if (uVar10 < uVar13) {
      uVar13 = uVar10;
    }
    uVar10 = 0x40;
    if (uVar13 < 0x41) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    uVar11 = uVar24 / uVar10;
    *(ulong *)(puVar17 + -0x1828) = uVar10;
    if (uVar13 < 2) goto LAB_00109ac6;
    *(sse2 **)(puVar17 + -0x1de0) = this;
    uVar21 = 1;
    lVar25 = 0;
    *(undefined8 **)(puVar17 + -0x1dd8) = param_7;
    *(undefined8 *)(puVar17 + -0x1e08) = *(undefined8 *)(puVar17 + -0x1d68);
    *(undefined8 *)(puVar17 + -0x1e00) = *(undefined8 *)(puVar17 + -0x1d60);
    puVar17[-0x1df8] = puVar17[-0x1d58];
    uVar13 = 0;
LAB_00109210:
    do {
      lVar16 = *(long *)(*(long *)(*(long *)(puVar17 + -0x1e08) + 0x1e0) + lVar25 * 8);
      if (((lVar16 != 0) && ((*(byte *)(lVar16 + 0x3e) & 0x20) != 0)) &&
         (((*(ulong *)(puVar17 + -0x1e00) & (long)(1 << (*(byte *)(lVar16 + 0x3c) & 0x1f))) != 0 &&
          (((*(int *)(lVar16 + 0x24) != 1) == (bool)puVar17[-0x1df8] &&
           (uVar26 = (ulong)*(uint *)(lVar16 + 0x20), uVar26 != 0)))))) {
        if ((uVar10 <= uVar21) || (uVar26 + uVar13 < uVar11)) {
          lVar25 = lVar25 + 1;
          uVar13 = uVar26 + uVar13;
          if (uVar10 <= uVar21) break;
          goto LAB_00109210;
        }
        uVar14 = 0;
        uVar18 = (uVar21 + 1) * uVar24;
        uVar9 = uVar21 + 1;
        uVar22 = uVar21;
        while( true ) {
          uVar21 = uVar9;
          uVar20 = uVar11;
          lVar16 = uVar20 + uVar14;
          *(long *)(puVar17 + uVar22 * 8 + -0x1c28) = lVar25;
          uVar11 = uVar18 / uVar10;
          uVar14 = lVar16 - uVar13;
          *(ulong *)(puVar17 + uVar22 * 8 + -0x1a28) = uVar14;
          uVar13 = (uVar20 + uVar26 + uVar13) - lVar16;
          if (((uVar26 <= uVar14) || (uVar18 = uVar18 + uVar24, uVar13 < uVar11)) ||
             (uVar10 <= uVar21)) break;
          uVar9 = uVar21 + 1;
          uVar22 = uVar21;
          uVar13 = uVar20;
        }
      }
      lVar25 = lVar25 + 1;
    } while (uVar21 < uVar10);
    this = *(sse2 **)(puVar17 + -0x1de0);
    param_7 = *(undefined8 **)(puVar17 + -0x1dd8);
  }
  puVar2 = puVar17 + -0x1d68;
  *(undefined8 *)(puVar17 + -0x1d88) = *(undefined8 *)(puVar17 + -0x1df0);
  *(undefined8 *)(puVar17 + -0x1cc8) = 0x3f80000000000000;
  *(undefined1 **)(puVar17 + -0x1e08) = puVar17 + -0x1d88;
  *(undefined1 **)(puVar17 + -0x1d78) = puVar17 + -0x1d88;
  *(undefined1 **)(puVar17 + -0x1df8) = puVar17 + -0x1d48;
  *(undefined1 **)(puVar17 + -0x1ca8) = puVar17 + -0x1d48;
  *(undefined1 **)(puVar17 + -0x1dd8) = puVar17 + -0x1d98;
  *(undefined1 **)(puVar17 + -0x1ca0) = puVar17 + -0x1d98;
  *(undefined1 **)(puVar17 + -0x1de0) = puVar17 + -0x1da9;
  *(undefined1 **)(puVar17 + -0x1c98) = puVar17 + -0x1da9;
  *(undefined1 **)(puVar17 + -0x1e00) = puVar17 + -0x1d78;
  *(undefined1 **)(puVar17 + -0x1c90) = puVar17 + -0x1d78;
  *(ulong *)(puVar17 + -0x1da8) = uVar10;
  *(undefined4 *)(puVar17 + -0x1d48) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d44) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d40) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d3c) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d38) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d34) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d30) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d2c) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d28) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d24) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d20) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d1c) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d18) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d14) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d10) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d0c) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d08) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d04) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d00) = _LC3;
  *(undefined4 *)(puVar17 + -0x1cfc) = _LC3;
  *(undefined4 *)(puVar17 + -0x1cf8) = _LC1;
  *(undefined4 *)(puVar17 + -0x1cf4) = _LC1;
  *(undefined4 *)(puVar17 + -0x1cf0) = _LC1;
  *(undefined4 *)(puVar17 + -0x1cec) = _LC1;
  *(undefined1 **)(puVar17 + -0x1d80) = puVar17 + -0x1dc0;
  *(undefined8 *)(puVar17 + -0x1ce8) = 0;
  *(undefined8 *)(puVar17 + -0x1ce0) = 0;
  *(undefined8 *)(puVar17 + -0x1cd8) = 0;
  *(undefined8 *)(puVar17 + -0x1cd0) = 0;
  *(undefined8 *)(puVar17 + -0x1cc0) = 0x3f800000;
  *(undefined1 **)(puVar17 + -0x1d70) = puVar2;
  *(undefined1 **)(puVar17 + -0x1d98) = puVar2;
  *(undefined1 **)(puVar17 + -0x1cb8) = puVar17 + -0x1c28;
  *(undefined1 **)(puVar17 + -0x1cb0) = puVar17 + -0x1da8;
  *(undefined8 *)(puVar17 + -0x1da0) = 0;
  *(undefined1 **)(puVar17 + -0x1dc8) = puVar17 + -0x1da0;
  *(undefined1 **)(puVar17 + -0x1dd0) = puVar17 + -0x1cb8;
  *(undefined8 *)(puVar17 + -0x1e10) = 0x10946e;
  _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum0_IZNS_28parallel_for_for_prefix_sum0INS_5Scene9Iterator2EmNS_11PrimInfoMBTINS_5LBBoxINS_6Vec3faEEEEEZNS_4sse225createPrimRefArrayMSMBlurEPS5_NS_8Geometry9GTypeMaskEmRNS_8vector_tINS_9PrimRefMBENS_27aligned_monitored_allocatorISH_Lm16EEEEERNS_20BuildProgressMonitorENS_4BBoxIfEEEUlPSE_RKNS_5rangeImEEmmE_ZNSC_25createPrimRefArrayMSMBlurESD_SF_mSL_SN_SP_EUlRKSB_SX_E_EET1_RNS_28ParallelForForPrefixSumStateISZ_EERT_T0_RKSZ_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_SV_SY_EESZ_S12_S14_S15_S17_S1A_S1D_EUlmSU_mE_SY_EESZ_S12_S15_RKS13_S17_S1A_S1D_EUlmE_EEvS13_RKS15_EUlSU_E_EEvS13_S13_S13_S1K_PNS0_16TaskGroupContextE_isra_0
            (0,uVar10,1,puVar17 + -0x1cb8,puVar17 + -0x1da0);
  *(undefined8 *)(puVar17 + -0x1e10) = 0x109473;
  embree::TaskScheduler::wait();
  lVar25 = *(long *)(puVar17 + -0x1da0);
  if (lVar25 != 0) {
LAB_00109ade:
    *(long *)(puVar17 + -0x1d90) = lVar25;
    *(undefined8 *)(puVar17 + -0x1e10) = 0x109af0;
    std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar17 + -0x1e10) = &UNK_00109af8;
    std::rethrow_exception(puVar17 + -0x1d90);
  }
  auVar27 = *(undefined1 (*) [16])(puVar17 + -0x1d48);
  auVar28 = *(undefined1 (*) [16])(puVar17 + -0x1d38);
  auVar29 = *(undefined1 (*) [16])(puVar17 + -0x1d28);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(puVar17 + -0x1cc8);
  auVar30 = *(undefined1 (*) [16])(puVar17 + -0x1d18);
  auVar31 = *(undefined1 (*) [16])(puVar17 + -0x1d08);
  auVar32 = *(undefined1 (*) [16])(puVar17 + -0x1cf8);
  *(undefined1 (*) [16])this = auVar27;
  lVar25 = *(long *)(puVar17 + -0x1ce8);
  lVar16 = *(long *)(puVar17 + -0x1ce0);
  *(undefined1 (*) [16])(this + 0x10) = auVar28;
  lVar19 = *(long *)(puVar17 + -0x1cd8);
  lVar5 = *(long *)(puVar17 + -0x1da8);
  *(undefined1 (*) [16])(this + 0x20) = auVar29;
  uVar24 = *(ulong *)(puVar17 + -0x1cd0);
  uVar6 = *(undefined8 *)(puVar17 + -0x1cc0);
  *(long *)(this + 0x60) = lVar25;
  *(long *)(this + 0x68) = lVar16;
  *(long *)(this + 0x70) = lVar19;
  *(ulong *)(this + 0x78) = uVar24;
  *(undefined8 *)(this + 0x88) = uVar6;
  *(undefined1 (*) [16])(this + 0x30) = auVar30;
  *(undefined1 (*) [16])(this + 0x40) = auVar31;
  *(undefined1 (*) [16])(this + 0x50) = auVar32;
  if (lVar5 != 0) {
    pauVar12 = (undefined1 (*) [16])(puVar17 + -0x1818);
    uVar36 = *(undefined4 *)(this + 0x80);
    uVar37 = *(undefined4 *)(this + 0x84);
    fVar33 = *(float *)(this + 0x88);
    pauVar23 = pauVar12 + lVar5 * 9;
    fVar34 = *(float *)(this + 0x8c);
    do {
      uVar13 = *(ulong *)(pauVar12[7] + 8);
      uVar6 = *(undefined8 *)pauVar12[8];
      *(long *)pauVar12[0x247] = lVar19;
      pauVar12[0x240] = auVar27;
      uVar7 = *(undefined8 *)(this + 0x60);
      uVar8 = *(undefined8 *)(this + 0x68);
      auVar27 = minps(auVar27,*pauVar12);
      pauVar12[0x241] = auVar28;
      lVar25 = lVar25 + *(long *)pauVar12[6];
      auVar28 = maxps(auVar28,pauVar12[1]);
      pauVar12[0x242] = auVar29;
      lVar16 = lVar16 + *(long *)(pauVar12[6] + 8);
      auVar29 = minps(auVar29,pauVar12[2]);
      *(undefined8 *)(puVar17 + -0x1c38) = uVar6;
      uVar6 = *(undefined8 *)(pauVar12[8] + 8);
      pauVar12[0x243] = auVar30;
      lVar19 = lVar19 + *(long *)pauVar12[7];
      auVar30 = maxps(auVar30,pauVar12[3]);
      *(undefined8 *)(puVar17 + -0x1c30) = uVar6;
      fVar35 = *(float *)(puVar17 + -0x1c2c);
      pauVar12[0x244] = auVar31;
      auVar31 = minps(auVar31,pauVar12[4]);
      if (fVar35 <= fVar34) {
        fVar35 = fVar34;
      }
      pauVar12[0x245] = auVar32;
      auVar32 = maxps(auVar32,pauVar12[5]);
      *(float *)(pauVar12[0x248] + 8) = fVar33;
      if (*(float *)(puVar17 + -0x1c30) <= fVar33) {
        fVar33 = *(float *)(puVar17 + -0x1c30);
      }
      *(float *)(pauVar12[0x248] + 0xc) = fVar34;
      *(ulong *)(pauVar12[0x247] + 8) = uVar24;
      *(undefined8 *)pauVar12[0x246] = uVar7;
      *(undefined8 *)(pauVar12[0x246] + 8) = uVar8;
      *(undefined4 *)pauVar12[0x248] = uVar36;
      *(undefined4 *)(pauVar12[0x248] + 4) = uVar37;
      if (uVar24 < uVar13) {
        uVar36 = *(undefined4 *)(puVar17 + -0x1c38);
        uVar37 = *(undefined4 *)(puVar17 + -0x1c34);
        uVar24 = uVar13;
      }
      pauVar12 = pauVar12 + 9;
      *(long *)(this + 0x60) = lVar25;
      *(long *)(this + 0x68) = lVar16;
      fVar34 = fVar35;
    } while (pauVar23 != pauVar12);
    *(ulong *)(this + 0x78) = uVar24;
    *(long *)(this + 0x70) = lVar19;
    *(float *)(this + 0x8c) = fVar35;
    *(float *)(this + 0x88) = fVar33;
    *(undefined4 *)(this + 0x84) = uVar37;
    *(undefined4 *)(this + 0x80) = uVar36;
    *(undefined1 (*) [16])(this + 0x50) = auVar32;
    *(undefined1 (*) [16])(this + 0x40) = auVar31;
    *(undefined1 (*) [16])(this + 0x30) = auVar30;
    *(undefined1 (*) [16])(this + 0x20) = auVar29;
    *(undefined1 (*) [16])(this + 0x10) = auVar28;
    *(undefined1 (*) [16])this = auVar27;
  }
  if (*(long *)(puVar17 + -0x1de8) != lVar16 - lVar25) {
    pcVar4 = *(code **)*param_7;
    if (pcVar4 == Scene::BuildProgressMonitorInterface::operator()) {
      *(undefined8 *)(puVar17 + -0x1e10) = 0x1096cf;
      embree::Scene::progressMonitor(0.0);
    }
    else {
      *(undefined8 *)(puVar17 + -0x1e10) = 0x109a7c;
      (*pcVar4)(param_7,0);
    }
    lVar25 = *(long *)(puVar17 + -0x1828);
    *(undefined1 **)(puVar17 + -0x1d80) = puVar17 + -0x1dc0;
    *(undefined8 *)(puVar17 + -0x1ce8) = 0;
    *(undefined8 *)(puVar17 + -0x1d88) = *(undefined8 *)(puVar17 + -0x1df0);
    *(undefined8 *)(puVar17 + -0x1cc8) = 0x3f80000000000000;
    *(undefined8 *)(puVar17 + -0x1ce0) = 0;
    *(undefined8 *)(puVar17 + -0x1d78) = *(undefined8 *)(puVar17 + -0x1e08);
    *(undefined8 *)(puVar17 + -0x1cd8) = 0;
    *(undefined8 *)(puVar17 + -0x1ca8) = *(undefined8 *)(puVar17 + -0x1df8);
    *(undefined8 *)(puVar17 + -0x1cd0) = 0;
    *(undefined8 *)(puVar17 + -0x1ca0) = *(undefined8 *)(puVar17 + -0x1dd8);
    *(undefined8 *)(puVar17 + -0x1cc0) = 0x3f800000;
    *(undefined8 *)(puVar17 + -0x1c98) = *(undefined8 *)(puVar17 + -0x1de0);
    *(undefined1 **)(puVar17 + -0x1d70) = puVar2;
    *(undefined1 **)(puVar17 + -0x1d98) = puVar2;
    *(long *)(puVar17 + -0x1da8) = lVar25;
    *(undefined1 **)(puVar17 + -0x1cb8) = puVar17 + -0x1c28;
    *(undefined1 **)(puVar17 + -0x1cb0) = puVar17 + -0x1da8;
    *(undefined8 *)(puVar17 + -0x1c90) = *(undefined8 *)(puVar17 + -0x1e00);
    *(undefined4 *)(puVar17 + -0x1d48) = _LC3;
    *(undefined4 *)(puVar17 + -0x1d44) = _UNK_00110594;
    *(undefined4 *)(puVar17 + -0x1d40) = _UNK_00110598;
    *(undefined4 *)(puVar17 + -0x1d3c) = _UNK_0011059c;
    *(undefined4 *)(puVar17 + -0x1d38) = _LC1;
    *(undefined4 *)(puVar17 + -0x1d34) = _UNK_00110584;
    *(undefined4 *)(puVar17 + -0x1d30) = _UNK_00110588;
    *(undefined4 *)(puVar17 + -0x1d2c) = _UNK_0011058c;
    *(undefined4 *)(puVar17 + -0x1d28) = _LC3;
    *(undefined4 *)(puVar17 + -0x1d24) = _UNK_00110594;
    *(undefined4 *)(puVar17 + -0x1d20) = _UNK_00110598;
    *(undefined4 *)(puVar17 + -0x1d1c) = _UNK_0011059c;
    *(undefined4 *)(puVar17 + -0x1d18) = _LC1;
    *(undefined4 *)(puVar17 + -0x1d14) = _UNK_00110584;
    *(undefined4 *)(puVar17 + -0x1d10) = _UNK_00110588;
    *(undefined4 *)(puVar17 + -0x1d0c) = _UNK_0011058c;
    *(undefined4 *)(puVar17 + -0x1d08) = _LC3;
    *(undefined4 *)(puVar17 + -0x1d04) = _UNK_00110594;
    *(undefined4 *)(puVar17 + -0x1d00) = _UNK_00110598;
    *(undefined4 *)(puVar17 + -0x1cfc) = _UNK_0011059c;
    *(undefined4 *)(puVar17 + -0x1cf8) = _LC1;
    *(undefined4 *)(puVar17 + -0x1cf4) = _UNK_00110584;
    *(undefined4 *)(puVar17 + -0x1cf0) = _UNK_00110588;
    *(undefined4 *)(puVar17 + -0x1cec) = _UNK_0011058c;
    if (lVar25 == 0) {
      uVar24 = 0;
      lVar19 = 0;
      lVar16 = 0;
      uVar36 = 0;
      auVar32._4_4_ = _UNK_00110584;
      auVar32._0_4_ = _LC1;
      auVar32._8_4_ = _UNK_00110588;
      auVar32._12_4_ = _UNK_0011058c;
      auVar31._4_4_ = _UNK_00110594;
      auVar31._0_4_ = _LC3;
      auVar31._8_4_ = _UNK_00110598;
      auVar31._12_4_ = _UNK_0011059c;
      auVar30._4_4_ = _UNK_00110584;
      auVar30._0_4_ = _LC1;
      auVar30._8_4_ = _UNK_00110588;
      auVar30._12_4_ = _UNK_0011058c;
      auVar29._4_4_ = _UNK_00110594;
      auVar29._0_4_ = _LC3;
      auVar29._8_4_ = _UNK_00110598;
      auVar29._12_4_ = _UNK_0011059c;
      auVar28._4_4_ = _UNK_00110584;
      auVar28._0_4_ = _LC1;
      auVar28._8_4_ = _UNK_00110588;
      auVar28._12_4_ = _UNK_0011058c;
      auVar27._4_4_ = _UNK_00110594;
      auVar27._0_4_ = _LC3;
      auVar27._8_4_ = _UNK_00110598;
      auVar27._12_4_ = _UNK_0011059c;
      lVar25 = 0;
      uVar37 = _LC21;
    }
    else {
      *(undefined8 *)(puVar17 + -0x1da0) = 0;
      *(undefined8 *)(puVar17 + -0x1e10) = 0x1098bd;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum1_IZNS_28parallel_for_for_prefix_sum1INS_5Scene9Iterator2EmNS_11PrimInfoMBTINS_5LBBoxINS_6Vec3faEEEEEZNS_4sse225createPrimRefArrayMSMBlurEPS5_NS_8Geometry9GTypeMaskEmRNS_8vector_tINS_9PrimRefMBENS_27aligned_monitored_allocatorISH_Lm16EEEEERNS_20BuildProgressMonitorENS_4BBoxIfEEEUlPSE_RKNS_5rangeImEEmmRKSB_E_ZNSC_25createPrimRefArrayMSMBlurESD_SF_mSL_SN_SP_EUlSW_SW_E0_EET1_RNS_28ParallelForForPrefixSumStateISZ_EERT_T0_RKSZ_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_SX_SY_EESZ_S12_S14_S15_S17_S1A_S1D_EUlmSU_mSW_E_SY_EESZ_S12_S15_RKS13_S17_S1A_S1D_EUlmE_EEvS13_RKS15_EUlSU_E_EEvS13_S13_S13_S1K_PNS0_16TaskGroupContextE_isra_0
                (0,lVar25,1,*(undefined8 *)(puVar17 + -0x1dd0),*(undefined8 *)(puVar17 + -0x1dc8));
      *(undefined8 *)(puVar17 + -0x1e10) = 0x1098c2;
      embree::TaskScheduler::wait();
      lVar25 = *(long *)(puVar17 + -0x1da0);
      if (lVar25 != 0) goto LAB_00109ade;
      auVar27 = *(undefined1 (*) [16])(puVar17 + -0x1d48);
      auVar28 = *(undefined1 (*) [16])(puVar17 + -0x1d38);
      auVar29 = *(undefined1 (*) [16])(puVar17 + -0x1d28);
      auVar30 = *(undefined1 (*) [16])(puVar17 + -0x1d18);
      auVar31 = *(undefined1 (*) [16])(puVar17 + -0x1d08);
      auVar32 = *(undefined1 (*) [16])(puVar17 + -0x1cf8);
      lVar25 = *(long *)(puVar17 + -0x1ce8);
      lVar16 = *(long *)(puVar17 + -0x1ce0);
      lVar19 = *(long *)(puVar17 + -0x1cd8);
      uVar24 = *(ulong *)(puVar17 + -0x1cd0);
      uVar36 = *(undefined4 *)(puVar17 + -0x1cc8);
      uVar37 = *(undefined4 *)(puVar17 + -0x1cc4);
      fVar33 = *(float *)(puVar17 + -0x1cc0);
      if (*(long *)(puVar17 + -0x1da8) != 0) {
        pauVar12 = (undefined1 (*) [16])(puVar17 + -0x1818);
        pauVar23 = pauVar12 + *(long *)(puVar17 + -0x1da8) * 9;
        fVar34 = *(float *)(puVar17 + -0x1cbc);
        do {
          uVar6 = *(undefined8 *)pauVar12[8];
          uVar13 = *(ulong *)(pauVar12[7] + 8);
          *(long *)pauVar12[0x246] = lVar25;
          *(long *)(pauVar12[0x246] + 8) = lVar16;
          lVar25 = lVar25 + *(long *)pauVar12[6];
          *(undefined8 *)(puVar17 + -0x1c38) = uVar6;
          uVar6 = *(undefined8 *)(pauVar12[8] + 8);
          *(long *)pauVar12[0x247] = lVar19;
          lVar16 = lVar16 + *(long *)(pauVar12[6] + 8);
          *(undefined8 *)(puVar17 + -0x1c30) = uVar6;
          lVar19 = lVar19 + *(long *)pauVar12[7];
          fVar35 = *(float *)(puVar17 + -0x1c2c);
          pauVar12[0x240] = auVar27;
          auVar27 = minps(auVar27,*pauVar12);
          pauVar12[0x241] = auVar28;
          auVar28 = maxps(auVar28,pauVar12[1]);
          if (fVar35 <= fVar34) {
            fVar35 = fVar34;
          }
          pauVar12[0x242] = auVar29;
          auVar29 = minps(auVar29,pauVar12[2]);
          pauVar12[0x243] = auVar30;
          auVar30 = maxps(auVar30,pauVar12[3]);
          pauVar12[0x244] = auVar31;
          auVar31 = minps(auVar31,pauVar12[4]);
          pauVar12[0x245] = auVar32;
          auVar32 = maxps(auVar32,pauVar12[5]);
          *(float *)(pauVar12[0x248] + 8) = fVar33;
          if (*(float *)(puVar17 + -0x1c30) <= fVar33) {
            fVar33 = *(float *)(puVar17 + -0x1c30);
          }
          *(float *)(pauVar12[0x248] + 0xc) = fVar34;
          *(ulong *)(pauVar12[0x247] + 8) = uVar24;
          *(undefined4 *)pauVar12[0x248] = uVar36;
          *(undefined4 *)(pauVar12[0x248] + 4) = uVar37;
          if (uVar24 < uVar13) {
            uVar36 = *(undefined4 *)(puVar17 + -0x1c38);
            uVar37 = *(undefined4 *)(puVar17 + -0x1c34);
            uVar24 = uVar13;
          }
          pauVar12 = pauVar12 + 9;
          fVar34 = fVar35;
        } while (pauVar23 != pauVar12);
      }
    }
    *(long *)(this + 0x60) = lVar25;
    *(long *)(this + 0x68) = lVar16;
    *(long *)(this + 0x70) = lVar19;
    *(ulong *)(this + 0x78) = uVar24;
    *(undefined1 (*) [16])this = auVar27;
    *(undefined1 (*) [16])(this + 0x10) = auVar28;
    *(undefined1 (*) [16])(this + 0x20) = auVar29;
    *(undefined1 (*) [16])(this + 0x30) = auVar30;
    *(undefined1 (*) [16])(this + 0x40) = auVar31;
    *(undefined1 (*) [16])(this + 0x50) = auVar32;
    *(undefined4 *)(this + 0x80) = uVar36;
    *(undefined4 *)(this + 0x84) = uVar37;
  }
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(puVar17 + -0x1dc0);
  if (*(long *)(puVar17 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar17 + -0x1e10) = 0x109ade;
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createPrimRefArrayMSMBlur(embree::Scene*, embree::Geometry::GTypeMask, unsigned
   long, embree::vector_t<embree::PrimRefMB, embree::aligned_monitored_allocator<embree::PrimRefMB,
   16ul> >&, embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&,
   embree::BuildProgressMonitor&, embree::BBox<float>) */

undefined1 (*) [16]
embree::sse2::createPrimRefArrayMSMBlur
          (undefined8 param_1_00,undefined1 (*param_1) [16],undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 local_4030 [16384];
  
  puVar2 = &stack0xffffffffffffffd0;
  do {
    puVar17 = puVar2;
    *(undefined8 *)(puVar17 + -0x1000) = *(undefined8 *)(puVar17 + -0x1000);
    puVar2 = puVar17 + -0x1000;
  } while (puVar17 + -0x1000 != local_4030);
  puVar27 = *(undefined8 **)(puVar17 + 0x3038);
  *(undefined8 *)(puVar17 + -0x1df8) = param_5;
  *(undefined8 *)(puVar17 + -0x1e08) = param_6;
  *(undefined8 *)(puVar17 + -0x1e00) = param_7;
  *(undefined8 *)(puVar17 + -0x1dd0) = param_1_00;
  *(undefined8 *)(puVar17 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)*puVar27;
  *(undefined8 *)(puVar17 + -0x1828) = 0;
  *(undefined8 *)(puVar17 + -0x1d88) = param_3;
  *(undefined8 *)(puVar17 + -0x1d80) = param_4;
  puVar17[-0x1d78] = 1;
  pcVar4 = (code *)*puVar3;
  if (pcVar4 == Scene::BuildProgressMonitorInterface::operator()) {
    *(undefined8 *)(puVar17 + -0x1e30) = 0x109ba8;
    embree::Scene::progressMonitor(0.0);
  }
  else {
    *(undefined8 *)(puVar17 + -0x1e30) = 0x10a560;
    (*pcVar4)(puVar27,0);
  }
  lVar25 = *(long *)(*(long *)(puVar17 + -0x1d88) + 0x1d0);
  if (lVar25 == 0) {
    *(undefined8 *)(puVar17 + -0x1820) = 0;
    *(undefined8 *)(puVar17 + -0x1e30) = 0x10a592;
    embree::TaskScheduler::threadCount();
    *(undefined8 *)(puVar17 + -0x1828) = 1;
    *(undefined8 *)(puVar17 + -0x1c28) = 0;
    *(undefined8 *)(puVar17 + -0x1a28) = 0;
LAB_0010a5b6:
    uVar10 = 1;
  }
  else {
    plVar15 = *(long **)(*(long *)(puVar17 + -0x1d88) + 0x1e0);
    uVar24 = 0;
    plVar1 = plVar15 + lVar25;
    do {
      lVar25 = *plVar15;
      if ((((lVar25 != 0) && ((*(byte *)(lVar25 + 0x3e) & 0x20) != 0)) &&
          (((long)(1 << (*(byte *)(lVar25 + 0x3c) & 0x1f)) & *(ulong *)(puVar17 + -0x1d80)) != 0))
         && ((*(int *)(lVar25 + 0x24) != 1) == (bool)puVar17[-0x1d78])) {
        uVar24 = uVar24 + *(uint *)(lVar25 + 0x20);
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar1);
    *(ulong *)(puVar17 + -0x1820) = uVar24;
    *(undefined8 *)(puVar17 + -0x1e30) = 0x109c2e;
    uVar10 = embree::TaskScheduler::threadCount();
    *(undefined8 *)(puVar17 + -0x1c28) = 0;
    *(undefined8 *)(puVar17 + -0x1a28) = 0;
    uVar13 = uVar24 + 0x3ff >> 10;
    if (uVar10 < uVar13) {
      uVar13 = uVar10;
    }
    uVar10 = 0x40;
    if (uVar13 < 0x41) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    uVar11 = uVar24 / uVar10;
    *(ulong *)(puVar17 + -0x1828) = uVar10;
    if (uVar13 < 2) goto LAB_0010a5b6;
    *(undefined1 (**) [16])(puVar17 + -0x1df0) = param_1;
    uVar21 = 1;
    lVar25 = 0;
    *(undefined8 **)(puVar17 + -0x1de8) = puVar27;
    *(undefined8 *)(puVar17 + -0x1e20) = *(undefined8 *)(puVar17 + -0x1d88);
    *(undefined8 *)(puVar17 + -0x1e18) = *(undefined8 *)(puVar17 + -0x1d80);
    puVar17[-0x1e10] = puVar17[-0x1d78];
    uVar13 = 0;
LAB_00109cd8:
    do {
      lVar16 = *(long *)(*(long *)(*(long *)(puVar17 + -0x1e20) + 0x1e0) + lVar25 * 8);
      if (((lVar16 != 0) && ((*(byte *)(lVar16 + 0x3e) & 0x20) != 0)) &&
         (((*(ulong *)(puVar17 + -0x1e18) & (long)(1 << (*(byte *)(lVar16 + 0x3c) & 0x1f))) != 0 &&
          (((*(int *)(lVar16 + 0x24) != 1) == (bool)puVar17[-0x1e10] &&
           (uVar26 = (ulong)*(uint *)(lVar16 + 0x20), uVar26 != 0)))))) {
        if ((uVar10 <= uVar21) || (uVar26 + uVar13 < uVar11)) {
          lVar25 = lVar25 + 1;
          uVar13 = uVar26 + uVar13;
          if (uVar10 <= uVar21) break;
          goto LAB_00109cd8;
        }
        uVar14 = 0;
        uVar18 = (uVar21 + 1) * uVar24;
        uVar9 = uVar21 + 1;
        uVar22 = uVar21;
        while( true ) {
          uVar21 = uVar9;
          uVar20 = uVar11;
          lVar16 = uVar20 + uVar14;
          *(long *)(puVar17 + uVar22 * 8 + -0x1c28) = lVar25;
          uVar11 = uVar18 / uVar10;
          uVar14 = lVar16 - uVar13;
          *(ulong *)(puVar17 + uVar22 * 8 + -0x1a28) = uVar14;
          uVar13 = (uVar20 + uVar26 + uVar13) - lVar16;
          if (((uVar26 <= uVar14) || (uVar18 = uVar18 + uVar24, uVar13 < uVar11)) ||
             (uVar10 <= uVar21)) break;
          uVar9 = uVar21 + 1;
          uVar22 = uVar21;
          uVar13 = uVar20;
        }
      }
      lVar25 = lVar25 + 1;
    } while (uVar21 < uVar10);
    param_1 = *(undefined1 (**) [16])(puVar17 + -0x1df0);
    puVar27 = *(undefined8 **)(puVar17 + -0x1de8);
  }
  *(ulong *)(puVar17 + -0x1db8) = uVar10;
  puVar2 = puVar17 + -0x1d88;
  *(undefined8 *)(puVar17 + -0x1d68) = *(undefined8 *)(puVar17 + -0x1e08);
  *(undefined1 **)(puVar17 + -0x1d58) = puVar17 + -0x1dd0;
  *(undefined8 *)(puVar17 + -0x1d60) = *(undefined8 *)(puVar17 + -0x1e00);
  *(undefined8 *)(puVar17 + -0x1cc8) = 0x3f80000000000000;
  *(undefined1 **)(puVar17 + -0x1e20) = puVar17 + -0x1d68;
  *(undefined1 **)(puVar17 + -0x1d98) = puVar17 + -0x1d68;
  *(undefined1 **)(puVar17 + -0x1e18) = puVar17 + -0x1d48;
  *(undefined1 **)(puVar17 + -0x1ca8) = puVar17 + -0x1d48;
  *(undefined1 **)(puVar17 + -0x1df0) = puVar17 + -0x1da8;
  *(undefined1 **)(puVar17 + -0x1ca0) = puVar17 + -0x1da8;
  *(undefined1 **)(puVar17 + -0x1e10) = puVar17 + -0x1db9;
  *(undefined1 **)(puVar17 + -0x1c98) = puVar17 + -0x1db9;
  *(undefined4 *)(puVar17 + -0x1d48) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d44) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d40) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d3c) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d38) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d34) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d30) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d2c) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d28) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d24) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d20) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d1c) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d18) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d14) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d10) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d0c) = _LC1;
  *(undefined4 *)(puVar17 + -0x1d08) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d04) = _LC3;
  *(undefined4 *)(puVar17 + -0x1d00) = _LC3;
  *(undefined4 *)(puVar17 + -0x1cfc) = _LC3;
  *(undefined4 *)(puVar17 + -0x1cf8) = _LC1;
  *(undefined4 *)(puVar17 + -0x1cf4) = _LC1;
  *(undefined4 *)(puVar17 + -0x1cf0) = _LC1;
  *(undefined4 *)(puVar17 + -0x1cec) = _LC1;
  *(undefined8 *)(puVar17 + -0x1ce8) = 0;
  *(undefined8 *)(puVar17 + -0x1ce0) = 0;
  *(undefined8 *)(puVar17 + -0x1cd8) = 0;
  *(undefined8 *)(puVar17 + -0x1cd0) = 0;
  *(undefined8 *)(puVar17 + -0x1cc0) = 0x3f800000;
  *(undefined1 **)(puVar17 + -0x1d90) = puVar2;
  *(undefined1 **)(puVar17 + -0x1da8) = puVar2;
  *(undefined1 **)(puVar17 + -0x1cb8) = puVar17 + -0x1c28;
  *(undefined1 **)(puVar17 + -0x1cb0) = puVar17 + -0x1db8;
  *(undefined1 **)(puVar17 + -0x1de8) = puVar17 + -0x1d98;
  *(undefined1 **)(puVar17 + -0x1c90) = puVar17 + -0x1d98;
  *(undefined1 **)(puVar17 + -0x1dd8) = puVar17 + -0x1db0;
  *(undefined1 **)(puVar17 + -0x1de0) = puVar17 + -0x1cb8;
  *(undefined8 *)(puVar17 + -0x1db0) = 0;
  *(undefined8 *)(puVar17 + -0x1e30) = 0x109f52;
  _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum0_IZNS_28parallel_for_for_prefix_sum0INS_5Scene9Iterator2EmNS_11PrimInfoMBTINS_5LBBoxINS_6Vec3faEEEEEZNS_4sse225createPrimRefArrayMSMBlurEPS5_NS_8Geometry9GTypeMaskEmRNS_8vector_tINS_9PrimRefMBENS_27aligned_monitored_allocatorISH_Lm16EEEEERNSG_INS_16SubGridBuildDataENSI_ISM_Lm4EEEEERNS_20BuildProgressMonitorENS_4BBoxIfEEEUlPSE_RKNS_5rangeImEEmmE_ZNSC_25createPrimRefArrayMSMBlurESD_SF_mSL_SP_SR_ST_EUlRKSB_S11_E_EET1_RNS_28ParallelForForPrefixSumStateIS13_EERT_T0_RKS13_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_SZ_S12_EES13_S16_S18_S19_S1B_S1E_S1H_EUlmSY_mE_S12_EES13_S16_S19_RKS17_S1B_S1E_S1H_EUlmE_EEvS17_RKS19_EUlSY_E_EEvS17_S17_S17_S1O_PNS0_16TaskGroupContextE_isra_0
            (0,uVar10,1,puVar17 + -0x1cb8,puVar17 + -0x1db0);
  *(undefined8 *)(puVar17 + -0x1e30) = 0x109f57;
  embree::TaskScheduler::wait();
  lVar25 = *(long *)(puVar17 + -0x1db0);
  if (lVar25 != 0) {
LAB_0010a5ce:
    *(long *)(puVar17 + -0x1da0) = lVar25;
    *(undefined8 *)(puVar17 + -0x1e30) = 0x10a5e6;
    std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar17 + -0x1e30) = 0x10a5ee;
    std::rethrow_exception(puVar17 + -0x1da0);
  }
  auVar28 = *(undefined1 (*) [16])(puVar17 + -0x1d48);
  auVar29 = *(undefined1 (*) [16])(puVar17 + -0x1d38);
  auVar30 = *(undefined1 (*) [16])(puVar17 + -0x1d28);
  *(undefined8 *)param_1[8] = *(undefined8 *)(puVar17 + -0x1cc8);
  auVar31 = *(undefined1 (*) [16])(puVar17 + -0x1d18);
  auVar32 = *(undefined1 (*) [16])(puVar17 + -0x1d08);
  auVar33 = *(undefined1 (*) [16])(puVar17 + -0x1cf8);
  *param_1 = auVar28;
  lVar25 = *(long *)(puVar17 + -0x1ce8);
  lVar16 = *(long *)(puVar17 + -0x1ce0);
  param_1[1] = auVar29;
  lVar19 = *(long *)(puVar17 + -0x1cd8);
  lVar5 = *(long *)(puVar17 + -0x1db8);
  param_1[2] = auVar30;
  uVar24 = *(ulong *)(puVar17 + -0x1cd0);
  uVar6 = *(undefined8 *)(puVar17 + -0x1cc0);
  *(long *)param_1[6] = lVar25;
  *(long *)(param_1[6] + 8) = lVar16;
  *(long *)param_1[7] = lVar19;
  *(ulong *)(param_1[7] + 8) = uVar24;
  *(undefined8 *)(param_1[8] + 8) = uVar6;
  param_1[3] = auVar31;
  param_1[4] = auVar32;
  param_1[5] = auVar33;
  if (lVar5 != 0) {
    pauVar12 = (undefined1 (*) [16])(puVar17 + -0x1818);
    uVar37 = *(undefined4 *)param_1[8];
    uVar38 = *(undefined4 *)(param_1[8] + 4);
    fVar34 = *(float *)(param_1[8] + 8);
    pauVar23 = pauVar12 + lVar5 * 9;
    fVar35 = *(float *)(param_1[8] + 0xc);
    do {
      uVar13 = *(ulong *)(pauVar12[7] + 8);
      uVar6 = *(undefined8 *)pauVar12[8];
      *(long *)pauVar12[0x247] = lVar19;
      pauVar12[0x240] = auVar28;
      uVar7 = *(undefined8 *)param_1[6];
      uVar8 = *(undefined8 *)(param_1[6] + 8);
      auVar28 = minps(auVar28,*pauVar12);
      pauVar12[0x241] = auVar29;
      lVar25 = lVar25 + *(long *)pauVar12[6];
      auVar29 = maxps(auVar29,pauVar12[1]);
      pauVar12[0x242] = auVar30;
      lVar16 = lVar16 + *(long *)(pauVar12[6] + 8);
      auVar30 = minps(auVar30,pauVar12[2]);
      *(undefined8 *)(puVar17 + -0x1c38) = uVar6;
      uVar6 = *(undefined8 *)(pauVar12[8] + 8);
      pauVar12[0x243] = auVar31;
      lVar19 = lVar19 + *(long *)pauVar12[7];
      auVar31 = maxps(auVar31,pauVar12[3]);
      *(undefined8 *)(puVar17 + -0x1c30) = uVar6;
      fVar36 = *(float *)(puVar17 + -0x1c2c);
      pauVar12[0x244] = auVar32;
      auVar32 = minps(auVar32,pauVar12[4]);
      if (fVar36 <= fVar35) {
        fVar36 = fVar35;
      }
      pauVar12[0x245] = auVar33;
      auVar33 = maxps(auVar33,pauVar12[5]);
      *(float *)(pauVar12[0x248] + 8) = fVar34;
      if (*(float *)(puVar17 + -0x1c30) <= fVar34) {
        fVar34 = *(float *)(puVar17 + -0x1c30);
      }
      *(float *)(pauVar12[0x248] + 0xc) = fVar35;
      *(ulong *)(pauVar12[0x247] + 8) = uVar24;
      *(undefined8 *)pauVar12[0x246] = uVar7;
      *(undefined8 *)(pauVar12[0x246] + 8) = uVar8;
      *(undefined4 *)pauVar12[0x248] = uVar37;
      *(undefined4 *)(pauVar12[0x248] + 4) = uVar38;
      if (uVar24 < uVar13) {
        uVar37 = *(undefined4 *)(puVar17 + -0x1c38);
        uVar38 = *(undefined4 *)(puVar17 + -0x1c34);
        uVar24 = uVar13;
      }
      pauVar12 = pauVar12 + 9;
      *(long *)param_1[6] = lVar25;
      *(long *)(param_1[6] + 8) = lVar16;
      fVar35 = fVar36;
    } while (pauVar23 != pauVar12);
    *(ulong *)(param_1[7] + 8) = uVar24;
    *(long *)param_1[7] = lVar19;
    *(float *)(param_1[8] + 0xc) = fVar36;
    *(float *)(param_1[8] + 8) = fVar34;
    *(undefined4 *)(param_1[8] + 4) = uVar38;
    *(undefined4 *)param_1[8] = uVar37;
    param_1[5] = auVar33;
    param_1[4] = auVar32;
    param_1[3] = auVar31;
    param_1[2] = auVar30;
    param_1[1] = auVar29;
    *param_1 = auVar28;
  }
  if (*(long *)(puVar17 + -0x1df8) != lVar16 - lVar25) {
    pcVar4 = *(code **)*puVar27;
    if (pcVar4 == Scene::BuildProgressMonitorInterface::operator()) {
      *(undefined8 *)(puVar17 + -0x1e30) = 0x10a1af;
      embree::Scene::progressMonitor(0.0);
    }
    else {
      *(undefined8 *)(puVar17 + -0x1e30) = 0x10a56c;
      (*pcVar4)(puVar27,0);
    }
    lVar25 = *(long *)(puVar17 + -0x1828);
    *(undefined1 **)(puVar17 + -0x1d58) = puVar17 + -0x1dd0;
    *(undefined8 *)(puVar17 + -0x1ce8) = 0;
    *(undefined8 *)(puVar17 + -0x1d68) = *(undefined8 *)(puVar17 + -0x1e08);
    *(undefined8 *)(puVar17 + -0x1ce0) = 0;
    *(undefined8 *)(puVar17 + -0x1d60) = *(undefined8 *)(puVar17 + -0x1e00);
    *(undefined8 *)(puVar17 + -0x1cc8) = 0x3f80000000000000;
    *(undefined8 *)(puVar17 + -0x1cd8) = 0;
    *(undefined8 *)(puVar17 + -0x1d98) = *(undefined8 *)(puVar17 + -0x1e20);
    *(undefined8 *)(puVar17 + -0x1cd0) = 0;
    *(undefined8 *)(puVar17 + -0x1ca8) = *(undefined8 *)(puVar17 + -0x1e18);
    *(undefined8 *)(puVar17 + -0x1cc0) = 0x3f800000;
    *(undefined8 *)(puVar17 + -0x1ca0) = *(undefined8 *)(puVar17 + -0x1df0);
    *(undefined1 **)(puVar17 + -0x1d90) = puVar2;
    *(undefined8 *)(puVar17 + -0x1c98) = *(undefined8 *)(puVar17 + -0x1e10);
    *(undefined1 **)(puVar17 + -0x1da8) = puVar2;
    *(long *)(puVar17 + -0x1db8) = lVar25;
    *(undefined1 **)(puVar17 + -0x1cb8) = puVar17 + -0x1c28;
    *(undefined1 **)(puVar17 + -0x1cb0) = puVar17 + -0x1db8;
    *(undefined4 *)(puVar17 + -0x1d48) = _LC3;
    *(undefined4 *)(puVar17 + -0x1d44) = _UNK_00110594;
    *(undefined4 *)(puVar17 + -0x1d40) = _UNK_00110598;
    *(undefined4 *)(puVar17 + -0x1d3c) = _UNK_0011059c;
    *(undefined4 *)(puVar17 + -0x1d38) = _LC1;
    *(undefined4 *)(puVar17 + -0x1d34) = _UNK_00110584;
    *(undefined4 *)(puVar17 + -0x1d30) = _UNK_00110588;
    *(undefined4 *)(puVar17 + -0x1d2c) = _UNK_0011058c;
    *(undefined4 *)(puVar17 + -0x1d28) = _LC3;
    *(undefined4 *)(puVar17 + -0x1d24) = _UNK_00110594;
    *(undefined4 *)(puVar17 + -0x1d20) = _UNK_00110598;
    *(undefined4 *)(puVar17 + -0x1d1c) = _UNK_0011059c;
    *(undefined4 *)(puVar17 + -0x1d18) = _LC1;
    *(undefined4 *)(puVar17 + -0x1d14) = _UNK_00110584;
    *(undefined4 *)(puVar17 + -0x1d10) = _UNK_00110588;
    *(undefined4 *)(puVar17 + -0x1d0c) = _UNK_0011058c;
    *(undefined4 *)(puVar17 + -0x1d08) = _LC3;
    *(undefined4 *)(puVar17 + -0x1d04) = _UNK_00110594;
    *(undefined4 *)(puVar17 + -0x1d00) = _UNK_00110598;
    *(undefined4 *)(puVar17 + -0x1cfc) = _UNK_0011059c;
    *(undefined4 *)(puVar17 + -0x1cf8) = _LC1;
    *(undefined4 *)(puVar17 + -0x1cf4) = _UNK_00110584;
    *(undefined4 *)(puVar17 + -0x1cf0) = _UNK_00110588;
    *(undefined4 *)(puVar17 + -0x1cec) = _UNK_0011058c;
    *(undefined8 *)(puVar17 + -0x1c90) = *(undefined8 *)(puVar17 + -0x1de8);
    if (lVar25 == 0) {
      uVar24 = 0;
      lVar19 = 0;
      lVar16 = 0;
      uVar37 = 0;
      auVar33._4_4_ = _UNK_00110584;
      auVar33._0_4_ = _LC1;
      auVar33._8_4_ = _UNK_00110588;
      auVar33._12_4_ = _UNK_0011058c;
      auVar32._4_4_ = _UNK_00110594;
      auVar32._0_4_ = _LC3;
      auVar32._8_4_ = _UNK_00110598;
      auVar32._12_4_ = _UNK_0011059c;
      auVar31._4_4_ = _UNK_00110584;
      auVar31._0_4_ = _LC1;
      auVar31._8_4_ = _UNK_00110588;
      auVar31._12_4_ = _UNK_0011058c;
      auVar30._4_4_ = _UNK_00110594;
      auVar30._0_4_ = _LC3;
      auVar30._8_4_ = _UNK_00110598;
      auVar30._12_4_ = _UNK_0011059c;
      auVar29._4_4_ = _UNK_00110584;
      auVar29._0_4_ = _LC1;
      auVar29._8_4_ = _UNK_00110588;
      auVar29._12_4_ = _UNK_0011058c;
      auVar28._4_4_ = _UNK_00110594;
      auVar28._0_4_ = _LC3;
      auVar28._8_4_ = _UNK_00110598;
      auVar28._12_4_ = _UNK_0011059c;
      lVar25 = 0;
      uVar38 = _LC21;
    }
    else {
      *(undefined8 *)(puVar17 + -0x1db0) = 0;
      *(undefined8 *)(puVar17 + -0x1e30) = 0x10a3ae;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_29parallel_for_for_prefix_sum1_IZNS_28parallel_for_for_prefix_sum1INS_5Scene9Iterator2EmNS_11PrimInfoMBTINS_5LBBoxINS_6Vec3faEEEEEZNS_4sse225createPrimRefArrayMSMBlurEPS5_NS_8Geometry9GTypeMaskEmRNS_8vector_tINS_9PrimRefMBENS_27aligned_monitored_allocatorISH_Lm16EEEEERNSG_INS_16SubGridBuildDataENSI_ISM_Lm4EEEEERNS_20BuildProgressMonitorENS_4BBoxIfEEEUlPSE_RKNS_5rangeImEEmmRKSB_E_ZNSC_25createPrimRefArrayMSMBlurESD_SF_mSL_SP_SR_ST_EUlS10_S10_E0_EET1_RNS_28ParallelForForPrefixSumStateIS13_EERT_T0_RKS13_RKT2_RKT3_EUlmE_mSB_ZNS4_IS6_mSB_S11_S12_EES13_S16_S18_S19_S1B_S1E_S1H_EUlmSY_mS10_E_S12_EES13_S16_S19_RKS17_S1B_S1E_S1H_EUlmE_EEvS17_RKS19_EUlSY_E_EEvS17_S17_S17_S1O_PNS0_16TaskGroupContextE_isra_0
                (0,lVar25,1,*(undefined8 *)(puVar17 + -0x1de0),*(undefined8 *)(puVar17 + -0x1dd8));
      *(undefined8 *)(puVar17 + -0x1e30) = 0x10a3b3;
      embree::TaskScheduler::wait();
      lVar25 = *(long *)(puVar17 + -0x1db0);
      if (lVar25 != 0) goto LAB_0010a5ce;
      auVar28 = *(undefined1 (*) [16])(puVar17 + -0x1d48);
      auVar29 = *(undefined1 (*) [16])(puVar17 + -0x1d38);
      auVar30 = *(undefined1 (*) [16])(puVar17 + -0x1d28);
      auVar31 = *(undefined1 (*) [16])(puVar17 + -0x1d18);
      auVar32 = *(undefined1 (*) [16])(puVar17 + -0x1d08);
      auVar33 = *(undefined1 (*) [16])(puVar17 + -0x1cf8);
      lVar25 = *(long *)(puVar17 + -0x1ce8);
      lVar16 = *(long *)(puVar17 + -0x1ce0);
      lVar19 = *(long *)(puVar17 + -0x1cd8);
      uVar24 = *(ulong *)(puVar17 + -0x1cd0);
      uVar37 = *(undefined4 *)(puVar17 + -0x1cc8);
      uVar38 = *(undefined4 *)(puVar17 + -0x1cc4);
      fVar34 = *(float *)(puVar17 + -0x1cc0);
      if (*(long *)(puVar17 + -0x1db8) != 0) {
        pauVar12 = (undefined1 (*) [16])(puVar17 + -0x1818);
        pauVar23 = pauVar12 + *(long *)(puVar17 + -0x1db8) * 9;
        fVar35 = *(float *)(puVar17 + -0x1cbc);
        do {
          uVar6 = *(undefined8 *)pauVar12[8];
          uVar13 = *(ulong *)(pauVar12[7] + 8);
          *(long *)pauVar12[0x246] = lVar25;
          *(long *)(pauVar12[0x246] + 8) = lVar16;
          lVar25 = lVar25 + *(long *)pauVar12[6];
          *(undefined8 *)(puVar17 + -0x1c38) = uVar6;
          uVar6 = *(undefined8 *)(pauVar12[8] + 8);
          *(long *)pauVar12[0x247] = lVar19;
          lVar16 = lVar16 + *(long *)(pauVar12[6] + 8);
          *(undefined8 *)(puVar17 + -0x1c30) = uVar6;
          lVar19 = lVar19 + *(long *)pauVar12[7];
          fVar36 = *(float *)(puVar17 + -0x1c2c);
          pauVar12[0x240] = auVar28;
          auVar28 = minps(auVar28,*pauVar12);
          pauVar12[0x241] = auVar29;
          auVar29 = maxps(auVar29,pauVar12[1]);
          if (fVar36 <= fVar35) {
            fVar36 = fVar35;
          }
          pauVar12[0x242] = auVar30;
          auVar30 = minps(auVar30,pauVar12[2]);
          pauVar12[0x243] = auVar31;
          auVar31 = maxps(auVar31,pauVar12[3]);
          pauVar12[0x244] = auVar32;
          auVar32 = minps(auVar32,pauVar12[4]);
          pauVar12[0x245] = auVar33;
          auVar33 = maxps(auVar33,pauVar12[5]);
          *(float *)(pauVar12[0x248] + 8) = fVar34;
          if (*(float *)(puVar17 + -0x1c30) <= fVar34) {
            fVar34 = *(float *)(puVar17 + -0x1c30);
          }
          *(float *)(pauVar12[0x248] + 0xc) = fVar35;
          *(ulong *)(pauVar12[0x247] + 8) = uVar24;
          *(undefined4 *)pauVar12[0x248] = uVar37;
          *(undefined4 *)(pauVar12[0x248] + 4) = uVar38;
          if (uVar24 < uVar13) {
            uVar37 = *(undefined4 *)(puVar17 + -0x1c38);
            uVar38 = *(undefined4 *)(puVar17 + -0x1c34);
            uVar24 = uVar13;
          }
          pauVar12 = pauVar12 + 9;
          fVar35 = fVar36;
        } while (pauVar23 != pauVar12);
      }
    }
    *(long *)param_1[6] = lVar25;
    *(long *)(param_1[6] + 8) = lVar16;
    *(long *)param_1[7] = lVar19;
    *(ulong *)(param_1[7] + 8) = uVar24;
    *param_1 = auVar28;
    param_1[1] = auVar29;
    param_1[2] = auVar30;
    param_1[3] = auVar31;
    param_1[4] = auVar32;
    param_1[5] = auVar33;
    *(undefined4 *)param_1[8] = uVar37;
    *(undefined4 *)(param_1[8] + 4) = uVar38;
  }
  *(undefined8 *)(param_1[8] + 8) = *(undefined8 *)(puVar17 + -0x1dd0);
  if (*(long *)(puVar17 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar17 + -0x1e30) = 0x10a5ce;
    __stack_chk_fail();
  }
  return param_1;
}



/* embree::Scene::BuildProgressMonitorInterface::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::Scene::BuildProgressMonitorInterface::operator()
          (BuildProgressMonitorInterface *this,ulong param_1)

{
  if (-1 < (long)param_1) {
    embree::Scene::progressMonitor((double)(long)param_1);
    return;
  }
  embree::Scene::progressMonitor((double)param_1);
  return;
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
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
                    /* WARNING: Could not recover jumptable at 0x0010a669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long>
   const&)#3}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&) const */

void __thiscall
embree::sse2::
createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)
::{lambda(embree::range<unsigned_long>const&)#3}::operator()
          (_lambda_embree__range<unsigned_long>const___3_ *this,range *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  float *pfVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint uVar21;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auVar29 [16];
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint local_a8 [20];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  uVar15 = _UNK_001105dc;
  uVar14 = _UNK_001105d8;
  uVar13 = _UNK_001105d4;
  uVar12 = __LC26;
  uVar47 = _UNK_001105cc;
  uVar44 = _UNK_001105c8;
  uVar41 = _UNK_001105c4;
  uVar38 = __LC25;
  uVar35 = _UNK_001105bc;
  uVar33 = _UNK_001105b8;
  uVar31 = _UNK_001105b4;
  uVar28 = __LC24;
  uVar46 = _UNK_001105ac;
  uVar43 = _UNK_001105a8;
  uVar40 = _UNK_001105a4;
  uVar37 = __LC23;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  lVar2 = *(long *)(*(long *)(this + 8) + 0x20);
  pfVar3 = *(float **)this;
  fVar6 = *pfVar3;
  fVar7 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar9 = pfVar3[4];
  fVar10 = pfVar3[5];
  fVar11 = pfVar3[6];
  if (*(ulong *)param_1 < *(ulong *)(param_1 + 8)) {
    lVar17 = 0;
    uVar16 = *(ulong *)param_1;
    do {
      uVar20 = uVar16;
      plVar4 = *(long **)(this + 0x10);
      *(int *)(local_28 + lVar17 * 4) = (int)uVar20;
      lVar19 = *plVar4;
      lVar5 = *(long *)(lVar19 + 0x88);
      puVar18 = (uint *)(*(long *)(lVar19 + 0x60) * uVar20 + *(long *)(lVar19 + 0x58));
      lVar19 = *(long *)(lVar19 + 0x90);
      auVar23 = *(undefined1 (*) [16])(lVar5 + (ulong)*puVar18 * lVar19);
      auVar29 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar18[1] * lVar19);
      auVar1 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar18[2] * lVar19);
      auVar22 = maxps(auVar23,auVar29);
      auVar29 = minps(auVar23,auVar29);
      auVar23 = maxps(auVar22,auVar1);
      auVar29 = minps(auVar29,auVar1);
      *(int *)(local_58 + lVar17 * 4) = (int)(((auVar23._0_4_ + auVar29._0_4_) - fVar6) * fVar9);
      *(int *)(local_48 + lVar17 * 4) = (int)(((auVar23._4_4_ + auVar29._4_4_) - fVar7) * fVar10);
      *(int *)(local_38 + lVar17 * 4) = (int)(((auVar23._8_4_ + auVar29._8_4_) - fVar8) * fVar11);
      lVar17 = lVar17 + 1;
      if (lVar17 == 4) {
        lVar17 = 0;
        uVar21 = (local_58._0_4_ << 0x10 | local_58._0_4_) & uVar37;
        uVar24 = (local_58._4_4_ << 0x10 | local_58._4_4_) & uVar40;
        uVar25 = (local_58._8_4_ << 0x10 | local_58._8_4_) & uVar43;
        uVar26 = (local_58._12_4_ << 0x10 | local_58._12_4_) & uVar46;
        uVar21 = (uVar21 | uVar21 << 8) & uVar28;
        uVar24 = (uVar24 | uVar24 << 8) & uVar31;
        uVar25 = (uVar25 | uVar25 << 8) & uVar33;
        uVar26 = (uVar26 | uVar26 << 8) & uVar35;
        uVar21 = (uVar21 | uVar21 << 4) & uVar38;
        uVar24 = (uVar24 | uVar24 << 4) & uVar41;
        uVar25 = (uVar25 | uVar25 << 4) & uVar44;
        uVar26 = (uVar26 | uVar26 << 4) & uVar47;
        uVar27 = (local_48._0_4_ << 0x10 | local_48._0_4_) & uVar37;
        uVar30 = (local_48._4_4_ << 0x10 | local_48._4_4_) & uVar40;
        uVar32 = (local_48._8_4_ << 0x10 | local_48._8_4_) & uVar43;
        uVar34 = (local_48._12_4_ << 0x10 | local_48._12_4_) & uVar46;
        uVar27 = (uVar27 | uVar27 << 8) & uVar28;
        uVar30 = (uVar30 | uVar30 << 8) & uVar31;
        uVar32 = (uVar32 | uVar32 << 8) & uVar33;
        uVar34 = (uVar34 | uVar34 << 8) & uVar35;
        uVar27 = (uVar27 | uVar27 << 4) & uVar38;
        uVar30 = (uVar30 | uVar30 << 4) & uVar41;
        uVar32 = (uVar32 | uVar32 << 4) & uVar44;
        uVar34 = (uVar34 | uVar34 << 4) & uVar47;
        uVar36 = (local_38._0_4_ << 0x10 | local_38._0_4_) & uVar37;
        uVar39 = (local_38._4_4_ << 0x10 | local_38._4_4_) & uVar40;
        uVar42 = (local_38._8_4_ << 0x10 | local_38._8_4_) & uVar43;
        uVar45 = (local_38._12_4_ << 0x10 | local_38._12_4_) & uVar46;
        uVar36 = (uVar36 | uVar36 << 8) & uVar28;
        uVar39 = (uVar39 | uVar39 << 8) & uVar31;
        uVar42 = (uVar42 | uVar42 << 8) & uVar33;
        uVar45 = (uVar45 | uVar45 << 8) & uVar35;
        uVar36 = (uVar36 | uVar36 << 4) & uVar38;
        uVar39 = (uVar39 | uVar39 << 4) & uVar41;
        uVar42 = (uVar42 | uVar42 << 4) & uVar44;
        uVar45 = (uVar45 | uVar45 << 4) & uVar47;
        puVar18 = (uint *)(lVar2 + -8 + uVar20 * 8);
        *puVar18 = (uVar25 | uVar25 << 2) & uVar14 |
                   ((uVar32 | uVar32 << 2) & uVar14) << 1 | ((uVar42 | uVar42 << 2) & uVar14) << 2;
        puVar18[1] = local_28._8_4_;
        puVar18[2] = (uVar26 | uVar26 << 2) & uVar15 |
                     ((uVar34 | uVar34 << 2) & uVar15) << 1 | ((uVar45 | uVar45 << 2) & uVar15) << 2
        ;
        puVar18[3] = local_28._12_4_;
        puVar18 = (uint *)(lVar2 + -0x18 + uVar20 * 8);
        *puVar18 = (uVar21 | uVar21 << 2) & uVar12 |
                   ((uVar27 | uVar27 << 2) & uVar12) << 1 | ((uVar36 | uVar36 << 2) & uVar12) << 2;
        puVar18[1] = local_28._0_4_;
        puVar18[2] = (uVar24 | uVar24 << 2) & uVar13 |
                     ((uVar30 | uVar30 << 2) & uVar13) << 1 | ((uVar39 | uVar39 << 2) & uVar13) << 2
        ;
        puVar18[3] = local_28._4_4_;
      }
      uVar16 = uVar20 + 1;
    } while (uVar20 + 1 < *(ulong *)(param_1 + 8));
    if (lVar17 != 0) {
      lVar19 = 0;
      lVar2 = lVar2 + 8 + (uVar20 - lVar17) * 8;
      uVar37 = (local_58._0_4_ | local_58._0_4_ << 0x10) & __LC23;
      uVar40 = (local_58._4_4_ | local_58._4_4_ << 0x10) & _UNK_001105a4;
      uVar43 = (local_58._8_4_ | local_58._8_4_ << 0x10) & _UNK_001105a8;
      uVar46 = (local_58._12_4_ | local_58._12_4_ << 0x10) & _UNK_001105ac;
      uVar37 = (uVar37 | uVar37 << 8) & __LC24;
      uVar40 = (uVar40 | uVar40 << 8) & _UNK_001105b4;
      uVar43 = (uVar43 | uVar43 << 8) & _UNK_001105b8;
      uVar46 = (uVar46 | uVar46 << 8) & _UNK_001105bc;
      uVar38 = (uVar37 | uVar37 << 4) & __LC25;
      uVar41 = (uVar40 | uVar40 << 4) & _UNK_001105c4;
      uVar44 = (uVar43 | uVar43 << 4) & _UNK_001105c8;
      uVar47 = (uVar46 | uVar46 << 4) & _UNK_001105cc;
      uVar37 = (local_48._0_4_ << 0x10 | local_48._0_4_) & __LC23;
      uVar40 = (local_48._4_4_ << 0x10 | local_48._4_4_) & _UNK_001105a4;
      uVar43 = (local_48._8_4_ << 0x10 | local_48._8_4_) & _UNK_001105a8;
      uVar46 = (local_48._12_4_ << 0x10 | local_48._12_4_) & _UNK_001105ac;
      uVar37 = (uVar37 | uVar37 << 8) & __LC24;
      uVar40 = (uVar40 | uVar40 << 8) & _UNK_001105b4;
      uVar43 = (uVar43 | uVar43 << 8) & _UNK_001105b8;
      uVar46 = (uVar46 | uVar46 << 8) & _UNK_001105bc;
      uVar37 = (uVar37 | uVar37 << 4) & __LC25;
      uVar40 = (uVar40 | uVar40 << 4) & _UNK_001105c4;
      uVar43 = (uVar43 | uVar43 << 4) & _UNK_001105c8;
      uVar46 = (uVar46 | uVar46 << 4) & _UNK_001105cc;
      uVar28 = (local_38._0_4_ << 0x10 | local_38._0_4_) & __LC23;
      uVar31 = (local_38._4_4_ << 0x10 | local_38._4_4_) & _UNK_001105a4;
      uVar33 = (local_38._8_4_ << 0x10 | local_38._8_4_) & _UNK_001105a8;
      uVar35 = (local_38._12_4_ << 0x10 | local_38._12_4_) & _UNK_001105ac;
      uVar28 = (uVar28 | uVar28 << 8) & __LC24;
      uVar31 = (uVar31 | uVar31 << 8) & _UNK_001105b4;
      uVar33 = (uVar33 | uVar33 << 8) & _UNK_001105b8;
      uVar35 = (uVar35 | uVar35 << 8) & _UNK_001105bc;
      uVar28 = (uVar28 | uVar28 << 4) & __LC25;
      uVar31 = (uVar31 | uVar31 << 4) & _UNK_001105c4;
      uVar33 = (uVar33 | uVar33 << 4) & _UNK_001105c8;
      uVar35 = (uVar35 | uVar35 << 4) & _UNK_001105cc;
      local_a8[0] = (uVar38 | uVar38 << 2) & __LC26 |
                    ((uVar37 | uVar37 << 2) & __LC26) << 1 | ((uVar28 | uVar28 << 2) & __LC26) << 2;
      local_a8[1] = (uVar41 | uVar41 << 2) & _UNK_001105d4 |
                    ((uVar40 | uVar40 << 2) & _UNK_001105d4) << 1 |
                    ((uVar31 | uVar31 << 2) & _UNK_001105d4) << 2;
      local_a8[2] = (uVar44 | uVar44 << 2) & _UNK_001105d8 |
                    ((uVar43 | uVar43 << 2) & _UNK_001105d8) << 1 |
                    ((uVar33 | uVar33 << 2) & _UNK_001105d8) << 2;
      local_a8[3] = (uVar47 | uVar47 << 2) & _UNK_001105dc |
                    ((uVar46 | uVar46 << 2) & _UNK_001105dc) << 1 |
                    ((uVar35 | uVar35 << 2) & _UNK_001105dc) << 2;
      do {
        *(undefined4 *)(lVar2 + 4 + lVar19 * 8) = *(undefined4 *)(local_28 + lVar19 * 4);
        *(uint *)(lVar2 + lVar19 * 8) = local_a8[lVar19];
        lVar19 = lVar19 + 1;
      } while (lVar17 != lVar19);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&, unsigned
   long)#4}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&, unsigned long) const */

long embree::sse2::
     createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)
     ::{lambda(embree::range<unsigned_long>const&,unsigned_long)#4}::operator()
               (range *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  uint *puVar16;
  float *pfVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar34;
  uint uVar43;
  uint uVar44;
  undefined1 auVar35 [16];
  uint uVar45;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint local_d8 [20];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  fVar15 = _LC7;
  fVar14 = _LC5;
  uVar21 = *(ulong *)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x20) + uVar21 * 8;
  pfVar17 = *(float **)param_1;
  fVar4 = *pfVar17;
  fVar5 = pfVar17[1];
  fVar6 = pfVar17[2];
  fVar7 = pfVar17[4];
  fVar8 = pfVar17[5];
  fVar9 = pfVar17[6];
  if (uVar21 < *(ulong *)(param_2 + 8)) {
    auVar10._4_4_ = _UNK_001105a4;
    auVar10._0_4_ = __LC23;
    auVar10._8_4_ = _UNK_001105a8;
    auVar10._12_4_ = _UNK_001105ac;
    lVar24 = 0;
    lVar22 = 0;
    auVar11._4_4_ = _UNK_001105b4;
    auVar11._0_4_ = __LC24;
    auVar11._8_4_ = _UNK_001105b8;
    auVar11._12_4_ = _UNK_001105bc;
    auVar12._4_4_ = _UNK_001105c4;
    auVar12._0_4_ = __LC25;
    auVar12._8_4_ = _UNK_001105c8;
    auVar12._12_4_ = _UNK_001105cc;
    auVar13._4_4_ = _UNK_001105d4;
    auVar13._0_4_ = __LC26;
    auVar13._8_4_ = _UNK_001105d8;
    auVar13._12_4_ = _UNK_001105dc;
    do {
      while( true ) {
        lVar18 = **(long **)(param_1 + 0x10);
        plVar20 = *(long **)(lVar18 + 0xd0);
        puVar16 = (uint *)(*(long *)(lVar18 + 0x60) * uVar21 + *(long *)(lVar18 + 0x58));
        uVar27 = plVar20[2];
        uVar23 = (ulong)*puVar16;
        if (((uVar23 < uVar27) && (uVar25 = (ulong)puVar16[1], uVar25 < uVar27)) &&
           (uVar26 = (ulong)puVar16[2], uVar26 < uVar27)) break;
LAB_0010ac7e:
        uVar21 = uVar21 + 1;
        if (*(ulong *)(param_2 + 8) <= uVar21) goto LAB_0010ac8c;
      }
      if (*(uint *)(lVar18 + 0x24) != 0) {
        uVar27 = 0;
        do {
          lVar2 = plVar20[1];
          lVar3 = *plVar20;
          pfVar17 = (float *)(lVar3 + uVar23 * lVar2);
          auVar29 = *(undefined1 (*) [16])(lVar3 + uVar25 * lVar2);
          auVar35._0_4_ = -(uint)(fVar15 < *pfVar17 && *pfVar17 < fVar14);
          auVar35._4_4_ = -(uint)(fVar15 < pfVar17[1] && pfVar17[1] < fVar14);
          auVar35._8_4_ = -(uint)(fVar15 < pfVar17[2] && pfVar17[2] < fVar14);
          auVar35._12_4_ = -(uint)(fVar15 < pfVar17[3] && pfVar17[3] < fVar14);
          pfVar17 = (float *)(lVar2 * uVar26 + lVar3);
          uVar19 = movmskps((int)lVar3,auVar35);
          if ((((~uVar19 & 7) != 0) ||
              (auVar56._0_4_ = -(uint)(fVar15 < auVar29._0_4_ && auVar29._0_4_ < fVar14),
              auVar56._4_4_ = -(uint)(fVar15 < auVar29._4_4_ && auVar29._4_4_ < fVar14),
              auVar56._8_4_ = -(uint)(fVar15 < auVar29._8_4_ && auVar29._8_4_ < fVar14),
              auVar56._12_4_ = -(uint)(fVar15 < auVar29._12_4_ && auVar29._12_4_ < fVar14),
              uVar19 = movmskps(0,auVar56), (~uVar19 & 7) != 0)) ||
             (auVar29._0_4_ = -(uint)(fVar15 < *pfVar17 && *pfVar17 < fVar14),
             auVar29._4_4_ = -(uint)(fVar15 < pfVar17[1] && pfVar17[1] < fVar14),
             auVar29._8_4_ = -(uint)(fVar15 < pfVar17[2] && pfVar17[2] < fVar14),
             auVar29._12_4_ = -(uint)(fVar15 < pfVar17[3] && pfVar17[3] < fVar14),
             uVar19 = movmskps((int)pfVar17,auVar29), (~uVar19 & 7) != 0)) goto LAB_0010ac7e;
          uVar27 = uVar27 + 1;
          plVar20 = plVar20 + 6;
        } while (*(uint *)(lVar18 + 0x24) != uVar27);
      }
      lVar2 = *(long *)(lVar18 + 0x90);
      lVar18 = *(long *)(lVar18 + 0x88);
      *(int *)(local_58 + lVar24 * 4) = (int)uVar21;
      lVar22 = lVar22 + 1;
      auVar29 = *(undefined1 (*) [16])(lVar18 + uVar23 * lVar2);
      auVar35 = *(undefined1 (*) [16])(lVar18 + uVar25 * lVar2);
      auVar56 = *(undefined1 (*) [16])(lVar18 + uVar26 * lVar2);
      auVar28 = maxps(auVar29,auVar35);
      auVar35 = minps(auVar29,auVar35);
      auVar29 = maxps(auVar28,auVar56);
      auVar35 = minps(auVar35,auVar56);
      *(int *)(local_88 + lVar24 * 4) = (int)(((auVar29._0_4_ + auVar35._0_4_) - fVar4) * fVar7);
      *(int *)(local_78 + lVar24 * 4) = (int)(((auVar29._4_4_ + auVar35._4_4_) - fVar5) * fVar8);
      *(int *)(local_68 + lVar24 * 4) = (int)(((auVar29._8_4_ + auVar35._8_4_) - fVar6) * fVar9);
      lVar24 = lVar24 + 1;
      if (lVar24 != 4) goto LAB_0010ac7e;
      lVar24 = 0;
      uVar21 = uVar21 + 1;
      auVar28._0_4_ = local_88._0_4_ << 0x10;
      auVar28._4_4_ = local_88._4_4_ << 0x10;
      auVar28._8_4_ = local_88._8_4_ << 0x10;
      auVar28._12_4_ = local_88._12_4_ << 0x10;
      auVar29 = (auVar28 | local_88) & auVar10;
      auVar36._0_4_ = auVar29._0_4_ << 8;
      auVar36._4_4_ = auVar29._4_4_ << 8;
      auVar36._8_4_ = auVar29._8_4_ << 8;
      auVar36._12_4_ = auVar29._12_4_ << 8;
      auVar29 = (auVar29 | auVar36) & auVar11;
      auVar37._0_4_ = auVar29._0_4_ << 4;
      auVar37._4_4_ = auVar29._4_4_ << 4;
      auVar37._8_4_ = auVar29._8_4_ << 4;
      auVar37._12_4_ = auVar29._12_4_ << 4;
      auVar29 = (auVar29 | auVar37) & auVar12;
      auVar38._0_4_ = local_78._0_4_ << 0x10;
      auVar38._4_4_ = local_78._4_4_ << 0x10;
      auVar38._8_4_ = local_78._8_4_ << 0x10;
      auVar38._12_4_ = local_78._12_4_ << 0x10;
      auVar58._0_4_ = auVar29._0_4_ << 2;
      auVar58._4_4_ = auVar29._4_4_ << 2;
      auVar58._8_4_ = auVar29._8_4_ << 2;
      auVar58._12_4_ = auVar29._12_4_ << 2;
      auVar35 = (auVar38 | local_78) & auVar10;
      auVar53._0_4_ = auVar35._0_4_ << 8;
      auVar53._4_4_ = auVar35._4_4_ << 8;
      auVar53._8_4_ = auVar35._8_4_ << 8;
      auVar53._12_4_ = auVar35._12_4_ << 8;
      auVar35 = (auVar35 | auVar53) & auVar11;
      auVar54._0_4_ = auVar35._0_4_ << 4;
      auVar54._4_4_ = auVar35._4_4_ << 4;
      auVar54._8_4_ = auVar35._8_4_ << 4;
      auVar54._12_4_ = auVar35._12_4_ << 4;
      auVar35 = (auVar35 | auVar54) & auVar12;
      auVar55._0_4_ = local_68._0_4_ << 0x10;
      auVar55._4_4_ = local_68._4_4_ << 0x10;
      auVar55._8_4_ = local_68._8_4_ << 0x10;
      auVar55._12_4_ = local_68._12_4_ << 0x10;
      auVar59._0_4_ = auVar35._0_4_ << 2;
      auVar59._4_4_ = auVar35._4_4_ << 2;
      auVar59._8_4_ = auVar35._8_4_ << 2;
      auVar59._12_4_ = auVar35._12_4_ << 2;
      auVar56 = (auVar55 | local_68) & auVar10;
      auVar35 = (auVar35 | auVar59) & auVar13;
      auVar60._0_4_ = auVar56._0_4_ << 8;
      auVar60._4_4_ = auVar56._4_4_ << 8;
      auVar60._8_4_ = auVar56._8_4_ << 8;
      auVar60._12_4_ = auVar56._12_4_ << 8;
      auVar39._0_4_ = auVar35._0_4_ << 1;
      auVar39._4_4_ = auVar35._4_4_ << 1;
      auVar39._8_4_ = auVar35._8_4_ << 1;
      auVar39._12_4_ = auVar35._12_4_ << 1;
      auVar35 = (auVar56 | auVar60) & auVar11;
      auVar61._0_4_ = auVar35._0_4_ << 4;
      auVar61._4_4_ = auVar35._4_4_ << 4;
      auVar61._8_4_ = auVar35._8_4_ << 4;
      auVar61._12_4_ = auVar35._12_4_ << 4;
      auVar35 = (auVar35 | auVar61) & auVar12;
      auVar62._0_4_ = auVar35._0_4_ << 2;
      auVar62._4_4_ = auVar35._4_4_ << 2;
      auVar62._8_4_ = auVar35._8_4_ << 2;
      auVar62._12_4_ = auVar35._12_4_ << 2;
      auVar35 = (auVar35 | auVar62) & auVar13;
      auVar57._0_4_ = auVar35._0_4_ << 2;
      auVar57._4_4_ = auVar35._4_4_ << 2;
      auVar57._8_4_ = auVar35._8_4_ << 2;
      auVar57._12_4_ = auVar35._12_4_ << 2;
      auVar29 = (auVar29 | auVar58) & auVar13 | auVar39 | auVar57;
      auVar41._0_8_ = auVar29._0_8_;
      auVar32._12_4_ = auVar29._12_4_;
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = auVar29._8_4_;
      auVar32._0_8_ = auVar30._0_8_;
      auVar32._8_4_ = auVar32._12_4_;
      auVar31._8_8_ = auVar32._8_8_;
      auVar31._4_4_ = local_58._8_4_;
      auVar31._0_4_ = auVar29._8_4_;
      auVar33._0_12_ = auVar31._0_12_;
      auVar33._12_4_ = local_58._12_4_;
      auVar41._8_4_ = auVar29._4_4_;
      auVar41._12_4_ = auVar32._12_4_;
      auVar40._8_8_ = auVar41._8_8_;
      auVar40._0_4_ = auVar29._0_4_;
      auVar40._4_4_ = local_58._0_4_;
      auVar42._0_12_ = auVar40._0_12_;
      auVar42._12_4_ = local_58._4_4_;
      *(undefined1 (*) [16])(lVar1 + -0x10 + lVar22 * 8) = auVar33;
      *(undefined1 (*) [16])(lVar1 + -0x20 + lVar22 * 8) = auVar42;
    } while (uVar21 < *(ulong *)(param_2 + 8));
LAB_0010ac8c:
    if (lVar24 != 0) {
      lVar1 = lVar1 + (lVar22 - lVar24) * 8;
      lVar18 = 0;
      uVar19 = (local_88._0_4_ | local_88._0_4_ << 0x10) & __LC23;
      uVar47 = (local_88._4_4_ | local_88._4_4_ << 0x10) & _UNK_001105a4;
      uVar49 = (local_88._8_4_ | local_88._8_4_ << 0x10) & _UNK_001105a8;
      uVar51 = (local_88._12_4_ | local_88._12_4_ << 0x10) & _UNK_001105ac;
      uVar19 = (uVar19 | uVar19 << 8) & __LC24;
      uVar47 = (uVar47 | uVar47 << 8) & _UNK_001105b4;
      uVar49 = (uVar49 | uVar49 << 8) & _UNK_001105b8;
      uVar51 = (uVar51 | uVar51 << 8) & _UNK_001105bc;
      uVar46 = (uVar19 | uVar19 << 4) & __LC25;
      uVar48 = (uVar47 | uVar47 << 4) & _UNK_001105c4;
      uVar50 = (uVar49 | uVar49 << 4) & _UNK_001105c8;
      uVar52 = (uVar51 | uVar51 << 4) & _UNK_001105cc;
      uVar19 = (local_78._0_4_ << 0x10 | local_78._0_4_) & __LC23;
      uVar47 = (local_78._4_4_ << 0x10 | local_78._4_4_) & _UNK_001105a4;
      uVar49 = (local_78._8_4_ << 0x10 | local_78._8_4_) & _UNK_001105a8;
      uVar51 = (local_78._12_4_ << 0x10 | local_78._12_4_) & _UNK_001105ac;
      uVar19 = (uVar19 | uVar19 << 8) & __LC24;
      uVar47 = (uVar47 | uVar47 << 8) & _UNK_001105b4;
      uVar49 = (uVar49 | uVar49 << 8) & _UNK_001105b8;
      uVar51 = (uVar51 | uVar51 << 8) & _UNK_001105bc;
      uVar19 = (uVar19 | uVar19 << 4) & __LC25;
      uVar47 = (uVar47 | uVar47 << 4) & _UNK_001105c4;
      uVar49 = (uVar49 | uVar49 << 4) & _UNK_001105c8;
      uVar51 = (uVar51 | uVar51 << 4) & _UNK_001105cc;
      uVar34 = (local_68._0_4_ << 0x10 | local_68._0_4_) & __LC23;
      uVar43 = (local_68._4_4_ << 0x10 | local_68._4_4_) & _UNK_001105a4;
      uVar44 = (local_68._8_4_ << 0x10 | local_68._8_4_) & _UNK_001105a8;
      uVar45 = (local_68._12_4_ << 0x10 | local_68._12_4_) & _UNK_001105ac;
      uVar34 = (uVar34 | uVar34 << 8) & __LC24;
      uVar43 = (uVar43 | uVar43 << 8) & _UNK_001105b4;
      uVar44 = (uVar44 | uVar44 << 8) & _UNK_001105b8;
      uVar45 = (uVar45 | uVar45 << 8) & _UNK_001105bc;
      uVar34 = (uVar34 | uVar34 << 4) & __LC25;
      uVar43 = (uVar43 | uVar43 << 4) & _UNK_001105c4;
      uVar44 = (uVar44 | uVar44 << 4) & _UNK_001105c8;
      uVar45 = (uVar45 | uVar45 << 4) & _UNK_001105cc;
      local_d8[0] = (uVar46 | uVar46 << 2) & __LC26 |
                    ((uVar19 | uVar19 << 2) & __LC26) << 1 | ((uVar34 | uVar34 << 2) & __LC26) << 2;
      local_d8[1] = (uVar48 | uVar48 << 2) & _UNK_001105d4 |
                    ((uVar47 | uVar47 << 2) & _UNK_001105d4) << 1 |
                    ((uVar43 | uVar43 << 2) & _UNK_001105d4) << 2;
      local_d8[2] = (uVar50 | uVar50 << 2) & _UNK_001105d8 |
                    ((uVar49 | uVar49 << 2) & _UNK_001105d8) << 1 |
                    ((uVar44 | uVar44 << 2) & _UNK_001105d8) << 2;
      local_d8[3] = (uVar52 | uVar52 << 2) & _UNK_001105dc |
                    ((uVar51 | uVar51 << 2) & _UNK_001105dc) << 1 |
                    ((uVar45 | uVar45 << 2) & _UNK_001105dc) << 2;
      do {
        *(undefined4 *)(lVar1 + 4 + lVar18 * 8) = *(undefined4 *)(local_58 + lVar18 * 4);
        *(uint *)(lVar1 + lVar18 * 8) = local_d8[lVar18];
        lVar18 = lVar18 + 1;
      } while (lVar24 != lVar18);
    }
  }
  else {
    lVar22 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar22;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&, unsigned
   long)#5}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&, unsigned long) const */

long __thiscall
embree::sse2::
createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)
::{lambda(embree::range<unsigned_long>const&,unsigned_long)#5}::operator()
          (_lambda_embree__range<unsigned_long>const__unsigned_long__5_ *this,range *param_1,
          ulong param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  uint *puVar14;
  float *pfVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long in_FS_OFFSET;
  uint uVar26;
  uint uVar34;
  uint uVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint local_d8 [20];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  fVar13 = _LC7;
  fVar12 = _LC5;
  uVar22 = *(ulong *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar1 = *(long *)(*(long *)(this + 8) + 0x20) + param_2 * 8;
  pfVar2 = *(float **)this;
  fVar5 = *pfVar2;
  fVar6 = pfVar2[1];
  fVar7 = pfVar2[2];
  fVar8 = pfVar2[4];
  fVar9 = pfVar2[5];
  fVar10 = pfVar2[6];
  if (uVar22 < *(ulong *)(param_1 + 8)) {
    lVar24 = 0;
    lVar25 = 0;
    do {
      while( true ) {
        lVar16 = **(long **)(this + 0x10);
        plVar18 = *(long **)(lVar16 + 0xd0);
        puVar14 = (uint *)(*(long *)(lVar16 + 0x60) * uVar22 + *(long *)(lVar16 + 0x58));
        uVar19 = plVar18[2];
        uVar20 = (ulong)*puVar14;
        if (((uVar20 < uVar19) && (uVar21 = (ulong)puVar14[1], uVar21 < uVar19)) &&
           (uVar23 = (ulong)puVar14[2], uVar23 < uVar19)) break;
LAB_0010b170:
        uVar22 = uVar22 + 1;
        if (*(ulong *)(param_1 + 8) <= uVar22) goto LAB_0010b17f;
      }
      if (*(uint *)(lVar16 + 0x24) != 0) {
        uVar19 = 0;
        do {
          lVar3 = plVar18[1];
          lVar4 = *plVar18;
          pfVar2 = (float *)(lVar4 + uVar20 * lVar3);
          auVar28 = *(undefined1 (*) [16])(lVar4 + uVar21 * lVar3);
          pfVar15 = (float *)(lVar3 * uVar23 + lVar4);
          auVar44._0_4_ = -(uint)(fVar13 < *pfVar2 && *pfVar2 < fVar12);
          auVar44._4_4_ = -(uint)(fVar13 < pfVar2[1] && pfVar2[1] < fVar12);
          auVar44._8_4_ = -(uint)(fVar13 < pfVar2[2] && pfVar2[2] < fVar12);
          auVar44._12_4_ = -(uint)(fVar13 < pfVar2[3] && pfVar2[3] < fVar12);
          uVar17 = movmskps((int)lVar4,auVar44);
          if ((((~uVar17 & 7) != 0) ||
              (auVar57._0_4_ = -(uint)(fVar13 < auVar28._0_4_ && auVar28._0_4_ < fVar12),
              auVar57._4_4_ = -(uint)(fVar13 < auVar28._4_4_ && auVar28._4_4_ < fVar12),
              auVar57._8_4_ = -(uint)(fVar13 < auVar28._8_4_ && auVar28._8_4_ < fVar12),
              auVar57._12_4_ = -(uint)(fVar13 < auVar28._12_4_ && auVar28._12_4_ < fVar12),
              uVar17 = movmskps(0,auVar57), (~uVar17 & 7) != 0)) ||
             (auVar28._0_4_ = -(uint)(fVar13 < *pfVar15 && *pfVar15 < fVar12),
             auVar28._4_4_ = -(uint)(fVar13 < pfVar15[1] && pfVar15[1] < fVar12),
             auVar28._8_4_ = -(uint)(fVar13 < pfVar15[2] && pfVar15[2] < fVar12),
             auVar28._12_4_ = -(uint)(fVar13 < pfVar15[3] && pfVar15[3] < fVar12),
             uVar17 = movmskps((int)pfVar15,auVar28), (~uVar17 & 7) != 0)) goto LAB_0010b170;
          uVar19 = uVar19 + 1;
          plVar18 = plVar18 + 6;
        } while (*(uint *)(lVar16 + 0x24) != uVar19);
      }
      lVar3 = *(long *)(lVar16 + 0x90);
      lVar16 = *(long *)(lVar16 + 0x88);
      *(int *)(local_58 + lVar24 * 4) = (int)uVar22;
      lVar25 = lVar25 + 1;
      auVar28 = *(undefined1 (*) [16])(lVar16 + uVar20 * lVar3);
      auVar44 = *(undefined1 (*) [16])(lVar16 + uVar21 * lVar3);
      auVar57 = *(undefined1 (*) [16])(lVar16 + uVar23 * lVar3);
      auVar27 = maxps(auVar28,auVar44);
      auVar44 = minps(auVar28,auVar44);
      auVar28 = maxps(auVar27,auVar57);
      auVar44 = minps(auVar44,auVar57);
      *(int *)(local_88 + lVar24 * 4) = (int)(((auVar28._0_4_ + auVar44._0_4_) - fVar5) * fVar8);
      *(int *)(local_78 + lVar24 * 4) = (int)(((auVar28._4_4_ + auVar44._4_4_) - fVar6) * fVar9);
      *(int *)(local_68 + lVar24 * 4) = (int)(((auVar28._8_4_ + auVar44._8_4_) - fVar7) * fVar10);
      lVar24 = lVar24 + 1;
      if (lVar24 != 4) goto LAB_0010b170;
      lVar24 = 0;
      uVar22 = uVar22 + 1;
      auVar27._4_4_ = _UNK_001105a4;
      auVar27._0_4_ = __LC23;
      auVar27._8_4_ = _UNK_001105a8;
      auVar27._12_4_ = _UNK_001105ac;
      auVar55._4_4_ = _UNK_001105b4;
      auVar55._0_4_ = __LC24;
      auVar55._8_4_ = _UNK_001105b8;
      auVar55._12_4_ = _UNK_001105bc;
      auVar56._4_4_ = _UNK_001105c4;
      auVar56._0_4_ = __LC25;
      auVar56._8_4_ = _UNK_001105c8;
      auVar56._12_4_ = _UNK_001105cc;
      auVar29._0_4_ = local_88._0_4_ << 0x10;
      auVar29._4_4_ = local_88._4_4_ << 0x10;
      auVar29._8_4_ = local_88._8_4_ << 0x10;
      auVar29._12_4_ = local_88._12_4_ << 0x10;
      auVar28 = (auVar29 | local_88) & auVar27;
      auVar45._0_4_ = auVar28._0_4_ << 8;
      auVar45._4_4_ = auVar28._4_4_ << 8;
      auVar45._8_4_ = auVar28._8_4_ << 8;
      auVar45._12_4_ = auVar28._12_4_ << 8;
      auVar28 = (auVar28 | auVar45) & auVar55;
      auVar46._0_4_ = auVar28._0_4_ << 4;
      auVar46._4_4_ = auVar28._4_4_ << 4;
      auVar46._8_4_ = auVar28._8_4_ << 4;
      auVar46._12_4_ = auVar28._12_4_ << 4;
      auVar28 = (auVar28 | auVar46) & auVar56;
      auVar47._0_4_ = local_78._0_4_ << 0x10;
      auVar47._4_4_ = local_78._4_4_ << 0x10;
      auVar47._8_4_ = local_78._8_4_ << 0x10;
      auVar47._12_4_ = local_78._12_4_ << 0x10;
      auVar59._0_4_ = auVar28._0_4_ << 2;
      auVar59._4_4_ = auVar28._4_4_ << 2;
      auVar59._8_4_ = auVar28._8_4_ << 2;
      auVar59._12_4_ = auVar28._12_4_ << 2;
      auVar44 = (auVar47 | local_78) & auVar27;
      auVar52._0_4_ = auVar44._0_4_ << 8;
      auVar52._4_4_ = auVar44._4_4_ << 8;
      auVar52._8_4_ = auVar44._8_4_ << 8;
      auVar52._12_4_ = auVar44._12_4_ << 8;
      auVar44 = (auVar44 | auVar52) & auVar55;
      auVar53._0_4_ = auVar44._0_4_ << 4;
      auVar53._4_4_ = auVar44._4_4_ << 4;
      auVar53._8_4_ = auVar44._8_4_ << 4;
      auVar53._12_4_ = auVar44._12_4_ << 4;
      auVar44 = (auVar44 | auVar53) & auVar56;
      auVar54._0_4_ = local_68._0_4_ << 0x10;
      auVar54._4_4_ = local_68._4_4_ << 0x10;
      auVar54._8_4_ = local_68._8_4_ << 0x10;
      auVar54._12_4_ = local_68._12_4_ << 0x10;
      auVar60._0_4_ = auVar44._0_4_ << 2;
      auVar60._4_4_ = auVar44._4_4_ << 2;
      auVar60._8_4_ = auVar44._8_4_ << 2;
      auVar60._12_4_ = auVar44._12_4_ << 2;
      auVar27 = (auVar54 | local_68) & auVar27;
      auVar63._0_4_ = auVar27._0_4_ << 8;
      auVar63._4_4_ = auVar27._4_4_ << 8;
      auVar63._8_4_ = auVar27._8_4_ << 8;
      auVar63._12_4_ = auVar27._12_4_ << 8;
      auVar55 = (auVar27 | auVar63) & auVar55;
      auVar62._0_4_ = auVar55._0_4_ << 4;
      auVar62._4_4_ = auVar55._4_4_ << 4;
      auVar62._8_4_ = auVar55._8_4_ << 4;
      auVar62._12_4_ = auVar55._12_4_ << 4;
      auVar56 = (auVar55 | auVar62) & auVar56;
      auVar61._0_4_ = auVar56._0_4_ << 2;
      auVar61._4_4_ = auVar56._4_4_ << 2;
      auVar61._8_4_ = auVar56._8_4_ << 2;
      auVar61._12_4_ = auVar56._12_4_ << 2;
      auVar11._4_4_ = _UNK_001105d4;
      auVar11._0_4_ = __LC26;
      auVar11._8_4_ = _UNK_001105d8;
      auVar11._12_4_ = _UNK_001105dc;
      auVar57 = (auVar56 | auVar61) & auVar11;
      auVar44 = (auVar44 | auVar60) & auVar11;
      auVar58._0_4_ = auVar57._0_4_ << 2;
      auVar58._4_4_ = auVar57._4_4_ << 2;
      auVar58._8_4_ = auVar57._8_4_ << 2;
      auVar58._12_4_ = auVar57._12_4_ << 2;
      auVar48._0_4_ = auVar44._0_4_ << 1;
      auVar48._4_4_ = auVar44._4_4_ << 1;
      auVar48._8_4_ = auVar44._8_4_ << 1;
      auVar48._12_4_ = auVar44._12_4_ << 1;
      auVar28 = (auVar28 | auVar59) & auVar11 | auVar48 | auVar58;
      auVar50._0_8_ = auVar28._0_8_;
      auVar32._12_4_ = auVar28._12_4_;
      auVar30._4_12_ = auVar28._4_12_;
      auVar30._0_4_ = auVar28._8_4_;
      auVar32._0_8_ = auVar30._0_8_;
      auVar32._8_4_ = auVar32._12_4_;
      auVar31._8_8_ = auVar32._8_8_;
      auVar31._4_4_ = local_58._8_4_;
      auVar31._0_4_ = auVar28._8_4_;
      auVar33._0_12_ = auVar31._0_12_;
      auVar33._12_4_ = local_58._12_4_;
      auVar50._8_4_ = auVar28._4_4_;
      auVar50._12_4_ = auVar32._12_4_;
      auVar49._8_8_ = auVar50._8_8_;
      auVar49._0_4_ = auVar28._0_4_;
      auVar49._4_4_ = local_58._0_4_;
      auVar51._0_12_ = auVar49._0_12_;
      auVar51._12_4_ = local_58._4_4_;
      *(undefined1 (*) [16])(lVar1 + -0x10 + lVar25 * 8) = auVar33;
      *(undefined1 (*) [16])(lVar1 + -0x20 + lVar25 * 8) = auVar51;
    } while (uVar22 < *(ulong *)(param_1 + 8));
LAB_0010b17f:
    if (lVar24 != 0) {
      lVar1 = lVar1 + (lVar25 - lVar24) * 8;
      lVar16 = 0;
      uVar17 = (local_88._0_4_ | local_88._0_4_ << 0x10) & __LC23;
      uVar38 = (local_88._4_4_ | local_88._4_4_ << 0x10) & _UNK_001105a4;
      uVar40 = (local_88._8_4_ | local_88._8_4_ << 0x10) & _UNK_001105a8;
      uVar42 = (local_88._12_4_ | local_88._12_4_ << 0x10) & _UNK_001105ac;
      uVar17 = (uVar17 | uVar17 << 8) & __LC24;
      uVar38 = (uVar38 | uVar38 << 8) & _UNK_001105b4;
      uVar40 = (uVar40 | uVar40 << 8) & _UNK_001105b8;
      uVar42 = (uVar42 | uVar42 << 8) & _UNK_001105bc;
      uVar37 = (uVar17 | uVar17 << 4) & __LC25;
      uVar39 = (uVar38 | uVar38 << 4) & _UNK_001105c4;
      uVar41 = (uVar40 | uVar40 << 4) & _UNK_001105c8;
      uVar43 = (uVar42 | uVar42 << 4) & _UNK_001105cc;
      uVar17 = (local_78._0_4_ << 0x10 | local_78._0_4_) & __LC23;
      uVar38 = (local_78._4_4_ << 0x10 | local_78._4_4_) & _UNK_001105a4;
      uVar40 = (local_78._8_4_ << 0x10 | local_78._8_4_) & _UNK_001105a8;
      uVar42 = (local_78._12_4_ << 0x10 | local_78._12_4_) & _UNK_001105ac;
      uVar17 = (uVar17 | uVar17 << 8) & __LC24;
      uVar38 = (uVar38 | uVar38 << 8) & _UNK_001105b4;
      uVar40 = (uVar40 | uVar40 << 8) & _UNK_001105b8;
      uVar42 = (uVar42 | uVar42 << 8) & _UNK_001105bc;
      uVar17 = (uVar17 | uVar17 << 4) & __LC25;
      uVar38 = (uVar38 | uVar38 << 4) & _UNK_001105c4;
      uVar40 = (uVar40 | uVar40 << 4) & _UNK_001105c8;
      uVar42 = (uVar42 | uVar42 << 4) & _UNK_001105cc;
      uVar26 = (local_68._0_4_ << 0x10 | local_68._0_4_) & __LC23;
      uVar34 = (local_68._4_4_ << 0x10 | local_68._4_4_) & _UNK_001105a4;
      uVar35 = (local_68._8_4_ << 0x10 | local_68._8_4_) & _UNK_001105a8;
      uVar36 = (local_68._12_4_ << 0x10 | local_68._12_4_) & _UNK_001105ac;
      uVar26 = (uVar26 | uVar26 << 8) & __LC24;
      uVar34 = (uVar34 | uVar34 << 8) & _UNK_001105b4;
      uVar35 = (uVar35 | uVar35 << 8) & _UNK_001105b8;
      uVar36 = (uVar36 | uVar36 << 8) & _UNK_001105bc;
      uVar26 = (uVar26 | uVar26 << 4) & __LC25;
      uVar34 = (uVar34 | uVar34 << 4) & _UNK_001105c4;
      uVar35 = (uVar35 | uVar35 << 4) & _UNK_001105c8;
      uVar36 = (uVar36 | uVar36 << 4) & _UNK_001105cc;
      local_d8[0] = (uVar37 | uVar37 << 2) & __LC26 |
                    ((uVar17 | uVar17 << 2) & __LC26) << 1 | ((uVar26 | uVar26 << 2) & __LC26) << 2;
      local_d8[1] = (uVar39 | uVar39 << 2) & _UNK_001105d4 |
                    ((uVar38 | uVar38 << 2) & _UNK_001105d4) << 1 |
                    ((uVar34 | uVar34 << 2) & _UNK_001105d4) << 2;
      local_d8[2] = (uVar41 | uVar41 << 2) & _UNK_001105d8 |
                    ((uVar40 | uVar40 << 2) & _UNK_001105d8) << 1 |
                    ((uVar35 | uVar35 << 2) & _UNK_001105d8) << 2;
      local_d8[3] = (uVar43 | uVar43 << 2) & _UNK_001105dc |
                    ((uVar42 | uVar42 << 2) & _UNK_001105dc) << 1 |
                    ((uVar36 | uVar36 << 2) & _UNK_001105dc) << 2;
      do {
        *(undefined4 *)(lVar1 + 4 + lVar16 * 8) = *(undefined4 *)(local_58 + lVar16 * 4);
        *(uint *)(lVar1 + lVar16 * 8) = local_d8[lVar16];
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar24);
    }
  }
  else {
    lVar25 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar25;
}



/* WARNING: Removing unreachable block (ram,0x0010b855) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3}>(unsigned long,
   unsigned long, unsigned long,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3}>(unsigned long,
   unsigned long, unsigned long,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  long lVar19;
  Thread *pTVar20;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar17 = lVar16;
  pTVar20 = pTVar17 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar18 = pTVar18 + 0x40;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar4 = pTVar17 + uVar3 + 0x40080;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00110528;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      *(undefined8 *)(pTVar4 + 0x38) = uVar6;
      *(undefined8 *)(pTVar4 + 0x28) = uVar13;
      *(undefined8 *)(pTVar4 + 0x30) = uVar14;
      lVar19 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar19 + 0x50) = pTVar4;
      *(long *)(pTVar17 + lVar19 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar17 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar19 + 0x68) = lVar5;
      *(ulong *)(pTVar17 + lVar19 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar17);
      } while (cVar15 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar18);
      pTVar20 = *(Thread **)param_2;
      if (pTVar20 != (Thread *)0x0) {
        local_48 = pTVar20;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar20 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar20 == (Thread *)0x0) {
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar17 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar20;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3}>(unsigned long,
   unsigned long, unsigned long,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3} const&,
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___3_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  uStack_40 = *(undefined8 *)param_4;
  uStack_38 = *(undefined8 *)(param_4 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)(param_4 + 0x10);
  local_58 = param_2;
  uStack_50 = param_1;
  local_48 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_58,param_5,param_2 - param_1,true);
LAB_0010bb07:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_00110528;
      puVar3[1] = local_58;
      puVar3[2] = uStack_50;
      puVar3[7] = local_28;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = uStack_38;
      puVar3[6] = uStack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_0010bb07;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3}>(unsigned long,
   unsigned long, unsigned long,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#3} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned_long>const&)#3}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned_long>const&)#3}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(this + 8);
  uVar2 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < lVar1 - uVar2) {
    uVar3 = lVar1 + uVar2 >> 1;
    spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_>
              (uVar2,uVar3,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___3_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_>
              (uVar3,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___3_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    local_38 = uVar2;
    local_30 = lVar1;
    sse2::
    createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)
    ::{lambda(embree::range<unsigned_long>const&)#3}::operator()
              ((_lambda_embree__range<unsigned_long>const___3_ *)(this + 0x20),(range *)&local_38);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::pair<unsigned long, embree::BBox<embree::Vec3fa> > embree::parallel_reduce_internal<unsigned
   long, std::pair<unsigned long, embree::BBox<embree::Vec3fa> >,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#1},
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(std::pair<unsigned long, embree::BBox<embree::Vec3fa> >
   const&, std::pair<unsigned long, embree::BBox<embree::Vec3fa> > const&)#2}>(unsigned long,
   unsigned long, unsigned long, unsigned long, std::pair<unsigned long,
   embree::BBox<embree::Vec3fa> > const&,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&)::{lambda(std::pair<unsigned long, embree::BBox<embree::Vec3fa> >
   const&, std::pair<unsigned long, embree::BBox<embree::Vec3fa> > const&)#2} const&) */

ulong embree::
      parallel_reduce_internal<unsigned_long,std::pair<unsigned_long,embree::BBox<embree::Vec3fa>>,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(std::pair<unsigned_long,embree::BBox<embree::Vec3fa>>const&,std::pair<unsigned_long,embree::BBox<embree::Vec3fa>>const&)_2_>
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,pair_conflict *param_5,
                _lambda_embree__range<unsigned_long>_const___1_ *param_6,
                _lambda_std__pair<unsigned_long,embree::BBox<embree::Vec3fa>_>_const__std__pair<unsigned_long,embree::BBox<embree::Vec3fa>_>_const___2_
                *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong local_20d8;
  ulong local_20d0;
  ulong local_20c8;
  undefined8 **local_20c0;
  ulong **local_20b8;
  ulong *local_20b0;
  ulong *local_20a8;
  ulong *local_20a0;
  long ***local_2098;
  _lambda_std__pair<unsigned_long,embree::BBox<embree::Vec3fa>_>_const__std__pair<unsigned_long,embree::BBox<embree::Vec3fa>_>_const___2_
  *local_2090;
  long **local_2080 [1020];
  long ***local_a0;
  ulong local_98;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_20d8 = param_4;
  local_20d0 = param_3;
  local_20c8 = param_2;
  uVar2 = embree::TaskScheduler::threadCount();
  if (0x200 < local_20c8) {
    local_20c8 = 0x200;
  }
  pppplVar3 = (long ****)local_2080;
  if (uVar2 < local_20c8) {
    local_20c8 = uVar2;
  }
  do {
    *pppplVar3 = (long ***)0x0;
    pppplVar3 = pppplVar3 + 6;
  } while (pppplVar3 != &local_a0);
  local_a0 = local_2080;
  local_98 = local_20c8;
  if (0x2000 < local_20c8 * 0x30) {
    local_a0 = (long ***)embree::alignedMalloc(local_20c8 * 0x30,0x40);
  }
  local_20b0 = &local_20d0;
  local_20a8 = &local_20d8;
  local_20a0 = &local_20c8;
  local_2090 = param_7;
  local_2098 = local_2080;
  if (local_20c8 == 0) {
    *(undefined8 *)param_1 = *(undefined8 *)param_6;
    uVar1 = *(undefined8 *)(param_6 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_6 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(param_6 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  else {
    local_20b8 = &local_20b0;
    local_20c0 = (ulong **)0x0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImSt4pairImNS_4BBoxINS_6Vec3faEEEEZNS_4sse221createMortonCodeArrayINS_12TriangleMeshEEEmPT_RNS_8vector_tINS9_16BVHBuilderMorton9BuildPrimENS_27aligned_monitored_allocatorISG_Lm8EEEEERNS_20BuildProgressMonitorEEUlRKNS_5rangeImEEE_ZNSA_ISB_EEmSD_SK_SM_EUlRKS8_ST_E0_EET0_SC_SC_SC_SC_RKSV_RKT1_RKT2_EUlmE_EEvSC_SX_EUlSQ_E_EEvSC_SC_SC_SX_PNS0_16TaskGroupContextE
              (0,local_20c8,1,&local_20b8,&local_20c0);
    embree::TaskScheduler::wait();
    if (local_20c0 != (ulong **)0x0) {
      local_20b8 = local_20c0;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_20b8);
    }
    lVar5 = *(long *)param_6;
    *(long *)param_1 = lVar5;
    auVar7 = *(undefined1 (*) [16])(param_6 + 0x10);
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar7;
    auVar6 = *(undefined1 (*) [16])(param_6 + 0x20);
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar6;
    if (local_20c8 != 0) {
      pppplVar3 = (long ****)local_a0;
      do {
        auVar6 = maxps(auVar6,*(undefined1 (*) [16])(pppplVar3 + 4));
        auVar7 = minps(auVar7,*(undefined1 (*) [16])(pppplVar3 + 2));
        pppplVar4 = pppplVar3 + 6;
        lVar5 = lVar5 + (long)*pppplVar3;
        *(long *)param_1 = lVar5;
        *(undefined1 (*) [16])(param_1 + 0x10) = auVar7;
        *(undefined1 (*) [16])(param_1 + 0x20) = auVar6;
        pppplVar3 = pppplVar4;
      } while (pppplVar4 != (long ****)(local_a0 + local_20c8 * 6));
    }
  }
  if (local_a0 != local_2080) {
    embree::alignedFree(local_a0);
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* unsigned long embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,
   embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,
   embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim, 8ul> >&,
   embree::BuildProgressMonitor&) */

ulong embree::sse2::createMortonCodeArray<embree::TriangleMesh>
                (TriangleMesh *param_1,vector_t *param_2,BuildProgressMonitor *param_3)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  vector_t *pvVar6;
  range *prVar7;
  range ***ppprVar8;
  long in_FS_OFFSET;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  float fVar17;
  range *prVar18;
  TriangleMesh *local_550 [2];
  long local_540;
  ulong local_538;
  ulong local_530;
  range **local_528;
  range **local_520;
  range **local_518;
  vector_t *local_510;
  range *local_508;
  range *local_4f8;
  vector_t *local_4f0;
  range *local_4e8;
  float *local_4e0;
  range ***local_4d8;
  undefined8 local_4c8 [2];
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  ulong local_498 [2];
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  uint local_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  float local_448 [4];
  uint local_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  undefined8 local_248 [65];
  long local_40;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar5 = uVar2 + 0x3ff >> 10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4b8 = _LC3;
  uStack_4b4 = _LC3;
  uStack_4b0 = _LC3;
  uStack_4ac = _LC3;
  local_4c8[0] = 0;
  local_4a8 = _LC1;
  uStack_4a4 = _LC1;
  uStack_4a0 = _LC1;
  uStack_49c = _LC1;
  local_550[0] = param_1;
  local_4f8 = (range *)local_550;
  if (uVar5 == 1) {
    createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)
    ::{lambda(embree::range<unsigned_long>const&)#1}::operator()
              ((_lambda_embree__range<unsigned_long>const___1_ *)local_498,(range *)local_550);
  }
  else {
    parallel_reduce_internal<unsigned_long,std::pair<unsigned_long,embree::BBox<embree::Vec3fa>>,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(std::pair<unsigned_long,embree::BBox<embree::Vec3fa>>const&,std::pair<unsigned_long,embree::BBox<embree::Vec3fa>>const&)_2_>
              ((ulong)local_498,uVar5,0,uVar2,(pair_conflict *)0x400,
               (_lambda_embree__range<unsigned_long>_const___1_ *)local_4c8,
               (_lambda_std__pair<unsigned_long,embree::BBox<embree::Vec3fa>_>_const__std__pair<unsigned_long,embree::BBox<embree::Vec3fa>_>_const___2_
                *)&local_4f8);
  }
  local_478 = local_478 - local_488;
  fStack_474 = fStack_474 - fStack_484;
  fStack_470 = fStack_470 - fStack_480;
  fStack_46c = fStack_46c - fStack_47c;
  auVar14._4_4_ = fStack_474;
  auVar14._0_4_ = local_478;
  auVar14._8_4_ = fStack_470;
  auVar14._12_4_ = fStack_46c;
  auVar14 = rcpps(in_XMM3,auVar14);
  fVar13 = auVar14._0_4_;
  fVar15 = auVar14._4_4_;
  fVar16 = auVar14._8_4_;
  fVar17 = auVar14._12_4_;
  uVar9 = (uint)(((_LC21 - local_478 * fVar13) * fVar13 + fVar13) * _LC32) &
          -(uint)(_LC29 < local_478);
  uVar10 = (uint)(((_LC21 - fStack_474 * fVar15) * fVar15 + fVar15) * _LC32) &
           -(uint)(_LC29 < fStack_474);
  uVar11 = (uint)(((_LC21 - fStack_470 * fVar16) * fVar16 + fVar16) * _LC32) &
           -(uint)(_LC29 < fStack_470);
  uVar12 = (uint)(((_LC21 - fStack_46c * fVar17) * fVar17 + fVar17) * _LC32) &
           -(uint)(_LC29 < fStack_46c);
  if (local_498[0] == uVar2) {
    local_4f8 = (range *)local_448;
    local_448[0] = local_488;
    local_448[1] = fStack_484;
    local_448[2] = fStack_480;
    local_448[3] = fStack_47c;
    local_520 = (range **)0x0;
    local_4f0 = param_2;
    local_4e8 = (range *)local_550;
    local_438 = uVar9;
    uStack_434 = uVar10;
    uStack_430 = uVar11;
    uStack_42c = uVar12;
    TaskScheduler::
    spawn<unsigned_long,embree::sse2::createMortonCodeArray<embree::TriangleMesh>(embree::TriangleMesh*,embree::vector_t<embree::sse2::BVHBuilderMorton::BuildPrim,embree::aligned_monitored_allocator<embree::sse2::BVHBuilderMorton::BuildPrim,8ul>>&,embree::BuildProgressMonitor&)::_lambda(embree::range<unsigned_long>const&)_3_>
              (0,uVar2,0x400,(_lambda_embree__range<unsigned_long>_const___3_ *)&local_4f8,
               (TaskGroupContext *)&local_520);
    embree::TaskScheduler::wait();
    if (local_520 != (range **)0x0) {
      local_518 = local_520;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_518);
    }
  }
  else {
    local_540 = 0;
    local_468 = local_488;
    fStack_464 = fStack_484;
    fStack_460 = fStack_480;
    fStack_45c = fStack_47c;
    local_538 = uVar2;
    local_518 = (range **)&local_468;
    local_510 = param_2;
    local_508 = (range *)local_550;
    local_458 = uVar9;
    uStack_454 = uVar10;
    uStack_450 = uVar11;
    uStack_44c = uVar12;
    uVar1 = embree::TaskScheduler::threadCount();
    pvVar6 = (vector_t *)&local_538;
    prVar7 = (range *)&local_530;
    ppprVar8 = &local_518;
    uVar5 = (local_538 + 0x3ff) - local_540 >> 10;
    if (uVar1 < uVar5) {
      uVar5 = uVar1;
    }
    prVar18 = (range *)&local_540;
    local_530 = 0x40;
    if (uVar5 < 0x41) {
      local_530 = uVar5;
    }
    local_4f8 = prVar18;
    local_4f0 = pvVar6;
    local_4e8 = prVar7;
    local_4e0 = local_448;
    local_4d8 = ppprVar8;
    if (uVar5 != 0) {
      local_520 = &local_4f8;
      local_528 = (range **)0x0;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_19parallel_prefix_sumImmZNS_4sse221createMortonCodeArrayINS_12TriangleMeshEEEmPT_RNS_8vector_tINS4_16BVHBuilderMorton9BuildPrimENS_27aligned_monitored_allocatorISB_Lm8EEEEERNS_20BuildProgressMonitorEEUlRKNS_5rangeImEEmE2_St4plusImEEET0_RNS_22ParallelPrefixSumStateISP_EES7_S7_S7_RKSP_RKT1_RKT2_EUlmE_EEvS7_SU_EUlSL_E_EEvS7_S7_S7_SU_PNS0_16TaskGroupContextE
                (0,local_530,1,&local_520,&local_528,pvVar6,prVar18,pvVar6,prVar7,ppprVar8);
      embree::TaskScheduler::wait();
      if (local_528 != (range **)0x0) {
        local_520 = local_528;
        std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
        std::rethrow_exception(&local_520);
      }
      if (local_530 != 0) {
        lVar4 = 0;
        pfVar3 = local_448;
        do {
          *(long *)(pfVar3 + 0x80) = lVar4;
          lVar4 = lVar4 + *(long *)pfVar3;
          pfVar3 = pfVar3 + 2;
        } while (local_448 + local_530 * 2 != pfVar3);
      }
    }
    local_540 = 0;
    local_538 = uVar2;
    local_518 = (range **)&local_468;
    local_510 = param_2;
    local_508 = (range *)local_550;
    uVar5 = embree::TaskScheduler::threadCount();
    uVar2 = (local_538 + 0x3ff) - local_540 >> 10;
    if (uVar5 < uVar2) {
      uVar2 = uVar5;
    }
    local_530 = 0x40;
    if (uVar2 < 0x41) {
      local_530 = uVar2;
    }
    local_4f8 = prVar18;
    local_4f0 = pvVar6;
    local_4e8 = prVar7;
    local_4e0 = local_448;
    local_4d8 = ppprVar8;
    if (uVar2 != 0) {
      local_520 = &local_4f8;
      local_528 = (range **)0x0;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_19parallel_prefix_sumImmZNS_4sse221createMortonCodeArrayINS_12TriangleMeshEEEmPT_RNS_8vector_tINS4_16BVHBuilderMorton9BuildPrimENS_27aligned_monitored_allocatorISB_Lm8EEEEERNS_20BuildProgressMonitorEEUlRKNS_5rangeImEEmE3_St4plusImEEET0_RNS_22ParallelPrefixSumStateISP_EES7_S7_S7_RKSP_RKT1_RKT2_EUlmE_EEvS7_SU_EUlSL_E_EEvS7_S7_S7_SU_PNS0_16TaskGroupContextE
                (0,local_530,1,&local_520,&local_528);
      embree::TaskScheduler::wait();
      if (local_528 != (range **)0x0) {
        local_520 = local_528;
        std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
        std::rethrow_exception(&local_520);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_498[0];
}



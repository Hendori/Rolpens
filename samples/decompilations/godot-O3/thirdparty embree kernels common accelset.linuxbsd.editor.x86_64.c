
/* embree::AccelSet::AccelSet(embree::Device*, embree::Geometry::GType, unsigned long, unsigned
   long) */

void __thiscall embree::AccelSet::AccelSet(AccelSet *this)

{
  embree::Geometry::Geometry();
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)this = &DAT_00100440;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}



/* embree::AccelSet::IntersectorN::IntersectorN(void (*)()) */

void __thiscall embree::AccelSet::IntersectorN::IntersectorN(IntersectorN *this,_func_void *param_1)

{
  *(_func_void **)this = param_1;
  *(_func_void **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* embree::AccelSet::IntersectorN::IntersectorN(void (*)(RTCIntersectFunctionNArguments const*),
   void (*)(RTCOccludedFunctionNArguments const*), char const*) */

void __thiscall
embree::AccelSet::IntersectorN::IntersectorN
          (IntersectorN *this,_func_void_RTCIntersectFunctionNArguments_ptr *param_1,
          _func_void_RTCOccludedFunctionNArguments_ptr *param_2,char *param_3)

{
  *(_func_void_RTCIntersectFunctionNArguments_ptr **)this = param_1;
  *(_func_void_RTCOccludedFunctionNArguments_ptr **)(this + 8) = param_2;
  *(char **)(this + 0x10) = param_3;
  return;
}



/* embree::Geometry::verify() */

undefined8 embree::Geometry::verify(void)

{
  return 1;
}



/* embree::Geometry::getCompactVertexArray() const */

undefined8 embree::Geometry::getCompactVertexArray(void)

{
  return 0;
}



/* embree::Geometry::enableFilterFunctionFromArguments(bool) */

void __thiscall embree::Geometry::enableFilterFunctionFromArguments(Geometry *this,bool param_1)

{
  this[0x3e] = (Geometry)((byte)this[0x3e] & 0xbf | (byte)((param_1 & 1) << 6));
  return;
}



/* embree::Geometry::createPrimRefArray(embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&, embree::range<unsigned
   long> const&, unsigned long, unsigned int) const */

vector_t *
embree::Geometry::createPrimRefArray
          (vector_t *param_1,vector_t *param_2,range *param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined4 in_register_00000084;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x168))
            (param_1,param_2,*(undefined8 *)(param_3 + 0x20),CONCAT44(in_register_00000084,param_5))
  ;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Geometry::createPrimRefMBArray(embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&, embree::BBox<float>
   const&, embree::range<unsigned long> const&, unsigned long, unsigned int) const */

vector_t *
embree::Geometry::createPrimRefMBArray
          (vector_t *param_1,vector_t *param_2,BBox *param_3,range *param_4,ulong param_5,
          uint param_6)

{
  long lVar1;
  undefined4 in_register_0000008c;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x188))
            (param_1,param_2,param_3,param_5,CONCAT44(in_register_0000008c,param_6),
             in_stack_00000008,in_stack_00000010);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Geometry::vlinearBounds(unsigned long, embree::BBox<float> const&,
   embree::SubGridBuildData const*) const */

ulong embree::Geometry::vlinearBounds(ulong param_1,BBox *param_2,SubGridBuildData *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x1d0))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::AccelSet::immutable() */

void embree::AccelSet::immutable(void)

{
  return;
}



/* embree::Geometry::vlinearBounds(embree::Vec3fa const&, float, float,
   embree::LinearSpace3<embree::Vec3fa> const&, unsigned long, embree::BBox<float> const&) const */

void embree::Geometry::vlinearBounds
               (Vec3fa *param_1,float param_2,float param_3,LinearSpace3 *param_4,ulong param_5,
               BBox *param_6)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vlinearBounds(embree::LinearSpace3<embree::Vec3fa> const&, unsigned long,
   embree::BBox<float> const&) const */

void embree::Geometry::vlinearBounds(LinearSpace3 *param_1,ulong param_2,BBox *param_3)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vlinearBounds(unsigned long, embree::BBox<float> const&) const */

void embree::Geometry::vlinearBounds(ulong param_1,BBox *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vbounds(embree::Vec3fa const&, float, float,
   embree::LinearSpace3<embree::Vec3fa> const&, unsigned long, unsigned long) const */

void embree::Geometry::vbounds
               (Vec3fa *param_1,float param_2,float param_3,LinearSpace3 *param_4,ulong param_5,
               ulong param_6)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vbounds(embree::LinearSpace3<embree::Vec3fa> const&, unsigned long) const */

void embree::Geometry::vbounds(LinearSpace3 *param_1,ulong param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vbounds(unsigned long) const */

void embree::Geometry::vbounds(ulong param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeDirection(unsigned int, unsigned long) const */

void embree::Geometry::computeDirection(uint param_1,ulong param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeDirection(unsigned int) const */

void embree::Geometry::computeDirection(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeAlignedSpaceMB(unsigned long, embree::BBox<float>) const */

void embree::Geometry::computeAlignedSpaceMB(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeAlignedSpace(unsigned long) const */

void embree::Geometry::computeAlignedSpace(ulong param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefMBArray(embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefMBArray
               (vector_t *param_1,BBox *param_2,range *param_3,ulong param_4,uint param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefArrayMB(embree::PrimRef*, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefArrayMB
               (PrimRef *param_1,BBox *param_2,range *param_3,ulong param_4,uint param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefArrayMB(embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, unsigned long,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefArrayMB
               (vector_t *param_1,ulong param_2,range *param_3,ulong param_4,uint param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefArray(embree::PrimRef*, embree::range<unsigned long> const&,
   unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefArray
               (PrimRef *param_1,range *param_2,ulong param_3,uint param_4)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setOccludedFunctionN(void (*)(RTCOccludedFunctionNArguments const*)) */

void embree::Geometry::setOccludedFunctionN(_func_void_RTCOccludedFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setIntersectFunctionN(void (*)(RTCIntersectFunctionNArguments const*)) */

void embree::Geometry::setIntersectFunctionN(_func_void_RTCIntersectFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setBoundsFunction(void (*)(RTCBoundsFunctionArguments const*), void*) */

void embree::Geometry::setBoundsFunction
               (_func_void_RTCBoundsFunctionArguments_ptr *param_1,void *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getTransform(unsigned long, float) */

void embree::Geometry::getTransform(ulong param_1,float param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getTransform(float) */

void embree::Geometry::getTransform(float param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setQuaternionDecomposition(embree::AffineSpaceT<embree::LinearSpace3<embree::Vec3fx>
   > const&, unsigned int) */

void embree::Geometry::setQuaternionDecomposition(AffineSpaceT *param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setTransform(embree::AffineSpaceT<embree::LinearSpace3<embree::Vec3fa> >
   const&, unsigned int) */

void embree::Geometry::setTransform(AffineSpaceT *param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setInstancedScenes(RTCSceneTy* const*, unsigned long) */

void embree::Geometry::setInstancedScenes(RTCSceneTy **param_1,ulong param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setInstancedScene(embree::Ref<embree::Scene> const&) */

void embree::Geometry::setInstancedScene(Ref *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getBuffer(RTCBufferType, unsigned int) */

void embree::Geometry::getBuffer(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setBuffer(RTCBufferType, unsigned int, RTCFormat, embree::Ref<embree::Buffer>
   const&, unsigned long, unsigned long, unsigned int) */

void embree::Geometry::setBuffer(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setMask(unsigned int) */

void embree::Geometry::setMask(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getOppositeHalfEdge(unsigned int, unsigned int) */

void embree::Geometry::getOppositeHalfEdge(uint param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getPreviousHalfEdge(unsigned int) */

void embree::Geometry::getPreviousHalfEdge(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getNextHalfEdge(unsigned int) */

void embree::Geometry::getNextHalfEdge(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* embree::Geometry::getFace(unsigned int) */

void embree::Geometry::getFace(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getFirstHalfEdge(unsigned int) */

void embree::Geometry::getFirstHalfEdge(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setDisplacementFunction(void (*)(RTCDisplacementFunctionNArguments const*)) */

void embree::Geometry::setDisplacementFunction
               (_func_void_RTCDisplacementFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setVertexAttributeTopology(unsigned int, unsigned int) */

void embree::Geometry::setVertexAttributeTopology(uint param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setSubdivisionMode(unsigned int, RTCSubdivisionMode) */

void embree::Geometry::setSubdivisionMode(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::interpolate(RTCInterpolateArguments const*) */

void embree::Geometry::interpolate(RTCInterpolateArguments *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setMaxRadiusScale(float) */

void embree::Geometry::setMaxRadiusScale(float param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setTessellationRate(float) */

void embree::Geometry::setTessellationRate(float param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::addElementsToCount(embree::GeometryCounts&) const */

void embree::Geometry::addElementsToCount(GeometryCounts *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setTopologyCount(unsigned int) */

void embree::Geometry::setTopologyCount(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setVertexAttributeCount(unsigned int) */

void embree::Geometry::setVertexAttributeCount(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::updateBuffer(RTCBufferType, unsigned int) */

void embree::Geometry::updateBuffer(void)

{
  embree::Geometry::update();
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
                    /* WARNING: Could not recover jumptable at 0x001003e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



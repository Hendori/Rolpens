
/* msdfgen::scanlineSDF(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 4> const&,
   msdfgen::Projection const&, double, bool) */

void msdfgen::scanlineSDF
               (Scanline *param_1,BitmapConstRef *param_2,Projection *param_3,double param_4,
               bool param_5)

{
  scanlineMSDF<4>(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* msdfgen::estimateSDFError(msdfgen::BitmapConstRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, int, msdfgen::FillRule) */

void msdfgen::estimateSDFError(void)

{
  estimateSDFErrorInner<4>();
  return;
}



/* msdfgen::estimateSDFError(msdfgen::BitmapConstRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, int, msdfgen::FillRule) */

void msdfgen::estimateSDFError
               (undefined8 param_1,undefined8 param_2,Vector2 *param_3,Vector2 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  long in_FS_OFFSET;
  Projection aPStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(aPStack_58,param_3,param_4);
  estimateSDFErrorInner<4>(param_1,param_2,aPStack_58,param_5,param_6);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::scanlineSDF(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 4> const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, bool, double) */

void msdfgen::scanlineSDF
               (Scanline *param_1,BitmapConstRef *param_2,Vector2 *param_3,Vector2 *param_4,
               bool param_5,double param_6)

{
  long in_FS_OFFSET;
  Projection local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(local_58,param_3,param_4);
  scanlineMSDF<4>(param_1,param_2,local_58,param_6,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::scanlineSDF(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 1> const&,
   msdfgen::Projection const&, double, bool) */

void msdfgen::scanlineSDF
               (Scanline *param_1,BitmapConstRef *param_2,Projection *param_3,double param_4,
               bool param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>> *local_90;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_2 + 8) < 1) || (*(int *)(param_2 + 0xc) < 1)) {
    local_48 = (undefined8 *)0x0;
    local_58 = (undefined1  [16])0x0;
  }
  else {
    dVar9 = (double)(*(int *)(param_2 + 0xc) + -1);
    dVar5 = (double)msdfgen::Projection::projectY(param_4);
    dVar5 = dVar5 - _LC3;
    if ((dVar5 < 0.0) || ((dVar6 = dVar5, dVar9 < dVar5 && (dVar6 = dVar9, dVar5 <= 0.0)))) {
      dVar6 = dVar9 * 0.0;
    }
    iVar1 = *(int *)(param_2 + 0xc);
    if (param_5) {
      dVar6 = (double)(iVar1 + -1) - dVar6;
    }
    dVar5 = dVar6;
    if ((double)((ulong)dVar6 & _LC10) < _LC4) {
      dVar5 = (double)((ulong)((double)(long)dVar6 -
                              (double)(-(ulong)(dVar6 < (double)(long)dVar6) & (ulong)_LC2)) |
                      ~_LC10 & (ulong)dVar6);
    }
    iVar4 = (int)dVar5;
    if (iVar4 + 1 < iVar1) {
      dVar9 = _LC2 - (dVar6 - (double)iVar4);
      dVar5 = dVar6 - (double)iVar4;
      iVar1 = iVar4 + 1;
    }
    else {
      iVar4 = iVar1 + -1;
      dVar9 = 0.0;
      dVar5 = _LC2;
      iVar1 = iVar4;
    }
    iVar2 = *(int *)(param_2 + 8);
    local_48 = (undefined8 *)0x0;
    local_58 = (undefined1  [16])0x0;
    fVar7 = (float)((double)*(float *)(*(long *)param_2 + (long)(iVar1 * iVar2) * 4) * dVar5 +
                   (double)*(float *)(*(long *)param_2 + (long)(iVar4 * iVar2) * 4) * dVar9);
    if (_LC6 < fVar7) {
      local_68 = _LC7;
      iStack_60 = 1;
      std::vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>::
      _M_realloc_insert<msdfgen::Scanline::Intersection_const&>
                ((vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
                  *)local_58,0,&local_68);
      iVar2 = *(int *)(param_2 + 8);
    }
    local_90 = (vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
                *)local_58;
    iVar3 = 1;
    dVar6 = _LC2;
    fVar11 = _LC6;
    if (1 < iVar2) {
      do {
        fVar8 = (float)((double)*(float *)(*(long *)param_2 + (long)(iVar4 * iVar2 + iVar3) * 4) *
                        dVar9 + (double)*(float *)(*(long *)param_2 +
                                                  (long)(iVar1 * iVar2 + iVar3) * 4) * dVar5);
        if (fVar8 != fVar7) {
          fVar12 = fVar8 - fVar7;
          dVar10 = (double)(fVar11 - fVar7) / (double)fVar12;
          if ((0.0 <= dVar10) && (dVar10 <= dVar6)) {
            local_68 = msdfgen::Projection::unprojectX((double)(iVar3 + -1) + dVar10 + _LC3);
            fVar11 = _LC6;
            dVar6 = _LC2;
            iStack_60 = (uint)(0.0 < fVar12) - (uint)(fVar12 < 0.0);
            if ((undefined8 *)local_58._8_8_ == local_48) {
              std::
              vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
              ::_M_realloc_insert<msdfgen::Scanline::Intersection_const&>
                        (local_90,local_58._8_8_,&local_68);
              iVar2 = *(int *)(param_2 + 8);
              dVar6 = _LC2;
              fVar11 = _LC6;
            }
            else {
              iVar2 = *(int *)(param_2 + 8);
              *(undefined8 *)local_58._8_8_ = local_68;
              *(ulong *)(local_58._8_8_ + 8) = CONCAT44(uStack_5c,iStack_60);
              local_58._8_8_ = (undefined8 *)(local_58._8_8_ + 0x10);
            }
          }
        }
        iVar3 = iVar3 + 1;
        fVar7 = fVar8;
      } while (iVar3 < iVar2);
    }
  }
  msdfgen::Scanline::setIntersections((vector *)param_1);
  if ((void *)local_58._0_8_ != (void *)0x0) {
    operator_delete((void *)local_58._0_8_,(long)local_48 - local_58._0_8_);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::estimateSDFError(msdfgen::BitmapConstRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, int, msdfgen::FillRule) */

void msdfgen::estimateSDFError(void)

{
  estimateSDFErrorInner<1>();
  return;
}



/* msdfgen::estimateSDFError(msdfgen::BitmapConstRef<float, 1> const&, msdfgen::Shape const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, int, msdfgen::FillRule) */

void msdfgen::estimateSDFError
               (undefined8 param_1,undefined8 param_2,Vector2 *param_3,Vector2 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  long in_FS_OFFSET;
  Projection aPStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(aPStack_58,param_3,param_4);
  estimateSDFErrorInner<1>(param_1,param_2,aPStack_58,param_5,param_6);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::scanlineSDF(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 1> const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, bool, double) */

void msdfgen::scanlineSDF
               (Scanline *param_1,BitmapConstRef *param_2,Vector2 *param_3,Vector2 *param_4,
               bool param_5,double param_6)

{
  long in_FS_OFFSET;
  Projection local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(local_58,param_3,param_4);
  scanlineSDF(param_1,param_2,local_58,param_6,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::scanlineSDF(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 3> const&,
   msdfgen::Projection const&, double, bool) */

void msdfgen::scanlineSDF
               (Scanline *param_1,BitmapConstRef *param_2,Projection *param_3,double param_4,
               bool param_5)

{
  scanlineMSDF<3>(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* msdfgen::estimateSDFError(msdfgen::BitmapConstRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, int, msdfgen::FillRule) */

void msdfgen::estimateSDFError(void)

{
  estimateSDFErrorInner<3>();
  return;
}



/* msdfgen::estimateSDFError(msdfgen::BitmapConstRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, int, msdfgen::FillRule) */

void msdfgen::estimateSDFError
               (undefined8 param_1,undefined8 param_2,Vector2 *param_3,Vector2 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  long in_FS_OFFSET;
  Projection aPStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(aPStack_58,param_3,param_4);
  estimateSDFErrorInner<3>(param_1,param_2,aPStack_58,param_5,param_6);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::scanlineSDF(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 3> const&,
   msdfgen::Vector2 const&, msdfgen::Vector2 const&, bool, double) */

void msdfgen::scanlineSDF
               (Scanline *param_1,BitmapConstRef *param_2,Vector2 *param_3,Vector2 *param_4,
               bool param_5,double param_6)

{
  long in_FS_OFFSET;
  Projection local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::Projection::Projection(local_58,param_3,param_4);
  scanlineMSDF<3>(param_1,param_2,local_58,param_6,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
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
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00100870;
    uVar4 = 0x7ffffffffffffff;
    if (uVar3 + 1 < 0x800000000000000) {
      uVar4 = uVar3 + 1;
    }
    uVar4 = uVar4 << 4;
LAB_0010087a:
    __dest_00 = operator_new(uVar4);
    lVar5 = uVar4 + (long)__dest_00;
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar3) {
LAB_00100870:
      uVar4 = 0x7ffffffffffffff0;
      goto LAB_0010087a;
    }
    if (uVar4 != 0) {
      if (0x7ffffffffffffff < uVar4) {
        uVar4 = 0x7ffffffffffffff;
      }
      uVar4 = uVar4 << 4;
      goto LAB_0010087a;
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
    if (__src == (void *)0x0) goto LAB_0010084e;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010084e:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar5;
  return;
}



/* void msdfgen::scanlineMSDF<4>(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 4> const&,
   msdfgen::Projection const&, double, bool) */

void msdfgen::scanlineMSDF<4>
               (Scanline *param_1,BitmapConstRef *param_2,Projection *param_3,double param_4,
               bool param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar20;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar30;
  float fVar31;
  double dVar32;
  vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>> *local_118
  ;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined1 (*local_c8) [16];
  float local_b8 [4];
  float local_a8 [4];
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  double local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  undefined1 auVar29 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_2 + 8) < 1) || (*(int *)(param_2 + 0xc) < 1)) {
    local_c8 = (undefined1 (*) [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    goto LAB_00100e90;
  }
  dVar23 = (double)(*(int *)(param_2 + 0xc) + -1);
  dVar16 = (double)msdfgen::Projection::projectY(param_4);
  dVar16 = dVar16 - _LC3;
  if ((dVar16 < 0.0) || ((dVar17 = dVar16, dVar23 < dVar16 && (dVar17 = dVar23, dVar16 <= 0.0)))) {
    dVar17 = dVar23 * 0.0;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if (param_5) {
    dVar17 = (double)(iVar4 + -1) - dVar17;
  }
  dVar16 = dVar17;
  if ((double)((ulong)dVar17 & _LC10) < _LC4) {
    dVar16 = (double)((ulong)((double)(long)dVar17 -
                             (double)(-(ulong)(dVar17 < (double)(long)dVar17) & (ulong)_LC2)) |
                     ~_LC10 & (ulong)dVar17);
  }
  iVar13 = (int)dVar16;
  if (iVar13 + 1 < iVar4) {
    dVar23 = _LC2 - (dVar17 - (double)iVar13);
    dVar16 = dVar17 - (double)iVar13;
    iVar4 = iVar13 + 1;
  }
  else {
    iVar13 = iVar4 + -1;
    dVar23 = 0.0;
    dVar16 = _LC2;
    iVar4 = iVar13;
  }
  iVar11 = *(int *)(param_2 + 8);
  local_c8 = (undefined1 (*) [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)(*(long *)param_2 + (long)(iVar4 * iVar11 * 4) * 4);
  uVar18 = *puVar1;
  puVar2 = (undefined8 *)(*(long *)param_2 + (long)(iVar13 * iVar11 * 4) * 4);
  uVar3 = *puVar2;
  fVar21 = (float)((double)(float)uVar18 * dVar16 + (double)(float)uVar3 * dVar23);
  fVar24 = (float)((double)(float)((ulong)uVar18 >> 0x20) * dVar16 +
                  (double)(float)((ulong)uVar3 >> 0x20) * dVar23);
  fVar26 = (float)((double)*(float *)(puVar1 + 1) * dVar16 + (double)*(float *)(puVar2 + 1) * dVar23
                  );
  local_a8[0] = fVar21;
  local_a8[1] = fVar24;
  local_a8[2] = fVar26;
  if (fVar24 <= fVar21) {
    fVar22 = fVar21;
    if ((fVar26 < fVar21) && (fVar25 = fVar24, fVar24 < fVar21)) goto LAB_00100b2c;
LAB_00100b36:
    if (fVar22 <= _LC6) goto LAB_00100b43;
LAB_00101245:
    bVar12 = true;
    local_e8 = _LC7;
    local_e0 = 1;
    std::vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>::
    _M_realloc_insert<msdfgen::Scanline::Intersection_const&>
              ((vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
                *)local_d8,0,&local_e8);
    iVar11 = *(int *)(param_2 + 8);
  }
  else {
    fVar25 = fVar21;
    if (fVar26 < fVar24) {
LAB_00100b2c:
      fVar22 = fVar26;
      if (fVar26 <= fVar25) {
        fVar22 = fVar25;
      }
      goto LAB_00100b36;
    }
    if (_LC6 < fVar24) goto LAB_00101245;
LAB_00100b43:
    bVar12 = false;
  }
  local_118 = (vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
               *)local_d8;
  auVar29 = ZEXT416((uint)fVar26);
  if (1 < iVar11) {
    iVar14 = 1;
    fVar26 = _LC6;
    dVar17 = _LC2;
    do {
      fVar27 = auVar29._0_4_;
      local_b8[0] = fVar21;
      local_b8[1] = fVar24;
      lVar7 = 0;
      iVar10 = 0;
      local_b8[2] = fVar27;
      puVar1 = (undefined8 *)(*(long *)param_2 + (long)((iVar4 * iVar11 + iVar14) * 4) * 4);
      puVar2 = (undefined8 *)(*(long *)param_2 + (long)((iVar11 * iVar13 + iVar14) * 4) * 4);
      uVar18 = *puVar1;
      uVar3 = *puVar2;
      fVar22 = (float)((double)(float)uVar18 * dVar16 + (double)(float)uVar3 * dVar23);
      fVar25 = (float)((double)(float)((ulong)uVar18 >> 0x20) * dVar16 +
                      (double)(float)((ulong)uVar3 >> 0x20) * dVar23);
      local_a8[0] = fVar22;
      local_a8[1] = fVar25;
      dVar28 = (double)*(float *)(puVar2 + 1) * dVar23 + (double)*(float *)(puVar1 + 1) * dVar16;
      auVar29._0_4_ = (float)dVar28;
      auVar29._4_4_ = (int)((ulong)dVar28 >> 0x20);
      auVar29._8_8_ = 0;
      local_a8[2] = auVar29._0_4_;
      do {
        fVar20 = *(float *)((long)local_b8 + lVar7);
        if (fVar20 != *(float *)((long)local_a8 + lVar7)) {
          fVar30 = *(float *)((long)local_a8 + lVar7) - fVar20;
          dVar28 = (double)(fVar26 - fVar20) / (double)fVar30;
          if ((0.0 <= dVar28) && (dVar28 <= dVar17)) {
            dVar32 = dVar17 - dVar28;
            fVar15 = (float)((double)fVar22 * dVar28 + (double)fVar21 * dVar32);
            fVar20 = (float)((double)fVar25 * dVar28 + (double)fVar24 * dVar32);
            local_98 = CONCAT44(fVar20,fVar15);
            local_90 = (float)((double)fVar27 * dVar32 + (double)auVar29._0_4_ * dVar28);
            if (fVar20 <= fVar15) {
              fVar31 = fVar15;
              if ((local_90 < fVar15) && (fVar20 < fVar15)) goto LAB_001011c8;
            }
            else {
              bVar5 = local_90 < fVar20;
              fVar31 = fVar20;
              fVar20 = fVar15;
              if (bVar5) {
LAB_001011c8:
                fVar31 = local_90;
                if (local_90 <= fVar20) {
                  fVar31 = fVar20;
                }
              }
            }
            if (fVar31 == *(float *)((long)&local_98 + lVar7)) {
              uVar18 = msdfgen::Projection::unprojectX((double)(iVar14 + -1) + dVar28 + _LC3);
              lVar9 = (long)iVar10;
              *(undefined8 *)(local_88 + lVar9 * 0x10) = uVar18;
              auVar29 = ZEXT416((uint)auVar29._0_4_);
              iVar10 = iVar10 + 1;
              *(uint *)(local_88 + lVar9 * 0x10 + 8) = (uint)(0.0 < fVar30) - (uint)(fVar30 < 0.0);
              fVar26 = _LC6;
              dVar17 = _LC2;
            }
          }
        }
        dVar28 = local_68;
        auVar19 = local_88;
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0xc);
      if (iVar10 < 2) {
        if (iVar10 == 1) goto LAB_00100d70;
      }
      else {
        if ((double)local_78._0_8_ < (double)local_88._0_8_) {
          local_58 = local_88;
          local_88 = local_78;
          local_78 = auVar19;
        }
        auVar19 = local_88;
        if ((iVar10 != 2) && (local_68 < (double)local_78._0_8_)) {
          auVar6._8_8_ = uStack_60;
          auVar6._0_8_ = local_68;
          local_58 = local_78;
          local_68 = (double)local_78._0_8_;
          uStack_60 = local_78._8_8_;
          local_78 = auVar6;
          if (dVar28 < (double)local_88._0_8_) {
            local_88 = auVar6;
            local_58 = auVar19;
            local_78 = auVar19;
          }
        }
LAB_00100d70:
        pauVar8 = &local_88;
        iVar11 = 0;
        do {
          if (0 < *(int *)(*pauVar8 + 8) != bVar12) {
            if ((undefined1 (*) [16])local_d8._8_8_ == local_c8) {
              std::
              vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
              ::_M_realloc_insert<msdfgen::Scanline::Intersection_const&>
                        (local_118,local_d8._8_8_,pauVar8);
              auVar29 = ZEXT416(auVar29._0_4_);
              fVar26 = _LC6;
              dVar17 = _LC2;
            }
            else {
              *(undefined1 (*) [16])local_d8._8_8_ = *pauVar8;
              local_d8._8_8_ = (undefined1 (*) [16])(local_d8._8_8_ + 0x10);
            }
            bVar12 = (bool)(bVar12 ^ 1);
          }
          iVar11 = iVar11 + 1;
          pauVar8 = pauVar8 + 1;
        } while (iVar11 < iVar10);
      }
      auVar19 = auVar29;
      if (fVar25 <= fVar22) {
        if (fVar22 <= auVar29._0_4_) {
          auVar19._4_12_ = auVar29._4_12_;
          auVar19._0_4_ = fVar22;
        }
        fVar21 = fVar22;
        fVar24 = fVar25;
        if (fVar25 < fVar22) goto LAB_00100dfa;
      }
      else {
        fVar21 = fVar25;
        fVar24 = fVar22;
        if (auVar29._0_4_ < fVar25) {
LAB_00100dfa:
          if (auVar19._0_4_ <= fVar24) {
            auVar19._0_4_ = fVar24;
          }
          fVar21 = auVar19._0_4_;
        }
      }
      if ((_LC6 < fVar21 != bVar12) && (fVar21 != _LC6)) {
        if (local_d8._8_8_ != local_d8._0_8_) {
          bVar12 = (bool)(bVar12 ^ 1);
          local_d8._8_8_ = local_d8._8_8_ + -0x10;
        }
      }
      iVar11 = *(int *)(param_2 + 8);
      iVar14 = iVar14 + 1;
      fVar21 = fVar22;
      fVar24 = fVar25;
    } while (iVar14 < iVar11);
  }
LAB_00100e90:
  msdfgen::Scanline::setIntersections((vector *)param_1);
  if ((void *)local_d8._0_8_ != (void *)0x0) {
    operator_delete((void *)local_d8._0_8_,(long)local_c8 - local_d8._0_8_);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* double msdfgen::estimateSDFErrorInner<4>(msdfgen::BitmapConstRef<float, 4> const&, msdfgen::Shape
   const&, msdfgen::Projection const&, int, msdfgen::FillRule) */

double msdfgen::estimateSDFErrorInner<4>
                 (BitmapConstRef *param_1,Scanline *param_2,Projection *param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_d0;
  int local_8c;
  void *local_88 [2];
  long local_78;
  void *local_68 [2];
  long local_58;
  long local_40;
  
  local_d0 = 0.0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < *(int *)(param_1 + 8)) {
    if ((*(int *)(param_1 + 0xc) < 2) || (param_4 < 1)) {
      local_d0 = 0.0;
    }
    else {
      dVar5 = _LC2 / (double)param_4;
      dVar2 = (double)msdfgen::Projection::unprojectX(_LC3);
      dVar3 = (double)msdfgen::Projection::unprojectX((double)*(int *)(param_1 + 8) - _LC3);
      dVar6 = _LC2 / (dVar3 - dVar2);
      msdfgen::Scanline::Scanline((Scanline *)local_88);
      msdfgen::Scanline::Scanline((Scanline *)local_68);
      local_8c = 0;
      local_d0 = 0.0;
      iVar1 = *(int *)(param_1 + 0xc) + -1;
      if (0 < iVar1) {
        do {
          iVar1 = 0;
          do {
            dVar4 = (double)iVar1;
            iVar1 = iVar1 + 1;
            dVar4 = (double)msdfgen::Projection::unprojectY
                                      ((dVar4 + _LC3) * dVar5 + (double)local_8c + _LC3);
            msdfgen::Shape::scanline(param_2,dVar4);
            scanlineMSDF<4>((Scanline *)local_68,param_1,param_3,dVar4,(bool)param_2[0x18]);
            dVar4 = (double)msdfgen::Scanline::overlap
                                      (dVar2,dVar3,(Scanline *)local_88,(Scanline *)local_68,param_5
                                      );
            local_d0 = (_LC2 - dVar4 * dVar6) + local_d0;
          } while (iVar1 < param_4);
          local_8c = local_8c + 1;
          iVar1 = *(int *)(param_1 + 0xc) + -1;
        } while (local_8c < iVar1);
      }
      if (local_68[0] != (void *)0x0) {
        operator_delete(local_68[0],local_58 - (long)local_68[0]);
      }
      if (local_88[0] != (void *)0x0) {
        operator_delete(local_88[0],local_78 - (long)local_88[0]);
      }
      local_d0 = local_d0 / (double)(param_4 * iVar1);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* double msdfgen::estimateSDFErrorInner<1>(msdfgen::BitmapConstRef<float, 1> const&, msdfgen::Shape
   const&, msdfgen::Projection const&, int, msdfgen::FillRule) */

double msdfgen::estimateSDFErrorInner<1>
                 (BitmapConstRef *param_1,Scanline *param_2,Projection *param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_d0;
  int local_8c;
  void *local_88 [2];
  long local_78;
  void *local_68 [2];
  long local_58;
  long local_40;
  
  local_d0 = 0.0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < *(int *)(param_1 + 8)) {
    if ((*(int *)(param_1 + 0xc) < 2) || (param_4 < 1)) {
      local_d0 = 0.0;
    }
    else {
      dVar5 = _LC2 / (double)param_4;
      dVar2 = (double)msdfgen::Projection::unprojectX(_LC3);
      dVar3 = (double)msdfgen::Projection::unprojectX((double)*(int *)(param_1 + 8) - _LC3);
      dVar6 = _LC2 / (dVar3 - dVar2);
      msdfgen::Scanline::Scanline((Scanline *)local_88);
      msdfgen::Scanline::Scanline((Scanline *)local_68);
      local_8c = 0;
      local_d0 = 0.0;
      iVar1 = *(int *)(param_1 + 0xc) + -1;
      if (0 < iVar1) {
        do {
          iVar1 = 0;
          do {
            dVar4 = (double)iVar1;
            iVar1 = iVar1 + 1;
            dVar4 = (double)msdfgen::Projection::unprojectY
                                      ((dVar4 + _LC3) * dVar5 + (double)local_8c + _LC3);
            msdfgen::Shape::scanline(param_2,dVar4);
            scanlineSDF((Scanline *)local_68,param_1,param_3,dVar4,(bool)param_2[0x18]);
            dVar4 = (double)msdfgen::Scanline::overlap
                                      (dVar2,dVar3,(Scanline *)local_88,(Scanline *)local_68,param_5
                                      );
            local_d0 = (_LC2 - dVar4 * dVar6) + local_d0;
          } while (iVar1 < param_4);
          local_8c = local_8c + 1;
          iVar1 = *(int *)(param_1 + 0xc) + -1;
        } while (local_8c < iVar1);
      }
      if (local_68[0] != (void *)0x0) {
        operator_delete(local_68[0],local_58 - (long)local_68[0]);
      }
      if (local_88[0] != (void *)0x0) {
        operator_delete(local_88[0],local_78 - (long)local_88[0]);
      }
      local_d0 = local_d0 / (double)(param_4 * iVar1);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void msdfgen::scanlineMSDF<3>(msdfgen::Scanline&, msdfgen::BitmapConstRef<float, 3> const&,
   msdfgen::Projection const&, double, bool) */

void msdfgen::scanlineMSDF<3>
               (Scanline *param_1,BitmapConstRef *param_2,Projection *param_3,double param_4,
               bool param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar20;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar30;
  float fVar31;
  double dVar32;
  vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>> *local_118
  ;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined1 (*local_c8) [16];
  float local_b8 [4];
  float local_a8 [4];
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  double local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  undefined1 auVar29 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_2 + 8) < 1) || (*(int *)(param_2 + 0xc) < 1)) {
    local_c8 = (undefined1 (*) [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    goto LAB_00101d30;
  }
  dVar23 = (double)(*(int *)(param_2 + 0xc) + -1);
  dVar16 = (double)msdfgen::Projection::projectY(param_4);
  dVar16 = dVar16 - _LC3;
  if ((dVar16 < 0.0) || ((dVar17 = dVar16, dVar23 < dVar16 && (dVar17 = dVar23, dVar16 <= 0.0)))) {
    dVar17 = dVar23 * 0.0;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if (param_5) {
    dVar17 = (double)(iVar4 + -1) - dVar17;
  }
  dVar16 = dVar17;
  if ((double)((ulong)dVar17 & _LC10) < _LC4) {
    dVar16 = (double)((ulong)((double)(long)dVar17 -
                             (double)(-(ulong)(dVar17 < (double)(long)dVar17) & (ulong)_LC2)) |
                     ~_LC10 & (ulong)dVar17);
  }
  iVar13 = (int)dVar16;
  if (iVar13 + 1 < iVar4) {
    dVar23 = _LC2 - (dVar17 - (double)iVar13);
    dVar16 = dVar17 - (double)iVar13;
    iVar4 = iVar13 + 1;
  }
  else {
    iVar13 = iVar4 + -1;
    dVar23 = 0.0;
    dVar16 = _LC2;
    iVar4 = iVar13;
  }
  iVar11 = *(int *)(param_2 + 8);
  local_c8 = (undefined1 (*) [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)(*(long *)param_2 + (long)(iVar4 * iVar11 * 3) * 4);
  uVar18 = *puVar1;
  puVar2 = (undefined8 *)(*(long *)param_2 + (long)(iVar13 * iVar11 * 3) * 4);
  uVar3 = *puVar2;
  fVar21 = (float)((double)(float)uVar18 * dVar16 + (double)(float)uVar3 * dVar23);
  fVar24 = (float)((double)(float)((ulong)uVar18 >> 0x20) * dVar16 +
                  (double)(float)((ulong)uVar3 >> 0x20) * dVar23);
  fVar26 = (float)((double)*(float *)(puVar1 + 1) * dVar16 + (double)*(float *)(puVar2 + 1) * dVar23
                  );
  local_a8[0] = fVar21;
  local_a8[1] = fVar24;
  local_a8[2] = fVar26;
  if (fVar24 <= fVar21) {
    fVar22 = fVar21;
    if ((fVar26 < fVar21) && (fVar25 = fVar24, fVar24 < fVar21)) goto LAB_001019cc;
LAB_001019d6:
    if (fVar22 <= _LC6) goto LAB_001019e3;
LAB_001020e5:
    bVar12 = true;
    local_e8 = _LC7;
    local_e0 = 1;
    std::vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>::
    _M_realloc_insert<msdfgen::Scanline::Intersection_const&>
              ((vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
                *)local_d8,0,&local_e8);
    iVar11 = *(int *)(param_2 + 8);
  }
  else {
    fVar25 = fVar21;
    if (fVar26 < fVar24) {
LAB_001019cc:
      fVar22 = fVar26;
      if (fVar26 <= fVar25) {
        fVar22 = fVar25;
      }
      goto LAB_001019d6;
    }
    if (_LC6 < fVar24) goto LAB_001020e5;
LAB_001019e3:
    bVar12 = false;
  }
  local_118 = (vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
               *)local_d8;
  auVar29 = ZEXT416((uint)fVar26);
  if (1 < iVar11) {
    iVar14 = 1;
    fVar26 = _LC6;
    dVar17 = _LC2;
    do {
      fVar27 = auVar29._0_4_;
      local_b8[0] = fVar21;
      local_b8[1] = fVar24;
      lVar7 = 0;
      iVar10 = 0;
      local_b8[2] = fVar27;
      puVar1 = (undefined8 *)(*(long *)param_2 + (long)((iVar4 * iVar11 + iVar14) * 3) * 4);
      puVar2 = (undefined8 *)(*(long *)param_2 + (long)((iVar11 * iVar13 + iVar14) * 3) * 4);
      uVar18 = *puVar1;
      uVar3 = *puVar2;
      fVar22 = (float)((double)(float)uVar18 * dVar16 + (double)(float)uVar3 * dVar23);
      fVar25 = (float)((double)(float)((ulong)uVar18 >> 0x20) * dVar16 +
                      (double)(float)((ulong)uVar3 >> 0x20) * dVar23);
      local_a8[0] = fVar22;
      local_a8[1] = fVar25;
      dVar28 = (double)*(float *)(puVar2 + 1) * dVar23 + (double)*(float *)(puVar1 + 1) * dVar16;
      auVar29._0_4_ = (float)dVar28;
      auVar29._4_4_ = (int)((ulong)dVar28 >> 0x20);
      auVar29._8_8_ = 0;
      local_a8[2] = auVar29._0_4_;
      do {
        fVar20 = *(float *)((long)local_b8 + lVar7);
        if (fVar20 != *(float *)((long)local_a8 + lVar7)) {
          fVar30 = *(float *)((long)local_a8 + lVar7) - fVar20;
          dVar28 = (double)(fVar26 - fVar20) / (double)fVar30;
          if ((0.0 <= dVar28) && (dVar28 <= dVar17)) {
            dVar32 = dVar17 - dVar28;
            fVar15 = (float)((double)fVar22 * dVar28 + (double)fVar21 * dVar32);
            fVar20 = (float)((double)fVar25 * dVar28 + (double)fVar24 * dVar32);
            local_98 = CONCAT44(fVar20,fVar15);
            local_90 = (float)((double)fVar27 * dVar32 + (double)auVar29._0_4_ * dVar28);
            if (fVar20 <= fVar15) {
              fVar31 = fVar15;
              if ((local_90 < fVar15) && (fVar20 < fVar15)) goto LAB_00102068;
            }
            else {
              bVar5 = local_90 < fVar20;
              fVar31 = fVar20;
              fVar20 = fVar15;
              if (bVar5) {
LAB_00102068:
                fVar31 = local_90;
                if (local_90 <= fVar20) {
                  fVar31 = fVar20;
                }
              }
            }
            if (fVar31 == *(float *)((long)&local_98 + lVar7)) {
              uVar18 = msdfgen::Projection::unprojectX((double)(iVar14 + -1) + dVar28 + _LC3);
              lVar9 = (long)iVar10;
              *(undefined8 *)(local_88 + lVar9 * 0x10) = uVar18;
              auVar29 = ZEXT416((uint)auVar29._0_4_);
              iVar10 = iVar10 + 1;
              *(uint *)(local_88 + lVar9 * 0x10 + 8) = (uint)(0.0 < fVar30) - (uint)(fVar30 < 0.0);
              fVar26 = _LC6;
              dVar17 = _LC2;
            }
          }
        }
        dVar28 = local_68;
        auVar19 = local_88;
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0xc);
      if (iVar10 < 2) {
        if (iVar10 == 1) goto LAB_00101c10;
      }
      else {
        if ((double)local_78._0_8_ < (double)local_88._0_8_) {
          local_58 = local_88;
          local_88 = local_78;
          local_78 = auVar19;
        }
        auVar19 = local_88;
        if ((iVar10 != 2) && (local_68 < (double)local_78._0_8_)) {
          auVar6._8_8_ = uStack_60;
          auVar6._0_8_ = local_68;
          local_58 = local_78;
          local_68 = (double)local_78._0_8_;
          uStack_60 = local_78._8_8_;
          local_78 = auVar6;
          if (dVar28 < (double)local_88._0_8_) {
            local_88 = auVar6;
            local_58 = auVar19;
            local_78 = auVar19;
          }
        }
LAB_00101c10:
        pauVar8 = &local_88;
        iVar11 = 0;
        do {
          if (0 < *(int *)(*pauVar8 + 8) != bVar12) {
            if ((undefined1 (*) [16])local_d8._8_8_ == local_c8) {
              std::
              vector<msdfgen::Scanline::Intersection,std::allocator<msdfgen::Scanline::Intersection>>
              ::_M_realloc_insert<msdfgen::Scanline::Intersection_const&>
                        (local_118,local_d8._8_8_,pauVar8);
              auVar29 = ZEXT416(auVar29._0_4_);
              fVar26 = _LC6;
              dVar17 = _LC2;
            }
            else {
              *(undefined1 (*) [16])local_d8._8_8_ = *pauVar8;
              local_d8._8_8_ = (undefined1 (*) [16])(local_d8._8_8_ + 0x10);
            }
            bVar12 = (bool)(bVar12 ^ 1);
          }
          iVar11 = iVar11 + 1;
          pauVar8 = pauVar8 + 1;
        } while (iVar11 < iVar10);
      }
      auVar19 = auVar29;
      if (fVar25 <= fVar22) {
        if (fVar22 <= auVar29._0_4_) {
          auVar19._4_12_ = auVar29._4_12_;
          auVar19._0_4_ = fVar22;
        }
        fVar21 = fVar22;
        fVar24 = fVar25;
        if (fVar25 < fVar22) goto LAB_00101c9a;
      }
      else {
        fVar21 = fVar25;
        fVar24 = fVar22;
        if (auVar29._0_4_ < fVar25) {
LAB_00101c9a:
          if (auVar19._0_4_ <= fVar24) {
            auVar19._0_4_ = fVar24;
          }
          fVar21 = auVar19._0_4_;
        }
      }
      if ((_LC6 < fVar21 != bVar12) && (fVar21 != _LC6)) {
        if (local_d8._8_8_ != local_d8._0_8_) {
          bVar12 = (bool)(bVar12 ^ 1);
          local_d8._8_8_ = local_d8._8_8_ + -0x10;
        }
      }
      iVar11 = *(int *)(param_2 + 8);
      iVar14 = iVar14 + 1;
      fVar21 = fVar22;
      fVar24 = fVar25;
    } while (iVar14 < iVar11);
  }
LAB_00101d30:
  msdfgen::Scanline::setIntersections((vector *)param_1);
  if ((void *)local_d8._0_8_ != (void *)0x0) {
    operator_delete((void *)local_d8._0_8_,(long)local_c8 - local_d8._0_8_);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* double msdfgen::estimateSDFErrorInner<3>(msdfgen::BitmapConstRef<float, 3> const&, msdfgen::Shape
   const&, msdfgen::Projection const&, int, msdfgen::FillRule) */

double msdfgen::estimateSDFErrorInner<3>
                 (BitmapConstRef *param_1,Scanline *param_2,Projection *param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_d0;
  int local_8c;
  void *local_88 [2];
  long local_78;
  void *local_68 [2];
  long local_58;
  long local_40;
  
  local_d0 = 0.0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < *(int *)(param_1 + 8)) {
    if ((*(int *)(param_1 + 0xc) < 2) || (param_4 < 1)) {
      local_d0 = 0.0;
    }
    else {
      dVar5 = _LC2 / (double)param_4;
      dVar2 = (double)msdfgen::Projection::unprojectX(_LC3);
      dVar3 = (double)msdfgen::Projection::unprojectX((double)*(int *)(param_1 + 8) - _LC3);
      dVar6 = _LC2 / (dVar3 - dVar2);
      msdfgen::Scanline::Scanline((Scanline *)local_88);
      msdfgen::Scanline::Scanline((Scanline *)local_68);
      local_8c = 0;
      local_d0 = 0.0;
      iVar1 = *(int *)(param_1 + 0xc) + -1;
      if (0 < iVar1) {
        do {
          iVar1 = 0;
          do {
            dVar4 = (double)iVar1;
            iVar1 = iVar1 + 1;
            dVar4 = (double)msdfgen::Projection::unprojectY
                                      ((dVar4 + _LC3) * dVar5 + (double)local_8c + _LC3);
            msdfgen::Shape::scanline(param_2,dVar4);
            scanlineMSDF<3>((Scanline *)local_68,param_1,param_3,dVar4,(bool)param_2[0x18]);
            dVar4 = (double)msdfgen::Scanline::overlap
                                      (dVar2,dVar3,(Scanline *)local_88,(Scanline *)local_68,param_5
                                      );
            local_d0 = (_LC2 - dVar4 * dVar6) + local_d0;
          } while (iVar1 < param_4);
          local_8c = local_8c + 1;
          iVar1 = *(int *)(param_1 + 0xc) + -1;
        } while (local_8c < iVar1);
      }
      if (local_68[0] != (void *)0x0) {
        operator_delete(local_68[0],local_58 - (long)local_68[0]);
      }
      if (local_88[0] != (void *)0x0) {
        operator_delete(local_88[0],local_78 - (long)local_88[0]);
      }
      local_d0 = local_d0 / (double)(param_4 * iVar1);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



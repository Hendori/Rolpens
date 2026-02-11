
/* GodotShape3D::get_support(Vector3 const&) const */

undefined1  [16] __thiscall GodotShape3D::get_support(GodotShape3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*(long *)this + 0x28))(this,param_1,1,&local_28,local_30,local_2c);
  auVar1._8_4_ = local_20;
  auVar1._0_8_ = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotWorldBoundaryShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&)
   const */

void GodotWorldBoundaryShape3D::project_range
               (Vector3 *param_1,Transform3D *param_2,float *param_3,float *param_4)

{
  undefined4 *in_R8;
  
  *param_4 = -1e+07;
  *in_R8 = 0x4b189680;
  return;
}



/* GodotWorldBoundaryShape3D::get_support(Vector3 const&) const */

undefined1  [16] __thiscall
GodotWorldBoundaryShape3D::get_support(GodotWorldBoundaryShape3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = _LC7._4_4_ * (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  auVar1._0_4_ = (float)_LC7 * (float)*(undefined8 *)param_1;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._8_4_ = (float)_LC7 * *(float *)(param_1 + 8);
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotWorldBoundaryShape3D::intersect_point(Vector3 const&) const */

bool __thiscall
GodotWorldBoundaryShape3D::intersect_point(GodotWorldBoundaryShape3D *this,Vector3 *param_1)

{
  return (*(float *)(this + 0x60) * *(float *)param_1 +
          *(float *)(this + 100) * *(float *)(param_1 + 4) +
         *(float *)(this + 0x68) * *(float *)(param_1 + 8)) - *(float *)(this + 0x6c) < 0.0;
}



/* GodotWorldBoundaryShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] __thiscall
GodotWorldBoundaryShape3D::get_closest_point_to(GodotWorldBoundaryShape3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 local_20;
  float local_18;
  
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar1 = *(float *)(this + 0x60) * *(float *)param_1 + fVar2 * fVar3 +
          *(float *)(this + 0x68) * *(float *)(param_1 + 8);
  if (fVar1 <= *(float *)(this + 0x6c)) {
    local_20 = *(undefined8 *)param_1;
    local_18 = *(float *)(param_1 + 8);
  }
  else {
    fVar1 = fVar1 - *(float *)(this + 0x6c);
    local_18 = *(float *)(param_1 + 8) - *(float *)(this + 0x68) * fVar1;
    local_20 = CONCAT44(fVar2 - fVar1 * fVar3,
                        (float)*(undefined8 *)param_1 - fVar1 * (float)*(undefined8 *)(this + 0x60))
    ;
  }
  auVar4._8_4_ = local_18;
  auVar4._0_8_ = local_20;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSeparationRayShape3D::get_moment_of_inertia(float) const */

undefined1  [16] GodotSeparationRayShape3D::get_moment_of_inertia(float param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSeparationRayShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&)
   const */

void GodotSeparationRayShape3D::project_range
               (Vector3 *param_1,Transform3D *param_2,float *param_3,float *param_4)

{
  undefined4 *in_R8;
  
  *param_4 = 0.0;
  *in_R8 = 0x3f800000;
  return;
}



/* GodotSeparationRayShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&,
   int&, bool) const */

undefined8
GodotSeparationRayShape3D::intersect_segment
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
          bool param_6)

{
  return 0;
}



/* GodotConcavePolygonShape3D::intersect_point(Vector3 const&) const */

undefined8 GodotConcavePolygonShape3D::intersect_point(Vector3 *param_1)

{
  return 0;
}



/* GodotSphereShape3D::get_support(Vector3 const&) const */

void GodotSphereShape3D::get_support(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSphereShape3D::get_supports(Vector3 const&, int, Vector3*, int&, GodotShape3D::FeatureType&)
   const */

void __thiscall
GodotSphereShape3D::get_supports
          (GodotSphereShape3D *this,Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,
          FeatureType *param_5)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = *(float *)(this + 0x60);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(param_3 + 8) = *(float *)(param_1 + 8) * fVar1;
  *(ulong *)param_3 = CONCAT44(fVar1 * (float)((ulong)uVar2 >> 0x20),fVar1 * (float)uVar2);
  *param_4 = 1;
  *(undefined4 *)param_5 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSphereShape3D::get_moment_of_inertia(float) const */

undefined1  [16] __thiscall
GodotSphereShape3D::get_moment_of_inertia(GodotSphereShape3D *this,float param_1)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)((double)param_1 * __LC10 * (double)*(float *)(this + 0x60) *
                        (double)*(float *)(this + 0x60));
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._4_4_ = auVar1._0_4_;
    auVar1._8_4_ = auVar1._0_4_;
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBoxShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void __thiscall
GodotBoxShape3D::project_range
          (GodotBoxShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,float *param_4
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar4 = fVar3 * *(float *)(param_2 + 0x24) + fVar1 * *(float *)(param_2 + 0x28) +
          fVar2 * *(float *)(param_2 + 0x2c);
  fVar3 = ABS(*(float *)param_2 * fVar3 + *(float *)(param_2 + 0xc) * fVar1 +
              *(float *)(param_2 + 0x18) * fVar2) * *(float *)(this + 0x60) +
          ABS(*(float *)(param_2 + 4) * fVar3 + *(float *)(param_2 + 0x10) * fVar1 +
              *(float *)(param_2 + 0x1c) * fVar2) * *(float *)(this + 100) +
          ABS(*(float *)(param_2 + 8) * fVar3 + *(float *)(param_2 + 0x14) * fVar1 +
              *(float *)(param_2 + 0x20) * fVar2) * *(float *)(this + 0x68);
  *param_3 = fVar4 - fVar3;
  *param_4 = fVar4 + fVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotBoxShape3D::get_support(Vector3 const&) const */

void GodotBoxShape3D::get_support(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotBoxShape3D::get_supports(Vector3 const&, int, Vector3*, int&, GodotShape3D::FeatureType&)
   const */

void __thiscall
GodotBoxShape3D::get_supports
          (GodotBoxShape3D *this,Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,
          FeatureType *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  float fVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  Vector3 *pVVar12;
  long in_FS_OFFSET;
  float fVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 local_38;
  uint local_30;
  float local_28 [3];
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  fVar8 = (float)_LC9;
  dVar7 = _LC12;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = 0;
  fVar3 = *(float *)(param_1 + 8);
  do {
    local_28[0] = 0.0;
    local_28[1] = 0.0;
    local_28[2] = 0.0;
    local_28[lVar10] = fVar8;
    fVar13 = local_28[1] * fVar2 + local_28[0] * fVar1 + local_28[2] * fVar3;
    if (dVar7 < (double)ABS(fVar13)) {
      lVar10 = (long)(int)lVar10;
      *param_4 = 4;
      uVar14 = _LC51;
      uVar17 = _LC13._4_4_;
      uVar15 = (uint)_LC13;
      local_38 = 0;
      pfVar11 = (float *)&get_supports(Vector3_const&,int,Vector3*,int&,GodotShape3D::FeatureType&)
                          ::sign;
      local_30 = 0;
      iVar5 = (&get_supports(Vector3_const&,int,Vector3*,int&,GodotShape3D::FeatureType&)::next)
              [lVar10];
      *(undefined4 *)((long)&local_38 + lVar10 * 4) = *(undefined4 *)(this + lVar10 * 4 + 0x60);
      iVar9 = (&get_supports(Vector3_const&,int,Vector3*,int&,GodotShape3D::FeatureType&)::next2)
              [lVar10];
      *(undefined4 *)param_5 = 2;
      pVVar12 = param_3 + 8;
      do {
        *(float *)((long)&local_38 + (long)iVar5 * 4) =
             *(float *)(this + (long)iVar5 * 4 + 0x60) * *pfVar11;
        *(float *)((long)&local_38 + (long)iVar9 * 4) =
             pfVar11[1] * *(float *)(this + (long)iVar9 * 4 + 0x60);
        uVar16 = local_38;
        uVar6 = local_30;
        if (fVar13 < 0.0) {
          uVar16 = CONCAT44((uint)((ulong)local_38 >> 0x20) ^ uVar17,(uint)local_38 ^ uVar15);
          uVar6 = local_30 ^ uVar14;
        }
        pfVar11 = pfVar11 + 2;
        *(undefined8 *)(pVVar12 + -8) = uVar16;
        *(uint *)pVVar12 = uVar6;
        pVVar12 = pVVar12 + 0xc;
      } while (pfVar11 !=
               (float *)&get_supports(Vector3_const&,int,Vector3*,int&,GodotShape3D::FeatureType&)::
                         next2);
      if (fVar13 < 0.0) {
        uVar16 = *(undefined8 *)(param_3 + 0xc);
        uVar4 = *(undefined4 *)(param_3 + 0x14);
        *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)(param_3 + 0x18) = uVar16;
        local_1c = *(undefined8 *)param_3;
        *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(param_3 + 0x20) = uVar4;
        local_14 = *(undefined4 *)(param_3 + 8);
        *(undefined8 *)param_3 = *(undefined8 *)(param_3 + 0x24);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 0x2c);
        *(undefined8 *)(param_3 + 0x24) = local_1c;
        *(undefined4 *)(param_3 + 0x2c) = local_14;
      }
      goto LAB_0010066c;
    }
    lVar10 = lVar10 + 1;
    *param_4 = 0;
  } while (lVar10 != 3);
  lVar10 = 0;
  do {
    local_28[0] = 0.0;
    local_28[1] = 0.0;
    local_28[2] = 0.0;
    local_28[lVar10] = fVar8;
    if ((double)ABS(local_28[0] * fVar1 + local_28[1] * fVar2 + local_28[2] * fVar3) <
        edge_support_threshold_lower) {
      *param_4 = 2;
      iVar9 = (int)lVar10;
      *(undefined4 *)param_5 = 1;
      uVar15 = _LC51;
      iVar5 = (&get_supports(Vector3_const&,int,Vector3*,int&,GodotShape3D::FeatureType&)::next2)
              [iVar9];
      local_1c = *(undefined8 *)(this + 0x60);
      local_14 = *(undefined4 *)(this + 0x68);
      lVar10 = (long)(int)(&get_supports(Vector3_const&,int,Vector3*,int&,GodotShape3D::FeatureType&)
                            ::next)[iVar9];
      if (*(float *)(param_1 + lVar10 * 4) <= 0.0 && *(float *)(param_1 + lVar10 * 4) != 0.0) {
        *(uint *)((long)&local_1c + lVar10 * 4) = *(uint *)((long)&local_1c + lVar10 * 4) ^ _LC51;
      }
      lVar10 = (long)iVar5;
      if (*(float *)(param_1 + lVar10 * 4) <= 0.0 && *(float *)(param_1 + lVar10 * 4) != 0.0) {
        *(uint *)((long)&local_1c + lVar10 * 4) = *(uint *)((long)&local_1c + lVar10 * 4) ^ _LC51;
      }
      *(undefined8 *)param_3 = local_1c;
      *(undefined4 *)(param_3 + 8) = local_14;
      *(uint *)((long)&local_1c + (long)iVar9 * 4) =
           *(uint *)((long)&local_1c + (long)iVar9 * 4) ^ uVar15;
      *(undefined8 *)(param_3 + 0xc) = local_1c;
      *(undefined4 *)(param_3 + 0x14) = local_14;
      goto LAB_0010066c;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  uVar15 = *(uint *)(this + 0x68);
  if (fVar3 < 0.0) {
    uVar15 = uVar15 ^ _LC51;
    uVar17 = *(uint *)(this + 100);
  }
  else {
    uVar17 = *(uint *)(this + 100);
  }
  if (fVar2 < 0.0) {
    uVar17 = uVar17 ^ _LC51;
    uVar14 = *(uint *)(this + 0x60);
  }
  else {
    uVar14 = *(uint *)(this + 0x60);
  }
  if (fVar1 < 0.0) {
    uVar14 = uVar14 ^ _LC51;
  }
  *param_4 = 1;
  *(undefined4 *)param_5 = 0;
  *(ulong *)param_3 = CONCAT44(uVar17,uVar14);
  *(uint *)(param_3 + 8) = uVar15;
LAB_0010066c:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotBoxShape3D::intersect_point(Vector3 const&) const */

undefined4 __thiscall GodotBoxShape3D::intersect_point(GodotBoxShape3D *this,Vector3 *param_1)

{
  if ((ABS(*(float *)param_1) < *(float *)(this + 0x60)) &&
     (ABS(*(float *)(param_1 + 4)) < *(float *)(this + 100))) {
    return CONCAT31((int3)((uint)ABS(*(float *)(param_1 + 8)) >> 8),
                    ABS(*(float *)(param_1 + 8)) < *(float *)(this + 0x68));
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotBoxShape3D::get_moment_of_inertia(float) const */

void __thiscall GodotBoxShape3D::get_moment_of_inertia(GodotBoxShape3D *this,float param_1)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)*(undefined8 *)(this + 0x60);
  fVar1 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar2 = *(float *)(this + 0x68) * *(float *)(this + 0x68);
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(CONCAT44((float)((double)(fVar3 * fVar3 + fVar2) * ((double)param_1 / __LC14)),
                            (float)((double)(fVar1 * fVar1 + fVar2) * ((double)param_1 / __LC14))));
}



/* GodotCapsuleShape3D::get_support(Vector3 const&) const */

void GodotCapsuleShape3D::get_support(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotCylinderShape3D::get_moment_of_inertia(float) const */

void GodotCylinderShape3D::get_moment_of_inertia(float param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConvexPolygonShape3D::intersect_point(Vector3 const&) const */

undefined8 __thiscall
GodotConvexPolygonShape3D::intersect_point(GodotConvexPolygonShape3D *this,Vector3 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar2 = *(float **)(this + 0x68);
  if (0 < *(int *)(this + 0x60)) {
    pfVar1 = pfVar2 + (ulong)(*(int *)(this + 0x60) - 1) * 8 + 8;
    do {
      if (0.0 <= (*pfVar2 * *(float *)param_1 + pfVar2[1] * *(float *)(param_1 + 4) +
                 pfVar2[2] * *(float *)(param_1 + 8)) - pfVar2[3]) {
        return 0;
      }
      pfVar2 = pfVar2 + 8;
    } while (pfVar1 != pfVar2);
  }
  return 1;
}



/* GodotFaceShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void __thiscall
GodotFaceShape3D::project_range
          (GodotFaceShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  GodotFaceShape3D *pGVar4;
  float fVar5;
  
  pGVar4 = this + 0x6c;
  iVar3 = 0;
  while( true ) {
    while( true ) {
      fVar5 = *(float *)pGVar4;
      fVar1 = *(float *)(pGVar4 + 4);
      fVar2 = *(float *)(pGVar4 + 8);
      fVar5 = (*(float *)param_2 * fVar5 + *(float *)(param_2 + 4) * fVar1 +
               *(float *)(param_2 + 8) * fVar2 + *(float *)(param_2 + 0x24)) * *(float *)param_1 +
              (*(float *)(param_2 + 0xc) * fVar5 + *(float *)(param_2 + 0x10) * fVar1 +
               *(float *)(param_2 + 0x14) * fVar2 + *(float *)(param_2 + 0x28)) *
              *(float *)(param_1 + 4) +
              (fVar5 * *(float *)(param_2 + 0x18) + fVar1 * *(float *)(param_2 + 0x1c) +
               fVar2 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x2c)) *
              *(float *)(param_1 + 8);
      if (iVar3 != 0) break;
      *param_4 = fVar5;
      pGVar4 = pGVar4 + 0xc;
      iVar3 = 1;
      *param_3 = fVar5;
    }
    if (*param_4 <= fVar5 && fVar5 != *param_4) {
      *param_4 = fVar5;
    }
    if (fVar5 < *param_3) {
      *param_3 = fVar5;
    }
    if (iVar3 == 2) break;
    pGVar4 = pGVar4 + 0xc;
    iVar3 = 2;
  }
  return;
}



/* GodotFaceShape3D::get_support(Vector3 const&) const */

void __thiscall GodotFaceShape3D::get_support(GodotFaceShape3D *this,Vector3 *param_1)

{
  GodotFaceShape3D *pGVar1;
  int iVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  
  iVar2 = 0;
  pGVar1 = this + 0x6c;
  fVar4 = 0.0;
  while( true ) {
    while (fVar3 = *(float *)pGVar1 * *(float *)param_1 +
                   *(float *)(pGVar1 + 4) * *(float *)(param_1 + 4) +
                   *(float *)(pGVar1 + 8) * *(float *)(param_1 + 8), iVar2 == 0) {
      pGVar1 = pGVar1 + 0xc;
      fVar4 = fVar3;
      iVar2 = 1;
    }
    if (fVar4 < fVar3) {
      fVar4 = fVar3;
    }
    if (iVar2 == 2) break;
    pGVar1 = pGVar1 + 0xc;
    iVar2 = 2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConcavePolygonShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&)
   const */

void __thiscall
GodotConcavePolygonShape3D::project_range
          (GodotConcavePolygonShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  
  pfVar5 = *(float **)(this + 0x78);
  if ((pfVar5 == (float *)0x0) || (iVar3 = (int)*(undefined8 *)(pfVar5 + -2), iVar3 == 0)) {
    *param_3 = 0.0;
    *param_4 = 0.0;
    return;
  }
  iVar4 = 0;
  if (iVar3 < 1) {
    return;
  }
  do {
    fVar6 = *pfVar5;
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar6 = (*(float *)param_2 * fVar6 + *(float *)(param_2 + 4) * fVar1 +
             *(float *)(param_2 + 8) * fVar2 + *(float *)(param_2 + 0x24)) * *(float *)param_1 +
            (*(float *)(param_2 + 0xc) * fVar6 + *(float *)(param_2 + 0x10) * fVar1 +
             *(float *)(param_2 + 0x14) * fVar2 + *(float *)(param_2 + 0x28)) *
            *(float *)(param_1 + 4) +
            (fVar6 * *(float *)(param_2 + 0x18) + fVar1 * *(float *)(param_2 + 0x1c) +
             fVar2 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x2c)) *
            *(float *)(param_1 + 8);
    if (iVar4 == 0) {
      *param_4 = fVar6;
LAB_00100d7c:
      *param_3 = fVar6;
    }
    else {
      if (*param_4 <= fVar6 && fVar6 != *param_4) {
        *param_4 = fVar6;
      }
      if (fVar6 < *param_3) goto LAB_00100d7c;
    }
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 3;
    if (iVar3 == iVar4) {
      return;
    }
  } while( true );
}



/* GodotConcavePolygonShape3D::get_support(Vector3 const&) const */

undefined1  [16] __thiscall
GodotConcavePolygonShape3D::get_support(GodotConcavePolygonShape3D *this,Vector3 *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  pfVar1 = *(float **)(this + 0x78);
  if ((pfVar1 == (float *)0x0) || (iVar2 = (int)*(undefined8 *)(pfVar1 + -2), iVar2 == 0)) {
    local_1c = 0;
    local_14 = 0;
  }
  else {
    if (iVar2 < 1) {
      lVar4 = -0xc;
    }
    else {
      iVar6 = 0;
      iVar5 = -1;
      pfVar3 = pfVar1;
      fVar8 = 0.0;
      do {
        while (fVar7 = pfVar3[1] * *(float *)(param_1 + 4) + *pfVar3 * *(float *)param_1 +
                       pfVar3[2] * *(float *)(param_1 + 8), iVar6 == 0) {
          iVar6 = 1;
          iVar5 = 0;
          pfVar3 = pfVar3 + 3;
          fVar8 = fVar7;
          if (iVar2 == 1) goto LAB_00100efe;
        }
        if (fVar8 < fVar7) {
          iVar5 = iVar6;
          fVar8 = fVar7;
        }
        iVar6 = iVar6 + 1;
        pfVar3 = pfVar3 + 3;
      } while (iVar6 != iVar2);
LAB_00100efe:
      lVar4 = (long)iVar5 * 0xc;
    }
    local_1c = *(undefined8 *)((long)pfVar1 + lVar4);
    local_14 = *(undefined4 *)((long)pfVar1 + lVar4 + 8);
  }
  auVar9._8_4_ = local_14;
  auVar9._0_8_ = local_1c;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar9._12_4_ = 0;
    return auVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotHeightMapShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] GodotHeightMapShape3D::get_closest_point_to(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotHeightMapShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void __thiscall
GodotHeightMapShape3D::project_range
          (GodotHeightMapShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,
          float *param_4)

{
  long lVar1;
  Transform3D *pTVar2;
  long lVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  undefined4 local_3c;
  float local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[0] = 0.0;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_38[5] = 0.0;
  local_50 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20),
                      (float)*(undefined8 *)(this + 0x1c) + (float)*(undefined8 *)(this + 0x10));
  local_48 = *(float *)(this + 0x18) + *(float *)(this + 0x24);
  local_44 = *(undefined8 *)(this + 0x10);
  local_3c = *(undefined4 *)(this + 0x18);
  lVar3 = 0;
  pTVar2 = param_2;
  do {
    fVar7 = *(float *)(param_2 + lVar3 + 0x24);
    lVar1 = 0;
    fVar5 = fVar7;
    do {
      fVar6 = *(float *)((long)&local_44 + lVar1) * *(float *)(pTVar2 + lVar1);
      fVar4 = *(float *)(pTVar2 + lVar1) * *(float *)((long)&local_50 + lVar1);
      fVar8 = fVar6;
      if (fVar6 < fVar4) {
        fVar8 = fVar4;
        fVar4 = fVar6;
      }
      fVar5 = fVar5 + fVar4;
      fVar7 = fVar7 + fVar8;
      lVar1 = lVar1 + 4;
    } while (lVar1 != 0xc);
    *(float *)((long)local_38 + lVar3 + 0xc) = fVar7;
    pTVar2 = pTVar2 + 0xc;
    *(float *)((long)local_38 + lVar3) = fVar5;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xc);
  fVar4 = (local_38[4] - local_38[1]) * _LC16;
  fVar7 = (local_38[3] - local_38[0]) * _LC16;
  fVar8 = (local_38[5] - local_38[2]) * _LC16;
  fVar5 = (fVar7 + local_38[0]) * *(float *)param_1 +
          (local_38[1] + fVar4) * *(float *)(param_1 + 4) +
          (local_38[2] + fVar8) * *(float *)(param_1 + 8);
  fVar7 = ABS(*(float *)param_1) * fVar7 + ABS(*(float *)(param_1 + 4)) * fVar4 +
          ABS(*(float *)(param_1 + 8)) * fVar8;
  *param_3 = fVar5 - fVar7;
  *param_4 = fVar7 + fVar5;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotHeightMapShape3D::get_support(Vector3 const&) const */

void __thiscall GodotHeightMapShape3D::get_support(GodotHeightMapShape3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  float fVar1;
  
  fVar1 = *(float *)(this + 0x10);
  if (0.0 < *(float *)param_1) {
    fVar1 = fVar1 + *(float *)(this + 0x1c);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* GodotWorldBoundaryShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&,
   int&, bool) const */

void GodotWorldBoundaryShape3D::intersect_segment
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
               bool param_6)

{
  char cVar1;
  
  cVar1 = Plane::intersects_segment(param_1 + 0x60,param_2,param_3);
  if (cVar1 != '\0') {
    *(undefined8 *)param_5 = *(undefined8 *)(param_1 + 0x60);
    param_5[2] = *(int *)(param_1 + 0x68);
  }
  return;
}



/* GodotWorldBoundaryShape3D::get_data() const */

void GodotWorldBoundaryShape3D::get_data(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Plane *)(in_RSI + 0x60));
  return;
}



/* GodotSphereShape3D::get_data() const */

void GodotSphereShape3D::get_data(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,*(float *)(in_RSI + 0x60));
  return;
}



/* GodotCylinderShape3D::get_support(Vector3 const&) const */

void GodotCylinderShape3D::get_support(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSphereShape3D::intersect_point(Vector3 const&) const */

bool __thiscall GodotSphereShape3D::intersect_point(GodotSphereShape3D *this,Vector3 *param_1)

{
  return SQRT(*(float *)param_1 * *(float *)param_1 +
              *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
              *(float *)(param_1 + 8) * *(float *)(param_1 + 8)) < *(float *)(this + 0x60);
}



/* GodotSphereShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] __thiscall
GodotSphereShape3D::get_closest_point_to(GodotSphereShape3D *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long in_FS_OFFSET;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_20;
  float local_18;
  
  uVar3 = *(ulong *)param_1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar3;
  fVar1 = *(float *)(param_1 + 8);
  fVar5 = (float)(uVar3 >> 0x20);
  fVar2 = *(float *)(this + 0x60);
  fVar5 = SQRT((float)uVar3 * (float)uVar3 + fVar5 * fVar5 + fVar1 * fVar1);
  if (fVar2 <= fVar5) {
    auVar4._4_4_ = fVar5;
    auVar4._0_4_ = fVar5;
    auVar4._8_4_ = (int)_LC9;
    auVar4._12_4_ = (int)((ulong)_LC9 >> 0x20);
    auVar6 = divps(auVar6,auVar4);
    local_18 = (fVar1 / fVar5) * fVar2;
    local_20 = CONCAT44(auVar6._4_4_ * fVar2,auVar6._0_4_ * fVar2);
  }
  else {
    local_20 = *(undefined8 *)param_1;
    local_18 = *(float *)(param_1 + 8);
  }
  auVar7._8_4_ = local_18;
  auVar7._0_8_ = local_20;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCapsuleShape3D::intersect_point(Vector3 const&) const */

undefined4 __thiscall
GodotCapsuleShape3D::intersect_point(GodotCapsuleShape3D *this,Vector3 *param_1)

{
  float fVar1;
  undefined3 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(this + 100);
  fVar5 = *(float *)param_1 * *(float *)param_1;
  dVar4 = (double)ABS(*(float *)(param_1 + 4));
  fVar6 = *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  uVar2 = (undefined3)((uint)ABS(*(float *)(param_1 + 4)) >> 8);
  if (dVar4 < (double)*(float *)(this + 0x60) * _LC15 - (double)fVar1) {
    return CONCAT31(uVar2,SQRT(fVar5 + 0.0 + fVar6) < fVar1);
  }
  fVar3 = (float)((dVar4 - (double)*(float *)(this + 0x60) * _LC15) + (double)fVar1);
  return CONCAT31(uVar2,SQRT(fVar3 * fVar3 + fVar5 + fVar6) < fVar1);
}



/* GodotCapsuleShape3D::get_supports(Vector3 const&, int, Vector3*, int&,
   GodotShape3D::FeatureType&) const */

void __thiscall
GodotCapsuleShape3D::get_supports
          (GodotCapsuleShape3D *this,Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,
          FeatureType *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(this + 100);
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  fVar2 = (float)((double)*(float *)(this + 0x60) * _LC15 - (double)fVar1);
  if ((0.0 < fVar2) && ((double)ABS(fVar4) < edge_support_threshold_lower)) {
    fVar4 = fVar3 * fVar3 + 0.0 + fVar6 * fVar6;
    if (fVar4 == 0.0) {
      fVar6 = 0.0;
      fVar3 = 0.0;
      fVar5 = 0.0;
    }
    else {
      fVar4 = SQRT(fVar4);
      fVar3 = fVar3 / fVar4;
      fVar5 = 0.0 / fVar4;
      fVar6 = fVar6 / fVar4;
    }
    *param_4 = 2;
    *(undefined4 *)param_5 = 1;
    *(ulong *)(param_3 + 0x10) = CONCAT44(fVar1 * fVar6,fVar5 * fVar1 - fVar2);
    *(float *)param_3 = fVar3 * fVar1;
    *(float *)(param_3 + 4) = fVar2 + fVar5 * fVar1;
    *(float *)(param_3 + 8) = fVar1 * fVar6;
    *(float *)(param_3 + 0xc) = fVar3 * fVar1;
    return;
  }
  if (fVar4 <= 0.0) {
    fVar2 = (float)((uint)fVar2 ^ _LC51);
  }
  *param_4 = 1;
  *(undefined4 *)param_5 = 0;
  *(float *)(param_3 + 8) = fVar1 * fVar6;
  *(ulong *)param_3 = CONCAT44(fVar2 + fVar1 * fVar4,fVar3 * fVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotCylinderShape3D::get_supports(Vector3 const&, int, Vector3*, int&,
   GodotShape3D::FeatureType&) const */

void __thiscall
GodotCylinderShape3D::get_supports
          (GodotCylinderShape3D *this,Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,
          FeatureType *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  
  dVar4 = (double)ABS(*(float *)(param_1 + 4));
  if (__LC32 < dVar4) {
    fVar2 = *(float *)(this + 0x60);
    if (*(float *)(param_1 + 4) <= 0.0) {
      fVar2 = (float)((uint)fVar2 ^ _LC51);
    }
    fVar2 = fVar2 * _LC16;
    fVar6 = *(float *)(this + 100);
    *param_4 = 3;
    *(undefined4 *)param_5 = 3;
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x14) = 0;
    *(float *)(param_3 + 4) = fVar2;
    *(float *)(param_3 + 0x10) = fVar2;
    *(float *)(param_3 + 0xc) = fVar6 + 0.0;
    *(float *)(param_3 + 0x1c) = fVar2;
    *(float *)(param_3 + 0x20) = fVar6 + 0.0;
    return;
  }
  if (cylinder_edge_support_threshold_lower <= dVar4) {
    lVar1 = *(long *)this;
    *param_4 = 1;
    *(undefined4 *)param_5 = 0;
    auVar7 = (**(code **)(lVar1 + 0x20))();
    *(undefined1 (*) [12])param_3 = auVar7;
    return;
  }
  fVar2 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 8);
  fVar5 = fVar2 * fVar2 + 0.0 + fVar6 * fVar6;
  if (fVar5 == 0.0) {
    fVar6 = 0.0;
    fVar3 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar5 = SQRT(fVar5);
    fVar2 = fVar2 / fVar5;
    fVar3 = 0.0 / fVar5;
    fVar6 = fVar6 / fVar5;
  }
  fVar5 = *(float *)(this + 100);
  *param_4 = 2;
  *(undefined4 *)param_5 = 1;
  dVar4 = (double)*(float *)(this + 0x60) * _LC15;
  *(ulong *)(param_3 + 0x10) = CONCAT44(fVar6 * fVar5,(float)((double)(fVar3 * fVar5) - dVar4));
  *(ulong *)param_3 = CONCAT44((float)((double)(fVar3 * fVar5) + dVar4),fVar2 * fVar5);
  *(ulong *)(param_3 + 8) = CONCAT44(fVar2 * fVar5,fVar6 * fVar5);
  return;
}



/* GodotSphereShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void __thiscall
GodotSphereShape3D::project_range
          (GodotSphereShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_2 + 0x24) * fVar3 + *(float *)(param_2 + 0x28) * fVar1 +
          *(float *)(param_2 + 0x2c) * fVar2;
  fVar4 = *(float *)(param_2 + 8) * fVar3 + *(float *)(param_2 + 0x14) * fVar1 +
          *(float *)(param_2 + 0x20) * fVar2;
  fVar5 = *(float *)(param_2 + 4) * fVar3 + *(float *)(param_2 + 0x10) * fVar1 +
          *(float *)(param_2 + 0x1c) * fVar2;
  fVar3 = fVar3 * *(float *)param_2 + fVar1 * *(float *)(param_2 + 0xc) +
          fVar2 * *(float *)(param_2 + 0x18);
  fVar3 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  *param_3 = fVar6 - *(float *)(this + 0x60) * fVar3;
  *param_4 = fVar3 * *(float *)(this + 0x60) + fVar6;
  return;
}



/* GodotCapsuleShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void __thiscall
GodotCapsuleShape3D::project_range
          (GodotCapsuleShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,
          float *param_4)

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
  float local_c;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(this + 100);
  fVar5 = *(float *)(param_2 + 8) * fVar1 + *(float *)(param_2 + 0x14) * fVar2 +
          *(float *)(param_2 + 0x20) * fVar3;
  fVar4 = fVar1 * *(float *)(param_2 + 4) + fVar2 * *(float *)(param_2 + 0x10) +
          fVar3 * *(float *)(param_2 + 0x1c);
  fVar7 = fVar1 * *(float *)param_2 + fVar2 * *(float *)(param_2 + 0xc) +
          fVar3 * *(float *)(param_2 + 0x18);
  fVar9 = fVar4 * fVar4 + fVar7 * fVar7 + fVar5 * fVar5;
  local_c = (float)((double)*(float *)(this + 0x60) * _LC15 - (double)fVar6);
  if (fVar9 == 0.0) {
    fVar8 = fVar6 * 0.0;
    fVar6 = fVar8;
    fVar4 = fVar8;
  }
  else {
    fVar9 = SQRT(fVar9);
    fVar8 = (fVar4 / fVar9) * fVar6;
    fVar4 = (fVar7 / fVar9) * fVar6;
    fVar6 = (fVar5 / fVar9) * fVar6;
    if (0.0 < fVar8) goto LAB_00101a45;
  }
  local_c = (float)((uint)local_c ^ _LC51);
LAB_00101a45:
  fVar8 = fVar8 + local_c;
  fVar5 = (float)((uint)fVar8 ^ _LC51);
  fVar7 = (float)((uint)fVar6 ^ _LC51);
  fVar9 = (float)(_LC51 ^ (uint)fVar4);
  *param_4 = (*(float *)param_2 * fVar4 + *(float *)(param_2 + 4) * fVar8 +
              *(float *)(param_2 + 8) * fVar6 + *(float *)(param_2 + 0x24)) * fVar1 +
             (*(float *)(param_2 + 0xc) * fVar4 + *(float *)(param_2 + 0x10) * fVar8 +
              *(float *)(param_2 + 0x14) * fVar6 + *(float *)(param_2 + 0x28)) * fVar2 +
             (*(float *)(param_2 + 0x18) * fVar4 + *(float *)(param_2 + 0x1c) * fVar8 +
              *(float *)(param_2 + 0x20) * fVar6 + *(float *)(param_2 + 0x2c)) * fVar3;
  *param_3 = (*(float *)param_2 * fVar9 + *(float *)(param_2 + 4) * fVar5 +
              *(float *)(param_2 + 8) * fVar7 + *(float *)(param_2 + 0x24)) * *(float *)param_1 +
             (*(float *)(param_2 + 0xc) * fVar9 + *(float *)(param_2 + 0x10) * fVar5 +
              *(float *)(param_2 + 0x14) * fVar7 + *(float *)(param_2 + 0x28)) *
             *(float *)(param_1 + 4) +
             (fVar9 * *(float *)(param_2 + 0x18) + fVar5 * *(float *)(param_2 + 0x1c) +
              fVar7 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x2c)) *
             *(float *)(param_1 + 8);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotFaceShape3D::get_supports(Vector3 const&, int, Vector3*, int&, GodotShape3D::FeatureType&)
   const */

void __thiscall
GodotFaceShape3D::get_supports
          (GodotFaceShape3D *this,Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,
          FeatureType *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  GodotFaceShape3D *pGVar7;
  uint uVar8;
  long lVar9;
  GodotFaceShape3D *pGVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  if (_LC12 < (double)ABS(*(float *)(this + 0x60) * fVar1 + *(float *)(this + 100) * fVar2 +
                          *(float *)(this + 0x68) * fVar3)) {
    uVar4 = *(undefined8 *)(this + 0x6c);
    *param_4 = 3;
    *(undefined4 *)param_5 = 2;
    *(undefined8 *)param_3 = uVar4;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x74);
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(this + 0x78);
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(this + 0x80);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(this + 0x84);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(this + 0x8c);
    return;
  }
  pGVar10 = this + 0x6c;
  lVar6 = 0;
  lVar9 = -1;
  pGVar7 = pGVar10;
  fVar12 = 0.0;
  while( true ) {
    while( true ) {
      fVar11 = *(float *)pGVar7 * fVar1 + *(float *)(pGVar7 + 4) * fVar2 +
               *(float *)(pGVar7 + 8) * fVar3;
      if ((int)lVar6 != 0) break;
      pGVar7 = pGVar7 + 0xc;
      lVar9 = 0;
      lVar6 = 1;
      fVar12 = fVar11;
    }
    if (fVar12 < fVar11) {
      lVar9 = lVar6;
      fVar12 = fVar11;
    }
    if ((int)lVar6 == 2) break;
    pGVar7 = pGVar7 + 0xc;
    lVar6 = 2;
  }
  uVar8 = 0;
  do {
    uVar5 = uVar8 + 1;
    if ((uVar8 == (uint)lVar9) || (uVar5 % 3 == (uint)lVar9)) {
      lVar6 = (long)(int)(uVar5 % 3);
      fVar14 = *(float *)(pGVar10 + 4) - *(float *)(this + lVar6 * 0xc + 0x70);
      fVar12 = *(float *)pGVar10 - *(float *)(this + lVar6 * 0xc + 0x6c);
      fVar13 = *(float *)(pGVar10 + 8) - *(float *)(this + lVar6 * 0xc + 0x74);
      fVar11 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
      if (fVar11 == 0.0) {
        fVar12 = fVar2 * 0.0 + fVar1 * 0.0 + fVar3 * 0.0;
      }
      else {
        fVar11 = SQRT(fVar11);
        fVar12 = (fVar12 / fVar11) * fVar1 + (fVar14 / fVar11) * fVar2 + (fVar13 / fVar11) * fVar3;
        if (fVar12 < 0.0) {
          fVar12 = (float)((uint)fVar12 ^ _LC51);
        }
      }
      if ((double)fVar12 < edge_support_threshold_lower) {
        *param_4 = 2;
        *(undefined4 *)param_5 = 1;
        *(undefined8 *)param_3 = *(undefined8 *)(this + (long)(int)uVar8 * 0xc + 0x6c);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + (long)(int)uVar8 * 0xc + 0x74);
        *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(this + lVar6 * 0xc + 0x6c);
        *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(this + lVar6 * 0xc + 0x74);
        return;
      }
    }
    pGVar10 = pGVar10 + 0xc;
    uVar8 = uVar5;
    if (uVar5 == 3) {
      *param_4 = 1;
      *(undefined4 *)param_5 = 0;
      *(undefined8 *)param_3 = *(undefined8 *)(this + lVar9 * 0xc + 0x6c);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + lVar9 * 0xc + 0x74);
      return;
    }
  } while( true );
}



/* GodotConvexPolygonShape3D::get_supports(Vector3 const&, int, Vector3*, int&,
   GodotShape3D::FeatureType&) const */

undefined1  [16] __thiscall
GodotConvexPolygonShape3D::get_supports
          (GodotConvexPolygonShape3D *this,Vector3 *param_1,int param_2,Vector3 *param_3,
          int *param_4,FeatureType *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uStack_50;
  
  iVar1 = *(int *)(this + 0x80);
  pfVar12 = *(float **)(this + 0x68);
  iVar2 = *(int *)(this + 0x60);
  piVar10 = *(int **)(this + 0x78);
  iVar3 = *(int *)(this + 0x70);
  pfVar4 = *(float **)(this + 0x88);
  *param_4 = 0;
  if (iVar1 == 0) {
    _err_print_error("get_supports","modules/godot_physics_3d/godot_shape_3d.cpp",0x397,
                     "Condition \"vc == 0\" is true.","Convex polygon shape has no vertices.",0);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack_50;
    return auVar6 << 0x40;
  }
  if (iVar1 < 1) {
    iVar11 = 0;
  }
  else {
    iVar13 = 0;
    iVar11 = 0;
    pfVar7 = pfVar4;
    fVar16 = 0.0;
    do {
      while (fVar15 = pfVar7[1] * *(float *)(param_1 + 4) + *pfVar7 * *(float *)param_1 +
                      pfVar7[2] * *(float *)(param_1 + 8), iVar13 == 0) {
        iVar13 = 1;
        iVar11 = 0;
        pfVar7 = pfVar7 + 3;
        fVar16 = fVar15;
        if (iVar1 == 1) goto LAB_00101ebe;
      }
      if (fVar16 < fVar15) {
        iVar11 = iVar13;
        fVar16 = fVar15;
      }
      iVar13 = iVar13 + 1;
      pfVar7 = pfVar7 + 3;
    } while (iVar1 != iVar13);
  }
LAB_00101ebe:
  if (0 < iVar2) {
    pfVar7 = pfVar12 + (ulong)(iVar2 - 1) * 8 + 8;
    do {
      if (_LC12 < (double)(*pfVar12 * *(float *)param_1 + pfVar12[1] * *(float *)(param_1 + 4) +
                          pfVar12[2] * *(float *)(param_1 + 8))) {
        fVar16 = pfVar12[4];
        piVar14 = *(int **)(pfVar12 + 6);
        if (0 < (int)fVar16) {
          piVar8 = piVar14;
          do {
            if (*piVar8 == iVar11) {
              if (param_2 < (int)fVar16) {
                fVar16 = (float)param_2;
              }
              uVar9 = (ulong)(int)fVar16;
              piVar10 = piVar14 + uVar9;
              if (0 < (int)fVar16) {
                do {
                  iVar1 = *piVar14;
                  piVar14 = piVar14 + 1;
                  pfVar12 = *(float **)(pfVar4 + (long)iVar1 * 3);
                  *(float **)param_3 = pfVar12;
                  fVar15 = (pfVar4 + (long)iVar1 * 3)[2];
                  uVar9 = (ulong)(uint)fVar15;
                  *(float *)(param_3 + 8) = fVar15;
                  param_3 = param_3 + 0xc;
                } while (piVar14 != piVar10);
              }
              *param_4 = (int)fVar16;
              *(undefined4 *)param_5 = 2;
              auVar19._8_8_ = pfVar12;
              auVar19._0_8_ = uVar9;
              return auVar19;
            }
            piVar8 = piVar8 + 1;
          } while (piVar14 + (ulong)((int)fVar16 - 1) + 1 != piVar8);
        }
      }
      pfVar12 = pfVar12 + 8;
    } while (pfVar7 != pfVar12);
  }
  if (0 < iVar3) {
    piVar14 = piVar10 + (ulong)(iVar3 - 1) * 4 + 4;
    do {
      pfVar12 = pfVar4 + (long)piVar10[1] * 3;
      pfVar7 = pfVar4 + (long)*piVar10 * 3;
      fVar18 = pfVar7[1] - pfVar12[1];
      fVar16 = *pfVar7 - *pfVar12;
      fVar17 = pfVar7[2] - pfVar12[2];
      fVar15 = fVar16 * fVar16 + fVar18 * fVar18 + fVar17 * fVar17;
      if (fVar15 == 0.0) {
        fVar16 = *(float *)(param_1 + 4) * 0.0 + *(float *)param_1 * 0.0 +
                 *(float *)(param_1 + 8) * 0.0;
      }
      else {
        fVar15 = SQRT(fVar15);
        fVar16 = (fVar16 / fVar15) * *(float *)param_1 + (fVar18 / fVar15) * *(float *)(param_1 + 4)
                 + (fVar17 / fVar15) * *(float *)(param_1 + 8);
        if (fVar16 < 0.0) {
          fVar16 = (float)((uint)fVar16 ^ _LC51);
        }
      }
      if (((double)fVar16 < edge_support_threshold_lower) &&
         ((piVar10[1] == iVar11 || (*piVar10 == iVar11)))) {
        *param_4 = 2;
        iVar1 = *piVar10;
        iVar2 = piVar10[1];
        *(undefined4 *)param_5 = 1;
        *(undefined8 *)param_3 = *(undefined8 *)(pfVar4 + (long)iVar1 * 3);
        *(float *)(param_3 + 8) = (pfVar4 + (long)iVar1 * 3)[2];
        uVar5 = *(undefined8 *)(pfVar4 + (long)iVar2 * 3);
        *(undefined8 *)(param_3 + 0xc) = uVar5;
        fVar16 = (pfVar4 + (long)iVar2 * 3)[2];
        auVar21._4_4_ = 0;
        auVar21._0_4_ = fVar16;
        *(float *)(param_3 + 0x14) = fVar16;
        auVar21._8_8_ = uVar5;
        return auVar21;
      }
      piVar10 = piVar10 + 4;
    } while (piVar14 != piVar10);
  }
  uVar5 = *(undefined8 *)(pfVar4 + (long)iVar11 * 3);
  *(undefined8 *)param_3 = uVar5;
  fVar16 = (pfVar4 + (long)iVar11 * 3)[2];
  auVar20._4_4_ = 0;
  auVar20._0_4_ = fVar16;
  *(float *)(param_3 + 8) = fVar16;
  *param_4 = 1;
  *(undefined4 *)param_5 = 0;
  auVar20._8_8_ = uVar5;
  return auVar20;
}



/* GodotBoxShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int&,
   bool) const */

void GodotBoxShape3D::intersect_segment
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
               bool param_6)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  float fStack_1c;
  undefined8 local_18;
  long local_10;
  
  fVar1 = *(float *)(param_1 + 0x60);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = (float)*(undefined8 *)(param_1 + 100);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20);
  fStack_1c = fVar1 + fVar1;
  local_18 = CONCAT44(fVar3 + fVar3,fVar2 + fVar2);
  local_28 = (uint)fVar1 ^ _LC51;
  uStack_24 = (uint)fVar2 ^ _LC51;
  uStack_20 = (uint)fVar3 ^ _LC51;
  AABB::intersects_segment((Vector3 *)&local_28,param_2,param_3,param_4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBoxShape3D::get_data() const */

void GodotBoxShape3D::get_data(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Vector3 *)(in_RSI + 0x60));
  return;
}



/* GodotCylinderShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void __thiscall
GodotCylinderShape3D::project_range
          (GodotCylinderShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar7 = fVar8 * fVar8 + fVar5 * fVar5 + fVar1 * fVar1;
  if (fVar7 == 0.0) {
    fVar7 = 0.0;
    fVar11 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar7 = SQRT(fVar7);
    fVar10 = fVar8 / fVar7;
    fVar11 = fVar5 / fVar7;
    fVar7 = fVar1 / fVar7;
  }
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar7 = fVar10 * fVar2 + fVar11 * fVar3 + fVar7 * fVar4;
  fVar10 = *(float *)(param_2 + 8) * fVar2 + *(float *)(param_2 + 0x14) * fVar3 +
           *(float *)(param_2 + 0x20) * fVar4;
  fVar8 = fVar8 * fVar2 + fVar5 * fVar3 + fVar1 * fVar4;
  fVar5 = *(float *)param_2 * fVar2 + *(float *)(param_2 + 0xc) * fVar3 +
          *(float *)(param_2 + 0x18) * fVar4;
  fVar5 = SQRT(fVar5 * fVar5 + fVar8 * fVar8 + fVar10 * fVar10);
  fVar8 = *(float *)(this + 0x60) * fVar5;
  if (ABS(fVar7) <= (float)_LC9) {
    fVar1 = *(float *)(this + 100);
    dVar9 = (double)(fVar8 * fVar7) * _LC15;
    dVar6 = _LC18 - (double)(fVar7 * fVar7);
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    fVar8 = (float)((double)(fVar5 * fVar1) * dVar6 + ABS(dVar9));
  }
  else {
    fVar8 = _LC16 * fVar8;
  }
  fVar5 = fVar2 * *(float *)(param_2 + 0x24) + fVar3 * *(float *)(param_2 + 0x28) +
          fVar4 * *(float *)(param_2 + 0x2c);
  *param_3 = fVar5 - fVar8;
  *param_4 = fVar8 + fVar5;
  return;
}



/* GodotConvexPolygonShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&,
   int&, bool) const */

char GodotConvexPolygonShape3D::intersect_segment
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
               bool param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  int *piVar12;
  char cVar13;
  float *pfVar14;
  int *piVar15;
  long in_FS_OFFSET;
  float fVar16;
  float local_90;
  char local_89;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  fVar5 = *(float *)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar14 = *(float **)(param_1 + 0x68);
  fVar6 = *(float *)(param_3 + 4);
  fVar7 = *(float *)param_3;
  fVar8 = *(float *)(param_2 + 8);
  fVar9 = *(float *)(param_2 + 4);
  fVar10 = *(float *)param_2;
  lVar11 = *(long *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x60) < 1) {
    local_89 = '\0';
  }
  else {
    local_89 = '\0';
    pfVar1 = pfVar14 + (ulong)(*(int *)(param_1 + 0x60) - 1) * 8 + 8;
    local_90 = _LC38;
    do {
      if (*pfVar14 * (fVar7 - fVar10) + pfVar14[1] * (fVar6 - fVar9) + pfVar14[2] * (fVar5 - fVar8)
          <= 0.0) {
        fVar16 = pfVar14[4];
        piVar12 = *(int **)(pfVar14 + 6);
        if (2 < (int)fVar16) {
          piVar15 = piVar12 + 1;
          do {
            puVar2 = (undefined8 *)(lVar11 + (long)*piVar12 * 0xc);
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar15 * 0xc);
            puVar4 = (undefined8 *)(lVar11 + (long)piVar15[1] * 0xc);
            local_68 = *puVar2;
            local_60 = *(undefined4 *)(puVar2 + 1);
            local_5c = *puVar3;
            local_54 = *(undefined4 *)(puVar3 + 1);
            local_50 = *puVar4;
            local_48 = *(undefined4 *)(puVar4 + 1);
            cVar13 = Face3::intersects_segment((Vector3 *)&local_68,param_2,param_3);
            if (cVar13 != '\0') {
              fVar16 = (fVar7 - fVar10) * 0.0 + (fVar6 - fVar9) * 0.0 + (fVar5 - fVar8) * 0.0;
              if (fVar16 < local_90) {
                *(undefined8 *)param_4 = 0;
                *(undefined4 *)(param_4 + 8) = 0;
                *(undefined8 *)param_5 = *(undefined8 *)pfVar14;
                param_5[2] = (int)pfVar14[2];
                local_90 = fVar16;
                local_89 = cVar13;
              }
              break;
            }
            piVar15 = piVar15 + 1;
          } while (piVar12 + (ulong)((int)fVar16 - 3) + 2 != piVar15);
        }
      }
      pfVar14 = pfVar14 + 8;
    } while (pfVar1 != pfVar14);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_89;
}



/* GodotFaceShape3D::get_closest_point_to(Vector3 const&) const */

void GodotFaceShape3D::get_closest_point_to(Vector3 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x6c);
  local_30 = *(undefined4 *)(param_1 + 0x74);
  local_2c = *(undefined8 *)(param_1 + 0x78);
  local_24 = *(undefined4 *)(param_1 + 0x80);
  local_20 = *(undefined8 *)(param_1 + 0x84);
  local_18 = *(undefined4 *)(param_1 + 0x8c);
  Face3::get_closest_point_to((Vector3 *)&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSeparationRayShape3D::get_support(Vector3 const&) const */

undefined1  [16] __thiscall
GodotSeparationRayShape3D::get_support(GodotSeparationRayShape3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  uint uVar1;
  
  if (*(float *)(param_1 + 8) <= 0.0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(this + 0x60);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT416(uVar1) << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCylinderShape3D::intersect_point(Vector3 const&) const */

undefined4 __thiscall
GodotCylinderShape3D::intersect_point(GodotCylinderShape3D *this,Vector3 *param_1)

{
  if ((double)*(float *)(this + 0x60) * _LC15 <= (double)ABS(*(float *)(param_1 + 4))) {
    return 0;
  }
  return CONCAT31((int3)((uint)ABS(*(float *)(param_1 + 4)) >> 8),
                  SQRT(*(float *)param_1 * *(float *)param_1 + 0.0 +
                       *(float *)(param_1 + 8) * *(float *)(param_1 + 8)) < *(float *)(this + 100));
}



/* GodotSeparationRayShape3D::get_supports(Vector3 const&, int, Vector3*, int&,
   GodotShape3D::FeatureType&) const */

void __thiscall
GodotSeparationRayShape3D::get_supports
          (GodotSeparationRayShape3D *this,Vector3 *param_1,int param_2,Vector3 *param_3,
          int *param_4,FeatureType *param_5)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 8);
  if ((double)ABS(fVar2) < edge_support_threshold_lower) {
    uVar1 = *(undefined4 *)(this + 0x60);
    *param_4 = 2;
    *(undefined4 *)param_5 = 1;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
    *(undefined4 *)(param_3 + 0x14) = uVar1;
    return;
  }
  *param_4 = 1;
  *(undefined4 *)param_5 = 0;
  if (0.0 < fVar2) {
    uVar1 = *(undefined4 *)(this + 0x60);
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)(param_3 + 8) = uVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* CowData<GodotConcavePolygonShape3D::BVH>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GodotConcavePolygonShape3D::BVH>::_copy_on_write
          (CowData<GodotConcavePolygonShape3D::BVH> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x24;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write
          (CowData<GodotConcavePolygonShape3D::Face> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x18;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0xc;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotCylinderShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] __thiscall
GodotCylinderShape3D::get_closest_point_to(GodotCylinderShape3D *this,Vector3 *param_1)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 local_20;
  float local_18;
  
  fVar4 = *(float *)(this + 0x60);
  fVar1 = 0.0;
  fVar2 = *(float *)(param_1 + 4);
  if ((double)fVar4 * _LC15 < (double)ABS(fVar2)) {
    fVar1 = (float)_LC9;
    fVar3 = fVar2;
    if (fVar2 <= 0.0) {
      fVar4 = (float)((uint)fVar4 ^ _LC51);
      fVar1 = _LC45;
      fVar3 = (float)(_LC51 ^ (uint)fVar2);
    }
    fVar4 = _LC16 * fVar4;
    fVar3 = (*(float *)param_1 * 0.0 + fVar3 + *(float *)(param_1 + 8) * 0.0) -
            (fVar4 * fVar1 + 0.0);
    local_18 = fVar3 * 0.0;
    fVar2 = fVar2 - fVar1 * fVar3;
    fVar5 = *(float *)param_1 - local_18;
    local_18 = *(float *)(param_1 + 8) - local_18;
    fVar9 = fVar2 - fVar4;
    fVar3 = fVar5 * fVar5 + fVar9 * fVar9 + local_18 * local_18;
    fVar1 = ABS(fVar3);
    if (_LC31 <= fVar1) {
      fVar3 = SQRT(fVar3);
      fVar11 = fVar3;
      if (*(float *)(this + 100) <= fVar3) {
        fVar11 = *(float *)(this + 100);
      }
      fVar2 = (fVar9 * fVar11) / fVar3 + fVar4;
      fVar5 = (fVar11 * fVar5) / fVar3 + 0.0;
      local_18 = (local_18 * fVar11) / fVar3 + 0.0;
    }
    local_20 = CONCAT44(fVar2,fVar5);
  }
  else {
    fVar3 = *(float *)param_1;
    fVar5 = *(float *)(param_1 + 8);
    fVar4 = fVar4 * _LC47;
    fVar11 = fVar2 - fVar4;
    fVar12 = (float)((uint)fVar4 ^ _LC51) - fVar4;
    fVar8 = fVar12 * fVar12 + 0.0;
    fVar9 = 0.0;
    if ((_LC46 <= fVar8) &&
       (fVar8 = (fVar3 * 0.0 + fVar11 * fVar12 + fVar5 * 0.0) / fVar8, fVar9 = 0.0, 0.0 < fVar8)) {
      if (fVar8 < (float)_LC9) {
        fVar4 = fVar4 + fVar12 * fVar8;
        fVar9 = fVar8 * 0.0 + 0.0;
        fVar11 = fVar2 - fVar4;
        fVar5 = fVar5 - fVar9;
        fVar3 = fVar3 - fVar9;
      }
      else {
        fVar11 = fVar2 + fVar4;
        fVar4 = (float)((uint)fVar4 ^ _LC51);
      }
    }
    fVar8 = fVar3 * fVar3 + fVar11 * fVar11 + fVar5 * fVar5;
    fVar2 = *(float *)(this + 100);
    fVar12 = SQRT(fVar8);
    if (fVar12 < fVar2) {
      local_20 = *(undefined8 *)param_1;
      local_18 = *(float *)(param_1 + 8);
    }
    else {
      fVar10 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      if (fVar8 != 0.0) {
        fVar10 = fVar5 / fVar12;
        auVar6._4_4_ = fVar11;
        auVar6._0_4_ = fVar3;
        auVar6._8_8_ = 0;
        auVar7._4_4_ = fVar12;
        auVar7._0_4_ = fVar12;
        auVar7._12_4_ = _LC9._4_4_;
        auVar7._8_4_ = (float)_LC9;
        auVar7 = divps(auVar6,auVar7);
        fVar13 = auVar7._0_4_;
        fVar14 = auVar7._4_4_;
      }
      local_18 = fVar2 * fVar10 + fVar9;
      local_20 = CONCAT44(fVar2 * fVar14 + fVar4,fVar2 * fVar13 + fVar9);
    }
  }
  auVar15._8_4_ = local_18;
  auVar15._0_8_ = local_20;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar15._12_4_ = 0;
    return auVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this,param_1,fVar1);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Geometry3D::segment_intersects_sphere(Vector3 const&, Vector3 const&, Vector3 const&, float,
   Vector3*, Vector3*) [clone .isra.0] */

undefined8
Geometry3D::segment_intersects_sphere
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,float param_4,Vector3 *param_5,
          Vector3 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float in_XMM0_Db;
  undefined1 auVar3 [16];
  float in_XMM1_Da;
  float in_XMM1_Db;
  undefined1 auVar4 [16];
  float in_XMM2_Da;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar11;
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  float in_XMM4_Da;
  float fVar12;
  float fVar13;
  undefined4 in_XMM4_Db;
  float in_XMM5_Da;
  float fVar14;
  float in_XMM6_Da;
  float fVar15;
  float fVar16;
  undefined1 auVar9 [16];
  
  uVar1 = _LC9;
  auVar10._4_12_ = in_XMM3._4_12_;
  auVar10._0_4_ = in_XMM3._0_4_ - param_4;
  fVar12 = in_XMM4_Da - in_XMM1_Da;
  fVar14 = in_XMM5_Da - in_XMM2_Da;
  fVar15 = SQRT(auVar10._0_4_ * auVar10._0_4_ + fVar12 * fVar12 + fVar14 * fVar14);
  if (_LC31 <= fVar15) {
    auVar9._0_8_ = auVar10._0_8_;
    auVar9._8_4_ = in_XMM3._4_4_;
    auVar9._12_4_ = in_XMM4_Db;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = fVar12;
    auVar8._0_4_ = auVar10._0_4_;
    auVar3._4_4_ = fVar15;
    auVar3._0_4_ = fVar15;
    fVar14 = fVar14 / fVar15;
    auVar3._8_8_ = _LC9;
    auVar10 = divps(auVar8,auVar3);
    fVar6 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar13 = fVar6 * (*(float *)param_1 - param_4) + (*(float *)(param_1 + 4) - in_XMM1_Da) * fVar11
             + (*(float *)(param_1 + 8) - in_XMM2_Da) * fVar14;
    fVar12 = fVar11 * fVar13 - (*(float *)(param_1 + 4) - in_XMM1_Da);
    fVar7 = fVar6 * fVar13 - (*(float *)param_1 - param_4);
    fVar16 = fVar14 * fVar13 - (*(float *)(param_1 + 8) - in_XMM2_Da);
    fVar12 = SQRT(fVar16 * fVar16 + fVar7 * fVar7 + fVar12 * fVar12);
    if (fVar12 < in_XMM6_Da) {
      fVar12 = in_XMM6_Da * in_XMM6_Da - fVar12 * fVar12;
      if (_LC31 <= fVar12) {
        fVar13 = fVar13 - SQRT(fVar12);
      }
      if ((0.0 <= fVar13) && (fVar13 <= fVar15)) {
        fVar15 = fVar14 * fVar13 + in_XMM2_Da;
        fVar12 = fVar13 * fVar6 + param_4;
        fVar14 = fVar13 * fVar11 + in_XMM1_Da;
        if (param_2 != (Vector3 *)0x0) {
          *(ulong *)param_2 = CONCAT44(fVar14,fVar12);
          *(float *)(param_2 + 8) = fVar15;
        }
        if (param_3 != (Vector3 *)0x0) {
          fVar15 = fVar15 - *(float *)(param_1 + 8);
          auVar4._0_4_ = fVar12 - (float)*(undefined8 *)param_1;
          auVar4._4_4_ = fVar14 - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
          auVar4._8_4_ = (auVar10._8_4_ * auVar10._8_4_ + in_XMM0_Db) - 0.0;
          auVar4._12_4_ = (auVar10._12_4_ * auVar10._12_4_ + in_XMM1_Db) - 0.0;
          fVar12 = auVar4._0_4_ * auVar4._0_4_ + auVar4._4_4_ * auVar4._4_4_ + fVar15 * fVar15;
          fVar14 = 0.0;
          uVar2 = 0;
          if (fVar12 != 0.0) {
            fVar12 = SQRT(fVar12);
            auVar5._4_4_ = fVar12;
            auVar5._0_4_ = fVar12;
            auVar5._8_8_ = uVar1;
            auVar10 = divps(auVar4,auVar5);
            fVar14 = fVar15 / fVar12;
            uVar2 = auVar10._0_8_;
          }
          *(undefined8 *)param_3 = uVar2;
          *(float *)(param_3 + 8) = fVar14;
        }
        return 1;
      }
    }
  }
  return 0;
}



/* GodotSphereShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int&,
   bool) const */

void GodotSphereShape3D::intersect_segment
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
               bool param_6)

{
  long in_FS_OFFSET;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 0;
  local_14 = 0;
  Geometry3D::segment_intersects_sphere
            ((Vector3 *)&local_1c,param_4,(Vector3 *)param_5,*(float *)param_2,(Vector3 *)0x0,
             (Vector3 *)param_5);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotFaceShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int&,
   bool) const */

undefined8 __thiscall
GodotFaceShape3D::intersect_segment
          (GodotFaceShape3D *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
          Vector3 *param_4,int *param_5,bool param_6)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar18 = *(float *)(this + 0x74);
  fVar10 = *(float *)(this + 0x6c);
  fVar21 = (float)*(undefined8 *)param_1;
  fVar17 = (float)*(undefined8 *)param_2 - fVar21;
  fVar22 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar19 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar22;
  fVar23 = *(float *)(this + 0x70);
  fVar2 = *(float *)(this + 0x80) - fVar18;
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_2 + 8) - fVar4;
  fVar20 = *(float *)(this + 0x88) - fVar23;
  fVar11 = *(float *)(this + 0x7c) - fVar23;
  fVar6 = *(float *)(this + 0x78) - fVar10;
  fVar15 = *(float *)(this + 0x8c) - fVar18;
  fVar7 = *(float *)(this + 0x84) - fVar10;
  fVar12 = fVar20 * fVar17 - fVar19 * fVar7;
  fVar3 = fVar5 * fVar7 - fVar15 * fVar17;
  fVar16 = fVar15 * fVar19 - fVar5 * fVar20;
  fVar9 = fVar11 * fVar3 + fVar6 * fVar16 + fVar2 * fVar12;
  if (_LC31 <= ABS(fVar9)) {
    fVar18 = fVar4 - fVar18;
    fVar9 = (float)_LC9 / fVar9;
    fVar10 = fVar21 - fVar10;
    fVar23 = fVar22 - fVar23;
    fVar3 = (fVar3 * fVar23 + fVar16 * fVar10 + fVar12 * fVar18) * fVar9;
    if ((0.0 <= fVar3) && (fVar3 <= (float)_LC9)) {
      fVar12 = fVar11 * fVar10 - fVar6 * fVar23;
      fVar10 = fVar6 * fVar18 - fVar10 * fVar2;
      fVar18 = fVar2 * fVar23 - fVar11 * fVar18;
      fVar23 = (fVar17 * fVar18 + fVar19 * fVar10 + fVar5 * fVar12) * fVar9;
      if ((0.0 <= fVar23) &&
         (((fVar3 + fVar23 <= (float)_LC9 &&
           (fVar9 = (fVar7 * fVar18 + fVar20 * fVar10 + fVar15 * fVar12) * fVar9, _LC31 < fVar9)) &&
          (fVar9 <= (float)_LC9)))) {
        *(float *)(param_3 + 8) = fVar5 * fVar9 + fVar4;
        *(ulong *)param_3 = CONCAT44(fVar9 * fVar19 + fVar22,fVar9 * fVar17 + fVar21);
        fVar3 = (float)*(undefined8 *)(this + 0x74);
        fVar5 = (float)((ulong)*(undefined8 *)(this + 0x74) >> 0x20);
        fVar23 = (float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20);
        fVar18 = (float)*(undefined8 *)(this + 0x6c);
        fVar6 = (float)*(undefined8 *)(this + 0x70);
        fVar7 = fVar6 - (float)*(undefined8 *)(this + 0x88);
        fVar9 = (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
        fVar2 = fVar18 - *(float *)(this + 0x84);
        fVar10 = (float)*(undefined8 *)(this + 0x7c);
        fVar4 = (float)((ulong)*(undefined8 *)(this + 0x7c) >> 0x20);
        fVar6 = fVar6 - fVar10;
        fVar18 = fVar18 - fVar5;
        auVar8._0_4_ = fVar7 * (fVar3 - fVar4) - (fVar3 - *(float *)(this + 0x8c)) * fVar6;
        auVar8._4_4_ = (fVar9 - (float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20)) * fVar18 -
                       fVar2 * (fVar9 - fVar4);
        auVar8._8_4_ = (fVar5 - fVar10) * 0.0 - (fVar5 - 0.0) * 0.0;
        auVar8._12_4_ = (fVar23 - fVar3) * 0.0 - (fVar23 - 0.0) * 0.0;
        fVar10 = fVar2 * fVar6 - fVar18 * fVar7;
        fVar18 = auVar8._0_4_ * auVar8._0_4_ + auVar8._4_4_ * auVar8._4_4_ + fVar10 * fVar10;
        if (fVar18 == 0.0) {
          *(undefined8 *)param_4 = 0;
          *(undefined4 *)(param_4 + 8) = 0;
        }
        else {
          fVar18 = SQRT(fVar18);
          fVar10 = fVar10 / fVar18;
          auVar1._4_4_ = fVar18;
          auVar1._0_4_ = fVar18;
          auVar1._8_4_ = (float)_LC9;
          auVar1._12_4_ = _LC9._4_4_;
          auVar8 = divps(auVar8,auVar1);
          *(float *)(param_4 + 8) = fVar10;
          *(long *)param_4 = auVar8._0_8_;
          if (0.0 < (*(float *)param_2 - *(float *)param_1) * auVar8._0_4_ +
                    auVar8._4_4_ * (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) +
                    (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * fVar10) {
            if (this[0x90] == (GodotFaceShape3D)0x0) {
              return 0;
            }
            if (!param_6) {
              return 0;
            }
            uVar13 = (uint)auVar8._0_4_ ^ (uint)_LC13;
            uVar14 = (uint)auVar8._4_4_ ^ _LC13._4_4_;
            *(uint *)(param_4 + 8) = (uint)fVar10 ^ _LC51;
            *(ulong *)param_4 = CONCAT44(uVar14,uVar13);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



/* GodotConvexPolygonShape3D::get_support(Vector3 const&) const [clone .part.0] [clone .isra.0] */

undefined1  [16] GodotConvexPolygonShape3D::get_support(Vector3 *param_1)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  float in_XMM0_Da;
  float fVar11;
  float fVar12;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  uVar2 = *(uint *)(param_1 + 0x90);
  lVar3 = *(long *)(param_1 + 0x88);
  if (uVar2 == 0) {
    uVar9 = 0;
    uVar7 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x98);
    uVar7 = (ulong)(int)*puVar6;
    pfVar1 = (float *)(lVar3 + uVar7 * 0xc);
    fVar11 = *pfVar1 * in_XMM0_Da;
    puVar8 = puVar6 + uVar2;
    fVar15 = pfVar1[1] * in_XMM1_Da;
    fVar14 = pfVar1[2] * in_XMM2_Da;
    fVar13 = fVar11 + fVar15 + fVar14;
    while( true ) {
      fVar14 = fVar11 + fVar15 + fVar14;
      fVar12 = fVar14;
      if (fVar14 <= fVar13) {
        fVar12 = fVar13;
      }
      uVar7 = uVar7 & 0xffffffff;
      if (fVar13 < fVar14) {
        uVar7 = (ulong)*puVar6;
      }
      uVar10 = (uint)uVar7;
      puVar6 = puVar6 + 1;
      if (puVar8 == puVar6) break;
      pfVar1 = (float *)(lVar3 + (long)(int)*puVar6 * 0xc);
      fVar11 = *pfVar1 * in_XMM0_Da;
      fVar15 = pfVar1[1] * in_XMM1_Da;
      fVar14 = pfVar1[2] * in_XMM2_Da;
      fVar13 = fVar12;
    }
    if (uVar2 == *(uint *)(param_1 + 0x80)) {
LAB_00103761:
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
        auVar16._12_4_ = 0;
        auVar16._0_12_ = *(undefined1 (*) [12])(lVar3 + (long)(int)uVar10 * 0xc);
        return auVar16;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar9 = (ulong)*(uint *)(param_1 + 0xa0);
    uVar5 = 0xffffffff;
    uVar2 = uVar10;
    while (uVar2 < *(uint *)(param_1 + 0xa0)) {
      uVar10 = (uint)uVar7;
      puVar8 = (uint *)(uVar7 * 0x10 + *(long *)(param_1 + 0xa8));
      puVar6 = *(uint **)(puVar8 + 2);
      puVar8 = puVar6 + *puVar8;
      while( true ) {
        if (puVar8 == puVar6) goto LAB_00103761;
        uVar2 = *puVar6;
        if ((uVar2 != (uint)uVar5) &&
           (pfVar1 = (float *)(lVar3 + (long)(int)uVar2 * 0xc),
           0.0 < *pfVar1 * in_XMM0_Da + pfVar1[1] * in_XMM1_Da + pfVar1[2] * in_XMM2_Da)) break;
        puVar6 = puVar6 + 1;
      }
      if (uVar2 == 0xffffffff) goto LAB_00103761;
      uVar5 = uVar7;
      uVar7 = (ulong)uVar2;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,uVar7,uVar9,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* GodotConvexPolygonShape3D::get_support(Vector3 const&) const */

undefined1  [16] GodotConvexPolygonShape3D::get_support(Vector3 *param_1)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(int *)(param_1 + 0x80) == 0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
      return ZEXT816(0);
    }
  }
  else if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1 = get_support(param_1);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<_Volume_BVH_Element, _Volume_BVH_CompareY, true>::introsort(long, long,
   _Volume_BVH_Element*, long) const [clone .isra.0] */

void SortArray<_Volume_BVH_Element,_Volume_BVH_CompareY,true>::introsort
               (long param_1,long param_2,_Volume_BVH_Element *param_3,long param_4)

{
  _Volume_BVH_Element *p_Var1;
  _Volume_BVH_Element *p_Var2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  _Volume_BVH_Element *p_Var14;
  long lVar15;
  _Volume_BVH_Element *p_Var16;
  long lVar17;
  long lVar18;
  long lVar19;
  _Volume_BVH_Element *p_Var20;
  long lVar21;
  _Volume_BVH_Element *p_Var22;
  long lVar23;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  float fVar26;
  long local_e8;
  float fStack_7c;
  undefined1 local_68 [16];
  undefined1 local_58 [40];
  
  lVar17 = param_2 - param_1;
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar17) {
    if (param_4 != 0) {
      lVar21 = param_2;
      local_e8 = param_4;
LAB_00103901:
      local_e8 = local_e8 + -1;
      fVar3 = *(float *)(param_3 + param_1 * 0x28 + 0x1c);
      fVar4 = *(float *)(param_3 + ((lVar17 >> 1) + param_1) * 0x28 + 0x1c);
      fVar5 = *(float *)(param_3 + lVar21 * 0x28 + -0xc);
      if (fVar4 <= fVar3) {
        fVar26 = fVar3;
        if ((fVar5 <= fVar3) && (fVar26 = fVar5, fVar5 <= fVar4)) {
          fVar26 = fVar4;
        }
      }
      else {
        fVar26 = fVar4;
        if ((fVar5 <= fVar4) && (fVar26 = fVar5, fVar5 <= fVar3)) {
          fVar26 = fVar3;
        }
      }
      lVar17 = lVar21;
      p_Var20 = param_3 + param_1 * 0x28;
      param_2 = param_1;
      do {
        if (*(float *)(p_Var20 + 0x1c) <= fVar26 && fVar26 != *(float *)(p_Var20 + 0x1c)) {
          if (lVar21 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00103984;
          }
        }
        else {
LAB_00103984:
          lVar17 = lVar17 + -1;
          p_Var22 = param_3 + lVar17 * 0x28;
          if (fVar26 < *(float *)(p_Var22 + 0x1c)) {
            p_Var16 = param_3 + lVar17 * 0x28 + -0x28;
            while (param_1 != lVar17) {
              lVar17 = lVar17 + -1;
              p_Var22 = p_Var16;
              if (*(float *)(p_Var16 + 0x1c) <= fVar26) goto LAB_00103a05;
              p_Var16 = p_Var16 + -0x28;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_00103a05:
          if (lVar17 <= param_2) goto LAB_00103a60;
          uVar10 = *(undefined8 *)(p_Var22 + 8);
          auVar6 = *(undefined1 (*) [16])p_Var20;
          auVar7 = *(undefined1 (*) [16])(p_Var20 + 0x10);
          uVar9 = *(undefined8 *)(p_Var20 + 0x20);
          *(undefined8 *)p_Var20 = *(undefined8 *)p_Var22;
          *(undefined8 *)(p_Var20 + 8) = uVar10;
          uVar10 = *(undefined8 *)(p_Var22 + 0x18);
          *(undefined8 *)(p_Var20 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
          *(undefined8 *)(p_Var20 + 0x18) = uVar10;
          *(undefined8 *)(p_Var20 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
          *(undefined8 *)(p_Var22 + 0x20) = uVar9;
          *(undefined1 (*) [16])p_Var22 = auVar6;
          *(undefined1 (*) [16])(p_Var22 + 0x10) = auVar7;
        }
        p_Var20 = p_Var20 + 0x28;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_00103d1e:
    lVar23 = lVar17 + -2 >> 1;
    lVar21 = lVar23 * 2 + 2;
    p_Var20 = param_3 + (param_1 + lVar23) * 0x28;
    do {
      uVar10 = *(undefined8 *)p_Var20;
      uVar11 = *(undefined8 *)(p_Var20 + 8);
      uVar9 = *(undefined8 *)(p_Var20 + 0x20);
      auVar6 = *(undefined1 (*) [16])(p_Var20 + 0x10);
      fStack_7c = (float)((ulong)*(undefined8 *)(p_Var20 + 0x18) >> 0x20);
      lVar18 = lVar21;
      lVar24 = lVar23;
      if (lVar21 < lVar17) {
        do {
          p_Var22 = param_3 + (param_1 + lVar18) * 0x28;
          fVar3 = *(float *)(param_3 + (param_1 + lVar18 + -1) * 0x28 + 0x1c);
          lVar15 = lVar18 + -1;
          lVar19 = lVar18;
          p_Var16 = param_3 + (param_1 + lVar18 + -1) * 0x28;
          if (fVar3 < *(float *)(p_Var22 + 0x1c) || fVar3 == *(float *)(p_Var22 + 0x1c)) {
            lVar19 = lVar18 + 1;
            lVar15 = lVar18;
            p_Var16 = p_Var22;
          }
          uVar12 = *(undefined8 *)(p_Var16 + 8);
          lVar18 = lVar19 * 2;
          p_Var22 = param_3 + (lVar24 + param_1) * 0x28;
          *(undefined8 *)p_Var22 = *(undefined8 *)p_Var16;
          *(undefined8 *)(p_Var22 + 8) = uVar12;
          uVar12 = *(undefined8 *)(p_Var16 + 0x18);
          *(undefined8 *)(p_Var22 + 0x10) = *(undefined8 *)(p_Var16 + 0x10);
          *(undefined8 *)(p_Var22 + 0x18) = uVar12;
          *(undefined8 *)(p_Var22 + 0x20) = *(undefined8 *)(p_Var16 + 0x20);
          lVar24 = lVar15;
        } while (lVar17 != lVar18 && SBORROW8(lVar17,lVar18) == lVar17 + lVar19 * -2 < 0);
        p_Var22 = p_Var16;
        if (lVar17 == lVar18) {
LAB_00103edf:
          lVar15 = lVar18 + -1;
          p_Var16 = param_3 + (param_1 + lVar15) * 0x28;
          uVar12 = *(undefined8 *)(p_Var16 + 8);
          *(undefined8 *)p_Var22 = *(undefined8 *)p_Var16;
          *(undefined8 *)(p_Var22 + 8) = uVar12;
          uVar12 = *(undefined8 *)(p_Var16 + 0x18);
          *(undefined8 *)(p_Var22 + 0x10) = *(undefined8 *)(p_Var16 + 0x10);
          *(undefined8 *)(p_Var22 + 0x18) = uVar12;
          *(undefined8 *)(p_Var22 + 0x20) = *(undefined8 *)(p_Var16 + 0x20);
        }
        lVar18 = lVar15 + -1;
        local_58._0_12_ = auVar6._0_12_;
        if (lVar15 <= lVar23) goto LAB_00103fd4;
        do {
          lVar24 = lVar18 >> 1;
          p_Var22 = param_3 + (param_1 + lVar24) * 0x28;
          p_Var16 = param_3 + (lVar15 + param_1) * 0x28;
          if (fStack_7c < *(float *)(p_Var22 + 0x1c) || fStack_7c == *(float *)(p_Var22 + 0x1c))
          break;
          uVar12 = *(undefined8 *)(p_Var22 + 8);
          *(undefined8 *)p_Var16 = *(undefined8 *)p_Var22;
          *(undefined8 *)(p_Var16 + 8) = uVar12;
          uVar12 = *(undefined8 *)(p_Var22 + 0x18);
          *(undefined8 *)(p_Var16 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
          *(undefined8 *)(p_Var16 + 0x18) = uVar12;
          *(undefined8 *)(p_Var16 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
          lVar18 = (lVar24 + -1) - (lVar24 + -1 >> 0x3f);
          p_Var16 = p_Var22;
          lVar15 = lVar24;
        } while (lVar23 < lVar24);
        local_58._12_4_ = fStack_7c;
        auVar7 = local_58._0_16_;
        local_58._0_8_ = auVar6._0_8_;
        local_58._8_8_ = auVar7._8_8_;
        *(undefined8 *)(p_Var16 + 0x20) = uVar9;
        *(undefined8 *)p_Var16 = uVar10;
        *(undefined8 *)(p_Var16 + 8) = uVar11;
        *(undefined8 *)(p_Var16 + 0x10) = local_58._0_8_;
        *(undefined8 *)(p_Var16 + 0x18) = local_58._8_8_;
        if (lVar23 == 0) goto LAB_00103afa;
      }
      else {
        p_Var22 = p_Var20;
        if (lVar21 == lVar17) goto LAB_00103edf;
        local_58._0_12_ = SUB1612(*(undefined1 (*) [16])(p_Var20 + 0x10),0);
        p_Var16 = p_Var20;
LAB_00103fd4:
        local_68 = *(undefined1 (*) [16])p_Var20;
        local_58._12_4_ = fStack_7c;
        auVar6 = local_58._0_16_;
        local_58._8_8_ = auVar6._8_8_;
        *(undefined8 *)(p_Var16 + 0x20) = uVar9;
        *(undefined8 *)p_Var16 = local_68._0_8_;
        *(undefined8 *)(p_Var16 + 8) = local_68._8_8_;
        *(undefined8 *)(p_Var16 + 0x10) = local_58._0_8_;
        *(undefined8 *)(p_Var16 + 0x18) = local_58._8_8_;
      }
      lVar23 = lVar23 + -1;
      p_Var20 = p_Var20 + -0x28;
      lVar21 = lVar21 + -2;
    } while( true );
  }
  goto LAB_00103cd4;
LAB_00103a60:
  introsort(param_2,lVar21,param_3,local_e8);
  lVar17 = param_2 - param_1;
  if (lVar17 < 0x11) goto LAB_00103cd4;
  lVar21 = param_2;
  if (local_e8 == 0) goto LAB_00103d1e;
  goto LAB_00103901;
LAB_00103afa:
  p_Var20 = param_3 + param_1 * 0x28;
  p_Var22 = param_3 + (param_2 + -1) * 0x28 + -0x28;
  lVar17 = (param_2 + -1) - param_1;
  do {
    uVar10 = *(undefined8 *)(p_Var20 + 8);
    p_Var16 = p_Var22 + 0x28;
    auVar7 = *(undefined1 (*) [16])p_Var16;
    local_68 = *(undefined1 (*) [16])p_Var16;
    p_Var1 = p_Var22 + 0x38;
    uVar11 = *(undefined8 *)(p_Var22 + 0x40);
    auVar13 = *(undefined1 (*) [16])p_Var1;
    auVar6 = *(undefined1 (*) [16])p_Var1;
    uVar9 = *(undefined8 *)(p_Var22 + 0x48);
    *(undefined8 *)(p_Var22 + 0x28) = *(undefined8 *)p_Var20;
    *(undefined8 *)(p_Var22 + 0x30) = uVar10;
    uVar10 = *(undefined8 *)(p_Var20 + 0x18);
    *(undefined8 *)(p_Var22 + 0x38) = *(undefined8 *)(p_Var20 + 0x10);
    *(undefined8 *)(p_Var22 + 0x40) = uVar10;
    *(undefined8 *)(p_Var22 + 0x48) = *(undefined8 *)(p_Var20 + 0x20);
    fStack_7c = (float)((ulong)uVar11 >> 0x20);
    if (lVar17 < 3) {
      p_Var14 = p_Var20;
      if (lVar17 == 2) goto LAB_00103f20;
      local_58._0_12_ = auVar13._0_12_;
      local_68 = auVar7;
    }
    else {
      lVar21 = 2;
      lVar23 = 0;
      do {
        p_Var2 = param_3 + (param_1 + lVar21) * 0x28;
        fVar3 = *(float *)(param_3 + (param_1 + lVar21 + -1) * 0x28 + 0x1c);
        p_Var14 = param_3 + (param_1 + lVar21 + -1) * 0x28;
        lVar18 = lVar21;
        lVar24 = lVar21 + -1;
        if (fVar3 < *(float *)(p_Var2 + 0x1c) || fVar3 == *(float *)(p_Var2 + 0x1c)) {
          lVar18 = lVar21 + 1;
          p_Var14 = p_Var2;
          lVar24 = lVar21;
        }
        uVar10 = *(undefined8 *)(p_Var14 + 8);
        lVar21 = lVar18 * 2;
        p_Var2 = param_3 + (lVar23 + param_1) * 0x28;
        *(undefined8 *)p_Var2 = *(undefined8 *)p_Var14;
        *(undefined8 *)(p_Var2 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var14 + 0x18);
        *(undefined8 *)(p_Var2 + 0x10) = *(undefined8 *)(p_Var14 + 0x10);
        *(undefined8 *)(p_Var2 + 0x18) = uVar10;
        *(undefined8 *)(p_Var2 + 0x20) = *(undefined8 *)(p_Var14 + 0x20);
        lVar23 = lVar24;
      } while (lVar21 < lVar17);
      if (lVar21 == lVar17) {
LAB_00103f20:
        uVar10 = *(undefined8 *)(p_Var22 + 8);
        *(undefined8 *)p_Var14 = *(undefined8 *)p_Var22;
        *(undefined8 *)(p_Var14 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var22 + 0x18);
        *(undefined8 *)(p_Var14 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
        *(undefined8 *)(p_Var14 + 0x18) = uVar10;
        *(undefined8 *)(p_Var14 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
        lVar24 = lVar17 + -1;
        lVar21 = lVar17 + -2 >> 1;
      }
      else {
        local_58._0_12_ = auVar6._0_12_;
        lVar21 = (lVar24 + -1) / 2;
        if (lVar24 == 0) goto LAB_00103c95;
      }
      do {
        local_58._0_16_ = *(undefined1 (*) [16])p_Var1;
        local_68 = *(undefined1 (*) [16])p_Var16;
        p_Var2 = param_3 + (param_1 + lVar21) * 0x28;
        p_Var14 = param_3 + (lVar24 + param_1) * 0x28;
        if (fStack_7c < *(float *)(p_Var2 + 0x1c) || fStack_7c == *(float *)(p_Var2 + 0x1c)) break;
        uVar10 = *(undefined8 *)(p_Var2 + 8);
        *(undefined8 *)p_Var14 = *(undefined8 *)p_Var2;
        *(undefined8 *)(p_Var14 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var2 + 0x18);
        *(undefined8 *)(p_Var14 + 0x10) = *(undefined8 *)(p_Var2 + 0x10);
        *(undefined8 *)(p_Var14 + 0x18) = uVar10;
        *(undefined8 *)(p_Var14 + 0x20) = *(undefined8 *)(p_Var2 + 0x20);
        bVar25 = lVar21 != 0;
        p_Var14 = p_Var2;
        lVar24 = lVar21;
        lVar21 = (lVar21 + -1) / 2;
      } while (bVar25);
    }
LAB_00103c95:
    p_Var22 = p_Var22 + -0x28;
    local_58._12_4_ = fStack_7c;
    auVar6 = local_58._0_16_;
    local_58._8_8_ = auVar6._8_8_;
    *(undefined8 *)(p_Var14 + 0x20) = uVar9;
    *(undefined8 *)p_Var14 = local_68._0_8_;
    *(undefined8 *)(p_Var14 + 8) = local_68._8_8_;
    *(undefined8 *)(p_Var14 + 0x10) = local_58._0_8_;
    *(undefined8 *)(p_Var14 + 0x18) = local_58._8_8_;
    bVar25 = 1 < lVar17;
    lVar17 = lVar17 + -1;
  } while (bVar25);
LAB_00103cd4:
  if (lVar8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<_Volume_BVH_Element, _Volume_BVH_CompareZ, true>::introsort(long, long,
   _Volume_BVH_Element*, long) const [clone .isra.0] */

void SortArray<_Volume_BVH_Element,_Volume_BVH_CompareZ,true>::introsort
               (long param_1,long param_2,_Volume_BVH_Element *param_3,long param_4)

{
  _Volume_BVH_Element *p_Var1;
  _Volume_BVH_Element *p_Var2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  _Volume_BVH_Element *p_Var15;
  long lVar16;
  _Volume_BVH_Element *p_Var17;
  long lVar18;
  long lVar19;
  long lVar20;
  _Volume_BVH_Element *p_Var21;
  long lVar22;
  _Volume_BVH_Element *p_Var23;
  long lVar24;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  float fVar27;
  long local_e8;
  float local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  lVar18 = param_2 - param_1;
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar18) {
    if (param_4 != 0) {
      lVar22 = param_2;
      local_e8 = param_4;
LAB_00104091:
      local_e8 = local_e8 + -1;
      fVar3 = *(float *)(param_3 + param_1 * 0x28 + 0x20);
      fVar4 = *(float *)(param_3 + ((lVar18 >> 1) + param_1) * 0x28 + 0x20);
      fVar5 = *(float *)(param_3 + lVar22 * 0x28 + -8);
      if (fVar4 <= fVar3) {
        fVar27 = fVar3;
        if ((fVar5 <= fVar3) && (fVar27 = fVar5, fVar5 <= fVar4)) {
          fVar27 = fVar4;
        }
      }
      else {
        fVar27 = fVar4;
        if ((fVar5 <= fVar4) && (fVar27 = fVar5, fVar5 <= fVar3)) {
          fVar27 = fVar3;
        }
      }
      lVar18 = lVar22;
      p_Var21 = param_3 + param_1 * 0x28;
      param_2 = param_1;
      do {
        if (*(float *)(p_Var21 + 0x20) <= fVar27 && fVar27 != *(float *)(p_Var21 + 0x20)) {
          if (lVar22 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00104114;
          }
        }
        else {
LAB_00104114:
          lVar18 = lVar18 + -1;
          p_Var23 = param_3 + lVar18 * 0x28;
          if (fVar27 < *(float *)(p_Var23 + 0x20)) {
            p_Var17 = param_3 + lVar18 * 0x28 + -0x28;
            while (param_1 != lVar18) {
              lVar18 = lVar18 + -1;
              p_Var23 = p_Var17;
              if (*(float *)(p_Var17 + 0x20) <= fVar27) goto LAB_00104195;
              p_Var17 = p_Var17 + -0x28;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_00104195:
          if (lVar18 <= param_2) goto LAB_001041f0;
          uVar10 = *(undefined8 *)(p_Var23 + 8);
          auVar6 = *(undefined1 (*) [16])p_Var21;
          auVar7 = *(undefined1 (*) [16])(p_Var21 + 0x10);
          uVar9 = *(undefined8 *)(p_Var21 + 0x20);
          *(undefined8 *)p_Var21 = *(undefined8 *)p_Var23;
          *(undefined8 *)(p_Var21 + 8) = uVar10;
          uVar10 = *(undefined8 *)(p_Var23 + 0x18);
          *(undefined8 *)(p_Var21 + 0x10) = *(undefined8 *)(p_Var23 + 0x10);
          *(undefined8 *)(p_Var21 + 0x18) = uVar10;
          *(undefined8 *)(p_Var21 + 0x20) = *(undefined8 *)(p_Var23 + 0x20);
          *(undefined8 *)(p_Var23 + 0x20) = uVar9;
          *(undefined1 (*) [16])p_Var23 = auVar6;
          *(undefined1 (*) [16])(p_Var23 + 0x10) = auVar7;
        }
        p_Var21 = p_Var21 + 0x28;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_001044ae:
    lVar24 = lVar18 + -2 >> 1;
    lVar22 = lVar24 * 2 + 2;
    p_Var21 = param_3 + (param_1 + lVar24) * 0x28;
    do {
      uVar10 = *(undefined8 *)p_Var21;
      uVar11 = *(undefined8 *)(p_Var21 + 8);
      uVar9 = *(undefined8 *)(p_Var21 + 0x20);
      uVar12 = *(undefined8 *)(p_Var21 + 0x10);
      uVar13 = *(undefined8 *)(p_Var21 + 0x18);
      local_78 = (float)uVar9;
      lVar19 = lVar22;
      lVar25 = lVar24;
      if (lVar22 < lVar18) {
        do {
          p_Var17 = param_3 + (param_1 + lVar19) * 0x28;
          fVar3 = *(float *)(param_3 + (param_1 + lVar19 + -1) * 0x28 + 0x20);
          lVar16 = lVar19 + -1;
          lVar20 = lVar19;
          p_Var23 = param_3 + (param_1 + lVar19 + -1) * 0x28;
          if (fVar3 < *(float *)(p_Var17 + 0x20) || fVar3 == *(float *)(p_Var17 + 0x20)) {
            lVar20 = lVar19 + 1;
            lVar16 = lVar19;
            p_Var23 = p_Var17;
          }
          uVar14 = *(undefined8 *)(p_Var23 + 8);
          lVar19 = lVar20 * 2;
          p_Var17 = param_3 + (lVar25 + param_1) * 0x28;
          *(undefined8 *)p_Var17 = *(undefined8 *)p_Var23;
          *(undefined8 *)(p_Var17 + 8) = uVar14;
          uVar14 = *(undefined8 *)(p_Var23 + 0x18);
          *(undefined8 *)(p_Var17 + 0x10) = *(undefined8 *)(p_Var23 + 0x10);
          *(undefined8 *)(p_Var17 + 0x18) = uVar14;
          *(undefined8 *)(p_Var17 + 0x20) = *(undefined8 *)(p_Var23 + 0x20);
          lVar25 = lVar16;
        } while (lVar18 != lVar19 && SBORROW8(lVar18,lVar19) == lVar18 + lVar20 * -2 < 0);
        p_Var17 = p_Var23;
        if (lVar18 == lVar19) {
LAB_0010466f:
          lVar16 = lVar19 + -1;
          p_Var23 = param_3 + (param_1 + lVar16) * 0x28;
          uVar14 = *(undefined8 *)(p_Var23 + 8);
          *(undefined8 *)p_Var17 = *(undefined8 *)p_Var23;
          *(undefined8 *)(p_Var17 + 8) = uVar14;
          uVar14 = *(undefined8 *)(p_Var23 + 0x18);
          *(undefined8 *)(p_Var17 + 0x10) = *(undefined8 *)(p_Var23 + 0x10);
          *(undefined8 *)(p_Var17 + 0x18) = uVar14;
          *(undefined8 *)(p_Var17 + 0x20) = *(undefined8 *)(p_Var23 + 0x20);
        }
        lVar19 = lVar16 + -1;
        if (lVar16 <= lVar24) goto LAB_00104764;
        do {
          lVar25 = lVar19 >> 1;
          p_Var23 = param_3 + (param_1 + lVar25) * 0x28;
          p_Var17 = param_3 + (lVar16 + param_1) * 0x28;
          if (local_78 < *(float *)(p_Var23 + 0x20) || local_78 == *(float *)(p_Var23 + 0x20))
          break;
          uVar14 = *(undefined8 *)(p_Var23 + 8);
          *(undefined8 *)p_Var17 = *(undefined8 *)p_Var23;
          *(undefined8 *)(p_Var17 + 8) = uVar14;
          uVar14 = *(undefined8 *)(p_Var23 + 0x18);
          *(undefined8 *)(p_Var17 + 0x10) = *(undefined8 *)(p_Var23 + 0x10);
          *(undefined8 *)(p_Var17 + 0x18) = uVar14;
          *(undefined8 *)(p_Var17 + 0x20) = *(undefined8 *)(p_Var23 + 0x20);
          lVar19 = (lVar25 + -1) - (lVar25 + -1 >> 0x3f);
          p_Var17 = p_Var23;
          lVar16 = lVar25;
        } while (lVar24 < lVar25);
        *(undefined8 *)p_Var17 = uVar10;
        *(undefined8 *)(p_Var17 + 8) = uVar11;
        *(undefined8 *)(p_Var17 + 0x20) = uVar9;
        *(undefined8 *)(p_Var17 + 0x10) = uVar12;
        *(undefined8 *)(p_Var17 + 0x18) = uVar13;
        if (lVar24 == 0) goto LAB_0010428a;
      }
      else {
        p_Var17 = p_Var21;
        p_Var23 = p_Var21;
        if (lVar22 == lVar18) goto LAB_0010466f;
LAB_00104764:
        local_58 = *(undefined1 (*) [16])(p_Var21 + 0x10);
        local_68 = *(undefined1 (*) [16])p_Var21;
        *(undefined8 *)p_Var23 = local_68._0_8_;
        *(undefined8 *)(p_Var23 + 8) = local_68._8_8_;
        *(undefined8 *)(p_Var23 + 0x20) = uVar9;
        *(undefined8 *)(p_Var23 + 0x10) = local_58._0_8_;
        *(undefined8 *)(p_Var23 + 0x18) = local_58._8_8_;
      }
      lVar24 = lVar24 + -1;
      p_Var21 = p_Var21 + -0x28;
      lVar22 = lVar22 + -2;
    } while( true );
  }
  goto LAB_00104464;
LAB_001041f0:
  introsort(param_2,lVar22,param_3,local_e8);
  lVar18 = param_2 - param_1;
  if (lVar18 < 0x11) goto LAB_00104464;
  lVar22 = param_2;
  if (local_e8 == 0) goto LAB_001044ae;
  goto LAB_00104091;
LAB_0010428a:
  p_Var21 = param_3 + param_1 * 0x28;
  p_Var23 = param_3 + (param_2 + -1) * 0x28 + -0x28;
  lVar18 = (param_2 + -1) - param_1;
  do {
    uVar10 = *(undefined8 *)(p_Var21 + 8);
    p_Var17 = p_Var23 + 0x28;
    auVar6 = *(undefined1 (*) [16])p_Var17;
    local_68 = *(undefined1 (*) [16])p_Var17;
    p_Var1 = p_Var23 + 0x38;
    auVar7 = *(undefined1 (*) [16])p_Var1;
    local_58 = *(undefined1 (*) [16])p_Var1;
    uVar9 = *(undefined8 *)(p_Var23 + 0x48);
    *(undefined8 *)(p_Var23 + 0x28) = *(undefined8 *)p_Var21;
    *(undefined8 *)(p_Var23 + 0x30) = uVar10;
    uVar10 = *(undefined8 *)(p_Var21 + 0x18);
    *(undefined8 *)(p_Var23 + 0x38) = *(undefined8 *)(p_Var21 + 0x10);
    *(undefined8 *)(p_Var23 + 0x40) = uVar10;
    *(undefined8 *)(p_Var23 + 0x48) = *(undefined8 *)(p_Var21 + 0x20);
    local_78 = (float)uVar9;
    if (lVar18 < 3) {
      p_Var15 = p_Var21;
      local_68 = auVar6;
      local_58 = auVar7;
      if (lVar18 == 2) goto LAB_001046b0;
    }
    else {
      lVar22 = 2;
      lVar24 = 0;
      do {
        p_Var2 = param_3 + (param_1 + lVar22) * 0x28;
        fVar3 = *(float *)(param_3 + (param_1 + lVar22 + -1) * 0x28 + 0x20);
        p_Var15 = param_3 + (param_1 + lVar22 + -1) * 0x28;
        lVar19 = lVar22;
        lVar25 = lVar22 + -1;
        if (fVar3 < *(float *)(p_Var2 + 0x20) || fVar3 == *(float *)(p_Var2 + 0x20)) {
          lVar19 = lVar22 + 1;
          p_Var15 = p_Var2;
          lVar25 = lVar22;
        }
        uVar10 = *(undefined8 *)(p_Var15 + 8);
        lVar22 = lVar19 * 2;
        p_Var2 = param_3 + (lVar24 + param_1) * 0x28;
        *(undefined8 *)p_Var2 = *(undefined8 *)p_Var15;
        *(undefined8 *)(p_Var2 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var15 + 0x18);
        *(undefined8 *)(p_Var2 + 0x10) = *(undefined8 *)(p_Var15 + 0x10);
        *(undefined8 *)(p_Var2 + 0x18) = uVar10;
        *(undefined8 *)(p_Var2 + 0x20) = *(undefined8 *)(p_Var15 + 0x20);
        lVar24 = lVar25;
      } while (lVar22 < lVar18);
      if (lVar22 == lVar18) {
LAB_001046b0:
        uVar10 = *(undefined8 *)(p_Var23 + 8);
        *(undefined8 *)p_Var15 = *(undefined8 *)p_Var23;
        *(undefined8 *)(p_Var15 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var23 + 0x18);
        *(undefined8 *)(p_Var15 + 0x10) = *(undefined8 *)(p_Var23 + 0x10);
        *(undefined8 *)(p_Var15 + 0x18) = uVar10;
        *(undefined8 *)(p_Var15 + 0x20) = *(undefined8 *)(p_Var23 + 0x20);
        lVar25 = lVar18 + -1;
        lVar22 = lVar18 + -2 >> 1;
      }
      else {
        lVar22 = (lVar25 + -1) / 2;
        if (lVar25 == 0) goto LAB_00104425;
      }
      do {
        local_58 = *(undefined1 (*) [16])p_Var1;
        local_68 = *(undefined1 (*) [16])p_Var17;
        p_Var2 = param_3 + (param_1 + lVar22) * 0x28;
        p_Var15 = param_3 + (lVar25 + param_1) * 0x28;
        if (local_78 < *(float *)(p_Var2 + 0x20) || local_78 == *(float *)(p_Var2 + 0x20)) break;
        uVar10 = *(undefined8 *)(p_Var2 + 8);
        *(undefined8 *)p_Var15 = *(undefined8 *)p_Var2;
        *(undefined8 *)(p_Var15 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var2 + 0x18);
        *(undefined8 *)(p_Var15 + 0x10) = *(undefined8 *)(p_Var2 + 0x10);
        *(undefined8 *)(p_Var15 + 0x18) = uVar10;
        *(undefined8 *)(p_Var15 + 0x20) = *(undefined8 *)(p_Var2 + 0x20);
        bVar26 = lVar22 != 0;
        p_Var15 = p_Var2;
        lVar25 = lVar22;
        lVar22 = (lVar22 + -1) / 2;
      } while (bVar26);
    }
LAB_00104425:
    p_Var23 = p_Var23 + -0x28;
    *(undefined8 *)p_Var15 = local_68._0_8_;
    *(undefined8 *)(p_Var15 + 8) = local_68._8_8_;
    *(undefined8 *)(p_Var15 + 0x20) = uVar9;
    *(undefined8 *)(p_Var15 + 0x10) = local_58._0_8_;
    *(undefined8 *)(p_Var15 + 0x18) = local_58._8_8_;
    bVar26 = 1 < lVar18;
    lVar18 = lVar18 + -1;
  } while (bVar26);
LAB_00104464:
  if (lVar8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<_Volume_BVH_Element, _Volume_BVH_CompareX, true>::introsort(long, long,
   _Volume_BVH_Element*, long) const [clone .isra.0] */

void SortArray<_Volume_BVH_Element,_Volume_BVH_CompareX,true>::introsort
               (long param_1,long param_2,_Volume_BVH_Element *param_3,long param_4)

{
  _Volume_BVH_Element *p_Var1;
  _Volume_BVH_Element *p_Var2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [12];
  _Volume_BVH_Element *p_Var14;
  long lVar15;
  _Volume_BVH_Element *p_Var16;
  long lVar17;
  long lVar18;
  long lVar19;
  _Volume_BVH_Element *p_Var20;
  long lVar21;
  _Volume_BVH_Element *p_Var22;
  long lVar23;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  float fVar26;
  long local_e8;
  float fStack_80;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  undefined8 uStack_50;
  
  lVar17 = param_2 - param_1;
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar17) {
    if (param_4 != 0) {
      lVar21 = param_2;
      local_e8 = param_4;
LAB_00104821:
      local_e8 = local_e8 + -1;
      fVar3 = *(float *)(param_3 + param_1 * 0x28 + 0x18);
      fVar4 = *(float *)(param_3 + ((lVar17 >> 1) + param_1) * 0x28 + 0x18);
      fVar5 = *(float *)(param_3 + lVar21 * 0x28 + -0x10);
      if (fVar4 <= fVar3) {
        fVar26 = fVar3;
        if ((fVar5 <= fVar3) && (fVar26 = fVar5, fVar5 <= fVar4)) {
          fVar26 = fVar4;
        }
      }
      else {
        fVar26 = fVar4;
        if ((fVar5 <= fVar4) && (fVar26 = fVar5, fVar5 <= fVar3)) {
          fVar26 = fVar3;
        }
      }
      lVar17 = lVar21;
      p_Var20 = param_3 + param_1 * 0x28;
      param_2 = param_1;
      do {
        if (*(float *)(p_Var20 + 0x18) <= fVar26 && fVar26 != *(float *)(p_Var20 + 0x18)) {
          if (lVar21 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_001048a4;
          }
        }
        else {
LAB_001048a4:
          lVar17 = lVar17 + -1;
          p_Var22 = param_3 + lVar17 * 0x28;
          if (fVar26 < *(float *)(p_Var22 + 0x18)) {
            p_Var16 = param_3 + lVar17 * 0x28 + -0x28;
            while (param_1 != lVar17) {
              lVar17 = lVar17 + -1;
              p_Var22 = p_Var16;
              if (*(float *)(p_Var16 + 0x18) <= fVar26) goto LAB_00104925;
              p_Var16 = p_Var16 + -0x28;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_00104925:
          if (lVar17 <= param_2) goto LAB_00104980;
          uVar10 = *(undefined8 *)(p_Var22 + 8);
          auVar6 = *(undefined1 (*) [16])p_Var20;
          auVar7 = *(undefined1 (*) [16])(p_Var20 + 0x10);
          uVar9 = *(undefined8 *)(p_Var20 + 0x20);
          *(undefined8 *)p_Var20 = *(undefined8 *)p_Var22;
          *(undefined8 *)(p_Var20 + 8) = uVar10;
          uVar10 = *(undefined8 *)(p_Var22 + 0x18);
          *(undefined8 *)(p_Var20 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
          *(undefined8 *)(p_Var20 + 0x18) = uVar10;
          *(undefined8 *)(p_Var20 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
          *(undefined8 *)(p_Var22 + 0x20) = uVar9;
          *(undefined1 (*) [16])p_Var22 = auVar6;
          *(undefined1 (*) [16])(p_Var22 + 0x10) = auVar7;
        }
        p_Var20 = p_Var20 + 0x28;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_00104c3e:
    lVar23 = lVar17 + -2 >> 1;
    lVar21 = lVar23 * 2 + 2;
    p_Var20 = param_3 + (param_1 + lVar23) * 0x28;
    do {
      uVar10 = *(undefined8 *)p_Var20;
      uVar11 = *(undefined8 *)(p_Var20 + 8);
      uVar9 = *(undefined8 *)(p_Var20 + 0x20);
      _local_58 = *(undefined1 (*) [12])(p_Var20 + 0x10);
      auVar13 = *(undefined1 (*) [12])(p_Var20 + 0x10);
      fStack_80 = (float)*(undefined8 *)(p_Var20 + 0x18);
      uStack_50._4_4_ = (undefined4)((ulong)*(undefined8 *)(p_Var20 + 0x18) >> 0x20);
      lVar18 = lVar21;
      lVar24 = lVar23;
      if (lVar21 < lVar17) {
        do {
          p_Var16 = param_3 + (param_1 + lVar18) * 0x28;
          fVar3 = *(float *)(param_3 + (param_1 + lVar18 + -1) * 0x28 + 0x18);
          lVar15 = lVar18 + -1;
          lVar19 = lVar18;
          p_Var22 = param_3 + (param_1 + lVar18 + -1) * 0x28;
          if (fVar3 < *(float *)(p_Var16 + 0x18) || fVar3 == *(float *)(p_Var16 + 0x18)) {
            lVar19 = lVar18 + 1;
            lVar15 = lVar18;
            p_Var22 = p_Var16;
          }
          uVar12 = *(undefined8 *)(p_Var22 + 8);
          lVar18 = lVar19 * 2;
          p_Var16 = param_3 + (lVar24 + param_1) * 0x28;
          *(undefined8 *)p_Var16 = *(undefined8 *)p_Var22;
          *(undefined8 *)(p_Var16 + 8) = uVar12;
          uVar12 = *(undefined8 *)(p_Var22 + 0x18);
          *(undefined8 *)(p_Var16 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
          *(undefined8 *)(p_Var16 + 0x18) = uVar12;
          *(undefined8 *)(p_Var16 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
          lVar24 = lVar15;
        } while (lVar17 != lVar18 && SBORROW8(lVar17,lVar18) == lVar17 + lVar19 * -2 < 0);
        p_Var16 = p_Var22;
        if (lVar17 == lVar18) {
LAB_00104dff:
          lVar15 = lVar18 + -1;
          p_Var22 = param_3 + (param_1 + lVar15) * 0x28;
          uVar12 = *(undefined8 *)(p_Var22 + 8);
          *(undefined8 *)p_Var16 = *(undefined8 *)p_Var22;
          *(undefined8 *)(p_Var16 + 8) = uVar12;
          uVar12 = *(undefined8 *)(p_Var22 + 0x18);
          *(undefined8 *)(p_Var16 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
          *(undefined8 *)(p_Var16 + 0x18) = uVar12;
          *(undefined8 *)(p_Var16 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
        }
        lVar18 = lVar15 + -1;
        if (lVar15 <= lVar23) goto LAB_00104ef4;
        do {
          lVar24 = lVar18 >> 1;
          p_Var22 = param_3 + (param_1 + lVar24) * 0x28;
          p_Var16 = param_3 + (lVar15 + param_1) * 0x28;
          if (fStack_80 < *(float *)(p_Var22 + 0x18) || fStack_80 == *(float *)(p_Var22 + 0x18))
          break;
          uVar12 = *(undefined8 *)(p_Var22 + 8);
          *(undefined8 *)p_Var16 = *(undefined8 *)p_Var22;
          *(undefined8 *)(p_Var16 + 8) = uVar12;
          uVar12 = *(undefined8 *)(p_Var22 + 0x18);
          *(undefined8 *)(p_Var16 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
          *(undefined8 *)(p_Var16 + 0x18) = uVar12;
          *(undefined8 *)(p_Var16 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
          lVar18 = (lVar24 + -1) - (lVar24 + -1 >> 0x3f);
          p_Var16 = p_Var22;
          lVar15 = lVar24;
        } while (lVar23 < lVar24);
        _local_58 = auVar13;
        auVar6 = _local_58;
        local_58 = auVar13._0_8_;
        uStack_50 = auVar6._8_8_;
        *(undefined8 *)(p_Var16 + 0x20) = uVar9;
        *(undefined8 *)p_Var16 = uVar10;
        *(undefined8 *)(p_Var16 + 8) = uVar11;
        *(undefined1 (*) [8])(p_Var16 + 0x10) = local_58;
        *(undefined8 *)(p_Var16 + 0x18) = uStack_50;
        if (lVar23 == 0) goto LAB_00104a1a;
      }
      else {
        p_Var16 = p_Var20;
        p_Var22 = p_Var20;
        if (lVar21 == lVar17) goto LAB_00104dff;
LAB_00104ef4:
        local_68 = *(undefined1 (*) [16])p_Var20;
        auVar6 = _local_58;
        uStack_50 = auVar6._8_8_;
        *(undefined8 *)(p_Var22 + 0x20) = uVar9;
        *(undefined8 *)p_Var22 = local_68._0_8_;
        *(undefined8 *)(p_Var22 + 8) = local_68._8_8_;
        *(undefined1 (*) [8])(p_Var22 + 0x10) = local_58;
        *(undefined8 *)(p_Var22 + 0x18) = uStack_50;
      }
      lVar23 = lVar23 + -1;
      p_Var20 = p_Var20 + -0x28;
      lVar21 = lVar21 + -2;
    } while( true );
  }
  goto LAB_00104bf4;
LAB_00104980:
  introsort(param_2,lVar21,param_3,local_e8);
  lVar17 = param_2 - param_1;
  if (lVar17 < 0x11) goto LAB_00104bf4;
  lVar21 = param_2;
  if (local_e8 == 0) goto LAB_00104c3e;
  goto LAB_00104821;
LAB_00104a1a:
  p_Var20 = param_3 + param_1 * 0x28;
  p_Var22 = param_3 + (param_2 + -1) * 0x28 + -0x28;
  lVar17 = (param_2 + -1) - param_1;
  do {
    uVar10 = *(undefined8 *)(p_Var20 + 8);
    p_Var16 = p_Var22 + 0x28;
    auVar6 = *(undefined1 (*) [16])p_Var16;
    local_68 = *(undefined1 (*) [16])p_Var16;
    p_Var1 = p_Var22 + 0x38;
    uVar11 = *(undefined8 *)(p_Var22 + 0x40);
    auVar7 = *(undefined1 (*) [16])p_Var1;
    _local_58 = *(undefined1 (*) [16])p_Var1;
    uVar9 = *(undefined8 *)(p_Var22 + 0x48);
    *(undefined8 *)(p_Var22 + 0x28) = *(undefined8 *)p_Var20;
    *(undefined8 *)(p_Var22 + 0x30) = uVar10;
    uVar10 = *(undefined8 *)(p_Var20 + 0x18);
    *(undefined8 *)(p_Var22 + 0x38) = *(undefined8 *)(p_Var20 + 0x10);
    *(undefined8 *)(p_Var22 + 0x40) = uVar10;
    *(undefined8 *)(p_Var22 + 0x48) = *(undefined8 *)(p_Var20 + 0x20);
    fStack_80 = (float)uVar11;
    if (lVar17 < 3) {
      p_Var14 = p_Var20;
      local_68 = auVar6;
      _local_58 = auVar7;
      if (lVar17 == 2) goto LAB_00104e40;
    }
    else {
      lVar21 = 2;
      lVar23 = 0;
      do {
        p_Var2 = param_3 + (param_1 + lVar21) * 0x28;
        fVar3 = *(float *)(param_3 + (param_1 + lVar21 + -1) * 0x28 + 0x18);
        p_Var14 = param_3 + (param_1 + lVar21 + -1) * 0x28;
        lVar18 = lVar21;
        lVar24 = lVar21 + -1;
        if (fVar3 < *(float *)(p_Var2 + 0x18) || fVar3 == *(float *)(p_Var2 + 0x18)) {
          lVar18 = lVar21 + 1;
          p_Var14 = p_Var2;
          lVar24 = lVar21;
        }
        uVar10 = *(undefined8 *)(p_Var14 + 8);
        lVar21 = lVar18 * 2;
        p_Var2 = param_3 + (lVar23 + param_1) * 0x28;
        *(undefined8 *)p_Var2 = *(undefined8 *)p_Var14;
        *(undefined8 *)(p_Var2 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var14 + 0x18);
        *(undefined8 *)(p_Var2 + 0x10) = *(undefined8 *)(p_Var14 + 0x10);
        *(undefined8 *)(p_Var2 + 0x18) = uVar10;
        *(undefined8 *)(p_Var2 + 0x20) = *(undefined8 *)(p_Var14 + 0x20);
        lVar23 = lVar24;
      } while (lVar21 < lVar17);
      if (lVar21 == lVar17) {
LAB_00104e40:
        uVar10 = *(undefined8 *)(p_Var22 + 8);
        *(undefined8 *)p_Var14 = *(undefined8 *)p_Var22;
        *(undefined8 *)(p_Var14 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var22 + 0x18);
        *(undefined8 *)(p_Var14 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
        *(undefined8 *)(p_Var14 + 0x18) = uVar10;
        *(undefined8 *)(p_Var14 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
        lVar24 = lVar17 + -1;
        lVar21 = lVar17 + -2 >> 1;
      }
      else {
        lVar21 = (lVar24 + -1) / 2;
        if (lVar24 == 0) goto LAB_00104bb5;
      }
      do {
        _local_58 = *(undefined1 (*) [16])p_Var1;
        local_68 = *(undefined1 (*) [16])p_Var16;
        p_Var2 = param_3 + (param_1 + lVar21) * 0x28;
        p_Var14 = param_3 + (lVar24 + param_1) * 0x28;
        if (fStack_80 < *(float *)(p_Var2 + 0x18) || fStack_80 == *(float *)(p_Var2 + 0x18)) break;
        uVar10 = *(undefined8 *)(p_Var2 + 8);
        *(undefined8 *)p_Var14 = *(undefined8 *)p_Var2;
        *(undefined8 *)(p_Var14 + 8) = uVar10;
        uVar10 = *(undefined8 *)(p_Var2 + 0x18);
        *(undefined8 *)(p_Var14 + 0x10) = *(undefined8 *)(p_Var2 + 0x10);
        *(undefined8 *)(p_Var14 + 0x18) = uVar10;
        *(undefined8 *)(p_Var14 + 0x20) = *(undefined8 *)(p_Var2 + 0x20);
        bVar25 = lVar21 != 0;
        p_Var14 = p_Var2;
        lVar24 = lVar21;
        lVar21 = (lVar21 + -1) / 2;
      } while (bVar25);
    }
LAB_00104bb5:
    p_Var22 = p_Var22 + -0x28;
    uStack_50._0_4_ = fStack_80;
    *(undefined8 *)(p_Var14 + 0x20) = uVar9;
    *(undefined8 *)p_Var14 = local_68._0_8_;
    *(undefined8 *)(p_Var14 + 8) = local_68._8_8_;
    *(undefined1 (*) [8])(p_Var14 + 0x10) = local_58;
    *(undefined8 *)(p_Var14 + 0x18) = uStack_50;
    bVar25 = 1 < lVar17;
    lVar17 = lVar17 + -1;
  } while (bVar25);
LAB_00104bf4:
  if (lVar8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConvexPolygonShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&)
   const */

void __thiscall
GodotConvexPolygonShape3D::project_range
          (GodotConvexPolygonShape3D *this,Vector3 *param_1,Transform3D *param_2,float *param_3,
          float *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  float *pfVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined8 local_80;
  float local_78;
  undefined1 local_74 [8];
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50 [8];
  uint local_48;
  long local_40;
  
  auVar4._8_4_ = local_6c;
  auVar4._0_8_ = local_74;
  auVar3._8_4_ = local_48;
  auVar3._0_8_ = local_50;
  uVar1 = *(uint *)(this + 0x80);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 != 0) {
    pfVar5 = *(float **)(this + 0x88);
    fVar8 = *(float *)(param_1 + 8);
    if ((uint)(*(int *)(this + 0x90) * 3) < uVar1) {
      fVar9 = (float)*(undefined8 *)param_1;
      fVar11 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      auVar7._0_4_ = fVar11 * (float)*(undefined8 *)(param_2 + 0xc) +
                     fVar9 * (float)*(undefined8 *)param_2 +
                     fVar8 * (float)*(undefined8 *)(param_2 + 0x18);
      auVar7._4_4_ = fVar11 * (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) +
                     fVar9 * (float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                     fVar8 * (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
      auVar7._8_8_ = 0;
      local_78 = fVar9 * *(float *)(param_2 + 8) + fVar11 * *(float *)(param_2 + 0x14) +
                 *(float *)(param_2 + 0x20) * fVar8;
      fVar8 = auVar7._0_4_ * auVar7._0_4_ + auVar7._4_4_ * auVar7._4_4_ + local_78 * local_78;
      if (fVar8 == 0.0) {
        local_50 = (undefined1  [8])CONCAT44(_LC13._4_4_,(uint)_LC13);
        local_80 = 0;
        local_78 = 0.0;
        local_48 = _LC51;
      }
      else {
        fVar8 = SQRT(fVar8);
        auVar10._4_4_ = fVar8;
        auVar10._0_4_ = fVar8;
        auVar10._8_8_ = _LC9;
        auVar7 = divps(auVar7,auVar10);
        local_80 = auVar7._0_8_;
        local_78 = local_78 / fVar8;
        local_50 = (undefined1  [8])CONCAT44(_LC13._4_4_ ^ auVar7._4_4_,(uint)_LC13 ^ auVar7._0_4_);
        local_48 = (uint)local_78 ^ _LC51;
      }
      if (*(code **)(*(long *)this + 0x20) == get_support) {
        auVar12 = get_support((Vector3 *)this);
        local_54 = auVar12._8_4_;
        local_5c._4_4_ = auVar12._4_4_;
        local_5c._0_4_ = auVar12._0_4_;
        fVar9 = (float)local_5c;
        fVar8 = local_5c._4_4_;
      }
      else {
        _local_74 = (**(code **)(*(long *)this + 0x20))(this,local_50);
        auVar12._8_4_ = SUB124(_local_74,8);
        auVar12._0_8_ = local_5c;
        fVar9 = (float)local_74._0_4_;
        fVar8 = (float)local_74._4_4_;
      }
      fVar11 = auVar12._8_4_;
      local_5c = auVar12._0_8_;
      pcVar2 = *(code **)(*(long *)this + 0x20);
      *param_3 = (*(float *)param_2 * fVar9 + *(float *)(param_2 + 4) * fVar8 +
                  *(float *)(param_2 + 8) * fVar11 + *(float *)(param_2 + 0x24)) * *(float *)param_1
                 + (*(float *)(param_2 + 0xc) * fVar9 + *(float *)(param_2 + 0x10) * fVar8 +
                    *(float *)(param_2 + 0x14) * fVar11 + *(float *)(param_2 + 0x28)) *
                   *(float *)(param_1 + 4) +
                 (fVar9 * *(float *)(param_2 + 0x18) + fVar8 * *(float *)(param_2 + 0x1c) +
                  fVar11 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x2c)) *
                 *(float *)(param_1 + 8);
      if (pcVar2 == get_support) {
        if (*(int *)(this + 0x80) == 0) {
          auVar13 = ZEXT812(0);
        }
        else {
          auVar13 = get_support((Vector3 *)this);
        }
        local_48 = auVar13._8_4_;
        auVar14._8_4_ = local_48;
        auVar14._0_8_ = local_68;
        local_50._0_4_ = auVar13._0_4_;
        local_50._4_4_ = auVar13._4_4_;
      }
      else {
        auVar14 = (*pcVar2)(this,&local_80);
        auVar13._8_4_ = local_48;
        auVar13._0_8_ = local_50;
        local_60 = auVar14._8_4_;
        local_68._4_4_ = auVar14._4_4_;
        local_68._0_4_ = auVar14._0_4_;
        local_50._0_4_ = (float)local_68;
        local_50._4_4_ = local_68._4_4_;
      }
      fVar8 = auVar14._8_4_;
      local_68 = auVar14._0_8_;
      *param_4 = (*(float *)param_2 * (float)local_50._0_4_ +
                  *(float *)(param_2 + 4) * (float)local_50._4_4_ + *(float *)(param_2 + 8) * fVar8
                 + *(float *)(param_2 + 0x24)) * *(float *)param_1 +
                 (*(float *)(param_2 + 0xc) * (float)local_50._0_4_ +
                  *(float *)(param_2 + 0x10) * (float)local_50._4_4_ +
                  *(float *)(param_2 + 0x14) * fVar8 + *(float *)(param_2 + 0x28)) *
                 *(float *)(param_1 + 4) +
                 ((float)local_50._0_4_ * *(float *)(param_2 + 0x18) +
                  (float)local_50._4_4_ * *(float *)(param_2 + 0x1c) +
                  fVar8 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x2c)) *
                 *(float *)(param_1 + 8);
      _local_50 = auVar13;
    }
    else {
      uVar6 = 0;
      do {
        fVar8 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar11 = pfVar5[2];
        fVar8 = (*(float *)param_2 * fVar8 + *(float *)(param_2 + 4) * fVar9 +
                 *(float *)(param_2 + 8) * fVar11 + *(float *)(param_2 + 0x24)) * *(float *)param_1
                + (*(float *)(param_2 + 0xc) * fVar8 + *(float *)(param_2 + 0x10) * fVar9 +
                   *(float *)(param_2 + 0x14) * fVar11 + *(float *)(param_2 + 0x28)) *
                  *(float *)(param_1 + 4) +
                (fVar8 * *(float *)(param_2 + 0x18) + fVar9 * *(float *)(param_2 + 0x1c) +
                 fVar11 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x2c)) *
                *(float *)(param_1 + 8);
        if (uVar6 == 0) {
          *param_4 = fVar8;
LAB_00105258:
          *param_3 = fVar8;
        }
        else {
          if (*param_4 <= fVar8 && fVar8 != *param_4) {
            *param_4 = fVar8;
          }
          if (fVar8 < *param_3) goto LAB_00105258;
        }
        uVar6 = uVar6 + 1;
        pfVar5 = pfVar5 + 3;
        _local_50 = auVar3;
        _local_74 = auVar4;
      } while (uVar1 != uVar6);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotCapsuleShape3D::get_data() const */

Variant * GodotCapsuleShape3D::get_data(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 100));
  Variant::Variant((Variant *)local_78,"radius");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 0x60));
  Variant::Variant((Variant *)local_78,"height");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(in_RDI,local_80);
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSeparationRayShape3D::get_data() const */

Variant * GodotSeparationRayShape3D::get_data(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 0x60));
  Variant::Variant((Variant *)local_78,"length");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(bool *)(in_RSI + 100));
  Variant::Variant((Variant *)local_78,"slide_on_slope");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(in_RDI,local_80);
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCylinderShape3D::get_data() const */

Variant * GodotCylinderShape3D::get_data(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 100));
  Variant::Variant((Variant *)local_78,"radius");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 0x60));
  Variant::Variant((Variant *)local_78,"height");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(in_RDI,local_80);
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotHeightMapShape3D::get_data() const */

void GodotHeightMapShape3D::get_data(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,*(int *)(in_RSI + 0x70));
  Variant::Variant((Variant *)local_78,"width");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(int *)(in_RSI + 0x74));
  Variant::Variant((Variant *)local_78,"depth");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 0x14));
  Variant::Variant((Variant *)local_78,"min_height");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 0x14) + *(float *)(in_RSI + 0x20));
  Variant::Variant((Variant *)local_78,"max_height");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(Vector *)(in_RSI + 0x60));
  Variant::Variant((Variant *)local_78,"heights");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(in_RDI,local_80);
  Dictionary::~Dictionary(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotWorldBoundaryShape3D::set_data(Variant const&) */

void GodotWorldBoundaryShape3D::set_data(Variant *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Variant *in_RSI;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = Variant::operator_cast_to_Plane(in_RSI);
  uVar4 = _LC62;
  param_1[0x28] = (Variant)0x1;
  uVar8 = _UNK_0011208c;
  uVar7 = _UNK_00112088;
  uVar6 = _UNK_00112084;
  uVar5 = __LC61;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = in_XMM1_Qa;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  for (puVar2 = *(undefined8 **)(param_1 + 0x48); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    (*(code *)**(undefined8 **)puVar2[2])();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSphereShape3D::set_data(Variant const&) */

void __thiscall GodotSphereShape3D::set_data(GodotSphereShape3D *this,Variant *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  fVar2 = Variant::operator_cast_to_float(param_1);
  this[0x28] = (GodotSphereShape3D)0x1;
  *(float *)(this + 0x60) = fVar2;
  fVar4 = fVar2 + fVar2;
  uVar3 = (uint)fVar2 ^ _LC51;
  *(ulong *)(this + 0x20) = CONCAT44(fVar4,fVar4);
  *(uint *)(this + 0x10) = uVar3;
  *(uint *)(this + 0x14) = uVar3;
  *(uint *)(this + 0x18) = uVar3;
  *(float *)(this + 0x1c) = fVar4;
  for (puVar1 = *(undefined8 **)(this + 0x48); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* GodotSeparationRayShape3D::get_closest_point_to(Vector3 const&) const */

void __thiscall
GodotSeparationRayShape3D::get_closest_point_to(GodotSeparationRayShape3D *this,Vector3 *param_1)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 0x60);
  fVar3 = fVar1 * fVar1 + 0.0;
  if (_LC46 <= fVar3) {
    fVar2 = 0.0;
    fVar3 = (*(float *)(param_1 + 8) * fVar1 +
            *(float *)param_1 * 0.0 + *(float *)(param_1 + 4) * 0.0) / fVar3;
    if (0.0 < fVar3) {
      if (fVar3 < (float)_LC9) {
        fVar2 = fVar3 * 0.0 + 0.0;
      }
      goto LAB_0010606f;
    }
  }
  fVar2 = 0.0;
LAB_0010606f:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}



/* GodotBoxShape3D::set_data(Variant const&) */

void GodotBoxShape3D::set_data(Variant *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  Variant *in_RSI;
  long in_FS_OFFSET;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  uint in_XMM1_Da;
  float fVar7;
  uint uVar8;
  uint local_20;
  uint uStack_1c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = Variant::operator_cast_to_Vector3(in_RSI);
  uVar3 = _LC51;
  param_1[0x28] = (Variant)0x1;
  local_20 = (uint)uVar5;
  uStack_1c = (uint)((ulong)uVar5 >> 0x20);
  fVar7 = (float)(local_20 & (uint)_LC63);
  uVar8 = uStack_1c & _LC63._4_4_;
  fVar4 = (float)(uStack_1c & (uint)_LC63);
  fVar6 = (float)(in_XMM1_Da & _LC63._4_4_);
  *(float *)(param_1 + 0x60) = fVar7;
  *(uint *)(param_1 + 100) = uVar8;
  *(float *)(param_1 + 0x68) = fVar6;
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar6 + fVar6,fVar4 + fVar4);
  *(ulong *)(param_1 + 0x10) = CONCAT44((uint)fVar4 ^ uVar3,(uint)fVar7 ^ uVar3);
  *(ulong *)(param_1 + 0x18) = CONCAT44(fVar7 + fVar7,(uint)fVar6 ^ uVar3);
  for (puVar2 = *(undefined8 **)(param_1 + 0x48); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    (*(code *)**(undefined8 **)puVar2[2])();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotCapsuleShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] __thiscall
GodotCapsuleShape3D::get_closest_point_to(GodotCapsuleShape3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 local_20;
  float local_18;
  
  fVar3 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_1 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar5 = *(float *)param_1;
  fVar2 = (float)((double)*(float *)(this + 0x60) * _LC15 - (double)fVar4);
  fVar1 = (float)((double)(float)((uint)*(float *)(this + 0x60) ^ _LC51) * _LC15 + (double)fVar4);
  fVar13 = fVar2 - fVar1;
  fVar10 = fVar3 - fVar1;
  fVar11 = fVar13 * fVar13 + 0.0;
  fVar8 = 0.0;
  if ((_LC46 <= fVar11) &&
     (fVar11 = (fVar5 * 0.0 + fVar10 * fVar13 + fVar9 * 0.0) / fVar11, 0.0 < fVar11)) {
    if (fVar11 < (float)_LC9) {
      fVar1 = fVar1 + fVar13 * fVar11;
      fVar8 = fVar11 * 0.0 + 0.0;
      fVar10 = fVar3 - fVar1;
      fVar9 = fVar9 - fVar8;
      fVar5 = fVar5 - fVar8;
    }
    else {
      fVar10 = fVar3 - fVar2;
      fVar8 = 0.0;
      fVar1 = fVar2;
    }
  }
  fVar3 = fVar5 * fVar5 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar2 = SQRT(fVar3);
  if (fVar2 < fVar4) {
    local_20 = *(undefined8 *)param_1;
    local_18 = *(float *)(param_1 + 8);
  }
  else {
    uVar12 = 0;
    fVar11 = 0.0;
    if (fVar3 != 0.0) {
      fVar11 = fVar9 / fVar2;
      auVar6._4_4_ = fVar10;
      auVar6._0_4_ = fVar5;
      auVar6._8_8_ = 0;
      auVar7._4_4_ = fVar2;
      auVar7._0_4_ = fVar2;
      auVar7._12_4_ = _LC9._4_4_;
      auVar7._8_4_ = (float)_LC9;
      auVar7 = divps(auVar6,auVar7);
      uVar12 = auVar7._0_8_;
    }
    local_18 = fVar11 * fVar4 + fVar8;
    local_20 = CONCAT44(fVar4 * (float)((ulong)uVar12 >> 0x20) + fVar1,fVar4 * (float)uVar12 + fVar8
                       );
  }
  auVar14._8_4_ = local_18;
  auVar14._0_8_ = local_20;
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar14._12_4_ = 0;
  return auVar14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSeparationRayShape3D::set_data(Variant const&) */

void GodotSeparationRayShape3D::set_data(Variant *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Variant VVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  float fVar7;
  Variant local_70 [8];
  int local_68 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_70);
  Variant::Variant((Variant *)local_48,"slide_on_slope");
  pVVar6 = (Variant *)Dictionary::operator[](local_70);
  VVar5 = (Variant)Variant::operator_cast_to_bool(pVVar6);
  Variant::Variant((Variant *)local_68,"length");
  pVVar6 = (Variant *)Dictionary::operator[](local_70);
  fVar7 = Variant::operator_cast_to_float(pVVar6);
  uVar4 = _UNK_00112098;
  uVar3 = __LC64;
  param_1[100] = VVar5;
  *(undefined4 *)(param_1 + 0x20) = 0x3dcccccd;
  param_1[0x28] = (Variant)0x1;
  *(float *)(param_1 + 0x60) = fVar7;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(float *)(param_1 + 0x24) = fVar7;
  for (puVar2 = *(undefined8 **)(param_1 + 0x48); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    (*(code *)**(undefined8 **)puVar2[2])();
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_70);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotBoxShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] __thiscall
GodotBoxShape3D::get_closest_point_to(GodotBoxShape3D *this,Vector3 *param_1)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float local_38;
  float fStack_34;
  float local_30;
  float local_28 [6];
  long local_10;
  
  iVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  local_38 = 0.0;
  fStack_34 = 0.0;
  local_30 = 0.0;
  do {
    fVar9 = *(float *)(param_1 + lVar2);
    fVar5 = *(float *)(this + lVar2 + 0x60);
    if ((fVar5 < ABS(fVar9)) && (iVar4 = iVar4 + 1, iVar4 == 1)) {
      local_28[0] = 0.0;
      local_28[1] = 0.0;
      local_28[2] = 0.0;
      fVar6 = (float)_LC9;
      if (fVar9 <= 0.0) {
        fVar6 = (float)(_LC45 & -(uint)(fVar9 < 0.0));
      }
      *(float *)((long)local_28 + lVar2) = fVar6;
      fVar5 = (*(float *)param_1 * (float)local_28._0_8_ +
               *(float *)(param_1 + 4) * SUB84(local_28._0_8_,4) +
              *(float *)(param_1 + 8) * local_28[2]) - fVar5;
      local_30 = *(float *)(param_1 + 8) - fVar5 * local_28[2];
      local_38 = (float)*(undefined8 *)param_1 - fVar5 * (float)local_28._0_8_;
      fStack_34 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar5 * SUB84(local_28._0_8_,4);
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0xc);
  if (iVar4 == 0) {
    local_38 = (float)*(undefined8 *)param_1;
    fStack_34 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    local_30 = *(float *)(param_1 + 8);
  }
  else if (iVar4 != 1) {
    fVar5 = *(float *)(param_1 + 8);
    fVar9 = (float)_LC9;
    if (fVar5 <= 0.0) {
      fVar9 = (float)(_LC45 & -(uint)(fVar5 < 0.0));
    }
    fVar6 = *(float *)(param_1 + 4);
    fVar12 = (float)_LC9;
    if (fVar6 <= 0.0) {
      fVar12 = (float)(_LC45 & -(uint)(fVar6 < 0.0));
    }
    fVar1 = *(float *)param_1;
    fVar11 = (float)_LC9;
    if (fVar1 <= 0.0) {
      fVar11 = (float)(_LC45 & -(uint)(fVar1 < 0.0));
    }
    fVar9 = fVar9 * *(float *)(this + 0x68);
    pfVar3 = local_28;
    fVar11 = (float)*(undefined8 *)(this + 0x60) * fVar11;
    fVar12 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20) * fVar12;
    fVar17 = _LC38;
    do {
      local_28[3] = fVar11;
      local_28[4] = fVar12;
      local_28[5] = fVar9;
      pfVar3[3] = (float)((uint)pfVar3[3] ^ _LC51);
      fVar14 = local_28[3] - fVar11;
      fVar15 = local_28[4] - fVar12;
      fVar13 = local_28[5] - fVar9;
      fVar10 = fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14;
      fVar16 = fVar9;
      fVar7 = fVar11;
      fVar8 = fVar12;
      if (((_LC46 <= fVar10) &&
          (fVar10 = ((fVar5 - fVar9) * fVar13 +
                    fVar15 * (fVar6 - fVar12) + fVar14 * (fVar1 - fVar11)) / fVar10, 0.0 < fVar10))
         && (fVar16 = local_28[5], fVar7 = local_28[3], fVar8 = local_28[4], fVar10 < (float)_LC9))
      {
        fVar16 = fVar13 * fVar10 + fVar9;
        fVar7 = fVar10 * fVar14 + fVar11;
        fVar8 = fVar10 * fVar15 + fVar12;
      }
      fVar10 = SQRT((fVar16 - fVar5) * (fVar16 - fVar5) +
                    (fVar7 - fVar1) * (fVar7 - fVar1) + (fVar8 - fVar6) * (fVar8 - fVar6));
      if (fVar10 < fVar17) {
        fVar17 = fVar10;
        local_38 = fVar7;
        fStack_34 = fVar8;
        local_30 = fVar16;
      }
      pfVar3 = pfVar3 + 1;
    } while (pfVar3 != local_28 + 3);
  }
  auVar18._4_4_ = fStack_34;
  auVar18._0_4_ = local_38;
  auVar18._8_4_ = local_30;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar18._12_4_ = 0;
  return auVar18;
}



/* GodotConvexPolygonShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] __thiscall
GodotConvexPolygonShape3D::get_closest_point_to(GodotConvexPolygonShape3D *this,Vector3 *param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  int *piVar10;
  float fVar11;
  int iVar12;
  long lVar13;
  float *pfVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float local_30;
  float fStack_2c;
  float local_28;
  
  pfVar14 = *(float **)(this + 0x68);
  lVar8 = *(long *)(this + 0x88);
  if (0 < *(int *)(this + 0x60)) {
    local_30 = *(float *)param_1;
    fStack_2c = *(float *)(param_1 + 4);
    fVar6 = *(float *)(param_1 + 8);
    pfVar4 = pfVar14 + (ulong)(*(int *)(this + 0x60) - 1) * 8 + 8;
    bVar9 = true;
    do {
      fVar11 = *pfVar14;
      fVar24 = pfVar14[1];
      fVar17 = pfVar14[2];
      fVar16 = fStack_2c * fVar24 + fVar11 * local_30 + fVar17 * fVar6;
      if (pfVar14[3] < fVar16) {
        lVar13 = 0;
        do {
          iVar12 = (int)lVar13;
          while( true ) {
            if ((int)pfVar14[4] <= iVar12) {
              fVar16 = fVar16 - pfVar14[3];
              local_30 = local_30 - fVar11 * fVar16;
              fStack_2c = fStack_2c - fVar24 * fVar16;
              local_28 = fVar6 - fVar17 * fVar16;
              goto LAB_00106bd4;
            }
            pfVar2 = (float *)(lVar8 + (long)*(int *)(*(long *)(pfVar14 + 6) + lVar13 * 4) * 0xc);
            pfVar3 = (float *)(lVar8 + (long)*(int *)(*(long *)(pfVar14 + 6) +
                                                     (long)(((int)lVar13 + 1) % (int)pfVar14[4]) * 4
                                                     ) * 0xc);
            fVar19 = pfVar2[1] - pfVar3[1];
            fVar21 = *pfVar2 - *pfVar3;
            fVar18 = pfVar2[2] - pfVar3[2];
            fVar20 = fVar24 * fVar21 - fVar11 * fVar19;
            fVar21 = fVar11 * fVar18 - fVar21 * fVar17;
            fVar19 = fVar19 * fVar17 - fVar18 * fVar24;
            fVar18 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
            if (fVar18 != 0.0) break;
            lVar13 = lVar13 + 1;
            iVar12 = (int)lVar13;
          }
          fVar18 = SQRT(fVar18);
          lVar13 = lVar13 + 1;
        } while (fStack_2c * (fVar21 / fVar18) + local_30 * (fVar19 / fVar18) +
                 fVar6 * (fVar20 / fVar18) <=
                 *pfVar2 * (fVar19 / fVar18) + pfVar2[1] * (fVar21 / fVar18) +
                 pfVar2[2] * (fVar20 / fVar18));
        bVar9 = false;
      }
      pfVar14 = pfVar14 + 8;
    } while (pfVar14 != pfVar4);
    if (!bVar9) {
      piVar10 = *(int **)(this + 0x78);
      if (*(int *)(this + 0x70) < 1) {
        uVar15 = 0;
        local_28 = 0.0;
      }
      else {
        uVar15 = 0;
        local_28 = 0.0;
        piVar5 = piVar10 + (ulong)(*(int *)(this + 0x70) - 1) * 4 + 4;
        fVar11 = _LC38;
        do {
          puVar1 = (undefined8 *)(lVar8 + (long)*piVar10 * 0xc);
          uVar22 = *puVar1;
          fVar24 = *(float *)(puVar1 + 1);
          fVar18 = fVar6 - fVar24;
          puVar1 = (undefined8 *)(lVar8 + (long)piVar10[1] * 0xc);
          uVar7 = *puVar1;
          fVar17 = *(float *)(puVar1 + 1);
          fVar28 = (float)((ulong)uVar7 >> 0x20);
          fVar21 = (float)uVar22;
          fVar26 = (float)uVar7 - fVar21;
          fVar23 = (float)((ulong)uVar22 >> 0x20);
          fVar27 = fVar28 - fVar23;
          fVar25 = fVar17 - fVar24;
          fVar20 = fStack_2c - fVar23;
          fVar16 = local_30 - fVar21;
          fVar19 = fVar26 * fVar26 + fVar27 * fVar27 + fVar25 * fVar25;
          if ((_LC46 <= fVar19) &&
             (fVar19 = (fVar26 * fVar16 + fVar27 * fVar20 + fVar18 * fVar25) / fVar19, 0.0 < fVar19)
             ) {
            if ((float)_LC9 <= fVar19) {
              fVar18 = fVar6 - fVar17;
              fVar20 = fStack_2c - fVar28;
              fVar16 = local_30 - (float)uVar7;
              fVar24 = fVar17;
              uVar22 = uVar7;
            }
            else {
              fVar24 = fVar24 + fVar25 * fVar19;
              fVar21 = fVar21 + fVar19 * fVar26;
              fVar23 = fVar23 + fVar19 * fVar27;
              fVar18 = fVar6 - fVar24;
              fVar20 = fStack_2c - fVar23;
              fVar16 = local_30 - fVar21;
              uVar22 = CONCAT44(fVar23,fVar21);
            }
          }
          fVar17 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar20 * fVar20);
          if (fVar17 < fVar11) {
            uVar15 = uVar22;
            fVar11 = fVar17;
            local_28 = fVar24;
          }
          piVar10 = piVar10 + 4;
        } while (piVar5 != piVar10);
      }
      local_30 = (float)uVar15;
      fStack_2c = (float)((ulong)uVar15 >> 0x20);
      goto LAB_00106bd4;
    }
  }
  local_30 = (float)*(undefined8 *)param_1;
  fStack_2c = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_28 = *(float *)(param_1 + 8);
LAB_00106bd4:
  auVar29._4_4_ = fStack_2c;
  auVar29._0_4_ = local_30;
  auVar29._8_4_ = local_28;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar29._12_4_ = 0;
    return auVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCapsuleShape3D::set_data(Variant const&) */

void GodotCapsuleShape3D::set_data(Variant *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_80);
  Variant::Variant((Variant *)local_58,"radius");
  cVar2 = Dictionary::has(local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 == '\0') {
    _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x28d,
                     "Condition \"!d.has(\"radius\")\" is true.",0,0);
  }
  else {
    Variant::Variant((Variant *)local_58,"height");
    cVar2 = Dictionary::has(local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 == '\0') {
      _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x28e,
                       "Condition \"!d.has(\"height\")\" is true.",0,0);
    }
    else {
      Variant::Variant((Variant *)local_58,"radius");
      pVVar3 = (Variant *)Dictionary::operator[](local_80);
      fVar4 = Variant::operator_cast_to_float(pVVar3);
      Variant::Variant((Variant *)local_78,"height");
      pVVar3 = (Variant *)Dictionary::operator[](local_80);
      fVar5 = Variant::operator_cast_to_float(pVVar3);
      param_1[0x28] = (Variant)0x1;
      fVar7 = _LC47 * fVar5;
      *(ulong *)(param_1 + 0x60) = CONCAT44(fVar4,fVar5);
      uVar6 = (uint)fVar4 ^ _LC51;
      *(ulong *)(param_1 + 0x20) = CONCAT44(fVar4 + fVar4,fVar5);
      *(uint *)(param_1 + 0x10) = uVar6;
      *(float *)(param_1 + 0x14) = fVar7;
      *(uint *)(param_1 + 0x18) = uVar6;
      *(float *)(param_1 + 0x1c) = fVar4 + fVar4;
      for (puVar1 = *(undefined8 **)(param_1 + 0x48); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        (*(code *)**(undefined8 **)puVar1[2])();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  Dictionary::~Dictionary((Dictionary *)local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotCylinderShape3D::set_data(Variant const&) */

void GodotCylinderShape3D::set_data(Variant *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_80);
  Variant::Variant((Variant *)local_58,"radius");
  cVar2 = Dictionary::has(local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 == '\0') {
    _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x328,
                     "Condition \"!d.has(\"radius\")\" is true.",0,0);
  }
  else {
    Variant::Variant((Variant *)local_58,"height");
    cVar2 = Dictionary::has(local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 == '\0') {
      _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x329,
                       "Condition \"!d.has(\"height\")\" is true.",0,0);
    }
    else {
      Variant::Variant((Variant *)local_58,"radius");
      pVVar3 = (Variant *)Dictionary::operator[](local_80);
      fVar4 = Variant::operator_cast_to_float(pVVar3);
      Variant::Variant((Variant *)local_78,"height");
      pVVar3 = (Variant *)Dictionary::operator[](local_80);
      fVar5 = Variant::operator_cast_to_float(pVVar3);
      param_1[0x28] = (Variant)0x1;
      fVar7 = _LC47 * fVar5;
      *(ulong *)(param_1 + 0x60) = CONCAT44(fVar4,fVar5);
      uVar6 = (uint)fVar4 ^ _LC51;
      *(ulong *)(param_1 + 0x20) = CONCAT44(fVar4 + fVar4,fVar5);
      *(uint *)(param_1 + 0x10) = uVar6;
      *(float *)(param_1 + 0x14) = fVar7;
      *(uint *)(param_1 + 0x18) = uVar6;
      *(float *)(param_1 + 0x1c) = fVar4 + fVar4;
      for (puVar1 = *(undefined8 **)(param_1 + 0x48); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        (*(code *)**(undefined8 **)puVar1[2])();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  Dictionary::~Dictionary((Dictionary *)local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GodotCapsuleShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int&,
   bool) const */

ulong GodotCapsuleShape3D::intersect_segment
                (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
                bool param_6)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  Vector3 *pVVar4;
  Vector3 *pVVar5;
  Vector3 *pVVar6;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  int local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  local_c4 = *(float *)param_3 - *(float *)param_2;
  local_bc = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar7 = local_c4 * local_c4 + local_c0 * local_c0 + local_bc * local_bc;
  if (fVar7 == 0.0) {
    local_bc = 0.0;
    local_c0 = 0.0;
    local_c4 = 0.0;
  }
  else {
    fVar7 = SQRT(fVar7);
    local_c4 = local_c4 / fVar7;
    local_c0 = local_c0 / fVar7;
    local_bc = local_bc / fVar7;
  }
  local_7c = 0;
  local_74 = 0.0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0.0;
  local_58 = 0;
  local_50 = 0;
  pVVar4 = (Vector3 *)&local_58;
  uVar3 = Geometry3D::segment_intersects_cylinder
                    (param_2,param_3,
                     *(float *)(param_1 + 0x60) -
                     (*(float *)(param_1 + 100) + *(float *)(param_1 + 100)),
                     *(float *)(param_1 + 100),(Vector3 *)&local_64,(Vector3 *)&local_58,1);
  pVVar6 = (Vector3 *)(ulong)uVar3;
  fVar7 = _LC38;
  if ((char)uVar3 != '\0') {
    fVar7 = local_c4 * (float)local_64 + local_c0 * local_64._4_4_ + local_bc * local_5c;
    if (_LC38 <= fVar7) {
      pVVar6 = (Vector3 *)0x0;
      fVar7 = _LC38;
    }
    else {
      local_7c = local_64;
      local_74 = local_5c;
      local_70 = local_58;
      local_68 = local_50;
    }
  }
  dVar9 = (double)*(float *)(param_1 + 0x60) * _LC15;
  dVar8 = (double)*(float *)(param_1 + 100);
  pVVar5 = (Vector3 *)&local_4c;
  local_48 = (float)(dVar9 - dVar8);
  fVar1 = *(float *)param_2;
  local_4c = 0;
  local_44 = 0;
  cVar2 = Geometry3D::segment_intersects_sphere
                    (pVVar5,(Vector3 *)&local_64,(Vector3 *)&local_58,fVar1,pVVar4,pVVar6);
  if (cVar2 == '\0') {
LAB_00107678:
    local_4c = 0;
    local_44 = 0;
    local_48 = (float)(dVar8 - dVar9);
    cVar2 = Geometry3D::segment_intersects_sphere
                      (pVVar5,(Vector3 *)&local_64,(Vector3 *)&local_58,fVar1,pVVar4,pVVar6);
    if (cVar2 != '\0') {
      if (local_c4 * (float)local_64 + local_c0 * local_64._4_4_ + local_bc * local_5c < fVar7)
      goto LAB_001075ff;
    }
    if ((char)pVVar6 == '\0') goto LAB_00107648;
  }
  else {
    fVar10 = local_c4 * (float)local_64 + local_c0 * local_64._4_4_ + local_bc * local_5c;
    if (fVar7 <= fVar10) goto LAB_00107678;
    local_4c = 0;
    local_7c = local_64;
    local_44 = 0;
    local_48 = (float)(dVar8 - dVar9);
    local_74 = local_5c;
    local_70 = local_58;
    local_68 = local_50;
    cVar2 = Geometry3D::segment_intersects_sphere
                      (pVVar5,(Vector3 *)&local_64,(Vector3 *)&local_58,fVar1,pVVar4,pVVar6);
    if (cVar2 != '\0') {
      if (fVar10 <= local_c0 * local_64._4_4_ + local_c4 * (float)local_64 + local_bc * local_5c)
      goto LAB_00107623;
LAB_001075ff:
      local_7c = local_64;
      local_74 = local_5c;
      local_70 = local_58;
      local_68 = local_50;
    }
  }
LAB_00107623:
  pVVar6 = (Vector3 *)0x1;
  *(undefined8 *)param_4 = local_7c;
  *(float *)(param_4 + 8) = local_74;
  *(undefined8 *)param_5 = local_70;
  param_5[2] = local_68;
LAB_00107648:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)pVVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCylinderShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int&,
   bool) const */

void GodotCylinderShape3D::intersect_segment
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
               bool param_6)

{
  Geometry3D::segment_intersects_cylinder
            (param_2,param_3,*(float *)(param_1 + 0x60),*(float *)(param_1 + 100),param_4,
             (Vector3 *)param_5,1);
  return;
}



/* GodotShape3D::configure(AABB const&) */

void __thiscall GodotShape3D::configure(GodotShape3D *this,AABB *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = *(undefined8 **)(this + 0x48);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  this[0x28] = (GodotShape3D)0x1;
  *(undefined8 *)(this + 0x20) = uVar2;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotShape3D::remove_owner(GodotShapeOwner3D*) */

long __thiscall GodotShape3D::remove_owner(GodotShape3D *this,GodotShapeOwner3D *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long *plVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  uint *puVar48;
  
  lVar38 = *(long *)(this + 0x38);
  if ((lVar38 != 0) && (*(int *)(this + 0x5c) != 0)) {
    lVar7 = *(long *)(this + 0x40);
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4);
    uVar41 = CONCAT44(0,uVar6);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x58) * 8);
    uVar37 = (long)param_1 * 0x3ffff - 1;
    uVar37 = (uVar37 ^ uVar37 >> 0x1f) * 0x15;
    uVar37 = (uVar37 ^ uVar37 >> 0xb) * 0x41;
    uVar37 = uVar37 >> 0x16 ^ uVar37;
    uVar47 = uVar37 & 0xffffffff;
    if ((int)uVar37 == 0) {
      uVar47 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar47 * lVar8;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar41;
    lVar39 = SUB168(auVar11 * auVar24,8);
    uVar44 = *(uint *)(lVar7 + lVar39 * 4);
    uVar46 = SUB164(auVar11 * auVar24,8);
    if (uVar44 != 0) {
      uVar45 = 0;
      while (((uint)uVar47 != uVar44 ||
             (lVar39 = *(long *)(lVar38 + lVar39 * 8),
             *(GodotShapeOwner3D **)(lVar39 + 0x10) != param_1))) {
        uVar45 = uVar45 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(uVar46 + 1) * lVar8;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar41;
        lVar39 = SUB168(auVar12 * auVar25,8);
        uVar44 = *(uint *)(lVar7 + lVar39 * 4);
        uVar46 = SUB164(auVar12 * auVar25,8);
        if ((uVar44 == 0) ||
           (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar26._8_8_ = 0,
           auVar26._0_8_ = uVar41, auVar14._8_8_ = 0,
           auVar14._0_8_ = (ulong)((uVar6 + uVar46) - SUB164(auVar13 * auVar26,8)) * lVar8,
           auVar27._8_8_ = 0, auVar27._0_8_ = uVar41, SUB164(auVar14 * auVar27,8) < uVar45))
        goto LAB_00107ae0;
      }
      lVar9 = *(long *)(lVar38 + (ulong)uVar46 * 8);
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar37 = *(long *)(lVar9 + 0x10) * 0x3ffff - 1;
          uVar37 = (uVar37 ^ uVar37 >> 0x1f) * 0x15;
          uVar37 = (uVar37 ^ uVar37 >> 0xb) * 0x41;
          uVar37 = uVar37 >> 0x16 ^ uVar37;
          uVar47 = uVar37 & 0xffffffff;
          if ((int)uVar37 == 0) {
            uVar47 = 1;
          }
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar47 * lVar8;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar41;
          auVar15 = auVar15 * auVar28;
          lVar39 = auVar15._0_8_;
          uVar44 = *(uint *)(lVar7 + auVar15._8_8_ * 4);
          uVar37 = (ulong)auVar15._8_4_;
          if (uVar44 != 0) {
            uVar46 = 0;
            uVar42 = auVar15._8_8_;
            do {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = (ulong)((int)uVar37 + 1) * lVar8;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = uVar41;
              auVar18 = auVar18 * auVar31;
              uVar40 = auVar18._8_8_;
              lVar39 = auVar18._0_8_;
              uVar45 = auVar18._8_4_;
              if (((uint)uVar47 == uVar44) &&
                 (lVar39 = *(long *)(lVar38 + uVar42 * 8),
                 *(long *)(lVar9 + 0x10) == *(long *)(lVar39 + 0x10))) {
                puVar48 = (uint *)(lVar7 + uVar40 * 4);
                uVar44 = *puVar48;
                if ((uVar44 != 0) &&
                   (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar44 * lVar8, auVar32._8_8_ = 0,
                   auVar32._0_8_ = uVar41, auVar20._8_8_ = 0,
                   auVar20._0_8_ = (ulong)((uVar6 + uVar45) - SUB164(auVar19 * auVar32,8)) * lVar8,
                   auVar33._8_8_ = 0, auVar33._0_8_ = uVar41, SUB164(auVar20 * auVar33,8) != 0)) {
                  uVar47 = uVar37;
                  uVar37 = (ulong)uVar45;
                  while( true ) {
                    puVar2 = (uint *)(lVar7 + uVar47 * 4);
                    *puVar48 = *puVar2;
                    puVar3 = (undefined8 *)(lVar38 + uVar40 * 8);
                    *puVar2 = uVar44;
                    puVar4 = (undefined8 *)(lVar38 + uVar47 * 8);
                    uVar10 = *puVar3;
                    *puVar3 = *puVar4;
                    *puVar4 = uVar10;
                    auVar23._8_8_ = 0;
                    auVar23._0_8_ = (ulong)((int)uVar37 + 1) * lVar8;
                    auVar36._8_8_ = 0;
                    auVar36._0_8_ = uVar41;
                    uVar40 = SUB168(auVar23 * auVar36,8);
                    puVar48 = (uint *)(lVar7 + uVar40 * 4);
                    uVar44 = *puVar48;
                    if ((uVar44 == 0) ||
                       (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar44 * lVar8, auVar34._8_8_ = 0,
                       auVar34._0_8_ = uVar41, auVar22._8_8_ = 0,
                       auVar22._0_8_ =
                            (ulong)((SUB164(auVar23 * auVar36,8) + uVar6) -
                                   SUB164(auVar21 * auVar34,8)) * lVar8, auVar35._8_8_ = 0,
                       auVar35._0_8_ = uVar41, SUB164(auVar22 * auVar35,8) == 0)) break;
                    uVar47 = uVar37;
                    uVar37 = uVar40 & 0xffffffff;
                  }
                }
                plVar5 = (long *)(lVar38 + uVar37 * 8);
                *(undefined4 *)(lVar7 + uVar37 * 4) = 0;
                plVar43 = (long *)*plVar5;
                if (*(long **)(this + 0x48) == plVar43) {
                  *(long *)(this + 0x48) = *plVar43;
                  plVar43 = (long *)*plVar5;
                }
                if (*(long **)(this + 0x50) == plVar43) {
                  *(long *)(this + 0x50) = plVar43[1];
                  plVar43 = (long *)*plVar5;
                }
                if ((long *)plVar43[1] != (long *)0x0) {
                  *(long *)plVar43[1] = *plVar43;
                  plVar43 = (long *)*plVar5;
                }
                if (*plVar43 != 0) {
                  *(long *)(*plVar43 + 8) = plVar43[1];
                  plVar43 = (long *)*plVar5;
                }
                Memory::free_static(plVar43,false);
                lVar38 = *(long *)(this + 0x38);
                *(undefined8 *)(lVar38 + uVar37 * 8) = 0;
                *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + -1;
                return lVar38;
              }
              uVar44 = *(uint *)(lVar7 + uVar40 * 4);
              uVar37 = uVar40 & 0xffffffff;
              uVar46 = uVar46 + 1;
            } while ((uVar44 != 0) &&
                    (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar44 * lVar8, auVar29._8_8_ = 0,
                    auVar29._0_8_ = uVar41, auVar17._8_8_ = 0,
                    auVar17._0_8_ = (ulong)((uVar6 + uVar45) - SUB164(auVar16 * auVar29,8)) * lVar8,
                    auVar30._8_8_ = 0, auVar30._0_8_ = uVar41, lVar39 = SUB168(auVar17 * auVar30,0),
                    uVar42 = uVar40, uVar46 <= SUB164(auVar17 * auVar30,8)));
          }
        }
        return lVar39;
      }
    }
  }
LAB_00107ae0:
  lVar38 = _err_print_error("remove_owner","modules/godot_physics_3d/godot_shape_3d.cpp",0x60,
                            "Condition \"!E\" is true.",0,0);
  return lVar38;
}



/* GodotShape3D::is_owner(GodotShapeOwner3D*) const */

undefined8 __thiscall GodotShape3D::is_owner(GodotShape3D *this,GodotShapeOwner3D *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 0x38) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x58) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x40) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(GodotShapeOwner3D **)(*(long *)(*(long *)(this + 0x38) + lVar12 * 8) + 0x10) ==
            param_1)) {
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x40) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4
                                         ) + iVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* GodotShape3D::get_owners() const */

GodotShape3D * __thiscall GodotShape3D::get_owners(GodotShape3D *this)

{
  return this + 0x30;
}



/* GodotShape3D::~GodotShape3D() */

void __thiscall GodotShape3D::~GodotShape3D(GodotShape3D *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR_get_volume_00111808;
  if (*(int *)(this + 0x5c) == 0) {
    pvVar3 = *(void **)(this + 0x38);
  }
  else {
    _err_print_error("~GodotShape3D","modules/godot_physics_3d/godot_shape_3d.cpp",0x70,
                     "Condition \"owners.size()\" is true.",0,0);
    pvVar3 = *(void **)(this + 0x38);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    if (*(int *)(this + 0x5c) == 0) goto LAB_00107c99;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x5c) = 0;
      *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
      goto LAB_00107c99;
    }
    lVar2 = 0;
    do {
      if (*(int *)(*(long *)(this + 0x40) + lVar2) != 0) {
        *(int *)(*(long *)(this + 0x40) + lVar2) = 0;
        Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
        pvVar3 = *(void **)(this + 0x38);
        *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
      }
      lVar2 = lVar2 + 4;
    } while (lVar2 != (ulong)uVar1 * 4);
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
LAB_00107c99:
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x40),false);
  return;
}



/* GodotShape3D::~GodotShape3D() */

void __thiscall GodotShape3D::~GodotShape3D(GodotShape3D *this)

{
  ~GodotShape3D(this);
  operator_delete(this,0x60);
  return;
}



/* GodotWorldBoundaryShape3D::get_plane() const */

undefined1  [16] __thiscall GodotWorldBoundaryShape3D::get_plane(GodotWorldBoundaryShape3D *this)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined1 (*) [16])(this + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotWorldBoundaryShape3D::_setup(Plane const&) */

void __thiscall GodotWorldBoundaryShape3D::_setup(GodotWorldBoundaryShape3D *this,Plane *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = _UNK_0011208c;
  uVar7 = _UNK_00112088;
  uVar6 = _UNK_00112084;
  uVar5 = __LC61;
  uVar4 = _LC62;
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = *(undefined8 **)(this + 0x48);
  this[0x28] = (GodotWorldBoundaryShape3D)0x1;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x68) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x14) = uVar6;
  *(undefined4 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x1c) = uVar8;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotWorldBoundaryShape3D::GodotWorldBoundaryShape3D() */

void __thiscall
GodotWorldBoundaryShape3D::GodotWorldBoundaryShape3D(GodotWorldBoundaryShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotWorldBoundaryShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111888;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* GodotSeparationRayShape3D::get_length() const */

undefined4 __thiscall GodotSeparationRayShape3D::get_length(GodotSeparationRayShape3D *this)

{
  return *(undefined4 *)(this + 0x60);
}



/* GodotSeparationRayShape3D::get_slide_on_slope() const */

GodotSeparationRayShape3D __thiscall
GodotSeparationRayShape3D::get_slide_on_slope(GodotSeparationRayShape3D *this)

{
  return this[100];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSeparationRayShape3D::_setup(float, bool) */

void __thiscall
GodotSeparationRayShape3D::_setup(GodotSeparationRayShape3D *this,float param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_00112098;
  uVar2 = __LC64;
  puVar1 = *(undefined8 **)(this + 0x48);
  this[100] = (GodotSeparationRayShape3D)param_2;
  *(undefined4 *)(this + 0x20) = 0x3dcccccd;
  this[0x28] = (GodotSeparationRayShape3D)0x1;
  *(float *)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(float *)(this + 0x24) = param_1;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotSeparationRayShape3D::GodotSeparationRayShape3D() */

void __thiscall
GodotSeparationRayShape3D::GodotSeparationRayShape3D(GodotSeparationRayShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotSeparationRayShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111908;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  this[100] = (GodotSeparationRayShape3D)0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* GodotSphereShape3D::get_radius() const */

undefined4 __thiscall GodotSphereShape3D::get_radius(GodotSphereShape3D *this)

{
  return *(undefined4 *)(this + 0x60);
}



/* GodotSphereShape3D::_setup(float) */

void __thiscall GodotSphereShape3D::_setup(GodotSphereShape3D *this,float param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
  
  puVar1 = *(undefined8 **)(this + 0x48);
  fVar3 = param_1 + param_1;
  *(float *)(this + 0x60) = param_1;
  uVar2 = (uint)param_1 ^ _LC51;
  this[0x28] = (GodotSphereShape3D)0x1;
  *(ulong *)(this + 0x20) = CONCAT44(fVar3,fVar3);
  *(uint *)(this + 0x10) = uVar2;
  *(uint *)(this + 0x14) = uVar2;
  *(uint *)(this + 0x18) = uVar2;
  *(float *)(this + 0x1c) = fVar3;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotSphereShape3D::GodotSphereShape3D() */

void __thiscall GodotSphereShape3D::GodotSphereShape3D(GodotSphereShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotSphereShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111988;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* GodotBoxShape3D::_setup(Vector3 const&) */

void __thiscall GodotBoxShape3D::_setup(GodotBoxShape3D *this,Vector3 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar8 = _LC51;
  uVar7 = _LC63._4_4_;
  uVar6 = (uint)_LC63;
  uVar2 = *(uint *)param_1;
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)(param_1 + 8);
  puVar1 = *(undefined8 **)(this + 0x48);
  this[0x28] = (GodotBoxShape3D)0x1;
  fVar11 = (float)(uVar2 & uVar6);
  fVar9 = (float)(uVar4 & uVar6);
  fVar10 = (float)(uVar5 & uVar7);
  *(float *)(this + 0x60) = fVar11;
  *(uint *)(this + 100) = uVar3 & uVar7;
  *(float *)(this + 0x68) = fVar10;
  *(ulong *)(this + 0x20) = CONCAT44(fVar10 + fVar10,fVar9 + fVar9);
  *(ulong *)(this + 0x10) = CONCAT44((uint)fVar9 ^ uVar8,(uint)fVar11 ^ uVar8);
  *(ulong *)(this + 0x18) = CONCAT44(fVar11 + fVar11,(uint)fVar10 ^ uVar8);
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotBoxShape3D::GodotBoxShape3D() */

void __thiscall GodotBoxShape3D::GodotBoxShape3D(GodotBoxShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotBoxShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111a08;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* GodotCapsuleShape3D::_setup(float, float) */

void __thiscall GodotCapsuleShape3D::_setup(GodotCapsuleShape3D *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  
  fVar2 = _LC47;
  puVar1 = *(undefined8 **)(this + 0x48);
  this[0x28] = (GodotCapsuleShape3D)0x1;
  *(ulong *)(this + 0x60) = CONCAT44(param_2,param_1);
  uVar3 = (uint)param_2 ^ _LC51;
  *(ulong *)(this + 0x20) = CONCAT44(param_2 + param_2,param_1);
  *(uint *)(this + 0x10) = uVar3;
  *(float *)(this + 0x14) = fVar2 * param_1;
  *(uint *)(this + 0x18) = uVar3;
  *(float *)(this + 0x1c) = param_2 + param_2;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotCapsuleShape3D::GodotCapsuleShape3D() */

void __thiscall GodotCapsuleShape3D::GodotCapsuleShape3D(GodotCapsuleShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotCapsuleShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111a88;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* GodotCylinderShape3D::_setup(float, float) */

void __thiscall GodotCylinderShape3D::_setup(GodotCylinderShape3D *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  
  fVar2 = _LC47;
  puVar1 = *(undefined8 **)(this + 0x48);
  this[0x28] = (GodotCylinderShape3D)0x1;
  *(ulong *)(this + 0x60) = CONCAT44(param_2,param_1);
  uVar3 = (uint)param_2 ^ _LC51;
  *(ulong *)(this + 0x20) = CONCAT44(param_2 + param_2,param_1);
  *(uint *)(this + 0x10) = uVar3;
  *(float *)(this + 0x14) = fVar2 * param_1;
  *(uint *)(this + 0x18) = uVar3;
  *(float *)(this + 0x1c) = param_2 + param_2;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotCylinderShape3D::GodotCylinderShape3D() */

void __thiscall GodotCylinderShape3D::GodotCylinderShape3D(GodotCylinderShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotCylinderShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111b08;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotConvexPolygonShape3D::GodotConvexPolygonShape3D() */

void __thiscall
GodotConvexPolygonShape3D::GodotConvexPolygonShape3D(GodotConvexPolygonShape3D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  uVar2 = _UNK_001120a8;
  uVar1 = __LC80;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotConvexPolygonShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_get_volume_00111b88;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x60) = uVar2;
  return;
}



/* GodotFaceShape3D::GodotFaceShape3D() */

void __thiscall GodotFaceShape3D::GodotFaceShape3D(GodotFaceShape3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x28] = (GodotFaceShape3D)0x1;
  *(undefined ***)this = &PTR_get_volume_00111c08;
  *(undefined2 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConcavePolygonShape3D::_cull_segment(int, GodotConcavePolygonShape3D::_SegmentCullParams*)
   const */

void __thiscall
GodotConcavePolygonShape3D::_cull_segment
          (GodotConcavePolygonShape3D *this,int param_1,_SegmentCullParams *param_2)

{
  Vector3 *pVVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  char cVar9;
  long in_FS_OFFSET;
  float fVar10;
  int local_4c;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    pVVar1 = (Vector3 *)(*(long *)(param_2 + 0x38) + (long)param_1 * 0x24);
    cVar9 = AABB::intersects_segment
                      (pVVar1,(Vector3 *)param_2,(Vector3 *)(param_2 + 0xc),(Vector3 *)0x0);
    if (cVar9 == '\0') break;
    iVar5 = *(int *)(pVVar1 + 0x20);
    if (-1 < iVar5) {
      plVar7 = *(long **)(param_2 + 0x40);
      plVar2 = (long *)(*(long *)(param_2 + 0x28) + (long)iVar5 * 0x18);
      iVar6 = *(int *)((long)plVar2 + 0xc);
      plVar7[0xc] = *plVar2;
      *(int *)(plVar7 + 0xd) = (int)plVar2[1];
      lVar8 = *(long *)(param_2 + 0x30);
      puVar3 = (undefined8 *)(lVar8 + (long)iVar6 * 0xc);
      *(undefined8 *)((long)plVar7 + 0x6c) = *puVar3;
      *(undefined4 *)((long)plVar7 + 0x74) = *(undefined4 *)(puVar3 + 1);
      plVar4 = (long *)(lVar8 + (long)(int)plVar2[2] * 0xc);
      puVar3 = (undefined8 *)(lVar8 + (long)*(int *)((long)plVar2 + 0x14) * 0xc);
      plVar7[0xf] = *plVar4;
      *(int *)(plVar7 + 0x10) = (int)plVar4[1];
      *(undefined8 *)((long)plVar7 + 0x84) = *puVar3;
      local_48 = 0;
      local_40 = 0.0;
      local_3c = 0;
      local_34 = 0;
      *(undefined4 *)((long)plVar7 + 0x8c) = *(undefined4 *)(puVar3 + 1);
      local_4c = iVar5;
      cVar9 = (**(code **)(*plVar7 + 0x38))
                        (plVar7,param_2,(Vector3 *)(param_2 + 0xc),&local_48,&local_3c,&local_4c);
      if (((cVar9 != '\0') &&
          (fVar10 = ((float)local_48 * *(float *)(param_2 + 0x18) +
                     local_48._4_4_ * *(float *)(param_2 + 0x1c) +
                    local_40 * *(float *)(param_2 + 0x20)) -
                    (*(float *)(param_2 + 0x18) * *(float *)param_2 +
                     *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 4) +
                    *(float *)(param_2 + 0x20) * *(float *)(param_2 + 8)), 0.0 < fVar10)) &&
         (fVar10 < *(float *)(param_2 + 100))) {
        *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
        *(float *)(param_2 + 100) = fVar10;
        *(undefined8 *)(param_2 + 0x48) = local_48;
        *(float *)(param_2 + 0x50) = local_40;
        *(undefined8 *)(param_2 + 0x54) = local_3c;
        *(undefined4 *)(param_2 + 0x5c) = local_34;
        *(int *)(param_2 + 0x60) = local_4c;
      }
      break;
    }
    if (-1 < *(int *)(pVVar1 + 0x18)) {
      _cull_segment(this,*(int *)(pVVar1 + 0x18),param_2);
    }
    param_1 = *(int *)(pVVar1 + 0x1c);
    if (param_1 < 0) break;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConcavePolygonShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&,
   int&, bool) const */

bool __thiscall
GodotConcavePolygonShape3D::intersect_segment
          (GodotConcavePolygonShape3D *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
          Vector3 *param_4,int *param_5,bool param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  float local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  GodotFaceShape3D *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  int local_e0;
  undefined **local_d8 [18];
  GodotConcavePolygonShape3D local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x68);
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if (*(long *)(lVar2 + -8) != 0) {
      uVar3 = *(undefined8 *)(this + 0x88);
      uVar1 = *(undefined8 *)(this + 0x78);
      GodotFaceShape3D::GodotFaceShape3D((GodotFaceShape3D *)local_d8);
      local_e8 = 0x60ad78ecffffffff;
      local_48 = this[0x90];
      local_100 = 0;
      local_f8 = 0;
      fVar8 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
      local_f4 = 0;
      auVar6._0_4_ = (float)*(undefined8 *)param_2 - (float)*(undefined8 *)param_1;
      auVar6._4_4_ = (float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                     (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      auVar6._8_8_ = 0;
      if (local_48 != (GodotConcavePolygonShape3D)0x0) {
        local_48 = (GodotConcavePolygonShape3D)param_6;
      }
      local_ec = 0;
      local_e0 = 0;
      local_148 = *(undefined8 *)param_1;
      local_140 = *(undefined4 *)(param_1 + 8);
      local_13c = *(undefined8 *)param_2;
      local_134 = *(undefined4 *)(param_2 + 8);
      fVar5 = auVar6._0_4_ * auVar6._0_4_ + auVar6._4_4_ * auVar6._4_4_ + fVar8 * fVar8;
      local_128 = 0.0;
      local_130 = 0;
      if (fVar5 != 0.0) {
        fVar5 = SQRT(fVar5);
        local_128 = fVar8 / fVar5;
        auVar7._4_4_ = fVar5;
        auVar7._0_4_ = fVar5;
        auVar7._8_8_ = _LC9;
        auVar6 = divps(auVar6,auVar7);
        local_130 = auVar6._0_8_;
      }
      local_120 = lVar2;
      uStack_118 = uVar1;
      local_110 = uVar3;
      local_108 = (GodotFaceShape3D *)local_d8;
      _cull_segment(this,0,(_SegmentCullParams *)&local_148);
      bVar4 = 0 < local_e0;
      if (bVar4) {
        *(undefined8 *)param_3 = local_100;
        *(undefined4 *)(param_3 + 8) = local_f8;
        *(undefined8 *)param_4 = local_f4;
        *(undefined4 *)(param_4 + 8) = local_ec;
        *param_5 = (int)local_e8;
      }
      local_d8[0] = &PTR_get_volume_00111c08;
      GodotShape3D::~GodotShape3D((GodotShape3D *)local_d8);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



/* GodotConcavePolygonShape3D::_cull(int, GodotConcavePolygonShape3D::_CullParams*) const */

undefined8 __thiscall
GodotConcavePolygonShape3D::_cull(GodotConcavePolygonShape3D *this,int param_1,_CullParams *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  
  while( true ) {
    pfVar1 = (float *)(*(long *)(param_2 + 0x38) + (long)param_1 * 0x24);
    if (((((*(float *)(param_2 + 0xc) <= 0.0 && *(float *)(param_2 + 0xc) != 0.0) ||
          (*(float *)(param_2 + 0x10) <= 0.0 && *(float *)(param_2 + 0x10) != 0.0)) ||
         (*(float *)(param_2 + 0x14) <= 0.0 && *(float *)(param_2 + 0x14) != 0.0)) ||
        ((fVar8 = pfVar1[3], fVar8 < 0.0 || (pfVar1[4] <= 0.0 && pfVar1[4] != 0.0)))) ||
       (pfVar1[5] <= 0.0 && pfVar1[5] != 0.0)) {
      _err_print_error("intersects","./core/math/aabb.h",0x8e,
                       "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                       ,0,0);
      fVar8 = pfVar1[3];
    }
    if ((fVar8 + *pfVar1 <= *(float *)param_2) ||
       (*(float *)param_2 + *(float *)(param_2 + 0xc) <= *pfVar1)) {
      return 0;
    }
    if (pfVar1[4] + pfVar1[1] <= *(float *)(param_2 + 4)) {
      return 0;
    }
    if (*(float *)(param_2 + 4) + *(float *)(param_2 + 0x10) <= pfVar1[1]) {
      return 0;
    }
    if (pfVar1[5] + pfVar1[2] <= *(float *)(param_2 + 8)) {
      return 0;
    }
    if (*(float *)(param_2 + 8) + *(float *)(param_2 + 0x14) <= pfVar1[2]) {
      return 0;
    }
    if (-1 < (int)pfVar1[8]) {
      lVar5 = *(long *)(param_2 + 0x40);
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x28) + (long)(int)pfVar1[8] * 0x18);
      iVar4 = *(int *)((long)puVar2 + 0xc);
      *(undefined8 *)(lVar5 + 0x60) = *puVar2;
      *(undefined4 *)(lVar5 + 0x68) = *(undefined4 *)(puVar2 + 1);
      lVar6 = *(long *)(param_2 + 0x30);
      puVar3 = (undefined8 *)(lVar6 + (long)iVar4 * 0xc);
      *(undefined8 *)(lVar5 + 0x6c) = *puVar3;
      *(undefined4 *)(lVar5 + 0x74) = *(undefined4 *)(puVar3 + 1);
      puVar3 = (undefined8 *)(lVar6 + (long)*(int *)(puVar2 + 2) * 0xc);
      puVar2 = (undefined8 *)(lVar6 + (long)*(int *)((long)puVar2 + 0x14) * 0xc);
      *(undefined8 *)(lVar5 + 0x78) = *puVar3;
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(lVar5 + 0x80) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar5 + 0x84) = *puVar2;
      *(undefined4 *)(lVar5 + 0x8c) = *(undefined4 *)(puVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00108a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(param_2 + 0x18))(uVar7);
      return uVar7;
    }
    if ((-1 < (int)pfVar1[6]) && (uVar7 = _cull(this,(int)pfVar1[6],param_2), (char)uVar7 != '\0'))
    break;
    param_1 = (int)pfVar1[7];
    if (param_1 < 0) {
      return 0;
    }
  }
  return uVar7;
}



/* GodotConcavePolygonShape3D::cull(AABB const&, bool (*)(void*, GodotShape3D*), void*, bool) const
    */

void __thiscall
GodotConcavePolygonShape3D::cull
          (GodotConcavePolygonShape3D *this,AABB *param_1,
          _func_bool_void_ptr_GodotShape3D_ptr *param_2,void *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  _func_bool_void_ptr_GodotShape3D_ptr *local_100;
  void *local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  GodotFaceShape3D *local_d8;
  undefined **local_c8 [18];
  undefined2 local_38;
  long local_30;
  
  lVar3 = *(long *)(this + 0x68);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar3 != 0) && (*(long *)(lVar3 + -8) != 0)) {
    uVar1 = *(undefined8 *)(this + 0x78);
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(this + 0x88);
    GodotFaceShape3D::GodotFaceShape3D((GodotFaceShape3D *)local_c8);
    local_38 = CONCAT11(param_4,this[0x90]);
    local_118 = uVar5;
    uStack_110 = uVar6;
    local_108 = uVar4;
    local_100 = param_2;
    local_f8 = param_3;
    lStack_f0 = lVar3;
    local_e8 = uVar1;
    uStack_e0 = uVar2;
    local_d8 = (GodotFaceShape3D *)local_c8;
    _cull(this,0,(_CullParams *)&local_118);
    local_c8[0] = &PTR_get_volume_00111c08;
    GodotShape3D::~GodotShape3D((GodotShape3D *)local_c8);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConcavePolygonShape3D::_fill_bvh(_Volume_BVH*, GodotConcavePolygonShape3D::BVH*, int&) */

void __thiscall
GodotConcavePolygonShape3D::_fill_bvh
          (GodotConcavePolygonShape3D *this,_Volume_BVH *param_1,BVH *param_2,int *param_3)

{
  BVH *pBVar1;
  int iVar2;
  undefined8 uVar3;
  _Volume_BVH *p_Var4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  pBVar1 = param_2 + (long)*param_3 * 0x24;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)pBVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(pBVar1 + 8) = uVar5;
  *(undefined8 *)(pBVar1 + 0x10) = uVar3;
  p_Var4 = *(_Volume_BVH **)(param_1 + 0x18);
  *(undefined4 *)(pBVar1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
  if (p_Var4 == (_Volume_BVH *)0x0) {
    p_Var4 = *(_Volume_BVH **)(param_1 + 0x20);
    *(undefined4 *)(param_2 + (long)*param_3 * 0x24 + 0x18) = 0xffffffff;
    iVar2 = *param_3;
  }
  else {
    iVar2 = *param_3;
    *param_3 = iVar2 + 1;
    *(int *)(pBVar1 + 0x18) = iVar2 + 1;
    _fill_bvh(this,p_Var4,param_2,param_3);
    p_Var4 = *(_Volume_BVH **)(param_1 + 0x20);
    iVar2 = *param_3;
  }
  if (p_Var4 == (_Volume_BVH *)0x0) {
    *(undefined4 *)(param_2 + (long)iVar2 * 0x24 + 0x1c) = 0xffffffff;
  }
  else {
    *param_3 = iVar2 + 1;
    *(int *)(pBVar1 + 0x1c) = iVar2 + 1;
    _fill_bvh(this,p_Var4,param_2,param_3);
  }
  Memory::free_static(param_1,false);
  return;
}



/* GodotConcavePolygonShape3D::GodotConcavePolygonShape3D() */

void __thiscall
GodotConcavePolygonShape3D::GodotConcavePolygonShape3D(GodotConcavePolygonShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotConcavePolygonShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111c88;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  this[0x90] = (GodotConcavePolygonShape3D)0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* GodotHeightMapShape3D::get_heights() const */

void GodotHeightMapShape3D::get_heights(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0x68) != 0) {
    CowData<float>::_ref((CowData<float> *)(in_RDI + 8),(CowData *)(in_RSI + 0x68));
  }
  return;
}



/* GodotHeightMapShape3D::get_width() const */

undefined4 __thiscall GodotHeightMapShape3D::get_width(GodotHeightMapShape3D *this)

{
  return *(undefined4 *)(this + 0x70);
}



/* GodotHeightMapShape3D::get_depth() const */

undefined4 __thiscall GodotHeightMapShape3D::get_depth(GodotHeightMapShape3D *this)

{
  return *(undefined4 *)(this + 0x74);
}



/* GodotHeightMapShape3D::_get_cell(Vector3 const&, int&, int&, int&) const */

void __thiscall
GodotHeightMapShape3D::_get_cell
          (GodotHeightMapShape3D *this,Vector3 *param_1,int *param_2,int *param_3,int *param_4)

{
  double dVar1;
  long in_FS_OFFSET;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  undefined1 local_2c [12];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = *(float *)(this + 0x18) + *(float *)(this + 0x80);
  fVar3 = (float)*(undefined8 *)(this + 0x10) + (float)*(undefined8 *)(this + 0x78);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) +
          (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20);
  local_48 = CONCAT44(fVar4,fVar3);
  local_38 = CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20),
                      fVar3 + (float)*(undefined8 *)(this + 0x1c));
  local_30 = local_40 + *(float *)(this + 0x24);
  local_2c = Vector3::clamp(param_1,(Vector3 *)&local_48);
  dVar1 = _LC15;
  if ((float)local_2c._0_4_ < 0.0) {
    *param_2 = (int)((double)(float)local_2c._0_4_ - _LC15);
  }
  else {
    *param_2 = (int)((double)(float)local_2c._0_4_ + _LC15);
  }
  if ((float)local_2c._4_4_ < 0.0) {
    dVar2 = (double)(float)local_2c._4_4_ - dVar1;
  }
  else {
    dVar2 = (double)(float)local_2c._4_4_ + dVar1;
  }
  *param_3 = (int)dVar2;
  dVar2 = (double)local_2c._8_4_;
  if (local_2c._8_4_ < 0.0) {
    dVar2 = dVar2 - dVar1;
  }
  else {
    dVar2 = dVar2 + dVar1;
  }
  *param_4 = (int)dVar2;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotHeightMapShape3D::cull(AABB const&, bool (*)(void*, GodotShape3D*), void*, bool) const */

void __thiscall
GodotHeightMapShape3D::cull
          (GodotHeightMapShape3D *this,AABB *param_1,_func_bool_void_ptr_GodotShape3D_ptr *param_2,
          void *param_3,bool param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  int local_110 [3];
  int local_104 [3];
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined **local_d8;
  float local_d0;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x68) != 0) {
    fStack_ec = *(float *)(param_1 + 0xc);
    piVar8 = local_110;
    local_f8 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                        (float)*(undefined8 *)(this + 0x78) + (float)*(undefined8 *)param_1);
    fStack_e8 = (float)*(undefined8 *)(param_1 + 0x10);
    fStack_e4 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fStack_f0 = *(float *)(param_1 + 8) + *(float *)(this + 0x80);
    _get_cell(this,(Vector3 *)&local_f8,piVar8,local_110 + 1,local_110 + 2);
    local_d0 = fStack_e4 + fStack_f0;
    local_d8 = (undefined **)
               CONCAT44((float)((ulong)local_f8 >> 0x20) + fStack_e8,(float)local_f8 + fStack_ec);
    _get_cell(this,(Vector3 *)&local_d8,local_104,local_104 + 1,local_104 + 2);
    piVar11 = local_104;
    do {
      *piVar8 = *piVar8 + -1;
      piVar8 = piVar8 + 1;
      *piVar11 = *piVar11 + 1;
      piVar11 = piVar11 + 1;
    } while (piVar8 != local_104);
    iVar10 = 0;
    if (-1 < local_110[0]) {
      iVar10 = local_110[0];
    }
    iVar6 = local_104[0];
    if (*(int *)(this + 0x70) + -1 <= local_104[0]) {
      iVar6 = *(int *)(this + 0x70) + -1;
    }
    iVar12 = 0;
    if (-1 < local_110[2]) {
      iVar12 = local_110[2];
    }
    iVar4 = *(int *)(this + 0x74) + -1;
    if (local_104[2] < *(int *)(this + 0x74) + -1) {
      iVar4 = local_104[2];
    }
    GodotFaceShape3D::GodotFaceShape3D((GodotFaceShape3D *)&local_d8);
    local_48 = !param_4;
    local_47 = param_4;
    if (iVar12 < iVar4) {
      do {
        iVar15 = iVar12 + 1;
        iVar7 = iVar10;
        while (iVar7 < iVar6) {
          iVar1 = *(int *)(this + 0x70);
          lVar2 = *(long *)(this + 0x68);
          dVar18 = ((double)iVar1 - _LC18) * _LC15;
          lVar9 = (long)(iVar7 + iVar1 * iVar12);
          dVar25 = (double)iVar7 - dVar18;
          local_6c = (float)dVar25;
          fVar16 = fStack_60;
          if (lVar9 < 0) {
            if (lVar2 != 0) {
              lVar14 = *(long *)(lVar2 + -8);
              goto LAB_0010a348;
            }
LAB_0010a340:
            fStack_60 = fVar16;
            lVar14 = 0;
LAB_0010a348:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar14,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (lVar2 == 0) goto LAB_0010a340;
          lVar14 = *(long *)(lVar2 + -8);
          if (lVar14 <= lVar9) goto LAB_0010a348;
          fStack_68 = *(float *)(lVar2 + lVar9 * 4);
          iVar13 = iVar7 + 1;
          dVar28 = ((double)*(int *)(this + 0x74) - _LC18) * _LC15;
          lVar9 = (long)(iVar1 * iVar12 + iVar13);
          fStack_64 = (float)((double)iVar12 - dVar28);
          fVar16 = (float)((double)iVar12 - dVar28);
          fStack_60 = (float)((double)iVar13 - dVar18);
          if ((lVar14 <= lVar9) || (lVar9 < 0)) goto LAB_0010a348;
          fStack_5c = *(float *)(lVar2 + lVar9 * 4);
          lVar9 = (long)(iVar1 * iVar15 + iVar7);
          fStack_58 = fVar16;
          local_54 = local_6c;
          if ((lVar9 < 0) || (lVar14 <= lVar9)) goto LAB_0010a348;
          fVar29 = *(float *)(lVar2 + lVar9 * 4);
          fVar19 = local_6c - fStack_60;
          fVar26 = (float)((double)iVar15 - dVar28);
          fVar17 = fVar16 - fVar26;
          local_50 = CONCAT44(fVar26,fVar29);
          fVar29 = fStack_68 - fVar29;
          fVar26 = (local_6c - local_6c) * (fStack_68 - fStack_5c) - fVar19 * fVar29;
          fVar29 = fVar29 * (fStack_64 - fVar16) - fVar17 * (fStack_68 - fStack_5c);
          fVar16 = fVar17 * fVar19 - (fStack_64 - fVar16) * (local_6c - local_6c);
          auVar22._4_4_ = fVar16;
          auVar22._0_4_ = fVar29;
          auVar22._8_4_ =
               ((float)((ulong)((double)iVar12 - dVar28) >> 0x20) - 0.0) * 0.0 - fStack_60;
          auVar22._12_4_ = fStack_60 * ((float)((ulong)dVar25 >> 0x20) - 0.0) - fVar19;
          fVar16 = fVar29 * fVar29 + fVar16 * fVar16 + fVar26 * fVar26;
          local_70 = 0.0;
          local_78 = 0;
          if (fVar16 != 0.0) {
            fVar16 = SQRT(fVar16);
            local_70 = fVar26 / fVar16;
            auVar24._4_4_ = fVar16;
            auVar24._0_4_ = fVar16;
            auVar24._8_8_ = _LC9;
            auVar22 = divps(auVar22,auVar24);
            local_78 = auVar22._0_8_;
          }
          bVar5 = (*param_2)(param_3,(GodotShape3D *)&local_d8);
          if (bVar5) goto LAB_0010a3c8;
          local_6c = fStack_60;
          fStack_68 = fStack_5c;
          fStack_64 = fStack_58;
          lVar2 = *(long *)(this + 0x68);
          lVar9 = (long)(*(int *)(this + 0x70) * iVar15 + iVar13);
          dVar18 = (double)iVar13 - ((double)*(int *)(this + 0x70) - _LC18) * _LC15;
          fVar16 = (float)dVar18;
          if (lVar9 < 0) {
            if (lVar2 != 0) {
LAB_0010a448:
              lVar14 = *(long *)(lVar2 + -8);
              fStack_60 = fVar16;
              goto LAB_0010a348;
            }
            goto LAB_0010a340;
          }
          if (lVar2 == 0) goto LAB_0010a340;
          if (*(long *)(lVar2 + -8) <= lVar9) goto LAB_0010a448;
          dVar25 = (double)iVar15 - ((double)*(int *)(this + 0x74) - _LC18) * _LC15;
          fVar29 = *(float *)(lVar2 + lVar9 * 4);
          fVar17 = (float)((ulong)dVar25 >> 0x20);
          fVar26 = (float)dVar25;
          fVar27 = fStack_5c - fVar29;
          fVar19 = fStack_5c - (float)local_50;
          fVar23 = (float)((ulong)local_50 >> 0x20);
          auVar21._0_4_ = fVar19 * (fStack_58 - fVar26) - (fStack_58 - fVar23) * fVar27;
          auVar21._4_4_ =
               (fStack_58 - fVar23) * (fStack_60 - fVar16) -
               (fStack_60 - local_54) * (fStack_58 - fVar26);
          auVar21._8_4_ = (fVar16 - fVar17) * 0.0 - (fVar16 - 0.0) * 0.0;
          auVar21._12_4_ =
               (fStack_5c - (float)((ulong)dVar18 >> 0x20)) * 0.0 -
               (fStack_5c - 0.0) * (0.0 - fVar17);
          fVar17 = (fStack_60 - local_54) * fVar27 - fVar19 * (fStack_60 - fVar16);
          fVar19 = auVar21._0_4_ * auVar21._0_4_ + auVar21._4_4_ * auVar21._4_4_ + fVar17 * fVar17;
          local_70 = 0.0;
          local_78 = 0;
          if (fVar19 != 0.0) {
            fVar19 = SQRT(fVar19);
            auVar20._4_4_ = fVar19;
            auVar20._0_4_ = fVar19;
            auVar20._8_8_ = _LC9;
            auVar22 = divps(auVar21,auVar20);
            local_70 = fVar17 / fVar19;
            local_78 = auVar22._0_8_;
          }
          fStack_60 = fVar16;
          fStack_5c = fVar29;
          fStack_58 = fVar26;
          bVar5 = (*param_2)(param_3,(GodotShape3D *)&local_d8);
          iVar7 = iVar13;
          if (bVar5) goto LAB_0010a3c8;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar4);
    }
LAB_0010a3c8:
    local_d8 = &PTR_get_volume_00111c08;
    GodotShape3D::~GodotShape3D((GodotShape3D *)&local_d8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotHeightMapShape3D::_build_accelerator() */

void __thiscall GodotHeightMapShape3D::_build_accelerator(GodotHeightMapShape3D *this)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar23;
  float fVar24;
  undefined1 auVar21 [16];
  int iVar25;
  int iVar27;
  undefined1 auVar26 [16];
  float fVar28;
  int local_68;
  int local_64;
  long local_60;
  uint local_4c;
  undefined1 auVar22 [16];
  
  if (*(int *)(this + 0x88) != 0) {
    *(undefined4 *)(this + 0x88) = 0;
  }
  lVar10 = *(long *)(this + 0x70);
  iVar20 = (int)lVar10;
  iVar23 = (int)((ulong)lVar10 >> 0x20);
  iVar25 = (int)((-(uint)(iVar20 < 0) & (uint)_LC85) + iVar20) >> 4;
  iVar27 = (int)((-(uint)(lVar10 < 0) & _LC85._4_4_) + iVar23) >> 4;
  *(ulong *)(this + 0x98) = CONCAT44(iVar27,iVar25);
  if (0 < iVar20 % 0x10) {
    iVar25 = iVar25 + 1;
    *(int *)(this + 0x98) = iVar25;
  }
  if (0 < iVar23 % 0x10) {
    iVar27 = iVar27 + 1;
    *(int *)(this + 0x9c) = iVar27;
  }
  uVar12 = iVar25 * iVar27;
  if (uVar12 < 2) {
    return;
  }
  uVar11 = *(uint *)(this + 0x88);
  if (uVar11 <= uVar12) {
    if (uVar12 <= uVar11) goto LAB_0010a52d;
    uVar1 = uVar12 - 1;
    if (*(uint *)(this + 0x8c) < uVar12) {
      uVar11 = uVar1 >> 1 | uVar1;
      uVar11 = uVar11 >> 2 | uVar11;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 >> 8 | uVar11;
      uVar11 = (uVar11 >> 0x10 | uVar11) + 1;
      *(uint *)(this + 0x8c) = uVar11;
      lVar10 = Memory::realloc_static(*(void **)(this + 0x90),(ulong)uVar11 * 8,false);
      *(long *)(this + 0x90) = lVar10;
      if (lVar10 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar11 = *(uint *)(this + 0x88);
      iVar27 = *(int *)(this + 0x9c);
      if (uVar12 <= uVar11) goto LAB_0010a526;
    }
    lVar10 = *(long *)(this + 0x90);
    puVar9 = (undefined8 *)(lVar10 + (ulong)uVar11 * 8);
    do {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined8 *)(lVar10 + 8 + ((ulong)(uVar1 - uVar11) + (ulong)uVar11) * 8));
  }
LAB_0010a526:
  *(uint *)(this + 0x88) = uVar12;
LAB_0010a52d:
  if (0 < iVar27) {
    iVar25 = *(int *)(this + 0x98);
    iVar20 = 0;
    uVar12 = 0;
    local_68 = 0;
    do {
      if (0 < iVar25) {
        iVar23 = *(int *)(this + 0x70);
        lVar10 = *(long *)(this + 0x68);
        lVar14 = (long)(iVar23 * iVar20);
        if (lVar14 < 0) {
          if (lVar10 != 0) {
            lVar18 = *(long *)(lVar10 + -8);
            goto LAB_0010a69d;
          }
        }
        else {
          local_60 = (long)(int)uVar12 << 3;
          if (lVar10 != 0) {
            lVar18 = *(long *)(lVar10 + -8);
            auVar21._0_8_ = 0;
            uVar13 = 0;
            lVar16 = lVar14;
            local_4c = uVar12;
            while( true ) {
              lVar14 = lVar16;
              if (lVar18 <= lVar16) goto LAB_0010a69d;
              uVar2 = *(undefined4 *)(lVar10 + lVar16 * 4);
              iVar6 = (int)auVar21._0_8_;
              auVar21._0_8_ = CONCAT44(uVar2,uVar2);
              auVar21._8_8_ = 0;
              iVar7 = *(int *)(this + 0x74);
              if (iVar20 + 0x11 <= *(int *)(this + 0x74)) {
                iVar7 = iVar20 + 0x11;
              }
              iVar8 = iVar6 + 0x11;
              if (iVar23 < iVar6 + 0x11) {
                iVar8 = iVar23;
              }
              if (iVar20 < iVar7) {
                iVar19 = local_68 * iVar23 * 0x10;
                local_64 = iVar20;
                do {
                  fVar24 = auVar21._4_4_;
                  if ((int)uVar13 < iVar8) {
                    lVar14 = (long)(iVar19 + iVar6);
                    if ((lVar18 <= lVar14) || (lVar14 < 0)) goto LAB_0010a69d;
                    lVar17 = (long)iVar19;
                    lVar15 = lVar17 + uVar13 + 1;
                    auVar26 = auVar21;
                    fVar28 = fVar24;
                    while( true ) {
                      fVar3 = *(float *)(lVar10 + ((ulong)(uint)(iVar19 + iVar6) - (lVar17 + uVar13)
                                                  ) * 4 + -4 + lVar15 * 4);
                      if (fVar3 < auVar26._0_4_) {
                        auVar26 = ZEXT416((uint)fVar3);
                      }
                      else {
                        if (fVar3 <= fVar24) {
                          fVar3 = fVar24;
                        }
                        fVar28 = 0.0;
                        fVar24 = fVar3;
                      }
                      if ((ulong)((iVar8 - iVar6) - 1) + uVar13 + 1 + lVar17 == lVar15) break;
                      lVar14 = lVar15;
                      if ((lVar15 < 0) || (bVar4 = lVar18 <= lVar15, lVar15 = lVar15 + 1, bVar4))
                      goto LAB_0010a69d;
                    }
                    auVar22._0_8_ = auVar26._0_8_;
                    auVar22._8_4_ = auVar26._4_4_;
                    auVar22._12_4_ = fVar28;
                    auVar21._8_8_ = auVar22._8_8_;
                    auVar21._0_4_ = auVar26._0_4_;
                    auVar21._4_4_ = fVar24;
                  }
                  local_64 = local_64 + 1;
                  iVar19 = iVar19 + iVar23;
                } while (local_64 != iVar7);
              }
              if (*(uint *)(this + 0x88) <= local_4c) {
                _err_print_index_error
                          ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)local_4c,
                           (ulong)*(uint *)(this + 0x88),"p_index","count","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              *(ulong *)(*(long *)(this + 0x90) + local_60) = auVar21._0_8_;
              if (uVar13 == (ulong)(iVar25 - 1) << 4) break;
              uVar13 = uVar13 + 0x10;
              local_60 = local_60 + 8;
              lVar16 = lVar16 + 0x10;
              local_4c = local_4c + 1;
              auVar21._0_8_ = uVar13 & 0xffffffff;
            }
            goto LAB_0010a716;
          }
        }
        lVar18 = 0;
LAB_0010a69d:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar18,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
LAB_0010a716:
      local_68 = local_68 + 1;
      uVar12 = uVar12 + iVar25;
      iVar20 = iVar20 + 0x10;
    } while (local_68 != iVar27);
  }
  return;
}



/* GodotHeightMapShape3D::_setup(Vector<float> const&, int, int, float, float) */

void __thiscall
GodotHeightMapShape3D::_setup
          (GodotHeightMapShape3D *this,Vector *param_1,int param_2,int param_3,float param_4,
          float param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(this + 0x68) != *(long *)(param_1 + 8)) {
    CowData<float>::_ref((CowData<float> *)(this + 0x68),(CowData *)(param_1 + 8));
  }
  *(int *)(this + 0x70) = param_2;
  *(int *)(this + 0x74) = param_3;
  fVar3 = _LC16;
  *(undefined4 *)(this + 0x7c) = 0;
  fVar2 = (float)(param_3 + -1) * fVar3 + 0.0;
  fVar3 = fVar3 * (float)(param_2 + -1) + 0.0;
  *(float *)(this + 0x80) = fVar2;
  *(float *)(this + 0x78) = fVar3;
  _build_accelerator(this);
  this[0x28] = (GodotHeightMapShape3D)0x1;
  *(ulong *)(this + 0x10) = CONCAT44(param_4,0.0 - fVar3);
  *(ulong *)(this + 0x18) = CONCAT44((float)(param_2 + -1),0.0 - fVar2);
  *(ulong *)(this + 0x20) = CONCAT44((float)(param_3 + -1),param_5 - param_4);
  for (puVar1 = *(undefined8 **)(this + 0x48); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  return;
}



/* GodotHeightMapShape3D::GodotHeightMapShape3D() */

void __thiscall GodotHeightMapShape3D::GodotHeightMapShape3D(GodotHeightMapShape3D *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotHeightMapShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00111d10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* GodotShape3D::add_owner(GodotShapeOwner3D*) */

void __thiscall GodotShape3D::add_owner(GodotShape3D *this,GodotShapeOwner3D *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  GodotShapeOwner3D *local_40 [2];
  
  lVar2 = *(long *)(this + 0x38);
  if ((lVar2 != 0) && (*(int *)(this + 0x5c) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4));
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x58) * 8);
    uVar12 = (long)param_1 * 0x3ffff - 1;
    uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
    uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
    uVar12 = uVar12 >> 0x16 ^ uVar12;
    uVar16 = uVar12 & 0xffffffff;
    if ((int)uVar12 == 0) {
      uVar16 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar16 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(*(long *)(this + 0x40) + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      while (((uint)uVar16 != uVar17 ||
             (param_1 != *(GodotShapeOwner3D **)(*(long *)(lVar2 + lVar15 * 8) + 0x10)))) {
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(*(long *)(this + 0x40) + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
        if ((uVar17 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x58) * 4) + uVar14) -
                                 SUB164(auVar6 * auVar10,8)) * lVar3, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar18, SUB164(auVar7 * auVar11,8) < uVar19)) goto LAB_0010abc0;
      }
      lVar2 = *(long *)(lVar2 + (ulong)uVar14 * 8);
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 0x18);
        *piVar1 = *piVar1 + 1;
        return;
      }
    }
  }
LAB_0010abc0:
  local_40[0] = param_1;
  puVar13 = (undefined4 *)
            HashMap<GodotShapeOwner3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner3D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner3D*,int>>>
            ::operator[]((HashMap<GodotShapeOwner3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner3D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner3D*,int>>>
                          *)(this + 0x30),local_40);
  *puVar13 = 1;
  return;
}



/* GodotConvexPolygonShape3D::_setup(Vector<Vector3> const&) */

void __thiscall GodotConvexPolygonShape3D::_setup(GodotConvexPolygonShape3D *this,Vector *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  iVar3 = ConvexHullComputer::convex_hull(param_1,(MeshData *)(this + 0x60));
  if (iVar3 != 0) {
    _err_print_error("_setup","modules/godot_physics_3d/godot_shape_3d.cpp",0x44c,
                     "Failed to build convex hull",0,0);
  }
  if (*(int *)(this + 0x90) != 0) {
    *(undefined4 *)(this + 0x90) = 0;
  }
  LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>::resize
            ((LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false> *)
             (this + 0xa0),0);
  if (*(int *)(this + 0x80) == 0) {
    fVar17 = 0.0;
    fVar20 = 0.0;
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    fVar25 = 0.0;
    lVar16 = 0;
    fVar17 = 0.0;
    fVar20 = 0.0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar18 = 0.0;
    do {
      while ((int)lVar16 != 0) {
        pfVar4 = (float *)(*(long *)(this + 0x88) + lVar16 * 0xc);
        if (((fVar25 < 0.0) || (fVar17 < 0.0)) || (fVar20 < 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                           ,0,0);
        }
        fVar21 = pfVar4[1];
        lVar16 = lVar16 + 1;
        fVar19 = *pfVar4;
        fVar27 = fVar19;
        if (fVar19 <= fVar25 + fVar24) {
          fVar27 = fVar25 + fVar24;
        }
        if (fVar24 <= fVar19) {
          fVar19 = fVar24;
        }
        fVar24 = fVar21;
        if (fVar21 <= fVar17 + fVar18) {
          fVar24 = fVar17 + fVar18;
        }
        if (fVar18 <= fVar21) {
          fVar21 = fVar18;
        }
        fVar25 = fVar27 - fVar19;
        fVar27 = pfVar4[2];
        fVar17 = fVar24 - fVar21;
        fVar18 = fVar27;
        if (fVar27 <= fVar20 + fVar26) {
          fVar18 = fVar20 + fVar26;
        }
        if (fVar26 <= fVar27) {
          fVar27 = fVar26;
        }
        fVar20 = fVar18 - fVar27;
        fVar24 = fVar19;
        fVar26 = fVar27;
        fVar18 = fVar21;
        if (*(uint *)(this + 0x80) <= (uint)lVar16) goto LAB_0010ad53;
      }
      pfVar4 = *(float **)(this + 0x88);
      lVar16 = lVar16 + 1;
      fVar19 = *pfVar4;
      fVar18 = pfVar4[1];
      fVar27 = pfVar4[2];
      fVar24 = fVar19;
      fVar26 = fVar27;
    } while ((uint)lVar16 < *(uint *)(this + 0x80));
LAB_0010ad53:
    uVar23 = CONCAT44(fVar25,fVar27);
    uVar22 = CONCAT44(fVar18,fVar19);
  }
  puVar1 = *(undefined8 **)(this + 0x48);
  this[0x28] = (GodotConvexPolygonShape3D)0x1;
  *(undefined8 *)(this + 0x10) = uVar22;
  *(undefined8 *)(this + 0x18) = uVar23;
  *(ulong *)(this + 0x20) = CONCAT44(fVar20,fVar17);
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    (*(code *)**(undefined8 **)puVar1[2])();
  }
  uVar12 = *(uint *)(this + 0x80);
  uVar7 = (ulong)*(uint *)(this + 0x90);
  iVar3 = -1;
  do {
    iVar14 = -1;
    fVar17 = (float)iVar3;
    do {
      iVar15 = -1;
      fVar20 = (float)iVar14;
      do {
        if ((iVar3 == 0 && iVar14 == 0) && iVar15 == 0) {
          iVar15 = 1;
        }
        fVar24 = (float)iVar15;
        fVar18 = fVar24 * fVar24 + fVar20 * fVar20 + fVar17 * fVar17;
        if (fVar18 == 0.0) {
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar26 = fVar25;
          if (uVar12 != 0) goto LAB_0010ae28;
LAB_0010afc0:
          uVar13 = 0xffffffff;
        }
        else {
          fVar18 = SQRT(fVar18);
          fVar26 = fVar17 / fVar18;
          fVar25 = fVar20 / fVar18;
          fVar24 = fVar24 / fVar18;
          if (uVar12 == 0) goto LAB_0010afc0;
LAB_0010ae28:
          pfVar4 = *(float **)(this + 0x88);
          uVar13 = 0xffffffff;
          uVar10 = 0;
          fVar18 = 0.0;
          do {
            fVar19 = pfVar4[1] * fVar25 + *pfVar4 * fVar26 + pfVar4[2] * fVar24;
            if ((uVar13 == 0xffffffff) || (fVar18 < fVar19)) {
              uVar13 = uVar10;
              fVar18 = fVar19;
            }
            uVar10 = uVar10 + 1;
            pfVar4 = pfVar4 + 3;
          } while (uVar12 != uVar10);
        }
        puVar6 = *(uint **)(this + 0x98);
        iVar9 = (int)uVar7;
        if (iVar9 != 0) {
          puVar5 = puVar6;
          do {
            if (*puVar5 == uVar13) goto LAB_0010aeb2;
            puVar5 = puVar5 + 1;
          } while (puVar6 + uVar7 != puVar5);
        }
        if (*(int *)(this + 0x94) == iVar9) {
          uVar7 = (ulong)(uint)(iVar9 * 2);
          if (iVar9 * 2 == 0) {
            uVar7 = 1;
          }
          *(int *)(this + 0x94) = (int)uVar7;
          puVar6 = (uint *)Memory::realloc_static(puVar6,uVar7 * 4,false);
          *(uint **)(this + 0x98) = puVar6;
          if (puVar6 == (uint *)0x0) goto LAB_0010b1da;
          uVar7 = (ulong)*(uint *)(this + 0x90);
        }
        *(int *)(this + 0x90) = (int)uVar7 + 1;
        puVar6[uVar7] = uVar13;
        uVar12 = *(uint *)(this + 0x80);
        uVar7 = (ulong)*(uint *)(this + 0x90);
LAB_0010aeb2:
        iVar15 = iVar15 + 1;
      } while (iVar15 != 2);
      iVar14 = iVar14 + 1;
    } while (iVar14 != 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 2);
  if ((uint)uVar7 < uVar12) {
    LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>::resize
              ((LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false> *)
               (this + 0xa0),uVar12);
    puVar6 = *(uint **)(this + 0x78);
    puVar5 = puVar6 + (ulong)*(uint *)(this + 0x70) * 4;
    if (puVar5 != puVar6) {
      uVar12 = *puVar6;
      uVar7 = (ulong)*(uint *)(this + 0xa0);
      if (uVar12 < *(uint *)(this + 0xa0)) {
        do {
          uVar13 = puVar6[1];
          puVar11 = (uint *)((ulong)uVar12 * 0x10 + *(long *)(this + 0xa8));
          uVar12 = *puVar11;
          pvVar8 = *(void **)(puVar11 + 2);
          if (uVar12 == puVar11[1]) {
            uVar7 = (ulong)(uVar12 * 2);
            if (uVar12 * 2 == 0) {
              uVar7 = 1;
            }
            puVar11[1] = (uint)uVar7;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar7 * 4,false);
            *(void **)(puVar11 + 2) = pvVar8;
            if (pvVar8 == (void *)0x0) {
LAB_0010b1da:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar12 = *puVar11;
          }
          *puVar11 = uVar12 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar12 * 4) = uVar13;
          uVar12 = puVar6[1];
          uVar7 = (ulong)*(uint *)(this + 0xa0);
          if (*(uint *)(this + 0xa0) <= uVar12) break;
          uVar13 = *puVar6;
          puVar11 = (uint *)((ulong)uVar12 * 0x10 + *(long *)(this + 0xa8));
          uVar12 = *puVar11;
          pvVar8 = *(void **)(puVar11 + 2);
          if (uVar12 == puVar11[1]) {
            uVar7 = (ulong)(uVar12 * 2);
            if (uVar12 * 2 == 0) {
              uVar7 = 1;
            }
            puVar11[1] = (uint)uVar7;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar7 * 4,false);
            *(void **)(puVar11 + 2) = pvVar8;
            if (pvVar8 == (void *)0x0) goto LAB_0010b1da;
            uVar12 = *puVar11;
          }
          puVar6 = puVar6 + 4;
          *puVar11 = uVar12 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar12 * 4) = uVar13;
          if (puVar5 == puVar6) {
            return;
          }
          uVar12 = *puVar6;
          uVar7 = (ulong)*(uint *)(this + 0xa0);
        } while (uVar12 < *(uint *)(this + 0xa0));
      }
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar12,uVar7,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  return;
}



/* GodotConvexPolygonShape3D::set_data(Variant const&) */

void GodotConvexPolygonShape3D::set_data(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  Variant aVStack_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Vector(aVStack_38);
  _setup((GodotConvexPolygonShape3D *)param_1,(Vector *)aVStack_38);
  lVar2 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotHeightMapShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&,
   int&, bool) const */

ulong __thiscall
GodotHeightMapShape3D::intersect_segment
          (GodotHeightMapShape3D *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
          Vector3 *param_4,int *param_5,bool param_6)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar6;
  Vector3 *pVVar7;
  int iVar8;
  Vector3 *extraout_RDX;
  int iVar9;
  int iVar10;
  Vector3 *pVVar11;
  Vector3 *pVVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  int iVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar29;
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  int local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  float local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  float local_f0;
  GodotHeightMapShape3D *local_e8;
  GodotFaceShape3D *local_e0;
  undefined **local_d8;
  float local_d0;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  lVar1 = *(long *)(this + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
LAB_0010ba67:
    uVar15 = 0;
  }
  else {
    fVar17 = *(float *)(param_1 + 8);
    fVar22 = *(float *)param_1 + *(float *)(this + 0x78);
    fVar18 = *(float *)(this + 0x80);
    fVar26 = *(float *)(param_2 + 8);
    if ((float)((uint)fVar22 & _LC99) < _LC98) {
      fVar22 = (float)((uint)((float)(int)fVar22 -
                             (float)(-(uint)(fVar22 < (float)(int)fVar22) & (uint)_LC9)) |
                      ~_LC99 & (uint)fVar22);
    }
    iVar10 = (int)fVar22;
    fVar22 = fVar17 + fVar18;
    if ((float)((uint)fVar22 & _LC99) < _LC98) {
      fVar22 = (float)((uint)((float)(int)fVar22 -
                             (float)(-(uint)(fVar22 < (float)(int)fVar22) & (uint)_LC9)) |
                      ~_LC99 & (uint)fVar22);
    }
    iVar8 = (int)fVar22;
    fVar22 = *(float *)(this + 0x78) + *(float *)param_2;
    if ((float)((uint)fVar22 & _LC99) < _LC98) {
      fVar22 = (float)((uint)((float)(int)fVar22 -
                             (float)(-(uint)(fVar22 < (float)(int)fVar22) & (uint)_LC9)) |
                      ~_LC99 & (uint)fVar22);
    }
    fVar23 = fVar26 + fVar18;
    if ((float)((uint)fVar23 & _LC99) < _LC98) {
      fVar23 = (float)((uint)((float)(int)fVar23 -
                             (float)(-(uint)(fVar23 < (float)(int)fVar23) & (uint)_LC9)) |
                      ~_LC99 & (uint)fVar23);
    }
    bVar14 = (int)fVar22 == iVar10 && (int)fVar23 == iVar8;
    fVar29 = (float)*(undefined8 *)param_2;
    fVar31 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar30 = (float)*(undefined8 *)param_1;
    fVar33 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    if ((int)fVar22 != iVar10 || (int)fVar23 != iVar8) {
      if ((*(int *)(this + 0x88) == 0) ||
         ((fVar29 - fVar30) * (fVar29 - fVar30) + (fVar26 - fVar17) * (fVar26 - fVar17) < _LC102)) {
        bVar3 = _intersect_grid_segment<bool(_HeightmapSegmentCullParams&,_HeightmapGridCullState_const&)>
                          (this,_heightmap_cell_cull_segment,param_1,param_2,*(int *)(this + 0x70),
                           *(int *)(this + 0x74),(Vector3 *)(this + 0x78),param_3,param_4);
        uVar15 = CONCAT71(extraout_var,bVar3) & 0xffffffff;
      }
      else {
        local_138 = CONCAT44(fVar33 * _UNK_00112054,fVar30 * _LC104);
        local_130 = fVar17 * _LC104;
        local_128 = CONCAT44(fVar31 * _UNK_00112054,fVar29 * _LC104);
        local_120 = fVar26 * _LC104;
        local_d8 = (undefined **)
                   CONCAT44((float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) * _UNK_00112054,
                            (float)*(undefined8 *)(this + 0x78) * _LC104);
        local_d0 = fVar18 * _LC104;
        bVar3 = _intersect_grid_segment<bool(_HeightmapSegmentCullParams&,_HeightmapGridCullState_const&)>
                          (this,_heightmap_chunk_cull_segment,(Vector3 *)&local_138,
                           (Vector3 *)&local_128,*(int *)(this + 0x98) + 1,*(int *)(this + 0x9c) + 1
                           ,(Vector3 *)&local_d8,param_3,param_4);
        uVar15 = CONCAT71(extraout_var_00,bVar3) & 0xffffffff;
      }
      goto LAB_0010b40d;
    }
    auVar28._0_4_ = fVar29 - fVar30;
    auVar28._4_4_ = fVar31 - fVar33;
    GodotFaceShape3D::GodotFaceShape3D((GodotFaceShape3D *)&local_d8);
    local_104 = 0;
    local_fc = 0;
    local_48 = param_6;
    local_128 = *(undefined8 *)param_1;
    local_f8 = 0;
    fVar26 = fVar26 - fVar17;
    auVar28._8_8_ = 0;
    local_f0 = 0.0;
    local_120 = *(float *)(param_1 + 8);
    local_11c = *(undefined8 *)param_2;
    local_114 = *(undefined4 *)(param_2 + 8);
    fVar17 = auVar28._0_4_ * auVar28._0_4_ + auVar28._4_4_ * auVar28._4_4_ + fVar26 * fVar26;
    local_108 = 0.0;
    local_110 = 0;
    if (fVar17 != 0.0) {
      fVar17 = SQRT(fVar17);
      local_108 = fVar26 / fVar17;
      auVar20._4_4_ = fVar17;
      auVar20._0_4_ = fVar17;
      auVar20._12_4_ = _LC9._4_4_;
      auVar20._8_4_ = (uint)_LC9;
      auVar28 = divps(auVar28,auVar20);
      local_110 = auVar28._0_8_;
    }
    iVar16 = *(int *)(this + 0x70);
    lVar13 = *(long *)(lVar1 + -8);
    iVar5 = iVar16 + -2;
    if (iVar10 < iVar16 + -2) {
      iVar5 = iVar10;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar10 = *(int *)(this + 0x74) + -2;
    if (iVar10 <= iVar8) {
      iVar8 = iVar10;
    }
    dVar24 = ((double)iVar16 - _LC18) * _LC15;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar10 = iVar16 * iVar8;
    lVar6 = (long)(iVar10 + iVar5);
    fVar17 = (float)((double)iVar5 - dVar24);
    local_e8 = this;
    local_e0 = (GodotFaceShape3D *)&local_d8;
    local_6c = fVar17;
    if ((lVar6 < 0) || (lVar13 <= lVar6)) {
LAB_0010bb5b:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    fStack_68 = *(float *)(lVar1 + lVar6 * 4);
    iVar9 = iVar5 + 1;
    lVar6 = (long)(iVar10 + iVar9);
    dVar32 = ((double)*(int *)(this + 0x74) - _LC18) * _LC15;
    fStack_64 = (float)((double)iVar8 - dVar32);
    fVar18 = (float)((double)iVar8 - dVar32);
    local_60 = (float)((double)iVar9 - dVar24);
    if ((lVar13 <= lVar6) || (iVar10 + iVar9 < 0)) goto LAB_0010bb5b;
    fStack_5c = *(float *)(lVar1 + lVar6 * 4);
    iVar16 = iVar16 + iVar10;
    lVar6 = (long)(iVar16 + iVar5);
    fStack_58 = fVar18;
    local_54 = fVar17;
    if ((lVar13 <= lVar6) || (lVar6 < 0)) goto LAB_0010bb5b;
    fVar26 = *(float *)(lVar1 + lVar6 * 4);
    fVar22 = fVar17 - local_60;
    fVar23 = (float)((double)(iVar8 + 1) - dVar32);
    local_50 = CONCAT44(fVar23,fVar26);
    fVar31 = (fVar17 - fVar17) * (fStack_68 - fStack_5c) - fVar22 * (fStack_68 - fVar26);
    auVar19._0_4_ =
         (fStack_68 - fVar26) * (fStack_64 - fVar18) - (fVar18 - fVar23) * (fStack_68 - fStack_5c);
    auVar19._4_4_ = (fVar18 - fVar23) * fVar22 - (fStack_64 - fVar18) * (fVar17 - fVar17);
    auVar19._8_4_ = ((float)((ulong)((double)iVar8 - dVar32) >> 0x20) - 0.0) * 0.0 - local_60;
    auVar19._12_4_ = local_60 * ((float)((ulong)((double)iVar5 - dVar24) >> 0x20) - 0.0) - fVar22;
    fVar18 = auVar19._0_4_ * auVar19._0_4_ + auVar19._4_4_ * auVar19._4_4_ + fVar31 * fVar31;
    local_70 = 0.0;
    local_78 = 0;
    if (fVar18 != 0.0) {
      fVar18 = SQRT(fVar18);
      local_70 = fVar31 / fVar18;
      auVar27._4_4_ = fVar18;
      auVar27._0_4_ = fVar18;
      auVar27._12_4_ = _LC9._4_4_;
      auVar27._8_4_ = (uint)_LC9;
      auVar28 = divps(auVar19,auVar27);
      local_78 = auVar28._0_8_;
    }
    pVVar12 = (Vector3 *)&local_138;
    local_13c = 0;
    pVVar7 = (Vector3 *)&local_144;
    pVVar11 = (Vector3 *)&local_128;
    local_144 = 0;
    local_138 = 0;
    local_130 = 0.0;
    local_148 = -1;
    cVar4 = GodotFaceShape3D::intersect_segment
                      ((GodotFaceShape3D *)&local_d8,pVVar11,(Vector3 *)&local_11c,pVVar7,pVVar12,
                       &local_148,true);
    if (cVar4 == '\0') {
      lVar13 = *(long *)(lVar1 + -8);
      local_6c = local_60;
      fStack_68 = fStack_5c;
      fStack_64 = fStack_58;
      lVar6 = (long)(iVar16 + iVar9);
      if ((iVar16 + iVar9 < 0) || (lVar13 <= lVar6)) goto LAB_0010bb5b;
      fVar18 = *(float *)(lVar1 + lVar6 * 4);
      fStack_58 = fStack_58 - fVar23;
      fVar30 = fStack_5c - fVar18;
      fVar22 = local_60 - (float)((double)iVar9 - dVar24);
      fVar31 = fVar22 * fStack_58 - fStack_58 * (local_60 - fVar17);
      fVar29 = (fStack_5c - fVar26) * fStack_58 - fStack_58 * fVar30;
      fVar26 = fVar30 * (local_60 - fVar17) - fVar22 * (fStack_5c - fVar26);
      fVar17 = fVar29 * fVar29 + fVar31 * fVar31 + fVar26 * fVar26;
      local_70 = 0.0;
      local_78 = 0;
      if (fVar17 != 0.0) {
        fVar17 = SQRT(fVar17);
        auVar21._4_4_ = fVar31;
        auVar21._0_4_ = fVar29;
        auVar21._8_4_ = (0.0 - (float)((ulong)((double)iVar9 - dVar24) >> 0x20)) * 0.0 - 0.0;
        auVar21._12_4_ = 0;
        auVar25._4_4_ = fVar17;
        auVar25._0_4_ = fVar17;
        auVar25._12_4_ = _LC9._4_4_;
        auVar25._8_4_ = (uint)_LC9;
        auVar28 = divps(auVar21,auVar25);
        local_78 = auVar28._0_8_;
        local_70 = fVar26 / fVar17;
      }
      local_144 = 0;
      local_13c = 0;
      local_138 = 0;
      local_130 = 0.0;
      local_148 = -1;
      fStack_5c = fVar18;
      fStack_58 = fVar23;
      cVar4 = GodotFaceShape3D::intersect_segment
                        ((GodotFaceShape3D *)&local_d8,pVVar11,extraout_RDX,pVVar7,pVVar12,
                         &local_148,true);
      if (cVar4 == '\0') {
        local_d8 = &PTR_get_volume_00111c08;
        GodotShape3D::~GodotShape3D((GodotShape3D *)&local_d8);
        goto LAB_0010ba67;
      }
    }
    local_104 = local_144;
    local_fc = local_13c;
    local_f8 = local_138;
    local_f0 = local_130;
    *(undefined8 *)param_3 = local_144;
    *(undefined4 *)(param_3 + 8) = local_13c;
    *(undefined8 *)param_4 = local_138;
    *(float *)(param_4 + 8) = local_130;
    local_d8 = &PTR_get_volume_00111c08;
    GodotShape3D::~GodotShape3D((GodotShape3D *)&local_d8);
    uVar15 = (ulong)bVar14;
  }
LAB_0010b40d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<Vector3> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CowData<Vector3> *pCVar8;
  CowData<Vector3> *pCVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<Vector3> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<Vector3> *)(lVar11 * 0xc);
    if (pCVar3 != (CowData<Vector3> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<Vector3> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 0xc != 0) {
    uVar4 = param_1 * 0xc - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<Vector3> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<Vector3> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010f0e0();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_0010be4c:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_0010bdd7;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010be4c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_0010bef2;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset((void *)((long)puVar12 + lVar10 * 0xc),0,(param_1 - lVar10) * 0xc);
LAB_0010bdd7:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010bef2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* GodotConcavePolygonShape3D::get_faces() const */

void GodotConcavePolygonShape3D::get_faces(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long in_RSI;
  long in_RDI;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(in_RSI + 0x68);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + -8) * 3;
  }
  lVar8 = 0;
  CowData<Vector3>::resize<false>((CowData<Vector3> *)(in_RDI + 8),lVar5);
  lVar5 = *(long *)(in_RSI + 0x68);
  do {
    if ((lVar5 == 0) || (*(long *)(lVar5 + -8) <= lVar8)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar1 = (undefined8 *)(lVar5 + lVar8 * 0x18);
    puVar7 = &local_58;
    lVar5 = (long)((int)lVar8 * 3);
    local_58 = *puVar1;
    auStack_50 = (undefined1  [8])puVar1[1];
    local_48 = puVar1[2];
    do {
      lVar4 = (long)*(int *)((long)puVar7 + 0xc);
      lVar6 = *(long *)(in_RSI + 0x78);
      if (lVar4 < 0) {
        if (lVar6 != 0) {
LAB_0010c08d:
          lVar5 = *(long *)(lVar6 + -8);
          goto LAB_0010c091;
        }
LAB_0010c0d0:
        lVar5 = 0;
LAB_0010c091:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (lVar6 == 0) goto LAB_0010c0d0;
      if (*(long *)(lVar6 + -8) <= lVar4) goto LAB_0010c08d;
      puVar1 = (undefined8 *)(lVar6 + lVar4 * 0xc);
      if (*(long *)(in_RDI + 8) == 0) {
        lVar6 = 0;
LAB_0010c0db:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar6,"p_index","size()","",false,
                   false);
      }
      else {
        lVar6 = *(long *)(*(long *)(in_RDI + 8) + -8);
        if (lVar6 <= lVar5) goto LAB_0010c0db;
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(in_RDI + 8));
        puVar2 = (undefined8 *)(*(long *)(in_RDI + 8) + lVar5 * 0xc);
        *puVar2 = *puVar1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      }
      puVar7 = (undefined8 *)((long)puVar7 + 4);
      lVar5 = lVar5 + 1;
    } while (puVar7 != (undefined8 *)(auStack_50 + 4));
    lVar5 = *(long *)(in_RSI + 0x68);
    lVar8 = lVar8 + 1;
  } while( true );
}



/* GodotConcavePolygonShape3D::get_data() const */

Variant * GodotConcavePolygonShape3D::get_data(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  Variant *pVVar4;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  Vector local_88 [8];
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_90);
  get_faces();
  Variant::Variant((Variant *)local_58,local_88);
  Variant::Variant((Variant *)local_78,"faces");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  Variant::Variant((Variant *)local_58,*(bool *)(in_RSI + 0x90));
  Variant::Variant((Variant *)local_78,"backface_collision");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(in_RDI,local_90);
  Dictionary::~Dictionary(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConvexPolygonShape3D::get_data() const */

Variant * GodotConvexPolygonShape3D::get_data(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  Variant *in_RDI;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  Vector local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = 0;
  CowData<Vector3>::resize<false>((CowData<Vector3> *)local_50,(ulong)*(uint *)(in_RSI + 0x80));
  if (*(int *)(in_RSI + 0x80) != 0) {
    lVar4 = 0;
    do {
      puVar5 = (undefined8 *)(*(long *)(in_RSI + 0x88) + lVar4 * 0xc);
      if (local_50[0] == 0) {
        lVar3 = 0;
LAB_0010c420:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar4,lVar3,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar3 = *(long *)(local_50[0] + -8);
      if (lVar3 <= lVar4) goto LAB_0010c420;
      lVar3 = lVar4 + 1;
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_50);
      *(undefined8 *)(local_50[0] + lVar4 * 0xc) = *puVar5;
      *(undefined4 *)(local_50[0] + 8 + lVar4 * 0xc) = *(undefined4 *)(puVar5 + 1);
      lVar4 = lVar3;
    } while ((uint)lVar3 < *(uint *)(in_RSI + 0x80));
  }
  Variant::Variant(in_RDI,local_58);
  lVar4 = local_50[0];
  if (local_50[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_50[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotConcavePolygonShape3D::_setup(Vector<Vector3> const&, bool) */

void __thiscall
GodotConcavePolygonShape3D::_setup(GodotConcavePolygonShape3D *this,Vector *param_1,bool param_2)

{
  long *plVar1;
  CowData<GodotConcavePolygonShape3D::BVH> *this_00;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  _Volume_BVH_Element *p_Var9;
  ulong uVar10;
  _Volume_BVH *p_Var11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  CowData<GodotConcavePolygonShape3D::Face> *this_01;
  undefined8 *puVar15;
  size_t __n;
  ulong uVar16;
  long lVar17;
  long lVar18;
  _Volume_BVH_Element *p_Var19;
  long lVar20;
  float fVar21;
  long lVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  _Volume_BVH_Element *local_c0;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  puVar14 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((puVar14 == (undefined8 *)0x0) || (iVar5 = (int)puVar14[-1], iVar5 == 0)) {
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    puVar14 = *(undefined8 **)(this + 0x48);
    local_68 = 0;
    fStack_60 = 0.0;
    fStack_54 = 0.0;
    this[0x28] = (GodotConcavePolygonShape3D)0x1;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
      (*(code *)**(undefined8 **)puVar14[2])();
    }
  }
  else {
    iVar4 = iVar5 / 3;
    if (iVar5 % 3 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_setup","modules/godot_physics_3d/godot_shape_3d.cpp",0x653,
                         "Condition \"src_face_count % 3\" is true.",0,0);
        return;
      }
      goto LAB_0010d42b;
    }
    if (iVar5 < -2) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write
                ((CowData<GodotConcavePolygonShape3D::Face> *)(this + 0x68));
      CowData<Vector3>::resize<false>((CowData<Vector3> *)(this + 0x78),(long)(iVar4 * 3));
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(this + 0x78));
      uStack_80 = 0;
      local_88 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      local_c0 = (_Volume_BVH_Element *)0x0;
    }
    else {
      if (iVar4 == 0) {
        local_c0 = *(_Volume_BVH_Element **)(this + 0x68);
        if (local_c0 != (_Volume_BVH_Element *)0x0) {
          if (*(ulong *)(local_c0 + -8) != 0) {
            LOCK();
            local_c0 = local_c0 + -0x10;
            *(ulong *)local_c0 = *(ulong *)local_c0 - 1;
            UNLOCK();
            if (*(ulong *)local_c0 == 0) {
              lVar18 = *(long *)(this + 0x68);
              *(undefined8 *)(this + 0x68) = 0;
              Memory::free_static((void *)(lVar18 + -0x10),false);
            }
            else {
              *(undefined8 *)(this + 0x68) = 0;
            }
          }
          local_c0 = (_Volume_BVH_Element *)0x0;
        }
        goto LAB_0010c727;
      }
      uVar23 = (ulong)iVar4;
      uVar7 = uVar23 * 0x28 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      puVar8 = (ulong *)Memory::alloc_static((uVar7 | uVar7 >> 0x20) + 0x11,false);
      if (puVar8 == (ulong *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        local_c0 = (_Volume_BVH_Element *)0x0;
        lVar18 = *(long *)(this + 0x68);
        if (lVar18 != 0) goto LAB_0010c643;
LAB_0010d227:
        CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write
                  ((CowData<GodotConcavePolygonShape3D::Face> *)(this + 0x68));
        uVar7 = uVar23 * 0x18 - 1;
        uVar7 = uVar7 | uVar7 >> 1;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        uVar7 = uVar7 | uVar7 >> 0x10;
        lVar18 = (uVar7 | uVar7 >> 0x20) + 1;
LAB_0010d284:
        puVar15 = (undefined8 *)Memory::alloc_static(lVar18 + 0x10,false);
        if (puVar15 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          puVar13 = puVar15 + 2;
          *puVar15 = 1;
          puVar15[1] = 0;
          lVar18 = 0;
          *(undefined8 **)(this + 0x68) = puVar13;
LAB_0010d03b:
          puVar15 = puVar13 + lVar18 * 3;
          do {
            *puVar15 = 0;
            puVar12 = puVar15 + 3;
            *(undefined4 *)(puVar15 + 1) = 0;
            *(undefined8 *)((long)puVar15 + 0xc) = 0;
            *(undefined4 *)((long)puVar15 + 0x14) = 0;
            puVar15 = puVar12;
          } while (puVar12 != puVar13 + uVar23 * 3);
LAB_0010d076:
          puVar13[-1] = uVar23;
        }
      }
      else {
        local_c0 = (_Volume_BVH_Element *)(puVar8 + 2);
        *puVar8 = 1;
        p_Var19 = local_c0;
        do {
          *(ulong *)p_Var19 = 0;
          p_Var9 = p_Var19 + 0x28;
          *(float *)(p_Var19 + 8) = 0.0;
          *(undefined8 *)(p_Var19 + 0xc) = 0;
          *(float *)(p_Var19 + 0x14) = 0.0;
          *(ulong *)(p_Var19 + 0x18) = 0;
          *(float *)(p_Var19 + 0x20) = 0.0;
          *(float *)(p_Var19 + 0x24) = 0.0;
          p_Var19 = p_Var9;
        } while ((_Volume_BVH_Element *)(puVar8 + uVar23 * 5 + 2) != p_Var9);
        puVar8[1] = uVar23;
        if (1 < *puVar8) {
          uVar16 = puVar8[1];
          uVar7 = 0x10;
          __n = uVar16 * 0x28;
          if (__n != 0) {
            uVar7 = __n - 1 | __n - 1 >> 1;
            uVar7 = uVar7 | uVar7 >> 2;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            uVar7 = uVar7 | uVar7 >> 0x10;
            uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
          }
          puVar13 = (undefined8 *)Memory::alloc_static(uVar7,false);
          if (puVar13 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            p_Var19 = (_Volume_BVH_Element *)(puVar13 + 2);
            *puVar13 = 1;
            puVar13[1] = uVar16;
            memcpy(p_Var19,local_c0,__n);
            LOCK();
            *puVar8 = *puVar8 - 1;
            UNLOCK();
            local_c0 = p_Var19;
            if (*puVar8 == 0) {
              Memory::free_static(puVar8,false);
            }
          }
        }
        lVar18 = *(long *)(this + 0x68);
        if (lVar18 == 0) goto LAB_0010d227;
LAB_0010c643:
        this_01 = (CowData<GodotConcavePolygonShape3D::Face> *)(this + 0x68);
        uVar7 = *(ulong *)(lVar18 + -8);
        if (uVar23 == uVar7) goto LAB_0010c727;
        CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write(this_01);
        if (uVar7 * 0x18 != 0) {
          uVar10 = uVar7 * 0x18 - 1;
          uVar16 = uVar23 * 0x18 - 1;
          uVar10 = uVar10 | uVar10 >> 1;
          uVar16 = uVar16 >> 1 | uVar16;
          uVar10 = uVar10 | uVar10 >> 2;
          uVar16 = uVar16 >> 2 | uVar16;
          uVar10 = uVar10 | uVar10 >> 4;
          uVar16 = uVar16 >> 4 | uVar16;
          uVar10 = uVar10 | uVar10 >> 8;
          uVar16 = uVar16 >> 8 | uVar16;
          uVar10 = uVar10 | uVar10 >> 0x10;
          uVar16 = uVar16 >> 0x10 | uVar16;
          uVar10 = uVar10 | uVar10 >> 0x20;
          uVar16 = uVar16 >> 0x20 | uVar16;
          lVar18 = uVar16 + 1;
          if ((long)uVar23 <= (long)uVar7) {
            if (uVar10 != uVar16) goto LAB_0010cea7;
LAB_0010c716:
            if (*(long *)(this + 0x68) == 0) goto GodotConcavePolygonShape3D__setup;
            *(ulong *)(*(long *)(this + 0x68) + -8) = uVar23;
            goto LAB_0010c727;
          }
          if (uVar10 != uVar16) goto LAB_0010cf93;
LAB_0010d025:
          puVar13 = *(undefined8 **)(this + 0x68);
          if (puVar13 == (undefined8 *)0x0) {
            FUN_0010f0f8();
            return;
          }
          lVar18 = puVar13[-1];
          if (lVar18 < (long)uVar23) goto LAB_0010d03b;
          goto LAB_0010d076;
        }
        uVar16 = uVar23 * 0x18 - 1;
        uVar16 = uVar16 | uVar16 >> 1;
        uVar16 = uVar16 | uVar16 >> 2;
        uVar16 = uVar16 | uVar16 >> 4;
        uVar16 = uVar16 >> 8 | uVar16;
        uVar16 = uVar16 >> 0x10 | uVar16;
        lVar18 = (uVar16 >> 0x20 | uVar16) + 1;
        if ((long)uVar7 < (long)uVar23) {
LAB_0010cf93:
          if (uVar7 != 0) {
            iVar6 = CowData<GodotConcavePolygonShape3D::Face>::_realloc(this_01,lVar18);
            if (iVar6 == 0) goto LAB_0010d025;
            goto LAB_0010c727;
          }
          goto LAB_0010d284;
        }
LAB_0010cea7:
        iVar6 = CowData<GodotConcavePolygonShape3D::Face>::_realloc(this_01,lVar18);
        if (iVar6 == 0) goto LAB_0010c716;
      }
LAB_0010c727:
      CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write
                ((CowData<GodotConcavePolygonShape3D::Face> *)(this + 0x68));
      puVar13 = *(undefined8 **)(this + 0x68);
      CowData<Vector3>::resize<false>((CowData<Vector3> *)(this + 0x78),(long)(iVar4 * 3));
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(this + 0x78));
      local_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      puVar15 = *(undefined8 **)(this + 0x78);
      uStack_74 = 0;
      if (2 < iVar5) {
        fVar21 = 0.0;
        p_Var19 = local_c0;
        do {
          iVar5 = (int)fVar21 * 3;
          uVar2 = *puVar14;
          fStack_60 = *(float *)(puVar14 + 1);
          local_68._0_4_ = (float)uVar2;
          local_68._4_4_ = (float)((ulong)uVar2 >> 0x20);
          fStack_5c = (float)*(undefined8 *)((long)puVar14 + 0xc);
          fStack_58 = (float)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
          fStack_54 = *(float *)((long)puVar14 + 0x14);
          local_50 = puVar14[3];
          fVar24 = fStack_5c;
          if (fStack_5c <= (float)local_68 + 0.0) {
            fVar24 = (float)local_68 + 0.0;
          }
          fVar28 = fStack_5c;
          if ((float)local_68 <= fStack_5c) {
            fVar28 = (float)local_68;
          }
          local_48 = *(float *)(puVar14 + 4);
          fVar26 = fStack_58;
          if (fStack_58 <= local_68._4_4_ + 0.0) {
            fVar26 = local_68._4_4_ + 0.0;
          }
          fVar27 = fStack_58;
          if (local_68._4_4_ <= fStack_58) {
            fVar27 = local_68._4_4_;
          }
          fVar30 = fStack_54;
          if (fStack_54 <= fStack_60 + 0.0) {
            fVar30 = fStack_60 + 0.0;
          }
          fVar25 = fStack_54;
          if (fStack_60 <= fStack_54) {
            fVar25 = fStack_60;
          }
          local_68 = uVar2;
          if (((fVar24 - fVar28 < 0.0) || (fVar26 - fVar27 < 0.0)) || (fVar30 - fVar25 < 0.0)) {
            _err_print_error("expand_to","./core/math/aabb.h",0x158,
                             "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                             ,0,0);
          }
          fVar30 = (fVar30 - fVar25) + fVar25;
          fVar26 = (fVar26 - fVar27) + fVar27;
          fVar32 = (fVar24 - fVar28) + fVar28;
          fVar24 = (float)local_50;
          if (fVar28 <= (float)local_50) {
            fVar24 = fVar28;
          }
          fVar28 = (float)local_50;
          if ((float)local_50 <= fVar32) {
            fVar28 = fVar32;
          }
          uVar29 = 0;
          *(float *)(p_Var19 + 0x24) = fVar21;
          fVar32 = local_50._4_4_;
          if (local_50._4_4_ <= fVar26) {
            fVar32 = fVar26;
          }
          fVar26 = local_50._4_4_;
          if (fVar27 <= local_50._4_4_) {
            fVar26 = fVar27;
          }
          fVar27 = local_48;
          if (local_48 <= fVar30) {
            fVar27 = fVar30;
          }
          fVar30 = local_48;
          if (fVar25 <= local_48) {
            fVar30 = fVar25;
          }
          fVar25 = (fVar28 - fVar24) * _LC16;
          *(float *)p_Var19 = fVar24;
          *(float *)(p_Var19 + 4) = fVar26;
          *(float *)(p_Var19 + 8) = fVar30;
          *(float *)(p_Var19 + 0xc) = fVar28 - fVar24;
          fVar31 = _LC16 * (fVar32 - fVar26);
          fVar28 = (fVar27 - fVar30) * _LC16 + fVar30;
          *(float *)(p_Var19 + 0x20) = fVar28;
          *(float *)(p_Var19 + 0x10) = fVar32 - fVar26;
          *(float *)(p_Var19 + 0x14) = fVar27 - fVar30;
          *(float *)(p_Var19 + 0x18) = fVar25 + fVar24;
          *(float *)(p_Var19 + 0x1c) = fVar26 + fVar31;
          *(int *)((long)puVar13 + 0xc) = iVar5;
          *(int *)(puVar13 + 2) = iVar5 + 1;
          *(int *)((long)puVar13 + 0x14) = iVar5 + 2;
          local_98 = Face3::get_plane(&local_68,0);
          *puVar13 = local_98;
          *(float *)(puVar13 + 1) = fVar28;
          *puVar15 = local_68;
          local_90 = CONCAT44(uVar29,fVar28);
          *(float *)(puVar15 + 1) = fStack_60;
          *(ulong *)((long)puVar15 + 0xc) = CONCAT44(fStack_58,fStack_5c);
          *(float *)((long)puVar15 + 0x14) = fStack_54;
          puVar15[3] = local_50;
          *(float *)(puVar15 + 4) = local_48;
          if (fVar21 == 0.0) {
            local_88 = *(ulong *)p_Var19;
            uStack_80 = (undefined4)*(ulong *)(p_Var19 + 8);
            uStack_7c = (undefined4)(*(ulong *)(p_Var19 + 8) >> 0x20);
            uStack_78 = (undefined4)*(ulong *)(p_Var19 + 0x10);
            uStack_74 = (undefined4)(*(ulong *)(p_Var19 + 0x10) >> 0x20);
          }
          else {
            AABB::merge_with((AABB *)&local_88);
          }
          fVar21 = (float)((int)fVar21 + 1);
          puVar14 = (undefined8 *)((long)puVar14 + 0x24);
          p_Var19 = p_Var19 + 0x28;
          puVar13 = puVar13 + 3;
          puVar15 = (undefined8 *)((long)puVar15 + 0x24);
        } while ((int)fVar21 < iVar4);
      }
    }
    local_a0 = 0;
    p_Var11 = (_Volume_BVH *)_volume_build_bvh(local_c0,iVar4,&local_a0);
    lVar20 = (long)local_a0;
    iVar5 = local_a0 + 1;
    this_00 = (CowData<GodotConcavePolygonShape3D::BVH> *)(this + 0x88);
    lVar18 = (long)iVar5;
    if (iVar5 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else {
      lVar17 = *(long *)(this + 0x88);
      if (lVar17 == 0) {
        if (iVar5 != 0) {
          lVar22 = 0;
          CowData<GodotConcavePolygonShape3D::BVH>::_copy_on_write(this_00);
LAB_0010cdb9:
          uVar7 = lVar18 * 0x24 - 1;
          uVar7 = uVar7 >> 1 | uVar7;
          uVar7 = uVar7 >> 2 | uVar7;
          uVar7 = uVar7 >> 4 | uVar7;
          uVar7 = uVar7 >> 8 | uVar7;
          uVar7 = uVar7 | uVar7 >> 0x10;
          lVar17 = (uVar7 | uVar7 >> 0x20) + 1;
          if (lVar22 < lVar18) {
LAB_0010ce0d:
            if (lVar22 == 0) {
              puVar14 = (undefined8 *)Memory::alloc_static(lVar17 + 0x10,false);
              if (puVar14 == (undefined8 *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                puVar13 = puVar14 + 2;
                *puVar14 = 1;
                puVar14[1] = 0;
                *(undefined8 **)(this + 0x88) = puVar13;
                lVar17 = 0;
LAB_0010d09c:
                if (lVar17 < lVar18) {
                  puVar14 = (undefined8 *)((long)puVar13 + lVar17 * 0x24);
                  do {
                    *puVar14 = 0;
                    puVar15 = (undefined8 *)((long)puVar14 + 0x24);
                    *(undefined4 *)(puVar14 + 1) = 0;
                    *(undefined8 *)((long)puVar14 + 0xc) = 0;
                    *(undefined4 *)((long)puVar14 + 0x14) = 0;
                    puVar14[3] = 0;
                    *(undefined4 *)(puVar14 + 4) = 0;
                    puVar14 = puVar15;
                  } while (puVar15 != (undefined8 *)((long)puVar13 + (lVar20 * 9 + 9) * 4));
                }
                puVar13[-1] = lVar18;
              }
            }
            else {
              iVar5 = CowData<GodotConcavePolygonShape3D::BVH>::_realloc(this_00,lVar17);
              if (iVar5 == 0) {
LAB_0010d088:
                puVar13 = *(undefined8 **)(this + 0x88);
                if (puVar13 == (undefined8 *)0x0) {
                  FUN_0010f0f8();
                  return;
                }
                lVar17 = puVar13[-1];
                goto LAB_0010d09c;
              }
            }
          }
          else {
LAB_0010cf74:
            iVar5 = CowData<GodotConcavePolygonShape3D::BVH>::_realloc(this_00,lVar17);
            if (iVar5 == 0) goto LAB_0010cc31;
          }
        }
      }
      else {
        lVar22 = *(long *)(lVar17 + -8);
        if (lVar18 != lVar22) {
          if (iVar5 == 0) {
            LOCK();
            plVar1 = (long *)(lVar17 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar18 = *(long *)(this + 0x88);
              *(undefined8 *)(this + 0x88) = 0;
              Memory::free_static((void *)(lVar18 + -0x10),false);
            }
            else {
              *(undefined8 *)(this + 0x88) = 0;
            }
          }
          else {
            CowData<GodotConcavePolygonShape3D::BVH>::_copy_on_write(this_00);
            if (lVar22 * 0x24 == 0) goto LAB_0010cdb9;
            uVar23 = lVar22 * 0x24 - 1;
            uVar7 = lVar18 * 0x24 - 1;
            uVar7 = uVar7 >> 1 | uVar7;
            uVar7 = uVar7 >> 2 | uVar7;
            uVar7 = uVar7 >> 4 | uVar7;
            uVar7 = uVar7 >> 8 | uVar7;
            uVar7 = uVar7 >> 0x10 | uVar7;
            uVar7 = uVar7 >> 0x20 | uVar7;
            lVar17 = uVar7 + 1;
            uVar23 = uVar23 | uVar23 >> 1;
            uVar23 = uVar23 | uVar23 >> 2;
            uVar23 = uVar23 | uVar23 >> 4;
            uVar23 = uVar23 | uVar23 >> 8;
            uVar23 = uVar23 | uVar23 >> 0x10;
            uVar23 = uVar23 | uVar23 >> 0x20;
            if (lVar22 < lVar18) {
              if (uVar7 != uVar23) goto LAB_0010ce0d;
              goto LAB_0010d088;
            }
            if (uVar7 != uVar23) goto LAB_0010cf74;
LAB_0010cc31:
            if (*(long *)(this + 0x88) == 0) {
GodotConcavePolygonShape3D__setup:
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            *(long *)(*(long *)(this + 0x88) + -8) = lVar18;
          }
        }
      }
    }
    CowData<GodotConcavePolygonShape3D::BVH>::_copy_on_write(this_00);
    local_9c = 0;
    _fill_bvh(this,p_Var11,*(BVH **)(this + 0x88),&local_9c);
    this[0x90] = (GodotConcavePolygonShape3D)param_2;
    puVar14 = *(undefined8 **)(this + 0x48);
    this[0x28] = (GodotConcavePolygonShape3D)0x1;
    *(ulong *)(this + 0x10) = local_88;
    *(ulong *)(this + 0x18) = CONCAT44(uStack_7c,uStack_80);
    *(ulong *)(this + 0x20) = CONCAT44(uStack_74,uStack_78);
    for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
      (*(code *)**(undefined8 **)puVar14[2])();
    }
    if (local_c0 != (_Volume_BVH_Element *)0x0) {
      local_c0 = local_c0 + -0x10;
      LOCK();
      *(long *)local_c0 = *(long *)local_c0 + -1;
      UNLOCK();
      if (*(long *)local_c0 == 0) {
        Memory::free_static(local_c0,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d42b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConcavePolygonShape3D::set_data(Variant const&) */

void GodotConcavePolygonShape3D::set_data(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  Variant *this;
  long in_FS_OFFSET;
  Variant local_90 [8];
  Variant local_88 [8];
  long local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_90);
  Variant::Variant((Variant *)local_58,"faces");
  cVar3 = Dictionary::has(local_90);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar3 == '\0') {
    _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x68b,
                     "Condition \"!d.has(\"faces\")\" is true.",0,0);
    Dictionary::~Dictionary((Dictionary *)local_90);
  }
  else {
    Variant::Variant((Variant *)local_58,"backface_collision");
    this = (Variant *)Dictionary::operator[](local_90);
    bVar4 = Variant::operator_cast_to_bool(this);
    Variant::Variant((Variant *)local_78,"faces");
    Dictionary::operator[](local_90);
    Variant::operator_cast_to_Vector(local_88);
    _setup((GodotConcavePolygonShape3D *)param_1,(Vector *)local_88,bVar4);
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotHeightMapShape3D::set_data(Variant const&) */

void __thiscall GodotHeightMapShape3D::set_data(GodotHeightMapShape3D *this,Variant *param_1)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Variant *pVVar10;
  long lVar11;
  Image *pIVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  Variant *this_00;
  long lVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  Variant local_c0 [8];
  Vector local_b8 [8];
  undefined8 *local_b0;
  Variant local_a8 [8];
  undefined8 *local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 != 0x1b) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x888,
                       "Condition \"p_data.get_type() != Variant::DICTIONARY\" is true.",0,0);
      return;
    }
    goto LAB_0010e00e;
  }
  Variant::operator_cast_to_Dictionary(local_c0);
  Variant::Variant((Variant *)local_58,"width");
  cVar5 = Dictionary::has(local_c0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 == '\0') {
    _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x88b,
                     "Condition \"!d.has(\"width\")\" is true.",0,0);
  }
  else {
    Variant::Variant((Variant *)local_58,"depth");
    cVar5 = Dictionary::has(local_c0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar5 == '\0') {
      _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x88c,
                       "Condition \"!d.has(\"depth\")\" is true.",0,0);
    }
    else {
      Variant::Variant((Variant *)local_58,"heights");
      cVar5 = Dictionary::has(local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar5 == '\0') {
        _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x88d,
                         "Condition \"!d.has(\"heights\")\" is true.",0,0);
      }
      else {
        Variant::Variant((Variant *)local_58,"width");
        pVVar10 = (Variant *)Dictionary::operator[](local_c0);
        iVar6 = Variant::operator_cast_to_int(pVVar10);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,"depth");
        pVVar10 = (Variant *)Dictionary::operator[](local_c0);
        iVar7 = Variant::operator_cast_to_int(pVVar10);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (iVar6 < 1) {
          _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x892,
                           "Condition \"width_new <= 0.0\" is true.",0,0);
        }
        else if (iVar7 < 1) {
          _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x893,
                           "Condition \"depth_new <= 0.0\" is true.",0,0);
        }
        else {
          Variant::Variant((Variant *)local_58,"heights");
          pVVar10 = (Variant *)Dictionary::operator[](local_c0);
          Variant::Variant((Variant *)local_98,pVVar10);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_b0 = (undefined8 *)0x0;
          if (local_98[0] == 0x20) {
            Variant::operator_cast_to_Vector(local_a8);
            if (local_a0 != (undefined8 *)0x0) {
              local_b0 = local_a0;
            }
LAB_0010d8dc:
            pVVar10 = (Variant *)local_78;
            Variant::Variant(pVVar10,"min_height");
            cVar5 = Dictionary::has(local_c0);
            if (cVar5 == '\0') {
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
LAB_0010d91a:
              lVar11 = *(long *)(this + 0x68);
              if (lVar11 != 0) {
                lVar15 = *(long *)(lVar11 + -8);
                if (0 < (int)lVar15) {
                  if (lVar15 < 1) {
                    lVar16 = 0;
                  }
                  else {
                    fVar20 = 0.0;
                    lVar13 = 1;
                    fVar21 = 0.0;
                    do {
                      fVar2 = *(float *)(lVar11 + -4 + lVar13 * 4);
                      fVar19 = fVar2;
                      fVar4 = fVar20;
                      if ((fVar21 <= fVar2) && (fVar19 = fVar21, fVar4 = fVar2, fVar2 <= fVar20)) {
                        fVar4 = fVar20;
                      }
                      fVar20 = fVar4;
                      if (lVar13 == (ulong)((int)lVar15 - 1) + 1) goto LAB_0010dbd1;
                      bVar18 = lVar13 != lVar15;
                      lVar13 = lVar13 + 1;
                      lVar16 = lVar15;
                      fVar21 = fVar19;
                    } while (bVar18);
                  }
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar15,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
              }
              fVar19 = 0.0;
              fVar20 = fVar19;
LAB_0010dbdb:
              puVar14 = local_b0;
              if (local_b0 != (undefined8 *)0x0) {
                if ((long)(iVar6 * iVar7) != local_b0[-1]) {
                  _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x8c9,
                                   "Condition \"heights_buffer.size() != (width_new * depth_new)\" is true."
                                   ,0,0,this,pVVar10);
                  goto LAB_0010dc5e;
                }
                _setup(this,local_b8,iVar6,iVar7,fVar19,fVar20);
                LOCK();
                plVar1 = puVar14 + -2;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 != 0) goto LAB_0010d879;
                goto LAB_0010dc1a;
              }
              _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x8c9,
                               "Condition \"heights_buffer.size() != (width_new * depth_new)\" is true."
                               ,0,0,this,pVVar10);
            }
            else {
              Variant::Variant((Variant *)local_58,"max_height");
              cVar5 = Dictionary::has(local_c0);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (cVar5 == '\0') goto LAB_0010d91a;
              Variant::Variant((Variant *)local_58,"min_height");
              pVVar10 = (Variant *)Dictionary::operator[](local_c0);
              fVar19 = Variant::operator_cast_to_float(pVVar10);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              pVVar10 = (Variant *)(ulong)(uint)fVar19;
              Variant::Variant((Variant *)local_58,"max_height");
              this_00 = (Variant *)Dictionary::operator[](local_c0);
              fVar20 = Variant::operator_cast_to_float(this_00);
              fVar19 = SUB84(pVVar10,0);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                pVVar10 = (Variant *)(ulong)(uint)fVar20;
                Variant::_clear_internal();
                fVar20 = SUB84(pVVar10,0);
              }
LAB_0010dbd1:
              puVar14 = local_b0;
              if (fVar19 <= fVar20) goto LAB_0010dbdb;
              _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x8c7,
                               "Condition \"min_height > max_height\" is true.",0,0,this,pVVar10);
              if (puVar14 == (undefined8 *)0x0) goto LAB_0010d879;
LAB_0010dc5e:
              LOCK();
              plVar1 = puVar14 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
LAB_0010dc1a:
                Memory::free_static(local_b0 + -2,false);
              }
            }
          }
          else if (local_98[0] == 0x18) {
            lVar11 = Variant::get_validated_object();
            if (((lVar11 == 0) ||
                (pIVar12 = (Image *)__dynamic_cast(lVar11,&Object::typeinfo,&Image::typeinfo,0),
                pIVar12 == (Image *)0x0)) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x8a2,
                               "Condition \"image.is_null()\" is true.",0,0);
            }
            else {
              iVar8 = Image::get_format();
              if (iVar8 == 8) {
                Image::get_data();
                iVar8 = Image::get_width();
                iVar9 = Image::get_height();
                lVar11 = (long)(iVar8 * iVar9);
                if (lVar11 < 0) {
                  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                   "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                   ,0,0);
                }
                else if (lVar11 != 0) {
                  CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
                  uVar17 = lVar11 * 4 - 1;
                  uVar17 = uVar17 | uVar17 >> 1;
                  uVar17 = uVar17 | uVar17 >> 2;
                  uVar17 = uVar17 | uVar17 >> 4;
                  uVar17 = uVar17 | uVar17 >> 8;
                  uVar17 = uVar17 | uVar17 >> 0x10;
                  puVar14 = (undefined8 *)
                            Memory::alloc_static((uVar17 | uVar17 >> 0x20) + 0x11,false);
                  if (puVar14 == (undefined8 *)0x0) {
                    _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                     "Parameter \"mem_new\" is null.",0,0);
                  }
                  else {
                    local_b0 = puVar14 + 2;
                    *puVar14 = 1;
                    puVar14[1] = lVar11;
                  }
                }
                CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
                puVar14 = local_a0;
                if ((local_b0 == (undefined8 *)0x0) || (lVar11 = local_b0[-1], lVar11 < 1)) {
                  if (local_a0 != (undefined8 *)0x0) goto LAB_0010dacb;
                }
                else {
                  lVar15 = 0;
                  do {
                    *(undefined4 *)((long)local_b0 + lVar15) =
                         *(undefined4 *)((long)local_a0 + lVar15);
                    lVar15 = lVar15 + 4;
                  } while (lVar15 != lVar11 << 2);
LAB_0010dacb:
                  LOCK();
                  plVar1 = local_a0 + -2;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_a0 = (undefined8 *)0x0;
                    Memory::free_static(puVar14 + -2,false);
                  }
                }
                cVar5 = RefCounted::unreference();
                if (cVar5 != '\0') {
                  memdelete<Image>(pIVar12);
                }
                goto LAB_0010d8dc;
              }
              _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x8a3,
                               "Condition \"image->get_format() != Image::FORMAT_RF\" is true.",0,0)
              ;
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                memdelete<Image>(pIVar12);
              }
            }
          }
          else {
            _err_print_error("set_data","modules/godot_physics_3d/godot_shape_3d.cpp",0x8b1,
                             "Method/function failed.","Expected PackedFloat32Array or float Image."
                             ,0,0);
          }
LAB_0010d879:
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
    }
  }
  Dictionary::~Dictionary((Dictionary *)local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e00e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotShape3D::is_concave() const */

undefined8 GodotShape3D::is_concave(void)

{
  return 0;
}



/* GodotConcaveShape3D::is_concave() const */

undefined8 GodotConcaveShape3D::is_concave(void)

{
  return 1;
}



/* GodotConcaveShape3D::get_supports(Vector3 const&, int, Vector3*, int&,
   GodotShape3D::FeatureType&) const */

void GodotConcaveShape3D::get_supports
               (Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,FeatureType *param_5)

{
  *(undefined4 *)param_5 = 0;
  return;
}



/* GodotWorldBoundaryShape3D::get_volume() const */

undefined4 GodotWorldBoundaryShape3D::get_volume(void)

{
  return _LC0;
}



/* GodotWorldBoundaryShape3D::get_type() const */

undefined8 GodotWorldBoundaryShape3D::get_type(void)

{
  return 0;
}



/* GodotWorldBoundaryShape3D::get_supports(Vector3 const&, int, Vector3*, int&,
   GodotShape3D::FeatureType&) const */

void GodotWorldBoundaryShape3D::get_supports
               (Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,FeatureType *param_5)

{
  *(undefined4 *)param_5 = 0;
  return;
}



/* GodotSeparationRayShape3D::get_volume() const */

undefined8 GodotSeparationRayShape3D::get_volume(void)

{
  return 0;
}



/* GodotSeparationRayShape3D::get_type() const */

undefined8 GodotSeparationRayShape3D::get_type(void)

{
  return 1;
}



/* GodotSphereShape3D::get_volume() const */

undefined8 __thiscall GodotSphereShape3D::get_volume(GodotSphereShape3D *this)

{
  double dVar1;
  
  dVar1 = (double)*(float *)(this + 0x60);
  dVar1 = _LC2 * dVar1 * dVar1 * dVar1;
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* GodotSphereShape3D::get_type() const */

undefined8 GodotSphereShape3D::get_type(void)

{
  return 2;
}



/* GodotBoxShape3D::get_volume() const */

float __thiscall GodotBoxShape3D::get_volume(GodotBoxShape3D *this)

{
  return _LC3 * *(float *)(this + 0x60) * *(float *)(this + 100) * *(float *)(this + 0x68);
}



/* GodotBoxShape3D::get_type() const */

undefined8 GodotBoxShape3D::get_type(void)

{
  return 3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotCapsuleShape3D::get_volume() const */

undefined8 __thiscall GodotCapsuleShape3D::get_volume(GodotCapsuleShape3D *this)

{
  double dVar1;
  
  dVar1 = (double)*(float *)(this + 100);
  dVar1 = ((double)*(float *)(this + 0x60) - (dVar1 + dVar1)) * __LC4 * dVar1 * dVar1 +
          dVar1 * _LC2 * dVar1 * dVar1;
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* GodotCapsuleShape3D::get_type() const */

undefined8 GodotCapsuleShape3D::get_type(void)

{
  return 4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotCylinderShape3D::get_volume() const */

undefined8 __thiscall GodotCylinderShape3D::get_volume(GodotCylinderShape3D *this)

{
  double dVar1;
  
  dVar1 = (double)*(float *)(this + 0x60) * __LC4 * (double)*(float *)(this + 100) *
          (double)*(float *)(this + 100);
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* GodotCylinderShape3D::get_type() const */

undefined8 GodotCylinderShape3D::get_type(void)

{
  return 5;
}



/* GodotConvexPolygonShape3D::get_type() const */

undefined8 GodotConvexPolygonShape3D::get_type(void)

{
  return 6;
}



/* GodotConcavePolygonShape3D::get_type() const */

undefined8 GodotConcavePolygonShape3D::get_type(void)

{
  return 7;
}



/* GodotHeightMapShape3D::get_type() const */

undefined8 GodotHeightMapShape3D::get_type(void)

{
  return 8;
}



/* GodotFaceShape3D::get_type() const */

undefined8 GodotFaceShape3D::get_type(void)

{
  return 7;
}



/* GodotFaceShape3D::set_data(Variant const&) */

void GodotFaceShape3D::set_data(Variant *param_1)

{
  return;
}



/* GodotFaceShape3D::get_data() const */

GodotFaceShape3D * __thiscall GodotFaceShape3D::get_data(GodotFaceShape3D *this)

{
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* GodotShape3D::get_volume() const */

void GodotShape3D::get_volume(void)

{
  AABB::get_volume();
  return;
}



/* CowData<GodotConcavePolygonShape3D::BVH>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GodotConcavePolygonShape3D::BVH>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GodotConcavePolygonShape3D::Face>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010f0e0(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotConcavePolygonShape3D::_setup(Vector<Vector3> const&, bool) [clone .cold] */

void GodotConcavePolygonShape3D::_setup(Vector *param_1,bool param_2)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010f0f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Dictionary::Dictionary;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* Geometry3D::segment_intersects_cylinder(Vector3 const&, Vector3 const&, float, float, Vector3*,
   Vector3*, int) */

undefined8
Geometry3D::segment_intersects_cylinder
          (Vector3 *param_1,Vector3 *param_2,float param_3,float param_4,Vector3 *param_5,
          Vector3 *param_6,int param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_2c [3];
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_1 + 8);
  fVar21 = (float)*(undefined8 *)param_2;
  fVar22 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar17 = (float)*(undefined8 *)param_1;
  fVar19 = fVar21 - fVar17;
  fVar18 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar20 = fVar22 - fVar18;
  fVar15 = fVar8 - fVar6;
  fVar9 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar15 * fVar15);
  if (_LC31 <= fVar9) {
    if (param_7 < 0) {
      _err_print_error("segment_intersects_cylinder","./core/math/geometry_3d.h",0xae,
                       "Condition \"p_cylinder_axis < 0\" is true. Returning: false",0,0);
    }
    else if (param_7 < 3) {
      lVar4 = (long)param_7;
      local_2c[0] = 0.0;
      local_2c[1] = 0.0;
      local_2c[2] = 0.0;
      local_2c[lVar4] = 1.0;
      fVar10 = local_2c[1] * (fVar19 / fVar9) - local_2c[0] * (fVar20 / fVar9);
      fVar14 = local_2c[0] * (fVar15 / fVar9) - (fVar19 / fVar9) * local_2c[2];
      fVar9 = (fVar20 / fVar9) * local_2c[2] - (fVar15 / fVar9) * local_2c[1];
      fVar12 = SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar10 * fVar10);
      if (fVar12 < _LC31) {
        local_20 = 0;
        local_18 = 0.0;
        *(undefined4 *)((long)&local_20 + (long)(int)((param_7 + 1U) % 3) * 4) = 0x3f800000;
        fVar14 = local_20._4_4_;
        fVar7 = (float)local_20;
        fVar9 = local_18;
      }
      else {
        fVar14 = fVar14 / fVar12;
        fVar7 = fVar9 / fVar12;
        fVar9 = fVar10 / fVar12;
      }
      fVar10 = fVar18 * fVar14 + fVar17 * fVar7 + fVar9 * fVar6;
      if ((fVar10 < param_4) && (fVar10 = param_4 * param_4 - fVar10 * fVar10, _LC31 <= fVar10)) {
        local_48 = CONCAT44(param_3 * _LC16,SQRT(fVar10));
        fVar12 = local_2c[0] * fVar9 - fVar7 * local_2c[2];
        fVar9 = local_2c[2] * fVar14 - fVar9 * local_2c[1];
        fVar14 = local_2c[1] * fVar7 - local_2c[0] * fVar14;
        fVar10 = fVar9 * fVar9 + fVar12 * fVar12 + fVar14 * fVar14;
        if (fVar10 == 0.0) {
          fVar14 = 0.0;
          fVar12 = 0.0;
          fVar9 = fVar12;
        }
        else {
          fVar10 = SQRT(fVar10);
          fVar9 = fVar9 / fVar10;
          fVar12 = fVar12 / fVar10;
          fVar14 = fVar14 / fVar10;
        }
        lVar2 = 0;
        lVar5 = 0xffffffff;
        local_40 = CONCAT44(*(undefined4 *)(param_1 + lVar4 * 4),
                            fVar17 * fVar9 + fVar18 * fVar12 + fVar6 * fVar14);
        local_38 = CONCAT44(*(undefined4 *)(param_2 + lVar4 * 4),
                            fVar21 * fVar9 + fVar22 * fVar12 + fVar8 * fVar14);
        fVar8 = 0.0;
        fVar9 = (float)_LC9;
        while( true ) {
          fVar21 = *(float *)((long)&local_40 + lVar2 * 4);
          fVar22 = *(float *)((long)&local_38 + lVar2 * 4);
          fVar10 = *(float *)((long)&local_48 + lVar2 * 4);
          fVar14 = (float)((uint)fVar10 ^ _LC51);
          fVar12 = (float)_LC9;
          if (fVar22 <= fVar21) {
            if ((fVar10 < fVar22) || (fVar21 < fVar14)) goto LAB_0010f3c7;
            fVar7 = 0.0;
            if (fVar10 < fVar21) {
              fVar7 = (fVar10 - fVar21) / (fVar22 - fVar21);
            }
            if (fVar22 < fVar14) {
              fVar12 = (fVar14 - fVar21) / (fVar22 - fVar21);
            }
          }
          else {
            if ((fVar10 < fVar21) || (fVar22 < fVar14)) goto LAB_0010f3c7;
            fVar7 = 0.0;
            if (fVar21 < fVar14) {
              fVar7 = (fVar14 - fVar21) / (fVar22 - fVar21);
            }
            if (fVar10 < fVar22) {
              fVar12 = (fVar10 - fVar21) / (fVar22 - fVar21);
            }
          }
          if (fVar9 <= fVar12) {
            fVar12 = fVar9;
          }
          fVar9 = fVar12;
          if (fVar8 < fVar7) {
            lVar5 = lVar2;
            fVar8 = fVar7;
          }
          if (fVar9 < fVar8) goto LAB_0010f3c7;
          if (lVar2 != 0) break;
          lVar2 = 1;
        }
        fVar6 = fVar8 * fVar15 + fVar6;
        uVar11 = CONCAT44(fVar8 * fVar20 + fVar18,fVar8 * fVar19 + fVar17);
        local_20 = uVar11;
        local_18 = fVar6;
        if ((int)lVar5 == 0) {
          *(undefined4 *)((long)&local_20 + lVar4 * 4) = 0;
        }
        else {
          uVar1 = (param_7 + 1U) % 3;
          *(undefined4 *)((long)&local_20 + (long)(int)uVar1 * 4) = 0;
          *(undefined4 *)((long)&local_20 + (long)(int)((uVar1 + 1) % 3) * 4) = 0;
        }
        auVar16._8_8_ = 0;
        auVar16._0_8_ = local_20;
        fVar8 = (float)(local_20 >> 0x20);
        fVar8 = (float)local_20 * (float)local_20 + fVar8 * fVar8 + local_18 * local_18;
        if (fVar8 == 0.0) {
          local_20 = 0;
          local_18 = 0.0;
        }
        else {
          fVar8 = SQRT(fVar8);
          local_18 = local_18 / fVar8;
          auVar13._4_4_ = fVar8;
          auVar13._0_4_ = fVar8;
          auVar13._12_4_ = _LC9._4_4_;
          auVar13._8_4_ = (float)_LC9;
          auVar16 = divps(auVar16,auVar13);
          local_20 = auVar16._0_8_;
        }
        if (param_5 != (Vector3 *)0x0) {
          *(ulong *)param_5 = uVar11;
          *(float *)(param_5 + 8) = fVar6;
        }
        if (param_6 != (Vector3 *)0x0) {
          *(ulong *)param_6 = local_20;
          *(float *)(param_6 + 8) = local_18;
        }
        uVar3 = 1;
        goto LAB_0010f3c9;
      }
    }
    else {
      _err_print_error("segment_intersects_cylinder","./core/math/geometry_3d.h",0xaf,
                       "Condition \"p_cylinder_axis > 2\" is true. Returning: false",0,0);
    }
  }
LAB_0010f3c7:
  uVar3 = 0;
LAB_0010f3c9:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Dictionary::Dictionary;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* GodotFaceShape3D::~GodotFaceShape3D() */

void __thiscall GodotFaceShape3D::~GodotFaceShape3D(GodotFaceShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111c08;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotFaceShape3D::~GodotFaceShape3D() */

void __thiscall GodotFaceShape3D::~GodotFaceShape3D(GodotFaceShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111c08;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x98);
  return;
}



/* GodotHeightMapShape3D::~GodotHeightMapShape3D() */

void __thiscall GodotHeightMapShape3D::~GodotHeightMapShape3D(GodotHeightMapShape3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_volume_00111d10;
  if (*(void **)(this + 0x90) != (void *)0x0) {
    if (*(int *)(this + 0x88) != 0) {
      *(undefined4 *)(this + 0x88) = 0;
    }
    Memory::free_static(*(void **)(this + 0x90),false);
  }
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR_get_volume_00111780;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotConcavePolygonShape3D::~GodotConcavePolygonShape3D() */

void __thiscall
GodotConcavePolygonShape3D::~GodotConcavePolygonShape3D(GodotConcavePolygonShape3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_volume_00111c88;
  if (*(long *)(this + 0x88) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x88) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x88);
      *(undefined8 *)(this + 0x88) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x78) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x78) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x78);
      *(undefined8 *)(this + 0x78) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR_get_volume_00111780;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotCylinderShape3D::~GodotCylinderShape3D() */

void __thiscall GodotCylinderShape3D::~GodotCylinderShape3D(GodotCylinderShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111b08;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotCylinderShape3D::~GodotCylinderShape3D() */

void __thiscall GodotCylinderShape3D::~GodotCylinderShape3D(GodotCylinderShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111b08;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x68);
  return;
}



/* GodotCapsuleShape3D::~GodotCapsuleShape3D() */

void __thiscall GodotCapsuleShape3D::~GodotCapsuleShape3D(GodotCapsuleShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111a88;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotCapsuleShape3D::~GodotCapsuleShape3D() */

void __thiscall GodotCapsuleShape3D::~GodotCapsuleShape3D(GodotCapsuleShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111a88;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x68);
  return;
}



/* GodotBoxShape3D::~GodotBoxShape3D() */

void __thiscall GodotBoxShape3D::~GodotBoxShape3D(GodotBoxShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111a08;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotBoxShape3D::~GodotBoxShape3D() */

void __thiscall GodotBoxShape3D::~GodotBoxShape3D(GodotBoxShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111a08;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x70);
  return;
}



/* GodotSphereShape3D::~GodotSphereShape3D() */

void __thiscall GodotSphereShape3D::~GodotSphereShape3D(GodotSphereShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111988;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotSphereShape3D::~GodotSphereShape3D() */

void __thiscall GodotSphereShape3D::~GodotSphereShape3D(GodotSphereShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111988;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x68);
  return;
}



/* GodotSeparationRayShape3D::~GodotSeparationRayShape3D() */

void __thiscall
GodotSeparationRayShape3D::~GodotSeparationRayShape3D(GodotSeparationRayShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111908;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotSeparationRayShape3D::~GodotSeparationRayShape3D() */

void __thiscall
GodotSeparationRayShape3D::~GodotSeparationRayShape3D(GodotSeparationRayShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111908;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x68);
  return;
}



/* GodotWorldBoundaryShape3D::~GodotWorldBoundaryShape3D() */

void __thiscall
GodotWorldBoundaryShape3D::~GodotWorldBoundaryShape3D(GodotWorldBoundaryShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111888;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotWorldBoundaryShape3D::~GodotWorldBoundaryShape3D() */

void __thiscall
GodotWorldBoundaryShape3D::~GodotWorldBoundaryShape3D(GodotWorldBoundaryShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00111888;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x70);
  return;
}



/* GodotConcavePolygonShape3D::~GodotConcavePolygonShape3D() */

void __thiscall
GodotConcavePolygonShape3D::~GodotConcavePolygonShape3D(GodotConcavePolygonShape3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_volume_00111c88;
  if (*(long *)(this + 0x88) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x88) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x88);
      *(undefined8 *)(this + 0x88) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x78) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x78) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x78);
      *(undefined8 *)(this + 0x78) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR_get_volume_00111780;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x98);
  return;
}



/* GodotHeightMapShape3D::~GodotHeightMapShape3D() */

void __thiscall GodotHeightMapShape3D::~GodotHeightMapShape3D(GodotHeightMapShape3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_volume_00111d10;
  if (*(void **)(this + 0x90) != (void *)0x0) {
    if (*(int *)(this + 0x88) != 0) {
      *(undefined4 *)(this + 0x88) = 0;
    }
    Memory::free_static(*(void **)(this + 0x90),false);
  }
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR_get_volume_00111780;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0xa0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<GodotShapeOwner3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotShapeOwner3D*>,
   DefaultTypedAllocator<HashMapElement<GodotShapeOwner3D*, int> > >::operator[](GodotShapeOwner3D*
   const&) */

undefined1  [16] __thiscall
HashMap<GodotShapeOwner3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner3D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner3D*,int>>>
::operator[](HashMap<GodotShapeOwner3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner3D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner3D*,int>>>
             *this,GodotShapeOwner3D **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  GodotShapeOwner3D *pGVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pGVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x110442;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pGVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010ff6b;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x11048a;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00110313;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pGVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar44) &&
             (pGVar56 == *(GodotShapeOwner3D **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00110313:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pGVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(GodotShapeOwner3D **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pGVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_001102f4;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_0010ff6b:
  if ((float)uVar55 * __LC89 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001102f4;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar52 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar52 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  pGVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(GodotShapeOwner3D **)pauVar42[1] = pGVar56;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar52 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001102f4:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* LocalVector<LocalVector<int, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */

void __thiscall
LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>::resize
          (LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false> *this,
          uint param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 << 4;
    uVar7 = param_1;
    do {
      piVar2 = (int *)(*(long *)(this + 8) + lVar6);
      if (*(void **)(piVar2 + 2) != (void *)0x0) {
        if (*piVar2 != 0) {
          *piVar2 = 0;
        }
        Memory::free_static(*(void **)(piVar2 + 2),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
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
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 << 4,false);
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
      if (param_1 <= uVar7) goto LAB_001105e9;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar7 * 0x10 + lVar6);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 2;
      puVar3[1] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x10 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x10)
            );
  }
LAB_001105e9:
  *(uint *)this = param_1;
  return;
}



/* GodotConvexPolygonShape3D::~GodotConvexPolygonShape3D() */

void __thiscall
GodotConvexPolygonShape3D::~GodotConvexPolygonShape3D(GodotConvexPolygonShape3D *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR_get_volume_00111b88;
  if (*(long *)(this + 0xa8) != 0) {
    LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>::resize
              ((LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false> *)
               (this + 0xa0),0);
    if (*(void **)(this + 0xa8) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xa8),false);
    }
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    if (*(int *)(this + 0x90) != 0) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    Memory::free_static(*(void **)(this + 0x98),false);
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    if (*(int *)(this + 0x80) != 0) {
      *(undefined4 *)(this + 0x80) = 0;
    }
    Memory::free_static(*(void **)(this + 0x88),false);
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    if (*(int *)(this + 0x70) != 0) {
      *(undefined4 *)(this + 0x70) = 0;
    }
    Memory::free_static(*(void **)(this + 0x78),false);
  }
  pvVar3 = *(void **)(this + 0x68);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x60) != 0) {
      lVar2 = 0;
      do {
        pvVar1 = *(void **)((long)pvVar3 + lVar2 * 0x20 + 0x18);
        if (pvVar1 != (void *)0x0) {
          if (*(int *)((long)pvVar3 + lVar2 * 0x20 + 0x10) != 0) {
            *(undefined4 *)((long)pvVar3 + lVar2 * 0x20 + 0x10) = 0;
          }
          Memory::free_static(pvVar1,false);
          pvVar3 = *(void **)(this + 0x68);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0x60));
      *(undefined4 *)(this + 0x60) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_001107e4;
    }
    Memory::free_static(pvVar3,false);
    GodotShape3D::~GodotShape3D((GodotShape3D *)this);
    return;
  }
LAB_001107e4:
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotConvexPolygonShape3D::~GodotConvexPolygonShape3D() */

void __thiscall
GodotConvexPolygonShape3D::~GodotConvexPolygonShape3D(GodotConvexPolygonShape3D *this)

{
  ~GodotConvexPolygonShape3D(this);
  operator_delete(this,0xb0);
  return;
}



/* bool GodotHeightMapShape3D::_intersect_grid_segment<bool (_HeightmapSegmentCullParams&,
   _HeightmapGridCullState const&)>(bool (&)(_HeightmapSegmentCullParams&, _HeightmapGridCullState
   const&), Vector3 const&, Vector3 const&, int, int, Vector3 const&, Vector3&, Vector3&) const */

bool __thiscall
GodotHeightMapShape3D::
_intersect_grid_segment<bool(_HeightmapSegmentCullParams&,_HeightmapGridCullState_const&)>
          (GodotHeightMapShape3D *this,
          _func_bool__HeightmapSegmentCullParams_ptr__HeightmapGridCullState_ptr *param_1,
          Vector3 *param_2,Vector3 *param_3,int param_4,int param_5,Vector3 *param_6,
          Vector3 *param_7,Vector3 *param_8)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  int local_174;
  float local_168;
  int local_164;
  float local_148;
  float local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  float local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  GodotHeightMapShape3D *local_e8;
  GodotFaceShape3D *local_e0;
  undefined **local_d8 [18];
  undefined1 local_48;
  long local_40;
  
  fVar12 = *(float *)param_3;
  fVar9 = (float)*(undefined8 *)param_2;
  fVar13 = (float)*(undefined8 *)param_3 - fVar9;
  fVar14 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
           (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  auVar10._4_4_ = fVar14;
  auVar10._0_4_ = fVar13;
  fVar19 = *(float *)param_2;
  fVar16 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = false;
  fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar16 * fVar16);
  if ((double)fVar13 < _LC28) goto LAB_0011092a;
  auVar10._8_8_ = 0;
  fVar11 = *(float *)(param_2 + 8) + *(float *)(param_6 + 8);
  fVar9 = fVar9 + *(float *)param_6;
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = (float)_LC9;
  auVar1._12_4_ = _LC9._4_4_;
  auVar10 = divps(auVar10,auVar1);
  GodotFaceShape3D::GodotFaceShape3D((GodotFaceShape3D *)local_d8);
  local_128 = *(undefined8 *)param_2;
  local_48 = 0;
  local_120 = *(undefined4 *)(param_2 + 8);
  local_108 = fVar16 / fVar13;
  local_11c = *(undefined8 *)param_3;
  local_104 = 0;
  local_114 = *(undefined4 *)(param_3 + 8);
  local_fc = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_144 = 0.0;
  local_140 = 0;
  local_138 = 0;
  local_148 = fVar13;
  local_110 = auVar10._0_8_;
  local_e8 = this;
  local_e0 = (GodotFaceShape3D *)local_d8;
  local_130._0_4_ = fVar12 - fVar19;
  local_130._4_4_ = fVar16;
  local_144 = (float)Vector2::length();
  fVar13 = _LC38;
  fVar14 = _LC38;
  fVar16 = fVar11;
  fVar12 = fVar9;
  fVar19 = _LC38;
  if (_LC28 <= (double)local_144) {
    fVar15 = (float)local_130 / local_144;
    fVar7 = local_130._4_4_ / local_144;
    dVar17 = (double)fVar15;
    local_130 = CONCAT44(fVar7,fVar15);
    dVar18 = (double)fVar7;
    if ((float)((uint)fVar11 & _LC99) < _LC98) {
      fVar16 = (float)((uint)((float)(int)fVar11 -
                             (float)(-(uint)(fVar11 < (float)(int)fVar11) & (uint)(float)_LC9)) |
                      ~_LC99 & (uint)fVar11);
    }
    uVar3 = (uint)fVar16;
    if ((float)((uint)fVar9 & _LC99) < _LC98) {
      fVar12 = (float)((uint)((float)(int)fVar9 -
                             (float)(-(uint)(fVar9 < (float)(int)fVar9) & (uint)(float)_LC9)) |
                      ~_LC99 & (uint)fVar9);
      uVar4 = (uint)fVar12;
      if (_LC28 < dVar17) goto LAB_00110d28;
LAB_00110e1c:
      if (dVar18 <= _LC28) goto LAB_00110aff;
      fVar19 = (float)_LC9 / ABS(fVar7);
      if (dVar17 < _LC100) {
        local_174 = 1;
        local_168 = (float)_LC9 / ABS(fVar15);
        goto LAB_001110e9;
      }
      local_164 = 0;
      fVar15 = 0.0;
      local_168 = _LC38;
      auVar8 = ZEXT416((uint)_LC38);
      fVar12 = fVar19;
    }
    else {
      uVar4 = (uint)fVar9;
      if (dVar17 <= _LC28) goto LAB_00110e1c;
LAB_00110d28:
      if (dVar18 <= _LC28) {
        if (_LC100 <= dVar18) {
          local_174 = 0;
        }
        else {
          local_174 = -1;
          fVar19 = (float)_LC9 / ABS(fVar7);
        }
      }
      else {
        local_174 = 1;
        fVar19 = (float)_LC9 / ABS(fVar7);
      }
      fVar15 = (float)_LC9 / ABS(fVar15);
      fVar12 = fVar9;
      if ((float)((uint)fVar9 & _LC99) < _LC98) {
        fVar12 = (float)((uint)((float)(-(uint)((float)(int)fVar9 < fVar9) & (uint)(float)_LC9) +
                               (float)(int)fVar9) | ~_LC99 & (uint)fVar9);
      }
      local_164 = 1;
      fVar13 = (fVar12 - fVar9) * fVar15;
      local_168 = fVar15;
LAB_00110da8:
      auVar8 = ZEXT416((uint)fVar13);
      fVar13 = ABS(fVar13);
      if (local_174 == 0) {
        fVar12 = fVar19 * 0.0;
        fVar9 = _LC38;
        goto LAB_00111030;
      }
      fVar12 = fVar19;
      if (local_174 != 1) goto LAB_00111002;
    }
    fVar19 = fVar11;
    if ((float)((uint)fVar11 & _LC99) < _LC98) {
      fVar19 = (float)((uint)((float)(-(uint)((float)(int)fVar11 < fVar11) & (uint)(float)_LC9) +
                             (float)(int)fVar11) | ~_LC99 & (uint)fVar11);
    }
    local_174 = 1;
    fVar14 = (fVar19 - fVar11) * fVar12;
    fVar9 = ABS(fVar14);
    fVar19 = fVar12;
LAB_00111030:
    if (fVar13 < _LC31) {
      auVar8._0_4_ = auVar8._0_4_ + local_168;
      uVar4 = uVar4 - (local_164 == -1);
    }
    fVar13 = auVar8._0_4_;
    if (fVar9 < _LC31) {
      fVar14 = fVar14 + fVar19;
      uVar3 = uVar3 - (local_174 == -1);
    }
  }
  else {
    local_130 = 0;
    if ((float)((uint)fVar11 & _LC99) < _LC98) {
      fVar16 = (float)((uint)((float)(int)fVar11 -
                             (float)(-(uint)(fVar11 < (float)(int)fVar11) & (uint)(float)_LC9)) |
                      ~_LC99 & (uint)fVar11);
    }
    uVar3 = (uint)fVar16;
    if ((float)((uint)fVar9 & _LC99) < _LC98) {
      fVar12 = (float)((uint)((float)(int)fVar9 -
                             (float)(-(uint)(fVar9 < (float)(int)fVar9) & (uint)(float)_LC9)) |
                      ~_LC99 & (uint)fVar9);
    }
    uVar4 = (uint)fVar12;
    dVar18 = 0.0;
    fVar7 = 0.0;
    fVar15 = 0.0;
    dVar17 = 0.0;
LAB_00110aff:
    if (dVar18 < _LC100) {
      fVar19 = (float)_LC9 / ABS(fVar7);
      if (dVar17 < _LC100) {
        local_174 = -1;
        local_168 = (float)_LC9 / ABS(fVar15);
        goto LAB_001110e9;
      }
      local_164 = 0;
      fVar15 = 0.0;
      local_168 = _LC38;
      auVar8 = ZEXT416((uint)_LC38);
LAB_00111002:
      local_174 = -1;
      fVar14 = (fVar11 - fVar16) * fVar19;
      fVar12 = (float)((uint)fVar19 ^ _LC51);
      fVar9 = ABS(fVar14);
      goto LAB_00111030;
    }
    if (dVar17 < _LC100) {
      local_174 = 0;
      local_168 = (float)_LC9 / ABS(fVar15);
LAB_001110e9:
      local_164 = -1;
      fVar13 = (fVar9 - fVar12) * local_168;
      fVar15 = (float)((uint)local_168 ^ _LC51);
      goto LAB_00110da8;
    }
    local_174 = 0;
    fVar12 = 0.0;
    local_164 = 0;
    fVar15 = 0.0;
    local_168 = _LC38;
  }
  uVar5 = param_4 - 2U;
  if ((int)uVar4 < (int)(param_4 - 2U)) {
    uVar5 = uVar4;
  }
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  uVar6 = param_5 - 2U;
  if ((int)uVar3 < (int)(param_5 - 2U)) {
    uVar6 = uVar3;
  }
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  fVar13 = (float)(int)(uVar5 - uVar4) * fVar15 + fVar13;
  fVar14 = (float)(int)(uVar6 - uVar3) * fVar12 + fVar14;
  while( true ) {
    local_138 = CONCAT44(uVar6,uVar5);
    if (fVar14 <= fVar13) break;
    local_140 = CONCAT44((int)local_140,fVar13);
    uVar5 = uVar5 + local_164;
    bVar2 = local_144 < fVar13;
    fVar13 = fVar13 + local_168;
    if (bVar2) goto LAB_00110c4d;
LAB_00110bd3:
    bVar2 = (*param_1)((_HeightmapSegmentCullParams *)&local_128,
                       (_HeightmapGridCullState *)&local_148);
    if (bVar2) goto LAB_00111070;
    if ((((int)(uVar5 | uVar6) < 0) || (param_4 + -1 <= (int)uVar5)) || (param_5 + -1 <= (int)uVar6)
       ) goto LAB_00110c70;
  }
  local_140 = CONCAT44((int)local_140,fVar14);
  uVar6 = uVar6 + local_174;
  bVar2 = fVar14 <= local_144;
  fVar14 = fVar14 + fVar19;
  if (bVar2) goto LAB_00110bd3;
LAB_00110c4d:
  local_140 = CONCAT44(local_140._4_4_,local_144);
  bVar2 = (*param_1)((_HeightmapSegmentCullParams *)&local_128,(_HeightmapGridCullState *)&local_148
                    );
  if (bVar2) {
LAB_00111070:
    *(undefined8 *)param_7 = local_104;
    *(undefined4 *)(param_7 + 8) = local_fc;
    *(undefined8 *)param_8 = local_f8;
    *(undefined4 *)(param_8 + 8) = local_f0;
    bVar2 = true;
    goto LAB_00110c72;
  }
LAB_00110c70:
  bVar2 = false;
LAB_00110c72:
  local_d8[0] = &PTR_get_volume_00111c08;
  GodotShape3D::~GodotShape3D((GodotShape3D *)local_d8);
LAB_0011092a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* CowData<_Volume_BVH_Element>::_realloc(long) */

undefined8 __thiscall
CowData<_Volume_BVH_Element>::_realloc(CowData<_Volume_BVH_Element> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* CowData<GodotConcavePolygonShape3D::Face>::_realloc(long) */

undefined8 __thiscall
CowData<GodotConcavePolygonShape3D::Face>::_realloc
          (CowData<GodotConcavePolygonShape3D::Face> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* CowData<GodotConcavePolygonShape3D::BVH>::_realloc(long) */

undefined8 __thiscall
CowData<GodotConcavePolygonShape3D::BVH>::_realloc
          (CowData<GodotConcavePolygonShape3D::BVH> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = Dictionary::Dictionary;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* GodotShape3D::configure(AABB const&) */

void GodotShape3D::_GLOBAL__sub_I_configure(void)

{
  edge_support_threshold_lower = _LC129;
  cylinder_edge_support_threshold_lower = _LC130;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotConvexPolygonShape3D::~GodotConvexPolygonShape3D() */

void __thiscall
GodotConvexPolygonShape3D::~GodotConvexPolygonShape3D(GodotConvexPolygonShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotWorldBoundaryShape3D::~GodotWorldBoundaryShape3D() */

void __thiscall
GodotWorldBoundaryShape3D::~GodotWorldBoundaryShape3D(GodotWorldBoundaryShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotSeparationRayShape3D::~GodotSeparationRayShape3D() */

void __thiscall
GodotSeparationRayShape3D::~GodotSeparationRayShape3D(GodotSeparationRayShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotSphereShape3D::~GodotSphereShape3D() */

void __thiscall GodotSphereShape3D::~GodotSphereShape3D(GodotSphereShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotBoxShape3D::~GodotBoxShape3D() */

void __thiscall GodotBoxShape3D::~GodotBoxShape3D(GodotBoxShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotCapsuleShape3D::~GodotCapsuleShape3D() */

void __thiscall GodotCapsuleShape3D::~GodotCapsuleShape3D(GodotCapsuleShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotCylinderShape3D::~GodotCylinderShape3D() */

void __thiscall GodotCylinderShape3D::~GodotCylinderShape3D(GodotCylinderShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotConcavePolygonShape3D::~GodotConcavePolygonShape3D() */

void __thiscall
GodotConcavePolygonShape3D::~GodotConcavePolygonShape3D(GodotConcavePolygonShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotHeightMapShape3D::~GodotHeightMapShape3D() */

void __thiscall GodotHeightMapShape3D::~GodotHeightMapShape3D(GodotHeightMapShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotFaceShape3D::~GodotFaceShape3D() */

void __thiscall GodotFaceShape3D::~GodotFaceShape3D(GodotFaceShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



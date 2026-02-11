
/* GodotSoftBody3D::_shapes_changed() */

void GodotSoftBody3D::_shapes_changed(void)

{
  return;
}



/* GodotSoftBodyShape3D::intersect_point(Vector3 const&) const */

undefined8 GodotSoftBodyShape3D::intersect_point(Vector3 *param_1)

{
  return 0;
}



/* GodotSoftBodyShape3D::get_closest_point_to(Vector3 const&) const */

undefined1  [16] GodotSoftBodyShape3D::get_closest_point_to(Vector3 *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _err_print_error("get_closest_point_to","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x50d,
                   "Method/function failed. Returning: Vector3()",
                   "Get closest point is not supported for soft bodies.",0,0);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<DynamicBVH::Node const*, unsigned int, false, false>::resize(unsigned int) [clone
   .part.0] */

void LocalVector<DynamicBVH::Node_const*,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSoftBody3D::GodotSoftBody3D() */

void __thiscall GodotSoftBody3D::GodotSoftBody3D(GodotSoftBody3D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  GodotCollisionObject3D::GodotCollisionObject3D((GodotCollisionObject3D *)this,2);
  uVar2 = _UNK_0010a1a8;
  uVar1 = __LC12;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR__shape_changed_00109f30;
  uVar3 = _LC13;
  *(undefined8 *)(this + 0x120) = uVar1;
  *(undefined8 *)(this + 0x128) = uVar2;
  *(undefined8 *)(this + 0x180) = uVar3;
  *(undefined8 *)(this + 0x200) = uVar3;
  uVar3 = _LC14;
  *(undefined8 *)(this + 0x1a0) = uVar1;
  *(undefined8 *)(this + 0x1a8) = uVar2;
  *(undefined8 *)(this + 0x238) = uVar3;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x134] = (GodotSoftBody3D)0x0;
  *(undefined4 *)(this + 0x130) = 0x1000;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  this[0x1b4] = (GodotSoftBody3D)0x0;
  *(undefined4 *)(this + 0x1b0) = 0x1000;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined8 *)(this + 0x240) = 0x53f800000;
  *(undefined1 (*) [16])(this + 0x108) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  uVar2 = _UNK_0010a1b8;
  uVar1 = __LC32;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(GodotSoftBody3D **)(this + 0x270) = this;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2a8) = 2;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x248) = uVar1;
  *(undefined8 *)(this + 0x250) = uVar2;
  *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
  GodotCollisionObject3D::_set_static(SUB81(this,0));
  return;
}



/* GodotSoftBody3D::get_state(PhysicsServer3D::BodyState) const */

Variant * GodotSoftBody3D::get_state(Variant *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_3) {
  case 0:
    Variant::Variant(param_1,(Transform3D *)(param_2 + 0x48));
    goto LAB_0010033b;
  case 1:
    pcVar2 = "Linear velocity is not supported for Soft bodies.";
    uVar1 = 0x60;
    break;
  case 2:
    pcVar2 = "Angular velocity is not supported for Soft bodies.";
    uVar1 = 99;
    break;
  case 3:
    uVar1 = 0x66;
    goto LAB_0010031c;
  case 4:
    uVar1 = 0x69;
LAB_0010031c:
    _err_print_error("get_state","modules/godot_physics_3d/godot_soft_body_3d.cpp",uVar1,
                     "Method/function failed. Returning: false",
                     "Sleeping state is not supported for Soft bodies.",0,0);
    Variant::Variant(param_1,false);
    goto LAB_0010033b;
  default:
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    goto LAB_0010033b;
  }
  _err_print_error("get_state","modules/godot_physics_3d/godot_soft_body_3d.cpp",uVar1,
                   "Method/function failed. Returning: Vector3()",pcVar2,0,0);
  local_1c = 0;
  local_14 = 0;
  Variant::Variant(param_1,(Vector3 *)&local_1c);
LAB_0010033b:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GodotSoftBody3D::update_rendering_server(PhysicsServer3DRenderingServerHandler*) */

void __thiscall
GodotSoftBody3D::update_rendering_server
          (GodotSoftBody3D *this,PhysicsServer3DRenderingServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(this + 0xd8) == 0) {
    return;
  }
  uVar1 = *(uint *)(this + 0x210);
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      do {
        uVar2 = *(uint *)(*(long *)(this + 0x218) + uVar6 * 4);
        if (*(uint *)(this + 0xe0) <= uVar2) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar2,
                     (ulong)*(uint *)(this + 0xe0),"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar4 = (ulong)uVar2 * 0x70 + *(long *)(this + 0xe8);
        (**(code **)(*(long *)param_1 + 0x150))(param_1,uVar6 & 0xffffffff,lVar4 + 0xc);
        uVar5 = uVar6 & 0xffffffff;
        uVar6 = uVar6 + 1;
        (**(code **)(*(long *)param_1 + 0x158))(param_1,uVar5,lVar4 + 0x48);
        if (uVar6 == uVar1) goto LAB_00100560;
        uVar5 = (ulong)*(uint *)(this + 0x210);
      } while ((uint)uVar6 < *(uint *)(this + 0x210));
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,uVar5,"p_index","count","",
               false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_00100560:
                    /* WARNING: Could not recover jumptable at 0x00100582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x160))(param_1,this + 0x220);
  return;
}



/* GodotSoftBody3D::update_normals_and_centroids() */

void __thiscall GodotSoftBody3D::update_normals_and_centroids(GodotSoftBody3D *this)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  
  lVar14 = *(long *)(this + 0xe8);
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = (ulong)*(uint *)(this + 0xe0) * 0x70 + lVar14;
  lVar9 = lVar14;
  if (lVar15 == lVar14) {
    puVar12 = *(undefined8 **)(this + 0x108);
    puVar13 = puVar12 + (ulong)*(uint *)(this + 0x100) * 9;
    fVar1 = _LC29._4_4_;
    fVar17 = (float)_LC29;
    uVar7 = _LC28;
    if (puVar13 == puVar12) goto LAB_00100842;
LAB_00100680:
    do {
      lVar9 = puVar12[2];
      lVar10 = puVar12[3];
      lVar6 = puVar12[4];
      fVar21 = (float)((ulong)*(undefined8 *)(lVar9 + 0x14) >> 0x20);
      fVar18 = (float)((ulong)*(undefined8 *)(lVar9 + 0xc) >> 0x20);
      fVar22 = (float)*(undefined8 *)(lVar9 + 0xc);
      fVar24 = (float)*(undefined8 *)(lVar9 + 0x14);
      fVar28 = fVar22 - (float)*(undefined8 *)(lVar10 + 0xc);
      fVar26 = (float)*(undefined8 *)(lVar9 + 0x10);
      fVar16 = fVar26 - (float)*(undefined8 *)(lVar10 + 0x10);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar9 + 0x10) >> 0x20);
      fVar26 = fVar26 - (float)*(undefined8 *)(lVar6 + 0x10);
      fVar22 = fVar22 - (float)*(undefined8 *)(lVar6 + 0xc);
      fVar24 = (fVar24 - (float)*(undefined8 *)(lVar10 + 0x14)) * fVar26 -
               fVar16 * (fVar24 - (float)*(undefined8 *)(lVar6 + 0x14));
      fVar25 = fVar28 * (fVar25 - (float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20)) -
               (fVar25 - (float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20)) * fVar22;
      fVar22 = fVar16 * fVar22 - fVar28 * fVar26;
      auVar27._8_4_ =
           (fVar21 - (float)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20)) * 0.0 -
           (fVar21 - (float)((ulong)*(undefined8 *)(lVar6 + 0x14) >> 0x20)) * 0.0;
      auVar27._0_8_ = CONCAT44(fVar25,fVar24);
      auVar27._12_4_ =
           (fVar18 - (float)((ulong)*(undefined8 *)(lVar10 + 0xc) >> 0x20)) * 0.0 -
           (fVar18 - (float)((ulong)*(undefined8 *)(lVar6 + 0xc) >> 0x20)) * 0.0;
      *(ulong *)(lVar9 + 0x48) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20) + fVar25,
                    (float)*(undefined8 *)(lVar9 + 0x48) + fVar24);
      *(float *)(lVar9 + 0x50) = *(float *)(lVar9 + 0x50) + fVar22;
      *(ulong *)(lVar10 + 0x48) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x48) >> 0x20) + fVar25,
                    (float)*(undefined8 *)(lVar10 + 0x48) + fVar24);
      *(float *)(lVar10 + 0x50) = *(float *)(lVar10 + 0x50) + fVar22;
      *(float *)(lVar6 + 0x50) = fVar22 + *(float *)(lVar6 + 0x50);
      *(ulong *)(lVar6 + 0x48) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x48) >> 0x20) + fVar25,
                    (float)*(undefined8 *)(lVar6 + 0x48) + fVar24);
      puVar12[5] = CONCAT44(fVar25,fVar24);
      *(float *)(puVar12 + 6) = fVar22;
      fVar22 = *(float *)(puVar12 + 6);
      fVar16 = *(float *)(puVar12 + 5) * *(float *)(puVar12 + 5) + fVar25 * fVar25 + fVar22 * fVar22
      ;
      if (fVar16 == 0.0) {
        *(undefined4 *)(puVar12 + 6) = 0;
        puVar12[5] = 0;
      }
      else {
        fVar16 = SQRT(fVar16);
        auVar19._4_4_ = fVar16;
        auVar19._0_4_ = fVar16;
        auVar19._8_8_ = uVar7;
        auVar27 = divps(auVar27,auVar19);
        *(float *)(puVar12 + 6) = fVar22 / fVar16;
        puVar12[5] = auVar27._0_8_;
      }
      uVar2 = *(undefined8 *)(lVar10 + 0xc);
      uVar3 = *(undefined8 *)(lVar9 + 0xc);
      puVar11 = puVar12 + 9;
      uVar4 = *(undefined8 *)(lVar6 + 0xc);
      *(float *)(puVar12 + 1) =
           (*(float *)(lVar9 + 0x14) + *(float *)(lVar10 + 0x14) + *(float *)(lVar6 + 0x14)) *
           fVar17;
      *puVar12 = CONCAT44(((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar2 >> 0x20) +
                          (float)((ulong)uVar4 >> 0x20)) * fVar1,
                          ((float)uVar3 + (float)uVar2 + (float)uVar4) * fVar17);
      puVar12 = puVar11;
    } while (puVar13 != puVar11);
    dVar8 = _LC31;
    uVar7 = _LC28;
    if (lVar15 == lVar14) goto LAB_00100842;
  }
  else {
    do {
      *(undefined8 *)(lVar9 + 0x48) = 0;
      lVar10 = lVar9 + 0x70;
      *(undefined4 *)(lVar9 + 0x50) = 0;
      lVar9 = lVar10;
    } while (lVar15 != lVar10);
    puVar12 = *(undefined8 **)(this + 0x108);
    puVar13 = puVar12 + (ulong)*(uint *)(this + 0x100) * 9;
    fVar1 = _LC29._4_4_;
    fVar17 = (float)_LC29;
    uVar7 = _LC28;
    dVar8 = _LC31;
    if (puVar13 != puVar12) goto LAB_00100680;
  }
  do {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(ulong *)(lVar14 + 0x48);
    fVar17 = (float)(*(ulong *)(lVar14 + 0x48) >> 0x20);
    fVar1 = *(float *)(lVar14 + 0x50);
    fVar17 = SQRT(*(float *)(lVar14 + 0x48) * *(float *)(lVar14 + 0x48) + fVar17 * fVar17 +
                  fVar1 * fVar1);
    if (dVar8 < (double)fVar17) {
      auVar20._4_4_ = fVar17;
      auVar20._0_4_ = fVar17;
      auVar20._8_8_ = uVar7;
      auVar27 = divps(auVar23,auVar20);
      *(float *)(lVar14 + 0x50) = fVar1 / fVar17;
      *(long *)(lVar14 + 0x48) = auVar27._0_8_;
    }
    lVar14 = lVar14 + 0x70;
  } while (lVar15 != lVar14);
LAB_00100842:
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::update_area() */

void GodotSoftBody3D::update_area(void)

{
  float fVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  void *__s;
  long lVar8;
  int *in_RCX;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  uint uVar12;
  long in_RDI;
  ulong uVar13;
  long lVar14;
  long in_R10;
  float *pfVar15;
  uint uVar16;
  ulong unaff_R12;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar1 = _LC32;
  lVar14 = *(long *)(in_RDI + 0x108);
  lVar8 = lVar14 + (ulong)*(uint *)(in_RDI + 0x100) * 0x48;
  lVar6 = lVar14;
  if (lVar14 == lVar8) {
    uVar12 = *(uint *)(in_RDI + 0xe0);
    if (uVar12 == 0) {
      return;
    }
LAB_00100b50:
    uVar16 = 0;
    uVar5 = uVar12 - 1 | uVar12 - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 >> 4 | uVar5;
    uVar5 = uVar5 >> 8 | uVar5;
    __s = (void *)Memory::realloc_static
                            ((void *)0x0,(ulong)((uVar5 | uVar5 >> 0x10) + 1) << 2,false);
    if (__s == (void *)0x0) {
      LocalVector<DynamicBVH::Node_const*,unsigned_int,false,false>::resize(uVar16);
LAB_00100c11:
      lVar14 = *(long *)(in_RDI + 0x108);
      lVar8 = (ulong)*(uint *)(in_RDI + 0x100) * 0x48 + lVar14;
    }
    else {
      in_RCX = (int *)memset(__s,0,(ulong)uVar12 << 2);
      in_R10 = *(long *)(in_RDI + 0xe8);
      unaff_R12 = (ulong)*(uint *)(in_RDI + 0xe0);
      lVar14 = unaff_R12 * 0x70 + in_R10;
      lVar8 = in_R10;
      if (lVar14 == in_R10) goto LAB_00100c11;
      do {
        *(undefined4 *)(lVar8 + 0x54) = 0;
        lVar8 = lVar8 + 0x70;
      } while (lVar14 != lVar8);
      lVar14 = *(long *)(in_RDI + 0x108);
      lVar8 = lVar14 + (ulong)*(uint *)(in_RDI + 0x100) * 0x48;
    }
    if (lVar14 != lVar8) goto LAB_0010099a;
    if ((int)unaff_R12 < 1) goto LAB_00100a54;
LAB_00100a01:
    pfVar15 = (float *)(in_R10 + 0x54);
    uVar5 = 0;
    piVar11 = in_RCX;
    do {
      if (uVar5 == uVar12) {
        uVar9 = (ulong)uVar5;
        uVar13 = uVar9;
        goto LAB_00100a88;
      }
      uVar16 = (uint)unaff_R12;
      if (*piVar11 < 1) {
        if (uVar16 <= uVar5) goto LAB_00100b24;
        *pfVar15 = 0.0;
      }
      else {
        if (uVar16 <= uVar5) {
LAB_00100b24:
          uVar9 = (ulong)uVar5;
          uVar13 = unaff_R12 & 0xffffffff;
LAB_00100a88:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,uVar13,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *pfVar15 = *pfVar15 / (float)*piVar11;
      }
      uVar5 = uVar5 + 1;
      pfVar15 = pfVar15 + 0x1c;
      piVar11 = piVar11 + 1;
    } while (uVar5 != uVar16);
  }
  else {
    do {
      lVar2 = *(long *)(lVar6 + 0x10);
      in_RCX = *(int **)(lVar6 + 0x18);
      lVar7 = lVar6 + 0x48;
      lVar3 = *(long *)(lVar6 + 0x20);
      fVar22 = (float)in_RCX[5] - *(float *)(lVar2 + 0x14);
      fVar17 = *(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14);
      fVar23 = (float)in_RCX[4] - *(float *)(lVar2 + 0x10);
      fVar20 = *(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10);
      fVar21 = (float)in_RCX[3] - *(float *)(lVar2 + 0xc);
      fVar18 = *(float *)(lVar3 + 0xc) - *(float *)(lVar2 + 0xc);
      fVar19 = fVar18 * fVar22 - fVar21 * fVar17;
      fVar17 = fVar17 * fVar23 - fVar20 * fVar22;
      fVar18 = fVar20 * fVar21 - fVar18 * fVar23;
      *(float *)(lVar6 + 0x34) = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18) * fVar1;
      lVar6 = lVar7;
    } while (lVar7 != lVar8);
    uVar12 = *(uint *)(in_RDI + 0xe0);
    if (uVar12 != 0) goto LAB_00100b50;
    in_R10 = *(long *)(in_RDI + 0xe8);
    unaff_R12 = 0;
    in_RCX = (int *)0x0;
LAB_0010099a:
    do {
      plVar10 = (long *)(lVar14 + 0x10);
      do {
        lVar6 = *plVar10;
        if ((int)unaff_R12 == 0) {
          uVar13 = 0;
          uVar9 = 0;
          goto LAB_00100a88;
        }
        uVar5 = (int)(lVar6 - in_R10 >> 4) * -0x49249249;
        uVar9 = (ulong)uVar5;
        if (uVar12 <= uVar5) {
          uVar13 = (ulong)uVar12;
          goto LAB_00100a88;
        }
        fVar1 = *(float *)(lVar14 + 0x34);
        plVar10 = plVar10 + 1;
        in_RCX[uVar9] = in_RCX[uVar9] + 1;
        uVar5 = *(uint *)(in_RDI + 0xe0);
        unaff_R12 = (ulong)uVar5;
        *(float *)(lVar6 + 0x54) = ABS(fVar1) + *(float *)(lVar6 + 0x54);
      } while ((long *)(lVar14 + 0x28) != plVar10);
      lVar14 = lVar14 + 0x48;
    } while (lVar8 != lVar14);
    if (0 < (int)uVar5) goto LAB_00100a01;
  }
  if (in_RCX == (int *)0x0) {
    return;
  }
LAB_00100a54:
  Memory::free_static(in_RCX,false);
  return;
}



/* GodotSoftBody3D::reset_link_rest_lengths() */

void __thiscall GodotSoftBody3D::reset_link_rest_lengths(GodotSoftBody3D *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = *(long *)(this + 0xf8);
  lVar4 = (ulong)*(uint *)(this + 0xf0) * 0x30 + lVar3;
  for (; lVar4 != lVar3; lVar3 = lVar3 + 0x30) {
    lVar1 = *(long *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x10);
    fVar7 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
    fVar6 = *(float *)(lVar2 + 0xc) - *(float *)(lVar1 + 0xc);
    fVar5 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
    fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
    *(float *)(lVar3 + 0x20) = fVar5;
    *(float *)(lVar3 + 0x28) = fVar5 * fVar5;
  }
  return;
}



/* GodotSoftBody3D::update_link_constants() */

void __thiscall GodotSoftBody3D::update_link_constants(GodotSoftBody3D *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = *(long *)(this + 0xf8);
  fVar3 = _LC33 / *(float *)(this + 0x248);
  lVar2 = (ulong)*(uint *)(this + 0xf0) * 0x30 + lVar1;
  for (; lVar2 != lVar1; lVar1 = lVar1 + 0x30) {
    *(float *)(lVar1 + 0x24) =
         (*(float *)(*(long *)(lVar1 + 0x10) + 0x58) + *(float *)(*(long *)(lVar1 + 0x18) + 0x58)) *
         fVar3;
  }
  return;
}



/* GodotSoftBody3D::update_constants() */

void __thiscall GodotSoftBody3D::update_constants(GodotSoftBody3D *this)

{
  reset_link_rest_lengths(this);
  update_link_constants(this);
  update_area();
  return;
}



/* GodotSoftBody3D::get_vertex_position(int) const */

undefined1  [16] __thiscall GodotSoftBody3D::get_vertex_position(GodotSoftBody3D *this,int param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    uVar6 = 0x13b;
    pcVar5 = "Condition \"p_index < 0\" is true. Returning: Vector3()";
LAB_00100dd2:
    _err_print_error("get_vertex_position","modules/godot_physics_3d/godot_soft_body_3d.cpp",uVar6,
                     pcVar5,0,0);
  }
  else if (*(long *)(this + 0xd8) != 0) {
    uVar1 = *(uint *)(this + 0x210);
    if (param_1 < (int)uVar1) {
      if (uVar1 <= (uint)param_1) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar1,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar1 = *(uint *)(*(long *)(this + 0x218) + (long)param_1 * 4);
      if (uVar1 < *(uint *)(this + 0xe0)) {
        lVar4 = (ulong)uVar1 * 0x70 + *(long *)(this + 0xe8);
        local_1c = *(undefined8 *)(lVar4 + 0xc);
        local_14 = *(undefined4 *)(lVar4 + 0x14);
        goto LAB_00100df6;
      }
      uVar6 = 0x144;
      pcVar5 = "Condition \"node_index >= nodes.size()\" is true. Returning: Vector3()";
    }
    else {
      uVar6 = 0x141;
      pcVar5 = 
      "Condition \"p_index >= (int)map_visual_to_physics.size()\" is true. Returning: Vector3()";
    }
    goto LAB_00100dd2;
  }
  local_1c = 0;
  local_14 = 0;
LAB_00100df6:
  auVar7._8_4_ = local_14;
  auVar7._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::set_vertex_position(int, Vector3 const&) */

void __thiscall
GodotSoftBody3D::set_vertex_position(GodotSoftBody3D *this,int param_1,Vector3 *param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_1 < 0) {
    _err_print_error("set_vertex_position","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x149,
                     "Condition \"p_index < 0\" is true.",0,0);
    return;
  }
  if (*(long *)(this + 0xd8) != 0) {
    uVar1 = *(uint *)(this + 0x210);
    if ((int)uVar1 <= param_1) {
      _err_print_error("set_vertex_position","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x14f
                       ,"Condition \"p_index >= (int)map_visual_to_physics.size()\" is true.",0,0);
      return;
    }
    if (uVar1 <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,(ulong)uVar1,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(*(long *)(this + 0x218) + (long)param_1 * 4);
    if (*(uint *)(this + 0xe0) <= uVar1) {
      _err_print_error("set_vertex_position","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x152
                       ,"Condition \"node_index >= nodes.size()\" is true.",0,0);
      return;
    }
    lVar3 = (ulong)uVar1 * 0x70 + *(long *)(this + 0xe8);
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0xc);
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar3 + 0x14);
    *(undefined8 *)(lVar3 + 0xc) = *(undefined8 *)param_2;
    *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(param_2 + 8);
  }
  return;
}



/* GodotSoftBody3D::pin_vertex(int) */

void __thiscall GodotSoftBody3D::pin_vertex(GodotSoftBody3D *this,int param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
    uVar7 = 0x159;
    pcVar5 = "Condition \"p_index < 0\" is true.";
  }
  else {
    uVar1 = *(uint *)(this + 600);
    piVar4 = *(int **)(this + 0x260);
    if (uVar1 != 0) {
      piVar6 = piVar4;
      do {
        if (param_1 == *piVar6) {
          return;
        }
        piVar6 = piVar6 + 1;
      } while (piVar4 + uVar1 != piVar6);
    }
    if (*(uint *)(this + 0x25c) == uVar1) {
      uVar8 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar8 = 1;
      }
      *(int *)(this + 0x25c) = (int)uVar8;
      piVar4 = (int *)Memory::realloc_static(piVar4,uVar8 << 2,false);
      *(int **)(this + 0x260) = piVar4;
      if (piVar4 == (int *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar1 = *(uint *)(this + 600);
    }
    lVar2 = *(long *)(this + 0xd8);
    *(uint *)(this + 600) = uVar1 + 1;
    piVar4[uVar1] = param_1;
    if (lVar2 == 0) {
      return;
    }
    uVar1 = *(uint *)(this + 0x210);
    if (param_1 < (int)uVar1) {
      if (uVar1 <= (uint)param_1) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,(ulong)uVar1,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar1 = *(uint *)(*(long *)(this + 0x218) + (long)param_1 * 4);
      if (uVar1 < *(uint *)(this + 0xe0)) {
        *(undefined4 *)((ulong)uVar1 * 0x70 + *(long *)(this + 0xe8) + 0x58) = 0;
        return;
      }
      uVar7 = 0x165;
      pcVar5 = "Condition \"node_index >= nodes.size()\" is true.";
    }
    else {
      uVar7 = 0x162;
      pcVar5 = "Condition \"p_index >= (int)map_visual_to_physics.size()\" is true.";
    }
  }
  _err_print_error("pin_vertex","modules/godot_physics_3d/godot_soft_body_3d.cpp",uVar7,pcVar5,0,0);
  return;
}



/* GodotSoftBody3D::unpin_vertex(int) */

void __thiscall GodotSoftBody3D::unpin_vertex(GodotSoftBody3D *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    _err_print_error("unpin_vertex","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x16c,
                     "Condition \"p_index < 0\" is true.",0,0);
    return;
  }
  uVar6 = *(uint *)(this + 600);
  if (uVar6 != 0) {
    lVar1 = *(long *)(this + 0x260);
    uVar3 = 0;
    do {
      if (*(int *)(lVar1 + uVar3 * 4) == param_1) {
        uVar5 = uVar3 & 0xffffffff;
        *(uint *)(this + 600) = uVar6 - 1;
        if ((uint)uVar3 < uVar6 - 1) {
          puVar4 = (undefined4 *)(lVar1 + uVar3 * 4);
          do {
            uVar6 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar6;
            *puVar4 = *(undefined4 *)(lVar1 + uVar5 * 4);
            puVar4 = puVar4 + 1;
          } while (uVar6 < *(uint *)(this + 600));
        }
        if (*(long *)(this + 0xd8) == 0) {
          return;
        }
        uVar6 = *(uint *)(this + 0x210);
        if ((int)uVar6 <= param_1) {
          _err_print_error("unpin_vertex","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x174,
                           "Condition \"p_index >= (int)map_visual_to_physics.size()\" is true.",0,0
                          );
          return;
        }
        if (uVar6 <= (uint)param_1) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,(ulong)uVar6,
                     "p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar6 = *(uint *)(*(long *)(this + 0x218) + (long)param_1 * 4);
        if (*(uint *)(this + 0xe0) <= uVar6) {
          _err_print_error("unpin_vertex","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x177,
                           "Condition \"node_index >= nodes.size()\" is true.",0,0);
          return;
        }
        *(float *)((ulong)uVar6 * 0x70 + *(long *)(this + 0xe8) + 0x58) =
             (float)*(uint *)(this + 0xe0) * *(float *)(this + 0x240);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
  }
  return;
}



/* GodotSoftBody3D::unpin_all_vertices() */

void __thiscall GodotSoftBody3D::unpin_all_vertices(GodotSoftBody3D *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(this + 600);
  uVar10 = (ulong)uVar2;
  if (*(long *)(this + 0xd8) != 0) {
    uVar3 = *(uint *)(this + 0xe0);
    uVar9 = 0;
    fVar1 = *(float *)(this + 0x240);
    if (uVar2 == 0) {
      return;
    }
    do {
      if ((uint)uVar10 <= (uint)uVar9) {
LAB_0010144e:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,uVar10,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar4 = *(uint *)(*(long *)(this + 0x260) + uVar9 * 4);
      uVar5 = *(uint *)(this + 0x210);
      if ((int)uVar4 < (int)uVar5) {
        if (uVar5 <= uVar4) {
          uVar10 = (ulong)uVar5;
          uVar9 = (ulong)uVar4;
          goto LAB_0010144e;
        }
        uVar4 = *(uint *)(*(long *)(this + 0x218) + (ulong)uVar4 * 4);
        if (*(uint *)(this + 0xe0) <= uVar4) {
          pcVar7 = "Condition \"node_index >= nodes.size()\" is true. Continuing.";
          uVar8 = 0x18d;
          goto LAB_00101490;
        }
        *(float *)((ulong)uVar4 * 0x70 + *(long *)(this + 0xe8) + 0x58) = (float)uVar3 * fVar1;
      }
      else {
        pcVar7 = 
        "Condition \"pinned_vertex >= (int)map_visual_to_physics.size()\" is true. Continuing.";
        uVar8 = 0x18a;
LAB_00101490:
        _err_print_error("unpin_all_vertices","modules/godot_physics_3d/godot_soft_body_3d.cpp",
                         uVar8,pcVar7,0,0);
        uVar10 = (ulong)*(uint *)(this + 600);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  if ((int)uVar10 != 0) {
    *(undefined4 *)(this + 600) = 0;
  }
  return;
}



/* GodotSoftBody3D::is_vertex_pinned(int) const */

undefined8 __thiscall GodotSoftBody3D::is_vertex_pinned(GodotSoftBody3D *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 < 0) {
    _err_print_error("is_vertex_pinned","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x197,
                     "Condition \"p_index < 0\" is true. Returning: false",0,0);
    return 0;
  }
  if (*(uint *)(this + 600) != 0) {
    piVar2 = *(int **)(this + 0x260);
    piVar1 = piVar2 + *(uint *)(this + 600);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return 0;
}



/* GodotSoftBody3D::get_node_count() const */

undefined4 __thiscall GodotSoftBody3D::get_node_count(GodotSoftBody3D *this)

{
  return *(undefined4 *)(this + 0xe0);
}



/* GodotSoftBody3D::get_node_inv_mass(unsigned int) const */

undefined4 __thiscall GodotSoftBody3D::get_node_inv_mass(GodotSoftBody3D *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 0xe0)) {
    return *(undefined4 *)((ulong)param_1 * 0x70 + *(long *)(this + 0xe8) + 0x58);
  }
  _err_print_index_error
            ("get_node_inv_mass","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1a8,
             (ulong)param_1,(ulong)*(uint *)(this + 0xe0),"p_node_index","nodes.size()","",false,
             false);
  return 0;
}



/* GodotSoftBody3D::get_node_position(unsigned int) const */

undefined1  [16] __thiscall GodotSoftBody3D::get_node_position(GodotSoftBody3D *this,uint param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < *(uint *)(this + 0xe0)) {
    lVar2 = (ulong)param_1 * 0x70 + *(long *)(this + 0xe8);
    local_1c = *(undefined8 *)(lVar2 + 0xc);
    local_14 = *(undefined4 *)(lVar2 + 0x14);
  }
  else {
    _err_print_index_error
              ("get_node_position","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1ad,
               (ulong)param_1,(ulong)*(uint *)(this + 0xe0),"p_node_index","nodes.size()","",false,
               false);
    local_14 = 0;
    local_1c = 0;
  }
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::get_node_velocity(unsigned int) const */

undefined1  [16] __thiscall GodotSoftBody3D::get_node_velocity(GodotSoftBody3D *this,uint param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < *(uint *)(this + 0xe0)) {
    lVar2 = (ulong)param_1 * 0x70 + *(long *)(this + 0xe8);
    local_1c = *(undefined8 *)(lVar2 + 0x30);
    local_14 = *(undefined4 *)(lVar2 + 0x38);
  }
  else {
    _err_print_index_error
              ("get_node_velocity","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1b2,
               (ulong)param_1,(ulong)*(uint *)(this + 0xe0),"p_node_index","nodes.size()","",false,
               false);
    local_14 = 0;
    local_1c = 0;
  }
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::get_node_biased_velocity(unsigned int) const */

undefined1  [16] __thiscall
GodotSoftBody3D::get_node_biased_velocity(GodotSoftBody3D *this,uint param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < *(uint *)(this + 0xe0)) {
    lVar2 = (ulong)param_1 * 0x70 + *(long *)(this + 0xe8);
    local_1c = *(undefined8 *)(lVar2 + 0x3c);
    local_14 = *(undefined4 *)(lVar2 + 0x44);
  }
  else {
    _err_print_index_error
              ("get_node_biased_velocity","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1b7,
               (ulong)param_1,(ulong)*(uint *)(this + 0xe0),"p_node_index","nodes.size()","",false,
               false);
    local_14 = 0;
    local_1c = 0;
  }
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::apply_node_impulse(unsigned int, Vector3 const&) */

void __thiscall
GodotSoftBody3D::apply_node_impulse(GodotSoftBody3D *this,uint param_1,Vector3 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 < *(uint *)(this + 0xe0)) {
    uVar2 = *(undefined8 *)param_2;
    lVar3 = (ulong)param_1 * 0x70 + *(long *)(this + 0xe8);
    fVar1 = *(float *)(lVar3 + 0x58);
    *(float *)(lVar3 + 0x38) = *(float *)(param_2 + 8) * fVar1 + *(float *)(lVar3 + 0x38);
    *(ulong *)(lVar3 + 0x30) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) +
                  (float)((ulong)uVar2 >> 0x20) * fVar1,
                  (float)*(undefined8 *)(lVar3 + 0x30) + (float)uVar2 * fVar1);
    return;
  }
  _err_print_index_error
            ("apply_node_impulse","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1bc,
             (ulong)param_1,(ulong)*(uint *)(this + 0xe0),"p_node_index","nodes.size()","",false,
             false);
  return;
}



/* GodotSoftBody3D::apply_node_bias_impulse(unsigned int, Vector3 const&) */

void __thiscall
GodotSoftBody3D::apply_node_bias_impulse(GodotSoftBody3D *this,uint param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  if (param_1 < *(uint *)(this + 0xe0)) {
    uVar1 = *(undefined8 *)param_2;
    lVar2 = (ulong)param_1 * 0x70 + *(long *)(this + 0xe8);
    fVar3 = (float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20);
    *(float *)(lVar2 + 0x44) =
         *(float *)(lVar2 + 0x58) * *(float *)(param_2 + 8) + *(float *)(lVar2 + 0x44);
    *(ulong *)(lVar2 + 0x3c) =
         CONCAT44(fVar3 * (float)((ulong)uVar1 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar2 + 0x3c) >> 0x20),
                  fVar3 * (float)uVar1 + (float)*(undefined8 *)(lVar2 + 0x3c));
    return;
  }
  _err_print_index_error
            ("apply_node_bias_impulse","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1c2,
             (ulong)param_1,(ulong)*(uint *)(this + 0xe0),"p_node_index","nodes.size()","",false,
             false);
  return;
}



/* GodotSoftBody3D::get_face_count() const */

undefined4 __thiscall GodotSoftBody3D::get_face_count(GodotSoftBody3D *this)

{
  return *(undefined4 *)(this + 0x100);
}



/* GodotSoftBody3D::get_face_points(unsigned int, Vector3&, Vector3&, Vector3&) const */

void __thiscall
GodotSoftBody3D::get_face_points
          (GodotSoftBody3D *this,uint param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_1 < *(uint *)(this + 0x100)) {
    lVar1 = *(long *)(this + 0x108) + (ulong)param_1 * 0x48;
    lVar2 = *(long *)(lVar1 + 0x10);
    *(undefined8 *)param_2 = *(undefined8 *)(lVar2 + 0xc);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar2 + 0x14);
    lVar2 = *(long *)(lVar1 + 0x18);
    lVar1 = *(long *)(lVar1 + 0x20);
    *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar2 + 0x14);
    *(undefined8 *)param_4 = *(undefined8 *)(lVar1 + 0xc);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(lVar1 + 0x14);
    return;
  }
  _err_print_index_error
            ("get_face_points","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1cc,
             (ulong)param_1,(ulong)*(uint *)(this + 0x100),"p_face_index","faces.size()","",false,
             false);
  return;
}



/* GodotSoftBody3D::get_face_normal(unsigned int) const */

undefined1  [16] __thiscall GodotSoftBody3D::get_face_normal(GodotSoftBody3D *this,uint param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < *(uint *)(this + 0x100)) {
    lVar1 = *(long *)(this + 0x108) + (ulong)param_1 * 0x48;
    local_1c = *(undefined8 *)(lVar1 + 0x28);
    local_14 = *(undefined4 *)(lVar1 + 0x30);
  }
  else {
    _err_print_index_error
              ("get_face_normal","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1d4,
               (ulong)param_1,(ulong)*(uint *)(this + 0x100),"p_face_index","faces.size()","",false,
               false);
    local_14 = 0;
    local_1c = 0;
  }
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::reoptimize_link_order() */

void __thiscall GodotSoftBody3D::reoptimize_link_order(GodotSoftBody3D *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  void *__s;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *__s_00;
  undefined8 *__dest;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  void *local_68;
  
  uVar24 = *(uint *)(this + 0xf0);
  uVar15 = *(uint *)(this + 0xe0);
  if ((uVar24 == 0) || (uVar15 < 2)) {
    return;
  }
  lVar18 = *(long *)(this + 0xe8);
  uVar17 = (ulong)(uVar15 + 1);
  if (uVar17 == 0) {
LAB_00102110:
    __s = (void *)0x0;
  }
  else {
    __s = (void *)Memory::alloc_static(uVar17 * 4,true);
    if (__s == (void *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      goto LAB_00102110;
    }
    *(ulong *)((long)__s + -8) = uVar17;
  }
  uVar4 = (ulong)uVar24;
  uVar17 = uVar4 * 4;
  pvVar6 = (void *)Memory::alloc_static(uVar17,true);
  if (pvVar6 == (void *)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(ulong *)((long)pvVar6 + -8) = uVar4;
  }
  pvVar7 = (void *)Memory::alloc_static(uVar17,true);
  if (pvVar7 == (void *)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(ulong *)((long)pvVar7 + -8) = uVar4;
  }
  pvVar8 = (void *)Memory::alloc_static(uVar17,true);
  if (pvVar8 == (void *)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(ulong *)((long)pvVar8 + -8) = uVar4;
  }
  uVar17 = (ulong)(uVar24 * 2);
  if (uVar17 == 0) {
LAB_001021d8:
    local_68 = (void *)0x0;
  }
  else {
    local_68 = (void *)Memory::alloc_static(uVar17 << 4,true);
    if (local_68 == (void *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      goto LAB_001021d8;
    }
    *(ulong *)((long)local_68 + -8) = uVar17;
  }
  __s_00 = (void *)Memory::alloc_static(uVar4 * 8,true);
  if (__s_00 == (void *)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(ulong *)((long)__s_00 + -8) = uVar4;
  }
  __dest = (undefined8 *)Memory::alloc_static(uVar4 * 0x30,true);
  if (__dest == (undefined8 *)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    uVar17 = 0;
    __dest[-1] = uVar4;
    puVar9 = __dest;
    do {
      uVar17 = uVar17 + 1;
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar9 + 4) = (undefined1  [16])0x0;
      puVar9 = puVar9 + 6;
    } while (uVar17 < uVar4);
  }
  if (*(int *)(this + 0xf0) != 0) {
    memcpy(__dest,*(void **)(this + 0xf8),uVar4 * 0x30);
    if (uVar15 + 1 != 0) {
      memset(__s,0xff,(ulong)uVar15 * 4 + 4);
    }
    memset(__s_00,0,uVar4 * 8);
    lVar14 = 0;
    iVar16 = 0;
    iVar21 = 0;
    do {
      uVar15 = *(uint *)(this + 0xf0);
      uVar13 = (uint)lVar14;
      if (uVar15 <= uVar13) goto LAB_00101f18;
      puVar9 = *(undefined8 **)(this + 0xf8);
      iVar5 = (int)(puVar9[lVar14 * 6 + 3] - lVar18 >> 4) * -0x49249249;
      puVar23 = (uint *)((long)__s +
                        (long)((int)(puVar9[lVar14 * 6 + 2] - lVar18 >> 4) * -0x49249249) * 4);
      if ((int)*puVar23 < 0) {
        *(undefined4 *)((long)pvVar6 + lVar14 * 4) = 0xffffffff;
        puVar10 = (uint *)((long)__s + (long)iVar5 * 4);
        uVar15 = *puVar10;
        iVar20 = iVar16;
        if ((int)uVar15 < 0) goto LAB_00101ea4;
LAB_00101ddd:
        *(uint *)((long)pvVar7 + lVar14 * 4) = uVar15;
        iVar16 = iVar20 + 1;
        puVar22 = (uint *)((long)iVar20 * 0x10 + (long)local_68);
        *puVar22 = ~uVar13;
        iVar5 = *(int *)((long)pvVar6 + lVar14 * 4);
        plVar1 = (long *)((long)__s_00 + (long)(int)*puVar10 * 8);
        *(long *)(puVar22 + 2) = *plVar1;
        *plVar1 = (long)puVar22;
        if (iVar5 == -1) {
          iVar5 = *(int *)((long)pvVar7 + lVar14 * 4);
          goto joined_r0x00101eb6;
        }
      }
      else {
        *(uint *)((long)pvVar6 + lVar14 * 4) = *puVar23;
        iVar20 = iVar16 + 1;
        puVar10 = (uint *)((long)__s + (long)iVar5 * 4);
        puVar22 = (uint *)((long)iVar16 * 0x10 + (long)local_68);
        *puVar22 = uVar13;
        puVar11 = (undefined8 *)((long)__s_00 + (long)(int)*puVar23 * 8);
        *(undefined8 *)(puVar22 + 2) = *puVar11;
        *puVar11 = puVar22;
        uVar15 = *puVar10;
        if (-1 < (int)uVar15) goto LAB_00101ddd;
LAB_00101ea4:
        *(undefined4 *)((long)pvVar7 + lVar14 * 4) = 0xffffffff;
        iVar5 = *(int *)((long)pvVar6 + lVar14 * 4);
        iVar16 = iVar20;
joined_r0x00101eb6:
        if (iVar5 == -1) {
          *(uint *)((long)pvVar8 + (long)iVar21 * 4) = uVar13;
          *(undefined4 *)((long)pvVar7 + lVar14 * 4) = 0xfffffffe;
          iVar21 = iVar21 + 1;
          *(undefined4 *)((long)pvVar6 + lVar14 * 4) = 0xfffffffe;
        }
      }
      *puVar10 = uVar13;
      lVar14 = lVar14 + 1;
      *puVar23 = uVar13;
    } while ((uint)lVar14 < uVar24);
    if (iVar21 != 0) {
      lVar14 = 0;
      do {
        lVar18 = (long)*(int *)((long)pvVar8 + lVar14 * 4);
        uVar15 = *(uint *)(this + 0xf0);
        puVar11 = __dest + lVar18 * 6;
        if (uVar15 <= (uint)lVar14) goto LAB_00101f18;
        uVar3 = puVar11[1];
        puVar23 = *(uint **)((long)__s_00 + lVar18 * 8);
        *puVar9 = *puVar11;
        puVar9[1] = uVar3;
        uVar3 = puVar11[3];
        puVar9[2] = puVar11[2];
        puVar9[3] = uVar3;
        uVar3 = puVar11[5];
        puVar9[4] = puVar11[4];
        puVar9[5] = uVar3;
        for (; puVar23 != (uint *)0x0; puVar23 = *(uint **)(puVar23 + 2)) {
          while( true ) {
            uVar24 = *puVar23;
            if ((int)uVar24 < 0) {
              uVar24 = ~uVar24;
              piVar12 = (int *)((long)pvVar7 + (long)(int)uVar24 * 4);
              piVar19 = (int *)((long)(int)uVar24 * 4 + (long)pvVar6);
              *piVar12 = -1;
              iVar16 = *piVar19;
            }
            else {
              piVar19 = (int *)((long)pvVar6 + (long)(int)uVar24 * 4);
              piVar12 = (int *)((long)(int)uVar24 * 4 + (long)pvVar7);
              *piVar19 = -1;
              iVar16 = *piVar12;
            }
            if (iVar16 != -1) break;
            puVar23 = *(uint **)(puVar23 + 2);
            lVar18 = (long)iVar21;
            iVar21 = iVar21 + 1;
            *(uint *)((long)pvVar8 + lVar18 * 4) = uVar24;
            *piVar12 = -2;
            *piVar19 = -2;
            if (puVar23 == (uint *)0x0) goto LAB_00102040;
          }
        }
LAB_00102040:
        lVar14 = lVar14 + 1;
        puVar9 = puVar9 + 6;
      } while (iVar21 != (int)lVar14);
    }
    Memory::free_static(__s,true);
    Memory::free_static(pvVar6,true);
    Memory::free_static(pvVar7,true);
    Memory::free_static(pvVar8,true);
    Memory::free_static(local_68,true);
    Memory::free_static(__s_00,true);
    Memory::free_static(__dest,true);
    return;
  }
  uVar17 = 0;
  lVar14 = 0;
LAB_00101f33:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,lVar14,uVar17,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
LAB_00101f18:
  uVar17 = (ulong)uVar15;
  goto LAB_00101f33;
}



/* GodotSoftBody3D::append_link(unsigned int, unsigned int) */

void __thiscall GodotSoftBody3D::append_link(GodotSoftBody3D *this,uint param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uStack_6c;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) {
LAB_001023a2:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar1 = *(uint *)(this + 0xe0);
  uVar7 = (ulong)param_1;
  if (param_1 < uVar1) {
    lVar4 = (ulong)param_1 * 0x70 + *(long *)(this + 0xe8);
    if (param_2 < uVar1) {
      lVar6 = (ulong)param_2 * 0x70 + *(long *)(this + 0xe8);
      fVar11 = *(float *)(lVar4 + 0x10) - *(float *)(lVar6 + 0x10);
      fVar9 = *(float *)(lVar4 + 0xc) - *(float *)(lVar6 + 0xc);
      fVar10 = *(float *)(lVar4 + 0x14) - *(float *)(lVar6 + 0x14);
      uVar1 = *(uint *)(this + 0xf0);
      pvVar5 = *(void **)(this + 0xf8);
      if (uVar1 == *(uint *)(this + 0xf4)) {
        uVar7 = (ulong)(uVar1 * 2);
        if (uVar1 * 2 == 0) {
          uVar7 = 1;
        }
        *(int *)(this + 0xf4) = (int)uVar7;
        pvVar5 = (void *)Memory::realloc_static(pvVar5,uVar7 * 0x30,false);
        *(void **)(this + 0xf8) = pvVar5;
        if (pvVar5 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar1 = *(uint *)(this + 0xf0);
      }
      *(uint *)(this + 0xf0) = uVar1 + 1;
      puVar8 = (undefined8 *)((long)pvVar5 + (ulong)uVar1 * 0x30);
      *puVar8 = 0;
      puVar8[1] = (ulong)uStack_6c << 0x20;
      puVar8[2] = lVar4;
      puVar8[3] = lVar6;
      puVar8[4] = (ulong)(uint)SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10);
      puVar8[5] = 0;
      goto LAB_001023a2;
    }
    uVar7 = (ulong)param_2;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar1,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GodotSoftBody3D::append_face(unsigned int, unsigned int, unsigned int) */

void __thiscall
GodotSoftBody3D::append_face(GodotSoftBody3D *this,uint param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uint uStack_9c;
  undefined4 uStack_64;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_3 && param_1 != param_2) && (param_2 != param_3)) {
    uVar2 = *(uint *)(this + 0xe0);
    uVar8 = (ulong)param_1;
    if (param_1 < uVar2) {
      lVar4 = *(long *)(this + 0xe8);
      uVar8 = (ulong)param_2;
      if (param_2 < uVar2) {
        if (param_3 < uVar2) {
          uVar2 = *(uint *)(this + 0x100);
          uVar6 = CONCAT44(uStack_64,uVar2);
          pvVar7 = *(void **)(this + 0x108);
          if (uVar2 == *(uint *)(this + 0x104)) {
            uVar8 = (ulong)(uVar2 * 2);
            if (uVar2 * 2 == 0) {
              uVar8 = 1;
            }
            *(int *)(this + 0x104) = (int)uVar8;
            pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar8 * 0x48,false);
            *(void **)(this + 0x108) = pvVar7;
            if (pvVar7 == (void *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar2 = *(uint *)(this + 0x100);
          }
          *(uint *)(this + 0x100) = uVar2 + 1;
          puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar2 * 0x48);
          puVar1[8] = uVar6;
          *puVar1 = 0;
          puVar1[1] = (ulong)uStack_9c << 0x20;
          puVar1[2] = (ulong)param_1 * 0x70 + lVar4;
          puVar1[3] = (ulong)param_2 * 0x70 + lVar4;
          puVar1[4] = lVar4 + (ulong)param_3 * 0x70;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          goto LAB_00102608;
        }
        uVar8 = (ulong)param_3;
      }
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_00102608:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotSoftBody3D::set_iteration_count(int) */

void __thiscall GodotSoftBody3D::set_iteration_count(GodotSoftBody3D *this,int param_1)

{
  *(int *)(this + 0x244) = param_1;
  return;
}



/* GodotSoftBody3D::set_total_mass(float) */

void __thiscall GodotSoftBody3D::set_total_mass(GodotSoftBody3D *this,float param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  if (0.0 <= param_1) {
    uVar2 = *(uint *)(this + 0xe0);
    fVar1 = *(float *)(this + 0x23c);
    fVar6 = _LC33 / param_1;
    *(ulong *)(this + 0x23c) = CONCAT44(fVar6,param_1);
    if (uVar2 != 0) {
      lVar3 = *(long *)(this + 0xe8);
      lVar4 = lVar3;
      do {
        lVar5 = lVar4 + 0x70;
        *(float *)(lVar4 + 0x58) = *(float *)(lVar4 + 0x58) * fVar1 * fVar6;
        lVar4 = lVar5;
      } while (lVar5 != (ulong)uVar2 * 0x70 + lVar3);
    }
    reset_link_rest_lengths(this);
    update_link_constants(this);
    update_area();
    return;
  }
  _err_print_error("set_total_mass","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x36a,
                   "Condition \"p_val < 0.0\" is true.",0,0);
  return;
}



/* GodotSoftBody3D::set_collision_margin(float) */

void __thiscall GodotSoftBody3D::set_collision_margin(GodotSoftBody3D *this,float param_1)

{
  *(float *)(this + 0x238) = param_1;
  return;
}



/* GodotSoftBody3D::set_linear_stiffness(float) */

void __thiscall GodotSoftBody3D::set_linear_stiffness(GodotSoftBody3D *this,float param_1)

{
  *(float *)(this + 0x248) = param_1;
  return;
}



/* GodotSoftBody3D::set_pressure_coefficient(float) */

void __thiscall GodotSoftBody3D::set_pressure_coefficient(GodotSoftBody3D *this,float param_1)

{
  *(float *)(this + 0x24c) = param_1;
  return;
}



/* GodotSoftBody3D::set_damping_coefficient(float) */

void __thiscall GodotSoftBody3D::set_damping_coefficient(GodotSoftBody3D *this,float param_1)

{
  *(float *)(this + 0x250) = param_1;
  return;
}



/* GodotSoftBody3D::set_drag_coefficient(float) */

void __thiscall GodotSoftBody3D::set_drag_coefficient(GodotSoftBody3D *this,float param_1)

{
  *(float *)(this + 0x254) = param_1;
  return;
}



/* GodotSoftBody3D::add_velocity(Vector3 const&) */

void __thiscall GodotSoftBody3D::add_velocity(GodotSoftBody3D *this,Vector3 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0xe8);
  lVar2 = (ulong)*(uint *)(this + 0xe0) * 0x70 + lVar1;
  for (; lVar2 != lVar1; lVar1 = lVar1 + 0x70) {
    if (0.0 < *(float *)(lVar1 + 0x58)) {
      *(ulong *)(lVar1 + 0x30) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) +
                    (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                    (float)*(undefined8 *)(lVar1 + 0x30) + (float)*(undefined8 *)param_1);
      *(float *)(lVar1 + 0x38) = *(float *)(lVar1 + 0x38) + *(float *)(param_1 + 8);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSoftBody3D::apply_forces(LocalVector<GodotArea3D*, unsigned int, false, false> const&) */

void __thiscall GodotSoftBody3D::apply_forces(GodotSoftBody3D *this,LocalVector *param_1)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  
  uVar7 = *(uint *)(this + 0xe0);
  if (uVar7 == 0) {
    return;
  }
  lVar9 = *(long *)(this + 0x108);
  lVar14 = *(long *)(this + 0xe8);
  lVar10 = lVar9 + (ulong)*(uint *)(this + 0x100) * 0x48;
  if (lVar9 == lVar10) {
    fVar19 = 0.0;
  }
  else {
    uVar8 = *(uint *)param_1;
    plVar13 = (long *)(lVar9 + 0x28);
    fVar19 = 0.0;
    plVar1 = (long *)(lVar9 + 0x70 + ((lVar10 - lVar9) - 0x48U & 0xfffffffffffffff8));
    do {
      while( true ) {
        lVar10 = plVar13[-1];
        fVar2 = *(float *)(lVar14 + 0x14);
        fVar3 = *(float *)(lVar14 + 0x10);
        fVar4 = *(float *)(lVar14 + 0xc);
        lVar9 = plVar13[-2];
        fVar21 = *(float *)(lVar10 + 0x14) - fVar2;
        fVar24 = *(float *)(lVar10 + 0x10) - fVar3;
        fVar23 = *(float *)(lVar10 + 0xc) - fVar4;
        lVar10 = plVar13[-3];
        fVar18 = *(float *)(lVar9 + 0x14) - fVar2;
        fVar20 = *(float *)(lVar9 + 0x10) - fVar3;
        fVar15 = *(float *)(lVar9 + 0xc) - fVar4;
        fVar19 = fVar19 + (fVar15 * fVar24 - fVar20 * fVar23) * (*(float *)(lVar10 + 0x14) - fVar2)
                          + (fVar18 * fVar23 - fVar21 * fVar15) *
                            (*(float *)(lVar10 + 0x10) - fVar3) +
                            (fVar20 * fVar21 - fVar18 * fVar24) * (*(float *)(lVar10 + 0xc) - fVar4)
        ;
        if (uVar8 == 0) break;
        auVar22 = ZEXT416(0);
        fVar2 = *(float *)((long)plVar13 + -0x24);
        fVar20 = (float)*plVar13;
        fVar21 = (float)((ulong)*plVar13 >> 0x20);
        plVar12 = *(long **)(param_1 + 8);
        fVar3 = *(float *)(plVar13 + 1);
        plVar11 = plVar12 + uVar8;
        fVar18 = 0.0;
        fVar4 = *(float *)(plVar13 + -4);
        fVar15 = *(float *)(plVar13 + -5);
        do {
          lVar10 = *plVar12;
          plVar12 = plVar12 + 1;
          fVar23 = *(float *)(lVar10 + 0x114);
          fVar24 = *(float *)(lVar10 + 0x11c);
          fVar5 = *(float *)(lVar10 + 0x100);
          fVar6 = *(float *)(lVar10 + 0x118);
          fVar16 = powf((fVar15 - *(float *)(lVar10 + 0x108)) * fVar23 +
                        (fVar2 - *(float *)(lVar10 + 0x10c)) * fVar6 +
                        (fVar4 - *(float *)(lVar10 + 0x110)) * fVar24,
                        (float)(*(uint *)(lVar10 + 0x104) ^ __LC68));
          fVar24 = (float)((double)(fVar24 * fVar3 + fVar23 * fVar20 + fVar21 * fVar6) *
                           (double)fVar5 * __LC69 * (double)*(float *)((long)plVar13 + 0xc) *
                          (double)fVar16);
          fVar18 = fVar18 + fVar24 * fVar3;
          fVar23 = auVar22._4_4_;
          auVar22._0_4_ = auVar22._0_4_ + fVar24 * fVar20;
          auVar22._4_4_ = fVar23 + fVar24 * fVar21;
          auVar22._8_8_ = 0;
        } while (plVar11 != plVar12);
        plVar11 = plVar13 + -3;
        do {
          lVar10 = *plVar11;
          plVar11 = plVar11 + 1;
          *(ulong *)(lVar10 + 0x24) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x24) >> 0x20) + auVar22._4_4_,
                        (float)*(undefined8 *)(lVar10 + 0x24) + auVar22._0_4_);
          *(float *)(lVar10 + 0x2c) = *(float *)(lVar10 + 0x2c) + fVar18;
        } while (plVar13 != plVar11);
        plVar13 = plVar13 + 9;
        if (plVar1 == plVar13) goto LAB_00102bda;
      }
      plVar13 = plVar13 + 9;
    } while (plVar1 != plVar13);
LAB_00102bda:
    fVar19 = fVar19 / __LC70;
  }
  fVar2 = *(float *)(this + 0x24c);
  if (_LC31 < (double)fVar2) {
    dVar17 = _LC71 / (double)ABS(fVar19);
    lVar10 = (ulong)uVar7 * 0x70 + lVar14;
    do {
      if (0.0 < *(float *)(lVar14 + 0x58)) {
        fVar19 = *(float *)(lVar14 + 0x54) * (float)(dVar17 * (double)fVar2);
        *(float *)(lVar14 + 0x2c) = *(float *)(lVar14 + 0x50) * fVar19 + *(float *)(lVar14 + 0x2c);
        *(ulong *)(lVar14 + 0x24) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar14 + 0x24) >> 0x20) +
                      fVar19 * (float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20),
                      (float)*(undefined8 *)(lVar14 + 0x24) +
                      fVar19 * (float)*(undefined8 *)(lVar14 + 0x48));
      }
      lVar14 = lVar14 + 0x70;
    } while (lVar10 != lVar14);
  }
  return;
}



/* GodotSoftBody3D::solve_links(float, float) */

void GodotSoftBody3D::solve_links(float param_1,float param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  long in_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  dVar4 = _LC31;
  lVar5 = *(long *)(in_RDI + 0xf8);
  lVar6 = (ulong)*(uint *)(in_RDI + 0xf0) * 0x30 + lVar5;
  for (; lVar6 != lVar5; lVar5 = lVar5 + 0x30) {
    if (0.0 < *(float *)(lVar5 + 0x24)) {
      lVar2 = *(long *)(lVar5 + 0x10);
      lVar3 = *(long *)(lVar5 + 0x18);
      fVar11 = (float)*(undefined8 *)(lVar2 + 0xc);
      fVar9 = (float)*(undefined8 *)(lVar3 + 0xc) - fVar11;
      fVar12 = (float)((ulong)*(undefined8 *)(lVar2 + 0xc) >> 0x20);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0xc) >> 0x20) - fVar12;
      fVar8 = *(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14);
      fVar7 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
      fVar13 = *(float *)(lVar5 + 0x28) + fVar7;
      if (dVar4 < (double)fVar13) {
        fVar13 = ((*(float *)(lVar5 + 0x28) - fVar7) / (*(float *)(lVar5 + 0x24) * fVar13)) *
                 param_1;
        fVar7 = *(float *)(lVar2 + 0x58) * fVar13;
        *(ulong *)(lVar2 + 0xc) = CONCAT44(fVar12 - fVar7 * fVar10,fVar11 - fVar7 * fVar9);
        fVar13 = fVar13 * *(float *)(lVar3 + 0x58);
        *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) - fVar7 * fVar8;
        uVar1 = *(undefined8 *)(lVar3 + 0xc);
        *(float *)(lVar3 + 0x14) = fVar13 * fVar8 + *(float *)(lVar3 + 0x14);
        *(float *)(lVar3 + 0xc) = (float)uVar1 + fVar9 * fVar13;
        *(float *)(lVar3 + 0x10) = (float)((ulong)uVar1 >> 0x20) + fVar10 * fVar13;
      }
    }
  }
  return;
}



/* GodotSoftBody3D::solve_constraints(float) */

void __thiscall GodotSoftBody3D::solve_constraints(GodotSoftBody3D *this,float param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar16;
  
  fVar20 = _LC33;
  puVar3 = *(undefined8 **)(this + 0xf8);
  fVar21 = _LC33 / param_1;
  puVar6 = puVar3 + (ulong)*(uint *)(this + 0xf0) * 6;
  uVar10 = (ulong)(uint)fVar21;
  for (; puVar6 != puVar3; puVar3 = puVar3 + 6) {
    uVar16 = *(undefined8 *)(puVar3[2] + 0x18);
    uVar2 = *(undefined8 *)(puVar3[3] + 0x18);
    fVar14 = *(float *)(puVar3[3] + 0x20) - *(float *)(puVar3[2] + 0x20);
    fVar18 = (float)uVar2 - (float)uVar16;
    fVar19 = (float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
    *(float *)(puVar3 + 1) = fVar14;
    *puVar3 = CONCAT44(fVar19,fVar18);
    *(float *)((long)puVar3 + 0x2c) =
         fVar20 / ((fVar18 * fVar18 + fVar19 * fVar19 + fVar14 * fVar14) *
                  *(float *)((long)puVar3 + 0x24));
  }
  lVar7 = *(long *)(this + 0xe8);
  lVar9 = (ulong)*(uint *)(this + 0xe0) * 0x70 + lVar7;
  lVar8 = lVar7;
  fVar14 = param_1;
  fVar18 = param_1;
  if (lVar9 == lVar7) {
    iVar5 = *(int *)(this + 0x244);
    if (iVar5 < 1) goto LAB_00102ffa;
LAB_00102f10:
    uVar12 = 0;
    fVar21 = (float)iVar5;
    do {
      iVar11 = (int)uVar12;
      uVar12 = (ulong)(iVar11 + 1);
      solve_links(fVar20,(float)iVar11 / fVar21);
    } while ((int)uVar12 != iVar5);
    fVar19 = (float)((_LC71 - (double)*(float *)(this + 0x250)) * (double)(float)uVar10);
    fVar20 = fVar19;
    fVar21 = fVar19;
    if (lVar9 == lVar7) goto LAB_00102ffa;
  }
  else {
    do {
      lVar4 = lVar8 + 0x70;
      *(float *)(lVar8 + 0x14) = *(float *)(lVar8 + 0x38) * param_1 + *(float *)(lVar8 + 0x20);
      *(ulong *)(lVar8 + 0xc) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20) * param_1 +
                    (float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20),
                    (float)*(undefined8 *)(lVar8 + 0x30) * param_1 +
                    (float)*(undefined8 *)(lVar8 + 0x18));
      lVar8 = lVar4;
    } while (lVar9 != lVar4);
    iVar5 = *(int *)(this + 0x244);
    if (0 < iVar5) goto LAB_00102f10;
    fVar19 = (float)((_LC71 - (double)*(float *)(this + 0x250)) * (double)fVar21);
    fVar20 = fVar19;
    fVar21 = fVar19;
  }
  do {
    uVar16 = *(undefined8 *)(lVar7 + 0x3c);
    *(undefined8 *)(lVar7 + 0x3c) = 0;
    lVar8 = lVar7 + 0x70;
    fVar1 = *(float *)(lVar7 + 0x44);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x44) = 0;
    fVar13 = fVar1 * param_1 + *(float *)(lVar7 + 0x14);
    fVar15 = (float)uVar16 * fVar14 + (float)*(undefined8 *)(lVar7 + 0xc);
    fVar17 = (float)((ulong)uVar16 >> 0x20) * fVar18 +
             (float)((ulong)*(undefined8 *)(lVar7 + 0xc) >> 0x20);
    uVar16 = CONCAT44(fVar17,fVar15);
    *(float *)(lVar7 + 0x14) = fVar13;
    fVar1 = *(float *)(lVar7 + 0x20);
    *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar7 + 0x14);
    *(undefined8 *)(lVar7 + 0xc) = uVar16;
    *(undefined8 *)(lVar7 + 0x18) = uVar16;
    *(float *)(lVar7 + 0x38) = (fVar13 - fVar1) * fVar21;
    *(ulong *)(lVar7 + 0x30) =
         CONCAT44((fVar17 - (float)((ulong)uVar2 >> 0x20)) * fVar20,(fVar15 - (float)uVar2) * fVar19
                 );
    lVar7 = lVar8;
  } while (lVar9 != lVar8);
LAB_00102ffa:
  update_normals_and_centroids(this);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001030bb) */
/* GodotSoftBody3D::query_aabb(AABB const&, bool (*)(unsigned int, void*), void*) */

void __thiscall
GodotSoftBody3D::query_aabb
          (GodotSoftBody3D *this,AABB *param_1,_func_bool_uint_void_ptr *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  float **ppfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float **ppfVar17;
  float **ppfVar18;
  float **ppfVar19;
  long in_FS_OFFSET;
  byte bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_4a8 [8];
  float *apfStack_4a0 [129];
  undefined1 auStack_98 [8];
  float **local_90;
  void *local_88;
  float *local_80;
  void *local_78;
  float *local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  void *local_58;
  float local_50;
  float local_4c;
  long local_40;
  
  bVar20 = 0;
  pfVar14 = *(float **)(this + 0x178);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = auStack_98;
  if (pfVar14 == (float *)0x0) {
LAB_0010324f:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar11 + -8) = &UNK_0010343b;
    __stack_chk_fail();
  }
  fVar25 = *(float *)(param_1 + 8);
  fVar24 = *(float *)(param_1 + 4);
  fVar22 = *(float *)param_1;
  fVar26 = *(float *)(param_1 + 0x14) + fVar25;
  fVar23 = *(float *)(param_1 + 0x10) + fVar24;
  fVar21 = *(float *)(param_1 + 0xc) + fVar22;
  ppfVar5 = (float **)0x0;
  fVar15 = 0.0;
  iVar10 = 0x7e;
  local_4c = 0.0;
  ppfVar17 = apfStack_4a0;
  ppfVar18 = ppfVar17;
  fVar16 = 1.4013e-45;
  apfStack_4a0[0] = pfVar14;
LAB_00103110:
  fVar6 = (float)((int)fVar16 + -1);
  fVar7 = fVar6;
  if ((((fVar21 < *pfVar14) || (pfVar14[3] < fVar22)) || (fVar23 < pfVar14[1])) ||
     (((pfVar14[4] < fVar24 || (fVar26 < pfVar14[2])) || (pfVar14[5] < fVar25)))) {
LAB_00103278:
    if (fVar7 == 0.0) goto LAB_00103240;
  }
  else {
    if (*(long *)(pfVar14 + 10) == 0) {
      local_88 = (void *)CONCAT44(local_88._4_4_,iVar10);
      local_80 = (float *)CONCAT44(local_80._4_4_,fVar21);
      local_78 = (void *)CONCAT44(local_78._4_4_,fVar23);
      local_70 = (float *)CONCAT44(local_70._4_4_,fVar26);
      local_90 = ppfVar5;
      local_68 = fVar15;
      local_64 = fVar6;
      local_60 = fVar22;
      local_5c = fVar24;
      local_58 = param_3;
      local_50 = fVar25;
      bVar2 = (*param_2)(*(uint *)(*(long *)(pfVar14 + 8) + 0x68),param_3);
      ppfVar5 = local_90;
      param_3 = local_58;
      fVar21 = local_80._0_4_;
      fVar22 = local_60;
      fVar23 = local_78._0_4_;
      fVar24 = local_5c;
      fVar25 = local_50;
      fVar26 = local_70._0_4_;
      fVar7 = local_64;
      iVar10 = (int)local_88;
      fVar15 = local_68;
      if (!bVar2) goto LAB_00103278;
LAB_00103240:
      puVar11 = auStack_4a8;
      if (ppfVar5 != (float **)0x0) {
        Memory::free_static(ppfVar5,false);
        puVar11 = auStack_4a8;
      }
      goto LAB_0010324f;
    }
    ppfVar19 = ppfVar18;
    fVar8 = fVar15;
    if (iVar10 < (int)fVar6) {
      if (fVar15 == 0.0) {
        if ((uint)local_4c < 0x100) {
          local_58 = (void *)CONCAT44(local_58._4_4_,fVar24);
          local_78 = param_3;
          local_70 = pfVar14;
          local_64 = fVar21;
          local_60 = fVar23;
          local_5c = fVar26;
          local_50 = fVar22;
          local_4c = fVar25;
          ppfVar5 = (float **)Memory::realloc_static(ppfVar5,0x800,false);
          fVar25 = local_4c;
          if (ppfVar5 == (float **)0x0) {
LAB_00103390:
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_4c = 3.58732e-43;
          pfVar14 = local_70;
          param_3 = local_78;
          fVar21 = local_64;
          fVar22 = local_50;
          fVar23 = local_60;
          fVar24 = local_58._0_4_;
          fVar26 = local_5c;
        }
        iVar10 = 0xfe;
        fVar8 = 3.58732e-43;
        *ppfVar5 = *ppfVar18;
        ppfVar19 = (float **)0x0;
        ppfVar5[0x7f] = ppfVar18[0x7f];
        lVar4 = (long)ppfVar5 - (long)((ulong)(ppfVar5 + 1) & 0xfffffffffffffff8);
        puVar12 = (undefined8 *)((long)ppfVar18 - lVar4);
        puVar13 = (undefined8 *)((ulong)(ppfVar5 + 1) & 0xfffffffffffffff8);
        for (uVar9 = (ulong)((int)lVar4 + 0x400U >> 3); ppfVar17 = ppfVar5, uVar9 != 0;
            uVar9 = uVar9 - 1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + (ulong)bVar20 * -2 + 1;
          puVar13 = puVar13 + (ulong)bVar20 * -2 + 1;
        }
      }
      else {
        fVar8 = (float)((int)fVar15 * 2);
        if ((uint)fVar15 <= (uint)fVar8) {
          if ((uint)fVar8 <= (uint)fVar15) {
            iVar10 = (int)fVar15 - 2;
            ppfVar17 = ppfVar5;
            fVar8 = fVar15;
            goto LAB_001031a7;
          }
          if ((uint)local_4c < (uint)fVar8) {
            local_58 = (void *)CONCAT44(local_58._4_4_,fVar8);
            uVar3 = (int)fVar8 - 1U | (int)fVar8 - 1U >> 1;
            local_78 = (void *)CONCAT44(local_78._4_4_,fVar21);
            local_70 = (float *)CONCAT44(local_70._4_4_,fVar23);
            uVar3 = uVar3 | uVar3 >> 2;
            uVar3 = uVar3 | uVar3 >> 4;
            uVar3 = uVar3 | uVar3 >> 8;
            local_4c = (float)((uVar3 | uVar3 >> 0x10) + 1);
            local_88 = param_3;
            local_80 = pfVar14;
            local_64 = fVar26;
            local_60 = fVar22;
            local_5c = fVar24;
            local_50 = fVar25;
            ppfVar5 = (float **)Memory::realloc_static(ppfVar5,(ulong)(uint)local_4c << 3,false);
            pfVar14 = local_80;
            param_3 = local_88;
            fVar21 = local_78._0_4_;
            fVar22 = local_60;
            fVar23 = local_70._0_4_;
            fVar24 = local_5c;
            fVar25 = local_50;
            fVar26 = local_64;
            fVar8 = local_58._0_4_;
            if (ppfVar5 == (float **)0x0) goto LAB_00103390;
          }
        }
        iVar10 = (int)fVar8 - 2;
        ppfVar17 = ppfVar5;
      }
    }
LAB_001031a7:
    ppfVar17[(int)fVar6] = *(float **)(pfVar14 + 8);
    fVar7 = (float)((int)fVar16 + 1);
    ppfVar17[(long)(int)fVar6 + 1] = *(float **)(pfVar14 + 10);
    ppfVar18 = ppfVar19;
    fVar15 = fVar8;
  }
  pfVar14 = ppfVar17[(int)fVar7 + -1];
  fVar16 = fVar7;
  goto LAB_00103110;
}



/* GodotSoftBody3D::initialize_face_tree() */

void __thiscall GodotSoftBody3D::initialize_face_tree(GodotSoftBody3D *this)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DynamicBVH::clear();
  uVar3 = *(uint *)(this + 0x100);
  lVar5 = *(long *)(this + 0x108);
  lVar7 = lVar5;
  while (lVar5 + (ulong)uVar3 * 0x48 != lVar7) {
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0xc);
    fVar4 = *(float *)(*(long *)(lVar7 + 0x10) + 0x14);
    lVar6 = *(long *)(lVar7 + 0x18);
    local_58._0_4_ = (float)uVar8;
    fStack_4c = *(float *)(lVar6 + 0xc);
    local_58._4_4_ = (float)((ulong)uVar8 >> 0x20);
    fVar11 = (float)local_58 + 0.0;
    fVar1 = fStack_4c;
    if ((float)local_58 <= fStack_4c) {
      fVar1 = (float)local_58;
    }
    local_58._0_4_ = fVar1;
    if (fStack_4c <= fVar11) {
      fStack_4c = fVar11;
    }
    fVar1 = *(float *)(lVar6 + 0x10);
    fStack_48 = fVar1;
    if (fVar1 <= local_58._4_4_ + 0.0) {
      fStack_48 = local_58._4_4_ + 0.0;
    }
    fStack_4c = fStack_4c - (float)local_58;
    if (local_58._4_4_ <= fVar1) {
      fVar1 = local_58._4_4_;
    }
    local_58._4_4_ = fVar1;
    fStack_50 = *(float *)(lVar6 + 0x14);
    fStack_48 = fStack_48 - local_58._4_4_;
    fStack_44 = fStack_50;
    if (fStack_50 <= fVar4 + 0.0) {
      fStack_44 = fVar4 + 0.0;
    }
    if (fVar4 <= fStack_50) {
      fStack_50 = fVar4;
    }
    fStack_44 = fStack_44 - fStack_50;
    lVar6 = *(long *)(lVar7 + 0x20);
    if (((fStack_4c < 0.0) || (fStack_48 < 0.0)) || (fStack_44 < 0.0)) {
      _err_print_error("expand_to","./core/math/aabb.h",0x158,
                       "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                       ,0,0);
    }
    fVar4 = *(float *)(lVar6 + 0xc);
    fVar1 = *(float *)(lVar6 + 0x10);
    fVar11 = *(float *)(lVar6 + 0x14);
    fVar10 = fVar4;
    if (fVar4 <= fStack_4c + (float)local_58) {
      fVar10 = fStack_4c + (float)local_58;
    }
    if ((float)local_58 <= fVar4) {
      fVar4 = (float)local_58;
    }
    fVar9 = fVar1;
    if (fVar1 <= fStack_48 + local_58._4_4_) {
      fVar9 = fStack_48 + local_58._4_4_;
    }
    if (local_58._4_4_ <= fVar1) {
      fVar1 = local_58._4_4_;
    }
    fVar12 = fVar11;
    if (fVar11 <= fStack_44 + fStack_50) {
      fVar12 = fStack_44 + fStack_50;
    }
    fVar2 = *(float *)(this + 0x238);
    if (fStack_50 <= fVar11) {
      fVar11 = fStack_50;
    }
    fStack_44 = fVar2 + fVar2;
    fStack_50 = fVar11 - fVar2;
    fStack_4c = (fVar10 - fVar4) + fStack_44;
    fStack_48 = (fVar9 - fVar1) + fStack_44;
    fStack_44 = (fVar12 - fVar11) + fStack_44;
    local_58 = CONCAT44(fVar1 - fVar2,fVar4 - fVar2);
    uVar8 = DynamicBVH::insert((AABB *)(this + 400),&local_58);
    *(undefined8 *)(lVar7 + 0x38) = uVar8;
    lVar7 = lVar7 + 0x48;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001037cf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* GodotSoftBody3D::query_ray(Vector3 const&, Vector3 const&, bool (*)(unsigned int, void*), void*)
    */

bool __thiscall
GodotSoftBody3D::query_ray
          (GodotSoftBody3D *this,Vector3 *param_1,Vector3 *param_2,_func_bool_uint_void_ptr *param_3
          ,void *param_4)

{
  GodotSoftBody3D *this_00;
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined1 (*pauVar4) [12];
  uint uVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [12];
  Vector3 *extraout_RDX;
  undefined8 *puVar10;
  undefined1 *puVar11;
  Vector3 *pVVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [12];
  undefined1 (*pauVar16) [12];
  undefined1 (*pauVar17) [12];
  ulong uVar18;
  long in_FS_OFFSET;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  GodotSoftBody3D *pGStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  float fStack_524;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined8 uStack_514;
  long lStack_508;
  undefined8 *puStack_500;
  undefined1 *puStack_4f8;
  Vector3 *pVStack_4f0;
  undefined1 auStack_4e8 [8];
  undefined8 *apuStack_4e0 [128];
  undefined8 local_e0;
  undefined1 auStack_d8 [12];
  float local_cc;
  undefined1 (*local_c8) [12];
  undefined1 (*local_c0) [12];
  undefined1 (*local_b8) [12];
  undefined1 (*local_b0) [12];
  undefined1 (*local_a8) [12];
  undefined1 (*local_a0) [12];
  undefined1 (*local_98) [12];
  float local_90;
  float local_8c;
  undefined1 (*local_88) [12];
  float local_80;
  float local_7c;
  void *local_78;
  _func_bool_uint_void_ptr *local_70;
  long local_68;
  undefined1 (*local_60) [12];
  float local_58 [3];
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  bVar19 = 0;
  puVar11 = auStack_d8;
  puVar10 = *(undefined8 **)(this + 0x1f8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_3;
  if (puVar10 == (undefined8 *)0x0) {
    local_e0 = 0x103d18;
    initialize_face_tree(this);
    puVar10 = *(undefined8 **)(this + 0x1f8);
    if (puVar10 == (undefined8 *)0x0) goto LAB_00103a40;
  }
  fVar21 = *(float *)(param_1 + 4);
  fVar25 = *(float *)param_1;
  fVar22 = *(float *)(param_2 + 4) - fVar21;
  fVar20 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar31 = *(float *)param_2 - fVar25;
  fVar24 = fVar31 * fVar31 + fVar22 * fVar22 + fVar20 * fVar20;
  fVar28 = _LC75;
  fVar29 = _LC75;
  fVar30 = _LC75;
  if (fVar24 == 0.0) {
    pauVar4 = (undefined1 (*) [12])local_58;
    fVar24 = 0.0;
    uVar6 = 0xc;
    uVar14 = 0xc;
    uVar18 = 0xc;
    fVar26 = 0.0;
    fVar32 = 0.0;
    pauVar17 = pauVar4;
    pauVar15 = pauVar4;
  }
  else {
    fVar24 = SQRT(fVar24);
    fVar32 = fVar31 / fVar24;
    fVar26 = fVar22 / fVar24;
    fVar24 = fVar20 / fVar24;
    if (fVar32 == 0.0) {
      pauVar15 = (undefined1 (*) [12])local_58;
      uVar18 = 0xc;
    }
    else {
      fVar29 = _LC33 / fVar32;
      pauVar15 = (undefined1 (*) [12])
                 ((long)local_58 +
                 (ulong)((uint)((long)((ulong)(fVar29 < 0.0) << 0x3f) >> 0x3f) & 0xc));
      uVar18 = (ulong)(-(uint)(0.0 <= fVar29) & 0xc);
    }
    pauVar4 = (undefined1 (*) [12])local_58;
    if (fVar26 == 0.0) {
      uVar14 = 0xc;
      pauVar17 = pauVar4;
    }
    else {
      fVar28 = _LC33 / fVar26;
      pauVar17 = (undefined1 (*) [12])
                 ((long)*pauVar4 +
                 (ulong)((uint)((long)((ulong)(fVar28 < 0.0) << 0x3f) >> 0x3f) & 0xc));
      uVar14 = (ulong)(-(uint)(0.0 <= fVar28) & 0xc);
    }
    if (fVar24 == 0.0) {
      uVar6 = 0xc;
    }
    else {
      fVar30 = _LC33 / fVar24;
      pauVar4 = (undefined1 (*) [12])
                ((long)*pauVar4 +
                (ulong)((uint)((long)((ulong)(fVar30 < 0.0) << 0x3f) >> 0x3f) & 0xc));
      uVar6 = (ulong)(-(uint)(0.0 <= fVar30) & 0xc);
    }
  }
  fVar20 = fVar31 * fVar32 + fVar22 * fVar26 + fVar20 * fVar24;
  uVar5 = 1;
  pauVar9 = (undefined1 (*) [12])apuStack_4e0;
  local_60 = (undefined1 (*) [12])0x0;
  pauVar16 = (undefined1 (*) [12])((long)local_58 + uVar6);
  local_cc = 0.0;
  local_80 = 0.0;
  local_7c = 1.76564e-43;
  local_88 = pauVar9;
  apuStack_4e0[0] = puVar10;
LAB_0010390c:
  uVar2 = uVar5 - 1;
  puVar8 = (undefined8 *)(ulong)uVar2;
  local_58._0_8_ = *puVar10;
  local_58[2] = (float)*(undefined4 *)(puVar10 + 1);
  local_4c = *(undefined8 *)((long)puVar10 + 0xc);
  local_44 = *(undefined4 *)((long)puVar10 + 0x14);
  fVar24 = (*(float *)*pauVar15 - fVar25) * fVar29;
  fVar22 = (*(float *)((long)local_58 + uVar14 + 4) - fVar21) * fVar28;
  if (fVar24 <= fVar22) {
    fVar26 = (*(float *)((long)local_58 + uVar18) - fVar25) * fVar29;
    fVar31 = (*(float *)((long)*pauVar17 + 4) - fVar21) * fVar28;
    if (fVar26 < fVar31) goto LAB_0010395a;
    if (fVar31 <= fVar24) {
      fVar31 = fVar24;
    }
    if (fVar26 <= fVar22) {
      fVar22 = fVar26;
    }
    fVar24 = (*(float *)((long)*pauVar16 + 8) - *(float *)(param_1 + 8)) * fVar30;
    if ((fVar24 < fVar31) ||
       (fVar26 = (*(float *)((long)*pauVar4 + 8) - *(float *)(param_1 + 8)) * fVar30,
       fVar22 < fVar26)) goto LAB_0010395a;
    if (fVar26 <= fVar31) {
      fVar26 = fVar31;
    }
    if (fVar22 <= fVar24) {
      fVar24 = fVar22;
    }
    if ((fVar20 <= fVar26) || (fVar24 <= 0.0)) goto LAB_0010395a;
    if (puVar10[5] == 0) {
      local_98 = (undefined1 (*) [12])CONCAT44(local_98._4_4_,uVar2);
      local_a0 = (undefined1 (*) [12])CONCAT44(local_a0._4_4_,fVar20);
      local_68 = CONCAT44(local_68._4_4_,fVar30);
      pVStack_4f0 = (Vector3 *)0x1039d1;
      local_c8 = pauVar4;
      local_c0 = pauVar15;
      local_b8 = pauVar17;
      local_b0 = pauVar16;
      local_a8 = pauVar9;
      local_90 = fVar28;
      local_8c = fVar29;
      bVar1 = (*local_70)(*(uint *)(puVar10[4] + 0x40),local_78);
      pauVar9 = local_a8;
      pauVar15 = local_c0;
      pauVar16 = local_b0;
      pauVar4 = local_c8;
      pauVar17 = local_b8;
      fVar28 = local_90;
      fVar29 = local_8c;
      fVar30 = (float)local_68;
      fVar20 = local_a0._0_4_;
      uVar2 = (uint)local_98._0_4_;
      if (!bVar1) goto LAB_0010395a;
LAB_00103a30:
      puVar11 = auStack_4e8;
      if (local_60 != (undefined1 (*) [12])0x0) {
        pVStack_4f0 = (Vector3 *)0x103a40;
        Memory::free_static(local_60,false);
        puVar11 = auStack_4e8;
      }
LAB_00103a40:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return false;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar11 + -8) = 0x103e0d;
      __stack_chk_fail();
    }
    local_68 = (long)(int)uVar2 * 8;
    if ((int)local_7c < (int)uVar2) {
      if (local_80 == 0.0) {
        if ((uint)local_cc < 0x100) {
          pVVar12 = (Vector3 *)0x800;
          pVStack_4f0 = (Vector3 *)0x103db4;
          pauVar9 = local_60;
          local_b0 = pauVar4;
          local_a8 = pauVar15;
          local_a0 = pauVar17;
          local_98 = pauVar16;
          local_90 = fVar20;
          local_8c = fVar28;
          local_80 = fVar29;
          local_7c = fVar30;
          pauVar4 = (undefined1 (*) [12])Memory::realloc_static(local_60,0x800,false);
          pauVar15 = local_a8;
          if (pauVar4 == (undefined1 (*) [12])0x0) {
LAB_00103e0d:
            pVStack_4f0 = (Vector3 *)0x103e12;
            LocalVector<DynamicBVH::Node_const*,unsigned_int,false,false>::resize((uint)pauVar9);
            lStack_508 = *(long *)(in_FS_OFFSET + 0x28);
            fVar25 = *(float *)(extraout_RDX + 8) - *(float *)(pVVar12 + 8);
            auVar23._0_4_ = (float)*(undefined8 *)extraout_RDX - (float)*(undefined8 *)pVVar12;
            auVar23._4_4_ =
                 (float)((ulong)*(undefined8 *)extraout_RDX >> 0x20) -
                 (float)((ulong)*(undefined8 *)pVVar12 >> 0x20);
            auVar23._8_8_ = 0;
            uStack_514 = 0x7f800000ffffffff;
            uStack_538 = *(undefined8 *)pVVar12;
            pGStack_540 = *(GodotSoftBody3D **)pauVar9[8];
            uStack_518 = 0;
            uStack_530 = *(undefined4 *)(pVVar12 + 8);
            uStack_520 = 0;
            fVar21 = auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_ + fVar25 * fVar25
            ;
            fStack_524 = 0.0;
            uStack_52c = 0;
            if (fVar21 != 0.0) {
              fVar21 = SQRT(fVar21);
              fStack_524 = fVar25 / fVar21;
              auVar27._4_4_ = fVar21;
              auVar27._0_4_ = fVar21;
              auVar27._8_8_ = _LC28;
              auVar23 = divps(auVar23,auVar27);
              uStack_52c = auVar23._0_8_;
            }
            puStack_500 = puVar10;
            puStack_4f8 = &stack0xfffffffffffffff8;
            pVStack_4f0 = param_1;
            query_ray(pGStack_540,pVVar12,extraout_RDX,_SoftBodyIntersectSegmentInfo::process_hit,
                      &pGStack_540);
            bVar1 = uStack_514._4_4_ <= __LC76;
            if (bVar1) {
              this_00 = *(GodotSoftBody3D **)pauVar9[8];
              *puVar8 = uStack_520;
              *(undefined4 *)(puVar8 + 1) = uStack_518;
              auVar33 = get_face_normal(this_00,(uint)uStack_514);
              *pauVar15 = auVar33;
            }
            if (lStack_508 == *(long *)(in_FS_OFFSET + 0x28)) {
              return bVar1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          local_cc = 3.58732e-43;
          local_60 = pauVar4;
          pauVar16 = local_98;
          pauVar4 = local_b0;
          pauVar17 = local_a0;
          fVar28 = local_8c;
          fVar29 = local_80;
          fVar30 = local_7c;
          fVar20 = local_90;
        }
        puVar13 = (undefined8 *)((ulong)((long)*local_60 + 8) & 0xfffffffffffffff8);
        *(undefined8 **)*local_60 = *(undefined8 **)*local_88;
        *(undefined8 **)((long)local_60[0x54] + 8) = *(undefined8 **)((long)local_88[0x54] + 8);
        lVar3 = (long)local_60 - (long)puVar13;
        puVar8 = (undefined8 *)((long)local_88 - lVar3);
        for (uVar6 = (ulong)((int)lVar3 + 0x400U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar13 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar19 * -2 + 1;
          puVar13 = puVar13 + (ulong)bVar19 * -2 + 1;
        }
        local_7c = 3.5593e-43;
        local_80 = 3.58732e-43;
        local_88 = (undefined1 (*) [12])0x0;
        fVar21 = *(float *)(param_1 + 4);
        fVar25 = *(float *)param_1;
      }
      else {
        local_7c = (float)((int)local_80 * 2);
        puVar8 = (undefined8 *)(ulong)(uint)local_7c;
        if ((uint)local_80 <= (uint)local_7c) {
          if ((uint)local_7c <= (uint)local_80) {
            local_7c = (float)((int)local_80 + -2);
            goto LAB_00103cfe;
          }
          if ((uint)local_cc < (uint)local_7c) {
            uVar2 = (int)local_7c - 1U | (int)local_7c - 1U >> 1;
            uVar2 = uVar2 | uVar2 >> 2;
            local_98 = (undefined1 (*) [12])CONCAT44(local_98._4_4_,fVar20);
            uVar2 = uVar2 | uVar2 >> 4;
            uVar2 = uVar2 | uVar2 >> 8;
            local_cc = (float)((uVar2 | uVar2 >> 0x10) + 1);
            pVVar12 = (Vector3 *)((ulong)(uint)local_cc << 3);
            pVStack_4f0 = (Vector3 *)0x103c94;
            local_b8 = pauVar4;
            local_b0 = pauVar15;
            local_a8 = pauVar17;
            local_a0 = pauVar16;
            local_90 = fVar28;
            local_8c = fVar29;
            local_80 = fVar30;
            pauVar4 = (undefined1 (*) [12])Memory::realloc_static(local_60,(ulong)pVVar12,false);
            pauVar9 = local_60;
            local_60 = pauVar4;
            if (pauVar4 == (undefined1 (*) [12])0x0) goto LAB_00103e0d;
            fVar21 = *(float *)(param_1 + 4);
            fVar25 = *(float *)param_1;
            pauVar15 = local_b0;
            pauVar16 = local_a0;
            pauVar4 = local_b8;
            pauVar17 = local_a8;
            fVar28 = local_90;
            fVar29 = local_8c;
            fVar30 = local_80;
            fVar20 = local_98._0_4_;
          }
        }
        local_80 = local_7c;
        local_7c = (float)((int)local_7c - 2);
      }
LAB_00103cfe:
      ppuVar7 = (undefined8 **)((long)*local_60 + local_68);
      pauVar9 = local_60;
    }
    else {
      ppuVar7 = (undefined8 **)((long)*pauVar9 + (long)(int)uVar2 * 8);
    }
    *ppuVar7 = (undefined8 *)puVar10[4];
    uVar5 = uVar5 + 1;
    *(undefined8 *)((long)*pauVar9 + local_68 + 8) = puVar10[5];
  }
  else {
LAB_0010395a:
    uVar5 = uVar2;
    if (uVar5 == 0) goto LAB_00103a30;
    fVar21 = *(float *)(param_1 + 4);
    fVar25 = *(float *)param_1;
  }
  puVar10 = *(undefined8 **)((long)*pauVar9 + (long)(int)(uVar5 - 1) * 8);
  goto LAB_0010390c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSoftBodyShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int&,
   bool) const */

bool GodotSoftBodyShape3D::intersect_segment
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int *param_5,
               bool param_6)

{
  GodotSoftBody3D *this;
  bool bVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  GodotSoftBody3D *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  auVar3._0_4_ = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2;
  auVar3._4_4_ = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                 (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  auVar3._8_8_ = 0;
  local_2c = 0x7f800000ffffffff;
  local_50 = *(undefined8 *)param_2;
  local_58 = *(GodotSoftBody3D **)(param_1 + 0x60);
  local_30 = 0;
  local_48 = *(undefined4 *)(param_2 + 8);
  local_38 = 0;
  fVar2 = auVar3._0_4_ * auVar3._0_4_ + auVar3._4_4_ * auVar3._4_4_ + fVar4 * fVar4;
  local_3c = 0.0;
  local_44 = 0;
  if (fVar2 != 0.0) {
    fVar2 = SQRT(fVar2);
    local_3c = fVar4 / fVar2;
    auVar5._4_4_ = fVar2;
    auVar5._0_4_ = fVar2;
    auVar5._8_8_ = _LC28;
    auVar3 = divps(auVar3,auVar5);
    local_44 = auVar3._0_8_;
  }
  GodotSoftBody3D::query_ray
            (local_58,param_2,param_3,_SoftBodyIntersectSegmentInfo::process_hit,&local_58);
  bVar1 = local_2c._4_4_ <= __LC76;
  if (bVar1) {
    this = *(GodotSoftBody3D **)(param_1 + 0x60);
    *(undefined8 *)param_4 = local_38;
    *(undefined4 *)(param_4 + 8) = local_30;
    auVar6 = GodotSoftBody3D::get_face_normal(this,(uint)local_2c);
    *(undefined1 (*) [12])param_5 = auVar6;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::update_face_tree(float) */

void __thiscall GodotSoftBody3D::update_face_tree(GodotSoftBody3D *this,float param_1)

{
  AABB *pAVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
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
  
  lVar5 = *(long *)(this + 0x108);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = lVar5 + (ulong)*(uint *)(this + 0x100) * 0x48;
  if (lVar2 != lVar5) {
    do {
      lVar4 = *(long *)(lVar5 + 0x10);
      fVar12 = *(float *)(lVar4 + 0xc);
      fVar9 = *(float *)(lVar4 + 0x14);
      fVar14 = *(float *)(lVar4 + 0x10);
      fVar6 = *(float *)(lVar4 + 0x30) * param_1 + fVar12;
      fVar11 = *(float *)(lVar4 + 0x38) * param_1 + fVar9;
      fVar8 = *(float *)(lVar4 + 0x34) * param_1 + fVar14;
      fVar15 = fVar6;
      if (fVar6 <= fVar12 + 0.0) {
        fVar15 = fVar12 + 0.0;
      }
      if (fVar12 <= fVar6) {
        fVar6 = fVar12;
      }
      fVar12 = fVar11;
      if (fVar11 <= fVar9 + 0.0) {
        fVar12 = fVar9 + 0.0;
      }
      if (fVar9 <= fVar11) {
        fVar11 = fVar9;
      }
      fVar9 = fVar8;
      if (fVar8 <= fVar14 + 0.0) {
        fVar9 = fVar14 + 0.0;
      }
      if (fVar14 <= fVar8) {
        fVar8 = fVar14;
      }
      lVar4 = *(long *)(lVar5 + 0x18);
      if (((fVar15 - fVar6 < 0.0) || (fVar9 - fVar8 < 0.0)) || (fVar12 - fVar11 < 0.0)) {
        _err_print_error("expand_to","./core/math/aabb.h",0x158,
                         "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                         ,0,0);
      }
      fVar14 = *(float *)(lVar4 + 0xc);
      fVar7 = (fVar15 - fVar6) + fVar6;
      fVar10 = (fVar9 - fVar8) + fVar8;
      fVar9 = *(float *)(lVar4 + 0x10);
      fVar15 = *(float *)(lVar4 + 0x14);
      fVar13 = (fVar12 - fVar11) + fVar11;
      fVar12 = fVar14;
      if (fVar6 <= fVar14) {
        fVar12 = fVar6;
      }
      if (fVar14 <= fVar7) {
        fVar14 = fVar7;
      }
      fVar6 = fVar9;
      if (fVar8 <= fVar9) {
        fVar6 = fVar8;
      }
      fVar8 = fVar15;
      if (fVar11 <= fVar15) {
        fVar8 = fVar11;
      }
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
      if (fVar15 <= fVar13) {
        fVar15 = fVar13;
      }
      fVar7 = *(float *)(lVar4 + 0x38) * param_1 + *(float *)(lVar4 + 0x14);
      fVar10 = *(float *)(lVar4 + 0x34) * param_1 + *(float *)(lVar4 + 0x10);
      fVar11 = *(float *)(lVar4 + 0x30) * param_1 + *(float *)(lVar4 + 0xc);
      if (((fVar14 - fVar12 < 0.0) || (fVar9 - fVar6 < 0.0)) || (fVar15 - fVar8 < 0.0)) {
        _err_print_error("expand_to","./core/math/aabb.h",0x158,
                         "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                         ,0,0);
      }
      fVar14 = (fVar14 - fVar12) + fVar12;
      fVar13 = (fVar9 - fVar6) + fVar6;
      fVar9 = fVar11;
      if (fVar12 <= fVar11) {
        fVar9 = fVar12;
      }
      fVar15 = (fVar15 - fVar8) + fVar8;
      fVar12 = fVar10;
      if (fVar6 <= fVar10) {
        fVar12 = fVar6;
      }
      if (fVar11 <= fVar14) {
        fVar11 = fVar14;
      }
      fVar14 = fVar7;
      if (fVar8 <= fVar7) {
        fVar14 = fVar8;
      }
      if (fVar10 <= fVar13) {
        fVar10 = fVar13;
      }
      if (fVar7 <= fVar15) {
        fVar7 = fVar15;
      }
      lVar4 = *(long *)(lVar5 + 0x20);
      if (((fVar11 - fVar9 < 0.0) || (fVar10 - fVar12 < 0.0)) || (fVar7 - fVar14 < 0.0)) {
        _err_print_error("expand_to","./core/math/aabb.h",0x158,
                         "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                         ,0,0);
      }
      fVar13 = (fVar11 - fVar9) + fVar9;
      fVar15 = *(float *)(lVar4 + 0xc);
      fVar10 = (fVar10 - fVar12) + fVar12;
      fVar6 = *(float *)(lVar4 + 0x10);
      fVar8 = *(float *)(lVar4 + 0x14);
      fVar7 = (fVar7 - fVar14) + fVar14;
      fVar11 = fVar15;
      if (fVar15 <= fVar13) {
        fVar11 = fVar13;
      }
      if (fVar9 <= fVar15) {
        fVar15 = fVar9;
      }
      fVar9 = fVar6;
      if (fVar12 <= fVar6) {
        fVar9 = fVar12;
      }
      fVar12 = fVar8;
      if (fVar14 <= fVar8) {
        fVar12 = fVar14;
      }
      if (fVar6 <= fVar10) {
        fVar6 = fVar10;
      }
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      if (((fVar11 - fVar15 < 0.0) || (fVar6 - fVar9 < 0.0)) || (fVar8 - fVar12 < 0.0)) {
        _err_print_error("expand_to","./core/math/aabb.h",0x158,
                         "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                         ,0,0);
      }
      pAVar1 = (AABB *)(lVar5 + 0x38);
      lVar5 = lVar5 + 0x48;
      DynamicBVH::update((ID *)(this + 400),pAVar1);
    } while (lVar2 != lVar5);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::deinitialize_shape() */

void __thiscall GodotSoftBody3D::deinitialize_shape(GodotSoftBody3D *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  
  lVar1 = *(long *)(this + 0x38);
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + -8), 0 < (int)lVar2)) {
    if (0 < lVar2) {
      plVar3 = *(long **)(lVar1 + 0x80);
      (**(code **)(*(long *)this + 8))();
      (**(code **)(*plVar3 + 0x60))(plVar3);
      Memory::free_static(plVar3,false);
      return;
    }
    _err_print_index_error
              ("get_shape","modules/godot_physics_3d/godot_collision_object_3d.h",0x7c,0,lVar2,
               "p_index","shapes.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  return;
}



/* GodotSoftBody3D::destroy() */

void __thiscall GodotSoftBody3D::destroy(GodotSoftBody3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0xd8) = 0;
  if (*(int *)(this + 0x210) != 0) {
    *(undefined4 *)(this + 0x210) = 0;
  }
  DynamicBVH::clear();
  DynamicBVH::clear();
  if (*(int *)(this + 0xe0) != 0) {
    *(undefined4 *)(this + 0xe0) = 0;
  }
  if (*(int *)(this + 0xf0) != 0) {
    *(undefined4 *)(this + 0xf0) = 0;
  }
  if (*(int *)(this + 0x100) != 0) {
    *(undefined4 *)(this + 0x100) = 0;
  }
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    deinitialize_shape(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBodyShape3D::update_bounds() */

void __thiscall GodotSoftBodyShape3D::update_bounds(GodotSoftBodyShape3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x60) == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_bounds","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x4ce,
                       "Parameter \"soft_body\" is null.",0,0);
      return;
    }
  }
  else {
    GodotShape3D::configure((AABB *)this);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::initialize_shape(bool) */

void __thiscall GodotSoftBody3D::initialize_shape(GodotSoftBody3D *this,bool param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  GodotSoftBodyShape3D *this_00;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x38);
  if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + -8), (int)lVar3 == 0)) {
    this_00 = (GodotSoftBodyShape3D *)operator_new(0x68,"");
    *(undefined1 (*) [16])(this_00 + 0x38) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x48) = (undefined1  [16])0x0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x1c) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    this_00[0x28] = (GodotSoftBodyShape3D)0x0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined8 *)(this_00 + 0x58) = 2;
    *(undefined ***)this_00 = &PTR_get_volume_00109f70;
    *(GodotSoftBody3D **)(this_00 + 0x60) = this;
    GodotSoftBodyShape3D::update_bounds(this_00);
    GodotCollisionObject3D::add_shape((GodotShape3D *)this,(Transform3D *)this_00,true);
  }
  else if (param_1) {
    if (lVar3 < 1) {
      _err_print_index_error
                ("get_shape","modules/godot_physics_3d/godot_collision_object_3d.h",0x7c,0,lVar3,
                 "p_index","shapes.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      GodotSoftBodyShape3D::update_bounds(*(GodotSoftBodyShape3D **)(lVar2 + 0x80));
      return;
    }
    goto LAB_00104990;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104990:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::set_space(GodotSpace3D*) */

void GodotSoftBody3D::set_space(GodotSpace3D *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(SelfList **)(param_1 + 0x40) != (SelfList *)0x0) {
    GodotSpace3D::soft_body_remove_from_active_list(*(SelfList **)(param_1 + 0x40));
    deinitialize_shape((GodotSoftBody3D *)param_1);
  }
  GodotCollisionObject3D::_set_space(param_1);
  if (*(SelfList **)(param_1 + 0x40) != (SelfList *)0x0) {
    GodotSpace3D::soft_body_add_to_active_list(*(SelfList **)(param_1 + 0x40));
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    cVar1 = AABB::operator!=((AABB *)(param_1 + 0x220),(AABB *)&local_38);
    if (cVar1 != '\0') {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        initialize_shape((GodotSoftBody3D *)param_1,true);
        return;
      }
      goto LAB_00104a73;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104a73:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::update_bounds() */

void __thiscall GodotSoftBody3D::update_bounds(GodotSoftBody3D *this)

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
  uint uVar10;
  long lVar11;
  code *pcVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar1 = *(float *)(this + 0x238);
  fVar2 = *(float *)(this + 0x220);
  fVar3 = *(float *)(this + 0x224);
  uVar10 = *(uint *)(this + 0xe0);
  fVar4 = *(float *)(this + 0x228);
  fVar5 = *(float *)(this + 0x22c);
  lVar11 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = *(float *)(this + 0x230);
  fVar22 = fVar1 + fVar1;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  fVar7 = *(float *)(this + 0x234);
  *(undefined8 *)(this + 0x230) = 0;
  if (uVar10 == 0) {
    if (lVar11 == *(long *)(in_FS_OFFSET + 0x28)) {
      deinitialize_shape(this);
      return;
    }
  }
  else {
    uVar17 = (ulong)uVar10;
    lVar15 = 0;
    bVar16 = false;
    bVar13 = true;
    while( true ) {
      if (uVar10 <= (uint)lVar15) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,lVar15,(ulong)uVar10,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      lVar14 = lVar15 * 0x70 + *(long *)(this + 0xe8);
      if (((fVar5 + fVar22 < 0.0) || (fVar6 + fVar22 < 0.0)) || (fVar22 + fVar7 < 0.0)) {
        _err_print_error("has_point","./core/math/aabb.h",0x13c,
                         "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                         ,0,0);
      }
      fVar18 = *(float *)(lVar14 + 0xc);
      if (((fVar18 < fVar2 - fVar1) || (*(float *)(lVar14 + 0x10) < fVar3 - fVar1)) ||
         ((*(float *)(lVar14 + 0x14) < fVar4 - fVar1 ||
          (((fVar2 - fVar1) + fVar5 + fVar22 < fVar18 ||
           ((fVar3 - fVar1) + fVar6 + fVar22 < *(float *)(lVar14 + 0x10))))))) {
        bVar16 = true;
      }
      else if ((fVar4 - fVar1) + fVar22 + fVar7 < *(float *)(lVar14 + 0x14)) {
        bVar16 = true;
      }
      if (bVar13) {
        *(undefined8 *)(this + 0x220) = *(undefined8 *)(lVar14 + 0xc);
        *(undefined4 *)(this + 0x228) = *(undefined4 *)(lVar14 + 0x14);
      }
      else {
        fVar19 = *(float *)(this + 0x22c);
        if (((fVar19 < 0.0) || (fVar23 = *(float *)(this + 0x230), fVar23 < 0.0)) ||
           (fVar25 = *(float *)(this + 0x234), fVar25 < 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                           ,0,0);
          fVar18 = *(float *)(lVar14 + 0xc);
          fVar25 = *(float *)(this + 0x234);
          fVar23 = *(float *)(this + 0x230);
          fVar19 = *(float *)(this + 0x22c);
        }
        fVar21 = *(float *)(this + 0x220);
        fVar24 = *(float *)(lVar14 + 0x14);
        fVar8 = *(float *)(this + 0x224);
        fVar9 = *(float *)(this + 0x228);
        fVar20 = fVar18;
        if (fVar21 <= fVar18) {
          fVar20 = fVar21;
        }
        if (fVar18 <= fVar19 + fVar21) {
          fVar18 = fVar19 + fVar21;
        }
        fVar19 = *(float *)(lVar14 + 0x10);
        fVar21 = fVar19;
        if (fVar19 <= fVar23 + fVar8) {
          fVar21 = fVar23 + fVar8;
        }
        if (fVar8 <= fVar19) {
          fVar19 = fVar8;
        }
        fVar23 = fVar24;
        if (fVar24 <= fVar25 + fVar9) {
          fVar23 = fVar25 + fVar9;
        }
        if (fVar9 <= fVar24) {
          fVar24 = fVar9;
        }
        *(float *)(this + 0x220) = fVar20;
        *(float *)(this + 0x224) = fVar19;
        *(float *)(this + 0x228) = fVar24;
        *(float *)(this + 0x22c) = fVar18 - fVar20;
        *(ulong *)(this + 0x230) = CONCAT44(fVar23 - fVar24,fVar21 - fVar19);
      }
      if (uVar17 == lVar15 + 1U) break;
      lVar15 = lVar15 + 1;
      uVar10 = *(uint *)(this + 0xe0);
      bVar13 = false;
    }
    if (*(long *)(this + 0x40) == 0) {
      if (lVar11 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (lVar11 == *(long *)(in_FS_OFFSET + 0x28)) {
      initialize_shape(this,bVar16);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::apply_nodes_transform(Transform3D const&) [clone .part.0] */

void __thiscall GodotSoftBody3D::apply_nodes_transform(GodotSoftBody3D *this,Transform3D *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar6 = *(uint *)(this + 0xe0);
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar6 != 0) {
    lVar9 = 0;
    uVar11 = 0;
    while( true ) {
      uVar11 = uVar11 + 1;
      uVar2 = *(undefined8 *)(param_1 + 8);
      lVar10 = *(long *)(this + 0xe8) + lVar9;
      uVar3 = *(undefined8 *)param_1;
      fVar13 = *(float *)(param_1 + 0x10);
      lVar9 = lVar9 + 0x70;
      fVar1 = *(float *)(lVar10 + 0x14);
      fVar14 = (float)*(undefined8 *)(lVar10 + 0xc);
      fVar15 = (float)((ulong)*(undefined8 *)(lVar10 + 0xc) >> 0x20);
      fVar12 = *(float *)(param_1 + 4);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 0x24);
      *(float *)(lVar10 + 0x14) =
           *(float *)(param_1 + 0x20) * fVar1 +
           *(float *)(param_1 + 0x18) * fVar14 + *(float *)(param_1 + 0x1c) * fVar15 +
           *(float *)(param_1 + 0x2c);
      *(undefined8 *)(lVar10 + 0x30) = 0;
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(lVar10 + 0x14);
      fVar12 = (float)uVar3 * fVar14 + fVar15 * fVar12 + (float)uVar2 * fVar1 + (float)uVar5;
      fVar13 = (float)((ulong)uVar2 >> 0x20) * fVar14 + fVar15 * fVar13 +
               (float)((ulong)uVar4 >> 0x20) * fVar1 + (float)((ulong)uVar5 >> 0x20);
      *(undefined4 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined4 *)(lVar10 + 0x44) = 0;
      *(ulong *)(lVar10 + 0xc) = CONCAT44(fVar13,fVar12);
      *(ulong *)(lVar10 + 0x18) = CONCAT44(fVar13,fVar12);
      DynamicBVH::update((ID *)(this + 0x110),(AABB *)(lVar10 + 0x60));
      if (uVar6 == uVar11) break;
      if (*(uint *)(this + 0xe0) <= uVar11) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar11,
                   (ulong)*(uint *)(this + 0xe0),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
  }
  DynamicBVH::clear();
  update_normals_and_centroids(this);
  update_bounds(this);
  reset_link_rest_lengths(this);
  update_link_constants(this);
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    update_area();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBody3D::apply_nodes_transform(Transform3D const&) */

void __thiscall GodotSoftBody3D::apply_nodes_transform(GodotSoftBody3D *this,Transform3D *param_1)

{
  if (*(long *)(this + 0xd8) != 0) {
    apply_nodes_transform(this,param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSoftBody3D::set_state(PhysicsServer3D::BodyState, Variant const&) */

void GodotSoftBody3D::set_state(GodotSoftBody3D *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    Variant::operator_cast_to_Transform3D((Variant *)&local_78);
    if (__LC84 < (double)(fStack_54 * fStack_54 + fStack_50 * fStack_50 + fStack_4c * fStack_4c)) {
      local_90 = 0;
      local_80 = 0x15;
      local_88 = "\' units from origin).";
      String::parse_latin1((StrRange *)&local_90);
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Object went too far away (more than \'");
      String::operator+((String *)&local_88,(String *)&local_98);
      _err_print_error("_set_transform","modules/godot_physics_3d/godot_collision_object_3d.h",0x5b,
                       "Condition \"p_transform.origin.length_squared() > (3.1622776601683791e+18 * 3.1622776601683791e+18)\" is true."
                       ,(String *)&local_88,0,0);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = local_78;
      *(undefined8 *)(param_1 + 0x50) = uStack_70;
      *(undefined8 *)(param_1 + 0x58) = local_68;
      *(undefined8 *)(param_1 + 0x60) = uStack_60;
      *(ulong *)(param_1 + 0x68) = CONCAT44(fStack_54,local_58);
      *(ulong *)(param_1 + 0x70) = CONCAT44(fStack_4c,fStack_50);
      GodotCollisionObject3D::_update_shapes();
    }
    Transform3D::inverse();
    *(undefined8 *)(param_1 + 0x78) = local_78;
    *(undefined8 *)(param_1 + 0x80) = uStack_70;
    *(undefined8 *)(param_1 + 0x88) = local_68;
    *(undefined8 *)(param_1 + 0x90) = uStack_60;
    *(ulong *)(param_1 + 0x98) = CONCAT44(fStack_54,local_58);
    *(ulong *)(param_1 + 0xa0) = CONCAT44(fStack_4c,fStack_50);
    if (*(long *)(param_1 + 0xd8) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        apply_nodes_transform(param_1,(Transform3D *)(param_1 + 0x48));
        return;
      }
      goto LAB_001054e7;
    }
    break;
  case 1:
    _err_print_error("set_state","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x4c,
                     "Method/function failed.","Linear velocity is not supported for Soft bodies.",0
                     ,0);
    break;
  case 2:
    _err_print_error("set_state","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x4f,
                     "Method/function failed.","Angular velocity is not supported for Soft bodies.",
                     0,0);
    break;
  case 3:
    _err_print_error("set_state","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x52,
                     "Method/function failed.","Sleeping state is not supported for Soft bodies.",0,
                     0);
    break;
  case 4:
    _err_print_error("set_state","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x55,
                     "Method/function failed.","Sleeping state is not supported for Soft bodies.",0,
                     0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001054e7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBodyShape3D::GodotSoftBodyShape3D(GodotSoftBody3D*) */

void __thiscall
GodotSoftBodyShape3D::GodotSoftBodyShape3D(GodotSoftBodyShape3D *this,GodotSoftBody3D *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GodotSoftBodyShape3D)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  *(undefined ***)this = &PTR_get_volume_00109f70;
  *(GodotSoftBody3D **)(this + 0x60) = param_1;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  update_bounds(this);
  return;
}



/* GodotSoftBody3D::generate_bending_constraints(int) [clone .part.0] */

void __thiscall GodotSoftBody3D::generate_bending_constraints(GodotSoftBody3D *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  uint *local_88;
  ulong local_58;
  uint *local_50;
  long local_40;
  
  uVar1 = *(uint *)(this + 0xe0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (ulong)(uVar1 * uVar1);
  if (uVar10 == 0) {
LAB_0010598d:
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)Memory::alloc_static(uVar10 * 4,true);
    if (puVar4 == (uint *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.")
      ;
      goto LAB_0010598d;
    }
    *(ulong *)(puVar4 + -2) = uVar10;
  }
  if (uVar1 != 0) {
    iVar18 = 0;
    uVar17 = 0;
    do {
      uVar3 = 0;
      uVar8 = uVar17;
      do {
        uVar13 = 0;
        iVar9 = iVar18 + uVar3;
        lVar15 = (long)(int)uVar8;
        if (uVar17 != uVar3) {
          uVar13 = 0x7fffffff;
        }
        uVar3 = uVar3 + 1;
        uVar8 = uVar8 + uVar1;
        puVar4[lVar15] = uVar13;
        puVar4[iVar9] = uVar13;
      } while (uVar1 != uVar3);
      uVar17 = uVar17 + 1;
      iVar18 = iVar18 + uVar1;
    } while (uVar1 != uVar17);
  }
  lVar15 = *(long *)(this + 0xf8);
  lVar16 = (ulong)*(uint *)(this + 0xf0) * 0x30 + lVar15;
  for (; lVar15 != lVar16; lVar15 = lVar15 + 0x30) {
    if (*(int *)(this + 0xe0) == 0) goto LAB_00105685;
    iVar9 = (int)(*(long *)(lVar15 + 0x18) - *(long *)(this + 0xe8) >> 4) * -0x49249249;
    iVar18 = (int)(*(long *)(lVar15 + 0x10) - *(long *)(this + 0xe8) >> 4) * -0x49249249;
    puVar4[(int)(uVar1 * iVar9 + iVar18)] = 1;
    puVar4[(int)(iVar18 * uVar1 + iVar9)] = 1;
  }
  if (param_1 == 2) {
    local_58 = 0;
    local_50 = (uint *)0x0;
    LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>::resize
              ((LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false> *)
               &local_58,*(uint *)(this + 0xe0));
    lVar16 = *(long *)(this + 0xf8);
    lVar15 = lVar16 + (ulong)*(uint *)(this + 0xf0) * 0x30;
    if (lVar16 == lVar15) {
      local_88 = local_50;
      uVar17 = (uint)local_58;
      if ((uint)local_58 != 0) goto LAB_00105a43;
    }
    else {
      do {
        puVar14 = local_50;
        uVar10 = local_58;
        if (*(int *)(this + 0xe0) == 0) {
LAB_00105685:
          uVar10 = 0;
          uVar11 = 0;
LAB_001056a5:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar10,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar17 = (uint)local_58;
        uVar11 = (*(long *)(lVar16 + 0x10) - *(long *)(this + 0xe8) >> 4) * 0x6db6db6db6db6db7;
        uVar19 = (*(long *)(lVar16 + 0x18) - *(long *)(this + 0xe8) >> 4) * 0x6db6db6db6db6db7;
        uVar8 = (uint)uVar11;
        uVar11 = uVar11 & 0xffffffff;
        uVar3 = (uint)uVar19;
        if ((uint)local_58 <= uVar8) {
LAB_00105994:
          uVar10 = uVar10 & 0xffffffff;
          goto LAB_001056a5;
        }
        puVar6 = local_50 + uVar11 * 4;
        local_88 = local_50;
        uVar13 = *puVar6;
        puVar7 = *(uint **)(puVar6 + 2);
        if (uVar13 != 0) {
          puVar5 = puVar7;
          do {
            if (uVar3 == *puVar5) goto LAB_001058d6;
            puVar5 = puVar5 + 1;
          } while (puVar7 + uVar13 != puVar5);
        }
        if (puVar6[1] == uVar13) {
          uVar11 = (ulong)(uVar13 * 2);
          if (uVar13 * 2 == 0) {
            uVar11 = 1;
          }
          puVar6[1] = (uint)uVar11;
          puVar7 = (uint *)Memory::realloc_static(puVar7,uVar11 * 4,false);
          *(uint **)(puVar6 + 2) = puVar7;
          if (puVar7 == (uint *)0x0) goto LAB_00105bbb;
          uVar13 = *puVar6;
        }
        *puVar6 = uVar13 + 1;
        puVar7[uVar13] = uVar3;
LAB_001058d6:
        uVar11 = uVar19 & 0xffffffff;
        if (uVar17 <= uVar3) goto LAB_00105994;
        puVar14 = puVar14 + uVar11 * 4;
        uVar3 = *puVar14;
        puVar6 = *(uint **)(puVar14 + 2);
        if (uVar3 != 0) {
          puVar7 = puVar6;
          do {
            if (uVar8 == *puVar7) goto LAB_00105911;
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar6 + uVar3);
        }
        if (puVar14[1] == uVar3) {
          uVar10 = (ulong)(uVar3 * 2);
          if (uVar3 * 2 == 0) {
            uVar10 = 1;
          }
          puVar14[1] = (uint)uVar10;
          puVar6 = (uint *)Memory::realloc_static(puVar6,uVar10 * 4,false);
          *(uint **)(puVar14 + 2) = puVar6;
          if (puVar6 == (uint *)0x0) {
LAB_00105bbb:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar3 = *puVar14;
        }
        *puVar14 = uVar3 + 1;
        puVar6[uVar3] = uVar8;
LAB_00105911:
        lVar16 = lVar16 + 0x30;
      } while (lVar15 != lVar16);
LAB_00105a43:
      uVar8 = 0;
      puVar14 = local_88;
      do {
        if (*puVar14 != 0) {
          lVar15 = *(long *)(puVar14 + 2);
          lVar16 = 0;
          do {
            uVar3 = *(uint *)(lVar15 + lVar16 * 4);
            if (uVar17 <= uVar3) {
              uVar11 = (ulong)uVar3;
              uVar10 = (ulong)uVar17;
              goto LAB_001056a5;
            }
            puVar7 = *(uint **)(local_88 + (ulong)uVar3 * 4 + 2);
            puVar6 = puVar7 + local_88[(ulong)uVar3 * 4];
            if (puVar7 != puVar6) {
              do {
                if (*puVar7 != uVar8) {
                  iVar18 = *puVar7 * uVar1;
                  if (puVar4[(int)(uVar3 + iVar18)] + puVar4[(int)(uVar1 * uVar3 + uVar8)] != 2) {
                    _err_print_error("generate_bending_constraints",
                                     "modules/godot_physics_3d/godot_soft_body_3d.cpp",0x289,
                                     "Condition \"sum != 2\" is true.",0,0);
                    if ((local_88 == (uint *)0x0) ||
                       (LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>
                        ::resize((LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>
                                  *)&local_58,0), local_50 == (uint *)0x0)) {
                      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                        return;
                      }
                      goto LAB_00105bf1;
                    }
                    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105bf1;
                    bVar12 = false;
                    puVar4 = local_50;
                    goto LAB_001057d1;
                  }
                  if (2 < puVar4[(int)(iVar18 + uVar8)]) {
                    puVar4[(int)(iVar18 + uVar8)] = 2;
                  }
                }
                puVar7 = puVar7 + 1;
              } while (puVar6 != puVar7);
            }
            lVar16 = lVar16 + 1;
          } while ((uint)lVar16 < *puVar14);
        }
        uVar8 = uVar8 + 1;
        puVar14 = puVar14 + 4;
      } while (uVar8 != uVar17);
    }
    if ((local_88 != (uint *)0x0) &&
       (LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>::resize
                  ((LocalVector<LocalVector<int,unsigned_int,false,false>,unsigned_int,false,false>
                    *)&local_58,0), local_50 != (uint *)0x0)) {
      Memory::free_static(local_50,false);
    }
    if ((uVar1 == 0) || (uVar1 == 1)) goto LAB_001057b5;
  }
  else {
    if ((uVar1 == 0) || (uVar1 == 1)) goto LAB_001057b5;
    iVar18 = 0;
    uVar17 = 0;
    do {
      iVar9 = 0;
      uVar8 = 1;
      do {
        uVar3 = uVar8;
        do {
          if (puVar4[(int)(iVar9 + uVar17)] + puVar4[(int)(uVar3 + iVar18)] <
              puVar4[(int)(uVar3 + iVar9)]) {
            puVar4[(int)(uVar3 + iVar9)] =
                 puVar4[(int)(iVar9 + uVar17)] + puVar4[(int)(uVar3 + iVar18)];
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + uVar1;
      } while (uVar1 != uVar8);
      uVar17 = uVar17 + 1;
      iVar18 = iVar18 + uVar1;
    } while (uVar1 != uVar17);
  }
  uVar17 = 1;
  iVar18 = 0;
  do {
    uVar8 = uVar17;
    do {
      while (puVar4[(int)(uVar8 + iVar18)] == param_1) {
        uVar3 = uVar8 + 1;
        append_link(this,uVar8,uVar17 - 1);
        uVar8 = uVar3;
        if (uVar1 <= uVar3) goto LAB_001057a6;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
LAB_001057a6:
    uVar17 = uVar17 + 1;
    iVar18 = iVar18 + uVar1;
  } while (uVar1 != uVar17);
LAB_001057b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00105bf1:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  bVar12 = true;
LAB_001057d1:
  Memory::free_static(puVar4,bVar12);
  return;
}



/* GodotSoftBody3D::generate_bending_constraints(int) */

void __thiscall GodotSoftBody3D::generate_bending_constraints(GodotSoftBody3D *this,int param_1)

{
  if (param_1 < 2) {
    return;
  }
  generate_bending_constraints(this,param_1);
  return;
}



/* GodotSoftBody3D::create_from_trimesh(Vector<int> const&, Vector<Vector3> const&) */

undefined8 __thiscall
GodotSoftBody3D::create_from_trimesh(GodotSoftBody3D *this,Vector *param_1,Vector *param_2)

{
  Vector3 *pVVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  undefined8 *local_b0;
  void *local_a8;
  uint local_a0;
  uint local_8c;
  ulong local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  undefined8 local_4c;
  float local_44;
  long local_40;
  ulong uVar16;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    _err_print_error("create_from_trimesh","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1d9,
                     "Condition \"p_indices.is_empty()\" is true. Returning: false",0,0);
  }
  else {
    if (*(long *)(param_2 + 8) != 0) {
      uVar23 = *(ulong *)(*(long *)(param_2 + 8) + -8);
      uVar18 = (uint)uVar23;
      iVar25 = (int)(*(long *)(*(long *)(param_1 + 8) + -8) / 3);
      uVar6 = iVar25 * 3;
      if (iVar25 == 0) {
        local_a0 = 0;
        local_a8 = (void *)0x0;
      }
      else {
        uVar10 = uVar6 - 1 | uVar6 - 1 >> 1;
        uVar10 = uVar10 | uVar10 >> 2;
        uVar10 = uVar10 | uVar10 >> 4;
        uVar10 = uVar10 | uVar10 >> 8;
        local_a8 = (void *)Memory::realloc_static
                                     ((void *)0x0,(ulong)((uVar10 | uVar10 >> 0x10) + 1) << 2,false)
        ;
        local_a0 = uVar6;
        if (local_a8 == (void *)0x0) goto LAB_0010624d;
      }
      local_60 = 2;
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      if (uVar18 == 0) {
        if (*(int *)(this + 0x210) != 0) {
          *(undefined4 *)(this + 0x210) = 0;
        }
        uVar10 = 0;
        local_b0 = (undefined8 *)0x0;
LAB_00105f47:
        if (iVar25 == 0) goto LAB_00106736;
        lVar21 = *(long *)(param_1 + 8);
        uVar24 = 0;
        uVar27 = 0;
        do {
          uVar28 = (ulong)(int)uVar24;
          if ((long)uVar28 < 0) {
            if (lVar21 == 0) {
LAB_00106668:
              lVar14 = 0;
            }
            else {
LAB_00105fd8:
              lVar14 = *(long *)(lVar21 + -8);
            }
LAB_001060bc:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar28,lVar14,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (lVar21 == 0) goto LAB_00106668;
          lVar14 = (ulong)uVar24 << 2;
          uVar19 = uVar24;
          while( true ) {
            uVar16 = (ulong)uVar19;
            if (*(long *)(lVar21 + -8) <= (long)uVar28) goto LAB_00105fd8;
            uVar3 = *(uint *)(lVar21 + lVar14);
            uVar23 = (ulong)*(uint *)(this + 0x210);
            if (*(uint *)(this + 0x210) <= uVar3) {
              uVar16 = (ulong)uVar3;
              goto LAB_0010604a;
            }
            uVar3 = *(uint *)(*(long *)(this + 0x218) + (ulong)uVar3 * 4);
            if (local_a0 <= uVar19) goto LAB_0010669c;
            *(uint *)((long)local_a8 + lVar14) = uVar3;
            if ((int)uVar27 < (int)uVar3) {
              uVar27 = uVar3;
            }
            if (uVar24 + 2 == uVar19) break;
            uVar19 = uVar19 + 1;
            lVar14 = lVar14 + 4;
            uVar28 = (ulong)(int)uVar19;
            if ((long)uVar28 < 0) {
              uVar28 = 0xffffffff80000000;
              goto LAB_00105fd8;
            }
          }
          uVar24 = uVar24 + 3;
        } while (uVar6 != uVar24);
        uVar19 = uVar27 + 1;
      }
      else {
        uVar10 = uVar18 - 1 | uVar18 - 1 >> 1;
        uVar10 = uVar10 | uVar10 >> 2;
        uVar10 = uVar10 | uVar10 >> 4;
        uVar10 = uVar10 | uVar10 >> 8;
        uVar27 = (uVar10 | uVar10 >> 0x10) + 1;
        puVar12 = (undefined8 *)Memory::realloc_static((void *)0x0,(ulong)uVar27 * 0xc,false);
        if (puVar12 == (undefined8 *)0x0) goto LAB_0010624d;
        uVar23 = uVar23 & 0xffffffff;
        memset(puVar12,0,uVar23 * 0xc);
        if (uVar18 < *(uint *)(this + 0x210)) {
LAB_00105d70:
          *(uint *)(this + 0x210) = uVar18;
        }
        else if (*(uint *)(this + 0x210) < uVar18) {
          if (*(uint *)(this + 0x214) < uVar18) {
            *(uint *)(this + 0x214) = uVar27;
            lVar21 = Memory::realloc_static(*(void **)(this + 0x218),(ulong)uVar27 * 4,false);
            *(long *)(this + 0x218) = lVar21;
            if (lVar21 == 0) goto LAB_0010624d;
          }
          goto LAB_00105d70;
        }
        local_b0 = puVar12;
        if ((int)uVar18 < 1) {
          uVar10 = 0;
          goto LAB_00105f47;
        }
        uVar28 = 0;
        uVar10 = 0;
        do {
          lVar21 = *(long *)(param_2 + 8);
          if (lVar21 == 0) {
            lVar14 = 0;
            goto LAB_001060bc;
          }
          lVar14 = *(long *)(lVar21 + -8);
          if (lVar14 <= (long)uVar28) goto LAB_001060bc;
          local_8c = 0;
          pVVar1 = (Vector3 *)(lVar21 + uVar28 * 0xc);
          cVar9 = HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
                  ::_lookup_pos((HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
                                 *)&local_88,pVVar1,&local_8c);
          if (cVar9 == '\0') {
LAB_00105df6:
            puVar13 = (uint *)HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
                              ::operator[]((HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
                                            *)&local_88,pVVar1);
            uVar16 = (ulong)uVar10;
            *puVar13 = uVar10;
            if (uVar18 <= uVar10) goto LAB_0010604a;
            uVar24 = *(uint *)(this + 0x210);
            puVar26 = (undefined8 *)((long)puVar12 + (ulong)uVar10 * 0xc);
            *puVar26 = *(undefined8 *)pVVar1;
            *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(pVVar1 + 8);
            uVar19 = uVar10;
            uVar10 = uVar10 + 1;
          }
          else {
            lVar21 = *(long *)(local_80._0_8_ + (ulong)local_8c * 8);
            if (lVar21 == 0) goto LAB_00105df6;
            uVar24 = *(uint *)(this + 0x210);
            uVar19 = *(uint *)(lVar21 + 0x1c);
          }
          if (uVar24 <= (uint)uVar28) goto LAB_0010602c;
          *(uint *)(*(long *)(this + 0x218) + uVar28 * 4) = uVar19;
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < (int)uVar18);
        puVar26 = (undefined8 *)local_80._0_8_;
        uVar24 = uVar10;
        if ((uVar10 < uVar18) || (uVar24 = uVar18, uVar10 <= uVar18)) {
LAB_00105ea0:
          uVar10 = uVar24;
          if (puVar26 != (undefined8 *)0x0) {
            uVar15 = local_80._8_8_;
            if ((local_60._4_4_ != 0) &&
               (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
              piVar2 = (int *)(local_80._8_8_ +
                              (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4)
                              * 4);
              puVar12 = puVar26;
              piVar22 = (int *)local_80._8_8_;
              do {
                if (*piVar22 != 0) {
                  *piVar22 = 0;
                  Memory::free_static((void *)*puVar12,false);
                  *puVar12 = 0;
                }
                piVar22 = piVar22 + 1;
                puVar12 = puVar12 + 1;
              } while (piVar2 != piVar22);
            }
            Memory::free_static(puVar26,false);
            Memory::free_static((void *)uVar15,false);
          }
          goto LAB_00105f47;
        }
        if ((uVar10 <= uVar27) ||
           (uVar27 = uVar10 - 1 | uVar10 - 1 >> 1, uVar27 = uVar27 | uVar27 >> 2,
           uVar27 = uVar27 >> 4 | uVar27, uVar27 = uVar27 >> 8 | uVar27,
           local_b0 = (undefined8 *)
                      Memory::realloc_static
                                (puVar12,(ulong)((uVar27 | uVar27 >> 0x10) + 1) * 0xc,false),
           local_b0 != (undefined8 *)0x0)) {
          memset((void *)((long)local_b0 + uVar23 * 0xc),0,
                 ((ulong)((uVar10 - uVar18) - 1) * 3 + 3) * 4);
          puVar26 = (undefined8 *)local_80._0_8_;
          uVar24 = uVar10;
          goto LAB_00105ea0;
        }
        LocalVector<DynamicBVH::Node_const*,unsigned_int,false,false>::resize((uint)puVar12);
LAB_00106736:
        uVar27 = 0;
        uVar19 = 1;
      }
      uVar24 = *(uint *)(this + 0xe0);
      if (uVar19 < uVar24) {
        *(uint *)(this + 0xe0) = uVar19;
LAB_00106308:
        fVar30 = (float)uVar19 * *(float *)(this + 0x240);
        fVar29 = *(float *)(this + 0x238) + *(float *)(this + 0x238);
        if (uVar19 != 0) goto LAB_0010633a;
      }
      else {
        if (uVar19 <= uVar24) goto LAB_00106308;
        if (*(uint *)(this + 0xe4) < uVar19) {
          uVar27 = uVar27 >> 1 | uVar27;
          uVar27 = uVar27 >> 2 | uVar27;
          uVar27 = uVar27 | uVar27 >> 4;
          uVar27 = uVar27 >> 8 | uVar27;
          uVar27 = (uVar27 | uVar27 >> 0x10) + 1;
          *(uint *)(this + 0xe4) = uVar27;
          lVar21 = Memory::realloc_static(*(void **)(this + 0xe8),(ulong)uVar27 * 0x70,false);
          *(long *)(this + 0xe8) = lVar21;
          if (lVar21 == 0) {
LAB_0010624d:
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar24 = *(uint *)(this + 0xe0);
          if (uVar24 < uVar19) goto LAB_0010675a;
        }
        else {
LAB_0010675a:
          lVar21 = *(long *)(this + 0xe8);
          puVar12 = (undefined8 *)((ulong)uVar24 * 0x70 + lVar21);
          do {
            *puVar12 = 0;
            puVar26 = puVar12 + 0xe;
            *(undefined4 *)(puVar12 + 1) = 0;
            *(undefined8 *)((long)puVar12 + 0xc) = 0;
            *(undefined4 *)((long)puVar12 + 0x14) = 0;
            puVar12[3] = 0;
            *(undefined4 *)(puVar12 + 4) = 0;
            *(undefined8 *)((long)puVar12 + 0x24) = 0;
            *(undefined4 *)((long)puVar12 + 0x2c) = 0;
            puVar12[6] = 0;
            *(undefined4 *)(puVar12 + 7) = 0;
            *(undefined8 *)((long)puVar12 + 0x3c) = 0;
            *(undefined4 *)((long)puVar12 + 0x44) = 0;
            puVar12[9] = 0;
            *(undefined4 *)(puVar12 + 10) = 0;
            *(undefined8 *)((long)puVar12 + 0x54) = 0;
            puVar12[0xc] = 0;
            *(undefined4 *)(puVar12 + 0xd) = 0;
            puVar12 = puVar26;
          } while ((undefined8 *)
                   (lVar21 + 0x70 + ((ulong)((uVar19 - uVar24) - 1) + (ulong)uVar24) * 0x70) !=
                   puVar26);
        }
        *(uint *)(this + 0xe0) = uVar19;
        fVar30 = (float)uVar19 * *(float *)(this + 0x240);
        fVar29 = *(float *)(this + 0x238) + *(float *)(this + 0x238);
LAB_0010633a:
        lVar21 = 0;
        uVar27 = 0;
        puVar12 = local_b0;
        do {
          uVar23 = (ulong)*(uint *)(this + 0xe0);
          if (*(uint *)(this + 0xe0) <= uVar27) {
            uVar16 = (ulong)uVar27;
            goto LAB_0010604a;
          }
          puVar26 = (undefined8 *)(*(long *)(this + 0xe8) + lVar21);
          if (uVar27 == uVar10) {
            uVar16 = (ulong)uVar27;
            uVar23 = uVar16;
            goto LAB_0010604a;
          }
          local_58 = *puVar12;
          lVar21 = lVar21 + 0x70;
          *puVar26 = local_58;
          uVar4 = *(undefined4 *)(puVar12 + 1);
          *(undefined8 *)((long)puVar26 + 0xc) = local_58;
          *(undefined4 *)((long)puVar26 + 0x14) = uVar4;
          *(undefined4 *)(puVar26 + 1) = uVar4;
          puVar26[3] = local_58;
          *(undefined4 *)(puVar26 + 4) = uVar4;
          *(float *)(puVar26 + 0xb) = fVar30;
          local_50 = *(uint *)((long)puVar26 + 0x14);
          local_4c = CONCAT44(fVar29,fVar29);
          local_44 = fVar29;
          uVar15 = DynamicBVH::insert((AABB *)(this + 0x110),&local_58);
          *(uint *)(puVar26 + 0xd) = uVar27;
          uVar27 = uVar27 + 1;
          puVar26[0xc] = uVar15;
          puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        } while (uVar27 != uVar19);
      }
      local_88 = 0;
      uVar28 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_80._8_8_;
      local_80 = auVar8 << 0x40;
      LocalVector<bool,unsigned_int,false,false>::resize
                ((LocalVector<bool,unsigned_int,false,false> *)&local_88,uVar19 * uVar19);
      uVar10 = (uint)local_88;
      uVar23 = local_88 & 0xffffffff;
      uVar15 = local_80._0_8_;
      memset((void *)local_80._0_8_,0,uVar23);
      if (iVar25 != 0) {
        while( true ) {
          uVar27 = (uint)uVar28;
          if (local_a0 <= uVar27) {
            uVar16 = uVar28;
            uVar23 = (ulong)local_a0;
            goto LAB_0010604a;
          }
          uVar16 = (ulong)(uVar27 + 1);
          uVar24 = *(uint *)((long)local_a8 + uVar28 * 4);
          local_58 = CONCAT44(local_58._4_4_,uVar24);
          if (local_a0 <= uVar27 + 1) goto LAB_0010669c;
          uVar27 = uVar27 + 2;
          uVar3 = *(uint *)((long)local_a8 + uVar16 * 4);
          local_58 = CONCAT44(uVar3,uVar24);
          if (local_a0 <= uVar27) break;
          uVar27 = *(uint *)((long)local_a8 + (ulong)uVar27 * 4);
          puVar13 = (uint *)&local_58;
          local_50 = uVar27;
          uVar20 = uVar27;
          do {
            uVar5 = *puVar13;
            uVar11 = uVar5 * uVar19 + uVar20;
            uVar16 = (ulong)uVar11;
            if (uVar10 <= uVar11) goto LAB_0010604a;
            pcVar17 = (char *)(uVar16 + uVar15);
            if (*pcVar17 == '\0') {
              *pcVar17 = '\x01';
              uVar11 = uVar20 * uVar19 + uVar5;
              uVar16 = (ulong)uVar11;
              if (uVar10 <= uVar11) goto LAB_0010604a;
              *(undefined1 *)(uVar15 + uVar16) = 1;
              append_link(this,uVar20,uVar5);
            }
            puVar13 = puVar13 + 1;
            uVar20 = uVar5;
          } while ((uint *)&local_4c != puVar13);
          append_face(this,uVar24,uVar3,uVar27);
          uVar28 = uVar28 + 3;
          if (uVar6 <= (uint)uVar28) goto LAB_001065d1;
        }
        uVar16 = (ulong)uVar27;
LAB_0010669c:
        uVar23 = (ulong)local_a0;
LAB_0010604a:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar16,uVar23,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
LAB_001065d1:
      uVar6 = *(uint *)(this + 600);
      for (uVar28 = 0; (uint)uVar28 < uVar6; uVar28 = uVar28 + 1) {
        uVar24 = *(uint *)(this + 600);
        if (uVar24 <= (uint)uVar28) goto LAB_0010602c;
        uVar10 = *(uint *)(*(long *)(this + 0x260) + uVar28 * 4);
        uVar16 = (ulong)uVar10;
        if ((int)uVar10 < (int)uVar18) {
          uVar27 = *(uint *)(this + 0x210);
          if (uVar27 <= uVar10) {
LAB_00106974:
            uVar23 = (ulong)uVar27;
            goto LAB_0010604a;
          }
          uVar10 = *(uint *)(*(long *)(this + 0x218) + uVar16 * 4);
          uVar16 = (ulong)uVar10;
          if (uVar10 < uVar19) {
            uVar27 = *(uint *)(this + 0xe0);
            if (uVar27 <= uVar10) goto LAB_00106974;
            *(undefined4 *)(uVar16 * 0x70 + *(long *)(this + 0xe8) + 0x58) = 0;
          }
          else {
            _err_print_error("create_from_trimesh","modules/godot_physics_3d/godot_soft_body_3d.cpp"
                             ,0x241,"Condition \"node_index >= node_count\" is true. Continuing.",0,
                             0);
          }
        }
        else {
          _err_print_error("create_from_trimesh","modules/godot_physics_3d/godot_soft_body_3d.cpp",
                           0x23e,
                           "Condition \"pinned_vertex >= visual_vertex_count\" is true. Continuing."
                           ,0,0);
        }
      }
      generate_bending_constraints(this,2);
      reoptimize_link_order(this);
      update_constants(this);
      update_normals_and_centroids(this);
      update_bounds(this);
      LocalVector<bool,unsigned_int,false,false>::resize
                ((LocalVector<bool,unsigned_int,false,false> *)&local_88,0);
      if ((void *)local_80._0_8_ != (void *)0x0) {
        Memory::free_static((void *)local_80._0_8_,false);
      }
      if (local_a8 != (void *)0x0) {
        Memory::free_static(local_a8,false);
      }
      if (local_b0 != (undefined8 *)0x0) {
        Memory::free_static(local_b0,false);
      }
      uVar15 = 1;
      goto LAB_0010615f;
    }
    _err_print_error("create_from_trimesh","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x1da,
                     "Condition \"p_vertices.is_empty()\" is true. Returning: false",0,0);
  }
  uVar15 = 0;
LAB_0010615f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010602c:
  uVar16 = uVar28;
  uVar23 = (ulong)uVar24;
  goto LAB_0010604a;
}



/* GodotSoftBody3D::set_mesh(RID) */

void __thiscall GodotSoftBody3D::set_mesh(GodotSoftBody3D *this,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  Array local_60 [8];
  Variant local_58 [8];
  long local_50;
  Variant local_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  destroy(this);
  *(long *)(this + 0xd8) = param_2;
  if (param_2 != 0) {
    uVar4 = RenderingServer::get_singleton();
    RenderingServer::mesh_surface_get_arrays(local_60,uVar4,*(undefined8 *)(this + 0xd8),0);
    cVar3 = Array::is_empty();
    if (cVar3 == '\0') {
      iVar5 = (int)local_60;
      Array::operator[](iVar5);
      Variant::operator_cast_to_Vector(local_58);
      Array::operator[](iVar5);
      Variant::operator_cast_to_Vector(local_48);
      if (local_50 == 0) {
        _err_print_error("set_mesh","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x90,
                         "Condition \"indices.is_empty()\" is true.",
                         "Soft body\'s mesh needs to have indices",0,0);
      }
      else if (local_40 == 0) {
        _err_print_error("set_mesh","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x91,
                         "Condition \"vertices.is_empty()\" is true.",
                         "Soft body\'s mesh needs to have vertices",0,0);
      }
      else {
        cVar3 = create_from_trimesh(this,(Vector *)local_58,(Vector *)local_48);
        if (cVar3 == '\0') {
          destroy(this);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
          Array::~Array(local_60);
          goto LAB_00106a55;
        }
      }
    }
    else {
      _err_print_error("set_mesh","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x8c,
                       "Condition \"arrays.is_empty()\" is true.",0,0);
    }
    Array::~Array(local_60);
  }
LAB_00106a55:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSoftBody3D::predict_motion(float) */

void __thiscall GodotSoftBody3D::predict_motion(GodotSoftBody3D *this,float param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  char *pcVar12;
  Vector3 *pVVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double local_98;
  float local_8c;
  undefined8 local_88;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  long local_40;
  
  lVar9 = *(long *)(this + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar19 = _LC33 / param_1;
  if (lVar9 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar14 = 0x3ce;
      pcVar12 = "Parameter \"get_space()\" is null.";
      goto LAB_001073ff;
    }
    goto LAB_00107490;
  }
  local_68 = 0;
  local_60 = (void *)0x0;
  if ((*(long *)(this + 0x2b8) == 0) ||
     (iVar15 = (int)*(undefined8 *)(*(long *)(this + 0x2b8) + -8), iVar15 == 0)) {
LAB_00106cc8:
    pVVar13 = *(Vector3 **)(lVar9 + 200);
    if (pVVar13 == (Vector3 *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar14 = 0x3f9;
        pcVar12 = "Parameter \"default_area\" is null.";
LAB_001073ff:
        _err_print_error("predict_motion","modules/godot_physics_3d/godot_soft_body_3d.cpp",uVar14,
                         pcVar12,0,0);
        return;
      }
      goto LAB_00107490;
    }
    local_8c = 0.0;
    pvVar11 = (void *)0x0;
    local_88 = 0;
    local_98 = _LC31;
LAB_00106cf8:
    local_58 = 0;
    fStack_50 = 0.0;
    GodotArea3D::compute_gravity(pVVar13,(Vector3 *)(this + 0x6c));
    local_8c = local_8c + fStack_50;
    local_88 = CONCAT44((float)((ulong)local_88 >> 0x20) + (float)((ulong)local_58 >> 0x20),
                        (float)local_88 + (float)local_58);
LAB_00106d57:
    local_58 = CONCAT44((float)((ulong)local_88 >> 0x20) * param_1,(float)local_88 * param_1);
    fStack_50 = local_8c * param_1;
    fVar23 = param_1;
    add_velocity(this,(Vector3 *)&local_58);
    if ((local_98 < (double)*(float *)(this + 0x24c)) || ((int)local_68 != 0)) {
      apply_forces(this,(LocalVector *)&local_68);
    }
    fVar19 = fVar19 * __LC118;
    lVar9 = *(long *)(this + 0xe8);
    lVar17 = (ulong)*(uint *)(this + 0xe0) * 0x70 + lVar9;
    fVar24 = (float)((uint)fVar19 ^ __LC68);
    for (; lVar17 != lVar9; lVar9 = lVar9 + 0x70) {
      fVar20 = (float)((ulong)*(undefined8 *)(lVar9 + 0x54) >> 0x20);
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar9 + 0xc);
      *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar9 + 0x14);
      fStack_50 = *(float *)(lVar9 + 0x58) * *(float *)(lVar9 + 0x2c) * fVar23;
      local_58 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x24) >> 0x20) * fVar20 * param_1,
                          (float)*(undefined8 *)(lVar9 + 0x24) * fVar20 * param_1);
      pVVar13 = (Vector3 *)&local_58;
      do {
        fVar20 = *(float *)pVVar13;
        fVar21 = fVar24;
        if ((fVar24 <= fVar20) && (fVar21 = fVar19, fVar20 <= fVar19)) {
          fVar21 = fVar20;
        }
        *(float *)pVVar13 = fVar21;
        pVVar13 = pVVar13 + 4;
      } while ((Vector3 *)&fStack_4c != pVVar13);
      fVar21 = (float)local_58 + (float)*(undefined8 *)(lVar9 + 0x30);
      fVar22 = (float)((ulong)local_58 >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
      *(ulong *)(lVar9 + 0x30) = CONCAT44(fVar22,fVar21);
      fVar20 = fStack_50 + *(float *)(lVar9 + 0x38);
      *(undefined8 *)(lVar9 + 0x24) = 0;
      *(undefined4 *)(lVar9 + 0x2c) = 0;
      *(float *)(lVar9 + 0x38) = fVar20;
      *(float *)(lVar9 + 0x14) = fVar20 * fVar23 + *(float *)(lVar9 + 0x14);
      *(ulong *)(lVar9 + 0xc) =
           CONCAT44(fVar22 * param_1 + (float)((ulong)*(undefined8 *)(lVar9 + 0xc) >> 0x20),
                    fVar21 * param_1 + (float)*(undefined8 *)(lVar9 + 0xc));
    }
    update_bounds(this);
    uVar2 = *(uint *)(this + 0xe0);
    lVar9 = *(long *)(this + 0xe8);
    lVar17 = lVar9;
    while ((ulong)uVar2 * 0x70 + lVar9 != lVar17) {
      fVar19 = *(float *)(lVar17 + 0x14);
      local_58._0_4_ = (float)*(undefined8 *)(lVar17 + 0xc);
      local_58._4_4_ = (float)((ulong)*(undefined8 *)(lVar17 + 0xc) >> 0x20);
      fVar22 = fVar23 * *(float *)(lVar17 + 0x30) + *(float *)(lVar17 + 0xc);
      fVar20 = *(float *)(lVar17 + 0x38) * fVar23 + *(float *)(lVar17 + 0x14);
      fVar24 = *(float *)(lVar17 + 0x34) * fVar23 + *(float *)(lVar17 + 0x10);
      fVar21 = fVar22;
      if ((float)local_58 <= fVar22) {
        fVar21 = (float)local_58;
      }
      if (fVar22 <= (float)local_58 + 0.0) {
        fVar22 = (float)local_58 + 0.0;
      }
      fVar1 = *(float *)(this + 0x238);
      fVar5 = fVar24;
      if (local_58._4_4_ <= fVar24) {
        fVar5 = local_58._4_4_;
      }
      fVar6 = fVar20;
      if (fVar19 <= fVar20) {
        fVar6 = fVar19;
      }
      if (fVar24 <= local_58._4_4_ + 0.0) {
        fVar24 = local_58._4_4_ + 0.0;
      }
      if (fVar20 <= fVar19 + 0.0) {
        fVar20 = fVar19 + 0.0;
      }
      fStack_44 = fVar1 + fVar1;
      fStack_4c = (fVar22 - fVar21) + fStack_44;
      fStack_50 = fVar6 - fVar1;
      fStack_48 = (fVar24 - fVar5) + fStack_44;
      fStack_44 = (fVar20 - fVar6) + fStack_44;
      local_58 = CONCAT44(fVar5 - fVar1,fVar21 - fVar1);
      DynamicBVH::update((ID *)(this + 0x110),(AABB *)(lVar17 + 0x60));
      lVar17 = lVar17 + 0x70;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      update_face_tree(this,fVar23);
    }
    DynamicBVH::optimize_incremental((int)(ID *)(this + 0x110));
    DynamicBVH::optimize_incremental((int)this + 400);
  }
  else {
    Vector<AreaCMP>::sort_custom<_DefaultComparator<AreaCMP>,true>
              ((Vector<AreaCMP> *)(this + 0x2b0));
    dVar7 = _LC31;
    lVar9 = *(long *)(this + 0x2b8);
    if (lVar9 == 0) {
      lVar17 = 0;
LAB_00107447:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar17,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar17 = *(long *)(lVar9 + -8);
    if (lVar17 < 1) goto LAB_00107447;
    if (iVar15 < 1) {
      lVar9 = *(long *)(this + 0x40);
      goto LAB_00106cc8;
    }
    pvVar11 = (void *)0x0;
    bVar18 = false;
    local_8c = 0.0;
    lVar17 = lVar9 + (long)iVar15 * 0x10;
    local_98 = _LC31;
    local_88 = 0;
    do {
      if (!bVar18) {
        GodotArea3D::get_param((Variant *)&local_58,*(undefined8 *)(lVar17 + -0x10),0);
        iVar8 = Variant::operator_cast_to_int((Variant *)&local_58);
        if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if (iVar8 != 0) {
          local_58 = 0;
          fStack_50 = 0.0;
          GodotArea3D::compute_gravity(*(Vector3 **)(lVar17 + -0x10),(Vector3 *)(this + 0x6c));
          if (iVar8 < 3) {
            if (0 < iVar8) {
              bVar18 = iVar8 == 2;
              local_8c = local_8c + fStack_50;
              local_88 = CONCAT44((float)((ulong)local_88 >> 0x20) +
                                  (float)((ulong)local_58 >> 0x20),(float)local_88 + (float)local_58
                                 );
            }
          }
          else if (iVar8 - 3U < 2) {
            bVar18 = iVar8 == 3;
            local_88 = local_58;
            local_8c = fStack_50;
          }
        }
      }
      lVar3 = *(long *)(lVar17 + -0x10);
      if (dVar7 < (double)*(float *)(lVar3 + 0x100)) {
        iVar8 = (int)local_68;
        uVar16 = local_68 & 0xffffffff;
        if ((int)local_68 == local_68._4_4_) {
          uVar10 = (ulong)(uint)((int)local_68 * 2);
          if ((int)local_68 * 2 == 0) {
            uVar10 = 1;
          }
          local_68 = CONCAT44((int)uVar10,(int)local_68);
          pvVar11 = (void *)Memory::realloc_static(pvVar11,uVar10 * 8,false);
          local_60 = pvVar11;
          if (pvVar11 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        *(long *)((long)pvVar11 + uVar16 * 8) = lVar3;
        local_68 = CONCAT44(local_68._4_4_,iVar8 + 1);
      }
      lVar17 = lVar17 + -0x10;
    } while (lVar17 != lVar9 + -0x10 + (long)iVar15 * 0x10 + (ulong)(iVar15 - 1) * -0x10);
    if (bVar18) goto LAB_00106d57;
    pVVar13 = *(Vector3 **)(*(long *)(this + 0x40) + 200);
    if (pVVar13 != (Vector3 *)0x0) goto LAB_00106cf8;
    _err_print_error("predict_motion","modules/godot_physics_3d/godot_soft_body_3d.cpp",0x3f9,
                     "Parameter \"default_area\" is null.",0,0);
  }
  if (pvVar11 == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(pvVar11,false);
    return;
  }
LAB_00107490:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotShape3D::is_concave() const */

undefined8 GodotShape3D::is_concave(void)

{
  return 0;
}



/* GodotSoftBodyShape3D::get_type() const */

undefined8 GodotSoftBodyShape3D::get_type(void)

{
  return 9;
}



/* GodotSoftBodyShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void GodotSoftBodyShape3D::project_range
               (Vector3 *param_1,Transform3D *param_2,float *param_3,float *param_4)

{
  undefined4 *in_R8;
  
  *in_R8 = 0;
  *param_4 = 0.0;
  return;
}



/* GodotSoftBodyShape3D::get_support(Vector3 const&) const */

undefined1  [16] GodotSoftBodyShape3D::get_support(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBodyShape3D::get_supports(Vector3 const&, int, Vector3*, int&,
   GodotShape3D::FeatureType&) const */

void GodotSoftBodyShape3D::get_supports
               (Vector3 *param_1,int param_2,Vector3 *param_3,int *param_4,FeatureType *param_5)

{
  *(undefined4 *)param_5 = 0;
  return;
}



/* GodotSoftBodyShape3D::get_moment_of_inertia(float) const */

undefined1  [16] GodotSoftBodyShape3D::get_moment_of_inertia(float param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSoftBodyShape3D::set_data(Variant const&) */

void GodotSoftBodyShape3D::set_data(Variant *param_1)

{
  return;
}



/* GodotSoftBodyShape3D::get_data() const */

GodotSoftBodyShape3D * __thiscall GodotSoftBodyShape3D::get_data(GodotSoftBodyShape3D *this)

{
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* GodotSoftBodyShape3D::~GodotSoftBodyShape3D() */

void __thiscall GodotSoftBodyShape3D::~GodotSoftBodyShape3D(GodotSoftBodyShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00109f70;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  return;
}



/* GodotSoftBodyShape3D::~GodotSoftBodyShape3D() */

void __thiscall GodotSoftBodyShape3D::~GodotSoftBodyShape3D(GodotSoftBodyShape3D *this)

{
  *(undefined ***)this = &PTR_get_volume_00109f70;
  GodotShape3D::~GodotShape3D((GodotShape3D *)this);
  operator_delete(this,0x68);
  return;
}



/* GodotShape3D::get_volume() const */

void GodotShape3D::get_volume(void)

{
  AABB::get_volume();
  return;
}



/* SortArray<AreaCMP, _DefaultComparator<AreaCMP>, true>::introsort(long, long, AreaCMP*, long)
   const [clone .isra.0] */

void SortArray<AreaCMP,_DefaultComparator<AreaCMP>,true>::introsort
               (long param_1,long param_2,AreaCMP *param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  AreaCMP *pAVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  AreaCMP *pAVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  AreaCMP *pAVar15;
  long lVar16;
  AreaCMP *pAVar17;
  long lVar18;
  long local_b0;
  undefined4 uStack_70;
  
  lVar14 = param_2 - param_1;
  if (lVar14 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar18 = param_2;
    local_b0 = param_4;
LAB_00108153:
    local_b0 = local_b0 + -1;
    lVar16 = *(long *)(param_3 + lVar18 * 0x10 + -0x10);
    iVar6 = *(int *)(*(long *)(param_3 + param_1 * 0x10) + 0x120);
    iVar13 = *(int *)(lVar16 + 0x120);
    iVar1 = *(int *)(*(long *)(param_3 + ((lVar14 >> 1) + param_1) * 0x10) + 0x120);
    if (iVar6 < iVar1) {
      if (iVar1 < iVar13) {
LAB_0010833d:
        lVar16 = *(long *)(param_3 + ((lVar14 >> 1) + param_1) * 0x10);
        iVar13 = iVar1;
        goto LAB_001081a8;
      }
      if (iVar6 < iVar13) goto LAB_001081a8;
    }
    else if (iVar13 <= iVar6) {
      if (iVar1 < iVar13) goto LAB_001081a8;
      goto LAB_0010833d;
    }
    lVar16 = *(long *)(param_3 + param_1 * 0x10);
    iVar13 = iVar6;
LAB_001081a8:
    lVar14 = lVar18;
    param_2 = param_1;
    do {
      if (iVar6 < iVar13) {
        if (lVar18 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          iVar13 = *(int *)(lVar16 + 0x120);
          goto LAB_001081f8;
        }
      }
      else {
LAB_001081f8:
        lVar14 = lVar14 + -1;
        pAVar17 = param_3 + lVar14 * 0x10;
        if (iVar13 < *(int *)(*(long *)pAVar17 + 0x120)) {
          pAVar5 = param_3 + lVar14 * 0x10 + -0x10;
          while (param_1 != lVar14) {
            lVar14 = lVar14 + -1;
            pAVar17 = pAVar5;
            if (*(int *)(*(long *)pAVar5 + 0x120) <= iVar13) goto LAB_00108260;
            pAVar5 = pAVar5 + -0x10;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
        }
LAB_00108260:
        if (lVar14 <= param_2) goto LAB_001082b0;
        lVar7 = param_2 * 0x10;
        lVar8 = *(long *)(param_3 + lVar7);
        lVar3 = *(long *)(param_3 + lVar7 + 8);
        *(long *)(param_3 + lVar7) = *(long *)pAVar17;
        *(undefined4 *)(param_3 + lVar7 + 8) = *(undefined4 *)(pAVar17 + 8);
        iVar13 = *(int *)(lVar16 + 0x120);
        *(long *)pAVar17 = lVar8;
        uStack_70 = (undefined4)lVar3;
        *(undefined4 *)(pAVar17 + 8) = uStack_70;
      }
      iVar6 = *(int *)(*(long *)(param_3 + param_2 * 0x10 + 0x10) + 0x120);
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_001084bb:
  lVar16 = lVar14 + -2 >> 1;
  lVar18 = lVar16 * 2 + 2;
  pAVar17 = param_3 + (param_1 + lVar16) * 0x10;
  do {
    lVar8 = *(long *)pAVar17;
    lVar3 = *(long *)(pAVar17 + 8);
    lVar12 = lVar16;
    lVar7 = lVar18;
    if (lVar18 < lVar14) {
      do {
        lVar4 = lVar7 + -1;
        pAVar5 = param_3 + (param_1 + lVar7 + -1) * 0x10;
        lVar11 = lVar7;
        if (*(int *)(*(long *)(param_3 + (param_1 + lVar7 + -1) * 0x10) + 0x120) <=
            *(int *)(*(long *)(param_3 + (param_1 + lVar7) * 0x10) + 0x120)) {
          lVar11 = lVar7 + 1;
          lVar4 = lVar7;
          pAVar5 = param_3 + (param_1 + lVar7) * 0x10;
        }
        lVar7 = lVar11 * 2;
        *(long *)(param_3 + (lVar12 + param_1) * 0x10) = *(long *)pAVar5;
        *(undefined4 *)(param_3 + (lVar12 + param_1) * 0x10 + 8) = *(undefined4 *)(pAVar5 + 8);
        lVar12 = lVar4;
      } while (lVar14 != lVar7 && SBORROW8(lVar14,lVar7) == lVar14 + lVar11 * -2 < 0);
      pAVar9 = pAVar5;
      if (lVar14 == lVar7) {
LAB_00108600:
        lVar4 = lVar7 + -1;
        pAVar5 = param_3 + (param_1 + lVar4) * 0x10;
        *(long *)pAVar9 = *(long *)pAVar5;
        *(undefined4 *)(pAVar9 + 8) = *(undefined4 *)(pAVar5 + 8);
      }
      lVar7 = lVar4 + -1;
      if (lVar4 <= lVar16) goto LAB_0010865c;
      iVar6 = *(int *)(lVar8 + 0x120);
      do {
        lVar12 = lVar7 >> 1;
        pAVar9 = param_3 + (param_1 + lVar12) * 0x10;
        pAVar5 = param_3 + (lVar4 + param_1) * 0x10;
        if (iVar6 <= *(int *)(*(long *)pAVar9 + 0x120)) break;
        *(long *)pAVar5 = *(long *)pAVar9;
        *(undefined4 *)(pAVar5 + 8) = *(undefined4 *)(pAVar9 + 8);
        lVar7 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
        pAVar5 = pAVar9;
        lVar4 = lVar12;
      } while (lVar16 < lVar12);
      *(long *)pAVar5 = lVar8;
      *(int *)(pAVar5 + 8) = (int)lVar3;
      if (lVar16 == 0) goto LAB_00108347;
    }
    else {
      pAVar9 = pAVar17;
      pAVar5 = pAVar17;
      if (lVar18 == lVar14) goto LAB_00108600;
LAB_0010865c:
      *(long *)pAVar5 = lVar8;
      *(int *)(pAVar5 + 8) = (int)lVar3;
    }
    lVar16 = lVar16 + -1;
    pAVar17 = pAVar17 + -0x10;
    lVar18 = lVar18 + -2;
  } while( true );
LAB_001082b0:
  introsort(param_2,lVar18,param_3,local_b0);
  lVar14 = param_2 - param_1;
  if (lVar14 < 0x11) {
    return;
  }
  lVar18 = param_2;
  if (local_b0 == 0) goto LAB_001084bb;
  goto LAB_00108153;
LAB_00108347:
  pAVar5 = param_3 + param_1 * 0x10;
  pAVar17 = param_3 + (param_2 + -2) * 0x10;
  lVar14 = (param_2 + -1) - param_1;
LAB_00108370:
  do {
    lVar18 = *(long *)(pAVar17 + 0x10);
    lVar16 = *(long *)(pAVar17 + 0x18);
    *(long *)(pAVar17 + 0x10) = *(long *)pAVar5;
    *(undefined4 *)(pAVar17 + 0x18) = *(undefined4 *)(pAVar5 + 8);
    uVar10 = (undefined4)lVar16;
    if (lVar14 < 3) {
      pAVar9 = pAVar5;
      if (lVar14 != 2) {
        *(long *)pAVar5 = lVar18;
        *(undefined4 *)(pAVar5 + 8) = uVar10;
        return;
      }
LAB_00108630:
      lVar3 = lVar14 + -1;
      *(long *)pAVar9 = *(long *)pAVar17;
      *(undefined4 *)(pAVar9 + 8) = *(undefined4 *)(pAVar17 + 8);
      lVar16 = lVar14 + -2;
    }
    else {
      lVar16 = 2;
      lVar8 = 0;
      do {
        lVar3 = lVar16 + -1;
        pAVar9 = param_3 + (param_1 + lVar16 + -1) * 0x10;
        lVar7 = lVar16;
        if (*(int *)(*(long *)(param_3 + (param_1 + lVar16 + -1) * 0x10) + 0x120) <=
            *(int *)(*(long *)(param_3 + (param_1 + lVar16) * 0x10) + 0x120)) {
          lVar7 = lVar16 + 1;
          lVar3 = lVar16;
          pAVar9 = param_3 + (param_1 + lVar16) * 0x10;
        }
        lVar16 = lVar7 * 2;
        *(long *)(param_3 + (lVar8 + param_1) * 0x10) = *(long *)pAVar9;
        *(undefined4 *)(param_3 + (lVar8 + param_1) * 0x10 + 8) = *(undefined4 *)(pAVar9 + 8);
        lVar8 = lVar3;
      } while (lVar14 != lVar16 && SBORROW8(lVar14,lVar16) == lVar14 + lVar7 * -2 < 0);
      if (lVar14 == lVar16) goto LAB_00108630;
      lVar16 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
      if (lVar3 == 0) {
        lVar14 = lVar14 + -1;
        pAVar17 = pAVar17 + -0x10;
        *(long *)pAVar9 = lVar18;
        *(undefined4 *)(pAVar9 + 8) = uVar10;
        goto LAB_00108370;
      }
    }
    iVar6 = *(int *)(lVar18 + 0x120);
    do {
      lVar8 = lVar16 >> 1;
      pAVar15 = param_3 + (param_1 + lVar8) * 0x10;
      pAVar9 = param_3 + (lVar3 + param_1) * 0x10;
      if (iVar6 <= *(int *)(*(long *)pAVar15 + 0x120)) break;
      *(long *)pAVar9 = *(long *)pAVar15;
      *(undefined4 *)(pAVar9 + 8) = *(undefined4 *)(pAVar15 + 8);
      lVar16 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      pAVar9 = pAVar15;
      lVar3 = lVar8;
    } while (lVar8 != 0);
    pAVar17 = pAVar17 + -0x10;
    *(long *)pAVar9 = lVar18;
    *(undefined4 *)(pAVar9 + 8) = uVar10;
    bVar2 = lVar14 < 2;
    lVar14 = lVar14 + -1;
    if (bVar2) {
      return;
    }
  } while( true );
}



/* GodotSoftBody3D::~GodotSoftBody3D() */

void __thiscall GodotSoftBody3D::~GodotSoftBody3D(GodotSoftBody3D *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR__shape_changed_00109f30;
  if (*(long *)(this + 0x2c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2c8);
      *(undefined8 *)(this + 0x2c8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2b8);
      *(undefined8 *)(this + 0x2b8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pvVar2 = *(void **)(this + 0x288);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x2ac) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2a8) * 4) != 0) {
        memset(*(void **)(this + 0x2a0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2a8) * 4) << 2);
      }
      *(undefined4 *)(this + 0x2ac) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x298),false);
    Memory::free_static(*(void **)(this + 0x290),false);
    Memory::free_static(*(void **)(this + 0x2a0),false);
  }
  plVar1 = *(long **)(this + 0x268);
  if (plVar1 != (long *)0x0) {
    lVar3 = *(long *)(this + 0x278);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(this + 0x280);
    }
    lVar4 = *(long *)(this + 0x280);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    if (this + 0x268 == (GodotSoftBody3D *)*plVar1) {
      *plVar1 = *(long *)(this + 0x278);
    }
    if (this + 0x268 == (GodotSoftBody3D *)plVar1[1]) {
      plVar1[1] = lVar4;
    }
  }
  if (*(void **)(this + 0x260) != (void *)0x0) {
    if (*(int *)(this + 600) != 0) {
      *(undefined4 *)(this + 600) = 0;
    }
    Memory::free_static(*(void **)(this + 0x260),false);
  }
  if (*(void **)(this + 0x218) != (void *)0x0) {
    if (*(int *)(this + 0x210) != 0) {
      *(undefined4 *)(this + 0x210) = 0;
    }
    Memory::free_static(*(void **)(this + 0x218),false);
  }
  DynamicBVH::~DynamicBVH((DynamicBVH *)(this + 400));
  DynamicBVH::~DynamicBVH((DynamicBVH *)(this + 0x110));
  if (*(void **)(this + 0x108) != (void *)0x0) {
    if (*(int *)(this + 0x100) != 0) {
      *(undefined4 *)(this + 0x100) = 0;
    }
    Memory::free_static(*(void **)(this + 0x108),false);
  }
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    if (*(int *)(this + 0xf0) != 0) {
      *(undefined4 *)(this + 0xf0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xf8),false);
  }
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    if (*(int *)(this + 0xe0) != 0) {
      *(undefined4 *)(this + 0xe0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xe8),false);
  }
  *(code **)this = GodotCollisionObject3D::_set_static;
  plVar1 = *(long **)(this + 0xb0);
  if (plVar1 != (long *)0x0) {
    lVar3 = *(long *)(this + 0xc0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(this + 200);
    }
    lVar4 = *(long *)(this + 200);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    if (this + 0xb0 == (GodotSoftBody3D *)*plVar1) {
      *plVar1 = *(long *)(this + 0xc0);
    }
    if (this + 0xb0 == (GodotSoftBody3D *)plVar1[1]) {
      plVar1[1] = lVar4;
    }
  }
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* GodotSoftBody3D::~GodotSoftBody3D() */

void __thiscall GodotSoftBody3D::~GodotSoftBody3D(GodotSoftBody3D *this)

{
  ~GodotSoftBody3D(this);
  operator_delete(this,0x2d8);
  return;
}



/* LocalVector<bool, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<bool,unsigned_int,false,false>::resize
          (LocalVector<bool,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  
  if (*(uint *)this <= param_1) {
    if (param_1 <= *(uint *)this) {
      return;
    }
    if (*(uint *)(this + 4) < param_1) {
      uVar3 = param_1 - 1 | param_1 - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar3;
      lVar2 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar3,false);
      *(long *)(this + 8) = lVar2;
      if (lVar2 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  *(uint *)this = param_1;
  return;
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
      if (param_1 <= uVar7) goto LAB_00108e99;
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
LAB_00108e99:
  *(uint *)this = param_1;
  return;
}



/* HashMap<Vector3, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, unsigned int> > >::_lookup_pos(Vector3 const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
::_lookup_pos(HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
              *this,Vector3 *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  
  if (*(long *)(this + 8) != 0) {
    if (*(int *)(this + 0x2c) == 0) {
      return 0;
    }
    fVar1 = *(float *)param_1;
    uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar13 = 0x3413905a;
    if ((fVar1 != 0.0) && (uVar13 = 0x22afa5cc, !NAN(fVar1))) {
      uVar13 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar2 = *(float *)(param_1 + 4);
    if (fVar2 != 0.0) {
      if (NAN(fVar2)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = *(float *)(param_1 + 8);
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar19 = 1;
      uVar15 = uVar4;
    }
    else {
      uVar15 = uVar19 * uVar4;
    }
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar15;
    lVar16 = SUB168(auVar5 * auVar9,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
    uVar14 = SUB164(auVar5 * auVar9,8);
    if (uVar13 != 0) {
      uVar18 = 0;
      do {
        if (uVar19 == uVar13) {
          lVar16 = *(long *)(*(long *)(this + 8) + lVar16 * 8);
          if ((((fVar1 == *(float *)(lVar16 + 0x10)) ||
               ((NAN(*(float *)(lVar16 + 0x10)) && (NAN(fVar1))))) &&
              ((fVar2 == *(float *)(lVar16 + 0x14) ||
               ((NAN(*(float *)(lVar16 + 0x14)) && (NAN(fVar2))))))) &&
             ((fVar3 == *(float *)(lVar16 + 0x18) ||
              ((NAN(fVar3) && (NAN(*(float *)(lVar16 + 0x18)))))))) {
            *param_2 = uVar14;
            return 1;
          }
        }
        uVar18 = uVar18 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (uVar14 + 1) * uVar4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar17;
        lVar16 = SUB168(auVar6 * auVar10,8);
        uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
        uVar14 = SUB164(auVar6 * auVar10,8);
      } while ((uVar13 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar13 * uVar4, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar17, auVar8._8_8_ = 0,
              auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                              + uVar14) - SUB164(auVar7 * auVar11,8)) * uVar4, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar17, uVar18 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector3, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, unsigned int> > >::operator[](Vector3 const&) */

undefined1 * __thiscall
HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
::operator[](HashMap<Vector3,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,unsigned_int>>>
             *this,Vector3 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  long lVar7;
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
  undefined1 (*pauVar24) [16];
  char cVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_c8;
  uint local_70;
  uint local_6c [5];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar25 = _lookup_pos(this,param_1,&local_70);
  if (cVar25 == '\0') {
    uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar35 = (ulong)uVar26;
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      pvVar31 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar31;
      if (uVar26 != 0) {
        pvVar5 = *(void **)(this + 0x10);
        if ((pvVar5 < (void *)((long)pvVar31 + uVar39)) &&
           (pvVar31 < (void *)((long)pvVar5 + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)pvVar5 + uVar28 * 4) = 0;
            *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(pvVar5,0,uVar28);
          memset(pvVar31,0,uVar39);
        }
      }
    }
    local_6c[0] = 0;
    cVar25 = _lookup_pos(this,param_1,local_6c);
    if (cVar25 == '\0') {
      if ((float)uVar26 * __LC93 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar26 = *(uint *)(this + 0x28);
        if (uVar26 == 0x1c) {
          pauVar30 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00109797;
        }
        uVar28 = (ulong)(uVar26 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
        if (uVar26 + 1 < 2) {
          uVar28 = 2;
        }
        uVar26 = *(uint *)(hash_table_size_primes + uVar28 * 4);
        uVar35 = (ulong)uVar26;
        *(int *)(this + 0x28) = (int)uVar28;
        pvVar31 = *(void **)(this + 8);
        uVar28 = uVar35 * 4;
        uVar39 = uVar35 * 8;
        pvVar5 = *(void **)(this + 0x10);
        uVar29 = Memory::alloc_static(uVar28,false);
        *(undefined8 *)(this + 0x10) = uVar29;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar26 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar28))) {
            uVar28 = 0;
            do {
              *(undefined4 *)((long)__s + uVar28 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
              uVar28 = uVar28 + 1;
            } while (uVar35 != uVar28);
          }
          else {
            memset(__s,0,uVar28);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar27 != 0) {
          uVar28 = 0;
          do {
            uVar26 = *(uint *)((long)pvVar5 + uVar28 * 4);
            if (uVar26 != 0) {
              lVar6 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar4);
              lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar26 * lVar7;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar39;
              lVar33 = SUB168(auVar8 * auVar16,8);
              puVar1 = (uint *)(lVar6 + lVar33 * 4);
              iVar32 = SUB164(auVar8 * auVar16,8);
              uVar38 = *puVar1;
              uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
              while (uVar38 != 0) {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)uVar38 * lVar7;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)((uVar4 + iVar32) - SUB164(auVar9 * auVar17,8)) * lVar7;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                local_c8 = SUB164(auVar10 * auVar18,8);
                uVar36 = uVar29;
                if (local_c8 < uVar37) {
                  *puVar1 = uVar26;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                  uVar36 = *puVar2;
                  *puVar2 = uVar29;
                  uVar26 = uVar38;
                  uVar37 = local_c8;
                }
                uVar37 = uVar37 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(iVar32 + 1) * lVar7;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar39;
                lVar33 = SUB168(auVar11 * auVar19,8);
                puVar1 = (uint *)(lVar6 + lVar33 * 4);
                iVar32 = SUB164(auVar11 * auVar19,8);
                uVar29 = uVar36;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
              *puVar1 = uVar26;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar27);
          Memory::free_static(pvVar31,false);
          Memory::free_static(pvVar5,false);
        }
      }
      local_58 = *(undefined8 *)param_1;
      local_50 = *(undefined4 *)(param_1 + 8);
      pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
      *pauVar30 = (undefined1  [16])0x0;
      *(undefined4 *)(pauVar30[1] + 0xc) = 0;
      *(undefined8 *)pauVar30[1] = local_58;
      *(undefined4 *)(pauVar30[1] + 8) = local_50;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar30;
      }
      else {
        *puVar2 = pauVar30;
        *(undefined8 **)(*pauVar30 + 8) = puVar2;
      }
      fVar3 = *(float *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar30;
      uVar26 = 0x3413905a;
      if ((fVar3 != 0.0) && (uVar26 = 0x22afa5cc, !NAN(fVar3))) {
        uVar26 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                 0x7f07c65;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
      }
      fVar3 = *(float *)(param_1 + 4);
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar26 = uVar26 ^ 0x2db3efa0;
        }
        else {
          uVar26 = uVar26 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = *(float *)(param_1 + 8);
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar26 = uVar26 ^ 0x2db3efa0;
        }
        else {
          uVar26 = uVar26 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x13) * 5 + 0xe6546b64;
      uVar26 = (uVar26 >> 0x10 ^ uVar26) * -0x7a143595;
      uVar27 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
      uVar26 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar28 = 1;
        uVar26 = 1;
      }
      else {
        uVar28 = (ulong)uVar26;
      }
      uVar38 = 0;
      lVar6 = *(long *)(this + 0x10);
      lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar39 = CONCAT44(0,uVar27);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28 * lVar7;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar34 = SUB168(auVar12 * auVar20,8);
      lVar33 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar6 + lVar34 * 4);
      iVar32 = SUB164(auVar12 * auVar20,8);
      uVar4 = *puVar1;
      pauVar24 = pauVar30;
      while (uVar4 != 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar4 * lVar7;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((uVar27 + iVar32) - SUB164(auVar13 * auVar21,8)) * lVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        local_c8 = SUB164(auVar14 * auVar22,8);
        pauVar40 = pauVar24;
        if (local_c8 < uVar38) {
          *puVar1 = uVar26;
          puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar24;
          uVar26 = uVar4;
          uVar38 = local_c8;
        }
        uVar38 = uVar38 + 1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)(iVar32 + 1) * lVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar39;
        lVar34 = SUB168(auVar15 * auVar23,8);
        puVar1 = (uint *)(lVar6 + lVar34 * 4);
        iVar32 = SUB164(auVar15 * auVar23,8);
        pauVar24 = pauVar40;
        uVar4 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar24;
      *puVar1 = uVar26;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
      *(undefined4 *)(pauVar30[1] + 0xc) = 0;
    }
  }
  else {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_00109797:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar30[1] + 0xc;
}



/* void Vector<AreaCMP>::sort_custom<_DefaultComparator<AreaCMP>, true>() */

void __thiscall
Vector<AreaCMP>::sort_custom<_DefaultComparator<AreaCMP>,true>(Vector<AreaCMP> *this)

{
  AreaCMP *pAVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  AreaCMP *pAVar11;
  long lVar12;
  long lVar13;
  AreaCMP *__dest;
  ulong uVar14;
  AreaCMP *pAVar15;
  AreaCMP *pAVar16;
  long lVar17;
  size_t __n;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_40;
  
  lVar17 = *(long *)(this + 8);
  if (lVar17 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar17 + -8);
  if (lVar4 == 0) {
    return;
  }
  if (1 < *(ulong *)(lVar17 + -0x10)) {
    if (*(long *)(this + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar17 = *(long *)(*(long *)(this + 8) + -8);
    uVar14 = 0x10;
    __n = lVar17 * 0x10;
    if (__n != 0) {
      uVar14 = __n - 1 | __n - 1 >> 1;
      uVar14 = uVar14 | uVar14 >> 2;
      uVar14 = uVar14 | uVar14 >> 4;
      uVar14 = uVar14 | uVar14 >> 8;
      uVar14 = uVar14 | uVar14 >> 0x10;
      uVar14 = (uVar14 | uVar14 >> 0x20) + 0x11;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar14,false);
    if (puVar6 != (undefined8 *)0x0) {
      __dest = (AreaCMP *)(puVar6 + 2);
      *puVar6 = 1;
      puVar6[1] = lVar17;
      memcpy(__dest,*(void **)(this + 8),__n);
      if (*(long *)(this + 8) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(this + 8) + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          lVar17 = *(long *)(this + 8);
          *(undefined8 *)(this + 8) = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      *(AreaCMP **)(this + 8) = __dest;
      goto LAB_00109a36;
    }
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
  }
  __dest = *(AreaCMP **)(this + 8);
LAB_00109a36:
  if (lVar4 == 1) {
    SortArray<AreaCMP,_DefaultComparator<AreaCMP>,true>::introsort(0,1,__dest,0);
    return;
  }
  lVar7 = 0;
  lVar17 = lVar4;
  do {
    lVar17 = lVar17 >> 1;
    lVar7 = lVar7 + 1;
  } while (lVar17 != 1);
  SortArray<AreaCMP,_DefaultComparator<AreaCMP>,true>::introsort(0,lVar4,__dest,lVar7 * 2);
  pAVar1 = __dest + 0x10;
  lVar17 = 1;
  lVar7 = 1;
  pAVar16 = pAVar1;
  if (0x10 < lVar4) {
    do {
      lVar17 = *(long *)pAVar16;
      iVar3 = *(int *)(*(long *)pAVar16 + 0x120);
      uStack_40 = (undefined4)*(long *)(pAVar16 + 8);
      pAVar15 = pAVar16;
      if (iVar3 < *(int *)(*(long *)__dest + 0x120)) {
        do {
          pAVar11 = pAVar15 + -0x10;
          *(long *)pAVar15 = *(long *)(pAVar15 + -0x10);
          *(undefined4 *)(pAVar15 + 8) = *(undefined4 *)(pAVar15 + -8);
          pAVar15 = pAVar11;
        } while (__dest != pAVar11);
        *(long *)__dest = lVar17;
        *(undefined4 *)(__dest + 8) = uStack_40;
      }
      else {
        if (iVar3 < *(int *)(*(long *)(pAVar16 + -0x10) + 0x120)) {
          if (lVar7 + -1 != 0) {
            lVar13 = lVar7 << 4;
            lVar10 = lVar7 + -1;
            do {
              lVar9 = lVar10 + -1;
              *(undefined8 *)(__dest + lVar13) = *(undefined8 *)(__dest + lVar13 + -0x10);
              *(undefined4 *)(__dest + lVar13 + 8) = *(undefined4 *)(__dest + lVar13 + -8);
              if (*(int *)(*(long *)(__dest + lVar13 + -0x20) + 0x120) <= iVar3) {
                pAVar15 = __dest + lVar10 * 0x10;
                goto LAB_00109cb9;
              }
              lVar13 = lVar13 + -0x10;
              lVar10 = lVar9;
            } while (lVar9 != 0);
          }
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pAVar15 = pAVar1;
        }
LAB_00109cb9:
        *(long *)pAVar15 = lVar17;
        *(undefined4 *)(pAVar15 + 8) = uStack_40;
      }
      lVar7 = lVar7 + 1;
      pAVar16 = pAVar16 + 0x10;
    } while (lVar7 != 0x10);
    pAVar16 = __dest + 0x100;
    lVar7 = -0x100;
    lVar17 = 0x10;
    do {
      lVar10 = *(long *)pAVar16;
      lVar13 = *(long *)(pAVar16 + 8);
      iVar3 = *(int *)(*(long *)pAVar16 + 0x120);
      lVar12 = lVar17 << 4;
      lVar9 = lVar17 + -1;
      pAVar15 = pAVar16;
      if (iVar3 < *(int *)(*(long *)(pAVar16 + -0x10) + 0x120)) {
        do {
          lVar8 = lVar9 + -1;
          *(undefined8 *)(__dest + lVar12) = *(undefined8 *)(pAVar16 + lVar12 + lVar7 + -0x10);
          *(undefined4 *)(__dest + lVar12 + 8) = *(undefined4 *)(pAVar16 + lVar12 + lVar7 + -8);
          if (*(int *)(*(long *)(__dest + lVar12 + -0x20) + 0x120) <= iVar3) {
            pAVar15 = __dest + lVar9 * 0x10;
            goto LAB_00109b83;
          }
          lVar12 = lVar12 + -0x10;
          lVar9 = lVar8;
        } while (lVar8 != 0);
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        pAVar15 = pAVar1;
      }
LAB_00109b83:
      lVar17 = lVar17 + 1;
      pAVar16 = pAVar16 + 0x10;
      lVar7 = lVar7 + -0x10;
      *(long *)pAVar15 = lVar10;
      uStack_60 = (undefined4)lVar13;
      *(undefined4 *)(pAVar15 + 8) = uStack_60;
      if (lVar4 == lVar17) {
        return;
      }
    } while( true );
  }
  do {
    lVar7 = *(long *)pAVar16;
    iVar3 = *(int *)(*(long *)pAVar16 + 0x120);
    uStack_70 = (undefined4)*(long *)(pAVar16 + 8);
    pAVar15 = pAVar16;
    if (iVar3 < *(int *)(*(long *)__dest + 0x120)) {
      do {
        pAVar11 = pAVar15 + -0x10;
        *(long *)pAVar15 = *(long *)(pAVar15 + -0x10);
        *(undefined4 *)(pAVar15 + 8) = *(undefined4 *)(pAVar15 + -8);
        pAVar15 = pAVar11;
      } while (__dest != pAVar11);
      *(long *)__dest = lVar7;
      *(undefined4 *)(__dest + 8) = uStack_70;
    }
    else {
      if (iVar3 < *(int *)(*(long *)(pAVar16 + -0x10) + 0x120)) {
        if (lVar17 + -1 != 0) {
          lVar13 = lVar17 << 4;
          lVar10 = lVar17 + -1;
          do {
            lVar9 = lVar10 + -1;
            *(undefined8 *)(__dest + lVar13) = *(undefined8 *)(__dest + lVar13 + -0x10);
            *(undefined4 *)(__dest + lVar13 + 8) = *(undefined4 *)(__dest + lVar13 + -8);
            if (*(int *)(*(long *)(__dest + lVar13 + -0x20) + 0x120) <= iVar3) {
              pAVar15 = __dest + lVar10 * 0x10;
              goto LAB_00109d5d;
            }
            lVar13 = lVar13 + -0x10;
            lVar10 = lVar9;
          } while (lVar9 != 0);
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        pAVar15 = pAVar1;
      }
LAB_00109d5d:
      *(long *)pAVar15 = lVar7;
      *(undefined4 *)(pAVar15 + 8) = uStack_70;
    }
    lVar17 = lVar17 + 1;
    pAVar16 = pAVar16 + 0x10;
    if (lVar4 == lVar17) {
      return;
    }
  } while( true );
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotSoftBody3D::~GodotSoftBody3D() */

void __thiscall GodotSoftBody3D::~GodotSoftBody3D(GodotSoftBody3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotSoftBodyShape3D::~GodotSoftBodyShape3D() */

void __thiscall GodotSoftBodyShape3D::~GodotSoftBodyShape3D(GodotSoftBodyShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



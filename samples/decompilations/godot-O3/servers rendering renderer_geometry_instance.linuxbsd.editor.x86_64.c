
/* RenderGeometryInstanceBase::set_skeleton(RID) */

void __thiscall
RenderGeometryInstanceBase::set_skeleton(RenderGeometryInstanceBase *this,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(this + 0xa8) + 0x10) = param_2;
  (**(code **)(*(long *)this + 0x10))();
  *(undefined1 *)(*(long *)(this + 0xa8) + 0x53) = 1;
  return;
}



/* RenderGeometryInstanceBase::set_material_override(RID) */

void __thiscall
RenderGeometryInstanceBase::set_material_override
          (RenderGeometryInstanceBase *this,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(this + 0xa8) + 0x28) = param_2;
  (**(code **)(*(long *)this + 0x10))();
  *(undefined1 *)(*(long *)(this + 0xa8) + 0x53) = 1;
  return;
}



/* RenderGeometryInstanceBase::set_material_overlay(RID) */

void __thiscall
RenderGeometryInstanceBase::set_material_overlay
          (RenderGeometryInstanceBase *this,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(this + 0xa8) + 0x30) = param_2;
  (**(code **)(*(long *)this + 0x10))();
  *(undefined1 *)(*(long *)(this + 0xa8) + 0x53) = 1;
  return;
}



/* RenderGeometryInstanceBase::set_mesh_instance(RID) */

void __thiscall
RenderGeometryInstanceBase::set_mesh_instance(RenderGeometryInstanceBase *this,undefined8 param_2)

{
  *(undefined8 *)(this + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0010009b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}



/* RenderGeometryInstanceBase::set_pivot_data(float, bool) */

void __thiscall
RenderGeometryInstanceBase::set_pivot_data
          (RenderGeometryInstanceBase *this,float param_1,bool param_2)

{
  this[0x7c] = (RenderGeometryInstanceBase)param_2;
  *(float *)(this + 0x78) = param_1;
  return;
}



/* RenderGeometryInstanceBase::set_lod_bias(float) */

void __thiscall
RenderGeometryInstanceBase::set_lod_bias(RenderGeometryInstanceBase *this,float param_1)

{
  *(float *)(this + 0x74) = param_1;
  return;
}



/* RenderGeometryInstanceBase::set_layer_mask(unsigned int) */

void __thiscall
RenderGeometryInstanceBase::set_layer_mask(RenderGeometryInstanceBase *this,uint param_1)

{
  *(uint *)(this + 0x80) = param_1;
  return;
}



/* RenderGeometryInstanceBase::set_fade_range(bool, float, float, bool, float, float) */

void __thiscall
RenderGeometryInstanceBase::set_fade_range
          (RenderGeometryInstanceBase *this,bool param_1,float param_2,float param_3,bool param_4,
          float param_5,float param_6)

{
  this[0x84] = (RenderGeometryInstanceBase)param_1;
  this[0x90] = (RenderGeometryInstanceBase)param_4;
  *(ulong *)(this + 0x88) = CONCAT44(param_3,param_2);
  *(ulong *)(this + 0x94) = CONCAT44(param_6,param_5);
  return;
}



/* RenderGeometryInstanceBase::set_parent_fade_alpha(float) */

void __thiscall
RenderGeometryInstanceBase::set_parent_fade_alpha(RenderGeometryInstanceBase *this,float param_1)

{
  *(float *)(this + 0x9c) = param_1;
  return;
}



/* RenderGeometryInstanceBase::set_transparency(float) */

void __thiscall
RenderGeometryInstanceBase::set_transparency(RenderGeometryInstanceBase *this,float param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  dVar2 = _LC2 - (double)param_1;
  uVar1 = 0;
  if ((0.0 <= dVar2) && (uVar1 = _LC1, dVar2 <= _LC2)) {
    *(float *)(this + 0xa0) = (float)dVar2;
    return;
  }
  *(undefined4 *)(this + 0xa0) = uVar1;
  return;
}



/* RenderGeometryInstanceBase::set_use_baked_light(bool) */

void __thiscall
RenderGeometryInstanceBase::set_use_baked_light(RenderGeometryInstanceBase *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0xa8) + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00100182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}



/* RenderGeometryInstanceBase::set_use_dynamic_gi(bool) */

void __thiscall
RenderGeometryInstanceBase::set_use_dynamic_gi(RenderGeometryInstanceBase *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0xa8) + 0x51) = param_1;
                    /* WARNING: Could not recover jumptable at 0x001001a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}



/* RenderGeometryInstanceBase::set_instance_shader_uniforms_offset(int) */

void __thiscall
RenderGeometryInstanceBase::set_instance_shader_uniforms_offset
          (RenderGeometryInstanceBase *this,int param_1)

{
  *(int *)(this + 0xa4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x001001bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}



/* RenderGeometryInstanceBase::set_cast_double_sided_shadows(bool) */

void __thiscall
RenderGeometryInstanceBase::set_cast_double_sided_shadows
          (RenderGeometryInstanceBase *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0xa8) + 0x52) = param_1;
                    /* WARNING: Could not recover jumptable at 0x001001d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}



/* RenderGeometryInstanceBase::get_transform() */

void RenderGeometryInstanceBase::get_transform(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x28);
  uVar2 = *(undefined8 *)(in_RSI + 0x30);
  uVar3 = *(undefined8 *)(in_RSI + 0x38);
  uVar4 = *(undefined8 *)(in_RSI + 0x40);
  uVar5 = *(undefined8 *)(in_RSI + 0x48);
  *in_RDI = *(undefined8 *)(in_RSI + 0x20);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  in_RDI[4] = uVar4;
  in_RDI[5] = uVar5;
  return;
}



/* RenderGeometryInstanceBase::get_aabb() */

void RenderGeometryInstanceBase::get_aabb(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0xa8);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  uVar2 = *(undefined8 *)(lVar1 + 0x48);
  *in_RDI = *(undefined8 *)(lVar1 + 0x38);
  in_RDI[1] = uVar3;
  in_RDI[2] = uVar2;
  return;
}



/* RenderGeometryInstanceBase::set_transform(Transform3D const&, AABB const&, AABB const&) */

void __thiscall
RenderGeometryInstanceBase::set_transform
          (RenderGeometryInstanceBase *this,Transform3D *param_1,AABB *param_2,AABB *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  float local_1c;
  float fStack_18;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0xa8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x48) = uVar3;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  this[0x50] = (RenderGeometryInstanceBase)
               (((*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x10) -
                 *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x14)) * *(float *)param_1 -
                (*(float *)(param_1 + 0x20) * *(float *)(param_1 + 4) -
                *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 8)) * *(float *)(param_1 + 0xc)) +
                (*(float *)(param_1 + 0x14) * *(float *)(param_1 + 4) -
                *(float *)(param_1 + 0x10) * *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x18) <
               0.0);
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x54) = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x5c) = uVar3;
  *(undefined8 *)(this + 100) = *(undefined8 *)(param_3 + 0x10);
  auVar8 = Basis::get_scale_abs();
  fVar6 = auVar8._8_4_;
  local_1c = auVar8._0_4_;
  fStack_18 = auVar8._4_4_;
  fVar5 = fVar6;
  fVar7 = local_1c;
  if (fStack_18 <= fVar6) {
    if (local_1c <= fVar6) {
      fVar7 = fVar6;
      if (fStack_18 < fVar6) {
        fVar5 = fStack_18;
      }
    }
    else {
      fVar5 = fStack_18;
      if (fVar6 <= fStack_18) goto LAB_00100335;
    }
  }
  else if (local_1c <= fStack_18) {
    fVar7 = fStack_18;
  }
  fVar6 = local_1c;
  if (fVar5 <= local_1c) {
    fVar6 = fVar5;
  }
LAB_00100335:
  this[0x6c] = (RenderGeometryInstanceBase)(0.0 <= fVar7 && (double)(fVar6 / fVar7) < _LC4);
  *(float *)(this + 0x70) = fVar7;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderGeometryInstanceBase::set_surface_materials(Vector<RID> const&) */

void __thiscall
RenderGeometryInstanceBase::set_surface_materials(RenderGeometryInstanceBase *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  lVar1 = *(long *)(this + 0xa8);
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar1 + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar4 = (long *)(lVar2 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        lVar3 = *(long *)(lVar1 + 0x20);
        *(undefined8 *)(lVar1 + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(lVar1 + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + -0x10);
      do {
        lVar3 = *plVar4;
        if (lVar3 == 0) goto LAB_00100428;
        LOCK();
        lVar2 = *plVar4;
        bVar5 = lVar3 == lVar2;
        if (bVar5) {
          *plVar4 = lVar3 + 1;
          lVar2 = lVar3;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar2 != -1) {
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 8);
      }
    }
  }
LAB_00100428:
  (**(code **)(*(long *)this + 0x10))(this);
  *(undefined1 *)(*(long *)(this + 0xa8) + 0x53) = 1;
  return;
}



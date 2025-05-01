
/* RendererMeshStorage::multimesh_allocate() */

void __thiscall RendererMeshStorage::multimesh_allocate(RendererMeshStorage *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e8))();
  return;
}



/* RendererMeshStorage::multimesh_initialize(RID) */

void RendererMeshStorage::multimesh_initialize(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f0))();
  return;
}



/* RendererMeshStorage::multimesh_free(RID) */

void RendererMeshStorage::multimesh_free(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f8))();
  return;
}



/* RendererMeshStorage::multimesh_get_instance_count(RID) const */

void RendererMeshStorage::multimesh_get_instance_count(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))();
  return;
}



/* RendererMeshStorage::multimesh_set_mesh(RID, RID) */

void RendererMeshStorage::multimesh_set_mesh(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x210))();
  return;
}



/* RendererMeshStorage::multimesh_instance_set_transform_2d(RID, int, Transform2D const&) */

void RendererMeshStorage::multimesh_instance_set_transform_2d(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x220))();
  return;
}



/* RendererMeshStorage::multimesh_set_custom_aabb(RID, AABB const&) */

void RendererMeshStorage::multimesh_set_custom_aabb(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x238))();
  return;
}



/* RendererMeshStorage::multimesh_get_custom_aabb(RID) const */

RendererMeshStorage * __thiscall
RendererMeshStorage::multimesh_get_custom_aabb(RendererMeshStorage *this,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 0x240))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererMeshStorage::multimesh_get_mesh(RID) const */

void RendererMeshStorage::multimesh_get_mesh(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001000c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))();
  return;
}



/* RendererMeshStorage::multimesh_instance_get_transform(RID, int) const */

undefined8 RendererMeshStorage::multimesh_instance_get_transform(undefined8 param_1,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 0x250))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererMeshStorage::multimesh_instance_get_transform_2d(RID, int) const */

undefined8
RendererMeshStorage::multimesh_instance_get_transform_2d(undefined8 param_1,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 600))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererMeshStorage::multimesh_instance_get_color(RID, int) const */

void RendererMeshStorage::multimesh_instance_get_color(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))();
  return;
}



/* RendererMeshStorage::multimesh_instance_get_custom_data(RID, int) const */

void RendererMeshStorage::multimesh_instance_get_custom_data(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x268))();
  return;
}



/* RendererMeshStorage::multimesh_get_command_buffer_rd_rid(RID) const */

void RendererMeshStorage::multimesh_get_command_buffer_rd_rid(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))();
  return;
}



/* RendererMeshStorage::multimesh_get_buffer_rd_rid(RID) const */

void RendererMeshStorage::multimesh_get_buffer_rd_rid(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001001a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))();
  return;
}



/* RendererMeshStorage::multimesh_get_buffer(RID) const */

RendererMeshStorage * __thiscall
RendererMeshStorage::multimesh_get_buffer(RendererMeshStorage *this,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 0x288))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererMeshStorage::multimesh_set_physics_interpolated(RID, bool) */

void __thiscall
RendererMeshStorage::multimesh_set_physics_interpolated
          (RendererMeshStorage *this,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x2a8))();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x20) = param_3;
  }
  return;
}



/* RendererMeshStorage::multimesh_set_visible_instances(RID, int) */

void RendererMeshStorage::multimesh_set_visible_instances(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x290))();
  return;
}



/* RendererMeshStorage::multimesh_get_visible_instances(RID) const */

void RendererMeshStorage::multimesh_get_visible_instances(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))();
  return;
}



/* RendererMeshStorage::multimesh_get_aabb(RID) */

RendererMeshStorage * __thiscall
RendererMeshStorage::multimesh_get_aabb(RendererMeshStorage *this,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 0x2a0))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererMeshStorage::multimesh_set_physics_interpolation_quality(RID,
   RenderingServer::MultimeshPhysicsInterpolationQuality) */

void __thiscall
RendererMeshStorage::multimesh_set_physics_interpolation_quality
          (RendererMeshStorage *this,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (param_3 < 2) {
    lVar1 = (**(code **)(*(long *)this + 0x2a8))();
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x1c) = param_3;
    }
    return;
  }
  _err_print_error("multimesh_set_physics_interpolation_quality",
                   "servers/rendering/storage/mesh_storage.cpp",0x10a,
                   "Condition \"(p_quality < 0) || (p_quality > 1)\" is true.",0,0);
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



/* RendererMeshStorage::multimesh_instance_reset_physics_interpolation(RID, int) */

void __thiscall
RendererMeshStorage::multimesh_instance_reset_physics_interpolation
          (RendererMeshStorage *this,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (**(code **)(*(long *)this + 0x2a8))();
  if (lVar3 != 0) {
    if ((param_3 < 0) || (*(int *)(lVar3 + 0x18) <= param_3)) {
      _err_print_index_error
                ("multimesh_instance_reset_physics_interpolation",
                 "servers/rendering/storage/mesh_storage.cpp",0x114,(long)param_3,
                 (long)*(int *)(lVar3 + 0x18),"p_index","mmi->_num_instances","",false,false);
      return;
    }
    CowData<float>::_copy_on_write((CowData<float> *)(lVar3 + 0x30));
    iVar1 = *(int *)(lVar3 + 8);
    lVar2 = *(long *)(lVar3 + 0x30);
    lVar3 = *(long *)(lVar3 + 0x40);
    if (0 < iVar1) {
      lVar4 = (long)(param_3 * iVar1) * 4;
      do {
        *(undefined4 *)(lVar2 + lVar4) = *(undefined4 *)(lVar3 + lVar4);
        lVar4 = lVar4 + 4;
      } while (lVar4 != ((long)iVar1 + (long)(param_3 * iVar1)) * 4);
    }
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



/* RendererMeshStorage::_multimesh_add_to_interpolation_lists(RID,
   RendererMeshStorage::MultiMeshInterpolator&) */

void __thiscall
RendererMeshStorage::_multimesh_add_to_interpolation_lists
          (RendererMeshStorage *this,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  void *pvVar4;
  ulong uVar5;
  
  if (*(char *)(param_3 + 0x21) == '\0') {
    *(undefined1 *)(param_3 + 0x21) = 1;
    uVar1 = *(uint *)(this + 8);
    pvVar4 = *(void **)(this + 0x10);
    if (uVar1 == *(uint *)(this + 0xc)) {
      uVar5 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar5 = 1;
      }
      *(int *)(this + 0xc) = (int)uVar5;
      pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar5 * 8,false);
      *(void **)(this + 0x10) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001005eb;
      uVar1 = *(uint *)(this + 8);
    }
    *(uint *)(this + 8) = uVar1 + 1;
    *(undefined8 *)((long)pvVar4 + (ulong)uVar1 * 8) = param_2;
  }
  if (*(char *)(param_3 + 0x22) == '\0') {
    *(undefined1 *)(param_3 + 0x22) = 1;
    puVar2 = *(uint **)(this + 0x38);
    uVar1 = *puVar2;
    pvVar4 = *(void **)(puVar2 + 2);
    if (uVar1 == puVar2[1]) {
      uVar5 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar5 = 1;
      }
      puVar2[1] = (uint)uVar5;
      pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar5 * 8,false);
      *(void **)(puVar2 + 2) = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_001005eb:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar1 = *puVar2;
    }
    *puVar2 = uVar1 + 1;
    *(undefined8 *)((long)pvVar4 + (ulong)uVar1 * 8) = param_2;
  }
  return;
}



/* RendererMeshStorage::multimesh_instance_set_transform(RID, int, Transform3D const&) */

void __thiscall
RendererMeshStorage::multimesh_instance_set_transform
          (RendererMeshStorage *this,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  lVar3 = (**(code **)(*(long *)this + 0x2a8))();
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x20) != '\0')) {
    if (param_3 < *(int *)(lVar3 + 0x18)) {
      if (*(int *)(lVar3 + 0xc) == 0xc) {
        iVar2 = *(int *)(lVar3 + 8);
        CowData<float>::_copy_on_write((CowData<float> *)(lVar3 + 0x40));
        puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x40) + (long)(param_3 * iVar2) * 4);
        *puVar1 = *param_4;
        puVar1[1] = param_4[1];
        puVar1[2] = param_4[2];
        puVar1[3] = param_4[9];
        puVar1[4] = param_4[3];
        puVar1[5] = param_4[4];
        puVar1[6] = param_4[5];
        puVar1[7] = param_4[10];
        puVar1[8] = param_4[6];
        puVar1[9] = param_4[7];
        puVar1[10] = param_4[8];
        puVar1[0xb] = param_4[0xb];
        _multimesh_add_to_interpolation_lists(this,param_2,lVar3);
        lVar3 = Engine::get_singleton();
        if (*(char *)(lVar3 + 0x80) != '\0') {
          return;
        }
        _physics_interpolation_warning
                  ("multimesh_instance_set_transform","servers/rendering/storage/mesh_storage.cpp",
                   0x6e,0xffffffffffffffff,
                   "MultiMesh interpolation is being triggered from outside physics process, this might lead to issues"
                  );
        return;
      }
      uVar5 = 0x56;
      pcVar4 = "Condition \"mmi->_vf_size_xform != 12\" is true.";
    }
    else {
      uVar5 = 0x55;
      pcVar4 = "Condition \"p_index >= mmi->_num_instances\" is true.";
    }
    _err_print_error("multimesh_instance_set_transform","servers/rendering/storage/mesh_storage.cpp"
                     ,uVar5,pcVar4,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010077f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x218))(this,param_2,param_3,param_4);
  return;
}



/* RendererMeshStorage::multimesh_instance_set_color(RID, int, Color const&) */

void __thiscall
RendererMeshStorage::multimesh_instance_set_color
          (RendererMeshStorage *this,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  lVar4 = (**(code **)(*(long *)this + 0x2a8))();
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x20) != '\0')) {
    if (param_3 < *(int *)(lVar4 + 0x18)) {
      if (*(int *)(lVar4 + 0x10) != 0) {
        iVar1 = *(int *)(lVar4 + 0xc);
        iVar2 = *(int *)(lVar4 + 8);
        CowData<float>::_copy_on_write((CowData<float> *)(lVar4 + 0x40));
        if (*(int *)(lVar4 + 0x10) == 4) {
          lVar3 = *(long *)(lVar4 + 0x40);
          lVar5 = 0;
          do {
            *(undefined4 *)(lVar3 + (long)(iVar2 * param_3 + iVar1) * 4 + lVar5) =
                 *(undefined4 *)(param_4 + lVar5);
            lVar5 = lVar5 + 4;
          } while (lVar5 != 0x10);
        }
        _multimesh_add_to_interpolation_lists(this,param_2,lVar4);
        return;
      }
      uVar7 = 0x80;
      pcVar6 = "Condition \"mmi->_vf_size_color == 0\" is true.";
    }
    else {
      uVar7 = 0x7f;
      pcVar6 = "Condition \"p_index >= mmi->_num_instances\" is true.";
    }
    _err_print_error("multimesh_instance_set_color","servers/rendering/storage/mesh_storage.cpp",
                     uVar7,pcVar6,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001008b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x228))(this,param_2,param_3,param_4);
  return;
}



/* RendererMeshStorage::multimesh_instance_set_custom_data(RID, int, Color const&) */

void __thiscall
RendererMeshStorage::multimesh_instance_set_custom_data
          (RendererMeshStorage *this,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  lVar5 = (**(code **)(*(long *)this + 0x2a8))();
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x20) != '\0')) {
    if (param_3 < *(int *)(lVar5 + 0x18)) {
      if (*(int *)(lVar5 + 0x14) != 0) {
        iVar1 = *(int *)(lVar5 + 0xc);
        iVar2 = *(int *)(lVar5 + 8);
        iVar3 = *(int *)(lVar5 + 0x10);
        CowData<float>::_copy_on_write((CowData<float> *)(lVar5 + 0x40));
        if (*(int *)(lVar5 + 0x14) == 4) {
          lVar4 = *(long *)(lVar5 + 0x40);
          lVar6 = 0;
          do {
            *(undefined4 *)(lVar4 + (long)(iVar1 + iVar2 * param_3 + iVar3) * 4 + lVar6) =
                 *(undefined4 *)(param_4 + lVar6);
            lVar6 = lVar6 + 4;
          } while (lVar6 != 0x10);
        }
        _multimesh_add_to_interpolation_lists(this,param_2,lVar5);
        return;
      }
      uVar8 = 0x9b;
      pcVar7 = "Condition \"mmi->_vf_size_data == 0\" is true.";
    }
    else {
      uVar8 = 0x9a;
      pcVar7 = "Condition \"p_index >= mmi->_num_instances\" is true.";
    }
    _err_print_error("multimesh_instance_set_custom_data",
                     "servers/rendering/storage/mesh_storage.cpp",uVar8,pcVar7,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001009eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x230))(this,param_2,param_3,param_4);
  return;
}



/* RendererMeshStorage::InterpolationData::notify_free_multimesh(RID) */

void __thiscall
RendererMeshStorage::InterpolationData::notify_free_multimesh(InterpolationData *this,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this;
  uVar2 = 0;
  while (uVar2 < uVar3) {
    plVar1 = (long *)(*(long *)(this + 8) + (ulong)uVar2 * 8);
    while (*plVar1 != param_2) {
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
      if (uVar3 == uVar2) goto LAB_00100abd;
    }
    uVar3 = uVar3 - 1;
    *(uint *)this = uVar3;
    if (uVar3 <= uVar2) break;
    *plVar1 = *(long *)(*(long *)(this + 8) + (ulong)uVar3 * 8);
  }
LAB_00100abd:
  uVar3 = *(uint *)(this + 0x10);
  uVar2 = 0;
  while (uVar2 < uVar3) {
    plVar1 = (long *)(*(long *)(this + 0x18) + (ulong)uVar2 * 8);
    while (*plVar1 != param_2) {
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
      if (uVar3 == uVar2) goto LAB_00100af2;
    }
    uVar3 = uVar3 - 1;
    *(uint *)(this + 0x10) = uVar3;
    if (uVar3 <= uVar2) break;
    *plVar1 = *(long *)(*(long *)(this + 0x18) + (ulong)uVar3 * 8);
  }
LAB_00100af2:
  uVar3 = *(uint *)(this + 0x20);
  uVar2 = 0;
  while( true ) {
    if (uVar3 <= uVar2) {
      return;
    }
    plVar1 = (long *)(*(long *)(this + 0x28) + (ulong)uVar2 * 8);
    while (*plVar1 != param_2) {
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
      if (uVar2 == uVar3) {
        return;
      }
    }
    uVar3 = uVar3 - 1;
    *(uint *)(this + 0x20) = uVar3;
    if (uVar3 <= uVar2) break;
    *plVar1 = *(long *)(*(long *)(this + 0x28) + (ulong)uVar3 * 8);
  }
  return;
}



/* RendererMeshStorage::update_interpolation_tick(bool) */

void __thiscall
RendererMeshStorage::update_interpolation_tick(RendererMeshStorage *this,bool param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  
  lVar10 = 0;
  puVar9 = *(uint **)(this + 0x40);
  if (*puVar9 != 0) {
    do {
      plVar1 = (long *)(*(long *)(puVar9 + 2) + lVar10 * 8);
      lVar6 = (**(code **)(*(long *)this + 0x2a8))(this,*plVar1);
      if (lVar6 == 0) {
LAB_00100bfe:
        uVar2 = *(uint *)(this + 8);
        if (uVar2 != 0) {
          lVar6 = *(long *)(this + 0x10);
          uVar8 = 0;
          do {
            if (*(long *)(lVar6 + uVar8 * 8) == *plVar1) {
              *(uint *)(this + 8) = uVar2 - 1;
              uVar5 = (uint)uVar8;
              if (uVar5 < uVar2 - 1) {
                memmove((void *)(lVar6 + uVar8 * 8),(void *)(lVar6 + (ulong)(uVar5 + 1) * 8),
                        (ulong)((uVar2 - 2) - uVar5) * 8 + 8);
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar2);
        }
      }
      else if (*(char *)(lVar6 + 0x22) == '\0') {
        *(undefined1 *)(lVar6 + 0x21) = 0;
        lVar7 = *(long *)(lVar6 + 0x40);
        if (*(long *)(lVar6 + 0x50) != lVar7) {
          CowData<float>::_ref((CowData<float> *)(lVar6 + 0x50),(CowData *)(lVar6 + 0x40));
          lVar7 = *(long *)(lVar6 + 0x40);
        }
        if (*(long *)(lVar6 + 0x30) != lVar7) {
          CowData<float>::_ref((CowData<float> *)(lVar6 + 0x30),(CowData *)(lVar6 + 0x40));
        }
        goto LAB_00100bfe;
      }
      puVar9 = *(uint **)(this + 0x40);
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < *puVar9);
  }
  puVar9 = *(uint **)(this + 0x38);
  if ((param_1) && (*puVar9 != 0)) {
    lVar10 = 0;
    do {
      lVar6 = (**(code **)(*(long *)this + 0x2a8))
                        (this,*(undefined8 *)(*(long *)(puVar9 + 2) + lVar10 * 8));
      if ((lVar6 != 0) &&
         (*(undefined1 *)(lVar6 + 0x22) = 0, *(long *)(lVar6 + 0x30) != *(long *)(lVar6 + 0x40))) {
        CowData<float>::_ref((CowData<float> *)(lVar6 + 0x30),(CowData *)(lVar6 + 0x40));
      }
      puVar9 = *(uint **)(this + 0x38);
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < *puVar9);
  }
  piVar4 = *(int **)(this + 0x40);
  iVar3 = *piVar4;
  *(int **)(this + 0x38) = piVar4;
  *(uint **)(this + 0x40) = puVar9;
  if (iVar3 != 0) {
    *piVar4 = 0;
  }
  return;
}



/* RendererMeshStorage::multimesh_set_buffer(RID, Vector<float> const&) */

void __thiscall
RendererMeshStorage::multimesh_set_buffer(RendererMeshStorage *this,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = (**(code **)(*(long *)this + 0x2a8))();
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x20) == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x270))(this,param_2,param_3);
      return;
    }
    goto LAB_00100f59;
  }
  lVar2 = *(long *)(param_3 + 8);
  lVar3 = *(long *)(lVar5 + 0x40);
  if (lVar2 == 0) {
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar6 == 0) goto LAB_00100d74;
      goto LAB_00100e70;
    }
LAB_00100d81:
    _multimesh_add_to_interpolation_lists(this,param_2,lVar5);
    lVar5 = Engine::get_singleton();
    if (*(char *)(lVar5 + 0x80) == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _physics_interpolation_warning
                  ("multimesh_set_buffer","servers/rendering/storage/mesh_storage.cpp",0xd8,
                   0xffffffffffffffff,
                   "MultiMesh interpolation is being triggered from outside physics process, this might lead to issues"
                  );
        return;
      }
      goto LAB_00100f59;
    }
  }
  else {
    if (lVar3 == 0) {
      if (*(long *)(lVar2 + -8) == 0) goto LAB_00100d74;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar6 == *(long *)(lVar2 + -8)) {
        if (lVar2 == lVar3) goto LAB_00100d81;
LAB_00100d74:
        CowData<float>::_ref((CowData<float> *)(lVar5 + 0x40),(CowData *)(param_3 + 8));
        goto LAB_00100d81;
      }
    }
LAB_00100e70:
    local_60 = 0;
    local_50 = 0x2f;
    local_58 = "Buffer should have %d elements, got %d instead.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<long,long>((String_conflict *)&local_58,(long)&local_60,lVar6);
    _err_print_error("multimesh_set_buffer","servers/rendering/storage/mesh_storage.cpp",0xd1,
                     "Condition \"p_buffer.size() != mmi->_data_curr.size()\" is true.",
                     (String_conflict *)&local_58,0);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100f59:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererMeshStorage::multimesh_set_buffer_interpolated(RID, Vector<float> const&, Vector<float>
   const&) */

void __thiscall
RendererMeshStorage::multimesh_set_buffer_interpolated
          (RendererMeshStorage *this,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = (**(code **)(*(long *)this + 0x2a8))();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_3 + 8);
    lVar8 = *(long *)(lVar2 + 0x40);
    if (lVar3 == 0) {
      if (lVar8 != 0) {
        lVar5 = 0;
        goto LAB_00100fc0;
      }
LAB_00100fcd:
      lVar8 = *(long *)(param_4 + 8);
      lVar5 = *(long *)(lVar2 + 0x30);
      if (lVar8 == 0) {
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar5 + -8);
          if (lVar7 != 0) goto LAB_001010c0;
          goto LAB_00100ffd;
        }
      }
      else {
        if (lVar5 == 0) {
          if (*(long *)(lVar8 + -8) != 0) {
            lVar7 = 0;
            goto LAB_001010c0;
          }
        }
        else {
          lVar7 = *(long *)(lVar5 + -8);
          if (lVar7 != *(long *)(lVar8 + -8)) {
LAB_001010c0:
            local_60 = 0;
            local_58 = "Buffer for previous frame should have %d elements, got %d instead.";
            local_50 = 0x42;
            String::parse_latin1((StrRange *)&local_60);
            vformat<long,long>((String_conflict *)&local_58,(long)&local_60,lVar7);
            pcVar4 = "Condition \"p_buffer_prev.size() != mmi->_data_prev.size()\" is true.";
            uVar6 = 0xf2;
            goto LAB_00101123;
          }
          if (lVar5 == lVar8) goto LAB_0010100f;
        }
LAB_00100ffd:
        CowData<float>::_ref((CowData<float> *)(lVar2 + 0x30),(CowData *)(param_4 + 8));
        lVar3 = *(long *)(param_3 + 8);
      }
LAB_0010100f:
      if (*(long *)(lVar2 + 0x40) != lVar3) {
        CowData<float>::_ref((CowData<float> *)(lVar2 + 0x40),(CowData *)(param_3 + 8));
      }
      _multimesh_add_to_interpolation_lists(this,param_2,lVar2);
      lVar2 = Engine::get_singleton();
      if (*(char *)(lVar2 + 0x80) == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _physics_interpolation_warning
                    ("multimesh_set_buffer_interpolated",
                     "servers/rendering/storage/mesh_storage.cpp",0xfc,0xffffffffffffffff,
                     "MultiMesh interpolation is being triggered from outside physics process, this might lead to issues"
                    );
          return;
        }
        goto LAB_0010125e;
      }
    }
    else {
      lVar5 = *(long *)(lVar3 + -8);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
LAB_00100fc0:
        lVar8 = *(long *)(lVar8 + -8);
      }
      if (lVar8 == lVar5) goto LAB_00100fcd;
      local_60 = 0;
      local_58 = "Buffer for current frame should have %d elements, got %d instead.";
      local_50 = 0x41;
      String::parse_latin1((StrRange *)&local_60);
      vformat<long,long>((String_conflict *)&local_58,(long)&local_60,lVar8);
      pcVar4 = "Condition \"p_buffer.size() != mmi->_data_curr.size()\" is true.";
      uVar6 = 0xf1;
LAB_00101123:
      _err_print_error("multimesh_set_buffer_interpolated",
                       "servers/rendering/storage/mesh_storage.cpp",uVar6,pcVar4,&local_58,0);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010125e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererMeshStorage::update_interpolation_frame(bool) */

void __thiscall
RendererMeshStorage::update_interpolation_frame(RendererMeshStorage *this,bool param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [12];
  long lVar13;
  undefined1 uVar14;
  CowData<float> *pCVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined1 (*pauVar18) [12];
  long in_FS_OFFSET;
  float fVar19;
  long local_f8;
  Transform3D local_d8 [12];
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  Transform3D local_a8 [12];
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1) {
    lVar4 = Engine::get_singleton();
    fVar19 = (float)*(double *)(lVar4 + 0x60);
    if (*(int *)(this + 8) != 0) {
      local_f8 = 0;
      do {
        lVar4 = *(long *)(this + 0x10);
        lVar5 = (**(code **)(*(long *)this + 0x2a8))(this);
        if (lVar5 != 0) {
          lVar10 = *(long *)(lVar5 + 0x50);
          pauVar18 = *(undefined1 (**) [12])(lVar5 + 0x40);
          if (lVar10 == 0) {
            if (pauVar18 != (undefined1 (*) [12])0x0) {
              lVar6 = *(long *)(pauVar18[-1] + 4);
              if (0 < lVar6) {
                pCVar15 = (CowData<float> *)(lVar5 + 0x50);
                CowData<float>::_copy_on_write(pCVar15);
                uVar14 = SUB81(pCVar15,0);
                lVar13 = 0;
                lVar10 = 0;
LAB_001017d7:
                pCVar15 = (CowData<float> *)(lVar5 + 0x50);
                if (lVar6 * 4 == 0) {
LAB_0010196b:
                  _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                                   "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                                   ,0,0);
                }
                else {
                  uVar7 = lVar6 * 4 - 1;
                  uVar7 = uVar7 | uVar7 >> 1;
                  uVar7 = uVar7 | uVar7 >> 2;
                  uVar7 = uVar7 | uVar7 >> 4;
                  uVar7 = uVar7 | uVar7 >> 8;
                  uVar7 = uVar7 | uVar7 >> 0x10;
                  uVar7 = uVar7 | uVar7 >> 0x20;
                  lVar9 = uVar7 + 1;
                  if (lVar9 == 0) goto LAB_0010196b;
                  if (lVar9 == lVar10) {
LAB_0010185b:
                    puVar11 = *(undefined8 **)(lVar5 + 0x50);
                    if (puVar11 == (undefined8 *)0x0) {
                      update_interpolation_frame((bool)uVar14);
                      return;
                    }
LAB_00101868:
                    puVar11[-1] = lVar6;
                  }
                  else if (lVar13 == 0) {
                    puVar8 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
                    if (puVar8 != (undefined8 *)0x0) {
                      puVar11 = puVar8 + 2;
                      *puVar8 = 1;
                      puVar8[1] = 0;
                      *(undefined8 **)(lVar5 + 0x50) = puVar11;
                      goto LAB_00101868;
                    }
                    _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                     "Parameter \"mem_new\" is null.",0,0);
                  }
                  else {
                    iVar3 = CowData<float>::_realloc(pCVar15,lVar9);
                    uVar14 = SUB81(pCVar15,0);
                    if (iVar3 == 0) goto LAB_0010185b;
                  }
                }
                goto LAB_001018f1;
              }
              goto LAB_001018fa;
            }
LAB_001018c1:
            pauVar18 = (undefined1 (*) [12])0x0;
            lVar6 = 0;
          }
          else {
            lVar13 = *(long *)(lVar10 + -8);
            if (pauVar18 == (undefined1 (*) [12])0x0) {
              if (-1 < lVar13) goto LAB_001018c1;
LAB_00101871:
              LOCK();
              plVar1 = (long *)(lVar10 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)(lVar5 + 0x50);
                *(undefined8 *)(lVar5 + 0x50) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
              else {
                *(undefined8 *)(lVar5 + 0x50) = 0;
              }
LAB_001018f1:
              pauVar18 = *(undefined1 (**) [12])(lVar5 + 0x40);
              if (pauVar18 == (undefined1 (*) [12])0x0) goto LAB_001018c1;
LAB_001018fa:
              lVar6 = *(long *)(pauVar18[-1] + 4);
            }
            else {
              lVar6 = *(long *)(pauVar18[-1] + 4);
              if (lVar13 < lVar6) {
                if (lVar6 < 0) {
                  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                   "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                   ,0,0);
                  goto LAB_001018f1;
                }
                if (lVar6 != 0) {
                  pCVar15 = (CowData<float> *)(lVar5 + 0x50);
                  CowData<float>::_copy_on_write(pCVar15);
                  uVar14 = SUB81(pCVar15,0);
                  lVar10 = lVar13 * 4;
                  if (lVar10 != 0) {
                    uVar7 = lVar10 - 1U | lVar10 - 1U >> 1;
                    uVar7 = uVar7 | uVar7 >> 2;
                    uVar7 = uVar7 | uVar7 >> 4;
                    uVar7 = uVar7 | uVar7 >> 8;
                    uVar7 = uVar7 | uVar7 >> 0x10;
                    lVar10 = (uVar7 | uVar7 >> 0x20) + 1;
                  }
                  goto LAB_001017d7;
                }
                goto LAB_00101871;
              }
            }
          }
          pauVar12 = *(undefined1 (**) [12])(lVar5 + 0x30);
          iVar16 = 0;
          iVar2 = (int)(lVar6 / (long)*(int *)(lVar5 + 8));
          CowData<float>::_copy_on_write((CowData<float> *)(lVar5 + 0x50));
          iVar3 = *(int *)(lVar5 + 0x1c);
          puVar17 = *(undefined4 **)(lVar5 + 0x50);
          local_b8 = 0x3f800000;
          local_b4 = 0;
          local_ac = 0;
          local_88 = 0x3f800000;
          local_84 = 0;
          local_7c = 0;
          local_58 = 0x3f800000;
          local_54 = 0;
          local_4c = 0;
          _local_d8 = ZEXT416(_LC40);
          local_c8 = ZEXT416(_LC40);
          _local_a8 = ZEXT416(_LC40);
          local_98 = ZEXT416(_LC40);
          local_78 = ZEXT416(_LC40);
          local_68 = ZEXT416(_LC40);
          if (0 < iVar2) {
            do {
              while( true ) {
                if (iVar3 == 0) {
                  lVar10 = (long)*(int *)(lVar5 + 0xc);
                  if (0 < *(int *)(lVar5 + 0xc)) {
                    lVar6 = 0;
                    do {
                      *(float *)((long)puVar17 + lVar6) =
                           (*(float *)(*pauVar18 + lVar6) - *(float *)(*pauVar12 + lVar6)) * fVar19
                           + *(float *)(*pauVar12 + lVar6);
                      lVar6 = lVar6 + 4;
                    } while (lVar10 * 4 - lVar6 != 0);
                  }
                }
                else {
                  uStack_cc = *(undefined4 *)(pauVar12[1] + 4);
                  local_d8 = (Transform3D  [12])*pauVar12;
                  local_c8._8_8_ = *(undefined8 *)(pauVar12[2] + 8);
                  local_c8._0_8_ = *(undefined8 *)(pauVar12[1] + 8);
                  local_b8 = *(undefined4 *)(pauVar12[3] + 4);
                  local_b4 = CONCAT44(*(undefined4 *)(pauVar12[2] + 4),*(undefined4 *)pauVar12[1]);
                  local_ac = *(undefined4 *)(pauVar12[3] + 8);
                  uStack_9c = *(undefined4 *)(pauVar18[1] + 4);
                  local_a8 = (Transform3D  [12])*pauVar18;
                  local_88 = *(undefined4 *)(pauVar18[3] + 4);
                  local_98._8_8_ = *(undefined8 *)(pauVar18[2] + 8);
                  local_98._0_8_ = *(undefined8 *)(pauVar18[1] + 8);
                  local_84 = CONCAT44(*(undefined4 *)(pauVar18[2] + 4),*(undefined4 *)pauVar18[1]);
                  local_7c = *(undefined4 *)(pauVar18[3] + 8);
                  TransformInterpolator::interpolate_transform_3d
                            (local_d8,local_a8,(Transform3D *)local_78,fVar19);
                  lVar10 = (long)*(int *)(lVar5 + 0xc);
                  *puVar17 = local_78._0_4_;
                  puVar17[1] = local_78._4_4_;
                  puVar17[2] = local_78._8_4_;
                  puVar17[4] = local_78._12_4_;
                  puVar17[5] = local_68._0_4_;
                  puVar17[6] = local_68._4_4_;
                  *(undefined8 *)(puVar17 + 8) = local_68._8_8_;
                  puVar17[10] = local_58;
                  puVar17[3] = (undefined4)local_54;
                  puVar17[7] = local_54._4_4_;
                  puVar17[0xb] = local_4c;
                }
                pauVar12 = (undefined1 (*) [12])(*pauVar12 + lVar10 * 4);
                pauVar18 = (undefined1 (*) [12])(*pauVar18 + lVar10 * 4);
                puVar17 = puVar17 + lVar10;
                if (*(int *)(lVar5 + 0x10) == 4) {
                  lVar10 = 0;
                  do {
                    *(float *)((long)puVar17 + lVar10) =
                         (*(float *)(*pauVar18 + lVar10) - *(float *)(*pauVar12 + lVar10)) * fVar19
                         + *(float *)(*pauVar12 + lVar10);
                    lVar10 = lVar10 + 4;
                  } while (lVar10 != 0x10);
                  pauVar12 = (undefined1 (*) [12])(pauVar12[1] + 4);
                  pauVar18 = (undefined1 (*) [12])(pauVar18[1] + 4);
                  puVar17 = puVar17 + 4;
                }
                if (*(int *)(lVar5 + 0x14) == 4) break;
                iVar16 = iVar16 + 1;
                if (iVar2 == iVar16) goto LAB_001016f0;
              }
              lVar10 = 0;
              do {
                *(float *)((long)puVar17 + lVar10) =
                     (*(float *)(*pauVar18 + lVar10) - *(float *)(*pauVar12 + lVar10)) * fVar19 +
                     *(float *)(*pauVar12 + lVar10);
                lVar10 = lVar10 + 4;
              } while (lVar10 != 0x10);
              pauVar12 = (undefined1 (*) [12])(pauVar12[1] + 4);
              pauVar18 = (undefined1 (*) [12])(pauVar18[1] + 4);
              puVar17 = puVar17 + 4;
              iVar16 = iVar16 + 1;
            } while (iVar2 != iVar16);
          }
LAB_001016f0:
          (**(code **)(*(long *)this + 0x270))
                    (this,*(undefined8 *)(lVar4 + local_f8 * 8),lVar5 + 0x48);
        }
        local_f8 = local_f8 + 1;
      } while ((uint)local_f8 < *(uint *)(this + 8));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<true>(long) [clone .isra.0] */

void __thiscall CowData<float>::resize<true>(CowData<float> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar12 = 0;
    lVar5 = 0;
  }
  else {
    lVar11 = *(long *)(lVar5 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar5 = 0;
    lVar12 = lVar11 * 4;
    if (lVar12 != 0) {
      uVar4 = lVar12 - 1U | lVar12 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar5 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    lVar9 = uVar4 + 1;
    if (lVar9 != 0) {
      if (param_1 <= lVar11) {
        if ((lVar9 != lVar5) && (iVar3 = _realloc(this,lVar9), iVar3 != 0)) {
          return;
        }
        lVar5 = *(long *)this;
        if (lVar5 == 0) {
          FUN_001022f0();
          return;
        }
        goto LAB_00101b3a;
      }
      if (lVar9 == lVar5) {
LAB_00101b9c:
        puVar10 = *(undefined8 **)this;
      }
      else {
        if (lVar11 != 0) {
          iVar3 = _realloc(this,lVar9);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_00101b9c;
        }
        puVar6 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00101c22;
        }
        puVar10 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar10;
      }
      memset((void *)((long)puVar10 + lVar12),0,(param_1 - lVar11) * 4);
      lVar5 = *(long *)this;
      if (lVar5 == 0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_00101b3a:
      *(long *)(lVar5 + -8) = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101c22:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* RendererMeshStorage::multimesh_allocate_data(RID, int, RenderingServer::MultimeshTransformFormat,
   bool, bool, bool) */

void RendererMeshStorage::multimesh_allocate_data
               (long *param_1,undefined8 param_2,int param_3,int param_4,byte param_5,byte param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x2a8))();
  if (piVar2 != (int *)0x0) {
    *(byte *)((long)piVar2 + 5) = param_6;
    *piVar2 = param_4;
    *(byte *)(piVar2 + 1) = param_5;
    piVar2[6] = param_3;
    iVar1 = (-(uint)(param_4 == 0) & 0xfffffffc) + 0xc;
    iVar3 = iVar1 + (uint)param_5 * 4 + (uint)param_6 * 4;
    lVar4 = (long)(iVar3 * param_3);
    *(ulong *)(piVar2 + 2) = CONCAT44(iVar1,iVar3);
    *(ulong *)(piVar2 + 4) = CONCAT44((uint)param_6 * 4,(uint)param_5 * 4);
    CowData<float>::resize<true>((CowData<float> *)(piVar2 + 0x10),lVar4);
    CowData<float>::resize<true>((CowData<float> *)(piVar2 + 0xc),lVar4);
    CowData<float>::resize<true>((CowData<float> *)(piVar2 + 0x14),lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00101d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererMeshStorage::update_interpolation_frame(bool) [clone .cold] */

void RendererMeshStorage::update_interpolation_frame(bool param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<true>(long) [clone .isra.0] [clone .cold] */

void CowData<float>::resize<true>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001022f0(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x001024c0) */
/* WARNING: Removing unreachable block (ram,0x001025f0) */
/* WARNING: Removing unreachable block (ram,0x00102769) */
/* WARNING: Removing unreachable block (ram,0x001025fc) */
/* WARNING: Removing unreachable block (ram,0x00102606) */
/* WARNING: Removing unreachable block (ram,0x0010274b) */
/* WARNING: Removing unreachable block (ram,0x00102612) */
/* WARNING: Removing unreachable block (ram,0x0010261c) */
/* WARNING: Removing unreachable block (ram,0x0010272d) */
/* WARNING: Removing unreachable block (ram,0x00102628) */
/* WARNING: Removing unreachable block (ram,0x00102632) */
/* WARNING: Removing unreachable block (ram,0x0010270f) */
/* WARNING: Removing unreachable block (ram,0x0010263e) */
/* WARNING: Removing unreachable block (ram,0x00102648) */
/* WARNING: Removing unreachable block (ram,0x001026f1) */
/* WARNING: Removing unreachable block (ram,0x00102654) */
/* WARNING: Removing unreachable block (ram,0x0010265e) */
/* WARNING: Removing unreachable block (ram,0x001026d3) */
/* WARNING: Removing unreachable block (ram,0x00102666) */
/* WARNING: Removing unreachable block (ram,0x00102670) */
/* WARNING: Removing unreachable block (ram,0x001026b8) */
/* WARNING: Removing unreachable block (ram,0x00102678) */
/* WARNING: Removing unreachable block (ram,0x0010268e) */
/* WARNING: Removing unreachable block (ram,0x0010269a) */
/* String vformat<long, long>(String const&, long const, long const) */

String_conflict * vformat<long,long>(String_conflict *param_1,long param_2,long param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_RCX;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)param_2);
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



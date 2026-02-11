
/* ClusterBuilderRD::_clear() [clone .part.0] */

void __thiscall ClusterBuilderRD::_clear(ClusterBuilderRD *this)

{
  undefined8 uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x118));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x110));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  Memory::free_static(*(void **)(this + 0x20),false);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x108));
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  return;
}



/* CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
          (CowData<RenderingDeviceCommons::VertexAttribute> *this)

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
  __n = lVar2 * 0x14;
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



/* CowData<RenderingDevice::AttachmentFormat>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::AttachmentFormat>::_copy_on_write
          (CowData<RenderingDevice::AttachmentFormat> *this)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

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



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

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



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this)

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
  __n = lVar2 * 0x20;
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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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
  __n = lVar2 * 8;
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



/* ClusterBuilderSharedDataRD::~ClusterBuilderSharedDataRD() */

void __thiscall
ClusterBuilderSharedDataRD::~ClusterBuilderSharedDataRD(ClusterBuilderSharedDataRD *this)

{
  undefined8 uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)this);
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x10));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x28));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x38));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x50));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x60));
  ShaderRD::version_free((ShaderRD *)(this + 0x70),*(undefined8 *)(this + 0x1e8));
  ShaderRD::version_free((ShaderRD *)(this + 0x208),*(undefined8 *)(this + 0x380));
  ShaderRD::version_free((ShaderRD *)(this + 0x398),*(undefined8 *)(this + 0x510));
  *(undefined ***)(this + 0x398) = &PTR__ClusterDebugShaderRD_00106100;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x398));
  *(undefined ***)(this + 0x208) = &PTR__ClusterStoreShaderRD_00106140;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x208));
  *(undefined ***)(this + 0x70) = &PTR__ClusterRenderShaderRD_00106120;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x70));
  return;
}



/* ClusterBuilderRD::_clear() */

void __thiscall ClusterBuilderRD::_clear(ClusterBuilderRD *this)

{
  if (*(long *)(this + 0x118) == 0) {
    return;
  }
  _clear(this);
  return;
}



/* ClusterBuilderRD::begin(Transform3D const&, Projection const&, bool) */

void __thiscall
ClusterBuilderRD::begin
          (ClusterBuilderRD *this,Transform3D *param_1,Projection *param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ClusterBuilderRD CVar3;
  long in_FS_OFFSET;
  undefined4 uVar4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Projection local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Transform3D::affine_inverse();
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x30) = local_e8;
  *(undefined8 *)(this + 0x38) = uStack_e0;
  *(undefined8 *)(this + 0x40) = local_d8;
  *(undefined8 *)(this + 0x48) = uStack_d0;
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(undefined8 *)(this + 0xa8) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x50) = local_c8;
  *(undefined8 *)(this + 0x58) = uStack_c0;
  *(undefined8 *)(this + 0xb0) = uVar1;
  *(undefined8 *)(this + 0xb8) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 200) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0xd8) = uVar1;
  uVar4 = Projection::get_z_near();
  *(undefined4 *)(this + 0xe4) = uVar4;
  uVar4 = Projection::get_z_far();
  *(undefined4 *)(this + 0xe0) = uVar4;
  CVar3 = (ClusterBuilderRD)Projection::is_orthogonal();
  this[0xe8] = CVar3;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0xa0);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 200);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0xd8);
  if (CVar3 == (ClusterBuilderRD)0x0) {
    Projection::adjust_perspective_znear(_LC8);
  }
  Projection::Projection(local_b8);
  Projection::set_depth_correction(SUB81(local_b8,0),param_3,true);
  Projection::operator*((Projection *)&local_78,local_b8);
  *(undefined8 *)(this + 0xa0) = local_78;
  *(undefined8 *)(this + 0xa8) = uStack_70;
  *(undefined8 *)(this + 0xb0) = local_68;
  *(undefined8 *)(this + 0xb8) = uStack_60;
  *(undefined8 *)(this + 0xc0) = local_58;
  *(undefined8 *)(this + 200) = uStack_50;
  *(undefined8 *)(this + 0xd0) = local_48;
  *(undefined8 *)(this + 0xd8) = uStack_40;
  Projection::~Projection((Projection *)&local_78);
  Projection::operator*((Projection *)&local_78,local_b8);
  *(undefined8 *)(this + 0x60) = local_78;
  *(undefined8 *)(this + 0x68) = uStack_70;
  *(undefined8 *)(this + 0x70) = local_68;
  *(undefined8 *)(this + 0x78) = uStack_60;
  *(undefined8 *)(this + 0x80) = local_58;
  *(undefined8 *)(this + 0x88) = uStack_50;
  *(undefined8 *)(this + 0x90) = local_48;
  *(undefined8 *)(this + 0x98) = uStack_40;
  Projection::~Projection((Projection *)&local_78);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  Projection::~Projection(local_b8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ClusterBuilderRD::bake_cluster() */

void __thiscall ClusterBuilderRD::bake_cluster(ClusterBuilderRD *this)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long in_FS_OFFSET;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  long local_40;
  
  plVar1 = RenderingServerGlobals::utilities;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_c0 = 0;
    local_b8._8_8_ = 0x11;
    local_b8._0_8_ = "> Bake 3D Cluster";
    String::parse_latin1((StrRange *)&local_c0);
    (*pcVar3)(plVar1);
    lVar7 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  uVar4 = RenderingDevice::get_singleton();
  local_c0 = 0;
  local_a8 = CONCAT44(_LC12,_LC12);
  uStack_a0 = CONCAT44(_LC12,_LC12);
  local_b8._8_8_ = 0x12;
  local_b8._0_8_ = "Bake Light Cluster";
  String::parse_latin1((StrRange *)&local_c0);
  RenderingDevice::draw_command_begin_label(uVar4,(StrRange *)&local_c0,&local_a8);
  lVar7 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_clear(uVar4,*(undefined8 *)(this + 0x118),0,*(undefined4 *)(this + 300));
  if (*(int *)(this + 0x28) != 0) {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_clear(uVar4,*(undefined8 *)(this + 0x110),0);
    local_a8 = *(undefined8 *)(this + 0x60);
    uStack_a0 = *(undefined8 *)(this + 0x68);
    iVar8 = 0;
    local_68 = _LC12 / *(float *)(this + 0xe0);
    local_98 = *(undefined8 *)(this + 0x70);
    uStack_90 = *(undefined8 *)(this + 0x78);
    local_88 = *(undefined8 *)(this + 0x80);
    uStack_80 = *(undefined8 *)(this + 0x88);
    local_78 = *(undefined8 *)(this + 0x90);
    uStack_70 = *(undefined8 *)(this + 0x98);
    if (*(int *)(this + 0xec) != 1) {
      do {
        iVar8 = iVar8 + 1;
        if (iVar8 == 0x20) {
          iVar8 = -1;
          break;
        }
      } while (*(int *)(this + 0xec) != 1 << ((byte)iVar8 & 0x1f));
    }
    uVar9 = *(uint *)(this + 0x2c) >> 5;
    local_64 = CONCAT44(*(undefined4 *)(this + 0x100),iVar8 - *(int *)(this + 0xf4));
    uStack_5c = CONCAT44(uVar9,*(uint *)(this + 0x2c) + uVar9);
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update(uVar4,*(undefined8 *)(this + 0x140),0,0x60,&local_a8);
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update
              (uVar4,*(undefined8 *)(this + 0x120),0,*(int *)(this + 0x28) * 0x50,
               *(undefined8 *)(this + 0x20));
    plVar1 = RenderingServerGlobals::utilities;
    if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
      local_c0 = 0;
      local_b8._8_8_ = 0x1a;
      local_b8._0_8_ = "Render 3D Cluster Elements";
      String::parse_latin1((StrRange *)&local_c0);
      (*pcVar3)(plVar1);
      lVar7 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    uVar4 = RenderingDevice::get_singleton();
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8._8_8_ = 0;
    pvVar5 = (void *)RenderingDevice::draw_list_begin
                               (uVar4,*(undefined8 *)(this + 0x108),0,local_b8,0,&local_a8,0);
    uVar4 = local_b8._8_8_;
    if (local_b8._8_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_b8._8_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8._8_8_ = 0;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
    lVar7 = 0;
    uVar9 = 0;
    local_b8 = (undefined1  [16])0x0;
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_render_pipeline
              (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 0x1f8 + (ulong)(byte)this[0xf0] * 8));
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar4,pvVar5,*(undefined8 *)(this + 0x130),0);
    if (*(int *)(this + 0x28) != 0) {
      do {
        local_b8._0_4_ = uVar9;
        uVar2 = *(uint *)(*(long *)(this + 0x20) + lVar7);
        if (uVar2 == 1) {
          if (((uint *)(*(long *)(this + 0x20) + lVar7))[0x13] != 0) goto LAB_00100efe;
          uVar4 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_vertex_array
                    (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 0x30));
          uVar4 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_index_array
                    (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 0x40));
        }
        else if (uVar2 < 2) {
LAB_00100efe:
          uVar4 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_vertex_array
                    (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 8));
          uVar4 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_index_array
                    (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 0x18));
        }
        else if (uVar2 - 2 < 2) {
          uVar4 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_vertex_array
                    (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 0x58));
          uVar4 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_index_array
                    (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 0x68));
        }
        lVar6 = RenderingDevice::get_singleton();
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x50;
        RenderingDevice::draw_list_set_push_constant(lVar6,pvVar5,(uint)local_b8);
        lVar6 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_draw(lVar6,SUB81(pvVar5,0),1,1);
      } while (uVar9 < *(uint *)(this + 0x28));
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
    plVar1 = RenderingServerGlobals::utilities;
    if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
      local_c0 = 0;
      local_b8._8_8_ = 0x18;
      local_b8._0_8_ = "Pack 3D Cluster Elements";
      String::parse_latin1((StrRange *)&local_c0);
      (*pcVar3)(plVar1);
      lVar7 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    RenderingDevice::get_singleton();
    pvVar5 = (void *)RenderingDevice::compute_list_begin();
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar4,pvVar5,*(undefined8 *)(*(long *)this + 0x390));
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set(uVar4,pvVar5,*(undefined8 *)(this + 0x138),0);
    uStack_90 = 0;
    uStack_a0 = *(undefined8 *)(this + 0x100);
    uVar9 = *(uint *)(this + 0x2c) >> 5;
    local_a8 = CONCAT44(uVar9,*(uint *)(this + 0x2c) + uVar9);
    local_98 = CONCAT44(*(uint *)(this + 0x18) >> 5,*(int *)(this + 0x28) + 0x1fU >> 5);
    lVar7 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar7,pvVar5,(uint)&local_a8);
    lVar7 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch_threads
              (lVar7,(uint)pvVar5,*(uint *)(this + 0x100),*(uint *)(this + 0x104));
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
  }
  plVar1 = RenderingServerGlobals::utilities;
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_c0 = 0;
    local_b8._8_8_ = 0x11;
    local_b8._0_8_ = "< Bake 3D Cluster";
    String::parse_latin1((StrRange *)&local_c0);
    (*pcVar3)(plVar1);
    lVar7 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  uVar4 = RenderingDevice::get_singleton();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  RenderingDevice::draw_command_end_label();
  return;
}



/* ClusterBuilderRD::debug(ClusterBuilderRD::ElementType) */

void __thiscall ClusterBuilderRD::debug(ClusterBuilderRD *this,undefined4 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x148) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("debug","servers/rendering/renderer_rd/cluster_builder_rd.cpp",0x20e,
                       "Condition \"debug_uniform_set.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    RenderingDevice::get_singleton();
    pvVar1 = (void *)RenderingDevice::compute_list_begin();
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar2,pvVar1,*(undefined8 *)(*(long *)this + 0x520));
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set(uVar2,pvVar1,*(undefined8 *)(this + 0x148));
    local_58 = *(undefined8 *)(this + 0xf8);
    uStack_50 = *(undefined8 *)(this + 0x100);
    local_48 = 0;
    if (*(int *)(this + 0xec) != 1) {
      do {
        local_48 = local_48 + 1;
        if (local_48 == 0x20) {
          local_48 = -1;
          break;
        }
      } while (*(int *)(this + 0xec) != 1 << ((byte)local_48 & 0x1f));
    }
    local_38 = (uint)(byte)this[0xe8];
    local_40 = CONCAT44((int)*(undefined8 *)(this + 0xe0),
                        (int)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20));
    local_34 = *(uint *)(this + 0x18) >> 5;
    local_44 = param_2;
    lVar3 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar3,pvVar1,(uint)&local_58);
    lVar3 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch_threads
              (lVar3,(uint)pvVar1,*(uint *)(this + 0xf8),*(uint *)(this + 0xfc));
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ClusterBuilderRD::get_cluster_buffer() const */

undefined8 __thiscall ClusterBuilderRD::get_cluster_buffer(ClusterBuilderRD *this)

{
  return *(undefined8 *)(this + 0x118);
}



/* ClusterBuilderRD::get_cluster_size() const */

undefined4 __thiscall ClusterBuilderRD::get_cluster_size(ClusterBuilderRD *this)

{
  return *(undefined4 *)(this + 0xec);
}



/* ClusterBuilderRD::get_max_cluster_elements() const */

undefined4 __thiscall ClusterBuilderRD::get_max_cluster_elements(ClusterBuilderRD *this)

{
  return *(undefined4 *)(this + 0x18);
}



/* ClusterBuilderRD::set_shared(ClusterBuilderSharedDataRD*) */

void __thiscall
ClusterBuilderRD::set_shared(ClusterBuilderRD *this,ClusterBuilderSharedDataRD *param_1)

{
  *(ClusterBuilderSharedDataRD **)this = param_1;
  return;
}



/* ClusterBuilderRD::ClusterBuilderRD() */

void __thiscall ClusterBuilderRD::ClusterBuilderRD(ClusterBuilderRD *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined1 auStack_28 [8];
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  auVar4 = ZEXT416(_LC12);
  *(undefined1 (*) [16])(this + 0x30) = auVar4;
  *(undefined1 (*) [16])(this + 0x40) = auVar4;
  Projection::Projection((Projection *)(this + 0x60));
  Projection::Projection((Projection *)(this + 0xa0));
  this[0xe8] = (ClusterBuilderRD)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xec) = 0x20;
  this[0xf0] = (ClusterBuilderRD)0x1;
  *(undefined4 *)(this + 0xf4) = 2;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined1 (*) [16])(this + 0x108) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  uVar3 = RenderingDevice::get_singleton();
  local_20 = 0;
  uVar3 = RenderingDevice::uniform_buffer_create(uVar3,0x60,auStack_28,0);
  lVar2 = local_20;
  *(undefined8 *)(this + 0x140) = uVar3;
  if (local_20 != 0) {
    LOCK();
    plVar1 = (long *)(local_20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_20 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ClusterBuilderRD::~ClusterBuilderRD() */

void __thiscall ClusterBuilderRD::~ClusterBuilderRD(ClusterBuilderRD *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x118) != 0) {
    _clear(this);
  }
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x140));
  Projection::~Projection((Projection *)(this + 0xa0));
  Projection::~Projection((Projection *)(this + 0x60));
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::Uniform>::_copy_on_write(CowData<RenderingDevice::Uniform> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar7 = lVar1 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *puVar8 = *puVar6;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar6 + 1);
        uVar2 = puVar6[2];
        puVar8[4] = 0;
        lVar3 = puVar6[4];
        puVar8[2] = uVar2;
        if (lVar3 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar8 + 4),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 5;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00101b76:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00101b76;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_001047d0();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00101acc;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00101acc:
  puVar8[-1] = param_1;
  return;
}



/* Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(RenderingDeviceCommons::PipelineColorBlendState::Attachment)
   [clone .isra.0] */

void Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar1 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
                    ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                     (param_1 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                   (param_1 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x20 + *(long *)(param_1 + 8));
        *puVar2 = in_stack_00000008;
        puVar2[1] = in_stack_00000010;
        puVar2[2] = in_stack_00000018;
        puVar2[3] = in_stack_00000020;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClusterBuilderSharedDataRD::ClusterBuilderSharedDataRD() */

void __thiscall
ClusterBuilderSharedDataRD::ClusterBuilderSharedDataRD(ClusterBuilderSharedDataRD *this)

{
  ShaderRD *this_00;
  long *plVar1;
  ShaderRD *this_01;
  ShaderRD *this_02;
  undefined8 *puVar2;
  char *pcVar3;
  uint *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  Vector *pVVar12;
  undefined8 uVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  Vector *pVVar18;
  ulong uVar19;
  int iVar20;
  size_t sVar21;
  undefined4 uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_180;
  long local_170;
  Vector<String> local_168 [8];
  undefined8 local_160;
  long local_158;
  void *local_150;
  undefined2 local_148;
  undefined1 local_146;
  undefined4 local_144;
  undefined4 uStack_140;
  uint local_13c;
  undefined8 local_138;
  ulong uStack_130;
  undefined4 local_128;
  undefined8 local_118;
  ulong local_110 [2];
  long local_100;
  undefined2 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined1 auStack_a4 [12];
  undefined1 local_98 [4];
  undefined4 local_94;
  long local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_68;
  float local_60 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this_00 = (ShaderRD *)(this + 0x70);
  this_01 = (ShaderRD *)(this + 0x208);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x70) = &PTR__ClusterRenderShaderRD_00106120;
  ShaderRD::setup((char *)this_00,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(location = 0) in vec3 vertex_attrib;\n\nlayout(location = 0) out float depth_interp;\nlayout(location = 1) out flat uint element_index;\n\nlayout(push_constant, std430) uniform Params {\n\tuint base_index;\n\tuint pad0;\n\tuint pad1;\n\tuint pad2;\n}\nparams;\n\nlayout(set = 0, binding = 1, std140) uniform State {\n\tmat4 projection;\n\n\tfloat inv_z_far;\n\tuint screen_to_clusters_shift; \n\tuint cluster_screen_width; \n\tuint cluster_data_size; \n\n\tuint cluster_depth_offset;\n\tuint pad0;\n\tuint pad1;\n\tuint pad2;\n}\nstate;\n\nstruct RenderElement {\n\tuint type; \n\tbool touches_near;\n\tbool touches_far;\n\tuint original_index;\n\tmat3x4 transform_inv;\n\tvec3 scale;\n\tuint pad;\n};\n\nlayout(set = 0, binding = 2, std430) buffer restrict readonly RenderElements {\n\tRenderElement data[];\n}\nrender_elements;\n\nvoid main() {\n\telement_index = params.base_index + gl_InstanceIndex;\n\n\tvec3 vertex = vertex_attrib;\n\tvertex *= render_elements.data[element_index].scale;\n\n\tvertex = vec4(vertex, 1.0) * render_elements.data[element_index].transform_inv;\n\tdepth_interp = -vertex.z;\n\n\tgl_Position = state.projection * vec4(vertex, 1.0);\n}\n\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n#ifndef MOLTENVK_USED \n#if defined(has_GL_KHR_shader_subgroup_ballot) && defined(has_GL_KHR_shader_subgroup_arithmetic) && defined(has_GL_KHR_shader_subgroup_vote)\n\n#extension GL_KHR_shader_subgroup_ballot : enable\n#extension GL_KHR_shader_subgroup_arithmetic : enable\n#extension GL_KHR_shader_subgroup_vote : enable\n\n#define USE_SUBGROUPS\n#endif\n#endif\n\nlayout(location = 0) in float depth_interp;\nlayout(location = 1) in flat uint element_index;\n\nlayout(set = 0, binding = 1, std140) uniform State {\n\tmat4 projection;\n\tfloat inv_z_far;\n\tuint screen_to_clusters_shift; \n\tuint cluster_screen_width; \n\tuint cluster_data_size; \n\tuint cluster_depth_offset;\n\tuint pad0;\n\tuint pad1;\n\tuint pad2;\n}\nstate;\n\n\n\n\n\nlayout(set = 0, binding = 3, std430) buffer restrict ClusterRender {\n\tuint data[];\n}\ncluster_render;\n\n#ifdef USE_ATTACHMENT\nlayout(location = 0) out vec4 frag_color;\n#endif\n\nvoid main() {\n\t\n\tuvec2 cluster = uvec2(gl_FragCoord.xy) >> state.screen_to_clusters_shift;\n\n\t\n\tuint cluster_offset = cluster.x + state.cluster_screen_width * cluster.y;\n\t\n\tcluster_offset *= state.cluster_data_size;\n\n\t\n\tuint usage_write_offset = cluster_offset + (element_index >> 5);\n\tuint usage_write_bit = 1 << (element_index & 0x1F);\n\n\tuint aux = 0;\n\n#ifdef USE_SUBGROUPS\n\n\tuint cluster_thread_group_index;\n\n\tif (!gl_HelperInvocation) {\n\t\t\n\n\t\tuvec4 mask;\n\n\t\twhile (true) {\n\t\t\t\n\t\t\t\n\t\t\tuint first = subgroupBroadcastFirst(cluster_offset);\n\t\t\t\n\t\t\tmask = subgroupBallot(first == cluster_offset);\n\t\t\tif (first == cluster_offset) {\n\t\t\t\t\n\t\t\t\t\n\t\t\t\tbreak;\n\t\t\t}\n\t\t}\n\n\t\tcluster_thread_group_index = subgroupBallotExclusiveBitCount(mask);\n\n\t\tif (cluster_thread_group_index == 0) {\n\t\t\taux = atomicOr(cluster_render.data[usage_write_offset], usage_write_bit);\n\t\t}\n\t}\n#else\n\n#ifndef MOLTENVK_USED\n\tif (!gl_HelperInvocation)\n#endif\n\t{\n\t\taux = atomicOr(cluster_render.data[usage_write_offset], usage_write_bit);\n\t}\n#endif\n\t\n\tfloat unit_depth = depth_interp * state.inv_z_far;\n\n\tuint z_bit = clamp(uint(floor(unit_depth * 32.0)), 0, 31);\n\n\tuint z_write_..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_01);
  *(undefined ***)(this + 0x208) = &PTR__ClusterStoreShaderRD_00106140;
  this_02 = (ShaderRD *)(this + 0x398);
  ShaderRD::setup((char *)this_01,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(push_constant, std430) uniform Params {\n\tuint cluster_render_data_size; \n\tuint max_render_element_count_div_32; \n\tuvec2 cluster_screen_size;\n\tuint render_element_count_div_32; \n\n\tuint max_cluster_element_count_div_32; \n\tuint pad1;\n\tuint pad2;\n}\nparams;\n\nlayout(set = 0, binding = 1, std430) buffer restrict readonly ClusterRender {\n\tuint data[];\n}\ncluster_render;\n\nlayout(set = 0, binding = 2, std430) buffer restrict ClusterStore {\n\tuint data[];\n}\ncluster_store;\n\nstruct RenderElement {\n\tuint type; \n\tbool touches_near;\n\tbool touches_far;\n\tuint original_index;\n\tmat3x4 transform_inv;\n\tvec3 scale;\n\tuint pad;\n};\n\nlayout(set = 0, binding = 3, std430) buffer restrict readonly RenderElements {\n\tRenderElement data[];\n}\nrender_elements;\n\nvoid main() {\n\tuvec2 pos = gl_GlobalInvocationID.xy;\n\tif (any(greaterThanEqual(pos, params.cluster_screen_size))) {\n\t\treturn;\n\t}\n\n\t\n\n\t\n\tuint base_offset = (pos.x + params.cluster_screen_size.x * pos.y);\n\tuint src_offset = base_offset * params.cluster_render_data_size;\n\n\tuint render_element_offset = 0;\n\n\t\n\twhile (render_element_offset < params.render_element_count_div_32) {\n\t\tuint bits = cluster_render.data[src_offset + render_element_offset];\n\t\twhile (bits != 0) {\n\t\t\t\n\t\t\tuint index_bit = findLSB(bits);\n\t\t\tuint index = render_element_offset * 32 + index_bit;\n\t\t\tuint type = render_elements.data[index].type;\n\n\t\t\tuint z_range_offset = src_offset + params.max_render_element_count_div_32 + index;\n\t\t\tuint z_range = cluster_render.data[z_range_offset];\n\n\t\t\t\n\t\t\tif (z_range != 0) { \n\n\t\t\t\tuint from_z = findLSB(z_range);\n\t\t\t\tuint to_z = findMSB(z_range) + 1;\n\n\t\t\t\tif (render_elements.data[index].touches_near) {\n\t\t\t\t\tfrom_z = 0;\n\t\t\t\t}\n\n\t\t\t\tif (render_elements.data[index].touches_far) {\n\t\t\t\t\tto_z = 32;\n\t\t\t\t}\n\n\t\t\t\t\n\t\t\t\tuint dst_offset = (base_offset + type * (params.cluster_screen_size.x * params.cluster_screen_size.y)) * (params.max_cluster_element_count_div_32 + 32);\n\n\t\t\t\tuint orig_index = render_eleme..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined1 (*) [16])(this + 0x380) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_02);
  *(undefined ***)(this + 0x398) = &PTR__ClusterDebugShaderRD_00106100;
  ShaderRD::setup((char *)this_02,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nconst vec3 usage_gradient[33] = vec3[]( \n\t\tvec3(0.14, 0.17, 0.23),\n\t\tvec3(0.24, 0.44, 0.83),\n\t\tvec3(0.23, 0.57, 0.84),\n\t\tvec3(0.22, 0.71, 0.84),\n\t\tvec3(0.22, 0.85, 0.83),\n\t\tvec3(0.21, 0.85, 0.72),\n\t\tvec3(0.21, 0.85, 0.57),\n\t\tvec3(0.20, 0.85, 0.42),\n\t\tvec3(0.20, 0.85, 0.27),\n\t\tvec3(0.27, 0.86, 0.19),\n\t\tvec3(0.51, 0.85, 0.19),\n\t\tvec3(0.57, 0.86, 0.19),\n\t\tvec3(0.62, 0.85, 0.19),\n\t\tvec3(0.67, 0.86, 0.20),\n\t\tvec3(0.73, 0.85, 0.20),\n\t\tvec3(0.78, 0.85, 0.20),\n\t\tvec3(0.83, 0.85, 0.20),\n\t\tvec3(0.85, 0.82, 0.20),\n\t\tvec3(0.85, 0.76, 0.20),\n\t\tvec3(0.85, 0.81, 0.20),\n\t\tvec3(0.85, 0.65, 0.20),\n\t\tvec3(0.84, 0.60, 0.21),\n\t\tvec3(0.84, 0.56, 0.21),\n\t\tvec3(0.84, 0.51, 0.21),\n\t\tvec3(0.84, 0.46, 0.21),\n\t\tvec3(0.84, 0.41, 0.21),\n\t\tvec3(0.84, 0.36, 0.21),\n\t\tvec3(0.84, 0.31, 0.21),\n\t\tvec3(0.84, 0.27, 0.21),\n\t\tvec3(0.83, 0.22, 0.22),\n\t\tvec3(0.83, 0.22, 0.27),\n\t\tvec3(0.83, 0.22, 0.32),\n\t\tvec3(1.00, 0.63, 0.70));\nlayout(push_constant, std430) uniform Params {\n\tuvec2 screen_size;\n\tuvec2 cluster_screen_size;\n\n\tuint cluster_shift;\n\tuint cluster_type;\n\tfloat z_near;\n\tfloat z_far;\n\n\tbool orthogonal;\n\tuint max_cluster_element_count_div_32;\n\tuint pad1;\n\tuint pad2;\n}\nparams;\n\nlayout(set = 0, binding = 1, std430) buffer restrict readonly ClusterData {\n\tuint data[];\n}\ncluster_data;\n\nlayout(rgba16f, set = 0, binding = 2) uniform restrict writeonly image2D screen_buffer;\nlayout(set = 0, binding = 3) uniform texture2D depth_buffer;\nlayout(set = 0, binding = 4) uniform sampler depth_buffer_sampler;\n\nvoid main() {\n\tuvec2 screen_pos = gl_GlobalInvocationID.xy;\n\tif (any(greaterThanEqual(screen_pos, params.screen_size))) {\n\t\treturn;\n\t}\n\n\tuvec2 cluster_pos = screen_pos >> params.cluster_shift;\n\n\tuint offset = cluster_pos.y * params.cluster_screen_size.x + cluster_pos.x;\n\toffset += params.cluster_screen_size.x * params.cluster_screen_size.y * params.cluster_type;\n\toffset *= (params.max_cluster_element_count_div_32 + 32);\n\n\t\n\tfloat depth = texelFetch(sampler2D(de..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined1 (*) [16])(this + 0x510) = (undefined1  [16])0x0;
  uStack_e0 = 0;
  uStack_dc = 0;
  iVar10 = CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>
                     ((CowData<RenderingDeviceCommons::VertexAttribute> *)&uStack_e0,1);
  if (iVar10 == 0) {
    if (CONCAT44(uStack_dc,uStack_e0) == 0) {
      lVar25 = -1;
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(CONCAT44(uStack_dc,uStack_e0) + -8);
      lVar25 = lVar17 + -1;
      if (-1 < lVar25) {
        CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::VertexAttribute> *)&uStack_e0);
        uVar6 = _UNK_00109268;
        uVar13 = __LC45;
        puVar2 = (undefined8 *)(CONCAT44(uStack_dc,uStack_e0) + lVar25 * 0x14);
        *(undefined4 *)(puVar2 + 2) = 0;
        *puVar2 = uVar13;
        puVar2[1] = uVar6;
        goto LAB_00101e9c;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar25,lVar17,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00101e9c:
  pVVar12 = (Vector *)RenderingDevice::get_singleton();
  pVVar12 = (Vector *)RenderingDevice::vertex_format_create(pVVar12);
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_dc,uStack_e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(uStack_dc,uStack_e0);
      uStack_e0 = 0;
      uStack_dc = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  local_98[0] = 0;
  local_94 = 0;
  local_88 = 0;
  local_170 = 0;
  local_80 = __LC46;
  uStack_78 = _UNK_00109278;
  uVar13 = RenderingDevice::get_singleton();
  cVar9 = RenderingDevice::has_feature(uVar13);
  if (cVar9 == '\0') {
    local_110[0] = 0;
    iVar10 = CowData<RenderingDevice::AttachmentFormat>::resize<false>
                       ((CowData<RenderingDevice::AttachmentFormat> *)local_110,1);
    if (iVar10 == 0) {
      if (local_110[0] == 0) {
        lVar25 = -1;
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(local_110[0] - 8);
        lVar25 = lVar17 + -1;
        if (-1 < lVar25) {
          CowData<RenderingDevice::AttachmentFormat>::_copy_on_write
                    ((CowData<RenderingDevice::AttachmentFormat> *)local_110);
          *(undefined8 *)(local_110[0] + lVar25 * 0xc) = 0x24;
          *(undefined4 *)(local_110[0] + 8 + lVar25 * 0xc) = 0;
          goto LAB_001034b6;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar25,lVar17,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_001034b6:
    if (local_110[0] == 0) {
      lVar17 = 0;
LAB_00103b13:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,0,lVar17,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar17 = *(long *)(local_110[0] - 8);
    if (lVar17 < 1) goto LAB_00103b13;
    CowData<RenderingDevice::AttachmentFormat>::_copy_on_write
              ((CowData<RenderingDevice::AttachmentFormat> *)local_110);
    *(undefined4 *)(local_110[0] + 8) = 2;
    pVVar18 = (Vector *)RenderingDevice::get_singleton();
    local_180 = RenderingDevice::framebuffer_format_create(pVVar18,(uint)&local_118);
    local_68 = (local_68 >> 8 & 0xffffff) << 8;
    local_60[2] = 0.0;
    local_60[3] = 0.0;
    local_50 = __LC46;
    uStack_48 = _UNK_00109278;
    uStack_cc = 0x1010101;
    local_e8 = CONCAT31(local_e8._1_3_,1);
    uStack_e4 = (undefined4)__LC47;
    uStack_e0 = (undefined4)((ulong)__LC47 >> 0x20);
    uStack_dc = (undefined4)_UNK_00109288;
    local_d8 = (undefined4)((ulong)_UNK_00109288 >> 0x20);
    uStack_d4 = 7;
    uStack_d0 = 0;
    Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
    lVar25 = local_88;
    lVar17 = CONCAT44(local_60[3],local_60[2]);
    local_98[0] = (undefined1)local_68;
    local_94 = local_68._4_4_;
    if (local_88 == lVar17) {
      local_80 = local_50;
      uStack_78 = uStack_48;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(CONCAT44(local_60[3],local_60[2]) + -0x10),false);
        }
      }
    }
    else {
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar25 + -0x10),false);
        }
        lVar17 = CONCAT44(local_60[3],local_60[2]);
      }
      local_80 = local_50;
      uStack_78 = uStack_48;
      local_88 = lVar17;
    }
    uStack_e0 = 0x18;
    uStack_dc = 0;
    local_e8 = 0x1046d5;
    uStack_e4 = 0;
    String::parse_latin1((StrRange *)&local_170);
    uVar14 = local_110[0];
    if (local_110[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_110[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110[0] = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
  }
  else {
    uVar13 = RenderingDevice::get_singleton();
    local_180 = RenderingDevice::framebuffer_format_create_empty(uVar13);
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    local_68 = (local_68 >> 8 & 0xffffff) << 8;
    local_60[2] = 0.0;
    local_60[3] = 0.0;
    local_50 = __LC46;
    uStack_48 = _UNK_00109278;
    uStack_dc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0x1010101;
    Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
    lVar25 = local_88;
    lVar17 = CONCAT44(local_60[3],local_60[2]);
    local_98[0] = (undefined1)local_68;
    local_94 = local_68._4_4_;
    if (local_88 == lVar17) {
      local_80 = local_50;
      uStack_78 = uStack_48;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(CONCAT44(local_60[3],local_60[2]) + -0x10),false);
        }
      }
    }
    else {
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar25 + -0x10),false);
        }
        lVar17 = CONCAT44(local_60[3],local_60[2]);
      }
      local_80 = local_50;
      uStack_78 = uStack_48;
      local_88 = lVar17;
    }
  }
  local_148 = 1;
  local_138 = __LC46;
  uStack_130 = _UNK_00109278;
  local_146 = 0;
  local_144 = 0;
  uStack_140 = 0;
  local_13c = local_13c & 0xffffff00;
  local_128 = 1;
  local_160 = 0;
  local_118 = 0;
  local_e8 = 0x10468d;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back(local_168);
  uVar14 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(uVar14 - 0x10),false);
    }
  }
  uStack_e0 = 0;
  uStack_dc = 0;
  ShaderRD::initialize((Vector *)this_00,local_168,(Vector *)&local_170);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
  uVar14 = ShaderRD::version_create();
  *(ulong *)(this + 0x1e8) = uVar14;
  if (*(long *)(this + 0x88) != 0) {
    lVar17 = *(long *)(*(long *)(this + 0x88) + -8);
    if (lVar17 < 1) goto LAB_00103724;
    pcVar3 = *(char **)(this + 0x98);
    if (pcVar3 != (char *)0x0) {
      lVar17 = *(long *)(pcVar3 + -8);
      if (lVar17 < 1) goto LAB_0010368e;
      if (*pcVar3 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar13 = 0;
        goto LAB_00102228;
      }
      if ((uVar14 == 0) || (*(uint *)(this + 0x144) <= (uint)uVar14)) {
LAB_00103a1f:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar13 = 0;
        goto LAB_00102228;
      }
      lVar25 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x140)) * 0xa0 +
               *(long *)(*(long *)(this + 0x130) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x140)) * 8);
      if (*(int *)(lVar25 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar25 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00103a1f;
      }
      iVar10 = (int)lVar25;
      if (*(char *)(lVar25 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_00);
        lVar17 = *(long *)(this + 0xe8);
        if (lVar17 != 0) {
          lVar26 = 0;
          do {
            if (*(long *)(lVar17 + -8) <= lVar26) break;
            if (*(char *)(lVar17 + lVar26) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_00,iVar10);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_00,iVar10);
            }
            lVar17 = *(long *)(this + 0xe8);
            lVar26 = lVar26 + 1;
          } while (lVar17 != 0);
        }
      }
      puVar4 = *(uint **)(this + 0xa8);
      if (puVar4 == (uint *)0x0) goto LAB_0010368b;
      lVar17 = *(long *)(puVar4 + -2);
      if (lVar17 < 1) goto LAB_0010368e;
      uVar14 = (ulong)*puVar4;
      lVar26 = *(long *)(lVar25 + 0x68);
      if (lVar26 != 0) {
        lVar17 = *(long *)(lVar26 + -8);
        if (lVar17 <= (long)uVar14) goto LAB_001036a4;
        if (*(long *)(lVar26 + uVar14 * 8) != 0) {
          ShaderRD::_compile_version_end((Version *)this_00,iVar10);
        }
        if (*(char *)(lVar25 + 0x90) != '\0') {
          puVar2 = *(undefined8 **)(lVar25 + 0x88);
          if (puVar2 == (undefined8 *)0x0) goto LAB_0010368b;
          lVar17 = puVar2[-1];
          if (0 < lVar17) {
            uVar13 = *puVar2;
            goto LAB_00102228;
          }
          goto LAB_0010368e;
        }
        goto LAB_00103756;
      }
LAB_001039f3:
      lVar17 = 0;
      goto LAB_001036a4;
    }
LAB_0010368b:
    lVar17 = 0;
    goto LAB_0010368e;
  }
  lVar17 = 0;
LAB_00103724:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar17,
             "p_variant","variant_defines.size()","",false,false);
LAB_00103756:
  uVar13 = 0;
LAB_00102228:
  *(undefined8 *)(this + 0x1f0) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  local_150 = (void *)0x0;
  local_f8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  local_b8 = 0;
  auStack_a4 = SUB1612((undefined1  [16])0x0,4);
  uStack_e4 = 7;
  local_118 = local_118 & 0xffffff0000000000;
  local_110[0] = local_110[0] & 0xffffffff00000000;
  local_100 = 0;
  uStack_d0 = (undefined4)__LC64;
  uStack_cc = (undefined4)((ulong)__LC64 >> 0x20);
  local_c8._8_8_ = 0;
  local_c8._0_8_ = _UNK_00109298;
  uStack_b4 = __LC64;
  uStack_ac = (undefined4)_UNK_00109298;
  local_a8 = (undefined4)(_UNK_00109298 >> 0x20);
  uVar13 = RenderingDevice::render_pipeline_create
                     (uVar13,*(undefined8 *)(this + 0x1f0),local_180,pVVar12,5,
                      (Vector<String> *)&local_148,(StrRange *)&local_118,&local_e8,local_98,0,0,
                      (StrRange *)&local_158);
  lVar17 = local_100;
  *(undefined8 *)(this + 0x1f8) = uVar13;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  pvVar7 = local_150;
  if (local_150 != (void *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_150 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_150 = (void *)0x0;
      Memory::free_static((void *)((long)pvVar7 + -0x10),false);
    }
  }
  uVar14 = local_118 >> 0x20;
  local_f8 = 0;
  local_110[0] = local_110[0] & 0xffffffff00000000;
  local_100 = 0;
  local_118 = CONCAT44((uint)uVar14 & 0xffffff00,2);
  uVar13 = RenderingDevice::get_singleton();
  local_150 = (void *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  local_b8 = 0;
  auStack_a4 = SUB1612((undefined1  [16])0x0,4);
  uStack_e4 = 7;
  uStack_d0 = (undefined4)__LC64;
  uStack_cc = (undefined4)((ulong)__LC64 >> 0x20);
  local_c8._8_8_ = 0;
  local_c8._0_8_ = _UNK_00109298;
  uStack_b4 = __LC64;
  uStack_ac = (undefined4)_UNK_00109298;
  local_a8 = (undefined4)(_UNK_00109298 >> 0x20);
  uVar13 = RenderingDevice::render_pipeline_create
                     (uVar13,*(undefined8 *)(this + 0x1f0),local_180,pVVar12,5,
                      (Vector<String> *)&local_148,(StrRange *)&local_118,&local_e8,local_98,0,0,
                      (StrRange *)&local_158);
  pvVar7 = local_150;
  *(undefined8 *)(this + 0x200) = uVar13;
  if (local_150 != (void *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_150 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_150 = (void *)0x0;
      Memory::free_static((void *)((long)pvVar7 + -0x10),false);
    }
  }
  lVar17 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_160);
  lVar17 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  lVar17 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  uStack_140 = 0;
  local_13c = 0;
  local_118 = 0;
  local_e8 = 0x10468d;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_148);
  uVar14 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(uVar14 - 0x10),false);
    }
  }
  local_110[0] = 0;
  local_158 = 0;
  local_e8 = 0x10468d;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  String::parse_latin1((StrRange *)&local_158);
  ShaderRD::initialize((Vector *)this_01,(Vector<String> *)&local_148,(Vector *)&local_158);
  lVar17 = local_158;
  if (local_158 != 0) {
    LOCK();
    plVar1 = (long *)(local_158 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_158 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_110);
  uVar14 = ShaderRD::version_create();
  *(ulong *)(this + 0x380) = uVar14;
  if (*(long *)(this + 0x220) != 0) {
    lVar17 = *(long *)(*(long *)(this + 0x220) + -8);
    if (lVar17 < 1) goto LAB_00103763;
    pcVar3 = *(char **)(this + 0x230);
    if (pcVar3 == (char *)0x0) goto LAB_0010368b;
    lVar17 = *(long *)(pcVar3 + -8);
    if (lVar17 < 1) goto LAB_0010368e;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar13 = 0;
      goto LAB_0010272d;
    }
    if ((uVar14 == 0) || (*(uint *)(this + 0x2dc) <= (uint)uVar14)) {
LAB_00103b89:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar13 = 0;
      goto LAB_0010272d;
    }
    lVar25 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x2d8)) * 0xa0 +
             *(long *)(*(long *)(this + 0x2c8) +
                      ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x2d8)) * 8);
    if (*(int *)(lVar25 + 0x98) != (int)(uVar14 >> 0x20)) {
      if (*(int *)(lVar25 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00103b89;
    }
    iVar10 = (int)lVar25;
    if (*(char *)(lVar25 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_01);
      lVar17 = *(long *)(this + 0x280);
      if (lVar17 != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(lVar17 + -8) <= lVar26) break;
          if (*(char *)(lVar17 + lVar26) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_01,iVar10);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_01,iVar10);
          }
          lVar17 = *(long *)(this + 0x280);
          lVar26 = lVar26 + 1;
        } while (lVar17 != 0);
      }
    }
    puVar4 = *(uint **)(this + 0x240);
    if (puVar4 == (uint *)0x0) goto LAB_0010368b;
    lVar17 = *(long *)(puVar4 + -2);
    if (0 < lVar17) {
      uVar14 = (ulong)*puVar4;
      lVar26 = *(long *)(lVar25 + 0x68);
      if (lVar26 == 0) goto LAB_001039f3;
      lVar17 = *(long *)(lVar26 + -8);
      if (lVar17 <= (long)uVar14) goto LAB_001036a4;
      if (*(long *)(lVar26 + uVar14 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_01,iVar10);
      }
      if (*(char *)(lVar25 + 0x90) != '\0') {
        puVar2 = *(undefined8 **)(lVar25 + 0x88);
        if (puVar2 == (undefined8 *)0x0) goto LAB_0010368b;
        lVar17 = puVar2[-1];
        if (0 < lVar17) {
          uVar13 = *puVar2;
          goto LAB_0010272d;
        }
        goto LAB_0010368e;
      }
      goto LAB_00103795;
    }
    goto LAB_0010368e;
  }
  lVar17 = 0;
LAB_00103763:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar17,
             "p_variant","variant_defines.size()","",false,false);
LAB_00103795:
  uVar13 = 0;
LAB_0010272d:
  *(undefined8 *)(this + 0x388) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  uStack_e0 = 0;
  uStack_dc = 0;
  uVar13 = RenderingDevice::compute_pipeline_create(uVar13,*(undefined8 *)(this + 0x388),&local_e8);
  *(undefined8 *)(this + 0x390) = uVar13;
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_dc,uStack_e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(uStack_dc,uStack_e0);
      uStack_e0 = 0;
      uStack_dc = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&uStack_140);
  uStack_140 = 0;
  local_13c = 0;
  local_118 = 0;
  local_e8 = 0x10468d;
  uVar22 = local_e8;
  uStack_e4 = 0;
  uVar8 = uStack_e4;
  uStack_e0 = 0;
  uStack_dc = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_148);
  uVar14 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(uVar14 - 0x10),false);
    }
  }
  local_110[0] = 0;
  local_158 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_e8 = uVar22;
  uStack_e4 = uVar8;
  String::parse_latin1((StrRange *)&local_158);
  ShaderRD::initialize((Vector *)this_02,(Vector<String> *)&local_148,(Vector *)&local_158);
  lVar17 = local_158;
  if (local_158 != 0) {
    LOCK();
    plVar1 = (long *)(local_158 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_158 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_110);
  uVar14 = ShaderRD::version_create();
  *(ulong *)(this + 0x510) = uVar14;
  if (*(long *)(this + 0x3b0) == 0) {
    lVar17 = 0;
LAB_00103ad5:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar17,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar17 = *(long *)(*(long *)(this + 0x3b0) + -8);
    if (lVar17 < 1) goto LAB_00103ad5;
    pcVar3 = *(char **)(this + 0x3c0);
    if (pcVar3 == (char *)0x0) goto LAB_0010368b;
    lVar17 = *(long *)(pcVar3 + -8);
    if (lVar17 < 1) goto LAB_0010368e;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar13 = 0;
      goto LAB_001029be;
    }
    if ((uVar14 == 0) || (*(uint *)(this + 0x46c) <= (uint)uVar14)) {
LAB_00103c32:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar13 = 0;
      goto LAB_001029be;
    }
    lVar25 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x468)) * 0xa0 +
             *(long *)(*(long *)(this + 0x458) +
                      ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x468)) * 8);
    if (*(int *)(lVar25 + 0x98) != (int)(uVar14 >> 0x20)) {
      if (*(int *)(lVar25 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00103c32;
    }
    iVar10 = (int)lVar25;
    if (*(char *)(lVar25 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_02);
      lVar17 = *(long *)(this + 0x410);
      if (lVar17 != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(lVar17 + -8) <= lVar26) break;
          if (*(char *)(lVar17 + lVar26) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_02,iVar10);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_02,iVar10);
          }
          lVar17 = *(long *)(this + 0x410);
          lVar26 = lVar26 + 1;
        } while (lVar17 != 0);
      }
    }
    puVar4 = *(uint **)(this + 0x3d0);
    if (puVar4 == (uint *)0x0) goto LAB_0010368b;
    lVar17 = *(long *)(puVar4 + -2);
    if (lVar17 < 1) {
LAB_0010368e:
      uVar14 = 0;
LAB_001036a4:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar17,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar14 = (ulong)*puVar4;
    lVar26 = *(long *)(lVar25 + 0x68);
    if (lVar26 == 0) goto LAB_001039f3;
    lVar17 = *(long *)(lVar26 + -8);
    if (lVar17 <= (long)uVar14) goto LAB_001036a4;
    if (*(long *)(lVar26 + uVar14 * 8) != 0) {
      ShaderRD::_compile_version_end((Version *)this_02,iVar10);
    }
    if (*(char *)(lVar25 + 0x90) != '\0') {
      puVar2 = *(undefined8 **)(lVar25 + 0x88);
      if (puVar2 == (undefined8 *)0x0) goto LAB_0010368b;
      lVar17 = puVar2[-1];
      if (0 < lVar17) {
        uVar13 = *puVar2;
        goto LAB_001029be;
      }
      goto LAB_0010368e;
    }
  }
  uVar13 = 0;
LAB_001029be:
  *(undefined8 *)(this + 0x518) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  uStack_e0 = 0;
  uStack_dc = 0;
  uVar13 = RenderingDevice::compute_pipeline_create(uVar13,*(undefined8 *)(this + 0x518),&local_e8);
  *(undefined8 *)(this + 0x520) = uVar13;
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_dc,uStack_e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(uStack_dc,uStack_e0);
      uStack_e0 = 0;
      uStack_dc = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&uStack_140);
  local_150 = (void *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_150,0x1f8);
  if (local_150 == (void *)0x0) {
    sVar21 = 0;
  }
  else {
    sVar21 = *(size_t *)((long)local_150 + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_150);
  memcpy(local_150,ClusterBuilderSharedDataRD()::icosphere_vertices,sVar21);
  uVar13 = RenderingDevice::get_singleton();
  if (local_150 == (void *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined4 *)((long)local_150 + -8);
  }
  uVar13 = RenderingDevice::vertex_buffer_create(uVar13,uVar22,(StrRange *)&local_158,0);
  uStack_140 = 0;
  local_13c = 0;
  *(undefined8 *)this = uVar13;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&uStack_140,0x1e0);
  if (CONCAT44(local_13c,uStack_140) == 0) {
    sVar21 = 0;
  }
  else {
    sVar21 = *(size_t *)(CONCAT44(local_13c,uStack_140) + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&uStack_140);
  memcpy((void *)CONCAT44(local_13c,uStack_140),
         &ClusterBuilderSharedDataRD()::icosphere_triangle_indices,sVar21);
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_buffer_create(uVar13,0xf0,0,(Vector<String> *)&local_148,0,0);
  local_110[0] = 0;
  *(undefined8 *)(this + 0x10) = uVar13;
  Vector<RID>::push_back((Vector<RID> *)&local_118,*(undefined8 *)this);
  uVar11 = RenderingDevice::get_singleton();
  uStack_e0 = 0;
  uStack_dc = 0;
  uVar13 = RenderingDevice::vertex_array_create(uVar11,0x2a,pVVar12,(Vector *)&local_118);
  *(undefined8 *)(this + 8) = uVar13;
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_dc,uStack_e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(uStack_dc,uStack_e0);
      uStack_e0 = 0;
      uStack_dc = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x10),0);
  uVar14 = local_110[0];
  fVar30 = _LC41;
  uVar19 = 0;
  *(undefined8 *)(this + 0x18) = uVar13;
  do {
    local_60[0] = 0.0;
    local_68 = 0;
    local_60[1] = 0.0;
    local_60[2] = 0.0;
    local_60[3] = 0.0;
    local_50 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    pfVar16 = (float *)&local_68;
    uVar24 = uVar19;
    do {
      pfVar15 = pfVar16 + 3;
      lVar17 = (ulong)((uint)(ushort)(&ClusterBuilderSharedDataRD()::icosphere_triangle_indices)
                                     [uVar24] +
                      (uint)(ushort)(&ClusterBuilderSharedDataRD()::icosphere_triangle_indices)
                                    [uVar24] * 2) * 4;
      *(undefined8 *)pfVar16 =
           *(undefined8 *)(ClusterBuilderSharedDataRD()::icosphere_vertices + lVar17);
      pfVar16[2] = *(float *)(ClusterBuilderSharedDataRD()::icosphere_vertices + lVar17 + 8);
      pfVar16 = pfVar15;
      uVar24 = (ulong)((int)uVar24 + 1);
    } while ((float *)((long)&uStack_48 + 4) != pfVar15);
    fVar28 = ((float)local_68 - local_60[1]) * (local_60[0] - (float)uStack_48) -
             ((float)local_68 - (float)local_50) * (local_60[0] - local_60[3]);
    fVar27 = (local_68._4_4_ - local_50._4_4_) * (local_60[0] - local_60[3]) -
             (local_60[0] - (float)uStack_48) * (local_68._4_4_ - local_60[2]);
    fVar33 = ((float)local_68 - (float)local_50) * (local_68._4_4_ - local_60[2]) -
             (local_68._4_4_ - local_50._4_4_) * ((float)local_68 - local_60[1]);
    fVar29 = fVar27 * fVar27 + fVar28 * fVar28 + fVar33 * fVar33;
    if (fVar29 == 0.0) {
      fVar33 = 0.0;
      fVar28 = 0.0;
      fVar27 = 0.0;
    }
    else {
      fVar29 = SQRT(fVar29);
      fVar27 = fVar27 / fVar29;
      fVar28 = fVar28 / fVar29;
      fVar33 = fVar33 / fVar29;
    }
    uVar11 = (int)uVar19 + 3;
    uVar19 = (ulong)uVar11;
    fVar27 = ABS(fVar27 * (float)local_68 + fVar28 * local_68._4_4_ + fVar33 * local_60[0]);
    if (fVar30 <= fVar27) {
      fVar27 = fVar30;
    }
    fVar30 = fVar27;
  } while (uVar11 != 0xf0);
  *(float *)(this + 0x20) = _LC12 / fVar30;
  if (local_110[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_110[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110[0] = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  if (CONCAT44(local_13c,uStack_140) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(local_13c,uStack_140) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(local_13c,uStack_140);
      uStack_140 = 0;
      local_13c = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  pvVar7 = local_150;
  if (local_150 != (void *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_150 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_150 = (void *)0x0;
      Memory::free_static((void *)((long)pvVar7 + -0x10),false);
    }
  }
  local_150 = (void *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_150,0x4a4);
  if (local_150 == (void *)0x0) {
    sVar21 = 0;
  }
  else {
    sVar21 = *(size_t *)((long)local_150 + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_150);
  memcpy(local_150,ClusterBuilderSharedDataRD()::cone_vertices,sVar21);
  uVar13 = RenderingDevice::get_singleton();
  if (local_150 == (void *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined4 *)((long)local_150 + -8);
  }
  uVar13 = RenderingDevice::vertex_buffer_create(uVar13,uVar22,(StrRange *)&local_158,0);
  uStack_140 = 0;
  local_13c = 0;
  *(undefined8 *)(this + 0x28) = uVar13;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&uStack_140,0x174);
  if (CONCAT44(local_13c,uStack_140) == 0) {
    sVar21 = 0;
  }
  else {
    sVar21 = *(size_t *)(CONCAT44(local_13c,uStack_140) + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&uStack_140);
  memcpy((void *)CONCAT44(local_13c,uStack_140),&ClusterBuilderSharedDataRD()::cone_triangle_indices
         ,sVar21);
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_buffer_create(uVar13,0xba,0,(Vector<String> *)&local_148,0,0);
  local_110[0] = 0;
  *(undefined8 *)(this + 0x38) = uVar13;
  Vector<RID>::push_back((Vector<RID> *)&local_118,*(undefined8 *)(this + 0x28));
  uVar11 = RenderingDevice::get_singleton();
  uStack_e0 = 0;
  uStack_dc = 0;
  uVar13 = RenderingDevice::vertex_array_create(uVar11,99,pVVar12,(Vector *)&local_118);
  *(undefined8 *)(this + 0x30) = uVar13;
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_dc,uStack_e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(uStack_dc,uStack_e0);
      uStack_e0 = 0;
      uStack_dc = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x38),0,0xba);
  uVar14 = local_110[0];
  fVar30 = _LC41;
  iVar10 = 0;
  *(undefined8 *)(this + 0x40) = uVar13;
  do {
    local_60[0] = 0.0;
    iVar20 = 0;
    iVar23 = -1;
    local_68 = 0;
    local_60[1] = 0.0;
    local_60[2] = 0.0;
    local_60[3] = 0.0;
    local_50 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    pfVar16 = (float *)&local_68;
    do {
      lVar17 = (ulong)((uint)(ushort)(&ClusterBuilderSharedDataRD()::cone_triangle_indices)
                                     [(uint)(iVar10 + iVar20)] +
                      (uint)(ushort)(&ClusterBuilderSharedDataRD()::cone_triangle_indices)
                                    [(uint)(iVar10 + iVar20)] * 2) * 4;
      *(undefined8 *)pfVar16 = *(undefined8 *)(ClusterBuilderSharedDataRD()::cone_vertices + lVar17)
      ;
      pfVar16[2] = *(float *)(ClusterBuilderSharedDataRD()::cone_vertices + lVar17 + 8);
      if (((*pfVar16 == 0.0) && (pfVar16[1] == 0.0)) && (pfVar16[2] == 0.0)) {
        iVar23 = iVar20;
      }
      iVar20 = iVar20 + 1;
      pfVar16 = pfVar16 + 3;
    } while (iVar20 != 3);
    fVar27 = fVar30;
    if (iVar23 != -1) {
      lVar17 = (long)((iVar23 + 1) % 3);
      lVar25 = lVar17 * 0xc;
      fVar27 = local_60[lVar17 * 3];
      fVar28 = *(float *)((long)&local_68 + lVar25);
      fVar33 = *(float *)((long)&local_68 + lVar25 + 4);
      fVar29 = fVar27 - (fVar27 + _LC12);
      lVar17 = (long)((iVar23 + 2) % 3);
      fVar31 = fVar33 - (fVar33 + 0.0);
      fVar35 = fVar28 - *(float *)((long)&local_68 + lVar17 * 0xc);
      fVar36 = fVar33 - *(float *)((long)&local_68 + lVar17 * 0xc + 4);
      fVar34 = fVar28 - (fVar28 + 0.0);
      fVar32 = fVar31 * (fVar27 - local_60[lVar17 * 3]) - fVar29 * fVar36;
      fVar29 = fVar35 * fVar29 - fVar34 * (fVar27 - local_60[lVar17 * 3]);
      fVar31 = fVar34 * fVar36 - fVar31 * fVar35;
      fVar34 = fVar32 * fVar32 + fVar29 * fVar29 + fVar31 * fVar31;
      if (fVar34 == 0.0) {
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar29 = fVar32;
      }
      else {
        fVar34 = SQRT(fVar34);
        fVar29 = fVar29 / fVar34;
        fVar32 = fVar32 / fVar34;
        fVar31 = fVar31 / fVar34;
      }
      fVar27 = ABS(fVar28 * fVar32 + fVar29 * fVar33 + fVar31 * fVar27);
      if (fVar30 <= fVar27) {
        fVar27 = fVar30;
      }
    }
    iVar10 = iVar10 + 3;
    fVar30 = fVar27;
  } while (iVar10 != 0xba);
  *(float *)(this + 0x48) = _LC12 / fVar27;
  if (local_110[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_110[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110[0] = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  if (CONCAT44(local_13c,uStack_140) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(local_13c,uStack_140) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(local_13c,uStack_140);
      uStack_140 = 0;
      local_13c = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  pvVar7 = local_150;
  if (local_150 != (void *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_150 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_150 = (void *)0x0;
      Memory::free_static((void *)((long)pvVar7 + -0x10),false);
    }
  }
  local_150 = (void *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_150,0x60);
  if (local_150 == (void *)0x0) {
    sVar21 = 0;
  }
  else {
    sVar21 = *(size_t *)((long)local_150 + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_150);
  memcpy(local_150,ClusterBuilderSharedDataRD()::box_vertices,sVar21);
  uVar13 = RenderingDevice::get_singleton();
  if (local_150 == (void *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined4 *)((long)local_150 + -8);
  }
  uVar13 = RenderingDevice::vertex_buffer_create(uVar13,uVar22,(StrRange *)&local_158,0);
  uStack_140 = 0;
  local_13c = 0;
  *(undefined8 *)(this + 0x50) = uVar13;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&uStack_140,0x48);
  if (CONCAT44(local_13c,uStack_140) == 0) {
    sVar21 = 0;
  }
  else {
    sVar21 = *(size_t *)(CONCAT44(local_13c,uStack_140) + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&uStack_140);
  memcpy((void *)CONCAT44(local_13c,uStack_140),ClusterBuilderSharedDataRD()::box_triangle_indices,
         sVar21);
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_buffer_create(uVar13,0x24,0,(Vector<String> *)&local_148,0,0);
  local_110[0] = 0;
  *(undefined8 *)(this + 0x60) = uVar13;
  Vector<RID>::push_back((Vector<RID> *)&local_118,*(undefined8 *)(this + 0x50));
  uVar11 = RenderingDevice::get_singleton();
  uStack_e0 = 0;
  uStack_dc = 0;
  uVar13 = RenderingDevice::vertex_array_create(uVar11,8,pVVar12,(Vector *)&local_118);
  *(undefined8 *)(this + 0x58) = uVar13;
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_dc,uStack_e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(uStack_dc,uStack_e0);
      uStack_e0 = 0;
      uStack_dc = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x60),0,0x24);
  uVar14 = local_110[0];
  *(undefined8 *)(this + 0x68) = uVar13;
  if (local_110[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_110[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110[0] = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  if (CONCAT44(local_13c,uStack_140) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(local_13c,uStack_140) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = CONCAT44(local_13c,uStack_140);
      uStack_140 = 0;
      local_13c = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  pvVar7 = local_150;
  if (local_150 != (void *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_150 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_150 = (void *)0x0;
      Memory::free_static((void *)((long)pvVar7 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<RenderingDevice::Uniform>::push_back(RenderingDevice::Uniform) [clone .isra.0] */

void __thiscall
Vector<RenderingDevice::Uniform>::push_back
          (Vector<RenderingDevice::Uniform> *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDevice::Uniform>::resize<false>
                    ((CowData<RenderingDevice::Uniform> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDevice::Uniform>::_copy_on_write
                  ((CowData<RenderingDevice::Uniform> *)(this + 8));
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar4 * 0x28);
        *puVar1 = *param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
        puVar1[2] = param_2[2];
        if (puVar1[4] == param_2[4]) {
          return;
        }
        CowData<RID>::_ref((CowData<RID> *)(puVar1 + 4),(CowData *)(param_2 + 4));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* ClusterBuilderRD::setup(Vector2i, unsigned int, RID, RID, RID) */

void __thiscall
ClusterBuilderRD::setup
          (ClusterBuilderRD *this,undefined8 param_2,uint param_3,undefined8 param_4,
          undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 local_90;
  Vector<RenderingDevice::Uniform> local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  long local_68;
  undefined8 local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = param_2;
  if (param_3 == 0) {
    _err_print_error("setup","servers/rendering/renderer_rd/cluster_builder_rd.cpp",0x107,
                     "Condition \"p_max_elements == 0\" is true.",0,0);
  }
  else {
    local_90._0_4_ = (int)param_2;
    if ((int)local_90 < 1) {
      _err_print_error("setup","servers/rendering/renderer_rd/cluster_builder_rd.cpp",0x108,
                       "Condition \"p_screen_size.x < 1\" is true.",0,0);
    }
    else {
      local_90._4_4_ = (int)((ulong)param_2 >> 0x20);
      if (local_90._4_4_ < 1) {
        _err_print_error("setup","servers/rendering/renderer_rd/cluster_builder_rd.cpp",0x109,
                         "Condition \"p_screen_size.y < 1\" is true.",0,0);
      }
      else {
        iVar8 = local_90._4_4_;
        uVar5 = param_2;
        if (*(long *)(this + 0x118) != 0) {
          _clear(this);
          iVar8 = local_90._4_4_;
          uVar5 = local_90;
        }
        local_90 = uVar5;
        uVar4 = *(uint *)(this + 0xec);
        *(undefined8 *)(this + 0xf8) = local_90;
        uVar3 = (int)local_90 + (uVar4 - 1);
        uVar3 = uVar3 / uVar4;
        uVar4 = (iVar8 + (uVar4 - 1)) / uVar4;
        *(uint *)(this + 0x100) = uVar3;
        if ((param_3 & 0x1f) != 0) {
          param_3 = (param_3 & 0xffffffe0) + 0x20;
        }
        *(uint *)(this + 0x18) = param_3;
        uVar7 = param_3 * 4;
        *(uint *)(this + 0x2c) = uVar7;
        iVar8 = uVar3 * uVar4;
        *(uint *)(this + 0x104) = uVar4;
        *(uint *)(this + 300) = ((param_3 >> 5) + 0x20) * iVar8 * 0x10;
        *(uint *)(this + 0x128) = ((uVar7 >> 5) + uVar7) * iVar8 * 4;
        uVar5 = RenderingDevice::get_singleton();
        local_70 = 0;
        uVar5 = RenderingDevice::storage_buffer_create
                          (uVar5,*(undefined4 *)(this + 0x128),&local_78,0,0);
        uVar2 = local_70;
        *(undefined8 *)(this + 0x110) = uVar5;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(uVar2 + -0x10),false);
          }
        }
        uVar5 = RenderingDevice::get_singleton();
        local_70 = 0;
        uVar5 = RenderingDevice::storage_buffer_create
                          (uVar5,*(undefined4 *)(this + 300),&local_78,0,0);
        uVar2 = local_70;
        *(undefined8 *)(this + 0x118) = uVar5;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(uVar2 + -0x10),false);
          }
        }
        uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x2c) * 0x50,false);
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = uVar5;
        uVar5 = RenderingDevice::get_singleton();
        local_70 = 0;
        uVar5 = RenderingDevice::storage_buffer_create
                          (uVar5,*(int *)(this + 0x2c) * 0x50,&local_78,0,0);
        uVar2 = local_70;
        *(undefined8 *)(this + 0x120) = uVar5;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 - 0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(uVar2 - 0x10),false);
          }
        }
        iVar8 = 1 << ((byte)*(undefined4 *)(this + 0xf4) & 0x1f);
        if (this[0xf0] == (ClusterBuilderRD)0x0) {
          uVar5 = RenderingDevice::get_singleton();
          local_48 = Vector2i::operator/((Vector2i *)&local_90,iVar8);
          uVar5 = RenderingDevice::framebuffer_create_empty(uVar5,&local_48,0,0xffffffffffffffff);
          *(undefined8 *)(this + 0x108) = uVar5;
        }
        else {
          uVar5 = RenderingDevice::get_singleton();
          local_48 = Vector2i::operator/((Vector2i *)&local_90,iVar8);
          uVar5 = RenderingDevice::framebuffer_create_empty(uVar5,&local_48,2,0xffffffffffffffff);
          *(undefined8 *)(this + 0x108) = uVar5;
        }
        local_70 = local_70 & 0xffffffffffffff00;
        local_68 = *(long *)(this + 0x140);
        local_80 = 0;
        local_58 = 0;
        local_78 = _LC71;
        Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
        local_70 = local_70 & 0xffffffffffffff00;
        local_68 = *(long *)(this + 0x120);
        local_58 = 0;
        local_78 = _LC72;
        Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
        local_70 = local_70 & 0xffffffffffffff00;
        local_68 = *(long *)(this + 0x110);
        local_58 = 0;
        local_78 = _LC73;
        Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
        uVar5 = RenderingDevice::get_singleton();
        uVar5 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                          (uVar5,local_88,*(undefined8 *)(*(long *)this + 0x1f0),0,0);
        *(undefined8 *)(this + 0x130) = uVar5;
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_80);
        uVar5 = _LC74;
        local_70 = local_70 & 0xffffffffffffff00;
        local_68 = *(long *)(this + 0x110);
        local_80 = 0;
        local_58 = 0;
        local_78 = _LC74;
        Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
        local_70 = local_70 & 0xffffffffffffff00;
        local_68 = *(long *)(this + 0x118);
        local_58 = 0;
        local_78 = _LC72;
        Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
        local_70 = local_70 & 0xffffffffffffff00;
        local_68 = *(long *)(this + 0x120);
        local_58 = 0;
        local_78 = _LC73;
        Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
        uVar6 = RenderingDevice::get_singleton();
        uVar6 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                          (uVar6,local_88,*(undefined8 *)(*(long *)this + 0x388),0,0);
        *(undefined8 *)(this + 0x138) = uVar6;
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_80);
        if (param_6 == 0) {
          *(undefined8 *)(this + 0x148) = 0;
        }
        else {
          local_68 = *(long *)(this + 0x118);
          local_80 = 0;
          local_78 = uVar5;
          local_70 = local_70 & 0xffffffffffffff00;
          local_58 = 0;
          Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
          local_70 = local_70 & 0xffffffffffffff00;
          local_58 = 0;
          local_78 = _LC75;
          local_68 = param_6;
          Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
          local_70 = local_70 & 0xffffffffffffff00;
          local_58 = 0;
          local_78 = _LC76;
          local_68 = param_4;
          Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
          local_70 = local_70 & 0xffffffffffffff00;
          local_58 = 0;
          local_78 = _LC77;
          local_68 = param_5;
          Vector<RenderingDevice::Uniform>::push_back(local_88,&local_78);
          uVar5 = RenderingDevice::get_singleton();
          uVar5 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                            (uVar5,local_88,*(undefined8 *)(*(long *)this + 0x518),0,0);
          *(undefined8 *)(this + 0x148) = uVar5;
          CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_80);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ClusterRenderShaderRD::~ClusterRenderShaderRD() */

void __thiscall ClusterRenderShaderRD::~ClusterRenderShaderRD(ClusterRenderShaderRD *this)

{
  *(undefined ***)this = &PTR__ClusterRenderShaderRD_00106120;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ClusterRenderShaderRD::~ClusterRenderShaderRD() */

void __thiscall ClusterRenderShaderRD::~ClusterRenderShaderRD(ClusterRenderShaderRD *this)

{
  *(undefined ***)this = &PTR__ClusterRenderShaderRD_00106120;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* ClusterStoreShaderRD::~ClusterStoreShaderRD() */

void __thiscall ClusterStoreShaderRD::~ClusterStoreShaderRD(ClusterStoreShaderRD *this)

{
  *(undefined ***)this = &PTR__ClusterStoreShaderRD_00106140;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ClusterStoreShaderRD::~ClusterStoreShaderRD() */

void __thiscall ClusterStoreShaderRD::~ClusterStoreShaderRD(ClusterStoreShaderRD *this)

{
  *(undefined ***)this = &PTR__ClusterStoreShaderRD_00106140;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* ClusterDebugShaderRD::~ClusterDebugShaderRD() */

void __thiscall ClusterDebugShaderRD::~ClusterDebugShaderRD(ClusterDebugShaderRD *this)

{
  *(undefined ***)this = &PTR__ClusterDebugShaderRD_00106100;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ClusterDebugShaderRD::~ClusterDebugShaderRD() */

void __thiscall ClusterDebugShaderRD::~ClusterDebugShaderRD(ClusterDebugShaderRD *this)

{
  *(undefined ***)this = &PTR__ClusterDebugShaderRD_00106100;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDevice::AttachmentFormat>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::AttachmentFormat>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::Uniform>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001047d0(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00104e60:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00104e60;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00104d39:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00104d39;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00104eb6;
  }
  if (lVar10 == lVar7) {
LAB_00104ddf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00104eb6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00104dca;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00104ddf;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_00104dca:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00105170:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00105170;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_001050dc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00105071;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001050dc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00105071:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RenderingDevice::Uniform>::_unref() */

void __thiscall CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_realloc
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>(long)
    */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x20;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_001055e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x20 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_001055e0;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar8 = _realloc(this,lVar11), (int)uVar8 != 0)) {
      return uVar8;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar11 == lVar4) {
LAB_0010554c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_001054e3;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_0010554c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar4 = 0;
  }
  uVar3 = _LC37;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 4);
LAB_001054e3:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RenderingDeviceCommons::VertexAttribute>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::VertexAttribute>::_realloc
          (CowData<RenderingDeviceCommons::VertexAttribute> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>
          (CowData<RenderingDeviceCommons::VertexAttribute> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar12 = 0;
    lVar4 = 0;
  }
  else {
    lVar12 = *(long *)(lVar4 + -8);
    if (param_1 == lVar12) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar12 * 0x14;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  lVar11 = param_1 * 0x14;
  if (lVar11 == 0) {
LAB_00105920:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = lVar11 - 1U >> 1 | lVar11 - 1U;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar10 = uVar5 + 1;
  if (lVar10 == 0) goto LAB_00105920;
  if (param_1 <= lVar12) {
    if ((lVar10 != lVar4) && (uVar8 = _realloc(this,lVar10), (int)uVar8 != 0)) {
      return uVar8;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar10 == lVar4) {
LAB_0010588c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_0010581c;
  }
  else {
    if (lVar12 != 0) {
      uVar8 = _realloc(this,lVar10);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_0010588c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar4 = 0;
  }
  uVar3 = _UNK_00109258;
  uVar8 = __LC38;
  puVar6 = (undefined8 *)((long)puVar9 + lVar4 * 0x14);
  do {
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar7 = (undefined8 *)((long)puVar6 + 0x14);
    *puVar6 = uVar8;
    puVar6[1] = uVar3;
    puVar6 = puVar7;
  } while ((undefined8 *)(lVar11 + (long)puVar9) != puVar7);
LAB_0010581c:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RenderingDevice::AttachmentFormat>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::AttachmentFormat>::_realloc
          (CowData<RenderingDevice::AttachmentFormat> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDevice::AttachmentFormat>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::AttachmentFormat>::resize<false>
          (CowData<RenderingDevice::AttachmentFormat> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar3 = 0;
  }
  else {
    lVar11 = *(long *)(lVar3 + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar11 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  lVar10 = param_1 * 0xc;
  if (lVar10 == 0) {
LAB_00105c60:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00105c60;
  if (param_1 <= lVar11) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar9 == lVar3) {
LAB_00105bcc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00105b5b;
  }
  else {
    if (lVar11 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00105bcc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  uVar7 = _LC39;
  puVar5 = (undefined8 *)((long)puVar8 + lVar3 * 0xc);
  do {
    *puVar5 = uVar7;
    puVar6 = (undefined8 *)((long)puVar5 + 0xc);
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined8 *)(lVar10 + (long)puVar8));
LAB_00105b5b:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<RenderingDevice::Uniform>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::_realloc(CowData<RenderingDevice::Uniform> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::resize<false>
          (CowData<RenderingDevice::Uniform> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar8 * 0x28;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00106000:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x28 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_00106000;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00105e91:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar2 = lVar8 + uVar10 * 0x28;
        if (*(long *)(lVar2 + 0x20) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00105e91;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x20) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_00106056;
  }
  if (lVar11 == lVar9) {
LAB_00105f73:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00106056:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00105f50;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00105f73;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar8 = 0;
  }
  uVar4 = _LC66;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00105f50:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* ClusterDebugShaderRD::~ClusterDebugShaderRD() */

void __thiscall ClusterDebugShaderRD::~ClusterDebugShaderRD(ClusterDebugShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ClusterStoreShaderRD::~ClusterStoreShaderRD() */

void __thiscall ClusterStoreShaderRD::~ClusterStoreShaderRD(ClusterStoreShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ClusterRenderShaderRD::~ClusterRenderShaderRD() */

void __thiscall ClusterRenderShaderRD::~ClusterRenderShaderRD(ClusterRenderShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



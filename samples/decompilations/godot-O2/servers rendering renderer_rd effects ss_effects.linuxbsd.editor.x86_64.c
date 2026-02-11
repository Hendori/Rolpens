
/* unsigned int UniformSetCacheRD::_hash_args<RenderingDevice::Uniform>(unsigned int,
   RenderingDevice::Uniform const&, RenderingDevice::Uniform) [clone .isra.0] */

uint UniformSetCacheRD::_hash_args<RenderingDevice::Uniform>(uint param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  param_1 = (*param_2 * 0x16a88000 | (uint)(*param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ param_1;
  uVar2 = (param_1 << 0xd | param_1 >> 0x13) * 5 + 0xe6546b64 ^
          (param_2[1] * 0x16a88000 | (uint)(param_2[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar6 = (ulong)((uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64);
  lVar5 = *(long *)(param_2 + 4);
  if (lVar5 == 0) {
    if ((*(long *)(param_2 + 8) == 0) ||
       (uVar7 = *(ulong *)(*(long *)(param_2 + 8) + -8), uVar9 = uVar7 & 0xffffffff, (int)uVar7 == 0
       )) {
LAB_001000f0:
      uVar2 = ((uint)(uVar6 >> 0x10) ^ (uint)uVar6) * -0x7a143595;
      uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
      uVar4 = (*param_3 * 0x16a88000 | (uint)(*param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar2;
      uVar2 = ((uVar2 >> 0x10 ^ uVar4) << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64 ^
              (param_3[1] * 0x16a88000 | (uint)(param_3[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar6 = (ulong)((uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64);
      lVar5 = *(long *)(param_3 + 4);
      if (lVar5 == 0) {
        if ((*(long *)(param_3 + 8) == 0) ||
           (uVar7 = *(ulong *)(*(long *)(param_3 + 8) + -8), uVar9 = uVar7 & 0xffffffff,
           (int)uVar7 == 0)) {
LAB_00100260:
          uVar2 = ((uint)(uVar6 >> 0x10) ^ (uint)uVar6) * -0x7a143595;
          uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
          return uVar2 ^ uVar2 >> 0x10;
        }
      }
      else {
        uVar9 = 1;
      }
      uVar7 = 0;
      do {
        uVar2 = (uint)uVar6;
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 8);
          if (lVar5 == 0) {
LAB_00100208:
            lVar8 = 0;
LAB_0010020b:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar8,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar8 = *(long *)(lVar5 + -8);
          if (lVar8 <= (long)uVar7) goto LAB_0010020b;
          lVar5 = *(long *)(lVar5 + uVar7 * 8);
LAB_00100189:
          iVar3 = (int)((ulong)lVar5 >> 0x20);
          uVar4 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593;
          uVar2 = uVar2 ^ ((int)lVar5 * 0x16a88000 | (uint)((int)lVar5 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
        }
        else {
          if (uVar7 == 0) goto LAB_00100189;
          _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                           "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
          uVar4 = 0;
        }
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
        uVar6 = (ulong)((uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64);
        if (uVar7 == uVar9) goto LAB_00100260;
        lVar5 = *(long *)(param_3 + 4);
      } while( true );
    }
  }
  else {
    uVar9 = 1;
  }
  uVar7 = 0;
  do {
    uVar2 = (uint)uVar6;
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_2 + 8);
      if (lVar5 == 0) goto LAB_00100208;
      lVar8 = *(long *)(lVar5 + -8);
      if (lVar8 <= (long)uVar7) goto LAB_0010020b;
      lVar5 = *(long *)(lVar5 + uVar7 * 8);
LAB_00100081:
      iVar3 = (int)((ulong)lVar5 >> 0x20);
      uVar4 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar2 = uVar2 ^ ((int)lVar5 * 0x16a88000 | (uint)((int)lVar5 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
    else {
      if (uVar7 == 0) goto LAB_00100081;
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      uVar4 = 0;
    }
    uVar7 = uVar7 + 1;
    uVar4 = uVar4 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
    uVar6 = (ulong)((uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64);
    if (uVar9 == uVar7) goto LAB_001000f0;
    lVar5 = *(long *)(param_2 + 4);
  } while( true );
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



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] [clone .constprop.0] */

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



/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
    */

void __thiscall
CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
          (CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this)

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



/* RendererRD::SSEffects::~SSEffects() */

void __thiscall RendererRD::SSEffects::~SSEffects(SSEffects *this)

{
  undefined8 uVar1;
  
  ShaderRD::version_free((ShaderRD *)(this + 0x1208),*(undefined8 *)(this + 0x1380));
  ShaderRD::version_free((ShaderRD *)(this + 0x13b0),*(undefined8 *)(this + 0x1528));
  ShaderRD::version_free((ShaderRD *)(this + 0x1078),*(undefined8 *)(this + 0x11f0));
  if (*(long *)(this + 0x13a8) != 0) {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x13a8));
  }
  ShaderRD::version_free((ShaderRD *)(this + 0x60),*(undefined8 *)(this + 0x1d8));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x1f0));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x1e8));
  ShaderRD::version_free((ShaderRD *)(this + 0x5e8),*(undefined8 *)(this + 0x760));
  ShaderRD::version_free((ShaderRD *)(this + 0x2b0),*(undefined8 *)(this + 0x428));
  ShaderRD::version_free((ShaderRD *)(this + 0x778),*(undefined8 *)(this + 0x8f0));
  ShaderRD::version_free((ShaderRD *)(this + 0x448),*(undefined8 *)(this + 0x5c0));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x5c8));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x430));
  ShaderRD::version_free((ShaderRD *)(this + 0xd08),*(undefined8 *)(this + 0xe80));
  ShaderRD::version_free((ShaderRD *)(this + 0x9d8),*(undefined8 *)(this + 0xb50));
  ShaderRD::version_free((ShaderRD *)(this + 0xe98),*(undefined8 *)(this + 0x1010));
  ShaderRD::version_free((ShaderRD *)(this + 0xb68),*(undefined8 *)(this + 0xce0));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0xce8));
  ShaderRD::version_free((ShaderRD *)(this + 0x1580),*(undefined8 *)(this + 0x16f8));
  singleton = 0;
  *(undefined ***)(this + 0x1580) = &PTR__SubsurfaceScatteringShaderRD_00121b88;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x1580));
  *(undefined ***)(this + 0x13b0) = &PTR__ScreenSpaceReflectionFilterShaderRD_00121a28;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x13b0));
  *(undefined ***)(this + 0x1208) = &PTR__ScreenSpaceReflectionShaderRD_00121a08;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x1208));
  *(undefined ***)(this + 0x1078) = &PTR__ScreenSpaceReflectionScaleShaderRD_00121a48;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x1078));
  *(undefined ***)(this + 0xe98) = &PTR__SsaoInterleaveShaderRD_00121ae8;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xe98));
  *(undefined ***)(this + 0xd08) = &PTR__SsaoBlurShaderRD_00121aa8;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xd08));
  *(undefined ***)(this + 0xb68) = &PTR__SsaoImportanceMapShaderRD_00121ac8;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xb68));
  *(undefined ***)(this + 0x9d8) = &PTR__SsaoShaderRD_00121a88;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x9d8));
  *(undefined ***)(this + 0x778) = &PTR__SsilInterleaveShaderRD_00121b68;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x778));
  *(undefined ***)(this + 0x5e8) = &PTR__SsilBlurShaderRD_00121b28;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x5e8));
  *(undefined ***)(this + 0x448) = &PTR__SsilImportanceMapShaderRD_00121b48;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x448));
  *(undefined ***)(this + 0x2b0) = &PTR__SsilShaderRD_00121b08;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x2b0));
  *(undefined ***)(this + 0x60) = &PTR__SsEffectsDownsampleShaderRD_00121a68;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x60));
  return;
}



/* RendererRD::SSEffects::ssil_set_quality(RenderingServer::EnvironmentSSILQuality, bool, float,
   int, float, float) */

void __thiscall
RendererRD::SSEffects::ssil_set_quality
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,SSEffects *this,
          undefined4 param_5,SSEffects param_6,undefined4 param_7)

{
  *(undefined4 *)(this + 0x18) = param_5;
  this[0x1c] = param_6;
  *(undefined4 *)(this + 0x24) = param_7;
  *(undefined4 *)(this + 0x20) = param_1;
  *(ulong *)(this + 0x28) = CONCAT44(param_3,param_2);
  return;
}



/* RendererRD::SSEffects::ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,
   RendererRD::SSEffects::SSILRenderBuffers&, RendererRD::SSEffects::SSILSettings const&) */

void __thiscall
RendererRD::SSEffects::ssil_allocate_buffers
          (SSEffects *this,undefined8 *param_2,SSEffects *param_3,long param_4)

{
  StringName *pSVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  SSEffects SVar8;
  int iVar9;
  long in_FS_OFFSET;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar15;
  ulong uVar16;
  undefined1 local_58 [16];
  long local_40;
  int iVar14;
  
  SVar8 = this[0x1c];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != SVar8) {
    pSVar1 = (StringName *)*param_2;
    if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
        ::{lambda()#1}::operator()()::sname == '\0') {
      iVar9 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                   ::{lambda()#1}::operator()()::sname);
      if (iVar9 != 0) {
        _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#1}::operator()()::sname);
      }
    }
    RenderSceneBuffersRD::clear_context(pSVar1);
    SVar8 = this[0x1c];
  }
  iVar9 = *(int *)(param_4 + 0x10);
  iVar4 = *(int *)(param_4 + 0x14);
  *param_3 = SVar8;
  iVar12 = (int)*(undefined8 *)(param_4 + 0x10);
  iVar2 = (int)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20);
  iVar14 = (int)(iVar2 + _LC13._4_4_ + (-(uint)((int)(iVar2 + _LC13._4_4_) < 0) & _LC13._4_4_)) >> 2
  ;
  uVar13 = CONCAT44(iVar14,(int)(iVar12 + (uint)_LC13 +
                                (-(uint)((int)(iVar12 + (uint)_LC13) < 0) & (uint)_LC13)) >> 2);
  if (SVar8 == (SSEffects)0x0) {
    uVar10 = (ulong)(uint)((iVar9 + 1) / 2);
    iVar4 = (iVar4 + 1) / 2;
    uVar16 = CONCAT44((int)(iVar2 + _LC15._4_4_ + (uint)(iVar2 + _LC15._4_4_ < 0)) >> 1,
                      (int)(iVar12 + (int)_LC15 + (uint)(iVar12 + (int)_LC15 < 0)) >> 1);
    uVar15 = uVar13;
    uVar11 = uVar13;
    iVar9 = iVar14;
  }
  else {
    iVar7 = iVar9 + 7;
    if (iVar9 + 7 < 0) {
      iVar7 = iVar9 + 0xe;
    }
    iVar9 = iVar4 + 7;
    if (iVar4 + 7 < 0) {
      iVar9 = iVar4 + 0xe;
    }
    uVar16 = uVar13;
    uVar15 = CONCAT44((int)(iVar2 + _LC14._4_4_ +
                           (_LC14._4_4_ & -(uint)((int)(iVar2 + _LC14._4_4_) < 0))) >> 3,
                      (int)(iVar12 + (uint)_LC14 +
                           ((uint)_LC14 & -(uint)((int)(iVar12 + (uint)_LC14) < 0))) >> 3);
    uVar11 = (ulong)(uint)(iVar7 >> 3);
    uVar10 = uVar13;
    iVar9 = iVar9 >> 3;
    iVar4 = iVar14;
  }
  pSVar1 = (StringName *)*param_2;
  *(ulong *)(param_3 + 4) = CONCAT44(iVar4,(int)uVar10);
  *(ulong *)(param_3 + 0xc) = CONCAT44(iVar9,(int)uVar11);
  iVar9 = *(int *)(pSVar1 + 0x1a8);
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#3}::operator()()::sname);
    }
  }
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#2}::operator()()::sname);
    }
  }
  cVar3 = RenderSceneBuffersRD::has_texture
                    (pSVar1,(StringName *)
                            &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#2}::operator()()::sname);
  if (cVar3 == '\0') {
    uVar5 = *param_2;
    if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
        ::{lambda()#5}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                   ::{lambda()#5}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                      ::{lambda()#5}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#5}::operator()()::sname);
      }
    }
    if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
        ::{lambda()#4}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                   ::{lambda()#4}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                      ::{lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#4}::operator()()::sname);
      }
    }
    uVar5 = RenderSceneBuffersRD::create_texture
                      (uVar5,&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#4}::operator()()::sname,
                       &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                        ::{lambda()#5}::operator()()::sname,0x60,0x109,0,0,0,1,1,0);
    uVar6 = RenderingDevice::get_singleton();
    local_58 = (undefined1  [16])0x0;
    RenderingDevice::texture_clear(uVar6,uVar5,local_58,0,1,0,iVar9);
  }
  pSVar1 = (StringName *)*param_2;
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#7}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#7}::operator()()::sname);
    }
  }
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#6}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#6}::operator()()::sname);
    }
  }
  cVar3 = RenderSceneBuffersRD::has_texture
                    (pSVar1,(StringName *)
                            &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#6}::operator()()::sname);
  if (cVar3 == '\0') {
    uVar5 = *param_2;
    if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
        ::{lambda()#9}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                   ::{lambda()#9}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                      ::{lambda()#9}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#9}::operator()()::sname);
      }
    }
    if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
        ::{lambda()#8}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                   ::{lambda()#8}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                      ::{lambda()#8}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#8}::operator()()::sname);
      }
    }
    uVar5 = RenderSceneBuffersRD::create_texture
                      (uVar5,&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#8}::operator()()::sname,
                       &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                        ::{lambda()#9}::operator()()::sname,0x60,0x109,0,
                       *(undefined8 *)(param_4 + 0x10),0,6,1,0);
    uVar6 = RenderingDevice::get_singleton();
    local_58 = (undefined1  [16])0x0;
    RenderingDevice::texture_clear(uVar6,uVar5,local_58,0,6,0,iVar9);
  }
  uVar5 = *param_2;
  iVar9 = iVar9 << 2;
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#11}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#11}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#11}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#11}::operator()()::sname);
    }
  }
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#10}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#10}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#10}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#10}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (uVar5,&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#10}::operator()()::sname,
             &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
              ::{lambda()#11}::operator()()::sname,0x60,9,0,uVar16,iVar9,1,1,0);
  uVar5 = *param_2;
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#13}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#13}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#13}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#13}::operator()()::sname);
    }
  }
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#12}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#12}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#12}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#12}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#12}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (uVar5,&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#12}::operator()()::sname,
             &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
              ::{lambda()#13}::operator()()::sname,0x60,9,0,uVar16,iVar9,1,1,0);
  uVar5 = *param_2;
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#15}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#15}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#15}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#15}::operator()()::sname);
    }
  }
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#14}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#14}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#14}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#14}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (uVar5,&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#14}::operator()()::sname,
             &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
              ::{lambda()#15}::operator()()::sname,8,9,0,uVar16,iVar9,1,1,0);
  uVar5 = *param_2;
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#17}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#17}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#17}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#17}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#17}::operator()()::sname);
    }
  }
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#16}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#16}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#16}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#16}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#16}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (uVar5,&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#16}::operator()()::sname,
             &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
              ::{lambda()#17}::operator()()::sname,8,9,0,uVar15,0,1,1,0);
  uVar5 = *param_2;
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#19}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#19}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#19}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#19}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#19}::operator()()::sname);
    }
  }
  if (ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#18}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                                 ::{lambda()#18}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#18}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#18}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#18}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (uVar5,&ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#18}::operator()()::sname,
             &ssil_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,RendererRD::SSEffects::SSILSettings_const&)
              ::{lambda()#19}::operator()()::sname,8,9,0,uVar15,0,1,1,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SSEffects::ssao_set_quality(RenderingServer::EnvironmentSSAOQuality, bool, float,
   int, float, float) */

void __thiscall
RendererRD::SSEffects::ssao_set_quality
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,SSEffects *this,
          undefined4 param_5,SSEffects param_6,undefined4 param_7)

{
  *(undefined4 *)this = param_5;
  this[4] = param_6;
  *(undefined4 *)(this + 0xc) = param_7;
  *(undefined4 *)(this + 8) = param_1;
  *(ulong *)(this + 0x10) = CONCAT44(param_3,param_2);
  return;
}



/* RendererRD::SSEffects::ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,
   RendererRD::SSEffects::SSAORenderBuffers&, RendererRD::SSEffects::SSAOSettings const&) */

void __thiscall
RendererRD::SSEffects::ssao_allocate_buffers
          (SSEffects *this,long *param_2,SSEffects *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  StringName *pSVar3;
  int iVar4;
  SSEffects SVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar12;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  SVar5 = this[4];
  if (*param_3 != SVar5) {
    pSVar3 = (StringName *)*param_2;
    if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
        ::{lambda()#1}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                   ::{lambda()#1}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                             ::{lambda()#1}::operator()()::sname);
      }
    }
    RenderSceneBuffersRD::clear_context(pSVar3);
    SVar5 = this[4];
  }
  iVar7 = *(int *)(param_4 + 0x18);
  iVar8 = *(int *)(param_4 + 0x1c);
  *param_3 = SVar5;
  iVar10 = (int)*(undefined8 *)(param_4 + 0x18);
  iVar4 = (int)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20);
  iVar12 = (int)(iVar4 + _LC13._4_4_ + (-(uint)((int)(iVar4 + _LC13._4_4_) < 0) & _LC13._4_4_)) >> 2
  ;
  uVar11 = CONCAT44(iVar12,(int)(iVar10 + (uint)_LC13 +
                                (-(uint)((int)(iVar10 + (uint)_LC13) < 0) & (uint)_LC13)) >> 2);
  if (SVar5 == (SSEffects)0x0) {
    uVar9 = (ulong)(uint)((iVar7 + 1) / 2);
    uVar15 = CONCAT44((int)(iVar4 + _LC15._4_4_ + (uint)(iVar4 + _LC15._4_4_ < 0)) >> 1,
                      (int)(iVar10 + (int)_LC15 + (uint)(iVar10 + (int)_LC15 < 0)) >> 1);
    iVar8 = (iVar8 + 1) / 2;
    uVar14 = uVar11;
    uVar13 = uVar11;
    iVar7 = iVar12;
  }
  else {
    iVar6 = iVar7 + 0xe;
    if (-1 < iVar7 + 7) {
      iVar6 = iVar7 + 7;
    }
    iVar7 = iVar8 + 7;
    if (iVar8 + 7 < 0) {
      iVar7 = iVar8 + 0xe;
    }
    uVar15 = uVar11;
    uVar14 = CONCAT44((int)(iVar4 + _LC14._4_4_ +
                           (-(uint)((int)(iVar4 + _LC14._4_4_) < 0) & _LC14._4_4_)) >> 3,
                      (int)(iVar10 + (uint)_LC14 +
                           (-(uint)((int)(iVar10 + (uint)_LC14) < 0) & (uint)_LC14)) >> 3);
    uVar13 = (ulong)(uint)(iVar6 >> 3);
    uVar9 = uVar11;
    iVar7 = iVar7 >> 3;
    iVar8 = iVar12;
  }
  lVar2 = *param_2;
  *(ulong *)(param_3 + 4) = CONCAT44(iVar8,(int)uVar9);
  *(ulong *)(param_3 + 0xc) = CONCAT44(iVar7,(int)uVar13);
  iVar7 = *(int *)(lVar2 + 0x1a8) * 4;
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#3}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#3}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#3}::operator()()::sname);
    }
  }
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#2}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#2}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#2}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar2,&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#2}::operator()()::sname,
             &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
              ::{lambda()#3}::operator()()::sname,0xf,9,0,uVar15,iVar7,1,1,0);
  lVar2 = *param_2;
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#5}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#5}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#5}::operator()()::sname);
    }
  }
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#4}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#4}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#4}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar2,&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#4}::operator()()::sname,
             &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
              ::{lambda()#5}::operator()()::sname,0xf,9,0,uVar15,iVar7,1,1,0);
  lVar2 = *param_2;
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#7}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#7}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#7}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#7}::operator()()::sname);
    }
  }
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#6}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#6}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#6}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#6}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar2,&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#6}::operator()()::sname,
             &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
              ::{lambda()#7}::operator()()::sname,8,9,0,uVar14,0,1,1,0);
  lVar2 = *param_2;
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#9}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#9}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#9}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#9}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#9}::operator()()::sname);
    }
  }
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#8}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#8}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#8}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#8}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar2,&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#8}::operator()()::sname,
             &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
              ::{lambda()#9}::operator()()::sname,8,9,0,uVar14,0,1,1,0);
  lVar2 = *param_2;
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#11}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#11}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#11}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#11}::operator()()::sname);
    }
  }
  if (ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#10}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                                 ::{lambda()#10}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#10}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#10}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar2,&ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#10}::operator()()::sname,
             &ssao_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,RendererRD::SSEffects::SSAOSettings_const&)
              ::{lambda()#11}::operator()()::sname,8,9,0,0,0,1,1,0);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SSEffects::ssr_set_roughness_quality(RenderingServer::EnvironmentSSRRoughnessQuality)
    */

void __thiscall RendererRD::SSEffects::ssr_set_roughness_quality(SSEffects *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x30) = param_2;
  return;
}



/* RendererRD::SSEffects::ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,
   RendererRD::SSEffects::SSRRenderBuffers&, RenderingDeviceCommons::DataFormat) */

void __thiscall
RendererRD::SSEffects::ssr_allocate_buffers
          (SSEffects *this,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  StringName *pSVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)(this + 0x30);
  if (*(int *)(param_3 + 1) != iVar6) {
    pSVar4 = (StringName *)*param_2;
    if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
        ::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                   ::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                             ::{lambda()#1}::operator()()::sname);
      }
    }
    RenderSceneBuffersRD::clear_context(pSVar4);
    iVar6 = *(int *)(this + 0x30);
  }
  lVar3 = *param_2;
  lVar1 = *(long *)(lVar3 + 0x1ac);
  *(int *)(param_3 + 1) = iVar6;
  *param_3 = CONCAT44((int)((int)((ulong)lVar1 >> 0x20) + (uint)(lVar1 < 0)) >> 1,
                      (int)((int)lVar1 + (uint)((int)lVar1 < 0)) >> 1);
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#3}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#3}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#3}::operator()()::sname);
    }
  }
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#2}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#2}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#2}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar3,&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#2}::operator()()::sname,
             &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
              ::{lambda()#3}::operator()()::sname,99,8,0,*param_3,1,1,1,0);
  lVar1 = *param_2;
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#5}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#5}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#5}::operator()()::sname);
    }
  }
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#4}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#4}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#4}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar1,&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#4}::operator()()::sname,
             &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
              ::{lambda()#5}::operator()()::sname,0x24,8,0,*param_3,1,1,1,0);
  if (*(int *)(this + 0x30) != 0) {
    pSVar4 = (StringName *)*param_2;
    if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
        ::{lambda()#7}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                   ::{lambda()#7}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                             ::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                      ::{lambda()#7}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                             ::{lambda()#7}::operator()()::sname);
      }
    }
    if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
        ::{lambda()#6}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                   ::{lambda()#6}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                             ::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                      ::{lambda()#6}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                             ::{lambda()#6}::operator()()::sname);
      }
    }
    cVar5 = RenderSceneBuffersRD::has_texture
                      (pSVar4,(StringName *)
                              &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                               ::{lambda()#6}::operator()()::sname);
    if (cVar5 == '\0') {
      lVar1 = *param_2;
      if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
          ::{lambda()#9}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                     ::{lambda()#9}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                               ::{lambda()#9}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                        ::{lambda()#9}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                               ::{lambda()#9}::operator()()::sname);
        }
      }
      if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
          ::{lambda()#8}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                     ::{lambda()#8}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                               ::{lambda()#8}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                        ::{lambda()#8}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                               ::{lambda()#8}::operator()()::sname);
        }
      }
      RenderSceneBuffersRD::create_texture
                (lVar1,&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                        ::{lambda()#8}::operator()()::sname,
                 &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                  ::{lambda()#9}::operator()()::sname,8,9,0,*param_3,2,1,1,0);
    }
  }
  lVar1 = *param_2;
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#11}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#11}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#11}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#11}::operator()()::sname);
    }
  }
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#10}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#10}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#10}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#10}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar1,&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#10}::operator()()::sname,
             &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
              ::{lambda()#11}::operator()()::sname,param_4,0x109,0,*param_3,1,1,1,0);
  lVar1 = *param_2;
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#13}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#13}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#13}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#13}::operator()()::sname);
    }
  }
  if (ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
      ::{lambda()#12}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                                 ::{lambda()#12}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#12}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#12}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                           ::{lambda()#12}::operator()()::sname);
    }
  }
  RenderSceneBuffersRD::create_texture
            (lVar1,&ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
                    ::{lambda()#12}::operator()()::sname,
             &ssr_allocate_buffers(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RenderingDeviceCommons::DataFormat)
              ::{lambda()#13}::operator()()::sname,param_4,0x109,0,*param_3,0,1,1,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SSEffects::sss_set_quality(RenderingServer::SubSurfaceScatteringQuality) */

void __thiscall RendererRD::SSEffects::sss_set_quality(SSEffects *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x34) = param_2;
  return;
}



/* RendererRD::SSEffects::sss_get_quality() const */

undefined4 __thiscall RendererRD::SSEffects::sss_get_quality(SSEffects *this)

{
  return *(undefined4 *)(this + 0x34);
}



/* RendererRD::SSEffects::sss_set_scale(float, float) */

void __thiscall RendererRD::SSEffects::sss_set_scale(SSEffects *this,float param_1,float param_2)

{
  *(ulong *)(this + 0x38) = CONCAT44(param_2,param_1);
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



/* RendererRD::SSEffects::gather_ssil(long, RID const*, RID const*,
   RendererRD::SSEffects::SSILSettings const&, bool, RID, RID, RID) */

void __thiscall
RendererRD::SSEffects::gather_ssil
          (SSEffects *this,void *param_1,long param_2,long param_3,long param_4,char param_5,
          undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  Version *pVVar2;
  char *pcVar3;
  uint *puVar4;
  code *pcVar5;
  UniformSetCacheRD *pUVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_d8 [2];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 *local_a8 [2];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  long local_78 [2];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  long local_48;
  long local_40;
  
  pUVar6 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gather_ssil","servers/rendering/renderer_rd/effects/ss_effects.cpp",0x227,
                       "Parameter \"uniform_set_cache\" is null.",0,0);
      return;
    }
    goto LAB_0010352d;
  }
  uVar10 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_uniform_set(uVar10,param_1,param_7,0);
  if ((*(int *)(this + 0x18) == 4) && (param_5 == '\0')) {
    uVar10 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set(uVar10,param_1,param_8,1);
  }
  uVar10 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_uniform_set(uVar10,param_1,param_9,3);
  uVar13 = *(ulong *)(this + 0x428);
  if (*(long *)(this + 0x2c8) == 0) {
    lVar15 = 0;
LAB_00103488:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar15,
               "p_variant","variant_defines.size()","",false,false);
LAB_00102cff:
    local_100 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)(this + 0x2c8) + -8);
    if (lVar15 < 1) goto LAB_00103488;
    pcVar3 = *(char **)(this + 0x2d8);
    if (pcVar3 == (char *)0x0) {
LAB_001033e0:
      lVar15 = 0;
LAB_001033e3:
      uVar13 = 0;
LAB_00103400:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar15,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar15 = *(long *)(pcVar3 + -8);
    if (lVar15 < 1) goto LAB_001033e3;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00102cff;
    }
    if ((uVar13 == 0) || (*(uint *)(this + 900) <= (uint)uVar13)) {
LAB_00103350:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00102cff;
    }
    lVar14 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(this + 0x380)) * 0xa0 +
             *(long *)(*(long *)(this + 0x370) +
                      ((uVar13 & 0xffffffff) / (ulong)*(uint *)(this + 0x380)) * 8);
    if (*(int *)(lVar14 + 0x98) != (int)(uVar13 >> 0x20)) {
      if (*(int *)(lVar14 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00103350;
    }
    pVVar2 = (Version *)(this + 0x2b0);
    iVar8 = (int)lVar14;
    if (*(char *)(lVar14 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar15 = *(long *)(this + 0x328);
      if (lVar15 != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(lVar15 + -8) <= lVar17) break;
          if (*(char *)(lVar15 + lVar17) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar8);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar8);
          }
          lVar15 = *(long *)(this + 0x328);
          lVar17 = lVar17 + 1;
        } while (lVar15 != 0);
      }
    }
    puVar4 = *(uint **)(this + 0x2e8);
    if (puVar4 == (uint *)0x0) goto LAB_001033e0;
    lVar15 = *(long *)(puVar4 + -2);
    if (lVar15 < 1) goto LAB_001033e3;
    uVar13 = (ulong)*puVar4;
    lVar17 = *(long *)(lVar14 + 0x68);
    if (lVar17 == 0) {
      lVar15 = 0;
      goto LAB_00103400;
    }
    lVar15 = *(long *)(lVar17 + -8);
    if (lVar15 <= (long)uVar13) goto LAB_00103400;
    if (*(long *)(lVar17 + uVar13 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar8);
    }
    if (*(char *)(lVar14 + 0x90) == '\0') goto LAB_00102cff;
    puVar11 = *(undefined8 **)(lVar14 + 0x88);
    if (puVar11 == (undefined8 *)0x0) goto LAB_001033e0;
    lVar15 = puVar11[-1];
    if (lVar15 < 1) goto LAB_001033e3;
    local_100 = *puVar11;
  }
  lVar15 = 0;
  do {
    uVar16 = (uint)lVar15;
    if ((*(int *)(this + 0x18) != 0) || (1 < uVar16 - 1)) {
      local_60 = (undefined8 *)0x0;
      uVar10 = *(undefined8 *)(param_2 + lVar15 * 8);
      iVar8 = CowData<RID>::resize<false>((CowData<RID> *)&local_60,1);
      puVar11 = local_60;
      if (iVar8 == 0) {
        if (local_60 == (undefined8 *)0x0) {
          lVar14 = 0;
LAB_00103151:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar14,"p_index","size()","",false,
                     false);
          goto LAB_00103198;
        }
        lVar14 = local_60[-1];
        if (lVar14 < 1) goto LAB_00103151;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_60);
        local_f8 = _LC38;
        *local_60 = uVar10;
        puVar11 = local_60;
LAB_00102da6:
        local_d8[0] = (undefined8 *)0x0;
        plVar1 = puVar11 + -2;
        do {
          lVar14 = *plVar1;
          if (lVar14 == 0) goto LAB_00102dd4;
          LOCK();
          lVar17 = *plVar1;
          bVar19 = lVar14 == lVar17;
          if (bVar19) {
            *plVar1 = lVar14 + 1;
            lVar17 = lVar14;
          }
          UNLOCK();
        } while (!bVar19);
        if (lVar17 != -1) {
          local_d8[0] = local_60;
        }
LAB_00102dd4:
        if (local_60 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_60 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_60 + -2,false);
          }
        }
      }
      else {
LAB_00103198:
        local_f8 = _LC38;
        local_d8[0] = (undefined8 *)0x0;
        if (puVar11 != (undefined8 *)0x0) goto LAB_00102da6;
      }
      local_60 = (undefined8 *)0x0;
      uVar10 = *(undefined8 *)(param_3 + lVar15 * 8);
      iVar8 = CowData<RID>::resize<false>((CowData<RID> *)&local_60,1);
      puVar11 = local_60;
      if (iVar8 == 0) {
        if (local_60 == (undefined8 *)0x0) {
          lVar14 = 0;
LAB_001031cc:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar14,"p_index","size()","",false,
                     false);
          goto LAB_00103210;
        }
        lVar14 = local_60[-1];
        if (lVar14 < 1) goto LAB_001031cc;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_60);
        local_c8 = _LC51;
        *local_60 = uVar10;
        puVar11 = local_60;
LAB_00102e75:
        local_a8[0] = (undefined8 *)0x0;
        local_b8 = 0;
        local_c0 = 0;
        plVar1 = puVar11 + -2;
        do {
          lVar14 = *plVar1;
          if (lVar14 == 0) goto LAB_00102ea6;
          LOCK();
          lVar17 = *plVar1;
          bVar19 = lVar14 == lVar17;
          if (bVar19) {
            *plVar1 = lVar14 + 1;
            lVar17 = lVar14;
          }
          UNLOCK();
        } while (!bVar19);
        if (lVar17 != -1) {
          local_a8[0] = local_60;
        }
LAB_00102ea6:
        puVar11 = local_a8[0];
        if (local_60 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_60 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_60 + -2,false);
            puVar11 = local_a8[0];
          }
        }
      }
      else {
LAB_00103210:
        local_c8 = _LC51;
        local_c0 = 0;
        local_b8 = 0;
        local_a8[0] = (undefined8 *)0x0;
        if (puVar11 != (undefined8 *)0x0) goto LAB_00102e75;
      }
      uVar7 = local_c0;
      uVar12 = local_c8;
      *(uint *)(this + 0x2a0) = uVar16 & 1;
      *(int *)(this + 0x2a4) = (int)uVar16 >> 1;
      uVar10 = *(undefined8 *)(param_4 + 0x10);
      auVar20._0_8_ = (double)(uVar16 & 1);
      auVar20._8_8_ = (double)((int)uVar16 >> 1);
      *(uint *)(this + 0x238) = uVar16;
      auVar21._8_8_ = (double)(int)((ulong)uVar10 >> 0x20);
      auVar21._0_8_ = (double)(int)uVar10;
      auVar21 = divpd(auVar20,auVar21);
      *(ulong *)(this + 0x2a8) = CONCAT44((float)auVar21._8_8_,(float)auVar21._0_8_);
      uVar10 = RenderingDevice::get_singleton();
      local_60 = (undefined8 *)CONCAT71(local_60._1_7_,uVar7);
      local_48 = 0;
      local_58 = local_b8;
      local_68 = uVar12;
      if (puVar11 != (undefined8 *)0x0) {
        CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_a8);
      }
      local_78[0] = 0;
      local_98 = local_f8;
      local_90 = 0;
      local_88 = 0;
      if (local_d8[0] == (undefined8 *)0x0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                           (pUVar6,local_100,2,&local_98,&local_68);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,param_1,uVar12,2);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_d8);
        lVar14 = local_78[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                           (pUVar6,local_100,2,&local_98,&local_68);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,param_1,uVar12,2);
        if (lVar14 != 0) {
          LOCK();
          plVar1 = (long *)(lVar14 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_78[0] + -0x10),false);
          }
        }
      }
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      lVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar14,param_1,(int)this + 0x230);
      iVar8 = *(int *)(param_4 + 0x10);
      if (this[0x1c] == (SSEffects)0x0) {
        uVar16 = (iVar8 + 1) / 2;
        uVar18 = (*(int *)(param_4 + 0x14) + 1) / 2;
      }
      else {
        iVar9 = iVar8 + 6;
        if (-1 < iVar8 + 3) {
          iVar9 = iVar8 + 3;
        }
        uVar16 = iVar9 >> 2;
        iVar9 = *(int *)(param_4 + 0x14) + 3;
        iVar8 = *(int *)(param_4 + 0x14) + 6;
        if (-1 < iVar9) {
          iVar8 = iVar9;
        }
        uVar18 = iVar8 >> 2;
      }
      lVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar14,(uint)param_1,uVar16,uVar18);
      if (local_a8[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_a8[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_a8[0] + -2,false);
        }
      }
      if (local_d8[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_d8[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_d8[0] + -2,false);
        }
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  lVar15 = RenderingDevice::get_singleton();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    RenderingDevice::compute_list_add_barrier(lVar15);
    return;
  }
LAB_0010352d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SSEffects::downsample_depth(Ref<RenderSceneBuffersRD>, unsigned int, Projection
   const&) */

void RendererRD::SSEffects::downsample_depth(int *param_1,undefined8 *param_2,int param_3)

{
  Version *pVVar1;
  long *plVar2;
  undefined4 *puVar3;
  StringName *pSVar4;
  ulong uVar5;
  code *pcVar6;
  UniformSetCacheRD *pUVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  uint *in_FS_OFFSET;
  bool bVar26;
  int iVar27;
  uint uVar28;
  int iVar30;
  uint uVar31;
  undefined1 auVar29 [16];
  float fVar32;
  undefined1 auVar33 [16];
  int iVar34;
  int iVar35;
  undefined8 local_1d8;
  char local_1af;
  char local_1ae;
  byte local_1ad;
  undefined8 local_198;
  int local_180;
  uint local_17c;
  long local_148 [2];
  char *local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 *local_118 [2];
  char *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  long local_e8 [2];
  undefined8 local_d8 [2];
  Projection local_c8 [64];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_60;
  uint local_50;
  long local_40;
  
  pUVar7 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 10);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
      uVar13 = 0x19e;
      pcVar17 = "Parameter \"uniform_set_cache\" is null.";
LAB_00104759:
      _err_print_error("downsample_depth","servers/rendering/renderer_rd/effects/ss_effects.cpp",
                       uVar13,pcVar17,0,0);
      return;
    }
    goto LAB_0010494e;
  }
  lVar11 = RendererRD::MaterialStorage::get_singleton();
  if (lVar11 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
      uVar13 = 0x1a0;
      pcVar17 = "Parameter \"material_storage\" is null.";
      goto LAB_00104759;
    }
    goto LAB_0010494e;
  }
  pSVar4 = (StringName *)*param_2;
  iVar23 = *(int *)(pSVar4 + 0x1a8);
  iVar34 = (int)*(undefined8 *)(pSVar4 + 0x1ac);
  iVar27 = (int)_LC15 + iVar34;
  iVar35 = (int)((ulong)*(undefined8 *)(pSVar4 + 0x1ac) >> 0x20);
  iVar30 = _LC15._4_4_ + iVar35;
  iVar27 = iVar27 + (uint)(iVar27 < 0);
  iVar30 = iVar30 + (uint)(iVar30 < 0);
  uVar28 = iVar27 >> 1;
  uVar31 = iVar30 >> 1;
  if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#2}::
       operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                    ::{lambda()#2}::operator()()::sname), iVar10 != 0)) {
    _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                  {lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#2}::operator()()::sname);
  }
  if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#1}::
       operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                    ::{lambda()#1}::operator()()::sname), iVar10 != 0)) {
    _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                  {lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#1}::operator()()::sname);
  }
  cVar8 = RenderSceneBuffersRD::has_texture
                    (pSVar4,(StringName *)
                            &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                             ::{lambda()#1}::operator()()::sname);
  if (cVar8 == '\0') {
    uVar13 = *param_2;
    if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#4}::
         operator()()::sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                      ::{lambda()#4}::operator()()::sname), iVar10 != 0)) {
      _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                           ::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                    {lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                           ::{lambda()#4}::operator()()::sname);
    }
    if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#3}::
         operator()()::sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                      ::{lambda()#3}::operator()()::sname), iVar10 != 0)) {
      _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                    {lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                           ::{lambda()#3}::operator()()::sname);
    }
    RenderSceneBuffersRD::create_texture
              (uVar13,&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                       {lambda()#3}::operator()()::sname,
               &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                {lambda()#4}::operator()()::sname,0x4b,9,0,CONCAT44(uVar31,uVar28),iVar23 * 4,5,1,0)
    ;
  }
  RenderingDevice::get_singleton();
  pvVar12 = (void *)RenderingDevice::compute_list_begin();
  if ((2 < *param_1) || (2 < param_1[6])) {
    local_1af = (char)param_1[1];
    if (local_1af == '\0') {
      local_1af = (char)param_1[7];
      local_1ad = 0;
      if (local_1af == '\0') {
        local_1af = '\0';
        uVar24 = 2;
        local_1ae = '\x01';
        local_180 = 2;
      }
      else {
        local_180 = 6;
        uVar24 = 6;
        local_1ae = local_1af;
      }
    }
    else {
      local_1ae = (char)param_1[7];
      if (local_1ae != '\0') {
        local_180 = 2;
        goto LAB_00103bfa;
      }
      uVar24 = 6;
      local_1ad = 0;
      local_180 = 6;
      local_1ae = local_1af;
    }
    goto LAB_001036e0;
  }
  local_1ae = (char)param_1[7];
  if (*param_1 == 0 && param_1[6] == 0) {
    if ((char)param_1[1] == '\0') {
      if (local_1ae != '\0') goto LAB_001036c3;
      local_1af = '\0';
      uVar24 = 4;
      local_1ad = 0;
      local_180 = 4;
    }
    else {
      if (local_1ae == '\0') goto LAB_001036c3;
      local_1ae = '\0';
      local_180 = 4;
LAB_00103bfa:
      local_180 = local_180 + 1;
      local_1af = '\0';
      uVar24 = (ulong)local_180;
      local_1ad = 1;
    }
  }
  else {
    if ((char)param_1[1] == '\0') {
      if (local_1ae == '\0') {
        local_1af = '\0';
        uVar24 = 0;
        local_1ad = 0;
        local_180 = 0;
        goto LAB_001036e0;
      }
    }
    else if (local_1ae != '\0') {
      local_1ae = '\0';
      local_180 = 0;
      goto LAB_00103bfa;
    }
LAB_001036c3:
    local_1af = '\0';
    uVar24 = 2;
    local_1ad = 0;
    local_1ae = '\x01';
    local_180 = 2;
  }
LAB_001036e0:
  uVar5 = *(ulong *)(param_1 + 0x76);
  if (*(long *)(param_1 + 0x1e) == 0) {
    lVar20 = 0;
LAB_001047b3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar24,lVar20
               ,"p_variant","variant_defines.size()","",false,false);
LAB_001037db:
    local_198 = 0;
  }
  else {
    lVar20 = *(long *)(*(long *)(param_1 + 0x1e) + -8);
    if (lVar20 <= (long)uVar24) goto LAB_001047b3;
    lVar20 = *(long *)(param_1 + 0x22);
    uVar16 = uVar24;
    if (lVar20 == 0) {
LAB_00104688:
      lVar18 = 0;
      uVar16 = uVar24;
LAB_001046a9:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar16,lVar18,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar18 = *(long *)(lVar20 + -8);
    if (lVar18 <= (long)uVar24) goto LAB_001046a9;
    lVar25 = (long)local_180;
    if (*(char *)(lVar20 + lVar25) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_001037db;
    }
    if ((uVar5 == 0) || ((uint)param_1[0x4d] <= (uint)uVar5)) {
LAB_001048b0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_001037db;
    }
    lVar20 = ((uVar5 & 0xffffffff) % (ulong)(uint)param_1[0x4c]) * 0xa0 +
             *(long *)(*(long *)(param_1 + 0x48) +
                      ((uVar5 & 0xffffffff) / (ulong)(uint)param_1[0x4c]) * 8);
    if (*(int *)(lVar20 + 0x98) != (int)(uVar5 >> 0x20)) {
      if (*(int *)(lVar20 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001048b0;
    }
    pVVar1 = (Version *)(param_1 + 0x18);
    iVar23 = (int)lVar20;
    if (*(char *)(lVar20 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar18 = *(long *)(param_1 + 0x36);
      if (lVar18 != 0) {
        lVar22 = 0;
        do {
          if (*(long *)(lVar18 + -8) <= lVar22) break;
          if (*(char *)(lVar18 + lVar22) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar23);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar23);
          }
          lVar18 = *(long *)(param_1 + 0x36);
          lVar22 = lVar22 + 1;
        } while (lVar18 != 0);
      }
    }
    lVar22 = *(long *)(param_1 + 0x26);
    if (lVar22 == 0) goto LAB_00104688;
    lVar18 = *(long *)(lVar22 + -8);
    if (lVar18 <= (long)uVar24) goto LAB_001046a9;
    uVar16 = (ulong)*(uint *)(lVar22 + lVar25 * 4);
    lVar22 = *(long *)(lVar20 + 0x68);
    if (lVar22 == 0) {
      lVar18 = 0;
      goto LAB_001046a9;
    }
    lVar18 = *(long *)(lVar22 + -8);
    if (lVar18 <= (long)uVar16) goto LAB_001046a9;
    if (*(long *)(lVar22 + uVar16 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar1,iVar23);
    }
    if (*(char *)(lVar20 + 0x90) == '\0') goto LAB_001037db;
    lVar20 = *(long *)(lVar20 + 0x88);
    if (lVar20 == 0) goto LAB_00104688;
    lVar18 = *(long *)(lVar20 + -8);
    uVar16 = uVar24;
    if (lVar18 <= (long)uVar24) goto LAB_001046a9;
    local_198 = *(undefined8 *)(lVar20 + lVar25 * 8);
  }
  uVar13 = RenderingDevice::get_singleton();
  local_138 = (char *)0x0;
  local_100 = (undefined8 *)0x10;
  local_108 = "Downsample Depth";
  local_88 = _LC70;
  uStack_84 = _LC70;
  uStack_80 = _LC70;
  uStack_7c = _LC70;
  String::parse_latin1((StrRange *)&local_138);
  RenderingDevice::draw_command_begin_label(uVar13,(StrRange *)&local_138,(Projection *)&local_88);
  pcVar17 = local_138;
  if (local_138 != (char *)0x0) {
    LOCK();
    plVar2 = (long *)((long)local_138 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_138 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar17 + -0x10),false);
    }
  }
  local_1d8 = 0;
  if (local_1ae != '\0') {
    if ((char)*in_FS_OFFSET == '\0') {
      uVar13 = *(undefined8 *)in_FS_OFFSET;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      *(undefined1 *)in_FS_OFFSET = 1;
      __cxa_thread_atexit(LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::
                          ~LocalVector,uVar13,&__dso_handle);
    }
    if (*in_FS_OFFSET != 0) {
      lVar20 = 0;
      uVar19 = 0;
      do {
        lVar18 = *(long *)(in_FS_OFFSET + 2) + lVar20;
        if (*(long *)(lVar18 + 0x20) != 0) {
          LOCK();
          plVar2 = (long *)(*(long *)(lVar18 + 0x20) + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar25 = *(long *)(lVar18 + 0x20);
            *(undefined8 *)(lVar18 + 0x20) = 0;
            Memory::free_static((void *)(lVar25 + -0x10),false);
          }
        }
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 0x28;
      } while (uVar19 < *in_FS_OFFSET);
      *in_FS_OFFSET = 0;
    }
    iVar23 = 0;
    do {
      pSVar4 = (StringName *)*param_2;
      if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#6}
           ::operator()()::sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                        ::{lambda()#6}::operator()()::sname), iVar10 != 0)) {
        _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                             ::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                      {lambda()#6}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                             ::{lambda()#6}::operator()()::sname);
      }
      if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#5}
           ::operator()()::sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                        ::{lambda()#5}::operator()()::sname), iVar10 != 0)) {
        _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                             ::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                      {lambda()#5}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                             ::{lambda()#5}::operator()()::sname);
      }
      uVar13 = RenderSceneBuffersRD::get_texture_slice
                         (pSVar4,(StringName *)
                                 &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                  ::{lambda()#5}::operator()()::sname,0x11c3a8,param_3 * 4,
                          iVar23 + 1 + (uint)local_1ad,4);
      uVar19 = *in_FS_OFFSET;
      if (uVar19 == in_FS_OFFSET[1]) {
        uVar24 = (ulong)(uVar19 * 2);
        if (uVar19 * 2 == 0) {
          uVar24 = 1;
        }
        in_FS_OFFSET[1] = (uint)uVar24;
        lVar20 = Memory::realloc_static(*(void **)(in_FS_OFFSET + 2),uVar24 * 0x28,false);
        *(long *)(in_FS_OFFSET + 2) = lVar20;
        if (lVar20 == 0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        uVar19 = *in_FS_OFFSET;
      }
      else {
        lVar20 = *(long *)(in_FS_OFFSET + 2);
      }
      puVar3 = (undefined4 *)(lVar20 + (ulong)uVar19 * 0x28);
      *in_FS_OFFSET = uVar19 + 1;
      puVar3[1] = iVar23;
      iVar23 = iVar23 + 1;
      *puVar3 = 3;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 4) = uVar13;
      *(undefined8 *)(puVar3 + 8) = 0;
    } while (iVar23 < (int)(4 - (uint)(local_1af == '\0')));
    local_1d8 = UniformSetCacheRD::get_cache_vec<>(pUVar7,local_198,2,*(undefined8 *)in_FS_OFFSET);
  }
  local_17c = (uint)local_1ad;
  Projection::Projection(local_c8);
  Projection::set_depth_correction(SUB81(local_c8,0),false,true);
  Projection::operator*((Projection *)&local_88,local_c8);
  fVar32 = (float)(local_50 ^ _LC72);
  if (fVar32 * local_60 < 0.0) {
    local_60 = (float)((uint)local_60 ^ _LC72);
  }
  bVar9 = Projection::is_orthogonal();
  param_1[0x14] = (uint)bVar9;
  *(ulong *)(param_1 + 0x12) = CONCAT44(fVar32,local_60);
  if (bVar9 != 0) {
    iVar23 = Projection::get_z_near();
    param_1[0x13] = iVar23;
    iVar23 = Projection::get_z_far();
    param_1[0x12] = iVar23;
  }
  uVar15 = _LC75;
  uVar13 = *param_2;
  auVar33._0_8_ = (double)iVar34;
  auVar33._8_8_ = (double)iVar35;
  param_1[0x15] = 0x3f800000;
  auVar29._8_8_ = uVar15;
  auVar29._0_8_ = uVar15;
  auVar29 = divpd(auVar29,auVar33);
  uVar15 = *(undefined8 *)(lVar11 + 0x50);
  *(ulong *)(param_1 + 0x10) = CONCAT44((float)auVar29._8_8_,(float)auVar29._0_8_);
  uVar13 = RenderSceneBuffersRD::get_depth_texture((uint)uVar13);
  pSVar4 = (StringName *)*param_2;
  if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#8}::
       operator()()::sname == '\0') &&
     (iVar23 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                    ::{lambda()#8}::operator()()::sname), iVar23 != 0)) {
    _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                  {lambda()#8}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#8}::operator()()::sname);
  }
  if ((downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::{lambda()#7}::
       operator()()::sname == '\0') &&
     (iVar23 = __cxa_guard_acquire(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                                    ::{lambda()#7}::operator()()::sname), iVar23 != 0)) {
    _scs_create((char *)&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)::
                  {lambda()#7}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                         ::{lambda()#7}::operator()()::sname);
  }
  uVar14 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar4,(StringName *)
                             &downsample_depth(Ref<RenderSceneBuffersRD>,unsigned_int,Projection_const&)
                              ::{lambda()#7}::operator()()::sname,0x11c388,param_3 * 4,local_17c,4);
  lVar11 = 0;
  local_100 = (undefined8 *)0x0;
  local_d8[0] = uVar15;
  local_d8[1] = uVar13;
  iVar23 = CowData<RID>::resize<false>((CowData<RID> *)&local_100,2);
  puVar21 = local_100;
  if (iVar23 == 0) {
    do {
      if (puVar21 == (undefined8 *)0x0) {
        lVar20 = 0;
LAB_0010438c:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar20,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar20 = *(long *)((long)puVar21 + -8);
        if (lVar20 <= lVar11) goto LAB_0010438c;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_100);
        *(undefined8 *)((long)local_100 + lVar11 * 8) = local_d8[lVar11];
        puVar21 = local_100;
      }
      if (lVar11 != 0) break;
      lVar11 = 1;
    } while( true );
  }
  plVar2 = (long *)((long)puVar21 + -0x10);
  local_148[0] = 0;
  if (puVar21 != (undefined8 *)0x0) {
    do {
      lVar11 = *plVar2;
      if (lVar11 == 0) goto LAB_00103f76;
      LOCK();
      lVar20 = *plVar2;
      bVar26 = lVar11 == lVar20;
      if (bVar26) {
        *plVar2 = lVar11 + 1;
        lVar20 = lVar11;
      }
      UNLOCK();
    } while (!bVar26);
    if (lVar20 != -1) {
      local_148[0] = (long)local_100;
    }
LAB_00103f76:
    if (local_100 != (undefined8 *)0x0) {
      LOCK();
      plVar2 = (long *)((long)local_100 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)((long)local_100 + -0x10),false);
      }
    }
  }
  local_100 = (undefined8 *)0x0;
  iVar23 = CowData<RID>::resize<false>((CowData<RID> *)&local_100,1);
  puVar21 = local_100;
  if (iVar23 == 0) {
    if (local_100 == (undefined8 *)0x0) {
      lVar11 = 0;
LAB_001043cb:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar11,"p_index","size()","",false,false)
      ;
      goto LAB_00104408;
    }
    lVar11 = local_100[-1];
    if (lVar11 < 1) goto LAB_001043cb;
    CowData<RID>::_copy_on_write((CowData<RID> *)&local_100);
    *local_100 = uVar14;
    puVar21 = local_100;
LAB_00104015:
    local_118[0] = (undefined8 *)0x0;
    local_128 = 0;
    local_130 = 0;
    local_138 = (char *)0x3;
    plVar2 = puVar21 + -2;
    do {
      lVar11 = *plVar2;
      if (lVar11 == 0) goto LAB_00104046;
      LOCK();
      lVar20 = *plVar2;
      bVar26 = lVar11 == lVar20;
      if (bVar26) {
        *plVar2 = lVar11 + 1;
        lVar20 = lVar11;
      }
      UNLOCK();
    } while (!bVar26);
    if (lVar20 != -1) {
      local_118[0] = local_100;
    }
LAB_00104046:
    if (local_100 != (undefined8 *)0x0) {
      LOCK();
      plVar2 = local_100 + -2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static(local_100 + -2,false);
      }
    }
  }
  else {
LAB_00104408:
    local_130 = 0;
    local_128 = 0;
    local_118[0] = (undefined8 *)0x0;
    local_138 = (char *)0x3;
    if (puVar21 != (undefined8 *)0x0) goto LAB_00104015;
  }
  uVar13 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline
            (uVar13,pvVar12,*(undefined8 *)(param_1 + (long)local_180 * 2 + 0x7e));
  uVar13 = RenderingDevice::get_singleton();
  local_e8[0] = 0;
  local_108 = (char *)0x1;
  local_100 = (undefined8 *)((ulong)local_100 & 0xffffffffffffff00);
  local_f8 = 0;
  if (local_148[0] == 0) {
    uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,local_198,0,&local_108);
    RenderingDevice::compute_list_bind_uniform_set(uVar13,pvVar12,uVar15,0);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_e8,(CowData *)local_148);
    lVar11 = local_e8[0];
    uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,local_198,0,&local_108);
    RenderingDevice::compute_list_bind_uniform_set(uVar13,pvVar12,uVar15,0);
    if (lVar11 != 0) {
      LOCK();
      plVar2 = (long *)(lVar11 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_e8[0] + -0x10),false);
      }
    }
  }
  uVar13 = RenderingDevice::get_singleton();
  puVar21 = local_118[0];
  local_e8[0] = 0;
  local_108 = local_138;
  local_100 = (undefined8 *)CONCAT71(local_100._1_7_,local_130);
  local_f8 = local_128;
  if (local_118[0] == (undefined8 *)0x0) {
    uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,local_198,1,&local_108);
    RenderingDevice::compute_list_bind_uniform_set(uVar13,pvVar12,uVar15,1);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_e8,(CowData *)local_118);
    lVar11 = local_e8[0];
    uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,local_198,1,&local_108);
    RenderingDevice::compute_list_bind_uniform_set(uVar13,pvVar12,uVar15,1);
    if (lVar11 != 0) {
      LOCK();
      plVar2 = (long *)(lVar11 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      puVar21 = local_118[0];
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_e8[0] + -0x10),false);
        puVar21 = local_118[0];
      }
    }
  }
  if (local_1ae != '\0') {
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set(uVar13,pvVar12,local_1d8,2);
  }
  lVar11 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_set_push_constant(lVar11,pvVar12,(int)param_1 + 0x40);
  if (local_1ad != 0) {
    uVar31 = iVar30 >> 2;
    if ((int)uVar31 < 1) {
      uVar31 = 1;
    }
    uVar28 = iVar27 >> 2;
    if ((int)uVar28 < 1) {
      uVar28 = 1;
    }
  }
  lVar11 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_dispatch_threads(lVar11,(uint)pvVar12,uVar28,uVar31);
  lVar11 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_add_barrier(lVar11);
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  RenderingDevice::get_singleton();
  RenderingDevice::compute_list_end();
  *(char *)((long)param_1 + 0x1e2) = local_1af;
  *(byte *)(param_1 + 0x78) = local_1ad;
  *(char *)((long)param_1 + 0x1e1) = local_1ae;
  if (puVar21 != (undefined8 *)0x0) {
    LOCK();
    plVar2 = puVar21 + -2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static(local_118[0] + -2,false);
    }
  }
  if (local_148[0] != 0) {
    LOCK();
    plVar2 = (long *)(local_148[0] + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_148[0] + -0x10),false);
    }
  }
  Projection::~Projection((Projection *)&local_88);
  Projection::~Projection(local_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
    return;
  }
LAB_0010494e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SSEffects::gather_ssao(long, RID const*, RendererRD::SSEffects::SSAOSettings const&,
   bool, RID, RID) */

void __thiscall
RendererRD::SSEffects::gather_ssao
          (SSEffects *this,void *param_1,long param_2,long param_3,char param_4,undefined8 param_6,
          undefined8 param_7)

{
  Version *pVVar1;
  long *plVar2;
  code *pcVar3;
  UniformSetCacheRD *pUVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_78 [2];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  long local_48;
  long local_40;
  
  pUVar4 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gather_ssao","servers/rendering/renderer_rd/effects/ss_effects.cpp",0x3ce,
                       "Parameter \"uniform_set_cache\" is null.",0,0);
      return;
    }
    goto LAB_001050e8;
  }
  uVar7 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_uniform_set(uVar7,param_1,param_6,0);
  if ((*(int *)this == 4) && (param_4 == '\0')) {
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set(uVar7,param_1,param_7,1);
  }
  uVar10 = *(ulong *)(this + 0xb50);
  if (*(long *)(this + 0x9f0) == 0) {
    lVar11 = 0;
LAB_00105050:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar11,
               "p_variant","variant_defines.size()","",false,false);
LAB_00104adb:
    local_a0 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)(this + 0x9f0) + -8);
    if (lVar11 < 2) goto LAB_00105050;
    lVar11 = *(long *)(this + 0xa00);
    if (lVar11 == 0) {
LAB_00104fa0:
      lVar9 = 0;
LAB_00104fa3:
      uVar10 = 1;
LAB_00104fc3:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar9 = *(long *)(lVar11 + -8);
    if (lVar9 < 2) goto LAB_00104fa3;
    if (*(char *)(lVar11 + 1) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00104adb;
    }
    if ((uVar10 == 0) || (*(uint *)(this + 0xaac) <= (uint)uVar10)) {
LAB_00104f10:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00104adb;
    }
    lVar11 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0xaa8)) * 0xa0 +
             *(long *)(*(long *)(this + 0xa98) +
                      ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0xaa8)) * 8);
    if (*(int *)(lVar11 + 0x98) != (int)(uVar10 >> 0x20)) {
      if (*(int *)(lVar11 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00104f10;
    }
    pVVar1 = (Version *)(this + 0x9d8);
    iVar5 = (int)lVar11;
    if (*(char *)(lVar11 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar9 = *(long *)(this + 0xa50);
      if (lVar9 != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(lVar9 + -8) <= lVar13) break;
          if (*(char *)(lVar9 + lVar13) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar5);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar5);
          }
          lVar9 = *(long *)(this + 0xa50);
          lVar13 = lVar13 + 1;
        } while (lVar9 != 0);
      }
    }
    lVar13 = *(long *)(this + 0xa10);
    if (lVar13 == 0) goto LAB_00104fa0;
    lVar9 = *(long *)(lVar13 + -8);
    if (lVar9 < 2) goto LAB_00104fa3;
    uVar10 = (ulong)*(uint *)(lVar13 + 4);
    lVar13 = *(long *)(lVar11 + 0x68);
    if (lVar13 == 0) {
      lVar9 = 0;
      goto LAB_00104fc3;
    }
    lVar9 = *(long *)(lVar13 + -8);
    if (lVar9 <= (long)uVar10) goto LAB_00104fc3;
    if (*(long *)(lVar13 + uVar10 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar1,iVar5);
    }
    if (*(char *)(lVar11 + 0x90) == '\0') goto LAB_00104adb;
    lVar11 = *(long *)(lVar11 + 0x88);
    if (lVar11 == 0) goto LAB_00104fa0;
    lVar9 = *(long *)(lVar11 + -8);
    if (lVar9 < 2) goto LAB_00104fa3;
    local_a0 = *(undefined8 *)(lVar11 + 8);
  }
  lVar11 = 0;
  do {
    uVar12 = (uint)lVar11;
    if ((*(int *)this != 0) || (1 < uVar12 - 1)) {
      local_60 = (undefined8 *)0x0;
      uVar7 = *(undefined8 *)(param_2 + lVar11 * 8);
      iVar5 = CowData<RID>::resize<false>((CowData<RID> *)&local_60,1);
      puVar15 = local_60;
      if (iVar5 == 0) {
        if (local_60 == (undefined8 *)0x0) {
          lVar9 = 0;
LAB_00104da8:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar9,"p_index","size()","",false,
                     false);
          goto LAB_00104de8;
        }
        lVar9 = local_60[-1];
        if (lVar9 < 1) goto LAB_00104da8;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_60);
        local_98 = _LC38;
        *local_60 = uVar7;
        puVar15 = local_60;
LAB_00104b8a:
        local_78[0] = (undefined8 *)0x0;
        plVar2 = puVar15 + -2;
        do {
          lVar9 = *plVar2;
          if (lVar9 == 0) goto LAB_00104bb5;
          LOCK();
          lVar13 = *plVar2;
          bVar16 = lVar9 == lVar13;
          if (bVar16) {
            *plVar2 = lVar9 + 1;
            lVar13 = lVar9;
          }
          UNLOCK();
        } while (!bVar16);
        if (lVar13 != -1) {
          local_78[0] = local_60;
        }
LAB_00104bb5:
        puVar15 = local_78[0];
        if (local_60 != (undefined8 *)0x0) {
          LOCK();
          plVar2 = local_60 + -2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            Memory::free_static(local_60 + -2,false);
            puVar15 = local_78[0];
          }
        }
      }
      else {
LAB_00104de8:
        local_98 = _LC38;
        local_78[0] = (undefined8 *)0x0;
        if (puVar15 != (undefined8 *)0x0) goto LAB_00104b8a;
      }
      *(uint *)(this + 0x9c8) = uVar12 & 1;
      *(int *)(this + 0x9cc) = (int)uVar12 >> 1;
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      auVar17._0_8_ = (double)(uVar12 & 1);
      auVar17._8_8_ = (double)((int)uVar12 >> 1);
      *(uint *)(this + 0x960) = uVar12;
      auVar18._8_8_ = (double)(int)((ulong)uVar7 >> 0x20);
      auVar18._0_8_ = (double)(int)uVar7;
      auVar18 = divpd(auVar17,auVar18);
      *(ulong *)(this + 0x9d0) = CONCAT44((float)auVar18._8_8_,(float)auVar18._0_8_);
      uVar7 = RenderingDevice::get_singleton();
      local_60 = (undefined8 *)((ulong)local_60 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = 0;
      local_68 = local_98;
      if (puVar15 == (undefined8 *)0x0) {
        uVar8 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar4,local_a0,2,&local_68);
        RenderingDevice::compute_list_bind_uniform_set(uVar7,param_1,uVar8,2);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
        lVar9 = local_48;
        uVar8 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar4,local_a0,2,&local_68);
        RenderingDevice::compute_list_bind_uniform_set(uVar7,param_1,uVar8,2);
        if (lVar9 != 0) {
          LOCK();
          plVar2 = (long *)(lVar9 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          puVar15 = local_78[0];
          if (*plVar2 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
            puVar15 = local_78[0];
          }
        }
      }
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar9,param_1,(int)this + 0x958);
      iVar5 = *(int *)(param_3 + 0x18);
      if (this[4] == (SSEffects)0x0) {
        uVar12 = (iVar5 + 1) / 2;
        uVar14 = (*(int *)(param_3 + 0x1c) + 1) / 2;
      }
      else {
        iVar6 = iVar5 + 6;
        if (-1 < iVar5 + 3) {
          iVar6 = iVar5 + 3;
        }
        uVar12 = iVar6 >> 2;
        iVar6 = *(int *)(param_3 + 0x1c) + 3;
        iVar5 = *(int *)(param_3 + 0x1c) + 6;
        if (-1 < iVar6) {
          iVar5 = iVar6;
        }
        uVar14 = iVar5 >> 2;
      }
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar9,(uint)param_1,uVar12,uVar14);
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        plVar2 = puVar15 + -2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static(local_78[0] + -2,false);
        }
      }
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 4);
  lVar11 = RenderingDevice::get_singleton();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    RenderingDevice::compute_list_add_barrier(lVar11);
    return;
  }
LAB_001050e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SSEffects::sub_surface_scattering(Ref<RenderSceneBuffersRD>, RID, RID, Projection
   const&, Vector2i const&) */

void RendererRD::SSEffects::sub_surface_scattering
               (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,Plane *param_7,uint *param_8)

{
  long *plVar1;
  Version *pVVar2;
  undefined4 uVar3;
  code *pcVar4;
  UniformSetCacheRD *pUVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 local_1b8;
  undefined8 local_1a8;
  long local_168 [2];
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 *local_138 [2];
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  long local_108 [2];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 *local_d8 [2];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  ulong local_a8 [2];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  fVar24 = (float)((ulong)param_2 >> 0x20);
  uVar23 = (undefined4)param_2;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x658;
      pcVar13 = "Parameter \"uniform_set_cache\" is null.";
LAB_001064b9:
      _err_print_error("sub_surface_scattering",
                       "servers/rendering/renderer_rd/effects/ss_effects.cpp",uVar8,pcVar13,0,0);
      return;
    }
    goto LAB_001065b4;
  }
  lVar7 = RendererRD::MaterialStorage::get_singleton();
  if (lVar7 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x65a;
      pcVar13 = "Parameter \"material_storage\" is null.";
      goto LAB_001064b9;
    }
    goto LAB_001065b4;
  }
  lVar7 = *(long *)(lVar7 + 0x50);
  lVar15 = *param_4;
  uVar3 = *(undefined4 *)(lVar15 + 0x184);
  if ((sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)::
       {lambda()#2}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                                    ::{lambda()#2}::operator()()::sname), iVar16 != 0)) {
    _scs_create((char *)&sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                         ::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                  ::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                         ::{lambda()#2}::operator()()::sname);
  }
  if ((sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)::
       {lambda()#1}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                                    ::{lambda()#1}::operator()()::sname), iVar16 != 0)) {
    _scs_create((char *)&sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                         ::{lambda()#1}::operator()()::sname);
  }
  uVar8 = RenderSceneBuffersRD::create_texture
                    (lVar15,&sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                             ::{lambda()#1}::operator()()::sname,
                     &sub_surface_scattering(Ref<RenderSceneBuffersRD>,RID,RID,Projection_const&,Vector2i_const&)
                      ::{lambda()#2}::operator()()::sname,uVar3,0x109,0,*(undefined8 *)param_8,1,1,1
                     ,0);
  local_58[0] = __LC80;
  local_58[1] = __LC102;
  local_68 = Projection::xform4(param_7);
  fVar22 = (float)local_68;
  local_60 = CONCAT44(fVar24,uVar23);
  RenderingDevice::get_singleton();
  pvVar9 = (void *)RenderingDevice::compute_list_begin();
  uVar23 = Projection::get_z_far();
  *(undefined4 *)(param_3 + 0x1558) = uVar23;
  uVar23 = Projection::get_z_near();
  *(undefined4 *)(param_3 + 0x155c) = uVar23;
  bVar6 = Projection::is_orthogonal();
  *(uint *)(param_3 + 0x1564) = (uint)bVar6;
  uVar20 = *(ulong *)(param_3 + 0x16f8);
  *(uint *)(param_3 + 0x1550) = *param_8;
  uVar14 = param_8[1];
  *(undefined4 *)(param_3 + 0x1560) = 0;
  *(uint *)(param_3 + 0x1554) = uVar14;
  *(ulong *)(param_3 + 0x1568) = CONCAT44(*(undefined4 *)(param_3 + 0x38),fVar22 / fVar24);
  *(undefined4 *)(param_3 + 0x1570) = *(undefined4 *)(param_3 + 0x3c);
  iVar16 = *(int *)(param_3 + 0x34) + -1;
  if (iVar16 < 0) {
    if (*(long *)(param_3 + 0x1598) == 0) goto LAB_00106510;
    lVar15 = *(long *)(*(long *)(param_3 + 0x1598) + -8);
LAB_00105fa7:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,(long)iVar16,
               lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_00105fe1:
    local_1b8 = 0;
  }
  else {
    uVar17 = (ulong)iVar16;
    if (*(long *)(param_3 + 0x1598) == 0) {
LAB_00106510:
      lVar15 = 0;
      goto LAB_00105fa7;
    }
    lVar15 = *(long *)(*(long *)(param_3 + 0x1598) + -8);
    if (lVar15 <= (long)uVar17) goto LAB_00105fa7;
    lVar15 = *(long *)(param_3 + 0x15a8);
    uVar12 = uVar17;
    if (lVar15 == 0) {
LAB_00106430:
      lVar19 = 0;
      uVar12 = uVar17;
LAB_00106451:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar19,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar19 = *(long *)(lVar15 + -8);
    if (lVar19 <= (long)uVar17) goto LAB_00106451;
    if (*(char *)(lVar15 + uVar17) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00105fe1;
    }
    if ((uVar20 == 0) || (*(uint *)(param_3 + 0x1654) <= (uint)uVar20)) {
LAB_00106030:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00105fe1;
    }
    lVar15 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x1650)) * 0xa0 +
             *(long *)(*(long *)(param_3 + 0x1640) +
                      ((uVar20 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x1650)) * 8);
    if (*(int *)(lVar15 + 0x98) != (int)(uVar20 >> 0x20)) {
      if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00106030;
    }
    pVVar2 = (Version *)(param_3 + 0x1580);
    iVar16 = (int)lVar15;
    if (*(char *)(lVar15 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar19 = *(long *)(param_3 + 0x15f8);
      if (lVar19 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(lVar19 + -8) <= lVar18) break;
          if (*(char *)(lVar19 + lVar18) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar16);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar16);
          }
          lVar19 = *(long *)(param_3 + 0x15f8);
          lVar18 = lVar18 + 1;
        } while (lVar19 != 0);
      }
    }
    lVar18 = *(long *)(param_3 + 0x15b8);
    if (lVar18 == 0) goto LAB_00106430;
    lVar19 = *(long *)(lVar18 + -8);
    if (lVar19 <= (long)uVar17) goto LAB_00106451;
    uVar12 = (ulong)*(uint *)(lVar18 + uVar17 * 4);
    lVar18 = *(long *)(lVar15 + 0x68);
    if (lVar18 == 0) {
      lVar19 = 0;
      goto LAB_00106451;
    }
    lVar19 = *(long *)(lVar18 + -8);
    if (lVar19 <= (long)uVar12) goto LAB_00106451;
    if (*(long *)(lVar18 + uVar12 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar16);
    }
    if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_00105fe1;
    lVar15 = *(long *)(lVar15 + 0x88);
    if (lVar15 == 0) goto LAB_00106430;
    lVar19 = *(long *)(lVar15 + -8);
    uVar12 = uVar17;
    if (lVar19 <= (long)uVar17) goto LAB_00106451;
    local_1b8 = *(undefined8 *)(lVar15 + uVar17 * 8);
  }
  uVar10 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline
            (uVar10,pvVar9,
             *(undefined8 *)(param_3 + 0x1700 + (long)(*(int *)(param_3 + 0x34) + -1) * 8));
  local_90 = (undefined8 *)0x0;
  local_58[0] = lVar7;
  local_58[1] = param_5;
  iVar16 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,2);
  puVar11 = local_90;
  if (iVar16 == 0) {
    lVar15 = 0;
    do {
      if (puVar11 == (undefined8 *)0x0) {
        lVar19 = 0;
LAB_00106233:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar19,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar19 = *(long *)((long)puVar11 + -8);
        if (lVar19 <= lVar15) goto LAB_00106233;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
        *(long *)((long)local_90 + lVar15 * 8) = local_58[lVar15];
        puVar11 = local_90;
      }
      if (lVar15 != 0) break;
      lVar15 = 1;
    } while( true );
  }
  uVar10 = _LC76;
  plVar1 = (long *)((long)puVar11 + -0x10);
  local_168[0] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      lVar15 = *plVar1;
      if (lVar15 == 0) goto LAB_001054dd;
      LOCK();
      lVar19 = *plVar1;
      bVar21 = lVar15 == lVar19;
      if (bVar21) {
        *plVar1 = lVar15 + 1;
        lVar19 = lVar15;
      }
      UNLOCK();
    } while (!bVar21);
    if (lVar19 != -1) {
      local_168[0] = (long)local_90;
    }
LAB_001054dd:
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_90 + -0x10),false);
      }
    }
  }
  local_90 = (undefined8 *)0x0;
  iVar16 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,1);
  puVar11 = local_90;
  if (iVar16 == 0) {
    if (local_90 == (undefined8 *)0x0) {
      lVar15 = 0;
LAB_0010610e:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar15,"p_index","size()","",false,false)
      ;
      goto LAB_00106158;
    }
    lVar15 = local_90[-1];
    if (lVar15 < 1) goto LAB_0010610e;
    CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
    *local_90 = param_5;
    puVar11 = local_90;
LAB_00105582:
    local_1a8 = _LC38;
    local_138[0] = (undefined8 *)0x0;
    local_148 = 0;
    local_150 = 0;
    plVar1 = puVar11 + -2;
    do {
      lVar15 = *plVar1;
      if (lVar15 == 0) goto LAB_001055b3;
      LOCK();
      lVar19 = *plVar1;
      bVar21 = lVar15 == lVar19;
      if (bVar21) {
        *plVar1 = lVar15 + 1;
        lVar19 = lVar15;
      }
      UNLOCK();
    } while (!bVar21);
    if (lVar19 != -1) {
      local_138[0] = local_90;
    }
LAB_001055b3:
    local_158 = local_1a8;
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = local_90 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_90 + -2,false);
      }
    }
  }
  else {
LAB_00106158:
    local_1a8 = _LC38;
    local_150 = 0;
    local_148 = 0;
    local_138[0] = (undefined8 *)0x0;
    local_158 = local_1a8;
    if (puVar11 != (undefined8 *)0x0) goto LAB_00105582;
  }
  local_90 = (undefined8 *)0x0;
  local_58[0] = lVar7;
  local_58[1] = uVar8;
  iVar16 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,2);
  puVar11 = local_90;
  if (iVar16 == 0) {
    lVar15 = 0;
    do {
      if (puVar11 == (undefined8 *)0x0) {
        lVar19 = 0;
LAB_001061eb:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar19,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar19 = *(long *)((long)puVar11 + -8);
        if (lVar19 <= lVar15) goto LAB_001061eb;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
        *(long *)((long)local_90 + lVar15 * 8) = local_58[lVar15];
        puVar11 = local_90;
      }
      if (lVar15 != 0) break;
      lVar15 = 1;
    } while( true );
  }
  plVar1 = (long *)((long)puVar11 + -0x10);
  local_120 = 0;
  local_118 = 0;
  local_108[0] = 0;
  local_128 = _LC76;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      lVar15 = *plVar1;
      if (lVar15 == 0) goto LAB_001056d4;
      LOCK();
      lVar19 = *plVar1;
      bVar21 = lVar15 == lVar19;
      if (bVar21) {
        *plVar1 = lVar15 + 1;
        lVar19 = lVar15;
      }
      UNLOCK();
    } while (!bVar21);
    if (lVar19 != -1) {
      local_108[0] = (long)local_90;
    }
LAB_001056d4:
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_90 + -0x10),false);
      }
    }
  }
  local_90 = (undefined8 *)0x0;
  iVar16 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,1);
  puVar11 = local_90;
  if (iVar16 == 0) {
    if (local_90 == (undefined8 *)0x0) {
      lVar15 = 0;
LAB_0010608c:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar15,"p_index","size()","",false,false)
      ;
      goto LAB_001060d0;
    }
    lVar15 = local_90[-1];
    if (lVar15 < 1) goto LAB_0010608c;
    CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
    *local_90 = uVar8;
    puVar11 = local_90;
LAB_00105778:
    local_f8 = local_1a8;
    local_d8[0] = (undefined8 *)0x0;
    local_e8 = 0;
    local_f0 = 0;
    plVar1 = puVar11 + -2;
    do {
      lVar15 = *plVar1;
      if (lVar15 == 0) goto LAB_001057a9;
      LOCK();
      lVar19 = *plVar1;
      bVar21 = lVar15 == lVar19;
      if (bVar21) {
        *plVar1 = lVar15 + 1;
        lVar19 = lVar15;
      }
      UNLOCK();
    } while (!bVar21);
    if (lVar19 != -1) {
      local_d8[0] = local_90;
    }
LAB_001057a9:
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = local_90 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_90 + -2,false);
      }
    }
  }
  else {
LAB_001060d0:
    local_f8 = local_1a8;
    local_f0 = 0;
    local_e8 = 0;
    local_d8[0] = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) goto LAB_00105778;
  }
  local_90 = (undefined8 *)0x0;
  local_58[0] = lVar7;
  local_58[1] = param_6;
  iVar16 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,2);
  puVar11 = local_90;
  if (iVar16 == 0) {
    lVar7 = 0;
    do {
      if (puVar11 == (undefined8 *)0x0) {
        lVar15 = 0;
LAB_0010619b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar15,"p_index","size()","",false,
                   false);
      }
      else {
        lVar15 = *(long *)((long)puVar11 - 8);
        if (lVar15 <= lVar7) goto LAB_0010619b;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
        *(long *)((long)local_90 + lVar7 * 8) = local_58[lVar7];
        puVar11 = local_90;
      }
      if (lVar7 != 0) break;
      lVar7 = 1;
    } while( true );
  }
  plVar1 = (long *)((long)puVar11 - 0x10);
  local_c0 = 0;
  local_b8 = 0;
  local_a8[0] = 0;
  local_c8 = _LC76;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_001058af;
      LOCK();
      lVar15 = *plVar1;
      bVar21 = lVar7 == lVar15;
      if (bVar21) {
        *plVar1 = lVar7 + 1;
        lVar15 = lVar7;
      }
      UNLOCK();
    } while (!bVar21);
    if (lVar15 != -1) {
      local_a8[0] = (ulong)local_90;
    }
LAB_001058af:
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_90 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_90 - 0x10),false);
      }
    }
  }
  uVar8 = RenderingDevice::get_singleton();
  local_78[0] = 0;
  local_98 = uVar10;
  local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
  local_88 = 0;
  if (local_168[0] == 0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,0,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,0);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_168);
    lVar7 = local_78[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,0,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,0);
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
    }
  }
  uVar8 = RenderingDevice::get_singleton();
  local_78[0] = 0;
  local_98 = local_f8;
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,local_f0);
  local_88 = local_e8;
  if (local_d8[0] == (undefined8 *)0x0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,1,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,1);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_d8);
    lVar7 = local_78[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,1,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,1);
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
    }
  }
  uVar8 = RenderingDevice::get_singleton();
  local_78[0] = 0;
  local_98 = local_c8;
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,local_c0);
  local_88 = local_b8;
  if (local_a8[0] == 0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,2,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,2);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_a8);
    lVar7 = local_78[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,2,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,2);
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
    }
  }
  lVar7 = RenderingDevice::get_singleton();
  uVar14 = (int)param_3 + 0x1550;
  RenderingDevice::compute_list_set_push_constant(lVar7,pvVar9,uVar14);
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_dispatch_threads(lVar7,(uint)pvVar9,*param_8,param_8[1]);
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_add_barrier(lVar7);
  uVar8 = RenderingDevice::get_singleton();
  local_78[0] = 0;
  local_98 = local_128;
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,local_120);
  local_88 = local_118;
  if (local_108[0] == 0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,0,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,0);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_108);
    lVar7 = local_78[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,0,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,0);
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
    }
  }
  uVar8 = RenderingDevice::get_singleton();
  local_78[0] = 0;
  local_98 = local_158;
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,local_150);
  local_88 = local_148;
  if (local_138[0] == (undefined8 *)0x0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,1,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,1);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_138);
    lVar7 = local_78[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,1,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,1);
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
    }
  }
  uVar8 = RenderingDevice::get_singleton();
  uVar20 = local_a8[0];
  local_78[0] = 0;
  local_98 = local_c8;
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,local_c0);
  local_88 = local_b8;
  if (local_a8[0] == 0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,2,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,2);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_a8);
    lVar7 = local_78[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_1b8,2,&local_98);
    RenderingDevice::compute_list_bind_uniform_set(uVar8,pvVar9,uVar10,2);
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      uVar20 = local_a8[0];
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
        uVar20 = local_a8[0];
      }
    }
  }
  *(undefined4 *)(param_3 + 0x1560) = 1;
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_set_push_constant(lVar7,pvVar9,uVar14);
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_dispatch_threads(lVar7,(uint)pvVar9,*param_8,param_8[1]);
  RenderingDevice::get_singleton();
  RenderingDevice::compute_list_end();
  if (uVar20 != 0) {
    LOCK();
    plVar1 = (long *)(uVar20 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_a8[0] - 0x10),false);
    }
  }
  if (local_d8[0] != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_d8[0] + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_d8[0] + -2,false);
    }
  }
  if (local_108[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_108[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_108[0] + -0x10),false);
    }
  }
  if (local_138[0] != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_138[0] + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_138[0] + -2,false);
    }
  }
  if (local_168[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_168[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_168[0] + -0x10),false);
        return;
      }
      goto LAB_001065b4;
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001065b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SSEffects::screen_space_reflection(Ref<RenderSceneBuffersRD>,
   RendererRD::SSEffects::SSRRenderBuffers&, RID const*, RID const*, int, float, float, float,
   Projection const*, Vector3 const*) */

void __thiscall
RendererRD::SSEffects::screen_space_reflection
          (int param_1,undefined4 param_2,int param_3,SSEffects *this,long *param_5,ulong *param_6,
          long param_7,long param_8,int param_9,float *param_10,undefined8 *param_11)

{
  long *plVar1;
  Version *pVVar2;
  uint uVar3;
  StringName *pSVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  UniformSetCacheRD *pUVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  char *pcVar24;
  uint uVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long in_FS_OFFSET;
  undefined4 uVar34;
  undefined8 uVar35;
  ulong local_420;
  char *local_418;
  undefined8 local_3f0;
  float *local_3e8;
  char *local_3e0;
  undefined8 local_3a8;
  undefined8 local_390;
  long local_338 [2];
  char *local_328;
  undefined1 local_320;
  undefined8 local_318;
  long local_308 [2];
  char *local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e8;
  long local_2d8 [2];
  char *local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  long local_2a8 [2];
  char *local_298;
  undefined1 local_290;
  undefined8 local_288;
  long local_278 [2];
  char *local_268;
  undefined1 local_260;
  undefined8 local_258;
  long local_248 [2];
  char *local_238;
  undefined1 local_230;
  undefined8 local_228;
  long local_218 [2];
  char *local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 *local_1e8 [2];
  char *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  long local_1b8 [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  uint uStack_150;
  uint uStack_14c;
  int local_148;
  int iStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  uint local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_68;
  undefined4 local_60 [8];
  long local_40;
  
  pUVar9 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar22 = 0x55c;
      pcVar24 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010b1cb:
      _err_print_error("screen_space_reflection",
                       "servers/rendering/renderer_rd/effects/ss_effects.cpp",uVar22,pcVar24,0,0);
      return;
    }
  }
  else {
    lVar13 = RendererRD::MaterialStorage::get_singleton();
    if (lVar13 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar22 = 0x55e;
        pcVar24 = "Parameter \"material_storage\" is null.";
        goto LAB_0010b1cb;
      }
    }
    else {
      uVar22 = *(undefined8 *)(lVar13 + 0x50);
      uVar3 = *(uint *)(*param_5 + 0x1a8);
      if (*(long *)(this + 0x13a8) == 0) {
        uVar14 = RenderingDevice::get_singleton();
        local_1d0 = (undefined8 *)0x0;
        uVar14 = RenderingDevice::uniform_buffer_create(uVar14,0x120,&local_1d8,0);
        puVar27 = local_1d0;
        *(undefined8 *)(this + 0x13a8) = uVar14;
        if (local_1d0 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = (long *)((long)local_1d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_1d0 = (undefined8 *)0x0;
            Memory::free_static((void *)((long)puVar27 + -0x10),false);
          }
        }
      }
      if (uVar3 == 0) {
        uVar22 = RenderingDevice::get_singleton();
        RenderingDevice::buffer_update(uVar22,*(undefined8 *)(this + 0x13a8),0,0x120,&local_168);
        RenderingDevice::get_singleton();
        RenderingDevice::compute_list_begin();
      }
      else {
        local_3e8 = param_10;
        puVar27 = &local_168;
        puVar33 = &local_168;
        do {
          uVar14 = *(undefined8 *)(param_10 + 2);
          puVar31 = puVar27 + 8;
          uVar16 = *(undefined8 *)(param_10 + 4);
          uVar17 = *(undefined8 *)(param_10 + 6);
          uVar18 = *(undefined8 *)(param_10 + 8);
          uVar19 = *(undefined8 *)(param_10 + 10);
          uVar20 = *(undefined8 *)(param_10 + 0xc);
          uVar35 = *(undefined8 *)(param_10 + 0xe);
          *puVar27 = *(undefined8 *)param_10;
          puVar27[1] = uVar14;
          puVar27[2] = uVar16;
          puVar27[3] = uVar17;
          puVar27[4] = uVar18;
          puVar27[5] = uVar19;
          puVar27[6] = uVar20;
          puVar27[7] = uVar35;
          Projection::inverse();
          auVar8._8_8_ = uStack_1a0;
          auVar8._0_8_ = local_1a8;
          *(undefined1 (*) [16])(puVar27 + 0x10) = auVar8;
          puVar27[0x12] = local_198;
          puVar27[0x13] = uStack_190;
          puVar27[0x14] = local_188;
          puVar27[0x15] = uStack_180;
          *(undefined1 (*) [16])(puVar27 + 0x16) = local_178;
          Projection::~Projection((Projection *)&local_1a8);
          puVar33[0x20] = *param_11;
          uVar34 = *(undefined4 *)(param_11 + 1);
          *(undefined4 *)((long)puVar33 + 0x10c) = 0;
          *(undefined4 *)(puVar33 + 0x21) = uVar34;
          param_11 = (undefined8 *)((long)param_11 + 0xc);
          puVar27 = puVar31;
          param_10 = param_10 + 0x10;
          puVar33 = puVar33 + 2;
        } while (&local_168 + (ulong)uVar3 * 8 != puVar31);
        uVar14 = RenderingDevice::get_singleton();
        RenderingDevice::buffer_update(uVar14,*(undefined8 *)(this + 0x13a8),0,0x120);
        RenderingDevice::get_singleton();
        pvVar15 = (void *)RenderingDevice::compute_list_begin();
        local_420 = 0;
        do {
          pSVar4 = (StringName *)*param_5;
          if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::operator()()
               ::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                            ::{lambda()#2}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                 {lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::
                          operator()()::sname,&__dso_handle);
            __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                 {lambda()#2}::operator()()::sname);
          }
          if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::operator()()
               ::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                            ::{lambda()#1}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                 {lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::
                          operator()()::sname,&__dso_handle);
            __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                 {lambda()#1}::operator()()::sname);
          }
          uVar14 = RenderSceneBuffersRD::get_texture_slice
                             (pSVar4,(StringName *)
                                     &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                      {lambda()#1}::operator()()::sname,0x121bb8,(uint)local_420,0,1
                             );
          uVar16 = RenderSceneBuffersRD::get_depth_texture((uint)*param_5);
          pSVar4 = (StringName *)*param_5;
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#2}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#2}::operator()()::sname);
          }
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#1}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#1}::operator()()::sname);
          }
          uVar17 = RenderSceneBuffersRD::get_texture
                             (pSVar4,(StringName *)
                                     &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                      ::{lambda()#1}::operator()()::sname);
          pSVar4 = (StringName *)*param_5;
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#4}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#4}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#4}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#4}::operator()()::sname);
          }
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#3}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#3}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#3}::operator()()::sname);
          }
          uVar18 = RenderSceneBuffersRD::get_texture
                             (pSVar4,(StringName *)
                                     &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                      ::{lambda()#3}::operator()()::sname);
          pSVar4 = (StringName *)*param_5;
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#6}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#6}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#6}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#6}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#6}::operator()()::sname);
          }
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#5}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#5}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#5}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#5}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#5}::operator()()::sname);
          }
          uVar19 = RenderSceneBuffersRD::get_texture
                             (pSVar4,(StringName *)
                                     &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                      ::{lambda()#5}::operator()()::sname);
          pSVar4 = (StringName *)*param_5;
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#8}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#8}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#8}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#8}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#8}::operator()()::sname);
          }
          if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
               ::{lambda()#7}::operator()()::sname == '\0') &&
             (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                            ::{lambda()#7}::operator()()::sname), iVar12 != 0)) {
            _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#7}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                          ::{lambda()#7}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                 ::{lambda()#7}::operator()()::sname);
          }
          uVar35 = 1;
          uVar20 = RenderSceneBuffersRD::get_texture_slice
                             (pSVar4,(StringName *)
                                     &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                      ::{lambda()#7}::operator()()::sname,0x11bdf8,(uint)local_420,0
                              ,1);
          local_390 = 0;
          local_3a8 = 0;
          if (*(int *)(this + 0x30) != 0) {
            pSVar4 = (StringName *)*param_5;
            if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                 ::{lambda()#10}::operator()()::sname == '\0') &&
               (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                              ::{lambda()#10}::operator()()::sname,uVar35),
               iVar12 != 0)) {
              _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#10}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                            ::{lambda()#10}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#10}::operator()()::sname);
            }
            if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                 ::{lambda()#9}::operator()()::sname == '\0') &&
               (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                              ::{lambda()#9}::operator()()::sname), iVar12 != 0)) {
              _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#9}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                            ::{lambda()#9}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#9}::operator()()::sname);
            }
            local_3a8 = RenderSceneBuffersRD::get_texture_slice
                                  (pSVar4,(StringName *)
                                          &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                           ::{lambda()#9}::operator()()::sname,0x11bdd8,0,0,1);
            pSVar4 = (StringName *)*param_5;
            if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                 ::{lambda()#12}::operator()()::sname == '\0') &&
               (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                              ::{lambda()#12}::operator()()::sname), iVar12 != 0)) {
              _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#12}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                            ::{lambda()#12}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#12}::operator()()::sname);
            }
            if ((screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                 ::{lambda()#11}::operator()()::sname == '\0') &&
               (iVar12 = __cxa_guard_acquire(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                              ::{lambda()#11}::operator()()::sname), iVar12 != 0)) {
              _scs_create((char *)&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#11}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                            ::{lambda()#11}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                   ::{lambda()#11}::operator()()::sname);
            }
            local_390 = RenderSceneBuffersRD::get_texture_slice
                                  (pSVar4,(StringName *)
                                          &screen_space_reflection(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSRRenderBuffers&,RID_const*,RID_const*,int,float,float,float,Projection_const*,Vector3_const*)
                                           ::{lambda()#11}::operator()()::sname,0x11bdb8,1,0,1);
          }
          uVar35 = RenderingDevice::get_singleton();
          local_168 = CONCAT44(_UNK_00136094,_LC70);
          uStack_160 = _UNK_00136098;
          itos((long)&local_208);
          local_1d8 = "SSR View ";
          local_238 = (char *)0x0;
          local_1d0 = (undefined8 *)0x9;
          String::parse_latin1((StrRange *)&local_238);
          String::operator+((String *)&local_1d8,(String *)&local_238);
          RenderingDevice::draw_command_begin_label(uVar35,(String *)&local_1d8,&local_168);
          pcVar24 = local_1d8;
          if (local_1d8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_1d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_1d8 = (char *)0x0;
              Memory::free_static(pcVar24 + -0x10,false);
            }
          }
          pcVar24 = local_238;
          if (local_238 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_238 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_238 = (char *)0x0;
              Memory::free_static(pcVar24 + -0x10,false);
            }
          }
          pcVar24 = local_208;
          if (local_208 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_208 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_208 = (char *)0x0;
              Memory::free_static(pcVar24 + -0x10,false);
            }
          }
          uVar35 = RenderingDevice::get_singleton();
          local_208 = (char *)0x0;
          local_168 = CONCAT44(_UNK_00136094,_LC70);
          local_1d0 = (undefined8 *)0x9;
          local_1d8 = "SSR Scale";
          uStack_160 = _UNK_00136098;
          String::parse_latin1((StrRange *)&local_208);
          RenderingDevice::draw_command_begin_label(uVar35,(StrRange *)&local_208,&local_168);
          pcVar24 = local_208;
          if (local_208 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_208 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_208 = (char *)0x0;
              Memory::free_static(pcVar24 + -0x10,false);
            }
          }
          uStack_150 = (uint)local_420;
          uVar34 = Projection::get_z_far();
          uStack_160._4_4_ = uVar34;
          uVar34 = Projection::get_z_near();
          uStack_160 = CONCAT44(uStack_160._4_4_,uVar34);
          bVar11 = Projection::is_orthogonal();
          uVar23 = *(ulong *)(this + 0x11f0);
          local_158 = (ulong)bVar11;
          local_168 = *param_6;
          if (*(long *)(this + 0x1090) != 0) {
            lVar13 = *(long *)(*(long *)(this + 0x1090) + -8);
            if (lVar13 < 1) goto LAB_0010b015;
            pcVar24 = *(char **)(this + 0x10a0);
            if (pcVar24 == (char *)0x0) goto LAB_0010a3c8;
            lVar13 = *(long *)(pcVar24 + -8);
            if (lVar13 < 1) goto LAB_0010a3cb;
            if (*pcVar24 == '\0') {
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                               ,0,0);
              goto LAB_0010a571;
            }
            if ((uVar23 == 0) || (*(uint *)(this + 0x114c) <= (uint)uVar23)) {
LAB_0010b170:
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.",0,0);
LAB_0010a571:
              local_3f0 = 0;
              goto LAB_00106d01;
            }
            lVar26 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x1148)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x1138) +
                              ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x1148)) * 8);
            if (*(int *)(lVar26 + 0x98) != (int)(uVar23 >> 0x20)) {
              if (*(int *)(lVar26 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_0010b170;
            }
            pVVar2 = (Version *)(this + 0x1078);
            iVar12 = (int)lVar26;
            if (*(char *)(lVar26 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar13 = *(long *)(this + 0x10f0);
              if (lVar13 != 0) {
                lVar28 = 0;
                do {
                  if (*(long *)(lVar13 + -8) <= lVar28) break;
                  if (*(char *)(lVar13 + lVar28) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar12);
                  }
                  lVar13 = *(long *)(this + 0x10f0);
                  lVar28 = lVar28 + 1;
                } while (lVar13 != 0);
              }
            }
            puVar5 = *(uint **)(this + 0x10b0);
            if (puVar5 == (uint *)0x0) goto LAB_0010a3c8;
            lVar13 = *(long *)(puVar5 + -2);
            if (lVar13 < 1) goto LAB_0010a3cb;
            uVar23 = (ulong)*puVar5;
            lVar28 = *(long *)(lVar26 + 0x68);
            if (lVar28 != 0) {
              lVar13 = *(long *)(lVar28 + -8);
              if (lVar13 <= (long)uVar23) goto LAB_0010a3e8;
              if (*(long *)(lVar28 + uVar23 * 8) != 0) {
                ShaderRD::_compile_version_end(pVVar2,iVar12);
                if (*(char *)(lVar26 + 0x90) != '\0') goto LAB_00106cdc;
                goto LAB_0010a571;
              }
              if (*(char *)(lVar26 + 0x90) == '\0') goto LAB_0010a571;
LAB_00106cdc:
              puVar27 = *(undefined8 **)(lVar26 + 0x88);
              if (puVar27 == (undefined8 *)0x0) goto LAB_0010a3c8;
              lVar13 = puVar27[-1];
              if (lVar13 < 1) goto LAB_0010a3cb;
              local_3f0 = *puVar27;
              goto LAB_00106d01;
            }
LAB_0010b19a:
            lVar13 = 0;
            goto LAB_0010a3e8;
          }
          lVar13 = 0;
LAB_0010b015:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,
                     lVar13,"p_variant","variant_defines.size()","",false,false);
          local_3f0 = 0;
LAB_00106d01:
          uVar35 = RenderingDevice::get_singleton();
          lVar13 = 0;
          uVar21 = (ulong)(uVar3 == 2);
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar35,pvVar15,*(undefined8 *)(this + uVar21 * 8 + 0x11f8));
          local_1d0 = (undefined8 *)0x0;
          local_1a8 = uVar22;
          uStack_1a0 = uVar14;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,2);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            do {
              if (puVar27 == (undefined8 *)0x0) {
                lVar26 = 0;
LAB_001098a0:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar26,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar26 = *(long *)((long)puVar27 - 8);
                if (lVar26 <= lVar13) goto LAB_001098a0;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
                *(undefined8 *)((long)local_1d0 + lVar13 * 8) =
                     *(undefined8 *)((Projection *)&local_1a8 + lVar13 * 8);
                puVar27 = local_1d0;
              }
              if (lVar13 != 0) break;
              lVar13 = 1;
            } while( true );
          }
          local_320 = 0;
          local_318 = 0;
          local_308[0] = 0;
          local_328 = _LC76;
          if (puVar27 == (undefined8 *)0x0) {
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1d8 = _LC76;
LAB_0010a39b:
            local_1b8[0] = 0;
            local_1c8 = local_318;
            uVar35 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,0,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar35,0);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_308,(CowData *)&local_1d0);
            LOCK();
            plVar1 = (long *)((long)puVar27 - 0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)((long)local_1d0 - 0x10),false);
            }
            lVar13 = local_308[0];
            uVar10 = local_320;
            pcVar24 = local_328;
            uVar14 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
            local_1c8 = local_318;
            if (lVar13 == 0) goto LAB_0010a39b;
            CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_308);
            lVar13 = local_1b8[0];
            uVar35 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,0,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar35,0);
            if (lVar13 != 0) {
              LOCK();
              plVar1 = (long *)(lVar13 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
              }
            }
          }
          lVar13 = 0;
          local_1d0 = (undefined8 *)0x0;
          local_1a8 = uVar22;
          uStack_1a0 = uVar16;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,2);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            do {
              if (puVar27 == (undefined8 *)0x0) {
                lVar26 = 0;
LAB_00109918:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar26,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar26 = *(long *)((long)puVar27 + -8);
                if (lVar26 <= lVar13) goto LAB_00109918;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
                *(undefined8 *)((long)local_1d0 + lVar13 * 8) =
                     *(undefined8 *)((Projection *)&local_1a8 + lVar13 * 8);
                puVar27 = local_1d0;
              }
              if (lVar13 != 0) break;
              lVar13 = 1;
            } while( true );
          }
          local_2f0 = 0;
          local_2e8 = 0;
          local_2d8[0] = 0;
          local_2f8 = _LC76;
          if (puVar27 != (undefined8 *)0x0) {
            CowData<RID>::_ref((CowData<RID> *)local_2d8,(CowData *)&local_1d0);
            LOCK();
            plVar1 = (long *)((long)puVar27 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)((long)local_1d0 + -0x10),false);
            }
          }
          lVar13 = 0;
          local_1d0 = (undefined8 *)0x0;
          uStack_1a0 = *(undefined8 *)(param_7 + local_420 * 8);
          local_1a8 = uVar22;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,2);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            do {
              if (puVar27 == (undefined8 *)0x0) {
                lVar26 = 0;
LAB_00109828:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar26,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar26 = *(long *)((long)puVar27 - 8);
                if (lVar26 <= lVar13) goto LAB_00109828;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
                *(undefined8 *)((long)local_1d0 + lVar13 * 8) =
                     *(undefined8 *)((Projection *)&local_1a8 + lVar13 * 8);
                puVar27 = local_1d0;
              }
              if (lVar13 != 0) break;
              lVar13 = 1;
            } while( true );
          }
          local_2c0 = 0;
          local_2b8 = 0;
          local_2a8[0] = 0;
          local_2c8 = _LC15;
          if (puVar27 == (undefined8 *)0x0) {
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1b8[0] = 0;
            local_1d8 = _LC15;
            local_1c8 = local_2b8;
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_2a8,(CowData *)&local_1d0);
            LOCK();
            plVar1 = (long *)((long)puVar27 - 0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)((long)local_1d0 - 0x10),false);
            }
            lVar13 = local_2a8[0];
            uVar10 = local_2c0;
            pcVar24 = local_2c8;
            uVar14 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
            local_1c8 = local_2b8;
            if (lVar13 != 0) {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_2a8);
            }
          }
          local_1e8[0] = (undefined8 *)0x0;
          local_208 = local_2f8;
          local_200 = local_2f0;
          local_1f8 = local_2e8;
          if (local_2d8[0] == 0) {
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar9,local_3f0,1,(StrRange *)&local_208);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)local_2d8);
            puVar27 = local_1e8[0];
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar9,local_3f0,1,(StrRange *)&local_208);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            if (puVar27 != (undefined8 *)0x0) {
              LOCK();
              plVar1 = (long *)((long)puVar27 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)((long)local_1e8[0] + -0x10),false);
              }
            }
          }
          if (local_1b8[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_1b8[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_1b8[0] + -0x10),false);
            }
          }
          local_1d0 = (undefined8 *)0x0;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            if (local_1d0 == (undefined8 *)0x0) {
              lVar13 = 0;
LAB_00109957:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                         false,false);
              goto LAB_00109990;
            }
            lVar13 = local_1d0[-1];
            if (lVar13 < 1) goto LAB_00109957;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
            *local_1d0 = uVar19;
            puVar27 = local_1d0;
LAB_001071e1:
            local_418 = _LC38;
            local_278[0] = 0;
            local_288 = 0;
            local_290 = 0;
            local_298 = _LC38;
            CowData<RID>::_ref((CowData<RID> *)local_278,(CowData *)&local_1d0);
            LOCK();
            plVar1 = puVar27 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_1d0 + -2,false);
            }
            lVar13 = local_278[0];
            uVar10 = local_290;
            pcVar24 = local_298;
            uVar14 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
            local_1c8 = local_288;
            if (lVar13 == 0) goto LAB_00109a06;
            CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_278);
            lVar13 = local_1b8[0];
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,2,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            if (lVar13 != 0) {
              LOCK();
              plVar1 = (long *)(lVar13 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
              }
            }
          }
          else {
LAB_00109990:
            pcVar24 = _LC38;
            local_290 = 0;
            local_288 = 0;
            local_278[0] = 0;
            local_418 = _LC38;
            local_298 = _LC38;
            if (puVar27 != (undefined8 *)0x0) goto LAB_001071e1;
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1d8 = pcVar24;
LAB_00109a06:
            local_1b8[0] = 0;
            local_1c8 = local_288;
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,2,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
          }
          local_1d0 = (undefined8 *)0x0;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            if (local_1d0 == (undefined8 *)0x0) {
              lVar13 = 0;
LAB_00109af6:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                         false,false);
              goto LAB_00109b30;
            }
            lVar13 = local_1d0[-1];
            if (lVar13 < 1) goto LAB_00109af6;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
            *local_1d0 = uVar17;
            puVar27 = local_1d0;
LAB_0010736b:
            local_268 = local_418;
            local_248[0] = 0;
            local_258 = 0;
            local_260 = 0;
            CowData<RID>::_ref((CowData<RID> *)local_248,(CowData *)&local_1d0);
            LOCK();
            plVar1 = puVar27 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_1d0 + -2,false);
            }
          }
          else {
LAB_00109b30:
            local_268 = local_418;
            local_260 = 0;
            local_258 = 0;
            local_248[0] = 0;
            if (puVar27 != (undefined8 *)0x0) goto LAB_0010736b;
          }
          local_1d0 = (undefined8 *)0x0;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            if (local_1d0 == (undefined8 *)0x0) {
              lVar13 = 0;
LAB_00109a3c:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                         false,false);
              goto LAB_00109a78;
            }
            lVar13 = local_1d0[-1];
            if (lVar13 < 1) goto LAB_00109a3c;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
            *local_1d0 = uVar18;
            puVar27 = local_1d0;
LAB_00107426:
            local_3e0 = _LC51;
            local_218[0] = 0;
            local_228 = 0;
            local_230 = 0;
            local_238 = _LC51;
            CowData<RID>::_ref((CowData<RID> *)local_218,(CowData *)&local_1d0);
            LOCK();
            plVar1 = puVar27 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_1d0 + -2,false);
            }
            lVar13 = local_218[0];
            uVar10 = local_230;
            pcVar24 = local_238;
            uVar14 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
            local_1c8 = local_228;
            if (lVar13 != 0) {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_218);
            }
          }
          else {
LAB_00109a78:
            pcVar24 = _LC51;
            local_230 = 0;
            local_228 = 0;
            local_218[0] = 0;
            local_3e0 = _LC51;
            local_238 = _LC51;
            if (puVar27 != (undefined8 *)0x0) goto LAB_00107426;
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            local_1c8 = local_228;
          }
          local_1e8[0] = (undefined8 *)0x0;
          local_208 = local_268;
          local_200 = local_260;
          local_1f8 = local_258;
          if (local_248[0] == 0) {
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar9,local_3f0,3,(StrRange *)&local_208,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,3);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)local_248);
            puVar27 = local_1e8[0];
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar9,local_3f0,3,(StrRange *)&local_208,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,3);
            if (puVar27 != (undefined8 *)0x0) {
              LOCK();
              plVar1 = (long *)((long)puVar27 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)((long)local_1e8[0] + -0x10),false);
              }
            }
          }
          if (local_1b8[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_1b8[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_1b8[0] + -0x10),false);
            }
          }
          lVar13 = RenderingDevice::get_singleton();
          uVar25 = (uint)&local_168;
          RenderingDevice::compute_list_set_push_constant(lVar13,pvVar15,uVar25);
          lVar13 = RenderingDevice::get_singleton();
          uVar29 = (uint)pvVar15;
          RenderingDevice::compute_list_dispatch_threads
                    (lVar13,uVar29,(uint)*param_6,*(uint *)((long)param_6 + 4));
          lVar13 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_add_barrier(lVar13);
          RenderingDevice::get_singleton();
          RenderingDevice::draw_command_end_label();
          if (local_218[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_218[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_218[0] + -0x10),false);
            }
          }
          if (local_248[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_248[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_248[0] + -0x10),false);
            }
          }
          if (local_278[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_278[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_278[0] + -0x10),false);
            }
          }
          if (local_2a8[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_2a8[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_2a8[0] + -0x10),false);
            }
          }
          if (local_2d8[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_2d8[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_2d8[0] + -0x10),false);
            }
          }
          if (local_308[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_308[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_308[0] + -0x10),false);
            }
          }
          uVar14 = RenderingDevice::get_singleton();
          local_208 = (char *)0x0;
          local_168 = CONCAT44(_UNK_00136094,_LC70);
          local_1d0 = (undefined8 *)0x8;
          local_1d8 = "SSR main";
          uStack_160 = _UNK_00136098;
          String::parse_latin1((StrRange *)&local_208);
          RenderingDevice::draw_command_begin_label(uVar14,(StrRange *)&local_208,&local_168);
          pcVar24 = local_208;
          if (local_208 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_208 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_208 = (char *)0x0;
              Memory::free_static(pcVar24 + -0x10,false);
            }
          }
          uStack_12c = (uint)local_420;
          uStack_14c = Projection::get_z_far();
          uStack_150 = Projection::get_z_near();
          bVar11 = Projection::is_orthogonal();
          iVar12 = *(int *)(this + 0x30);
          uStack_130 = 1;
          local_138 = (uint)bVar11;
          uVar6 = *(ulong *)(this + 0x1380);
          local_158 = *param_6;
          uVar32 = (ulong)(iVar12 != 0);
          local_168 = CONCAT44(_LC87 / ((float)(int)(local_158 >> 0x20) * local_3e8[5]),
                               _LC87 / ((float)(int)local_158 * *local_3e8));
          uStack_160 = CONCAT44((_LC70 + local_3e8[6]) / local_3e8[5],
                                (_LC70 - local_3e8[2]) / *local_3e8);
          iStack_13c = param_1;
          local_148 = param_9;
          iStack_144 = param_3;
          uStack_140 = param_2;
          if (*(long *)(this + 0x1220) == 0) {
            lVar13 = 0;
LAB_0010b11e:
            _err_print_index_error
                      ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,
                       uVar32,lVar13,"p_variant","variant_defines.size()","",false,false);
LAB_001079c4:
            local_3f0 = 0;
          }
          else {
            lVar13 = *(long *)(*(long *)(this + 0x1220) + -8);
            if (lVar13 <= (long)uVar32) goto LAB_0010b11e;
            lVar26 = *(long *)(this + 0x1230);
            uVar23 = uVar32;
            if (lVar26 == 0) {
LAB_0010a40b:
              lVar13 = 0;
              uVar23 = uVar32;
              goto LAB_0010a3e8;
            }
            lVar13 = *(long *)(lVar26 + -8);
            if (lVar13 <= (long)uVar32) goto LAB_0010a3e8;
            if (*(char *)(lVar26 + uVar32) == '\0') {
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                               ,0,0);
              goto LAB_001079c4;
            }
            if ((uVar6 == 0) || (*(uint *)(this + 0x12dc) <= (uint)uVar6)) {
LAB_0010b2c3:
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.",0,0);
              goto LAB_001079c4;
            }
            lVar26 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x12d8)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x12c8) +
                              ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x12d8)) * 8);
            if (*(int *)(lVar26 + 0x98) != (int)(uVar6 >> 0x20)) {
              if (*(int *)(lVar26 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_0010b2c3;
            }
            pVVar2 = (Version *)(this + 0x1208);
            iVar30 = (int)lVar26;
            if (*(char *)(lVar26 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar13 = *(long *)(this + 0x1280);
              if (lVar13 != 0) {
                lVar28 = 0;
                do {
                  if (*(long *)(lVar13 + -8) <= lVar28) break;
                  if (*(char *)(lVar13 + lVar28) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar30);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar30);
                  }
                  lVar13 = *(long *)(this + 0x1280);
                  lVar28 = lVar28 + 1;
                } while (lVar13 != 0);
              }
            }
            lVar28 = *(long *)(this + 0x1240);
            if (lVar28 == 0) goto LAB_0010a40b;
            lVar13 = *(long *)(lVar28 + -8);
            if (lVar13 <= (long)uVar32) goto LAB_0010a3e8;
            uVar23 = (ulong)*(uint *)(lVar28 + uVar32 * 4);
            lVar28 = *(long *)(lVar26 + 0x68);
            if (lVar28 == 0) {
              lVar13 = 0;
              goto LAB_0010a3e8;
            }
            lVar13 = *(long *)(lVar28 + -8);
            if (lVar13 <= (long)uVar23) goto LAB_0010a3e8;
            if (*(long *)(lVar28 + uVar23 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar30);
            }
            if (*(char *)(lVar26 + 0x90) == '\0') goto LAB_001079c4;
            lVar26 = *(long *)(lVar26 + 0x88);
            if (lVar26 == 0) goto LAB_0010a40b;
            lVar13 = *(long *)(lVar26 + -8);
            uVar23 = uVar32;
            if (lVar13 <= (long)uVar32) goto LAB_0010a3e8;
            local_3f0 = *(undefined8 *)(lVar26 + uVar32 * 8);
          }
          uVar14 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar14,pvVar15,
                     *(undefined8 *)
                      (this + ((long)(int)(uint)(iVar12 != 0) + 0x270 + uVar21 * 2) * 8 + 8));
          uVar14 = *(undefined8 *)(this + 0x13a8);
          uVar16 = RenderingDevice::get_singleton();
          local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
          local_1d8 = _LC88;
          local_1b8[0] = 0;
          local_1c8 = uVar14;
          uVar14 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                             (pUVar9,local_3f0,4,(String *)&local_1d8);
          RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar14);
          local_1d0 = (undefined8 *)0x0;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            if (local_1d0 == (undefined8 *)0x0) {
              lVar13 = 0;
LAB_0010a09f:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                         false,false);
              goto LAB_0010a0e0;
            }
            lVar13 = local_1d0[-1];
            if (lVar13 < 1) goto LAB_0010a09f;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
            *local_1d0 = uVar19;
            puVar27 = local_1d0;
LAB_00107aed:
            local_2c8 = local_418;
            local_2a8[0] = 0;
            local_2b8 = 0;
            local_2c0 = 0;
            CowData<RID>::_ref((CowData<RID> *)local_2a8,(CowData *)&local_1d0);
            LOCK();
            plVar1 = puVar27 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_1d0 + -2,false);
            }
          }
          else {
LAB_0010a0e0:
            local_2c8 = local_418;
            local_2c0 = 0;
            local_2b8 = 0;
            local_2a8[0] = 0;
            if (puVar27 != (undefined8 *)0x0) goto LAB_00107aed;
          }
          local_1d0 = (undefined8 *)0x0;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            if (local_1d0 == (undefined8 *)0x0) {
              lVar13 = 0;
LAB_00109fe9:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                         false,false);
              goto LAB_0010a028;
            }
            lVar13 = local_1d0[-1];
            if (lVar13 < 1) goto LAB_00109fe9;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
            *local_1d0 = uVar17;
            puVar27 = local_1d0;
LAB_00107ba1:
            local_298 = local_3e0;
            local_278[0] = 0;
            local_288 = 0;
            local_290 = 0;
            CowData<RID>::_ref((CowData<RID> *)local_278,(CowData *)&local_1d0);
            LOCK();
            plVar1 = puVar27 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_1d0 + -2,false);
            }
            lVar13 = local_278[0];
            uVar10 = local_290;
            pcVar24 = local_298;
            uVar14 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
            local_1c8 = local_288;
            if (lVar13 != 0) {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_278);
            }
          }
          else {
LAB_0010a028:
            local_290 = 0;
            local_288 = 0;
            local_278[0] = 0;
            local_298 = local_3e0;
            if (puVar27 != (undefined8 *)0x0) goto LAB_00107ba1;
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1b8[0] = 0;
            local_1d8 = local_3e0;
            local_1c8 = local_288;
          }
          local_1e8[0] = (undefined8 *)0x0;
          local_208 = local_2c8;
          local_200 = local_2c0;
          local_1f8 = local_2b8;
          if (local_2a8[0] == 0) {
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar9,local_3f0,0,(StrRange *)&local_208,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)local_2a8);
            puVar27 = local_1e8[0];
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar9,local_3f0,0,(StrRange *)&local_208,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            if (puVar27 != (undefined8 *)0x0) {
              LOCK();
              plVar1 = (long *)((long)puVar27 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)((long)local_1e8[0] + -0x10),false);
              }
            }
          }
          if (local_1b8[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_1b8[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_1b8[0] + -0x10),false);
            }
          }
          local_1d0 = (undefined8 *)0x0;
          if (*(int *)(this + 0x30) == 0) {
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010a66a:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010a6a3;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010a66a;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = uVar20;
              puVar27 = local_1d0;
LAB_0010a195:
              local_208 = local_418;
              local_1e8[0] = (undefined8 *)0x0;
              local_1f8 = 0;
              local_200 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              puVar27 = local_1e8[0];
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
                puVar27 = local_1e8[0];
              }
            }
            else {
LAB_0010a6a3:
              local_208 = local_418;
              local_200 = 0;
              local_1f8 = 0;
              local_1e8[0] = (undefined8 *)0x0;
              if (puVar27 != (undefined8 *)0x0) goto LAB_0010a195;
            }
            uVar10 = local_200;
            pcVar24 = local_208;
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
            local_1c8 = local_1f8;
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            if (puVar27 == (undefined8 *)0x0) {
              uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,1,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_1e8);
              lVar13 = local_1b8[0];
              uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,1,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
              if (lVar13 != 0) {
                LOCK();
                plVar1 = (long *)(lVar13 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                }
                puVar27 = local_1e8[0];
                if (local_1e8[0] == (undefined8 *)0x0) goto LAB_00108000;
              }
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1e8[0] + -2,false);
              }
            }
          }
          else {
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010a5f3:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010a62c;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010a5f3;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = uVar20;
              puVar27 = local_1d0;
LAB_00107dc0:
              local_268 = local_418;
              local_248[0] = 0;
              local_258 = 0;
              local_260 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_248,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
            }
            else {
LAB_0010a62c:
              local_268 = local_418;
              local_260 = 0;
              local_258 = 0;
              local_248[0] = 0;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00107dc0;
            }
            local_1d0 = (undefined8 *)0x0;
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010a88c:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010a8c5;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010a88c;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = local_3a8;
              puVar27 = local_1d0;
LAB_00107e65:
              local_238 = local_3e0;
              local_218[0] = 0;
              local_228 = 0;
              local_230 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_218,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
              lVar13 = local_218[0];
              uVar10 = local_230;
              pcVar24 = local_238;
              uVar14 = RenderingDevice::get_singleton();
              local_1b8[0] = 0;
              local_1d8 = pcVar24;
              local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
              local_1c8 = local_228;
              if (lVar13 != 0) {
                CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_218);
              }
            }
            else {
LAB_0010a8c5:
              local_230 = 0;
              local_228 = 0;
              local_218[0] = 0;
              local_238 = local_3e0;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00107e65;
              uVar14 = RenderingDevice::get_singleton();
              local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
              local_1b8[0] = 0;
              local_1d8 = local_3e0;
              local_1c8 = local_228;
            }
            local_1e8[0] = (undefined8 *)0x0;
            local_208 = local_268;
            local_200 = local_260;
            local_1f8 = local_258;
            if (local_248[0] == 0) {
              uVar16 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,1,(StrRange *)&local_208);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)local_248);
              puVar27 = local_1e8[0];
              uVar16 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,1,(StrRange *)&local_208);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
              if (puVar27 != (undefined8 *)0x0) {
                LOCK();
                plVar1 = puVar27 + -2;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static(local_1e8[0] + -2,false);
                }
              }
            }
            if (local_1b8[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_1b8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
              }
            }
            if (local_218[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_218[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_218[0] + -0x10),false);
              }
            }
            if (local_248[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_248[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_248[0] + -0x10),false);
              }
            }
          }
LAB_00108000:
          local_1d0 = (undefined8 *)0x0;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            if (local_1d0 == (undefined8 *)0x0) {
              lVar13 = 0;
LAB_0010a75f:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                         false,false);
              goto LAB_0010a7a0;
            }
            lVar13 = local_1d0[-1];
            if (lVar13 < 1) goto LAB_0010a75f;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
            *local_1d0 = uVar18;
            puVar27 = local_1d0;
LAB_00108089:
            local_238 = local_418;
            local_218[0] = 0;
            local_228 = 0;
            local_230 = 0;
            CowData<RID>::_ref((CowData<RID> *)local_218,(CowData *)&local_1d0);
            LOCK();
            plVar1 = puVar27 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_1d0 + -2,false);
            }
            lVar13 = local_218[0];
            uVar10 = local_230;
            pcVar24 = local_238;
            uVar14 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = pcVar24;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
            local_1c8 = local_228;
            if (lVar13 == 0) goto LAB_0010a80f;
            CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_218);
            lVar13 = local_1b8[0];
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,2,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,2);
            if (lVar13 != 0) {
              LOCK();
              plVar1 = (long *)(lVar13 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
              }
            }
          }
          else {
LAB_0010a7a0:
            local_230 = 0;
            local_228 = 0;
            local_218[0] = 0;
            local_238 = local_418;
            if (puVar27 != (undefined8 *)0x0) goto LAB_00108089;
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1d8 = local_418;
LAB_0010a80f:
            local_1b8[0] = 0;
            local_1c8 = local_228;
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,2,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,2);
          }
          lVar13 = 0;
          local_1d0 = (undefined8 *)0x0;
          uStack_1a0 = *(undefined8 *)(param_8 + local_420 * 8);
          local_1a8 = uVar22;
          iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,2);
          puVar27 = local_1d0;
          if (iVar12 == 0) {
            do {
              if (puVar27 == (undefined8 *)0x0) {
                lVar26 = 0;
LAB_0010a720:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar26,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar26 = *(long *)((long)puVar27 + -8);
                if (lVar26 <= lVar13) goto LAB_0010a720;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
                *(undefined8 *)((long)local_1d0 + lVar13 * 8) =
                     *(undefined8 *)((Projection *)&local_1a8 + lVar13 * 8);
                puVar27 = local_1d0;
              }
              if (lVar13 != 0) break;
              lVar13 = 1;
            } while( true );
          }
          local_200 = 0;
          local_1f8 = 0;
          local_1e8[0] = (undefined8 *)0x0;
          local_208 = _LC76;
          if (puVar27 != (undefined8 *)0x0) {
            CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)&local_1d0);
            LOCK();
            plVar1 = (long *)((long)puVar27 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)((long)local_1d0 + -0x10),false);
            }
          }
          puVar27 = local_1e8[0];
          uVar10 = local_200;
          pcVar24 = local_208;
          uVar14 = RenderingDevice::get_singleton();
          local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
          local_1c8 = local_1f8;
          local_1b8[0] = 0;
          local_1d8 = pcVar24;
          if (puVar27 == (undefined8 *)0x0) {
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,3,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,3);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_1e8);
            lVar13 = local_1b8[0];
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,3,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,3);
            if (lVar13 != 0) {
              LOCK();
              plVar1 = (long *)(lVar13 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              puVar27 = local_1e8[0];
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                puVar27 = local_1e8[0];
              }
            }
          }
          lVar13 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_set_push_constant(lVar13,pvVar15,uVar25);
          lVar13 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_dispatch_threads
                    (lVar13,uVar29,(uint)*param_6,*(uint *)((long)param_6 + 4));
          RenderingDevice::get_singleton();
          RenderingDevice::draw_command_end_label();
          if (puVar27 != (undefined8 *)0x0) {
            LOCK();
            plVar1 = (long *)((long)puVar27 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)((long)local_1e8[0] + -0x10),false);
            }
          }
          if (local_218[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_218[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_218[0] + -0x10),false);
            }
          }
          if (local_278[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_278[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_278[0] + -0x10),false);
            }
          }
          if (local_2a8[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_2a8[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_2a8[0] + -0x10),false);
            }
          }
          if (*(int *)(this + 0x30) != 0) {
            uVar14 = RenderingDevice::get_singleton();
            local_208 = (char *)0x0;
            local_168 = CONCAT44(_UNK_00136094,_LC70);
            local_1d0 = (undefined8 *)0xa;
            local_1d8 = "SSR filter";
            uStack_160 = _UNK_00136098;
            String::parse_latin1((StrRange *)&local_208);
            RenderingDevice::draw_command_begin_label(uVar14,(StrRange *)&local_208,&local_168);
            pcVar24 = local_208;
            if (local_208 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_208 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_208 = (char *)0x0;
                Memory::free_static(pcVar24 + -0x10,false);
              }
            }
            lVar13 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_add_barrier(lVar13);
            uStack_14c = (uint)local_420;
            bVar11 = Projection::is_orthogonal();
            local_158 = CONCAT44(0x3e8483ee,(uint)bVar11);
            uStack_140 = 0;
            iStack_144 = (int)(*param_6 >> 0x20);
            local_168 = CONCAT44(_LC87 / ((float)iStack_144 * local_3e8[5]),
                                 _LC87 / ((float)(int)(uint)*param_6 * *local_3e8));
            uStack_160 = CONCAT44((_LC70 + local_3e8[6]) / local_3e8[5],
                                  (_LC70 - local_3e8[2]) / *local_3e8);
            if (*(int *)(this + 0x30) == 1) {
              iStack_13c = param_9 / 3;
              uStack_150 = 3;
            }
            else {
              uStack_150 = 1;
              iStack_13c = param_9;
              if (*(int *)(this + 0x30) == 2) {
                uStack_150 = 2;
                iStack_13c = param_9 / 2;
              }
            }
            pVVar2 = (Version *)(this + 0x13b0);
            uVar23 = *(ulong *)(this + 0x1528);
            local_148 = (int)*param_6;
            if (*(long *)(this + 0x13c8) == 0) {
              lVar13 = 0;
LAB_0010b499:
              _err_print_index_error
                        ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,
                         lVar13,"p_variant","variant_defines.size()","",false,false);
LAB_0010b4d2:
              local_3f0 = 0;
            }
            else {
              lVar13 = *(long *)(*(long *)(this + 0x13c8) + -8);
              if (lVar13 < 1) goto LAB_0010b499;
              pcVar24 = *(char **)(this + 0x13d8);
              if (pcVar24 == (char *)0x0) {
LAB_0010a3c8:
                lVar13 = 0;
LAB_0010a3cb:
                uVar23 = 0;
                goto LAB_0010a3e8;
              }
              lVar13 = *(long *)(pcVar24 + -8);
              if (lVar13 < 1) goto LAB_0010a3cb;
              if (*pcVar24 == '\0') {
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xa7,
                                 "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                 ,0,0);
                goto LAB_0010b4d2;
              }
              if ((uVar23 == 0) || (*(uint *)(this + 0x1484) <= (uint)uVar23)) {
LAB_0010b605:
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xaa,"Parameter \"version\" is null.",0,0);
                goto LAB_0010b4d2;
              }
              lVar26 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x1480)) * 0xa0 +
                       *(long *)(*(long *)(this + 0x1470) +
                                ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x1480)) * 8);
              if (*(int *)(lVar26 + 0x98) != (int)(uVar23 >> 0x20)) {
                if (*(int *)(lVar26 + 0x98) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_0010b605;
              }
              iVar12 = (int)lVar26;
              if (*(char *)(lVar26 + 0x91) != '\0') {
                ShaderRD::_initialize_version(pVVar2);
                lVar13 = *(long *)(this + 0x1428);
                if (lVar13 != 0) {
                  lVar28 = 0;
                  do {
                    if (*(long *)(lVar13 + -8) <= lVar28) break;
                    if (*(char *)(lVar13 + lVar28) == '\0') {
                      ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                    }
                    else {
                      ShaderRD::_compile_version_start(pVVar2,iVar12);
                    }
                    lVar13 = *(long *)(this + 0x1428);
                    lVar28 = lVar28 + 1;
                  } while (lVar13 != 0);
                }
              }
              puVar5 = *(uint **)(this + 0x13e8);
              if (puVar5 == (uint *)0x0) goto LAB_0010a3c8;
              lVar13 = *(long *)(puVar5 + -2);
              if (lVar13 < 1) goto LAB_0010a3cb;
              uVar23 = (ulong)*puVar5;
              lVar28 = *(long *)(lVar26 + 0x68);
              if (lVar28 == 0) goto LAB_0010b19a;
              lVar13 = *(long *)(lVar28 + -8);
              if (lVar13 <= (long)uVar23) goto LAB_0010a3e8;
              if (*(long *)(lVar28 + uVar23 * 8) != 0) {
                ShaderRD::_compile_version_end(pVVar2,iVar12);
              }
              if (*(char *)(lVar26 + 0x90) == '\0') goto LAB_0010b4d2;
              puVar27 = *(undefined8 **)(lVar26 + 0x88);
              if (puVar27 == (undefined8 *)0x0) goto LAB_0010a3c8;
              lVar13 = puVar27[-1];
              if (lVar13 < 1) goto LAB_0010a3cb;
              local_3f0 = *puVar27;
            }
            uVar14 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_compute_pipeline
                      (uVar14,pvVar15,*(undefined8 *)(this + uVar21 * 0x10 + 0x1530));
            local_1d0 = (undefined8 *)0x0;
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010aab7:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010aaf0;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010aab7;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = uVar20;
              puVar27 = local_1d0;
LAB_00108751:
              local_338[0] = 0;
              CowData<RID>::_ref((CowData<RID> *)local_338,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
            }
            else {
LAB_0010aaf0:
              local_338[0] = 0;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00108751;
            }
            local_1d0 = (undefined8 *)0x0;
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010ae11:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010ae4a;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010ae11;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = local_3a8;
              puVar27 = local_1d0;
LAB_00108804:
              local_328 = local_3e0;
              local_308[0] = 0;
              local_318 = 0;
              local_320 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_308,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
              lVar13 = local_308[0];
              uVar10 = local_320;
              pcVar24 = local_328;
              uVar14 = RenderingDevice::get_singleton();
              local_1b8[0] = 0;
              local_1d8 = pcVar24;
              local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
              local_1c8 = local_318;
              if (lVar13 != 0) {
                CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_308);
              }
            }
            else {
LAB_0010ae4a:
              local_320 = 0;
              local_318 = 0;
              local_308[0] = 0;
              local_328 = local_3e0;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00108804;
              uVar14 = RenderingDevice::get_singleton();
              local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
              local_1b8[0] = 0;
              local_1d8 = local_3e0;
              local_1c8 = local_318;
            }
            local_1e8[0] = (undefined8 *)0x0;
            local_208 = local_418;
            local_200 = 0;
            local_1f8 = 0;
            if (local_338[0] == 0) {
              uVar16 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,0);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)local_338);
              puVar27 = local_1e8[0];
              uVar16 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,0);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
              if (puVar27 != (undefined8 *)0x0) {
                LOCK();
                plVar1 = (long *)((long)puVar27 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)((long)local_1e8[0] + -0x10),false);
                }
              }
            }
            if (local_1b8[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_1b8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
              }
            }
            local_1d0 = (undefined8 *)0x0;
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010ad33:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010ad6c;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010ad33;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = uVar18;
              puVar27 = local_1d0;
LAB_00108a26:
              local_2f8 = local_418;
              local_2d8[0] = 0;
              local_2e8 = 0;
              local_2f0 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_2d8,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
              lVar13 = local_2d8[0];
              uVar10 = local_2f0;
              pcVar24 = local_2f8;
              uVar14 = RenderingDevice::get_singleton();
              local_1b8[0] = 0;
              local_1d8 = pcVar24;
              local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
              local_1c8 = local_2e8;
              if (lVar13 == 0) goto LAB_0010addb;
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_2d8);
              lVar13 = local_1b8[0];
              uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,1,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
              if (lVar13 != 0) {
                LOCK();
                plVar1 = (long *)(lVar13 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                }
              }
            }
            else {
LAB_0010ad6c:
              local_2f0 = 0;
              local_2e8 = 0;
              local_2d8[0] = 0;
              local_2f8 = local_418;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00108a26;
              uVar14 = RenderingDevice::get_singleton();
              local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
              local_1d8 = local_418;
LAB_0010addb:
              local_1b8[0] = 0;
              local_1c8 = local_2e8;
              uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,1,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            }
            local_1d0 = (undefined8 *)0x0;
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010acbc:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010acf5;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010acbc;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = uVar19;
              puVar27 = local_1d0;
LAB_00108bc6:
              local_2c8 = local_418;
              local_2a8[0] = 0;
              local_2b8 = 0;
              local_2c0 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_2a8,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
            }
            else {
LAB_0010acf5:
              local_2c8 = local_418;
              local_2c0 = 0;
              local_2b8 = 0;
              local_2a8[0] = 0;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00108bc6;
            }
            local_1d0 = (undefined8 *)0x0;
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010ac0c:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010ac45;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010ac0c;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = local_390;
              puVar27 = local_1d0;
LAB_00108c7a:
              local_298 = local_3e0;
              local_278[0] = 0;
              local_288 = 0;
              local_290 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_278,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
              lVar13 = local_278[0];
              uVar10 = local_290;
              pcVar24 = local_298;
              uVar14 = RenderingDevice::get_singleton();
              local_1b8[0] = 0;
              local_1d8 = pcVar24;
              local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
              local_1c8 = local_288;
              if (lVar13 != 0) {
                CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_278);
              }
            }
            else {
LAB_0010ac45:
              local_290 = 0;
              local_288 = 0;
              local_278[0] = 0;
              local_298 = local_3e0;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00108c7a;
              uVar14 = RenderingDevice::get_singleton();
              local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
              local_1b8[0] = 0;
              local_1d8 = local_3e0;
              local_1c8 = local_288;
            }
            local_1e8[0] = (undefined8 *)0x0;
            local_208 = local_2c8;
            local_200 = local_2c0;
            local_1f8 = local_2b8;
            if (local_2a8[0] == 0) {
              uVar16 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,2,(StrRange *)&local_208);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)local_2a8);
              puVar27 = local_1e8[0];
              uVar16 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,2,(StrRange *)&local_208);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16);
              if (puVar27 != (undefined8 *)0x0) {
                LOCK();
                plVar1 = (long *)((long)puVar27 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)((long)local_1e8[0] + -0x10),false);
                }
              }
            }
            if (local_1b8[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_1b8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
              }
            }
            local_1d0 = (undefined8 *)0x0;
            iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_1d0,1);
            puVar27 = local_1d0;
            if (iVar12 == 0) {
              if (local_1d0 == (undefined8 *)0x0) {
                lVar13 = 0;
LAB_0010ab2e:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",
                           false,false);
                goto LAB_0010ab67;
              }
              lVar13 = local_1d0[-1];
              if (lVar13 < 1) goto LAB_0010ab2e;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_1d0);
              *local_1d0 = uVar17;
              puVar27 = local_1d0;
LAB_00108e9d:
              local_268 = local_418;
              local_248[0] = 0;
              local_258 = 0;
              local_260 = 0;
              CowData<RID>::_ref((CowData<RID> *)local_248,(CowData *)&local_1d0);
              LOCK();
              plVar1 = puVar27 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_1d0 + -2,false);
              }
              lVar13 = local_248[0];
              uVar10 = local_260;
              pcVar24 = local_268;
              uVar14 = RenderingDevice::get_singleton();
              local_1b8[0] = 0;
              local_1d8 = pcVar24;
              local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,uVar10);
              local_1c8 = local_258;
              if (lVar13 == 0) goto LAB_0010abd6;
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_248);
              lVar13 = local_1b8[0];
              uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,3,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,3);
              if (lVar13 != 0) {
                LOCK();
                plVar1 = (long *)(lVar13 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                }
              }
            }
            else {
LAB_0010ab67:
              local_260 = 0;
              local_258 = 0;
              local_248[0] = 0;
              local_268 = local_418;
              if (puVar27 != (undefined8 *)0x0) goto LAB_00108e9d;
              uVar14 = RenderingDevice::get_singleton();
              local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
              local_1d8 = local_418;
LAB_0010abd6:
              local_1b8[0] = 0;
              local_1c8 = local_258;
              uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,local_3f0,3,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,3);
            }
            local_228 = *(undefined8 *)(this + 0x13a8);
            local_230 = 0;
            local_218[0] = 0;
            local_238 = _LC88;
            uVar14 = RenderingDevice::get_singleton();
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1b8[0] = 0;
            local_1d8 = _LC88;
            local_1c8 = local_228;
            uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar9,local_3f0,4,(String *)&local_1d8);
            RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar15,uVar16,4);
            lVar13 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_set_push_constant(lVar13,pvVar15,uVar25);
            lVar13 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_dispatch_threads
                      (lVar13,uVar29,(uint)*param_6,*(uint *)((long)param_6 + 4));
            lVar13 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_add_barrier(lVar13);
            uVar23 = *(ulong *)(this + 0x1528);
            if (*(long *)(this + 0x13c8) == 0) {
              lVar13 = 0;
LAB_0010b4e3:
              _err_print_index_error
                        ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,
                         lVar13,"p_variant","variant_defines.size()","",false,false);
LAB_0010b51f:
              uVar14 = 0;
            }
            else {
              lVar13 = *(long *)(*(long *)(this + 0x13c8) + -8);
              if (lVar13 < 2) goto LAB_0010b4e3;
              lVar26 = *(long *)(this + 0x13d8);
              if (lVar26 == 0) {
LAB_0010b45e:
                lVar13 = 0;
LAB_0010b461:
                uVar23 = 1;
LAB_0010a3e8:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,uVar23,lVar13,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              lVar13 = *(long *)(lVar26 + -8);
              if (lVar13 < 2) goto LAB_0010b461;
              if (*(char *)(lVar26 + 1) != '\0') {
                if ((uVar23 == 0) || (*(uint *)(this + 0x1484) <= (uint)uVar23)) {
LAB_0010b698:
                  uVar14 = 0;
                  _err_print_error("version_get_shader",
                                   "./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                                   "Parameter \"version\" is null.",0,0);
                  goto LAB_0010919b;
                }
                lVar26 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x1480)) * 0xa0 +
                         *(long *)(*(long *)(this + 0x1470) +
                                  ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x1480)) * 8);
                if (*(int *)(lVar26 + 0x98) != (int)(uVar23 >> 0x20)) {
                  if (*(int *)(lVar26 + 0x98) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_0010b698;
                }
                iVar12 = (int)lVar26;
                if (*(char *)(lVar26 + 0x91) != '\0') {
                  ShaderRD::_initialize_version(pVVar2);
                  lVar13 = *(long *)(this + 0x1428);
                  if (lVar13 != 0) {
                    lVar28 = 0;
                    do {
                      if (*(long *)(lVar13 + -8) <= lVar28) break;
                      if (*(char *)(lVar13 + lVar28) == '\0') {
                        ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                      }
                      else {
                        ShaderRD::_compile_version_start(pVVar2,iVar12);
                      }
                      lVar13 = *(long *)(this + 0x1428);
                      lVar28 = lVar28 + 1;
                    } while (lVar13 != 0);
                  }
                }
                lVar28 = *(long *)(this + 0x13e8);
                if (lVar28 == 0) goto LAB_0010b45e;
                lVar13 = *(long *)(lVar28 + -8);
                if (lVar13 < 2) goto LAB_0010b461;
                uVar23 = (ulong)*(uint *)(lVar28 + 4);
                lVar28 = *(long *)(lVar26 + 0x68);
                if (lVar28 == 0) goto LAB_0010b19a;
                lVar13 = *(long *)(lVar28 + -8);
                if (lVar13 <= (long)uVar23) goto LAB_0010a3e8;
                if (*(long *)(lVar28 + uVar23 * 8) != 0) {
                  ShaderRD::_compile_version_end(pVVar2,iVar12);
                }
                if (*(char *)(lVar26 + 0x90) != '\0') {
                  lVar26 = *(long *)(lVar26 + 0x88);
                  if (lVar26 == 0) goto LAB_0010b45e;
                  lVar13 = *(long *)(lVar26 + -8);
                  if (1 < lVar13) {
                    uVar14 = *(undefined8 *)(lVar26 + 8);
                    goto LAB_0010919b;
                  }
                  goto LAB_0010b461;
                }
                goto LAB_0010b51f;
              }
              uVar14 = 0;
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                               ,0,0);
            }
LAB_0010919b:
            uVar16 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_compute_pipeline
                      (uVar16,pvVar15,*(undefined8 *)(this + uVar21 * 0x10 + 0x1538));
            uStack_140 = 1;
            uVar16 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = local_298;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,local_290);
            local_1c8 = local_288;
            if (local_278[0] != 0) {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_278);
            }
            local_1e8[0] = (undefined8 *)0x0;
            local_208 = local_2c8;
            local_200 = local_2c0;
            local_1f8 = local_2b8;
            if (local_2a8[0] == 0) {
              uVar17 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,uVar14,0,(StrRange *)&local_208,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,0);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1e8,(CowData *)local_2a8);
              puVar27 = local_1e8[0];
              uVar17 = UniformSetCacheRD::
                       get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                                 (pUVar9,uVar14,0,(StrRange *)&local_208,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,0);
              if (puVar27 != (undefined8 *)0x0) {
                LOCK();
                plVar1 = (long *)((long)puVar27 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)((long)local_1e8[0] + -0x10),false);
                }
              }
            }
            if (local_1b8[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_1b8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_1b8[0] + -0x10),false);
              }
            }
            uVar16 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = local_2f8;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,local_2f0);
            local_1c8 = local_2e8;
            if (local_2d8[0] == 0) {
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,1,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,1);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_2d8);
              lVar13 = local_1b8[0];
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,1,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,1);
              if (lVar13 != 0) {
                LOCK();
                plVar1 = (long *)(lVar13 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                }
              }
            }
            uVar16 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = local_418;
            local_1d0 = (undefined8 *)((ulong)local_1d0 & 0xffffffffffffff00);
            local_1c8 = 0;
            if (local_338[0] == 0) {
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,2,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,2);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_338);
              lVar13 = local_1b8[0];
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,2,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,2);
              if (lVar13 != 0) {
                LOCK();
                plVar1 = (long *)(lVar13 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                }
              }
            }
            uVar16 = RenderingDevice::get_singleton();
            local_1b8[0] = 0;
            local_1d8 = local_268;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,local_260);
            local_1c8 = local_258;
            if (local_248[0] == 0) {
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,3,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,3);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_248);
              lVar13 = local_1b8[0];
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,3,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar17,3);
              if (lVar13 != 0) {
                LOCK();
                plVar1 = (long *)(lVar13 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                }
              }
            }
            uVar16 = RenderingDevice::get_singleton();
            lVar13 = local_218[0];
            local_1b8[0] = 0;
            local_1d8 = local_238;
            local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,local_230);
            local_1c8 = local_228;
            if (local_218[0] == 0) {
              uVar14 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,4,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar14,4);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_1b8,(CowData *)local_218);
              lVar26 = local_1b8[0];
              uVar14 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar9,uVar14,4,(String *)&local_1d8);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar15,uVar14,4);
              if (lVar26 != 0) {
                LOCK();
                plVar1 = (long *)(lVar26 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                lVar13 = local_218[0];
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_1b8[0] + -0x10),false);
                  lVar13 = local_218[0];
                }
              }
            }
            lVar26 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_set_push_constant(lVar26,pvVar15,uVar25);
            lVar26 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_dispatch_threads
                      (lVar26,uVar29,(uint)*param_6,*(uint *)((long)param_6 + 4));
            if ((uVar3 != 1) != (uint)local_420) {
              lVar26 = RenderingDevice::get_singleton();
              RenderingDevice::compute_list_add_barrier(lVar26);
            }
            RenderingDevice::get_singleton();
            RenderingDevice::draw_command_end_label();
            if (lVar13 != 0) {
              LOCK();
              plVar1 = (long *)(lVar13 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_218[0] + -0x10),false);
              }
            }
            if (local_248[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_248[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_248[0] + -0x10),false);
              }
            }
            if (local_278[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_278[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_278[0] + -0x10),false);
              }
            }
            if (local_2a8[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_2a8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_2a8[0] + -0x10),false);
              }
            }
            if (local_2d8[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_2d8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_2d8[0] + -0x10),false);
              }
            }
            if (local_308[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_308[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_308[0] + -0x10),false);
              }
            }
            if (local_338[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_338[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_338[0] + -0x10),false);
              }
            }
          }
          RenderingDevice::get_singleton();
          RenderingDevice::draw_command_end_label();
          local_420 = local_420 + 1;
          local_3e8 = local_3e8 + 0x10;
        } while (uVar3 != local_420);
      }
      RenderingDevice::get_singleton();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        RenderingDevice::compute_list_end();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SSEffects::screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,
   RendererRD::SSEffects::SSILRenderBuffers&, unsigned int, RID, Projection const&, Projection
   const&, RendererRD::SSEffects::SSILSettings const&) */

void __thiscall
RendererRD::SSEffects::screen_space_indirect_lighting
          (SSEffects *this,undefined8 *param_2,long param_3,uint param_4,undefined8 param_5,
          float *param_6,undefined8 *param_7,float *param_8)

{
  long *plVar1;
  Version *pVVar2;
  SSEffects SVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  StringName *pSVar7;
  uint *puVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  UniformSetCacheRD *pUVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  void *pvVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined1 uVar30;
  ulong uVar31;
  char *pcVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  uint uVar37;
  char *pcVar38;
  long in_FS_OFFSET;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar46;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_230;
  uint local_228;
  long local_1f8 [2];
  char *local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1c8 [2];
  char *local_1b8;
  undefined1 local_1b0;
  ulong local_1a8;
  Vector<RID> local_1a0 [8];
  long local_198 [2];
  char *local_188;
  undefined1 local_180;
  long local_178;
  Vector<RID> local_170 [8];
  long local_168 [2];
  char *local_158;
  undefined1 local_150;
  undefined8 local_148;
  long local_138 [2];
  char *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  long local_108 [2];
  ulong local_f8 [2];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pUVar16 = UniformSetCacheRD::singleton;
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar22 = 0x280;
      pcVar32 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010fc7d:
      _err_print_error("screen_space_indirect_lighting",
                       "servers/rendering/renderer_rd/effects/ss_effects.cpp",uVar22,pcVar32,0,0);
      return;
    }
    goto LAB_00110dfc;
  }
  lVar21 = RendererRD::MaterialStorage::get_singleton();
  if (lVar21 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar22 = 0x282;
      pcVar32 = "Parameter \"material_storage\" is null.";
      goto LAB_0010fc7d;
    }
    goto LAB_00110dfc;
  }
  uVar22 = RenderingDevice::get_singleton();
  local_88 = CONCAT44(_UNK_00136094,_LC70);
  local_128 = "Process Screen Space Indirect Lighting";
  uStack_80 = _UNK_00136098;
  local_158 = (char *)0x0;
  local_120 = (undefined8 *)0x26;
  String::parse_latin1((StrRange *)&local_158);
  uVar56 = 0x10b808;
  RenderingDevice::draw_command_begin_label(uVar22,(StrRange *)&local_158,&local_88);
  pcVar32 = local_158;
  if (local_158 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_158 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_158 = (char *)0x0;
      uVar56 = 0x10cfef;
      Memory::free_static(pcVar32 + -0x10,false);
    }
  }
  pSVar7 = (StringName *)*param_2;
  if (screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#2}::operator()()::sname == '\0') {
    uVar56 = 0x10d2be;
    iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                  ::{lambda()#2}::operator()()::sname);
    if (iVar18 != 0) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#2}::operator()()::sname,&__dso_handle);
      uVar56 = 0x10d2f8;
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#2}::operator()()::sname);
    }
  }
  if (screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    uVar56 = 0x10d41e;
    iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                  ::{lambda()#1}::operator()()::sname);
    if (iVar18 != 0) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      uVar56 = 0x10d458;
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar22 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar7,(StringName *)
                             &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#1}::operator()()::sname,0x11c238,param_4,0,1);
  pSVar7 = (StringName *)*param_2;
  uVar37 = param_4 * 4;
  if (screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#4}::operator()()::sname == '\0') {
    uVar56 = 0x10d3c6;
    iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                  ::{lambda()#4}::operator()()::sname);
    if (iVar18 != 0) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#4}::operator()()::sname,&__dso_handle);
      uVar56 = 0x10d400;
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#4}::operator()()::sname);
    }
  }
  if (screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
      ::{lambda()#3}::operator()()::sname == '\0') {
    uVar56 = 0x10d36e;
    iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                  ::{lambda()#3}::operator()()::sname);
    if (iVar18 != 0) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#3}::operator()()::sname,&__dso_handle);
      uVar56 = 0x10d3a8;
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#3}::operator()()::sname);
    }
  }
  uVar54 = 1;
  auVar53 = RenderSceneBuffersRD::get_texture_slice
                      (pSVar7,(StringName *)
                              &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                               ::{lambda()#3}::operator()()::sname,0x11c218,uVar37,0,4);
  pSVar7 = (StringName *)*param_2;
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#6}::operator()()::sname,uVar56,auVar53._8_8_,uVar54)
     , iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#6}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#6}::operator()()::sname);
  }
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#5}::operator()()::sname), iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#5}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#5}::operator()()::sname);
  }
  uVar56 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar7,(StringName *)
                             &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#5}::operator()()::sname,0x11c1f8,uVar37,0,4);
  pSVar7 = (StringName *)*param_2;
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#8}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#8}::operator()()::sname), iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#8}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#8}::operator()()::sname);
  }
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#7}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#7}::operator()()::sname), iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#7}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#7}::operator()()::sname);
  }
  uVar54 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar7,(StringName *)
                             &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#7}::operator()()::sname,0x11c1d8,uVar37,0,4);
  pSVar7 = (StringName *)*param_2;
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#10}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#10}::operator()()::sname), iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#10}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#10}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#10}::operator()()::sname);
  }
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#9}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#9}::operator()()::sname), iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#9}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#9}::operator()()::sname);
  }
  uVar23 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar7,(StringName *)
                             &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#9}::operator()()::sname,0x11c1b8,param_4,0,1);
  pSVar7 = (StringName *)*param_2;
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#12}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#12}::operator()()::sname), iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#12}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#12}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#12}::operator()()::sname);
  }
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#11}::operator()()::sname == '\0') &&
     (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#11}::operator()()::sname), iVar18 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#11}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#11}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#11}::operator()()::sname);
  }
  uVar24 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar7,(StringName *)
                             &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#11}::operator()()::sname,0x11c198,param_4,0,1);
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  uVar33 = 0;
  do {
    pSVar7 = (StringName *)*param_2;
    uVar5 = uVar37 + uVar33;
    if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
         ::{lambda()#14}::operator()()::sname == '\0') &&
       (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                      ::{lambda()#14}::operator()()::sname), iVar18 != 0)) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#14}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#14}::operator()()::sname);
    }
    if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
         ::{lambda()#13}::operator()()::sname == '\0') &&
       (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                      ::{lambda()#13}::operator()()::sname), iVar18 != 0)) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#13}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#13}::operator()()::sname);
    }
    uVar31 = (ulong)uVar33;
    uVar55 = 1;
    uVar25 = RenderSceneBuffersRD::get_texture_slice
                       (pSVar7,(StringName *)
                               &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                ::{lambda()#13}::operator()()::sname,0x11c178,uVar5,0,1);
    pSVar7 = (StringName *)*param_2;
    *(undefined8 *)(local_e8 + uVar31 * 8) = uVar25;
    if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
         ::{lambda()#16}::operator()()::sname == '\0') &&
       (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                      ::{lambda()#16}::operator()()::sname,uVar55), iVar18 != 0)) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#16}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#16}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#16}::operator()()::sname);
    }
    if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
         ::{lambda()#15}::operator()()::sname == '\0') &&
       (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                      ::{lambda()#15}::operator()()::sname), iVar18 != 0)) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#15}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#15}::operator()()::sname);
    }
    uVar25 = RenderSceneBuffersRD::get_texture_slice
                       (pSVar7,(StringName *)
                               &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                ::{lambda()#15}::operator()()::sname,0x11c158,uVar5,0,1);
    pSVar7 = (StringName *)*param_2;
    *(undefined8 *)(local_c8 + uVar31 * 8) = uVar25;
    if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
         ::{lambda()#18}::operator()()::sname == '\0') &&
       (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                      ::{lambda()#18}::operator()()::sname), iVar18 != 0)) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#18}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#18}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#18}::operator()()::sname);
    }
    if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
         ::{lambda()#17}::operator()()::sname == '\0') &&
       (iVar18 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                      ::{lambda()#17}::operator()()::sname), iVar18 != 0)) {
      _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#17}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                    ::{lambda()#17}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                           ::{lambda()#17}::operator()()::sname);
    }
    uVar33 = uVar33 + 1;
    uVar25 = RenderSceneBuffersRD::get_texture_slice
                       (pSVar7,(StringName *)
                               &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                ::{lambda()#17}::operator()()::sname,0x11c138,uVar5,0,1);
    *(undefined8 *)(local_a8 + uVar31 * 8) = uVar25;
  } while (uVar33 != 4);
  local_88 = *param_7;
  uStack_80 = param_7[1];
  local_78 = param_7[2];
  uStack_70 = param_7[3];
  local_68 = param_7[4];
  uStack_60 = param_7[5];
  local_58 = param_7[6];
  uStack_50 = param_7[7];
  uVar25 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar25,*(undefined8 *)(this + 0x430),0,0x40);
  pVVar2 = (Version *)(this + 0x2b0);
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  iVar18 = (int)this;
  puVar29 = (undefined8 *)((ulong)(this + 0x238) & 0xfffffffffffffff8);
  for (uVar31 = (ulong)((iVar18 - (int)(undefined8 *)((ulong)(this + 0x238) & 0xfffffffffffffff8)) +
                        0x2b0U >> 3); uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar29 = 0;
    puVar29 = puVar29 + (ulong)bVar17 * -2 + 1;
  }
  uVar31 = *(ulong *)(this + 0x428);
  if (*(long *)(this + 0x2c8) != 0) {
    lVar28 = *(long *)(*(long *)(this + 0x2c8) + -8);
    if (lVar28 < 1) goto LAB_0010fcf9;
    pcVar32 = *(char **)(this + 0x2d8);
    if (pcVar32 == (char *)0x0) goto LAB_0010d4a0;
    lVar28 = *(long *)(pcVar32 + -8);
    if (lVar28 < 1) goto LAB_0010d4a3;
    if (*pcVar32 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010bfa6;
    }
    if ((uVar31 == 0) || (*(uint *)(this + 900) <= (uint)uVar31)) {
LAB_0010d6f0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010bfa6;
    }
    lVar34 = ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x380)) * 0xa0 +
             *(long *)(*(long *)(this + 0x370) +
                      ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x380)) * 8);
    if (*(int *)(lVar34 + 0x98) != (int)(uVar31 >> 0x20)) {
      if (*(int *)(lVar34 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010d6f0;
    }
    iVar19 = (int)lVar34;
    if (*(char *)(lVar34 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar28 = *(long *)(this + 0x328);
      if (lVar28 != 0) {
        lVar36 = 0;
        do {
          if (*(long *)(lVar28 + -8) <= lVar36) break;
          if (*(char *)(lVar28 + lVar36) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar19);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar19);
          }
          lVar28 = *(long *)(this + 0x328);
          lVar36 = lVar36 + 1;
        } while (lVar28 != 0);
      }
    }
    puVar8 = *(uint **)(this + 0x2e8);
    if (puVar8 == (uint *)0x0) goto LAB_0010d4a0;
    lVar28 = *(long *)(puVar8 + -2);
    if (lVar28 < 1) goto LAB_0010d4a3;
    uVar31 = (ulong)*puVar8;
    lVar36 = *(long *)(lVar34 + 0x68);
    if (lVar36 != 0) {
      lVar28 = *(long *)(lVar36 + -8);
      if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
      if (*(long *)(lVar36 + uVar31 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar19);
      }
      if (*(char *)(lVar34 + 0x90) == '\0') goto LAB_0010bfa6;
      puVar29 = *(undefined8 **)(lVar34 + 0x88);
      if (puVar29 == (undefined8 *)0x0) goto LAB_0010d4a0;
      lVar28 = puVar29[-1];
      if (lVar28 < 1) goto LAB_0010d4a3;
      local_2a8 = *puVar29;
      goto LAB_0010bfaf;
    }
LAB_0010ea36:
    lVar28 = 0;
    goto LAB_0010d4c0;
  }
  lVar28 = 0;
LAB_0010fcf9:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar28,
             "p_variant","variant_defines.size()","",false,false);
LAB_0010bfa6:
  local_2a8 = 0;
LAB_0010bfaf:
  uVar9 = *(ulong *)(lVar21 + 0x50);
  lVar21 = *(long *)(lVar21 + 0x90);
  RenderingDevice::get_singleton();
  pvVar26 = (void *)RenderingDevice::compute_list_begin();
  uVar25 = RenderingDevice::get_singleton();
  local_158 = (char *)0x0;
  local_f8[0] = CONCAT44(_UNK_00136094,_LC70);
  local_120 = (undefined8 *)0xe;
  local_128 = "Gather Samples";
  local_f8[1] = _UNK_00136098;
  String::parse_latin1((StrRange *)&local_158);
  RenderingDevice::draw_command_begin_label(uVar25,(StrRange *)&local_158,local_f8);
  pcVar32 = local_158;
  if (local_158 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_158 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_158 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar32 + -0x10),false);
    }
  }
  auVar44._8_8_ = _LC95;
  auVar44._0_8_ = _LC95;
  *(float *)(this + 0x230) = param_8[4];
  fVar41 = param_8[5];
  *(float *)(this + 0x234) = fVar41;
  fVar52 = param_8[4];
  auVar47._0_8_ = (double)(int)fVar52;
  auVar47._8_8_ = (double)(int)fVar41;
  auVar44 = divpd(auVar44,auVar47);
  fVar40 = (float)auVar44._0_8_;
  fVar46 = (float)auVar44._8_8_;
  *(ulong *)(this + 0x240) = CONCAT44(fVar46,fVar40);
  dVar43 = _LC95;
  if (this[0x1c] != (SSEffects)0x0) {
    *(ulong *)(this + 0x240) = CONCAT44(fVar46 + fVar46,fVar40 + fVar40);
    fVar40 = (float)(dVar43 / (double)(int)fVar52);
    fVar40 = fVar40 + fVar40;
    fVar46 = (float)(dVar43 / (double)(int)fVar41);
    fVar46 = fVar46 + fVar46;
  }
  fVar52 = _LC70;
  fVar46 = fVar46 * _LC96;
  *(float *)(this + 0x248) = fVar40 * _LC96;
  *(float *)(this + 0x24c) = fVar46;
  fVar41 = fVar52 / *param_6;
  fVar52 = fVar52 / param_6[5];
  dVar43 = (double)((ulong)(double)fVar41 ^ __LC97);
  *(float *)(this + 0x250) = fVar41 + fVar41;
  fVar41 = _LC87;
  *(ulong *)(this + 600) = CONCAT44(fVar52,(float)dVar43);
  *(float *)(this + 0x254) = fVar41 * fVar52;
  uVar42 = Projection::get_z_near();
  *(undefined4 *)(this + 0x268) = uVar42;
  uVar42 = Projection::get_z_far();
  *(undefined4 *)(this + 0x26c) = uVar42;
  bVar17 = Projection::is_orthogonal();
  fVar40 = _LC98;
  *(uint *)(this + 0x290) = (uint)bVar17;
  fVar41 = *param_8;
  iVar19 = *(int *)(this + 0x18);
  *(float *)(this + 0x270) = fVar41;
  fVar40 = fVar40 * fVar41;
  if ((iVar19 < 2) && (fVar40 = fVar40 * __LC99, iVar19 == 0)) {
    fVar41 = fVar41 * __LC100;
    *(float *)(this + 0x270) = fVar41;
  }
  fVar15 = _LC102;
  local_180 = 0;
  local_168[0] = 0;
  *(float *)(this + 0x274) = (float)((double)param_8[1] * __LC101);
  fVar51 = *(float *)(this + 0x2c) - *(float *)(this + 0x28);
  *(float *)(this + 0x284) = *(float *)(this + 0x28) / fVar51 + _LC70;
  fVar46 = _LC70;
  *(float *)(this + 0x294) = fVar15 / fVar41;
  *(float *)(this + 0x280) = fVar15 / fVar51;
  *(float *)(this + 0x28c) = fVar46 / (fVar40 / fVar52);
  *(float *)(this + 0x288) = param_8[3];
  fVar41 = _LC115._4_4_;
  iVar20 = *(int *)(param_3 + 0xc);
  iVar4 = *(int *)(param_3 + 0x10);
  iVar19 = iVar19 + -1;
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  *(int *)(this + 0x23c) = iVar19;
  *(uint *)(this + 0x278) = (byte)this[0x1c] + 1;
  local_188 = _LC76;
  *(float *)(this + 0x298) = fVar41 / (float)(iVar20 * iVar4 * 0xff);
  *(undefined4 *)(this + 0x29c) = *(undefined4 *)(this + 0x20);
  pcVar32 = _LC76;
  local_178 = uVar22;
  if (lVar21 != 0) {
    local_178 = lVar21;
    Vector<RID>::push_back(local_170,lVar21);
    Vector<RID>::push_back(local_170,uVar22);
    local_178 = 0;
    pcVar32 = local_188;
  }
  local_118 = *(long *)(this + 0x430);
  local_120 = (undefined8 *)((ulong)local_120 & 0xffffffffffffff00);
  local_128 = _LC104;
  local_108[0] = 0;
  local_148 = local_178;
  local_138[0] = 0;
  local_158 = pcVar32;
  local_150 = local_180;
  if (local_168[0] == 0) {
    local_288 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar16,local_2a8,3,(StrRange *)&local_158,&local_128);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)local_168);
    lVar21 = local_138[0];
    local_288 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar16,local_2a8,3,(StrRange *)&local_158,&local_128);
    if (lVar21 != 0) {
      LOCK();
      plVar1 = (long *)(lVar21 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_138[0] + -0x10),false);
      }
      if (local_108[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_108[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_108[0] + -0x10),false);
        }
      }
    }
  }
  if (local_168[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_168[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_168[0] + -0x10),false);
    }
  }
  SVar3 = this[0x1c];
  pSVar7 = (StringName *)*param_2;
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#20}::operator()()::sname == '\0') &&
     (iVar19 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#20}::operator()()::sname), iVar19 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#20}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#20}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#20}::operator()()::sname);
  }
  if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
       ::{lambda()#19}::operator()()::sname == '\0') &&
     (iVar19 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                    ::{lambda()#19}::operator()()::sname), iVar19 != 0)) {
    _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#19}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                  ::{lambda()#19}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                         ::{lambda()#19}::operator()()::sname);
  }
  uVar31 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar7,(StringName *)
                             &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                              ::{lambda()#19}::operator()()::sname,0x11c118,uVar37,(uint)(byte)SVar3
                      ,4);
  local_1a8 = *(ulong *)(this + 0x1f0);
  local_1b0 = 0;
  local_198[0] = 0;
  local_1b8 = _LC76;
  if (local_1a8 != 0) {
    Vector<RID>::push_back(local_1a0);
    Vector<RID>::push_back(local_1a0,uVar31);
    local_1a8 = 0;
    uVar31 = local_1a8;
  }
  local_1a8 = uVar31;
  local_118 = *(long *)(this + 0x1e8);
  local_120 = (undefined8 *)((ulong)local_120 & 0xffffffffffffff00);
  local_128 = _LC105;
  local_108[0] = 0;
  local_158 = _LC51;
  local_150 = 0;
  local_138[0] = 0;
  local_178 = local_1a8;
  local_168[0] = 0;
  local_188 = local_1b8;
  local_180 = local_1b0;
  local_148 = param_5;
  if (local_198[0] == 0) {
    local_2d0 = UniformSetCacheRD::
                get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar16,local_2a8,0,&local_188,(StrRange *)&local_158,&local_128);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_198);
    lVar21 = local_168[0];
    local_2d0 = UniformSetCacheRD::
                get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar16,local_2a8,0,&local_188,(StrRange *)&local_158,&local_128);
    if (lVar21 != 0) {
      LOCK();
      plVar1 = (long *)(lVar21 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_168[0] + -0x10),false);
      }
      if (local_138[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_138[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_138[0] + -0x10),false);
        }
      }
    }
  }
  if (local_108[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_108[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_108[0] + -0x10),false);
    }
  }
  if (local_198[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_198[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_198[0] + -0x10),false);
    }
  }
  local_1b0 = 0;
  local_198[0] = 0;
  local_1b8 = _LC15;
  local_1a8 = uVar23;
  if (uVar9 != 0) {
    local_1a8 = uVar9;
    Vector<RID>::push_back(local_1a0,uVar9);
    Vector<RID>::push_back(local_1a0,uVar23);
    local_1a8 = 0;
  }
  uVar22 = *(undefined8 *)(this + 0x5c8);
  uVar31 = *(ulong *)(this + 0x428);
  if (*(long *)(this + 0x2c8) != 0) {
    lVar21 = *(long *)(*(long *)(this + 0x2c8) + -8);
    if (lVar21 < 3) goto LAB_0010fe1c;
    lVar21 = *(long *)(this + 0x2d8);
    if (lVar21 != 0) {
      lVar28 = *(long *)(lVar21 + -8);
      if (2 < lVar28) {
        if (*(char *)(lVar21 + 2) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_0010fe68;
        }
        if ((uVar31 == 0) || (*(uint *)(this + 900) <= (uint)uVar31)) {
LAB_001101d3:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_0010fe68;
        }
        lVar21 = ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x380)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x370) +
                          ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x380)) * 8);
        if (*(int *)(lVar21 + 0x98) != (int)(uVar31 >> 0x20)) {
          if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001101d3;
        }
        iVar19 = (int)lVar21;
        if (*(char *)(lVar21 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar28 = *(long *)(this + 0x328);
          if (lVar28 != 0) {
            lVar34 = 0;
            do {
              if (*(long *)(lVar28 + -8) <= lVar34) break;
              if (*(char *)(lVar28 + lVar34) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar19);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar19);
              }
              lVar28 = *(long *)(this + 0x328);
              lVar34 = lVar34 + 1;
            } while (lVar28 != 0);
          }
        }
        lVar34 = *(long *)(this + 0x2e8);
        if (lVar34 == 0) goto LAB_0010fbc6;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 < 3) goto LAB_0010fbc9;
        uVar31 = (ulong)*(uint *)(lVar34 + 8);
        lVar34 = *(long *)(lVar21 + 0x68);
        if (lVar34 == 0) goto LAB_0010ea36;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
        if (*(long *)(lVar34 + uVar31 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar19);
        }
        if (*(char *)(lVar21 + 0x90) == '\0') goto LAB_0010fe68;
        lVar21 = *(long *)(lVar21 + 0x88);
        if (lVar21 == 0) goto LAB_0010fbc6;
        lVar28 = *(long *)(lVar21 + -8);
        if (lVar28 < 3) goto LAB_0010fbc9;
        uVar25 = *(undefined8 *)(lVar21 + 0x10);
        goto LAB_0010c79a;
      }
      goto LAB_0010fbc9;
    }
LAB_0010fbc6:
    lVar28 = 0;
LAB_0010fbc9:
    uVar31 = 2;
    goto LAB_0010d4c0;
  }
  lVar21 = 0;
LAB_0010fe1c:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar21,
             "p_variant","variant_defines.size()","",false,false);
LAB_0010fe68:
  uVar25 = 0;
LAB_0010c79a:
  pcVar32 = _LC38;
  local_120 = (undefined8 *)((ulong)local_120 & 0xffffffffffffff00);
  local_128 = _LC106;
  local_108[0] = 0;
  local_158 = local_1b8;
  local_138[0] = 0;
  local_150 = local_1b0;
  local_148 = local_1a8;
  local_118 = uVar22;
  if (local_198[0] == 0) {
    local_180 = 0;
    local_168[0] = 0;
    local_188 = _LC38;
    local_178 = uVar56;
    local_2b8 = UniformSetCacheRD::
                get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar16,uVar25,1,&local_188,(StrRange *)&local_158);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)local_198);
    lVar21 = local_138[0];
    pcVar32 = _LC38;
    local_180 = 0;
    local_168[0] = 0;
    local_188 = _LC38;
    local_178 = uVar56;
    local_2b8 = UniformSetCacheRD::
                get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar16,uVar25,1,&local_188,(StrRange *)&local_158);
    if (lVar21 != 0) {
      LOCK();
      plVar1 = (long *)(lVar21 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_138[0] + -0x10),false);
      }
      if (local_108[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_108[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_108[0] + -0x10),false);
        }
      }
    }
  }
  if (local_198[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_198[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_198[0] + -0x10),false);
    }
  }
  uVar37 = (uint)pvVar26;
  if (*(int *)(this + 0x18) == 4) {
    uVar22 = RenderingDevice::get_singleton();
    local_158 = (char *)0x0;
    local_f8[0] = CONCAT44(_UNK_00136094,_LC70);
    local_120 = (undefined8 *)0x17;
    local_128 = "Generate Importance Map";
    local_f8[1] = _UNK_00136098;
    String::parse_latin1((StrRange *)&local_158);
    RenderingDevice::draw_command_begin_label(uVar22,(StrRange *)&local_158,local_f8);
    pcVar10 = local_158;
    if (local_158 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_158 = (char *)0x0;
        Memory::free_static(pcVar10 + -0x10,false);
      }
    }
    uVar33 = iVar18 + 0x438;
    auVar50._0_8_ = (double)(int)*(undefined8 *)(param_3 + 4);
    auVar50._8_8_ = (double)(int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
    auVar45._8_8_ = _LC75;
    auVar45._0_8_ = _LC75;
    uStack_230 = _LC75;
    auVar44 = divpd(auVar45,auVar50);
    *(ulong *)(this + 0x438) = CONCAT44((float)auVar44._8_8_,(float)auVar44._0_8_);
    *(float *)(this + 0x440) = (float)((double)param_8[1] * __LC101);
    uVar22 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar22,pvVar26,*(undefined8 *)(this + 0x900));
    pVVar2 = (Version *)(this + 0x448);
    gather_ssil(this,pvVar26,local_c8,local_a8,param_8,1,local_2d0,local_2b8,local_288);
    uVar31 = *(ulong *)(this + 0x5c0);
    if (*(long *)(this + 0x460) == 0) {
      lVar21 = 0;
LAB_0010fe73:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar21,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0010feac:
      local_280 = 0;
LAB_0010edb1:
      local_120 = (undefined8 *)0x0;
      local_f8[0] = uVar9;
      local_f8[1] = uVar56;
      iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
      puVar29 = local_120;
      if (iVar19 == 0) {
        lVar21 = 0;
        do {
          if (puVar29 == (undefined8 *)0x0) {
            lVar28 = 0;
LAB_0011010c:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar21,lVar28,"p_index","size()","",
                       false,false);
          }
          else {
            lVar28 = *(long *)((long)puVar29 + -8);
            if (lVar28 <= lVar21) goto LAB_0011010c;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
            *(ulong *)((long)local_120 + lVar21 * 8) = local_f8[lVar21];
            puVar29 = local_120;
          }
          if (lVar21 != 0) break;
          lVar21 = 1;
        } while( true );
      }
      pcVar10 = _LC76;
      plVar1 = (long *)((long)puVar29 + -0x10);
      local_1f8[0] = 0;
      if (puVar29 != (undefined8 *)0x0) {
        do {
          lVar21 = *plVar1;
          if (lVar21 == 0) goto LAB_0010eec5;
          LOCK();
          lVar28 = *plVar1;
          bVar39 = lVar21 == lVar28;
          if (bVar39) {
            *plVar1 = lVar21 + 1;
            lVar28 = lVar21;
          }
          UNLOCK();
        } while (!bVar39);
        if (lVar28 != -1) {
          local_1f8[0] = (long)local_120;
        }
LAB_0010eec5:
        if (local_120 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = (long *)((long)local_120 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_120 + -0x10),false);
          }
        }
      }
      local_120 = (undefined8 *)0x0;
      iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,1);
      puVar29 = local_120;
      local_1e8 = pcVar32;
      if (iVar19 == 0) {
        if (local_120 == (undefined8 *)0x0) {
          lVar21 = 0;
LAB_0011014e:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar21,"p_index","size()","",false,
                     false);
          goto LAB_0010ef0e;
        }
        lVar21 = local_120[-1];
        if (lVar21 < 1) goto LAB_0011014e;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
        *local_120 = uVar23;
        puVar29 = local_120;
LAB_0010ef38:
        local_1c8[0] = (undefined8 *)0x0;
        local_1d8 = 0;
        local_1e0 = 0;
        plVar1 = puVar29 + -2;
        do {
          lVar21 = *plVar1;
          if (lVar21 == 0) goto LAB_0010ef69;
          LOCK();
          lVar28 = *plVar1;
          bVar39 = lVar21 == lVar28;
          if (bVar39) {
            *plVar1 = lVar21 + 1;
            lVar28 = lVar21;
          }
          UNLOCK();
        } while (!bVar39);
        if (lVar28 != -1) {
          local_1c8[0] = local_120;
        }
LAB_0010ef69:
        if (local_120 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_120 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_120 + -2,false);
          }
        }
      }
      else {
LAB_0010ef0e:
        local_1e0 = 0;
        local_1d8 = 0;
        local_1c8[0] = (undefined8 *)0x0;
        if (puVar29 != (undefined8 *)0x0) goto LAB_0010ef38;
      }
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar22,pvVar26,*(undefined8 *)(this + 0x910));
      uVar22 = RenderingDevice::get_singleton();
      local_108[0] = 0;
      local_128 = pcVar10;
      local_120 = (undefined8 *)((ulong)local_120 & 0xffffffffffffff00);
      local_118 = 0;
      if (local_1f8[0] == 0) {
        uVar25 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar25,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_1f8);
        lVar21 = local_108[0];
        uVar25 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar25,0);
        if (lVar21 != 0) {
          LOCK();
          plVar1 = (long *)(lVar21 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
        }
      }
      uVar22 = RenderingDevice::get_singleton();
      local_108[0] = 0;
      local_128 = local_1e8;
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,local_1e0);
      local_118 = local_1d8;
      if (local_1c8[0] == (undefined8 *)0x0) {
        uVar25 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar25,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_1c8);
        lVar21 = local_108[0];
        uVar25 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar25,1);
        if (lVar21 != 0) {
          LOCK();
          plVar1 = (long *)(lVar21 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
        }
      }
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar21,pvVar26,uVar33);
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar21,uVar37,*(uint *)(param_3 + 0xc),*(uint *)(param_3 + 0x10));
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar21);
      uVar31 = *(ulong *)(this + 0x5c0);
      if (*(long *)(this + 0x460) == 0) {
        lVar21 = 0;
LAB_00110755:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar21,
                   "p_variant","variant_defines.size()","",false,false);
LAB_0010f262:
        local_280 = 0;
      }
      else {
        lVar21 = *(long *)(*(long *)(this + 0x460) + -8);
        if (lVar21 < 2) goto LAB_00110755;
        lVar21 = *(long *)(this + 0x470);
        if (lVar21 == 0) {
LAB_0011058c:
          lVar28 = 0;
LAB_0011058f:
          uVar31 = 1;
          goto LAB_0010d4c0;
        }
        lVar28 = *(long *)(lVar21 + -8);
        if (lVar28 < 2) goto LAB_0011058f;
        if (*(char *)(lVar21 + 1) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7);
          goto LAB_0010f262;
        }
        if ((uVar31 == 0) || (*(uint *)(this + 0x51c) <= (uint)uVar31)) {
LAB_00110843:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa);
          goto LAB_0010f262;
        }
        lVar21 = *(long *)(*(long *)(this + 0x508) +
                          ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x518)) * 8) +
                 ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x518)) * 0xa0;
        if (*(int *)(lVar21 + 0x98) != (int)(uVar31 >> 0x20)) {
          if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00110843;
        }
        iVar19 = (int)lVar21;
        if (*(char *)(lVar21 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar28 = *(long *)(this + 0x4c0);
          if (lVar28 != 0) {
            lVar34 = 0;
            do {
              if (*(long *)(lVar28 + -8) <= lVar34) break;
              if (*(char *)(lVar28 + lVar34) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar19);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar19);
              }
              lVar28 = *(long *)(this + 0x4c0);
              lVar34 = lVar34 + 1;
            } while (lVar28 != 0);
          }
        }
        lVar34 = *(long *)(this + 0x480);
        if (lVar34 == 0) goto LAB_0011058c;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 < 2) goto LAB_0011058f;
        uVar31 = (ulong)*(uint *)(lVar34 + 4);
        lVar34 = *(long *)(lVar21 + 0x68);
        if (lVar34 == 0) goto LAB_0010ea36;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
        if (*(long *)(lVar34 + uVar31 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar19);
        }
        if (*(char *)(lVar21 + 0x90) == '\0') goto LAB_0010f262;
        lVar21 = *(long *)(lVar21 + 0x88);
        if (lVar21 == 0) goto LAB_0011058c;
        lVar28 = *(long *)(lVar21 + -8);
        if (lVar28 < 2) goto LAB_0011058f;
        local_280 = *(undefined8 *)(lVar21 + 8);
      }
      local_120 = (undefined8 *)0x0;
      local_f8[0] = uVar9;
      local_f8[1] = uVar23;
      iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
      puVar29 = local_120;
      if (iVar19 == 0) {
        lVar21 = 0;
        do {
          if (puVar29 == (undefined8 *)0x0) {
            lVar28 = 0;
LAB_001102ad:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar21,lVar28,"p_index","size()","",
                       false,false);
          }
          else {
            lVar28 = *(long *)((long)puVar29 + -8);
            if (lVar28 <= lVar21) goto LAB_001102ad;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
            *(ulong *)((long)local_120 + lVar21 * 8) = local_f8[lVar21];
            puVar29 = local_120;
          }
          if (lVar21 != 0) break;
          lVar21 = 1;
        } while( true );
      }
      plVar1 = (long *)((long)puVar29 + -0x10);
      local_1b0 = 0;
      local_1a8 = 0;
      local_198[0] = 0;
      local_1b8 = _LC76;
      if (puVar29 != (undefined8 *)0x0) {
        do {
          lVar21 = *plVar1;
          if (lVar21 == 0) goto LAB_0010f36d;
          LOCK();
          lVar28 = *plVar1;
          bVar39 = lVar21 == lVar28;
          if (bVar39) {
            *plVar1 = lVar21 + 1;
            lVar28 = lVar21;
          }
          UNLOCK();
        } while (!bVar39);
        if (lVar28 != -1) {
          local_198[0] = (long)local_120;
        }
LAB_0010f36d:
        if (local_120 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = (long *)((long)local_120 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_120 + -0x10),false);
          }
        }
      }
      local_120 = (undefined8 *)0x0;
      iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,1);
      puVar29 = local_120;
      if (iVar19 == 0) {
        if (local_120 == (undefined8 *)0x0) {
          lVar21 = 0;
LAB_001102ef:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar21,"p_index","size()","",false,
                     false);
          goto LAB_0010f3b6;
        }
        lVar21 = local_120[-1];
        if (lVar21 < 1) goto LAB_001102ef;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
        *local_120 = uVar24;
        puVar29 = local_120;
LAB_0010f3e0:
        local_168[0] = 0;
        local_178 = 0;
        local_180 = 0;
        local_188 = pcVar32;
        CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)&local_120);
        LOCK();
        plVar1 = puVar29 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_120 + -2,false);
        }
      }
      else {
LAB_0010f3b6:
        local_180 = 0;
        local_178 = 0;
        local_168[0] = 0;
        local_188 = pcVar32;
        if (puVar29 != (undefined8 *)0x0) goto LAB_0010f3e0;
      }
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar22,pvVar26,*(undefined8 *)(this + 0x918));
      uVar22 = RenderingDevice::get_singleton();
      local_108[0] = 0;
      local_128 = local_1b8;
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,local_1b0);
      local_118 = local_1a8;
      if (local_198[0] == 0) {
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_198);
        lVar21 = local_108[0];
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,0);
        if (lVar21 != 0) {
          LOCK();
          plVar1 = (long *)(lVar21 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
        }
      }
      uVar22 = RenderingDevice::get_singleton();
      local_108[0] = 0;
      local_128 = local_188;
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,local_180);
      local_118 = local_178;
      if (local_168[0] == 0) {
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_168);
        lVar21 = local_108[0];
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_280,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,1);
        if (lVar21 != 0) {
          LOCK();
          plVar1 = (long *)(lVar21 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
        }
      }
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar21,pvVar26,uVar33);
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar21,uVar37,*(uint *)(param_3 + 0xc),*(uint *)(param_3 + 0x10));
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar21);
      uVar31 = *(ulong *)(this + 0x5c0);
      if (*(long *)(this + 0x460) == 0) {
        lVar21 = 0;
LAB_00110799:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar21,
                   "p_variant","variant_defines.size()","",false,false);
LAB_0010f6fa:
        local_2c0 = 0;
      }
      else {
        lVar21 = *(long *)(*(long *)(this + 0x460) + -8);
        if (lVar21 < 3) goto LAB_00110799;
        lVar21 = *(long *)(this + 0x470);
        if (lVar21 == 0) goto LAB_0010fbc6;
        lVar28 = *(long *)(lVar21 + -8);
        if (lVar28 < 3) goto LAB_0010fbc9;
        if (*(char *)(lVar21 + 2) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
          goto LAB_0010f6fa;
        }
        if ((uVar31 == 0) || (*(uint *)(this + 0x51c) <= (uint)uVar31)) {
LAB_0011095a:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          goto LAB_0010f6fa;
        }
        lVar21 = ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x518)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x508) +
                          ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x518)) * 8);
        if (*(int *)(lVar21 + 0x98) != (int)(uVar31 >> 0x20)) {
          if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011095a;
        }
        iVar19 = (int)lVar21;
        if (*(char *)(lVar21 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar28 = *(long *)(this + 0x4c0);
          if (lVar28 != 0) {
            lVar34 = 0;
            do {
              if (*(long *)(lVar28 + -8) <= lVar34) break;
              if (*(char *)(lVar28 + lVar34) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar19);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar19);
              }
              lVar28 = *(long *)(this + 0x4c0);
              lVar34 = lVar34 + 1;
            } while (lVar28 != 0);
          }
        }
        lVar34 = *(long *)(this + 0x480);
        if (lVar34 == 0) goto LAB_0010fbc6;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 < 3) goto LAB_0010fbc9;
        uVar31 = (ulong)*(uint *)(lVar34 + 8);
        lVar34 = *(long *)(lVar21 + 0x68);
        if (lVar34 == 0) goto LAB_0010ea36;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
        if (*(long *)(lVar34 + uVar31 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar19);
        }
        if (*(char *)(lVar21 + 0x90) == '\0') goto LAB_0010f6fa;
        lVar21 = *(long *)(lVar21 + 0x88);
        if (lVar21 == 0) goto LAB_0010fbc6;
        lVar28 = *(long *)(lVar21 + -8);
        if (lVar28 < 3) goto LAB_0010fbc9;
        local_2c0 = *(undefined8 *)(lVar21 + 0x10);
      }
      local_120 = (undefined8 *)0x0;
      local_f8[0] = uVar9;
      local_f8[1] = uVar24;
      iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
      puVar29 = local_120;
      if (iVar19 == 0) {
        lVar21 = 0;
        do {
          if (puVar29 == (undefined8 *)0x0) {
            lVar28 = 0;
LAB_00110450:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar21,lVar28,"p_index","size()","",
                       false,false);
          }
          else {
            lVar28 = *(long *)((long)puVar29 + -8);
            if (lVar28 <= lVar21) goto LAB_00110450;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
            *(ulong *)((long)local_120 + lVar21 * 8) = local_f8[lVar21];
            puVar29 = local_120;
          }
          if (lVar21 != 0) break;
          lVar21 = 1;
        } while( true );
      }
      local_150 = 0;
      local_148 = 0;
      local_138[0] = 0;
      local_158 = _LC76;
      if (puVar29 != (undefined8 *)0x0) {
        CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
        LOCK();
        plVar1 = (long *)((long)puVar29 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)((long)local_120 + -0x10),false);
        }
      }
      lVar21 = local_138[0];
      uVar30 = local_150;
      pcVar10 = local_158;
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar22,pvVar26,*(undefined8 *)(this + 0x920));
      uVar22 = RenderingDevice::get_singleton();
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
      local_108[0] = 0;
      local_118 = local_148;
      local_128 = pcVar10;
      if (lVar21 == 0) {
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2c0,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
        lVar21 = local_108[0];
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2c0,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,0);
        if (lVar21 != 0) {
          LOCK();
          plVar1 = (long *)(lVar21 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
        }
      }
      uVar22 = RenderingDevice::get_singleton();
      local_108[0] = 0;
      local_128 = local_1e8;
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,local_1e0);
      local_118 = local_1d8;
      if (local_1c8[0] == (undefined8 *)0x0) {
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2c0,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_1c8);
        lVar21 = local_108[0];
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2c0,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,1);
        if (lVar21 != 0) {
          LOCK();
          plVar1 = (long *)(lVar21 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
        }
      }
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,*(undefined8 *)(this + 0x5d0),2)
      ;
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar21,pvVar26,uVar33);
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar21,uVar37,*(uint *)(param_3 + 0xc),*(uint *)(param_3 + 0x10));
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar21);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar22,pvVar26,*(undefined8 *)(this + 0x908));
      if (local_138[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_138[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_138[0] + -0x10),false);
        }
      }
      if (local_168[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_168[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_168[0] + -0x10),false);
        }
      }
      if (local_198[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_198[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_198[0] + -0x10),false);
        }
      }
      if (local_1c8[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_1c8[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_1c8[0] + -2,false);
        }
      }
      if (local_1f8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_1f8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_1f8[0] + -0x10),false);
        }
      }
      goto LAB_0010c937;
    }
    lVar21 = *(long *)(*(long *)(this + 0x460) + -8);
    if (lVar21 < 1) goto LAB_0010fe73;
    pcVar10 = *(char **)(this + 0x470);
    if (pcVar10 != (char *)0x0) {
      lVar28 = *(long *)(pcVar10 + -8);
      if (0 < lVar28) {
        if (*pcVar10 == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7);
          goto LAB_0010feac;
        }
        if ((uVar31 == 0) || (*(uint *)(this + 0x51c) <= (uint)uVar31)) {
LAB_00110728:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa);
          goto LAB_0010feac;
        }
        lVar21 = ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x518)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x508) +
                          ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x518)) * 8);
        if (*(int *)(lVar21 + 0x98) != (int)(uVar31 >> 0x20)) {
          if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00110728;
        }
        iVar19 = (int)lVar21;
        if (*(char *)(lVar21 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar28 = *(long *)(this + 0x4c0);
          if (lVar28 != 0) {
            lVar34 = 0;
            do {
              if (*(long *)(lVar28 + -8) <= lVar34) break;
              if (*(char *)(lVar28 + lVar34) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar19);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar19);
              }
              lVar28 = *(long *)(this + 0x4c0);
              lVar34 = lVar34 + 1;
            } while (lVar28 != 0);
          }
        }
        puVar8 = *(uint **)(this + 0x480);
        if (puVar8 == (uint *)0x0) goto LAB_0010d4a0;
        lVar28 = *(long *)(puVar8 + -2);
        if (lVar28 < 1) goto LAB_0010d4a3;
        uVar31 = (ulong)*puVar8;
        lVar34 = *(long *)(lVar21 + 0x68);
        if (lVar34 == 0) goto LAB_0010ea36;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
        if (*(long *)(lVar34 + uVar31 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar19);
        }
        if (*(char *)(lVar21 + 0x90) == '\0') goto LAB_0010feac;
        puVar29 = *(undefined8 **)(lVar21 + 0x88);
        if (puVar29 == (undefined8 *)0x0) goto LAB_0010d4a0;
        lVar28 = puVar29[-1];
        if (lVar28 < 1) goto LAB_0010d4a3;
        local_280 = *puVar29;
        goto LAB_0010edb1;
      }
      goto LAB_0010d4a3;
    }
LAB_0010d4a0:
    lVar28 = 0;
  }
  else {
    uVar22 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar22,pvVar26,*(undefined8 *)(this + 0x8f8));
    uStack_230 = _LC75;
LAB_0010c937:
    local_290 = local_a8;
    pcVar38 = (char *)0x0;
    gather_ssil(this,pvVar26,local_e8,local_290,param_8,0,local_2d0,local_2b8,local_288);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    uVar22 = RenderingDevice::get_singleton();
    local_158 = (char *)0x0;
    local_f8[0] = CONCAT44(_UNK_00136094,_LC70);
    local_120 = (undefined8 *)0xf;
    local_128 = "Edge Aware Blur";
    local_f8[1] = _UNK_00136098;
    String::parse_latin1((StrRange *)&local_158);
    RenderingDevice::draw_command_begin_label(uVar22,(StrRange *)&local_158,local_f8);
    pcVar10 = local_158;
    if (local_158 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_158 = (char *)0x0;
        Memory::free_static(pcVar10 + -0x10,false);
      }
    }
    local_228 = 1;
    uVar22 = *(undefined8 *)(param_3 + 4);
    *(float *)(this + 0x5d8) = _LC70 - param_8[2];
    auVar13._8_8_ = uStack_230;
    auVar13._0_8_ = uStack_230;
    auVar48._0_8_ = (double)(int)uVar22;
    auVar48._8_8_ = (double)(int)((ulong)uVar22 >> 0x20);
    auVar44 = divpd(auVar13,auVar48);
    *(ulong *)(this + 0x5e0) = CONCAT44((float)auVar44._8_8_,(float)auVar44._0_8_);
    if (0 < *(int *)(this + 0x18)) {
      local_228 = *(uint *)(this + 0x24);
    }
    pVVar2 = (Version *)(this + 0x5e8);
    uVar31 = *(ulong *)(this + 0x760);
    if (*(long *)(this + 0x600) == 0) {
      lVar21 = 0;
LAB_0011020a:
      pcVar38 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar21,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0010cb93:
      uVar33 = 0;
      if (0 < (int)local_228) {
        do {
          if (*(int *)(this + 0x18) < 1) {
            uVar35 = 0;
            iVar19 = 0;
            iVar20 = 6;
          }
          else {
            iVar20 = local_228 - 2;
            uVar35 = (ulong)((int)uVar33 < iVar20) + 1;
            iVar19 = ((int)uVar33 < iVar20) + 1;
            iVar20 = ((int)uVar33 < iVar20) + 7;
          }
          uVar11 = *(ulong *)(this + 0x760);
          if (*(long *)(this + 0x600) == 0) {
            lVar21 = 0;
LAB_0010fc15:
            pcVar38 = "p_variant";
            _err_print_index_error
                      ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,
                       uVar35,lVar21,"p_variant","variant_defines.size()","",false,false);
LAB_0010cceb:
            local_2d0 = 0;
          }
          else {
            lVar21 = *(long *)(*(long *)(this + 0x600) + -8);
            if (lVar21 <= (long)uVar35) goto LAB_0010fc15;
            lVar21 = *(long *)(this + 0x610);
            uVar31 = uVar35;
            if (lVar21 == 0) goto LAB_0010ea10;
            lVar28 = *(long *)(lVar21 + -8);
            if (lVar28 <= (long)uVar35) goto LAB_0010d4c0;
            pcVar38 = (char *)(long)iVar19;
            if (pcVar38[lVar21] == '\0') {
              pcVar38 = (char *)0x0;
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                              );
              goto LAB_0010cceb;
            }
            if ((uVar11 == 0) || (*(uint *)(this + 0x6bc) <= (uint)uVar11)) {
LAB_0010fdb0:
              pcVar38 = (char *)0x0;
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.");
              goto LAB_0010cceb;
            }
            lVar21 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(this + 0x6b8)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x6a8) +
                              ((uVar11 & 0xffffffff) / (ulong)*(uint *)(this + 0x6b8)) * 8);
            if (*(int *)(lVar21 + 0x98) != (int)(uVar11 >> 0x20)) {
              if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_0010fdb0;
            }
            iVar19 = (int)lVar21;
            if (*(char *)(lVar21 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar28 = *(long *)(this + 0x660);
              if (lVar28 != 0) {
                lVar34 = 0;
                do {
                  if (*(long *)(lVar28 + -8) <= lVar34) break;
                  if (*(char *)(lVar28 + lVar34) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar19);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar19);
                  }
                  lVar28 = *(long *)(this + 0x660);
                  lVar34 = lVar34 + 1;
                } while (lVar28 != 0);
              }
            }
            lVar34 = *(long *)(this + 0x620);
            if (lVar34 == 0) {
LAB_0010ea10:
              lVar28 = 0;
              uVar31 = uVar35;
              goto LAB_0010d4c0;
            }
            lVar28 = *(long *)(lVar34 + -8);
            if (lVar28 <= (long)uVar35) goto LAB_0010d4c0;
            uVar31 = (ulong)*(uint *)(lVar34 + (long)pcVar38 * 4);
            lVar34 = *(long *)(lVar21 + 0x68);
            if (lVar34 == 0) goto LAB_0010ea36;
            lVar28 = *(long *)(lVar34 + -8);
            if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
            if (*(long *)(lVar34 + uVar31 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar19);
            }
            if (*(char *)(lVar21 + 0x90) == '\0') goto LAB_0010cceb;
            lVar21 = *(long *)(lVar21 + 0x88);
            if (lVar21 == 0) goto LAB_0010ea10;
            lVar28 = *(long *)(lVar21 + -8);
            uVar31 = uVar35;
            if (lVar28 <= (long)uVar35) goto LAB_0010d4c0;
            local_2d0 = *(undefined8 *)(lVar21 + (long)pcVar38 * 8);
          }
          lVar21 = 0;
          do {
            for (; (*(int *)(this + 0x18) == 0 && ((int)lVar21 - 1U < 2)); lVar21 = lVar21 + 1) {
            }
            uVar22 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_compute_pipeline
                      (uVar22,pvVar26,*(undefined8 *)(this + (long)iVar20 * 8 + 0x8f8));
            if ((uVar33 & 1) == 0) {
              if (*(int *)(this + 0x18) == 0) {
                local_120 = (undefined8 *)0x0;
                local_f8[1] = *(ulong *)(local_e8 + lVar21 * 8);
                local_f8[0] = uVar9;
                iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
                puVar29 = local_120;
                if (iVar19 == 0) {
                  lVar28 = 0;
                  do {
                    if (puVar29 == (undefined8 *)0x0) {
                      lVar34 = 0;
LAB_0010e93b:
                      pcVar38 = "p_index";
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar34,"p_index",
                                 "size()","",false,false);
                    }
                    else {
                      lVar34 = *(long *)((long)puVar29 + -8);
                      if (lVar34 <= lVar28) goto LAB_0010e93b;
                      CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
                      *(ulong *)((long)local_120 + lVar28 * 8) = local_f8[lVar28];
                      puVar29 = local_120;
                    }
                    if (lVar28 != 0) break;
                    lVar28 = 1;
                  } while( true );
                }
              }
              else {
                local_f8[0] = *(ulong *)(this + 0x1f0);
                local_120 = (undefined8 *)0x0;
                local_f8[1] = *(ulong *)(local_e8 + lVar21 * 8);
                iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
                puVar29 = local_120;
                if (iVar19 == 0) {
                  lVar28 = 0;
                  do {
                    if (puVar29 == (undefined8 *)0x0) {
                      lVar34 = 0;
LAB_0010e8eb:
                      pcVar38 = "p_index";
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar34,"p_index",
                                 "size()","",false,false);
                    }
                    else {
                      lVar34 = *(long *)((long)puVar29 + -8);
                      if (lVar34 <= lVar28) goto LAB_0010e8eb;
                      CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
                      *(ulong *)((long)local_120 + lVar28 * 8) = local_f8[lVar28];
                      puVar29 = local_120;
                    }
                    if (lVar28 != 0) break;
                    lVar28 = 1;
                  } while( true );
                }
              }
              local_150 = 0;
              local_148 = 0;
              local_138[0] = 0;
              local_158 = _LC76;
              if (puVar29 != (undefined8 *)0x0) {
                CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
                LOCK();
                plVar1 = (long *)((long)puVar29 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)((long)local_120 + -0x10),false);
                }
              }
              lVar28 = local_138[0];
              uVar30 = local_150;
              pcVar10 = local_158;
              uVar22 = RenderingDevice::get_singleton();
              local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
              local_128 = pcVar10;
              local_118 = local_148;
              local_108[0] = 0;
              puVar27 = local_c8;
              if (lVar28 == 0) {
                uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar16,local_2d0,0)
                ;
                RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
                lVar34 = local_108[0];
                uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar16,local_2d0,0)
                ;
                RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23);
                if (lVar34 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar34 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_108[0] + -0x10),false);
                  }
                  lVar28 = local_138[0];
                  if (local_138[0] == 0) goto LAB_0010cf69;
                }
                LOCK();
                plVar1 = (long *)(lVar28 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_138[0] + -0x10),false);
                }
              }
            }
            else {
              if (*(int *)(this + 0x18) == 0) {
                local_120 = (undefined8 *)0x0;
                local_f8[1] = *(ulong *)(local_c8 + lVar21 * 8);
                local_f8[0] = uVar9;
                iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
                puVar29 = local_120;
                if (iVar19 == 0) {
                  lVar28 = 0;
                  do {
                    if (puVar29 == (undefined8 *)0x0) {
                      lVar34 = 0;
LAB_0010e89b:
                      pcVar38 = "p_index";
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar34,"p_index",
                                 "size()","",false,false);
                    }
                    else {
                      lVar34 = *(long *)((long)puVar29 + -8);
                      if (lVar34 <= lVar28) goto LAB_0010e89b;
                      CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
                      *(ulong *)((long)local_120 + lVar28 * 8) = local_f8[lVar28];
                      puVar29 = local_120;
                    }
                    if (lVar28 != 0) break;
                    lVar28 = 1;
                  } while( true );
                }
              }
              else {
                local_f8[0] = *(ulong *)(this + 0x1f0);
                local_120 = (undefined8 *)0x0;
                local_f8[1] = *(ulong *)(local_c8 + lVar21 * 8);
                iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
                puVar29 = local_120;
                if (iVar19 == 0) {
                  lVar28 = 0;
                  do {
                    if (puVar29 == (undefined8 *)0x0) {
                      lVar34 = 0;
LAB_0010e84b:
                      pcVar38 = "p_index";
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar34,"p_index",
                                 "size()","",false,false);
                    }
                    else {
                      lVar34 = *(long *)((long)puVar29 + -8);
                      if (lVar34 <= lVar28) goto LAB_0010e84b;
                      CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
                      *(ulong *)((long)local_120 + lVar28 * 8) = local_f8[lVar28];
                      puVar29 = local_120;
                    }
                    if (lVar28 != 0) break;
                    lVar28 = 1;
                  } while( true );
                }
              }
              local_150 = 0;
              local_148 = 0;
              local_138[0] = 0;
              local_158 = _LC76;
              if (puVar29 != (undefined8 *)0x0) {
                CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
                LOCK();
                plVar1 = (long *)((long)puVar29 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)((long)local_120 + -0x10),false);
                }
              }
              lVar28 = local_138[0];
              uVar30 = local_150;
              pcVar10 = local_158;
              uVar22 = RenderingDevice::get_singleton();
              local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
              local_128 = pcVar10;
              local_118 = local_148;
              local_108[0] = 0;
              puVar27 = local_e8;
              if (lVar28 == 0) {
                uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar16,local_2d0,0)
                ;
                RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
                lVar34 = local_108[0];
                uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar16,local_2d0,0)
                ;
                RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23);
                if (lVar34 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar34 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_108[0] + -0x10),false);
                  }
                  lVar28 = local_138[0];
                  if (local_138[0] == 0) goto LAB_0010cf69;
                }
                LOCK();
                plVar1 = (long *)(lVar28 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_138[0] + -0x10),false);
                }
              }
            }
LAB_0010cf69:
            uVar22 = *(undefined8 *)(puVar27 + lVar21 * 8);
            local_120 = (undefined8 *)0x0;
            iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,1);
            puVar29 = local_120;
            if (iVar19 == 0) {
              if (local_120 == (undefined8 *)0x0) {
                lVar28 = 0;
LAB_0010e563:
                pcVar38 = "p_index";
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar28,"p_index","size()","",
                           false,false);
                goto LAB_0010cf96;
              }
              lVar28 = local_120[-1];
              if (lVar28 < 1) goto LAB_0010e563;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
              *local_120 = uVar22;
              puVar29 = local_120;
LAB_0010d771:
              local_138[0] = 0;
              local_148 = 0;
              local_150 = 0;
              local_158 = pcVar32;
              CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
              LOCK();
              plVar1 = puVar29 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_120 + -2,false);
              }
            }
            else {
LAB_0010cf96:
              local_150 = 0;
              local_148 = 0;
              local_138[0] = 0;
              local_158 = pcVar32;
              if (puVar29 != (undefined8 *)0x0) goto LAB_0010d771;
            }
            lVar28 = local_138[0];
            uVar30 = local_150;
            pcVar10 = local_158;
            uVar22 = RenderingDevice::get_singleton();
            local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
            local_128 = pcVar10;
            local_118 = local_148;
            local_108[0] = 0;
            if (lVar28 == 0) {
              uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar16,local_2d0,1,&local_128);
              RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
              lVar34 = local_108[0];
              uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar16,local_2d0,1,&local_128);
              RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23);
              if (lVar34 != 0) {
                LOCK();
                plVar1 = (long *)(lVar34 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_108[0] + -0x10),false);
                }
                lVar28 = local_138[0];
                if (local_138[0] == 0) goto LAB_0010d893;
              }
              LOCK();
              plVar1 = (long *)(lVar28 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_138[0] + -0x10),false);
              }
            }
LAB_0010d893:
            local_120 = (undefined8 *)0x0;
            uVar22 = *(undefined8 *)(local_290 + lVar21 * 8);
            iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,1);
            puVar29 = local_120;
            if (iVar19 == 0) {
              if (local_120 == (undefined8 *)0x0) {
                lVar28 = 0;
LAB_0010e51b:
                pcVar38 = "p_index";
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar28,"p_index","size()","",
                           false,false);
                goto LAB_0010d8c1;
              }
              lVar28 = local_120[-1];
              if (lVar28 < 1) goto LAB_0010e51b;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
              *local_120 = uVar22;
              puVar29 = local_120;
LAB_0010d951:
              local_138[0] = 0;
              local_148 = 0;
              local_150 = 0;
              local_158 = pcVar32;
              CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
              LOCK();
              plVar1 = puVar29 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_120 + -2,false);
              }
            }
            else {
LAB_0010d8c1:
              local_150 = 0;
              local_148 = 0;
              local_138[0] = 0;
              local_158 = pcVar32;
              if (puVar29 != (undefined8 *)0x0) goto LAB_0010d951;
            }
            lVar28 = local_138[0];
            uVar30 = local_150;
            pcVar10 = local_158;
            uVar22 = RenderingDevice::get_singleton();
            local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
            local_128 = pcVar10;
            local_118 = local_148;
            local_108[0] = 0;
            if (lVar28 == 0) {
              uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar16,local_2d0,2,&local_128);
              RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,2);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
              lVar34 = local_108[0];
              uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar16,local_2d0,2,&local_128);
              RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,2);
              if (lVar34 != 0) {
                LOCK();
                plVar1 = (long *)(lVar34 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                lVar28 = local_138[0];
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_108[0] + -0x10),false);
                  lVar28 = local_138[0];
                }
              }
            }
            lVar34 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_set_push_constant(lVar34,pvVar26,iVar18 + 0x5d8);
            uVar5 = *(uint *)(param_3 + 4);
            uVar6 = *(uint *)(param_3 + 8);
            lVar34 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_dispatch_threads(lVar34,uVar37,uVar5,uVar6);
            if (lVar28 != 0) {
              LOCK();
              plVar1 = (long *)(lVar28 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_138[0] + -0x10),false);
              }
            }
            lVar21 = lVar21 + 1;
          } while (lVar21 != 4);
          lVar21 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_add_barrier(lVar21);
          uVar33 = uVar33 + 1;
        } while (local_228 != uVar33);
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      uVar22 = RenderingDevice::get_singleton();
      local_158 = (char *)0x0;
      local_f8[0] = CONCAT44(_UNK_00136094,_LC70);
      local_120 = (undefined8 *)0x12;
      local_128 = "Interleave Buffers";
      local_f8[1] = _UNK_00136098;
      String::parse_latin1((StrRange *)&local_158);
      RenderingDevice::draw_command_begin_label(uVar22,(StrRange *)&local_158,local_f8);
      pcVar10 = local_158;
      if (local_158 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_158 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_158 = (char *)0x0;
          Memory::free_static(pcVar10 + -0x10,false);
        }
      }
      iVar19 = 9;
      uVar42 = 2;
      if (this[0x1c] != (SSEffects)0x0) {
        uVar42 = 4;
      }
      auVar49._0_8_ = (double)(int)*(undefined8 *)(param_8 + 4);
      auVar49._8_8_ = (double)(int)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20);
      *(float *)(this + 0x768) = _LC70 - param_8[2];
      auVar14._8_8_ = uStack_230;
      auVar14._0_8_ = uStack_230;
      *(undefined4 *)(this + 0x76c) = uVar42;
      auVar44 = divpd(auVar14,auVar49);
      *(ulong *)(this + 0x770) = CONCAT44((float)auVar44._8_8_,(float)auVar44._0_8_);
      if (*(int *)(this + 0x18) != 1) {
        iVar19 = (*(int *)(this + 0x18) < 2) + 10;
      }
      uVar31 = *(ulong *)(this + 0x8f0);
      if (*(long *)(this + 0x790) == 0) {
        lVar21 = 0;
LAB_00110cf3:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar21,
                   "p_variant","variant_defines.size()","",false,false);
LAB_0010dd07:
        local_2d0 = 0;
      }
      else {
        lVar21 = *(long *)(*(long *)(this + 0x790) + -8);
        if (lVar21 < 1) goto LAB_00110cf3;
        pcVar10 = *(char **)(this + 0x7a0);
        if (pcVar10 == (char *)0x0) goto LAB_0010d4a0;
        lVar28 = *(long *)(pcVar10 + -8);
        if (lVar28 < 1) goto LAB_0010d4a3;
        if (*pcVar10 == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_0010dd07;
        }
        if ((uVar31 == 0) || (*(uint *)(this + 0x84c) <= (uint)uVar31)) {
LAB_00110d72:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_0010dd07;
        }
        lVar21 = ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x848)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x838) +
                          ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x848)) * 8);
        if (*(int *)(lVar21 + 0x98) != (int)(uVar31 >> 0x20)) {
          if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,pcVar38);
          }
          goto LAB_00110d72;
        }
        pVVar2 = (Version *)(this + 0x778);
        iVar20 = (int)lVar21;
        if (*(char *)(lVar21 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar28 = *(long *)(this + 0x7f0);
          if (lVar28 != 0) {
            lVar34 = 0;
            do {
              if (*(long *)(lVar28 + -8) <= lVar34) break;
              if (*(char *)(lVar28 + lVar34) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar20);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar20);
              }
              lVar28 = *(long *)(this + 0x7f0);
              lVar34 = lVar34 + 1;
            } while (lVar28 != 0);
          }
        }
        puVar8 = *(uint **)(this + 0x7b0);
        if (puVar8 == (uint *)0x0) goto LAB_0010d4a0;
        lVar28 = *(long *)(puVar8 + -2);
        if (lVar28 < 1) goto LAB_0010d4a3;
        uVar31 = (ulong)*puVar8;
        lVar34 = *(long *)(lVar21 + 0x68);
        if (lVar34 == 0) goto LAB_0010ea36;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
        if (*(long *)(lVar34 + uVar31 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar20);
        }
        if (*(char *)(lVar21 + 0x90) == '\0') goto LAB_0010dd07;
        puVar29 = *(undefined8 **)(lVar21 + 0x88);
        if (puVar29 == (undefined8 *)0x0) goto LAB_0010d4a0;
        lVar28 = puVar29[-1];
        if (lVar28 < 1) goto LAB_0010d4a3;
        local_2d0 = *puVar29;
      }
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar22,pvVar26,*(undefined8 *)(this + (long)iVar19 * 8 + 0x8f8));
      pSVar7 = (StringName *)*param_2;
      if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
           ::{lambda()#22}::operator()()::sname == '\0') &&
         (iVar19 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                        ::{lambda()#22}::operator()()::sname), iVar19 != 0)) {
        _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#22}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                      ::{lambda()#22}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#22}::operator()()::sname);
      }
      if ((screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
           ::{lambda()#21}::operator()()::sname == '\0') &&
         (iVar19 = __cxa_guard_acquire(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                        ::{lambda()#21}::operator()()::sname), iVar19 != 0)) {
        _scs_create((char *)&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#21}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                      ::{lambda()#21}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                             ::{lambda()#21}::operator()()::sname);
      }
      uVar22 = RenderSceneBuffersRD::get_texture_slice
                         (pSVar7,(StringName *)
                                 &screen_space_indirect_lighting(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSILRenderBuffers&,unsigned_int,RID,Projection_const&,Projection_const&,RendererRD::SSEffects::SSILSettings_const&)
                                  ::{lambda()#21}::operator()()::sname,0x11c0f8,param_4,0,1);
      local_120 = (undefined8 *)0x0;
      iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,1);
      puVar29 = local_120;
      if (iVar19 == 0) {
        if (local_120 == (undefined8 *)0x0) {
          lVar21 = 0;
LAB_001108db:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar21,"p_index","size()","",false,
                     false);
          goto LAB_0010ddc2;
        }
        lVar21 = local_120[-1];
        if (lVar21 < 1) goto LAB_001108db;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
        *local_120 = uVar22;
        puVar29 = local_120;
LAB_0010dded:
        local_168[0] = 0;
        local_178 = 0;
        local_180 = 0;
        local_188 = pcVar32;
        CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)&local_120);
        LOCK();
        plVar1 = puVar29 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_120 + -2,false);
        }
        lVar21 = local_168[0];
        uVar30 = local_180;
        pcVar10 = local_188;
        uVar22 = RenderingDevice::get_singleton();
        local_108[0] = 0;
        local_128 = pcVar10;
        local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
        local_118 = local_178;
        if (lVar21 == 0) goto LAB_00110a60;
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_168);
        lVar21 = local_108[0];
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2d0,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,0);
        if (lVar21 != 0) {
          LOCK();
          plVar1 = (long *)(lVar21 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
        }
      }
      else {
LAB_0010ddc2:
        local_180 = 0;
        local_178 = 0;
        local_168[0] = 0;
        if (puVar29 != (undefined8 *)0x0) goto LAB_0010dded;
        local_188 = pcVar32;
        uVar22 = RenderingDevice::get_singleton();
        local_120 = (undefined8 *)((ulong)local_120 & 0xffffffffffffff00);
        local_128 = pcVar32;
LAB_00110a60:
        local_108[0] = 0;
        local_118 = local_178;
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2d0,0,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar23,0);
      }
      if ((*(int *)(this + 0x18) < 1) || (((byte)this[0x24] & 1) != 0)) {
        lVar21 = 0;
        local_120 = (undefined8 *)0x0;
        local_f8[0] = uVar9;
        local_f8[1] = uVar56;
        iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
        puVar29 = local_120;
        if (iVar19 == 0) {
          do {
            if (puVar29 == (undefined8 *)0x0) {
              lVar28 = 0;
LAB_0010ff27:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar21,lVar28,"p_index","size()",""
                         ,false,false);
            }
            else {
              lVar28 = *(long *)((long)puVar29 + -8);
              if (lVar28 <= lVar21) goto LAB_0010ff27;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
              *(ulong *)((long)local_120 + lVar21 * 8) = local_f8[lVar21];
              puVar29 = local_120;
            }
            if (lVar21 != 0) break;
            lVar21 = 1;
          } while( true );
        }
        local_150 = 0;
        local_148 = 0;
        local_138[0] = 0;
        local_158 = _LC76;
        if (puVar29 != (undefined8 *)0x0) {
          CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
          LOCK();
          plVar1 = (long *)((long)puVar29 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_120 + -0x10),false);
          }
        }
        lVar21 = local_138[0];
        uVar30 = local_150;
        pcVar10 = local_158;
        uVar22 = RenderingDevice::get_singleton();
        local_128 = pcVar10;
      }
      else {
        lVar21 = 0;
        local_120 = (undefined8 *)0x0;
        local_f8[0] = uVar9;
        local_f8[1] = auVar53._0_8_;
        iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,2);
        puVar29 = local_120;
        if (iVar19 == 0) {
          do {
            if (puVar29 == (undefined8 *)0x0) {
              lVar28 = 0;
LAB_00110cb4:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar21,lVar28,"p_index","size()",""
                         ,false,false);
            }
            else {
              lVar28 = *(long *)((long)puVar29 + -8);
              if (lVar28 <= lVar21) goto LAB_00110cb4;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
              *(ulong *)((long)local_120 + lVar21 * 8) = local_f8[lVar21];
              puVar29 = local_120;
            }
            if (lVar21 != 0) break;
            lVar21 = 1;
          } while( true );
        }
        local_150 = 0;
        local_148 = 0;
        local_138[0] = 0;
        local_158 = _LC76;
        if (puVar29 != (undefined8 *)0x0) {
          CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
          LOCK();
          plVar1 = (long *)((long)puVar29 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_120 + -0x10),false);
          }
        }
        lVar21 = local_138[0];
        uVar30 = local_150;
        pcVar10 = local_158;
        uVar22 = RenderingDevice::get_singleton();
        local_128 = pcVar10;
      }
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
      local_108[0] = 0;
      local_118 = local_148;
      if (lVar21 == 0) {
        uVar56 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2d0,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar56);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
        lVar28 = local_108[0];
        uVar56 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2d0,1,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar56);
        if (lVar28 != 0) {
          LOCK();
          plVar1 = (long *)(lVar28 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
          }
          lVar21 = local_138[0];
          if (local_138[0] == 0) goto LAB_0010e0ac;
        }
        LOCK();
        plVar1 = (long *)(lVar21 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_138[0] + -0x10),false);
        }
      }
LAB_0010e0ac:
      local_120 = (undefined8 *)0x0;
      iVar19 = CowData<RID>::resize<false>((CowData<RID> *)&local_120,1);
      puVar29 = local_120;
      if (iVar19 == 0) {
        if (local_120 == (undefined8 *)0x0) {
          lVar21 = 0;
LAB_0011089a:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar21,"p_index","size()","",false,
                     false);
          goto LAB_0010e0d5;
        }
        lVar21 = local_120[-1];
        if (lVar21 < 1) goto LAB_0011089a;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_120);
        *local_120 = uVar54;
        puVar29 = local_120;
LAB_0010e100:
        local_138[0] = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = pcVar32;
        CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)&local_120);
        LOCK();
        plVar1 = puVar29 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_120 + -2,false);
        }
      }
      else {
LAB_0010e0d5:
        local_150 = 0;
        local_148 = 0;
        local_138[0] = 0;
        local_158 = pcVar32;
        if (puVar29 != (undefined8 *)0x0) goto LAB_0010e100;
      }
      lVar21 = local_138[0];
      uVar30 = local_150;
      pcVar32 = local_158;
      uVar22 = RenderingDevice::get_singleton();
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,uVar30);
      local_108[0] = 0;
      local_118 = local_148;
      local_128 = pcVar32;
      if (lVar21 == 0) {
        uVar56 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2d0,2,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar56,2);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
        lVar28 = local_108[0];
        uVar56 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar16,local_2d0,2,&local_128);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar26,uVar56,2);
        if (lVar28 != 0) {
          LOCK();
          plVar1 = (long *)(lVar28 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar21 = local_138[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_108[0] + -0x10),false);
            lVar21 = local_138[0];
          }
        }
      }
      lVar28 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar28,pvVar26,iVar18 + 0x768);
      lVar28 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar28,uVar37,(uint)param_8[4],(uint)param_8[5]);
      lVar28 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar28);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      if (lVar21 != 0) {
        LOCK();
        plVar1 = (long *)(lVar21 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_138[0] + -0x10),false);
        }
      }
      if (local_168[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_168[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_168[0] + -0x10),false);
        }
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      local_f8[0] = local_f8[0] & 0xffffffff00000000;
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::buffer_update(uVar22,*(undefined8 *)(this + 0x5c8),0,4,local_f8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00110dfc:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar21 = *(long *)(*(long *)(this + 0x600) + -8);
    if (lVar21 < 1) goto LAB_0011020a;
    pcVar10 = *(char **)(this + 0x610);
    if (pcVar10 == (char *)0x0) goto LAB_0010d4a0;
    lVar28 = *(long *)(pcVar10 + -8);
    if (0 < lVar28) {
      if (*pcVar10 == '\0') {
        pcVar38 = (char *)0x0;
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        goto LAB_0010cb93;
      }
      if ((uVar31 == 0) || (*(uint *)(this + 0x6bc) <= (uint)uVar31)) {
LAB_00110423:
        pcVar38 = (char *)0x0;
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
      }
      else {
        lVar21 = ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x6b8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x6a8) +
                          ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x6b8)) * 8);
        if (*(int *)(lVar21 + 0x98) != (int)(uVar31 >> 0x20)) {
          if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00110423;
        }
        iVar19 = (int)lVar21;
        if (*(char *)(lVar21 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar28 = *(long *)(this + 0x660);
          if (lVar28 != 0) {
            lVar34 = 0;
            do {
              if (*(long *)(lVar28 + -8) <= lVar34) break;
              if (*(char *)(lVar28 + lVar34) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar19);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar19);
              }
              lVar28 = *(long *)(this + 0x660);
              lVar34 = lVar34 + 1;
            } while (lVar28 != 0);
          }
        }
        puVar8 = *(uint **)(this + 0x620);
        if (puVar8 == (uint *)0x0) goto LAB_0010d4a0;
        lVar28 = *(long *)(puVar8 + -2);
        if (lVar28 < 1) goto LAB_0010d4a3;
        uVar31 = (ulong)*puVar8;
        lVar34 = *(long *)(lVar21 + 0x68);
        if (lVar34 == 0) goto LAB_0010ea36;
        lVar28 = *(long *)(lVar34 + -8);
        if (lVar28 <= (long)uVar31) goto LAB_0010d4c0;
        if (*(long *)(lVar34 + uVar31 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar19);
        }
        if (*(char *)(lVar21 + 0x90) != '\0') {
          if (*(long *)(lVar21 + 0x88) == 0) goto LAB_0010d4a0;
          lVar28 = *(long *)(*(long *)(lVar21 + 0x88) + -8);
          if (lVar28 < 1) goto LAB_0010d4a3;
        }
      }
      goto LAB_0010cb93;
    }
  }
LAB_0010d4a3:
  uVar31 = 0;
LAB_0010d4c0:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar31,lVar28,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SSEffects::generate_ssao(Ref<RenderSceneBuffersRD>,
   RendererRD::SSEffects::SSAORenderBuffers&, unsigned int, RID, Projection const&,
   RendererRD::SSEffects::SSAOSettings const&) */

void __thiscall
RendererRD::SSEffects::generate_ssao
          (SSEffects *this,undefined8 *param_2,long param_3,uint param_4,undefined8 param_5,
          float *param_6,float *param_7)

{
  long *plVar1;
  Version *pVVar2;
  uint uVar3;
  SSEffects SVar4;
  char cVar5;
  StringName *pSVar6;
  uint *puVar7;
  char *pcVar8;
  ulong uVar9;
  code *pcVar10;
  float fVar11;
  UniformSetCacheRD *pUVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  void *pvVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  char *pcVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  StringName *pSVar41;
  int iVar42;
  long lVar43;
  long in_FS_OFFSET;
  bool bVar44;
  float fVar45;
  float fVar46;
  float fVar52;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  void *pvVar58;
  undefined1 uVar59;
  undefined8 local_258;
  undefined8 local_228;
  undefined8 local_210;
  undefined8 local_200;
  ulong local_198 [2];
  char *local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 *local_168 [2];
  char *local_158;
  undefined1 local_150;
  ulong local_148;
  Vector<RID> local_140 [8];
  ulong local_138 [2];
  char *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 *local_108 [2];
  char *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  long local_d8 [2];
  char *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  long local_a8 [2];
  ulong local_98 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  pUVar12 = UniformSetCacheRD::singleton;
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar19 = 0x417;
      pcVar34 = "Parameter \"uniform_set_cache\" is null.";
LAB_00114b09:
      _err_print_error("generate_ssao","servers/rendering/renderer_rd/effects/ss_effects.cpp",uVar19
                       ,pcVar34,0,0);
      return;
    }
    goto LAB_00115dff;
  }
  lVar18 = RendererRD::MaterialStorage::get_singleton();
  if (lVar18 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar19 = 0x419;
      pcVar34 = "Parameter \"material_storage\" is null.";
      goto LAB_00114b09;
    }
    goto LAB_00115dff;
  }
  pSVar6 = (StringName *)*param_2;
  uVar26 = (ulong)(param_4 * 4);
  if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
       ::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                    ::{lambda()#2}::operator()()::sname), iVar16 != 0)) {
    _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                  ::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#2}::operator()()::sname);
  }
  pSVar41 = (StringName *)
            &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
             ::{lambda()#1}::operator()()::sname;
  if (generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                  ::{lambda()#1}::operator()()::sname);
    pSVar41 = (StringName *)
              &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
               ::{lambda()#1}::operator()()::sname;
    if (iVar16 != 0) {
      pSVar41 = (StringName *)
                &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                 ::{lambda()#1}::operator()()::sname;
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,pSVar41,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar19 = RenderSceneBuffersRD::get_texture_slice(pSVar6,pSVar41,0x11c028,(uint)uVar26,0,4);
  pSVar6 = (StringName *)*param_2;
  if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
       ::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                    ::{lambda()#4}::operator()()::sname), iVar16 != 0)) {
    _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                  ::{lambda()#4}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#4}::operator()()::sname);
  }
  pSVar41 = (StringName *)
            &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
             ::{lambda()#3}::operator()()::sname;
  if (generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#3}::operator()()::sname == '\0') {
    iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                  ::{lambda()#3}::operator()()::sname);
    pSVar41 = (StringName *)
              &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
               ::{lambda()#3}::operator()()::sname;
    if (iVar16 != 0) {
      pSVar41 = (StringName *)
                &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                 ::{lambda()#3}::operator()()::sname;
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,pSVar41,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#3}::operator()()::sname);
    }
  }
  uVar20 = RenderSceneBuffersRD::get_texture_slice(pSVar6,pSVar41,0x11c008,(uint)uVar26,0,4);
  pSVar6 = (StringName *)*param_2;
  if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
       ::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                    ::{lambda()#6}::operator()()::sname), iVar16 != 0)) {
    _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                  ::{lambda()#6}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#6}::operator()()::sname);
  }
  pSVar41 = (StringName *)
            &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
             ::{lambda()#5}::operator()()::sname;
  if (generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#5}::operator()()::sname == '\0') {
    iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                  ::{lambda()#5}::operator()()::sname);
    pSVar41 = (StringName *)
              &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
               ::{lambda()#5}::operator()()::sname;
    if (iVar16 != 0) {
      pSVar41 = (StringName *)
                &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                 ::{lambda()#5}::operator()()::sname;
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,pSVar41,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#5}::operator()()::sname);
    }
  }
  uVar21 = RenderSceneBuffersRD::get_texture_slice(pSVar6,pSVar41,0x11bfe8,param_4,0,1);
  pSVar6 = (StringName *)*param_2;
  if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
       ::{lambda()#8}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                    ::{lambda()#8}::operator()()::sname), iVar16 != 0)) {
    _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                  ::{lambda()#8}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#8}::operator()()::sname);
  }
  pSVar41 = (StringName *)
            &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
             ::{lambda()#7}::operator()()::sname;
  if (generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#7}::operator()()::sname == '\0') {
    iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                  ::{lambda()#7}::operator()()::sname);
    pSVar41 = (StringName *)
              &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
               ::{lambda()#7}::operator()()::sname;
    if (iVar16 != 0) {
      pSVar41 = (StringName *)
                &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                 ::{lambda()#7}::operator()()::sname;
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,pSVar41,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#7}::operator()()::sname);
    }
  }
  uVar22 = RenderSceneBuffersRD::get_texture_slice(pSVar6,pSVar41,0x11bfc8,param_4,0,1);
  pSVar6 = (StringName *)*param_2;
  if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
       ::{lambda()#10}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                    ::{lambda()#10}::operator()()::sname), iVar16 != 0)) {
    _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#10}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                  ::{lambda()#10}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#10}::operator()()::sname);
  }
  pSVar41 = (StringName *)
            &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
             ::{lambda()#9}::operator()()::sname;
  if (generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
      ::{lambda()#9}::operator()()::sname == '\0') {
    iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                  ::{lambda()#9}::operator()()::sname);
    pSVar41 = (StringName *)
              &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
               ::{lambda()#9}::operator()()::sname;
    if (iVar16 != 0) {
      pSVar41 = (StringName *)
                &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                 ::{lambda()#9}::operator()()::sname;
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#9}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,pSVar41,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#9}::operator()()::sname);
    }
  }
  uVar36 = 0;
  uVar23 = RenderSceneBuffersRD::get_texture_slice(pSVar6,pSVar41,0x11bfa8,param_4,0,1);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    pSVar6 = (StringName *)*param_2;
    uVar3 = (int)uVar26 + uVar36;
    if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
         ::{lambda()#12}::operator()()::sname == '\0') &&
       (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                      ::{lambda()#12}::operator()()::sname), iVar16 != 0)) {
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#12}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#12}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#12}::operator()()::sname);
    }
    if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
         ::{lambda()#11}::operator()()::sname == '\0') &&
       (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                      ::{lambda()#11}::operator()()::sname), iVar16 != 0)) {
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#11}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#11}::operator()()::sname);
    }
    uVar32 = (ulong)uVar36;
    uVar24 = RenderSceneBuffersRD::get_texture_slice
                       (pSVar6,(StringName *)
                               &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                ::{lambda()#11}::operator()()::sname,0x11bf88,uVar3,0,1);
    pSVar6 = (StringName *)*param_2;
    *(undefined8 *)(local_88 + uVar32 * 8) = uVar24;
    if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
         ::{lambda()#14}::operator()()::sname == '\0') &&
       (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                      ::{lambda()#14}::operator()()::sname), iVar16 != 0)) {
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#14}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#14}::operator()()::sname);
    }
    if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
         ::{lambda()#13}::operator()()::sname == '\0') &&
       (iVar16 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                      ::{lambda()#13}::operator()()::sname), iVar16 != 0)) {
      _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                    ::{lambda()#13}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                           ::{lambda()#13}::operator()()::sname);
    }
    uVar36 = uVar36 + 1;
    uVar24 = RenderSceneBuffersRD::get_texture_slice
                       (pSVar6,(StringName *)
                               &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                ::{lambda()#13}::operator()()::sname,0x11bf68,uVar3,0,1);
    *(undefined8 *)(local_68 + uVar32 * 8) = uVar24;
  } while (uVar36 != 4);
  RenderingDevice::get_singleton();
  pVVar2 = (Version *)(this + 0x9d8);
  pvVar25 = (void *)RenderingDevice::compute_list_begin();
  uVar36 = (uint)uVar26;
  *(undefined8 *)(this + 0x958) = 0;
  iVar16 = (int)this;
  *(undefined8 *)(this + 0x9d0) = 0;
  puVar30 = (undefined8 *)((ulong)(this + 0x960) & 0xfffffffffffffff8);
  for (uVar32 = (ulong)((iVar16 - (int)(undefined8 *)((ulong)(this + 0x960) & 0xfffffffffffffff8)) +
                        0x9d8U >> 3); uVar32 != 0; uVar32 = uVar32 - 1) {
    *puVar30 = 0;
    puVar30 = puVar30 + (ulong)bVar13 * -2 + 1;
  }
  uVar32 = *(ulong *)(this + 0xb50);
  if (*(long *)(this + 0x9f0) != 0) {
    lVar27 = *(long *)(*(long *)(this + 0x9f0) + -8);
    if (lVar27 < 1) goto LAB_00114c43;
    pcVar34 = *(char **)(this + 0xa00);
    if (pcVar34 == (char *)0x0) goto LAB_001126a0;
    lVar27 = *(long *)(pcVar34 + -8);
    if (lVar27 < 1) goto LAB_001126a3;
    if (*pcVar34 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00111284;
    }
    if ((uVar32 == 0) || (*(uint *)(this + 0xaac) <= (uint)uVar32)) {
LAB_00112910:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00111284;
    }
    lVar37 = ((uVar32 & 0xffffffff) % (ulong)*(uint *)(this + 0xaa8)) * 0xa0 +
             *(long *)(*(long *)(this + 0xa98) +
                      ((uVar32 & 0xffffffff) / (ulong)*(uint *)(this + 0xaa8)) * 8);
    if (*(int *)(lVar37 + 0x98) != (int)(uVar32 >> 0x20)) {
      if (*(int *)(lVar37 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00112910;
    }
    iVar14 = (int)lVar37;
    if (*(char *)(lVar37 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      uVar36 = (uint)uVar26;
      lVar27 = *(long *)(this + 0xa50);
      if (lVar27 != 0) {
        lVar43 = 0;
        do {
          uVar36 = (uint)uVar26;
          if (*(long *)(lVar27 + -8) <= lVar43) break;
          if (*(char *)(lVar27 + lVar43) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar14);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar14);
          }
          uVar36 = (uint)uVar26;
          lVar27 = *(long *)(this + 0xa50);
          lVar43 = lVar43 + 1;
        } while (lVar27 != 0);
      }
    }
    puVar7 = *(uint **)(this + 0xa10);
    if (puVar7 == (uint *)0x0) goto LAB_001126a0;
    lVar27 = *(long *)(puVar7 + -2);
    if (lVar27 < 1) goto LAB_001126a3;
    uVar26 = (ulong)*puVar7;
    lVar43 = *(long *)(lVar37 + 0x68);
    if (lVar43 != 0) {
      lVar27 = *(long *)(lVar43 + -8);
      if (lVar27 <= (long)uVar26) goto LAB_001126c0;
      if (*(long *)(lVar43 + uVar26 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar14);
      }
      if (*(char *)(lVar37 + 0x90) == '\0') goto LAB_00111284;
      puVar30 = *(undefined8 **)(lVar37 + 0x88);
      if (puVar30 == (undefined8 *)0x0) goto LAB_001126a0;
      lVar27 = puVar30[-1];
      if (lVar27 < 1) goto LAB_001126a3;
      local_210 = *puVar30;
      goto LAB_0011128d;
    }
LAB_00113848:
    lVar27 = 0;
    goto LAB_001126c0;
  }
  lVar27 = 0;
LAB_00114c43:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar27,
             "p_variant","variant_defines.size()","",false,false);
LAB_00111284:
  local_210 = 0;
LAB_0011128d:
  uVar32 = *(ulong *)(lVar18 + 0x50);
  uVar24 = RenderingDevice::get_singleton();
  local_98[0] = CONCAT44(_UNK_00136094,_LC70);
  local_c8 = "Process Screen Space Ambient Occlusion";
  local_98[1] = _UNK_00136098;
  local_f8 = (char *)0x0;
  local_c0 = (undefined8 *)0x26;
  String::parse_latin1((StrRange *)&local_f8);
  RenderingDevice::draw_command_begin_label(uVar24,(StrRange *)&local_f8,local_98);
  pcVar34 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar34 + -0x10),false);
    }
  }
  uVar24 = RenderingDevice::get_singleton();
  local_f8 = (char *)0x0;
  local_98[0] = CONCAT44(_UNK_00136094,_LC70);
  local_c0 = (undefined8 *)0xe;
  local_c8 = "Gather Samples";
  local_98[1] = _UNK_00136098;
  String::parse_latin1((StrRange *)&local_f8);
  RenderingDevice::draw_command_begin_label(uVar24,(StrRange *)&local_f8,local_98);
  pcVar34 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar34 + -0x10),false);
    }
  }
  *(float *)(this + 0x958) = param_7[6];
  fVar45 = param_7[7];
  *(float *)(this + 0x95c) = fVar45;
  auVar53._0_8_ = (double)(int)param_7[6];
  auVar53._8_8_ = (double)(int)fVar45;
  auVar48._8_8_ = _LC95;
  auVar48._0_8_ = _LC95;
  auVar48 = divpd(auVar48,auVar53);
  fVar45 = (float)auVar48._0_8_;
  fVar52 = (float)auVar48._8_8_;
  uVar24 = CONCAT44(fVar52,fVar45);
  *(undefined8 *)(this + 0x968) = uVar24;
  if (this[4] != (SSEffects)0x0) {
    uVar24 = CONCAT44(fVar52 + fVar52,fVar45 + fVar45);
    *(undefined8 *)(this + 0x968) = uVar24;
  }
  fVar45 = _LC87;
  fVar52 = _LC70;
  *(ulong *)(this + 0x990) =
       CONCAT44((float)((ulong)uVar24 >> 0x20) * _UNK_00136054,(float)uVar24 * _LC96);
  fVar52 = fVar52 / param_6[5];
  fVar46 = _LC70 / *param_6;
  dVar47 = (double)((ulong)(double)fVar46 ^ __LC97);
  *(ulong *)(this + 0x978) = CONCAT44(fVar45 * fVar52,fVar46 + fVar46);
  *(ulong *)(this + 0x980) = CONCAT44(fVar52,(float)dVar47);
  bVar13 = Projection::is_orthogonal();
  fVar46 = _LC98;
  *(uint *)(this + 0x9b8) = (uint)bVar13;
  fVar45 = *param_7;
  iVar14 = *(int *)this;
  *(float *)(this + 0x998) = fVar45;
  fVar46 = fVar46 * fVar45;
  if ((iVar14 < 2) && (fVar46 = fVar46 * __LC99, iVar14 == 0)) {
    fVar45 = fVar45 * __LC100;
    *(float *)(this + 0x998) = fVar45;
  }
  fVar11 = _LC102;
  iVar15 = *(int *)(param_3 + 0xc);
  iVar42 = *(int *)(param_3 + 0x10);
  *(float *)(this + 0x99c) = param_7[1];
  fVar57 = param_7[2];
  *(undefined4 *)(this + 0x9a4) = 0x3f7ae148;
  *(float *)(this + 0x9a0) = fVar57;
  fVar57 = *(float *)(this + 0x14) - *(float *)(this + 0x10);
  iVar14 = iVar14 + -1;
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  *(float *)(this + 0x9a8) = fVar11 / fVar57;
  *(float *)(this + 0x9ac) = *(float *)(this + 0x10) / fVar57 + _LC70;
  *(float *)(this + 0x9b0) = param_7[4];
  *(float *)(this + 0x9b4) = _LC70 / (fVar46 / fVar52);
  auVar49._4_4_ = (float)(iVar15 * iVar42 * 0xff);
  auVar49._0_4_ = fVar45;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = _LC115;
  auVar49._12_4_ = _UNK_00136094;
  auVar49._8_4_ = _LC70;
  auVar48 = divps(auVar54,auVar49);
  *(undefined4 *)(this + 0x9c4) = *(undefined4 *)(this + 8);
  *(long *)(this + 0x9bc) = auVar48._0_8_;
  fVar45 = param_7[3];
  pSVar6 = (StringName *)*param_2;
  *(int *)(this + 0x964) = iVar14;
  *(float *)(this + 0x974) = fVar45;
  SVar4 = this[4];
  *(uint *)(this + 0x970) = 2 - (uint)(this[4] == (SSEffects)0x0);
  if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
       ::{lambda()#16}::operator()()::sname == '\0') &&
     (iVar14 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                    ::{lambda()#16}::operator()()::sname), iVar14 != 0)) {
    _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#16}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                  ::{lambda()#16}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#16}::operator()()::sname);
  }
  if ((generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
       ::{lambda()#15}::operator()()::sname == '\0') &&
     (iVar14 = __cxa_guard_acquire(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                                    ::{lambda()#15}::operator()()::sname), iVar14 != 0)) {
    _scs_create((char *)&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#15}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                  ::{lambda()#15}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                         ::{lambda()#15}::operator()()::sname);
  }
  uVar26 = RenderSceneBuffersRD::get_texture_slice
                     (pSVar6,(StringName *)
                             &generate_ssao(Ref<RenderSceneBuffersRD>,RendererRD::SSEffects::SSAORenderBuffers&,unsigned_int,RID,Projection_const&,RendererRD::SSEffects::SSAOSettings_const&)
                              ::{lambda()#15}::operator()()::sname,0x11bf48,uVar36,
                      (uint)(SVar4 != (SSEffects)0x0),4);
  local_148 = *(ulong *)(this + 0x1f0);
  local_150 = 0;
  local_138[0] = 0;
  local_158 = _LC76;
  if (local_148 != 0) {
    Vector<RID>::push_back(local_140);
    Vector<RID>::push_back(local_140,uVar26);
    local_148 = 0;
    uVar26 = local_148;
  }
  local_148 = uVar26;
  local_b8 = *(ulong *)(this + 0x1e8);
  local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
  local_c8 = _LC105;
  local_f8 = _LC51;
  local_a8[0] = 0;
  local_f0 = 0;
  local_d8[0] = 0;
  local_118 = local_148;
  local_108[0] = (undefined8 *)0x0;
  local_128 = local_158;
  local_120 = local_150;
  local_e8 = param_5;
  if (local_138[0] == 0) {
    local_228 = UniformSetCacheRD::
                get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar12,local_210,0,&local_128,(StrRange *)&local_f8,&local_c8);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
    puVar30 = local_108[0];
    local_228 = UniformSetCacheRD::
                get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                          (pUVar12,local_210,0,&local_128,(StrRange *)&local_f8,&local_c8);
    if (puVar30 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = puVar30 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_108[0] + -2,false);
      }
      if (local_d8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_d8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_d8[0] + -0x10),false);
        }
      }
    }
  }
  if (local_a8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_a8[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_a8[0] + -0x10),false);
    }
  }
  if (local_138[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_138[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_138[0] + -0x10),false);
    }
  }
  local_150 = 0;
  local_138[0] = 0;
  local_158 = _LC15;
  local_148 = uVar21;
  if (uVar32 != 0) {
    local_148 = uVar32;
    Vector<RID>::push_back(local_140,uVar32);
    Vector<RID>::push_back(local_140,uVar21);
    local_148 = 0;
  }
  uVar24 = *(undefined8 *)(this + 0xce8);
  uVar26 = *(ulong *)(this + 0xb50);
  if (*(long *)(this + 0x9f0) != 0) {
    lVar18 = *(long *)(*(long *)(this + 0x9f0) + -8);
    if (lVar18 < 3) goto LAB_00114cd3;
    lVar18 = *(long *)(this + 0xa00);
    if (lVar18 != 0) {
      lVar27 = *(long *)(lVar18 + -8);
      if (2 < lVar27) {
        if (*(char *)(lVar18 + 2) == '\0') {
          uVar28 = 0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_00111979;
        }
        if ((uVar26 == 0) || (*(uint *)(this + 0xaac) <= (uint)uVar26)) {
LAB_00114f90:
          uVar28 = 0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
        }
        else {
          lVar18 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(this + 0xaa8)) * 0xa0 +
                   *(long *)(*(long *)(this + 0xa98) +
                            ((uVar26 & 0xffffffff) / (ulong)*(uint *)(this + 0xaa8)) * 8);
          if (*(int *)(lVar18 + 0x98) != (int)(uVar26 >> 0x20)) {
            if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00114f90;
          }
          iVar14 = (int)lVar18;
          if (*(char *)(lVar18 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar2);
            lVar27 = *(long *)(this + 0xa50);
            if (lVar27 != 0) {
              lVar37 = 0;
              do {
                if (*(long *)(lVar27 + -8) <= lVar37) break;
                if (*(char *)(lVar27 + lVar37) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar2,iVar14);
                }
                lVar27 = *(long *)(this + 0xa50);
                lVar37 = lVar37 + 1;
              } while (lVar27 != 0);
            }
          }
          lVar37 = *(long *)(this + 0xa10);
          if (lVar37 == 0) goto LAB_00114a40;
          lVar27 = *(long *)(lVar37 + -8);
          if (lVar27 < 3) goto LAB_00114a43;
          uVar26 = (ulong)*(uint *)(lVar37 + 8);
          lVar37 = *(long *)(lVar18 + 0x68);
          if (lVar37 == 0) goto LAB_00113848;
          lVar27 = *(long *)(lVar37 + -8);
          if (lVar27 <= (long)uVar26) goto LAB_001126c0;
          if (*(long *)(lVar37 + uVar26 * 8) == 0) {
            cVar5 = *(char *)(lVar18 + 0x90);
          }
          else {
            ShaderRD::_compile_version_end(pVVar2,iVar14);
            cVar5 = *(char *)(lVar18 + 0x90);
          }
          if (cVar5 == '\0') {
            uVar28 = 0;
          }
          else {
            lVar18 = *(long *)(lVar18 + 0x88);
            if (lVar18 == 0) goto LAB_00114a40;
            lVar27 = *(long *)(lVar18 + -8);
            if (lVar27 < 3) goto LAB_00114a43;
            uVar28 = *(undefined8 *)(lVar18 + 0x10);
          }
        }
        goto LAB_00111979;
      }
      goto LAB_00114a43;
    }
LAB_00114a40:
    lVar27 = 0;
LAB_00114a43:
    uVar26 = 2;
    goto LAB_001126c0;
  }
  lVar18 = 0;
LAB_00114cd3:
  uVar28 = 0;
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar18,
             "p_variant","variant_defines.size()","",false,false);
LAB_00111979:
  local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
  local_c8 = _LC106;
  local_a8[0] = 0;
  local_f8 = local_158;
  local_d8[0] = 0;
  local_f0 = local_150;
  local_e8 = local_148;
  local_b8 = uVar24;
  if (local_138[0] == 0) {
    local_120 = 0;
    local_108[0] = (undefined8 *)0x0;
    local_128 = _LC38;
    pcVar34 = _LC38;
    local_118 = uVar20;
    uVar24 = UniformSetCacheRD::
             get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                       (pUVar12,uVar28,1,&local_128,(StrRange *)&local_f8,&local_c8,pvVar25,_LC38);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)local_138);
    lVar18 = local_d8[0];
    local_120 = 0;
    local_108[0] = (undefined8 *)0x0;
    local_128 = _LC38;
    pcVar34 = _LC38;
    local_118 = uVar20;
    uVar24 = UniformSetCacheRD::
             get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                       (pUVar12,uVar28,1,&local_128,(StrRange *)&local_f8,&local_c8,pvVar25,_LC38);
    if (lVar18 != 0) {
      LOCK();
      plVar1 = (long *)(lVar18 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_d8[0] + -0x10),false);
      }
      if (local_a8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_a8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_a8[0] + -0x10),false);
        }
      }
    }
  }
  if (local_138[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_138[0] - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_138[0] - 0x10),false);
    }
  }
  if (*(int *)this == 4) {
    uVar28 = RenderingDevice::get_singleton();
    local_f8 = (char *)0x0;
    local_98[0] = CONCAT44(_UNK_00136094,_LC70);
    local_c0 = (undefined8 *)0x17;
    local_c8 = "Generate Importance Map";
    local_98[1] = _UNK_00136098;
    String::parse_latin1((StrRange *)&local_f8);
    RenderingDevice::draw_command_begin_label(uVar28,(StrRange *)&local_f8,local_98);
    pcVar8 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar8 + -0x10,false);
      }
    }
    dVar47 = _LC75;
    *(float *)(this + 0xb58) = (float)(_LC75 / (double)*(int *)(param_3 + 4));
    *(float *)(this + 0xb5c) = (float)(dVar47 / (double)*(int *)(param_3 + 8));
    *(float *)(this + 0xb60) = param_7[1];
    *(float *)(this + 0xb64) = param_7[2];
    uVar28 = RenderingDevice::get_singleton();
    pvVar58 = pvVar25;
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar28,pvVar25,*(undefined8 *)(this + 0x1020));
    gather_ssao(this,pvVar25,local_68,param_7,1,local_228,0);
    pVVar2 = (Version *)(this + 0xb68);
    uVar26 = *(ulong *)(this + 0xce0);
    if (*(long *)(this + 0xb80) == 0) {
      lVar18 = 0;
LAB_00114d19:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar18,
                 "p_variant","variant_defines.size()","",false,false);
LAB_00114d58:
      local_210 = 0;
LAB_00113b72:
      uVar28 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar28,pvVar58,*(undefined8 *)(this + 0x1030));
      local_c0 = (undefined8 *)0x0;
      local_98[0] = uVar32;
      local_98[1] = uVar20;
      iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
      puVar30 = local_c0;
      if (iVar14 == 0) {
        lVar18 = 0;
        do {
          if (puVar30 == (undefined8 *)0x0) {
            lVar27 = 0;
LAB_00114ecf:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar27,"p_index","size()","",
                       false,false);
          }
          else {
            lVar27 = *(long *)((long)puVar30 - 8);
            if (lVar27 <= lVar18) goto LAB_00114ecf;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
            *(ulong *)((long)local_c0 + lVar18 * 8) = local_98[lVar18];
            puVar30 = local_c0;
          }
          if (lVar18 != 0) break;
          lVar18 = 1;
        } while( true );
      }
      pcVar8 = _LC76;
      local_198[0] = 0;
      if (puVar30 == (undefined8 *)0x0) {
        uVar28 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = _LC76;
LAB_00115038:
        local_a8[0] = 0;
        local_b8 = 0;
        uVar29 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_210,0);
        RenderingDevice::compute_list_bind_uniform_set(uVar28,pvVar58,uVar29);
      }
      else {
        plVar1 = (long *)((long)puVar30 - 0x10);
        do {
          lVar18 = *plVar1;
          if (lVar18 == 0) goto LAB_00113c82;
          LOCK();
          lVar27 = *plVar1;
          bVar44 = lVar18 == lVar27;
          if (bVar44) {
            *plVar1 = lVar18 + 1;
            lVar27 = lVar18;
          }
          UNLOCK();
        } while (!bVar44);
        if (lVar27 != -1) {
          local_198[0] = (ulong)local_c0;
        }
LAB_00113c82:
        if (local_c0 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = (long *)((long)local_c0 - 0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_c0 - 0x10),false);
          }
        }
        uVar26 = local_198[0];
        uVar28 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_a8[0] = 0;
        local_c8 = pcVar8;
        local_b8 = 0;
        if (uVar26 == 0) goto LAB_00115038;
        CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_198);
        lVar18 = local_a8[0];
        uVar29 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_210,0);
        RenderingDevice::compute_list_bind_uniform_set(uVar28,pvVar58,uVar29);
        if (lVar18 != 0) {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
      }
      local_c0 = (undefined8 *)0x0;
      iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,1);
      puVar30 = local_c0;
      if (iVar14 == 0) {
        if (local_c0 == (undefined8 *)0x0) {
          lVar18 = 0;
LAB_00114f11:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar18,"p_index","size()","",false,
                     false);
          goto LAB_00113d8f;
        }
        lVar18 = local_c0[-1];
        if (lVar18 < 1) goto LAB_00114f11;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
        *local_c0 = uVar21;
        puVar30 = local_c0;
        local_188 = pcVar34;
LAB_00113dc0:
        local_168[0] = (undefined8 *)0x0;
        local_178 = 0;
        local_180 = 0;
        plVar1 = puVar30 + -2;
        do {
          lVar18 = *plVar1;
          if (lVar18 == 0) goto LAB_00113df1;
          LOCK();
          lVar27 = *plVar1;
          bVar44 = lVar18 == lVar27;
          if (bVar44) {
            *plVar1 = lVar18 + 1;
            lVar27 = lVar18;
          }
          UNLOCK();
        } while (!bVar44);
        if (lVar27 != -1) {
          local_168[0] = local_c0;
        }
LAB_00113df1:
        pcVar34 = local_188;
        if (local_c0 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_c0 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_c0 + -2,false);
          }
        }
        puVar30 = local_168[0];
        uVar59 = local_180;
        pcVar8 = local_188;
        local_200 = RenderingDevice::get_singleton();
        local_c8 = pcVar8;
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
        local_b8 = local_178;
        local_a8[0] = 0;
        if (puVar30 == (undefined8 *)0x0) goto LAB_0011509d;
        CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_168);
        lVar18 = local_a8[0];
        uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar12,local_210,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(local_200,pvVar58,uVar28,1);
        if (lVar18 != 0) {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
      }
      else {
LAB_00113d8f:
        local_180 = 0;
        local_178 = 0;
        local_168[0] = (undefined8 *)0x0;
        local_188 = pcVar34;
        if (puVar30 != (undefined8 *)0x0) goto LAB_00113dc0;
        local_200 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = pcVar34;
LAB_0011509d:
        local_a8[0] = 0;
        local_b8 = local_178;
        uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar12,local_210,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(local_200,pvVar58,uVar28,1);
      }
      lVar18 = RenderingDevice::get_singleton();
      uVar36 = iVar16 + 0xb58;
      pvVar25 = pvVar58;
      RenderingDevice::compute_list_set_push_constant(lVar18,pvVar58,uVar36);
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar18,(uint)pvVar58,*(uint *)(param_3 + 0xc),*(uint *)(param_3 + 0x10));
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar18);
      uVar26 = *(ulong *)(this + 0xce0);
      if (*(long *)(this + 0xb80) == 0) {
        lVar18 = 0;
LAB_001155ff:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar18,
                   "p_variant","variant_defines.size()","",false,false);
LAB_00114029:
        local_200 = 0;
      }
      else {
        lVar18 = *(long *)(*(long *)(this + 0xb80) + -8);
        if (lVar18 < 2) goto LAB_001155ff;
        lVar18 = *(long *)(this + 0xb90);
        if (lVar18 == 0) {
LAB_0011548f:
          lVar27 = 0;
LAB_00115492:
          uVar26 = 1;
          goto LAB_001126c0;
        }
        lVar27 = *(long *)(lVar18 + -8);
        if (lVar27 < 2) goto LAB_00115492;
        if (*(char *)(lVar18 + 1) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_00114029;
        }
        if ((uVar26 == 0) || (*(uint *)(this + 0xc3c) <= (uint)uVar26)) {
LAB_00115755:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_00114029;
        }
        lVar18 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(this + 0xc38)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xc28) +
                          ((uVar26 & 0xffffffff) / (ulong)*(uint *)(this + 0xc38)) * 8);
        if (*(int *)(lVar18 + 0x98) != (int)(uVar26 >> 0x20)) {
          if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00115755;
        }
        iVar14 = (int)lVar18;
        if (*(char *)(lVar18 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar27 = *(long *)(this + 0xbe0);
          if (lVar27 != 0) {
            lVar37 = 0;
            do {
              if (*(long *)(lVar27 + -8) <= lVar37) break;
              if (*(char *)(lVar27 + lVar37) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar14);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar14);
              }
              lVar27 = *(long *)(this + 0xbe0);
              lVar37 = lVar37 + 1;
            } while (lVar27 != 0);
          }
        }
        lVar37 = *(long *)(this + 0xba0);
        if (lVar37 == 0) goto LAB_0011548f;
        lVar27 = *(long *)(lVar37 + -8);
        if (lVar27 < 2) goto LAB_00115492;
        uVar26 = (ulong)*(uint *)(lVar37 + 4);
        lVar37 = *(long *)(lVar18 + 0x68);
        if (lVar37 == 0) goto LAB_00113848;
        lVar27 = *(long *)(lVar37 + -8);
        if (lVar27 <= (long)uVar26) goto LAB_001126c0;
        if (*(long *)(lVar37 + uVar26 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar14);
        }
        if (*(char *)(lVar18 + 0x90) == '\0') goto LAB_00114029;
        lVar18 = *(long *)(lVar18 + 0x88);
        if (lVar18 == 0) goto LAB_0011548f;
        lVar27 = *(long *)(lVar18 + -8);
        if (lVar27 < 2) goto LAB_00115492;
        local_200 = *(undefined8 *)(lVar18 + 8);
      }
      uVar28 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar28,pvVar25,*(undefined8 *)(this + 0x1038));
      local_c0 = (undefined8 *)0x0;
      local_98[0] = uVar32;
      local_98[1] = uVar21;
      iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
      puVar30 = local_c0;
      if (iVar14 == 0) {
        lVar18 = 0;
        do {
          if (puVar30 == (undefined8 *)0x0) {
            lVar27 = 0;
LAB_001150d4:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar27,"p_index","size()","",
                       false,false);
          }
          else {
            lVar27 = *(long *)((long)puVar30 - 8);
            if (lVar27 <= lVar18) goto LAB_001150d4;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
            *(ulong *)((long)local_c0 + lVar18 * 8) = local_98[lVar18];
            puVar30 = local_c0;
          }
          if (lVar18 != 0) break;
          lVar18 = 1;
        } while( true );
      }
      local_150 = 0;
      local_148 = 0;
      local_138[0] = 0;
      local_158 = _LC76;
      if (puVar30 == (undefined8 *)0x0) {
        uVar21 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = _LC76;
LAB_001152ac:
        local_a8[0] = 0;
        local_b8 = local_148;
        uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_200,0);
        RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar25,uVar28);
      }
      else {
        plVar1 = (long *)((long)puVar30 - 0x10);
        do {
          lVar18 = *plVar1;
          if (lVar18 == 0) goto LAB_0011413a;
          LOCK();
          lVar27 = *plVar1;
          bVar44 = lVar18 == lVar27;
          if (bVar44) {
            *plVar1 = lVar18 + 1;
            lVar27 = lVar18;
          }
          UNLOCK();
        } while (!bVar44);
        if (lVar27 != -1) {
          local_138[0] = (ulong)local_c0;
        }
LAB_0011413a:
        if (local_c0 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = (long *)((long)local_c0 - 0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_c0 - 0x10),false);
          }
        }
        uVar26 = local_138[0];
        uVar59 = local_150;
        pcVar8 = local_158;
        uVar21 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
        local_a8[0] = 0;
        local_c8 = pcVar8;
        local_b8 = local_148;
        if (uVar26 == 0) goto LAB_001152ac;
        CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_138);
        lVar18 = local_a8[0];
        uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_200,0);
        RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar25,uVar28);
        if (lVar18 != 0) {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
      }
      local_c0 = (undefined8 *)0x0;
      iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,1);
      puVar30 = local_c0;
      if (iVar14 == 0) {
        if (local_c0 == (undefined8 *)0x0) {
          lVar18 = 0;
LAB_00115116:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar18,"p_index","size()","",false,
                     false);
          goto LAB_00114247;
        }
        lVar18 = local_c0[-1];
        if (lVar18 < 1) goto LAB_00115116;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
        *local_c0 = uVar22;
        puVar30 = local_c0;
        local_128 = pcVar34;
LAB_00114280:
        local_108[0] = (undefined8 *)0x0;
        local_118 = 0;
        local_120 = 0;
        plVar1 = puVar30 + -2;
        do {
          lVar18 = *plVar1;
          if (lVar18 == 0) goto LAB_001142b1;
          LOCK();
          lVar27 = *plVar1;
          bVar44 = lVar18 == lVar27;
          if (bVar44) {
            *plVar1 = lVar18 + 1;
            lVar27 = lVar18;
          }
          UNLOCK();
        } while (!bVar44);
        if (lVar27 != -1) {
          local_108[0] = local_c0;
        }
LAB_001142b1:
        pcVar34 = local_128;
        if (local_c0 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_c0 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_c0 + -2,false);
          }
        }
        puVar30 = local_108[0];
        uVar59 = local_120;
        pcVar8 = local_128;
        local_258 = RenderingDevice::get_singleton();
        local_c8 = pcVar8;
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
        local_b8 = local_118;
        local_a8[0] = 0;
        if (puVar30 == (undefined8 *)0x0) goto LAB_00115311;
        CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_108);
        lVar18 = local_a8[0];
        uVar21 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar12,local_200,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(local_258,pvVar25,uVar21,1);
        if (lVar18 != 0) {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
      }
      else {
LAB_00114247:
        local_120 = 0;
        local_118 = 0;
        local_108[0] = (undefined8 *)0x0;
        local_128 = pcVar34;
        if (puVar30 != (undefined8 *)0x0) goto LAB_00114280;
        local_258 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = pcVar34;
LAB_00115311:
        local_a8[0] = 0;
        local_b8 = local_118;
        uVar21 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar12,local_200,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(local_258,pvVar25,uVar21,1);
      }
      lVar18 = RenderingDevice::get_singleton();
      pvVar58 = pvVar25;
      RenderingDevice::compute_list_set_push_constant(lVar18,pvVar25,uVar36);
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar18,(uint)pvVar25,*(uint *)(param_3 + 0xc),*(uint *)(param_3 + 0x10));
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar18);
      uVar26 = *(ulong *)(this + 0xce0);
      if (*(long *)(this + 0xb80) == 0) {
        lVar18 = 0;
LAB_001156d4:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar18,
                   "p_variant","variant_defines.size()","",false,false);
LAB_001144df:
        uVar21 = 0;
      }
      else {
        lVar18 = *(long *)(*(long *)(this + 0xb80) + -8);
        if (lVar18 < 3) goto LAB_001156d4;
        lVar18 = *(long *)(this + 0xb90);
        if (lVar18 == 0) goto LAB_00114a40;
        lVar27 = *(long *)(lVar18 + -8);
        if (lVar27 < 3) goto LAB_00114a43;
        if (*(char *)(lVar18 + 2) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_001144df;
        }
        if ((uVar26 == 0) || (*(uint *)(this + 0xc3c) <= (uint)uVar26)) {
LAB_001157ea:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_001144df;
        }
        lVar18 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(this + 0xc38)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xc28) +
                          ((uVar26 & 0xffffffff) / (ulong)*(uint *)(this + 0xc38)) * 8);
        if (*(int *)(lVar18 + 0x98) != (int)(uVar26 >> 0x20)) {
          if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001157ea;
        }
        iVar14 = (int)lVar18;
        if (*(char *)(lVar18 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar27 = *(long *)(this + 0xbe0);
          if (lVar27 != 0) {
            lVar37 = 0;
            do {
              if (*(long *)(lVar27 + -8) <= lVar37) break;
              if (*(char *)(lVar27 + lVar37) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar14);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar14);
              }
              lVar27 = *(long *)(this + 0xbe0);
              lVar37 = lVar37 + 1;
            } while (lVar27 != 0);
          }
        }
        lVar37 = *(long *)(this + 0xba0);
        if (lVar37 == 0) goto LAB_00114a40;
        lVar27 = *(long *)(lVar37 + -8);
        if (lVar27 < 3) goto LAB_00114a43;
        uVar26 = (ulong)*(uint *)(lVar37 + 8);
        lVar37 = *(long *)(lVar18 + 0x68);
        if (lVar37 == 0) goto LAB_00113848;
        lVar27 = *(long *)(lVar37 + -8);
        if (lVar27 <= (long)uVar26) goto LAB_001126c0;
        if (*(long *)(lVar37 + uVar26 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar14);
        }
        if (*(char *)(lVar18 + 0x90) == '\0') goto LAB_001144df;
        lVar18 = *(long *)(lVar18 + 0x88);
        if (lVar18 == 0) goto LAB_00114a40;
        lVar27 = *(long *)(lVar18 + -8);
        if (lVar27 < 3) goto LAB_00114a43;
        uVar21 = *(undefined8 *)(lVar18 + 0x10);
      }
      uVar28 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar28,pvVar58,*(undefined8 *)(this + 0x1040));
      local_c0 = (undefined8 *)0x0;
      local_98[0] = uVar32;
      local_98[1] = uVar22;
      iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
      puVar30 = local_c0;
      if (iVar14 == 0) {
        lVar18 = 0;
        do {
          if (puVar30 == (undefined8 *)0x0) {
            lVar27 = 0;
LAB_0011535a:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar27,"p_index","size()","",
                       false,false);
          }
          else {
            lVar27 = *(long *)((long)puVar30 - 8);
            if (lVar27 <= lVar18) goto LAB_0011535a;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
            *(ulong *)((long)local_c0 + lVar18 * 8) = local_98[lVar18];
            puVar30 = local_c0;
          }
          if (lVar18 != 0) break;
          lVar18 = 1;
        } while( true );
      }
      local_f0 = 0;
      local_e8 = 0;
      local_d8[0] = 0;
      local_f8 = _LC76;
      if (puVar30 == (undefined8 *)0x0) {
        uVar22 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = _LC76;
LAB_001154f2:
        local_a8[0] = 0;
        local_b8 = local_e8;
        uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,0,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar58,uVar28,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)&local_c0);
        LOCK();
        plVar1 = (long *)((long)puVar30 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)((long)local_c0 - 0x10),false);
        }
        lVar18 = local_d8[0];
        uVar59 = local_f0;
        pcVar8 = local_f8;
        uVar22 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
        local_a8[0] = 0;
        local_c8 = pcVar8;
        local_b8 = local_e8;
        if (lVar18 == 0) goto LAB_001154f2;
        CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_d8);
        lVar18 = local_a8[0];
        uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,0,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar58,uVar28,0);
        if (lVar18 != 0) {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
      }
      uVar22 = RenderingDevice::get_singleton();
      local_a8[0] = 0;
      local_c8 = local_188;
      local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,local_180);
      local_b8 = local_178;
      if (local_168[0] == (undefined8 *)0x0) {
        uVar21 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar58,uVar21,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_168);
        lVar18 = local_a8[0];
        uVar21 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar58,uVar21,1);
        if (lVar18 != 0) {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
      }
      uVar21 = RenderingDevice::get_singleton();
      pvVar25 = pvVar58;
      RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar58,*(undefined8 *)(this + 0xcf0),2)
      ;
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar18,pvVar58,uVar36);
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar18,(uint)pvVar58,*(uint *)(param_3 + 0xc),*(uint *)(param_3 + 0x10));
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar18);
      uVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar21,pvVar58,*(undefined8 *)(this + 0x1028));
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      if (local_d8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_d8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_d8[0] + -0x10),false);
        }
      }
      if (local_108[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_108[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_108[0] + -2,false);
        }
      }
      if (local_138[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_138[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_138[0] - 0x10),false);
        }
      }
      if (local_168[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_168[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_168[0] + -2,false);
        }
      }
      if (local_198[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_198[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_198[0] - 0x10),false);
        }
      }
      goto LAB_00111af5;
    }
    lVar18 = *(long *)(*(long *)(this + 0xb80) + -8);
    if (lVar18 < 1) goto LAB_00114d19;
    pcVar8 = *(char **)(this + 0xb90);
    if (pcVar8 != (char *)0x0) {
      lVar27 = *(long *)(pcVar8 + -8);
      if (0 < lVar27) {
        if (*pcVar8 == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_00114d58;
        }
        if ((uVar26 == 0) || (*(uint *)(this + 0xc3c) <= (uint)uVar26)) {
LAB_0011567d:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_00114d58;
        }
        lVar18 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(this + 0xc38)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xc28) +
                          ((uVar26 & 0xffffffff) / (ulong)*(uint *)(this + 0xc38)) * 8);
        if (*(int *)(lVar18 + 0x98) != (int)(uVar26 >> 0x20)) {
          if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011567d;
        }
        iVar14 = (int)lVar18;
        if (*(char *)(lVar18 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar27 = *(long *)(this + 0xbe0);
          if (lVar27 != 0) {
            lVar37 = 0;
            do {
              if (*(long *)(lVar27 + -8) <= lVar37) break;
              if (*(char *)(lVar27 + lVar37) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar14);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar14);
              }
              lVar27 = *(long *)(this + 0xbe0);
              lVar37 = lVar37 + 1;
            } while (lVar27 != 0);
          }
        }
        puVar7 = *(uint **)(this + 0xba0);
        if (puVar7 == (uint *)0x0) goto LAB_001126a0;
        lVar27 = *(long *)(puVar7 + -2);
        if (lVar27 < 1) goto LAB_001126a3;
        uVar26 = (ulong)*puVar7;
        lVar37 = *(long *)(lVar18 + 0x68);
        if (lVar37 == 0) goto LAB_00113848;
        lVar27 = *(long *)(lVar37 + -8);
        if (lVar27 <= (long)uVar26) goto LAB_001126c0;
        if (*(long *)(lVar37 + uVar26 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar14);
        }
        if (*(char *)(lVar18 + 0x90) == '\0') goto LAB_00114d58;
        puVar30 = *(undefined8 **)(lVar18 + 0x88);
        if (puVar30 == (undefined8 *)0x0) goto LAB_001126a0;
        lVar27 = puVar30[-1];
        if (lVar27 < 1) goto LAB_001126a3;
        local_210 = *puVar30;
        goto LAB_00113b72;
      }
      goto LAB_001126a3;
    }
LAB_001126a0:
    lVar27 = 0;
  }
  else {
    uVar21 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar21,pvVar25,*(undefined8 *)(this + 0x1018));
LAB_00111af5:
    gather_ssao(this,pvVar25,local_88,param_7,0,local_228,uVar24);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    uVar21 = RenderingDevice::get_singleton();
    local_f8 = (char *)0x0;
    local_98[0] = CONCAT44(_UNK_00136094,_LC70);
    local_c0 = (undefined8 *)0xf;
    local_c8 = "Edge Aware Blur";
    local_98[1] = _UNK_00136098;
    String::parse_latin1((StrRange *)&local_f8);
    RenderingDevice::draw_command_begin_label(uVar21,(StrRange *)&local_f8,local_98);
    pcVar8 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar8 + -0x10,false);
      }
    }
    dVar47 = _LC75;
    uVar36 = 1;
    uVar21 = *(undefined8 *)(param_3 + 4);
    *(float *)(this + 0xcf8) = _LC70 - param_7[5];
    auVar50._8_8_ = dVar47;
    auVar50._0_8_ = dVar47;
    auVar55._0_8_ = (double)(int)uVar21;
    auVar55._8_8_ = (double)(int)((ulong)uVar21 >> 0x20);
    auVar48 = divpd(auVar50,auVar55);
    *(ulong *)(this + 0xd00) = CONCAT44((float)auVar48._8_8_,(float)auVar48._0_8_);
    if (0 < *(int *)this) {
      uVar36 = *(uint *)(this + 0xc);
    }
    pVVar2 = (Version *)(this + 0xd08);
    uVar26 = *(ulong *)(this + 0xe80);
    if (*(long *)(this + 0xd20) == 0) {
      lVar18 = 0;
LAB_00114fbf:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar18,
                 "p_variant","variant_defines.size()","",false,false);
LAB_00111d42:
      uVar39 = 0;
      iVar14 = uVar36 - 2;
      if (0 < (int)uVar36) {
LAB_00111d62:
        iVar15 = *(int *)this;
        iVar42 = (int)uVar39;
        if (iVar15 < 1) {
          lVar18 = 0;
          lVar37 = 0;
          iVar31 = 0;
          iVar35 = 6;
        }
        else {
          lVar18 = (ulong)(iVar42 < iVar14) * 4 + 4;
          lVar37 = (ulong)(iVar42 < iVar14) + 1;
          iVar31 = (iVar42 < iVar14) + 1;
          iVar35 = (iVar42 < iVar14) + 7;
        }
        uVar33 = (ulong)iVar31;
        lVar43 = 0;
        do {
          if (iVar15 == 0) {
            for (; (int)lVar43 - 1U < 2; lVar43 = lVar43 + 1) {
            }
          }
          uVar9 = *(ulong *)(this + 0xe80);
          if (*(long *)(this + 0xd20) == 0) {
            lVar27 = 0;
LAB_00114a73:
            _err_print_index_error
                      ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,
                       uVar33,lVar27,"p_variant","variant_defines.size()","",false,false);
LAB_00111edd:
            local_228 = 0;
          }
          else {
            lVar27 = *(long *)(*(long *)(this + 0xd20) + -8);
            if (lVar27 <= (long)uVar33) goto LAB_00114a73;
            lVar38 = *(long *)(this + 0xd30);
            uVar26 = uVar33;
            if (lVar38 == 0) goto LAB_00113808;
            lVar27 = *(long *)(lVar38 + -8);
            if (lVar27 <= (long)uVar33) goto LAB_001126c0;
            if (*(char *)(lVar38 + lVar37) == '\0') {
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                              );
              goto LAB_00111edd;
            }
            if ((uVar9 == 0) || (*(uint *)(this + 0xddc) <= (uint)uVar9)) {
LAB_00114ba0:
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.");
              goto LAB_00111edd;
            }
            lVar38 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0xdd8)) * 0xa0 +
                     *(long *)(*(long *)(this + 0xdc8) +
                              ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0xdd8)) * 8);
            if (*(int *)(lVar38 + 0x98) != (int)(uVar9 >> 0x20)) {
              if (*(int *)(lVar38 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00114ba0;
            }
            iVar15 = (int)lVar38;
            if (*(char *)(lVar38 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar27 = *(long *)(this + 0xd80);
              if (lVar27 != 0) {
                lVar40 = 0;
                do {
                  if (*(long *)(lVar27 + -8) <= lVar40) break;
                  if (*(char *)(lVar27 + lVar40) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar15);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar15);
                  }
                  lVar27 = *(long *)(this + 0xd80);
                  lVar40 = lVar40 + 1;
                } while (lVar27 != 0);
              }
            }
            lVar40 = *(long *)(this + 0xd40);
            if (lVar40 == 0) {
LAB_00113808:
              lVar27 = 0;
              uVar26 = uVar33;
              goto LAB_001126c0;
            }
            lVar27 = *(long *)(lVar40 + -8);
            if (lVar27 <= (long)uVar33) goto LAB_001126c0;
            uVar26 = (ulong)*(uint *)(lVar40 + lVar18);
            lVar40 = *(long *)(lVar38 + 0x68);
            if (lVar40 == 0) goto LAB_00113848;
            lVar27 = *(long *)(lVar40 + -8);
            if (lVar27 <= (long)uVar26) goto LAB_001126c0;
            if (*(long *)(lVar40 + uVar26 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar15);
            }
            if (*(char *)(lVar38 + 0x90) == '\0') goto LAB_00111edd;
            lVar38 = *(long *)(lVar38 + 0x88);
            if (lVar38 == 0) goto LAB_00113808;
            lVar27 = *(long *)(lVar38 + -8);
            uVar26 = uVar33;
            if (lVar27 <= (long)uVar33) goto LAB_001126c0;
            local_228 = *(undefined8 *)(lVar38 + lVar37 * 8);
          }
          uVar21 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar21,pvVar25,*(undefined8 *)(this + (long)iVar35 * 8 + 0x1018));
          if ((uVar39 & 1) == 0) {
            if (*(int *)this == 0) {
              lVar27 = 0;
              local_c0 = (undefined8 *)0x0;
              local_98[1] = *(ulong *)(local_88 + lVar43 * 8);
              local_98[0] = uVar32;
              iVar15 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
              puVar30 = local_c0;
              if (iVar15 == 0) {
                do {
                  if (puVar30 == (undefined8 *)0x0) {
                    lVar38 = 0;
LAB_0011288f:
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar38,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    lVar38 = *(long *)((long)puVar30 + -8);
                    if (lVar38 <= lVar27) goto LAB_0011288f;
                    CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
                    *(ulong *)((long)local_c0 + lVar27 * 8) = local_98[lVar27];
                    puVar30 = local_c0;
                  }
                  if (lVar27 != 0) break;
                  lVar27 = 1;
                } while( true );
              }
            }
            else {
              local_98[0] = *(ulong *)(this + 0x1f0);
              lVar27 = 0;
              local_c0 = (undefined8 *)0x0;
              local_98[1] = *(ulong *)(local_88 + lVar43 * 8);
              iVar15 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
              puVar30 = local_c0;
              if (iVar15 == 0) {
                do {
                  if (puVar30 == (undefined8 *)0x0) {
                    lVar38 = 0;
LAB_001136f7:
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar38,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    lVar38 = *(long *)((long)puVar30 + -8);
                    if (lVar38 <= lVar27) goto LAB_001136f7;
                    CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
                    *(ulong *)((long)local_c0 + lVar27 * 8) = local_98[lVar27];
                    puVar30 = local_c0;
                  }
                  if (lVar27 != 0) break;
                  lVar27 = 1;
                } while( true );
              }
            }
            local_f0 = 0;
            local_e8 = 0;
            local_d8[0] = 0;
            local_f8 = _LC76;
            if (puVar30 != (undefined8 *)0x0) {
              CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)&local_c0);
              LOCK();
              plVar1 = (long *)((long)puVar30 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)((long)local_c0 + -0x10),false);
              }
            }
            lVar27 = local_d8[0];
            uVar59 = local_f0;
            pcVar8 = local_f8;
            uVar21 = RenderingDevice::get_singleton();
            local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
            local_c8 = pcVar8;
            local_b8 = local_e8;
            local_a8[0] = 0;
            if (lVar27 == 0) {
              uVar22 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_228,0);
              RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar25,uVar22);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_d8);
              lVar38 = local_a8[0];
              uVar22 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_228,0);
              RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar25,uVar22);
              if (lVar38 != 0) {
                LOCK();
                plVar1 = (long *)(lVar38 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_a8[0] + -0x10),false);
                }
                lVar27 = local_d8[0];
                if (local_d8[0] == 0) goto LAB_001120cc;
              }
              LOCK();
              plVar1 = (long *)(lVar27 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_d8[0] + -0x10),false);
              }
            }
LAB_001120cc:
            uVar21 = *(undefined8 *)(local_68 + lVar43 * 8);
          }
          else {
            if (*(int *)this == 0) {
              lVar27 = 0;
              local_c0 = (undefined8 *)0x0;
              local_98[0] = uVar32;
              local_98[1] = *(ulong *)(local_68 + lVar43 * 8);
              iVar15 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
              puVar30 = local_c0;
              if (iVar15 == 0) {
                do {
                  if (puVar30 == (undefined8 *)0x0) {
                    lVar38 = 0;
LAB_00112d17:
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar38,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    lVar38 = *(long *)((long)puVar30 + -8);
                    if (lVar38 <= lVar27) goto LAB_00112d17;
                    CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
                    *(ulong *)((long)local_c0 + lVar27 * 8) = local_98[lVar27];
                    puVar30 = local_c0;
                  }
                  if (lVar27 != 0) break;
                  lVar27 = 1;
                } while( true );
              }
            }
            else {
              lVar27 = 0;
              local_c0 = (undefined8 *)0x0;
              local_98[0] = *(ulong *)(this + 0x1f0);
              local_98[1] = *(ulong *)(local_68 + lVar43 * 8);
              iVar15 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
              puVar30 = local_c0;
              if (iVar15 == 0) {
                do {
                  if (puVar30 == (undefined8 *)0x0) {
                    lVar38 = 0;
LAB_001137c7:
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar38,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    lVar38 = *(long *)((long)puVar30 + -8);
                    if (lVar38 <= lVar27) goto LAB_001137c7;
                    CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
                    *(ulong *)((long)local_c0 + lVar27 * 8) = local_98[lVar27];
                    puVar30 = local_c0;
                  }
                  if (lVar27 != 0) break;
                  lVar27 = 1;
                } while( true );
              }
            }
            local_f0 = 0;
            local_e8 = 0;
            local_d8[0] = 0;
            local_f8 = _LC76;
            if (puVar30 != (undefined8 *)0x0) {
              CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)&local_c0);
              LOCK();
              plVar1 = (long *)((long)puVar30 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)((long)local_c0 + -0x10),false);
              }
            }
            lVar27 = local_d8[0];
            uVar59 = local_f0;
            pcVar8 = local_f8;
            uVar21 = RenderingDevice::get_singleton();
            local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
            local_c8 = pcVar8;
            local_b8 = local_e8;
            local_a8[0] = 0;
            if (lVar27 == 0) {
              uVar22 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_228,0);
              RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar25,uVar22);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_d8);
              lVar38 = local_a8[0];
              uVar22 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,local_228,0);
              RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar25,uVar22);
              if (lVar38 != 0) {
                LOCK();
                plVar1 = (long *)(lVar38 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_a8[0] + -0x10),false);
                }
                lVar27 = local_d8[0];
                if (local_d8[0] == 0) goto LAB_00112cc9;
              }
              LOCK();
              plVar1 = (long *)(lVar27 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_d8[0] + -0x10),false);
              }
            }
LAB_00112cc9:
            uVar21 = *(undefined8 *)(local_88 + lVar43 * 8);
          }
          local_c0 = (undefined8 *)0x0;
          iVar15 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,1);
          puVar30 = local_c0;
          if (iVar15 == 0) {
            if (local_c0 == (undefined8 *)0x0) {
              lVar27 = 0;
LAB_00112d5b:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,lVar27,"p_index","size()","",
                         false,false);
              goto LAB_001120fd;
            }
            lVar27 = local_c0[-1];
            if (lVar27 < 1) goto LAB_00112d5b;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
            *local_c0 = uVar21;
            puVar30 = local_c0;
LAB_00112996:
            local_d8[0] = 0;
            local_e8 = 0;
            local_f0 = 0;
            local_f8 = pcVar34;
            CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)&local_c0);
            LOCK();
            plVar1 = puVar30 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pvVar58 = pvVar25;
            if (*plVar1 == 0) {
              Memory::free_static(local_c0 + -2,false);
              pvVar58 = pvVar25;
            }
          }
          else {
LAB_001120fd:
            local_f0 = 0;
            local_e8 = 0;
            local_d8[0] = 0;
            pvVar58 = pvVar25;
            local_f8 = pcVar34;
            if (puVar30 != (undefined8 *)0x0) goto LAB_00112996;
          }
          lVar27 = local_d8[0];
          uVar59 = local_f0;
          pcVar8 = local_f8;
          uVar21 = RenderingDevice::get_singleton();
          local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
          local_b8 = local_e8;
          local_a8[0] = 0;
          local_c8 = pcVar8;
          if (lVar27 == 0) {
            uVar22 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar12,local_228,1,&local_c8);
            RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar58,uVar22,1);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_d8);
            lVar38 = local_a8[0];
            uVar22 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar12,local_228,1,&local_c8);
            RenderingDevice::compute_list_bind_uniform_set(uVar21,pvVar58,uVar22,1);
            if (lVar38 != 0) {
              LOCK();
              plVar1 = (long *)(lVar38 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_a8[0] + -0x10),false);
              }
              lVar27 = local_d8[0];
              if (local_d8[0] == 0) goto LAB_00112ab2;
            }
            LOCK();
            plVar1 = (long *)(lVar27 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_d8[0] + -0x10),false);
            }
          }
LAB_00112ab2:
          lVar27 = RenderingDevice::get_singleton();
          lVar43 = lVar43 + 1;
          pvVar25 = pvVar58;
          RenderingDevice::compute_list_set_push_constant(lVar27,pvVar58,iVar16 + 0xcf8);
          lVar27 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_dispatch_threads
                    (lVar27,(uint)pvVar58,*(uint *)(param_3 + 4),*(uint *)(param_3 + 8));
          if (lVar43 == 4) goto LAB_00112da0;
          iVar15 = *(int *)this;
        } while( true );
      }
LAB_00112dd2:
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      uVar21 = RenderingDevice::get_singleton();
      local_f8 = (char *)0x0;
      local_98[0] = CONCAT44(_UNK_00136094,_LC70);
      local_c0 = (undefined8 *)0x12;
      local_c8 = "Interleave Buffers";
      local_98[1] = _UNK_00136098;
      String::parse_latin1((StrRange *)&local_f8);
      RenderingDevice::draw_command_begin_label(uVar21,(StrRange *)&local_f8,local_98);
      pcVar8 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_f8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static(pcVar8 + -0x10,false);
        }
      }
      dVar47 = _LC75;
      pVVar2 = (Version *)(this + 0xe98);
      uVar26 = *(ulong *)(this + 0x1010);
      uVar17 = 2;
      if (this[4] != (SSEffects)0x0) {
        uVar17 = 4;
      }
      auVar56._0_8_ = (double)(int)*(undefined8 *)(param_7 + 6);
      auVar56._8_8_ = (double)(int)((ulong)*(undefined8 *)(param_7 + 6) >> 0x20);
      *(float *)(this + 0xe88) = _LC70 - param_7[5];
      *(undefined4 *)(this + 0xe8c) = uVar17;
      auVar51._8_8_ = dVar47;
      auVar51._0_8_ = dVar47;
      auVar48 = divpd(auVar51,auVar56);
      *(ulong *)(this + 0xe90) = CONCAT44((float)auVar48._8_8_,(float)auVar48._0_8_);
      if (*(long *)(this + 0xeb0) == 0) {
        lVar18 = 0;
LAB_00115c51:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar18,
                   "p_variant","variant_defines.size()","",false,false);
      }
      else {
        lVar18 = *(long *)(*(long *)(this + 0xeb0) + -8);
        if (lVar18 < 1) goto LAB_00115c51;
        pcVar8 = *(char **)(this + 0xec0);
        if (pcVar8 == (char *)0x0) goto LAB_001126a0;
        lVar27 = *(long *)(pcVar8 + -8);
        if (lVar27 < 1) goto LAB_001126a3;
        if (*pcVar8 == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_00112fe3;
        }
        if ((uVar26 == 0) || (*(uint *)(this + 0xf6c) <= (uint)uVar26)) {
LAB_00115cf5:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
        }
        else {
          lVar18 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(this + 0xf68)) * 0xa0 +
                   *(long *)(*(long *)(this + 0xf58) +
                            ((uVar26 & 0xffffffff) / (ulong)*(uint *)(this + 0xf68)) * 8);
          if (*(int *)(lVar18 + 0x98) != (int)(uVar26 >> 0x20)) {
            if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,uVar39);
            }
            goto LAB_00115cf5;
          }
          iVar14 = (int)lVar18;
          if (*(char *)(lVar18 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar2);
            lVar27 = *(long *)(this + 0xf10);
            if (lVar27 != 0) {
              lVar37 = 0;
              do {
                if (*(long *)(lVar27 + -8) <= lVar37) break;
                if (*(char *)(lVar27 + lVar37) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar2,iVar14);
                }
                lVar27 = *(long *)(this + 0xf10);
                lVar37 = lVar37 + 1;
              } while (lVar27 != 0);
            }
          }
          puVar7 = *(uint **)(this + 0xed0);
          if (puVar7 == (uint *)0x0) goto LAB_001126a0;
          lVar27 = *(long *)(puVar7 + -2);
          if (lVar27 < 1) goto LAB_001126a3;
          uVar26 = (ulong)*puVar7;
          lVar37 = *(long *)(lVar18 + 0x68);
          if (lVar37 == 0) goto LAB_00113848;
          lVar27 = *(long *)(lVar37 + -8);
          if (lVar27 <= (long)uVar26) goto LAB_001126c0;
          if (*(long *)(lVar37 + uVar26 * 8) != 0) {
            ShaderRD::_compile_version_end(pVVar2,iVar14);
          }
          if (*(char *)(lVar18 + 0x90) != '\0') {
            if (*(long *)(lVar18 + 0x88) == 0) goto LAB_001126a0;
            lVar27 = *(long *)(*(long *)(lVar18 + 0x88) + -8);
            if (lVar27 < 1) goto LAB_001126a3;
          }
        }
      }
LAB_00112fe3:
      iVar14 = *(int *)this;
      if (iVar14 == 1) {
        uVar39 = 0;
        iVar15 = 0;
        iVar14 = 9;
      }
      else {
        uVar39 = (ulong)(iVar14 < 2) + 1;
        iVar15 = (iVar14 < 2) + 1;
        iVar14 = (iVar14 < 2) + 10;
      }
      uVar33 = *(ulong *)(this + 0x1010);
      if (*(long *)(this + 0xeb0) == 0) {
        lVar18 = 0;
LAB_00114d9f:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar39,
                   lVar18,"p_variant","variant_defines.size()","",false,false);
LAB_00114dd9:
        uVar21 = 0;
      }
      else {
        lVar18 = *(long *)(*(long *)(this + 0xeb0) + -8);
        if (lVar18 <= (long)uVar39) goto LAB_00114d9f;
        lVar18 = *(long *)(this + 0xec0);
        uVar26 = uVar39;
        if (lVar18 == 0) goto LAB_00115bd9;
        lVar27 = *(long *)(lVar18 + -8);
        if (lVar27 <= (long)uVar39) goto LAB_001126c0;
        lVar37 = (long)iVar15;
        if (*(char *)(lVar18 + lVar37) != '\0') {
          if ((uVar33 == 0) || (*(uint *)(this + 0xf6c) <= (uint)uVar33)) {
LAB_00115d5c:
            uVar21 = 0;
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
            goto LAB_0011312a;
          }
          lVar18 = ((uVar33 & 0xffffffff) % (ulong)*(uint *)(this + 0xf68)) * 0xa0 +
                   *(long *)(*(long *)(this + 0xf58) +
                            ((uVar33 & 0xffffffff) / (ulong)*(uint *)(this + 0xf68)) * 8);
          if (*(int *)(lVar18 + 0x98) != (int)(uVar33 >> 0x20)) {
            if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,lVar27);
            }
            goto LAB_00115d5c;
          }
          iVar15 = (int)lVar18;
          if (*(char *)(lVar18 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar2);
            lVar27 = *(long *)(this + 0xf10);
            if (lVar27 != 0) {
              lVar43 = 0;
              do {
                if (*(long *)(lVar27 + -8) <= lVar43) break;
                if (*(char *)(lVar27 + lVar43) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar2,iVar15);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar2,iVar15);
                }
                lVar27 = *(long *)(this + 0xf10);
                lVar43 = lVar43 + 1;
              } while (lVar27 != 0);
            }
          }
          lVar43 = *(long *)(this + 0xed0);
          if (lVar43 == 0) {
LAB_00115bd9:
            lVar27 = 0;
            uVar26 = uVar39;
            goto LAB_001126c0;
          }
          lVar27 = *(long *)(lVar43 + -8);
          if (lVar27 <= (long)uVar39) goto LAB_001126c0;
          uVar26 = (ulong)*(uint *)(lVar43 + lVar37 * 4);
          lVar43 = *(long *)(lVar18 + 0x68);
          if (lVar43 == 0) goto LAB_00113848;
          lVar27 = *(long *)(lVar43 + -8);
          if (lVar27 <= (long)uVar26) goto LAB_001126c0;
          if (*(long *)(lVar43 + uVar26 * 8) != 0) {
            ShaderRD::_compile_version_end(pVVar2,iVar15);
          }
          if (*(char *)(lVar18 + 0x90) != '\0') {
            lVar18 = *(long *)(lVar18 + 0x88);
            if (lVar18 != 0) {
              lVar27 = *(long *)(lVar18 + -8);
              uVar26 = uVar39;
              if (lVar27 <= (long)uVar39) goto LAB_001126c0;
              uVar21 = *(undefined8 *)(lVar18 + lVar37 * 8);
              goto LAB_0011312a;
            }
            goto LAB_00115bd9;
          }
          goto LAB_00114dd9;
        }
        uVar21 = 0;
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
      }
LAB_0011312a:
      uVar22 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar22,pvVar25,*(undefined8 *)(this + (long)iVar14 * 8 + 0x1018));
      local_c0 = (undefined8 *)0x0;
      iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,1);
      puVar30 = local_c0;
      if (iVar14 == 0) {
        if (local_c0 == (undefined8 *)0x0) {
          lVar18 = 0;
LAB_00115841:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar18,"p_index","size()","",false,
                     false);
          goto LAB_00113177;
        }
        lVar18 = local_c0[-1];
        if (lVar18 < 1) goto LAB_00115841;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
        *local_c0 = uVar23;
        puVar30 = local_c0;
        local_128 = pcVar34;
LAB_001131a7:
        local_108[0] = (undefined8 *)0x0;
        local_118 = 0;
        local_120 = 0;
        CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)&local_c0);
        LOCK();
        plVar1 = puVar30 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_c0 + -2,false);
        }
        puVar30 = local_108[0];
        pcVar34 = local_128;
        uVar59 = local_120;
        uVar22 = RenderingDevice::get_singleton();
        local_a8[0] = 0;
        local_c8 = pcVar34;
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
        local_b8 = local_118;
        if (puVar30 == (undefined8 *)0x0) goto LAB_0011593a;
        CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_108);
        lVar18 = local_a8[0];
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,0,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar25,uVar23,0);
        if (lVar18 != 0) {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
      }
      else {
LAB_00113177:
        local_120 = 0;
        local_118 = 0;
        local_108[0] = (undefined8 *)0x0;
        local_128 = pcVar34;
        if (puVar30 != (undefined8 *)0x0) goto LAB_001131a7;
        uVar22 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = pcVar34;
LAB_0011593a:
        local_a8[0] = 0;
        local_b8 = local_118;
        uVar23 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,0,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar22,pvVar25,uVar23,0);
      }
      if ((*(int *)this < 1) || (((byte)this[0xc] & 1) != 0)) {
        local_c0 = (undefined8 *)0x0;
        local_98[0] = uVar32;
        local_98[1] = uVar20;
        iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
        puVar30 = local_c0;
        if (iVar14 == 0) {
          lVar18 = 0;
          do {
            if (puVar30 == (undefined8 *)0x0) {
              lVar27 = 0;
LAB_00115967:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar27,"p_index","size()",""
                         ,false,false);
            }
            else {
              lVar27 = *(long *)((long)puVar30 + -8);
              if (lVar27 <= lVar18) goto LAB_00115967;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
              *(ulong *)((long)local_c0 + lVar18 * 8) = local_98[lVar18];
              puVar30 = local_c0;
            }
            if (lVar18 != 0) break;
            lVar18 = 1;
          } while( true );
        }
        local_f0 = 0;
        local_e8 = 0;
        local_d8[0] = 0;
        local_f8 = _LC76;
        if (puVar30 != (undefined8 *)0x0) {
          CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)&local_c0);
          LOCK();
          plVar1 = (long *)((long)puVar30 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_c0 + -0x10),false);
          }
        }
        lVar18 = local_d8[0];
        uVar59 = local_f0;
        pcVar34 = local_f8;
        uVar19 = RenderingDevice::get_singleton();
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,uVar59);
        local_a8[0] = 0;
        local_b8 = local_e8;
        local_c8 = pcVar34;
        if (lVar18 != 0) {
          CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_d8);
          lVar27 = local_a8[0];
          uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                             (pUVar12,uVar21,1,&local_c8);
          RenderingDevice::compute_list_bind_uniform_set(uVar19,pvVar25,uVar20,1);
          if (lVar27 != 0) {
            LOCK();
            plVar1 = (long *)(lVar27 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_a8[0] + -0x10),false);
            }
            lVar18 = local_d8[0];
            if (local_d8[0] == 0) goto LAB_00113479;
          }
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          lVar18 = *plVar1;
          UNLOCK();
          goto joined_r0x00113464;
        }
        uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar19,pvVar25,uVar20,1);
      }
      else {
        local_c0 = (undefined8 *)0x0;
        local_98[0] = uVar32;
        local_98[1] = uVar19;
        iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_c0,2);
        if (iVar14 == 0) {
          lVar18 = 0;
          puVar30 = local_c0;
          do {
            if (puVar30 == (undefined8 *)0x0) {
              lVar27 = 0;
LAB_00115d8b:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar27,"p_index","size()",""
                         ,false,false);
            }
            else {
              lVar27 = *(long *)((long)puVar30 + -8);
              if (lVar27 <= lVar18) goto LAB_00115d8b;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
              *(ulong *)((long)local_c0 + lVar18 * 8) = local_98[lVar18];
              puVar30 = local_c0;
            }
            if (lVar18 != 0) break;
            lVar18 = 1;
          } while( true );
        }
        puVar30 = local_c0;
        local_f0 = 0;
        local_e8 = 0;
        local_d8[0] = 0;
        local_f8 = _LC76;
        if (local_c0 != (undefined8 *)0x0) {
          CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)&local_c0);
          LOCK();
          plVar1 = (long *)((long)puVar30 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_c0 + -0x10),false);
          }
        }
        uVar19 = RenderingDevice::get_singleton();
        local_a8[0] = 0;
        local_c8 = local_f8;
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,local_f0);
        local_b8 = local_e8;
        if (local_d8[0] != 0) {
          CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_d8);
        }
        uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar12,uVar21,1,&local_c8);
        RenderingDevice::compute_list_bind_uniform_set(uVar19,pvVar25,uVar20,1);
        if (local_a8[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_a8[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
        if (local_d8[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_d8[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          lVar18 = *plVar1;
          UNLOCK();
joined_r0x00113464:
          if (lVar18 == 0) {
            Memory::free_static((void *)(local_d8[0] + -0x10),false);
          }
        }
      }
LAB_00113479:
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar18,pvVar25,iVar16 + 0xe88);
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar18,(uint)pvVar25,(uint)param_7[6],(uint)param_7[7]);
      lVar18 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar18);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      if (local_108[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_108[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_108[0] + -2,false);
        }
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      local_98[0] = local_98[0] & 0xffffffff00000000;
      uVar19 = RenderingDevice::get_singleton();
      RenderingDevice::buffer_update(uVar19,*(undefined8 *)(this + 0xce8),0,4,local_98);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00115dff:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar18 = *(long *)(*(long *)(this + 0xd20) + -8);
    if (lVar18 < 1) goto LAB_00114fbf;
    pcVar8 = *(char **)(this + 0xd30);
    if (pcVar8 == (char *)0x0) goto LAB_001126a0;
    lVar27 = *(long *)(pcVar8 + -8);
    if (0 < lVar27) {
      if (*pcVar8 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7);
        goto LAB_00111d42;
      }
      if ((uVar26 == 0) || (*(uint *)(this + 0xddc) <= (uint)uVar26)) {
LAB_001153e0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa);
      }
      else {
        lVar18 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(this + 0xdd8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xdc8) +
                          ((uVar26 & 0xffffffff) / (ulong)*(uint *)(this + 0xdd8)) * 8);
        if (*(int *)(lVar18 + 0x98) != (int)(uVar26 >> 0x20)) {
          if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001153e0;
        }
        iVar14 = (int)lVar18;
        if (*(char *)(lVar18 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar27 = *(long *)(this + 0xd80);
          if (lVar27 != 0) {
            lVar37 = 0;
            do {
              if (*(long *)(lVar27 + -8) <= lVar37) break;
              if (*(char *)(lVar27 + lVar37) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar14);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar14);
              }
              lVar27 = *(long *)(this + 0xd80);
              lVar37 = lVar37 + 1;
            } while (lVar27 != 0);
          }
        }
        puVar7 = *(uint **)(this + 0xd40);
        if (puVar7 == (uint *)0x0) goto LAB_001126a0;
        lVar27 = *(long *)(puVar7 + -2);
        if (lVar27 < 1) goto LAB_001126a3;
        uVar26 = (ulong)*puVar7;
        lVar37 = *(long *)(lVar18 + 0x68);
        if (lVar37 == 0) goto LAB_00113848;
        lVar27 = *(long *)(lVar37 + -8);
        if (lVar27 <= (long)uVar26) goto LAB_001126c0;
        if (*(long *)(lVar37 + uVar26 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar14);
        }
        if (*(char *)(lVar18 + 0x90) != '\0') {
          if (*(long *)(lVar18 + 0x88) == 0) goto LAB_001126a0;
          lVar27 = *(long *)(*(long *)(lVar18 + 0x88) + -8);
          if (lVar27 < 1) goto LAB_001126a3;
        }
      }
      goto LAB_00111d42;
    }
  }
LAB_001126a3:
  uVar26 = 0;
LAB_001126c0:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar26,lVar27,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
LAB_00112da0:
  lVar18 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_add_barrier(lVar18);
  uVar39 = (ulong)(iVar42 + 1U);
  if (uVar36 == iVar42 + 1U) goto LAB_00112dd2;
  goto LAB_00111d62;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SSEffects::SSEffects() */

void __thiscall RendererRD::SSEffects::SSEffects(SSEffects *this)

{
  ShaderRD *this_00;
  long *plVar1;
  ShaderRD *this_01;
  ShaderRD *this_02;
  ShaderRD *this_03;
  ShaderRD *this_04;
  ShaderRD *this_05;
  ShaderRD *this_06;
  ShaderRD *this_07;
  ShaderRD *this_08;
  ShaderRD *this_09;
  ShaderRD *this_10;
  ShaderRD *this_11;
  ShaderRD *this_12;
  char cVar2;
  long lVar3;
  char *pcVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  SSEffects SVar8;
  int iVar9;
  undefined8 uVar10;
  StringName *pSVar11;
  ulong uVar12;
  SamplerState *pSVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  StringName *pSVar18;
  StringName *pSVar19;
  StringName *pSVar20;
  undefined8 *puVar21;
  char *in_R9;
  undefined8 in_R11;
  int iVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long in_FS_OFFSET;
  bool bVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong local_380;
  float local_2d0;
  float local_2cc;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  char *local_298;
  ulong local_290;
  undefined8 local_288;
  undefined8 local_278;
  char *local_268;
  ulong uStack_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_230;
  int local_228 [8];
  int local_208 [8];
  int local_1e8 [8];
  int local_1c8 [8];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  StringName local_194 [12];
  int local_188 [82];
  long local_40;
  
  bVar28 = 0;
  this_00 = (ShaderRD *)(this + 0x60);
  this_01 = (ShaderRD *)(this + 0x5e8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x20) = 0x43f000000;
  *(undefined8 *)(this + 8) = 0x23f000000;
  uVar10 = _LC118;
  *(undefined4 *)this = 2;
  *(undefined8 *)(this + 0x10) = uVar10;
  *(undefined8 *)(this + 0x28) = uVar10;
  uVar10 = _LC119;
  this[4] = (SSEffects)0x0;
  *(undefined8 *)(this + 0x30) = uVar10;
  uVar10 = _LC120;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined8 *)(this + 0x38) = uVar10;
  this[0x1c] = (SSEffects)0x0;
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x60) = &PTR__SsEffectsDownsampleShaderRD_00121a68;
  this_02 = (ShaderRD *)(this + 0x2b0);
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(push_constant, std430) uniform Params {\n\tvec2 pixel_size;\n\tfloat z_far;\n\tfloat z_near;\n\tbool orthogonal;\n\tfloat radius_sq;\n\tuvec2 pad;\n}\nparams;\n\nlayout(set = 0, binding = 0) uniform sampler2D source_depth;\n\nlayout(r16f, set = 1, binding = 0) uniform restrict writeonly image2DArray dest_image0; \n#ifdef GENERATE_MIPS\nlayout(r16f, set = 2, binding = 0) uniform restrict writeonly image2DArray dest_image1;\nlayout(r16f, set = 2, binding = 1) uniform restrict writeonly image2DArray dest_image2;\nlayout(r16f, set = 2, binding = 2) uniform restrict writeonly image2DArray dest_image3;\n#ifdef GENERATE_FULL_MIPS\nlayout(r16f, set = 2, binding = 3) uniform restrict writeonly image2DArray dest_image4;\n#endif\n#endif\n\nvec4 screen_space_to_view_space_depth(vec4 p_depth) {\n\tif (params.orthogonal) {\n\t\tvec4 depth = p_depth * 2.0 - 1.0;\n\t\treturn -(depth * (params.z_far - params.z_near) - (params.z_far + params.z_near)) / 2.0;\n\t}\n\n\tfloat depth_linearize_mul = params.z_near;\n\tfloat depth_linearize_add = params.z_far;\n\n\t\n\n\t\n\t\n\t\n\n\treturn depth_linearize_mul / (depth_linearize_add - p_depth);\n}\n\nfloat screen_space_to_view_space_depth(float p_depth) {\n\tif (params.orthogonal) {\n\t\tfloat depth = p_depth * 2.0 - 1.0;\n\t\treturn -(depth * (params.z_far - params.z_near) - (params.z_far + params.z_near)) / 2.0;\n\t}\n\n\tfloat depth_linearize_mul = params.z_near;\n\tfloat depth_linearize_add = params.z_far;\n\n\treturn depth_linearize_mul / (depth_linearize_add - p_depth);\n}\n\n#ifdef GENERATE_MIPS\n\nshared float depth_buffer[4][8][8];\n\nfloat mip_smart_average(vec4 p_depths) {\n\tfloat closest = min(min(p_depths.x, p_depths.y), min(p_depths.z, p_depths.w));\n\tfloat fallof_sq = -1.0f / params.radius_sq;\n\tvec4 dists = p_depths - closest.xxxx;\n\tvec4 weights = clamp(dists * dists * fallof_sq + 1.0, 0.0, 1.0);\n\treturn dot(weights, p_depths) / dot(weights, vec4(1.0, 1.0, 1.0, 1.0));\n}\n\nvoid prepare_depths_and_mips(vec4 p_samples, uvec2 p_output_coord, uvec2 p_gtid) {..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined2 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1e2] = (SSEffects)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_02);
  *(undefined ***)(this + 0x2b0) = &PTR__SsilShaderRD_00121b08;
  this_03 = (ShaderRD *)(this + 0x448);
  ShaderRD::setup((char *)this_02,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define SSIL_MAIN_DISK_SAMPLE_COUNT (32)\nconst vec4 sample_pattern[SSIL_MAIN_DISK_SAMPLE_COUNT] = {\n\tvec4(0.78488064, 0.56661671, 1.500000, -0.126083), vec4(0.26022232, -0.29575172, 1.500000, -1.064030), vec4(0.10459357, 0.08372527, 1.110000, -2.730563), vec4(-0.68286800, 0.04963045, 1.090000, -0.498827),\n\tvec4(-0.13570161, -0.64190155, 1.250000, -0.532765), vec4(-0.26193795, -0.08205118, 0.670000, -1.783245), vec4(-0.61177456, 0.66664219, 0.710000, -0.044234), vec4(0.43675563, 0.25119025, 0.610000, -1.167283),\n\tvec4(0.07884444, 0.86618668, 0.640000, -0.459002), vec4(-0.12790935, -0.29869005, 0.600000, -1.729424), vec4(-0.04031125, 0.02413622, 0.600000, -4.792042), vec4(0.16201244, -0.52851415, 0.790000, -1.067055),\n\tvec4(-0.70991218, 0.47301072, 0.640000, -0.335236), vec4(0.03277707, -0.22349690, 0.600000, -1.982384), vec4(0.68921727, 0.36800742, 0.630000, -0.266718), vec4(0.29251814, 0.37775412, 0.610000, -1.422520),\n\tvec4(-0.12224089, 0.96582592, 0.600000, -0.426142), vec4(0.11071457, -0.16131058, 0.600000, -2.165947), vec4(0.46562141, -0.59747696, 0.600000, -0.189760), vec4(-0.51548797, 0.11804193, 0.600000, -1.246800),\n\tvec4(0.89141309, -0.42090443, 0.600000, 0.028192), vec4(-0.32402530, -0.01591529, 0.600000, -1.543018), vec4(0.60771245, 0.41635221, 0.600000, -0.605411), vec4(0.02379565, -0.08239821, 0.600000, -3.809046),\n\tvec4(0.48951152, -0.23657045, 0.600000, -1.189011), vec4(-0.17611565, -0.81696892, 0.600000, -0.513724), vec4(-0.33930185, -0.20732205, 0.600000, -1.698047), vec4(-0.91974425, 0.05403209, 0.600000, 0.062246),\n\tvec4(-0.15064627, -0.14949332, 0.600000, -1.896062), vec4(0.53180975, -0.35210401, 0.600000, -0.758838), vec4(0.41487166, 0.81442589, 0.600000, -0.505648), vec4(-0.24106961, -0.32721516, 0.600000, -1.665244)\n};\n\n\n\nconst int num_taps[5] = { 3, 5, 12, 0, 0 };\n\n#define SSIL_TILT_SAMPLES_ENABLE_AT_QUALITY_PRESET (99) \n#define SSIL_TILT_SAMPLES_AMOUNT (0.4)\n\n#define SSIL_HALOING_REDUCTION_ENABLE_AT_QUALITY_PRESET (1) \n#define SSIL_HALOING_REDUCTION_AMOUNT..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined1 (*) [16])(this + 0x428) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_03);
  *(undefined ***)(this + 0x448) = &PTR__SsilImportanceMapShaderRD_00121b48;
  this_04 = (ShaderRD *)(this + 0x778);
  ShaderRD::setup((char *)this_03,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#ifdef GENERATE_MAP\nlayout(set = 0, binding = 0) uniform sampler2DArray source_texture;\n#else\nlayout(set = 0, binding = 0) uniform sampler2D source_importance;\n#endif\nlayout(r8, set = 1, binding = 0) uniform restrict writeonly image2D dest_image;\n\n#ifdef PROCESS_MAPB\nlayout(set = 2, binding = 0, std430) buffer Counter {\n\tuint sum;\n}\ncounter;\n#endif\n\nlayout(push_constant, std430) uniform Params {\n\tvec2 half_screen_pixel_size;\n\tfloat intensity;\n\tfloat pad;\n}\nparams;\n\nvoid main() {\n\t\n\tivec2 ssC = ivec2(gl_GlobalInvocationID.xy);\n\n#ifdef GENERATE_MAP\n\t\n\tuvec2 base_position = ssC * 2;\n\n\tfloat avg = 0.0;\n\tfloat minV = 1.0;\n\tfloat maxV = 0.0;\n\tfor (int i = 0; i < 4; i++) {\n\t\tvec3 value_a = texelFetch(source_texture, ivec3(base_position, i), 0).rgb * params.intensity;\n\t\tvec3 value_b = texelFetch(source_texture, ivec3(base_position, i) + ivec3(0, 1, 0), 0).rgb * params.intensity;\n\t\tvec3 value_c = texelFetch(source_texture, ivec3(base_position, i) + ivec3(1, 0, 0), 0).rgb * params.intensity;\n\t\tvec3 value_d = texelFetch(source_texture, ivec3(base_position, i) + ivec3(1, 1, 0), 0).rgb * params.intensity;\n\n\t\t\n\t\tfloat a = dot(value_a, vec3(0.2125, 0.7154, 0.0721));\n\t\tfloat b = dot(value_b, vec3(0.2125, 0.7154, 0.0721));\n\t\tfloat c = dot(value_c, vec3(0.2125, 0.7154, 0.0721));\n\t\tfloat d = dot(value_d, vec3(0.2125, 0.7154, 0.0721));\n\n\t\tmaxV = max(maxV, max(max(a, b), max(c, d)));\n\t\tminV = min(minV, min(min(a, b), min(c, d)));\n\t}\n\n\tfloat min_max_diff = maxV - minV;\n\n\timageStore(dest_image, ssC, vec4(pow(clamp(min_max_diff * 2.0, 0.0, 1.0), 0.6)));\n#endif\n\n#ifdef PROCESS_MAPA\n\tvec2 uv = (vec2(ssC) + 0.5) * params.half_screen_pixel_size * 2.0;\n\n\tfloat center = textureLod(source_importance, uv, 0.0).x;\n\n\tvec2 half_pixel = params.half_screen_pixel_size;\n\n\tvec4 vals;\n\tvals.x = textureLod(source_importance, uv + vec2(-half_pixel.x * 3, -half_pixel.y), 0.0).x;\n\tvals.y = textureLod(source_importance, uv + vec2(+half_pixel.x, -half_pixel.y * ..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x5d0) = 0;
  *(undefined1 (*) [16])(this + 0x5c0) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_01);
  *(undefined ***)(this + 0x5e8) = &PTR__SsilBlurShaderRD_00121b28;
  this_05 = (ShaderRD *)(this + 0x9d8);
  ShaderRD::setup((char *)this_01,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(set = 0, binding = 0) uniform sampler2D source_ssil;\n\nlayout(rgba16, set = 1, binding = 0) uniform restrict writeonly image2D dest_image;\n\nlayout(r8, set = 2, binding = 0) uniform restrict readonly image2D source_edges;\n\nlayout(push_constant, std430) uniform Params {\n\tfloat edge_sharpness;\n\tfloat pad;\n\tvec2 half_screen_pixel_size;\n}\nparams;\n\nvec4 unpack_edges(float p_packed_val) {\n\tuint packed_val = uint(p_packed_val * 255.5);\n\tvec4 edgesLRTB;\n\tedgesLRTB.x = float((packed_val >> 6) & 0x03) / 3.0;\n\tedgesLRTB.y = float((packed_val >> 4) & 0x03) / 3.0;\n\tedgesLRTB.z = float((packed_val >> 2) & 0x03) / 3.0;\n\tedgesLRTB.w = float((packed_val >> 0) & 0x03) / 3.0;\n\n\treturn clamp(edgesLRTB + params.edge_sharpness, 0.0, 1.0);\n}\n\nvoid add_sample(vec4 p_ssil_value, float p_edge_value, inout vec4 r_sum, inout float r_sum_weight) {\n\tfloat weight = p_edge_value;\n\n\tr_sum += (weight * p_ssil_value);\n\tr_sum_weight += weight;\n}\n\n#ifdef MODE_WIDE\nvec4 sample_blurred_wide(ivec2 p_pos, vec2 p_coord) {\n\tvec4 ssil_value = textureLodOffset(source_ssil, vec2(p_coord), 0.0, ivec2(0, 0));\n\tvec4 ssil_valueL = textureLodOffset(source_ssil, vec2(p_coord), 0.0, ivec2(-2, 0));\n\tvec4 ssil_valueT = textureLodOffset(source_ssil, vec2(p_coord), 0.0, ivec2(0, -2));\n\tvec4 ssil_valueR = textureLodOffset(source_ssil, vec2(p_coord), 0.0, ivec2(2, 0));\n\tvec4 ssil_valueB = textureLodOffset(source_ssil, vec2(p_coord), 0.0, ivec2(0, 2));\n\n\tvec4 edgesLRTB = unpack_edges(imageLoad(source_edges, p_pos).r);\n\tedgesLRTB.x *= unpack_edges(imageLoad(source_edges, p_pos + ivec2(-2, 0)).r).y;\n\tedgesLRTB.z *= unpack_edges(imageLoad(source_edges, p_pos + ivec2(0, -2)).r).w;\n\tedgesLRTB.y *= unpack_edges(imageLoad(source_edges, p_pos + ivec2(2, 0)).r).x;\n\tedgesLRTB.w *= unpack_edges(imageLoad(source_edges, p_pos + ivec2(0, 2)).r).z;\n\n\tfloat sum_weight = 0.8;\n\tvec4 sum = ssil_value * sum_weight;\n\n\tadd_sample(ssil_valueL, edgesLRTB.x, sum, sum_weight);\n\tadd_sample(ssil_v..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x760) = 0;
  ShaderRD::ShaderRD(this_04);
  *(undefined ***)(this + 0x778) = &PTR__SsilInterleaveShaderRD_00121b68;
  this_06 = (ShaderRD *)(this + 0xb68);
  ShaderRD::setup((char *)this_04,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(rgba16, set = 0, binding = 0) uniform restrict writeonly image2D dest_image;\nlayout(set = 1, binding = 0) uniform sampler2DArray source_texture;\nlayout(r8, set = 2, binding = 0) uniform restrict readonly image2DArray source_edges;\n\nlayout(push_constant, std430) uniform Params {\n\tfloat inv_sharpness;\n\tuint size_modifier;\n\tvec2 pixel_size;\n}\nparams;\n\nvec4 unpack_edges(float p_packed_val) {\n\tuint packed_val = uint(p_packed_val * 255.5);\n\tvec4 edgesLRTB;\n\tedgesLRTB.x = float((packed_val >> 6) & 0x03) / 3.0;\n\tedgesLRTB.y = float((packed_val >> 4) & 0x03) / 3.0;\n\tedgesLRTB.z = float((packed_val >> 2) & 0x03) / 3.0;\n\tedgesLRTB.w = float((packed_val >> 0) & 0x03) / 3.0;\n\n\treturn clamp(edgesLRTB + params.inv_sharpness, 0.0, 1.0);\n}\n\nvoid main() {\n\tivec2 ssC = ivec2(gl_GlobalInvocationID.xy);\n\tif (any(greaterThanEqual(ssC, ivec2(1.0 / params.pixel_size)))) { \n\t\treturn;\n\t}\n\n#ifdef MODE_SMART\n\tuvec2 pix_pos = uvec2(gl_GlobalInvocationID.xy);\n\tvec2 uv = (gl_GlobalInvocationID.xy + vec2(0.5)) * params.pixel_size;\n\n\t\n\tint mx = int(pix_pos.x % 2);\n\tint my = int(pix_pos.y % 2);\n\tint index_center = mx + my * 2; \n\tint index_horizontal = (1 - mx) + my * 2; \n\tint index_vertical = mx + (1 - my) * 2; \n\tint index_diagonal = (1 - mx) + (1 - my) * 2; \n\n\tvec4 color = texelFetch(source_texture, ivec3(pix_pos / uvec2(params.size_modifier), index_center), 0);\n\n\tvec4 edgesLRTB = unpack_edges(imageLoad(source_edges, ivec3(pix_pos / uvec2(params.size_modifier), index_center)).r);\n\n\t\n\tfloat fmx = float(mx);\n\tfloat fmy = float(my);\n\n\t\n\tfloat fmxe = (edgesLRTB.y - edgesLRTB.x);\n\tfloat fmye = (edgesLRTB.w - edgesLRTB.z);\n\n\t\n\tvec2 uv_horizontal = (gl_GlobalInvocationID.xy + vec2(0.5) + vec2(fmx + fmxe - 0.5, 0.5 - fmy)) * params.pixel_size;\n\tvec4 color_horizontal = textureLod(source_texture, vec3(uv_horizontal, index_horizontal), 0.0);\n\tvec2 uv_vertical = (gl_GlobalInvocationID.xy + vec2(0.5) + vec2(0.5 - fmx, fmy - 0.5 + fmye)) * params.pixel_si..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x8f8) = 0;
  *(undefined8 *)(this + 0x950) = 0;
  *(undefined8 *)(this + 0x8f0) = 0;
  puVar21 = (undefined8 *)((ulong)(this + 0x900) & 0xfffffffffffffff8);
  for (uVar14 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x900) & 0xfffffffffffffff8)
                        ) + 0x958U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar21 = 0;
    puVar21 = puVar21 + (ulong)bVar28 * -2 + 1;
  }
  ShaderRD::ShaderRD(this_05);
  *(undefined ***)(this + 0x9d8) = &PTR__SsaoShaderRD_00121a88;
  this_07 = (ShaderRD *)(this + 0xd08);
  ShaderRD::setup((char *)this_05,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define INTELSSAO_MAIN_DISK_SAMPLE_COUNT (32)\nconst vec4 sample_pattern[INTELSSAO_MAIN_DISK_SAMPLE_COUNT] = {\n\tvec4(0.78488064, 0.56661671, 1.500000, -0.126083), vec4(0.26022232, -0.29575172, 1.500000, -1.064030), vec4(0.10459357, 0.08372527, 1.110000, -2.730563), vec4(-0.68286800, 0.04963045, 1.090000, -0.498827),\n\tvec4(-0.13570161, -0.64190155, 1.250000, -0.532765), vec4(-0.26193795, -0.08205118, 0.670000, -1.783245), vec4(-0.61177456, 0.66664219, 0.710000, -0.044234), vec4(0.43675563, 0.25119025, 0.610000, -1.167283),\n\tvec4(0.07884444, 0.86618668, 0.640000, -0.459002), vec4(-0.12790935, -0.29869005, 0.600000, -1.729424), vec4(-0.04031125, 0.02413622, 0.600000, -4.792042), vec4(0.16201244, -0.52851415, 0.790000, -1.067055),\n\tvec4(-0.70991218, 0.47301072, 0.640000, -0.335236), vec4(0.03277707, -0.22349690, 0.600000, -1.982384), vec4(0.68921727, 0.36800742, 0.630000, -0.266718), vec4(0.29251814, 0.37775412, 0.610000, -1.422520),\n\tvec4(-0.12224089, 0.96582592, 0.600000, -0.426142), vec4(0.11071457, -0.16131058, 0.600000, -2.165947), vec4(0.46562141, -0.59747696, 0.600000, -0.189760), vec4(-0.51548797, 0.11804193, 0.600000, -1.246800),\n\tvec4(0.89141309, -0.42090443, 0.600000, 0.028192), vec4(-0.32402530, -0.01591529, 0.600000, -1.543018), vec4(0.60771245, 0.41635221, 0.600000, -0.605411), vec4(0.02379565, -0.08239821, 0.600000, -3.809046),\n\tvec4(0.48951152, -0.23657045, 0.600000, -1.189011), vec4(-0.17611565, -0.81696892, 0.600000, -0.513724), vec4(-0.33930185, -0.20732205, 0.600000, -1.698047), vec4(-0.91974425, 0.05403209, 0.600000, 0.062246),\n\tvec4(-0.15064627, -0.14949332, 0.600000, -1.896062), vec4(0.53180975, -0.35210401, 0.600000, -0.758838), vec4(0.41487166, 0.81442589, 0.600000, -0.505648), vec4(-0.24106961, -0.32721516, 0.600000, -1.665244)\n};\n\n\n\nconst int num_taps[5] = { 3, 5, 12, 0, 0 };\n\n#define SSAO_TILT_SAMPLES_ENABLE_AT_QUALITY_PRESET (99) \n#define SSAO_TILT_SAMPLES_AMOUNT (0.4)\n\n#define SSAO_HALOING_REDUCTION_ENABLE_AT_QUALITY_PRESET (1) \n#define SSAO_HALOING_REDUCT..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0xb50) = 0;
  ShaderRD::ShaderRD(this_06);
  *(undefined ***)(this + 0xb68) = &PTR__SsaoImportanceMapShaderRD_00121ac8;
  this_08 = (ShaderRD *)(this + 0xe98);
  ShaderRD::setup((char *)this_06,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#ifdef GENERATE_MAP\nlayout(set = 0, binding = 0) uniform sampler2DArray source_texture;\n#else\nlayout(set = 0, binding = 0) uniform sampler2D source_importance;\n#endif\nlayout(r8, set = 1, binding = 0) uniform restrict writeonly image2D dest_image;\n\n#ifdef PROCESS_MAPB\nlayout(set = 2, binding = 0, std430) buffer Counter {\n\tuint sum;\n}\ncounter;\n#endif\n\nlayout(push_constant, std430) uniform Params {\n\tvec2 half_screen_pixel_size;\n\tfloat intensity;\n\tfloat power;\n}\nparams;\n\nvoid main() {\n\t\n\tivec2 ssC = ivec2(gl_GlobalInvocationID.xy);\n\n#ifdef GENERATE_MAP\n\t\n\tuvec2 base_position = ssC * 2;\n\n\tvec2 base_uv = (vec2(base_position) + vec2(0.5f, 0.5f)) * params.half_screen_pixel_size;\n\n\tfloat minV = 1.0;\n\tfloat maxV = 0.0;\n\tfor (int i = 0; i < 4; i++) {\n\t\tvec4 vals = textureGather(source_texture, vec3(base_uv, i));\n\n\t\t\n\t\tvals = params.intensity * vals;\n\n\t\tvals = 1 - vals;\n\n\t\tvals = pow(clamp(vals, 0.0, 1.0), vec4(params.power));\n\n\t\tmaxV = max(maxV, max(max(vals.x, vals.y), max(vals.z, vals.w)));\n\t\tminV = min(minV, min(min(vals.x, vals.y), min(vals.z, vals.w)));\n\t}\n\n\tfloat min_max_diff = maxV - minV;\n\n\timageStore(dest_image, ssC, vec4(pow(clamp(min_max_diff * 2.0, 0.0, 1.0), 0.8)));\n#endif\n\n#ifdef PROCESS_MAPA\n\tvec2 uv = (vec2(ssC) + 0.5f) * params.half_screen_pixel_size * 2.0;\n\n\tfloat center = textureLod(source_importance, uv, 0.0).x;\n\n\tvec2 half_pixel = params.half_screen_pixel_size;\n\n\tvec4 vals;\n\tvals.x = textureLod(source_importance, uv + vec2(-half_pixel.x * 3, -half_pixel.y), 0.0).x;\n\tvals.y = textureLod(source_importance, uv + vec2(+half_pixel.x, -half_pixel.y * 3), 0.0).x;\n\tvals.z = textureLod(source_importance, uv + vec2(+half_pixel.x * 3, +half_pixel.y), 0.0).x;\n\tvals.w = textureLod(source_importance, uv + vec2(-half_pixel.x, +half_pixel.y * 3), 0.0).x;\n\n\tfloat avg = dot(vals, vec4(0.25, 0.25, 0.25, 0.25));\n\n\timageStore(dest_image, ssC, vec4(avg));\n#endif\n\n#ifdef PROCESS_MAPB\n\tvec2 uv = (vec2(ssC) + 0.5f) * params.half_s..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0xcf0) = 0;
  *(undefined1 (*) [16])(this + 0xce0) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_07);
  *(undefined ***)(this + 0xd08) = &PTR__SsaoBlurShaderRD_00121aa8;
  ShaderRD::setup((char *)this_07,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(set = 0, binding = 0) uniform sampler2D source_ssao;\n\nlayout(rg8, set = 1, binding = 0) uniform restrict writeonly image2D dest_image;\n\nlayout(push_constant, std430) uniform Params {\n\tfloat edge_sharpness;\n\tfloat pad;\n\tvec2 half_screen_pixel_size;\n}\nparams;\n\nvec4 unpack_edges(float p_packed_val) {\n\tuint packed_val = uint(p_packed_val * 255.5);\n\tvec4 edgesLRTB;\n\tedgesLRTB.x = float((packed_val >> 6) & 0x03) / 3.0;\n\tedgesLRTB.y = float((packed_val >> 4) & 0x03) / 3.0;\n\tedgesLRTB.z = float((packed_val >> 2) & 0x03) / 3.0;\n\tedgesLRTB.w = float((packed_val >> 0) & 0x03) / 3.0;\n\n\treturn clamp(edgesLRTB + params.edge_sharpness, 0.0, 1.0);\n}\n\nvoid add_sample(float p_ssao_value, float p_edge_value, inout float r_sum, inout float r_sum_weight) {\n\tfloat weight = p_edge_value;\n\n\tr_sum += (weight * p_ssao_value);\n\tr_sum_weight += weight;\n}\n\n#ifdef MODE_WIDE\nvec2 sample_blurred_wide(vec2 p_coord) {\n\tvec2 vC = textureLodOffset(source_ssao, vec2(p_coord), 0.0, ivec2(0, 0)).xy;\n\tvec2 vL = textureLodOffset(source_ssao, vec2(p_coord), 0.0, ivec2(-2, 0)).xy;\n\tvec2 vT = textureLodOffset(source_ssao, vec2(p_coord), 0.0, ivec2(0, -2)).xy;\n\tvec2 vR = textureLodOffset(source_ssao, vec2(p_coord), 0.0, ivec2(2, 0)).xy;\n\tvec2 vB = textureLodOffset(source_ssao, vec2(p_coord), 0.0, ivec2(0, 2)).xy;\n\n\tfloat packed_edges = vC.y;\n\tvec4 edgesLRTB = unpack_edges(packed_edges);\n\tedgesLRTB.x *= unpack_edges(vL.y).y;\n\tedgesLRTB.z *= unpack_edges(vT.y).w;\n\tedgesLRTB.y *= unpack_edges(vR.y).x;\n\tedgesLRTB.w *= unpack_edges(vB.y).z;\n\n\tfloat ssao_value = vC.x;\n\tfloat ssao_valueL = vL.x;\n\tfloat ssao_valueT = vT.x;\n\tfloat ssao_valueR = vR.x;\n\tfloat ssao_valueB = vB.x;\n\n\tfloat sum_weight = 0.8f;\n\tfloat sum = ssao_value * sum_weight;\n\n\tadd_sample(ssao_valueL, edgesLRTB.x, sum, sum_weight);\n\tadd_sample(ssao_valueR, edgesLRTB.y, sum, sum_weight);\n\tadd_sample(ssao_valueT, edgesLRTB.z, sum, sum_weight);\n\tadd_sample(ssao_valueB, edgesLRTB.w, sum, sum_weight);\n..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0xe80) = 0;
  ShaderRD::ShaderRD(this_08);
  *(undefined ***)(this + 0xe98) = &PTR__SsaoInterleaveShaderRD_00121ae8;
  this_09 = (ShaderRD *)(this + 0x13b0);
  ShaderRD::setup((char *)this_08,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(rgba8, set = 0, binding = 0) uniform restrict writeonly image2D dest_image;\nlayout(set = 1, binding = 0) uniform sampler2DArray source_texture;\n\nlayout(push_constant, std430) uniform Params {\n\tfloat inv_sharpness;\n\tuint size_modifier;\n\tvec2 pixel_size;\n}\nparams;\n\nvec4 unpack_edges(float p_packed_val) {\n\tuint packed_val = uint(p_packed_val * 255.5);\n\tvec4 edgesLRTB;\n\tedgesLRTB.x = float((packed_val >> 6) & 0x03) / 3.0;\n\tedgesLRTB.y = float((packed_val >> 4) & 0x03) / 3.0;\n\tedgesLRTB.z = float((packed_val >> 2) & 0x03) / 3.0;\n\tedgesLRTB.w = float((packed_val >> 0) & 0x03) / 3.0;\n\n\treturn clamp(edgesLRTB + params.inv_sharpness, 0.0, 1.0);\n}\n\nvoid main() {\n\tivec2 ssC = ivec2(gl_GlobalInvocationID.xy);\n\tif (any(greaterThanEqual(ssC, ivec2(1.0 / params.pixel_size)))) { \n\t\treturn;\n\t}\n\n#ifdef MODE_SMART\n\tfloat ao;\n\tuvec2 pix_pos = uvec2(gl_GlobalInvocationID.xy);\n\tvec2 uv = (gl_GlobalInvocationID.xy + vec2(0.5)) * params.pixel_size;\n\n\t\n\tint mx = int(pix_pos.x % 2);\n\tint my = int(pix_pos.y % 2);\n\tint index_center = mx + my * 2; \n\tint index_horizontal = (1 - mx) + my * 2; \n\tint index_vertical = mx + (1 - my) * 2; \n\tint index_diagonal = (1 - mx) + (1 - my) * 2; \n\n\tvec2 center_val = texelFetch(source_texture, ivec3(pix_pos / uvec2(params.size_modifier), index_center), 0).xy;\n\n\tao = center_val.x;\n\n\tvec4 edgesLRTB = unpack_edges(center_val.y);\n\n\t\n\tfloat fmx = float(mx);\n\tfloat fmy = float(my);\n\n\t\n\tfloat fmxe = (edgesLRTB.y - edgesLRTB.x);\n\tfloat fmye = (edgesLRTB.w - edgesLRTB.z);\n\n\t\n\tvec2 uv_horizontal = (gl_GlobalInvocationID.xy + vec2(0.5) + vec2(fmx + fmxe - 0.5, 0.5 - fmy)) * params.pixel_size;\n\tfloat ao_horizontal = textureLod(source_texture, vec3(uv_horizontal, index_horizontal), 0.0).x;\n\tvec2 uv_vertical = (gl_GlobalInvocationID.xy + vec2(0.5) + vec2(0.5 - fmx, fmy - 0.5 + fmye)) * params.pixel_size;\n\tfloat ao_vertical = textureLod(source_texture, vec3(uv_vertical, index_vertical), 0.0).x;\n\tvec2 uv_diagonal = (gl_G..." /* TRUNCATED STRING LITERAL */
                 );
  this_10 = (ShaderRD *)(this + 0x1078);
  *(undefined8 *)(this + 0x1018) = 0;
  *(undefined8 *)(this + 0x1010) = 0;
  *(undefined8 *)(this + 0x1070) = 0;
  puVar21 = (undefined8 *)((ulong)(this + 0x1020) & 0xfffffffffffffff8);
  for (uVar14 = (ulong)(((int)this -
                        (int)(undefined8 *)((ulong)(this + 0x1020) & 0xfffffffffffffff8)) + 0x1078U
                       >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar21 = 0;
    puVar21 = puVar21 + (ulong)bVar28 * -2 + 1;
  }
  ShaderRD::ShaderRD(this_10);
  *(undefined ***)(this + 0x1078) = &PTR__ScreenSpaceReflectionScaleShaderRD_00121a48;
  this_11 = (ShaderRD *)(this + 0x1208);
  ShaderRD::setup((char *)this_10,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n/* Specialization Constants (Toggles) */\n\nlayout(constant_id = 0) const bool sc_multiview = false;\n\n/* inputs */\nlayout(set = 0, binding = 0) uniform sampler2D source_ssr;\nlayout(set = 1, binding = 0) uniform sampler2D source_depth;\nlayout(set = 1, binding = 1) uniform sampler2D source_normal;\nlayout(rgba16f, set = 2, binding = 0) uniform restrict writeonly image2D dest_ssr;\nlayout(r32f, set = 3, binding = 0) uniform restrict writeonly image2D dest_depth;\nlayout(rgba8, set = 3, binding = 1) uniform restrict writeonly image2D dest_normal;\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 screen_size;\n\tfloat camera_z_near;\n\tfloat camera_z_far;\n\n\tbool orthogonal;\n\tbool filtered;\n\tuint pad[2];\n}\nparams;\n\nvoid main() {\n\t\n\tivec2 ssC = ivec2(gl_GlobalInvocationID.xy);\n\n\tif (any(greaterThanEqual(ssC.xy, params.screen_size))) { \n\t\treturn;\n\t}\n\t\n\n\tfloat divisor = 0.0;\n\tvec4 color;\n\tfloat depth;\n\tvec4 normal;\n\n\tif (params.filtered) {\n\t\tcolor = vec4(0.0);\n\t\tdepth = 0.0;\n\t\tnormal = vec4(0.0);\n\n\t\tfor (int i = 0; i < 4; i++) {\n\t\t\tivec2 ofs = ssC << 1;\n\t\t\tif (bool(i & 1)) {\n\t\t\t\tofs.x += 1;\n\t\t\t}\n\t\t\tif (bool(i & 2)) {\n\t\t\t\tofs.y += 1;\n\t\t\t}\n\t\t\tcolor += texelFetch(source_ssr, ofs, 0);\n\t\t\tfloat d = texelFetch(source_depth, ofs, 0).r;\n\t\t\tvec4 nr = texelFetch(source_normal, ofs, 0);\n\t\t\tnormal.xyz += normalize(nr.xyz * 2.0 - 1.0);\n\t\t\tfloat roughness = normal.w;\n\t\t\tif (roughness > 0.5) {\n\t\t\t\troughness = 1.0 - roughness;\n\t\t\t}\n\t\t\troughness /= (127.0 / 255.0);\n\t\t\tnormal.w += roughness;\n\n\t\t\tif (sc_multiview) {\n\t\t\t\t\n\t\t\t\tdepth += d;\n\t\t\t} else {\n\t\t\t\t\n\t\t\t\td = d * 2.0 - 1.0;\n\t\t\t\tif (params.orthogonal) {\n\t\t\t\t\td = ((d + (params.camera_z_far + params.camera_z_near) / (params.camera_z_far - params.camera_z_near)) * (params.camera_z_far - params.camera_z_near)) / 2.0;\n\t\t\t\t} else {\n\t\t\t\t\td = 2.0 * params.camera_z_near * params.camera_z_far / (params.camera_z_far + params.camera_z_near - d * (params.camera_z_far - params.camera_z_near));\n\t\t\t\t}\n\t\t\t\tdepth ..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x1200) = 0;
  *(undefined1 (*) [16])(this + 0x11f0) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_11);
  *(undefined ***)(this + 0x1208) = &PTR__ScreenSpaceReflectionShaderRD_00121a08;
  this_12 = (ShaderRD *)(this + 0x1580);
  ShaderRD::setup((char *)this_11,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(rgba16f, set = 0, binding = 0) uniform restrict readonly image2D source_diffuse;\nlayout(r32f, set = 0, binding = 1) uniform restrict readonly image2D source_depth;\nlayout(rgba16f, set = 1, binding = 0) uniform restrict writeonly image2D ssr_image;\n#ifdef MODE_ROUGH\nlayout(r8, set = 1, binding = 1) uniform restrict writeonly image2D blur_radius_image;\n#endif\nlayout(rgba8, set = 2, binding = 0) uniform restrict readonly image2D source_normal_roughness;\nlayout(set = 3, binding = 0) uniform sampler2D source_metallic;\n\nlayout(push_constant, std430) uniform Params {\n\tvec4 proj_info;\n\n\tivec2 screen_size;\n\tfloat camera_z_near;\n\tfloat camera_z_far;\n\n\tint num_steps;\n\tfloat depth_tolerance;\n\tfloat distance_fade;\n\tfloat curve_fade_in;\n\n\tbool orthogonal;\n\tfloat filter_mipmap_levels;\n\tbool use_half_res;\n\tuint view_index;\n}\nparams;\n\nlayout(constant_id = 0) const bool sc_multiview = false;\n\nlayout(set = 4, binding = 0, std140) uniform SceneData {\n\tmat4x4 projection[2];\n\tmat4x4 inv_projection[2];\n\tvec4 eye_offset[2];\n}\nscene_data;\n\nvec3 reconstructCSPosition(vec2 screen_pos, float z) {\n\tif (sc_multiview) {\n\t\tvec4 pos;\n\t\tpos.xy = (2.0 * vec2(screen_pos) / vec2(params.screen_size)) - 1.0;\n\t\tpos.z = z * 2.0 - 1.0;\n\t\tpos.w = 1.0;\n\n\t\tpos = scene_data.inv_projection[params.view_index] * pos;\n\t\tpos.xyz /= pos.w;\n\n\t\treturn pos.xyz;\n\t} else {\n\t\tif (params.orthogonal) {\n\t\t\treturn vec3(-(screen_pos.xy * params.proj_info.xy + params.proj_info.zw), z);\n\t\t} else {\n\t\t\treturn vec3((screen_pos.xy * params.proj_info.xy + params.proj_info.zw) * z, z);\n\t\t}\n\t}\n}\n\nvec2 view_to_screen(vec3 view_pos, out float w) {\n\tvec4 projected = scene_data.projection[params.view_index] * vec4(view_pos, 1.0);\n\tprojected.xyz /= projected.w;\n\tprojected.xy = projected.xy * 0.5 + 0.5;\n\tw = projected.w;\n\treturn projected.xy;\n}\n\n#define M_PI 3.14159265359\n\nvoid main() {\n\t\n\tivec2 ssC = ivec2(gl_GlobalInvocationID.xy);\n\n\tif (any(greaterThanEqual(ssC.xy, params.screen_siz..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined1 (*) [16])(this + 0x1380) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1390) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x13a0) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_09);
  *(undefined ***)(this + 0x13b0) = &PTR__ScreenSpaceReflectionFilterShaderRD_00121a28;
  ShaderRD::setup((char *)this_09,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(rgba16f, set = 0, binding = 0) uniform restrict readonly image2D source_ssr;\nlayout(r8, set = 0, binding = 1) uniform restrict readonly image2D source_radius;\nlayout(rgba8, set = 1, binding = 0) uniform restrict readonly image2D source_normal;\n\nlayout(rgba16f, set = 2, binding = 0) uniform restrict writeonly image2D dest_ssr;\n#ifndef VERTICAL_PASS\nlayout(r8, set = 2, binding = 1) uniform restrict writeonly image2D dest_radius;\n#endif\nlayout(r32f, set = 3, binding = 0) uniform restrict readonly image2D source_depth;\n\nlayout(push_constant, std430) uniform Params {\n\tvec4 proj_info;\n\n\tbool orthogonal;\n\tfloat edge_tolerance;\n\tint increment;\n\tuint view_index;\n\n\tivec2 screen_size;\n\tbool vertical;\n\tuint steps;\n}\nparams;\n\nlayout(constant_id = 0) const bool sc_multiview = false;\n\nlayout(set = 4, binding = 0, std140) uniform SceneData {\n\tmat4x4 projection[2];\n\tmat4x4 inv_projection[2];\n\tvec4 eye_offset[2];\n}\nscene_data;\n\nvec3 reconstructCSPosition(vec2 screen_pos, float z) {\n\tif (sc_multiview) {\n\t\tvec4 pos;\n\t\tpos.xy = (2.0 * vec2(screen_pos) / vec2(params.screen_size)) - 1.0;\n\t\tpos.z = z * 2.0 - 1.0;\n\t\tpos.w = 1.0;\n\n\t\tpos = scene_data.inv_projection[params.view_index] * pos;\n\t\tpos.xyz /= pos.w;\n\n\t\treturn pos.xyz;\n\t} else {\n\t\tif (params.orthogonal) {\n\t\t\treturn vec3(-(screen_pos.xy * params.proj_info.xy + params.proj_info.zw), z);\n\t\t} else {\n\t\t\treturn vec3((screen_pos.xy * params.proj_info.xy + params.proj_info.zw) * z, z);\n\t\t}\n\t}\n}\n\n#define GAUSS_TABLE_SIZE 15\n\nconst float gauss_table[GAUSS_TABLE_SIZE + 1] = float[](\n\t\t0.1847392078702266,\n\t\t0.16595854345772326,\n\t\t0.12031364177766891,\n\t\t0.07038755277896766,\n\t\t0.03322925565155569,\n\t\t0.012657819729901945,\n\t\t0.0038903040680094217,\n\t\t0.0009646503390864025,\n\t\t0.00019297087402915717,\n\t\t0.000031139936308099136,\n\t\t0.000004053309048174758,\n\t\t4.255228059965837e-7,\n\t\t3.602517634249573e-8,\n\t\t2.4592560765896795e-9,\n\t\t1.3534945386863618e-10,\n\t\t0.0 \n);\n\nfloat gauss_weight(float p_val) {..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x1548) = 0;
  *(undefined1 (*) [16])(this + 0x1528) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1538) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_12);
  *(undefined ***)(this + 0x1580) = &PTR__SubsurfaceScatteringShaderRD_00121b88;
  ShaderRD::setup((char *)this_12,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#ifdef USE_25_SAMPLES\nconst int kernel_size = 13;\n\nconst vec2 kernel[kernel_size] = vec2[](\n\t\tvec2(0.530605, 0.0),\n\t\tvec2(0.0211412, 0.0208333),\n\t\tvec2(0.0402784, 0.0833333),\n\t\tvec2(0.0493588, 0.1875),\n\t\tvec2(0.0410172, 0.333333),\n\t\tvec2(0.0263642, 0.520833),\n\t\tvec2(0.017924, 0.75),\n\t\tvec2(0.0128496, 1.02083),\n\t\tvec2(0.0094389, 1.33333),\n\t\tvec2(0.00700976, 1.6875),\n\t\tvec2(0.00500364, 2.08333),\n\t\tvec2(0.00333804, 2.52083),\n\t\tvec2(0.000973794, 3.0));\n\nconst vec4 skin_kernel[kernel_size] = vec4[](\n\t\tvec4(0.530605, 0.613514, 0.739601, 0),\n\t\tvec4(0.0211412, 0.0459286, 0.0378196, 0.0208333),\n\t\tvec4(0.0402784, 0.0657244, 0.04631, 0.0833333),\n\t\tvec4(0.0493588, 0.0367726, 0.0219485, 0.1875),\n\t\tvec4(0.0410172, 0.0199899, 0.0118481, 0.333333),\n\t\tvec4(0.0263642, 0.0119715, 0.00684598, 0.520833),\n\t\tvec4(0.017924, 0.00711691, 0.00347194, 0.75),\n\t\tvec4(0.0128496, 0.00356329, 0.00132016, 1.02083),\n\t\tvec4(0.0094389, 0.00139119, 0.000416598, 1.33333),\n\t\tvec4(0.00700976, 0.00049366, 0.000151938, 1.6875),\n\t\tvec4(0.00500364, 0.00020094, 5.28848e-005, 2.08333),\n\t\tvec4(0.00333804, 7.85443e-005, 1.2945e-005, 2.52083),\n\t\tvec4(0.000973794, 1.11862e-005, 9.43437e-007, 3));\n\n#endif \n\n#ifdef USE_17_SAMPLES\nconst int kernel_size = 9;\nconst vec2 kernel[kernel_size] = vec2[](\n\t\tvec2(0.536343, 0.0),\n\t\tvec2(0.0324462, 0.03125),\n\t\tvec2(0.0582416, 0.125),\n\t\tvec2(0.0571056, 0.28125),\n\t\tvec2(0.0347317, 0.5),\n\t\tvec2(0.0216301, 0.78125),\n\t\tvec2(0.0144609, 1.125),\n\t\tvec2(0.0100386, 1.53125),\n\t\tvec2(0.00317394, 2.0));\n\nconst vec4 skin_kernel[kernel_size] = vec4[](\n\t\tvec4(0.536343, 0.624624, 0.748867, 0),\n\t\tvec4(0.0324462, 0.0656718, 0.0532821, 0.03125),\n\t\tvec4(0.0582416, 0.0659959, 0.0411329, 0.125),\n\t\tvec4(0.0571056, 0.0287432, 0.0172844, 0.28125),\n\t\tvec4(0.0347317, 0.0151085, 0.00871983, 0.5),\n\t\tvec4(0.0216301, 0.00794618, 0.00376991, 0.78125),\n\t\tvec4(0.0144609, 0.00317269, 0.00106399, 1.125),\n\t\tvec4(0.0100386, 0.000914679, 0.000275702, 1.53125),\n\t\tvec4(0..." /* TRUNCATED STRING LITERAL */
                 );
  local_268 = "\n";
  *(undefined1 (*) [16])(this + 0x16f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1708) = (undefined1  [16])0x0;
  local_2a0 = 0;
  local_298 = (char *)0x0;
  uStack_260 = 1;
  singleton = this;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define USE_HALF_SIZE\n";
  uStack_260 = 0x17;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define GENERATE_MIPS\n";
  uStack_260 = 0x17;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define GENERATE_MIPS\n#define USE_HALF_SIZE\n";
  uStack_260 = 0x2d;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define USE_HALF_BUFFERS\n";
  uStack_260 = 0x1a;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define USE_HALF_BUFFERS\n#define USE_HALF_SIZE\n";
  uStack_260 = 0x30;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (undefined *)0x0;
  local_268 = "\n#define GENERATE_MIPS\n#define GENERATE_FULL_MIPS";
  uStack_260 = 0x31;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2b8 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  ShaderRD::initialize((Vector *)this_00,(String *)&local_2a8,(Vector *)&local_2b8);
  lVar16 = local_2b8;
  if (local_2b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2b8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar14 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1d8) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar23 = *(ulong *)(this + 0x1d8);
    uStack_260 = 0;
    if (*(long *)(this + 0x78) == 0) {
      lVar16 = 0;
LAB_00119963:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar14,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011999d:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x78) + -8);
      if (lVar16 <= (long)uVar14) goto LAB_00119963;
      lVar16 = *(long *)(this + 0x88);
      if (lVar16 == 0) goto LAB_00119af0;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar14;
      if (lVar24 <= (long)uVar14) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar14) != '\0') {
        if ((uVar23 == 0) || (*(uint *)(this + 0x134) <= (uint)uVar23)) {
LAB_00119ce0:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_001167a9;
        }
        lVar16 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x130)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x120) +
                          ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x130)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar23 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00119ce0;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_00);
          lVar24 = *(long *)(this + 0xd8);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_00,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_00,iVar26);
              }
              lVar24 = *(long *)(this + 0xd8);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0x98);
        if (lVar25 == 0) {
LAB_00119af0:
          lVar24 = 0;
          uVar12 = uVar14;
        }
        else {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar14 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar14 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_00,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011999d;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar14;
                  if ((long)uVar14 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar14 * 8);
                    goto LAB_001167a9;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119af0;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
        }
        goto LAB_00119b11;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_001167a9:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StringName *)&local_268);
    uVar23 = uStack_260;
    *(undefined8 *)(this + ((long)(int)uVar14 + 0x3e) * 8 + 8) = uVar10;
    if (uStack_260 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_260 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_260 = 0;
        Memory::free_static((void *)(uVar23 - 0x10),false);
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 7);
  uVar10 = RenderingDevice::get_singleton();
  uStack_260 = 0;
  uVar10 = RenderingDevice::uniform_buffer_create(uVar10,0x140,(StringName *)&local_268,0);
  uVar14 = uStack_260;
  *(undefined8 *)(this + 0x1e8) = uVar10;
  if (uStack_260 != 0) {
    LOCK();
    plVar1 = (long *)(uStack_260 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uStack_260 = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  iVar26 = 0;
  pSVar11 = (StringName *)local_188;
  do {
    fVar31 = (float)iVar26 - __LC99;
    pSVar18 = pSVar11;
    pSVar19 = (StringName *)&local_1a8;
    do {
      pSVar20 = pSVar19 + 4;
      local_198 = 2;
      local_1a8 = __LC141;
      uStack_1a0 = _UNK_001360d8;
      iVar9 = *(int *)pSVar19;
      sincosf((float)((double)((float)iVar9 / __LC142 + (float)iVar26) * __LC101 * __LC143),
              &local_2cc,&local_2d0);
      fVar29 = (((float)iVar9 - _LC95._4_4_) / __LC142 + fVar31) * __LC145 + _LC70;
      *(ulong *)pSVar18 = CONCAT44((float)((uint)local_2cc ^ _LC72) * fVar29,local_2d0 * fVar29);
      *(ulong *)(pSVar18 + 8) =
           CONCAT44((uint)(local_2d0 * fVar29) ^ _LC72,(float)((uint)fVar29 ^ _LC72) * local_2cc);
      pSVar18 = pSVar18 + 0x10;
      pSVar19 = pSVar20;
    } while (pSVar20 != local_194);
    iVar26 = iVar26 + 1;
    pSVar11 = pSVar11 + 0x50;
  } while (iVar26 != 4);
  uVar10 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar10,*(undefined8 *)(this + 0x1e8),0,0x140);
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_268,"rendering/environment/ssil/fadeout_to",false);
  ProjectSettings::get_setting_with_override((StringName *)local_188);
  fVar31 = Variant::operator_cast_to_float((Variant *)local_188);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_298,"rendering/environment/ssil/fadeout_from",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_1a8);
  fVar29 = Variant::operator_cast_to_float((Variant *)&local_1a8);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_2a8,"rendering/environment/ssil/blur_passes",false);
  ProjectSettings::get_setting_with_override((StringName *)local_1c8);
  iVar26 = Variant::operator_cast_to_int((Variant *)local_1c8);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_2b8,"rendering/environment/ssil/adaptive_target",false);
  ProjectSettings::get_setting_with_override((StringName *)local_1e8);
  fVar30 = Variant::operator_cast_to_float((Variant *)local_1e8);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_2c0,"rendering/environment/ssil/half_size",false);
  ProjectSettings::get_setting_with_override((StringName *)local_208);
  SVar8 = (SSEffects)Variant::operator_cast_to_bool((Variant *)local_208);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_2c8,"rendering/environment/ssil/quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_228);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_228);
  *(int *)(this + 0x18) = iVar9;
  this[0x1c] = SVar8;
  cVar2 = Variant::needs_deinit[local_228[0]];
  *(int *)(this + 0x24) = iVar26;
  *(ulong *)(this + 0x28) = CONCAT44(fVar31,fVar29);
  *(float *)(this + 0x20) = fVar30;
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_208[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2c0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_1e8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_1c8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2a8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_1a8] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_298 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_188[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_268 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_2a0 = 0;
  local_268 = "\n";
  local_298 = (char *)0x0;
  uStack_260 = 1;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define SSIL_BASE\n";
  uStack_260 = 0x13;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (undefined *)0x0;
  local_268 = "\n#define ADAPTIVE\n";
  uStack_260 = 0x12;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2b8 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  ShaderRD::initialize((Vector *)this_02,(String *)&local_2a8,(Vector *)&local_2b8);
  lVar16 = local_2b8;
  if (local_2b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2b8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar23 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x428) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0x428);
    uStack_260 = 0;
    if (*(long *)(this + 0x2c8) == 0) {
      lVar16 = 0;
LAB_00119bcf:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar23,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_00119c09:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x2c8) + -8);
      if (lVar16 <= (long)uVar23) goto LAB_00119bcf;
      lVar16 = *(long *)(this + 0x2d8);
      if (lVar16 == 0) goto LAB_00119b50;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar23;
      if (lVar24 <= (long)uVar23) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar23) != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 900) <= (uint)uVar14)) {
LAB_0011a1d0:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_0011700a;
        }
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x380)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x370) +
                          ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x380)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011a1d0;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_02);
          lVar24 = *(long *)(this + 0x328);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_02,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_02,iVar26);
              }
              lVar24 = *(long *)(this + 0x328);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0x2e8);
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar23 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar23 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_02,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_00119c09;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar23;
                  if ((long)uVar23 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar23 * 8);
                    goto LAB_0011700a;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119b50;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
          goto LAB_00119b11;
        }
        goto LAB_00119b50;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_0011700a:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StringName *)&local_268);
    uVar14 = uStack_260;
    *(undefined8 *)(this + ((long)(int)uVar23 + 0x11e) * 8 + 8) = uVar10;
    if (uStack_260 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_260 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_260 = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
    uVar23 = uVar23 + 1;
  } while (uVar23 != 3);
  uVar10 = RenderingDevice::get_singleton();
  uStack_260 = 0;
  uVar10 = RenderingDevice::uniform_buffer_create(uVar10,0x40,(StringName *)&local_268,0);
  uVar14 = uStack_260;
  *(undefined8 *)(this + 0x430) = uVar10;
  if (uStack_260 != 0) {
    LOCK();
    plVar1 = (long *)(uStack_260 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uStack_260 = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  local_268 = "\n#define GENERATE_MAP\n";
  local_2a0 = 0;
  local_298 = (char *)0x0;
  uStack_260 = 0x16;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define PROCESS_MAPA\n";
  uStack_260 = 0x16;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (undefined *)0x0;
  local_268 = "\n#define PROCESS_MAPB\n";
  uStack_260 = 0x16;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2b8 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  ShaderRD::initialize((Vector *)this_03,(String *)&local_2a8,(Vector *)&local_2b8);
  lVar16 = local_2b8;
  if (local_2b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2b8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar23 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x5c0) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0x5c0);
    uStack_260 = 0;
    if (*(long *)(this + 0x460) == 0) {
      lVar16 = 0;
LAB_00119e31:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar23,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_00119e6b:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x460) + -8);
      if (lVar16 <= (long)uVar23) goto LAB_00119e31;
      lVar16 = *(long *)(this + 0x470);
      if (lVar16 == 0) goto LAB_00119b50;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar23;
      if (lVar24 <= (long)uVar23) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar23) != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 0x51c) <= (uint)uVar14)) {
LAB_0011a3b8:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_00117428;
        }
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x518)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x508) +
                          ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x518)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            in_R11 = 0;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011a3b8;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_03);
          lVar24 = *(long *)(this + 0x4c0);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_03,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_03,iVar26);
              }
              lVar24 = *(long *)(this + 0x4c0);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0x480);
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar23 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar23 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_03,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_00119e6b;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar23;
                  if ((long)uVar23 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar23 * 8);
                    goto LAB_00117428;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119b50;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
          goto LAB_00119b11;
        }
        goto LAB_00119b50;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_00117428:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StringName *)&local_268);
    uVar14 = uStack_260;
    *(undefined8 *)(this + ((long)((int)uVar23 + 3) + 0x11e) * 8 + 8) = uVar10;
    if (uStack_260 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_260 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_260 = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
    uVar23 = uVar23 + 1;
  } while (uVar23 != 3);
  uVar10 = RenderingDevice::get_singleton();
  uStack_260 = 0;
  uVar10 = RenderingDevice::storage_buffer_create(uVar10,4,(StringName *)&local_268,0,0);
  uVar14 = uStack_260;
  *(undefined8 *)(this + 0x5c8) = uVar10;
  if (uStack_260 != 0) {
    LOCK();
    plVar1 = (long *)(uStack_260 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uStack_260 = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  local_188[0] = 0;
  uVar10 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar10,*(undefined8 *)(this + 0x5c8),0,4);
  uVar10 = RenderingDevice::get_singleton();
  local_298 = (undefined *)0x0;
  uStack_260 = 0x1b;
  local_268 = "Importance Map Load Counter";
  String::parse_latin1((StrRange *)&local_298);
  RenderingDevice::set_resource_name(uVar10,*(undefined8 *)(this + 0x5c8),(StrRange *)&local_298);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_258 = *(undefined8 *)(this + 0x5c8);
  local_290 = 0;
  uStack_260 = uStack_260 & 0xffffffffffffff00;
  local_268 = _LC158;
  local_248 = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_298,(StringName *)&local_268);
  uVar10 = RenderingDevice::get_singleton();
  uVar14 = *(ulong *)(this + 0x5c0);
  if (*(long *)(this + 0x460) != 0) {
    lVar16 = *(long *)(*(long *)(this + 0x460) + -8);
    if (lVar16 < 3) goto LAB_00119f43;
    lVar16 = *(long *)(this + 0x470);
    if (lVar16 != 0) {
      lVar24 = *(long *)(lVar16 + -8);
      if (lVar24 < 3) goto LAB_0011a3f1;
      if (*(char *)(lVar16 + 2) == '\0') {
        in_R9 = (char *)0x0;
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar17 = 0;
        goto LAB_001176dc;
      }
      if ((uVar14 == 0) || (*(uint *)(this + 0x51c) <= (uint)uVar14)) {
LAB_0011a60c:
        in_R9 = (char *)0x0;
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar17 = 0;
        goto LAB_001176dc;
      }
      lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x518)) * 0xa0 +
               *(long *)(*(long *)(this + 0x508) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x518)) * 8);
      if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0011a60c;
      }
      iVar26 = (int)lVar16;
      if (*(char *)(lVar16 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_03);
        lVar24 = *(long *)(this + 0x4c0);
        if (lVar24 != 0) {
          lVar25 = 0;
          do {
            if (*(long *)(lVar24 + -8) <= lVar25) break;
            if (*(char *)(lVar24 + lVar25) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_03,iVar26);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_03,iVar26);
            }
            lVar24 = *(long *)(this + 0x4c0);
            lVar25 = lVar25 + 1;
          } while (lVar24 != 0);
        }
      }
      lVar25 = *(long *)(this + 0x480);
      if (lVar25 == 0) goto LAB_0011a3ee;
      lVar24 = *(long *)(lVar25 + -8);
      if (2 < lVar24) {
        uVar12 = (ulong)*(uint *)(lVar25 + 8);
        lVar25 = *(long *)(lVar16 + 0x68);
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + -8);
          if (lVar24 <= (long)uVar12) goto LAB_00119b11;
          if (*(long *)(lVar25 + uVar12 * 8) != 0) {
            ShaderRD::_compile_version_end((Version *)this_03,iVar26);
          }
          if (*(char *)(lVar16 + 0x90) != '\0') {
            lVar16 = *(long *)(lVar16 + 0x88);
            if (lVar16 == 0) goto LAB_0011a3ee;
            lVar24 = *(long *)(lVar16 + -8);
            if (2 < lVar24) {
              uVar17 = *(undefined8 *)(lVar16 + 0x10);
              goto LAB_001176dc;
            }
            goto LAB_0011a3f1;
          }
          goto LAB_00119f7f;
        }
LAB_00119b78:
        lVar24 = 0;
        goto LAB_00119b11;
      }
      goto LAB_0011a3f1;
    }
LAB_0011a3ee:
    lVar24 = 0;
LAB_0011a3f1:
    uVar12 = 2;
LAB_00119b11:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar24,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar16 = 0;
LAB_00119f43:
  in_R9 = "p_variant";
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar16,
             "p_variant","variant_defines.size()","",false,false);
LAB_00119f7f:
  uVar17 = 0;
LAB_001176dc:
  uVar10 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar10,(StrRange *)&local_298,uVar17,2);
  *(undefined8 *)(this + 0x5d0) = uVar10;
  uVar10 = RenderingDevice::get_singleton();
  local_2b8 = 0;
  uStack_260 = 0x18;
  local_268 = "Load Counter Uniform Set";
  String::parse_latin1((StrRange *)&local_2b8);
  RenderingDevice::set_resource_name(uVar10,*(undefined8 *)(this + 0x5d0),(StrRange *)&local_2b8);
  lVar16 = local_2b8;
  if (local_2b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2b8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  local_268 = "\n#define MODE_NON_SMART\n";
  local_2a0 = 0;
  local_298 = (char *)0x0;
  uStack_260 = 0x18;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define MODE_SMART\n";
  uStack_260 = 0x14;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (undefined *)0x0;
  local_268 = "\n#define MODE_WIDE\n";
  uStack_260 = 0x13;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2b8 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  ShaderRD::initialize((Vector *)this_01,(String *)&local_2a8,(Vector *)&local_2b8);
  lVar16 = local_2b8;
  if (local_2b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2b8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar23 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x760) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0x760);
    uStack_260 = 0;
    if (*(long *)(this + 0x600) == 0) {
      lVar16 = 0;
LAB_00119ef9:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar23,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_00119f33:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x600) + -8);
      if (lVar16 <= (long)uVar23) goto LAB_00119ef9;
      lVar16 = *(long *)(this + 0x610);
      if (lVar16 == 0) goto LAB_00119b50;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar23;
      if (lVar24 <= (long)uVar23) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar23) != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 0x6bc) <= (uint)uVar14)) {
LAB_0011a504:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_00117ae0;
        }
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x6b8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x6a8) +
                          ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x6b8)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011a504;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_01);
          lVar24 = *(long *)(this + 0x660);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_01,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_01,iVar26);
              }
              lVar24 = *(long *)(this + 0x660);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0x620);
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar23 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar23 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_01,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_00119f33;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar23;
                  if ((long)uVar23 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar23 * 8);
                    goto LAB_00117ae0;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119b50;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
          goto LAB_00119b11;
        }
        goto LAB_00119b50;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_00117ae0:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StringName *)&local_268);
    uVar14 = uStack_260;
    *(undefined8 *)(this + ((long)((int)uVar23 + 6) + 0x11e) * 8 + 8) = uVar10;
    if (uStack_260 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_260 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_260 = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
    uVar23 = uVar23 + 1;
  } while (uVar23 != 3);
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  local_268 = "\n#define MODE_NON_SMART\n";
  local_2a0 = 0;
  local_298 = (char *)0x0;
  uStack_260 = 0x18;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (char *)0x0;
  local_268 = "\n#define MODE_SMART\n";
  uStack_260 = 0x14;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (undefined *)0x0;
  local_268 = "\n#define MODE_HALF\n";
  uStack_260 = 0x13;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2b8 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  ShaderRD::initialize((Vector *)this_04,(String *)&local_2a8,(Vector *)&local_2b8);
  lVar16 = local_2b8;
  if (local_2b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2b8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar14 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x8f0) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar23 = *(ulong *)(this + 0x8f0);
    uStack_260 = 0;
    if (*(long *)(this + 0x790) == 0) {
      lVar16 = 0;
LAB_00119f93:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar14,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_00119fcd:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x790) + -8);
      if (lVar16 <= (long)uVar14) goto LAB_00119f93;
      lVar16 = *(long *)(this + 0x7a0);
      uVar12 = uVar14;
      if (lVar16 == 0) goto LAB_0011a48d;
      lVar24 = *(long *)(lVar16 + -8);
      if (lVar24 <= (long)uVar14) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar14) != '\0') {
        if ((uVar23 == 0) || (*(uint *)(this + 0x84c) <= (uint)uVar23)) {
LAB_0011a6a3:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_00117ea4;
        }
        lVar16 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x848)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x838) +
                          ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x848)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar23 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011a6a3;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_04);
          lVar24 = *(long *)(this + 0x7f0);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_04,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_04,iVar26);
              }
              lVar24 = *(long *)(this + 0x7f0);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0x7b0);
        if (lVar25 == 0) {
LAB_0011a48d:
          lVar24 = 0;
          uVar12 = uVar14;
        }
        else {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar14 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar14 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_04,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_00119fcd;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 == 0) goto LAB_0011a48d;
                lVar24 = *(long *)(lVar16 + -8);
                uVar12 = uVar14;
                if ((long)uVar14 < lVar24) {
                  uVar17 = *(undefined8 *)(lVar16 + uVar14 * 8);
                  goto LAB_00117ea4;
                }
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
        }
        goto LAB_00119b11;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_00117ea4:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StringName *)&local_268);
    uVar23 = uStack_260;
    *(undefined8 *)(this + ((long)((int)uVar14 + 9) + 0x11e) * 8 + 8) = uVar10;
    if (uStack_260 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_260 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_260 = 0;
        Memory::free_static((void *)(uVar23 - 0x10),false);
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 3);
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_268,"rendering/environment/ssao/fadeout_to",false);
  ProjectSettings::get_setting_with_override((StringName *)local_188);
  fVar31 = Variant::operator_cast_to_float((Variant *)local_188);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_298,"rendering/environment/ssao/fadeout_from",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_1a8);
  fVar29 = Variant::operator_cast_to_float((Variant *)&local_1a8);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_2a8,"rendering/environment/ssao/blur_passes",false);
  ProjectSettings::get_setting_with_override((StringName *)local_1c8);
  iVar26 = Variant::operator_cast_to_int((Variant *)local_1c8);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_2b8,"rendering/environment/ssao/adaptive_target",false);
  ProjectSettings::get_setting_with_override((StringName *)local_1e8);
  fVar30 = Variant::operator_cast_to_float((Variant *)local_1e8);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_2c0,"rendering/environment/ssao/half_size",false);
  ProjectSettings::get_setting_with_override((StringName *)local_208);
  SVar8 = (SSEffects)Variant::operator_cast_to_bool((Variant *)local_208);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_2c8,"rendering/environment/ssao/quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_228);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_228);
  this[4] = SVar8;
  *(int *)this = iVar9;
  *(int *)(this + 0xc) = iVar26;
  cVar2 = Variant::needs_deinit[local_228[0]];
  *(ulong *)(this + 0x10) = CONCAT44(fVar31,fVar29);
  *(float *)(this + 8) = fVar30;
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_208[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2c0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_1e8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_1c8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2a8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_1a8] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_298 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_188[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_268 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_250 = 0;
  local_24c = 0;
  local_258 = _LC15;
  local_238 = 0x240800000;
  local_298 = "\n";
  local_268 = __LC170;
  uStack_260 = _UNK_001360e8;
  local_248 = CONCAT35(local_248._5_3_,0x3f800000);
  local_240 = 7;
  local_230 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_290 = 1;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define SSAO_BASE\n";
  local_290 = 0x13;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define ADAPTIVE\n";
  local_290 = 0x12;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a0 = 0;
  local_298 = "";
  local_2c0 = 0;
  local_290 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  ShaderRD::initialize((Vector *)this_05,(String *)&local_2b8,(Vector *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar23 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_2a0);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0xb50) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0xb50);
    local_290 = 0;
    if (*(long *)(this + 0x9f0) == 0) {
      lVar16 = 0;
LAB_00119fed:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar23,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011a027:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x9f0) + -8);
      if (lVar16 <= (long)uVar23) goto LAB_00119fed;
      lVar16 = *(long *)(this + 0xa00);
      if (lVar16 == 0) goto LAB_00119b50;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar23;
      if (lVar24 <= (long)uVar23) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar23) != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 0xaac) <= (uint)uVar14)) {
LAB_0011a77d:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_001185b5;
        }
        uVar6 = (uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0xaa8);
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0xaa8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xa98) + uVar6 * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar6);
          }
          goto LAB_0011a77d;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_05);
          lVar24 = *(long *)(this + 0xa50);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_05,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_05,iVar26);
              }
              lVar24 = *(long *)(this + 0xa50);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0xa10);
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar23 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar23 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_05,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011a027;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar23;
                  if ((long)uVar23 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar23 * 8);
                    goto LAB_001185b5;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119b50;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
          goto LAB_00119b11;
        }
        goto LAB_00119b50;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_001185b5:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StrRange *)&local_298);
    uVar14 = local_290;
    *(undefined8 *)(this + ((uVar23 & 0xffffffff) + 0x202) * 8 + 8) = uVar10;
    if (local_290 != 0) {
      LOCK();
      plVar1 = (long *)(local_290 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_290 = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
    uVar23 = uVar23 + 1;
  } while (uVar23 != 3);
  CowData<String>::_unref((CowData<String> *)&local_2b0);
  local_298 = "\n#define GENERATE_MAP\n";
  local_2b0 = 0;
  local_2a8 = 0;
  local_290 = 0x16;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define PROCESS_MAPA\n";
  local_290 = 0x16;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define PROCESS_MAPB\n";
  local_290 = 0x16;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a0 = 0;
  local_298 = "";
  local_2c0 = 0;
  local_290 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  ShaderRD::initialize((Vector *)this_06,(String *)&local_2b8,(Vector *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar23 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_2a0);
  uVar10 = ShaderRD::version_create();
  local_380 = 3;
  *(undefined8 *)(this + 0xce0) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0xce0);
    local_290 = 0;
    if (*(long *)(this + 0xb80) == 0) {
      lVar16 = 0;
LAB_0011a033:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar23,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011a06d:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0xb80) + -8);
      if (lVar16 <= (long)uVar23) goto LAB_0011a033;
      lVar16 = *(long *)(this + 0xb90);
      if (lVar16 == 0) goto LAB_00119b50;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar23;
      if (lVar24 <= (long)uVar23) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar23) != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 0xc3c) <= (uint)uVar14)) {
LAB_0011a857:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_00118984;
        }
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0xc38)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xc28) +
                          ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0xc38)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,in_R11);
          }
          goto LAB_0011a857;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_06);
          lVar24 = *(long *)(this + 0xbe0);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_06,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_06,iVar26);
              }
              lVar24 = *(long *)(this + 0xbe0);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0xba0);
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar23 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar23 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_06,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011a06d;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar23;
                  if ((long)uVar23 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar23 * 8);
                    goto LAB_00118984;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119b50;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
          goto LAB_00119b11;
        }
        goto LAB_00119b50;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_00118984:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StrRange *)&local_298);
    uVar14 = local_290;
    *(undefined8 *)(this + (local_380 + 0x202) * 8 + 8) = uVar10;
    if (local_290 != 0) {
      LOCK();
      plVar1 = (long *)(local_290 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_290 = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
    uVar23 = uVar23 + 1;
    local_380 = (ulong)((int)local_380 + 1);
  } while (uVar23 != 3);
  uVar10 = RenderingDevice::get_singleton();
  local_290 = 0;
  uVar10 = RenderingDevice::storage_buffer_create(uVar10,4,(StrRange *)&local_298,0,0);
  uVar14 = local_290;
  *(undefined8 *)(this + 0xce8) = uVar10;
  if (local_290 != 0) {
    LOCK();
    plVar1 = (long *)(local_290 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_290 = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  local_188[0] = 0;
  uVar10 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar10,*(undefined8 *)(this + 0xce8),0,4);
  uVar10 = RenderingDevice::get_singleton();
  local_2a8 = 0;
  local_290 = 0x1b;
  local_298 = "Importance Map Load Counter";
  String::parse_latin1((StrRange *)&local_2a8);
  RenderingDevice::set_resource_name
            (uVar10,*(undefined8 *)(this + 0xce8),(Vector<String> *)&local_2a8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_288 = *(undefined8 *)(this + 0xce8);
  local_2a0 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = _LC158;
  local_278 = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_2a8,(StrRange *)&local_298);
  uVar10 = RenderingDevice::get_singleton();
  uVar14 = *(ulong *)(this + 0xce0);
  if (*(long *)(this + 0xb80) == 0) {
    lVar16 = 0;
LAB_0011a103:
    in_R9 = "p_variant";
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar16,
               "p_variant","variant_defines.size()","",false,false);
LAB_0011a13f:
    uVar17 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(this + 0xb80) + -8);
    if (lVar16 < 3) goto LAB_0011a103;
    lVar16 = *(long *)(this + 0xb90);
    if (lVar16 == 0) goto LAB_0011a3ee;
    lVar24 = *(long *)(lVar16 + -8);
    if (lVar24 < 3) goto LAB_0011a3f1;
    if (*(char *)(lVar16 + 2) != '\0') {
      if ((uVar14 == 0) || (*(uint *)(this + 0xc3c) <= (uint)uVar14)) {
LAB_0011aa79:
        in_R9 = (char *)0x0;
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar17 = 0;
        goto LAB_00118c6f;
      }
      lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0xc38)) * 0xa0 +
               *(long *)(*(long *)(this + 0xc28) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0xc38)) * 8);
      if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,lVar24);
        }
        goto LAB_0011aa79;
      }
      iVar26 = (int)lVar16;
      if (*(char *)(lVar16 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_06);
        lVar24 = *(long *)(this + 0xbe0);
        if (lVar24 != 0) {
          lVar25 = 0;
          do {
            if (*(long *)(lVar24 + -8) <= lVar25) break;
            if (*(char *)(lVar24 + lVar25) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_06,iVar26);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_06,iVar26);
            }
            lVar24 = *(long *)(this + 0xbe0);
            lVar25 = lVar25 + 1;
          } while (lVar24 != 0);
        }
      }
      lVar25 = *(long *)(this + 0xba0);
      if (lVar25 == 0) goto LAB_0011a3ee;
      lVar24 = *(long *)(lVar25 + -8);
      if (lVar24 < 3) goto LAB_0011a3f1;
      uVar12 = (ulong)*(uint *)(lVar25 + 8);
      lVar25 = *(long *)(lVar16 + 0x68);
      if (lVar25 == 0) goto LAB_00119b78;
      lVar24 = *(long *)(lVar25 + -8);
      if (lVar24 <= (long)uVar12) goto LAB_00119b11;
      if (*(long *)(lVar25 + uVar12 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_06,iVar26);
      }
      if (*(char *)(lVar16 + 0x90) != '\0') {
        lVar16 = *(long *)(lVar16 + 0x88);
        if (lVar16 == 0) goto LAB_0011a3ee;
        lVar24 = *(long *)(lVar16 + -8);
        if (2 < lVar24) {
          uVar17 = *(undefined8 *)(lVar16 + 0x10);
          goto LAB_00118c6f;
        }
        goto LAB_0011a3f1;
      }
      goto LAB_0011a13f;
    }
    in_R9 = (char *)0x0;
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
    uVar17 = 0;
  }
LAB_00118c6f:
  uVar10 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar10,(Vector<String> *)&local_2a8,uVar17,2);
  *(undefined8 *)(this + 0xcf0) = uVar10;
  uVar10 = RenderingDevice::get_singleton();
  local_2c0 = 0;
  local_290 = 0x18;
  local_298 = "Load Counter Uniform Set";
  String::parse_latin1((StrRange *)&local_2c0);
  RenderingDevice::set_resource_name(uVar10,*(undefined8 *)(this + 0xcf0),(StringName *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_2a0);
  CowData<String>::_unref((CowData<String> *)&local_2b0);
  local_298 = "\n#define MODE_NON_SMART\n";
  local_2b0 = 0;
  local_2a8 = 0;
  local_290 = 0x18;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define MODE_SMART\n";
  local_290 = 0x14;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define MODE_WIDE\n";
  local_290 = 0x13;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a0 = 0;
  local_298 = "";
  local_2c0 = 0;
  local_290 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  ShaderRD::initialize((Vector *)this_07,(String *)&local_2b8,(Vector *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar14 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_2a0);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0xe80) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar23 = *(ulong *)(this + 0xe80);
    local_290 = 0;
    if (*(long *)(this + 0xd20) == 0) {
      lVar16 = 0;
LAB_0011a07b:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar14,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011a0b5:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0xd20) + -8);
      if (lVar16 <= (long)uVar14) goto LAB_0011a07b;
      lVar16 = *(long *)(this + 0xd30);
      uVar12 = uVar14;
      if (lVar16 == 0) goto LAB_0011a90f;
      lVar24 = *(long *)(lVar16 + -8);
      if (lVar24 <= (long)uVar14) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar14) != '\0') {
        if ((uVar23 == 0) || (*(uint *)(this + 0xddc) <= (uint)uVar23)) {
LAB_0011aae1:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_0011906c;
        }
        lVar16 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0xdd8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xdc8) +
                          ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0xdd8)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar23 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar23 >> 0x20);
          }
          goto LAB_0011aae1;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_07);
          lVar24 = *(long *)(this + 0xd80);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_07,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_07,iVar26);
              }
              lVar24 = *(long *)(this + 0xd80);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0xd40);
        if (lVar25 == 0) {
LAB_0011a90f:
          lVar24 = 0;
          uVar12 = uVar14;
        }
        else {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar14 < lVar24) {
            lVar3 = *(long *)(lVar16 + 0x68);
            uVar12 = (ulong)*(uint *)(lVar25 + uVar14 * 4);
            if (lVar3 == 0) {
              lVar24 = 0;
            }
            else {
              lVar24 = *(long *)(lVar3 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar3 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_07,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011a0b5;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 == 0) goto LAB_0011a90f;
                lVar24 = *(long *)(lVar16 + -8);
                uVar12 = uVar14;
                if ((long)uVar14 < lVar24) {
                  uVar17 = *(undefined8 *)(lVar16 + uVar14 * 8);
                  goto LAB_0011906c;
                }
              }
            }
          }
        }
        goto LAB_00119b11;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_0011906c:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StrRange *)&local_298);
    uVar23 = local_290;
    *(undefined8 *)(this + (local_380 + 0x202) * 8 + 8) = uVar10;
    if (local_290 != 0) {
      LOCK();
      plVar1 = (long *)(local_290 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_290 = 0;
        Memory::free_static((void *)(uVar23 - 0x10),false);
      }
    }
    uVar14 = uVar14 + 1;
    local_380 = (ulong)((int)local_380 + 1);
  } while (uVar14 != 3);
  CowData<String>::_unref((CowData<String> *)&local_2b0);
  local_298 = "\n#define MODE_NON_SMART\n";
  local_2b0 = 0;
  local_2a8 = 0;
  local_290 = 0x18;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define MODE_SMART\n";
  local_290 = 0x14;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a8 = 0;
  local_298 = "\n#define MODE_HALF\n";
  local_290 = 0x13;
  String::parse_latin1((StrRange *)&local_2a8);
  Vector<String>::push_back((Vector<String> *)&local_2b8);
  lVar16 = local_2a8;
  if (local_2a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_2a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2a8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_2a0 = 0;
  local_298 = "";
  local_2c0 = 0;
  local_290 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  ShaderRD::initialize((Vector *)this_08,(String *)&local_2b8,(Vector *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar23 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_2a0);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1010) = uVar10;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0x1010);
    local_290 = 0;
    if (*(long *)(this + 0xeb0) == 0) {
      lVar16 = 0;
LAB_0011a0bf:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar23,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011a0f9:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0xeb0) + -8);
      if (lVar16 <= (long)uVar23) goto LAB_0011a0bf;
      lVar16 = *(long *)(this + 0xec0);
      if (lVar16 == 0) goto LAB_00119b50;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar23;
      if (lVar24 <= (long)uVar23) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar23) != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 0xf6c) <= (uint)uVar14)) {
LAB_0011ba34:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_0011942b;
        }
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0xf68)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xf58) +
                          ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0xf68)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,lVar16);
          }
          goto LAB_0011ba34;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_08);
          lVar24 = *(long *)(this + 0xf10);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_08,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_08,iVar26);
              }
              lVar24 = *(long *)(this + 0xf10);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0xed0);
        if (lVar25 == 0) {
LAB_00119b50:
          lVar24 = 0;
          uVar12 = uVar23;
        }
        else {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar23 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar23 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_08,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011a0f9;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar23;
                  if ((long)uVar23 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar23 * 8);
                    goto LAB_0011942b;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119b50;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
        }
        goto LAB_00119b11;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_0011942b:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StrRange *)&local_298);
    uVar14 = local_290;
    *(undefined8 *)(this + (local_380 + 0x202) * 8 + 8) = uVar10;
    if (local_290 != 0) {
      LOCK();
      plVar1 = (long *)(local_290 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_290 = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
    uVar10 = RenderingDevice::get_singleton();
    itos((long)&local_298);
    operator+((char *)&local_2a8,(String *)"Interleave Pipeline ");
    RenderingDevice::set_resource_name
              (uVar10,*(undefined8 *)(this + local_380 * 8 + 0x1018),(Vector<String> *)&local_2a8);
    lVar16 = local_2a8;
    if (local_2a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_2a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_2a8 = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
    pcVar4 = local_298;
    if (local_298 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_298 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_298 = (undefined *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    uVar23 = uVar23 + 1;
    uVar15 = (int)local_380 + 1;
    local_380 = (ulong)uVar15;
  } while (uVar23 != 3);
  CowData<String>::_unref((CowData<String> *)&local_2b0);
  if (uVar15 != 0xc) {
    _err_print_error("SSEffects","servers/rendering/renderer_rd/effects/ss_effects.cpp",0x113,
                     "Condition \"pipeline != SSAO_MAX\" is true.",0,0);
LAB_0011b81e:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
  uVar10 = RenderingDevice::sampler_create(pSVar13);
  *(undefined8 *)(this + 0x1f0) = uVar10;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_268,
             "rendering/environment/screen_space_reflection/roughness_quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_188);
  iVar26 = Variant::operator_cast_to_int((Variant *)local_188);
  *(int *)(this + 0x30) = iVar26;
  if (Variant::needs_deinit[local_188[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_268 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_2b0 = 0;
  iVar26 = CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>
                     ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_2b0,
                      1);
  if (iVar26 == 0) {
    if (local_2b0 == 0) {
      lVar24 = -1;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(local_2b0 + -8);
      lVar24 = lVar16 + -1;
      if (-1 < lVar24) {
        CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_2b0);
        puVar21 = (undefined8 *)(local_2b0 + lVar24 * 0xc);
        *puVar21 = 0;
        *(undefined4 *)(puVar21 + 1) = 0;
        goto LAB_00119645;
      }
    }
    in_R9 = "p_index";
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar16,"p_index","size()","",false,
               false);
  }
  else {
    in_R9 = (char *)0x0;
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true");
  }
LAB_00119645:
  local_2a0 = 0;
  local_268 = "\n";
  local_298 = (undefined *)0x0;
  uStack_260 = 1;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2c0 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  ShaderRD::initialize((Vector *)this_10,(String *)&local_2a8,(Vector *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  iVar26 = 0;
  *(undefined8 *)(this + 0x11f0) = uVar10;
  do {
    CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
              ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_2b0);
    local_380._0_1_ = (char)iVar26;
    *(char *)(local_2b0 + 8) = -(char)local_380;
    *(byte *)(local_2b0 + 8) = *(byte *)(local_2b0 + 8) & 1;
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0x11f0);
    if (*(long *)(this + 0x1090) == 0) {
      lVar16 = 0;
LAB_0011a149:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar16,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0011a182:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x1090) + -8);
      if (lVar16 < 1) goto LAB_0011a149;
      pcVar4 = *(char **)(this + 0x10a0);
      if (pcVar4 == (char *)0x0) goto LAB_0011bbe1;
      lVar24 = *(long *)(pcVar4 + -8);
      if (lVar24 < 1) goto LAB_0011bbe4;
      if (*pcVar4 != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 0x114c) <= (uint)uVar14)) {
LAB_0011bb53:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_001198b2;
        }
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x1148)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x1138) +
                          ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x1148)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,in_R9);
          }
          goto LAB_0011bb53;
        }
        iVar9 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_10);
          lVar24 = *(long *)(this + 0x10f0);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_10,iVar9);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_10,iVar9);
              }
              lVar24 = *(long *)(this + 0x10f0);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        puVar5 = *(uint **)(this + 0x10b0);
        if (puVar5 != (uint *)0x0) {
          lVar24 = *(long *)(puVar5 + -2);
          if (lVar24 < 1) goto LAB_0011bbe4;
          uVar12 = (ulong)*puVar5;
          lVar25 = *(long *)(lVar16 + 0x68);
          if (lVar25 != 0) {
            lVar24 = *(long *)(lVar25 + -8);
            if ((long)uVar12 < lVar24) {
              if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                ShaderRD::_compile_version_end((Version *)this_10,iVar9);
              }
              if (*(char *)(lVar16 + 0x90) != '\0') {
                puVar21 = *(undefined8 **)(lVar16 + 0x88);
                if (puVar21 == (undefined8 *)0x0) goto LAB_0011bbe1;
                lVar24 = puVar21[-1];
                if (0 < lVar24) {
                  uVar17 = *puVar21;
                  goto LAB_001198b2;
                }
                goto LAB_0011bbe4;
              }
              goto LAB_0011a182;
            }
            goto LAB_00119b11;
          }
          goto LAB_00119b78;
        }
LAB_0011bbe1:
        lVar24 = 0;
LAB_0011bbe4:
        uVar12 = 0;
        goto LAB_00119b11;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_001198b2:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StrRange *)&local_2b8);
    *(undefined8 *)(this + ((long)iVar26 + 0x23e) * 8 + 8) = uVar10;
    if (iVar26 != 0) break;
    iVar26 = 1;
  } while( true );
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  local_268 = "\n";
  local_2a0 = 0;
  local_298 = (char *)0x0;
  uStack_260 = 1;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (undefined *)0x0;
  local_268 = "\n#define MODE_ROUGH\n";
  uStack_260 = 0x14;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2c0 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  ShaderRD::initialize((Vector *)this_11,(String *)&local_2a8,(Vector *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1380) = uVar10;
  iVar9 = 0;
LAB_0011adad:
  iVar22 = iVar9;
  uVar23 = 0;
  CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
            ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_2b0);
  *(char *)(local_2b0 + 8) = -(char)iVar22;
  *(byte *)(local_2b0 + 8) = *(byte *)(local_2b0 + 8) & 1;
  do {
    uVar10 = RenderingDevice::get_singleton();
    uVar14 = *(ulong *)(this + 0x1380);
    if (*(long *)(this + 0x1220) == 0) {
      lVar16 = 0;
LAB_0011af3a:
      in_R9 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar23,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011af74:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x1220) + -8);
      if (lVar16 <= (long)uVar23) goto LAB_0011af3a;
      lVar16 = *(long *)(this + 0x1230);
      if (lVar16 == 0) goto LAB_00119b50;
      lVar24 = *(long *)(lVar16 + -8);
      uVar12 = uVar23;
      if (lVar24 <= (long)uVar23) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar23) != '\0') {
        if ((uVar14 == 0) || (*(uint *)(this + 0x12dc) <= (uint)uVar14)) {
LAB_0011bc42:
          in_R9 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar17 = 0;
          goto LAB_0011af06;
        }
        uVar6 = (uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x12d8);
        lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x12d8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x12c8) + uVar6 * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
          if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar6);
          }
          goto LAB_0011bc42;
        }
        iVar9 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_11);
          lVar24 = *(long *)(this + 0x1280);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_11,iVar9);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_11,iVar9);
              }
              lVar24 = *(long *)(this + 0x1280);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0x1240);
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar23 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar23 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_11,iVar9);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011af74;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 != 0) {
                  lVar24 = *(long *)(lVar16 + -8);
                  uVar12 = uVar23;
                  if ((long)uVar23 < lVar24) {
                    uVar17 = *(undefined8 *)(lVar16 + uVar23 * 8);
                    goto LAB_0011af06;
                  }
                  goto LAB_00119b11;
                }
                goto LAB_00119b50;
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
          goto LAB_00119b11;
        }
        goto LAB_00119b50;
      }
      in_R9 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar17 = 0;
    }
LAB_0011af06:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StrRange *)&local_2b8);
    *(undefined8 *)(this + ((long)(int)uVar23 + 0x270 + (long)iVar22 * 2) * 8 + 8) = uVar10;
    if (uVar23 != 0) break;
    uVar23 = 1;
  } while( true );
  iVar9 = iVar26;
  if (iVar22 != 0) goto LAB_0011af99;
  goto LAB_0011adad;
LAB_0011af99:
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  local_268 = "\n";
  local_2a0 = 0;
  local_298 = (char *)0x0;
  uStack_260 = 1;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  local_298 = (undefined *)0x0;
  local_268 = "\n#define VERTICAL_PASS\n";
  uStack_260 = 0x17;
  String::parse_latin1((StrRange *)&local_298);
  Vector<String>::push_back((Vector<String> *)&local_2a8);
  pcVar4 = local_298;
  if (local_298 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_298 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_298 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  local_290 = 0;
  local_268 = "";
  local_2c0 = 0;
  uStack_260 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  ShaderRD::initialize((Vector *)this_09,(String *)&local_2a8,(Vector *)&local_2c0);
  lVar16 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_2c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_290);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1528) = uVar10;
  iVar26 = 0;
  do {
    CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
              ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_2b0);
    *(char *)(local_2b0 + 8) = -(char)iVar26;
    *(byte *)(local_2b0 + 8) = *(byte *)(local_2b0 + 8) & 1;
    uVar14 = 0;
    do {
      uVar10 = RenderingDevice::get_singleton();
      uVar6 = *(ulong *)(this + 0x1528);
      if (*(long *)(this + 0x13c8) == 0) {
        lVar16 = 0;
LAB_0011b317:
        in_R9 = "p_variant";
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar14,
                   lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011b351:
        uVar17 = 0;
      }
      else {
        lVar16 = *(long *)(*(long *)(this + 0x13c8) + -8);
        if (lVar16 <= (long)uVar14) goto LAB_0011b317;
        lVar16 = *(long *)(this + 0x13d8);
        if (lVar16 == 0) goto LAB_00119af0;
        lVar24 = *(long *)(lVar16 + -8);
        uVar12 = uVar14;
        if (lVar24 <= (long)uVar14) goto LAB_00119b11;
        if (*(char *)(lVar16 + uVar14) != '\0') {
          if ((uVar6 == 0) || (*(uint *)(this + 0x1484) <= (uint)uVar6)) {
LAB_0011b3d0:
            in_R9 = (char *)0x0;
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.");
            uVar17 = 0;
            goto LAB_0011b2a6;
          }
          lVar16 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x1480)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x1470) +
                            ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x1480)) * 8);
          if (*(int *)(lVar16 + 0x98) != (int)(uVar6 >> 0x20)) {
            if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,in_R9);
            }
            goto LAB_0011b3d0;
          }
          iVar9 = (int)lVar16;
          if (*(char *)(lVar16 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_09);
            lVar24 = *(long *)(this + 0x1428);
            if (lVar24 != 0) {
              lVar25 = 0;
              do {
                if (*(long *)(lVar24 + -8) <= lVar25) break;
                if (*(char *)(lVar24 + lVar25) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_09,iVar9);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_09,iVar9);
                }
                lVar24 = *(long *)(this + 0x1428);
                lVar25 = lVar25 + 1;
              } while (lVar24 != 0);
            }
          }
          lVar25 = *(long *)(this + 0x13e8);
          if (lVar25 != 0) {
            lVar24 = *(long *)(lVar25 + -8);
            if ((long)uVar14 < lVar24) {
              uVar12 = (ulong)*(uint *)(lVar25 + uVar14 * 4);
              lVar25 = *(long *)(lVar16 + 0x68);
              if (lVar25 != 0) {
                lVar24 = *(long *)(lVar25 + -8);
                if ((long)uVar12 < lVar24) {
                  if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                    ShaderRD::_compile_version_end((Version *)this_09,iVar9);
                  }
                  if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011b351;
                  lVar16 = *(long *)(lVar16 + 0x88);
                  if (lVar16 != 0) {
                    lVar24 = *(long *)(lVar16 + -8);
                    uVar12 = uVar14;
                    if ((long)uVar14 < lVar24) {
                      uVar17 = *(undefined8 *)(lVar16 + uVar14 * 8);
                      goto LAB_0011b2a6;
                    }
                    goto LAB_00119b11;
                  }
                  goto LAB_00119af0;
                }
                goto LAB_00119b11;
              }
              goto LAB_00119b78;
            }
            goto LAB_00119b11;
          }
          goto LAB_00119af0;
        }
        in_R9 = (char *)0x0;
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar17 = 0;
      }
LAB_0011b2a6:
      uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StrRange *)&local_2b8);
      *(undefined8 *)(this + ((long)(int)uVar14 + 0x2a6 + (long)iVar26 * 2) * 8) = uVar10;
      bVar27 = uVar14 == 0;
      uVar14 = uVar23;
    } while (bVar27);
    bVar27 = iVar26 == 0;
    iVar26 = iVar22;
  } while (bVar27);
  CowData<String>::_unref((CowData<String> *)&local_2a0);
  CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_unref
            ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_2b0);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_268,
             "rendering/environment/subsurface_scattering/subsurface_scattering_quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_188);
  iVar26 = Variant::operator_cast_to_int((Variant *)local_188);
  *(int *)(this + 0x34) = iVar26;
  if (Variant::needs_deinit[local_188[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_268 != (undefined *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_268,
             "rendering/environment/subsurface_scattering/subsurface_scattering_scale",false);
  ProjectSettings::get_setting_with_override((StringName *)local_188);
  fVar31 = Variant::operator_cast_to_float((Variant *)local_188);
  *(float *)(this + 0x38) = fVar31;
  if (Variant::needs_deinit[local_188[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_268 != (undefined *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_268,
             "rendering/environment/subsurface_scattering/subsurface_scattering_depth_scale",false);
  ProjectSettings::get_setting_with_override((StringName *)local_188);
  fVar31 = Variant::operator_cast_to_float((Variant *)local_188);
  *(float *)(this + 0x3c) = fVar31;
  if (Variant::needs_deinit[local_188[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_268 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_290 = 0;
  String::String((String *)&local_268,"\n#define USE_11_SAMPLES\n");
  Vector<String>::push_back((Vector<String> *)&local_298,(StringName *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  String::String((String *)&local_268,"\n#define USE_17_SAMPLES\n");
  Vector<String>::push_back((Vector<String> *)&local_298,(StringName *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  String::String((String *)&local_268,"\n#define USE_25_SAMPLES\n");
  Vector<String>::push_back((Vector<String> *)&local_298,(StringName *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  uStack_260 = 0;
  String::String((String *)&local_2a8,"");
  ShaderRD::initialize((Vector *)this_12,(String *)&local_298,(Vector *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_260);
  uVar10 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x16f8) = uVar10;
  for (uVar14 = 0; (local_290 != 0 && ((long)uVar14 < *(long *)(local_290 - 8)));
      uVar14 = uVar14 + 1) {
    uVar10 = RenderingDevice::get_singleton();
    uVar23 = *(ulong *)(this + 0x16f8);
    uStack_260 = 0;
    if (*(long *)(this + 0x1598) == 0) {
      lVar16 = 0;
LAB_0011b858:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar14,
                 lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_0011b892:
      uVar17 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x1598) + -8);
      if (lVar16 <= (long)uVar14) goto LAB_0011b858;
      lVar16 = *(long *)(this + 0x15a8);
      uVar12 = uVar14;
      if (lVar16 == 0) goto LAB_0011b9af;
      lVar24 = *(long *)(lVar16 + -8);
      if (lVar24 <= (long)uVar14) goto LAB_00119b11;
      if (*(char *)(lVar16 + uVar14) != '\0') {
        if ((uVar23 == 0) || (*(uint *)(this + 0x1654) <= (uint)uVar23)) {
LAB_0011b927:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar17 = 0;
          goto LAB_0011b7b2;
        }
        lVar16 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x1650)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x1640) +
                          ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x1650)) * 8);
        if (*(int *)(lVar16 + 0x98) != (int)(uVar23 >> 0x20)) {
          uVar15 = *(int *)(lVar16 + 0x98) + 0x80000000;
          if (uVar15 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar15);
          }
          goto LAB_0011b927;
        }
        iVar26 = (int)lVar16;
        if (*(char *)(lVar16 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_12);
          lVar24 = *(long *)(this + 0x15f8);
          if (lVar24 != 0) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar25) break;
              if (*(char *)(lVar24 + lVar25) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_12,iVar26);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_12,iVar26);
              }
              lVar24 = *(long *)(this + 0x15f8);
              lVar25 = lVar25 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar25 = *(long *)(this + 0x15b8);
        if (lVar25 == 0) {
LAB_0011b9af:
          lVar24 = 0;
          uVar12 = uVar14;
        }
        else {
          lVar24 = *(long *)(lVar25 + -8);
          if ((long)uVar14 < lVar24) {
            uVar12 = (ulong)*(uint *)(lVar25 + uVar14 * 4);
            lVar25 = *(long *)(lVar16 + 0x68);
            if (lVar25 != 0) {
              lVar24 = *(long *)(lVar25 + -8);
              if ((long)uVar12 < lVar24) {
                if (*(long *)(lVar25 + uVar12 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_12,iVar26);
                }
                if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0011b892;
                lVar16 = *(long *)(lVar16 + 0x88);
                if (lVar16 == 0) goto LAB_0011b9af;
                lVar24 = *(long *)(lVar16 + -8);
                uVar12 = uVar14;
                if ((long)uVar14 < lVar24) {
                  uVar17 = *(undefined8 *)(lVar16 + uVar14 * 8);
                  goto LAB_0011b7b2;
                }
              }
              goto LAB_00119b11;
            }
            goto LAB_00119b78;
          }
        }
        goto LAB_00119b11;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar17 = 0;
    }
LAB_0011b7b2:
    uVar10 = RenderingDevice::compute_pipeline_create(uVar10,uVar17,(StringName *)&local_268);
    uVar23 = uStack_260;
    *(undefined8 *)(this + ((long)(int)uVar14 + 0x2e0) * 8) = uVar10;
    if (uStack_260 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_260 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_260 = 0;
        Memory::free_static((void *)(uVar23 - 0x10),false);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_290);
  goto LAB_0011b81e;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* LocalVector<RenderingDevice::Uniform, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector
          (LocalVector<RenderingDevice::Uniform,unsigned_int,false,false> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  if (*(int *)this != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)((long)pvVar4 + lVar3 * 0x28 + 0x20);
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)((long)pvVar4 + lVar3 * 0x28 + 0x20);
          *(undefined8 *)((long)pvVar4 + lVar3 * 0x28 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
        pvVar4 = *(void **)(this + 8);
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)this);
    *(undefined4 *)this = 0;
    if (pvVar4 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar4,false);
  return;
}



/* SsEffectsDownsampleShaderRD::~SsEffectsDownsampleShaderRD() */

void __thiscall
SsEffectsDownsampleShaderRD::~SsEffectsDownsampleShaderRD(SsEffectsDownsampleShaderRD *this)

{
  *(undefined ***)this = &PTR__SsEffectsDownsampleShaderRD_00121a68;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsEffectsDownsampleShaderRD::~SsEffectsDownsampleShaderRD() */

void __thiscall
SsEffectsDownsampleShaderRD::~SsEffectsDownsampleShaderRD(SsEffectsDownsampleShaderRD *this)

{
  *(undefined ***)this = &PTR__SsEffectsDownsampleShaderRD_00121a68;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsilShaderRD::~SsilShaderRD() */

void __thiscall SsilShaderRD::~SsilShaderRD(SsilShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilShaderRD_00121b08;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsilShaderRD::~SsilShaderRD() */

void __thiscall SsilShaderRD::~SsilShaderRD(SsilShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilShaderRD_00121b08;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsilImportanceMapShaderRD::~SsilImportanceMapShaderRD() */

void __thiscall
SsilImportanceMapShaderRD::~SsilImportanceMapShaderRD(SsilImportanceMapShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilImportanceMapShaderRD_00121b48;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsilImportanceMapShaderRD::~SsilImportanceMapShaderRD() */

void __thiscall
SsilImportanceMapShaderRD::~SsilImportanceMapShaderRD(SsilImportanceMapShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilImportanceMapShaderRD_00121b48;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsilBlurShaderRD::~SsilBlurShaderRD() */

void __thiscall SsilBlurShaderRD::~SsilBlurShaderRD(SsilBlurShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilBlurShaderRD_00121b28;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsilBlurShaderRD::~SsilBlurShaderRD() */

void __thiscall SsilBlurShaderRD::~SsilBlurShaderRD(SsilBlurShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilBlurShaderRD_00121b28;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsilInterleaveShaderRD::~SsilInterleaveShaderRD() */

void __thiscall SsilInterleaveShaderRD::~SsilInterleaveShaderRD(SsilInterleaveShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilInterleaveShaderRD_00121b68;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsilInterleaveShaderRD::~SsilInterleaveShaderRD() */

void __thiscall SsilInterleaveShaderRD::~SsilInterleaveShaderRD(SsilInterleaveShaderRD *this)

{
  *(undefined ***)this = &PTR__SsilInterleaveShaderRD_00121b68;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsaoShaderRD::~SsaoShaderRD() */

void __thiscall SsaoShaderRD::~SsaoShaderRD(SsaoShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoShaderRD_00121a88;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsaoShaderRD::~SsaoShaderRD() */

void __thiscall SsaoShaderRD::~SsaoShaderRD(SsaoShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoShaderRD_00121a88;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsaoImportanceMapShaderRD::~SsaoImportanceMapShaderRD() */

void __thiscall
SsaoImportanceMapShaderRD::~SsaoImportanceMapShaderRD(SsaoImportanceMapShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoImportanceMapShaderRD_00121ac8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsaoImportanceMapShaderRD::~SsaoImportanceMapShaderRD() */

void __thiscall
SsaoImportanceMapShaderRD::~SsaoImportanceMapShaderRD(SsaoImportanceMapShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoImportanceMapShaderRD_00121ac8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsaoBlurShaderRD::~SsaoBlurShaderRD() */

void __thiscall SsaoBlurShaderRD::~SsaoBlurShaderRD(SsaoBlurShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoBlurShaderRD_00121aa8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsaoBlurShaderRD::~SsaoBlurShaderRD() */

void __thiscall SsaoBlurShaderRD::~SsaoBlurShaderRD(SsaoBlurShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoBlurShaderRD_00121aa8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SsaoInterleaveShaderRD::~SsaoInterleaveShaderRD() */

void __thiscall SsaoInterleaveShaderRD::~SsaoInterleaveShaderRD(SsaoInterleaveShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoInterleaveShaderRD_00121ae8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SsaoInterleaveShaderRD::~SsaoInterleaveShaderRD() */

void __thiscall SsaoInterleaveShaderRD::~SsaoInterleaveShaderRD(SsaoInterleaveShaderRD *this)

{
  *(undefined ***)this = &PTR__SsaoInterleaveShaderRD_00121ae8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* ScreenSpaceReflectionScaleShaderRD::~ScreenSpaceReflectionScaleShaderRD() */

void __thiscall
ScreenSpaceReflectionScaleShaderRD::~ScreenSpaceReflectionScaleShaderRD
          (ScreenSpaceReflectionScaleShaderRD *this)

{
  *(undefined ***)this = &PTR__ScreenSpaceReflectionScaleShaderRD_00121a48;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ScreenSpaceReflectionScaleShaderRD::~ScreenSpaceReflectionScaleShaderRD() */

void __thiscall
ScreenSpaceReflectionScaleShaderRD::~ScreenSpaceReflectionScaleShaderRD
          (ScreenSpaceReflectionScaleShaderRD *this)

{
  *(undefined ***)this = &PTR__ScreenSpaceReflectionScaleShaderRD_00121a48;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* ScreenSpaceReflectionShaderRD::~ScreenSpaceReflectionShaderRD() */

void __thiscall
ScreenSpaceReflectionShaderRD::~ScreenSpaceReflectionShaderRD(ScreenSpaceReflectionShaderRD *this)

{
  *(undefined ***)this = &PTR__ScreenSpaceReflectionShaderRD_00121a08;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ScreenSpaceReflectionShaderRD::~ScreenSpaceReflectionShaderRD() */

void __thiscall
ScreenSpaceReflectionShaderRD::~ScreenSpaceReflectionShaderRD(ScreenSpaceReflectionShaderRD *this)

{
  *(undefined ***)this = &PTR__ScreenSpaceReflectionShaderRD_00121a08;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* ScreenSpaceReflectionFilterShaderRD::~ScreenSpaceReflectionFilterShaderRD() */

void __thiscall
ScreenSpaceReflectionFilterShaderRD::~ScreenSpaceReflectionFilterShaderRD
          (ScreenSpaceReflectionFilterShaderRD *this)

{
  *(undefined ***)this = &PTR__ScreenSpaceReflectionFilterShaderRD_00121a28;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ScreenSpaceReflectionFilterShaderRD::~ScreenSpaceReflectionFilterShaderRD() */

void __thiscall
ScreenSpaceReflectionFilterShaderRD::~ScreenSpaceReflectionFilterShaderRD
          (ScreenSpaceReflectionFilterShaderRD *this)

{
  *(undefined ***)this = &PTR__ScreenSpaceReflectionFilterShaderRD_00121a28;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SubsurfaceScatteringShaderRD::~SubsurfaceScatteringShaderRD() */

void __thiscall
SubsurfaceScatteringShaderRD::~SubsurfaceScatteringShaderRD(SubsurfaceScatteringShaderRD *this)

{
  *(undefined ***)this = &PTR__SubsurfaceScatteringShaderRD_00121b88;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SubsurfaceScatteringShaderRD::~SubsurfaceScatteringShaderRD() */

void __thiscall
SubsurfaceScatteringShaderRD::~SubsurfaceScatteringShaderRD(SubsurfaceScatteringShaderRD *this)

{
  *(undefined ***)this = &PTR__SubsurfaceScatteringShaderRD_00121b88;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write(void)

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



/* String::String(char const*) */

void __thiscall String::String(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  ::String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* RID UniformSetCacheRD::_allocate_from_uniforms<LocalVector<RenderingDevice::Uniform, unsigned
   int, false, false> >(RID, unsigned int, unsigned int, unsigned int,
   LocalVector<RenderingDevice::Uniform, unsigned int, false, false> const&) */

long __thiscall
UniformSetCacheRD::
_allocate_from_uniforms<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>
          (UniformSetCacheRD *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          uint param_5,uint *param_6)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  uVar9 = RenderingDevice::get_singleton();
  lVar10 = RenderingDevice::
           uniform_set_create<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>
                     (uVar9,param_6,param_2,param_3,0);
  if (lVar10 == 0) {
    _err_print_error("_allocate_from_uniforms",
                     "./servers/rendering/renderer_rd/uniform_set_cache_rd.h",0x83,
                     "Condition \"rid.is_null()\" is true. Returning: rid",0,0);
  }
  else {
    iVar8 = *(int *)(this + 0x18c);
    if (iVar8 == 0) {
      uVar1 = *(uint *)(this + 0x188);
      uVar6 = uVar1 + 1;
      *(uint *)(this + 0x188) = uVar6;
      uVar9 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar6 * 8,false);
      *(undefined8 *)(this + 0x178) = uVar9;
      uVar9 = Memory::realloc_static
                        (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
      lVar3 = *(long *)(this + 0x178);
      *(undefined8 *)(this + 0x180) = uVar9;
      lVar11 = (ulong)uVar1 * 8;
      uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) << 6,false);
      uVar6 = *(uint *)(this + 0x198);
      *(undefined8 *)(lVar3 + lVar11) = uVar9;
      lVar3 = *(long *)(this + 0x180);
      uVar9 = Memory::alloc_static((ulong)uVar6 << 3,false);
      *(undefined8 *)(lVar3 + lVar11) = uVar9;
      uVar6 = *(uint *)(this + 0x198);
      if (uVar6 == 0) {
        plVar14 = *(long **)(this + 0x180);
      }
      else {
        plVar14 = *(long **)(this + 0x180);
        lVar3 = *(long *)(this + 0x178);
        uVar12 = 0;
        lVar4 = *plVar14;
        do {
          *(ulong *)(lVar4 + uVar12 * 8) = uVar12 * 0x40 + *(long *)(lVar3 + lVar11);
          uVar12 = uVar12 + 1;
        } while (uVar6 != uVar12);
      }
      iVar8 = uVar6 + *(int *)(this + 0x18c);
    }
    else {
      plVar14 = *(long **)(this + 0x180);
    }
    uVar6 = iVar8 - 1;
    *(uint *)(this + 0x18c) = uVar6;
    pauVar2 = *(undefined1 (**) [16])
               (plVar14[uVar6 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
               (ulong)(uVar6 & *(uint *)(this + 0x194)) * 8);
    pauVar2[1] = (undefined1  [16])0x0;
    pauVar2[2] = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar2[1] + 8) = param_2;
    *pauVar2 = (undefined1  [16])0x0;
    pauVar2[3] = (undefined1  [16])0x0;
    uVar6 = *param_6;
    *(undefined4 *)pauVar2[1] = param_4;
    *(undefined4 *)pauVar2[2] = param_3;
    *(long *)(pauVar2[2] + 8) = lVar10;
    if (uVar6 != 0) {
      uVar1 = uVar6 - 1;
      uVar7 = uVar1 >> 1 | uVar1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(pauVar2[3] + 4) = uVar7;
      lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 0x28,false);
      *(long *)(pauVar2[3] + 8) = lVar11;
      uVar9 = _LC38;
      if (lVar11 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar7 = *(uint *)pauVar2[3];
      if (uVar7 < uVar6) {
        puVar13 = (undefined8 *)(lVar11 + (ulong)uVar7 * 0x28);
        do {
          *puVar13 = uVar9;
          puVar15 = puVar13 + 5;
          *(undefined1 *)(puVar13 + 1) = 0;
          puVar13[2] = 0;
          puVar13[4] = 0;
          puVar13 = puVar15;
        } while ((undefined8 *)(lVar11 + ((ulong)uVar7 + 1 + (ulong)(uVar1 - uVar7)) * 0x28) !=
                 puVar15);
      }
      *(uint *)pauVar2[3] = uVar6;
      lVar11 = 0;
      uVar6 = 0;
      do {
        if (*param_6 <= uVar6) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar6,
                     (ulong)*param_6,"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        puVar13 = (undefined8 *)(*(long *)(param_6 + 2) + lVar11);
        puVar15 = (undefined8 *)(*(long *)(pauVar2[3] + 8) + lVar11);
        *puVar15 = *puVar13;
        *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar13 + 1);
        puVar15[2] = puVar13[2];
        if (puVar15[4] != puVar13[4]) {
          CowData<RID>::_ref((CowData<RID> *)(puVar15 + 4),(CowData *)(puVar13 + 4));
        }
        uVar6 = uVar6 + 1;
        lVar11 = lVar11 + 0x28;
      } while (uVar6 < *(uint *)pauVar2[3]);
    }
    *(undefined8 *)*pauVar2 = 0;
    puVar13 = *(undefined8 **)(this + (ulong)param_5 * 8 + 0x1e0);
    *(undefined8 **)(*pauVar2 + 8) = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = pauVar2;
    }
    *(undefined1 (**) [16])(this + (ulong)param_5 * 8 + 0x1e0) = pauVar2;
    uVar9 = RenderingDevice::get_singleton();
    RenderingDevice::uniform_set_set_invalidation_callback
              (uVar9,lVar10,UniformSetCacheRD::_uniform_set_invalidation_callback,pauVar2);
    *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
  }
  return lVar10;
}



/* RID UniformSetCacheRD::get_cache_vec<>(RID, unsigned int, LocalVector<RenderingDevice::Uniform,
   unsigned int, false, false> const&) */

undefined8 __thiscall
UniformSetCacheRD::get_cache_vec<>(UniformSetCacheRD *this,long param_2,int param_3,uint *param_4)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  iVar7 = (int)((ulong)param_2 >> 0x20);
  uVar3 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
          (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar3 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar13 = (ulong)uVar3;
  if (*param_4 != 0) {
    lVar10 = 0;
    uVar13 = (ulong)uVar3;
    do {
      piVar11 = (int *)(*(long *)(param_4 + 2) + lVar10 * 0x28);
      uVar3 = (*piVar11 * 0x16a88000 | (uint)(*piVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              (uint)uVar13;
      uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
              (piVar11[1] * 0x16a88000 | (uint)(piVar11[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
      lVar15 = *(long *)(piVar11 + 4);
      uVar13 = (ulong)((uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64);
      if (lVar15 != 0) {
        uVar3 = 1;
LAB_0011dbb2:
        uVar14 = 0;
        do {
          uVar9 = (uint)uVar13;
          if (lVar15 == 0) {
            lVar15 = *(long *)(piVar11 + 8);
            if (lVar15 == 0) {
              lVar6 = 0;
LAB_0011de11:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar6,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar6 = *(long *)(lVar15 + -8);
            if (lVar6 <= (long)uVar14) goto LAB_0011de11;
            lVar15 = *(long *)(lVar15 + uVar14 * 8);
LAB_0011dbc9:
            iVar7 = (int)((ulong)lVar15 >> 0x20);
            uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
            uVar9 = uVar9 ^ ((int)lVar15 * 0x16a88000 | (uint)((int)lVar15 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
          }
          else {
            if (uVar14 == 0) goto LAB_0011dbc9;
            _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                             "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
            uVar8 = 0;
          }
          uVar14 = uVar14 + 1;
          uVar8 = uVar8 ^ (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
          uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
          if (uVar3 == uVar14) goto LAB_0011dc38;
          lVar15 = *(long *)(piVar11 + 4);
        } while( true );
      }
      if ((*(long *)(piVar11 + 8) != 0) &&
         (uVar3 = (uint)*(undefined8 *)(*(long *)(piVar11 + 8) + -8), uVar3 != 0))
      goto LAB_0011dbb2;
LAB_0011dc38:
      lVar10 = lVar10 + 1;
      uVar3 = ((uint)(uVar13 >> 0x10) ^ (uint)uVar13) * -0x7a143595;
      uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
      uVar13 = (ulong)(uVar3 >> 0x10 ^ uVar3);
    } while ((uint)lVar10 < *param_4);
  }
  uVar3 = ((uint)uVar13 ^ (uint)(uVar13 >> 0x10)) * -0x7a143595;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  uVar3 = uVar3 ^ uVar3 >> 0x10;
  lVar10 = *(long *)(this + (ulong)(uVar3 % 0x3ffd) * 8 + 0x1e0);
  while( true ) {
    if (lVar10 == 0) {
      uVar4 = _allocate_from_uniforms<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>
                        (this,param_2,param_3,uVar3,uVar3 % 0x3ffd,param_4);
      return uVar4;
    }
    if ((((*(uint *)(lVar10 + 0x10) == uVar3) && (*(int *)(lVar10 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar10 + 0x18))) && (*(uint *)(lVar10 + 0x30) == *param_4)) break;
LAB_0011dce0:
    lVar10 = *(long *)(lVar10 + 8);
  }
  if (*param_4 == 0) {
LAB_0011e07d:
    return *(undefined8 *)(lVar10 + 0x28);
  }
  lVar15 = 0;
  uVar9 = 0;
  do {
    piVar12 = (int *)(*(long *)(lVar10 + 0x38) + lVar15);
    piVar11 = (int *)(*(long *)(param_4 + 2) + lVar15);
    if ((piVar11[1] != piVar12[1]) || (*piVar11 != *piVar12)) goto LAB_0011dce0;
    lVar5 = *(long *)(piVar12 + 4);
    if (*(long *)(piVar11 + 4) != 0) {
      if (lVar5 == 0) {
        if ((*(long *)(piVar12 + 8) == 0) ||
           (uVar8 = (uint)*(undefined8 *)(*(long *)(piVar12 + 8) + -8), uVar8 != 1))
        goto LAB_0011dce0;
      }
      else {
        uVar8 = 1;
      }
LAB_0011de5b:
      uVar13 = 0;
      do {
        uVar14 = uVar13;
        if (lVar5 == 0) {
          lVar5 = *(long *)(piVar12 + 8);
          if (lVar5 == 0) {
            lVar6 = 0;
            goto LAB_0011de11;
          }
          lVar6 = *(long *)(lVar5 + -8);
          if (lVar6 <= (long)uVar13) goto LAB_0011de11;
          lVar6 = *(long *)(piVar11 + 4);
          lVar5 = *(long *)(lVar5 + uVar13 * 8);
          if (lVar6 == 0) goto LAB_0011de8d;
          if (uVar13 != 0) goto LAB_0011df0e;
        }
        else if (uVar13 == 0) {
          lVar6 = *(long *)(piVar11 + 4);
          uVar14 = 0;
          if (lVar6 == 0) {
LAB_0011de8d:
            lVar1 = *(long *)(piVar11 + 8);
            if (lVar1 == 0) {
              lVar6 = 0;
              goto LAB_0011de11;
            }
            lVar6 = *(long *)(lVar1 + -8);
            if (lVar6 <= (long)uVar14) goto LAB_0011de11;
            lVar6 = *(long *)(lVar1 + uVar13 * 8);
          }
        }
        else {
          _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                           "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
          if (*(long *)(piVar11 + 4) == 0) {
            lVar5 = 0;
            goto LAB_0011de8d;
          }
          lVar5 = 0;
LAB_0011df0e:
          _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                           "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
          lVar6 = 0;
        }
        if (lVar6 != lVar5) goto LAB_0011dce0;
        uVar13 = uVar13 + 1;
        if (uVar8 <= (uint)uVar13) goto LAB_0011df74;
        lVar5 = *(long *)(piVar12 + 4);
      } while( true );
    }
    if (*(long *)(piVar11 + 8) == 0) {
      if (lVar5 != 0) goto LAB_0011dce0;
      if (*(long *)(piVar12 + 8) != 0) {
        uVar8 = *(uint *)(*(long *)(piVar12 + 8) + -8);
joined_r0x0011e06f:
        if (uVar8 != 0) goto LAB_0011dce0;
      }
    }
    else {
      uVar8 = (uint)*(undefined8 *)(*(long *)(piVar11 + 8) + -8);
      if (lVar5 != 0) {
        if (uVar8 == 1) goto LAB_0011de5b;
        goto LAB_0011dce0;
      }
      if (*(long *)(piVar12 + 8) == 0) goto joined_r0x0011e06f;
      if (*(uint *)(*(long *)(piVar12 + 8) + -8) != uVar8) goto LAB_0011dce0;
      if (uVar8 != 0) goto LAB_0011de5b;
    }
LAB_0011df74:
    uVar9 = uVar9 + 1;
    lVar15 = lVar15 + 0x28;
    if (*param_4 <= uVar9) goto LAB_0011e07d;
    if (*(uint *)(lVar10 + 0x30) <= uVar9) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar9,
                 (ulong)*(uint *)(lVar10 + 0x30),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  } while( true );
}



/* RID UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform> >(RID, unsigned
   int, unsigned int, unsigned int, Vector<RenderingDevice::Uniform> const&) */

long __thiscall
UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
          (UniformSetCacheRD *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          uint param_5,long param_6)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  
  uVar7 = RenderingDevice::get_singleton();
  lVar8 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                    (uVar7,param_6,param_2,param_3,0);
  if (lVar8 == 0) {
    _err_print_error("_allocate_from_uniforms",
                     "./servers/rendering/renderer_rd/uniform_set_cache_rd.h",0x83,
                     "Condition \"rid.is_null()\" is true. Returning: rid",0,0);
  }
  else {
    iVar6 = *(int *)(this + 0x18c);
    if (iVar6 == 0) {
      uVar5 = *(uint *)(this + 0x188);
      uVar4 = uVar5 + 1;
      *(uint *)(this + 0x188) = uVar4;
      uVar7 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar4 * 8,false);
      *(undefined8 *)(this + 0x178) = uVar7;
      uVar7 = Memory::realloc_static
                        (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
      lVar2 = *(long *)(this + 0x178);
      *(undefined8 *)(this + 0x180) = uVar7;
      lVar9 = (ulong)uVar5 * 8;
      uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) << 6,false);
      uVar4 = *(uint *)(this + 0x198);
      *(undefined8 *)(lVar2 + lVar9) = uVar7;
      lVar2 = *(long *)(this + 0x180);
      uVar7 = Memory::alloc_static((ulong)uVar4 << 3,false);
      *(undefined8 *)(lVar2 + lVar9) = uVar7;
      uVar4 = *(uint *)(this + 0x198);
      if (uVar4 == 0) {
        plVar12 = *(long **)(this + 0x180);
      }
      else {
        plVar12 = *(long **)(this + 0x180);
        lVar2 = *(long *)(this + 0x178);
        uVar10 = 0;
        lVar15 = *plVar12;
        do {
          *(ulong *)(lVar15 + uVar10 * 8) = uVar10 * 0x40 + *(long *)(lVar2 + lVar9);
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
      }
      iVar6 = uVar4 + *(int *)(this + 0x18c);
    }
    else {
      plVar12 = *(long **)(this + 0x180);
    }
    uVar4 = iVar6 - 1;
    *(uint *)(this + 0x18c) = uVar4;
    pauVar1 = *(undefined1 (**) [16])
               (plVar12[uVar4 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
               (ulong)(uVar4 & *(uint *)(this + 0x194)) * 8);
    pauVar1[1] = (undefined1  [16])0x0;
    *(undefined4 *)pauVar1[1] = param_4;
    lVar9 = *(long *)(param_6 + 8);
    pauVar1[2] = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar1[1] + 8) = param_2;
    *(undefined4 *)pauVar1[2] = param_3;
    *(long *)(pauVar1[2] + 8) = lVar8;
    *pauVar1 = (undefined1  [16])0x0;
    pauVar1[3] = (undefined1  [16])0x0;
    if ((lVar9 != 0) && (uVar4 = (uint)*(undefined8 *)(lVar9 + -8), uVar4 != 0)) {
      uVar14 = uVar4 - 1;
      uVar5 = uVar14 >> 1 | uVar14;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
      *(uint *)(pauVar1[3] + 4) = uVar5;
      lVar9 = Memory::realloc_static((void *)0x0,(ulong)uVar5 * 0x28,false);
      *(long *)(pauVar1[3] + 8) = lVar9;
      uVar7 = _LC38;
      if (lVar9 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = *(uint *)pauVar1[3];
      if (uVar5 < uVar4) {
        puVar11 = (undefined8 *)(lVar9 + (ulong)uVar5 * 0x28);
        do {
          *puVar11 = uVar7;
          puVar13 = puVar11 + 5;
          *(undefined1 *)(puVar11 + 1) = 0;
          puVar11[2] = 0;
          puVar11[4] = 0;
          puVar11 = puVar13;
        } while ((undefined8 *)(lVar9 + ((ulong)uVar5 + 1 + (ulong)(uVar14 - uVar5)) * 0x28) !=
                 puVar13);
      }
      *(uint *)pauVar1[3] = uVar4;
      lVar9 = 0;
      do {
        lVar2 = *(long *)(param_6 + 8);
        if (lVar2 == 0) {
          lVar15 = 0;
LAB_0011e2e3:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_0011e2e3;
        puVar11 = (undefined8 *)(lVar2 + lVar9 * 0x28);
        puVar13 = (undefined8 *)(lVar9 * 0x28 + *(long *)(pauVar1[3] + 8));
        *puVar13 = *puVar11;
        *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar11 + 1);
        puVar13[2] = puVar11[2];
        if (puVar13[4] != puVar11[4]) {
          CowData<RID>::_ref((CowData<RID> *)(puVar13 + 4),(CowData *)(puVar11 + 4));
        }
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < *(uint *)pauVar1[3]);
    }
    *(undefined8 *)*pauVar1 = 0;
    puVar11 = *(undefined8 **)(this + (ulong)param_5 * 8 + 0x1e0);
    *(undefined8 **)(*pauVar1 + 8) = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = pauVar1;
    }
    *(undefined1 (**) [16])(this + (ulong)param_5 * 8 + 0x1e0) = pauVar1;
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::uniform_set_set_invalidation_callback
              (uVar7,lVar8,UniformSetCacheRD::_uniform_set_invalidation_callback,pauVar1);
    *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
  }
  return lVar8;
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
LAB_0011e930:
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
  if (lVar10 == 0) goto LAB_0011e930;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0011e809:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0011e809;
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
    goto LAB_0011e986;
  }
  if (lVar10 == lVar7) {
LAB_0011e8af:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0011e986:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011e89a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011e8af;
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
LAB_0011e89a:
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
LAB_0011ec40:
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
  if (lVar7 == 0) goto LAB_0011ec40;
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
LAB_0011ebac:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011eb41;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011ebac;
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
LAB_0011eb41:
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



/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_unref() */

void __thiscall
CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_unref
          (CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
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
LAB_0011f0e0:
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
  if (lVar11 == 0) goto LAB_0011f0e0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_0011ef71:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_0011ef71;
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
    goto LAB_0011f136;
  }
  if (lVar11 == lVar9) {
LAB_0011f053:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011f136:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_0011f030;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011f053;
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
  uVar4 = _LC38;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_0011f030:
  puVar7[-1] = param_1;
  return 0;
}



/* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform, RenderingDevice::Uniform,
   RenderingDevice::Uniform>(RID, unsigned int, RenderingDevice::Uniform, RenderingDevice::Uniform,
   RenderingDevice::Uniform) */

undefined8 __thiscall
UniformSetCacheRD::
get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
          (UniformSetCacheRD *this,long param_2,int param_3,int *param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  CowData *pCVar1;
  CowData *pCVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  undefined8 *local_150;
  Vector<RenderingDevice::Uniform> local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  long local_d8 [2];
  undefined8 local_c8;
  undefined1 local_c0;
  long local_b8;
  long local_a8 [2];
  undefined8 local_98;
  undefined1 local_90;
  long local_88;
  long local_78 [2];
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = 0;
  iVar11 = (int)((ulong)param_2 >> 0x20);
  uVar10 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           0x7f07c65;
  uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64 ^
           (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar10 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
  local_98 = *param_6;
  local_90 = *(undefined1 *)(param_6 + 1);
  local_88 = param_6[2];
  pCVar1 = (CowData *)(param_6 + 4);
  if (param_6[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_78,pCVar1);
  }
  local_c8 = *param_5;
  local_a8[0] = 0;
  local_c0 = *(undefined1 *)(param_5 + 1);
  local_b8 = param_5[2];
  pCVar2 = (CowData *)(param_5 + 4);
  if (param_5[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_a8,pCVar2);
  }
  uVar10 = (*param_4 * 0x16a88000 | (uint)(*param_4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
  uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64 ^
           (param_4[1] * 0x16a88000 | (uint)(param_4[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
  lVar13 = *(long *)(param_4 + 4);
  uVar22 = (ulong)((uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64);
  if (lVar13 == 0) {
    if ((*(long *)(param_4 + 8) == 0) ||
       (uVar24 = *(ulong *)(*(long *)(param_4 + 8) + -8), uVar23 = uVar24 & 0xffffffff,
       (int)uVar24 == 0)) {
LAB_0011f2e0:
      local_48 = 0;
      uVar10 = ((uint)(uVar22 >> 0x10) ^ (uint)uVar22) * -0x7a143595;
      uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
      uVar10 = uVar10 ^ uVar10 >> 0x10;
      local_68 = local_98;
      local_60 = local_90;
      local_58 = local_88;
      if (local_78[0] == 0) {
        uVar10 = _hash_args<RenderingDevice::Uniform>(uVar10,&local_c8,&local_68);
        uVar22 = (ulong)uVar10;
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
        lVar13 = local_48;
        uVar10 = _hash_args<RenderingDevice::Uniform>(uVar10,&local_c8,&local_68);
        uVar22 = (ulong)uVar10;
        if (lVar13 != 0) {
          LOCK();
          plVar3 = (long *)(lVar13 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      local_150 = &local_68;
      if (local_a8[0] != 0) {
        LOCK();
        plVar3 = (long *)(local_a8[0] + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static((void *)(local_a8[0] + -0x10),false);
        }
      }
      if (local_78[0] != 0) {
        LOCK();
        plVar3 = (long *)(local_78[0] + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static((void *)(local_78[0] + -0x10),false);
        }
      }
      iVar11 = (int)(uVar22 * 0xc0091 >> 0x20);
      iVar14 = (int)uVar22;
      uVar10 = iVar14 + (iVar11 + ((uint)(iVar14 - iVar11) >> 1) >> 0xd) * -0x3ffd;
      uVar12 = local_98;
      uVar9 = local_90;
      for (lVar13 = *(long *)(this + (ulong)uVar10 * 8 + 0x1e0); lVar13 != 0;
          lVar13 = *(long *)(lVar13 + 8)) {
        local_98 = *param_6;
        local_90 = *(undefined1 *)(param_6 + 1);
        if ((((*(int *)(lVar13 + 0x10) == iVar14) && (*(int *)(lVar13 + 0x20) == param_3)) &&
            (*(long *)(lVar13 + 0x18) == param_2)) && (*(int *)(lVar13 + 0x30) == 3)) {
          local_88 = param_6[2];
          local_78[0] = 0;
          if (param_6[4] != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_78,pCVar1);
          }
          local_c8 = *param_5;
          local_a8[0] = 0;
          local_c0 = *(undefined1 *)(param_5 + 1);
          local_b8 = param_5[2];
          if (param_5[4] != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_a8,pCVar2);
          }
          if (*(int *)(lVar13 + 0x30) == 0) {
            uVar23 = 0;
            lVar13 = 0;
            goto LAB_0011fc45;
          }
          piVar4 = *(int **)(lVar13 + 0x38);
          if ((piVar4[1] == param_4[1]) && (*piVar4 == *param_4)) {
            lVar20 = *(long *)(param_4 + 4);
            if (*(long *)(piVar4 + 4) != 0) {
              if (lVar20 != 0) {
                uVar15 = 1;
                goto LAB_0011fb2b;
              }
              if (*(long *)(param_4 + 8) != 0) {
                uVar15 = (uint)*(undefined8 *)(*(long *)(param_4 + 8) + -8);
                goto joined_r0x0011fb25;
              }
              goto LAB_0011f516;
            }
            if (*(long *)(piVar4 + 8) != 0) {
              uVar15 = (uint)*(undefined8 *)(*(long *)(piVar4 + 8) + -8);
              if (lVar20 == 0) {
                if (*(long *)(param_4 + 8) == 0) goto joined_r0x0011ff74;
                if (*(uint *)(*(long *)(param_4 + 8) + -8) == uVar15) {
                  if (uVar15 != 0) goto LAB_0011fb2b;
                  goto LAB_0011fc95;
                }
              }
              else {
joined_r0x0011fb25:
                if (uVar15 == 1) {
LAB_0011fb2b:
                  uVar23 = 0;
                  do {
                    uVar24 = uVar23;
                    if (lVar20 == 0) {
                      lVar20 = *(long *)(param_4 + 8);
                      if (lVar20 == 0) {
                        lVar16 = 0;
                        goto LAB_0011f681;
                      }
                      lVar16 = *(long *)(lVar20 + -8);
                      if (lVar16 <= (long)uVar23) goto LAB_0011f681;
                      lVar20 = *(long *)(lVar20 + uVar23 * 8);
                      lVar16 = *(long *)(piVar4 + 4);
                      if (lVar16 == 0) goto LAB_0011fb5d;
                      if (uVar23 != 0) goto LAB_0011fbde;
                    }
                    else if (uVar23 == 0) {
                      lVar16 = *(long *)(piVar4 + 4);
                      uVar24 = 0;
                      if (lVar16 == 0) {
LAB_0011fb5d:
                        lVar5 = *(long *)(piVar4 + 8);
                        if (lVar5 == 0) {
                          lVar16 = 0;
                          goto LAB_0011f681;
                        }
                        lVar16 = *(long *)(lVar5 + -8);
                        if (lVar16 <= (long)uVar24) goto LAB_0011f681;
                        lVar16 = *(long *)(lVar5 + uVar23 * 8);
                      }
                    }
                    else {
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      if (*(long *)(piVar4 + 4) == 0) {
                        lVar20 = 0;
                        goto LAB_0011fb5d;
                      }
                      lVar20 = 0;
LAB_0011fbde:
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      lVar16 = 0;
                    }
                    if (lVar16 != lVar20) break;
                    uVar23 = uVar23 + 1;
                    if (uVar15 <= (uint)uVar23) goto LAB_0011fc95;
                    lVar20 = *(long *)(param_4 + 4);
                  } while( true );
                }
              }
              goto LAB_0011f516;
            }
            if (lVar20 != 0) goto LAB_0011f516;
            if (*(long *)(param_4 + 8) != 0) {
              uVar15 = *(uint *)(*(long *)(param_4 + 8) + -8);
joined_r0x0011ff74:
              if (uVar15 != 0) goto LAB_0011f516;
            }
LAB_0011fc95:
            local_48 = 0;
            local_68 = local_98;
            local_60 = local_90;
            local_58 = local_88;
            if (local_78[0] != 0) {
              CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
            }
            lVar20 = local_b8;
            uVar23 = (ulong)*(uint *)(lVar13 + 0x30);
            if (*(uint *)(lVar13 + 0x30) < 2) {
              lVar13 = 1;
              goto LAB_0011fc45;
            }
            lVar5 = *(long *)(lVar13 + 0x38);
            if (*(int *)(lVar5 + 0x2c) == local_c8._4_4_) {
              if (*(int *)(lVar5 + 0x28) != (int)local_c8) {
LAB_0011ff3c:
                if (local_48 == 0) goto LAB_0011f516;
                bVar8 = false;
                goto LAB_0011fd26;
              }
              uVar18 = 1;
              if (*(long *)(lVar5 + 0x38) == 0) {
                if (*(long *)(lVar5 + 0x48) == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = *(ulong *)(*(long *)(lVar5 + 0x48) + -8);
                }
              }
              iVar11 = (int)uVar18;
              if (local_b8 != 0) {
                if (iVar11 == 1) {
LAB_0011fe79:
                  uVar24 = 0;
                  do {
                    if (lVar20 == 0) {
                      if (local_a8[0] == 0) {
LAB_001202c7:
                        lVar16 = 0;
                      }
                      else {
                        lVar16 = *(long *)(local_a8[0] + -8);
                        if ((long)uVar24 < lVar16) {
                          lVar21 = *(long *)(local_a8[0] + uVar24 * 8);
                          lVar16 = *(long *)(lVar5 + 0x38);
                          if (lVar16 == 0) goto LAB_0011ff13;
                          if (uVar24 != 0) goto LAB_0012028f;
                          goto LAB_0011fede;
                        }
                      }
                      goto LAB_0011f681;
                    }
                    if (uVar24 == 0) {
                      lVar16 = *(long *)(lVar5 + 0x38);
                      lVar21 = lVar20;
                      if (lVar16 == 0) {
LAB_0011ff13:
                        lVar6 = *(long *)(lVar5 + 0x48);
                        if (lVar6 == 0) goto LAB_001202c7;
                        lVar16 = *(long *)(lVar6 + -8);
                        if (lVar16 <= (long)uVar24) goto LAB_0011f681;
                        lVar16 = *(long *)(lVar6 + uVar24 * 8);
                      }
                    }
                    else {
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      lVar21 = *(long *)(lVar5 + 0x38);
                      if (lVar21 == 0) goto LAB_0011ff13;
                      lVar21 = 0;
LAB_0012028f:
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      lVar16 = 0;
                    }
LAB_0011fede:
                    if (lVar16 != lVar21) goto LAB_001201b2;
                    uVar24 = uVar24 + 1;
                  } while (uVar24 != (uVar18 & 0xffffffff));
                  uVar23 = (ulong)*(uint *)(lVar13 + 0x30);
                  goto LAB_0011fffd;
                }
                goto LAB_0011ff3c;
              }
              if (local_a8[0] == 0) {
                iVar19 = 0;
              }
              else {
                iVar19 = (int)*(undefined8 *)(local_a8[0] + -8);
              }
              if (iVar11 != iVar19) goto LAB_0011ff3c;
              if (iVar11 != 0) goto LAB_0011fe79;
LAB_0011fffd:
              lVar20 = local_58;
              if ((uint)uVar23 < 3) {
                lVar13 = 2;
LAB_0011fc45:
                _err_print_index_error
                          ("operator[]","./core/templates/local_vector.h",0xae,lVar13,uVar23,
                           "p_index","count","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              lVar5 = *(long *)(lVar13 + 0x38);
              if ((*(int *)(lVar5 + 0x54) != local_68._4_4_) ||
                 (*(int *)(lVar5 + 0x50) != (int)local_68)) goto LAB_0011ff3c;
              uVar15 = 1;
              if (*(long *)(lVar5 + 0x60) == 0) {
                if (*(long *)(lVar5 + 0x70) == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (uint)*(undefined8 *)(*(long *)(lVar5 + 0x70) + -8);
                }
              }
              uVar17 = 1;
              if (local_58 == 0) {
                if (local_48 == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = (uint)*(undefined8 *)(local_48 + -8);
                }
              }
              if (uVar17 != uVar15) goto LAB_0011ff3c;
              uVar24 = 0;
              do {
                if (uVar15 <= (uint)uVar24) {
                  bVar8 = true;
                  goto LAB_001201b5;
                }
                if (lVar20 == 0) {
                  if (local_48 == 0) {
LAB_00120234:
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = *(long *)(local_48 + -8);
                    if ((long)uVar24 < lVar16) {
                      lVar21 = *(long *)(local_48 + uVar24 * 8);
                      lVar16 = *(long *)(lVar5 + 0x60);
                      if (lVar16 == 0) goto LAB_001200ac;
                      if (uVar24 != 0) goto LAB_00120182;
                      goto LAB_001200cb;
                    }
                  }
                  goto LAB_0011f681;
                }
                if (uVar24 == 0) {
                  lVar16 = *(long *)(lVar5 + 0x60);
                  lVar21 = lVar20;
                  if (lVar16 == 0) {
LAB_001200ac:
                    lVar6 = *(long *)(lVar5 + 0x70);
                    if (lVar6 == 0) goto LAB_00120234;
                    lVar16 = *(long *)(lVar6 + -8);
                    if (lVar16 <= (long)uVar24) goto LAB_0011f681;
                    lVar16 = *(long *)(lVar6 + uVar24 * 8);
                  }
                }
                else {
                  _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                   "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                  lVar21 = *(long *)(lVar5 + 0x60);
                  if (lVar21 == 0) goto LAB_001200ac;
                  lVar21 = 0;
LAB_00120182:
                  _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                   "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                  lVar16 = 0;
                }
LAB_001200cb:
                uVar24 = uVar24 + 1;
              } while (lVar21 == lVar16);
LAB_001201b2:
              bVar8 = false;
LAB_001201b5:
              if (local_48 != 0) goto LAB_0011fd26;
            }
            else {
              bVar8 = false;
              if (local_48 == 0) goto LAB_0011f516;
LAB_0011fd26:
              LOCK();
              plVar3 = (long *)(local_48 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                Memory::free_static((void *)(local_48 + -0x10),false);
              }
            }
            if (local_a8[0] != 0) goto LAB_0011f530;
LAB_0011f54b:
            if (local_78[0] != 0) goto LAB_0011f558;
          }
          else {
LAB_0011f516:
            bVar8 = false;
            if (local_a8[0] != 0) {
LAB_0011f530:
              LOCK();
              plVar3 = (long *)(local_a8[0] + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                Memory::free_static((void *)(local_a8[0] + -0x10),false);
              }
              goto LAB_0011f54b;
            }
            uVar12 = local_98;
            uVar9 = local_90;
            if (local_78[0] == 0) goto LAB_0011f430;
LAB_0011f558:
            LOCK();
            plVar3 = (long *)(local_78[0] + -0x10);
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              Memory::free_static((void *)(local_78[0] + -0x10),false);
            }
          }
          uVar12 = local_98;
          uVar9 = local_90;
          if (bVar8) {
            uVar12 = *(undefined8 *)(lVar13 + 0x28);
            goto LAB_0011fa09;
          }
        }
LAB_0011f430:
        local_90 = uVar9;
        local_98 = uVar12;
        uVar12 = local_98;
        uVar9 = local_90;
      }
      local_c8 = *param_6;
      local_100 = 0;
      local_a8[0] = 0;
      local_c0 = *(undefined1 *)(param_6 + 1);
      local_b8 = param_6[2];
      local_98 = uVar12;
      local_90 = uVar9;
      if (param_6[4] != 0) {
        CowData<RID>::_ref((CowData<RID> *)local_a8,pCVar1);
      }
      local_f8 = *param_5;
      local_d8[0] = 0;
      local_f0 = *(undefined1 *)(param_5 + 1);
      local_e8 = param_5[2];
      if (param_5[4] != 0) {
        CowData<RID>::_ref((CowData<RID> *)local_d8,pCVar2);
      }
      local_68 = *(undefined8 *)param_4;
      local_48 = 0;
      local_60 = (undefined1)param_4[2];
      local_58 = *(long *)(param_4 + 4);
      if (*(long *)(param_4 + 8) == 0) {
        Vector<RenderingDevice::Uniform>::push_back(local_108,local_150);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)(param_4 + 8));
        lVar13 = local_48;
        Vector<RenderingDevice::Uniform>::push_back(local_108);
        if (lVar13 != 0) {
          LOCK();
          plVar3 = (long *)(lVar13 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      local_48 = 0;
      local_68 = local_c8;
      local_60 = local_c0;
      local_58 = local_b8;
      if (local_a8[0] != 0) {
        CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_a8);
      }
      local_78[0] = 0;
      local_98 = local_f8;
      local_90 = local_f0;
      local_88 = local_e8;
      if (local_d8[0] == 0) {
        Vector<RenderingDevice::Uniform>::push_back(local_108,&local_98);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_d8);
        lVar13 = local_78[0];
        Vector<RenderingDevice::Uniform>::push_back(local_108);
        if (lVar13 != 0) {
          LOCK();
          plVar3 = (long *)(lVar13 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            Memory::free_static((void *)(local_78[0] + -0x10),false);
          }
        }
      }
      lVar13 = local_48;
      local_78[0] = 0;
      local_98 = local_68;
      local_90 = local_60;
      local_88 = local_58;
      if (local_48 == 0) {
        Vector<RenderingDevice::Uniform>::push_back(local_108);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)&local_48);
        lVar16 = local_78[0];
        Vector<RenderingDevice::Uniform>::push_back(local_108);
        if (lVar16 != 0) {
          LOCK();
          plVar3 = (long *)(lVar16 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            Memory::free_static((void *)(local_78[0] + -0x10),false);
          }
          lVar13 = local_48;
          if (local_48 == 0) goto LAB_0011f991;
        }
        LOCK();
        plVar3 = (long *)(lVar13 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
LAB_0011f991:
      if (local_d8[0] != 0) {
        LOCK();
        plVar3 = (long *)(local_d8[0] + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static((void *)(local_d8[0] + -0x10),false);
        }
      }
      if (local_a8[0] != 0) {
        LOCK();
        plVar3 = (long *)(local_a8[0] + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static((void *)(local_a8[0] + -0x10),false);
        }
      }
      uVar12 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                         (this,param_2,param_3,uVar22,uVar10,local_108);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_100);
LAB_0011fa09:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar12;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar23 = 1;
  }
  uVar24 = 0;
  do {
    uVar10 = (uint)uVar22;
    if (lVar13 == 0) {
      lVar13 = *(long *)(param_4 + 8);
      if (lVar13 == 0) {
        lVar16 = 0;
LAB_0011f681:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar24,lVar16,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar16 = *(long *)(lVar13 + -8);
      if (lVar16 <= (long)uVar24) goto LAB_0011f681;
      lVar13 = *(long *)(lVar13 + uVar24 * 8);
LAB_0011f5a5:
      iVar11 = (int)((ulong)lVar13 >> 0x20);
      uVar15 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar10 = uVar10 ^ ((int)lVar13 * 0x16a88000 | (uint)((int)lVar13 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
    }
    else {
      if (uVar24 == 0) goto LAB_0011f5a5;
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      uVar15 = 0;
    }
    uVar24 = uVar24 + 1;
    uVar15 = uVar15 ^ (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    uVar22 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
    if (uVar24 == uVar23) goto LAB_0011f2e0;
    lVar13 = *(long *)(param_4 + 4);
  } while( true );
}



/* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform, RenderingDevice::Uniform>(RID,
   unsigned int, RenderingDevice::Uniform, RenderingDevice::Uniform) */

undefined8 __thiscall
UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
          (UniformSetCacheRD *this,long param_2,int param_3,int *param_4,undefined8 *param_5)

{
  CowData *pCVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  Vector<RenderingDevice::Uniform> local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  long local_88;
  long local_78 [2];
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  long local_48;
  long local_40;
  
  iVar12 = (int)((ulong)param_2 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar7 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64 ^
          (iVar12 * 0x16a88000 | (uint)(iVar12 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar7 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  local_68 = *param_5;
  local_60 = *(undefined1 *)(param_5 + 1);
  iVar12 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + -0x19ab949c;
  pCVar1 = (CowData *)(param_5 + 4);
  local_58 = param_5[2];
  if (param_5[4] == 0) {
    uVar7 = _hash_args<RenderingDevice::Uniform>(iVar12,param_4,&local_68);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)&local_48,pCVar1);
    lVar11 = local_48;
    uVar7 = _hash_args<RenderingDevice::Uniform>(iVar12,param_4,&local_68);
    if (lVar11 != 0) {
      LOCK();
      plVar2 = (long *)(lVar11 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
  }
  uVar8 = local_68;
  uVar6 = local_60;
  for (lVar11 = *(long *)(this + (ulong)(uVar7 % 0x3ffd) * 8 + 0x1e0); lVar11 != 0;
      lVar11 = *(long *)(lVar11 + 8)) {
    local_68 = *param_5;
    local_60 = *(undefined1 *)(param_5 + 1);
    if ((((*(uint *)(lVar11 + 0x10) != uVar7) || (*(int *)(lVar11 + 0x20) != param_3)) ||
        (param_2 != *(long *)(lVar11 + 0x18))) || (*(int *)(lVar11 + 0x30) != 2)) goto LAB_00120450;
    local_58 = param_5[2];
    local_48 = 0;
    if (param_5[4] != 0) {
      CowData<RID>::_ref((CowData<RID> *)&local_48,pCVar1);
      if (*(int *)(lVar11 + 0x30) == 0) {
        uVar18 = 0;
        lVar11 = 0;
        goto LAB_00120938;
      }
      piVar17 = *(int **)(lVar11 + 0x38);
      if (piVar17[1] == param_4[1]) goto LAB_001204e8;
      goto LAB_00120852;
    }
    piVar17 = *(int **)(lVar11 + 0x38);
    uVar8 = local_68;
    uVar6 = local_60;
    if (piVar17[1] != param_4[1]) goto LAB_00120450;
LAB_001204e8:
    if (*piVar17 == *param_4) {
      lVar9 = *(long *)(param_4 + 4);
      if (*(long *)(piVar17 + 4) != 0) {
        if (lVar9 != 0) {
          uVar10 = 1;
LAB_00120528:
          uVar18 = 0;
          do {
            uVar14 = uVar18;
            if (lVar9 == 0) {
              lVar9 = *(long *)(param_4 + 8);
              if (lVar9 == 0) {
                lVar13 = 0;
                goto LAB_00120b65;
              }
              lVar13 = *(long *)(lVar9 + -8);
              if (lVar13 <= (long)uVar18) goto LAB_00120b65;
              lVar13 = *(long *)(piVar17 + 4);
              lVar9 = *(long *)(lVar9 + uVar18 * 8);
              if (lVar13 == 0) goto LAB_00120562;
              if (uVar18 != 0) goto LAB_001205e3;
            }
            else if (uVar18 == 0) {
              lVar13 = *(long *)(piVar17 + 4);
              uVar14 = 0;
              if (lVar13 == 0) {
LAB_00120562:
                lVar3 = *(long *)(piVar17 + 8);
                if (lVar3 == 0) {
                  lVar13 = 0;
                  goto LAB_00120b65;
                }
                lVar13 = *(long *)(lVar3 + -8);
                if (lVar13 <= (long)uVar14) goto LAB_00120b65;
                lVar13 = *(long *)(lVar3 + uVar18 * 8);
              }
            }
            else {
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              if (*(long *)(piVar17 + 4) == 0) {
                lVar9 = 0;
                goto LAB_00120562;
              }
              lVar9 = 0;
LAB_001205e3:
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              lVar13 = 0;
            }
            if (lVar13 != lVar9) goto LAB_001208f2;
            uVar18 = uVar18 + 1;
            if (uVar10 <= (uint)uVar18) goto LAB_00120983;
            lVar9 = *(long *)(param_4 + 4);
          } while( true );
        }
        if ((*(long *)(param_4 + 8) != 0) &&
           (uVar10 = (uint)*(undefined8 *)(*(long *)(param_4 + 8) + -8), uVar10 == 1))
        goto LAB_00120528;
        goto LAB_00120852;
      }
      if (*(long *)(piVar17 + 8) == 0) {
        if (lVar9 != 0) goto LAB_00120852;
        if (*(long *)(param_4 + 8) != 0) {
          uVar10 = *(uint *)(*(long *)(param_4 + 8) + -8);
          goto joined_r0x0012084c;
        }
LAB_00120983:
        lVar9 = local_58;
        uVar18 = (ulong)*(uint *)(lVar11 + 0x30);
        if (*(uint *)(lVar11 + 0x30) < 2) {
          lVar11 = 1;
LAB_00120938:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,lVar11,uVar18,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar3 = *(long *)(lVar11 + 0x38);
        if ((*(int *)(lVar3 + 0x2c) != local_68._4_4_) || (*(int *)(lVar3 + 0x28) != (int)local_68))
        goto LAB_00120852;
        uVar18 = 1;
        if (*(long *)(lVar3 + 0x38) == 0) {
          if (*(long *)(lVar3 + 0x48) == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(ulong *)(*(long *)(lVar3 + 0x48) + -8);
          }
        }
        iVar12 = (int)uVar18;
        if (local_58 == 0) {
          if (local_48 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = (int)*(undefined8 *)(local_48 + -8);
          }
          if (iVar12 == iVar15) {
            if (iVar12 != 0) {
LAB_00120a0d:
              uVar14 = 0;
              do {
                if (lVar9 == 0) {
                  if (local_48 == 0) {
LAB_00120c5c:
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *(long *)(local_48 + -8);
                    if ((long)uVar14 < lVar13) {
                      lVar16 = *(long *)(local_48 + uVar14 * 8);
                      lVar13 = *(long *)(lVar3 + 0x38);
                      if (lVar13 == 0) goto LAB_00120a47;
                      if (uVar14 != 0) goto LAB_00120acd;
                      goto LAB_00120a65;
                    }
                  }
LAB_00120b65:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar13,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                if (uVar14 == 0) {
                  lVar13 = *(long *)(lVar3 + 0x38);
                  lVar16 = lVar9;
                  if (lVar13 == 0) {
LAB_00120a47:
                    lVar4 = *(long *)(lVar3 + 0x48);
                    if (lVar4 == 0) goto LAB_00120c5c;
                    lVar13 = *(long *)(lVar4 + -8);
                    if (lVar13 <= (long)uVar14) goto LAB_00120b65;
                    lVar13 = *(long *)(lVar4 + uVar14 * 8);
                  }
                }
                else {
                  _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                   "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                  lVar16 = *(long *)(lVar3 + 0x38);
                  if (lVar16 == 0) goto LAB_00120a47;
                  lVar16 = 0;
LAB_00120acd:
                  _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                   "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                  lVar13 = 0;
                }
LAB_00120a65:
                if (lVar13 != lVar16) goto LAB_001208f2;
                uVar14 = uVar14 + 1;
                if (uVar14 == (uVar18 & 0xffffffff)) {
                  if (local_48 == 0) goto LAB_00120cb4;
                  LOCK();
                  plVar2 = (long *)(local_48 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  lVar9 = *plVar2;
                  UNLOCK();
                  goto joined_r0x00120d30;
                }
              } while( true );
            }
            if (local_48 != 0) {
              LOCK();
              plVar2 = (long *)(local_48 + -0x10);
              *plVar2 = *plVar2 + -1;
              lVar9 = *plVar2;
              UNLOCK();
joined_r0x00120d30:
              if (lVar9 == 0) {
                Memory::free_static((void *)(local_48 + -0x10),false);
              }
            }
LAB_00120cb4:
            uVar8 = *(undefined8 *)(lVar11 + 0x28);
            goto LAB_001207a5;
          }
        }
        else if (iVar12 == 1) goto LAB_00120a0d;
        uVar8 = local_68;
        uVar6 = local_60;
        if (local_48 == 0) goto LAB_00120450;
        goto LAB_00120863;
      }
      uVar10 = (uint)*(undefined8 *)(*(long *)(piVar17 + 8) + -8);
      if (lVar9 == 0) {
        if (*(long *)(param_4 + 8) == 0) {
joined_r0x0012084c:
          if (uVar10 == 0) goto LAB_00120983;
        }
        else if (*(uint *)(*(long *)(param_4 + 8) + -8) == uVar10) {
          if (uVar10 != 0) goto LAB_00120528;
          goto LAB_00120983;
        }
        goto LAB_00120852;
      }
      if (uVar10 == 1) goto LAB_00120528;
LAB_001208f2:
      uVar8 = local_68;
      uVar6 = local_60;
      if (local_48 == 0) goto LAB_00120450;
      LOCK();
      plVar2 = (long *)(local_48 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) goto LAB_00120450;
LAB_0012086f:
      Memory::free_static((void *)(local_48 + -0x10),false);
      uVar8 = local_68;
      uVar6 = local_60;
    }
    else {
LAB_00120852:
      uVar8 = local_68;
      uVar6 = local_60;
      if (local_48 != 0) {
LAB_00120863:
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        uVar8 = local_68;
        uVar6 = local_60;
        if (*plVar2 == 0) goto LAB_0012086f;
      }
    }
LAB_00120450:
    local_60 = uVar6;
    local_68 = uVar8;
    uVar8 = local_68;
    uVar6 = local_60;
  }
  local_98 = *param_5;
  local_a0 = 0;
  local_78[0] = 0;
  local_90 = *(undefined1 *)(param_5 + 1);
  local_88 = param_5[2];
  if (param_5[4] != 0) {
    local_68 = uVar8;
    local_60 = uVar6;
    CowData<RID>::_ref((CowData<RID> *)local_78,pCVar1);
  }
  local_68 = *(undefined8 *)param_4;
  local_48 = 0;
  local_60 = (undefined1)param_4[2];
  local_58 = *(long *)(param_4 + 4);
  if (*(long *)(param_4 + 8) == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)(param_4 + 8));
    lVar11 = local_48;
    Vector<RenderingDevice::Uniform>::push_back(local_a8);
    if (lVar11 != 0) {
      LOCK();
      plVar2 = (long *)(lVar11 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
  }
  lVar11 = local_78[0];
  local_48 = 0;
  local_68 = local_98;
  local_60 = local_90;
  local_58 = local_88;
  if (local_78[0] == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
    lVar9 = local_48;
    Vector<RenderingDevice::Uniform>::push_back(local_a8);
    if (lVar9 != 0) {
      LOCK();
      plVar2 = (long *)(lVar9 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
      lVar11 = local_78[0];
      if (local_78[0] == 0) goto LAB_00120780;
    }
    LOCK();
    plVar2 = (long *)(lVar11 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
  }
LAB_00120780:
  uVar8 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                    (this,param_2,param_3,uVar7,uVar7 % 0x3ffd,local_a8);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_a0);
LAB_001207a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(RID, unsigned int,
   RenderingDevice::Uniform) */

undefined8 __thiscall
UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
          (UniformSetCacheRD *this,long param_2,int param_3,ulong *param_4)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  int iVar17;
  undefined1 auVar16 [16];
  Vector<RenderingDevice::Uniform> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulong local_58;
  long local_48;
  long local_40;
  
  iVar8 = (int)((ulong)param_2 >> 0x20);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar17 = (int)(*param_4 >> 0x20);
  uVar7 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar7 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  uVar7 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  uVar7 = ((int)*param_4 * 0x16a88000 | (uint)((int)*param_4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  uVar7 = (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  uVar11 = param_4[2];
  if (uVar11 != 0) {
    uVar14 = 1;
LAB_001210e6:
    uVar15 = 0;
    do {
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar12 = 0;
LAB_001211f1:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar12 = *(long *)(uVar11 - 8);
        if (lVar12 <= (long)uVar15) goto LAB_001211f1;
        uVar11 = *(ulong *)(uVar11 + uVar15 * 8);
LAB_00121109:
        iVar8 = (int)(uVar11 >> 0x20);
        uVar9 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar7 = uVar7 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar15 == 0) goto LAB_00121109;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar9 = 0;
      }
      uVar15 = uVar15 + 1;
      uVar9 = uVar9 ^ (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
      uVar7 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
      if (uVar15 == uVar14) goto LAB_00121170;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar15 = *(ulong *)(param_4[4] - 8), uVar14 = uVar15 & 0xffffffff, (int)uVar15 != 0))
  goto LAB_001210e6;
  goto LAB_00120e50;
LAB_00121170:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_00120e50:
  uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
  uVar7 = uVar7 ^ uVar7 >> 0x10;
  lVar2 = *(long *)(this + (ulong)(uVar7 % 0x3ffd) * 8 + 0x1e0);
  uVar6 = auVar16._0_8_;
  uVar10 = local_68;
joined_r0x00120eb3:
  local_68 = uVar6;
  if (lVar2 == 0) {
    local_60 = (undefined1)param_4[1];
    local_70 = 0;
    local_48 = 0;
    local_58 = param_4[2];
    if (param_4[4] == 0) {
      Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)(param_4 + 4));
      lVar12 = local_48;
      Vector<RenderingDevice::Uniform>::push_back(local_78);
      if (lVar12 != 0) {
        LOCK();
        plVar1 = (long *)(lVar12 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
    }
    uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                       (this,param_2,param_3,uVar7,uVar7 % 0x3ffd,local_78);
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_70);
LAB_001210b3:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar10;
  }
  local_68 = uVar10;
  if ((((*(uint *)(lVar2 + 0x10) == uVar7) && (*(int *)(lVar2 + 0x20) == param_3)) &&
      (param_2 == *(long *)(lVar2 + 0x18))) && (*(int *)(lVar2 + 0x30) == 1)) {
    piVar3 = *(int **)(lVar2 + 0x38);
    if ((auVar16._4_4_ == piVar3[1]) && (auVar16._0_4_ == *piVar3)) {
      uVar11 = param_4[2];
      if (*(long *)(piVar3 + 4) == 0) {
        if (*(long *)(piVar3 + 8) == 0) {
          if (uVar11 != 0) goto LAB_00120ec0;
          if (param_4[4] != 0) {
            uVar9 = *(uint *)(param_4[4] - 8);
joined_r0x00121379:
            if (uVar9 != 0) goto LAB_00120ec0;
          }
LAB_0012129d:
          uVar10 = *(undefined8 *)(lVar2 + 0x28);
          goto LAB_001210b3;
        }
        uVar9 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
        if (uVar11 == 0) {
          if (param_4[4] == 0) goto joined_r0x00121379;
          if (*(uint *)(param_4[4] - 8) == uVar9) {
            if (uVar9 != 0) goto LAB_00120f36;
            goto LAB_0012129d;
          }
        }
        else if (uVar9 == 1) goto LAB_00120f36;
      }
      else {
        uVar9 = 1;
        if (uVar11 != 0) {
LAB_00120f36:
          uVar14 = 0;
          do {
            uVar15 = uVar14;
            if (uVar11 == 0) {
              uVar11 = param_4[4];
              if (uVar11 == 0) {
                lVar12 = 0;
                goto LAB_001211f1;
              }
              lVar12 = *(long *)(uVar11 - 8);
              if (lVar12 <= (long)uVar14) goto LAB_001211f1;
              uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
              uVar13 = *(ulong *)(piVar3 + 4);
              if (uVar13 == 0) goto LAB_00120f73;
              if (uVar14 != 0) goto LAB_00120ff4;
            }
            else if (uVar14 == 0) {
              uVar13 = *(ulong *)(piVar3 + 4);
              uVar15 = 0;
              if (uVar13 == 0) {
LAB_00120f73:
                lVar4 = *(long *)(piVar3 + 8);
                if (lVar4 == 0) {
                  lVar12 = 0;
                  goto LAB_001211f1;
                }
                lVar12 = *(long *)(lVar4 + -8);
                if (lVar12 <= (long)uVar15) goto LAB_001211f1;
                uVar13 = *(ulong *)(lVar4 + uVar14 * 8);
              }
            }
            else {
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              if (*(long *)(piVar3 + 4) == 0) {
                uVar11 = 0;
                goto LAB_00120f73;
              }
              uVar11 = 0;
LAB_00120ff4:
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              uVar13 = 0;
            }
            if (uVar13 != uVar11) goto LAB_0012139b;
            uVar14 = uVar14 + 1;
            if (uVar9 <= (uint)uVar14) goto LAB_0012129d;
            uVar11 = param_4[2];
          } while( true );
        }
        if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
          uVar9 = 1;
          goto LAB_00120f36;
        }
      }
    }
  }
LAB_00120ec0:
  lVar2 = *(long *)(lVar2 + 8);
  uVar6 = auVar16._0_8_;
  uVar10 = local_68;
  goto joined_r0x00120eb3;
LAB_0012139b:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_00120ec0;
}



/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_realloc
          (CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this,long param_1)

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
/* Error CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>
          (CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this,long param_1)

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
LAB_001216a0:
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
  if (lVar9 == 0) goto LAB_001216a0;
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
LAB_0012160c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_0012159b;
  }
  else {
    if (lVar11 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0012160c;
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
  uVar7 = _LC117;
  puVar5 = (undefined8 *)((long)puVar8 + lVar3 * 0xc);
  do {
    *puVar5 = uVar7;
    puVar6 = (undefined8 *)((long)puVar5 + 0xc);
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined8 *)(lVar10 + (long)puVar8));
LAB_0012159b:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* String::String(char const*) */

void __thiscall String::String(String *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SubsurfaceScatteringShaderRD::~SubsurfaceScatteringShaderRD() */

void __thiscall
SubsurfaceScatteringShaderRD::~SubsurfaceScatteringShaderRD(SubsurfaceScatteringShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ScreenSpaceReflectionFilterShaderRD::~ScreenSpaceReflectionFilterShaderRD() */

void __thiscall
ScreenSpaceReflectionFilterShaderRD::~ScreenSpaceReflectionFilterShaderRD
          (ScreenSpaceReflectionFilterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ScreenSpaceReflectionShaderRD::~ScreenSpaceReflectionShaderRD() */

void __thiscall
ScreenSpaceReflectionShaderRD::~ScreenSpaceReflectionShaderRD(ScreenSpaceReflectionShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ScreenSpaceReflectionScaleShaderRD::~ScreenSpaceReflectionScaleShaderRD() */

void __thiscall
ScreenSpaceReflectionScaleShaderRD::~ScreenSpaceReflectionScaleShaderRD
          (ScreenSpaceReflectionScaleShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsaoInterleaveShaderRD::~SsaoInterleaveShaderRD() */

void __thiscall SsaoInterleaveShaderRD::~SsaoInterleaveShaderRD(SsaoInterleaveShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsaoBlurShaderRD::~SsaoBlurShaderRD() */

void __thiscall SsaoBlurShaderRD::~SsaoBlurShaderRD(SsaoBlurShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsaoImportanceMapShaderRD::~SsaoImportanceMapShaderRD() */

void __thiscall
SsaoImportanceMapShaderRD::~SsaoImportanceMapShaderRD(SsaoImportanceMapShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsaoShaderRD::~SsaoShaderRD() */

void __thiscall SsaoShaderRD::~SsaoShaderRD(SsaoShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsilInterleaveShaderRD::~SsilInterleaveShaderRD() */

void __thiscall SsilInterleaveShaderRD::~SsilInterleaveShaderRD(SsilInterleaveShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsilBlurShaderRD::~SsilBlurShaderRD() */

void __thiscall SsilBlurShaderRD::~SsilBlurShaderRD(SsilBlurShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsilImportanceMapShaderRD::~SsilImportanceMapShaderRD() */

void __thiscall
SsilImportanceMapShaderRD::~SsilImportanceMapShaderRD(SsilImportanceMapShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsilShaderRD::~SsilShaderRD() */

void __thiscall SsilShaderRD::~SsilShaderRD(SsilShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SsEffectsDownsampleShaderRD::~SsEffectsDownsampleShaderRD() */

void __thiscall
SsEffectsDownsampleShaderRD::~SsEffectsDownsampleShaderRD(SsEffectsDownsampleShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<RenderingDevice::Uniform, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector
          (LocalVector<RenderingDevice::Uniform,unsigned_int,false,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




/* RendererRD::SkyRD::SkyShaderData::casts_shadows() const */

undefined8 RendererRD::SkyRD::SkyShaderData::casts_shadows(void)

{
  return 0;
}



/* RendererRD::SkyRD::SkyShaderData::get_native_source_code() const */

void RendererRD::SkyRD::SkyShaderData::get_native_source_code(void)

{
  long lVar1;
  long in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::version_get_native_source_code
            (in_RDI,RendererSceneRenderRD::singleton + 0x448,*(undefined8 *)(in_RSI + 0x78));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SkyRD::SkyMaterialData::update_parameters(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, bool, bool) */

void __thiscall
RendererRD::SkyRD::SkyMaterialData::update_parameters
          (SkyMaterialData *this,HashMap *param_1,bool param_2,bool param_3)

{
  Version *pVVar1;
  char cVar2;
  char *pcVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = RendererSceneRenderRD::singleton;
  this[0xb8] = (SkyMaterialData)0x1;
  uVar8 = *(ulong *)(*(long *)(this + 0xa8) + 0x78);
  if (*(long *)(lVar5 + 0x460) == 0) {
    lVar12 = 0;
LAB_00100283:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar12,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar5 + 0x460) + -8);
    if (lVar12 < 1) goto LAB_00100283;
    pcVar3 = *(char **)(lVar5 + 0x470);
    if (pcVar3 == (char *)0x0) {
LAB_00100330:
      lVar12 = 0;
LAB_00100333:
      uVar8 = 0;
LAB_00100350:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar12 = *(long *)(pcVar3 + -8);
    if (lVar12 < 1) goto LAB_00100333;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar11 = 0;
      goto LAB_001001bc;
    }
    if ((uVar8 == 0) || (*(uint *)(lVar5 + 0x51c) <= (uint)uVar8)) {
LAB_00100300:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar11 = 0;
      goto LAB_001001bc;
    }
    lVar9 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar5 + 0x518)) * 0xa0 +
            *(long *)(*(long *)(lVar5 + 0x508) +
                     ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar5 + 0x518)) * 8);
    if (*(int *)(lVar9 + 0x98) != (int)(uVar8 >> 0x20)) {
      if (*(int *)(lVar9 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00100300;
    }
    pVVar1 = (Version *)(lVar5 + 0x448);
    iVar10 = (int)lVar9;
    if (*(char *)(lVar9 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar12 = *(long *)(lVar5 + 0x4c0);
      if (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(lVar12 + -8) <= lVar13) break;
          if (*(char *)(lVar12 + lVar13) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar10);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar10);
          }
          lVar12 = *(long *)(lVar5 + 0x4c0);
          lVar13 = lVar13 + 1;
        } while (lVar12 != 0);
      }
    }
    puVar4 = *(uint **)(lVar5 + 0x480);
    if (puVar4 == (uint *)0x0) goto LAB_00100330;
    lVar12 = *(long *)(puVar4 + -2);
    if (lVar12 < 1) goto LAB_00100333;
    uVar8 = (ulong)*puVar4;
    lVar5 = *(long *)(lVar9 + 0x68);
    if (lVar5 == 0) {
      lVar12 = 0;
      goto LAB_00100350;
    }
    lVar12 = *(long *)(lVar5 + -8);
    if (lVar12 <= (long)uVar8) goto LAB_00100350;
    if (*(long *)(lVar5 + uVar8 * 8) == 0) {
      cVar2 = *(char *)(lVar9 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end(pVVar1,iVar10);
      cVar2 = *(char *)(lVar9 + 0x90);
    }
    if (cVar2 != '\0') {
      puVar6 = *(undefined8 **)(lVar9 + 0x88);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00100330;
      lVar12 = puVar6[-1];
      if (0 < lVar12) {
        uVar11 = *puVar6;
        goto LAB_001001bc;
      }
      goto LAB_00100333;
    }
  }
  uVar11 = 0;
LAB_001001bc:
  lVar5 = *(long *)(this + 0xa8);
  RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set
            (this,param_1,param_2,param_3,lVar5 + 0x10,*(undefined8 *)(lVar5 + 0xb90),lVar5 + 0xb78,
             lVar5 + 0x40,*(undefined4 *)(lVar5 + 0xb98),this + 0xb0,uVar11,1,1,1);
  return;
}



/* RendererRD::SkyRD::SkyMaterialData::~SkyMaterialData() */

void __thiscall RendererRD::SkyRD::SkyMaterialData::~SkyMaterialData(SkyMaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_00118930;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  return;
}



/* CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_copy_on_write
          (CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap> *this)

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
  __n = lVar2 * 0x70;
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



/* RendererRD::SkyRD::SkyMaterialData::~SkyMaterialData() */

void __thiscall RendererRD::SkyRD::SkyMaterialData::~SkyMaterialData(SkyMaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_00118930;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  operator_delete(this,0xc0);
  return;
}



/* CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_ref(CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>
   const&) [clone .part.0] */

void __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_ref
          (CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *this,CowData *param_1)

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



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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
  __n = lVar2 * 0x10;
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



/* CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_copy_on_write
          (CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *this)

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
  __n = lVar2 * 0x68;
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



/* RendererRD::SkyRD::_render_sky(long, float, RID, PipelineCacheRD*, RID, RID, Projection const&,
   Basis const&, Vector3 const&, float, float) */

void __thiscall
RendererRD::SkyRD::_render_sky
          (undefined4 param_2,undefined4 param_2_00,undefined4 param_3,SkyRD *this,void *param_1,
          undefined8 param_6,char *param_7,long param_8,undefined8 param_9,undefined4 *param_10,
          undefined8 *param_11,undefined8 *param_12)

{
  long *plVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_50 = CONCAT44(param_3,param_2_00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_68 = *param_12;
  uStack_6c = param_10[5];
  local_60._8_8_ = 0;
  local_60._0_8_ = CONCAT44(param_2,*(undefined4 *)(param_12 + 1));
  local_7c._4_4_ = *param_10;
  local_7c._0_4_ = param_10[8];
  local_7c._8_4_ = param_10[9];
  local_7c._12_4_ = 0;
  local_7c = local_7c << 0x20;
  auVar2._4_8_ = CONCAT44(param_2,*(undefined4 *)(param_12 + 1));
  auVar2._0_4_ = (int)((ulong)param_11[1] >> 0x20);
  auVar3._4_8_ = auVar2._0_8_ & 0xffffffff;
  auVar3._0_4_ = (int)*param_11;
  local_a8 = auVar3._0_8_;
  local_a0 = *(undefined4 *)(param_11 + 3);
  local_9c._4_4_ = *(undefined4 *)(param_11 + 2);
  local_9c._0_4_ = *(undefined4 *)((long)param_11 + 4);
  local_9c._8_4_ = *(undefined4 *)((long)param_11 + 0x1c);
  local_9c._12_4_ = 0;
  local_9c = local_9c << 0x20;
  local_8c._4_4_ = (int)((ulong)param_11[2] >> 0x20);
  local_8c._0_4_ = (int)param_11[1];
  local_8c._8_4_ = *(undefined4 *)(param_11 + 4);
  local_8c._12_4_ = 0;
  local_8c = local_8c << 0x20;
  uVar6 = RenderingDevice::get_singleton();
  lVar7 = RenderingDevice::framebuffer_get_format(uVar6,param_6);
  uVar6 = RenderingDevice::get_singleton();
  RenderingDevice::get_singleton();
  uVar5 = RenderingDevice::draw_list_get_current_pass();
  if (*(long *)(param_7 + 0x40) == 0) {
    _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                     0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                     "Attempted to use an unused shader variant (shader is null),",0,0);
    lVar7 = 0;
  }
  else {
    while( true ) {
      LOCK();
      cVar4 = *param_7;
      if (cVar4 == '\0') {
        *param_7 = '\x01';
      }
      UNLOCK();
      if (cVar4 == '\0') break;
      do {
      } while (*param_7 != '\0');
    }
    if (*(uint *)(param_7 + 0x130) != 0) {
      plVar8 = *(long **)(param_7 + 0x128);
      plVar1 = plVar8 + (ulong)*(uint *)(param_7 + 0x130) * 5;
      do {
        if ((((*plVar8 == -1) && (lVar7 == plVar8[1])) &&
            (param_7[0x4e] == *(byte *)((long)plVar8 + 0x14))) &&
           ((uVar5 == *(uint *)(plVar8 + 2) && ((int)plVar8[3] == 0)))) {
          lVar7 = plVar8[4];
          *param_7 = '\0';
          goto LAB_00100d9a;
        }
        plVar8 = plVar8 + 5;
      } while (plVar8 != plVar1);
    }
    lVar7 = PipelineCacheRD::_generate_version
                      ((long)param_7,-1,SUB81(lVar7,0),(uint)(byte)param_7[0x4e],uVar5);
    *param_7 = '\0';
  }
LAB_00100d9a:
  RenderingDevice::draw_list_bind_render_pipeline(uVar6,param_1,lVar7);
  uVar6 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set(uVar6,param_1,*(undefined8 *)(this + 0x200),0);
  if (param_8 != 0) {
    uVar6 = RenderingDevice::get_singleton();
    cVar4 = RenderingDevice::uniform_set_is_valid(uVar6,param_8);
    if (cVar4 != '\0') {
      uVar6 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_uniform_set(uVar6,param_1,param_8,1);
    }
  }
  uVar6 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set(uVar6,param_1,param_9,2);
  if (*(long *)(this + 0x210) != 0) {
    uVar6 = RenderingDevice::get_singleton();
    cVar4 = RenderingDevice::uniform_set_is_valid(uVar6,*(undefined8 *)(this + 0x210));
    if (cVar4 != '\0') {
      uVar6 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_uniform_set(uVar6,param_1,*(undefined8 *)(this + 0x210),3);
      goto LAB_00100e24;
    }
  }
  uVar6 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set(uVar6,param_1,*(undefined8 *)(this + 0x218),3);
LAB_00100e24:
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_set_push_constant(lVar7,param_1,(uint)&local_a8);
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_draw(lVar7,SUB81(param_1,0),0,1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::ReflectionData::create_reflection_importance_sample(bool, int, int, unsigned
   int) */

void __thiscall
RendererRD::SkyRD::ReflectionData::create_reflection_importance_sample
          (ReflectionData *this,bool param_1,int param_2,int param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  double dVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uStack_9c;
  undefined8 *local_98;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  undefined8 uVar14;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar5 = (char *)RendererRD::CopyEffects::get_singleton();
  if (pcVar5 == (char *)0x0) {
    _err_print_error("create_reflection_importance_sample",
                     "servers/rendering/renderer_rd/environment/sky.cpp",0x1ba,
                     "Parameter \"copy_effects\" is null.","Effects haven\'t been initialized",0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00101917;
  }
  if (*pcVar5 == '\0') {
    if (param_3 != 1) {
      uStack_9c = _LC46;
LAB_00101114:
      local_98 = &local_58;
      uVar6 = RenderingDevice::get_singleton();
      local_58 = CONCAT44(uStack_9c,uStack_9c);
      uStack_50 = CONCAT44(uStack_9c,uStack_9c);
      local_70 = 0;
      local_68 = "High Quality filter radiance";
      local_60 = 0x1c;
      String::parse_latin1((StrRange *)&local_70);
      RenderingDevice::draw_command_begin_label(uVar6,(StrRange *)&local_70,local_98);
      lVar8 = local_70;
      if (local_70 == 0) {
LAB_00101177:
        lVar7 = *(long *)(this + 0x38);
        if (!param_1) goto LAB_00101186;
LAB_00101260:
        lVar10 = (long)param_3;
        if (-1 < lVar10) {
          if (lVar7 == 0) goto LAB_001017a0;
          lVar12 = *(long *)(lVar7 + -8);
          lVar8 = lVar12;
          if (lVar12 <= lVar10) goto LAB_001017a3;
          lVar7 = lVar10 * 0x20 + lVar7;
          lVar10 = *(long *)(lVar7 + 8);
          if (lVar10 == 0) {
            lVar8 = 0;
LAB_001018f2:
            lVar12 = 0;
            goto LAB_001013d0;
          }
          lVar8 = *(long *)(lVar10 + -8);
          if (lVar8 < 1) goto LAB_001018f2;
          auVar17._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar17._0_4_ = (float)*(int *)(lVar10 + 0x60);
          uVar14 = auVar17._0_8_;
          puVar2 = *(undefined8 **)(lVar7 + 0x18);
          dVar13 = (double)param_3 / ((double)lVar12 - __LC49);
          uVar6 = CONCAT44((int)((ulong)dVar13 >> 0x20),(float)dVar13);
          if (puVar2 == (undefined8 *)0x0) goto LAB_001013b0;
          lVar8 = puVar2[-1];
          if (lVar8 < 1) goto LAB_001013b3;
          uVar9 = *puVar2;
LAB_00101218:
          RendererRD::CopyEffects::cubemap_roughness
                    (uVar6,uVar14,pcVar5,*(undefined8 *)(this + 8),uVar9,param_2,param_4);
LAB_0010122c:
          RenderingDevice::get_singleton();
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            RenderingDevice::draw_command_end_label();
            return;
          }
LAB_00101917:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        if (lVar7 == 0) goto LAB_001017a0;
        lVar8 = *(long *)(lVar7 + -8);
        goto LAB_001017a3;
      }
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101177;
      local_70 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
      lVar7 = *(long *)(this + 0x38);
      if (param_1) goto LAB_00101260;
LAB_00101186:
      if (lVar7 == 0) goto LAB_001013b0;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 < 1) goto LAB_001013b3;
      lVar12 = (long)param_3;
      lVar10 = *(long *)(lVar7 + 8);
      if (lVar12 < 0) {
        if (lVar10 != 0) {
          lVar8 = *(long *)(lVar10 + -8);
          goto LAB_001017a3;
        }
LAB_001017a0:
        lVar8 = 0;
      }
      else {
        if (lVar10 == 0) goto LAB_001017a0;
        lVar8 = *(long *)(lVar10 + -8);
        if (lVar12 < lVar8) {
          lVar7 = *(long *)(lVar7 + 0x18);
          auVar16._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar16._0_4_ = (float)*(int *)(lVar10 + 0x60 + lVar12 * 0x68);
          uVar14 = auVar16._0_8_;
          dVar13 = (double)param_3 / ((double)lVar8 - __LC49);
          uVar6 = CONCAT44((int)((ulong)dVar13 >> 0x20),(float)dVar13);
          if (lVar7 == 0) goto LAB_001017a0;
          lVar8 = *(long *)(lVar7 + -8);
          if (lVar12 < *(long *)(lVar7 + -8)) {
            uVar9 = *(undefined8 *)(lVar7 + lVar12 * 8);
            goto LAB_00101218;
          }
        }
      }
LAB_001017a3:
      lVar12 = (long)param_3;
      goto LAB_001013d0;
    }
    uVar6 = RenderingDevice::get_singleton();
    local_70 = 0;
    local_60 = 0x17;
    local_68 = "Downsample radiance map";
    uStack_9c = _LC46;
    local_58 = CONCAT44(_LC46,_LC46);
    uStack_50 = CONCAT44(_LC46,_LC46);
    String::parse_latin1((StrRange *)&local_70);
    RenderingDevice::draw_command_begin_label(uVar6,(StrRange *)&local_70,&local_58);
    lVar8 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    puVar2 = *(undefined8 **)(this + 0x18);
    if (puVar2 == (undefined8 *)0x0) goto LAB_001013b0;
    lVar8 = puVar2[-1];
    if (0 < lVar8) {
      RendererRD::CopyEffects::cubemap_downsample(pcVar5,*(undefined8 *)this,*puVar2);
      lVar7 = *(long *)(this + 0x18);
      lVar10 = 0;
      lVar12 = 0;
      while (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar12 + 1) break;
        if (lVar8 <= lVar12) goto LAB_001013d0;
        RendererRD::CopyEffects::cubemap_downsample
                  (pcVar5,*(undefined8 *)(lVar7 + lVar10),*(undefined8 *)(lVar7 + lVar10 + 0x70));
        lVar10 = lVar10 + 0x70;
        lVar12 = lVar12 + 1;
        lVar7 = *(long *)(this + 0x18);
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      goto LAB_00101114;
    }
  }
  else {
    if (param_3 == 1) {
      uVar6 = RenderingDevice::get_singleton();
      local_70 = 0;
      local_60 = 0x17;
      local_68 = "Downsample radiance map";
      uStack_9c = _LC46;
      local_58 = CONCAT44(_LC46,_LC46);
      uStack_50 = CONCAT44(_LC46,_LC46);
      String::parse_latin1((StrRange *)&local_70);
      RenderingDevice::draw_command_begin_label(uVar6,(StrRange *)&local_70,&local_58);
      lVar8 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      iVar11 = 0;
      do {
        lVar7 = *(long *)(this + 0x18);
        if (lVar7 == 0) goto LAB_001013b0;
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 < 1) goto LAB_001013b3;
        lVar8 = (long)iVar11;
        iVar11 = iVar11 + 1;
        RendererRD::CopyEffects::cubemap_downsample_raster
                  (pcVar5,*(undefined8 *)this,*(undefined8 *)(lVar7 + 0x40 + lVar8 * 8));
      } while (iVar11 != 6);
      lVar7 = *(long *)(this + 0x18);
      lVar4 = 0;
      for (lVar10 = 1; (lVar7 != 0 && (lVar10 < *(long *)(lVar7 + -8))); lVar10 = lVar10 + 1) {
        iVar11 = 0;
        do {
          lVar12 = lVar10;
          if (lVar7 == 0) {
            lVar8 = 0;
            goto LAB_001013d0;
          }
          lVar8 = *(long *)(lVar7 + -8);
          if ((lVar8 <= lVar10) || (lVar12 = lVar10 + -1, lVar8 <= lVar10 + -1)) goto LAB_001013d0;
          lVar8 = (long)iVar11;
          iVar11 = iVar11 + 1;
          RendererRD::CopyEffects::cubemap_downsample_raster
                    (pcVar5,*(undefined8 *)(lVar7 + lVar4),
                     *(undefined8 *)(lVar7 + lVar4 + 0x70 + 0x40 + lVar8 * 8));
          lVar7 = *(long *)(this + 0x18);
        } while (iVar11 != 6);
        lVar4 = lVar4 + 0x70;
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
    }
    else {
      uStack_9c = _LC46;
    }
    local_98 = &local_58;
    uVar6 = RenderingDevice::get_singleton();
    local_58 = CONCAT44(uStack_9c,uStack_9c);
    uStack_50 = CONCAT44(uStack_9c,uStack_9c);
    local_70 = 0;
    local_68 = "High Quality filter radiance";
    local_60 = 0x1c;
    String::parse_latin1((StrRange *)&local_70);
    RenderingDevice::draw_command_begin_label(uVar6,(StrRange *)&local_70,local_98);
    lVar8 = local_70;
    if (local_70 == 0) {
LAB_00101018:
      lVar7 = *(long *)(this + 0x38);
    }
    else {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101018;
      local_70 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
      lVar7 = *(long *)(this + 0x38);
    }
    if (param_1) {
      lVar12 = (long)param_3;
      if (lVar12 < 0) {
        if (lVar7 != 0) {
LAB_001017d1:
          lVar8 = *(long *)(lVar7 + -8);
          goto LAB_001013d0;
        }
      }
      else {
        iVar11 = 0;
        while (lVar7 != 0) {
          if (*(long *)(lVar7 + -8) <= lVar12) goto LAB_001017d1;
          lVar10 = *(long *)(lVar7 + 8 + lVar12 * 0x20);
          if (lVar10 == 0) goto LAB_001013b0;
          lVar8 = *(long *)(lVar10 + -8);
          if (lVar8 < 1) goto LAB_001013b3;
          lVar8 = (long)iVar11;
          iVar11 = iVar11 + 1;
          dVar13 = (double)param_3 / ((double)*(long *)(lVar7 + -8) - __LC49);
          auVar15._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar15._0_4_ = (float)*(int *)(lVar10 + 0x60);
          RendererRD::CopyEffects::cubemap_roughness_raster
                    (CONCAT44((int)((ulong)dVar13 >> 0x20),(float)dVar13),auVar15._0_8_,pcVar5,
                     *(undefined8 *)(this + 8),*(undefined8 *)(lVar10 + lVar8 * 8));
          if (iVar11 == 6) goto LAB_0010122c;
          lVar7 = *(long *)(this + 0x38);
        }
      }
      lVar8 = 0;
      goto LAB_001013d0;
    }
    lVar12 = (long)param_3;
    iVar11 = 0;
    while (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 < 1) goto LAB_001013b3;
      lVar7 = *(long *)(lVar7 + 8);
      if (lVar12 < 0) {
        if (lVar7 == 0) {
LAB_001018c0:
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(lVar7 + -8);
        }
        goto LAB_001013d0;
      }
      if (lVar7 == 0) goto LAB_001018c0;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 <= lVar12) goto LAB_001013d0;
      lVar7 = lVar7 + lVar12 * 0x68;
      lVar10 = (long)iVar11;
      iVar11 = iVar11 + 1;
      dVar13 = (double)param_3 / ((double)lVar8 - __LC49);
      auVar18._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar18._0_4_ = (float)*(int *)(lVar7 + 0x60);
      RendererRD::CopyEffects::cubemap_roughness_raster
                (CONCAT44((int)((ulong)dVar13 >> 0x20),(float)dVar13),auVar18._0_8_,pcVar5,
                 *(undefined8 *)(this + 8),*(undefined8 *)(lVar7 + lVar10 * 8));
      if (iVar11 == 6) goto LAB_0010122c;
      lVar7 = *(long *)(this + 0x38);
    }
LAB_001013b0:
    lVar8 = 0;
  }
LAB_001013b3:
  lVar12 = 0;
LAB_001013d0:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* RendererRD::SkyRD::ReflectionData::update_reflection_mipmaps(int, int) */

void __thiscall
RendererRD::SkyRD::ReflectionData::update_reflection_mipmaps
          (ReflectionData *this,int param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar9 = (char *)RendererRD::CopyEffects::get_singleton();
  if (pcVar9 == (char *)0x0) {
    _err_print_error("update_reflection_mipmaps","servers/rendering/renderer_rd/environment/sky.cpp"
                     ,0x1ff,"Parameter \"copy_effects\" is null.",
                     "Effects haven\'t been initialized",0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    cVar4 = *pcVar9;
    uVar10 = RenderingDevice::get_singleton();
    local_70 = 0;
    local_68 = "Update Radiance Cubemap Array Mipmaps";
    local_58 = CONCAT44(_LC46,_LC46);
    uStack_50 = _LC46;
    uStack_4c = _LC46;
    local_60 = 0x25;
    String::parse_latin1((StrRange *)&local_70);
    RenderingDevice::draw_command_begin_label(uVar10,(StrRange *)&local_70,&local_58);
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (param_1 < param_2) {
      lVar15 = (long)param_1;
      lVar11 = *(long *)(this + 0x38);
      lVar3 = (ulong)(uint)(param_2 - param_1) + lVar15;
      if (lVar15 < 0) {
        if (lVar11 == 0) {
LAB_00101abc:
          lVar12 = lVar15;
          lVar14 = 0;
        }
        else {
LAB_00101ba9:
          lVar12 = lVar15;
          lVar14 = *(long *)(lVar11 + -8);
        }
LAB_00101add:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar14,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      do {
        lVar12 = 0;
        while( true ) {
          if (lVar11 == 0) goto LAB_00101abc;
          if (*(long *)(lVar11 + -8) <= lVar15) goto LAB_00101ba9;
          lVar14 = lVar11 + lVar15 * 0x20;
          lVar5 = *(long *)(lVar14 + 0x18);
          if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + -8), lVar6 + -1 <= lVar12)) break;
          lVar7 = *(long *)(lVar14 + 8);
          lVar2 = lVar12 + 1;
          uVar10 = *(undefined8 *)(lVar5 + lVar12 * 8);
          lVar12 = lVar2;
          if (lVar7 == 0) {
LAB_00101bb8:
            lVar12 = lVar2;
            lVar14 = 0;
            goto LAB_00101add;
          }
          lVar14 = *(long *)(lVar7 + -8);
          if (*(long *)(lVar7 + -8) <= lVar2) goto LAB_00101add;
          local_58 = *(undefined8 *)(lVar7 + 0x60 + lVar2 * 0x68);
          if (cVar4 == '\0') {
            lVar14 = lVar6;
            if (lVar6 <= lVar2) goto LAB_00101add;
            RendererRD::CopyEffects::cubemap_downsample
                      (pcVar9,uVar10,*(undefined8 *)(lVar5 + lVar2 * 8),&local_58);
          }
          else {
            iVar13 = 0;
            while( true ) {
              lVar12 = lVar15;
              lVar14 = *(long *)(lVar11 + -8);
              if (*(long *)(lVar11 + -8) <= lVar15) goto LAB_00101add;
              lVar11 = *(long *)(lVar11 + 8 + lVar15 * 0x20);
              if (lVar11 == 0) goto LAB_00101bb8;
              lVar12 = lVar2;
              lVar14 = *(long *)(lVar11 + -8);
              if (*(long *)(lVar11 + -8) <= lVar2) goto LAB_00101add;
              RendererRD::CopyEffects::cubemap_downsample_raster
                        (pcVar9,uVar10,*(undefined8 *)(lVar11 + (long)iVar13 * 8 + lVar2 * 0x68),
                         iVar13);
              if (iVar13 + 1 == 6) break;
              lVar11 = *(long *)(this + 0x38);
              iVar13 = iVar13 + 1;
              if (lVar11 == 0) goto LAB_00101abc;
            }
          }
          lVar11 = *(long *)(this + 0x38);
          lVar12 = lVar2;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar3);
    }
    RenderingDevice::get_singleton();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderingDevice::draw_command_end_label();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SkyRD::Sky::set_material(RID) */

bool __thiscall RendererRD::SkyRD::Sky::set_material(Sky *this,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 != param_2) {
    *(long *)(this + 0x28) = param_2;
  }
  return lVar1 != param_2;
}



/* RendererRD::SkyRD::_create_sky_shader_func() */

undefined8 * RendererRD::SkyRD::_create_sky_shader_func(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  PipelineCacheRD *this;
  PipelineCacheRD *pPVar3;
  
  puVar2 = (undefined8 *)operator_new(0xbb0,"");
  puVar2[1] = 0;
  *(undefined1 (*) [16])(puVar2 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 5) = (undefined1  [16])0x0;
  uVar1 = _LC52;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  puVar2[7] = uVar1;
  puVar2[0xd] = uVar1;
  *puVar2 = &PTR_set_path_hint_001188c0;
  puVar2[0xf] = 0;
  *(undefined1 (*) [16])(puVar2 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xb) = (undefined1  [16])0x0;
  this = (PipelineCacheRD *)(puVar2 + 0x10);
  do {
    pPVar3 = this + 0x138;
    PipelineCacheRD::PipelineCacheRD(this);
    this = pPVar3;
  } while ((PipelineCacheRD *)(puVar2 + 0x16f) != pPVar3);
  puVar2[0x170] = 0;
  puVar2[0x172] = 0;
  *(undefined4 *)(puVar2 + 0x173) = 0;
  puVar2[0x174] = 0;
  *(undefined4 *)(puVar2 + 0x175) = 0;
  *(undefined1 *)((long)puVar2 + 0xbac) = 0;
  return puVar2;
}



/* RendererRD::SkyRD::_create_sky_shader_funcs() */

void RendererRD::SkyRD::_create_sky_shader_funcs(void)

{
  _create_sky_shader_func();
  return;
}



/* RendererRD::SkyRD::_create_sky_material_func(RendererRD::SkyRD::SkyShaderData*) */

void __thiscall RendererRD::SkyRD::_create_sky_material_func(SkyRD *this,SkyShaderData *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0,"");
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[0xc] = 2;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x14] = 0;
  *puVar1 = &PTR_set_render_priority_00118930;
  puVar1[0x16] = 0;
  puVar1[0x15] = param_1;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x11) = (undefined1  [16])0x0;
  return;
}



/* RendererRD::SkyRD::_create_sky_material_funcs(RendererRD::MaterialStorage::ShaderData*) */

void RendererRD::SkyRD::_create_sky_material_funcs(ShaderData *param_1)

{
  _create_sky_material_func
            ((SkyRD *)(RendererSceneRenderRD::singleton + 0x210),(SkyShaderData *)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::SkyRD() */

void __thiscall RendererRD::SkyRD::SkyRD(SkyRD *this)

{
  undefined8 uVar1;
  SkyRD SVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x168) = 1;
  auVar6 = ZEXT416(_LC46);
  *(undefined4 *)(this + 0x18c) = 0x3f800000;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined1 (*) [16])(this + 0x16c) = auVar6;
  *(undefined1 (*) [16])(this + 0x17c) = auVar6;
  *(undefined8 *)this = 0x6000000004;
  Projection::Projection((Projection *)(this + 0x19c));
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0x238));
  *(undefined ***)(this + 0x238) = &PTR__SkyShaderRD_00118880;
  ShaderRD::setup((char *)(this + 0x238),
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define MAX_VIEWS 2\n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\nlayout(location = 0) out vec2 uv_interp;\n\nlayout(push_constant, std430) uniform Params {\n\tmat3 orientation;\n\tvec4 projection; \n\tvec3 position;\n\tfloat time;\n\tvec2 pad;\n\tfloat luminance_multiplier;\n\tfloat brightness_multiplier;\n}\nparams;\n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -3.0), vec2(-1.0, 1.0), vec2(3.0, 1.0));\n\tuv_interp = base_arr[gl_VertexIndex];\n\tgl_Position = vec4(uv_interp, 0.0, 1.0);\n}\n\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#extension GL_EXT_multiview : enable\n#define ViewIndex gl_ViewIndex\n#else \n\n#define ViewIndex 0\n#endif \n#else \n\n#define ViewIndex 0\n#endif \n\n#define M_PI 3.14159265359\n#define MAX_VIEWS 2\n\nlayout(location = 0) in vec2 uv_interp;\n\nlayout(push_constant, std430) uniform Params {\n\tmat3 orientation;\n\tvec4 projection; \n\tvec3 position;\n\tfloat time;\n\tvec2 pad;\n\tfloat luminance_multiplier;\n\tfloat brightness_multiplier;\n}\nparams;\n\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 0) uniform sampler SAMPLER_NEAREST_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 1) uniform sampler SAMPLER_LINEAR_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 2) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 3) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 4) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_ANISOTROPIC_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 5) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_ANISOTROPIC_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 6) uniform sampler SAMPLER_NEAREST_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 7) uniform sampler SAMPLER_LINEAR_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 8) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 9) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 10) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_ANISOTROPIC_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 11) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_ANISOTROPIC_REPEAT;\n\nlayout(set = 0, binding = 1, std430) restrict readonly buffer GlobalShaderUniformData {\n\tvec4 data[];\n}\nglobal_shader_uniforms;\n\nlayout(set = 0, binding = 2, std140) uniform SkySceneData {\n\tmat4 com..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  ShaderCompiler::ShaderCompiler((ShaderCompiler *)(this + 0x3b0));
  *(undefined1 (*) [16])(this + 0x8b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x920) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x910) = (undefined1  [16])0x0;
  uVar1 = _UNK_0011ae08;
  uVar5 = __LC56;
  *(undefined8 *)(this + 0x8c8) = 0;
  *(undefined8 *)(this + 0x8d8) = 0;
  *(undefined ***)(this + 0x8e0) = &PTR__RID_Alloc_001188a0;
  *(undefined8 *)(this + 0x8e8) = 0;
  *(undefined8 *)(this + 0x8f0) = 0;
  *(undefined8 *)(this + 0x908) = 0;
  *(undefined8 *)(this + 0x930) = 0;
  *(undefined4 *)(this + 0x920) = 1;
  *(undefined8 *)(this + 0x8f8) = uVar5;
  *(undefined8 *)(this + 0x900) = uVar1;
  uVar5 = Memory::alloc_static(0x1608,false);
  *(undefined8 *)(this + 0x8e8) = uVar5;
  uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x904) << 3,false);
  *(undefined8 *)(this + 0x8f0) = uVar5;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/reflections/sky_reflections/roughness_layers",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x938) = iVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/reflections/sky_reflections/ggx_samples",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  uVar4 = Variant::operator_cast_to_unsigned_int((Variant *)local_48);
  *(uint *)(this + 0x8d0) = uVar4;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,
             "rendering/reflections/sky_reflections/texture_array_reflections",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  SVar2 = (SkyRD)Variant::operator_cast_to_bool((Variant *)local_48);
  this[0x8d4] = SVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SkyRD::set_texture_format(RenderingDeviceCommons::DataFormat) */

void __thiscall RendererRD::SkyRD::set_texture_format(SkyRD *this,undefined4 param_2)

{
  *(undefined4 *)(this + 4) = param_2;
  return;
}



/* RendererRD::SkyRD::invalidate_sky(RendererRD::SkyRD::Sky*) */

void __thiscall RendererRD::SkyRD::invalidate_sky(SkyRD *this,Sky *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0x80] == (Sky)0x0) {
    uVar1 = *(undefined8 *)(this + 0x8d8);
    param_1[0x80] = (Sky)0x1;
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    *(Sky **)(this + 0x8d8) = param_1;
  }
  return;
}



/* RendererRD::SkyRD::get_sky(RID) const */

long __thiscall RendererRD::SkyRD::get_sky(SkyRD *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x8fc))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x8f8)) * 0xb8 +
            *(long *)(*(long *)(this + 0x8e8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x8f8)) * 8);
    iVar1 = *(int *)(lVar2 + 0xb0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return lVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      return 0;
    }
  }
  return 0;
}



/* RendererRD::SkyRD::sky_get_material(RID) const */

undefined8 RendererRD::SkyRD::sky_get_material(void)

{
  long lVar1;
  
  lVar1 = get_sky();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
  _err_print_error("sky_get_material","servers/rendering/renderer_rd/environment/sky.cpp",0x674,
                   "Parameter \"sky\" is null.",0,0);
  return 0;
}



/* RendererRD::SkyRD::sky_get_baked_exposure(RID) const */

undefined4 RendererRD::SkyRD::sky_get_baked_exposure(void)

{
  long lVar1;
  
  lVar1 = get_sky();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x90);
  }
  _err_print_error("sky_get_baked_exposure","servers/rendering/renderer_rd/environment/sky.cpp",
                   0x67b,"Parameter \"sky\" is null.",0,0);
  return _LC46;
}



/* RendererRD::SkyRD::sky_set_material(RID, RID) */

void __thiscall RendererRD::SkyRD::sky_set_material(SkyRD *this,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = get_sky();
  if (lVar2 != 0) {
    if ((param_3 != *(long *)(lVar2 + 0x28)) &&
       (*(long *)(lVar2 + 0x28) = param_3, *(char *)(lVar2 + 0x80) == '\0')) {
      uVar1 = *(undefined8 *)(this + 0x8d8);
      *(undefined1 *)(lVar2 + 0x80) = 1;
      *(undefined8 *)(lVar2 + 0x88) = uVar1;
      *(long *)(this + 0x8d8) = lVar2;
    }
    return;
  }
  _err_print_error("sky_set_material","servers/rendering/renderer_rd/environment/sky.cpp",0x6a8,
                   "Parameter \"sky\" is null.",0,0);
  return;
}



/* RendererRD::SkyRD::sky_get_radiance_texture_rd(RID) const */

undefined8 RendererRD::SkyRD::sky_get_radiance_texture_rd(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)get_sky();
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  _err_print_error("sky_get_radiance_texture_rd","servers/rendering/renderer_rd/environment/sky.cpp"
                   ,0x6ba,"Parameter \"sky\" is null.",0,0);
  return 0;
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



/* RendererRD::SkyRD::ReflectionData::create_reflection_fast_filter(bool) */

void __thiscall
RendererRD::SkyRD::ReflectionData::create_reflection_fast_filter(ReflectionData *this,bool param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = (char *)RendererRD::CopyEffects::get_singleton();
  if (pcVar6 == (char *)0x0) {
    _err_print_error("create_reflection_fast_filter",
                     "servers/rendering/renderer_rd/environment/sky.cpp",0x180,
                     "Parameter \"copy_effects\" is null.","Effects haven\'t been initialized",0,0);
LAB_00102ac1:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00102dfe:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (*pcVar6 == '\0') {
    uVar7 = RenderingDevice::get_singleton();
    uVar5 = _LC46;
    local_68 = "Downsample radiance map";
    local_58 = CONCAT44(_LC46,_LC46);
    uStack_50 = CONCAT44(_LC46,_LC46);
    local_78 = 0;
    local_60 = 0x17;
    String::parse_latin1((StrRange *)&local_78);
    RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_78,&local_58);
    lVar8 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    puVar2 = *(undefined8 **)(this + 0x18);
    if (puVar2 == (undefined8 *)0x0) goto LAB_00102890;
    lVar8 = puVar2[-1];
    if (0 < lVar8) {
      RendererRD::CopyEffects::cubemap_downsample(pcVar6,*(undefined8 *)this,*puVar2);
      lVar11 = *(long *)(this + 0x18);
      lVar9 = 0;
      lVar12 = 0;
      while (lVar11 != 0) {
        lVar8 = *(long *)(lVar11 + -8);
        if (lVar8 <= lVar12 + 1) break;
        if (lVar8 <= lVar12) goto LAB_001027ed;
        RendererRD::CopyEffects::cubemap_downsample
                  (pcVar6,*(undefined8 *)(lVar11 + lVar9),*(undefined8 *)(lVar11 + lVar9 + 0x70));
        lVar9 = lVar9 + 0x70;
        lVar12 = lVar12 + 1;
        lVar11 = *(long *)(this + 0x18);
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      local_70 = 0;
      if (param_1) {
        lVar8 = *(long *)(this + 0x38);
        for (lVar11 = 1; (lVar8 != 0 && (lVar11 < *(long *)(lVar8 + -8))); lVar11 = lVar11 + 1) {
          puVar2 = *(undefined8 **)(lVar8 + 0x18 + lVar11 * 0x20);
          if (puVar2 == (undefined8 *)0x0) goto LAB_00102890;
          lVar8 = puVar2[-1];
          if (lVar8 < 1) goto LAB_00102893;
          Vector<RID>::push_back((Vector<RID> *)&local_78,*puVar2);
          lVar8 = *(long *)(this + 0x38);
        }
LAB_00102951:
        uVar7 = RenderingDevice::get_singleton();
        local_58 = CONCAT44(uVar5,uVar5);
        uStack_50 = CONCAT44(uVar5,uVar5);
        local_80 = 0;
        local_68 = "Fast filter radiance";
        local_60 = 0x14;
        String::parse_latin1((StrRange *)&local_80);
        RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_80,&local_58);
        lVar8 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        local_60 = 0;
        plVar1 = (long *)(local_70 + -0x10);
        if (local_70 != 0) {
          do {
            lVar8 = *plVar1;
            if (lVar8 == 0) goto LAB_001029f6;
            LOCK();
            lVar11 = *plVar1;
            bVar13 = lVar8 == lVar11;
            if (bVar13) {
              *plVar1 = lVar8 + 1;
              lVar11 = lVar8;
            }
            UNLOCK();
          } while (!bVar13);
          if (lVar11 != -1) {
            local_60 = local_70;
          }
        }
LAB_001029f6:
        RendererRD::CopyEffects::cubemap_filter(pcVar6,*(undefined8 *)(this + 8),&local_68,param_1);
        lVar8 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static((void *)(local_70 + -0x10),false);
              return;
            }
            goto LAB_00102dfe;
          }
        }
        goto LAB_00102ac1;
      }
      lVar12 = 1;
      lVar11 = *(long *)(this + 0x38);
      while (lVar11 != 0) {
        lVar8 = *(long *)(lVar11 + -8);
        if (lVar8 < 1) goto LAB_00102893;
        lVar8 = *(long *)(lVar11 + 0x18);
        if ((lVar8 == 0) || (*(long *)(lVar8 + -8) <= lVar12)) goto LAB_00102951;
        lVar11 = lVar12 * 8;
        lVar12 = lVar12 + 1;
        Vector<RID>::push_back((Vector<RID> *)&local_78,*(undefined8 *)(lVar8 + lVar11));
        lVar11 = *(long *)(this + 0x38);
      }
      goto LAB_00102890;
    }
  }
  else {
    uVar7 = RenderingDevice::get_singleton();
    uVar5 = _LC46;
    local_68 = "Downsample radiance map";
    local_58 = CONCAT44(_LC46,_LC46);
    uStack_50 = CONCAT44(_LC46,_LC46);
    local_78 = 0;
    local_60 = 0x17;
    String::parse_latin1((StrRange *)&local_78);
    RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_78,&local_58);
    lVar8 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    iVar10 = 0;
    do {
      lVar11 = *(long *)(this + 0x18);
      if (lVar11 == 0) goto LAB_00102890;
      lVar8 = *(long *)(lVar11 + -8);
      if (lVar8 < 1) goto LAB_00102893;
      lVar8 = (long)iVar10;
      iVar10 = iVar10 + 1;
      RendererRD::CopyEffects::cubemap_downsample_raster
                (pcVar6,*(undefined8 *)this,*(undefined8 *)(lVar11 + 0x40 + lVar8 * 8));
    } while (iVar10 != 6);
    lVar11 = *(long *)(this + 0x18);
    lVar4 = 0;
    for (lVar9 = 1; (lVar11 != 0 && (lVar9 < *(long *)(lVar11 + -8))); lVar9 = lVar9 + 1) {
      iVar10 = 0;
      do {
        lVar12 = lVar9;
        if (lVar11 == 0) {
          lVar8 = 0;
          goto LAB_001027ed;
        }
        lVar8 = *(long *)(lVar11 + -8);
        if ((lVar8 <= lVar9) || (lVar12 = lVar9 + -1, lVar8 <= lVar9 + -1)) goto LAB_001027ed;
        lVar8 = (long)iVar10;
        iVar10 = iVar10 + 1;
        RendererRD::CopyEffects::cubemap_downsample_raster
                  (pcVar6,*(undefined8 *)(lVar11 + lVar4),
                   *(undefined8 *)(lVar11 + lVar4 + 0x70 + 0x40 + lVar8 * 8));
        lVar11 = *(long *)(this + 0x18);
      } while (iVar10 != 6);
      lVar4 = lVar4 + 0x70;
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    if (param_1) {
      uVar7 = RenderingDevice::get_singleton();
      local_58 = CONCAT44(uVar5,uVar5);
      uStack_50 = CONCAT44(uVar5,uVar5);
      local_78 = 0;
      local_68 = "filter radiance map into array heads";
      local_60 = 0x24;
      String::parse_latin1((StrRange *)&local_78);
      RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_78,&local_58);
      lVar8 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar11 = *(long *)(this + 0x38);
      for (lVar12 = 0; (lVar11 != 0 && (lVar12 < *(long *)(lVar11 + -8))); lVar12 = lVar12 + 1) {
        iVar10 = 0;
        do {
          if (lVar11 == 0) goto LAB_00102dd8;
          lVar8 = *(long *)(lVar11 + -8);
          if (lVar8 <= lVar12) goto LAB_001027ed;
          lVar11 = *(long *)(lVar11 + 8 + lVar12 * 0x20);
          if (lVar11 == 0) goto LAB_00102890;
          lVar8 = *(long *)(lVar11 + -8);
          if (lVar8 < 1) goto LAB_00102893;
          lVar8 = (long)iVar10;
          iVar10 = iVar10 + 1;
          RendererRD::CopyEffects::cubemap_filter_raster
                    (pcVar6,*(undefined8 *)(this + 8),*(undefined8 *)(lVar11 + lVar8 * 8));
          lVar11 = *(long *)(this + 0x38);
        } while (iVar10 != 6);
      }
LAB_00102c81:
      RenderingDevice::get_singleton();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        RenderingDevice::draw_command_end_label();
        return;
      }
      goto LAB_00102dfe;
    }
    uVar7 = RenderingDevice::get_singleton();
    local_58 = CONCAT44(uVar5,uVar5);
    uStack_50 = CONCAT44(uVar5,uVar5);
    local_78 = 0;
    local_68 = "filter radiance map into mipmaps directly";
    local_60 = 0x29;
    String::parse_latin1((StrRange *)&local_78);
    RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_78,&local_58);
    lVar8 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar11 = *(long *)(this + 0x38);
    lVar9 = 0;
    lVar12 = 0;
    while (lVar11 != 0) {
      lVar8 = *(long *)(lVar11 + -8);
      if (lVar8 < 1) goto LAB_00102893;
      if ((*(long *)(lVar11 + 8) == 0) || (*(long *)(*(long *)(lVar11 + 8) + -8) <= lVar12))
      goto LAB_00102c81;
      iVar10 = 0;
      do {
        if (lVar11 == 0) goto LAB_00102890;
        lVar8 = *(long *)(lVar11 + -8);
        if (lVar8 < 1) goto LAB_00102893;
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_00102dd8;
        lVar8 = *(long *)(lVar11 + -8);
        if (lVar8 <= lVar12) goto LAB_001027ed;
        lVar8 = (long)iVar10;
        iVar10 = iVar10 + 1;
        RendererRD::CopyEffects::cubemap_filter_raster
                  (pcVar6,*(undefined8 *)(this + 8),*(undefined8 *)(lVar11 + lVar8 * 8 + lVar9));
        lVar11 = *(long *)(this + 0x38);
      } while (iVar10 != 6);
      lVar12 = lVar12 + 1;
      lVar9 = lVar9 + 0x68;
    }
LAB_00102890:
    lVar8 = 0;
  }
LAB_00102893:
  lVar12 = 0;
LAB_001027ed:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_00102dd8:
  lVar8 = 0;
  goto LAB_001027ed;
}



/* WARNING: Removing unreachable block (ram,0x00103a7c) */
/* WARNING: Removing unreachable block (ram,0x0010388c) */
/* RendererRD::SkyRD::Sky::get_textures(RendererRD::SkyRD::SkyTextureSetVersion, RID,
   Ref<RenderSceneBuffersRD>) */

void __thiscall
RendererRD::SkyRD::Sky::get_textures(Sky *this,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  StringName *pSVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint *in_FS_OFFSET;
  long local_e8;
  Vector<RID> local_e0 [8];
  long local_d8 [2];
  undefined8 local_c8;
  undefined1 local_c0;
  long local_b8;
  long local_a8 [2];
  undefined8 local_98;
  undefined1 local_90;
  long local_88;
  Vector<RID> local_80 [8];
  long local_78 [2];
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 10);
  lVar9 = RendererRD::TextureStorage::get_singleton();
  if ((char)*in_FS_OFFSET == '\0') {
    uVar4 = *(undefined8 *)in_FS_OFFSET;
    in_FS_OFFSET[0] = 0;
    in_FS_OFFSET[1] = 0;
    in_FS_OFFSET[0] = 0;
    in_FS_OFFSET[1] = 0;
    *(undefined1 *)in_FS_OFFSET = 1;
    __cxa_thread_atexit(LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector
                        ,uVar4,&__dso_handle);
  }
  if (*in_FS_OFFSET != 0) {
    lVar13 = 0;
    uVar14 = 0;
    do {
      lVar11 = *(long *)(in_FS_OFFSET + 2) + lVar13;
      if (*(long *)(lVar11 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar11 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)(lVar11 + 0x20);
          *(undefined8 *)(lVar11 + 0x20) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x28;
    } while (uVar14 < *in_FS_OFFSET);
    *in_FS_OFFSET = 0;
  }
  lVar13 = *(long *)this;
  if ((lVar13 == 0) || (2 < param_2)) {
    lVar13 = *(long *)(lVar9 + 0x50);
  }
  uVar12 = 0;
  pvVar10 = *(void **)in_FS_OFFSET;
  if (*in_FS_OFFSET == 0) {
    *in_FS_OFFSET = 1;
    pvVar10 = (void *)Memory::realloc_static(pvVar10,0x28,false);
    *(void **)in_FS_OFFSET = pvVar10;
    if (pvVar10 == (void *)0x0) goto LAB_00103aef;
    uVar12 = (ulong)*in_FS_OFFSET;
  }
  *in_FS_OFFSET = (int)uVar12 + 1;
  *(undefined8 *)((long)pvVar10 + uVar12 * 0x28) = 2;
  uVar4 = _LC96;
  *(undefined1 *)((long)pvVar10 + uVar12 * 0x28 + 8) = 0;
  *(long *)((long)pvVar10 + uVar12 * 0x28 + 0x10) = lVar13;
  *(undefined8 *)((long)pvVar10 + uVar12 * 0x28 + 0x20) = 0;
  local_e8 = 0;
  local_d8[0] = 0;
  if (param_2 < 3) {
    pSVar5 = (StringName *)*param_4;
    if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
         {lambda()#2}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                     ::{lambda()#2}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                    ::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#2}::operator()()::sname);
    }
    if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
         {lambda()#1}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                     ::{lambda()#1}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#1}::operator()()::sname);
    }
    cVar7 = RenderSceneBuffersRD::has_texture
                      (pSVar5,(StringName *)
                              &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                               ::{lambda()#1}::operator()()::sname);
    if (cVar7 == '\0') {
LAB_001032ff:
      lVar13 = *(long *)(lVar9 + 0x18);
      if (local_d8[0] != 0) {
        Vector<RID>::push_back(local_e0);
        lVar13 = local_e8;
      }
    }
    else {
      pSVar5 = (StringName *)*param_4;
      if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
           {lambda()#4}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                       ::{lambda()#4}::operator()()::sname), iVar8 != 0)) {
        _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                      ::{lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#4}::operator()()::sname);
      }
      if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
           {lambda()#3}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                       ::{lambda()#3}::operator()()::sname), iVar8 != 0)) {
        _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                      ::{lambda()#3}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#3}::operator()()::sname);
      }
      lVar13 = RenderSceneBuffersRD::get_texture
                         (pSVar5,(StringName *)
                                 &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                  ::{lambda()#3}::operator()()::sname);
      if ((lVar13 == 0) || (param_2 == 1)) goto LAB_001032ff;
      if (local_d8[0] == 0) goto LAB_00102f9b;
      Vector<RID>::push_back(local_e0);
      lVar13 = local_e8;
    }
    local_e8 = lVar13;
    lVar13 = local_d8[0];
    local_c0 = 0;
    local_b8 = local_e8;
    local_a8[0] = 0;
    local_c8 = uVar4;
    if (local_d8[0] != 0) {
      CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_d8);
    }
  }
  else {
    lVar13 = *(long *)(this + 0x78);
    if ((lVar13 == 0) || (lVar11 = *(long *)(lVar13 + -8), lVar11 == 0)) {
LAB_00102f90:
      lVar13 = *(long *)(lVar9 + 0x50);
    }
    else {
      if (lVar11 < 1) goto LAB_00103830;
      lVar11 = *(long *)(lVar13 + 0x18);
      if ((((lVar11 == 0) || (*(long *)(lVar11 + -8) < 2)) || (param_2 == 4)) ||
         (lVar13 = *(long *)(lVar11 + 8), *(long *)(lVar11 + 8) == 0)) goto LAB_00102f90;
    }
LAB_00102f9b:
    local_e8 = lVar13;
    local_c0 = 0;
    lVar13 = 0;
    local_b8 = local_e8;
    local_a8[0] = 0;
    local_c8 = uVar4;
  }
  uVar14 = *in_FS_OFFSET;
  pvVar10 = *(void **)in_FS_OFFSET;
  if (uVar14 == *in_FS_OFFSET) {
    uVar12 = (ulong)(uVar14 * 2);
    if (uVar14 * 2 == 0) {
      uVar12 = 1;
    }
    *in_FS_OFFSET = (uint)uVar12;
    pvVar10 = (void *)Memory::realloc_static(pvVar10,uVar12 * 0x28,false);
    *(void **)in_FS_OFFSET = pvVar10;
    if (pvVar10 == (void *)0x0) goto LAB_00103aef;
    uVar14 = *in_FS_OFFSET;
  }
  lVar11 = local_a8[0];
  *in_FS_OFFSET = uVar14 + 1;
  puVar2 = (undefined8 *)((long)pvVar10 + (ulong)uVar14 * 0x28);
  puVar2[4] = 0;
  *puVar2 = local_c8;
  *(undefined1 *)(puVar2 + 1) = local_c0;
  puVar2[2] = local_b8;
  if (local_a8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)(puVar2 + 4),(CowData *)local_a8);
    LOCK();
    plVar1 = (long *)(lVar11 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar13 = local_d8[0];
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_a8[0] + -0x10),false);
      lVar13 = local_d8[0];
    }
  }
  if (lVar13 != 0) {
    LOCK();
    plVar1 = (long *)(lVar13 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_d8[0] + -0x10),false);
    }
  }
  local_90 = 0;
  local_88 = 0;
  local_78[0] = 0;
  local_98 = _LC95;
  if (param_2 < 3) {
    pSVar5 = (StringName *)*param_4;
    if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
         {lambda()#6}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                     ::{lambda()#6}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                    ::{lambda()#6}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#6}::operator()()::sname);
    }
    if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
         {lambda()#5}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                     ::{lambda()#5}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                    ::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                           ::{lambda()#5}::operator()()::sname);
    }
    cVar7 = RenderSceneBuffersRD::has_texture
                      (pSVar5,(StringName *)
                              &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                               ::{lambda()#5}::operator()()::sname);
    if (cVar7 == '\0') {
LAB_001033ba:
      if (local_78[0] == 0) {
        lVar9 = *(long *)(lVar9 + 0x18);
        if (local_88 != 0) {
          Vector<RID>::push_back(local_80,local_88);
          Vector<RID>::push_back(local_80);
          local_88 = 0;
          lVar9 = local_88;
        }
      }
      else {
        Vector<RID>::push_back(local_80);
        lVar9 = local_88;
      }
    }
    else {
      pSVar5 = (StringName *)*param_4;
      if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
           {lambda()#8}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                       ::{lambda()#8}::operator()()::sname), iVar8 != 0)) {
        _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                      ::{lambda()#8}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#8}::operator()()::sname);
      }
      if ((get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)::
           {lambda()#7}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                       ::{lambda()#7}::operator()()::sname), iVar8 != 0)) {
        _scs_create((char *)&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                      ::{lambda()#7}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                             ::{lambda()#7}::operator()()::sname);
      }
      lVar13 = RenderSceneBuffersRD::get_texture
                         (pSVar5,(StringName *)
                                 &get_textures(RendererRD::SkyRD::SkyTextureSetVersion,RID,Ref<RenderSceneBuffersRD>)
                                  ::{lambda()#7}::operator()()::sname);
      if ((lVar13 == 0) || (param_2 == 2)) goto LAB_001033ba;
      if (local_78[0] == 0) {
        if (local_88 == 0) goto LAB_001030c4;
        Vector<RID>::push_back(local_80,local_88);
        Vector<RID>::push_back(local_80);
        local_88 = 0;
        lVar9 = local_88;
      }
      else {
        Vector<RID>::push_back(local_80);
        lVar9 = local_88;
      }
    }
    local_88 = lVar9;
    lVar9 = local_78[0];
    local_58 = local_88;
    local_48 = 0;
    local_68 = local_98;
    local_60 = local_90;
    if (local_78[0] != 0) {
      CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
    }
  }
  else {
    lVar13 = *(long *)(this + 0x78);
    if ((lVar13 == 0) || (lVar11 = *(long *)(lVar13 + -8), lVar11 == 0)) {
LAB_001030b6:
      lVar13 = *(long *)(lVar9 + 0x50);
    }
    else {
      if (lVar11 < 1) {
LAB_00103830:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar11,"p_index","size()","",false,true
                  );
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar11 = *(long *)(lVar13 + 0x18);
      if ((((lVar11 == 0) || (*(long *)(lVar11 + -8) < 3)) || (param_2 == 5)) ||
         (lVar13 = *(long *)(lVar11 + 0x10), *(long *)(lVar11 + 0x10) == 0)) goto LAB_001030b6;
    }
LAB_001030c4:
    local_88 = lVar13;
    lVar9 = 0;
    local_58 = local_88;
    local_48 = 0;
    local_68 = local_98;
    local_60 = local_90;
  }
  uVar14 = *in_FS_OFFSET;
  pvVar10 = *(void **)in_FS_OFFSET;
  if (uVar14 == *in_FS_OFFSET) {
    uVar12 = (ulong)(uVar14 * 2);
    if (uVar14 * 2 == 0) {
      uVar12 = 1;
    }
    *in_FS_OFFSET = (uint)uVar12;
    pvVar10 = (void *)Memory::realloc_static(pvVar10,uVar12 * 0x28,false);
    *(void **)in_FS_OFFSET = pvVar10;
    if (pvVar10 == (void *)0x0) {
LAB_00103aef:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar14 = *in_FS_OFFSET;
  }
  lVar13 = local_48;
  *in_FS_OFFSET = uVar14 + 1;
  puVar2 = (undefined8 *)((long)pvVar10 + (ulong)uVar14 * 0x28);
  puVar2[4] = 0;
  *puVar2 = local_68;
  *(undefined1 *)(puVar2 + 1) = local_60;
  puVar2[2] = local_58;
  if (local_48 != 0) {
    CowData<RID>::_ref((CowData<RID> *)(puVar2 + 4),(CowData *)&local_48);
    LOCK();
    plVar1 = (long *)(lVar13 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar9 = local_78[0];
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
      lVar9 = local_78[0];
    }
  }
  if (lVar9 != 0) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
    UniformSetCacheRD::get_cache_vec<>
              (UniformSetCacheRD::singleton,param_3,2,*(undefined8 *)in_FS_OFFSET);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SkyRD::draw_sky(long, Ref<RenderSceneBuffersRD>, RID, RID, double, float, float) */

void __thiscall
RendererRD::SkyRD::draw_sky
          (double param_1_00,undefined4 param_2,undefined4 param_3,SkyRD *this,undefined8 param_1,
          long *param_6,long param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  Object *pOVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  Sky *pSVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  Object *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104323;
    uVar13 = 0x5e7;
    pcVar17 = "Condition \"p_render_buffers.is_null()\" is true.";
    goto LAB_0010401b;
  }
  lVar12 = RendererRD::MaterialStorage::get_singleton();
  if (param_7 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x5e9;
      pcVar17 = "Condition \"p_env.is_null()\" is true.";
      goto LAB_0010401b;
    }
    goto LAB_00104323;
  }
  uVar13 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton,param_7);
  pSVar14 = (Sky *)get_sky(this,uVar13);
  uVar11 = RendererSceneRender::environment_get_background(RendererSceneRenderRD::singleton,param_7)
  ;
  if (uVar11 < 2) {
    if (pSVar14 != (Sky *)0x0) goto LAB_00103c99;
LAB_00103c21:
    uVar4 = *(ulong *)(this + 0x228);
    if ((uVar4 != 0) && ((uint)uVar4 < *(uint *)(lVar12 + 0x26c))) {
      lVar12 = ((uVar4 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar12 + 600) +
                        ((uVar4 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x268)) * 8);
      if (*(int *)(lVar12 + 0xb8) == (int)(uVar4 >> 0x20)) {
        if (*(int *)(lVar12 + 0x18) == 3) {
          lVar15 = *(long *)(lVar12 + 8);
          goto LAB_00103d3f;
        }
      }
      else if (*(int *)(lVar12 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  else {
    if (pSVar14 == (Sky *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar13 = 0x5f3;
        pcVar17 = "Parameter \"sky\" is null.";
        goto LAB_0010401b;
      }
      goto LAB_00104323;
    }
LAB_00103c99:
    uVar13 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton,param_7);
    lVar15 = get_sky(this,uVar13);
    if (lVar15 != 0) {
      uVar4 = *(ulong *)(lVar15 + 0x28);
      if ((uVar4 == 0) || (*(uint *)(lVar12 + 0x26c) <= (uint)uVar4)) goto LAB_00103cd3;
      lVar15 = ((uVar4 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar12 + 600) +
                        ((uVar4 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x268)) * 8);
      if (*(int *)(lVar15 + 0xb8) != (int)(uVar4 >> 0x20)) {
        if (*(int *)(lVar15 + 0xb8) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00103cd3;
      }
      if (((*(int *)(lVar15 + 0x18) != 3) || (lVar15 = *(long *)(lVar15 + 8), lVar15 == 0)) ||
         (lVar16 = *(long *)(lVar15 + 0xa8), *(char *)(lVar16 + 0x70) == '\0')) goto LAB_00103cd3;
      if (uVar11 < 2) goto LAB_00103c21;
LAB_00103d58:
      RendererRD::MaterialStorage::MaterialData::set_as_used();
      RendererSceneRender::environment_get_sky_orientation
                (&local_b8,RendererSceneRenderRD::singleton,param_7);
      Basis::invert();
      fVar6 = *(float *)(this + 0x16c);
      fVar7 = *(float *)(this + 0x170);
      fVar8 = *(float *)(this + 0x178);
      local_78 = *(undefined8 *)(this + 0x1ac);
      uStack_70 = *(undefined8 *)(this + 0x1b4);
      local_68 = *(undefined8 *)(this + 0x1bc);
      uStack_60 = *(undefined8 *)(this + 0x1c4);
      fVar1 = *(float *)(this + 0x18c);
      fVar9 = *(float *)(this + 0x17c);
      local_88 = *(undefined8 *)(this + 0x19c);
      uStack_80 = *(undefined8 *)(this + 0x1a4);
      fVar2 = *(float *)(this + 0x184);
      fVar20 = *(float *)(this + 0x180) * fStack_b4;
      uVar11 = *(uint *)(this + 0x168);
      fVar21 = local_b8 * fVar7;
      fVar22 = local_b8 * *(float *)(this + 0x174);
      local_58 = *(undefined8 *)(this + 0x1cc);
      uStack_50 = *(undefined8 *)(this + 0x1d4);
      fVar18 = *(float *)(this + 0x174) * fStack_a0 + *(float *)(this + 0x180) * fStack_9c +
               fVar1 * local_98;
      fVar3 = *(float *)(this + 0x188);
      local_b8 = fVar8 * fStack_b4 + local_b8 * fVar6 + fStack_b0 * fVar2;
      fStack_b4 = fVar9 * fStack_b4 + fVar21 + fStack_b0 * fVar3;
      fStack_b0 = fVar20 + fVar22 + fStack_b0 * fVar1;
      fVar22 = fVar8 * local_a8 + fStack_ac * fVar6 + fStack_a4 * fVar2;
      fVar21 = fStack_a0 * fVar7;
      fVar20 = *(float *)(this + 0x180) * local_a8;
      local_a8 = fVar9 * local_a8 + fStack_ac * fVar7 + fVar3 * fStack_a4;
      fStack_a4 = fVar20 + fStack_ac * *(float *)(this + 0x174) + fVar1 * fStack_a4;
      fStack_a0 = fVar8 * fStack_9c + fStack_a0 * fVar6 + fVar2 * local_98;
      fStack_9c = fVar9 * fStack_9c + fVar21 + fVar3 * local_98;
      fStack_ac = fVar22;
      local_98 = fVar18;
      if (pSVar14 == (Sky *)0x0) {
        uVar13 = *(undefined8 *)(this + 0x230);
      }
      else {
        pOVar5 = (Object *)*param_6;
        if ((pOVar5 == (Object *)0x0) ||
           (local_c0 = pOVar5, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
          local_c0 = (Object *)0x0;
          uVar13 = Sky::get_textures(pSVar14,0,*(undefined8 *)(this + 0x8c8),&local_c0);
        }
        else {
          uVar13 = Sky::get_textures(pSVar14,0,*(undefined8 *)(this + 0x8c8),&local_c0);
          cVar10 = RefCounted::unreference();
          if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar5), cVar10 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      auVar19._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar19._0_4_ = (float)param_1_00;
      _render_sky(auVar19._0_8_,param_2,param_3,this,param_1,param_8,
                  lVar16 + 2000 + (-(ulong)(uVar11 < 2) & 0xfffffffffffff8b0),
                  *(undefined8 *)(lVar15 + 0xb0),uVar13,(Projection *)&local_88,&local_b8,this + 400
                 );
      Projection::~Projection((Projection *)&local_88);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00104323;
    }
    _err_print_error("sky_get_material","servers/rendering/renderer_rd/environment/sky.cpp",0x674,
                     "Parameter \"sky\" is null.",0,0);
LAB_00103cd3:
    uVar4 = *(ulong *)(this + 0x8c0);
    if ((uVar4 == 0) || (*(uint *)(lVar12 + 0x26c) <= (uint)uVar4)) {
joined_r0x00104241:
      if (uVar11 < 2) goto LAB_00103c21;
    }
    else {
      lVar15 = ((uVar4 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar12 + 600) +
                        ((uVar4 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x268)) * 8);
      if (*(int *)(lVar15 + 0xb8) != (int)(uVar4 >> 0x20)) {
        if (*(int *)(lVar15 + 0xb8) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto joined_r0x00104241;
      }
      if (*(int *)(lVar15 + 0x18) != 3) goto joined_r0x00104241;
      lVar15 = *(long *)(lVar15 + 8);
      if (uVar11 < 2) goto LAB_00103c21;
LAB_00103d3f:
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar15 + 0xa8);
        if (lVar16 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar13 = 0x60b;
            pcVar17 = "Parameter \"shader_data\" is null.";
            goto LAB_0010401b;
          }
          goto LAB_00104323;
        }
        goto LAB_00103d58;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar13 = 0x608;
    pcVar17 = "Parameter \"material\" is null.";
LAB_0010401b:
    _err_print_error("draw_sky","servers/rendering/renderer_rd/environment/sky.cpp",uVar13,pcVar17,0
                     ,0);
    return;
  }
LAB_00104323:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SkyRD::allocate_sky_rid() */

void __thiscall RendererRD::SkyRD::allocate_sky_rid(SkyRD *this)

{
  RID_Alloc<RendererRD::SkyRD::Sky,true>::allocate_rid
            ((RID_Alloc<RendererRD::SkyRD::Sky,true> *)(this + 0x8e0));
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::Sky::bake_panorama(float, int, Vector2i const&) */

long * RendererRD::SkyRD::Sky::bake_panorama(float param_1,int param_2,Vector2i *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  TextureFormat *pTVar5;
  undefined8 uVar6;
  int *in_RCX;
  int in_EDX;
  undefined4 in_register_0000003c;
  long *plVar7;
  int iVar8;
  uint uVar9;
  Color *pCVar10;
  long in_FS_OFFSET;
  undefined1 auVar11 [16];
  undefined8 in_XMM1_Qa;
  Image *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  long local_68;
  undefined2 local_60;
  undefined8 local_58;
  float local_50;
  undefined4 uStack_4c;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000003c,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_3 == 0) {
    *plVar7 = 0;
  }
  else {
    uVar4 = RendererRD::CopyEffects::get_singleton();
    local_68 = 0;
    local_94 = *(undefined8 *)in_RCX;
    local_60 = 0;
    local_8c = 0x100000001;
    local_84 = 0x100000001;
    local_98 = 0x6c;
    local_7c = 0x8800000000;
    pTVar5 = (TextureFormat *)RenderingDevice::get_singleton();
    local_c0 = 0;
    local_a8 = 6;
    local_b8 = __LC112;
    lStack_b0 = _UNK_0011ae18;
    uVar6 = RenderingDevice::texture_create(pTVar5,(TextureView *)&local_98,(Vector *)&local_b8);
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
    auVar11._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar11._0_4_ = (float)in_EDX;
    RendererRD::CopyEffects::copy_cubemap_to_panorama
              (auVar11._0_8_,uVar4,*(undefined8 *)param_3,uVar6);
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::texture_get_data((Vector *)&local_b8,uVar4,uVar6,0);
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,uVar6);
    Image::create_from_data(&local_c8,*in_RCX,in_RCX[1],0,0xb,(Vector *)&local_b8);
    if (0 < *in_RCX) {
      iVar8 = 0;
      do {
        pCVar10 = (Color *)0x0;
        if (0 < in_RCX[1]) {
          do {
            uVar4 = Image::get_pixel((int)local_c8,iVar8);
            local_58 = CONCAT44((float)((ulong)uVar4 >> 0x20) * param_1,(float)uVar4 * param_1);
            uVar9 = (int)pCVar10 + 1;
            local_50 = (float)in_XMM1_Qa;
            _local_50 = CONCAT44((int)((ulong)in_XMM1_Qa >> 0x20),param_1 * local_50);
            Image::set_pixel((int)local_c8,iVar8,pCVar10);
            pCVar10 = (Color *)(ulong)uVar9;
          } while ((int)uVar9 < in_RCX[1]);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *in_RCX);
    }
    *plVar7 = 0;
    if (local_c8 != (Image *)0x0) {
      *plVar7 = (long)local_c8;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *plVar7 = 0;
      }
      if ((local_c8 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
        memdelete<Image>(local_c8);
      }
    }
    lVar2 = lStack_b0;
    if (lStack_b0 != 0) {
      LOCK();
      plVar1 = (long *)(lStack_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lStack_b0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Error CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::resize<false>(long) [clone
   .isra.0] */

void __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::resize<false>
          (CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *this,long param_1)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *pCVar12;
  long lVar13;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  pCVar12 = this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar13 = 0;
    lVar4 = 0;
  }
  else {
    lVar13 = *(long *)(lVar4 + -8);
    if (param_1 == lVar13) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar4 = lVar13 * 0x68;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x68 != 0) {
    uVar5 = param_1 * 0x68 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = uVar5 | uVar5 >> 0x20;
    lVar11 = uVar5 + 1;
    if (lVar11 != 0) {
      if (param_1 <= lVar13) {
        if ((lVar11 != lVar4) && (iVar3 = _realloc(this,lVar11), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00111774();
        return;
      }
      if (lVar11 == lVar4) {
LAB_00104baa:
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
          resize<false>((long)pCVar12);
          return;
        }
        lVar4 = puVar8[-1];
        if (param_1 <= lVar4) goto LAB_00104b39;
      }
      else {
        if (lVar13 != 0) {
          pCVar12 = this;
          iVar3 = _realloc(this,lVar11);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_00104baa;
        }
        puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar10 = 0x171;
          pcVar9 = "Parameter \"mem_new\" is null.";
          goto LAB_00104c42;
        }
        puVar8 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar4 = 0;
      }
      pauVar7 = (undefined1 (*) [16])(puVar8 + lVar4 * 0xd);
      do {
        *(undefined8 *)pauVar7[6] = 0;
        pauVar2 = pauVar7 + 6;
        *pauVar7 = (undefined1  [16])0x0;
        pauVar7[1] = (undefined1  [16])0x0;
        pauVar7[2] = (undefined1  [16])0x0;
        pauVar7[3] = (undefined1  [16])0x0;
        pauVar7[4] = (undefined1  [16])0x0;
        pauVar7[5] = (undefined1  [16])0x0;
        pauVar7 = (undefined1 (*) [16])(*pauVar2 + 8);
      } while ((undefined1 (*) [16])(puVar8 + param_1 * 0xd) != (undefined1 (*) [16])(*pauVar2 + 8))
      ;
LAB_00104b39:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar10 = 0x16a;
  pcVar9 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00104c42:
  _err_print_error("resize","./core/templates/cowdata.h",uVar10,pcVar9,0,0);
  return;
}



/* RendererRD::SkyRD::~SkyRD() */

void __thiscall RendererRD::SkyRD::~SkyRD(SkyRD *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  
  plVar6 = (long *)RendererRD::MaterialStorage::get_singleton();
  uVar2 = *(ulong *)(this + 0x8c0);
  if ((uVar2 == 0) || (*(uint *)((long)plVar6 + 0x26c) <= (uint)uVar2)) {
LAB_0011178e:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar8 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(plVar6 + 0x4d)) * 0xc0 +
          *(long *)(plVar6[0x4b] + ((uVar2 & 0xffffffff) / (ulong)*(uint *)(plVar6 + 0x4d)) * 8);
  if (*(int *)(lVar8 + 0xb8) != (int)(uVar2 >> 0x20)) {
    if (*(int *)(lVar8 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_0011178e;
  }
  if (*(int *)(lVar8 + 0x18) != 3) goto LAB_0011178e;
  ShaderRD::version_free
            ((ShaderRD *)(this + 0x238),
             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 8) + 0xa8) + 0x78));
  uVar7 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar7,*(undefined8 *)(this + 0x1f8));
  uVar7 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar7,*(undefined8 *)(this + 0x208));
  Memory::free_static(*(void **)(this + 0x1e0),true);
  Memory::free_static(*(void **)(this + 0x1e8),true);
  (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined8 *)(this + 0x8b8));
  (**(code **)(*plVar6 + 0xd8))(plVar6,*(undefined8 *)(this + 0x8c0));
  (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined8 *)(this + 0x220));
  (**(code **)(*plVar6 + 0xd8))(plVar6,*(undefined8 *)(this + 0x228));
  uVar7 = RenderingDevice::get_singleton();
  cVar5 = RenderingDevice::uniform_set_is_valid(uVar7,*(undefined8 *)(this + 0x200));
  if (cVar5 != '\0') {
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar7,*(undefined8 *)(this + 0x200));
  }
  uVar7 = RenderingDevice::get_singleton();
  cVar5 = RenderingDevice::uniform_set_is_valid(uVar7,*(undefined8 *)(this + 0x218));
  if (cVar5 != '\0') {
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar7,*(undefined8 *)(this + 0x218));
  }
  uVar7 = RenderingDevice::get_singleton();
  cVar5 = RenderingDevice::uniform_set_is_valid(uVar7);
  if (cVar5 != '\0') {
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar7);
  }
  RID_Alloc<RendererRD::SkyRD::Sky,true>::~RID_Alloc
            ((RID_Alloc<RendererRD::SkyRD::Sky,true> *)(this + 0x8e0));
  if (*(long *)(this + 0x8a8) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x8a8) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar8 = *(long *)(this + 0x8a8);
      *(undefined8 *)(this + 0x8a8) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x8a0) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x8a0) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar8 = *(long *)(this + 0x8a0);
      *(undefined8 *)(this + 0x8a0) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x898) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x898) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar8 = *(long *)(this + 0x898);
      *(undefined8 *)(this + 0x898) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  pvVar9 = *(void **)(this + 0x860);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x884) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x880) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x884) = 0;
        *(undefined1 (*) [16])(this + 0x870) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x868) + lVar8) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x868) + lVar8) = 0;
            if (*(long *)((long)pvVar9 + 0x18) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x18) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar3 = *(long *)((long)pvVar9 + 0x18);
                *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x860);
            *(undefined8 *)((long)pvVar9 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar1 << 2 != lVar8);
        *(undefined4 *)(this + 0x884) = 0;
        *(undefined1 (*) [16])(this + 0x870) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00104f46;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x868),false);
  }
LAB_00104f46:
  pvVar9 = *(void **)(this + 0x830);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x854) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x850) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x854) = 0;
        *(undefined1 (*) [16])(this + 0x840) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x838) + lVar8) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x838) + lVar8) = 0;
            if (*(long *)((long)pvVar9 + 0x18) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x18) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar3 = *(long *)((long)pvVar9 + 0x18);
                *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x830);
            *(undefined8 *)((long)pvVar9 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x854) = 0;
        *(undefined1 (*) [16])(this + 0x840) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00105036;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x838),false);
  }
LAB_00105036:
  pvVar9 = *(void **)(this + 0x800);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x824) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x820) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x824) = 0;
        *(undefined1 (*) [16])(this + 0x810) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x808) + lVar8) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x808) + lVar8) = 0;
            if (*(long *)((long)pvVar9 + 0x18) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x18) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar3 = *(long *)((long)pvVar9 + 0x18);
                *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x800);
            *(undefined8 *)((long)pvVar9 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x824) = 0;
        *(undefined1 (*) [16])(this + 0x810) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00105124;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x808),false);
  }
LAB_00105124:
  pvVar9 = *(void **)(this + 2000);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x7f4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x7f0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x7f4) = 0;
        *(undefined1 (*) [16])(this + 0x7e0) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x7d8) + lVar8) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x7d8) + lVar8) = 0;
            if (*(long *)((long)pvVar9 + 0x18) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x18) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar3 = *(long *)((long)pvVar9 + 0x18);
                *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 2000);
            *(undefined8 *)((long)pvVar9 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar1 << 2 != lVar8);
        *(undefined4 *)(this + 0x7f4) = 0;
        *(undefined1 (*) [16])(this + 0x7e0) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_0010520c;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x7d8),false);
  }
LAB_0010520c:
  pvVar9 = *(void **)(this + 0x7a0);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x7c4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x7c0) * 4) != 0) {
        memset(*(void **)(this + 0x7b8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x7c0) * 4) << 2);
        if (*(int *)(this + 0x7c4) == 0) goto LAB_00105788;
      }
      lVar8 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar8 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0x7a0);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x7c4));
      *(undefined4 *)(this + 0x7c4) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_001052a7;
    }
LAB_00105788:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x7b0),false);
    Memory::free_static(*(void **)(this + 0x7a8),false);
    Memory::free_static(*(void **)(this + 0x7b8),false);
  }
LAB_001052a7:
  pvVar9 = *(void **)(this + 0x778);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x79c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x798) * 4) != 0) {
        memset(*(void **)(this + 0x790),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x798) * 4) << 2);
        if (*(int *)(this + 0x79c) == 0) goto LAB_001057c8;
      }
      lVar8 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar8 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0x778);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x79c));
      *(undefined4 *)(this + 0x79c) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_0010533f;
    }
LAB_001057c8:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x788),false);
    Memory::free_static(*(void **)(this + 0x780),false);
    Memory::free_static(*(void **)(this + 0x790),false);
  }
LAB_0010533f:
  pvVar9 = *(void **)(this + 0x750);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x774) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x770) * 4) != 0) {
        memset(*(void **)(this + 0x768),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x770) * 4) << 2);
        if (*(int *)(this + 0x774) == 0) goto LAB_00105808;
      }
      lVar8 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar8 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0x750);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x774));
      *(undefined4 *)(this + 0x774) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_001053df;
    }
LAB_00105808:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x760),false);
    Memory::free_static(*(void **)(this + 0x758),false);
    Memory::free_static(*(void **)(this + 0x768),false);
  }
LAB_001053df:
  pvVar9 = *(void **)(this + 0x728);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x74c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x748) * 4) != 0) {
        memset(*(void **)(this + 0x740),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x748) * 4) << 2);
        if (*(int *)(this + 0x74c) == 0) goto LAB_00105848;
      }
      lVar8 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar8 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0x728);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x74c));
      *(undefined4 *)(this + 0x74c) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_00105477;
    }
LAB_00105848:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x738),false);
    Memory::free_static(*(void **)(this + 0x730),false);
    Memory::free_static(*(void **)(this + 0x740),false);
  }
LAB_00105477:
  pvVar9 = *(void **)(this + 0x700);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x724) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x720) * 4) != 0) {
        memset(*(void **)(this + 0x718),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x720) * 4) << 2);
        if (*(int *)(this + 0x724) == 0) goto LAB_00105628;
      }
      lVar8 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar8 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0x700);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x724));
      *(undefined4 *)(this + 0x724) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_0010550f;
    }
LAB_00105628:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x710),false);
    Memory::free_static(*(void **)(this + 0x708),false);
    Memory::free_static(*(void **)(this + 0x718),false);
  }
LAB_0010550f:
  pvVar9 = *(void **)(this + 0x6d8);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x6fc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6f8) * 4) != 0) {
        memset(*(void **)(this + 0x6f0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6f8) * 4) << 2);
        if (*(int *)(this + 0x6fc) == 0) goto LAB_00105668;
      }
      lVar8 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar8 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0x6d8);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x6fc));
      *(undefined4 *)(this + 0x6fc) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_001055a7;
    }
LAB_00105668:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x6e8),false);
    Memory::free_static(*(void **)(this + 0x6e0),false);
    Memory::free_static(*(void **)(this + 0x6f0),false);
  }
LAB_001055a7:
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0x6d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001055e5;
    }
    if (*(long *)(this + 0x6c8) != 0) {
      StringName::unref();
    }
  }
LAB_001055e5:
  ShaderLanguage::~ShaderLanguage((ShaderLanguage *)(this + 0x3b0));
  *(undefined ***)(this + 0x238) = &PTR__SkyShaderRD_00118880;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x238));
  Projection::~Projection((Projection *)(this + 0x19c));
  return;
}



/* RendererRD::SkyRD::initialize_sky_rid(RID) */

void __thiscall RendererRD::SkyRD::initialize_sky_rid(SkyRD *this,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_50 [3];
  undefined4 local_38;
  undefined8 local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_20 = 0;
  puVar3 = (undefined8 *)auStack_88;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_c8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  auStack_88._0_4_ = 0;
  auStack_88._4_12_ = SUB1612((undefined1  [16])0x0,4);
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0x100;
  local_70 = 0;
  local_68 = 0;
  local_60 = 1;
  local_50[0] = 0;
  local_38 = 0x3f800000;
  local_28 = 0;
  local_20 = local_20 & 0xffffffff00000000;
  RID_Alloc<RendererRD::SkyRD::Sky,true>::initialize_rid
            ((RID_Alloc<RendererRD::SkyRD::Sky,true> *)(this + 0x8e0),param_2,local_c8);
  CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref
            ((CowData<RendererRD::SkyRD::ReflectionData::Layer> *)local_50);
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_70 + -0x10),false);
        return;
      }
      goto LAB_00105a92;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105a92:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RendererRD::SkyRD::ReflectionData::Layer>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer>::_copy_on_write
          (CowData<RendererRD::SkyRD::ReflectionData::Layer> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x20 != 0) {
    uVar5 = lVar1 * 0x20 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    this_00 = (CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)(puVar3 + 3);
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      do {
        lVar4 = lVar6 * 0x20 + *(long *)this;
        *(undefined8 *)this_00 = 0;
        if (*(long *)(lVar4 + 8) != 0) {
          CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_ref
                    (this_00,(CowData *)(lVar4 + 8));
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(lVar4 + 0x18) != 0) {
          CowData<RID>::_ref((CowData<RID> *)(this_00 + 0x10),(CowData *)(lVar4 + 0x18));
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x20;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererRD::SkyRD::ReflectionData::clear_reflection_data() */

void __thiscall RendererRD::SkyRD::ReflectionData::clear_reflection_data(ReflectionData *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(long *)(this + 0x38) != 0) && (*(long *)(*(long *)(this + 0x38) + -8) != 0)) {
    CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref
              ((CowData<RendererRD::SkyRD::ReflectionData::Layer> *)(this + 0x38));
  }
  *(undefined8 *)this = 0;
  if (*(long *)(this + 8) != 0) {
    uVar3 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar3);
  }
  lVar2 = *(long *)(this + 0x18);
  *(undefined8 *)(this + 8) = 0;
  if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      *(undefined8 *)(this + 0x20) = 0;
      return;
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined8 *)(this + 0x20) = 0;
  return;
}



/* RendererRD::SkyRD::Sky::free() */

void __thiscall RendererRD::SkyRD::Sky::free(Sky *this)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)this == 0) {
    ReflectionData::clear_reflection_data((ReflectionData *)(this + 0x40));
    lVar1 = *(long *)(this + 0x30);
  }
  else {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,*(undefined8 *)this);
    *(undefined8 *)this = 0;
    ReflectionData::clear_reflection_data((ReflectionData *)(this + 0x40));
    lVar1 = *(long *)(this + 0x30);
  }
  if (lVar1 != 0) {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}



/* RendererRD::SkyRD::free_sky(RID) */

int __thiscall RendererRD::SkyRD::free_sky(SkyRD *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  int iVar3;
  Sky *this_00;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  uVar6 = param_2;
  this_00 = (Sky *)get_sky();
  iVar3 = (int)uVar6;
  if (this_00 == (Sky *)0x0) {
    pcVar4 = "Parameter \"sky\" is null.";
    uVar5 = 0x68e;
    pcVar7 = "servers/rendering/renderer_rd/environment/sky.cpp";
    pcVar8 = "free_sky";
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 0x910);
    Sky::free(this_00);
    uVar2 = pthread_mutex_lock(__mutex);
    if (uVar2 != 0) {
      plVar9 = (long *)(ulong)uVar2;
      std::__throw_system_error(uVar2);
      if (iVar3 - 0x20U < 0x7e1) {
        if ((int)plVar9[7] != iVar3) {
          *(int *)(plVar9 + 7) = iVar3;
          if ((*(int *)((long)plVar9 + 0x3c) == 3) && (iVar3 != 0x100)) {
            _err_print_error("set_radiance_size","servers/rendering/renderer_rd/environment/sky.cpp"
                             ,0x26e,
                             "Realtime Skies can only use a radiance size of 256. Radiance size will be set to 256 internally."
                             ,0,1,this);
            lVar10 = *plVar9;
            *(undefined4 *)(plVar9 + 7) = 0x100;
          }
          else {
            lVar10 = *plVar9;
          }
          if (lVar10 == 0) {
            ReflectionData::clear_reflection_data((ReflectionData *)(plVar9 + 8));
          }
          else {
            uVar5 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar5,*plVar9);
            *plVar9 = 0;
            ReflectionData::clear_reflection_data((ReflectionData *)(plVar9 + 8));
          }
          return 1;
        }
      }
      else {
        _err_print_error("set_radiance_size","servers/rendering/renderer_rd/environment/sky.cpp",
                         0x267,
                         "Condition \"p_radiance_size < 32 || p_radiance_size > 2048\" is true. Returning: false"
                         ,0,0,this);
      }
      return 0;
    }
    if ((uint)param_2 < *(uint *)(this + 0x8fc)) {
      uVar6 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x8f8);
      lVar10 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x8f8)) * 0xb8;
      lVar11 = *(long *)(*(long *)(this + 0x8e8) + uVar6 * 8) + lVar10;
      if (*(int *)(lVar11 + 0xb0) < 0) {
        pthread_mutex_unlock(__mutex);
        iVar3 = _err_print_error(&_LC124,"./core/templates/rid_owner.h",0x16c,
                                 "Method/function failed.",
                                 "Attempted to free an uninitialized or invalid RID",0,0);
        return iVar3;
      }
      if ((int)(param_2 >> 0x20) == *(int *)(lVar11 + 0xb0)) {
        CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref
                  ((CowData<RendererRD::SkyRD::ReflectionData::Layer> *)(lVar11 + 0x78));
        if (*(long *)(lVar11 + 0x58) != 0) {
          LOCK();
          plVar9 = (long *)(*(long *)(lVar11 + 0x58) + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            lVar1 = *(long *)(lVar11 + 0x58);
            *(undefined8 *)(lVar11 + 0x58) = 0;
            Memory::free_static((void *)(lVar1 + -0x10),false);
          }
        }
        lVar11 = *(long *)(this + 0x8f0);
        *(undefined4 *)(*(long *)(*(long *)(this + 0x8e8) + uVar6 * 8) + 0xb0 + lVar10) = 0xffffffff
        ;
        uVar2 = *(int *)(this + 0x900) - 1;
        *(uint *)(this + 0x900) = uVar2;
        *(uint *)(*(long *)(lVar11 + ((ulong)uVar2 / (ulong)*(uint *)(this + 0x8f8)) * 8) +
                 ((ulong)uVar2 % (ulong)*(uint *)(this + 0x8f8)) * 4) = (uint)param_2;
        iVar3 = pthread_mutex_unlock(__mutex);
        return iVar3;
      }
      pthread_mutex_unlock(__mutex);
      uVar5 = 0x171;
    }
    else {
      pthread_mutex_unlock(__mutex);
      uVar5 = 0x161;
    }
    pcVar4 = "Method/function failed.";
    pcVar7 = "./core/templates/rid_owner.h";
    pcVar8 = "free";
  }
  iVar3 = _err_print_error(pcVar8,pcVar7,uVar5,pcVar4,0,0);
  return iVar3;
}



/* RendererRD::SkyRD::Sky::set_radiance_size(int) */

undefined8 __thiscall RendererRD::SkyRD::Sky::set_radiance_size(Sky *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 - 0x20U < 0x7e1) {
    if (*(int *)(this + 0x38) != param_1) {
      *(int *)(this + 0x38) = param_1;
      if ((*(int *)(this + 0x3c) == 3) && (param_1 != 0x100)) {
        _err_print_error("set_radiance_size","servers/rendering/renderer_rd/environment/sky.cpp",
                         0x26e,
                         "Realtime Skies can only use a radiance size of 256. Radiance size will be set to 256 internally."
                         ,0,1);
        lVar1 = *(long *)this;
        *(undefined4 *)(this + 0x38) = 0x100;
      }
      else {
        lVar1 = *(long *)this;
      }
      if (lVar1 == 0) {
        ReflectionData::clear_reflection_data((ReflectionData *)(this + 0x40));
      }
      else {
        uVar2 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar2,*(undefined8 *)this);
        *(undefined8 *)this = 0;
        ReflectionData::clear_reflection_data((ReflectionData *)(this + 0x40));
      }
      return 1;
    }
  }
  else {
    _err_print_error("set_radiance_size","servers/rendering/renderer_rd/environment/sky.cpp",0x267,
                     "Condition \"p_radiance_size < 32 || p_radiance_size > 2048\" is true. Returning: false"
                     ,0,0);
  }
  return 0;
}



/* RendererRD::SkyRD::sky_set_radiance_size(RID, int) */

void __thiscall RendererRD::SkyRD::sky_set_radiance_size(SkyRD *this,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  Sky *this_00;
  
  this_00 = (Sky *)get_sky();
  if (this_00 != (Sky *)0x0) {
    cVar2 = Sky::set_radiance_size(this_00,param_3);
    if ((cVar2 != '\0') && (this_00[0x80] == (Sky)0x0)) {
      uVar1 = *(undefined8 *)(this + 0x8d8);
      this_00[0x80] = (Sky)0x1;
      *(undefined8 *)(this_00 + 0x88) = uVar1;
      *(Sky **)(this + 0x8d8) = this_00;
    }
    return;
  }
  _err_print_error("sky_set_radiance_size","servers/rendering/renderer_rd/environment/sky.cpp",0x696
                   ,"Parameter \"sky\" is null.",0,0);
  return;
}



/* RendererRD::SkyRD::Sky::set_mode(RenderingServer::SkyMode) */

undefined8 __thiscall RendererRD::SkyRD::Sky::set_mode(Sky *this,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(this + 0x3c) == param_2) {
    return 0;
  }
  *(int *)(this + 0x3c) = param_2;
  if ((param_2 == 3) && (*(int *)(this + 0x38) != 0x100)) {
    _err_print_error("set_mode","servers/rendering/renderer_rd/environment/sky.cpp",0x283,
                     "Realtime Skies can only use a radiance size of 256. Radiance size will be set to 256 internally."
                     ,0,1);
    set_radiance_size(this,0x100);
    lVar1 = *(long *)this;
  }
  else {
    lVar1 = *(long *)this;
  }
  if (lVar1 == 0) {
    ReflectionData::clear_reflection_data((ReflectionData *)(this + 0x40));
    return 1;
  }
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)this);
  *(undefined8 *)this = 0;
  ReflectionData::clear_reflection_data((ReflectionData *)(this + 0x40));
  return 1;
}



/* RendererRD::SkyRD::sky_set_mode(RID, RenderingServer::SkyMode) */

void __thiscall RendererRD::SkyRD::sky_set_mode(SkyRD *this,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  Sky *pSVar3;
  
  pSVar3 = (Sky *)get_sky();
  if (pSVar3 != (Sky *)0x0) {
    cVar2 = Sky::set_mode(pSVar3,param_3);
    if ((cVar2 != '\0') && (pSVar3[0x80] == (Sky)0x0)) {
      uVar1 = *(undefined8 *)(this + 0x8d8);
      pSVar3[0x80] = (Sky)0x1;
      *(undefined8 *)(pSVar3 + 0x88) = uVar1;
      *(Sky **)(this + 0x8d8) = pSVar3;
    }
    return;
  }
  _err_print_error("sky_set_mode","servers/rendering/renderer_rd/environment/sky.cpp",0x69f,
                   "Parameter \"sky\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::SkyShaderData::set_code(String const&) */

void __thiscall RendererRD::SkyRD::SkyShaderData::set_code(SkyShaderData *this,String *param_1)

{
  Version *pVVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  void *pvVar17;
  SkyShaderData *pSVar18;
  ulong uVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined8 local_2e8;
  long *local_2e0;
  undefined1 local_2c8 [8];
  long local_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined4 uStack_298;
  ulong local_288;
  ulong uStack_280;
  ulong local_278;
  ulong uStack_270;
  undefined2 local_268;
  undefined2 local_258;
  undefined2 uStack_256;
  undefined4 uStack_254;
  undefined1 local_250;
  undefined8 local_24c;
  undefined1 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
  local_208 [8];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  ulong local_1e0;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  ulong local_1b0;
  HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
  local_1a8 [8];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  ulong local_180;
  HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
  local_178 [8];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  ulong local_150;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  ulong local_120;
  SkyShaderData *local_118;
  undefined1 local_108 [4];
  undefined4 local_104;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8 [8];
  undefined8 local_d0 [2];
  long local_c0 [2];
  long local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xba0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xba0),(CowData *)param_1);
  }
  this[0x70] = (SkyShaderData)0x0;
  *(undefined4 *)(this + 0xb98) = 0;
  if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
    lVar13 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x20) + lVar13) != 0) {
          *(int *)(*(long *)(this + 0x20) + lVar13) = 0;
          pvVar17 = *(void **)(*(long *)(this + 0x18) + lVar13 * 2);
          if (*(long *)((long)pvVar17 + 0x88) != 0) {
            LOCK();
            plVar9 = (long *)(*(long *)((long)pvVar17 + 0x88) + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              lVar14 = *(long *)((long)pvVar17 + 0x88);
              *(undefined8 *)((long)pvVar17 + 0x88) = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar17 + 0x80) != 0) {
            LOCK();
            plVar9 = (long *)(*(long *)((long)pvVar17 + 0x80) + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              lVar14 = *(long *)((long)pvVar17 + 0x80);
              *(undefined8 *)((long)pvVar17 + 0x80) = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)((long)pvVar17 + 0x70));
          if (*(long *)((long)pvVar17 + 0x40) != 0) {
            LOCK();
            plVar9 = (long *)(*(long *)((long)pvVar17 + 0x40) + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              lVar14 = *(long *)((long)pvVar17 + 0x40);
              *(undefined8 *)((long)pvVar17 + 0x40) = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar17 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar17,false);
          *(undefined8 *)(*(long *)(this + 0x18) + lVar13 * 2) = 0;
        }
        lVar13 = lVar13 + 4;
      } while ((ulong)uVar2 << 2 != lVar13);
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0xba0) == 0) || (*(uint *)(*(long *)(this + 0xba0) + -8) < 2))
  goto LAB_001063a2;
  local_4c = 0;
  local_58 = _LC52;
  local_1e0 = _LC52;
  local_1b0 = _LC52;
  local_180 = _LC52;
  local_150 = _LC52;
  local_120 = _LC52;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_200 = (undefined1  [16])0x0;
  local_1f0 = (undefined1  [16])0x0;
  local_1d0 = (undefined1  [16])0x0;
  local_1c0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  local_170 = (undefined1  [16])0x0;
  local_160 = (undefined1  [16])0x0;
  local_140 = (undefined1  [16])0x0;
  local_130 = (undefined1  [16])0x0;
  local_d0[0] = 0;
  local_c0[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_4a = 0;
  local_118 = (SkyShaderData *)0x0;
  StringName::StringName((StringName *)&local_258,"sky",false);
  puVar8 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_208,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *puVar8 = 1;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  *(undefined4 *)(this + 0xba8) = 0;
  this[0xbac] = (SkyShaderData)0x0;
  StringName::StringName((StringName *)&local_258,"use_half_res_pass",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_1a8,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)(this + 0xbaa);
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"use_quarter_res_pass",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_1a8,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)(this + 0xbab);
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"TIME",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)(this + 0xba8);
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"POSITION",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)(this + 0xba9);
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT0_ENABLED",false);
  pSVar18 = this + 0xbac;
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT0_ENERGY",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT0_DIRECTION",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT0_COLOR",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT0_SIZE",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT1_ENABLED",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT1_ENERGY",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT1_DIRECTION",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT1_COLOR",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT1_SIZE",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT2_ENABLED",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT2_ENERGY",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT2_DIRECTION",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT2_COLOR",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT2_SIZE",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT3_ENABLED",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT3_ENERGY",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT3_DIRECTION",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT3_COLOR",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"LIGHT3_SIZE",false);
  plVar9 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_178,(StringName *)&local_258);
  bVar21 = StringName::configured != '\0';
  *plVar9 = (long)pSVar18;
  if ((bVar21) && (CONCAT44(uStack_254,CONCAT22(uStack_256,local_258)) != 0)) {
    StringName::unref();
  }
  lVar13 = RendererSceneRenderRD::singleton;
  local_118 = this + 0x10;
  iVar7 = ShaderCompiler::compile
                    (RendererSceneRenderRD::singleton + 0x5c0,3,(CowData<char32_t> *)(this + 0xba0),
                     local_208,this + 8,local_d8);
  if (iVar7 == 0) {
    pVVar1 = (Version *)(lVar13 + 0x448);
    if (*(long *)(this + 0x78) == 0) {
      uVar10 = ShaderRD::version_create();
      *(undefined8 *)(this + 0x78) = uVar10;
    }
    plVar9 = &local_80;
    ShaderRD::version_set_code
              (lVar13 + 0x448,*(undefined8 *)(this + 0x78),plVar9,local_a0,local_a0 + 8,local_90,
               local_d8);
    cVar6 = ShaderRD::version_is_valid(lVar13 + 0x448);
    if (cVar6 == '\0') {
      _err_print_error("set_code","servers/rendering/renderer_rd/environment/sky.cpp",0x85,
                       "Condition \"!scene_singleton->sky.sky_shader.shader.version_is_valid(version)\" is true."
                       ,0,0);
      goto LAB_00107387;
    }
    *(undefined4 *)(this + 0xb98) = local_a8;
    lVar14 = *(long *)(this + 0xb90);
    if (lVar14 != local_b0) {
      if (lVar14 != 0) {
        LOCK();
        plVar12 = (long *)(lVar14 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          lVar14 = *(long *)(this + 0xb90);
          *(undefined8 *)(this + 0xb90) = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
        else {
          *(undefined8 *)(this + 0xb90) = 0;
        }
      }
      if (local_b0 != 0) {
        plVar12 = (long *)(local_b0 + -0x10);
        do {
          lVar14 = *plVar12;
          if (lVar14 == 0) goto LAB_00106c19;
          LOCK();
          lVar15 = *plVar12;
          bVar21 = lVar14 == lVar15;
          if (bVar21) {
            *plVar12 = lVar14 + 1;
            lVar15 = lVar14;
          }
          UNLOCK();
        } while (!bVar21);
        if (lVar15 != -1) {
          *(long *)(this + 0xb90) = local_b0;
        }
      }
    }
LAB_00106c19:
    if ((*(long *)(this + 0xb80) != local_c0[0]) &&
       (CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
                  ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0xb80)),
       local_c0[0] != 0)) {
      plVar12 = (long *)(local_c0[0] + -0x10);
      do {
        lVar14 = *plVar12;
        if (lVar14 == 0) goto LAB_00106c6f;
        LOCK();
        lVar15 = *plVar12;
        bVar21 = lVar14 == lVar15;
        if (bVar21) {
          *plVar12 = lVar14 + 1;
          lVar15 = lVar14;
        }
        UNLOCK();
      } while (!bVar21);
      if (lVar15 != -1) {
        *(long *)(this + 0xb80) = local_c0[0];
      }
    }
LAB_00106c6f:
    pSVar18 = this + 0x80;
    uVar19 = 0;
    do {
      local_240 = CONCAT62(_UNK_0011ae22,_LC166);
      local_258 = _LC166;
      local_250 = 0;
      local_24c = 0;
      local_244 = 0;
      local_210 = 0;
      uStack_254 = 6;
      uStack_238 = _UNK_0011ae28;
      local_230 = __LC164;
      uStack_228 = _UNK_0011ae38;
      local_220 = __LC165;
      uStack_218 = _UNK_0011ae48;
      cVar6 = ShaderRD::is_variant_enabled((int)pVVar1);
      if (cVar6 == '\0') {
        PipelineCacheRD::clear();
      }
      else {
        uVar3 = *(ulong *)(this + 0x78);
        if (*(long *)(lVar13 + 0x460) == 0) {
          lVar14 = 0;
LAB_001074ca:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar19,
                     lVar14,"p_variant","variant_defines.size()","",false,false);
LAB_00106e17:
          local_2e8 = 0;
        }
        else {
          lVar14 = *(long *)(*(long *)(lVar13 + 0x460) + -8);
          if (lVar14 <= (long)uVar19) goto LAB_001074ca;
          lVar14 = *(long *)(lVar13 + 0x470);
          uVar11 = uVar19;
          if (lVar14 == 0) {
LAB_00107298:
            lVar15 = 0;
            uVar11 = uVar19;
LAB_001072b9:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar15,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar15 = *(long *)(lVar14 + -8);
          if (lVar15 <= (long)uVar19) goto LAB_001072b9;
          if (*(char *)(lVar14 + uVar19) == '\0') {
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7
                             ,"Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                            );
            goto LAB_00106e17;
          }
          if ((uVar3 == 0) || (*(uint *)(lVar13 + 0x51c) <= (uint)uVar3)) {
LAB_001075a0:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.");
            goto LAB_00106e17;
          }
          lVar14 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(lVar13 + 0x518)) * 0xa0 +
                   *(long *)(*(long *)(lVar13 + 0x508) +
                            ((uVar3 & 0xffffffff) / (ulong)*(uint *)(lVar13 + 0x518)) * 8);
          if (*(int *)(lVar14 + 0x98) != (int)(uVar3 >> 0x20)) {
            if (*(int *)(lVar14 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_001075a0;
          }
          iVar7 = (int)lVar14;
          if (*(char *)(lVar14 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar1);
            lVar15 = *(long *)(lVar13 + 0x4c0);
            if (lVar15 != 0) {
              lVar20 = 0;
              do {
                if (*(long *)(lVar15 + -8) <= lVar20) break;
                if (*(char *)(lVar15 + lVar20) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar1,iVar7);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar1,iVar7);
                }
                lVar15 = *(long *)(lVar13 + 0x4c0);
                lVar20 = lVar20 + 1;
              } while (lVar15 != 0);
            }
          }
          lVar20 = *(long *)(lVar13 + 0x480);
          if (lVar20 == 0) goto LAB_00107298;
          lVar15 = *(long *)(lVar20 + -8);
          if (lVar15 <= (long)uVar19) goto LAB_001072b9;
          uVar11 = (ulong)*(uint *)(lVar20 + uVar19 * 4);
          lVar20 = *(long *)(lVar14 + 0x68);
          if (lVar20 == 0) {
            lVar15 = 0;
            goto LAB_001072b9;
          }
          lVar15 = *(long *)(lVar20 + -8);
          if (lVar15 <= (long)uVar11) goto LAB_001072b9;
          if (*(long *)(lVar20 + uVar11 * 8) != 0) {
            ShaderRD::_compile_version_end(pVVar1,iVar7);
          }
          if (*(char *)(lVar14 + 0x90) == '\0') goto LAB_00106e17;
          lVar14 = *(long *)(lVar14 + 0x88);
          if (lVar14 == 0) goto LAB_00107298;
          lVar15 = *(long *)(lVar14 + -8);
          uVar11 = uVar19;
          if (lVar15 <= (long)uVar19) goto LAB_001072b9;
          local_2e8 = *(undefined8 *)(lVar14 + uVar19 * 8);
        }
        local_2b8 = 0;
        uStack_2b0 = 0;
        uStack_2ac = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        uStack_280 = 0;
        uStack_29c = _LC132;
        local_f0 = __LC167;
        uStack_e8 = _UNK_0011ae58;
        uStack_270 = (ulong)_LC132 << 0x20;
        local_2c0 = 0;
        local_108[0] = 0;
        local_104 = 0;
        local_f8 = 0;
        local_288 = 0;
        local_278 = 0;
        iVar7 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
                          ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                           &local_f8,1);
        if (iVar7 == 0) {
          if (local_f8 == 0) {
            lVar15 = -1;
            lVar14 = 0;
          }
          else {
            lVar14 = *(long *)(local_f8 + -8);
            lVar15 = lVar14 + -1;
            if (-1 < lVar15) {
              CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
                        ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                         &local_f8);
              puVar16 = (ulong *)(lVar15 * 0x20 + local_f8);
              *puVar16 = local_288;
              puVar16[1] = uStack_280;
              puVar16[2] = local_278;
              puVar16[3] = uStack_270;
              goto LAB_00106ef2;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar14,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0);
        }
LAB_00106ef2:
        local_288 = local_288 & 0xffffff0000000000;
        local_2b8 = 0;
        uStack_2b0 = 0;
        uStack_280 = uStack_280 & 0xffffffff00000000;
        local_268 = 0;
        uStack_270 = 0;
        uStack_2ac = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        uStack_29c = 0x3f800000;
        uStack_298 = 1;
        PipelineCacheRD::setup
                  (pSVar18,local_2e8,5,&local_2b8,&local_288,(StringName *)&local_258,local_108,0,
                   local_2c8);
        uVar3 = uStack_270;
        if (uStack_270 != 0) {
          LOCK();
          plVar12 = (long *)(uStack_270 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            uStack_270 = 0;
            Memory::free_static((void *)(uVar3 + -0x10),false);
          }
        }
        lVar14 = local_f8;
        if (local_f8 != 0) {
          LOCK();
          plVar12 = (long *)(local_f8 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_f8 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        lVar14 = local_2c0;
        if (local_2c0 != 0) {
          LOCK();
          plVar12 = (long *)(local_2c0 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_2c0 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
      }
      uVar19 = uVar19 + 1;
      pSVar18 = pSVar18 + 0x138;
    } while (uVar19 != 9);
    this[0x70] = (SkyShaderData)0x1;
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_208);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar17 = (void *)local_78._0_8_;
      if (local_58._4_4_ != 0) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4);
        if (uVar2 == 0) {
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
        }
        else {
          lVar13 = 0;
          do {
            if (*(int *)(local_78._8_8_ + lVar13) != 0) {
              pvVar17 = *(void **)((long)pvVar17 + lVar13 * 2);
              *(int *)(local_78._8_8_ + lVar13) = 0;
              if (*(long *)((long)pvVar17 + 0x18) != 0) {
                LOCK();
                plVar12 = (long *)(*(long *)((long)pvVar17 + 0x18) + -0x10);
                *plVar12 = *plVar12 + -1;
                UNLOCK();
                if (*plVar12 == 0) {
                  lVar14 = *(long *)((long)pvVar17 + 0x18);
                  *(undefined8 *)((long)pvVar17 + 0x18) = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar17 + 0x10) != 0) {
                LOCK();
                plVar12 = (long *)(*(long *)((long)pvVar17 + 0x10) + -0x10);
                *plVar12 = *plVar12 + -1;
                UNLOCK();
                if (*plVar12 == 0) {
                  lVar14 = *(long *)((long)pvVar17 + 0x10);
                  *(undefined8 *)((long)pvVar17 + 0x10) = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              Memory::free_static(pvVar17,false);
              *(undefined8 *)(local_78._0_8_ + lVar13 * 2) = 0;
              pvVar17 = (void *)local_78._0_8_;
            }
            lVar13 = lVar13 + 4;
          } while ((ulong)uVar2 * 4 - lVar13 != 0);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar17 == (void *)0x0) goto LAB_00107155;
        }
      }
      Memory::free_static(pvVar17,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00107155:
    do {
      plVar12 = plVar9 + -1;
      plVar9 = plVar9 + -1;
      if (*plVar12 != 0) {
        LOCK();
        plVar12 = (long *)(*plVar12 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          lVar13 = *plVar9;
          *plVar9 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
    } while (plVar9 != (long *)(local_a0 + 8));
  }
  else {
    _err_print_error("set_code","servers/rendering/renderer_rd/environment/sky.cpp",0x6c,
                     "Condition \"err != OK\" is true.","Shader compilation failed.",0,0);
LAB_00107387:
    local_2e0 = &local_80;
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_208);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar17 = (void *)local_78._0_8_;
      if (local_58._4_4_ != 0) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4);
        if (uVar2 == 0) {
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
        }
        else {
          lVar13 = 0;
          do {
            if (*(int *)(local_78._8_8_ + lVar13) != 0) {
              pvVar17 = *(void **)((long)pvVar17 + lVar13 * 2);
              *(int *)(local_78._8_8_ + lVar13) = 0;
              if (*(long *)((long)pvVar17 + 0x18) != 0) {
                LOCK();
                plVar9 = (long *)(*(long *)((long)pvVar17 + 0x18) + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  lVar14 = *(long *)((long)pvVar17 + 0x18);
                  *(undefined8 *)((long)pvVar17 + 0x18) = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar17 + 0x10) != 0) {
                LOCK();
                plVar9 = (long *)(*(long *)((long)pvVar17 + 0x10) + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  lVar14 = *(long *)((long)pvVar17 + 0x10);
                  *(undefined8 *)((long)pvVar17 + 0x10) = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              Memory::free_static(pvVar17,false);
              *(undefined8 *)(local_78._0_8_ + lVar13 * 2) = 0;
              pvVar17 = (void *)local_78._0_8_;
            }
            lVar13 = lVar13 + 4;
          } while ((ulong)uVar2 * 4 - lVar13 != 0);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar17 == (void *)0x0) goto LAB_00107493;
        }
      }
      Memory::free_static(pvVar17,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00107493:
    do {
      plVar9 = local_2e0 + -1;
      local_2e0 = local_2e0 + -1;
      if (*plVar9 != 0) {
        LOCK();
        plVar9 = (long *)(*plVar9 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          lVar13 = *local_2e0;
          *local_2e0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
    } while (local_2e0 != (long *)(local_a0 + 8));
  }
  uVar10 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar9 = (long *)(local_a0._0_8_ + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_a0._8_8_;
      local_a0 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  lVar13 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar9 = (long *)(local_b0 + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
            ((CowData<ShaderCompiler::GeneratedCode::Texture> *)local_c0);
  CowData<String>::_unref((CowData<String> *)local_d0);
LAB_001063a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::SkyRD::SkyShaderData::~SkyShaderData() */

void __thiscall RendererRD::SkyRD::SkyShaderData::~SkyShaderData(SkyShaderData *this)

{
  long *plVar1;
  long lVar2;
  PipelineCacheRD *pPVar3;
  PipelineCacheRD *pPVar4;
  
  *(undefined ***)this = &PTR_set_path_hint_001188c0;
  if (RendererSceneRenderRD::singleton == 0) {
    _err_print_error("~SkyShaderData","servers/rendering/renderer_rd/environment/sky.cpp",0xad,
                     "Parameter \"scene_singleton\" is null.",0,0);
    if (*(long *)(this + 0xba0) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(this + 0xba0) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(this + 0xba0);
        *(undefined8 *)(this + 0xba0) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (*(long *)(this + 0xb90) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(this + 0xb90) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(this + 0xb90);
        *(undefined8 *)(this + 0xb90) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
              ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0xb80));
    pPVar3 = (PipelineCacheRD *)(this + 0xa40);
    do {
      pPVar4 = pPVar3 + -0x138;
      PipelineCacheRD::~PipelineCacheRD(pPVar3);
      pPVar3 = pPVar4;
    } while (pPVar4 != (PipelineCacheRD *)(this + -0xb8));
  }
  else {
    if (*(long *)(this + 0x78) != 0) {
      ShaderRD::version_free(RendererSceneRenderRD::singleton + 0x448);
    }
    if (*(long *)(this + 0xba0) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(this + 0xba0) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(this + 0xba0);
        *(undefined8 *)(this + 0xba0) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (*(long *)(this + 0xb90) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(this + 0xb90) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(this + 0xb90);
        *(undefined8 *)(this + 0xb90) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
              ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0xb80));
    pPVar3 = (PipelineCacheRD *)(this + 0xa40);
    do {
      pPVar4 = pPVar3 + -0x138;
      PipelineCacheRD::~PipelineCacheRD(pPVar3);
      pPVar3 = pPVar4;
    } while ((PipelineCacheRD *)(this + -0xb8) != pPVar4);
  }
  MaterialStorage::ShaderData::~ShaderData((ShaderData *)this);
  return;
}



/* RendererRD::SkyRD::SkyShaderData::~SkyShaderData() */

void __thiscall RendererRD::SkyRD::SkyShaderData::~SkyShaderData(SkyShaderData *this)

{
  ~SkyShaderData(this);
  operator_delete(this,0xbb0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::init() */

void __thiscall RendererRD::SkyRD::init(SkyRD *this)

{
  Vector *pVVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char *pcVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [8];
  char cVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  StrRange *pSVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  int iVar25;
  long lVar26;
  long in_FS_OFFSET;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined8 local_200;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_1f8 [8];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_1c8 [8];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_198 [8];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  long local_148;
  undefined4 local_140;
  undefined2 local_13c;
  char *local_138;
  undefined1 local_130 [8];
  ulong uStack_128;
  undefined1 local_120 [16];
  ulong local_110;
  String local_108 [8];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  ulong local_e0;
  String local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  ulong local_b0;
  String local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  long local_40;
  
  local_220._8_8_ = local_220._0_8_;
  uStack_128 = (ulong)local_130;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar17 = RendererRD::TextureStorage::get_singleton();
  plVar18 = (long *)RendererRD::MaterialStorage::get_singleton();
  *(undefined4 *)(this + 0x1f0) = 4;
  lVar19 = Memory::alloc_static(0xc0,true);
  if (lVar19 == 0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(undefined8 *)(lVar19 + -8) = 4;
  }
  uVar22 = (ulong)*(uint *)(this + 0x1f0);
  *(long *)(this + 0x1e0) = lVar19;
  if (uVar22 == 0) {
    iVar25 = 0;
    lVar19 = 0;
  }
  else {
    lVar19 = Memory::alloc_static(uVar22 * 0x30,true);
    if (lVar19 == 0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      iVar25 = *(int *)(this + 0x1f0);
    }
    else {
      *(ulong *)(lVar19 + -8) = uVar22;
      iVar25 = *(int *)(this + 0x1f0);
    }
  }
  *(long *)(this + 0x1e8) = lVar19;
  *(int *)(this + 500) = iVar25 + 1;
  uVar20 = RenderingDevice::get_singleton();
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uStack_128;
  _local_130 = auVar11 << 0x40;
  uVar20 = RenderingDevice::uniform_buffer_create(uVar20,0xc0,(String *)&local_138,0);
  *(undefined8 *)(this + 0x1f8) = uVar20;
  auVar15 = local_130;
  if (local_130 != (undefined1  [8])0x0) {
    LOCK();
    plVar24 = (long *)((long)local_130 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uStack_128;
      _local_130 = auVar10 << 0x40;
      Memory::free_static((void *)((long)auVar15 + -0x10),false);
    }
  }
  local_228 = 0;
  local_130 = (undefined1  [8])0x1;
  local_138 = "\n";
  String::parse_latin1((StrRange *)&local_228);
  itos((long)&local_230);
  operator+((char *)&local_138,"\n#define MAX_DIRECTIONAL_LIGHT_DATA_STRUCTS ");
  String::operator+((String *)&local_240,(String *)&local_138);
  pcVar4 = local_138;
  if (local_138 != (undefined *)0x0) {
    LOCK();
    plVar24 = (long *)(local_138 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_138 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  lVar19 = local_228;
  if (local_228 != 0) {
    LOCK();
    plVar24 = (long *)(local_228 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_228 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_138 = "\n";
  local_228 = 0;
  local_130 = (undefined1  [8])0x1;
  String::parse_latin1((StrRange *)&local_228);
  itos((long)&local_238);
  operator+((char *)&local_230,"\n#define SAMPLERS_BINDING_FIRST_INDEX ");
  String::operator+((String *)&local_138,(StrRange *)&local_230);
  String::operator+=((String *)&local_240,(String *)&local_138);
  pcVar4 = local_138;
  if (local_138 != (undefined *)0x0) {
    LOCK();
    plVar24 = (long *)(local_138 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_138 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  lVar19 = local_238;
  if (local_238 != 0) {
    LOCK();
    plVar24 = (long *)(local_238 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_238 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  lVar19 = local_228;
  if (local_228 != 0) {
    LOCK();
    plVar24 = (long *)(local_228 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_228 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_220._8_8_;
  local_220 = auVar12 << 0x40;
  local_138 = "";
  local_230 = 0;
  local_130 = (undefined1  [8])0x0;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_HALF_RES_PASS\n";
  local_130 = (undefined1  [8])0x1b;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_QUARTER_RES_PASS\n";
  local_130 = (undefined1  [8])0x1e;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_CUBEMAP_PASS\n";
  local_130 = (undefined1  [8])0x1a;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_CUBEMAP_PASS\n#define USE_HALF_RES_PASS\n";
  local_130 = (undefined1  [8])0x34;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_CUBEMAP_PASS\n#define USE_QUARTER_RES_PASS\n";
  local_130 = (undefined1  [8])0x37;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_MULTIVIEW\n";
  local_130 = (undefined1  [8])0x17;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_HALF_RES_PASS\n#define USE_MULTIVIEW\n";
  local_130 = (undefined1  [8])0x31;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  local_230 = 0;
  local_138 = "\n#define USE_QUARTER_RES_PASS\n#define USE_MULTIVIEW\n";
  local_130 = (undefined1  [8])0x34;
  String::parse_latin1((StrRange *)&local_230);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar19 = local_230;
  if (local_230 != 0) {
    LOCK();
    plVar24 = (long *)(local_230 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_230 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  pVVar1 = (Vector *)(this + 0x238);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uStack_128;
  _local_130 = auVar13 << 0x40;
  ShaderRD::initialize(pVVar1,(String *)&local_228,(Vector *)&local_240);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_130);
  cVar16 = (**(code **)(*RendererCompositorRD::singleton + 0xa8))();
  if (cVar16 == '\0') {
    iVar25 = (int)pVVar1;
    ShaderRD::set_variant_enabled(iVar25,true);
    ShaderRD::set_variant_enabled(iVar25,true);
    ShaderRD::set_variant_enabled(iVar25,true);
  }
  CowData<String>::_unref((CowData<String> *)local_220);
  lVar19 = local_240;
  if (local_240 != 0) {
    LOCK();
    plVar24 = (long *)(local_240 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_240 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  RendererRD::MaterialStorage::shader_set_data_request_function(plVar18,3,_create_sky_shader_funcs);
  RendererRD::MaterialStorage::material_set_data_request_function
            (plVar18,3,_create_sky_material_funcs);
  local_220 = (undefined1  [16])0x0;
  local_210 = (undefined1  [16])0x0;
  local_13c = 0;
  local_1f0 = (undefined1  [16])0x0;
  local_1e0 = (undefined1  [16])0x0;
  local_1c0 = (undefined1  [16])0x0;
  local_1b0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  local_180 = (undefined1  [16])0x0;
  local_170 = _LC52;
  uStack_168 = _UNK_0011ae68;
  local_158 = (undefined1  [16])0x0;
  local_200 = _LC52;
  local_1d0 = _LC52;
  local_1a0 = _LC52;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  StringName::StringName((StringName *)&local_230,"COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x5;
  local_138 = "color";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"ALPHA",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x5;
  local_138 = "alpha";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"EYEDIR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xb;
  local_138 = "cube_normal";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"POSITION",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xf;
  local_138 = "params.position";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"SKY_COORDS",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xf;
  local_138 = "panorama_coords";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"SCREEN_UV",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2;
  local_138 = "uv";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"FRAGCOORD",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xc;
  local_138 = "gl_FragCoord";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"TIME",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xb;
  local_138 = "params.time";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"PI",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x1e;
  local_138 = "3.1415926535897932384626433833";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"TAU",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x1e;
  local_138 = "6.2831853071795864769252867666";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"E",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x1e;
  local_138 = "2.7182818284590452353602874714";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"HALF_RES_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xe;
  local_138 = "half_res_color";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"QUARTER_RES_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x11;
  local_138 = "quarter_res_color";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"RADIANCE",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x8;
  local_138 = "radiance";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"FOG",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xa;
  local_138 = "custom_fog";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT0_ENABLED",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x22;
  local_138 = "directional_lights.data[0].enabled";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT0_DIRECTION",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2f;
  local_138 = "directional_lights.data[0].direction_energy.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT0_ENERGY",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2d;
  local_138 = "directional_lights.data[0].direction_energy.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT0_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x29;
  local_138 = "directional_lights.data[0].color_size.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT0_SIZE",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x27;
  local_138 = "directional_lights.data[0].color_size.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT1_ENABLED",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x22;
  local_138 = "directional_lights.data[1].enabled";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT1_DIRECTION",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2f;
  local_138 = "directional_lights.data[1].direction_energy.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT1_ENERGY",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2d;
  local_138 = "directional_lights.data[1].direction_energy.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT1_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x29;
  local_138 = "directional_lights.data[1].color_size.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT1_SIZE",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x27;
  local_138 = "directional_lights.data[1].color_size.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT2_ENABLED",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x22;
  local_138 = "directional_lights.data[2].enabled";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT2_DIRECTION",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2f;
  local_138 = "directional_lights.data[2].direction_energy.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT2_ENERGY",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2d;
  local_138 = "directional_lights.data[2].direction_energy.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT2_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x29;
  local_138 = "directional_lights.data[2].color_size.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT2_SIZE",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x27;
  local_138 = "directional_lights.data[2].color_size.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT3_ENABLED",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x22;
  local_138 = "directional_lights.data[3].enabled";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT3_DIRECTION",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2f;
  local_138 = "directional_lights.data[3].direction_energy.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT3_ENERGY",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x2d;
  local_138 = "directional_lights.data[3].direction_energy.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT3_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x29;
  local_138 = "directional_lights.data[3].color_size.xyz";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"LIGHT3_SIZE",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x27;
  local_138 = "directional_lights.data[3].color_size.w";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"AT_CUBEMAP_PASS",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0xf;
  local_138 = "AT_CUBEMAP_PASS";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"AT_HALF_RES_PASS",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x10;
  local_138 = "AT_HALF_RES_PASS";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"AT_QUARTER_RES_PASS",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x13;
  local_138 = "AT_QUARTER_RES_PASS";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"RADIANCE",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_198,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x21;
  local_138 = "SAMPLER_LINEAR_WITH_MIPMAPS_CLAMP";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"HALF_RES_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1c8,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x1d;
  local_138 = "\n#define USES_HALF_RES_COLOR\n";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"QUARTER_RES_COLOR",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1c8,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x20;
  local_138 = "\n#define USES_QUARTER_RES_COLOR\n";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"disable_fog",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x14;
  local_138 = "#define DISABLE_FOG\n";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_230,"use_debanding",false);
  pSVar21 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_230);
  local_130 = (undefined1  [8])0x16;
  local_138 = "#define USE_DEBANDING\n";
  String::parse_latin1(pSVar21);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  local_130 = (undefined1  [8])0x9;
  local_160 = __LC166;
  local_138 = "material.";
  String::parse_latin1((StrRange *)local_158);
  local_140 = 10;
  local_130 = (undefined1  [8])0x1b;
  uStack_168 = _LC244;
  local_138 = "global_shader_uniforms.data";
  String::parse_latin1((StrRange *)(local_158 + 8));
  local_110 = 0;
  _local_130 = (undefined1  [16])0x0;
  local_120 = (undefined1  [16])0x0;
  uVar22 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_200 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_200 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar22 * 4)) {
        local_110 = uVar22 & 0xffffffff;
        goto LAB_00109119;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109119:
  if (local_200._4_4_ != 0) {
    for (puVar2 = (undefined8 *)local_210._0_8_; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_230,(String *)&local_138,(bool)((char)puVar2 + '\x10'));
    }
  }
  local_e0 = 0;
  local_100 = (undefined1  [16])0x0;
  local_f0 = (undefined1  [16])0x0;
  uVar22 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_1d0 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_1d0 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar22 * 4)) {
        local_e0 = uVar22 & 0xffffffff;
        goto LAB_001091c9;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001091c9:
  if ((local_1d0._4_4_ != 0) && ((long *)local_1e0._0_8_ != (long *)0x0)) {
    plVar24 = (long *)local_1e0._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_230,local_108,(bool)((char)plVar24 + '\x10'));
      plVar24 = (long *)*plVar24;
    } while (plVar24 != (long *)0x0);
  }
  local_b0 = 0;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  uVar22 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_1a0 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_1a0 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar22 * 4)) {
        local_b0 = uVar22 & 0xffffffff;
        goto LAB_0010929a;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010929a:
  if ((local_1a0._4_4_ != 0) && ((long *)local_1b0._0_8_ != (long *)0x0)) {
    plVar24 = (long *)local_1b0._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_230,local_d8,(bool)((char)plVar24 + '\x10'));
      plVar24 = (long *)*plVar24;
    } while (plVar24 != (long *)0x0);
  }
  local_80 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  uVar22 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_170 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_170 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar22 * 4)) {
        local_80 = uVar22 & 0xffffffff;
        goto LAB_00109373;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109373:
  if ((local_170._4_4_ != 0) && ((long *)local_180._0_8_ != (long *)0x0)) {
    plVar24 = (long *)local_180._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_230,local_a8,(bool)((char)plVar24 + '\x10'));
      plVar24 = (long *)*plVar24;
    } while (plVar24 != (long *)0x0);
  }
  local_68 = 0;
  local_78 = uStack_168;
  local_70 = local_160;
  if (local_158._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_158);
  }
  local_60 = 0;
  if (local_158._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(local_158 + 8));
  }
  local_58 = 0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_148);
  }
  local_50 = local_140;
  local_4c = local_13c;
  ShaderCompiler::initialize(this + 0x3b0,(String *)&local_138);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_138);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_228);
  uVar20 = (**(code **)(*plVar18 + 0x70))(plVar18);
  *(undefined8 *)(this + 0x8b8) = uVar20;
  (**(code **)(*plVar18 + 0x78))(plVar18,uVar20);
  pcVar3 = *(code **)(*plVar18 + 0x88);
  local_228 = 0;
  local_138 = 
  "\n// Default sky shader.\n\nshader_type sky;\n\nvoid sky() {\n\tCOLOR = vec3(0.0);\n}\n";
  local_130 = (undefined1  [8])0x4e;
  String::parse_latin1((StrRange *)&local_228);
  (*pcVar3)(plVar18,*(undefined8 *)(this + 0x8b8),(StrRange *)&local_228);
  lVar19 = local_228;
  if (local_228 != 0) {
    LOCK();
    plVar24 = (long *)(local_228 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_228 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  uVar20 = (**(code **)(*plVar18 + 200))(plVar18);
  *(undefined8 *)(this + 0x8c0) = uVar20;
  (**(code **)(*plVar18 + 0xd0))(plVar18,uVar20);
  (**(code **)(*plVar18 + 0xe8))
            (plVar18,*(undefined8 *)(this + 0x8c0),*(undefined8 *)(this + 0x8b8));
  uVar22 = *(ulong *)(this + 0x8c0);
  if ((uVar22 == 0) || (*(uint *)((long)plVar18 + 0x26c) <= (uint)uVar22)) {
LAB_001117e4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar19 = ((uVar22 & 0xffffffff) % (ulong)*(uint *)(plVar18 + 0x4d)) * 0xc0 +
           *(long *)(plVar18[0x4b] + ((uVar22 & 0xffffffff) / (ulong)*(uint *)(plVar18 + 0x4d)) * 8)
  ;
  if (*(int *)(lVar19 + 0xb8) != (int)(uVar22 >> 0x20)) {
    if (*(int *)(lVar19 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,uVar22 >> 0x20);
    }
    goto LAB_001117e4;
  }
  if (*(int *)(lVar19 + 0x18) != 3) goto LAB_001117e4;
  uVar22 = *(ulong *)(*(long *)(*(long *)(lVar19 + 8) + 0xa8) + 0x78);
  if (*(long *)(this + 0x250) == 0) {
    lVar19 = 0;
LAB_00109dfc:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar19,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar19 = *(long *)(*(long *)(this + 0x250) + -8);
    if (lVar19 < 1) goto LAB_00109dfc;
    pcVar4 = *(char **)(this + 0x260);
    if (pcVar4 == (char *)0x0) {
LAB_00109ea0:
      lVar19 = 0;
LAB_00109ea3:
      uVar22 = 0;
LAB_00109ec0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar22,lVar19,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar19 = *(long *)(pcVar4 + -8);
    if (lVar19 < 1) goto LAB_00109ea3;
    if (*pcVar4 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar20 = 0;
      goto LAB_001096c4;
    }
    if ((uVar22 == 0) || (*(uint *)(this + 0x30c) <= (uint)uVar22)) {
LAB_00109e70:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar20 = 0;
      goto LAB_001096c4;
    }
    lVar23 = ((uVar22 & 0xffffffff) % (ulong)*(uint *)(this + 0x308)) * 0xa0 +
             *(long *)(*(long *)(this + 0x2f8) +
                      ((uVar22 & 0xffffffff) / (ulong)*(uint *)(this + 0x308)) * 8);
    if (*(int *)(lVar23 + 0x98) != (int)(uVar22 >> 0x20)) {
      if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00109e70;
    }
    iVar25 = (int)lVar23;
    if (*(char *)(lVar23 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)pVVar1);
      lVar19 = *(long *)(this + 0x2b0);
      if (lVar19 != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(lVar19 + -8) <= lVar26) break;
          if (*(char *)(lVar19 + lVar26) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)pVVar1,iVar25);
          }
          else {
            ShaderRD::_compile_version_start((Version *)pVVar1,iVar25);
          }
          lVar19 = *(long *)(this + 0x2b0);
          lVar26 = lVar26 + 1;
        } while (lVar19 != 0);
      }
    }
    puVar5 = *(uint **)(this + 0x270);
    if (puVar5 == (uint *)0x0) goto LAB_00109ea0;
    lVar19 = *(long *)(puVar5 + -2);
    if (lVar19 < 1) goto LAB_00109ea3;
    uVar22 = (ulong)*puVar5;
    lVar26 = *(long *)(lVar23 + 0x68);
    if (lVar26 == 0) {
      lVar19 = 0;
      goto LAB_00109ec0;
    }
    lVar19 = *(long *)(lVar26 + -8);
    if (lVar19 <= (long)uVar22) goto LAB_00109ec0;
    if (*(long *)(lVar26 + uVar22 * 8) == 0) {
      cVar16 = *(char *)(lVar23 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end((Version *)pVVar1,iVar25);
      cVar16 = *(char *)(lVar23 + 0x90);
    }
    if (cVar16 != '\0') {
      puVar2 = *(undefined8 **)(lVar23 + 0x88);
      if (puVar2 == (undefined8 *)0x0) goto LAB_00109ea0;
      lVar19 = puVar2[-1];
      if (0 < lVar19) {
        uVar20 = *puVar2;
        goto LAB_001096c4;
      }
      goto LAB_00109ea3;
    }
  }
  uVar20 = 0;
LAB_001096c4:
  *(undefined8 *)(this + 0x8c8) = uVar20;
  uVar20 = RenderingDevice::get_singleton();
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uStack_128;
  _local_130 = auVar6 << 0x40;
  uVar20 = RenderingDevice::uniform_buffer_create(uVar20,0x160,(String *)&local_138,0);
  *(undefined8 *)(this + 0x208) = uVar20;
  auVar15 = local_130;
  if (local_130 != (undefined1  [8])0x0) {
    LOCK();
    plVar24 = (long *)((long)local_130 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uStack_128;
      _local_130 = auVar7 << 0x40;
      Memory::free_static((void *)((long)auVar15 + -0x10),false);
    }
  }
  local_220._0_8_ = 0;
  RendererRD::MaterialStorage::get_singleton();
  uVar20 = RendererRD::MaterialStorage::global_shader_uniforms_get_storage_buffer();
  uStack_128 = uVar20;
  local_138 = (char *)_LC249;
  auVar8[0xf] = 0;
  auVar8._0_15_ = stack0xfffffffffffffed1;
  _local_130 = auVar8 << 8;
  local_120._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(String *)&local_138);
  local_130 = (undefined1  [8])(SUB168(_local_130,1) << 8);
  uStack_128 = *(undefined8 *)(this + 0x208);
  local_138 = (char *)_LC250;
  local_120._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(String *)&local_138);
  local_130 = (undefined1  [8])(SUB168(_local_130,1) << 8);
  uStack_128 = *(undefined8 *)(this + 0x1f8);
  local_138 = (char *)_LC251;
  local_120._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(String *)&local_138);
  RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>
            ((Vector *)(plVar18 + 1),(int)(StrRange *)&local_228);
  uVar20 = RenderingDevice::get_singleton();
  uVar20 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar20,(StrRange *)&local_228,*(undefined8 *)(this + 0x8c8),0,0);
  *(undefined8 *)(this + 0x200) = uVar20;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_220);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_220._8_8_;
  local_220 = auVar14 << 0x40;
  local_130 = (undefined1  [8])(SUB168(_local_130,1) << 8);
  local_138 = (char *)_LC52;
  local_120._8_8_ = 0;
  uStack_128 = *(undefined8 *)(lVar17 + 0x70);
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(String *)&local_138);
  uVar20 = RenderingDevice::get_singleton();
  uVar20 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar20,(StrRange *)&local_228,*(undefined8 *)(this + 0x8c8),3,0);
  *(undefined8 *)(this + 0x218) = uVar20;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_220);
  uVar20 = (**(code **)(*plVar18 + 0x70))(plVar18);
  *(undefined8 *)(this + 0x220) = uVar20;
  (**(code **)(*plVar18 + 0x78))(plVar18,uVar20);
  pcVar3 = *(code **)(*plVar18 + 0x88);
  local_228 = 0;
  local_138 = 
  "\n// Default clear color sky shader.\n\nshader_type sky;\n\nuniform vec4 clear_color;\n\nvoid sky() {\n\tCOLOR = clear_color.rgb;\n}\n"
  ;
  local_130 = (undefined1  [8])0x7b;
  String::parse_latin1((StrRange *)&local_228);
  (*pcVar3)(plVar18,*(undefined8 *)(this + 0x220),(StrRange *)&local_228);
  lVar19 = local_228;
  if (local_228 != 0) {
    LOCK();
    plVar24 = (long *)(local_228 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_228 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  uVar20 = (**(code **)(*plVar18 + 200))(plVar18);
  *(undefined8 *)(this + 0x228) = uVar20;
  (**(code **)(*plVar18 + 0xd0))(plVar18,uVar20);
  (**(code **)(*plVar18 + 0xe8))
            (plVar18,*(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x220));
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_220._8_8_;
  local_220 = auVar9 << 0x40;
  local_130 = (undefined1  [8])(SUB168(_local_130,1) << 8);
  local_138 = (char *)_LC52;
  uStack_128 = *(undefined8 *)(lVar17 + 0x50);
  local_120._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(String *)&local_138);
  local_130 = (undefined1  [8])(SUB168(_local_130,1) << 8);
  uStack_128 = *(undefined8 *)(lVar17 + 0x18);
  local_138 = (char *)_LC96;
  local_120._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(String *)&local_138);
  local_130 = (undefined1  [8])(SUB168(_local_130,1) << 8);
  uStack_128 = *(undefined8 *)(lVar17 + 0x18);
  local_138 = (char *)_LC95;
  local_120._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(String *)&local_138);
  uVar20 = RenderingDevice::get_singleton();
  uVar20 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar20,(StrRange *)&local_228,*(undefined8 *)(this + 0x8c8),2,0);
  *(undefined8 *)(this + 0x230) = uVar20;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_220);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<RendererRD::SkyRD::ReflectionData::Layer>::push_back(RendererRD::SkyRD::ReflectionData::Layer)
   [clone .isra.0] */

void __thiscall
Vector<RendererRD::SkyRD::ReflectionData::Layer>::push_back
          (Vector<RendererRD::SkyRD::ReflectionData::Layer> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<RendererRD::SkyRD::ReflectionData::Layer>::resize<false>
                    ((CowData<RendererRD::SkyRD::ReflectionData::Layer> *)(this + 8),lVar3);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar2 = -1;
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8);
    lVar2 = lVar3 + -1;
    if (-1 < lVar2) {
      CowData<RendererRD::SkyRD::ReflectionData::Layer>::_copy_on_write
                ((CowData<RendererRD::SkyRD::ReflectionData::Layer> *)(this + 8));
      lVar3 = lVar2 * 0x20 + *(long *)(this + 8);
      if (*(long *)(lVar3 + 8) != *(long *)(param_2 + 8)) {
        CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_ref
                  ((CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)(lVar3 + 8),
                   (CowData *)(param_2 + 8));
      }
      if (*(long *)(lVar3 + 0x18) == *(long *)(param_2 + 0x18)) {
        return;
      }
      CowData<RID>::_ref((CowData<RID> *)(lVar3 + 0x18),(CowData *)(param_2 + 0x18));
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::ReflectionData::update_reflection_data(int, int, bool, RID, int, bool, int,
   RenderingDeviceCommons::DataFormat) */

void __thiscall
RendererRD::SkyRD::ReflectionData::update_reflection_data
          (ReflectionData *this,uint param_1,int param_2,char param_3,undefined8 param_5,int param_6
          ,char param_7,int param_8,undefined4 param_9)

{
  long *plVar1;
  CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap> *this_00;
  long lVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  Vector *pVVar11;
  TextureFormat *pTVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long in_FS_OFFSET;
  uint local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *local_130;
  CowData<RID> *local_128;
  ulong local_120;
  long local_118;
  int local_104;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  long lStack_a0;
  undefined4 local_98;
  long local_90;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint local_74;
  long local_70;
  int local_68;
  long local_58;
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar7 = (**(code **)(*RendererSceneRenderRD::singleton + 600))();
  local_104 = param_2;
  if (param_3 == '\0') {
    if (param_7 == '\0') {
      local_120 = (ulong)param_2;
      lStack_a0 = 0;
      local_90 = 0;
      CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::resize<false>
                ((CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&lStack_a0,local_120);
      CowData<RID>::resize<false>((CowData<RID> *)&local_90,local_120);
      if (0 < param_2) goto LAB_0010ae8a;
      local_148 = __LC112;
      uStack_140 = _UNK_0011ae18;
    }
    else {
      lStack_a0 = 0;
      local_90 = 0;
      CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::resize<false>
                ((CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&lStack_a0,8);
      CowData<RID>::resize<false>((CowData<RID> *)&local_90,8);
      local_104 = 8;
      local_120 = 8;
LAB_0010ae8a:
      local_128 = (CowData<RID> *)&local_90;
      local_130 = (CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&lStack_a0;
      local_118 = 0;
      uVar19 = 0;
      local_150 = param_1;
      do {
        if (lStack_a0 == 0) {
LAB_0010b238:
          lVar20 = 0;
LAB_0010b211:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,uVar19,lVar20,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar20 = *(long *)(lStack_a0 + -8);
        if (lVar20 <= (long)uVar19) goto LAB_0010b211;
        iVar8 = 0;
        CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_copy_on_write(local_130);
        uStack_140 = _UNK_0011ae18;
        local_148 = __LC112;
        lVar20 = local_118 + lStack_a0;
        *(ulong *)(lVar20 + 0x60) = CONCAT44(local_150,local_150);
        do {
          uVar10 = RenderingDevice::get_singleton();
          uStack_78 = 6;
          lVar2 = (long)iVar8 + 6;
          local_88 = (char *)__LC112;
          uStack_80 = (uint)_UNK_0011ae18;
          uStack_7c = (undefined4)((ulong)_UNK_0011ae18 >> 0x20);
          uVar10 = RenderingDevice::texture_create_shared_from_slice
                             (uVar10,(Vector<RID> *)&local_88,param_5,iVar8 + param_6,
                              uVar19 & 0xffffffff,1,0,0);
          *(undefined8 *)(lVar20 + lVar2 * 8) = uVar10;
          uStack_80 = 0;
          uStack_7c = 0;
          Vector<RID>::push_back((Vector<RID> *)&local_88,*(undefined8 *)(lVar20 + lVar2 * 8));
          pVVar11 = (Vector *)RenderingDevice::get_singleton();
          uVar10 = RenderingDevice::framebuffer_create(pVVar11,(long)&local_88,0xffffffff);
          *(undefined8 *)(lVar20 + (long)iVar8 * 8) = uVar10;
          if (CONCAT44(uStack_7c,uStack_80) != 0) {
            LOCK();
            plVar1 = (long *)(CONCAT44(uStack_7c,uStack_80) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = CONCAT44(uStack_7c,uStack_80);
              uStack_80 = 0;
              uStack_7c = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 6);
        uVar10 = RenderingDevice::get_singleton();
        uStack_78 = 6;
        local_88 = (char *)__LC112;
        uStack_80 = (uint)_UNK_0011ae18;
        uStack_7c = (undefined4)((ulong)_UNK_0011ae18 >> 0x20);
        uVar10 = RenderingDevice::texture_create_shared_from_slice
                           (uVar10,(Vector<RID> *)&local_88,param_5,param_6,uVar19 & 0xffffffff,1,1,
                            0);
        if (local_90 == 0) goto LAB_0010b238;
        lVar20 = *(long *)(local_90 + -8);
        if (lVar20 <= (long)uVar19) goto LAB_0010b211;
        CowData<RID>::_copy_on_write(local_128);
        uVar21 = local_150 >> 1;
        local_150 = 1;
        if (uVar21 != 0) {
          local_150 = uVar21;
        }
        *(undefined8 *)(local_90 + uVar19 * 8) = uVar10;
        uVar19 = uVar19 + 1;
        local_118 = local_118 + 0x68;
      } while (uVar19 != local_120);
    }
    lVar20 = local_90;
    local_128 = (CowData<RID> *)&local_90;
    local_130 = (CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&lStack_a0;
    uStack_80 = 0;
    uStack_7c = 0;
    if (lStack_a0 != 0) {
      CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_ref
                ((CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&uStack_80,
                 (CowData *)local_130);
    }
    local_70 = 0;
    if (lVar20 == 0) {
      Vector<RendererRD::SkyRD::ReflectionData::Layer>::push_back
                ((Vector<RendererRD::SkyRD::ReflectionData::Layer> *)(this + 0x30));
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)&local_70,(CowData *)local_128);
      lVar20 = local_70;
      Vector<RendererRD::SkyRD::ReflectionData::Layer>::push_back
                ((Vector<RendererRD::SkyRD::ReflectionData::Layer> *)(this + 0x30));
      if (lVar20 != 0) {
        LOCK();
        plVar1 = (long *)(lVar20 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_70 + -0x10),false);
        }
      }
    }
    if (CONCAT44(uStack_7c,uStack_80) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_7c,uStack_80) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(CONCAT44(uStack_7c,uStack_80) + -0x10),false);
      }
    }
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_90 + -0x10),false);
      }
    }
    if (lStack_a0 != 0) {
      LOCK();
      plVar1 = (long *)(lStack_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_a0 + -0x10),false);
      }
    }
  }
  else {
    if (param_7 == '\0') {
      if (param_8 < 1) {
        local_148 = __LC112;
        uStack_140 = _UNK_0011ae18;
        goto LAB_0010a4ed;
      }
    }
    else {
      param_8 = 8;
    }
    uVar9 = (ulong)param_2;
    iVar8 = 0;
    iVar3 = param_6;
    do {
      lStack_a0 = 0;
      local_90 = 0;
      CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::resize<false>
                ((CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&lStack_a0,uVar9);
      CowData<RID>::resize<false>((CowData<RID> *)&local_90,uVar9);
      if (0 < param_2) {
        uVar19 = 0;
        uVar21 = param_1;
        do {
          if (lStack_a0 == 0) {
LAB_0010b1f0:
            lVar20 = 0;
            goto LAB_0010b211;
          }
          lVar20 = *(long *)(lStack_a0 + -8);
          if (lVar20 <= (long)uVar19) goto LAB_0010b211;
          iVar18 = 0;
          CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_copy_on_write
                    ((CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&lStack_a0);
          lVar20 = lStack_a0 + uVar19 * 0x68;
          *(ulong *)(lVar20 + 0x60) = CONCAT44(uVar21,uVar21);
          do {
            uVar10 = RenderingDevice::get_singleton();
            uStack_78 = 6;
            lVar2 = (long)iVar18 + 6;
            local_88 = (char *)__LC112;
            uStack_80 = (uint)_UNK_0011ae18;
            uStack_7c = (undefined4)((ulong)_UNK_0011ae18 >> 0x20);
            uVar10 = RenderingDevice::texture_create_shared_from_slice
                               (uVar10,(Vector<RID> *)&local_88,param_5,iVar18 + iVar3,
                                uVar19 & 0xffffffff,1,0,0);
            *(undefined8 *)(lVar20 + lVar2 * 8) = uVar10;
            uStack_80 = 0;
            uStack_7c = 0;
            Vector<RID>::push_back((Vector<RID> *)&local_88,*(undefined8 *)(lVar20 + lVar2 * 8));
            pVVar11 = (Vector *)RenderingDevice::get_singleton();
            uVar10 = RenderingDevice::framebuffer_create(pVVar11,(long)&local_88,0xffffffff);
            *(undefined8 *)(lVar20 + (long)iVar18 * 8) = uVar10;
            if (CONCAT44(uStack_7c,uStack_80) != 0) {
              LOCK();
              plVar1 = (long *)(CONCAT44(uStack_7c,uStack_80) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar2 = CONCAT44(uStack_7c,uStack_80);
                uStack_80 = 0;
                uStack_7c = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 != 6);
          uVar10 = RenderingDevice::get_singleton();
          uStack_78 = 6;
          local_88 = (char *)__LC112;
          uStack_80 = (uint)_UNK_0011ae18;
          uStack_7c = (undefined4)((ulong)_UNK_0011ae18 >> 0x20);
          uVar10 = RenderingDevice::texture_create_shared_from_slice
                             (uVar10,(Vector<RID> *)&local_88,param_5,iVar3,uVar19 & 0xffffffff,1,1,
                              0);
          if (local_90 == 0) goto LAB_0010b1f0;
          lVar20 = *(long *)(local_90 + -8);
          if (lVar20 <= (long)uVar19) goto LAB_0010b211;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
          uVar4 = uVar21 >> 1;
          uVar21 = 1;
          if (uVar4 != 0) {
            uVar21 = uVar4;
          }
          *(undefined8 *)(local_90 + uVar19 * 8) = uVar10;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar9);
      }
      lVar20 = local_90;
      uStack_80 = 0;
      uStack_7c = 0;
      if (lStack_a0 != 0) {
        CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_ref
                  ((CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *)&uStack_80,
                   (CowData *)&lStack_a0);
      }
      local_70 = 0;
      if (lVar20 == 0) {
        Vector<RendererRD::SkyRD::ReflectionData::Layer>::push_back
                  ((Vector<RendererRD::SkyRD::ReflectionData::Layer> *)(this + 0x30));
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)&local_70,(CowData *)&local_90);
        lVar20 = local_70;
        Vector<RendererRD::SkyRD::ReflectionData::Layer>::push_back
                  ((Vector<RendererRD::SkyRD::ReflectionData::Layer> *)(this + 0x30));
        if (lVar20 != 0) {
          LOCK();
          plVar1 = (long *)(lVar20 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_70 + -0x10),false);
          }
        }
      }
      if (CONCAT44(uStack_7c,uStack_80) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_7c,uStack_80) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(CONCAT44(uStack_7c,uStack_80) + -0x10),false);
        }
      }
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_90 + -0x10),false);
        }
      }
      if (lStack_a0 != 0) {
        LOCK();
        plVar1 = (long *)(lStack_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(lStack_a0 + -0x10),false);
        }
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + 6;
    } while (iVar8 < param_8);
    local_148 = __LC112;
    uStack_140 = _UNK_0011ae18;
  }
LAB_0010a4ed:
  uVar10 = RenderingDevice::get_singleton();
  uStack_78 = 6;
  local_88 = (char *)local_148;
  uStack_80 = (uint)uStack_140;
  uStack_7c = (undefined4)((ulong)uStack_140 >> 0x20);
  uVar10 = RenderingDevice::texture_create_shared_from_slice
                     (uVar10,(TextureView *)&local_88,param_5,param_6,0,1,1,0);
  *(undefined8 *)this = uVar10;
  uVar10 = RenderingDevice::get_singleton();
  local_a8 = (char *)0x0;
  uStack_80 = 0x15;
  uStack_7c = 0;
  local_88 = "radiance base cubemap";
  String::parse_latin1((StrRange *)&local_a8);
  RenderingDevice::set_resource_name(uVar10,*(undefined8 *)this,(StrRange *)&local_a8);
  pcVar6 = local_a8;
  if (local_a8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar6 + -0x10),false);
    }
  }
  if (param_7 == '\0') {
    uStack_80 = (int)param_1 >> 1;
    local_74 = local_104 - 1;
  }
  else {
    uStack_80 = 0x40;
    local_74 = 7;
  }
  local_50 = 0;
  uStack_7c = (undefined4)_LC256;
  uStack_78 = (undefined4)((ulong)_LC256 >> 0x20);
  local_88 = (char *)CONCAT44(uStack_80,param_9);
  local_68 = (-(uint)(cVar7 == '\0') & 0xfffffff8) + 0xb;
  local_58 = 0;
  local_70 = 3;
  pTVar12 = (TextureFormat *)RenderingDevice::get_singleton();
  local_b0 = 0;
  local_98 = 6;
  local_a8 = (char *)local_148;
  lStack_a0 = uStack_140;
  uVar10 = RenderingDevice::texture_create(pTVar12,(TextureView *)&local_88,(Vector *)&local_a8);
  *(undefined8 *)(this + 8) = uVar10;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_b0);
  uVar10 = RenderingDevice::get_singleton();
  local_b8 = 0;
  lStack_a0 = 0x1c;
  local_a8 = "downsampled radiance cubemap";
  String::parse_latin1((StrRange *)&local_b8);
  RenderingDevice::set_resource_name(uVar10,*(undefined8 *)(this + 8),(StrRange *)&local_b8);
  lVar20 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar20 + -0x10),false);
    }
  }
  uVar21 = uStack_80;
  local_130._0_4_ = local_88._4_4_;
  uVar19 = (ulong)local_74;
  this_00 = (CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap> *)(this + 0x18);
  puVar17 = *(undefined8 **)(this + 0x18);
  if (puVar17 == (undefined8 *)0x0) {
    if (uVar19 == 0) goto LAB_0010b274;
    uVar9 = 0;
    CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_copy_on_write(this_00);
LAB_0010b45f:
    uVar15 = uVar19 * 0x70 - 1;
    uVar15 = uVar15 >> 1 | uVar15;
    uVar15 = uVar15 >> 2 | uVar15;
    uVar15 = uVar15 | uVar15 >> 4;
    uVar15 = uVar15 >> 8 | uVar15;
    uVar15 = uVar15 >> 0x10 | uVar15;
    lVar20 = (uVar15 | uVar15 >> 0x20) + 1;
    if ((long)uVar9 < (long)uVar19) {
LAB_0010b4e7:
      if (uVar9 == 0) {
        puVar14 = (undefined8 *)Memory::alloc_static(lVar20 + 0x10,false);
        if (puVar14 != (undefined8 *)0x0) {
          puVar17 = puVar14 + 2;
          *puVar14 = 1;
          puVar14[1] = 0;
          *(undefined8 **)(this + 0x18) = puVar17;
          lVar20 = 0;
LAB_0010a800:
          if (lVar20 < (long)uVar19) {
            puVar14 = puVar17 + lVar20 * 0xe;
            do {
              *puVar14 = 0;
              puVar16 = puVar14 + 0xe;
              puVar14[1] = 0;
              *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar14 + 4) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar14 + 6) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar14 + 8) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar14 + 10) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar14 + 0xc) = (undefined1  [16])0x0;
              puVar14 = puVar16;
            } while (puVar16 != puVar17 + uVar19 * 0xe);
          }
          goto LAB_0010a85d;
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        iVar8 = CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_realloc
                          (this_00,lVar20);
        if (iVar8 == 0) {
LAB_0010a7ea:
          puVar17 = *(undefined8 **)(this + 0x18);
          if (puVar17 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar20 = puVar17[-1];
          goto LAB_0010a800;
        }
      }
LAB_0010b562:
      puVar17 = *(undefined8 **)(this + 0x18);
LAB_0010b540:
      if (puVar17 == (undefined8 *)0x0) goto LAB_0010b274;
    }
    else {
LAB_0010b4b6:
      iVar8 = CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_realloc
                        (this_00,lVar20);
      if (iVar8 != 0) goto LAB_0010b562;
LAB_0010b4c8:
      puVar17 = *(undefined8 **)(this + 0x18);
      if (puVar17 == (undefined8 *)0x0) {
        update_reflection_data();
        return;
      }
LAB_0010a85d:
      puVar17[-1] = uVar19;
    }
  }
  else {
    uVar9 = puVar17[-1];
    if (uVar19 != uVar9) {
      if (uVar19 != 0) {
        CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_copy_on_write(this_00)
        ;
        uVar15 = uVar19 * 0x70 - 1;
        uVar15 = uVar15 >> 1 | uVar15;
        uVar15 = uVar15 >> 2 | uVar15;
        uVar15 = uVar15 >> 4 | uVar15;
        uVar15 = uVar15 >> 8 | uVar15;
        uVar15 = uVar15 >> 0x10 | uVar15;
        uVar15 = uVar15 >> 0x20 | uVar15;
        lVar20 = uVar15 + 1;
        if (uVar9 * 0x70 == 0) goto LAB_0010b45f;
        uVar13 = uVar9 * 0x70 - 1;
        uVar13 = uVar13 | uVar13 >> 1;
        uVar13 = uVar13 | uVar13 >> 2;
        uVar13 = uVar13 | uVar13 >> 4;
        uVar13 = uVar13 | uVar13 >> 8;
        uVar13 = uVar13 | uVar13 >> 0x10;
        uVar13 = uVar13 | uVar13 >> 0x20;
        if ((long)uVar9 < (long)uVar19) {
          if (uVar13 != uVar15) goto LAB_0010b4e7;
          goto LAB_0010a7ea;
        }
        if (uVar13 != uVar15) goto LAB_0010b4b6;
        goto LAB_0010b4c8;
      }
      LOCK();
      plVar1 = puVar17 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)(this + 0x18) = 0;
        goto LAB_0010b274;
      }
      lVar20 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar20 + -0x10),false);
      puVar17 = *(undefined8 **)(this + 0x18);
      goto LAB_0010b540;
    }
  }
  uVar19 = 0;
  do {
    if ((long)puVar17[-1] <= (long)uVar19) break;
    CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_copy_on_write(this_00);
    puVar17 = (undefined8 *)(uVar19 * 0x70 + *(long *)(this + 0x18));
    *(uint *)((long)puVar17 + 0xc) = uVar21;
    *(uint *)(puVar17 + 1) = (uint)local_130;
    uVar10 = RenderingDevice::get_singleton();
    local_a8 = (char *)local_148;
    lStack_a0 = uStack_140;
    local_98 = 6;
    uVar10 = RenderingDevice::texture_create_shared_from_slice
                       (uVar10,(StrRange *)&local_a8,*(undefined8 *)(this + 8),0,uVar19 & 0xffffffff
                        ,1,1,0);
    *puVar17 = uVar10;
    uVar10 = RenderingDevice::get_singleton();
    local_b8 = 0;
    lStack_a0 = 1;
    local_a8 = " ";
    String::parse_latin1((StrRange *)&local_b8);
    itos((long)&local_c8);
    operator+((char *)&local_c0,"Downsampled Radiance Cubemap Mip ");
    String::operator+((String *)&local_a8,(String *)&local_c0);
    RenderingDevice::set_resource_name(uVar10,*puVar17,(StrRange *)&local_a8);
    pcVar6 = local_a8;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    lVar20 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
    lVar20 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
    lVar20 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
    if (cVar7 == '\0') {
      uVar9 = 0;
      do {
        uVar10 = RenderingDevice::get_singleton();
        iVar8 = (int)uVar9;
        local_98 = 6;
        local_a8 = (char *)local_148;
        lStack_a0 = uStack_140;
        uVar10 = RenderingDevice::texture_create_shared_from_slice
                           (uVar10,(StrRange *)&local_a8,*(undefined8 *)(this + 8),
                            uVar9 & 0xffffffff,(int)uVar19,1,0,0);
        puVar17[(long)iVar8 + 2] = uVar10;
        uVar10 = RenderingDevice::get_singleton();
        local_b8 = 0;
        lStack_a0 = 1;
        local_a8 = " ";
        String::parse_latin1((StrRange *)&local_b8);
        itos((long)&local_c8);
        local_a8 = " Face: ";
        local_d8 = 0;
        lStack_a0 = 7;
        String::parse_latin1((StrRange *)&local_d8);
        itos((long)&local_e8);
        operator+((char *)&local_e0,"Downsampled Radiance Cubemap Mip: ");
        String::operator+((String *)&local_d0,(String *)&local_e0);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_a8,(String *)&local_c0);
        RenderingDevice::set_resource_name(uVar10,*puVar17,(StrRange *)&local_a8);
        pcVar6 = local_a8;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
        lVar20 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        lVar20 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        lVar20 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        lVar20 = local_e8;
        if (local_e8 != 0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        lVar20 = local_d8;
        if (local_d8 != 0) {
          LOCK();
          plVar1 = (long *)(local_d8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        lVar20 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        lVar20 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        lStack_a0 = 0;
        Vector<RID>::push_back((Vector<RID> *)&local_a8,puVar17[(long)iVar8 + 2]);
        pVVar11 = (Vector *)RenderingDevice::get_singleton();
        uVar10 = RenderingDevice::framebuffer_create(pVVar11,(long)&local_a8,0xffffffff);
        lVar20 = lStack_a0;
        puVar17[(long)iVar8 + 8] = uVar10;
        if (lStack_a0 != 0) {
          LOCK();
          plVar1 = (long *)(lStack_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lStack_a0 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 6);
    }
    uVar4 = (uint)local_130 >> 1;
    local_130._0_4_ = 1;
    if (uVar4 != 0) {
      local_130._0_4_ = uVar4;
    }
    uVar21 = uVar21 >> 1;
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    puVar17 = *(undefined8 **)(this + 0x18);
    uVar19 = uVar19 + 1;
  } while (puVar17 != (undefined8 *)0x0);
LAB_0010b274:
  lVar20 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar20 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::update_dirty_skys() */

void __thiscall RendererRD::SkyRD::update_dirty_skys(SkyRD *this)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  TextureFormat *pTVar10;
  long lVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined8 local_60;
  uint local_58;
  long local_48;
  undefined2 local_40;
  long local_30;
  
  uVar6 = _LC256;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = *(long **)(this + 0x8d8);
  while (plVar5 != (long *)0x0) {
    if (*plVar5 == 0) {
      iVar8 = Image::get_image_required_mipmaps((int)plVar5[7],(int)plVar5[7],0xf);
      uVar2 = (undefined4)plVar5[7];
      iVar8 = iVar8 + 1;
      iVar9 = *(int *)(this + 0x938);
      if (*(int *)((long)plVar5 + 0x3c) == 3) {
        if (iVar9 == 8) {
          iVar9 = 8;
        }
        else {
          _err_print_error("update_dirty_skys","servers/rendering/renderer_rd/environment/sky.cpp",
                           0x63c,
                           "When using the Real-Time sky update mode (or Automatic with a sky shader using \"TIME\"), \"rendering/reflections/sky_reflections/roughness_layers\" should be set to 8 in the project settings for best quality reflections."
                           ,0,1);
          iVar9 = 8;
        }
      }
      local_78 = CONCAT44(uVar2,*(undefined4 *)(this + 4));
      local_70 = uVar2;
      if (this[0x8d4] == (SkyRD)0x0) {
        local_48 = 0;
        if (iVar9 <= iVar8) {
          iVar8 = iVar9;
        }
        local_40 = 0;
        local_6c = uVar6;
        local_60 = 3;
        local_58 = 3;
        local_64 = iVar8;
        cVar7 = (**(code **)(*RendererSceneRenderRD::singleton + 600))();
        if (cVar7 != '\0') {
          local_58 = local_58 | 8;
        }
        pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
        local_a0 = 0;
        local_98 = __LC112;
        uStack_90 = _UNK_0011ae18;
        local_88 = 6;
        lVar11 = RenderingDevice::texture_create
                           (pTVar10,(TextureView *)&local_78,(Vector *)&local_98);
        *plVar5 = lVar11;
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_a0);
        uVar2 = *(undefined4 *)(this + 4);
        lVar11 = *plVar5;
        uVar4 = (undefined4)plVar5[7];
        uVar3 = *(undefined4 *)(this + 0x938);
        iVar9 = *(int *)((long)plVar5 + 0x3c);
        uVar12 = 0;
      }
      else {
        local_40 = 0;
        local_48 = 0;
        local_6c = CONCAT44(iVar9 * 6,1);
        local_60 = 6;
        local_58 = 3;
        local_64 = iVar8;
        cVar7 = (**(code **)(*RendererSceneRenderRD::singleton + 600))();
        if (cVar7 != '\0') {
          local_58 = local_58 | 8;
        }
        pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
        local_a0 = 0;
        local_98 = __LC112;
        uStack_90 = _UNK_0011ae18;
        local_88 = 6;
        lVar11 = RenderingDevice::texture_create
                           (pTVar10,(TextureView *)&local_78,(Vector *)&local_98);
        *plVar5 = lVar11;
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_a0);
        uVar2 = *(undefined4 *)(this + 4);
        lVar11 = *plVar5;
        uVar4 = (undefined4)plVar5[7];
        uVar12 = 1;
        uVar3 = *(undefined4 *)(this + 0x938);
        iVar9 = *(int *)((long)plVar5 + 0x3c);
      }
      ReflectionData::update_reflection_data
                ((ReflectionData *)(plVar5 + 8),uVar4,iVar8,uVar12,lVar11,0,iVar9 == 3,uVar3,uVar2);
      lVar11 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
    }
    plVar1 = (long *)plVar5[0x11];
    *(undefined1 *)(plVar5 + 0xd) = 1;
    *(undefined4 *)((long)plVar5 + 0x84) = 0;
    plVar5[0x11] = 0;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    plVar5 = plVar1;
  }
  *(undefined8 *)(this + 0x8d8) = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::setup_sky(RenderDataRD const*, Vector2i) */

void __thiscall RendererRD::SkyRD::setup_sky(SkyRD *this,long param_1,undefined8 param_3)

{
  ulong uVar1;
  StringName *pSVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  Object *pOVar16;
  float *pfVar17;
  char *pcVar18;
  float *pfVar19;
  long lVar20;
  int *piVar21;
  float *pfVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  SkyRD *pSVar26;
  uint uVar27;
  SkyRD *pSVar28;
  long in_FS_OFFSET;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  Projection *local_178;
  Object *local_150;
  Projection local_148 [64];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar10 = (long *)RendererRD::LightStorage::get_singleton();
  lVar11 = RendererRD::MaterialStorage::get_singleton();
  if (*(long *)(param_1 + 0x1c0) == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010d381;
    uVar12 = 0x3d5;
    pcVar18 = "Condition \"p_render_data->environment.is_null()\" is true.";
    goto LAB_0010c6e1;
  }
  if (*(long *)(param_1 + 0x178) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x3d7;
      pcVar18 = "Condition \"p_render_data->render_buffers.is_null()\" is true.";
      goto LAB_0010c6e1;
    }
    goto LAB_0010d381;
  }
  uVar8 = *(uint *)(*(long *)(param_1 + 0x180) + 0x228);
  if (uVar8 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x3da;
      pcVar18 = "Condition \"p_render_data->scene_data->view_count == 0\" is true.";
      goto LAB_0010c6e1;
    }
    goto LAB_0010d381;
  }
  if (2 < uVar8) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x3db;
      pcVar18 = 
      "Condition \"p_render_data->scene_data->view_count > RendererSceneRender::MAX_RENDER_VIEWS\" is true."
      ;
      goto LAB_0010c6e1;
    }
    goto LAB_0010d381;
  }
  uVar12 = RendererSceneRender::environment_get_sky
                     (RendererSceneRenderRD::singleton,*(undefined8 *)(param_1 + 0x1c0));
  plVar13 = (long *)get_sky(this,uVar12);
  if (plVar13 == (long *)0x0) {
LAB_0010b9a5:
    uVar15 = *(ulong *)(this + 0x8c0);
    if ((uVar15 != 0) && ((uint)uVar15 < *(uint *)(lVar11 + 0x26c))) {
      lVar11 = ((uVar15 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar11 + 600) +
                        ((uVar15 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0x268)) * 8);
      if (*(int *)(lVar11 + 0xb8) == (int)(uVar15 >> 0x20)) {
        if ((*(int *)(lVar11 + 0x18) == 3) && (lVar14 = *(long *)(lVar11 + 8), lVar14 != 0)) {
          lVar20 = *(long *)(lVar14 + 0xa8);
          if (lVar20 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar12 = 0x3f8;
              pcVar18 = "Parameter \"shader_data\" is null.";
              goto LAB_0010c6e1;
            }
            goto LAB_0010d381;
          }
          RendererRD::MaterialStorage::MaterialData::set_as_used();
          if (plVar13 != (long *)0x0) goto LAB_0010ba44;
          goto LAB_0010bb0e;
        }
      }
      else if (*(int *)(lVar11 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x3f4;
      pcVar18 = "Parameter \"material\" is null.";
LAB_0010c6e1:
      _err_print_error("setup_sky","servers/rendering/renderer_rd/environment/sky.cpp",uVar12,
                       pcVar18,0,0);
      return;
    }
    goto LAB_0010d381;
  }
  uVar12 = RendererSceneRender::environment_get_sky
                     (RendererSceneRenderRD::singleton,*(undefined8 *)(param_1 + 0x1c0));
  lVar14 = get_sky(this,uVar12);
  if (lVar14 == 0) {
    _err_print_error("sky_get_material","servers/rendering/renderer_rd/environment/sky.cpp",0x674,
                     "Parameter \"sky\" is null.",0,0);
    goto LAB_0010b9a5;
  }
  uVar15 = *(ulong *)(lVar14 + 0x28);
  if ((uVar15 == 0) || (*(uint *)(lVar11 + 0x26c) <= (uint)uVar15)) goto LAB_0010b9a5;
  lVar14 = ((uVar15 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0x268)) * 0xc0 +
           *(long *)(*(long *)(lVar11 + 600) +
                    ((uVar15 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0x268)) * 8);
  if (*(int *)(lVar14 + 0xb8) != (int)(uVar15 >> 0x20)) {
    if (*(int *)(lVar14 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_0010b9a5;
  }
  if (((*(int *)(lVar14 + 0x18) != 3) || (lVar14 = *(long *)(lVar14 + 8), lVar14 == 0)) ||
     (lVar20 = *(long *)(lVar14 + 0xa8), *(char *)(lVar20 + 0x70) == '\0')) goto LAB_0010b9a5;
  RendererRD::MaterialStorage::MaterialData::set_as_used();
LAB_0010ba44:
  iVar9 = 4;
  if (3 < (int)param_3) {
    iVar9 = (int)param_3;
  }
  *(int *)(plVar13 + 3) = iVar9;
  iVar9 = (int)((ulong)param_3 >> 0x20);
  if (iVar9 < 4) {
    iVar9 = 4;
  }
  *(int *)((long)plVar13 + 0x1c) = iVar9;
  if (*plVar13 == 0) {
    if ((char)plVar13[0x10] == '\0') {
      lVar11 = *(long *)(this + 0x8d8);
      *(undefined1 *)(plVar13 + 0x10) = 1;
      plVar13[0x11] = lVar11;
      *(long **)(this + 0x8d8) = plVar13;
    }
    update_dirty_skys(this);
  }
  lVar11 = *(long *)(param_1 + 0x180);
  if ((*(char *)(lVar20 + 0xba8) != '\0') &&
     (fVar29 = *(float *)(lVar11 + 0x3f0),
     __LC271 < (double)(fVar29 - *(float *)((long)plVar13 + 0xac)))) {
    RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
    *(undefined1 *)(plVar13 + 0xd) = 1;
    *(float *)((long)plVar13 + 0xac) = fVar29;
  }
  if (plVar13[0x13] != lVar14) {
    plVar13[0x13] = lVar14;
    *(undefined1 *)(plVar13 + 0xd) = 1;
  }
  if (*(char *)(lVar14 + 0xb8) != '\0') {
    *(undefined1 *)(lVar14 + 0xb8) = 0;
    *(undefined1 *)(plVar13 + 0xd) = 1;
  }
  cVar5 = Vector3::is_equal_approx((Vector3 *)(lVar11 + 0x198));
  if ((cVar5 == '\0') && (*(char *)(lVar20 + 0xba9) != '\0')) {
    lVar11 = *(long *)(param_1 + 0x180);
    plVar13[0x14] = *(long *)(lVar11 + 0x198);
    uVar30 = *(undefined4 *)(lVar11 + 0x1a0);
    *(undefined1 *)(plVar13 + 0xd) = 1;
    *(undefined4 *)(plVar13 + 0x15) = uVar30;
  }
LAB_0010bb0e:
  cVar5 = *(char *)(lVar20 + 0xbac);
  *(undefined4 *)(this + 0x15c) = 0;
  if (cVar5 != '\0') {
    lVar11 = *(long *)(param_1 + 400);
    uVar15 = *(ulong *)(lVar11 + 0x28);
    if ((int)uVar15 < 1) {
      uVar15 = 0;
      if (*(int *)(this + 500) != 0) goto LAB_0010cf0d;
    }
    else {
      uVar23 = 0;
      do {
        uVar8 = (uint)uVar23;
        if (uVar15 <= uVar23) goto LAB_0010c633;
        uVar1 = *(ulong *)(*(long *)(*(long *)(lVar11 + 8) +
                                    (uVar23 >> ((byte)*(undefined4 *)(lVar11 + 0x1c) & 0x3f)) * 8) +
                          (ulong)(uVar8 & *(uint *)(lVar11 + 0x20)) * 8);
        if (((uint)uVar1 < *(uint *)((long)plVar10 + 0x84)) && (uVar1 >> 0x20 != 0x7fffffff)) {
          lVar14 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar10 + 0x10)) * 0x498 +
                   *(long *)(plVar10[0xe] +
                            ((uVar1 & 0xffffffff) / (ulong)*(uint *)(plVar10 + 0x10)) * 8);
          uVar27 = *(uint *)(lVar14 + 0x490);
          if ((uVar27 & 0x7fffffff) == (uint)(uVar1 >> 0x20)) {
            if (uVar1 == 0) {
LAB_00111863:
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if ((int)uVar27 < 0) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,plVar10);
              goto LAB_00111863;
            }
            uVar1 = *(ulong *)(lVar14 + 0x3d0);
            if (uVar1 == 0) {
              _err_print_error("setup_sky","servers/rendering/renderer_rd/environment/sky.cpp",0x429
                               ,"Condition \"base.is_null()\" is true. Continuing.",0,0);
              uVar15 = *(ulong *)(lVar11 + 0x28);
              goto LAB_0010bb50;
            }
            uVar27 = (uint)uVar1;
            iVar9 = (int)(uVar1 >> 0x20);
            if (*(code **)(*plVar10 + 0xf8) == LightStorage::light_get_type) {
              if (uVar27 < *(uint *)((long)plVar10 + 0x2c)) {
                piVar21 = (int *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar10 + 5)) * 0xe8 +
                                 *(long *)(plVar10[3] +
                                          ((uVar1 & 0xffffffff) / (ulong)*(uint *)(plVar10 + 5)) * 8
                                          ));
                iVar7 = piVar21[0x38];
                if (iVar7 == iVar9) {
                  iVar7 = *piVar21;
                  goto LAB_0010bc4a;
                }
                if (iVar7 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
              _err_print_error("light_get_type",
                               "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x1ff,
                               "Parameter \"light\" is null.",0,0);
LAB_0010bc98:
              plVar24 = plVar10;
              iVar7 = (**(code **)(*plVar10 + 0xd0))(plVar10,uVar1);
              if (iVar7 != 1) {
                uVar15 = *(ulong *)(lVar11 + 0x28);
                puVar25 = (undefined8 *)
                          ((ulong)*(uint *)(this + 0x15c) * 0x30 + *(long *)(this + 0x1e0));
                if (uVar15 <= uVar23) {
LAB_0010c633:
                  _err_print_index_error
                            ("operator[]","./core/templates/paged_array.h",0xa9,(long)(int)uVar8,
                             uVar15,"p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                uVar15 = *(ulong *)(*(long *)(*(long *)(lVar11 + 8) +
                                             (uVar23 >>
                                             ((byte)*(undefined4 *)(lVar11 + 0x1c) & 0x3f)) * 8) +
                                   (ulong)(uVar8 & *(uint *)(lVar11 + 0x20)) * 8);
                if ((uVar15 == 0) || (*(uint *)((long)plVar10 + 0x84) <= (uint)uVar15)) {
LAB_0011187b:
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                lVar14 = ((uVar15 & 0xffffffff) % (ulong)*(uint *)(plVar10 + 0x10)) * 0x498 +
                         *(long *)(plVar10[0xe] +
                                  ((uVar15 & 0xffffffff) / (ulong)*(uint *)(plVar10 + 0x10)) * 8);
                if (*(int *)(lVar14 + 0x490) != (int)(uVar15 >> 0x20)) {
                  if (*(int *)(lVar14 + 0x490) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0,plVar24);
                  }
                  goto LAB_0011187b;
                }
                auVar33._0_4_ =
                     *(float *)(lVar14 + 0x3dc) * 0.0 + (float)*(undefined8 *)(lVar14 + 0x3d8) * 0.0
                     + (float)*(undefined8 *)(lVar14 + 0x3e0);
                auVar33._4_4_ =
                     *(float *)(lVar14 + 1000) * 0.0 +
                     (float)((ulong)*(undefined8 *)(lVar14 + 0x3e0) >> 0x20) * 0.0 +
                     (float)((ulong)*(undefined8 *)(lVar14 + 1000) >> 0x20);
                auVar33._8_8_ = 0;
                fVar32 = *(float *)(lVar14 + 0x3f0) * 0.0 + *(float *)(lVar14 + 0x3f4) * 0.0 +
                         *(float *)(lVar14 + 0x3f8);
                fVar29 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
                         fVar32 * fVar32;
                uVar12 = 0;
                fVar31 = 0.0;
                if (fVar29 != 0.0) {
                  fVar29 = SQRT(fVar29);
                  fVar31 = fVar32 / fVar29;
                  auVar35._4_4_ = fVar29;
                  auVar35._0_4_ = fVar29;
                  auVar35._8_8_ = _LC274;
                  auVar33 = divps(auVar33,auVar35);
                  uVar12 = auVar33._0_8_;
                }
                *puVar25 = uVar12;
                uVar15 = uVar1 & 0xffffffff;
                *(float *)(puVar25 + 1) = fVar31;
                if (uVar27 < *(uint *)((long)plVar10 + 0x2c)) {
                  lVar14 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar10 + 5)) * 0xe8 +
                           *(long *)(plVar10[3] +
                                    ((uVar1 & 0xffffffff) / (ulong)*(uint *)(plVar10 + 5)) * 8);
                  iVar7 = *(int *)(lVar14 + 0xe0);
                  if (iVar7 != iVar9) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_0010c7d0;
                  }
                  fVar29 = _LC265;
                  if (*(char *)(lVar14 + 0x71) == '\0') goto LAB_0010c800;
                }
                else {
LAB_0010c7d0:
                  _err_print_error("light_is_negative",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x23e,"Parameter \"light\" is null.",0,0);
LAB_0010c800:
                  fVar29 = _LC46;
                }
                if (*(code **)(*plVar10 + 0x108) == LightStorage::light_get_param) {
                  if (uVar27 < *(uint *)((long)plVar10 + 0x2c)) {
                    lVar14 = (uVar15 % (ulong)*(uint *)(plVar10 + 5)) * 0xe8 +
                             *(long *)(plVar10[3] + (uVar15 / *(uint *)(plVar10 + 5)) * 8);
                    iVar7 = *(int *)(lVar14 + 0xe0);
                    if (iVar7 == iVar9) {
                      fVar32 = *(float *)(lVar14 + 4);
                      goto LAB_0010be97;
                    }
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  _err_print_error("light_get_param",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x207,"Parameter \"light\" is null.",0,0);
                  fVar32 = 0.0;
                }
                else {
                  fVar32 = (float)(**(code **)(*plVar10 + 0x108))(plVar10,uVar1,0);
                }
LAB_0010be97:
                cVar5 = *(char *)(RendererSceneRenderRD::singleton + 0x179);
                *(float *)((long)puVar25 + 0xc) = fVar32 * fVar29;
                if (cVar5 != '\0') {
                  if (*(code **)(*plVar10 + 0x108) == LightStorage::light_get_param) {
                    if (uVar27 < *(uint *)((long)plVar10 + 0x2c)) {
                      lVar14 = (uVar15 % (ulong)*(uint *)(plVar10 + 5)) * 0xe8 +
                               *(long *)(plVar10[3] + (uVar15 / *(uint *)(plVar10 + 5)) * 8);
                      iVar7 = *(int *)(lVar14 + 0xe0);
                      if (iVar7 == iVar9) {
                        fVar29 = *(float *)(lVar14 + 0x54);
                        goto LAB_0010bf0d;
                      }
                      if (iVar7 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                    }
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.",0,0);
                    fVar29 = 0.0;
                  }
                  else {
                    fVar29 = (float)(**(code **)(*plVar10 + 0x108))(plVar10,uVar1,0x14);
                  }
LAB_0010bf0d:
                  *(float *)((long)puVar25 + 0xc) = fVar29 * *(float *)((long)puVar25 + 0xc);
                }
                if (*(long *)(param_1 + 0x1c8) != 0) {
                  fVar29 = (float)RendererCameraAttributes::
                                  camera_attributes_get_exposure_normalization_factor
                                            (RenderingServerGlobals::camera_attributes,
                                             *(undefined8 *)(param_1 + 0x1c8));
                  *(float *)((long)puVar25 + 0xc) = fVar29 * *(float *)((long)puVar25 + 0xc);
                }
                if (*(code **)(*plVar10 + 0x110) == LightStorage::light_get_color) {
                  if (uVar27 < *(uint *)((long)plVar10 + 0x2c)) {
                    lVar14 = (uVar15 % (ulong)*(uint *)(plVar10 + 5)) * 0xe8 +
                             *(long *)(plVar10[3] + (uVar15 / *(uint *)(plVar10 + 5)) * 8);
                    if (*(int *)(lVar14 + 0xe0) == iVar9) {
                      fVar29 = *(float *)(lVar14 + 0x58);
                      fVar32 = *(float *)(lVar14 + 0x5c);
                      fVar31 = *(float *)(lVar14 + 0x60);
                      goto LAB_0010bf92;
                    }
                    if (*(int *)(lVar14 + 0xe0) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  _err_print_error("light_get_color",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x215,"Parameter \"light\" is null.",0,0);
                  fVar31 = 0.0;
                  fVar32 = 0.0;
                  fVar29 = 0.0;
                  fVar34 = _LC276;
LAB_0010bfbc:
                  fVar32 = fVar32 * _LC277;
                }
                else {
                  auVar36 = (**(code **)(*plVar10 + 0x110))(plVar10,uVar1);
                  fVar31 = auVar36._8_4_;
                  fVar29 = auVar36._0_4_;
                  fVar32 = auVar36._4_4_;
LAB_0010bf92:
                  fVar34 = _LC276;
                  if (_LC276 <= fVar31) {
                    fVar31 = powf((float)(((double)fVar31 + __LC278) * __LC279),_LC280);
                  }
                  else {
                    fVar31 = fVar31 * _LC277;
                  }
                  if (fVar32 < _LC276) goto LAB_0010bfbc;
                  fVar32 = powf((float)(((double)fVar32 + __LC278) * __LC279),_LC280);
                }
                if (fVar34 <= fVar29) {
                  fVar29 = powf((float)(((double)fVar29 + __LC278) * __LC279),_LC280);
                }
                else {
                  fVar29 = fVar29 * _LC277;
                }
                lVar14 = *plVar10;
                *(undefined4 *)(puVar25 + 4) = 1;
                puVar25[2] = CONCAT44(fVar32,fVar29);
                pcVar3 = *(code **)(lVar14 + 0x108);
                *(float *)(puVar25 + 3) = fVar31;
                if (pcVar3 == LightStorage::light_get_param) {
                  if (uVar27 < *(uint *)((long)plVar10 + 0x2c)) {
                    lVar14 = (uVar15 % (ulong)*(uint *)(plVar10 + 5)) * 0xe8 +
                             *(long *)(plVar10[3] + (uVar15 / *(uint *)(plVar10 + 5)) * 8);
                    iVar7 = *(int *)(lVar14 + 0xe0);
                    if (iVar7 == iVar9) {
                      fVar29 = *(float *)(lVar14 + 0x18);
                      goto LAB_0010c045;
                    }
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  _err_print_error("light_get_param",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x207,"Parameter \"light\" is null.",0,0);
LAB_0010cd28:
                  fVar29 = 0.0;
                }
                else {
                  fVar29 = (float)(*pcVar3)(plVar10,uVar1,5);
LAB_0010c045:
                  if (fVar29 <= 0.0) goto LAB_0010cd28;
                  fVar29 = tanf(fVar29 * __LC281);
                }
                iVar9 = *(int *)(this + 0x15c);
                *(float *)((long)puVar25 + 0x1c) = fVar29;
                uVar8 = iVar9 + 1;
                uVar15 = (ulong)uVar8;
                *(uint *)(this + 0x15c) = uVar8;
                if (*(uint *)(this + 0x1f0) <= uVar8) {
                  if (*(uint *)(this + 500) == uVar8) goto LAB_0010cf5c;
                  goto LAB_0010c0a6;
                }
              }
            }
            else {
              iVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10,uVar1);
LAB_0010bc4a:
              if (iVar7 == 0) goto LAB_0010bc98;
            }
            uVar15 = *(ulong *)(lVar11 + 0x28);
          }
        }
LAB_0010bb50:
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)uVar15);
      uVar15 = (ulong)*(uint *)(this + 0x15c);
      if (*(uint *)(this + 500) == *(uint *)(this + 0x15c)) {
LAB_0010cf5c:
        if ((int)uVar15 != 0) {
          pfVar22 = *(float **)(this + 0x1e0);
          pfVar19 = *(float **)(this + 0x1e8);
          pfVar17 = pfVar22 + uVar15 * 0xc;
          do {
            if ((((((*pfVar22 != *pfVar19) || (pfVar22[1] != pfVar19[1])) ||
                  (pfVar22[2] != pfVar19[2])) ||
                 ((pfVar22[3] != pfVar19[3] || (pfVar22[4] != pfVar19[4])))) ||
                ((pfVar22[5] != pfVar19[5] ||
                 ((pfVar22[6] != pfVar19[6] || (pfVar22[8] != pfVar19[8])))))) ||
               (pfVar22[7] != pfVar19[7])) goto LAB_0010c0a6;
            pfVar22 = pfVar22 + 0xc;
            pfVar19 = pfVar19 + 0xc;
          } while (pfVar17 != pfVar22);
        }
      }
      else {
LAB_0010cf0d:
        if ((uint)uVar15 < *(uint *)(this + 0x1f0)) {
          lVar11 = *(long *)(this + 0x1e0);
          lVar14 = *(long *)(this + 0x1e8);
          do {
            uVar8 = (int)uVar15 + 1;
            *(undefined4 *)(lVar11 + 0x20 + uVar15 * 0x30) = 0;
            *(undefined4 *)(lVar14 + 0x20 + uVar15 * 0x30) = 0;
            uVar15 = (ulong)uVar8;
          } while (uVar8 < *(uint *)(this + 0x1f0));
        }
LAB_0010c0a6:
        uVar12 = RenderingDevice::get_singleton();
        RenderingDevice::buffer_update
                  (uVar12,*(undefined8 *)(this + 0x1f8),0,*(int *)(this + 0x1f0) * 0x30,
                   *(undefined8 *)(this + 0x1e0));
        uVar12 = *(undefined8 *)(this + 0x1e0);
        *(undefined4 *)(this + 500) = *(undefined4 *)(this + 0x15c);
        *(undefined8 *)(this + 0x1e0) = *(undefined8 *)(this + 0x1e8);
        *(undefined8 *)(this + 0x1e8) = uVar12;
        if (plVar13 != (long *)0x0) {
          *(undefined1 *)(plVar13 + 0xd) = 1;
        }
      }
    }
  }
  pSVar2 = *(StringName **)(param_1 + 0x178);
  *(undefined4 *)(this + 0x128) = 0;
  if ((setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#1}::
                                   operator()()::sname), iVar9 != 0)) {
    _scs_create((char *)&setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#1}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#1}::operator()()::sname)
    ;
  }
  cVar5 = RenderSceneBuffersRD::has_custom_data(pSVar2);
  if (cVar5 != '\0') {
    if ((setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#2}::
                                     operator()()::sname), iVar9 != 0)) {
      _scs_create((char *)&setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#2}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&setup_sky(RenderDataRD_const*,Vector2i)::{lambda()#2}::operator()()::
                           sname);
    }
    RenderSceneBuffersRD::get_custom_data((StringName *)&local_150);
    if (local_150 == (Object *)0x0) {
      *(undefined4 *)(this + 0x128) = 1;
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pOVar16 = (Object *)__dynamic_cast(local_150,&Object::typeinfo,&Fog::VolumetricFog::typeinfo,0);
    if (pOVar16 == (Object *)0x0) {
LAB_0010ca08:
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_150), cVar5 != '\0')) {
        (**(code **)(*(long *)local_150 + 0x140))(local_150);
        Memory::free_static(local_150,false);
      }
    }
    else {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        pOVar16 = (Object *)0x0;
      }
      if (local_150 != (Object *)0x0) goto LAB_0010ca08;
    }
    fVar29 = *(float *)(pOVar16 + 0x188);
    *(undefined4 *)(this + 0x128) = 1;
    fVar31 = _LC46;
    fVar32 = _LC46;
    if (0.0 < fVar29) {
      fVar32 = _LC46 / fVar29;
    }
    *(float *)(this + 300) = fVar32;
    if (0.0 < *(float *)(pOVar16 + 0x18c)) {
      fVar31 = fVar31 / *(float *)(pOVar16 + 0x18c);
    }
    uVar12 = *(undefined8 *)(pOVar16 + 0x1f0);
    *(float *)(this + 0x130) = fVar31;
    *(undefined8 *)(this + 0x210) = uVar12;
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar16), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
      Memory::free_static(pOVar16,false);
    }
  }
  lVar11 = *(long *)(param_1 + 0x180);
  uVar12 = *(undefined8 *)(lVar11 + 0x17c);
  uVar30 = *(undefined4 *)(lVar11 + 0x228);
  *(undefined8 *)(this + 0x16c) = *(undefined8 *)(lVar11 + 0x174);
  *(undefined8 *)(this + 0x174) = uVar12;
  uVar12 = *(undefined8 *)(lVar11 + 0x184);
  uVar4 = *(undefined8 *)(lVar11 + 0x18c);
  *(undefined4 *)(this + 0x168) = uVar30;
  *(undefined8 *)(this + 0x17c) = uVar12;
  *(undefined8 *)(this + 0x184) = uVar4;
  uVar12 = *(undefined8 *)(lVar11 + 0x19c);
  *(undefined8 *)(this + 0x18c) = *(undefined8 *)(lVar11 + 0x194);
  *(undefined8 *)(this + 0x194) = uVar12;
  Projection::Projection(local_148);
  Projection::set_depth_correction
            (SUB81(local_148,0),*(bool *)(*(long *)(param_1 + 0x180) + 0x1f6),true);
  Projection::add_jitter_offset((Vector2 *)local_148);
  lVar11 = *(long *)(param_1 + 0x180);
  local_108 = *(undefined8 *)(lVar11 + 0x1a4);
  uStack_100 = *(undefined8 *)(lVar11 + 0x1ac);
  local_f8 = *(undefined8 *)(lVar11 + 0x1b4);
  uStack_f0 = *(undefined8 *)(lVar11 + 0x1bc);
  uVar12 = *(undefined8 *)(lVar11 + 0x1c4);
  uStack_e0 = *(undefined8 *)(lVar11 + 0x1cc);
  local_d8 = *(undefined8 *)(lVar11 + 0x1d4);
  uStack_d0 = *(undefined8 *)(lVar11 + 0x1dc);
  local_e8 = uVar12;
  if (*(char *)(lVar11 + 0x1f5) != '\0') {
    local_e8._4_4_ = (uint)((ulong)uVar12 >> 0x20);
    local_e8 = CONCAT44(local_e8._4_4_ ^ __LC283,(int)uVar12);
  }
  fVar29 = (float)RendererSceneRender::environment_get_sky_custom_fov
                            (RendererSceneRenderRD::singleton,*(undefined8 *)(param_1 + 0x1c0));
  if ((fVar29 != 0.0) && (*(int *)(this + 0x168) == 1)) {
    fVar32 = (float)Projection::get_z_near();
    fVar31 = (float)Projection::get_z_far();
    fVar34 = (float)Projection::get_aspect();
    Projection::set_perspective(fVar29,fVar34,fVar32,fVar31,SUB81(&local_108,0));
  }
  local_178 = (Projection *)&local_108;
  Projection::operator*((Projection *)&local_88,local_148);
  *(undefined8 *)(this + 0x19c) = local_88;
  *(undefined8 *)(this + 0x1a4) = uStack_80;
  *(undefined8 *)(this + 0x1ac) = local_78;
  *(undefined8 *)(this + 0x1b4) = uStack_70;
  *(undefined8 *)(this + 0x1bc) = local_68;
  *(undefined8 *)(this + 0x1c4) = uStack_60;
  *(undefined8 *)(this + 0x1cc) = local_58;
  *(undefined8 *)(this + 0x1d4) = uStack_50;
  Projection::~Projection((Projection *)&local_88);
  if (*(int *)(*(long *)(param_1 + 0x180) + 0x228) != 0) {
    uVar8 = 0;
    pSVar26 = this + 0x108;
    pSVar28 = this + 8;
    do {
      uVar15 = (ulong)uVar8;
      Projection::operator*((Projection *)&local_88,local_148);
      Projection::inverse();
      Projection::~Projection((Projection *)&local_88);
      if (*(uint *)(*(long *)(param_1 + 0x180) + 0x228) < 2) {
        Projection::Projection((Projection *)&local_88);
        *(undefined8 *)pSVar28 = local_88;
        *(undefined8 *)(pSVar28 + 8) = uStack_80;
        *(undefined8 *)(pSVar28 + 0x10) = local_78;
        *(undefined8 *)(pSVar28 + 0x18) = uStack_70;
        *(undefined8 *)(pSVar28 + 0x20) = local_68;
        *(undefined8 *)(pSVar28 + 0x28) = uStack_60;
        *(undefined8 *)(pSVar28 + 0x30) = local_58;
        *(undefined8 *)(pSVar28 + 0x38) = uStack_50;
        Projection::~Projection((Projection *)&local_88);
      }
      else {
        Projection::operator*
                  ((Projection *)&local_88,(Projection *)(*(long *)(param_1 + 0x180) + 0x1a4));
        *(undefined8 *)pSVar28 = local_88;
        *(undefined8 *)(pSVar28 + 8) = uStack_80;
        *(undefined8 *)(pSVar28 + 0x10) = local_78;
        *(undefined8 *)(pSVar28 + 0x18) = uStack_70;
        *(undefined8 *)(pSVar28 + 0x20) = local_68;
        *(undefined8 *)(pSVar28 + 0x28) = uStack_60;
        *(undefined8 *)(pSVar28 + 0x30) = local_58;
        *(undefined8 *)(pSVar28 + 0x38) = uStack_50;
        Projection::~Projection((Projection *)&local_88);
      }
      uVar8 = uVar8 + 1;
      *(undefined8 *)(pSVar28 + 0x80) = local_c8;
      *(undefined8 *)(pSVar28 + 0x88) = uStack_c0;
      *(undefined8 *)(pSVar28 + 0x90) = local_b8;
      *(undefined8 *)(pSVar28 + 0x98) = uStack_b0;
      *(undefined8 *)(pSVar28 + 0xa0) = local_a8;
      *(undefined8 *)(pSVar28 + 0xa8) = uStack_a0;
      *(undefined8 *)(pSVar28 + 0xb0) = local_98;
      *(undefined8 *)(pSVar28 + 0xb8) = uStack_90;
      lVar11 = uVar15 * 0xc + *(long *)(param_1 + 0x180);
      *(undefined4 *)pSVar26 = *(undefined4 *)(lVar11 + 0x22c);
      *(undefined4 *)(pSVar26 + 4) = *(undefined4 *)(lVar11 + 0x230);
      uVar30 = *(undefined4 *)(lVar11 + 0x234);
      *(undefined4 *)(pSVar26 + 0xc) = 0;
      *(undefined4 *)(pSVar26 + 8) = uVar30;
      Projection::~Projection((Projection *)&local_c8);
      pSVar26 = pSVar26 + 0x10;
      pSVar28 = pSVar28 + 0x40;
    } while (uVar8 < *(uint *)(*(long *)(param_1 + 0x180) + 0x228));
  }
  uVar30 = Projection::get_z_far();
  lVar11 = RendererSceneRenderRD::singleton;
  uVar12 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x158) = uVar30;
  bVar6 = RendererSceneRender::environment_get_fog_enabled(lVar11,uVar12);
  lVar11 = RendererSceneRenderRD::singleton;
  uVar12 = *(undefined8 *)(param_1 + 0x1c0);
  *(uint *)(this + 0x138) = (uint)bVar6;
  uVar30 = RendererSceneRender::environment_get_fog_density(lVar11,uVar12);
  lVar11 = RendererSceneRenderRD::singleton;
  uVar12 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x140) = uVar30;
  uVar30 = RendererSceneRender::environment_get_fog_aerial_perspective(lVar11,uVar12);
  lVar11 = RendererSceneRenderRD::singleton;
  uVar12 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x154) = uVar30;
  auVar36 = RendererSceneRender::environment_get_fog_light_color(lVar11,uVar12);
  fVar32 = _LC276;
  fVar29 = auVar36._8_4_;
  if (_LC276 <= fVar29) {
    fVar29 = powf((float)(((double)fVar29 + __LC278) * __LC279),_LC280);
  }
  else {
    fVar29 = fVar29 * _LC277;
  }
  fVar31 = auVar36._0_4_;
  fVar34 = auVar36._4_4_;
  if (fVar32 <= fVar34) {
    fVar34 = powf((float)(((double)fVar34 + __LC278) * __LC279),_LC280);
  }
  else {
    fVar34 = _LC277 * fVar34;
  }
  if (fVar32 <= fVar31) {
    fVar31 = powf((float)(((double)fVar31 + __LC278) * __LC279),_LC280);
  }
  else {
    fVar31 = fVar31 * _LC277;
  }
  fVar32 = (float)RendererSceneRender::environment_get_fog_light_energy
                            (RendererSceneRenderRD::singleton,*(undefined8 *)(param_1 + 0x1c0));
  lVar11 = RendererSceneRenderRD::singleton;
  uVar12 = *(undefined8 *)(param_1 + 0x1c0);
  *(float *)(this + 0x150) = fVar32 * fVar29;
  *(ulong *)(this + 0x148) = CONCAT44(fVar32 * fVar34,fVar32 * fVar31);
  uVar30 = RendererSceneRender::environment_get_fog_sun_scatter(lVar11,uVar12);
  lVar11 = RendererSceneRenderRD::singleton;
  uVar12 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x144) = uVar30;
  uVar30 = RendererSceneRender::environment_get_fog_sky_affect(lVar11,uVar12);
  lVar11 = RendererSceneRenderRD::singleton;
  uVar12 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x13c) = uVar30;
  uVar30 = RendererSceneRender::environment_get_volumetric_fog_sky_affect(lVar11,uVar12);
  *(undefined4 *)(this + 0x134) = uVar30;
  uVar12 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar12,*(undefined8 *)(this + 0x208),0,0x160,this + 8);
  Projection::~Projection(local_178);
  Projection::~Projection(local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d381:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::SkyRD::sky_bake_panorama(RID, float, bool, Vector2i const&) */

undefined8 *
RendererRD::SkyRD::sky_bake_panorama
          (float param_1,undefined8 *param_2,SkyRD *param_3,undefined8 param_4)

{
  long lVar1;
  Vector2i *pVVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar2 = (Vector2i *)get_sky(param_3,param_4);
  if (pVVar2 == (Vector2i *)0x0) {
    _err_print_error("sky_bake_panorama","servers/rendering/renderer_rd/environment/sky.cpp",0x6b1,
                     "Parameter \"sky\" is null.",0,0);
    *param_2 = 0;
  }
  else {
    update_dirty_skys(param_3);
    Sky::bake_panorama(param_1,(int)param_2,pVVar2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
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



/* RendererRD::SkyRD::update_res_buffers(Ref<RenderSceneBuffersRD>, RID, double, float, float) */

void RendererRD::SkyRD::update_res_buffers(double param_1,SkyRD *param_2,long *param_3,long param_4)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulong uVar6;
  Object *pOVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  Sky *pSVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long local_128;
  long local_e0;
  Object *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010e3c9;
    uVar17 = 0x586;
    pcVar22 = "Condition \"p_render_buffers.is_null()\" is true.";
    goto LAB_0010de53;
  }
  lVar16 = RendererRD::MaterialStorage::get_singleton();
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar17 = 0x588;
      pcVar22 = "Condition \"p_env.is_null()\" is true.";
      goto LAB_0010de53;
    }
    goto LAB_0010e3c9;
  }
  uVar17 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton,param_4);
  pSVar18 = (Sky *)get_sky(param_2,uVar17);
  uVar14 = RendererSceneRender::environment_get_background(RendererSceneRenderRD::singleton,param_4)
  ;
  if (uVar14 < 2) {
    if (pSVar18 != (Sky *)0x0) goto LAB_0010d69c;
LAB_0010d620:
    uVar6 = *(ulong *)(param_2 + 0x228);
    if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(lVar16 + 0x26c))) {
      lVar16 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(lVar16 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar16 + 600) +
                        ((uVar6 & 0xffffffff) / (ulong)*(uint *)(lVar16 + 0x268)) * 8);
      if (*(int *)(lVar16 + 0xb8) == (int)(uVar6 >> 0x20)) {
        if (*(int *)(lVar16 + 0x18) == 3) {
          local_128 = *(long *)(lVar16 + 8);
          goto LAB_0010d73d;
        }
      }
      else if (*(int *)(lVar16 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  else {
    if (pSVar18 == (Sky *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar17 = 0x592;
        pcVar22 = "Parameter \"sky\" is null.";
        goto LAB_0010de53;
      }
      goto LAB_0010e3c9;
    }
LAB_0010d69c:
    uVar17 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton,param_4);
    lVar19 = get_sky(param_2,uVar17);
    if (lVar19 != 0) {
      uVar6 = *(ulong *)(lVar19 + 0x28);
      if ((uVar6 == 0) || (*(uint *)(lVar16 + 0x26c) <= (uint)uVar6)) goto LAB_0010d6cc;
      lVar19 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(lVar16 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar16 + 600) +
                        ((uVar6 & 0xffffffff) / (ulong)*(uint *)(lVar16 + 0x268)) * 8);
      if (*(int *)(lVar19 + 0xb8) != (int)(uVar6 >> 0x20)) {
        if (*(int *)(lVar19 + 0xb8) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010d6cc;
      }
      if (((*(int *)(lVar19 + 0x18) != 3) || (local_128 = *(long *)(lVar19 + 8), local_128 == 0)) ||
         (lVar19 = *(long *)(local_128 + 0xa8), *(char *)(lVar19 + 0x70) == '\0'))
      goto LAB_0010d6cc;
      if (uVar14 < 2) goto LAB_0010d620;
LAB_0010d75b:
      if ((*(char *)(lVar19 + 0xbab) != '\0') || (*(char *)(lVar19 + 0xbaa) != '\0')) {
        RendererRD::MaterialStorage::MaterialData::set_as_used();
        plVar1 = RenderingServerGlobals::utilities;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar8 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_e0 = 0;
          local_d0 = 0x1c;
          local_d8 = (Object *)0x11030b;
          String::parse_latin1((StrRange *)&local_e0);
          (*pcVar8)(plVar1);
          lVar16 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
        }
        uVar17 = RenderingDevice::get_singleton();
        local_e0 = 0;
        local_d8 = (Object *)0x11030b;
        local_88 = CONCAT44(_LC46,_LC46);
        uStack_80 = CONCAT44(_LC46,_LC46);
        local_d0 = 0x1c;
        String::parse_latin1((StrRange *)&local_e0);
        RenderingDevice::draw_command_begin_label
                  (uVar17,(StrRange *)&local_e0,(Projection *)&local_88);
        lVar16 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        RendererSceneRender::environment_get_sky_orientation
                  (&local_b8,RendererSceneRenderRD::singleton,param_4);
        Basis::invert();
        fVar9 = *(float *)(param_2 + 0x16c);
        fVar10 = *(float *)(param_2 + 0x170);
        fVar11 = *(float *)(param_2 + 0x178);
        local_88 = *(undefined8 *)(param_2 + 0x19c);
        uStack_80 = *(undefined8 *)(param_2 + 0x1a4);
        fVar27 = local_b8 * fVar10;
        fVar28 = local_b8 * *(float *)(param_2 + 0x174);
        local_68 = *(undefined8 *)(param_2 + 0x1bc);
        uStack_60 = *(undefined8 *)(param_2 + 0x1c4);
        local_78 = *(undefined8 *)(param_2 + 0x1ac);
        uStack_70 = *(undefined8 *)(param_2 + 0x1b4);
        fVar12 = *(float *)(param_2 + 0x17c);
        fVar2 = *(float *)(param_2 + 0x18c);
        fVar3 = *(float *)(param_2 + 0x184);
        local_58 = *(undefined8 *)(param_2 + 0x1cc);
        uStack_50 = *(undefined8 *)(param_2 + 0x1d4);
        fVar26 = *(float *)(param_2 + 0x180) * fStack_b4;
        fVar25 = fVar2 * local_98 +
                 *(float *)(param_2 + 0x174) * fStack_a0 + *(float *)(param_2 + 0x180) * fStack_9c;
        fVar4 = *(float *)(param_2 + 0x188);
        local_b8 = fStack_b0 * fVar3 + local_b8 * fVar9 + fVar11 * fStack_b4;
        fStack_b4 = fStack_b0 * fVar4 + fVar27 + fVar12 * fStack_b4;
        fStack_b0 = fStack_b0 * fVar2 + fVar28 + fVar26;
        fVar28 = fStack_a4 * fVar3 + fStack_ac * fVar9 + fVar11 * local_a8;
        fVar26 = fStack_a0 * fVar10;
        fVar27 = local_a8 * *(float *)(param_2 + 0x180);
        local_a8 = fStack_ac * fVar10 + local_a8 * fVar12 + fVar4 * fStack_a4;
        fStack_a4 = fStack_ac * *(float *)(param_2 + 0x174) + fVar27 + fVar2 * fStack_a4;
        fStack_a0 = fStack_a0 * fVar9 + fStack_9c * fVar11 + fVar3 * local_98;
        fStack_9c = fVar26 + fStack_9c * fVar12 + fVar4 * local_98;
        fStack_ac = fVar28;
        local_98 = fVar25;
        if (*(char *)(lVar19 + 0xbab) != '\0') {
          uVar14 = *(uint *)(param_2 + 0x168);
          uVar17 = Vector2i::operator/((Vector2i *)(pSVar18 + 0x18),4);
          uVar5 = *(undefined4 *)(param_2 + 4);
          lVar16 = *param_3;
          if ((update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::{lambda()#2}::
               operator()()::sname == '\0') &&
             (iVar15 = __cxa_guard_acquire(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                            ::{lambda()#2}::operator()()::sname), iVar15 != 0)) {
            _scs_create((char *)&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::
                          {lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#2}::operator()()::sname);
          }
          if ((update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::{lambda()#1}::
               operator()()::sname == '\0') &&
             (iVar15 = __cxa_guard_acquire(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                            ::{lambda()#1}::operator()()::sname), iVar15 != 0)) {
            _scs_create((char *)&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::
                          {lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#1}::operator()()::sname);
          }
          uVar17 = RenderSceneBuffersRD::create_texture
                             (lVar16,&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                      ::{lambda()#1}::operator()()::sname,
                              &update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                               ::{lambda()#2}::operator()()::sname,uVar5,3,0,uVar17,0,1,1,0);
          uVar17 = FramebufferCacheRD::get_cache_multiview<RID>
                             (FramebufferCacheRD::singleton,*(undefined4 *)(param_2 + 0x168),uVar17)
          ;
          pOVar7 = (Object *)*param_3;
          if ((pOVar7 == (Object *)0x0) ||
             (local_d8 = pOVar7, cVar13 = RefCounted::reference(), cVar13 == '\0')) {
            local_d8 = (Object *)0x0;
            uVar20 = Sky::get_textures(pSVar18,2,*(undefined8 *)(param_2 + 0x8c8),&local_d8);
          }
          else {
            uVar20 = Sky::get_textures(pSVar18,2,*(undefined8 *)(param_2 + 0x8c8),&local_d8);
            cVar13 = RefCounted::unreference();
            if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar7), cVar13 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          local_d0 = 0;
          Vector<Color>::push_back(0,0x3f80000000000000,&local_d8);
          uVar21 = RenderingDevice::get_singleton();
          local_c8 = 0;
          local_c0 = 0;
          uVar21 = RenderingDevice::draw_list_begin(uVar21,uVar17,0x500ff,&local_d8,0,&local_c8,0);
          auVar23._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar23._0_4_ = (float)param_1;
          _render_sky(auVar23._0_8_,param_2,uVar21,uVar17,
                      lVar19 + 0xa40 + (-(ulong)(uVar14 < 2) & 0xfffffffffffff8b0),
                      *(undefined8 *)(local_128 + 0xb0),uVar20,(Projection *)&local_88,&local_b8,
                      param_2 + 400);
          RenderingDevice::get_singleton();
          RenderingDevice::draw_list_end();
          lVar16 = local_d0;
          if (local_d0 != 0) {
            LOCK();
            plVar1 = (long *)(local_d0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
        }
        if (*(char *)(lVar19 + 0xbaa) != '\0') {
          uVar14 = *(uint *)(param_2 + 0x168);
          uVar17 = Vector2i::operator/((Vector2i *)(pSVar18 + 0x18),2);
          uVar5 = *(undefined4 *)(param_2 + 4);
          lVar16 = *param_3;
          if ((update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::{lambda()#4}::
               operator()()::sname == '\0') &&
             (iVar15 = __cxa_guard_acquire(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                            ::{lambda()#4}::operator()()::sname), iVar15 != 0)) {
            _scs_create((char *)&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::
                          {lambda()#4}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#4}::operator()()::sname);
          }
          if ((update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::{lambda()#3}::
               operator()()::sname == '\0') &&
             (iVar15 = __cxa_guard_acquire(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                            ::{lambda()#3}::operator()()::sname), iVar15 != 0)) {
            _scs_create((char *)&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)::
                          {lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                 ::{lambda()#3}::operator()()::sname);
          }
          uVar17 = RenderSceneBuffersRD::create_texture
                             (lVar16,&update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                                      ::{lambda()#3}::operator()()::sname,
                              &update_res_buffers(Ref<RenderSceneBuffersRD>,RID,double,float,float)
                               ::{lambda()#4}::operator()()::sname,uVar5,3,0,uVar17,0,1,1,0);
          uVar17 = FramebufferCacheRD::get_cache_multiview<RID>
                             (FramebufferCacheRD::singleton,*(undefined4 *)(param_2 + 0x168),uVar17)
          ;
          pOVar7 = (Object *)*param_3;
          if ((pOVar7 == (Object *)0x0) ||
             (local_d8 = pOVar7, cVar13 = RefCounted::reference(), cVar13 == '\0')) {
            local_d8 = (Object *)0x0;
            uVar20 = Sky::get_textures(pSVar18,1,*(undefined8 *)(param_2 + 0x8c8),&local_d8);
          }
          else {
            uVar20 = Sky::get_textures(pSVar18,1,*(undefined8 *)(param_2 + 0x8c8),&local_d8);
            cVar13 = RefCounted::unreference();
            if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar7), cVar13 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          local_d0 = 0;
          Vector<Color>::push_back(0,0x3f80000000000000,&local_d8);
          uVar21 = RenderingDevice::get_singleton();
          local_c8 = 0;
          local_c0 = 0;
          uVar21 = RenderingDevice::draw_list_begin(uVar21,uVar17,0x500ff,&local_d8,0,&local_c8,0);
          auVar24._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar24._0_4_ = (float)param_1;
          _render_sky(auVar24._0_8_,param_2,uVar21,uVar17,
                      lVar19 + 0x908 + (-(ulong)(uVar14 < 2) & 0xfffffffffffff8b0),
                      *(undefined8 *)(local_128 + 0xb0),uVar20,(Projection *)&local_88,&local_b8,
                      param_2 + 400);
          RenderingDevice::get_singleton();
          RenderingDevice::draw_list_end();
          lVar16 = local_d0;
          if (local_d0 != 0) {
            LOCK();
            plVar1 = (long *)(local_d0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
        }
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
        Projection::~Projection((Projection *)&local_88);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e3c9;
    }
    _err_print_error("sky_get_material","servers/rendering/renderer_rd/environment/sky.cpp",0x674,
                     "Parameter \"sky\" is null.",0,0);
LAB_0010d6cc:
    uVar6 = *(ulong *)(param_2 + 0x8c0);
    if ((uVar6 == 0) || (*(uint *)(lVar16 + 0x26c) <= (uint)uVar6)) {
joined_r0x0010e2f7:
      if (uVar14 < 2) goto LAB_0010d620;
    }
    else {
      lVar19 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(lVar16 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar16 + 600) +
                        ((uVar6 & 0xffffffff) / (ulong)*(uint *)(lVar16 + 0x268)) * 8);
      if (*(int *)(lVar19 + 0xb8) != (int)(uVar6 >> 0x20)) {
        if (*(int *)(lVar19 + 0xb8) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto joined_r0x0010e2f7;
      }
      if (*(int *)(lVar19 + 0x18) != 3) goto joined_r0x0010e2f7;
      local_128 = *(long *)(lVar19 + 8);
      if (uVar14 < 2) goto LAB_0010d620;
LAB_0010d73d:
      if (local_128 != 0) {
        lVar19 = *(long *)(local_128 + 0xa8);
        if (lVar19 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar17 = 0x5aa;
            pcVar22 = "Parameter \"shader_data\" is null.";
            goto LAB_0010de53;
          }
          goto LAB_0010e3c9;
        }
        goto LAB_0010d75b;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar17 = 0x5a7;
    pcVar22 = "Parameter \"material\" is null.";
LAB_0010de53:
    _err_print_error("update_res_buffers","servers/rendering/renderer_rd/environment/sky.cpp",uVar17
                     ,pcVar22,0,0);
    return;
  }
LAB_0010e3c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::update_radiance_buffers(Ref<RenderSceneBuffersRD>, RID, Vector3 const&,
   double, float, float) */

void RendererRD::SkyRD::update_radiance_buffers
               (double param_1,undefined4 param_2,SkyRD *param_3,long *param_4,long param_5,
               undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  Object *pOVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  Sky *pSVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long local_1b8;
  int local_1b0;
  Object **local_1a8;
  undefined8 local_188;
  float fStack_17c;
  undefined8 local_170;
  long local_138;
  long local_130;
  Object *local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  Projection local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010f95d;
    uVar8 = 0x4d8;
    pcVar11 = "Condition \"p_render_buffers.is_null()\" is true.";
    goto LAB_0010ec79;
  }
  lVar7 = RendererRD::MaterialStorage::get_singleton();
  if (param_5 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x4da;
      pcVar11 = "Condition \"p_env.is_null()\" is true.";
      goto LAB_0010ec79;
    }
    goto LAB_0010f95d;
  }
  uVar8 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton,param_5);
  pSVar9 = (Sky *)get_sky(param_3,uVar8);
  if (pSVar9 == (Sky *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x4dd;
      pcVar11 = "Parameter \"sky\" is null.";
      goto LAB_0010ec79;
    }
    goto LAB_0010f95d;
  }
  uVar8 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton,param_5);
  lVar10 = get_sky(param_3,uVar8);
  if (lVar10 == 0) {
    _err_print_error("sky_get_material","servers/rendering/renderer_rd/environment/sky.cpp",0x674,
                     "Parameter \"sky\" is null.",0,0);
LAB_0010e489:
    uVar2 = *(ulong *)(param_3 + 0x8c0);
    if ((uVar2 != 0) && ((uint)uVar2 < *(uint *)(lVar7 + 0x26c))) {
      lVar7 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(lVar7 + 0x268)) * 0xc0 +
              *(long *)(*(long *)(lVar7 + 600) +
                       ((uVar2 & 0xffffffff) / (ulong)*(uint *)(lVar7 + 0x268)) * 8);
      if (*(int *)(lVar7 + 0xb8) == (int)(uVar2 >> 0x20)) {
        if ((*(int *)(lVar7 + 0x18) == 3) && (local_1b8 = *(long *)(lVar7 + 8), local_1b8 != 0)) {
          lVar10 = *(long *)(local_1b8 + 0xa8);
          if (lVar10 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar8 = 0x4f3;
              pcVar11 = "Parameter \"shader_data\" is null.";
              goto LAB_0010ec79;
            }
            goto LAB_0010f95d;
          }
          goto LAB_0010e50e;
        }
      }
      else if (*(int *)(lVar7 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x4ef;
      pcVar11 = "Parameter \"material\" is null.";
LAB_0010ec79:
      _err_print_error("update_radiance_buffers","servers/rendering/renderer_rd/environment/sky.cpp"
                       ,uVar8,pcVar11,0,0);
      return;
    }
    goto LAB_0010f95d;
  }
  uVar2 = *(ulong *)(lVar10 + 0x28);
  if ((uVar2 == 0) || (*(uint *)(lVar7 + 0x26c) <= (uint)uVar2)) goto LAB_0010e489;
  lVar10 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(lVar7 + 0x268)) * 0xc0 +
           *(long *)(*(long *)(lVar7 + 600) +
                    ((uVar2 & 0xffffffff) / (ulong)*(uint *)(lVar7 + 0x268)) * 8);
  if (*(int *)(lVar10 + 0xb8) != (int)(uVar2 >> 0x20)) {
    if (*(int *)(lVar10 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_0010e489;
  }
  if (((*(int *)(lVar10 + 0x18) != 3) || (local_1b8 = *(long *)(lVar10 + 8), local_1b8 == 0)) ||
     (lVar10 = *(long *)(local_1b8 + 0xa8), *(char *)(lVar10 + 0x70) == '\0')) goto LAB_0010e489;
LAB_0010e50e:
  uVar13 = *(uint *)(pSVar9 + 0x3c);
  iVar17 = *(int *)(pSVar9 + 0x84);
  bVar18 = (uVar13 & 0xfffffffd) == 1;
  if (uVar13 == 0) {
    if (((*(char *)(lVar10 + 0xba8) == '\0') && (*(char *)(lVar10 + 0xba9) == '\0')) ||
       (*(int *)(pSVar9 + 0x38) != 0x100)) {
      if ((*(char *)(lVar10 + 0xbac) == '\0') && (*(int *)(lVar10 + 0xb98) == 0)) goto LAB_0010e568;
      uVar13 = 2 - (iVar17 == 0);
      bVar18 = iVar17 == 0;
    }
    else {
      bVar18 = true;
      uVar13 = 3;
    }
  }
  else if ((iVar17 == 0) && (uVar13 == 2)) {
LAB_0010e568:
    bVar18 = true;
    uVar13 = 1;
  }
  lVar7 = *(long *)(pSVar9 + 0x78);
  if (param_3[0x8d4] == (SkyRD)0x0) {
    if (lVar7 == 0) {
LAB_0010ed40:
      lVar12 = 0;
LAB_0010ed43:
      lVar7 = 0;
LAB_0010ed60:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar12 = *(long *)(lVar7 + -8);
    if (lVar12 < 1) goto LAB_0010ed43;
    lVar7 = *(long *)(lVar7 + 8);
  }
  if (lVar7 == 0) {
    local_1b0 = 0;
  }
  else {
    local_1b0 = *(int *)(lVar7 + -8);
  }
  if (pSVar9[0x68] == (Sky)0x0) {
    if (iVar17 < local_1b0) goto LAB_0010ebca;
  }
  else if ((local_1b0 <= iVar17) || (bVar18)) {
    if ((update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
         view_normals == '\0') &&
       (iVar17 = __cxa_guard_acquire(&update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)
                                      ::view_normals), iVar17 != 0)) {
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._0_8_ = __LC289;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._8_8_ = _LC292;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._64_8_ = _LC292;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._16_8_ = __LC167;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._24_8_ = _UNK_0011ae58;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._32_8_ = __LC290;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._40_8_ = _LC295;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._48_8_ = __LC291;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_normals._56_8_ = _UNK_0011aea8;
      __cxa_guard_release(&update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)
                           ::view_normals);
    }
    if ((update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
         view_up == '\0') &&
       (iVar17 = __cxa_guard_acquire(&update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)
                                      ::view_up), iVar17 != 0)) {
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._16_16_ = ZEXT416(_LC265);
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._64_8_ = _LC295;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._0_8_ = __LC293;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._8_8_ = _UNK_0011aeb8;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._32_8_ = __LC289;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._40_8_ = _LC292;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._48_8_ = __LC293;
      update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)::
      view_up._56_8_ = _UNK_0011aeb8;
      __cxa_guard_release(&update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)
                           ::view_up);
    }
    Projection::Projection((Projection *)&local_108);
    Projection::set_perspective(_LC298,_LC46,_LC297,_LC296,SUB81((Projection *)&local_108,0));
    Projection::Projection(local_c8);
    Projection::set_depth_correction(SUB81(local_c8,0),false,true);
    Projection::operator*((Projection *)&local_88,local_c8);
    local_108 = local_88;
    uStack_100 = uStack_80;
    local_f8 = local_78;
    uStack_f0 = uStack_70;
    local_e8 = local_68;
    uStack_e0 = uStack_60;
    local_d8 = local_58;
    uStack_d0 = uStack_50;
    Projection::~Projection((Projection *)&local_88);
    if (*(char *)(lVar10 + 0xbab) == '\0') {
      local_188 = CONCAT44(_LC46,_LC46);
      fStack_17c = _LC46;
    }
    else if (*(int *)(param_3 + 0x938) < 3) {
      _err_print_error("update_radiance_buffers","servers/rendering/renderer_rd/environment/sky.cpp"
                       ,0x53a,
                       "Cannot use quarter res buffer in sky shader when roughness layers is less than 3. Please increase rendering/reflections/sky_reflections/roughness_layers."
                       ,1,0);
      fStack_17c = _LC46;
      local_188 = CONCAT44(_LC46,_LC46);
    }
    else {
      uVar8 = RenderingDevice::get_singleton();
      local_138 = 0;
      local_120 = 0x21;
      local_128 = (Object *)0x111270;
      local_188 = CONCAT44(_LC46,_LC46);
      fStack_17c = _LC46;
      local_88 = CONCAT44(_LC46,_LC46);
      uStack_80 = CONCAT44(_LC46,_LC46);
      String::parse_latin1((StrRange *)&local_138);
      RenderingDevice::draw_command_begin_label
                (uVar8,(StrRange *)&local_138,(Projection *)&local_88);
      lVar7 = local_138;
      if (local_138 != 0) {
        LOCK();
        plVar1 = (long *)(local_138 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_138 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      iVar17 = 0;
      local_130 = 0;
      Vector<Color>::push_back(0,0x3f80000000000000,(StrRange *)&local_138);
      lVar7 = 0;
      do {
        Basis::looking_at((Vector3 *)&local_88,
                          (Vector3 *)
                          (update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)
                           ::view_normals + lVar7),(bool)((char)lVar7 + -0x20));
        pOVar3 = (Object *)*param_4;
        if ((pOVar3 == (Object *)0x0) ||
           (local_128 = pOVar3, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_128 = (Object *)0x0;
          local_170 = Sky::get_textures(pSVar9,5,*(undefined8 *)(param_3 + 0x8c8));
        }
        else {
          local_170 = Sky::get_textures(pSVar9,5,*(undefined8 *)(param_3 + 0x8c8));
          cVar6 = RefCounted::unreference();
          if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        uVar8 = RenderingDevice::get_singleton();
        local_118 = 0;
        local_110 = 0;
        lVar4 = *(long *)(pSVar9 + 0x78);
        local_120 = 0;
        if (lVar4 == 0) goto LAB_0010ed40;
        lVar12 = *(long *)(lVar4 + -8);
        if (lVar12 < 1) goto LAB_0010ed43;
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == 0) {
LAB_0010f8ee:
          lVar12 = 0;
LAB_0010f8f1:
          lVar7 = 2;
          goto LAB_0010ed60;
        }
        lVar12 = *(long *)(lVar4 + -8);
        if (lVar12 < 3) goto LAB_0010f8f1;
        lVar15 = (long)iVar17;
        uVar8 = RenderingDevice::draw_list_begin
                          (uVar8,*(undefined8 *)(lVar4 + 0xd0 + lVar15 * 8),0,&local_128,0,
                           &local_118,0);
        lVar12 = local_120;
        if (local_120 != 0) {
          LOCK();
          plVar1 = (long *)(local_120 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_120 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar4 = *(long *)(pSVar9 + 0x78);
        if (lVar4 == 0) goto LAB_0010ed40;
        lVar12 = *(long *)(lVar4 + -8);
        if (lVar12 < 1) goto LAB_0010ed43;
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == 0) goto LAB_0010f8ee;
        lVar12 = *(long *)(lVar4 + -8);
        if (lVar12 < 3) goto LAB_0010f8f1;
        auVar21._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar21._0_4_ = (float)param_1;
        iVar17 = iVar17 + 1;
        lVar7 = lVar7 + 0xc;
        _render_sky(auVar21._0_8_,param_3,uVar8,*(undefined8 *)(lVar4 + 0xd0 + lVar15 * 8),
                    lVar10 + 0x698,*(undefined8 *)(local_1b8 + 0xb0),local_170,
                    (Projection *)&local_108,(Projection *)&local_88,param_6);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
      } while (iVar17 != 6);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      if (local_130 != 0) {
        LOCK();
        plVar1 = (long *)(local_130 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_130 + -0x10),false);
        }
      }
    }
    local_1a8 = &local_128;
    if (*(char *)(lVar10 + 0xbaa) != '\0') {
      if (*(int *)(param_3 + 0x938) < 2) {
        _err_print_error("update_radiance_buffers",
                         "servers/rendering/renderer_rd/environment/sky.cpp",0x54f,
                         "Cannot use half res buffer in sky shader when roughness layers is less than 2. Please increase rendering/reflections/sky_reflections/roughness_layers."
                         ,1,0);
      }
      else {
        uVar8 = RenderingDevice::get_singleton();
        uStack_80 = CONCAT44(fStack_17c,fStack_17c);
        local_138 = 0;
        local_128 = (Object *)0x111338;
        local_88 = local_188;
        local_120 = 0x1e;
        String::parse_latin1((StrRange *)&local_138);
        RenderingDevice::draw_command_begin_label
                  (uVar8,(StrRange *)&local_138,(Projection *)&local_88);
        lVar7 = local_138;
        if (local_138 != 0) {
          LOCK();
          plVar1 = (long *)(local_138 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_138 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        iVar17 = 0;
        local_130 = 0;
        Vector<Color>::push_back(0,0x3f80000000000000,(StrRange *)&local_138);
        lVar7 = 0;
        do {
          Basis::looking_at((Vector3 *)&local_88,
                            (Vector3 *)
                            (update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)
                             ::view_normals + lVar7),(bool)((char)lVar7 + -0x20));
          pOVar3 = (Object *)*param_4;
          if ((pOVar3 == (Object *)0x0) ||
             (local_128 = pOVar3, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
            local_128 = (Object *)0x0;
            local_170 = Sky::get_textures(pSVar9,4,*(undefined8 *)(param_3 + 0x8c8));
          }
          else {
            local_170 = Sky::get_textures(pSVar9,4,*(undefined8 *)(param_3 + 0x8c8));
            cVar6 = RefCounted::unreference();
            if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
          uVar8 = RenderingDevice::get_singleton();
          local_118 = 0;
          local_110 = 0;
          lVar4 = *(long *)(pSVar9 + 0x78);
          local_120 = 0;
          if (lVar4 == 0) goto LAB_0010ed40;
          lVar12 = *(long *)(lVar4 + -8);
          if (lVar12 < 1) goto LAB_0010ed43;
          lVar4 = *(long *)(lVar4 + 8);
          if (lVar4 == 0) {
LAB_0010f8c6:
            lVar12 = 0;
LAB_0010f8c9:
            lVar7 = 1;
            goto LAB_0010ed60;
          }
          lVar12 = *(long *)(lVar4 + -8);
          if (lVar12 < 2) goto LAB_0010f8c9;
          lVar15 = (long)iVar17;
          uVar8 = RenderingDevice::draw_list_begin
                            (uVar8,*(undefined8 *)(lVar4 + 0x68 + lVar15 * 8),0,local_1a8,0,
                             &local_118,0);
          lVar12 = local_120;
          if (local_120 != 0) {
            LOCK();
            plVar1 = (long *)(local_120 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_120 = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
          }
          lVar4 = *(long *)(pSVar9 + 0x78);
          if (lVar4 == 0) goto LAB_0010ed40;
          lVar12 = *(long *)(lVar4 + -8);
          if (lVar12 < 1) goto LAB_0010ed43;
          lVar4 = *(long *)(lVar4 + 8);
          if (lVar4 == 0) goto LAB_0010f8c6;
          lVar12 = *(long *)(lVar4 + -8);
          if (lVar12 < 2) goto LAB_0010f8c9;
          iVar17 = iVar17 + 1;
          lVar7 = lVar7 + 0xc;
          auVar20._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar20._0_4_ = (float)param_1;
          _render_sky(auVar20._0_8_,param_3,uVar8,*(undefined8 *)(lVar4 + 0x68 + lVar15 * 8),
                      lVar10 + 0x560,*(undefined8 *)(local_1b8 + 0xb0),local_170,
                      (Projection *)&local_108,(Projection *)&local_88,param_6);
          RenderingDevice::get_singleton();
          RenderingDevice::draw_list_end();
        } while (iVar17 != 6);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
        if (local_130 != 0) {
          LOCK();
          plVar1 = (long *)(local_130 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_130 + -0x10),false);
          }
        }
      }
    }
    uVar8 = RenderingDevice::get_singleton();
    uStack_80 = CONCAT44(fStack_17c,fStack_17c);
    local_138 = 0;
    local_128 = (Object *)0x110340;
    local_88 = local_188;
    local_120 = 0x12;
    String::parse_latin1((StrRange *)&local_138);
    RenderingDevice::draw_command_begin_label(uVar8,(StrRange *)&local_138,(Projection *)&local_88);
    lVar7 = local_138;
    if (local_138 != 0) {
      LOCK();
      plVar1 = (long *)(local_138 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_138 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = 0;
    uVar16 = 0;
    do {
      Basis::looking_at((Vector3 *)&local_88,
                        (Vector3 *)
                        (update_radiance_buffers(Ref<RenderSceneBuffersRD>,RID,Vector3_const&,double,float,float)
                         ::view_normals + lVar7),(bool)((char)lVar7 + -0x20));
      pOVar3 = (Object *)*param_4;
      if ((pOVar3 == (Object *)0x0) ||
         (local_128 = pOVar3, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        local_128 = (Object *)0x0;
        local_188 = Sky::get_textures(pSVar9,3,*(undefined8 *)(param_3 + 0x8c8));
      }
      else {
        local_188 = Sky::get_textures(pSVar9,3,*(undefined8 *)(param_3 + 0x8c8));
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      uVar8 = RenderingDevice::get_singleton();
      local_118 = 0;
      lVar4 = *(long *)(pSVar9 + 0x78);
      local_110 = 0;
      local_120 = 0;
      if (lVar4 == 0) goto LAB_0010ed40;
      lVar12 = *(long *)(lVar4 + -8);
      if (lVar12 < 1) goto LAB_0010ed43;
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == 0) goto LAB_0010ed40;
      lVar12 = *(long *)(lVar4 + -8);
      if (lVar12 < 1) goto LAB_0010ed43;
      lVar15 = (long)(int)uVar16;
      uVar8 = RenderingDevice::draw_list_begin
                        (uVar8,*(undefined8 *)(lVar4 + lVar15 * 8),0,local_1a8,0,&local_118,
                         uVar16 | 0x20000);
      lVar12 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar1 = (long *)(local_120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      lVar4 = *(long *)(pSVar9 + 0x78);
      if (lVar4 == 0) goto LAB_0010ed40;
      lVar12 = *(long *)(lVar4 + -8);
      if (lVar12 < 1) goto LAB_0010ed43;
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == 0) goto LAB_0010ed40;
      lVar12 = *(long *)(lVar4 + -8);
      if (lVar12 < 1) goto LAB_0010ed43;
      uVar16 = uVar16 + 1;
      lVar7 = lVar7 + 0xc;
      auVar19._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar19._0_4_ = (float)param_1;
      _render_sky(auVar19._0_8_,param_3,uVar8,*(undefined8 *)(lVar4 + lVar15 * 8),lVar10 + 0x428,
                  *(undefined8 *)(local_1b8 + 0xb0),local_188,(Projection *)&local_108,
                  (Projection *)&local_88,param_6);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
    } while (uVar16 != 6);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    if (uVar13 == 3) {
      ReflectionData::create_reflection_fast_filter
                ((ReflectionData *)(pSVar9 + 0x40),(bool)param_3[0x8d4]);
      if (param_3[0x8d4] != (SkyRD)0x0) {
        if (*(long *)(pSVar9 + 0x78) == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = (int)*(undefined8 *)(*(long *)(pSVar9 + 0x78) + -8);
        }
        ReflectionData::update_reflection_mipmaps((ReflectionData *)(pSVar9 + 0x40),0,iVar17);
      }
    }
    else {
      if (bVar18) {
        iVar17 = 1;
        if (1 < local_1b0) {
          do {
            iVar14 = iVar17 + 1;
            ReflectionData::create_reflection_importance_sample
                      ((ReflectionData *)(pSVar9 + 0x40),(bool)param_3[0x8d4],10,iVar17,
                       *(uint *)(param_3 + 0x8d0));
            iVar17 = iVar14;
          } while (local_1b0 != iVar14);
        }
        if (param_3[0x8d4] != (SkyRD)0x0) {
          if (*(long *)(pSVar9 + 0x78) == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = (int)*(undefined8 *)(*(long *)(pSVar9 + 0x78) + -8);
          }
LAB_0010eab5:
          ReflectionData::update_reflection_mipmaps((ReflectionData *)(pSVar9 + 0x40),0,iVar17);
        }
      }
      else if (param_3[0x8d4] != (SkyRD)0x0) {
        iVar17 = 1;
        goto LAB_0010eab5;
      }
      *(undefined4 *)(pSVar9 + 0x84) = 1;
    }
    pSVar9[0x68] = (Sky)0x0;
    *(undefined4 *)(pSVar9 + 0x90) = param_2;
    Projection::~Projection(local_c8);
    Projection::~Projection((Projection *)&local_108);
  }
  else {
LAB_0010ebca:
    if (uVar13 == 2) {
      ReflectionData::create_reflection_importance_sample
                ((ReflectionData *)(pSVar9 + 0x40),(bool)param_3[0x8d4],10,iVar17,
                 *(uint *)(param_3 + 0x8d0));
      if (param_3[0x8d4] != (SkyRD)0x0) {
        ReflectionData::update_reflection_mipmaps
                  ((ReflectionData *)(pSVar9 + 0x40),*(int *)(pSVar9 + 0x84),
                   *(int *)(pSVar9 + 0x84) + 1);
      }
      *(int *)(pSVar9 + 0x84) = *(int *)(pSVar9 + 0x84) + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f95d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RendererRD::SkyRD::SkyMaterialData::set_render_priority(int) */

void RendererRD::SkyRD::SkyMaterialData::set_render_priority(int param_1)

{
  return;
}



/* RendererRD::SkyRD::SkyMaterialData::set_next_pass(RID) */

void RendererRD::SkyRD::SkyMaterialData::set_next_pass(void)

{
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



/* SkyShaderRD::~SkyShaderRD() */

void __thiscall SkyShaderRD::~SkyShaderRD(SkyShaderRD *this)

{
  *(undefined ***)this = &PTR__SkyShaderRD_00118880;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SkyShaderRD::~SkyShaderRD() */

void __thiscall SkyShaderRD::~SkyShaderRD(SkyShaderRD *this)

{
  *(undefined ***)this = &PTR__SkyShaderRD_00118880;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* RendererRD::LightStorage::light_get_type(RID) const */

undefined4 __thiscall RendererRD::LightStorage::light_get_type(LightStorage *this,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    iVar1 = puVar2[0x38];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_type","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x1ff,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* RendererRD::LightStorage::light_get_color(RID) */

undefined1  [16] __thiscall
RendererRD::LightStorage::light_get_color(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0x58);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_color","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x215,"Parameter \"light\" is null.",0,0);
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* RendererRD::LightStorage::light_get_param(RID, RenderingServer::LightParam) */

undefined4 __thiscall
RendererRD::LightStorage::light_get_param(LightStorage *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x2c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
              *(long *)(*(long *)(this + 0x18) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
      iVar1 = *(int *)(lVar2 + 0xe0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        return *(undefined4 *)(lVar2 + 4 + (long)param_3 * 4);
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_get_param","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x207,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_copy_on_write(void)

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



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_copy_on_write(void)

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



/* Error CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::resize<false>(long) [clone
   .isra.0] [clone .cold] */

void CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111774(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::SkyRD::~SkyRD() [clone .cold] */

void __thiscall RendererRD::SkyRD::~SkyRD(SkyRD *this)

{
  code *pcVar1;
  int in_EDX;
  
  if (in_EDX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererRD::SkyRD::ReflectionData::Layer>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<RendererRD::SkyRD::ReflectionData::Layer>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::SkyRD::init() [clone .cold] */

void RendererRD::SkyRD::init(void)

{
  code *pcVar1;
  int in_EDX;
  
  if (in_EDX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::SkyRD::ReflectionData::update_reflection_data(int, int, bool, RID, int, bool, int,
   RenderingDeviceCommons::DataFormat) [clone .cold] */

void RendererRD::SkyRD::ReflectionData::update_reflection_data(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::SkyRD::setup_sky(RenderDataRD const*, Vector2i) [clone .cold] */

void RendererRD::SkyRD::setup_sky(void)

{
  code *pcVar1;
  
  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                   "Method/function failed. Returning: nullptr",
                   "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = RenderingDevice::get_singleton;
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



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = RenderingDevice::get_singleton;
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



/* FramebufferCacheRD::_allocate_from_data(unsigned int, unsigned int, unsigned int, Vector<RID>
   const&, Vector<RenderingDevice::FramebufferPass> const&) */

long __thiscall
FramebufferCacheRD::_allocate_from_data
          (FramebufferCacheRD *this,uint param_1,uint param_2,uint param_3,Vector *param_4,
          Vector *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  Vector *pVVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint local_48;
  
  if ((*(long *)(param_5 + 8) == 0) || (*(long *)(*(long *)(param_5 + 8) + -8) == 0)) {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create(pVVar9,(long)param_4,0xffffffff);
  }
  else {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create_multipass(pVVar9,param_4,(long)param_5,0xffffffff);
  }
  if (lVar10 == 0) {
    _err_print_error("_allocate_from_data","./servers/rendering/renderer_rd/framebuffer_cache_rd.h",
                     0xab,"Condition \"rid.is_null()\" is true. Returning: rid",0,0);
    return 0;
  }
  iVar8 = *(int *)(this + 0x18c);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x188);
    uVar6 = uVar7 + 1;
    *(uint *)(this + 0x188) = uVar6;
    uVar14 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar6 * 8,false);
    *(undefined8 *)(this + 0x178) = uVar14;
    uVar14 = Memory::realloc_static
                       (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
    lVar20 = *(long *)(this + 0x178);
    *(undefined8 *)(this + 0x180) = uVar14;
    lVar11 = (ulong)uVar7 * 8;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) * 0x48,false);
    uVar6 = *(uint *)(this + 0x198);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    lVar20 = *(long *)(this + 0x180);
    uVar14 = Memory::alloc_static((ulong)uVar6 << 3,false);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    uVar6 = *(uint *)(this + 0x198);
    if (uVar6 == 0) {
      plVar18 = *(long **)(this + 0x180);
    }
    else {
      plVar18 = *(long **)(this + 0x180);
      lVar20 = *(long *)(this + 0x178);
      plVar3 = (long *)*plVar18;
      lVar15 = 0;
      plVar16 = plVar3;
      do {
        plVar17 = plVar16 + 1;
        lVar13 = *(long *)(lVar20 + lVar11) + lVar15;
        lVar15 = lVar15 + 0x48;
        *plVar16 = lVar13;
        plVar16 = plVar17;
      } while (plVar3 + uVar6 != plVar17);
    }
    iVar8 = uVar6 + *(int *)(this + 0x18c);
  }
  else {
    plVar18 = *(long **)(this + 0x180);
  }
  uVar6 = iVar8 - 1;
  *(uint *)(this + 0x18c) = uVar6;
  pauVar1 = *(undefined1 (**) [16])
             (plVar18[uVar6 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
             (ulong)(uVar6 & *(uint *)(this + 0x194)) * 8);
  pauVar1[1] = (undefined1  [16])0x0;
  *(long *)(pauVar1[1] + 8) = lVar10;
  lVar11 = *(long *)(param_4 + 8);
  *(undefined8 *)pauVar1[4] = 0;
  *(uint *)pauVar1[1] = param_2;
  *(uint *)pauVar1[4] = param_1;
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[2] = (undefined1  [16])0x0;
  pauVar1[3] = (undefined1  [16])0x0;
  if (lVar11 == 0) {
LAB_00111dc8:
    lVar11 = *(long *)(param_5 + 8);
    if ((lVar11 == 0) || (local_48 = (uint)*(undefined8 *)(lVar11 + -8), local_48 == 0)) {
LAB_00111fb0:
      *(undefined8 *)*pauVar1 = 0;
      puVar2 = *(undefined8 **)(this + (ulong)param_3 * 8 + 0x1e0);
      *(undefined8 **)(*pauVar1 + 8) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar1;
      }
      *(undefined1 (**) [16])(this + (ulong)param_3 * 8 + 0x1e0) = pauVar1;
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::framebuffer_set_invalidation_callback
                (uVar14,lVar10,FramebufferCacheRD::_framebuffer_invalidation_callback,pauVar1);
      *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
      return lVar10;
    }
    uVar6 = 0;
LAB_00111ded:
    uVar7 = local_48 - 1;
    if (*(uint *)(pauVar1[3] + 4) < local_48) {
      pvVar4 = *(void **)(pauVar1[3] + 8);
      uVar6 = uVar7 >> 1 | uVar7;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
      *(uint *)(pauVar1[3] + 4) = uVar6;
      lVar11 = Memory::realloc_static(pvVar4,(ulong)uVar6 * 0x48,false);
      *(long *)(pauVar1[3] + 8) = lVar11;
      if (lVar11 == 0) {
LAB_001121b1:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar6 = *(uint *)pauVar1[3];
      lVar11 = *(long *)(param_5 + 8);
      if (uVar6 < local_48) goto LAB_00111dfb;
    }
    else {
LAB_00111dfb:
      uVar14 = _LC35;
      lVar20 = *(long *)(pauVar1[3] + 8);
      lVar15 = lVar20 + (ulong)uVar6 * 0x48;
      do {
        *(undefined8 *)(lVar15 + 8) = 0;
        lVar13 = lVar15 + 0x48;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        *(undefined8 *)(lVar15 + 0x28) = 0;
        *(undefined8 *)(lVar15 + 0x38) = 0;
        *(undefined8 *)(lVar15 + 0x40) = uVar14;
        lVar15 = lVar13;
      } while (lVar20 + 0x48 + ((ulong)uVar6 + (ulong)(uVar7 - uVar6)) * 0x48 != lVar13);
    }
    *(uint *)pauVar1[3] = local_48;
  }
  else {
    uVar21 = *(ulong *)(lVar11 + -8);
    uVar6 = (uint)uVar21;
    if (uVar6 == 0) goto LAB_00111dc8;
    uVar19 = uVar6 - 1;
    uVar7 = uVar19 >> 1 | uVar19;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    *(uint *)(pauVar1[2] + 4) = uVar7;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 8,false);
    *(long *)(pauVar1[2] + 8) = lVar11;
    if (lVar11 == 0) goto LAB_001121b1;
    uVar7 = *(uint *)pauVar1[2];
    if (uVar7 < uVar6) {
      memset((void *)(lVar11 + (ulong)uVar7 * 8),0,(ulong)(uVar19 - uVar7) * 8 + 8);
    }
    lVar20 = *(long *)(param_4 + 8);
    *(uint *)pauVar1[2] = uVar6;
    if (lVar20 == 0) {
      uVar12 = 0;
      lVar15 = 0;
      goto LAB_00111f2e;
    }
    uVar12 = 0;
    do {
      lVar15 = *(long *)(lVar20 + -8);
      if (lVar15 <= (long)uVar12) goto LAB_00111f2e;
      *(undefined8 *)(lVar11 + uVar12 * 8) = *(undefined8 *)(lVar20 + uVar12 * 8);
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uVar21 & 0xffffffff));
    uVar6 = *(uint *)pauVar1[3];
    lVar11 = *(long *)(param_5 + 8);
    if (lVar11 != 0) {
      local_48 = (uint)*(undefined8 *)(lVar11 + -8);
      if (local_48 < uVar6) goto LAB_00111cce;
      if (local_48 <= uVar6) goto LAB_00111dad;
      goto LAB_00111ded;
    }
    if (uVar6 == 0) goto LAB_00111fb0;
    local_48 = 0;
LAB_00111cce:
    uVar21 = (ulong)local_48;
    lVar11 = uVar21 * 0x48;
    do {
      lVar20 = *(long *)(pauVar1[3] + 8) + lVar11;
      if (*(long *)(lVar20 + 0x38) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x38) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x38);
          *(undefined8 *)(lVar20 + 0x38) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x28) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x28) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x28);
          *(undefined8 *)(lVar20 + 0x28) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x18) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x18) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x18);
          *(undefined8 *)(lVar20 + 0x18) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 8) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 8) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 8);
          *(undefined8 *)(lVar20 + 8) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      uVar6 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar6;
      lVar11 = lVar11 + 0x48;
    } while (uVar6 < *(uint *)pauVar1[3]);
    *(uint *)pauVar1[3] = local_48;
    uVar6 = local_48;
LAB_00111dad:
    if (uVar6 == 0) goto LAB_00111fb0;
    lVar11 = *(long *)(param_5 + 8);
  }
  uVar12 = 0;
  while (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + -8);
    if (lVar15 <= (long)uVar12) goto LAB_00111f2e;
    lVar11 = lVar11 + uVar12 * 0x48;
    lVar20 = uVar12 * 0x48 + *(long *)(pauVar1[3] + 8);
    if (*(long *)(lVar20 + 8) != *(long *)(lVar11 + 8)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 8),(CowData *)(lVar11 + 8));
    }
    if (*(long *)(lVar20 + 0x18) != *(long *)(lVar11 + 0x18)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x18),(CowData *)(lVar11 + 0x18));
    }
    if (*(long *)(lVar20 + 0x28) != *(long *)(lVar11 + 0x28)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x28),(CowData *)(lVar11 + 0x28));
    }
    if (*(long *)(lVar20 + 0x38) != *(long *)(lVar11 + 0x38)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x38),(CowData *)(lVar11 + 0x38));
    }
    uVar12 = uVar12 + 1;
    *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(lVar11 + 0x40);
    if (*(uint *)pauVar1[3] <= (uint)uVar12) goto LAB_00111fb0;
    lVar11 = *(long *)(param_5 + 8);
  }
  lVar15 = 0;
LAB_00111f2e:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar15,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* ShaderCompiler::IdentifierActions::~IdentifierActions() */

void __thiscall ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(this + 200);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xec) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xd0) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xd0) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 200);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001122dc;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xd0),false);
  }
LAB_001122dc:
  pvVar3 = *(void **)(this + 0x98);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xbc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa0) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xa0) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x98);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011239c;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_0011239c:
  pvVar3 = *(void **)(this + 0x68);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x8c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x88) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x70) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x70) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x68);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00112453;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_00112453:
  pvVar3 = *(void **)(this + 0x38);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x5c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x40) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x40) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x38);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001124fe;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_001124fe:
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          bVar4 = StringName::configured != '\0';
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions() */

void __thiscall
ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions(DefaultIdentifierActions *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  if (*(long *)(this + 0xe0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xe0);
      *(undefined8 *)(this + 0xe0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xd8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xd8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xd8);
      *(undefined8 *)(this + 0xd8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xd0);
      *(undefined8 *)(this + 0xd0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pvVar5 = *(void **)(this + 0x98);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xbc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xa0) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x98);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00112803;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_00112803:
  pvVar5 = *(void **)(this + 0x68);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x8c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x88) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x70) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x70) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x68);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001128e2;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_001128e2:
  pvVar5 = *(void **)(this + 0x38);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x5c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x40) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x40) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x38);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001129bd;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_001129bd:
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          if (*(long *)((long)pvVar5 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x18);
              *(undefined8 *)((long)pvVar5 + 0x18) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar5,false);
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00112d78) */
/* WARNING: Removing unreachable block (ram,0x00112ea8) */
/* WARNING: Removing unreachable block (ram,0x00113070) */
/* WARNING: Removing unreachable block (ram,0x00112eb4) */
/* WARNING: Removing unreachable block (ram,0x00112ebe) */
/* WARNING: Removing unreachable block (ram,0x00113050) */
/* WARNING: Removing unreachable block (ram,0x00112eca) */
/* WARNING: Removing unreachable block (ram,0x00112ed4) */
/* WARNING: Removing unreachable block (ram,0x00113030) */
/* WARNING: Removing unreachable block (ram,0x00112ee0) */
/* WARNING: Removing unreachable block (ram,0x00112eea) */
/* WARNING: Removing unreachable block (ram,0x00113010) */
/* WARNING: Removing unreachable block (ram,0x00112ef6) */
/* WARNING: Removing unreachable block (ram,0x00112f00) */
/* WARNING: Removing unreachable block (ram,0x00112ff0) */
/* WARNING: Removing unreachable block (ram,0x00112f0c) */
/* WARNING: Removing unreachable block (ram,0x00112f16) */
/* WARNING: Removing unreachable block (ram,0x00112fd0) */
/* WARNING: Removing unreachable block (ram,0x00112f22) */
/* WARNING: Removing unreachable block (ram,0x00112f2c) */
/* WARNING: Removing unreachable block (ram,0x00112fb0) */
/* WARNING: Removing unreachable block (ram,0x00112f34) */
/* WARNING: Removing unreachable block (ram,0x00112f4a) */
/* WARNING: Removing unreachable block (ram,0x00112f56) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderCompiler::Stage, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderCompiler::Stage> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
::operator[](HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_001137a8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00113658;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011365c:
      if (iVar46 != 0) {
LAB_00113664:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_0011325c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_00113293;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00113293;
    if (iVar46 != 0) goto LAB_00113664;
LAB_001132b9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011325c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0011325c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_001137a8;
LAB_00113658:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011365c;
    }
LAB_00113293:
    if ((float)uVar40 * __LC71 < (float)(iVar46 + 1)) goto LAB_001132b9;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0011376d;
LAB_00113544:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00113544;
LAB_0011376d:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011325c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, bool*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool*> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
::operator[](HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_00113f18:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00113dc8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_00113dcc:
      if (iVar46 != 0) {
LAB_00113dd4:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              puVar42[3] = 0;
              goto LAB_001139cc;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_00113a03;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00113a03;
    if (iVar46 != 0) goto LAB_00113dd4;
LAB_00113a29:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001139cc;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_001139cc;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_00113f18;
LAB_00113dc8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00113dcc;
    }
LAB_00113a03:
    if ((float)uVar40 * __LC71 < (float)(iVar46 + 1)) goto LAB_00113a29;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  puVar42[3] = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_00113edd;
LAB_00113cb7:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00113cb7;
LAB_00113edd:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001139cc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  undefined8 *puVar6;
  long lVar7;
  
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
    lVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + -8);
    if (param_1 == lVar7) {
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
    lVar3 = lVar7 * 8;
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
LAB_00114378:
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
  if (uVar4 == 0xffffffffffffffff) goto LAB_00114378;
  if (param_1 <= lVar7) {
    puVar6 = *(undefined8 **)this;
    if (uVar4 + 1 == lVar3) {
      if (puVar6 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar5 = (undefined8 *)Memory::realloc_static(puVar6 + -2,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_001143b0:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
    }
    puVar6[-1] = param_1;
    return 0;
  }
  if (uVar4 + 1 == lVar3) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar6[-1];
LAB_001142b9:
    if (param_1 <= lVar3) goto LAB_00114231;
  }
  else {
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001143b0;
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
      lVar3 = puVar5[1];
      goto LAB_001142b9;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar3 = 0;
  }
  memset(puVar6 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00114231:
  puVar6[-1] = param_1;
  return 0;
}



/* RID FramebufferCacheRD::get_cache_multiview<RID>(unsigned int, RID) */

undefined8 __thiscall
FramebufferCacheRD::get_cache_multiview<RID>(FramebufferCacheRD *this,uint param_1,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  Vector aVStack_58 [8];
  long local_50;
  Vector local_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (param_1 * 0x16a88000 | param_1 * -0x3361d2af >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64 ^ 0xc3539a5d;
  uVar6 = ((int)param_3 * 0x16a88000 | (uint)((int)param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  iVar8 = (int)((ulong)param_3 >> 0x20);
  uVar6 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  lVar2 = *(long *)(this + (ulong)(uVar6 % 0x3ffd) * 8 + 0x1e0);
  do {
    if (lVar2 == 0) {
      local_50 = 0;
      Vector<RID>::push_back((Vector<RID> *)aVStack_58);
      local_40 = 0;
      uVar7 = _allocate_from_data(this,param_1,uVar6,uVar6 % 0x3ffd,aVStack_58,local_48);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          if (local_40 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar3 = *(long *)(local_40 + -8);
          local_40 = 0;
          if (lVar3 != 0) {
            lVar10 = 0;
            lVar9 = lVar2;
            do {
              if (*(long *)(lVar9 + 0x38) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 0x38) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 0x38);
                  *(undefined8 *)(lVar9 + 0x38) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              if (*(long *)(lVar9 + 0x28) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 0x28) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 0x28);
                  *(undefined8 *)(lVar9 + 0x28) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              if (*(long *)(lVar9 + 0x18) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 0x18) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 0x18);
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              if (*(long *)(lVar9 + 8) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 8) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 8);
                  *(undefined8 *)(lVar9 + 8) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              lVar10 = lVar10 + 1;
              lVar9 = lVar9 + 0x48;
            } while (lVar3 != lVar10);
          }
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
        }
      }
LAB_00114550:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((((*(uint *)(lVar2 + 0x10) == uVar6) && (*(int *)(lVar2 + 0x30) == 0)) &&
        (*(int *)(lVar2 + 0x20) == 1)) &&
       ((*(uint *)(lVar2 + 0x40) == param_1 && (**(long **)(lVar2 + 0x28) == param_3)))) {
      uVar7 = *(undefined8 *)(lVar2 + 0x18);
      goto LAB_00114550;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00114850) */
/* WARNING: Removing unreachable block (ram,0x00114980) */
/* WARNING: Removing unreachable block (ram,0x00114af9) */
/* WARNING: Removing unreachable block (ram,0x0011498c) */
/* WARNING: Removing unreachable block (ram,0x00114996) */
/* WARNING: Removing unreachable block (ram,0x00114adb) */
/* WARNING: Removing unreachable block (ram,0x001149a2) */
/* WARNING: Removing unreachable block (ram,0x001149ac) */
/* WARNING: Removing unreachable block (ram,0x00114abd) */
/* WARNING: Removing unreachable block (ram,0x001149b8) */
/* WARNING: Removing unreachable block (ram,0x001149c2) */
/* WARNING: Removing unreachable block (ram,0x00114a9f) */
/* WARNING: Removing unreachable block (ram,0x001149ce) */
/* WARNING: Removing unreachable block (ram,0x001149d8) */
/* WARNING: Removing unreachable block (ram,0x00114a81) */
/* WARNING: Removing unreachable block (ram,0x001149e4) */
/* WARNING: Removing unreachable block (ram,0x001149ee) */
/* WARNING: Removing unreachable block (ram,0x00114a63) */
/* WARNING: Removing unreachable block (ram,0x001149f6) */
/* WARNING: Removing unreachable block (ram,0x00114a00) */
/* WARNING: Removing unreachable block (ram,0x00114a48) */
/* WARNING: Removing unreachable block (ram,0x00114a08) */
/* WARNING: Removing unreachable block (ram,0x00114a1e) */
/* WARNING: Removing unreachable block (ram,0x00114a2a) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String * vformat<unsigned_int,char_const*>(String *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_88,(uint)param_3);
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
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
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
      uVar9 = _LC89;
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
LAB_001150c2:
        uVar14 = 0;
        do {
          uVar9 = (uint)uVar13;
          if (lVar15 == 0) {
            lVar15 = *(long *)(piVar11 + 8);
            if (lVar15 == 0) {
              lVar6 = 0;
LAB_00115321:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar6,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar6 = *(long *)(lVar15 + -8);
            if (lVar6 <= (long)uVar14) goto LAB_00115321;
            lVar15 = *(long *)(lVar15 + uVar14 * 8);
LAB_001150d9:
            iVar7 = (int)((ulong)lVar15 >> 0x20);
            uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
            uVar9 = uVar9 ^ ((int)lVar15 * 0x16a88000 | (uint)((int)lVar15 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
          }
          else {
            if (uVar14 == 0) goto LAB_001150d9;
            _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                             "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
            uVar8 = 0;
          }
          uVar14 = uVar14 + 1;
          uVar8 = uVar8 ^ (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
          uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
          if (uVar3 == uVar14) goto LAB_00115148;
          lVar15 = *(long *)(piVar11 + 4);
        } while( true );
      }
      if ((*(long *)(piVar11 + 8) != 0) &&
         (uVar3 = (uint)*(undefined8 *)(*(long *)(piVar11 + 8) + -8), uVar3 != 0))
      goto LAB_001150c2;
LAB_00115148:
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
LAB_001151f0:
    lVar10 = *(long *)(lVar10 + 8);
  }
  if (*param_4 == 0) {
LAB_0011558d:
    return *(undefined8 *)(lVar10 + 0x28);
  }
  lVar15 = 0;
  uVar9 = 0;
  do {
    piVar12 = (int *)(*(long *)(lVar10 + 0x38) + lVar15);
    piVar11 = (int *)(*(long *)(param_4 + 2) + lVar15);
    if ((piVar11[1] != piVar12[1]) || (*piVar11 != *piVar12)) goto LAB_001151f0;
    lVar5 = *(long *)(piVar12 + 4);
    if (*(long *)(piVar11 + 4) != 0) {
      if (lVar5 == 0) {
        if ((*(long *)(piVar12 + 8) == 0) ||
           (uVar8 = (uint)*(undefined8 *)(*(long *)(piVar12 + 8) + -8), uVar8 != 1))
        goto LAB_001151f0;
      }
      else {
        uVar8 = 1;
      }
LAB_0011536b:
      uVar13 = 0;
      do {
        uVar14 = uVar13;
        if (lVar5 == 0) {
          lVar5 = *(long *)(piVar12 + 8);
          if (lVar5 == 0) {
            lVar6 = 0;
            goto LAB_00115321;
          }
          lVar6 = *(long *)(lVar5 + -8);
          if (lVar6 <= (long)uVar13) goto LAB_00115321;
          lVar6 = *(long *)(piVar11 + 4);
          lVar5 = *(long *)(lVar5 + uVar13 * 8);
          if (lVar6 == 0) goto LAB_0011539d;
          if (uVar13 != 0) goto LAB_0011541e;
        }
        else if (uVar13 == 0) {
          lVar6 = *(long *)(piVar11 + 4);
          uVar14 = 0;
          if (lVar6 == 0) {
LAB_0011539d:
            lVar1 = *(long *)(piVar11 + 8);
            if (lVar1 == 0) {
              lVar6 = 0;
              goto LAB_00115321;
            }
            lVar6 = *(long *)(lVar1 + -8);
            if (lVar6 <= (long)uVar14) goto LAB_00115321;
            lVar6 = *(long *)(lVar1 + uVar13 * 8);
          }
        }
        else {
          _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                           "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
          if (*(long *)(piVar11 + 4) == 0) {
            lVar5 = 0;
            goto LAB_0011539d;
          }
          lVar5 = 0;
LAB_0011541e:
          _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                           "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
          lVar6 = 0;
        }
        if (lVar6 != lVar5) goto LAB_001151f0;
        uVar13 = uVar13 + 1;
        if (uVar8 <= (uint)uVar13) goto LAB_00115484;
        lVar5 = *(long *)(piVar12 + 4);
      } while( true );
    }
    if (*(long *)(piVar11 + 8) == 0) {
      if (lVar5 != 0) goto LAB_001151f0;
      if (*(long *)(piVar12 + 8) != 0) {
        uVar8 = *(uint *)(*(long *)(piVar12 + 8) + -8);
joined_r0x0011557f:
        if (uVar8 != 0) goto LAB_001151f0;
      }
    }
    else {
      uVar8 = (uint)*(undefined8 *)(*(long *)(piVar11 + 8) + -8);
      if (lVar5 != 0) {
        if (uVar8 == 1) goto LAB_0011536b;
        goto LAB_001151f0;
      }
      if (*(long *)(piVar12 + 8) == 0) goto joined_r0x0011557f;
      if (*(uint *)(*(long *)(piVar12 + 8) + -8) != uVar8) goto LAB_001151f0;
      if (uVar8 != 0) goto LAB_0011536b;
    }
LAB_00115484:
    uVar9 = uVar9 + 1;
    lVar15 = lVar15 + 0x28;
    if (*param_4 <= uVar9) goto LAB_0011558d;
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



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::SkyRD::Sky, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::SkyRD::Sky,true>::allocate_rid(RID_Alloc<RendererRD::SkyRD::Sky,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
    std::__throw_system_error(iVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar13 = 0;
      goto LAB_00115856;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0xb8,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0xb0);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x2e;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0xb8 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0xb0) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00115856:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00115df0:
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
  if (lVar10 == 0) goto LAB_00115df0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00115cc9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00115cc9;
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
    goto LAB_00115e46;
  }
  if (lVar10 == lVar7) {
LAB_00115d6f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00115e46:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00115d5a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00115d6f;
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
LAB_00115d5a:
  puVar9[-1] = param_1;
  return 0;
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
    *(code **)param_1 = RenderingDevice::get_singleton;
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



/* CowData<Vector<unsigned char> >::_unref() */

void __thiscall CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this)

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
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
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



/* CowData<ShaderCompiler::GeneratedCode::Texture>::_unref() */

void __thiscall
CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
          (CowData<ShaderCompiler::GeneratedCode::Texture> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 5;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_realloc(long) */

undefined8 __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap>::_realloc
          (CowData<RendererRD::SkyRD::ReflectionData::Layer::Mipmap> *this,long param_1)

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



/* CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_realloc(long) */

undefined8 __thiscall
CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap>::_realloc
          (CowData<RendererRD::SkyRD::ReflectionData::DownsampleLayer::Mipmap> *this,long param_1)

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



/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::_resize_and_rehash
          (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) */

CowData<char32_t> * __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::operator[](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
             *this,StringName *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong __n;
  long lVar4;
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
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  void *__s_00;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined8 *puVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  uint local_a8;
  CowData<char32_t> *local_88;
  long local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  lVar34 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar29);
  if (lVar34 == 0) {
LAB_00116968:
    local_70 = 0;
    uVar33 = uVar43 * 4;
    __n = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar43 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar43 != uVar33);
      }
      else {
        memset(__s,0,uVar33);
        memset(__s_00,0,__n);
      }
LAB_00116581:
      iVar35 = *(int *)(this + 0x2c);
      if (iVar35 != 0) {
LAB_0011658d:
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar33 = CONCAT44(0,uVar29);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar30 = StringName::get_empty_hash();
        }
        else {
          uVar30 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar30 == 0) {
          uVar30 = 1;
        }
        uVar42 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar30 * lVar34;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar33;
        lVar37 = SUB168(auVar9 * auVar21,8);
        uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
        uVar41 = SUB164(auVar9 * auVar21,8);
        if (uVar40 != 0) {
          do {
            if ((uVar40 == uVar30) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10) == *(long *)param_1))
            {
              lVar34 = *(long *)(*(long *)(this + 8) + (ulong)uVar41 * 8);
              if (*(long *)(lVar34 + 0x18) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar34 + 0x18),(CowData *)&local_70);
                lVar34 = *(long *)(*(long *)(this + 8) + (ulong)uVar41 * 8);
              }
              goto LAB_00116528;
            }
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(uVar41 + 1) * lVar34;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar33;
            lVar37 = SUB168(auVar10 * auVar22,8);
            uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
            uVar41 = SUB164(auVar10 * auVar22,8);
          } while ((uVar40 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar40 * lVar34, auVar23._8_8_ = 0,
                  auVar23._0_8_ = uVar33, auVar12._8_8_ = 0,
                  auVar12._0_8_ = (ulong)((uVar29 + uVar41) - SUB164(auVar11 * auVar23,8)) * lVar34,
                  auVar24._8_8_ = 0, auVar24._0_8_ = uVar33, uVar42 <= SUB164(auVar12 * auVar24,8)))
          ;
        }
        iVar35 = *(int *)(this + 0x2c);
      }
      goto LAB_0011668c;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011668c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011658d;
LAB_001166ae:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      lVar34 = 0;
LAB_00116528:
      local_88 = (CowData<char32_t> *)(lVar34 + 0x18);
      goto LAB_00116531;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar30 = StringName::get_empty_hash();
        lVar34 = *(long *)(this + 8);
      }
      else {
        uVar30 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar30 == 0) {
        uVar30 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar43;
      lVar36 = SUB168(auVar5 * auVar17,8);
      uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
      uVar41 = SUB164(auVar5 * auVar17,8);
      if (uVar40 != 0) {
        uVar42 = 0;
        do {
          if ((uVar40 == uVar30) &&
             (*(long *)(*(long *)(lVar34 + lVar36 * 8) + 0x10) == *(long *)param_1)) {
            lVar34 = *(long *)(lVar34 + (ulong)uVar41 * 8);
            goto LAB_00116528;
          }
          uVar42 = uVar42 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar41 + 1) * lVar37;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar36 = SUB168(auVar6 * auVar18,8);
          uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
          uVar41 = SUB164(auVar6 * auVar18,8);
        } while ((uVar40 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar40 * lVar37, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar41 + uVar29) - SUB164(auVar7 * auVar19,8)) * lVar37,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar43, uVar42 <= SUB164(auVar8 * auVar20,8)));
      }
      local_70 = 0;
      uVar43 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar34 == 0) goto LAB_00116968;
      goto LAB_00116581;
    }
    local_70 = 0;
    iVar35 = 0;
LAB_0011668c:
    if ((float)uVar43 * __LC71 < (float)(iVar35 + 1)) goto LAB_001166ae;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50[0] = 0;
  puVar31 = (undefined8 *)operator_new(0x20,"");
  *puVar31 = local_68._0_8_;
  puVar31[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar31 + 2),(StringName *)&local_58);
  puVar31[3] = 0;
  local_88 = (CowData<char32_t> *)(puVar31 + 3);
  if ((local_50[0] == 0) ||
     (CowData<char32_t>::_ref(local_88,(CowData *)local_50), lVar34 = local_50[0], local_50[0] == 0)
     ) {
    lVar37 = 0;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_50[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar37 = local_70;
    if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar34 + -0x10),false);
      lVar37 = local_70;
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar39 = *(undefined8 **)(this + 0x20);
  if (puVar39 == (undefined8 *)0x0) {
    lVar34 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar31;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar34 == 0) goto LAB_00116935;
LAB_001167a2:
    uVar29 = *(uint *)(lVar34 + 0x20);
  }
  else {
    *puVar39 = puVar31;
    puVar31[1] = puVar39;
    lVar34 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar34 != 0) goto LAB_001167a2;
LAB_00116935:
    uVar29 = StringName::get_empty_hash();
  }
  lVar34 = *(long *)(this + 0x10);
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  uVar43 = (ulong)uVar29;
  uVar41 = 0;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar30);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar43 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar33;
  lVar38 = SUB168(auVar13 * auVar25,8);
  lVar4 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar34 + lVar38 * 4);
  iVar35 = SUB164(auVar13 * auVar25,8);
  uVar40 = *puVar2;
  while (uVar40 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar40 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar33;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((iVar35 + uVar30) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar33;
    local_a8 = SUB164(auVar15 * auVar27,8);
    puVar39 = puVar31;
    if (local_a8 < uVar41) {
      *puVar2 = (uint)uVar43;
      uVar43 = (ulong)uVar40;
      puVar3 = (undefined8 *)(lVar4 + lVar38 * 8);
      puVar39 = (undefined8 *)*puVar3;
      *puVar3 = puVar31;
      uVar41 = local_a8;
    }
    uVar29 = (uint)uVar43;
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar33;
    lVar38 = SUB168(auVar16 * auVar28,8);
    puVar2 = (uint *)(lVar34 + lVar38 * 4);
    iVar35 = SUB164(auVar16 * auVar28,8);
    puVar31 = puVar39;
    uVar40 = *puVar2;
  }
  *(undefined8 **)(lVar4 + lVar38 * 8) = puVar31;
  *puVar2 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar37 != 0) {
    LOCK();
    plVar1 = (long *)(lVar37 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_00116531:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::insert(StringName const&, String
   const&, bool) */

StringName *
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::insert(StringName *param_1,String *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__s;
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
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  CowData *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  long *local_80;
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar22 = (ulong)uVar23;
    uVar32 = uVar22 * 4;
    uVar34 = uVar22 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar22 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_00116ab2;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00116bc9;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00116abe;
LAB_00116beb:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_00116dbb;
    }
    _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00116ab2:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_00116abe:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar24 * lVar25;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar32;
      lVar30 = SUB168(auVar6 * auVar14,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar6 * auVar14,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar24) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            if (local_80[3] != *(long *)in_RCX) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 3),in_RCX);
              local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            }
            goto LAB_00116dbb;
          }
          uVar35 = uVar35 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar32;
          lVar30 = SUB168(auVar7 * auVar15,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar7 * auVar15,8);
        } while ((uVar33 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar33 * lVar25, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar32, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar3 + uVar27) - SUB164(auVar8 * auVar16,8)) * lVar25,
                auVar17._8_8_ = 0, auVar17._0_8_ = uVar32, uVar35 <= SUB164(auVar9 * auVar17,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_00116bc9:
    if ((float)uVar23 * __LC71 < (float)(iVar28 + 1)) goto LAB_00116beb;
  }
  StringName::StringName((StringName *)&local_58,pSVar29);
  local_50[0] = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
  }
  local_80 = (long *)operator_new(0x20,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  local_80[3] = 0;
  if ((local_50[0] != 0) &&
     (CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 3),(CowData *)local_50),
     lVar25 = local_50[0], local_50[0] != 0)) {
    LOCK();
    plVar1 = (long *)(local_50[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar25 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
LAB_00116cdc:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_00116ce9;
LAB_00116e11:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar4 = local_80;
      local_80[1] = (long)puVar4;
      *(long **)(param_2 + 0x20) = local_80;
      goto LAB_00116cdc;
    }
    lVar25 = *(long *)(param_2 + 0x18);
    *(long **)(lVar25 + 8) = local_80;
    *local_80 = lVar25;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x18) = local_80;
    if (lVar25 == 0) goto LAB_00116e11;
LAB_00116ce9:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar3);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar32 * lVar30;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar34;
  lVar31 = SUB168(auVar10 * auVar18,8);
  lVar5 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar10 * auVar18,8);
  uVar24 = *puVar2;
  plVar1 = local_80;
  while (uVar24 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar24 * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((iVar28 + uVar3) - SUB164(auVar11 * auVar19,8)) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    uVar23 = SUB164(auVar12 * auVar20,8);
    plVar36 = plVar1;
    if (uVar23 < uVar33) {
      *puVar2 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar4 = (undefined8 *)(lVar5 + lVar31 * 8);
      plVar36 = (long *)*puVar4;
      *puVar4 = plVar1;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar34;
    lVar31 = SUB168(auVar13 * auVar21,8);
    puVar2 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar13 * auVar21,8);
    plVar1 = plVar36;
    uVar24 = *puVar2;
  }
  *(long **)(lVar5 + lVar31 * 8) = plVar1;
  *puVar2 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00116dbb:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref() */

void __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref
          (CowData<RendererRD::SkyRD::ReflectionData::Layer> *this)

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
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x20;
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



/* RID_Alloc<RendererRD::SkyRD::Sky, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::SkyRD::Sky,true>::~RID_Alloc(RID_Alloc<RendererRD::SkyRD::Sky,true> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001188a0;
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
LAB_001171fa:
    if ((uint)uVar5 < (uint)uVar7) goto LAB_0011723b;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar8[lVar6],false);
      lVar3 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar3),false);
      if ((uint)(uVar5 / uVar7) <= (uint)lVar6) break;
      puVar8 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar2);
    print_error((String *)&local_48);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar9 = 0;
      do {
        lVar6 = (uVar9 % uVar7) * 0xb8 + puVar8[uVar9 / uVar7];
        if (-1 < *(int *)(lVar6 + 0xb0)) {
          CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref
                    ((CowData<RendererRD::SkyRD::ReflectionData::Layer> *)(lVar6 + 0x78));
          if (*(long *)(lVar6 + 0x58) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x58) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x58);
              *(undefined8 *)(lVar6 + 0x58) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          uVar7 = (ulong)*(uint *)(this + 0x18);
          puVar8 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      goto LAB_001171fa;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_0011723b;
    Memory::free_static((void *)*puVar8,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar8 = *(undefined8 **)(this + 8);
LAB_0011723b:
  if (puVar8 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar8,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::SkyRD::Sky, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::SkyRD::Sky,true>::~RID_Alloc(RID_Alloc<RendererRD::SkyRD::Sky,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererRD::SkyRD::Sky, true>::initialize_rid(RID, RendererRD::SkyRD::Sky const&) */

void __thiscall
RID_Alloc<RendererRD::SkyRD::Sky,true>::initialize_rid
          (RID_Alloc<RendererRD::SkyRD::Sky,true> *this,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  bool bVar10;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    puVar8 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0xb8 +
             *(long *)(*(long *)(this + 8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(puVar8 + 0x16) < 0) {
      uVar5 = *(uint *)(puVar8 + 0x16) & 0x7fffffff;
      if (uVar5 == (uint)(param_2 >> 0x20)) {
        *(uint *)(puVar8 + 0x16) = uVar5;
        *puVar8 = *param_3;
        puVar8[1] = param_3[1];
        puVar8[2] = param_3[2];
        puVar8[3] = param_3[3];
        puVar8[4] = param_3[4];
        puVar8[5] = param_3[5];
        puVar8[6] = param_3[6];
        puVar8[7] = param_3[7];
        puVar8[8] = param_3[8];
        uVar7 = param_3[9];
        puVar8[0xb] = 0;
        puVar8[9] = uVar7;
        plVar1 = (long *)(param_3[0xb] + -0x10);
        if (param_3[0xb] != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00117493;
            LOCK();
            lVar6 = *plVar1;
            bVar10 = lVar4 == lVar6;
            if (bVar10) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar6 != -1) {
            puVar8[0xb] = param_3[0xb];
          }
        }
LAB_00117493:
        puVar8[0xc] = param_3[0xc];
        uVar3 = *(undefined1 *)(param_3 + 0xd);
        puVar8[0xf] = 0;
        lVar4 = param_3[0xf];
        *(undefined1 *)(puVar8 + 0xd) = uVar3;
        if (lVar4 != 0) {
          CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref
                    ((CowData<RendererRD::SkyRD::ReflectionData::Layer> *)(puVar8 + 0xf));
          if (param_3[0xf] != 0) {
            plVar1 = (long *)(param_3[0xf] + -0x10);
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_001174e8;
              LOCK();
              lVar6 = *plVar1;
              bVar10 = lVar4 == lVar6;
              if (bVar10) {
                *plVar1 = lVar4 + 1;
                lVar6 = lVar4;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar6 != -1) {
              puVar8[0xf] = param_3[0xf];
            }
          }
        }
LAB_001174e8:
        uVar2 = *(undefined4 *)((long)param_3 + 0xac);
        *(undefined1 *)(puVar8 + 0x10) = *(undefined1 *)(param_3 + 0x10);
        uVar7 = *(undefined8 *)((long)param_3 + 0x84);
        *(undefined4 *)((long)puVar8 + 0xac) = uVar2;
        *(undefined8 *)((long)puVar8 + 0x84) = uVar7;
        *(undefined8 *)((long)puVar8 + 0x8c) = *(undefined8 *)((long)param_3 + 0x8c);
        puVar8[0x13] = param_3[0x13];
        puVar8[0x14] = param_3[0x14];
        *(undefined4 *)(puVar8 + 0x15) = *(undefined4 *)(param_3 + 0x15);
        return;
      }
      pcVar9 = "Attempting to initialize the wrong RID";
      uVar7 = 0xfc;
    }
    else {
      pcVar9 = "Initializing already initialized RID";
      uVar7 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar7,
                     "Method/function failed. Returning: nullptr",pcVar9,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
  return;
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
LAB_001178b0:
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
  if (lVar11 == 0) goto LAB_001178b0;
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
LAB_0011781c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_001177b3;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_0011781c;
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
  uVar3 = _LC132;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 4);
LAB_001177b3:
  puVar9[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<StringName, HashMap<int, RID, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, RID> > > >
   >(HashMapElement<StringName, HashMap<int, RID, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, RID> > > >*) */

void memdelete<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>
               (HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001179a7;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_001179a7:
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(code **)this = RenderingDevice::uniform_buffer_create;
  pvVar5 = *(void **)(this + 0x48);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x6c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x6c) = 0;
        *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x50) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x50) + lVar4) = 0;
            memdelete<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>
                      (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
            pvVar5 = *(void **)(this + 0x48);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0x6c) = 0;
        *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00117a99;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x50),false);
  }
LAB_00117a99:
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x88) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x88) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x88);
                *(undefined8 *)((long)pvVar5 + 0x88) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x80) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x80) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x80);
                *(undefined8 *)((long)pvVar5 + 0x80) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            CowData<String>::_unref((CowData<String> *)((long)pvVar5 + 0x70));
            if (*(long *)((long)pvVar5 + 0x40) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x40) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x40);
                *(undefined8 *)((long)pvVar5 + 0x40) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00117bdf;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00117bdf:
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

{
  ~ShaderData(this);
  operator_delete(this,0x70);
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
LAB_00117fd0:
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
  if (lVar11 == 0) goto LAB_00117fd0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00117e61:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00117e61;
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
    goto LAB_00118026;
  }
  if (lVar11 == lVar9) {
LAB_00117f43:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00118026:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00117f20;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00117f43;
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
  uVar4 = _LC89;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00117f20:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<RendererRD::SkyRD::ReflectionData::Layer>::_realloc(long) */

undefined8 __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer>::_realloc
          (CowData<RendererRD::SkyRD::ReflectionData::Layer> *this,long param_1)

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
/* Error CowData<RendererRD::SkyRD::ReflectionData::Layer>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererRD::SkyRD::ReflectionData::Layer>::resize<false>
          (CowData<RendererRD::SkyRD::ReflectionData::Layer> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
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
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x20;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_00118370:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x20 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_00118370;
  uVar12 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar12) {
        if (lVar11 != lVar9) {
          uVar6 = _realloc(this,lVar11);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      lVar7 = lVar7 + uVar12 * 0x20;
      if (*(long *)(lVar7 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x18);
          *(undefined8 *)(lVar7 + 0x18) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_001183c6;
  }
  if (lVar11 == lVar9) {
LAB_001182db:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_001183c6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_001181f9;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar11);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001182db;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  puVar4 = puVar8 + lVar7 * 4;
  do {
    puVar4[1] = 0;
    puVar5 = puVar4 + 4;
    puVar4[3] = 0;
    puVar4 = puVar5;
  } while (puVar5 != puVar8 + param_1 * 4);
LAB_001181f9:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
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
    lVar4 = lVar12 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_001186b0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_001186b0;
  if (param_1 <= lVar12) {
    if ((lVar11 != lVar4) && (uVar9 = _realloc(this,lVar11), (int)uVar9 != 0)) {
      return uVar9;
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
LAB_0011861c:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar10[-1];
    if (param_1 <= lVar4) goto LAB_001185b0;
  }
  else {
    if (lVar12 != 0) {
      uVar9 = _realloc(this,lVar11);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      goto LAB_0011861c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar4 = 0;
  }
  uVar3 = _UNK_0011ae58;
  uVar9 = __LC167;
  puVar7 = puVar10 + lVar4 * 2;
  puVar6 = puVar7;
  if (((param_1 - lVar4) * 0x10 & 0x10U) != 0) {
    *puVar7 = __LC167;
    puVar7[1] = uVar3;
    puVar6 = puVar7 + 2;
    if (puVar7 + (param_1 - lVar4) * 2 == puVar7 + 2) goto LAB_001185b0;
  }
  do {
    *puVar6 = uVar9;
    puVar6[1] = uVar3;
    puVar8 = puVar6 + 4;
    puVar6[2] = uVar9;
    puVar6[3] = uVar3;
    puVar6 = puVar8;
  } while (puVar7 + (param_1 - lVar4) * 2 != puVar8);
LAB_001185b0:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::SkyRD::Sky, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::SkyRD::Sky,true>::~RID_Alloc(RID_Alloc<RendererRD::SkyRD::Sky,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions() */

void __thiscall
ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions(DefaultIdentifierActions *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderCompiler::IdentifierActions::~IdentifierActions() */

void __thiscall ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* SkyShaderRD::~SkyShaderRD() */

void __thiscall SkyShaderRD::~SkyShaderRD(SkyShaderRD *this)

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


// This is taking way too long.
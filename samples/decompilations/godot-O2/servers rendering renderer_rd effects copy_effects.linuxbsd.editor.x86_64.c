
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



/* RendererRD::CopyEffects::get_singleton() */

undefined8 RendererRD::CopyEffects::get_singleton(void)

{
  return singleton;
}



/* RendererRD::CopyEffects::~CopyEffects() */

void __thiscall RendererRD::CopyEffects::~CopyEffects(CopyEffects *this)

{
  char cVar1;
  undefined8 uVar2;
  ShaderRD *this_00;
  PipelineCacheRD *this_01;
  CopyEffects *pCVar3;
  ShaderRD *local_70;
  ShaderRD *local_68;
  ShaderRD *local_60;
  ShaderRD *local_58;
  ShaderRD *local_50;
  ShaderRD *local_48;
  ShaderRD *local_40;
  
  if (*this == (CopyEffects)0x0) {
    ShaderRD::version_free(this + 0x1728,*(undefined8 *)(this + 0x1a18));
    ShaderRD::version_free(this + 0x1b60,*(undefined8 *)(this + 0x1e50));
    ShaderRD::version_free(this + 0x2398,*(undefined8 *)(this + 0x2688));
  }
  else {
    ShaderRD::version_free(this + 0x48,*(undefined8 *)(this + 0x1c0));
    ShaderRD::version_free(this + 0x18a0,*(undefined8 *)(this + 0x1a18));
    ShaderRD::version_free(this + 0x1cd8,*(undefined8 *)(this + 0x1e50));
    ShaderRD::version_free(this + 0x2510,*(undefined8 *)(this + 0x2688));
  }
  local_40 = (ShaderRD *)(this + 0x18a0);
  local_48 = (ShaderRD *)(this + 0x2510);
  local_50 = (ShaderRD *)(this + 0x1b60);
  local_58 = (ShaderRD *)(this + 0x1728);
  local_60 = (ShaderRD *)(this + 0x2398);
  local_68 = (ShaderRD *)(this + 0x48);
  local_70 = (ShaderRD *)(this + 0x1cd8);
  ShaderRD::version_free((ShaderRD *)(this + 0x978),*(undefined8 *)(this + 0xaf0));
  ShaderRD::version_free((ShaderRD *)(this + 0x27d0),*(undefined8 *)(this + 0x2948));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x2368));
  uVar2 = RenderingDevice::get_singleton();
  cVar1 = RenderingDevice::uniform_set_is_valid(uVar2,*(undefined8 *)(this + 0x2360));
  if (cVar1 != '\0') {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x2360));
  }
  uVar2 = RenderingDevice::get_singleton();
  cVar1 = RenderingDevice::uniform_set_is_valid(uVar2,*(undefined8 *)(this + 0x2358));
  if (cVar1 != '\0') {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x2358));
  }
  this_00 = (ShaderRD *)(this + 0x1460);
  pCVar3 = this + 0x3310;
  ShaderRD::version_free((ShaderRD *)(this + 0xb90),*(undefined8 *)(this + 0xd08));
  ShaderRD::version_free(this_00,*(undefined8 *)(this + 0x15d8));
  singleton = 0;
  while (this + 0x2950 != pCVar3) {
    pCVar3 = pCVar3 + -0x138;
    PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)pCVar3);
  }
  *(undefined ***)(this + 0x27d0) = &PTR__SpecularMergeShaderRD_00119c20;
  pCVar3 = this + 0x2358;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x27d0));
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 0x2698));
  *(undefined ***)(this + 0x2510) = &PTR__CubemapRoughnessRasterShaderRD_00119c00;
  ShaderRD::~ShaderRD(local_48);
  *(undefined ***)(this + 0x2398) = &PTR__CubemapRoughnessShaderRD_00119be0;
  ShaderRD::~ShaderRD(local_60);
  while (this + 0x1e78 != pCVar3) {
    pCVar3 = pCVar3 + -0x138;
    PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)pCVar3);
  }
  *(undefined ***)(this + 0x1cd8) = &PTR__CubemapFilterRasterShaderRD_00119bc0;
  ShaderRD::~ShaderRD(local_70);
  *(undefined ***)(this + 0x1b60) = &PTR__CubemapFilterShaderRD_00119ba0;
  ShaderRD::~ShaderRD(local_50);
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 0x1a28));
  *(undefined ***)(this + 0x18a0) = &PTR__CubemapDownsamplerRasterShaderRD_00119b80;
  ShaderRD::~ShaderRD(local_40);
  *(undefined ***)(this + 0x1728) = &PTR__CubemapDownsamplerShaderRD_00119b60;
  ShaderRD::~ShaderRD(local_58);
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 0x15e0));
  *(undefined ***)(this + 0x1460) = &PTR__CubeToDpShaderRD_00119b40;
  ShaderRD::~ShaderRD(this_00);
  do {
    this_00 = this_00 + -0x138;
    PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)this_00);
  } while ((PipelineCacheRD *)(this + 0xd10) != (PipelineCacheRD *)this_00);
  this_01 = (PipelineCacheRD *)(this + 0x918);
  *(undefined ***)(this + 0xb90) = &PTR__CopyToFbShaderRD_00119b20;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xb90));
  *(undefined ***)(this + 0x978) = &PTR__CopyShaderRD_00119b00;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x978));
  while (this_01 != (PipelineCacheRD *)(this + 0x1c8)) {
    this_01 = this_01 + -0x138;
    PipelineCacheRD::~PipelineCacheRD(this_01);
  }
  *(undefined ***)(this + 0x48) = &PTR__BlurRasterShaderRD_00119ae0;
  ShaderRD::~ShaderRD(local_68);
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



/* RendererRD::CopyEffects::set_color_raster(RID, Color const&, Rect2i const&) */

void RendererRD::CopyEffects::set_color_raster
               (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
               undefined4 *param_5,Rect2i *param_6)

{
  long *plVar1;
  Version *pVVar2;
  char cVar3;
  code *pcVar4;
  FramebufferCacheRD *pFVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  undefined1 local_68 [8];
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == '\0') {
    _err_print_error("set_color_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x3ca,"Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t use the raster version of the set_color shader with the clustered renderer."
                     ,0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010105d;
  }
  if (UniformSetCacheRD::singleton == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010105d;
    uVar7 = 0x3cd;
    pcVar12 = "Parameter \"uniform_set_cache\" is null.";
    goto LAB_00100d16;
  }
  lVar6 = RendererRD::MaterialStorage::get_singleton();
  pFVar5 = FramebufferCacheRD::singleton;
  if (lVar6 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x3cf;
      pcVar12 = "Parameter \"material_storage\" is null.";
      goto LAB_00100d16;
    }
    goto LAB_0010105d;
  }
  *(undefined1 (*) [16])(param_3 + 0xb60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0xb70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0xb80) = (undefined1  [16])0x0;
  *(undefined4 *)(param_3 + 0xb80) = *param_5;
  *(undefined4 *)(param_3 + 0xb84) = param_5[1];
  *(undefined4 *)(param_3 + 0xb88) = param_5[2];
  *(undefined4 *)(param_3 + 0xb8c) = param_5[3];
  uVar7 = FramebufferCacheRD::get_cache<RID>(pFVar5,param_4);
  uVar13 = *(ulong *)(param_3 + 0xd08);
  if (*(long *)(param_3 + 0xba8) == 0) {
    lVar17 = 0;
LAB_00100cb3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,3,lVar17,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar17 = *(long *)(*(long *)(param_3 + 0xba8) + -8);
    if (lVar17 < 4) goto LAB_00100cb3;
    lVar17 = *(long *)(param_3 + 3000);
    if (lVar17 == 0) {
LAB_00100ecc:
      lVar16 = 0;
LAB_00100ecf:
      uVar13 = 3;
LAB_00100eef:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar16,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar16 = *(long *)(lVar17 + -8);
    if (lVar16 < 4) goto LAB_00100ecf;
    if (*(char *)(lVar17 + 3) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00100cf0;
    }
    if ((uVar13 == 0) || (*(uint *)(param_3 + 0xc64) <= (uint)uVar13)) {
LAB_00100d75:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
    }
    else {
      lVar17 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0xc60)) * 0xa0 +
               *(long *)(*(long *)(param_3 + 0xc50) +
                        ((uVar13 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0xc60)) * 8);
      if (*(int *)(lVar17 + 0x98) != (int)(uVar13 >> 0x20)) {
        if (*(int *)(lVar17 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00100d75;
      }
      pVVar2 = (Version *)(param_3 + 0xb90);
      iVar15 = (int)lVar17;
      if (*(char *)(lVar17 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar16 = *(long *)(param_3 + 0xc08);
        if (lVar16 != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(lVar16 + -8) <= lVar14) break;
            if (*(char *)(lVar16 + lVar14) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar15);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar15);
            }
            lVar16 = *(long *)(param_3 + 0xc08);
            lVar14 = lVar14 + 1;
          } while (lVar16 != 0);
        }
      }
      lVar14 = *(long *)(param_3 + 0xbc8);
      if (lVar14 == 0) goto LAB_00100ecc;
      lVar16 = *(long *)(lVar14 + -8);
      if (lVar16 < 4) goto LAB_00100ecf;
      uVar13 = (ulong)*(uint *)(lVar14 + 0xc);
      lVar14 = *(long *)(lVar17 + 0x68);
      if (lVar14 == 0) {
        lVar16 = 0;
        goto LAB_00100eef;
      }
      lVar16 = *(long *)(lVar14 + -8);
      if (lVar16 <= (long)uVar13) goto LAB_00100eef;
      if (*(long *)(lVar14 + uVar13 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar15);
      }
      if (*(char *)(lVar17 + 0x90) != '\0') {
        lVar17 = *(long *)(lVar17 + 0x88);
        if (lVar17 == 0) goto LAB_00100ecc;
        lVar16 = *(long *)(lVar17 + -8);
        if (lVar16 < 4) goto LAB_00100ecf;
        if (*(long *)(lVar17 + 0x18) != 0) {
          uVar8 = RenderingDevice::get_singleton();
          local_58 = Rect2i::operator_cast_to_Rect2(param_6);
          local_60 = 0;
          local_50 = param_2;
          pvVar9 = (void *)RenderingDevice::draw_list_begin(uVar8,uVar7,0,local_68,0,&local_58,0);
          lVar17 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          uVar8 = RenderingDevice::get_singleton();
          pcVar12 = param_3 + 0x10b8;
          uVar10 = RenderingDevice::get_singleton();
          lVar17 = RenderingDevice::framebuffer_get_format(uVar10,uVar7);
          if (*(long *)(param_3 + 0x10f8) == 0) {
            _err_print_error("get_render_pipeline",
                             "./servers/rendering/renderer_rd/pipeline_cache_rd.h",0x49,
                             "Condition \"shader.is_null()\" is true. Returning: RID()",
                             "Attempted to use an unused shader variant (shader is null),",0,0);
            lVar17 = 0;
          }
          else {
            while( true ) {
              local_68[0] = 0;
              LOCK();
              cVar3 = *pcVar12;
              if (cVar3 == '\0') {
                *pcVar12 = '\x01';
              }
              UNLOCK();
              if (cVar3 == '\0') break;
              do {
              } while (*pcVar12 != '\0');
            }
            if (*(uint *)(param_3 + 0x11e8) != 0) {
              plVar11 = *(long **)(param_3 + 0x11e0);
              plVar1 = plVar11 + (ulong)*(uint *)(param_3 + 0x11e8) * 5;
              do {
                if ((((*plVar11 == -1) && (lVar17 == plVar11[1])) &&
                    (param_3[0x1106] == *(byte *)((long)plVar11 + 0x14))) &&
                   (((int)plVar11[2] == 0 && ((int)plVar11[3] == 0)))) {
                  lVar17 = plVar11[4];
                  param_3[0x10b8] = '\0';
                  goto LAB_00100de1;
                }
                plVar11 = plVar11 + 5;
              } while (plVar1 != plVar11);
            }
            lVar17 = PipelineCacheRD::_generate_version
                               ((long)pcVar12,-1,SUB81(lVar17,0),(uint)(byte)param_3[0x1106],0);
            param_3[0x10b8] = '\0';
          }
LAB_00100de1:
          RenderingDevice::draw_list_bind_render_pipeline(uVar8,pvVar9,lVar17);
          uVar7 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_index_array(uVar7,pvVar9,*(undefined8 *)(lVar6 + 0x100));
          lVar6 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_set_push_constant(lVar6,pvVar9,(int)param_3 + 0xb60);
          lVar6 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_draw(lVar6,SUB81(pvVar9,0),1,1);
          RenderingDevice::get_singleton();
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            RenderingDevice::draw_list_end();
            return;
          }
          goto LAB_0010105d;
        }
      }
    }
  }
LAB_00100cf0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar7 = 0x3dd;
    pcVar12 = "Condition \"shader.is_null()\" is true.";
LAB_00100d16:
    _err_print_error("set_color_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     uVar7,pcVar12,0,0);
    return;
  }
LAB_0010105d:
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
/* RendererRD::CopyEffects::CopyEffects(bool) */

void __thiscall RendererRD::CopyEffects::CopyEffects(CopyEffects *this,bool param_1)

{
  ShaderRD *this_00;
  long *plVar1;
  PipelineCacheRD *pPVar2;
  ShaderRD *this_01;
  ShaderRD *this_02;
  ShaderRD *this_03;
  ShaderRD *this_04;
  ShaderRD *this_05;
  ShaderRD *this_06;
  ShaderRD *this_07;
  ShaderRD *this_08;
  ShaderRD *this_09;
  char *pcVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
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
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  char cVar38;
  CopyEffects CVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  undefined8 uVar46;
  PipelineCacheRD *pPVar47;
  ShaderRD *pSVar48;
  PipelineCacheRD *pPVar49;
  CopyEffects *pCVar50;
  CopyEffects *pCVar51;
  int iVar52;
  undefined8 uVar53;
  int iVar54;
  undefined8 *puVar55;
  long lVar56;
  PipelineCacheRD *pPVar57;
  CopyEffects *pCVar58;
  CopyEffects *pCVar59;
  long lVar60;
  long in_FS_OFFSET;
  bool bVar61;
  byte bVar62;
  unkint9 Var63;
  StrRange *local_2b8;
  Vector<String> *local_2b0;
  CowData<RenderingDevice::Uniform> *local_298;
  StrRange *local_280;
  undefined4 local_204;
  Vector<String> local_1b8 [8];
  undefined8 local_1b0;
  Vector<String> local_1a8 [8];
  long local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158;
  ulong local_148;
  ulong local_140 [2];
  long local_130;
  undefined2 local_128;
  undefined2 local_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  StringName local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  StringName local_98;
  undefined4 local_94;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined1 local_60 [8];
  long local_58;
  undefined1 local_50 [16];
  long local_40;
  
  bVar62 = 0;
  this_00 = (ShaderRD *)(this + 0x48);
  pPVar57 = (PipelineCacheRD *)(this + 0x1c8);
  pPVar2 = (PipelineCacheRD *)(this + 0x918);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x48) = &PTR__BlurRasterShaderRD_00119ae0;
  ShaderRD::setup((char *)this_00,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define FLAG_HORIZONTAL (1 << 0)\n#define FLAG_USE_ORTHOGONAL_PROJECTION (1 << 1)\n#define FLAG_GLOW_FIRST_PASS (1 << 2)\n\nlayout(push_constant, std430) uniform Blur {\n\tvec2 pixel_size; \n\tuint flags; \n\tuint pad; \n\n\t\n\tfloat glow_strength; \n\tfloat glow_bloom; \n\tfloat glow_hdr_threshold; \n\tfloat glow_hdr_scale; \n\n\tfloat glow_exposure; \n\tfloat glow_white; \n\tfloat glow_luminance_cap; \n\tfloat glow_auto_exposure_scale; \n\n\tfloat luminance_multiplier; \n\tfloat res1; \n\tfloat res2; \n\tfloat res3; \n}\nblur;\n\nlayout(location = 0) out vec2 uv_interp;\n/* clang-format on */\n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -1.0), vec2(-1.0, 3.0), vec2(3.0, -1.0));\n\tgl_Position = vec4(base_arr[gl_VertexIndex], 0.0, 1.0);\n\tuv_interp = clamp(gl_Position.xy, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n}\n\n/* clang-format off */\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define FLAG_HORIZONTAL (1 << 0)\n#define FLAG_USE_ORTHOGONAL_PROJECTION (1 << 1)\n#define FLAG_GLOW_FIRST_PASS (1 << 2)\n\nlayout(push_constant, std430) uniform Blur {\n\tvec2 pixel_size; \n\tuint flags; \n\tuint pad; \n\n\t\n\tfloat glow_strength; \n\tfloat glow_bloom; \n\tfloat glow_hdr_threshold; \n\tfloat glow_hdr_scale; \n\n\tfloat glow_exposure; \n\tfloat glow_white; \n\tfloat glow_luminance_cap; \n\tfloat glow_auto_exposure_scale; \n\n\tfloat luminance_multiplier; \n\tfloat res1; \n\tfloat res2; \n\tfloat res3; \n}\nblur;\n\nlayout(location = 0) in vec2 uv_interp;\n/* clang-format on */\n\nlayout(set = 0, binding = 0) uniform sampler2D source_color;\n\n#ifdef GLOW_USE_AUTO_EXPOSURE\nlayout(set = 1, binding = 0) uniform sampler2D source_auto_exposure;\n#endif\n\nlayout(location = 0) out vec4 frag_color;\n\nvoid main() {\n\t\n\n#ifdef MODE_MIPMAP\n\n\tvec2 pix_size = blur.pixel_size;\n\tvec4 color = texture(source_color, uv_interp + vec2(-0.5, -0.5) * pix_size);\n\tcolor += texture(source_color, uv_interp + vec2(0.5, -0.5) * pix_size);\n\tcolor += texture(source_color, uv_interp + vec2(0.5, 0.5) * pix_size);\n\tcolor += texture(source_color, uv_interp + vec2(-0.5, 0.5) * pix_size);\n\tfrag_color = color / 4.0;\n\n#endif\n\n#ifdef MODE_GAUSSIAN_BLUR\n\n\t\n\t\n\t\n\tvec4 A = texture(source_color, uv_interp + blur.pixel_size * vec2(-1.0, -1.0));\n\tvec4 B = texture(source_color, uv_interp + blur.pixel_size * vec2(0.0, -1.0));\n\tvec4 C = texture(source_color, uv_interp + blur.pixel_size * vec2(1.0, -1.0));\n\tvec4 D = texture(source_color, uv_interp + blur.pixel_size * vec2(-0.5, -0.5));\n\tvec4 E = texture(source_color, uv_interp + blur.pixel_size * vec2(0.5, -0.5));\n\tvec4 F = texture(source_color, uv_interp + blur.pixel_size * vec2(-1.0, 0.0));\n\tvec4 G = texture(source_color, uv_interp);\n\tvec4 H = texture(source_color, uv_interp + blur.pixel_size * vec2(1.0, 0.0));\n\tvec4 I = texture(source_color, uv_interp + blur.pixel_size * vec2(-0.5, 0.5));\n\tvec4 J = texture(source_color, uv_interp + blur.pixel_size * vec2(0.5, 0.5));\n\tvec4 K = texture(source_color, uv_interp + ..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x1c0) = 0;
  pPVar49 = pPVar57;
  do {
    pPVar47 = pPVar49 + 0x138;
    PipelineCacheRD::PipelineCacheRD(pPVar49);
    pPVar49 = pPVar47;
  } while (pPVar47 != pPVar2);
  this_01 = (ShaderRD *)(this + 0x978);
  pPVar49 = (PipelineCacheRD *)(this + 0xd10);
  ShaderRD::ShaderRD(this_01);
  *(undefined ***)(this + 0x978) = &PTR__CopyShaderRD_00119b00;
  this_02 = (ShaderRD *)(this + 0xb90);
  ShaderRD::setup((char *)this_01,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#define FLAG_HORIZONTAL (1 << 0)\n#define FLAG_USE_BLUR_SECTION (1 << 1)\n#define FLAG_USE_ORTHOGONAL_PROJECTION (1 << 2)\n#define FLAG_DOF_NEAR_FIRST_TAP (1 << 3)\n#define FLAG_GLOW_FIRST_PASS (1 << 4)\n#define FLAG_FLIP_Y (1 << 5)\n#define FLAG_FORCE_LUMINANCE (1 << 6)\n#define FLAG_COPY_ALL_SOURCE (1 << 7)\n#define FLAG_ALPHA_TO_ONE (1 << 8)\n\nlayout(push_constant, std430) uniform Params {\n\tivec4 section;\n\tivec2 target;\n\tuint flags;\n\tuint pad;\n\t\n\tfloat glow_strength;\n\tfloat glow_bloom;\n\tfloat glow_hdr_threshold;\n\tfloat glow_hdr_scale;\n\n\tfloat glow_exposure;\n\tfloat glow_white;\n\tfloat glow_luminance_cap;\n\tfloat glow_auto_exposure_scale;\n\t\n\tfloat camera_z_far;\n\tfloat camera_z_near;\n\tuint pad2[2];\n\n\tvec4 set_color;\n}\nparams;\n\n#ifdef MODE_CUBEMAP_ARRAY_TO_PANORAMA\nlayout(set = 0, binding = 0) uniform samplerCubeArray source_color;\n#elif defined(MODE_CUBEMAP_TO_PANORAMA)\nlayout(set = 0, binding = 0) uniform samplerCube source_color;\n#elif !defined(MODE_SET_COLOR)\nlayout(set = 0, binding = 0) uniform sampler2D source_color;\n#endif\n\n#ifdef GLOW_USE_AUTO_EXPOSURE\nlayout(set = 1, binding = 0) uniform sampler2D source_auto_exposure;\n#endif\n\n#if defined(MODE_LINEARIZE_DEPTH_COPY) || defined(MODE_SIMPLE_COPY_DEPTH)\nlayout(r32f, set = 3, binding = 0) uniform restrict writeonly image2D dest_buffer;\n#elif defined(DST_IMAGE_8BIT)\nlayout(rgba8, set = 3, binding = 0) uniform restrict writeonly image2D dest_buffer;\n#else\nlayout(rgba16f, set = 3, binding = 0) uniform restrict writeonly image2D dest_buffer;\n#endif\n\n#ifdef MODE_GAUSSIAN_BLUR\nshared vec4 local_cache[256];\nshared vec4 temp_cache[128];\n#endif\n\nvoid main() {\n\t\n\tivec2 pos = ivec2(gl_GlobalInvocationID.xy);\n\n#ifndef MODE_GAUSSIAN_BLUR \n\tif (any(greaterThanEqual(pos, params.section.zw))) { \n\t\treturn;\n\t}\n#endif\n\n#ifdef MODE_MIPMAP\n\n\tivec2 base_pos = (pos + params.section.xy) << 1;\n\tvec4 color = texelFetch(source_color, base_pos, 0);\n\tcolor += texelFetch(source_color, base_pos + ivec2(0..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0xaf8) = 0;
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined8 *)(this + 0xaf0) = 0;
  puVar55 = (undefined8 *)((ulong)(this + 0xb00) & 0xfffffffffffffff8);
  for (uVar43 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0xb00) & 0xfffffffffffffff8)
                        ) + 0xb60U >> 3); uVar43 != 0; uVar43 = uVar43 - 1) {
    *puVar55 = 0;
    puVar55 = puVar55 + (ulong)bVar62 * -2 + 1;
  }
  ShaderRD::ShaderRD(this_02);
  *(undefined ***)(this + 0xb90) = &PTR__CopyToFbShaderRD_00119b20;
  this_03 = (ShaderRD *)(this + 0x1460);
  ShaderRD::setup((char *)this_02,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#extension GL_EXT_multiview : enable\n#define ViewIndex gl_ViewIndex\n#else \n#define ViewIndex 0\n#endif \n#endif \n\n#define FLAG_FLIP_Y (1 << 0)\n#define FLAG_USE_SECTION (1 << 1)\n#define FLAG_FORCE_LUMINANCE (1 << 2)\n#define FLAG_ALPHA_TO_ZERO (1 << 3)\n#define FLAG_SRGB (1 << 4)\n#define FLAG_ALPHA_TO_ONE (1 << 5)\n#define FLAG_LINEAR (1 << 6)\n#define FLAG_NORMAL (1 << 7)\n#define FLAG_USE_SRC_SECTION (1 << 8)\n\n#ifdef USE_MULTIVIEW\nlayout(location = 0) out vec3 uv_interp;\n#else\nlayout(location = 0) out vec2 uv_interp;\n#endif\n\nlayout(push_constant, std430) uniform Params {\n\tvec4 section;\n\tvec2 pixel_size;\n\tfloat luminance_multiplier;\n\tuint flags;\n\n\tvec4 color;\n}\nparams;\n\nvoid main() {\n\tvec2 base_arr[4] = vec2[](vec2(0.0, 0.0), vec2(0.0, 1.0), vec2(1.0, 1.0), vec2(1.0, 0.0));\n\tuv_interp.xy = base_arr[gl_VertexIndex];\n#ifdef USE_MULTIVIEW\n\tuv_interp.z = ViewIndex;\n#endif\n\tvec2 vpos = uv_interp.xy;\n\tif (bool(params.flags & FLAG_USE_SECTION)) {\n\t\tvpos = params.section.xy + vpos * params.section.zw;\n\t}\n\n\tgl_Position = vec4(vpos * 2.0 - 1.0, 0.0, 1.0);\n\n\tif (bool(params.flags & FLAG_FLIP_Y)) {\n\t\tuv_interp.y = 1.0 - uv_interp.y;\n\t}\n\n\tif (bool(params.flags & FLAG_USE_SRC_SECTION)) {\n\t\tuv_interp.xy = params.section.xy + uv_interp.xy * params.section.zw;\n\t}\n}\n\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#extension GL_EXT_multiview : enable\n#define ViewIndex gl_ViewIndex\n#else \n#define ViewIndex 0\n#endif \n#endif \n\n#define FLAG_FLIP_Y (1 << 0)\n#define FLAG_USE_SECTION (1 << 1)\n#define FLAG_FORCE_LUMINANCE (1 << 2)\n#define FLAG_ALPHA_TO_ZERO (1 << 3)\n#define FLAG_SRGB (1 << 4)\n#define FLAG_ALPHA_TO_ONE (1 << 5)\n#define FLAG_LINEAR (1 << 6)\n#define FLAG_NORMAL (1 << 7)\n\nlayout(push_constant, std430) uniform Params {\n\tvec4 section;\n\tvec2 pixel_size;\n\tfloat luminance_multiplier;\n\tuint flags;\n\n\tvec4 color;\n}\nparams;\n\n#ifndef MODE_SET_COLOR\n#ifdef USE_MULTIVIEW\nlayout(location = 0) in vec3 uv_interp;\n#else\nlayout(location = 0) in vec2 uv_interp;\n#endif\n\n#ifdef USE_MULTIVIEW\nlayout(set = 0, binding = 0) uniform sampler2DArray source_color;\n#ifdef MODE_TWO_SOURCES\nlayout(set = 1, binding = 0) uniform sampler2DArray source_depth;\nlayout(location = 1) out float depth;\n#endif /* MODE_TWO_SOURCES */\n#else /* USE_MULTIVIEW */\nlayout(set = 0, binding = 0) uniform sampler2D source_color;\n#ifdef MODE_TWO_SOURCES\nlayout(set = 1, binding = 0) uniform sampler2D source_color2;\n#endif /* MODE_TWO_SOURCES */\n#endif /* USE_MULTIVIEW */\n#endif /* !SET_COLOR */\n\nlayout(location = 0) out vec4 frag_color;\n\nvec3 linear_to_srgb(vec3 color) {\n\t\n\tcolor = clamp(color, vec3(0.0), vec3(1.0));\n\tconst vec3 a = vec3(0.055f);\n\treturn mix((vec3(1.0f) + a) * pow(color.rgb, vec3(1.0f / 2.4f)) - a, 12.92f * color.rgb, lessThan(color.rgb, vec3(0.0031308f)));\n}\n\nvec3 srgb_to_linear(vec3 color) {\n\treturn mix(pow((color.rgb + vec3(0.055)) * (1.0 / (1.0 + 0.055)), vec3(2.4)), color.rgb * (1.0 / 12.92), lessThan(color.rgb, vec3(0.04045)));\n}\n\nvoid main() {\n#ifdef MODE_SET_COLOR\n\tfrag_color = params.color;\n#else\n\n#ifdef USE_MULTIVIEW\n\tvec3 uv = uv_interp;\n#else\n\tvec2 uv = uv_interp;\n#endif\n\n#ifdef MODE_PANORAMA_TO_DP\n\t\n\n\t\n#define M_PI 3.14159265359\n\n\tfloat side;\n\tuv.y = modf(uv.y * 2.0, side);\n\tside = side * 2.0 - 1.0;\n\tvec3 normal = vec3(uv * 2.0 - 1.0, 0.0);\n\tnormal.z = 0.5 - 0.5..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined8 *)(this + 0xd08) = 0;
  pPVar47 = pPVar49;
  do {
    pSVar48 = (ShaderRD *)(pPVar47 + 0x138);
    PipelineCacheRD::PipelineCacheRD(pPVar47);
    pPVar47 = (PipelineCacheRD *)pSVar48;
  } while (this_03 != pSVar48);
  ShaderRD::ShaderRD(this_03);
  *(undefined ***)(this + 0x1460) = &PTR__CubeToDpShaderRD_00119b40;
  pSVar48 = (ShaderRD *)(this + 0x1728);
  ShaderRD::setup((char *)this_03,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Params {\n\tfloat z_far;\n\tfloat z_near;\n\tvec2 texel_size;\n}\nparams;\n\nlayout(location = 0) out vec2 uv_interp;\n\nvoid main() {\n\tvec2 base_arr[4] = vec2[](vec2(0.0, 0.0), vec2(0.0, 1.0), vec2(1.0, 1.0), vec2(1.0, 0.0));\n\tuv_interp = base_arr[gl_VertexIndex];\n\tgl_Position = vec4(uv_interp * 2.0 - 1.0, 0.0, 1.0);\n}\n\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(location = 0) in vec2 uv_interp;\n\nlayout(set = 0, binding = 0) uniform samplerCube source_cube;\n\nlayout(push_constant, std430) uniform Params {\n\tfloat z_far;\n\tfloat z_near;\n\tvec2 texel_size;\n}\nparams;\n\nvoid main() {\n\tvec2 uv = uv_interp;\n\tvec2 texel_size = abs(params.texel_size);\n\n\tuv = clamp(uv * (1.0 + 2.0 * texel_size) - texel_size, vec2(0.0), vec2(1.0));\n\n\tvec3 normal = vec3(uv * 2.0 - 1.0, 0.0);\n\tnormal.z = 0.5 * (1.0 - dot(normal.xy, normal.xy)); \n\tnormal = normalize(normal);\n\n\tnormal.y = -normal.y; \n\tif (params.texel_size.x >= 0.0) { \n\t\tnormal.z = -normal.z;\n\t}\n\n\tfloat depth = texture(source_cube, normal).r;\n\n\t\n\tvec3 unorm = abs(normal);\n\n\tif ((unorm.x >= unorm.y) && (unorm.x >= unorm.z)) {\n\t\t\n\t\tunorm = normal.x > 0.0 ? vec3(1.0, 0.0, 0.0) : vec3(-1.0, 0.0, 0.0);\n\t} else if ((unorm.y > unorm.x) && (unorm.y >= unorm.z)) {\n\t\t\n\t\tunorm = normal.y > 0.0 ? vec3(0.0, 1.0, 0.0) : vec3(0.0, -1.0, 0.0);\n\t} else if ((unorm.z > unorm.x) && (unorm.z > unorm.y)) {\n\t\t\n\t\tunorm = normal.z > 0.0 ? vec3(0.0, 0.0, 1.0) : vec3(0.0, 0.0, -1.0);\n\t} else {\n\t\t\n\t\t\n\t\tunorm = vec3(1.0, 0.0, 0.0);\n\t}\n\n\tfloat depth_fix = 1.0 / dot(normal, unorm);\n\n\tdepth = 2.0 * depth - 1.0;\n\tfloat linear_depth = 2.0 * params.z_near * params.z_far / (params.z_far + params.z_near + depth * (params.z_far - params.z_near));\n\t\n\tdepth = (params.z_far - linear_depth * depth_fix) / params.z_far;\n\tgl_FragDepth = depth;\n}\n"
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x15d8) = 0;
  PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)(this + 0x15e0));
  ShaderRD::ShaderRD(pSVar48);
  *(undefined ***)(this + 0x1728) = &PTR__CubemapDownsamplerShaderRD_00119b60;
  this_04 = (ShaderRD *)(this + 0x18a0);
  ShaderRD::setup((char *)pSVar48,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define BLOCK_SIZE 8\n\nlayout(local_size_x = BLOCK_SIZE, local_size_y = BLOCK_SIZE, local_size_z = 1) in;\n\nlayout(set = 0, binding = 0) uniform samplerCube source_cubemap;\n\nlayout(rgba16f, set = 1, binding = 0) uniform restrict writeonly imageCube dest_cubemap;\n\nlayout(push_constant, std430) uniform Params {\n\tuint face_size;\n\tuint face_id; \n}\nparams;\n\n#define M_PI 3.14159265359\n\nvoid get_dir_0(out vec3 dir, in float u, in float v) {\n\tdir[0] = 1.0;\n\tdir[1] = v;\n\tdir[2] = -u;\n}\n\nvoid get_dir_1(out vec3 dir, in float u, in float v) {\n\tdir[0] = -1.0;\n\tdir[1] = v;\n\tdir[2] = u;\n}\n\nvoid get_dir_2(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = 1.0;\n\tdir[2] = -v;\n}\n\nvoid get_dir_3(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = -1.0;\n\tdir[2] = v;\n}\n\nvoid get_dir_4(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = v;\n\tdir[2] = 1.0;\n}\n\nvoid get_dir_5(out vec3 dir, in float u, in float v) {\n\tdir[0] = -u;\n\tdir[1] = v;\n\tdir[2] = -1.0;\n}\n\nfloat calcWeight(float u, float v) {\n\tfloat val = u * u + v * v + 1.0;\n\treturn val * sqrt(val);\n}\n\nvoid main() {\n\tuvec3 id = gl_GlobalInvocationID;\n\tuint face_size = params.face_size;\n\n\tif (id.x < face_size && id.y < face_size) {\n\t\tfloat inv_face_size = 1.0 / float(face_size);\n\n\t\tfloat u0 = (float(id.x) * 2.0 + 1.0 - 0.75) * inv_face_size - 1.0;\n\t\tfloat u1 = (float(id.x) * 2.0 + 1.0 + 0.75) * inv_face_size - 1.0;\n\n\t\tfloat v0 = (float(id.y) * 2.0 + 1.0 - 0.75) * -inv_face_size + 1.0;\n\t\tfloat v1 = (float(id.y) * 2.0 + 1.0 + 0.75) * -inv_face_size + 1.0;\n\n\t\tfloat weights[4];\n\t\tweights[0] = calcWeight(u0, v0);\n\t\tweights[1] = calcWeight(u1, v0);\n\t\tweights[2] = calcWeight(u0, v1);\n\t\tweights[3] = calcWeight(u1, v1);\n\n\t\tconst float wsum = 0.5 / (weights[0] + weights[1] + weights[2] + weights[3]);\n\t\tfor (int i = 0; i < 4; i++) {\n\t\t\tweights[i] = weights[i] * wsum + .125;\n\t\t}\n\n\t\tvec3 dir;\n\t\tvec4 color;\n\t\tswitch (id.z) {\n\t\t\tcase 0:\n\t\t\t\tget_dir_0(dir, u0, v0);\n\t\t\t\tcolor = textureLod(source_cubemap, normalize(dir), 0.0) * weights[0]..." /* TRUNCATED STRING LITERAL */
                 );
  ShaderRD::ShaderRD(this_04);
  *(undefined ***)(this + 0x18a0) = &PTR__CubemapDownsamplerRasterShaderRD_00119b80;
  this_05 = (ShaderRD *)(this + 0x1b60);
  ShaderRD::setup((char *)this_04,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Params {\n\tuint face_size;\n\tuint face_id; \n}\nparams;\n\n#define M_PI 3.14159265359\n\nvoid get_dir_0(out vec3 dir, in float u, in float v) {\n\tdir[0] = 1.0;\n\tdir[1] = v;\n\tdir[2] = -u;\n}\n\nvoid get_dir_1(out vec3 dir, in float u, in float v) {\n\tdir[0] = -1.0;\n\tdir[1] = v;\n\tdir[2] = u;\n}\n\nvoid get_dir_2(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = 1.0;\n\tdir[2] = -v;\n}\n\nvoid get_dir_3(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = -1.0;\n\tdir[2] = v;\n}\n\nvoid get_dir_4(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = v;\n\tdir[2] = 1.0;\n}\n\nvoid get_dir_5(out vec3 dir, in float u, in float v) {\n\tdir[0] = -u;\n\tdir[1] = v;\n\tdir[2] = -1.0;\n}\n\nfloat calcWeight(float u, float v) {\n\tfloat val = u * u + v * v + 1.0;\n\treturn val * sqrt(val);\n}\n\nlayout(location = 0) out vec2 uv_interp;\n/* clang-format on */\n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -1.0), vec2(-1.0, 3.0), vec2(3.0, -1.0));\n\tgl_Position = vec4(base_arr[gl_VertexIndex], 0.0, 1.0);\n\tuv_interp = clamp(gl_Position.xy, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0 * float(params.face_size); \n}\n\n/* clang-format off */\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Params {\n\tuint face_size;\n\tuint face_id; \n}\nparams;\n\n#define M_PI 3.14159265359\n\nvoid get_dir_0(out vec3 dir, in float u, in float v) {\n\tdir[0] = 1.0;\n\tdir[1] = v;\n\tdir[2] = -u;\n}\n\nvoid get_dir_1(out vec3 dir, in float u, in float v) {\n\tdir[0] = -1.0;\n\tdir[1] = v;\n\tdir[2] = u;\n}\n\nvoid get_dir_2(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = 1.0;\n\tdir[2] = -v;\n}\n\nvoid get_dir_3(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = -1.0;\n\tdir[2] = v;\n}\n\nvoid get_dir_4(out vec3 dir, in float u, in float v) {\n\tdir[0] = u;\n\tdir[1] = v;\n\tdir[2] = 1.0;\n}\n\nvoid get_dir_5(out vec3 dir, in float u, in float v) {\n\tdir[0] = -u;\n\tdir[1] = v;\n\tdir[2] = -1.0;\n}\n\nfloat calcWeight(float u, float v) {\n\tfloat val = u * u + v * v + 1.0;\n\treturn val * sqrt(val);\n}\n\nlayout(set = 0, binding = 0) uniform samplerCube source_cubemap;\n\nlayout(location = 0) in vec2 uv_interp;\nlayout(location = 0) out vec4 frag_color;\n/* clang-format on */\n\nvoid main() {\n\t\n\t\n\tfloat face_size = float(params.face_size);\n\tfloat inv_face_size = 1.0 / face_size;\n\tvec2 id = floor(uv_interp);\n\n\tfloat u1 = (id.x * 2.0 + 1.0 + 0.75) * inv_face_size - 1.0;\n\tfloat u0 = (id.x * 2.0 + 1.0 - 0.75) * inv_face_size - 1.0;\n\n\tfloat v0 = (id.y * 2.0 + 1.0 - 0.75) * -inv_face_size + 1.0;\n\tfloat v1 = (id.y * 2.0 + 1.0 + 0.75) * -inv_face_size + 1.0;\n\n\tfloat weights[4];\n\tweights[0] = calcWeight(u0, v0);\n\tweights[1] = calcWeight(u1, v0);\n\tweights[2] = calcWeight(u0, v1);\n\tweights[3] = calcWeight(u1, v1);\n\n\tconst float wsum = 0.5 / (weights[0] + weights[1] + weights[2] + weights[3]);\n\tfor (int i = 0; i < 4; i++) {\n\t\tweights[i] = weights[i] * wsum + .125;\n\t}\n\n\tvec3 dir;\n\tvec4 color;\n\tswitch (params.face_id) {\n\t\tcase 0:\n\t\t\tget_dir_0(dir, u0, v0);\n\t\t\tcolor = textureLod(source_cubemap, normalize(dir), 0.0) * weights[0];\n\n\t\t\tget_dir_0(dir, u1, v0);\n\t\t\tcolor += textureLod(source_cubemap, normalize(dir), 0.0) * weights[1];\n\n\t\t\tget_dir_0(dir, u0, v1);\n\t\t\tcolor += textureLod(source_cubemap, norma..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined1 (*) [16])(this + 0x1a18) = (undefined1  [16])0x0;
  PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)(this + 0x1a28));
  ShaderRD::ShaderRD(this_05);
  *(undefined ***)(this + 0x1b60) = &PTR__CubemapFilterShaderRD_00119ba0;
  this_06 = (ShaderRD *)(this + 0x1cd8);
  ShaderRD::setup((char *)this_05,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define GROUP_SIZE 64\n\nlayout(local_size_x = GROUP_SIZE, local_size_y = 1, local_size_z = 1) in;\n\nlayout(set = 0, binding = 0) uniform samplerCube source_cubemap;\nlayout(rgba16f, set = 2, binding = 0) uniform restrict writeonly imageCube dest_cubemap0;\nlayout(rgba16f, set = 2, binding = 1) uniform restrict writeonly imageCube dest_cubemap1;\nlayout(rgba16f, set = 2, binding = 2) uniform restrict writeonly imageCube dest_cubemap2;\nlayout(rgba16f, set = 2, binding = 3) uniform restrict writeonly imageCube dest_cubemap3;\nlayout(rgba16f, set = 2, binding = 4) uniform restrict writeonly imageCube dest_cubemap4;\nlayout(rgba16f, set = 2, binding = 5) uniform restrict writeonly imageCube dest_cubemap5;\nlayout(rgba16f, set = 2, binding = 6) uniform restrict writeonly imageCube dest_cubemap6;\n\n#ifdef USE_HIGH_QUALITY\n#define NUM_TAPS 32\n#else\n#define NUM_TAPS 8\n#endif\n\n#define BASE_RESOLUTION 128\n\n#ifdef USE_HIGH_QUALITY\nlayout(set = 1, binding = 0, std430) buffer restrict readonly Data {\n\tvec4[7][5][3][24] coeffs;\n}\ndata;\n#else\nlayout(set = 1, binding = 0, std430) buffer restrict readonly Data {\n\tvec4[7][5][6] coeffs;\n}\ndata;\n#endif\n\nvoid get_dir(out vec3 dir, in vec2 uv, in uint face) {\n\tswitch (face) {\n\t\tcase 0:\n\t\t\tdir = vec3(1.0, uv[1], -uv[0]);\n\t\t\tbreak;\n\t\tcase 1:\n\t\t\tdir = vec3(-1.0, uv[1], uv[0]);\n\t\t\tbreak;\n\t\tcase 2:\n\t\t\tdir = vec3(uv[0], 1.0, -uv[1]);\n\t\t\tbreak;\n\t\tcase 3:\n\t\t\tdir = vec3(uv[0], -1.0, uv[1]);\n\t\t\tbreak;\n\t\tcase 4:\n\t\t\tdir = vec3(uv[0], uv[1], 1.0);\n\t\t\tbreak;\n\t\tdefault:\n\t\t\tdir = vec3(-uv[0], uv[1], -1.0);\n\t\t\tbreak;\n\t}\n}\n\nvoid main() {\n\t\n\t\n\t\n\t\n\t\n\t\n\t\n\tuvec3 id = gl_GlobalInvocationID;\n\n\t\n#ifndef USE_TEXTURE_ARRAY\n\t\n\tint mip_level = 0;\n\tif (id.x < (128 * 128)) {\n\t\tmip_level = 0;\n\t} else if (id.x < (128 * 128 + 64 * 64)) {\n\t\tmip_level = 1;\n\t\tid.x -= (128 * 128);\n\t} else if (id.x < (128 * 128 + 64 * 64 + 32 * 32)) {\n\t\tmip_level = 2;\n\t\tid.x -= (128 * 128 + 64 * 64);\n\t} else if (id.x < (128 * 128 + 64 * 64 + 32 * 32 + 16 * 16)) {\n\t\tmip_level = 3;\n\t\tid.x -= (128 * 128 + 64 * 64 + 32 *..." /* TRUNCATED STRING LITERAL */
                 );
  ShaderRD::ShaderRD(this_06);
  *(undefined ***)(this + 0x1cd8) = &PTR__CubemapFilterRasterShaderRD_00119bc0;
  ShaderRD::setup((char *)this_06,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Params {\n\tint mip_level;\n\tuint face_id;\n}\nparams;\n\nlayout(location = 0) out vec2 uv_interp;\n/* clang-format on */\n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -1.0), vec2(-1.0, 3.0), vec2(3.0, -1.0));\n\tgl_Position = vec4(base_arr[gl_VertexIndex], 0.0, 1.0);\n\tuv_interp = clamp(gl_Position.xy, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n}\n\n/* clang-format off */\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Params {\n\tint mip_level;\n\tuint face_id;\n}\nparams;\n\nlayout(set = 0, binding = 0) uniform samplerCube source_cubemap;\n\nlayout(location = 0) in vec2 uv_interp;\nlayout(location = 0) out vec4 frag_color;\n\n/* clang-format on */\n\n#ifdef USE_HIGH_QUALITY\n#define NUM_TAPS 32\n#else\n#define NUM_TAPS 8\n#endif\n\n#define BASE_RESOLUTION 128\n\n#ifdef USE_HIGH_QUALITY\nlayout(set = 1, binding = 0, std430) buffer restrict readonly Data {\n\tvec4[7][5][3][24] coeffs;\n}\ndata;\n#else\nlayout(set = 1, binding = 0, std430) buffer restrict readonly Data {\n\tvec4[7][5][6] coeffs;\n}\ndata;\n#endif\n\nvoid get_dir(out vec3 dir, in vec2 uv, in uint face) {\n\tswitch (face) {\n\t\tcase 0:\n\t\t\tdir = vec3(1.0, uv[1], -uv[0]);\n\t\t\tbreak;\n\t\tcase 1:\n\t\t\tdir = vec3(-1.0, uv[1], uv[0]);\n\t\t\tbreak;\n\t\tcase 2:\n\t\t\tdir = vec3(uv[0], 1.0, -uv[1]);\n\t\t\tbreak;\n\t\tcase 3:\n\t\t\tdir = vec3(uv[0], -1.0, uv[1]);\n\t\t\tbreak;\n\t\tcase 4:\n\t\t\tdir = vec3(uv[0], uv[1], 1.0);\n\t\t\tbreak;\n\t\tdefault:\n\t\t\tdir = vec3(-uv[0], uv[1], -1.0);\n\t\t\tbreak;\n\t}\n}\n\nvoid main() {\n\t\n\tvec3 dir, adir, frameZ;\n\t{\n\t\tvec2 uv;\n\t\tuv.x = uv_interp.x;\n\t\tuv.y = 1.0 - uv_interp.y;\n\t\tuv = uv * 2.0 - 1.0;\n\n\t\tget_dir(dir, uv, params.face_id);\n\t\tframeZ = normalize(dir);\n\n\t\tadir = abs(dir);\n\t}\n\n\t\n\t\n\tint mip_level = 0;\n\n\tif (params.mip_level < 0) {\n\t\t\n\t\tfrag_color.rgb = textureLod(source_cubemap, frameZ, 0.0).rgb;\n\t\tfrag_color.a = 1.0;\n\t\treturn;\n\t} else if (params.mip_level > 6) {\n\t\t\n\t\tmip_level = 6;\n\t} else {\n\t\tmip_level = params.mip_level;\n\t}\n\n\t\n\tvec4 color = vec4(0.0);\n\tfor (int axis = 0; axis < 3; axis++) {\n\t\tconst int otherAxis0 = 1 - (axis & 1) - (axis >> 1);\n\t\tconst int otherAxis1 = 2 - (axis >> 1);\n\n\t\tfloat frameweight = (max(adir[otherAxis0], adir[otherAxis1]) - .75) / .25;\n\t\tif (frameweight > 0.0) {\n\t\t\t\n\t\t\tvec3 UpVector;\n\t\t\tswitch (axis) {\n\t\t\t\tcase 0:\n\t\t\t\t\tUpVector = vec3(1, 0, 0);\n\t\t\t\t\tbreak;\n\t\t\t\tcase 1:\n\t\t\t\t\tUpVector = vec3(0, 1, 0);\n\t\t\t\t\tbreak;\n\t\t\t\tdefault:\n\t\t\t\t\tUpVector = vec3(0, 0, 1);\n\t\t\t\t\tbreak;\n\t\t\t}\n\n\t\t\tvec3 frameX = normalize(cross(UpVector, f..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  pCVar50 = this + 0x1e78;
  *(undefined8 *)(this + 0x1e70) = 0;
  *(undefined1 (*) [16])(this + 0x1e50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e60) = (undefined1  [16])0x0;
  pCVar51 = pCVar50;
  do {
    pCVar58 = (CopyEffects *)((PipelineCacheRD *)pCVar51 + 0x138);
    PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)pCVar51);
    pCVar51 = pCVar58;
  } while (this + 0x2358 != pCVar58);
  *(undefined8 *)(this + 0x2368) = 0;
  this_07 = (ShaderRD *)(this + 0x2398);
  *(undefined1 (*) [16])(this + 0x2358) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_07);
  *(undefined ***)(this + 0x2398) = &PTR__CubemapRoughnessShaderRD_00119be0;
  this_08 = (ShaderRD *)(this + 0x2510);
  ShaderRD::setup((char *)this_07,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define GROUP_SIZE 8\n\nlayout(local_size_x = GROUP_SIZE, local_size_y = GROUP_SIZE, local_size_z = 1) in;\n\nlayout(set = 0, binding = 0) uniform samplerCube source_cube;\n\nlayout(rgba16f, set = 1, binding = 0) uniform restrict writeonly imageCube dest_cubemap;\n\n#define M_PI 3.14159265359\n\nlayout(push_constant, std430) uniform Params {\n\tuint face_id;\n\tuint sample_count;\n\tfloat roughness;\n\tbool use_direct_write;\n\tfloat face_size;\n}\nparams;\n\nvec3 texelCoordToVec(vec2 uv, uint faceID) {\n\tmat3 faceUvVectors[6];\n\n\t\n\tfaceUvVectors[1][0] = vec3(0.0, 0.0, 1.0); \n\tfaceUvVectors[1][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[1][2] = vec3(-1.0, 0.0, 0.0); \n\n\t\n\tfaceUvVectors[0][0] = vec3(0.0, 0.0, -1.0); \n\tfaceUvVectors[0][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[0][2] = vec3(1.0, 0.0, 0.0); \n\n\t\n\tfaceUvVectors[3][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[3][1] = vec3(0.0, 0.0, -1.0); \n\tfaceUvVectors[3][2] = vec3(0.0, -1.0, 0.0); \n\n\t\n\tfaceUvVectors[2][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[2][1] = vec3(0.0, 0.0, 1.0); \n\tfaceUvVectors[2][2] = vec3(0.0, 1.0, 0.0); \n\n\t\n\tfaceUvVectors[5][0] = vec3(-1.0, 0.0, 0.0); \n\tfaceUvVectors[5][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[5][2] = vec3(0.0, 0.0, -1.0); \n\n\t\n\tfaceUvVectors[4][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[4][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[4][2] = vec3(0.0, 0.0, 1.0); \n\n\t\n\tvec3 result = (faceUvVectors[faceID][0] * uv.x) + (faceUvVectors[faceID][1] * uv.y) + faceUvVectors[faceID][2];\n\treturn normalize(result);\n}\n\nvec3 ImportanceSampleGGX(vec2 xi, float roughness4) {\n\t\n\tfloat Phi = 2.0 * M_PI * xi.x;\n\tfloat CosTheta = sqrt((1.0 - xi.y) / (1.0 + (roughness4 - 1.0) * xi.y));\n\tfloat SinTheta = sqrt(1.0 - CosTheta * CosTheta);\n\n\t\n\tvec3 H;\n\tH.x = SinTheta * cos(Phi);\n\tH.y = SinTheta * sin(Phi);\n\tH.z = CosTheta;\n\n\treturn H;\n}\n\nfloat DistributionGGX(float NdotH, float roughness4) {\n\tfloat NdotH2 = NdotH * NdotH;\n\tfloat denom = (NdotH2 * (roughness4 - 1.0) + 1.0);\n\tdenom = M_PI * denom * denom;\n\n\treturn roughness4 / denom;\n}\n\nfloat ra..." /* TRUNCATED STRING LITERAL */
                 );
  ShaderRD::ShaderRD(this_08);
  *(undefined ***)(this + 0x2510) = &PTR__CubemapRoughnessRasterShaderRD_00119c00;
  this_09 = (ShaderRD *)(this + 0x27d0);
  ShaderRD::setup((char *)this_08,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define M_PI 3.14159265359\n\nlayout(push_constant, std430) uniform Params {\n\tuint face_id;\n\tuint sample_count;\n\tfloat roughness;\n\tbool use_direct_write;\n\tfloat face_size;\n}\nparams;\n\nvec3 texelCoordToVec(vec2 uv, uint faceID) {\n\tmat3 faceUvVectors[6];\n\n\t\n\tfaceUvVectors[1][0] = vec3(0.0, 0.0, 1.0); \n\tfaceUvVectors[1][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[1][2] = vec3(-1.0, 0.0, 0.0); \n\n\t\n\tfaceUvVectors[0][0] = vec3(0.0, 0.0, -1.0); \n\tfaceUvVectors[0][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[0][2] = vec3(1.0, 0.0, 0.0); \n\n\t\n\tfaceUvVectors[3][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[3][1] = vec3(0.0, 0.0, -1.0); \n\tfaceUvVectors[3][2] = vec3(0.0, -1.0, 0.0); \n\n\t\n\tfaceUvVectors[2][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[2][1] = vec3(0.0, 0.0, 1.0); \n\tfaceUvVectors[2][2] = vec3(0.0, 1.0, 0.0); \n\n\t\n\tfaceUvVectors[5][0] = vec3(-1.0, 0.0, 0.0); \n\tfaceUvVectors[5][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[5][2] = vec3(0.0, 0.0, -1.0); \n\n\t\n\tfaceUvVectors[4][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[4][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[4][2] = vec3(0.0, 0.0, 1.0); \n\n\t\n\tvec3 result = (faceUvVectors[faceID][0] * uv.x) + (faceUvVectors[faceID][1] * uv.y) + faceUvVectors[faceID][2];\n\treturn normalize(result);\n}\n\nvec3 ImportanceSampleGGX(vec2 xi, float roughness4) {\n\t\n\tfloat Phi = 2.0 * M_PI * xi.x;\n\tfloat CosTheta = sqrt((1.0 - xi.y) / (1.0 + (roughness4 - 1.0) * xi.y));\n\tfloat SinTheta = sqrt(1.0 - CosTheta * CosTheta);\n\n\t\n\tvec3 H;\n\tH.x = SinTheta * cos(Phi);\n\tH.y = SinTheta * sin(Phi);\n\tH.z = CosTheta;\n\n\treturn H;\n}\n\nfloat DistributionGGX(float NdotH, float roughness4) {\n\tfloat NdotH2 = NdotH * NdotH;\n\tfloat denom = (NdotH2 * (roughness4 - 1.0) + 1.0);\n\tdenom = M_PI * denom * denom;\n\n\treturn roughness4 / denom;\n}\n\nfloat radicalInverse_VdC(uint bits) {\n\tbits = (bits << 16u) | (bits >> 16u);\n\tbits = ((bits & 0x55555555u) << 1u) | ((bits & 0xAAAAAAAAu) >> 1u);\n\tbits = ((bits & 0x33333333u) << 2u) | ((bits & 0xCCCCCCCCu) >> 2u);\n\tbits = ((bits & 0x0F0F0F0Fu) << 4u) | ((bits & 0xF0..." /* TRUNCATED STRING LITERAL */
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define M_PI 3.14159265359\n\nlayout(push_constant, std430) uniform Params {\n\tuint face_id;\n\tuint sample_count;\n\tfloat roughness;\n\tbool use_direct_write;\n\tfloat face_size;\n}\nparams;\n\nvec3 texelCoordToVec(vec2 uv, uint faceID) {\n\tmat3 faceUvVectors[6];\n\n\t\n\tfaceUvVectors[1][0] = vec3(0.0, 0.0, 1.0); \n\tfaceUvVectors[1][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[1][2] = vec3(-1.0, 0.0, 0.0); \n\n\t\n\tfaceUvVectors[0][0] = vec3(0.0, 0.0, -1.0); \n\tfaceUvVectors[0][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[0][2] = vec3(1.0, 0.0, 0.0); \n\n\t\n\tfaceUvVectors[3][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[3][1] = vec3(0.0, 0.0, -1.0); \n\tfaceUvVectors[3][2] = vec3(0.0, -1.0, 0.0); \n\n\t\n\tfaceUvVectors[2][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[2][1] = vec3(0.0, 0.0, 1.0); \n\tfaceUvVectors[2][2] = vec3(0.0, 1.0, 0.0); \n\n\t\n\tfaceUvVectors[5][0] = vec3(-1.0, 0.0, 0.0); \n\tfaceUvVectors[5][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[5][2] = vec3(0.0, 0.0, -1.0); \n\n\t\n\tfaceUvVectors[4][0] = vec3(1.0, 0.0, 0.0); \n\tfaceUvVectors[4][1] = vec3(0.0, -1.0, 0.0); \n\tfaceUvVectors[4][2] = vec3(0.0, 0.0, 1.0); \n\n\t\n\tvec3 result = (faceUvVectors[faceID][0] * uv.x) + (faceUvVectors[faceID][1] * uv.y) + faceUvVectors[faceID][2];\n\treturn normalize(result);\n}\n\nvec3 ImportanceSampleGGX(vec2 xi, float roughness4) {\n\t\n\tfloat Phi = 2.0 * M_PI * xi.x;\n\tfloat CosTheta = sqrt((1.0 - xi.y) / (1.0 + (roughness4 - 1.0) * xi.y));\n\tfloat SinTheta = sqrt(1.0 - CosTheta * CosTheta);\n\n\t\n\tvec3 H;\n\tH.x = SinTheta * cos(Phi);\n\tH.y = SinTheta * sin(Phi);\n\tH.z = CosTheta;\n\n\treturn H;\n}\n\nfloat DistributionGGX(float NdotH, float roughness4) {\n\tfloat NdotH2 = NdotH * NdotH;\n\tfloat denom = (NdotH2 * (roughness4 - 1.0) + 1.0);\n\tdenom = M_PI * denom * denom;\n\n\treturn roughness4 / denom;\n}\n\nfloat radicalInverse_VdC(uint bits) {\n\tbits = (bits << 16u) | (bits >> 16u);\n\tbits = ((bits & 0x55555555u) << 1u) | ((bits & 0xAAAAAAAAu) >> 1u);\n\tbits = ((bits & 0x33333333u) << 2u) | ((bits & 0xCCCCCCCCu) >> 2u);\n\tbits = ((bits & 0x0F0F0F0Fu) << 4u) | ((bits & 0xF0..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined1 (*) [16])(this + 0x2688) = (undefined1  [16])0x0;
  PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)(this + 0x2698));
  ShaderRD::ShaderRD(this_09);
  *(undefined ***)(this + 0x27d0) = &PTR__SpecularMergeShaderRD_00119c20;
  ShaderRD::setup((char *)this_09,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#define ViewIndex gl_ViewIndex\n#else \n\n#define ViewIndex 0\n#endif \n#else \n\n#define ViewIndex 0\n#endif \n\n#ifdef USE_MULTIVIEW\nlayout(location = 0) out vec3 uv_interp;\n#else \nlayout(location = 0) out vec2 uv_interp;\n#endif \n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -1.0), vec2(-1.0, 3.0), vec2(3.0, -1.0));\n\tgl_Position = vec4(base_arr[gl_VertexIndex], 0.0, 1.0);\n\tuv_interp.xy = clamp(gl_Position.xy, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n#ifdef USE_MULTIVIEW\n\tuv_interp.z = ViewIndex;\n#endif\n}\n\n"
                  ,SpecularMergeShaderRD::SpecularMergeShaderRD()::_fragment_code,(char *)0x0);
  pCVar51 = this + 0x2950;
  *(undefined8 *)(this + 0x2948) = 0;
  pCVar58 = pCVar51;
  do {
    pCVar59 = (CopyEffects *)((PipelineCacheRD *)pCVar58 + 0x138);
    PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)pCVar58);
    pCVar58 = pCVar59;
  } while (pCVar59 != this + 0x3310);
  singleton = this;
  *this = (CopyEffects)param_1;
  if (param_1) {
    local_1a0 = 0;
    local_118 = 0x62f3;
    uStack_116 = 0x11;
    uStack_114 = 0;
    local_148 = 0;
    uStack_110 = 0x15;
    uStack_10c = 0;
    String::parse_latin1((StrRange *)&local_148);
    Vector<String>::push_back(local_1a8);
    uVar43 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(uVar43 + -0x10),false);
      }
    }
    local_2b8 = (StrRange *)&local_148;
    local_148 = 0;
    local_118 = 0x6309;
    uStack_116 = 0x11;
    uStack_114 = 0;
    uStack_110 = 0x1c;
    uStack_10c = 0;
    String::parse_latin1(local_2b8);
    Vector<String>::push_back(local_1a8);
    uVar43 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(uVar43 + -0x10),false);
      }
    }
    local_148 = 0;
    local_118 = 0x6326;
    uStack_116 = 0x11;
    uStack_114 = 0;
    uStack_110 = 0x1c;
    uStack_10c = 0;
    String::parse_latin1(local_2b8);
    Vector<String>::push_back(local_1a8);
    uVar43 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(uVar43 + -0x10),false);
      }
    }
    local_148 = 0;
    local_118 = 0x7a00;
    uStack_116 = 0x11;
    uStack_114 = 0;
    uStack_110 = 0x3b;
    uStack_10c = 0;
    String::parse_latin1(local_2b8);
    Vector<String>::push_back(local_1a8);
    uVar43 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(uVar43 + -0x10),false);
      }
    }
    local_148 = 0;
    local_118 = 0x6343;
    uStack_116 = 0x11;
    uStack_114 = 0;
    uStack_110 = 0x13;
    uStack_10c = 0;
    String::parse_latin1(local_2b8);
    Vector<String>::push_back(local_1a8);
    uVar43 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(uVar43 + -0x10),false);
      }
    }
    local_148 = 0;
    local_118 = 0x6357;
    uStack_116 = 0x11;
    uStack_114 = 0;
    uStack_110 = 0x18;
    uStack_10c = 0;
    String::parse_latin1(local_2b8);
    Vector<String>::push_back(local_1a8);
    uVar43 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(uVar43 - 0x10),false);
      }
    }
    local_140[0] = 0;
    local_118 = 0x66e5;
    uStack_116 = 0x11;
    uStack_114 = 0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = local_178._8_8_;
    local_178 = auVar21 << 0x40;
    uStack_110 = 0;
    uStack_10c = 0;
    String::parse_latin1((StrRange *)local_178);
    ShaderRD::initialize(this_00,local_1a8,(StrRange *)local_178);
    uVar40 = local_178._0_8_;
    if (local_178._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_178._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_178._8_8_;
        local_178 = auVar12 << 0x40;
        Memory::free_static((void *)(uVar40 + -0x10),false);
      }
    }
    local_2b0 = (Vector<String> *)local_178;
    uVar43 = 0;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_140);
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
    uVar41 = ShaderRD::version_create();
    uVar28 = _UNK_001329c8;
    uVar53 = __LC72;
    uVar40 = __LC71;
    auVar8._12_4_ = _LC46;
    auVar8._8_4_ = _UNK_001329b8;
    *(undefined8 *)(this + 0x1c0) = uVar41;
    uVar29 = _LC46;
    uVar27 = _LC52;
    do {
      auVar8._0_8_ = uVar40;
      local_118 = 0;
      uStack_116 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_fc = uVar27;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      local_68 = (local_68 >> 8 & 0xffffff) << 8;
      local_58 = 0;
      local_50 = auVar8;
      Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
      local_118 = 0;
      uStack_116 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uVar44 = *(ulong *)(this + 0x1c0);
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_114 = 7;
      local_148 = local_148 & 0xffffff0000000000;
      local_140[0] = local_140[0] & 0xffffffff00000000;
      local_128 = 0;
      local_130 = 0;
      local_158 = 1;
      uStack_100 = (undefined4)uVar53;
      uStack_fc = (undefined4)((ulong)uVar53 >> 0x20);
      local_f8 = uVar28;
      uStack_dc = (undefined4)uVar28;
      local_d8 = (undefined4)((ulong)uVar28 >> 0x20);
      local_178 = (undefined1  [16])0x0;
      local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
      local_168._12_4_ = uVar29;
      uStack_e4 = uStack_100;
      uStack_e0 = uStack_fc;
      if (*(long *)(this + 0x60) == 0) {
        lVar45 = 0;
LAB_0010381a:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar43,
                   lVar45,"p_variant","variant_defines.size()","",false,false);
LAB_00103850:
        uVar41 = 0;
      }
      else {
        lVar45 = *(long *)(*(long *)(this + 0x60) + -8);
        if (lVar45 <= (long)uVar43) goto LAB_0010381a;
        lVar45 = *(long *)(this + 0x70);
        if (lVar45 == 0) goto LAB_00102e70;
        lVar56 = *(long *)(lVar45 + -8);
        if (lVar56 <= (long)uVar43) goto LAB_00102e73;
        if (*(char *)(lVar45 + uVar43) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_00103850;
        }
        if ((uVar44 == 0) || (*(uint *)(this + 0x11c) <= (uint)uVar44)) {
LAB_001055f0:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_00103850;
        }
        lVar45 = ((uVar44 & 0xffffffff) % (ulong)*(uint *)(this + 0x118)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x108) +
                          ((uVar44 & 0xffffffff) / (ulong)*(uint *)(this + 0x118)) * 8);
        if (*(int *)(lVar45 + 0x98) != (int)(uVar44 >> 0x20)) {
          if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001055f0;
        }
        iVar54 = (int)lVar45;
        if (*(char *)(lVar45 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_00);
          lVar56 = *(long *)(this + 0xc0);
          if (lVar56 != 0) {
            lVar60 = 0;
            do {
              if (*(long *)(lVar56 + -8) <= lVar60) break;
              if (*(char *)(lVar56 + lVar60) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_00,iVar54);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_00,iVar54);
              }
              lVar56 = *(long *)(this + 0xc0);
              lVar60 = lVar60 + 1;
            } while (lVar56 != 0);
          }
        }
        lVar60 = *(long *)(this + 0x80);
        if (lVar60 == 0) goto LAB_00102e70;
        lVar56 = *(long *)(lVar60 + -8);
        if (lVar56 <= (long)uVar43) goto LAB_00102e73;
        uVar44 = (ulong)*(uint *)(lVar60 + uVar43 * 4);
        lVar60 = *(long *)(lVar45 + 0x68);
        if (lVar60 == 0) goto LAB_001037f8;
        lVar56 = *(long *)(lVar60 + -8);
        if (lVar56 <= (long)uVar44) goto LAB_001037fb;
        if (*(long *)(lVar60 + uVar44 * 8) != 0) {
          ShaderRD::_compile_version_end((Version *)this_00,iVar54);
        }
        if (*(char *)(lVar45 + 0x90) == '\0') goto LAB_00103850;
        lVar45 = *(long *)(lVar45 + 0x88);
        if (lVar45 == 0) goto LAB_00102e70;
        lVar56 = *(long *)(lVar45 + -8);
        if (lVar56 <= (long)uVar43) goto LAB_00102e73;
        uVar41 = *(undefined8 *)(lVar45 + uVar43 * 8);
      }
      PipelineCacheRD::setup(pPVar57,uVar41,5,local_2b0,local_2b8,&local_118,&local_68,0,&local_198)
      ;
      lVar45 = local_130;
      if (local_130 != 0) {
        LOCK();
        plVar1 = (long *)(local_130 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_130 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      lVar45 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      if (CONCAT44(uStack_18c,uStack_190) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar45 = CONCAT44(uStack_18c,uStack_190);
          uStack_190 = 0;
          uStack_18c = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      uVar43 = uVar43 + 1;
      pPVar57 = pPVar57 + 0x138;
    } while (uVar43 != 6);
    CowData<String>::_unref((CowData<String> *)&local_1a0);
  }
  else {
    do {
      pPVar57 = pPVar57 + 0x138;
      PipelineCacheRD::clear();
    } while (pPVar2 != pPVar57);
  }
  local_2b0 = (Vector<String> *)local_178;
  local_2b8 = (StrRange *)&local_148;
  local_280 = (StrRange *)&local_198;
  local_298 = (CowData<RenderingDevice::Uniform> *)local_140;
  local_178._8_8_ = 0;
  local_148 = 0;
  local_118 = 0x6309;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x1c;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7a40;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x33;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7a78;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x2e;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7aa8;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x4d;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x6370;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x1a;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7af8;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x31;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7b30;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x20;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  uStack_110 = 0x18;
  uStack_10c = 0;
  local_118 = 0x6357;
  uStack_116 = 0x11;
  uStack_114 = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7b58;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x2f;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  uStack_110 = 0x15;
  uStack_10c = 0;
  local_118 = 0x62f3;
  uStack_116 = 0x11;
  uStack_114 = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7b88;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x23;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7bb0;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x22;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7bd8;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x28;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_2b0);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 - 0x10),false);
    }
  }
  local_140[0] = 0;
  local_198 = 0;
  uStack_194 = 0;
  local_118 = 0x66e5;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  String::parse_latin1(local_280);
  ShaderRD::initialize(this_01,local_2b0,local_280);
  if (CONCAT44(uStack_194,local_198) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_194,local_198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar45 = CONCAT44(uStack_194,local_198);
      local_198 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
  uVar43 = 0;
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x970) = 0;
  puVar55 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
  for (uVar44 = (ulong)(((int)pPVar2 -
                        (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8)) + 0x60U >>
                       3); uVar44 != 0; uVar44 = uVar44 - 1) {
    *puVar55 = 0;
    puVar55 = puVar55 + (ulong)bVar62 * -2 + 1;
  }
  uVar40 = ShaderRD::version_create();
  *(undefined8 *)(this + 0xaf0) = uVar40;
LAB_00101ece:
  cVar38 = ShaderRD::is_variant_enabled((int)this_01);
  if (cVar38 == '\0') goto joined_r0x0010206c;
  uVar40 = RenderingDevice::get_singleton();
  uVar44 = *(ulong *)(this + 0xaf0);
  uStack_110 = 0;
  uStack_10c = 0;
  if (*(long *)(this + 0x990) == 0) {
    lVar45 = 0;
LAB_00103c63:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar43,lVar45
               ,"p_variant","variant_defines.size()","",false,false);
    uVar53 = 0;
  }
  else {
    lVar45 = *(long *)(*(long *)(this + 0x990) + -8);
    if (lVar45 <= (long)uVar43) goto LAB_00103c63;
    lVar45 = *(long *)(this + 0x9a0);
    if (lVar45 == 0) goto LAB_00102e70;
    lVar56 = *(long *)(lVar45 + -8);
    if (lVar56 <= (long)uVar43) goto LAB_00102e73;
    if (*(char *)(lVar45 + uVar43) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar53 = 0;
    }
    else {
      if ((uVar44 != 0) && ((uint)uVar44 < *(uint *)(this + 0xa4c))) {
        lVar45 = ((uVar44 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xa38) +
                          ((uVar44 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
        if (*(int *)(lVar45 + 0x98) == (int)(uVar44 >> 0x20)) {
          iVar54 = (int)lVar45;
          if (*(char *)(lVar45 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_01);
            lVar56 = *(long *)(this + 0x9f0);
            if (lVar56 != 0) {
              lVar60 = 0;
              do {
                if (*(long *)(lVar56 + -8) <= lVar60) break;
                if (*(char *)(lVar56 + lVar60) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_01,iVar54);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_01,iVar54);
                }
                lVar56 = *(long *)(this + 0x9f0);
                lVar60 = lVar60 + 1;
              } while (lVar56 != 0);
            }
          }
          lVar60 = *(long *)(this + 0x9b0);
          if (lVar60 == 0) goto LAB_00102e70;
          lVar56 = *(long *)(lVar60 + -8);
          if (lVar56 <= (long)uVar43) goto LAB_00102e73;
          uVar44 = (ulong)*(uint *)(lVar60 + uVar43 * 4);
          lVar60 = *(long *)(lVar45 + 0x68);
          if (lVar60 == 0) goto LAB_001037f8;
          lVar56 = *(long *)(lVar60 + -8);
          if (lVar56 <= (long)uVar44) goto LAB_001037fb;
          if (*(long *)(lVar60 + uVar44 * 8) == 0) {
            cVar38 = *(char *)(lVar45 + 0x90);
          }
          else {
            ShaderRD::_compile_version_end((Version *)this_01,iVar54);
            cVar38 = *(char *)(lVar45 + 0x90);
          }
          if (cVar38 == '\0') {
            uVar53 = 0;
            goto LAB_0010200d;
          }
          lVar45 = *(long *)(lVar45 + 0x88);
          if (lVar45 == 0) goto LAB_00102e70;
          lVar56 = *(long *)(lVar45 + -8);
          if (lVar56 <= (long)uVar43) goto LAB_00102e73;
          uVar53 = *(undefined8 *)(lVar45 + uVar43 * 8);
          goto LAB_0010200d;
        }
        if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.");
      uVar53 = 0;
    }
  }
LAB_0010200d:
  uVar40 = RenderingDevice::compute_pipeline_create(uVar40,uVar53,(StringName *)&local_118);
  *(undefined8 *)(this + ((long)(int)uVar43 + 0x15e) * 8 + 8) = uVar40;
  if (CONCAT44(uStack_10c,uStack_110) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_10c,uStack_110) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar45 = CONCAT44(uStack_10c,uStack_110);
      uStack_110 = 0;
      uStack_10c = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
joined_r0x0010206c:
  uVar43 = uVar43 + 1;
  if (uVar43 == 0xd) goto LAB_00102078;
  goto LAB_00101ece;
LAB_00102e70:
  lVar56 = 0;
LAB_00102e73:
  Var63 = SUB169(ZEXT816(1),0) << 0x40;
  goto LAB_00102e8d;
LAB_00102078:
  CowData<String>::_unref((CowData<String> *)(local_178 + 8));
  local_1a0 = 0;
  local_118 = 0x638b;
  uStack_116 = 0x11;
  uStack_114 = 0;
  local_148 = 0;
  uStack_110 = 1;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x638d;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x1d;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x63ab;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x1a;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  uStack_110 = 0x18;
  uStack_10c = 0;
  local_118 = 0x6357;
  uStack_116 = 0x11;
  uStack_114 = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x63c6;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x17;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7c08;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x30;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 - 0x10),false);
    }
  }
  local_140[0] = 0;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_178._8_8_;
  local_178 = auVar20 << 0x40;
  local_118 = 0x66e5;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  String::parse_latin1((StrRange *)local_2b0);
  ShaderRD::initialize(this_02,local_1a8,local_2b0);
  uVar40 = local_178._0_8_;
  if (local_178._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_178._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_178._8_8_;
      local_178 = auVar11 << 0x40;
      Memory::free_static((void *)(uVar40 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  cVar38 = (**(code **)(*RendererCompositorRD::singleton + 0xa8))();
  iVar54 = (int)this_02;
  if (cVar38 == '\0') {
    ShaderRD::set_variant_enabled(iVar54,true);
    ShaderRD::set_variant_enabled(iVar54,true);
  }
  uVar43 = 0;
  uVar40 = ShaderRD::version_create();
  uVar27 = _LC52;
  *(undefined8 *)(this + 0xd08) = uVar40;
  do {
    cVar38 = ShaderRD::is_variant_enabled(iVar54);
    if (cVar38 == '\0') {
      PipelineCacheRD::clear();
    }
    else {
      local_50._12_4_ = _LC46;
      local_50._8_4_ = _UNK_001329b8;
      uStack_190 = 0;
      uStack_18c = 0;
      local_118 = 0;
      uStack_116 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      local_68 = (local_68 >> 8 & 0xffffff) << 8;
      local_58 = 0;
      local_50._0_8_ = __LC71;
      uStack_fc = uVar27;
      Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back();
      uVar44 = *(ulong *)(this + 0xd08);
      local_118 = 0;
      uStack_116 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_114 = 7;
      local_148 = local_148 & 0xffffff0000000000;
      local_140[0] = local_140[0] & 0xffffffff00000000;
      local_128 = 0;
      local_130 = 0;
      local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
      local_168._12_4_ = 0x3f800000;
      local_158 = 1;
      uStack_100 = (undefined4)__LC72;
      uStack_fc = (undefined4)((ulong)__LC72 >> 0x20);
      local_f8 = _UNK_001329c8;
      uStack_dc = (undefined4)_UNK_001329c8;
      local_d8 = (undefined4)((ulong)_UNK_001329c8 >> 0x20);
      local_178 = (undefined1  [16])0x0;
      uStack_e4 = uStack_100;
      uStack_e0 = uStack_fc;
      if (*(long *)(this + 0xba8) == 0) {
        lVar45 = 0;
LAB_00103989:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar43,
                   lVar45,"p_variant","variant_defines.size()","",false,false);
LAB_001039bf:
        uVar40 = 0;
      }
      else {
        lVar45 = *(long *)(*(long *)(this + 0xba8) + -8);
        if (lVar45 <= (long)uVar43) goto LAB_00103989;
        lVar45 = *(long *)(this + 3000);
        if (lVar45 == 0) goto LAB_00103d78;
        lVar56 = *(long *)(lVar45 + -8);
        if (lVar56 <= (long)uVar43) goto LAB_00103d7b;
        if (*(char *)(lVar45 + uVar43) != '\0') {
          if ((uVar44 == 0) || (*(uint *)(this + 0xc64) <= (uint)uVar44)) {
LAB_00105688:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
            uVar40 = 0;
            goto LAB_001025d4;
          }
          lVar45 = ((uVar44 & 0xffffffff) % (ulong)*(uint *)(this + 0xc60)) * 0xa0 +
                   *(long *)(*(long *)(this + 0xc50) +
                            ((uVar44 & 0xffffffff) / (ulong)*(uint *)(this + 0xc60)) * 8);
          if (*(int *)(lVar45 + 0x98) != (int)(uVar44 >> 0x20)) {
            if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00105688;
          }
          iVar52 = (int)lVar45;
          if (*(char *)(lVar45 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_02);
            lVar56 = *(long *)(this + 0xc08);
            if (lVar56 != 0) {
              lVar60 = 0;
              do {
                if (*(long *)(lVar56 + -8) <= lVar60) break;
                if (*(char *)(lVar56 + lVar60) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_02,iVar52);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_02,iVar52);
                }
                lVar56 = *(long *)(this + 0xc08);
                lVar60 = lVar60 + 1;
              } while (lVar56 != 0);
            }
          }
          lVar60 = *(long *)(this + 0xbc8);
          if (lVar60 != 0) {
            lVar56 = *(long *)(lVar60 + -8);
            if (lVar56 <= (long)uVar43) goto LAB_00103d7b;
            uVar44 = (ulong)*(uint *)(lVar60 + uVar43 * 4);
            lVar60 = *(long *)(lVar45 + 0x68);
            if (lVar60 != 0) {
              lVar56 = *(long *)(lVar60 + -8);
              if ((long)uVar44 < lVar56) {
                if (*(long *)(lVar60 + uVar44 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_02,iVar52);
                }
                if (*(char *)(lVar45 + 0x90) != '\0') {
                  lVar45 = *(long *)(lVar45 + 0x88);
                  if (lVar45 == 0) goto LAB_00103d78;
                  lVar56 = *(long *)(lVar45 + -8);
                  if ((long)uVar43 < lVar56) {
                    uVar40 = *(undefined8 *)(lVar45 + uVar43 * 8);
                    goto LAB_001025d4;
                  }
                  goto LAB_00103d7b;
                }
                goto LAB_001039bf;
              }
              goto LAB_001037fb;
            }
            goto LAB_001037f8;
          }
LAB_00103d78:
          lVar56 = 0;
LAB_00103d7b:
          Var63 = SUB169(ZEXT816(1),0) << 0x40;
          goto LAB_00102e8d;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar40 = 0;
      }
LAB_001025d4:
      PipelineCacheRD::setup
                (pPVar49,uVar40,5,local_2b0,local_2b8,(StringName *)&local_118,&local_68,0,local_280
                );
      lVar45 = local_130;
      if (local_130 != 0) {
        LOCK();
        plVar1 = (long *)(local_130 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_130 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      lVar45 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      if (CONCAT44(uStack_18c,uStack_190) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar45 = CONCAT44(uStack_18c,uStack_190);
          uStack_190 = 0;
          uStack_18c = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
    }
    uVar43 = uVar43 + 1;
    pPVar49 = pPVar49 + 0x138;
  } while (uVar43 != 6);
  CowData<String>::_unref((CowData<String> *)&local_1a0);
  local_118 = 0x638b;
  uStack_116 = 0x11;
  uStack_114 = 0;
  local_1a0 = 0;
  local_148 = 0;
  uStack_110 = 1;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 - 0x10),false);
    }
  }
  local_140[0] = 0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_178._8_8_;
  local_178 = auVar22 << 0x40;
  local_118 = 0x66e5;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  String::parse_latin1((StrRange *)local_2b0);
  ShaderRD::initialize(this_03,local_1a8,local_2b0);
  uVar40 = local_178._0_8_;
  if (local_178._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_178._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_178._8_8_;
      local_178 = auVar10 << 0x40;
      Memory::free_static((void *)(uVar40 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  uVar43 = ShaderRD::version_create();
  *(ulong *)(this + 0x15d8) = uVar43;
  if (*(long *)(this + 0x1478) != 0) {
    lVar45 = *(long *)(*(long *)(this + 0x1478) + -8);
    if (lVar45 < 1) goto LAB_001056b7;
    pcVar3 = *(char **)(this + 0x1488);
    if (pcVar3 == (char *)0x0) goto LAB_00103bc8;
    lVar56 = *(long *)(pcVar3 + -8);
    if (lVar56 < 1) goto LAB_00103bcb;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar40 = 0;
      goto LAB_00103126;
    }
    if ((uVar43 == 0) || (*(uint *)(this + 0x1534) <= (uint)uVar43)) {
LAB_001064fb:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar40 = 0;
      goto LAB_00103126;
    }
    lVar45 = ((uVar43 & 0xffffffff) % (ulong)*(uint *)(this + 0x1530)) * 0xa0 +
             *(long *)(*(long *)(this + 0x1520) +
                      ((uVar43 & 0xffffffff) / (ulong)*(uint *)(this + 0x1530)) * 8);
    if (*(int *)(lVar45 + 0x98) != (int)(uVar43 >> 0x20)) {
      if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001064fb;
    }
    iVar54 = (int)lVar45;
    if (*(char *)(lVar45 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_03);
      lVar56 = *(long *)(this + 0x14d8);
      if (lVar56 != 0) {
        lVar60 = 0;
        do {
          if (*(long *)(lVar56 + -8) <= lVar60) break;
          if (*(char *)(lVar56 + lVar60) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_03,iVar54);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_03,iVar54);
          }
          lVar56 = *(long *)(this + 0x14d8);
          lVar60 = lVar60 + 1;
        } while (lVar56 != 0);
      }
    }
    puVar4 = *(uint **)(this + 0x1498);
    if (puVar4 == (uint *)0x0) goto LAB_00103bc8;
    lVar56 = *(long *)(puVar4 + -2);
    if (lVar56 < 1) goto LAB_00103bcb;
    uVar44 = (ulong)*puVar4;
    lVar60 = *(long *)(lVar45 + 0x68);
    if (lVar60 != 0) {
      lVar56 = *(long *)(lVar60 + -8);
      if ((long)uVar44 < lVar56) {
        if (*(long *)(lVar60 + uVar44 * 8) != 0) {
          ShaderRD::_compile_version_end((Version *)this_03,iVar54);
        }
        if (*(char *)(lVar45 + 0x90) != '\0') {
          puVar55 = *(undefined8 **)(lVar45 + 0x88);
          if (puVar55 == (undefined8 *)0x0) goto LAB_00103bc8;
          lVar56 = puVar55[-1];
          if (0 < lVar56) {
            uVar40 = *puVar55;
            goto LAB_00103126;
          }
          goto LAB_00103bcb;
        }
        goto LAB_001056ec;
      }
      goto LAB_001037fb;
    }
LAB_001037f8:
    lVar56 = 0;
LAB_001037fb:
    Var63 = SUB169(ZEXT816(1),0) << 0x40;
    uVar43 = uVar44;
LAB_00102e8d:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar43,lVar56,"p_index","size()","",false,
               SUB91((unkuint9)Var63 >> 0x40,0));
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar45 = 0;
LAB_001056b7:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar45,
             "p_variant","variant_defines.size()","",false,false);
LAB_001056ec:
  uVar40 = 0;
LAB_00103126:
  uVar41 = _UNK_001329c8;
  uVar27 = _LC46;
  uVar28 = __LC71;
  uVar53 = CONCAT44(_LC46,_UNK_001329b8);
  uStack_f0 = __LC89;
  local_e8 = (undefined4)_UNK_001329d8;
  uStack_e4 = (undefined4)((ulong)_UNK_001329d8 >> 0x20);
  uStack_114 = 7;
  uStack_e0 = (undefined4)__LC90;
  uStack_dc = (undefined4)((ulong)__LC90 >> 0x20);
  local_d8 = (undefined4)_UNK_001329e8;
  uStack_d4 = (undefined4)((ulong)_UNK_001329e8 >> 0x20);
  uStack_110 = uStack_110 & 0xffffff00;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = uStack_104 & 0xffffff00;
  uStack_100 = (undefined4)__LC72;
  uVar29 = uStack_100;
  uStack_fc = (undefined4)((ulong)__LC72 >> 0x20);
  uVar33 = uStack_fc;
  local_f8 = _UNK_001329c8;
  uStack_d0 = 0;
  local_118 = 0x101;
  uStack_190 = 0;
  uStack_18c = 0;
  local_68 = 0;
  local_58 = 0;
  local_50._8_8_ = uVar53;
  local_50._0_8_ = __LC71;
  local_148 = local_148 & 0xffffff0000000000;
  local_140[0] = local_140[0] & 0xffffffff00000000;
  local_128 = 0;
  local_130 = 0;
  local_178 = (undefined1  [16])0x0;
  local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
  local_168._12_4_ = _LC46;
  local_158 = 1;
  PipelineCacheRD::setup
            ((PipelineCacheRD *)(this + 0x15e0),uVar40,5,local_2b0,local_2b8,
             (StringName *)&local_118,(StringName *)&local_68,0,local_280);
  lVar45 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
  lVar45 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
  if (CONCAT44(uStack_18c,uStack_190) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar45 = CONCAT44(uStack_18c,uStack_190);
      uStack_190 = 0;
      uStack_18c = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_1a0);
  local_1a0 = 0;
  local_118 = 0x66e5;
  uVar30 = local_118;
  uStack_116 = 0x11;
  uVar31 = uStack_116;
  uStack_114 = 0;
  uVar32 = uStack_114;
  local_148 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 - 0x10),false);
    }
  }
  uVar36 = local_d8;
  uVar34 = uStack_dc;
  local_140[0] = 0;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_178._8_8_;
  local_178 = auVar23 << 0x40;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_dc = (undefined4)uVar41;
  uVar35 = uStack_dc;
  local_d8 = (undefined4)((ulong)uVar41 >> 0x20);
  uVar37 = local_d8;
  local_118 = uVar30;
  uStack_116 = uVar31;
  uStack_114 = uVar32;
  uStack_dc = uVar34;
  local_d8 = uVar36;
  if (*this != (CopyEffects)0x0) {
    String::parse_latin1((StrRange *)local_2b0);
    ShaderRD::initialize(this_04,local_1a8,local_2b0);
    uVar40 = local_178._0_8_;
    if (local_178._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_178._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = local_178._8_8_;
        local_178 = auVar16 << 0x40;
        Memory::free_static((void *)(uVar40 + -0x10),false);
      }
    }
    CowData<RenderingDevice::Uniform>::_unref(local_298);
    uVar40 = ShaderRD::version_create();
    uStack_190 = 0;
    uStack_18c = 0;
    local_118 = 0;
    uStack_116 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    *(undefined8 *)(this + 0x1a18) = uVar40;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_68 = (local_68 >> 8 & 0xffffff) << 8;
    local_58 = 0;
    local_50._0_8_ = uVar28;
    uStack_fc = 0x1010101;
    Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
    uStack_108 = 0;
    uStack_104 = 0;
    uVar43 = *(ulong *)(this + 0x1a18);
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_f8 = uVar41;
    local_118 = 0;
    uStack_116 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_114 = 7;
    local_148 = local_148 & 0xffffff0000000000;
    local_140[0] = local_140[0] & 0xffffffff00000000;
    local_128 = 0;
    local_130 = 0;
    local_158 = 1;
    local_178 = (undefined1  [16])0x0;
    local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
    local_168._12_4_ = uVar27;
    if (*(long *)(this + 0x18b8) == 0) {
      lVar45 = 0;
LAB_00105803:
      uStack_100 = uVar29;
      uStack_fc = uVar33;
      uStack_e4 = uVar29;
      uStack_e0 = uVar33;
      uStack_dc = uVar35;
      local_d8 = uVar37;
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar45,
                 "p_variant","variant_defines.size()","",false,false);
LAB_00105838:
      uVar40 = 0;
LAB_00103689:
      PipelineCacheRD::setup
                ((PipelineCacheRD *)(this + 0x1a28),uVar40,5,local_2b0,local_2b8,
                 (StringName *)&local_118,(StringName *)&local_68,0,local_280);
      lVar45 = local_130;
      if (local_130 != 0) {
        LOCK();
        plVar1 = (long *)(local_130 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_130 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      lVar45 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      if (CONCAT44(uStack_18c,uStack_190) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar45 = CONCAT44(uStack_18c,uStack_190);
          uStack_190 = 0;
          uStack_18c = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      goto LAB_00103fbf;
    }
    lVar45 = *(long *)(*(long *)(this + 0x18b8) + -8);
    if (lVar45 < 1) goto LAB_00105803;
    pcVar3 = *(char **)(this + 0x18c8);
    uStack_100 = uVar29;
    uStack_fc = uVar33;
    uStack_e4 = uVar29;
    uStack_e0 = uVar33;
    uStack_dc = uVar35;
    local_d8 = uVar37;
    if (pcVar3 != (char *)0x0) {
      lVar56 = *(long *)(pcVar3 + -8);
      if (lVar56 < 1) goto LAB_00103bcb;
      if (*pcVar3 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar40 = 0;
        goto LAB_00103689;
      }
      if ((uVar43 == 0) || (*(uint *)(this + 0x1974) <= (uint)uVar43)) {
LAB_0010593f:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar40 = 0;
        goto LAB_00103689;
      }
      lVar45 = ((uVar43 & 0xffffffff) % (ulong)*(uint *)(this + 0x1970)) * 0xa0 +
               *(long *)(*(long *)(this + 0x1960) +
                        ((uVar43 & 0xffffffff) / (ulong)*(uint *)(this + 0x1970)) * 8);
      if (*(int *)(lVar45 + 0x98) != (int)(uVar43 >> 0x20)) {
        if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010593f;
      }
      iVar54 = (int)lVar45;
      if (*(char *)(lVar45 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_04);
        lVar56 = *(long *)(this + 0x1918);
        if (lVar56 != 0) {
          lVar60 = 0;
          do {
            if (*(long *)(lVar56 + -8) <= lVar60) break;
            if (*(char *)(lVar56 + lVar60) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_04,iVar54);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_04,iVar54);
            }
            lVar56 = *(long *)(this + 0x1918);
            lVar60 = lVar60 + 1;
          } while (lVar56 != 0);
        }
      }
      puVar4 = *(uint **)(this + 0x18d8);
      if (puVar4 == (uint *)0x0) goto LAB_00103bc8;
      lVar56 = *(long *)(puVar4 + -2);
      if (0 < lVar56) {
        uVar44 = (ulong)*puVar4;
        lVar60 = *(long *)(lVar45 + 0x68);
        if (lVar60 == 0) goto LAB_001037f8;
        lVar56 = *(long *)(lVar60 + -8);
        if (lVar56 <= (long)uVar44) goto LAB_001037fb;
        if (*(long *)(lVar60 + uVar44 * 8) != 0) {
          ShaderRD::_compile_version_end((Version *)this_04,iVar54);
        }
        if (*(char *)(lVar45 + 0x90) != '\0') {
          puVar55 = *(undefined8 **)(lVar45 + 0x88);
          if (puVar55 == (undefined8 *)0x0) goto LAB_00103bc8;
          lVar56 = puVar55[-1];
          if (0 < lVar56) {
            uVar40 = *puVar55;
            goto LAB_00103689;
          }
          goto LAB_00103bcb;
        }
        goto LAB_00105838;
      }
      goto LAB_00103bcb;
    }
LAB_00103bc8:
    lVar56 = 0;
    goto LAB_00103bcb;
  }
  String::parse_latin1((StrRange *)local_2b0);
  ShaderRD::initialize(pSVar48,local_1a8,local_2b0);
  uVar40 = local_178._0_8_;
  if (local_178._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_178._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_178._8_8_;
      local_178 = auVar17 << 0x40;
      Memory::free_static((void *)(uVar40 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  uVar40 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1a18) = uVar40;
  uVar40 = RenderingDevice::get_singleton();
  uVar43 = *(ulong *)(this + 0x1a18);
  uStack_110 = 0;
  uStack_10c = 0;
  if (*(long *)(this + 0x1740) == 0) {
    lVar45 = 0;
LAB_001057c3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar45,
               "p_variant","variant_defines.size()","",false,false);
LAB_001057f8:
    uVar46 = 0;
  }
  else {
    lVar45 = *(long *)(*(long *)(this + 0x1740) + -8);
    if (lVar45 < 1) goto LAB_001057c3;
    pcVar3 = *(char **)(this + 0x1750);
    if (pcVar3 == (char *)0x0) goto LAB_00103bc8;
    lVar56 = *(long *)(pcVar3 + -8);
    if (lVar56 < 1) goto LAB_00103bcb;
    if (*pcVar3 != '\0') {
      if ((uVar43 == 0) || (*(uint *)(this + 0x17fc) <= (uint)uVar43)) {
LAB_001059ac:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0);
        uVar46 = 0;
        goto LAB_00103f6c;
      }
      lVar45 = ((uVar43 & 0xffffffff) % (ulong)*(uint *)(this + 0x17f8)) * 0xa0 +
               *(long *)(*(long *)(this + 0x17e8) +
                        ((uVar43 & 0xffffffff) / (ulong)*(uint *)(this + 0x17f8)) * 8);
      if (*(int *)(lVar45 + 0x98) != (int)(uVar43 >> 0x20)) {
        if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_001059ac;
      }
      iVar54 = (int)lVar45;
      if (*(char *)(lVar45 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)pSVar48);
        lVar56 = *(long *)(this + 0x17a0);
        if (lVar56 != 0) {
          lVar60 = 0;
          do {
            if (*(long *)(lVar56 + -8) <= lVar60) break;
            if (*(char *)(lVar56 + lVar60) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)pSVar48,iVar54);
            }
            else {
              ShaderRD::_compile_version_start((Version *)pSVar48,iVar54);
            }
            lVar56 = *(long *)(this + 0x17a0);
            lVar60 = lVar60 + 1;
          } while (lVar56 != 0);
        }
      }
      puVar4 = *(uint **)(this + 0x1760);
      if (puVar4 == (uint *)0x0) goto LAB_00103bc8;
      lVar56 = *(long *)(puVar4 + -2);
      if (lVar56 < 1) goto LAB_00103bcb;
      uVar44 = (ulong)*puVar4;
      lVar60 = *(long *)(lVar45 + 0x68);
      if (lVar60 == 0) goto LAB_001037f8;
      lVar56 = *(long *)(lVar60 + -8);
      if (lVar56 <= (long)uVar44) goto LAB_001037fb;
      if (*(long *)(lVar60 + uVar44 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)pSVar48,iVar54);
      }
      if (*(char *)(lVar45 + 0x90) != '\0') {
        puVar55 = *(undefined8 **)(lVar45 + 0x88);
        if (puVar55 == (undefined8 *)0x0) goto LAB_00103bc8;
        lVar56 = puVar55[-1];
        if (0 < lVar56) {
          uVar46 = *puVar55;
          goto LAB_00103f6c;
        }
        goto LAB_00103bcb;
      }
      goto LAB_001057f8;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0);
    uVar46 = 0;
  }
LAB_00103f6c:
  uVar40 = RenderingDevice::compute_pipeline_create(uVar40,uVar46,(StringName *)&local_118);
  *(undefined8 *)(this + 0x1a20) = uVar40;
  if (CONCAT44(uStack_10c,uStack_110) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_10c,uStack_110) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar45 = CONCAT44(uStack_10c,uStack_110);
      uStack_110 = 0;
      uStack_10c = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
  PipelineCacheRD::clear();
LAB_00103fbf:
  CowData<String>::_unref((CowData<String> *)&local_1a0);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_118,
             "rendering/reflections/sky_reflections/fast_filter_high_quality",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_68);
  CVar39 = (CopyEffects)Variant::operator_cast_to_bool((Variant *)&local_68);
  this[0x2370] = CVar39;
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_114,CONCAT22(uStack_116,local_118)) != 0)
     ) {
    StringName::unref();
  }
  local_1a0 = 0;
  local_118 = 0x63de;
  uStack_116 = 0x11;
  uStack_114 = 0;
  local_148 = 0;
  uStack_110 = 0x1a;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x63f9;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x19;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7c80;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x34;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7cb8;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x33;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 - 0x10),false);
    }
  }
  if (this[0x2370] == (CopyEffects)0x0) {
    uVar40 = RenderingDevice::get_singleton();
    uStack_110 = 0;
    uStack_10c = 0;
    uVar40 = RenderingDevice::storage_buffer_create(uVar40,0xd20,(StringName *)&local_118,0,0);
    *(undefined8 *)(this + 0x2368) = uVar40;
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_10c,uStack_110) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar45 = CONCAT44(uStack_10c,uStack_110);
        uStack_110 = 0;
        uStack_10c = 0;
        Memory::free_static((void *)(lVar45 + -0x10),false);
      }
    }
    uVar40 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update(uVar40,*(undefined8 *)(this + 0x2368),0,0xd20);
  }
  else {
    uVar40 = RenderingDevice::get_singleton();
    uStack_110 = 0;
    uStack_10c = 0;
    uVar40 = RenderingDevice::storage_buffer_create(uVar40,0x9d80,(StringName *)&local_118,0,0);
    *(undefined8 *)(this + 0x2368) = uVar40;
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_10c,uStack_110) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar45 = CONCAT44(uStack_10c,uStack_110);
        uStack_110 = 0;
        uStack_10c = 0;
        Memory::free_static((void *)(lVar45 + -0x10),false);
      }
    }
    uVar40 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update(uVar40,*(undefined8 *)(this + 0x2368),0,0x9d80);
  }
  local_140[0] = 0;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = local_178._8_8_;
  local_178 = auVar24 << 0x40;
  local_118 = 0x66e5;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  if (*this != (CopyEffects)0x0) {
    String::parse_latin1((StrRange *)local_2b0);
    ShaderRD::initialize(this_06,local_1a8,local_2b0);
    uVar40 = local_178._0_8_;
    if (local_178._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_178._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = local_178._8_8_;
        local_178 = auVar13 << 0x40;
        Memory::free_static((void *)(uVar40 + -0x10),false);
      }
    }
    uVar43 = 0;
    CowData<RenderingDevice::Uniform>::_unref(local_298);
    iVar54 = (int)this_06;
    ShaderRD::set_variant_enabled(iVar54,true);
    ShaderRD::set_variant_enabled(iVar54,true);
    uVar40 = ShaderRD::version_create();
    *(undefined8 *)(this + 0x1e50) = uVar40;
    do {
      cVar38 = ShaderRD::is_variant_enabled(iVar54);
      if (cVar38 == '\0') {
        PipelineCacheRD::clear();
      }
      else {
        uStack_190 = 0;
        uStack_18c = 0;
        local_118 = 0;
        uStack_116 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = _LC52;
        local_68 = (local_68 >> 8 & 0xffffff) << 8;
        local_58 = 0;
        local_50._0_8_ = uVar28;
        auVar9._12_4_ = _LC52;
        auVar9._0_12_ = ZEXT812(0);
        uVar40 = auVar9._8_8_;
        Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back();
        local_118 = 0;
        uStack_116 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        uVar44 = *(ulong *)(this + 0x1e50);
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_114 = 7;
        local_148 = local_148 & 0xffffff0000000000;
        local_140[0] = local_140[0] & 0xffffffff00000000;
        local_128 = 0;
        local_130 = 0;
        local_158 = 1;
        local_f8 = uVar41;
        local_178 = (undefined1  [16])0x0;
        local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
        local_168._12_4_ = uVar27;
        if (*(long *)(this + 0x1cf0) == 0) {
          lVar45 = 0;
LAB_0010577b:
          uStack_100 = uVar29;
          uStack_fc = uVar33;
          uStack_e4 = uVar29;
          uStack_e0 = uVar33;
          uStack_dc = uVar35;
          local_d8 = uVar37;
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar43,
                     lVar45,"p_variant","variant_defines.size()","",false,false);
LAB_001057b1:
          uVar40 = 0;
        }
        else {
          lVar45 = *(long *)(*(long *)(this + 0x1cf0) + -8);
          if (lVar45 <= (long)uVar43) goto LAB_0010577b;
          lVar45 = *(long *)(this + 0x1d00);
          uStack_100 = uVar29;
          uStack_fc = uVar33;
          uStack_e4 = uVar29;
          uStack_e0 = uVar33;
          uStack_dc = uVar35;
          local_d8 = uVar37;
          if (lVar45 == 0) goto LAB_00105e78;
          lVar56 = *(long *)(lVar45 + -8);
          if (lVar56 <= (long)uVar43) goto LAB_00105e7b;
          if (*(char *)(lVar45 + uVar43) != '\0') {
            if ((uVar44 == 0) || (*(uint *)(this + 0x1dac) <= (uint)uVar44)) {
LAB_00106993:
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.",0,0);
              uVar40 = 0;
              goto LAB_001045f6;
            }
            lVar45 = ((uVar44 & 0xffffffff) % (ulong)*(uint *)(this + 0x1da8)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x1d98) +
                              ((uVar44 & 0xffffffff) / (ulong)*(uint *)(this + 0x1da8)) * 8);
            if (*(int *)(lVar45 + 0x98) != (int)(uVar44 >> 0x20)) {
              if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar40);
              }
              goto LAB_00106993;
            }
            iVar52 = (int)lVar45;
            if (*(char *)(lVar45 + 0x91) != '\0') {
              ShaderRD::_initialize_version((Version *)this_06);
              lVar56 = *(long *)(this + 0x1d50);
              if (lVar56 != 0) {
                lVar60 = 0;
                do {
                  if (*(long *)(lVar56 + -8) <= lVar60) break;
                  if (*(char *)(lVar56 + lVar60) == '\0') {
                    ShaderRD::_allocate_placeholders((Version *)this_06,iVar52);
                  }
                  else {
                    ShaderRD::_compile_version_start((Version *)this_06,iVar52);
                  }
                  lVar56 = *(long *)(this + 0x1d50);
                  lVar60 = lVar60 + 1;
                } while (lVar56 != 0);
              }
            }
            lVar60 = *(long *)(this + 0x1d10);
            if (lVar60 != 0) {
              lVar56 = *(long *)(lVar60 + -8);
              if ((long)uVar43 < lVar56) {
                uVar44 = (ulong)*(uint *)(lVar60 + uVar43 * 4);
                lVar60 = *(long *)(lVar45 + 0x68);
                if (lVar60 != 0) {
                  lVar56 = *(long *)(lVar60 + -8);
                  if ((long)uVar44 < lVar56) {
                    if (*(long *)(lVar60 + uVar44 * 8) != 0) {
                      ShaderRD::_compile_version_end((Version *)this_06,iVar52);
                    }
                    if (*(char *)(lVar45 + 0x90) == '\0') goto LAB_001057b1;
                    lVar45 = *(long *)(lVar45 + 0x88);
                    if (lVar45 != 0) {
                      lVar56 = *(long *)(lVar45 + -8);
                      if ((long)uVar43 < lVar56) {
                        uVar40 = *(undefined8 *)(lVar45 + uVar43 * 8);
                        goto LAB_001045f6;
                      }
                      goto LAB_00105e7b;
                    }
                    goto LAB_00105e78;
                  }
                  goto LAB_001037fb;
                }
                goto LAB_001037f8;
              }
              goto LAB_00105e7b;
            }
            goto LAB_00105e78;
          }
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          uVar40 = 0;
        }
LAB_001045f6:
        PipelineCacheRD::setup
                  (pCVar50,uVar40,5,local_2b0,local_2b8,(StringName *)&local_118,
                   (StringName *)&local_68,0,local_280);
        lVar45 = local_130;
        if (local_130 != 0) {
          LOCK();
          plVar1 = (long *)(local_130 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_130 = 0;
            Memory::free_static((void *)(lVar45 + -0x10),false);
          }
        }
        lVar45 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar45 + -0x10),false);
          }
        }
        if (CONCAT44(uStack_18c,uStack_190) != 0) {
          LOCK();
          plVar1 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar45 = CONCAT44(uStack_18c,uStack_190);
            uStack_190 = 0;
            uStack_18c = 0;
            Memory::free_static((void *)(lVar45 + -0x10),false);
          }
        }
      }
      uVar43 = uVar43 + 1;
      pCVar50 = pCVar50 + 0x138;
    } while (uVar43 != 4);
    local_140[0] = 0;
    local_118 = 8;
    uStack_116 = 0;
    uStack_114 = 0;
    uStack_110 = uStack_110 & 0xffffff00;
    uStack_108 = (undefined4)*(undefined8 *)(this + 0x2368);
    uStack_104 = (uint)((ulong)*(undefined8 *)(this + 0x2368) >> 0x20);
    local_f8 = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)local_2b8,(StringName *)&local_118);
    uVar40 = RenderingDevice::get_singleton();
    uVar5 = *(ulong *)(this + 0x1e50);
    uVar44 = (ulong)((byte)this[0x2370] ^ 1);
    uVar43 = uVar44;
    if (*(long *)(this + 0x1cf0) == 0) {
      lVar45 = 0;
      goto LAB_0010585a;
    }
    lVar45 = *(long *)(*(long *)(this + 0x1cf0) + -8);
    if (lVar45 <= (long)uVar44) goto LAB_0010585a;
    lVar45 = *(long *)(this + 0x1d00);
    if (lVar45 == 0) goto LAB_001037f8;
    lVar56 = *(long *)(lVar45 + -8);
    if (lVar56 <= (long)uVar44) goto LAB_001037fb;
    if (*(char *)(lVar45 + uVar44) == '\0') goto LAB_001069eb;
    if ((uVar5 == 0) || (*(uint *)(this + 0x1dac) <= (uint)uVar5)) goto LAB_00106a57;
    lVar45 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x1da8)) * 0xa0 +
             *(long *)(*(long *)(this + 0x1d98) +
                      ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x1da8)) * 8);
    iVar54 = *(int *)(lVar45 + 0x98);
    if (iVar54 != (int)(uVar5 >> 0x20)) goto LAB_00106a17;
    iVar54 = (int)lVar45;
    if (*(char *)(lVar45 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_06);
      lVar56 = *(long *)(this + 0x1d50);
      if (lVar56 != 0) {
        lVar60 = 0;
        do {
          if (*(long *)(lVar56 + -8) <= lVar60) break;
          if (*(char *)(lVar56 + lVar60) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_06,iVar54);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_06,iVar54);
          }
          lVar56 = *(long *)(this + 0x1d50);
          lVar60 = lVar60 + 1;
        } while (lVar56 != 0);
      }
    }
    lVar60 = *(long *)(this + 0x1d10);
    if (lVar60 == 0) goto LAB_001037f8;
    lVar56 = *(long *)(lVar60 + -8);
    if ((long)uVar44 < lVar56) {
      lVar6 = *(long *)(lVar45 + 0x68);
      uVar43 = (ulong)*(uint *)(lVar60 + uVar44 * 4);
      if (lVar6 == 0) {
        lVar56 = 0;
      }
      else {
        lVar56 = *(long *)(lVar6 + -8);
        if ((long)uVar43 < lVar56) {
          if (*(long *)(lVar6 + uVar43 * 8) != 0) {
            ShaderRD::_compile_version_end((Version *)this_06,iVar54);
          }
          if (*(char *)(lVar45 + 0x90) == '\0') goto LAB_00105876;
          lVar45 = *(long *)(lVar45 + 0x88);
          if (lVar45 == 0) goto LAB_001037f8;
          lVar56 = *(long *)(lVar45 + -8);
          if ((long)uVar44 < lVar56) {
            uVar46 = *(undefined8 *)(lVar45 + uVar44 * 8);
            goto LAB_00104855;
          }
          goto LAB_001037fb;
        }
      }
      Var63 = SUB169(ZEXT816(1),0) << 0x40;
      goto LAB_00102e8d;
    }
    goto LAB_001037fb;
  }
  String::parse_latin1((StrRange *)local_2b0);
  ShaderRD::initialize(this_05,local_1a8,local_2b0);
  uVar40 = local_178._0_8_;
  if (local_178._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_178._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_178._8_8_;
      local_178 = auVar18 << 0x40;
      Memory::free_static((void *)(uVar40 + -0x10),false);
    }
  }
  uVar43 = 0;
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  uVar40 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1e50) = uVar40;
  do {
    uVar40 = RenderingDevice::get_singleton();
    uVar44 = *(ulong *)(this + 0x1e50);
    uStack_110 = 0;
    uStack_10c = 0;
    if (*(long *)(this + 0x1b78) == 0) {
      lVar45 = 0;
LAB_00105daa:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar43,
                 lVar45,"p_variant","variant_defines.size()","",false,false);
LAB_00105de0:
      uVar46 = 0;
    }
    else {
      lVar45 = *(long *)(*(long *)(this + 0x1b78) + -8);
      if (lVar45 <= (long)uVar43) goto LAB_00105daa;
      lVar45 = *(long *)(this + 0x1b88);
      if (lVar45 == 0) goto LAB_00105e78;
      lVar56 = *(long *)(lVar45 + -8);
      if (lVar56 <= (long)uVar43) goto LAB_00105e7b;
      if (*(char *)(lVar45 + uVar43) != '\0') {
        if ((uVar44 == 0) || (*(uint *)(this + 0x1c34) <= (uint)uVar44)) {
LAB_00106699:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar46 = 0;
          goto LAB_00105ba1;
        }
        lVar45 = ((uVar44 & 0xffffffff) % (ulong)*(uint *)(this + 0x1c30)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x1c20) +
                          ((uVar44 & 0xffffffff) / (ulong)*(uint *)(this + 0x1c30)) * 8);
        if (*(int *)(lVar45 + 0x98) != (int)(uVar44 >> 0x20)) {
          if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00106699;
        }
        iVar54 = (int)lVar45;
        if (*(char *)(lVar45 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_05);
          lVar56 = *(long *)(this + 0x1bd8);
          if (lVar56 != 0) {
            lVar60 = 0;
            do {
              if (*(long *)(lVar56 + -8) <= lVar60) break;
              if (*(char *)(lVar56 + lVar60) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_05,iVar54);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_05,iVar54);
              }
              lVar56 = *(long *)(this + 0x1bd8);
              lVar60 = lVar60 + 1;
            } while (lVar56 != 0);
          }
        }
        lVar60 = *(long *)(this + 0x1b98);
        if (lVar60 != 0) {
          lVar56 = *(long *)(lVar60 + -8);
          if ((long)uVar43 < lVar56) {
            uVar44 = (ulong)*(uint *)(lVar60 + uVar43 * 4);
            lVar60 = *(long *)(lVar45 + 0x68);
            if (lVar60 != 0) {
              lVar56 = *(long *)(lVar60 + -8);
              if ((long)uVar44 < lVar56) {
                if (*(long *)(lVar60 + uVar44 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)this_05,iVar54);
                }
                if (*(char *)(lVar45 + 0x90) == '\0') goto LAB_00105de0;
                lVar45 = *(long *)(lVar45 + 0x88);
                if (lVar45 != 0) {
                  lVar56 = *(long *)(lVar45 + -8);
                  if ((long)uVar43 < lVar56) {
                    uVar46 = *(undefined8 *)(lVar45 + uVar43 * 8);
                    goto LAB_00105ba1;
                  }
                  goto LAB_00105e7b;
                }
                goto LAB_00105e78;
              }
              goto LAB_001037fb;
            }
            goto LAB_001037f8;
          }
          goto LAB_00105e7b;
        }
        goto LAB_00105e78;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar46 = 0;
    }
LAB_00105ba1:
    uVar40 = RenderingDevice::compute_pipeline_create(uVar40,uVar46,(StringName *)&local_118);
    *(undefined8 *)(this + ((long)(int)uVar43 + 0x3ca) * 8 + 8) = uVar40;
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_10c,uStack_110) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar45 = CONCAT44(uStack_10c,uStack_110);
        uStack_110 = 0;
        uStack_10c = 0;
        Memory::free_static((void *)(lVar45 + -0x10),false);
      }
    }
    uVar43 = uVar43 + 1;
    PipelineCacheRD::clear();
  } while (uVar43 != 4);
  local_140[0] = 0;
  local_118 = 8;
  uStack_116 = 0;
  uStack_114 = 0;
  uStack_110 = uStack_110 & 0xffffff00;
  uStack_108 = (undefined4)*(undefined8 *)(this + 0x2368);
  uStack_104 = (uint)((ulong)*(undefined8 *)(this + 0x2368) >> 0x20);
  local_f8 = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)local_2b8,(StringName *)&local_118);
  uVar40 = RenderingDevice::get_singleton();
  uVar44 = *(ulong *)(this + 0x1e50);
  uVar43 = (ulong)((byte)this[0x2370] ^ 1);
  if (*(long *)(this + 0x1b78) == 0) {
    lVar45 = 0;
LAB_0010585a:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar43,lVar45
               ,"p_variant","variant_defines.size()","",false,false);
LAB_00105876:
    uVar46 = 0;
  }
  else {
    lVar45 = *(long *)(*(long *)(this + 0x1b78) + -8);
    if (lVar45 <= (long)uVar43) goto LAB_0010585a;
    lVar45 = *(long *)(this + 0x1b88);
    if (lVar45 == 0) {
LAB_00105e78:
      lVar56 = 0;
LAB_00105e7b:
      Var63 = SUB169(ZEXT816(1),0) << 0x40;
      goto LAB_00102e8d;
    }
    lVar56 = *(long *)(lVar45 + -8);
    if (lVar56 <= (long)uVar43) goto LAB_00105e7b;
    if (*(char *)(lVar45 + uVar43) != '\0') {
      if ((uVar44 == 0) || (*(uint *)(this + 0x1c34) <= (uint)uVar44)) {
LAB_00106a57:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar46 = 0;
        goto LAB_00104855;
      }
      lVar45 = ((uVar44 & 0xffffffff) % (ulong)*(uint *)(this + 0x1c30)) * 0xa0 +
               *(long *)(*(long *)(this + 0x1c20) +
                        ((uVar44 & 0xffffffff) / (ulong)*(uint *)(this + 0x1c30)) * 8);
      iVar54 = *(int *)(lVar45 + 0x98);
      if (iVar54 != (int)(uVar44 >> 0x20)) {
LAB_00106a17:
        if (iVar54 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00106a57;
      }
      iVar54 = (int)lVar45;
      if (*(char *)(lVar45 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_05);
        lVar56 = *(long *)(this + 0x1bd8);
        if (lVar56 != 0) {
          lVar60 = 0;
          do {
            if (*(long *)(lVar56 + -8) <= lVar60) break;
            if (*(char *)(lVar56 + lVar60) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_05,iVar54);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_05,iVar54);
            }
            lVar56 = *(long *)(this + 0x1bd8);
            lVar60 = lVar60 + 1;
          } while (lVar56 != 0);
        }
      }
      lVar60 = *(long *)(this + 0x1b98);
      if (lVar60 == 0) goto LAB_00105e78;
      lVar56 = *(long *)(lVar60 + -8);
      if (lVar56 <= (long)uVar43) goto LAB_00105e7b;
      lVar6 = *(long *)(lVar45 + 0x68);
      uVar44 = (ulong)*(uint *)(lVar60 + uVar43 * 4);
      if (lVar6 == 0) goto LAB_001037f8;
      lVar56 = *(long *)(lVar6 + -8);
      if (lVar56 <= (long)uVar44) goto LAB_001037fb;
      if (*(long *)(lVar6 + uVar44 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_05,iVar54);
      }
      if (*(char *)(lVar45 + 0x90) != '\0') {
        lVar45 = *(long *)(lVar45 + 0x88);
        if (lVar45 == 0) goto LAB_00105e78;
        lVar56 = *(long *)(lVar45 + -8);
        if ((long)uVar43 < lVar56) {
          uVar46 = *(undefined8 *)(lVar45 + uVar43 * 8);
          goto LAB_00104855;
        }
        goto LAB_00105e7b;
      }
      goto LAB_00105876;
    }
LAB_001069eb:
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
    uVar46 = 0;
  }
LAB_00104855:
  uVar40 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar40,local_2b8,uVar46,1);
  *(undefined8 *)(this + 0x2358) = uVar40;
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  CowData<String>::_unref((CowData<String> *)&local_1a0);
  local_1a0 = 0;
  local_118 = 0x66e5;
  uVar30 = local_118;
  uStack_116 = 0x11;
  uVar31 = uStack_116;
  uStack_114 = 0;
  uVar32 = uStack_114;
  local_148 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1a8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 - 0x10),false);
    }
  }
  local_140[0] = 0;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_178._8_8_;
  local_178 = auVar25 << 0x40;
  uStack_110 = 0;
  uStack_10c = 0;
  local_118 = uVar30;
  uStack_116 = uVar31;
  uStack_114 = uVar32;
  if (*this == (CopyEffects)0x0) {
    String::parse_latin1((StrRange *)local_2b0);
    ShaderRD::initialize(this_07,local_1a8,local_2b0);
    uVar40 = local_178._0_8_;
    if (local_178._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_178._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_178._8_8_;
        local_178 = auVar19 << 0x40;
        Memory::free_static((void *)(uVar40 + -0x10),false);
      }
    }
    CowData<RenderingDevice::Uniform>::_unref(local_298);
    uVar40 = ShaderRD::version_create();
    *(undefined8 *)(this + 0x2688) = uVar40;
    uVar40 = RenderingDevice::get_singleton();
    uVar43 = *(ulong *)(this + 0x2688);
    uStack_110 = 0;
    uStack_10c = 0;
    if (*(long *)(this + 0x23b0) == 0) {
      lVar45 = 0;
LAB_00106210:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar45,
                 "p_variant","variant_defines.size()","",false,false);
LAB_00106245:
      uVar46 = 0;
    }
    else {
      lVar45 = *(long *)(*(long *)(this + 0x23b0) + -8);
      if (lVar45 < 1) goto LAB_00106210;
      pcVar3 = *(char **)(this + 0x23c0);
      if (pcVar3 == (char *)0x0) goto LAB_00103bc8;
      lVar56 = *(long *)(pcVar3 + -8);
      if (lVar56 < 1) goto LAB_00103bcb;
      if (*pcVar3 != '\0') {
        if ((uVar43 == 0) || (*(uint *)(this + 0x246c) <= (uint)uVar43)) {
LAB_00106c79:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar46 = 0;
          goto LAB_001061a8;
        }
        lVar45 = ((uVar43 & 0xffffffff) % (ulong)*(uint *)(this + 0x2468)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x2458) +
                          ((uVar43 & 0xffffffff) / (ulong)*(uint *)(this + 0x2468)) * 8);
        if (*(int *)(lVar45 + 0x98) != (int)(uVar43 >> 0x20)) {
          if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00106c79;
        }
        iVar54 = (int)lVar45;
        if (*(char *)(lVar45 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_07);
          lVar56 = *(long *)(this + 0x2410);
          if (lVar56 != 0) {
            lVar60 = 0;
            do {
              if (*(long *)(lVar56 + -8) <= lVar60) break;
              if (*(char *)(lVar56 + lVar60) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_07,iVar54);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_07,iVar54);
              }
              lVar56 = *(long *)(this + 0x2410);
              lVar60 = lVar60 + 1;
            } while (lVar56 != 0);
          }
        }
        puVar4 = *(uint **)(this + 0x23d0);
        if (puVar4 == (uint *)0x0) goto LAB_00103bc8;
        lVar56 = *(long *)(puVar4 + -2);
        if (lVar56 < 1) goto LAB_00103bcb;
        uVar44 = (ulong)*puVar4;
        lVar60 = *(long *)(lVar45 + 0x68);
        if (lVar60 == 0) goto LAB_001037f8;
        lVar56 = *(long *)(lVar60 + -8);
        if (lVar56 <= (long)uVar44) goto LAB_001037fb;
        if (*(long *)(lVar60 + uVar44 * 8) != 0) {
          ShaderRD::_compile_version_end((Version *)this_07,iVar54);
        }
        if (*(char *)(lVar45 + 0x90) != '\0') {
          puVar55 = *(undefined8 **)(lVar45 + 0x88);
          if (puVar55 == (undefined8 *)0x0) goto LAB_00103bc8;
          lVar56 = puVar55[-1];
          if (0 < lVar56) {
            uVar46 = *puVar55;
            goto LAB_001061a8;
          }
          goto LAB_00103bcb;
        }
        goto LAB_00106245;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar46 = 0;
    }
LAB_001061a8:
    uVar40 = RenderingDevice::compute_pipeline_create(uVar40,uVar46,(StringName *)&local_118);
    *(undefined8 *)(this + 0x2690) = uVar40;
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_10c,uStack_110) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar45 = CONCAT44(uStack_10c,uStack_110);
        uStack_110 = 0;
        uStack_10c = 0;
        Memory::free_static((void *)(lVar45 + -0x10),false);
      }
    }
    PipelineCacheRD::clear();
    local_204 = _LC52;
    goto LAB_00104cdb;
  }
  String::parse_latin1((StrRange *)local_2b0);
  ShaderRD::initialize(this_08,local_1a8,local_2b0);
  uVar40 = local_178._0_8_;
  if (local_178._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_178._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_178._8_8_;
      local_178 = auVar14 << 0x40;
      Memory::free_static((void *)(uVar40 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  uVar40 = ShaderRD::version_create();
  uStack_190 = 0;
  uStack_18c = 0;
  *(undefined8 *)(this + 0x2688) = uVar40;
  local_118 = 0;
  uStack_116 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_204 = _LC52;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = _LC52;
  local_68 = (local_68 >> 8 & 0xffffff) << 8;
  local_58 = 0;
  local_50._0_8_ = uVar28;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
  local_f8 = uVar41;
  local_118 = 0;
  uStack_116 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uVar43 = *(ulong *)(this + 0x2688);
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_114 = 7;
  local_148 = local_148 & 0xffffff0000000000;
  local_140[0] = local_140[0] & 0xffffffff00000000;
  local_128 = 0;
  local_130 = 0;
  local_158 = 1;
  local_178 = (undefined1  [16])0x0;
  local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
  local_168._12_4_ = uVar27;
  if (*(long *)(this + 0x2528) == 0) {
    lVar45 = 0;
LAB_001058c3:
    uStack_100 = uVar29;
    uStack_fc = uVar33;
    uStack_e4 = uVar29;
    uStack_e0 = uVar33;
    uStack_dc = uVar35;
    local_d8 = uVar37;
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar45,
               "p_variant","variant_defines.size()","",false,false);
LAB_001058f8:
    uVar40 = 0;
  }
  else {
    lVar45 = *(long *)(*(long *)(this + 0x2528) + -8);
    if (lVar45 < 1) goto LAB_001058c3;
    pcVar3 = *(char **)(this + 0x2538);
    uStack_100 = uVar29;
    uStack_fc = uVar33;
    uStack_e4 = uVar29;
    uStack_e0 = uVar33;
    uStack_dc = uVar35;
    local_d8 = uVar37;
    if (pcVar3 == (char *)0x0) goto LAB_00103bc8;
    lVar56 = *(long *)(pcVar3 + -8);
    if (lVar56 < 1) goto LAB_00103bcb;
    if (*pcVar3 != '\0') {
      if ((uVar43 == 0) || (*(uint *)(this + 0x25e4) <= (uint)uVar43)) {
LAB_00106ba2:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar40 = 0;
        goto LAB_00104c10;
      }
      lVar45 = ((uVar43 & 0xffffffff) % (ulong)*(uint *)(this + 0x25e0)) * 0xa0 +
               *(long *)(*(long *)(this + 0x25d0) +
                        ((uVar43 & 0xffffffff) / (ulong)*(uint *)(this + 0x25e0)) * 8);
      if (*(int *)(lVar45 + 0x98) != (int)(uVar43 >> 0x20)) {
        if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00106ba2;
      }
      iVar54 = (int)lVar45;
      if (*(char *)(lVar45 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_08);
        lVar56 = *(long *)(this + 0x2588);
        if (lVar56 != 0) {
          lVar60 = 0;
          do {
            if (*(long *)(lVar56 + -8) <= lVar60) break;
            if (*(char *)(lVar56 + lVar60) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_08,iVar54);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_08,iVar54);
            }
            lVar56 = *(long *)(this + 0x2588);
            lVar60 = lVar60 + 1;
          } while (lVar56 != 0);
        }
      }
      puVar4 = *(uint **)(this + 0x2548);
      if (puVar4 == (uint *)0x0) goto LAB_00103bc8;
      lVar56 = *(long *)(puVar4 + -2);
      if (lVar56 < 1) {
LAB_00103bcb:
        uVar43 = 0;
        Var63 = SUB169(ZEXT816(1),0) << 0x40;
        goto LAB_00102e8d;
      }
      uVar44 = (ulong)*puVar4;
      lVar60 = *(long *)(lVar45 + 0x68);
      if (lVar60 == 0) goto LAB_001037f8;
      lVar56 = *(long *)(lVar60 + -8);
      if (lVar56 <= (long)uVar44) goto LAB_001037fb;
      if (*(long *)(lVar60 + uVar44 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_08,iVar54);
      }
      if (*(char *)(lVar45 + 0x90) != '\0') {
        puVar55 = *(undefined8 **)(lVar45 + 0x88);
        if (puVar55 == (undefined8 *)0x0) goto LAB_00103bc8;
        lVar56 = puVar55[-1];
        if (0 < lVar56) {
          uVar40 = *puVar55;
          goto LAB_00104c10;
        }
        goto LAB_00103bcb;
      }
      goto LAB_001058f8;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    uVar40 = 0;
  }
LAB_00104c10:
  PipelineCacheRD::setup
            ((PipelineCacheRD *)(this + 0x2698),uVar40,5,local_2b0,local_2b8,
             (StringName *)&local_118,(StringName *)&local_68,0,local_280);
  lVar45 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
  lVar45 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
  if (CONCAT44(uStack_18c,uStack_190) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar45 = CONCAT44(uStack_18c,uStack_190);
      uStack_190 = 0;
      uStack_18c = 0;
      Memory::free_static((void *)(lVar45 + -0x10),false);
    }
  }
LAB_00104cdb:
  CowData<String>::_unref((CowData<String> *)&local_1a0);
  local_118 = 0x6413;
  uStack_116 = 0x11;
  uStack_114 = 0;
  local_1b0 = 0;
  local_148 = 0;
  uStack_110 = 0x14;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7cf0;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x25;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x638b;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 1;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x6428;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x12;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7d18;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x2a;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7d48;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x3b;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x63c6;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x17;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  local_148 = 0;
  local_118 = 0x7d88;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0x28;
  uStack_10c = 0;
  String::parse_latin1(local_2b8);
  Vector<String>::push_back(local_1b8);
  uVar43 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(uVar43 - 0x10),false);
    }
  }
  local_140[0] = 0;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = local_178._8_8_;
  local_178 = auVar26 << 0x40;
  local_118 = 0x66e5;
  uStack_116 = 0x11;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  String::parse_latin1((StrRange *)local_2b0);
  ShaderRD::initialize(this_09,local_1b8,local_2b0);
  uVar40 = local_178._0_8_;
  if (local_178._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_178._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_178._8_8_;
      local_178 = auVar15 << 0x40;
      Memory::free_static((void *)(uVar40 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref(local_298);
  cVar38 = (**(code **)(*RendererCompositorRD::singleton + 0xa8))();
  iVar54 = (int)this_09;
  if (cVar38 == '\0') {
    ShaderRD::set_variant_enabled(iVar54,true);
    ShaderRD::set_variant_enabled(iVar54,true);
    ShaderRD::set_variant_enabled(iVar54,true);
    ShaderRD::set_variant_enabled(iVar54,true);
  }
  uVar43 = 0;
  uVar42 = ShaderRD::version_create();
  uVar46 = _UNK_001329f8;
  uVar40 = __LC104;
  uStack_184 = 0;
  uStack_180 = 0;
  *(undefined8 *)(this + 0x2948) = uVar42;
  local_198 = CONCAT31(local_198._1_3_,1);
  uStack_17c = local_204;
  uStack_194 = (undefined4)uVar40;
  uStack_190 = (undefined4)((ulong)uVar40 >> 0x20);
  uStack_18c = (undefined4)uVar46;
  uStack_188 = (undefined4)((ulong)uVar46 >> 0x20);
  local_c8 = (StringName)0x0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = uVar28;
  uStack_a8 = uVar53;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_c0);
  do {
    cVar38 = ShaderRD::is_variant_enabled(iVar54);
    if (cVar38 != '\0') {
      local_98 = (StringName)0x0;
      local_94 = 0;
      local_88 = 0;
      local_80 = uVar28;
      if (((uint)uVar43 & 0xfffffffa) == 2) {
        local_98 = local_c8;
        local_94 = local_c4;
        plVar1 = (long *)(local_b8 + -0x10);
        if (local_b8 != 0) {
          do {
            lVar45 = *plVar1;
            if (lVar45 == 0) goto LAB_001052c6;
            LOCK();
            lVar56 = *plVar1;
            bVar61 = lVar45 == lVar56;
            if (bVar61) {
              *plVar1 = lVar45 + 1;
              lVar56 = lVar45;
            }
            UNLOCK();
          } while (!bVar61);
          if (lVar56 != -1) {
            local_88 = local_b8;
          }
        }
LAB_001052c6:
        local_80 = local_b0;
        uStack_78 = uStack_a8;
      }
      else {
        local_118 = 0;
        uStack_116 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        local_68 = (local_68 >> 8 & 0xffffff) << 8;
        local_58 = 0;
        local_50._8_8_ = uVar53;
        local_50._0_8_ = uVar28;
        uStack_10c = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = local_204;
        uStack_78 = uVar53;
        Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
        lVar45 = local_88;
        local_98 = local_68._0_1_;
        local_94 = local_68._4_4_;
        if (local_88 == local_58) {
          local_80 = local_50._0_8_;
          uStack_78 = local_50._8_8_;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_58 + -0x10),false);
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
              Memory::free_static((void *)(lVar45 + -0x10),false);
            }
          }
          local_80 = local_50._0_8_;
          uStack_78 = local_50._8_8_;
          local_88 = local_58;
        }
      }
      local_128 = 0;
      local_118 = 0;
      uStack_116 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uVar44 = *(ulong *)(this + 0x2948);
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      local_1a0 = 0;
      uStack_114 = 7;
      local_148 = local_148 & 0xffffff0000000000;
      local_140[0] = local_140[0] & 0xffffffff00000000;
      local_130 = 0;
      local_158 = 1;
      local_f8 = uVar41;
      local_178 = (undefined1  [16])0x0;
      local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
      local_168._12_4_ = uVar27;
      if (*(long *)(this + 0x27e8) == 0) {
        lVar45 = 0;
LAB_00105883:
        uStack_100 = uVar29;
        uStack_fc = uVar33;
        uStack_e4 = uVar29;
        uStack_e0 = uVar33;
        uStack_dc = uVar35;
        local_d8 = uVar37;
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar43,
                   lVar45,"p_variant","variant_defines.size()","",false,false);
LAB_001058b9:
        uVar40 = 0;
      }
      else {
        lVar45 = *(long *)(*(long *)(this + 0x27e8) + -8);
        if (lVar45 <= (long)uVar43) goto LAB_00105883;
        lVar45 = *(long *)(this + 0x27f8);
        uStack_100 = uVar29;
        uStack_fc = uVar33;
        uStack_e4 = uVar29;
        uStack_e0 = uVar33;
        uStack_dc = uVar35;
        local_d8 = uVar37;
        if (lVar45 == 0) goto LAB_00105e78;
        lVar56 = *(long *)(lVar45 + -8);
        if (lVar56 <= (long)uVar43) goto LAB_00105e7b;
        if (*(char *)(lVar45 + uVar43) != '\0') {
          if ((uVar44 == 0) || (*(uint *)(this + 0x28a4) <= (uint)uVar44)) {
LAB_00106b03:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
            uVar40 = 0;
            goto LAB_001054a9;
          }
          lVar45 = ((uVar44 & 0xffffffff) % (ulong)*(uint *)(this + 0x28a0)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x2890) +
                            ((uVar44 & 0xffffffff) / (ulong)*(uint *)(this + 0x28a0)) * 8);
          if (*(int *)(lVar45 + 0x98) != (int)(uVar44 >> 0x20)) {
            if (*(int *)(lVar45 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00106b03;
          }
          iVar52 = (int)lVar45;
          if (*(char *)(lVar45 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_09);
            lVar56 = *(long *)(this + 0x2848);
            if (lVar56 != 0) {
              lVar60 = 0;
              do {
                if (*(long *)(lVar56 + -8) <= lVar60) break;
                if (*(char *)(lVar56 + lVar60) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_09,iVar52);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_09,iVar52);
                }
                lVar56 = *(long *)(this + 0x2848);
                lVar60 = lVar60 + 1;
              } while (lVar56 != 0);
            }
          }
          lVar60 = *(long *)(this + 0x2808);
          if (lVar60 != 0) {
            lVar56 = *(long *)(lVar60 + -8);
            if ((long)uVar43 < lVar56) {
              uVar44 = (ulong)*(uint *)(lVar60 + uVar43 * 4);
              lVar60 = *(long *)(lVar45 + 0x68);
              if (lVar60 != 0) {
                lVar56 = *(long *)(lVar60 + -8);
                if ((long)uVar44 < lVar56) {
                  if (*(long *)(lVar60 + uVar44 * 8) != 0) {
                    ShaderRD::_compile_version_end((Version *)this_09,iVar52);
                  }
                  if (*(char *)(lVar45 + 0x90) == '\0') goto LAB_001058b9;
                  lVar45 = *(long *)(lVar45 + 0x88);
                  if (lVar45 != 0) {
                    lVar56 = *(long *)(lVar45 + -8);
                    if ((long)uVar43 < lVar56) {
                      uVar40 = *(undefined8 *)(lVar45 + uVar43 * 8);
                      goto LAB_001054a9;
                    }
                    goto LAB_00105e7b;
                  }
                  goto LAB_00105e78;
                }
                goto LAB_001037fb;
              }
              goto LAB_001037f8;
            }
            goto LAB_00105e7b;
          }
          goto LAB_00105e78;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar40 = 0;
      }
LAB_001054a9:
      PipelineCacheRD::setup(pCVar51,uVar40,5);
      lVar45 = local_130;
      if (local_130 != 0) {
        LOCK();
        plVar1 = (long *)(local_130 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_130 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      lVar45 = local_1a0;
      if (local_1a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_1a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_1a0 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
      lVar45 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar45 + -0x10),false);
        }
      }
    }
    uVar43 = uVar43 + 1;
    pCVar51 = pCVar51 + 0x138;
    if (uVar43 == 8) {
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_b8 + -0x10),false);
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_1b0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* RendererRD::CopyEffects::copy_to_rect(RID, RID, Rect2i const&, bool, bool, bool, bool, bool) */

void __thiscall
RendererRD::CopyEffects::copy_to_rect
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,undefined4 *param_4,char param_5,
          char param_6,char param_7,uint param_8,char param_9)

{
  long *plVar1;
  Version *pVVar2;
  code *pcVar3;
  uint uVar4;
  UniformSetCacheRD *pUVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long in_FS_OFFSET;
  bool bVar20;
  byte bVar21;
  ulong local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  ulong uVar19;
  
  pUVar5 = UniformSetCacheRD::singleton;
  bVar21 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x155;
      pcVar14 = "Parameter \"uniform_set_cache\" is null.";
LAB_001075b9:
      _err_print_error("copy_to_rect","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       uVar10,pcVar14,0,0);
      return;
    }
    goto LAB_001076b3;
  }
  lVar8 = RendererRD::MaterialStorage::get_singleton();
  if (lVar8 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x157;
      pcVar14 = "Parameter \"material_storage\" is null.";
      goto LAB_001075b9;
    }
    goto LAB_001076b3;
  }
  uVar4 = (int)this + 0x918;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x970) = 0;
  puVar15 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
  for (uVar12 = (ulong)((uVar4 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8)) +
                        0x60 >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + (ulong)bVar21 * -2 + 1;
  }
  if (param_5 != '\0') {
    *(undefined4 *)(this + 0x930) = 0x20;
  }
  if (param_6 != '\0') {
    *(uint *)(this + 0x930) = *(uint *)(this + 0x930) | 0x40;
  }
  if (param_7 != '\0') {
    *(uint *)(this + 0x930) = *(uint *)(this + 0x930) | 0x80;
  }
  if (param_9 != '\0') {
    *(uint *)(this + 0x930) = *(uint *)(this + 0x930) | 0x100;
  }
  lVar16 = 0;
  local_80 = 0;
  *(undefined4 *)(this + 0x918) = *param_4;
  *(undefined4 *)(this + 0x91c) = param_4[1];
  *(undefined4 *)(this + 0x920) = param_4[2];
  *(undefined4 *)(this + 0x924) = param_4[3];
  *(undefined4 *)(this + 0x928) = *param_4;
  *(undefined4 *)(this + 0x92c) = param_4[1];
  local_58[0] = *(long *)(lVar8 + 0x50);
  local_58[1] = param_2;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar12 = local_80;
  if (iVar7 == 0) {
    do {
      if (uVar12 == 0) {
        lVar8 = 0;
LAB_00107363:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        lVar8 = *(long *)(uVar12 - 8);
        if (lVar8 <= lVar16) goto LAB_00107363;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(long *)(local_80 + lVar16 * 8) = local_58[lVar16];
        uVar12 = local_80;
      }
      if (lVar16 != 0) break;
      lVar16 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar12 - 0x10);
  local_c8[0] = 0;
  if (uVar12 != 0) {
    do {
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_00106eb1;
      LOCK();
      lVar16 = *plVar1;
      bVar20 = lVar8 == lVar16;
      if (bVar20) {
        *plVar1 = lVar8 + 1;
        lVar16 = lVar8;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar16 != -1) {
      local_c8[0] = local_80;
    }
LAB_00106eb1:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 - 0x10),false);
      }
    }
  }
  local_b0 = 0;
  local_98[0] = 0;
  uVar12 = *(ulong *)(this + 0xaf0);
  local_b8 = _LC20;
  uVar18 = (param_8 & 0xff) + 4;
  uVar19 = (ulong)uVar18;
  local_a8 = param_3;
  if (*(long *)(this + 0x990) == 0) {
    lVar8 = 0;
LAB_00107613:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar19,lVar8,
               "p_variant","variant_defines.size()","",false,false);
LAB_00107008:
    _err_print_error("copy_to_rect","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x179,
                     "Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x990) + -8);
    if (lVar8 <= (long)uVar19) goto LAB_00107613;
    lVar8 = *(long *)(this + 0x9a0);
    uVar13 = uVar19;
    if (lVar8 == 0) {
LAB_00107420:
      lVar16 = 0;
      uVar13 = uVar19;
LAB_00107441:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar16,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar16 = *(long *)(lVar8 + -8);
    if (lVar16 <= (long)uVar19) goto LAB_00107441;
    if (*(char *)(lVar8 + uVar19) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00107008;
    }
    if ((uVar12 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar12)) {
LAB_001073f0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00107008;
    }
    lVar8 = ((uVar12 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
            *(long *)(*(long *)(this + 0xa38) +
                     ((uVar12 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
    if (*(int *)(lVar8 + 0x98) != (int)(uVar12 >> 0x20)) {
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001073f0;
    }
    pVVar2 = (Version *)(this + 0x978);
    iVar7 = (int)lVar8;
    if (*(char *)(lVar8 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar16 = *(long *)(this + 0x9f0);
      if (lVar16 != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(lVar16 + -8) <= lVar17) break;
          if (*(char *)(lVar16 + lVar17) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar7);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar7);
          }
          lVar16 = *(long *)(this + 0x9f0);
          lVar17 = lVar17 + 1;
        } while (lVar16 != 0);
      }
    }
    lVar17 = *(long *)(this + 0x9b0);
    if (lVar17 == 0) goto LAB_00107420;
    lVar16 = *(long *)(lVar17 + -8);
    if (lVar16 <= (long)uVar19) goto LAB_00107441;
    uVar13 = (ulong)*(uint *)(lVar17 + uVar19 * 4);
    lVar17 = *(long *)(lVar8 + 0x68);
    if (lVar17 == 0) {
      lVar16 = 0;
      goto LAB_00107441;
    }
    lVar16 = *(long *)(lVar17 + -8);
    if (lVar16 <= (long)uVar13) goto LAB_00107441;
    if (*(long *)(lVar17 + uVar13 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar7);
    }
    uVar12 = local_c8[0];
    if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_00107008;
    lVar8 = *(long *)(lVar8 + 0x88);
    if (lVar8 == 0) goto LAB_00107420;
    lVar16 = *(long *)(lVar8 + -8);
    uVar13 = uVar19;
    if (lVar16 <= (long)uVar19) goto LAB_00107441;
    lVar8 = *(long *)(lVar8 + uVar19 * 8);
    if (lVar8 == 0) goto LAB_00107008;
    RenderingDevice::get_singleton();
    pvVar9 = (void *)RenderingDevice::compute_list_begin();
    uVar10 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar10,pvVar9,*(undefined8 *)(this + (long)(int)uVar18 * 8 + 0xaf8));
    uVar10 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_88 = 1;
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    if (uVar12 == 0) {
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
LAB_0010750a:
      uVar10 = RenderingDevice::get_singleton();
      local_80 = local_80 & 0xffffffffffffff00;
      local_88 = _LC20;
LAB_00107542:
      local_68[0] = 0;
      local_78 = local_a8;
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,3);
      lVar16 = 0;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
      lVar16 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
      if (lVar16 == 0) goto LAB_0010750a;
      LOCK();
      plVar1 = (long *)(lVar16 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
      lVar16 = local_98[0];
      uVar6 = local_b0;
      uVar11 = local_b8;
      uVar10 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = uVar11;
      local_80 = CONCAT71(local_80._1_7_,uVar6);
      local_78 = local_a8;
      if (lVar16 == 0) goto LAB_00107542;
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar17 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,3);
      if (lVar17 != 0) {
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar16 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          lVar16 = local_98[0];
        }
      }
    }
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar8,pvVar9,uVar4);
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch_threads(lVar8,(uint)pvVar9,param_4[2],param_4[3]);
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
    if (lVar16 != 0) {
      LOCK();
      plVar1 = (long *)(lVar16 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
  }
  if (local_c8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_c8[0] - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8[0] - 0x10),false);
        return;
      }
      goto LAB_001076b3;
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001076b3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::copy_cubemap_to_panorama(RID, RID, Vector2i const&, float, bool) */

void __thiscall
RendererRD::CopyEffects::copy_cubemap_to_panorama
          (undefined4 param_1,CopyEffects *this,undefined8 param_3,undefined8 param_4,uint *param_5,
          uint param_6)

{
  long *plVar1;
  Version *pVVar2;
  code *pcVar3;
  uint uVar4;
  UniformSetCacheRD *pUVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long in_FS_OFFSET;
  bool bVar20;
  byte bVar21;
  ulong local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  ulong uVar19;
  
  pUVar5 = UniformSetCacheRD::singleton;
  bVar21 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x186;
      pcVar14 = "Parameter \"uniform_set_cache\" is null.";
LAB_00107f29:
      _err_print_error("copy_cubemap_to_panorama",
                       "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar10,pcVar14,0,0);
      return;
    }
    goto LAB_00108023;
  }
  lVar8 = RendererRD::MaterialStorage::get_singleton();
  if (lVar8 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x188;
      pcVar14 = "Parameter \"material_storage\" is null.";
      goto LAB_00107f29;
    }
    goto LAB_00108023;
  }
  uVar4 = (int)this + 0x918;
  lVar16 = 0;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x970) = 0;
  puVar15 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
  for (uVar12 = (ulong)((uVar4 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8)) +
                        0x60 >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + (ulong)bVar21 * -2 + 1;
  }
  local_80 = 0;
  *(uint *)(this + 0x920) = *param_5;
  uVar18 = param_5[1];
  *(undefined4 *)(this + 0x958) = param_1;
  *(uint *)(this + 0x924) = uVar18;
  local_58[0] = *(long *)(lVar8 + 0x50);
  local_58[1] = param_3;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar12 = local_80;
  if (iVar7 == 0) {
    do {
      if (uVar12 == 0) {
        lVar8 = 0;
LAB_00107cd3:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        lVar8 = *(long *)(uVar12 - 8);
        if (lVar8 <= lVar16) goto LAB_00107cd3;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(long *)(local_80 + lVar16 * 8) = local_58[lVar16];
        uVar12 = local_80;
      }
      if (lVar16 != 0) break;
      lVar16 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar12 - 0x10);
  local_c8[0] = 0;
  if (uVar12 != 0) {
    do {
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_0010781b;
      LOCK();
      lVar16 = *plVar1;
      bVar20 = lVar8 == lVar16;
      if (bVar20) {
        *plVar1 = lVar8 + 1;
        lVar16 = lVar8;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar16 != -1) {
      local_c8[0] = local_80;
    }
LAB_0010781b:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 - 0x10),false);
      }
    }
  }
  local_b0 = 0;
  local_98[0] = 0;
  uVar12 = *(ulong *)(this + 0xaf0);
  local_b8 = _LC20;
  uVar18 = (param_6 & 0xff) + 0xb;
  uVar19 = (ulong)uVar18;
  local_a8 = param_4;
  if (*(long *)(this + 0x990) == 0) {
    lVar8 = 0;
LAB_00107f83:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar19,lVar8,
               "p_variant","variant_defines.size()","",false,false);
LAB_00107973:
    _err_print_error("copy_cubemap_to_panorama",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x19c,
                     "Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x990) + -8);
    if (lVar8 <= (long)uVar19) goto LAB_00107f83;
    lVar8 = *(long *)(this + 0x9a0);
    uVar13 = uVar19;
    if (lVar8 == 0) {
LAB_00107d90:
      lVar16 = 0;
      uVar13 = uVar19;
LAB_00107db1:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar16,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar16 = *(long *)(lVar8 + -8);
    if (lVar16 <= (long)uVar19) goto LAB_00107db1;
    if (*(char *)(lVar8 + uVar19) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00107973;
    }
    if ((uVar12 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar12)) {
LAB_00107d60:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00107973;
    }
    lVar8 = ((uVar12 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
            *(long *)(*(long *)(this + 0xa38) +
                     ((uVar12 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
    if (*(int *)(lVar8 + 0x98) != (int)(uVar12 >> 0x20)) {
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00107d60;
    }
    pVVar2 = (Version *)(this + 0x978);
    iVar7 = (int)lVar8;
    if (*(char *)(lVar8 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar16 = *(long *)(this + 0x9f0);
      if (lVar16 != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(lVar16 + -8) <= lVar17) break;
          if (*(char *)(lVar16 + lVar17) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar7);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar7);
          }
          lVar16 = *(long *)(this + 0x9f0);
          lVar17 = lVar17 + 1;
        } while (lVar16 != 0);
      }
    }
    lVar17 = *(long *)(this + 0x9b0);
    if (lVar17 == 0) goto LAB_00107d90;
    lVar16 = *(long *)(lVar17 + -8);
    if (lVar16 <= (long)uVar19) goto LAB_00107db1;
    uVar13 = (ulong)*(uint *)(lVar17 + uVar19 * 4);
    lVar17 = *(long *)(lVar8 + 0x68);
    if (lVar17 == 0) {
      lVar16 = 0;
      goto LAB_00107db1;
    }
    lVar16 = *(long *)(lVar17 + -8);
    if (lVar16 <= (long)uVar13) goto LAB_00107db1;
    if (*(long *)(lVar17 + uVar13 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar7);
    }
    uVar12 = local_c8[0];
    if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_00107973;
    lVar8 = *(long *)(lVar8 + 0x88);
    if (lVar8 == 0) goto LAB_00107d90;
    lVar16 = *(long *)(lVar8 + -8);
    uVar13 = uVar19;
    if (lVar16 <= (long)uVar19) goto LAB_00107db1;
    lVar8 = *(long *)(lVar8 + uVar19 * 8);
    if (lVar8 == 0) goto LAB_00107973;
    RenderingDevice::get_singleton();
    pvVar9 = (void *)RenderingDevice::compute_list_begin();
    uVar10 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar10,pvVar9,*(undefined8 *)(this + (long)(int)uVar18 * 8 + 0xaf8));
    uVar10 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_88 = 1;
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    if (uVar12 == 0) {
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
LAB_00107e7a:
      uVar10 = RenderingDevice::get_singleton();
      local_80 = local_80 & 0xffffffffffffff00;
      local_88 = _LC20;
LAB_00107eb2:
      local_68[0] = 0;
      local_78 = local_a8;
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,3);
      lVar16 = 0;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
      lVar16 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
      if (lVar16 == 0) goto LAB_00107e7a;
      LOCK();
      plVar1 = (long *)(lVar16 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
      lVar16 = local_98[0];
      uVar6 = local_b0;
      uVar11 = local_b8;
      uVar10 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = uVar11;
      local_80 = CONCAT71(local_80._1_7_,uVar6);
      local_78 = local_a8;
      if (lVar16 == 0) goto LAB_00107eb2;
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar17 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,3);
      if (lVar17 != 0) {
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar16 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          lVar16 = local_98[0];
        }
      }
    }
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar8,pvVar9,uVar4);
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch_threads(lVar8,(uint)pvVar9,*param_5,param_5[1]);
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
    if (lVar16 != 0) {
      LOCK();
      plVar1 = (long *)(lVar16 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
  }
  if (local_c8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_c8[0] - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8[0] - 0x10),false);
        return;
      }
      goto LAB_00108023;
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108023:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::copy_depth_to_rect(RID, RID, Rect2i const&, bool) */

void __thiscall
RendererRD::CopyEffects::copy_depth_to_rect
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,undefined4 *param_4,char param_5)

{
  long *plVar1;
  Version *pVVar2;
  code *pcVar3;
  uint uVar4;
  UniformSetCacheRD *pUVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  byte bVar19;
  ulong local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  bVar19 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x1a9;
      pcVar14 = "Parameter \"uniform_set_cache\" is null.";
LAB_00108879:
      _err_print_error("copy_depth_to_rect","servers/rendering/renderer_rd/effects/copy_effects.cpp"
                       ,uVar12,pcVar14,0,0);
      return;
    }
    goto LAB_00108973;
  }
  lVar8 = RendererRD::MaterialStorage::get_singleton();
  if (lVar8 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x1ab;
      pcVar14 = "Parameter \"material_storage\" is null.";
      goto LAB_00108879;
    }
    goto LAB_00108973;
  }
  uVar4 = (int)this + 0x918;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x970) = 0;
  puVar16 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
  for (uVar13 = (ulong)((uVar4 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8)) +
                        0x60 >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar16 = 0;
    puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
  }
  if (param_5 != '\0') {
    *(undefined4 *)(this + 0x930) = 0x20;
  }
  local_80 = 0;
  *(undefined4 *)(this + 0x920) = param_4[2];
  *(undefined4 *)(this + 0x924) = param_4[3];
  *(undefined4 *)(this + 0x928) = *param_4;
  *(undefined4 *)(this + 0x92c) = param_4[1];
  local_58[0] = *(long *)(lVar8 + 0x50);
  local_58[1] = param_2;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar13 = local_80;
  if (iVar7 == 0) {
    lVar8 = 0;
    do {
      if (uVar13 == 0) {
        lVar17 = 0;
LAB_0010863b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar17,"p_index","size()","",false,
                   false);
      }
      else {
        lVar17 = *(long *)(uVar13 - 8);
        if (lVar17 <= lVar8) goto LAB_0010863b;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(long *)(local_80 + lVar8 * 8) = local_58[lVar8];
        uVar13 = local_80;
      }
      if (lVar8 != 0) break;
      lVar8 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar13 - 0x10);
  local_c8[0] = 0;
  if (uVar13 != 0) {
    do {
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_00108195;
      LOCK();
      lVar17 = *plVar1;
      bVar18 = lVar8 == lVar17;
      if (bVar18) {
        *plVar1 = lVar8 + 1;
        lVar17 = lVar8;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar17 != -1) {
      local_c8[0] = local_80;
    }
LAB_00108195:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 - 0x10),false);
      }
    }
  }
  uVar12 = _LC20;
  local_b0 = 0;
  uVar13 = *(ulong *)(this + 0xaf0);
  local_98[0] = 0;
  local_b8 = _LC20;
  local_a8 = param_3;
  if (*(long *)(this + 0x990) == 0) {
    lVar8 = 0;
LAB_001088d3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,6,lVar8,
               "p_variant","variant_defines.size()","",false,false);
LAB_001082de:
    _err_print_error("copy_depth_to_rect","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x1c1,"Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x990) + -8);
    if (lVar8 < 7) goto LAB_001088d3;
    lVar8 = *(long *)(this + 0x9a0);
    if (lVar8 == 0) {
LAB_001086f8:
      lVar17 = 0;
LAB_001086fb:
      uVar13 = 6;
LAB_0010871b:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar17,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar17 = *(long *)(lVar8 + -8);
    if (lVar17 < 7) goto LAB_001086fb;
    if (*(char *)(lVar8 + 6) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_001082de;
    }
    if ((uVar13 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar13)) {
LAB_001086c8:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_001082de;
    }
    lVar8 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
            *(long *)(*(long *)(this + 0xa38) +
                     ((uVar13 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
    if (*(int *)(lVar8 + 0x98) != (int)(uVar13 >> 0x20)) {
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001086c8;
    }
    pVVar2 = (Version *)(this + 0x978);
    iVar7 = (int)lVar8;
    if (*(char *)(lVar8 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar17 = *(long *)(this + 0x9f0);
      if (lVar17 != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(lVar17 + -8) <= lVar15) break;
          if (*(char *)(lVar17 + lVar15) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar7);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar7);
          }
          lVar17 = *(long *)(this + 0x9f0);
          lVar15 = lVar15 + 1;
        } while (lVar17 != 0);
      }
    }
    lVar15 = *(long *)(this + 0x9b0);
    if (lVar15 == 0) goto LAB_001086f8;
    lVar17 = *(long *)(lVar15 + -8);
    if (lVar17 < 7) goto LAB_001086fb;
    uVar13 = (ulong)*(uint *)(lVar15 + 0x18);
    lVar15 = *(long *)(lVar8 + 0x68);
    if (lVar15 == 0) {
      lVar17 = 0;
      goto LAB_0010871b;
    }
    lVar17 = *(long *)(lVar15 + -8);
    if (lVar17 <= (long)uVar13) goto LAB_0010871b;
    if (*(long *)(lVar15 + uVar13 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar7);
    }
    uVar13 = local_c8[0];
    if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_001082de;
    lVar8 = *(long *)(lVar8 + 0x88);
    if (lVar8 == 0) goto LAB_001086f8;
    lVar17 = *(long *)(lVar8 + -8);
    if (lVar17 < 7) goto LAB_001086fb;
    lVar8 = *(long *)(lVar8 + 0x30);
    if (lVar8 == 0) goto LAB_001082de;
    RenderingDevice::get_singleton();
    pvVar9 = (void *)RenderingDevice::compute_list_begin();
    uVar10 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline(uVar10,pvVar9,*(undefined8 *)(this + 0xb28))
    ;
    uVar10 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_88 = 1;
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    if (uVar13 == 0) {
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
LAB_001087d2:
      uVar10 = RenderingDevice::get_singleton();
      local_88 = uVar12;
      local_80 = local_80 & 0xffffffffffffff00;
LAB_00108803:
      local_68[0] = 0;
      local_78 = local_a8;
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar12,3);
      lVar17 = 0;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
      lVar17 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
      if (lVar17 == 0) goto LAB_001087d2;
      LOCK();
      plVar1 = (long *)(lVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
      lVar17 = local_98[0];
      uVar6 = local_b0;
      uVar12 = local_b8;
      uVar10 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = uVar12;
      local_80 = CONCAT71(local_80._1_7_,uVar6);
      local_78 = local_a8;
      if (lVar17 == 0) goto LAB_00108803;
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar15 = local_68[0];
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar12,3);
      if (lVar15 != 0) {
        LOCK();
        plVar1 = (long *)(lVar15 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar17 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          lVar17 = local_98[0];
        }
      }
    }
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar8,pvVar9,uVar4);
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch_threads(lVar8,(uint)pvVar9,param_4[2],param_4[3]);
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
    if (lVar17 != 0) {
      LOCK();
      plVar1 = (long *)(lVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
  }
  if (local_c8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_c8[0] - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8[0] - 0x10),false);
        return;
      }
      goto LAB_00108973;
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108973:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::copy_depth_to_rect_and_linearize(RID, RID, Rect2i const&, bool, float,
   float) */

void __thiscall
RendererRD::CopyEffects::copy_depth_to_rect_and_linearize
          (undefined4 param_1,undefined4 param_2,CopyEffects *this,undefined8 param_4,
          undefined8 param_5,undefined4 *param_6,char param_7)

{
  long *plVar1;
  Version *pVVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  UniformSetCacheRD *pUVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  byte bVar20;
  ulong local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar6 = UniformSetCacheRD::singleton;
  bVar20 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x1ce;
      pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_001091e9:
      _err_print_error("copy_depth_to_rect_and_linearize",
                       "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar13,pcVar15,0,0);
      return;
    }
    goto LAB_001092e3;
  }
  lVar9 = RendererRD::MaterialStorage::get_singleton();
  if (lVar9 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x1d0;
      pcVar15 = "Parameter \"material_storage\" is null.";
      goto LAB_001091e9;
    }
    goto LAB_001092e3;
  }
  uVar5 = (int)this + 0x918;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x970) = 0;
  puVar17 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
  for (uVar14 = (ulong)((uVar5 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8)) +
                        0x60 >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar17 = 0;
    puVar17 = puVar17 + (ulong)bVar20 * -2 + 1;
  }
  if (param_7 != '\0') {
    *(undefined4 *)(this + 0x930) = 0x20;
  }
  local_80 = 0;
  *(undefined4 *)(this + 0x920) = param_6[2];
  *(undefined4 *)(this + 0x924) = param_6[3];
  *(undefined4 *)(this + 0x928) = *param_6;
  uVar3 = param_6[1];
  *(ulong *)(this + 0x958) = CONCAT44(param_1,param_2);
  *(undefined4 *)(this + 0x92c) = uVar3;
  local_58[0] = *(long *)(lVar9 + 0x50);
  local_58[1] = param_4;
  iVar8 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar14 = local_80;
  if (iVar8 == 0) {
    lVar9 = 0;
    do {
      if (uVar14 == 0) {
        lVar18 = 0;
LAB_00108fa3:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar18,"p_index","size()","",false,
                   false);
      }
      else {
        lVar18 = *(long *)(uVar14 - 8);
        if (lVar18 <= lVar9) goto LAB_00108fa3;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(long *)(local_80 + lVar9 * 8) = local_58[lVar9];
        uVar14 = local_80;
      }
      if (lVar9 != 0) break;
      lVar9 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar14 - 0x10);
  local_c8[0] = 0;
  if (uVar14 != 0) {
    do {
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_00108afb;
      LOCK();
      lVar18 = *plVar1;
      bVar19 = lVar9 == lVar18;
      if (bVar19) {
        *plVar1 = lVar9 + 1;
        lVar18 = lVar9;
      }
      UNLOCK();
    } while (!bVar19);
    if (lVar18 != -1) {
      local_c8[0] = local_80;
    }
LAB_00108afb:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 - 0x10),false);
      }
    }
  }
  uVar13 = _LC20;
  local_b0 = 0;
  uVar14 = *(ulong *)(this + 0xaf0);
  local_98[0] = 0;
  local_b8 = _LC20;
  local_a8 = param_5;
  if (*(long *)(this + 0x990) == 0) {
    lVar9 = 0;
LAB_00109243:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,10,lVar9,
               "p_variant","variant_defines.size()","",false,false);
LAB_00108c44:
    _err_print_error("copy_depth_to_rect_and_linearize",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x1e8,
                     "Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar9 = *(long *)(*(long *)(this + 0x990) + -8);
    if (lVar9 < 0xb) goto LAB_00109243;
    lVar9 = *(long *)(this + 0x9a0);
    if (lVar9 == 0) {
LAB_00109060:
      lVar18 = 0;
LAB_00109063:
      uVar14 = 10;
LAB_00109083:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar18,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar18 = *(long *)(lVar9 + -8);
    if (lVar18 < 0xb) goto LAB_00109063;
    if (*(char *)(lVar9 + 10) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00108c44;
    }
    if ((uVar14 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar14)) {
LAB_00109030:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00108c44;
    }
    lVar9 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
            *(long *)(*(long *)(this + 0xa38) +
                     ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
    if (*(int *)(lVar9 + 0x98) != (int)(uVar14 >> 0x20)) {
      if (*(int *)(lVar9 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00109030;
    }
    pVVar2 = (Version *)(this + 0x978);
    iVar8 = (int)lVar9;
    if (*(char *)(lVar9 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar18 = *(long *)(this + 0x9f0);
      if (lVar18 != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(lVar18 + -8) <= lVar16) break;
          if (*(char *)(lVar18 + lVar16) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar8);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar8);
          }
          lVar18 = *(long *)(this + 0x9f0);
          lVar16 = lVar16 + 1;
        } while (lVar18 != 0);
      }
    }
    lVar16 = *(long *)(this + 0x9b0);
    if (lVar16 == 0) goto LAB_00109060;
    lVar18 = *(long *)(lVar16 + -8);
    if (lVar18 < 0xb) goto LAB_00109063;
    uVar14 = (ulong)*(uint *)(lVar16 + 0x28);
    lVar16 = *(long *)(lVar9 + 0x68);
    if (lVar16 == 0) {
      lVar18 = 0;
      goto LAB_00109083;
    }
    lVar18 = *(long *)(lVar16 + -8);
    if (lVar18 <= (long)uVar14) goto LAB_00109083;
    if (*(long *)(lVar16 + uVar14 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar8);
    }
    uVar14 = local_c8[0];
    if (*(char *)(lVar9 + 0x90) == '\0') goto LAB_00108c44;
    lVar9 = *(long *)(lVar9 + 0x88);
    if (lVar9 == 0) goto LAB_00109060;
    lVar18 = *(long *)(lVar9 + -8);
    if (lVar18 < 0xb) goto LAB_00109063;
    lVar9 = *(long *)(lVar9 + 0x50);
    if (lVar9 == 0) goto LAB_00108c44;
    RenderingDevice::get_singleton();
    pvVar10 = (void *)RenderingDevice::compute_list_begin();
    uVar11 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar11,pvVar10,*(undefined8 *)(this + 0xb48));
    uVar11 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_88 = 1;
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    if (uVar14 == 0) {
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
LAB_00109142:
      uVar11 = RenderingDevice::get_singleton();
      local_88 = uVar13;
      local_80 = local_80 & 0xffffffffffffff00;
LAB_00109173:
      local_68[0] = 0;
      local_78 = local_a8;
      uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar13,3);
      lVar18 = 0;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
      lVar18 = local_68[0];
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
      if (lVar18 == 0) goto LAB_00109142;
      LOCK();
      plVar1 = (long *)(lVar18 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
      lVar18 = local_98[0];
      uVar7 = local_b0;
      uVar13 = local_b8;
      uVar11 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = uVar13;
      local_80 = CONCAT71(local_80._1_7_,uVar7);
      local_78 = local_a8;
      if (lVar18 == 0) goto LAB_00109173;
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar16 = local_68[0];
      uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,3,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar13,3);
      if (lVar16 != 0) {
        LOCK();
        plVar1 = (long *)(lVar16 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar18 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          lVar18 = local_98[0];
        }
      }
    }
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar9,pvVar10,uVar5);
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch_threads(lVar9,(uint)pvVar10,param_6[2],param_6[3]);
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
    if (lVar18 != 0) {
      LOCK();
      plVar1 = (long *)(lVar18 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
  }
  if (local_c8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_c8[0] - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8[0] - 0x10),false);
        return;
      }
      goto LAB_001092e3;
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001092e3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::copy_to_atlas_fb(RID, RID, Rect2 const&, long, bool, bool) */

void __thiscall
RendererRD::CopyEffects::copy_to_atlas_fb
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,undefined4 *param_4,void *param_5
          ,uint param_6,uint param_7)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  undefined4 uVar5;
  code *pcVar6;
  UniformSetCacheRD *pUVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  ulong local_98 [2];
  ulong local_88;
  ulong local_80 [3];
  long local_68 [2];
  long local_58 [5];
  
  pUVar7 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x1f5;
      pcVar16 = "Parameter \"uniform_set_cache\" is null.";
LAB_00109a7c:
      _err_print_error("copy_to_atlas_fb","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       uVar10,pcVar16,0,0);
      return;
    }
    goto LAB_00109ba6;
  }
  lVar9 = RendererRD::MaterialStorage::get_singleton();
  if (lVar9 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x1f7;
      pcVar16 = "Parameter \"material_storage\" is null.";
      goto LAB_00109a7c;
    }
    goto LAB_00109ba6;
  }
  *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0xb60) = *param_4;
  *(undefined4 *)(this + 0xb64) = param_4[1];
  *(undefined4 *)(this + 0xb68) = param_4[2];
  uVar5 = param_4[3];
  lVar19 = 0;
  *(uint *)(this + 0xb7c) = (param_6 & 0xff) + 2;
  local_58[0] = *(long *)(lVar9 + 0x50);
  *(undefined4 *)(this + 0xb78) = 0x3f800000;
  *(undefined4 *)(this + 0xb6c) = uVar5;
  local_80[0] = 0;
  local_58[1] = param_2;
  iVar8 = CowData<RID>::resize<false>((CowData<RID> *)local_80,2);
  uVar13 = local_80[0];
  if (iVar8 == 0) {
    do {
      if (uVar13 == 0) {
        lVar12 = 0;
LAB_00109632:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar19,lVar12,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar12 = *(long *)(uVar13 - 8);
        if (lVar12 <= lVar19) goto LAB_00109632;
        CowData<RID>::_copy_on_write((CowData<RID> *)local_80);
        *(long *)(local_80[0] + lVar19 * 8) = local_58[lVar19];
        uVar13 = local_80[0];
      }
      if (lVar19 != 0) break;
      lVar19 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar13 - 0x10);
  local_98[0] = 0;
  if (uVar13 != 0) {
    do {
      lVar19 = *plVar1;
      if (lVar19 == 0) goto LAB_00109466;
      LOCK();
      lVar12 = *plVar1;
      bVar20 = lVar19 == lVar12;
      if (bVar20) {
        *plVar1 = lVar19 + 1;
        lVar12 = lVar19;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar12 != -1) {
      local_98[0] = local_80[0];
    }
LAB_00109466:
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80[0] - 0x10),false);
      }
    }
  }
  uVar13 = *(ulong *)(this + 0xd08);
  uVar17 = (ulong)param_7 & 0xff;
  if (*(long *)(this + 0xba8) == 0) {
    lVar19 = 0;
LAB_00109ace:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar17,lVar19
               ,"p_variant","variant_defines.size()","",false,false);
LAB_0010958a:
    _err_print_error("copy_to_atlas_fb","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x20e,"Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
LAB_00109970:
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_98[0] - 0x10),false);
          return;
        }
        goto LAB_00109ba6;
      }
    }
  }
  else {
    lVar19 = *(long *)(*(long *)(this + 0xba8) + -8);
    if (lVar19 <= (long)uVar17) goto LAB_00109ace;
    lVar19 = *(long *)(this + 3000);
    uVar15 = uVar17;
    if (lVar19 == 0) {
LAB_001097d5:
      lVar12 = 0;
      uVar15 = uVar17;
LAB_001097f6:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar12 = *(long *)(lVar19 + -8);
    if (lVar12 <= (long)uVar17) goto LAB_001097f6;
    if (*(char *)(lVar19 + uVar17) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010958a;
    }
    if ((uVar13 == 0) || (*(uint *)(this + 0xc64) <= (uint)uVar13)) {
LAB_001097ab:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010958a;
    }
    lVar19 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(this + 0xc60)) * 0xa0 +
             *(long *)(*(long *)(this + 0xc50) +
                      ((uVar13 & 0xffffffff) / (ulong)*(uint *)(this + 0xc60)) * 8);
    if (*(int *)(lVar19 + 0x98) != (int)(uVar13 >> 0x20)) {
      if (*(int *)(lVar19 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001097ab;
    }
    pVVar2 = (Version *)(this + 0xb90);
    iVar8 = (int)lVar19;
    if (*(char *)(lVar19 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar12 = *(long *)(this + 0xc08);
      if (lVar12 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(lVar12 + -8) <= lVar18) break;
          if (*(char *)(lVar12 + lVar18) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar8);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar8);
          }
          lVar12 = *(long *)(this + 0xc08);
          lVar18 = lVar18 + 1;
        } while (lVar12 != 0);
      }
    }
    lVar18 = *(long *)(this + 0xbc8);
    if (lVar18 == 0) goto LAB_001097d5;
    lVar12 = *(long *)(lVar18 + -8);
    if (lVar12 <= (long)uVar17) goto LAB_001097f6;
    uVar15 = (ulong)*(uint *)(lVar18 + uVar17 * 4);
    lVar18 = *(long *)(lVar19 + 0x68);
    if (lVar18 == 0) {
      lVar12 = 0;
      goto LAB_001097f6;
    }
    lVar12 = *(long *)(lVar18 + -8);
    if (lVar12 <= (long)uVar15) goto LAB_001097f6;
    if (*(long *)(lVar18 + uVar15 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar8);
    }
    if (*(char *)(lVar19 + 0x90) == '\0') goto LAB_0010958a;
    lVar19 = *(long *)(lVar19 + 0x88);
    if (lVar19 == 0) goto LAB_001097d5;
    lVar12 = *(long *)(lVar19 + -8);
    uVar15 = uVar17;
    if (lVar12 <= (long)uVar17) goto LAB_001097f6;
    lVar19 = *(long *)(lVar19 + uVar17 * 8);
    if (lVar19 == 0) goto LAB_0010958a;
    uVar10 = RenderingDevice::get_singleton();
    uVar11 = RenderingDevice::get_singleton();
    pCVar3 = this + (ulong)(-(int)uVar17 & 0x138) + 0xd10;
    lVar12 = RenderingDevice::framebuffer_get_format(uVar11,param_3);
    if (*(long *)(pCVar3 + 0x40) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar12 = 0;
    }
    else {
      while( true ) {
        uVar13 = local_88 >> 8;
        local_88 = uVar13 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar13 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      uVar13 = (ulong)param_7 & 0xff;
      if (*(uint *)(this + uVar13 * 0x138 + 0xe40) != 0) {
        plVar14 = *(long **)(this + uVar13 * 0x138 + 0xe38);
        plVar1 = plVar14 + (ulong)*(uint *)(this + uVar13 * 0x138 + 0xe40) * 5;
        do {
          if ((((*plVar14 == -1) && (lVar12 == plVar14[1])) &&
              (this[uVar13 * 0x138 + 0xd5e] == *(CopyEffects *)((long)plVar14 + 0x14))) &&
             (((int)plVar14[2] == 0 && ((int)plVar14[3] == 0)))) {
            lVar12 = plVar14[4];
            *pCVar3 = (CopyEffects)0x0;
            goto LAB_0010985c;
          }
          plVar14 = plVar14 + 5;
        } while (plVar1 != plVar14);
      }
      lVar12 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar12,0),(uint)(byte)this[uVar13 * 0x138 + 0xd5e],0
                         );
      *pCVar3 = (CopyEffects)0x0;
    }
LAB_0010985c:
    RenderingDevice::draw_list_bind_render_pipeline(uVar10,param_5,lVar12);
    uVar10 = RenderingDevice::get_singleton();
    uVar13 = local_98[0];
    local_68[0] = 0;
    local_88 = 1;
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    local_80[1] = 0;
    if (local_98[0] == 0) {
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar19,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar10,param_5,uVar11,0);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar12 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar19,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar10,param_5,uVar11,0);
      if (lVar12 != 0) {
        LOCK();
        plVar1 = (long *)(lVar12 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        uVar13 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          uVar13 = local_98[0];
        }
      }
    }
    uVar10 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_index_array(uVar10,param_5,*(undefined8 *)(lVar9 + 0x100));
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar9,param_5,(int)this + 0xb60);
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar9,SUB81(param_5,0),1,1);
    if (uVar13 != 0) {
      LOCK();
      plVar1 = (long *)(uVar13 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001095c8;
      goto LAB_00109970;
    }
  }
LAB_001095c8:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109ba6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::copy_to_fb_rect(RID, RID, Rect2i const&, bool, bool, bool, bool, RID,
   bool, bool, bool, bool, Rect2 const&) */

void __thiscall
RendererRD::CopyEffects::copy_to_fb_rect
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,Rect2i *param_4,char param_5,
          char param_6,char param_7,char param_8,long param_9,char param_10,char param_11,
          char param_12,char param_13,float *param_14)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  float fVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  UniformSetCacheRD *pUVar9;
  undefined1 uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *pvVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  char *pcVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined4 uVar27;
  ulong local_c8 [2];
  ulong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  undefined1 local_58 [16];
  long local_40;
  
  pUVar9 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x21a;
      pcVar22 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010a773:
      _err_print_error("copy_to_fb_rect","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       uVar13,pcVar22,0,0);
      return;
    }
    goto LAB_0010a954;
  }
  lVar12 = RendererRD::MaterialStorage::get_singleton();
  if (lVar12 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x21c;
      pcVar22 = "Parameter \"material_storage\" is null.";
      goto LAB_0010a773;
    }
    goto LAB_0010a954;
  }
  *(undefined1 (*) [16])(this + 0xb70) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0xb78) = 0x3f800000;
  *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  if (param_5 != '\0') {
    *(undefined4 *)(this + 0xb7c) = 1;
  }
  if (param_6 != '\0') {
    *(uint *)(this + 0xb7c) = *(uint *)(this + 0xb7c) | 4;
  }
  if (param_7 != '\0') {
    *(uint *)(this + 0xb7c) = *(uint *)(this + 0xb7c) | 8;
  }
  if (param_8 != '\0') {
    *(uint *)(this + 0xb7c) = *(uint *)(this + 0xb7c) | 0x10;
  }
  if (param_11 != '\0') {
    *(uint *)(this + 0xb7c) = *(uint *)(this + 0xb7c) | 0x20;
  }
  if (param_12 != '\0') {
    *(uint *)(this + 0xb7c) = *(uint *)(this + 0xb7c) | 0x40;
    uVar27 = _LC46;
    if (*this != (CopyEffects)0x0) {
      uVar27 = _LC115;
    }
    *(undefined4 *)(this + 0xb78) = uVar27;
  }
  if (param_13 != '\0') {
    *(uint *)(this + 0xb7c) = *(uint *)(this + 0xb7c) | 0x80;
  }
  if ((((*param_14 != 0.0) || (param_14[1] != 0.0)) || (param_14[2] != 0.0)) || (param_14[3] != 0.0)
     ) {
    *(float *)(this + 0xb60) = *param_14;
    *(float *)(this + 0xb64) = param_14[1];
    *(float *)(this + 0xb68) = param_14[2];
    fVar5 = param_14[3];
    *(uint *)(this + 0xb7c) = *(uint *)(this + 0xb7c) | 0x100;
    *(float *)(this + 0xb6c) = fVar5;
  }
  uVar13 = *(undefined8 *)(lVar12 + 0x50);
  lVar24 = 0;
  local_80 = 0;
  local_58._0_8_ = uVar13;
  local_58._8_8_ = param_2;
  iVar11 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar25 = local_80;
  if (iVar11 == 0) {
    do {
      if (uVar25 == 0) {
        lVar17 = 0;
LAB_0010a206:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar17,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar17 = *(long *)(uVar25 - 8);
        if (lVar17 <= lVar24) goto LAB_0010a206;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(undefined8 *)(local_80 + lVar24 * 8) = *(undefined8 *)(local_58 + lVar24 * 8);
        uVar25 = local_80;
      }
      if (lVar24 != 0) break;
      lVar24 = 1;
    } while( true );
  }
  uVar8 = _LC110;
  plVar1 = (long *)(uVar25 - 0x10);
  local_c8[0] = 0;
  if (uVar25 != 0) {
    do {
      lVar24 = *plVar1;
      if (lVar24 == 0) goto LAB_00109e4b;
      LOCK();
      lVar17 = *plVar1;
      bVar26 = lVar24 == lVar17;
      if (bVar26) {
        *plVar1 = lVar24 + 1;
        lVar17 = lVar24;
      }
      UNLOCK();
    } while (!bVar26);
    if (lVar17 != -1) {
      local_c8[0] = local_80;
    }
LAB_00109e4b:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 - 0x10),false);
      }
    }
  }
  if (param_10 == '\0') {
    uVar23 = (uint)(param_9 != 0) * 2;
    uVar25 = (ulong)uVar23;
  }
  else {
    uVar25 = 5 - (ulong)(param_9 == 0);
    uVar23 = 5 - (param_9 == 0);
  }
  uVar6 = *(ulong *)(this + 0xd08);
  if (*(long *)(this + 0xba8) == 0) {
    lVar24 = 0;
LAB_0010a7c5:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,lVar24
               ,"p_variant","variant_defines.size()","",false,false);
LAB_00109f8d:
    _err_print_error("copy_to_fb_rect","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x250,"Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar24 = *(long *)(*(long *)(this + 0xba8) + -8);
    if (lVar24 <= (long)uVar25) goto LAB_0010a7c5;
    lVar24 = *(long *)(this + 3000);
    uVar21 = uVar25;
    if (lVar24 == 0) {
LAB_0010a3f0:
      lVar17 = 0;
      uVar21 = uVar25;
LAB_0010a411:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar21,lVar17,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar17 = *(long *)(lVar24 + -8);
    if (lVar17 <= (long)uVar25) goto LAB_0010a411;
    uVar19 = (ulong)uVar23;
    if (*(char *)(lVar24 + uVar19) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00109f8d;
    }
    if ((uVar6 == 0) || (*(uint *)(this + 0xc64) <= (uint)uVar6)) {
LAB_0010a86b:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00109f8d;
    }
    lVar24 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0xc60)) * 0xa0 +
             *(long *)(*(long *)(this + 0xc50) +
                      ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0xc60)) * 8);
    if (*(int *)(lVar24 + 0x98) != (int)(uVar6 >> 0x20)) {
      if (*(int *)(lVar24 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010a86b;
    }
    pVVar2 = (Version *)(this + 0xb90);
    iVar11 = (int)lVar24;
    if (*(char *)(lVar24 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar17 = *(long *)(this + 0xc08);
      if (lVar17 != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(lVar17 + -8) <= lVar20) break;
          if (*(char *)(lVar17 + lVar20) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar11);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar11);
          }
          lVar17 = *(long *)(this + 0xc08);
          lVar20 = lVar20 + 1;
        } while (lVar17 != 0);
      }
    }
    lVar20 = *(long *)(this + 0xbc8);
    if (lVar20 == 0) goto LAB_0010a3f0;
    lVar17 = *(long *)(lVar20 + -8);
    if (lVar17 <= (long)uVar25) goto LAB_0010a411;
    uVar21 = (ulong)*(uint *)(lVar20 + uVar19 * 4);
    lVar20 = *(long *)(lVar24 + 0x68);
    if (lVar20 == 0) {
      lVar17 = 0;
      goto LAB_0010a411;
    }
    lVar17 = *(long *)(lVar20 + -8);
    if (lVar17 <= (long)uVar21) goto LAB_0010a411;
    if (*(long *)(lVar20 + uVar21 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar11);
    }
    if (*(char *)(lVar24 + 0x90) == '\0') goto LAB_00109f8d;
    lVar24 = *(long *)(lVar24 + 0x88);
    if (lVar24 == 0) goto LAB_0010a3f0;
    lVar17 = *(long *)(lVar24 + -8);
    uVar21 = uVar25;
    if (lVar17 <= (long)uVar25) goto LAB_0010a411;
    lVar24 = *(long *)(lVar24 + uVar19 * 8);
    if (lVar24 == 0) goto LAB_00109f8d;
    uVar14 = RenderingDevice::get_singleton();
    local_58 = Rect2i::operator_cast_to_Rect2(param_4);
    local_80 = 0;
    pvVar15 = (void *)RenderingDevice::draw_list_begin(uVar14,param_3,0,&local_88,0,local_58,0);
    uVar25 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(uVar25 - 0x10),false);
      }
    }
    uVar14 = RenderingDevice::get_singleton();
    lVar20 = (long)(int)uVar23;
    pCVar3 = this + lVar20 * 0x138 + 0xd10;
    uVar16 = RenderingDevice::get_singleton();
    lVar17 = RenderingDevice::framebuffer_get_format(uVar16,param_3);
    if (*(long *)(pCVar3 + 0x40) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar17 = 0;
    }
    else {
      while( true ) {
        uVar25 = local_88 >> 8;
        local_88 = uVar25 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar25 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + lVar20 * 0x138 + 0xe40) != 0) {
        plVar18 = *(long **)(this + lVar20 * 0x138 + 0xe38);
        plVar1 = plVar18 + (ulong)*(uint *)(this + lVar20 * 0x138 + 0xe40) * 5;
        do {
          if (((*plVar18 == -1) && (lVar17 == plVar18[1])) &&
             ((this[lVar20 * 0x138 + 0xd5e] == *(CopyEffects *)((long)plVar18 + 0x14) &&
              (((int)plVar18[2] == 0 && ((int)plVar18[3] == 0)))))) {
            lVar17 = plVar18[4];
            *pCVar3 = (CopyEffects)0x0;
            goto LAB_0010a0ac;
          }
          plVar18 = plVar18 + 5;
        } while (plVar1 != plVar18);
      }
      lVar17 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar17,0),(uint)(byte)this[lVar20 * 0x138 + 0xd5e],0
                         );
      *pCVar3 = (CopyEffects)0x0;
    }
LAB_0010a0ac:
    RenderingDevice::draw_list_bind_render_pipeline(uVar14,pvVar15,lVar17);
    uVar14 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_88 = uVar8;
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    if (local_c8[0] == 0) {
      uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar9,lVar24,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar14,pvVar15,uVar16,0);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
      lVar17 = local_68[0];
      uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar9,lVar24,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar14,pvVar15,uVar16,0);
      if (lVar17 != 0) {
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
      }
    }
    if (param_9 != 0) {
      lVar17 = 0;
      local_80 = 0;
      local_58._8_8_ = param_9;
      local_58._0_8_ = uVar13;
      iVar11 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
      uVar25 = local_80;
      if (iVar11 == 0) {
        do {
          if (uVar25 == 0) {
            lVar20 = 0;
LAB_0010a648:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar17,lVar20,"p_index","size()","",
                       false,false);
          }
          else {
            lVar20 = *(long *)(uVar25 + -8);
            if (lVar20 <= lVar17) goto LAB_0010a648;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
            *(undefined8 *)(local_80 + lVar17 * 8) = *(undefined8 *)(local_58 + lVar17 * 8);
            uVar25 = local_80;
          }
          if (lVar17 != 0) break;
          lVar17 = 1;
        } while( true );
      }
      local_b0 = 0;
      local_a8 = 0;
      local_98[0] = 0;
      local_b8 = _LC110;
      if (uVar25 != 0) {
        plVar1 = (long *)(uVar25 + -0x10);
        do {
          lVar17 = *plVar1;
          if (lVar17 == 0) goto LAB_0010a4f5;
          LOCK();
          lVar20 = *plVar1;
          bVar26 = lVar17 == lVar20;
          if (bVar26) {
            *plVar1 = lVar17 + 1;
            lVar20 = lVar17;
          }
          UNLOCK();
        } while (!bVar26);
        if (lVar20 != -1) {
          local_98[0] = local_80;
        }
LAB_0010a4f5:
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_80 + -0x10),false);
          }
        }
      }
      lVar17 = local_98[0];
      uVar10 = local_b0;
      uVar25 = local_b8;
      uVar13 = RenderingDevice::get_singleton();
      local_80 = CONCAT71(local_80._1_7_,uVar10);
      local_68[0] = 0;
      local_78 = local_a8;
      local_88 = uVar25;
      if (lVar17 == 0) {
        uVar14 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar9,lVar24,1,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar15,uVar14,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar20 = local_68[0];
        uVar14 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar9,lVar24,1,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar15,uVar14,1);
        if (lVar20 != 0) {
          LOCK();
          plVar1 = (long *)(lVar20 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
          }
          lVar17 = local_98[0];
          if (local_98[0] == 0) goto LAB_0010a16c;
        }
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_98[0] + -0x10),false);
        }
      }
    }
LAB_0010a16c:
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_index_array(uVar13,pvVar15,*(undefined8 *)(lVar12 + 0x100));
    lVar12 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar12,pvVar15,(int)this + 0xb60);
    lVar12 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar12,SUB81(pvVar15,0),1,1);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
  }
  if (local_c8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_c8[0] - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8[0] - 0x10),false);
        return;
      }
      goto LAB_0010a954;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a954:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::copy_to_drawlist(long, long, RID, bool) */

void __thiscall
RendererRD::CopyEffects::copy_to_drawlist
          (CopyEffects *this,void *param_1,long param_2,undefined8 param_4,char param_5)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  uint *puVar5;
  code *pcVar6;
  UniformSetCacheRD *pUVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined4 uVar19;
  ulong local_98 [2];
  ulong local_88;
  ulong local_80 [3];
  long local_68 [2];
  long local_58 [5];
  
  pUVar7 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x262;
      pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010b07c:
      _err_print_error("copy_to_drawlist","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       uVar10,pcVar15,0,0);
      return;
    }
    goto LAB_0010b1a5;
  }
  lVar9 = RendererRD::MaterialStorage::get_singleton();
  if (lVar9 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x264;
      pcVar15 = "Parameter \"material_storage\" is null.";
      goto LAB_0010b07c;
    }
    goto LAB_0010b1a5;
  }
  *(undefined1 (*) [16])(this + 0xb70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  uVar19 = _LC46;
  *(undefined4 *)(this + 0xb78) = _LC46;
  if (param_5 != '\0') {
    *(undefined4 *)(this + 0xb7c) = 0x40;
    if (*this != (CopyEffects)0x0) {
      uVar19 = _LC115;
    }
    *(undefined4 *)(this + 0xb78) = uVar19;
  }
  local_58[0] = *(long *)(lVar9 + 0x50);
  local_80[0] = 0;
  lVar17 = 0;
  local_58[1] = param_4;
  iVar8 = CowData<RID>::resize<false>((CowData<RID> *)local_80,2);
  uVar13 = local_80[0];
  if (iVar8 == 0) {
    do {
      if (uVar13 == 0) {
        lVar16 = 0;
LAB_0010ac62:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar17,lVar16,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar16 = *(long *)(uVar13 - 8);
        if (lVar16 <= lVar17) goto LAB_0010ac62;
        CowData<RID>::_copy_on_write((CowData<RID> *)local_80);
        *(long *)(local_80[0] + lVar17 * 8) = local_58[lVar17];
        uVar13 = local_80[0];
      }
      if (lVar17 != 0) break;
      lVar17 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar13 - 0x10);
  local_98[0] = 0;
  if (uVar13 != 0) {
    do {
      lVar17 = *plVar1;
      if (lVar17 == 0) goto LAB_0010aaa2;
      LOCK();
      lVar16 = *plVar1;
      bVar18 = lVar17 == lVar16;
      if (bVar18) {
        *plVar1 = lVar17 + 1;
        lVar16 = lVar17;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar16 != -1) {
      local_98[0] = local_80[0];
    }
LAB_0010aaa2:
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80[0] - 0x10),false);
      }
    }
  }
  uVar13 = *(ulong *)(this + 0xd08);
  if (*(long *)(this + 0xba8) == 0) {
    lVar17 = 0;
LAB_0010b0ce:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar17,
               "p_variant","variant_defines.size()","",false,false);
LAB_0010abb9:
    _err_print_error("copy_to_drawlist","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x279,"Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
LAB_0010af72:
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_98[0] - 0x10),false);
          return;
        }
        goto LAB_0010b1a5;
      }
    }
  }
  else {
    lVar17 = *(long *)(*(long *)(this + 0xba8) + -8);
    if (lVar17 < 1) goto LAB_0010b0ce;
    pcVar15 = *(char **)(this + 3000);
    if (pcVar15 == (char *)0x0) {
LAB_0010ade8:
      lVar17 = 0;
LAB_0010adeb:
      uVar13 = 0;
LAB_0010ae08:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar17,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar17 = *(long *)(pcVar15 + -8);
    if (lVar17 < 1) goto LAB_0010adeb;
    if (*pcVar15 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010abb9;
    }
    if ((uVar13 == 0) || (*(uint *)(this + 0xc64) <= (uint)uVar13)) {
LAB_0010adbe:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010abb9;
    }
    lVar16 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(this + 0xc60)) * 0xa0 +
             *(long *)(*(long *)(this + 0xc50) +
                      ((uVar13 & 0xffffffff) / (ulong)*(uint *)(this + 0xc60)) * 8);
    if (*(int *)(lVar16 + 0x98) != (int)(uVar13 >> 0x20)) {
      if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010adbe;
    }
    pVVar2 = (Version *)(this + 0xb90);
    iVar8 = (int)lVar16;
    if (*(char *)(lVar16 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar17 = *(long *)(this + 0xc08);
      if (lVar17 != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(lVar17 + -8) <= lVar14) break;
          if (*(char *)(lVar17 + lVar14) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar8);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar8);
          }
          lVar17 = *(long *)(this + 0xc08);
          lVar14 = lVar14 + 1;
        } while (lVar17 != 0);
      }
    }
    puVar5 = *(uint **)(this + 0xbc8);
    if (puVar5 == (uint *)0x0) goto LAB_0010ade8;
    lVar17 = *(long *)(puVar5 + -2);
    if (lVar17 < 1) goto LAB_0010adeb;
    uVar13 = (ulong)*puVar5;
    lVar14 = *(long *)(lVar16 + 0x68);
    if (lVar14 == 0) {
      lVar17 = 0;
      goto LAB_0010ae08;
    }
    lVar17 = *(long *)(lVar14 + -8);
    if (lVar17 <= (long)uVar13) goto LAB_0010ae08;
    if (*(long *)(lVar14 + uVar13 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar8);
    }
    if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_0010abb9;
    plVar1 = *(long **)(lVar16 + 0x88);
    if (plVar1 == (long *)0x0) goto LAB_0010ade8;
    lVar17 = plVar1[-1];
    if (lVar17 < 1) goto LAB_0010adeb;
    lVar17 = *plVar1;
    if (lVar17 == 0) goto LAB_0010abb9;
    uVar10 = RenderingDevice::get_singleton();
    pCVar3 = this + 0xd10;
    if (*(long *)(this + 0xd50) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar16 = 0;
    }
    else {
      while( true ) {
        uVar13 = local_88 >> 8;
        local_88 = uVar13 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar13 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + 0xe40) != 0) {
        plVar11 = *(long **)(this + 0xe38);
        plVar1 = plVar11 + (ulong)*(uint *)(this + 0xe40) * 5;
        do {
          if ((((*plVar11 == -1) && (param_2 == plVar11[1])) &&
              (this[0xd5e] == *(CopyEffects *)((long)plVar11 + 0x14))) &&
             (((int)plVar11[2] == 0 && ((int)plVar11[3] == 0)))) {
            lVar16 = plVar11[4];
            this[0xd10] = (CopyEffects)0x0;
            goto LAB_0010ae6c;
          }
          plVar11 = plVar11 + 5;
        } while (plVar1 != plVar11);
      }
      lVar16 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(param_2,0),(uint)(byte)this[0xd5e],0);
      this[0xd10] = (CopyEffects)0x0;
    }
LAB_0010ae6c:
    RenderingDevice::draw_list_bind_render_pipeline(uVar10,param_1,lVar16);
    uVar10 = RenderingDevice::get_singleton();
    uVar13 = local_98[0];
    local_68[0] = 0;
    local_88 = 1;
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    local_80[1] = 0;
    if (local_98[0] == 0) {
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar17,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar10,param_1,uVar12,0);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar16 = local_68[0];
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar17,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar10,param_1,uVar12,0);
      if (lVar16 != 0) {
        LOCK();
        plVar1 = (long *)(lVar16 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        uVar13 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          uVar13 = local_98[0];
        }
      }
    }
    uVar10 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_index_array(uVar10,param_1,*(undefined8 *)(lVar9 + 0x100));
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar9,param_1,(int)this + 0xb60);
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar9,SUB81(param_1,0),1,1);
    if (uVar13 != 0) {
      LOCK();
      plVar1 = (long *)(uVar13 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010abf8;
      goto LAB_0010af72;
    }
  }
LAB_0010abf8:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b1a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::copy_raster(RID, RID) */

void __thiscall
RendererRD::CopyEffects::copy_raster(CopyEffects *this,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  code *pcVar5;
  UniformSetCacheRD *pUVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  ulong local_98 [2];
  ulong local_88;
  ulong local_80 [3];
  long local_68 [2];
  long local_58 [5];
  
  pUVar6 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    _err_print_error("copy_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x283,
                     "Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t use the raster version of the copy with the clustered renderer.",0,0);
    goto LAB_0010b660;
  }
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x286;
      pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010b9b5:
      _err_print_error("copy_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar9,
                       pcVar15,0,0);
      return;
    }
    goto LAB_0010ba9d;
  }
  lVar8 = RendererRD::MaterialStorage::get_singleton();
  if (lVar8 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x288;
      pcVar15 = "Parameter \"material_storage\" is null.";
      goto LAB_0010b9b5;
    }
    goto LAB_0010ba9d;
  }
  uVar16 = (int)this + 8;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  local_58[0] = *(long *)(lVar8 + 0x50);
  local_80[0] = 0;
  local_58[1] = param_2;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)local_80,2);
  uVar14 = local_80[0];
  if (iVar7 == 0) {
    lVar8 = 0;
    do {
      if (uVar14 == 0) {
        lVar12 = 0;
LAB_0010b592:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar12,"p_index","size()","",false,
                   false);
      }
      else {
        lVar12 = *(long *)(uVar14 - 8);
        if (lVar12 <= lVar8) goto LAB_0010b592;
        CowData<RID>::_copy_on_write((CowData<RID> *)local_80);
        *(long *)(local_80[0] + lVar8 * 8) = local_58[lVar8];
        uVar14 = local_80[0];
      }
      if (lVar8 != 0) break;
      lVar8 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar14 - 0x10);
  local_98[0] = 0;
  if (uVar14 != 0) {
    do {
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_0010b2af;
      LOCK();
      lVar12 = *plVar1;
      bVar18 = lVar8 == lVar12;
      if (bVar18) {
        *plVar1 = lVar8 + 1;
        lVar12 = lVar8;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar12 != -1) {
      local_98[0] = local_80[0];
    }
LAB_0010b2af:
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80[0] - 0x10),false);
      }
    }
  }
  uVar14 = *(ulong *)(this + 0x1c0);
  if (*(long *)(this + 0x60) == 0) {
    lVar8 = 0;
LAB_0010b5db:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,4,lVar8,
               "p_variant","variant_defines.size()","",false,false);
LAB_0010b620:
    _err_print_error("copy_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x292,
                     "Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) goto LAB_0010b839;
    }
LAB_0010b660:
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x60) + -8);
    if (lVar8 < 5) goto LAB_0010b5db;
    lVar8 = *(long *)(this + 0x70);
    if (lVar8 == 0) {
LAB_0010b8fd:
      lVar12 = 0;
LAB_0010b900:
      uVar14 = 4;
LAB_0010b920:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar12 = *(long *)(lVar8 + -8);
    if (lVar12 < 5) goto LAB_0010b900;
    if (*(char *)(lVar8 + 4) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010b620;
    }
    if ((uVar14 == 0) || (*(uint *)(this + 0x11c) <= (uint)uVar14)) {
LAB_0010b6c8:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010b620;
    }
    lVar8 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x118)) * 0xa0 +
            *(long *)(*(long *)(this + 0x108) +
                     ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x118)) * 8);
    if (*(int *)(lVar8 + 0x98) != (int)(uVar14 >> 0x20)) {
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010b6c8;
    }
    pVVar2 = (Version *)(this + 0x48);
    iVar7 = (int)lVar8;
    if (*(char *)(lVar8 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar12 = *(long *)(this + 0xc0);
      if (lVar12 != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(lVar12 + -8) <= lVar17) break;
          if (*(char *)(lVar12 + lVar17) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar7);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar7);
          }
          lVar12 = *(long *)(this + 0xc0);
          lVar17 = lVar17 + 1;
        } while (lVar12 != 0);
      }
    }
    lVar17 = *(long *)(this + 0x80);
    if (lVar17 == 0) goto LAB_0010b8fd;
    lVar12 = *(long *)(lVar17 + -8);
    if (lVar12 < 5) goto LAB_0010b900;
    uVar14 = (ulong)*(uint *)(lVar17 + 0x10);
    lVar17 = *(long *)(lVar8 + 0x68);
    if (lVar17 == 0) {
      lVar12 = 0;
      goto LAB_0010b920;
    }
    lVar12 = *(long *)(lVar17 + -8);
    if (lVar12 <= (long)uVar14) goto LAB_0010b920;
    if (*(long *)(lVar17 + uVar14 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar7);
    }
    if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_0010b620;
    lVar8 = *(long *)(lVar8 + 0x88);
    if (lVar8 == 0) goto LAB_0010b8fd;
    lVar12 = *(long *)(lVar8 + -8);
    if (lVar12 < 5) goto LAB_0010b900;
    lVar8 = *(long *)(lVar8 + 0x20);
    if (lVar8 == 0) goto LAB_0010b620;
    uVar9 = RenderingDevice::get_singleton();
    local_80[0] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    pvVar10 = (void *)RenderingDevice::draw_list_begin(uVar9,param_3,0,&local_88,0,local_58,0);
    uVar14 = local_80[0];
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80[0] = 0;
        Memory::free_static((void *)(uVar14 - 0x10),false);
      }
    }
    uVar9 = RenderingDevice::get_singleton();
    pCVar3 = this + 0x6a8;
    uVar11 = RenderingDevice::get_singleton();
    lVar12 = RenderingDevice::framebuffer_get_format(uVar11,param_3);
    if (*(long *)(this + 0x6e8) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar12 = 0;
    }
    else {
      while( true ) {
        uVar14 = local_88 >> 8;
        local_88 = uVar14 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar14 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + 0x7d8) != 0) {
        plVar13 = *(long **)(this + 2000);
        plVar1 = plVar13 + (ulong)*(uint *)(this + 0x7d8) * 5;
        do {
          if ((((*plVar13 == -1) && (lVar12 == plVar13[1])) &&
              (this[0x6f6] == *(CopyEffects *)((long)plVar13 + 0x14))) &&
             (((int)plVar13[2] == 0 && ((int)plVar13[3] == 0)))) {
            lVar12 = plVar13[4];
            this[0x6a8] = (CopyEffects)0x0;
            goto LAB_0010b730;
          }
          plVar13 = plVar13 + 5;
        } while (plVar1 != plVar13);
      }
      lVar12 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar12,0),(uint)(byte)this[0x6f6],0);
      this[0x6a8] = (CopyEffects)0x0;
    }
LAB_0010b730:
    RenderingDevice::draw_list_bind_render_pipeline(uVar9,pvVar10,lVar12);
    uVar9 = RenderingDevice::get_singleton();
    uVar14 = local_98[0];
    local_68[0] = 0;
    local_88 = 1;
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    local_80[1] = 0;
    if (local_98[0] == 0) {
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar8,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar9,pvVar10,uVar11,0);
LAB_0010b7e2:
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar8,pvVar10,uVar16);
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar8,SUB81(pvVar10,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      if (uVar14 == 0) goto LAB_0010b660;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar12 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar8,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar9,pvVar10,uVar11,0);
      if (lVar12 != 0) {
        LOCK();
        plVar1 = (long *)(lVar12 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        uVar14 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          uVar14 = local_98[0];
        }
        goto LAB_0010b7e2;
      }
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar8,pvVar10,uVar16);
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar8,SUB81(pvVar10,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
    }
    LOCK();
    plVar1 = (long *)(uVar14 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010b660;
LAB_0010b839:
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)(local_98[0] - 0x10),false);
      return;
    }
  }
LAB_0010ba9d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::gaussian_blur(RID, RID, Rect2i const&, Vector2i const&, bool) */

void __thiscall
RendererRD::CopyEffects::gaussian_blur
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
          undefined4 *param_5,ulong param_6)

{
  long *plVar1;
  Version *pVVar2;
  code *pcVar3;
  uint uVar4;
  UniformSetCacheRD *pUVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  byte bVar20;
  ulong local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  bVar20 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x2a2;
        pcVar14 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010c3e9:
        _err_print_error("gaussian_blur","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                         uVar10,pcVar14,0,0);
        return;
      }
      goto LAB_0010c4a3;
    }
    lVar8 = RendererRD::MaterialStorage::get_singleton();
    if (lVar8 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x2a4;
        pcVar14 = "Parameter \"material_storage\" is null.";
        goto LAB_0010c3e9;
      }
      goto LAB_0010c4a3;
    }
    uVar4 = (int)this + 0x918;
    *(undefined8 *)(this + 0x918) = 0;
    *(undefined8 *)(this + 0x970) = 0;
    puVar15 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
    for (uVar12 = (ulong)((uVar4 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8))
                          + 0x60 >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar15 = 0;
      puVar15 = puVar15 + (ulong)bVar20 * -2 + 1;
    }
    local_80 = 0;
    *(undefined4 *)(this + 0x918) = *param_4;
    *(undefined4 *)(this + 0x91c) = param_4[1];
    *(undefined4 *)(this + 0x928) = *param_4;
    *(undefined4 *)(this + 0x92c) = param_4[1];
    *(undefined4 *)(this + 0x920) = *param_5;
    lVar17 = 0;
    *(undefined4 *)(this + 0x924) = param_5[1];
    local_58[0] = *(long *)(lVar8 + 0x50);
    local_58[1] = param_2;
    iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar12 = local_80;
    if (iVar7 == 0) {
      do {
        if (uVar12 == 0) {
          lVar8 = 0;
LAB_0010c0a3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar17,lVar8,"p_index","size()","",
                     false,false);
        }
        else {
          lVar8 = *(long *)(uVar12 - 8);
          if (lVar8 <= lVar17) goto LAB_0010c0a3;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar17 * 8) = local_58[lVar17];
          uVar12 = local_80;
        }
        if (lVar17 != 0) break;
        lVar17 = 1;
      } while( true );
    }
    plVar1 = (long *)(uVar12 - 0x10);
    local_c8[0] = 0;
    if (uVar12 != 0) {
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) goto LAB_0010bc6c;
        LOCK();
        lVar17 = *plVar1;
        bVar19 = lVar8 == lVar17;
        if (bVar19) {
          *plVar1 = lVar8 + 1;
          lVar17 = lVar8;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar17 != -1) {
        local_c8[0] = local_80;
      }
LAB_0010bc6c:
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 - 0x10),false);
        }
      }
    }
    local_b0 = 0;
    uVar18 = param_6 & 0xff;
    local_98[0] = 0;
    uVar12 = *(ulong *)(this + 0xaf0);
    local_b8 = _LC20;
    local_a8 = param_3;
    if (*(long *)(this + 0x990) == 0) {
      lVar8 = 0;
LAB_0010c0f3:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar18,
                 lVar8,"p_variant","variant_defines.size()","",false,false);
LAB_0010c130:
      _err_print_error("gaussian_blur","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       0x2b7,"Condition \"shader.is_null()\" is true.",0,0);
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0x990) + -8);
      if (lVar8 <= (long)uVar18) goto LAB_0010c0f3;
      lVar8 = *(long *)(this + 0x9a0);
      uVar13 = uVar18;
      if (lVar8 == 0) {
LAB_0010c320:
        lVar17 = 0;
        uVar13 = uVar18;
LAB_0010c341:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar17,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar17 = *(long *)(lVar8 + -8);
      if (lVar17 <= (long)uVar18) goto LAB_0010c341;
      if (*(char *)(lVar8 + uVar18) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_0010c130;
      }
      if ((uVar12 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar12)) {
LAB_0010c1e0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_0010c130;
      }
      lVar8 = ((uVar12 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
              *(long *)(*(long *)(this + 0xa38) +
                       ((uVar12 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
      if (*(int *)(lVar8 + 0x98) != (int)(uVar12 >> 0x20)) {
        if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010c1e0;
      }
      pVVar2 = (Version *)(this + 0x978);
      iVar7 = (int)lVar8;
      if (*(char *)(lVar8 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar17 = *(long *)(this + 0x9f0);
        if (lVar17 != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(lVar17 + -8) <= lVar16) break;
            if (*(char *)(lVar17 + lVar16) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar7);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar7);
            }
            lVar17 = *(long *)(this + 0x9f0);
            lVar16 = lVar16 + 1;
          } while (lVar17 != 0);
        }
      }
      lVar16 = *(long *)(this + 0x9b0);
      if (lVar16 == 0) goto LAB_0010c320;
      lVar17 = *(long *)(lVar16 + -8);
      if (lVar17 <= (long)uVar18) goto LAB_0010c341;
      uVar13 = (ulong)*(uint *)(lVar16 + uVar18 * 4);
      lVar16 = *(long *)(lVar8 + 0x68);
      if (lVar16 == 0) {
        lVar17 = 0;
        goto LAB_0010c341;
      }
      lVar17 = *(long *)(lVar16 + -8);
      if (lVar17 <= (long)uVar13) goto LAB_0010c341;
      if (*(long *)(lVar16 + uVar13 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar7);
      }
      uVar12 = local_c8[0];
      if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_0010c130;
      lVar8 = *(long *)(lVar8 + 0x88);
      if (lVar8 == 0) goto LAB_0010c320;
      lVar17 = *(long *)(lVar8 + -8);
      uVar13 = uVar18;
      if (lVar17 <= (long)uVar18) goto LAB_0010c341;
      lVar8 = *(long *)(lVar8 + uVar18 * 8);
      if (lVar8 == 0) goto LAB_0010c130;
      RenderingDevice::get_singleton();
      pvVar9 = (void *)RenderingDevice::compute_list_begin();
      uVar10 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar10,pvVar9,*(undefined8 *)(this + (param_6 & 0xff) * 8 + 0xaf8));
      uVar10 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = 1;
      local_80 = local_80 & 0xffffffffffffff00;
      local_78 = 0;
      if (uVar12 == 0) {
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
LAB_0010c2b2:
        uVar10 = RenderingDevice::get_singleton();
        local_80 = local_80 & 0xffffffffffffff00;
        local_88 = _LC20;
LAB_0010c2ea:
        local_68[0] = 0;
        local_78 = local_a8;
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,3);
        lVar17 = 0;
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
        lVar17 = local_68[0];
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
        if (lVar17 == 0) goto LAB_0010c2b2;
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
        lVar17 = local_98[0];
        uVar6 = local_b0;
        uVar11 = local_b8;
        uVar10 = RenderingDevice::get_singleton();
        local_68[0] = 0;
        local_88 = uVar11;
        local_80 = CONCAT71(local_80._1_7_,uVar6);
        local_78 = local_a8;
        if (lVar17 == 0) goto LAB_0010c2ea;
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar16 = local_68[0];
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,3);
        if (lVar16 != 0) {
          LOCK();
          plVar1 = (long *)(lVar16 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar17 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            lVar17 = local_98[0];
          }
        }
      }
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar8,pvVar9,uVar4);
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar8,(uint)pvVar9,param_4[2],param_4[3]);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (lVar17 != 0) {
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_98[0] + -0x10),false);
        }
      }
    }
    if (local_c8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_c8[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_c8[0] - 0x10),false);
          return;
        }
        goto LAB_0010c4a3;
      }
    }
  }
  else {
    _err_print_error("gaussian_blur","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x29f,
                     "Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use the compute version of the gaussian blur with the mobile renderer."
                     ,0,0);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c4a3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::gaussian_blur_raster(RID, RID, Rect2i const&, Vector2i const&) */

void __thiscall
RendererRD::CopyEffects::gaussian_blur_raster
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  code *pcVar5;
  UniformSetCacheRD *pUVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong local_98 [2];
  ulong local_88;
  ulong local_80 [3];
  long local_68 [2];
  long local_58 [5];
  
  pUVar6 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    _err_print_error("gaussian_blur_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp"
                     ,0x2c6,"Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t use the raster version of the gaussian blur with the clustered renderer."
                     ,0,0);
    goto LAB_0010c980;
  }
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x2c9;
      pcVar16 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010ccc8:
      _err_print_error("gaussian_blur_raster",
                       "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar9,pcVar16,0,0);
      return;
    }
    goto LAB_0010cdb0;
  }
  lVar8 = RendererRD::MaterialStorage::get_singleton();
  if (lVar8 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x2cb;
      pcVar16 = "Parameter \"material_storage\" is null.";
      goto LAB_0010ccc8;
    }
    goto LAB_0010cdb0;
  }
  uVar17 = (int)this + 8;
  uVar9 = FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD::singleton,param_3);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = _LC125;
  local_58[0] = *(long *)(lVar8 + 0x50);
  auVar21._0_4_ = (float)(int)*param_5;
  auVar21._4_4_ = (float)(int)((ulong)*param_5 >> 0x20);
  auVar21._8_8_ = _LC125;
  auVar20 = divps(auVar20,auVar21);
  local_80[0] = 0;
  *(long *)(this + 8) = auVar20._0_8_;
  local_58[1] = param_2;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)local_80,2);
  uVar15 = local_80[0];
  if (iVar7 == 0) {
    lVar8 = 0;
    do {
      if (uVar15 == 0) {
        lVar13 = 0;
LAB_0010c8b1:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar13,"p_index","size()","",false,
                   false);
      }
      else {
        lVar13 = *(long *)(uVar15 - 8);
        if (lVar13 <= lVar8) goto LAB_0010c8b1;
        CowData<RID>::_copy_on_write((CowData<RID> *)local_80);
        *(long *)(local_80[0] + lVar8 * 8) = local_58[lVar8];
        uVar15 = local_80[0];
      }
      if (lVar8 != 0) break;
      lVar8 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar15 - 0x10);
  local_98[0] = 0;
  if (uVar15 != 0) {
    do {
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_0010c5e4;
      LOCK();
      lVar13 = *plVar1;
      bVar19 = lVar8 == lVar13;
      if (bVar19) {
        *plVar1 = lVar8 + 1;
        lVar13 = lVar8;
      }
      UNLOCK();
    } while (!bVar19);
    if (lVar13 != -1) {
      local_98[0] = local_80[0];
    }
LAB_0010c5e4:
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80[0] - 0x10),false);
      }
    }
  }
  uVar15 = *(ulong *)(this + 0x1c0);
  if (*(long *)(this + 0x60) == 0) {
    lVar8 = 0;
LAB_0010c8fa:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar8,
               "p_variant","variant_defines.size()","",false,false);
LAB_0010c940:
    _err_print_error("gaussian_blur_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp"
                     ,0x2dc,"Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) goto LAB_0010cb57;
    }
LAB_0010c980:
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x60) + -8);
    if (lVar8 < 2) goto LAB_0010c8fa;
    lVar8 = *(long *)(this + 0x70);
    if (lVar8 == 0) {
LAB_0010cc13:
      lVar13 = 0;
LAB_0010cc16:
      uVar15 = 1;
LAB_0010cc36:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar13 = *(long *)(lVar8 + -8);
    if (lVar13 < 2) goto LAB_0010cc16;
    if (*(char *)(lVar8 + 1) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010c940;
    }
    if ((uVar15 == 0) || (*(uint *)(this + 0x11c) <= (uint)uVar15)) {
LAB_0010c9e9:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010c940;
    }
    lVar8 = ((uVar15 & 0xffffffff) % (ulong)*(uint *)(this + 0x118)) * 0xa0 +
            *(long *)(*(long *)(this + 0x108) +
                     ((uVar15 & 0xffffffff) / (ulong)*(uint *)(this + 0x118)) * 8);
    if (*(int *)(lVar8 + 0x98) != (int)(uVar15 >> 0x20)) {
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010c9e9;
    }
    pVVar2 = (Version *)(this + 0x48);
    iVar7 = (int)lVar8;
    if (*(char *)(lVar8 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar13 = *(long *)(this + 0xc0);
      if (lVar13 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(lVar13 + -8) <= lVar18) break;
          if (*(char *)(lVar13 + lVar18) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar7);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar7);
          }
          lVar13 = *(long *)(this + 0xc0);
          lVar18 = lVar18 + 1;
        } while (lVar13 != 0);
      }
    }
    lVar18 = *(long *)(this + 0x80);
    if (lVar18 == 0) goto LAB_0010cc13;
    lVar13 = *(long *)(lVar18 + -8);
    if (lVar13 < 2) goto LAB_0010cc16;
    uVar15 = (ulong)*(uint *)(lVar18 + 4);
    lVar18 = *(long *)(lVar8 + 0x68);
    if (lVar18 == 0) {
      lVar13 = 0;
      goto LAB_0010cc36;
    }
    lVar13 = *(long *)(lVar18 + -8);
    if (lVar13 <= (long)uVar15) goto LAB_0010cc36;
    if (*(long *)(lVar18 + uVar15 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar7);
    }
    if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_0010c940;
    lVar8 = *(long *)(lVar8 + 0x88);
    if (lVar8 == 0) goto LAB_0010cc13;
    lVar13 = *(long *)(lVar8 + -8);
    if (lVar13 < 2) goto LAB_0010cc16;
    lVar8 = *(long *)(lVar8 + 8);
    if (lVar8 == 0) goto LAB_0010c940;
    uVar10 = RenderingDevice::get_singleton();
    local_80[0] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    pvVar11 = (void *)RenderingDevice::draw_list_begin(uVar10,uVar9,0,&local_88,0,local_58,0);
    uVar15 = local_80[0];
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80[0] = 0;
        Memory::free_static((void *)(uVar15 - 0x10),false);
      }
    }
    uVar10 = RenderingDevice::get_singleton();
    pCVar3 = this + 0x300;
    uVar12 = RenderingDevice::get_singleton();
    lVar13 = RenderingDevice::framebuffer_get_format(uVar12,uVar9);
    if (*(long *)(this + 0x340) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar13 = 0;
    }
    else {
      while( true ) {
        uVar15 = local_88 >> 8;
        local_88 = uVar15 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar15 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + 0x430) != 0) {
        plVar14 = *(long **)(this + 0x428);
        plVar1 = plVar14 + (ulong)*(uint *)(this + 0x430) * 5;
        do {
          if ((((*plVar14 == -1) && (lVar13 == plVar14[1])) &&
              (this[0x34e] == *(CopyEffects *)((long)plVar14 + 0x14))) &&
             (((int)plVar14[2] == 0 && ((int)plVar14[3] == 0)))) {
            lVar13 = plVar14[4];
            this[0x300] = (CopyEffects)0x0;
            goto LAB_0010ca50;
          }
          plVar14 = plVar14 + 5;
        } while (plVar1 != plVar14);
      }
      lVar13 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar13,0),(uint)(byte)this[0x34e],0);
      this[0x300] = (CopyEffects)0x0;
    }
LAB_0010ca50:
    RenderingDevice::draw_list_bind_render_pipeline(uVar10,pvVar11,lVar13);
    uVar9 = RenderingDevice::get_singleton();
    uVar15 = local_98[0];
    local_68[0] = 0;
    local_88 = 1;
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    local_80[1] = 0;
    if (local_98[0] == 0) {
      uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar8,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar9,pvVar11,uVar10,0);
LAB_0010cb00:
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar8,pvVar11,uVar17);
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar8,SUB81(pvVar11,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      if (uVar15 == 0) goto LAB_0010c980;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar13 = local_68[0];
      uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar8,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar9,pvVar11,uVar10,0);
      if (lVar13 != 0) {
        LOCK();
        plVar1 = (long *)(lVar13 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        uVar15 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          uVar15 = local_98[0];
        }
        goto LAB_0010cb00;
      }
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar8,pvVar11,uVar17);
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar8,SUB81(pvVar11,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
    }
    LOCK();
    plVar1 = (long *)(uVar15 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010c980;
LAB_0010cb57:
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)(local_98[0] - 0x10),false);
      return;
    }
  }
LAB_0010cdb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::gaussian_glow(RID, RID, Vector2i const&, float, bool, float, float,
   float, float, float, RID, float) */

void __thiscall
RendererRD::CopyEffects::gaussian_glow
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,CopyEffects *this,long param_9,
          undefined8 param_10,uint *param_11,uint param_12,long param_13)

{
  long *plVar1;
  Version *pVVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  UniformSetCacheRD *pUVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  byte bVar24;
  char local_15c;
  undefined8 *local_150;
  ulong local_f8 [2];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  long local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar6 = UniformSetCacheRD::singleton;
  bVar24 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = 0x2ec;
        pcVar16 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010d7c9:
        _err_print_error("gaussian_glow","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                         uVar12,pcVar16,0,0);
        return;
      }
      goto LAB_0010db1e;
    }
    lVar9 = RendererRD::MaterialStorage::get_singleton();
    if (lVar9 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = 0x2ee;
        pcVar16 = "Parameter \"material_storage\" is null.";
        goto LAB_0010d7c9;
      }
      goto LAB_0010db1e;
    }
    uVar5 = (int)this + 0x918;
    *(undefined8 *)(this + 0x918) = 0;
    *(undefined8 *)(this + 0x970) = 0;
    puVar18 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
    for (uVar14 = (ulong)((uVar5 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8))
                          + 0x60 >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar18 = 0;
      puVar18 = puVar18 + (ulong)bVar24 * -2 + 1;
    }
    local_80 = 0;
    lVar21 = 0;
    uVar19 = (param_13 != 0 & param_12) + 2;
    *(uint *)(this + 0x920) = *param_11;
    uVar3 = param_11[1];
    *(ulong *)(this + 0x938) = CONCAT44(param_4,param_1);
    *(ulong *)(this + 0x940) = CONCAT44(param_6,param_5);
    *(uint *)(this + 0x924) = uVar3;
    lVar9 = *(long *)(lVar9 + 0x50);
    *(undefined4 *)(this + 0x948) = param_3;
    *(ulong *)(this + 0x950) = CONCAT44(param_7,param_2);
    local_58[0] = lVar9;
    local_58[1] = param_9;
    iVar8 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar14 = local_80;
    if (iVar8 == 0) {
      do {
        if (uVar14 == 0) {
          lVar20 = 0;
LAB_0010d463:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar21,lVar20,"p_index","size()","",
                     false,false);
        }
        else {
          lVar20 = *(long *)(uVar14 - 8);
          if (lVar20 <= lVar21) goto LAB_0010d463;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar21 * 8) = local_58[lVar21];
          uVar14 = local_80;
        }
        if (lVar21 != 0) break;
        lVar21 = 1;
      } while( true );
    }
    uVar12 = _LC110;
    plVar1 = (long *)(uVar14 - 0x10);
    local_f8[0] = 0;
    if (uVar14 != 0) {
      do {
        lVar21 = *plVar1;
        if (lVar21 == 0) goto LAB_0010d000;
        LOCK();
        lVar20 = *plVar1;
        bVar23 = lVar21 == lVar20;
        if (bVar23) {
          *plVar1 = lVar21 + 1;
          lVar20 = lVar21;
        }
        UNLOCK();
      } while (!bVar23);
      if (lVar20 != -1) {
        local_f8[0] = local_80;
      }
LAB_0010d000:
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 - 0x10),false);
        }
      }
    }
    uVar13 = _LC20;
    uVar22 = (ulong)uVar19;
    local_e0 = 0;
    uVar14 = *(ulong *)(this + 0xaf0);
    local_c8[0] = 0;
    local_e8 = _LC20;
    local_d8 = param_10;
    if (*(long *)(this + 0x990) == 0) {
      lVar21 = 0;
LAB_0010d4a3:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar22,
                 lVar21,"p_variant","variant_defines.size()","",false,false);
LAB_0010d4e0:
      _err_print_error("gaussian_glow","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       0x309,"Condition \"shader.is_null()\" is true.",0,0);
    }
    else {
      lVar21 = *(long *)(*(long *)(this + 0x990) + -8);
      if (lVar21 <= (long)uVar22) goto LAB_0010d4a3;
      lVar21 = *(long *)(this + 0x9a0);
      uVar15 = uVar22;
      if (lVar21 == 0) {
LAB_0010d708:
        lVar20 = 0;
        uVar15 = uVar22;
LAB_0010d729:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar20,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar20 = *(long *)(lVar21 + -8);
      if (lVar20 <= (long)uVar22) goto LAB_0010d729;
      if (*(char *)(lVar21 + uVar22) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_0010d4e0;
      }
      if ((uVar14 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar14)) {
LAB_0010d590:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_0010d4e0;
      }
      lVar21 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
               *(long *)(*(long *)(this + 0xa38) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
      if (*(int *)(lVar21 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010d590;
      }
      pVVar2 = (Version *)(this + 0x978);
      iVar8 = (int)lVar21;
      if (*(char *)(lVar21 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar20 = *(long *)(this + 0x9f0);
        if (lVar20 != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(lVar20 + -8) <= lVar17) break;
            if (*(char *)(lVar20 + lVar17) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar8);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar8);
            }
            lVar20 = *(long *)(this + 0x9f0);
            lVar17 = lVar17 + 1;
          } while (lVar20 != 0);
        }
      }
      lVar17 = *(long *)(this + 0x9b0);
      if (lVar17 == 0) goto LAB_0010d708;
      lVar20 = *(long *)(lVar17 + -8);
      if (lVar20 <= (long)uVar22) goto LAB_0010d729;
      uVar15 = (ulong)*(uint *)(lVar17 + uVar22 * 4);
      lVar17 = *(long *)(lVar21 + 0x68);
      if (lVar17 == 0) {
        lVar20 = 0;
        goto LAB_0010d729;
      }
      lVar20 = *(long *)(lVar17 + -8);
      if (lVar20 <= (long)uVar15) goto LAB_0010d729;
      if (*(long *)(lVar17 + uVar15 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar8);
      }
      uVar14 = local_f8[0];
      if (*(char *)(lVar21 + 0x90) == '\0') goto LAB_0010d4e0;
      lVar21 = *(long *)(lVar21 + 0x88);
      if (lVar21 == 0) goto LAB_0010d708;
      lVar20 = *(long *)(lVar21 + -8);
      uVar15 = uVar22;
      if (lVar20 <= (long)uVar22) goto LAB_0010d729;
      lVar21 = *(long *)(lVar21 + uVar22 * 8);
      if (lVar21 == 0) goto LAB_0010d4e0;
      RenderingDevice::get_singleton();
      pvVar10 = (void *)RenderingDevice::compute_list_begin();
      uVar11 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar11,pvVar10,*(undefined8 *)(this + (long)(int)uVar19 * 8 + 0xaf8));
      uVar11 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = uVar12;
      local_80 = local_80 & 0xffffffffffffff00;
      local_78 = 0;
      if (uVar14 == 0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar21,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
LAB_0010d681:
        uVar12 = RenderingDevice::get_singleton();
        local_88 = uVar13;
        local_80 = local_80 & 0xffffffffffffff00;
LAB_0010d6b5:
        local_150 = &local_88;
        local_68[0] = 0;
        local_78 = local_d8;
        uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar21,3,local_150);
        RenderingDevice::compute_list_bind_uniform_set(uVar12,pvVar10,uVar13,3);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_f8);
        lVar20 = local_68[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar21,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
        if (lVar20 == 0) goto LAB_0010d681;
        LOCK();
        plVar1 = (long *)(lVar20 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
        lVar20 = local_c8[0];
        uVar7 = local_e0;
        uVar13 = local_e8;
        uVar12 = RenderingDevice::get_singleton();
        local_80 = CONCAT71(local_80._1_7_,uVar7);
        local_68[0] = 0;
        local_88 = uVar13;
        local_78 = local_d8;
        if (lVar20 == 0) goto LAB_0010d6b5;
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
        lVar20 = local_68[0];
        uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar21,3,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar12,pvVar10,uVar13,3);
        if (lVar20 != 0) {
          LOCK();
          plVar1 = (long *)(lVar20 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
          }
        }
      }
      local_150 = &local_88;
      local_15c = (char)param_12;
      if (param_13 == 0) {
        iVar8 = (param_12 & 0xff) << 4;
      }
      else {
        iVar8 = 0;
        if (local_15c != '\0') {
          local_80 = 0;
          lVar20 = 0;
          local_58[0] = lVar9;
          local_58[1] = param_13;
          iVar8 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
          uVar14 = local_80;
          if (iVar8 == 0) {
            do {
              if (uVar14 == 0) {
                lVar9 = 0;
LAB_0010daae:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar20,lVar9,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar9 = *(long *)(uVar14 + -8);
                if (lVar9 <= lVar20) goto LAB_0010daae;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
                *(long *)(local_80 + lVar20 * 8) = local_58[lVar20];
                uVar14 = local_80;
              }
              if (lVar20 != 0) break;
              lVar20 = 1;
            } while( true );
          }
          local_b0 = 0;
          local_a8 = 0;
          local_98[0] = 0;
          local_b8 = _LC110;
          if (uVar14 != 0) {
            plVar1 = (long *)(uVar14 + -0x10);
            do {
              lVar9 = *plVar1;
              if (lVar9 == 0) goto LAB_0010d898;
              LOCK();
              lVar20 = *plVar1;
              bVar23 = lVar9 == lVar20;
              if (bVar23) {
                *plVar1 = lVar9 + 1;
                lVar20 = lVar9;
              }
              UNLOCK();
            } while (!bVar23);
            if (lVar20 != -1) {
              local_98[0] = local_80;
            }
LAB_0010d898:
            uVar14 = local_98[0];
            if (local_80 != 0) {
              LOCK();
              plVar1 = (long *)(local_80 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_80 + -0x10),false);
                uVar14 = local_98[0];
              }
            }
          }
          uVar7 = local_b0;
          uVar12 = local_b8;
          uVar13 = RenderingDevice::get_singleton();
          local_68[0] = 0;
          local_80 = CONCAT71(local_80._1_7_,uVar7);
          local_78 = local_a8;
          local_88 = uVar12;
          if (uVar14 == 0) {
            uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar6,lVar21,1,local_150);
            RenderingDevice::compute_list_bind_uniform_set(uVar13,pvVar10,uVar12,1);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
            lVar9 = local_68[0];
            uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar6,lVar21,1,local_150);
            RenderingDevice::compute_list_bind_uniform_set(uVar13,pvVar10,uVar12,1);
            if (lVar9 != 0) {
              LOCK();
              plVar1 = (long *)(lVar9 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_68[0] + -0x10),false);
              }
              uVar14 = local_98[0];
              if (local_98[0] == 0) goto LAB_0010d989;
            }
            LOCK();
            plVar1 = (long *)(uVar14 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_98[0] + -0x10),false);
            }
          }
LAB_0010d989:
          iVar8 = 0x10;
        }
      }
      *(int *)(this + 0x930) = iVar8;
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar9,pvVar10,uVar5);
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar9,(uint)pvVar10,*param_11,param_11[1]);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (local_c8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_c8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_c8[0] + -0x10),false);
        }
      }
    }
    if (local_f8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_f8[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_f8[0] - 0x10),false);
          return;
        }
        goto LAB_0010db1e;
      }
    }
  }
  else {
    _err_print_error("gaussian_glow","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x2e9,
                     "Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use the compute version of the gaussian glow with the mobile renderer."
                     ,0,0);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010db1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::gaussian_glow_raster(RID, RID, RID, float, Vector2i const&, float, bool,
   float, float, float, float, float, RID, float) */

void __thiscall
RendererRD::CopyEffects::gaussian_glow_raster
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          CopyEffects *this,undefined8 param_10,long param_11,undefined8 param_12,
          undefined8 *param_13,uint param_14,long param_15)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  UniformSetCacheRD *pUVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  char local_178;
  long local_f8 [2];
  ulong local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  ulong local_c8 [2];
  ulong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar8 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gaussian_glow_raster",
                       "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x31c,
                       "Condition \"!prefer_raster_effects\" is true.",
                       "Can\'t use the raster version of the gaussian glow with the clustered renderer."
                       ,0);
      return;
    }
    goto LAB_0010efd4;
  }
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 799;
      pcVar21 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010eafe:
      _err_print_error("gaussian_glow_raster",
                       "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar13,pcVar21,0,0);
      return;
    }
    goto LAB_0010efd4;
  }
  lVar12 = RendererRD::MaterialStorage::get_singleton();
  if (lVar12 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x321;
      pcVar21 = "Parameter \"material_storage\" is null.";
      goto LAB_0010eafe;
    }
    goto LAB_0010efd4;
  }
  uVar13 = FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD::singleton,param_11);
  uVar22 = (int)this + 8;
  uVar14 = FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD::singleton,param_12);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = _LC125;
  auVar28._0_4_ = (float)(int)*param_13;
  auVar28._4_4_ = (float)(int)((ulong)*param_13 >> 0x20);
  auVar28._8_8_ = _LC125;
  *(undefined4 *)(this + 0x28) = param_4;
  auVar27 = divps(auVar27,auVar28);
  *(undefined4 *)(this + 0x38) = param_1;
  uVar10 = (param_15 != 0 & param_14) + 2;
  lVar25 = 0;
  lVar12 = *(long *)(lVar12 + 0x50);
  local_80 = 0;
  *(long *)(this + 8) = auVar27._0_8_;
  *(ulong *)(this + 0x18) = CONCAT44(param_5,param_2);
  *(ulong *)(this + 0x20) = CONCAT44(param_7,param_6);
  *(ulong *)(this + 0x30) = CONCAT44(param_8,param_3);
  local_58[0] = lVar12;
  local_58[1] = param_10;
  iVar11 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar24 = local_80;
  if (iVar11 == 0) {
    do {
      if (uVar24 == 0) {
        lVar18 = 0;
LAB_0010e14d:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar25,lVar18,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar18 = *(long *)(uVar24 + -8);
        if (lVar18 <= lVar25) goto LAB_0010e14d;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(long *)(local_80 + lVar25 * 8) = local_58[lVar25];
        uVar24 = local_80;
      }
      if (lVar25 != 0) break;
      lVar25 = 1;
    } while( true );
  }
  uVar7 = _LC110;
  plVar1 = (long *)(uVar24 + -0x10);
  local_f8[0] = 0;
  if (uVar24 != 0) {
    do {
      lVar25 = *plVar1;
      if (lVar25 == 0) goto LAB_0010dd47;
      LOCK();
      lVar18 = *plVar1;
      bVar26 = lVar25 == lVar18;
      if (bVar26) {
        *plVar1 = lVar25 + 1;
        lVar18 = lVar25;
      }
      UNLOCK();
    } while (!bVar26);
    if (lVar18 != -1) {
      local_f8[0] = local_80;
    }
LAB_0010dd47:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 + -0x10),false);
      }
    }
  }
  local_80 = 0;
  lVar25 = 0;
  local_58[0] = lVar12;
  local_58[1] = param_11;
  iVar11 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar24 = local_80;
  if (iVar11 == 0) {
    do {
      if (uVar24 == 0) {
        lVar18 = 0;
LAB_0010e18f:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar25,lVar18,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar18 = *(long *)(uVar24 - 8);
        if (lVar18 <= lVar25) goto LAB_0010e18f;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(long *)(local_80 + lVar25 * 8) = local_58[lVar25];
        uVar24 = local_80;
      }
      if (lVar25 != 0) break;
      lVar25 = 1;
    } while( true );
  }
  local_e0 = 0;
  plVar1 = (long *)(uVar24 - 0x10);
  local_d8 = 0;
  local_c8[0] = 0;
  local_e8 = uVar7;
  if (uVar24 != 0) {
    do {
      lVar25 = *plVar1;
      if (lVar25 == 0) goto LAB_0010de06;
      LOCK();
      lVar18 = *plVar1;
      bVar26 = lVar25 == lVar18;
      if (bVar26) {
        *plVar1 = lVar25 + 1;
        lVar18 = lVar25;
      }
      UNLOCK();
    } while (!bVar26);
    if (lVar18 != -1) {
      local_c8[0] = local_80;
    }
LAB_0010de06:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 - 0x10),false);
      }
    }
  }
  uVar24 = *(ulong *)(this + 0x1c0);
  uVar6 = (ulong)uVar10;
  if (*(long *)(this + 0x60) == 0) {
    lVar25 = 0;
LAB_0010e1d1:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar6,lVar25,
               "p_variant","variant_defines.size()","",false,false);
LAB_0010e210:
    _err_print_error("gaussian_glow_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp"
                     ,0x341,"Condition \"shader.is_null()\" is true.",0,0);
LAB_0010e235:
    if (local_c8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_c8[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      lVar12 = *plVar1;
      UNLOCK();
joined_r0x0010e45e:
      if (lVar12 == 0) {
        Memory::free_static((void *)(local_c8[0] - 0x10),false);
      }
    }
  }
  else {
    lVar25 = *(long *)(*(long *)(this + 0x60) + -8);
    if (lVar25 <= (long)uVar6) goto LAB_0010e1d1;
    lVar25 = *(long *)(this + 0x70);
    uVar20 = uVar6;
    if (lVar25 == 0) {
LAB_0010e7e1:
      lVar18 = 0;
      uVar20 = uVar6;
      goto LAB_0010e802;
    }
    lVar18 = *(long *)(lVar25 + -8);
    if (lVar18 <= (long)uVar6) goto LAB_0010e802;
    if (*(char *)(lVar25 + uVar6) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010e210;
    }
    if ((uVar24 == 0) || (*(uint *)(this + 0x11c) <= (uint)uVar24)) {
LAB_0010e2e3:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010e210;
    }
    lVar25 = ((uVar24 & 0xffffffff) % (ulong)*(uint *)(this + 0x118)) * 0xa0 +
             *(long *)(*(long *)(this + 0x108) +
                      ((uVar24 & 0xffffffff) / (ulong)*(uint *)(this + 0x118)) * 8);
    if (*(int *)(lVar25 + 0x98) != (int)(uVar24 >> 0x20)) {
      if (*(int *)(lVar25 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010e2e3;
    }
    pVVar2 = (Version *)(this + 0x48);
    iVar11 = (int)lVar25;
    if (*(char *)(lVar25 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar18 = *(long *)(this + 0xc0);
      if (lVar18 != 0) {
        lVar23 = 0;
        do {
          if (*(long *)(lVar18 + -8) <= lVar23) break;
          if (*(char *)(lVar18 + lVar23) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar11);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar11);
          }
          lVar18 = *(long *)(this + 0xc0);
          lVar23 = lVar23 + 1;
        } while (lVar18 != 0);
      }
    }
    lVar23 = *(long *)(this + 0x80);
    if (lVar23 == 0) goto LAB_0010e7e1;
    lVar18 = *(long *)(lVar23 + -8);
    if (lVar18 <= (long)uVar6) goto LAB_0010e802;
    uVar20 = (ulong)*(uint *)(lVar23 + uVar6 * 4);
    lVar23 = *(long *)(lVar25 + 0x68);
    if (lVar23 == 0) {
LAB_0010ed15:
      lVar18 = 0;
      goto LAB_0010e802;
    }
    lVar18 = *(long *)(lVar23 + -8);
    if (lVar18 <= (long)uVar20) goto LAB_0010e802;
    if (*(long *)(lVar23 + uVar20 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar11);
    }
    if (*(char *)(lVar25 + 0x90) == '\0') goto LAB_0010e210;
    lVar25 = *(long *)(lVar25 + 0x88);
    if (lVar25 == 0) goto LAB_0010e7e1;
    lVar18 = *(long *)(lVar25 + -8);
    uVar20 = uVar6;
    if (lVar18 <= (long)uVar6) goto LAB_0010e802;
    lVar25 = *(long *)(lVar25 + uVar6 * 8);
    if (lVar25 == 0) goto LAB_0010e210;
    uVar15 = RenderingDevice::get_singleton();
    local_58[0] = 0;
    local_58[1] = 0;
    local_80 = 0;
    pvVar16 = (void *)RenderingDevice::draw_list_begin(uVar15,uVar13,0,&local_88,0,local_58,0);
    uVar24 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(uVar24 - 0x10),false);
      }
    }
    uVar15 = RenderingDevice::get_singleton();
    pCVar3 = this + uVar6 * 0x138 + 0x1c8;
    uVar17 = RenderingDevice::get_singleton();
    lVar18 = RenderingDevice::framebuffer_get_format(uVar17,uVar13);
    if (*(long *)(pCVar3 + 0x40) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar18 = 0;
    }
    else {
      while( true ) {
        uVar24 = local_88 >> 8;
        local_88 = uVar24 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar24 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + (long)(int)uVar10 * 0x138 + 0x2f8) != 0) {
        plVar19 = *(long **)(this + (long)(int)uVar10 * 0x138 + 0x2f0);
        plVar1 = plVar19 + (ulong)*(uint *)(this + (long)(int)uVar10 * 0x138 + 0x2f8) * 5;
        do {
          if ((((*plVar19 == -1) && (lVar18 == plVar19[1])) &&
              (this[(long)(int)uVar10 * 0x138 + 0x216] == *(CopyEffects *)((long)plVar19 + 0x14)))
             && (((int)plVar19[2] == 0 && ((int)plVar19[3] == 0)))) {
            lVar18 = plVar19[4];
            *pCVar3 = (CopyEffects)0x0;
            goto LAB_0010e4ed;
          }
          plVar19 = plVar19 + 5;
        } while (plVar1 != plVar19);
      }
      lVar18 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar18,0),
                          (uint)(byte)this[(long)(int)uVar10 * 0x138 + 0x216],0);
      *pCVar3 = (CopyEffects)0x0;
    }
LAB_0010e4ed:
    RenderingDevice::draw_list_bind_render_pipeline(uVar15,pvVar16,lVar18);
    uVar13 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_88 = uVar7;
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    if (local_f8[0] == 0) {
      uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar25,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar16,uVar15,0);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_f8);
      lVar18 = local_68[0];
      uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar25,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar16,uVar15,0);
      if (lVar18 != 0) {
        LOCK();
        plVar1 = (long *)(lVar18 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
      }
    }
    local_178 = (char)param_14;
    if (param_15 == 0) {
      iVar11 = (param_14 & 0xff) * 4 + 1;
    }
    else {
      iVar11 = 1;
      if (local_178 != '\0') {
        local_80 = 0;
        local_58[0] = lVar12;
        local_58[1] = param_15;
        iVar11 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
        uVar24 = local_80;
        if (iVar11 == 0) {
          lVar12 = 0;
          do {
            if (uVar24 == 0) {
              lVar18 = 0;
LAB_0010ef0b:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar18,"p_index","size()",""
                         ,false,false);
            }
            else {
              lVar18 = *(long *)(uVar24 + -8);
              if (lVar18 <= lVar12) goto LAB_0010ef0b;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
              *(long *)(local_80 + lVar12 * 8) = local_58[lVar12];
              uVar24 = local_80;
            }
            if (lVar12 != 0) break;
            lVar12 = 1;
          } while( true );
        }
        local_b0 = 0;
        local_a8 = 0;
        local_98[0] = 0;
        local_b8 = uVar7;
        if (uVar24 != 0) {
          plVar1 = (long *)(uVar24 + -0x10);
          do {
            lVar12 = *plVar1;
            if (lVar12 == 0) goto LAB_0010ebd2;
            LOCK();
            lVar18 = *plVar1;
            bVar26 = lVar12 == lVar18;
            if (bVar26) {
              *plVar1 = lVar12 + 1;
              lVar18 = lVar12;
            }
            UNLOCK();
          } while (!bVar26);
          if (lVar18 != -1) {
            local_98[0] = local_80;
          }
LAB_0010ebd2:
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_80 + -0x10),false);
            }
          }
        }
        lVar12 = local_98[0];
        uVar9 = local_b0;
        uVar24 = local_b8;
        uVar13 = RenderingDevice::get_singleton();
        local_80 = CONCAT71(local_80._1_7_,uVar9);
        local_78 = local_a8;
        local_68[0] = 0;
        local_88 = uVar24;
        if (lVar12 == 0) {
          uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar25,1,&local_88)
          ;
          RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar16,uVar15,1);
        }
        else {
          CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
          lVar18 = local_68[0];
          uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar25,1,&local_88)
          ;
          RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar16,uVar15,1);
          if (lVar18 != 0) {
            LOCK();
            plVar1 = (long *)(lVar18 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_68[0] + -0x10),false);
            }
            lVar12 = local_98[0];
            if (local_98[0] == 0) goto LAB_0010ecdd;
          }
          LOCK();
          plVar1 = (long *)(lVar12 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_98[0] + -0x10),false);
          }
        }
LAB_0010ecdd:
        iVar11 = 5;
      }
    }
    *(int *)(this + 0x10) = iVar11;
    lVar12 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar12,pvVar16,uVar22);
    lVar12 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar12,SUB81(pvVar16,0),0,1);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
    uVar24 = *(ulong *)(this + 0x1c0);
    if (*(long *)(this + 0x60) == 0) {
      lVar12 = 0;
LAB_0010edf3:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar12,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0010e70e:
      _err_print_error("gaussian_glow_raster",
                       "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x355,
                       "Condition \"shader.is_null()\" is true.",0,0);
      goto LAB_0010e235;
    }
    lVar12 = *(long *)(*(long *)(this + 0x60) + -8);
    if (lVar12 < 3) goto LAB_0010edf3;
    lVar12 = *(long *)(this + 0x70);
    if (lVar12 == 0) {
LAB_0010eaad:
      lVar18 = 0;
LAB_0010eab0:
      uVar20 = 2;
LAB_0010e802:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar18,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar18 = *(long *)(lVar12 + -8);
    if (lVar18 < 3) goto LAB_0010eab0;
    if (*(char *)(lVar12 + 2) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010e70e;
    }
    if ((uVar24 == 0) || (*(uint *)(this + 0x11c) <= (uint)uVar24)) {
LAB_0010eede:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010e70e;
    }
    lVar12 = ((uVar24 & 0xffffffff) % (ulong)*(uint *)(this + 0x118)) * 0xa0 +
             *(long *)(*(long *)(this + 0x108) +
                      ((uVar24 & 0xffffffff) / (ulong)*(uint *)(this + 0x118)) * 8);
    if (*(int *)(lVar12 + 0x98) != (int)(uVar24 >> 0x20)) {
      if (*(int *)(lVar12 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010eede;
    }
    iVar11 = (int)lVar12;
    if (*(char *)(lVar12 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar25 = *(long *)(this + 0xc0);
      if (lVar25 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(lVar25 + -8) <= lVar18) break;
          if (*(char *)(lVar25 + lVar18) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar11);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar11);
          }
          lVar25 = *(long *)(this + 0xc0);
          lVar18 = lVar18 + 1;
        } while (lVar25 != 0);
      }
    }
    lVar25 = *(long *)(this + 0x80);
    if (lVar25 == 0) goto LAB_0010eaad;
    lVar18 = *(long *)(lVar25 + -8);
    if (lVar18 < 3) goto LAB_0010eab0;
    uVar20 = (ulong)*(uint *)(lVar25 + 8);
    lVar25 = *(long *)(lVar12 + 0x68);
    if (lVar25 == 0) goto LAB_0010ed15;
    lVar18 = *(long *)(lVar25 + -8);
    if (lVar18 <= (long)uVar20) goto LAB_0010e802;
    if (*(long *)(lVar25 + uVar20 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar11);
    }
    if (*(char *)(lVar12 + 0x90) == '\0') goto LAB_0010e70e;
    lVar12 = *(long *)(lVar12 + 0x88);
    if (lVar12 == 0) goto LAB_0010eaad;
    lVar18 = *(long *)(lVar12 + -8);
    if (lVar18 < 3) goto LAB_0010eab0;
    lVar12 = *(long *)(lVar12 + 0x10);
    if (lVar12 == 0) goto LAB_0010e70e;
    uVar13 = RenderingDevice::get_singleton();
    local_58[0] = 0;
    local_58[1] = 0;
    local_80 = 0;
    pvVar16 = (void *)RenderingDevice::draw_list_begin(uVar13,uVar14,0,&local_88,0,local_58,0);
    uVar24 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(uVar24 + -0x10),false);
      }
    }
    uVar13 = RenderingDevice::get_singleton();
    pCVar3 = this + 0x438;
    uVar15 = RenderingDevice::get_singleton();
    lVar25 = RenderingDevice::framebuffer_get_format(uVar15,uVar14);
    if (*(long *)(this + 0x478) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar25 = 0;
    }
    else {
      while( true ) {
        uVar24 = local_88 >> 8;
        local_88 = uVar24 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar24 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + 0x568) != 0) {
        plVar19 = *(long **)(this + 0x560);
        plVar1 = plVar19 + (ulong)*(uint *)(this + 0x568) * 5;
        do {
          if ((((*plVar19 == -1) && (lVar25 == plVar19[1])) &&
              (this[0x486] == *(CopyEffects *)((long)plVar19 + 0x14))) &&
             (((int)plVar19[2] == 0 && ((int)plVar19[3] == 0)))) {
            lVar25 = plVar19[4];
            this[0x438] = (CopyEffects)0x0;
            goto LAB_0010e32d;
          }
          plVar19 = plVar19 + 5;
        } while (plVar19 != plVar1);
      }
      lVar25 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar25,0),(uint)(byte)this[0x486],0);
      this[0x438] = (CopyEffects)0x0;
    }
LAB_0010e32d:
    RenderingDevice::draw_list_bind_render_pipeline(uVar13,pvVar16,lVar25);
    uVar13 = RenderingDevice::get_singleton();
    uVar24 = local_c8[0];
    local_68[0] = 0;
    local_88 = local_e8;
    local_80 = CONCAT71(local_80._1_7_,local_e0);
    local_78 = local_d8;
    if (local_c8[0] != 0) {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
      lVar25 = local_68[0];
      uVar14 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar12,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar16,uVar14,0);
      if (lVar25 != 0) {
        LOCK();
        plVar1 = (long *)(lVar25 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        uVar24 = local_c8[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          uVar24 = local_c8[0];
        }
        goto LAB_0010e406;
      }
      *(undefined4 *)(this + 0x10) = 0;
      lVar12 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar12,pvVar16,uVar22);
      lVar12 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar12,SUB81(pvVar16,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
LAB_0010e458:
      LOCK();
      plVar1 = (long *)(uVar24 - 0x10);
      *plVar1 = *plVar1 + -1;
      lVar12 = *plVar1;
      UNLOCK();
      goto joined_r0x0010e45e;
    }
    uVar14 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar12,0,&local_88);
    RenderingDevice::draw_list_bind_uniform_set(uVar13,pvVar16,uVar14,0);
LAB_0010e406:
    *(undefined4 *)(this + 0x10) = 0;
    lVar12 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar12,pvVar16,uVar22);
    lVar12 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar12,SUB81(pvVar16,0),0,1);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
    if (uVar24 != 0) goto LAB_0010e458;
  }
  if (local_f8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_f8[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_f8[0] + -0x10),false);
        return;
      }
      goto LAB_0010efd4;
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010efd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::make_mipmap(RID, RID, Vector2i const&) */

void __thiscall
RendererRD::CopyEffects::make_mipmap
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  long *plVar1;
  Version *pVVar2;
  code *pcVar3;
  uint uVar4;
  UniformSetCacheRD *pUVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  byte bVar19;
  ulong local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  bVar19 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = 0x367;
        pcVar14 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010f8d9:
        _err_print_error("make_mipmap","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                         uVar12,pcVar14,0,0);
        return;
      }
      goto LAB_0010f993;
    }
    lVar8 = RendererRD::MaterialStorage::get_singleton();
    if (lVar8 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = 0x369;
        pcVar14 = "Parameter \"material_storage\" is null.";
        goto LAB_0010f8d9;
      }
      goto LAB_0010f993;
    }
    uVar4 = (int)this + 0x918;
    *(undefined8 *)(this + 0x918) = 0;
    *(undefined8 *)(this + 0x970) = 0;
    puVar16 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
    for (uVar13 = (ulong)((uVar4 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8))
                          + 0x60 >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar16 = 0;
      puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
    }
    local_80 = 0;
    *(uint *)(this + 0x920) = *param_4;
    *(uint *)(this + 0x924) = param_4[1];
    local_58[0] = *(long *)(lVar8 + 0x50);
    local_58[1] = param_2;
    iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar13 = local_80;
    if (iVar7 == 0) {
      lVar8 = 0;
      do {
        if (uVar13 == 0) {
          lVar17 = 0;
LAB_0010f5b3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar17,"p_index","size()","",
                     false,false);
        }
        else {
          lVar17 = *(long *)(uVar13 - 8);
          if (lVar17 <= lVar8) goto LAB_0010f5b3;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar8 * 8) = local_58[lVar8];
          uVar13 = local_80;
        }
        if (lVar8 != 0) break;
        lVar8 = 1;
      } while( true );
    }
    plVar1 = (long *)(uVar13 - 0x10);
    local_c8[0] = 0;
    if (uVar13 != 0) {
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) goto LAB_0010f177;
        LOCK();
        lVar17 = *plVar1;
        bVar18 = lVar8 == lVar17;
        if (bVar18) {
          *plVar1 = lVar8 + 1;
          lVar17 = lVar8;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar17 != -1) {
        local_c8[0] = local_80;
      }
LAB_0010f177:
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 - 0x10),false);
        }
      }
    }
    uVar12 = _LC20;
    local_b0 = 0;
    uVar13 = *(ulong *)(this + 0xaf0);
    local_98[0] = 0;
    local_b8 = _LC20;
    local_a8 = param_3;
    if (*(long *)(this + 0x990) == 0) {
      lVar8 = 0;
LAB_0010f603:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,9,lVar8,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0010f640:
      _err_print_error("make_mipmap","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x37a,
                       "Condition \"shader.is_null()\" is true.",0,0);
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0x990) + -8);
      if (lVar8 < 10) goto LAB_0010f603;
      lVar8 = *(long *)(this + 0x9a0);
      if (lVar8 == 0) {
LAB_0010f818:
        lVar17 = 0;
LAB_0010f81b:
        uVar13 = 9;
LAB_0010f83b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar17,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar17 = *(long *)(lVar8 + -8);
      if (lVar17 < 10) goto LAB_0010f81b;
      if (*(char *)(lVar8 + 9) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_0010f640;
      }
      if ((uVar13 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar13)) {
LAB_0010f6f0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_0010f640;
      }
      lVar8 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
              *(long *)(*(long *)(this + 0xa38) +
                       ((uVar13 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
      if (*(int *)(lVar8 + 0x98) != (int)(uVar13 >> 0x20)) {
        if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010f6f0;
      }
      pVVar2 = (Version *)(this + 0x978);
      iVar7 = (int)lVar8;
      if (*(char *)(lVar8 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar17 = *(long *)(this + 0x9f0);
        if (lVar17 != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(lVar17 + -8) <= lVar15) break;
            if (*(char *)(lVar17 + lVar15) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar7);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar7);
            }
            lVar17 = *(long *)(this + 0x9f0);
            lVar15 = lVar15 + 1;
          } while (lVar17 != 0);
        }
      }
      lVar15 = *(long *)(this + 0x9b0);
      if (lVar15 == 0) goto LAB_0010f818;
      lVar17 = *(long *)(lVar15 + -8);
      if (lVar17 < 10) goto LAB_0010f81b;
      uVar13 = (ulong)*(uint *)(lVar15 + 0x24);
      lVar15 = *(long *)(lVar8 + 0x68);
      if (lVar15 == 0) {
        lVar17 = 0;
        goto LAB_0010f83b;
      }
      lVar17 = *(long *)(lVar15 + -8);
      if (lVar17 <= (long)uVar13) goto LAB_0010f83b;
      if (*(long *)(lVar15 + uVar13 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar7);
      }
      uVar13 = local_c8[0];
      if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_0010f640;
      lVar8 = *(long *)(lVar8 + 0x88);
      if (lVar8 == 0) goto LAB_0010f818;
      lVar17 = *(long *)(lVar8 + -8);
      if (lVar17 < 10) goto LAB_0010f81b;
      lVar8 = *(long *)(lVar8 + 0x48);
      if (lVar8 == 0) goto LAB_0010f640;
      RenderingDevice::get_singleton();
      pvVar9 = (void *)RenderingDevice::compute_list_begin();
      uVar10 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar10,pvVar9,*(undefined8 *)(this + 0xb40));
      uVar10 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = 1;
      local_80 = local_80 & 0xffffffffffffff00;
      local_78 = 0;
      if (uVar13 == 0) {
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
LAB_0010f7b2:
        uVar10 = RenderingDevice::get_singleton();
        local_88 = uVar12;
        local_80 = local_80 & 0xffffffffffffff00;
LAB_0010f7e3:
        local_68[0] = 0;
        local_78 = local_a8;
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar12,3);
        lVar17 = 0;
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
        lVar17 = local_68[0];
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
        if (lVar17 == 0) goto LAB_0010f7b2;
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
        lVar17 = local_98[0];
        uVar6 = local_b0;
        uVar12 = local_b8;
        uVar10 = RenderingDevice::get_singleton();
        local_68[0] = 0;
        local_88 = uVar12;
        local_80 = CONCAT71(local_80._1_7_,uVar6);
        local_78 = local_a8;
        if (lVar17 == 0) goto LAB_0010f7e3;
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar15 = local_68[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,3,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar12,3);
        if (lVar15 != 0) {
          LOCK();
          plVar1 = (long *)(lVar15 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar17 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            lVar17 = local_98[0];
          }
        }
      }
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar8,pvVar9,uVar4);
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar8,(uint)pvVar9,*param_4,param_4[1]);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (lVar17 != 0) {
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_98[0] + -0x10),false);
        }
      }
    }
    if (local_c8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_c8[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_c8[0] - 0x10),false);
          return;
        }
        goto LAB_0010f993;
      }
    }
  }
  else {
    _err_print_error("make_mipmap","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x364,
                     "Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use the compute version of the make_mipmap shader with the mobile renderer."
                     ,0,0);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f993:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::make_mipmap_raster(RID, RID, Vector2i const&) */

void __thiscall
RendererRD::CopyEffects::make_mipmap_raster
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  uint *puVar5;
  code *pcVar6;
  UniformSetCacheRD *pUVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong local_98 [2];
  ulong local_88;
  ulong local_80 [3];
  long local_68 [2];
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    _err_print_error("make_mipmap_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x386,"Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t use the raster version of mipmap with the clustered renderer.",0,0);
    goto LAB_0010fe68;
  }
  uVar9 = FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD::singleton,param_3);
  pUVar7 = UniformSetCacheRD::singleton;
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x38b;
      pcVar16 = "Parameter \"uniform_set_cache\" is null.";
LAB_001101c2:
      _err_print_error("make_mipmap_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp"
                       ,uVar9,pcVar16,0,0);
      return;
    }
    goto LAB_001102aa;
  }
  lVar10 = RendererRD::MaterialStorage::get_singleton();
  if (lVar10 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x38d;
      pcVar16 = "Parameter \"material_storage\" is null.";
      goto LAB_001101c2;
    }
    goto LAB_001102aa;
  }
  uVar17 = (int)this + 8;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  local_58[0] = *(long *)(lVar10 + 0x50);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = _LC125;
  auVar22._0_4_ = (float)(int)*param_4;
  auVar22._4_4_ = (float)(int)((ulong)*param_4 >> 0x20);
  local_80[0] = 0;
  auVar22._8_8_ = _LC125;
  auVar21 = divps(auVar21,auVar22);
  *(long *)(this + 8) = auVar21._0_8_;
  local_58[1] = param_2;
  iVar8 = CowData<RID>::resize<false>((CowData<RID> *)local_80,2);
  uVar15 = local_80[0];
  if (iVar8 == 0) {
    lVar10 = 0;
    do {
      if (uVar15 == 0) {
        lVar18 = 0;
LAB_0010fda2:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar18,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar18 = *(long *)(uVar15 - 8);
        if (lVar18 <= lVar10) goto LAB_0010fda2;
        CowData<RID>::_copy_on_write((CowData<RID> *)local_80);
        *(long *)(local_80[0] + lVar10 * 8) = local_58[lVar10];
        uVar15 = local_80[0];
      }
      if (lVar10 != 0) break;
      lVar10 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar15 - 0x10);
  local_98[0] = 0;
  if (uVar15 != 0) {
    do {
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_0010facc;
      LOCK();
      lVar18 = *plVar1;
      bVar20 = lVar10 == lVar18;
      if (bVar20) {
        *plVar1 = lVar10 + 1;
        lVar18 = lVar10;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar18 != -1) {
      local_98[0] = local_80[0];
    }
LAB_0010facc:
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80[0] - 0x10),false);
      }
    }
  }
  uVar15 = *(ulong *)(this + 0x1c0);
  if (*(long *)(this + 0x60) == 0) {
    lVar10 = 0;
LAB_0010fdeb:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar10,
               "p_variant","variant_defines.size()","",false,false);
LAB_0010fe28:
    _err_print_error("make_mipmap_raster","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x39c,"Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) goto LAB_00110049;
    }
LAB_0010fe68:
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(this + 0x60) + -8);
    if (lVar10 < 1) goto LAB_0010fdeb;
    pcVar16 = *(char **)(this + 0x70);
    if (pcVar16 == (char *)0x0) {
LAB_0011010d:
      lVar10 = 0;
LAB_00110110:
      uVar15 = 0;
LAB_0011012d:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar10 = *(long *)(pcVar16 + -8);
    if (lVar10 < 1) goto LAB_00110110;
    if (*pcVar16 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_0010fe28;
    }
    if ((uVar15 == 0) || (*(uint *)(this + 0x11c) <= (uint)uVar15)) {
LAB_0010fed0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_0010fe28;
    }
    lVar18 = ((uVar15 & 0xffffffff) % (ulong)*(uint *)(this + 0x118)) * 0xa0 +
             *(long *)(*(long *)(this + 0x108) +
                      ((uVar15 & 0xffffffff) / (ulong)*(uint *)(this + 0x118)) * 8);
    if (*(int *)(lVar18 + 0x98) != (int)(uVar15 >> 0x20)) {
      if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010fed0;
    }
    pVVar2 = (Version *)(this + 0x48);
    iVar8 = (int)lVar18;
    if (*(char *)(lVar18 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar10 = *(long *)(this + 0xc0);
      if (lVar10 != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(lVar10 + -8) <= lVar19) break;
          if (*(char *)(lVar10 + lVar19) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar8);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar8);
          }
          lVar10 = *(long *)(this + 0xc0);
          lVar19 = lVar19 + 1;
        } while (lVar10 != 0);
      }
    }
    puVar5 = *(uint **)(this + 0x80);
    if (puVar5 == (uint *)0x0) goto LAB_0011010d;
    lVar10 = *(long *)(puVar5 + -2);
    if (lVar10 < 1) goto LAB_00110110;
    uVar15 = (ulong)*puVar5;
    lVar19 = *(long *)(lVar18 + 0x68);
    if (lVar19 == 0) {
      lVar10 = 0;
      goto LAB_0011012d;
    }
    lVar10 = *(long *)(lVar19 + -8);
    if (lVar10 <= (long)uVar15) goto LAB_0011012d;
    if (*(long *)(lVar19 + uVar15 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar8);
    }
    if (*(char *)(lVar18 + 0x90) == '\0') goto LAB_0010fe28;
    plVar1 = *(long **)(lVar18 + 0x88);
    if (plVar1 == (long *)0x0) goto LAB_0011010d;
    lVar10 = plVar1[-1];
    if (lVar10 < 1) goto LAB_00110110;
    lVar10 = *plVar1;
    if (lVar10 == 0) goto LAB_0010fe28;
    uVar11 = RenderingDevice::get_singleton();
    local_80[0] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    pvVar12 = (void *)RenderingDevice::draw_list_begin(uVar11,uVar9,0,&local_88,0,local_58,0);
    uVar15 = local_80[0];
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80[0] = 0;
        Memory::free_static((void *)(uVar15 - 0x10),false);
      }
    }
    uVar11 = RenderingDevice::get_singleton();
    pCVar3 = this + 0x1c8;
    uVar13 = RenderingDevice::get_singleton();
    lVar18 = RenderingDevice::framebuffer_get_format(uVar13,uVar9);
    if (*(long *)(this + 0x208) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar18 = 0;
    }
    else {
      while( true ) {
        uVar15 = local_88 >> 8;
        local_88 = uVar15 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_88 = uVar15 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + 0x2f8) != 0) {
        plVar14 = *(long **)(this + 0x2f0);
        plVar1 = plVar14 + (ulong)*(uint *)(this + 0x2f8) * 5;
        do {
          if ((((*plVar14 == -1) && (lVar18 == plVar14[1])) &&
              (this[0x216] == *(CopyEffects *)((long)plVar14 + 0x14))) &&
             (((int)plVar14[2] == 0 && ((int)plVar14[3] == 0)))) {
            lVar18 = plVar14[4];
            this[0x1c8] = (CopyEffects)0x0;
            goto LAB_0010ff40;
          }
          plVar14 = plVar14 + 5;
        } while (plVar1 != plVar14);
      }
      lVar18 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar18,0),(uint)(byte)this[0x216],0);
      this[0x1c8] = (CopyEffects)0x0;
    }
LAB_0010ff40:
    RenderingDevice::draw_list_bind_render_pipeline(uVar11,pvVar12,lVar18);
    uVar9 = RenderingDevice::get_singleton();
    uVar15 = local_98[0];
    local_68[0] = 0;
    local_88 = 1;
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    local_80[1] = 0;
    if (local_98[0] == 0) {
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar10,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar9,pvVar12,uVar11,0);
LAB_0010fff2:
      lVar10 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar10,pvVar12,uVar17);
      lVar10 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar10,SUB81(pvVar12,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      if (uVar15 == 0) goto LAB_0010fe68;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar18 = local_68[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar10,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar9,pvVar12,uVar11,0);
      if (lVar18 != 0) {
        LOCK();
        plVar1 = (long *)(lVar18 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        uVar15 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          uVar15 = local_98[0];
        }
        goto LAB_0010fff2;
      }
      lVar10 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar10,pvVar12,uVar17);
      lVar10 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar10,SUB81(pvVar12,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
    }
    LOCK();
    plVar1 = (long *)(uVar15 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010fe68;
LAB_00110049:
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)(local_98[0] - 0x10),false);
      return;
    }
  }
LAB_001102aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::set_color(RID, Color const&, Rect2i const&, bool) */

void __thiscall
RendererRD::CopyEffects::set_color
          (CopyEffects *this,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,uint param_5
          )

{
  Version *pVVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  UniformSetCacheRD *pUVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_48;
  long local_40;
  ulong uVar19;
  
  pUVar6 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*this != (CopyEffects)0x0) {
    _err_print_error("set_color","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x3a8,
                     "Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use the compute version of the set_color shader with the mobile renderer."
                     ,0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001108bb;
  }
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001108bb;
    uVar14 = 0x3ab;
    pcVar13 = "Parameter \"uniform_set_cache\" is null.";
    goto LAB_00110516;
  }
  uVar5 = (int)this + 0x918;
  *(undefined8 *)(this + 0x918) = 0;
  uVar18 = (param_5 & 0xff) + 7;
  uVar19 = (ulong)uVar18;
  *(undefined8 *)(this + 0x970) = 0;
  puVar16 = (undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)((uVar5 - (int)(undefined8 *)((ulong)(this + 0x920) & 0xfffffffffffffff8)) +
                        0x60 >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  uVar2 = *param_3;
  uVar10 = *(ulong *)(this + 0xaf0);
  *(undefined4 *)(this + 0x920) = param_4[2];
  *(undefined4 *)(this + 0x924) = param_4[3];
  *(undefined4 *)(this + 0x928) = *param_4;
  uVar3 = param_4[1];
  *(undefined4 *)(this + 0x968) = uVar2;
  uVar2 = param_3[1];
  *(undefined4 *)(this + 0x92c) = uVar3;
  *(undefined4 *)(this + 0x96c) = uVar2;
  *(undefined4 *)(this + 0x970) = param_3[2];
  *(undefined4 *)(this + 0x974) = param_3[3];
  if (*(long *)(this + 0x990) == 0) {
    lVar11 = 0;
LAB_00110823:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar19,lVar11
               ,"p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar11 = *(long *)(*(long *)(this + 0x990) + -8);
    if (lVar11 <= (long)uVar19) goto LAB_00110823;
    lVar11 = *(long *)(this + 0x9a0);
    uVar12 = uVar19;
    if (lVar11 == 0) {
LAB_001106c0:
      lVar17 = 0;
      uVar12 = uVar19;
LAB_001106e1:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar17,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar17 = *(long *)(lVar11 + -8);
    if (lVar17 <= (long)uVar19) goto LAB_001106e1;
    if (*(char *)(lVar11 + uVar19) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_001104f0;
    }
    if ((uVar10 == 0) || (*(uint *)(this + 0xa4c) <= (uint)uVar10)) {
LAB_00110690:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
    }
    else {
      lVar11 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0xa48)) * 0xa0 +
               *(long *)(*(long *)(this + 0xa38) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0xa48)) * 8);
      if (*(int *)(lVar11 + 0x98) != (int)(uVar10 >> 0x20)) {
        if (*(int *)(lVar11 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00110690;
      }
      pVVar1 = (Version *)(this + 0x978);
      iVar15 = (int)lVar11;
      if (*(char *)(lVar11 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar1);
        lVar17 = *(long *)(this + 0x9f0);
        if (lVar17 != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(lVar17 + -8) <= lVar9) break;
            if (*(char *)(lVar17 + lVar9) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar1,iVar15);
            }
            else {
              ShaderRD::_compile_version_start(pVVar1,iVar15);
            }
            lVar17 = *(long *)(this + 0x9f0);
            lVar9 = lVar9 + 1;
          } while (lVar17 != 0);
        }
      }
      lVar9 = *(long *)(this + 0x9b0);
      if (lVar9 == 0) goto LAB_001106c0;
      lVar17 = *(long *)(lVar9 + -8);
      if (lVar17 <= (long)uVar19) goto LAB_001106e1;
      uVar12 = (ulong)*(uint *)(lVar9 + uVar19 * 4);
      lVar9 = *(long *)(lVar11 + 0x68);
      if (lVar9 == 0) {
        lVar17 = 0;
        goto LAB_001106e1;
      }
      lVar17 = *(long *)(lVar9 + -8);
      if (lVar17 <= (long)uVar12) goto LAB_001106e1;
      if (*(long *)(lVar9 + uVar12 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar1,iVar15);
      }
      if (*(char *)(lVar11 + 0x90) != '\0') {
        lVar11 = *(long *)(lVar11 + 0x88);
        if (lVar11 == 0) goto LAB_001106c0;
        lVar17 = *(long *)(lVar11 + -8);
        uVar12 = uVar19;
        if (lVar17 <= (long)uVar19) goto LAB_001106e1;
        lVar11 = *(long *)(lVar11 + uVar19 * 8);
        if (lVar11 != 0) {
          RenderingDevice::get_singleton();
          pvVar7 = (void *)RenderingDevice::compute_list_begin();
          uVar14 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar14,pvVar7,*(undefined8 *)(this + (long)(int)uVar18 * 8 + 0xaf8));
          uVar14 = RenderingDevice::get_singleton();
          local_68 = 3;
          local_60 = 0;
          local_48 = 0;
          local_58 = param_2;
          uVar8 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar11,3,&local_68);
          RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar7,uVar8,3);
          lVar11 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_set_push_constant(lVar11,pvVar7,uVar5);
          lVar11 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_dispatch_threads(lVar11,(uint)pvVar7,param_4[2],param_4[3]);
          RenderingDevice::get_singleton();
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            RenderingDevice::compute_list_end();
            return;
          }
          goto LAB_001108bb;
        }
      }
    }
  }
LAB_001104f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar14 = 0x3bf;
    pcVar13 = "Condition \"shader.is_null()\" is true.";
LAB_00110516:
    _err_print_error("set_color","servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar14,
                     pcVar13,0,0);
    return;
  }
LAB_001108bb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::CopyEffects::copy_cubemap_to_dp(RID, RID, Rect2 const&, Vector2 const&, float, float,
   bool) */

void __thiscall
RendererRD::CopyEffects::copy_cubemap_to_dp
          (undefined4 param_1,undefined4 param_2,CopyEffects *this,undefined8 param_4,
          undefined8 param_5,float *param_6,float *param_7,char param_8)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  float __x;
  uint *puVar5;
  code *pcVar6;
  UniformSetCacheRD *pUVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  long *plVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  ulong local_b8 [2];
  ulong local_a8;
  ulong local_a0 [3];
  long local_88 [2];
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  long local_58 [5];
  
  pUVar7 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x3e9;
      pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_0011111c:
      _err_print_error("copy_cubemap_to_dp","servers/rendering/renderer_rd/effects/copy_effects.cpp"
                       ,uVar11,pcVar15,0,0);
      return;
    }
    goto LAB_00111243;
  }
  lVar9 = RendererRD::MaterialStorage::get_singleton();
  if (lVar9 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x3eb;
      pcVar15 = "Parameter \"material_storage\" is null.";
      goto LAB_0011111c;
    }
    goto LAB_00111243;
  }
  __x = *param_7;
  fVar24 = param_7[1];
  fVar20 = roundf((__x / param_6[2]) * *param_6);
  fVar21 = roundf(param_6[1] * (fVar24 / param_6[3]));
  fVar22 = roundf(__x);
  fVar23 = roundf(fVar24);
  local_60 = _LC46 / __x;
  local_78 = (int)fVar20;
  iStack_74 = (int)fVar21;
  iStack_70 = (int)fVar22;
  iStack_6c = (int)fVar23;
  uVar25 = 0;
  fVar24 = _LC46 / fVar24;
  if (param_8 != '\0') {
    local_60 = (float)((uint)local_60 ^ __LC137);
  }
  local_58[0] = *(long *)(lVar9 + 0x50);
  local_a0[0] = 0;
  local_68 = CONCAT44(param_1,param_2);
  local_5c = fVar24;
  local_58[1] = param_4;
  iVar8 = CowData<RID>::resize<false>((CowData<RID> *)local_a0,2);
  uVar10 = local_a0[0];
  if (iVar8 == 0) {
    lVar16 = 0;
    do {
      if (uVar10 == 0) {
        lVar17 = 0;
LAB_00110c62:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar17,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar17 = *(long *)(uVar10 - 8);
        if (lVar17 <= lVar16) goto LAB_00110c62;
        CowData<RID>::_copy_on_write((CowData<RID> *)local_a0);
        *(long *)(local_a0[0] + lVar16 * 8) = local_58[lVar16];
        uVar10 = local_a0[0];
      }
      if (lVar16 != 0) break;
      lVar16 = 1;
    } while( true );
  }
  plVar1 = (long *)(uVar10 - 0x10);
  local_b8[0] = 0;
  if (uVar10 != 0) {
    do {
      lVar16 = *plVar1;
      if (lVar16 == 0) goto LAB_00110a94;
      LOCK();
      lVar17 = *plVar1;
      bVar19 = lVar16 == lVar17;
      if (bVar19) {
        *plVar1 = lVar16 + 1;
        lVar17 = lVar16;
      }
      UNLOCK();
    } while (!bVar19);
    if (lVar17 != -1) {
      local_b8[0] = local_a0[0];
    }
LAB_00110a94:
    if (local_a0[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_a0[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_a0[0] - 0x10),false);
      }
    }
  }
  uVar10 = *(ulong *)(this + 0x15d8);
  if (*(long *)(this + 0x1478) == 0) {
    lVar16 = 0;
LAB_0011116e:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar16,
               "p_variant","variant_defines.size()","",false,false);
LAB_00110bb3:
    _err_print_error("copy_cubemap_to_dp","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x402,"Condition \"shader.is_null()\" is true.",0,0);
    if (local_b8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_b8[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
LAB_00111049:
        Memory::free_static((void *)(local_b8[0] - 0x10),false);
      }
    }
  }
  else {
    lVar16 = *(long *)(*(long *)(this + 0x1478) + -8);
    if (lVar16 < 1) goto LAB_0011116e;
    pcVar15 = *(char **)(this + 0x1488);
    if (pcVar15 == (char *)0x0) {
LAB_00110e9a:
      lVar16 = 0;
LAB_00110e9d:
      uVar10 = 0;
LAB_00110eba:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar10,lVar16,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar16 = *(long *)(pcVar15 + -8);
    if (lVar16 < 1) goto LAB_00110e9d;
    if (*pcVar15 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00110bb3;
    }
    if ((uVar10 == 0) || (*(uint *)(this + 0x1534) <= (uint)uVar10)) {
LAB_00110e70:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00110bb3;
    }
    lVar17 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x1530)) * 0xa0 +
             *(long *)(*(long *)(this + 0x1520) +
                      ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x1530)) * 8);
    if (*(int *)(lVar17 + 0x98) != (int)(uVar10 >> 0x20)) {
      if (*(int *)(lVar17 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00110e70;
    }
    pVVar2 = (Version *)(this + 0x1460);
    iVar8 = (int)lVar17;
    if (*(char *)(lVar17 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar16 = *(long *)(this + 0x14d8);
      if (lVar16 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(lVar16 + -8) <= lVar18) break;
          if (*(char *)(lVar16 + lVar18) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar8);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar8);
          }
          lVar16 = *(long *)(this + 0x14d8);
          lVar18 = lVar18 + 1;
        } while (lVar16 != 0);
      }
    }
    puVar5 = *(uint **)(this + 0x1498);
    if (puVar5 == (uint *)0x0) goto LAB_00110e9a;
    lVar16 = *(long *)(puVar5 + -2);
    if (lVar16 < 1) goto LAB_00110e9d;
    uVar10 = (ulong)*puVar5;
    lVar18 = *(long *)(lVar17 + 0x68);
    if (lVar18 == 0) {
      lVar16 = 0;
      goto LAB_00110eba;
    }
    lVar16 = *(long *)(lVar18 + -8);
    if (lVar16 <= (long)uVar10) goto LAB_00110eba;
    if (*(long *)(lVar18 + uVar10 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar8);
    }
    if (*(char *)(lVar17 + 0x90) == '\0') goto LAB_00110bb3;
    plVar1 = *(long **)(lVar17 + 0x88);
    if (plVar1 == (long *)0x0) goto LAB_00110e9a;
    lVar16 = plVar1[-1];
    if (lVar16 < 1) goto LAB_00110e9d;
    lVar16 = *plVar1;
    if (lVar16 == 0) goto LAB_00110bb3;
    uVar11 = RenderingDevice::get_singleton();
    local_58[0] = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_78);
    local_58[1] = CONCAT44(uVar25,fVar24);
    local_a0[0] = 0;
    pvVar12 = (void *)RenderingDevice::draw_list_begin
                                (_LC46,uVar11,param_5,0,&local_a8,0,local_58,0);
    uVar10 = local_a0[0];
    if (local_a0[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_a0[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0[0] = 0;
        Memory::free_static((void *)(uVar10 - 0x10),false);
      }
    }
    uVar11 = RenderingDevice::get_singleton();
    pCVar3 = this + 0x15e0;
    uVar13 = RenderingDevice::get_singleton();
    lVar17 = RenderingDevice::framebuffer_get_format(uVar13,param_5);
    if (*(long *)(this + 0x1620) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar17 = 0;
    }
    else {
      while( true ) {
        uVar10 = local_a8 >> 8;
        local_a8 = uVar10 << 8;
        LOCK();
        CVar4 = *pCVar3;
        if (CVar4 == (CopyEffects)0x0) {
          *pCVar3 = (CopyEffects)0x1;
        }
        UNLOCK();
        if (CVar4 == (CopyEffects)0x0) break;
        local_a8 = uVar10 << 8;
        do {
        } while (*pCVar3 != (CopyEffects)0x0);
      }
      if (*(uint *)(this + 0x1710) != 0) {
        plVar14 = *(long **)(this + 0x1708);
        plVar1 = plVar14 + (ulong)*(uint *)(this + 0x1710) * 5;
        do {
          if ((((*plVar14 == -1) && (lVar17 == plVar14[1])) &&
              (this[0x162e] == *(CopyEffects *)((long)plVar14 + 0x14))) &&
             (((int)plVar14[2] == 0 && ((int)plVar14[3] == 0)))) {
            lVar17 = plVar14[4];
            this[0x15e0] = (CopyEffects)0x0;
            goto LAB_00110f20;
          }
          plVar14 = plVar14 + 5;
        } while (plVar14 != plVar1);
      }
      lVar17 = PipelineCacheRD::_generate_version
                         ((long)pCVar3,-1,SUB81(lVar17,0),(uint)(byte)this[0x162e],0);
      this[0x15e0] = (CopyEffects)0x0;
    }
LAB_00110f20:
    RenderingDevice::draw_list_bind_render_pipeline(uVar11,pvVar12,lVar17);
    uVar11 = RenderingDevice::get_singleton();
    uVar10 = local_b8[0];
    local_88[0] = 0;
    local_a8 = 1;
    local_a0[0] = local_a0[0] & 0xffffffffffffff00;
    local_a0[1] = 0;
    if (local_b8[0] == 0) {
      uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar16,0,&local_a8);
      RenderingDevice::draw_list_bind_uniform_set(uVar11,pvVar12,uVar13,0);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)local_b8);
      lVar17 = local_88[0];
      uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar16,0,&local_a8);
      RenderingDevice::draw_list_bind_uniform_set(uVar11,pvVar12,uVar13,0);
      if (lVar17 != 0) {
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        uVar10 = local_b8[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_88[0] + -0x10),false);
          uVar10 = local_b8[0];
        }
      }
    }
    uVar11 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_index_array(uVar11,pvVar12,*(undefined8 *)(lVar9 + 0x100));
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar9,pvVar12,(uint)&local_68);
    lVar9 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar9,SUB81(pvVar12,0),1,1);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
    if (uVar10 != 0) {
      LOCK();
      plVar1 = (long *)(uVar10 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00110bf0;
      goto LAB_00111049;
    }
  }
LAB_00110bf0:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00111243:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::cubemap_downsample(RID, RID, Vector2i const&) */

void __thiscall
RendererRD::CopyEffects::cubemap_downsample
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  Version *pVVar2;
  uint *puVar3;
  code *pcVar4;
  UniformSetCacheRD *pUVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 *local_98 [2];
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar11 = 0x412;
        pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_00111af9:
        _err_print_error("cubemap_downsample",
                         "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar11,pcVar15,0,0
                        );
        return;
      }
      goto LAB_00111c71;
    }
    lVar9 = RendererRD::MaterialStorage::get_singleton();
    if (lVar9 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar11 = 0x414;
        pcVar15 = "Parameter \"material_storage\" is null.";
        goto LAB_00111af9;
      }
      goto LAB_00111c71;
    }
    iVar6 = *param_4;
    local_58[0] = *(long *)(lVar9 + 0x50);
    *(undefined4 *)(this + 0x171c) = 0;
    *(int *)(this + 0x1718) = iVar6;
    local_80 = (undefined8 *)0x0;
    local_58[1] = param_2;
    iVar6 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    puVar13 = local_80;
    if (iVar6 == 0) {
      lVar9 = 0;
      do {
        if (puVar13 == (undefined8 *)0x0) {
          lVar16 = 0;
LAB_00111863:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar16,"p_index","size()","",
                     false,false);
        }
        else {
          lVar16 = *(long *)((long)puVar13 + -8);
          if (lVar16 <= lVar9) goto LAB_00111863;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)((long)local_80 + lVar9 * 8) = local_58[lVar9];
          puVar13 = local_80;
        }
        if (lVar9 != 0) break;
        lVar9 = 1;
      } while( true );
    }
    plVar1 = (long *)((long)puVar13 + -0x10);
    local_c8[0] = 0;
    if (puVar13 != (undefined8 *)0x0) {
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_00111356;
        LOCK();
        lVar16 = *plVar1;
        bVar18 = lVar9 == lVar16;
        if (bVar18) {
          *plVar1 = lVar9 + 1;
          lVar16 = lVar9;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar16 != -1) {
        local_c8[0] = (long)local_80;
      }
LAB_00111356:
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = (long *)((long)local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)((long)local_80 + -0x10),false);
        }
      }
    }
    local_80 = (undefined8 *)0x0;
    iVar6 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,1);
    puVar13 = local_80;
    if (iVar6 == 0) {
      if (local_80 == (undefined8 *)0x0) {
        lVar9 = 0;
LAB_00111c26:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar9,"p_index","size()","",false,false
                  );
        goto LAB_0011139f;
      }
      lVar9 = local_80[-1];
      if (lVar9 < 1) goto LAB_00111c26;
      CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
      *local_80 = param_3;
      puVar13 = local_80;
LAB_001117fb:
      local_98[0] = (undefined8 *)0x0;
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 3;
      plVar1 = puVar13 + -2;
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_0011182a;
        LOCK();
        lVar16 = *plVar1;
        bVar18 = lVar9 == lVar16;
        if (bVar18) {
          *plVar1 = lVar9 + 1;
          lVar16 = lVar9;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar16 != -1) {
        local_98[0] = local_80;
      }
LAB_0011182a:
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_80 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_80 + -2,false);
        }
      }
    }
    else {
LAB_0011139f:
      local_b0 = 0;
      local_a8 = 0;
      local_98[0] = (undefined8 *)0x0;
      local_b8 = 3;
      if (puVar13 != (undefined8 *)0x0) goto LAB_001117fb;
    }
    uVar14 = *(ulong *)(this + 0x1a18);
    if (*(long *)(this + 0x1740) == 0) {
      lVar9 = 0;
LAB_001118b3:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar9,
                 "p_variant","variant_defines.size()","",false,false);
LAB_001118f0:
      _err_print_error("cubemap_downsample","servers/rendering/renderer_rd/effects/copy_effects.cpp"
                       ,0x420,"Condition \"shader.is_null()\" is true.",0,0);
      if (local_98[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_98[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
LAB_001116fd:
          Memory::free_static(local_98[0] + -2,false);
        }
      }
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 0x1740) + -8);
      if (lVar9 < 1) goto LAB_001118b3;
      pcVar15 = *(char **)(this + 0x1750);
      if (pcVar15 == (char *)0x0) {
LAB_00111a70:
        lVar9 = 0;
LAB_00111a73:
        uVar14 = 0;
LAB_00111a90:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar9 = *(long *)(pcVar15 + -8);
      if (lVar9 < 1) goto LAB_00111a73;
      if (*pcVar15 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_001118f0;
      }
      if ((uVar14 == 0) || (*(uint *)(this + 0x17fc) <= (uint)uVar14)) {
LAB_00111bc0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_001118f0;
      }
      lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x17f8)) * 0xa0 +
               *(long *)(*(long *)(this + 0x17e8) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x17f8)) * 8);
      if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00111bc0;
      }
      pVVar2 = (Version *)(this + 0x1728);
      iVar6 = (int)lVar16;
      if (*(char *)(lVar16 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar9 = *(long *)(this + 0x17a0);
        if (lVar9 != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(lVar9 + -8) <= lVar17) break;
            if (*(char *)(lVar9 + lVar17) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar6);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar6);
            }
            lVar9 = *(long *)(this + 0x17a0);
            lVar17 = lVar17 + 1;
          } while (lVar9 != 0);
        }
      }
      puVar3 = *(uint **)(this + 0x1760);
      if (puVar3 == (uint *)0x0) goto LAB_00111a70;
      lVar9 = *(long *)(puVar3 + -2);
      if (lVar9 < 1) goto LAB_00111a73;
      uVar14 = (ulong)*puVar3;
      lVar17 = *(long *)(lVar16 + 0x68);
      if (lVar17 == 0) {
        lVar9 = 0;
        goto LAB_00111a90;
      }
      lVar9 = *(long *)(lVar17 + -8);
      if (lVar9 <= (long)uVar14) goto LAB_00111a90;
      if (*(long *)(lVar17 + uVar14 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar6);
      }
      if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_001118f0;
      plVar1 = *(long **)(lVar16 + 0x88);
      if (plVar1 == (long *)0x0) goto LAB_00111a70;
      lVar9 = plVar1[-1];
      if (lVar9 < 1) goto LAB_00111a73;
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_001118f0;
      RenderingDevice::get_singleton();
      pvVar10 = (void *)RenderingDevice::compute_list_begin();
      uVar11 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar11,pvVar10,*(undefined8 *)(this + 0x1a20));
      uVar11 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = 1;
      local_80 = (undefined8 *)((ulong)local_80 & 0xffffffffffffff00);
      local_78 = 0;
      if (local_c8[0] == 0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar9,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
        lVar16 = local_68[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar9,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
        if (lVar16 != 0) {
          LOCK();
          plVar1 = (long *)(lVar16 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
          }
        }
      }
      uVar11 = RenderingDevice::get_singleton();
      puVar13 = local_98[0];
      local_68[0] = 0;
      local_88 = local_b8;
      local_80 = (undefined8 *)CONCAT71(local_80._1_7_,local_b0);
      local_78 = local_a8;
      if (local_98[0] == (undefined8 *)0x0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar9,1,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar16 = local_68[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar9,1,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,1);
        if (lVar16 != 0) {
          LOCK();
          plVar1 = (long *)(lVar16 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          puVar13 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            puVar13 = local_98[0];
          }
        }
      }
      iVar7 = *param_4 + 7;
      iVar6 = *param_4 + 0xe;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      iVar8 = param_4[1] + 7;
      iVar7 = param_4[1] + 0xe;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar9,pvVar10,(int)this + 0x1718);
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch(lVar9,(uint)pvVar10,iVar6 >> 3,iVar7 >> 3);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = puVar13 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_0011170d;
        goto LAB_001116fd;
      }
    }
LAB_0011170d:
    if (local_c8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_c8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_c8[0] + -0x10),false);
          return;
        }
        goto LAB_00111c71;
      }
    }
  }
  else {
    _err_print_error("cubemap_downsample","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x40f,"Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use compute based cubemap downsample with the mobile renderer.",0,0);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00111c71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::cubemap_downsample_raster(RID, RID, unsigned int, Vector2i const&) */

void __thiscall
RendererRD::CopyEffects::cubemap_downsample_raster
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 *param_5)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  uint *puVar5;
  code *pcVar6;
  UniformSetCacheRD *pUVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  ulong local_98 [2];
  ulong local_88;
  ulong local_80 [3];
  long local_68 [2];
  long local_58 [5];
  
  pUVar7 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    _err_print_error("cubemap_downsample_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x432,
                     "Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t use raster based cubemap downsample with the clustered renderer.",0,0);
  }
  else if (param_4 < 6) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x436;
        pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_0011242a:
        _err_print_error("cubemap_downsample_raster",
                         "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar10,pcVar15,0,0
                        );
        return;
      }
      goto LAB_001125d9;
    }
    lVar9 = RendererRD::MaterialStorage::get_singleton();
    if (lVar9 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x438;
        pcVar15 = "Parameter \"material_storage\" is null.";
        goto LAB_0011242a;
      }
      goto LAB_001125d9;
    }
    local_58[0] = *(long *)(lVar9 + 0x50);
    lVar9 = 0;
    *(ulong *)(this + 0x1718) = CONCAT44(param_4,*param_5);
    local_80[0] = 0;
    local_58[1] = param_2;
    iVar8 = CowData<RID>::resize<false>((CowData<RID> *)local_80,2);
    uVar14 = local_80[0];
    if (iVar8 == 0) {
      do {
        if (uVar14 == 0) {
          lVar17 = 0;
LAB_0011205b:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar17,"p_index","size()","",
                     false,false);
        }
        else {
          lVar17 = *(long *)(uVar14 - 8);
          if (lVar17 <= lVar9) goto LAB_0011205b;
          CowData<RID>::_copy_on_write((CowData<RID> *)local_80);
          *(long *)(local_80[0] + lVar9 * 8) = local_58[lVar9];
          uVar14 = local_80[0];
        }
        if (lVar9 != 0) break;
        lVar9 = 1;
      } while( true );
    }
    plVar1 = (long *)(uVar14 - 0x10);
    local_98[0] = 0;
    if (uVar14 != 0) {
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_00111d8c;
        LOCK();
        lVar17 = *plVar1;
        bVar19 = lVar9 == lVar17;
        if (bVar19) {
          *plVar1 = lVar9 + 1;
          lVar17 = lVar9;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar17 != -1) {
        local_98[0] = local_80[0];
      }
LAB_00111d8c:
      if (local_80[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_80[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80[0] - 0x10),false);
        }
      }
    }
    uVar14 = *(ulong *)(this + 0x1a18);
    if (*(long *)(this + 0x18b8) != 0) {
      lVar9 = *(long *)(*(long *)(this + 0x18b8) + -8);
      if (lVar9 < 1) goto LAB_0011247c;
      pcVar15 = *(char **)(this + 0x18c8);
      if (pcVar15 == (char *)0x0) {
LAB_00112341:
        lVar9 = 0;
LAB_00112344:
        uVar14 = 0;
LAB_00112361:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar9 = *(long *)(pcVar15 + -8);
      if (lVar9 < 1) goto LAB_00112344;
      if (*pcVar15 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_001120c0;
      }
      if ((uVar14 == 0) || (*(uint *)(this + 0x1974) <= (uint)uVar14)) {
LAB_001124f9:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_001120c0;
      }
      lVar17 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x1970)) * 0xa0 +
               *(long *)(*(long *)(this + 0x1960) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x1970)) * 8);
      if (*(int *)(lVar17 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar17 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_001124f9;
      }
      pVVar2 = (Version *)(this + 0x18a0);
      iVar8 = (int)lVar17;
      if (*(char *)(lVar17 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar9 = *(long *)(this + 0x1918);
        if (lVar9 != 0) {
          lVar18 = 0;
          do {
            if (*(long *)(lVar9 + -8) <= lVar18) break;
            if (*(char *)(lVar9 + lVar18) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar8);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar8);
            }
            lVar9 = *(long *)(this + 0x1918);
            lVar18 = lVar18 + 1;
          } while (lVar9 != 0);
        }
      }
      puVar5 = *(uint **)(this + 0x18d8);
      if (puVar5 == (uint *)0x0) goto LAB_00112341;
      lVar9 = *(long *)(puVar5 + -2);
      if (lVar9 < 1) goto LAB_00112344;
      uVar14 = (ulong)*puVar5;
      lVar18 = *(long *)(lVar17 + 0x68);
      if (lVar18 == 0) {
        lVar9 = 0;
        goto LAB_00112361;
      }
      lVar9 = *(long *)(lVar18 + -8);
      if (lVar9 <= (long)uVar14) goto LAB_00112361;
      if (*(long *)(lVar18 + uVar14 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar8);
      }
      if (*(char *)(lVar17 + 0x90) == '\0') goto LAB_001120c0;
      plVar1 = *(long **)(lVar17 + 0x88);
      if (plVar1 == (long *)0x0) goto LAB_00112341;
      lVar9 = plVar1[-1];
      if (lVar9 < 1) goto LAB_00112344;
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_001120c0;
      uVar10 = RenderingDevice::get_singleton();
      local_80[0] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      pvVar11 = (void *)RenderingDevice::draw_list_begin(uVar10,param_3,0,&local_88,0,local_58,0);
      uVar14 = local_80[0];
      if (local_80[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_80[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80[0] = 0;
          Memory::free_static((void *)(uVar14 - 0x10),false);
        }
      }
      uVar10 = RenderingDevice::get_singleton();
      pCVar3 = this + 0x1a28;
      uVar12 = RenderingDevice::get_singleton();
      lVar17 = RenderingDevice::framebuffer_get_format(uVar12,param_3);
      if (*(long *)(this + 0x1a68) == 0) {
        _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h"
                         ,0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                         "Attempted to use an unused shader variant (shader is null),",0,0);
        lVar17 = 0;
      }
      else {
        while( true ) {
          uVar14 = local_88 >> 8;
          local_88 = uVar14 << 8;
          LOCK();
          CVar4 = *pCVar3;
          if (CVar4 == (CopyEffects)0x0) {
            *pCVar3 = (CopyEffects)0x1;
          }
          UNLOCK();
          if (CVar4 == (CopyEffects)0x0) break;
          local_88 = uVar14 << 8;
          do {
          } while (*pCVar3 != (CopyEffects)0x0);
        }
        if (*(uint *)(this + 7000) != 0) {
          plVar13 = *(long **)(this + 0x1b50);
          plVar1 = plVar13 + (ulong)*(uint *)(this + 7000) * 5;
          do {
            if ((((*plVar13 == -1) && (lVar17 == plVar13[1])) &&
                (this[0x1a76] == *(CopyEffects *)((long)plVar13 + 0x14))) &&
               (((int)plVar13[2] == 0 && ((int)plVar13[3] == 0)))) {
              lVar17 = plVar13[4];
              this[0x1a28] = (CopyEffects)0x0;
              goto LAB_00112170;
            }
            plVar13 = plVar13 + 5;
          } while (plVar1 != plVar13);
        }
        lVar17 = PipelineCacheRD::_generate_version
                           ((long)pCVar3,-1,SUB81(lVar17,0),(uint)(byte)this[0x1a76],0);
        this[0x1a28] = (CopyEffects)0x0;
      }
LAB_00112170:
      uVar16 = (int)this + 0x1718;
      RenderingDevice::draw_list_bind_render_pipeline(uVar10,pvVar11,lVar17);
      uVar10 = RenderingDevice::get_singleton();
      uVar14 = local_98[0];
      local_68[0] = 0;
      local_88 = 1;
      local_80[0] = local_80[0] & 0xffffffffffffff00;
      local_80[1] = 0;
      if (local_98[0] == 0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar9,0,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar10,pvVar11,uVar12,0);
LAB_00112229:
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_set_push_constant(lVar9,pvVar11,uVar16);
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_draw(lVar9,SUB81(pvVar11,0),0,1);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
        if (uVar14 == 0) goto LAB_00112100;
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar17 = local_68[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar9,0,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar10,pvVar11,uVar12,0);
        if (lVar17 != 0) {
          LOCK();
          plVar1 = (long *)(lVar17 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          uVar14 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            uVar14 = local_98[0];
          }
          goto LAB_00112229;
        }
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_set_push_constant(lVar9,pvVar11,uVar16);
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_draw(lVar9,SUB81(pvVar11,0),0,1);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
      }
      LOCK();
      plVar1 = (long *)(uVar14 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00112100;
LAB_00112280:
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_98[0] - 0x10),false);
        return;
      }
      goto LAB_001125d9;
    }
    lVar9 = 0;
LAB_0011247c:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar9,
               "p_variant","variant_defines.size()","",false,false);
LAB_001120c0:
    _err_print_error("cubemap_downsample_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x443,
                     "Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) goto LAB_00112280;
    }
  }
  else {
    _err_print_error("cubemap_downsample_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x433,
                     "Condition \"p_face_id >= 6\" is true.",
                     "Raster implementation of cubemap downsample must process one side at a time.",
                     0,0);
  }
LAB_00112100:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001125d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::cubemap_filter_raster(RID, RID, unsigned int, unsigned int) */

void __thiscall
RendererRD::CopyEffects::cubemap_filter_raster
          (CopyEffects *this,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 param_5)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  code *pcVar5;
  UniformSetCacheRD *pUVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  ulong local_d8;
  ulong local_a8 [2];
  ulong local_98;
  ulong local_90 [3];
  long local_78 [2];
  undefined4 local_68;
  uint local_64;
  long local_58 [5];
  
  pUVar6 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    _err_print_error("cubemap_filter_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x47d,
                     "Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t use raster based cubemap filter with the clustered renderer.",0,0);
  }
  else if (param_4 < 6) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x481;
        pcVar16 = "Parameter \"uniform_set_cache\" is null.";
LAB_00112da3:
        _err_print_error("cubemap_filter_raster",
                         "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar10,pcVar16,0,0
                        );
        return;
      }
      goto LAB_00112f0c;
    }
    lVar9 = RendererRD::MaterialStorage::get_singleton();
    if (lVar9 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x483;
        pcVar16 = "Parameter \"material_storage\" is null.";
        goto LAB_00112da3;
      }
      goto LAB_00112f0c;
    }
    local_58[0] = *(long *)(lVar9 + 0x90);
    lVar9 = 0;
    local_90[0] = 0;
    local_68 = param_5;
    local_64 = param_4;
    local_58[1] = param_2;
    iVar8 = CowData<RID>::resize<false>((CowData<RID> *)local_90,2);
    uVar18 = local_90[0];
    if (iVar8 == 0) {
      do {
        if (uVar18 == 0) {
          lVar13 = 0;
LAB_001129da:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar13,"p_index","size()","",
                     false,false);
        }
        else {
          lVar13 = *(long *)(uVar18 - 8);
          if (lVar13 <= lVar9) goto LAB_001129da;
          CowData<RID>::_copy_on_write((CowData<RID> *)local_90);
          *(long *)(local_90[0] + lVar9 * 8) = local_58[lVar9];
          uVar18 = local_90[0];
        }
        if (lVar9 != 0) break;
        lVar9 = 1;
      } while( true );
    }
    plVar1 = (long *)(uVar18 - 0x10);
    local_a8[0] = 0;
    if (uVar18 != 0) {
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_001126e6;
        LOCK();
        lVar13 = *plVar1;
        bVar20 = lVar9 == lVar13;
        if (bVar20) {
          *plVar1 = lVar9 + 1;
          lVar13 = lVar9;
        }
        UNLOCK();
      } while (!bVar20);
      if (lVar13 != -1) {
        local_a8[0] = local_90[0];
      }
LAB_001126e6:
      if (local_90[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_90[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_90[0] - 0x10),false);
        }
      }
    }
    uVar18 = *(ulong *)(this + 0x1e50);
    bVar7 = (byte)this[0x2370] ^ 1;
    local_d8 = (ulong)(byte)this[0x2370] ^ 1;
    uVar17 = (ulong)bVar7;
    if (*(long *)(this + 0x1cf0) == 0) {
      lVar9 = 0;
LAB_00112df5:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar17,
                 lVar9,"p_variant","variant_defines.size()","",false,false);
LAB_00112a40:
      _err_print_error("cubemap_filter_raster",
                       "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x492,
                       "Condition \"shader.is_null()\" is true.",0,0);
      if (local_a8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_a8[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) goto LAB_00112c14;
      }
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 0x1cf0) + -8);
      if (lVar9 <= (long)uVar17) goto LAB_00112df5;
      lVar9 = *(long *)(this + 0x1d00);
      uVar15 = uVar17;
      if (lVar9 == 0) {
LAB_00112cb5:
        lVar13 = 0;
        uVar15 = uVar17;
LAB_00112cd6:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar13,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar13 = *(long *)(lVar9 + -8);
      if (lVar13 <= (long)uVar17) goto LAB_00112cd6;
      if (*(char *)(lVar9 + uVar17) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_00112a40;
      }
      if ((uVar18 == 0) || (*(uint *)(this + 0x1dac) <= (uint)uVar18)) {
LAB_00112e73:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_00112a40;
      }
      lVar9 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(this + 0x1da8)) * 0xa0 +
              *(long *)(*(long *)(this + 0x1d98) +
                       ((uVar18 & 0xffffffff) / (ulong)*(uint *)(this + 0x1da8)) * 8);
      if (*(int *)(lVar9 + 0x98) != (int)(uVar18 >> 0x20)) {
        if (*(int *)(lVar9 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00112e73;
      }
      pVVar2 = (Version *)(this + 0x1cd8);
      iVar8 = (int)lVar9;
      if (*(char *)(lVar9 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar13 = *(long *)(this + 0x1d50);
        if (lVar13 != 0) {
          lVar19 = 0;
          do {
            if (*(long *)(lVar13 + -8) <= lVar19) break;
            if (*(char *)(lVar13 + lVar19) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar8);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar8);
            }
            lVar13 = *(long *)(this + 0x1d50);
            lVar19 = lVar19 + 1;
          } while (lVar13 != 0);
        }
      }
      lVar19 = *(long *)(this + 0x1d10);
      if (lVar19 == 0) goto LAB_00112cb5;
      lVar13 = *(long *)(lVar19 + -8);
      if (lVar13 <= (long)uVar17) goto LAB_00112cd6;
      uVar15 = (ulong)*(uint *)(lVar19 + uVar17 * 4);
      lVar19 = *(long *)(lVar9 + 0x68);
      if (lVar19 == 0) {
        lVar13 = 0;
        goto LAB_00112cd6;
      }
      lVar13 = *(long *)(lVar19 + -8);
      if (lVar13 <= (long)uVar15) goto LAB_00112cd6;
      if (*(long *)(lVar19 + uVar15 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar8);
      }
      if (*(char *)(lVar9 + 0x90) == '\0') goto LAB_00112a40;
      lVar9 = *(long *)(lVar9 + 0x88);
      if (lVar9 == 0) goto LAB_00112cb5;
      lVar13 = *(long *)(lVar9 + -8);
      uVar15 = uVar17;
      if (lVar13 <= (long)uVar17) goto LAB_00112cd6;
      lVar9 = *(long *)(lVar9 + uVar17 * 8);
      if (lVar9 == 0) goto LAB_00112a40;
      uVar10 = RenderingDevice::get_singleton();
      local_90[0] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      pvVar11 = (void *)RenderingDevice::draw_list_begin
                                  (_LC46,uVar10,param_3,0,&local_98,0,local_58,0);
      uVar18 = local_90[0];
      if (local_90[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_90[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90[0] = 0;
          Memory::free_static((void *)(uVar18 - 0x10),false);
        }
      }
      uVar10 = RenderingDevice::get_singleton();
      uVar12 = RenderingDevice::get_singleton();
      pCVar3 = this + (ulong)(-(uint)bVar7 & 0x138) + 0x1e78;
      lVar13 = RenderingDevice::framebuffer_get_format(uVar12,param_3);
      if (*(long *)(pCVar3 + 0x40) == 0) {
        _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h"
                         ,0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                         "Attempted to use an unused shader variant (shader is null),",0,0);
        lVar13 = 0;
      }
      else {
        while( true ) {
          uVar18 = local_98 >> 8;
          local_98 = uVar18 << 8;
          LOCK();
          CVar4 = *pCVar3;
          if (CVar4 == (CopyEffects)0x0) {
            *pCVar3 = (CopyEffects)0x1;
          }
          UNLOCK();
          if (CVar4 == (CopyEffects)0x0) break;
          local_98 = uVar18 << 8;
          do {
          } while (*pCVar3 != (CopyEffects)0x0);
        }
        if (*(uint *)(this + local_d8 * 0x138 + 0x1fa8) != 0) {
          plVar14 = *(long **)(this + local_d8 * 0x138 + 0x1fa0);
          plVar1 = plVar14 + (ulong)*(uint *)(this + local_d8 * 0x138 + 0x1fa8) * 5;
          do {
            if ((((*plVar14 == -1) && (lVar13 == plVar14[1])) &&
                (this[local_d8 * 0x138 + 0x1ec6] == *(CopyEffects *)((long)plVar14 + 0x14))) &&
               (((int)plVar14[2] == 0 && ((int)plVar14[3] == 0)))) {
              lVar13 = plVar14[4];
              *pCVar3 = (CopyEffects)0x0;
              goto LAB_00112aed;
            }
            plVar14 = plVar14 + 5;
          } while (plVar14 != plVar1);
        }
        lVar13 = PipelineCacheRD::_generate_version
                           ((long)pCVar3,-1,SUB81(lVar13,0),
                            (uint)(byte)this[local_d8 * 0x138 + 0x1ec6],0);
        *pCVar3 = (CopyEffects)0x0;
      }
LAB_00112aed:
      RenderingDevice::draw_list_bind_render_pipeline(uVar10,pvVar11,lVar13);
      uVar10 = RenderingDevice::get_singleton();
      uVar18 = local_a8[0];
      local_78[0] = 0;
      local_98 = 1;
      local_90[0] = local_90[0] & 0xffffffffffffff00;
      local_90[1] = 0;
      if (local_a8[0] == 0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,0,&local_98);
        RenderingDevice::draw_list_bind_uniform_set(uVar10,pvVar11,uVar12,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_a8);
        lVar13 = local_78[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,0,&local_98);
        RenderingDevice::draw_list_bind_uniform_set(uVar10,pvVar11,uVar12,0);
        if (lVar13 != 0) {
          LOCK();
          plVar1 = (long *)(lVar13 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          uVar18 = local_a8[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_78[0] + -0x10),false);
            uVar18 = local_a8[0];
          }
        }
      }
      uVar10 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_uniform_set(uVar10,pvVar11,*(undefined8 *)(this + 0x2358),1);
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar9,pvVar11,(uint)&local_68);
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar9,SUB81(pvVar11,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      if (uVar18 == 0) goto LAB_00112a80;
      LOCK();
      plVar1 = (long *)(uVar18 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00112a80;
LAB_00112c14:
      Memory::free_static((void *)(local_a8[0] - 0x10),false);
    }
  }
  else {
    _err_print_error("cubemap_filter_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x47e,
                     "Condition \"p_face_id >= 6\" is true.",
                     "Raster implementation of cubemap filter must process one side at a time.",0,0)
    ;
  }
LAB_00112a80:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112f0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::cubemap_roughness(RID, RID, unsigned int, unsigned int, float, float) */

void __thiscall
RendererRD::CopyEffects::cubemap_roughness
          (float param_1,float param_2,CopyEffects *this,undefined8 param_4,undefined8 param_5,
          uint param_6,undefined4 param_7)

{
  long *plVar1;
  Version *pVVar2;
  uint *puVar3;
  code *pcVar4;
  UniformSetCacheRD *pUVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  char *pcVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 *local_98 [2];
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x4a3;
        pcVar14 = "Parameter \"uniform_set_cache\" is null.";
LAB_00113819:
        _err_print_error("cubemap_roughness",
                         "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar10,pcVar14,0,0
                        );
        return;
      }
      goto LAB_00113991;
    }
    lVar8 = RendererRD::MaterialStorage::get_singleton();
    if (lVar8 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x4a5;
        pcVar14 = "Parameter \"material_storage\" is null.";
        goto LAB_00113819;
      }
      goto LAB_00113991;
    }
    *(undefined8 *)(this + 0x238c) = 0;
    uVar15 = 0;
    if (param_6 < 10) {
      uVar15 = param_6;
    }
    *(undefined4 *)(this + 0x237c) = param_7;
    *(undefined4 *)(this + 0x2394) = 0;
    local_58[0] = *(long *)(lVar8 + 0x90);
    *(uint *)(this + 0x2378) = uVar15;
    *(float *)(this + 0x2380) = param_1 * param_1;
    *(float *)(this + 0x2388) = param_2;
    local_80 = (undefined8 *)0x0;
    uVar15 = (uint)!NAN(param_1);
    if (param_1 != 0.0) {
      uVar15 = 0;
    }
    *(uint *)(this + 0x2384) = uVar15;
    local_58[1] = param_4;
    iVar6 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    puVar12 = local_80;
    if (iVar6 == 0) {
      lVar8 = 0;
      do {
        if (puVar12 == (undefined8 *)0x0) {
          lVar16 = 0;
LAB_0011358b:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar16,"p_index","size()","",
                     false,false);
        }
        else {
          lVar16 = *(long *)((long)puVar12 + -8);
          if (lVar16 <= lVar8) goto LAB_0011358b;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)((long)local_80 + lVar8 * 8) = local_58[lVar8];
          puVar12 = local_80;
        }
        if (lVar8 != 0) break;
        lVar8 = 1;
      } while( true );
    }
    plVar1 = (long *)((long)puVar12 + -0x10);
    local_c8[0] = 0;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) goto LAB_00113088;
        LOCK();
        lVar16 = *plVar1;
        bVar18 = lVar8 == lVar16;
        if (bVar18) {
          *plVar1 = lVar8 + 1;
          lVar16 = lVar8;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar16 != -1) {
        local_c8[0] = (long)local_80;
      }
LAB_00113088:
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = (long *)((long)local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)((long)local_80 + -0x10),false);
        }
      }
    }
    local_80 = (undefined8 *)0x0;
    iVar6 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,1);
    puVar12 = local_80;
    if (iVar6 == 0) {
      if (local_80 == (undefined8 *)0x0) {
        lVar8 = 0;
LAB_00113946:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar8,"p_index","size()","",false,false
                  );
        goto LAB_001130d1;
      }
      lVar8 = local_80[-1];
      if (lVar8 < 1) goto LAB_00113946;
      CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
      *local_80 = param_5;
      puVar12 = local_80;
LAB_00113529:
      local_98[0] = (undefined8 *)0x0;
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 3;
      plVar1 = puVar12 + -2;
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) goto LAB_00113557;
        LOCK();
        lVar16 = *plVar1;
        bVar18 = lVar8 == lVar16;
        if (bVar18) {
          *plVar1 = lVar8 + 1;
          lVar16 = lVar8;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar16 != -1) {
        local_98[0] = local_80;
      }
LAB_00113557:
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_80 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_80 + -2,false);
        }
      }
    }
    else {
LAB_001130d1:
      local_b0 = 0;
      local_a8 = 0;
      local_98[0] = (undefined8 *)0x0;
      local_b8 = 3;
      if (puVar12 != (undefined8 *)0x0) goto LAB_00113529;
    }
    uVar13 = *(ulong *)(this + 0x2688);
    if (*(long *)(this + 0x23b0) == 0) {
      lVar8 = 0;
LAB_001135db:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar8,
                 "p_variant","variant_defines.size()","",false,false);
LAB_00113618:
      _err_print_error("cubemap_roughness","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       0x4b7,"Condition \"shader.is_null()\" is true.",0,0);
      if (local_98[0] != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_98[0] + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
LAB_00113427:
          Memory::free_static(local_98[0] + -2,false);
        }
      }
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0x23b0) + -8);
      if (lVar8 < 1) goto LAB_001135db;
      pcVar14 = *(char **)(this + 0x23c0);
      if (pcVar14 == (char *)0x0) {
LAB_00113790:
        lVar8 = 0;
LAB_00113793:
        uVar13 = 0;
LAB_001137b0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = *(long *)(pcVar14 + -8);
      if (lVar8 < 1) goto LAB_00113793;
      if (*pcVar14 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_00113618;
      }
      if ((uVar13 == 0) || (*(uint *)(this + 0x246c) <= (uint)uVar13)) {
LAB_001138e0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_00113618;
      }
      lVar16 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(this + 0x2468)) * 0xa0 +
               *(long *)(*(long *)(this + 0x2458) +
                        ((uVar13 & 0xffffffff) / (ulong)*(uint *)(this + 0x2468)) * 8);
      if (*(int *)(lVar16 + 0x98) != (int)(uVar13 >> 0x20)) {
        if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_001138e0;
      }
      pVVar2 = (Version *)(this + 0x2398);
      iVar6 = (int)lVar16;
      if (*(char *)(lVar16 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar8 = *(long *)(this + 0x2410);
        if (lVar8 != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(lVar8 + -8) <= lVar17) break;
            if (*(char *)(lVar8 + lVar17) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar6);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar6);
            }
            lVar8 = *(long *)(this + 0x2410);
            lVar17 = lVar17 + 1;
          } while (lVar8 != 0);
        }
      }
      puVar3 = *(uint **)(this + 0x23d0);
      if (puVar3 == (uint *)0x0) goto LAB_00113790;
      lVar8 = *(long *)(puVar3 + -2);
      if (lVar8 < 1) goto LAB_00113793;
      uVar13 = (ulong)*puVar3;
      lVar17 = *(long *)(lVar16 + 0x68);
      if (lVar17 == 0) {
        lVar8 = 0;
        goto LAB_001137b0;
      }
      lVar8 = *(long *)(lVar17 + -8);
      if (lVar8 <= (long)uVar13) goto LAB_001137b0;
      if (*(long *)(lVar17 + uVar13 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar6);
      }
      if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_00113618;
      plVar1 = *(long **)(lVar16 + 0x88);
      if (plVar1 == (long *)0x0) goto LAB_00113790;
      lVar8 = plVar1[-1];
      if (lVar8 < 1) goto LAB_00113793;
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_00113618;
      RenderingDevice::get_singleton();
      pvVar9 = (void *)RenderingDevice::compute_list_begin();
      uVar10 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar10,pvVar9,*(undefined8 *)(this + 0x2690));
      uVar10 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = 1;
      local_80 = (undefined8 *)((ulong)local_80 & 0xffffffffffffff00);
      local_78 = 0;
      if (local_c8[0] == 0) {
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
        lVar16 = local_68[0];
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,0);
        if (lVar16 != 0) {
          LOCK();
          plVar1 = (long *)(lVar16 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
          }
        }
      }
      uVar10 = RenderingDevice::get_singleton();
      puVar12 = local_98[0];
      local_68[0] = 0;
      local_88 = local_b8;
      local_80 = (undefined8 *)CONCAT71(local_80._1_7_,local_b0);
      local_78 = local_a8;
      if (local_98[0] == (undefined8 *)0x0) {
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,1,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar16 = local_68[0];
        uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar8,1,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar11,1);
        if (lVar16 != 0) {
          LOCK();
          plVar1 = (long *)(lVar16 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          puVar12 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            puVar12 = local_98[0];
          }
        }
      }
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar8,pvVar9,(int)this + 0x2378);
      iVar7 = (int)param_2 + 7;
      iVar6 = (int)param_2 + 0xe;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch(lVar8,(uint)pvVar9,iVar6 >> 3,iVar6 >> 3);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = puVar12 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_00113437;
        goto LAB_00113427;
      }
    }
LAB_00113437:
    if (local_c8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_c8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_c8[0] + -0x10),false);
          return;
        }
        goto LAB_00113991;
      }
    }
  }
  else {
    _err_print_error("cubemap_roughness","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                     0x4a0,"Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use compute based cubemap roughness with the mobile renderer.",0,0);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00113991:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::cubemap_roughness_raster(RID, RID, unsigned int, unsigned int, float,
   float) */

void __thiscall
RendererRD::CopyEffects::cubemap_roughness_raster
          (float param_1,undefined4 param_2,CopyEffects *this,undefined8 param_4,undefined8 param_5,
          uint param_6,undefined4 param_7)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  uint *puVar5;
  code *pcVar6;
  UniformSetCacheRD *pUVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  ulong local_98 [2];
  ulong local_88;
  ulong local_80 [3];
  long local_68 [2];
  long local_58 [5];
  
  pUVar7 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    _err_print_error("cubemap_roughness_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x4ca,
                     "Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t use raster based cubemap roughness with the clustered renderer.",0,0);
  }
  else if (param_6 < 6) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x4ce;
        pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_00114192:
        _err_print_error("cubemap_roughness_raster",
                         "servers/rendering/renderer_rd/effects/copy_effects.cpp",uVar10,pcVar15,0,0
                        );
        return;
      }
      goto LAB_00114345;
    }
    lVar9 = RendererRD::MaterialStorage::get_singleton();
    if (lVar9 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x4d0;
        pcVar15 = "Parameter \"material_storage\" is null.";
        goto LAB_00114192;
      }
      goto LAB_00114345;
    }
    *(uint *)(this + 0x2378) = param_6;
    *(undefined8 *)(this + 0x238c) = 0;
    *(undefined4 *)(this + 0x2394) = 0;
    local_58[0] = *(long *)(lVar9 + 0x90);
    *(undefined4 *)(this + 0x237c) = param_7;
    *(undefined4 *)(this + 0x2388) = param_2;
    *(float *)(this + 0x2380) = param_1 * param_1;
    local_80[0] = 0;
    uVar16 = (uint)!NAN(param_1);
    if (param_1 != 0.0) {
      uVar16 = 0;
    }
    lVar9 = 0;
    *(uint *)(this + 0x2384) = uVar16;
    local_58[1] = param_4;
    iVar8 = CowData<RID>::resize<false>((CowData<RID> *)local_80,2);
    uVar14 = local_80[0];
    if (iVar8 == 0) {
      do {
        if (uVar14 == 0) {
          lVar17 = 0;
LAB_00113dcb:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar17,"p_index","size()","",
                     false,false);
        }
        else {
          lVar17 = *(long *)(uVar14 - 8);
          if (lVar17 <= lVar9) goto LAB_00113dcb;
          CowData<RID>::_copy_on_write((CowData<RID> *)local_80);
          *(long *)(local_80[0] + lVar9 * 8) = local_58[lVar9];
          uVar14 = local_80[0];
        }
        if (lVar9 != 0) break;
        lVar9 = 1;
      } while( true );
    }
    plVar1 = (long *)(uVar14 - 0x10);
    local_98[0] = 0;
    if (uVar14 != 0) {
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_00113b05;
        LOCK();
        lVar17 = *plVar1;
        bVar19 = lVar9 == lVar17;
        if (bVar19) {
          *plVar1 = lVar9 + 1;
          lVar17 = lVar9;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar17 != -1) {
        local_98[0] = local_80[0];
      }
LAB_00113b05:
      if (local_80[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_80[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80[0] - 0x10),false);
        }
      }
    }
    uVar14 = *(ulong *)(this + 0x2688);
    if (*(long *)(this + 0x2528) != 0) {
      lVar9 = *(long *)(*(long *)(this + 0x2528) + -8);
      if (lVar9 < 1) goto LAB_001141e4;
      pcVar15 = *(char **)(this + 0x2538);
      if (pcVar15 == (char *)0x0) {
LAB_001140a9:
        lVar9 = 0;
LAB_001140ac:
        uVar14 = 0;
LAB_001140c9:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar9 = *(long *)(pcVar15 + -8);
      if (lVar9 < 1) goto LAB_001140ac;
      if (*pcVar15 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_00113e30;
      }
      if ((uVar14 == 0) || (*(uint *)(this + 0x25e4) <= (uint)uVar14)) {
LAB_00114261:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_00113e30;
      }
      lVar17 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x25e0)) * 0xa0 +
               *(long *)(*(long *)(this + 0x25d0) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x25e0)) * 8);
      if (*(int *)(lVar17 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar17 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00114261;
      }
      pVVar2 = (Version *)(this + 0x2510);
      iVar8 = (int)lVar17;
      if (*(char *)(lVar17 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar9 = *(long *)(this + 0x2588);
        if (lVar9 != 0) {
          lVar18 = 0;
          do {
            if (*(long *)(lVar9 + -8) <= lVar18) break;
            if (*(char *)(lVar9 + lVar18) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar8);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar8);
            }
            lVar9 = *(long *)(this + 0x2588);
            lVar18 = lVar18 + 1;
          } while (lVar9 != 0);
        }
      }
      puVar5 = *(uint **)(this + 0x2548);
      if (puVar5 == (uint *)0x0) goto LAB_001140a9;
      lVar9 = *(long *)(puVar5 + -2);
      if (lVar9 < 1) goto LAB_001140ac;
      uVar14 = (ulong)*puVar5;
      lVar18 = *(long *)(lVar17 + 0x68);
      if (lVar18 == 0) {
        lVar9 = 0;
        goto LAB_001140c9;
      }
      lVar9 = *(long *)(lVar18 + -8);
      if (lVar9 <= (long)uVar14) goto LAB_001140c9;
      if (*(long *)(lVar18 + uVar14 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar8);
      }
      if (*(char *)(lVar17 + 0x90) == '\0') goto LAB_00113e30;
      plVar1 = *(long **)(lVar17 + 0x88);
      if (plVar1 == (long *)0x0) goto LAB_001140a9;
      lVar9 = plVar1[-1];
      if (lVar9 < 1) goto LAB_001140ac;
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_00113e30;
      uVar10 = RenderingDevice::get_singleton();
      local_80[0] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      pvVar11 = (void *)RenderingDevice::draw_list_begin
                                  (_LC46,uVar10,param_5,0,&local_88,0,local_58,0);
      uVar14 = local_80[0];
      if (local_80[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_80[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80[0] = 0;
          Memory::free_static((void *)(uVar14 - 0x10),false);
        }
      }
      uVar10 = RenderingDevice::get_singleton();
      pCVar3 = this + 0x2698;
      uVar12 = RenderingDevice::get_singleton();
      lVar17 = RenderingDevice::framebuffer_get_format(uVar12,param_5);
      if (*(long *)(this + 0x26d8) == 0) {
        _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h"
                         ,0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                         "Attempted to use an unused shader variant (shader is null),",0,0);
        lVar17 = 0;
      }
      else {
        while( true ) {
          uVar14 = local_88 >> 8;
          local_88 = uVar14 << 8;
          LOCK();
          CVar4 = *pCVar3;
          if (CVar4 == (CopyEffects)0x0) {
            *pCVar3 = (CopyEffects)0x1;
          }
          UNLOCK();
          if (CVar4 == (CopyEffects)0x0) break;
          local_88 = uVar14 << 8;
          do {
          } while (*pCVar3 != (CopyEffects)0x0);
        }
        if (*(uint *)(this + 0x27c8) != 0) {
          plVar13 = *(long **)(this + 0x27c0);
          plVar1 = plVar13 + (ulong)*(uint *)(this + 0x27c8) * 5;
          do {
            if ((((*plVar13 == -1) && (lVar17 == plVar13[1])) &&
                (this[0x26e6] == *(CopyEffects *)((long)plVar13 + 0x14))) &&
               (((int)plVar13[2] == 0 && ((int)plVar13[3] == 0)))) {
              lVar17 = plVar13[4];
              this[0x2698] = (CopyEffects)0x0;
              goto LAB_00113ee0;
            }
            plVar13 = plVar13 + 5;
          } while (plVar1 != plVar13);
        }
        lVar17 = PipelineCacheRD::_generate_version
                           ((long)pCVar3,-1,SUB81(lVar17,0),(uint)(byte)this[0x26e6],0);
        this[0x2698] = (CopyEffects)0x0;
      }
LAB_00113ee0:
      RenderingDevice::draw_list_bind_render_pipeline(uVar10,pvVar11,lVar17);
      uVar10 = RenderingDevice::get_singleton();
      uVar14 = local_98[0];
      local_68[0] = 0;
      local_88 = 1;
      local_80[0] = local_80[0] & 0xffffffffffffff00;
      local_80[1] = 0;
      if (local_98[0] == 0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar9,0,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar10,pvVar11,uVar12,0);
LAB_00113f92:
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_set_push_constant(lVar9,pvVar11,(int)this + 0x2378);
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_draw(lVar9,SUB81(pvVar11,0),0,1);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
        if (uVar14 == 0) goto LAB_00113e70;
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar17 = local_68[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar7,lVar9,0,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar10,pvVar11,uVar12,0);
        if (lVar17 != 0) {
          LOCK();
          plVar1 = (long *)(lVar17 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          uVar14 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            uVar14 = local_98[0];
          }
          goto LAB_00113f92;
        }
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_set_push_constant(lVar9,pvVar11,(int)this + 0x2378);
        lVar9 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_draw(lVar9,SUB81(pvVar11,0),0,1);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
      }
      LOCK();
      plVar1 = (long *)(uVar14 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00113e70;
LAB_00113fed:
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_98[0] - 0x10),false);
        return;
      }
      goto LAB_00114345;
    }
    lVar9 = 0;
LAB_001141e4:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar9,
               "p_variant","variant_defines.size()","",false,false);
LAB_00113e30:
    _err_print_error("cubemap_roughness_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x4e0,
                     "Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) goto LAB_00113fed;
    }
  }
  else {
    _err_print_error("cubemap_roughness_raster",
                     "servers/rendering/renderer_rd/effects/copy_effects.cpp",0x4cb,
                     "Condition \"p_face_id >= 6\" is true.",
                     "Raster implementation of cubemap roughness must process one side at a time.",0
                     ,0);
  }
LAB_00113e70:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114345:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::merge_specular(RID, RID, RID, RID, unsigned int) */

void __thiscall
RendererRD::CopyEffects::merge_specular
          (CopyEffects *this,undefined8 param_2,long param_3,long param_4,long param_5,uint param_6)

{
  long *plVar1;
  Version *pVVar2;
  CopyEffects *pCVar3;
  CopyEffects CVar4;
  code *pcVar5;
  UniformSetCacheRD *pUVar6;
  char *pcVar7;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined8 local_f0;
  ulong local_c8 [2];
  char *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long local_98 [2];
  char *local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pUVar6 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar15 = 0x4ee;
      pcVar17 = "Parameter \"uniform_set_cache\" is null.";
LAB_0011502c:
      _err_print_error("merge_specular","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       uVar15,pcVar17,0,0);
      return;
    }
    goto LAB_0011523b;
  }
  lVar10 = RendererRD::MaterialStorage::get_singleton();
  if (lVar10 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar15 = 0x4f0;
      pcVar17 = "Parameter \"material_storage\" is null.";
      goto LAB_0011502c;
    }
    goto LAB_0011523b;
  }
  uVar15 = *(undefined8 *)(lVar10 + 0x50);
  uVar11 = RenderingDevice::get_singleton();
  local_b8 = (char *)0x0;
  local_88 = "Merge specular";
  local_80 = 0xe;
  local_58 = CONCAT44(_LC46,_LC46);
  uStack_50 = CONCAT44(_LC46,_LC46);
  String::parse_latin1((StrRange *)&local_b8);
  RenderingDevice::draw_command_begin_label(uVar11,(StrRange *)&local_b8,&local_58);
  pcVar17 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static(pcVar17 + -0x10,false);
    }
  }
  uVar11 = RenderingDevice::get_singleton();
  local_58 = 0;
  uStack_50 = 0;
  local_80 = 0;
  uVar11 = RenderingDevice::draw_list_begin(uVar11,param_2,0,&local_88,0,&local_58,0);
  uVar21 = local_80;
  if (local_80 == 0) {
LAB_001144b0:
    if (param_5 == 0) goto LAB_001144bc;
LAB_0011460f:
    iVar9 = (-(uint)(param_4 == 0) & 2) + 1;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001144b0;
    local_80 = 0;
    Memory::free_static((void *)(uVar21 + -0x10),false);
    if (param_5 != 0) goto LAB_0011460f;
LAB_001144bc:
    iVar9 = (uint)(param_4 == 0) * 2;
  }
  uVar21 = *(ulong *)(this + 0x2948);
  if (1 < param_6) {
    iVar9 = iVar9 + 4;
  }
  uVar20 = (ulong)iVar9;
  if (*(long *)(this + 0x27e8) == 0) {
    lVar10 = 0;
LAB_0011507e:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar20,lVar10
               ,"p_variant","variant_defines.size()","",false,false);
    local_f0 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(this + 0x27e8) + -8);
    if (lVar10 <= (long)uVar20) goto LAB_0011507e;
    lVar10 = *(long *)(this + 0x27f8);
    uVar16 = uVar20;
    if (lVar10 == 0) goto LAB_00114ee3;
    lVar19 = *(long *)(lVar10 + -8);
    if (lVar19 <= (long)uVar20) goto LAB_00114f04;
    if (*(char *)(lVar10 + uVar20) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      local_f0 = 0;
    }
    else {
      if ((uVar21 == 0) || (*(uint *)(this + 0x28a4) <= (uint)uVar21)) {
LAB_001146af:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
      }
      else {
        lVar10 = ((uVar21 & 0xffffffff) % (ulong)*(uint *)(this + 0x28a0)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x2890) +
                          ((uVar21 & 0xffffffff) / (ulong)*(uint *)(this + 0x28a0)) * 8);
        if (*(int *)(lVar10 + 0x98) != (int)(uVar21 >> 0x20)) {
          if (*(int *)(lVar10 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001146af;
        }
        pVVar2 = (Version *)(this + 0x27d0);
        iVar9 = (int)lVar10;
        if (*(char *)(lVar10 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar19 = *(long *)(this + 0x2848);
          if (lVar19 != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(lVar19 + -8) <= lVar18) break;
              if (*(char *)(lVar19 + lVar18) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar9);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar9);
              }
              lVar19 = *(long *)(this + 0x2848);
              lVar18 = lVar18 + 1;
            } while (lVar19 != 0);
          }
        }
        lVar18 = *(long *)(this + 0x2808);
        if (lVar18 == 0) {
LAB_00114ee3:
          lVar19 = 0;
          uVar16 = uVar20;
LAB_00114f04:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar16,lVar19,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar19 = *(long *)(lVar18 + -8);
        if (lVar19 <= (long)uVar20) goto LAB_00114f04;
        uVar16 = (ulong)*(uint *)(lVar18 + uVar20 * 4);
        lVar18 = *(long *)(lVar10 + 0x68);
        if (lVar18 == 0) {
          lVar19 = 0;
          goto LAB_00114f04;
        }
        lVar19 = *(long *)(lVar18 + -8);
        if (lVar19 <= (long)uVar16) goto LAB_00114f04;
        if (*(long *)(lVar18 + uVar16 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar9);
        }
        if (*(char *)(lVar10 + 0x90) != '\0') {
          lVar10 = *(long *)(lVar10 + 0x88);
          if (lVar10 != 0) {
            lVar19 = *(long *)(lVar10 + -8);
            uVar16 = uVar20;
            if (lVar19 <= (long)uVar20) goto LAB_00114f04;
            local_f0 = *(undefined8 *)(lVar10 + uVar20 * 8);
            goto LAB_001146dd;
          }
          goto LAB_00114ee3;
        }
      }
      local_f0 = 0;
    }
  }
LAB_001146dd:
  uVar12 = RenderingDevice::get_singleton();
  pCVar3 = this + uVar20 * 0x138 + 0x2950;
  uVar13 = RenderingDevice::get_singleton();
  lVar10 = RenderingDevice::framebuffer_get_format(uVar13,param_2);
  if (*(long *)(pCVar3 + 0x40) == 0) {
    _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                     0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                     "Attempted to use an unused shader variant (shader is null),",0,0);
    lVar10 = 0;
  }
  else {
    while( true ) {
      uVar21 = (ulong)local_88 >> 8;
      local_88 = (char *)(uVar21 << 8);
      LOCK();
      CVar4 = *pCVar3;
      if (CVar4 == (CopyEffects)0x0) {
        *pCVar3 = (CopyEffects)0x1;
      }
      UNLOCK();
      if (CVar4 == (CopyEffects)0x0) break;
      local_88 = (char *)(uVar21 << 8);
      do {
      } while (*pCVar3 != (CopyEffects)0x0);
    }
    if (*(uint *)(this + uVar20 * 0x138 + 0x2a80) != 0) {
      plVar14 = *(long **)(this + uVar20 * 0x138 + 0x2a78);
      plVar1 = plVar14 + (ulong)*(uint *)(this + uVar20 * 0x138 + 0x2a80) * 5;
      do {
        if ((((*plVar14 == -1) && (lVar10 == plVar14[1])) &&
            (this[uVar20 * 0x138 + 0x299e] == *(CopyEffects *)((long)plVar14 + 0x14))) &&
           (((int)plVar14[2] == 0 && ((int)plVar14[3] == 0)))) {
          lVar10 = plVar14[4];
          *pCVar3 = (CopyEffects)0x0;
          goto LAB_001147dd;
        }
        plVar14 = plVar14 + 5;
      } while (plVar1 != plVar14);
    }
    lVar10 = PipelineCacheRD::_generate_version
                       ((long)pCVar3,-1,SUB81(lVar10,0),(uint)(byte)this[uVar20 * 0x138 + 0x299e],0)
    ;
    *pCVar3 = (CopyEffects)0x0;
  }
LAB_001147dd:
  RenderingDevice::draw_list_bind_render_pipeline(uVar12,uVar11,lVar10);
  pcVar17 = _LC110;
  if (param_4 != 0) {
    lVar10 = 0;
    local_80 = 0;
    local_58 = uVar15;
    uStack_50 = param_4;
    iVar9 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar21 = local_80;
    if (iVar9 == 0) {
      do {
        if (uVar21 == 0) {
          lVar19 = 0;
LAB_001150c9:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar19,"p_index","size()","",
                     false,false);
        }
        else {
          lVar19 = *(long *)(uVar21 + -8);
          if (lVar19 <= lVar10) goto LAB_001150c9;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(undefined8 *)(local_80 + lVar10 * 8) = (&local_58)[lVar10];
          uVar21 = local_80;
        }
        if (lVar10 != 0) break;
        lVar10 = 1;
      } while( true );
    }
    pcVar17 = _LC110;
    local_b0 = 0;
    local_a8 = 0;
    local_98[0] = 0;
    local_b8 = _LC110;
    if (uVar21 != 0) {
      plVar1 = (long *)(uVar21 + -0x10);
      do {
        lVar10 = *plVar1;
        if (lVar10 == 0) goto LAB_00114d48;
        LOCK();
        lVar19 = *plVar1;
        bVar22 = lVar10 == lVar19;
        if (bVar22) {
          *plVar1 = lVar10 + 1;
          lVar19 = lVar10;
        }
        UNLOCK();
      } while (!bVar22);
      if (lVar19 != -1) {
        local_98[0] = local_80;
      }
LAB_00114d48:
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
    }
    lVar10 = local_98[0];
    uVar8 = local_b0;
    pcVar7 = local_b8;
    uVar12 = RenderingDevice::get_singleton();
    local_80 = CONCAT71(local_80._1_7_,uVar8);
    local_88 = pcVar7;
    local_78 = local_a8;
    local_68[0] = 0;
    if (lVar10 == 0) {
      uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,local_f0,2,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar12,uVar11,uVar13,2);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar19 = local_68[0];
      uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,local_f0,2,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar12,uVar11,uVar13,2);
      if (lVar19 != 0) {
        LOCK();
        plVar1 = (long *)(lVar19 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
        lVar10 = local_98[0];
        if (local_98[0] == 0) goto LAB_00114807;
      }
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
  }
LAB_00114807:
  lVar10 = 0;
  local_80 = 0;
  local_58 = uVar15;
  uStack_50 = param_3;
  iVar9 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  uVar21 = local_80;
  if (iVar9 == 0) {
    do {
      if (uVar21 == 0) {
        lVar19 = 0;
LAB_00114a48:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar19,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar19 = *(long *)(uVar21 - 8);
        if (lVar19 <= lVar10) goto LAB_00114a48;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(undefined8 *)(local_80 + lVar10 * 8) = (&local_58)[lVar10];
        uVar21 = local_80;
      }
      if (lVar10 != 0) break;
      lVar10 = 1;
    } while( true );
  }
  local_c8[0] = 0;
  if (uVar21 == 0) {
    uVar12 = RenderingDevice::get_singleton();
    local_80 = local_80 & 0xffffffffffffff00;
LAB_00114f58:
    local_68[0] = 0;
    local_78 = 0;
    local_88 = pcVar17;
    uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,local_f0,0,&local_88);
    RenderingDevice::draw_list_bind_uniform_set(uVar12,uVar11,uVar13,0);
  }
  else {
    plVar1 = (long *)(uVar21 - 0x10);
    do {
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_001148a0;
      LOCK();
      lVar19 = *plVar1;
      bVar22 = lVar10 == lVar19;
      if (bVar22) {
        *plVar1 = lVar10 + 1;
        lVar19 = lVar10;
      }
      UNLOCK();
    } while (!bVar22);
    if (lVar19 != -1) {
      local_c8[0] = local_80;
    }
LAB_001148a0:
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 - 0x10),false);
      }
    }
    uVar21 = local_c8[0];
    uVar12 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    if (uVar21 == 0) goto LAB_00114f58;
    local_88 = pcVar17;
    CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
    lVar10 = local_68[0];
    uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,local_f0,0,&local_88);
    RenderingDevice::draw_list_bind_uniform_set(uVar12,uVar11,uVar13,0);
    if (lVar10 != 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
    }
  }
  if (param_5 != 0) {
    local_80 = 0;
    lVar10 = 0;
    local_58 = uVar15;
    uStack_50 = param_5;
    iVar9 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar21 = local_80;
    if (iVar9 == 0) {
      do {
        if (uVar21 == 0) {
          lVar19 = 0;
LAB_0011510b:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar19,"p_index","size()","",
                     false,false);
        }
        else {
          lVar19 = *(long *)(uVar21 + -8);
          if (lVar19 <= lVar10) goto LAB_0011510b;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(undefined8 *)(local_80 + lVar10 * 8) = (&local_58)[lVar10];
          uVar21 = local_80;
        }
        if (lVar10 != 0) break;
        lVar10 = 1;
      } while( true );
    }
    local_b0 = 0;
    local_a8 = 0;
    local_98[0] = 0;
    local_b8 = pcVar17;
    if (uVar21 != 0) {
      plVar1 = (long *)(uVar21 + -0x10);
      do {
        lVar10 = *plVar1;
        if (lVar10 == 0) goto LAB_00114b4b;
        LOCK();
        lVar19 = *plVar1;
        bVar22 = lVar10 == lVar19;
        if (bVar22) {
          *plVar1 = lVar10 + 1;
          lVar19 = lVar10;
        }
        UNLOCK();
      } while (!bVar22);
      if (lVar19 != -1) {
        local_98[0] = local_80;
      }
LAB_00114b4b:
      uVar21 = local_98[0];
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
          uVar21 = local_98[0];
        }
      }
    }
    uVar8 = local_b0;
    pcVar17 = local_b8;
    uVar15 = RenderingDevice::get_singleton();
    local_80 = CONCAT71(local_80._1_7_,uVar8);
    local_68[0] = 0;
    local_78 = local_a8;
    local_88 = pcVar17;
    if (uVar21 == 0) {
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,local_f0,1,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar15,uVar11,uVar12,1);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar10 = local_68[0];
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,local_f0,1,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar15,uVar11,uVar12,1);
      if (lVar10 != 0) {
        LOCK();
        plVar1 = (long *)(lVar10 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
        uVar21 = local_98[0];
        if (local_98[0] == 0) goto LAB_00114986;
      }
      LOCK();
      plVar1 = (long *)(uVar21 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
  }
LAB_00114986:
  lVar10 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_draw(lVar10,SUB81(uVar11,0),0,1);
  RenderingDevice::get_singleton();
  RenderingDevice::draw_list_end();
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  if (local_c8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_c8[0] - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8[0] - 0x10),false);
        return;
      }
      goto LAB_0011523b;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011523b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::CopyEffects::cubemap_filter(RID, Vector<RID>, bool) */

void __thiscall
RendererRD::CopyEffects::cubemap_filter
          (CopyEffects *this,undefined8 param_2,long param_3,byte param_4)

{
  long *plVar1;
  Version *pVVar2;
  uint *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  UniformSetCacheRD *pUVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  Vector<RenderingDevice::Uniform> local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  ulong local_98 [2];
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar6 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (CopyEffects)0x0) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x453;
        pcVar14 = "Parameter \"uniform_set_cache\" is null.";
LAB_00115769:
        _err_print_error("cubemap_filter","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                         uVar10,pcVar14,0,0);
        return;
      }
      goto LAB_00115d2c;
    }
    lVar9 = RendererRD::MaterialStorage::get_singleton();
    if (lVar9 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar10 = 0x455;
        pcVar14 = "Parameter \"material_storage\" is null.";
        goto LAB_00115769;
      }
      goto LAB_00115d2c;
    }
    lVar16 = *(long *)(param_3 + 8);
    local_c0 = 0;
    for (lVar19 = 0; (lVar16 != 0 && (lVar19 < *(long *)(lVar16 + -8))); lVar19 = lVar19 + 1) {
      local_78 = *(undefined8 *)(lVar16 + lVar19 * 8);
      local_88 = CONCAT44((int)lVar19,3);
      local_80 = local_80 & 0xffffffffffffff00;
      local_68[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_c8,&local_88);
      lVar16 = *(long *)(param_3 + 8);
    }
    uVar10 = RenderingDevice::get_singleton();
    cVar7 = RenderingDevice::uniform_set_is_valid(uVar10,*(undefined8 *)(this + 0x2360));
    if (cVar7 != '\0') {
      uVar10 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar10,*(undefined8 *)(this + 0x2360));
    }
    uVar10 = RenderingDevice::get_singleton();
    pVVar2 = (Version *)(this + 0x1b60);
    uVar11 = *(ulong *)(this + 0x1e50);
    if (*(long *)(this + 0x1b78) != 0) {
      lVar16 = *(long *)(*(long *)(this + 0x1b78) + -8);
      if (lVar16 < 1) goto LAB_00115a2d;
      pcVar14 = *(char **)(this + 0x1b88);
      if (pcVar14 == (char *)0x0) {
LAB_00115ae0:
        lVar16 = 0;
LAB_00115ae3:
        uVar11 = 0;
        goto LAB_00115abd;
      }
      lVar16 = *(long *)(pcVar14 + -8);
      if (lVar16 < 1) goto LAB_00115ae3;
      if (*pcVar14 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar12 = 0;
        goto LAB_00115449;
      }
      if ((uVar11 == 0) || (*(uint *)(this + 0x1c34) <= (uint)uVar11)) {
LAB_00115c60:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar12 = 0;
        goto LAB_00115449;
      }
      lVar19 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(this + 0x1c30)) * 0xa0 +
               *(long *)(*(long *)(this + 0x1c20) +
                        ((uVar11 & 0xffffffff) / (ulong)*(uint *)(this + 0x1c30)) * 8);
      if (*(int *)(lVar19 + 0x98) != (int)(uVar11 >> 0x20)) {
        if (*(int *)(lVar19 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00115c60;
      }
      iVar8 = (int)lVar19;
      if (*(char *)(lVar19 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar16 = *(long *)(this + 0x1bd8);
        if (lVar16 != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(lVar16 + -8) <= lVar15) break;
            if (*(char *)(lVar16 + lVar15) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar8);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar8);
            }
            lVar16 = *(long *)(this + 0x1bd8);
            lVar15 = lVar15 + 1;
          } while (lVar16 != 0);
        }
      }
      puVar3 = *(uint **)(this + 0x1b98);
      if (puVar3 == (uint *)0x0) goto LAB_00115ae0;
      lVar16 = *(long *)(puVar3 + -2);
      if (lVar16 < 1) goto LAB_00115ae3;
      uVar11 = (ulong)*puVar3;
      lVar15 = *(long *)(lVar19 + 0x68);
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar15 + -8);
        if (lVar16 <= (long)uVar11) goto LAB_00115abd;
        if (*(long *)(lVar15 + uVar11 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar8);
        }
        if (*(char *)(lVar19 + 0x90) != '\0') {
          puVar4 = *(undefined8 **)(lVar19 + 0x88);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00115ae0;
          lVar16 = puVar4[-1];
          if (0 < lVar16) {
            uVar12 = *puVar4;
            goto LAB_00115449;
          }
          goto LAB_00115ae3;
        }
        goto LAB_00115a66;
      }
LAB_00115bb8:
      lVar16 = 0;
      goto LAB_00115abd;
    }
    lVar16 = 0;
LAB_00115a2d:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar16,
               "p_variant","variant_defines.size()","",false,false);
LAB_00115a66:
    uVar12 = 0;
LAB_00115449:
    uVar10 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar10,local_c8,uVar12,2);
    local_80 = 0;
    *(undefined8 *)(this + 0x2360) = uVar10;
    local_58[0] = *(long *)(lVar9 + 0x90);
    local_58[1] = param_2;
    iVar8 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar11 = local_80;
    if (iVar8 == 0) {
      lVar9 = 0;
      do {
        if (uVar11 == 0) {
          lVar16 = 0;
LAB_001157c3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar16,"p_index","size()","",
                     false,false);
        }
        else {
          lVar16 = *(long *)(uVar11 - 8);
          if (lVar16 <= lVar9) goto LAB_001157c3;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar9 * 8) = local_58[lVar9];
          uVar11 = local_80;
        }
        if (lVar9 != 0) break;
        lVar9 = 1;
      } while( true );
    }
    local_b0 = 0;
    plVar1 = (long *)(uVar11 - 0x10);
    local_a8 = 0;
    local_98[0] = 0;
    local_b8 = 1;
    if (uVar11 != 0) {
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_0011553a;
        LOCK();
        lVar16 = *plVar1;
        bVar20 = lVar9 == lVar16;
        if (bVar20) {
          *plVar1 = lVar9 + 1;
          lVar16 = lVar9;
        }
        UNLOCK();
      } while (!bVar20);
      if (lVar16 != -1) {
        local_98[0] = local_80;
      }
LAB_0011553a:
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 - 0x10),false);
        }
      }
    }
    uVar17 = *(ulong *)(this + 0x1e50);
    uVar18 = (ulong)(int)((uint)param_4 * 2 + (uint)(this[0x2370] == (CopyEffects)0x0));
    if (*(long *)(this + 0x1b78) == 0) {
      lVar9 = 0;
LAB_00115bde:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar18,
                 lVar9,"p_variant","variant_defines.size()","",false,false);
LAB_0011566a:
      _err_print_error("cubemap_filter","servers/rendering/renderer_rd/effects/copy_effects.cpp",
                       0x46d,"Condition \"shader.is_null()\" is true.",0,0);
      if (local_98[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_98[0] - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
LAB_00115a15:
          Memory::free_static((void *)(local_98[0] - 0x10),false);
        }
      }
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 0x1b78) + -8);
      if (lVar9 <= (long)uVar18) goto LAB_00115bde;
      lVar9 = *(long *)(this + 0x1b88);
      uVar11 = uVar18;
      if (lVar9 == 0) {
LAB_00115a9c:
        lVar16 = 0;
        uVar11 = uVar18;
LAB_00115abd:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar16,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar16 = *(long *)(lVar9 + -8);
      if (lVar16 <= (long)uVar18) goto LAB_00115abd;
      if (*(char *)(lVar9 + uVar18) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_0011566a;
      }
      if ((uVar17 == 0) || (*(uint *)(this + 0x1c34) <= (uint)uVar17)) {
LAB_00115cf8:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_0011566a;
      }
      lVar9 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(this + 0x1c30)) * 0xa0 +
              *(long *)(*(long *)(this + 0x1c20) +
                       ((uVar17 & 0xffffffff) / (ulong)*(uint *)(this + 0x1c30)) * 8);
      if (*(int *)(lVar9 + 0x98) != (int)(uVar17 >> 0x20)) {
        if (*(int *)(lVar9 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00115cf8;
      }
      iVar8 = (int)lVar9;
      if (*(char *)(lVar9 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar16 = *(long *)(this + 0x1bd8);
        if (lVar16 != 0) {
          lVar19 = 0;
          do {
            if (*(long *)(lVar16 + -8) <= lVar19) break;
            if (*(char *)(lVar16 + lVar19) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar8);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar8);
            }
            lVar16 = *(long *)(this + 0x1bd8);
            lVar19 = lVar19 + 1;
          } while (lVar16 != 0);
        }
      }
      lVar19 = *(long *)(this + 0x1b98);
      if (lVar19 == 0) goto LAB_00115a9c;
      lVar16 = *(long *)(lVar19 + -8);
      if (lVar16 <= (long)uVar18) goto LAB_00115abd;
      uVar11 = (ulong)*(uint *)(lVar19 + uVar18 * 4);
      lVar19 = *(long *)(lVar9 + 0x68);
      if (lVar19 == 0) goto LAB_00115bb8;
      lVar16 = *(long *)(lVar19 + -8);
      if (lVar16 <= (long)uVar11) goto LAB_00115abd;
      if (*(long *)(lVar19 + uVar11 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar8);
      }
      uVar17 = local_98[0];
      if (*(char *)(lVar9 + 0x90) == '\0') goto LAB_0011566a;
      lVar9 = *(long *)(lVar9 + 0x88);
      if (lVar9 == 0) goto LAB_00115a9c;
      lVar16 = *(long *)(lVar9 + -8);
      uVar11 = uVar18;
      if (lVar16 <= (long)uVar18) goto LAB_00115abd;
      lVar9 = *(long *)(lVar9 + uVar18 * 8);
      if (lVar9 == 0) goto LAB_0011566a;
      RenderingDevice::get_singleton();
      uVar10 = RenderingDevice::compute_list_begin();
      uVar12 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar12,uVar10,*(undefined8 *)(this + uVar18 * 8 + 0x1e58));
      uVar12 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = local_b8;
      local_80 = CONCAT71(local_80._1_7_,local_b0);
      local_78 = local_a8;
      if (uVar17 == 0) {
        uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar12,uVar10,uVar13,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
        lVar16 = local_68[0];
        uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar6,lVar9,0,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar12,uVar10,uVar13,0);
        if (lVar16 != 0) {
          LOCK();
          plVar1 = (long *)(lVar16 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          uVar17 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            uVar17 = local_98[0];
          }
        }
      }
      uVar12 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar12,uVar10,*(undefined8 *)(this + 0x2358),1)
      ;
      uVar12 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar12,uVar10,*(undefined8 *)(this + 0x2360),2)
      ;
      lVar9 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch
                (lVar9,(uint)uVar10,(-(uint)(param_4 == 0) & 0xfffffa56) + 0x700,6);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (uVar17 != 0) {
        LOCK();
        plVar1 = (long *)(uVar17 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_001156a8;
        goto LAB_00115a15;
      }
    }
LAB_001156a8:
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_c0);
  }
  else {
    _err_print_error("cubemap_filter","servers/rendering/renderer_rd/effects/copy_effects.cpp",0x450
                     ,"Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use compute based cubemap filter with the mobile renderer.",0,0);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00115d2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BlurRasterShaderRD::~BlurRasterShaderRD() */

void __thiscall BlurRasterShaderRD::~BlurRasterShaderRD(BlurRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__BlurRasterShaderRD_00119ae0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* BlurRasterShaderRD::~BlurRasterShaderRD() */

void __thiscall BlurRasterShaderRD::~BlurRasterShaderRD(BlurRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__BlurRasterShaderRD_00119ae0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CopyShaderRD::~CopyShaderRD() */

void __thiscall CopyShaderRD::~CopyShaderRD(CopyShaderRD *this)

{
  *(undefined ***)this = &PTR__CopyShaderRD_00119b00;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CopyShaderRD::~CopyShaderRD() */

void __thiscall CopyShaderRD::~CopyShaderRD(CopyShaderRD *this)

{
  *(undefined ***)this = &PTR__CopyShaderRD_00119b00;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CopyToFbShaderRD::~CopyToFbShaderRD() */

void __thiscall CopyToFbShaderRD::~CopyToFbShaderRD(CopyToFbShaderRD *this)

{
  *(undefined ***)this = &PTR__CopyToFbShaderRD_00119b20;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CopyToFbShaderRD::~CopyToFbShaderRD() */

void __thiscall CopyToFbShaderRD::~CopyToFbShaderRD(CopyToFbShaderRD *this)

{
  *(undefined ***)this = &PTR__CopyToFbShaderRD_00119b20;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CubeToDpShaderRD::~CubeToDpShaderRD() */

void __thiscall CubeToDpShaderRD::~CubeToDpShaderRD(CubeToDpShaderRD *this)

{
  *(undefined ***)this = &PTR__CubeToDpShaderRD_00119b40;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CubeToDpShaderRD::~CubeToDpShaderRD() */

void __thiscall CubeToDpShaderRD::~CubeToDpShaderRD(CubeToDpShaderRD *this)

{
  *(undefined ***)this = &PTR__CubeToDpShaderRD_00119b40;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CubemapDownsamplerShaderRD::~CubemapDownsamplerShaderRD() */

void __thiscall
CubemapDownsamplerShaderRD::~CubemapDownsamplerShaderRD(CubemapDownsamplerShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapDownsamplerShaderRD_00119b60;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CubemapDownsamplerShaderRD::~CubemapDownsamplerShaderRD() */

void __thiscall
CubemapDownsamplerShaderRD::~CubemapDownsamplerShaderRD(CubemapDownsamplerShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapDownsamplerShaderRD_00119b60;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CubemapDownsamplerRasterShaderRD::~CubemapDownsamplerRasterShaderRD() */

void __thiscall
CubemapDownsamplerRasterShaderRD::~CubemapDownsamplerRasterShaderRD
          (CubemapDownsamplerRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapDownsamplerRasterShaderRD_00119b80;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CubemapDownsamplerRasterShaderRD::~CubemapDownsamplerRasterShaderRD() */

void __thiscall
CubemapDownsamplerRasterShaderRD::~CubemapDownsamplerRasterShaderRD
          (CubemapDownsamplerRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapDownsamplerRasterShaderRD_00119b80;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CubemapFilterShaderRD::~CubemapFilterShaderRD() */

void __thiscall CubemapFilterShaderRD::~CubemapFilterShaderRD(CubemapFilterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapFilterShaderRD_00119ba0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CubemapFilterShaderRD::~CubemapFilterShaderRD() */

void __thiscall CubemapFilterShaderRD::~CubemapFilterShaderRD(CubemapFilterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapFilterShaderRD_00119ba0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CubemapFilterRasterShaderRD::~CubemapFilterRasterShaderRD() */

void __thiscall
CubemapFilterRasterShaderRD::~CubemapFilterRasterShaderRD(CubemapFilterRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapFilterRasterShaderRD_00119bc0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CubemapFilterRasterShaderRD::~CubemapFilterRasterShaderRD() */

void __thiscall
CubemapFilterRasterShaderRD::~CubemapFilterRasterShaderRD(CubemapFilterRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapFilterRasterShaderRD_00119bc0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CubemapRoughnessShaderRD::~CubemapRoughnessShaderRD() */

void __thiscall CubemapRoughnessShaderRD::~CubemapRoughnessShaderRD(CubemapRoughnessShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapRoughnessShaderRD_00119be0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CubemapRoughnessShaderRD::~CubemapRoughnessShaderRD() */

void __thiscall CubemapRoughnessShaderRD::~CubemapRoughnessShaderRD(CubemapRoughnessShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapRoughnessShaderRD_00119be0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CubemapRoughnessRasterShaderRD::~CubemapRoughnessRasterShaderRD() */

void __thiscall
CubemapRoughnessRasterShaderRD::~CubemapRoughnessRasterShaderRD
          (CubemapRoughnessRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapRoughnessRasterShaderRD_00119c00;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CubemapRoughnessRasterShaderRD::~CubemapRoughnessRasterShaderRD() */

void __thiscall
CubemapRoughnessRasterShaderRD::~CubemapRoughnessRasterShaderRD
          (CubemapRoughnessRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__CubemapRoughnessRasterShaderRD_00119c00;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SpecularMergeShaderRD::~SpecularMergeShaderRD() */

void __thiscall SpecularMergeShaderRD::~SpecularMergeShaderRD(SpecularMergeShaderRD *this)

{
  *(undefined ***)this = &PTR__SpecularMergeShaderRD_00119c20;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SpecularMergeShaderRD::~SpecularMergeShaderRD() */

void __thiscall SpecularMergeShaderRD::~SpecularMergeShaderRD(SpecularMergeShaderRD *this)

{
  *(undefined ***)this = &PTR__SpecularMergeShaderRD_00119c20;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
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



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write(void)

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
LAB_001169b8:
    lVar11 = *(long *)(param_5 + 8);
    if ((lVar11 == 0) || (local_48 = (uint)*(undefined8 *)(lVar11 + -8), local_48 == 0)) {
LAB_00116ba0:
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
LAB_001169dd:
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
LAB_00116da1:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar6 = *(uint *)pauVar1[3];
      lVar11 = *(long *)(param_5 + 8);
      if (uVar6 < local_48) goto LAB_001169eb;
    }
    else {
LAB_001169eb:
      uVar14 = _LC16;
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
    if (uVar6 == 0) goto LAB_001169b8;
    uVar19 = uVar6 - 1;
    uVar7 = uVar19 >> 1 | uVar19;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    *(uint *)(pauVar1[2] + 4) = uVar7;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 8,false);
    *(long *)(pauVar1[2] + 8) = lVar11;
    if (lVar11 == 0) goto LAB_00116da1;
    uVar7 = *(uint *)pauVar1[2];
    if (uVar7 < uVar6) {
      memset((void *)(lVar11 + (ulong)uVar7 * 8),0,(ulong)(uVar19 - uVar7) * 8 + 8);
    }
    lVar20 = *(long *)(param_4 + 8);
    *(uint *)pauVar1[2] = uVar6;
    if (lVar20 == 0) {
      uVar12 = 0;
      lVar15 = 0;
      goto LAB_00116b1e;
    }
    uVar12 = 0;
    do {
      lVar15 = *(long *)(lVar20 + -8);
      if (lVar15 <= (long)uVar12) goto LAB_00116b1e;
      *(undefined8 *)(lVar11 + uVar12 * 8) = *(undefined8 *)(lVar20 + uVar12 * 8);
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uVar21 & 0xffffffff));
    uVar6 = *(uint *)pauVar1[3];
    lVar11 = *(long *)(param_5 + 8);
    if (lVar11 != 0) {
      local_48 = (uint)*(undefined8 *)(lVar11 + -8);
      if (local_48 < uVar6) goto LAB_001168be;
      if (local_48 <= uVar6) goto LAB_0011699d;
      goto LAB_001169dd;
    }
    if (uVar6 == 0) goto LAB_00116ba0;
    local_48 = 0;
LAB_001168be:
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
LAB_0011699d:
    if (uVar6 == 0) goto LAB_00116ba0;
    lVar11 = *(long *)(param_5 + 8);
  }
  uVar12 = 0;
  while (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + -8);
    if (lVar15 <= (long)uVar12) goto LAB_00116b1e;
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
    if (*(uint *)pauVar1[3] <= (uint)uVar12) goto LAB_00116ba0;
    lVar11 = *(long *)(param_5 + 8);
  }
  lVar15 = 0;
LAB_00116b1e:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar15,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
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
      uVar7 = _LC20;
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
LAB_00117023:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_00117023;
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
LAB_00117670:
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
  if (lVar10 == 0) goto LAB_00117670;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00117549:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00117549;
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
    goto LAB_001176c6;
  }
  if (lVar10 == lVar7) {
LAB_001175ef:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001176c6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001175da;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001175ef;
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
LAB_001175da:
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
LAB_00118600:
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
  if (lVar7 == 0) goto LAB_00118600;
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
LAB_0011856c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00118501;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011856c;
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
LAB_00118501:
  puVar9[-1] = param_1;
  return 0;
}



/* RID FramebufferCacheRD::get_cache<RID>(RID) */

undefined8 __thiscall FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD *this,long param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  Vector aVStack_68 [8];
  long local_60;
  Vector local_58 [8];
  long local_50;
  long local_40;
  
  iVar5 = (int)((ulong)param_2 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0xb3e1e8c0;
  uVar4 = (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64;
  uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x13) * 5 + 0xe6546b64;
  uVar4 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  for (lVar8 = *(long *)(this + (ulong)(uVar4 % 0x3ffd) * 8 + 0x1e0); lVar8 != 0;
      lVar8 = *(long *)(lVar8 + 8)) {
    if ((((*(uint *)(lVar8 + 0x10) == uVar4) && (*(int *)(lVar8 + 0x30) == 0)) &&
        (*(int *)(lVar8 + 0x20) == 1)) &&
       ((*(int *)(lVar8 + 0x40) == 1 && (param_2 == **(long **)(lVar8 + 0x28))))) {
      uVar6 = *(undefined8 *)(lVar8 + 0x18);
      goto LAB_00118770;
    }
  }
  local_60 = 0;
  iVar5 = CowData<RID>::resize<false>((CowData<RID> *)&local_60,1);
  if (iVar5 == 0) {
    if (local_60 == 0) {
      lVar10 = -1;
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(local_60 + -8);
      lVar10 = lVar8 + -1;
      if (-1 < lVar10) {
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_60);
        *(long *)(local_60 + lVar10 * 8) = param_2;
        goto LAB_001187f3;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001187f3:
  local_50 = 0;
  uVar6 = _allocate_from_data(this,1,uVar4,uVar4 % 0x3ffd,aVStack_68,local_58);
  lVar8 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_50 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar10 = *(long *)(local_50 + -8);
      local_50 = 0;
      if (lVar10 != 0) {
        lVar9 = 0;
        lVar7 = lVar8;
        do {
          if (*(long *)(lVar7 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *(long *)(lVar7 + 0x38);
              *(undefined8 *)(lVar7 + 0x38) = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if (*(long *)(lVar7 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *(long *)(lVar7 + 0x28);
              *(undefined8 *)(lVar7 + 0x28) = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
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
          lVar9 = lVar9 + 1;
          lVar7 = lVar7 + 0x48;
        } while (lVar10 != lVar9);
      }
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
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
LAB_00118770:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00118d70:
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
  if (lVar11 == 0) goto LAB_00118d70;
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
LAB_00118cdc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_00118c73;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00118cdc;
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
  uVar3 = _LC52;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 4);
LAB_00118c73:
  puVar9[-1] = param_1;
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
LAB_00119110:
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
  if (lVar11 == 0) goto LAB_00119110;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00118fa1:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00118fa1;
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
    goto LAB_00119166;
  }
  if (lVar11 == lVar9) {
LAB_00119083:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00119166:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00119060;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00119083;
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
  uVar4 = _LC20;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00119060:
  puVar7[-1] = param_1;
  return 0;
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
LAB_00119576:
    uVar15 = 0;
    do {
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar12 = 0;
LAB_00119681:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar12 = *(long *)(uVar11 - 8);
        if (lVar12 <= (long)uVar15) goto LAB_00119681;
        uVar11 = *(ulong *)(uVar11 + uVar15 * 8);
LAB_00119599:
        iVar8 = (int)(uVar11 >> 0x20);
        uVar9 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar7 = uVar7 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar15 == 0) goto LAB_00119599;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar9 = 0;
      }
      uVar15 = uVar15 + 1;
      uVar9 = uVar9 ^ (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
      uVar7 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
      if (uVar15 == uVar14) goto LAB_00119600;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar15 = *(ulong *)(param_4[4] - 8), uVar14 = uVar15 & 0xffffffff, (int)uVar15 != 0))
  goto LAB_00119576;
  goto LAB_001192e0;
LAB_00119600:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_001192e0:
  uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
  uVar7 = uVar7 ^ uVar7 >> 0x10;
  lVar2 = *(long *)(this + (ulong)(uVar7 % 0x3ffd) * 8 + 0x1e0);
  uVar6 = auVar16._0_8_;
  uVar10 = local_68;
joined_r0x00119343:
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
LAB_00119543:
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
          if (uVar11 != 0) goto LAB_00119350;
          if (param_4[4] != 0) {
            uVar9 = *(uint *)(param_4[4] - 8);
joined_r0x00119809:
            if (uVar9 != 0) goto LAB_00119350;
          }
LAB_0011972d:
          uVar10 = *(undefined8 *)(lVar2 + 0x28);
          goto LAB_00119543;
        }
        uVar9 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
        if (uVar11 == 0) {
          if (param_4[4] == 0) goto joined_r0x00119809;
          if (*(uint *)(param_4[4] - 8) == uVar9) {
            if (uVar9 != 0) goto LAB_001193c6;
            goto LAB_0011972d;
          }
        }
        else if (uVar9 == 1) goto LAB_001193c6;
      }
      else {
        uVar9 = 1;
        if (uVar11 != 0) {
LAB_001193c6:
          uVar14 = 0;
          do {
            uVar15 = uVar14;
            if (uVar11 == 0) {
              uVar11 = param_4[4];
              if (uVar11 == 0) {
                lVar12 = 0;
                goto LAB_00119681;
              }
              lVar12 = *(long *)(uVar11 - 8);
              if (lVar12 <= (long)uVar14) goto LAB_00119681;
              uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
              uVar13 = *(ulong *)(piVar3 + 4);
              if (uVar13 == 0) goto LAB_00119403;
              if (uVar14 != 0) goto LAB_00119484;
            }
            else if (uVar14 == 0) {
              uVar13 = *(ulong *)(piVar3 + 4);
              uVar15 = 0;
              if (uVar13 == 0) {
LAB_00119403:
                lVar4 = *(long *)(piVar3 + 8);
                if (lVar4 == 0) {
                  lVar12 = 0;
                  goto LAB_00119681;
                }
                lVar12 = *(long *)(lVar4 + -8);
                if (lVar12 <= (long)uVar15) goto LAB_00119681;
                uVar13 = *(ulong *)(lVar4 + uVar14 * 8);
              }
            }
            else {
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              if (*(long *)(piVar3 + 4) == 0) {
                uVar11 = 0;
                goto LAB_00119403;
              }
              uVar11 = 0;
LAB_00119484:
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              uVar13 = 0;
            }
            if (uVar13 != uVar11) goto LAB_0011982b;
            uVar14 = uVar14 + 1;
            if (uVar9 <= (uint)uVar14) goto LAB_0011972d;
            uVar11 = param_4[2];
          } while( true );
        }
        if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
          uVar9 = 1;
          goto LAB_001193c6;
        }
      }
    }
  }
LAB_00119350:
  lVar2 = *(long *)(lVar2 + 8);
  uVar6 = auVar16._0_8_;
  uVar10 = local_68;
  goto joined_r0x00119343;
LAB_0011982b:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_00119350;
}



/* WARNING: Control flow encountered bad instruction data */
/* SpecularMergeShaderRD::~SpecularMergeShaderRD() */

void __thiscall SpecularMergeShaderRD::~SpecularMergeShaderRD(SpecularMergeShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubemapRoughnessRasterShaderRD::~CubemapRoughnessRasterShaderRD() */

void __thiscall
CubemapRoughnessRasterShaderRD::~CubemapRoughnessRasterShaderRD
          (CubemapRoughnessRasterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubemapRoughnessShaderRD::~CubemapRoughnessShaderRD() */

void __thiscall CubemapRoughnessShaderRD::~CubemapRoughnessShaderRD(CubemapRoughnessShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubemapFilterRasterShaderRD::~CubemapFilterRasterShaderRD() */

void __thiscall
CubemapFilterRasterShaderRD::~CubemapFilterRasterShaderRD(CubemapFilterRasterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubemapFilterShaderRD::~CubemapFilterShaderRD() */

void __thiscall CubemapFilterShaderRD::~CubemapFilterShaderRD(CubemapFilterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubemapDownsamplerRasterShaderRD::~CubemapDownsamplerRasterShaderRD() */

void __thiscall
CubemapDownsamplerRasterShaderRD::~CubemapDownsamplerRasterShaderRD
          (CubemapDownsamplerRasterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubemapDownsamplerShaderRD::~CubemapDownsamplerShaderRD() */

void __thiscall
CubemapDownsamplerShaderRD::~CubemapDownsamplerShaderRD(CubemapDownsamplerShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CubeToDpShaderRD::~CubeToDpShaderRD() */

void __thiscall CubeToDpShaderRD::~CubeToDpShaderRD(CubeToDpShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CopyToFbShaderRD::~CopyToFbShaderRD() */

void __thiscall CopyToFbShaderRD::~CopyToFbShaderRD(CopyToFbShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CopyShaderRD::~CopyShaderRD() */

void __thiscall CopyShaderRD::~CopyShaderRD(CopyShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* BlurRasterShaderRD::~BlurRasterShaderRD() */

void __thiscall BlurRasterShaderRD::~BlurRasterShaderRD(BlurRasterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



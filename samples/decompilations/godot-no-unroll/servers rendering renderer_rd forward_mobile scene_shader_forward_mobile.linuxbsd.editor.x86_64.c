
/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::is_animated() const */

ShaderData __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::is_animated
          (ShaderData *this)

{
  ShaderData SVar1;
  
  if (((this[0x23f] == (ShaderData)0x0) || (SVar1 = this[0x22e], SVar1 == (ShaderData)0x0)) &&
     (SVar1 = this[0x23e], SVar1 != (ShaderData)0x0)) {
    return this[0x236];
  }
  return SVar1;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::casts_shadows() const */

uint __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::casts_shadows
          (ShaderData *this)

{
  ShaderData SVar1;
  uint uVar2;
  
  if ((((this[0x239] == (ShaderData)0x0) && (this[0x23a] == (ShaderData)0x0)) &&
      ((this[0x229] == (ShaderData)0x0 ||
       ((this[0x22b] != (ShaderData)0x0 && (this[0x22c] == (ShaderData)0x0)))))) &&
     (this[0x23b] == (ShaderData)0x0)) {
    if (this[0x22a] == (ShaderData)0x0) {
      return 1;
    }
    SVar1 = this[0x22d];
  }
  else {
    SVar1 = this[0x22d];
  }
  uVar2 = (uint)(byte)SVar1;
  if ((SVar1 != (ShaderData)0x0) && (uVar2 = 0, *(int *)(this + 0x210) != 0)) {
    uVar2 = CONCAT31((int3)((uint)*(int *)(this + 0x214) >> 8),*(int *)(this + 0x214) != 0);
  }
  return uVar2;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::set_render_priority(int)
    */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::set_render_priority
          (MaterialData *this,int param_1)

{
  this[0xd0] = (MaterialData)((char)param_1 + -0x80);
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::set_next_pass(RID) */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::set_next_pass
          (MaterialData *this,undefined8 param_2)

{
  *(undefined8 *)(this + 200) = param_2;
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::~MaterialData() */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::~MaterialData
          (MaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_00111da8;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::~MaterialData() */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::~MaterialData
          (MaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_00111da8;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  operator_delete(this,0xd8);
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_native_source_code()
   const */

void RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_native_source_code
               (void)

{
  long lVar1;
  int iVar2;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x158) == 0) {
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    ShaderRD::version_get_native_source_code();
    pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_shader_variant(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderVersion,
   bool) const [clone .part.0] */

undefined8 __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_shader_variant
          (ShaderData *this,int param_2,uint param_3)

{
  Version *pVVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
  lVar3 = singleton;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  if (singleton == 0) {
    _err_print_error("get_shader_variant",
                     "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp",
                     0x178,"Parameter \"SceneShaderForwardMobile::singleton\" is null.",0,0);
    uVar7 = 0;
    goto LAB_00100330;
  }
  uVar2 = *(ulong *)(this + 0x158);
  lVar8 = *(long *)(singleton + 0x28);
  param_2 = param_2 + (param_3 & 0xff) * 8;
  uVar10 = (ulong)param_2;
  if (param_2 < 0) {
    if (lVar8 == 0) goto LAB_00100520;
    lVar8 = *(long *)(lVar8 + -8);
LAB_0010049d:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar10,lVar8,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    if (lVar8 == 0) {
LAB_00100520:
      lVar8 = 0;
      goto LAB_0010049d;
    }
    lVar8 = *(long *)(lVar8 + -8);
    if (lVar8 <= (long)uVar10) goto LAB_0010049d;
    lVar8 = *(long *)(singleton + 0x38);
    uVar6 = uVar10;
    if (lVar8 == 0) {
LAB_001003e0:
      lVar9 = 0;
      uVar6 = uVar10;
LAB_00100401:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 <= (long)uVar10) goto LAB_00100401;
    if (*(char *)(lVar8 + uVar10) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    }
    else {
      if ((uVar2 != 0) && ((uint)uVar2 < *(uint *)(singleton + 0xe4))) {
        lVar8 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(singleton + 0xe0)) * 0xa0 +
                *(long *)(*(long *)(singleton + 0xd0) +
                         ((uVar2 & 0xffffffff) / (ulong)*(uint *)(singleton + 0xe0)) * 8);
        if (*(int *)(lVar8 + 0x98) == (int)(uVar2 >> 0x20)) {
          pVVar1 = (Version *)(singleton + 0x10);
          iVar5 = (int)lVar8;
          if (*(char *)(lVar8 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar1);
            lVar9 = *(long *)(lVar3 + 0x88);
            if (lVar9 != 0) {
              lVar11 = 0;
              do {
                if (*(long *)(lVar9 + -8) <= lVar11) break;
                if (*(char *)(lVar9 + lVar11) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar1,iVar5);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar1,iVar5);
                }
                lVar9 = *(long *)(lVar3 + 0x88);
                lVar11 = lVar11 + 1;
              } while (lVar9 != 0);
            }
          }
          lVar3 = *(long *)(lVar3 + 0x48);
          if (lVar3 != 0) {
            lVar9 = *(long *)(lVar3 + -8);
            if (lVar9 <= (long)uVar10) goto LAB_00100401;
            uVar6 = (ulong)*(uint *)(lVar3 + uVar10 * 4);
            lVar3 = *(long *)(lVar8 + 0x68);
            if (lVar3 == 0) {
              lVar9 = 0;
              goto LAB_00100401;
            }
            lVar9 = *(long *)(lVar3 + -8);
            if (lVar9 <= (long)uVar6) goto LAB_00100401;
            if (*(long *)(lVar3 + uVar6 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar1,iVar5);
            }
            if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_0010032e;
            lVar3 = *(long *)(lVar8 + 0x88);
            if (lVar3 != 0) {
              lVar9 = *(long *)(lVar3 + -8);
              uVar6 = uVar10;
              if ((long)uVar10 < lVar9) {
                uVar7 = *(undefined8 *)(lVar3 + uVar10 * 8);
                goto LAB_00100330;
              }
              goto LAB_00100401;
            }
          }
          goto LAB_001003e0;
        }
        if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
    }
  }
LAB_0010032e:
  uVar7 = 0;
LAB_00100330:
  pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
  return uVar7;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::update_parameters(HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, bool, bool) */

undefined4 __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData::update_parameters
          (MaterialData *this,HashMap *param_1,bool param_2,bool param_3)

{
  Version *pVVar1;
  char *pcVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  if (*(long *)(*(long *)(this + 0xa8) + 0x158) == 0) {
    return 0;
  }
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
  lVar4 = singleton;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  uVar9 = *(ulong *)(*(long *)(this + 0xa8) + 0x158);
  if (*(long *)(singleton + 0x28) == 0) {
    lVar13 = 0;
LAB_00100853:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar13,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar13 = *(long *)(*(long *)(singleton + 0x28) + -8);
    if (lVar13 < 1) goto LAB_00100853;
    pcVar2 = *(char **)(singleton + 0x38);
    if (pcVar2 == (char *)0x0) {
LAB_00100808:
      lVar13 = 0;
LAB_0010080b:
      uVar9 = 0;
LAB_00100828:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar9,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar13 = *(long *)(pcVar2 + -8);
    if (lVar13 < 1) goto LAB_0010080b;
    if (*pcVar2 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar11 = 0;
      goto LAB_00100711;
    }
    if ((uVar9 == 0) || (*(uint *)(singleton + 0xe4) <= (uint)uVar9)) {
LAB_00100910:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar11 = 0;
      goto LAB_00100711;
    }
    lVar10 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(singleton + 0xe0)) * 0xa0 +
             *(long *)(*(long *)(singleton + 0xd0) +
                      ((uVar9 & 0xffffffff) / (ulong)*(uint *)(singleton + 0xe0)) * 8);
    if (*(int *)(lVar10 + 0x98) != (int)(uVar9 >> 0x20)) {
      if (*(int *)(lVar10 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00100910;
    }
    pVVar1 = (Version *)(singleton + 0x10);
    iVar7 = (int)lVar10;
    if (*(char *)(lVar10 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar13 = *(long *)(lVar4 + 0x88);
      if (lVar13 != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(lVar13 + -8) <= lVar12) break;
          if (*(char *)(lVar13 + lVar12) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar7);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar7);
          }
          lVar13 = *(long *)(lVar4 + 0x88);
          lVar12 = lVar12 + 1;
        } while (lVar13 != 0);
      }
    }
    puVar3 = *(uint **)(lVar4 + 0x48);
    if (puVar3 == (uint *)0x0) goto LAB_00100808;
    lVar13 = *(long *)(puVar3 + -2);
    if (lVar13 < 1) goto LAB_0010080b;
    uVar9 = (ulong)*puVar3;
    lVar4 = *(long *)(lVar10 + 0x68);
    if (lVar4 == 0) {
      lVar13 = 0;
      goto LAB_00100828;
    }
    lVar13 = *(long *)(lVar4 + -8);
    if (lVar13 <= (long)uVar9) goto LAB_00100828;
    if (*(long *)(lVar4 + uVar9 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar1,iVar7);
    }
    if (*(char *)(lVar10 + 0x90) != '\0') {
      puVar5 = *(undefined8 **)(lVar10 + 0x88);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00100808;
      lVar13 = puVar5[-1];
      if (0 < lVar13) {
        uVar11 = *puVar5;
        goto LAB_00100711;
      }
      goto LAB_0010080b;
    }
  }
  uVar11 = 0;
LAB_00100711:
  lVar4 = *(long *)(this + 0xa8);
  uVar8 = RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set
                    (this,param_1,param_2,param_3,lVar4 + 0x10,*(undefined8 *)(lVar4 + 0x1f8),
                     lVar4 + 0x1e0,lVar4 + 0x40,*(undefined4 *)(lVar4 + 0x200),this + 0xb0,uVar11,3,
                     1,1);
  pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
  return uVar8;
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



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_ref(CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>
   const&) [clone .part.0] */

void __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_ref
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this,
          CowData *param_1)

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



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_cull_mode_from_cull_variant(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::CullVariant)
    */

undefined4 __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
get_cull_mode_from_cull_variant(ShaderData *this,int param_2)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  local_38 = __LC24;
  uStack_30 = _LC29;
  local_28 = __LC25;
  uStack_20 = _UNK_0012f2f8;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined4 *)((long)&local_38 + ((long)param_2 * 3 + (long)*(int *)(this + 0x224)) * 4)
    ;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::_clear_vertex_input_mask_cache()
    */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
_clear_vertex_input_mask_cache(ShaderData *this)

{
  ShaderData *pSVar1;
  
  pSVar1 = this + 0x160;
  do {
    LOCK();
    *(undefined8 *)pSVar1 = 0;
    UNLOCK();
    pSVar1 = pSVar1 + 8;
  } while (pSVar1 != this + 0x1e0);
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_shader_variant(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderVersion,
   bool) const */

undefined8 __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_shader_variant
          (ShaderData *this,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x158) == 0) {
    return 0;
  }
  uVar1 = get_shader_variant(this,param_2,param_3);
  return uVar1;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_vertex_input_mask(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderVersion,
   bool) */

long __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::get_vertex_input_mask
          (ShaderData *this,int param_2,byte param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + (ulong)(param_2 + (uint)param_3 * 8) * 8 + 0x160);
  if (lVar1 != 0) {
    return lVar1;
  }
  if (*(long *)(this + 0x158) != 0) {
    lVar1 = get_shader_variant();
    if (lVar1 != 0) {
      uVar2 = RenderingDevice::get_singleton();
      lVar1 = RenderingDevice::shader_get_vertex_input_attribute_mask(uVar2,lVar1);
      *(long *)(this + (ulong)(param_2 + (uint)param_3 * 8) * 8 + 0x160) = lVar1;
      return lVar1;
    }
  }
  _err_print_error("get_vertex_input_mask",
                   "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp",
                   0x185,"Condition \"shader_rid.is_null()\" is true. Returning: 0",0,0);
  return 0;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::is_valid() const */

undefined4 __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::is_valid(ShaderData *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(long *)(this + 0x158) == 0) {
    return 0;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
  if (iVar1 == 0) {
    if (singleton == 0) {
      _err_print_error("is_valid",
                       "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp"
                       ,0x191,"Parameter \"SceneShaderForwardMobile::singleton\" is null.",0,0);
    }
    else {
      uVar2 = ShaderRD::version_is_valid(singleton + 0x10,*(undefined8 *)(this + 0x158));
    }
    pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::ShaderData() */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::ShaderData
          (ShaderData *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ShaderData *pSVar4;
  
  uVar1 = _LC29;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 **)(this + 0xa0) = &_GlobalNilClass::_nil;
  *(undefined8 **)(this + 0xf0) = &_GlobalNilClass::_nil;
  *(undefined8 *)(this + 0x128) = uVar1;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x108) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_set_path_hint_00111d38;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xd0) = 1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x140) = 1;
  *(undefined8 *)(this + 0x158) = 0;
  pSVar4 = this + 0x160;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pSVar4 = 0;
    pSVar4 = pSVar4 + 8;
  }
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  uVar2 = _LC66;
  uVar1 = __LC30;
  *(undefined2 *)(this + 0x240) = 0;
  *(code **)(this + 0x78) = _create_pipeline;
  lVar3 = singleton;
  *(undefined4 *)(this + 0x200) = 0;
  *(ShaderData **)(this + 0x70) = this;
  *(long *)(this + 0x90) = lVar3 + 0x720;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(ShaderData **)(this + 0x260) = this;
  *(undefined1 **)(this + 0x88) = singleton_mutex;
  *(undefined8 *)(this + 0x218) = uVar1;
  *(undefined8 *)(this + 0x220) = uVar2;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_shader_func() */

ShaderData * RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_shader_func(void)

{
  ShaderData *pSVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ShaderData *this;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
  if (iVar4 == 0) {
    this = (ShaderData *)operator_new(0x278,"");
    ShaderData::ShaderData(this);
    plVar3 = singleton;
    pSVar1 = this + 600;
    if (*(long *)(this + 600) == 0) {
      lVar2 = *singleton;
      *(long **)(this + 600) = singleton;
      *(undefined8 *)(this + 0x270) = 0;
      *(long *)(this + 0x268) = lVar2;
      if (lVar2 == 0) {
        plVar3[1] = (long)pSVar1;
      }
      else {
        *(ShaderData **)(lVar2 + 0x18) = pSVar1;
      }
      *plVar3 = (long)pSVar1;
    }
    else {
      _err_print_error(&_LC35,"./core/templates/self_list.h",0x2e,
                       "Condition \"p_elem->_root\" is true.",0,0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar4);
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_material_func(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*)
    */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_material_func
          (SceneShaderForwardMobile *this,ShaderData *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8,"");
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[0xc] = 2;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x14] = 0;
  *puVar1 = &PTR_set_render_priority_00111da8;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0;
  puVar1[0x15] = param_1;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x11) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x16) = (undefined1  [16])0x0;
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::SceneShaderForwardMobile() */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::SceneShaderForwardMobile
          (SceneShaderForwardMobile *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0x10));
  *(undefined ***)(this + 0x10) = &PTR__SceneForwardMobileShaderRD_00111d18;
  ShaderRD::setup((char *)(this + 0x10),
                  "\n#version 450\n\n#VERSION_DEFINES\n\n/* Include our forward mobile UBOs definitions etc. */\n#define M_PI 3.14159265359\n#define MAX_VIEWS 2\n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\nstruct DecalData {\n\thighp mat4 xform; \n\thighp vec3 inv_extents;\n\tmediump float albedo_mix;\n\thighp vec4 albedo_rect;\n\thighp vec4 normal_rect;\n\thighp vec4 orm_rect;\n\thighp vec4 emission_rect;\n\thighp vec4 modulate;\n\tmediump float emission_energy;\n\tuint mask;\n\tmediump float upper_fade;\n\tmediump float lower_fade;\n\tmediump mat3x4 normal_xform;\n\tmediump vec3 normal;\n\tmediump float normal_fade;\n};\n\n\n\n\n\nstruct SceneData {\n\thighp mat4 projection_matrix;\n\thighp mat4 inv_projection_matrix;\n\thighp mat4 inv_view_matrix;\n\thighp mat4 view_matrix;\n\n\t\n\thighp mat4 projection_matrix_view[MAX_VIEWS];\n\thighp mat4 inv_projection_matrix_view[MAX_VIEWS];\n\thighp vec4 eye_offset[MAX_VIEWS];\n\n\t\n\thighp mat4 main_cam_inv_view_matrix;\n\n\thighp vec2 viewport_size;\n\thighp vec2 screen_pixel_size;\n\n\t\n\thighp vec4 directional_penumbra_shadow_kernel[32];\n\thighp vec4 directional_soft_shadow_kernel[32];\n\thighp vec4 penumbra_shadow_kernel[32];\n\thighp vec4 soft_shadow_kernel[32];\n\n\tmediump mat3 radiance_inverse_xform;\n\n\tmediump vec4 ambient_light_color_energy;\n\n\tmediump float ambient_color_sky_mix;\n\tbool use_ambient_light;\n\tbool use_ambient_cubemap;\n\tbool use_reflection_cubemap;\n\n\thighp vec2 shadow_atlas_pixel_size;\n\thighp vec2 directional_shadow_pixel_size;\n\n\tuint directional_light_count;\n\tmediump float dual_paraboloid_side;\n\thighp float z_far;\n\thighp float z_near;\n\n\tbool roughness_limiter_enabled;\n\tmediump float roughness_limiter_amount;\n\tmediump float roughness_limiter_limit;\n\tmediump float opaque_prepass_threshold;\n\n\tbool fog_enabled;\n\tuint fog_mode;\n\thighp float fog_density;\n\thighp float fog_height;\n\n\thighp float fog_height_density;\n\thighp float fog_depth_curve;\n\thighp float fog_depth_begin;\n\thighp float taa_frame_count;\n\n\tmediump vec3 fog_light_color;\n\thighp float fog_depth_end;\n\n\tmediump float fog_sun_scatter;\n\t..." /* TRUNCATED STRING LITERAL */
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define SHADER_IS_SRGB false\n#define SHADER_SPACE_FAR 0.0\n\n/* Include our forward mobile UBOs definitions etc. */\n#define M_PI 3.14159265359\n#define MAX_VIEWS 2\n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\nstruct DecalData {\n\thighp mat4 xform; \n\thighp vec3 inv_extents;\n\tmediump float albedo_mix;\n\thighp vec4 albedo_rect;\n\thighp vec4 normal_rect;\n\thighp vec4 orm_rect;\n\thighp vec4 emission_rect;\n\thighp vec4 modulate;\n\tmediump float emission_energy;\n\tuint mask;\n\tmediump float upper_fade;\n\tmediump float lower_fade;\n\tmediump mat3x4 normal_xform;\n\tmediump vec3 normal;\n\tmediump float normal_fade;\n};\n\n\n\n\n\nstruct SceneData {\n\thighp mat4 projection_matrix;\n\thighp mat4 inv_projection_matrix;\n\thighp mat4 inv_view_matrix;\n\thighp mat4 view_matrix;\n\n\t\n\thighp mat4 projection_matrix_view[MAX_VIEWS];\n\thighp mat4 inv_projection_matrix_view[MAX_VIEWS];\n\thighp vec4 eye_offset[MAX_VIEWS];\n\n\t\n\thighp mat4 main_cam_inv_view_matrix;\n\n\thighp vec2 viewport_size;\n\thighp vec2 screen_pixel_size;\n\n\t\n\thighp vec4 directional_penumbra_shadow_kernel[32];\n\thighp vec4 directional_soft_shadow_kernel[32];\n\thighp vec4 penumbra_shadow_kernel[32];\n\thighp vec4 soft_shadow_kernel[32];\n\n\tmediump mat3 radiance_inverse_xform;\n\n\tmediump vec4 ambient_light_color_energy;\n\n\tmediump float ambient_color_sky_mix;\n\tbool use_ambient_light;\n\tbool use_ambient_cubemap;\n\tbool use_reflection_cubemap;\n\n\thighp vec2 shadow_atlas_pixel_size;\n\thighp vec2 directional_shadow_pixel_size;\n\n\tuint directional_light_count;\n\tmediump float dual_paraboloid_side;\n\thighp float z_far;\n\thighp float z_near;\n\n\tbool roughness_limiter_enabled;\n\tmediump float roughness_limiter_amount;\n\tmediump float roughness_limiter_limit;\n\tmediump float opaque_prepass_threshold;\n\n\tbool fog_enabled;\n\tuint fog_mode;\n\thighp float fog_density;\n\thighp float fog_height;\n\n\thighp float fog_height_density;\n\thighp float fog_depth_curve;\n\thighp float fog_depth_begin;\n\thighp float taa_frame_count;\n\n\tmediump vec3 fog_light_color;\n\thi..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  ShaderCompiler::ShaderCompiler((ShaderCompiler *)(this + 0x188));
  singleton = this;
  *(undefined1 (*) [16])(this + 0x690) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x710) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x6e0) = 0;
  *(undefined8 *)(this + 0x6e8) = 0;
  *(undefined8 *)(this + 0x6f0) = 0;
  *(undefined8 *)(this + 0x6f8) = 0;
  *(undefined8 *)(this + 0x700) = 0;
  *(undefined8 *)(this + 0x708) = 0;
  *(undefined4 *)(this + 0x730) = 0;
  *(undefined1 (*) [16])(this + 0x720) = (undefined1  [16])0x0;
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::get_pipeline_compilations(RenderingServer::PipelineSource)
    */

undefined4 __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::get_pipeline_compilations
          (SceneShaderForwardMobile *this,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(this + (long)param_2 * 4 + 0x720);
    pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::is_multiview_enabled() const */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::is_multiview_enabled
          (SceneShaderForwardMobile *this)

{
  ShaderRD::is_variant_enabled((int)this + 0x10);
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::~SceneShaderForwardMobile() */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::~SceneShaderForwardMobile
          (SceneShaderForwardMobile *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  
  plVar3 = (long *)RendererRD::MaterialStorage::get_singleton();
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar4,*(undefined8 *)(this + 0x6c8));
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar4,*(undefined8 *)(this + 0x6d8));
  (**(code **)(*plVar3 + 0x80))(plVar3,*(undefined8 *)(this + 0x6a0));
  (**(code **)(*plVar3 + 0x80))(plVar3,*(undefined8 *)(this + 0x690));
  (**(code **)(*plVar3 + 0x80))(plVar3,*(undefined8 *)(this + 0x6b0));
  (**(code **)(*plVar3 + 0xd8))(plVar3,*(undefined8 *)(this + 0x6a8));
  (**(code **)(*plVar3 + 0xd8))(plVar3,*(undefined8 *)(this + 0x698));
  (**(code **)(*plVar3 + 0xd8))(plVar3);
  if (*(long *)(this + 0x680) != 0) {
    LOCK();
    plVar3 = (long *)(*(long *)(this + 0x680) + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar5 = *(long *)(this + 0x680);
      *(undefined8 *)(this + 0x680) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x678) != 0) {
    LOCK();
    plVar3 = (long *)(*(long *)(this + 0x678) + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar5 = *(long *)(this + 0x678);
      *(undefined8 *)(this + 0x678) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x670) != 0) {
    LOCK();
    plVar3 = (long *)(*(long *)(this + 0x670) + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar5 = *(long *)(this + 0x670);
      *(undefined8 *)(this + 0x670) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x638);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x65c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x658) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x65c) = 0;
        *(undefined1 (*) [16])(this + 0x648) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x640) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x640) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              LOCK();
              plVar3 = (long *)(*(long *)((long)pvVar6 + 0x18) + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                lVar2 = *(long *)((long)pvVar6 + 0x18);
                *(undefined8 *)((long)pvVar6 + 0x18) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x638);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar1 << 2 != lVar5);
        *(undefined4 *)(this + 0x65c) = 0;
        *(undefined1 (*) [16])(this + 0x648) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001016cb;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x640),false);
  }
LAB_001016cb:
  pvVar6 = *(void **)(this + 0x608);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x62c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x628) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x62c) = 0;
        *(undefined1 (*) [16])(this + 0x618) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x610) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x610) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              LOCK();
              plVar3 = (long *)(*(long *)((long)pvVar6 + 0x18) + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                lVar2 = *(long *)((long)pvVar6 + 0x18);
                *(undefined8 *)((long)pvVar6 + 0x18) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x608);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x62c) = 0;
        *(undefined1 (*) [16])(this + 0x618) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001017bb;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x610),false);
  }
LAB_001017bb:
  pvVar6 = *(void **)(this + 0x5d8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x5fc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5f8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x5fc) = 0;
        *(undefined1 (*) [16])(this + 0x5e8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x5e0) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x5e0) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              LOCK();
              plVar3 = (long *)(*(long *)((long)pvVar6 + 0x18) + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                lVar2 = *(long *)((long)pvVar6 + 0x18);
                *(undefined8 *)((long)pvVar6 + 0x18) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x5d8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x5fc) = 0;
        *(undefined1 (*) [16])(this + 0x5e8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001018a9;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x5e0),false);
  }
LAB_001018a9:
  pvVar6 = *(void **)(this + 0x5a8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x5cc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5c8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x5cc) = 0;
        *(undefined1 (*) [16])(this + 0x5b8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x5b0) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x5b0) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              LOCK();
              plVar3 = (long *)(*(long *)((long)pvVar6 + 0x18) + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                lVar2 = *(long *)((long)pvVar6 + 0x18);
                *(undefined8 *)((long)pvVar6 + 0x18) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x5a8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar1 << 2 != lVar5);
        *(undefined4 *)(this + 0x5cc) = 0;
        *(undefined1 (*) [16])(this + 0x5b8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00101999;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x5b0),false);
  }
LAB_00101999:
  pvVar6 = *(void **)(this + 0x578);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x59c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x598) * 4) != 0) {
        memset(*(void **)(this + 0x590),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x598) * 4) << 2);
        if (*(int *)(this + 0x59c) == 0) goto LAB_00101f00;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x578);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x59c));
      *(undefined4 *)(this + 0x59c) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00101a36;
    }
LAB_00101f00:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x588),false);
    Memory::free_static(*(void **)(this + 0x580),false);
    Memory::free_static(*(void **)(this + 0x590),false);
  }
LAB_00101a36:
  pvVar6 = *(void **)(this + 0x550);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x574) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x570) * 4) != 0) {
        memset(*(void **)(this + 0x568),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x570) * 4) << 2);
        if (*(int *)(this + 0x574) == 0) goto LAB_00101f40;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x550);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x574));
      *(undefined4 *)(this + 0x574) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00101ace;
    }
LAB_00101f40:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x560),false);
    Memory::free_static(*(void **)(this + 0x558),false);
    Memory::free_static(*(void **)(this + 0x568),false);
  }
LAB_00101ace:
  pvVar6 = *(void **)(this + 0x528);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x54c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x548) * 4) != 0) {
        memset(*(void **)(this + 0x540),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x548) * 4) << 2);
        if (*(int *)(this + 0x54c) == 0) goto LAB_00101f80;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x528);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x54c));
      *(undefined4 *)(this + 0x54c) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00101b6e;
    }
LAB_00101f80:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x538),false);
    Memory::free_static(*(void **)(this + 0x530),false);
    Memory::free_static(*(void **)(this + 0x540),false);
  }
LAB_00101b6e:
  pvVar6 = *(void **)(this + 0x500);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x524) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x520) * 4) != 0) {
        memset(*(void **)(this + 0x518),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x520) * 4) << 2);
        if (*(int *)(this + 0x524) == 0) goto LAB_00101fc0;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x500);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x524));
      *(undefined4 *)(this + 0x524) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00101c06;
    }
LAB_00101fc0:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x510),false);
    Memory::free_static(*(void **)(this + 0x508),false);
    Memory::free_static(*(void **)(this + 0x518),false);
  }
LAB_00101c06:
  pvVar6 = *(void **)(this + 0x4d8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x4fc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f8) * 4) != 0) {
        memset(*(void **)(this + 0x4f0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f8) * 4) << 2);
        if (*(int *)(this + 0x4fc) == 0) goto LAB_00101da0;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x4d8);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x4fc));
      *(undefined4 *)(this + 0x4fc) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00101c9e;
    }
LAB_00101da0:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x4e8),false);
    Memory::free_static(*(void **)(this + 0x4e0),false);
    Memory::free_static(*(void **)(this + 0x4f0),false);
  }
LAB_00101c9e:
  pvVar6 = *(void **)(this + 0x4b0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x4d4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4d0) * 4) != 0) {
        memset(*(void **)(this + 0x4c8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4d0) * 4) << 2);
        if (*(int *)(this + 0x4d4) == 0) goto LAB_00101de0;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x4b0);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x4d4));
      *(undefined4 *)(this + 0x4d4) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00101d36;
    }
LAB_00101de0:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x4c0),false);
    Memory::free_static(*(void **)(this + 0x4b8),false);
    Memory::free_static(*(void **)(this + 0x4c8),false);
  }
LAB_00101d36:
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0x4a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101d74;
    }
    if (*(long *)(this + 0x4a0) != 0) {
      StringName::unref();
    }
  }
LAB_00101d74:
  ShaderLanguage::~ShaderLanguage((ShaderLanguage *)(this + 0x188));
  *(undefined ***)(this + 0x10) = &PTR__SceneForwardMobileShaderRD_00111d18;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x10));
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
/* RendererSceneRenderImplementation::SceneShaderForwardMobile::init(String) */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::init
          (SceneShaderForwardMobile *this,Vector *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [11];
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  long *plVar15;
  SamplerState *pSVar16;
  undefined8 uVar17;
  StrRange *pSVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  Vector *pVVar27;
  long in_FS_OFFSET;
  long local_250;
  long local_248;
  undefined8 local_240;
  long local_238;
  CowData<RenderingDevice::Uniform> local_230 [8];
  ulong uStack_228;
  undefined1 local_220 [16];
  undefined8 local_210;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_208 [8];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_1d8 [8];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  long local_158;
  undefined4 local_150;
  undefined2 local_14c;
  char *local_148;
  undefined1 auStack_140 [16];
  undefined1 local_130 [16];
  ulong local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  ulong local_f0;
  String local_e8 [8];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  ulong local_c0;
  String local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  int local_58 [6];
  long local_40;
  
  bVar13 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar15 = (long *)RendererRD::MaterialStorage::get_singleton();
  auVar11 = local_130._5_11_;
  local_130._0_8_ = SUB118(local_130._5_11_,0) << 0x28;
  local_148 = (char *)__LC58;
  auStack_140._8_8_ = _LC56;
  auStack_140._0_8_ = _UNK_0012f318;
  local_130._8_4_ = 0x3f800000;
  local_130._13_3_ = auVar11._8_3_;
  local_130[0xc] = 1;
  local_120 = 4;
  local_118 = 0x260ad78ec;
  auVar8[0xf] = 0;
  auVar8._0_15_ = local_110._1_15_;
  local_110 = auVar8 << 8;
  pSVar16 = (SamplerState *)RenderingDevice::get_singleton();
  uVar17 = RenderingDevice::sampler_create(pSVar16);
  uVar20 = 0;
  local_240 = 0;
  *(undefined8 *)(this + 0x6d8) = uVar17;
  local_148 = "";
  while( true ) {
    local_250 = 0;
    auStack_140._0_8_ = uVar20;
    String::parse_latin1((StrRange *)&local_250);
    local_148 = "";
    local_238 = 0;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auStack_140._8_8_;
    auStack_140 = auVar9 << 0x40;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (undefined *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (undefined *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    local_238 = 0;
    local_148 = "\n#define USE_LIGHTMAP\n";
    auStack_140._0_8_ = 0x16;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    local_238 = 0;
    local_148 = "\n#define MODE_RENDER_DEPTH\n";
    auStack_140._0_8_ = 0x1b;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    local_238 = 0;
    local_148 = "\n#define MODE_RENDER_DEPTH\n#define MODE_DUAL_PARABOLOID\n";
    auStack_140._0_8_ = 0x38;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    local_238 = 0;
    local_148 = "\n#define MODE_RENDER_DEPTH\n#define MODE_RENDER_MATERIAL\n";
    auStack_140._0_8_ = 0x38;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    local_238 = 0;
    local_148 = "\n#define USE_MULTIVIEW\n";
    auStack_140._0_8_ = 0x17;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    local_238 = 0;
    local_148 = "\n#define USE_MULTIVIEW\n#define USE_LIGHTMAP\n";
    auStack_140._0_8_ = 0x2c;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    local_238 = 0;
    local_148 = "\n#define USE_MULTIVIEW\n#define MODE_RENDER_DEPTH\n";
    auStack_140._0_8_ = 0x31;
    String::parse_latin1((StrRange *)&local_238);
    String::operator+((String *)&local_148,(StrRange *)&local_250);
    Vector<String>::push_back((Vector<String> *)&local_248);
    pcVar3 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_148 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar21 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar23 = (long *)(local_238 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    lVar21 = local_250;
    if (local_250 != 0) {
      LOCK();
      plVar23 = (long *)(local_250 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_250 = 0;
        Memory::free_static((void *)(lVar21 + -0x10),false);
      }
    }
    if (bVar13) break;
    bVar13 = true;
    uVar20 = 0x14;
    local_148 = "\n#define UBERSHADER\n";
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uStack_228;
  _local_230 = auVar5 << 0x40;
  local_148 = (char *)_LC66;
  pVVar27 = (Vector *)(this + 0x10);
  auStack_140._0_8_ = auStack_140._1_8_ << 8;
  auStack_140._8_8_ = *(undefined8 *)(this + 0x6d8);
  local_130._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_238,(String *)&local_148);
  ShaderRD::initialize(pVVar27,(StringName *)&local_248,param_2);
  cVar12 = (**(code **)(*RendererCompositorRD::singleton + 0xa8))();
  if (cVar12 == '\0') {
    iVar25 = (int)pVVar27;
    ShaderRD::set_variant_enabled(iVar25,true);
    ShaderRD::set_variant_enabled(iVar25,true);
    ShaderRD::set_variant_enabled(iVar25,true);
    ShaderRD::set_variant_enabled(iVar25,true);
    ShaderRD::set_variant_enabled(iVar25,true);
    ShaderRD::set_variant_enabled(iVar25,true);
  }
  CowData<RenderingDevice::Uniform>::_unref(local_230);
  CowData<String>::_unref((CowData<String> *)&local_240);
  RendererRD::MaterialStorage::shader_set_data_request_function(plVar15,1,_create_shader_funcs);
  RendererRD::MaterialStorage::material_set_data_request_function(plVar15,1,_create_material_funcs);
  uVar17 = 0;
  _local_230 = (undefined1  [16])0x0;
  local_220 = (undefined1  [16])0x0;
  local_14c = 0;
  local_200 = (undefined1  [16])0x0;
  local_1f0 = (undefined1  [16])0x0;
  local_1d0 = (undefined1  [16])0x0;
  local_1c0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  local_180 = __LC67;
  uStack_178 = _UNK_0012f328;
  local_168 = (undefined1  [16])0x0;
  local_210 = _LC29;
  local_1e0 = _LC29;
  local_1b0 = _LC29;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  StringName::StringName((StringName *)&local_248,"MODEL_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x11;
  local_148 = "read_model_matrix";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"MODEL_NORMAL_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "model_normal_matrix";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VIEW_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x10;
  local_148 = "read_view_matrix";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"INV_VIEW_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xf;
  local_148 = "inv_view_matrix";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"PROJECTION_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x11;
  local_148 = "projection_matrix";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"INV_PROJECTION_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "inv_projection_matrix";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"MODELVIEW_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 9;
  local_148 = "modelview";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"MODELVIEW_NORMAL_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x10;
  local_148 = "modelview_normal";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"MAIN_CAM_INV_VIEW_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x23;
  local_148 = "scene_data.main_cam_inv_view_matrix";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VERTEX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 6;
  local_148 = "vertex";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NORMAL",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 6;
  local_148 = "normal";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"TANGENT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 7;
  local_148 = "tangent";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BINORMAL",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 8;
  local_148 = "binormal";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"POSITION",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 8;
  local_148 = "position";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"UV",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 9;
  local_148 = "uv_interp";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"UV2",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 10;
  local_148 = "uv2_interp";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"COLOR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xc;
  local_148 = "color_interp";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"POINT_SIZE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xc;
  local_148 = "gl_PointSize";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"INSTANCE_ID",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x10;
  local_148 = "gl_InstanceIndex";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VERTEX_ID",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "gl_VertexIndex";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_SCISSOR_THRESHOLD",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x17;
  local_148 = "alpha_scissor_threshold";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_HASH_SCALE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x10;
  local_148 = "alpha_hash_scale";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_ANTIALIASING_EDGE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x17;
  local_148 = "alpha_antialiasing_edge";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_TEXTURE_COORDINATE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x18;
  local_148 = "alpha_texture_coordinate";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"TIME",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1a;
  local_148 = "scene_data_block.data.time";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"EXPOSURE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x3d;
  local_148 = "(1.0 / scene_data_block.data.emissive_exposure_normalization)";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"PI",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1e;
  local_148 = "3.1415926535897932384626433833";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"TAU",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1e;
  local_148 = "6.2831853071795864769252867666";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"E",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1e;
  local_148 = "2.7182818284590452353602874714";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"OUTPUT_IS_SRGB",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "SHADER_IS_SRGB";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CLIP_SPACE_FAR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x10;
  local_148 = "SHADER_SPACE_FAR";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VIEWPORT_SIZE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x12;
  local_148 = "read_viewport_size";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"FRAGCOORD",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xc;
  local_148 = "gl_FragCoord";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"FRONT_FACING",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "gl_FrontFacing";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NORMAL_MAP",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 10;
  local_148 = "normal_map";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NORMAL_MAP_DEPTH",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x10;
  local_148 = "normal_map_depth";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALBEDO",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 6;
  local_148 = "albedo";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 5;
  local_148 = "alpha";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"PREMUL_ALPHA_FACTOR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xc;
  local_148 = "premul_alpha";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"METALLIC",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 8;
  local_148 = "metallic";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SPECULAR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 8;
  local_148 = "specular";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ROUGHNESS",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 9;
  local_148 = "roughness";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"RIM",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 3;
  local_148 = "rim";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"RIM_TINT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 8;
  local_148 = "rim_tint";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CLEARCOAT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 9;
  local_148 = "clearcoat";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CLEARCOAT_ROUGHNESS",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "clearcoat_roughness";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ANISOTROPY",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 10;
  local_148 = "anisotropy";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ANISOTROPY_FLOW",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xf;
  local_148 = "anisotropy_flow";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SSS_STRENGTH",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xc;
  local_148 = "sss_strength";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SSS_TRANSMITTANCE_COLOR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "transmittance_color";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SSS_TRANSMITTANCE_DEPTH",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "transmittance_depth";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SSS_TRANSMITTANCE_BOOST",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "transmittance_boost";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BACKLIGHT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 9;
  local_148 = "backlight";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"AO",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 2;
  local_148 = "ao";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"AO_LIGHT_AFFECT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xf;
  local_148 = "ao_light_affect";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"EMISSION",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 8;
  local_148 = "emission";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"POINT_COORD",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xd;
  local_148 = "gl_PointCoord";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"INSTANCE_CUSTOM",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xf;
  local_148 = "instance_custom";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SCREEN_UV",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 9;
  local_148 = "screen_uv";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"DEPTH",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xc;
  local_148 = "gl_FragDepth";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"FOG",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 3;
  local_148 = "fog";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"RADIANCE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xf;
  local_148 = "custom_radiance";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"IRRADIANCE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x11;
  local_148 = "custom_irradiance";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BONE_INDICES",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xb;
  local_148 = "bone_attrib";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BONE_WEIGHTS",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xd;
  local_148 = "weight_attrib";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM0",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "custom0_attrib";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM1",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "custom1_attrib";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM2",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "custom2_attrib";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM3",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "custom3_attrib";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"LIGHT_VERTEX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xc;
  local_148 = "light_vertex";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NODE_POSITION_WORLD",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x18;
  local_148 = "read_model_matrix[3].xyz";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CAMERA_POSITION_WORLD",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x21;
  local_148 = "scene_data.inv_view_matrix[3].xyz";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CAMERA_DIRECTION_WORLD",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x21;
  local_148 = "scene_data.inv_view_matrix[2].xyz";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CAMERA_VISIBLE_LAYERS",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x20;
  local_148 = "scene_data.camera_visible_layers";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NODE_POSITION_VIEW",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0x33;
  local_148 = "(scene_data.view_matrix * read_model_matrix)[3].xyz";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VIEW_INDEX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 9;
  local_148 = "ViewIndex";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VIEW_MONO_LEFT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 1;
  local_148 = "0";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VIEW_RIGHT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 1;
  local_148 = "1";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"EYE_OFFSET",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 10;
  local_148 = "eye_offset";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"VIEW",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 4;
  local_148 = "view";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SPECULAR_AMOUNT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xf;
  local_148 = "specular_amount";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"LIGHT_COLOR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xb;
  local_148 = "light_color";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"LIGHT_IS_DIRECTIONAL",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "is_directional";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"LIGHT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 5;
  local_148 = "light";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ATTENUATION",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xb;
  local_148 = "attenuation";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"DIFFUSE_LIGHT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xd;
  local_148 = "diffuse_light";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SPECULAR_LIGHT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_238,(StringName *)&local_248);
  auStack_140._0_8_ = 0xe;
  local_148 = "specular_light";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NORMAL",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x14;
  local_148 = "#define NORMAL_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"TANGENT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define TANGENT_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BINORMAL",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 8;
  local_148 = "@TANGENT";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"RIM",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x17;
  local_148 = "#define LIGHT_RIM_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"RIM_TINT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 4;
  local_148 = "@RIM";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CLEARCOAT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1d;
  local_148 = "#define LIGHT_CLEARCOAT_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CLEARCOAT_ROUGHNESS",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 10;
  local_148 = "@CLEARCOAT";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ANISOTROPY",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1e;
  local_148 = "#define LIGHT_ANISOTROPY_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ANISOTROPY_FLOW",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0xb;
  local_148 = "@ANISOTROPY";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"AO",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  local_148 = "#define AO_USED\n";
  auStack_140._0_8_ = 0x10;
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"AO_LIGHT_AFFECT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  local_148 = "#define AO_USED\n";
  auStack_140._0_8_ = 0x10;
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"UV",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x10;
  local_148 = "#define UV_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"UV2",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x11;
  local_148 = "#define UV2_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BONE_INDICES",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "#define BONES_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BONE_WEIGHTS",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define WEIGHTS_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM0",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define CUSTOM0_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM1",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define CUSTOM1_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM2",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define CUSTOM2_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"CUSTOM3",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define CUSTOM3_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NORMAL_MAP",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x18;
  local_148 = "#define NORMAL_MAP_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"NORMAL_MAP_DEPTH",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0xb;
  local_148 = "@NORMAL_MAP";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"COLOR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "#define COLOR_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"INSTANCE_CUSTOM",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1f;
  local_148 = "#define ENABLE_INSTANCE_CUSTOM\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"POSITION",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1a;
  local_148 = "#define OVERRIDE_POSITION\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"LIGHT_VERTEX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1a;
  local_148 = "#define LIGHT_VERTEX_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_SCISSOR_THRESHOLD",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1b;
  local_148 = "#define ALPHA_SCISSOR_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_HASH_SCALE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x18;
  local_148 = "#define ALPHA_HASH_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_ANTIALIASING_EDGE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x25;
  local_148 = "#define ALPHA_ANTIALIASING_EDGE_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ALPHA_TEXTURE_COORDINATE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x18;
  local_148 = "@ALPHA_ANTIALIASING_EDGE";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"PREMUL_ALPHA_FACTOR",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x19;
  local_148 = "#define PREMUL_ALPHA_USED";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SSS_STRENGTH",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x13;
  local_148 = "#define ENABLE_SSS\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SSS_TRANSMITTANCE_DEPTH",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1d;
  local_148 = "#define ENABLE_TRANSMITTANCE\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"BACKLIGHT",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1d;
  local_148 = "#define LIGHT_BACKLIGHT_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"SCREEN_UV",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x17;
  local_148 = "#define SCREEN_UV_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"FOG",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x18;
  local_148 = "#define CUSTOM_FOG_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"RADIANCE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1d;
  local_148 = "#define CUSTOM_RADIANCE_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"IRRADIANCE",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1f;
  local_148 = "#define CUSTOM_IRRADIANCE_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"MODEL_MATRIX",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1d8,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1a;
  local_148 = "#define MODEL_MATRIX_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"skip_vertex_transform",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1c;
  local_148 = "#define SKIP_TRANSFORM_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"world_vertex_coords",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x21;
  local_148 = "#define VERTEX_WORLD_COORDS_USED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ensure_correct_normals",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1f;
  local_148 = "#define ENSURE_CORRECT_NORMALS\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"cull_front",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  local_148 = "#define DO_SIDE_CHECK\n";
  auStack_140._0_8_ = 0x16;
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"cull_disabled",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  local_148 = "#define DO_SIDE_CHECK\n";
  auStack_140._0_8_ = 0x16;
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"particle_trails",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1c;
  local_148 = "#define USE_PARTICLE_TRAILS\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"depth_prepass_alpha",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1b;
  local_148 = "#define USE_OPAQUE_PREPASS\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_148,"rendering/shading/overrides/force_lambert_over_burley",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar13 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  if (!bVar13) {
    StringName::StringName((StringName *)&local_248,"diffuse_burley",false);
    pSVar18 = (StrRange *)
              HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
              ::operator[](local_208,(StringName *)&local_248);
    auStack_140._0_8_ = 0x17;
    local_148 = "#define DIFFUSE_BURLEY\n";
    String::parse_latin1(pSVar18);
    if ((StringName::configured != '\0') && (local_248 != 0)) {
      StringName::unref();
    }
  }
  StringName::StringName((StringName *)&local_248,"diffuse_lambert_wrap",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1d;
  local_148 = "#define DIFFUSE_LAMBERT_WRAP\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"diffuse_toon",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define DIFFUSE_TOON\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"sss_mode_skin",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x16;
  local_148 = "#define SSS_MODE_SKIN\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"specular_schlick_ggx",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1d;
  local_148 = "#define SPECULAR_SCHLICK_GGX\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"specular_toon",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x16;
  local_148 = "#define SPECULAR_TOON\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"specular_disabled",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1a;
  local_148 = "#define SPECULAR_DISABLED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"shadows_disabled",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x19;
  local_148 = "#define SHADOWS_DISABLED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"ambient_light_disabled",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1f;
  local_148 = "#define AMBIENT_LIGHT_DISABLED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"shadow_to_opacity",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1e;
  local_148 = "#define USE_SHADOW_TO_OPACITY\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"unshaded",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x16;
  local_148 = "#define MODE_UNSHADED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_148,"rendering/shading/overrides/force_vertex_shading",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar13 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  if (!bVar13) {
    StringName::StringName((StringName *)&local_248,"vertex_lighting",false);
    pSVar18 = (StrRange *)
              HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
              ::operator[](local_208,(StringName *)&local_248);
    auStack_140._0_8_ = 0x1c;
    local_148 = "#define USE_VERTEX_LIGHTING\n";
    String::parse_latin1(pSVar18);
    if ((StringName::configured != '\0') && (local_248 != 0)) {
      StringName::unref();
    }
  }
  StringName::StringName((StringName *)&local_248,"debug_shadow_splits",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x1f;
  local_148 = "#define DEBUG_DRAW_PSSM_SPLITS\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_248,"fog_disabled",false);
  pSVar18 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_208,(StringName *)&local_248);
  auStack_140._0_8_ = 0x15;
  local_148 = "#define FOG_DISABLED\n";
  String::parse_latin1(pSVar18);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  auStack_140._0_8_ = 9;
  local_170 = _LC322;
  local_148 = "material.";
  String::parse_latin1((StrRange *)local_168);
  local_150 = 10;
  auStack_140._0_8_ = 0x1b;
  uStack_178 = _LC324;
  local_148 = "global_shader_uniforms.data";
  String::parse_latin1((StrRange *)(local_168 + 8));
  auStack_140._0_8_ = 0x3e;
  local_148 = "instances.data[draw_call.instance_index].instance_uniforms_ofs";
  String::parse_latin1((StrRange *)&local_158);
  local_14c = CONCAT11(local_14c._1_1_,1);
  uVar14 = (**(code **)(*RendererCompositorRD::singleton + 0xa8))();
  local_120 = 0;
  local_14c = CONCAT11(uVar14,(undefined1)local_14c);
  auStack_140 = (undefined1  [16])0x0;
  local_130 = (undefined1  [16])0x0;
  uVar19 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_210 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_210 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar19 * 4)) {
        local_120 = uVar19 & 0xffffffff;
        goto LAB_00106453;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00106453:
  if (local_210._4_4_ != 0) {
    for (puVar1 = (undefined8 *)local_220._0_8_; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_248,(String *)&local_148,(bool)((char)puVar1 + '\x10'));
    }
  }
  local_f0 = 0;
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  uVar19 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_1e0 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_1e0 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar19 * 4)) {
        local_f0 = uVar19 & 0xffffffff;
        goto LAB_00106509;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00106509:
  if ((local_1e0._4_4_ != 0) && ((long *)local_1f0._0_8_ != (long *)0x0)) {
    plVar23 = (long *)local_1f0._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_248,(String *)&local_118,(bool)((char)plVar23 + '\x10'));
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  local_c0 = 0;
  local_e0 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  uVar19 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_1b0 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_1b0 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar19 * 4)) {
        local_c0 = uVar19 & 0xffffffff;
        goto LAB_001065d9;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001065d9:
  if ((local_1b0._4_4_ != 0) && ((long *)local_1c0._0_8_ != (long *)0x0)) {
    plVar23 = (long *)local_1c0._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_248,local_e8,(bool)((char)plVar23 + '\x10'));
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  local_90 = 0;
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  uVar19 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_180 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_180 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar19 * 4)) {
        local_90 = uVar19 & 0xffffffff;
        goto LAB_001066aa;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001066aa:
  if ((local_180._4_4_ != 0) && ((long *)local_190._0_8_ != (long *)0x0)) {
    plVar23 = (long *)local_190._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_248,local_b8,(bool)((char)plVar23 + '\x10'));
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  local_78 = 0;
  local_88 = uStack_178;
  local_80 = local_170;
  if (local_168._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)local_168);
  }
  local_70 = 0;
  if (local_168._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_168 + 8));
  }
  local_68 = 0;
  if (local_158 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_158);
  }
  local_60 = local_150;
  local_5c = local_14c;
  ShaderCompiler::initialize(this + 0x188,(String *)&local_148);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_148);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_238);
  uVar20 = (**(code **)(*plVar15 + 0x70))(plVar15);
  *(undefined8 *)(this + 0x690) = uVar20;
  (**(code **)(*plVar15 + 0x78))(plVar15,uVar20);
  pcVar2 = *(code **)(*plVar15 + 0x88);
  local_238 = 0;
  local_148 = 
  "\n// Default 3D material shader (Mobile).\n\nshader_type spatial;\n\nvoid vertex() {\n\tROUGHNESS = 0.8;\n}\n\nvoid fragment() {\n\tALBEDO = vec3(0.6);\n\tROUGHNESS = 0.8;\n\tMETALLIC = 0.2;\n}\n"
  ;
  auStack_140._0_8_ = 0xb1;
  String::parse_latin1((StrRange *)&local_238);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0x690),(StrRange *)&local_238);
  lVar21 = local_238;
  if (local_238 != 0) {
    LOCK();
    plVar23 = (long *)(local_238 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_238 = 0;
      Memory::free_static((void *)(lVar21 + -0x10),false);
    }
  }
  uVar20 = (**(code **)(*plVar15 + 200))(plVar15);
  *(undefined8 *)(this + 0x698) = uVar20;
  (**(code **)(*plVar15 + 0xd0))(plVar15,uVar20);
  (**(code **)(*plVar15 + 0xe8))
            (plVar15,*(undefined8 *)(this + 0x698),*(undefined8 *)(this + 0x690));
  uVar19 = *(ulong *)(this + 0x698);
  if ((uVar19 == 0) || (*(uint *)((long)plVar15 + 0x26c) <= (uint)uVar19)) goto LAB_0010caba;
  lVar21 = ((uVar19 & 0xffffffff) % (ulong)*(uint *)(plVar15 + 0x4d)) * 0xc0 +
           *(long *)(plVar15[0x4b] + ((uVar19 & 0xffffffff) / (ulong)*(uint *)(plVar15 + 0x4d)) * 8)
  ;
  if (*(int *)(lVar21 + 0xb8) != (int)(uVar19 >> 0x20)) {
    if (*(int *)(lVar21 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,uVar17);
    }
    goto LAB_0010caba;
  }
  if (*(int *)(lVar21 + 0x18) != 1) goto LAB_0010caba;
  lVar21 = *(long *)(lVar21 + 8);
  uVar19 = *(ulong *)(*(long *)(lVar21 + 0xa8) + 0x158);
  if (*(long *)(this + 0x28) == 0) {
    lVar26 = 0;
LAB_00106f7f:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar26,
               "p_variant","variant_defines.size()","",false,false);
LAB_00106fb8:
    uVar17 = 0;
  }
  else {
    lVar26 = *(long *)(*(long *)(this + 0x28) + -8);
    if (lVar26 < 1) goto LAB_00106f7f;
    pcVar3 = *(char **)(this + 0x38);
    if (pcVar3 == (char *)0x0) {
LAB_00107030:
      lVar26 = 0;
LAB_00107033:
      uVar19 = 0;
LAB_00107050:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar19,lVar26,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar26 = *(long *)(pcVar3 + -8);
    if (lVar26 < 1) goto LAB_00107033;
    if (*pcVar3 != '\0') {
      if ((uVar19 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar19)) {
LAB_00106ff0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar17 = 0;
        goto LAB_00106a03;
      }
      lVar22 = ((uVar19 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
               *(long *)(*(long *)(this + 0xd0) +
                        ((uVar19 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
      if (*(int *)(lVar22 + 0x98) != (int)(uVar19 >> 0x20)) {
        if (*(int *)(lVar22 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00106ff0;
      }
      iVar25 = (int)lVar22;
      if (*(char *)(lVar22 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)pVVar27);
        lVar26 = *(long *)(this + 0x88);
        if (lVar26 != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(lVar26 + -8) <= lVar24) break;
            if (*(char *)(lVar26 + lVar24) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)pVVar27,iVar25);
            }
            else {
              ShaderRD::_compile_version_start((Version *)pVVar27,iVar25);
            }
            lVar26 = *(long *)(this + 0x88);
            lVar24 = lVar24 + 1;
          } while (lVar26 != 0);
        }
      }
      puVar4 = *(uint **)(this + 0x48);
      if (puVar4 == (uint *)0x0) goto LAB_00107030;
      lVar26 = *(long *)(puVar4 + -2);
      if (lVar26 < 1) goto LAB_00107033;
      uVar19 = (ulong)*puVar4;
      lVar24 = *(long *)(lVar22 + 0x68);
      if (lVar24 == 0) {
        lVar26 = 0;
        goto LAB_00107050;
      }
      lVar26 = *(long *)(lVar24 + -8);
      if (lVar26 <= (long)uVar19) goto LAB_00107050;
      if (*(long *)(lVar24 + uVar19 * 8) == 0) {
        cVar12 = *(char *)(lVar22 + 0x90);
      }
      else {
        ShaderRD::_compile_version_end((Version *)pVVar27,iVar25);
        cVar12 = *(char *)(lVar22 + 0x90);
      }
      if (cVar12 != '\0') {
        puVar1 = *(undefined8 **)(lVar22 + 0x88);
        if (puVar1 == (undefined8 *)0x0) goto LAB_00107030;
        lVar26 = puVar1[-1];
        if (0 < lVar26) {
          uVar17 = *puVar1;
          goto LAB_00106a03;
        }
        goto LAB_00107033;
      }
      goto LAB_00106fb8;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    uVar17 = 0;
  }
LAB_00106a03:
  *(undefined8 *)(this + 0x6c0) = uVar17;
  *(undefined8 *)(this + 0x6e8) = *(undefined8 *)(lVar21 + 0xa8);
  *(undefined8 *)(this + 0x6e0) = *(undefined8 *)(lVar21 + 0xb0);
  uVar17 = (**(code **)(*plVar15 + 0x70))(plVar15);
  *(undefined8 *)(this + 0x6a0) = uVar17;
  (**(code **)(*plVar15 + 0x78))(plVar15,uVar17);
  pcVar2 = *(code **)(*plVar15 + 0x88);
  local_238 = 0;
  local_148 = 
  "\n// 3D editor Overdraw debug draw mode shader (Mobile).\n\nshader_type spatial;\n\nrender_mode blend_add, unshaded, fog_disabled;\n\nvoid fragment() {\n\tALBEDO = vec3(0.4, 0.8, 0.8);\n\tALPHA = 0.1;\n}\n"
  ;
  auStack_140._0_8_ = 0xc0;
  String::parse_latin1((StrRange *)&local_238);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0x6a0),(StrRange *)&local_238);
  lVar21 = local_238;
  if (local_238 != 0) {
    LOCK();
    plVar23 = (long *)(local_238 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_238 = 0;
      Memory::free_static((void *)(lVar21 + -0x10),false);
    }
  }
  uVar17 = (**(code **)(*plVar15 + 200))(plVar15);
  *(undefined8 *)(this + 0x6a8) = uVar17;
  (**(code **)(*plVar15 + 0xd0))(plVar15,uVar17);
  (**(code **)(*plVar15 + 0xe8))
            (plVar15,*(undefined8 *)(this + 0x6a8),*(undefined8 *)(this + 0x6a0));
  uVar19 = *(ulong *)(this + 0x6a8);
  if ((uVar19 != 0) && ((uint)uVar19 < *(uint *)((long)plVar15 + 0x26c))) {
    lVar21 = ((uVar19 & 0xffffffff) % (ulong)*(uint *)(plVar15 + 0x4d)) * 0xc0 +
             *(long *)(plVar15[0x4b] +
                      ((uVar19 & 0xffffffff) / (ulong)*(uint *)(plVar15 + 0x4d)) * 8);
    if (*(int *)(lVar21 + 0xb8) == (int)(uVar19 >> 0x20)) {
      if (*(int *)(lVar21 + 0x18) == 1) {
        uVar17 = *(undefined8 *)(*(long *)(lVar21 + 8) + 0xa8);
        *(undefined8 *)(this + 0x6f0) = *(undefined8 *)(*(long *)(lVar21 + 8) + 0xb0);
        lVar21 = *plVar15;
        *(undefined8 *)(this + 0x6f8) = uVar17;
        uVar17 = (**(code **)(lVar21 + 0x70))(plVar15);
        *(undefined8 *)(this + 0x6b0) = uVar17;
        (**(code **)(*plVar15 + 0x78))(plVar15,uVar17);
        pcVar2 = *(code **)(*plVar15 + 0x88);
        local_238 = 0;
        local_148 = 
        "\n// 3D debug shadow splits mode shader (Mobile).\n\nshader_type spatial;\n\nrender_mode debug_shadow_splits, fog_disabled;\n\nvoid fragment() {\n\tALBEDO = vec3(1.0, 1.0, 1.0);\n}\n"
        ;
        auStack_140._0_8_ = 0xab;
        String::parse_latin1((StrRange *)&local_238);
        (*pcVar2)(plVar15,*(undefined8 *)(this + 0x6b0),(StrRange *)&local_238);
        lVar21 = local_238;
        if (local_238 != 0) {
          LOCK();
          plVar23 = (long *)(local_238 + -0x10);
          *plVar23 = *plVar23 + -1;
          UNLOCK();
          if (*plVar23 == 0) {
            local_238 = 0;
            Memory::free_static((void *)(lVar21 + -0x10),false);
          }
        }
        uVar17 = (**(code **)(*plVar15 + 200))(plVar15);
        *(undefined8 *)(this + 0x6b8) = uVar17;
        (**(code **)(*plVar15 + 0xd0))(plVar15,uVar17);
        (**(code **)(*plVar15 + 0xe8))
                  (plVar15,*(undefined8 *)(this + 0x6b8),*(undefined8 *)(this + 0x6b0));
        uVar19 = *(ulong *)(this + 0x6b8);
        if ((uVar19 != 0) && ((uint)uVar19 < *(uint *)((long)plVar15 + 0x26c))) {
          lVar21 = ((uVar19 & 0xffffffff) % (ulong)*(uint *)(plVar15 + 0x4d)) * 0xc0 +
                   *(long *)(plVar15[0x4b] +
                            ((uVar19 & 0xffffffff) / (ulong)*(uint *)(plVar15 + 0x4d)) * 8);
          if (*(int *)(lVar21 + 0xb8) == (int)(uVar19 >> 0x20)) {
            if (*(int *)(lVar21 + 0x18) == 1) {
              uVar17 = *(undefined8 *)(*(long *)(lVar21 + 8) + 0xb0);
              *(undefined8 *)(this + 0x708) = *(undefined8 *)(*(long *)(lVar21 + 8) + 0xa8);
              *(undefined8 *)(this + 0x700) = uVar17;
              uVar17 = RenderingDevice::get_singleton();
              auVar6._8_8_ = 0;
              auVar6._0_8_ = auStack_140._8_8_;
              auStack_140 = auVar6 << 0x40;
              uVar17 = RenderingDevice::storage_buffer_create(uVar17,0x100,(String *)&local_148,0,0)
              ;
              *(undefined8 *)(this + 0x6c8) = uVar17;
              uVar17 = auStack_140._0_8_;
              if (auStack_140._0_8_ != 0) {
                LOCK();
                plVar15 = (long *)(auStack_140._0_8_ + -0x10);
                *plVar15 = *plVar15 + -1;
                UNLOCK();
                if (*plVar15 == 0) {
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = auStack_140._8_8_;
                  auStack_140 = auVar7 << 0x40;
                  Memory::free_static((void *)(uVar17 + -0x10),false);
                }
              }
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uStack_228;
              _local_230 = auVar10 << 0x40;
              local_148 = (char *)0x8;
              auStack_140._0_8_ = auStack_140._1_8_ << 8;
              local_130._8_8_ = 0;
              auStack_140._8_8_ = *(undefined8 *)(this + 0x6c8);
              Vector<RenderingDevice::Uniform>::push_back
                        ((Vector<RenderingDevice::Uniform> *)&local_238,(String *)&local_148);
              uVar17 = RenderingDevice::get_singleton();
              uVar17 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                 (uVar17,(StrRange *)&local_238,*(undefined8 *)(this + 0x6c0),2,0);
              *(undefined8 *)(this + 0x6d0) = uVar17;
              CowData<RenderingDevice::Uniform>::_unref(local_230);
              if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
          else if (*(int *)(lVar21 + 0xb8) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,lVar21);
          }
        }
      }
    }
    else if (*(int *)(lVar21 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,plVar15[0x4b]);
    }
  }
LAB_0010caba:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back(RenderingDeviceCommons::PipelineSpecializationConstant)
   [clone .isra.0] */

void Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>
                    ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)
                     (param_1 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)(param_1 + 8))
        ;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0xc);
        *puVar1 = param_2;
        *(undefined4 *)(puVar1 + 1) = param_3;
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
/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::_create_pipeline(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)
    */

void RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::_create_pipeline
               (ShaderData *param_1)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  uint uStack0000000000000030;
  undefined4 uStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  undefined8 uVar13;
  undefined1 local_298 [32];
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined2 local_258;
  ShaderData local_256;
  undefined4 local_254;
  undefined4 local_250;
  undefined1 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 local_228;
  undefined1 local_224;
  undefined4 local_220;
  long local_210;
  undefined2 local_208;
  undefined1 local_1f8;
  bool bStack_1f7;
  undefined2 uStack_1f6;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 local_188;
  undefined4 local_184;
  undefined1 local_180 [8];
  long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150 [8];
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128;
  undefined4 local_124;
  undefined1 local_120 [8];
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [8];
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_98 [4];
  undefined4 local_94;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RendererRD::MaterialStorage::ShaderData::blend_mode_to_blend_attachment(local_298);
  local_188 = 0;
  local_184 = 0;
  local_170 = __LC335;
  uStack_168 = _UNK_0012f338;
  local_178 = 0;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_180);
  uVar5 = _LC52;
  local_1f8 = 0;
  bStack_1f7 = false;
  uStack_1f6 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1dc = _LC52;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  local_140 = __LC335;
  uStack_138 = _UNK_0012f338;
  local_158 = 0;
  local_154 = 0;
  local_148 = 0;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_150);
  uStack_1dc = uVar5;
  local_1f8 = 0;
  bStack_1f7 = false;
  uStack_1f6 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  local_110 = __LC335;
  uStack_108 = _UNK_0012f338;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  local_128 = 0;
  local_124 = 0;
  local_118 = 0;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_120);
  uStack_1dc = uVar5;
  local_1f8 = 0;
  bStack_1f7 = false;
  uStack_1f6 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_120);
  uStack_1dc = uVar5;
  local_1f8 = 0;
  bStack_1f7 = false;
  uStack_1f6 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  local_e0 = __LC335;
  uStack_d8 = _UNK_0012f338;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_e8 = 0;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_f0);
  uStack_1dc = uVar5;
  local_1f8 = 0;
  bStack_1f7 = false;
  uStack_1f6 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  local_b0 = __LC335;
  uStack_a8 = _UNK_0012f338;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_c0);
  uStack_1dc = uVar5;
  local_1f8 = 0;
  bStack_1f7 = false;
  uStack_1f6 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_c0);
  bStack_1f7 = false;
  uStack_1e0 = (undefined4)__LC336;
  uStack_1dc = (undefined4)((ulong)__LC336 >> 0x20);
  uStack_1d8 = _UNK_0012f348;
  uStack_1f4 = 7;
  local_1d0 = __LC337;
  uStack_1c8 = _UNK_0012f358;
  uStack_1f0 = uStack_1f0 & 0xffffff00;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = uStack_1e4 & 0xffffff00;
  local_1b0 = 0;
  local_1c0 = __LC338;
  uStack_1b8 = _UNK_0012f368;
  local_1f8 = *(int *)(param_1 + 0x214) != 0;
  if ((bool)local_1f8) {
    uStack_1f4 = 6;
    bStack_1f7 = *(int *)(param_1 + 0x210) != 0;
  }
  uVar12 = 0;
  local_198 = 7;
  local_1a8 = __LC339;
  uStack_1a0 = _UNK_0012f378;
  if (param_1[0x228] == (ShaderData)0x0) {
    uVar12 = *(undefined4 *)((long)&local_1a8 + (long)iStack000000000000001c * 4);
  }
  local_250 = 0;
  local_258 = 0;
  local_254 = uStack0000000000000018;
  local_256 = param_1[0x234];
  local_24c = 0;
  local_238 = 1;
  local_248 = __LC335;
  uStack_240 = _UNK_0012f338;
  if (local_256 == (ShaderData)0x0) {
    local_256 = (ShaderData)(iStack0000000000000038 != 0);
  }
  local_208 = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_210 = 0;
  lVar6 = RenderingDevice::get_singleton();
  uVar4 = in_stack_00000010;
  local_228 = RenderingDevice::framebuffer_format_get_texture_samples(lVar6,(uint)in_stack_00000010)
  ;
  uVar11 = uStack0000000000000030;
  local_98[0] = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = __LC335;
  uStack_78 = _UNK_0012f338;
  if ((param_1[0x229] == (ShaderData)0x0) && (param_1[0x22a] == (ShaderData)0x0)) {
    if (uStack0000000000000030 == 4) {
      local_68 = 0;
      iVar10 = 5;
      local_64 = 0;
      local_58 = 0;
      local_50 = __LC335;
      uStack_48 = _UNK_0012f338;
      do {
        local_278 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        local_268 = 0;
        uStack_260 = 0;
        uStack_25c = uVar5;
        Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
        lVar6 = local_88;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      local_98[0] = local_68;
      local_94 = local_64;
      if (local_88 == local_58) {
LAB_00107dc0:
        local_80 = local_50;
        uStack_78 = uStack_48;
        uVar11 = uStack0000000000000030;
        local_98[0] = local_68;
        local_94 = local_64;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_58 + -0x10),false);
            uVar11 = uStack0000000000000030;
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
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        local_80 = local_50;
        uStack_78 = uStack_48;
        uVar11 = uStack0000000000000030;
        local_88 = local_58;
      }
    }
    else {
      uVar3 = uStack0000000000000030;
      if (4 < uStack0000000000000030) {
        uVar3 = uStack0000000000000030 - 5;
      }
      if (uVar3 < 2) {
        local_98[0] = local_158;
        local_94 = local_154;
        if (local_148 != 0) {
          CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_ref
                    ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                     &local_88,(CowData *)&local_148);
        }
        local_80 = local_140;
        uStack_78 = uStack_138;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x220) == 1) {
      local_208 = CONCAT11(local_208._1_1_,1);
    }
    else if (*(int *)(param_1 + 0x220) == 2) {
      local_208 = 0x101;
    }
    if (uStack0000000000000030 == 4) {
      local_68 = 0;
      iVar10 = 5;
      local_64 = 0;
      local_58 = 0;
      local_50 = __LC335;
      uStack_48 = _UNK_0012f338;
      do {
        local_278 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        local_268 = 0;
        uStack_260 = 0;
        uStack_25c = uVar5;
        Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
        lVar6 = local_88;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      local_98[0] = local_68;
      local_94 = local_64;
      if (local_88 == local_58) goto LAB_00107dc0;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_88 = local_58;
      local_80 = local_50;
      uStack_78 = uStack_48;
      uVar11 = uStack0000000000000030;
    }
    else {
      uVar3 = uStack0000000000000030;
      if (4 < uStack0000000000000030) {
        uVar3 = uStack0000000000000030 - 5;
      }
      if (uVar3 < 2) {
        local_98[0] = local_188;
        local_94 = local_184;
        if (local_178 != 0) {
          CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_ref
                    ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                     &local_88,(CowData *)&local_178);
        }
        local_80 = local_170;
        uStack_78 = uStack_168;
        if ((*(int *)(param_1 + 0x210) == 1) && (param_1[0x22b] == (ShaderData)0x0)) {
          bStack_1f7 = false;
        }
      }
    }
  }
  uStack_270 = 0;
  uStack_26c = 0;
  uVar5 = 1;
  Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
            (&local_278,1,uStack0000000000000020);
  uVar13 = CONCAT44(1,uVar5);
  Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
            (&local_278,uVar13,uStack0000000000000024);
  Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
            (&local_278,CONCAT44(2,(int)uVar13),uStack0000000000000028);
  uVar13 = _LC342;
  Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
            (&local_278,0x300000002,uStack000000000000002c);
  if ((*(long *)(param_1 + 0x158) == 0) ||
     (lVar6 = get_shader_variant(param_1,uVar11,iStack000000000000003c != 0), lVar6 == 0)) {
    _err_print_error("_create_pipeline",
                     "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp",
                     0x15d,"Condition \"shader_rid.is_null()\" is true.",0,0);
  }
  else {
    uVar7 = RenderingDevice::get_singleton();
    lVar6 = RenderingDevice::render_pipeline_create
                      (uVar7,lVar6,uVar4,in_stack_00000008,uVar12,&local_258,&local_228,&local_1f8,
                       local_98,0,uStack0000000000000034,&local_278,uVar13);
    if (lVar6 != 0) {
      uVar5 = PipelineKey::hash((PipelineKey *)&stack0x00000008);
      iVar10 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc0));
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar10);
      }
      uVar11 = *(uint *)(param_1 + 0xb0);
      pvVar8 = *(void **)(param_1 + 0xb8);
      if (uVar11 == *(uint *)(param_1 + 0xb4)) {
        uVar11 = uVar11 * 2;
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        *(uint *)(param_1 + 0xb4) = uVar11;
        pvVar8 = (void *)Memory::realloc_static(pvVar8,(ulong)uVar11 << 4,false);
        *(void **)(param_1 + 0xb8) = pvVar8;
        if (pvVar8 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar11 = *(uint *)(param_1 + 0xb0);
      }
      puVar9 = (undefined4 *)((long)pvVar8 + (ulong)uVar11 * 0x10);
      *(uint *)(param_1 + 0xb0) = uVar11 + 1;
      *puVar9 = uVar5;
      *(long *)(puVar9 + 2) = lVar6;
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc0));
      lVar6 = CONCAT44(uStack_26c,uStack_270);
      goto joined_r0x00107922;
    }
    _err_print_error("_create_pipeline",
                     "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp",
                     0x160,"Condition \"pipeline.is_null()\" is true.",0,0);
  }
  lVar6 = CONCAT44(uStack_26c,uStack_270);
joined_r0x00107922:
  if (lVar6 != 0) {
    LOCK();
    plVar1 = (long *)(lVar6 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = CONCAT44(uStack_26c,uStack_270);
      uStack_270 = 0;
      uStack_26c = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_210;
  if (local_210 != 0) {
    LOCK();
    plVar1 = (long *)(local_210 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_210 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_b8 + -0x10),false);
    }
  }
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_e8 + -0x10),false);
    }
  }
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_118 + -0x10),false);
    }
  }
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_148 + -0x10),false);
    }
  }
  if (local_178 != 0) {
    LOCK();
    plVar1 = (long *)(local_178 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_178 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::_add_new_pipelines_to_map()
   [clone .isra.0] */

void __thiscall
PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
::_add_new_pipelines_to_map
          (PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
           *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  CowData<unsigned_int> *pCVar5;
  ulong uVar6;
  undefined8 uVar7;
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
  Element *pEVar34;
  int iVar35;
  uint uVar36;
  Element *pEVar37;
  Element *pEVar38;
  Element *pEVar39;
  Element *pEVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  Element *pEVar46;
  Element *pEVar47;
  long *plVar48;
  Element *pEVar49;
  Element *pEVar50;
  ulong uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint *puVar56;
  long lVar57;
  uint *puVar58;
  long *in_FS_OFFSET;
  bool bVar59;
  uint *local_58;
  uint *local_50;
  
  if ((char)*in_FS_OFFSET == '\0') {
    lVar44 = *in_FS_OFFSET;
    *in_FS_OFFSET = 0;
    *(char *)in_FS_OFFSET = '\x01';
    __cxa_thread_atexit(Vector<unsigned_int>::~Vector,lVar44,&__dso_handle);
  }
  lVar44 = *in_FS_OFFSET;
  if ((lVar44 != 0) && (*(long *)(lVar44 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar44 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar44 = *in_FS_OFFSET;
      *in_FS_OFFSET = 0;
      Memory::free_static((void *)(lVar44 + -0x10),false);
    }
    else {
      *in_FS_OFFSET = 0;
    }
  }
  iVar35 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if (iVar35 == 0) {
    uVar54 = *(uint *)(this + 0x40);
    puVar56 = *(uint **)(this + 0x48);
    puVar58 = puVar56 + (ulong)uVar54 * 4;
    if (puVar56 != puVar58) {
      pCVar5 = (CowData<unsigned_int> *)*in_FS_OFFSET;
      do {
        pEVar40 = *(Element **)(this + 0x28);
        if (pEVar40 == (Element *)0x0) {
          pEVar40 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(pEVar40 + 0x20) = (undefined1  [16])0x0;
          pEVar37 = *(Element **)(this + 0x30);
          *(undefined4 *)(pEVar40 + 0x30) = 0;
          *(undefined8 *)(pEVar40 + 0x38) = 0;
          *(Element **)(this + 0x28) = pEVar40;
          *(Element **)(pEVar40 + 0x18) = pEVar37;
          *(Element **)(pEVar40 + 8) = pEVar37;
          *(Element **)(pEVar40 + 0x10) = pEVar37;
          pEVar46 = *(Element **)(this + 0x30);
          *(undefined4 *)pEVar40 = 1;
          uVar54 = *puVar56;
          pEVar49 = pEVar37;
          if (pEVar37 != pEVar46) goto LAB_00107fd9;
        }
        else {
          pEVar37 = *(Element **)(pEVar40 + 0x10);
          pEVar46 = *(Element **)(this + 0x30);
          uVar54 = *puVar56;
          pEVar49 = pEVar37;
          if (pEVar37 != pEVar46) {
LAB_00107fd9:
            do {
              if (uVar54 < *(uint *)(pEVar37 + 0x30)) {
                pEVar37 = *(Element **)(pEVar37 + 0x10);
              }
              else {
                if (uVar54 <= *(uint *)(pEVar37 + 0x30)) goto LAB_00108126;
                pEVar37 = *(Element **)(pEVar37 + 8);
              }
            } while (pEVar46 != pEVar37);
            do {
              pEVar37 = pEVar49;
              if (uVar54 < *(uint *)(pEVar37 + 0x30)) {
                pEVar49 = *(Element **)(pEVar37 + 0x10);
              }
              else {
                if (uVar54 <= *(uint *)(pEVar37 + 0x30)) {
                  *(undefined8 *)(pEVar37 + 0x38) = 0;
                  goto LAB_00108126;
                }
                pEVar49 = *(Element **)(pEVar37 + 8);
              }
              pEVar40 = pEVar37;
            } while (pEVar46 != pEVar49);
          }
        }
        pEVar37 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
        uVar54 = *puVar56;
        *(Element **)(pEVar37 + 0x18) = pEVar40;
        *(undefined1 (*) [16])(pEVar37 + 0x20) = (undefined1  [16])0x0;
        pEVar46 = *(Element **)(this + 0x30);
        *(undefined4 *)pEVar37 = 0;
        *(uint *)(pEVar37 + 0x30) = uVar54;
        *(undefined8 *)(pEVar37 + 0x38) = 0;
        *(Element **)(pEVar37 + 8) = pEVar46;
        *(Element **)(pEVar37 + 0x10) = pEVar46;
        if ((*(Element **)(this + 0x28) == pEVar40) || (*puVar56 < *(uint *)(pEVar40 + 0x30))) {
          *(Element **)(pEVar40 + 0x10) = pEVar37;
          pEVar49 = *(Element **)(this + 0x30);
          pEVar47 = *(Element **)(pEVar37 + 0x10);
          pEVar50 = *(Element **)(this + 0x28);
          bVar59 = pEVar49 == pEVar46;
          pEVar34 = pEVar46;
          pEVar46 = pEVar47;
          if (bVar59) {
            pEVar39 = pEVar40;
            pEVar38 = pEVar40;
            if (pEVar37 == *(Element **)(pEVar40 + 8)) goto LAB_001080b0;
            goto LAB_001080bd;
          }
LAB_001085f8:
          do {
            pEVar39 = pEVar34;
            pEVar34 = *(Element **)(pEVar39 + 0x10);
          } while (*(Element **)(pEVar39 + 0x10) != pEVar49);
        }
        else {
          *(Element **)(pEVar40 + 8) = pEVar37;
          pEVar49 = *(Element **)(this + 0x30);
          pEVar50 = *(Element **)(this + 0x28);
          pEVar38 = pEVar40;
          pEVar34 = *(Element **)(pEVar37 + 8);
          pEVar47 = pEVar46;
          if (*(Element **)(pEVar37 + 8) != pEVar49) goto LAB_001085f8;
LAB_001080b0:
          do {
            pEVar39 = *(Element **)(pEVar38 + 0x18);
            bVar59 = *(Element **)(pEVar39 + 8) == pEVar38;
            pEVar38 = pEVar39;
            pEVar46 = pEVar47;
          } while (bVar59);
LAB_001080bd:
          if (pEVar50 == pEVar39) {
            pEVar39 = (Element *)0x0;
          }
        }
        *(Element **)(pEVar37 + 0x20) = pEVar39;
        if (pEVar46 == *(Element **)(this + 0x30)) {
          pEVar46 = pEVar37;
          pEVar49 = pEVar40;
          if (pEVar37 == *(Element **)(pEVar40 + 0x10)) {
            do {
              pEVar40 = *(Element **)(pEVar49 + 0x18);
              bVar59 = *(Element **)(pEVar40 + 0x10) == pEVar49;
              pEVar46 = pEVar49;
              pEVar49 = pEVar40;
            } while (bVar59);
          }
          if (*(Element **)(this + 0x28) != pEVar46) goto LAB_001080ec;
          *(undefined8 *)(pEVar37 + 0x28) = 0;
          if (pEVar39 != (Element *)0x0) goto LAB_001080f5;
        }
        else {
          do {
            pEVar40 = pEVar46;
            pEVar46 = *(Element **)(pEVar40 + 8);
          } while (*(Element **)(this + 0x30) != *(Element **)(pEVar40 + 8));
LAB_001080ec:
          *(Element **)(pEVar37 + 0x28) = pEVar40;
          if (pEVar39 != (Element *)0x0) {
LAB_001080f5:
            *(Element **)(pEVar39 + 0x28) = pEVar37;
            pEVar40 = *(Element **)(pEVar37 + 0x28);
            if (pEVar40 == (Element *)0x0) goto LAB_00108106;
          }
          *(Element **)(pEVar40 + 0x20) = pEVar37;
        }
LAB_00108106:
        *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
        RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix
                  ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)
                   (this + 0x28),pEVar37);
        uVar54 = *puVar56;
LAB_00108126:
        *(undefined8 *)(pEVar37 + 0x38) = *(undefined8 *)(puVar56 + 2);
        if (in_FS_OFFSET[1] == 0) {
          lVar44 = 1;
        }
        else {
          lVar44 = *(long *)(in_FS_OFFSET[1] + -8) + 1;
        }
        iVar35 = CowData<unsigned_int>::resize<false>(pCVar5,lVar44);
        if (iVar35 == 0) {
          if (in_FS_OFFSET[1] == 0) {
            lVar57 = -1;
            lVar44 = 0;
          }
          else {
            lVar44 = *(long *)(in_FS_OFFSET[1] + -8);
            lVar57 = lVar44 + -1;
            if (-1 < lVar57) {
              CowData<unsigned_int>::_copy_on_write(pCVar5);
              *(uint *)(in_FS_OFFSET[1] + lVar57 * 4) = uVar54;
              goto LAB_00108184;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar57,lVar44,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00108184:
        puVar56 = puVar56 + 4;
      } while (puVar58 != puVar56);
      uVar54 = *(uint *)(this + 0x40);
    }
    if (uVar54 != 0) {
      *(undefined4 *)(this + 0x40) = 0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
    iVar35 = pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
    if (iVar35 == 0) {
      pCVar5 = (CowData<unsigned_int> *)*in_FS_OFFSET;
      CowData<unsigned_int>::_copy_on_write(pCVar5);
      local_58 = (uint *)*in_FS_OFFSET;
      CowData<unsigned_int>::_copy_on_write(pCVar5);
      local_50 = (uint *)*in_FS_OFFSET;
      if (local_50 != (uint *)0x0) {
        local_50 = local_50 + *(long *)(local_50 + -2);
      }
      if (local_58 != local_50) {
        lVar44 = *(long *)(this + 0x98);
        do {
          if ((lVar44 != 0) && (*(int *)(this + 0xbc) != 0)) {
            uVar54 = *local_58;
            uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
            uVar6 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
            uVar36 = (uVar54 >> 0x10 ^ uVar54) * -0x7a143595;
            uVar36 = (uVar36 ^ uVar36 >> 0xd) * -0x3d4d51cb;
            uVar55 = uVar36 ^ uVar36 >> 0x10;
            if (uVar36 == uVar36 >> 0x10) {
              uVar55 = 1;
              uVar42 = uVar6;
            }
            else {
              uVar42 = uVar55 * uVar6;
            }
            uVar45 = CONCAT44(0,uVar4);
            lVar57 = *(long *)(this + 0xa0);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar45;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar42;
            lVar41 = SUB168(auVar8 * auVar21,8);
            uVar36 = *(uint *)(lVar57 + lVar41 * 4);
            uVar53 = SUB164(auVar8 * auVar21,8);
            if (uVar36 != 0) {
              uVar52 = 0;
              while ((uVar55 != uVar36 ||
                     (uVar54 != *(uint *)(*(long *)(lVar44 + lVar41 * 8) + 0x10)))) {
                uVar52 = uVar52 + 1;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (uVar53 + 1) * uVar6;
                auVar22._8_8_ = 0;
                auVar22._0_8_ = uVar45;
                lVar41 = SUB168(auVar9 * auVar22,8);
                uVar36 = *(uint *)(lVar57 + lVar41 * 4);
                uVar53 = SUB164(auVar9 * auVar22,8);
                if ((uVar36 == 0) ||
                   (auVar10._8_8_ = 0, auVar10._0_8_ = uVar36 * uVar6, auVar23._8_8_ = 0,
                   auVar23._0_8_ = uVar45, auVar11._8_8_ = 0,
                   auVar11._0_8_ = ((uVar4 + uVar53) - SUB164(auVar10 * auVar23,8)) * uVar6,
                   auVar24._8_8_ = 0, auVar24._0_8_ = uVar45, SUB164(auVar11 * auVar24,8) < uVar52))
                goto LAB_00108539;
              }
              lVar41 = *(long *)(lVar44 + (ulong)uVar53 * 8);
              if (lVar41 != 0) {
                uVar54 = *(uint *)(lVar41 + 0x10);
                uVar36 = (uVar54 >> 0x10 ^ uVar54) * -0x7a143595;
                uVar36 = (uVar36 ^ uVar36 >> 0xd) * -0x3d4d51cb;
                uVar55 = uVar36 ^ uVar36 >> 0x10;
                if (uVar36 == uVar36 >> 0x10) {
                  uVar55 = 1;
                  uVar42 = uVar6;
                }
                else {
                  uVar42 = uVar55 * uVar6;
                }
                auVar12._8_8_ = 0;
                auVar12._0_8_ = uVar45;
                auVar25._8_8_ = 0;
                auVar25._0_8_ = uVar42;
                uVar42 = SUB168(auVar12 * auVar25,8);
                uVar36 = *(uint *)(lVar57 + uVar42 * 4);
                uVar51 = (ulong)SUB164(auVar12 * auVar25,8);
                if (uVar36 != 0) {
                  uVar53 = 0;
                  goto LAB_001083e7;
                }
              }
            }
          }
LAB_00108539:
          local_58 = local_58 + 1;
        } while (local_50 != local_58);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar35);
LAB_001083e7:
  auVar15._8_8_ = 0;
  auVar15._0_8_ = ((int)uVar51 + 1) * uVar6;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar45;
  uVar43 = SUB168(auVar15 * auVar28,8);
  uVar52 = SUB164(auVar15 * auVar28,8);
  if ((uVar36 != uVar55) || (uVar54 != *(uint *)(*(long *)(lVar44 + uVar42 * 8) + 0x10)))
  goto LAB_001083a8;
  puVar58 = (uint *)(lVar57 + uVar43 * 4);
  uVar42 = (ulong)uVar52;
  uVar54 = *puVar58;
  if ((uVar54 != 0) &&
     (auVar16._8_8_ = 0, auVar16._0_8_ = uVar54 * uVar6, auVar29._8_8_ = 0, auVar29._0_8_ = uVar45,
     auVar17._8_8_ = 0, auVar17._0_8_ = ((uVar4 + uVar52) - SUB164(auVar16 * auVar29,8)) * uVar6,
     auVar30._8_8_ = 0, auVar30._0_8_ = uVar45, SUB164(auVar17 * auVar30,8) != 0)) {
    while( true ) {
      puVar56 = (uint *)(lVar57 + uVar51 * 4);
      *puVar58 = *puVar56;
      puVar2 = (undefined8 *)(lVar44 + uVar43 * 8);
      *puVar56 = uVar54;
      puVar3 = (undefined8 *)(lVar44 + uVar51 * 8);
      uVar7 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar7;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = ((int)uVar42 + 1) * uVar6;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar45;
      uVar43 = SUB168(auVar20 * auVar33,8);
      puVar58 = (uint *)(lVar57 + uVar43 * 4);
      uVar54 = *puVar58;
      uVar51 = uVar42;
      if ((uVar54 == 0) ||
         (auVar18._8_8_ = 0, auVar18._0_8_ = uVar54 * uVar6, auVar31._8_8_ = 0,
         auVar31._0_8_ = uVar45, auVar19._8_8_ = 0,
         auVar19._0_8_ =
              ((SUB164(auVar20 * auVar33,8) + uVar4) - SUB164(auVar18 * auVar31,8)) * uVar6,
         auVar32._8_8_ = 0, auVar32._0_8_ = uVar45, SUB164(auVar19 * auVar32,8) == 0)) break;
      uVar42 = uVar43 & 0xffffffff;
    }
  }
  plVar1 = (long *)(lVar44 + uVar51 * 8);
  *(undefined4 *)(lVar57 + uVar51 * 4) = 0;
  plVar48 = (long *)*plVar1;
  if (*(long **)(this + 0xa8) == plVar48) {
    *(long *)(this + 0xa8) = *plVar48;
    plVar48 = (long *)*plVar1;
  }
  if (*(long **)(this + 0xb0) == plVar48) {
    *(long *)(this + 0xb0) = plVar48[1];
    plVar48 = (long *)*plVar1;
  }
  if ((long *)plVar48[1] != (long *)0x0) {
    *(long *)plVar48[1] = *plVar48;
    plVar48 = (long *)*plVar1;
  }
  if (*plVar48 != 0) {
    *(long *)(*plVar48 + 8) = plVar48[1];
    plVar48 = (long *)*plVar1;
  }
  Memory::free_static(plVar48,false);
  lVar44 = *(long *)(this + 0x98);
  *(undefined8 *)(lVar44 + uVar51 * 8) = 0;
  *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + -1;
  goto LAB_00108539;
LAB_001083a8:
  uVar36 = *(uint *)(lVar57 + uVar43 * 4);
  uVar51 = uVar43 & 0xffffffff;
  uVar53 = uVar53 + 1;
  if ((uVar36 == 0) ||
     (auVar13._8_8_ = 0, auVar13._0_8_ = uVar36 * uVar6, auVar26._8_8_ = 0, auVar26._0_8_ = uVar45,
     auVar14._8_8_ = 0, auVar14._0_8_ = ((uVar4 + uVar52) - SUB164(auVar13 * auVar26,8)) * uVar6,
     auVar27._8_8_ = 0, auVar27._0_8_ = uVar45, uVar42 = uVar43,
     SUB164(auVar14 * auVar27,8) < uVar53)) goto LAB_00108539;
  goto LAB_001083e7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::set_code(String const&)
    */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::set_code
          (ShaderData *this,String *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ShaderData SVar6;
  int iVar7;
  ShaderData *pSVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  CowData<char32_t> *this_00;
  long lVar13;
  undefined4 uVar14;
  void *pvVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined4 local_1ec;
  long local_1e8;
  undefined8 local_1e0;
  HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
  local_1d8 [8];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  ulong local_1b0;
  HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
  local_1a8 [8];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  ulong local_180;
  HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
  local_178 [8];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  ulong local_150;
  HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
  local_148 [8];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  ulong local_120;
  HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
  local_118 [8];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  ulong local_f0;
  ShaderData *local_e8;
  undefined1 local_d8 [8];
  undefined8 local_d0 [2];
  long local_c0 [2];
  long local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x208) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x208),(CowData *)param_1);
  }
  *(undefined4 *)(this + 0x200) = 0;
  if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
    lVar13 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x20) + lVar13) != 0) {
          *(int *)(*(long *)(this + 0x20) + lVar13) = 0;
          pvVar15 = *(void **)(*(long *)(this + 0x18) + lVar13 * 2);
          if (*(long *)((long)pvVar15 + 0x88) != 0) {
            LOCK();
            plVar10 = (long *)(*(long *)((long)pvVar15 + 0x88) + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              lVar11 = *(long *)((long)pvVar15 + 0x88);
              *(undefined8 *)((long)pvVar15 + 0x88) = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar15 + 0x80) != 0) {
            LOCK();
            plVar10 = (long *)(*(long *)((long)pvVar15 + 0x80) + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              lVar11 = *(long *)((long)pvVar15 + 0x80);
              *(undefined8 *)((long)pvVar15 + 0x80) = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)((long)pvVar15 + 0x70));
          if (*(long *)((long)pvVar15 + 0x40) != 0) {
            LOCK();
            plVar10 = (long *)(*(long *)((long)pvVar15 + 0x40) + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              lVar11 = *(long *)((long)pvVar15 + 0x40);
              *(undefined8 *)((long)pvVar15 + 0x40) = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar15 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar15,false);
          *(undefined8 *)(*(long *)(this + 0x18) + lVar13 * 2) = 0;
        }
        lVar13 = lVar13 + 4;
      } while ((ulong)uVar2 << 2 != lVar13);
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  }
  pSVar8 = this + 0x160;
  do {
    LOCK();
    *(undefined8 *)pSVar8 = 0;
    uVar12 = _LC66;
    uVar5 = _LC29;
    UNLOCK();
    pSVar8 = pSVar8 + 8;
  } while (this + 0x1e0 != pSVar8);
  if ((*(long *)(this + 0x208) == 0) || (*(uint *)(*(long *)(this + 0x208) + -8) < 2))
  goto LAB_00108961;
  local_1d0 = (undefined1  [16])0x0;
  local_4c = 0;
  *(undefined8 *)(this + 0x218) = __LC30;
  *(undefined8 *)(this + 0x220) = uVar12;
  pSVar8 = this + 0x218;
  local_58 = uVar5;
  local_1b0 = uVar5;
  local_180 = uVar5;
  local_150 = uVar5;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  local_1c0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  local_170 = (undefined1  [16])0x0;
  local_160 = (undefined1  [16])0x0;
  local_140 = (undefined1  [16])0x0;
  local_d0[0] = 0;
  local_c0[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_4a = 0;
  this[0x238] = (ShaderData)0x0;
  this[0x23d] = (ShaderData)0x0;
  *(undefined2 *)(this + 0x240) = 0;
  local_1ec = 1;
  local_130 = (undefined1  [16])0x0;
  local_120 = uVar5;
  local_f0 = uVar5;
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  local_e8 = (ShaderData *)0x0;
  StringName::StringName((StringName *)&local_1e8,"vertex",false);
  puVar9 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *puVar9 = 0;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"fragment",false);
  puVar9 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *puVar9 = 1;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"light",false);
  puVar9 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *puVar9 = 1;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_add",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 1;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_mix",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 0;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_sub",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 2;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_mul",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 3;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_premul_alpha",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 5;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"alpha_to_coverage",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x220);
  *(undefined4 *)(plVar10 + 1) = 1;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"alpha_to_coverage_and_one",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x220);
  *(undefined4 *)(plVar10 + 1) = 2;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"depth_draw_never",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)&local_1ec;
  *(undefined4 *)(plVar10 + 1) = 0;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"depth_draw_opaque",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)&local_1ec;
  *(undefined4 *)(plVar10 + 1) = 1;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"depth_draw_always",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)&local_1ec;
  *(undefined4 *)(plVar10 + 1) = 2;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"depth_test_disabled",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x21c);
  *(undefined4 *)(plVar10 + 1) = 0;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"cull_disabled",false);
  pSVar8 = this + 0x224;
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 0;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"cull_front",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 1;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"cull_back",false);
  plVar10 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                    ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  *(undefined4 *)(plVar10 + 1) = 2;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"unshaded",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_178,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x235);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"wireframe",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_178,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x234);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"particle_trails",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_178,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x232);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"world_vertex_coords",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_178,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x241);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ALPHA",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x229);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ALPHA_SCISSOR_THRESHOLD",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x22b);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ALPHA_HASH_SCALE",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x22b);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ALPHA_ANTIALIASING_EDGE",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x22c);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ALPHA_TEXTURE_COORDINATE",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x22c);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"depth_prepass_alpha",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_178,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x22d);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"SSS_STRENGTH",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x237);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"SSS_TRANSMITTANCE_DEPTH",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x238);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"DISCARD",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x22e);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"TIME",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x23d);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ROUGHNESS",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x22f);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"NORMAL",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x230);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"NORMAL_MAP",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x233);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"TANGENT",false);
  pSVar8 = this + 0x231;
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"BINORMAL",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ANISOTROPY",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"ANISOTROPY_FLOW",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)pSVar8;
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"POINT_SIZE",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x228);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"POINT_COORD",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x228);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"MODELVIEW_MATRIX",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_118,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x240);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"PROJECTION_MATRIX",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_118,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x240);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"VERTEX",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_118,(StringName *)&local_1e8);
  bVar16 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x236);
  if ((bVar16) && (local_1e8 != 0)) {
    StringName::unref();
  }
  local_e8 = this + 0x10;
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
  if (iVar7 != 0) {
LAB_00109d57:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  iVar7 = ShaderCompiler::compile
                    (singleton + 0x188,0,(CowData<char32_t> *)(this + 0x208),local_1d8,this + 8,
                     local_d8);
  if (iVar7 == 0) {
    if (*(long *)(this + 0x158) == 0) {
      uVar12 = ShaderRD::version_create();
      *(undefined8 *)(this + 0x158) = uVar12;
    }
    *(ushort *)(this + 0x23e) = CONCAT11(local_50._1_1_,local_50._2_1_);
    *(ulong *)(this + 0x210) = CONCAT44(*(undefined4 *)(this + 0x21c),local_1ec);
    *(uint *)(this + 0x239) =
         CONCAT31(CONCAT21(CONCAT11(local_50._3_1_,local_4a),local_4c._1_1_),(undefined1)local_4c);
    *(ushort *)(this + 0x230) =
         CONCAT11(this[0x231],this[0x233]) | CONCAT11(this[0x233],this[0x230]);
    if ((this[0x237] != (ShaderData)0x0) && (set_code(String_const&)::first_print != '\0')) {
      _err_print_error("set_code",
                       "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp"
                       ,0xac,
                       "Subsurface scattering is only available when using the Forward+ renderer.",1
                       ,1);
      set_code(String_const&)::first_print = '\0';
    }
    if ((this[0x238] != (ShaderData)0x0) && (set_code(String_const&)::first_print != '\0')) {
      _err_print_error("set_code",
                       "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp"
                       ,0xb0,"Transmittance is only available when using the Forward+ renderer.",1,1
                      );
      set_code(String_const&)::first_print = '\0';
    }
    ShaderRD::version_set_code
              (singleton + 0x10,*(undefined8 *)(this + 0x158),local_80,local_a0,local_a0 + 8,
               local_90,local_d8);
    *(undefined4 *)(this + 0x200) = local_a8;
    lVar13 = *(long *)(this + 0x1f8);
    if (lVar13 != local_b0) {
      if (lVar13 != 0) {
        LOCK();
        plVar10 = (long *)(lVar13 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          lVar13 = *(long *)(this + 0x1f8);
          *(undefined8 *)(this + 0x1f8) = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
        else {
          *(undefined8 *)(this + 0x1f8) = 0;
        }
      }
      if (local_b0 != 0) {
        plVar10 = (long *)(local_b0 + -0x10);
        do {
          lVar13 = *plVar10;
          if (lVar13 == 0) goto LAB_00109770;
          LOCK();
          lVar11 = *plVar10;
          bVar16 = lVar13 == lVar11;
          if (bVar16) {
            *plVar10 = lVar13 + 1;
            lVar11 = lVar13;
          }
          UNLOCK();
        } while (!bVar16);
        if (lVar11 != -1) {
          *(long *)(this + 0x1f8) = local_b0;
        }
      }
    }
LAB_00109770:
    if ((*(long *)(this + 0x1e8) != local_c0[0]) &&
       (CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
                  ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0x1e8)),
       local_c0[0] != 0)) {
      plVar10 = (long *)(local_c0[0] + -0x10);
      do {
        lVar13 = *plVar10;
        if (lVar13 == 0) goto LAB_001097c6;
        LOCK();
        lVar11 = *plVar10;
        bVar16 = lVar13 == lVar11;
        if (bVar16) {
          *plVar10 = lVar13 + 1;
          lVar11 = lVar13;
        }
        UNLOCK();
      } while (!bVar16);
      if (lVar11 != -1) {
        *(long *)(this + 0x1e8) = local_c0[0];
      }
    }
LAB_001097c6:
    iVar7 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x130));
    if (iVar7 != 0) goto LAB_00109d57;
    for (puVar3 = *(undefined8 **)(this + 0x118); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x130));
    PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
    ::_add_new_pipelines_to_map
              ((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                *)(this + 0x70));
    if (*(long *)(this + 0x98) != 0) {
      lVar13 = *(long *)(*(long *)(this + 0x98) + 0x10);
      if (lVar13 != *(long *)(this + 0xa0)) {
        do {
          lVar11 = lVar13;
          lVar13 = *(long *)(lVar11 + 0x10);
        } while (*(long *)(this + 0xa0) != *(long *)(lVar11 + 0x10));
        do {
          local_1e0 = *(undefined8 *)(lVar11 + 0x38);
          uVar12 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar12,local_1e0);
          lVar11 = *(long *)(lVar11 + 0x20);
        } while (lVar11 != 0);
      }
    }
    RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear
              ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x98));
    RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear
              ((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0xe8));
    if (*(int *)(this + 0x220) == 0) {
      uVar14 = *(undefined4 *)(this + 0x218);
    }
    else {
      *(undefined4 *)(this + 0x218) = 4;
      uVar14 = 4;
    }
    SVar6 = (ShaderData)RendererRD::MaterialStorage::ShaderData::blend_mode_uses_blend_alpha(uVar14)
    ;
    this[0x22a] = SVar6;
    pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_1d8);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar15 = (void *)local_78._0_8_;
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
              pvVar15 = *(void **)((long)pvVar15 + lVar13 * 2);
              *(int *)(local_78._8_8_ + lVar13) = 0;
              if (*(long *)((long)pvVar15 + 0x18) != 0) {
                LOCK();
                plVar10 = (long *)(*(long *)((long)pvVar15 + 0x18) + -0x10);
                *plVar10 = *plVar10 + -1;
                UNLOCK();
                if (*plVar10 == 0) {
                  lVar11 = *(long *)((long)pvVar15 + 0x18);
                  *(undefined8 *)((long)pvVar15 + 0x18) = 0;
                  Memory::free_static((void *)(lVar11 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar15 + 0x10) != 0) {
                LOCK();
                plVar10 = (long *)(*(long *)((long)pvVar15 + 0x10) + -0x10);
                *plVar10 = *plVar10 + -1;
                UNLOCK();
                if (*plVar10 == 0) {
                  lVar11 = *(long *)((long)pvVar15 + 0x10);
                  *(undefined8 *)((long)pvVar15 + 0x10) = 0;
                  Memory::free_static((void *)(lVar11 + -0x10),false);
                }
              }
              Memory::free_static(pvVar15,false);
              *(undefined8 *)(local_78._0_8_ + lVar13 * 2) = 0;
              pvVar15 = (void *)local_78._0_8_;
            }
            lVar13 = lVar13 + 4;
          } while ((ulong)uVar2 * 4 - lVar13 != 0);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar15 == (void *)0x0) goto LAB_001099c6;
        }
      }
      Memory::free_static(pvVar15,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_001099c6:
    plVar10 = (long *)(local_90 + 8);
    do {
      if (*plVar10 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar10 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar13 = *plVar10;
          *plVar10 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      plVar10 = plVar10 + -1;
    } while ((long *)local_a0 != plVar10);
    uVar12 = local_a0._0_8_;
    lVar13 = local_b0;
    if (local_a0._0_8_ != 0) {
      LOCK();
      plVar10 = (long *)(local_a0._0_8_ + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_a0._8_8_;
        local_a0 = auVar4 << 0x40;
        Memory::free_static((void *)(uVar12 + -0x10),false);
        lVar13 = local_b0;
      }
    }
  }
  else {
    if (*(long *)(this + 0x158) != 0) {
      ShaderRD::version_free(singleton + 0x10,*(undefined8 *)(this + 0x158));
      *(undefined8 *)(this + 0x158) = 0;
    }
    _err_print_error("set_code",
                     "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp",
                     0x98,"Method/function failed.","Shader compilation failed.",0,0);
    pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_1d8);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar15 = (void *)local_78._0_8_;
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
              pvVar15 = *(void **)((long)pvVar15 + lVar13 * 2);
              *(int *)(local_78._8_8_ + lVar13) = 0;
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar15 + 0x18));
              if (*(long *)((long)pvVar15 + 0x10) != 0) {
                LOCK();
                plVar10 = (long *)(*(long *)((long)pvVar15 + 0x10) + -0x10);
                *plVar10 = *plVar10 + -1;
                UNLOCK();
                if (*plVar10 == 0) {
                  lVar11 = *(long *)((long)pvVar15 + 0x10);
                  *(undefined8 *)((long)pvVar15 + 0x10) = 0;
                  Memory::free_static((void *)(lVar11 + -0x10),false);
                }
              }
              Memory::free_static(pvVar15,false);
              *(undefined8 *)(local_78._0_8_ + lVar13 * 2) = 0;
              pvVar15 = (void *)local_78._0_8_;
            }
            lVar13 = lVar13 + 4;
          } while (lVar13 != (ulong)uVar2 * 4);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar15 == (void *)0x0) goto LAB_00109bc7;
        }
      }
      Memory::free_static(pvVar15,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00109bc7:
    this_00 = (CowData<char32_t> *)(local_90 + 8);
    do {
      if (*(long *)this_00 != 0) {
        LOCK();
        plVar10 = (long *)(*(long *)this_00 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          lVar13 = *(long *)this_00;
          *(long *)this_00 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      this_00 = this_00 + -8;
    } while (this_00 != (CowData<char32_t> *)local_a0);
    CowData<char32_t>::_unref(this_00);
    lVar13 = local_b0;
  }
  local_b0 = lVar13;
  if (lVar13 != 0) {
    LOCK();
    plVar10 = (long *)(lVar13 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
            ((CowData<ShaderCompiler::GeneratedCode::Texture> *)local_c0);
  CowData<String>::_unref((CowData<String> *)local_d0);
LAB_00108961:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::set_default_specialization(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderSpecialization
   const&) */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::set_default_specialization
          (SceneShaderForwardMobile *this,ShaderSpecialization *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)this;
  *(undefined8 *)(this + 0x710) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x718) = uVar5;
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    lVar2 = *(long *)(lVar1 + 8);
    iVar6 = pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x130));
    if (iVar6 != 0) break;
    for (puVar3 = *(undefined8 **)(lVar2 + 0x118); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x130));
    PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
    ::_add_new_pipelines_to_map
              ((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                *)(lVar2 + 0x70));
    if (*(long *)(lVar2 + 0x98) != 0) {
      lVar4 = *(long *)(*(long *)(lVar2 + 0x98) + 0x10);
      if (lVar4 != *(long *)(lVar2 + 0xa0)) {
        do {
          lVar8 = lVar4;
          lVar4 = *(long *)(lVar8 + 0x10);
        } while (*(long *)(lVar2 + 0xa0) != *(long *)(lVar8 + 0x10));
        do {
          uVar5 = *(undefined8 *)(lVar8 + 0x38);
          uVar7 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar7,uVar5);
          lVar8 = *(long *)(lVar8 + 0x20);
        } while (lVar8 != 0);
      }
    }
    RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear
              ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)(lVar2 + 0x98));
    RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear
              ((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(lVar2 + 0xe8));
    lVar1 = *(long *)(lVar1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar6);
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::~ShaderData() */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::~ShaderData
          (ShaderData *this)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(undefined ***)this = &PTR_set_path_hint_00111d38;
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x130));
  if (iVar4 != 0) {
LAB_0010a15e:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  for (puVar1 = *(undefined8 **)(this + 0x118); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x130));
  PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
  ::_add_new_pipelines_to_map
            ((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
              *)(this + 0x70));
  if (*(long *)(this + 0x98) != 0) {
    lVar2 = *(long *)(*(long *)(this + 0x98) + 0x10);
    if (lVar2 != *(long *)(this + 0xa0)) {
      do {
        lVar6 = lVar2;
        lVar2 = *(long *)(lVar6 + 0x10);
      } while (*(long *)(this + 0xa0) != *(long *)(lVar6 + 0x10));
      do {
        uVar5 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar5);
        lVar6 = *(long *)(lVar6 + 0x20);
      } while (lVar6 != 0);
    }
  }
  RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear
            ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x98));
  RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear
            ((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0xe8));
  if (*(long *)(this + 0x158) != 0) {
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)singleton_mutex);
    if (iVar4 != 0) goto LAB_0010a15e;
    if (singleton == 0) {
      _err_print_error("~ShaderData",
                       "servers/rendering/renderer_rd/forward_mobile/scene_shader_forward_mobile.cpp"
                       ,0x1a3,"Parameter \"SceneShaderForwardMobile::singleton\" is null.",0,0);
      pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
      plVar3 = *(long **)(this + 600);
      if (plVar3 != (long *)0x0) {
        lVar2 = *(long *)(this + 0x268);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(this + 0x270);
        }
        lVar6 = *(long *)(this + 0x270);
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar2;
        }
        if (this + 600 == (ShaderData *)*plVar3) {
          *plVar3 = *(long *)(this + 0x268);
        }
        if (this + 600 == (ShaderData *)plVar3[1]) {
          plVar3[1] = lVar6;
        }
      }
      goto LAB_00109fc7;
    }
    ShaderRD::version_free(singleton + 0x10);
    pthread_mutex_unlock((pthread_mutex_t *)singleton_mutex);
  }
  plVar3 = *(long **)(this + 600);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)(this + 0x268);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(this + 0x270);
    }
    lVar6 = *(long *)(this + 0x270);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar2;
    }
    if (this + 600 == (ShaderData *)*plVar3) {
      *plVar3 = *(long *)(this + 0x268);
    }
    if (this + 600 == (ShaderData *)plVar3[1]) {
      plVar3[1] = lVar6;
    }
  }
LAB_00109fc7:
  if (*(long *)(this + 0x208) != 0) {
    LOCK();
    plVar3 = (long *)(*(long *)(this + 0x208) + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar2 = *(long *)(this + 0x208);
      *(undefined8 *)(this + 0x208) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1f8) != 0) {
    LOCK();
    plVar3 = (long *)(*(long *)(this + 0x1f8) + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar2 = *(long *)(this + 0x1f8);
      *(undefined8 *)(this + 0x1f8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
            ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0x1e8));
  PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
  ::~PipelineHashMapRD
            ((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
              *)(this + 0x70));
  RendererRD::MaterialStorage::ShaderData::~ShaderData((ShaderData *)this);
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::~ShaderData() */

void __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::~ShaderData
          (ShaderData *this)

{
  ~ShaderData(this);
  operator_delete(this,0x278);
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* Vector<unsigned int>::~Vector() */

void __thiscall Vector<unsigned_int>::~Vector(Vector<unsigned_int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* SceneForwardMobileShaderRD::~SceneForwardMobileShaderRD() */

void __thiscall
SceneForwardMobileShaderRD::~SceneForwardMobileShaderRD(SceneForwardMobileShaderRD *this)

{
  *(undefined ***)this = &PTR__SceneForwardMobileShaderRD_00111d18;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SceneForwardMobileShaderRD::~SceneForwardMobileShaderRD() */

void __thiscall
SceneForwardMobileShaderRD::~SceneForwardMobileShaderRD(SceneForwardMobileShaderRD *this)

{
  *(undefined ***)this = &PTR__SceneForwardMobileShaderRD_00111d18;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::_cleanup_tree(RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::_cleanup_tree
          (RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBSet<unsigned int, Comparator<unsigned int>, DefaultAllocator>::_cleanup_tree(RBSet<unsigned
   int, Comparator<unsigned int>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::_cleanup_tree
          (RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
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



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_int>::_copy_on_write(void)

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



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::init(String) [clone .cold] */

void RendererSceneRenderImplementation::SceneShaderForwardMobile::init
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  if (param_3 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey::hash()
   const */

uint __thiscall
RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey::hash
          (PipelineKey *this)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = *(float *)(this + 0x24);
  uVar2 = (*(int *)this * 0x16a88000 | (uint)(*(int *)this * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar2 = (*(int *)(this + 8) * 0x16a88000 | (uint)(*(int *)(this + 8) * -0x3361d2af) >> 0x11) *
          0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x10) * 0x16a88000 | (uint)(*(int *)(this + 0x10) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x14) * 0x16a88000 | (uint)(*(int *)(this + 0x14) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x18) * 0x16a88000 | (uint)(*(int *)(this + 0x18) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x1c) * 0x16a88000 | (uint)(*(int *)(this + 0x1c) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x20) * 0x16a88000 | (uint)(*(int *)(this + 0x20) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  if (fVar1 != 0.0) {
    if (NAN(fVar1)) {
      uVar2 = uVar2 ^ 0x2db3efa0;
    }
    else {
      uVar2 = uVar2 ^ ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
  }
  uVar2 = (*(int *)(this + 0x28) * 0x16a88000 | (uint)(*(int *)(this + 0x28) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x2c) * 0x16a88000 | (uint)(*(int *)(this + 0x2c) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x30) * 0x16a88000 | (uint)(*(int *)(this + 0x30) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (*(int *)(this + 0x34) * 0x16a88000 | (uint)(*(int *)(this + 0x34) * -0x3361d2af) >> 0x11)
          * 0x1b873593 ^ (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  return uVar2 >> 0x10 ^ uVar2;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010ce0c;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xd0),false);
  }
LAB_0010ce0c:
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
        if (pvVar3 == (void *)0x0) goto LAB_0010cecc;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_0010cecc:
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
        if (pvVar3 == (void *)0x0) goto LAB_0010cf83;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_0010cf83:
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
        if (pvVar3 == (void *)0x0) goto LAB_0010d02e;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_0010d02e:
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



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_shader_funcs() */

void RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_shader_funcs(void)

{
  _create_shader_func();
  return;
}



/* RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_material_funcs(RendererRD::MaterialStorage::ShaderData*)
    */

void RendererSceneRenderImplementation::SceneShaderForwardMobile::_create_material_funcs
               (ShaderData *param_1)

{
  _create_material_func(singleton,(ShaderData *)param_1);
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
        if (pvVar5 == (void *)0x0) goto LAB_0010d363;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_0010d363:
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
        if (pvVar5 == (void *)0x0) goto LAB_0010d442;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_0010d442:
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
        if (pvVar5 == (void *)0x0) goto LAB_0010d51d;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_0010d51d:
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
LAB_0010de58:
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
        goto LAB_0010dd08;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010dd0c:
      if (iVar46 != 0) {
LAB_0010dd14:
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
              goto LAB_0010d90c;
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
      goto LAB_0010d943;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010d943;
    if (iVar46 != 0) goto LAB_0010dd14;
LAB_0010d969:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010d90c;
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
            goto LAB_0010d90c;
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
      if (lVar43 == 0) goto LAB_0010de58;
LAB_0010dd08:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010dd0c;
    }
LAB_0010d943:
    if ((float)uVar40 * __LC37 < (float)(iVar46 + 1)) goto LAB_0010d969;
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
    if (lVar43 == 0) goto LAB_0010de1d;
LAB_0010dbf4:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010dbf4;
LAB_0010de1d:
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
LAB_0010d90c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Pair<int*, int>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Pair<int*, int> > > >::operator[](StringName
   const&) */

undefined8 * __thiscall
HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
::operator[](HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
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
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_0010e5d8:
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
        goto LAB_0010e488;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010e48c:
      if (iVar46 != 0) {
LAB_0010e494:
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
              *(undefined4 *)(puVar42 + 4) = 0;
              goto LAB_0010e07c;
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
      goto LAB_0010e0b3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010e0b3;
    if (iVar46 != 0) goto LAB_0010e494;
LAB_0010e0d9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010e07c;
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
            goto LAB_0010e07c;
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
      if (lVar43 == 0) goto LAB_0010e5d8;
LAB_0010e488:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010e48c;
    }
LAB_0010e0b3:
    if ((float)uVar40 * __LC37 < (float)(iVar46 + 1)) goto LAB_0010e0d9;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  uStack_48 = 0;
  puVar42 = (undefined8 *)operator_new(0x28,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  puVar42[3] = local_50;
  puVar42[4] = CONCAT44(uStack_44,uStack_48);
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0010e59d;
LAB_0010e370:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010e370;
LAB_0010e59d:
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
LAB_0010e07c:
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
LAB_0010ed48:
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
        goto LAB_0010ebf8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010ebfc:
      if (iVar46 != 0) {
LAB_0010ec04:
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
              goto LAB_0010e7fc;
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
      goto LAB_0010e833;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010e833;
    if (iVar46 != 0) goto LAB_0010ec04;
LAB_0010e859:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010e7fc;
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
            goto LAB_0010e7fc;
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
      if (lVar43 == 0) goto LAB_0010ed48;
LAB_0010ebf8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010ebfc;
    }
LAB_0010e833:
    if ((float)uVar40 * __LC37 < (float)(iVar46 + 1)) goto LAB_0010e859;
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
    if (lVar43 == 0) goto LAB_0010ed0d;
LAB_0010eae7:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010eae7;
LAB_0010ed0d:
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
LAB_0010e7fc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
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



/* RBMap<unsigned int, RID, Comparator<unsigned int>, DefaultAllocator>::clear() */

void __thiscall
RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear
          (RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar4 != pEVar3) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBSet<unsigned int, Comparator<unsigned int>, DefaultAllocator>::clear() */

void __thiscall
RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear
          (RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          pEVar2 = *(Element **)(pEVar7 + 8);
          if (pEVar2 != pEVar4) {
            if (*(Element **)(pEVar2 + 0x10) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
              pEVar4 = *(Element **)(this + 8);
            }
            if (pEVar4 != *(Element **)(pEVar2 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 8));
            }
            Memory::free_static(pEVar2,false);
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
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
LAB_0010f6d0:
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
  if (lVar10 == 0) goto LAB_0010f6d0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010f5a9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010f5a9;
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
    goto LAB_0010f726;
  }
  if (lVar10 == lVar7) {
LAB_0010f64f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010f726:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010f63a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010f64f;
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
LAB_0010f63a:
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
LAB_00110008:
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
LAB_0010fc21:
      iVar35 = *(int *)(this + 0x2c);
      if (iVar35 != 0) {
LAB_0010fc2d:
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
              goto LAB_0010fbc8;
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
      goto LAB_0010fd2c;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010fd2c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010fc2d;
LAB_0010fd4e:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      lVar34 = 0;
LAB_0010fbc8:
      local_88 = (CowData<char32_t> *)(lVar34 + 0x18);
      goto LAB_0010fbd1;
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
            goto LAB_0010fbc8;
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
      if (lVar34 == 0) goto LAB_00110008;
      goto LAB_0010fc21;
    }
    local_70 = 0;
    iVar35 = 0;
LAB_0010fd2c:
    if ((float)uVar43 * __LC37 < (float)(iVar35 + 1)) goto LAB_0010fd4e;
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
    if (lVar34 == 0) goto LAB_0010ffd5;
LAB_0010fe42:
    uVar29 = *(uint *)(lVar34 + 0x20);
  }
  else {
    *puVar39 = puVar31;
    puVar31[1] = puVar39;
    lVar34 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar34 != 0) goto LAB_0010fe42;
LAB_0010ffd5:
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
LAB_0010fbd1:
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
      goto LAB_00110152;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00110269;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011015e;
LAB_0011028b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_0011045b;
    }
    _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00110152:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0011015e:
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
            goto LAB_0011045b;
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
LAB_00110269:
    if ((float)uVar23 * __LC37 < (float)(iVar28 + 1)) goto LAB_0011028b;
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
LAB_0011037c:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_00110389;
LAB_001104b1:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar4 = local_80;
      local_80[1] = (long)puVar4;
      *(long **)(param_2 + 0x20) = local_80;
      goto LAB_0011037c;
    }
    lVar25 = *(long *)(param_2 + 0x18);
    *(long **)(lVar25 + 8) = local_80;
    *local_80 = lVar25;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x18) = local_80;
    if (lVar25 == 0) goto LAB_001104b1;
LAB_00110389:
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
LAB_0011045b:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_001108f0:
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
  if (lVar11 == 0) goto LAB_001108f0;
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
LAB_0011085c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_001107f3;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_0011085c;
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
LAB_001107f3:
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
        if (pvVar3 == (void *)0x0) goto LAB_001109e7;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_001109e7:
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
  
  *(code **)this = String::parse_latin1;
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
        if (pvVar5 == (void *)0x0) goto LAB_00110ad9;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x50),false);
  }
LAB_00110ad9:
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
        if (pvVar5 == (void *)0x0) goto LAB_00110c1f;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00110c1f:
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
LAB_00111010:
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
  if (lVar11 == 0) goto LAB_00111010;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00110ea1:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00110ea1;
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
    goto LAB_00111066;
  }
  if (lVar11 == lVar9) {
LAB_00110f83:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00111066:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00110f60;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00110f83;
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
  uVar4 = _LC54;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00110f60:
  puVar7[-1] = param_1;
  return 0;
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
LAB_00111340:
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
  if (lVar9 == 0) goto LAB_00111340;
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
LAB_001112ac:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_0011123b;
  }
  else {
    if (lVar11 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_001112ac;
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
  uVar7 = _LC334;
  puVar5 = (undefined8 *)((long)puVar8 + lVar3 * 0xc);
  do {
    *puVar5 = uVar7;
    puVar6 = (undefined8 *)((long)puVar5 + 0xc);
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined8 *)(lVar10 + (long)puVar8));
LAB_0011123b:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this,long param_1)

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
/* Error CowData<unsigned int>::resize<false>(long) */

undefined8 __thiscall CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00111630:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00111630;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00111541;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00111541:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::_insert_rb_fix(RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix
          (RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_0011178d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_001118b0;
LAB_00111736:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00111736;
LAB_001118b0:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00111773:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_001119a2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_001119a2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00111970;
LAB_00111800:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00111800;
LAB_00111970:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00111773;
    }
LAB_0011178d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::~PipelineHashMapRD()
    */

void __thiscall
PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
::~PipelineHashMapRD
          (PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
           *this)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
  _add_new_pipelines_to_map(this);
  if (*(long *)(this + 0x28) != 0) {
    lVar6 = *(long *)(*(long *)(this + 0x28) + 0x10);
    if (lVar6 != *(long *)(this + 0x30)) {
      do {
        lVar5 = lVar6;
        lVar6 = *(long *)(lVar5 + 0x10);
      } while (*(long *)(this + 0x30) != *(long *)(lVar5 + 0x10));
      do {
        uVar4 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar4);
        lVar5 = *(long *)(lVar5 + 0x20);
      } while (lVar5 != 0);
    }
  }
  RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear
            ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x28));
  RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear
            ((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x78));
  pvVar7 = *(void **)(this + 0x98);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xbc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa0) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0xa0) + lVar6) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar6 * 2),false);
            pvVar7 = *(void **)(this + 0x98);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00111b23;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_00111b23:
  RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear
            ((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x78));
  if (*(void **)(this + 0x78) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x78),false);
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    if (*(int *)(this + 0x40) != 0) {
      *(undefined4 *)(this + 0x40) = 0;
    }
    Memory::free_static(*(void **)(this + 0x48),false);
  }
  RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear
            ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x28));
  if (*(void **)(this + 0x28) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x28),false);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::~PipelineHashMapRD()
    */

void __thiscall
PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
::~PipelineHashMapRD
          (PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

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
/* SceneForwardMobileShaderRD::~SceneForwardMobileShaderRD() */

void __thiscall
SceneForwardMobileShaderRD::~SceneForwardMobileShaderRD(SceneForwardMobileShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Vector<unsigned int>::~Vector() */

void __thiscall Vector<unsigned_int>::~Vector(Vector<unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



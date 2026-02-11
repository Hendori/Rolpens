
/* RendererCanvasRenderRD::CanvasShaderData::casts_shadows() const */

undefined8 RendererCanvasRenderRD::CanvasShaderData::casts_shadows(void)

{
  return 0;
}



/* RendererCanvasRenderRD::update() */

void RendererCanvasRenderRD::update(void)

{
  return;
}



/* RendererCanvasRenderRD::set_debug_redraw(bool, double, Color const&) */

void __thiscall
RendererCanvasRenderRD::set_debug_redraw
          (RendererCanvasRenderRD *this,bool param_1,double param_2,Color *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 8);
  this[0x200bc0] = (RendererCanvasRenderRD)param_1;
  *(double *)(this + 0x200bd8) = param_2;
  *(undefined8 *)(this + 0x200bc4) = uVar1;
  *(undefined8 *)(this + 0x200bcc) = uVar2;
  return;
}



/* RendererCanvasRenderRD::light_set_use_shadow(RID, bool) */

void __thiscall
RendererCanvasRenderRD::light_set_use_shadow
          (RendererCanvasRenderRD *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x76c))) {
    lVar1 = *(long *)(*(long *)(this + 0x758) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38;
    iVar2 = *(int *)(lVar1 + 0x30);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar1 + 8) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_set_use_shadow",
                   "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x3b5,
                   "Parameter \"cl\" is null.",0,0);
  return;
}



/* RendererCanvasRenderRD::occluder_polygon_set_cull_mode(RID,
   RenderingServer::CanvasOccluderPolygonCullMode) */

void __thiscall
RendererCanvasRenderRD::occluder_polygon_set_cull_mode
          (RendererCanvasRenderRD *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c4))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x7c0)) * 0x60 +
             *(long *)(*(long *)(this + 0x7b0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x7c0)) * 8));
    iVar1 = puVar2[0x16];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *puVar2 = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("occluder_polygon_set_cull_mode",
                   "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x5bd,
                   "Parameter \"oc\" is null.",0,0);
  return;
}



/* RendererCanvasRenderRD::light_set_texture(RID, RID) */

void __thiscall
RendererCanvasRenderRD::light_set_texture(RendererCanvasRenderRD *this,ulong param_2,ulong param_3)

{
  pthread_mutex_t *__mutex;
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  plVar5 = (long *)RendererRD::TextureStorage::get_singleton();
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x76c))) {
    puVar1 = (ulong *)(*(long *)(*(long *)(this + 0x758) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8) +
                      ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38);
    if ((int)puVar1[6] == (int)(param_2 >> 0x20)) {
      uVar2 = *puVar1;
      if (param_3 == uVar2) {
        return;
      }
      if (param_3 == 0) {
        if (uVar2 != 0) {
          (**(code **)(*plVar5 + 0x1c0))(plVar5,uVar2,0);
        }
        *puVar1 = 0;
        return;
      }
      __mutex = (pthread_mutex_t *)(plVar5 + 0x27);
      iVar4 = pthread_mutex_lock(__mutex);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar4);
      }
      if ((((uint)param_3 < *(uint *)((long)plVar5 + 0x124)) && (param_3 >> 0x20 != 0x7fffffff)) &&
         ((*(uint *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar5 + 0x24)) * 0x118 +
                     *(long *)(plVar5[0x22] +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(plVar5 + 0x24)) * 8) +
                    0x110) & 0x7fffffff) == (uint)(param_3 >> 0x20))) {
        pthread_mutex_unlock(__mutex);
        if (*puVar1 != 0) {
          (**(code **)(*plVar5 + 0x1c0))(plVar5,*puVar1,0);
        }
        lVar3 = *plVar5;
        *puVar1 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00100368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x1b8))(plVar5,param_3,0);
        return;
      }
      pthread_mutex_unlock(__mutex);
      uVar7 = 0x3a7;
      pcVar6 = 
      "Condition \"p_texture.is_valid() && !texture_storage->owns_texture(p_texture)\" is true.";
      goto LAB_001002a2;
    }
    if ((int)puVar1[6] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar7 = 0x3a2;
  pcVar6 = "Parameter \"cl\" is null.";
LAB_001002a2:
  _err_print_error("light_set_texture","servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp"
                   ,uVar7,pcVar6,0,0);
  return;
}



/* RendererCanvasRenderRD::CanvasMaterialData::~CanvasMaterialData() */

void __thiscall
RendererCanvasRenderRD::CanvasMaterialData::~CanvasMaterialData(CanvasMaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_001242f8;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb8));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  return;
}



/* LocalVector<RendererCanvasRenderRD::Batch, unsigned int, false, false>::resize(unsigned int)
   [clone .part.0] */

void LocalVector<RendererCanvasRenderRD::Batch,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasRenderRD::CanvasMaterialData::~CanvasMaterialData() */

void __thiscall
RendererCanvasRenderRD::CanvasMaterialData::~CanvasMaterialData(CanvasMaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_001242f8;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb8));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  operator_delete(this,0xc0);
  return;
}



/* RendererCanvasRenderRD::get_pipeline_compilations(RenderingServer::PipelineSource) */

undefined4 __thiscall
RendererCanvasRenderRD::get_pipeline_compilations(RendererCanvasRenderRD *this,int param_2)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(RendererCanvasRender::singleton + 0x6c8);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(this + (long)param_2 * 4 + 0x6b0);
    pthread_mutex_unlock(__mutex);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* RendererCanvasRenderRD::CanvasShaderData::get_native_source_code() const */

void RendererCanvasRenderRD::CanvasShaderData::get_native_source_code(void)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __mutex = (pthread_mutex_t *)(RendererCanvasRender::singleton + 0x6c8);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  ShaderRD::version_get_native_source_code();
  pthread_mutex_unlock(__mutex);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::CanvasShaderData::is_valid() const [clone .part.0] */

undefined4 __thiscall RendererCanvasRenderRD::CanvasShaderData::is_valid(CanvasShaderData *this)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = RendererCanvasRender::singleton;
  __mutex = (pthread_mutex_t *)(RendererCanvasRender::singleton + 0x6c8);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    uVar3 = ShaderRD::version_is_valid(lVar1 + 0x18,*(undefined8 *)(this + 0xa8));
    pthread_mutex_unlock(__mutex);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* RendererCanvasRenderRD::CanvasShaderData::get_shader(RendererCanvasRenderRD::ShaderVariant, bool)
   const [clone .part.0] */

undefined8 __thiscall
RendererCanvasRenderRD::CanvasShaderData::get_shader
          (CanvasShaderData *this,int param_2,char param_3)

{
  Version *pVVar1;
  pthread_mutex_t *__mutex;
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
  
  lVar3 = RendererCanvasRender::singleton;
  __mutex = (pthread_mutex_t *)(RendererCanvasRender::singleton + 0x6c8);
  param_2 = param_2 + (-(uint)(param_3 != '\0') & 6);
  iVar5 = pthread_mutex_lock(__mutex);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar2 = *(ulong *)(this + 0xa8);
  lVar8 = *(long *)(lVar3 + 0x30);
  uVar10 = (ulong)param_2;
  if (param_2 < 0) {
    if (lVar8 == 0) goto LAB_001008c0;
    lVar8 = *(long *)(lVar8 + -8);
LAB_0010074d:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar10,lVar8,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    if (lVar8 == 0) {
LAB_001008c0:
      lVar8 = 0;
      goto LAB_0010074d;
    }
    lVar8 = *(long *)(lVar8 + -8);
    if (lVar8 <= (long)uVar10) goto LAB_0010074d;
    lVar8 = *(long *)(lVar3 + 0x40);
    uVar6 = uVar10;
    if (lVar8 == 0) goto LAB_00100860;
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 <= (long)uVar10) goto LAB_00100881;
    if (*(char *)(lVar8 + uVar10) == '\0') {
      uVar7 = 0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00100726;
    }
    if ((uVar2 == 0) || (*(uint *)(lVar3 + 0xec) <= (uint)uVar2)) {
LAB_001007d0:
      uVar7 = 0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00100726;
    }
    lVar8 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xe8)) * 0xa0 +
            *(long *)(*(long *)(lVar3 + 0xd8) +
                     ((uVar2 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xe8)) * 8);
    if (*(int *)(lVar8 + 0x98) != (int)(uVar2 >> 0x20)) {
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001007d0;
    }
    pVVar1 = (Version *)(lVar3 + 0x18);
    iVar5 = (int)lVar8;
    if (*(char *)(lVar8 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar9 = *(long *)(lVar3 + 0x90);
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
          lVar9 = *(long *)(lVar3 + 0x90);
          lVar11 = lVar11 + 1;
        } while (lVar9 != 0);
      }
    }
    lVar3 = *(long *)(lVar3 + 0x50);
    if (lVar3 == 0) {
LAB_00100860:
      lVar9 = 0;
      uVar6 = uVar10;
LAB_00100881:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar9 = *(long *)(lVar3 + -8);
    if (lVar9 <= (long)uVar10) goto LAB_00100881;
    uVar6 = (ulong)*(uint *)(lVar3 + uVar10 * 4);
    lVar3 = *(long *)(lVar8 + 0x68);
    if (lVar3 == 0) {
      lVar9 = 0;
      goto LAB_00100881;
    }
    lVar9 = *(long *)(lVar3 + -8);
    if (lVar9 <= (long)uVar6) goto LAB_00100881;
    if (*(long *)(lVar3 + uVar6 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar1,iVar5);
    }
    if (*(char *)(lVar8 + 0x90) != '\0') {
      lVar3 = *(long *)(lVar8 + 0x88);
      if (lVar3 != 0) {
        lVar9 = *(long *)(lVar3 + -8);
        uVar6 = uVar10;
        if ((long)uVar10 < lVar9) {
          uVar7 = *(undefined8 *)(lVar3 + uVar10 * 8);
          goto LAB_00100726;
        }
        goto LAB_00100881;
      }
      goto LAB_00100860;
    }
  }
  uVar7 = 0;
LAB_00100726:
  pthread_mutex_unlock(__mutex);
  return uVar7;
}



/* RendererCanvasRenderRD::CanvasMaterialData::update_parameters(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, bool, bool) */

uint __thiscall
RendererCanvasRenderRD::CanvasMaterialData::update_parameters
          (CanvasMaterialData *this,HashMap *param_1,bool param_2,bool param_3)

{
  Version *pVVar1;
  pthread_mutex_t *__mutex;
  char cVar2;
  char *pcVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar5 = RendererCanvasRender::singleton;
  __mutex = (pthread_mutex_t *)(RendererCanvasRender::singleton + 0x6c8);
  iVar8 = pthread_mutex_lock(__mutex);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  uVar11 = *(ulong *)(*(long *)(this + 0xa8) + 0xa8);
  if (*(long *)(lVar5 + 0x30) == 0) {
    lVar13 = 0;
LAB_00100ba3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar13,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar5 + 0x30) + -8);
    if (lVar13 < 1) goto LAB_00100ba3;
    pcVar3 = *(char **)(lVar5 + 0x40);
    if (pcVar3 == (char *)0x0) {
LAB_00100c50:
      lVar13 = 0;
LAB_00100c53:
      uVar11 = 0;
LAB_00100c70:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar13 = *(long *)(pcVar3 + -8);
    if (lVar13 < 1) goto LAB_00100c53;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    }
    else {
      if ((uVar11 != 0) && ((uint)uVar11 < *(uint *)(lVar5 + 0xec))) {
        lVar12 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(lVar5 + 0xe8)) * 0xa0 +
                 *(long *)(*(long *)(lVar5 + 0xd8) +
                          ((uVar11 & 0xffffffff) / (ulong)*(uint *)(lVar5 + 0xe8)) * 8);
        if (*(int *)(lVar12 + 0x98) == (int)(uVar11 >> 0x20)) {
          pVVar1 = (Version *)(lVar5 + 0x18);
          iVar8 = (int)lVar12;
          if (*(char *)(lVar12 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar1);
            lVar13 = *(long *)(lVar5 + 0x90);
            if (lVar13 != 0) {
              lVar14 = 0;
              do {
                if (*(long *)(lVar13 + -8) <= lVar14) break;
                if (*(char *)(lVar13 + lVar14) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar1,iVar8);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar1,iVar8);
                }
                lVar13 = *(long *)(lVar5 + 0x90);
                lVar14 = lVar14 + 1;
              } while (lVar13 != 0);
            }
          }
          puVar4 = *(uint **)(lVar5 + 0x50);
          if (puVar4 == (uint *)0x0) goto LAB_00100c50;
          lVar13 = *(long *)(puVar4 + -2);
          if (0 < lVar13) {
            uVar11 = (ulong)*puVar4;
            lVar5 = *(long *)(lVar12 + 0x68);
            if (lVar5 == 0) {
              lVar13 = 0;
              goto LAB_00100c70;
            }
            lVar13 = *(long *)(lVar5 + -8);
            if (lVar13 <= (long)uVar11) goto LAB_00100c70;
            if (*(long *)(lVar5 + uVar11 * 8) == 0) {
              cVar2 = *(char *)(lVar12 + 0x90);
            }
            else {
              ShaderRD::_compile_version_end(pVVar1,iVar8);
              cVar2 = *(char *)(lVar12 + 0x90);
            }
            if (cVar2 == '\0') goto LAB_00100be0;
            puVar6 = *(undefined8 **)(lVar12 + 0x88);
            if (puVar6 == (undefined8 *)0x0) goto LAB_00100c50;
            lVar13 = puVar6[-1];
            if (0 < lVar13) {
              uVar15 = *puVar6;
              goto LAB_00100a82;
            }
          }
          goto LAB_00100c53;
        }
        if (*(int *)(lVar12 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
    }
  }
LAB_00100be0:
  uVar15 = 0;
LAB_00100a82:
  lVar5 = *(long *)(this + 0xa8);
  uVar9 = RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set
                    (this,param_1,param_2,param_3,lVar5 + 0x10,*(undefined8 *)(lVar5 + 0x90),
                     lVar5 + 0x70,lVar5 + 0x40,*(undefined4 *)(lVar5 + 0x98),this + 0xb0,uVar15,1,1,
                     0);
  lVar5 = *(long *)(this + 0xa8);
  uVar10 = RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set
                     (this,param_1,param_2,param_3,lVar5 + 0x10,*(undefined8 *)(lVar5 + 0x90),
                      lVar5 + 0x70,lVar5 + 0x40,*(undefined4 *)(lVar5 + 0x98),this + 0xb8,uVar15,1,0
                      ,0);
  pthread_mutex_unlock(__mutex);
  return uVar9 | uVar10;
}



/* HashMap<unsigned int, long, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, long> > >::erase(unsigned int const&) [clone
   .isra.0] */

void __thiscall
HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
::erase(HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
        *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
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
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
}



/* RendererCanvasRenderRD::free_polygon(unsigned long) */

ulong __thiscall RendererCanvasRenderRD::free_polygon(RendererCanvasRenderRD *this,ulong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
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
  ulong uVar33;
  undefined8 uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  uint uVar42;
  long *plVar43;
  ulong uVar44;
  uint uVar45;
  uint *puVar46;
  
  lVar5 = *(long *)(this + 0x700);
  if ((lVar5 != 0) && (*(int *)(this + 0x724) != 0)) {
    uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x720) * 4));
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x720) * 8);
    uVar33 = param_1 * 0x3ffff - 1;
    uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
    uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
    uVar33 = uVar33 >> 0x16 ^ uVar33;
    uVar41 = uVar33 & 0xffffffff;
    if ((int)uVar33 == 0) {
      uVar41 = 1;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar41 * lVar6;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar44;
    lVar39 = SUB168(auVar7 * auVar20,8);
    uVar42 = *(uint *)(*(long *)(this + 0x708) + lVar39 * 4);
    uVar37 = SUB164(auVar7 * auVar20,8);
    if (uVar42 != 0) {
      uVar45 = 0;
      do {
        if (((uint)uVar41 == uVar42) &&
           (*(ulong *)(*(long *)(lVar5 + lVar39 * 8) + 0x10) == param_1)) {
          lVar5 = *(long *)(lVar5 + (ulong)uVar37 * 8);
          if (*(long *)(lVar5 + 0x38) != 0) {
            uVar34 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar34,*(undefined8 *)(lVar5 + 0x38));
          }
          if (*(long *)(lVar5 + 0x30) != 0) {
            uVar34 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar34,*(undefined8 *)(lVar5 + 0x30));
          }
          uVar34 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar34,*(undefined8 *)(lVar5 + 0x28));
          uVar34 = RenderingDevice::get_singleton();
          uVar33 = RenderingDevice::free(uVar34);
          lVar5 = *(long *)(this + 0x700);
          if (lVar5 == 0) {
            return uVar33;
          }
          if (*(uint *)(this + 0x724) == 0) {
            return (ulong)*(uint *)(this + 0x724);
          }
          lVar6 = *(long *)(this + 0x708);
          uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x720) * 4);
          uVar44 = CONCAT44(0,uVar42);
          lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x720) * 8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar41 * lVar39;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar44;
          auVar11 = auVar11 * auVar24;
          uVar37 = *(uint *)(lVar6 + auVar11._8_8_ * 4);
          uVar33 = (ulong)auVar11._8_4_;
          if (uVar37 == 0) {
            return auVar11._0_8_;
          }
          uVar45 = 0;
          uVar36 = auVar11._8_8_;
          while( true ) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((int)uVar33 + 1) * lVar39;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar44;
            auVar14 = auVar14 * auVar27;
            uVar40 = auVar14._8_8_;
            uVar35 = auVar14._0_8_;
            uVar38 = auVar14._8_4_;
            if (((uint)uVar41 == uVar37) &&
               (uVar35 = *(ulong *)(lVar5 + uVar36 * 8), *(ulong *)(uVar35 + 0x10) == param_1))
            break;
            uVar37 = *(uint *)(lVar6 + uVar40 * 4);
            uVar33 = uVar40 & 0xffffffff;
            uVar45 = uVar45 + 1;
            if (uVar37 == 0) {
              return uVar35;
            }
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar37 * lVar39;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar44;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)((uVar42 + uVar38) - SUB164(auVar12 * auVar25,8)) * lVar39;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar44;
            uVar36 = uVar40;
            if (SUB164(auVar13 * auVar26,8) < uVar45) {
              return SUB168(auVar13 * auVar26,0);
            }
          }
          puVar46 = (uint *)(lVar6 + uVar40 * 4);
          uVar37 = *puVar46;
          if ((uVar37 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar37 * lVar39, auVar28._8_8_ = 0,
             auVar28._0_8_ = uVar44, auVar16._8_8_ = 0,
             auVar16._0_8_ = (ulong)((uVar38 + uVar42) - SUB164(auVar15 * auVar28,8)) * lVar39,
             auVar29._8_8_ = 0, auVar29._0_8_ = uVar44, uVar41 = (ulong)uVar38, uVar36 = uVar33,
             SUB164(auVar16 * auVar29,8) != 0)) {
            while( true ) {
              uVar33 = uVar41;
              puVar1 = (uint *)(lVar6 + uVar36 * 4);
              *puVar46 = *puVar1;
              puVar2 = (undefined8 *)(lVar5 + uVar40 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar5 + uVar36 * 8);
              uVar34 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar34;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (ulong)((int)uVar33 + 1) * lVar39;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar44;
              uVar40 = SUB168(auVar19 * auVar32,8);
              puVar46 = (uint *)(lVar6 + uVar40 * 4);
              uVar37 = *puVar46;
              if ((uVar37 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar37 * lVar39, auVar30._8_8_ = 0,
                 auVar30._0_8_ = uVar44, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      (ulong)((SUB164(auVar19 * auVar32,8) + uVar42) - SUB164(auVar17 * auVar30,8))
                      * lVar39, auVar31._8_8_ = 0, auVar31._0_8_ = uVar44,
                 SUB164(auVar18 * auVar31,8) == 0)) break;
              uVar41 = uVar40 & 0xffffffff;
              uVar36 = uVar33;
            }
          }
          plVar4 = (long *)(lVar5 + uVar33 * 8);
          *(undefined4 *)(lVar6 + uVar33 * 4) = 0;
          plVar43 = (long *)*plVar4;
          if (*(long **)(this + 0x710) == plVar43) {
            *(long *)(this + 0x710) = *plVar43;
            plVar43 = (long *)*plVar4;
            if (*(long **)(this + 0x718) != plVar43) goto LAB_001012a2;
          }
          else if (*(long **)(this + 0x718) != plVar43) goto LAB_001012a2;
          *(long *)(this + 0x718) = plVar43[1];
          plVar43 = (long *)*plVar4;
LAB_001012a2:
          if ((long *)plVar43[1] != (long *)0x0) {
            *(long *)plVar43[1] = *plVar43;
            plVar43 = (long *)*plVar4;
          }
          if (*plVar43 != 0) {
            *(long *)(*plVar43 + 8) = plVar43[1];
            plVar43 = (long *)*plVar4;
          }
          Memory::free_static(plVar43,false);
          uVar41 = *(ulong *)(this + 0x700);
          *(undefined8 *)(uVar41 + uVar33 * 8) = 0;
          *(int *)(this + 0x724) = *(int *)(this + 0x724) + -1;
          return uVar41;
        }
        uVar45 = uVar45 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(uVar37 + 1) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar44;
        lVar39 = SUB168(auVar8 * auVar21,8);
        uVar42 = *(uint *)(*(long *)(this + 0x708) + lVar39 * 4);
        uVar37 = SUB164(auVar8 * auVar21,8);
      } while ((uVar42 != 0) &&
              (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar42 * lVar6, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar44, auVar10._8_8_ = 0,
              auVar10._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x720) * 4) +
                           uVar37) - SUB164(auVar9 * auVar22,8)) * lVar6, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar44, uVar45 <= SUB164(auVar10 * auVar23,8)));
    }
  }
  uVar33 = _err_print_error("free_polygon",
                            "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x14f,
                            "Parameter \"pb_ptr\" is null.",0,0);
  return uVar33;
}



/* RendererCanvasRenderRD::free(RID) */

undefined8 __thiscall RendererCanvasRenderRD::free(RendererCanvasRenderRD *this,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  long local_30;
  
  uVar6 = (uint)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)(param_2 >> 0x20);
  if (uVar6 < *(uint *)(this + 0x76c)) {
    if (param_2 >> 0x20 != 0x7fffffff) {
      uVar2 = *(uint *)(*(long *)(*(long *)(this + 0x758) +
                                 ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8) +
                        ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38 + 0x30);
      if (uVar3 == (uVar2 & 0x7fffffff)) {
        if (param_2 != 0) {
          if (uVar3 == uVar2) {
            (**(code **)(*(long *)this + 0x28))(this,param_2,0);
            if (*(uint *)(this + 0x76c) <= uVar6) goto LAB_00101688;
            lVar5 = *(long *)(*(long *)(this + 0x758) +
                             ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8) +
                    ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38;
            uVar2 = *(uint *)(lVar5 + 0x30);
            if ((int)uVar2 < 0) goto LAB_001016b8;
            if (uVar3 != uVar2) goto LAB_001016f0;
            *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
            uVar3 = *(int *)(this + 0x770) - 1;
            *(uint *)(this + 0x770) = uVar3;
            *(uint *)(*(long *)(*(long *)(this + 0x760) +
                               ((ulong)uVar3 / (ulong)*(uint *)(this + 0x768)) * 8) +
                     ((ulong)uVar3 % (ulong)*(uint *)(this + 0x768)) * 4) = uVar6;
            goto LAB_00101524;
          }
          if (uVar2 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error(&_LC28,"servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x81e,
                         "Parameter \"cl\" is null.",0,0);
      }
      else if (uVar6 < *(uint *)(this + 0x7c4)) goto LAB_00101436;
    }
  }
  else if ((uVar6 < *(uint *)(this + 0x7c4)) && (param_2 >> 0x20 != 0x7fffffff)) {
LAB_00101436:
    if (uVar3 == (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x7c0)) * 0x60 +
                            *(long *)(*(long *)(this + 0x7b0) +
                                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x7c0)) * 8)
                           + 0x58) & 0x7fffffff)) {
      local_40 = 0;
      (**(code **)(*(long *)this + 0x50))(this,param_2,auStack_48,0);
      lVar5 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (uVar6 < *(uint *)(this + 0x7c4)) {
        lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x7c0)) * 0x60 +
                *(long *)(*(long *)(this + 0x7b0) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x7c0)) * 8);
        uVar2 = *(uint *)(lVar5 + 0x58);
        if ((int)uVar2 < 0) {
LAB_001016b8:
          _err_print_error(&_LC28,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                           "Attempted to free an uninitialized or invalid RID",0,0);
        }
        else if (uVar3 == uVar2) {
          *(undefined4 *)(lVar5 + 0x58) = 0xffffffff;
          uVar3 = *(int *)(this + 0x7c8) - 1;
          *(uint *)(this + 0x7c8) = uVar3;
          *(uint *)(*(long *)(*(long *)(this + 0x7b8) +
                             ((ulong)uVar3 / (ulong)*(uint *)(this + 0x7c0)) * 8) +
                   ((ulong)uVar3 % (ulong)*(uint *)(this + 0x7c0)) * 4) = uVar6;
        }
        else {
LAB_001016f0:
          _err_print_error(&_LC28,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0
                          );
        }
      }
      else {
LAB_00101688:
        _err_print_error(&_LC28,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
      }
LAB_00101524:
      uVar4 = 1;
      goto LAB_0010146b;
    }
  }
  uVar4 = 0;
LAB_0010146b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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



/* RendererCanvasRenderRD::_canvas_texture_invalidation_callback(bool, void*) */

ulong RendererCanvasRenderRD::_canvas_texture_invalidation_callback(bool param_1,void *param_2)

{
  long lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
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
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  
  uVar27 = RenderingDevice::get_singleton();
  lVar32 = *(long *)((long)param_2 + 0x10);
  uVar28 = (ulong)*(uint *)((long)param_2 + 8);
  lVar1 = lVar32 + uVar28 * 8;
  if (lVar1 != lVar32) {
    do {
      lVar32 = lVar32 + 8;
      RenderingDevice::free(uVar27);
    } while (lVar1 != lVar32);
    uVar28 = (ulong)*(uint *)((long)param_2 + 8);
  }
  if ((int)uVar28 != 0) {
    *(undefined4 *)((long)param_2 + 8) = 0;
  }
  lVar1 = RendererCanvasRender::singleton;
  if (((param_1) && (lVar32 = *(long *)(RendererCanvasRender::singleton + 0xa08), lVar32 != 0)) &&
     (*(int *)(RendererCanvasRender::singleton + 0xa2c) != 0)) {
                    /* WARNING: Load size is inaccurate */
    lVar7 = *(long *)(RendererCanvasRender::singleton + 0xa10);
    uVar6 = *(uint *)(hash_table_size_primes +
                     (ulong)*(uint *)(RendererCanvasRender::singleton + 0xa28) * 4);
    uVar36 = CONCAT44(0,uVar6);
    lVar8 = *(long *)(hash_table_size_primes_inv +
                     (ulong)*(uint *)(RendererCanvasRender::singleton + 0xa28) * 8);
    uVar28 = *param_2 * 0x3ffff - 1;
    uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
    uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
    uVar28 = uVar28 >> 0x16 ^ uVar28;
    uVar33 = uVar28 & 0xffffffff;
    if ((int)uVar28 == 0) {
      uVar33 = 1;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar33 * lVar8;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar36;
    auVar9 = auVar9 * auVar18;
    uVar28 = auVar9._0_8_;
    uVar38 = *(uint *)(lVar7 + auVar9._8_8_ * 4);
    uVar35 = (ulong)auVar9._8_4_;
    if (uVar38 != 0) {
      uVar37 = 0;
      uVar29 = auVar9._8_8_;
      do {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)((int)uVar35 + 1) * lVar8;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar36;
        auVar12 = auVar12 * auVar21;
        uVar31 = auVar12._8_8_;
        uVar28 = auVar12._0_8_;
        uVar30 = auVar12._8_4_;
        if ((uVar38 == (uint)uVar33) &&
           (uVar28 = *(ulong *)(lVar32 + uVar29 * 8), *param_2 == *(long *)(uVar28 + 0x10))) {
          puVar39 = (uint *)(lVar7 + uVar31 * 4);
          uVar38 = *puVar39;
          if ((uVar38 != 0) &&
             (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar38 * lVar8, auVar22._8_8_ = 0,
             auVar22._0_8_ = uVar36, auVar14._8_8_ = 0,
             auVar14._0_8_ = (ulong)((uVar30 + uVar6) - SUB164(auVar13 * auVar22,8)) * lVar8,
             auVar23._8_8_ = 0, auVar23._0_8_ = uVar36, uVar28 = (ulong)uVar30, uVar33 = uVar35,
             SUB164(auVar14 * auVar23,8) != 0)) {
            while( true ) {
              uVar35 = uVar28;
              puVar2 = (uint *)(lVar7 + uVar33 * 4);
              *puVar39 = *puVar2;
              puVar3 = (undefined8 *)(lVar32 + uVar31 * 8);
              *puVar2 = uVar38;
              puVar4 = (undefined8 *)(lVar32 + uVar33 * 8);
              uVar27 = *puVar3;
              *puVar3 = *puVar4;
              *puVar4 = uVar27;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = (ulong)((int)uVar35 + 1) * lVar8;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = uVar36;
              uVar31 = SUB168(auVar17 * auVar26,8);
              puVar39 = (uint *)(lVar7 + uVar31 * 4);
              uVar38 = *puVar39;
              if ((uVar38 == 0) ||
                 (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar38 * lVar8, auVar24._8_8_ = 0,
                 auVar24._0_8_ = uVar36, auVar16._8_8_ = 0,
                 auVar16._0_8_ =
                      (ulong)((SUB164(auVar17 * auVar26,8) + uVar6) - SUB164(auVar15 * auVar24,8)) *
                      lVar8, auVar25._8_8_ = 0, auVar25._0_8_ = uVar36,
                 SUB164(auVar16 * auVar25,8) == 0)) break;
              uVar28 = uVar31 & 0xffffffff;
              uVar33 = uVar35;
            }
          }
          plVar5 = (long *)(lVar32 + uVar35 * 8);
          *(undefined4 *)(lVar7 + uVar35 * 4) = 0;
          plVar34 = (long *)*plVar5;
          if (*(long **)(lVar1 + 0xa18) == plVar34) {
            *(long *)(lVar1 + 0xa18) = *plVar34;
            plVar34 = (long *)*plVar5;
          }
          if (*(long **)(lVar1 + 0xa20) == plVar34) {
            *(long *)(lVar1 + 0xa20) = plVar34[1];
            plVar34 = (long *)*plVar5;
          }
          if ((long *)plVar34[1] != (long *)0x0) {
            *(long *)plVar34[1] = *plVar34;
            plVar34 = (long *)*plVar5;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar5;
          }
          if ((void *)plVar34[4] != (void *)0x0) {
            if ((int)plVar34[3] != 0) {
              *(undefined4 *)(plVar34 + 3) = 0;
            }
            Memory::free_static((void *)plVar34[4],false);
          }
          Memory::free_static(plVar34,false);
          uVar28 = *(ulong *)(lVar1 + 0xa08);
          *(undefined8 *)(uVar28 + uVar35 * 8) = 0;
          *(int *)(lVar1 + 0xa2c) = *(int *)(lVar1 + 0xa2c) + -1;
          return uVar28;
        }
        uVar38 = *(uint *)(lVar7 + uVar31 * 4);
        uVar35 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar38 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar38 * lVar8, auVar19._8_8_ = 0,
              auVar19._0_8_ = uVar36, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar6 + uVar30) - SUB164(auVar10 * auVar19,8)) * lVar8,
              auVar20._8_8_ = 0, auVar20._0_8_ = uVar36, uVar28 = SUB168(auVar11 * auVar20,0),
              uVar29 = uVar31, uVar37 <= SUB164(auVar11 * auVar20,8)));
    }
  }
  return uVar28;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001024c6:
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + -8);
    if (param_1 == lVar7) {
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
    if (lVar7 == 0) goto LAB_001024c6;
    uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    lVar4 = (uVar3 | uVar3 >> 0x20) + 1;
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    if (uVar3 + 1 == lVar4) {
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar3 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00102520:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar5 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar5;
    }
    puVar5[-1] = param_1;
    return;
  }
  if (uVar3 + 1 == lVar4) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
      FUN_00119870();
      return;
    }
  }
  else {
    if (lVar7 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00102520;
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
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



/* RendererCanvasRenderRD::CanvasShaderData::_clear_vertex_input_mask_cache() */

void __thiscall
RendererCanvasRenderRD::CanvasShaderData::_clear_vertex_input_mask_cache(CanvasShaderData *this)

{
  CanvasShaderData *pCVar1;
  
  pCVar1 = this + 0x198;
  do {
    LOCK();
    *(undefined8 *)pCVar1 = 0;
    UNLOCK();
    pCVar1 = pCVar1 + 8;
  } while (pCVar1 != this + 0x1f8);
  return;
}



/* RendererCanvasRenderRD::CanvasShaderData::get_shader(RendererCanvasRenderRD::ShaderVariant, bool)
   const */

undefined8 __thiscall
RendererCanvasRenderRD::CanvasShaderData::get_shader
          (CanvasShaderData *this,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xa8) != 0) {
    uVar1 = get_shader(this,param_2,param_3);
    return uVar1;
  }
  return 0;
}



/* RendererCanvasRenderRD::CanvasShaderData::get_vertex_input_mask(RendererCanvasRenderRD::ShaderVariant,
   bool) */

long __thiscall
RendererCanvasRenderRD::CanvasShaderData::get_vertex_input_mask
          (CanvasShaderData *this,undefined8 param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + (ulong)((-(uint)(param_3 != '\0') & 6) + (int)param_2) * 8 + 0x198);
  if (lVar1 != 0) {
    return lVar1;
  }
  if (*(long *)(this + 0xa8) != 0) {
    lVar1 = get_shader(this,param_2,param_3);
    if (lVar1 != 0) {
      uVar2 = RenderingDevice::get_singleton();
      lVar1 = RenderingDevice::shader_get_vertex_input_attribute_mask(uVar2,lVar1);
      *(long *)(this + (ulong)((-(uint)(param_3 != '\0') & 6) + (int)param_2) * 8 + 0x198) = lVar1;
      return lVar1;
    }
  }
  _err_print_error("get_vertex_input_mask",
                   "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x66c,
                   "Condition \"shader_rid.is_null()\" is true. Returning: 0",0,0);
  return 0;
}



/* RendererCanvasRenderRD::CanvasShaderData::is_valid() const */

undefined8 __thiscall RendererCanvasRenderRD::CanvasShaderData::is_valid(CanvasShaderData *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xa8) == 0) {
    return 0;
  }
  uVar1 = is_valid(this);
  return uVar1;
}



/* RendererCanvasRenderRD::CanvasShaderData::CanvasShaderData() */

void __thiscall RendererCanvasRenderRD::CanvasShaderData::CanvasShaderData(CanvasShaderData *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  CanvasShaderData *pCVar4;
  
  uVar1 = _LC46;
  *(undefined8 **)(this + 0xe0) = &_GlobalNilClass::_nil;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 **)(this + 0x130) = &_GlobalNilClass::_nil;
  *(undefined8 *)(this + 0x168) = uVar1;
  *(undefined ***)this = &PTR_set_path_hint_00124288;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x110) = 1;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x180) = 1;
  pCVar4 = this + 0x198;
  for (lVar3 = 0xc; lVar2 = RendererCanvasRender::singleton, lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 8;
  }
  *(undefined4 *)(this + 0x1f8) = 0;
  *(CanvasShaderData **)(this + 0xb0) = this;
  *(code **)(this + 0xb8) = _create_pipeline;
  *(long *)(this + 0xd0) = lVar2 + 0x6b0;
  *(long *)(this + 200) = lVar2 + 0x6c8;
  return;
}



/* RendererCanvasRenderRD::_create_shader_func() */

CanvasShaderData * RendererCanvasRenderRD::_create_shader_func(void)

{
  CanvasShaderData *this;
  
  this = (CanvasShaderData *)operator_new(0x200,"");
  CanvasShaderData::CanvasShaderData(this);
  return this;
}



/* RendererCanvasRenderRD::_create_material_func(RendererCanvasRenderRD::CanvasShaderData*) */

void __thiscall
RendererCanvasRenderRD::_create_material_func
          (RendererCanvasRenderRD *this,CanvasShaderData *param_1)

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
  *puVar1 = &PTR_set_render_priority_001242f8;
  puVar1[0x15] = param_1;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x11) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x16) = (undefined1  [16])0x0;
  return;
}



/* RendererCanvasRenderRD::set_time(double) */

void __thiscall RendererCanvasRenderRD::set_time(RendererCanvasRenderRD *this,double param_1)

{
  *(double *)(this + 0xb40) = param_1;
  return;
}



/* RendererCanvasRenderRD::new_instance_data(float*, unsigned int*, unsigned int, unsigned int,
   unsigned int, RendererCanvasRenderRD::TextureInfo*) */

void __thiscall
RendererCanvasRenderRD::new_instance_data
          (RendererCanvasRenderRD *this,float *param_1,uint *param_2,uint param_3,uint param_4,
          uint param_5,TextureInfo *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (ulong)param_4 * 0x80 + *(long *)(this + 0xab0);
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined1 (*) [16])(lVar2 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar2 + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar2 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar2 + 0x50) = (undefined1  [16])0x0;
  *(uint *)(lVar2 + 0x70) = *param_2;
  *(uint *)(lVar2 + 0x74) = param_2[1];
  *(uint *)(lVar2 + 0x78) = param_2[2];
  *(uint *)(lVar2 + 0x7c) = param_2[3];
  lVar3 = 0;
  do {
    *(undefined4 *)(lVar2 + lVar3) = *(undefined4 *)((long)param_1 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x18);
  *(uint *)(lVar2 + 0x18) = param_3;
  uVar1 = *(undefined8 *)(param_6 + 0x30);
  *(uint *)(lVar2 + 0x1c) = param_5;
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  return;
}



/* RendererCanvasRenderRD::_before_evict(RendererCanvasRenderRD::RIDSetKey&, RID&) */

void RendererCanvasRenderRD::_before_evict(RIDSetKey *param_1,RID *param_2)

{
  undefined8 uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::uniform_set_set_invalidation_callback(uVar1,*(undefined8 *)param_2,0,0);
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)param_2);
  return;
}



/* RendererCanvasRenderRD::_new_batch(bool&) */

int * __thiscall RendererCanvasRenderRD::_new_batch(RendererCanvasRenderRD *this,bool *param_1)

{
  ulong *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int *piVar18;
  void *pvVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  ulong local_f8;
  undefined8 uStack_f0;
  
  uVar3 = *(uint *)(this + 0xa90);
  uVar22 = (ulong)uVar3;
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 == 0) {
    iVar4 = *(int *)(this + 0xaa4);
    piVar18 = *(int **)(this + 0xa98);
    if (*(int *)(this + 0xa94) == 0) {
      *(undefined4 *)(this + 0xa94) = 1;
      piVar18 = (int *)Memory::realloc_static(piVar18,0x68,false);
      *(int **)(this + 0xa98) = piVar18;
      if (piVar18 == (int *)0x0) {
LAB_00102e25:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar22 = (ulong)*(uint *)(this + 0xa90);
    }
    iVar17 = (int)_LC51;
    *(int *)(this + 0xa90) = (int)uVar22 + 1;
    piVar2 = piVar18 + uVar22 * 0x1a;
    piVar2[6] = iVar17;
    piVar2[7] = iVar17;
    piVar2[8] = iVar17;
    piVar2[9] = iVar17;
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = iVar4;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0x12] = 9;
    piVar2[0x13] = 0;
    piVar2[0x14] = 5;
    *(undefined1 *)(piVar2 + 0x15) = 0;
    piVar2[0x16] = 0;
    *(undefined1 *)(piVar2 + 0x17) = 0;
    piVar2[0x18] = 0;
    *(undefined1 (*) [16])(piVar2 + 0xe) = (undefined1  [16])0x0;
LAB_00102b2a:
    if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return piVar18;
  }
  uVar21 = *(uint *)(this + 0xaa8);
  uVar20 = (ulong)uVar21;
  if (*param_1 == false) {
    if (uVar21 < uVar3) {
      pvVar19 = *(void **)(this + 0xa98);
      piVar18 = (int *)((long)pvVar19 + uVar20 * 0x68);
      iVar4 = piVar18[1];
      if (iVar4 != 0) {
        *param_1 = true;
        uVar7 = *(ulong *)(piVar18 + 4);
        uVar8 = *(ulong *)(piVar18 + 6);
        uVar9 = *(ulong *)(piVar18 + 8);
        uVar10 = *(ulong *)(piVar18 + 10);
        uVar11 = *(ulong *)(piVar18 + 0xc);
        uVar12 = *(ulong *)(piVar18 + 0xe);
        uVar13 = *(ulong *)(piVar18 + 0x10);
        uVar14 = *(ulong *)(piVar18 + 0x12);
        uVar15 = *(ulong *)(piVar18 + 0x14);
        uVar16 = *(ulong *)(piVar18 + 0x16);
        uVar20 = *(ulong *)(piVar18 + 0x18);
        local_f8 = (ulong)(uint)(iVar4 + *piVar18);
        uStack_f0 = CONCAT44((int)((ulong)*(undefined8 *)(piVar18 + 2) >> 0x20),
                             *(undefined4 *)(this + 0xaa4));
        *(uint *)(this + 0xaa8) = uVar21 + 1;
        if (uVar3 == *(uint *)(this + 0xa94)) {
          uVar22 = (ulong)(uVar3 * 2);
          if (uVar3 * 2 == 0) {
            uVar22 = 1;
          }
          *(int *)(this + 0xa94) = (int)uVar22;
          pvVar19 = (void *)Memory::realloc_static(pvVar19,uVar22 * 0x68,false);
          *(void **)(this + 0xa98) = pvVar19;
          if (pvVar19 == (void *)0x0) goto LAB_00102e25;
          uVar22 = (ulong)*(uint *)(this + 0xa90);
        }
        uVar21 = (int)uVar22 + 1;
        *(uint *)(this + 0xa90) = uVar21;
        puVar1 = (ulong *)((long)pvVar19 + uVar22 * 0x68);
        *puVar1 = local_f8;
        puVar1[1] = uStack_f0;
        puVar1[0xc] = uVar20;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
        puVar1[4] = uVar9;
        puVar1[5] = uVar10;
        puVar1[6] = uVar11;
        puVar1[7] = uVar12;
        puVar1[8] = uVar13;
        puVar1[9] = uVar14;
        puVar1[10] = uVar15;
        puVar1[0xb] = uVar16;
        uVar3 = *(uint *)(this + 0xaa8);
        if (uVar21 <= uVar3) {
          uVar20 = (ulong)uVar3;
          uVar22 = (ulong)uVar21;
          goto LAB_00102d5b;
        }
        piVar18 = (int *)((long)pvVar19 + (ulong)uVar3 * 0x68);
      }
      goto LAB_00102b2a;
    }
  }
  else if (uVar21 < uVar3) {
    piVar18 = (int *)(*(long *)(this + 0xa98) + uVar20 * 0x68);
    goto LAB_00102b2a;
  }
LAB_00102d5b:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar20,uVar22,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* RendererCanvasRenderRD::_allocate_instance_buffer() */

void __thiscall RendererCanvasRenderRD::_allocate_instance_buffer(RendererCanvasRenderRD *this)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(this + 0xaa4);
  *(uint *)(this + 0xaa4) = iVar2 + 1U;
  if (*(uint *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa60) <= iVar2 + 1U) {
    uVar7 = RenderingDevice::get_singleton();
    local_30 = 0;
    uVar7 = RenderingDevice::storage_buffer_create
                      (uVar7,*(undefined4 *)(this + 0xabc),auStack_38,0,0);
    lVar6 = local_30;
    if (local_30 != 0) {
      LOCK();
      plVar1 = (long *)(local_30 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_30 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar3 = *(uint *)(this + 0xaa0);
    uVar4 = *(uint *)(this + (ulong)uVar3 * 0x10 + 0xa60);
    pvVar8 = *(void **)(this + (ulong)uVar3 * 0x10 + 0xa68);
    if (uVar4 == *(uint *)(this + (ulong)uVar3 * 0x10 + 0xa64)) {
      uVar9 = (ulong)(uVar4 * 2);
      if (uVar4 * 2 == 0) {
        uVar9 = 1;
      }
      *(int *)(this + (ulong)uVar3 * 0x10 + 0xa64) = (int)uVar9;
      pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar9 * 8,false);
      *(void **)(this + (ulong)uVar3 * 0x10 + 0xa68) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar4 = *(uint *)(this + (ulong)uVar3 * 0x10 + 0xa60);
    }
    *(uint *)(this + (ulong)uVar3 * 0x10 + 0xa60) = uVar4 + 1;
    *(undefined8 *)((long)pvVar8 + (ulong)uVar4 * 8) = uVar7;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::_add_to_batch(unsigned int&, bool&, RendererCanvasRenderRD::Batch*&) */

void __thiscall
RendererCanvasRenderRD::_add_to_batch
          (RendererCanvasRenderRD *this,uint *param_1,bool *param_2,Batch **param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  Batch *pBVar4;
  
  *(int *)(*param_3 + 4) = *(int *)(*param_3 + 4) + 1;
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  if (uVar1 + 1 + *(int *)(this + 0xaac) < *(uint *)(this + 0xab8)) {
    return;
  }
  uVar3 = RenderingDevice::get_singleton();
  uVar1 = *(uint *)(this + 0xaa4);
  if (uVar1 < *(uint *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa60)) {
    RenderingDevice::buffer_update
              (uVar3,*(undefined8 *)
                      (*(long *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa68) +
                      (ulong)uVar1 * 8),*(int *)(this + 0xaac) << 7,*param_1 << 7,
               *(undefined8 *)(this + 0xab0));
    _allocate_instance_buffer(this);
    *param_1 = 0;
    *(undefined4 *)(this + 0xaac) = 0;
    *param_2 = false;
    pBVar4 = (Batch *)_new_batch(this,param_2);
    *param_3 = pBVar4;
    *(undefined4 *)pBVar4 = 0;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
             (ulong)*(uint *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa60),"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* RendererCanvasRenderRD::_prepare_batch_texture_info(RID, RendererCanvasRenderRD::TextureState&,
   RendererCanvasRenderRD::TextureInfo*) */

void __thiscall
RendererCanvasRenderRD::_prepare_batch_texture_info
          (RendererCanvasRenderRD *this,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  double dVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  char local_40;
  long local_30;
  
  while( true ) {
    local_30 = *(long *)(in_FS_OFFSET + 0x28);
    if (param_2 == 0) {
      param_2 = *(long *)(this + 0x200b90);
    }
    uVar4 = RendererRD::TextureStorage::get_singleton();
    uVar3 = *(uint *)(param_3 + 1);
    RendererRD::TextureStorage::canvas_texture_get_info
              (&local_78,uVar4,param_2,uVar3 & 7,uVar3 >> 3 & 3,uVar3 >> 6 & 1);
    dVar7 = _LC56;
    dVar1 = _LC55;
    if (local_78 != 0) break;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103364;
    param_2 = *(long *)(this + 0x200b90);
  }
  *param_4 = *param_3;
  dVar9 = (double)local_44 * dVar1;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 1);
  param_4[2] = local_78;
  param_4[3] = local_70;
  param_4[4] = local_68;
  param_4[5] = local_60;
  if (dVar7 <= (double)local_44) {
    if (local_40 != '\0') {
      *(uint *)((long)param_4 + 0x3c) = *(uint *)((long)param_4 + 0x3c) | 0x200;
    }
    uVar5 = 0xff000000;
    if (dVar9 <= dVar1) goto LAB_00103346;
  }
  else {
    uVar3 = *(uint *)((long)param_4 + 0x3c);
    *(uint *)((long)param_4 + 0x3c) = uVar3 | 0x400;
    if (local_40 != '\0') {
      *(uint *)((long)param_4 + 0x3c) = uVar3 | 0x600;
    }
    if (0.0 <= dVar9) {
LAB_00103346:
      uVar5 = (ulong)(uint)((int)dVar9 << 0x18);
    }
    else {
      uVar5 = 0;
    }
  }
  uVar2 = _LC51;
  dVar7 = (double)local_48 * dVar1;
  if (0.0 <= dVar7) {
    if (dVar7 <= dVar1) {
      uVar5 = (ulong)((uint)uVar5 | ((int)dVar7 & 0xffU) << 0x10);
    }
    else {
      uVar5 = (ulong)((uint)uVar5 | 0xff0000);
    }
  }
  dVar7 = (double)local_4c * dVar1;
  if (0.0 <= dVar7) {
    if (dVar7 <= dVar1) {
      uVar5 = (ulong)((uint)uVar5 | ((int)dVar7 & 0xffU) << 8);
    }
    else {
      uVar5 = CONCAT62((int6)(uVar5 >> 0x10),0xff00);
    }
  }
  uVar3 = (uint)uVar5;
  dVar7 = (double)local_50 * dVar1;
  if (0.0 <= dVar7) {
    if (dVar7 <= dVar1) {
      uVar3 = uVar3 | (int)dVar7 & 0xffU;
    }
    else {
      uVar3 = (uint)CONCAT71((int7)(uVar5 >> 8),0xff);
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = _LC51;
  *(uint *)(param_4 + 7) = uVar3;
  auVar8._0_4_ = (float)(int)local_58;
  auVar8._4_4_ = (float)(int)((ulong)local_58 >> 0x20);
  auVar8._8_8_ = uVar2;
  auVar6 = divps(auVar6,auVar8);
  param_4[6] = auVar6._0_8_;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103364:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::_record_item_commands(RendererCanvasRender::Item const*,
   RendererCanvasRenderRD::RenderTarget, Transform2D const&, RendererCanvasRender::Item*&,
   RendererCanvasRender::Light*, unsigned int&, bool&, bool&, RendererCanvasRenderRD::Batch*&) */

void RendererCanvasRenderRD::_record_item_commands
               (RendererCanvasRenderRD *param_1,long param_2,undefined8 param_3,byte param_4,
               undefined1 (*param_5) [16],long *param_6,long param_7,uint *param_8,bool *param_9,
               byte *param_10,Batch **param_11)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  Batch *pBVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  Batch *pBVar16;
  TextureInfo *pTVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  ushort uVar22;
  int iVar23;
  ushort uVar24;
  long lVar25;
  RendererCanvasRenderRD RVar26;
  uint uVar27;
  Color *this;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint uVar31;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  double dVar36;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  float extraout_XMM1_Da_01;
  float fVar39;
  float fVar40;
  undefined4 extraout_XMM1_Db;
  undefined4 extraout_XMM1_Db_00;
  float extraout_XMM1_Db_01;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar43 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint local_1fc;
  uint local_1f8;
  uint local_1c8;
  char local_1c1;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_160;
  undefined8 local_158;
  uint local_150;
  undefined1 local_148 [8];
  float fStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_a8 [2] [16];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [12];
  undefined4 local_5c;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  long local_40;
  undefined8 extraout_XMM1_Qb_00;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1fc = *(uint *)(param_2 + 0x140);
  if (local_1fc == 0) {
    local_1fc = *(uint *)(param_1 + 0x200bb8);
  }
  local_1f8 = *(uint *)(param_2 + 0x144);
  if (local_1f8 == 0) {
    local_1f8 = *(uint *)(param_1 + 0x200bbc);
  }
  _local_148 = *(undefined1 (*) [16])(param_2 + 0x90);
  local_c8._8_8_ = 0x3f80000000000000;
  local_c8._0_8_ = 0x3f800000;
  local_f8 = *(undefined8 *)param_5[1];
  local_d8 = *(undefined8 *)param_5[1];
  local_108 = *(undefined8 *)*param_5;
  uStack_100 = *(undefined8 *)(*param_5 + 8);
  uVar3 = *(uint *)(param_2 + 0x78);
  local_e8 = *param_5;
  local_b8 = 0;
  local_138 = (undefined1  [16])0x0;
  if (param_7 == 0) {
    local_1c8 = 0;
LAB_001045e8:
    RVar26 = param_1[0x200b88];
  }
  else {
    uVar27 = 0;
    uVar31 = 0;
    do {
      if ((((-1 < *(int *)(param_7 + 0x128)) &&
           ((*(uint *)(param_2 + 0x4c) & *(uint *)(param_7 + 0x60)) != 0)) &&
          (*(int *)(param_7 + 0x50) <= *(int *)(param_2 + 0x50))) &&
         (*(int *)(param_2 + 0x50) <= *(int *)(param_7 + 0x54))) {
        if (((*(float *)(param_2 + 0x108) <= 0.0 && *(float *)(param_2 + 0x108) != 0.0) ||
            (*(float *)(param_2 + 0x10c) <= 0.0 && *(float *)(param_2 + 0x10c) != 0.0)) ||
           ((fVar46 = *(float *)(param_7 + 0xb8), fVar46 < 0.0 ||
            (*(float *)(param_7 + 0xbc) <= 0.0 && *(float *)(param_7 + 0xbc) != 0.0)))) {
          _err_print_error("intersects","./core/math/rect2.h",0x39,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          fVar46 = *(float *)(param_7 + 0xb8);
        }
        if ((*(float *)(param_2 + 0x100) < fVar46 + *(float *)(param_7 + 0xb0)) &&
           (*(float *)(param_7 + 0xb0) < *(float *)(param_2 + 0x100) + *(float *)(param_2 + 0x108)))
        {
          if ((*(float *)(param_2 + 0x104) < *(float *)(param_7 + 0xbc) + *(float *)(param_7 + 0xb4)
              ) && (*(float *)(param_7 + 0xb4) <
                    *(float *)(param_2 + 0x104) + *(float *)(param_2 + 0x10c))) {
            *(uint *)(local_138 + (ulong)(uVar31 >> 2 & 0x3fff) * 4) =
                 *(uint *)(local_138 + (ulong)(uVar31 >> 2 & 0x3fff) * 4) |
                 *(int *)(param_7 + 0x128) << (sbyte)((uVar31 & 3) << 3);
            if ((*(uint *)(param_2 + 0x4c) & *(uint *)(param_7 + 100)) != 0) {
              uVar27 = uVar27 | 1 << ((byte)uVar31 & 0x1f);
            }
            uVar31 = uVar31 + 1;
            if ((short)uVar31 == 0xf) {
              RVar26 = (RendererCanvasRenderRD)0x1;
              local_1c8 = (uVar27 & 0xffff) << 0xd | 0xf;
              goto LAB_00103504;
            }
          }
        }
      }
      param_7 = *(long *)(param_7 + 0x108);
    } while (param_7 != 0);
    local_1c8 = (uVar27 & 0xffff) << 0xd | uVar31 & 0xffff;
    RVar26 = (RendererCanvasRenderRD)0x1;
    if ((short)uVar31 == 0) goto LAB_001045e8;
  }
LAB_00103504:
  if (*(RendererCanvasRenderRD *)(*param_11 + 0x54) != RVar26) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    *param_11 = pBVar16;
    *(RendererCanvasRenderRD *)(pBVar16 + 0x54) = RVar26;
  }
  lVar18 = *(long *)(param_2 + 0x110);
  if (lVar18 != 0) {
    bVar7 = false;
    local_1c1 = '\0';
LAB_00103550:
    do {
      iVar23 = *(int *)(lVar18 + 0x10);
      if (!bVar7) {
        do {
          switch(iVar23) {
          case 0:
            goto switchD_00103573_caseD_0;
          case 1:
            if (*(int *)(*param_11 + 0x48) != 1) {
              pBVar16 = (Batch *)_new_batch(param_1,param_9);
              uVar2 = _LC76;
              *param_11 = pBVar16;
              *(long *)(pBVar16 + 0x40) = lVar18;
              pBVar16[0x5c] = (Batch)0x0;
              *(undefined8 *)(pBVar16 + 0x48) = uVar2;
              *(undefined4 *)(pBVar16 + 0x50) = 5;
              *(undefined4 *)(pBVar16 + 0x60) = 0;
            }
            local_158 = *(undefined8 *)(lVar18 + 0x60);
            local_150 = local_1fc & 7 | (uint)param_4 << 6 | local_1f8 * 8 & 0x18;
            pTVar17 = (TextureInfo *)
                      HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                      ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                                *)(param_1 + 0xa30),(TextureState *)&local_158);
            if (pTVar17 == (TextureInfo *)0x0) {
              uStack_7c = 0;
              auStack_58 = SUB1612((undefined1  [16])0x0,4);
              local_4c = 0;
              local_88 = 0;
              uStack_80 = 0;
              uStack_78 = 0;
              uStack_70 = 0;
              uStack_6c = 0;
              auStack_68 = SUB1612((undefined1  [16])0x0,0);
              local_5c = 0;
              HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
              ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
                       SUB81((TextureState *)&local_158,0));
              pTVar17 = (TextureInfo *)(local_160 + 0x20);
              _prepare_batch_texture_info
                        (param_1,*(undefined8 *)(lVar18 + 0x60),(TextureState *)&local_158,pTVar17);
            }
            if (*(TextureInfo **)(*param_11 + 0x10) != pTVar17) {
              pBVar16 = (Batch *)_new_batch(param_1,param_9);
              *param_11 = pBVar16;
              *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
            }
            lVar20 = new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,
                                       *param_8,uVar3,pTVar17);
            auVar52 = *(undefined1 (*) [16])(lVar18 + 0x14);
            if (*(long *)(lVar18 + 0x60) == 0) {
              uStack_1b0 = CONCAT44(_LC51._4_4_,(float)_LC51);
              local_1b8 = __LC65;
            }
            else if ((((*(float *)(lVar18 + 0x24) == 0.0) && (*(float *)(lVar18 + 0x28) == 0.0)) &&
                     (*(float *)(lVar18 + 0x2c) == 0.0)) && (*(float *)(lVar18 + 0x30) == 0.0)) {
              local_1b8 = __LC65;
              uStack_1b0 = CONCAT44(_LC51._4_4_,(float)_LC51);
            }
            else {
              local_1b8 = CONCAT44(*(float *)(lVar18 + 0x28) * *(float *)(pTVar17 + 0x34),
                                   *(float *)(lVar18 + 0x24) * *(float *)(pTVar17 + 0x30));
              uStack_1b0 = CONCAT44(*(float *)(lVar18 + 0x30) * *(float *)(pTVar17 + 0x34),
                                    (float)*(undefined8 *)(lVar18 + 0x2c) *
                                    *(float *)(pTVar17 + 0x30));
              auVar37._8_8_ = 0;
              auVar37._0_8_ = CONCAT44(_LC51._4_4_,(float)_LC51);
              auVar42._8_8_ = CONCAT44(_LC51._4_4_,(float)_LC51);
              auVar42._0_8_ = *(undefined8 *)(lVar18 + 0x2c);
              auVar38 = divps(auVar37,auVar42);
              *(long *)(lVar20 + 0x68) = auVar38._0_8_;
            }
            Color::operator*((Color *)(lVar18 + 0x48),(Color *)local_148);
            fVar46 = _LC69;
            fVar40 = extraout_XMM1_Da_00;
            fVar33 = extraout_XMM0_Da_00;
            fVar48 = extraout_XMM0_Db_00;
            if (param_4 != 0) {
              if (_LC69 <= extraout_XMM1_Da_00) {
                fVar40 = powf((float)(((double)extraout_XMM1_Da_00 + __LC71) * __LC72),_LC73);
              }
              else {
                fVar40 = extraout_XMM1_Da_00 * __LC70;
              }
              if (fVar46 <= extraout_XMM0_Db_00) {
                fVar48 = powf((float)(((double)extraout_XMM0_Db_00 + __LC71) * __LC72),_LC73);
              }
              else {
                fVar48 = extraout_XMM0_Db_00 * __LC70;
              }
              if (fVar46 <= extraout_XMM0_Da_00) {
                fVar33 = powf((float)(((double)extraout_XMM0_Da_00 + __LC71) * __LC72),_LC73);
              }
              else {
                fVar33 = extraout_XMM0_Da_00 * __LC70;
              }
            }
            uVar27 = *(int *)(lVar18 + 0x58) << 9 | *(int *)(lVar18 + 0x5c) << 0xb |
                     *(uint *)(lVar20 + 0x18);
            cVar13 = *(char *)(lVar18 + 0x44);
            *(ulong *)(lVar20 + 0x20) = CONCAT44(fVar48,fVar33);
            *(ulong *)(lVar20 + 0x28) = CONCAT44(extraout_XMM1_Db_00,fVar40);
            *(uint *)(lVar20 + 0x18) = uVar27;
            *(undefined8 *)(lVar20 + 0x50) = local_1b8;
            *(undefined8 *)(lVar20 + 0x58) = uStack_1b0;
            *(undefined1 (*) [16])(lVar20 + 0x40) = auVar52;
            if (cVar13 != '\0') {
              *(uint *)(lVar20 + 0x18) = uVar27 | 0x100;
            }
            uVar1 = *(undefined4 *)(lVar18 + 0x38);
            uVar8 = *(undefined4 *)(lVar18 + 0x3c);
            uVar9 = *(undefined4 *)(lVar18 + 0x40);
            *(undefined4 *)(lVar20 + 0x30) = *(undefined4 *)(lVar18 + 0x34);
            *(undefined4 *)(lVar20 + 0x34) = uVar1;
            *(undefined4 *)(lVar20 + 0x38) = uVar8;
            *(undefined4 *)(lVar20 + 0x3c) = uVar9;
            goto LAB_001045c2;
          case 2:
            pBVar16 = (Batch *)_new_batch(param_1,param_9);
            *param_11 = pBVar16;
            *(undefined4 *)(pBVar16 + 0x48) = 2;
            pBVar16[0x5c] = (Batch)0x0;
            *(long *)(pBVar16 + 0x40) = lVar18;
            *(undefined4 *)(pBVar16 + 0x60) = 0;
            local_158 = *(undefined8 *)(lVar18 + 0x30);
            local_150 = local_1fc & 7 | (uint)param_4 << 6 | local_1f8 * 8 & 0x18;
            pTVar17 = (TextureInfo *)
                      HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                      ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                                *)(param_1 + 0xa30),(TextureState *)&local_158);
            if (pTVar17 == (TextureInfo *)0x0) {
              uStack_7c = 0;
              auStack_58 = SUB1612((undefined1  [16])0x0,4);
              uStack_78 = 0;
              uStack_70 = 0;
              uStack_6c = 0;
              auStack_68 = SUB1612((undefined1  [16])0x0,0);
              local_5c = 0;
              local_4c = 0;
              local_88 = 0;
              uStack_80 = 0;
              HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
              ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
                       SUB81((TextureState *)&local_158,0));
              pTVar17 = (TextureInfo *)(local_160 + 0x20);
              _prepare_batch_texture_info
                        (param_1,*(undefined8 *)(lVar18 + 0x30),(TextureState *)&local_158);
              pBVar16 = *param_11;
            }
            if (*(TextureInfo **)(pBVar16 + 0x10) != pTVar17) {
              pBVar16 = (Batch *)_new_batch(param_1,param_9);
              *param_11 = pBVar16;
              *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
            }
            uVar27 = *(uint *)(lVar18 + 0x14);
            if (uVar27 < 5) {
              *(ulong *)(*param_11 + 0x4c) =
                   CONCAT44(*(undefined4 *)(CSWTCH_860 + (ulong)uVar27 * 4),(uVar27 == 0) + 4);
              lVar20 = new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,
                                         *param_8,uVar3,pTVar17);
              fVar46 = _LC69;
              uVar1 = local_148._0_4_;
              uVar8 = local_148._4_4_;
              uVar9 = uStack_13c;
              fVar40 = (float)local_148._4_4_;
              fVar33 = (float)local_148._0_4_;
              fVar48 = fStack_140;
              if (param_4 != 0) {
                if (_LC69 <= fStack_140) {
                  fVar48 = powf((float)(((double)fStack_140 + __LC71) * __LC72),_LC73);
                }
                else {
                  fVar48 = fStack_140 * __LC70;
                }
                if (fVar46 <= (float)uVar8) {
                  fVar40 = powf((float)(((double)(float)uVar8 + __LC71) * __LC72),_LC73);
                }
                else {
                  fVar40 = (float)uVar8 * __LC70;
                }
                if (fVar46 <= (float)uVar1) {
                  fVar33 = powf((float)(((double)(float)uVar1 + __LC71) * __LC72),_LC73);
                }
                else {
                  fVar33 = (float)uVar1 * __LC70;
                }
              }
              auVar47._12_4_ = uVar9;
              auVar47._8_4_ = fVar48;
              auVar47._4_4_ = fVar40;
              auVar47._0_4_ = fVar33;
              *(undefined1 (*) [16])(lVar20 + 0x20) = auVar47;
              goto LAB_001045c2;
            }
            _err_print_error("_record_item_commands",
                             "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0xa3a,
                             "Condition \"polygon->primitive < 0 || polygon->primitive >= RenderingServer::PRIMITIVE_MAX\" is true. Continuing."
                             ,0);
LAB_00105ba0:
            iVar23 = *(int *)(lVar18 + 0x10);
            break;
          case 3:
            if ((*(int *)(lVar18 + 0x14) != *(int *)(*param_11 + 0x58)) ||
               (*(int *)(*param_11 + 0x48) != 3)) {
              pBVar16 = (Batch *)_new_batch(param_1,param_9);
              iVar23 = *(int *)(lVar18 + 0x14);
              *param_11 = pBVar16;
              *(undefined4 *)(pBVar16 + 0x48) = 3;
              pBVar16[0x5c] = (Batch)0x0;
              *(long *)(pBVar16 + 0x40) = lVar18;
              *(int *)(pBVar16 + 0x58) = iVar23;
              *(undefined4 *)(pBVar16 + 0x60) = 0;
              if (3 < iVar23 - 1U) {
                _err_print_error("_record_item_commands",
                                 "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0xa59
                                 ,
                                 "Condition \"primitive->point_count == 0 || primitive->point_count > 4\" is true. Continuing."
                                 ,0);
                goto LAB_00105ba0;
              }
              if (iVar23 == 2) {
                *(undefined8 *)(pBVar16 + 0x4c) = _LC82;
              }
              else if (iVar23 - 3U < 2) {
                *(undefined8 *)(pBVar16 + 0x4c) = _LC80;
              }
              else {
                *(undefined8 *)(pBVar16 + 0x4c) = 3;
              }
            }
            local_158 = *(undefined8 *)(lVar18 + 0x98);
            local_150 = local_1fc & 7 | (uint)param_4 << 6 | local_1f8 * 8 & 0x18;
            pTVar17 = (TextureInfo *)
                      HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                      ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                                *)(param_1 + 0xa30),(TextureState *)&local_158);
            if (pTVar17 == (TextureInfo *)0x0) {
              uStack_7c = 0;
              auStack_58 = SUB1612((undefined1  [16])0x0,4);
              local_4c = 0;
              local_88 = 0;
              uStack_80 = 0;
              uStack_78 = 0;
              uStack_70 = 0;
              uStack_6c = 0;
              auStack_68 = SUB1612((undefined1  [16])0x0,0);
              local_5c = 0;
              HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
              ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
                       SUB81((TextureState *)&local_158,0));
              pTVar17 = (TextureInfo *)(local_160 + 0x20);
              _prepare_batch_texture_info
                        (param_1,*(undefined8 *)(lVar18 + 0x98),(TextureState *)&local_158,pTVar17);
            }
            if (*(TextureInfo **)(*param_11 + 0x10) != pTVar17) {
              pBVar16 = (Batch *)_new_batch(param_1,param_9);
              *param_11 = pBVar16;
              *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
            }
            lVar20 = new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,
                                       *param_8,uVar3,pTVar17);
            if (*(int *)(lVar18 + 0x14) != 0) {
              this = (Color *)(lVar18 + 0x58);
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar20 + 0x20 + lVar25 * 8) =
                     *(undefined8 *)(lVar18 + 0x18 + lVar25 * 8);
                *(undefined8 *)(lVar20 + 0x38 + lVar25 * 8) =
                     *(undefined8 *)(lVar18 + 0x38 + lVar25 * 8);
                auVar53 = Color::operator*(this,(Color *)local_148);
                auVar38._0_8_ = auVar53._8_8_;
                auVar52._0_8_ = auVar53._0_8_;
                auVar38._8_8_ = extraout_XMM1_Qb;
                auVar52._8_8_ = extraout_XMM0_Qb;
                uVar28 = (long)auVar38._0_8_ >> 0x20;
                fVar46 = auVar53._4_4_;
                if (param_4 != 0) {
                  fVar40 = auVar53._8_4_;
                  auVar43 = auVar38._4_12_;
                  if (_LC69 <= fVar40) {
                    fVar40 = powf((float)(((double)fVar40 + __LC71) * __LC72),_LC73);
                    auVar52 = ZEXT416(auVar53._0_4_);
                    auVar38._4_4_ = 0;
                    auVar38._0_4_ = fVar40;
                    auVar38._8_4_ = (int)extraout_XMM0_Qb_02;
                    auVar38._12_4_ = (int)((ulong)extraout_XMM0_Qb_02 >> 0x20);
                  }
                  else {
                    auVar38._0_4_ = fVar40 * __LC70;
                    auVar38._4_12_ = auVar43;
                  }
                  uVar27 = auVar38._0_4_;
                  fVar40 = auVar52._0_4_;
                  if (_LC69 <= fVar46) {
                    fVar46 = powf((float)(((double)fVar46 + __LC71) * __LC72),_LC73);
                    auVar52 = ZEXT416((uint)fVar40);
                    auVar38 = ZEXT416(uVar27);
                  }
                  else {
                    fVar46 = fVar46 * __LC70;
                  }
                  if (_LC69 <= fVar40) {
                    fVar40 = powf((float)(((double)auVar52._0_4_ + __LC71) * __LC72),_LC73);
                    auVar38 = ZEXT416(uVar27);
                    auVar52._4_4_ = 0;
                    auVar52._0_4_ = fVar40;
                    auVar52._8_4_ = (int)extraout_XMM0_Qb_01;
                    auVar52._12_4_ = (int)((ulong)extraout_XMM0_Qb_01 >> 0x20);
                  }
                  else {
                    auVar52._0_4_ = auVar52._0_4_ * __LC70;
                  }
                }
                uVar27 = (uint)fVar46 & 0x7f800000;
                if (uVar27 < 0x47800000) {
                  uVar31 = 0;
                  if (0x38000000 < uVar27) {
                    uVar31 = (((uint)fVar46 >> 0x1f) << 0xf | ((uint)fVar46 & 0x7fffff) >> 0xd |
                             uVar27 + 0xc8000000 >> 0xd) << 0x10;
                  }
                }
                else {
                  if ((((uint)fVar46 & 0x7fffff) == 0) || (uVar27 != 0x7f800000)) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0x3ff;
                  }
                  uVar31 = (((uint)fVar46 >> 0x1f) << 0xf | uVar27 | 0x7c00) << 0x10;
                }
                uVar27 = auVar52._0_4_;
                uVar15 = uVar27 & 0x7f800000;
                if (uVar15 < 0x47800000) {
                  if (0x38000000 < uVar15) {
                    uVar31 = uVar31 | (uVar27 >> 0x1f) << 0xf | (uVar27 & 0x7fffff) >> 0xd |
                                      uVar15 + 0xc8000000 >> 0xd & 0xffff;
                  }
                }
                else {
                  if (((auVar52 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                     (uVar22 = 0x3ff, uVar15 != 0x7f800000)) {
                    uVar22 = 0;
                  }
                  uVar31 = uVar31 | (ushort)((ushort)((uVar27 >> 0x1f) << 0xf) | uVar22 | 0x7c00);
                }
                uVar15 = auVar53._12_4_ & 0x7f800000;
                *(uint *)(lVar20 + 0x50 + lVar25 * 8) = uVar31;
                uVar27 = (uint)(uVar28 >> 0x1f) & 1;
                if (uVar15 < 0x47800000) {
                  uVar31 = 0;
                  if (0x38000000 < uVar15) {
                    uVar31 = (uVar27 << 0xf | (auVar53._12_4_ & 0x7fffff) >> 0xd |
                             uVar15 + 0xc8000000 >> 0xd) << 0x10;
                  }
                }
                else {
                  if (((uVar28 & 0x7fffff) == 0) || (uVar15 != 0x7f800000)) {
                    uVar31 = 0;
                  }
                  else {
                    uVar31 = 0x3ff;
                  }
                  uVar31 = (uVar27 << 0xf | uVar31 | 0x7c00) << 0x10;
                }
                uVar27 = auVar38._0_4_;
                uVar15 = uVar27 & 0x7f800000;
                if (uVar15 < 0x47800000) {
                  if (0x38000000 < uVar15) {
                    uVar31 = uVar31 | uVar15 + 0xc8000000 >> 0xd & 0xffff |
                                      (uVar27 >> 0x1f) << 0xf | (uVar27 & 0x7fffff) >> 0xd;
                  }
                }
                else {
                  if (((auVar38 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                     (uVar22 = 0x3ff, uVar15 != 0x7f800000)) {
                    uVar22 = 0;
                  }
                  uVar31 = uVar31 | (ushort)((ushort)((uVar27 >> 0x1f) << 0xf) | uVar22 | 0x7c00);
                }
                uVar27 = *(uint *)(lVar18 + 0x14);
                *(uint *)(lVar20 + 0x54 + lVar25 * 8) = uVar31;
                this = this + 0x10;
                lVar25 = lVar25 + 1;
                if (3 < uVar27) {
                  uVar27 = 3;
                }
              } while ((uint)lVar25 < uVar27);
            }
            _add_to_batch(param_1,param_8,param_9,param_11);
            if (*(int *)(lVar18 + 0x14) == 4) {
              lVar20 = new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,
                                         *param_8,uVar3,pTVar17);
              lVar25 = 0;
              do {
                uVar28 = (ulong)(((int)lVar25 + 1) - (uint)((int)lVar25 == 0));
                *(undefined8 *)(lVar20 + 0x20 + lVar25 * 8) =
                     *(undefined8 *)(lVar18 + 0x18 + uVar28 * 8);
                *(undefined8 *)(lVar20 + 0x38 + lVar25 * 8) =
                     *(undefined8 *)(lVar18 + 0x38 + uVar28 * 8);
                auVar52 = Color::operator*((Color *)(lVar18 + 0x58 + uVar28 * 0x10),
                                           (Color *)local_148);
                auVar41._0_8_ = auVar52._8_8_;
                auVar53._0_8_ = auVar52._0_8_;
                auVar41._8_8_ = extraout_XMM1_Qb_00;
                auVar53._8_8_ = extraout_XMM0_Qb_00;
                uVar28 = (long)auVar41._0_8_ >> 0x20;
                fVar46 = auVar52._4_4_;
                if (param_4 != 0) {
                  fVar40 = auVar52._8_4_;
                  auVar43 = auVar41._4_12_;
                  if (_LC69 <= fVar40) {
                    fVar40 = powf((float)(((double)fVar40 + __LC71) * __LC72),_LC73);
                    auVar53 = ZEXT416(auVar52._0_4_);
                    auVar41._4_4_ = 0;
                    auVar41._0_4_ = fVar40;
                    auVar41._8_4_ = (int)extraout_XMM0_Qb_04;
                    auVar41._12_4_ = (int)((ulong)extraout_XMM0_Qb_04 >> 0x20);
                  }
                  else {
                    auVar41._0_4_ = fVar40 * __LC70;
                    auVar41._4_12_ = auVar43;
                  }
                  if (_LC69 <= fVar46) {
                    fVar46 = powf((float)(((double)fVar46 + __LC71) * __LC72),_LC73);
                    auVar41 = ZEXT416(auVar41._0_4_);
                    auVar53 = ZEXT416(auVar53._0_4_);
                  }
                  else {
                    fVar46 = fVar46 * __LC70;
                  }
                  fVar40 = auVar53._0_4_;
                  if (_LC69 <= fVar40) {
                    fVar40 = powf((float)(((double)fVar40 + __LC71) * __LC72),_LC73);
                    auVar41 = ZEXT416(auVar41._0_4_);
                    auVar53._4_4_ = 0;
                    auVar53._0_4_ = fVar40;
                    auVar53._8_4_ = (int)extraout_XMM0_Qb_03;
                    auVar53._12_4_ = (int)((ulong)extraout_XMM0_Qb_03 >> 0x20);
                  }
                  else {
                    auVar53._0_4_ = fVar40 * __LC70;
                  }
                }
                uVar27 = (uint)fVar46 & 0x7f800000;
                if (uVar27 < 0x47800000) {
                  uVar31 = 0;
                  if (0x38000000 < uVar27) {
                    uVar31 = (uVar27 + 0xc8000000 >> 0xd |
                             ((uint)fVar46 >> 0x1f) << 0xf | ((uint)fVar46 & 0x7fffff) >> 0xd) <<
                             0x10;
                  }
                }
                else {
                  if ((((uint)fVar46 & 0x7fffff) == 0) || (uVar27 != 0x7f800000)) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0x3ff;
                  }
                  uVar31 = (((uint)fVar46 >> 0x1f) << 0xf | uVar27 | 0x7c00) << 0x10;
                }
                uVar27 = auVar53._0_4_;
                uVar15 = uVar27 & 0x7f800000;
                if (uVar15 < 0x47800000) {
                  if (0x38000000 < uVar15) {
                    uVar31 = uVar31 | uVar15 + 0xc8000000 >> 0xd & 0xffff |
                                      (uVar27 >> 0x1f) << 0xf | (uVar27 & 0x7fffff) >> 0xd;
                  }
                }
                else {
                  if (((auVar53 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                     (uVar22 = 0x3ff, uVar15 != 0x7f800000)) {
                    uVar22 = 0;
                  }
                  uVar31 = uVar31 | (ushort)((ushort)((uVar27 >> 0x1f) << 0xf) | uVar22 | 0x7c00);
                }
                uVar15 = auVar52._12_4_ & 0x7f800000;
                *(uint *)(lVar20 + 0x50 + lVar25 * 8) = uVar31;
                uVar27 = (uint)(uVar28 >> 0x1f) & 1;
                if (uVar15 < 0x47800000) {
                  uVar31 = 0;
                  if (0x38000000 < uVar15) {
                    uVar31 = (uVar27 << 0xf | (auVar52._12_4_ & 0x7fffff) >> 0xd |
                             uVar15 + 0xc8000000 >> 0xd) << 0x10;
                  }
                }
                else {
                  if (((uVar28 & 0x7fffff) == 0) || (uVar15 != 0x7f800000)) {
                    uVar31 = 0;
                  }
                  else {
                    uVar31 = 0x3ff;
                  }
                  uVar31 = (uVar27 << 0xf | uVar31 | 0x7c00) << 0x10;
                }
                uVar27 = auVar41._0_4_;
                uVar15 = uVar27 & 0x7f800000;
                if (uVar15 < 0x47800000) {
                  if (0x38000000 < uVar15) {
                    uVar31 = uVar31 | uVar15 + 0xc8000000 >> 0xd & 0xffff |
                                      (uVar27 >> 0x1f) << 0xf | (uVar27 & 0x7fffff) >> 0xd;
                  }
                }
                else {
                  if (((auVar41 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                     (uVar22 = 0x3ff, uVar15 != 0x7f800000)) {
                    uVar22 = 0;
                  }
                  uVar31 = uVar31 | (ushort)((ushort)((uVar27 >> 0x1f) << 0xf) | uVar22 | 0x7c00);
                }
                *(uint *)(lVar20 + 0x54 + lVar25 * 8) = uVar31;
                lVar25 = lVar25 + 1;
              } while (lVar25 != 3);
              goto LAB_001045c2;
            }
            goto switchD_00103573_default;
          case 4:
          case 5:
          case 6:
            pBVar16 = (Batch *)_new_batch(param_1,param_9);
            local_128._4_4_ = (float)_LC51;
            *param_11 = pBVar16;
            *(long *)(pBVar16 + 0x40) = lVar18;
            iVar23 = *(int *)(lVar18 + 0x10);
            pBVar16[0x5c] = (Batch)0x0;
            *(int *)(pBVar16 + 0x48) = iVar23;
            *(undefined4 *)(pBVar16 + 0x60) = 0;
            local_128._0_4_ = local_128._4_4_;
            fStack_120 = (float)local_128._4_4_;
            fStack_11c = (float)local_128._4_4_;
            if (iVar23 == 4) {
              local_158 = *(undefined8 *)(lVar18 + 0x50);
              local_150 = local_1fc & 7 | (uint)param_4 << 6 | local_1f8 * 8 & 0x18;
              pTVar17 = (TextureInfo *)
                        HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                        ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                                  *)(param_1 + 0xa30),(TextureState *)&local_158);
              if (pTVar17 == (TextureInfo *)0x0) {
                uStack_7c = 0;
                auStack_58 = SUB1612((undefined1  [16])0x0,4);
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_6c = 0;
                auStack_68 = SUB1612((undefined1  [16])0x0,0);
                local_5c = 0;
                local_4c = 0;
                local_88 = 0;
                uStack_80 = 0;
                HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
                         SUB81((TextureState *)&local_158,0));
                pTVar17 = (TextureInfo *)(local_160 + 0x20);
                _prepare_batch_texture_info
                          (param_1,*(undefined8 *)(lVar18 + 0x50),(TextureState *)&local_158,pTVar17
                          );
                pBVar16 = *param_11;
              }
              *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
              puVar21 = (undefined8 *)
                        new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,
                                          *param_8,uVar3,pTVar17);
              *(undefined4 *)(pBVar16 + 0x58) = 1;
              Transform2D::operator*((Transform2D *)local_a8,(Transform2D *)&local_108);
              Transform2D::operator*((Transform2D *)&local_88,(Transform2D *)local_a8);
              *puVar21 = local_88;
              puVar21[1] = CONCAT44(uStack_7c,uStack_80);
              puVar21[2] = uStack_78;
              _local_128 = *(undefined1 (*) [16])(lVar18 + 0x38);
            }
            else if (iVar23 == 5) {
              lVar20 = RendererRD::MeshStorage::get_singleton();
              uVar28 = *(ulong *)(lVar18 + 0x18);
              if ((uVar28 == 0) || (*(uint *)(lVar20 + 0x19c) <= (uint)uVar28)) {
LAB_00105ed4:
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              lVar25 = ((uVar28 & 0xffffffff) % (ulong)*(uint *)(lVar20 + 0x198)) * 0x160 +
                       *(long *)(*(long *)(lVar20 + 0x188) +
                                ((uVar28 & 0xffffffff) / (ulong)*(uint *)(lVar20 + 0x198)) * 8);
              iVar23 = *(int *)(lVar25 + 0x158);
              if (iVar23 != (int)(uVar28 >> 0x20)) {
                if (iVar23 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                goto LAB_00105ed4;
              }
              if (*(int *)(lVar25 + 0xc) != 0) goto switchD_00103573_default;
              if (*(uint *)(lVar20 + 0x19c) <= (uint)uVar28) {
LAB_00119894:
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              lVar25 = ((uVar28 & 0xffffffff) % (ulong)*(uint *)(lVar20 + 0x198)) * 0x160 +
                       *(long *)(*(long *)(lVar20 + 0x188) +
                                ((uVar28 & 0xffffffff) / (ulong)*(uint *)(lVar20 + 0x198)) * 8);
              if (iVar23 != *(int *)(lVar25 + 0x158)) {
                if (*(int *)(lVar25 + 0x158) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,lVar25);
                }
                goto LAB_00119894;
              }
              iVar23 = *(int *)(lVar25 + 0x14);
              if (iVar23 < 0) {
                iVar23 = *(int *)(lVar25 + 8);
              }
              pBVar16 = *param_11;
              *(int *)(*param_11 + 0x58) = iVar23;
              if (*(int *)(pBVar16 + 0x58) == 0) goto switchD_00103573_default;
              local_158 = *(undefined8 *)(lVar18 + 0x20);
              local_150 = local_1fc & 7 | (uint)param_4 << 6 | local_1f8 * 8 & 0x18;
              pTVar17 = (TextureInfo *)
                        HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                        ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                                  *)(param_1 + 0xa30),(TextureState *)&local_158);
              if (pTVar17 == (TextureInfo *)0x0) {
                uStack_7c = 0;
                auStack_58 = SUB1612((undefined1  [16])0x0,4);
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_6c = 0;
                auStack_68 = SUB1612((undefined1  [16])0x0,0);
                local_5c = 0;
                local_4c = 0;
                local_88 = 0;
                uStack_80 = 0;
                HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
                         SUB81((TextureState *)&local_158,0));
                pTVar17 = (TextureInfo *)(local_160 + 0x20);
                _prepare_batch_texture_info
                          (param_1,*(undefined8 *)(lVar18 + 0x20),(TextureState *)&local_158,pTVar17
                          );
                pBVar16 = *param_11;
              }
              *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
              uVar29 = (ulong)*param_8;
              puVar21 = (undefined8 *)
                        new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,
                                          *param_8,uVar3,pTVar17);
              uVar28 = *(ulong *)(lVar18 + 0x18);
              *(uint *)(pBVar16 + 0x60) = *(uint *)(pBVar16 + 0x60) | 1;
              if ((uVar28 == 0) || (*(uint *)(lVar20 + 0x19c) <= (uint)uVar28)) {
LAB_001060e5:
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              lVar25 = ((uVar28 & 0xffffffff) % (ulong)*(uint *)(lVar20 + 0x198)) * 0x160 +
                       *(long *)(*(long *)(lVar20 + 0x188) +
                                ((uVar28 & 0xffffffff) / (ulong)*(uint *)(lVar20 + 0x198)) * 8);
              iVar23 = *(int *)(lVar25 + 0x158);
              if (iVar23 != (int)(uVar28 >> 0x20)) {
                if (iVar23 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,uVar29);
                }
                goto LAB_001060e5;
              }
              if (*(char *)(lVar25 + 0x10) != '\0') {
                *(uint *)(*param_11 + 0x60) = *(uint *)(*param_11 + 0x60) | 0x80;
              }
              uVar28 = *(ulong *)(lVar18 + 0x18);
              if ((uVar28 == 0) || (*(uint *)(lVar20 + 0x19c) <= (uint)uVar28)) {
LAB_00106263:
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              lVar20 = ((uVar28 & 0xffffffff) % (ulong)*(uint *)(lVar20 + 0x198)) * 0x160 +
                       *(long *)(*(long *)(lVar20 + 0x188) +
                                ((uVar28 & 0xffffffff) / (ulong)*(uint *)(lVar20 + 0x198)) * 8);
              iVar23 = *(int *)(lVar20 + 0x158);
              if (iVar23 != (int)(uVar28 >> 0x20)) {
                if (iVar23 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,uVar28 >> 0x20);
                }
                goto LAB_00106263;
              }
              if (*(char *)(lVar20 + 0x11) != '\0') {
                *(uint *)(*param_11 + 0x60) = *(uint *)(*param_11 + 0x60) | 0x100;
              }
            }
            else {
              puVar21 = (undefined8 *)0x0;
              if (iVar23 == 6) {
                plVar19 = (long *)RendererRD::TextureStorage::get_singleton();
                lVar20 = RendererRD::ParticlesStorage::get_singleton();
                local_158 = *(undefined8 *)(lVar18 + 0x20);
                local_150 = local_1fc & 7 | (uint)param_4 << 6 | local_1f8 * 8 & 0x18;
                pTVar17 = (TextureInfo *)
                          HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                          ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                                    *)(param_1 + 0xa30),(TextureState *)&local_158);
                puVar30 = &local_88;
                if (pTVar17 == (TextureInfo *)0x0) {
                  uStack_7c = 0;
                  auStack_58 = SUB1612((undefined1  [16])0x0,4);
                  uStack_78 = 0;
                  uStack_70 = 0;
                  uStack_6c = 0;
                  auStack_68 = SUB1612((undefined1  [16])0x0,0);
                  local_5c = 0;
                  local_4c = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                  ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
                           SUB81((TextureState *)&local_158,0));
                  pTVar17 = (TextureInfo *)(local_160 + 0x20);
                  _prepare_batch_texture_info
                            (param_1,*(undefined8 *)(lVar18 + 0x20),(TextureState *)&local_158,
                             pTVar17);
                }
                pBVar16 = *param_11;
                *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
                puVar21 = (undefined8 *)
                          new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,
                                            *param_8,uVar3,pTVar17);
                uVar28 = *(ulong *)(lVar18 + 0x18);
                if ((uVar28 == 0) || (*(uint *)(lVar20 + 0x91c) <= (uint)uVar28)) {
LAB_00105d6c:
                  _err_print_error("particles_get_amount",
                                   "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",
                                   0x1fa,"Parameter \"particles\" is null.",0);
                  uVar27 = 1;
                  iVar23 = 0;
                  uVar28 = 1;
                }
                else {
                  lVar25 = ((uVar28 & 0xffffffff) % (ulong)*(uint *)(lVar20 + 0x918)) * 0x2f8 +
                           *(long *)(*(long *)(lVar20 + 0x908) +
                                    ((uVar28 & 0xffffffff) / (ulong)*(uint *)(lVar20 + 0x918)) * 8);
                  if (*(int *)(lVar25 + 0x2f0) != (int)(uVar28 >> 0x20)) {
                    if (*(int *)(lVar25 + 0x2f0) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00105d6c;
                  }
                  if (((*(char *)(lVar25 + 0x2c8) == '\0') || (*(long *)(lVar25 + 0xb8) == 0)) ||
                     (uVar29 = *(ulong *)(*(long *)(lVar25 + 0xb8) + -8), (long)uVar29 < 2)) {
                    uVar27 = 1;
                    uVar28 = 1;
                  }
                  else {
                    uVar28 = uVar29 & 0xffffffff;
                    uVar27 = (uint)uVar29 & 0x7f;
                  }
                  iVar23 = *(int *)(lVar25 + 0x14) * (int)uVar28;
                }
                pBVar5 = *param_11;
                *(int *)(pBVar16 + 0x58) = iVar23;
                uVar29 = *(ulong *)(lVar18 + 0x18);
                *(int *)(pBVar5 + 0x58) = (int)(*(uint *)(pBVar5 + 0x58) / uVar28);
                *(uint *)(pBVar5 + 0x60) = uVar27 | *(uint *)(pBVar5 + 0x60) | 0x180;
                iVar23 = (int)(uVar29 >> 0x20);
                if ((uVar29 == 0) || (*(uint *)(lVar20 + 0x91c) <= (uint)uVar29)) {
LAB_00105dfd:
                  _err_print_error("particles_has_collision",
                                   "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",
                                   0x207,"Parameter \"particles\" is null.",0);
LAB_00105e2c:
                  local_88 = 0x3f800000;
                  uStack_80 = 0;
                  uStack_7c = 0x3f800000;
                  local_a8[0]._0_8_ = 0;
                  local_a8[0]._8_8_ = 0;
                  uStack_78 = 0;
                  RendererRD::ParticlesStorage::particles_set_canvas_sdf_collision
                            (lVar20,*(undefined8 *)(lVar18 + 0x18),0,puVar30,local_a8);
                  if (uVar29 != 0) goto LAB_00105b1f;
LAB_00105e99:
                  _err_print_error("particles_has_collision",
                                   "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",
                                   0x207,"Parameter \"particles\" is null.",0);
                  bVar14 = 0;
                }
                else {
                  lVar25 = ((uVar29 & 0xffffffff) % (ulong)*(uint *)(lVar20 + 0x918)) * 0x2f8 +
                           *(long *)(*(long *)(lVar20 + 0x908) +
                                    ((uVar29 & 0xffffffff) / (ulong)*(uint *)(lVar20 + 0x918)) * 8);
                  iVar4 = *(int *)(lVar25 + 0x2f0);
                  if (iVar4 != iVar23) {
                    if (iVar4 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00105dfd;
                  }
                  if (*(char *)(lVar25 + 0x51) == '\0') goto LAB_00105e2c;
                  cVar13 = RendererRD::TextureStorage::render_target_is_sdf_enabled(plVar19,param_3)
                  ;
                  if (cVar13 == '\0') goto LAB_00105e2c;
                  local_88 = *(undefined8 *)(param_2 + 0xa0);
                  uStack_78 = *(undefined8 *)(param_2 + 0xb0);
                  uStack_80 = (undefined4)*(undefined8 *)(param_2 + 0xa8);
                  uStack_7c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xa8) >> 0x20);
                  RendererRD::TextureStorage::render_target_get_sdf_texture(plVar19,param_3);
                  local_118 = 0;
                  uStack_110 = 0;
                  auVar52 = (**(code **)(*plVar19 + 0x2b0))(plVar19,param_3);
                  local_a8[0] = auVar52;
                  auVar52 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_a8);
                  fVar46 = (float)_LC51 / auVar52._8_4_;
                  fVar40 = (float)_LC51 / auVar52._12_4_;
                  uStack_110 = CONCAT44(fVar40,fVar46);
                  local_118 = CONCAT44((float)(auVar52._4_4_ ^ _LC75) * fVar40,
                                       (float)(auVar52._0_4_ ^ _LC75) * fVar46);
                  RendererRD::ParticlesStorage::particles_set_canvas_sdf_collision
                            (lVar20,*(undefined8 *)(lVar18 + 0x18),1,puVar30,&local_118);
LAB_00105b1f:
                  if (*(uint *)(lVar20 + 0x91c) <= (uint)uVar29) goto LAB_00105e99;
                  lVar20 = ((uVar29 & 0xffffffff) % (ulong)*(uint *)(lVar20 + 0x918)) * 0x2f8 +
                           *(long *)(*(long *)(lVar20 + 0x908) +
                                    ((uVar29 & 0xffffffff) / (ulong)*(uint *)(lVar20 + 0x918)) * 8);
                  iVar4 = *(int *)(lVar20 + 0x2f0);
                  if (iVar4 != iVar23) {
                    if (iVar4 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00105e99;
                  }
                  bVar14 = *(byte *)(lVar20 + 0x51);
                }
                *param_10 = *param_10 | bVar14;
              }
            }
            Color::operator*((Color *)local_128,(Color *)local_148);
            fVar46 = _LC69;
            fVar40 = extraout_XMM1_Da;
            fVar33 = extraout_XMM0_Da;
            fVar48 = extraout_XMM0_Db;
            if (param_4 != 0) {
              if (_LC69 <= extraout_XMM1_Da) {
                fVar40 = powf((float)(((double)extraout_XMM1_Da + __LC71) * __LC72),_LC73);
              }
              else {
                fVar40 = extraout_XMM1_Da * __LC70;
              }
              if (fVar46 <= extraout_XMM0_Db) {
                fVar48 = powf((float)(((double)extraout_XMM0_Db + __LC71) * __LC72),_LC73);
              }
              else {
                fVar48 = extraout_XMM0_Db * __LC70;
              }
              if (fVar46 <= extraout_XMM0_Da) {
                fVar33 = powf((float)(((double)extraout_XMM0_Da + __LC71) * __LC72),_LC73);
              }
              else {
                fVar33 = extraout_XMM0_Da * __LC70;
              }
            }
            puVar21[4] = CONCAT44(fVar48,fVar33);
            puVar21[5] = CONCAT44(extraout_XMM1_Db,fVar40);
            goto LAB_001045c2;
          case 7:
            local_c8 = *(undefined1 (*) [16])(lVar18 + 0x14);
            local_b8 = *(undefined8 *)(lVar18 + 0x24);
            Transform2D::operator*((Transform2D *)&local_88,(Transform2D *)&local_108);
            local_e8._8_4_ = uStack_80;
            local_e8._0_8_ = local_88;
            local_e8._12_4_ = uStack_7c;
            local_d8 = uStack_78;
            goto switchD_00103573_default;
          case 8:
            if ((*param_6 != 0) && (*(char *)(lVar18 + 0x14) != local_1c1)) {
              pBVar16 = (Batch *)_new_batch(param_1,param_9);
              local_1c1 = *(char *)(lVar18 + 0x14);
              *param_11 = pBVar16;
              if (local_1c1 == '\0') {
                bVar7 = false;
                *(long *)(pBVar16 + 0x28) = *param_6;
              }
              else {
                *(undefined8 *)(pBVar16 + 0x28) = 0;
              }
            }
            goto switchD_00103573_default;
          case 9:
            goto switchD_00103573_caseD_9;
          default:
            goto switchD_00103573_default;
          }
        } while( true );
      }
      while (iVar23 != 9) {
        lVar18 = *(long *)(lVar18 + 8);
        if (lVar18 == 0) goto LAB_0010363a;
        iVar23 = *(int *)(lVar18 + 0x10);
      }
switchD_00103573_caseD_9:
      dVar34 = (double)(**(code **)(*RenderingServerGlobals::rasterizer + 0x98))();
      dVar34 = dVar34 - *(double *)(lVar18 + 0x30);
      dVar35 = *(double *)(lVar18 + 0x18);
      dVar36 = dVar34;
      do {
        dVar36 = dVar36 - (dVar36 / dVar35) * dVar35;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(dVar36)) {
        fmod(dVar34,dVar35);
LAB_0010361c:
        bVar7 = true;
      }
      else {
        if (dVar36 < 0.0) {
          if (0.0 < dVar35) goto LAB_001047b2;
        }
        else if ((0.0 < dVar36) && (dVar35 < 0.0)) {
LAB_001047b2:
          dVar36 = dVar36 + dVar35;
        }
        if (dVar36 + 0.0 < *(double *)(lVar18 + 0x20)) goto LAB_0010361c;
        bVar7 = *(double *)(lVar18 + 0x28) <= dVar36 + 0.0;
      }
      lVar18 = *(long *)(lVar18 + 8);
      RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
      *param_9 = false;
    } while (lVar18 != 0);
LAB_0010363a:
    RVar26 = param_1[0x200bc0];
    goto joined_r0x001039df;
  }
  if (param_1[0x200bc0] == (RendererCanvasRenderRD)0x0) goto LAB_00103846;
  dVar35 = *(double *)(param_2 + 0x138);
  local_1c1 = '\0';
  if (dVar35 <= 0.0) goto LAB_00103846;
LAB_00103663:
  dVar36 = *(double *)(param_1 + 0x200bd8);
  pBVar16 = *param_11;
  fVar46 = *(float *)(param_1 + 0x200bd0);
  uVar1 = *(undefined4 *)(param_1 + 0x200bcc);
  uVar2 = *(undefined8 *)(param_1 + 0x200bc4);
  if (*(int *)(pBVar16 + 0x48) != 0) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    *param_11 = pBVar16;
    *(undefined8 *)(pBVar16 + 0x40) = 0;
    *(undefined8 *)(pBVar16 + 0x48) = 0;
    *(undefined4 *)(pBVar16 + 0x50) = 5;
    *(undefined4 *)(pBVar16 + 0x60) = 0;
  }
  if (pBVar16[0x54] != (Batch)0x0) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    *param_11 = pBVar16;
    pBVar16[0x54] = (Batch)0x0;
  }
  if (pBVar16[0x5c] != (Batch)0x0) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    *param_11 = pBVar16;
    pBVar16[0x5c] = (Batch)0x0;
  }
  local_158 = *(undefined8 *)(param_1 + 0x200b90);
  local_150 = local_1fc & 7 | (uint)param_4 << 6 | (local_1f8 & 3) << 3;
  pTVar17 = (TextureInfo *)
            HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
            ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                      *)(param_1 + 0xa30),(TextureState *)&local_158);
  if (pTVar17 == (TextureInfo *)0x0) {
    uStack_7c = 0;
    auStack_58 = SUB1612((undefined1  [16])0x0,4);
    local_4c = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    auStack_68 = SUB1612((undefined1  [16])0x0,0);
    local_5c = 0;
    HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
    ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
             SUB81((TextureState *)&local_158,0));
    pTVar17 = (TextureInfo *)(local_160 + 0x20);
    _prepare_batch_texture_info
              (param_1,*(undefined8 *)(param_1 + 0x200b90),(TextureState *)&local_158,pTVar17);
  }
  if (*(TextureInfo **)(*param_11 + 0x10) != pTVar17) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    *param_11 = pBVar16;
    *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
  }
  fVar44 = 0.0;
  local_e8._8_8_ = uStack_100;
  local_e8._0_8_ = local_108;
  local_d8 = local_f8;
  lVar18 = new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,*param_8,uVar3,
                             pTVar17);
  uVar12 = __LC65;
  fVar40 = *(float *)(param_2 + 0x60);
  fVar33 = *(float *)(param_2 + 0x58);
  fVar48 = *(float *)(param_2 + 0x5c);
  fVar45 = *(float *)(param_2 + 100);
  if (fVar40 < fVar44) {
    fVar33 = fVar33 + fVar40;
    fVar40 = (float)((uint)fVar40 ^ _LC75);
  }
  if (fVar45 < 0.0) {
    fVar48 = fVar48 + fVar45;
    fVar45 = (float)((uint)fVar45 ^ _LC75);
  }
  uVar10 = CONCAT44(_LC51._4_4_,(float)_LC51);
  *(undefined8 *)(lVar18 + 0x20) = uVar2;
  *(ulong *)(lVar18 + 0x28) = CONCAT44((float)((dVar35 / dVar36) * (double)fVar46),uVar1);
  *(undefined8 *)(lVar18 + 0x50) = uVar12;
  *(undefined8 *)(lVar18 + 0x58) = uVar10;
  *(ulong *)(lVar18 + 0x40) = CONCAT44(fVar48,fVar33);
  *(ulong *)(lVar18 + 0x48) = CONCAT44(fVar45,fVar40);
  _add_to_batch(param_1,param_8,param_9,param_11);
  dVar35 = (double)(**(code **)(*RenderingServerGlobals::rasterizer + 0x90))();
  RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
  *(double *)(param_2 + 0x138) = *(double *)(param_2 + 0x138) - dVar35;
  *param_9 = false;
  goto LAB_0010382d;
switchD_00103573_caseD_0:
  if (*(int *)(*param_11 + 0x48) != 0) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    *param_11 = pBVar16;
    *(long *)(pBVar16 + 0x40) = lVar18;
    *(undefined8 *)(pBVar16 + 0x48) = 0;
    *(undefined4 *)(pBVar16 + 0x50) = 5;
    *(undefined4 *)(pBVar16 + 0x60) = 0;
  }
  uVar27 = local_1f8 * 8 & 0x18;
  if ((*(byte *)(lVar18 + 0x44) & 2) != 0) {
    uVar27 = 0x10;
  }
  Color::operator*((Color *)(lVar18 + 0x24),(Color *)local_148);
  fVar46 = _LC69;
  fVar40 = extraout_XMM0_Db_01;
  fVar33 = extraout_XMM0_Da_01;
  fVar48 = extraout_XMM1_Da_01;
  if (param_4 != 0) {
    if (_LC69 <= extraout_XMM1_Da_01) {
      fVar48 = powf((float)(((double)extraout_XMM1_Da_01 + __LC71) * __LC72),_LC73);
    }
    else {
      fVar48 = extraout_XMM1_Da_01 * __LC70;
    }
    if (fVar46 <= extraout_XMM0_Db_01) {
      fVar40 = powf((float)(((double)extraout_XMM0_Db_01 + __LC71) * __LC72),_LC73);
    }
    else {
      fVar40 = extraout_XMM0_Db_01 * __LC70;
    }
    if (fVar46 <= extraout_XMM0_Da_01) {
      fVar33 = powf((float)(((double)extraout_XMM0_Da_01 + __LC71) * __LC72),_LC73);
    }
    else {
      fVar33 = extraout_XMM0_Da_01 * __LC70;
    }
  }
  uVar22 = *(ushort *)(lVar18 + 0x44);
  pBVar16 = *param_11;
  uVar24 = uVar22 & 0x100;
  if ((pBVar16[0x5c] != (Batch)(uVar24 != 0)) ||
     ((uVar24 != 0 &&
      (((fVar33 != *(float *)(pBVar16 + 0x18) || (fVar40 != *(float *)(pBVar16 + 0x1c))) ||
       ((fVar48 != *(float *)(pBVar16 + 0x20) || (extraout_XMM1_Db_01 != *(float *)(pBVar16 + 0x24))
        ))))))) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    uVar2 = _LC74;
    *param_11 = pBVar16;
    pBVar16[0x5c] = (Batch)(uVar24 != 0);
    *(undefined8 *)(pBVar16 + 0x4c) = uVar2;
    uVar22 = *(ushort *)(lVar18 + 0x44);
    *(ulong *)(pBVar16 + 0x18) = CONCAT44(fVar40,fVar33);
    *(ulong *)(pBVar16 + 0x20) = CONCAT44(extraout_XMM1_Db_01,fVar48);
  }
  local_158 = *(undefined8 *)(lVar18 + 0x50);
  local_150 = local_1fc & 7 | (uint)param_4 << 6 | uVar27 | (uint)((uVar22 & 0x80) != 0) << 5;
  pTVar17 = (TextureInfo *)
            HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
            ::getptr((HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
                      *)(param_1 + 0xa30),(TextureState *)&local_158);
  if (pTVar17 == (TextureInfo *)0x0) {
    uStack_7c = 0;
    auStack_58 = SUB1612((undefined1  [16])0x0,4);
    local_4c = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    auStack_68 = SUB1612((undefined1  [16])0x0,0);
    local_5c = 0;
    HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
    ::insert((TextureState *)&local_160,(TextureInfo *)(param_1 + 0xa30),
             SUB81((TextureState *)&local_158,0));
    pTVar17 = (TextureInfo *)(local_160 + 0x20);
    _prepare_batch_texture_info
              (param_1,*(undefined8 *)(lVar18 + 0x50),(TextureState *)&local_158,pTVar17);
  }
  if (*(TextureInfo **)(*param_11 + 0x10) != pTVar17) {
    pBVar16 = (Batch *)_new_batch(param_1,param_9);
    *param_11 = pBVar16;
    *(TextureInfo **)(pBVar16 + 0x10) = pTVar17;
  }
  lVar20 = new_instance_data(param_1,(float *)local_e8,(uint *)local_138,local_1c8,*param_8,uVar3,
                             pTVar17);
  fVar46 = (float)_LC51;
  fVar45 = (float)_LC51;
  if (*(long *)(lVar18 + 0x50) == 0) {
    fVar44 = *(float *)(lVar18 + 0x1c);
    fVar32 = *(float *)(lVar18 + 0x14);
    fVar50 = *(float *)(lVar18 + 0x18);
    fVar49 = *(float *)(lVar18 + 0x20);
    if (fVar44 < 0.0) {
      fVar32 = fVar32 + fVar44;
      fVar44 = (float)((uint)fVar44 ^ _LC75);
    }
    fVar39 = 0.0;
    if (fVar49 < 0.0) {
      fVar50 = fVar50 + fVar49;
      fVar51 = 0.0;
      fVar49 = (float)((uint)fVar49 ^ _LC75);
    }
    else {
      fVar51 = 0.0;
      fVar39 = 0.0;
    }
  }
  else {
    uVar24 = *(ushort *)(lVar18 + 0x44);
    if ((uVar24 & 1) == 0) {
      fVar51 = 0.0;
      fVar39 = 0.0;
    }
    else {
      fVar45 = *(float *)(lVar18 + 0x40) * *(float *)(pTVar17 + 0x34);
      fVar46 = *(float *)(lVar18 + 0x3c) * *(float *)(pTVar17 + 0x30);
      fVar51 = *(float *)(pTVar17 + 0x34) * *(float *)(lVar18 + 0x38);
      fVar39 = *(float *)(pTVar17 + 0x30) * *(float *)(lVar18 + 0x34);
    }
    fVar44 = *(float *)(lVar18 + 0x1c);
    fVar32 = *(float *)(lVar18 + 0x14);
    fVar50 = *(float *)(lVar18 + 0x18);
    fVar49 = *(float *)(lVar18 + 0x20);
    if (fVar44 < 0.0) {
      fVar32 = fVar32 + fVar44;
      fVar44 = (float)((uint)fVar44 ^ _LC75);
    }
    if (fVar49 < 0.0) {
      fVar50 = fVar50 + fVar49;
      fVar49 = (float)((uint)fVar49 ^ _LC75);
    }
    if ((uVar24 & 4) != 0) {
      fVar46 = (float)((uint)fVar46 ^ _LC75);
    }
    if ((uVar24 & 8) != 0) {
      fVar45 = (float)((uint)fVar45 ^ _LC75);
    }
    if ((uVar24 & 0x10) != 0) {
      *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | 0x20;
    }
    if ((uVar24 & 0x20) != 0) {
      *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | 0x10;
    }
  }
  if ((uVar22 & 0x80) == 0) {
    if ((*(byte *)(lVar18 + 0x45) & 1) != 0) {
      *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | 0x80;
    }
  }
  else {
    uVar2 = *(undefined8 *)(lVar18 + 0x48);
    *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | 0x40;
    *(undefined8 *)(lVar20 + 0x38) = 0;
    *(ulong *)(lVar20 + 0x30) = CONCAT44((int)uVar2,(int)((ulong)uVar2 >> 0x20));
  }
  auVar11._4_4_ = fVar40;
  auVar11._0_4_ = fVar33;
  auVar11._8_8_ = CONCAT44(extraout_XMM1_Db_01,fVar48);
  *(ulong *)(lVar20 + 0x40) = CONCAT44(fVar50,fVar32);
  *(ulong *)(lVar20 + 0x48) = CONCAT44(fVar49,fVar44);
  *(ulong *)(lVar20 + 0x50) = CONCAT44(fVar51,fVar39);
  *(ulong *)(lVar20 + 0x58) = CONCAT44(fVar45,fVar46);
  *(undefined1 (*) [16])(lVar20 + 0x20) = auVar11;
LAB_001045c2:
  _add_to_batch(param_1,param_8,param_9,param_11);
switchD_00103573_default:
  lVar18 = *(long *)(lVar18 + 8);
  *param_9 = false;
  if (lVar18 == 0) goto code_r0x001039d2;
  goto LAB_00103550;
code_r0x001039d2:
  RVar26 = param_1[0x200bc0];
joined_r0x001039df:
  if ((RVar26 != (RendererCanvasRenderRD)0x0) &&
     (dVar35 = *(double *)(param_2 + 0x138), 0.0 < dVar35)) goto LAB_00103663;
LAB_0010382d:
  if ((*param_6 != 0) && (local_1c1 != '\0')) {
    *param_6 = 0;
  }
LAB_00103846:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* RendererCanvasRenderRD::occluder_polygon_set_shape(RID, Vector<Vector2> const&, bool) */

void __thiscall
RendererCanvasRenderRD::occluder_polygon_set_shape
          (RendererCanvasRenderRD *this,ulong param_2,Vector *param_3,byte param_4)

{
  long *plVar1;
  undefined4 uVar2;
  void *__src;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  short sVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  size_t sVar16;
  ulong *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long in_FS_OFFSET;
  ulong *local_b0;
  undefined1 local_88 [8];
  undefined4 *local_80;
  undefined1 local_78 [8];
  undefined8 *local_70;
  Vector local_68 [8];
  long local_60;
  Vector local_58 [8];
  ulong *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c4))) {
    lVar21 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x7c0)) * 0x60 +
             *(long *)(*(long *)(this + 0x7b0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x7c0)) * 8);
    if (*(int *)(lVar21 + 0x58) == (int)(param_2 >> 0x20)) {
      lVar19 = *(long *)(param_3 + 8);
      if ((lVar19 == 0) || (*(long *)(lVar19 + -8) == 0)) {
LAB_00106830:
        if (*(long *)(lVar21 + 0x10) != 0) {
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x10));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 8));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x20));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x18));
          lVar19 = *(long *)(param_3 + 8);
          *(undefined4 *)(lVar21 + 4) = 0;
          *(undefined1 (*) [16])(lVar21 + 8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar21 + 0x18) = (undefined1  [16])0x0;
        }
        local_b0 = (ulong *)0x0;
      }
      else {
        iVar18 = (int)*(long *)(lVar19 + -8) * 2;
        uVar22 = (ulong)(int)(iVar18 + (uint)(param_4 ^ 1) * -2);
        if ((long)uVar22 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
          lVar19 = *(long *)(param_3 + 8);
          local_b0 = (ulong *)0x0;
        }
        else {
          iVar13 = iVar18 >> 1;
          if (uVar22 == 0) {
            if ((param_4 == 0) || (iVar18 != 2)) goto LAB_00106830;
            local_b0 = (ulong *)0x0;
            iVar18 = 1;
          }
          else {
            uVar20 = uVar22 * 8 - 1;
            uVar20 = uVar20 | uVar20 >> 1;
            uVar20 = uVar20 | uVar20 >> 2;
            uVar20 = uVar20 | uVar20 >> 4;
            uVar20 = uVar20 | uVar20 >> 8;
            uVar20 = uVar20 | uVar20 >> 0x10;
            puVar8 = (ulong *)Memory::alloc_static((uVar20 | uVar20 >> 0x20) + 0x11,false);
            if (puVar8 == (ulong *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              lVar19 = *(long *)(param_3 + 8);
              local_b0 = (ulong *)0x0;
            }
            else {
              puVar10 = puVar8 + 2;
              *puVar8 = 1;
              memset(puVar10,0,uVar22 * 8);
              puVar8[1] = uVar22;
              if (1 < *puVar8) {
                uVar22 = puVar8[1];
                uVar20 = 0x10;
                sVar16 = uVar22 * 8;
                if (sVar16 != 0) {
                  uVar20 = sVar16 - 1 | sVar16 - 1 >> 1;
                  uVar20 = uVar20 | uVar20 >> 2;
                  uVar20 = uVar20 | uVar20 >> 4;
                  uVar20 = uVar20 | uVar20 >> 8;
                  uVar20 = uVar20 | uVar20 >> 0x10;
                  uVar20 = (uVar20 | uVar20 >> 0x20) + 0x11;
                }
                puVar11 = (undefined8 *)Memory::alloc_static(uVar20,false);
                if (puVar11 != (undefined8 *)0x0) {
                  local_b0 = puVar11 + 2;
                  *puVar11 = 1;
                  puVar11[1] = uVar22;
                  memcpy(local_b0,puVar10,sVar16);
                  LOCK();
                  *puVar8 = *puVar8 - 1;
                  UNLOCK();
                  if (*puVar8 == 0) {
                    Memory::free_static(puVar8,false);
                  }
                  lVar19 = *(long *)(param_3 + 8);
                  goto joined_r0x0010688d;
                }
                _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              lVar19 = *(long *)(param_3 + 8);
              local_b0 = puVar10;
            }
joined_r0x0010688d:
            iVar18 = iVar13;
            if ((param_4 == 0) && (iVar18 = iVar13 + -1, iVar13 + -1 == 0)) goto LAB_00106537;
          }
          uVar22 = 1;
          puVar8 = local_b0;
          do {
            uVar15 = uVar22 + 1;
            uVar20 = *(ulong *)(lVar19 + (long)(int)((long)((ulong)(uint)((int)uVar22 >> 0x1f) <<
                                                            0x20 | uVar22 & 0xffffffff) %
                                                    (long)iVar13) * 8);
            *puVar8 = *(ulong *)(lVar19 + -8 + uVar22 * 8);
            puVar8[1] = uVar20;
            uVar22 = uVar15;
            puVar8 = puVar8 + 2;
          } while ((long)(iVar18 + 1) != uVar15);
        }
LAB_00106537:
        if (local_b0 == (ulong *)0x0) goto LAB_00106830;
        uVar22 = local_b0[-1];
        if ((long)*(int *)(lVar21 + 4) == uVar22) {
          if ((long)*(int *)(lVar21 + 4) != 0) goto LAB_00106a10;
          if (*(long *)(lVar21 + 0x10) != 0) goto LAB_0010699d;
        }
        else {
          if (*(long *)(lVar21 + 0x10) != 0) {
LAB_0010699d:
            uVar9 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x10));
            uVar9 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 8));
            uVar9 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x20));
            uVar9 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x18));
            *(undefined1 (*) [16])(lVar21 + 8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar21 + 0x18) = (undefined1  [16])0x0;
            uVar22 = local_b0[-1];
            *(int *)(lVar21 + 4) = (int)uVar22;
          }
          if (uVar22 != 0) {
LAB_00106a10:
            iVar18 = (int)uVar22;
            *(int *)(lVar21 + 4) = iVar18;
            local_80 = (undefined4 *)0x0;
            local_70 = (undefined8 *)0x0;
            CowData<unsigned_char>::resize<false>
                      ((CowData<unsigned_char> *)&local_80,(long)(iVar18 * 6) * 4);
            CowData<unsigned_char>::resize<false>
                      ((CowData<unsigned_char> *)&local_70,(long)(iVar18 * 6));
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
            puVar23 = local_80;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
            puVar4 = local_80;
            uVar3 = _LC96;
            uVar14 = _LC95;
            if (1 < iVar18) {
              sVar12 = 0;
              iVar13 = 0;
              puVar8 = local_b0;
              puVar11 = local_70;
              do {
                iVar13 = iVar13 + 1;
                *puVar23 = (int)*puVar8;
                uVar2 = *(undefined4 *)((long)puVar8 + 4);
                puVar23[2] = uVar14;
                puVar23[1] = uVar2;
                puVar23[3] = (int)puVar8[1];
                uVar2 = *(undefined4 *)((long)puVar8 + 0xc);
                puVar23[5] = uVar14;
                puVar23[4] = uVar2;
                puVar23[6] = (int)puVar8[1];
                uVar2 = *(undefined4 *)((long)puVar8 + 0xc);
                puVar23[8] = uVar3;
                puVar23[7] = uVar2;
                puVar23[9] = (int)*puVar8;
                uVar2 = *(undefined4 *)((long)puVar8 + 4);
                puVar23[0xb] = uVar3;
                puVar23[10] = uVar2;
                *puVar11 = CONCAT62(CONCAT42(CONCAT22(sVar12 + 2,sVar12 + 2),sVar12 + 1),sVar12);
                sVar6 = sVar12 + 3;
                *(short *)((long)puVar11 + 10) = sVar12;
                sVar12 = sVar12 + 4;
                *(short *)(puVar11 + 1) = sVar6;
                puVar8 = puVar8 + 2;
                puVar11 = (undefined8 *)((long)puVar11 + 0xc);
                puVar23 = puVar23 + 0xc;
              } while (iVar13 < (int)(((uint)(uVar22 >> 0x1f) & 1) + iVar18) >> 1);
            }
            if (*(long *)(lVar21 + 0x10) == 0) {
              uVar9 = RenderingDevice::get_singleton();
              uVar9 = RenderingDevice::vertex_buffer_create(uVar9,iVar18 * 0x18,local_88,0);
              *(undefined8 *)(lVar21 + 8) = uVar9;
              local_60 = 0;
              Vector<RID>::push_back((Vector<RID> *)local_68,*(undefined8 *)(lVar21 + 8));
              uVar7 = RenderingDevice::get_singleton();
              local_50[0] = (ulong *)0x0;
              uVar9 = RenderingDevice::vertex_array_create
                                (uVar7,(ulong)(uint)(iVar18 * 2),*(Vector **)(this + 0x9a0),local_68
                                );
              puVar8 = local_50[0];
              *(undefined8 *)(lVar21 + 0x10) = uVar9;
              if (local_50[0] != (ulong *)0x0) {
                LOCK();
                puVar10 = local_50[0] + -2;
                *puVar10 = *puVar10 - 1;
                UNLOCK();
                if (*puVar10 == 0) {
                  local_50[0] = (ulong *)0x0;
                  Memory::free_static(puVar8 + -2,false);
                }
              }
              uVar9 = RenderingDevice::get_singleton();
              uVar9 = RenderingDevice::index_buffer_create(uVar9,iVar18 * 3,0,local_78,0,0);
              *(undefined8 *)(lVar21 + 0x18) = uVar9;
              uVar9 = RenderingDevice::get_singleton();
              uVar9 = RenderingDevice::index_array_create
                                (uVar9,*(undefined8 *)(lVar21 + 0x18),0,iVar18 * 3);
              lVar19 = local_60;
              *(undefined8 *)(lVar21 + 0x20) = uVar9;
              if (local_60 != 0) {
                LOCK();
                plVar1 = (long *)(local_60 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar19 + -0x10),false);
                }
              }
            }
            else {
              uVar9 = RenderingDevice::get_singleton();
              if (local_80 == (undefined4 *)0x0) {
                uVar14 = 0;
              }
              else {
                uVar14 = local_80[-2];
              }
              RenderingDevice::buffer_update(uVar9,*(undefined8 *)(lVar21 + 8),0,uVar14,puVar4);
              puVar11 = local_70;
              uVar9 = RenderingDevice::get_singleton();
              if (local_70 == (undefined8 *)0x0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined4 *)(local_70 + -1);
              }
              RenderingDevice::buffer_update(uVar9,*(undefined8 *)(lVar21 + 0x18),0,uVar14,puVar11);
            }
            puVar11 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              LOCK();
              plVar1 = local_70 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = (undefined8 *)0x0;
                Memory::free_static(puVar11 + -2,false);
              }
            }
            puVar23 = local_80;
            if (local_80 != (undefined4 *)0x0) {
              LOCK();
              plVar1 = (long *)(local_80 + -4);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_80 = (undefined4 *)0x0;
                Memory::free_static(puVar23 + -4,false);
              }
            }
          }
          lVar19 = *(long *)(param_3 + 8);
        }
      }
      if (lVar19 == 0) {
        if (*(int *)(lVar21 + 0x2c) == 0) {
          if (*(long *)(lVar21 + 0x38) == 0) goto LAB_001067ca;
          puVar8 = (ulong *)0x0;
LAB_00106e36:
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x38));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x30));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x48));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9);
          *(undefined1 (*) [16])(lVar21 + 0x30) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar21 + 0x40) = (undefined1  [16])0x0;
          if (puVar8 != (ulong *)0x0) {
            uVar22 = puVar8[-1];
            uVar20 = *(ulong *)(param_3 + 8);
            *(int *)(lVar21 + 0x2c) = (int)uVar22;
            if (uVar20 != 0) {
              uVar20 = (ulong)*(uint *)(uVar20 - 8);
            }
            *(int *)(lVar21 + 0x28) = (int)uVar20;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            goto LAB_001065bf;
          }
        }
        else {
          if (*(long *)(lVar21 + 0x38) == 0) goto LAB_001067ca;
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x38));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x30));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)(lVar21 + 0x48));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9);
          *(undefined1 (*) [16])(lVar21 + 0x30) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar21 + 0x40) = (undefined1  [16])0x0;
        }
        *(undefined4 *)(lVar21 + 0x2c) = 0;
        if (*(long *)(param_3 + 8) == 0) {
          *(undefined4 *)(lVar21 + 0x28) = 0;
          *(undefined1 *)(lVar21 + 0x50) = 0;
        }
        else {
          uVar9 = *(undefined8 *)(*(long *)(param_3 + 8) + -8);
          *(undefined1 *)(lVar21 + 0x50) = 0;
          *(int *)(lVar21 + 0x28) = (int)uVar9;
        }
      }
      else {
        if (*(long *)(lVar19 + -8) == 0) {
          if (*(int *)(lVar21 + 0x2c) == 0) {
            if (*(long *)(lVar21 + 0x38) != 0) {
              puVar8 = (ulong *)0x0;
              goto LAB_00106e36;
            }
            goto LAB_001067ca;
          }
          puVar8 = (ulong *)0x0;
          if (*(int *)(lVar21 + 0x28) == 0) goto LAB_00106973;
LAB_001065a6:
          if (*(long *)(lVar21 + 0x38) != 0) goto LAB_00106e36;
        }
        else {
          if (param_4 == 0) {
            iVar18 = (int)*(long *)(lVar19 + -8);
            uVar22 = (ulong)(iVar18 * 2);
            if ((long)uVar22 < 0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x157,
                               "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",
                               0,0);
              lVar19 = *(long *)(param_3 + 8);
LAB_00106f80:
              *(undefined1 *)(lVar21 + 0x50) = 1;
              uVar22 = (ulong)*(int *)(lVar21 + 0x2c);
              puVar17 = (ulong *)0x0;
            }
            else {
              if (uVar22 == 0) goto LAB_00106f80;
              uVar20 = uVar22 * 4 - 1;
              uVar20 = uVar20 | uVar20 >> 1;
              uVar20 = uVar20 | uVar20 >> 2;
              uVar20 = uVar20 | uVar20 >> 4;
              uVar20 = uVar20 | uVar20 >> 8;
              uVar20 = uVar20 | uVar20 >> 0x10;
              puVar10 = (ulong *)Memory::alloc_static((uVar20 | uVar20 >> 0x20) + 0x11,false);
              if (puVar10 == (ulong *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
                puVar17 = (ulong *)0x0;
                if (iVar18 == 0) {
                  lVar19 = *(long *)(param_3 + 8);
                  goto LAB_00106f80;
                }
              }
              else {
                puVar17 = puVar10 + 2;
                *puVar10 = 1;
                puVar10[1] = uVar22;
                if (1 < *puVar10) {
                  uVar22 = puVar10[1];
                  uVar20 = 0x10;
                  sVar16 = uVar22 * 4;
                  if (sVar16 != 0) {
                    uVar20 = sVar16 - 1 | sVar16 - 1 >> 1;
                    uVar20 = uVar20 | uVar20 >> 2;
                    uVar20 = uVar20 | uVar20 >> 4;
                    uVar20 = uVar20 | uVar20 >> 8;
                    uVar20 = uVar20 | uVar20 >> 0x10;
                    uVar20 = (uVar20 | uVar20 >> 0x20) + 0x11;
                  }
                  puVar11 = (undefined8 *)Memory::alloc_static(uVar20,false);
                  if (puVar11 != (undefined8 *)0x0) {
                    puVar8 = puVar11 + 2;
                    *puVar11 = 1;
                    puVar11[1] = uVar22;
                    memcpy(puVar8,puVar17,sVar16);
                    LOCK();
                    *puVar10 = *puVar10 - 1;
                    UNLOCK();
                    if (*puVar10 == 0) {
                      Memory::free_static(puVar10,false);
                    }
                    puVar17 = puVar8;
                    if (iVar18 == 0) {
                      uVar22 = (ulong)*(int *)(lVar21 + 0x2c);
                      lVar19 = *(long *)(param_3 + 8);
                      *(undefined1 *)(lVar21 + 0x50) = 1;
                      goto LAB_00106daf;
                    }
                    goto LAB_00106d78;
                  }
                  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                   "Parameter \"mem_new\" is null.",0,0);
                }
                if (iVar18 == 0) {
                  *(undefined1 *)(lVar21 + 0x50) = 1;
                  uVar22 = (ulong)*(int *)(lVar21 + 0x2c);
                  lVar19 = *(long *)(param_3 + 8);
                  puVar8 = puVar17;
                  goto LAB_00106daf;
                }
              }
LAB_00106d78:
              iVar13 = 0;
              puVar8 = puVar17;
              do {
                *(int *)puVar8 = iVar13;
                iVar13 = iVar13 + 1;
                *(int *)((long)puVar8 + 4) = iVar13 % iVar18;
                puVar8 = puVar8 + 1;
              } while (iVar13 < iVar18);
              uVar22 = (ulong)*(int *)(lVar21 + 0x2c);
              lVar19 = *(long *)(param_3 + 8);
              *(undefined1 *)(lVar21 + 0x50) = 1;
              puVar8 = puVar17;
              if (puVar17 != (ulong *)0x0) goto LAB_00106daf;
            }
LAB_00106948:
            puVar8 = puVar17;
            if (uVar22 == 0) {
LAB_00106dbc:
              if (lVar19 != 0) goto LAB_00106973;
              goto LAB_001065a6;
            }
          }
          else {
            local_50[0] = (ulong *)0x0;
            cVar5 = Triangulate::triangulate(param_3,local_58);
            puVar8 = local_50[0];
            if (cVar5 == '\0') {
              if (local_50[0] != (ulong *)0x0) {
                LOCK();
                puVar10 = local_50[0] + -2;
                *puVar10 = *puVar10 - 1;
                UNLOCK();
                if (*puVar10 == 0) {
                  local_50[0] = (ulong *)0x0;
                  Memory::free_static(puVar8 + -2,false);
                }
              }
              iVar18 = *(int *)(lVar21 + 0x2c);
LAB_00106937:
              *(undefined1 *)(lVar21 + 0x50) = 0;
              lVar19 = *(long *)(param_3 + 8);
              uVar22 = (ulong)iVar18;
              puVar17 = (ulong *)0x0;
              goto LAB_00106948;
            }
            iVar18 = *(int *)(lVar21 + 0x2c);
            uVar22 = (ulong)iVar18;
            if (local_50[0] == (ulong *)0x0) goto LAB_00106937;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            lVar19 = *(long *)(param_3 + 8);
LAB_00106daf:
            if (puVar8[-1] == uVar22) goto LAB_00106dbc;
          }
          if ((lVar19 == 0) || (*(long *)(lVar19 + -8) != (long)*(int *)(lVar21 + 0x28)))
          goto LAB_001065a6;
LAB_00106973:
          if (*(long *)(lVar19 + -8) == 0) goto LAB_001065a6;
        }
        if (puVar8 != (ulong *)0x0) {
          uVar22 = puVar8[-1];
LAB_001065bf:
          if (uVar22 != 0) {
            if (*(long *)(lVar21 + 0x38) == 0) {
              uVar9 = RenderingDevice::get_singleton();
              local_50[0] = (ulong *)0x0;
              if (*(long *)(param_3 + 8) == 0) {
LAB_00107005:
                iVar18 = 0;
              }
              else {
                sVar16 = *(long *)(*(long *)(param_3 + 8) + -8) * 8;
                CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,sVar16);
                if (sVar16 != 0) {
                  __src = *(void **)(param_3 + 8);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                  memcpy(local_50[0],__src,sVar16);
                }
                if (*(long *)(param_3 + 8) == 0) goto LAB_00107005;
                iVar18 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) << 3;
              }
              uVar9 = RenderingDevice::vertex_buffer_create(uVar9,iVar18,local_58,0);
              puVar10 = local_50[0];
              *(undefined8 *)(lVar21 + 0x30) = uVar9;
              if (local_50[0] != (ulong *)0x0) {
                LOCK();
                plVar1 = (long *)((long)local_50[0] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_50[0] = (ulong *)0x0;
                  Memory::free_static((void *)((long)puVar10 + -0x10),false);
                }
              }
              uVar9 = RenderingDevice::get_singleton();
              local_50[0] = (ulong *)0x0;
              sVar16 = puVar8[-1] * 4;
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,sVar16);
              if (sVar16 != 0) {
                CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                memcpy(local_50[0],puVar8,sVar16);
              }
              uVar9 = RenderingDevice::index_buffer_create(uVar9,(int)puVar8[-1],1,local_58,0,0);
              puVar10 = local_50[0];
              *(undefined8 *)(lVar21 + 0x40) = uVar9;
              if (local_50[0] != (ulong *)0x0) {
                LOCK();
                plVar1 = (long *)((long)local_50[0] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_50[0] = (ulong *)0x0;
                  Memory::free_static((void *)((long)puVar10 + -0x10),false);
                }
              }
              uVar9 = RenderingDevice::get_singleton();
              uVar9 = RenderingDevice::index_array_create
                                (uVar9,*(undefined8 *)(lVar21 + 0x40),0,(int)puVar8[-1]);
              *(undefined8 *)(lVar21 + 0x48) = uVar9;
              local_60 = 0;
              Vector<RID>::push_back((Vector<RID> *)local_68);
              uVar7 = RenderingDevice::get_singleton();
              local_50[0] = (ulong *)0x0;
              if (*(long *)(param_3 + 8) == 0) {
                uVar22 = 0;
              }
              else {
                uVar22 = (ulong)*(uint *)(*(long *)(param_3 + 8) + -8);
              }
              uVar9 = RenderingDevice::vertex_array_create
                                (uVar7,uVar22,*(Vector **)(this + 0x9a8),local_68);
              puVar10 = local_50[0];
              *(undefined8 *)(lVar21 + 0x38) = uVar9;
              if (local_50[0] != (ulong *)0x0) {
                LOCK();
                puVar17 = local_50[0] + -2;
                *puVar17 = *puVar17 - 1;
                UNLOCK();
                if (*puVar17 == 0) {
                  local_50[0] = (ulong *)0x0;
                  Memory::free_static(puVar10 + -2,false);
                }
              }
              lVar21 = local_60;
              if (local_60 != 0) {
                LOCK();
                plVar1 = (long *)(local_60 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar21 + -0x10),false);
                }
              }
            }
            else {
              uVar9 = RenderingDevice::get_singleton();
              if (*(long *)(param_3 + 8) == 0) {
                iVar18 = 0;
              }
              else {
                iVar18 = *(int *)(*(long *)(param_3 + 8) + -8) * 8;
              }
              RenderingDevice::buffer_update(uVar9,*(undefined8 *)(lVar21 + 0x30),0,iVar18);
              uVar9 = RenderingDevice::get_singleton();
              RenderingDevice::buffer_update
                        (uVar9,*(undefined8 *)(lVar21 + 0x40),0,(int)puVar8[-1] * 4,puVar8);
            }
          }
          puVar8 = puVar8 + -2;
          LOCK();
          *puVar8 = *puVar8 - 1;
          UNLOCK();
          if (*puVar8 == 0) {
            Memory::free_static(puVar8,false);
          }
        }
      }
LAB_001067ca:
      if (local_b0 != (ulong *)0x0) {
        local_b0 = local_b0 + -2;
        LOCK();
        *local_b0 = *local_b0 - 1;
        UNLOCK();
        if (*local_b0 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(local_b0,false);
            return;
          }
          goto LAB_0010749f;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010749f;
    }
    if (*(int *)(lVar21 + 0x58) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("occluder_polygon_set_shape",
                     "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x4fd,
                     "Parameter \"oc\" is null.",0,0);
    return;
  }
LAB_0010749f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::request_polygon(Vector<int> const&, Vector<Vector2> const&, Vector<Color>
   const&, Vector<Vector2> const&, Vector<int> const&, Vector<float> const&) */

ulong __thiscall
RendererCanvasRenderRD::request_polygon
          (RendererCanvasRenderRD *this,Vector *param_1,Vector *param_2,Vector *param_3,
          Vector *param_4,Vector *param_5,Vector *param_6)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  code *pcVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  Vector *pVVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  undefined2 uVar24;
  uint uVar25;
  ulong uVar26;
  size_t __n;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  long in_FS_OFFSET;
  float fVar33;
  undefined1 local_b8 [8];
  long local_b0 [2];
  undefined8 *local_a0;
  Vector local_98 [8];
  long local_90;
  ulong local_88;
  void *local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = RendererRD::MeshStorage::get_singleton();
  if (*(long *)(param_2 + 8) == 0) {
    lVar15 = *(long *)(param_3 + 8);
    iVar28 = 0;
    uVar26 = 0;
    iVar13 = 0;
    if (lVar15 != 0) goto LAB_00107531;
    lVar15 = *(long *)(param_4 + 8);
    uVar32 = 6;
    iVar13 = 0;
    if (lVar15 != 0) goto LAB_0010755f;
    uVar32 = 8;
    lVar15 = *(long *)(param_5 + 8);
    if (lVar15 != 0) goto LAB_0010757e;
    lVar15 = *(long *)(param_6 + 8);
    if (lVar15 != 0) goto LAB_0010810b;
    iVar13 = 0;
    uVar32 = 8;
LAB_00107c31:
    uVar32 = uVar32 + 4;
    iVar28 = iVar13;
  }
  else {
    uVar26 = *(ulong *)(*(long *)(param_2 + 8) + -8);
    lVar15 = *(long *)(param_3 + 8);
    iVar28 = (int)uVar26;
    uVar26 = uVar26 & 0xffffffff;
    if (lVar15 == 0) {
      lVar15 = *(long *)(param_4 + 8);
      if (iVar28 != 0) {
        iVar28 = iVar28 << 2;
        uVar32 = 2;
        iVar13 = iVar28;
        if (lVar15 != 0) goto LAB_0010755f;
        goto LAB_0010756c;
      }
      uVar32 = 6;
      iVar28 = 0;
      iVar13 = iVar28;
      if (lVar15 != 0) goto LAB_0010755f;
      uVar32 = 8;
      lVar15 = *(long *)(param_5 + 8);
      if (lVar15 != 0) goto LAB_0010757e;
LAB_001080f9:
      lVar15 = *(long *)(param_6 + 8);
      if (lVar15 == 0) {
        iVar13 = 0;
      }
      else {
LAB_0010810b:
        iVar11 = 0;
LAB_00107c22:
        iVar13 = *(int *)(lVar15 + -8);
        iVar28 = iVar11;
LAB_00107c28:
        if (iVar28 != iVar13) goto LAB_0010758d;
      }
      goto LAB_00107c31;
    }
    iVar13 = iVar28 << 2;
LAB_00107531:
    iVar28 = iVar13;
    uVar32 = 6;
    if ((int)uVar26 != (int)*(long *)(lVar15 + -8)) {
      uVar32 = (uint)(*(long *)(lVar15 + -8) == 1) * 4 + 2;
    }
    lVar15 = *(long *)(param_4 + 8);
    iVar13 = iVar28;
    if (lVar15 == 0) {
      iVar13 = 0;
    }
    else {
LAB_0010755f:
      iVar28 = iVar13;
      iVar13 = *(int *)(lVar15 + -8);
    }
    if ((int)uVar26 == iVar13) {
      uVar32 = uVar32 + 2;
    }
LAB_0010756c:
    lVar15 = *(long *)(param_5 + 8);
    if (lVar15 == 0) {
      if (iVar28 == 0) goto LAB_001080f9;
    }
    else {
LAB_0010757e:
      iVar11 = (int)*(undefined8 *)(lVar15 + -8);
      if (iVar28 == iVar11) {
        lVar15 = *(long *)(param_6 + 8);
        if (lVar15 != 0) goto LAB_00107c22;
        iVar13 = 0;
        goto LAB_00107c28;
      }
    }
  }
LAB_0010758d:
  local_b0[0] = 0;
  iVar11 = (int)uVar26;
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)local_b0,(ulong)(uVar32 * iVar11) << 2);
  local_a0 = (undefined8 *)0x0;
  CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>
            ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0,5);
  local_90 = 0;
  CowData<RID>::resize<false>((CowData<RID> *)&local_90,5);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_b0);
  lVar15 = local_b0[0];
  iVar13 = uVar32 * 4;
  if (local_a0 == (undefined8 *)0x0) {
    lVar17 = 0;
  }
  else {
    lVar17 = local_a0[-1];
    if (0 < lVar17) {
      CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
      *local_a0 = 0;
      *(undefined4 *)(local_a0 + 1) = 0x66;
      puVar6 = *(undefined4 **)(param_2 + 8);
      *(int *)((long)local_a0 + 0xc) = iVar13;
      *(undefined4 *)(local_a0 + 2) = 0;
      if (iVar11 == 0) {
        lVar17 = *(long *)(param_3 + 8);
        if (lVar17 != 0) goto LAB_0010769d;
LAB_00107b40:
        lVar17 = local_a0[-1];
        if (1 < lVar17) {
          CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                    ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
          *(undefined8 *)((long)local_a0 + 0x14) = _LC106;
          *(undefined4 *)((long)local_a0 + 0x1c) = 0x6c;
          *(int *)(local_a0 + 4) = iVar13;
          puVar6 = *(undefined4 **)(param_3 + 8);
          *(undefined4 *)((long)local_a0 + 0x24) = 0;
          if (puVar6 == (undefined4 *)0x0) {
            if (iVar11 == 0) {
              lVar17 = *(long *)(param_4 + 8);
              if (lVar17 != 0) goto LAB_001081b2;
              iVar29 = 0x18;
              uVar25 = 6;
              goto LAB_00107c51;
            }
LAB_00107b9d:
            uVar25 = 2;
            puVar22 = puVar6;
            do {
              puVar16 = puVar22 + 4;
              *(undefined4 *)(lVar15 + (ulong)uVar25 * 4) = *puVar22;
              *(undefined4 *)(lVar15 + (ulong)(uVar25 + 1) * 4) = puVar22[1];
              *(undefined4 *)(lVar15 + (ulong)(uVar25 + 2) * 4) = puVar22[2];
              uVar30 = uVar25 + 3;
              uVar25 = uVar25 + uVar32;
              *(undefined4 *)(lVar15 + (ulong)uVar30 * 4) = puVar22[3];
              puVar22 = puVar16;
            } while (puVar6 + uVar26 * 4 != puVar16);
            lVar17 = *(long *)(param_4 + 8);
LAB_00107bf2:
            uVar25 = 6;
            if (lVar17 != 0) goto LAB_00107733;
LAB_0010773e:
            if (local_a0 != (undefined8 *)0x0) {
              lVar17 = local_a0[-1];
              if (lVar17 < 3) goto LAB_00107ff3;
              CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                        ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
              uVar20 = _UNK_0012da98;
              uVar19 = __LC108;
              *(undefined4 *)(local_a0 + 7) = 0;
              local_a0[5] = uVar19;
              local_a0[6] = uVar20;
              uVar19 = *(undefined8 *)(lVar14 + 0x70);
              if (local_90 == 0) goto LAB_00107ff0;
              lVar17 = *(long *)(local_90 + -8);
              if (lVar17 < 3) goto LAB_00107ff3;
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
              *(undefined8 *)(local_90 + 0x10) = uVar19;
              goto LAB_001077b4;
            }
LAB_00107ff0:
            lVar17 = 0;
          }
          else {
            if (*(long *)(puVar6 + -2) == 1) {
              lVar17 = *(long *)(param_4 + 8);
              uVar27 = *puVar6;
              uVar3 = puVar6[1];
              uVar4 = puVar6[2];
              uVar5 = puVar6[3];
              if (iVar11 != 0) {
                uVar25 = 2;
                iVar29 = 0;
                do {
                  iVar29 = iVar29 + 1;
                  *(undefined4 *)(lVar15 + (ulong)uVar25 * 4) = uVar27;
                  *(undefined4 *)(lVar15 + (ulong)(uVar25 + 1) * 4) = uVar3;
                  *(undefined4 *)(lVar15 + (ulong)(uVar25 + 2) * 4) = uVar4;
                  uVar30 = uVar25 + 3;
                  uVar25 = uVar25 + uVar32;
                  *(undefined4 *)(lVar15 + (ulong)uVar30 * 4) = uVar5;
                } while (iVar11 != iVar29);
                goto LAB_00107bf2;
              }
            }
            else {
              if (iVar11 != 0) goto LAB_00107b9d;
              lVar17 = *(long *)(param_4 + 8);
            }
            if (lVar17 != 0) {
LAB_001081b2:
              uVar25 = 6;
LAB_00107733:
              iVar29 = *(int *)(lVar17 + -8);
              goto LAB_00107736;
            }
            iVar29 = 0x18;
            uVar25 = 6;
LAB_00107c48:
            if (local_a0 == (undefined8 *)0x0) goto LAB_00107ff0;
LAB_00107c51:
            lVar17 = local_a0[-1];
            if (2 < lVar17) {
              CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                        ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
              *(int *)((long)local_a0 + 0x2c) = iVar29;
              *(undefined4 *)(local_a0 + 5) = 4;
              *(int *)((long)local_a0 + 0x34) = iVar13;
              puVar6 = *(undefined4 **)(param_4 + 8);
              *(undefined4 *)(local_a0 + 6) = 0x66;
              *(undefined4 *)(local_a0 + 7) = 0;
              if (iVar11 != 0) {
                puVar22 = puVar6;
                uVar30 = uVar25;
                do {
                  puVar16 = puVar22 + 2;
                  *(undefined4 *)(lVar15 + (ulong)uVar30 * 4) = *puVar22;
                  uVar12 = uVar30 + 1;
                  uVar30 = uVar30 + uVar32;
                  *(undefined4 *)(lVar15 + (ulong)uVar12 * 4) = puVar22[1];
                  puVar22 = puVar16;
                } while (puVar6 + uVar26 * 2 != puVar16);
                uVar25 = uVar25 + 2;
LAB_001077b4:
                lVar17 = *(long *)(param_1 + 8);
                if (lVar17 != 0) goto LAB_001077c6;
                if (iVar28 == 0) goto LAB_00108149;
LAB_001077d0:
                if (local_a0 == (undefined8 *)0x0) {
LAB_00108018:
                  lVar17 = 0;
                }
                else {
LAB_001077d9:
                  lVar17 = local_a0[-1];
                  if (3 < lVar17) {
                    CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                              ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
                    uVar20 = _UNK_0012daa8;
                    uVar19 = __LC109;
                    *(undefined4 *)((long)local_a0 + 0x4c) = 0;
                    *(undefined8 *)((long)local_a0 + 0x3c) = uVar19;
                    *(undefined8 *)((long)local_a0 + 0x44) = uVar20;
                    uVar19 = *(undefined8 *)(lVar14 + 0xa0);
                    if (local_90 == 0) goto LAB_00108018;
                    lVar17 = *(long *)(local_90 + -8);
                    if (3 < lVar17) {
                      CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
                      *(undefined8 *)(local_90 + 0x18) = uVar19;
                      goto LAB_00107849;
                    }
                  }
                }
LAB_0010801b:
                lVar14 = 3;
                goto LAB_00107fc9;
              }
              uVar25 = uVar25 + 2;
              lVar17 = *(long *)(param_1 + 8);
              if (lVar17 != 0) {
LAB_001077c6:
                if (iVar28 == *(int *)(lVar17 + -8)) {
                  lVar17 = *(long *)(param_6 + 8);
                  if (lVar17 != 0) goto LAB_00107d3a;
                  iVar29 = 0;
LAB_00107d3d:
                  if (iVar28 == iVar29) goto LAB_00107d46;
                }
                goto LAB_001077d0;
              }
              if (iVar28 != 0) goto LAB_001077d9;
LAB_00108149:
              lVar17 = *(long *)(param_6 + 8);
              if (lVar17 != 0) {
LAB_00107d3a:
                iVar29 = *(int *)(lVar17 + -8);
                goto LAB_00107d3d;
              }
LAB_00107d46:
              if (local_a0 == (undefined8 *)0x0) goto LAB_00108018;
              lVar17 = local_a0[-1];
              if (lVar17 < 4) goto LAB_0010801b;
              CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                        ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
              iVar29 = 0;
              *(int *)(local_a0 + 9) = iVar13;
              *(undefined4 *)((long)local_a0 + 0x3c) = 10;
              *(uint *)(local_a0 + 8) = uVar25 * 4;
              lVar17 = *(long *)(param_5 + 8);
              *(undefined4 *)((long)local_a0 + 0x44) = 0x5e;
              *(undefined4 *)((long)local_a0 + 0x4c) = 0;
              uVar26 = 0;
              uVar30 = uVar25;
              if (iVar11 != 0) {
                do {
                  uVar31 = (ulong)uVar30;
                  iVar9 = (int)uVar26;
                  iVar29 = iVar29 + 1;
                  uVar30 = uVar30 + uVar32;
                  *(ulong *)(lVar15 + uVar31 * 4) =
                       CONCAT62(CONCAT42(CONCAT22(*(undefined2 *)(lVar17 + (ulong)(iVar9 + 3) * 4),
                                                  *(undefined2 *)(lVar17 + (ulong)(iVar9 + 2) * 4)),
                                         *(undefined2 *)(lVar17 + (ulong)(iVar9 + 1) * 4)),
                                *(undefined2 *)(lVar17 + uVar26 * 4));
                  uVar26 = (ulong)(iVar9 + 4);
                } while (iVar11 != iVar29);
              }
              uVar25 = uVar25 + 2;
LAB_00107849:
              if (*(long *)(param_6 + 8) == 0) {
                iVar29 = 0;
              }
              else {
                iVar29 = *(int *)(*(long *)(param_6 + 8) + -8);
              }
              if (iVar28 == iVar29) {
                if (local_a0 != (undefined8 *)0x0) {
                  lVar17 = local_a0[-1];
                  if (4 < lVar17) {
                    CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                              ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
                    *(undefined4 *)(local_a0 + 10) = 0xb;
                    *(int *)((long)local_a0 + 0x5c) = iVar13;
                    *(uint *)((long)local_a0 + 0x54) = uVar25 * 4;
                    *(undefined4 *)(local_a0 + 0xb) = 0x5a;
                    *(undefined4 *)(local_a0 + 0xc) = 0;
                    fVar10 = _LC110;
                    lVar14 = *(long *)(param_6 + 8);
                    if (iVar11 != 0) {
                      uVar12 = 0;
                      iVar28 = 0;
                      uVar30 = uVar25;
                      do {
                        uVar24 = 0;
                        puVar2 = (undefined2 *)(lVar15 + (ulong)uVar30 * 4);
                        fVar33 = *(float *)(lVar14 + (ulong)uVar12 * 4) * fVar10;
                        if ((0.0 <= fVar33) && (uVar24 = 0xffff, fVar33 <= _LC110)) {
                          uVar24 = (undefined2)(int)fVar33;
                        }
                        *puVar2 = uVar24;
                        uVar24 = 0;
                        fVar33 = *(float *)(lVar14 + (ulong)(uVar12 + 1) * 4) * fVar10;
                        if ((0.0 <= fVar33) && (uVar24 = 0xffff, fVar33 <= _LC110)) {
                          uVar24 = (undefined2)(int)fVar33;
                        }
                        puVar2[1] = uVar24;
                        uVar24 = 0;
                        fVar33 = *(float *)(lVar14 + (ulong)(uVar12 + 2) * 4) * fVar10;
                        if ((0.0 <= fVar33) && (uVar24 = 0xffff, fVar33 <= _LC110)) {
                          uVar24 = (undefined2)(int)fVar33;
                        }
                        puVar2[2] = uVar24;
                        uVar24 = 0;
                        fVar33 = *(float *)(lVar14 + (ulong)(uVar12 + 3) * 4) * fVar10;
                        if ((0.0 <= fVar33) && (uVar24 = 0xffff, fVar33 <= _LC110)) {
                          uVar24 = (undefined2)(int)fVar33;
                        }
                        iVar28 = iVar28 + 1;
                        puVar2[3] = uVar24;
                        uVar30 = uVar30 + uVar32;
                        uVar12 = uVar12 + 4;
                      } while (iVar11 != iVar28);
                    }
                    uVar25 = uVar25 + 2;
LAB_001078db:
                    if (uVar32 == uVar25) {
                      pVVar18 = (Vector *)RenderingDevice::get_singleton();
                      pVVar18 = (Vector *)RenderingDevice::vertex_format_create(pVVar18);
                      if (pVVar18 != (Vector *)0xffffffffffffffff) {
                        uVar19 = RenderingDevice::get_singleton();
                        if (local_b0[0] == 0) {
                          uVar27 = 0;
                        }
                        else {
                          uVar27 = *(undefined4 *)(local_b0[0] + -8);
                        }
                        lVar14 = 0;
                        uVar19 = RenderingDevice::vertex_buffer_create(uVar19,uVar27,local_b8,0);
                        local_70 = uVar19;
joined_r0x00107943:
                        if (local_a0 != (undefined8 *)0x0) {
                          do {
                            if ((long)local_a0[-1] <= lVar14) break;
                            if (local_90 == 0) {
                              lVar15 = 0;
LAB_00107ce3:
                              _err_print_index_error
                                        ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar15,
                                         "p_index","size()","",false,true);
                              _err_flush_stdout();
                    /* WARNING: Does not return */
                              pcVar8 = (code *)invalidInstructionException();
                              (*pcVar8)();
                            }
                            lVar15 = *(long *)(local_90 + -8);
                            if (lVar15 <= lVar14) goto LAB_00107ce3;
                            if (*(long *)(local_90 + lVar14 * 8) == 0) goto code_r0x00107981;
                            lVar14 = lVar14 + 1;
                            if (local_a0 == (undefined8 *)0x0) break;
                          } while( true );
                        }
                        uVar32 = RenderingDevice::get_singleton();
                        local_80[0] = (void *)0x0;
                        if (*(long *)(param_2 + 8) == 0) {
                          uVar26 = 0;
                        }
                        else {
                          uVar26 = (ulong)*(uint *)(*(long *)(param_2 + 8) + -8);
                        }
                        uVar20 = RenderingDevice::vertex_array_create
                                           (uVar32,uVar26,pVVar18,local_98);
                        pvVar7 = local_80[0];
                        local_68 = uVar20;
                        if (local_80[0] != (void *)0x0) {
                          LOCK();
                          plVar1 = (long *)((long)local_80[0] + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            local_80[0] = (void *)0x0;
                            Memory::free_static((void *)((long)pvVar7 + -0x10),false);
                          }
                        }
                        if (*(long *)(param_1 + 8) == 0) {
                          uVar23 = 0;
                          lVar14 = 0;
                        }
                        else {
                          lVar14 = *(long *)(*(long *)(param_1 + 8) + -8);
                          uVar23 = 0;
                          if (lVar14 != 0) {
                            local_80[0] = (void *)0x0;
                            CowData<unsigned_char>::resize<false>
                                      ((CowData<unsigned_char> *)local_80,lVar14 * 4);
                            CowData<unsigned_char>::_copy_on_write
                                      ((CowData<unsigned_char> *)local_80);
                            pvVar7 = *(void **)(param_1 + 8);
                            if (pvVar7 == (void *)0x0) {
                              __n = 0;
                            }
                            else {
                              __n = *(long *)((long)pvVar7 + -8) * 4;
                            }
                            memcpy(local_80[0],pvVar7,__n);
                            uVar23 = RenderingDevice::get_singleton();
                            if (*(long *)(param_1 + 8) == 0) {
                              uVar27 = 0;
                            }
                            else {
                              uVar27 = *(undefined4 *)(*(long *)(param_1 + 8) + -8);
                            }
                            lVar14 = RenderingDevice::index_buffer_create
                                               (uVar23,uVar27,1,&local_88,0,0);
                            local_60 = lVar14;
                            uVar23 = RenderingDevice::get_singleton();
                            if (*(long *)(param_1 + 8) == 0) {
                              uVar27 = 0;
                            }
                            else {
                              uVar27 = *(undefined4 *)(*(long *)(param_1 + 8) + -8);
                            }
                            uVar23 = RenderingDevice::index_array_create(uVar23,local_60,0,uVar27);
                            pvVar7 = local_80[0];
                            if (*(long *)(param_1 + 8) == 0) {
                              iVar11 = 0;
                            }
                            else {
                              iVar11 = *(int *)(*(long *)(param_1 + 8) + -8);
                            }
                            local_58 = uVar23;
                            if (local_80[0] != (void *)0x0) {
                              LOCK();
                              plVar1 = (long *)((long)local_80[0] + -0x10);
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                local_80[0] = (void *)0x0;
                                Memory::free_static((void *)((long)pvVar7 + -0x10),false);
                              }
                            }
                          }
                        }
                        uVar26 = *(ulong *)(this + 0x728);
                        *(ulong *)(this + 0x728) = uVar26 + 1;
                        local_88 = uVar26;
                        puVar21 = (undefined8 *)
                                  HashMap<unsigned_long,RendererCanvasRenderRD::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RendererCanvasRenderRD::PolygonBuffers>>>
                                  ::operator[]((HashMap<unsigned_long,RendererCanvasRenderRD::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RendererCanvasRenderRD::PolygonBuffers>>>
                                                *)(this + 0x6f8),&local_88);
                        *puVar21 = pVVar18;
                        puVar21[1] = uVar19;
                        puVar21[2] = uVar20;
                        puVar21[3] = lVar14;
                        puVar21[4] = uVar23;
                        *(int *)(puVar21 + 5) = iVar11;
                        goto LAB_00107a7b;
                      }
                      _err_print_error("request_polygon",
                                       "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp"
                                       ,0x12a,
                                       "Condition \"vertex_id == RD::INVALID_ID\" is true. Returning: 0"
                                       ,0,0);
                    }
                    else {
                      _err_print_error("request_polygon",
                                       "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp"
                                       ,0x126,
                                       "Condition \"base_offset != stride\" is true. Returning: 0",0
                                       ,0);
                    }
                    uVar26 = 0;
LAB_00107a7b:
                    lVar14 = local_90;
                    if (local_90 != 0) {
                      LOCK();
                      plVar1 = (long *)(local_90 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_90 = 0;
                        Memory::free_static((void *)(lVar14 + -0x10),false);
                      }
                    }
                    puVar21 = local_a0;
                    if (local_a0 != (undefined8 *)0x0) {
                      LOCK();
                      plVar1 = local_a0 + -2;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_a0 = (undefined8 *)0x0;
                        Memory::free_static(puVar21 + -2,false);
                      }
                    }
                    lVar14 = local_b0[0];
                    if (local_b0[0] != 0) {
                      LOCK();
                      plVar1 = (long *)(local_b0[0] + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_b0[0] = 0;
                        Memory::free_static((void *)(lVar14 + -0x10),false);
                      }
                    }
                    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                      return uVar26;
                    }
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                  goto LAB_00108068;
                }
LAB_00108065:
                lVar17 = 0;
              }
              else {
                if (local_a0 == (undefined8 *)0x0) goto LAB_00108065;
                lVar17 = local_a0[-1];
                if (4 < lVar17) {
                  CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                            ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
                  uVar20 = _UNK_0012dab8;
                  uVar19 = __LC111;
                  *(undefined4 *)(local_a0 + 0xc) = 0;
                  local_a0[10] = uVar19;
                  local_a0[0xb] = uVar20;
                  uVar19 = *(undefined8 *)(lVar14 + 0xa8);
                  if (local_90 == 0) goto LAB_00108065;
                  lVar17 = *(long *)(local_90 + -8);
                  if (4 < lVar17) {
                    CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
                    *(undefined8 *)(local_90 + 0x20) = uVar19;
                    goto LAB_001078db;
                  }
                }
              }
LAB_00108068:
              lVar14 = 4;
              goto LAB_00107fc9;
            }
          }
LAB_00107ff3:
          lVar14 = 2;
          goto LAB_00107fc9;
        }
      }
      else {
        uVar25 = 0;
        puVar22 = puVar6;
        do {
          puVar16 = puVar22 + 2;
          *(undefined4 *)(lVar15 + (ulong)uVar25 * 4) = *puVar22;
          uVar30 = uVar25 + 1;
          uVar25 = uVar25 + uVar32;
          *(undefined4 *)(lVar15 + (ulong)uVar30 * 4) = puVar22[1];
          puVar22 = puVar16;
        } while (puVar6 + uVar26 * 2 != puVar16);
        lVar17 = *(long *)(param_3 + 8);
        if (lVar17 != 0) {
LAB_0010769d:
          if ((iVar11 == (int)*(long *)(lVar17 + -8)) || (*(long *)(lVar17 + -8) == 1))
          goto LAB_00107b40;
        }
        lVar17 = local_a0[-1];
        if (1 < lVar17) {
          CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                    ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_a0);
          uVar20 = _UNK_0012da88;
          uVar19 = _LC81;
          *(undefined4 *)((long)local_a0 + 0x24) = 0;
          *(undefined8 *)((long)local_a0 + 0x14) = uVar19;
          *(undefined8 *)((long)local_a0 + 0x1c) = uVar20;
          uVar19 = *(undefined8 *)(lVar14 + 0x68);
          if (local_90 == 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = *(long *)(local_90 + -8);
            if (1 < lVar17) {
              CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
              lVar17 = *(long *)(param_4 + 8);
              *(undefined8 *)(local_90 + 8) = uVar19;
              if (lVar17 != 0) {
                uVar25 = 2;
                goto LAB_00107733;
              }
              iVar29 = 0;
              uVar25 = 2;
LAB_00107736:
              if (iVar11 != iVar29) goto LAB_0010773e;
              iVar29 = uVar25 * 4;
              goto LAB_00107c48;
            }
          }
        }
      }
      lVar14 = 1;
      goto LAB_00107fc9;
    }
  }
  lVar14 = 0;
LAB_00107fc9:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar14,lVar17,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
code_r0x00107981:
  CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
  *(undefined8 *)(local_90 + lVar14 * 8) = uVar19;
  lVar14 = lVar14 + 1;
  goto joined_r0x00107943;
}



/* RendererCanvasRenderRD::light_create() */

void __thiscall RendererCanvasRenderRD::light_create(RendererCanvasRenderRD *this)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_34 = 0x3f800000;
  local_2c = 0x3f80000000000000;
  local_24 = 0;
  RID_Alloc<RendererCanvasRenderRD::CanvasLight,false>::make_rid
            ((RID_Alloc<RendererCanvasRenderRD::CanvasLight,false> *)(this + 0x750),
             (CanvasLight *)&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::occluder_polygon_create() */

void __thiscall RendererCanvasRenderRD::occluder_polygon_create(RendererCanvasRenderRD *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_40 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false>::make_rid
            ((RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false> *)(this + 0x7a8),
             (OccluderPolygon *)&local_68);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* RendererCanvasRenderRD::set_shadow_texture_size(int) */

void __thiscall
RendererCanvasRenderRD::set_shadow_texture_size(RendererCanvasRenderRD *this,int param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  TextureFormat *pTVar6;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_28;
  undefined2 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_1 - 1U | (int)(param_1 - 1U) >> 1;
  uVar3 = uVar3 | (int)uVar3 >> 2;
  uVar3 = uVar3 | (int)uVar3 >> 4;
  uVar3 = uVar3 | (int)uVar3 >> 8;
  iVar4 = (uVar3 | (int)uVar3 >> 0x10) + 1;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if ((*(int *)(this + 0xb10) != iVar4) &&
     (*(int *)(this + 0xb10) = iVar4, *(long *)(this + 0xb08) != 0)) {
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar5,*(undefined8 *)(this + 0xaf8));
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar5,*(undefined8 *)(this + 0xb00));
    uStack_50 = _UNK_0012dac8;
    local_58 = __LC124;
    *(undefined8 *)(this + 0xb08) = 0;
    local_28 = 0;
    local_20 = 0;
    local_48 = _LC76;
    uStack_40 = _UNK_0012dad8;
    local_38 = 1;
    pTVar6 = (TextureFormat *)RenderingDevice::get_singleton();
    local_80 = 0;
    local_78 = __LC126;
    uStack_70 = _UNK_0012dae8;
    local_68 = 6;
    uVar5 = RenderingDevice::texture_create(pTVar6,(TextureView *)&local_58,(Vector *)&local_78);
    *(undefined8 *)(this + 0xaf8) = uVar5;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_80);
    lVar2 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::_update_shadow_atlas() [clone .part.0] */

void __thiscall RendererCanvasRenderRD::_update_shadow_atlas(RendererCanvasRenderRD *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  TextureFormat *pTVar4;
  Vector *pVVar5;
  long in_FS_OFFSET;
  Vector<RID> aVStack_c8 [8];
  long local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  long local_58;
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar3,*(undefined8 *)(this + 0xaf8));
  local_84 = *(undefined4 *)(this + 0xb10);
  local_c0 = 0;
  local_50 = 0;
  local_58 = 0;
  local_80 = *(int *)(this + 0xb38) * 2;
  local_88 = 99;
  local_7c = 0x100000001;
  local_74 = 0x100000001;
  local_6c = 0x300000000;
  pTVar4 = (TextureFormat *)RenderingDevice::get_singleton();
  local_b0 = 0;
  local_98 = 6;
  local_a8 = __LC126;
  uStack_a0 = _UNK_0012dae8;
  uVar3 = RenderingDevice::texture_create(pTVar4,(TextureView *)&local_88,(Vector *)&local_a8);
  *(undefined8 *)(this + 0xaf8) = uVar3;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_b0);
  Vector<RID>::push_back(aVStack_c8);
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_84 = *(undefined4 *)(this + 0xb10);
  local_88 = 0x7d;
  local_58 = 0;
  local_80 = *(int *)(this + 0xb38) * 2;
  local_7c = 0x100000001;
  local_74 = 0x100000001;
  local_6c = 0x400000000;
  local_50 = 0x100;
  pTVar4 = (TextureFormat *)RenderingDevice::get_singleton();
  local_b0 = 0;
  local_98 = 6;
  local_a8 = __LC126;
  uStack_a0 = _UNK_0012dae8;
  uVar3 = RenderingDevice::texture_create(pTVar4,(TextureView *)&local_88,(Vector *)&local_a8);
  *(undefined8 *)(this + 0xb00) = uVar3;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_b0);
  Vector<RID>::push_back(aVStack_c8);
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  pVVar5 = (Vector *)RenderingDevice::get_singleton();
  uVar3 = RenderingDevice::framebuffer_create(pVVar5,(long)aVStack_c8,0xffffffff);
  lVar2 = local_c0;
  *(undefined8 *)(this + 0xb08) = uVar3;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::_update_shadow_atlas() */

void __thiscall RendererCanvasRenderRD::_update_shadow_atlas(RendererCanvasRenderRD *this)

{
  if (*(long *)(this + 0xb08) != 0) {
    return;
  }
  _update_shadow_atlas(this);
  return;
}



/* RendererCanvasRenderRD::~RendererCanvasRenderRD() */

void __thiscall RendererCanvasRenderRD::~RendererCanvasRenderRD(RendererCanvasRenderRD *this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  RendererCanvasRenderRD *pRVar12;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_request_polygon_001241e0;
  plVar6 = (long *)RendererRD::MaterialStorage::get_singleton();
  plVar7 = (long *)RendererRD::TextureStorage::get_singleton();
  (**(code **)(*plVar6 + 0xd8))(plVar6,*(undefined8 *)(this + 0x200ba0));
  (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined8 *)(this + 0x200b98));
  (**(code **)(*plVar6 + 0xd8))(plVar6,*(undefined8 *)(this + 0x200ba8));
  (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined8 *)(this + 0x200bb0));
  if (*(long *)(this + 0xae8) != 0) {
    uVar8 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar8,*(undefined8 *)(this + 0xae8));
  }
  Memory::free_static(*(void **)(this + 0xad8),true);
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar8,*(undefined8 *)(this + 0xae0));
  ShaderRD::version_free((ShaderRD *)(this + 0x800),*(undefined8 *)(this + 0x978));
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar8,*(undefined8 *)(this + 0xaf0));
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar8,*(undefined8 *)(this + 0x1a0));
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar8,*(undefined8 *)(this + 0x198));
  if (*(long *)(this + 0xb08) != 0) {
    uVar8 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar8,*(undefined8 *)(this + 0xb00));
  }
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar8,*(undefined8 *)(this + 0xaf8));
  if (*(long *)(this + 0xb18) != 0) {
    uVar8 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar8,*(undefined8 *)(this + 0xb18));
  }
  pRVar12 = this + 0xa60;
  Memory::free_static(*(void **)(this + 0xab0),true);
  do {
    uVar9 = 0;
    if (*(uint *)pRVar12 != 0) {
      do {
        uVar8 = RenderingDevice::get_singleton();
        if (*(uint *)pRVar12 <= (uint)uVar9) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar9 & 0xffffffff,
                     (ulong)*(uint *)pRVar12,"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar10 = uVar9 * 8;
        uVar9 = uVar9 + 1;
        RenderingDevice::free(uVar8,*(undefined8 *)(*(long *)(pRVar12 + 8) + lVar10));
      } while ((uint)uVar9 < *(uint *)pRVar12);
    }
    pRVar12 = pRVar12 + 0x10;
  } while (pRVar12 != this + 0xa90);
  RendererRD::TextureStorage::canvas_texture_set_invalidation_callback
            (plVar7,*(undefined8 *)(this + 0x200b90),0,0);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  plVar6 = *(long **)(this + 0x10);
  (**(code **)(*plVar6 + 0x50))(plVar6);
  Memory::free_static(plVar6,false);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)(this + 0xac8));
  if (*(void **)(this + 0xa98) != (void *)0x0) {
    if (*(int *)(this + 0xa90) != 0) {
      *(undefined4 *)(this + 0xa90) = 0;
    }
    Memory::free_static(*(void **)(this + 0xa98),false);
  }
  pRVar12 = this + 0xa80;
  do {
    if (*(void **)(pRVar12 + 8) != (void *)0x0) {
      if (*(int *)pRVar12 != 0) {
        *(int *)pRVar12 = 0;
      }
      Memory::free_static(*(void **)(pRVar12 + 8),false);
    }
    pRVar12 = pRVar12 + -0x10;
  } while (this + 0xa50 != pRVar12);
  pvVar11 = *(void **)(this + 0xa38);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0xa5c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa58) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa5c) = 0;
        *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa40) + lVar10) != 0) {
            *(int *)(*(long *)(this + 0xa40) + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar11 + lVar10 * 2),false);
            pvVar11 = *(void **)(this + 0xa38);
            *(undefined8 *)((long)pvVar11 + lVar10 * 2) = 0;
          }
          lVar10 = lVar10 + 4;
        } while ((ulong)uVar1 << 2 != lVar10);
        *(undefined4 *)(this + 0xa5c) = 0;
        *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_00108fb2;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0xa40),false);
  }
LAB_00108fb2:
  pvVar11 = *(void **)(this + 0xa08);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0xa2c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa28) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa2c) = 0;
        *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa10) + lVar10) != 0) {
            pvVar11 = *(void **)((long)pvVar11 + lVar10 * 2);
            *(int *)(*(long *)(this + 0xa10) + lVar10) = 0;
            if (*(void **)((long)pvVar11 + 0x20) != (void *)0x0) {
              if (*(int *)((long)pvVar11 + 0x18) != 0) {
                *(undefined4 *)((long)pvVar11 + 0x18) = 0;
              }
              Memory::free_static(*(void **)((long)pvVar11 + 0x20),false);
            }
            Memory::free_static(pvVar11,false);
            pvVar11 = *(void **)(this + 0xa08);
            *(undefined8 *)((long)pvVar11 + lVar10 * 2) = 0;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa2c) = 0;
        *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_0010908a;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0xa10),false);
  }
LAB_0010908a:
  pvVar11 = *(void **)(this + 0x9d0);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0x9f4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x9f0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x9f4) = 0;
        *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x9d8) + lVar10) != 0) {
            *(int *)(*(long *)(this + 0x9d8) + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar11 + lVar10 * 2),false);
            pvVar11 = *(void **)(this + 0x9d0);
            *(undefined8 *)((long)pvVar11 + lVar10 * 2) = 0;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x9f4) = 0;
        *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_00109130;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x9d8),false);
  }
LAB_00109130:
  plVar6 = *(long **)(this + 0x9c0);
  if (plVar6 != (long *)0x0) {
    do {
      pvVar11 = (void *)*plVar6;
      if (pvVar11 == (void *)0x0) {
        if ((int)plVar6[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_001091a2;
        }
        break;
      }
      if (*(long **)((long)pvVar11 + 0x30) == plVar6) {
        lVar10 = *(long *)((long)pvVar11 + 0x20);
        lVar3 = *(long *)((long)pvVar11 + 0x28);
        *plVar6 = lVar10;
        if (pvVar11 == (void *)plVar6[1]) {
          plVar6[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x20) = lVar10;
          lVar10 = *(long *)((long)pvVar11 + 0x20);
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x28) = lVar3;
        }
        Memory::free_static(pvVar11,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0x9c0);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
  }
LAB_001091a2:
  *(undefined ***)(this + 0x800) = &PTR__CanvasOcclusionShaderRD_00124180;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x800));
  uVar1 = *(uint *)(this + 0x7c8);
  *(undefined ***)(this + 0x7a8) = &PTR__RID_Alloc_001241c0;
  if (uVar1 != 0) {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar1);
    print_error((String *)&local_58);
    pcVar5 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar6 = (long *)(local_58 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar10 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar6 = (long *)(local_60 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
  uVar1 = *(uint *)(this + 0x7c4);
  uVar2 = *(uint *)(this + 0x7c0);
  lVar10 = 0;
  if (uVar2 <= uVar1) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x7b0) + lVar10 * 8),false);
      lVar3 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x7b8) + lVar3),false);
    } while ((uint)lVar10 < uVar1 / uVar2);
  }
  if (*(void **)(this + 0x7b0) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x7b0),false);
    Memory::free_static(*(void **)(this + 0x7b8),false);
  }
  uVar1 = *(uint *)(this + 0x770);
  *(undefined ***)(this + 0x750) = &PTR__RID_Alloc_001241a0;
  if (uVar1 != 0) {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar1);
    print_error((String *)&local_58);
    pcVar5 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar6 = (long *)(local_58 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar10 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar6 = (long *)(local_60 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
  uVar1 = *(uint *)(this + 0x76c);
  uVar2 = *(uint *)(this + 0x768);
  lVar10 = 0;
  if (uVar2 <= uVar1) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x758) + lVar10 * 8),false);
      lVar3 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x760) + lVar3),false);
    } while ((uint)lVar10 < uVar1 / uVar2);
  }
  if (*(void **)(this + 0x758) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x758),false);
    Memory::free_static(*(void **)(this + 0x760),false);
  }
  pvVar11 = *(void **)(this + 0x700);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0x724) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x720) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x724) = 0;
        *(undefined1 (*) [16])(this + 0x710) = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x708) + lVar10) != 0) {
            *(int *)(*(long *)(this + 0x708) + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar11 + lVar10 * 2),false);
            pvVar11 = *(void **)(this + 0x700);
            *(undefined8 *)((long)pvVar11 + lVar10 * 2) = 0;
          }
          lVar10 = lVar10 + 4;
        } while ((ulong)uVar1 << 2 != lVar10);
        *(undefined4 *)(this + 0x724) = 0;
        *(undefined1 (*) [16])(this + 0x710) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_001094ea;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x708),false);
  }
LAB_001094ea:
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)(this + 0x5c0));
  pvVar11 = *(void **)(this + 0x598);
  if (pvVar11 != (void *)0x0) {
    if ((*(int *)(this + 0x5bc) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5b8) * 4) == 0 ||
        (memset(*(void **)(this + 0x5b0),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5b8) * 4) * 4),
        *(int *)(this + 0x5bc) != 0)))) {
      lVar10 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar11 + lVar10 * 8) != 0)) {
          StringName::unref();
          pvVar11 = *(void **)(this + 0x598);
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x5bc));
      *(undefined4 *)(this + 0x5bc) = 0;
      if (pvVar11 == (void *)0x0) goto LAB_001095be;
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x5a8),false);
    Memory::free_static(*(void **)(this + 0x5a0),false);
    Memory::free_static(*(void **)(this + 0x5b0),false);
  }
LAB_001095be:
  pvVar11 = *(void **)(this + 0x570);
  if (pvVar11 != (void *)0x0) {
    if ((*(int *)(this + 0x594) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) == 0 ||
        (memset(*(void **)(this + 0x588),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) * 4),
        *(int *)(this + 0x594) != 0)))) {
      lVar10 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar11 + lVar10 * 8) != 0)) {
          StringName::unref();
          pvVar11 = *(void **)(this + 0x570);
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x594));
      *(undefined4 *)(this + 0x594) = 0;
      if (pvVar11 == (void *)0x0) goto LAB_0010967e;
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x580),false);
    Memory::free_static(*(void **)(this + 0x578),false);
    Memory::free_static(*(void **)(this + 0x588),false);
  }
LAB_0010967e:
  pvVar11 = *(void **)(this + 0x548);
  if (pvVar11 != (void *)0x0) {
    if ((*(int *)(this + 0x56c) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x568) * 4) == 0 ||
        (memset(*(void **)(this + 0x560),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x568) * 4) * 4),
        *(int *)(this + 0x56c) != 0)))) {
      lVar10 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar11 + lVar10 * 8) != 0)) {
          StringName::unref();
          pvVar11 = *(void **)(this + 0x548);
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x56c));
      *(undefined4 *)(this + 0x56c) = 0;
      if (pvVar11 == (void *)0x0) goto LAB_00109746;
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x558),false);
    Memory::free_static(*(void **)(this + 0x550),false);
    Memory::free_static(*(void **)(this + 0x560),false);
  }
LAB_00109746:
  pvVar11 = *(void **)(this + 0x520);
  if (pvVar11 != (void *)0x0) {
    if ((*(int *)(this + 0x544) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x540) * 4) == 0 ||
        (memset(*(void **)(this + 0x538),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x540) * 4) * 4),
        *(int *)(this + 0x544) != 0)))) {
      lVar10 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar11 + lVar10 * 8) != 0)) {
          StringName::unref();
          pvVar11 = *(void **)(this + 0x520);
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x544));
      *(undefined4 *)(this + 0x544) = 0;
      if (pvVar11 == (void *)0x0) goto LAB_0010980e;
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x530),false);
    Memory::free_static(*(void **)(this + 0x528),false);
    Memory::free_static(*(void **)(this + 0x538),false);
  }
LAB_0010980e:
  pvVar11 = *(void **)(this + 0x4f8);
  if (pvVar11 != (void *)0x0) {
    if ((*(int *)(this + 0x51c) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x518) * 4) == 0 ||
        (memset(*(void **)(this + 0x510),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x518) * 4) * 4),
        *(int *)(this + 0x51c) != 0)))) {
      lVar10 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar11 + lVar10 * 8) != 0)) {
          StringName::unref();
          pvVar11 = *(void **)(this + 0x4f8);
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x51c));
      *(undefined4 *)(this + 0x51c) = 0;
      if (pvVar11 == (void *)0x0) goto LAB_001098ce;
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x508),false);
    Memory::free_static(*(void **)(this + 0x500),false);
    Memory::free_static(*(void **)(this + 0x510),false);
  }
LAB_001098ce:
  pvVar11 = *(void **)(this + 0x4d0);
  if (pvVar11 != (void *)0x0) {
    if ((*(int *)(this + 0x4f4) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f0) * 4) == 0 ||
        (memset(*(void **)(this + 0x4e8),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f0) * 4) * 4),
        *(int *)(this + 0x4f4) != 0)))) {
      lVar10 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar11 + lVar10 * 8) != 0)) {
          StringName::unref();
          pvVar11 = *(void **)(this + 0x4d0);
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x4f4));
      *(undefined4 *)(this + 0x4f4) = 0;
      if (pvVar11 == (void *)0x0) goto LAB_0010998e;
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x4e0),false);
    Memory::free_static(*(void **)(this + 0x4d8),false);
    Memory::free_static(*(void **)(this + 0x4e8),false);
  }
LAB_0010998e:
  if ((StringName::configured != '\0') &&
     (((*(long *)(this + 0x4c8) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (*(long *)(this + 0x4c0) != 0)))) {
    StringName::unref();
  }
  ShaderLanguage::~ShaderLanguage((ShaderLanguage *)(this + 0x1a8));
  *(undefined ***)(this + 0x18) = &PTR__CanvasShaderRD_00124160;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x18));
  RendererCanvasRender::singleton = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::~RendererCanvasRenderRD() */

void __thiscall RendererCanvasRenderRD::~RendererCanvasRenderRD(RendererCanvasRenderRD *this)

{
  ~RendererCanvasRenderRD(this);
  operator_delete(this,0x200be0);
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



/* RendererCanvasRenderRD::_update_occluder_buffer(unsigned int) */

void __thiscall
RendererCanvasRenderRD::_update_occluder_buffer(RendererCanvasRenderRD *this,uint param_1)

{
  long *plVar1;
  Version *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  Vector<RenderingDevice::Uniform> aVStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0xb20) < param_1) {
    uVar8 = param_1 - 1 | param_1 - 1 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    *(uint *)(this + 0xb20) = (uVar8 | uVar8 >> 0x10) + 1;
    if (*(long *)(this + 0xb18) != 0) {
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar4,*(undefined8 *)(this + 0xb18));
    }
  }
  else if (*(long *)(this + 0xb18) != 0) goto LAB_0010a048;
  uVar4 = RenderingDevice::get_singleton();
  local_60 = 0;
  uVar4 = RenderingDevice::storage_buffer_create(uVar4,*(undefined4 *)(this + 0xb20),&local_68,0);
  uVar5 = local_60;
  *(undefined8 *)(this + 0xb18) = uVar4;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(uVar5 - 0x10),false);
    }
  }
  local_58 = *(undefined8 *)(this + 0xb18);
  local_70 = 0;
  local_60 = local_60 & 0xffffffffffffff00;
  local_68 = 8;
  local_48 = 0;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_78,&local_68);
  uVar4 = RenderingDevice::get_singleton();
  uVar5 = *(ulong *)(this + 0x978);
  if (*(long *)(this + 0x818) == 0) {
    lVar7 = 0;
LAB_0010a0a3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar7,
               "p_variant","variant_defines.size()","",false,false);
LAB_0010a0df:
    uVar6 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x818) + -8);
    if (lVar7 < 2) goto LAB_0010a0a3;
    lVar7 = *(long *)(this + 0x828);
    if (lVar7 == 0) {
LAB_0010a1e0:
      lVar10 = 0;
LAB_0010a1e3:
      uVar5 = 1;
LAB_0010a203:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar10 = *(long *)(lVar7 + -8);
    if (lVar10 < 2) goto LAB_0010a1e3;
    if (*(char *)(lVar7 + 1) != '\0') {
      if ((uVar5 == 0) || (*(uint *)(this + 0x8d4) <= (uint)uVar5)) {
LAB_0010a150:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar6 = 0;
        goto LAB_0010a027;
      }
      lVar7 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x8d0)) * 0xa0 +
              *(long *)(*(long *)(this + 0x8c0) +
                       ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x8d0)) * 8);
      if (*(int *)(lVar7 + 0x98) != (int)(uVar5 >> 0x20)) {
        if (*(int *)(lVar7 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010a150;
      }
      pVVar2 = (Version *)(this + 0x800);
      iVar9 = (int)lVar7;
      if (*(char *)(lVar7 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar10 = *(long *)(this + 0x878);
        if (lVar10 != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(lVar10 + -8) <= lVar11) break;
            if (*(char *)(lVar10 + lVar11) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar9);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar9);
            }
            lVar10 = *(long *)(this + 0x878);
            lVar11 = lVar11 + 1;
          } while (lVar10 != 0);
        }
      }
      lVar11 = *(long *)(this + 0x838);
      if (lVar11 == 0) goto LAB_0010a1e0;
      lVar10 = *(long *)(lVar11 + -8);
      if (lVar10 < 2) goto LAB_0010a1e3;
      uVar5 = (ulong)*(uint *)(lVar11 + 4);
      lVar11 = *(long *)(lVar7 + 0x68);
      if (lVar11 == 0) {
        lVar10 = 0;
        goto LAB_0010a203;
      }
      lVar10 = *(long *)(lVar11 + -8);
      if (lVar10 <= (long)uVar5) goto LAB_0010a203;
      if (*(long *)(lVar11 + uVar5 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar9);
      }
      if (*(char *)(lVar7 + 0x90) != '\0') {
        lVar7 = *(long *)(lVar7 + 0x88);
        if (lVar7 == 0) goto LAB_0010a1e0;
        lVar10 = *(long *)(lVar7 + -8);
        if (1 < lVar10) {
          uVar6 = *(undefined8 *)(lVar7 + 8);
          goto LAB_0010a027;
        }
        goto LAB_0010a1e3;
      }
      goto LAB_0010a0df;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    uVar6 = 0;
  }
LAB_0010a027:
  uVar4 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                    (uVar4,aVStack_78,uVar6,0,0);
  *(undefined8 *)(this + 0xb28) = uVar4;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_70);
LAB_0010a048:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererCanvasRenderRD::_create_base_uniform_set(RID, bool) */

undefined8 __thiscall
RendererCanvasRenderRD::_create_base_uniform_set
          (RendererCanvasRenderRD *this,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  Vector<RenderingDevice::Uniform> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = RendererRD::TextureStorage::get_singleton();
  lVar2 = RendererRD::MaterialStorage::get_singleton();
  local_60 = 0;
  local_70 = 0;
  local_58 = *(long *)(this + 0xae8);
  local_68 = _LC135;
  local_48 = 0;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  local_60 = 0;
  local_58 = *(long *)(this + 0xae0);
  local_48 = 0;
  local_68 = _LC136;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  RendererRD::TextureStorage::get_singleton();
  local_58 = RendererRD::TextureStorage::decal_atlas_get_texture();
  local_60 = 0;
  local_48 = 0;
  local_68 = _LC137;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  local_60 = 0;
  local_58 = *(long *)(this + 0xaf8);
  local_48 = 0;
  local_68 = _LC138;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  local_60 = 0;
  local_58 = *(long *)(this + 0xaf0);
  local_48 = 0;
  local_68 = _LC74;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  if (param_3 == '\0') {
    lVar3 = RendererRD::TextureStorage::render_target_get_rd_backbuffer(uVar1,param_2);
    if (lVar3 == 0) {
      lVar3 = RendererRD::TextureStorage::get_singleton();
      lVar3 = *(long *)(lVar3 + 0x18);
    }
  }
  else {
    lVar3 = RendererRD::TextureStorage::render_target_get_rd_texture();
  }
  local_60 = 0;
  local_68 = _LC139;
  local_48 = 0;
  local_58 = lVar3;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  local_58 = RendererRD::TextureStorage::render_target_get_sdf_texture(uVar1,param_2);
  local_60 = 0;
  local_48 = 0;
  local_68 = _LC140;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  RendererRD::MaterialStorage::get_singleton();
  local_58 = RendererRD::MaterialStorage::global_shader_uniforms_get_storage_buffer();
  local_60 = 0;
  local_48 = 0;
  local_68 = _LC141;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>
            ((Vector *)(lVar2 + 8),(int)local_78);
  uVar4 = RenderingDevice::get_singleton();
  uVar4 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                    (uVar4,local_78,*(undefined8 *)(this + 400),0,0);
  if (param_3 == '\0') {
    RendererRD::TextureStorage::render_target_set_framebuffer_uniform_set(uVar1,param_2,uVar4);
  }
  else {
    RendererRD::TextureStorage::render_target_set_backbuffer_uniform_set();
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
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



/* RendererCanvasRenderRD::render_sdf(RID, RendererCanvasRender::LightOccluderInstance*) */

void __thiscall
RendererCanvasRenderRD::render_sdf(RendererCanvasRenderRD *this,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_178 [8];
  long local_170;
  Vector2i local_168 [8];
  int local_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  Transform2D local_118 [4];
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
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
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)RendererRD::TextureStorage::get_singleton();
  uVar3 = RendererRD::TextureStorage::render_target_get_sdf_framebuffer(plVar2,param_2);
  _local_168 = (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
  local_148 = 0;
  local_158 = CONCAT44((float)local_160 * 0.0,(float)local_160);
  uStack_150 = CONCAT44((float)iStack_15c,(float)iStack_15c * 0.0);
  local_148 = Vector2i::operator_cast_to_Vector2(local_168);
  uStack_130 = 0x4000000000000000;
  local_128 = 0xbf800000bf800000;
  local_138 = 0x40000000;
  Transform2D::affine_inverse();
  Transform2D::operator*((Transform2D *)&local_198,(Transform2D *)&local_138);
  local_170 = 0;
  local_128 = local_188;
  local_138 = local_198;
  uStack_130 = uStack_190;
  Vector<Color>::push_back(0,0,local_178);
  uVar4 = RenderingDevice::get_singleton();
  local_b8 = 0;
  uStack_b0 = 0;
  pvVar5 = (void *)RenderingDevice::draw_list_begin(uVar4,uVar3,0x500ff,local_178,0,&local_b8,0);
  Projection::Projection((Projection *)&local_f8);
  local_58 = 0;
  local_50 = 0;
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  if (param_3 != 0) {
    do {
      while ((uVar1 = *(ulong *)(param_3 + 0x18), uVar1 == 0 ||
             (*(uint *)(this + 0x7c4) <= (uint)uVar1))) {
LAB_0010a9e1:
        param_3 = *(long *)(param_3 + 0x88);
LAB_0010a9e9:
        if (param_3 == 0) goto LAB_0010a9ee;
      }
      lVar6 = *(long *)(*(long *)(this + 0x7b0) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x7c0)) * 8) +
              ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x7c0)) * 0x60;
      if (*(int *)(lVar6 + 0x58) != (int)(uVar1 >> 0x20)) {
        if (0x7ffffffe < *(int *)(lVar6 + 0x58) + 0x80000000U) goto LAB_0010a9e1;
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
        param_3 = *(long *)(param_3 + 0x88);
        goto LAB_0010a9e9;
      }
      if ((*(long *)(lVar6 + 0x48) == 0) || (*(char *)(param_3 + 0x7c) == '\0')) goto LAB_0010a9e1;
      Transform2D::operator*(local_118,(Transform2D *)&local_138);
      local_70 = 0;
      local_60 = 0;
      local_6c = local_108;
      local_68 = uStack_114;
      local_64 = uStack_10c;
      local_5c = local_104;
      uVar3 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_render_pipeline
                (uVar3,pvVar5,*(undefined8 *)(this + (ulong)*(byte *)(lVar6 + 0x50) * 8 + 0x990));
      uVar3 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_vertex_array(uVar3,pvVar5,*(undefined8 *)(lVar6 + 0x38));
      uVar3 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_index_array(uVar3,pvVar5,*(undefined8 *)(lVar6 + 0x48));
      lVar6 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar6,pvVar5,(uint)&local_b8);
      lVar6 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar6,SUB81(pvVar5,0),1,1);
      param_3 = *(long *)(param_3 + 0x88);
    } while (param_3 != 0);
  }
LAB_0010a9ee:
  RenderingDevice::get_singleton();
  RenderingDevice::draw_list_end();
  RendererRD::TextureStorage::render_target_sdf_process(plVar2);
  Projection::~Projection((Projection *)&local_f8);
  lVar6 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar2 = (long *)(local_170 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::light_update_directional_shadow(RID, int, Transform2D const&, int, float,
   Rect2 const&, RendererCanvasRender::LightOccluderInstance*) */

void __thiscall
RendererCanvasRenderRD::light_update_directional_shadow
          (float param_1,RendererCanvasRenderRD *this,ulong param_3,int param_4,undefined8 param_5,
          uint param_6,ulong *param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  undefined4 *puVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_238 [8];
  long local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  long local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  Vector3 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  Vector3 local_198 [48];
  Transform3D local_168 [48];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x76c))) {
    lVar2 = *(long *)(*(long *)(this + 0x758) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8) +
            ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38;
    if (*(int *)(lVar2 + 0x30) == (int)(param_3 >> 0x20)) {
      if (*(char *)(lVar2 + 8) == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("light_update_directional_shadow",
                           "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x464,
                           "Condition \"!cl->shadow.enabled\" is true.",0,0);
          return;
        }
      }
      else {
        if (*(long *)(this + 0xb08) == 0) {
          _update_shadow_atlas(this);
        }
        local_228 = Vector2::normalized();
        uVar3 = *param_7;
        fVar12 = (float)(uVar3 >> 0x20);
        fVar11 = (float)param_7[1];
        local_220 = CONCAT44(_UNK_0012d9bc * (float)(param_7[1] >> 0x20) + fVar12,
                             _LC146 * fVar11 + (float)uVar3);
        if ((float)local_228 < 0.0) {
          uVar3 = (ulong)(uint)((float)uVar3 + fVar11);
        }
        local_b8._0_8_ = CONCAT44(fVar12,(int)uVar3);
        fVar11 = (float)Vector2::dot((Vector2 *)&local_228);
        fVar12 = (float)Vector2::dot((Vector2 *)&local_228);
        uVar6 = _LC75;
        fVar11 = fVar11 - fVar12;
        if (fVar11 < 0.0) {
          fVar11 = (float)((uint)fVar11 ^ _LC75);
        }
        fVar14 = (float)local_228;
        uVar3 = (ulong)local_228 >> 0x20;
        fVar15 = (float)local_220;
        uVar5 = (ulong)local_220 >> 0x20;
        fVar12 = fVar11 + fVar11 + param_1;
        fVar13 = (float)Vector2::length();
        fVar13 = fVar13 * _LC146;
        *(ulong *)(lVar2 + 0xc) =
             CONCAT44((float)(int)(param_4 * 2 + 1) / (float)(uint)(*(int *)(this + 0xb38) * 2),
                      fVar12);
        local_1e8 = CONCAT44((float)local_228,local_228._4_4_ ^ uVar6);
        local_1e0 = local_228;
        local_1d8 = CONCAT44((float)uVar5 - (param_1 + fVar11) * (float)uVar3,
                             fVar15 - (param_1 + fVar11) * fVar14);
        Transform2D::invert();
        local_230 = 0;
        Vector<Color>::push_back(0x3f8000003f800000,local_238);
        local_1f0 = *(undefined4 *)(this + 0xb10);
        local_1ec = 2;
        local_1f8 = (ulong)(uint)(param_4 * 2) << 0x20;
        uVar7 = RenderingDevice::get_singleton();
        local_b8 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_1f8);
        pvVar8 = (void *)RenderingDevice::draw_list_begin
                                   (uVar7,*(undefined8 *)(this + 0xb08),0x500ff,local_238,0,
                                    (Projection *)local_b8,0);
        uVar7 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_bind_render_pipeline(uVar7,pvVar8,*(undefined8 *)(this + 0x980));
        Projection::Projection((Projection *)local_138);
        Projection::set_orthogonal((float)((uint)fVar13 ^ uVar6),fVar13,_LC147,_LC146,0.0,fVar12);
        local_1c8 = (Vector3  [16])ZEXT416(_LC352);
        local_1a8 = 0x3f800000;
        local_218 = _LC150;
        local_1a4 = 0;
        local_19c = 0;
        local_208 = 0;
        local_200 = 0xbf800000;
        local_210 = 0;
        local_1b8 = (undefined1  [16])local_1c8;
        Transform3D::looking_at(local_198,local_1c8,SUB81(&local_218,0));
        Transform3D::affine_inverse();
        Projection::Projection((Projection *)&local_f8,local_168);
        Projection::operator*((Projection *)local_b8,(Projection *)local_138);
        local_128 = local_a8;
        uStack_120 = uStack_a0;
        local_118 = local_98;
        uStack_110 = uStack_90;
        local_108 = local_88;
        uStack_100 = uStack_80;
        local_138 = local_b8;
        Projection::~Projection((Projection *)local_b8);
        Projection::~Projection((Projection *)&local_f8);
        local_58 = _LC150;
        local_a8 = local_128;
        uStack_a0 = uStack_120;
        local_98 = local_118;
        uStack_90 = uStack_110;
        local_88 = local_108;
        uStack_80 = uStack_100;
        local_50 = fVar12;
        local_b8 = local_138;
        if (param_8 != 0) {
LAB_0010b0d0:
          do {
            uVar3 = *(ulong *)(param_8 + 0x18);
            if ((uVar3 == 0) || (*(uint *)(this + 0x7c4) <= (uint)uVar3)) {
LAB_0010b12a:
              param_8 = *(long *)(param_8 + 0x88);
            }
            else {
              puVar10 = (undefined4 *)
                        (((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x7c0)) * 0x60 +
                        *(long *)(*(long *)(this + 0x7b0) +
                                 ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x7c0)) * 8));
              if (puVar10[0x16] == (int)(uVar3 >> 0x20)) {
                if ((*(long *)(puVar10 + 8) == 0) || ((param_6 & *(uint *)(param_8 + 0x78)) == 0))
                goto LAB_0010b12a;
                Transform2D::operator*((Transform2D *)&local_f8,(Transform2D *)&local_1e8);
                local_4c = *puVar10;
                local_70 = 0;
                local_60 = 0;
                local_6c = uStack_e8;
                local_68 = uStack_f4;
                local_64 = uStack_ec;
                local_5c = local_e4;
                uVar7 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_vertex_array
                          (uVar7,pvVar8,*(undefined8 *)(puVar10 + 4));
                uVar7 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_index_array
                          (uVar7,pvVar8,*(undefined8 *)(puVar10 + 8));
                lVar9 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_set_push_constant
                          (lVar9,pvVar8,(uint)(Projection *)local_b8);
                lVar9 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_draw(lVar9,SUB81(pvVar8,0),1,1);
                param_8 = *(long *)(param_8 + 0x88);
                if (param_8 == 0) break;
                goto LAB_0010b0d0;
              }
              if (0x7ffffffe < puVar10[0x16] + 0x80000000) goto LAB_0010b12a;
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
              param_8 = *(long *)(param_8 + 0x88);
            }
          } while (param_8 != 0);
        }
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
        uStack_f4 = 0;
        local_f0 = 0;
        uStack_ec = (undefined4)_LC152;
        uStack_e8 = (undefined4)((ulong)_LC152 >> 0x20);
        local_e4 = 0;
        local_f8 = (float)(_LC151 / ((double)fVar13 + (double)fVar13));
        Transform2D::operator*((Transform2D *)&local_258,(Transform2D *)&local_f8);
        *(undefined8 *)(lVar2 + 0x14) = local_258;
        *(undefined8 *)(lVar2 + 0x1c) = uStack_250;
        *(undefined8 *)(lVar2 + 0x24) = local_248;
        Projection::~Projection((Projection *)local_138);
        lVar2 = local_230;
        if (local_230 != 0) {
          LOCK();
          plVar1 = (long *)(local_230 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_230 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(lVar2 + 0x30) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,*(long *)(this + 0x758));
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::light_update_shadow(RID, int, Transform2D const&, int, float, float,
   RendererCanvasRender::LightOccluderInstance*, Rect2 const&) */

void __thiscall
RendererCanvasRenderRD::light_update_shadow
          (undefined4 param_1,undefined4 param_2,RendererCanvasRenderRD *this,ulong param_4,
          int param_5,undefined8 *param_6,uint param_7,long param_8,Transform2D *param_9)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  Rect2 *pRVar10;
  void *pvVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint *in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined1 local_c8 [8];
  long local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 10);
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x76c))) {
    lVar16 = *(long *)(*(long *)(this + 0x758) +
                      ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8) +
             ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38;
    if (*(int *)(lVar16 + 0x30) == (int)(param_4 >> 0x20)) {
      if (*(char *)(lVar16 + 8) == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
          _err_print_error("light_update_shadow",
                           "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x3fa,
                           "Condition \"!cl->shadow.enabled\" is true.",0,0);
          return;
        }
      }
      else {
        if (*(long *)(this + 0xb08) == 0) {
          _update_shadow_atlas(this);
        }
        uVar5 = param_5 * 2;
        *(ulong *)(lVar16 + 0xc) =
             CONCAT44((float)(int)(uVar5 + 1) / (float)(uint)(*(int *)(this + 0xb38) * 2),param_2);
        local_c0 = 0;
        Vector<Color>::push_back(local_c8);
        if ((char)*in_FS_OFFSET == '\0') {
          uVar9 = *(undefined8 *)in_FS_OFFSET;
          in_FS_OFFSET[0] = 0;
          in_FS_OFFSET[1] = 0;
          in_FS_OFFSET[0] = 0;
          in_FS_OFFSET[1] = 0;
          *(undefined1 *)in_FS_OFFSET = 1;
          __cxa_thread_atexit(LocalVector<RendererCanvasRenderRD::OccluderPolygon*,unsigned_int,false,false>
                              ::~LocalVector,uVar9,&__dso_handle);
        }
        if ((char)*in_FS_OFFSET == '\0') {
          uVar9 = *(undefined8 *)in_FS_OFFSET;
          in_FS_OFFSET[0] = 0;
          in_FS_OFFSET[1] = 0;
          *(undefined1 *)in_FS_OFFSET = 1;
          in_FS_OFFSET[0] = 0;
          in_FS_OFFSET[1] = 0;
          __cxa_thread_atexit(LocalVector<unsigned_int,unsigned_int,false,false>::~LocalVector,uVar9
                              ,&__dso_handle);
        }
        if (*in_FS_OFFSET != 0) {
          *in_FS_OFFSET = 0;
        }
        if (*in_FS_OFFSET != 0) {
          *in_FS_OFFSET = 0;
        }
        if (param_8 != 0) {
          lVar16 = param_8;
          iVar7 = 0;
          do {
            while( true ) {
              uVar14 = *(ulong *)(lVar16 + 0x18);
              iVar17 = iVar7 + 1;
              if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x7c4))) break;
LAB_0010b530:
              lVar16 = *(long *)(lVar16 + 0x88);
              iVar7 = iVar17;
              if (lVar16 == 0) goto LAB_0010b5e0;
            }
            lVar15 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x7c0)) * 0x60 +
                     *(long *)(*(long *)(this + 0x7b0) +
                              ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x7c0)) * 8);
            if (*(int *)(lVar15 + 0x58) == (int)(uVar14 >> 0x20)) {
              if (((*(long *)(lVar15 + 0x20) != 0) && ((param_7 & *(uint *)(lVar16 + 0x78)) != 0))
                 && (cVar6 = Rect2::intersects_transformed(param_9,(Rect2 *)(lVar16 + 0x60)),
                    cVar6 != '\0')) {
                uVar13 = *in_FS_OFFSET;
                pvVar11 = *(void **)in_FS_OFFSET;
                if (uVar13 == *in_FS_OFFSET) {
                  uVar14 = (ulong)(uVar13 * 2);
                  if (uVar13 * 2 == 0) {
                    uVar14 = 1;
                  }
                  *in_FS_OFFSET = (uint)uVar14;
                  pvVar11 = (void *)Memory::realloc_static(pvVar11,uVar14 * 8,false);
                  *(void **)in_FS_OFFSET = pvVar11;
                  if (pvVar11 == (void *)0x0) goto LAB_0010be46;
                  uVar13 = *in_FS_OFFSET;
                }
                *in_FS_OFFSET = uVar13 + 1;
                *(long *)((long)pvVar11 + (ulong)uVar13 * 8) = lVar15;
                uVar13 = *in_FS_OFFSET;
                pvVar11 = *(void **)in_FS_OFFSET;
                if (uVar13 == *in_FS_OFFSET) {
                  uVar14 = (ulong)(uVar13 * 2);
                  if (uVar13 * 2 == 0) {
                    uVar14 = 1;
                  }
                  *in_FS_OFFSET = (uint)uVar14;
                  pvVar11 = (void *)Memory::realloc_static(pvVar11,uVar14 * 4,false);
                  *(void **)in_FS_OFFSET = pvVar11;
                  if (pvVar11 == (void *)0x0) {
LAB_0010be46:
                    _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                     "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                  uVar13 = *in_FS_OFFSET;
                }
                *in_FS_OFFSET = uVar13 + 1;
                *(int *)((long)pvVar11 + (ulong)uVar13 * 4) = iVar7;
              }
              goto LAB_0010b530;
            }
            if (0x7ffffffe < *(int *)(lVar15 + 0x58) + 0x80000000U) goto LAB_0010b530;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            lVar16 = *(long *)(lVar16 + 0x88);
            iVar7 = iVar17;
          } while (lVar16 != 0);
LAB_0010b5e0:
          if ((param_5 == 0) && (iVar17 != 0)) {
            if ((char)*in_FS_OFFSET == '\0') {
              uVar9 = *(undefined8 *)in_FS_OFFSET;
              in_FS_OFFSET[0] = 0;
              in_FS_OFFSET[1] = 0;
              *(undefined1 *)in_FS_OFFSET = 1;
              in_FS_OFFSET[0] = 0;
              in_FS_OFFSET[1] = 0;
              __cxa_thread_atexit(LocalVector<float,unsigned_int,false,false>::~LocalVector,uVar9,
                                  &__dso_handle);
              uVar13 = *in_FS_OFFSET;
            }
            else {
              uVar13 = *in_FS_OFFSET;
            }
            if (uVar13 != 0) {
              *in_FS_OFFSET = 0;
            }
            pvVar11 = *(void **)in_FS_OFFSET;
            uVar13 = iVar17 * 8;
            if (uVar13 == 0) {
              uVar14 = 0;
LAB_0010ba8a:
              _err_print_index_error
                        ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar13,
                         "p_index","count","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (*in_FS_OFFSET < uVar13) {
              uVar8 = uVar13 - 1 | uVar13 - 1 >> 1;
              uVar8 = uVar8 | uVar8 >> 2;
              uVar8 = uVar8 >> 4 | uVar8;
              uVar8 = uVar8 >> 8 | uVar8;
              uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
              *in_FS_OFFSET = uVar8;
              pvVar11 = (void *)Memory::realloc_static(pvVar11,(ulong)uVar8 * 4,false);
              *(void **)in_FS_OFFSET = pvVar11;
              if (pvVar11 == (void *)0x0) {
                _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
            }
            *in_FS_OFFSET = uVar13;
            uVar14 = 0;
            do {
              if (uVar13 <= (uint)uVar14) goto LAB_0010ba8a;
              puVar2 = (undefined4 *)((long)pvVar11 + uVar14 * 4);
              *puVar2 = *(undefined4 *)(param_8 + 0x60);
              uVar3 = *(undefined4 *)(param_8 + 0x68);
              puVar2[2] = 0;
              puVar2[1] = uVar3;
              puVar2[3] = *(undefined4 *)(param_8 + 0x70);
              puVar2[4] = *(undefined4 *)(param_8 + 100);
              uVar3 = *(undefined4 *)(param_8 + 0x6c);
              puVar2[6] = 0;
              puVar2[5] = uVar3;
              puVar12 = (undefined4 *)(param_8 + 0x74);
              param_8 = *(long *)(param_8 + 0x88);
              puVar2[7] = *puVar12;
              uVar14 = (ulong)((uint)uVar14 + 8);
            } while (param_8 != 0);
            _update_occluder_buffer(this,iVar17 * 0x20);
            uVar9 = RenderingDevice::get_singleton();
            RenderingDevice::buffer_update
                      (uVar9,*(undefined8 *)(this + 0xb18),0,*in_FS_OFFSET * 4,
                       *(undefined8 *)in_FS_OFFSET);
          }
        }
        local_b0 = *(undefined4 *)(this + 0xb10);
        local_ac = 2;
        local_b8 = (ulong)uVar5 << 0x20;
        uVar9 = RenderingDevice::get_singleton();
        local_98 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_b8);
        pRVar10 = (Rect2 *)RenderingDevice::draw_list_begin
                                     (uVar9,*(undefined8 *)(this + 0xb08),0x500ff,local_c8,0,
                                      local_98,0);
        if (*(long *)(this + 0xb18) != 0) {
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_render_pipeline
                    (uVar9,pRVar10,*(undefined8 *)(this + 0x988));
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_bind_uniform_set(uVar9,pRVar10,*(undefined8 *)(this + 0xb28),0)
          ;
          lVar16 = 0;
          puVar12 = &light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                     ::rotations;
          do {
            iVar7 = *(int *)(this + 0xb10);
            local_a0 = iVar7 + 3;
            if (-1 < iVar7) {
              local_a0 = iVar7;
            }
            local_9c = 2;
            local_a0 = local_a0 >> 2;
            local_a8 = local_a0 * (int)lVar16;
            local_a4 = uVar5;
            lVar15 = RenderingDevice::get_singleton();
            auVar18 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_a8);
            local_98 = auVar18;
            RenderingDevice::draw_list_set_viewport(lVar15,pRVar10);
            if (light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                ::directions == '\0') {
              iVar7 = __cxa_guard_acquire(&light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                                           ::directions);
              if (iVar7 != 0) {
                light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                ::directions._0_8_ = __LC155;
                light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                ::directions._8_8_ = _UNK_0012db18;
                light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                ::directions._16_8_ = __LC156;
                light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                ::directions._24_8_ = _UNK_0012db28;
                __cxa_guard_release(&light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                                     ::directions);
              }
            }
            if (light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                ::rotations == '\0') {
              iVar7 = __cxa_guard_acquire(&light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                                           ::rotations);
              if (iVar7 != 0) {
                _rotations = __LC157;
                _DAT_001170e8 = _UNK_0012db38;
                _DAT_001170f0 = __LC156;
                uRam00000000001170f8 = _UNK_0012db28;
                _DAT_00117100 = __LC158;
                uRam0000000000117108 = _UNK_0012db48;
                _DAT_00117110 = __LC155;
                uRam0000000000117118 = _UNK_0012db18;
                __cxa_guard_release(&light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                                     ::rotations);
              }
            }
            uVar14 = 0;
            local_80 = 0;
            local_98._0_8_ = CONCAT44((int)param_6[1],(int)*param_6);
            local_98._8_8_ = (ulong)*(uint *)(param_6 + 2) << 0x20;
            local_88 = *(undefined4 *)((long)param_6 + 4);
            local_84 = *(undefined4 *)((long)param_6 + 0xc);
            local_7c = *(undefined4 *)((long)param_6 + 0x14);
            local_68 = *(undefined4 *)
                        (light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                         ::directions + lVar16 * 8);
            local_64 = *(undefined4 *)
                        (light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                         ::directions + lVar16 * 8 + 4);
            local_78 = *puVar12;
            local_74 = puVar12[1];
            local_70 = puVar12[2];
            local_6c = puVar12[3];
            local_60 = param_2;
            local_58 = param_1;
            if (*in_FS_OFFSET != 0) {
              do {
                uVar13 = *in_FS_OFFSET;
                puVar2 = *(undefined4 **)(*(long *)(in_FS_OFFSET + 2) + uVar14 * 8);
                if (uVar13 <= (uint)uVar14) {
                  uVar14 = uVar14 & 0xffffffff;
                  goto LAB_0010ba8a;
                }
                local_5c = *(undefined4 *)(*(long *)(in_FS_OFFSET + 2) + uVar14 * 4);
                uVar14 = uVar14 + 1;
                local_54 = *puVar2;
                uVar9 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_vertex_array
                          (uVar9,pRVar10,*(undefined8 *)(puVar2 + 4));
                uVar9 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_index_array
                          (uVar9,pRVar10,*(undefined8 *)(puVar2 + 8));
                lVar15 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_set_push_constant(lVar15,pRVar10,(uint)local_98);
                lVar15 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_draw(lVar15,SUB81(pRVar10,0),1,1);
              } while ((uint)uVar14 < *in_FS_OFFSET);
            }
            lVar16 = lVar16 + 1;
            puVar12 = puVar12 + 4;
          } while (lVar16 != 4);
        }
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
        lVar16 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(lVar16 + 0x30) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,lVar16);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::CanvasShaderData::_create_pipeline(RendererCanvasRenderRD::PipelineKey)
    */

void RendererCanvasRenderRD::CanvasShaderData::_create_pipeline(CanvasShaderData *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  int iStack0000000000000024;
  int iStack0000000000000028;
  int iStack000000000000002c;
  undefined8 local_160;
  undefined1 local_148 [8];
  long local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulong local_128;
  undefined8 uStack_120;
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  undefined1 auStack_108 [12];
  undefined8 local_fc;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  long local_d0;
  undefined2 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  ulong uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60 [8];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = 0;
  local_64 = 0;
  local_58 = 0;
  uStack_12c = 0;
  uStack_120 = 0x101010100000000;
  local_50 = __LC142;
  uStack_48 = _LC150;
  if (iStack0000000000000028 == 0) {
    RendererRD::MaterialStorage::ShaderData::blend_mode_to_blend_attachment
              (&local_138,*(undefined4 *)(param_1 + 0x80));
    local_160 = 0;
  }
  else {
    local_138 = CONCAT31(local_138._1_3_,1);
    local_160 = 4;
    uStack_134 = (undefined4)_LC161;
    uStack_130 = (undefined4)((ulong)_LC161 >> 0x20);
    local_128 = _LC162;
  }
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
  local_e4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  lVar5 = RenderingDevice::get_singleton();
  uVar4 = (uint)in_stack_00000010;
  local_e8 = RenderingDevice::framebuffer_format_get_texture_samples(lVar5,uVar4);
  local_140 = 0;
  iVar3 = CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>
                    ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_140,1
                    );
  if (iVar3 == 0) {
    if (local_140 == 0) {
      lVar10 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_140 + -8);
      lVar10 = lVar5 + -1;
      if (-1 < lVar10) {
        CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&local_140);
        *(undefined8 *)(local_140 + lVar10 * 0xc) = 1;
        *(int *)(local_140 + 8 + lVar10 * 0xc) = iStack0000000000000024;
        goto LAB_0010c0b3;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar5,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010c0b3:
  if ((*(long *)(param_1 + 0xa8) == 0) ||
     (lVar5 = get_shader(param_1,in_stack_00000008,iStack000000000000002c != 0), lVar5 == 0)) {
    _err_print_error("_create_pipeline",
                     "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x5f3,
                     "Condition \"shader_rid.is_null()\" is true.",0,0);
    lVar5 = local_140;
  }
  else {
    uVar6 = RenderingDevice::get_singleton();
    local_fc = 0x13f800000;
    local_88 = 0;
    auStack_74 = SUB1612((undefined1  [16])0x0,4);
    local_118 = SUB1612((undefined1  [16])0x0,0);
    local_b8 = ZEXT816(0x700000000);
    local_a8._8_8_ = 0;
    local_a8._0_8_ = __LC166;
    local_a8 = local_a8 << 0x40;
    local_98._8_8_ = 0;
    local_98._0_8_ = _LC162;
    uStack_84 = __LC166;
    uStack_7c = (undefined4)_LC162;
    local_78 = (undefined4)(_LC162 >> 0x20);
    uStack_10c = 0;
    auStack_108 = SUB1612((undefined1  [16])0x0,4);
    lVar5 = RenderingDevice::render_pipeline_create
                      (uVar6,lVar5,in_stack_00000010,in_stack_00000018,iStack0000000000000020,
                       local_118,&local_e8,local_b8,local_68,local_160,0,local_148);
    if (lVar5 == 0) {
      _err_print_error("_create_pipeline",
                       "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x5f6,
                       "Condition \"pipeline.is_null()\" is true.",0,0);
      lVar5 = local_140;
    }
    else {
      iVar3 = (int)((ulong)in_stack_00000018 >> 0x20);
      uVar8 = (in_stack_00000008 * 0x16a88000 | (uint)(in_stack_00000008 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ 0x7f07c65;
      uVar4 = (uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64 ^
              (uVar4 * 0x16a88000 | uVar4 * -0x3361d2af >> 0x11) * 0x1b873593;
      uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64 ^
              ((int)in_stack_00000018 * 0x16a88000 |
              (uint)((int)in_stack_00000018 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64 ^
              (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64 ^
              (iStack0000000000000020 * 0x16a88000 |
              (uint)(iStack0000000000000020 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64 ^
              (iStack0000000000000024 * 0x16a88000 |
              (uint)(iStack0000000000000024 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64 ^
              (iStack0000000000000028 * 0x16a88000 |
              (uint)(iStack0000000000000028 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64 ^
              (iStack000000000000002c * 0x16a88000 |
              (uint)(iStack000000000000002c * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar4 = (uVar4 << 0xd | uVar4 >> 0x13) * 5 + 0xe6546b64;
      uVar4 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
      uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
      iVar3 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar3);
      }
      uVar8 = *(uint *)(param_1 + 0xf0);
      pvVar7 = *(void **)(param_1 + 0xf8);
      if (uVar8 == *(uint *)(param_1 + 0xf4)) {
        uVar8 = uVar8 * 2;
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        *(uint *)(param_1 + 0xf4) = uVar8;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar8 << 4,false);
        *(void **)(param_1 + 0xf8) = pvVar7;
        if (pvVar7 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar8 = *(uint *)(param_1 + 0xf0);
      }
      puVar9 = (uint *)((long)pvVar7 + (ulong)uVar8 * 0x10);
      *(uint *)(param_1 + 0xf0) = uVar8 + 1;
      *puVar9 = uVar4 ^ uVar4 >> 0x10;
      *(long *)(puVar9 + 2) = lVar5;
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
      lVar5 = local_140;
    }
  }
  local_140 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  lVar5 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  lVar5 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<RenderingDevice::AttachmentFormat>::push_back(RenderingDevice::AttachmentFormat) [clone
   .isra.0] */

void Vector<RenderingDevice::AttachmentFormat>::push_back
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
  iVar2 = CowData<RenderingDevice::AttachmentFormat>::resize<false>
                    ((CowData<RenderingDevice::AttachmentFormat> *)(param_1 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDevice::AttachmentFormat>::_copy_on_write
                  ((CowData<RenderingDevice::AttachmentFormat> *)(param_1 + 8));
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



/* HashMap<RendererCanvasRenderRD::RIDSetKey, List<LRUCache<RendererCanvasRenderRD::RIDSetKey, RID,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   &RendererCanvasRenderRD::_before_evict>::Pair, DefaultAllocator>::Element*,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,
   List<LRUCache<RendererCanvasRenderRD::RIDSetKey, RID,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   &RendererCanvasRenderRD::_before_evict>::Pair, DefaultAllocator>::Element*> >
   >::erase(RendererCanvasRenderRD::RIDSetKey const&) [clone .isra.0] */

void __thiscall
HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
::erase(HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
        *this,RIDSetKey *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
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
  uint uVar25;
  char cVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar26 = _lookup_pos(this,param_1,&local_44);
  if (cVar26 == '\0') goto LAB_0010c86b;
  lVar8 = *(long *)(this + 0x10);
  lVar9 = *(long *)(this + 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar6);
  lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(local_44 + 1) * lVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar30;
  lVar29 = SUB168(auVar13 * auVar19,8);
  puVar1 = (uint *)(lVar8 + lVar29 * 4);
  uVar27 = SUB164(auVar13 * auVar19,8);
  uVar7 = *puVar1;
  if (uVar7 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar7 * lVar10;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar30;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar6 + uVar27) - SUB164(auVar14 * auVar20,8)) * lVar10;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar30;
    iVar28 = SUB164(auVar15 * auVar21,8);
    while (uVar25 = uVar27, iVar28 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)local_44 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar29 * 8);
      *puVar2 = uVar7;
      puVar4 = (undefined8 *)(lVar9 + (ulong)local_44 * 8);
      uVar11 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar11;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)(uVar25 + 1) * lVar10;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar30;
      lVar29 = SUB168(auVar18 * auVar24,8);
      puVar1 = (uint *)(lVar8 + lVar29 * 4);
      uVar27 = SUB164(auVar18 * auVar24,8);
      uVar7 = *puVar1;
      local_44 = uVar25;
      if (uVar7 == 0) break;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar7 * lVar10;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar30;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)((uVar27 + uVar6) - SUB164(auVar16 * auVar22,8)) * lVar10;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar30;
      iVar28 = SUB164(auVar17 * auVar23,8);
    }
  }
  uVar30 = (ulong)local_44;
  plVar5 = (long *)(lVar9 + uVar30 * 8);
  *(undefined4 *)(lVar8 + uVar30 * 4) = 0;
  plVar31 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar31) {
    *(long *)(this + 0x18) = *plVar31;
    plVar31 = (long *)*plVar5;
    if (*(long **)(this + 0x20) != plVar31) goto LAB_0010c82e;
LAB_0010c890:
    *(long *)(this + 0x20) = plVar31[1];
    plVar31 = (long *)*plVar5;
    plVar12 = (long *)plVar31[1];
  }
  else {
    if (*(long **)(this + 0x20) == plVar31) goto LAB_0010c890;
LAB_0010c82e:
    plVar12 = (long *)plVar31[1];
  }
  if (plVar12 != (long *)0x0) {
    *plVar12 = *plVar31;
    plVar31 = (long *)*plVar5;
  }
  if (*plVar31 != 0) {
    *(long *)(*plVar31 + 8) = plVar31[1];
    plVar31 = (long *)*plVar5;
  }
  Memory::free_static(plVar31,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar30 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
LAB_0010c86b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::RendererCanvasRenderRD() */

void __thiscall RendererCanvasRenderRD::RendererCanvasRenderRD(RendererCanvasRenderRD *this)

{
  ShaderRD *this_00;
  ShaderRD *this_01;
  CanvasShaderData *pCVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint *puVar4;
  code *pcVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  RendererCanvasRenderRD *pRVar9;
  RendererCanvasRenderRD *pRVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  CanvasShaderData *this_02;
  StrRange *pSVar16;
  ulong uVar17;
  Vector *pVVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  SamplerState *pSVar21;
  TextureFormat *pTVar22;
  ulong uVar23;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  RendererCanvasRenderRD *pRVar24;
  long *plVar25;
  int iVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  RIDSetKey *pRVar30;
  long in_FS_OFFSET;
  bool bVar31;
  String *local_360;
  String *local_350;
  String local_2e8 [8];
  undefined8 local_2e0;
  long local_2d8;
  undefined8 *local_2d0;
  long local_2c8;
  long local_2c0;
  undefined2 local_2b8;
  undefined1 uStack_2b6;
  undefined1 uStack_2b5;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_288;
  uint uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined8 local_260;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_258 [8];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined8 local_230;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_228 [8];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined8 local_200;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_1f8 [8];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  long local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined2 local_198;
  undefined2 uStack_196;
  undefined4 uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_160;
  undefined1 uStack_15f;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  String local_138 [8];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  ulong local_110;
  String local_108 [8];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  int local_a8 [8];
  uint local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar31 = RendererCanvasRender::singleton != (RendererCanvasRenderRD *)0x0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_001240b8;
  pRVar24 = this;
  if (bVar31) {
    _err_print_error("RendererCanvasRender","./servers/rendering/renderer_canvas_render.h",0x229,
                     "Condition \"singleton != nullptr\" is true.",
                     "A RendererCanvasRender singleton already exists.",0,0);
    pRVar24 = RendererCanvasRender::singleton;
  }
  RendererCanvasRender::singleton = pRVar24;
  *(undefined4 *)(this + 8) = 10;
  this_00 = (ShaderRD *)(this + 0x18);
  *(undefined ***)this = &PTR_request_polygon_001241e0;
  *(undefined8 *)(this + 0x10) = 0;
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x18) = &PTR__CanvasShaderRD_00124160;
  this_01 = (ShaderRD *)(this + 0x800);
  ShaderRD::setup((char *)this_00,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_ATTRIBUTES\nlayout(location = 0) in vec2 vertex_attrib;\nlayout(location = 3) in vec4 color_attrib;\nlayout(location = 4) in vec2 uv_attrib;\n\n#if defined(CUSTOM0_USED)\nlayout(location = 6) in vec4 custom0_attrib;\n#endif\n\n#if defined(CUSTOM1_USED)\nlayout(location = 7) in vec4 custom1_attrib;\n#endif\n\nlayout(location = 10) in uvec4 bone_attrib;\nlayout(location = 11) in vec4 weight_attrib;\n\n#endif\n\n#define MAX_LIGHTS_PER_ITEM 16\n\n#define M_PI 3.14159265359\n\n#define SDF_MAX_LENGTH 16384.0\n\n#define INSTANCE_FLAGS_LIGHT_COUNT_SHIFT 0 \n\n#define INSTANCE_FLAGS_CLIP_RECT_UV (1 << 4)\n#define INSTANCE_FLAGS_TRANSPOSE_RECT (1 << 5)\n#define INSTANCE_FLAGS_USE_MSDF (1 << 6)\n#define INSTANCE_FLAGS_USE_LCD (1 << 7)\n\n#define INSTANCE_FLAGS_NINEPATCH_DRAW_CENTER_SHIFT 8\n#define INSTANCE_FLAGS_NINEPATCH_H_MODE_SHIFT 9\n#define INSTANCE_FLAGS_NINEPATCH_V_MODE_SHIFT 11\n\n#define INSTANCE_FLAGS_SHADOW_MASKED_SHIFT 13 \n#define INSTANCE_FLAGS_SHADOW_MASKED (1 << INSTANCE_FLAGS_SHADOW_MASKED_SHIFT)\n\nstruct InstanceData {\n\tvec2 world_x;\n\tvec2 world_y;\n\tvec2 world_ofs;\n\tuint flags;\n\tuint instance_uniforms_ofs;\n#ifdef USE_PRIMITIVE\n\tvec2 points[3];\n\tvec2 uvs[3];\n\tuint colors[6];\n#else\n\tvec4 modulation;\n\tvec4 ninepatch_margins;\n\tvec4 dst_rect; \n\tvec4 src_rect;\n\tvec2 pad;\n\n#endif\n\tvec2 color_texture_pixel_size;\n\tuvec4 lights;\n};\n\n\n#define BATCH_FLAGS_INSTANCING_MASK 0x7F\n#define BATCH_FLAGS_INSTANCING_HAS_COLORS_SHIFT 7\n#define BATCH_FLAGS_INSTANCING_HAS_COLORS (1 << BATCH_FLAGS_INSTANCING_HAS_COLORS_SHIFT)\n#define BATCH_FLAGS_INSTANCING_HAS_CUSTOM_DATA_SHIFT 8\n#define BATCH_FLAGS_INSTANCING_HAS_CUSTOM_DATA (1 << BATCH_FLAGS_INSTANCING_HAS_CUSTOM_DATA_SHIFT)\n\n#define BATCH_FLAGS_DEFAULT_NORMAL_MAP_USED (1 << 9)\n#define BATCH_FLAGS_DEFAULT_SPECULAR_MAP_USED (1 << 10)\n\nlayout(push_constant, std430) uniform Params {\n\tuint base_instance_index; \n\tuint sc_packed_0;\n\tuint specular_shininess;\n\tuint batch_flags;\n}\nparams;\n\n\n\n#ifdef UBERSHADER\n\n\nuint sc_packed_0() {\n\treturn params.sc_packed_0;\n}\n\n#else\n\n\nlayout(con..." /* TRUNCATED STRING LITERAL */
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define MAX_LIGHTS_PER_ITEM 16\n\n#define M_PI 3.14159265359\n\n#define SDF_MAX_LENGTH 16384.0\n\n#define INSTANCE_FLAGS_LIGHT_COUNT_SHIFT 0 \n\n#define INSTANCE_FLAGS_CLIP_RECT_UV (1 << 4)\n#define INSTANCE_FLAGS_TRANSPOSE_RECT (1 << 5)\n#define INSTANCE_FLAGS_USE_MSDF (1 << 6)\n#define INSTANCE_FLAGS_USE_LCD (1 << 7)\n\n#define INSTANCE_FLAGS_NINEPATCH_DRAW_CENTER_SHIFT 8\n#define INSTANCE_FLAGS_NINEPATCH_H_MODE_SHIFT 9\n#define INSTANCE_FLAGS_NINEPATCH_V_MODE_SHIFT 11\n\n#define INSTANCE_FLAGS_SHADOW_MASKED_SHIFT 13 \n#define INSTANCE_FLAGS_SHADOW_MASKED (1 << INSTANCE_FLAGS_SHADOW_MASKED_SHIFT)\n\nstruct InstanceData {\n\tvec2 world_x;\n\tvec2 world_y;\n\tvec2 world_ofs;\n\tuint flags;\n\tuint instance_uniforms_ofs;\n#ifdef USE_PRIMITIVE\n\tvec2 points[3];\n\tvec2 uvs[3];\n\tuint colors[6];\n#else\n\tvec4 modulation;\n\tvec4 ninepatch_margins;\n\tvec4 dst_rect; \n\tvec4 src_rect;\n\tvec2 pad;\n\n#endif\n\tvec2 color_texture_pixel_size;\n\tuvec4 lights;\n};\n\n\n#define BATCH_FLAGS_INSTANCING_MASK 0x7F\n#define BATCH_FLAGS_INSTANCING_HAS_COLORS_SHIFT 7\n#define BATCH_FLAGS_INSTANCING_HAS_COLORS (1 << BATCH_FLAGS_INSTANCING_HAS_COLORS_SHIFT)\n#define BATCH_FLAGS_INSTANCING_HAS_CUSTOM_DATA_SHIFT 8\n#define BATCH_FLAGS_INSTANCING_HAS_CUSTOM_DATA (1 << BATCH_FLAGS_INSTANCING_HAS_CUSTOM_DATA_SHIFT)\n\n#define BATCH_FLAGS_DEFAULT_NORMAL_MAP_USED (1 << 9)\n#define BATCH_FLAGS_DEFAULT_SPECULAR_MAP_USED (1 << 10)\n\nlayout(push_constant, std430) uniform Params {\n\tuint base_instance_index; \n\tuint sc_packed_0;\n\tuint specular_shininess;\n\tuint batch_flags;\n}\nparams;\n\n\n\n#ifdef UBERSHADER\n\n\nuint sc_packed_0() {\n\treturn params.sc_packed_0;\n}\n\n#else\n\n\nlayout(constant_id = 0) const uint pso_sc_packed_0 = 0;\n\nuint sc_packed_0() {\n\treturn pso_sc_packed_0;\n}\n\n#endif\n\nbool sc_use_lighting() {\n\treturn ((sc_packed_0() >> 0) & 1U) != 0;\n}\n\n\n\n\n\n\n\n/* SET0: Globals */\n\n#define CANVAS_FLAGS_CONVERT_ATTRIBUTES_TO_LINEAR (1 << 0)\n\n\n\nlayout(set = 0, binding = 1, std140) uniform CanvasData {\n\tmat4 canvas_transform;\n\tmat4 screen_transform;\n\tmat4 canvas_normal_transform;\n\tvec4 ..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  ShaderCompiler::ShaderCompiler((ShaderCompiler *)(this + 0x1a8));
  uVar17 = _LC46;
  uVar19 = _UNK_0012db68;
  uVar13 = __LC174;
  *(undefined1 (*) [16])(this + 0x6d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x790) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x780) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x7d8) = (undefined1  [16])0x0;
  uVar27 = _UNK_0012db78;
  uVar20 = __LC175;
  *(undefined ***)(this + 0x750) = &PTR__RID_Alloc_001241a0;
  *(undefined1 (*) [16])(this + 0x700) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x710) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x730) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x740) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x7a8) = &PTR__RID_Alloc_001241c0;
  *(undefined8 *)(this + 0x768) = uVar13;
  *(undefined8 *)(this + 0x770) = uVar19;
  *(undefined8 *)(this + 0x7c0) = uVar20;
  *(undefined8 *)(this + 0x7c8) = uVar27;
  *(undefined4 *)(this + 0x6c0) = 0;
  *(undefined8 *)(this + 0x6e8) = 0;
  *(undefined4 *)(this + 0x6d8) = 1;
  *(ulong *)(this + 0x720) = uVar17;
  *(undefined8 *)(this + 0x758) = 0;
  *(undefined8 *)(this + 0x760) = 0;
  *(undefined8 *)(this + 0x778) = 0;
  *(undefined8 *)(this + 0x7a0) = 0;
  *(undefined4 *)(this + 0x790) = 1;
  *(undefined8 *)(this + 0x7b0) = 0;
  *(undefined8 *)(this + 0x7b8) = 0;
  *(undefined8 *)(this + 2000) = 0;
  *(undefined8 *)(this + 0x7f8) = 0;
  *(undefined4 *)(this + 0x7e8) = 1;
  ShaderRD::ShaderRD(this_01);
  *(undefined ***)(this + 0x800) = &PTR__CanvasOcclusionShaderRD_00124180;
  ShaderRD::setup((char *)this_01,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(location = 0) in highp vec3 vertex;\n\n#ifdef POSITIONAL_SHADOW\nlayout(push_constant, std430) uniform Constants {\n\tmat2x4 modelview;\n\tvec4 rotation;\n\tvec2 direction;\n\tfloat z_far;\n\tuint pad;\n\tfloat z_near;\n\tuint cull_mode;\n\tfloat pad3;\n\tfloat pad4;\n}\nconstants;\n\nlayout(set = 0, binding = 0, std430) restrict readonly buffer OccluderTransforms {\n\tmat2x4 transforms[];\n}\noccluder_transforms;\n\n#else\n\nlayout(push_constant, std430) uniform Constants {\n\tmat4 projection;\n\tmat2x4 modelview;\n\tvec2 direction;\n\tfloat z_far;\n\tuint cull_mode;\n}\nconstants;\n\n#endif\n\n#ifdef MODE_SHADOW\nlayout(location = 0) out highp float depth;\n#endif\n\nvoid main() {\n#ifdef POSITIONAL_SHADOW\n\tfloat c = -(constants.z_far + constants.z_near) / (constants.z_far - constants.z_near);\n\tfloat d = -2.0 * constants.z_far * constants.z_near / (constants.z_far - constants.z_near);\n\n\tmat4 projection = mat4(vec4(1.0, 0.0, 0.0, 0.0),\n\t\t\tvec4(0.0, 1.0, 0.0, 0.0),\n\t\t\tvec4(0.0, 0.0, c, -1.0),\n\t\t\tvec4(0.0, 0.0, d, 0.0));\n\n\t\n\t\n\t\n\tprojection *= mat4(vec4(constants.rotation.x, 0.0, constants.rotation.y, 0.0), vec4(constants.rotation.z, 0.0, constants.rotation.w, 0.0), vec4(0.0, -1.0, 0.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0));\n\tmat4 modelview = mat4(occluder_transforms.transforms[constants.pad]) * mat4(constants.modelview);\n#else\n\tmat4 projection = constants.projection;\n\tmat4 modelview = mat4(constants.modelview[0], constants.modelview[1], vec4(0.0, 0.0, 1.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0));\n#endif\n\n\thighp vec4 vtx = vec4(vertex, 1.0) * modelview;\n\n#ifdef MODE_SHADOW\n\tdepth = dot(constants.direction, vtx.xy);\n#endif\n\n\tgl_Position = projection * vtx;\n}\n\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef POSITIONAL_SHADOW\nlayout(push_constant, std430) uniform Constants {\n\tmat2x4 modelview;\n\tvec4 rotation;\n\tvec2 direction;\n\tfloat z_far;\n\tuint pad;\n\tfloat z_near;\n\tuint cull_mode;\n\tfloat pad3;\n\tfloat pad4;\n}\nconstants;\n\n#else\n\nlayout(push_constant, std430) uniform Constants {\n\tmat4 projection;\n\tmat2x4 modelview;\n\tvec2 direction;\n\tfloat z_far;\n\tuint cull_mode;\n}\nconstants;\n\n#endif\n\n#ifdef MODE_SHADOW\nlayout(location = 0) in highp float depth;\nlayout(location = 0) out highp float distance_buf;\n#else\nlayout(location = 0) out highp float sdf_buf;\n#endif\n\n#define POLYGON_CULL_DISABLED 0\n#define POLYGON_CULL_FRONT 1\n#define POLYGON_CULL_BACK 2\n\nvoid main() {\n#ifdef MODE_SHADOW\n\tbool front_facing = gl_FrontFacing;\n\tif (constants.cull_mode == POLYGON_CULL_BACK && !front_facing) {\n\t\tdiscard;\n\t} else if (constants.cull_mode == POLYGON_CULL_FRONT && front_facing) {\n\t\tdiscard;\n\t}\n\tdistance_buf = depth / constants.z_far;\n#else\n\tsdf_buf = 1.0;\n#endif\n}\n"
                  ,(char *)0x0);
  pRVar24 = this + 0xa60;
  *(undefined8 *)(this + 0x998) = 0;
  *(undefined8 *)(this + 0x9c0) = 0;
  *(ulong *)(this + 0x9f0) = uVar17;
  *(undefined8 *)(this + 0x9f8) = 0x40;
  *(ulong *)(this + 0xa28) = uVar17;
  *(ulong *)(this + 0xa58) = uVar17;
  *(undefined1 (*) [16])(this + 0x978) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x988) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  pRVar9 = pRVar24;
  do {
    *(undefined8 *)pRVar9 = 0;
    pRVar10 = pRVar9 + 0x10;
    *(undefined8 *)(pRVar9 + 8) = 0;
    uVar19 = _LC177;
    uVar13 = _LC82;
    pRVar9 = pRVar10;
  } while (this + 0xa90 != pRVar10);
  *(undefined8 *)(this + 0xa90) = 0;
  uVar27 = _LC150;
  uVar20 = __LC142;
  *(undefined8 *)(this + 0xa98) = 0;
  *(undefined8 *)(this + 0xab8) = uVar19;
  uVar19 = _LC178;
  *(undefined8 *)(this + 0xab0) = 0;
  *(undefined8 *)(this + 0xac8) = 0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xad8) = 0;
  *(undefined4 *)(this + 0xb10) = 0x800;
  *(undefined8 *)(this + 0xb18) = 0;
  *(undefined8 *)(this + 0x200b48) = 0;
  *(undefined4 *)(this + 0x200b50) = 0;
  *(undefined8 *)(this + 0x200b78) = 0;
  *(undefined8 *)(this + 0x200b80) = 0;
  this[0x200b88] = (RendererCanvasRenderRD)0x0;
  *(undefined8 *)(this + 0x200bb0) = 0;
  *(undefined8 *)(this + 0x200bb8) = uVar13;
  this[0x200bc0] = (RendererCanvasRenderRD)0x0;
  *(undefined8 *)(this + 0x200bd8) = uVar19;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200b58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200b68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200b90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200ba0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x200bc4) = uVar20;
  *(undefined8 *)(this + 0x200bcc) = uVar27;
  plVar11 = (long *)RendererRD::TextureStorage::get_singleton();
  plVar12 = (long *)RendererRD::MaterialStorage::get_singleton();
  *(undefined8 *)(this + 0x6f0) = uVar13;
  CowData<RenderingDevice::Uniform>::resize<false>
            ((CowData<RenderingDevice::Uniform> *)(this + 0xac8),5);
  local_2d8 = 0;
  uVar13 = RenderingDevice::get_singleton();
  uVar14 = RenderingDevice::limit_get(uVar13,0x15);
  if (uVar14 < 0x10000) {
    *(undefined4 *)(this + 0xb38) = 0x40;
    String::operator+=((String *)&local_2d8,"#define MAX_LIGHTS 64\n");
  }
  else {
    *(undefined4 *)(this + 0xb38) = 0x100;
    local_288 = 0;
    uStack_284 = 0;
    local_198 = 0x8379;
    uStack_196 = 0x11;
    uStack_194 = 0;
    uStack_190 = 1;
    uStack_18c = 0;
    String::parse_latin1((StrRange *)&local_288);
    itos((long)&local_198);
    operator+((char *)&local_2b8,(String *)"#define MAX_LIGHTS ");
    String::operator+((String *)&local_2c8,(String *)&local_2b8);
    String::operator+=((String *)&local_2d8,(String *)&local_2c8);
    lVar15 = local_2c8;
    if (local_2c8 == 0) {
LAB_0010f549:
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      if (lVar15 == 0) goto LAB_0010f562;
LAB_0010f556:
      LOCK();
      plVar25 = (long *)(lVar15 + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 != 0) goto LAB_0010f562;
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      if (lVar15 != 0) goto LAB_0010f56f;
LAB_0010f57b:
      lVar15 = CONCAT44(uStack_284,local_288);
    }
    else {
      LOCK();
      plVar25 = (long *)(local_2c8 + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 != 0) goto LAB_0010f549;
      local_2c8 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      if (lVar15 != 0) goto LAB_0010f556;
LAB_0010f562:
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      if (lVar15 == 0) goto LAB_0010f57b;
LAB_0010f56f:
      LOCK();
      plVar25 = (long *)(lVar15 + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 != 0) goto LAB_0010f57b;
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
      lVar15 = CONCAT44(uStack_284,local_288);
    }
    if (lVar15 != 0) {
      LOCK();
      plVar25 = (long *)(lVar15 + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 == 0) {
        lVar15 = CONCAT44(uStack_284,local_288);
        local_288 = 0;
        uStack_284 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
  }
  local_350 = (String *)&local_2d8;
  local_360 = (String *)&local_2c8;
  local_198 = 0x8379;
  uStack_196 = 0x11;
  uStack_194 = 0;
  local_288 = 0;
  uStack_284 = 0;
  uStack_190 = 1;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_288);
  itos((long)&local_198);
  operator+((char *)&local_2b8,(String *)"\n#define SAMPLERS_BINDING_FIRST_INDEX ");
  String::operator+(local_360,(StrRange *)&local_2b8);
  String::operator+=(local_350,local_360);
  lVar15 = local_2c8;
  if (local_2c8 != 0) {
    LOCK();
    plVar25 = (long *)(local_2c8 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_2c8 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  if (CONCAT44(uStack_284,local_288) == 0) {
LAB_0010ce41:
    uVar14 = (ulong)*(uint *)(this + 0xb38);
    if (uVar14 != 0) goto LAB_0010ce51;
LAB_0010f77f:
    lVar15 = 0;
  }
  else {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_284,local_288) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 != 0) goto LAB_0010ce41;
    lVar15 = CONCAT44(uStack_284,local_288);
    local_288 = 0;
    uStack_284 = 0;
    Memory::free_static((void *)(lVar15 + -0x10),false);
    uVar14 = (ulong)*(uint *)(this + 0xb38);
    if (uVar14 == 0) goto LAB_0010f77f;
LAB_0010ce51:
    lVar15 = Memory::alloc_static(uVar14 << 7,true);
    if (lVar15 == 0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      lVar15 = 0;
    }
    else {
      *(ulong *)(lVar15 + -8) = uVar14;
    }
  }
  *(long *)(this + 0xad8) = lVar15;
  uStack_280 = 0;
  uStack_27c = 0;
  local_2c8 = 0;
  local_198 = 0x8123;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)local_360);
  local_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  local_198 = 0x8123;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  String::operator+((String *)&local_198,local_360);
  Vector<String>::push_back((Vector<String> *)&local_288);
  lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  local_198 = 0x83b6;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x16;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  String::operator+((String *)&local_198,local_360);
  Vector<String>::push_back((Vector<String> *)&local_288);
  lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  local_198 = 0x83cd;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x16;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  String::operator+((String *)&local_198,local_360);
  Vector<String>::push_back((Vector<String> *)&local_288);
  lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  local_198 = 0x7988;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x2d;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  String::operator+((String *)&local_198,local_360);
  Vector<String>::push_back((Vector<String> *)&local_288);
  lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  local_198 = 0x83e4;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x17;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  String::operator+((String *)&local_198,local_360);
  Vector<String>::push_back((Vector<String> *)&local_288);
  lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  local_198 = 0x79b8;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x2e;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  String::operator+((String *)&local_198,local_360);
  Vector<String>::push_back((Vector<String> *)&local_288);
  lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_194,CONCAT22(uStack_196,local_198));
      local_198 = 0;
      uStack_196 = 0;
      uStack_194 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = local_2c8;
  if (local_2c8 != 0) {
    LOCK();
    plVar25 = (long *)(local_2c8 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_2c8 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uStack_190 = 0;
  uStack_18c = 0;
  ShaderRD::initialize((Vector *)this_00,(String *)&local_288,(Vector *)local_350);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_190);
  this_02 = (CanvasShaderData *)operator_new(0x200,"");
  CanvasShaderData::CanvasShaderData(this_02);
  *(CanvasShaderData **)(this + 0x10) = this_02;
  uVar13 = ShaderRD::version_create();
  pCVar1 = *(CanvasShaderData **)(this + 0x10);
  *(undefined8 *)(this_02 + 0xa8) = uVar13;
  lVar15 = *(long *)(pCVar1 + 0xa8);
  *(undefined4 *)(pCVar1 + 0x80) = 0;
  if (lVar15 != 0) {
    lVar15 = CanvasShaderData::get_shader(pCVar1,0,0);
  }
  *(long *)(this + 400) = lVar15;
  CowData<String>::_unref((CowData<String> *)&uStack_280);
  lVar15 = local_2d8;
  if (local_2d8 != 0) {
    LOCK();
    plVar25 = (long *)(local_2d8 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_2d8 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_19c = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  local_250 = (undefined1  [16])0x0;
  local_240 = (undefined1  [16])0x0;
  local_220 = (undefined1  [16])0x0;
  local_210 = (undefined1  [16])0x0;
  local_1f0 = (undefined1  [16])0x0;
  local_1e0 = (undefined1  [16])0x0;
  local_1d0 = _LC46;
  uStack_1c8 = _UNK_0012db88;
  local_1b8 = (undefined1  [16])0x0;
  local_260 = uVar17;
  local_230 = uVar17;
  local_200 = uVar17;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  StringName::StringName((StringName *)&local_2b8,"VERTEX",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 6;
  uStack_18c = 0;
  local_198 = 0x8403;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"LIGHT_VERTEX",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xc;
  uStack_18c = 0;
  local_198 = 0x8417;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SHADOW_VERTEX",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xd;
  uStack_18c = 0;
  local_198 = 0x8432;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"UV",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 2;
  uStack_18c = 0;
  local_198 = 0x8443;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"POINT_SIZE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 10;
  uStack_18c = 0;
  local_198 = 0x8451;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"MODEL_MATRIX",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xc;
  uStack_18c = 0;
  local_198 = 0x8469;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"CANVAS_MATRIX",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x1c;
  uStack_18c = 0;
  local_198 = 0x8484;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SCREEN_MATRIX",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x1c;
  uStack_18c = 0;
  local_198 = 0x84af;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"TIME",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x10;
  uStack_18c = 0;
  local_198 = 0x84d1;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"PI",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x1e;
  uStack_18c = 0;
  local_198 = 0x79e8;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"TAU",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x1e;
  uStack_18c = 0;
  local_198 = 0x7a08;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"E",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x1e;
  uStack_18c = 0;
  local_198 = 0x7a28;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"AT_LIGHT_PASS",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 5;
  uStack_18c = 0;
  local_198 = 0x84f9;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"INSTANCE_CUSTOM",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xf;
  uStack_18c = 0;
  local_198 = 0x850f;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"COLOR",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 5;
  uStack_18c = 0;
  local_198 = 0x8525;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"NORMAL",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 6;
  uStack_18c = 0;
  local_198 = 0x8532;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"NORMAL_MAP",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 10;
  uStack_18c = 0;
  local_198 = 0x8544;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"NORMAL_MAP_DEPTH",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x10;
  uStack_18c = 0;
  local_198 = 0x8560;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"TEXTURE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xd;
  uStack_18c = 0;
  local_198 = 0x8579;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"TEXTURE_PIXEL_SIZE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x22;
  uStack_18c = 0;
  local_198 = 0x7a48;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"NORMAL_TEXTURE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xe;
  uStack_18c = 0;
  local_198 = 0x85a9;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SPECULAR_SHININESS_TEXTURE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x10;
  uStack_18c = 0;
  local_198 = 0x85d3;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SPECULAR_SHININESS",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x12;
  uStack_18c = 0;
  local_198 = 0x85f7;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SCREEN_UV",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 9;
  uStack_18c = 0;
  local_198 = 0x8614;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SCREEN_PIXEL_SIZE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x1d;
  uStack_18c = 0;
  local_198 = 0x8630;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"FRAGCOORD",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xc;
  uStack_18c = 0;
  local_198 = 0x8658;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"POINT_COORD",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xd;
  uStack_18c = 0;
  local_198 = 0x8671;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"INSTANCE_ID",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x10;
  uStack_18c = 0;
  local_198 = 0x868b;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"VERTEX_ID",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xe;
  uStack_18c = 0;
  local_198 = 0x86a6;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"CUSTOM0",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 7;
  uStack_18c = 0;
  local_198 = 0x86bd;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"CUSTOM1",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 7;
  uStack_18c = 0;
  local_198 = 0x86cd;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"LIGHT_POSITION",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xe;
  uStack_18c = 0;
  local_198 = 0x86e4;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"LIGHT_DIRECTION",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xf;
  uStack_18c = 0;
  local_198 = 0x8703;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"LIGHT_IS_DIRECTIONAL",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xe;
  uStack_18c = 0;
  local_198 = 0x8728;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"LIGHT_COLOR",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xb;
  uStack_18c = 0;
  local_198 = 0x8743;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"LIGHT_ENERGY",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xc;
  uStack_18c = 0;
  local_198 = 0x875c;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"LIGHT",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 5;
  uStack_18c = 0;
  local_198 = 0x876f;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SHADOW_MODULATE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xf;
  uStack_18c = 0;
  local_198 = 0x8785;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"texture_sdf",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0xb;
  uStack_18c = 0;
  local_198 = 0x8795;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"texture_sdf_normal",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x12;
  uStack_18c = 0;
  local_198 = 0x87a1;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"sdf_to_screen_uv",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x10;
  uStack_18c = 0;
  local_198 = 0x87b4;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"screen_uv_to_sdf",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_288,(StringName *)&local_2b8);
  uStack_190 = 0x10;
  uStack_18c = 0;
  local_198 = 0x87c5;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"COLOR",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x13;
  uStack_18c = 0;
  local_198 = 0x87d6;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SCREEN_UV",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x17;
  uStack_18c = 0;
  local_198 = 0x87ea;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SCREEN_PIXEL_SIZE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 10;
  uStack_18c = 0;
  local_198 = 0x8802;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"NORMAL",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x14;
  uStack_18c = 0;
  local_198 = 0x880d;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"NORMAL_MAP",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x18;
  uStack_18c = 0;
  local_198 = 0x8822;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SPECULAR_SHININESS",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x20;
  uStack_18c = 0;
  local_198 = 0x7a70;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"POINT_SIZE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x17;
  uStack_18c = 0;
  local_198 = 0x883b;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"CUSTOM0",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x15;
  uStack_18c = 0;
  local_198 = 0x8853;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"CUSTOM1",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_228,(StringName *)&local_2b8);
  uStack_190 = 0x15;
  uStack_18c = 0;
  local_198 = 0x8869;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"skip_vertex_transform",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_258,(StringName *)&local_2b8);
  uStack_190 = 0x1c;
  uStack_18c = 0;
  local_198 = 0x8895;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"unshaded",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_258,(StringName *)&local_2b8);
  uStack_190 = 0x16;
  uStack_18c = 0;
  local_198 = 0x88bb;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"light_only",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_258,(StringName *)&local_2b8);
  uStack_190 = 0x18;
  uStack_18c = 0;
  local_198 = 0x88dd;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"world_vertex_coords",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_258,(StringName *)&local_2b8);
  uStack_190 = 0x20;
  uStack_18c = 0;
  local_198 = 0x7a98;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"TEXTURE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_2b8);
  local_198 = 0x890a;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0xf;
  uStack_18c = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"NORMAL_TEXTURE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_2b8);
  local_198 = 0x890a;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0xf;
  uStack_18c = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2b8,"SPECULAR_SHININESS_TEXTURE",false);
  pSVar16 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_2b8);
  local_198 = 0x890a;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0xf;
  uStack_18c = 0;
  String::parse_latin1(pSVar16);
  if ((StringName::configured != '\0') &&
     (CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8))) != 0)) {
    StringName::unref();
  }
  uStack_190 = 9;
  uStack_18c = 0;
  local_1c0 = _LC76;
  local_198 = 0x891a;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1((StrRange *)local_1b8);
  uStack_1c8 = 1;
  local_198 = 0x8924;
  uStack_196 = 0x11;
  uStack_194 = 0;
  local_1a0 = 5;
  uStack_190 = 0x1b;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)(local_1b8 + 8));
  uStack_190 = 0x34;
  uStack_18c = 0;
  local_198 = 0x7ac0;
  uStack_196 = 0x11;
  uStack_194 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_170 = 0;
  uStack_16c = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  lVar15 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_260 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_260 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + lVar15 * 4)) {
        local_170 = (undefined4)lVar15;
        goto LAB_0010e9c1;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010e9c1:
  if (local_260._4_4_ != 0) {
    for (puVar2 = (undefined8 *)CONCAT44(uStack_26c,uStack_270); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_2b8,(String *)&local_198,(bool)((char)puVar2 + '\x10'));
    }
  }
  local_140 = 0;
  local_160 = 0;
  uStack_15f = 0;
  uStack_15e = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  local_150 = 0;
  uStack_148 = 0;
  uVar17 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_230 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_230 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar17 * 4)) {
        local_140 = uVar17 & 0xffffffff;
        goto LAB_0010ea79;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010ea79:
  if ((local_230._4_4_ != 0) && ((long *)local_240._0_8_ != (long *)0x0)) {
    plVar25 = (long *)local_240._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_2b8,(String *)&uStack_168,(bool)((char)plVar25 + '\x10'));
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
  local_110 = 0;
  local_130 = (undefined1  [16])0x0;
  local_120 = (undefined1  [16])0x0;
  uVar17 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_200 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_200 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar17 * 4)) {
        local_110 = uVar17 & 0xffffffff;
        goto LAB_0010eb4b;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010eb4b:
  if ((local_200._4_4_ != 0) && ((long *)local_210._0_8_ != (long *)0x0)) {
    plVar25 = (long *)local_210._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_2b8,local_138,(bool)((char)plVar25 + '\x10'));
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
  local_e0 = 0;
  local_100 = (undefined1  [16])0x0;
  local_f0 = (undefined1  [16])0x0;
  uVar17 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_1d0 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_1d0 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar17 * 4)) {
        local_e0 = uVar17 & 0xffffffff;
        goto LAB_0010ec23;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010ec23:
  if ((local_1d0._4_4_ != 0) && ((long *)local_1e0._0_8_ != (long *)0x0)) {
    plVar25 = (long *)local_1e0._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_2b8,local_108,(bool)((char)plVar25 + '\x10'));
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
  local_c8 = 0;
  local_d8 = uStack_1c8;
  local_d0 = local_1c0;
  if (local_1b8._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_1b8);
  }
  local_c0 = 0;
  if (local_1b8._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_1b8 + 8));
  }
  local_b8 = 0;
  if (local_1a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_1a8);
  }
  local_b0 = local_1a0;
  local_ac = local_19c;
  ShaderCompiler::initialize((ShaderCompiler *)(this + 0x1a8),(String *)&local_198);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_198);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_288);
  local_198 = 0x8948;
  uStack_196 = 0x11;
  uStack_194 = 0;
  local_2e0 = 0;
  local_288 = 0;
  uStack_284 = 0;
  uStack_190 = 0x15;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_288);
  Vector<String>::push_back((Vector<String> *)local_2e8);
  if (CONCAT44(uStack_284,local_288) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_284,local_288) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_284,local_288);
      local_288 = 0;
      uStack_284 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_288 = 0;
  uStack_284 = 0;
  local_198 = 0x7b40;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x2f;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_288);
  Vector<String>::push_back((Vector<String> *)local_2e8);
  if (CONCAT44(uStack_284,local_288) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_284,local_288) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_284,local_288);
      local_288 = 0;
      uStack_284 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_288 = 0;
  uStack_284 = 0;
  local_198 = 0x895e;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x12;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_288);
  Vector<String>::push_back((Vector<String> *)local_2e8);
  if (CONCAT44(uStack_284,local_288) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_284,local_288) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_284,local_288);
      local_288 = 0;
      uStack_284 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uStack_280 = 0;
  uStack_27c = 0;
  local_198 = 0x8123;
  uStack_196 = 0x11;
  uStack_194 = 0;
  local_2b8 = 0;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  ShaderRD::initialize((Vector *)this_01,local_2e8,(Vector *)&local_2b8);
  lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
  if (lVar15 != 0) {
    LOCK();
    plVar25 = (long *)(lVar15 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT12(uStack_2b6,local_2b8)));
      local_2b8 = 0;
      uStack_2b6 = 0;
      uStack_2b5 = 0;
      uStack_2b4 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_280);
  uStack_190 = 0;
  uStack_18c = 0;
  local_2b8 = 99;
  uStack_2b6 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 3;
  Vector<RenderingDevice::AttachmentFormat>::push_back((String *)&local_198,99,3);
  local_288 = 0x7d;
  uStack_284 = 0;
  uStack_280 = 4;
  Vector<RenderingDevice::AttachmentFormat>::push_back((String *)&local_198,0x7d,4);
  pVVar18 = (Vector *)RenderingDevice::get_singleton();
  uVar8 = (uint)(String *)&local_198;
  uVar13 = RenderingDevice::framebuffer_format_create(pVVar18,uVar8);
  *(undefined8 *)(this + 0x9b0) = uVar13;
  if (CONCAT44(uStack_18c,uStack_190) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_18c,uStack_190);
      uStack_190 = 0;
      uStack_18c = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uStack_190 = 0;
  uStack_18c = 0;
  local_288 = (undefined4)_LC134;
  uStack_284 = (uint)((ulong)_LC134 >> 0x20);
  uStack_280 = 0xb;
  Vector<RenderingDevice::AttachmentFormat>::push_back((String *)&local_198,8,0xb);
  pVVar18 = (Vector *)RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::framebuffer_format_create(pVVar18,uVar8);
  *(undefined8 *)(this + 0x9b8) = uVar13;
  if (CONCAT44(uStack_18c,uStack_190) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_18c,uStack_190);
      uStack_190 = 0;
      uStack_18c = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_2d0 = (undefined8 *)0x0;
  iVar7 = CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>
                    ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_2d0,1);
  if (iVar7 == 0) {
    if (local_2d0 == (undefined8 *)0x0) {
      lVar29 = -1;
      lVar15 = 0;
    }
    else {
      lVar15 = local_2d0[-1];
      lVar29 = lVar15 + -1;
      if (-1 < lVar29) {
        CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_2d0);
        uVar19 = _UNK_0012db98;
        uVar13 = __LC299;
        puVar2 = (undefined8 *)((long)local_2d0 + lVar29 * 0x14);
        *(undefined4 *)(puVar2 + 2) = 0;
        *puVar2 = uVar13;
        puVar2[1] = uVar19;
        goto LAB_0010f03d;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar29,lVar15,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010f03d:
  pVVar18 = (Vector *)RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::vertex_format_create(pVVar18);
  *(undefined8 *)(this + 0x9a0) = uVar13;
  if (local_2d0 == (undefined8 *)0x0) {
    lVar15 = 0;
LAB_00110dc5:
    _err_print_index_error
              ("operator[]","./core/templates/vector.h",0x38,0,lVar15,"p_index",
               "((Vector<T> *)(this))->_cowdata.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar15 = local_2d0[-1];
  if (lVar15 < 1) goto LAB_00110dc5;
  CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write
            ((CowData<RenderingDeviceCommons::VertexAttribute> *)&local_2d0);
  uVar19 = _UNK_0012dba8;
  uVar13 = __LC300;
  *(undefined4 *)(local_2d0 + 2) = 0;
  *local_2d0 = uVar13;
  local_2d0[1] = uVar19;
  pVVar18 = (Vector *)RenderingDevice::get_singleton();
  uVar17 = 0;
  uVar13 = RenderingDevice::vertex_format_create(pVVar18);
  *(undefined8 *)(this + 0x9a8) = uVar13;
  uVar13 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x978) = uVar13;
LAB_0010f0df:
  local_2b8 = 0;
  local_198 = (undefined2)_LC303;
  uStack_2b6 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = uStack_2ac & 0xffffff00;
  uStack_298 = 1;
  uStack_190 = uStack_190 & 0xffffff00;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = uStack_184 & 0xffffff00;
  local_150 = 0;
  uStack_194 = 1;
  local_2a8 = __LC142;
  uStack_2a0 = (undefined4)_LC150;
  uStack_29c = (undefined4)((ulong)_LC150 >> 0x20);
  uStack_180 = (undefined4)__LC166;
  uStack_17c = (uint)((ulong)__LC166 >> 0x20);
  uStack_178 = (undefined4)_LC162;
  uStack_174 = (undefined4)((ulong)_LC162 >> 0x20);
  local_170 = (undefined4)__LC301;
  uStack_16c = (undefined4)((ulong)__LC301 >> 0x20);
  uStack_168 = (undefined4)_UNK_0012dbb8;
  uStack_164 = (undefined4)((ulong)_UNK_0012dbb8 >> 0x20);
  local_160 = (undefined1)__LC302;
  uStack_15f = (undefined1)((ulong)__LC302 >> 8);
  uStack_15e = (undefined2)((ulong)__LC302 >> 0x10);
  uStack_15c = (undefined4)((ulong)__LC302 >> 0x20);
  uStack_158 = (undefined4)_UNK_0012dbc8;
  uStack_154 = (undefined4)((ulong)_UNK_0012dbc8 >> 0x20);
  uVar19 = RenderingDevice::get_singleton();
  local_2c0 = 0;
  local_288 = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_26c = _LC303;
  local_88 = local_88 & 0xffffff00;
  uStack_84 = 0;
  local_78 = 0;
  local_70 = __LC142;
  uStack_68 = _LC150;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  lVar15 = (ulong)_LC303 << 0x20;
  Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(&local_80);
  local_288 = 0;
  uStack_284 = uStack_284 & 0xffffff00;
  uVar14 = *(ulong *)(this + 0x978);
  uVar13 = *(undefined8 *)(this + 0x9b0);
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (*(long *)(this + 0x818) == 0) {
    lVar29 = 0;
LAB_0010fe09:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar17,lVar29
               ,"p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar29 = *(long *)(*(long *)(this + 0x818) + -8);
    if (lVar29 <= (long)uVar17) goto LAB_0010fe09;
    lVar29 = *(long *)(this + 0x828);
    uVar23 = uVar17;
    if (lVar29 == 0) {
LAB_00110cb0:
      lVar28 = 0;
      uVar23 = uVar17;
      goto LAB_0010ff1b;
    }
    lVar28 = *(long *)(lVar29 + -8);
    if (lVar28 <= (long)uVar17) goto LAB_0010ff1b;
    if (*(char *)(lVar29 + uVar17) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar20 = 0;
      goto LAB_0010f389;
    }
    if ((uVar14 == 0) || (*(uint *)(this + 0x8d4) <= (uint)uVar14)) {
LAB_00110f20:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar20 = 0;
      goto LAB_0010f389;
    }
    lVar29 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x8d0)) * 0xa0 +
             *(long *)(*(long *)(this + 0x8c0) +
                      ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x8d0)) * 8);
    if (*(int *)(lVar29 + 0x98) != (int)(uVar14 >> 0x20)) {
      if (*(int *)(lVar29 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,lVar15);
      }
      goto LAB_00110f20;
    }
    iVar7 = (int)lVar29;
    if (*(char *)(lVar29 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_01);
      lVar15 = *(long *)(this + 0x878);
      if (lVar15 != 0) {
        lVar28 = 0;
        do {
          if (*(long *)(lVar15 + -8) <= lVar28) break;
          if (*(char *)(lVar15 + lVar28) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_01,iVar7);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_01,iVar7);
          }
          lVar15 = *(long *)(this + 0x878);
          lVar28 = lVar28 + 1;
        } while (lVar15 != 0);
      }
    }
    lVar15 = *(long *)(this + 0x838);
    if (lVar15 == 0) goto LAB_00110cb0;
    lVar28 = *(long *)(lVar15 + -8);
    if (lVar28 <= (long)uVar17) goto LAB_0010ff1b;
    uVar23 = (ulong)*(uint *)(lVar15 + uVar17 * 4);
    lVar15 = *(long *)(lVar29 + 0x68);
    if (lVar15 == 0) goto LAB_00110d50;
    lVar28 = *(long *)(lVar15 + -8);
    if (lVar28 <= (long)uVar23) goto LAB_0010ff1b;
    if (*(long *)(lVar15 + uVar23 * 8) != 0) {
      ShaderRD::_compile_version_end((Version *)this_01,iVar7);
      if (*(char *)(lVar29 + 0x90) == '\0') goto LAB_0010fe43;
LAB_0010f368:
      lVar15 = *(long *)(lVar29 + 0x88);
      if (lVar15 == 0) goto LAB_00110cb0;
      lVar28 = *(long *)(lVar15 + -8);
      uVar23 = uVar17;
      if ((long)uVar17 < lVar28) {
        uVar20 = *(undefined8 *)(lVar15 + uVar17 * 8);
        goto LAB_0010f389;
      }
      goto LAB_0010ff1b;
    }
    if (*(char *)(lVar29 + 0x90) != '\0') goto LAB_0010f368;
  }
LAB_0010fe43:
  uVar20 = 0;
LAB_0010f389:
  uVar13 = RenderingDevice::render_pipeline_create(uVar19,uVar20,uVar13);
  *(undefined8 *)(this + ((long)(int)uVar17 + 0x130) * 8) = uVar13;
  if (CONCAT44(uStack_26c,uStack_270) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_26c,uStack_270) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_26c,uStack_270);
      uStack_270 = 0;
      uStack_26c = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar25 = (long *)(local_78 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = local_2c0;
  if (local_2c0 != 0) {
    LOCK();
    plVar25 = (long *)(local_2c0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_2c0 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  if (uVar17 != 0) goto LAB_0010fa00;
  uVar17 = 1;
  goto LAB_0010f0df;
LAB_0010fa00:
  iVar7 = 0;
  do {
    uVar20 = RenderingDevice::get_singleton();
    local_198 = 0;
    uStack_196 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    local_2c0 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = _LC303;
    local_88 = local_88 & 0xffffff00;
    uStack_84 = 0;
    local_78 = 0;
    local_70 = __LC142;
    uStack_68 = _LC150;
    lVar15 = (ulong)_LC303 << 0x20;
    Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(&local_80);
    uStack_29c = 0x3f800000;
    uStack_298 = 1;
    uVar13 = *(undefined8 *)(this + 0x9a8);
    uStack_268 = 0;
    uVar17 = *(ulong *)(this + 0x978);
    local_198 = 0;
    uStack_196 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    uVar19 = *(undefined8 *)(this + 0x9b8);
    uStack_188 = 0;
    uStack_184 = 0;
    local_170 = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_154 = 0;
    local_150 = 0;
    local_2b8 = 0;
    uStack_2b6 = 0;
    uStack_2b5 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_194 = 7;
    local_288 = 0;
    uStack_284 = uStack_284 & 0xffffff00;
    uStack_280 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_180 = (undefined4)__LC166;
    uStack_17c = (uint)((ulong)__LC166 >> 0x20);
    uStack_178 = (undefined4)_LC162;
    uStack_174 = (undefined4)((ulong)_LC162 >> 0x20);
    local_160 = (undefined1)((ulong)__LC166 >> 0x20);
    uStack_15f = (undefined1)((ulong)__LC166 >> 0x28);
    uStack_15e = (undefined2)((ulong)__LC166 >> 0x30);
    uStack_2ac = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    uStack_164 = uStack_180;
    uStack_15c = uStack_178;
    uStack_158 = uStack_174;
    if (*(long *)(this + 0x818) == 0) {
      lVar29 = 0;
LAB_00110f4f:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar29,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0010fc70:
      uVar27 = 0;
    }
    else {
      lVar29 = *(long *)(*(long *)(this + 0x818) + -8);
      if (lVar29 < 3) goto LAB_00110f4f;
      lVar29 = *(long *)(this + 0x828);
      if (lVar29 == 0) goto LAB_0010fef8;
      lVar28 = *(long *)(lVar29 + -8);
      if (lVar28 < 3) goto LAB_0010fefb;
      if (*(char *)(lVar29 + 2) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_0010fc70;
      }
      if ((uVar17 == 0) || (*(uint *)(this + 0x8d4) <= (uint)uVar17)) {
LAB_001110c0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_0010fc70;
      }
      lVar29 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(this + 0x8d0)) * 0xa0 +
               *(long *)(*(long *)(this + 0x8c0) +
                        ((uVar17 & 0xffffffff) / (ulong)*(uint *)(this + 0x8d0)) * 8);
      if (*(int *)(lVar29 + 0x98) != (int)(uVar17 >> 0x20)) {
        if (*(int *)(lVar29 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,lVar15);
        }
        goto LAB_001110c0;
      }
      iVar26 = (int)lVar29;
      if (*(char *)(lVar29 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_01);
        lVar15 = *(long *)(this + 0x878);
        if (lVar15 != 0) {
          lVar28 = 0;
          do {
            if (*(long *)(lVar15 + -8) <= lVar28) break;
            if (*(char *)(lVar15 + lVar28) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_01,iVar26);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_01,iVar26);
            }
            lVar15 = *(long *)(this + 0x878);
            lVar28 = lVar28 + 1;
          } while (lVar15 != 0);
        }
      }
      lVar15 = *(long *)(this + 0x838);
      if (lVar15 == 0) goto LAB_0010fef8;
      lVar28 = *(long *)(lVar15 + -8);
      if (lVar28 < 3) goto LAB_0010fefb;
      uVar23 = (ulong)*(uint *)(lVar15 + 8);
      lVar15 = *(long *)(lVar29 + 0x68);
      if (lVar15 == 0) goto LAB_00110d50;
      lVar28 = *(long *)(lVar15 + -8);
      if (lVar28 <= (long)uVar23) goto LAB_0010ff1b;
      if (*(long *)(lVar15 + uVar23 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_01,iVar26);
      }
      if (*(char *)(lVar29 + 0x90) == '\0') goto LAB_0010fc70;
      lVar15 = *(long *)(lVar29 + 0x88);
      if (lVar15 == 0) goto LAB_0010fef8;
      lVar28 = *(long *)(lVar15 + -8);
      if (lVar28 < 3) goto LAB_0010fefb;
      uVar27 = *(undefined8 *)(lVar15 + 0x10);
    }
    uVar13 = RenderingDevice::render_pipeline_create
                       (uVar20,uVar27,uVar19,uVar13,(-(iVar7 == 0) & 4U) + 1,(StrRange *)&local_2b8,
                        (StrRange *)&local_288,(String *)&local_198,&local_88,0,0,local_360);
    *(undefined8 *)(this + ((long)iVar7 + 0x132) * 8) = uVar13;
    if (CONCAT44(uStack_26c,uStack_270) != 0) {
      LOCK();
      plVar25 = (long *)(CONCAT44(uStack_26c,uStack_270) + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 == 0) {
        lVar15 = CONCAT44(uStack_26c,uStack_270);
        uStack_270 = 0;
        uStack_26c = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    lVar15 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar25 = (long *)(local_78 + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    lVar15 = local_2c0;
    if (local_2c0 != 0) {
      LOCK();
      plVar25 = (long *)(local_2c0 + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 == 0) {
        local_2c0 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    if (iVar7 != 0) break;
    iVar7 = 1;
  } while( true );
  uVar13 = RenderingDevice::get_singleton();
  uVar17 = *(ulong *)(this + 0x978);
  if (*(long *)(this + 0x818) != 0) {
    lVar15 = *(long *)(*(long *)(this + 0x818) + -8);
    if (lVar15 < 1) goto LAB_00111224;
    pcVar3 = *(char **)(this + 0x828);
    if (pcVar3 == (char *)0x0) {
LAB_00110f90:
      lVar28 = 0;
LAB_00110f93:
      uVar23 = 0;
      goto LAB_0010ff1b;
    }
    lVar28 = *(long *)(pcVar3 + -8);
    if (lVar28 < 1) goto LAB_00110f93;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar19 = 0;
      uVar23 = extraout_RDX_05;
      goto LAB_0011006d;
    }
    if ((uVar17 == 0) || (*(uint *)(this + 0x8d4) <= (uint)uVar17)) {
LAB_00111408:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar19 = 0;
      uVar23 = extraout_RDX_06;
      goto LAB_0011006d;
    }
    lVar15 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(this + 0x8d0)) * 0xa0 +
             *(long *)(*(long *)(this + 0x8c0) +
                      ((uVar17 & 0xffffffff) / (ulong)*(uint *)(this + 0x8d0)) * 8);
    if (*(int *)(lVar15 + 0x98) != (int)(uVar17 >> 0x20)) {
      if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00111408;
    }
    iVar7 = (int)lVar15;
    if (*(char *)(lVar15 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_01);
      lVar29 = *(long *)(this + 0x878);
      if (lVar29 != 0) {
        lVar28 = 0;
        do {
          if (*(long *)(lVar29 + -8) <= lVar28) break;
          if (*(char *)(lVar29 + lVar28) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_01,iVar7);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_01,iVar7);
          }
          lVar29 = *(long *)(this + 0x878);
          lVar28 = lVar28 + 1;
        } while (lVar29 != 0);
      }
    }
    puVar4 = *(uint **)(this + 0x838);
    if (puVar4 == (uint *)0x0) goto LAB_00110f90;
    lVar28 = *(long *)(puVar4 + -2);
    if (lVar28 < 1) goto LAB_00110f93;
    uVar23 = (ulong)*puVar4;
    lVar29 = *(long *)(lVar15 + 0x68);
    if (lVar29 != 0) {
      lVar28 = *(long *)(lVar29 + -8);
      if (lVar28 <= (long)uVar23) goto LAB_0010ff1b;
      if (*(long *)(lVar29 + uVar23 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_01,iVar7);
        uVar23 = extraout_RDX;
      }
      if (*(char *)(lVar15 + 0x90) != '\0') {
        puVar2 = *(undefined8 **)(lVar15 + 0x88);
        if (puVar2 == (undefined8 *)0x0) goto LAB_00110f90;
        lVar28 = puVar2[-1];
        if (0 < lVar28) {
          uVar19 = *puVar2;
          goto LAB_0011006d;
        }
        goto LAB_00110f93;
      }
      goto LAB_0011125d;
    }
LAB_00110d50:
    lVar28 = 0;
    goto LAB_0010ff1b;
  }
  lVar15 = 0;
LAB_00111224:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar15,
             "p_variant","variant_defines.size()","",false,false);
  uVar23 = extraout_RDX_01;
LAB_0011125d:
  uVar19 = 0;
LAB_0011006d:
  RenderingDevice::shader_destroy_modules(uVar13,uVar19,uVar23);
  uVar13 = RenderingDevice::get_singleton();
  uVar17 = *(ulong *)(this + 0x978);
  if (*(long *)(this + 0x818) == 0) {
    lVar15 = 0;
LAB_0011126b:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar15,
               "p_variant","variant_defines.size()","",false,false);
    uVar23 = extraout_RDX_02;
LAB_001112a7:
    uVar19 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)(this + 0x818) + -8);
    if (lVar15 < 2) goto LAB_0011126b;
    lVar15 = *(long *)(this + 0x828);
    if (lVar15 == 0) {
LAB_0011114d:
      lVar28 = 0;
LAB_00111150:
      uVar23 = 1;
      goto LAB_0010ff1b;
    }
    lVar28 = *(long *)(lVar15 + -8);
    if (lVar28 < 2) goto LAB_00111150;
    if (*(char *)(lVar15 + 1) != '\0') {
      if ((uVar17 == 0) || (*(uint *)(this + 0x8d4) <= (uint)uVar17)) {
LAB_001114a1:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar19 = 0;
        uVar23 = extraout_RDX_08;
        goto LAB_0011019f;
      }
      lVar15 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(this + 0x8d0)) * 0xa0 +
               *(long *)(*(long *)(this + 0x8c0) +
                        ((uVar17 & 0xffffffff) / (ulong)*(uint *)(this + 0x8d0)) * 8);
      if (*(int *)(lVar15 + 0x98) != (int)(uVar17 >> 0x20)) {
        if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_001114a1;
      }
      iVar7 = (int)lVar15;
      if (*(char *)(lVar15 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_01);
        lVar29 = *(long *)(this + 0x878);
        if (lVar29 != 0) {
          lVar28 = 0;
          do {
            if (*(long *)(lVar29 + -8) <= lVar28) break;
            if (*(char *)(lVar29 + lVar28) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_01,iVar7);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_01,iVar7);
            }
            lVar29 = *(long *)(this + 0x878);
            lVar28 = lVar28 + 1;
          } while (lVar29 != 0);
        }
      }
      lVar29 = *(long *)(this + 0x838);
      if (lVar29 == 0) goto LAB_0011114d;
      lVar28 = *(long *)(lVar29 + -8);
      if (lVar28 < 2) goto LAB_00111150;
      uVar23 = (ulong)*(uint *)(lVar29 + 4);
      lVar29 = *(long *)(lVar15 + 0x68);
      if (lVar29 == 0) goto LAB_00110d50;
      lVar28 = *(long *)(lVar29 + -8);
      if (lVar28 <= (long)uVar23) goto LAB_0010ff1b;
      if (*(long *)(lVar29 + uVar23 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_01,iVar7);
        uVar23 = extraout_RDX_00;
      }
      if (*(char *)(lVar15 + 0x90) != '\0') {
        lVar15 = *(long *)(lVar15 + 0x88);
        if (lVar15 == 0) goto LAB_0011114d;
        lVar28 = *(long *)(lVar15 + -8);
        if (1 < lVar28) {
          uVar19 = *(undefined8 *)(lVar15 + 8);
          goto LAB_0011019f;
        }
        goto LAB_00111150;
      }
      goto LAB_001112a7;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    uVar19 = 0;
    uVar23 = extraout_RDX_07;
  }
LAB_0011019f:
  RenderingDevice::shader_destroy_modules(uVar13,uVar19,uVar23);
  uVar13 = RenderingDevice::get_singleton();
  uVar17 = *(ulong *)(this + 0x978);
  if (*(long *)(this + 0x818) == 0) {
    lVar15 = 0;
LAB_001112b3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar15,
               "p_variant","variant_defines.size()","",false,false);
    uVar23 = extraout_RDX_03;
LAB_001112ef:
    uVar19 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)(this + 0x818) + -8);
    if (lVar15 < 3) goto LAB_001112b3;
    lVar15 = *(long *)(this + 0x828);
    if (lVar15 == 0) {
LAB_0010fef8:
      lVar28 = 0;
LAB_0010fefb:
      uVar23 = 2;
LAB_0010ff1b:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar23,lVar28,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar28 = *(long *)(lVar15 + -8);
    if (lVar28 < 3) goto LAB_0010fefb;
    if (*(char *)(lVar15 + 2) != '\0') {
      if ((uVar17 == 0) || (*(uint *)(this + 0x8d4) <= (uint)uVar17)) {
LAB_00111559:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar19 = 0;
        uVar23 = extraout_RDX_10;
        goto LAB_001102ce;
      }
      lVar15 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(this + 0x8d0)) * 0xa0 +
               *(long *)(*(long *)(this + 0x8c0) +
                        ((uVar17 & 0xffffffff) / (ulong)*(uint *)(this + 0x8d0)) * 8);
      if (*(int *)(lVar15 + 0x98) != (int)(uVar17 >> 0x20)) {
        if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00111559;
      }
      iVar7 = (int)lVar15;
      if (*(char *)(lVar15 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)this_01);
        lVar29 = *(long *)(this + 0x878);
        if (lVar29 != 0) {
          lVar28 = 0;
          do {
            if (*(long *)(lVar29 + -8) <= lVar28) break;
            if (*(char *)(lVar29 + lVar28) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)this_01,iVar7);
            }
            else {
              ShaderRD::_compile_version_start((Version *)this_01,iVar7);
            }
            lVar29 = *(long *)(this + 0x878);
            lVar28 = lVar28 + 1;
          } while (lVar29 != 0);
        }
      }
      lVar29 = *(long *)(this + 0x838);
      if (lVar29 == 0) goto LAB_0010fef8;
      lVar28 = *(long *)(lVar29 + -8);
      if (lVar28 < 3) goto LAB_0010fefb;
      uVar23 = (ulong)*(uint *)(lVar29 + 8);
      lVar29 = *(long *)(lVar15 + 0x68);
      if (lVar29 == 0) goto LAB_00110d50;
      lVar28 = *(long *)(lVar29 + -8);
      if (lVar28 <= (long)uVar23) goto LAB_0010ff1b;
      if (*(long *)(lVar29 + uVar23 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)this_01,iVar7);
        uVar23 = extraout_RDX_04;
      }
      if (*(char *)(lVar15 + 0x90) != '\0') {
        lVar15 = *(long *)(lVar15 + 0x88);
        if (lVar15 == 0) goto LAB_0010fef8;
        lVar28 = *(long *)(lVar15 + -8);
        if (2 < lVar28) {
          uVar19 = *(undefined8 *)(lVar15 + 0x10);
          goto LAB_001102ce;
        }
        goto LAB_0010fefb;
      }
      goto LAB_001112ef;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    uVar19 = 0;
    uVar23 = extraout_RDX_09;
  }
LAB_001102ce:
  RenderingDevice::shader_destroy_modules(uVar13,uVar19,uVar23);
  puVar2 = local_2d0;
  if (local_2d0 != (undefined8 *)0x0) {
    LOCK();
    plVar25 = local_2d0 + -2;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_2d0 = (undefined8 *)0x0;
      Memory::free_static(puVar2 + -2,false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_2e0);
  uVar13 = RenderingDevice::get_singleton();
  uStack_190 = 0;
  uStack_18c = 0;
  uVar13 = RenderingDevice::uniform_buffer_create(uVar13,0x110,(String *)&local_198,0);
  *(undefined8 *)(this + 0xae8) = uVar13;
  if (CONCAT44(uStack_18c,uStack_190) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_18c,uStack_190);
      uStack_190 = 0;
      uStack_18c = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar13 = RenderingDevice::get_singleton();
  uStack_190 = 0;
  uStack_18c = 0;
  uVar13 = RenderingDevice::uniform_buffer_create
                     (uVar13,*(int *)(this + 0xb38) << 7,(String *)&local_198,0);
  *(undefined8 *)(this + 0xae0) = uVar13;
  if (CONCAT44(uStack_18c,uStack_190) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_18c,uStack_190);
      uStack_190 = 0;
      uStack_18c = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uStack_180 = 0;
  uStack_17c = uStack_17c & 0xffffff00;
  uStack_188 = (undefined4)_LC304;
  uStack_184 = (uint)((ulong)_LC304 >> 0x20);
  local_198 = (undefined2)__LC305;
  uStack_196 = (undefined2)((ulong)__LC305 >> 0x10);
  uStack_194 = (undefined4)((ulong)__LC305 >> 0x20);
  uStack_190 = (uint)_UNK_0012dbd8;
  uStack_18c = (undefined4)((ulong)_UNK_0012dbd8 >> 0x20);
  uStack_178 = 0x3f800000;
  local_170 = 4;
  uStack_16c = 0;
  uStack_168 = 0x60ad78ec;
  uStack_164 = 2;
  local_160 = 0;
  uStack_174 = CONCAT31(uStack_174._1_3_,1);
  pSVar21 = (SamplerState *)RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::sampler_create(pSVar21);
  *(undefined8 *)(this + 0x728) = 1;
  *(undefined8 *)(this + 0xaf0) = uVar13;
  uStack_190 = 0;
  uStack_18c = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&uStack_190,0xc);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&uStack_190);
  uVar13 = _LC306;
  *(undefined4 *)((undefined8 *)CONCAT44(uStack_18c,uStack_190) + 1) = 0x30002;
  *(undefined8 *)CONCAT44(uStack_18c,uStack_190) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_buffer_create(uVar13,6,0,(String *)&local_198,0,0);
  *(undefined8 *)(this + 0x198) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x198),0,6);
  *(undefined8 *)(this + 0x1a0) = uVar13;
  if (CONCAT44(uStack_18c,uStack_190) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_18c,uStack_190);
      uStack_190 = 0;
      uStack_18c = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x198),0,1);
  *(undefined8 *)(this + 0x730) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x198),0,2);
  *(undefined8 *)(this + 0x738) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x198),0,3);
  *(undefined8 *)(this + 0x740) = uVar13;
  uVar13 = RenderingDevice::get_singleton();
  uVar20 = RenderingDevice::index_array_create(uVar13,*(undefined8 *)(this + 0x198),0,6);
  uVar19 = _UNK_0012dac8;
  uVar13 = __LC124;
  uStack_168 = 0;
  uStack_164 = 0;
  *(undefined8 *)(this + 0x748) = uVar20;
  local_198 = (undefined2)uVar13;
  uStack_196 = (undefined2)((ulong)uVar13 >> 0x10);
  uStack_194 = (undefined4)((ulong)uVar13 >> 0x20);
  uStack_190 = (uint)uVar19;
  uStack_18c = (undefined4)((ulong)uVar19 >> 0x20);
  local_160 = 0;
  uStack_15f = 0;
  uStack_188 = (undefined4)_LC76;
  uStack_184 = (uint)((ulong)_LC76 >> 0x20);
  uStack_180 = (undefined4)_UNK_0012dad8;
  uStack_17c = (uint)((ulong)_UNK_0012dad8 >> 0x20);
  uStack_178 = 1;
  pTVar22 = (TextureFormat *)RenderingDevice::get_singleton();
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_278 = 6;
  local_288 = (undefined4)__LC126;
  uStack_284 = (uint)((ulong)__LC126 >> 0x20);
  uStack_280 = (undefined4)_UNK_0012dae8;
  uStack_27c = (undefined4)((ulong)_UNK_0012dae8 >> 0x20);
  uVar13 = RenderingDevice::texture_create(pTVar22,(TextureView *)&local_198,(Vector *)&local_288);
  *(undefined8 *)(this + 0xaf8) = uVar13;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_2b0);
  if (CONCAT44(uStack_164,uStack_168) != 0) {
    LOCK();
    plVar25 = (long *)(CONCAT44(uStack_164,uStack_168) + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      lVar15 = CONCAT44(uStack_164,uStack_168);
      uStack_168 = 0;
      uStack_164 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uStack_280 = 0;
  uStack_27c = 0;
  lVar15 = RendererRD::MeshStorage::get_singleton();
  uStack_190 = uStack_190 & 0xffffff00;
  local_198 = (undefined2)_LC134;
  uStack_196 = (undefined2)((ulong)_LC134 >> 0x10);
  uStack_194 = (undefined4)((ulong)_LC134 >> 0x20);
  uStack_188 = (undefined4)*(undefined8 *)(lVar15 + 0x48);
  uStack_184 = (uint)((ulong)*(undefined8 *)(lVar15 + 0x48) >> 0x20);
  uStack_178 = 0;
  uStack_174 = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_288,(String *)&local_198);
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar13,(StrRange *)&local_288,*(undefined8 *)(this + 400),2,0);
  *(undefined8 *)(this + 0xb30) = uVar13;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_280);
  uVar13 = (**(code **)*plVar11)(plVar11);
  *(undefined8 *)(this + 0x200b90) = uVar13;
  (**(code **)(*plVar11 + 8))(plVar11,uVar13);
  uVar13 = RendererRD::TextureStorage::get_singleton();
  RendererRD::TextureStorage::canvas_texture_get_info
            (&local_88,uVar13,*(undefined8 *)(this + 0x200b90),*(undefined4 *)(this + 0x200bb8),
             *(undefined4 *)(this + 0x200bbc),0,0);
  *(ulong *)(this + 0x200b58) = CONCAT44(uStack_84,local_88);
  *(undefined8 *)(this + 0x200b60) = local_80;
  *(long *)(this + 0x200b68) = local_78;
  *(undefined8 *)(this + 0x200b70) = local_70;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_198,"rendering/2d/shadow_atlas/size",false);
  ProjectSettings::get_setting_with_override((StringName *)local_a8);
  iVar7 = Variant::operator_cast_to_int((Variant *)local_a8);
  *(int *)(this + 0xb10) = iVar7;
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_194,CONCAT22(uStack_196,local_198)) != 0)
     ) {
    StringName::unref();
  }
  RendererRD::MaterialStorage::shader_set_data_request_function(plVar12,0,_create_shader_funcs);
  RendererRD::MaterialStorage::material_set_data_request_function(plVar12,0,_create_material_funcs);
  lVar15 = *plVar12;
  *(undefined8 *)(this + 0xb40) = 0;
  uVar13 = (**(code **)(lVar15 + 0x70))(plVar12);
  *(undefined8 *)(this + 0x200b98) = uVar13;
  (**(code **)(*plVar12 + 0x78))(plVar12,uVar13);
  pcVar5 = *(code **)(*plVar12 + 0x88);
  local_288 = 0;
  uStack_284 = 0;
  local_198 = 0x7b90;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 299;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_288);
  (*pcVar5)(plVar12,*(undefined8 *)(this + 0x200b98),(StrRange *)&local_288);
  if (CONCAT44(uStack_284,local_288) != 0) {
    LOCK();
    plVar11 = (long *)(CONCAT44(uStack_284,local_288) + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      lVar15 = CONCAT44(uStack_284,local_288);
      local_288 = 0;
      uStack_284 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar13 = (**(code **)(*plVar12 + 200))(plVar12);
  *(undefined8 *)(this + 0x200ba0) = uVar13;
  (**(code **)(*plVar12 + 0xd0))(plVar12,uVar13);
  (**(code **)(*plVar12 + 0xe8))
            (plVar12,*(undefined8 *)(this + 0x200ba0),*(undefined8 *)(this + 0x200b98));
  uVar13 = (**(code **)(*plVar12 + 0x70))(plVar12);
  *(undefined8 *)(this + 0x200bb0) = uVar13;
  (**(code **)(*plVar12 + 0x78))(plVar12,uVar13);
  pcVar5 = *(code **)(*plVar12 + 0x88);
  local_288 = 0;
  uStack_284 = 0;
  local_198 = 0x7cc0;
  uStack_196 = 0x11;
  uStack_194 = 0;
  uStack_190 = 0x10a;
  uStack_18c = 0;
  String::parse_latin1((StrRange *)&local_288);
  (*pcVar5)(plVar12,*(undefined8 *)(this + 0x200bb0),(StrRange *)&local_288);
  if (CONCAT44(uStack_284,local_288) != 0) {
    LOCK();
    plVar11 = (long *)(CONCAT44(uStack_284,local_288) + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      lVar15 = CONCAT44(uStack_284,local_288);
      local_288 = 0;
      uStack_284 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar13 = (**(code **)(*plVar12 + 200))(plVar12);
  *(undefined8 *)(this + 0x200ba8) = uVar13;
  (**(code **)(*plVar12 + 0xd0))(plVar12,uVar13);
  (**(code **)(*plVar12 + 0xe8))
            (plVar12,*(undefined8 *)(this + 0x200ba8),*(undefined8 *)(this + 0x200bb0));
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_198,"rendering/2d/batching/uniform_set_cache_size",false);
  ProjectSettings::get_setting_with_override((StringName *)local_a8);
  uVar8 = Variant::operator_cast_to_unsigned_int((Variant *)local_a8);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_194,CONCAT22(uStack_196,local_198)) != 0)
     ) {
    StringName::unref();
  }
  if ((*(long *)(this + 0x9f8) != 0) &&
     (*(ulong *)(this + 0x9f8) = (ulong)uVar8, (ulong)uVar8 < (ulong)*(uint *)(this + 0x9f4))) {
    do {
      pRVar30 = *(RIDSetKey **)(this + 0x9c0);
      if (pRVar30 != (RIDSetKey *)0x0) {
        pRVar30 = *(RIDSetKey **)(pRVar30 + 8);
      }
      uVar13 = RenderingDevice::get_singleton();
      RenderingDevice::uniform_set_set_invalidation_callback
                (uVar13,*(undefined8 *)(pRVar30 + 0x18),0,0);
      uVar13 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar13,*(undefined8 *)(pRVar30 + 0x18));
      HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
      ::erase((HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
               *)(this + 0x9c8),pRVar30);
      plVar11 = *(long **)(this + 0x9c0);
      if ((plVar11 != (long *)0x0) && (pvVar6 = (void *)plVar11[1], pvVar6 != (void *)0x0)) {
        if (plVar11 == *(long **)((long)pvVar6 + 0x30)) {
          lVar15 = *(long *)((long)pvVar6 + 0x20);
          if (pvVar6 == (void *)*plVar11) {
            *plVar11 = lVar15;
          }
          lVar29 = *(long *)((long)pvVar6 + 0x28);
          plVar11[1] = lVar29;
          if (lVar29 != 0) {
            *(long *)(lVar29 + 0x20) = lVar15;
            lVar15 = *(long *)((long)pvVar6 + 0x20);
          }
          if (lVar15 != 0) {
            *(long *)(lVar15 + 0x28) = lVar29;
          }
          Memory::free_static(pvVar6,false);
          *(int *)(plVar11 + 2) = (int)plVar11[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)(this + 0x9c0) + 0x10) == 0) {
          Memory::free_static(*(void **)(this + 0x9c0),false);
          *(undefined8 *)(this + 0x9c0) = 0;
        }
      }
    } while (*(ulong *)(this + 0x9f8) < (ulong)*(uint *)(this + 0x9f4));
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_198,"rendering/2d/batching/item_buffer_size",false);
  ProjectSettings::get_setting_with_override((StringName *)local_a8);
  uVar8 = Variant::operator_cast_to_unsigned_int((Variant *)local_a8);
  *(uint *)(this + 0xab8) = uVar8;
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_194,CONCAT22(uStack_196,local_198)) != 0)
     ) {
    StringName::unref();
  }
  *(int *)(this + 0xabc) = *(int *)(this + 0xab8) << 7;
  if (*(uint *)(this + 0xa94) < 0x100) {
    *(undefined4 *)(this + 0xa94) = 0x100;
    lVar15 = Memory::realloc_static(*(void **)(this + 0xa98),0x6800,false);
    *(long *)(this + 0xa98) = lVar15;
    if (lVar15 == 0) {
      _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  do {
    uVar13 = RenderingDevice::get_singleton();
    uStack_190 = 0;
    uStack_18c = 0;
    uVar13 = RenderingDevice::storage_buffer_create
                       (uVar13,*(undefined4 *)(this + 0xabc),(String *)&local_198,0,0);
    uVar8 = *(uint *)pRVar24;
    if (uVar8 == *(uint *)(pRVar24 + 4)) {
      uVar17 = (ulong)(uVar8 * 2);
      if (uVar8 * 2 == 0) {
        uVar17 = 1;
      }
      *(uint *)(pRVar24 + 4) = (uint)uVar17;
      lVar15 = Memory::realloc_static(*(void **)(pRVar24 + 8),uVar17 * 8,false);
      *(long *)(pRVar24 + 8) = lVar15;
      if (lVar15 == 0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar8 = *(uint *)pRVar24;
    }
    else {
      lVar15 = *(long *)(pRVar24 + 8);
    }
    *(uint *)pRVar24 = uVar8 + 1;
    *(undefined8 *)(lVar15 + (ulong)uVar8 * 8) = uVar13;
    if (CONCAT44(uStack_18c,uStack_190) != 0) {
      LOCK();
      plVar11 = (long *)(CONCAT44(uStack_18c,uStack_190) + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        lVar15 = CONCAT44(uStack_18c,uStack_190);
        uStack_190 = 0;
        uStack_18c = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    pRVar24 = pRVar24 + 0x10;
  } while (this + 0xa90 != pRVar24);
  uVar17 = (ulong)*(uint *)(this + 0xab8);
  if (uVar17 != 0) {
    lVar15 = Memory::alloc_static(uVar17 << 7,true);
    if (lVar15 != 0) {
      *(ulong *)(lVar15 + -8) = uVar17;
      goto LAB_00110c7c;
    }
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  lVar15 = 0;
LAB_00110c7c:
  *(long *)(this + 0xab0) = lVar15;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererCanvasRenderRD::_uniform_set_invalidation_callback(void*) */

void RendererCanvasRenderRD::_uniform_set_invalidation_callback(void *param_1)

{
  HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
  *this;
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  lVar5 = RendererCanvasRender::singleton;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  this = (HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
          *)(RendererCanvasRender::singleton + 0x9c8);
  cVar6 = HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
          ::_lookup_pos(this,(RIDSetKey *)param_1,&local_24);
  if (cVar6 != '\0') {
    plVar1 = *(long **)(lVar5 + 0x9c0);
    lVar7 = *(long *)(*(long *)(*(long *)(lVar5 + 0x9d0) + (ulong)local_24 * 8) + 0x28);
    if (plVar1 == *(long **)(lVar7 + 0x30)) {
      lVar2 = *(long *)(lVar7 + 0x28);
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar7 + 0x20);
        lVar8 = *plVar1;
        if (lVar7 == *plVar1) {
          lVar8 = lVar3;
        }
        if (lVar7 == plVar1[1]) {
          plVar1[1] = lVar2;
          *(long *)(lVar2 + 0x20) = lVar3;
          lVar3 = *(long *)(lVar7 + 0x20);
        }
        else {
          *(long *)(lVar2 + 0x20) = lVar3;
          lVar3 = *(long *)(lVar7 + 0x20);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x28) = lVar2;
        }
        *(long *)(lVar8 + 0x28) = lVar7;
        *(long *)(lVar7 + 0x20) = lVar8;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *plVar1 = lVar7;
      }
    }
    else {
      _err_print_error("move_to_front","./core/templates/list.h",0x25d,
                       "Condition \"p_I->data != _data\" is true.",0,0);
    }
    HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
    ::erase(this,(RIDSetKey *)param_1);
    plVar1 = *(long **)(lVar5 + 0x9c0);
    if ((plVar1 != (long *)0x0) && (pvVar4 = (void *)*plVar1, pvVar4 != (void *)0x0)) {
      if (plVar1 == *(long **)((long)pvVar4 + 0x30)) {
        lVar7 = *(long *)((long)pvVar4 + 0x20);
        lVar2 = *(long *)((long)pvVar4 + 0x28);
        *plVar1 = lVar7;
        if (pvVar4 == (void *)plVar1[1]) {
          plVar1[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar7;
          lVar7 = *(long *)((long)pvVar4 + 0x20);
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x28) = lVar2;
        }
        Memory::free_static(pvVar4,false);
        *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      if (*(int *)((long)*(void **)(lVar5 + 0x9c0) + 0x10) == 0) {
        Memory::free_static(*(void **)(lVar5 + 0x9c0),false);
        *(undefined8 *)(lVar5 + 0x9c0) = 0;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::CanvasShaderData::set_code(String const&) */

void __thiscall
RendererCanvasRenderRD::CanvasShaderData::set_code(CanvasShaderData *this,String *param_1)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  CanvasShaderData *pCVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
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
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  ulong local_150;
  HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
  local_148 [8];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  ulong local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  ulong local_f0;
  CanvasShaderData *local_e8;
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
  if (*(long *)(this + 0xa0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa0),(CowData *)param_1);
  }
  *(undefined4 *)(this + 0x98) = 0;
  if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
    lVar12 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x20) + lVar12) != 0) {
          *(int *)(*(long *)(this + 0x20) + lVar12) = 0;
          pvVar13 = *(void **)(*(long *)(this + 0x18) + lVar12 * 2);
          if (*(long *)((long)pvVar13 + 0x88) != 0) {
            LOCK();
            plVar8 = (long *)(*(long *)((long)pvVar13 + 0x88) + -0x10);
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
              lVar10 = *(long *)((long)pvVar13 + 0x88);
              *(undefined8 *)((long)pvVar13 + 0x88) = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar13 + 0x80) != 0) {
            LOCK();
            plVar8 = (long *)(*(long *)((long)pvVar13 + 0x80) + -0x10);
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
              lVar10 = *(long *)((long)pvVar13 + 0x80);
              *(undefined8 *)((long)pvVar13 + 0x80) = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)((long)pvVar13 + 0x70));
          if (*(long *)((long)pvVar13 + 0x40) != 0) {
            LOCK();
            plVar8 = (long *)(*(long *)((long)pvVar13 + 0x40) + -0x10);
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
              lVar10 = *(long *)((long)pvVar13 + 0x40);
              *(undefined8 *)((long)pvVar13 + 0x40) = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar13 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar13,false);
          *(undefined8 *)(*(long *)(this + 0x18) + lVar12 * 2) = 0;
        }
        lVar12 = lVar12 + 4;
      } while ((ulong)uVar1 << 2 != lVar12);
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  }
  pCVar6 = this + 0x198;
  *(undefined4 *)(this + 0x1f8) = 0;
  do {
    LOCK();
    *(undefined8 *)pCVar6 = 0;
    uVar4 = _LC46;
    UNLOCK();
    pCVar6 = pCVar6 + 8;
  } while (this + 0x1f8 != pCVar6);
  if ((*(long *)(this + 0xa0) == 0) || (*(uint *)(*(long *)(this + 0xa0) + -8) < 2))
  goto LAB_001119c1;
  local_4c = 0;
  *(undefined4 *)(this + 0x80) = 0;
  local_58 = uVar4;
  local_1b0 = uVar4;
  local_180 = uVar4;
  local_150 = uVar4;
  local_120 = uVar4;
  local_f0 = uVar4;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_1d0 = (undefined1  [16])0x0;
  local_1c0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  local_170 = (undefined1  [16])0x0;
  local_160 = (undefined1  [16])0x0;
  local_140 = (undefined1  [16])0x0;
  local_130 = (undefined1  [16])0x0;
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  local_d0[0] = 0;
  local_c0[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_4a = 0;
  local_e8 = (CanvasShaderData *)0x0;
  StringName::StringName((StringName *)&local_1e8,"vertex",false);
  puVar7 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *puVar7 = 0;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"fragment",false);
  puVar7 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *puVar7 = 1;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"light",false);
  puVar7 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *puVar7 = 1;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  pCVar6 = this + 0x80;
  StringName::StringName((StringName *)&local_1e8,"blend_add",false);
  plVar8 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                   ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)pCVar6;
  *(undefined4 *)(plVar8 + 1) = 1;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_mix",false);
  plVar8 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                   ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)pCVar6;
  *(undefined4 *)(plVar8 + 1) = 0;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_sub",false);
  plVar8 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                   ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)pCVar6;
  *(undefined4 *)(plVar8 + 1) = 2;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_mul",false);
  plVar8 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                   ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)pCVar6;
  *(undefined4 *)(plVar8 + 1) = 3;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_premul_alpha",false);
  plVar8 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                   ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)pCVar6;
  *(undefined4 *)(plVar8 + 1) = 5;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"blend_disabled",false);
  plVar8 = (long *)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>
                   ::operator[](local_1a8,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)pCVar6;
  *(undefined4 *)(plVar8 + 1) = 6;
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"texture_sdf",false);
  plVar8 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_148,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)(this + 0x1fa);
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"TIME",false);
  plVar8 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                   ::operator[](local_148,(StringName *)&local_1e8);
  bVar15 = StringName::configured != '\0';
  *plVar8 = (long)(this + 0x1fb);
  if ((bVar15) && (local_1e8 != 0)) {
    StringName::unref();
  }
  lVar12 = RendererCanvasRender::singleton;
  local_e8 = this + 0x10;
  __mutex = (pthread_mutex_t *)(RendererCanvasRender::singleton + 0x6c8);
  iVar5 = pthread_mutex_lock(__mutex);
  if (iVar5 != 0) {
LAB_00112431:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  iVar5 = ShaderCompiler::compile
                    (lVar12 + 0x1a8,1,(CowData<char32_t> *)(this + 0xa0),local_1d8,this + 8,local_d8
                    );
  if (iVar5 == 0) {
    *(ushort *)(this + 0x1f8) = CONCAT11(local_50._3_1_,(undefined1)local_4c);
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x170));
    if (iVar5 != 0) goto LAB_00112431;
    for (puVar2 = *(undefined8 **)(this + 0x158); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x170));
    PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
    ::_add_new_pipelines_to_map
              ((PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
                *)(this + 0xb0));
    if (*(long *)(this + 0xd8) != 0) {
      lVar10 = *(long *)(*(long *)(this + 0xd8) + 0x10);
      if (lVar10 != *(long *)(this + 0xe0)) {
        do {
          lVar14 = lVar10;
          lVar10 = *(long *)(lVar14 + 0x10);
        } while (*(long *)(this + 0xe0) != *(long *)(lVar14 + 0x10));
        do {
          local_1e0 = *(undefined8 *)(lVar14 + 0x38);
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,local_1e0);
          lVar14 = *(long *)(lVar14 + 0x20);
        } while (lVar14 != 0);
      }
    }
    RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear
              ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0xd8));
    RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear
              ((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x128));
    if (*(long *)(this + 0xa8) == 0) {
      uVar9 = ShaderRD::version_create();
      *(undefined8 *)(this + 0xa8) = uVar9;
    }
    plVar8 = &local_80;
    ShaderRD::version_set_code
              (lVar12 + 0x18,*(undefined8 *)(this + 0xa8),plVar8,local_a0,local_a0 + 8,local_90,
               local_d8);
    *(undefined4 *)(this + 0x98) = local_a8;
    lVar12 = *(long *)(this + 0x90);
    if (lVar12 != local_b0) {
      if (lVar12 != 0) {
        LOCK();
        plVar11 = (long *)(lVar12 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          lVar12 = *(long *)(this + 0x90);
          *(undefined8 *)(this + 0x90) = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
        else {
          *(undefined8 *)(this + 0x90) = 0;
        }
      }
      if (local_b0 != 0) {
        plVar11 = (long *)(local_b0 + -0x10);
        do {
          lVar12 = *plVar11;
          if (lVar12 == 0) goto LAB_001121cf;
          LOCK();
          lVar10 = *plVar11;
          bVar15 = lVar12 == lVar10;
          if (bVar15) {
            *plVar11 = lVar12 + 1;
            lVar10 = lVar12;
          }
          UNLOCK();
        } while (!bVar15);
        if (lVar10 != -1) {
          *(long *)(this + 0x90) = local_b0;
        }
      }
    }
LAB_001121cf:
    if ((*(long *)(this + 0x78) != local_c0[0]) &&
       (CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
                  ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0x78)),
       local_c0[0] != 0)) {
      plVar11 = (long *)(local_c0[0] + -0x10);
      do {
        lVar12 = *plVar11;
        if (lVar12 == 0) goto LAB_0011221c;
        LOCK();
        lVar10 = *plVar11;
        bVar15 = lVar12 == lVar10;
        if (bVar15) {
          *plVar11 = lVar12 + 1;
          lVar10 = lVar12;
        }
        UNLOCK();
      } while (!bVar15);
      if (lVar10 != -1) {
        *(long *)(this + 0x78) = local_c0[0];
      }
    }
LAB_0011221c:
    pthread_mutex_unlock(__mutex);
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_1d8);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar13 = (void *)local_78._0_8_;
      if (local_58._4_4_ != 0) {
        uVar1 = *(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4);
        if (uVar1 == 0) {
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
        }
        else {
          lVar12 = 0;
          do {
            if (*(int *)(local_78._8_8_ + lVar12) != 0) {
              pvVar13 = *(void **)((long)pvVar13 + lVar12 * 2);
              *(int *)(local_78._8_8_ + lVar12) = 0;
              if (*(long *)((long)pvVar13 + 0x18) != 0) {
                LOCK();
                plVar11 = (long *)(*(long *)((long)pvVar13 + 0x18) + -0x10);
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (*plVar11 == 0) {
                  lVar10 = *(long *)((long)pvVar13 + 0x18);
                  *(undefined8 *)((long)pvVar13 + 0x18) = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar13 + 0x10) != 0) {
                LOCK();
                plVar11 = (long *)(*(long *)((long)pvVar13 + 0x10) + -0x10);
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (*plVar11 == 0) {
                  lVar10 = *(long *)((long)pvVar13 + 0x10);
                  *(undefined8 *)((long)pvVar13 + 0x10) = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              Memory::free_static(pvVar13,false);
              *(undefined8 *)(local_78._0_8_ + lVar12 * 2) = 0;
              pvVar13 = (void *)local_78._0_8_;
            }
            lVar12 = lVar12 + 4;
          } while ((ulong)uVar1 * 4 - lVar12 != 0);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar13 == (void *)0x0) goto LAB_00112330;
        }
      }
      Memory::free_static(pvVar13,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00112330:
    do {
      plVar11 = plVar8 + -1;
      plVar8 = plVar8 + -1;
      if (*plVar11 != 0) {
        LOCK();
        plVar11 = (long *)(*plVar11 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          lVar12 = *plVar8;
          *plVar8 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
    } while (plVar8 != (long *)(local_a0 + 8));
  }
  else {
    if (*(long *)(this + 0xa8) != 0) {
      ShaderRD::version_free(lVar12 + 0x18,*(undefined8 *)(this + 0xa8));
      *(undefined8 *)(this + 0xa8) = 0;
    }
    _err_print_error("set_code","servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x629,
                     "Method/function failed.","Shader compilation failed.",0,0);
    pthread_mutex_unlock(__mutex);
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_1d8);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar13 = (void *)local_78._0_8_;
      if (local_58._4_4_ != 0) {
        uVar1 = *(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4);
        if (uVar1 == 0) {
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
        }
        else {
          lVar12 = 0;
          do {
            if (*(int *)(local_78._8_8_ + lVar12) != 0) {
              pvVar13 = *(void **)((long)pvVar13 + lVar12 * 2);
              *(int *)(local_78._8_8_ + lVar12) = 0;
              if (*(long *)((long)pvVar13 + 0x18) != 0) {
                LOCK();
                plVar8 = (long *)(*(long *)((long)pvVar13 + 0x18) + -0x10);
                *plVar8 = *plVar8 + -1;
                UNLOCK();
                if (*plVar8 == 0) {
                  lVar10 = *(long *)((long)pvVar13 + 0x18);
                  *(undefined8 *)((long)pvVar13 + 0x18) = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar13 + 0x10) != 0) {
                LOCK();
                plVar8 = (long *)(*(long *)((long)pvVar13 + 0x10) + -0x10);
                *plVar8 = *plVar8 + -1;
                UNLOCK();
                if (*plVar8 == 0) {
                  lVar10 = *(long *)((long)pvVar13 + 0x10);
                  *(undefined8 *)((long)pvVar13 + 0x10) = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              Memory::free_static(pvVar13,false);
              *(undefined8 *)(local_78._0_8_ + lVar12 * 2) = 0;
              pvVar13 = (void *)local_78._0_8_;
            }
            lVar12 = lVar12 + 4;
          } while (lVar12 != (ulong)uVar1 * 4);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar13 == (void *)0x0) goto LAB_00111f60;
        }
      }
      Memory::free_static(pvVar13,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00111f60:
    plVar8 = (long *)(local_90 + 8);
    do {
      if (*plVar8 != 0) {
        LOCK();
        plVar11 = (long *)(*plVar8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          lVar12 = *plVar8;
          *plVar8 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      plVar8 = plVar8 + -1;
    } while (plVar8 != (long *)local_a0);
  }
  uVar9 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar8 = (long *)(local_a0._0_8_ + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_a0._8_8_;
      local_a0 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  lVar12 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
            ((CowData<ShaderCompiler::GeneratedCode::Texture> *)local_c0);
  CowData<String>::_unref((CowData<String> *)local_d0);
LAB_001119c1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::CanvasShaderData::~CanvasShaderData() */

void __thiscall RendererCanvasRenderRD::CanvasShaderData::~CanvasShaderData(CanvasShaderData *this)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this_00;
  RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *this_01;
  pthread_mutex_t *__mutex_00;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  __mutex = (pthread_mutex_t *)(this + 0x170);
  *(undefined ***)this = &PTR_set_path_hint_00124288;
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 == 0) {
    for (puVar3 = *(undefined8 **)(this + 0x158); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    }
    pthread_mutex_unlock(__mutex);
    PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
    ::_add_new_pipelines_to_map
              ((PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
                *)(this + 0xb0));
    if (*(long *)(this + 0xd8) != 0) {
      lVar7 = *(long *)(*(long *)(this + 0xd8) + 0x10);
      if (lVar7 != *(long *)(this + 0xe0)) {
        do {
          lVar6 = lVar7;
          lVar7 = *(long *)(lVar6 + 0x10);
        } while (*(long *)(this + 0xe0) != *(long *)(lVar6 + 0x10));
        do {
          uVar5 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar5);
          lVar6 = *(long *)(lVar6 + 0x20);
        } while (lVar6 != 0);
      }
    }
    this_00 = (RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0xd8);
    this_01 = (RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x128);
    RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear(this_00);
    RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear(this_01);
    lVar7 = RendererCanvasRender::singleton;
    if (*(long *)(this + 0xa8) != 0) {
      __mutex_00 = (pthread_mutex_t *)(RendererCanvasRender::singleton + 0x6c8);
      iVar4 = pthread_mutex_lock(__mutex_00);
      if (iVar4 != 0) goto LAB_00112801;
      ShaderRD::version_free(lVar7 + 0x18);
      pthread_mutex_unlock(__mutex_00);
    }
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 == 0) {
      for (puVar3 = *(undefined8 **)(this + 0x158); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock(__mutex);
      PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
      ::_add_new_pipelines_to_map
                ((PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
                  *)(this + 0xb0));
      if (*(long *)(this + 0xd8) != 0) {
        lVar7 = *(long *)(*(long *)(this + 0xd8) + 0x10);
        if (lVar7 != *(long *)(this + 0xe0)) {
          do {
            lVar6 = lVar7;
            lVar7 = *(long *)(lVar6 + 0x10);
          } while (*(long *)(this + 0xe0) != *(long *)(lVar6 + 0x10));
          do {
            uVar5 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar5);
            lVar6 = *(long *)(lVar6 + 0x20);
          } while (lVar6 != 0);
        }
      }
      RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear(this_00);
      RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear(this_01);
      pvVar8 = *(void **)(this + 0x148);
      if (pvVar8 != (void *)0x0) {
        if (*(int *)(this + 0x16c) != 0) {
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x168) * 4);
          if (uVar2 == 0) {
            *(undefined4 *)(this + 0x16c) = 0;
            *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
          }
          else {
            lVar7 = 0;
            do {
              if (*(int *)(*(long *)(this + 0x150) + lVar7) != 0) {
                *(int *)(*(long *)(this + 0x150) + lVar7) = 0;
                Memory::free_static(*(void **)((long)pvVar8 + lVar7 * 2),false);
                pvVar8 = *(void **)(this + 0x148);
                *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
              }
              lVar7 = lVar7 + 4;
            } while (lVar7 != (ulong)uVar2 << 2);
            *(undefined4 *)(this + 0x16c) = 0;
            *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
            if (pvVar8 == (void *)0x0) goto LAB_0011267f;
          }
        }
        Memory::free_static(pvVar8,false);
        Memory::free_static(*(void **)(this + 0x150),false);
      }
LAB_0011267f:
      RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear(this_01);
      if (*(void **)(this + 0x128) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x128),false);
      }
      if (*(void **)(this + 0xf8) != (void *)0x0) {
        if (*(int *)(this + 0xf0) != 0) {
          *(undefined4 *)(this + 0xf0) = 0;
        }
        Memory::free_static(*(void **)(this + 0xf8),false);
      }
      RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear(this_00);
      if (*(void **)(this + 0xd8) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0xd8),false);
      }
      if (*(long *)(this + 0xa0) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this + 0xa0) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(this + 0xa0);
          *(undefined8 *)(this + 0xa0) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      if (*(long *)(this + 0x90) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this + 0x90) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(this + 0x90);
          *(undefined8 *)(this + 0x90) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
                ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0x78));
      RendererRD::MaterialStorage::ShaderData::~ShaderData((ShaderData *)this);
      return;
    }
  }
LAB_00112801:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar4);
}



/* RendererCanvasRenderRD::CanvasShaderData::~CanvasShaderData() */

void __thiscall RendererCanvasRenderRD::CanvasShaderData::~CanvasShaderData(CanvasShaderData *this)

{
  ~CanvasShaderData(this);
  operator_delete(this,0x200);
  return;
}



/* RendererCanvasRenderRD::_get_pipeline_specialization_or_ubershader(RendererCanvasRenderRD::CanvasShaderData*,
   RendererCanvasRenderRD::PipelineKey&, RendererCanvasRenderRD::PushConstant&, RID, void*, unsigned
   int, RID*) [clone .isra.0] */

long RendererCanvasRenderRD::_get_pipeline_specialization_or_ubershader
               (CanvasShaderData *param_1,int *param_2,long param_3,ulong param_4,ulong param_5,
               uint param_6,long *param_7)

{
  char *pcVar1;
  PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
  *this;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  Version *pVVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = (ulong)param_6;
  param_2[9] = 0;
LAB_001128a0:
  do {
    if (param_7 != (long *)0x0) {
      pVVar19 = (Version *)RendererRD::MeshStorage::get_singleton();
      lVar20 = CanvasShaderData::get_vertex_input_mask(param_1,*param_2,param_2[9] != 0);
      if (param_4 == 0) {
        pcVar1 = (char *)(param_5 + 0x34);
        while( true ) {
          uVar16 = local_44 >> 8;
          local_44 = uVar16 << 8;
          LOCK();
          cVar12 = *pcVar1;
          if (cVar12 == '\0') {
            *pcVar1 = '\x01';
          }
          UNLOCK();
          if (cVar12 == '\0') break;
          local_44 = uVar16 << 8;
          do {
          } while (*pcVar1 != '\0');
        }
        uVar16 = *(uint *)(param_5 + 0x80);
        plVar26 = *(long **)(param_5 + 0x78);
        if (uVar16 == 0) {
          uVar24 = 0x28;
          uVar16 = 1;
          lVar29 = 0;
        }
        else {
          lVar29 = (ulong)uVar16 * 0x28;
          plVar21 = plVar26;
          do {
            if ((lVar20 == *plVar21) && ((char)plVar21[2] == '\0')) {
              *(long *)(param_2 + 4) = plVar21[3];
              *param_7 = plVar21[4];
              *(undefined1 *)(param_5 + 0x34) = 0;
              goto LAB_00112a50;
            }
            plVar21 = plVar21 + 5;
          } while (plVar21 != plVar26 + (ulong)uVar16 * 5);
          uVar16 = uVar16 + 1;
          uVar24 = (ulong)uVar16 * 0x28;
        }
        *(uint *)(param_5 + 0x80) = uVar16;
        lVar27 = Memory::realloc_static(plVar26,uVar24,false);
        *(long *)(param_5 + 0x78) = lVar27;
        RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                  (pVVar19,(Surface *)(lVar27 + lVar29),param_5,SUB81(lVar20,0),(Surface *)0x0,0,0);
        lVar29 = lVar29 + *(long *)(param_5 + 0x78);
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar29 + 0x18);
        *param_7 = *(long *)(lVar29 + 0x20);
        *(undefined1 *)(param_5 + 0x34) = 0;
      }
      else {
        if ((uint)param_4 < *(uint *)(pVVar19 + 0x124)) {
          plVar26 = (long *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(pVVar19 + 0x120)) * 0xb0 +
                            *(long *)(*(long *)(pVVar19 + 0x110) +
                                     ((param_4 & 0xffffffff) / (ulong)*(uint *)(pVVar19 + 0x120)) *
                                     8));
          if ((int)plVar26[0x15] == (int)(param_4 >> 0x20)) {
            uVar24 = (ulong)*(uint *)(*plVar26 + 0x10);
            if (uVar18 < uVar24) {
              if (*(uint *)(plVar26 + 2) <= param_6) {
                _err_print_index_error
                          ("operator[]","./core/templates/local_vector.h",0xb2,uVar18,
                           (ulong)*(uint *)(plVar26 + 2),"p_index","count","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
              lVar29 = uVar18 * 0x40 + plVar26[3];
              uVar16 = *(uint *)(lVar29 + 0x20);
              uVar24 = *(ulong *)(*(long *)(*plVar26 + 8) + uVar18 * 8);
              pcVar1 = (char *)(uVar24 + 0x34);
              while( true ) {
                uVar13 = local_44 >> 8;
                local_44 = uVar13 << 8;
                LOCK();
                cVar12 = *pcVar1;
                if (cVar12 == '\0') {
                  *pcVar1 = '\x01';
                }
                UNLOCK();
                if (cVar12 == '\0') break;
                local_44 = uVar13 << 8;
                do {
                } while (*pcVar1 != '\0');
              }
              uVar13 = *(uint *)(lVar29 + 0x38);
              plVar26 = *(long **)(lVar29 + 0x30);
              if (uVar13 == 0) {
                lVar27 = 0;
                uVar28 = 0x28;
                uVar13 = 1;
              }
              else {
                lVar27 = (ulong)uVar13 * 0x28;
                plVar21 = plVar26;
                do {
                  if ((((lVar20 == *plVar21) && ((char)plVar21[2] == '\0')) &&
                      (uVar16 == *(uint *)(plVar21 + 1))) &&
                     (uVar16 == *(uint *)((long)plVar21 + 0xc))) {
                    *(long *)(param_2 + 4) = plVar21[3];
                    *param_7 = plVar21[4];
                    *(undefined1 *)(uVar24 + 0x34) = 0;
                    goto LAB_00112a50;
                  }
                  plVar21 = plVar21 + 5;
                } while (plVar26 + (ulong)uVar13 * 5 != plVar21);
                uVar13 = uVar13 + 1;
                uVar28 = (ulong)uVar13 * 0x28;
              }
              *(uint *)(lVar29 + 0x38) = uVar13;
              lVar22 = Memory::realloc_static(plVar26,uVar28,false);
              *(long *)(lVar29 + 0x30) = lVar22;
              RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                        (pVVar19,(Surface *)(lVar22 + lVar27),uVar24,SUB81(lVar20,0),(Surface *)0x0,
                         (uint)lVar29,uVar16);
              lVar27 = lVar27 + *(long *)(lVar29 + 0x30);
              *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar27 + 0x18);
              *param_7 = *(long *)(lVar27 + 0x20);
              *(undefined1 *)(uVar24 + 0x34) = 0;
            }
            else {
              _err_print_index_error
                        ("mesh_instance_surface_get_vertex_arrays_and_format",
                         "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x213,uVar18,
                         uVar24,"p_surface_index","mesh->surface_count","",false,false);
            }
            goto LAB_00112a50;
          }
          if ((int)plVar26[0x15] + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("mesh_instance_surface_get_vertex_arrays_and_format",
                         "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x211);
      }
    }
LAB_00112a50:
    iVar17 = param_2[9];
    if (iVar17 == 0) {
      iVar14 = param_2[7];
      *(undefined4 *)(param_3 + 4) = 0;
      uVar16 = (iVar14 * 0x16a88000 | (uint)(iVar14 * -0x3361d2af) >> 0x11) * 0x1b873593;
    }
    else {
      uVar16 = 0;
      *(int *)(param_3 + 4) = param_2[7];
      param_2[7] = 0;
    }
    uVar13 = (*param_2 * 0x16a88000 | (uint)(*param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2[2] * 0x16a88000 | (uint)(param_2[2] * -0x3361d2af) >> 0x11) * 0x1b873593;
    iVar14 = (int)*(undefined8 *)(param_2 + 4);
    iVar15 = (int)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64 ^
             (iVar14 * 0x16a88000 | (uint)(iVar14 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar13 = (iVar15 * 0x16a88000 | (uint)(iVar15 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2[6] * 0x16a88000 | (uint)(param_2[6] * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar16 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
             (param_2[8] * 0x16a88000 | (uint)(param_2[8] * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar16 = (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    uVar16 = (uVar16 >> 0x10 ^ uVar16) * -0x7a143595;
    uVar16 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
    uVar13 = uVar16 ^ uVar16 >> 0x10;
    local_44 = uVar13;
    if (*(long *)(param_1 + 0xd8) != 0) {
      for (lVar20 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10); *(long *)(param_1 + 0xe0) != lVar20
          ; lVar20 = *(long *)(lVar20 + 0x10)) {
        while (*(uint *)(lVar20 + 0x30) <= uVar13) {
          if (uVar13 <= *(uint *)(lVar20 + 0x30)) goto LAB_00112d10;
          lVar20 = *(long *)(lVar20 + 8);
          if (lVar20 == *(long *)(param_1 + 0xe0)) goto LAB_00112bc1;
        }
      }
    }
LAB_00112bc1:
    this = (PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
            *)(param_1 + 0xb0);
    cVar12 = PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
             ::_add_new_pipelines_to_map(this);
    if ((cVar12 != '\0') && (lVar20 = *(long *)(param_1 + 0xd8), lVar20 != 0)) {
      while (lVar20 = *(long *)(lVar20 + 0x10), *(long *)(param_1 + 0xe0) != lVar20) {
        while (*(uint *)(lVar20 + 0x30) <= uVar13) {
          if (uVar13 <= *(uint *)(lVar20 + 0x30)) goto LAB_00112d10;
          lVar20 = *(long *)(lVar20 + 8);
          if (*(long *)(param_1 + 0xe0) == lVar20) goto LAB_00112bd8;
        }
      }
    }
LAB_00112bd8:
    PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
    ::compile_pipeline(this,param_2,uVar13,0);
    iVar17 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x170));
    if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar17);
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      for (lVar20 = *(long *)(*(long *)(param_1 + 0x128) + 0x10);
          *(long *)(param_1 + 0x130) != lVar20; lVar20 = *(long *)(lVar20 + 0x10)) {
        while (*(uint *)(lVar20 + 0x30) <= uVar13) {
          if (uVar13 <= *(uint *)(lVar20 + 0x30)) {
            lVar20 = *(long *)(param_1 + 0x148);
            if ((lVar20 == 0) || (*(int *)(param_1 + 0x16c) == 0)) goto LAB_00112c51;
            uVar24 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x168) * 8);
            uVar16 = (uVar16 >> 0x10 ^ uVar13) * -0x7a143595;
            uVar16 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
            uVar32 = uVar16 ^ uVar16 >> 0x10;
            if (uVar16 == uVar16 >> 0x10) {
              uVar32 = 1;
              uVar28 = uVar24;
            }
            else {
              uVar28 = uVar32 * uVar24;
            }
            uVar31 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(param_1 + 0x168) * 4));
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar31;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar28;
            lVar29 = SUB168(auVar3 * auVar7,8);
            uVar16 = *(uint *)(*(long *)(param_1 + 0x150) + lVar29 * 4);
            uVar25 = SUB164(auVar3 * auVar7,8);
            if (uVar16 == 0) goto LAB_00112c51;
            uVar30 = 0;
            goto LAB_00112fd1;
          }
          lVar20 = *(long *)(lVar20 + 8);
          if (lVar20 == *(long *)(param_1 + 0x130)) goto LAB_00112c51;
        }
      }
    }
LAB_00112c51:
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x170));
    PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
    ::_add_new_pipelines_to_map(this);
    lVar20 = *(long *)(param_1 + 0xd8);
    if (lVar20 != 0) {
      while (lVar20 = *(long *)(lVar20 + 0x10), *(long *)(param_1 + 0xe0) != lVar20) {
        while (*(uint *)(lVar20 + 0x30) <= uVar13) {
          if (uVar13 <= *(uint *)(lVar20 + 0x30)) goto LAB_00112d10;
          lVar20 = *(long *)(lVar20 + 8);
          if (*(long *)(param_1 + 0xe0) == lVar20) goto LAB_00112c9d;
        }
      }
    }
LAB_00112c9d:
    puVar23 = (undefined8 *)
              RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::operator[]
                        ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)
                         (param_1 + 0xd8),&local_44);
    *puVar23 = 0;
    piVar2 = param_2 + 9;
    *piVar2 = *piVar2 + 1;
  } while (*piVar2 == 0);
  lVar20 = 0;
  goto LAB_00112cc3;
LAB_00112fd1:
  if ((uVar16 == uVar32) && (uVar13 == *(uint *)(*(long *)(lVar20 + lVar29 * 8) + 0x10))) {
    lVar20 = *(long *)(lVar20 + (ulong)uVar25 * 8);
    if (lVar20 != 0) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
      ::erase((HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
               *)(param_1 + 0x140),(uint *)(lVar20 + 0x10));
    }
    goto LAB_00112c51;
  }
  uVar30 = uVar30 + 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (uVar25 + 1) * uVar24;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar31;
  lVar29 = SUB168(auVar4 * auVar8,8);
  uVar16 = *(uint *)(*(long *)(param_1 + 0x150) + lVar29 * 4);
  uVar25 = SUB164(auVar4 * auVar8,8);
  if ((uVar16 == 0) ||
     (auVar5._8_8_ = 0, auVar5._0_8_ = uVar16 * uVar24, auVar9._8_8_ = 0, auVar9._0_8_ = uVar31,
     auVar6._8_8_ = 0,
     auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x168) * 4) +
                     uVar25) - SUB164(auVar5 * auVar9,8)) * uVar24, auVar10._8_8_ = 0,
     auVar10._0_8_ = uVar31, SUB164(auVar6 * auVar10,8) < uVar30)) goto LAB_00112c51;
  goto LAB_00112fd1;
LAB_00112d10:
  lVar20 = *(long *)(lVar20 + 0x38);
  if (lVar20 != 0) goto LAB_00112cc3;
  piVar2 = param_2 + 9;
  *piVar2 = *piVar2 + 1;
  if (*piVar2 != 0) {
    lVar20 = 0;
LAB_00112cc3:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar20;
  }
  goto LAB_001128a0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::_render_batch(long, RendererCanvasRenderRD::CanvasShaderData*, long,
   RendererCanvasRender::Light*, RendererCanvasRenderRD::Batch const*, RenderingMethod::RenderInfo*)
    */

void __thiscall
RendererCanvasRenderRD::_render_batch
          (RendererCanvasRenderRD *this,long param_1,CanvasShaderData *param_2,long param_3,
          Light *param_4,Batch *param_5,RenderInfo *param_6)

{
  HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
  *this_00;
  pthread_mutex_t *__mutex;
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  CanvasShaderData *pCVar6;
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
  code *pcVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long *plVar31;
  Particles *pPVar32;
  Light *pLVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  undefined1 (*pauVar37) [16];
  undefined8 *puVar38;
  void *pvVar39;
  undefined1 *puVar40;
  char *pcVar41;
  int *piVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  bool bVar46;
  Batch *pBVar47;
  ulong uVar48;
  Light *pLVar49;
  RIDSetKey *pRVar50;
  ulong uVar51;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  uint local_b8 [2];
  undefined8 *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 local_94;
  undefined8 local_88;
  uint local_80;
  long local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar47 = param_5;
  lVar28 = RendererRD::TextureStorage::get_singleton();
  uVar34 = (ulong)*(uint *)(param_5 + 8);
  uVar26 = *(uint *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa60);
  if (uVar26 <= *(uint *)(param_5 + 8)) {
LAB_00113f98:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar34,(ulong)uVar26,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar23 = (code *)invalidInstructionException();
    (*pcVar23)();
  }
  this_00 = (HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
             *)(this + 0x9c8);
  local_b8[0] = 0;
  local_78 = *(long *)(*(long *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa68) + uVar34 * 8)
  ;
  local_88 = **(undefined8 **)(param_5 + 0x10);
  local_80 = *(uint *)(*(undefined8 **)(param_5 + 0x10) + 1);
  cVar24 = HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
           ::_lookup_pos(this_00,(RIDSetKey *)&local_88,local_b8);
  if (cVar24 == '\0') {
    CowData<RenderingDevice::Uniform>::_copy_on_write
              ((CowData<RenderingDevice::Uniform> *)(this + 0xac8));
    lVar36 = *(long *)(param_5 + 0x10);
    puVar38 = *(undefined8 **)(this + 0xac8);
    uVar29 = *(undefined8 *)(lVar36 + 0x10);
    *puVar38 = 2;
    *(undefined1 *)(puVar38 + 1) = 0;
    puVar38[2] = uVar29;
    if (puVar38[4] != 0) {
      LOCK();
      plVar31 = (long *)(puVar38[4] + -0x10);
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        lVar36 = puVar38[4];
        puVar38[4] = 0;
        Memory::free_static((void *)(lVar36 + -0x10),false);
      }
      puVar38[4] = 0;
      lVar36 = *(long *)(param_5 + 0x10);
    }
    uVar30 = _LC82;
    uVar29 = *(undefined8 *)(lVar36 + 0x18);
    *(undefined1 *)(puVar38 + 6) = 0;
    puVar38[7] = uVar29;
    puVar38[5] = uVar30;
    if (puVar38[9] != 0) {
      LOCK();
      plVar31 = (long *)(puVar38[9] + -0x10);
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        lVar36 = puVar38[9];
        puVar38[9] = 0;
        Memory::free_static((void *)(lVar36 + -0x10),false);
      }
      puVar38[9] = 0;
      lVar36 = *(long *)(param_5 + 0x10);
    }
    uVar30 = _LC304;
    uVar29 = *(undefined8 *)(lVar36 + 0x20);
    *(undefined1 *)(puVar38 + 0xb) = 0;
    puVar38[0xc] = uVar29;
    puVar38[10] = uVar30;
    if (puVar38[0xe] != 0) {
      LOCK();
      plVar31 = (long *)(puVar38[0xe] + -0x10);
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        lVar36 = puVar38[0xe];
        puVar38[0xe] = 0;
        Memory::free_static((void *)(lVar36 + -0x10),false);
      }
      puVar38[0xe] = 0;
      lVar36 = *(long *)(param_5 + 0x10);
    }
    uVar30 = _LC334;
    uVar29 = *(undefined8 *)(lVar36 + 0x28);
    *(undefined1 *)(puVar38 + 0x10) = 0;
    puVar38[0x11] = uVar29;
    puVar38[0xf] = uVar30;
    if (puVar38[0x13] != 0) {
      LOCK();
      plVar31 = (long *)(puVar38[0x13] + -0x10);
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        lVar36 = puVar38[0x13];
        puVar38[0x13] = 0;
        Memory::free_static((void *)(lVar36 + -0x10),false);
      }
      puVar38[0x13] = 0;
    }
    uVar29 = _LC335;
    uVar27 = *(uint *)(param_5 + 8);
    uVar26 = *(uint *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa60);
    if (uVar26 <= uVar27) {
      uVar34 = (ulong)uVar27;
      goto LAB_00113f98;
    }
    uVar30 = *(undefined8 *)
              (*(long *)(this + (ulong)*(uint *)(this + 0xaa0) * 0x10 + 0xa68) + (ulong)uVar27 * 8);
    *(undefined1 *)(puVar38 + 0x15) = 0;
    puVar38[0x16] = uVar30;
    puVar38[0x14] = uVar29;
    if (puVar38[0x18] != 0) {
      LOCK();
      plVar31 = (long *)(puVar38[0x18] + -0x10);
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        lVar36 = puVar38[0x18];
        puVar38[0x18] = 0;
        Memory::free_static((void *)(lVar36 + -0x10),false);
      }
      puVar38[0x18] = 0;
    }
    uVar29 = RenderingDevice::get_singleton();
    lVar36 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar29,this + 0xac0,*(undefined8 *)(this + 400),3);
    if (lVar36 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_render_batch",
                         "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0xbbe,
                         "Condition \"rid.is_null()\" is true.",
                         "Failed to create uniform set for batch.",0);
        return;
      }
      goto LAB_00114af6;
    }
    local_b8[0] = 0;
    cVar24 = HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
             ::_lookup_pos(this_00,(RIDSetKey *)&local_88,local_b8);
    lVar35 = local_78;
    uVar26 = local_80;
    uVar29 = local_88;
    plVar31 = (long *)0x0;
    if (cVar24 != '\0') {
      plVar31 = (long *)(*(long *)(*(long *)(this + 0x9d0) + (ulong)local_b8[0] * 8) + 0x28);
    }
    if (*(long *)(this + 0x9c0) == 0) {
      pauVar37 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0x9c0) = pauVar37;
      *(undefined4 *)pauVar37[1] = 0;
      *pauVar37 = (undefined1  [16])0x0;
    }
    pLVar33 = (Light *)operator_new(0x38,DefaultAllocator::alloc);
    *(undefined8 *)(pLVar33 + 0x28) = 0;
    *(uint *)(pLVar33 + 8) = uVar26;
    *(undefined8 *)pLVar33 = uVar29;
    plVar4 = *(long **)(this + 0x9c0);
    *(long *)(pLVar33 + 0x10) = lVar35;
    *(long *)(pLVar33 + 0x18) = lVar36;
    lVar35 = *plVar4;
    *(long **)(pLVar33 + 0x30) = plVar4;
    *(long *)(pLVar33 + 0x20) = lVar35;
    if (lVar35 != 0) {
      *(Light **)(lVar35 + 0x28) = pLVar33;
    }
    *plVar4 = (long)pLVar33;
    if (plVar4[1] == 0) {
      plVar4[1] = (long)pLVar33;
    }
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    pLVar49 = pLVar33;
    if (plVar31 != (long *)0x0) {
      lVar35 = *plVar31;
      uVar29 = RenderingDevice::get_singleton();
      RenderingDevice::uniform_set_set_invalidation_callback
                (uVar29,*(undefined8 *)(lVar35 + 0x18),0,0);
      uVar29 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar29);
      plVar4 = *(long **)(this + 0x9c0);
      pvVar39 = (void *)*plVar31;
      if ((pvVar39 != (void *)0x0) && (plVar4 != (long *)0x0)) {
        if (plVar4 == *(long **)((long)pvVar39 + 0x30)) {
          lVar35 = *(long *)((long)pvVar39 + 0x20);
          if (pvVar39 == (void *)*plVar4) {
            *plVar4 = lVar35;
          }
          lVar43 = *(long *)((long)pvVar39 + 0x28);
          if (pvVar39 == (void *)plVar4[1]) {
            plVar4[1] = lVar43;
          }
          if (lVar43 != 0) {
            *(long *)(lVar43 + 0x20) = lVar35;
            lVar35 = *(long *)((long)pvVar39 + 0x20);
          }
          if (lVar35 != 0) {
            *(long *)(lVar35 + 0x28) = lVar43;
          }
          Memory::free_static(pvVar39,false);
          *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
        }
        else {
          pBVar47 = (Batch *)0x0;
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0);
        }
        if (*(int *)((long)*(void **)(this + 0x9c0) + 0x10) == 0) {
          Memory::free_static(*(void **)(this + 0x9c0),false);
          *(undefined8 *)(this + 0x9c0) = 0;
        }
      }
      HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
      ::erase(this_00,(RIDSetKey *)&local_88);
      pLVar49 = *(Light **)(this + 0x9c0);
      if (pLVar49 != (Light *)0x0) {
        pLVar49 = *(Light **)pLVar49;
      }
    }
    plVar31 = (long *)HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
                      ::operator[](this_00,(RIDSetKey *)&local_88);
    *plVar31 = (long)pLVar49;
    while (*(ulong *)(this + 0x9f8) < (ulong)*(uint *)(this + 0x9f4)) {
      pRVar50 = *(RIDSetKey **)(this + 0x9c0);
      if (pRVar50 != (RIDSetKey *)0x0) {
        pRVar50 = *(RIDSetKey **)(pRVar50 + 8);
      }
      uVar29 = RenderingDevice::get_singleton();
      RenderingDevice::uniform_set_set_invalidation_callback
                (uVar29,*(undefined8 *)(pRVar50 + 0x18),0,0);
      uVar29 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar29,*(undefined8 *)(pRVar50 + 0x18));
      HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
      ::erase(this_00,pRVar50);
      plVar31 = *(long **)(this + 0x9c0);
      if ((plVar31 != (long *)0x0) && (pvVar39 = (void *)plVar31[1], pvVar39 != (void *)0x0)) {
        if (plVar31 == *(long **)((long)pvVar39 + 0x30)) {
          lVar35 = *(long *)((long)pvVar39 + 0x20);
          if (pvVar39 == (void *)*plVar31) {
            *plVar31 = lVar35;
          }
          lVar43 = *(long *)((long)pvVar39 + 0x28);
          plVar31[1] = lVar43;
          if (lVar43 != 0) {
            *(long *)(lVar43 + 0x20) = lVar35;
            lVar35 = *(long *)((long)pvVar39 + 0x20);
          }
          if (lVar35 != 0) {
            *(long *)(lVar35 + 0x28) = lVar43;
          }
          Memory::free_static(pvVar39,false);
          *(int *)(plVar31 + 2) = (int)plVar31[2] + -1;
        }
        else {
          pBVar47 = (Batch *)0x0;
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0);
        }
        if (*(int *)((long)*(void **)(this + 0x9c0) + 0x10) == 0) {
          Memory::free_static(*(void **)(this + 0x9c0),false);
          *(undefined8 *)(this + 0x9c0) = 0;
        }
      }
    }
    uVar29 = RenderingDevice::get_singleton();
    pLVar49 = pLVar33 + 0x18;
    pcVar41 = (char *)pLVar33;
    RenderingDevice::uniform_set_set_invalidation_callback
              (uVar29,lVar36,_uniform_set_invalidation_callback);
    __mutex = (pthread_mutex_t *)(lVar28 + 0xe0);
    uVar34 = **(ulong **)(param_5 + 0x10);
    iVar25 = pthread_mutex_lock(__mutex);
    if (iVar25 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar25);
    }
    if ((((uint)uVar34 < *(uint *)(lVar28 + 0xcc)) &&
        (pcVar41 = (char *)(ulong)*(uint *)(lVar28 + 200), uVar34 >> 0x20 != 0x7fffffff)) &&
       ((*(uint *)(((uVar34 & 0xffffffff) % (ulong)pcVar41) * 0x90 +
                   *(long *)(*(long *)(lVar28 + 0xb8) + ((uVar34 & 0xffffffff) / (ulong)pcVar41) * 8
                            ) + 0x88) & 0x7fffffff) == (uint)(uVar34 >> 0x20))) {
      pthread_mutex_unlock(__mutex);
      plVar31 = *(long **)(param_5 + 0x10);
      lVar35 = *(long *)(this + 0xa08);
      if ((lVar35 != 0) && (*(int *)(this + 0xa2c) != 0)) {
        pBVar47 = (Batch *)CONCAT44(0,*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xa28) * 4));
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa28) * 8);
        uVar34 = *plVar31 * 0x3ffff - 1;
        uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
        uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
        uVar27 = (uint)(uVar34 >> 0x16) ^ (uint)uVar34;
        uVar26 = 1;
        if (uVar27 != 0) {
          uVar26 = uVar27;
        }
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar26 * lVar43;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = pBVar47;
        lVar44 = SUB168(auVar11 * auVar19,8);
        uVar27 = *(uint *)(*(long *)(this + 0xa10) + lVar44 * 4);
        uVar34 = (ulong)uVar27;
        uVar45 = SUB164(auVar11 * auVar19,8);
        if (uVar27 != 0) {
          uVar27 = 0;
          while (((uint)uVar34 != uVar26 ||
                 (*plVar31 != *(long *)(*(long *)(lVar35 + lVar44 * 8) + 0x10)))) {
            uVar27 = uVar27 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar45 + 1) * lVar43;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = pBVar47;
            lVar44 = SUB168(auVar12 * auVar20,8);
            uVar3 = *(uint *)(*(long *)(this + 0xa10) + lVar44 * 4);
            uVar34 = (ulong)uVar3;
            uVar45 = SUB164(auVar12 * auVar20,8);
            if ((uVar3 == 0) ||
               (auVar13._8_8_ = 0, auVar13._0_8_ = uVar34 * lVar43, auVar21._8_8_ = 0,
               auVar21._0_8_ = pBVar47, auVar14._8_8_ = 0,
               auVar14._0_8_ =
                    (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa28) * 4)
                            + uVar45) - SUB164(auVar13 * auVar21,8)) * lVar43, auVar22._8_8_ = 0,
               auVar22._0_8_ = pBVar47, SUB164(auVar14 * auVar22,8) < uVar27)) goto LAB_00114714;
          }
          lVar35 = *(long *)(lVar35 + (ulong)uVar45 * 8);
          if (lVar35 != 0) {
            uVar26 = *(uint *)(lVar35 + 0x18);
            pvVar39 = *(void **)(lVar35 + 0x20);
            if (uVar26 == *(uint *)(lVar35 + 0x1c)) {
              *(uint *)(lVar35 + 0x1c) = uVar26 + 1;
              pvVar39 = (void *)Memory::realloc_static(pvVar39,(ulong)(uVar26 + 1) * 8,false);
              *(void **)(lVar35 + 0x20) = pvVar39;
              if (pvVar39 == (void *)0x0) {
                _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0,0,lVar28);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar23 = (code *)invalidInstructionException();
                (*pcVar23)();
              }
              uVar26 = *(uint *)(lVar35 + 0x18);
              plVar31 = *(long **)(param_5 + 0x10);
            }
            *(uint *)(lVar35 + 0x18) = uVar26 + 1;
            *(long *)((long)pvVar39 + (ulong)uVar26 * 8) = lVar36;
            local_c8 = lVar35;
            goto LAB_00114557;
          }
        }
      }
LAB_00114714:
      local_b8[1] = 1;
      uVar29 = *(undefined8 *)(pLVar33 + 0x18);
      puVar38 = (undefined8 *)Memory::realloc_static((void *)0x0,8,false);
      puStack_b0 = puVar38;
      if (puVar38 == (undefined8 *)0x0) {
        _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0,param_3);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar23 = (code *)invalidInstructionException();
        (*pcVar23)();
      }
      uVar30 = *(undefined8 *)(param_5 + 0x10);
      *puVar38 = uVar29;
      local_b8[0] = 1;
      HashMap<RID,LocalVector<RID,unsigned_int,false,true>,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,LocalVector<RID,unsigned_int,false,true>>>>
      ::insert((RID *)&local_c8,(LocalVector *)(this + 0xa00),SUB81(uVar30,0));
      Memory::free_static(puVar38,false);
      plVar31 = *(long **)(param_5 + 0x10);
LAB_00114557:
      pcVar41 = (char *)(local_c8 + 0x10);
      RendererRD::TextureStorage::canvas_texture_set_invalidation_callback
                (lVar28,*plVar31,_canvas_texture_invalidation_callback);
    }
    else {
      pthread_mutex_unlock(__mutex);
    }
  }
  else {
    lVar28 = *(long *)(*(long *)(this + 0x9d0) + (ulong)local_b8[0] * 8);
    plVar31 = *(long **)(this + 0x9c0);
    lVar36 = *(long *)(lVar28 + 0x28);
    if (plVar31 == *(long **)(lVar36 + 0x30)) {
      pcVar41 = *(char **)(lVar36 + 0x28);
      if ((Light *)pcVar41 != (Light *)0x0) {
        lVar35 = *(long *)(lVar36 + 0x20);
        lVar43 = *plVar31;
        if (lVar36 == *plVar31) {
          lVar43 = lVar35;
        }
        if (lVar36 == plVar31[1]) {
          plVar31[1] = (long)pcVar41;
          *(long *)((Light *)pcVar41 + 0x20) = lVar35;
          lVar35 = *(long *)(lVar36 + 0x20);
        }
        else {
          *(long *)((Light *)pcVar41 + 0x20) = lVar35;
          lVar35 = *(long *)(lVar36 + 0x20);
        }
        if (lVar35 != 0) {
          *(char **)(lVar35 + 0x28) = pcVar41;
        }
        *(long *)(lVar43 + 0x28) = lVar36;
        *(long *)(lVar36 + 0x20) = lVar43;
        *(undefined8 *)(lVar36 + 0x28) = 0;
        *plVar31 = lVar36;
        lVar36 = *(long *)(lVar28 + 0x28);
      }
    }
    else {
      pBVar47 = (Batch *)0x0;
      pcVar41 = "Condition \"p_I->data != _data\" is true.";
      _err_print_error("move_to_front","./core/templates/list.h",0x25d,
                       "Condition \"p_I->data != _data\" is true.",0);
      lVar36 = *(long *)(lVar28 + 0x28);
    }
    pLVar49 = (Light *)(lVar36 + 0x18);
  }
  puVar40 = pcVar41;
  if (*(long *)(this + 0xad0) != *(long *)pLVar49) {
    *(long *)(this + 0xad0) = *(long *)pLVar49;
    uVar29 = RenderingDevice::get_singleton();
    puVar40 = (Light *)0x3;
    RenderingDevice::draw_list_bind_uniform_set(uVar29,param_1,*(long *)pLVar49);
  }
  local_d8[0] = *(undefined4 *)param_5;
  local_94 = 0;
  local_b8[0] = *(uint *)(param_5 + 0x4c);
  local_d0 = CONCAT44(*(uint *)(*(long *)(param_5 + 0x10) + 0x3c) | *(uint *)(param_5 + 0x60),
                      *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x38));
  uStack_a0 = *(undefined4 *)(param_5 + 0x50);
  local_b8[1] = 0;
  uStack_9c = (uint)((byte)param_5[0x54] & 1);
  uStack_a8 = 0xffffffff;
  uStack_a4 = 0xffffffff;
  uStack_98 = (uint)(byte)param_5[0x5c];
  uVar26 = *(uint *)(param_5 + 0x48);
  bVar46 = SUB81(param_1,0);
  puStack_b0 = (undefined8 *)param_3;
  if (uVar26 == 3) {
    lVar28 = *(long *)(param_5 + 0x40);
    if (lVar28 == 0) {
      _err_print_error("_render_batch","servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp"
                       ,0xc13,"Parameter \"p_batch->command\" is null.",0,0);
    }
    else {
      uVar29 = _get_pipeline_specialization_or_ubershader(param_2,local_b8,local_d8,0,0,0,0);
      uVar30 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_render_pipeline(uVar30,param_1,uVar29);
      lVar36 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar36,(void *)param_1,(uint)local_d8);
      uVar29 = RenderingDevice::get_singleton();
      uVar26 = *(uint *)(lVar28 + 0x14);
      if (3 < uVar26) {
        uVar26 = 3;
      }
      RenderingDevice::draw_list_bind_index_array
                (uVar29,param_1,*(undefined8 *)(this + (ulong)(uVar26 - 1) * 8 + 0x730));
      uVar26 = *(uint *)(param_5 + 4);
      lVar28 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar28,bVar46,1,uVar26);
      uVar30 = _UNK_0012dbe8;
      uVar29 = __LC341;
      if (param_6 != (RenderInfo *)0x0) {
        uVar27 = *(uint *)(param_5 + 0x58);
        local_48 = 3;
        *(int *)(param_6 + 0x20) = *(int *)(param_6 + 0x20) + 1;
        local_58 = uVar29;
        uStack_50 = uVar30;
        lVar28 = (long)*(int *)((long)&local_58 + (ulong)uVar27 * 4);
        *(ulong *)(param_6 + 0x18) =
             CONCAT44(((uVar27 - *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                          ::subtractor + lVar28 * 4)) /
                      *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                ::divisor + lVar28 * 4)) * uVar26 +
                      (int)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20),
                      uVar26 + (int)*(undefined8 *)(param_6 + 0x18));
      }
    }
  }
  else if (uVar26 < 4) {
    if (uVar26 == 2) {
      lVar28 = *(long *)(param_5 + 0x40);
      if (lVar28 == 0) {
        _err_print_error("_render_batch",
                         "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0xbf9,
                         "Parameter \"p_batch->command\" is null.",0,0);
      }
      else {
        lVar36 = *(long *)(this + 0x700);
        if ((lVar36 != 0) && (*(int *)(this + 0x724) != 0)) {
          uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x720) * 4)
                           );
          lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x720) * 8);
          uVar34 = *(long *)(lVar28 + 0x18) * 0x3ffff - 1;
          uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
          uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
          uVar34 = uVar34 >> 0x16 ^ uVar34;
          uVar48 = uVar34 & 0xffffffff;
          if ((int)uVar34 == 0) {
            uVar48 = 1;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar48 * lVar35;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar51;
          lVar43 = SUB168(auVar7 * auVar15,8);
          uVar26 = *(uint *)(*(long *)(this + 0x708) + lVar43 * 4);
          uVar27 = SUB164(auVar7 * auVar15,8);
          if (uVar26 != 0) {
            uVar45 = 0;
            do {
              if ((uVar26 == (uint)uVar48) &&
                 (*(long *)(lVar28 + 0x18) == *(long *)(*(long *)(lVar36 + lVar43 * 8) + 0x10))) {
                lVar36 = *(long *)(lVar36 + (ulong)uVar27 * 8);
                uStack_a8 = (undefined4)*(undefined8 *)(lVar36 + 0x18);
                uStack_a4 = (undefined4)((ulong)*(undefined8 *)(lVar36 + 0x18) >> 0x20);
                uVar29 = _get_pipeline_specialization_or_ubershader
                                   (param_2,local_b8,local_d8,0,0,0,0);
                uVar30 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_render_pipeline(uVar30,param_1,uVar29);
                lVar35 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_set_push_constant(lVar35,(void *)param_1,(uint)local_d8);
                uVar29 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_vertex_array
                          (uVar29,param_1,*(undefined8 *)(lVar36 + 0x28));
                if (*(long *)(lVar36 + 0x38) != 0) {
                  uVar29 = RenderingDevice::get_singleton();
                  RenderingDevice::draw_list_bind_index_array
                            (uVar29,param_1,*(undefined8 *)(lVar36 + 0x38));
                }
                lVar35 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_draw
                          (lVar35,bVar46,(uint)(*(long *)(lVar36 + 0x38) != 0),1);
                if (param_6 != (RenderInfo *)0x0) {
                  iVar25 = *(int *)(lVar28 + 0x14);
                  iVar1 = *(int *)(lVar36 + 0x40);
                  *(int *)(param_6 + 0x18) = *(int *)(param_6 + 0x18) + 1;
                  iVar2 = *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                   ::subtractor + (long)iVar25 * 4);
                  *(int *)(param_6 + 0x20) = *(int *)(param_6 + 0x20) + 1;
                  *(uint *)(param_6 + 0x1c) =
                       *(int *)(param_6 + 0x1c) +
                       (uint)(iVar1 - iVar2) /
                       *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                 ::divisor + (long)iVar25 * 4);
                }
                goto LAB_00113450;
              }
              uVar45 = uVar45 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)(uVar27 + 1) * lVar35;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar51;
              lVar43 = SUB168(auVar8 * auVar16,8);
              uVar26 = *(uint *)(*(long *)(this + 0x708) + lVar43 * 4);
              uVar27 = SUB164(auVar8 * auVar16,8);
            } while ((uVar26 != 0) &&
                    (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar26 * lVar35, auVar17._8_8_ = 0,
                    auVar17._0_8_ = uVar51, auVar10._8_8_ = 0,
                    auVar10._0_8_ =
                         (ulong)((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x720) * 4) + uVar27) -
                                SUB164(auVar9 * auVar17,8)) * lVar35, auVar18._8_8_ = 0,
                    auVar18._0_8_ = uVar51, uVar45 <= SUB164(auVar10 * auVar18,8)));
          }
        }
        _err_print_error("_render_batch",
                         "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0xbfe,
                         "Parameter \"pb\" is null.",0,0);
      }
    }
    else {
      uVar29 = _get_pipeline_specialization_or_ubershader(param_2,local_b8,local_d8,0,0,0,0);
      uVar30 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_render_pipeline(uVar30,param_1,uVar29);
      if (param_5[0x5c] != (Batch)0x0) {
        lVar28 = RenderingDevice::get_singleton();
        RenderingDevice::draw_list_set_blend_constants(lVar28,(Color *)param_1);
      }
      lVar28 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar28,(void *)param_1,(uint)local_d8);
      uVar29 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_bind_index_array(uVar29,param_1,*(undefined8 *)(this + 0x1a0));
      lVar28 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar28,bVar46,1,*(uint *)(param_5 + 4));
      if (param_6 != (RenderInfo *)0x0) {
        iVar25 = *(int *)(param_5 + 4);
        *(int *)(param_6 + 0x20) = *(int *)(param_6 + 0x20) + 1;
        *(ulong *)(param_6 + 0x18) =
             CONCAT44(iVar25 * 2 + (int)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20),
                      iVar25 + (int)*(undefined8 *)(param_6 + 0x18));
      }
    }
  }
  else if (uVar26 - 4 < 3) {
    if (*(long *)(param_5 + 0x40) == 0) {
      _err_print_error("_render_batch","servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp"
                       ,0xc2a,"Parameter \"p_batch->command\" is null.",0,0);
    }
    else {
      plVar31 = (long *)RendererRD::MeshStorage::get_singleton();
      pPVar32 = (Particles *)RendererRD::ParticlesStorage::get_singleton();
      local_118 = 0;
      iVar25 = *(int *)(param_5 + 0x48);
      if (iVar25 == 4) {
        uVar34 = *(ulong *)(*(long *)(param_5 + 0x40) + 0x18);
        local_118 = *(undefined8 *)(*(long *)(param_5 + 0x40) + 0x48);
      }
      else {
        if (iVar25 != 5) {
          if (iVar25 != 6) goto LAB_00113450;
          lVar28 = *(long *)(param_5 + 0x40);
          uVar51 = *(ulong *)(lVar28 + 0x18);
          uVar34 = (**(code **)(*(long *)pPVar32 + 0x158))(pPVar32,uVar51,0);
          if ((uVar51 == 0) || (*(uint *)(pPVar32 + 0x91c) <= (uint)uVar51)) {
LAB_001149ec:
            pBVar47 = (Batch *)0x0;
            _err_print_error("particles_get_mode",
                             "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",0x1ee,
                             "Parameter \"particles\" is null.",0);
          }
          else {
            piVar42 = (int *)(((uVar51 & 0xffffffff) % (ulong)*(uint *)(pPVar32 + 0x918)) * 0x2f8 +
                             *(long *)(*(long *)(pPVar32 + 0x908) +
                                      ((uVar51 & 0xffffffff) / (ulong)*(uint *)(pPVar32 + 0x918)) *
                                      8));
            if (piVar42[0xbc] != (int)(uVar51 >> 0x20)) {
              if (piVar42[0xbc] + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,piVar42);
              }
              goto LAB_001149ec;
            }
            if (*piVar42 != 0) {
              _err_print_error("_render_batch",
                               "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0xc42,
                               "Condition \"particles_storage->particles_get_mode(particles) != RenderingServer::PARTICLES_MODE_2D\" is true. Breaking."
                               ,0,0);
              goto LAB_00113450;
            }
          }
          (**(code **)(*(long *)pPVar32 + 0x120))(pPVar32,uVar51);
          cVar24 = (**(code **)(*(long *)pPVar32 + 0x100))(pPVar32,uVar51);
          if (cVar24 == '\0') {
            RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
            iVar25 = (**(code **)(*(long *)pPVar32 + 0x150))(pPVar32,uVar51);
            if (iVar25 != 0) {
              uVar29 = *(undefined8 *)(this + 400);
              uVar51 = *(ulong *)(lVar28 + 0x18);
              if ((uVar51 == 0) || (*(uint *)(pPVar32 + 0x91c) <= (uint)uVar51)) {
LAB_00114aca:
                pBVar47 = (Batch *)0x0;
                uVar29 = 0;
                _err_print_error("particles_get_instance_buffer_uniform_set",
                                 "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",
                                 0x215,"Parameter \"particles\" is null.",0);
              }
              else {
                lVar28 = ((uVar51 & 0xffffffff) % (ulong)*(uint *)(pPVar32 + 0x918)) * 0x2f8 +
                         *(long *)(*(long *)(pPVar32 + 0x908) +
                                  ((uVar51 & 0xffffffff) / (ulong)*(uint *)(pPVar32 + 0x918)) * 8);
                if (*(int *)(lVar28 + 0x2f0) != (int)(uVar51 >> 0x20)) {
                  if (*(int *)(lVar28 + 0x2f0) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0,pBVar47);
                  }
                  goto LAB_00114aca;
                }
                if (*(long *)(lVar28 + 0x108) == 0) {
LAB_00113646:
                  RendererRD::ParticlesStorage::_particles_update_buffers(pPVar32);
                  local_78 = *(long *)(lVar28 + 0xe0);
                  local_c0 = 0;
                  local_88 = 8;
                  local_80 = local_80 & 0xffffff00;
                  local_68 = 0;
                  Vector<RenderingDevice::Uniform>::push_back
                            ((Vector<RenderingDevice::Uniform> *)&local_c8,(RIDSetKey *)&local_88);
                  uVar30 = RenderingDevice::get_singleton();
                  uVar29 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                     (uVar30,(Vector<RenderingDevice::Uniform> *)&local_c8,uVar29,2,
                                      0);
                  *(undefined8 *)(lVar28 + 0x108) = uVar29;
                  CowData<RenderingDevice::Uniform>::_unref
                            ((CowData<RenderingDevice::Uniform> *)&local_c0);
                }
                else {
                  uVar30 = RenderingDevice::get_singleton();
                  cVar24 = RenderingDevice::uniform_set_is_valid
                                     (uVar30,*(undefined8 *)(lVar28 + 0x108));
                  if (cVar24 == '\0') goto LAB_00113646;
                }
                uVar29 = *(undefined8 *)(lVar28 + 0x108);
              }
              uVar30 = RenderingDevice::get_singleton();
              puVar40 = (Light *)0x2;
              RenderingDevice::draw_list_bind_uniform_set(uVar30,param_1,uVar29);
              goto LAB_00114051;
            }
          }
          goto LAB_00113450;
        }
        uVar51 = *(ulong *)(*(long *)(param_5 + 0x40) + 0x18);
        uVar34 = (**(code **)(*plVar31 + 0x168))(plVar31,uVar51);
        uVar29 = *(undefined8 *)(this + 400);
        if ((uVar51 == 0) || (*(uint *)((long)plVar31 + 0x19c) <= (uint)uVar51)) {
LAB_00114665:
          lVar36 = 0;
        }
        else {
          lVar28 = ((uVar51 & 0xffffffff) % (ulong)*(uint *)(plVar31 + 0x33)) * 0x160 +
                   *(long *)(plVar31[0x31] +
                            ((uVar51 & 0xffffffff) / (ulong)*(uint *)(plVar31 + 0x33)) * 8);
          if (*(int *)(lVar28 + 0x158) != (int)(uVar51 >> 0x20)) {
            if (*(int *)(lVar28 + 0x158) + 0x80000000U < 0x7fffffff) {
              pBVar47 = (Batch *)0x0;
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,plVar31[0x31]);
            }
            goto LAB_00114665;
          }
          lVar36 = *(long *)(lVar28 + 0xb0);
          if (lVar36 == 0) {
            if (*(long *)(lVar28 + 0xa0) == 0) goto LAB_00114665;
            local_80 = local_80 & 0xffffff00;
            local_c0 = 0;
            local_88 = 8;
            local_68 = 0;
            local_78 = *(long *)(lVar28 + 0xa0);
            Vector<RenderingDevice::Uniform>::push_back
                      ((Vector<RenderingDevice::Uniform> *)&local_c8,(RIDSetKey *)&local_88);
            uVar30 = RenderingDevice::get_singleton();
            uVar29 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                               (uVar30,(Vector<RenderingDevice::Uniform> *)&local_c8,uVar29,2,0);
            *(undefined8 *)(lVar28 + 0xb0) = uVar29;
            CowData<RenderingDevice::Uniform>::_unref
                      ((CowData<RenderingDevice::Uniform> *)&local_c0);
            lVar36 = *(long *)(lVar28 + 0xb0);
          }
        }
        uVar29 = RenderingDevice::get_singleton();
        puVar40 = (Light *)0x2;
        RenderingDevice::draw_list_bind_uniform_set(uVar29,param_1,lVar36);
      }
LAB_00114051:
      if ((uVar34 != 0) && (uVar26 = (**(code **)(*plVar31 + 0x80))(plVar31,uVar34), uVar26 != 0)) {
        uVar51 = 0;
        do {
          if (*(uint *)((long)plVar31 + 0xcc) <= (uint)uVar34) {
LAB_001142c2:
            _err_print_error("mesh_get_surface",
                             "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1a6,
                             "Parameter \"mesh\" is null.",0,0);
                    /* WARNING: Does not return */
            pcVar23 = (code *)invalidInstructionException();
            (*pcVar23)();
          }
          pCVar6 = (CanvasShaderData *)((uVar34 & 0xffffffff) % (ulong)*(uint *)(plVar31 + 0x19));
          lVar28 = (long)pCVar6 * 0xe0 +
                   *(long *)(plVar31[0x17] +
                            ((uVar34 & 0xffffffff) / (ulong)*(uint *)(plVar31 + 0x19)) * 8);
          uVar27 = *(uint *)(lVar28 + 0xd8);
          if ((uint)(uVar34 >> 0x20) != uVar27) {
            if (uVar27 + 0x80000000 < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_001142c2;
          }
          if (*(uint *)(lVar28 + 0x10) <= (uint)uVar51) {
            _render_batch(plVar31[0x17],pCVar6,(ulong)uVar27,(Light *)puVar40,
                          (Batch *)(ulong)*(uint *)(lVar28 + 0x10),(RenderInfo *)pBVar47);
            return;
          }
          puVar5 = *(uint **)(*(long *)(lVar28 + 8) + uVar51 * 8);
          uVar27 = *puVar5;
          if (uVar27 < 5) {
            pBVar47 = (Batch *)(uVar51 & 0xffffffff);
            local_b8[0] = (uVar27 == 0) + 4;
            local_88 = 0;
            uStack_a8 = 0xffffffff;
            uStack_a4 = 0xffffffff;
            uStack_a0 = *(undefined4 *)(CSWTCH_860 + (ulong)uVar27 * 4);
            uVar29 = _get_pipeline_specialization_or_ubershader
                               (param_2,local_b8,local_d8,local_118,puVar5,pBVar47,
                                (RIDSetKey *)&local_88);
            uVar30 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_render_pipeline(uVar30,param_1,uVar29);
            lVar28 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar28,(void *)param_1,(uint)local_d8);
            lVar28 = *(long *)(puVar5 + 0x24);
            if (lVar28 != 0) {
              uVar29 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_index_array(uVar29,param_1,lVar28);
            }
            uVar29 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_vertex_array(uVar29,param_1,local_88);
            lVar36 = RenderingDevice::get_singleton();
            puVar40 = (undefined1 *)(ulong)*(uint *)(param_5 + 0x58);
            RenderingDevice::draw_list_draw
                      (lVar36,bVar46,(uint)(lVar28 != 0),*(uint *)(param_5 + 0x58));
            if (param_6 != (RenderInfo *)0x0) {
              *(int *)(param_6 + 0x18) = *(int *)(param_6 + 0x18) + 1;
              uVar45 = puVar5[0x26];
              if (uVar45 == 0) {
                uVar45 = puVar5[10];
              }
              iVar25 = *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                ::subtractor + (long)(int)uVar27 * 4);
              puVar40 = _indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::divisor
              ;
              uVar27 = *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                 ::divisor + (long)(int)uVar27 * 4);
              iVar1 = *(int *)(param_5 + 0x58);
              *(int *)(param_6 + 0x20) = *(int *)(param_6 + 0x20) + 1;
              *(uint *)(param_6 + 0x1c) =
                   *(int *)(param_6 + 0x1c) + ((uVar45 - iVar25) / uVar27) * iVar1;
            }
          }
          else {
            pBVar47 = (Batch *)0x0;
            pcVar41 = 
            "Condition \"primitive < 0 || primitive >= RenderingServer::PRIMITIVE_MAX\" is true. Continuing."
            ;
            _err_print_error("_render_batch",
                             "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0xc5e,
                             "Condition \"primitive < 0 || primitive >= RenderingServer::PRIMITIVE_MAX\" is true. Continuing."
                             ,0);
            puVar40 = pcVar41;
          }
          uVar51 = uVar51 + 1;
        } while (uVar51 != uVar26);
      }
    }
  }
LAB_00113450:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114af6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCanvasRenderRD::_render_batch_items(RendererCanvasRenderRD::RenderTarget, int,
   Transform2D const&, RendererCanvasRender::Light*, bool&, bool, RenderingMethod::RenderInfo*) */

void RendererCanvasRenderRD::_render_batch_items
               (RendererCanvasRenderRD *param_1,undefined8 param_2,undefined8 param_3,int param_4,
               Transform2D *param_5,Light *param_6,undefined8 param_7,char param_8,
               RenderInfo *param_9)

{
  Batch *pBVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  Rect2 *pRVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  CanvasShaderData *pCVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  RendererCanvasRenderRD *pRVar20;
  uint uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  Transform2D local_98 [16];
  undefined8 local_88;
  bool local_75;
  int local_74;
  undefined8 local_70;
  undefined4 *local_68;
  long local_60;
  Transform2D local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  lVar5 = RendererRD::MaterialStorage::get_singleton();
  local_75 = false;
  local_70 = 0;
  local_68 = (undefined4 *)_new_batch(param_1,&local_75);
  *local_68 = *(undefined4 *)(param_1 + 0xaac);
  if (0 < param_4) {
    pRVar20 = param_1;
    do {
      lVar12 = *(long *)(pRVar20 + 0xb48);
      if (*(long *)(lVar12 + 200) != *(long *)(local_68 + 10)) {
        local_68 = (undefined4 *)_new_batch(param_1,&local_75);
        local_70 = *(undefined8 *)(lVar12 + 200);
        *(undefined8 *)(local_68 + 10) = local_70;
      }
      lVar10 = *(long *)(lVar12 + 0xd0);
      if (*(long *)(lVar12 + 0xd0) == 0) {
        lVar10 = lVar12;
      }
      uVar15 = *(ulong *)(lVar10 + 0x68);
      if (*(char *)(lVar12 + 0x48) == '\0') {
LAB_00114cb0:
        if (uVar15 != *(ulong *)(local_68 + 0xc)) {
          puVar6 = (undefined4 *)_new_batch(param_1,&local_75);
          uVar8 = 0;
          local_68 = puVar6;
          if (uVar15 != 0) {
LAB_00115058:
            puVar6 = local_68;
            if ((uint)uVar15 < *(uint *)(lVar5 + 0x26c)) {
              lVar10 = ((uVar15 & 0xffffffff) % (ulong)*(uint *)(lVar5 + 0x268)) * 0xc0 +
                       *(long *)(*(long *)(lVar5 + 600) +
                                ((uVar15 & 0xffffffff) / (ulong)*(uint *)(lVar5 + 0x268)) * 8);
              if (*(int *)(lVar10 + 0xb8) == (int)(uVar15 >> 0x20)) {
                if (*(int *)(lVar10 + 0x18) == 0) {
                  uVar8 = *(undefined8 *)(lVar10 + 8);
                }
                else {
LAB_00115559:
                  uVar8 = 0;
                }
              }
              else {
                if (0x7ffffffe < *(int *)(lVar10 + 0xb8) + 0x80000000U) goto LAB_00115559;
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
                uVar8 = 0;
              }
            }
            else {
              uVar8 = 0;
            }
          }
          *(ulong *)(puVar6 + 0xc) = uVar15;
          *(undefined8 *)(puVar6 + 0xe) = uVar8;
        }
      }
      else {
        if (**(int **)(lVar12 + 0x40) == 2) {
LAB_00115027:
          uVar15 = *(ulong *)(param_1 + 0x200ba8);
          goto LAB_00114cb0;
        }
        if (uVar15 == 0) {
          if (**(int **)(lVar12 + 0x40) != 1) {
            uVar15 = *(ulong *)(param_1 + 0x200ba0);
            goto LAB_00114cb0;
          }
          goto LAB_00115027;
        }
        if (uVar15 != *(ulong *)(local_68 + 0xc)) {
          local_68 = (undefined4 *)_new_batch(param_1,&local_75);
          goto LAB_00115058;
        }
      }
      if (*(long *)(lVar12 + 0xf8) == 0) {
LAB_00114f67:
        Transform2D::operator*(local_58,param_5);
        _record_item_commands
                  (param_1,lVar12,param_2,param_3,local_58,&local_70,param_6,&local_74,&local_75,
                   param_7,&local_68);
        iVar19 = local_74;
      }
      else {
        fVar26 = *(float *)(lVar12 + 0xec);
        fVar25 = *(float *)(lVar12 + 0xf0);
        if (fVar26 == 0.0) {
          if (fVar25 == 0.0) goto LAB_00114f67;
          iVar17 = *(int *)(lVar12 + 0xf4);
          fVar26 = fVar26 * (float)-(iVar17 / 2);
          fVar23 = (float)-(iVar17 / 2) * fVar25;
          iVar19 = 0;
LAB_00114d48:
          bVar22 = iVar17 < 0;
          iVar18 = iVar17;
          iVar17 = iVar19;
          iVar19 = local_74;
          if (bVar22) goto joined_r0x00114fd2;
        }
        else {
          iVar17 = *(int *)(lVar12 + 0xf4);
          fVar26 = fVar26 * (float)-(iVar17 / 2);
          fVar23 = (float)-(iVar17 / 2) * fVar25;
          iVar18 = 0;
          iVar19 = iVar17;
          if (fVar25 != 0.0) goto LAB_00114d48;
        }
        iVar14 = 0;
        while( true ) {
          fVar25 = (float)iVar14 * fVar25 + fVar23;
          if (-1 < iVar17) {
            iVar19 = 0;
            do {
              local_58 = *(Transform2D (*) [16])(lVar12 + 0xa0);
              fVar24 = (float)iVar19;
              iVar19 = iVar19 + 1;
              fVar24 = fVar24 * *(float *)(lVar12 + 0xec) + fVar26;
              uVar8 = *(undefined8 *)(*(long *)(lVar12 + 0xf8) + 0xa8);
              uVar9 = *(undefined8 *)(*(long *)(lVar12 + 0xf8) + 0xa0);
              local_48 = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xb0) >> 0x20) +
                                  (float)((ulong)uVar8 >> 0x20) * fVar25 +
                                  (float)((ulong)uVar9 >> 0x20) * fVar24,
                                  (float)*(undefined8 *)(lVar12 + 0xb0) +
                                  (float)uVar8 * fVar25 + (float)uVar9 * fVar24);
              Transform2D::operator*(local_98,param_5);
              local_58[0] = local_98[0];
              local_58[1] = local_98[1];
              local_58[2] = local_98[2];
              local_58[3] = local_98[3];
              local_58[4] = local_98[4];
              local_58[5] = local_98[5];
              local_58[6] = local_98[6];
              local_58[7] = local_98[7];
              local_58[8] = local_98[8];
              local_58[9] = local_98[9];
              local_58[10] = local_98[10];
              local_58[0xb] = local_98[0xb];
              local_58[0xc] = local_98[0xc];
              local_58[0xd] = local_98[0xd];
              local_58[0xe] = local_98[0xe];
              local_58[0xf] = local_98[0xf];
              local_48 = local_88;
              _record_item_commands
                        (param_1,lVar12,param_2,param_3,local_58,&local_70,param_6,&local_74,
                         &local_75,param_7,&local_68);
            } while (iVar19 <= iVar17);
          }
          iVar14 = iVar14 + 1;
          iVar19 = local_74;
          if (iVar18 < iVar14) break;
          fVar25 = *(float *)(lVar12 + 0xf0);
        }
      }
joined_r0x00114fd2:
      local_74 = iVar19;
      if (pRVar20 + 8 == param_1 + (long)param_4 * 8) goto LAB_00114fd8;
      pRVar20 = pRVar20 + 8;
    } while( true );
  }
  iVar19 = 0;
  goto LAB_00114fe9;
LAB_00114fd8:
  if (iVar19 != 0) {
    uVar8 = RenderingDevice::get_singleton();
    uVar21 = *(uint *)(param_1 + 0xaa4);
    uVar2 = *(uint *)(param_1 + (ulong)*(uint *)(param_1 + 0xaa0) * 0x10 + 0xa60);
    if (uVar2 <= uVar21) {
LAB_0011540b:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar21,(ulong)uVar2,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    RenderingDevice::buffer_update
              (uVar8,*(undefined8 *)
                      (*(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xaa0) * 0x10 + 0xa68) +
                      (ulong)uVar21 * 8),*(int *)(param_1 + 0xaac) << 7,iVar19 << 7,
               *(undefined8 *)(param_1 + 0xab0));
  }
LAB_00114fe9:
  if (*(int *)(param_1 + 0xa90) == 0) goto LAB_00114ffe;
  plVar7 = (long *)RendererRD::TextureStorage::get_singleton();
  local_60 = 0;
  if (param_8 == '\0') {
    uVar8 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar7,param_2);
    (**(code **)(*plVar7 + 600))(plVar7,param_2,0);
    cVar4 = (**(code **)(*plVar7 + 0x288))(plVar7,param_2);
    bVar22 = cVar4 != '\0';
    if (bVar22) {
      (**(code **)(*plVar7 + 0x290))(plVar7,param_2);
      Vector<Color>::push_back(&local_68);
      (**(code **)(*plVar7 + 0x298))(plVar7,param_2);
    }
    lVar5 = RendererRD::TextureStorage::render_target_get_framebuffer_uniform_set(plVar7,param_2);
  }
  else {
    bVar22 = false;
    uVar8 = RendererRD::TextureStorage::render_target_get_rd_backbuffer_framebuffer(plVar7);
    lVar5 = RendererRD::TextureStorage::render_target_get_backbuffer_uniform_set(plVar7,param_2);
  }
  if (lVar5 == 0) {
LAB_00115350:
    lVar5 = _create_base_uniform_set(param_1,param_2,param_8);
  }
  else {
    uVar9 = RenderingDevice::get_singleton();
    cVar4 = RenderingDevice::uniform_set_is_valid(uVar9,lVar5);
    if (cVar4 == '\0') goto LAB_00115350;
  }
  uVar9 = RenderingDevice::get_singleton();
  lVar10 = RenderingDevice::framebuffer_get_format(uVar9,uVar8);
  uVar9 = RenderingDevice::get_singleton();
  lVar12 = 0;
  uVar21 = 0;
  local_58 = (Transform2D  [16])ZEXT816(0);
  pRVar11 = (Rect2 *)RenderingDevice::draw_list_begin
                               (uVar9,uVar8,bVar22,&local_68,0,local_58,0xb0000);
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set(uVar8,pRVar11,lVar5,0);
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set(uVar8,pRVar11,*(undefined8 *)(param_1 + 0xb30),2);
  *(undefined8 *)(param_1 + 0xad0) = 0;
  do {
    uVar2 = *(uint *)(param_1 + 0xa90);
    if (uVar2 <= uVar21) goto LAB_0011540b;
    pBVar1 = (Batch *)(*(long *)(param_1 + 0xa98) + (ulong)uVar21 * 0x68);
    if (*(int *)(pBVar1 + 4) != 0) {
      lVar5 = *(long *)(pBVar1 + 0x28);
      if (lVar5 != lVar12) {
        if (lVar5 == 0) {
          lVar5 = RenderingDevice::get_singleton();
          lVar12 = 0;
          RenderingDevice::draw_list_disable_scissor(lVar5);
        }
        else {
          lVar12 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_enable_scissor(lVar12,pRVar11);
          lVar12 = lVar5;
        }
      }
      lVar5 = *(long *)(pBVar1 + 0x38);
      pCVar16 = *(CanvasShaderData **)(param_1 + 0x10);
      if (((lVar5 != 0) && (*(long *)(*(CanvasShaderData **)(lVar5 + 0xa8) + 0xa8) != 0)) &&
         (cVar4 = CanvasShaderData::is_valid(*(CanvasShaderData **)(lVar5 + 0xa8)), cVar4 != '\0'))
      {
        pCVar16 = *(CanvasShaderData **)(lVar5 + 0xa8);
        cVar4 = (**(code **)(*plVar7 + 0x278))(plVar7,param_2);
        plVar13 = (long *)(lVar5 + 0xb8);
        if (cVar4 != '\0') {
          plVar13 = (long *)(lVar5 + 0xb0);
        }
        lVar5 = *plVar13;
        if (lVar5 != 0) {
          uVar8 = RenderingDevice::get_singleton();
          cVar4 = RenderingDevice::uniform_set_is_valid(uVar8,lVar5);
          if (cVar4 != '\0') {
            uVar8 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_uniform_set(uVar8,pRVar11,lVar5,1);
            RendererRD::MaterialStorage::MaterialData::set_as_used();
          }
        }
      }
      _render_batch(param_1,(long)pRVar11,pCVar16,lVar10,param_6,pBVar1,param_9);
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 <= *(uint *)(param_1 + 0xaa8));
  RenderingDevice::get_singleton();
  RenderingDevice::draw_list_end();
  lVar5 = local_60;
  *(undefined4 *)(param_1 + 0xaa8) = 0;
  if (*(int *)(param_1 + 0xa90) != 0) {
    *(undefined4 *)(param_1 + 0xa90) = 0;
  }
  *(int *)(param_1 + 0xaac) = *(int *)(param_1 + 0xaac) + iVar19;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
LAB_00114ffe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCanvasRenderRD::canvas_render_items(RID, RendererCanvasRender::Item*, Color const&,
   RendererCanvasRender::Light*, RendererCanvasRender::Light*, Transform2D const&,
   RenderingServer::CanvasItemTextureFilter, RenderingServer::CanvasItemTextureRepeat, bool, bool&,
   RenderingMethod::RenderInfo*) */

void __thiscall
RendererCanvasRenderRD::canvas_render_items
          (RendererCanvasRenderRD *this,undefined8 param_2,long param_3,float *param_4,byte *param_5
          ,long param_6,ulong *param_7,undefined4 param_8,undefined4 param_9,uint param_10,
          undefined1 *param_11,undefined8 param_12)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  undefined1 uVar19;
  byte bVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  byte *pbVar34;
  char cVar35;
  uint uVar36;
  bool bVar37;
  uint uVar38;
  undefined8 *puVar39;
  long lVar40;
  ulong uVar41;
  long in_FS_OFFSET;
  bool bVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  uint local_2a8;
  Transform2D *local_298;
  undefined1 local_248 [16];
  float local_238;
  undefined8 local_228;
  Vector3 *local_208;
  undefined1 local_1d8 [16];
  Transform2D local_1c8 [32];
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined1 local_158 [12];
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  float local_dc;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_80;
  uint local_7c;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint local_58;
  float local_54;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar24 = (long *)RendererRD::TextureStorage::get_singleton();
  lVar25 = RendererRD::MaterialStorage::get_singleton();
  plVar26 = (long *)RendererRD::MeshStorage::get_singleton();
  *param_11 = 0;
  Transform2D::affine_inverse();
  uVar23 = _LC75;
  fVar14 = (float)_LC51;
  if (param_6 == 0) {
    uVar38 = 0;
    this[0x200b88] = (RendererCanvasRenderRD)0x0;
    fVar14 = (float)_LC51;
    if (param_5 != (byte *)0x0) {
      local_248 = ZEXT416(_LC75);
      local_228 = (double)CONCAT44(_LC178._4_4_,(undefined4)_LC178);
      goto LAB_0011590d;
    }
    local_248 = ZEXT416(_LC75);
    local_228 = (double)CONCAT44(_LC178._4_4_,(undefined4)_LC178);
    local_238 = _LC146;
  }
  else {
    local_248 = ZEXT416(_LC75);
    uVar38 = 0;
    local_228 = (double)CONCAT44(_LC178._4_4_,(undefined4)_LC178);
    do {
      if (*(uint *)(this + 0xb38) == uVar38) {
        *(undefined4 *)(param_6 + 0x128) = 0xffffffff;
        param_6 = *(long *)(param_6 + 0x108);
      }
      else {
        uVar33 = *(ulong *)(param_6 + 0x118);
        if ((uVar33 != 0) && ((uint)uVar33 < *(uint *)(this + 0x76c))) {
          lVar40 = *(long *)(*(long *)(this + 0x758) +
                            ((uVar33 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8) +
                   ((uVar33 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38;
          if (*(int *)(lVar40 + 0x30) == (int)(uVar33 >> 0x20)) {
            uVar46 = Vector2::normalized();
            dVar18 = _LC55;
            lVar31 = *(long *)(this + 0xad8) + (ulong)uVar38 * 0x80;
            *(uint *)(lVar31 + 0x60) = (uint)uVar46 ^ uVar23;
            lVar29 = 0;
            *(uint *)(lVar31 + 100) = (uint)((ulong)uVar46 >> 0x20) ^ uVar23;
            *(undefined4 *)(lVar31 + 0x20) = *(undefined4 *)(lVar40 + 0x14);
            uVar45 = *(undefined4 *)(lVar40 + 0x1c);
            *(undefined4 *)(lVar31 + 0x28) = 0;
            *(undefined4 *)(lVar31 + 0x24) = uVar45;
            *(undefined4 *)(lVar31 + 0x2c) = *(undefined4 *)(lVar40 + 0x24);
            *(undefined4 *)(lVar31 + 0x30) = *(undefined4 *)(lVar40 + 0x18);
            uVar45 = *(undefined4 *)(lVar40 + 0x20);
            *(undefined4 *)(lVar31 + 0x38) = 0;
            *(undefined4 *)(lVar31 + 0x34) = uVar45;
            *(undefined4 *)(lVar31 + 0x3c) = *(undefined4 *)(lVar40 + 0x28);
            *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(param_6 + 0x44);
            do {
              iVar27 = (int)lVar29;
              iVar22 = (int)((double)*(float *)(param_6 + 0x9c + lVar29 * 4) * dVar18);
              if (0xff < iVar22) {
                iVar22 = 0xff;
              }
              uVar19 = (undefined1)iVar22;
              if (iVar22 < 0) {
                uVar19 = 0;
              }
              *(undefined1 *)((long)iVar27 + 0x50 + lVar31) = uVar19;
              lVar2 = lVar29 * 4;
              lVar29 = lVar29 + 1;
              lVar31 = *(long *)(this + 0xad8) + (ulong)uVar38 * 0x80;
              *(undefined4 *)(lVar31 + 0x40 + (long)iVar27 * 4) =
                   *(undefined4 *)(param_6 + 4 + lVar2);
            } while (lVar29 != 4);
            lVar29 = *(long *)(this + 0xb08);
            *(float *)(lVar31 + 0x4c) = *(float *)(lVar31 + 0x4c) * *(float *)(param_6 + 0x48);
            if (lVar29 == 0) {
              uVar45 = 0;
              *(float *)(lVar31 + 0x58) = fVar14;
              *(float *)(lVar31 + 0x68) = fVar14;
            }
            else {
              *(float *)(lVar31 + 0x58) =
                   (float)((local_228 / (double)*(int *)(this + 0xb10)) *
                          ((double)*(float *)(param_6 + 0xac) + local_228));
              *(float *)(lVar31 + 0x68) = fVar14 / *(float *)(lVar40 + 0xc);
              uVar45 = *(undefined4 *)(lVar40 + 0x10);
            }
            iVar22 = *(int *)(param_6 + 0x70);
            iVar27 = *(int *)(param_6 + 0x98);
            *(undefined4 *)(lVar31 + 0x6c) = uVar45;
            uVar28 = iVar22 << 0x10 | iVar27 << 0x16;
            cVar35 = *(char *)(lVar40 + 8);
            *(uint *)(lVar31 + 0x54) = uVar28;
            if (cVar35 != '\0') {
              *(uint *)(lVar31 + 0x54) = uVar28 | 0x100000;
            }
            *(uint *)(param_6 + 0x128) = uVar38;
            param_6 = *(long *)(param_6 + 0x108);
            uVar38 = uVar38 + 1;
            goto LAB_001158e5;
          }
          if (*(int *)(lVar40 + 0x30) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        *(undefined4 *)(param_6 + 0x128) = 0xffffffff;
        param_6 = *(long *)(param_6 + 0x108);
        _err_print_error("canvas_render_items",
                         "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",0x219,
                         "Condition \"!clight\" is true. Continuing.",0);
      }
LAB_001158e5:
    } while (param_6 != 0);
    this[0x200b88] = (RendererCanvasRenderRD)(uVar38 != 0);
    if (param_5 == (byte *)0x0) {
      local_238 = _LC146;
      local_2a8 = uVar38;
    }
    else {
LAB_0011590d:
      fVar53 = _LC146;
      local_238 = _LC146;
      pbVar34 = param_5;
      local_2a8 = uVar38;
      do {
        if (*(uint *)(this + 0xb38) == local_2a8) {
          pbVar34[0x128] = 0xff;
          pbVar34[0x129] = 0xff;
          pbVar34[0x12a] = 0xff;
          pbVar34[299] = 0xff;
          pbVar34 = *(byte **)(pbVar34 + 0x108);
        }
        else {
          uVar33 = *(ulong *)(pbVar34 + 0x118);
          if ((uVar33 != 0) && ((uint)uVar33 < *(uint *)(this + 0x76c))) {
            plVar1 = (long *)(*(long *)(*(long *)(this + 0x758) +
                                       ((uVar33 & 0xffffffff) / (ulong)*(uint *)(this + 0x768)) * 8)
                             + ((uVar33 & 0xffffffff) % (ulong)*(uint *)(this + 0x768)) * 0x38);
            if ((int)plVar1[6] == (int)(uVar33 >> 0x20)) {
              local_188._8_8_ = 0x3f80000000000000;
              local_188._0_8_ = 0x3f800000;
              uVar46 = local_178._8_8_;
              auVar51._8_8_ = 0;
              auVar51._0_8_ = local_178._8_8_;
              local_178 = auVar51 << 0x40;
              if ((*(char *)(RenderingServerGlobals::canvas + 0x318) == '\0') ||
                 ((*pbVar34 & 4) == 0)) {
                local_188 = *(undefined1 (*) [16])(pbVar34 + 0x14);
                local_178._0_8_ = *(undefined8 *)(pbVar34 + 0x24);
                local_178 = CONCAT88(uVar46,local_178._0_8_);
              }
              else {
                lVar40 = Engine::get_singleton();
                TransformInterpolator::interpolate_transform_2d
                          ((Transform2D *)(pbVar34 + 0x2c),(Transform2D *)(pbVar34 + 0x14),
                           (Transform2D *)local_188,(float)*(double *)(lVar40 + 0x60));
              }
              lVar31 = (ulong)local_2a8 * 0x80;
              puVar39 = (undefined8 *)(*(long *)(this + 0xad8) + lVar31);
              puVar39[0xc] = CONCAT44((float)(param_7[1] >> 0x20) * local_178._4_4_ +
                                      (float)(*param_7 >> 0x20) * local_178._0_4_ +
                                      (float)(param_7[2] >> 0x20),
                                      (float)param_7[1] * local_178._4_4_ +
                                      (float)*param_7 * local_178._0_4_ + (float)param_7[2]);
              Transform2D::affine_inverse();
              *(undefined4 *)(puVar39 + 1) = 0;
              *puVar39 = CONCAT44(SUB164(_local_158,8),SUB164(_local_158,0));
              *(undefined4 *)((long)puVar39 + 0xc) = (undefined4)local_148;
              *(undefined4 *)(puVar39 + 2) = local_158._4_4_;
              *(undefined4 *)(puVar39 + 3) = 0;
              *(undefined4 *)((long)puVar39 + 0x14) = uStack_14c;
              *(undefined4 *)((long)puVar39 + 0x1c) = local_148._4_4_;
              lVar40 = *(long *)(this + 0xad8);
              Transform2D::affine_inverse();
              lVar40 = lVar40 + lVar31;
              *(undefined4 *)(lVar40 + 0x28) = 0;
              *(ulong *)(lVar40 + 0x20) = CONCAT44(SUB164(_local_158,8),SUB164(_local_158,0));
              *(undefined4 *)(lVar40 + 0x2c) = (undefined4)local_148;
              *(undefined4 *)(lVar40 + 0x30) = local_158._4_4_;
              *(undefined4 *)(lVar40 + 0x38) = 0;
              *(undefined4 *)(lVar40 + 0x34) = uStack_14c;
              *(undefined4 *)(lVar40 + 0x3c) = local_148._4_4_;
              fVar56 = *(float *)(pbVar34 + 0x44);
              fVar43 = (float)Vector2::length();
              fVar44 = (float)Vector2::length();
              lVar29 = 0;
              lVar40 = *(long *)(this + 0xad8) + lVar31;
              *(float *)(*(long *)(this + 0xad8) + 0x5c + lVar31) =
                   (fVar44 + fVar43) * fVar56 * fVar53;
              do {
                iVar27 = (int)lVar29;
                iVar22 = (int)((double)*(float *)(pbVar34 + lVar29 * 4 + 0x9c) * _LC55);
                if (0xff < iVar22) {
                  iVar22 = 0xff;
                }
                uVar19 = (undefined1)iVar22;
                if (iVar22 < 0) {
                  uVar19 = 0;
                }
                *(undefined1 *)((long)iVar27 + 0x50 + lVar40) = uVar19;
                lVar2 = lVar29 * 4;
                lVar29 = lVar29 + 1;
                lVar40 = *(long *)(this + 0xad8) + lVar31;
                *(undefined4 *)(lVar40 + 0x40 + (long)iVar27 * 4) =
                     *(undefined4 *)(pbVar34 + lVar2 + 4);
              } while (lVar29 != 4);
              lVar29 = *(long *)(this + 0xb08);
              *(float *)(lVar40 + 0x4c) = *(float *)(lVar40 + 0x4c) * *(float *)(pbVar34 + 0x48);
              if (lVar29 == 0) {
                uVar45 = 0;
                *(float *)(lVar40 + 0x58) = fVar14;
                *(float *)(lVar40 + 0x68) = fVar14;
              }
              else {
                *(float *)(lVar40 + 0x58) =
                     (float)((local_228 / (double)*(int *)(this + 0xb10)) *
                            ((double)*(float *)(pbVar34 + 0xac) + local_228));
                *(float *)(lVar40 + 0x68) = fVar14 / *(float *)((long)plVar1 + 0xc);
                uVar45 = (undefined4)plVar1[2];
              }
              iVar22 = *(int *)(pbVar34 + 0x70);
              iVar27 = *(int *)(pbVar34 + 0x98);
              *(undefined4 *)(lVar40 + 0x6c) = uVar45;
              uVar23 = iVar22 << 0x10 | iVar27 << 0x16;
              lVar29 = plVar1[1];
              *(uint *)(lVar40 + 0x54) = uVar23;
              if ((char)lVar29 != '\0') {
                *(uint *)(lVar40 + 0x54) = uVar23 | 0x100000;
              }
              if (*plVar1 == 0) {
                *(undefined1 (*) [16])(lVar40 + 0x70) = (undefined1  [16])0x0;
              }
              else {
                lVar29 = RendererRD::TextureStorage::get_singleton();
                lVar40 = *(long *)(lVar29 + 0x168);
                if ((lVar40 != 0) && (*(int *)(lVar29 + 0x18c) != 0)) {
                  uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(lVar29 + 0x188) * 4));
                  lVar2 = *(long *)(hash_table_size_primes_inv +
                                   (ulong)*(uint *)(lVar29 + 0x188) * 8);
                  uVar33 = *plVar1 * 0x3ffff - 1;
                  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
                  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
                  uVar28 = (uint)(uVar33 >> 0x16) ^ (uint)uVar33;
                  uVar23 = 1;
                  if (uVar28 != 0) {
                    uVar23 = uVar28;
                  }
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar23 * lVar2;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar41;
                  lVar32 = SUB168(auVar4 * auVar8,8);
                  uVar28 = *(uint *)(*(long *)(lVar29 + 0x170) + lVar32 * 4);
                  uVar30 = SUB164(auVar4 * auVar8,8);
                  if (uVar28 != 0) {
                    uVar36 = 0;
                    do {
                      if ((uVar23 == uVar28) &&
                         (*plVar1 == *(long *)(*(long *)(lVar40 + lVar32 * 8) + 0x10))) {
                        lVar40 = *(long *)(lVar40 + (ulong)uVar30 * 8);
                        uVar46 = *(undefined8 *)(lVar40 + 0x20);
                        uVar47 = *(undefined8 *)(lVar40 + 0x28);
                        goto LAB_0011668a;
                      }
                      uVar36 = uVar36 + 1;
                      auVar5._8_8_ = 0;
                      auVar5._0_8_ = (ulong)(uVar30 + 1) * lVar2;
                      auVar9._8_8_ = 0;
                      auVar9._0_8_ = uVar41;
                      lVar32 = SUB168(auVar5 * auVar9,8);
                      uVar28 = *(uint *)(*(long *)(lVar29 + 0x170) + lVar32 * 4);
                      uVar30 = SUB164(auVar5 * auVar9,8);
                    } while ((uVar28 != 0) &&
                            (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar28 * lVar2,
                            auVar10._8_8_ = 0, auVar10._0_8_ = uVar41, auVar7._8_8_ = 0,
                            auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                             (ulong)*(uint *)(lVar29 + 0x188) * 4) +
                                                   uVar30) - SUB164(auVar6 * auVar10,8)) * lVar2,
                            auVar11._8_8_ = 0, auVar11._0_8_ = uVar41,
                            uVar36 <= SUB164(auVar7 * auVar11,8)));
                  }
                }
                uVar46 = 0;
                uVar47 = 0;
LAB_0011668a:
                puVar39 = (undefined8 *)(*(long *)(this + 0xad8) + 0x70 + lVar31);
                *puVar39 = uVar46;
                puVar39[1] = uVar47;
              }
              *(uint *)(pbVar34 + 0x128) = local_2a8;
              local_2a8 = local_2a8 + 1;
              pbVar34 = *(byte **)(pbVar34 + 0x108);
              goto LAB_00115cac;
            }
            if ((int)plVar1[6] + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          pbVar34[0x128] = 0xff;
          pbVar34[0x129] = 0xff;
          pbVar34[0x12a] = 0xff;
          pbVar34[299] = 0xff;
          pbVar34 = *(byte **)(pbVar34 + 0x108);
          _err_print_error("canvas_render_items",
                           "servers/rendering/renderer_rd/renderer_canvas_render_rd.cpp",600,
                           "Condition \"!clight\" is true. Continuing.",0);
        }
LAB_00115cac:
      } while (pbVar34 != (byte *)0x0);
    }
    if (local_2a8 != 0) {
      uVar46 = RenderingDevice::get_singleton();
      RenderingDevice::buffer_update
                (uVar46,*(undefined8 *)(this + 0xae0),0,local_2a8 << 7,*(undefined8 *)(this + 0xad8)
                );
    }
  }
  local_208 = (Vector3 *)local_188;
  local_298 = (Transform2D *)local_158;
  bVar20 = (**(code **)(*plVar24 + 0x278))(plVar24,param_2);
  uVar46 = (**(code **)(*plVar24 + 0x210))(plVar24,param_2);
  uVar33 = CONCAT44(_LC51._4_4_,(float)_LC51);
  auVar50._8_8_ = 0;
  auVar50._0_8_ = _LC351;
  local_164 = 0;
  iVar22 = (int)((ulong)uVar46 >> 0x20);
  auVar54._4_4_ = (float)iVar22;
  auVar54._0_4_ = (float)(int)uVar46;
  local_15c = 0;
  auVar54._8_8_ = uVar33;
  auVar51 = divps(auVar50,auVar54);
  local_188 = ZEXT416(_LC352);
  local_178 = local_188;
  local_168 = fVar14;
  Transform3D::translate_local
            ((float)((uint)((float)(int)uVar46 * local_238) ^ local_248._0_4_),
             (float)((uint)((float)iVar22 * local_238) ^ local_248._0_4_),0.0);
  local_158._8_4_ = fVar14;
  local_158._0_8_ = auVar51._0_8_;
  Transform3D::scale(local_208);
  uVar47 = _LC150;
  local_10c = 0;
  local_fc = 0;
  local_e8 = local_164;
  local_118 = CONCAT44(local_188._12_4_,local_188._0_4_);
  local_148 = param_7[1];
  local_110 = local_178._8_4_;
  local_108 = local_188._4_4_;
  local_ec = 0;
  local_104 = local_178._0_4_;
  stack0xfffffffffffffeb0 = 0;
  local_158._0_8_ = *param_7;
  local_100 = local_178._12_4_;
  local_f8 = local_188._8_4_;
  local_f4 = local_178._4_4_;
  local_f0 = local_168;
  local_e0 = local_15c;
  local_140 = (undefined1  [16])0x0;
  uVar46 = CONCAT44(_UNK_0012db04,_LC352);
  local_128 = param_7[2];
  local_1a8 = *param_7;
  uStack_1a0 = param_7[1];
  local_198 = param_7[2];
  local_120 = _LC150;
  local_130 = uVar46;
  local_dc = fVar14;
  Vector2::normalize();
  Vector2::normalize();
  local_198 = 0;
  local_d0 = 0;
  local_d8 = local_1a8;
  fVar53 = *param_4;
  local_c8 = uStack_1a0;
  fVar56 = param_4[1];
  local_a0 = uVar47;
  fVar43 = param_4[2];
  fVar44 = param_4[3];
  local_c0 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_b0 = uVar46;
  if (bVar20 == 0) goto LAB_00116030;
  if (_LC69 <= fVar43) {
    fVar43 = powf((float)(((double)fVar43 + __LC71) * __LC72),_LC73);
    if (_LC69 <= fVar56) goto LAB_00116e21;
LAB_00116017:
    fVar56 = fVar56 * __LC70;
  }
  else {
    fVar43 = fVar43 * __LC70;
    if (fVar56 < _LC69) goto LAB_00116017;
LAB_00116e21:
    fVar56 = powf((float)(((double)fVar56 + __LC71) * __LC72),_LC73);
  }
  if (_LC69 <= fVar53) {
    fVar53 = powf((float)(((double)fVar53 + __LC71) * __LC72),_LC73);
  }
  else {
    fVar53 = fVar53 * __LC70;
  }
LAB_00116030:
  uStack_90 = CONCAT44(fVar44,fVar43);
  local_98 = CONCAT44(fVar56,fVar53);
  local_1d8._0_8_ = (**(code **)(*plVar24 + 0x210))(plVar24,param_2);
  uVar46 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_1d8);
  auVar55._8_8_ = uVar33;
  auVar55._0_8_ = uVar46;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar33;
  auVar51 = divps(auVar48,auVar55);
  local_7c = param_10 & 0xff;
  local_88 = auVar51._0_8_;
  local_80 = (float)*(double *)(this + 0xb40);
  local_58 = uVar38;
  uVar47 = Transform2D::get_scale();
  fVar53 = (float)uVar47;
  fVar56 = (float)((ulong)uVar47 >> 0x20);
  local_68 = (float)uVar46 / fVar53;
  fStack_64 = (float)((ulong)uVar46 >> 0x20) / fVar56;
  fStack_60 = fVar14 / local_68;
  fStack_5c = fVar14 / fStack_64;
  local_1d8 = (**(code **)(*plVar24 + 0x2b0))(plVar24,param_2);
  auVar51 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_1d8);
  auVar52._0_8_ = auVar51._8_8_;
  local_50 = (uint)bVar20;
  auVar49._12_4_ = (uint)(auVar51._4_4_ / fVar56) ^ local_248._0_4_;
  auVar49._8_4_ = (uint)(auVar51._0_4_ / fVar53) ^ local_248._0_4_;
  auVar49._0_8_ = uVar33;
  auVar52._8_4_ = auVar51._8_4_;
  auVar52._12_4_ = auVar51._12_4_;
  auVar12._8_8_ = uVar47;
  auVar12._0_8_ = uVar47;
  auVar51 = divps(auVar52,auVar12);
  local_78 = divps(auVar49,auVar51);
  local_54 = (float)(local_228 / ((double)(fVar53 + fVar56) * __LC353));
  uVar46 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar46,*(undefined8 *)(this + 0xae8),0,0x110,local_298);
  local_1a8 = 0;
  uStack_1a0 = 0;
  *(undefined4 *)(this + 0x200bb8) = param_8;
  *(undefined4 *)(this + 0xaac) = 0;
  *(undefined4 *)(this + 0x200bbc) = param_9;
  if (param_3 != 0) {
    bVar16 = false;
    bVar15 = false;
    lVar40 = 0;
    uVar33 = 0;
    cVar35 = '\0';
    auVar13[0xf] = 0;
    auVar13._0_15_ = local_248._1_15_;
    local_248 = auVar13 << 8;
    bVar17 = false;
LAB_001162b0:
    lVar29 = param_3;
    puVar39 = *(undefined8 **)(lVar29 + 0x88);
    bVar37 = puVar39 != (undefined8 *)0x0 && lVar40 == 0;
    if (bVar37) {
      if (*(char *)(puVar39 + 4) == '\0') {
        local_1a8 = *puVar39;
        uStack_1a0 = puVar39[1];
      }
      else {
        local_1a8 = 0;
        uStack_1a0 = 0;
      }
    }
    lVar31 = *(long *)(lVar29 + 0xd0);
    if (*(long *)(lVar29 + 0xd0) == 0) {
      lVar31 = lVar29;
    }
    uVar41 = *(ulong *)(lVar31 + 0x68);
    if ((uVar41 == 0) || (*(uint *)(lVar25 + 0x26c) <= (uint)uVar41)) {
LAB_001162f0:
      lVar31 = *(long *)(lVar29 + 0x70);
      cVar21 = '\0';
    }
    else {
      lVar31 = ((uVar41 & 0xffffffff) % (ulong)*(uint *)(lVar25 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar25 + 600) +
                        ((uVar41 & 0xffffffff) / (ulong)*(uint *)(lVar25 + 0x268)) * 8);
      if (*(int *)(lVar31 + 0xb8) != (int)(uVar41 >> 0x20)) {
        if (*(int *)(lVar31 + 0xb8) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_001162f0;
      }
      if (((*(int *)(lVar31 + 0x18) != 0) || (lVar31 = *(long *)(lVar31 + 8), lVar31 == 0)) ||
         (*(long *)(*(CanvasShaderData **)(lVar31 + 0xa8) + 0xa8) == 0)) goto LAB_001162f0;
      cVar21 = CanvasShaderData::is_valid(*(CanvasShaderData **)(lVar31 + 0xa8));
      if (cVar21 == '\0') goto LAB_001162f0;
      lVar31 = *(long *)(lVar31 + 0xa8);
      bVar42 = (bool)(lVar40 == 0 & *(byte *)(lVar31 + 0x1f8));
      cVar21 = bVar42;
      if (bVar42 != false) {
        if (bVar17) {
          cVar21 = '\0';
          if (local_248[0] == '\0') {
            cVar21 = *(char *)(lVar31 + 0x1f9);
          }
        }
        else {
          cVar21 = *(char *)(lVar31 + 0x1f9);
          local_1a8 = 0;
          uStack_1a0 = 0;
          bVar37 = bVar42;
        }
      }
      if (*(char *)(lVar31 + 0x1fa) != '\0') {
        *param_11 = 1;
      }
      if (*(char *)(lVar31 + 0x1fb) != '\0') {
        cVar35 = *(char *)(lVar31 + 0x1fb);
      }
      lVar31 = *(long *)(lVar29 + 0x70);
    }
    if ((lVar31 != 0) && (lVar31 = *(long *)(lVar29 + 0x110), lVar31 != 0)) {
      do {
        while ((*(int *)(lVar31 + 0x10) == 4 && (*(long *)(lVar31 + 0x48) != 0))) {
          (**(code **)(*plVar26 + 0xf0))(plVar26,*(undefined8 *)(lVar31 + 0x48));
          pcVar3 = *(code **)(*plVar26 + 0xf8);
          Transform2D::operator*(local_298,local_1c8);
          (*pcVar3)(plVar26,*(undefined8 *)(lVar31 + 0x48),local_298);
          lVar31 = *(long *)(lVar31 + 8);
          bVar15 = true;
          if (lVar31 == 0) goto LAB_001169a8;
        }
        lVar31 = *(long *)(lVar31 + 8);
      } while (lVar31 != 0);
LAB_001169a8:
      uVar33 = (ulong)(int)uVar33;
    }
    if (*(long *)(lVar29 + 0xd8) == 0) {
LAB_001167b0:
      if (lVar40 == 0) {
        if (*(int **)(lVar29 + 0x40) == (int *)0x0) goto LAB_0011632e;
        bVar42 = **(int **)(lVar29 + 0x40) != 2;
        *(undefined1 *)(lVar29 + 0x48) = 0;
joined_r0x001167d7:
        if (bVar37 == false) goto LAB_001167dd;
        if (bVar15) {
          (**(code **)(*plVar26 + 0x100))(plVar26);
        }
LAB_0011634c:
        _render_batch_items(this,param_2,bVar20,uVar33 & 0xffffffff,local_1c8,param_5,param_11,0,
                            param_12);
        _local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_1a8);
        RendererRD::TextureStorage::render_target_copy_to_back_buffer(plVar24,param_2,local_298);
        bVar17 = true;
        bVar15 = false;
        local_248[0] = cVar21;
        uVar33 = 0;
        goto LAB_001163c5;
      }
LAB_00116322:
      if (lVar29 != lVar40) {
LAB_0011632e:
        bVar42 = false;
        *(undefined1 *)(lVar29 + 0x48) = 0;
        goto joined_r0x001167d7;
      }
      if (bVar15) {
        (**(code **)(*plVar26 + 0x100))(plVar26);
      }
LAB_001169cc:
      _render_batch_items(this,param_2,bVar20,uVar33 & 0xffffffff,local_1c8,param_5,param_11,1,
                          param_12);
      if (*(char *)(*(long *)(lVar29 + 0x40) + 0xc) != '\0') {
        _local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)(lVar29 + 0x100));
        RendererRD::TextureStorage::render_target_gen_back_buffer_mipmaps(plVar24,param_2,local_298)
        ;
      }
      *(undefined1 *)(lVar29 + 0x48) = 1;
      if (bVar37 != false) {
        bVar16 = false;
        bVar42 = false;
        lVar40 = 0;
        uVar33 = 0;
        goto LAB_0011634c;
      }
      bVar16 = false;
      bVar15 = false;
      if (cVar21 != '\0') {
        bVar42 = false;
        lVar40 = 0;
        uVar33 = 0;
        goto LAB_001167e8;
      }
      uVar41 = 1;
      lVar40 = 0;
      uVar33 = 0;
LAB_001166a4:
      *(long *)(this + uVar33 * 8 + 0xb48) = lVar29;
      if ((*(long *)(lVar29 + 0x80) == 0) || ((int)uVar41 == 0x3ffff)) goto LAB_001166c5;
      uVar33 = (ulong)(int)uVar41;
      param_3 = *(long *)(lVar29 + 0x80);
      goto LAB_001162b0;
    }
    if (lVar40 != 0) {
      *(undefined8 *)(lVar29 + 0xd8) = 0;
      goto LAB_00116322;
    }
    if (bVar15) {
      (**(code **)(*plVar26 + 0x100))(plVar26);
    }
    _render_batch_items(this,param_2,bVar20,uVar33 & 0xffffffff,local_1c8,param_5,param_11,0,
                        param_12);
    lVar40 = *(long *)(lVar29 + 0xd8);
    if (**(int **)(lVar40 + 0x40) == 3) {
      if (!bVar16) {
        uVar33 = 0;
        local_188 = ZEXT816(0);
        _local_158 = (undefined1  [16])0x0;
        RendererRD::TextureStorage::render_target_clear_back_buffer
                  (plVar24,param_2,local_208,local_298);
        bVar16 = true;
        lVar40 = *(long *)(lVar29 + 0xd8);
        goto LAB_0011679f;
      }
    }
    else {
      _local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)(lVar40 + 0x100));
      RendererRD::TextureStorage::render_target_copy_to_back_buffer(plVar24,param_2,local_298,0);
      lVar40 = *(long *)(lVar29 + 0xd8);
      if (**(int **)(lVar40 + 0x40) == 2) {
        *(undefined1 *)(lVar40 + 0x48) = 0;
        uVar33 = 1;
        *(long *)(this + 0xb48) = lVar40;
        lVar40 = *(long *)(lVar29 + 0xd8);
LAB_0011679f:
        *(undefined8 *)(lVar29 + 0xd8) = 0;
        bVar15 = false;
        bVar37 = false;
        goto LAB_001167b0;
      }
    }
    *(undefined8 *)(lVar29 + 0xd8) = 0;
    if (lVar29 == lVar40) {
      bVar37 = false;
      uVar33 = 0;
      goto LAB_001169cc;
    }
    *(undefined1 *)(lVar29 + 0x48) = 0;
    bVar15 = false;
    bVar42 = false;
    uVar33 = 0;
LAB_001167dd:
    if (cVar21 != '\0') {
LAB_001167e8:
      _local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_1a8);
      RendererRD::TextureStorage::render_target_gen_back_buffer_mipmaps(plVar24,param_2,local_298);
      local_248[0] = 1;
    }
LAB_001163c5:
    if (!bVar42) {
      uVar41 = (ulong)((int)uVar33 + 1);
      goto LAB_001166a4;
    }
    uVar41 = uVar33 & 0xffffffff;
    param_3 = *(long *)(lVar29 + 0x80);
    if (*(long *)(lVar29 + 0x80) != 0) goto LAB_001162b0;
LAB_001166c5:
    if (bVar15) {
      (**(code **)(*plVar26 + 0x100))(plVar26);
    }
    _render_batch_items(this,param_2,bVar20,uVar41,local_1c8,param_5,param_11,lVar40 != 0,param_12);
    if (*(long *)(lVar29 + 0x80) != 0) {
      bVar15 = false;
      uVar33 = 0;
      param_3 = *(long *)(lVar29 + 0x80);
      goto LAB_001162b0;
    }
    if (cVar35 != '\0') {
      RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
    }
  }
  if ((*(long *)(this + 0xa38) != 0) && (*(int *)(this + 0xa5c) != 0)) {
    lVar25 = 0;
    uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa58) * 4);
    if (uVar23 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xa40) + lVar25) != 0) {
          *(int *)(*(long *)(this + 0xa40) + lVar25) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0xa38) + lVar25 * 2),false);
          *(undefined8 *)(*(long *)(this + 0xa38) + lVar25 * 2) = 0;
        }
        lVar25 = lVar25 + 4;
      } while (lVar25 != (ulong)uVar23 << 2);
    }
    *(undefined4 *)(this + 0xa5c) = 0;
    *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  }
  *(undefined4 *)(this + 0xaa4) = 0;
  *(uint *)(this + 0xaa0) = (*(int *)(this + 0xaa0) + 1U) % 3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* WorkerThreadPool::BaseTemplateUserdata::callback_indexed(unsigned int) */

void WorkerThreadPool::BaseTemplateUserdata::callback_indexed(uint param_1)

{
  return;
}



/* RendererCanvasRenderRD::CanvasMaterialData::set_render_priority(int) */

void RendererCanvasRenderRD::CanvasMaterialData::set_render_priority(int param_1)

{
  return;
}



/* RendererCanvasRenderRD::CanvasMaterialData::set_next_pass(RID) */

void RendererCanvasRenderRD::CanvasMaterialData::set_next_pass(void)

{
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



/* LocalVector<float, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<float,unsigned_int,false,false>::~LocalVector
          (LocalVector<float,unsigned_int,false,false> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 0;
    }
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* LocalVector<RendererCanvasRenderRD::OccluderPolygon*, unsigned int, false, false>::~LocalVector()
    */

void __thiscall
LocalVector<RendererCanvasRenderRD::OccluderPolygon*,unsigned_int,false,false>::~LocalVector
          (LocalVector<RendererCanvasRenderRD::OccluderPolygon*,unsigned_int,false,false> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 0;
    }
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* LocalVector<unsigned int, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<unsigned_int,unsigned_int,false,false>::~LocalVector
          (LocalVector<unsigned_int,unsigned_int,false,false> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 0;
    }
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* WorkerThreadPool::TaskUserData<RendererCanvasRenderRD::CanvasShaderData, void
   (RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),
   RendererCanvasRenderRD::PipelineKey>::~TaskUserData() */

void __thiscall
WorkerThreadPool::
TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
::~TaskUserData(TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
                *this)

{
  return;
}



/* WorkerThreadPool::TaskUserData<RendererCanvasRenderRD::CanvasShaderData, void
   (RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),
   RendererCanvasRenderRD::PipelineKey>::callback() */

void __thiscall
WorkerThreadPool::
TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
::callback(TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
           *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(this + 0x10);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
  (*pcVar1)();
  return;
}



/* WorkerThreadPool::TaskUserData<RendererCanvasRenderRD::CanvasShaderData, void
   (RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),
   RendererCanvasRenderRD::PipelineKey>::~TaskUserData() */

void __thiscall
WorkerThreadPool::
TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
::~TaskUserData(TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
                *this)

{
  operator_delete(this,0x48);
  return;
}



/* CanvasShaderRD::~CanvasShaderRD() */

void __thiscall CanvasShaderRD::~CanvasShaderRD(CanvasShaderRD *this)

{
  *(undefined ***)this = &PTR__CanvasShaderRD_00124160;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CanvasShaderRD::~CanvasShaderRD() */

void __thiscall CanvasShaderRD::~CanvasShaderRD(CanvasShaderRD *this)

{
  *(undefined ***)this = &PTR__CanvasShaderRD_00124160;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CanvasOcclusionShaderRD::~CanvasOcclusionShaderRD() */

void __thiscall CanvasOcclusionShaderRD::~CanvasOcclusionShaderRD(CanvasOcclusionShaderRD *this)

{
  *(undefined ***)this = &PTR__CanvasOcclusionShaderRD_00124180;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CanvasOcclusionShaderRD::~CanvasOcclusionShaderRD() */

void __thiscall CanvasOcclusionShaderRD::~CanvasOcclusionShaderRD(CanvasOcclusionShaderRD *this)

{
  *(undefined ***)this = &PTR__CanvasOcclusionShaderRD_00124180;
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



/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write(void)

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



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write(void)

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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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

void FUN_00119870(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* RendererCanvasRenderRD::_record_item_commands(RendererCanvasRender::Item const*,
   RendererCanvasRenderRD::RenderTarget, Transform2D const&, RendererCanvasRender::Item*&,
   RendererCanvasRender::Light*, unsigned int&, bool&, bool&, RendererCanvasRenderRD::Batch*&)
   [clone .cold] */

void RendererCanvasRenderRD::_record_item_commands
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



/* RendererCanvasRenderRD::light_update_directional_shadow(RID, int, Transform2D const&, int, float,
   Rect2 const&, RendererCanvasRender::LightOccluderInstance*) [clone .cold] */

void RendererCanvasRenderRD::light_update_directional_shadow(undefined8 param_1)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_1);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasRenderRD::light_update_shadow(RID, int, Transform2D const&, int, float, float,
   RendererCanvasRender::LightOccluderInstance*, Rect2 const&) [clone .cold] */

void RendererCanvasRenderRD::light_update_shadow(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererCanvasRenderRD::_render_batch(long, RendererCanvasRenderRD::CanvasShaderData*, long,
   RendererCanvasRender::Light*, RendererCanvasRenderRD::Batch const*, RenderingMethod::RenderInfo*)
   [clone .cold] */

void RendererCanvasRenderRD::_render_batch
               (long param_1,CanvasShaderData *param_2,long param_3,Light *param_4,Batch *param_5,
               RenderInfo *param_6)

{
  code *pcVar1;
  long unaff_R13;
  
  _err_print_index_error
            ("mesh_get_surface","./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1a7,
             unaff_R13,(long)param_5,"p_surface_index","mesh->surface_count","",false,false);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
        if (pvVar3 == (void *)0x0) goto LAB_00119a8c;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xd0),false);
  }
LAB_00119a8c:
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
        if (pvVar3 == (void *)0x0) goto LAB_00119b4c;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_00119b4c:
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
        if (pvVar3 == (void *)0x0) goto LAB_00119c03;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_00119c03:
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
        if (pvVar3 == (void *)0x0) goto LAB_00119cae;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_00119cae:
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



/* RendererCanvasRenderRD::_create_shader_funcs() */

CanvasShaderData * RendererCanvasRenderRD::_create_shader_funcs(void)

{
  CanvasShaderData *this;
  
  this = (CanvasShaderData *)operator_new(0x200,"");
  CanvasShaderData::CanvasShaderData(this);
  return this;
}



/* RendererCanvasRenderRD::_create_material_funcs(RendererRD::MaterialStorage::ShaderData*) */

void RendererCanvasRenderRD::_create_material_funcs(ShaderData *param_1)

{
  _create_material_func(RendererCanvasRender::singleton,(CanvasShaderData *)param_1);
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
        if (pvVar5 == (void *)0x0) goto LAB_0011a003;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_0011a003:
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
        if (pvVar5 == (void *)0x0) goto LAB_0011a0e2;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_0011a0e2:
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
        if (pvVar5 == (void *)0x0) goto LAB_0011a1bd;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_0011a1bd:
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
/* HashMap<unsigned long, RendererCanvasRenderRD::PolygonBuffers, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   RendererCanvasRenderRD::PolygonBuffers> > >::operator[](unsigned long const&) */

undefined1  [16] __thiscall
HashMap<unsigned_long,RendererCanvasRenderRD::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RendererCanvasRenderRD::PolygonBuffers>>>
::operator[](HashMap<unsigned_long,RendererCanvasRenderRD::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RendererCanvasRenderRD::PolygonBuffers>>>
             *this,ulong *param_1)

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
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar56 = (ulong)*(uint *)(this + 0x28);
  uVar40 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar56 * 4);
  uVar48 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x11aafa;
    local_70 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      uVar40 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0011a5fb;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar56)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x11ab42;
        memset(local_70,0,uVar56);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar56 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_0011a9b3;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar53 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar55 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar48;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar53 + lVar45 * 4);
      uVar54 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar51 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar55 == uVar44) &&
             (uVar40 == *(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar54 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar48;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar53 + lVar45 * 4);
          uVar54 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar48, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar54 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar48, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_0011a9b3:
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar56 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar55 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar52;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar53 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar54 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar55 == uVar47) &&
             (*(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == uVar40)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined8 *)(pauVar42[1] + 8) = 0;
            *(undefined4 *)pauVar42[4] = 0;
            pauVar42[2] = (undefined1  [16])0x0;
            pauVar42[3] = (undefined1  [16])0x0;
            lStack_90 = lVar46;
            goto LAB_0011a997;
          }
          uVar54 = uVar54 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar52;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar53 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar52, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar56 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar52, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar54 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_0011a5fb:
  if ((float)uVar48 * __LC59 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011a997;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar56)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar56);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar56 = CONCAT44(0,uVar54);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar56;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar51 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar56;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar54 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar56;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar49 = uVar41;
            if (uVar38 < uVar50) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar51;
              uVar50 = uVar38;
            }
            uVar50 = uVar50 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar56;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
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
  uVar40 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x48,"");
  *(ulong *)pauVar42[1] = uVar40;
  *(undefined8 *)(pauVar42[1] + 8) = 0;
  *(undefined4 *)pauVar42[4] = 0;
  *pauVar42 = (undefined1  [16])0x0;
  pauVar42[2] = (undefined1  [16])0x0;
  pauVar42[3] = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar53 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = *param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar56 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar56 = 1;
  }
  uVar51 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar54 = (uint)uVar56;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar56 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
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
    uVar54 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar54 < uVar51) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar54;
    }
    uVar54 = (uint)uVar56;
    uVar51 = uVar51 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011a997:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
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
LAB_0011b298:
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
        goto LAB_0011b148;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011b14c:
      if (iVar46 != 0) {
LAB_0011b154:
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
              goto LAB_0011ad4c;
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
      goto LAB_0011ad83;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0011ad83;
    if (iVar46 != 0) goto LAB_0011b154;
LAB_0011ada9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011ad4c;
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
            goto LAB_0011ad4c;
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
      if (lVar43 == 0) goto LAB_0011b298;
LAB_0011b148:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011b14c;
    }
LAB_0011ad83:
    if ((float)uVar40 * __LC59 < (float)(iVar46 + 1)) goto LAB_0011ada9;
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
    if (lVar43 == 0) goto LAB_0011b25d;
LAB_0011b034:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0011b034;
LAB_0011b25d:
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
LAB_0011ad4c:
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
LAB_0011ba18:
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
        goto LAB_0011b8c8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011b8cc:
      if (iVar46 != 0) {
LAB_0011b8d4:
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
              goto LAB_0011b4bc;
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
      goto LAB_0011b4f3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0011b4f3;
    if (iVar46 != 0) goto LAB_0011b8d4;
LAB_0011b519:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011b4bc;
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
            goto LAB_0011b4bc;
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
      if (lVar43 == 0) goto LAB_0011ba18;
LAB_0011b8c8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011b8cc;
    }
LAB_0011b4f3:
    if ((float)uVar40 * __LC59 < (float)(iVar46 + 1)) goto LAB_0011b519;
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
    if (lVar43 == 0) goto LAB_0011b9dd;
LAB_0011b7b0:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0011b7b0;
LAB_0011b9dd:
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
LAB_0011b4bc:
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
LAB_0011c188:
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
        goto LAB_0011c038;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011c03c:
      if (iVar46 != 0) {
LAB_0011c044:
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
              goto LAB_0011bc3c;
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
      goto LAB_0011bc73;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0011bc73;
    if (iVar46 != 0) goto LAB_0011c044;
LAB_0011bc99:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011bc3c;
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
            goto LAB_0011bc3c;
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
      if (lVar43 == 0) goto LAB_0011c188;
LAB_0011c038:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011c03c;
    }
LAB_0011bc73:
    if ((float)uVar40 * __LC59 < (float)(iVar46 + 1)) goto LAB_0011bc99;
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
    if (lVar43 == 0) goto LAB_0011c14d;
LAB_0011bf27:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0011bf27;
LAB_0011c14d:
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
LAB_0011bc3c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<RendererCanvasRenderRD::TextureState, RendererCanvasRenderRD::TextureInfo,
   HashableHasher<RendererCanvasRenderRD::TextureState>,
   HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,
   DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,
   RendererCanvasRenderRD::TextureInfo> > >::getptr(RendererCanvasRenderRD::TextureState const&) */

long __thiscall
HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
::getptr(HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
         *this,TextureState *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    lVar3 = *(long *)param_1;
    iVar1 = *(int *)(param_1 + 8);
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    iVar14 = (int)((ulong)lVar3 >> 0x20);
    uVar13 = ((int)lVar3 * 0x16a88000 | (uint)((int)lVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar13 = (iVar14 * 0x16a88000 | (uint)(iVar14 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64 ^
             (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar17 = (ulong)uVar13;
    if (uVar13 == 0) {
      uVar17 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17 * lVar4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar18;
    lVar16 = SUB168(auVar5 * auVar9,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
    uVar15 = SUB164(auVar5 * auVar9,8);
    if (uVar13 != 0) {
      uVar19 = 0;
      do {
        if ((((uint)uVar17 == uVar13) &&
            (lVar16 = *(long *)(lVar2 + lVar16 * 8), *(long *)(lVar16 + 0x10) == lVar3)) &&
           (*(int *)(lVar16 + 0x18) == iVar1)) {
          return *(long *)(lVar2 + (ulong)uVar15 * 8) + 0x20;
        }
        uVar19 = uVar19 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar15 + 1) * lVar4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar18;
        lVar16 = SUB168(auVar6 * auVar10,8);
        uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
        uVar15 = SUB164(auVar6 * auVar10,8);
      } while ((uVar13 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar13 * lVar4, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar18, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x28) * 4) + uVar15) -
                                    SUB164(auVar7 * auVar11,8)) * lVar4, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar18, uVar19 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RendererCanvasRenderRD::TextureState, RendererCanvasRenderRD::TextureInfo,
   HashableHasher<RendererCanvasRenderRD::TextureState>,
   HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,
   DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,
   RendererCanvasRenderRD::TextureInfo> > >::insert(RendererCanvasRenderRD::TextureState const&,
   RendererCanvasRenderRD::TextureInfo const&, bool) */

TextureState *
HashMap<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo,HashableHasher<RendererCanvasRenderRD::TextureState>,HashMapComparatorDefault<RendererCanvasRenderRD::TextureState>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::TextureState,RendererCanvasRenderRD::TextureInfo>>>
::insert(TextureState *param_1,TextureInfo *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *__s;
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
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  ulong uVar43;
  undefined8 uVar44;
  void *__s_00;
  undefined1 (*pauVar45) [16];
  undefined8 *in_RCX;
  int iVar46;
  uint uVar47;
  undefined7 in_register_00000011;
  long *plVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  undefined8 uVar52;
  char in_R8B;
  uint uVar53;
  uint uVar54;
  ulong uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  void *local_e8;
  
  plVar48 = (long *)CONCAT71(in_register_00000011,param_3);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_e8 = *(void **)(param_2 + 8);
  if (local_e8 == (void *)0x0) {
    uVar51 = (ulong)uVar47;
    uVar43 = uVar51 * 4;
    uVar55 = uVar51 * 8;
    uVar44 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(param_2 + 0x10) = uVar44;
    local_e8 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(param_2 + 8) = local_e8;
    if (uVar47 != 0) {
      pvVar6 = *(void **)(param_2 + 0x10);
      if ((pvVar6 < (void *)((long)local_e8 + uVar55)) &&
         (local_e8 < (void *)((long)pvVar6 + uVar43))) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar6 + uVar43 * 4) = 0;
          *(undefined8 *)((long)local_e8 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar51 != uVar43);
        goto LAB_0011c467;
      }
      memset(pvVar6,0,uVar43);
      memset(local_e8,0,uVar55);
      iVar40 = *(int *)(param_2 + 0x2c);
      goto LAB_0011c46b;
    }
    iVar40 = *(int *)(param_2 + 0x2c);
    if (local_e8 != (void *)0x0) goto LAB_0011c46b;
  }
  else {
LAB_0011c467:
    iVar40 = *(int *)(param_2 + 0x2c);
LAB_0011c46b:
    if (iVar40 != 0) {
      uVar55 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      lVar5 = *plVar48;
      iVar41 = (int)plVar48[1];
      iVar46 = (int)((ulong)lVar5 >> 0x20);
      uVar38 = ((int)lVar5 * 0x16a88000 | (uint)((int)lVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar38 = (iVar46 * 0x16a88000 | (uint)(iVar46 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uVar38 << 0xd | uVar38 >> 0x13) * 5 + 0xe6546b64;
      uVar38 = (uVar38 << 0xd | uVar38 >> 0x13) * 5 + 0xe6546b64 ^
               (iVar41 * 0x16a88000 | (uint)(iVar41 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar38 = (uVar38 << 0xd | uVar38 >> 0x13) * 5 + 0xe6546b64;
      uVar43 = (ulong)uVar38;
      if (uVar38 == 0) {
        uVar43 = 1;
      }
      uVar54 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar43 * lVar4;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar55;
      lVar49 = SUB168(auVar7 * auVar19,8);
      uVar38 = *(uint *)(*(long *)(param_2 + 0x10) + lVar49 * 4);
      uVar42 = SUB164(auVar7 * auVar19,8);
      if (uVar38 != 0) {
        do {
          if ((((uint)uVar43 == uVar38) &&
              (lVar49 = *(long *)((long)local_e8 + lVar49 * 8), *(long *)(lVar49 + 0x10) == lVar5))
             && (*(int *)(lVar49 + 0x18) == iVar41)) {
            uVar44 = in_RCX[1];
            pauVar45 = *(undefined1 (**) [16])((long)local_e8 + (ulong)uVar42 * 8);
            *(undefined8 *)pauVar45[2] = *in_RCX;
            *(undefined8 *)(pauVar45[2] + 8) = uVar44;
            uVar44 = in_RCX[3];
            *(undefined8 *)pauVar45[3] = in_RCX[2];
            *(undefined8 *)(pauVar45[3] + 8) = uVar44;
            uVar44 = in_RCX[5];
            *(undefined8 *)pauVar45[4] = in_RCX[4];
            *(undefined8 *)(pauVar45[4] + 8) = uVar44;
            uVar44 = in_RCX[7];
            *(undefined8 *)pauVar45[5] = in_RCX[6];
            *(undefined8 *)(pauVar45[5] + 8) = uVar44;
            goto LAB_0011ca23;
          }
          uVar54 = uVar54 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar42 + 1) * lVar4;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar55;
          lVar49 = SUB168(auVar8 * auVar20,8);
          uVar38 = *(uint *)(*(long *)(param_2 + 0x10) + lVar49 * 4);
          uVar42 = SUB164(auVar8 * auVar20,8);
        } while ((uVar38 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar38 * lVar4, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar55, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar42) -
                            SUB164(auVar9 * auVar21,8)) * lVar4, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar55, uVar54 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar47 * __LC59 < (float)(iVar40 + 1)) {
    uVar47 = *(uint *)(param_2 + 0x28);
    if (uVar47 == 0x1c) {
      pauVar45 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011ca23;
    }
    uVar43 = (ulong)(uVar47 + 1);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar47 + 1 < 2) {
      uVar43 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar43 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar43;
    pvVar6 = *(void **)(param_2 + 0x10);
    uVar51 = (ulong)uVar47;
    uVar43 = uVar51 * 4;
    uVar44 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(param_2 + 0x10) = uVar44;
    uVar55 = uVar51 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar43))) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)__s + uVar43 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar51 != uVar43);
      }
      else {
        memset(__s,0,uVar43);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar38 != 0) {
      uVar43 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar6 + uVar43 * 4);
        if (uVar47 != 0) {
          uVar53 = 0;
          lVar4 = *(long *)(param_2 + 0x10);
          uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar42);
          lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar47 * lVar5;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar55;
          lVar49 = SUB168(auVar11 * auVar23,8);
          puVar1 = (uint *)(lVar4 + lVar49 * 4);
          iVar40 = SUB164(auVar11 * auVar23,8);
          uVar54 = *puVar1;
          uVar44 = *(undefined8 *)((long)local_e8 + uVar43 * 8);
          while (uVar54 != 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar54 * lVar5;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar55;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)((uVar42 + iVar40) - SUB164(auVar12 * auVar24,8)) * lVar5;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            uVar39 = SUB164(auVar13 * auVar25,8);
            uVar52 = uVar44;
            if (uVar39 < uVar53) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar52 = *puVar2;
              *puVar2 = uVar44;
              uVar47 = uVar54;
              uVar53 = uVar39;
            }
            uVar53 = uVar53 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar40 + 1) * lVar5;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            lVar49 = SUB168(auVar14 * auVar26,8);
            puVar1 = (uint *)(lVar4 + lVar49 * 4);
            iVar40 = SUB164(auVar14 * auVar26,8);
            uVar44 = uVar52;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar44;
          *puVar1 = uVar47;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar43 = uVar43 + 1;
      } while (uVar43 != uVar38);
      Memory::free_static(local_e8,false);
      Memory::free_static(pvVar6,false);
    }
  }
  uVar44 = *in_RCX;
  uVar52 = in_RCX[1];
  uVar31 = in_RCX[2];
  uVar32 = in_RCX[3];
  uVar33 = in_RCX[4];
  uVar34 = in_RCX[5];
  lVar4 = *plVar48;
  lVar5 = plVar48[1];
  uVar35 = in_RCX[6];
  uVar36 = in_RCX[7];
  pauVar45 = (undefined1 (*) [16])operator_new(0x60,"");
  *pauVar45 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar45[2] = uVar44;
  *(undefined8 *)(pauVar45[2] + 8) = uVar52;
  *(long *)pauVar45[1] = lVar4;
  *(long *)(pauVar45[1] + 8) = lVar5;
  *(undefined8 *)pauVar45[3] = uVar31;
  *(undefined8 *)(pauVar45[3] + 8) = uVar32;
  *(undefined8 *)pauVar45[4] = uVar33;
  *(undefined8 *)(pauVar45[4] + 8) = uVar34;
  *(undefined8 *)pauVar45[5] = uVar35;
  *(undefined8 *)(pauVar45[5] + 8) = uVar36;
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar45;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar45;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar45;
    *(undefined8 **)(*pauVar45 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar45;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar4 + 8) = pauVar45;
    *(long *)*pauVar45 = lVar4;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar45;
  }
  iVar40 = (int)*plVar48;
  iVar41 = (int)((ulong)*plVar48 >> 0x20);
  uVar47 = (iVar40 * 0x16a88000 | (uint)(iVar40 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  uVar47 = (iVar41 * 0x16a88000 | (uint)(iVar41 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar47 << 0xd | uVar47 >> 0x13) * 5 + 0xe6546b64;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar47 = (uVar47 << 0xd | uVar47 >> 0x13) * 5 + 0xe6546b64 ^
           ((int)plVar48[1] * 0x16a88000 | (uint)((int)plVar48[1] * -0x3361d2af) >> 0x11) *
           0x1b873593;
  uVar47 = (uVar47 << 0xd | uVar47 >> 0x13) * 5 + 0xe6546b64;
  uVar43 = (ulong)uVar47;
  if (uVar47 == 0) {
    uVar43 = 1;
  }
  uVar54 = 0;
  lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar42 = (uint)uVar43;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar55 = CONCAT44(0,uVar47);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar5;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar55;
  lVar50 = SUB168(auVar15 * auVar27,8);
  lVar49 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar4 + lVar50 * 4);
  iVar40 = SUB164(auVar15 * auVar27,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar45;
  while (uVar38 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar38 * lVar5;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar55;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar47 + iVar40) - SUB164(auVar16 * auVar28,8)) * lVar5;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar55;
    uVar42 = SUB164(auVar17 * auVar29,8);
    pauVar56 = pauVar37;
    if (uVar42 < uVar54) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar38;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar54 = uVar42;
    }
    uVar42 = (uint)uVar43;
    uVar54 = uVar54 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar40 + 1) * lVar5;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar55;
    lVar50 = SUB168(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar4 + lVar50 * 4);
    iVar40 = SUB164(auVar18 * auVar30,8);
    pauVar37 = pauVar56;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar49 + lVar50 * 8) = pauVar37;
  *puVar1 = uVar42;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011ca23:
  *(undefined1 (**) [16])param_1 = pauVar45;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, LocalVector<RID, unsigned int, false, true>, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID, LocalVector<RID,
   unsigned int, false, true> > > >::insert(RID const&, LocalVector<RID, unsigned int, false, true>
   const&, bool) */

void HashMap<RID,LocalVector<RID,unsigned_int,false,true>,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,LocalVector<RID,unsigned_int,false,true>>>>
     ::insert(RID *param_1,LocalVector *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  code *pcVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  undefined1 (*pauVar34) [16];
  void *pvVar35;
  long lVar36;
  long lVar37;
  uint *in_RCX;
  int iVar38;
  undefined7 in_register_00000011;
  long *plVar39;
  long lVar40;
  long lVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined8 uVar45;
  char in_R8B;
  uint uVar46;
  uint uVar47;
  undefined1 (*pauVar48) [16];
  void *local_a0;
  
  plVar39 = (long *)CONCAT71(in_register_00000011,param_3);
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_a0 = *(void **)(param_2 + 8);
  if (local_a0 == (void *)0x0) {
    uVar44 = (ulong)uVar42;
    uVar32 = uVar44 * 4;
    uVar43 = uVar44 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    local_a0 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = local_a0;
    if (uVar42 != 0) {
      pvVar35 = *(void **)(param_2 + 0x10);
      if ((pvVar35 < (void *)((long)local_a0 + uVar43)) &&
         (local_a0 < (void *)((long)pvVar35 + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar35 + uVar32 * 4) = 0;
          *(undefined8 *)((long)local_a0 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar44 != uVar32);
        goto LAB_0011ccbe;
      }
      memset(pvVar35,0,uVar32);
      memset(local_a0,0,uVar43);
      lVar36 = *plVar39;
      iVar38 = *(int *)(param_2 + 0x2c);
      goto LAB_0011cccf;
    }
    lVar36 = *plVar39;
    iVar38 = *(int *)(param_2 + 0x2c);
    if (local_a0 != (void *)0x0) goto LAB_0011cccf;
  }
  else {
LAB_0011ccbe:
    lVar36 = *plVar39;
    iVar38 = *(int *)(param_2 + 0x2c);
LAB_0011cccf:
    if (iVar38 != 0) {
      uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = lVar36 * 0x3ffff - 1;
      uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
      uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
      uVar32 = uVar32 >> 0x16 ^ uVar32;
      uVar43 = uVar32 & 0xffffffff;
      if ((int)uVar32 == 0) {
        uVar43 = 1;
      }
      uVar47 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar43 * lVar37;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar44;
      lVar40 = SUB168(auVar4 * auVar16,8);
      uVar3 = *(uint *)(*(long *)(param_2 + 0x10) + lVar40 * 4);
      uVar32 = (ulong)uVar3;
      uVar31 = SUB164(auVar4 * auVar16,8);
      if (uVar3 != 0) {
        do {
          if (((int)uVar32 == (int)uVar43) &&
             (*(long *)(*(long *)((long)local_a0 + lVar40 * 8) + 0x10) == lVar36)) {
            lVar36 = *(long *)((long)local_a0 + (ulong)uVar31 * 8);
            uVar42 = *in_RCX;
            uVar3 = *(uint *)(lVar36 + 0x18);
            if (uVar42 < uVar3) {
              *(uint *)(lVar36 + 0x18) = uVar42;
            }
            else if (uVar3 < uVar42) {
              if (*(uint *)(lVar36 + 0x1c) < uVar42) {
                *(uint *)(lVar36 + 0x1c) = uVar42;
                pvVar35 = *(void **)(lVar36 + 0x20);
                lVar37 = Memory::realloc_static(pvVar35,(ulong)uVar42 << 3,false);
                *(long *)(lVar36 + 0x20) = lVar37;
                if (lVar37 == 0) {
                  LocalVector<RendererCanvasRenderRD::Batch,unsigned_int,false,false>::resize
                            ((uint)pvVar35);
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                uVar3 = *(uint *)(lVar36 + 0x18);
                if (uVar3 < uVar42) goto LAB_0011d269;
              }
              else {
LAB_0011d269:
                memset((void *)(*(long *)(lVar36 + 0x20) + (ulong)uVar3 * 8),0,
                       (ulong)((uVar42 - 1) - uVar3) * 8 + 8);
              }
              *(uint *)(lVar36 + 0x18) = uVar42;
              uVar42 = *in_RCX;
            }
            if (uVar42 != 0) {
              lVar36 = *(long *)(lVar36 + 0x20);
              lVar37 = *(long *)(in_RCX + 2);
              lVar40 = 0;
              do {
                *(undefined8 *)(lVar36 + lVar40) = *(undefined8 *)(lVar37 + lVar40);
                lVar40 = lVar40 + 8;
              } while (lVar40 != (ulong)uVar42 << 3);
            }
            pauVar34 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar31 * 8);
            goto LAB_0011d20e;
          }
          uVar47 = uVar47 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar31 + 1) * lVar37;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar44;
          lVar40 = SUB168(auVar5 * auVar17,8);
          uVar3 = *(uint *)(*(long *)(param_2 + 0x10) + lVar40 * 4);
          uVar32 = (ulong)uVar3;
          uVar31 = SUB164(auVar5 * auVar17,8);
        } while ((uVar3 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar32 * lVar37, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar44, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar31) -
                                      SUB164(auVar6 * auVar18,8)) * lVar37, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar44, uVar47 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar42 * __LC59 < (float)(iVar38 + 1)) {
    uVar42 = *(uint *)(param_2 + 0x28);
    if (uVar42 == 0x1c) {
      pauVar34 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011d20e;
    }
    uVar32 = (ulong)(uVar42 + 1);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar42 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar42 + 1 < 2) {
      uVar32 = 2;
    }
    uVar42 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar35 = *(void **)(param_2 + 0x10);
    uVar44 = (ulong)uVar42;
    uVar32 = uVar44 * 4;
    uVar43 = uVar44 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar42 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar44 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar43);
      }
    }
    uVar32 = 0;
    if (uVar3 != 0) {
      do {
        uVar42 = *(uint *)((long)pvVar35 + uVar32 * 4);
        if (uVar42 != 0) {
          uVar46 = 0;
          lVar36 = *(long *)(param_2 + 0x10);
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar31);
          lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar42 * lVar37;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar40 = SUB168(auVar8 * auVar20,8);
          puVar1 = (uint *)(lVar36 + lVar40 * 4);
          iVar38 = SUB164(auVar8 * auVar20,8);
          uVar47 = *puVar1;
          uVar33 = *(undefined8 *)((long)local_a0 + uVar32 * 8);
          while (uVar47 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar47 * lVar37;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar31 + iVar38) - SUB164(auVar9 * auVar21,8)) * lVar37;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar30 = SUB164(auVar10 * auVar22,8);
            uVar45 = uVar33;
            if (uVar30 < uVar46) {
              *puVar1 = uVar42;
              puVar2 = (undefined8 *)((long)__s_00 + lVar40 * 8);
              uVar45 = *puVar2;
              *puVar2 = uVar33;
              uVar42 = uVar47;
              uVar46 = uVar30;
            }
            uVar46 = uVar46 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar38 + 1) * lVar37;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar40 = SUB168(auVar11 * auVar23,8);
            puVar1 = (uint *)(lVar36 + lVar40 * 4);
            iVar38 = SUB164(auVar11 * auVar23,8);
            uVar33 = uVar45;
            uVar47 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar40 * 8) = uVar33;
          *puVar1 = uVar42;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar3);
      Memory::free_static(local_a0,false);
      Memory::free_static(pvVar35,false);
    }
  }
  lVar36 = *plVar39;
  uVar42 = *in_RCX;
  if (uVar42 == 0) {
    pauVar34 = (undefined1 (*) [16])operator_new(0x28,"");
    *pauVar34 = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar34[1] + 8) = 0;
    *(long *)pauVar34[1] = lVar36;
    *(undefined8 *)pauVar34[2] = 0;
  }
  else {
    uVar32 = (ulong)uVar42 * 8;
    pvVar35 = (void *)Memory::realloc_static((void *)0x0,uVar32,false);
    if (pvVar35 == (void *)0x0) {
LAB_0011d520:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar28 = (code *)invalidInstructionException();
      (*pcVar28)();
    }
    memset(pvVar35,0,uVar32);
    uVar3 = *in_RCX;
    if (uVar3 != 0) {
      lVar37 = *(long *)(in_RCX + 2);
      lVar40 = 0;
      do {
        *(undefined8 *)((long)pvVar35 + lVar40) = *(undefined8 *)(lVar37 + lVar40);
        lVar40 = lVar40 + 8;
      } while (lVar40 != (ulong)uVar3 << 3);
    }
    uVar32 = (ulong)uVar42 << 3;
    pauVar34 = (undefined1 (*) [16])operator_new(0x28,"");
    *pauVar34 = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar34[1] + 8) = 0;
    *(long *)pauVar34[1] = lVar36;
    *(undefined8 *)pauVar34[2] = 0;
    *(uint *)(pauVar34[1] + 0xc) = uVar42;
    lVar36 = Memory::realloc_static((void *)0x0,uVar32,false);
    *(long *)pauVar34[2] = lVar36;
    if (lVar36 == 0) goto LAB_0011d520;
    uVar3 = *(uint *)(pauVar34[1] + 8);
    if (uVar3 < uVar42) {
      memset((void *)(lVar36 + (ulong)uVar3 * 8),0,(ulong)((uVar42 - 1) - uVar3) * 8 + 8);
    }
    *(uint *)(pauVar34[1] + 8) = uVar42;
    uVar43 = 0;
    do {
      *(undefined8 *)(lVar36 + uVar43) = *(undefined8 *)((long)pvVar35 + uVar43);
      uVar43 = uVar43 + 8;
    } while (uVar43 != uVar32);
    Memory::free_static(pvVar35,false);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar34;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar34;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar34;
    *(undefined8 **)(*pauVar34 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar34;
  }
  else {
    lVar36 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar36 + 8) = pauVar34;
    *(long *)*pauVar34 = lVar36;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar34;
  }
  lVar36 = *(long *)(param_2 + 0x10);
  uVar32 = *plVar39 * 0x3ffff - 1;
  uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
  uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
  uVar32 = uVar32 >> 0x16 ^ uVar32;
  uVar43 = uVar32 & 0xffffffff;
  if ((int)uVar32 == 0) {
    uVar43 = 1;
  }
  uVar47 = 0;
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar31 = (uint)uVar43;
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar42);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar43 * lVar37;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar32;
  lVar41 = SUB168(auVar12 * auVar24,8);
  lVar40 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar36 + lVar41 * 4);
  iVar38 = SUB164(auVar12 * auVar24,8);
  uVar3 = *puVar1;
  pauVar29 = pauVar34;
  while (uVar3 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar3 * lVar37;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar32;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((iVar38 + uVar42) - SUB164(auVar13 * auVar25,8)) * lVar37;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar32;
    uVar31 = SUB164(auVar14 * auVar26,8);
    pauVar48 = pauVar29;
    if (uVar31 < uVar47) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar3;
      puVar2 = (undefined8 *)(lVar40 + lVar41 * 8);
      pauVar48 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar29;
      uVar47 = uVar31;
    }
    uVar31 = (uint)uVar43;
    uVar47 = uVar47 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar38 + 1) * lVar37;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar32;
    lVar41 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar36 + lVar41 * 4);
    iVar38 = SUB164(auVar15 * auVar27,8);
    pauVar29 = pauVar48;
    uVar3 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar40 + lVar41 * 8) = pauVar29;
  *puVar1 = uVar31;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011d20e:
  *(undefined1 (**) [16])param_1 = pauVar34;
  return;
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
LAB_0011d848:
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
  if (uVar4 == 0xffffffffffffffff) goto LAB_0011d848;
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
LAB_0011d880:
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
LAB_0011d789:
    if (param_1 <= lVar3) goto LAB_0011d701;
  }
  else {
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0011d880;
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
      lVar3 = puVar5[1];
      goto LAB_0011d789;
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
LAB_0011d701:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011dab0) */
/* WARNING: Removing unreachable block (ram,0x0011dbe0) */
/* WARNING: Removing unreachable block (ram,0x0011dd59) */
/* WARNING: Removing unreachable block (ram,0x0011dbec) */
/* WARNING: Removing unreachable block (ram,0x0011dbf6) */
/* WARNING: Removing unreachable block (ram,0x0011dd3b) */
/* WARNING: Removing unreachable block (ram,0x0011dc02) */
/* WARNING: Removing unreachable block (ram,0x0011dc0c) */
/* WARNING: Removing unreachable block (ram,0x0011dd1d) */
/* WARNING: Removing unreachable block (ram,0x0011dc18) */
/* WARNING: Removing unreachable block (ram,0x0011dc22) */
/* WARNING: Removing unreachable block (ram,0x0011dcff) */
/* WARNING: Removing unreachable block (ram,0x0011dc2e) */
/* WARNING: Removing unreachable block (ram,0x0011dc38) */
/* WARNING: Removing unreachable block (ram,0x0011dce1) */
/* WARNING: Removing unreachable block (ram,0x0011dc44) */
/* WARNING: Removing unreachable block (ram,0x0011dc4e) */
/* WARNING: Removing unreachable block (ram,0x0011dcc3) */
/* WARNING: Removing unreachable block (ram,0x0011dc56) */
/* WARNING: Removing unreachable block (ram,0x0011dc60) */
/* WARNING: Removing unreachable block (ram,0x0011dca8) */
/* WARNING: Removing unreachable block (ram,0x0011dc68) */
/* WARNING: Removing unreachable block (ram,0x0011dc7e) */
/* WARNING: Removing unreachable block (ram,0x0011dc8a) */
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



/* RID_Alloc<RendererCanvasRenderRD::CanvasLight, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRenderRD::CanvasLight,false>::~RID_Alloc
          (RID_Alloc<RendererCanvasRenderRD::CanvasLight,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001241a0;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasRenderRD::OccluderPolygon, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false>::~RID_Alloc
          (RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001241c0;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererCanvasRenderRD::CanvasLight, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRenderRD::CanvasLight,false>::~RID_Alloc
          (RID_Alloc<RendererCanvasRenderRD::CanvasLight,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001241a0;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererCanvasRenderRD::OccluderPolygon, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false>::~RID_Alloc
          (RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001241c0;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
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
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar5 = 0;
  }
  else {
    lVar11 = *(long *)(lVar5 + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar11 * 0x14;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  lVar10 = param_1 * 0x14;
  if (lVar10 == 0) {
LAB_0011e728:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = lVar10 - 1U >> 1 | lVar10 - 1U;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  if (uVar6 == 0xffffffffffffffff) goto LAB_0011e728;
  if (param_1 <= lVar11) {
    puVar9 = *(undefined8 **)this;
    if (uVar6 + 1 == lVar5) {
      if (puVar9 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar7 = (undefined8 *)Memory::realloc_static(puVar9 + -2,uVar6 + 0x11,false);
      if (puVar7 == (undefined8 *)0x0) {
LAB_0011e760:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar9 = puVar7 + 2;
      *puVar7 = 1;
      *(undefined8 **)this = puVar9;
    }
    puVar9[-1] = param_1;
    return 0;
  }
  if (uVar6 + 1 == lVar5) {
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = puVar9[-1];
LAB_0011e669:
    if (param_1 <= lVar5) goto LAB_0011e5dc;
  }
  else {
    if (lVar11 != 0) {
      puVar7 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar7 == (undefined8 *)0x0) goto LAB_0011e760;
      puVar9 = puVar7 + 2;
      *puVar7 = 1;
      *(undefined8 **)this = puVar9;
      lVar5 = puVar7[1];
      goto LAB_0011e669;
    }
    puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar7 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar5 = 0;
  }
  uVar4 = _UNK_0012da78;
  uVar3 = __LC104;
  puVar7 = (undefined8 *)((long)puVar9 + lVar5 * 0x14);
  do {
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar8 = (undefined8 *)((long)puVar7 + 0x14);
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    puVar7 = puVar8;
  } while ((undefined8 *)(lVar10 + (long)puVar9) != puVar8);
LAB_0011e5dc:
  puVar9[-1] = param_1;
  return 0;
}



/* RID_Alloc<RendererCanvasRenderRD::CanvasLight,
   false>::make_rid(RendererCanvasRenderRD::CanvasLight const&) */

ulong __thiscall
RID_Alloc<RendererCanvasRenderRD::CanvasLight,false>::make_rid
          (RID_Alloc<RendererCanvasRenderRD::CanvasLight,false> *this,CanvasLight *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar13 = *(uint *)(this + 0x20);
  if (uVar13 == *(uint *)(this + 0x1c)) {
    if (uVar13 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar5;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x38,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar16) = uVar12;
    lVar6 = Memory::realloc_static(pvVar2,uVar17,false);
    *(long *)(this + 0x10) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar8 = *(uint *)(this + 0x18);
    lVar5 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar16) = uVar12;
    if (uVar8 != 0) {
      lVar6 = *(long *)(lVar5 + lVar16);
      lVar7 = 0;
      puVar11 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar16) + 0x30);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 0xe;
        *(int *)(lVar6 + lVar7 * 4) = *(int *)(this + 0x20) + (int)lVar7;
        uVar8 = *(uint *)(this + 0x18);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar8);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar8;
    uVar13 = *(uint *)(this + 0x20);
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar8 = *(uint *)(this + 0x18);
  }
  uVar13 = *(uint *)(*(long *)(lVar5 + ((ulong)uVar13 / (ulong)uVar8) * 8) +
                    ((ulong)uVar13 % (ulong)uVar8) * 4);
  uVar17 = (ulong)uVar13;
  LOCK();
  UNLOCK();
  uVar9 = (int)RID_AllocBase::base_id + 1;
  uVar10 = uVar9 & 0x7fffffff;
  if (uVar10 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(*(long *)(lVar16 + (uVar17 / uVar8) * 8) + (uVar17 % (ulong)uVar8) * 0x38 + 0x30) =
         uVar10 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar9,uVar13) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar1 = (undefined8 *)
               (*(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8) +
               (uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x38);
      if ((int)*(uint *)(puVar1 + 6) < 0) {
        uVar13 = (uint)(uVar14 >> 0x20);
        if (uVar13 == (*(uint *)(puVar1 + 6) & 0x7fffffff)) {
          uVar12 = *(undefined8 *)param_1;
          uVar4 = *(undefined8 *)(param_1 + 8);
          *(uint *)(puVar1 + 6) = uVar13;
          *puVar1 = uVar12;
          puVar1[1] = uVar4;
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          puVar1[2] = *(undefined8 *)(param_1 + 0x10);
          puVar1[3] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          puVar1[4] = *(undefined8 *)(param_1 + 0x20);
          puVar1[5] = uVar12;
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar12 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar12 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar12,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,
   false>::make_rid(RendererCanvasRenderRD::OccluderPolygon const&) */

ulong __thiscall
RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false>::make_rid
          (RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false> *this,OccluderPolygon *param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar10 = *(uint *)(this + 0x20);
  if (uVar10 == *(uint *)(this + 0x1c)) {
    if (uVar10 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar10 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar10 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar4 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar4;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x60,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar16) = uVar13;
    lVar5 = Memory::realloc_static(pvVar1,uVar17,false);
    *(long *)(this + 0x10) = lVar5;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar4 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar16) = uVar13;
    if (uVar7 != 0) {
      lVar5 = *(long *)(lVar4 + lVar16);
      lVar6 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar16) + 0x58);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x18;
        *(int *)(lVar5 + lVar6 * 4) = *(int *)(this + 0x20) + (int)lVar6;
        uVar7 = *(uint *)(this + 0x18);
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar7);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar7;
    uVar10 = *(uint *)(this + 0x20);
  }
  else {
    lVar4 = *(long *)(this + 0x10);
    uVar7 = *(uint *)(this + 0x18);
  }
  uVar10 = *(uint *)(*(long *)(lVar4 + ((ulong)uVar10 / (ulong)uVar7) * 8) +
                    ((ulong)uVar10 % (ulong)uVar7) * 4);
  uVar17 = (ulong)uVar10;
  LOCK();
  UNLOCK();
  uVar8 = (int)RID_AllocBase::base_id + 1;
  uVar9 = uVar8 & 0x7fffffff;
  if (uVar9 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar17 % (ulong)uVar7) * 0x60 + *(long *)(lVar16 + (uVar17 / uVar7) * 8) + 0x58) =
         uVar9 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar8,uVar10) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar11 = (undefined8 *)
                ((uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x60 +
                *(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar11 + 0xb) < 0) {
        uVar10 = (uint)(uVar14 >> 0x20);
        if (uVar10 == (*(uint *)(puVar11 + 0xb) & 0x7fffffff)) {
          uVar13 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 8);
          *(uint *)(puVar11 + 0xb) = uVar10;
          *puVar11 = uVar13;
          puVar11[1] = uVar3;
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          puVar11[2] = *(undefined8 *)(param_1 + 0x10);
          puVar11[3] = uVar13;
          uVar13 = *(undefined8 *)(param_1 + 0x28);
          puVar11[4] = *(undefined8 *)(param_1 + 0x20);
          puVar11[5] = uVar13;
          uVar13 = *(undefined8 *)(param_1 + 0x38);
          puVar11[6] = *(undefined8 *)(param_1 + 0x30);
          puVar11[7] = uVar13;
          uVar13 = *(undefined8 *)(param_1 + 0x48);
          puVar11[8] = *(undefined8 *)(param_1 + 0x40);
          puVar11[9] = uVar13;
          puVar11[10] = *(undefined8 *)(param_1 + 0x50);
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar13 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar13 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar13,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
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
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar5) {
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
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar5 != pEVar3) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
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



/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar9 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011f570:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  if (uVar6 == 0xffffffffffffffff) goto LAB_0011f570;
  if (param_1 <= lVar9) {
    puVar7 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar8) {
LAB_0011f3f9:
        if (uVar6 + 1 != lVar5) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar6 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0011f59f;
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = puVar7 + uVar8;
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if ((ulong)puVar7[-1] <= uVar8) goto LAB_0011f3f9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar9 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar7 = *(undefined8 **)this;
    }
LAB_0011f5ed:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar6 + 1 == lVar5) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) goto LAB_0011f5ed;
    lVar9 = puVar7[-1];
LAB_0011f4d0:
    if (param_1 <= lVar9) goto LAB_0011f485;
  }
  else {
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_0011f59f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar7;
      lVar9 = puVar4[1];
      goto LAB_0011f4d0;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar9 = 0;
  }
  memset(puVar7 + lVar9,0,(param_1 - lVar9) * 8);
LAB_0011f485:
  puVar7[-1] = param_1;
  return 0;
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
  undefined8 *puVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar4 = 0;
  }
  else {
    lVar9 = *(long *)(lVar4 + -8);
    if (param_1 == lVar9) {
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
    lVar4 = lVar9 * 0x20;
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
LAB_0011f8a8:
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
  if (uVar5 == 0xffffffffffffffff) goto LAB_0011f8a8;
  if (param_1 <= lVar9) {
    puVar8 = *(undefined8 **)this;
    if (uVar5 + 1 == lVar4) {
      if (puVar8 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_0011f8e0:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
    }
    puVar8[-1] = param_1;
    return 0;
  }
  if (uVar5 + 1 == lVar4) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
LAB_0011f7e9:
    if (param_1 <= lVar4) goto LAB_0011f763;
  }
  else {
    if (lVar9 != 0) {
      puVar6 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0011f8e0;
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
      lVar4 = puVar6[1];
      goto LAB_0011f7e9;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _LC303;
  puVar6 = puVar8 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar8 + param_1 * 4);
LAB_0011f763:
  puVar8[-1] = param_1;
  return 0;
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



/* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::resize<false>
          (CowData<RenderingDevice::Uniform> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
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
    lVar9 = 0;
    lVar6 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar6 = lVar9 * 0x28;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_0011fdd8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x28 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  if (uVar7 == 0xffffffffffffffff) goto LAB_0011fdd8;
  if (param_1 <= lVar9) {
    puVar10 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar10 != (undefined8 *)0x0) {
      if ((ulong)puVar10[-1] <= uVar8) {
LAB_0011fc29:
        if (uVar7 + 1 != lVar6) {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar10 + -2,uVar7 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0011fe07;
          puVar10 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar10;
        }
        puVar10[-1] = param_1;
        return 0;
      }
      while (puVar10[uVar8 * 5 + 4] == 0) {
        uVar8 = uVar8 + 1;
        if ((ulong)puVar10[-1] <= uVar8) goto LAB_0011fc29;
      }
      LOCK();
      plVar1 = (long *)(puVar10[uVar8 * 5 + 4] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar9 = puVar10[uVar8 * 5 + 4];
        puVar10[uVar8 * 5 + 4] = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar10 = *(undefined8 **)this;
    }
LAB_0011fe55:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar7 + 1 == lVar6) {
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) goto LAB_0011fe55;
    lVar9 = puVar10[-1];
LAB_0011fd30:
    if (param_1 <= lVar9) goto LAB_0011fce0;
  }
  else {
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar7 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_0011fe07:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar10 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar10;
      lVar9 = puVar5[1];
      goto LAB_0011fd30;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar9 = 0;
  }
  uVar3 = _LC81;
  puVar5 = puVar10 + lVar9 * 5;
  do {
    *puVar5 = uVar3;
    puVar4 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar4;
  } while (puVar10 + param_1 * 5 != puVar4);
LAB_0011fce0:
  puVar10[-1] = param_1;
  return 0;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, long, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, long> > >::insert(unsigned int const&, long
   const&, bool) */

void HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
     ::insert(uint *param_1,long *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
  undefined8 uVar5;
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
  undefined1 (*pauVar30) [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  void *__s_00;
  undefined1 (*pauVar35) [16];
  undefined8 *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  uint *puVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  undefined8 uVar43;
  char in_R8B;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 (*pauVar47) [16];
  void *local_78;
  
  puVar37 = (uint *)CONCAT71(in_register_00000011,param_3);
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  local_78 = (void *)param_2[1];
  if (local_78 == (void *)0x0) {
    uVar42 = (ulong)uVar32;
    uVar34 = uVar42 * 4;
    uVar38 = uVar42 * 8;
    lVar39 = Memory::alloc_static(uVar34,false);
    param_2[2] = lVar39;
    local_78 = (void *)Memory::alloc_static(uVar38,false);
    param_2[1] = (long)local_78;
    if (uVar32 != 0) {
      pvVar3 = (void *)param_2[2];
      if ((pvVar3 < (void *)((long)local_78 + uVar38)) &&
         (local_78 < (void *)((long)pvVar3 + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar34 * 4) = 0;
          *(undefined8 *)((long)local_78 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar42 != uVar34);
        goto LAB_0011ff4b;
      }
      memset(pvVar3,0,uVar34);
      memset(local_78,0,uVar38);
      uVar33 = *puVar37;
      iVar36 = *(int *)((long)param_2 + 0x2c);
      goto LAB_0011ff5b;
    }
    uVar33 = *puVar37;
    iVar36 = *(int *)((long)param_2 + 0x2c);
    if (local_78 != (void *)0x0) goto LAB_0011ff5b;
  }
  else {
LAB_0011ff4b:
    uVar33 = *puVar37;
    iVar36 = *(int *)((long)param_2 + 0x2c);
LAB_0011ff5b:
    if (iVar36 != 0) {
      uVar34 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar31 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      uVar46 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        uVar46 = 1;
        uVar38 = uVar34;
      }
      else {
        uVar38 = uVar46 * uVar34;
      }
      uVar42 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      uVar45 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar42;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      lVar39 = SUB168(auVar6 * auVar18,8);
      uVar44 = SUB164(auVar6 * auVar18,8);
      uVar31 = *(uint *)(param_2[2] + lVar39 * 4);
      if (uVar31 != 0) {
        do {
          if ((uVar46 == uVar31) &&
             (*(uint *)(*(long *)((long)local_78 + lVar39 * 8) + 0x10) == uVar33)) {
            pauVar35 = *(undefined1 (**) [16])((long)local_78 + (ulong)uVar44 * 8);
            *(undefined8 *)(pauVar35[1] + 8) = *in_RCX;
            goto LAB_001203d8;
          }
          uVar45 = uVar45 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (uVar44 + 1) * uVar34;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar42;
          lVar39 = SUB168(auVar7 * auVar19,8);
          uVar31 = *(uint *)(param_2[2] + lVar39 * 4);
          uVar44 = SUB164(auVar7 * auVar19,8);
        } while ((uVar31 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar31 * uVar34, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar42, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 5) * 4) + uVar44) -
                               SUB164(auVar8 * auVar20,8)) * uVar34, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar42, uVar45 <= SUB164(auVar9 * auVar21,8)));
      }
    }
  }
  if ((float)uVar32 * __LC59 < (float)(iVar36 + 1)) {
    uVar32 = *(uint *)(param_2 + 5);
    if (uVar32 == 0x1c) {
      pauVar35 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001203d8;
    }
    uVar34 = (ulong)(uVar32 + 1);
    uVar33 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    if (uVar32 + 1 < 2) {
      uVar34 = 2;
    }
    uVar32 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    *(int *)(param_2 + 5) = (int)uVar34;
    pvVar3 = (void *)param_2[2];
    uVar42 = (ulong)uVar32;
    uVar34 = uVar42 * 4;
    uVar38 = uVar42 * 8;
    lVar39 = Memory::alloc_static(uVar34,false);
    param_2[2] = lVar39;
    __s_00 = (void *)Memory::alloc_static(uVar38,false);
    param_2[1] = (long)__s_00;
    if (uVar32 != 0) {
      __s = (void *)param_2[2];
      if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar42);
      }
      else {
        memset(__s,0,uVar34);
        memset(__s_00,0,uVar38);
      }
    }
    uVar34 = 0;
    if (uVar33 != 0) {
      do {
        uVar32 = *(uint *)((long)pvVar3 + uVar34 * 4);
        if (uVar32 != 0) {
          uVar44 = 0;
          lVar39 = param_2[2];
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar38 = CONCAT44(0,uVar31);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar32 * lVar4;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar38;
          lVar40 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar39 + lVar40 * 4);
          iVar36 = SUB164(auVar10 * auVar22,8);
          uVar46 = *puVar1;
          uVar5 = *(undefined8 *)((long)local_78 + uVar34 * 8);
          while (uVar46 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar46 * lVar4;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar11 * auVar23,8)) * lVar4;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar38;
            uVar45 = SUB164(auVar12 * auVar24,8);
            uVar43 = uVar5;
            if (uVar45 < uVar44) {
              *puVar1 = uVar32;
              puVar2 = (undefined8 *)((long)__s_00 + lVar40 * 8);
              uVar43 = *puVar2;
              *puVar2 = uVar5;
              uVar32 = uVar46;
              uVar44 = uVar45;
            }
            uVar44 = uVar44 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar4;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar38;
            lVar40 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar39 + lVar40 * 4);
            iVar36 = SUB164(auVar13 * auVar25,8);
            uVar5 = uVar43;
            uVar46 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar40 * 8) = uVar5;
          *puVar1 = uVar32;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar34 = uVar34 + 1;
      } while (uVar33 != uVar34);
      Memory::free_static(local_78,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar32 = *puVar37;
  uVar5 = *in_RCX;
  pauVar35 = (undefined1 (*) [16])operator_new(0x20,"");
  *(uint *)pauVar35[1] = uVar32;
  *(undefined8 *)(pauVar35[1] + 8) = uVar5;
  *pauVar35 = (undefined1  [16])0x0;
  puVar2 = (undefined8 *)param_2[4];
  if (puVar2 == (undefined8 *)0x0) {
    param_2[3] = (long)pauVar35;
    param_2[4] = (long)pauVar35;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar35;
    *(undefined8 **)(*pauVar35 + 8) = puVar2;
    param_2[4] = (long)pauVar35;
  }
  else {
    lVar39 = param_2[3];
    *(undefined1 (**) [16])(lVar39 + 8) = pauVar35;
    *(long *)*pauVar35 = lVar39;
    param_2[3] = (long)pauVar35;
  }
  uVar32 = (*puVar37 >> 0x10 ^ *puVar37) * -0x7a143595;
  uVar33 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
  uVar32 = uVar33 ^ uVar33 >> 0x10;
  if (uVar33 == uVar33 >> 0x10) {
    uVar34 = 1;
    uVar32 = 1;
  }
  else {
    uVar34 = (ulong)uVar32;
  }
  uVar46 = 0;
  lVar39 = param_2[2];
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar38 = CONCAT44(0,uVar33);
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar34 * lVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar38;
  lVar41 = SUB168(auVar14 * auVar26,8);
  lVar40 = param_2[1];
  puVar37 = (uint *)(lVar39 + lVar41 * 4);
  iVar36 = SUB164(auVar14 * auVar26,8);
  uVar31 = *puVar37;
  pauVar30 = pauVar35;
  while (uVar31 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar31 * lVar4;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar38;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar33 + iVar36) - SUB164(auVar15 * auVar27,8)) * lVar4;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar38;
    uVar44 = SUB164(auVar16 * auVar28,8);
    pauVar47 = pauVar30;
    if (uVar44 < uVar46) {
      *puVar37 = uVar32;
      puVar2 = (undefined8 *)(lVar40 + lVar41 * 8);
      pauVar47 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar30;
      uVar32 = uVar31;
      uVar46 = uVar44;
    }
    uVar46 = uVar46 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar36 + 1) * lVar4;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar38;
    lVar41 = SUB168(auVar17 * auVar29,8);
    puVar37 = (uint *)(lVar39 + lVar41 * 4);
    iVar36 = SUB164(auVar17 * auVar29,8);
    pauVar30 = pauVar47;
    uVar31 = *puVar37;
  }
  *(undefined1 (**) [16])(lVar40 + lVar41 * 8) = pauVar30;
  *puVar37 = uVar32;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_001203d8:
  *(undefined1 (**) [16])param_1 = pauVar35;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar5 = 0;
  }
  else {
    lVar10 = *(long *)(lVar5 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar10 * 0x10;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00120828:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 0x10 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  if (uVar6 == 0xffffffffffffffff) goto LAB_00120828;
  if (param_1 <= lVar10) {
    puVar8 = *(undefined8 **)this;
    if (uVar6 + 1 == lVar5) {
      if (puVar8 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar7 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar6 + 0x11,false);
      if (puVar7 == (undefined8 *)0x0) {
LAB_00120860:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      *(undefined8 **)this = puVar8;
    }
    puVar8[-1] = param_1;
    return 0;
  }
  if (uVar6 + 1 == lVar5) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = puVar8[-1];
LAB_00120769:
    if (param_1 <= lVar5) goto LAB_001206e4;
  }
  else {
    if (lVar10 != 0) {
      puVar7 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00120860;
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      *(undefined8 **)this = puVar8;
      lVar5 = puVar7[1];
      goto LAB_00120769;
    }
    puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar7 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar5 = 0;
  }
  uVar4 = _LC150;
  uVar3 = __LC142;
  puVar7 = puVar8 + lVar5 * 2;
  puVar9 = puVar7 + (param_1 - lVar5) * 2;
  do {
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    puVar7 = puVar7 + 2;
  } while (puVar7 != puVar9);
LAB_001206e4:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>
          (CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar4 = lVar10 * 0xc;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  lVar9 = param_1 * 0xc;
  if (lVar9 == 0) {
LAB_00120b78:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = lVar9 - 1U >> 1 | lVar9 - 1U;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_00120b78;
  if (param_1 <= lVar10) {
    puVar8 = *(undefined8 **)this;
    if (uVar5 + 1 == lVar4) {
      if (puVar8 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00120bb0:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
    }
    puVar8[-1] = param_1;
    return 0;
  }
  if (uVar5 + 1 == lVar4) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
LAB_00120ab9:
    if (param_1 <= lVar4) goto LAB_00120a2b;
  }
  else {
    if (lVar10 != 0) {
      puVar6 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00120bb0;
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
      lVar4 = puVar6[1];
      goto LAB_00120ab9;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _LC160;
  puVar6 = (undefined8 *)((long)puVar8 + lVar4 * 0xc);
  do {
    *puVar6 = uVar3;
    puVar7 = (undefined8 *)((long)puVar6 + 0xc);
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6 = puVar7;
  } while (puVar7 != (undefined8 *)(lVar9 + (long)puVar8));
LAB_00120a2b:
  puVar8[-1] = param_1;
  return 0;
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
LAB_00121398:
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
LAB_00120fb1:
      iVar35 = *(int *)(this + 0x2c);
      if (iVar35 != 0) {
LAB_00120fbd:
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
              goto LAB_00120f58;
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
      goto LAB_001210bc;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001210bc;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00120fbd;
LAB_001210de:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      lVar34 = 0;
LAB_00120f58:
      local_88 = (CowData<char32_t> *)(lVar34 + 0x18);
      goto LAB_00120f61;
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
            goto LAB_00120f58;
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
      if (lVar34 == 0) goto LAB_00121398;
      goto LAB_00120fb1;
    }
    local_70 = 0;
    iVar35 = 0;
LAB_001210bc:
    if ((float)uVar43 * __LC59 < (float)(iVar35 + 1)) goto LAB_001210de;
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
    if (lVar34 == 0) goto LAB_00121365;
LAB_001211d2:
    uVar29 = *(uint *)(lVar34 + 0x20);
  }
  else {
    *puVar39 = puVar31;
    puVar31[1] = puVar39;
    lVar34 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar34 != 0) goto LAB_001211d2;
LAB_00121365:
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
LAB_00120f61:
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
      goto LAB_001214e2;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001215f9;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_001214ee;
LAB_0012161b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_001217eb;
    }
    _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_001214e2:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_001214ee:
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
            goto LAB_001217eb;
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
LAB_001215f9:
    if ((float)uVar23 * __LC59 < (float)(iVar28 + 1)) goto LAB_0012161b;
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
LAB_0012170c:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_00121719;
LAB_00121841:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar4 = local_80;
      local_80[1] = (long)puVar4;
      *(long **)(param_2 + 0x20) = local_80;
      goto LAB_0012170c;
    }
    lVar25 = *(long *)(param_2 + 0x18);
    *(long **)(lVar25 + 8) = local_80;
    *local_80 = lVar25;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x18) = local_80;
    if (lVar25 == 0) goto LAB_00121841;
LAB_00121719:
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
LAB_001217eb:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDevice::AttachmentFormat>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::AttachmentFormat>::resize<false>
          (CowData<RenderingDevice::AttachmentFormat> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar4 = lVar10 * 0xc;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  lVar9 = param_1 * 0xc;
  if (lVar9 == 0) {
LAB_00121c58:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = lVar9 - 1U >> 1 | lVar9 - 1U;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_00121c58;
  if (param_1 <= lVar10) {
    puVar8 = *(undefined8 **)this;
    if (uVar5 + 1 == lVar4) {
      if (puVar8 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00121c90:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
    }
    puVar8[-1] = param_1;
    return 0;
  }
  if (uVar5 + 1 == lVar4) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
LAB_00121b99:
    if (param_1 <= lVar4) goto LAB_00121b0b;
  }
  else {
    if (lVar10 != 0) {
      puVar6 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00121c90;
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
      lVar4 = puVar6[1];
      goto LAB_00121b99;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _LC168;
  puVar6 = (undefined8 *)((long)puVar8 + lVar4 * 0xc);
  do {
    *puVar6 = uVar3;
    puVar7 = (undefined8 *)((long)puVar6 + 0xc);
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6 = puVar7;
  } while (puVar7 != (undefined8 *)(lVar9 + (long)puVar8));
LAB_00121b0b:
  puVar8[-1] = param_1;
  return 0;
}



/* HashMap<RendererCanvasRenderRD::RIDSetKey, List<LRUCache<RendererCanvasRenderRD::RIDSetKey, RID,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   &RendererCanvasRenderRD::_before_evict>::Pair, DefaultAllocator>::Element*,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,
   List<LRUCache<RendererCanvasRenderRD::RIDSetKey, RID,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   &RendererCanvasRenderRD::_before_evict>::Pair, DefaultAllocator>::Element*> >
   >::_lookup_pos(RendererCanvasRenderRD::RIDSetKey const&, unsigned int&) const */

undefined8 __thiscall
HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
::_lookup_pos(HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
              *this,RIDSetKey *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
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
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  lVar2 = *(long *)param_1;
  iVar1 = *(int *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  iVar14 = (int)((ulong)lVar2 >> 0x20);
  uVar13 = ((int)lVar2 * 0x16a88000 | (uint)((int)lVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           0x7f07c65;
  uVar13 = (iVar14 * 0x16a88000 | (uint)(iVar14 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
  uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64 ^
           (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar13 = ((int)lVar3 * 0x16a88000 | (uint)((int)lVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
  iVar14 = (int)((ulong)lVar3 >> 0x20);
  uVar13 = (iVar14 * 0x16a88000 | (uint)(iVar14 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
  uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
  uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
  uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
  uVar18 = uVar13 ^ uVar13 >> 0x10;
  if (uVar13 == uVar13 >> 0x10) {
    uVar18 = 1;
    uVar16 = uVar4;
  }
  else {
    uVar16 = uVar18 * uVar4;
  }
  uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar19;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar16;
  lVar17 = SUB168(auVar5 * auVar9,8);
  uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar17 * 4);
  uVar15 = SUB164(auVar5 * auVar9,8);
  if (uVar13 != 0) {
    uVar20 = 0;
    do {
      if ((((uVar18 == uVar13) &&
           (lVar17 = *(long *)(*(long *)(this + 8) + lVar17 * 8), *(long *)(lVar17 + 0x10) == lVar2)
           ) && (*(int *)(lVar17 + 0x18) == iVar1)) && (lVar3 == *(long *)(lVar17 + 0x20))) {
        *param_2 = uVar15;
        return 1;
      }
      uVar20 = uVar20 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (uVar15 + 1) * uVar4;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar19;
      lVar17 = SUB168(auVar6 * auVar10,8);
      uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar17 * 4);
      uVar15 = SUB164(auVar6 * auVar10,8);
    } while ((uVar13 != 0) &&
            (auVar7._8_8_ = 0, auVar7._0_8_ = uVar13 * uVar4, auVar11._8_8_ = 0,
            auVar11._0_8_ = uVar19, auVar8._8_8_ = 0,
            auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar15) - SUB164(auVar7 * auVar11,8)) * uVar4, auVar12._8_8_ = 0,
            auVar12._0_8_ = uVar19, uVar20 <= SUB164(auVar8 * auVar12,8)));
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RendererCanvasRenderRD::RIDSetKey, List<LRUCache<RendererCanvasRenderRD::RIDSetKey, RID,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   &RendererCanvasRenderRD::_before_evict>::Pair, DefaultAllocator>::Element*,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,
   List<LRUCache<RendererCanvasRenderRD::RIDSetKey, RID,
   HashableHasher<RendererCanvasRenderRD::RIDSetKey>,
   HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,
   &RendererCanvasRenderRD::_before_evict>::Pair, DefaultAllocator>::Element*> >
   >::operator[](RendererCanvasRenderRD::RIDSetKey const&) */

undefined1 * __thiscall
HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
::operator[](HashMap<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,DefaultTypedAllocator<HashMapElement<RendererCanvasRenderRD::RIDSetKey,List<LRUCache<RendererCanvasRenderRD::RIDSetKey,RID,HashableHasher<RendererCanvasRenderRD::RIDSetKey>,HashMapComparatorDefault<RendererCanvasRenderRD::RIDSetKey>,&RendererCanvasRenderRD::_before_evict>::Pair,DefaultAllocator>::Element*>>>
             *this,RIDSetKey *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_d8;
  uint local_80;
  uint local_7c [5];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_80);
  if (cVar24 == '\0') {
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar35 = (ulong)uVar32;
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      pvVar31 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar31;
      if (uVar32 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar31 + uVar39)) &&
           (pvVar31 < (void *)((long)pvVar4 + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar28 * 4) = 0;
            *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(pvVar4,0,uVar28);
          memset(pvVar31,0,uVar39);
        }
      }
    }
    local_7c[0] = 0;
    cVar24 = _lookup_pos(this,param_1,local_7c);
    if (cVar24 == '\0') {
      if ((float)uVar32 * __LC59 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar32 = *(uint *)(this + 0x28);
        if (uVar32 == 0x1c) {
          pauVar30 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_001223d8;
        }
        uVar28 = (ulong)(uVar32 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
        if (uVar32 + 1 < 2) {
          uVar28 = 2;
        }
        uVar32 = *(uint *)(hash_table_size_primes + uVar28 * 4);
        uVar35 = (ulong)uVar32;
        *(int *)(this + 0x28) = (int)uVar28;
        pvVar31 = *(void **)(this + 8);
        uVar28 = uVar35 * 4;
        uVar39 = uVar35 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar29 = Memory::alloc_static(uVar28,false);
        *(undefined8 *)(this + 0x10) = uVar29;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar32 != 0) {
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
            uVar32 = *(uint *)((long)pvVar4 + uVar28 * 4);
            if (uVar32 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar32 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar33 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar33 * 4);
              iVar25 = SUB164(auVar7 * auVar15,8);
              uVar38 = *puVar1;
              uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
              while (uVar38 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar38 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar3 + iVar25) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                local_d8 = SUB164(auVar9 * auVar17,8);
                uVar36 = uVar29;
                if (local_d8 < uVar37) {
                  *puVar1 = uVar32;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                  uVar36 = *puVar2;
                  *puVar2 = uVar29;
                  uVar32 = uVar38;
                  uVar37 = local_d8;
                }
                uVar37 = uVar37 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar25 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar33 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar33 * 4);
                iVar25 = SUB164(auVar10 * auVar18,8);
                uVar29 = uVar36;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
              *puVar1 = uVar32;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar27);
          Memory::free_static(pvVar31,false);
          Memory::free_static(pvVar4,false);
        }
      }
      local_68 = *(undefined8 *)param_1;
      uStack_60 = *(undefined8 *)(param_1 + 8);
      local_58 = *(undefined8 *)(param_1 + 0x10);
      pauVar30 = (undefined1 (*) [16])operator_new(0x30,"");
      *pauVar30 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar30[1] = local_68;
      *(undefined8 *)(pauVar30[1] + 8) = uStack_60;
      *(undefined8 *)(pauVar30[2] + 8) = 0;
      *(undefined8 *)pauVar30[2] = local_58;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar30;
      }
      else {
        *puVar2 = pauVar30;
        *(undefined8 **)(*pauVar30 + 8) = puVar2;
      }
      uVar29 = *(undefined8 *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar30;
      iVar25 = (int)uVar29;
      iVar26 = (int)((ulong)uVar29 >> 0x20);
      uVar32 = (iVar25 * 0x16a88000 | (uint)(iVar25 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
      ;
      uVar32 = (iVar26 * 0x16a88000 | (uint)(iVar26 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
      uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
               (*(int *)(param_1 + 8) * 0x16a88000 |
               (uint)(*(int *)(param_1 + 8) * -0x3361d2af) >> 0x11) * 0x1b873593;
      iVar25 = (int)*(undefined8 *)(param_1 + 0x10);
      iVar26 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
      uVar32 = (iVar25 * 0x16a88000 | (uint)(iVar25 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
      uVar32 = (iVar26 * 0x16a88000 | (uint)(iVar26 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
      uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
      uVar32 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar27 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
      uVar32 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar28 = 1;
        uVar32 = 1;
      }
      else {
        uVar28 = (ulong)uVar32;
      }
      uVar38 = 0;
      lVar5 = *(long *)(this + 0x10);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar39 = CONCAT44(0,uVar27);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar34 = SUB168(auVar11 * auVar19,8);
      lVar33 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar34 * 4);
      iVar25 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar30;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar39;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar27 + iVar25) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        local_d8 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (local_d8 < uVar38) {
          *puVar1 = uVar32;
          puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar32 = uVar3;
          uVar38 = local_d8;
        }
        uVar38 = uVar38 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar25 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        lVar34 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar34 * 4);
        iVar25 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar23;
      *puVar1 = uVar32;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_7c[0] * 8);
      *(undefined8 *)(pauVar30[2] + 8) = 0;
    }
  }
  else {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_80 * 8);
  }
LAB_001223d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[2] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar3 == (void *)0x0) goto LAB_001225d7;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_001225d7:
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
  
  *(undefined8 **)this = &WorkerThreadPool::singleton;
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
        if (pvVar5 == (void *)0x0) goto LAB_001226c9;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x50),false);
  }
LAB_001226c9:
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
        if (pvVar5 == (void *)0x0) goto LAB_0012280f;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0012280f:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned int>::resize<false>(long) */

undefined8 __thiscall CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this,long param_1)

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
    lVar3 = lVar7 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
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
    if (uVar4 != 0xffffffffffffffff) {
      if (lVar7 < param_1) {
        if (uVar4 + 1 == lVar3) {
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) goto LAB_00122a69;
        }
        else {
          if (lVar7 == 0) {
            puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              return 6;
            }
            *puVar5 = 1;
            puVar5[1] = 0;
          }
          else {
            puVar5 = (undefined8 *)
                     Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) goto LAB_00122b50;
            *puVar5 = 1;
          }
          puVar5 = puVar5 + 2;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      else {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
LAB_00122a69:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00122b50:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return 6;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      return 0;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                   "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                   ,0,0);
  return 6;
}



/* RBSet<unsigned int, Comparator<unsigned int>, DefaultAllocator>::_insert_rb_fix(RBSet<unsigned
   int, Comparator<unsigned int>, DefaultAllocator>::Element*) */

void __thiscall
RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix
          (RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *this,Element *param_1)

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
      if (*(int *)pEVar6 == 0) goto LAB_00122cad;
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
        if (pEVar5 == pEVar6) goto LAB_00122dd0;
LAB_00122c56:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00122c56;
LAB_00122dd0:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
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
LAB_00122c93:
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
LAB_00122ec2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00122ec2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00122e90;
LAB_00122d20:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00122d20;
LAB_00122e90:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
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
      goto LAB_00122c93;
    }
LAB_00122cad:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
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



/* PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey, RendererCanvasRenderRD::CanvasShaderData,
   void 
   (RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>::compile_pipeline(RendererCanvasRenderRD::PipelineKey
   const&, unsigned int, RenderingServer::PipelineSource, bool) */

void __thiscall
PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
::compile_pipeline(PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
                   *this,undefined8 *param_1,uint param_2,int param_4,byte param_5)

{
  long *plVar1;
  int *piVar2;
  pthread_mutex_t *__mutex;
  undefined8 uVar3;
  undefined8 uVar4;
  Callable *pCVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  Element *pEVar13;
  Element *pEVar14;
  Element *pEVar15;
  Element *pEVar16;
  Element *pEVar17;
  Element *pEVar18;
  long in_FS_OFFSET;
  bool bVar19;
  uint local_8c [3];
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c[0] = param_2;
  iVar8 = pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
  uVar6 = local_8c[0];
  if (iVar8 != 0) goto LAB_0012332f;
  pEVar15 = *(Element **)(this + 0x78);
  pEVar14 = *(Element **)(this + 0x80);
  if (pEVar15 == (Element *)0x0) {
    pEVar15 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar15 + 0x20) = (undefined1  [16])0x0;
    uVar12 = *(undefined8 *)(this + 0x80);
    *(Element **)(this + 0x78) = pEVar15;
    *(undefined4 *)pEVar15 = 1;
    *(undefined8 *)(pEVar15 + 0x18) = uVar12;
    *(undefined8 *)(pEVar15 + 8) = uVar12;
    *(undefined8 *)(pEVar15 + 0x10) = uVar12;
  }
  else {
    pEVar10 = *(Element **)(pEVar15 + 0x10);
    pEVar9 = pEVar10;
    if (pEVar14 != pEVar10) {
      do {
        if (local_8c[0] < *(uint *)(pEVar9 + 0x30)) {
          pEVar9 = *(Element **)(pEVar9 + 0x10);
        }
        else {
          if (local_8c[0] <= *(uint *)(pEVar9 + 0x30)) goto LAB_00123206;
          pEVar9 = *(Element **)(pEVar9 + 8);
        }
      } while (pEVar9 != pEVar14);
      do {
        pEVar15 = pEVar10;
        if (local_8c[0] < *(uint *)(pEVar15 + 0x30)) {
          pEVar10 = *(Element **)(pEVar15 + 0x10);
        }
        else {
          if (local_8c[0] <= *(uint *)(pEVar15 + 0x30)) goto LAB_0012308f;
          pEVar10 = *(Element **)(pEVar15 + 8);
        }
      } while (pEVar14 != pEVar10);
    }
  }
  pEVar10 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
  *(Element **)(pEVar10 + 0x18) = pEVar15;
  *(undefined1 (*) [16])(pEVar10 + 0x20) = (undefined1  [16])0x0;
  pEVar14 = *(Element **)(this + 0x80);
  *(undefined4 *)pEVar10 = 0;
  *(uint *)(pEVar10 + 0x30) = uVar6;
  *(Element **)(pEVar10 + 8) = pEVar14;
  *(Element **)(pEVar10 + 0x10) = pEVar14;
  if ((pEVar15 == *(Element **)(this + 0x78)) || (uVar6 < *(uint *)(pEVar15 + 0x30))) {
    *(Element **)(pEVar15 + 0x10) = pEVar10;
    pEVar17 = *(Element **)(this + 0x80);
    pEVar16 = *(Element **)(pEVar10 + 0x10);
    pEVar18 = *(Element **)(this + 0x78);
    pEVar9 = pEVar14;
    if (pEVar14 == pEVar17) {
      pEVar14 = pEVar15;
      pEVar13 = pEVar15;
      if (pEVar10 == *(Element **)(pEVar15 + 8)) goto LAB_00123268;
      goto LAB_00123275;
    }
LAB_00123030:
    do {
      pEVar18 = pEVar9 + 0x10;
      pEVar14 = pEVar9;
      pEVar9 = *(Element **)pEVar18;
    } while (pEVar17 != *(Element **)pEVar18);
  }
  else {
    *(Element **)(pEVar15 + 8) = pEVar10;
    pEVar9 = *(Element **)(pEVar10 + 8);
    pEVar17 = *(Element **)(this + 0x80);
    pEVar18 = *(Element **)(this + 0x78);
    pEVar13 = pEVar15;
    pEVar16 = pEVar14;
    if (pEVar9 != pEVar17) goto LAB_00123030;
LAB_00123268:
    do {
      pEVar14 = *(Element **)(pEVar13 + 0x18);
      bVar19 = pEVar13 == *(Element **)(pEVar14 + 8);
      pEVar13 = pEVar14;
    } while (bVar19);
LAB_00123275:
    if (pEVar14 == pEVar18) {
      pEVar14 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar10 + 0x20) = pEVar14;
  if (*(Element **)(this + 0x80) == pEVar16) {
    pEVar9 = pEVar10;
    pEVar17 = pEVar15;
    if (*(Element **)(pEVar15 + 0x10) == pEVar10) {
      do {
        pEVar15 = *(Element **)(pEVar17 + 0x18);
        bVar19 = pEVar17 == *(Element **)(pEVar15 + 0x10);
        pEVar9 = pEVar17;
        pEVar17 = pEVar15;
      } while (bVar19);
    }
    if (*(Element **)(this + 0x78) != pEVar9) goto LAB_00123064;
    *(undefined8 *)(pEVar10 + 0x28) = 0;
    if (pEVar14 != (Element *)0x0) goto LAB_0012306d;
  }
  else {
    do {
      pEVar15 = pEVar16;
      pEVar16 = *(Element **)(pEVar15 + 8);
    } while (*(Element **)(this + 0x80) != *(Element **)(pEVar15 + 8));
LAB_00123064:
    *(Element **)(pEVar10 + 0x28) = pEVar15;
    if (pEVar14 != (Element *)0x0) {
LAB_0012306d:
      *(Element **)(pEVar14 + 0x28) = pEVar10;
      pEVar15 = *(Element **)(pEVar10 + 0x28);
      if (pEVar15 == (Element *)0x0) goto LAB_0012307e;
    }
    *(Element **)(pEVar15 + 0x20) = pEVar10;
  }
LAB_0012307e:
  *(int *)(this + 0x88) = *(int *)(this + 0x88) + 1;
  RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix
            ((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *)(this + 0x78),pEVar10)
  ;
LAB_0012308f:
  __mutex = *(pthread_mutex_t **)(this + 0x18);
  if (__mutex != (pthread_mutex_t *)0x0) {
    iVar8 = pthread_mutex_lock(__mutex);
    if (iVar8 != 0) {
LAB_0012332f:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
    }
    piVar2 = (int *)(*(long *)(this + 0x20) + (long)param_4 * 4);
    *piVar2 = *piVar2 + 1;
    pthread_mutex_unlock(__mutex);
  }
  pCVar5 = WorkerThreadPool::singleton;
  local_80 = 0;
  uStack_60 = 0x13;
  local_68 = "PipelineCompilation";
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (char *)*param_1;
  uStack_60 = param_1[1];
  local_58 = param_1[2];
  uStack_50 = param_1[3];
  uVar12 = *(undefined8 *)this;
  uVar3 = *(undefined8 *)(this + 8);
  local_48 = param_1[4];
  uVar4 = *(undefined8 *)(this + 0x10);
  puVar11 = (undefined8 *)operator_new(0x48,"");
  puVar11[3] = uVar4;
  puVar11[2] = uVar3;
  *puVar11 = &PTR_callback_00124330;
  puVar11[4] = local_68;
  puVar11[5] = uStack_60;
  puVar11[1] = uVar12;
  puVar11[6] = local_58;
  puVar11[7] = uStack_50;
  puVar11[8] = local_48;
  local_78 = 0;
  local_70 = 0;
  uVar12 = WorkerThreadPool::_add_task
                     (pCVar5,(_func_void_void_ptr *)&local_78,(void *)0x0,
                      (BaseTemplateUserdata *)0x0,SUB81(puVar11,0),(String *)(ulong)param_5);
  Callable::~Callable((Callable *)&local_78);
  lVar7 = local_80;
  local_78 = uVar12;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
  ::insert((uint *)&local_68,(long *)(this + 0x90),SUB81(local_8c,0));
LAB_00123206:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      if (*(int *)pEVar6 == 0) goto LAB_001233ed;
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
        if (pEVar5 == pEVar6) goto LAB_00123510;
LAB_00123396:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00123396;
LAB_00123510:
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
LAB_001233d3:
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
LAB_00123602:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00123602;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_001235d0;
LAB_00123460:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00123460;
LAB_001235d0:
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
      goto LAB_001233d3;
    }
LAB_001233ed:
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



/* RBMap<unsigned int, RID, Comparator<unsigned int>, DefaultAllocator>::operator[](unsigned int
   const&) */

Element * __thiscall
RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::operator[]
          (RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this,uint *param_1)

{
  uint uVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  bool bVar10;
  
  pEVar5 = *(Element **)this;
  if (pEVar5 == (Element *)0x0) {
    pEVar5 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar5 + 0x20) = (undefined1  [16])0x0;
    pEVar4 = *(Element **)(this + 8);
    *(undefined4 *)(pEVar5 + 0x30) = 0;
    *(undefined8 *)(pEVar5 + 0x38) = 0;
    *(Element **)this = pEVar5;
    *(Element **)(pEVar5 + 0x18) = pEVar4;
    *(undefined4 *)pEVar5 = 1;
    *(Element **)(pEVar5 + 8) = pEVar4;
    *(Element **)(pEVar5 + 0x10) = pEVar4;
  }
  else {
    pEVar4 = *(Element **)(pEVar5 + 0x10);
  }
  pEVar7 = *(Element **)(this + 8);
  uVar1 = *param_1;
  pEVar2 = pEVar4;
  if (pEVar7 != pEVar4) {
    do {
      if (uVar1 < *(uint *)(pEVar2 + 0x30)) {
        pEVar2 = *(Element **)(pEVar2 + 0x10);
      }
      else {
        if (uVar1 <= *(uint *)(pEVar2 + 0x30)) goto LAB_0012379f;
        pEVar2 = *(Element **)(pEVar2 + 8);
      }
    } while (pEVar2 != pEVar7);
    do {
      pEVar5 = pEVar4;
      if (uVar1 < *(uint *)(pEVar5 + 0x30)) {
        pEVar4 = *(Element **)(pEVar5 + 0x10);
      }
      else {
        if (uVar1 <= *(uint *)(pEVar5 + 0x30)) {
          *(undefined8 *)(pEVar5 + 0x38) = 0;
          return pEVar5 + 0x38;
        }
        pEVar4 = *(Element **)(pEVar5 + 8);
      }
    } while (pEVar7 != pEVar4);
  }
  pEVar2 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar1 = *param_1;
  *(Element **)(pEVar2 + 0x18) = pEVar5;
  *(undefined1 (*) [16])(pEVar2 + 0x20) = (undefined1  [16])0x0;
  pEVar4 = *(Element **)(this + 8);
  *(undefined4 *)pEVar2 = 0;
  *(uint *)(pEVar2 + 0x30) = uVar1;
  *(undefined8 *)(pEVar2 + 0x38) = 0;
  *(Element **)(pEVar2 + 8) = pEVar4;
  *(Element **)(pEVar2 + 0x10) = pEVar4;
  if ((pEVar5 == *(Element **)this) || (*param_1 < *(uint *)(pEVar5 + 0x30))) {
    *(Element **)(pEVar5 + 0x10) = pEVar2;
    pEVar8 = *(Element **)(this + 8);
    pEVar6 = *(Element **)(pEVar2 + 0x10);
    pEVar9 = *(Element **)this;
    pEVar7 = pEVar4;
    if (pEVar8 == pEVar4) {
      pEVar4 = pEVar5;
      pEVar3 = pEVar5;
      if (pEVar2 == *(Element **)(pEVar5 + 8)) goto LAB_001237c0;
      goto LAB_001237cd;
    }
LAB_00123740:
    do {
      pEVar9 = pEVar7 + 0x10;
      pEVar4 = pEVar7;
      pEVar7 = *(Element **)pEVar9;
    } while (*(Element **)pEVar9 != pEVar8);
  }
  else {
    *(Element **)(pEVar5 + 8) = pEVar2;
    pEVar7 = *(Element **)(pEVar2 + 8);
    pEVar8 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar3 = pEVar5;
    pEVar6 = pEVar4;
    if (pEVar7 != pEVar8) goto LAB_00123740;
LAB_001237c0:
    do {
      pEVar4 = *(Element **)(pEVar3 + 0x18);
      bVar10 = *(Element **)(pEVar4 + 8) == pEVar3;
      pEVar3 = pEVar4;
    } while (bVar10);
LAB_001237cd:
    if (pEVar4 == pEVar9) {
      pEVar4 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar2 + 0x20) = pEVar4;
  if (*(Element **)(this + 8) == pEVar6) {
    pEVar7 = pEVar2;
    pEVar8 = pEVar5;
    if (pEVar2 == *(Element **)(pEVar5 + 0x10)) {
      do {
        pEVar5 = *(Element **)(pEVar8 + 0x18);
        bVar10 = *(Element **)(pEVar5 + 0x10) == pEVar8;
        pEVar7 = pEVar8;
        pEVar8 = pEVar5;
      } while (bVar10);
    }
    if (pEVar7 != *(Element **)this) goto LAB_00123774;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    if (pEVar4 == (Element *)0x0) goto LAB_0012378e;
LAB_0012377d:
    *(Element **)(pEVar4 + 0x28) = pEVar2;
    pEVar5 = *(Element **)(pEVar2 + 0x28);
    if (pEVar5 == (Element *)0x0) goto LAB_0012378e;
  }
  else {
    do {
      pEVar5 = pEVar6;
      pEVar6 = *(Element **)(pEVar5 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar5 + 8));
LAB_00123774:
    *(Element **)(pEVar2 + 0x28) = pEVar5;
    if (pEVar4 != (Element *)0x0) goto LAB_0012377d;
  }
  *(Element **)(pEVar5 + 0x20) = pEVar2;
LAB_0012378e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar2);
LAB_0012379f:
  return pEVar2 + 0x38;
}



/* PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey, RendererCanvasRenderRD::CanvasShaderData,
   void 
   (RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>::_add_new_pipelines_to_map()
    */

undefined8 __thiscall
PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
::_add_new_pipelines_to_map
          (PipelineHashMapRD<RendererCanvasRenderRD::PipelineKey,RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey)>
           *this)

{
  long *plVar1;
  CowData<unsigned_int> *pCVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 extraout_var;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint *puVar23;
  long lVar24;
  long *in_FS_OFFSET;
  uint *local_50;
  
  if ((char)*in_FS_OFFSET == '\0') {
    lVar20 = *in_FS_OFFSET;
    *in_FS_OFFSET = 0;
    *(char *)in_FS_OFFSET = '\x01';
    __cxa_thread_atexit(Vector<unsigned_int>::~Vector,lVar20,&__dso_handle);
  }
  lVar20 = *in_FS_OFFSET;
  if ((lVar20 != 0) && (*(long *)(lVar20 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar20 = *in_FS_OFFSET;
      *in_FS_OFFSET = 0;
      Memory::free_static((void *)(lVar20 + -0x10),false);
    }
    else {
      *in_FS_OFFSET = 0;
    }
  }
  iVar12 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if (iVar12 == 0) {
    uVar13 = *(uint *)(this + 0x40);
    puVar23 = *(uint **)(this + 0x48);
    puVar18 = puVar23 + (ulong)uVar13 * 4;
    if (puVar18 != puVar23) {
      pCVar2 = (CowData<unsigned_int> *)*in_FS_OFFSET;
      do {
        puVar15 = (undefined8 *)
                  RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::operator[]
                            ((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *)
                             (this + 0x28),puVar23);
        uVar13 = *puVar23;
        *puVar15 = *(undefined8 *)(puVar23 + 2);
        if (in_FS_OFFSET[1] == 0) {
          lVar20 = 1;
        }
        else {
          lVar20 = *(long *)(in_FS_OFFSET[1] + -8) + 1;
        }
        iVar12 = CowData<unsigned_int>::resize<false>(pCVar2,lVar20);
        if (iVar12 == 0) {
          if (in_FS_OFFSET[1] == 0) {
            lVar24 = -1;
            lVar20 = 0;
          }
          else {
            lVar20 = *(long *)(in_FS_OFFSET[1] + -8);
            lVar24 = lVar20 + -1;
            if (-1 < lVar24) {
              CowData<unsigned_int>::_copy_on_write(pCVar2);
              *(uint *)(in_FS_OFFSET[1] + lVar24 * 4) = uVar13;
              goto LAB_001239ee;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar20,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_001239ee:
        puVar23 = puVar23 + 4;
      } while (puVar18 != puVar23);
      uVar13 = *(uint *)(this + 0x40);
    }
    if (uVar13 != 0) {
      *(undefined4 *)(this + 0x40) = 0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
    iVar12 = pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
    if (iVar12 == 0) {
      pCVar2 = (CowData<unsigned_int> *)*in_FS_OFFSET;
      CowData<unsigned_int>::_copy_on_write(pCVar2);
      puVar23 = (uint *)*in_FS_OFFSET;
      CowData<unsigned_int>::_copy_on_write(pCVar2);
      local_50 = (uint *)*in_FS_OFFSET;
      if (local_50 != (uint *)0x0) {
        local_50 = local_50 + *(long *)(local_50 + -2);
      }
      do {
        if (puVar23 == local_50) {
          iVar12 = pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar12) >> 8),*in_FS_OFFSET != 0);
        }
        lVar20 = *(long *)(this + 0x98);
        if ((lVar20 != 0) && (*(int *)(this + 0xbc) != 0)) {
          uVar13 = *puVar23;
          uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
          uVar14 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
          uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
          uVar19 = uVar14 ^ uVar14 >> 0x10;
          if (uVar14 == uVar14 >> 0x10) {
            uVar19 = 1;
            uVar16 = uVar3;
          }
          else {
            uVar16 = uVar19 * uVar3;
          }
          uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4))
          ;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar21;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar16;
          lVar24 = SUB168(auVar4 * auVar8,8);
          uVar17 = SUB164(auVar4 * auVar8,8);
          uVar14 = *(uint *)(*(long *)(this + 0xa0) + lVar24 * 4);
          if (uVar14 != 0) {
            uVar22 = 0;
            while ((uVar14 != uVar19 || (uVar13 != *(uint *)(*(long *)(lVar20 + lVar24 * 8) + 0x10))
                   )) {
              uVar22 = uVar22 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (uVar17 + 1) * uVar3;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar21;
              lVar24 = SUB168(auVar5 * auVar9,8);
              uVar14 = *(uint *)(*(long *)(this + 0xa0) + lVar24 * 4);
              uVar17 = SUB164(auVar5 * auVar9,8);
              if ((uVar14 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = uVar14 * uVar3, auVar10._8_8_ = 0,
                 auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                 auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0xb8) * 4) + uVar17) -
                                SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar21, SUB164(auVar7 * auVar11,8) < uVar22)) goto LAB_00123ba9;
            }
            lVar20 = *(long *)(lVar20 + (ulong)uVar17 * 8);
            if (lVar20 != 0) {
              HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
              ::erase((HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
                       *)(this + 0x90),(uint *)(lVar20 + 0x10));
            }
          }
        }
LAB_00123ba9:
        puVar23 = puVar23 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar12);
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererCanvasRenderRD::OccluderPolygon, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false>::~RID_Alloc
          (RID_Alloc<RendererCanvasRenderRD::OccluderPolygon,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererCanvasRenderRD::CanvasLight, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererCanvasRenderRD::CanvasLight,false>::~RID_Alloc
          (RID_Alloc<RendererCanvasRenderRD::CanvasLight,false> *this)

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
/* CanvasOcclusionShaderRD::~CanvasOcclusionShaderRD() */

void __thiscall CanvasOcclusionShaderRD::~CanvasOcclusionShaderRD(CanvasOcclusionShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CanvasShaderRD::~CanvasShaderRD() */

void __thiscall CanvasShaderRD::~CanvasShaderRD(CanvasShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WorkerThreadPool::TaskUserData<RendererCanvasRenderRD::CanvasShaderData, void
   (RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),
   RendererCanvasRenderRD::PipelineKey>::~TaskUserData() */

void __thiscall
WorkerThreadPool::
TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
::~TaskUserData(TaskUserData<RendererCanvasRenderRD::CanvasShaderData,void(RendererCanvasRenderRD::CanvasShaderData::*)(RendererCanvasRenderRD::PipelineKey),RendererCanvasRenderRD::PipelineKey>
                *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<unsigned int, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<unsigned_int,unsigned_int,false,false>::~LocalVector
          (LocalVector<unsigned_int,unsigned_int,false,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<RendererCanvasRenderRD::OccluderPolygon*, unsigned int, false, false>::~LocalVector()
    */

void __thiscall
LocalVector<RendererCanvasRenderRD::OccluderPolygon*,unsigned_int,false,false>::~LocalVector
          (LocalVector<RendererCanvasRenderRD::OccluderPolygon*,unsigned_int,false,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<float, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<float,unsigned_int,false,false>::~LocalVector
          (LocalVector<float,unsigned_int,false,false> *this)

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



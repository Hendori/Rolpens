
/* RendererCompositorRD::begin_frame(double) */

void __thiscall RendererCompositorRD::begin_frame(RendererCompositorRD *this,double param_1)

{
  double dVar1;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  double __y;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  frame = frame + 1;
  *(double *)(this + 0x2a0) = param_1 + *(double *)(this + 0x2a0);
  *(double *)(this + 0x2a8) = param_1;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"rendering/limits/time/time_rollover_secs",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  __y = Variant::operator_cast_to_double((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  dVar1 = *(double *)(this + 0x2a0);
  do {
    dVar1 = dVar1 - (dVar1 / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(dVar1)) {
    fmod(*(double *)(this + 0x2a0),__y);
  }
  *(double *)(this + 0x2a0) = dVar1;
  RendererCanvasRenderRD::set_time(dVar1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x60) + 0x148))(*(undefined8 *)(this + 0x2a0),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCompositorRD::end_frame(bool) */

void RendererCompositorRD::end_frame(bool param_1)

{
  bool bVar1;
  
  bVar1 = (bool)RenderingDevice::get_singleton();
  RenderingDevice::swap_buffers(bVar1);
  return;
}



/* RendererCompositorRD::finalize() */

void __thiscall RendererCompositorRD::finalize(RendererCompositorRD *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(this + 0x60);
  (**(code **)(*plVar1 + 0x1c0))(plVar1);
  Memory::free_static(plVar1,false);
  plVar1 = *(long **)(this + 0x20);
  (**(code **)(*plVar1 + 0x88))(plVar1);
  Memory::free_static(plVar1,false);
  puVar2 = *(undefined8 **)(this + 0x58);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x48);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x30);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x40);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x38);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  plVar1 = *(long **)(this + 0x50);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  Memory::free_static(plVar1,false);
  puVar2 = *(undefined8 **)(this + 0x28);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  ShaderRD::version_free(this + 0xb8,*(undefined8 *)(this + 0x230));
  uVar3 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar3,*(undefined8 *)(this + 600));
  uVar3 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar3,*(undefined8 *)(this + 0x268));
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



/* RendererCompositorRD::~RendererCompositorRD() */

void __thiscall RendererCompositorRD::~RendererCompositorRD(RendererCompositorRD *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  pOVar3 = *(Object **)(this + 0x10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_utilities_00106000;
  singleton = 0;
  cVar4 = predelete_handler(pOVar3);
  if (cVar4 != '\0') {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  pOVar3 = *(Object **)(this + 0x18);
  cVar4 = predelete_handler(pOVar3);
  if (cVar4 != '\0') {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  local_28 = 0;
  ShaderRD::set_shader_cache_dir((String *)&local_28);
  lVar5 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x278);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x29c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x298) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x29c) = 0;
        *(undefined1 (*) [16])(this + 0x288) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x280) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x280) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0x278);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x29c) = 0;
        *(undefined1 (*) [16])(this + 0x288) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010073b;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x280),false);
  }
LAB_0010073b:
  *(undefined ***)(this + 0xb8) = &PTR__BlitShaderRD_00105fe0;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xb8));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    RendererCompositor::~RendererCompositor((RendererCompositor *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCompositorRD::~RendererCompositorRD() */

void __thiscall RendererCompositorRD::~RendererCompositorRD(RendererCompositorRD *this)

{
  ~RendererCompositorRD(this);
  operator_delete(this,0x2b0);
  return;
}



/* RendererCompositorRD::RendererCompositorRD() */

void __thiscall RendererCompositorRD::RendererCompositorRD(RendererCompositorRD *this)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char *pcVar4;
  Object *pOVar5;
  char *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UniformSetCacheRD *this_00;
  FramebufferCacheRD *this_01;
  long lVar12;
  Utilities *this_02;
  TextureStorage *this_03;
  MaterialStorage *this_04;
  MeshStorage *this_05;
  LightStorage *this_06;
  ParticlesStorage *this_07;
  Fog *this_08;
  RendererCanvasRenderRD *this_09;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  RenderForwardMobile *this_10;
  long lVar16;
  long in_FS_OFFSET;
  char *local_80;
  Object *local_78;
  char *local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RendererCompositor::RendererCompositor((RendererCompositor *)this);
  *(undefined ***)this = &PTR_get_utilities_00106000;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0xb8));
  *(undefined ***)(this + 0xb8) = &PTR__BlitShaderRD_00105fe0;
  ShaderRD::setup((char *)(this + 0xb8),
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std140) uniform Pos {\n\tvec4 src_rect;\n\tvec4 dst_rect;\n\n\tfloat rotation_sin;\n\tfloat rotation_cos;\n\tvec2 pad;\n\n\tvec2 eye_center;\n\tfloat k1;\n\tfloat k2;\n\n\tfloat upscale;\n\tfloat aspect_ratio;\n\tuint layer;\n\tbool convert_to_srgb;\n}\ndata;\n\nlayout(location = 0) out vec2 uv;\n\nvoid main() {\n\tmat4 swapchain_transform = mat4(1.0);\n\tswapchain_transform[0][0] = data.rotation_cos;\n\tswapchain_transform[0][1] = -data.rotation_sin;\n\tswapchain_transform[1][0] = data.rotation_sin;\n\tswapchain_transform[1][1] = data.rotation_cos;\n\n\tvec2 base_arr[4] = vec2[](vec2(0.0, 0.0), vec2(0.0, 1.0), vec2(1.0, 1.0), vec2(1.0, 0.0));\n\tuv = data.src_rect.xy + base_arr[gl_VertexIndex] * data.src_rect.zw;\n\tvec2 vtx = data.dst_rect.xy + base_arr[gl_VertexIndex] * data.dst_rect.zw;\n\tgl_Position = swapchain_transform * vec4(vtx * 2.0 - 1.0, 0.0, 1.0);\n}\n\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std140) uniform Pos {\n\tvec4 src_rect;\n\tvec4 dst_rect;\n\n\tfloat rotation_sin;\n\tfloat rotation_cos;\n\tvec2 pad;\n\n\tvec2 eye_center;\n\tfloat k1;\n\tfloat k2;\n\n\tfloat upscale;\n\tfloat aspect_ratio;\n\tuint layer;\n\tbool convert_to_srgb;\n}\ndata;\n\nlayout(location = 0) in vec2 uv;\n\nlayout(location = 0) out vec4 color;\n\n#ifdef USE_LAYER\nlayout(binding = 0) uniform sampler2DArray src_rt;\n#else\nlayout(binding = 0) uniform sampler2D src_rt;\n#endif\n\nvec3 linear_to_srgb(vec3 color) {\n\t\n\tcolor = clamp(color, vec3(0.0), vec3(1.0));\n\tconst vec3 a = vec3(0.055f);\n\treturn mix((vec3(1.0f) + a) * pow(color.rgb, vec3(1.0f / 2.4f)) - a, 12.92f * color.rgb, lessThan(color.rgb, vec3(0.0031308f)));\n}\n\nvoid main() {\n#ifdef APPLY_LENS_DISTORTION\n\tvec2 coords = uv * 2.0 - 1.0;\n\tvec2 offset = coords - data.eye_center;\n\n\t\n\toffset.y /= data.aspect_ratio;\n\n\t\n\tvec2 offset_sq = offset * offset;\n\tfloat radius_sq = offset_sq.x + offset_sq.y;\n\tfloat radius_s4 = radius_sq * radius_sq;\n\tfloat distortion_scale = 1.0 + (data.k1 * radius_sq) + (data.k2 * radius_s4);\n\toffset *= distortion_scale;\n\n\t\n\toffset.y *= data.aspect_ratio;\n\n\t\n\tcoords = offset + data.eye_center;\n\tcoords /= data.upscale;\n\n\t\n\tif (coords.x < -1.0 || coords.y < -1.0 || coords.x > 1.0 || coords.y > 1.0) {\n\t\tcolor = vec4(0.0, 0.0, 0.0, 1.0);\n\t} else {\n\t\t\n\t\tcoords = (coords + vec2(1.0)) / vec2(2.0);\n\t\tcolor = texture(src_rt, vec3(coords, data.layer));\n\t}\n#elif defined(USE_LAYER)\n\tcolor = texture(src_rt, vec3(uv, data.layer));\n#else\n\tcolor = texture(src_rt, uv);\n#endif\n\n\tif (data.convert_to_srgb) {\n\t\tcolor.rgb = linear_to_srgb(color.rgb); \n\t}\n}\n"
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x298) = 2;
  *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x278) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x288) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a0) = (undefined1  [16])0x0;
  this_00 = (UniformSetCacheRD *)operator_new(0x201d0,"");
  UniformSetCacheRD::UniformSetCacheRD(this_00);
  postinitialize_handler((Object *)this_00);
  *(UniformSetCacheRD **)(this + 0x10) = this_00;
  this_01 = (FramebufferCacheRD *)operator_new(0x201d0,"");
  FramebufferCacheRD::FramebufferCacheRD(this_01);
  postinitialize_handler((Object *)this_01);
  *(FramebufferCacheRD **)(this + 0x18) = this_01;
  Engine::get_singleton();
  Engine::get_shader_cache_path();
  if ((local_80 == (char *)0x0) || (*(uint *)(local_80 + -8) < 2)) {
    local_60 = 7;
    local_68 = "user://";
    String::parse_latin1((StrRange *)&local_80);
  }
  DirAccess::open((StrRange *)&local_78,(StrRange *)&local_80);
  pOVar5 = local_78;
  if (local_78 == (Object *)0x0) {
    operator+((char *)&local_68,
              (String *)"Can\'t create shader cache folder, no shader caching will happen: ");
    uVar14 = 0x117;
LAB_00100e20:
    _err_print_error("RendererCompositorRD",
                     "servers/rendering/renderer_rd/renderer_compositor_rd.cpp",uVar14,
                     (StringName *)&local_68,0,0);
    pcVar4 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
  }
  else {
    pcVar3 = *(code **)(*(long *)local_78 + 0x1a8);
    local_68 = "shader_cache";
    local_70 = (char *)0x0;
    local_60 = 0xc;
    String::parse_latin1((StrRange *)&local_70);
    iVar11 = (*pcVar3)(pOVar5);
    pcVar4 = local_70;
    if (local_70 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    pOVar5 = local_78;
    if (iVar11 != 0) {
      pcVar3 = *(code **)(*(long *)local_78 + 0x1b8);
      local_68 = "shader_cache";
      local_70 = (char *)0x0;
      local_60 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      iVar11 = (*pcVar3)(pOVar5);
      pcVar4 = local_70;
      if (local_70 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      if (iVar11 != 0) {
        operator+((char *)&local_68,
                  (String *)"Can\'t create shader cache folder, no shader caching will happen: ");
        uVar14 = 0x11e;
        goto LAB_00100e20;
      }
    }
    local_68 = "shader_cache";
    local_70 = (char *)0x0;
    local_60 = 0xc;
    String::parse_latin1((StrRange *)&local_70);
    String::path_join((StringName *)&local_68);
    pcVar6 = local_68;
    pcVar4 = local_80;
    if (local_80 == local_68) {
      if (local_80 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
    }
    else {
      if (local_80 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      local_80 = local_68;
    }
    pcVar4 = local_70;
    if (local_70 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_68,"rendering/shader_compiler/shader_cache/enabled",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar12 = Engine::get_singleton();
    pcVar4 = local_80;
    if ((*(char *)(lVar12 + 0xc0) != '\0') || (bVar7)) {
      if ((local_80 != (char *)0x0) && (1 < *(uint *)(local_80 + -8))) {
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_68,"rendering/shader_compiler/shader_cache/compress",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_68,
                   "rendering/shader_compiler/shader_cache/use_zstd_compression",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_68,"rendering/shader_compiler/shader_cache/strip_debug",
                   false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        bVar10 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        ShaderRD::set_shader_cache_dir((StrRange *)&local_80);
        ShaderRD::set_shader_cache_save_compressed(bVar7);
        ShaderRD::set_shader_cache_save_compressed_zstd(bVar9);
        ShaderRD::set_shader_cache_save_debug(!bVar10);
      }
    }
    else if (local_80 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
      local_80 = (char *)0x0;
    }
  }
  if (((local_78 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar5 = local_78, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  pcVar4 = local_80;
  if (local_80 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  if (singleton == (RendererCompositorRD *)0x0) {
    singleton = this;
    this_02 = (Utilities *)operator_new(0x80,"");
    RendererRD::Utilities::Utilities(this_02);
    *(Utilities **)(this + 0x28) = this_02;
    this_03 = (TextureStorage *)operator_new(0x4d0,"");
    RendererRD::TextureStorage::TextureStorage(this_03);
    *(TextureStorage **)(this + 0x50) = this_03;
    this_04 = (MaterialStorage *)operator_new(0x2e0,"");
    RendererRD::MaterialStorage::MaterialStorage(this_04);
    *(MaterialStorage **)(this + 0x38) = this_04;
    this_05 = (MeshStorage *)operator_new(1000,"");
    RendererRD::MeshStorage::MeshStorage(this_05);
    *(MeshStorage **)(this + 0x40) = this_05;
    this_06 = (LightStorage *)operator_new(0x3e0,"");
    RendererRD::LightStorage::LightStorage(this_06);
    *(LightStorage **)(this + 0x30) = this_06;
    this_07 = (ParticlesStorage *)operator_new(0xa08,"");
    RendererRD::ParticlesStorage::ParticlesStorage(this_07);
    *(ParticlesStorage **)(this + 0x48) = this_07;
    this_08 = (Fog *)operator_new(0x918,"");
    RendererRD::Fog::Fog(this_08);
    *(Fog **)(this + 0x58) = this_08;
    this_09 = (RendererCanvasRenderRD *)operator_new(0x200be0,"");
    RendererCanvasRenderRD::RendererCanvasRenderRD(this_09);
    *(RendererCanvasRenderRD **)(this + 0x20) = this_09;
    lVar12 = OS::get_singleton();
    local_80 = (char *)0x0;
    plVar1 = (long *)(*(long *)(lVar12 + 0x68) + -0x10);
    if (*(long *)(lVar12 + 0x68) != 0) {
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_00100d3b;
        LOCK();
        lVar13 = *plVar1;
        bVar7 = lVar16 == lVar13;
        if (bVar7) {
          *plVar1 = lVar16 + 1;
          lVar13 = lVar16;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar13 != -1) {
        local_80 = *(char **)(lVar12 + 0x68);
      }
    }
LAB_00100d3b:
    uVar14 = RenderingDevice::get_singleton();
    uVar15 = RenderingDevice::limit_get(uVar14,0xf);
    cVar8 = String::operator==((String *)&local_80,"mobile");
    if ((uVar15 < 0x30) || (cVar8 != '\0')) {
      cVar8 = String::operator==((String *)&local_80,"forward_plus");
      if ((cVar8 != '\0') && (RendererCompositorRD()::first_print != '\0')) {
        _err_print_error("RendererCompositorRD",
                         "servers/rendering/renderer_rd/renderer_compositor_rd.cpp",0x146,
                         "Platform supports less than 48 textures per stage which is less than required by the Clustered renderer. Defaulting to Mobile renderer."
                         ,0,1);
        RendererCompositorRD()::first_print = '\0';
      }
      this_10 = (RenderForwardMobile *)operator_new(0x30d0,"");
      RendererSceneRenderImplementation::RenderForwardMobile::RenderForwardMobile(this_10);
    }
    else {
      cVar8 = String::operator==((String *)&local_80,"forward_plus");
      if (cVar8 == '\0') {
        local_70 = (char *)0x0;
        plVar1 = (long *)(local_80 + -0x10);
        if (local_80 != (char *)0x0) {
          do {
            lVar12 = *plVar1;
            if (lVar12 == 0) goto LAB_00100f27;
            LOCK();
            lVar16 = *plVar1;
            bVar7 = lVar12 == lVar16;
            if (bVar7) {
              *plVar1 = lVar12 + 1;
              lVar16 = lVar12;
            }
            UNLOCK();
          } while (!bVar7);
          if (lVar16 != -1) {
            local_70 = local_80;
          }
        }
LAB_00100f27:
        local_78 = (Object *)0x0;
        local_68 = 
        "Cannot instantiate RenderingDevice-based renderer with renderer type \'%s\'. Defaulting to Forward+ renderer."
        ;
        local_60 = 0x6b;
        String::parse_latin1((StrRange *)&local_78);
        vformat<String>((StringName *)&local_68,(StrRange *)&local_78,&local_70);
        _err_print_error("RendererCompositorRD",
                         "servers/rendering/renderer_rd/renderer_compositor_rd.cpp",0x14d,
                         (StringName *)&local_68,0,0);
        pcVar4 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        pOVar5 = local_78;
        if (local_78 != (Object *)0x0) {
          LOCK();
          pOVar2 = local_78 + -0x10;
          *(long *)pOVar2 = *(long *)pOVar2 + -1;
          UNLOCK();
          if (*(long *)pOVar2 == 0) {
            local_78 = (Object *)0x0;
            Memory::free_static(pOVar5 + -0x10,false);
          }
        }
        pcVar4 = local_70;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
      }
      this_10 = (RenderForwardMobile *)operator_new(0x38f8,"");
      RendererSceneRenderImplementation::RenderForwardClustered::RenderForwardClustered
                ((RenderForwardClustered *)this_10);
    }
    *(RenderForwardMobile **)(this + 0x60) = this_10;
    RendererSceneRenderRD::init();
    pcVar4 = local_80;
    if (local_80 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
  }
  else {
    _err_print_error("RendererCompositorRD",
                     "servers/rendering/renderer_rd/renderer_compositor_rd.cpp",0x135,
                     "Condition \"singleton != nullptr\" is true.",
                     "A RendererCompositorRD singleton already exists.",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
/* RendererCompositorRD::initialize() */

void __thiscall RendererCompositorRD::initialize(RendererCompositorRD *this)

{
  long *plVar1;
  undefined8 *__dest;
  Vector *pVVar2;
  char cVar3;
  size_t __n;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  SamplerState *pSVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long in_FS_OFFSET;
  String local_138 [8];
  undefined8 local_130;
  undefined1 local_128 [8];
  long local_120;
  long local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [12];
  undefined8 local_fc;
  ulong local_e8;
  undefined8 *local_e0 [2];
  long local_d0;
  undefined2 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  undefined1 local_68 [4];
  undefined4 local_64;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = 0;
  local_e8 = 0;
  local_b8 = 0x1041ba;
  uStack_b4 = 0;
  uStack_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_138);
  uVar16 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar16 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = 0x1041bc;
  uStack_b4 = 0;
  uStack_b0 = 0x13;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_138);
  uVar16 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar16 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = 0x103e80;
  uStack_b4 = 0;
  uStack_b0 = 0x31;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_138);
  uVar16 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar16 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = 0x1041ba;
  uStack_b4 = 0;
  uStack_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_138);
  uVar16 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar16 - 0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0xb8);
  local_e0[0] = (undefined8 *)0x0;
  local_b8 = 0x104144;
  uStack_b4 = 0;
  local_118 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  ShaderRD::initialize(pVVar2,local_138,(Vector *)&local_118);
  lVar13 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  uVar16 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_e0);
  uVar6 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x230) = uVar6;
  do {
    uVar6 = RenderingDevice::get_singleton();
    local_68[0] = 0;
    local_120 = 0;
    local_64 = 0;
    local_58 = 0;
    if (uVar16 == 3) {
      local_b8 = CONCAT31(local_b8._1_3_,1);
      uStack_a4 = 7;
      uStack_a0 = 0;
      local_50 = __LC58;
      uStack_48 = _UNK_00106c98;
      uStack_9c = _LC53;
      uStack_b4 = (undefined4)__LC59;
      uStack_b0 = (undefined4)((ulong)__LC59 >> 0x20);
      uStack_ac = (undefined4)_UNK_00106ca8;
      uStack_a8 = (undefined4)((ulong)_UNK_00106ca8 >> 0x20);
      Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back();
    }
    else {
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      local_50 = __LC58;
      uStack_48 = _UNK_00106c98;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = _LC53;
      Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back();
    }
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8c = 0;
    local_88 = 0;
    auStack_74 = SUB1612((undefined1  [16])0x0,4);
    local_118 = 0;
    uStack_110 = 0;
    local_c8 = 0;
    uStack_a0 = (undefined4)__LC61;
    uStack_9c = (undefined4)((ulong)__LC61 >> 0x20);
    local_98 = (undefined2)_UNK_00106cb8;
    uStack_96 = (undefined6)((ulong)_UNK_00106cb8 >> 0x10);
    uStack_7c = (undefined4)_UNK_00106cb8;
    local_78 = (undefined4)((ulong)_UNK_00106cb8 >> 0x20);
    uStack_10c = 0;
    auStack_108 = SUB1612((undefined1  [16])0x0,4);
    uStack_b4 = 7;
    local_e8 = local_e8 & 0xffffff0000000000;
    local_e0[0] = (undefined8 *)((ulong)local_e0[0] & 0xffffffff00000000);
    local_d0 = 0;
    local_fc = 0x13f800000;
    uStack_84 = uStack_a0;
    uStack_80 = uStack_9c;
    iVar5 = RenderingDevice::get_singleton();
    uVar7 = RenderingDevice::screen_get_framebuffer_format(iVar5);
    uVar11 = *(ulong *)(this + 0x230);
    uVar12 = uVar16;
    if (*(long *)(this + 0xd0) != 0) {
      lVar13 = *(long *)(*(long *)(this + 0xd0) + -8);
      if (lVar13 <= (long)uVar16) goto LAB_001023db;
      lVar13 = *(long *)(this + 0xe0);
      if (lVar13 != 0) {
        lVar15 = *(long *)(lVar13 + -8);
        if (lVar15 <= (long)uVar16) goto LAB_00102191;
        if (*(char *)(lVar13 + uVar16) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          uVar14 = 0;
          goto LAB_00101d26;
        }
        if ((uVar11 == 0) || (*(uint *)(this + 0x18c) <= (uint)uVar11)) {
LAB_001024a8:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar14 = 0;
          goto LAB_00101d26;
        }
        lVar13 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x178) +
                          ((uVar11 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
        if (*(int *)(lVar13 + 0x98) != (int)(uVar11 >> 0x20)) {
          if (*(int *)(lVar13 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001024a8;
        }
        iVar5 = (int)lVar13;
        if (*(char *)(lVar13 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)pVVar2);
          lVar15 = *(long *)(this + 0x130);
          if (lVar15 != 0) {
            lVar17 = 0;
            do {
              if (*(long *)(lVar15 + -8) <= lVar17) break;
              if (*(char *)(lVar15 + lVar17) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar5);
              }
              else {
                ShaderRD::_compile_version_start((Version *)pVVar2,iVar5);
              }
              lVar15 = *(long *)(this + 0x130);
              lVar17 = lVar17 + 1;
            } while (lVar15 != 0);
          }
        }
        lVar17 = *(long *)(this + 0xf0);
        if (lVar17 == 0) goto LAB_00102170;
        lVar15 = *(long *)(lVar17 + -8);
        if (lVar15 <= (long)uVar16) goto LAB_00102191;
        uVar11 = (ulong)*(uint *)(lVar17 + uVar16 * 4);
        lVar17 = *(long *)(lVar13 + 0x68);
        if (lVar17 != 0) {
          lVar15 = *(long *)(lVar17 + -8);
          uVar12 = uVar11;
          if (lVar15 <= (long)uVar11) goto LAB_00102191;
          if (*(long *)(lVar17 + uVar11 * 8) == 0) {
            cVar3 = *(char *)(lVar13 + 0x90);
          }
          else {
            ShaderRD::_compile_version_end((Version *)pVVar2,iVar5);
            cVar3 = *(char *)(lVar13 + 0x90);
          }
          if (cVar3 == '\0') {
            uVar14 = 0;
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x88);
            if (lVar13 == 0) goto LAB_00102170;
            lVar15 = *(long *)(lVar13 + -8);
            uVar12 = uVar16;
            if (lVar15 <= (long)uVar16) goto LAB_00102191;
            uVar14 = *(undefined8 *)(lVar13 + uVar16 * 8);
          }
          goto LAB_00101d26;
        }
LAB_001023b0:
        lVar15 = 0;
        uVar12 = uVar11;
        goto LAB_00102191;
      }
LAB_00102170:
      lVar15 = 0;
      uVar12 = uVar16;
LAB_00102191:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar15,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar13 = 0;
LAB_001023db:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar16,lVar13
               ,"p_variant","variant_defines.size()","",false,false);
    uVar14 = 0;
LAB_00101d26:
    uVar6 = RenderingDevice::render_pipeline_create
                      (uVar6,uVar14,uVar7,0xffffffffffffffff,5,(StrRange *)&local_118,
                       (StrRange *)&local_e8,&local_b8,local_68,0,0,local_128);
    lVar13 = local_d0;
    *(undefined8 *)(this + ((long)(int)uVar16 + 0x46) * 8 + 8) = uVar6;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar1 = (long *)(local_120 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    uVar6 = RenderingDevice::get_singleton();
    uVar11 = *(ulong *)(this + 0x230);
    if (*(long *)(this + 0xd0) == 0) {
      lVar13 = 0;
LAB_0010232f:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar16,
                 lVar13,"p_variant","variant_defines.size()","",false,false);
      uVar11 = extraout_RDX;
LAB_00102369:
      uVar7 = 0;
    }
    else {
      lVar13 = *(long *)(*(long *)(this + 0xd0) + -8);
      if (lVar13 <= (long)uVar16) goto LAB_0010232f;
      lVar13 = *(long *)(this + 0xe0);
      if (lVar13 == 0) goto LAB_00102170;
      lVar15 = *(long *)(lVar13 + -8);
      uVar12 = uVar16;
      if (lVar15 <= (long)uVar16) goto LAB_00102191;
      if (*(char *)(lVar13 + uVar16) != '\0') {
        if ((uVar11 == 0) || (*(uint *)(this + 0x18c) <= (uint)uVar11)) {
LAB_00102510:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar7 = 0;
          uVar11 = extraout_RDX_02;
          goto LAB_00101f1c;
        }
        lVar13 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x178) +
                          ((uVar11 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
        if (*(int *)(lVar13 + 0x98) != (int)(uVar11 >> 0x20)) {
          if (*(int *)(lVar13 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00102510;
        }
        iVar5 = (int)lVar13;
        if (*(char *)(lVar13 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)pVVar2);
          lVar15 = *(long *)(this + 0x130);
          if (lVar15 != 0) {
            lVar17 = 0;
            do {
              if (*(long *)(lVar15 + -8) <= lVar17) break;
              if (*(char *)(lVar15 + lVar17) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar5);
              }
              else {
                ShaderRD::_compile_version_start((Version *)pVVar2,iVar5);
              }
              lVar15 = *(long *)(this + 0x130);
              lVar17 = lVar17 + 1;
            } while (lVar15 != 0);
          }
        }
        lVar17 = *(long *)(this + 0xf0);
        if (lVar17 == 0) goto LAB_00102170;
        lVar15 = *(long *)(lVar17 + -8);
        if (lVar15 <= (long)uVar16) goto LAB_00102191;
        uVar11 = (ulong)*(uint *)(lVar17 + uVar16 * 4);
        lVar17 = *(long *)(lVar13 + 0x68);
        if (lVar17 == 0) goto LAB_001023b0;
        lVar15 = *(long *)(lVar17 + -8);
        uVar12 = uVar11;
        if (lVar15 <= (long)uVar11) goto LAB_00102191;
        if (*(long *)(lVar17 + uVar11 * 8) != 0) {
          ShaderRD::_compile_version_end((Version *)pVVar2,iVar5);
          uVar11 = extraout_RDX_00;
        }
        if (*(char *)(lVar13 + 0x90) != '\0') {
          lVar13 = *(long *)(lVar13 + 0x88);
          if (lVar13 != 0) {
            lVar15 = *(long *)(lVar13 + -8);
            uVar12 = uVar16;
            if (lVar15 <= (long)uVar16) goto LAB_00102191;
            uVar7 = *(undefined8 *)(lVar13 + uVar16 * 8);
            goto LAB_00101f1c;
          }
          goto LAB_00102170;
        }
        goto LAB_00102369;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar7 = 0;
      uVar11 = extraout_RDX_01;
    }
LAB_00101f1c:
    uVar16 = uVar16 + 1;
    RenderingDevice::shader_destroy_modules(uVar6,uVar7,uVar11);
  } while (uVar16 != 4);
  local_e0[0] = (undefined8 *)0x0;
  puVar8 = (undefined8 *)Memory::alloc_static(0x20,false);
  if (puVar8 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
    if (local_e0[0] == (undefined8 *)0x0) goto LAB_00101f84;
  }
  else {
    local_e0[0] = puVar8 + 2;
    *puVar8 = 1;
    puVar8[1] = 0xc;
  }
  if (1 < (ulong)local_e0[0][-2]) {
    if (local_e0[0] == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    __n = local_e0[0][-1];
    uVar16 = 0x10;
    if (__n != 0) {
      uVar16 = __n - 1 | __n - 1 >> 1;
      uVar16 = uVar16 | uVar16 >> 2;
      uVar16 = uVar16 | uVar16 >> 4;
      uVar16 = uVar16 | uVar16 >> 8;
      uVar16 = uVar16 | uVar16 >> 0x10;
      uVar16 = (uVar16 | uVar16 >> 0x20) + 0x11;
    }
    puVar10 = (undefined8 *)Memory::alloc_static(uVar16,false);
    puVar8 = local_e0[0];
    if (puVar10 == (undefined8 *)0x0) {
      _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                       "Parameter \"mem_new\" is null.",0,0);
    }
    else {
      __dest = puVar10 + 2;
      *puVar10 = 1;
      puVar10[1] = __n;
      memcpy(__dest,local_e0[0],__n);
      puVar10 = local_e0[0];
      LOCK();
      plVar1 = puVar8 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_e0[0] = __dest;
      if (*plVar1 == 0) {
        local_e0[0] = (undefined8 *)0x0;
        Memory::free_static(puVar10 + -2,false);
        local_e0[0] = __dest;
      }
    }
  }
LAB_00101f84:
  uVar6 = _LC74;
  *(undefined4 *)(local_e0[0] + 1) = 0x30002;
  *local_e0[0] = uVar6;
  uVar6 = RenderingDevice::get_singleton();
  uVar6 = RenderingDevice::index_buffer_create(uVar6,6,0,(StrRange *)&local_e8,0,0);
  *(undefined8 *)(this + 600) = uVar6;
  uVar6 = RenderingDevice::get_singleton();
  uVar6 = RenderingDevice::index_array_create(uVar6,*(undefined8 *)(this + 600),0,6);
  *(undefined8 *)(this + 0x260) = uVar6;
  pSVar9 = (SamplerState *)RenderingDevice::get_singleton();
  uStack_a0 = 0;
  uStack_9c = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = (undefined4)_LC76;
  uStack_a8 = (undefined4)((ulong)_LC76 >> 0x20);
  local_98 = 0;
  uStack_8e = 0;
  uStack_96 = 0x3f80;
  uStack_90 = 7;
  uStack_8c = 0;
  uStack_80 = 0;
  uStack_a4 = 2;
  local_88 = 0x60ad78ec;
  uStack_84 = 2;
  uVar6 = RenderingDevice::sampler_create(pSVar9);
  puVar8 = local_e0[0];
  *(undefined8 *)(this + 0x268) = uVar6;
  if (local_e0[0] != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_e0[0] + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0[0] = (undefined8 *)0x0;
      Memory::free_static(puVar8 + -2,false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_130);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCompositorRD::set_boot_image(Ref<Image> const&, Color const&, bool, bool) */

void __thiscall
RendererCompositorRD::set_boot_image
          (RendererCompositorRD *this,Ref *param_1,Color *param_2,bool param_3,bool param_4)

{
  Version *pVVar1;
  char *pcVar2;
  uint *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  SamplerState *pSVar13;
  long lVar14;
  long *plVar15;
  void *pvVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined1 local_158 [16];
  Vector<RenderingDevice::Uniform> *local_138;
  float local_120;
  float local_11c;
  Vector<RenderingDevice::Uniform> local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  long local_f8;
  Vector<RID> local_f0 [8];
  long local_e8 [2];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  long local_b8 [2];
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (cVar7 = Image::is_empty(), cVar7 != '\0')) goto LAB_00102818;
  iVar9 = RenderingDevice::get_singleton();
  iVar9 = RenderingDevice::screen_prepare_for_drawing(iVar9);
  if (iVar9 != 0) goto LAB_00102818;
  uVar11 = (**(code **)(**(long **)(this + 0x50) + 0x48))();
  (**(code **)(**(long **)(this + 0x50) + 0x58))(*(long **)(this + 0x50),uVar11,param_1);
  uVar12 = (**(code **)(**(long **)(this + 0x50) + 0x138))(*(long **)(this + 0x50),uVar11,0);
  local_78 = 0x200000000;
  local_a0 = __LC80;
  uStack_98 = _LC76;
  local_a8 = (ulong)CONCAT14(param_4,(uint)param_4);
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x3f800000;
  local_84 = 0;
  local_80 = 7;
  local_70 = 0;
  pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
  lVar14 = RenderingDevice::sampler_create(pSVar13);
  local_100 = 0;
  local_110 = 0;
  local_e8[0] = 0;
  local_108 = _LC82;
  if (lVar14 == 0) {
    local_d8 = _LC82;
    local_d0 = 0;
    local_c8 = uVar12;
LAB_00102977:
    local_b8[0] = 0;
    local_108 = local_d8;
    local_100 = local_d0;
    local_f8 = local_c8;
    Vector<RenderingDevice::Uniform>::push_back(local_118,&local_d8);
  }
  else {
    local_f8 = lVar14;
    Vector<RID>::push_back(local_f0,lVar14);
    Vector<RID>::push_back(local_f0,uVar12);
    local_d8 = local_108;
    local_f8 = 0;
    local_c8 = 0;
    local_d0 = local_100;
    local_b8[0] = 0;
    if (local_e8[0] == 0) goto LAB_00102977;
    CowData<RID>::_ref((CowData<RID> *)local_b8,(CowData *)local_e8);
    lVar18 = local_b8[0];
    Vector<RenderingDevice::Uniform>::push_back(local_118);
    if (lVar18 != 0) {
      LOCK();
      plVar15 = (long *)(lVar18 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        Memory::free_static((void *)(local_b8[0] + -0x10),false);
      }
    }
  }
  local_138 = local_118;
  uVar12 = RenderingDevice::get_singleton();
  uVar19 = *(ulong *)(this + 0x230);
  if (*(long *)(this + 0xd0) == 0) {
    lVar18 = 0;
LAB_00102e73:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar18,
               "p_variant","variant_defines.size()","",false,false);
LAB_00102eac:
    uVar17 = 0;
  }
  else {
    lVar18 = *(long *)(*(long *)(this + 0xd0) + -8);
    if (lVar18 < 1) goto LAB_00102e73;
    pcVar2 = *(char **)(this + 0xe0);
    if (pcVar2 == (char *)0x0) {
LAB_00102f48:
      lVar18 = 0;
LAB_00102f4b:
      uVar19 = 0;
LAB_00102f68:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar19,lVar18,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar18 = *(long *)(pcVar2 + -8);
    if (lVar18 < 1) goto LAB_00102f4b;
    if (*pcVar2 != '\0') {
      if ((uVar19 == 0) || (*(uint *)(this + 0x18c) <= (uint)uVar19)) {
LAB_00103020:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar17 = 0;
        goto LAB_00102ab7;
      }
      lVar21 = ((uVar19 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0xa0 +
               *(long *)(*(long *)(this + 0x178) +
                        ((uVar19 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
      if (*(int *)(lVar21 + 0x98) != (int)(uVar19 >> 0x20)) {
        if (*(int *)(lVar21 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00103020;
      }
      pVVar1 = (Version *)(this + 0xb8);
      iVar9 = (int)lVar21;
      if (*(char *)(lVar21 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar1);
        lVar18 = *(long *)(this + 0x130);
        if (lVar18 != 0) {
          lVar20 = 0;
          do {
            if (*(long *)(lVar18 + -8) <= lVar20) break;
            if (*(char *)(lVar18 + lVar20) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar1,iVar9);
            }
            else {
              ShaderRD::_compile_version_start(pVVar1,iVar9);
            }
            lVar18 = *(long *)(this + 0x130);
            lVar20 = lVar20 + 1;
          } while (lVar18 != 0);
        }
      }
      puVar3 = *(uint **)(this + 0xf0);
      if (puVar3 == (uint *)0x0) goto LAB_00102f48;
      lVar18 = *(long *)(puVar3 + -2);
      if (lVar18 < 1) goto LAB_00102f4b;
      uVar19 = (ulong)*puVar3;
      lVar20 = *(long *)(lVar21 + 0x68);
      if (lVar20 == 0) {
        lVar18 = 0;
        goto LAB_00102f68;
      }
      lVar18 = *(long *)(lVar20 + -8);
      if (lVar18 <= (long)uVar19) goto LAB_00102f68;
      if (*(long *)(lVar20 + uVar19 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar1,iVar9);
      }
      if (*(char *)(lVar21 + 0x90) != '\0') {
        puVar4 = *(undefined8 **)(lVar21 + 0x88);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00102f48;
        lVar18 = puVar4[-1];
        if (0 < lVar18) {
          uVar17 = *puVar4;
          goto LAB_00102ab7;
        }
        goto LAB_00102f4b;
      }
      goto LAB_00102eac;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    uVar17 = 0;
  }
LAB_00102ab7:
  uVar12 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar12,local_138,uVar17,0,0);
  if (local_e8[0] != 0) {
    LOCK();
    plVar15 = (long *)(local_e8[0] + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      Memory::free_static((void *)(local_e8[0] + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_110);
  local_58 = (**(code **)(*DisplayServer::singleton + 0x588))();
  local_68 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
  iVar9 = Image::get_height();
  iVar10 = Image::get_width();
  local_58 = 0;
  local_50[0] = CONCAT44((float)iVar9,(float)iVar10);
  if (param_3) {
    plVar15 = (long *)OS::get_singleton();
    local_158 = (**(code **)(*plVar15 + 0xa0))(plVar15,&local_68,local_50);
  }
  else {
    local_60 = CONCAT44(((float)((ulong)local_68 >> 0x20) - (float)iVar9) * _LC83._4_4_,
                        ((float)local_68 - (float)iVar10) * (float)_LC83);
    uVar17 = Vector2::floor();
    local_158._0_4_ = (float)uVar17 + 0.0;
    local_158._12_4_ = (float)iVar9;
    local_158._8_4_ = (float)iVar10;
    local_158._4_4_ = (float)((ulong)uVar17 >> 0x20) + 0.0;
  }
  auVar22._8_8_ = local_68;
  auVar22._0_8_ = local_68;
  auVar22 = divps(local_158,auVar22);
  iVar9 = RenderingDevice::get_singleton();
  pvVar16 = (void *)RenderingDevice::draw_list_begin_for_screen(iVar9,(Color *)0x0);
  uVar17 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_render_pipeline(uVar17,pvVar16,*(undefined8 *)(this + 0x250));
  uVar17 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_index_array(uVar17,pvVar16,*(undefined8 *)(this + 0x260));
  uVar17 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set(uVar17,pvVar16,uVar12,0);
  iVar9 = RenderingDevice::get_singleton();
  iVar9 = RenderingDevice::screen_get_pre_rotation_degrees(iVar9);
  sincosf((float)-iVar9 * __LC84,&local_11c,&local_120);
  *(undefined8 *)(this + 0xb0) = 0;
  uVar17 = _LC86;
  local_158._0_8_ = auVar22._0_8_;
  local_158._8_8_ = auVar22._8_8_;
  *(ulong *)(this + 0x88) = CONCAT44(local_120,local_11c);
  uVar6 = _LC86;
  uVar12 = __LC85;
  *(undefined8 *)(this + 0xa8) = uVar17;
  *(undefined8 *)(this + 0x68) = uVar12;
  *(undefined8 *)(this + 0x70) = uVar6;
  *(undefined8 *)(this + 0x78) = local_158._0_8_;
  *(undefined8 *)(this + 0x80) = local_158._8_8_;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  lVar18 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_set_push_constant(lVar18,pvVar16,(int)this + 0x68);
  lVar18 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_draw(lVar18,SUB81(pvVar16,0),1,1);
  RenderingDevice::get_singleton();
  RenderingDevice::draw_list_end();
  bVar8 = (bool)RenderingDevice::get_singleton();
  RenderingDevice::swap_buffers(bVar8);
  (**(code **)(**(long **)(this + 0x50) + 0x50))(*(long **)(this + 0x50),uVar11);
  uVar11 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar11,lVar14);
LAB_00102818:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererCompositorRD::blit_render_targets_to_screen(int, BlitToScreen const*, int) */

void __thiscall
RendererCompositorRD::blit_render_targets_to_screen
          (RendererCompositorRD *this,int param_1,BlitToScreen *param_2,int param_3)

{
  long *plVar1;
  HashMap<RID,RID,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RID>>>
  *this_00;
  Version *pVVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  code *pcVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  void *pvVar20;
  BlitToScreen *pBVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  long in_FS_OFFSET;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_e0;
  float local_dc [3];
  long local_d0;
  Vector<RenderingDevice::Uniform> local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  long local_a8;
  Vector<RID> local_a0 [8];
  long local_98 [2];
  undefined8 local_88;
  undefined1 local_80;
  long local_78;
  long local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar17 = RenderingDevice::get_singleton();
  iVar17 = RenderingDevice::screen_prepare_for_drawing(iVar17);
  if (iVar17 == 0) {
    iVar17 = RenderingDevice::get_singleton();
    local_58 = __LC58;
    uStack_50 = _UNK_00106c98;
    pvVar20 = (void *)RenderingDevice::draw_list_begin_for_screen
                                (iVar17,(Color *)(ulong)(uint)param_1);
    if (pvVar20 == (void *)0xffffffffffffffff) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("blit_render_targets_to_screen",
                         "servers/rendering/renderer_rd/renderer_compositor_rd.cpp",0x2f,
                         "Condition \"draw_list == RD::INVALID_ID\" is true.",0,0);
        return;
      }
    }
    else {
      if (0 < param_3) {
        pBVar21 = param_2 + (long)param_3 * 0x50;
        do {
          local_d0 = RendererRD::TextureStorage::render_target_get_rd_texture
                               (*(undefined8 *)(this + 0x50),*(undefined8 *)param_2);
          if (local_d0 == 0) {
            _err_print_error("blit_render_targets_to_screen",
                             "servers/rendering/renderer_rd/renderer_compositor_rd.cpp",0x33,
                             "Condition \"rd_texture.is_null()\" is true. Continuing.",0,0);
          }
          else {
            this_00 = (HashMap<RID,RID,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RID>>>
                       *)(this + 0x270);
            if ((*(long *)(this + 0x278) != 0) && (*(int *)(this + 0x29c) != 0)) {
              uVar30 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x298) * 4));
              lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x298) * 8);
              uVar22 = local_d0 * 0x3ffff - 1;
              uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
              uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
              uVar22 = uVar22 >> 0x16 ^ uVar22;
              uVar28 = uVar22 & 0xffffffff;
              if ((int)uVar22 == 0) {
                uVar28 = 1;
              }
              auVar35._8_8_ = 0;
              auVar35._0_8_ = uVar28 * lVar25;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar30;
              lVar26 = SUB168(auVar35 * auVar10,8);
              uVar29 = *(uint *)(*(long *)(this + 0x280) + lVar26 * 4);
              iVar17 = SUB164(auVar35 * auVar10,8);
              if (uVar29 != 0) {
                uVar31 = 0;
                while ((uVar29 != (uint)uVar28 ||
                       (local_d0 !=
                        *(long *)(*(long *)(*(long *)(this + 0x278) + lVar26 * 8) + 0x10)))) {
                  uVar31 = uVar31 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)(iVar17 + 1) * lVar25;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar30;
                  lVar26 = SUB168(auVar7 * auVar11,8);
                  uVar29 = *(uint *)(*(long *)(this + 0x280) + lVar26 * 4);
                  iVar17 = SUB164(auVar7 * auVar11,8);
                  if ((uVar29 == 0) ||
                     (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar29 * lVar25, auVar12._8_8_ = 0,
                     auVar12._0_8_ = uVar30, auVar9._8_8_ = 0,
                     auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                      (ulong)*(uint *)(this + 0x298) * 4) + iVar17)
                                           - SUB164(auVar8 * auVar12,8)) * lVar25, auVar13._8_8_ = 0
                     , auVar13._0_8_ = uVar30, SUB164(auVar9 * auVar13,8) < uVar31))
                  goto LAB_001032c0;
                }
                uVar23 = RenderingDevice::get_singleton();
                puVar24 = (undefined8 *)
                          HashMap<RID,RID,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RID>>>
                          ::operator[](this_00,(RID *)&local_d0);
                cVar15 = RenderingDevice::uniform_set_is_valid(uVar23,*puVar24);
                if (cVar15 != '\0') goto LAB_001034c4;
              }
            }
LAB_001032c0:
            lVar25 = local_d0;
            local_b0 = 0;
            local_c0 = 0;
            local_a8 = *(long *)(this + 0x268);
            local_98[0] = 0;
            local_b8 = _LC82;
            if (local_a8 == 0) {
              local_80 = 0;
              local_88 = _LC82;
              local_78 = local_d0;
LAB_0010332d:
              local_68[0] = 0;
              local_b8 = local_88;
              local_b0 = local_80;
              local_a8 = local_78;
              Vector<RenderingDevice::Uniform>::push_back(local_c8,&local_88);
            }
            else {
              Vector<RID>::push_back(local_a0);
              Vector<RID>::push_back(local_a0,lVar25);
              local_88 = local_b8;
              local_a8 = 0;
              local_78 = 0;
              local_80 = local_b0;
              local_68[0] = 0;
              if (local_98[0] == 0) goto LAB_0010332d;
              CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
              lVar25 = local_68[0];
              Vector<RenderingDevice::Uniform>::push_back(local_c8);
              if (lVar25 != 0) {
                LOCK();
                plVar1 = (long *)(lVar25 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_68[0] + -0x10),false);
                }
              }
            }
            uVar23 = RenderingDevice::get_singleton();
            uVar22 = *(ulong *)(this + 0x230);
            if (*(long *)(this + 0xd0) == 0) {
              lVar25 = 0;
LAB_00103913:
              _err_print_index_error
                        ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,
                         lVar25,"p_variant","variant_defines.size()","",false,false);
              uVar27 = 0;
            }
            else {
              lVar25 = *(long *)(*(long *)(this + 0xd0) + -8);
              if (lVar25 < 1) goto LAB_00103913;
              pcVar5 = *(char **)(this + 0xe0);
              if (pcVar5 == (char *)0x0) {
LAB_00103870:
                lVar25 = 0;
LAB_00103873:
                uVar22 = 0;
LAB_00103890:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,uVar22,lVar25,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar14 = (code *)invalidInstructionException();
                (*pcVar14)();
              }
              lVar25 = *(long *)(pcVar5 + -8);
              if (lVar25 < 1) goto LAB_00103873;
              if (*pcVar5 == '\0') {
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xa7,
                                 "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                 ,0,0);
                uVar27 = 0;
                goto LAB_0010346e;
              }
              if ((uVar22 == 0) || (*(uint *)(this + 0x18c) <= (uint)uVar22)) {
LAB_00103990:
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xaa,"Parameter \"version\" is null.",0,0);
                uVar27 = 0;
              }
              else {
                lVar26 = ((uVar22 & 0xffffffff) % (ulong)*(uint *)(this + 0x188)) * 0xa0 +
                         *(long *)(*(long *)(this + 0x178) +
                                  ((uVar22 & 0xffffffff) / (ulong)*(uint *)(this + 0x188)) * 8);
                if (*(int *)(lVar26 + 0x98) != (int)(uVar22 >> 0x20)) {
                  if (*(int *)(lVar26 + 0x98) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00103990;
                }
                pVVar2 = (Version *)(this + 0xb8);
                iVar17 = (int)lVar26;
                if (*(char *)(lVar26 + 0x91) != '\0') {
                  ShaderRD::_initialize_version(pVVar2);
                  lVar25 = *(long *)(this + 0x130);
                  if (lVar25 != 0) {
                    lVar32 = 0;
                    do {
                      if (*(long *)(lVar25 + -8) <= lVar32) break;
                      if (*(char *)(lVar25 + lVar32) == '\0') {
                        ShaderRD::_allocate_placeholders(pVVar2,iVar17);
                      }
                      else {
                        ShaderRD::_compile_version_start(pVVar2,iVar17);
                      }
                      lVar25 = *(long *)(this + 0x130);
                      lVar32 = lVar32 + 1;
                    } while (lVar25 != 0);
                  }
                }
                puVar6 = *(uint **)(this + 0xf0);
                if (puVar6 == (uint *)0x0) goto LAB_00103870;
                lVar25 = *(long *)(puVar6 + -2);
                if (lVar25 < 1) goto LAB_00103873;
                uVar22 = (ulong)*puVar6;
                lVar32 = *(long *)(lVar26 + 0x68);
                if (lVar32 == 0) {
                  lVar25 = 0;
                  goto LAB_00103890;
                }
                lVar25 = *(long *)(lVar32 + -8);
                if (lVar25 <= (long)uVar22) goto LAB_00103890;
                if (*(long *)(lVar32 + uVar22 * 8) == 0) {
                  cVar15 = *(char *)(lVar26 + 0x90);
                }
                else {
                  ShaderRD::_compile_version_end(pVVar2,iVar17);
                  cVar15 = *(char *)(lVar26 + 0x90);
                }
                if (cVar15 == '\0') {
                  uVar27 = 0;
                }
                else {
                  puVar24 = *(undefined8 **)(lVar26 + 0x88);
                  if (puVar24 == (undefined8 *)0x0) goto LAB_00103870;
                  lVar25 = puVar24[-1];
                  if (lVar25 < 1) goto LAB_00103873;
                  uVar27 = *puVar24;
                }
              }
            }
LAB_0010346e:
            uVar23 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                               (uVar23,local_c8,uVar27,0);
            puVar24 = (undefined8 *)
                      HashMap<RID,RID,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RID>>>
                      ::operator[](this_00,(RID *)&local_d0);
            *puVar24 = uVar23;
            if (local_98[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_98[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_98[0] + -0x10),false);
              }
            }
            CowData<RenderingDevice::Uniform>::_unref
                      ((CowData<RenderingDevice::Uniform> *)&local_c0);
LAB_001034c4:
            iVar17 = RenderingDevice::get_singleton();
            uVar22 = 2;
            iVar17 = RenderingDevice::screen_get_height(iVar17);
            iVar18 = RenderingDevice::get_singleton();
            iVar18 = RenderingDevice::screen_get_width(iVar18);
            if (param_2[0x30] == (BlitToScreen)0x0) {
              uVar22 = (ulong)(byte)param_2[0x28];
            }
            uVar23 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_render_pipeline
                      (uVar23,pvVar20,*(undefined8 *)(this + uVar22 * 8 + 0x238));
            uVar23 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_index_array
                      (uVar23,pvVar20,*(undefined8 *)(this + 0x260));
            uVar23 = RenderingDevice::get_singleton();
            puVar24 = (undefined8 *)
                      HashMap<RID,RID,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RID>>>
                      ::operator[](this_00,(RID *)&local_d0);
            RenderingDevice::draw_list_bind_uniform_set(uVar23,pvVar20,*puVar24,0);
            iVar19 = RenderingDevice::get_singleton();
            iVar19 = RenderingDevice::screen_get_pre_rotation_degrees(iVar19);
            sincosf((float)-iVar19 * __LC84,local_dc,&local_e0);
            *(ulong *)(this + 0x88) = CONCAT44(local_e0,local_dc[0]);
            if ((iVar19 * 0x5b05b05b + 0x2d82d80U >> 2 | iVar19 * -0x40000000) < 0x16c16c1) {
              auVar33._0_4_ = (float)iVar18;
              auVar33._4_4_ = (float)iVar17;
              auVar33._8_4_ = (float)iVar18;
              auVar33._12_4_ = (float)iVar17;
            }
            else {
              auVar33._0_4_ = (float)iVar17;
              auVar33._4_4_ = (float)iVar18;
              auVar33._8_4_ = (float)iVar17;
              auVar33._12_4_ = (float)iVar18;
            }
            auVar35 = *(undefined1 (*) [16])(param_2 + 0x18);
            uVar4 = *(undefined4 *)(param_2 + 0x2c);
            *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_2 + 8);
            uVar23 = *(undefined8 *)param_2;
            *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_2 + 0xc);
            *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_2 + 0x10);
            uVar3 = *(undefined4 *)(param_2 + 0x14);
            *(undefined4 *)(this + 0xb0) = uVar4;
            lVar25 = **(long **)(this + 0x50);
            *(undefined4 *)(this + 0x74) = uVar3;
            auVar34._0_4_ = (float)auVar35._0_4_;
            auVar34._4_4_ = (float)auVar35._4_4_;
            auVar34._8_4_ = (float)auVar35._8_4_;
            auVar34._12_4_ = (float)auVar35._12_4_;
            auVar35 = divps(auVar34,auVar33);
            *(undefined1 (*) [16])(this + 0x78) = auVar35;
            *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_2 + 0x34);
            *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_2 + 0x38);
            *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_2 + 0x3c);
            *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_2 + 0x40);
            *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_2 + 0x44);
            *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_2 + 0x48);
            bVar16 = (**(code **)(lVar25 + 0x278))(*(long **)(this + 0x50),uVar23);
            *(uint *)(this + 0xb4) = (uint)bVar16;
            lVar25 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar25,pvVar20,(int)this + 0x68);
            lVar25 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_draw(lVar25,SUB81(pvVar20,0),1,1);
          }
          param_2 = param_2 + 0x50;
        } while (param_2 != pBVar21);
      }
      RenderingDevice::get_singleton();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        RenderingDevice::draw_list_end();
        return;
      }
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCompositorRD::get_utilities() */

undefined8 __thiscall RendererCompositorRD::get_utilities(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x28);
}



/* RendererCompositorRD::get_light_storage() */

undefined8 __thiscall RendererCompositorRD::get_light_storage(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x30);
}



/* RendererCompositorRD::get_material_storage() */

undefined8 __thiscall RendererCompositorRD::get_material_storage(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x38);
}



/* RendererCompositorRD::get_mesh_storage() */

undefined8 __thiscall RendererCompositorRD::get_mesh_storage(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x40);
}



/* RendererCompositorRD::get_particles_storage() */

undefined8 __thiscall RendererCompositorRD::get_particles_storage(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x48);
}



/* RendererCompositorRD::get_texture_storage() */

undefined8 __thiscall RendererCompositorRD::get_texture_storage(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x50);
}



/* RendererCompositorRD::get_fog() */

undefined8 __thiscall RendererCompositorRD::get_fog(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x58);
}



/* RendererCompositorRD::get_canvas() */

undefined8 __thiscall RendererCompositorRD::get_canvas(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x20);
}



/* RendererCompositorRD::get_scene() */

undefined8 __thiscall RendererCompositorRD::get_scene(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* RendererCompositorRD::gl_end_frame(bool) */

void RendererCompositorRD::gl_end_frame(bool param_1)

{
  return;
}



/* RendererCompositorRD::get_frame_number() const */

undefined8 RendererCompositorRD::get_frame_number(void)

{
  return frame;
}



/* RendererCompositorRD::get_frame_delta_time() const */

undefined8 __thiscall RendererCompositorRD::get_frame_delta_time(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x2a8);
}



/* RendererCompositorRD::get_total_time() const */

undefined8 __thiscall RendererCompositorRD::get_total_time(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x2a0);
}



/* RendererCompositorRD::can_create_resources_async() const */

undefined8 RendererCompositorRD::can_create_resources_async(void)

{
  return 1;
}



/* BlitShaderRD::~BlitShaderRD() */

void __thiscall BlitShaderRD::~BlitShaderRD(BlitShaderRD *this)

{
  *(undefined ***)this = &PTR__BlitShaderRD_00105fe0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* BlitShaderRD::~BlitShaderRD() */

void __thiscall BlitShaderRD::~BlitShaderRD(BlitShaderRD *this)

{
  *(undefined ***)this = &PTR__BlitShaderRD_00105fe0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* RendererCompositorRD::get_gi() */

long __thiscall RendererCompositorRD::get_gi(RendererCompositorRD *this)

{
  if (*(long *)(this + 0x60) != 0) {
    return *(long *)(this + 0x60) + 0xb50;
  }
  _err_print_error("get_gi","servers/rendering/renderer_rd/renderer_compositor_rd.h",0x73,
                   "Parameter \"scene\" is null.",0,0);
  return 0;
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



/* RendererCompositorRD::initialize() [clone .cold] */

void RendererCompositorRD::initialize(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00104438) */
/* WARNING: Removing unreachable block (ram,0x00104568) */
/* WARNING: Removing unreachable block (ram,0x00104730) */
/* WARNING: Removing unreachable block (ram,0x00104574) */
/* WARNING: Removing unreachable block (ram,0x0010457e) */
/* WARNING: Removing unreachable block (ram,0x00104710) */
/* WARNING: Removing unreachable block (ram,0x0010458a) */
/* WARNING: Removing unreachable block (ram,0x00104594) */
/* WARNING: Removing unreachable block (ram,0x001046f0) */
/* WARNING: Removing unreachable block (ram,0x001045a0) */
/* WARNING: Removing unreachable block (ram,0x001045aa) */
/* WARNING: Removing unreachable block (ram,0x001046d0) */
/* WARNING: Removing unreachable block (ram,0x001045b6) */
/* WARNING: Removing unreachable block (ram,0x001045c0) */
/* WARNING: Removing unreachable block (ram,0x001046b0) */
/* WARNING: Removing unreachable block (ram,0x001045cc) */
/* WARNING: Removing unreachable block (ram,0x001045d6) */
/* WARNING: Removing unreachable block (ram,0x00104690) */
/* WARNING: Removing unreachable block (ram,0x001045e2) */
/* WARNING: Removing unreachable block (ram,0x001045ec) */
/* WARNING: Removing unreachable block (ram,0x00104670) */
/* WARNING: Removing unreachable block (ram,0x001045f4) */
/* WARNING: Removing unreachable block (ram,0x0010460a) */
/* WARNING: Removing unreachable block (ram,0x00104616) */
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
/* HashMap<RID, RID, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, RID> > >::operator[](RID const&) */

undefined1  [16] __thiscall
HashMap<RID,RID,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RID>>>
::operator[](HashMap<RID,RID,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RID>>>
             *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  int iVar42;
  uint uVar43;
  long lVar44;
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
  long lVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_b0;
  void *local_90;
  
  local_90 = *(void **)(this + 8);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  lVar56 = *(long *)param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar39 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_90 == (void *)0x0) {
    uVar39 = uVar55 * 4;
    uVar38 = uVar55 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    lStack_b0 = 0x104e52;
    local_90 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = local_90;
    if (uVar47 == 0) {
      iVar42 = *(int *)(this + 0x2c);
      lVar56 = *(long *)param_1;
      if (local_90 == (void *)0x0) goto LAB_0010496b;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_90 + uVar38)) &&
         (local_90 < (void *)((long)pvVar3 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_90 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar55 != uVar39);
        iVar42 = *(int *)(this + 0x2c);
        lVar56 = *(long *)param_1;
      }
      else {
        memset(pvVar3,0,uVar39);
        lStack_b0 = 0x104e9a;
        memset(local_90,0,uVar38);
        iVar42 = *(int *)(this + 0x2c);
        lVar56 = *(long *)param_1;
      }
    }
    if (iVar42 != 0) {
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00104d23;
    }
  }
  else {
    iVar42 = *(int *)(this + 0x2c);
    if (iVar42 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = lVar56 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar54 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar54 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar54 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar55;
      lVar44 = SUB168(auVar4 * auVar20,8);
      uVar43 = *(uint *)(lVar52 + lVar44 * 4);
      uVar53 = SUB164(auVar4 * auVar20,8);
      if (uVar43 != 0) {
        uVar50 = 0;
        lVar45 = lVar44;
        do {
          if (((uint)uVar54 == uVar43) &&
             (lVar56 == *(long *)(*(long *)((long)local_90 + lVar44 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_90 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar45;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar53 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar55;
          lVar44 = SUB168(auVar5 * auVar21,8);
          uVar43 = *(uint *)(lVar52 + lVar44 * 4);
          uVar53 = SUB164(auVar5 * auVar21,8);
        } while ((uVar43 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar43 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar55, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar55, lVar45 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00104d23:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar39 * 4));
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = lVar56 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar54 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar54 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar54 * lVar46;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar51;
      lVar44 = SUB168(auVar16 * auVar32,8);
      uVar47 = *(uint *)(lVar52 + lVar44 * 4);
      uVar43 = SUB164(auVar16 * auVar32,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar45 = lVar44;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(long *)(*(long *)((long)local_90 + lVar44 * 8) + 0x10) == lVar56)) {
            pauVar41 = *(undefined1 (**) [16])((long)local_90 + (ulong)uVar43 * 8);
            *(undefined8 *)(pauVar41[1] + 8) = 0;
            lStack_b0 = lVar45;
            goto LAB_00104d04;
          }
          uVar53 = uVar53 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar43 + 1) * lVar46;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar51;
          lVar44 = SUB168(auVar17 * auVar33,8);
          uVar47 = *(uint *)(lVar52 + lVar44 * 4);
          uVar43 = SUB164(auVar17 * auVar33,8);
        } while ((uVar47 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar47 * lVar46, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar51, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar39 * 4) + uVar43) -
                            SUB164(auVar18 * auVar34,8)) * lVar46, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, lVar45 = SUB168(auVar19 * auVar35,8),
                uVar53 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_0010496b:
  if ((float)uVar55 * __LC36 < (float)(iVar42 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104d04;
    }
    uVar39 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar43 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar39 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar38 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar3 = *(void **)(this + 0x10);
    uVar39 = uVar38 * 4;
    uVar55 = uVar38 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar38 != uVar39);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar43 != 0) {
      uVar39 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar3 + uVar39 * 4);
        if (uVar47 != 0) {
          lVar56 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar47 * lVar52;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar55;
          lVar46 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar56 + lVar46 * 4);
          iVar42 = SUB164(auVar8 * auVar24,8);
          uVar50 = *puVar1;
          uVar40 = *(undefined8 *)((long)local_90 + uVar39 * 8);
          while (uVar50 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar50 * lVar52;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar53 + iVar42) - SUB164(auVar9 * auVar25,8)) * lVar52;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            uVar37 = SUB164(auVar10 * auVar26,8);
            uVar48 = uVar40;
            if (uVar37 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar40;
              uVar47 = uVar50;
              uVar49 = uVar37;
            }
            uVar49 = uVar49 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar42 + 1) * lVar52;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            lVar46 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar56 + lVar46 * 4);
            iVar42 = SUB164(auVar11 * auVar27,8);
            uVar40 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar43);
      Memory::free_static(local_90,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar40 = *(undefined8 *)param_1;
  pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar41 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar41[1] + 8) = 0;
  *(undefined8 *)pauVar41[1] = uVar40;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar2 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar2;
  }
  lVar56 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar39 = *(long *)param_1 * 0x3ffff - 1;
  uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
  uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
  uVar39 = uVar39 >> 0x16 ^ uVar39;
  uVar55 = uVar39 & 0xffffffff;
  if ((int)uVar39 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar47);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar55 * lVar52;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar39;
  lStack_b0 = SUB168(auVar12 * auVar28,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar56 + lStack_b0 * 4);
  iVar42 = SUB164(auVar12 * auVar28,8);
  uVar43 = *puVar1;
  pauVar36 = pauVar41;
  while (uVar43 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar43 * lVar52;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar39;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar47 + iVar42) - SUB164(auVar13 * auVar29,8)) * lVar52;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar39;
    uVar53 = SUB164(auVar14 * auVar30,8);
    pauVar57 = pauVar36;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar43;
      puVar2 = (undefined8 *)(lVar46 + lStack_b0 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar42 + 1) * lVar52;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar39;
    lStack_b0 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar56 + lStack_b0 * 4);
    iVar42 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar57;
    uVar43 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lStack_b0 * 8) = pauVar36;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104d04:
  auVar59._8_8_ = lStack_b0;
  auVar59._0_8_ = pauVar41[1] + 8;
  return auVar59;
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
LAB_001053f0:
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
  if (lVar10 == 0) goto LAB_001053f0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001052c9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001052c9;
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
    goto LAB_00105446;
  }
  if (lVar10 == lVar7) {
LAB_0010536f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00105446:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010535a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010536f;
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
LAB_0010535a:
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
LAB_00105700:
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
  if (lVar7 == 0) goto LAB_00105700;
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
LAB_0010566c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00105601;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010566c;
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
LAB_00105601:
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
LAB_00105b70:
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
  if (lVar11 == 0) goto LAB_00105b70;
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
LAB_00105adc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_00105a73;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00105adc;
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
  uVar3 = _LC53;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 4);
LAB_00105a73:
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
LAB_00105f10:
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
  if (lVar11 == 0) goto LAB_00105f10;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00105da1:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00105da1;
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
    goto LAB_00105f66;
  }
  if (lVar11 == lVar9) {
LAB_00105e83:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00105f66:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00105e60;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00105e83;
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
  uVar4 = _LC79;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00105e60:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* BlitShaderRD::~BlitShaderRD() */

void __thiscall BlitShaderRD::~BlitShaderRD(BlitShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



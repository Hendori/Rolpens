
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



/* RendererRD::VRS::~VRS() */

void __thiscall RendererRD::VRS::~VRS(VRS *this)

{
  ShaderRD::version_free(this,*(undefined8 *)(this + 0x178));
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 0x2b8));
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 0x180));
  *(undefined ***)this = &PTR__VrsShaderRD_00103a20;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* RendererRD::VRS::get_vrs_texture_size(Vector2i) const */

undefined8 __thiscall RendererRD::VRS::get_vrs_texture_size(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = RenderingDevice::get_singleton();
  iVar3 = RenderingDevice::limit_get(uVar5,0x2a);
  uVar5 = RenderingDevice::get_singleton();
  iVar4 = RenderingDevice::limit_get(uVar5,0x2b);
  uVar1 = (ulong)(uint)((int)param_2 >> 0x1f) << 0x20 | param_2 & 0xffffffff;
  uVar2 = (ulong)(uint)((long)param_2 >> 0x3f) << 0x20 | param_2 >> 0x20;
  return CONCAT44(((int)((long)uVar2 / (long)iVar4) + 1) -
                  (uint)((int)((long)uVar2 % (long)iVar4) == 0),
                  ((int)((long)uVar1 / (long)iVar3) + 1) -
                  (uint)((int)((long)uVar1 % (long)iVar3) == 0));
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::VRS::VRS() */

void __thiscall RendererRD::VRS::VRS(VRS *this)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  PipelineCacheRD *this_00;
  long in_FS_OFFSET;
  long local_148;
  Vector<String> local_138 [8];
  undefined8 local_130 [2];
  long local_120;
  long local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [12];
  undefined8 local_fc;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  ulong uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  undefined1 local_68;
  undefined4 local_64;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this_00 = (PipelineCacheRD *)(this + 0x180);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD((ShaderRD *)this);
  *(undefined ***)this = &PTR__VrsShaderRD_00103a20;
  ShaderRD::setup((char *)this,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#extension GL_EXT_multiview : enable\n#define ViewIndex gl_ViewIndex\n#else \n#define ViewIndex 0\n#endif \n#endif \n\n#ifdef USE_MULTIVIEW\nlayout(location = 0) out vec3 uv_interp;\n#else\nlayout(location = 0) out vec2 uv_interp;\n#endif\n\nlayout(push_constant, std430) uniform Params {\n\tfloat max_texel_factor;\n\tfloat res1;\n\tfloat res2;\n\tfloat res3;\n}\nparams;\n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -1.0), vec2(-1.0, 3.0), vec2(3.0, -1.0));\n\tgl_Position = vec4(base_arr[gl_VertexIndex], 0.0, 1.0);\n\tuv_interp.xy = clamp(gl_Position.xy, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n#ifdef USE_MULTIVIEW\n\tuv_interp.z = ViewIndex;\n#endif\n}\n\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#extension GL_EXT_multiview : enable\n#define ViewIndex gl_ViewIndex\n#else \n#define ViewIndex 0\n#endif \n#endif \n\n#ifdef USE_MULTIVIEW\nlayout(location = 0) in vec3 uv_interp;\nlayout(set = 0, binding = 0) uniform sampler2DArray source_color;\n#else /* USE_MULTIVIEW */\nlayout(location = 0) in vec2 uv_interp;\nlayout(set = 0, binding = 0) uniform sampler2D source_color;\n#endif /* USE_MULTIVIEW */\n\nlayout(location = 0) out uint frag_color;\n\nlayout(push_constant, std430) uniform Params {\n\tfloat max_texel_factor;\n\tfloat res1;\n\tfloat res2;\n\tfloat res3;\n}\nparams;\n\nvoid main() {\n#ifdef USE_MULTIVIEW\n\tvec3 uv = uv_interp;\n#else\n\tvec2 uv = uv_interp;\n#endif\n\n\t\n\tvec4 color = textureLod(source_color, uv, 0.0);\n\n\t\n\tcolor.r = clamp(floor(color.r * params.max_texel_factor + 0.1), 0.0, params.max_texel_factor);\n\tcolor.g = clamp(floor(color.g * params.max_texel_factor + 0.1), 0.0, params.max_texel_factor);\n\n\t\n\tif (color.r < (color.g - 1.0)) {\n\t\tcolor.r = color.g - 1.0;\n\t}\n\tif (color.g < (color.r - 1.0)) {\n\t\tcolor.g = color.r - 1.0;\n\t}\n\n\t\n\tfrag_color = int(color.r + 0.1) << 2;\n\tfrag_color += int(color.g + 0.1);\n}\n"
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x178) = 0;
  PipelineCacheRD::PipelineCacheRD(this_00);
  PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)(this + 0x2b8));
  local_130[0] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  local_b8._0_8_ = &_LC29;
  local_b8._8_8_ = 1;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back(local_138);
  if (CONCAT44(uStack_e4,local_e8) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar11 = CONCAT44(uStack_e4,local_e8);
      local_e8 = 0;
      uStack_e4 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  local_e8 = 0;
  uStack_e4 = 0;
  local_b8._0_8_ = "\n#define USE_MULTIVIEW\n";
  local_b8._8_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back(local_138);
  if (CONCAT44(uStack_e4,local_e8) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar11 = CONCAT44(uStack_e4,local_e8);
      local_e8 = 0;
      uStack_e4 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  uStack_e0 = 0;
  uStack_dc = 0;
  local_118 = 0;
  local_b8 = ZEXT816(0x101f71);
  String::parse_latin1((StrRange *)&local_118);
  ShaderRD::initialize((Vector *)this,local_138,(Vector *)&local_118);
  lVar11 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
  cVar5 = (**(code **)(*RendererCompositorRD::singleton + 0xa8))();
  if (cVar5 == '\0') {
    ShaderRD::set_variant_enabled((int)this,true);
  }
  uVar12 = 0;
  uVar7 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x178) = uVar7;
  do {
    cVar5 = ShaderRD::is_variant_enabled((int)this);
    if (cVar5 == '\0') {
      PipelineCacheRD::clear();
    }
    else {
      uStack_cc = 0x1010101;
      local_120 = 0;
      local_50 = __LC31;
      uStack_48 = _UNK_001041f8;
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8._0_8_ = 0;
      local_b8._8_8_ = 0;
      local_a8._8_8_ = 0x101010100000000;
      local_68 = 0;
      local_64 = 0;
      local_58 = 0;
      local_a8._0_8_ = 0;
      iVar6 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
                        ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                         &local_58,1);
      if (iVar6 == 0) {
        if (local_58 == 0) {
          local_148 = -1;
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(local_58 + -8);
          local_148 = lVar11 + -1;
          if (-1 < local_148) {
            CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
                      ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                       &local_58);
            puVar8 = (undefined8 *)(local_148 * 0x20 + local_58);
            *puVar8 = local_b8._0_8_;
            puVar8[1] = local_b8._8_8_;
            puVar8[2] = local_a8._0_8_;
            puVar8[3] = local_a8._8_8_;
            goto LAB_00100922;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,local_148,lVar11,"p_index","size()","",
                   false,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_00100922:
      local_fc = 0x13f800000;
      local_c8 = 0;
      uVar2 = *(ulong *)(this + 0x178);
      local_88 = 0;
      auStack_74 = SUB1612((undefined1  [16])0x0,4);
      local_118 = 0;
      uStack_110 = 0;
      local_b8 = ZEXT816(0x700000000);
      local_e8 = 0;
      uStack_e4 = uStack_e4 & 0xffffff00;
      uStack_e0 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = __LC32;
      local_a8 = auVar4 << 0x40;
      local_98._8_8_ = 0;
      local_98._0_8_ = _UNK_00104208;
      uStack_84 = __LC32;
      uStack_7c = (undefined4)_UNK_00104208;
      local_78 = (undefined4)(_UNK_00104208 >> 0x20);
      uStack_10c = 0;
      auStack_108 = SUB1612((undefined1  [16])0x0,4);
      if (*(long *)(this + 0x18) == 0) {
        lVar11 = 0;
LAB_00100dfd:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar12,
                   lVar11,"p_variant","variant_defines.size()","",false,false);
LAB_00100a9c:
        uVar7 = 0;
      }
      else {
        lVar11 = *(long *)(*(long *)(this + 0x18) + -8);
        if (lVar11 <= (long)uVar12) goto LAB_00100dfd;
        lVar11 = *(long *)(this + 0x28);
        uVar9 = uVar12;
        if (lVar11 == 0) {
LAB_00100ce8:
          lVar13 = 0;
          uVar9 = uVar12;
LAB_00100d09:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar9,lVar13,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar13 = *(long *)(lVar11 + -8);
        if (lVar13 <= (long)uVar12) goto LAB_00100d09;
        if (*(char *)(lVar11 + uVar12) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_00100a9c;
        }
        if ((uVar2 == 0) || (*(uint *)(this + 0xd4) <= (uint)uVar2)) {
LAB_00100cb8:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_00100a9c;
        }
        lVar11 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xc0) +
                          ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
        if (*(int *)(lVar11 + 0x98) != (int)(uVar2 >> 0x20)) {
          if (*(int *)(lVar11 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00100cb8;
        }
        iVar6 = (int)lVar11;
        if (*(char *)(lVar11 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this);
          lVar13 = *(long *)(this + 0x78);
          if (lVar13 != 0) {
            lVar10 = 0;
            do {
              if (*(long *)(lVar13 + -8) <= lVar10) break;
              if (*(char *)(lVar13 + lVar10) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this,iVar6);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this,iVar6);
              }
              lVar13 = *(long *)(this + 0x78);
              lVar10 = lVar10 + 1;
            } while (lVar13 != 0);
          }
        }
        lVar10 = *(long *)(this + 0x38);
        if (lVar10 == 0) goto LAB_00100ce8;
        lVar13 = *(long *)(lVar10 + -8);
        if (lVar13 <= (long)uVar12) goto LAB_00100d09;
        uVar9 = (ulong)*(uint *)(lVar10 + uVar12 * 4);
        lVar10 = *(long *)(lVar11 + 0x68);
        if (lVar10 == 0) {
          lVar13 = 0;
          goto LAB_00100d09;
        }
        lVar13 = *(long *)(lVar10 + -8);
        if (lVar13 <= (long)uVar9) goto LAB_00100d09;
        if (*(long *)(lVar10 + uVar9 * 8) != 0) {
          ShaderRD::_compile_version_end((Version *)this,iVar6);
        }
        if (*(char *)(lVar11 + 0x90) == '\0') goto LAB_00100a9c;
        lVar11 = *(long *)(lVar11 + 0x88);
        if (lVar11 == 0) goto LAB_00100ce8;
        lVar13 = *(long *)(lVar11 + -8);
        uVar9 = uVar12;
        if (lVar13 <= (long)uVar12) goto LAB_00100d09;
        uVar7 = *(undefined8 *)(lVar11 + uVar12 * 8);
      }
      PipelineCacheRD::setup(this_00,uVar7,5);
      if (CONCAT44(uStack_cc,uStack_d0) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_cc,uStack_d0) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar11 = CONCAT44(uStack_cc,uStack_d0);
          uStack_d0 = 0;
          uStack_cc = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      lVar11 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      lVar11 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar1 = (long *)(local_120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
    }
    if (uVar12 != 0) {
      CowData<String>::_unref((CowData<String> *)local_130);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    this_00 = this_00 + 0x138;
    uVar12 = 1;
  } while( true );
}



/* RendererRD::VRS::copy_vrs(RID, RID, bool) */

void __thiscall
RendererRD::VRS::copy_vrs(VRS *this,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  VRS *pVVar2;
  VRS VVar3;
  code *pcVar4;
  UniformSetCacheRD *pUVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  size_t __n;
  undefined8 *__src;
  ulong uVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined4 uVar20;
  undefined1 local_c8 [16];
  ulong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 *local_98 [2];
  ulong local_88;
  long local_80;
  undefined8 local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x4a;
      pcVar16 = "Parameter \"uniform_set_cache\" is null.";
LAB_00101737:
      _err_print_error("copy_vrs","servers/rendering/renderer_rd/effects/vrs.cpp",uVar8,pcVar16,0,0)
      ;
      return;
    }
    goto LAB_001018cb;
  }
  lVar6 = RendererRD::MaterialStorage::get_singleton();
  if (lVar6 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x4c;
      pcVar16 = "Parameter \"material_storage\" is null.";
      goto LAB_00101737;
    }
    goto LAB_001018cb;
  }
  local_58[0] = *(long *)(lVar6 + 0x30);
  local_58[1] = param_2;
  puVar7 = (undefined8 *)Memory::alloc_static(0x20,false);
  if (puVar7 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
    local_b0 = 0;
    local_a8 = 0;
    local_98[0] = (undefined8 *)0x0;
    local_b8 = 1;
  }
  else {
    __src = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 2;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    lVar6 = 0;
    do {
      if (__src == (undefined8 *)0x0) {
        lVar13 = 0;
      }
      else {
        while (lVar13 = __src[-1], lVar6 < lVar13) {
          plVar1 = __src + -2;
          if (1 < (ulong)__src[-2]) {
            lVar13 = __src[-1];
            uVar9 = 0x10;
            __n = lVar13 * 8;
            if (__n != 0) {
              uVar9 = __n - 1 | __n - 1 >> 1;
              uVar9 = uVar9 | uVar9 >> 2;
              uVar9 = uVar9 | uVar9 >> 4;
              uVar9 = uVar9 | uVar9 >> 8;
              uVar9 = uVar9 | uVar9 >> 0x10;
              uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
            }
            puVar7 = (undefined8 *)Memory::alloc_static(uVar9,false);
            if (puVar7 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              *puVar7 = 1;
              puVar7[1] = lVar13;
              __src = (undefined8 *)memcpy(puVar7 + 2,__src,__n);
              LOCK();
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(plVar1,false);
              }
            }
          }
          __src[lVar6] = local_58[lVar6];
          lVar6 = lVar6 + 1;
          if (lVar6 == 2) goto LAB_00100fbe;
        }
      }
      lVar18 = lVar6 + 1;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar13,"p_index","size()","",false,
                 false);
      lVar6 = lVar18;
    } while (lVar18 != 2);
LAB_00100fbe:
    local_b0 = 0;
    plVar1 = __src + -2;
    local_a8 = 0;
    local_98[0] = (undefined8 *)0x0;
    local_b8 = 1;
    if (__src != (undefined8 *)0x0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_00101005;
        LOCK();
        lVar13 = *plVar1;
        bVar19 = lVar6 == lVar13;
        if (bVar19) {
          *plVar1 = lVar6 + 1;
          lVar13 = lVar6;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar13 != -1) {
        local_98[0] = __src;
      }
LAB_00101005:
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(plVar1,false);
      }
    }
  }
  local_c8 = (undefined1  [16])0x0;
  uVar8 = RenderingDevice::get_singleton();
  uVar9 = RenderingDevice::limit_get(uVar8,0x2d);
  uVar8 = RenderingDevice::get_singleton();
  uVar10 = RenderingDevice::limit_get(uVar8,0x2c);
  if (uVar10 < uVar9) {
    uVar9 = uVar10;
  }
  uVar20 = _LC48;
  if (4 < uVar9) {
    uVar20 = _LC47;
  }
  uVar9 = *(ulong *)(this + 0x178);
  local_c8._0_4_ = uVar20;
  uVar10 = (ulong)param_4 & 0xff;
  if (*(long *)(this + 0x18) == 0) {
    lVar6 = 0;
LAB_00101789:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar10,lVar6,
               "p_variant","variant_defines.size()","",false,false);
LAB_00101150:
    _err_print_error("copy_vrs","servers/rendering/renderer_rd/effects/vrs.cpp",0x5f,
                     "Condition \"shader.is_null()\" is true.",0,0);
    if (local_98[0] != (undefined8 *)0x0) {
      LOCK();
      plVar1 = local_98[0] + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
LAB_001015ab:
        Memory::free_static(local_98[0] + -2,false);
      }
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x18) + -8);
    if (lVar6 <= (long)uVar10) goto LAB_00101789;
    lVar6 = *(long *)(this + 0x28);
    uVar15 = uVar10;
    if (lVar6 == 0) {
LAB_00101413:
      lVar13 = 0;
      uVar15 = uVar10;
LAB_00101434:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar13 = *(long *)(lVar6 + -8);
    if (lVar13 <= (long)uVar10) goto LAB_00101434;
    if (*(char *)(lVar6 + uVar10) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00101150;
    }
    if ((uVar9 == 0) || (*(uint *)(this + 0xd4) <= (uint)uVar9)) {
LAB_001013e9:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00101150;
    }
    lVar6 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0xa0 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar6 + 0x98) != (int)(uVar9 >> 0x20)) {
      if (*(int *)(lVar6 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001013e9;
    }
    iVar17 = (int)lVar6;
    if (*(char *)(lVar6 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this);
      lVar13 = *(long *)(this + 0x78);
      if (lVar13 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(lVar13 + -8) <= lVar18) break;
          if (*(char *)(lVar13 + lVar18) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this,iVar17);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this,iVar17);
          }
          lVar13 = *(long *)(this + 0x78);
          lVar18 = lVar18 + 1;
        } while (lVar13 != 0);
      }
    }
    lVar18 = *(long *)(this + 0x38);
    if (lVar18 == 0) goto LAB_00101413;
    lVar13 = *(long *)(lVar18 + -8);
    if (lVar13 <= (long)uVar10) goto LAB_00101434;
    uVar15 = (ulong)*(uint *)(lVar18 + uVar10 * 4);
    lVar18 = *(long *)(lVar6 + 0x68);
    if (lVar18 == 0) {
      lVar13 = 0;
      goto LAB_00101434;
    }
    lVar13 = *(long *)(lVar18 + -8);
    if (lVar13 <= (long)uVar15) goto LAB_00101434;
    if (*(long *)(lVar18 + uVar15 * 8) != 0) {
      ShaderRD::_compile_version_end((Version *)this,iVar17);
    }
    if (*(char *)(lVar6 + 0x90) == '\0') goto LAB_00101150;
    lVar6 = *(long *)(lVar6 + 0x88);
    if (lVar6 == 0) goto LAB_00101413;
    lVar13 = *(long *)(lVar6 + -8);
    uVar15 = uVar10;
    if (lVar13 <= (long)uVar10) goto LAB_00101434;
    lVar6 = *(long *)(lVar6 + uVar10 * 8);
    if (lVar6 == 0) goto LAB_00101150;
    uVar8 = RenderingDevice::get_singleton();
    local_80 = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    pvVar11 = (void *)RenderingDevice::draw_list_begin(uVar8,param_3,0,&local_88,0,local_58,0);
    lVar13 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    uVar8 = RenderingDevice::get_singleton();
    uVar12 = RenderingDevice::get_singleton();
    pVVar2 = this + (ulong)(-(int)uVar10 & 0x138) + 0x180;
    lVar13 = RenderingDevice::framebuffer_get_format(uVar12,param_3);
    if (*(long *)(pVVar2 + 0x40) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar13 = 0;
    }
    else {
      while( true ) {
        uVar9 = local_88 >> 8;
        local_88 = uVar9 << 8;
        LOCK();
        VVar3 = *pVVar2;
        if (VVar3 == (VRS)0x0) {
          *pVVar2 = (VRS)0x1;
        }
        UNLOCK();
        if (VVar3 == (VRS)0x0) break;
        local_88 = uVar9 << 8;
        do {
        } while (*pVVar2 != (VRS)0x0);
      }
      param_4 = param_4 & 0xff;
      if (*(uint *)(this + (ulong)param_4 * 0x138 + 0x2b0) != 0) {
        plVar14 = *(long **)(this + (ulong)param_4 * 0x138 + 0x2a8);
        plVar1 = plVar14 + (ulong)*(uint *)(this + (ulong)param_4 * 0x138 + 0x2b0) * 5;
        do {
          if ((((*plVar14 == -1) && (lVar13 == plVar14[1])) &&
              (this[(ulong)param_4 * 0x138 + 0x1ce] == *(VRS *)((long)plVar14 + 0x14))) &&
             (((int)plVar14[2] == 0 && ((int)plVar14[3] == 0)))) {
            lVar13 = plVar14[4];
            *pVVar2 = (VRS)0x0;
            goto LAB_0010149d;
          }
          plVar14 = plVar14 + 5;
        } while (plVar1 != plVar14);
      }
      lVar13 = PipelineCacheRD::_generate_version
                         ((long)pVVar2,-1,SUB81(lVar13,0),
                          (uint)(byte)this[(ulong)param_4 * 0x138 + 0x1ce],0);
      *pVVar2 = (VRS)0x0;
    }
LAB_0010149d:
    RenderingDevice::draw_list_bind_render_pipeline(uVar8,pvVar11,lVar13);
    uVar8 = RenderingDevice::get_singleton();
    puVar7 = local_98[0];
    local_68[0] = 0;
    local_88 = local_b8;
    local_80 = CONCAT71(local_80._1_7_,local_b0);
    local_78 = local_a8;
    if (local_98[0] != (undefined8 *)0x0) {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar13 = local_68[0];
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar6,0,&local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar8,pvVar11,uVar12,0);
      if (lVar13 != 0) {
        LOCK();
        plVar1 = (long *)(lVar13 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        puVar7 = local_98[0];
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          puVar7 = local_98[0];
        }
        goto LAB_00101552;
      }
      lVar6 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar6,pvVar11,(uint)local_c8);
      lVar6 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar6,SUB81(pvVar11,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
LAB_0010159f:
      LOCK();
      plVar1 = puVar7 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101190;
      goto LAB_001015ab;
    }
    uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar6,0,&local_88);
    RenderingDevice::draw_list_bind_uniform_set(uVar8,pvVar11,uVar12,0);
LAB_00101552:
    lVar6 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar6,pvVar11,(uint)local_c8);
    lVar6 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar6,SUB81(pvVar11,0),0,1);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
    if (puVar7 != (undefined8 *)0x0) goto LAB_0010159f;
  }
LAB_00101190:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001018cb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::VRS::update_vrs_texture(RID, RID) */

void __thiscall RendererRD::VRS::update_vrs_texture(VRS *this,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)RendererRD::TextureStorage::get_singleton();
  iVar4 = (**(code **)(*plVar6 + 0x2c8))(plVar6,param_3);
  iVar5 = (**(code **)(*plVar6 + 0x2d8))(plVar6,param_3);
  if ((iVar4 == 0) || (iVar5 == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00101cdb;
  }
  uVar7 = RenderingDevice::get_singleton();
  local_70 = 0;
  local_68 = (Object *)0x101e51;
  local_58 = _LC55;
  uStack_54 = _LC55;
  uStack_50 = _LC55;
  uStack_4c = _LC55;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_70);
  RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_70,&local_58);
  lVar9 = local_70;
  if (local_70 == 0) {
LAB_00101a26:
    if (iVar4 != 1) goto LAB_00101a2b;
LAB_00101a9e:
    uVar8 = (**(code **)(*plVar6 + 0x2e8))(plVar6,param_3);
    if (uVar8 != 0) {
      lVar9 = (**(code **)(*plVar6 + 0x138))(plVar6,uVar8,0);
      if ((uint)uVar8 < *(uint *)((long)plVar6 + 0x124)) {
        lVar10 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(plVar6 + 0x24)) * 0x118 +
                 *(long *)(plVar6[0x22] +
                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(plVar6 + 0x24)) * 8);
        iVar4 = *(int *)(lVar10 + 0x110);
        if (iVar4 != (int)(uVar8 >> 0x20)) {
          if (iVar4 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00101c2a;
        }
        iVar4 = *(int *)(lVar10 + 0x50);
      }
      else {
LAB_00101c2a:
        iVar4 = 1;
      }
      if (lVar9 != 0) {
        copy_vrs(this,lVar9,param_2,1 < iVar4);
      }
    }
  }
  else {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00101a26;
    local_70 = 0;
    Memory::free_static((void *)(lVar9 + -0x10),false);
    if (iVar4 == 1) goto LAB_00101a9e;
LAB_00101a2b:
    if (iVar4 == 2) {
      XRServer::get_singleton();
      XRServer::get_primary_interface();
      if (local_68 != (Object *)0x0) {
        uVar8 = (**(code **)(*(long *)local_68 + 0x290))();
        if (uVar8 != 0) {
          lVar9 = (**(code **)(*plVar6 + 0x138))(plVar6,uVar8,0);
          if ((uint)uVar8 < *(uint *)((long)plVar6 + 0x124)) {
            lVar10 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(plVar6 + 0x24)) * 0x118 +
                     *(long *)(plVar6[0x22] +
                              ((uVar8 & 0xffffffff) / (ulong)*(uint *)(plVar6 + 0x24)) * 8);
            if (*(int *)(lVar10 + 0x110) != (int)(uVar8 >> 0x20)) {
              if (*(int *)(lVar10 + 0x110) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,lVar10);
              }
              goto LAB_00101c97;
            }
            iVar4 = *(int *)(lVar10 + 0x50);
          }
          else {
LAB_00101c97:
            iVar4 = 1;
          }
          if (lVar9 != 0) {
            copy_vrs(this,lVar9,param_2,1 < iVar4);
          }
        }
        if (local_68 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
          pOVar2 = local_68;
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_68);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
      }
    }
  }
  if (iVar5 == 1) {
    (**(code **)(*plVar6 + 0x2d0))(plVar6,param_3,0);
  }
  RenderingDevice::get_singleton();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    RenderingDevice::draw_command_end_label();
    return;
  }
LAB_00101cdb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VrsShaderRD::~VrsShaderRD() */

void __thiscall VrsShaderRD::~VrsShaderRD(VrsShaderRD *this)

{
  *(undefined ***)this = &PTR__VrsShaderRD_00103a20;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* VrsShaderRD::~VrsShaderRD() */

void __thiscall VrsShaderRD::~VrsShaderRD(VrsShaderRD *this)

{
  *(undefined ***)this = &PTR__VrsShaderRD_00103a20;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
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
      uVar7 = _LC11;
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
LAB_00102153:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_00102153;
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
LAB_001027a0:
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
  if (lVar10 == 0) goto LAB_001027a0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00102679:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00102679;
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
    goto LAB_001027f6;
  }
  if (lVar10 == lVar7) {
LAB_0010271f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001027f6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010270a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010271f;
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
LAB_0010270a:
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
LAB_00102e60:
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
  if (lVar11 == 0) goto LAB_00102e60;
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
LAB_00102dcc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_00102d63;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00102dcc;
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
  uVar3 = _LC26;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 4);
LAB_00102d63:
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
LAB_00103200:
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
  if (lVar11 == 0) goto LAB_00103200;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00103091:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00103091;
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
    goto LAB_00103256;
  }
  if (lVar11 == lVar9) {
LAB_00103173:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00103256:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00103150;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00103173;
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
  uVar4 = _LC11;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00103150:
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
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  int iVar17;
  undefined1 auVar16 [16];
  undefined1 local_78 [8];
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulong local_58;
  ulong local_48;
  long local_40;
  
  iVar7 = (int)((ulong)param_2 >> 0x20);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar17 = (int)(*param_4 >> 0x20);
  uVar6 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar6 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = ((int)*param_4 * 0x16a88000 | (uint)((int)*param_4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar13 = (ulong)((uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64);
  uVar11 = param_4[2];
  if (uVar11 != 0) {
    uVar15 = 1;
LAB_001036d6:
    uVar14 = 0;
    do {
      uVar6 = (uint)uVar13;
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar9 = 0;
LAB_001037d1:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar9 = *(long *)(uVar11 - 8);
        if (lVar9 <= (long)uVar14) goto LAB_001037d1;
        uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
LAB_001036f9:
        iVar7 = (int)(uVar11 >> 0x20);
        uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar6 = uVar6 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar14 == 0) goto LAB_001036f9;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar8 = 0;
      }
      uVar14 = uVar14 + 1;
      uVar8 = uVar8 ^ (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
      uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
      if (uVar14 == uVar15) goto LAB_00103760;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar14 = *(ulong *)(param_4[4] - 8), uVar15 = uVar14 & 0xffffffff, (int)uVar14 != 0))
  goto LAB_001036d6;
  goto LAB_001033d0;
LAB_001039b9:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_00103430;
LAB_00103760:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_001033d0:
  uVar10 = auVar16._0_8_;
  uVar6 = ((uint)uVar13 ^ (uint)(uVar13 >> 0x10)) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  lVar12 = *(long *)(this + (ulong)(uVar6 % 0x3ffd) * 8 + 0x1e0);
  if (lVar12 != 0) {
LAB_0010343d:
    if ((((*(uint *)(lVar12 + 0x10) == uVar6) && (*(int *)(lVar12 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar12 + 0x18))) && (*(int *)(lVar12 + 0x30) == 1)) {
      piVar3 = *(int **)(lVar12 + 0x38);
      if ((auVar16._4_4_ == piVar3[1]) && (*piVar3 == auVar16._0_4_)) {
        uVar11 = param_4[2];
        if (*(long *)(piVar3 + 4) == 0) {
          if (*(long *)(piVar3 + 8) == 0) {
            if (uVar11 != 0) goto LAB_00103430;
            if (param_4[4] != 0) {
              uVar8 = *(uint *)(param_4[4] - 8);
joined_r0x00103983:
              if (uVar8 != 0) goto LAB_00103430;
            }
LAB_001038c4:
            uVar10 = *(undefined8 *)(lVar12 + 0x28);
            goto LAB_001036a7;
          }
          uVar8 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
          if (uVar11 == 0) {
            if (param_4[4] == 0) goto joined_r0x00103983;
            if (*(uint *)(param_4[4] - 8) == uVar8) {
              if (uVar8 != 0) goto LAB_001034a4;
              goto LAB_001038c4;
            }
          }
          else if (uVar8 == 1) goto LAB_001034a4;
        }
        else {
          uVar8 = 1;
          if (uVar11 != 0) {
LAB_001034a4:
            uVar13 = 0;
            do {
              uVar14 = uVar13;
              if (uVar11 == 0) {
                uVar11 = param_4[4];
                if (uVar11 == 0) {
                  lVar9 = 0;
                  goto LAB_001037d1;
                }
                lVar9 = *(long *)(uVar11 - 8);
                if (lVar9 <= (long)uVar13) goto LAB_001037d1;
                uVar11 = *(ulong *)(uVar11 + uVar13 * 8);
                uVar15 = *(ulong *)(piVar3 + 4);
                if (uVar15 == 0) goto LAB_001034e5;
                if (uVar13 != 0) goto LAB_00103565;
              }
              else if (uVar13 == 0) {
                uVar15 = *(ulong *)(piVar3 + 4);
                uVar14 = 0;
                if (uVar15 == 0) {
LAB_001034e5:
                  lVar4 = *(long *)(piVar3 + 8);
                  if (lVar4 == 0) {
                    lVar9 = 0;
                    goto LAB_001037d1;
                  }
                  lVar9 = *(long *)(lVar4 + -8);
                  if (lVar9 <= (long)uVar14) goto LAB_001037d1;
                  uVar15 = *(ulong *)(lVar4 + uVar13 * 8);
                }
              }
              else {
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                if (*(long *)(piVar3 + 4) == 0) {
                  uVar11 = 0;
                  goto LAB_001034e5;
                }
                uVar11 = 0;
LAB_00103565:
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                uVar15 = 0;
              }
              if (uVar15 != uVar11) goto LAB_001039b9;
              uVar13 = uVar13 + 1;
              if (uVar8 <= (uint)uVar13) goto LAB_001038c4;
              uVar11 = param_4[2];
            } while( true );
          }
          if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
            uVar8 = 1;
            goto LAB_001034a4;
          }
        }
      }
    }
LAB_00103430:
    uVar10 = auVar16._0_8_;
    lVar12 = *(long *)(lVar12 + 8);
    if (lVar12 == 0) goto LAB_00103585;
    goto LAB_0010343d;
  }
LAB_00103585:
  local_60 = (undefined1)param_4[1];
  local_70 = 0;
  local_48 = 0;
  local_58 = param_4[2];
  lVar9 = 1;
  uVar11 = param_4[4];
  local_68 = uVar10;
  if (param_4[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)(param_4 + 4));
    lVar9 = 1;
    uVar11 = local_48;
    if (local_70 != 0) {
      lVar9 = *(long *)(local_70 + -8) + 1;
    }
  }
  iVar7 = CowData<RenderingDevice::Uniform>::resize<false>
                    ((CowData<RenderingDevice::Uniform> *)&local_70,lVar9);
  if (iVar7 == 0) {
    if (local_70 == 0) {
      lVar12 = -1;
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(local_70 + -8);
      lVar12 = lVar9 + -1;
      if (-1 < lVar12) {
        CowData<RenderingDevice::Uniform>::_copy_on_write
                  ((CowData<RenderingDevice::Uniform> *)&local_70);
        puVar2 = (undefined8 *)(local_70 + lVar12 * 0x28);
        *puVar2 = local_68;
        *(undefined1 *)(puVar2 + 1) = local_60;
        puVar2[2] = local_58;
        if (puVar2[4] != uVar11) {
          CowData<RID>::_ref((CowData<RID> *)(puVar2 + 4),(CowData *)&local_48);
        }
        goto LAB_00103672;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar9,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00103672:
  if (uVar11 != 0) {
    LOCK();
    plVar1 = (long *)(uVar11 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 - 0x10),false);
    }
  }
  uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                     (this,param_2,param_3,uVar6,uVar6 % 0x3ffd,local_78);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_70);
LAB_001036a7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* VrsShaderRD::~VrsShaderRD() */

void __thiscall VrsShaderRD::~VrsShaderRD(VrsShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



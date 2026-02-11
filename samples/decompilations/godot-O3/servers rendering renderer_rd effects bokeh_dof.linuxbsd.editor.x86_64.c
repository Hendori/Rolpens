
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



/* RendererRD::BokehDOF::~BokehDOF() */

void __thiscall RendererRD::BokehDOF::~BokehDOF(BokehDOF *this)

{
  PipelineCacheRD *this_00;
  PipelineCacheRD *pPVar1;
  
  if (*this == (BokehDOF)0x0) {
    ShaderRD::version_free(this + 0x68,*(undefined8 *)(this + 0x358));
  }
  else {
    ShaderRD::version_free(this + 0x1e0,*(undefined8 *)(this + 0x358));
  }
  this_00 = (PipelineCacheRD *)(this + 0xae8);
  do {
    pPVar1 = this_00 + -0x138;
    PipelineCacheRD::~PipelineCacheRD(this_00);
    this_00 = pPVar1;
  } while (pPVar1 != (PipelineCacheRD *)(this + 0x260));
  *(undefined ***)(this + 0x1e0) = &PTR__BokehDofRasterShaderRD_0010a438;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x1e0));
  *(undefined ***)(this + 0x68) = &PTR__BokehDofShaderRD_0010a418;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x68));
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::BokehDOF::BokehDOF(bool) */

void __thiscall RendererRD::BokehDOF::BokehDOF(BokehDOF *this,bool param_1)

{
  ShaderRD *this_00;
  long *plVar1;
  ShaderRD *this_01;
  ulong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  BokehDOF *pBVar14;
  long lVar15;
  BokehDOF *this_02;
  BokehDOF *pBVar16;
  long in_FS_OFFSET;
  undefined4 *puVar17;
  ShaderRD *pSVar18;
  StrRange *pSVar19;
  char *pcVar20;
  StrRange *pSVar21;
  BokehDOF *pBVar22;
  Vector<String> local_158 [8];
  undefined8 local_150;
  undefined1 local_148 [8];
  long local_140;
  long local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [12];
  undefined8 local_11c;
  ulong local_108;
  ulong local_100 [2];
  long local_f0;
  undefined2 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 auStack_94 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [4];
  undefined4 local_64;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this_00 = (ShaderRD *)(this + 0x68);
  this_01 = (ShaderRD *)(this + 0x1e0);
  pBVar14 = this + 0x398;
  pBVar22 = this + 0xc20;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x68) = &PTR__BokehDofShaderRD_0010a418;
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define BLOCK_SIZE 8\n\nlayout(local_size_x = BLOCK_SIZE, local_size_y = BLOCK_SIZE, local_size_z = 1) in;\n\n#ifdef MODE_GEN_BLUR_SIZE\nlayout(rgba16f, set = 0, binding = 0) uniform restrict image2D color_image;\nlayout(set = 1, binding = 0) uniform sampler2D source_depth;\n#endif\n\n#if defined(MODE_BOKEH_BOX) || defined(MODE_BOKEH_HEXAGONAL) || defined(MODE_BOKEH_CIRCULAR)\nlayout(set = 1, binding = 0) uniform sampler2D color_texture;\nlayout(rgba16f, set = 0, binding = 0) uniform restrict writeonly image2D bokeh_image;\n#endif\n\n#ifdef MODE_COMPOSITE_BOKEH\nlayout(rgba16f, set = 0, binding = 0) uniform restrict image2D color_image;\nlayout(set = 1, binding = 0) uniform sampler2D source_bokeh;\n#endif\n\n\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 size;\n\tfloat z_far;\n\tfloat z_near;\n\n\tbool orthogonal;\n\tfloat blur_size;\n\tfloat blur_scale;\n\tint blur_steps;\n\n\tbool blur_near_active;\n\tfloat blur_near_begin;\n\tfloat blur_near_end;\n\tbool blur_far_active;\n\n\tfloat blur_far_begin;\n\tfloat blur_far_end;\n\tbool second_pass;\n\tbool half_size;\n\n\tbool use_jitter;\n\tfloat jitter_seed;\n\tbool use_physical_near;\n\tbool use_physical_far;\n\n\tfloat blur_size_near;\n\tfloat blur_size_far;\n\tuint pad[2];\n}\nparams;\n\n\n#define DEPTH_GAP 0.0\n\nconst float GOLDEN_ANGLE = 2.39996323;\n\n\nfloat hash12n(vec2 p) {\n\tp = fract(p * vec2(5.3987, 5.4421));\n\tp += dot(p.yx, p.xy + vec2(21.5351, 14.3137));\n\treturn fract(p.x * p.y * 95.4307);\n}\n\n#ifdef MODE_GEN_BLUR_SIZE\n\nfloat get_depth_at_pos(vec2 uv) {\n\tfloat depth = textureLod(source_depth, uv, 0.0).x * 2.0 - 1.0;\n\tif (params.orthogonal) {\n\t\tdepth = -(depth * (params.z_far - params.z_near) - (params.z_far + params.z_near)) / 2.0;\n\t} else {\n\t\tdepth = 2.0 * params.z_near * params.z_far / (params.z_far + params.z_near + depth * (params.z_far - params.z_near));\n\t}\n\treturn depth;\n}\n\nfloat get_blur_size(float depth) {\n\tif (params.blur_near_active && depth < params.blur_near_begin) {\n\t\tif (params.use_physical_near) {\n\t\t\t\n\t\t\tfloat d = abs(params.blur_near_begin - depth);\n\t\t\treturn -(d / (para..." /* TRUNCATED STRING LITERAL */
                 );
  pSVar18 = this_01;
  ShaderRD::ShaderRD(this_01);
  *(undefined ***)(this + 0x1e0) = &PTR__BokehDofRasterShaderRD_0010a438;
  ShaderRD::setup((char *)this_01,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 size;\n\tfloat z_far;\n\tfloat z_near;\n\n\tbool orthogonal;\n\tfloat blur_size;\n\tfloat blur_scale;\n\tint blur_steps;\n\n\tbool blur_near_active;\n\tfloat blur_near_begin;\n\tfloat blur_near_end;\n\tbool blur_far_active;\n\n\tfloat blur_far_begin;\n\tfloat blur_far_end;\n\tbool second_pass;\n\tbool half_size;\n\n\tbool use_jitter;\n\tfloat jitter_seed;\n\tbool use_physical_near;\n\tbool use_physical_far;\n\n\tfloat blur_size_near;\n\tfloat blur_size_far;\n\tuint pad[2];\n}\nparams;\n\n\n#define DEPTH_GAP 0.0\n\nconst float GOLDEN_ANGLE = 2.39996323;\n\n\nfloat hash12n(vec2 p) {\n\tp = fract(p * vec2(5.3987, 5.4421));\n\tp += dot(p.yx, p.xy + vec2(21.5351, 14.3137));\n\treturn fract(p.x * p.y * 95.4307);\n}\n\nlayout(location = 0) out vec2 uv_interp;\n/* clang-format on */\n\nvoid main() {\n\t\n\t\n\t\n\t\n\t\n\n\tvec2 vertex_base;\n\tif (gl_VertexIndex == 0) {\n\t\tvertex_base = vec2(-1.0, -1.0);\n\t} else if (gl_VertexIndex == 1) {\n\t\tvertex_base = vec2(-1.0, 3.0);\n\t} else {\n\t\tvertex_base = vec2(3.0, -1.0);\n\t}\n\tgl_Position = vec4(vertex_base, 0.0, 1.0);\n\tuv_interp = clamp(vertex_base, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n}\n\n/* clang-format off */\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 size;\n\tfloat z_far;\n\tfloat z_near;\n\n\tbool orthogonal;\n\tfloat blur_size;\n\tfloat blur_scale;\n\tint blur_steps;\n\n\tbool blur_near_active;\n\tfloat blur_near_begin;\n\tfloat blur_near_end;\n\tbool blur_far_active;\n\n\tfloat blur_far_begin;\n\tfloat blur_far_end;\n\tbool second_pass;\n\tbool half_size;\n\n\tbool use_jitter;\n\tfloat jitter_seed;\n\tbool use_physical_near;\n\tbool use_physical_far;\n\n\tfloat blur_size_near;\n\tfloat blur_size_far;\n\tuint pad[2];\n}\nparams;\n\n\n#define DEPTH_GAP 0.0\n\nconst float GOLDEN_ANGLE = 2.39996323;\n\n\nfloat hash12n(vec2 p) {\n\tp = fract(p * vec2(5.3987, 5.4421));\n\tp += dot(p.yx, p.xy + vec2(21.5351, 14.3137));\n\treturn fract(p.x * p.y * 95.4307);\n}\n\nlayout(location = 0) in vec2 uv_interp;\n/* clang-format on */\n\n#ifdef MODE_GEN_BLUR_SIZE\nlayout(location = 0) out float weight;\n\nlayout(set = 0, binding = 0) uniform sampler2D source_depth;\n#else\nlayout(location = 0) out vec4 frag_color;\n#ifdef OUTPUT_WEIGHT\nlayout(location = 1) out float weight;\n#endif\n\nlayout(set = 0, binding = 0) uniform sampler2D source_color;\nlayout(set = 1, binding = 0) uniform sampler2D source_weight;\n#ifdef MODE_COMPOSITE_BOKEH\nlayout(set = 2, binding = 0) uniform sampler2D original_weight;\n#endif\n#endif\n\n\n\n\n#ifdef MODE_GEN_BLUR_SIZE\n\nfloat get_depth_at_pos(vec2 uv) {\n\tfloat depth = textureLod(source_depth, uv, 0.0).x * 2.0 - 1.0;\n\tif (params.orthogonal) {\n\t\tdepth = -(depth * (params.z_far - params.z_near) - (params.z_far + params.z_near)) / 2.0;\n\t} else {\n\t\tdepth = 2.0 * params.z_near * params.z_far / (params.z_far + params.z_near + depth * (params.z_far - params.z_near));\n\t}\n\treturn depth;\n}\n\nfloat get_blur_size(float depth) {\n\tif (params.blur_near_active && depth < params.blur_near_begin) {\n\t\tif (params.use_physical_near) {\n\t\t\t\n\t\t\tfloat d = abs(params.blur_near_begin - depth);\n\t\t\treturn -(d / (params.blur_near_begin - d)) * params.blur_size_near - DEPTH_GAP; \n\t\t} else {\n\t\t\t\n\t\t\treturn -(1.0 - smoothstep(params.blur_near_end, params.blur_near_begin, depth)) *..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined1 (*) [16])(this + 0x360) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x380) = (undefined1  [16])0x0;
  this_02 = pBVar14;
  do {
    pBVar16 = (BokehDOF *)((PipelineCacheRD *)this_02 + 0x138);
    PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)this_02);
    this_02 = pBVar16;
  } while (pBVar22 != pBVar16);
  *this = (BokehDOF)param_1;
  pSVar19 = (StrRange *)&local_108;
  local_d8 = 0x10829c;
  uStack_d4 = 0;
  puVar17 = &local_d8;
  local_150 = 0;
  local_108 = 0;
  uStack_d0 = 0x1c;
  uStack_cc = 0;
  String::parse_latin1(pSVar19);
  Vector<String>::push_back(local_158);
  uVar10 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  local_108 = 0;
  local_d8 = 0x108d60;
  uStack_d4 = 0;
  uStack_d0 = 0x2e;
  uStack_cc = 0;
  String::parse_latin1(pSVar19);
  Vector<String>::push_back(local_158);
  uVar10 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  local_108 = 0;
  local_d8 = 0x1082b9;
  uStack_d4 = 0;
  uStack_d0 = 0x18;
  uStack_cc = 0;
  String::parse_latin1(pSVar19);
  Vector<String>::push_back(local_158);
  uVar10 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  local_108 = 0;
  local_d8 = 0x108d90;
  uStack_d4 = 0;
  uStack_d0 = 0x34;
  uStack_cc = 0;
  String::parse_latin1(pSVar19);
  Vector<String>::push_back(local_158);
  uVar10 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  local_108 = 0;
  local_d8 = 0x108dc8;
  uStack_d4 = 0;
  uStack_d0 = 0x1e;
  uStack_cc = 0;
  String::parse_latin1(pSVar19);
  Vector<String>::push_back(local_158);
  uVar10 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  local_108 = 0;
  local_d8 = 0x108de8;
  uStack_d4 = 0;
  uStack_d0 = 0x33;
  uStack_cc = 0;
  String::parse_latin1(pSVar19);
  Vector<String>::push_back(local_158);
  uVar10 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  local_108 = 0;
  local_d8 = 0x108e20;
  uStack_d4 = 0;
  uStack_d0 = 0x1e;
  uStack_cc = 0;
  String::parse_latin1(pSVar19);
  Vector<String>::push_back(local_158);
  uVar10 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar10 - 0x10),false);
    }
  }
  local_100[0] = 0;
  local_138 = 0;
  pcVar20 = "";
  local_d8 = 0x1084a1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (*this == (BokehDOF)0x0) {
    pSVar19 = (StrRange *)&local_138;
    String::parse_latin1(pSVar19);
    ShaderRD::initialize((Vector *)this_00,local_158,(Vector *)pSVar19);
    lVar8 = local_138;
    if (local_138 != 0) {
      LOCK();
      plVar1 = (long *)(local_138 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_138 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    uVar10 = 0;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_100);
    iVar12 = (int)this_00;
    ShaderRD::set_variant_enabled(iVar12,true);
    ShaderRD::set_variant_enabled(iVar12,true);
    uVar6 = ShaderRD::version_create();
    *(undefined8 *)(this + 0x358) = uVar6;
    do {
      while( true ) {
        cVar5 = ShaderRD::is_variant_enabled(iVar12);
        if (cVar5 != '\0') break;
LAB_001010f0:
        uVar10 = uVar10 + 1;
        if (uVar10 == 7) goto LAB_001012b0;
      }
      uVar6 = RenderingDevice::get_singleton();
      uVar2 = *(ulong *)(this + 0x358);
      uStack_d0 = 0;
      uStack_cc = 0;
      if (*(long *)(this + 0x80) == 0) {
        lVar8 = 0;
LAB_00101563:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar10,
                   lVar8,"p_variant","variant_defines.size()",pcVar20,false,false);
LAB_00101599:
        uVar11 = 0;
      }
      else {
        lVar8 = *(long *)(*(long *)(this + 0x80) + -8);
        if (lVar8 <= (long)uVar10) goto LAB_00101563;
        lVar8 = *(long *)(this + 0x90);
        uVar7 = uVar10;
        if (lVar8 == 0) goto LAB_00101740;
        lVar9 = *(long *)(lVar8 + -8);
        if (lVar9 <= (long)uVar10) goto LAB_00101670;
        if (*(char *)(lVar8 + uVar10) != '\0') {
          if ((uVar2 == 0) || (*(uint *)(this + 0x13c) <= (uint)uVar2)) {
LAB_00101620:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
            uVar11 = 0;
            goto LAB_0010123d;
          }
          lVar8 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x138)) * 0xa0 +
                  *(long *)(*(long *)(this + 0x128) +
                           ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x138)) * 8);
          if (*(int *)(lVar8 + 0x98) != (int)(uVar2 >> 0x20)) {
            if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00101620;
          }
          iVar13 = (int)lVar8;
          if (*(char *)(lVar8 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_00);
            lVar9 = *(long *)(this + 0xe0);
            if (lVar9 != 0) {
              lVar15 = 0;
              do {
                if (*(long *)(lVar9 + -8) <= lVar15) break;
                if (*(char *)(lVar9 + lVar15) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_00,iVar13);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_00,iVar13);
                }
                lVar9 = *(long *)(this + 0xe0);
                lVar15 = lVar15 + 1;
              } while (lVar9 != 0);
            }
          }
          lVar15 = *(long *)(this + 0xa0);
          if (lVar15 == 0) {
LAB_00101740:
            lVar9 = 0;
            uVar7 = uVar10;
          }
          else {
            lVar9 = *(long *)(lVar15 + -8);
            if ((long)uVar10 < lVar9) {
              uVar7 = (ulong)*(uint *)(lVar15 + uVar10 * 4);
              lVar15 = *(long *)(lVar8 + 0x68);
              if (lVar15 != 0) {
                lVar9 = *(long *)(lVar15 + -8);
                if ((long)uVar7 < lVar9) {
                  if (*(long *)(lVar15 + uVar7 * 8) != 0) {
                    ShaderRD::_compile_version_end((Version *)this_00,iVar13);
                  }
                  if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_00101599;
                  lVar8 = *(long *)(lVar8 + 0x88);
                  if (lVar8 == 0) goto LAB_00101740;
                  lVar9 = *(long *)(lVar8 + -8);
                  uVar7 = uVar10;
                  if ((long)uVar10 < lVar9) {
                    uVar11 = *(undefined8 *)(lVar8 + uVar10 * 8);
                    goto LAB_0010123d;
                  }
                }
                goto LAB_00101670;
              }
              goto LAB_00101718;
            }
          }
          goto LAB_00101670;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar11 = 0;
      }
LAB_0010123d:
      uVar6 = RenderingDevice::compute_pipeline_create(uVar6,uVar11,puVar17);
      *(undefined8 *)(this + ((long)(int)uVar10 + 0x6a) * 8 + 0x10) = uVar6;
      if (CONCAT44(uStack_cc,uStack_d0) == 0) goto LAB_001010f0;
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_cc,uStack_d0) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001010f0;
      lVar8 = CONCAT44(uStack_cc,uStack_d0);
      uVar10 = uVar10 + 1;
      uStack_d0 = 0;
      uStack_cc = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    } while (uVar10 != 7);
LAB_001012b0:
    do {
      pBVar14 = pBVar14 + 0x138;
      PipelineCacheRD::clear();
    } while (pBVar22 != pBVar14);
LAB_00101028:
    CowData<String>::_unref((CowData<String> *)&local_150);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pSVar21 = (StrRange *)&local_138;
  String::parse_latin1((StrRange *)&local_138);
  ShaderRD::initialize((Vector *)pSVar18,local_158,(Vector *)&local_138);
  lVar8 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  uVar10 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_100);
  uVar6 = ShaderRD::version_create();
  uStack_80 = _UNK_0010da08;
  local_88 = _LC39;
  *(undefined8 *)(this + 0x358) = uVar6;
  uVar4 = _LC27;
  local_78 = _LC39;
  local_70 = 1;
LAB_00100ce4:
  if (uVar10 == 6) {
    local_68[0] = 0;
    local_64 = 0;
    local_58 = 0;
    local_50 = __LC40;
    uStack_48 = _UNK_0010da18;
    uStack_bc = 0x1010101;
    local_d8 = CONCAT31(local_d8._1_3_,1);
    uStack_d4 = (undefined4)__LC41;
    uStack_d0 = (undefined4)((ulong)__LC41 >> 0x20);
    uStack_cc = (undefined4)_UNK_0010da28;
    local_c8 = (undefined4)((ulong)_UNK_0010da28 >> 0x20);
    uStack_c4 = 7;
    uStack_c0 = 0;
    Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back();
  }
  else {
    iVar13 = 0;
    iVar12 = *(int *)((long)&local_88 + uVar10 * 4);
    local_68[0] = 0;
    local_64 = 0;
    local_58 = 0;
    local_50 = __LC40;
    uStack_48 = _UNK_0010da18;
    if (0 < iVar12) {
      do {
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        iVar13 = iVar13 + 1;
        uStack_cc = 0;
        local_c8 = 0;
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = uVar4;
        Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back();
      } while (iVar12 != iVar13);
    }
  }
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_11c = 0x13f800000;
  local_c8 = 0;
  uStack_c4 = 0;
  uVar2 = *(ulong *)(this + 0x358);
  local_a8 = 0;
  auStack_94 = SUB1612((undefined1  [16])0x0,4);
  local_138 = 0;
  uStack_130 = 0;
  local_140 = 0;
  uStack_d4 = 7;
  local_108 = local_108 & 0xffffff0000000000;
  local_100[0] = local_100[0] & 0xffffffff00000000;
  local_e8 = 0;
  local_f0 = 0;
  uStack_c0 = (undefined4)__LC43;
  uStack_bc = (undefined4)((ulong)__LC43 >> 0x20);
  local_b8._8_8_ = 0;
  local_b8._0_8_ = _UNK_0010da38;
  uStack_a4 = __LC43;
  uStack_9c = (undefined4)_UNK_0010da38;
  local_98 = (undefined4)(_UNK_0010da38 >> 0x20);
  uStack_12c = 0;
  auStack_128 = SUB1612((undefined1  [16])0x0,4);
  if (*(long *)(this + 0x1f8) == 0) {
    lVar8 = 0;
LAB_00101523:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar10,lVar8,
               "p_variant","variant_defines.size()",pcVar20,false,false);
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x1f8) + -8);
    if (lVar8 <= (long)uVar10) goto LAB_00101523;
    lVar8 = *(long *)(this + 0x208);
    uVar7 = uVar10;
    if (lVar8 == 0) {
LAB_00101650:
      lVar9 = 0;
      uVar7 = uVar10;
      goto LAB_00101670;
    }
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 <= (long)uVar10) goto LAB_00101670;
    if (*(char *)(lVar8 + uVar10) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0,
                       puVar17,pSVar18,pBVar14,pcVar20,pSVar21,pSVar19);
      uVar6 = 0;
      goto LAB_00100f37;
    }
    if ((uVar2 == 0) || (*(uint *)(this + 0x2b4) <= (uint)uVar2)) {
LAB_001017a8:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0,puVar17,pSVar18,pBVar14,pcVar20,pSVar21,
                       pSVar19);
      uVar6 = 0;
      goto LAB_00100f37;
    }
    lVar8 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2b0)) * 0xa0 +
            *(long *)(*(long *)(this + 0x2a0) +
                     ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2b0)) * 8);
    if (*(int *)(lVar8 + 0x98) != (int)(uVar2 >> 0x20)) {
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001017a8;
    }
    iVar12 = (int)lVar8;
    if (*(char *)(lVar8 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)pSVar18);
      lVar9 = *(long *)(this + 600);
      if (lVar9 != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(lVar9 + -8) <= lVar15) break;
          if (*(char *)(lVar9 + lVar15) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)pSVar18,iVar12);
          }
          else {
            ShaderRD::_compile_version_start((Version *)pSVar18,iVar12);
          }
          lVar9 = *(long *)(this + 600);
          lVar15 = lVar15 + 1;
        } while (lVar9 != 0);
      }
    }
    lVar15 = *(long *)(this + 0x218);
    if (lVar15 == 0) goto LAB_00101650;
    lVar9 = *(long *)(lVar15 + -8);
    if (lVar9 <= (long)uVar10) goto LAB_00101670;
    uVar7 = (ulong)*(uint *)(lVar15 + uVar10 * 4);
    lVar15 = *(long *)(lVar8 + 0x68);
    if (lVar15 == 0) goto LAB_00101718;
    lVar9 = *(long *)(lVar15 + -8);
    if (lVar9 <= (long)uVar7) goto LAB_00101670;
    if (*(long *)(lVar15 + uVar7 * 8) == 0) {
      if (*(char *)(lVar8 + 0x90) == '\0') goto LAB_00101559;
LAB_00100f16:
      lVar8 = *(long *)(lVar8 + 0x88);
      if (lVar8 == 0) goto LAB_00101650;
      lVar9 = *(long *)(lVar8 + -8);
      uVar7 = uVar10;
      if ((long)uVar10 < lVar9) {
        uVar6 = *(undefined8 *)(lVar8 + uVar10 * 8);
        goto LAB_00100f37;
      }
      goto LAB_00101670;
    }
    ShaderRD::_compile_version_end((Version *)pSVar18,iVar12);
    if (*(char *)(lVar8 + 0x90) != '\0') goto LAB_00100f16;
  }
LAB_00101559:
  uVar6 = 0;
LAB_00100f37:
  PipelineCacheRD::setup(pBVar14,uVar6,5,pSVar21,pSVar19,puVar17,local_68,0,local_148);
  lVar8 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  pBVar14 = pBVar14 + 0x138;
  uVar10 = uVar10 + 1;
  if (uVar10 == 7) goto LAB_00101028;
  goto LAB_00100ce4;
LAB_00101718:
  lVar9 = 0;
LAB_00101670:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar9,"p_index","size()",pcVar20,false,
             true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::BokehDOF::bokeh_dof_compute(RendererRD::BokehDOF::BokehBuffers const&, RID, float,
   float, bool) */

void __thiscall
RendererRD::BokehDOF::bokeh_dof_compute
          (undefined4 param_1_00,undefined4 param_2,BokehDOF *this,uint *param_1,undefined8 param_5,
          uint param_6)

{
  long *plVar1;
  Version *pVVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  UniformSetCacheRD *pUVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  CowData *pCVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  long in_FS_OFFSET;
  bool bVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long local_218 [2];
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  long local_1e8 [2];
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  long local_1b8 [2];
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  long local_188 [2];
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  ulong local_158 [2];
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  long local_128 [2];
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  long local_f8 [2];
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
  
  pUVar8 = UniformSetCacheRD::singleton;
  bVar28 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (BokehDOF)0x0) {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar17 = 0x5b;
        pcVar20 = "Parameter \"uniform_set_cache\" is null.";
LAB_00102b09:
        _err_print_error("bokeh_dof_compute","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                         uVar17,pcVar20,0,0);
        return;
      }
      goto LAB_00104371;
    }
    lVar13 = RendererRD::MaterialStorage::get_singleton();
    if (lVar13 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar17 = 0x5d;
        pcVar20 = "Parameter \"material_storage\" is null.";
        goto LAB_00102b09;
      }
      goto LAB_00104371;
    }
    bVar9 = RendererCameraAttributes::camera_attributes_get_dof_far_enabled
                      (RenderingServerGlobals::camera_attributes,param_5);
    fVar29 = (float)RendererCameraAttributes::camera_attributes_get_dof_far_distance
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar30 = (float)RendererCameraAttributes::camera_attributes_get_dof_far_transition
                              (RenderingServerGlobals::camera_attributes,param_5);
    bVar10 = RendererCameraAttributes::camera_attributes_get_dof_near_enabled
                       (RenderingServerGlobals::camera_attributes,param_5);
    fVar31 = (float)RendererCameraAttributes::camera_attributes_get_dof_near_distance
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar32 = (float)RendererCameraAttributes::camera_attributes_get_dof_near_transition
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar33 = (float)RendererCameraAttributes::camera_attributes_get_dof_blur_amount
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar33 = fVar33 * __LC65;
    uVar26 = RenderingServerGlobals::camera_attributes[1];
    uVar11 = RenderingServerGlobals::camera_attributes[2];
    uVar3 = *RenderingServerGlobals::camera_attributes;
    uVar7 = (int)this + 8;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    puVar22 = (undefined8 *)((ulong)(this + 0x10) & 0xfffffffffffffff8);
    for (uVar18 = (ulong)((uVar7 - (int)(undefined8 *)((ulong)(this + 0x10) & 0xfffffffffffffff8)) +
                          0x60 >> 3); uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar22 = 0;
      puVar22 = puVar22 + (ulong)bVar28 * -2 + 1;
    }
    *(uint *)(this + 0x34) = (uint)bVar9;
    *(uint *)(this + 0x28) = (uint)bVar10;
    *(uint *)(this + 0x48) = (uint)(byte)uVar11;
    *(ulong *)(this + 0x38) = CONCAT44(fVar30 + fVar29,fVar29);
    *(ulong *)(this + 0x2c) = CONCAT44(fVar31 - fVar32,fVar31);
    *(uint *)(this + 0x54) = (uint)(fVar30 < 0.0);
    *(ulong *)(this + 0x58) = CONCAT44(fVar33,fVar33);
    *(uint *)(this + 0x50) = (uint)(fVar32 < 0.0);
    uVar11 = Math::rand();
    *(uint *)(this + 0x18) = param_6 & 0xff;
    *(float *)(this + 0x4c) = (float)uVar11 * __LC66 * __LC67;
    *(ulong *)(this + 0x10) = CONCAT44(param_1_00,param_2);
    if ((fVar32 < 0.0) && (fVar30 < 0.0)) {
      fVar33 = _LC58;
    }
    lVar13 = *(long *)(lVar13 + 0x50);
    local_58[1] = *(long *)(param_1 + 2);
    *(float *)(this + 0x1c) = fVar33;
    lVar23 = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x20) = 0x3f000000;
    local_80 = 0;
    local_58[0] = lVar13;
    iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar18 = local_80;
    if (iVar12 == 0) {
      do {
        if (uVar18 == 0) {
          lVar25 = 0;
LAB_0010267b:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar25,"p_index","size()","",
                     false,false);
        }
        else {
          lVar25 = *(long *)(uVar18 + -8);
          if (lVar25 <= lVar23) goto LAB_0010267b;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar23 * 8) = local_58[lVar23];
          uVar18 = local_80;
        }
        if (lVar23 != 0) break;
        lVar23 = 1;
      } while( true );
    }
    uVar17 = _LC69;
    plVar1 = (long *)(uVar18 + -0x10);
    local_218[0] = 0;
    if (uVar18 != 0) {
      do {
        lVar23 = *plVar1;
        if (lVar23 == 0) goto LAB_00101b16;
        LOCK();
        lVar25 = *plVar1;
        bVar27 = lVar23 == lVar25;
        if (bVar27) {
          *plVar1 = lVar23 + 1;
          lVar25 = lVar23;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar25 != -1) {
        local_218[0] = local_80;
      }
LAB_00101b16:
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
    local_58[1] = *(long *)(param_1 + 4);
    local_80 = 0;
    local_58[0] = lVar13;
    iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar18 = local_80;
    if (iVar12 == 0) {
      lVar23 = 0;
      do {
        if (uVar18 == 0) {
          lVar25 = 0;
LAB_0010262b:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar25,"p_index","size()","",
                     false,false);
        }
        else {
          lVar25 = *(long *)(uVar18 + -8);
          if (lVar25 <= lVar23) goto LAB_0010262b;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar23 * 8) = local_58[lVar23];
          uVar18 = local_80;
        }
        if (lVar23 != 0) break;
        lVar23 = 1;
      } while( true );
    }
    local_200 = 0;
    plVar1 = (long *)(uVar18 + -0x10);
    local_1f8 = 0;
    local_1e8[0] = 0;
    local_208 = uVar17;
    if (uVar18 != 0) {
      do {
        lVar23 = *plVar1;
        if (lVar23 == 0) goto LAB_00101bd1;
        LOCK();
        lVar25 = *plVar1;
        bVar27 = lVar23 == lVar25;
        if (bVar27) {
          *plVar1 = lVar23 + 1;
          lVar25 = lVar23;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar25 != -1) {
        local_1e8[0] = local_80;
      }
LAB_00101bd1:
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
    local_58[1] = *(long *)(param_1 + 6);
    local_80 = 0;
    local_58[0] = lVar13;
    iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar18 = local_80;
    if (iVar12 == 0) {
      lVar23 = 0;
      do {
        if (uVar18 == 0) {
          lVar25 = 0;
LAB_00102713:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar25,"p_index","size()","",
                     false,false);
        }
        else {
          lVar25 = *(long *)(uVar18 + -8);
          if (lVar25 <= lVar23) goto LAB_00102713;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar23 * 8) = local_58[lVar23];
          uVar18 = local_80;
        }
        if (lVar23 != 0) break;
        lVar23 = 1;
      } while( true );
    }
    local_1d0 = 0;
    plVar1 = (long *)(uVar18 + -0x10);
    local_1c8 = 0;
    local_1b8[0] = 0;
    local_1d8 = uVar17;
    if (uVar18 != 0) {
      do {
        lVar23 = *plVar1;
        if (lVar23 == 0) goto LAB_00101c8c;
        LOCK();
        lVar25 = *plVar1;
        bVar27 = lVar23 == lVar25;
        if (bVar27) {
          *plVar1 = lVar23 + 1;
          lVar25 = lVar23;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar25 != -1) {
        local_1b8[0] = local_80;
      }
LAB_00101c8c:
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
    local_58[1] = *(long *)(param_1 + 8);
    local_80 = 0;
    local_58[0] = lVar13;
    iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar18 = local_80;
    if (iVar12 == 0) {
      lVar23 = 0;
      do {
        if (uVar18 == 0) {
          lVar25 = 0;
LAB_001026c3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar25,"p_index","size()","",
                     false,false);
        }
        else {
          lVar25 = *(long *)(uVar18 + -8);
          if (lVar25 <= lVar23) goto LAB_001026c3;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar23 * 8) = local_58[lVar23];
          uVar18 = local_80;
        }
        if (lVar23 != 0) break;
        lVar23 = 1;
      } while( true );
    }
    local_1a0 = 0;
    plVar1 = (long *)(uVar18 + -0x10);
    local_198 = 0;
    local_188[0] = 0;
    local_1a8 = uVar17;
    if (uVar18 != 0) {
      do {
        lVar23 = *plVar1;
        if (lVar23 == 0) goto LAB_00101d47;
        LOCK();
        lVar25 = *plVar1;
        bVar27 = lVar23 == lVar25;
        if (bVar27) {
          *plVar1 = lVar23 + 1;
          lVar25 = lVar23;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar25 != -1) {
        local_188[0] = local_80;
      }
LAB_00101d47:
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
    local_58[1] = *(long *)(param_1 + 10);
    local_80 = 0;
    lVar23 = 0;
    local_58[0] = lVar13;
    iVar12 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar18 = local_80;
    if (iVar12 == 0) {
      do {
        if (uVar18 == 0) {
          lVar13 = 0;
LAB_001025e3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar13,"p_index","size()","",
                     false,false);
        }
        else {
          lVar13 = *(long *)(uVar18 - 8);
          if (lVar13 <= lVar23) goto LAB_001025e3;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar23 * 8) = local_58[lVar23];
          uVar18 = local_80;
        }
        if (lVar23 != 0) break;
        lVar23 = 1;
      } while( true );
    }
    local_170 = 0;
    plVar1 = (long *)(uVar18 - 0x10);
    local_168 = 0;
    local_158[0] = 0;
    local_178 = uVar17;
    if (uVar18 != 0) {
      do {
        lVar13 = *plVar1;
        if (lVar13 == 0) goto LAB_00101e05;
        LOCK();
        lVar23 = *plVar1;
        bVar27 = lVar13 == lVar23;
        if (bVar27) {
          *plVar1 = lVar13 + 1;
          lVar23 = lVar13;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar23 != -1) {
        local_158[0] = local_80;
      }
LAB_00101e05:
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
    uVar16 = _LC12;
    local_138 = *(undefined8 *)(param_1 + 2);
    local_140 = 0;
    local_128[0] = 0;
    local_108 = *(undefined8 *)(param_1 + 6);
    local_148 = _LC12;
    local_d8 = *(undefined8 *)(param_1 + 8);
    local_110 = 0;
    local_a8 = *(undefined8 *)(param_1 + 10);
    local_f8[0] = 0;
    local_118 = _LC12;
    local_e0 = 0;
    local_c8[0] = 0;
    local_e8 = _LC12;
    local_b0 = 0;
    local_98[0] = 0;
    local_b8 = _LC12;
    RenderingDevice::get_singleton();
    pvVar14 = (void *)RenderingDevice::compute_list_begin();
    uVar18 = *(ulong *)(this + 0x358);
    if (*(long *)(this + 0x80) == 0) {
      lVar13 = 0;
LAB_00102763:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar13,
                 "p_variant","variant_defines.size()","",false,false);
LAB_001027a0:
      _err_print_error("bokeh_dof_compute","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                       0x9b,"Condition \"shader.is_null()\" is true.",0,0);
    }
    else {
      lVar13 = *(long *)(*(long *)(this + 0x80) + -8);
      if (lVar13 < 1) goto LAB_00102763;
      pcVar20 = *(char **)(this + 0x90);
      if (pcVar20 == (char *)0x0) {
LAB_00102a80:
        lVar13 = 0;
LAB_00102a83:
        uVar18 = 0;
LAB_00102aa0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar18,lVar13,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar13 = *(long *)(pcVar20 + -8);
      if (lVar13 < 1) goto LAB_00102a83;
      if (*pcVar20 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_001027a0;
      }
      if ((uVar18 == 0) || (*(uint *)(this + 0x13c) <= (uint)uVar18)) {
LAB_00102810:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_001027a0;
      }
      lVar23 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(this + 0x138)) * 0xa0 +
               *(long *)(*(long *)(this + 0x128) +
                        ((uVar18 & 0xffffffff) / (ulong)*(uint *)(this + 0x138)) * 8);
      if (*(int *)(lVar23 + 0x98) != (int)(uVar18 >> 0x20)) {
        if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00102810;
      }
      pVVar2 = (Version *)(this + 0x68);
      iVar12 = (int)lVar23;
      if (*(char *)(lVar23 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar13 = *(long *)(this + 0xe0);
        if (lVar13 != 0) {
          lVar25 = 0;
          do {
            if (*(long *)(lVar13 + -8) <= lVar25) break;
            if (*(char *)(lVar13 + lVar25) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar12);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar12);
            }
            lVar13 = *(long *)(this + 0xe0);
            lVar25 = lVar25 + 1;
          } while (lVar13 != 0);
        }
      }
      puVar4 = *(uint **)(this + 0xa0);
      if (puVar4 == (uint *)0x0) goto LAB_00102a80;
      lVar13 = *(long *)(puVar4 + -2);
      if (lVar13 < 1) goto LAB_00102a83;
      uVar18 = (ulong)*puVar4;
      lVar25 = *(long *)(lVar23 + 0x68);
      if (lVar25 == 0) goto LAB_00102e98;
      lVar13 = *(long *)(lVar25 + -8);
      if (lVar13 <= (long)uVar18) goto LAB_00102aa0;
      if (*(long *)(lVar25 + uVar18 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar12);
      }
      if (*(char *)(lVar23 + 0x90) == '\0') goto LAB_001027a0;
      plVar1 = *(long **)(lVar23 + 0x88);
      if (plVar1 == (long *)0x0) goto LAB_00102a80;
      lVar13 = plVar1[-1];
      if (lVar13 < 1) goto LAB_00102a83;
      lVar13 = *plVar1;
      if (lVar13 == 0) goto LAB_001027a0;
      uVar15 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar15,pvVar14,*(undefined8 *)(this + 0x360));
      uVar15 = RenderingDevice::get_singleton();
      local_88 = uVar16;
      local_80 = local_80 & 0xffffffffffffff00;
      local_78 = local_138;
      local_68[0] = 0;
      uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar13,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar15,pvVar14,uVar16,0);
      uVar16 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = local_208;
      local_80 = CONCAT71(local_80._1_7_,local_200);
      local_78 = local_1f8;
      if (local_1e8[0] == 0) {
        uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar13,1,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,1);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_1e8);
        lVar23 = local_68[0];
        uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar13,1,&local_88);
        RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,1);
        if (lVar23 != 0) {
          LOCK();
          plVar1 = (long *)(lVar23 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
          }
        }
      }
      *(uint *)(this + 8) = *param_1;
      *(uint *)(this + 0xc) = param_1[1];
      lVar13 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar13,pvVar14,uVar7);
      lVar13 = RenderingDevice::get_singleton();
      uVar11 = (uint)pvVar14;
      RenderingDevice::compute_list_dispatch_threads(lVar13,uVar11,*param_1,param_1[1]);
      lVar13 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar13);
      if (uVar26 < 2) {
        uVar5 = *(ulong *)(this + 0x358);
        uVar24 = (-(ulong)(uVar26 == 0) & 0xfffffffffffffffe) + 3;
        uVar26 = (-(uint)(uVar26 == 0) & 0xfffffffe) + 3;
        if (*(long *)(this + 0x80) == 0) {
          lVar13 = 0;
LAB_00103f7d:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar24,
                     lVar13,"p_variant","variant_defines.size()","",false,false);
        }
        else {
          lVar13 = *(long *)(*(long *)(this + 0x80) + -8);
          if (lVar13 <= (long)uVar24) goto LAB_00103f7d;
          lVar23 = *(long *)(this + 0x90);
          uVar18 = uVar24;
          if (lVar23 == 0) {
LAB_00103650:
            lVar13 = 0;
            uVar18 = uVar24;
            goto LAB_00102aa0;
          }
          lVar13 = *(long *)(lVar23 + -8);
          if (lVar13 <= (long)uVar24) goto LAB_00102aa0;
          uVar19 = (ulong)uVar26;
          if (*(char *)(lVar23 + uVar19) == '\0') {
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7
                             ,"Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                             ,0,0);
            goto LAB_001029af;
          }
          if ((uVar5 == 0) || (*(uint *)(this + 0x13c) <= (uint)uVar5)) {
LAB_00104148:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
          }
          else {
            lVar23 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x138)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x128) +
                              ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x138)) * 8);
            if (*(int *)(lVar23 + 0x98) != (int)(uVar5 >> 0x20)) {
              if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00104148;
            }
            iVar12 = (int)lVar23;
            if (*(char *)(lVar23 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar13 = *(long *)(this + 0xe0);
              if (lVar13 != 0) {
                lVar25 = 0;
                do {
                  if (*(long *)(lVar13 + -8) <= lVar25) break;
                  if (*(char *)(lVar13 + lVar25) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar12);
                  }
                  lVar13 = *(long *)(this + 0xe0);
                  lVar25 = lVar25 + 1;
                } while (lVar13 != 0);
              }
            }
            lVar25 = *(long *)(this + 0xa0);
            if (lVar25 == 0) goto LAB_00103650;
            lVar13 = *(long *)(lVar25 + -8);
            if (lVar13 <= (long)uVar24) goto LAB_00102aa0;
            uVar18 = (ulong)*(uint *)(lVar25 + uVar19 * 4);
            lVar25 = *(long *)(lVar23 + 0x68);
            if (lVar25 == 0) {
              lVar13 = 0;
              goto LAB_00102aa0;
            }
            lVar13 = *(long *)(lVar25 + -8);
            if (lVar13 <= (long)uVar18) goto LAB_00102aa0;
            if (*(long *)(lVar25 + uVar18 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar12);
            }
            if (*(char *)(lVar23 + 0x90) != '\0') {
              lVar23 = *(long *)(lVar23 + 0x88);
              if (lVar23 == 0) goto LAB_00103650;
              lVar13 = *(long *)(lVar23 + -8);
              uVar18 = uVar24;
              if (lVar13 <= (long)uVar24) goto LAB_00102aa0;
              lVar13 = *(long *)(lVar23 + uVar19 * 8);
              if (lVar13 == 0) goto LAB_001029af;
              uVar16 = RenderingDevice::get_singleton();
              RenderingDevice::compute_list_bind_compute_pipeline
                        (uVar16,pvVar14,*(undefined8 *)(this + (long)(int)uVar26 * 8 + 0x360));
              *(undefined4 *)(this + 0x24) =
                   *(undefined4 *)
                    (bokeh_dof_raster(RendererRD::BokehDOF::BokehBuffers_const&,RID,float,float,bool)
                     ::quality_samples + (long)(int)uVar3 * 4);
              if (uVar3 < 2) {
                uVar16 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = local_e8;
                local_80 = CONCAT71(local_80._1_7_,local_e0);
                local_78 = local_d8;
                if (local_c8[0] == 0) {
                  uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,0);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
                  lVar23 = local_68[0];
                  uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,0);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                uVar16 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = uVar17;
                local_80 = local_80 & 0xffffffffffffff00;
                local_78 = 0;
                if (local_218[0] == 0) {
                  uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar17,1);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_218);
                  lVar23 = local_68[0];
                  uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar17,1);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                fVar33 = _LC68 * *(float *)(this + 0x1c);
                *(int *)(this + 8) = (int)*param_1 >> 1;
                uVar26 = param_1[1];
                *(undefined4 *)(this + 0x44) = 1;
                *(int *)(this + 0xc) = (int)uVar26 >> 1;
                *(float *)(this + 0x1c) = fVar33;
                lVar23 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_set_push_constant(lVar23,pvVar14,uVar7);
                lVar23 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_dispatch_threads
                          (lVar23,uVar11,*(uint *)(this + 8),*(uint *)(this + 0xc));
                lVar23 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_add_barrier(lVar23);
                *(undefined4 *)(this + 0x40) = 1;
                uVar17 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = local_b8;
                local_80 = CONCAT71(local_80._1_7_,local_b0);
                local_78 = local_a8;
                if (local_98[0] == 0) {
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
                  lVar23 = local_68[0];
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                uVar17 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = local_1a8;
                local_80 = CONCAT71(local_80._1_7_,local_1a0);
                local_78 = local_198;
                if (local_188[0] == 0) {
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,1);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_188);
                  lVar23 = local_68[0];
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,1);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                lVar13 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_set_push_constant(lVar13,pvVar14,uVar7);
                lVar13 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_dispatch_threads
                          (lVar13,uVar11,*(uint *)(this + 8),*(uint *)(this + 0xc));
                lVar13 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_add_barrier(lVar13);
                uVar18 = *(ulong *)(this + 0x358);
                if (*(long *)(this + 0x80) == 0) {
                  lVar13 = 0;
LAB_0010429e:
                  _err_print_index_error
                            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6
                             ,6,lVar13,"p_variant","variant_defines.size()","",false,false);
                }
                else {
                  lVar13 = *(long *)(*(long *)(this + 0x80) + -8);
                  if (lVar13 < 7) goto LAB_0010429e;
                  lVar23 = *(long *)(this + 0x90);
                  if (lVar23 == 0) goto LAB_00103628;
                  lVar13 = *(long *)(lVar23 + -8);
                  if (lVar13 < 7) goto LAB_0010362b;
                  if (*(char *)(lVar23 + 6) == '\0') {
                    _err_print_error("version_get_shader",
                                     "./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                     ,0,0);
                    goto LAB_00103afa;
                  }
                  if ((uVar18 == 0) || (*(uint *)(this + 0x13c) <= (uint)uVar18)) {
LAB_00104347:
                    _err_print_error("version_get_shader",
                                     "./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                                     "Parameter \"version\" is null.",0,0);
                  }
                  else {
                    lVar23 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(this + 0x138)) * 0xa0 +
                             *(long *)(*(long *)(this + 0x128) +
                                      ((uVar18 & 0xffffffff) / (ulong)*(uint *)(this + 0x138)) * 8);
                    if (*(int *)(lVar23 + 0x98) != (int)(uVar18 >> 0x20)) {
                      if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                      goto LAB_00104347;
                    }
                    iVar12 = (int)lVar23;
                    if (*(char *)(lVar23 + 0x91) != '\0') {
                      ShaderRD::_initialize_version(pVVar2);
                      lVar13 = *(long *)(this + 0xe0);
                      if (lVar13 != 0) {
                        lVar25 = 0;
                        do {
                          if (*(long *)(lVar13 + -8) <= lVar25) break;
                          if (*(char *)(lVar13 + lVar25) == '\0') {
                            ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                          }
                          else {
                            ShaderRD::_compile_version_start(pVVar2,iVar12);
                          }
                          lVar13 = *(long *)(this + 0xe0);
                          lVar25 = lVar25 + 1;
                        } while (lVar13 != 0);
                      }
                    }
                    lVar25 = *(long *)(this + 0xa0);
                    if (lVar25 == 0) goto LAB_00103628;
                    lVar13 = *(long *)(lVar25 + -8);
                    if (lVar13 < 7) goto LAB_0010362b;
                    uVar18 = (ulong)*(uint *)(lVar25 + 0x18);
                    lVar25 = *(long *)(lVar23 + 0x68);
                    if (lVar25 == 0) goto LAB_00102e98;
                    lVar13 = *(long *)(lVar25 + -8);
                    if (lVar13 <= (long)uVar18) goto LAB_00102aa0;
                    if (*(long *)(lVar25 + uVar18 * 8) != 0) {
                      ShaderRD::_compile_version_end(pVVar2,iVar12);
                    }
                    if (*(char *)(lVar23 + 0x90) != '\0') {
                      lVar23 = *(long *)(lVar23 + 0x88);
                      if (lVar23 == 0) goto LAB_00103628;
                      lVar13 = *(long *)(lVar23 + -8);
                      if (lVar13 < 7) goto LAB_0010362b;
                      lVar13 = *(long *)(lVar23 + 0x30);
                      if (lVar13 != 0) {
                        uVar17 = RenderingDevice::get_singleton();
                        RenderingDevice::compute_list_bind_compute_pipeline
                                  (uVar17,pvVar14,*(undefined8 *)(this + 0x390));
                        uVar17 = RenderingDevice::get_singleton();
                        local_68[0] = 0;
                        local_88 = local_148;
                        local_80 = CONCAT71(local_80._1_7_,local_140);
                        local_78 = local_138;
                        if (local_128[0] == 0) {
                          uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar8,lVar13,0,&local_88);
                          RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                        }
                        else {
                          CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_128);
                          lVar23 = local_68[0];
                          uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar8,lVar13,0,&local_88);
                          RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                          if (lVar23 != 0) {
                            LOCK();
                            plVar1 = (long *)(lVar23 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              Memory::free_static((void *)(local_68[0] + -0x10),false);
                            }
                          }
                        }
                        uVar17 = RenderingDevice::get_singleton();
                        pCVar21 = (CowData *)local_158;
                        local_88 = local_178;
                        local_80 = CONCAT71(local_80._1_7_,local_170);
                        local_78 = local_168;
                        if (local_158[0] == 0) goto LAB_00103c6f;
                        goto LAB_0010351f;
                      }
                    }
                  }
                }
LAB_00103afa:
                _err_print_error("bokeh_dof_compute",
                                 "servers/rendering/renderer_rd/effects/bokeh_dof.cpp",0xe0,
                                 "Condition \"shader.is_null()\" is true.",0,0);
              }
              else {
                uVar16 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = local_118;
                local_80 = CONCAT71(local_80._1_7_,local_110);
                local_78 = local_108;
                if (local_f8[0] == 0) {
                  uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,0);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_f8);
                  lVar23 = local_68[0];
                  uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,0);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                uVar16 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = uVar17;
                local_80 = local_80 & 0xffffffffffffff00;
                local_78 = 0;
                if (local_218[0] == 0) {
                  uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar17,1);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_218);
                  lVar23 = local_68[0];
                  uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar17,1);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                lVar23 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_set_push_constant(lVar23,pvVar14,uVar7);
                lVar23 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_dispatch_threads
                          (lVar23,uVar11,*(uint *)(this + 8),*(uint *)(this + 0xc));
                lVar23 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_add_barrier(lVar23);
                *(undefined4 *)(this + 0x40) = 1;
                uVar17 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = local_148;
                local_80 = CONCAT71(local_80._1_7_,local_140);
                local_78 = local_138;
                if (local_128[0] == 0) {
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_128);
                  lVar23 = local_68[0];
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,0,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                uVar17 = RenderingDevice::get_singleton();
                local_68[0] = 0;
                local_88 = local_1d8;
                local_80 = CONCAT71(local_80._1_7_,local_1d0);
                local_78 = local_1c8;
                if (local_1b8[0] == 0) {
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,1);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_1b8);
                  lVar23 = local_68[0];
                  uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                     (pUVar8,lVar13,1,&local_88);
                  RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,1);
                  if (lVar23 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar23 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_68[0] + -0x10),false);
                    }
                  }
                }
                lVar13 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_set_push_constant(lVar13,pvVar14,uVar7);
                lVar13 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_dispatch_threads
                          (lVar13,uVar11,*(uint *)(this + 8),*(uint *)(this + 0xc));
                lVar13 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_add_barrier(lVar13);
LAB_0010337c:
                RenderingDevice::get_singleton();
                RenderingDevice::compute_list_end();
              }
              goto joined_r0x00103394;
            }
          }
        }
LAB_001029af:
        _err_print_error("bokeh_dof_compute","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                         0xae,"Condition \"shader.is_null()\" is true.",0,0);
      }
      else {
        uVar18 = *(ulong *)(this + 0x358);
        if (*(long *)(this + 0x80) == 0) {
          lVar13 = 0;
LAB_00103df5:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,5,
                     lVar13,"p_variant","variant_defines.size()","",false,false);
        }
        else {
          lVar13 = *(long *)(*(long *)(this + 0x80) + -8);
          if (lVar13 < 6) goto LAB_00103df5;
          lVar23 = *(long *)(this + 0x90);
          if (lVar23 == 0) {
LAB_001033a0:
            lVar13 = 0;
LAB_001033a3:
            uVar18 = 5;
            goto LAB_00102aa0;
          }
          lVar13 = *(long *)(lVar23 + -8);
          if (lVar13 < 6) goto LAB_001033a3;
          if (*(char *)(lVar23 + 5) == '\0') {
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7
                             ,"Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                             ,0,0);
            goto LAB_0010228d;
          }
          if ((uVar18 != 0) && ((uint)uVar18 < *(uint *)(this + 0x13c))) {
            lVar23 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(this + 0x138)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x128) +
                              ((uVar18 & 0xffffffff) / (ulong)*(uint *)(this + 0x138)) * 8);
            if (*(int *)(lVar23 + 0x98) != (int)(uVar18 >> 0x20)) {
              if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00103f50;
            }
            iVar12 = (int)lVar23;
            if (*(char *)(lVar23 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar13 = *(long *)(this + 0xe0);
              if (lVar13 != 0) {
                lVar25 = 0;
                do {
                  if (*(long *)(lVar13 + -8) <= lVar25) break;
                  if (*(char *)(lVar13 + lVar25) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar12);
                  }
                  lVar13 = *(long *)(this + 0xe0);
                  lVar25 = lVar25 + 1;
                } while (lVar13 != 0);
              }
            }
            lVar25 = *(long *)(this + 0xa0);
            if (lVar25 == 0) goto LAB_001033a0;
            lVar13 = *(long *)(lVar25 + -8);
            if (lVar13 < 6) goto LAB_001033a3;
            uVar18 = (ulong)*(uint *)(lVar25 + 0x14);
            lVar25 = *(long *)(lVar23 + 0x68);
            if (lVar25 == 0) {
LAB_00102e98:
              lVar13 = 0;
              goto LAB_00102aa0;
            }
            lVar13 = *(long *)(lVar25 + -8);
            if (lVar13 <= (long)uVar18) goto LAB_00102aa0;
            if (*(long *)(lVar25 + uVar18 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar12);
            }
            if (*(char *)(lVar23 + 0x90) == '\0') goto LAB_0010228d;
            lVar23 = *(long *)(lVar23 + 0x88);
            if (lVar23 == 0) goto LAB_001033a0;
            lVar13 = *(long *)(lVar23 + -8);
            if (lVar13 < 6) goto LAB_001033a3;
            lVar13 = *(long *)(lVar23 + 0x28);
            if (lVar13 == 0) goto LAB_0010228d;
            uVar16 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_compute_pipeline
                      (uVar16,pvVar14,*(undefined8 *)(this + 0x388));
            *(undefined4 *)(this + 0x24) = 0;
            *(undefined4 *)(this + 0x20) =
                 *(undefined4 *)
                  (bokeh_dof_raster(RendererRD::BokehDOF::BokehBuffers_const&,RID,float,float,bool)
                   ::quality_scale + (long)(int)uVar3 * 4);
            uVar16 = RenderingDevice::get_singleton();
            local_68[0] = 0;
            local_88 = local_e8;
            local_80 = CONCAT71(local_80._1_7_,local_e0);
            local_78 = local_d8;
            if (local_c8[0] == 0) {
              uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar8,lVar13,0,&local_88);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,0);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
              lVar23 = local_68[0];
              uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar8,lVar13,0,&local_88);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar15,0);
              if (lVar23 != 0) {
                LOCK();
                plVar1 = (long *)(lVar23 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_68[0] + -0x10),false);
                }
              }
            }
            uVar16 = RenderingDevice::get_singleton();
            local_68[0] = 0;
            local_88 = uVar17;
            local_80 = local_80 & 0xffffffffffffff00;
            local_78 = 0;
            if (local_218[0] == 0) {
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar8,lVar13,1,&local_88);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar17,1);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_218);
              lVar23 = local_68[0];
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar8,lVar13,1,&local_88);
              RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar14,uVar17,1);
              if (lVar23 != 0) {
                LOCK();
                plVar1 = (long *)(lVar23 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_68[0] + -0x10),false);
                }
              }
            }
            *(int *)(this + 8) = (int)*param_1 >> 1;
            uVar26 = param_1[1];
            *(undefined4 *)(this + 0x44) = 1;
            *(int *)(this + 0xc) = (int)uVar26 >> 1;
            lVar13 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_set_push_constant(lVar13,pvVar14,uVar7);
            lVar13 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_dispatch_threads
                      (lVar13,uVar11,*(uint *)(this + 8),*(uint *)(this + 0xc));
            lVar13 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_add_barrier(lVar13);
            uVar18 = *(ulong *)(this + 0x358);
            if (*(long *)(this + 0x80) == 0) {
              lVar13 = 0;
LAB_00103fbf:
              _err_print_index_error
                        ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,6,
                         lVar13,"p_variant","variant_defines.size()","",false,false);
            }
            else {
              lVar13 = *(long *)(*(long *)(this + 0x80) + -8);
              if (lVar13 < 7) goto LAB_00103fbf;
              lVar23 = *(long *)(this + 0x90);
              if (lVar23 == 0) {
LAB_00103628:
                lVar13 = 0;
LAB_0010362b:
                uVar18 = 6;
                goto LAB_00102aa0;
              }
              lVar13 = *(long *)(lVar23 + -8);
              if (lVar13 < 7) goto LAB_0010362b;
              if (*(char *)(lVar23 + 6) == '\0') {
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xa7,
                                 "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                 ,0,0);
                goto LAB_00102e6a;
              }
              if ((uVar18 == 0) || (*(uint *)(this + 0x13c) <= (uint)uVar18)) {
LAB_001041b0:
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xaa,"Parameter \"version\" is null.",0,0);
              }
              else {
                lVar23 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(this + 0x138)) * 0xa0 +
                         *(long *)(*(long *)(this + 0x128) +
                                  ((uVar18 & 0xffffffff) / (ulong)*(uint *)(this + 0x138)) * 8);
                if (*(int *)(lVar23 + 0x98) != (int)(uVar18 >> 0x20)) {
                  if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_001041b0;
                }
                iVar12 = (int)lVar23;
                if (*(char *)(lVar23 + 0x91) != '\0') {
                  ShaderRD::_initialize_version(pVVar2);
                  lVar13 = *(long *)(this + 0xe0);
                  if (lVar13 != 0) {
                    lVar25 = 0;
                    do {
                      if (*(long *)(lVar13 + -8) <= lVar25) break;
                      if (*(char *)(lVar13 + lVar25) == '\0') {
                        ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                      }
                      else {
                        ShaderRD::_compile_version_start(pVVar2,iVar12);
                      }
                      lVar13 = *(long *)(this + 0xe0);
                      lVar25 = lVar25 + 1;
                    } while (lVar13 != 0);
                  }
                }
                lVar25 = *(long *)(this + 0xa0);
                if (lVar25 == 0) goto LAB_00103628;
                lVar13 = *(long *)(lVar25 + -8);
                if (lVar13 < 7) goto LAB_0010362b;
                uVar18 = (ulong)*(uint *)(lVar25 + 0x18);
                lVar25 = *(long *)(lVar23 + 0x68);
                if (lVar25 == 0) goto LAB_00102e98;
                lVar13 = *(long *)(lVar25 + -8);
                if (lVar13 <= (long)uVar18) goto LAB_00102aa0;
                if (*(long *)(lVar25 + uVar18 * 8) != 0) {
                  ShaderRD::_compile_version_end(pVVar2,iVar12);
                }
                if (*(char *)(lVar23 + 0x90) != '\0') {
                  lVar23 = *(long *)(lVar23 + 0x88);
                  if (lVar23 == 0) goto LAB_00103628;
                  lVar13 = *(long *)(lVar23 + -8);
                  if (lVar13 < 7) goto LAB_0010362b;
                  lVar13 = *(long *)(lVar23 + 0x30);
                  if (lVar13 != 0) {
                    uVar17 = RenderingDevice::get_singleton();
                    RenderingDevice::compute_list_bind_compute_pipeline
                              (uVar17,pvVar14,*(undefined8 *)(this + 0x390));
                    uVar17 = RenderingDevice::get_singleton();
                    local_68[0] = 0;
                    local_88 = local_148;
                    local_80 = CONCAT71(local_80._1_7_,local_140);
                    local_78 = local_138;
                    if (local_128[0] == 0) {
                      uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                         (pUVar8,lVar13,0,&local_88);
                      RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                    }
                    else {
                      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_128);
                      lVar23 = local_68[0];
                      uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                         (pUVar8,lVar13,0,&local_88);
                      RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,0);
                      if (lVar23 != 0) {
                        LOCK();
                        plVar1 = (long *)(lVar23 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          Memory::free_static((void *)(local_68[0] + -0x10),false);
                        }
                      }
                    }
                    uVar17 = RenderingDevice::get_singleton();
                    local_88 = local_1a8;
                    local_80 = CONCAT71(local_80._1_7_,local_1a0);
                    local_78 = local_198;
                    if (local_188[0] == 0) {
LAB_00103c6f:
                      local_68[0] = 0;
                      uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                         (pUVar8,lVar13,1,&local_88);
                      RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,1);
                    }
                    else {
                      pCVar21 = (CowData *)local_188;
LAB_0010351f:
                      local_68[0] = 0;
                      CowData<RID>::_ref((CowData<RID> *)local_68,pCVar21);
                      lVar23 = local_68[0];
                      uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                         (pUVar8,lVar13,1,&local_88);
                      RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar14,uVar16,1);
                      if (lVar23 != 0) {
                        LOCK();
                        plVar1 = (long *)(lVar23 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          Memory::free_static((void *)(local_68[0] + -0x10),false);
                        }
                      }
                    }
                    *(uint *)(this + 8) = *param_1;
                    uVar26 = param_1[1];
                    *(undefined8 *)(this + 0x40) = 0;
                    *(uint *)(this + 0xc) = uVar26;
                    lVar13 = RenderingDevice::get_singleton();
                    RenderingDevice::compute_list_set_push_constant(lVar13,pvVar14,uVar7);
                    lVar13 = RenderingDevice::get_singleton();
                    RenderingDevice::compute_list_dispatch_threads
                              (lVar13,uVar11,*param_1,param_1[1]);
                    goto LAB_0010337c;
                  }
                }
              }
            }
LAB_00102e6a:
            _err_print_error("bokeh_dof_compute",
                             "servers/rendering/renderer_rd/effects/bokeh_dof.cpp",0x111,
                             "Condition \"shader.is_null()\" is true.",0,0);
            goto joined_r0x00103394;
          }
LAB_00103f50:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
        }
LAB_0010228d:
        _err_print_error("bokeh_dof_compute","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                         0xf4,"Condition \"shader.is_null()\" is true.",0,0);
      }
joined_r0x00103394:
      if (local_98[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_98[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_98[0] + -0x10),false);
        }
      }
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
      plVar1 = (long *)(local_f8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_f8[0] + -0x10),false);
      }
    }
    if (local_128[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_128[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_128[0] + -0x10),false);
      }
    }
    if (local_158[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_158[0] - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_158[0] - 0x10),false);
      }
    }
    if (local_188[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_188[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_188[0] + -0x10),false);
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
    if (local_1e8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_1e8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_1e8[0] + -0x10),false);
      }
    }
    if (local_218[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_218[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_218[0] + -0x10),false);
          return;
        }
        goto LAB_00104371;
      }
    }
  }
  else {
    _err_print_error("bokeh_dof_compute","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",0x58,
                     "Condition \"prefer_raster_effects\" is true.",
                     "Can\'t use compute version of bokeh depth of field with the mobile renderer.",
                     0,0);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104371:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::BokehDOF::bokeh_dof_raster(RendererRD::BokehDOF::BokehBuffers const&, RID, float,
   float, bool) */

void __thiscall
RendererRD::BokehDOF::bokeh_dof_raster
          (undefined4 param_1_00,undefined4 param_2,BokehDOF *this,int *param_1,undefined8 param_5,
          uint param_6)

{
  long *plVar1;
  Version *pVVar2;
  BokehDOF BVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  UniformSetCacheRD *pUVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  void *pvVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong *puVar21;
  long *plVar22;
  ulong uVar23;
  char *pcVar24;
  CowData *pCVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  BokehDOF *pBVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  byte bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  long local_2b8;
  long local_278 [2];
  ulong local_268;
  undefined1 local_260;
  ulong local_258;
  long local_248 [2];
  ulong local_238;
  undefined1 local_230;
  undefined8 local_228;
  long local_218 [2];
  ulong local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  long local_1e8 [2];
  ulong local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  long local_1b8 [2];
  ulong local_1a8;
  undefined1 local_1a0;
  ulong local_198;
  long local_188 [2];
  ulong local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  long local_158;
  ulong local_148;
  undefined1 local_140;
  undefined8 local_138;
  long local_128 [2];
  ulong local_118;
  undefined1 local_110;
  undefined8 local_108;
  long local_f8 [2];
  ulong local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  long local_c8 [2];
  ulong local_b8;
  undefined1 local_b0;
  ulong local_a8;
  long local_98 [2];
  ulong local_88;
  ulong local_80;
  ulong local_78;
  long local_68 [2];
  long local_58 [5];
  
  pUVar11 = UniformSetCacheRD::singleton;
  bVar35 = 0;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*this == (BokehDOF)0x0) {
    _err_print_error("bokeh_dof_raster","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",0x126,
                     "Condition \"!prefer_raster_effects\" is true.",
                     "Can\'t blur-based depth of field with the clustered renderer.",0,0);
  }
  else {
    if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar20 = 0x129;
        pcVar24 = "Parameter \"uniform_set_cache\" is null.";
LAB_0010641b:
        _err_print_error("bokeh_dof_raster","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                         uVar20,pcVar24,0,0);
        return;
      }
      goto LAB_0010815e;
    }
    lVar16 = RendererRD::MaterialStorage::get_singleton();
    if (lVar16 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar20 = 299;
        pcVar24 = "Parameter \"material_storage\" is null.";
        goto LAB_0010641b;
      }
      goto LAB_0010815e;
    }
    cVar12 = RendererCameraAttributes::camera_attributes_get_dof_far_enabled
                       (RenderingServerGlobals::camera_attributes,param_5);
    fVar36 = (float)RendererCameraAttributes::camera_attributes_get_dof_far_distance
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar37 = (float)RendererCameraAttributes::camera_attributes_get_dof_far_transition
                              (RenderingServerGlobals::camera_attributes,param_5);
    cVar13 = RendererCameraAttributes::camera_attributes_get_dof_near_enabled
                       (RenderingServerGlobals::camera_attributes,param_5);
    fVar38 = (float)RendererCameraAttributes::camera_attributes_get_dof_near_distance
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar39 = (float)RendererCameraAttributes::camera_attributes_get_dof_near_transition
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar40 = (float)RendererCameraAttributes::camera_attributes_get_dof_blur_amount
                              (RenderingServerGlobals::camera_attributes,param_5);
    fVar40 = fVar40 * __LC65;
    lVar28 = 0;
    uVar15 = RenderingServerGlobals::camera_attributes[1];
    uVar4 = *RenderingServerGlobals::camera_attributes;
    uVar10 = (int)this + 8;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    puVar26 = (undefined8 *)((ulong)(this + 0x10) & 0xfffffffffffffff8);
    for (uVar23 = (ulong)((uVar10 - (int)(undefined8 *)((ulong)(this + 0x10) & 0xfffffffffffffff8))
                          + 0x60 >> 3); uVar23 != 0; uVar23 = uVar23 - 1) {
      *puVar26 = 0;
      puVar26 = puVar26 + (ulong)bVar35 * -2 + 1;
    }
    *(uint *)(this + 0x18) = param_6 & 0xff;
    lVar16 = *(long *)(lVar16 + 0x50);
    local_80 = 0;
    *(int *)(this + 8) = *param_1;
    iVar14 = param_1[1];
    *(ulong *)(this + 0x10) = CONCAT44(param_1_00,param_2);
    *(int *)(this + 0xc) = iVar14;
    local_58[1] = *(long *)(param_1 + 2);
    *(float *)(this + 0x1c) = fVar40;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_00105873:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_00105873;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    uVar7 = _LC69;
    plVar1 = (long *)(uVar23 + -0x10);
    local_278[0] = 0;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_00104591;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_278[0] = local_80;
      }
LAB_00104591:
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
    local_58[1] = *(long *)(param_1 + 4);
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      lVar28 = 0;
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_00105733:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_00105733;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    local_260 = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_258 = 0;
    local_248[0] = 0;
    local_268 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_0010464c;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_248[0] = local_80;
      }
LAB_0010464c:
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
    local_58[1] = *(long *)(param_1 + 6);
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      lVar28 = 0;
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_00105783:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_00105783;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    local_230 = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_228 = 0;
    local_218[0] = 0;
    local_238 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_00104707;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_218[0] = local_80;
      }
LAB_00104707:
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
    local_58[1] = *(long *)(param_1 + 8);
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      lVar28 = 0;
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_00105953:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_00105953;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    local_200 = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_1f8 = 0;
    local_1e8[0] = 0;
    local_208 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_001047c2;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_1e8[0] = local_80;
      }
LAB_001047c2:
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
    local_58[1] = *(long *)(param_1 + 10);
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      lVar28 = 0;
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_00105903:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_00105903;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    local_1d0 = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_1c8 = 0;
    local_1b8[0] = 0;
    local_1d8 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_0010487d;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_1b8[0] = local_80;
      }
LAB_0010487d:
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
    local_58[1] = *(long *)(param_1 + 0x16);
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      lVar28 = 0;
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_001057d3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_001057d3;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    local_1a0 = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_198 = 0;
    local_188[0] = 0;
    local_1a8 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_00104938;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_188[0] = local_80;
      }
LAB_00104938:
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
    local_58[1] = *(long *)(param_1 + 0x18);
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      lVar28 = 0;
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_001056e3:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_001056e3;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    local_170[0] = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_168 = 0;
    local_158 = 0;
    local_178 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_001049f3;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_158 = local_80;
      }
LAB_001049f3:
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
    local_58[1] = *(long *)(param_1 + 0x1a);
    lVar28 = 0;
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      do {
        if (uVar23 == 0) {
          lVar32 = 0;
LAB_00105823:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          lVar32 = *(long *)(uVar23 + -8);
          if (lVar32 <= lVar28) goto LAB_00105823;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar28 * 8) = local_58[lVar28];
          uVar23 = local_80;
        }
        if (lVar28 != 0) break;
        lVar28 = 1;
      } while( true );
    }
    local_140 = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_138 = 0;
    local_128[0] = 0;
    local_148 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar28 = *plVar1;
        if (lVar28 == 0) goto LAB_00104ab1;
        LOCK();
        lVar32 = *plVar1;
        bVar34 = lVar28 == lVar32;
        if (bVar34) {
          *plVar1 = lVar28 + 1;
          lVar32 = lVar28;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar32 != -1) {
        local_128[0] = local_80;
      }
LAB_00104ab1:
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
    local_58[1] = *(long *)(param_1 + 0x1c);
    local_80 = 0;
    local_58[0] = lVar16;
    iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar23 = local_80;
    if (iVar14 == 0) {
      lVar16 = 0;
      do {
        if (uVar23 == 0) {
          lVar28 = 0;
LAB_001058bb:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar28,"p_index","size()","",
                     false,false);
        }
        else {
          lVar28 = *(long *)(uVar23 + -8);
          if (lVar28 <= lVar16) goto LAB_001058bb;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar16 * 8) = local_58[lVar16];
          uVar23 = local_80;
        }
        if (lVar16 != 0) break;
        lVar16 = 1;
      } while( true );
    }
    local_110 = 0;
    plVar1 = (long *)(uVar23 + -0x10);
    local_108 = 0;
    local_f8[0] = 0;
    local_118 = uVar7;
    if (uVar23 != 0) {
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_00104b6c;
        LOCK();
        lVar28 = *plVar1;
        bVar34 = lVar16 == lVar28;
        if (bVar34) {
          *plVar1 = lVar16 + 1;
          lVar28 = lVar16;
        }
        UNLOCK();
      } while (!bVar34);
      if (lVar28 != -1) {
        local_f8[0] = local_80;
      }
LAB_00104b6c:
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
    if (cVar12 == '\0') {
      if (cVar13 != '\0') goto LAB_00104ba2;
      goto LAB_001055d0;
    }
    *(undefined4 *)(this + 0x34) = 1;
    *(ulong *)(this + 0x38) = CONCAT44(fVar37 + fVar36,fVar36);
    if (cVar13 != '\0') {
LAB_00104ba2:
      *(undefined4 *)(this + 0x28) = 1;
      *(ulong *)(this + 0x2c) = CONCAT44(fVar38 - fVar39,fVar38);
    }
    uVar23 = *(ulong *)(this + 0x358);
    if (*(long *)(this + 0x1f8) == 0) {
      lVar16 = 0;
LAB_0010695e:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar16,
                 "p_variant","variant_defines.size()","",false,false);
LAB_001069a0:
      _err_print_error("bokeh_dof_raster","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                       0x162,"Condition \"shader.is_null()\" is true.",0,0);
    }
    else {
      lVar16 = *(long *)(*(long *)(this + 0x1f8) + -8);
      if (lVar16 < 1) goto LAB_0010695e;
      pcVar24 = *(char **)(this + 0x208);
      if (pcVar24 == (char *)0x0) {
LAB_0010643f:
        lVar16 = 0;
LAB_00106442:
        uVar23 = 0;
LAB_0010645f:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar23,lVar16,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      lVar16 = *(long *)(pcVar24 + -8);
      if (lVar16 < 1) goto LAB_00106442;
      if (*pcVar24 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_001069a0;
      }
      if ((uVar23 == 0) || (*(uint *)(this + 0x2b4) <= (uint)uVar23)) {
LAB_00107746:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_001069a0;
      }
      lVar28 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x2b0)) * 0xa0 +
               *(long *)(*(long *)(this + 0x2a0) +
                        ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x2b0)) * 8);
      if (*(int *)(lVar28 + 0x98) != (int)(uVar23 >> 0x20)) {
        if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00107746;
      }
      pVVar2 = (Version *)(this + 0x1e0);
      iVar14 = (int)lVar28;
      if (*(char *)(lVar28 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar16 = *(long *)(this + 600);
        if (lVar16 != 0) {
          lVar32 = 0;
          do {
            if (*(long *)(lVar16 + -8) <= lVar32) break;
            if (*(char *)(lVar16 + lVar32) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar14);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar14);
            }
            lVar16 = *(long *)(this + 600);
            lVar32 = lVar32 + 1;
          } while (lVar16 != 0);
        }
      }
      puVar6 = *(uint **)(this + 0x218);
      if (puVar6 == (uint *)0x0) goto LAB_0010643f;
      lVar16 = *(long *)(puVar6 + -2);
      if (lVar16 < 1) goto LAB_00106442;
      uVar23 = (ulong)*puVar6;
      lVar32 = *(long *)(lVar28 + 0x68);
      if (lVar32 == 0) {
LAB_001064b0:
        lVar16 = 0;
        goto LAB_0010645f;
      }
      lVar16 = *(long *)(lVar32 + -8);
      if (lVar16 <= (long)uVar23) goto LAB_0010645f;
      if (*(long *)(lVar32 + uVar23 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar14);
      }
      if (*(char *)(lVar28 + 0x90) == '\0') goto LAB_001069a0;
      plVar1 = *(long **)(lVar28 + 0x88);
      if (plVar1 == (long *)0x0) goto LAB_0010643f;
      lVar16 = plVar1[-1];
      if (lVar16 < 1) goto LAB_00106442;
      lVar16 = *plVar1;
      if (lVar16 == 0) goto LAB_001069a0;
      uVar20 = *(undefined8 *)(param_1 + 0x14);
      uVar17 = RenderingDevice::get_singleton();
      local_58[0] = 0;
      local_58[1] = 0;
      local_80 = 0;
      pvVar18 = (void *)RenderingDevice::draw_list_begin
                                  (_LC74,uVar17,uVar20,0,&local_88,0,local_58,0);
      uVar23 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(uVar23 + -0x10),false);
        }
      }
      uVar17 = RenderingDevice::get_singleton();
      pBVar29 = this + 0x398;
      uVar19 = RenderingDevice::get_singleton();
      lVar28 = RenderingDevice::framebuffer_get_format(uVar19,uVar20);
      if (*(long *)(this + 0x3d8) == 0) {
        _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h"
                         ,0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                         "Attempted to use an unused shader variant (shader is null),",0,0);
        lVar28 = 0;
      }
      else {
        while( true ) {
          uVar23 = local_88 >> 8;
          local_88 = uVar23 << 8;
          LOCK();
          BVar3 = *pBVar29;
          if (BVar3 == (BokehDOF)0x0) {
            *pBVar29 = (BokehDOF)0x1;
          }
          UNLOCK();
          if (BVar3 == (BokehDOF)0x0) break;
          local_88 = uVar23 << 8;
          do {
          } while (*pBVar29 != (BokehDOF)0x0);
        }
        if (*(uint *)(this + 0x4c8) != 0) {
          plVar22 = *(long **)(this + 0x4c0);
          plVar1 = plVar22 + (ulong)*(uint *)(this + 0x4c8) * 5;
          do {
            if ((((*plVar22 == -1) && (lVar28 == plVar22[1])) &&
                (this[0x3e6] == *(BokehDOF *)((long)plVar22 + 0x14))) &&
               (((int)plVar22[2] == 0 && ((int)plVar22[3] == 0)))) {
              lVar28 = plVar22[4];
              this[0x398] = (BokehDOF)0x0;
              goto LAB_00105af0;
            }
            plVar22 = plVar22 + 5;
          } while (plVar22 != plVar1);
        }
        lVar28 = PipelineCacheRD::_generate_version
                           ((long)pBVar29,-1,SUB81(lVar28,0),(uint)(byte)this[0x3e6],0);
        this[0x398] = (BokehDOF)0x0;
      }
LAB_00105af0:
      RenderingDevice::draw_list_bind_render_pipeline(uVar17,pvVar18,lVar28);
      uVar20 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = local_268;
      local_80 = CONCAT71(local_80._1_7_,local_260);
      local_78 = local_258;
      if (local_248[0] == 0) {
        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar11,lVar16,0,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_248);
        lVar28 = local_68[0];
        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar11,lVar16,0,&local_88);
        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
        if (lVar28 != 0) {
          LOCK();
          plVar1 = (long *)(lVar28 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
          }
        }
      }
      lVar16 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar16,pvVar18,uVar10);
      lVar16 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar16,SUB81(pvVar18,0),0,1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      if (uVar15 < 2) {
        uVar31 = *(ulong *)(this + 0x358);
        uVar30 = (-(ulong)(uVar15 == 0) & 0xfffffffffffffffe) + 3;
        uVar33 = (-(uint)(uVar15 == 0) & 0xfffffffe) + 3;
        if (*(long *)(this + 0x1f8) == 0) {
          lVar16 = 0;
LAB_001069cd:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar30,
                     lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_00106a07:
          _err_print_error("bokeh_dof_raster","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                           0x174,"Condition \"shader.is_null()\" is true.",0,0);
        }
        else {
          lVar16 = *(long *)(*(long *)(this + 0x1f8) + -8);
          if (lVar16 <= (long)uVar30) goto LAB_001069cd;
          lVar28 = *(long *)(this + 0x208);
          uVar23 = uVar30;
          if (lVar28 == 0) goto LAB_001077c4;
          lVar16 = *(long *)(lVar28 + -8);
          if (lVar16 <= (long)uVar30) goto LAB_0010645f;
          uVar27 = (ulong)uVar33;
          if (*(char *)(lVar28 + uVar27) == '\0') {
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7
                             ,"Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                             ,0,0);
            goto LAB_00106a07;
          }
          if ((uVar31 == 0) || (*(uint *)(this + 0x2b4) <= (uint)uVar31)) {
LAB_00107c84:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
            goto LAB_00106a07;
          }
          lVar28 = ((uVar31 & 0xffffffff) % (ulong)*(uint *)(this + 0x2b0)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x2a0) +
                            ((uVar31 & 0xffffffff) / (ulong)*(uint *)(this + 0x2b0)) * 8);
          if (*(int *)(lVar28 + 0x98) != (int)(uVar31 >> 0x20)) {
            if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00107c84;
          }
          iVar14 = (int)lVar28;
          if (*(char *)(lVar28 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar2);
            lVar16 = *(long *)(this + 600);
            if (lVar16 != 0) {
              lVar32 = 0;
              do {
                if (*(long *)(lVar16 + -8) <= lVar32) break;
                if (*(char *)(lVar16 + lVar32) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar2,iVar14);
                }
                lVar16 = *(long *)(this + 600);
                lVar32 = lVar32 + 1;
              } while (lVar16 != 0);
            }
          }
          lVar32 = *(long *)(this + 0x218);
          if (lVar32 == 0) goto LAB_001077c4;
          lVar16 = *(long *)(lVar32 + -8);
          if (lVar16 <= (long)uVar30) goto LAB_0010645f;
          uVar23 = (ulong)*(uint *)(lVar32 + uVar27 * 4);
          lVar32 = *(long *)(lVar28 + 0x68);
          if (lVar32 == 0) goto LAB_001064b0;
          lVar16 = *(long *)(lVar32 + -8);
          if (lVar16 <= (long)uVar23) goto LAB_0010645f;
          if (*(long *)(lVar32 + uVar23 * 8) != 0) {
            ShaderRD::_compile_version_end(pVVar2,iVar14);
          }
          fVar36 = _LC68;
          if (*(char *)(lVar28 + 0x90) == '\0') goto LAB_00106a07;
          lVar28 = *(long *)(lVar28 + 0x88);
          uVar23 = uVar30;
          if (lVar28 == 0) goto LAB_001077c4;
          lVar16 = *(long *)(lVar28 + -8);
          if (lVar16 <= (long)uVar30) goto LAB_0010645f;
          local_2b8 = *(long *)(lVar28 + uVar27 * 8);
          if (local_2b8 == 0) goto LAB_00106a07;
          if (uVar4 < 2) {
            *(int *)(this + 8) = *param_1 >> 1;
            iVar14 = param_1[1];
            *(undefined4 *)(this + 0x44) = 1;
            *(float *)(this + 0x20) = fVar36;
            *(int *)(this + 0xc) = iVar14 >> 1;
            uVar5 = *(undefined4 *)
                     (bokeh_dof_raster(RendererRD::BokehDOF::BokehBuffers_const&,RID,float,float,bool)
                      ::quality_samples + (long)(int)uVar4 * 4);
            *(float *)(this + 0x1c) = *(float *)(this + 0x1c) * fVar36;
            *(undefined4 *)(this + 0x24) = uVar5;
LAB_0010754c:
            uVar20 = *(undefined8 *)(param_1 + 0x10);
          }
          else {
            *(undefined4 *)(this + 0x20) = 0x3f000000;
            *(undefined4 *)(this + 0x24) =
                 *(undefined4 *)
                  (bokeh_dof_raster(RendererRD::BokehDOF::BokehBuffers_const&,RID,float,float,bool)
                   ::quality_samples + (long)(int)uVar4 * 4);
            if (*(int *)(this + 0x44) != 0) goto LAB_0010754c;
            uVar20 = *(undefined8 *)(param_1 + 0xe);
          }
          uVar17 = RenderingDevice::get_singleton();
          local_58[0] = 0;
          local_58[1] = 0;
          local_80 = 0;
          pvVar18 = (void *)RenderingDevice::draw_list_begin
                                      (_LC74,uVar17,uVar20,0,&local_88,0,local_58,0);
          uVar23 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 - 0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(uVar23 - 0x10),false);
            }
          }
          uVar17 = RenderingDevice::get_singleton();
          lVar28 = (long)(int)uVar33;
          pBVar29 = this + lVar28 * 0x138 + 0x398;
          uVar19 = RenderingDevice::get_singleton();
          lVar16 = RenderingDevice::framebuffer_get_format(uVar19,uVar20);
          if (*(long *)(pBVar29 + 0x40) == 0) {
            _err_print_error("get_render_pipeline",
                             "./servers/rendering/renderer_rd/pipeline_cache_rd.h",0x49,
                             "Condition \"shader.is_null()\" is true. Returning: RID()",
                             "Attempted to use an unused shader variant (shader is null),",0,0);
            lVar16 = 0;
          }
          else {
            while( true ) {
              uVar23 = local_88 >> 8;
              local_88 = uVar23 << 8;
              LOCK();
              BVar3 = *pBVar29;
              if (BVar3 == (BokehDOF)0x0) {
                *pBVar29 = (BokehDOF)0x1;
              }
              UNLOCK();
              if (BVar3 == (BokehDOF)0x0) break;
              local_88 = uVar23 << 8;
              do {
              } while (*pBVar29 != (BokehDOF)0x0);
            }
            if (*(uint *)(this + lVar28 * 0x138 + 0x4c8) != 0) {
              plVar22 = *(long **)(this + lVar28 * 0x138 + 0x4c0);
              plVar1 = plVar22 + (ulong)*(uint *)(this + lVar28 * 0x138 + 0x4c8) * 5;
              do {
                if ((((*plVar22 == -1) && (lVar16 == plVar22[1])) &&
                    (this[lVar28 * 0x138 + 0x3e6] == *(BokehDOF *)((long)plVar22 + 0x14))) &&
                   (((int)plVar22[2] == 0 && ((int)plVar22[3] == 0)))) {
                  lVar16 = plVar22[4];
                  *pBVar29 = (BokehDOF)0x0;
                  goto LAB_0010600a;
                }
                plVar22 = plVar22 + 5;
              } while (plVar1 != plVar22);
            }
            lVar16 = PipelineCacheRD::_generate_version
                               ((long)pBVar29,-1,SUB81(lVar16,0),
                                (uint)(byte)this[lVar28 * 0x138 + 0x3e6],0);
            *pBVar29 = (BokehDOF)0x0;
          }
LAB_0010600a:
          RenderingDevice::draw_list_bind_render_pipeline(uVar17,pvVar18,lVar16);
          uVar20 = RenderingDevice::get_singleton();
          local_68[0] = 0;
          local_88 = uVar7;
          local_80 = local_80 & 0xffffffffffffff00;
          local_78 = 0;
          if (local_278[0] == 0) {
            uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar11,local_2b8,0,&local_88);
            RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_278);
            lVar16 = local_68[0];
            uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar11,local_2b8,0,&local_88);
            RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
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
          uVar20 = RenderingDevice::get_singleton();
          local_68[0] = 0;
          local_88 = local_1a8;
          local_80 = CONCAT71(local_80._1_7_,local_1a0);
          local_78 = local_198;
          if (local_188[0] == 0) {
            uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar11,local_2b8,1,&local_88);
            RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_188);
            lVar16 = local_68[0];
            uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar11,local_2b8,1,&local_88);
            RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
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
          lVar16 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_set_push_constant(lVar16,pvVar18,uVar10);
          lVar16 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_draw(lVar16,SUB81(pvVar18,0),0,1);
          RenderingDevice::get_singleton();
          RenderingDevice::draw_list_end();
          if (*(int *)(this + 0x44) == 0) {
            uVar7 = *(ulong *)(this + 0x358);
            uVar31 = (-(ulong)(uVar15 == 0) & 0xfffffffffffffffe) + 4;
            uVar33 = (-(uint)(uVar15 == 0) & 0xfffffffe) + 4;
            if (*(long *)(this + 0x1f8) == 0) {
              lVar16 = 0;
LAB_00108033:
              _err_print_index_error
                        ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,
                         uVar31,lVar16,"p_variant","variant_defines.size()","",false,false);
            }
            else {
              lVar16 = *(long *)(*(long *)(this + 0x1f8) + -8);
              if (lVar16 <= (long)uVar31) goto LAB_00108033;
              lVar28 = *(long *)(this + 0x208);
              uVar23 = uVar31;
              if (lVar28 == 0) {
LAB_001077c4:
                lVar16 = 0;
                goto LAB_0010645f;
              }
              lVar16 = *(long *)(lVar28 + -8);
              if (lVar16 <= (long)uVar31) goto LAB_0010645f;
              uVar30 = (ulong)uVar33;
              if (*(char *)(lVar28 + uVar30) == '\0') {
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xa7,
                                 "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                 ,0,0);
                goto LAB_00106305;
              }
              if ((uVar7 == 0) || (*(uint *)(this + 0x2b4) <= (uint)uVar7)) {
LAB_00107f98:
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xaa,"Parameter \"version\" is null.",0,0);
              }
              else {
                lVar28 = *(long *)(*(long *)(this + 0x2a0) +
                                  ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x2b0)) * 8) +
                         ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x2b0)) * 0xa0;
                if (*(int *)(lVar28 + 0x98) != (int)(uVar7 >> 0x20)) {
                  if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0,
                                     *(long *)(this + 0x2a0));
                  }
                  goto LAB_00107f98;
                }
                iVar14 = (int)lVar28;
                if (*(char *)(lVar28 + 0x91) != '\0') {
                  ShaderRD::_initialize_version(pVVar2);
                  lVar16 = *(long *)(this + 600);
                  if (lVar16 != 0) {
                    lVar32 = 0;
                    do {
                      if (*(long *)(lVar16 + -8) <= lVar32) break;
                      if (*(char *)(lVar16 + lVar32) == '\0') {
                        ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                      }
                      else {
                        ShaderRD::_compile_version_start(pVVar2,iVar14);
                      }
                      lVar16 = *(long *)(this + 600);
                      lVar32 = lVar32 + 1;
                    } while (lVar16 != 0);
                  }
                }
                lVar32 = *(long *)(this + 0x218);
                if (lVar32 == 0) goto LAB_001077c4;
                lVar16 = *(long *)(lVar32 + -8);
                if (lVar16 <= (long)uVar31) goto LAB_0010645f;
                lVar8 = *(long *)(lVar28 + 0x68);
                uVar23 = (ulong)*(uint *)(lVar32 + uVar30 * 4);
                if (lVar8 == 0) {
                  lVar16 = 0;
                  goto LAB_0010645f;
                }
                lVar16 = *(long *)(lVar8 + -8);
                if (lVar16 <= (long)uVar23) goto LAB_0010645f;
                if (*(long *)(lVar8 + uVar23 * 8) != 0) {
                  ShaderRD::_compile_version_end(pVVar2,iVar14);
                }
                if (*(char *)(lVar28 + 0x90) != '\0') {
                  lVar28 = *(long *)(lVar28 + 0x88);
                  uVar23 = uVar31;
                  if (lVar28 == 0) goto LAB_001077c4;
                  lVar16 = *(long *)(lVar28 + -8);
                  if (lVar16 <= (long)uVar31) goto LAB_0010645f;
                  local_2b8 = *(long *)(lVar28 + uVar30 * 8);
                  if (local_2b8 != 0) {
                    *(undefined4 *)(this + 0x40) = 1;
                    pBVar29 = this + uVar30 * 0x138 + 0x398;
                    if (*(int *)(this + 0x44) != 0) goto LAB_00106b7d;
                    local_e8 = local_238;
                    uVar20 = *(undefined8 *)(param_1 + 0xc);
                    pCVar25 = (CowData *)local_218;
                    local_c8[0] = 0;
                    local_e0 = local_230;
                    local_d8 = local_228;
                    if (local_218[0] != 0) goto LAB_00106bcf;
                    goto LAB_001076d2;
                  }
                }
              }
            }
LAB_00106305:
            _err_print_error("bokeh_dof_raster",
                             "servers/rendering/renderer_rd/effects/bokeh_dof.cpp",0x195,
                             "Condition \"shader.is_null()\" is true.",0,0);
          }
          else {
            *(undefined4 *)(this + 0x40) = 1;
LAB_00106b7d:
            uVar20 = *(undefined8 *)(param_1 + 0x12);
            pCVar25 = (CowData *)local_1e8;
            local_c8[0] = 0;
            local_e8 = local_208;
            local_e0 = local_200;
            local_d8 = local_1f8;
            if (local_1e8[0] == 0) {
LAB_00106be7:
              puVar21 = &local_148;
            }
            else {
LAB_00106bcf:
              local_c8[0] = 0;
              CowData<RID>::_ref((CowData<RID> *)local_c8,pCVar25);
              if (*(int *)(this + 0x44) != 0) goto LAB_00106be7;
LAB_001076d2:
              puVar21 = &local_178;
            }
            local_b8 = *puVar21;
            local_98[0] = 0;
            local_b0 = (undefined1)puVar21[1];
            local_a8 = puVar21[2];
            if (puVar21[4] != 0) {
              CowData<RID>::_ref((CowData<RID> *)local_98,(CowData *)(puVar21 + 4));
            }
            uVar17 = RenderingDevice::get_singleton();
            local_58[0] = 0;
            local_58[1] = 0;
            local_80 = 0;
            pvVar18 = (void *)RenderingDevice::draw_list_begin
                                        (_LC74,uVar17,uVar20,0,&local_88,0,local_58,0);
            uVar23 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar1 = (long *)(local_80 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(uVar23 + -0x10),false);
              }
            }
            uVar17 = RenderingDevice::get_singleton();
            uVar19 = RenderingDevice::get_singleton();
            lVar16 = RenderingDevice::framebuffer_get_format(uVar19,uVar20);
            if (*(long *)(pBVar29 + 0x40) == 0) {
              _err_print_error("get_render_pipeline",
                               "./servers/rendering/renderer_rd/pipeline_cache_rd.h",0x49,
                               "Condition \"shader.is_null()\" is true. Returning: RID()",
                               "Attempted to use an unused shader variant (shader is null),",0,0);
              lVar16 = 0;
            }
            else {
              while( true ) {
                uVar23 = local_88 >> 8;
                local_88 = uVar23 << 8;
                LOCK();
                BVar3 = *pBVar29;
                if (BVar3 == (BokehDOF)0x0) {
                  *pBVar29 = (BokehDOF)0x1;
                }
                UNLOCK();
                if (BVar3 == (BokehDOF)0x0) break;
                local_88 = uVar23 << 8;
                do {
                } while (*pBVar29 != (BokehDOF)0x0);
              }
              if (*(uint *)(this + (long)(int)uVar33 * 0x138 + 0x4c8) != 0) {
                plVar22 = *(long **)(this + (long)(int)uVar33 * 0x138 + 0x4c0);
                plVar1 = plVar22 + (ulong)*(uint *)(this + (long)(int)uVar33 * 0x138 + 0x4c8) * 5;
                do {
                  if ((((*plVar22 == -1) && (lVar16 == plVar22[1])) &&
                      (this[(long)(int)uVar33 * 0x138 + 0x3e6] ==
                       *(BokehDOF *)((long)plVar22 + 0x14))) &&
                     (((int)plVar22[2] == 0 && ((int)plVar22[3] == 0)))) {
                    lVar16 = plVar22[4];
                    *pBVar29 = (BokehDOF)0x0;
                    goto LAB_00106d78;
                  }
                  plVar22 = plVar22 + 5;
                } while (plVar1 != plVar22);
              }
              lVar16 = PipelineCacheRD::_generate_version
                                 ((long)pBVar29,-1,SUB81(lVar16,0),
                                  (uint)(byte)this[(long)(int)uVar33 * 0x138 + 0x3e6],0);
              *pBVar29 = (BokehDOF)0x0;
            }
LAB_00106d78:
            RenderingDevice::draw_list_bind_render_pipeline(uVar17,pvVar18,lVar16);
            uVar20 = RenderingDevice::get_singleton();
            local_68[0] = 0;
            local_88 = local_e8;
            local_80 = CONCAT71(local_80._1_7_,local_e0);
            local_78 = local_d8;
            if (local_c8[0] == 0) {
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar11,local_2b8,0,&local_88);
              RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
              lVar16 = local_68[0];
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar11,local_2b8,0,&local_88);
              RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
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
            uVar20 = RenderingDevice::get_singleton();
            local_68[0] = 0;
            local_88 = local_b8;
            local_80 = CONCAT71(local_80._1_7_,local_b0);
            local_78 = local_a8;
            if (local_98[0] == 0) {
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar11,local_2b8,1,&local_88);
              RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
              lVar16 = local_68[0];
              uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar11,local_2b8,1,&local_88);
              RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
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
            lVar16 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar16,pvVar18,uVar10);
            lVar16 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_draw(lVar16,SUB81(pvVar18,0),0,1);
            RenderingDevice::get_singleton();
            RenderingDevice::draw_list_end();
            if (*(int *)(this + 0x44) != 0) {
              uVar23 = *(ulong *)(this + 0x358);
              if (*(long *)(this + 0x1f8) == 0) {
                lVar16 = 0;
LAB_00107fc5:
                _err_print_index_error
                          ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,6
                           ,lVar16,"p_variant","variant_defines.size()","",false,false);
              }
              else {
                lVar16 = *(long *)(*(long *)(this + 0x1f8) + -8);
                if (lVar16 < 7) goto LAB_00107fc5;
                lVar28 = *(long *)(this + 0x208);
                if (lVar28 == 0) {
LAB_001078b3:
                  lVar16 = 0;
LAB_001078b6:
                  uVar23 = 6;
                  goto LAB_0010645f;
                }
                lVar16 = *(long *)(lVar28 + -8);
                if (lVar16 < 7) goto LAB_001078b6;
                if (*(char *)(lVar28 + 6) == '\0') {
                  _err_print_error("version_get_shader",
                                   "./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                                   "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                   ,0,0);
                  goto LAB_0010704c;
                }
                if ((uVar23 == 0) || (*(uint *)(this + 0x2b4) <= (uint)uVar23)) {
LAB_001080ac:
                  _err_print_error("version_get_shader",
                                   "./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                                   "Parameter \"version\" is null.",0,0);
                }
                else {
                  lVar28 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x2b0)) * 0xa0 +
                           *(long *)(*(long *)(this + 0x2a0) +
                                    ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x2b0)) * 8);
                  if (*(int *)(lVar28 + 0x98) != (int)(uVar23 >> 0x20)) {
                    uVar15 = *(int *)(lVar28 + 0x98) + 0x80000000;
                    if (uVar15 < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,uVar15);
                    }
                    goto LAB_001080ac;
                  }
                  iVar14 = (int)lVar28;
                  if (*(char *)(lVar28 + 0x91) != '\0') {
                    ShaderRD::_initialize_version(pVVar2);
                    lVar16 = *(long *)(this + 600);
                    if (lVar16 != 0) {
                      lVar32 = 0;
                      do {
                        if (*(long *)(lVar16 + -8) <= lVar32) break;
                        if (*(char *)(lVar16 + lVar32) == '\0') {
                          ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                        }
                        else {
                          ShaderRD::_compile_version_start(pVVar2,iVar14);
                        }
                        lVar16 = *(long *)(this + 600);
                        lVar32 = lVar32 + 1;
                      } while (lVar16 != 0);
                    }
                  }
                  lVar32 = *(long *)(this + 0x218);
                  if (lVar32 == 0) goto LAB_001078b3;
                  lVar16 = *(long *)(lVar32 + -8);
                  if (lVar16 < 7) goto LAB_001078b6;
                  uVar23 = (ulong)*(uint *)(lVar32 + 0x18);
                  lVar32 = *(long *)(lVar28 + 0x68);
                  if (lVar32 == 0) goto LAB_001064b0;
                  lVar16 = *(long *)(lVar32 + -8);
                  if (lVar16 <= (long)uVar23) goto LAB_0010645f;
                  if (*(long *)(lVar32 + uVar23 * 8) != 0) {
                    ShaderRD::_compile_version_end(pVVar2,iVar14);
                  }
                  if (*(char *)(lVar28 + 0x90) != '\0') {
                    lVar28 = *(long *)(lVar28 + 0x88);
                    if (lVar28 == 0) goto LAB_001078b3;
                    lVar16 = *(long *)(lVar28 + -8);
                    if (lVar16 < 7) goto LAB_001078b6;
                    lVar16 = *(long *)(lVar28 + 0x30);
                    if (lVar16 != 0) {
                      uVar20 = *(undefined8 *)(param_1 + 0xc);
                      uVar17 = RenderingDevice::get_singleton();
                      local_58[0] = 0;
                      local_58[1] = 0;
                      local_80 = 0;
                      pvVar18 = (void *)RenderingDevice::draw_list_begin
                                                  (_LC74,uVar17,uVar20,0,&local_88,0,local_58,0);
                      uVar23 = local_80;
                      if (local_80 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_80 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_80 = 0;
                          Memory::free_static((void *)(uVar23 + -0x10),false);
                        }
                      }
                      uVar17 = RenderingDevice::get_singleton();
                      pBVar29 = this + 0xae8;
                      uVar19 = RenderingDevice::get_singleton();
                      lVar28 = RenderingDevice::framebuffer_get_format(uVar19,uVar20);
                      if (*(long *)(this + 0xb28) == 0) {
                        _err_print_error("get_render_pipeline",
                                         "./servers/rendering/renderer_rd/pipeline_cache_rd.h",0x49,
                                         "Condition \"shader.is_null()\" is true. Returning: RID()",
                                         "Attempted to use an unused shader variant (shader is null),"
                                         ,0,0);
                        lVar28 = 0;
                      }
                      else {
                        while( true ) {
                          uVar23 = local_88 >> 8;
                          local_88 = uVar23 << 8;
                          LOCK();
                          BVar3 = *pBVar29;
                          if (BVar3 == (BokehDOF)0x0) {
                            *pBVar29 = (BokehDOF)0x1;
                          }
                          UNLOCK();
                          if (BVar3 == (BokehDOF)0x0) break;
                          local_88 = uVar23 << 8;
                          do {
                          } while (*pBVar29 != (BokehDOF)0x0);
                        }
                        if (*(uint *)(this + 0xc18) != 0) {
                          plVar22 = *(long **)(this + 0xc10);
                          plVar1 = plVar22 + (ulong)*(uint *)(this + 0xc18) * 5;
                          do {
                            if ((((*plVar22 == -1) && (lVar28 == plVar22[1])) &&
                                (this[0xb36] == *(BokehDOF *)((long)plVar22 + 0x14))) &&
                               (((int)plVar22[2] == 0 && ((int)plVar22[3] == 0)))) {
                              lVar28 = plVar22[4];
                              this[0xae8] = (BokehDOF)0x0;
                              goto LAB_00107282;
                            }
                            plVar22 = plVar22 + 5;
                          } while (plVar1 != plVar22);
                        }
                        lVar28 = PipelineCacheRD::_generate_version
                                           ((long)pBVar29,-1,SUB81(lVar28,0),(uint)(byte)this[0xb36]
                                            ,0);
                        this[0xae8] = (BokehDOF)0x0;
                      }
LAB_00107282:
                      RenderingDevice::draw_list_bind_render_pipeline(uVar17,pvVar18,lVar28);
                      uVar20 = RenderingDevice::get_singleton();
                      local_68[0] = 0;
                      local_88 = local_1d8;
                      local_80 = CONCAT71(local_80._1_7_,local_1d0);
                      local_78 = local_1c8;
                      if (local_1b8[0] == 0) {
                        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                           (pUVar11,lVar16,0,&local_88);
                        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
                      }
                      else {
                        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_1b8);
                        lVar28 = local_68[0];
                        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                           (pUVar11,lVar16,0,&local_88);
                        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
                        if (lVar28 != 0) {
                          LOCK();
                          plVar1 = (long *)(lVar28 + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            Memory::free_static((void *)(local_68[0] + -0x10),false);
                          }
                        }
                      }
                      uVar20 = RenderingDevice::get_singleton();
                      local_68[0] = 0;
                      local_88 = local_118;
                      local_80 = CONCAT71(local_80._1_7_,local_110);
                      local_78 = local_108;
                      if (local_f8[0] == 0) {
                        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                           (pUVar11,lVar16,1,&local_88);
                        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
                      }
                      else {
                        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_f8);
                        lVar28 = local_68[0];
                        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                           (pUVar11,lVar16,1,&local_88);
                        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
                        if (lVar28 != 0) {
                          LOCK();
                          plVar1 = (long *)(lVar28 + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            Memory::free_static((void *)(local_68[0] + -0x10),false);
                          }
                        }
                      }
                      uVar20 = RenderingDevice::get_singleton();
                      local_68[0] = 0;
                      local_88 = local_1a8;
                      local_80 = CONCAT71(local_80._1_7_,local_1a0);
                      local_78 = local_198;
                      if (local_188[0] == 0) {
                        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                           (pUVar11,lVar16,2,&local_88);
                        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,2);
                      }
                      else {
                        CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_188);
                        lVar28 = local_68[0];
                        uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                           (pUVar11,lVar16,2,&local_88);
                        RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,2);
                        if (lVar28 != 0) {
                          LOCK();
                          plVar1 = (long *)(lVar28 + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            Memory::free_static((void *)(local_68[0] + -0x10),false);
                          }
                        }
                      }
                      lVar16 = RenderingDevice::get_singleton();
                      RenderingDevice::draw_list_set_push_constant(lVar16,pvVar18,uVar10);
                      lVar16 = RenderingDevice::get_singleton();
                      RenderingDevice::draw_list_draw(lVar16,SUB81(pvVar18,0),0,1);
                      RenderingDevice::get_singleton();
                      RenderingDevice::draw_list_end();
                      goto joined_r0x001074fd;
                    }
                  }
                }
              }
LAB_0010704c:
              _err_print_error("bokeh_dof_raster",
                               "servers/rendering/renderer_rd/effects/bokeh_dof.cpp",0x1ab,
                               "Condition \"shader.is_null()\" is true.",0,0);
            }
joined_r0x001074fd:
            if (local_98[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_98[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_98[0] + -0x10),false);
              }
            }
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
        }
      }
      else {
        uVar23 = *(ulong *)(this + 0x358);
        if (*(long *)(this + 0x1f8) == 0) {
          lVar16 = 0;
LAB_00107a69:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,5,
                     lVar16,"p_variant","variant_defines.size()","",false,false);
        }
        else {
          lVar16 = *(long *)(*(long *)(this + 0x1f8) + -8);
          if (lVar16 < 6) goto LAB_00107a69;
          lVar28 = *(long *)(this + 0x208);
          if (lVar28 == 0) {
LAB_00106ac2:
            lVar16 = 0;
LAB_00106ac5:
            uVar23 = 5;
            goto LAB_0010645f;
          }
          lVar16 = *(long *)(lVar28 + -8);
          if (lVar16 < 6) goto LAB_00106ac5;
          if (*(char *)(lVar28 + 5) == '\0') {
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7
                             ,"Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                             ,0,0);
            goto LAB_00105d00;
          }
          if ((uVar23 == 0) || (*(uint *)(this + 0x2b4) <= (uint)uVar23)) {
LAB_00107b23:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
          }
          else {
            lVar28 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x2b0)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x2a0) +
                              ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x2b0)) * 8);
            if (*(int *)(lVar28 + 0x98) != (int)(uVar23 >> 0x20)) {
              if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00107b23;
            }
            iVar14 = (int)lVar28;
            if (*(char *)(lVar28 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar16 = *(long *)(this + 600);
              if (lVar16 != 0) {
                lVar32 = 0;
                do {
                  if (*(long *)(lVar16 + -8) <= lVar32) break;
                  if (*(char *)(lVar16 + lVar32) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar14);
                  }
                  lVar16 = *(long *)(this + 600);
                  lVar32 = lVar32 + 1;
                } while (lVar16 != 0);
              }
            }
            lVar32 = *(long *)(this + 0x218);
            if (lVar32 == 0) goto LAB_00106ac2;
            lVar16 = *(long *)(lVar32 + -8);
            if (lVar16 < 6) goto LAB_00106ac5;
            uVar23 = (ulong)*(uint *)(lVar32 + 0x14);
            lVar32 = *(long *)(lVar28 + 0x68);
            if (lVar32 == 0) goto LAB_001064b0;
            lVar16 = *(long *)(lVar32 + -8);
            if (lVar16 <= (long)uVar23) goto LAB_0010645f;
            if (*(long *)(lVar32 + uVar23 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar14);
            }
            if (*(char *)(lVar28 + 0x90) != '\0') {
              lVar28 = *(long *)(lVar28 + 0x88);
              if (lVar28 == 0) goto LAB_00106ac2;
              lVar16 = *(long *)(lVar28 + -8);
              if (lVar16 < 6) goto LAB_00106ac5;
              lVar16 = *(long *)(lVar28 + 0x28);
              if (lVar16 == 0) goto LAB_00105d00;
              uVar20 = *(undefined8 *)(param_1 + 0x10);
              *(int *)(this + 8) = *param_1 >> 1;
              iVar14 = param_1[1];
              *(undefined4 *)(this + 0x44) = 1;
              *(undefined4 *)(this + 0x24) = 0;
              *(int *)(this + 0xc) = iVar14 >> 1;
              *(undefined4 *)(this + 0x20) =
                   *(undefined4 *)
                    (bokeh_dof_raster(RendererRD::BokehDOF::BokehBuffers_const&,RID,float,float,bool)
                     ::quality_scale + (long)(int)uVar4 * 4);
              uVar17 = RenderingDevice::get_singleton();
              local_58[0] = 0;
              local_58[1] = 0;
              local_80 = 0;
              pvVar18 = (void *)RenderingDevice::draw_list_begin
                                          (_LC74,uVar17,uVar20,0,&local_88,0,local_58,0);
              uVar23 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar1 = (long *)(local_80 - 0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(uVar23 - 0x10),false);
                }
              }
              uVar17 = RenderingDevice::get_singleton();
              pBVar29 = this + 0x9b0;
              uVar19 = RenderingDevice::get_singleton();
              lVar28 = RenderingDevice::framebuffer_get_format(uVar19,uVar20);
              if (*(long *)(this + 0x9f0) == 0) {
                _err_print_error("get_render_pipeline",
                                 "./servers/rendering/renderer_rd/pipeline_cache_rd.h",0x49,
                                 "Condition \"shader.is_null()\" is true. Returning: RID()",
                                 "Attempted to use an unused shader variant (shader is null),",0,0);
                lVar28 = 0;
              }
              else {
                while( true ) {
                  uVar23 = local_88 >> 8;
                  local_88 = uVar23 << 8;
                  LOCK();
                  BVar3 = *pBVar29;
                  if (BVar3 == (BokehDOF)0x0) {
                    *pBVar29 = (BokehDOF)0x1;
                  }
                  UNLOCK();
                  if (BVar3 == (BokehDOF)0x0) break;
                  local_88 = uVar23 << 8;
                  do {
                  } while (*pBVar29 != (BokehDOF)0x0);
                }
                if (*(uint *)(this + 0xae0) != 0) {
                  plVar22 = *(long **)(this + 0xad8);
                  plVar1 = plVar22 + (ulong)*(uint *)(this + 0xae0) * 5;
                  do {
                    if ((((*plVar22 == -1) && (lVar28 == plVar22[1])) &&
                        (this[0x9fe] == *(BokehDOF *)((long)plVar22 + 0x14))) &&
                       (((int)plVar22[2] == 0 && ((int)plVar22[3] == 0)))) {
                      lVar28 = plVar22[4];
                      this[0x9b0] = (BokehDOF)0x0;
                      goto LAB_0010667a;
                    }
                    plVar22 = plVar22 + 5;
                  } while (plVar22 != plVar1);
                }
                lVar28 = PipelineCacheRD::_generate_version
                                   ((long)pBVar29,-1,SUB81(lVar28,0),(uint)(byte)this[0x9fe],0);
                this[0x9b0] = (BokehDOF)0x0;
              }
LAB_0010667a:
              RenderingDevice::draw_list_bind_render_pipeline(uVar17,pvVar18,lVar28);
              uVar20 = RenderingDevice::get_singleton();
              local_68[0] = 0;
              local_88 = uVar7;
              local_80 = local_80 & 0xffffffffffffff00;
              local_78 = 0;
              if (local_278[0] == 0) {
                uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                   (pUVar11,lVar16,0,&local_88);
                RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_278);
                lVar28 = local_68[0];
                uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                   (pUVar11,lVar16,0,&local_88);
                RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
                if (lVar28 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar28 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_68[0] + -0x10),false);
                  }
                }
              }
              uVar20 = RenderingDevice::get_singleton();
              local_68[0] = 0;
              local_88 = local_1a8;
              local_80 = CONCAT71(local_80._1_7_,local_1a0);
              local_78 = local_198;
              if (local_188[0] == 0) {
                uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                   (pUVar11,lVar16,1,&local_88);
                RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_188);
                lVar28 = local_68[0];
                uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                   (pUVar11,lVar16,1,&local_88);
                RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
                if (lVar28 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar28 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_68[0] + -0x10),false);
                  }
                }
              }
              lVar16 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_set_push_constant(lVar16,pvVar18,uVar10);
              lVar16 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_draw(lVar16,SUB81(pvVar18,0),0,1);
              RenderingDevice::get_singleton();
              RenderingDevice::draw_list_end();
              if (*(int *)(this + 0x44) == 0) {
                uVar20 = RendererRD::CopyEffects::get_singleton();
                RendererRD::CopyEffects::copy_raster
                          (uVar20,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0xc));
                goto LAB_001055d0;
              }
              uVar23 = *(ulong *)(this + 0x358);
              if (*(long *)(this + 0x1f8) == 0) {
                lVar16 = 0;
LAB_00107dc6:
                _err_print_index_error
                          ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,6
                           ,lVar16,"p_variant","variant_defines.size()","",false,false);
LAB_00106931:
                _err_print_error("bokeh_dof_raster",
                                 "servers/rendering/renderer_rd/effects/bokeh_dof.cpp",0x1de,
                                 "Condition \"shader.is_null()\" is true.",0,0);
                goto LAB_001055d0;
              }
              lVar16 = *(long *)(*(long *)(this + 0x1f8) + -8);
              if (lVar16 < 7) goto LAB_00107dc6;
              lVar28 = *(long *)(this + 0x208);
              if (lVar28 != 0) {
                lVar16 = *(long *)(lVar28 + -8);
                if (6 < lVar16) {
                  if (*(char *)(lVar28 + 6) == '\0') {
                    _err_print_error("version_get_shader",
                                     "./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                     ,0,0);
                    goto LAB_00106931;
                  }
                  if ((uVar23 == 0) || (*(uint *)(this + 0x2b4) <= (uint)uVar23)) {
LAB_00107f32:
                    _err_print_error("version_get_shader",
                                     "./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                                     "Parameter \"version\" is null.",0,0);
                  }
                  else {
                    lVar28 = ((uVar23 & 0xffffffff) % (ulong)*(uint *)(this + 0x2b0)) * 0xa0 +
                             *(long *)(*(long *)(this + 0x2a0) +
                                      ((uVar23 & 0xffffffff) / (ulong)*(uint *)(this + 0x2b0)) * 8);
                    if (*(int *)(lVar28 + 0x98) != (int)(uVar23 >> 0x20)) {
                      if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                      goto LAB_00107f32;
                    }
                    iVar14 = (int)lVar28;
                    if (*(char *)(lVar28 + 0x91) != '\0') {
                      ShaderRD::_initialize_version(pVVar2);
                      lVar16 = *(long *)(this + 600);
                      if (lVar16 != 0) {
                        lVar32 = 0;
                        do {
                          if (*(long *)(lVar16 + -8) <= lVar32) break;
                          if (*(char *)(lVar16 + lVar32) == '\0') {
                            ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                          }
                          else {
                            ShaderRD::_compile_version_start(pVVar2,iVar14);
                          }
                          lVar16 = *(long *)(this + 600);
                          lVar32 = lVar32 + 1;
                        } while (lVar16 != 0);
                      }
                    }
                    lVar32 = *(long *)(this + 0x218);
                    if (lVar32 == 0) goto LAB_001078b3;
                    lVar16 = *(long *)(lVar32 + -8);
                    if (lVar16 < 7) goto LAB_001078b6;
                    uVar23 = (ulong)*(uint *)(lVar32 + 0x18);
                    lVar32 = *(long *)(lVar28 + 0x68);
                    if (lVar32 == 0) goto LAB_001064b0;
                    lVar16 = *(long *)(lVar32 + -8);
                    if (lVar16 <= (long)uVar23) goto LAB_0010645f;
                    if (*(long *)(lVar32 + uVar23 * 8) != 0) {
                      ShaderRD::_compile_version_end(pVVar2,iVar14);
                    }
                    if (*(char *)(lVar28 + 0x90) != '\0') {
                      lVar28 = *(long *)(lVar28 + 0x88);
                      if (lVar28 == 0) goto LAB_001078b3;
                      lVar16 = *(long *)(lVar28 + -8);
                      if (lVar16 < 7) goto LAB_001078b6;
                      lVar16 = *(long *)(lVar28 + 0x30);
                      if (lVar16 != 0) {
                        uVar20 = *(undefined8 *)(param_1 + 0xc);
                        uVar17 = RenderingDevice::get_singleton();
                        local_58[0] = 0;
                        local_58[1] = 0;
                        local_80 = 0;
                        pvVar18 = (void *)RenderingDevice::draw_list_begin
                                                    (_LC74,uVar17,uVar20,0,&local_88,0,local_58,0);
                        uVar23 = local_80;
                        if (local_80 != 0) {
                          LOCK();
                          plVar1 = (long *)(local_80 + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            local_80 = 0;
                            Memory::free_static((void *)(uVar23 + -0x10),false);
                          }
                        }
                        uVar17 = RenderingDevice::get_singleton();
                        pBVar29 = this + 0xae8;
                        uVar19 = RenderingDevice::get_singleton();
                        lVar28 = RenderingDevice::framebuffer_get_format(uVar19,uVar20);
                        if (*(long *)(this + 0xb28) == 0) {
                          _err_print_error("get_render_pipeline",
                                           "./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                                           0x49,
                                           "Condition \"shader.is_null()\" is true. Returning: RID()"
                                           ,
                                           "Attempted to use an unused shader variant (shader is null),"
                                           ,0,0);
                          lVar28 = 0;
                        }
                        else {
                          while( true ) {
                            uVar23 = local_88 >> 8;
                            local_88 = uVar23 << 8;
                            LOCK();
                            BVar3 = *pBVar29;
                            if (BVar3 == (BokehDOF)0x0) {
                              *pBVar29 = (BokehDOF)0x1;
                            }
                            UNLOCK();
                            if (BVar3 == (BokehDOF)0x0) break;
                            local_88 = uVar23 << 8;
                            do {
                            } while (*pBVar29 != (BokehDOF)0x0);
                          }
                          if (*(uint *)(this + 0xc18) != 0) {
                            plVar22 = *(long **)(this + 0xc10);
                            plVar1 = plVar22 + (ulong)*(uint *)(this + 0xc18) * 5;
                            do {
                              if ((((*plVar22 == -1) && (lVar28 == plVar22[1])) &&
                                  (this[0xb36] == *(BokehDOF *)((long)plVar22 + 0x14))) &&
                                 (((int)plVar22[2] == 0 && ((int)plVar22[3] == 0)))) {
                                lVar28 = plVar22[4];
                                this[0xae8] = (BokehDOF)0x0;
                                goto LAB_0010535a;
                              }
                              plVar22 = plVar22 + 5;
                            } while (plVar22 != plVar1);
                          }
                          lVar28 = PipelineCacheRD::_generate_version
                                             ((long)pBVar29,-1,SUB81(lVar28,0),
                                              (uint)(byte)this[0xb36],0);
                          this[0xae8] = (BokehDOF)0x0;
                        }
LAB_0010535a:
                        RenderingDevice::draw_list_bind_render_pipeline(uVar17,pvVar18,lVar28);
                        uVar20 = RenderingDevice::get_singleton();
                        local_68[0] = 0;
                        local_88 = local_208;
                        local_80 = CONCAT71(local_80._1_7_,local_200);
                        local_78 = local_1f8;
                        if (local_1e8[0] == 0) {
                          uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar11,lVar16,0,&local_88);
                          RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
                        }
                        else {
                          CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_1e8);
                          lVar28 = local_68[0];
                          uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar11,lVar16,0,&local_88);
                          RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,0);
                          if (lVar28 != 0) {
                            LOCK();
                            plVar1 = (long *)(lVar28 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              Memory::free_static((void *)(local_68[0] + -0x10),false);
                            }
                          }
                        }
                        uVar20 = RenderingDevice::get_singleton();
                        local_68[0] = 0;
                        local_88 = local_148;
                        local_80 = CONCAT71(local_80._1_7_,local_140);
                        local_78 = local_138;
                        if (local_128[0] == 0) {
                          uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar11,lVar16,1,&local_88);
                          RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
                        }
                        else {
                          CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_128);
                          lVar28 = local_68[0];
                          uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar11,lVar16,1,&local_88);
                          RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,1);
                          if (lVar28 != 0) {
                            LOCK();
                            plVar1 = (long *)(lVar28 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              Memory::free_static((void *)(local_68[0] + -0x10),false);
                            }
                          }
                        }
                        uVar20 = RenderingDevice::get_singleton();
                        local_68[0] = 0;
                        local_88 = local_1a8;
                        local_80 = CONCAT71(local_80._1_7_,local_1a0);
                        local_78 = local_198;
                        if (local_188[0] == 0) {
                          uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar11,lVar16,2,&local_88);
                          RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,2);
                        }
                        else {
                          CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_188);
                          lVar28 = local_68[0];
                          uVar17 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                             (pUVar11,lVar16,2,&local_88);
                          RenderingDevice::draw_list_bind_uniform_set(uVar20,pvVar18,uVar17,2);
                          if (lVar28 != 0) {
                            LOCK();
                            plVar1 = (long *)(lVar28 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              Memory::free_static((void *)(local_68[0] + -0x10),false);
                            }
                          }
                        }
                        lVar16 = RenderingDevice::get_singleton();
                        RenderingDevice::draw_list_set_push_constant(lVar16,pvVar18,uVar10);
                        lVar16 = RenderingDevice::get_singleton();
                        RenderingDevice::draw_list_draw(lVar16,SUB81(pvVar18,0),0,1);
                        RenderingDevice::get_singleton();
                        RenderingDevice::draw_list_end();
                        goto LAB_001055d0;
                      }
                    }
                  }
                  goto LAB_00106931;
                }
                goto LAB_001078b6;
              }
              goto LAB_001078b3;
            }
          }
        }
LAB_00105d00:
        _err_print_error("bokeh_dof_raster","servers/rendering/renderer_rd/effects/bokeh_dof.cpp",
                         0x1c0,"Condition \"shader.is_null()\" is true.",0,0);
      }
    }
LAB_001055d0:
    if (local_f8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_f8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_f8[0] + -0x10),false);
      }
    }
    if (local_128[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_128[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_128[0] + -0x10),false);
      }
    }
    if (local_158 != 0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_158 + -0x10),false);
      }
    }
    if (local_188[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_188[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_188[0] + -0x10),false);
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
    if (local_1e8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_1e8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_1e8[0] + -0x10),false);
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
    if (local_278[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_278[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_278[0] + -0x10),false);
          return;
        }
        goto LAB_0010815e;
      }
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010815e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BokehDofShaderRD::~BokehDofShaderRD() */

void __thiscall BokehDofShaderRD::~BokehDofShaderRD(BokehDofShaderRD *this)

{
  *(undefined ***)this = &PTR__BokehDofShaderRD_0010a418;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* BokehDofShaderRD::~BokehDofShaderRD() */

void __thiscall BokehDofShaderRD::~BokehDofShaderRD(BokehDofShaderRD *this)

{
  *(undefined ***)this = &PTR__BokehDofShaderRD_0010a418;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* BokehDofRasterShaderRD::~BokehDofRasterShaderRD() */

void __thiscall BokehDofRasterShaderRD::~BokehDofRasterShaderRD(BokehDofRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__BokehDofRasterShaderRD_0010a438;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* BokehDofRasterShaderRD::~BokehDofRasterShaderRD() */

void __thiscall BokehDofRasterShaderRD::~BokehDofRasterShaderRD(BokehDofRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__BokehDofRasterShaderRD_0010a438;
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
      uVar7 = _LC12;
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
LAB_00108683:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_00108683;
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
LAB_00108cd0:
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
  if (lVar10 == 0) goto LAB_00108cd0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00108ba9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00108ba9;
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
    goto LAB_00108d26;
  }
  if (lVar10 == lVar7) {
LAB_00108c4f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00108d26:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00108c3a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00108c4f;
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
LAB_00108c3a:
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
LAB_00109410:
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
  if (lVar7 == 0) goto LAB_00109410;
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
LAB_0010937c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00109311;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010937c;
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
LAB_00109311:
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
LAB_00109810:
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
  if (lVar11 == 0) goto LAB_00109810;
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
LAB_0010977c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_00109713;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_0010977c;
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
  uVar3 = _LC27;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 4);
LAB_00109713:
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
LAB_00109bb0:
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
  if (lVar11 == 0) goto LAB_00109bb0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00109a41:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00109a41;
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
    goto LAB_00109c06;
  }
  if (lVar11 == lVar9) {
LAB_00109b23:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00109c06:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00109b00;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00109b23;
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
  uVar4 = _LC12;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00109b00:
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
LAB_0010a086:
    uVar14 = 0;
    do {
      uVar6 = (uint)uVar13;
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar9 = 0;
LAB_0010a181:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar9 = *(long *)(uVar11 - 8);
        if (lVar9 <= (long)uVar14) goto LAB_0010a181;
        uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
LAB_0010a0a9:
        iVar7 = (int)(uVar11 >> 0x20);
        uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar6 = uVar6 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar14 == 0) goto LAB_0010a0a9;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar8 = 0;
      }
      uVar14 = uVar14 + 1;
      uVar8 = uVar8 ^ (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
      uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
      if (uVar14 == uVar15) goto LAB_0010a110;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar14 = *(ulong *)(param_4[4] - 8), uVar15 = uVar14 & 0xffffffff, (int)uVar14 != 0))
  goto LAB_0010a086;
  goto LAB_00109d80;
LAB_0010a369:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_00109de0;
LAB_0010a110:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_00109d80:
  uVar10 = auVar16._0_8_;
  uVar6 = ((uint)uVar13 ^ (uint)(uVar13 >> 0x10)) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  lVar12 = *(long *)(this + (ulong)(uVar6 % 0x3ffd) * 8 + 0x1e0);
  if (lVar12 != 0) {
LAB_00109ded:
    if ((((*(uint *)(lVar12 + 0x10) == uVar6) && (*(int *)(lVar12 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar12 + 0x18))) && (*(int *)(lVar12 + 0x30) == 1)) {
      piVar3 = *(int **)(lVar12 + 0x38);
      if ((auVar16._4_4_ == piVar3[1]) && (*piVar3 == auVar16._0_4_)) {
        uVar11 = param_4[2];
        if (*(long *)(piVar3 + 4) == 0) {
          if (*(long *)(piVar3 + 8) == 0) {
            if (uVar11 != 0) goto LAB_00109de0;
            if (param_4[4] != 0) {
              uVar8 = *(uint *)(param_4[4] - 8);
joined_r0x0010a333:
              if (uVar8 != 0) goto LAB_00109de0;
            }
LAB_0010a274:
            uVar10 = *(undefined8 *)(lVar12 + 0x28);
            goto LAB_0010a057;
          }
          uVar8 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
          if (uVar11 == 0) {
            if (param_4[4] == 0) goto joined_r0x0010a333;
            if (*(uint *)(param_4[4] - 8) == uVar8) {
              if (uVar8 != 0) goto LAB_00109e54;
              goto LAB_0010a274;
            }
          }
          else if (uVar8 == 1) goto LAB_00109e54;
        }
        else {
          uVar8 = 1;
          if (uVar11 != 0) {
LAB_00109e54:
            uVar13 = 0;
            do {
              uVar14 = uVar13;
              if (uVar11 == 0) {
                uVar11 = param_4[4];
                if (uVar11 == 0) {
                  lVar9 = 0;
                  goto LAB_0010a181;
                }
                lVar9 = *(long *)(uVar11 - 8);
                if (lVar9 <= (long)uVar13) goto LAB_0010a181;
                uVar11 = *(ulong *)(uVar11 + uVar13 * 8);
                uVar15 = *(ulong *)(piVar3 + 4);
                if (uVar15 == 0) goto LAB_00109e95;
                if (uVar13 != 0) goto LAB_00109f15;
              }
              else if (uVar13 == 0) {
                uVar15 = *(ulong *)(piVar3 + 4);
                uVar14 = 0;
                if (uVar15 == 0) {
LAB_00109e95:
                  lVar4 = *(long *)(piVar3 + 8);
                  if (lVar4 == 0) {
                    lVar9 = 0;
                    goto LAB_0010a181;
                  }
                  lVar9 = *(long *)(lVar4 + -8);
                  if (lVar9 <= (long)uVar14) goto LAB_0010a181;
                  uVar15 = *(ulong *)(lVar4 + uVar13 * 8);
                }
              }
              else {
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                if (*(long *)(piVar3 + 4) == 0) {
                  uVar11 = 0;
                  goto LAB_00109e95;
                }
                uVar11 = 0;
LAB_00109f15:
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                uVar15 = 0;
              }
              if (uVar15 != uVar11) goto LAB_0010a369;
              uVar13 = uVar13 + 1;
              if (uVar8 <= (uint)uVar13) goto LAB_0010a274;
              uVar11 = param_4[2];
            } while( true );
          }
          if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
            uVar8 = 1;
            goto LAB_00109e54;
          }
        }
      }
    }
LAB_00109de0:
    uVar10 = auVar16._0_8_;
    lVar12 = *(long *)(lVar12 + 8);
    if (lVar12 == 0) goto LAB_00109f35;
    goto LAB_00109ded;
  }
LAB_00109f35:
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
        goto LAB_0010a022;
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
LAB_0010a022:
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
LAB_0010a057:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* BokehDofRasterShaderRD::~BokehDofRasterShaderRD() */

void __thiscall BokehDofRasterShaderRD::~BokehDofRasterShaderRD(BokehDofRasterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* BokehDofShaderRD::~BokehDofShaderRD() */

void __thiscall BokehDofShaderRD::~BokehDofShaderRD(BokehDofShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.
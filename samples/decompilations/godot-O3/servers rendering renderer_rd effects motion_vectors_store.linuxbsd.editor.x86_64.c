
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



/* RendererRD::MotionVectorsStore::~MotionVectorsStore() */

void __thiscall RendererRD::MotionVectorsStore::~MotionVectorsStore(MotionVectorsStore *this)

{
  ShaderRD::version_free(this,*(undefined8 *)(this + 0x178));
  *(undefined ***)this = &PTR__MotionVectorsStoreShaderRD_001035d8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
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



/* RendererRD::MotionVectorsStore::MotionVectorsStore() */

void __thiscall RendererRD::MotionVectorsStore::MotionVectorsStore(MotionVectorsStore *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  char cVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_80;
  String local_78 [8];
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD((ShaderRD *)this);
  *(undefined ***)this = &PTR__MotionVectorsStoreShaderRD_001035d8;
  ShaderRD::setup((char *)this,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\nlayout(set = 0, binding = 0) uniform sampler2D depth_buffer;\nlayout(rg16f, set = 0, binding = 1) uniform restrict writeonly image2D velocity_buffer;\n\nlayout(push_constant, std430) uniform Params {\n\thighp mat4 reprojection_matrix;\n\tvec2 resolution;\n\tuint pad[2];\n}\nparams;\n\nvoid main() {\n\t\n\tif (any(greaterThanEqual(vec2(gl_GlobalInvocationID.xy), params.resolution))) {\n\t\treturn;\n\t}\n\n\tivec2 pos = ivec2(gl_GlobalInvocationID.xy);\n\n\tfloat depth = texelFetch(depth_buffer, pos, 0).x;\n\tvec2 uv = (vec2(pos) + 0.5f) / params.resolution;\n\tvec2 velocity = derive_motion_vector(uv, depth, params.reprojection_matrix);\n\timageStore(velocity_buffer, pos, vec4(velocity, 0.0f, 0.0f));\n}\n"
                 );
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  local_70 = 0;
  local_68 = 0;
  local_58 = &_LC11;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_68);
  if (local_70 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = *(long *)(local_70 + -8) + 1;
  }
  iVar7 = CowData<String>::resize<false>((CowData<String> *)&local_70,lVar10);
  if (iVar7 == 0) {
    if (local_70 == 0) {
      lVar12 = -1;
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(local_70 + -8);
      lVar12 = lVar10 + -1;
      if (-1 < lVar12) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_70);
        this_00 = (CowData<char32_t> *)(local_70 + lVar12 * 8);
        if (*(long *)this_00 != local_68) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_68);
        }
        goto LAB_00100357;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar10,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00100357:
  lVar10 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  local_60 = 0;
  local_58 = &_LC11;
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  ShaderRD::initialize((Vector *)this,local_78,(Vector *)&local_80);
  lVar10 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_60);
  uVar8 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x178) = uVar8;
  uVar8 = RenderingDevice::get_singleton();
  uVar9 = *(ulong *)(this + 0x178);
  local_50 = 0;
  if (*(long *)(this + 0x18) == 0) {
    lVar10 = 0;
LAB_00100603:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar10,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar10 = *(long *)(*(long *)(this + 0x18) + -8);
    if (lVar10 < 1) goto LAB_00100603;
    pcVar3 = *(char **)(this + 0x28);
    if (pcVar3 == (char *)0x0) {
LAB_001006a0:
      lVar10 = 0;
LAB_001006a3:
      uVar9 = 0;
LAB_001006ba:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar9,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar10 = *(long *)(pcVar3 + -8);
    if (lVar10 < 1) goto LAB_001006a3;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar11 = 0;
      goto LAB_001004f5;
    }
    if ((uVar9 == 0) || (*(uint *)(this + 0xd4) <= (uint)uVar9)) {
LAB_00100670:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar11 = 0;
      goto LAB_001004f5;
    }
    lVar12 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0xa0 +
             *(long *)(*(long *)(this + 0xc0) +
                      ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar12 + 0x98) != (int)(uVar9 >> 0x20)) {
      if (*(int *)(lVar12 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00100670;
    }
    iVar7 = (int)lVar12;
    if (*(char *)(lVar12 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this);
      lVar10 = *(long *)(this + 0x78);
      if (lVar10 != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(lVar10 + -8) <= lVar13) break;
          if (*(char *)(lVar10 + lVar13) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this,iVar7);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this,iVar7);
          }
          lVar10 = *(long *)(this + 0x78);
          lVar13 = lVar13 + 1;
        } while (lVar10 != 0);
      }
    }
    puVar4 = *(uint **)(this + 0x38);
    if (puVar4 == (uint *)0x0) goto LAB_001006a0;
    lVar10 = *(long *)(puVar4 + -2);
    if (lVar10 < 1) goto LAB_001006a3;
    uVar9 = (ulong)*puVar4;
    lVar13 = *(long *)(lVar12 + 0x68);
    if (lVar13 == 0) {
      lVar10 = 0;
      goto LAB_001006ba;
    }
    lVar10 = *(long *)(lVar13 + -8);
    if (lVar10 <= (long)uVar9) goto LAB_001006ba;
    if (*(long *)(lVar13 + uVar9 * 8) == 0) {
      cVar2 = *(char *)(lVar12 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end((Version *)this,iVar7);
      cVar2 = *(char *)(lVar12 + 0x90);
    }
    if (cVar2 != '\0') {
      puVar5 = *(undefined8 **)(lVar12 + 0x88);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001006a0;
      lVar10 = puVar5[-1];
      if (0 < lVar10) {
        uVar11 = *puVar5;
        goto LAB_001004f5;
      }
      goto LAB_001006a3;
    }
  }
  uVar11 = 0;
LAB_001004f5:
  uVar8 = RenderingDevice::compute_pipeline_create(uVar8,uVar11,&local_58);
  lVar10 = local_50;
  *(undefined8 *)(this + 0x180) = uVar8;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* RendererRD::MotionVectorsStore::process(Ref<RenderSceneBuffersRD>, Projection const&, Transform3D
   const&, Projection const&, Transform3D const&) */

void RendererRD::MotionVectorsStore::process
               (Version *param_1,long *param_2,undefined8 param_3,Transform3D *param_4)

{
  long *plVar1;
  int iVar2;
  uint *puVar3;
  code *pcVar4;
  UniformSetCacheRD *pUVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined8 *__src;
  long lVar16;
  ulong uVar17;
  size_t __n;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *local_378 [2];
  long local_368;
  undefined1 local_360;
  undefined8 local_358;
  long local_348 [2];
  char *local_338;
  ulong local_330;
  undefined8 local_328;
  long local_318;
  Transform3D local_308 [48];
  Projection local_2d8 [64];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  Projection local_258 [64];
  Projection local_218 [64];
  Projection local_1d8 [64];
  Projection local_198 [64];
  Projection local_158 [64];
  Projection local_118 [64];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = RendererRD::MaterialStorage::get_singleton();
  pUVar5 = UniformSetCacheRD::singleton;
  if (lVar6 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x37;
      pcVar12 = "Parameter \"material_storage\" is null.";
LAB_00101439:
      _err_print_error("process","servers/rendering/renderer_rd/effects/motion_vectors_store.cpp",
                       uVar13,pcVar12,0,0);
      return;
    }
    goto LAB_00101516;
  }
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x3a;
      pcVar12 = "Parameter \"uniform_set_cache\" is null.";
      goto LAB_00101439;
    }
    goto LAB_00101516;
  }
  iVar2 = *(int *)(*param_2 + 0x1a8);
  uVar13 = *(undefined8 *)(*param_2 + 0x1ac);
  uVar20 = (uint)uVar13;
  uVar21 = (uint)((ulong)uVar13 >> 0x20);
  local_58 = CONCAT44((float)(int)uVar21,(float)(int)uVar20);
  Projection::Projection(local_2d8);
  Projection::set_depth_correction(SUB81(local_2d8,0),true,true);
  Projection::operator*(local_118,local_2d8);
  Projection::inverse();
  Projection::Projection(local_198,param_4);
  Transform3D::affine_inverse();
  Projection::Projection(local_218,local_308);
  Projection::operator*(local_258,local_2d8);
  Projection::operator*(local_1d8,local_258);
  Projection::operator*(local_158,local_1d8);
  Projection::operator*((Projection *)&local_298,local_158);
  Projection::~Projection(local_158);
  Projection::~Projection(local_1d8);
  Projection::~Projection(local_258);
  Projection::~Projection(local_218);
  Projection::~Projection(local_198);
  Projection::~Projection((Projection *)&local_d8);
  Projection::~Projection(local_118);
  local_98 = local_298;
  uStack_90 = uStack_290;
  local_88 = local_288;
  uStack_80 = uStack_280;
  local_78 = local_278;
  uStack_70 = uStack_270;
  local_68 = local_268;
  uStack_60 = uStack_260;
  Projection::~Projection((Projection *)&local_298);
  Projection::~Projection(local_2d8);
  uVar13 = *(undefined8 *)(lVar6 + 0x30);
  uVar7 = RenderingDevice::get_singleton();
  local_368 = 0;
  local_338 = "Motion Vector Store";
  local_d8 = CONCAT44(_LC47,_LC47);
  uStack_d0 = CONCAT44(_LC47,_LC47);
  local_330 = 0x13;
  String::parse_latin1((StrRange *)&local_368);
  RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_368,(Projection *)&local_d8);
  lVar6 = local_368;
  if (local_368 != 0) {
    LOCK();
    plVar1 = (long *)(local_368 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_368 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  uVar17 = *(ulong *)(param_1 + 0x178);
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar6 = 0;
LAB_0010148b:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar6,
               "p_variant","variant_defines.size()","",false,false);
LAB_00100d16:
    _err_print_error("process","servers/rendering/renderer_rd/effects/motion_vectors_store.cpp",0x4f
                     ,"Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + -8);
    if (lVar6 < 1) goto LAB_0010148b;
    pcVar12 = *(char **)(param_1 + 0x28);
    if (pcVar12 == (char *)0x0) {
LAB_00101161:
      lVar6 = 0;
LAB_00101164:
      uVar17 = 0;
LAB_00101181:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar17,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar6 = *(long *)(pcVar12 + -8);
    if (lVar6 < 1) goto LAB_00101164;
    if (*pcVar12 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00100d16;
    }
    if ((uVar17 == 0) || (*(uint *)(param_1 + 0xd4) <= (uint)uVar17)) {
LAB_00101137:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00100d16;
    }
    lVar15 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0xd0)) * 0xa0 +
             *(long *)(*(long *)(param_1 + 0xc0) +
                      ((uVar17 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0xd0)) * 8);
    if (*(int *)(lVar15 + 0x98) != (int)(uVar17 >> 0x20)) {
      if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00101137;
    }
    iVar14 = (int)lVar15;
    if (*(char *)(lVar15 + 0x91) != '\0') {
      ShaderRD::_initialize_version(param_1);
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar6 != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(lVar6 + -8) <= lVar16) break;
          if (*(char *)(lVar6 + lVar16) == '\0') {
            ShaderRD::_allocate_placeholders(param_1,iVar14);
          }
          else {
            ShaderRD::_compile_version_start(param_1,iVar14);
          }
          lVar6 = *(long *)(param_1 + 0x78);
          lVar16 = lVar16 + 1;
        } while (lVar6 != 0);
      }
    }
    puVar3 = *(uint **)(param_1 + 0x38);
    if (puVar3 == (uint *)0x0) goto LAB_00101161;
    lVar6 = *(long *)(puVar3 + -2);
    if (lVar6 < 1) goto LAB_00101164;
    uVar17 = (ulong)*puVar3;
    lVar16 = *(long *)(lVar15 + 0x68);
    if (lVar16 == 0) {
      lVar6 = 0;
      goto LAB_00101181;
    }
    lVar6 = *(long *)(lVar16 + -8);
    if (lVar6 <= (long)uVar17) goto LAB_00101181;
    if (*(long *)(lVar16 + uVar17 * 8) != 0) {
      ShaderRD::_compile_version_end(param_1,iVar14);
    }
    if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_00100d16;
    plVar1 = *(long **)(lVar15 + 0x88);
    if (plVar1 == (long *)0x0) goto LAB_00101161;
    lVar6 = plVar1[-1];
    if (lVar6 < 1) goto LAB_00101164;
    lVar6 = *plVar1;
    if (lVar6 == 0) goto LAB_00100d16;
    RenderingDevice::get_singleton();
    pvVar8 = (void *)RenderingDevice::compute_list_begin();
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar7,pvVar8,*(undefined8 *)(param_1 + 0x180));
    if (iVar2 != 0) {
      iVar14 = 0;
      do {
        uVar7 = RenderSceneBuffersRD::get_velocity_buffer(SUB81(*param_2,0),0);
        uStack_d0 = RenderSceneBuffersRD::get_depth_texture((uint)*param_2);
        local_d8 = uVar13;
        puVar9 = (undefined8 *)Memory::alloc_static(0x20,false);
        if (puVar9 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
LAB_00101266:
          local_378[0] = (undefined8 *)0x0;
          lVar15 = _LC41;
        }
        else {
          __src = puVar9 + 2;
          *puVar9 = 1;
          puVar9[1] = 2;
          *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
          lVar15 = 0;
          do {
            if (__src == (undefined8 *)0x0) {
              lVar16 = 0;
            }
            else {
              while (lVar16 = __src[-1], lVar15 < lVar16) {
                plVar1 = __src + -2;
                puVar9 = __src;
                if (1 < (ulong)__src[-2]) {
                  lVar16 = __src[-1];
                  uVar17 = 0x10;
                  __n = lVar16 * 8;
                  if (__n != 0) {
                    uVar17 = __n - 1 | __n - 1 >> 1;
                    uVar17 = uVar17 | uVar17 >> 2;
                    uVar17 = uVar17 | uVar17 >> 4;
                    uVar17 = uVar17 | uVar17 >> 8;
                    uVar17 = uVar17 | uVar17 >> 0x10;
                    uVar17 = (uVar17 | uVar17 >> 0x20) + 0x11;
                  }
                  puVar11 = (undefined8 *)Memory::alloc_static(uVar17,false);
                  if (puVar11 == (undefined8 *)0x0) {
                    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                     "Parameter \"mem_new\" is null.",0,0);
                  }
                  else {
                    puVar9 = puVar11 + 2;
                    *puVar11 = 1;
                    puVar11[1] = lVar16;
                    memcpy(puVar9,__src,__n);
                    LOCK();
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static(plVar1,false);
                    }
                  }
                }
                puVar9[lVar15] = *(undefined8 *)((Projection *)&local_d8 + lVar15 * 8);
                lVar15 = lVar15 + 1;
                __src = puVar9;
                if (lVar15 == 2) goto LAB_00100f06;
              }
            }
            lVar18 = lVar15 + 1;
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar16,"p_index","size()","",
                       false,false);
            lVar15 = lVar18;
          } while (lVar18 != 2);
LAB_00100f06:
          lVar15 = _LC41;
          plVar1 = __src + -2;
          local_378[0] = (undefined8 *)0x0;
          if (__src == (undefined8 *)0x0) goto LAB_00101266;
          do {
            lVar16 = *plVar1;
            if (lVar16 == 0) goto LAB_00100f55;
            LOCK();
            lVar18 = *plVar1;
            bVar19 = lVar16 == lVar18;
            if (bVar19) {
              *plVar1 = lVar16 + 1;
              lVar18 = lVar16;
            }
            UNLOCK();
          } while (!bVar19);
          if (lVar18 != -1) {
            local_378[0] = __src;
          }
LAB_00100f55:
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(plVar1,false);
          }
        }
        local_360 = 0;
        local_330 = local_330 & 0xffffffffffffff00;
        local_338 = _LC50;
        local_318 = 0;
        local_358 = 0;
        local_348[0] = 0;
        local_368 = lVar15;
        local_328 = uVar7;
        if (local_378[0] == (undefined8 *)0x0) {
          uVar7 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                            (pUVar5,lVar6,0,(StrRange *)&local_368,&local_338);
        }
        else {
          CowData<RID>::_ref((CowData<RID> *)local_348,(CowData *)local_378);
          lVar15 = local_348[0];
          uVar7 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                            (pUVar5,lVar6,0,(StrRange *)&local_368,&local_338);
          if (lVar15 != 0) {
            LOCK();
            plVar1 = (long *)(lVar15 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_348[0] + -0x10),false);
            }
            if (local_318 != 0) {
              LOCK();
              plVar1 = (long *)(local_318 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_318 + -0x10),false);
              }
            }
          }
        }
        uVar10 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar8,uVar7,0);
        lVar15 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar15,pvVar8,(uint)&local_98);
        lVar15 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_dispatch_threads(lVar15,(uint)pvVar8,uVar20,uVar21);
        if (local_378[0] != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_378[0] + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_378[0] + -2,false);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar2);
    }
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101516:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MotionVectorsStoreShaderRD::~MotionVectorsStoreShaderRD() */

void __thiscall
MotionVectorsStoreShaderRD::~MotionVectorsStoreShaderRD(MotionVectorsStoreShaderRD *this)

{
  *(undefined ***)this = &PTR__MotionVectorsStoreShaderRD_001035d8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* MotionVectorsStoreShaderRD::~MotionVectorsStoreShaderRD() */

void __thiscall
MotionVectorsStoreShaderRD::~MotionVectorsStoreShaderRD(MotionVectorsStoreShaderRD *this)

{
  *(undefined ***)this = &PTR__MotionVectorsStoreShaderRD_001035d8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
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
      uVar7 = _LC7;
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
LAB_00101853:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_00101853;
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
LAB_00101fb0:
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
  if (lVar10 == 0) goto LAB_00101fb0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00101e89:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00101e89;
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
    goto LAB_00102006;
  }
  if (lVar10 == lVar7) {
LAB_00101f2f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00102006:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00101f1a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00101f2f;
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
LAB_00101f1a:
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
LAB_00102620:
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
  if (lVar11 == 0) goto LAB_00102620;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_001024b1:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_001024b1;
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
    goto LAB_00102676;
  }
  if (lVar11 == lVar9) {
LAB_00102593:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00102676:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00102570;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00102593;
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
  uVar4 = _LC7;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00102570:
  puVar7[-1] = param_1;
  return 0;
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
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  uint local_e8;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iVar8 = (int)((ulong)param_2 >> 0x20);
  uVar7 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64 ^
          (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar7 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  local_68 = *param_5;
  local_60 = *(undefined1 *)(param_5 + 1);
  local_58 = param_5[2];
  pCVar1 = (CowData *)(param_5 + 4);
  if (param_5[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)&local_48,pCVar1);
  }
  uVar7 = (*param_4 * 0x16a88000 | (uint)(*param_4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64 ^
          (param_4[1] * 0x16a88000 | (uint)(param_4[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
  lVar13 = *(long *)(param_4 + 4);
  uVar9 = (ulong)((uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64);
  if (lVar13 != 0) {
    uVar7 = 1;
LAB_00102add:
    uVar21 = 0;
    do {
      uVar14 = (uint)uVar9;
      if (lVar13 == 0) {
        lVar13 = *(long *)(param_4 + 8);
        if (lVar13 == 0) goto LAB_00102b60;
        lVar17 = *(long *)(lVar13 + -8);
        if (lVar17 <= (long)uVar21) goto LAB_00102b81;
        lVar13 = *(long *)(lVar13 + uVar21 * 8);
LAB_00102af1:
        iVar8 = (int)((ulong)lVar13 >> 0x20);
        uVar15 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar14 = uVar14 ^ ((int)lVar13 * 0x16a88000 | (uint)((int)lVar13 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
      else {
        if (uVar21 == 0) goto LAB_00102af1;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar15 = 0;
      }
      uVar21 = uVar21 + 1;
      uVar15 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64 ^ uVar15;
      uVar9 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
      if (uVar21 == uVar7) goto LAB_00102980;
      lVar13 = *(long *)(param_4 + 4);
    } while( true );
  }
  if ((*(long *)(param_4 + 8) != 0) &&
     (uVar7 = (uint)*(undefined8 *)(*(long *)(param_4 + 8) + -8), uVar7 != 0)) goto LAB_00102add;
LAB_00102980:
  lVar19 = local_48;
  lVar13 = local_58;
  uVar7 = ((uint)(uVar9 >> 0x10) ^ (uint)uVar9) * -0x7a143595;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
  uVar14 = ((int)local_68 * 0x16a88000 | (uint)((int)local_68 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           uVar7;
  uVar7 = ((uVar7 >> 0x10 ^ uVar14) << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64 ^
          (local_68._4_4_ * 0x16a88000 | (uint)(local_68._4_4_ * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
  if (local_58 == 0) {
    if (local_48 != 0) {
      uVar9 = *(ulong *)(local_48 + -8) & 0xffffffff;
      if ((int)*(ulong *)(local_48 + -8) != 0) goto LAB_00102a0f;
      uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar9 = (ulong)(uVar7 ^ uVar7 >> 0x10);
      goto LAB_00102c16;
    }
    uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
    uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
    uVar9 = (ulong)(uVar7 ^ uVar7 >> 0x10);
  }
  else {
    uVar9 = 1;
LAB_00102a0f:
    iVar16 = (int)local_58;
    uVar21 = 0;
    iVar8 = (int)((ulong)local_58 >> 0x20);
    do {
      if (lVar13 == 0) {
        if (lVar19 == 0) {
LAB_00102b60:
          lVar17 = 0;
LAB_00102b81:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar21,lVar17,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar17 = *(long *)(lVar19 + -8);
        if (lVar17 <= (long)uVar21) goto LAB_00102b81;
        uVar10 = *(undefined8 *)(lVar19 + uVar21 * 8);
        iVar11 = (int)uVar10;
        iVar12 = (int)((ulong)uVar10 >> 0x20);
        uVar7 = uVar7 ^ (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar14 = (iVar12 * 0x16a88000 | (uint)(iVar12 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else if (uVar21 == 0) {
        uVar7 = uVar7 ^ (iVar16 * 0x16a88000 | (uint)(iVar16 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar14 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else {
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar14 = 0;
      }
      uVar21 = uVar21 + 1;
      uVar14 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64 ^ uVar14;
      uVar7 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
    } while (uVar21 != uVar9);
    uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
    uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
    uVar9 = (ulong)(uVar7 ^ uVar7 >> 0x10);
    if (lVar19 != 0) {
LAB_00102c16:
      LOCK();
      plVar2 = (long *)(lVar19 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
  }
  iVar8 = (int)(uVar9 * 0xc0091 >> 0x20);
  iVar16 = (int)uVar9;
  uVar7 = iVar16 + (iVar8 + ((uint)(iVar16 - iVar8) >> 1) >> 0xd) * -0x3ffd;
  uVar10 = local_68;
  uVar6 = local_60;
  for (lVar13 = *(long *)(this + (ulong)uVar7 * 8 + 0x1e0); lVar13 != 0;
      lVar13 = *(long *)(lVar13 + 8)) {
    local_68 = *param_5;
    local_60 = *(undefined1 *)(param_5 + 1);
    if ((((*(int *)(lVar13 + 0x10) == iVar16) && (*(int *)(lVar13 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar13 + 0x18))) && (*(int *)(lVar13 + 0x30) == 2)) {
      local_58 = param_5[2];
      local_48 = 0;
      if (param_5[4] == 0) {
        piVar18 = *(int **)(lVar13 + 0x38);
        uVar10 = local_68;
        uVar6 = local_60;
        if (piVar18[1] != param_4[1]) goto LAB_00102c88;
LAB_00102d1b:
        if (*piVar18 == *param_4) {
          lVar19 = *(long *)(param_4 + 4);
          if (*(long *)(piVar18 + 4) == 0) {
            if (*(long *)(piVar18 + 8) == 0) {
              if (lVar19 == 0) {
                if (*(long *)(param_4 + 8) != 0) {
                  local_e8 = *(uint *)(*(long *)(param_4 + 8) + -8);
joined_r0x00103533:
                  if (local_e8 != 0) goto LAB_00102d56;
                }
LAB_0010321a:
                lVar19 = local_58;
                uVar21 = (ulong)*(uint *)(lVar13 + 0x30);
                if (*(uint *)(lVar13 + 0x30) < 2) {
                  lVar13 = 1;
LAB_001030cd:
                  _err_print_index_error
                            ("operator[]","./core/templates/local_vector.h",0xae,lVar13,uVar21,
                             "p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                lVar3 = *(long *)(lVar13 + 0x38);
                if ((*(int *)(lVar3 + 0x2c) == local_68._4_4_) &&
                   (*(int *)(lVar3 + 0x28) == (int)local_68)) {
                  uVar14 = 1;
                  if (*(long *)(lVar3 + 0x38) == 0) {
                    if (*(long *)(lVar3 + 0x48) == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = (uint)*(undefined8 *)(*(long *)(lVar3 + 0x48) + -8);
                    }
                  }
                  uVar15 = 1;
                  if (local_58 == 0) {
                    if (local_48 == 0) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = (uint)*(undefined8 *)(local_48 + -8);
                    }
                  }
                  if (uVar15 == uVar14) {
                    uVar21 = 0;
                    do {
                      if (uVar14 <= (uint)uVar21) {
                        if (local_48 != 0) {
                          LOCK();
                          plVar2 = (long *)(local_48 + -0x10);
                          *plVar2 = *plVar2 + -1;
                          UNLOCK();
                          if (*plVar2 == 0) {
                            Memory::free_static((void *)(local_48 + -0x10),false);
                          }
                        }
                        uVar10 = *(undefined8 *)(lVar13 + 0x28);
                        goto LAB_00102f81;
                      }
                      if (lVar19 == 0) {
                        if (local_48 == 0) {
LAB_00103569:
                          lVar17 = 0;
                        }
                        else {
                          lVar17 = *(long *)(local_48 + -8);
                          if ((long)uVar21 < lVar17) {
                            lVar20 = *(long *)(local_48 + uVar21 * 8);
                            lVar17 = *(long *)(lVar3 + 0x38);
                            if (lVar17 == 0) goto LAB_001032d7;
                            if (uVar21 != 0) goto LAB_001034ce;
                            goto LAB_001032f5;
                          }
                        }
                        goto LAB_00102b81;
                      }
                      if (uVar21 == 0) {
                        lVar17 = *(long *)(lVar3 + 0x38);
                        lVar20 = lVar19;
                        if (lVar17 == 0) {
LAB_001032d7:
                          lVar4 = *(long *)(lVar3 + 0x48);
                          if (lVar4 == 0) goto LAB_00103569;
                          lVar17 = *(long *)(lVar4 + -8);
                          if (lVar17 <= (long)uVar21) goto LAB_00102b81;
                          lVar17 = *(long *)(lVar4 + uVar21 * 8);
                        }
                      }
                      else {
                        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                        lVar20 = *(long *)(lVar3 + 0x38);
                        if (lVar20 == 0) goto LAB_001032d7;
                        lVar20 = 0;
LAB_001034ce:
                        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                        lVar17 = 0;
                      }
LAB_001032f5:
                      uVar21 = uVar21 + 1;
                    } while (lVar17 == lVar20);
                  }
                }
              }
            }
            else {
              local_e8 = (uint)*(undefined8 *)(*(long *)(piVar18 + 8) + -8);
              if (lVar19 == 0) {
                if (*(long *)(param_4 + 8) == 0) goto joined_r0x00103533;
                if (*(uint *)(*(long *)(param_4 + 8) + -8) == local_e8) {
                  if (local_e8 != 0) goto LAB_001030f8;
                  goto LAB_0010321a;
                }
              }
              else {
joined_r0x00102d50:
                if (local_e8 == 1) {
LAB_001030f8:
                  uVar22 = 0;
                  do {
                    uVar21 = uVar22;
                    if (lVar19 == 0) {
                      lVar19 = *(long *)(param_4 + 8);
                      if (lVar19 == 0) {
                        lVar17 = 0;
                        goto LAB_00102b81;
                      }
                      lVar17 = *(long *)(lVar19 + -8);
                      if (lVar17 <= (long)uVar22) goto LAB_00102b81;
                      lVar19 = *(long *)(lVar19 + uVar22 * 8);
                      lVar17 = *(long *)(piVar18 + 4);
                      if (lVar17 == 0) goto LAB_0010312e;
                      if (uVar22 != 0) goto LAB_001031b3;
                    }
                    else if (uVar22 == 0) {
                      lVar17 = *(long *)(piVar18 + 4);
                      uVar21 = 0;
                      if (lVar17 == 0) {
LAB_0010312e:
                        lVar3 = *(long *)(piVar18 + 8);
                        if (lVar3 == 0) {
                          lVar17 = 0;
                          goto LAB_00102b81;
                        }
                        lVar17 = *(long *)(lVar3 + -8);
                        if (lVar17 <= (long)uVar21) goto LAB_00102b81;
                        lVar17 = *(long *)(lVar3 + uVar22 * 8);
                      }
                    }
                    else {
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      if (*(long *)(piVar18 + 4) == 0) {
                        lVar19 = 0;
                        goto LAB_0010312e;
                      }
                      lVar19 = 0;
LAB_001031b3:
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      lVar17 = 0;
                    }
                    if (lVar19 != lVar17) break;
                    uVar22 = uVar22 + 1;
                    if (local_e8 <= (uint)uVar22) goto LAB_0010321a;
                    lVar19 = *(long *)(param_4 + 4);
                  } while( true );
                }
              }
            }
          }
          else {
            if (lVar19 != 0) {
              local_e8 = 1;
              goto LAB_001030f8;
            }
            if (*(long *)(param_4 + 8) != 0) {
              local_e8 = (uint)*(undefined8 *)(*(long *)(param_4 + 8) + -8);
              goto joined_r0x00102d50;
            }
          }
        }
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)&local_48,pCVar1);
        if (*(int *)(lVar13 + 0x30) == 0) {
          uVar21 = 0;
          lVar13 = 0;
          goto LAB_001030cd;
        }
        piVar18 = *(int **)(lVar13 + 0x38);
        if (piVar18[1] == param_4[1]) goto LAB_00102d1b;
      }
LAB_00102d56:
      uVar10 = local_68;
      uVar6 = local_60;
      if (local_48 != 0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
          uVar10 = local_68;
          uVar6 = local_60;
        }
      }
    }
LAB_00102c88:
    local_60 = uVar6;
    local_68 = uVar10;
    uVar10 = local_68;
    uVar6 = local_60;
  }
  local_98 = *param_5;
  local_a0 = 0;
  local_78[0] = 0;
  local_90 = *(undefined1 *)(param_5 + 1);
  local_88 = param_5[2];
  if (param_5[4] != 0) {
    local_68 = uVar10;
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
    lVar13 = local_48;
    Vector<RenderingDevice::Uniform>::push_back(local_a8);
    if (lVar13 != 0) {
      LOCK();
      plVar2 = (long *)(lVar13 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
  }
  lVar13 = local_78[0];
  local_48 = 0;
  local_68 = local_98;
  local_60 = local_90;
  local_58 = local_88;
  if (local_78[0] == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
    lVar17 = local_48;
    Vector<RenderingDevice::Uniform>::push_back(local_a8);
    if (lVar17 != 0) {
      LOCK();
      plVar2 = (long *)(lVar17 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
      lVar13 = local_78[0];
      if (local_78[0] == 0) goto LAB_00102f5c;
    }
    LOCK();
    plVar2 = (long *)(lVar13 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
  }
LAB_00102f5c:
  uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                     (this,param_2,param_3,uVar9,uVar7,local_a8);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_a0);
LAB_00102f81:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MotionVectorsStoreShaderRD::~MotionVectorsStoreShaderRD() */

void __thiscall
MotionVectorsStoreShaderRD::~MotionVectorsStoreShaderRD(MotionVectorsStoreShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



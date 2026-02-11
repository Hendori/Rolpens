
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



/* RendererRD::TAA::~TAA() */

void __thiscall RendererRD::TAA::~TAA(TAA *this)

{
  ShaderRD::version_free(this,*(undefined8 *)(this + 0x178));
  *(undefined ***)this = &PTR__TaaResolveShaderRD_00106c10;
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



/* RendererRD::TAA::TAA() */

void __thiscall RendererRD::TAA::TAA(TAA *this)

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
  char *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD((ShaderRD *)this);
  *(undefined ***)this = &PTR__TaaResolveShaderRD_00106c10;
  ShaderRD::setup((char *)this,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n\n\n\n#ifndef MOLTENVK_USED\n#define USE_SUBGROUPS\n#endif \n\n#define GROUP_SIZE 8\n#define FLT_MIN 0.00000001\n#define FLT_MAX 32767.0\n#define RPC_9 0.11111111111\n#define RPC_16 0.0625\n\n#ifdef USE_SUBGROUPS\nlayout(local_size_x = GROUP_SIZE, local_size_y = GROUP_SIZE, local_size_z = 1) in;\n#endif\n\nlayout(rgba16f, set = 0, binding = 0) uniform restrict readonly image2D color_buffer;\nlayout(set = 0, binding = 1) uniform sampler2D depth_buffer;\nlayout(rg16f, set = 0, binding = 2) uniform restrict readonly image2D velocity_buffer;\nlayout(rg16f, set = 0, binding = 3) uniform restrict readonly image2D last_velocity_buffer;\nlayout(set = 0, binding = 4) uniform sampler2D history_buffer;\nlayout(rgba16f, set = 0, binding = 5) uniform restrict writeonly image2D output_buffer;\n\nlayout(push_constant, std430) uniform Params {\n\tvec2 resolution;\n\tfloat disocclusion_threshold; \n\tfloat disocclusion_scale;\n}\nparams;\n\nconst ivec2 kOffsets3x3[9] = {\n\tivec2(-1, -1),\n\tivec2(0, -1),\n\tivec2(1, -1),\n\tivec2(-1, 0),\n\tivec2(0, 0),\n\tivec2(1, 0),\n\tivec2(-1, 1),\n\tivec2(0, 1),\n\tivec2(1, 1),\n};\n\n/*------------------------------------------------------------------------------\n\t\t\t\t\t\tTHREAD GROUP SHARED MEMORY (LDS)\n------------------------------------------------------------------------------*/\n\nconst int kBorderSize = 1;\nconst int kGroupSize = GROUP_SIZE;\nconst int kTileDimension = kGroupSize + kBorderSize * 2;\nconst int kTileDimension2 = kTileDimension * kTileDimension;\n\nvec3 reinhard(vec3 hdr) {\n\treturn hdr / (hdr + 1.0);\n}\nvec3 reinhard_inverse(vec3 sdr) {\n\treturn sdr / (1.0 - sdr);\n}\n\nfloat get_depth(ivec2 thread_id) {\n\treturn texelFetch(depth_buffer, thread_id, 0).r;\n}\n\n#ifdef USE_SUBGROUPS\nshared vec3 tile_color[kTileDimension][kTileDimension];\nshared float tile_depth[kTileDimension][kTileDimension];\n\nvec3 load_color(uvec2 group_thread_id) {\n\tgroup_thread_id += kBorderSize;\n\treturn tile_color[group_thread_id.x][group_thread_id.y];\n}\n\nvoid store_color(uvec2 group_thread_id, vec3 color) {\n\ttile_color[group_thread_id.x]..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  local_58 = "\n#define MODE_TAA_RESOLVE";
  local_70 = 0;
  local_68 = 0;
  local_50 = 0x19;
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
        goto LAB_0010047e;
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
LAB_0010047e:
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
  local_58 = "";
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
LAB_00100733:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar10,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar10 = *(long *)(*(long *)(this + 0x18) + -8);
    if (lVar10 < 1) goto LAB_00100733;
    pcVar3 = *(char **)(this + 0x28);
    if (pcVar3 == (char *)0x0) {
LAB_001007d0:
      lVar10 = 0;
LAB_001007d3:
      uVar9 = 0;
LAB_001007ea:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar9,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar10 = *(long *)(pcVar3 + -8);
    if (lVar10 < 1) goto LAB_001007d3;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar11 = 0;
      goto LAB_0010061c;
    }
    if ((uVar9 == 0) || (*(uint *)(this + 0xd4) <= (uint)uVar9)) {
LAB_001007a0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar11 = 0;
      goto LAB_0010061c;
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
      goto LAB_001007a0;
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
    if (puVar4 == (uint *)0x0) goto LAB_001007d0;
    lVar10 = *(long *)(puVar4 + -2);
    if (lVar10 < 1) goto LAB_001007d3;
    uVar9 = (ulong)*puVar4;
    lVar13 = *(long *)(lVar12 + 0x68);
    if (lVar13 == 0) {
      lVar10 = 0;
      goto LAB_001007ea;
    }
    lVar10 = *(long *)(lVar13 + -8);
    if (lVar10 <= (long)uVar9) goto LAB_001007ea;
    if (*(long *)(lVar13 + uVar9 * 8) == 0) {
      cVar2 = *(char *)(lVar12 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end((Version *)this,iVar7);
      cVar2 = *(char *)(lVar12 + 0x90);
    }
    if (cVar2 != '\0') {
      puVar5 = *(undefined8 **)(lVar12 + 0x88);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001007d0;
      lVar10 = puVar5[-1];
      if (0 < lVar10) {
        uVar11 = *puVar5;
        goto LAB_0010061c;
      }
      goto LAB_001007d3;
    }
  }
  uVar11 = 0;
LAB_0010061c:
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



/* RendererRD::TAA::resolve(RID, RID, RID, RID, RID, RID, Vector2, float, float) */

void RendererRD::TAA::resolve
               (undefined8 param_1,Version *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  code *pcVar3;
  UniformSetCacheRD *pUVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 uVar17;
  long lVar18;
  undefined1 uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  long local_2a8;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined8 local_258;
  long local_248 [2];
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_228;
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
  ulong local_188 [2];
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  long local_158 [2];
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
  long local_68;
  long local_58 [5];
  
  pUVar4 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101798;
    uVar13 = 0x34;
    pcVar11 = "Parameter \"uniform_set_cache\" is null.";
    goto LAB_00100c28;
  }
  lVar8 = RendererRD::MaterialStorage::get_singleton();
  if (lVar8 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x36;
      pcVar11 = "Parameter \"material_storage\" is null.";
      goto LAB_00100c28;
    }
    goto LAB_00101798;
  }
  uVar12 = *(ulong *)(param_2 + 0x178);
  if (*(long *)(param_2 + 0x18) == 0) {
    lVar16 = 0;
LAB_001016e3:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar16,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar16 = *(long *)(*(long *)(param_2 + 0x18) + -8);
    if (lVar16 < 1) goto LAB_001016e3;
    pcVar11 = *(char **)(param_2 + 0x28);
    if (pcVar11 == (char *)0x0) {
LAB_00101500:
      lVar16 = 0;
LAB_00101503:
      uVar12 = 0;
LAB_00101520:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar16,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar16 = *(long *)(pcVar11 + -8);
    if (lVar16 < 1) goto LAB_00101503;
    if (*pcVar11 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00100bff;
    }
    if ((uVar12 == 0) || (*(uint *)(param_2 + 0xd4) <= (uint)uVar12)) {
LAB_001014d0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
    }
    else {
      lVar18 = ((uVar12 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0xd0)) * 0xa0 +
               *(long *)(*(long *)(param_2 + 0xc0) +
                        ((uVar12 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0xd0)) * 8);
      if (*(int *)(lVar18 + 0x98) != (int)(uVar12 >> 0x20)) {
        if (*(int *)(lVar18 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_001014d0;
      }
      iVar7 = (int)lVar18;
      if (*(char *)(lVar18 + 0x91) != '\0') {
        ShaderRD::_initialize_version(param_2);
        lVar16 = *(long *)(param_2 + 0x78);
        if (lVar16 != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(lVar16 + -8) <= lVar14) break;
            if (*(char *)(lVar16 + lVar14) == '\0') {
              ShaderRD::_allocate_placeholders(param_2,iVar7);
            }
            else {
              ShaderRD::_compile_version_start(param_2,iVar7);
            }
            lVar16 = *(long *)(param_2 + 0x78);
            lVar14 = lVar14 + 1;
          } while (lVar16 != 0);
        }
      }
      puVar1 = *(uint **)(param_2 + 0x38);
      if (puVar1 == (uint *)0x0) goto LAB_00101500;
      lVar16 = *(long *)(puVar1 + -2);
      if (lVar16 < 1) goto LAB_00101503;
      uVar12 = (ulong)*puVar1;
      lVar14 = *(long *)(lVar18 + 0x68);
      if (lVar14 == 0) {
        lVar16 = 0;
        goto LAB_00101520;
      }
      lVar16 = *(long *)(lVar14 + -8);
      if (lVar16 <= (long)uVar12) goto LAB_00101520;
      if (*(long *)(lVar14 + uVar12 * 8) != 0) {
        ShaderRD::_compile_version_end(param_2,iVar7);
      }
      if (*(char *)(lVar18 + 0x90) != '\0') {
        plVar2 = *(long **)(lVar18 + 0x88);
        if (plVar2 == (long *)0x0) goto LAB_00101500;
        lVar16 = plVar2[-1];
        if (lVar16 < 1) goto LAB_00101503;
        lVar16 = *plVar2;
        if (lVar16 != 0) {
          lVar8 = *(long *)(lVar8 + 0x50);
          local_270 = _LC51;
          local_278 = param_1;
          RenderingDevice::get_singleton();
          pvVar9 = (void *)RenderingDevice::compute_list_begin();
          uVar13 = RenderingDevice::get_singleton();
          lVar18 = 0;
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar13,pvVar9,*(undefined8 *)(param_2 + 0x180));
          local_260 = 0;
          local_248[0] = 0;
          local_268 = 3;
          local_80 = 0;
          local_258 = param_3;
          local_58[0] = lVar8;
          local_58[1] = param_5;
          iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
          uVar12 = local_80;
          if (iVar7 == 0) {
            do {
              if (uVar12 == 0) {
                lVar14 = 0;
LAB_0010144c:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar14,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar14 = *(long *)(uVar12 + -8);
                if (lVar14 <= lVar18) goto LAB_0010144c;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
                *(long *)(local_80 + lVar18 * 8) = local_58[lVar18];
                uVar12 = local_80;
              }
              if (lVar18 != 0) break;
              lVar18 = 1;
            } while( true );
          }
          plVar2 = (long *)(uVar12 + -0x10);
          local_230 = 0;
          local_228 = 0;
          local_218[0] = 0;
          local_238 = _LC52;
          if (uVar12 != 0) {
            do {
              lVar18 = *plVar2;
              if (lVar18 == 0) goto LAB_00100d8d;
              LOCK();
              lVar14 = *plVar2;
              bVar20 = lVar18 == lVar14;
              if (bVar20) {
                *plVar2 = lVar18 + 1;
                lVar14 = lVar18;
              }
              UNLOCK();
            } while (!bVar20);
            if (lVar14 != -1) {
              local_218[0] = local_80;
            }
LAB_00100d8d:
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                Memory::free_static((void *)(local_80 + -0x10),false);
              }
            }
          }
          uVar15 = _LC44;
          uVar13 = _LC43;
          lVar18 = 0;
          local_58[1] = param_8;
          local_200 = 0;
          local_1e8[0] = 0;
          local_208 = _LC43;
          local_1d0 = 0;
          local_1b8[0] = 0;
          local_1d8 = _LC44;
          local_80 = 0;
          local_1f8 = param_6;
          local_1c8 = param_7;
          local_58[0] = lVar8;
          iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
          uVar12 = local_80;
          if (iVar7 == 0) {
            do {
              if (uVar12 == 0) {
                lVar8 = 0;
LAB_001013cc:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar8,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar8 = *(long *)(uVar12 - 8);
                if (lVar8 <= lVar18) goto LAB_001013cc;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
                *(long *)(local_80 + lVar18 * 8) = local_58[lVar18];
                uVar12 = local_80;
              }
              if (lVar18 != 0) break;
              lVar18 = 1;
            } while( true );
          }
          local_1a0 = 0;
          local_198 = 0;
          local_188[0] = 0;
          local_1a8 = _LC45;
          if (uVar12 == 0) {
            lVar8 = 0;
            uVar19 = 0;
            local_2a8 = 0;
            uVar17 = 0;
          }
          else {
            plVar2 = (long *)(uVar12 - 0x10);
            do {
              lVar8 = *plVar2;
              if (lVar8 == 0) goto LAB_00100ead;
              LOCK();
              lVar18 = *plVar2;
              bVar20 = lVar8 == lVar18;
              if (bVar20) {
                *plVar2 = lVar8 + 1;
                lVar18 = lVar8;
              }
              UNLOCK();
            } while (!bVar20);
            if (lVar18 != -1) {
              local_188[0] = local_80;
            }
LAB_00100ead:
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 - 0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                Memory::free_static((void *)(local_80 - 0x10),false);
              }
            }
            local_2a8 = local_1b8[0];
            uVar13 = local_208;
            uVar15 = local_1d8;
            lVar8 = local_1e8[0];
            uVar19 = local_1d0;
            uVar17 = local_200;
          }
          uVar12 = local_188[0];
          uVar6 = local_1a0;
          uVar5 = local_1a8;
          uVar10 = RenderingDevice::get_singleton();
          local_80 = local_80 & 0xffffffffffffff00;
          local_68 = 0;
          local_88 = _LC53;
          local_a8 = local_198;
          local_98[0] = 0;
          local_b8 = uVar5;
          local_b0 = uVar6;
          local_78 = param_4;
          if (uVar12 != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_98,(CowData *)local_188);
          }
          local_d8 = local_1c8;
          local_c8[0] = 0;
          local_e8 = uVar15;
          local_e0 = uVar19;
          if (local_2a8 != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_c8,(CowData *)local_1b8);
          }
          local_108 = local_1f8;
          local_f8[0] = 0;
          local_118 = uVar13;
          local_110 = uVar17;
          if (lVar8 != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_f8,(CowData *)local_1e8);
          }
          local_128[0] = 0;
          local_148 = local_238;
          local_140 = local_230;
          local_138 = local_228;
          if (local_218[0] != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_128,(CowData *)local_218);
          }
          local_158[0] = 0;
          local_178 = local_268;
          local_170 = local_260;
          local_168 = local_258;
          if (local_248[0] == 0) {
            uVar13 = UniformSetCacheRD::
                     get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar4,lVar16,0,&local_178,&local_148,&local_118,&local_e8,&local_b8
                                ,&local_88);
            RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar13,0);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_158,(CowData *)local_248);
            lVar8 = local_158[0];
            uVar13 = UniformSetCacheRD::
                     get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
                               (pUVar4,lVar16,0,&local_178,&local_148,&local_118,&local_e8,&local_b8
                                ,&local_88);
            RenderingDevice::compute_list_bind_uniform_set(uVar10,pvVar9,uVar13,0);
            if (lVar8 != 0) {
              LOCK();
              plVar2 = (long *)(lVar8 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                Memory::free_static((void *)(local_158[0] + -0x10),false);
              }
            }
          }
          if (local_128[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_128[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_128[0] + -0x10),false);
            }
          }
          if (local_f8[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_f8[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_f8[0] + -0x10),false);
            }
          }
          if (local_c8[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_c8[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_c8[0] + -0x10),false);
            }
          }
          if (local_98[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_98[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_98[0] + -0x10),false);
            }
          }
          if (local_68 != 0) {
            LOCK();
            plVar2 = (long *)(local_68 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_68 + -0x10),false);
            }
          }
          lVar8 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_set_push_constant(lVar8,pvVar9,(uint)&local_278);
          lVar8 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_dispatch_threads
                    (lVar8,(uint)pvVar9,(uint)(long)(float)param_1,
                     (uint)(long)(float)((ulong)param_1 >> 0x20));
          RenderingDevice::get_singleton();
          RenderingDevice::compute_list_end();
          if (local_188[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_188[0] - 0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_188[0] - 0x10),false);
            }
          }
          if (local_1b8[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_1b8[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_1b8[0] + -0x10),false);
            }
          }
          if (local_1e8[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_1e8[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_1e8[0] + -0x10),false);
            }
          }
          if (local_218[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_218[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_218[0] + -0x10),false);
            }
          }
          if (local_248[0] != 0) {
            LOCK();
            plVar2 = (long *)(local_248[0] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_248[0] + -0x10),false);
            }
          }
          if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00101798;
        }
      }
    }
  }
LAB_00100bff:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00101798:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar13 = 0x39;
  pcVar11 = "Condition \"shader.is_null()\" is true.";
LAB_00100c28:
  _err_print_error("resolve","servers/rendering/renderer_rd/effects/taa.cpp",uVar13,pcVar11,0,0);
  return;
}



/* RendererRD::TAA::process(Ref<RenderSceneBuffersRD>, RenderingDeviceCommons::DataFormat, float,
   float) */

void __thiscall
RendererRD::TAA::process
          (undefined4 param_1,undefined4 param_2,TAA *this,undefined8 *param_4,undefined4 param_5)

{
  long *plVar1;
  uint uVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uStack_f0;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = RendererRD::CopyEffects::get_singleton();
  pSVar3 = (StringName *)*param_4;
  uVar2 = *(uint *)(pSVar3 + 0x1a8);
  uVar15 = *(undefined8 *)(pSVar3 + 0x1ac);
  uVar4 = *(undefined8 *)(pSVar3 + 0x1a0);
  if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
       {lambda()#2}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                   ::{lambda()#2}::operator()()::sname), iVar8 != 0)) {
    _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                         ::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                  ::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                         ::{lambda()#2}::operator()()::sname);
  }
  if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
       {lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                   ::{lambda()#1}::operator()()::sname), iVar8 != 0)) {
    _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                         ::{lambda()#1}::operator()()::sname);
  }
  cVar7 = RenderSceneBuffersRD::has_texture
                    (pSVar3,(StringName *)
                            &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                             ::{lambda()#1}::operator()()::sname);
  bVar5 = false;
  if (cVar7 == '\0') {
    uVar10 = *param_4;
    if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
         {lambda()#4}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#4}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                    ::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#4}::operator()()::sname);
    }
    if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
         {lambda()#3}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#3}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                    ::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#3}::operator()()::sname);
    }
    RenderSceneBuffersRD::create_texture
              (uVar10,&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                       ::{lambda()#3}::operator()()::sname,
               &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
                {lambda()#4}::operator()()::sname,param_5,9,0,0,0,1,1,0);
    uVar10 = *param_4;
    if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
         {lambda()#6}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#6}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                    ::{lambda()#6}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#6}::operator()()::sname);
    }
    if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
         {lambda()#5}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#5}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                    ::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#5}::operator()()::sname);
    }
    RenderSceneBuffersRD::create_texture
              (uVar10,&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                       ::{lambda()#5}::operator()()::sname,
               &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
                {lambda()#6}::operator()()::sname,param_5,9,0,0,0,1,1,0);
    uVar10 = *param_4;
    if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
         {lambda()#8}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#8}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                    ::{lambda()#8}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#8}::operator()()::sname);
    }
    if ((process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
         {lambda()#7}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#7}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                    ::{lambda()#7}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                           ::{lambda()#7}::operator()()::sname);
    }
    RenderSceneBuffersRD::create_texture
              (uVar10,&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                       ::{lambda()#7}::operator()()::sname,
               &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
                {lambda()#8}::operator()()::sname,0x52,9,0,0,0,1,1,0);
    bVar5 = true;
  }
  uVar10 = RenderingDevice::get_singleton();
  local_80 = 0;
  local_78 = &_LC60;
  local_70 = 3;
  local_58._4_4_ = _LC59;
  local_58._0_4_ = _LC59;
  local_58._12_4_ = _LC59;
  local_58._8_4_ = _LC59;
  String::parse_latin1((StrRange *)&local_80);
  uStack_f0 = 0x1018b8;
  RenderingDevice::draw_command_begin_label(uVar10,(StrRange *)&local_80,local_58);
  lVar6 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      uStack_f0 = 0x101f61;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (uVar2 != 0) {
    uVar16 = 0;
    uVar15 = CONCAT44((float)(int)((ulong)uVar15 >> 0x20),(float)(int)uVar15);
    do {
      pSVar3 = (StringName *)*param_4;
      if (RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::operator()()::
          sname == '\0') {
        uStack_f0 = 0x101af2;
        iVar8 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                     {lambda()#2}::operator()()::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::
                        operator()()::sname,&__dso_handle);
          uStack_f0 = 0x101b38;
          __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#2}::operator()()::sname);
        }
      }
      if (RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::operator()()::
          sname == '\0') {
        uStack_f0 = 0x101b5c;
        iVar8 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                     {lambda()#1}::operator()()::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          uStack_f0 = 0x101ba2;
          __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#1}::operator()()::sname);
        }
      }
      uVar10 = RenderSceneBuffersRD::get_texture_slice
                         (pSVar3,(StringName *)
                                 &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                  {lambda()#1}::operator()()::sname,0x106c28,uVar16,0,1);
      uVar11 = RenderSceneBuffersRD::get_velocity_buffer(SUB81(*param_4,0),0);
      pSVar3 = (StringName *)*param_4;
      if (process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
          {lambda()#10}::operator()()::sname == '\0') {
        uStack_f0 = 0x101ddc;
        iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#10}::operator()()::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#10}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                        ::{lambda()#10}::operator()()::sname,&__dso_handle);
          uStack_f0 = 0x101e22;
          __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#10}::operator()()::sname);
        }
      }
      if (process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
          {lambda()#9}::operator()()::sname == '\0') {
        uStack_f0 = 0x101d7c;
        iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#9}::operator()()::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#9}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                        ::{lambda()#9}::operator()()::sname,&__dso_handle);
          uStack_f0 = 0x101dc2;
          __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#9}::operator()()::sname);
        }
      }
      uVar18 = 1;
      auVar17 = RenderSceneBuffersRD::get_texture_slice
                          (pSVar3,(StringName *)
                                  &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                   ::{lambda()#9}::operator()()::sname,0x1023a8,uVar16,0,1);
      uVar12 = auVar17._0_8_;
      pSVar3 = (StringName *)*param_4;
      if (process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
          {lambda()#12}::operator()()::sname == '\0') {
        iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#12}::operator()()::sname,uStack_f0,auVar17._8_8_,
                                    uVar18);
        if (iVar8 != 0) {
          _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#12}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                        ::{lambda()#12}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#12}::operator()()::sname);
        }
      }
      if (process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
          {lambda()#11}::operator()()::sname == '\0') {
        iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                     ::{lambda()#11}::operator()()::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#11}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                        ::{lambda()#11}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                               ::{lambda()#11}::operator()()::sname);
        }
      }
      uVar18 = RenderSceneBuffersRD::get_texture_slice
                         (pSVar3,(StringName *)
                                 &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                  ::{lambda()#11}::operator()()::sname,0x102388,uVar16,0,1);
      if (!bVar5) {
        uVar13 = RenderSceneBuffersRD::get_depth_texture((uint)*param_4);
        pSVar3 = (StringName *)*param_4;
        if (process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
            {lambda()#14}::operator()()::sname == '\0') {
          iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                       ::{lambda()#14}::operator()()::sname);
          if (iVar8 != 0) {
            _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                 ::{lambda()#14}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                          ::{lambda()#14}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                 ::{lambda()#14}::operator()()::sname);
          }
        }
        if (process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)::
            {lambda()#13}::operator()()::sname == '\0') {
          iVar8 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                       ::{lambda()#13}::operator()()::sname);
          if (iVar8 != 0) {
            _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                 ::{lambda()#13}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                          ::{lambda()#13}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                 ::{lambda()#13}::operator()()::sname);
          }
        }
        uVar14 = RenderSceneBuffersRD::get_texture_slice
                           (pSVar3,(StringName *)
                                   &process(Ref<RenderSceneBuffersRD>,RenderingDeviceCommons::DataFormat,float,float)
                                    ::{lambda()#13}::operator()()::sname,0x102368,uVar16,0,1);
        uVar19 = uVar12;
        resolve(uVar15,param_1,param_2,this,uVar10,uVar14,uVar13,uVar11,uVar18,uVar12);
        local_68 = 0;
        local_60 = uVar15;
        auVar17 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_68);
        local_58 = auVar17;
        RendererRD::CopyEffects::copy_to_rect
                  (uVar9,uVar14,uVar10,local_58,0,0,0,0,uVar19 & 0xffffffff00000000);
      }
      uVar16 = uVar16 + 1;
      local_68 = 0;
      local_60 = uVar15;
      auVar17 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_68);
      local_58 = auVar17;
      RendererRD::CopyEffects::copy_to_rect(uVar9,uVar10,uVar12,local_58,0,0,0,0,0);
      local_68 = 0;
      uStack_f0 = 0x101a91;
      local_60 = CONCAT44((float)(int)((ulong)uVar4 >> 0x20),(float)(int)uVar4);
      auVar17 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_68);
      local_58 = auVar17;
      RendererRD::CopyEffects::copy_to_rect(uVar9,uVar11,uVar18,local_58,0,0,0,0,0);
    } while (uVar2 != uVar16);
  }
  uVar15 = RenderingDevice::get_singleton();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  RenderingDevice::draw_command_end_label();
  return;
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



/* TaaResolveShaderRD::~TaaResolveShaderRD() */

void __thiscall TaaResolveShaderRD::~TaaResolveShaderRD(TaaResolveShaderRD *this)

{
  *(undefined ***)this = &PTR__TaaResolveShaderRD_00106c10;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* TaaResolveShaderRD::~TaaResolveShaderRD() */

void __thiscall TaaResolveShaderRD::~TaaResolveShaderRD(TaaResolveShaderRD *this)

{
  *(undefined ***)this = &PTR__TaaResolveShaderRD_00106c10;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
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



/* RenderingDevice::Uniform::Uniform(RenderingDevice::Uniform const&) */

void __thiscall RenderingDevice::Uniform::Uniform(Uniform *this,Uniform *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = param_1[8];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x10) = uVar1;
  if (lVar2 != 0) {
    CowData<RID>::_ref((CowData<RID> *)(this + 0x20),(CowData *)(param_1 + 0x20));
    return;
  }
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
LAB_00102943:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_00102943;
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
LAB_00102f90:
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
  if (lVar10 == 0) goto LAB_00102f90;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00102e69:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00102e69;
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
    goto LAB_00102fe6;
  }
  if (lVar10 == lVar7) {
LAB_00102f0f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00102fe6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00102efa;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00102f0f;
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
LAB_00102efa:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RID>::_unref() */

void __thiscall CowData<RID>::_unref(CowData<RID> *this)

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
LAB_001032e0:
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
  if (lVar7 == 0) goto LAB_001032e0;
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
LAB_0010324c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001031e1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010324c;
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
LAB_001031e1:
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
LAB_001038e0:
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
  if (lVar11 == 0) goto LAB_001038e0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00103771:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00103771;
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
    goto LAB_00103936;
  }
  if (lVar11 == lVar9) {
LAB_00103853:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00103936:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00103830;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00103853;
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
LAB_00103830:
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



/* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform, RenderingDevice::Uniform,
   RenderingDevice::Uniform, RenderingDevice::Uniform, RenderingDevice::Uniform,
   RenderingDevice::Uniform>(RID, unsigned int, RenderingDevice::Uniform, RenderingDevice::Uniform,
   RenderingDevice::Uniform, RenderingDevice::Uniform, RenderingDevice::Uniform,
   RenderingDevice::Uniform) */

undefined8 __thiscall
UniformSetCacheRD::
get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform,RenderingDevice::Uniform>
          (UniformSetCacheRD *this,long param_2,int param_3,int *param_4,undefined8 *param_5,
          undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  CowData *pCVar1;
  CowData *pCVar2;
  CowData *pCVar3;
  CowData *pCVar4;
  CowData *pCVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  Vector<RenderingDevice::Uniform> local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_330;
  undefined8 local_328;
  long local_318 [2];
  undefined8 local_308;
  undefined1 local_300;
  long local_2f8;
  long local_2e8 [2];
  undefined8 local_2d8;
  undefined1 local_2d0;
  long local_2c8;
  long local_2b8 [2];
  undefined8 local_2a8;
  undefined1 local_2a0;
  long local_298;
  long local_288 [2];
  undefined8 local_278;
  undefined1 local_270;
  long local_268;
  long local_258 [2];
  undefined8 local_248;
  undefined1 local_240;
  long local_238;
  long local_228 [2];
  undefined8 local_218;
  undefined1 local_210;
  long local_208;
  long local_1f8 [2];
  undefined8 local_1e8;
  undefined1 local_1e0;
  long local_1d8;
  long local_1c8 [2];
  undefined8 local_1b8;
  undefined1 local_1b0;
  long local_1a8;
  long local_198 [2];
  undefined8 local_188;
  undefined1 local_180;
  long local_178;
  long local_168 [2];
  undefined8 local_158;
  undefined1 local_150;
  long local_148;
  long local_138 [2];
  undefined8 local_128;
  undefined1 local_120;
  long local_118;
  long local_108 [2];
  undefined8 local_f8;
  undefined1 local_f0;
  long local_e8;
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
  iVar11 = (int)((ulong)param_2 >> 0x20);
  uVar15 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           0x7f07c65;
  uVar15 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^
           (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
  pCVar1 = (CowData *)(param_9 + 4);
  uVar15 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64;
  local_248 = *param_9;
  local_240 = *(undefined1 *)(param_9 + 1);
  local_238 = param_9[2];
  local_228[0] = 0;
  if (param_9[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_228,pCVar1);
  }
  local_258[0] = 0;
  local_278 = *param_8;
  pCVar2 = (CowData *)(param_8 + 4);
  local_270 = *(undefined1 *)(param_8 + 1);
  local_268 = param_8[2];
  if (param_8[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_258,pCVar2);
  }
  local_288[0] = 0;
  local_2a8 = *param_7;
  pCVar3 = (CowData *)(param_7 + 4);
  local_2a0 = *(undefined1 *)(param_7 + 1);
  local_298 = param_7[2];
  if (param_7[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_288,pCVar3);
  }
  local_2b8[0] = 0;
  local_2d8 = *param_6;
  pCVar4 = (CowData *)(param_6 + 4);
  local_2d0 = *(undefined1 *)(param_6 + 1);
  local_2c8 = param_6[2];
  if (param_6[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_2b8,pCVar4);
  }
  local_2e8[0] = 0;
  local_308 = *param_5;
  pCVar5 = (CowData *)(param_5 + 4);
  local_300 = *(undefined1 *)(param_5 + 1);
  local_2f8 = param_5[2];
  if (param_5[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_2e8,pCVar5);
  }
  uVar15 = (*param_4 * 0x16a88000 | (uint)(*param_4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64;
  uVar15 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^
           (param_4[1] * 0x16a88000 | (uint)(param_4[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar25 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
  lVar14 = *(long *)(param_4 + 4);
  if (lVar14 != 0) {
    uVar26 = 1;
LAB_0010407e:
    uVar24 = 0;
    do {
      uVar15 = (uint)uVar25;
      if (lVar14 == 0) {
        lVar14 = *(long *)(param_4 + 8);
        if (lVar14 == 0) goto LAB_00104100;
        lVar22 = *(long *)(lVar14 + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        lVar14 = *(long *)(lVar14 + uVar24 * 8);
LAB_00104091:
        iVar11 = (int)((ulong)lVar14 >> 0x20);
        uVar16 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar15 = uVar15 ^ ((int)lVar14 * 0x16a88000 | (uint)((int)lVar14 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
      else {
        if (uVar24 == 0) goto LAB_00104091;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar16 = 0;
      }
      uVar24 = uVar24 + 1;
      uVar16 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
      uVar25 = (ulong)((uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64);
      if (uVar24 == uVar26) goto LAB_00103da0;
      lVar14 = *(long *)(param_4 + 4);
    } while( true );
  }
  if ((*(long *)(param_4 + 8) != 0) &&
     (uVar24 = *(ulong *)(*(long *)(param_4 + 8) + -8), uVar26 = uVar24 & 0xffffffff,
     (int)uVar24 != 0)) goto LAB_0010407e;
LAB_00103da0:
  local_1f8[0] = 0;
  uVar15 = ((uint)uVar25 ^ (uint)(uVar25 >> 0x10)) * -0x7a143595;
  uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
  local_218 = local_248;
  local_210 = local_240;
  local_208 = local_238;
  if (local_228[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_1f8,(CowData *)local_228);
  }
  local_1c8[0] = 0;
  local_1e8 = local_278;
  local_1e0 = local_270;
  local_1d8 = local_268;
  if (local_258[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_1c8,(CowData *)local_258);
  }
  local_198[0] = 0;
  local_1b8 = local_2a8;
  local_1b0 = local_2a0;
  local_1a8 = local_298;
  if (local_288[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_198,(CowData *)local_288);
  }
  local_168[0] = 0;
  local_188 = local_2d8;
  local_180 = local_2d0;
  local_178 = local_2c8;
  if (local_2b8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_2b8);
  }
  lVar14 = local_2f8;
  uVar16 = ((int)local_308 * 0x16a88000 | (uint)((int)local_308 * -0x3361d2af) >> 0x11) * 0x1b873593
           ^ uVar15;
  uVar15 = ((uVar16 ^ uVar15 >> 0x10) << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
           (local_308._4_4_ * 0x16a88000 | (uint)(local_308._4_4_ * -0x3361d2af) >> 0x11) *
           0x1b873593;
  uVar25 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
  if (local_2f8 == 0) {
    if ((local_2e8[0] != 0) &&
       (uVar26 = *(ulong *)(local_2e8[0] + -8) & 0xffffffff, (int)*(ulong *)(local_2e8[0] + -8) != 0
       )) goto LAB_00103fa9;
  }
  else {
    uVar26 = 1;
LAB_00103fa9:
    iVar11 = (int)local_2f8;
    uVar24 = 0;
    iVar19 = (int)((ulong)local_2f8 >> 0x20);
    do {
      uVar15 = (uint)uVar25;
      if (lVar14 == 0) {
        if (local_2e8[0] == 0) goto LAB_00104100;
        lVar22 = *(long *)(local_2e8[0] + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        uVar13 = *(undefined8 *)(local_2e8[0] + uVar24 * 8);
        iVar17 = (int)uVar13;
        iVar18 = (int)((ulong)uVar13 >> 0x20);
        uVar15 = uVar15 ^ (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar18 * 0x16a88000 | (uint)(iVar18 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else if (uVar24 == 0) {
        uVar15 = uVar15 ^ (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar19 * 0x16a88000 | (uint)(iVar19 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else {
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar16 = 0;
      }
      uVar24 = uVar24 + 1;
      uVar16 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
      uVar15 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      uVar25 = (ulong)uVar15;
    } while (uVar24 != uVar26);
    uVar25 = (ulong)uVar15;
  }
  local_138[0] = 0;
  uVar15 = ((uint)uVar25 ^ (uint)(uVar25 >> 0x10)) * -0x7a143595;
  uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
  local_158 = local_218;
  local_150 = local_210;
  local_148 = local_208;
  if (local_1f8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)local_1f8);
  }
  local_108[0] = 0;
  local_128 = local_1e8;
  local_120 = local_1e0;
  local_118 = local_1d8;
  if (local_1c8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_1c8);
  }
  local_d8[0] = 0;
  local_f8 = local_1b8;
  local_f0 = local_1b0;
  local_e8 = local_1a8;
  if (local_198[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)local_198);
  }
  lVar14 = local_178;
  uVar16 = ((int)local_188 * 0x16a88000 | (uint)((int)local_188 * -0x3361d2af) >> 0x11) * 0x1b873593
           ^ uVar15;
  uVar15 = ((uVar16 ^ uVar15 >> 0x10) << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
           (local_188._4_4_ * 0x16a88000 | (uint)(local_188._4_4_ * -0x3361d2af) >> 0x11) *
           0x1b873593;
  uVar25 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
  if (local_178 == 0) {
    if ((local_168[0] != 0) &&
       (uVar26 = *(ulong *)(local_168[0] + -8) & 0xffffffff, (int)*(ulong *)(local_168[0] + -8) != 0
       )) goto LAB_0010433f;
  }
  else {
    uVar26 = 1;
LAB_0010433f:
    iVar11 = (int)local_178;
    uVar24 = 0;
    iVar19 = (int)((ulong)local_178 >> 0x20);
    do {
      uVar15 = (uint)uVar25;
      if (lVar14 == 0) {
        if (local_168[0] == 0) goto LAB_00104100;
        lVar22 = *(long *)(local_168[0] + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        uVar13 = *(undefined8 *)(local_168[0] + uVar24 * 8);
        iVar17 = (int)uVar13;
        iVar18 = (int)((ulong)uVar13 >> 0x20);
        uVar15 = uVar15 ^ (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar18 * 0x16a88000 | (uint)(iVar18 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else if (uVar24 == 0) {
        uVar15 = uVar15 ^ (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar19 * 0x16a88000 | (uint)(iVar19 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else {
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar16 = 0;
      }
      uVar24 = uVar24 + 1;
      uVar16 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
      uVar15 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      uVar25 = (ulong)uVar15;
    } while (uVar24 != uVar26);
    uVar25 = (ulong)uVar15;
  }
  local_a8[0] = 0;
  uVar15 = ((uint)uVar25 ^ (uint)(uVar25 >> 0x10)) * -0x7a143595;
  uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
  local_c8 = local_158;
  local_c0 = local_150;
  local_b8 = local_148;
  if (local_138[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_138);
  }
  local_78[0] = 0;
  local_98 = local_128;
  local_90 = local_120;
  local_88 = local_118;
  if (local_108[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_108);
  }
  lVar14 = local_e8;
  uVar16 = ((int)local_f8 * 0x16a88000 | (uint)((int)local_f8 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           uVar15;
  uVar15 = ((uVar16 ^ uVar15 >> 0x10) << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
           (local_f8._4_4_ * 0x16a88000 | (uint)(local_f8._4_4_ * -0x3361d2af) >> 0x11) * 0x1b873593
  ;
  uVar25 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
  if (local_e8 == 0) {
    if ((local_d8[0] != 0) &&
       (uVar26 = *(ulong *)(local_d8[0] + -8) & 0xffffffff, (int)*(ulong *)(local_d8[0] + -8) != 0))
    goto LAB_001045bc;
  }
  else {
    uVar26 = 1;
LAB_001045bc:
    iVar11 = (int)local_e8;
    uVar24 = 0;
    iVar19 = (int)((ulong)local_e8 >> 0x20);
    do {
      uVar15 = (uint)uVar25;
      if (lVar14 == 0) {
        if (local_d8[0] == 0) goto LAB_00104100;
        lVar22 = *(long *)(local_d8[0] + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        uVar13 = *(undefined8 *)(local_d8[0] + uVar24 * 8);
        iVar17 = (int)uVar13;
        iVar18 = (int)((ulong)uVar13 >> 0x20);
        uVar15 = uVar15 ^ (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar18 * 0x16a88000 | (uint)(iVar18 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else if (uVar24 == 0) {
        uVar15 = uVar15 ^ (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar19 * 0x16a88000 | (uint)(iVar19 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else {
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar16 = 0;
      }
      uVar24 = uVar24 + 1;
      uVar16 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
      uVar15 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      uVar25 = (ulong)uVar15;
    } while (uVar24 != uVar26);
    uVar25 = (ulong)uVar15;
  }
  local_48 = 0;
  uVar15 = ((uint)uVar25 ^ (uint)(uVar25 >> 0x10)) * -0x7a143595;
  uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
  local_68 = local_c8;
  local_60 = local_c0;
  local_58 = local_b8;
  if (local_a8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_a8);
  }
  lVar14 = local_88;
  uVar16 = ((int)local_98 * 0x16a88000 | (uint)((int)local_98 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           uVar15;
  uVar15 = ((uVar16 ^ uVar15 >> 0x10) << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
           (local_98._4_4_ * 0x16a88000 | (uint)(local_98._4_4_ * -0x3361d2af) >> 0x11) * 0x1b873593
  ;
  uVar25 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
  if (local_88 == 0) {
    if ((local_78[0] != 0) &&
       (uVar26 = *(ulong *)(local_78[0] + -8) & 0xffffffff, (int)*(ulong *)(local_78[0] + -8) != 0))
    goto LAB_001047c7;
  }
  else {
    uVar26 = 1;
LAB_001047c7:
    iVar11 = (int)local_88;
    uVar24 = 0;
    iVar19 = (int)((ulong)local_88 >> 0x20);
    do {
      uVar15 = (uint)uVar25;
      if (lVar14 == 0) {
        if (local_78[0] == 0) goto LAB_00104100;
        lVar22 = *(long *)(local_78[0] + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        uVar13 = *(undefined8 *)(local_78[0] + uVar24 * 8);
        iVar17 = (int)uVar13;
        iVar18 = (int)((ulong)uVar13 >> 0x20);
        uVar15 = uVar15 ^ (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar18 * 0x16a88000 | (uint)(iVar18 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else if (uVar24 == 0) {
        uVar15 = uVar15 ^ (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar19 * 0x16a88000 | (uint)(iVar19 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else {
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar16 = 0;
      }
      uVar24 = uVar24 + 1;
      uVar16 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
      uVar15 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      uVar25 = (ulong)uVar15;
    } while (uVar24 != uVar26);
    uVar25 = (ulong)uVar15;
  }
  lVar23 = local_48;
  lVar14 = local_58;
  uVar15 = ((uint)(uVar25 >> 0x10) ^ (uint)uVar25) * -0x7a143595;
  uVar16 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
  uVar15 = ((int)local_68 * 0x16a88000 | (uint)((int)local_68 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           uVar16;
  uVar15 = ((uVar16 >> 0x10 ^ uVar15) << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^
           (local_68._4_4_ * 0x16a88000 | (uint)(local_68._4_4_ * -0x3361d2af) >> 0x11) * 0x1b873593
  ;
  uVar15 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64;
  if (local_58 == 0) {
    if (local_48 != 0) {
      uVar25 = *(ulong *)(local_48 + -8) & 0xffffffff;
      if ((int)*(ulong *)(local_48 + -8) != 0) goto LAB_0010497d;
      uVar15 = (uVar15 >> 0x10 ^ uVar15) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      uVar15 = uVar15 >> 0x10 ^ uVar15;
      goto LAB_00104ac0;
    }
    uVar15 = (uVar15 >> 0x10 ^ uVar15) * -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 ^ uVar15 >> 0x10;
  }
  else {
    uVar25 = 1;
LAB_0010497d:
    iVar11 = (int)local_58;
    uVar24 = 0;
    iVar19 = (int)((ulong)local_58 >> 0x20);
    do {
      if (lVar14 == 0) {
        if (lVar23 == 0) goto LAB_001050b1;
        lVar22 = *(long *)(lVar23 + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        uVar13 = *(undefined8 *)(lVar23 + uVar24 * 8);
        iVar17 = (int)uVar13;
        uVar15 = uVar15 ^ (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593;
        iVar17 = (int)((ulong)uVar13 >> 0x20);
        uVar16 = (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else if (uVar24 == 0) {
        uVar15 = uVar15 ^ (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar16 = (iVar19 * 0x16a88000 | (uint)(iVar19 * -0x3361d2af) >> 0x11) * 0x1b873593;
      }
      else {
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar16 = 0;
      }
      uVar24 = uVar24 + 1;
      uVar16 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
      uVar15 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    } while (uVar24 != uVar25);
    uVar15 = (uVar15 >> 0x10 ^ uVar15) * -0x7a143595;
    uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
    uVar15 = uVar15 ^ uVar15 >> 0x10;
    if (lVar23 != 0) {
LAB_00104ac0:
      LOCK();
      plVar6 = (long *)(lVar23 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
  }
  if (local_78[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_78[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
  }
  if (local_a8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_a8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_a8[0] + -0x10),false);
    }
  }
  if (local_d8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_d8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_d8[0] + -0x10),false);
    }
  }
  if (local_108[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_108[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_108[0] + -0x10),false);
    }
  }
  if (local_138[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_138[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_138[0] + -0x10),false);
    }
  }
  if (local_168[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_168[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_168[0] + -0x10),false);
    }
  }
  if (local_198[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_198[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_198[0] + -0x10),false);
    }
  }
  if (local_1c8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_1c8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_1c8[0] + -0x10),false);
    }
  }
  if (local_1f8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_1f8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_1f8[0] + -0x10),false);
    }
  }
  if (local_2e8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_2e8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_2e8[0] + -0x10),false);
    }
  }
  if (local_2b8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_2b8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_2b8[0] + -0x10),false);
    }
  }
  if (local_288[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_288[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_288[0] + -0x10),false);
    }
  }
  if (local_258[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_258[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_258[0] + -0x10),false);
    }
  }
  if (local_228[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_228[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_228[0] + -0x10),false);
    }
  }
  lVar14 = *(long *)(this + (ulong)(uVar15 % 0x3ffd) * 8 + 0x1e0);
  if (lVar14 != 0) {
LAB_00104d6d:
    if ((((*(uint *)(lVar14 + 0x10) == uVar15) && (*(int *)(lVar14 + 0x20) == param_3)) &&
        (*(long *)(lVar14 + 0x18) == param_2)) && (*(int *)(lVar14 + 0x30) == 6)) {
      local_238 = param_9[2];
      local_228[0] = 0;
      local_248 = *param_9;
      local_240 = *(undefined1 *)(param_9 + 1);
      if (param_9[4] != 0) {
        CowData<RID>::_ref((CowData<RID> *)local_228,pCVar1);
      }
      local_258[0] = 0;
      local_278 = *param_8;
      local_270 = *(undefined1 *)(param_8 + 1);
      local_268 = param_8[2];
      if (param_8[4] != 0) {
        CowData<RID>::_ref((CowData<RID> *)local_258,pCVar2);
      }
      local_288[0] = 0;
      local_2a8 = *param_7;
      local_2a0 = *(undefined1 *)(param_7 + 1);
      local_298 = param_7[2];
      if (param_7[4] != 0) {
        CowData<RID>::_ref((CowData<RID> *)local_288,pCVar3);
      }
      local_2b8[0] = 0;
      local_2d8 = *param_6;
      local_2d0 = *(undefined1 *)(param_6 + 1);
      local_2c8 = param_6[2];
      if (param_6[4] != 0) {
        CowData<RID>::_ref((CowData<RID> *)local_2b8,pCVar4);
      }
      local_2e8[0] = 0;
      local_308 = *param_5;
      local_300 = *(undefined1 *)(param_5 + 1);
      local_2f8 = param_5[2];
      if (param_5[4] != 0) {
        CowData<RID>::_ref((CowData<RID> *)local_2e8,pCVar5);
      }
      if (*(int *)(lVar14 + 0x30) == 0) {
        uVar25 = 0;
        lVar14 = 0;
        goto LAB_00105e4e;
      }
      piVar7 = *(int **)(lVar14 + 0x38);
      if ((piVar7[1] == param_4[1]) && (*piVar7 == *param_4)) {
        lVar23 = *(long *)(param_4 + 4);
        if (*(long *)(piVar7 + 4) != 0) {
          if (lVar23 != 0) {
            uVar16 = 1;
            goto LAB_00105d07;
          }
          lVar22 = *(long *)(param_4 + 8);
          if (lVar22 != 0) {
            uVar16 = 1;
            goto LAB_00104f57;
          }
          goto LAB_00104f63;
        }
        if (*(long *)(piVar7 + 8) == 0) {
          if (lVar23 == 0) {
            lVar22 = *(long *)(param_4 + 8);
            uVar16 = 0;
            if (lVar22 != 0) goto LAB_00104f57;
            goto LAB_00105e7e;
          }
          goto LAB_00104f63;
        }
        uVar16 = *(uint *)(*(long *)(piVar7 + 8) + -8);
        uVar12 = 1;
        if (lVar23 == 0) {
          lVar22 = *(long *)(param_4 + 8);
          if (lVar22 == 0) {
            uVar12 = 0;
          }
          else {
LAB_00104f57:
            uVar12 = (uint)*(undefined8 *)(lVar22 + -8);
          }
        }
        if (uVar12 != uVar16) goto LAB_00104f63;
        if (uVar16 != 0) {
LAB_00105d07:
          uVar24 = 0;
          do {
            if (lVar23 == 0) {
              lVar23 = *(long *)(param_4 + 8);
              if (lVar23 == 0) goto LAB_00106b90;
              lVar22 = *(long *)(lVar23 + -8);
              if (lVar22 <= (long)uVar24) goto LAB_00104121;
              lVar23 = *(long *)(lVar23 + uVar24 * 8);
              lVar22 = *(long *)(piVar7 + 4);
              if (lVar22 == 0) goto LAB_00105d2b;
              if (uVar24 != 0) {
LAB_00105db3:
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                lVar22 = 0;
              }
            }
            else {
              if (uVar24 == 0) {
                lVar22 = *(long *)(piVar7 + 4);
                if (lVar22 != 0) goto LAB_00105d49;
              }
              else {
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                lVar23 = *(long *)(piVar7 + 4);
                if (lVar23 != 0) {
                  lVar23 = 0;
                  goto LAB_00105db3;
                }
              }
LAB_00105d2b:
              lVar21 = *(long *)(piVar7 + 8);
              if (lVar21 == 0) goto LAB_00106b90;
              lVar22 = *(long *)(lVar21 + -8);
              if (lVar22 <= (long)uVar24) goto LAB_00104121;
              lVar22 = *(long *)(lVar21 + uVar24 * 8);
            }
LAB_00105d49:
            if (lVar22 != lVar23) goto LAB_00104f63;
            uVar24 = uVar24 + 1;
            if (uVar16 <= (uint)uVar24) break;
            lVar23 = *(long *)(param_4 + 4);
          } while( true );
        }
LAB_00105e7e:
        local_48 = 0;
        local_68 = local_248;
        local_60 = local_240;
        local_58 = local_238;
        if (local_228[0] != 0) {
          CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_228);
        }
        local_78[0] = 0;
        local_98 = local_278;
        local_90 = local_270;
        local_88 = local_268;
        if (local_258[0] != 0) {
          CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_258);
        }
        local_a8[0] = 0;
        local_c8 = local_2a8;
        local_c0 = local_2a0;
        local_b8 = local_298;
        if (local_288[0] != 0) {
          CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_288);
        }
        local_f8 = local_2d8;
        local_f0 = local_2d0;
        local_e8 = local_2c8;
        local_d8[0] = 0;
        if (local_2b8[0] != 0) {
          CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)local_2b8);
        }
        lVar23 = local_2f8;
        uVar25 = (ulong)*(uint *)(lVar14 + 0x30);
        if (*(uint *)(lVar14 + 0x30) < 2) {
          lVar14 = 1;
LAB_00105e4e:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,lVar14,uVar25,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        lVar21 = *(long *)(lVar14 + 0x38);
        if ((*(int *)(lVar21 + 0x2c) == local_308._4_4_) &&
           (*(int *)(lVar21 + 0x28) == (int)local_308)) {
          uVar16 = 1;
          if (*(long *)(lVar21 + 0x38) == 0) {
            if (*(long *)(lVar21 + 0x48) == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = (uint)*(undefined8 *)(*(long *)(lVar21 + 0x48) + -8);
            }
          }
          uVar12 = 1;
          if (local_2f8 == 0) {
            if (local_2e8[0] == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (uint)*(undefined8 *)(local_2e8[0] + -8);
            }
          }
          if (uVar12 == uVar16) {
            uVar24 = 0;
            do {
              if (uVar16 <= (uint)uVar24) {
                RenderingDevice::Uniform::Uniform((Uniform *)&local_218,(Uniform *)&local_68);
                RenderingDevice::Uniform::Uniform((Uniform *)&local_1e8,(Uniform *)&local_98);
                RenderingDevice::Uniform::Uniform((Uniform *)&local_1b8,(Uniform *)&local_c8);
                lVar23 = local_e8;
                uVar25 = (ulong)*(uint *)(lVar14 + 0x30);
                if (*(uint *)(lVar14 + 0x30) < 3) {
                  lVar14 = 2;
                  goto LAB_00105e4e;
                }
                lVar21 = *(long *)(lVar14 + 0x38);
                if ((*(int *)(lVar21 + 0x54) != local_f8._4_4_) ||
                   (*(int *)(lVar21 + 0x50) != (int)local_f8)) goto LAB_00106719;
                uVar16 = 1;
                if (*(long *)(lVar21 + 0x60) == 0) {
                  if (*(long *)(lVar21 + 0x70) == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = (uint)*(undefined8 *)(*(long *)(lVar21 + 0x70) + -8);
                  }
                }
                uVar12 = 1;
                if (local_e8 == 0) {
                  if (local_d8[0] == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = (uint)*(undefined8 *)(local_d8[0] + -8);
                  }
                }
                if (uVar12 != uVar16) goto LAB_00106719;
                uVar24 = 0;
                goto LAB_001062d9;
              }
              if (lVar23 == 0) {
                if (local_2e8[0] == 0) goto LAB_00106b90;
                lVar22 = *(long *)(local_2e8[0] + -8);
                if (lVar22 <= (long)uVar24) goto LAB_00104121;
                lVar20 = *(long *)(local_2e8[0] + uVar24 * 8);
                lVar22 = *(long *)(lVar21 + 0x38);
                if (lVar22 == 0) goto LAB_00106098;
                if (uVar24 != 0) {
LAB_0010617d:
                  _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                   "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                  lVar22 = 0;
                }
              }
              else {
                if (uVar24 == 0) {
                  lVar22 = *(long *)(lVar21 + 0x38);
                  lVar20 = lVar23;
                  if (lVar22 != 0) goto LAB_001060b6;
                }
                else {
                  _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                   "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                  lVar20 = *(long *)(lVar21 + 0x38);
                  if (lVar20 != 0) {
                    lVar20 = 0;
                    goto LAB_0010617d;
                  }
                }
LAB_00106098:
                lVar8 = *(long *)(lVar21 + 0x48);
                if (lVar8 == 0) goto LAB_00106b90;
                lVar22 = *(long *)(lVar8 + -8);
                if (lVar22 <= (long)uVar24) goto LAB_00104121;
                lVar22 = *(long *)(lVar8 + uVar24 * 8);
              }
LAB_001060b6:
              uVar24 = uVar24 + 1;
            } while (lVar22 == lVar20);
          }
        }
        bVar10 = false;
        goto LAB_00106505;
      }
LAB_00104f63:
      bVar10 = false;
      goto LAB_00104f66;
    }
    goto LAB_00104d60;
  }
LAB_001050dc:
  local_278 = *param_9;
  local_340 = 0;
  local_258[0] = 0;
  local_270 = *(undefined1 *)(param_9 + 1);
  local_268 = param_9[2];
  if (param_9[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_258,pCVar1);
  }
  local_288[0] = 0;
  local_2a8 = *param_8;
  local_2a0 = *(undefined1 *)(param_8 + 1);
  local_298 = param_8[2];
  if (param_8[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_288,pCVar2);
  }
  local_2b8[0] = 0;
  local_2d8 = *param_7;
  local_2d0 = *(undefined1 *)(param_7 + 1);
  local_2c8 = param_7[2];
  if (param_7[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_2b8,pCVar3);
  }
  local_2e8[0] = 0;
  local_308 = *param_6;
  local_300 = *(undefined1 *)(param_6 + 1);
  local_2f8 = param_6[2];
  if (param_6[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_2e8,pCVar4);
  }
  local_318[0] = 0;
  local_338 = *param_5;
  local_330 = *(undefined1 *)(param_5 + 1);
  local_328 = param_5[2];
  if (param_5[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_318,pCVar5);
  }
  local_68 = *(undefined8 *)param_4;
  local_48 = 0;
  local_60 = (undefined1)param_4[2];
  local_58 = *(long *)(param_4 + 4);
  if (*(long *)(param_4 + 8) == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_348,&local_68);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)(param_4 + 8));
    lVar14 = local_48;
    Vector<RenderingDevice::Uniform>::push_back(local_348);
    if (lVar14 != 0) {
      LOCK();
      plVar6 = (long *)(lVar14 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
  }
  local_48 = 0;
  local_68 = local_278;
  local_60 = local_270;
  local_58 = local_268;
  if (local_258[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_258);
  }
  local_78[0] = 0;
  local_98 = local_2a8;
  local_90 = local_2a0;
  local_88 = local_298;
  if (local_288[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_288);
  }
  local_a8[0] = 0;
  local_c8 = local_2d8;
  local_c0 = local_2d0;
  local_b8 = local_2c8;
  if (local_2b8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_2b8);
  }
  local_d8[0] = 0;
  local_f8 = local_308;
  local_f0 = local_300;
  local_e8 = local_2f8;
  if (local_2e8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_d8,(CowData *)local_2e8);
  }
  local_108[0] = 0;
  local_128 = local_338;
  local_120 = local_330;
  local_118 = local_328;
  if (local_318[0] == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_348,&local_128);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_318);
    lVar14 = local_108[0];
    Vector<RenderingDevice::Uniform>::push_back(local_348);
    if (lVar14 != 0) {
      LOCK();
      plVar6 = (long *)(lVar14 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_108[0] + -0x10),false);
      }
    }
  }
  local_228[0] = 0;
  local_248 = local_68;
  local_240 = local_60;
  local_238 = local_58;
  if (local_48 != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_228,(CowData *)&local_48);
  }
  local_1f8[0] = 0;
  local_218 = local_98;
  local_210 = local_90;
  local_208 = local_88;
  if (local_78[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_1f8,(CowData *)local_78);
  }
  local_1c8[0] = 0;
  local_1e8 = local_c8;
  local_1e0 = local_c0;
  local_1d8 = local_b8;
  if (local_a8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_1c8,(CowData *)local_a8);
  }
  local_108[0] = 0;
  local_128 = local_f8;
  local_120 = local_f0;
  local_118 = local_e8;
  if (local_d8[0] == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_348,&local_128);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_d8);
    lVar14 = local_108[0];
    Vector<RenderingDevice::Uniform>::push_back(local_348);
    if (lVar14 != 0) {
      LOCK();
      plVar6 = (long *)(lVar14 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_108[0] + -0x10),false);
      }
    }
  }
  local_108[0] = 0;
  local_128 = local_248;
  local_120 = local_240;
  local_118 = local_238;
  if (local_228[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_228);
  }
  local_138[0] = 0;
  local_158 = local_218;
  local_150 = local_210;
  local_148 = local_208;
  if (local_1f8[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_138,(CowData *)local_1f8);
  }
  local_168[0] = 0;
  local_188 = local_1e8;
  local_180 = local_1e0;
  local_178 = local_1d8;
  if (local_1c8[0] == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_348,&local_188);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_1c8);
    lVar14 = local_168[0];
    Vector<RenderingDevice::Uniform>::push_back(local_348);
    if (lVar14 != 0) {
      LOCK();
      plVar6 = (long *)(lVar14 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_168[0] + -0x10),false);
      }
    }
  }
  local_198[0] = 0;
  local_1b8 = local_128;
  local_1b0 = local_120;
  local_1a8 = local_118;
  if (local_108[0] != 0) {
    CowData<RID>::_ref((CowData<RID> *)local_198,(CowData *)local_108);
  }
  local_168[0] = 0;
  local_188 = local_158;
  local_180 = local_150;
  local_178 = local_148;
  if (local_138[0] == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_348,&local_188);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_138);
    lVar14 = local_168[0];
    Vector<RenderingDevice::Uniform>::push_back(local_348);
    if (lVar14 != 0) {
      LOCK();
      plVar6 = (long *)(lVar14 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_168[0] + -0x10),false);
      }
    }
  }
  lVar14 = local_198[0];
  local_168[0] = 0;
  local_188 = local_1b8;
  local_180 = local_1b0;
  local_178 = local_1a8;
  if (local_198[0] == 0) {
    Vector<RenderingDevice::Uniform>::push_back(local_348);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_198);
    lVar22 = local_168[0];
    Vector<RenderingDevice::Uniform>::push_back(local_348);
    if (lVar22 != 0) {
      LOCK();
      plVar6 = (long *)(lVar22 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_168[0] + -0x10),false);
      }
      lVar14 = local_198[0];
      if (local_198[0] == 0) goto LAB_00105995;
    }
    LOCK();
    plVar6 = (long *)(lVar14 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_198[0] + -0x10),false);
    }
  }
LAB_00105995:
  if (local_138[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_138[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_138[0] + -0x10),false);
    }
  }
  if (local_108[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_108[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_108[0] + -0x10),false);
    }
  }
  if (local_1c8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_1c8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_1c8[0] + -0x10),false);
    }
  }
  if (local_1f8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_1f8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_1f8[0] + -0x10),false);
    }
  }
  if (local_228[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_228[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_228[0] + -0x10),false);
    }
  }
  if (local_d8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_d8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_d8[0] + -0x10),false);
    }
  }
  if (local_a8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_a8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_a8[0] + -0x10),false);
    }
  }
  if (local_78[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_78[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
  }
  if (local_48 != 0) {
    LOCK();
    plVar6 = (long *)(local_48 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
    }
  }
  if (local_318[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_318[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_318[0] + -0x10),false);
    }
  }
  if (local_2e8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_2e8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_2e8[0] + -0x10),false);
    }
  }
  if (local_2b8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_2b8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_2b8[0] + -0x10),false);
    }
  }
  if (local_288[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_288[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_288[0] + -0x10),false);
    }
  }
  if (local_258[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_258[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_258[0] + -0x10),false);
    }
  }
  uVar13 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                     (this,param_2,param_3,uVar15,uVar15 % 0x3ffd,local_348);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_340);
LAB_0010503b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
LAB_00104100:
  lVar22 = 0;
  goto LAB_00104121;
LAB_001062d9:
  do {
    if (uVar16 <= (uint)uVar24) {
      RenderingDevice::Uniform::Uniform((Uniform *)&local_128,(Uniform *)&local_218);
      RenderingDevice::Uniform::Uniform((Uniform *)&local_158,(Uniform *)&local_1e8);
      lVar23 = local_1a8;
      uVar25 = (ulong)*(uint *)(lVar14 + 0x30);
      if (*(uint *)(lVar14 + 0x30) < 4) {
        lVar14 = 3;
        goto LAB_00105e4e;
      }
      lVar21 = *(long *)(lVar14 + 0x38);
      if ((*(int *)(lVar21 + 0x7c) != local_1b8._4_4_) ||
         (*(int *)(lVar21 + 0x78) != (int)local_1b8)) goto LAB_001064c1;
      uVar16 = 1;
      if (*(long *)(lVar21 + 0x88) == 0) {
        if (*(long *)(lVar21 + 0x98) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = (uint)*(undefined8 *)(*(long *)(lVar21 + 0x98) + -8);
        }
      }
      uVar12 = 1;
      if (local_1a8 == 0) {
        if (local_198[0] == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (uint)*(undefined8 *)(local_198[0] + -8);
        }
      }
      if (uVar12 != uVar16) goto LAB_001064c1;
      uVar24 = 0;
      goto LAB_00106482;
    }
    if (lVar23 == 0) {
      if (local_d8[0] == 0) {
LAB_0010676c:
        lVar22 = 0;
      }
      else {
        lVar22 = *(long *)(local_d8[0] + -8);
        if ((long)uVar24 < lVar22) {
          lVar20 = *(long *)(local_d8[0] + uVar24 * 8);
          lVar22 = *(long *)(lVar21 + 0x60);
          if (lVar22 == 0) goto LAB_001062ad;
          if (uVar24 != 0) goto LAB_00106394;
          goto LAB_001062cc;
        }
      }
      goto LAB_00104121;
    }
    if (uVar24 == 0) {
      lVar22 = *(long *)(lVar21 + 0x60);
      lVar20 = lVar23;
      if (lVar22 == 0) {
LAB_001062ad:
        lVar8 = *(long *)(lVar21 + 0x70);
        if (lVar8 == 0) goto LAB_0010676c;
        lVar22 = *(long *)(lVar8 + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        lVar22 = *(long *)(lVar8 + uVar24 * 8);
      }
    }
    else {
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar20 = *(long *)(lVar21 + 0x60);
      if (lVar20 == 0) goto LAB_001062ad;
      lVar20 = 0;
LAB_00106394:
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar22 = 0;
    }
LAB_001062cc:
    uVar24 = uVar24 + 1;
  } while (lVar20 == lVar22);
LAB_00106719:
  bVar10 = false;
  goto LAB_001064de;
LAB_00106482:
  do {
    if (uVar16 <= (uint)uVar24) {
      RenderingDevice::Uniform::Uniform((Uniform *)&local_188,(Uniform *)&local_128);
      lVar23 = local_148;
      uVar25 = (ulong)*(uint *)(lVar14 + 0x30);
      if (*(uint *)(lVar14 + 0x30) < 5) {
        lVar14 = 4;
        goto LAB_00105e4e;
      }
      lVar21 = *(long *)(lVar14 + 0x38);
      if ((*(int *)(lVar21 + 0xa4) != local_158._4_4_) ||
         (*(int *)(lVar21 + 0xa0) != (int)local_158)) goto LAB_001066f4;
      uVar16 = 1;
      if (*(long *)(lVar21 + 0xb0) == 0) {
        if (*(long *)(lVar21 + 0xc0) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = (uint)*(undefined8 *)(*(long *)(lVar21 + 0xc0) + -8);
        }
      }
      uVar12 = 1;
      if (local_148 == 0) {
        if (local_138[0] == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (uint)*(undefined8 *)(local_138[0] + -8);
        }
      }
      if (uVar12 != uVar16) goto LAB_001066f4;
      uVar24 = 0;
      goto LAB_001067fc;
    }
    if (lVar23 == 0) {
      if (local_198[0] == 0) goto LAB_001050b1;
      lVar22 = *(long *)(local_198[0] + -8);
      if (lVar22 <= (long)uVar24) goto LAB_00104121;
      lVar20 = *(long *)(local_198[0] + uVar24 * 8);
      lVar22 = *(long *)(lVar21 + 0x88);
      if (lVar22 == 0) goto LAB_001065de;
      if (uVar24 != 0) goto LAB_00106638;
    }
    else if (uVar24 == 0) {
      lVar22 = *(long *)(lVar21 + 0x88);
      lVar20 = lVar23;
      if (lVar22 == 0) {
LAB_001065de:
        lVar8 = *(long *)(lVar21 + 0x98);
        if (lVar8 == 0) goto LAB_001050b1;
        lVar22 = *(long *)(lVar8 + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        lVar22 = *(long *)(lVar8 + uVar24 * 8);
      }
    }
    else {
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar20 = *(long *)(lVar21 + 0x88);
      if (lVar20 == 0) goto LAB_001065de;
      lVar20 = 0;
LAB_00106638:
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar22 = 0;
    }
    uVar24 = uVar24 + 1;
  } while (lVar20 == lVar22);
LAB_001064c1:
  bVar10 = false;
  goto LAB_001064c4;
LAB_001067fc:
  do {
    lVar20 = local_178;
    if (uVar16 <= (uint)uVar24) {
      uVar25 = (ulong)*(uint *)(lVar14 + 0x30);
      if (*(uint *)(lVar14 + 0x30) < 6) {
        lVar14 = 5;
        goto LAB_00105e4e;
      }
      lVar23 = *(long *)(lVar14 + 0x38);
      if ((*(int *)(lVar23 + 0xcc) == local_188._4_4_) && (*(int *)(lVar23 + 200) == (int)local_188)
         ) {
        uVar16 = 1;
        if (*(long *)(lVar23 + 0xd8) == 0) {
          if (*(long *)(lVar23 + 0xe8) == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = (uint)*(undefined8 *)(*(long *)(lVar23 + 0xe8) + -8);
          }
        }
        uVar12 = 1;
        if (local_178 == 0) {
          if (local_168[0] == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (uint)*(undefined8 *)(local_168[0] + -8);
          }
        }
        if (uVar12 == uVar16) {
          uVar24 = 0;
          goto LAB_001069b3;
        }
      }
      break;
    }
    if (lVar23 == 0) {
      if (local_138[0] == 0) goto LAB_001050b1;
      lVar22 = *(long *)(local_138[0] + -8);
      if (lVar22 <= (long)uVar24) goto LAB_00104121;
      lVar20 = *(long *)(local_138[0] + uVar24 * 8);
      lVar22 = *(long *)(lVar21 + 0xb0);
      if (lVar22 == 0) goto LAB_00106844;
      if (uVar24 != 0) goto LAB_0010689a;
    }
    else if (uVar24 == 0) {
      lVar22 = *(long *)(lVar21 + 0xb0);
      lVar20 = lVar23;
      if (lVar22 == 0) {
LAB_00106844:
        lVar8 = *(long *)(lVar21 + 0xc0);
        if (lVar8 == 0) goto LAB_001050b1;
        lVar22 = *(long *)(lVar8 + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        lVar22 = *(long *)(lVar8 + uVar24 * 8);
      }
    }
    else {
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar20 = *(long *)(lVar21 + 0xb0);
      if (lVar20 == 0) goto LAB_00106844;
      lVar20 = 0;
LAB_0010689a:
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar22 = 0;
    }
    uVar24 = uVar24 + 1;
  } while (lVar20 == lVar22);
  goto LAB_001066f4;
LAB_001069b3:
  do {
    if (uVar16 <= (uint)uVar24) {
      bVar10 = true;
      goto LAB_001066f7;
    }
    if (lVar20 == 0) {
      if (local_168[0] == 0) goto LAB_001050b1;
      lVar22 = *(long *)(local_168[0] + -8);
      if (lVar22 <= (long)uVar24) goto LAB_00104121;
      lVar21 = *(long *)(local_168[0] + uVar24 * 8);
      lVar22 = *(long *)(lVar23 + 0xd8);
      if (lVar22 == 0) goto LAB_001069eb;
      if (uVar24 != 0) goto LAB_00106a41;
    }
    else if (uVar24 == 0) {
      lVar22 = *(long *)(lVar23 + 0xd8);
      lVar21 = lVar20;
      if (lVar22 == 0) {
LAB_001069eb:
        lVar8 = *(long *)(lVar23 + 0xe8);
        if (lVar8 == 0) goto LAB_001050b1;
        lVar22 = *(long *)(lVar8 + -8);
        if (lVar22 <= (long)uVar24) goto LAB_00104121;
        lVar22 = *(long *)(lVar8 + uVar24 * 8);
      }
    }
    else {
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar21 = *(long *)(lVar23 + 0xd8);
      if (lVar21 == 0) goto LAB_001069eb;
      lVar21 = 0;
LAB_00106a41:
      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
      lVar22 = 0;
    }
    uVar24 = uVar24 + 1;
  } while (lVar21 == lVar22);
LAB_001066f4:
  bVar10 = false;
LAB_001066f7:
  CowData<RID>::_unref((CowData<RID> *)local_168);
LAB_001064c4:
  CowData<RID>::_unref((CowData<RID> *)local_138);
  CowData<RID>::_unref((CowData<RID> *)local_108);
LAB_001064de:
  CowData<RID>::_unref((CowData<RID> *)local_198);
  CowData<RID>::_unref((CowData<RID> *)local_1c8);
  CowData<RID>::_unref((CowData<RID> *)local_1f8);
LAB_00106505:
  if (local_d8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_d8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_d8[0] + -0x10),false);
    }
  }
  if (local_a8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_a8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_a8[0] + -0x10),false);
    }
  }
  if (local_78[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_78[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
  }
  if (local_48 != 0) {
    LOCK();
    plVar6 = (long *)(local_48 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
    }
  }
LAB_00104f66:
  if (local_2e8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_2e8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_2e8[0] + -0x10),false);
    }
  }
  if (local_2b8[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_2b8[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_2b8[0] + -0x10),false);
    }
  }
  if (local_288[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_288[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_288[0] + -0x10),false);
    }
  }
  if (local_258[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_258[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_258[0] + -0x10),false);
    }
  }
  if (local_228[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_228[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_228[0] + -0x10),false);
    }
  }
  if (bVar10) {
    uVar13 = *(undefined8 *)(lVar14 + 0x28);
    goto LAB_0010503b;
  }
LAB_00104d60:
  lVar14 = *(long *)(lVar14 + 8);
  if (lVar14 == 0) goto LAB_001050dc;
  goto LAB_00104d6d;
LAB_00106b90:
  lVar22 = 0;
  goto LAB_00104121;
LAB_001050b1:
  lVar22 = 0;
LAB_00104121:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar24,lVar22,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderingDevice::Uniform::Uniform(RenderingDevice::Uniform const&) */

void __thiscall RenderingDevice::Uniform::Uniform(Uniform *this,Uniform *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TaaResolveShaderRD::~TaaResolveShaderRD() */

void __thiscall TaaResolveShaderRD::~TaaResolveShaderRD(TaaResolveShaderRD *this)

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



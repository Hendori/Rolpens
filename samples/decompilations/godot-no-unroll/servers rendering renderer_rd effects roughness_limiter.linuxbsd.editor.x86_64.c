
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



/* RendererRD::RoughnessLimiter::~RoughnessLimiter() */

void __thiscall RendererRD::RoughnessLimiter::~RoughnessLimiter(RoughnessLimiter *this)

{
  ShaderRD::version_free((ShaderRD *)(this + 0x10),*(undefined8 *)(this + 0x188));
  *(undefined ***)(this + 0x10) = &PTR__RoughnessLimiterShaderRD_00103028;
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



/* RendererRD::RoughnessLimiter::RoughnessLimiter() */

void __thiscall RendererRD::RoughnessLimiter::RoughnessLimiter(RoughnessLimiter *this)

{
  ShaderRD *this_00;
  long *plVar1;
  CowData<char32_t> *this_01;
  char cVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  long local_80;
  String local_78 [8];
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  long local_50;
  long local_40;
  
  this_00 = (ShaderRD *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x10) = &PTR__RoughnessLimiterShaderRD_00103028;
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(set = 0, binding = 0) uniform sampler2D source_normal;\nlayout(r8, set = 1, binding = 0) uniform restrict writeonly image2D dest_roughness;\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 screen_size;\n\tfloat curve;\n\tuint pad;\n}\nparams;\n\n#define HALF_PI 1.5707963267948966\n\nvoid main() {\n\t\n\tivec2 pos = ivec2(gl_GlobalInvocationID.xy);\n\tif (any(greaterThan(pos, params.screen_size))) { \n\t\treturn;\n\t}\n\n\tvec3 normal_accum = vec3(0.0);\n\tfloat accum = 0.0;\n\tfor (int i = 0; i <= 1; i++) {\n\t\tfor (int j = 0; j <= 1; j++) {\n\t\t\tnormal_accum += normalize(texelFetch(source_normal, pos + ivec2(i, j), 0).xyz * 2.0 - 1.0);\n\t\t\taccum += 1.0;\n\t\t}\n\t}\n\n\tnormal_accum /= accum;\n\n\tfloat r = length(normal_accum);\n\n\tfloat limit;\n\n\tif (r < 1.0) {\n\t\tfloat threshold = 0.4;\n\n\t\t/*\n\t\t\n\n\t\tfloat r2 = r * r;\n\t\tfloat kappa = (3.0f * r - r * r2) / (1.0f - r2);\n\t\tfloat variance = 0.25f / kappa;\n\t\tlimit = sqrt(min(2.0f * variance, threshold * threshold));\n\t\t*/\n\t\t/*\n\t\t\n\n\t\tfloat width = acos(max(0.0,r)); \n\t\tfloat roughness = pow(width,1.7)*0.854492; \n\t\tlimit = min(sqrt(roughness), threshold); \n\t\t*/\n\n\t\tlimit = min(sqrt(pow(acos(max(0.0, r)) / HALF_PI, params.curve)), threshold); \n\n\t\t\n\t} else {\n\t\tlimit = 0.0;\n\t}\n\n\timageStore(dest_roughness, pos, vec4(limit));\n}\n"
                 );
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  local_70 = 0;
  local_68 = 0;
  local_58 = &_LC14;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_68);
  if (local_70 == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = *(long *)(local_70 + -8) + 1;
  }
  iVar7 = CowData<String>::resize<false>((CowData<String> *)&local_70,lVar12);
  if (iVar7 == 0) {
    if (local_70 == 0) {
      lVar9 = -1;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(local_70 + -8);
      lVar9 = lVar12 + -1;
      if (-1 < lVar9) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_70);
        this_01 = (CowData<char32_t> *)(local_70 + lVar9 * 8);
        if (*(long *)this_01 != local_68) {
          CowData<char32_t>::_ref(this_01,(CowData *)&local_68);
        }
        goto LAB_00100497;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar12,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00100497:
  lVar12 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  local_60 = 0;
  local_80 = 0;
  local_58 = &_LC14;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  ShaderRD::initialize((Vector *)this_00,local_78,(Vector *)&local_80);
  lVar12 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_60);
  uVar8 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x188) = uVar8;
  uVar8 = RenderingDevice::get_singleton();
  uVar10 = *(ulong *)(this + 0x188);
  local_50 = 0;
  if (*(long *)(this + 0x28) == 0) {
    lVar12 = 0;
LAB_00100763:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar12,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar12 = *(long *)(*(long *)(this + 0x28) + -8);
    if (lVar12 < 1) goto LAB_00100763;
    pcVar3 = *(char **)(this + 0x38);
    if (pcVar3 == (char *)0x0) {
LAB_00100808:
      lVar12 = 0;
LAB_0010080b:
      uVar10 = 0;
LAB_00100822:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar10,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar12 = *(long *)(pcVar3 + -8);
    if (lVar12 < 1) goto LAB_0010080b;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar13 = 0;
      goto LAB_0010063f;
    }
    if ((uVar10 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar10)) {
LAB_001007d8:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar13 = 0;
      goto LAB_0010063f;
    }
    lVar9 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
            *(long *)(*(long *)(this + 0xd0) +
                     ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
    if (*(int *)(lVar9 + 0x98) != (int)(uVar10 >> 0x20)) {
      if (*(int *)(lVar9 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001007d8;
    }
    iVar7 = (int)lVar9;
    if (*(char *)(lVar9 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_00);
      lVar12 = *(long *)(this + 0x88);
      if (lVar12 != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(lVar12 + -8) <= lVar11) break;
          if (*(char *)(lVar12 + lVar11) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_00,iVar7);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_00,iVar7);
          }
          lVar12 = *(long *)(this + 0x88);
          lVar11 = lVar11 + 1;
        } while (lVar12 != 0);
      }
    }
    puVar4 = *(uint **)(this + 0x48);
    if (puVar4 == (uint *)0x0) goto LAB_00100808;
    lVar12 = *(long *)(puVar4 + -2);
    if (lVar12 < 1) goto LAB_0010080b;
    uVar10 = (ulong)*puVar4;
    lVar11 = *(long *)(lVar9 + 0x68);
    if (lVar11 == 0) {
      lVar12 = 0;
      goto LAB_00100822;
    }
    lVar12 = *(long *)(lVar11 + -8);
    if (lVar12 <= (long)uVar10) goto LAB_00100822;
    if (*(long *)(lVar11 + uVar10 * 8) == 0) {
      cVar2 = *(char *)(lVar9 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end((Version *)this_00,iVar7);
      cVar2 = *(char *)(lVar9 + 0x90);
    }
    if (cVar2 != '\0') {
      puVar5 = *(undefined8 **)(lVar9 + 0x88);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00100808;
      lVar12 = puVar5[-1];
      if (0 < lVar12) {
        uVar13 = *puVar5;
        goto LAB_0010063f;
      }
      goto LAB_0010080b;
    }
  }
  uVar13 = 0;
LAB_0010063f:
  uVar8 = RenderingDevice::compute_pipeline_create(uVar8,uVar13,&local_58);
  lVar12 = local_50;
  *(undefined8 *)(this + 400) = uVar8;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
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



/* RendererRD::RoughnessLimiter::roughness_limit(RID, RID, Vector2i const&, float) */

void __thiscall
RendererRD::RoughnessLimiter::roughness_limit
          (undefined4 param_1,RoughnessLimiter *this,undefined8 param_3,undefined8 param_4,
          uint *param_5)

{
  Version *pVVar1;
  long *plVar2;
  uint *puVar3;
  code *pcVar4;
  UniformSetCacheRD *pUVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  undefined8 local_100;
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
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x37;
      pcVar12 = "Parameter \"uniform_set_cache\" is null.";
LAB_00101331:
      _err_print_error("roughness_limit",
                       "servers/rendering/renderer_rd/effects/roughness_limiter.cpp",uVar9,pcVar12,0
                       ,0);
      return;
    }
    goto LAB_0010143d;
  }
  lVar7 = RendererRD::MaterialStorage::get_singleton();
  if (lVar7 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x39;
      pcVar12 = "Parameter \"material_storage\" is null.";
      goto LAB_00101331;
    }
    goto LAB_0010143d;
  }
  lVar7 = *(long *)(lVar7 + 0x50);
  uVar11 = *(ulong *)(this + 0x188);
  *(uint *)this = *param_5;
  *(uint *)(this + 4) = param_5[1];
  *(undefined4 *)(this + 8) = param_1;
  if (*(long *)(this + 0x28) == 0) {
    lVar16 = 0;
LAB_0010138b:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar16,
               "p_variant","variant_defines.size()","",false,false);
LAB_00100c3c:
    local_100 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(this + 0x28) + -8);
    if (lVar16 < 1) goto LAB_0010138b;
    pcVar12 = *(char **)(this + 0x38);
    if (pcVar12 == (char *)0x0) {
LAB_001011d0:
      lVar16 = 0;
LAB_001011d3:
      uVar11 = 0;
LAB_001011f0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar16,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar16 = *(long *)(pcVar12 + -8);
    if (lVar16 < 1) goto LAB_001011d3;
    if (*pcVar12 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00100c3c;
    }
    if ((uVar11 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar11)) {
LAB_001011a0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00100c3c;
    }
    lVar13 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
             *(long *)(*(long *)(this + 0xd0) +
                      ((uVar11 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
    if (*(int *)(lVar13 + 0x98) != (int)(uVar11 >> 0x20)) {
      if (*(int *)(lVar13 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001011a0;
    }
    pVVar1 = (Version *)(this + 0x10);
    iVar6 = (int)lVar13;
    if (*(char *)(lVar13 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar16 = *(long *)(this + 0x88);
      if (lVar16 != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(lVar16 + -8) <= lVar15) break;
          if (*(char *)(lVar16 + lVar15) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar6);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar6);
          }
          lVar16 = *(long *)(this + 0x88);
          lVar15 = lVar15 + 1;
        } while (lVar16 != 0);
      }
    }
    puVar3 = *(uint **)(this + 0x48);
    if (puVar3 == (uint *)0x0) goto LAB_001011d0;
    lVar16 = *(long *)(puVar3 + -2);
    if (lVar16 < 1) goto LAB_001011d3;
    uVar11 = (ulong)*puVar3;
    lVar15 = *(long *)(lVar13 + 0x68);
    if (lVar15 == 0) {
      lVar16 = 0;
      goto LAB_001011f0;
    }
    lVar16 = *(long *)(lVar15 + -8);
    if (lVar16 <= (long)uVar11) goto LAB_001011f0;
    if (*(long *)(lVar15 + uVar11 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar1,iVar6);
    }
    if (*(char *)(lVar13 + 0x90) == '\0') goto LAB_00100c3c;
    puVar14 = *(undefined8 **)(lVar13 + 0x88);
    if (puVar14 == (undefined8 *)0x0) goto LAB_001011d0;
    lVar16 = puVar14[-1];
    if (lVar16 < 1) goto LAB_001011d3;
    local_100 = *puVar14;
  }
  lVar16 = 0;
  local_80 = (undefined8 *)0x0;
  local_58[0] = lVar7;
  local_58[1] = param_3;
  iVar6 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
  puVar14 = local_80;
  if (iVar6 == 0) {
    do {
      if (puVar14 == (undefined8 *)0x0) {
        lVar7 = 0;
LAB_0010104c:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar7,"p_index","size()","",false,
                   false);
      }
      else {
        lVar7 = *(long *)((long)puVar14 + -8);
        if (lVar7 <= lVar16) goto LAB_0010104c;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
        *(long *)((long)local_80 + lVar16 * 8) = local_58[lVar16];
        puVar14 = local_80;
      }
      if (lVar16 != 0) break;
      lVar16 = 1;
    } while( true );
  }
  plVar2 = (long *)((long)puVar14 + -0x10);
  local_c8[0] = 0;
  if (puVar14 != (undefined8 *)0x0) {
    do {
      lVar7 = *plVar2;
      if (lVar7 == 0) goto LAB_00100ce1;
      LOCK();
      lVar16 = *plVar2;
      bVar17 = lVar7 == lVar16;
      if (bVar17) {
        *plVar2 = lVar7 + 1;
        lVar16 = lVar7;
      }
      UNLOCK();
    } while (!bVar17);
    if (lVar16 != -1) {
      local_c8[0] = (long)local_80;
    }
LAB_00100ce1:
    if (local_80 != (undefined8 *)0x0) {
      LOCK();
      plVar2 = (long *)((long)local_80 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)((long)local_80 + -0x10),false);
      }
    }
  }
  local_80 = (undefined8 *)0x0;
  iVar6 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,1);
  puVar14 = local_80;
  if (iVar6 == 0) {
    if (local_80 == (undefined8 *)0x0) {
      lVar7 = 0;
LAB_001010bc:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar7,"p_index","size()","",false,false);
      goto LAB_001010f8;
    }
    lVar7 = local_80[-1];
    if (lVar7 < 1) goto LAB_001010bc;
    CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
    *local_80 = param_4;
    puVar14 = local_80;
LAB_00100d78:
    local_98[0] = (undefined8 *)0x0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 3;
    plVar2 = puVar14 + -2;
    do {
      lVar7 = *plVar2;
      if (lVar7 == 0) goto LAB_00100da6;
      LOCK();
      lVar16 = *plVar2;
      bVar17 = lVar7 == lVar16;
      if (bVar17) {
        *plVar2 = lVar7 + 1;
        lVar16 = lVar7;
      }
      UNLOCK();
    } while (!bVar17);
    if (lVar16 != -1) {
      local_98[0] = local_80;
    }
LAB_00100da6:
    if (local_80 != (undefined8 *)0x0) {
      LOCK();
      plVar2 = local_80 + -2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static(local_80 + -2,false);
      }
    }
  }
  else {
LAB_001010f8:
    local_b0 = 0;
    local_a8 = 0;
    local_98[0] = (undefined8 *)0x0;
    local_b8 = 3;
    if (puVar14 != (undefined8 *)0x0) goto LAB_00100d78;
  }
  RenderingDevice::get_singleton();
  pvVar8 = (void *)RenderingDevice::compute_list_begin();
  uVar9 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline(uVar9,pvVar8,*(undefined8 *)(this + 400));
  uVar9 = RenderingDevice::get_singleton();
  local_68[0] = 0;
  local_88 = 1;
  local_80 = (undefined8 *)((ulong)local_80 & 0xffffffffffffff00);
  local_78 = 0;
  if (local_c8[0] == 0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_100,0,&local_88);
    RenderingDevice::compute_list_bind_uniform_set(uVar9,pvVar8,uVar10,0);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
    lVar7 = local_68[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_100,0,&local_88);
    RenderingDevice::compute_list_bind_uniform_set(uVar9,pvVar8,uVar10,0);
    if (lVar7 != 0) {
      LOCK();
      plVar2 = (long *)(lVar7 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
    }
  }
  uVar9 = RenderingDevice::get_singleton();
  puVar14 = local_98[0];
  local_68[0] = 0;
  local_88 = local_b8;
  local_80 = (undefined8 *)CONCAT71(local_80._1_7_,local_b0);
  local_78 = local_a8;
  if (local_98[0] == (undefined8 *)0x0) {
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_100,1,&local_88);
    RenderingDevice::compute_list_bind_uniform_set(uVar9,pvVar8,uVar10,1);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
    lVar7 = local_68[0];
    uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,local_100,1,&local_88);
    RenderingDevice::compute_list_bind_uniform_set(uVar9,pvVar8,uVar10,1);
    if (lVar7 != 0) {
      LOCK();
      plVar2 = (long *)(lVar7 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      puVar14 = local_98[0];
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
        puVar14 = local_98[0];
      }
    }
  }
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_set_push_constant(lVar7,pvVar8,(uint)this);
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_dispatch_threads(lVar7,(uint)pvVar8,*param_5,param_5[1]);
  RenderingDevice::get_singleton();
  RenderingDevice::compute_list_end();
  if (puVar14 != (undefined8 *)0x0) {
    LOCK();
    plVar2 = puVar14 + -2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static(local_98[0] + -2,false);
    }
  }
  if (local_c8[0] != 0) {
    LOCK();
    plVar2 = (long *)(local_c8[0] + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8[0] + -0x10),false);
        return;
      }
      goto LAB_0010143d;
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010143d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RoughnessLimiterShaderRD::~RoughnessLimiterShaderRD() */

void __thiscall RoughnessLimiterShaderRD::~RoughnessLimiterShaderRD(RoughnessLimiterShaderRD *this)

{
  *(undefined ***)this = &PTR__RoughnessLimiterShaderRD_00103028;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* RoughnessLimiterShaderRD::~RoughnessLimiterShaderRD() */

void __thiscall RoughnessLimiterShaderRD::~RoughnessLimiterShaderRD(RoughnessLimiterShaderRD *this)

{
  *(undefined ***)this = &PTR__RoughnessLimiterShaderRD_00103028;
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
LAB_001018a3:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_001018a3;
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
LAB_00101ef0:
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
  if (lVar10 == 0) goto LAB_00101ef0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00101dc9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00101dc9;
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
    goto LAB_00101f46;
  }
  if (lVar10 == lVar7) {
LAB_00101e6f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00101f46:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00101e5a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00101e6f;
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
LAB_00101e5a:
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
LAB_00102200:
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
  if (lVar7 == 0) goto LAB_00102200;
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
LAB_0010216c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00102101;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010216c;
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
LAB_00102101:
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
LAB_001027f0:
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
  if (lVar11 == 0) goto LAB_001027f0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00102681:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00102681;
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
    goto LAB_00102846;
  }
  if (lVar11 == lVar9) {
LAB_00102763:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00102846:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00102740;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00102763;
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
LAB_00102740:
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
LAB_00102cc6:
    uVar14 = 0;
    do {
      uVar6 = (uint)uVar13;
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar9 = 0;
LAB_00102dc1:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar9 = *(long *)(uVar11 - 8);
        if (lVar9 <= (long)uVar14) goto LAB_00102dc1;
        uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
LAB_00102ce9:
        iVar7 = (int)(uVar11 >> 0x20);
        uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar6 = uVar6 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar14 == 0) goto LAB_00102ce9;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar8 = 0;
      }
      uVar14 = uVar14 + 1;
      uVar8 = uVar8 ^ (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
      uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
      if (uVar14 == uVar15) goto LAB_00102d50;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar14 = *(ulong *)(param_4[4] - 8), uVar15 = uVar14 & 0xffffffff, (int)uVar14 != 0))
  goto LAB_00102cc6;
  goto LAB_001029c0;
LAB_00102fa9:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_00102a20;
LAB_00102d50:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_001029c0:
  uVar10 = auVar16._0_8_;
  uVar6 = ((uint)uVar13 ^ (uint)(uVar13 >> 0x10)) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  lVar12 = *(long *)(this + (ulong)(uVar6 % 0x3ffd) * 8 + 0x1e0);
  if (lVar12 != 0) {
LAB_00102a2d:
    if ((((*(uint *)(lVar12 + 0x10) == uVar6) && (*(int *)(lVar12 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar12 + 0x18))) && (*(int *)(lVar12 + 0x30) == 1)) {
      piVar3 = *(int **)(lVar12 + 0x38);
      if ((auVar16._4_4_ == piVar3[1]) && (*piVar3 == auVar16._0_4_)) {
        uVar11 = param_4[2];
        if (*(long *)(piVar3 + 4) == 0) {
          if (*(long *)(piVar3 + 8) == 0) {
            if (uVar11 != 0) goto LAB_00102a20;
            if (param_4[4] != 0) {
              uVar8 = *(uint *)(param_4[4] - 8);
joined_r0x00102f73:
              if (uVar8 != 0) goto LAB_00102a20;
            }
LAB_00102eb4:
            uVar10 = *(undefined8 *)(lVar12 + 0x28);
            goto LAB_00102c97;
          }
          uVar8 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
          if (uVar11 == 0) {
            if (param_4[4] == 0) goto joined_r0x00102f73;
            if (*(uint *)(param_4[4] - 8) == uVar8) {
              if (uVar8 != 0) goto LAB_00102a94;
              goto LAB_00102eb4;
            }
          }
          else if (uVar8 == 1) goto LAB_00102a94;
        }
        else {
          uVar8 = 1;
          if (uVar11 != 0) {
LAB_00102a94:
            uVar13 = 0;
            do {
              uVar14 = uVar13;
              if (uVar11 == 0) {
                uVar11 = param_4[4];
                if (uVar11 == 0) {
                  lVar9 = 0;
                  goto LAB_00102dc1;
                }
                lVar9 = *(long *)(uVar11 - 8);
                if (lVar9 <= (long)uVar13) goto LAB_00102dc1;
                uVar11 = *(ulong *)(uVar11 + uVar13 * 8);
                uVar15 = *(ulong *)(piVar3 + 4);
                if (uVar15 == 0) goto LAB_00102ad5;
                if (uVar13 != 0) goto LAB_00102b55;
              }
              else if (uVar13 == 0) {
                uVar15 = *(ulong *)(piVar3 + 4);
                uVar14 = 0;
                if (uVar15 == 0) {
LAB_00102ad5:
                  lVar4 = *(long *)(piVar3 + 8);
                  if (lVar4 == 0) {
                    lVar9 = 0;
                    goto LAB_00102dc1;
                  }
                  lVar9 = *(long *)(lVar4 + -8);
                  if (lVar9 <= (long)uVar14) goto LAB_00102dc1;
                  uVar15 = *(ulong *)(lVar4 + uVar13 * 8);
                }
              }
              else {
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                if (*(long *)(piVar3 + 4) == 0) {
                  uVar11 = 0;
                  goto LAB_00102ad5;
                }
                uVar11 = 0;
LAB_00102b55:
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                uVar15 = 0;
              }
              if (uVar15 != uVar11) goto LAB_00102fa9;
              uVar13 = uVar13 + 1;
              if (uVar8 <= (uint)uVar13) goto LAB_00102eb4;
              uVar11 = param_4[2];
            } while( true );
          }
          if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
            uVar8 = 1;
            goto LAB_00102a94;
          }
        }
      }
    }
LAB_00102a20:
    uVar10 = auVar16._0_8_;
    lVar12 = *(long *)(lVar12 + 8);
    if (lVar12 == 0) goto LAB_00102b75;
    goto LAB_00102a2d;
  }
LAB_00102b75:
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
        goto LAB_00102c62;
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
LAB_00102c62:
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
LAB_00102c97:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* RoughnessLimiterShaderRD::~RoughnessLimiterShaderRD() */

void __thiscall RoughnessLimiterShaderRD::~RoughnessLimiterShaderRD(RoughnessLimiterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



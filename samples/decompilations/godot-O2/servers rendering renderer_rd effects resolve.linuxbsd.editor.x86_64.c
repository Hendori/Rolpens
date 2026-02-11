
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



/* RendererRD::Resolve::~Resolve() */

void __thiscall RendererRD::Resolve::~Resolve(Resolve *this)

{
  ShaderRD::version_free((ShaderRD *)(this + 0x10),*(undefined8 *)(this + 0x188));
  *(undefined ***)(this + 0x10) = &PTR__ResolveShaderRD_001051c0;
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



/* RendererRD::Resolve::Resolve() */

void __thiscall RendererRD::Resolve::Resolve(Resolve *this)

{
  ShaderRD *this_00;
  long *plVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_80;
  Vector<String> local_78 [8];
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  long local_40;
  
  this_00 = (ShaderRD *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x10) = &PTR__ResolveShaderRD_001051c0;
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#ifdef MODE_RESOLVE_DEPTH\nlayout(set = 0, binding = 0) uniform sampler2DMS source_depth;\nlayout(r32f, set = 1, binding = 0) uniform restrict writeonly image2D dest_depth;\n#endif\n\n#ifdef MODE_RESOLVE_GI\nlayout(set = 0, binding = 0) uniform sampler2DMS source_depth;\nlayout(set = 0, binding = 1) uniform sampler2DMS source_normal_roughness;\n\nlayout(r32f, set = 1, binding = 0) uniform restrict writeonly image2D dest_depth;\nlayout(rgba8, set = 1, binding = 1) uniform restrict writeonly image2D dest_normal_roughness;\n\n#ifdef VOXEL_GI_RESOLVE\nlayout(set = 2, binding = 0) uniform usampler2DMS source_voxel_gi;\nlayout(rg8ui, set = 3, binding = 0) uniform restrict writeonly uimage2D dest_voxel_gi;\n#endif\n\n#endif\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 screen_size;\n\tint sample_count;\n\tuint pad;\n}\nparams;\n\nvoid main() {\n\t\n\tivec2 pos = ivec2(gl_GlobalInvocationID.xy);\n\tif (any(greaterThanEqual(pos, params.screen_size))) { \n\t\treturn;\n\t}\n\n#ifdef MODE_RESOLVE_DEPTH\n\n\tfloat depth_avg = 0.0;\n\tfor (int i = 0; i < params.sample_count; i++) {\n\t\tdepth_avg += texelFetch(source_depth, pos, i).r;\n\t}\n\tdepth_avg /= float(params.sample_count);\n\timageStore(dest_depth, pos, vec4(depth_avg));\n\n#endif\n\n#ifdef MODE_RESOLVE_GI\n\n\tfloat best_depth = 1e20;\n\tvec4 best_normal_roughness = vec4(0.0);\n#ifdef VOXEL_GI_RESOLVE\n\tuvec2 best_voxel_gi;\n#endif\n\n#if 0\n\n\tfor(int i=0;i<params.sample_count;i++) {\n\t\tfloat depth = texelFetch(source_depth,pos,i).r;\n\t\tif (depth < best_depth) { \n\t\t\tbest_depth = depth;\n\t\t\tbest_normal_roughness = texelFetch(source_normal_roughness,pos,i);\n\n#ifdef VOXEL_GI_RESOLVE\n\t\t\tbest_voxel_gi = texelFetch(source_voxel_gi,pos,i).rg;\n#endif\n\t\t}\n\t}\n\n#else\n\n#if 1\n\n\tvec4 group1;\n\tvec4 group2;\n\tvec4 group3;\n\tvec4 group4;\n\tint best_index = 0;\n\n\t\n\tgroup1.x = texelFetch(source_depth, pos, 0).r;\n\tgroup1.y = texelFetch(source_depth, pos, 1).r;\n\n\t\n\tif (params.sample_count >= 4) {\n\t\tgroup1.z = texelFetch(source_depth, pos, 2).r;\n\t\tgroup1..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  local_58 = "\n#define MODE_RESOLVE_GI\n";
  local_70 = 0;
  local_68 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_68);
  Vector<String>::push_back(local_78);
  lVar7 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  local_68 = 0;
  local_58 = "\n#define MODE_RESOLVE_GI\n#define VOXEL_GI_RESOLVE\n";
  local_50 = 0x32;
  String::parse_latin1((StrRange *)&local_68);
  Vector<String>::push_back(local_78);
  lVar7 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  local_68 = 0;
  local_58 = "\n#define MODE_RESOLVE_DEPTH\n";
  local_50 = 0x1c;
  String::parse_latin1((StrRange *)&local_68);
  Vector<String>::push_back(local_78);
  lVar7 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  local_60 = 0;
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  ShaderRD::initialize((Vector *)this_00,local_78,(Vector *)&local_80);
  lVar7 = local_80;
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
  uVar12 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_60);
  uVar5 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x188) = uVar5;
  do {
    uVar5 = RenderingDevice::get_singleton();
    uVar3 = *(ulong *)(this + 0x188);
    local_50 = 0;
    if (*(long *)(this + 0x28) == 0) {
      lVar7 = 0;
LAB_00100963:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar12,
                 lVar7,"p_variant","variant_defines.size()","",false,false);
      uVar10 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 0x28) + -8);
      if (lVar7 <= (long)uVar12) goto LAB_00100963;
      lVar7 = *(long *)(this + 0x38);
      uVar6 = uVar12;
      if (lVar7 == 0) {
LAB_001008f0:
        lVar11 = 0;
        uVar6 = uVar12;
LAB_00100911:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar11,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar11 = *(long *)(lVar7 + -8);
      if (lVar11 <= (long)uVar12) goto LAB_00100911;
      if (*(char *)(lVar7 + uVar12) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar10 = 0;
        goto LAB_0010078e;
      }
      if ((uVar3 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar3)) {
LAB_001009f0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar10 = 0;
      }
      else {
        lVar7 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
                *(long *)(*(long *)(this + 0xd0) +
                         ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
        if (*(int *)(lVar7 + 0x98) != (int)(uVar3 >> 0x20)) {
          if (*(int *)(lVar7 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001009f0;
        }
        iVar9 = (int)lVar7;
        if (*(char *)(lVar7 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_00);
          lVar11 = *(long *)(this + 0x88);
          if (lVar11 != 0) {
            lVar8 = 0;
            do {
              if (*(long *)(lVar11 + -8) <= lVar8) break;
              if (*(char *)(lVar11 + lVar8) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_00,iVar9);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_00,iVar9);
              }
              lVar11 = *(long *)(this + 0x88);
              lVar8 = lVar8 + 1;
            } while (lVar11 != 0);
          }
        }
        lVar8 = *(long *)(this + 0x48);
        if (lVar8 == 0) goto LAB_001008f0;
        lVar11 = *(long *)(lVar8 + -8);
        if (lVar11 <= (long)uVar12) goto LAB_00100911;
        uVar6 = (ulong)*(uint *)(lVar8 + uVar12 * 4);
        lVar8 = *(long *)(lVar7 + 0x68);
        if (lVar8 == 0) {
          lVar11 = 0;
          goto LAB_00100911;
        }
        lVar11 = *(long *)(lVar8 + -8);
        if (lVar11 <= (long)uVar6) goto LAB_00100911;
        if (*(long *)(lVar8 + uVar6 * 8) == 0) {
          cVar2 = *(char *)(lVar7 + 0x90);
        }
        else {
          ShaderRD::_compile_version_end((Version *)this_00,iVar9);
          cVar2 = *(char *)(lVar7 + 0x90);
        }
        if (cVar2 == '\0') {
          uVar10 = 0;
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x88);
          if (lVar7 == 0) goto LAB_001008f0;
          lVar11 = *(long *)(lVar7 + -8);
          uVar6 = uVar12;
          if (lVar11 <= (long)uVar12) goto LAB_00100911;
          uVar10 = *(undefined8 *)(lVar7 + uVar12 * 8);
        }
      }
    }
LAB_0010078e:
    uVar5 = RenderingDevice::compute_pipeline_create(uVar5,uVar10,&local_58);
    lVar7 = local_50;
    *(undefined8 *)(this + ((long)(int)uVar12 + 0x32) * 8) = uVar5;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 3) {
      CowData<String>::_unref((CowData<String> *)&local_70);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
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



/* RendererRD::Resolve::resolve_depth(RID, RID, Vector2i, int) */

void __thiscall
RendererRD::Resolve::resolve_depth
          (Resolve *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          )

{
  Version *pVVar1;
  long *plVar2;
  code *pcVar3;
  UniformSetCacheRD *pUVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  uint uVar17;
  undefined8 local_118;
  ulong local_d8 [2];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  long local_a8 [2];
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  long local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  long local_58 [5];
  
  pUVar4 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 100;
      pcVar13 = "Parameter \"uniform_set_cache\" is null.";
LAB_001014c9:
      _err_print_error("resolve_depth","servers/rendering/renderer_rd/effects/resolve.cpp",uVar11,
                       pcVar13,0,0);
      return;
    }
    goto LAB_001015c3;
  }
  lVar7 = RendererRD::MaterialStorage::get_singleton();
  if (lVar7 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x66;
      pcVar13 = "Parameter \"material_storage\" is null.";
      goto LAB_001014c9;
    }
    goto LAB_001015c3;
  }
  local_58[0] = *(long *)(lVar7 + 0x50);
  lVar7 = 0;
  local_90 = 0;
  local_68 = param_4;
  local_60 = param_5;
  local_58[1] = param_2;
  iVar6 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,2);
  uVar12 = local_90;
  if (iVar6 == 0) {
    do {
      if (uVar12 == 0) {
        lVar14 = 0;
LAB_0010100b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar14,"p_index","size()","",false,
                   false);
      }
      else {
        lVar14 = *(long *)(uVar12 - 8);
        if (lVar14 <= lVar7) goto LAB_0010100b;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
        *(long *)(local_90 + lVar7 * 8) = local_58[lVar7];
        uVar12 = local_90;
      }
      if (lVar7 != 0) break;
      lVar7 = 1;
    } while( true );
  }
  plVar2 = (long *)(uVar12 - 0x10);
  local_d8[0] = 0;
  if (uVar12 != 0) {
    do {
      lVar7 = *plVar2;
      if (lVar7 == 0) goto LAB_00100e16;
      LOCK();
      lVar14 = *plVar2;
      bVar16 = lVar7 == lVar14;
      if (bVar16) {
        *plVar2 = lVar7 + 1;
        lVar14 = lVar7;
      }
      UNLOCK();
    } while (!bVar16);
    if (lVar14 != -1) {
      local_d8[0] = local_90;
    }
LAB_00100e16:
    if (local_90 != 0) {
      LOCK();
      plVar2 = (long *)(local_90 - 0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_90 - 0x10),false);
      }
    }
  }
  uVar11 = _LC11;
  local_c0 = 0;
  uVar12 = *(ulong *)(this + 0x188);
  local_a8[0] = 0;
  local_c8 = _LC11;
  local_b8 = param_3;
  if (*(long *)(this + 0x28) == 0) {
    lVar7 = 0;
LAB_00101523:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar7,
               "p_variant","variant_defines.size()","",false,false);
LAB_00100f4c:
    _err_print_error("resolve_depth","servers/rendering/renderer_rd/effects/resolve.cpp",0x75,
                     "Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x28) + -8);
    if (lVar7 < 3) goto LAB_00101523;
    lVar7 = *(long *)(this + 0x38);
    if (lVar7 == 0) {
LAB_00101350:
      lVar14 = 0;
LAB_00101353:
      uVar12 = 2;
LAB_00101373:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar14,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar14 = *(long *)(lVar7 + -8);
    if (lVar14 < 3) goto LAB_00101353;
    if (*(char *)(lVar7 + 2) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00100f4c;
    }
    if ((uVar12 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar12)) {
LAB_00101320:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00100f4c;
    }
    lVar7 = ((uVar12 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
            *(long *)(*(long *)(this + 0xd0) +
                     ((uVar12 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
    if (*(int *)(lVar7 + 0x98) != (int)(uVar12 >> 0x20)) {
      if (*(int *)(lVar7 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00101320;
    }
    pVVar1 = (Version *)(this + 0x10);
    iVar6 = (int)lVar7;
    if (*(char *)(lVar7 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar14 = *(long *)(this + 0x88);
      if (lVar14 != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(lVar14 + -8) <= lVar15) break;
          if (*(char *)(lVar14 + lVar15) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar6);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar6);
          }
          lVar14 = *(long *)(this + 0x88);
          lVar15 = lVar15 + 1;
        } while (lVar14 != 0);
      }
    }
    lVar15 = *(long *)(this + 0x48);
    if (lVar15 == 0) goto LAB_00101350;
    lVar14 = *(long *)(lVar15 + -8);
    if (lVar14 < 3) goto LAB_00101353;
    uVar12 = (ulong)*(uint *)(lVar15 + 8);
    lVar15 = *(long *)(lVar7 + 0x68);
    if (lVar15 == 0) {
      lVar14 = 0;
      goto LAB_00101373;
    }
    lVar14 = *(long *)(lVar15 + -8);
    if (lVar14 <= (long)uVar12) goto LAB_00101373;
    if (*(long *)(lVar15 + uVar12 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar1,iVar6);
    }
    uVar12 = local_d8[0];
    if (*(char *)(lVar7 + 0x90) == '\0') goto LAB_00100f4c;
    lVar7 = *(long *)(lVar7 + 0x88);
    if (lVar7 == 0) goto LAB_00101350;
    lVar14 = *(long *)(lVar7 + -8);
    if (lVar14 < 3) goto LAB_00101353;
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) goto LAB_00100f4c;
    uVar17 = (uint)((ulong)param_4 >> 0x20);
    RenderingDevice::get_singleton();
    pvVar8 = (void *)RenderingDevice::compute_list_begin();
    uVar9 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline(uVar9,pvVar8,*(undefined8 *)(this + 0x1a0));
    uVar9 = RenderingDevice::get_singleton();
    local_78[0] = 0;
    local_98 = 1;
    local_90 = local_90 & 0xffffffffffffff00;
    local_88 = 0;
    if (uVar12 == 0) {
      uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar4,lVar7,0,&local_98);
      RenderingDevice::compute_list_bind_uniform_set(uVar9,pvVar8,uVar10,0);
LAB_0010142a:
      local_118 = RenderingDevice::get_singleton();
      local_98 = uVar11;
      local_90 = local_90 & 0xffffffffffffff00;
LAB_0010145d:
      local_78[0] = 0;
      local_88 = local_b8;
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar4,lVar7,1,&local_98);
      RenderingDevice::compute_list_bind_uniform_set(local_118,pvVar8,uVar11,1);
      lVar14 = 0;
LAB_0010125c:
      lVar7 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar7,pvVar8,(uint)&local_68);
      lVar7 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar7,(uint)pvVar8,(uint)param_4,uVar17);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (lVar14 != 0) goto LAB_001012a8;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_d8);
      lVar14 = local_78[0];
      uVar10 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar4,lVar7,0,&local_98);
      RenderingDevice::compute_list_bind_uniform_set(uVar9,pvVar8,uVar10,0);
      if (lVar14 == 0) goto LAB_0010142a;
      LOCK();
      plVar2 = (long *)(lVar14 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
      lVar14 = local_a8[0];
      uVar5 = local_c0;
      uVar11 = local_c8;
      local_118 = RenderingDevice::get_singleton();
      local_78[0] = 0;
      local_98 = uVar11;
      local_90 = CONCAT71(local_90._1_7_,uVar5);
      local_88 = local_b8;
      if (lVar14 == 0) goto LAB_0010145d;
      CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_a8);
      lVar15 = local_78[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar4,lVar7,1,&local_98);
      RenderingDevice::compute_list_bind_uniform_set(local_118,pvVar8,uVar11,1);
      if (lVar15 != 0) {
        LOCK();
        plVar2 = (long *)(lVar15 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        lVar14 = local_a8[0];
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_78[0] + -0x10),false);
          lVar14 = local_a8[0];
        }
        goto LAB_0010125c;
      }
      lVar7 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar7,pvVar8,(uint)&local_68);
      lVar7 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar7,(uint)pvVar8,(uint)param_4,uVar17);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
LAB_001012a8:
      LOCK();
      plVar2 = (long *)(lVar14 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_a8[0] + -0x10),false);
      }
    }
  }
  if (local_d8[0] != 0) {
    LOCK();
    plVar2 = (long *)(local_d8[0] - 0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_d8[0] - 0x10),false);
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001015c3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Resolve::resolve_gi(RID, RID, RID, RID, RID, RID, Vector2i, int) */

void __thiscall
RendererRD::Resolve::resolve_gi
          (Resolve *this,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  long *plVar1;
  Version *pVVar2;
  ulong uVar3;
  code *pcVar4;
  UniformSetCacheRD *pUVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  long local_198 [2];
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  long local_168 [2];
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 *local_138 [2];
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 *local_108 [2];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  long local_d8 [2];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  long local_a8 [2];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  long local_58 [5];
  
  pUVar5 = UniformSetCacheRD::singleton;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x3a;
      pcVar15 = "Parameter \"uniform_set_cache\" is null.";
LAB_001025f9:
      _err_print_error("resolve_gi","servers/rendering/renderer_rd/effects/resolve.cpp",uVar12,
                       pcVar15,0,0);
      return;
    }
    goto LAB_0010288b;
  }
  lVar8 = RendererRD::MaterialStorage::get_singleton();
  if (lVar8 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0x3c;
      pcVar15 = "Parameter \"material_storage\" is null.";
      goto LAB_001025f9;
    }
    goto LAB_0010288b;
  }
  lVar8 = *(long *)(lVar8 + 0x50);
  local_60 = param_9;
  local_68 = param_8;
  local_90 = (undefined8 *)0x0;
  local_58[0] = lVar8;
  local_58[1] = param_2;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,2);
  puVar9 = local_90;
  if (iVar7 == 0) {
    lVar16 = 0;
    do {
      if (puVar9 == (undefined8 *)0x0) {
        lVar18 = 0;
LAB_00101d7b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar18,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar18 = *(long *)((long)puVar9 + -8);
        if (lVar18 <= lVar16) goto LAB_00101d7b;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
        *(long *)((long)local_90 + lVar16 * 8) = local_58[lVar16];
        puVar9 = local_90;
      }
      if (lVar16 != 0) break;
      lVar16 = 1;
    } while( true );
  }
  uVar12 = _LC47;
  plVar1 = (long *)((long)puVar9 + -0x10);
  local_198[0] = 0;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      lVar16 = *plVar1;
      if (lVar16 == 0) goto LAB_00101754;
      LOCK();
      lVar18 = *plVar1;
      bVar20 = lVar16 == lVar18;
      if (bVar20) {
        *plVar1 = lVar16 + 1;
        lVar18 = lVar16;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar18 != -1) {
      local_198[0] = (long)local_90;
    }
LAB_00101754:
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_90 + -0x10),false);
      }
    }
  }
  local_90 = (undefined8 *)0x0;
  lVar16 = 0;
  local_58[0] = lVar8;
  local_58[1] = param_3;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,2);
  puVar9 = local_90;
  if (iVar7 == 0) {
    do {
      if (puVar9 == (undefined8 *)0x0) {
        lVar18 = 0;
LAB_00101d33:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar18,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar18 = *(long *)((long)puVar9 + -8);
        if (lVar18 <= lVar16) goto LAB_00101d33;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
        *(long *)((long)local_90 + lVar16 * 8) = local_58[lVar16];
        puVar9 = local_90;
      }
      if (lVar16 != 0) break;
      lVar16 = 1;
    } while( true );
  }
  plVar1 = (long *)((long)puVar9 + -0x10);
  local_180 = 0;
  local_178 = 0;
  local_168[0] = 0;
  local_188 = _LC52;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      lVar16 = *plVar1;
      if (lVar16 == 0) goto LAB_00101813;
      LOCK();
      lVar18 = *plVar1;
      bVar20 = lVar16 == lVar18;
      if (bVar20) {
        *plVar1 = lVar16 + 1;
        lVar18 = lVar16;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar18 != -1) {
      local_168[0] = (long)local_90;
    }
LAB_00101813:
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_90 + -0x10),false);
      }
    }
  }
  local_90 = (undefined8 *)0x0;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,1);
  puVar9 = local_90;
  if (iVar7 == 0) {
    if (local_90 == (undefined8 *)0x0) {
      lVar16 = 0;
LAB_00102826:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar16,"p_index","size()","",false,false)
      ;
      goto LAB_0010185c;
    }
    lVar16 = local_90[-1];
    if (lVar16 < 1) goto LAB_00102826;
    CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
    uVar13 = _LC11;
    *local_90 = param_5;
    puVar9 = local_90;
LAB_00101c00:
    local_138[0] = (undefined8 *)0x0;
    local_148 = 0;
    local_150 = 0;
    plVar1 = puVar9 + -2;
    do {
      lVar16 = *plVar1;
      if (lVar16 == 0) goto LAB_00101c31;
      LOCK();
      lVar18 = *plVar1;
      bVar20 = lVar16 == lVar18;
      if (bVar20) {
        *plVar1 = lVar16 + 1;
        lVar18 = lVar16;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar18 != -1) {
      local_138[0] = local_90;
    }
LAB_00101c31:
    local_158 = uVar13;
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = local_90 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_90 + -2,false);
      }
    }
  }
  else {
LAB_0010185c:
    local_150 = 0;
    local_148 = 0;
    local_138[0] = (undefined8 *)0x0;
    local_158 = _LC11;
    uVar13 = _LC11;
    if (puVar9 != (undefined8 *)0x0) goto LAB_00101c00;
  }
  local_90 = (undefined8 *)0x0;
  iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,1);
  puVar9 = local_90;
  if (iVar7 == 0) {
    if (local_90 == (undefined8 *)0x0) {
      lVar16 = 0;
LAB_00101cad:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar16,"p_index","size()","",false,false)
      ;
      goto LAB_00101cf0;
    }
    lVar16 = local_90[-1];
    if (lVar16 < 1) goto LAB_00101cad;
    CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
    local_128 = _LC53;
    *local_90 = param_6;
    puVar9 = local_90;
LAB_00101915:
    local_108[0] = (undefined8 *)0x0;
    local_118 = 0;
    local_120 = 0;
    plVar1 = puVar9 + -2;
    do {
      lVar16 = *plVar1;
      if (lVar16 == 0) goto LAB_00101946;
      LOCK();
      lVar18 = *plVar1;
      bVar20 = lVar16 == lVar18;
      if (bVar20) {
        *plVar1 = lVar16 + 1;
        lVar18 = lVar16;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar18 != -1) {
      local_108[0] = local_90;
    }
LAB_00101946:
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = local_90 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_90 + -2,false);
      }
    }
  }
  else {
LAB_00101cf0:
    local_128 = _LC53;
    local_120 = 0;
    local_118 = 0;
    local_108[0] = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) goto LAB_00101915;
  }
  uVar3 = *(ulong *)(this + 0x188);
  uVar19 = (ulong)(param_4 != 0);
  if (*(long *)(this + 0x28) == 0) {
    lVar16 = 0;
LAB_00102653:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar19,lVar16
               ,"p_variant","variant_defines.size()","",false,false);
LAB_00101a69:
    _err_print_error("resolve_gi","servers/rendering/renderer_rd/effects/resolve.cpp",0x4d,
                     "Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar16 = *(long *)(*(long *)(this + 0x28) + -8);
    if (lVar16 <= (long)uVar19) goto LAB_00102653;
    lVar16 = *(long *)(this + 0x38);
    uVar14 = uVar19;
    if (lVar16 == 0) {
LAB_00102128:
      lVar18 = 0;
      uVar14 = uVar19;
LAB_00102149:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar18,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar18 = *(long *)(lVar16 + -8);
    if (lVar18 <= (long)uVar19) goto LAB_00102149;
    if (*(char *)(lVar16 + uVar19) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00101a69;
    }
    if ((uVar3 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar3)) {
LAB_00102708:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00101a69;
    }
    lVar16 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
             *(long *)(*(long *)(this + 0xd0) +
                      ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
    if (*(int *)(lVar16 + 0x98) != (int)(uVar3 >> 0x20)) {
      if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00102708;
    }
    pVVar2 = (Version *)(this + 0x10);
    iVar7 = (int)lVar16;
    if (*(char *)(lVar16 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar18 = *(long *)(this + 0x88);
      if (lVar18 != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(lVar18 + -8) <= lVar17) break;
          if (*(char *)(lVar18 + lVar17) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar7);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar7);
          }
          lVar18 = *(long *)(this + 0x88);
          lVar17 = lVar17 + 1;
        } while (lVar18 != 0);
      }
    }
    lVar17 = *(long *)(this + 0x48);
    if (lVar17 == 0) goto LAB_00102128;
    lVar18 = *(long *)(lVar17 + -8);
    if (lVar18 <= (long)uVar19) goto LAB_00102149;
    uVar14 = (ulong)*(uint *)(lVar17 + uVar19 * 4);
    lVar17 = *(long *)(lVar16 + 0x68);
    if (lVar17 == 0) {
      lVar18 = 0;
      goto LAB_00102149;
    }
    lVar18 = *(long *)(lVar17 + -8);
    if (lVar18 <= (long)uVar14) goto LAB_00102149;
    if (*(long *)(lVar17 + uVar14 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar7);
    }
    if (*(char *)(lVar16 + 0x90) == '\0') goto LAB_00101a69;
    lVar16 = *(long *)(lVar16 + 0x88);
    if (lVar16 == 0) goto LAB_00102128;
    lVar18 = *(long *)(lVar16 + -8);
    uVar14 = uVar19;
    if (lVar18 <= (long)uVar19) goto LAB_00102149;
    lVar16 = *(long *)(lVar16 + uVar19 * 8);
    if (lVar16 == 0) goto LAB_00101a69;
    RenderingDevice::get_singleton();
    pvVar10 = (void *)RenderingDevice::compute_list_begin();
    uVar11 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar11,pvVar10,*(undefined8 *)(this + (ulong)(param_4 != 0) * 8 + 400));
    uVar11 = RenderingDevice::get_singleton();
    local_78[0] = 0;
    local_98 = local_188;
    local_90 = (undefined8 *)CONCAT71(local_90._1_7_,local_180);
    local_88 = local_178;
    if (local_168[0] != 0) {
      CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_168);
    }
    local_a8[0] = 0;
    local_c8 = uVar12;
    local_c0 = 0;
    local_b8 = 0;
    if (local_198[0] == 0) {
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                         (pUVar5,lVar16,0,&local_c8,&local_98);
      RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_198);
      lVar18 = local_a8[0];
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                         (pUVar5,lVar16,0,&local_c8,&local_98);
      RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,0);
      if (lVar18 != 0) {
        LOCK();
        plVar1 = (long *)(lVar18 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_a8[0] + -0x10),false);
        }
      }
    }
    if (local_78[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_78[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
    }
    uVar12 = RenderingDevice::get_singleton();
    local_78[0] = 0;
    local_98 = local_128;
    local_90 = (undefined8 *)CONCAT71(local_90._1_7_,local_120);
    local_88 = local_118;
    if (local_108[0] != (undefined8 *)0x0) {
      CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_108);
    }
    local_a8[0] = 0;
    local_c8 = local_158;
    local_c0 = local_150;
    local_b8 = local_148;
    if (local_138[0] == (undefined8 *)0x0) {
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                         (pUVar5,lVar16,1,&local_c8);
      RenderingDevice::compute_list_bind_uniform_set(uVar12,pvVar10,uVar11,1);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_a8,(CowData *)local_138);
      lVar18 = local_a8[0];
      uVar11 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>
                         (pUVar5,lVar16,1,&local_c8);
      RenderingDevice::compute_list_bind_uniform_set(uVar12,pvVar10,uVar11,1);
      if (lVar18 != 0) {
        LOCK();
        plVar1 = (long *)(lVar18 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_a8[0] + -0x10),false);
        }
      }
    }
    if (local_78[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_78[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
      }
    }
    if (param_4 != 0) {
      local_90 = (undefined8 *)0x0;
      lVar18 = 0;
      local_58[0] = lVar8;
      local_58[1] = param_4;
      iVar7 = CowData<RID>::resize<false>((CowData<RID> *)&local_90,2);
      puVar9 = local_90;
      if (iVar7 == 0) {
        do {
          if (puVar9 == (undefined8 *)0x0) {
            lVar8 = 0;
LAB_00102484:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar8,"p_index","size()","",
                       false,false);
          }
          else {
            lVar8 = *(long *)((long)puVar9 + -8);
            if (lVar8 <= lVar18) goto LAB_00102484;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_90);
            *(long *)((long)local_90 + lVar18 * 8) = local_58[lVar18];
            puVar9 = local_90;
          }
          if (lVar18 != 0) break;
          lVar18 = 1;
        } while( true );
      }
      local_f0 = 0;
      local_e8 = 0;
      local_d8[0] = 0;
      local_f8 = _LC47;
      if (puVar9 != (undefined8 *)0x0) {
        plVar1 = (long *)((long)puVar9 + -0x10);
        do {
          lVar8 = *plVar1;
          if (lVar8 == 0) goto LAB_00102218;
          LOCK();
          lVar18 = *plVar1;
          bVar20 = lVar8 == lVar18;
          if (bVar20) {
            *plVar1 = lVar8 + 1;
            lVar18 = lVar8;
          }
          UNLOCK();
        } while (!bVar20);
        if (lVar18 != -1) {
          local_d8[0] = (long)local_90;
        }
LAB_00102218:
        if (local_90 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = (long *)((long)local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)((long)local_90 + -0x10),false);
          }
        }
      }
      lVar8 = local_d8[0];
      uVar6 = local_f0;
      uVar12 = local_f8;
      local_c0 = 0;
      local_a8[0] = 0;
      local_b8 = param_7;
      local_c8 = uVar13;
      uVar11 = RenderingDevice::get_singleton();
      local_90 = (undefined8 *)CONCAT71(local_90._1_7_,uVar6);
      local_88 = local_e8;
      local_78[0] = 0;
      local_98 = uVar12;
      if (lVar8 == 0) {
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar16,2,&local_98);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,2);
LAB_00102764:
        uVar12 = RenderingDevice::get_singleton();
        local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
        local_98 = uVar13;
LAB_00102798:
        local_78[0] = 0;
        local_88 = local_b8;
        uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar16,3,&local_98);
        RenderingDevice::compute_list_bind_uniform_set(uVar12,pvVar10,uVar13,3);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_d8);
        lVar8 = local_78[0];
        uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar16,2,&local_98);
        RenderingDevice::compute_list_bind_uniform_set(uVar11,pvVar10,uVar12,2);
        if (lVar8 == 0) goto LAB_00102764;
        LOCK();
        plVar1 = (long *)(lVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_78[0] + -0x10),false);
        }
        lVar8 = local_a8[0];
        uVar6 = local_c0;
        uVar13 = local_c8;
        uVar12 = RenderingDevice::get_singleton();
        local_98 = uVar13;
        local_78[0] = 0;
        local_90 = (undefined8 *)CONCAT71(local_90._1_7_,uVar6);
        local_88 = local_b8;
        if (lVar8 == 0) goto LAB_00102798;
        CowData<RID>::_ref((CowData<RID> *)local_78,(CowData *)local_a8);
        lVar18 = local_78[0];
        uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar5,lVar16,3,&local_98);
        RenderingDevice::compute_list_bind_uniform_set(uVar12,pvVar10,uVar13,3);
        if (lVar18 == 0) {
LAB_001023f5:
          LOCK();
          plVar1 = (long *)(lVar8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a8[0] + -0x10),false);
          }
        }
        else {
          LOCK();
          plVar1 = (long *)(lVar18 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_78[0] + -0x10),false);
          }
          lVar8 = local_a8[0];
          if (local_a8[0] != 0) goto LAB_001023f5;
        }
      }
      if (local_d8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_d8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_d8[0] + -0x10),false);
        }
      }
    }
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar8,pvVar10,(uint)&local_68);
    lVar8 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch_threads
              (lVar8,(uint)pvVar10,(uint)param_8,(uint)((ulong)param_8 >> 0x20));
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
  }
  if (local_108[0] != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_108[0] + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_108[0] + -2,false);
    }
  }
  if (local_138[0] != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_138[0] + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_138[0] + -2,false);
    }
  }
  if (local_168[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_168[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_168[0] + -0x10),false);
    }
  }
  if (local_198[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_198[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_198[0] + -0x10),false);
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010288b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResolveShaderRD::~ResolveShaderRD() */

void __thiscall ResolveShaderRD::~ResolveShaderRD(ResolveShaderRD *this)

{
  *(undefined ***)this = &PTR__ResolveShaderRD_001051c0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ResolveShaderRD::~ResolveShaderRD() */

void __thiscall ResolveShaderRD::~ResolveShaderRD(ResolveShaderRD *this)

{
  *(undefined ***)this = &PTR__ResolveShaderRD_001051c0;
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
LAB_00102d13:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_00102d13;
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
LAB_00103360:
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
  if (lVar10 == 0) goto LAB_00103360;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00103239:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00103239;
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
    goto LAB_001033b6;
  }
  if (lVar10 == lVar7) {
LAB_001032df:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001033b6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001032ca;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001032df;
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
LAB_001032ca:
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
LAB_00103860:
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
  if (lVar7 == 0) goto LAB_00103860;
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
LAB_001037cc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00103761;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001037cc;
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
LAB_00103761:
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
LAB_00103cc0:
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
  if (lVar11 == 0) goto LAB_00103cc0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00103b51:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00103b51;
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
    goto LAB_00103d16;
  }
  if (lVar11 == lVar9) {
LAB_00103c33:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00103d16:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00103c10;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00103c33;
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
LAB_00103c10:
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
LAB_00104126:
    uVar15 = 0;
    do {
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar12 = 0;
LAB_00104231:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar12 = *(long *)(uVar11 - 8);
        if (lVar12 <= (long)uVar15) goto LAB_00104231;
        uVar11 = *(ulong *)(uVar11 + uVar15 * 8);
LAB_00104149:
        iVar8 = (int)(uVar11 >> 0x20);
        uVar9 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar7 = uVar7 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar15 == 0) goto LAB_00104149;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar9 = 0;
      }
      uVar15 = uVar15 + 1;
      uVar9 = uVar9 ^ (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
      uVar7 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
      if (uVar15 == uVar14) goto LAB_001041b0;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar15 = *(ulong *)(param_4[4] - 8), uVar14 = uVar15 & 0xffffffff, (int)uVar15 != 0))
  goto LAB_00104126;
  goto LAB_00103e90;
LAB_001041b0:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_00103e90:
  uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
  uVar7 = uVar7 ^ uVar7 >> 0x10;
  lVar2 = *(long *)(this + (ulong)(uVar7 % 0x3ffd) * 8 + 0x1e0);
  uVar6 = auVar16._0_8_;
  uVar10 = local_68;
joined_r0x00103ef3:
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
LAB_001040f3:
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
          if (uVar11 != 0) goto LAB_00103f00;
          if (param_4[4] != 0) {
            uVar9 = *(uint *)(param_4[4] - 8);
joined_r0x001043b9:
            if (uVar9 != 0) goto LAB_00103f00;
          }
LAB_001042dd:
          uVar10 = *(undefined8 *)(lVar2 + 0x28);
          goto LAB_001040f3;
        }
        uVar9 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
        if (uVar11 == 0) {
          if (param_4[4] == 0) goto joined_r0x001043b9;
          if (*(uint *)(param_4[4] - 8) == uVar9) {
            if (uVar9 != 0) goto LAB_00103f76;
            goto LAB_001042dd;
          }
        }
        else if (uVar9 == 1) goto LAB_00103f76;
      }
      else {
        uVar9 = 1;
        if (uVar11 != 0) {
LAB_00103f76:
          uVar14 = 0;
          do {
            uVar15 = uVar14;
            if (uVar11 == 0) {
              uVar11 = param_4[4];
              if (uVar11 == 0) {
                lVar12 = 0;
                goto LAB_00104231;
              }
              lVar12 = *(long *)(uVar11 - 8);
              if (lVar12 <= (long)uVar14) goto LAB_00104231;
              uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
              uVar13 = *(ulong *)(piVar3 + 4);
              if (uVar13 == 0) goto LAB_00103fb3;
              if (uVar14 != 0) goto LAB_00104034;
            }
            else if (uVar14 == 0) {
              uVar13 = *(ulong *)(piVar3 + 4);
              uVar15 = 0;
              if (uVar13 == 0) {
LAB_00103fb3:
                lVar4 = *(long *)(piVar3 + 8);
                if (lVar4 == 0) {
                  lVar12 = 0;
                  goto LAB_00104231;
                }
                lVar12 = *(long *)(lVar4 + -8);
                if (lVar12 <= (long)uVar15) goto LAB_00104231;
                uVar13 = *(ulong *)(lVar4 + uVar14 * 8);
              }
            }
            else {
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              if (*(long *)(piVar3 + 4) == 0) {
                uVar11 = 0;
                goto LAB_00103fb3;
              }
              uVar11 = 0;
LAB_00104034:
              _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                               "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
              uVar13 = 0;
            }
            if (uVar13 != uVar11) goto LAB_001043db;
            uVar14 = uVar14 + 1;
            if (uVar9 <= (uint)uVar14) goto LAB_001042dd;
            uVar11 = param_4[2];
          } while( true );
        }
        if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
          uVar9 = 1;
          goto LAB_00103f76;
        }
      }
    }
  }
LAB_00103f00:
  lVar2 = *(long *)(lVar2 + 8);
  uVar6 = auVar16._0_8_;
  uVar10 = local_68;
  goto joined_r0x00103ef3;
LAB_001043db:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_00103f00;
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
LAB_001046cd:
    uVar21 = 0;
    do {
      uVar14 = (uint)uVar9;
      if (lVar13 == 0) {
        lVar13 = *(long *)(param_4 + 8);
        if (lVar13 == 0) goto LAB_00104750;
        lVar17 = *(long *)(lVar13 + -8);
        if (lVar17 <= (long)uVar21) goto LAB_00104771;
        lVar13 = *(long *)(lVar13 + uVar21 * 8);
LAB_001046e1:
        iVar8 = (int)((ulong)lVar13 >> 0x20);
        uVar15 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar14 = uVar14 ^ ((int)lVar13 * 0x16a88000 | (uint)((int)lVar13 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
      else {
        if (uVar21 == 0) goto LAB_001046e1;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar15 = 0;
      }
      uVar21 = uVar21 + 1;
      uVar15 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64 ^ uVar15;
      uVar9 = (ulong)((uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64);
      if (uVar21 == uVar7) goto LAB_00104570;
      lVar13 = *(long *)(param_4 + 4);
    } while( true );
  }
  if ((*(long *)(param_4 + 8) != 0) &&
     (uVar7 = (uint)*(undefined8 *)(*(long *)(param_4 + 8) + -8), uVar7 != 0)) goto LAB_001046cd;
LAB_00104570:
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
      if ((int)*(ulong *)(local_48 + -8) != 0) goto LAB_001045ff;
      uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar9 = (ulong)(uVar7 ^ uVar7 >> 0x10);
      goto LAB_00104806;
    }
    uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
    uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
    uVar9 = (ulong)(uVar7 ^ uVar7 >> 0x10);
  }
  else {
    uVar9 = 1;
LAB_001045ff:
    iVar16 = (int)local_58;
    uVar21 = 0;
    iVar8 = (int)((ulong)local_58 >> 0x20);
    do {
      if (lVar13 == 0) {
        if (lVar19 == 0) {
LAB_00104750:
          lVar17 = 0;
LAB_00104771:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar21,lVar17,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar17 = *(long *)(lVar19 + -8);
        if (lVar17 <= (long)uVar21) goto LAB_00104771;
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
LAB_00104806:
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
        if (piVar18[1] != param_4[1]) goto LAB_00104878;
LAB_0010490b:
        if (*piVar18 == *param_4) {
          lVar19 = *(long *)(param_4 + 4);
          if (*(long *)(piVar18 + 4) == 0) {
            if (*(long *)(piVar18 + 8) == 0) {
              if (lVar19 == 0) {
                if (*(long *)(param_4 + 8) != 0) {
                  local_e8 = *(uint *)(*(long *)(param_4 + 8) + -8);
joined_r0x00105123:
                  if (local_e8 != 0) goto LAB_00104946;
                }
LAB_00104e0a:
                lVar19 = local_58;
                uVar21 = (ulong)*(uint *)(lVar13 + 0x30);
                if (*(uint *)(lVar13 + 0x30) < 2) {
                  lVar13 = 1;
LAB_00104cbd:
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
                        goto LAB_00104b71;
                      }
                      if (lVar19 == 0) {
                        if (local_48 == 0) {
LAB_00105159:
                          lVar17 = 0;
                        }
                        else {
                          lVar17 = *(long *)(local_48 + -8);
                          if ((long)uVar21 < lVar17) {
                            lVar20 = *(long *)(local_48 + uVar21 * 8);
                            lVar17 = *(long *)(lVar3 + 0x38);
                            if (lVar17 == 0) goto LAB_00104ec7;
                            if (uVar21 != 0) goto LAB_001050be;
                            goto LAB_00104ee5;
                          }
                        }
                        goto LAB_00104771;
                      }
                      if (uVar21 == 0) {
                        lVar17 = *(long *)(lVar3 + 0x38);
                        lVar20 = lVar19;
                        if (lVar17 == 0) {
LAB_00104ec7:
                          lVar4 = *(long *)(lVar3 + 0x48);
                          if (lVar4 == 0) goto LAB_00105159;
                          lVar17 = *(long *)(lVar4 + -8);
                          if (lVar17 <= (long)uVar21) goto LAB_00104771;
                          lVar17 = *(long *)(lVar4 + uVar21 * 8);
                        }
                      }
                      else {
                        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                        lVar20 = *(long *)(lVar3 + 0x38);
                        if (lVar20 == 0) goto LAB_00104ec7;
                        lVar20 = 0;
LAB_001050be:
                        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                        lVar17 = 0;
                      }
LAB_00104ee5:
                      uVar21 = uVar21 + 1;
                    } while (lVar17 == lVar20);
                  }
                }
              }
            }
            else {
              local_e8 = (uint)*(undefined8 *)(*(long *)(piVar18 + 8) + -8);
              if (lVar19 == 0) {
                if (*(long *)(param_4 + 8) == 0) goto joined_r0x00105123;
                if (*(uint *)(*(long *)(param_4 + 8) + -8) == local_e8) {
                  if (local_e8 != 0) goto LAB_00104ce8;
                  goto LAB_00104e0a;
                }
              }
              else {
joined_r0x00104940:
                if (local_e8 == 1) {
LAB_00104ce8:
                  uVar22 = 0;
                  do {
                    uVar21 = uVar22;
                    if (lVar19 == 0) {
                      lVar19 = *(long *)(param_4 + 8);
                      if (lVar19 == 0) {
                        lVar17 = 0;
                        goto LAB_00104771;
                      }
                      lVar17 = *(long *)(lVar19 + -8);
                      if (lVar17 <= (long)uVar22) goto LAB_00104771;
                      lVar19 = *(long *)(lVar19 + uVar22 * 8);
                      lVar17 = *(long *)(piVar18 + 4);
                      if (lVar17 == 0) goto LAB_00104d1e;
                      if (uVar22 != 0) goto LAB_00104da3;
                    }
                    else if (uVar22 == 0) {
                      lVar17 = *(long *)(piVar18 + 4);
                      uVar21 = 0;
                      if (lVar17 == 0) {
LAB_00104d1e:
                        lVar3 = *(long *)(piVar18 + 8);
                        if (lVar3 == 0) {
                          lVar17 = 0;
                          goto LAB_00104771;
                        }
                        lVar17 = *(long *)(lVar3 + -8);
                        if (lVar17 <= (long)uVar21) goto LAB_00104771;
                        lVar17 = *(long *)(lVar3 + uVar22 * 8);
                      }
                    }
                    else {
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      if (*(long *)(piVar18 + 4) == 0) {
                        lVar19 = 0;
                        goto LAB_00104d1e;
                      }
                      lVar19 = 0;
LAB_00104da3:
                      _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                       "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                      lVar17 = 0;
                    }
                    if (lVar19 != lVar17) break;
                    uVar22 = uVar22 + 1;
                    if (local_e8 <= (uint)uVar22) goto LAB_00104e0a;
                    lVar19 = *(long *)(param_4 + 4);
                  } while( true );
                }
              }
            }
          }
          else {
            if (lVar19 != 0) {
              local_e8 = 1;
              goto LAB_00104ce8;
            }
            if (*(long *)(param_4 + 8) != 0) {
              local_e8 = (uint)*(undefined8 *)(*(long *)(param_4 + 8) + -8);
              goto joined_r0x00104940;
            }
          }
        }
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)&local_48,pCVar1);
        if (*(int *)(lVar13 + 0x30) == 0) {
          uVar21 = 0;
          lVar13 = 0;
          goto LAB_00104cbd;
        }
        piVar18 = *(int **)(lVar13 + 0x38);
        if (piVar18[1] == param_4[1]) goto LAB_0010490b;
      }
LAB_00104946:
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
LAB_00104878:
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
      if (local_78[0] == 0) goto LAB_00104b4c;
    }
    LOCK();
    plVar2 = (long *)(lVar13 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
  }
LAB_00104b4c:
  uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                     (this,param_2,param_3,uVar9,uVar7,local_a8);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_a0);
LAB_00104b71:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResolveShaderRD::~ResolveShaderRD() */

void __thiscall ResolveShaderRD::~ResolveShaderRD(ResolveShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



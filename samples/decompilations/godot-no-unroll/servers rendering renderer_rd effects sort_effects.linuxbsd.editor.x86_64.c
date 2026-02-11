
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



/* RendererRD::SortEffects::~SortEffects() */

void __thiscall RendererRD::SortEffects::~SortEffects(SortEffects *this)

{
  ShaderRD::version_free(this,*(undefined8 *)(this + 0x178));
  *(undefined ***)this = &PTR__SortShaderRD_00101358;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* RendererRD::SortEffects::sort_buffer(RID, int) */

void __thiscall
RendererRD::SortEffects::sort_buffer(SortEffects *this,undefined8 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  uint local_7c;
  uint local_68 [4];
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_40;
  
  uVar7 = ((int)(param_3 - 1) >> 9) + 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = param_3;
  RenderingDevice::get_singleton();
  pvVar3 = (void *)RenderingDevice::compute_list_begin();
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline(uVar4,pvVar3,*(undefined8 *)(this + 0x180));
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_uniform_set(uVar4,pvVar3,param_2,1);
  lVar5 = RenderingDevice::get_singleton();
  uVar6 = (uint)local_68;
  RenderingDevice::compute_list_set_push_constant(lVar5,pvVar3,uVar6);
  lVar5 = RenderingDevice::get_singleton();
  uVar8 = (uint)pvVar3;
  RenderingDevice::compute_list_dispatch(lVar5,uVar8,uVar7,1);
  local_7c = 0x200;
  if (1 < (int)uVar7) {
    do {
      lVar5 = RenderingDevice::get_singleton();
      uVar7 = 0;
      RenderingDevice::compute_list_add_barrier(lVar5);
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar4,pvVar3,*(undefined8 *)(this + 0x188));
      bVar1 = true;
      if ((int)local_7c < (int)param_3) {
        bVar1 = (int)param_3 <= (int)(local_7c * 2);
        uVar10 = local_7c;
        do {
          uVar7 = uVar10 * 2;
          iVar2 = uVar10 * -2;
          uVar10 = uVar7;
        } while (param_3 != uVar7 && SBORROW4(param_3,uVar7) == (int)(param_3 + iVar2) < 0);
        uVar7 = (int)uVar7 >> 9;
      }
      uVar9 = local_7c & 0x7fffffff;
      for (uVar10 = uVar9; 0x100 < uVar10; uVar10 = uVar10 >> 1) {
        local_54 = uVar10;
        local_50 = 1;
        if (uVar9 == uVar10) {
          local_54 = uVar9 * 2 - 1;
          local_50 = 0xffffffff;
        }
        local_4c = 0;
        local_58 = uVar10;
        lVar5 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar5,pvVar3,uVar6);
        lVar5 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_dispatch(lVar5,uVar8,uVar7,1);
        lVar5 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_add_barrier(lVar5);
      }
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline(uVar4,pvVar3,*(undefined8 *)(this + 400));
      lVar5 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar5,pvVar3,uVar6);
      lVar5 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch(lVar5,uVar8,uVar7,1);
      local_7c = local_7c * 2;
    } while (!bVar1);
  }
  RenderingDevice::get_singleton();
  RenderingDevice::compute_list_end();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* RendererRD::SortEffects::SortEffects() */

void __thiscall RendererRD::SortEffects::SortEffects(SortEffects *this)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_80;
  Vector<String> local_78 [8];
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD((ShaderRD *)this);
  *(undefined ***)this = &PTR__SortShaderRD_00101358;
  ShaderRD::setup((char *)this,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#define SORT_SIZE 512\n#define NUM_THREADS (SORT_SIZE / 2)\n#define INVERSION (16 * 2 + 8 * 3)\n#define ITERATIONS 1\n\nlayout(local_size_x = NUM_THREADS, local_size_y = 1, local_size_z = 1) in;\n\n#ifndef MODE_SORT_STEP\n\nshared vec2 g_LDS[SORT_SIZE];\n\n#endif\n\nlayout(set = 1, binding = 0, std430) restrict buffer SortBuffer {\n\tvec2 data[];\n}\nsort_buffer;\n\nlayout(push_constant, std430) uniform Params {\n\tuint total_elements;\n\tuint pad[3];\n\tivec4 job_params;\n}\nparams;\n\nvoid main() {\n#ifdef MODE_SORT_BLOCK\n\n\tuvec3 Gid = gl_WorkGroupID;\n\tuvec3 DTid = gl_GlobalInvocationID;\n\tuvec3 GTid = gl_LocalInvocationID;\n\tuint GI = gl_LocalInvocationIndex;\n\n\tint GlobalBaseIndex = int((Gid.x * SORT_SIZE) + GTid.x);\n\tint LocalBaseIndex = int(GI);\n\tint numElementsInThreadGroup = int(min(SORT_SIZE, params.total_elements - (Gid.x * SORT_SIZE)));\n\n\t\n\n\tint i;\n\tfor (i = 0; i < 2 * ITERATIONS; ++i) {\n\t\tif (GI + i * NUM_THREADS < numElementsInThreadGroup) {\n\t\t\tg_LDS[LocalBaseIndex + i * NUM_THREADS] = sort_buffer.data[GlobalBaseIndex + i * NUM_THREADS];\n\t\t}\n\t}\n\n\tgroupMemoryBarrier();\n\tbarrier();\n\n\t\n\tfor (int nMergeSize = 2; nMergeSize <= SORT_SIZE; nMergeSize = nMergeSize * 2) {\n\t\tfor (int nMergeSubSize = nMergeSize >> 1; nMergeSubSize > 0; nMergeSubSize = nMergeSubSize >> 1) {\n\t\t\tfor (i = 0; i < ITERATIONS; ++i) {\n\t\t\t\tint tmp_index = int(GI + NUM_THREADS * i);\n\t\t\t\tint index_low = tmp_index & (nMergeSubSize - 1);\n\t\t\t\tint index_high = 2 * (tmp_index - index_low);\n\t\t\t\tint index = index_high + index_low;\n\n\t\t\t\tint nSwapElem = nMergeSubSize == nMergeSize >> 1 ? index_high + (2 * nMergeSubSize - 1) - index_low : index_high + nMergeSubSize + index_low;\n\t\t\t\tif (nSwapElem < numElementsInThreadGroup) {\n\t\t\t\t\tvec2 a = g_LDS[index];\n\t\t\t\t\tvec2 b = g_LDS[nSwapElem];\n\n\t\t\t\t\tif (a.x > b.x) {\n\t\t\t\t\t\tg_LDS[index] = b;\n\t\t\t\t\t\tg_LDS[nSwapElem] = a;\n\t\t\t\t\t}\n\t\t\t\t}\n\t\t\t\tgroupMemoryBarrier();\n\t\t\t\tbarrier();\n\t\t\t}\n\t\t}\n\t}\n\n\t\n\tfor (i = 0; i < 2 * ITERATIONS; ++i) {\n\t\tif (GI + i * NUM_THREADS < numElementsInThreadGroup) {\n\t\t\t..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  local_58 = "\n#define MODE_SORT_BLOCK\n";
  local_70 = 0;
  local_68 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_68);
  Vector<String>::push_back(local_78);
  lVar8 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  local_68 = 0;
  local_58 = "\n#define MODE_SORT_STEP\n";
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_68);
  Vector<String>::push_back(local_78);
  lVar8 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  local_68 = 0;
  local_58 = "\n#define MODE_SORT_INNER\n";
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_68);
  Vector<String>::push_back(local_78);
  lVar8 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  local_60 = 0;
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  ShaderRD::initialize((Vector *)this,local_78,(Vector *)&local_80);
  lVar8 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
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
      if (local_60 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar13 = *(long *)(local_60 + -8);
      local_60 = 0;
      if (lVar13 != 0) {
        lVar14 = 0;
        lVar9 = lVar8;
        do {
          if (*(long *)(lVar9 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar9 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar9 + 0x20);
              *(undefined8 *)(lVar9 + 0x20) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar14 = lVar14 + 1;
          lVar9 = lVar9 + 0x28;
        } while (lVar13 != lVar14);
      }
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  uVar10 = 0;
  uVar6 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x178) = uVar6;
  do {
    uVar6 = RenderingDevice::get_singleton();
    uVar4 = *(ulong *)(this + 0x178);
    local_50 = 0;
    if (*(long *)(this + 0x18) == 0) {
      lVar8 = 0;
LAB_00100aa3:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar10,
                 lVar8,"p_variant","variant_defines.size()","",false,false);
      uVar12 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0x18) + -8);
      if (lVar8 <= (long)uVar10) goto LAB_00100aa3;
      lVar8 = *(long *)(this + 0x28);
      uVar7 = uVar10;
      if (lVar8 == 0) {
LAB_00100a30:
        lVar13 = 0;
        uVar7 = uVar10;
LAB_00100a51:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar13,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar13 = *(long *)(lVar8 + -8);
      if (lVar13 <= (long)uVar10) goto LAB_00100a51;
      if (*(char *)(lVar8 + uVar10) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar12 = 0;
        goto LAB_001008d4;
      }
      if ((uVar4 == 0) || (*(uint *)(this + 0xd4) <= (uint)uVar4)) {
LAB_00100b30:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar12 = 0;
      }
      else {
        lVar8 = ((uVar4 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0xa0 +
                *(long *)(*(long *)(this + 0xc0) +
                         ((uVar4 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
        if (*(int *)(lVar8 + 0x98) != (int)(uVar4 >> 0x20)) {
          if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00100b30;
        }
        iVar11 = (int)lVar8;
        if (*(char *)(lVar8 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this);
          lVar13 = *(long *)(this + 0x78);
          if (lVar13 != 0) {
            lVar9 = 0;
            do {
              if (*(long *)(lVar13 + -8) <= lVar9) break;
              if (*(char *)(lVar13 + lVar9) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this,iVar11);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this,iVar11);
              }
              lVar13 = *(long *)(this + 0x78);
              lVar9 = lVar9 + 1;
            } while (lVar13 != 0);
          }
        }
        lVar9 = *(long *)(this + 0x38);
        if (lVar9 == 0) goto LAB_00100a30;
        lVar13 = *(long *)(lVar9 + -8);
        if (lVar13 <= (long)uVar10) goto LAB_00100a51;
        uVar7 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
        lVar9 = *(long *)(lVar8 + 0x68);
        if (lVar9 == 0) {
          lVar13 = 0;
          goto LAB_00100a51;
        }
        lVar13 = *(long *)(lVar9 + -8);
        if (lVar13 <= (long)uVar7) goto LAB_00100a51;
        if (*(long *)(lVar9 + uVar7 * 8) == 0) {
          cVar2 = *(char *)(lVar8 + 0x90);
        }
        else {
          ShaderRD::_compile_version_end((Version *)this,iVar11);
          cVar2 = *(char *)(lVar8 + 0x90);
        }
        if (cVar2 == '\0') {
          uVar12 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x88);
          if (lVar8 == 0) goto LAB_00100a30;
          lVar13 = *(long *)(lVar8 + -8);
          uVar7 = uVar10;
          if (lVar13 <= (long)uVar10) goto LAB_00100a51;
          uVar12 = *(undefined8 *)(lVar8 + uVar10 * 8);
        }
      }
    }
LAB_001008d4:
    uVar6 = RenderingDevice::compute_pipeline_create(uVar6,uVar12,&local_58);
    lVar8 = local_50;
    *(undefined8 *)(this + ((long)(int)uVar10 + 0x30) * 8) = uVar6;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 3) {
      CowData<String>::_unref((CowData<String> *)&local_70);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* SortShaderRD::~SortShaderRD() */

void __thiscall SortShaderRD::~SortShaderRD(SortShaderRD *this)

{
  *(undefined ***)this = &PTR__SortShaderRD_00101358;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SortShaderRD::~SortShaderRD() */

void __thiscall SortShaderRD::~SortShaderRD(SortShaderRD *this)

{
  *(undefined ***)this = &PTR__SortShaderRD_00101358;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::SortEffects::SortEffects() [clone .cold] */

void __thiscall RendererRD::SortEffects::SortEffects(SortEffects *this)

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
LAB_001011c0:
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
  if (lVar10 == 0) goto LAB_001011c0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00101099:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00101099;
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
    goto LAB_00101216;
  }
  if (lVar10 == lVar7) {
LAB_0010113f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00101216:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010112a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010113f;
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
LAB_0010112a:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* SortShaderRD::~SortShaderRD() */

void __thiscall SortShaderRD::~SortShaderRD(SortShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



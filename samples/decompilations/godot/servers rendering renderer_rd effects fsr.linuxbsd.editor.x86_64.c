
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



/* RendererRD::FSR::~FSR() */

void __thiscall RendererRD::FSR::~FSR(FSR *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_label_00103b30;
  ShaderRD::version_free((ShaderRD *)(this + 0x10));
  *(undefined ***)(this + 0x10) = &PTR__FsrUpscaleShaderRD_00103b10;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x10));
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



/* RendererRD::FSR::~FSR() */

void __thiscall RendererRD::FSR::~FSR(FSR *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_label_00103b30;
  ShaderRD::version_free((ShaderRD *)(this + 0x10));
  *(undefined ***)(this + 0x10) = &PTR__FsrUpscaleShaderRD_00103b10;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x10));
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  operator_delete(this,0x198);
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



/* RendererRD::FSR::FSR() */

void __thiscall RendererRD::FSR::FSR(FSR *this)

{
  ShaderRD *this_00;
  long *plVar1;
  char *pcVar2;
  uint *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
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
  *(undefined8 *)(this + 8) = 0;
  local_50 = 0xf;
  *(undefined ***)this = &PTR_get_label_00103b30;
  local_58 = "FSR 1.0 Upscale";
  String::parse_latin1((StrRange *)(this + 8));
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x10) = &PTR__FsrUpscaleShaderRD_00103b10;
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define A_GPU\n#define A_GLSL\n\n#ifdef MODE_FSR_UPSCALE_NORMAL\n\n#define A_HALF\n\n#endif\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#define A_2PI 6.28318530718\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifdef A_CPU\n \n #ifndef A_RESTRICT\n  #define A_RESTRICT __restrict\n #endif\n\n #ifndef A_STATIC\n  #define A_STATIC static\n #endif\n\n \n \n typedef uint32_t AP1;\n typedef float AF1;\n typedef double AD1;\n typedef uint8_t AB1;\n typedef uint16_t AW1;\n typedef uint32_t AU1;\n typedef uint64_t AL1;\n typedef int8_t ASB1;\n typedef int16_t ASW1;\n typedef int32_t ASU1;\n typedef int64_t ASL1;\n\n #define AD1_(a) ((AD1)(a))\n #define AF1_(a) ((AF1)(a))\n #define AL1_(a) ((AL1)(a))\n #define AU1_(a) ((AU1)(a))\n\n #define ASL1_(a) ((ASL1)(a))\n #define ASU1_(a) ((ASU1)(a))\n\n A_STATIC AU1 AU1_AF1(AF1 a){union{AF1 f;AU1 u;}bits;bits.f=a;return bits.u;}\n\n #define A_TRUE 1\n #define A_FALSE 0\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n #define retAD2 AD1 *A_RESTRICT\n #define retAD3 AD1 *A_RESTRICT\n #define retAD4 AD1 *A_RESTRICT\n #define retAF2 AF1 *A_RESTRICT\n #define retAF3 AF1 *A_RESTRICT\n #define retAF4 AF1 *A_RESTRICT\n #define retAL2 AL1 *A_RESTRICT\n #define retAL3 AL1 *A_RESTRICT\n #define retAL4 AL1 *A_RESTRICT\n #define retAU2 AU1 *A_RESTRICT\n #define retAU3 AU1 *A_RESTRICT\n #define retAU4 AU1 *A_RESTRICT\n\n #define inAD2 AD1 *A_RESTRICT\n #define inAD3 AD1 *A_RESTRICT\n #define inAD4 AD1 *A_RESTRICT\n #define inAF2 AF1 *A_RESTRICT\n #define inAF3 AF1 *A_RESTRICT\n #define inAF4 AF1 *A_RESTRICT\n #define inAL2 AL1 *A_RESTRICT\n #define inAL3 AL1 *A_RESTRICT\n #define inAL4 AL1 *A_RESTRICT\n #define inAU2 AU1 *A_RESTRICT\n #define inAU3 AU1 *A_RESTRICT\n #define inAU4 AU1 *A_RESTRICT\n\n #define inoutAD2 AD1 *A_RESTRICT\n #define inoutAD3 AD1 *A_RESTRICT\n #define inoutAD4 AD1 *A_RESTRICT\n #define inoutAF2 AF1 *A_RESTRICT\n #define inoutAF3 AF1 *A_RESTRICT\n #define inoutAF4 AF1 *A_RESTRICT\n #define inoutAL2 AL1 *A_RESTRICT\n #define inoutAL3 AL1 *A_RESTRICT\n #define inoutAL4 AL1 *A_RESTRICT\n #define inoutAU2 AU1 *A_RESTRICT\n #de..." /* TRUNCATED STRING LITERAL */
                 );
  local_70 = 0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  uVar7 = RenderingDevice::get_singleton();
  cVar6 = RenderingDevice::has_feature(uVar7,1);
  local_68 = 0;
  if (cVar6 == '\0') {
    local_50 = 0x23;
    local_58 = "\n#define MODE_FSR_UPSCALE_FALLBACK\n";
  }
  else {
    local_50 = 0x21;
    local_58 = "\n#define MODE_FSR_UPSCALE_NORMAL\n";
  }
  String::parse_latin1((StrRange *)&local_68);
  Vector<String>::push_back(local_78);
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
  local_58 = "";
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
  uVar7 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x188) = uVar7;
  uVar7 = RenderingDevice::get_singleton();
  uVar8 = *(ulong *)(this + 0x188);
  local_50 = 0;
  if (*(long *)(this + 0x28) == 0) {
    lVar12 = 0;
LAB_00100943:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar12,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar12 = *(long *)(*(long *)(this + 0x28) + -8);
    if (lVar12 < 1) goto LAB_00100943;
    pcVar2 = *(char **)(this + 0x38);
    if (pcVar2 == (char *)0x0) {
LAB_001009e0:
      lVar12 = 0;
LAB_001009e3:
      uVar8 = 0;
LAB_001009fa:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar12 = *(long *)(pcVar2 + -8);
    if (lVar12 < 1) goto LAB_001009e3;
    if (*pcVar2 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar11 = 0;
      goto LAB_00100807;
    }
    if ((uVar8 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar8)) {
LAB_001009b0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar11 = 0;
      goto LAB_00100807;
    }
    lVar9 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
            *(long *)(*(long *)(this + 0xd0) +
                     ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
    if (*(int *)(lVar9 + 0x98) != (int)(uVar8 >> 0x20)) {
      if (*(int *)(lVar9 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001009b0;
    }
    iVar10 = (int)lVar9;
    if (*(char *)(lVar9 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_00);
      lVar12 = *(long *)(this + 0x88);
      if (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(lVar12 + -8) <= lVar13) break;
          if (*(char *)(lVar12 + lVar13) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_00,iVar10);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_00,iVar10);
          }
          lVar12 = *(long *)(this + 0x88);
          lVar13 = lVar13 + 1;
        } while (lVar12 != 0);
      }
    }
    puVar3 = *(uint **)(this + 0x48);
    if (puVar3 == (uint *)0x0) goto LAB_001009e0;
    lVar12 = *(long *)(puVar3 + -2);
    if (lVar12 < 1) goto LAB_001009e3;
    uVar8 = (ulong)*puVar3;
    lVar13 = *(long *)(lVar9 + 0x68);
    if (lVar13 == 0) {
      lVar12 = 0;
      goto LAB_001009fa;
    }
    lVar12 = *(long *)(lVar13 + -8);
    if (lVar12 <= (long)uVar8) goto LAB_001009fa;
    if (*(long *)(lVar13 + uVar8 * 8) == 0) {
      cVar6 = *(char *)(lVar9 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end((Version *)this_00,iVar10);
      cVar6 = *(char *)(lVar9 + 0x90);
    }
    if (cVar6 != '\0') {
      puVar4 = *(undefined8 **)(lVar9 + 0x88);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001009e0;
      lVar12 = puVar4[-1];
      if (0 < lVar12) {
        uVar11 = *puVar4;
        goto LAB_00100807;
      }
      goto LAB_001009e3;
    }
  }
  uVar11 = 0;
LAB_00100807:
  uVar7 = RenderingDevice::compute_pipeline_create(uVar7,uVar11,&local_58);
  lVar12 = local_50;
  *(undefined8 *)(this + 400) = uVar7;
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



/* RendererRD::FSR::process(Ref<RenderSceneBuffersRD>, RID, RID) */

void __thiscall
RendererRD::FSR::process(FSR *this,long *param_2,undefined8 param_3,undefined8 param_4)

{
  Version *pVVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  StringName *pSVar4;
  uint *puVar5;
  long *plVar6;
  code *pcVar7;
  UniformSetCacheRD *pUVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long in_FS_OFFSET;
  bool bVar28;
  int iVar29;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
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
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar20 = 0x39;
      pcVar23 = "Parameter \"uniform_set_cache\" is null.";
LAB_00101c29:
      _err_print_error("process","servers/rendering/renderer_rd/effects/fsr.cpp",uVar20,pcVar23,0,0)
      ;
      return;
    }
    goto LAB_00101d35;
  }
  lVar14 = RendererRD::MaterialStorage::get_singleton();
  if (lVar14 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar20 = 0x3b;
      pcVar23 = "Parameter \"material_storage\" is null.";
      goto LAB_00101c29;
    }
    goto LAB_00101d35;
  }
  pSVar4 = (StringName *)*param_2;
  uVar20 = *(undefined8 *)(pSVar4 + 0x1a0);
  uVar15 = *(undefined8 *)(pSVar4 + 0x1ac);
  uVar17 = *(undefined8 *)(pSVar4 + 0x1a0);
  uVar2 = *(undefined4 *)(pSVar4 + 0x1b8);
  if ((process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#2}::
                                    operator()()::sname), iVar11 != 0)) {
    _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#2}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#2}::operator()()::
                         sname);
  }
  if ((process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#1}::
                                    operator()()::sname), iVar11 != 0)) {
    _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#1}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#1}::operator()()::
                         sname);
  }
  cVar10 = RenderSceneBuffersRD::has_texture
                     (pSVar4,(StringName *)
                             &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#1}::operator()()
                              ::sname);
  if (cVar10 == '\0') {
    lVar21 = *param_2;
    uVar3 = *(undefined4 *)(lVar21 + 0x184);
    if ((process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#4}::
                                      operator()()::sname), iVar11 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#4}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#4}::operator()()::
                           sname);
    }
    if ((process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#3}::
                                      operator()()::sname), iVar11 != 0)) {
      _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#3}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#3}::operator()()::
                           sname);
    }
    RenderSceneBuffersRD::create_texture
              (lVar21,&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#3}::operator()()::sname
               ,&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#4}::operator()()::sname,uVar3
               ,0xb,0,uVar20,1,1,1,0);
  }
  pSVar4 = (StringName *)*param_2;
  if ((process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#6}::
                                    operator()()::sname), iVar11 != 0)) {
    _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#6}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#6}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#6}::operator()()::
                         sname);
  }
  if ((process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#5}::
                                    operator()()::sname), iVar11 != 0)) {
    _scs_create((char *)&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#5}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#5}::operator()()::
                         sname);
  }
  local_1a8._0_4_ = (int)uVar15;
  local_1a8._4_4_ = (int)((ulong)uVar15 >> 0x20);
  uStack_1a0._0_4_ = (int)uVar17;
  uStack_1a0._4_4_ = (int)((ulong)uVar17 >> 0x20);
  local_1a8 = (undefined8 *)CONCAT44((float)local_1a8._4_4_,(float)(int)local_1a8);
  uStack_1a0 = CONCAT44((float)uStack_1a0._4_4_,(float)(int)uStack_1a0);
  uVar15 = RenderSceneBuffersRD::get_texture
                     (pSVar4,(StringName *)
                             &process(Ref<RenderSceneBuffersRD>,RID,RID)::{lambda()#5}::operator()()
                              ::sname);
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  RenderingDevice::get_singleton();
  pvVar16 = (void *)RenderingDevice::compute_list_begin();
  uVar17 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline(uVar17,pvVar16,*(undefined8 *)(this + 400));
  uVar22 = *(ulong *)(this + 0x188);
  local_168._8_8_ = uStack_1a0;
  local_168._0_8_ = local_1a8;
  local_158._0_4_ = uVar2;
  if (*(long *)(this + 0x28) == 0) {
    lVar21 = 0;
LAB_00101c83:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar21,
               "p_variant","variant_defines.size()","",false,false);
LAB_00100e8a:
    _err_print_error("process","servers/rendering/renderer_rd/effects/fsr.cpp",0x5b,
                     "Condition \"shader.is_null()\" is true.",0,0);
  }
  else {
    lVar21 = *(long *)(*(long *)(this + 0x28) + -8);
    if (lVar21 < 1) goto LAB_00101c83;
    pcVar23 = *(char **)(this + 0x38);
    if (pcVar23 == (char *)0x0) {
LAB_001019d0:
      lVar21 = 0;
LAB_001019d3:
      uVar22 = 0;
LAB_001019f0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar22,lVar21,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar21 = *(long *)(pcVar23 + -8);
    if (lVar21 < 1) goto LAB_001019d3;
    if (*pcVar23 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      goto LAB_00100e8a;
    }
    if ((uVar22 == 0) || (*(uint *)(this + 0xe4) <= (uint)uVar22)) {
LAB_001018d0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      goto LAB_00100e8a;
    }
    lVar27 = ((uVar22 & 0xffffffff) % (ulong)*(uint *)(this + 0xe0)) * 0xa0 +
             *(long *)(*(long *)(this + 0xd0) +
                      ((uVar22 & 0xffffffff) / (ulong)*(uint *)(this + 0xe0)) * 8);
    if (*(int *)(lVar27 + 0x98) != (int)(uVar22 >> 0x20)) {
      if (*(int *)(lVar27 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001018d0;
    }
    pVVar1 = (Version *)(this + 0x10);
    iVar11 = (int)lVar27;
    if (*(char *)(lVar27 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar21 = *(long *)(this + 0x88);
      if (lVar21 != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(lVar21 + -8) <= lVar26) break;
          if (*(char *)(lVar21 + lVar26) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar11);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar11);
          }
          lVar21 = *(long *)(this + 0x88);
          lVar26 = lVar26 + 1;
        } while (lVar21 != 0);
      }
    }
    puVar5 = *(uint **)(this + 0x48);
    if (puVar5 == (uint *)0x0) goto LAB_001019d0;
    lVar21 = *(long *)(puVar5 + -2);
    if (lVar21 < 1) goto LAB_001019d3;
    uVar22 = (ulong)*puVar5;
    lVar26 = *(long *)(lVar27 + 0x68);
    if (lVar26 == 0) {
      lVar21 = 0;
      goto LAB_001019f0;
    }
    lVar21 = *(long *)(lVar26 + -8);
    if (lVar21 <= (long)uVar22) goto LAB_001019f0;
    if (*(long *)(lVar26 + uVar22 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar1,iVar11);
    }
    if (*(char *)(lVar27 + 0x90) == '\0') goto LAB_00100e8a;
    plVar6 = *(long **)(lVar27 + 0x88);
    if (plVar6 == (long *)0x0) goto LAB_001019d0;
    lVar21 = plVar6[-1];
    if (lVar21 < 1) goto LAB_001019d3;
    lVar21 = *plVar6;
    if (lVar21 == 0) goto LAB_00100e8a;
    lVar14 = *(long *)(lVar14 + 0x50);
    lVar27 = 0;
    local_80 = 0;
    local_58[0] = lVar14;
    local_58[1] = param_3;
    iVar11 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar22 = local_80;
    if (iVar11 == 0) {
      do {
        if (uVar22 == 0) {
          lVar26 = 0;
LAB_0010184d:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar26,"p_index","size()","",
                     false,false);
        }
        else {
          lVar26 = *(long *)(uVar22 + -8);
          if (lVar26 <= lVar27) goto LAB_0010184d;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar27 * 8) = local_58[lVar27];
          uVar22 = local_80;
        }
        if (lVar27 != 0) break;
        lVar27 = 1;
      } while( true );
    }
    local_140 = 0;
    local_138 = 0;
    local_128[0] = 0;
    local_148 = _LC43;
    if (uVar22 != 0) {
      plVar6 = (long *)(uVar22 + -0x10);
      do {
        lVar27 = *plVar6;
        if (lVar27 == 0) goto LAB_0010119c;
        LOCK();
        lVar26 = *plVar6;
        bVar28 = lVar27 == lVar26;
        if (bVar28) {
          *plVar6 = lVar27 + 1;
          lVar26 = lVar27;
        }
        UNLOCK();
      } while (!bVar28);
      if (lVar26 != -1) {
        local_128[0] = local_80;
      }
LAB_0010119c:
      if (local_80 != 0) {
        LOCK();
        plVar6 = (long *)(local_80 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
    }
    lVar27 = local_128[0];
    uVar9 = local_140;
    uVar19 = local_148;
    uVar17 = _LC11;
    local_110 = 0;
    local_f8[0] = 0;
    local_118 = _LC11;
    local_158._4_4_ = 0;
    local_108 = uVar15;
    uVar18 = RenderingDevice::get_singleton();
    local_80 = CONCAT71(local_80._1_7_,uVar9);
    local_78 = local_138;
    local_68[0] = 0;
    local_88 = uVar19;
    if (lVar27 == 0) {
      uVar19 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar18,pvVar16,uVar19,0);
LAB_00101b62:
      uVar19 = RenderingDevice::get_singleton();
      local_88 = uVar17;
      local_80 = local_80 & 0xffffffffffffff00;
LAB_00101b96:
      local_1a8 = &local_88;
      local_68[0] = 0;
      local_78 = local_108;
      uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,1,local_1a8);
      RenderingDevice::compute_list_bind_uniform_set(uVar19,pvVar16,uVar18,1);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_128);
      lVar27 = local_68[0];
      uVar19 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,0,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar18,pvVar16,uVar19,0);
      if (lVar27 == 0) goto LAB_00101b62;
      LOCK();
      plVar6 = (long *)(lVar27 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
      lVar27 = local_f8[0];
      uVar9 = local_110;
      uVar18 = local_118;
      uVar19 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = uVar18;
      local_80 = CONCAT71(local_80._1_7_,uVar9);
      local_78 = local_108;
      if (lVar27 == 0) goto LAB_00101b96;
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_f8);
      lVar27 = local_68[0];
      uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,1,&local_88);
      RenderingDevice::compute_list_bind_uniform_set(uVar19,pvVar16,uVar18,1);
      if (lVar27 != 0) {
        LOCK();
        plVar6 = (long *)(lVar27 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
      }
    }
    local_1a8 = &local_88;
    lVar27 = RenderingDevice::get_singleton();
    uVar24 = (uint)local_168;
    RenderingDevice::compute_list_set_push_constant(lVar27,pvVar16,uVar24);
    lVar27 = RenderingDevice::get_singleton();
    iVar29 = (int)((ulong)uVar20 >> 0x20);
    iVar11 = iVar29 + 0xf;
    if (iVar11 < 0) {
      iVar11 = iVar29 + 0x1e;
    }
    uVar12 = iVar11 >> 4;
    iVar11 = (int)uVar20 + 0xf;
    if (iVar11 < 0) {
      iVar11 = (int)uVar20 + 0x1e;
    }
    lVar26 = 0;
    uVar13 = iVar11 >> 4;
    uVar25 = (uint)pvVar16;
    RenderingDevice::compute_list_dispatch(lVar27,uVar25,uVar13,uVar12);
    lVar27 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_add_barrier(lVar27);
    local_80 = 0;
    local_58[0] = lVar14;
    local_58[1] = uVar15;
    iVar11 = CowData<RID>::resize<false>((CowData<RID> *)&local_80,2);
    uVar22 = local_80;
    if (iVar11 == 0) {
      do {
        if (uVar22 == 0) {
          lVar14 = 0;
LAB_001017cd:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar14,"p_index","size()","",
                     false,false);
        }
        else {
          lVar14 = *(long *)(uVar22 + -8);
          if (lVar14 <= lVar26) goto LAB_001017cd;
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_80);
          *(long *)(local_80 + lVar26 * 8) = local_58[lVar26];
          uVar22 = local_80;
        }
        if (lVar26 != 0) break;
        lVar26 = 1;
      } while( true );
    }
    local_e0 = 0;
    local_d8 = 0;
    local_c8[0] = 0;
    local_e8 = _LC43;
    if (uVar22 != 0) {
      plVar6 = (long *)(uVar22 + -0x10);
      do {
        lVar14 = *plVar6;
        if (lVar14 == 0) goto LAB_001014c6;
        LOCK();
        lVar27 = *plVar6;
        bVar28 = lVar14 == lVar27;
        if (bVar28) {
          *plVar6 = lVar14 + 1;
          lVar27 = lVar14;
        }
        UNLOCK();
      } while (!bVar28);
      if (lVar27 != -1) {
        local_c8[0] = local_80;
      }
LAB_001014c6:
      if (local_80 != 0) {
        LOCK();
        plVar6 = (long *)(local_80 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
    }
    lVar14 = local_c8[0];
    uVar9 = local_e0;
    uVar20 = local_e8;
    local_b0 = 0;
    local_98[0] = 0;
    local_b8 = uVar17;
    local_158._4_4_ = 1;
    local_a8 = param_4;
    uVar15 = RenderingDevice::get_singleton();
    local_80 = CONCAT71(local_80._1_7_,uVar9);
    local_68[0] = 0;
    local_78 = local_d8;
    local_88 = uVar20;
    if (lVar14 == 0) {
      uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,0,local_1a8);
      RenderingDevice::compute_list_bind_uniform_set(uVar15,pvVar16,uVar20,0);
LAB_00101ab5:
      uVar20 = RenderingDevice::get_singleton();
      local_88 = uVar17;
      local_80 = local_80 & 0xffffffffffffff00;
LAB_00101ae9:
      local_68[0] = 0;
      local_78 = local_a8;
      uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,1,local_1a8);
      RenderingDevice::compute_list_bind_uniform_set(uVar20,pvVar16,uVar15,1);
      lVar14 = 0;
LAB_0010169c:
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar21,pvVar16,uVar24);
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch(lVar21,uVar25,uVar13,uVar12);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (lVar14 != 0) goto LAB_001016e6;
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_c8);
      lVar14 = local_68[0];
      uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,0,local_1a8);
      RenderingDevice::compute_list_bind_uniform_set(uVar15,pvVar16,uVar20,0);
      if (lVar14 == 0) goto LAB_00101ab5;
      LOCK();
      plVar6 = (long *)(lVar14 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_68[0] + -0x10),false);
      }
      lVar14 = local_98[0];
      uVar9 = local_b0;
      uVar15 = local_b8;
      uVar20 = RenderingDevice::get_singleton();
      local_88 = uVar15;
      local_80 = CONCAT71(local_80._1_7_,uVar9);
      local_68[0] = 0;
      local_78 = local_a8;
      if (lVar14 == 0) goto LAB_00101ae9;
      CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
      lVar27 = local_68[0];
      uVar15 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar8,lVar21,1,local_1a8);
      RenderingDevice::compute_list_bind_uniform_set(uVar20,pvVar16,uVar15,1);
      if (lVar27 != 0) {
        LOCK();
        plVar6 = (long *)(lVar27 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        lVar14 = local_98[0];
        if (*plVar6 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
          lVar14 = local_98[0];
        }
        goto LAB_0010169c;
      }
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar21,pvVar16,uVar24);
      lVar21 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch(lVar21,uVar25,uVar13,uVar12);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
LAB_001016e6:
      LOCK();
      plVar6 = (long *)(lVar14 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
    if (local_c8[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_c8[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_c8[0] + -0x10),false);
      }
    }
    if (local_f8[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_f8[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_f8[0] + -0x10),false);
      }
    }
    if (local_128[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_128[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_128[0] + -0x10),false);
      }
    }
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d35:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RendererRD::FSR::ensure_context(Ref<RenderSceneBuffersRD>) */

void RendererRD::FSR::ensure_context(void)

{
  return;
}



/* FsrUpscaleShaderRD::~FsrUpscaleShaderRD() */

void __thiscall FsrUpscaleShaderRD::~FsrUpscaleShaderRD(FsrUpscaleShaderRD *this)

{
  *(undefined ***)this = &PTR__FsrUpscaleShaderRD_00103b10;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* FsrUpscaleShaderRD::~FsrUpscaleShaderRD() */

void __thiscall FsrUpscaleShaderRD::~FsrUpscaleShaderRD(FsrUpscaleShaderRD *this)

{
  *(undefined ***)this = &PTR__FsrUpscaleShaderRD_00103b10;
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



/* RendererRD::FSR::get_label() const */

void RendererRD::FSR::get_label(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 8));
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
                     "servers/rendering/renderer_rd/effects/../uniform_set_cache_rd.h",0x83,
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
LAB_001022c3:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_001022c3;
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
LAB_00102910:
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
  if (lVar10 == 0) goto LAB_00102910;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001027e9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001027e9;
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
    goto LAB_00102966;
  }
  if (lVar10 == lVar7) {
LAB_0010288f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00102966:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010287a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010288f;
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
LAB_0010287a:
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
LAB_00102e20:
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
  if (lVar7 == 0) goto LAB_00102e20;
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
LAB_00102d8c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00102d21;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00102d8c;
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
LAB_00102d21:
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
LAB_00103280:
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
  if (lVar11 == 0) goto LAB_00103280;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00103111:
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
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00103111;
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
    goto LAB_001032d6;
  }
  if (lVar11 == lVar9) {
LAB_001031f3:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_001032d6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_001031d0;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001031f3;
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
LAB_001031d0:
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
LAB_00103756:
    uVar14 = 0;
    do {
      uVar6 = (uint)uVar13;
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar9 = 0;
LAB_00103851:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar9 = *(long *)(uVar11 - 8);
        if (lVar9 <= (long)uVar14) goto LAB_00103851;
        uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
LAB_00103779:
        iVar7 = (int)(uVar11 >> 0x20);
        uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar6 = uVar6 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar14 == 0) goto LAB_00103779;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar8 = 0;
      }
      uVar14 = uVar14 + 1;
      uVar8 = uVar8 ^ (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
      uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
      if (uVar14 == uVar15) goto LAB_001037e0;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar14 = *(ulong *)(param_4[4] - 8), uVar15 = uVar14 & 0xffffffff, (int)uVar14 != 0))
  goto LAB_00103756;
  goto LAB_00103450;
LAB_00103a39:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_001034b0;
LAB_001037e0:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_00103450:
  uVar10 = auVar16._0_8_;
  uVar6 = ((uint)uVar13 ^ (uint)(uVar13 >> 0x10)) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  lVar12 = *(long *)(this + (ulong)(uVar6 % 0x3ffd) * 8 + 0x1e0);
  if (lVar12 != 0) {
LAB_001034bd:
    if ((((*(uint *)(lVar12 + 0x10) == uVar6) && (*(int *)(lVar12 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar12 + 0x18))) && (*(int *)(lVar12 + 0x30) == 1)) {
      piVar3 = *(int **)(lVar12 + 0x38);
      if ((auVar16._4_4_ == piVar3[1]) && (*piVar3 == auVar16._0_4_)) {
        uVar11 = param_4[2];
        if (*(long *)(piVar3 + 4) == 0) {
          if (*(long *)(piVar3 + 8) == 0) {
            if (uVar11 != 0) goto LAB_001034b0;
            if (param_4[4] != 0) {
              uVar8 = *(uint *)(param_4[4] - 8);
joined_r0x00103a03:
              if (uVar8 != 0) goto LAB_001034b0;
            }
LAB_00103944:
            uVar10 = *(undefined8 *)(lVar12 + 0x28);
            goto LAB_00103727;
          }
          uVar8 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
          if (uVar11 == 0) {
            if (param_4[4] == 0) goto joined_r0x00103a03;
            if (*(uint *)(param_4[4] - 8) == uVar8) {
              if (uVar8 != 0) goto LAB_00103524;
              goto LAB_00103944;
            }
          }
          else if (uVar8 == 1) goto LAB_00103524;
        }
        else {
          uVar8 = 1;
          if (uVar11 != 0) {
LAB_00103524:
            uVar13 = 0;
            do {
              uVar14 = uVar13;
              if (uVar11 == 0) {
                uVar11 = param_4[4];
                if (uVar11 == 0) {
                  lVar9 = 0;
                  goto LAB_00103851;
                }
                lVar9 = *(long *)(uVar11 - 8);
                if (lVar9 <= (long)uVar13) goto LAB_00103851;
                uVar11 = *(ulong *)(uVar11 + uVar13 * 8);
                uVar15 = *(ulong *)(piVar3 + 4);
                if (uVar15 == 0) goto LAB_00103565;
                if (uVar13 != 0) goto LAB_001035e5;
              }
              else if (uVar13 == 0) {
                uVar15 = *(ulong *)(piVar3 + 4);
                uVar14 = 0;
                if (uVar15 == 0) {
LAB_00103565:
                  lVar4 = *(long *)(piVar3 + 8);
                  if (lVar4 == 0) {
                    lVar9 = 0;
                    goto LAB_00103851;
                  }
                  lVar9 = *(long *)(lVar4 + -8);
                  if (lVar9 <= (long)uVar14) goto LAB_00103851;
                  uVar15 = *(ulong *)(lVar4 + uVar13 * 8);
                }
              }
              else {
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                if (*(long *)(piVar3 + 4) == 0) {
                  uVar11 = 0;
                  goto LAB_00103565;
                }
                uVar11 = 0;
LAB_001035e5:
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                uVar15 = 0;
              }
              if (uVar15 != uVar11) goto LAB_00103a39;
              uVar13 = uVar13 + 1;
              if (uVar8 <= (uint)uVar13) goto LAB_00103944;
              uVar11 = param_4[2];
            } while( true );
          }
          if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
            uVar8 = 1;
            goto LAB_00103524;
          }
        }
      }
    }
LAB_001034b0:
    uVar10 = auVar16._0_8_;
    lVar12 = *(long *)(lVar12 + 8);
    if (lVar12 == 0) goto LAB_00103605;
    goto LAB_001034bd;
  }
LAB_00103605:
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
        goto LAB_001036f2;
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
LAB_001036f2:
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
LAB_00103727:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* FsrUpscaleShaderRD::~FsrUpscaleShaderRD() */

void __thiscall FsrUpscaleShaderRD::~FsrUpscaleShaderRD(FsrUpscaleShaderRD *this)

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



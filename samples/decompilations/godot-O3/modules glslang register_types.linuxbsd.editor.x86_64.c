
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



/* initialize_glslang_module(ModuleInitializationLevel) */

void initialize_glslang_module(int param_1)

{
  if (param_1 != 0) {
    return;
  }
  glslang::InitializeProcess();
  RenderingDevice::shader_set_compile_to_spirv_function(_compile_shader_glsl);
  RenderingDevice::shader_set_get_cache_key_function(_get_cache_key_function_glsl);
  return;
}



/* uninitialize_glslang_module(ModuleInitializationLevel) */

void uninitialize_glslang_module(int param_1)

{
  if (param_1 != 0) {
    return;
  }
  glslang::FinalizeProcess();
  return;
}



/* glslang::TShader::Includer::includeSystem(char const*, char const*, unsigned long) */

undefined8 glslang::TShader::Includer::includeSystem(char *param_1,char *param_2,ulong param_3)

{
  return 0;
}



/* glslang::TShader::Includer::includeLocal(char const*, char const*, unsigned long) */

undefined8 glslang::TShader::Includer::includeLocal(char *param_1,char *param_2,ulong param_3)

{
  return 0;
}



/* glslang::TShader::ForbidIncluder::releaseInclude(glslang::TShader::Includer::IncludeResult*) */

void glslang::TShader::ForbidIncluder::releaseInclude(IncludeResult *param_1)

{
  return;
}



/* glslang::TShader::ForbidIncluder::~ForbidIncluder() */

void __thiscall glslang::TShader::ForbidIncluder::~ForbidIncluder(ForbidIncluder *this)

{
  return;
}



/* glslang::TShader::ForbidIncluder::~ForbidIncluder() */

void __thiscall glslang::TShader::ForbidIncluder::~ForbidIncluder(ForbidIncluder *this)

{
  operator_delete(this,8);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TShader::ForbidIncluder::~ForbidIncluder() */

void __thiscall glslang::TShader::ForbidIncluder::~ForbidIncluder(ForbidIncluder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



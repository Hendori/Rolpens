
/* RasterizerGLES3::begin_frame(double) */

void __thiscall RasterizerGLES3::begin_frame(RasterizerGLES3 *this,double param_1)

{
  double dVar1;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  double __y;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  *(float *)(this + 0x18) = (float)param_1;
  *(double *)(this + 0x20) = param_1 + *(double *)(this + 0x20);
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
  dVar1 = *(double *)(this + 0x20);
  do {
    dVar1 = dVar1 - (dVar1 / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(dVar1)) {
    fmod(*(double *)(this + 0x20),__y);
  }
  *(double *)(this + 0x20) = dVar1;
  RasterizerCanvasGLES3::set_time(dVar1);
  (**(code **)(**(long **)(this + 0xa8) + 0x148))(*(undefined8 *)(this + 0x20),param_1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    GLES3::Utilities::_capture_timestamps_begin();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RasterizerGLES3::end_frame(bool) */

void RasterizerGLES3::end_frame(bool param_1)

{
  GLES3::Utilities::capture_timestamps_end();
  return;
}



/* RasterizerGLES3::finalize() */

void __thiscall RasterizerGLES3::finalize(RasterizerGLES3 *this)

{
  long *plVar1;
  undefined8 *puVar2;
  PostEffects *this_00;
  Glow *this_01;
  CubemapFilter *this_02;
  CopyEffects *this_03;
  FeedEffects *this_04;
  Config *this_05;
  
  plVar1 = *(long **)(this + 0xa8);
  (**(code **)(*plVar1 + 0x1c0))(plVar1);
  Memory::free_static(plVar1,false);
  plVar1 = *(long **)(this + 0xa0);
  (**(code **)(*plVar1 + 0x88))(plVar1);
  Memory::free_static(plVar1,false);
  puVar2 = *(undefined8 **)(this + 0x68);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x70);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  this_00 = *(PostEffects **)(this + 0x90);
  GLES3::PostEffects::~PostEffects(this_00);
  Memory::free_static(this_00,false);
  this_01 = *(Glow **)(this + 0x88);
  GLES3::Glow::~Glow(this_01);
  Memory::free_static(this_01,false);
  this_02 = *(CubemapFilter **)(this + 0x80);
  GLES3::CubemapFilter::~CubemapFilter(this_02);
  Memory::free_static(this_02,false);
  this_03 = *(CopyEffects **)(this + 0x78);
  GLES3::CopyEffects::~CopyEffects(this_03);
  Memory::free_static(this_03,false);
  this_04 = *(FeedEffects **)(this + 0x98);
  GLES3::FeedEffects::~FeedEffects(this_04);
  Memory::free_static(this_04,false);
  puVar2 = *(undefined8 **)(this + 0x60);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x58);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x50);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  puVar2 = *(undefined8 **)(this + 0x48);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  plVar1 = *(long **)(this + 0x40);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  Memory::free_static(plVar1,false);
  puVar2 = *(undefined8 **)(this + 0x38);
  (**(code **)*puVar2)(puVar2);
  Memory::free_static(puVar2,false);
  this_05 = *(Config **)(this + 0x30);
  GLES3::Config::~Config(this_05);
  Memory::free_static(this_05,false);
  return;
}



/* RasterizerGLES3::~RasterizerGLES3() */

void __thiscall RasterizerGLES3::~RasterizerGLES3(RasterizerGLES3 *this)

{
  *(undefined ***)this = &PTR_get_utilities_00103390;
  RendererCompositor::~RendererCompositor((RendererCompositor *)this);
  return;
}



/* RasterizerGLES3::~RasterizerGLES3() */

void __thiscall RasterizerGLES3::~RasterizerGLES3(RasterizerGLES3 *this)

{
  *(undefined ***)this = &PTR_get_utilities_00103390;
  RendererCompositor::~RendererCompositor((RendererCompositor *)this);
  operator_delete(this,0xb0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerGLES3::gl_end_frame(bool) */

void __thiscall RasterizerGLES3::gl_end_frame(RasterizerGLES3 *this,bool param_1)

{
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00100393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DisplayServer::singleton + 0x760))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001003a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glFinish)();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerGLES3::set_boot_image(Ref<Image> const&, Color const&, bool, bool) */

void __thiscall
RasterizerGLES3::set_boot_image
          (RasterizerGLES3 *this,Ref *param_1,Color *param_2,bool param_3,bool param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (cVar4 = Image::is_empty(), cVar4 != '\0')) goto LAB_00100738;
  local_68 = (**(code **)(*DisplayServer::singleton + 0x588))(DisplayServer::singleton,0);
  (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
  (*_glad_glViewport)(0,0,local_68 & 0xffffffff,local_68._4_4_);
  (*_glad_glEnable)(0xbe2);
  (*_glad_glBlendFuncSeparate)(0x302,0x303,1,1);
  (*_glad_glDepthMask)(0);
  pcVar3 = _glad_glClearColor;
  OS::get_singleton();
  (*pcVar3)();
  (*_glad_glClear)(0x4000);
  uVar8 = (**(code **)(**(long **)(this + 0x40) + 0x48))();
  (**(code **)(**(long **)(this + 0x40) + 0x58))(*(long **)(this + 0x40),uVar8,param_1);
  iVar5 = Image::get_height();
  iVar6 = Image::get_width();
  local_58._0_4_ = 0.0;
  local_50._0_4_ = (float)iVar6;
  fVar12 = (float)iVar5;
  if (param_3) {
    local_50._4_4_ = (float)local_68._4_4_;
    fVar13 = (float)(int)local_68;
    if (local_68._4_4_ < (int)local_68) {
      local_50._0_4_ = ((float)local_50 * local_50._4_4_) / fVar12;
      fVar12 = local_50._4_4_;
      local_58._0_4_ = (fVar13 - (float)local_50) * (float)_LC3;
    }
    else {
      local_50._0_4_ = (fVar13 * fVar12) / (float)local_50;
      fVar12 = local_50._4_4_ - (local_50._4_4_ - (float)local_50) * (float)_LC3;
      local_50._4_4_ = (float)local_50;
      local_50._0_4_ = fVar13;
    }
  }
  else {
    local_58 = 0;
    local_60 = CONCAT44(((float)local_68._4_4_ - fVar12) * _LC3._4_4_,
                        ((float)(int)local_68 - (float)local_50) * (float)_LC3);
    local_50._4_4_ = fVar12;
    uVar10 = Vector2::floor();
    fVar12 = (float)local_68._4_4_ - ((float)((ulong)uVar10 >> 0x20) + local_58._4_4_);
    local_58._0_4_ = (float)uVar10 + (float)local_58;
  }
  local_58 = CONCAT44(fVar12,(float)local_58);
  local_50 = CONCAT44((uint)local_50._4_4_ ^ __LC5,(float)local_50);
  auVar15._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_68);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_58;
  auVar15._12_4_ = _UNK_00103494;
  auVar15._8_4_ = _LC2;
  auVar15 = divps(auVar14,auVar15);
  local_58 = auVar15._0_8_;
  auVar11._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_68);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_50;
  lVar1 = *(long *)(this + 0x40);
  auVar11._12_4_ = _UNK_00103494;
  auVar11._8_4_ = _LC2;
  auVar15 = divps(auVar16,auVar11);
  local_50 = auVar15._0_8_;
  if ((uVar8 == 0) || (*(uint *)(lVar1 + 0xf4) <= (uint)uVar8)) {
LAB_0010083c:
    lVar9 = 0;
  }
  else {
    lVar9 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar1 + 0xf0)) * 0xf0 +
            *(long *)(*(long *)(lVar1 + 0xe0) +
                     ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar1 + 0xf0)) * 8);
    iVar5 = *(int *)(lVar9 + 0xe8);
    if (iVar5 == (int)(uVar8 >> 0x20)) {
      if (*(char *)(lVar9 + 8) != '\0') {
        if (*(long *)(lVar9 + 0x10) != 0) {
          uVar2 = *(ulong *)(lVar9 + 0x10);
          if ((uint)uVar2 < *(uint *)(lVar1 + 0xf4)) {
            lVar9 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(lVar1 + 0xf0)) * 0xf0 +
                    *(long *)(*(long *)(lVar1 + 0xe0) +
                             ((uVar2 & 0xffffffff) / (ulong)*(uint *)(lVar1 + 0xf0)) * 8);
            iVar5 = *(int *)(lVar9 + 0xe8);
            if (iVar5 != (int)(uVar2 >> 0x20)) goto LAB_00100830;
            goto LAB_00100644;
          }
        }
        goto LAB_0010083c;
      }
    }
    else {
LAB_00100830:
      if (0x7ffffffe < iVar5 + 0x80000000U) goto LAB_0010083c;
      lVar9 = 0;
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
LAB_00100644:
  lVar1 = GLES3::Config::singleton;
  if (param_4) {
    if (*(int *)(lVar9 + 0xe0) != 2) {
      uVar7 = 2;
      uVar10 = 0x2601;
LAB_0010066a:
      *(undefined4 *)(lVar9 + 0xe0) = uVar7;
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar9 + 0x5c),0x2801,uVar10);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar9 + 0x5c),0x2800,uVar10);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar9 + 0x5c),0x813c,0);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar9 + 0x5c),0x813d,0);
      if (*(char *)(lVar1 + 0x7b) != '\0') {
        (*_glad_glTexParameterf)(*(undefined4 *)(lVar9 + 0x5c),0x84fe);
      }
    }
  }
  else if (*(int *)(lVar9 + 0xe0) != 1) {
    uVar7 = 1;
    uVar10 = 0x2600;
    goto LAB_0010066a;
  }
  (*_glad_glActiveTexture)(0x84c0);
  (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar9 + 0x74));
  GLES3::CopyEffects::copy_to_rect(*(Rect2 **)(this + 0x78));
  (*_glad_glBindTexture)(0xde1,0);
  if (*(code **)(*(long *)this + 0x70) == gl_end_frame) {
    (**(code **)(*DisplayServer::singleton + 0x760))();
  }
  else {
    (**(code **)(*(long *)this + 0x70))(this,1);
  }
  (**(code **)(**(long **)(this + 0x40) + 0x50))(*(long **)(this + 0x40),uVar8);
LAB_00100738:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerGLES3::clear_depth(float) */

void RasterizerGLES3::clear_depth(float param_1)

{
  if (gles_over_gl == '\0') {
                    /* WARNING: Could not recover jumptable at 0x001008a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_glad_glClearDepthf)();
    return;
  }
  (*_glad_glClearDepth)((double)param_1);
  if (gles_over_gl != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001008df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glClearDepthf)(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerGLES3::RasterizerGLES3() */

void __thiscall RasterizerGLES3::RasterizerGLES3(RasterizerGLES3 *this)

{
  long *plVar1;
  char *pcVar2;
  Object *pOVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Config *this_00;
  Utilities *this_01;
  TextureStorage *this_02;
  MaterialStorage *this_03;
  MeshStorage *this_04;
  ParticlesStorage *this_05;
  LightStorage *this_06;
  CopyEffects *this_07;
  CubemapFilter *this_08;
  Glow *this_09;
  PostEffects *this_10;
  FeedEffects *this_11;
  undefined8 *puVar8;
  RasterizerCanvasGLES3 *this_12;
  RasterizerSceneGLES3 *this_13;
  code *pcVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  char *local_80;
  Object *local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RendererCompositor::RendererCompositor((RendererCompositor *)this);
  bVar11 = gles_over_gl == '\0';
  *(undefined ***)this = &PTR_get_utilities_00103390;
  pcVar9 = _glad_eglGetProcAddress;
  *(undefined8 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (RasterizerGLES3)0x0;
  singleton = this;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  if (bVar11) {
    if (pcVar9 == (code *)0x0) {
LAB_00100f00:
      iVar6 = gladLoaderLoadGLES2();
      if (iVar6 == 0) goto LAB_00100eab;
    }
    else {
      iVar6 = gladLoadGLES2(0x100000);
      if (iVar6 == 0) goto LAB_00100e95;
    }
joined_r0x00100f15:
    if (gles_over_gl == '\0') {
LAB_001009b6:
      OS::get_singleton();
      cVar5 = OS::is_stdout_verbose();
      if ((cVar5 != '\0') &&
         ((pcVar9 = (code *)(*_glad_eglGetProcAddress)("glDebugMessageCallback"),
          pcVar9 != (code *)0x0 ||
          (pcVar9 = (code *)(*_glad_eglGetProcAddress)("glDebugMessageCallbackKHR"),
          pcVar9 != (code *)0x0)))) {
        Variant::Variant((Variant *)local_58,"godot: ENABLING GL DEBUG");
        stringify_variants((Variant *)&local_68);
        __print_line((String_conflict *)&local_68);
        pcVar2 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        (*_glad_glEnable)(0x8242);
        (*pcVar9)(_gl_debug_print,0);
        (*_glad_glEnable)(0x92e0);
      }
    }
    else {
      OS::get_singleton();
      cVar5 = OS::is_stdout_verbose();
      if (cVar5 != '\0') {
        if (_GLAD_GL_ARB_debug_output == 0) {
          Variant::Variant((Variant *)local_58,"OpenGL debugging not supported!");
          stringify_variants((Variant *)&local_68);
          __print_line((String_conflict *)&local_68);
          pcVar2 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          (*_glad_glEnable)(0x8242);
          (*_glad_glDebugMessageCallbackARB)(_gl_debug_print,0);
          (*_glad_glEnable)(0x92e0);
        }
      }
      if (gles_over_gl == '\0') goto LAB_001009b6;
      OS::get_singleton();
      cVar5 = OS::is_stdout_verbose();
      if ((cVar5 != '\0') && (_GLAD_GL_ARB_debug_output != 0)) {
        (*_glad_glDebugMessageControlARB)(0x8246,0x824c,0x9146,0,0,1);
        (*_glad_glDebugMessageControlARB)(0x8246,0x824d,0x9146,0,0,1);
        (*_glad_glDebugMessageControlARB)(0x8246,0x824e,0x9146,0,0,1);
        (*_glad_glDebugMessageControlARB)(0x8246,0x824f,0x9146,0,0,1);
        (*_glad_glDebugMessageControlARB)(0x8246,0x8250,0x9146,0,0,1);
        (*_glad_glDebugMessageControlARB)(0x8246,0x8251,0x9146,0,0,1);
      }
      if (gles_over_gl == '\0') goto LAB_001009b6;
    }
    Engine::get_singleton();
    Engine::get_shader_cache_path();
    if ((local_80 == (char *)0x0) || (*(uint *)(local_80 + -8) < 2)) {
      local_60 = 7;
      local_68 = "user://";
      String::parse_latin1((StrRange *)&local_80);
    }
    DirAccess::open((String_conflict *)&local_78,(Error *)&local_80);
    pOVar3 = local_78;
    if (local_78 == (Object *)0x0) {
      operator+((char *)&local_68,
                (String_conflict *)
                "Can\'t create shader cache folder, no shader caching will happen: ");
      uVar10 = 0x14f;
LAB_00101098:
      _err_print_error("RasterizerGLES3","drivers/gles3/rasterizer_gles3.cpp",uVar10,
                       (String_conflict *)&local_68,0,0);
      pcVar2 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
    }
    else {
      pcVar9 = *(code **)(*(long *)local_78 + 0x1a8);
      local_68 = "shader_cache";
      local_70 = 0;
      local_60 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      iVar6 = (*pcVar9)(pOVar3);
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      pOVar3 = local_78;
      if (iVar6 != 0) {
        pcVar9 = *(code **)(*(long *)local_78 + 0x1b8);
        local_68 = "shader_cache";
        local_70 = 0;
        local_60 = 0xc;
        String::parse_latin1((StrRange *)&local_70);
        iVar6 = (*pcVar9)(pOVar3);
        lVar7 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        if (iVar6 != 0) {
          operator+((char *)&local_68,
                    (String_conflict *)
                    "Can\'t create shader cache folder, no shader caching will happen: ");
          uVar10 = 0x156;
          goto LAB_00101098;
        }
      }
      local_68 = "shader_cache";
      local_70 = 0;
      local_60 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      String::path_join((String_conflict *)&local_68);
      pcVar4 = local_68;
      pcVar2 = local_80;
      if (local_80 == local_68) {
        if (local_80 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
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
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        local_80 = local_68;
      }
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_68,"rendering/shader_compiler/shader_cache/enabled",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      bVar11 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      lVar7 = Engine::get_singleton();
      pcVar2 = local_80;
      if ((*(char *)(lVar7 + 0xc0) != '\0') || (bVar11)) {
        if ((local_80 != (char *)0x0) && (1 < *(uint *)(local_80 + -8))) {
          ShaderGLES3::set_shader_cache_dir((String_conflict *)&local_80);
        }
      }
      else if (local_80 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
        local_80 = (char *)0x0;
      }
    }
    if (((local_78 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_78), cVar5 != '\0')) {
      (**(code **)(*(long *)local_78 + 0x140))(local_78);
      Memory::free_static(local_78,false);
    }
    pcVar2 = local_80;
    if (local_80 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    this_00 = (Config *)operator_new(0x90,"");
    GLES3::Config::Config(this_00);
    *(Config **)(this + 0x30) = this_00;
    this_01 = (Utilities *)operator_new(0xe58,"");
    GLES3::Utilities::Utilities(this_01);
    *(Utilities **)(this + 0x38) = this_01;
    this_02 = (TextureStorage *)operator_new(0x340,"");
    GLES3::TextureStorage::TextureStorage(this_02);
    *(TextureStorage **)(this + 0x40) = this_02;
    this_03 = (MaterialStorage *)operator_new(0x1a98,"");
    GLES3::MaterialStorage::MaterialStorage(this_03);
    *(MaterialStorage **)(this + 0x48) = this_03;
    this_04 = (MeshStorage *)operator_new(0x310,"");
    GLES3::MeshStorage::MeshStorage(this_04);
    *(MeshStorage **)(this + 0x50) = this_04;
    this_05 = (ParticlesStorage *)operator_new(0x270,"");
    GLES3::ParticlesStorage::ParticlesStorage(this_05);
    *(ParticlesStorage **)(this + 0x58) = this_05;
    this_06 = (LightStorage *)operator_new(0x2f0,"");
    GLES3::LightStorage::LightStorage(this_06);
    *(LightStorage **)(this + 0x60) = this_06;
    this_07 = (CopyEffects *)operator_new(0x148,"");
    GLES3::CopyEffects::CopyEffects(this_07);
    *(CopyEffects **)(this + 0x78) = this_07;
    this_08 = (CubemapFilter *)operator_new(0x148,"");
    GLES3::CubemapFilter::CubemapFilter(this_08);
    *(CubemapFilter **)(this + 0x80) = this_08;
    this_09 = (Glow *)operator_new(0x158,"");
    GLES3::Glow::Glow(this_09);
    *(Glow **)(this + 0x88) = this_09;
    this_10 = (PostEffects *)operator_new(0x140,"");
    GLES3::PostEffects::PostEffects(this_10);
    *(PostEffects **)(this + 0x90) = this_10;
    this_11 = (FeedEffects *)operator_new(0x140,"");
    GLES3::FeedEffects::FeedEffects(this_11);
    *(FeedEffects **)(this + 0x98) = this_11;
    puVar8 = (undefined8 *)operator_new(8,"");
    *puVar8 = RasterizerCanvasGLES3::RasterizerCanvasGLES3;
    *(undefined8 **)(this + 0x68) = puVar8;
    puVar8 = (undefined8 *)operator_new(8,"");
    *puVar8 = RasterizerSceneGLES3::RasterizerSceneGLES3;
    *(undefined8 **)(this + 0x70) = puVar8;
    this_12 = (RasterizerCanvasGLES3 *)operator_new(0x200308,"");
    RasterizerCanvasGLES3::RasterizerCanvasGLES3(this_12);
    *(RasterizerCanvasGLES3 **)(this + 0xa0) = this_12;
    this_13 = (RasterizerSceneGLES3 *)operator_new(0x830,"");
    RasterizerSceneGLES3::RasterizerSceneGLES3(this_13);
    *(RasterizerSceneGLES3 **)(this + 0xa8) = this_13;
    if (*(char *)(*(long *)(this + 0x30) + 0x79) != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100e6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_glad_glDisable)(0x8db9);
        return;
      }
      goto LAB_001013bd;
    }
  }
  else {
    if (pcVar9 != (code *)0x0) {
      iVar6 = gladLoadGL(0x100000);
      if (iVar6 != 0) goto joined_r0x00100f15;
LAB_00100e95:
      if (gles_over_gl == '\0') goto LAB_00100f00;
    }
    iVar6 = gladLoaderLoadGL();
    if (iVar6 != 0) goto joined_r0x00100f15;
LAB_00100eab:
    _err_print_error("RasterizerGLES3","drivers/gles3/rasterizer_gles3.cpp",0x118,
                     "Condition \"!glad_loaded\" is true.","Error initializing GLAD.",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001013bd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerGLES3::_blit_render_target_to_screen(RID, int, Rect2 const&, unsigned int, bool) */

void __thiscall
RasterizerGLES3::_blit_render_target_to_screen
          (RasterizerGLES3 *this,ulong param_2,undefined8 param_3,float *param_4,uint param_5,
          char param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uVar9;
  ulong uVar8;
  uint uVar10;
  long in_FS_OFFSET;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  int local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = GLES3::TextureStorage::get_singleton();
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(lVar3 + 0x194))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 400)) * 0xf0 +
            *(long *)(*(long *)(lVar3 + 0x180) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 400)) * 8);
    if (*(int *)(lVar3 + 0xe8) == (int)(param_2 >> 0x20)) {
      local_4c = 0;
      lVar1 = *(long *)(lVar3 + 0x98);
      (*_glad_glGenFramebuffers)(1,&local_4c);
      (*_glad_glBindFramebuffer)(0x8ca8,local_4c);
      if (*(uint *)(lVar3 + 0x10) < 2) {
        uVar9 = 0;
        (*_glad_glFramebufferTexture2D)(0x8ca8,0x8ce0,0xde1,*(undefined4 *)(lVar3 + 0x24),0);
      }
      else {
        uVar4 = (ulong)param_5;
        (*_glad_glFramebufferTextureLayer)(0x8ca8,0x8ce0,*(undefined4 *)(lVar3 + 0x24),0,uVar4);
        uVar9 = (undefined4)(uVar4 >> 0x20);
      }
      (*_glad_glReadBuffer)(0x8ce0);
      uVar4 = (ulong)(uint)GLES3::TextureStorage::system_fbo;
      (*_glad_glBindFramebuffer)(0x8ca9,uVar4);
      uVar6 = (undefined4)(uVar4 >> 0x20);
      if (param_6 == '\0') {
LAB_00101568:
        uVar13 = *(undefined8 *)(param_4 + 2);
      }
      else {
        if ((*param_4 != 0.0) || (param_4[1] != 0.0)) {
LAB_00101520:
          uVar4 = (**(code **)(*GLES3::Utilities::singleton + 0xe0))();
          uVar6 = 0;
          (*_glad_glViewport)(0,0,uVar4 & 0xffffffff,uVar4 >> 0x20);
          (*_glad_glClearColor)();
          (*_glad_glClear)(0x4000);
          goto LAB_00101568;
        }
        uVar12 = Vector2i::operator_cast_to_Vector2((Vector2i *)(lVar3 + 8));
        if ((param_4[2] != (float)uVar12) ||
           (uVar13 = CONCAT44(param_4[3],param_4[2]), param_4[3] != (float)((ulong)uVar12 >> 0x20)))
        goto LAB_00101520;
      }
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) +
                          (float)((ulong)uVar13 >> 0x20),
                          (float)*(undefined8 *)param_4 + (float)uVar13);
      uVar12 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
      iVar5 = (int)((ulong)uVar12 >> 0x20);
      iVar2 = (int)uVar12;
      if (this[0x28] == (RasterizerGLES3)0x0) {
        uVar8 = CONCAT44(uVar9,(int)(float)iVar2);
        if (lVar1 == 0) {
          uVar4 = CONCAT44(uVar6,(int)param_4[1]);
          fVar11 = *param_4;
LAB_001015c6:
          fVar14 = (float)iVar5;
        }
        else {
          fVar14 = param_4[1];
          uVar10 = (uint)(float)iVar5;
          fVar11 = *param_4;
LAB_001016c7:
          uVar4 = (ulong)uVar10;
        }
        uVar7 = uVar8 & 0xffffffff;
        uVar8 = CONCAT44((int)(uVar8 >> 0x20),(int)fVar11);
        uVar10 = (int)fVar14;
      }
      else {
        fVar11 = *param_4;
        fVar14 = param_4[1];
        uVar7 = (ulong)(uint)(int)fVar11;
        uVar4 = CONCAT44(uVar6,(int)fVar14);
        uVar10 = (uint)(float)iVar5;
        uVar8 = CONCAT44(uVar9,(int)(float)iVar2);
        if (iVar2 <= iVar5) {
          if (lVar1 != 0) goto LAB_001016c7;
          goto LAB_001015c6;
        }
        if (lVar1 == 0) {
          uVar4 = (ulong)uVar10;
          uVar10 = (int)fVar14;
        }
      }
      (*_glad_glBlitFramebuffer)
                (0,0,*(undefined4 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0xc),uVar8,uVar10,uVar7,
                 uVar4,0x4000,0x2600);
      if (local_4c != 0) {
        (*_glad_glBindFramebuffer)(0x8ca8,(uint)GLES3::TextureStorage::system_fbo);
        (*_glad_glDeleteFramebuffers)(1,&local_4c);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010177b;
    }
    if (*(int *)(lVar3 + 0xe8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_blit_render_target_to_screen","drivers/gles3/rasterizer_gles3.cpp",0x184,
                     "Parameter \"rt\" is null.",0,0);
    return;
  }
LAB_0010177b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RasterizerGLES3::blit_render_targets_to_screen(int, BlitToScreen const*, int) */

void RasterizerGLES3::blit_render_targets_to_screen(int param_1,BlitToScreen *param_2,int param_3)

{
  undefined8 uVar1;
  int in_ECX;
  undefined4 in_register_00000014;
  Rect2i *this;
  int iVar2;
  undefined4 in_register_0000003c;
  undefined4 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < in_ECX) {
    this = (Rect2i *)(CONCAT44(in_register_00000014,param_3) + 0x18);
    iVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(this + -0x18);
      local_58[0] = Rect2i::operator_cast_to_Rect2(this);
      bVar4 = iVar2 == 0;
      uVar3 = 0;
      if (this[0x10] != (Rect2i)0x0) {
        uVar3 = *(undefined4 *)(this + 0x14);
      }
      iVar2 = iVar2 + 1;
      this = this + 0x50;
      _blit_render_target_to_screen
                ((RasterizerGLES3 *)CONCAT44(in_register_0000003c,param_1),uVar1,
                 (ulong)param_2 & 0xffffffff,local_58,uVar3,bVar4);
    } while (in_ECX != iVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RasterizerGLES3::initialize() */

void __thiscall RasterizerGLES3::initialize(RasterizerGLES3 *this)

{
  long lVar1;
  char *pcVar2;
  String_conflict *pSVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar3 = (String_conflict *)Engine::get_singleton();
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x1208))(&local_68,plVar4);
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x1210))(&local_70,plVar4);
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x1220))(&local_78,plVar4);
  local_58 = "OpenGL API %s - Compatibility - Using Device: %s - %s";
  local_60 = 0;
  local_50 = 0x35;
  String::parse_latin1((StrRange *)&local_60);
  vformat<String,String,String>(&local_58,(StrRange *)&local_60,&local_78,&local_70,&local_68);
  Engine::print_header(pSVar3);
  pcVar2 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)(local_58 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar4 = (long *)(local_60 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar4 = (long *)(local_78 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar4 = (long *)(local_70 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar4 = (long *)(local_68 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  this[0x28] = *(RasterizerGLES3 *)(GLES3::Config::singleton + 0x8b);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RasterizerGLES3::get_utilities() */

undefined8 __thiscall RasterizerGLES3::get_utilities(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x38);
}



/* RasterizerGLES3::get_light_storage() */

undefined8 __thiscall RasterizerGLES3::get_light_storage(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* RasterizerGLES3::get_material_storage() */

undefined8 __thiscall RasterizerGLES3::get_material_storage(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x48);
}



/* RasterizerGLES3::get_mesh_storage() */

undefined8 __thiscall RasterizerGLES3::get_mesh_storage(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x50);
}



/* RasterizerGLES3::get_particles_storage() */

undefined8 __thiscall RasterizerGLES3::get_particles_storage(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x58);
}



/* RasterizerGLES3::get_texture_storage() */

undefined8 __thiscall RasterizerGLES3::get_texture_storage(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x40);
}



/* RasterizerGLES3::get_gi() */

undefined8 __thiscall RasterizerGLES3::get_gi(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x68);
}



/* RasterizerGLES3::get_fog() */

undefined8 __thiscall RasterizerGLES3::get_fog(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x70);
}



/* RasterizerGLES3::get_canvas() */

undefined8 __thiscall RasterizerGLES3::get_canvas(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0xa0);
}



/* RasterizerGLES3::get_scene() */

undefined8 __thiscall RasterizerGLES3::get_scene(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0xa8);
}



/* RasterizerGLES3::get_frame_number() const */

undefined8 __thiscall RasterizerGLES3::get_frame_number(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x10);
}



/* RasterizerGLES3::get_frame_delta_time() const */

double __thiscall RasterizerGLES3::get_frame_delta_time(RasterizerGLES3 *this)

{
  return (double)*(float *)(this + 0x18);
}



/* RasterizerGLES3::get_total_time() const */

undefined8 __thiscall RasterizerGLES3::get_total_time(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x20);
}



/* RasterizerGLES3::can_create_resources_async() const */

undefined8 RasterizerGLES3::can_create_resources_async(void)

{
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00102be8) */
/* WARNING: Removing unreachable block (ram,0x00102d18) */
/* WARNING: Removing unreachable block (ram,0x00102ee0) */
/* WARNING: Removing unreachable block (ram,0x00102d24) */
/* WARNING: Removing unreachable block (ram,0x00102d2e) */
/* WARNING: Removing unreachable block (ram,0x00102ec0) */
/* WARNING: Removing unreachable block (ram,0x00102d3a) */
/* WARNING: Removing unreachable block (ram,0x00102d44) */
/* WARNING: Removing unreachable block (ram,0x00102ea0) */
/* WARNING: Removing unreachable block (ram,0x00102d50) */
/* WARNING: Removing unreachable block (ram,0x00102d5a) */
/* WARNING: Removing unreachable block (ram,0x00102e80) */
/* WARNING: Removing unreachable block (ram,0x00102d66) */
/* WARNING: Removing unreachable block (ram,0x00102d70) */
/* WARNING: Removing unreachable block (ram,0x00102e60) */
/* WARNING: Removing unreachable block (ram,0x00102d7c) */
/* WARNING: Removing unreachable block (ram,0x00102d86) */
/* WARNING: Removing unreachable block (ram,0x00102e40) */
/* WARNING: Removing unreachable block (ram,0x00102d92) */
/* WARNING: Removing unreachable block (ram,0x00102d9c) */
/* WARNING: Removing unreachable block (ram,0x00102e20) */
/* WARNING: Removing unreachable block (ram,0x00102da4) */
/* WARNING: Removing unreachable block (ram,0x00102dba) */
/* WARNING: Removing unreachable block (ram,0x00102dc6) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String_conflict * vformat<unsigned_int>(String_conflict *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x00103078) */
/* WARNING: Removing unreachable block (ram,0x001031a8) */
/* WARNING: Removing unreachable block (ram,0x00103320) */
/* WARNING: Removing unreachable block (ram,0x001031b4) */
/* WARNING: Removing unreachable block (ram,0x001031be) */
/* WARNING: Removing unreachable block (ram,0x00103302) */
/* WARNING: Removing unreachable block (ram,0x001031ca) */
/* WARNING: Removing unreachable block (ram,0x001031d4) */
/* WARNING: Removing unreachable block (ram,0x001032e4) */
/* WARNING: Removing unreachable block (ram,0x001031e0) */
/* WARNING: Removing unreachable block (ram,0x001031ea) */
/* WARNING: Removing unreachable block (ram,0x001032c6) */
/* WARNING: Removing unreachable block (ram,0x001031f6) */
/* WARNING: Removing unreachable block (ram,0x00103200) */
/* WARNING: Removing unreachable block (ram,0x001032a8) */
/* WARNING: Removing unreachable block (ram,0x0010320c) */
/* WARNING: Removing unreachable block (ram,0x00103216) */
/* WARNING: Removing unreachable block (ram,0x0010328a) */
/* WARNING: Removing unreachable block (ram,0x0010321e) */
/* WARNING: Removing unreachable block (ram,0x00103228) */
/* WARNING: Removing unreachable block (ram,0x0010326f) */
/* WARNING: Removing unreachable block (ram,0x00103230) */
/* WARNING: Removing unreachable block (ram,0x00103245) */
/* WARNING: Removing unreachable block (ram,0x00103251) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4,
          String_conflict *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



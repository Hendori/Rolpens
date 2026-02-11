
/* GLES3::FeedEffects::get_singleton() */

undefined8 GLES3::FeedEffects::get_singleton(void)

{
  return singleton;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::FeedEffects::~FeedEffects() */

void __thiscall GLES3::FeedEffects::~FeedEffects(FeedEffects *this)

{
  singleton = 0;
  (*_glad_glDeleteBuffers)(1,this + 0x138);
  (*_glad_glDeleteVertexArrays)(1,this + 0x13c);
  ShaderGLES3::version_free(this,*(undefined8 *)(this + 0x130));
  *(undefined ***)this = &PTR__init_001017e0;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* transform3D_from_mat4(float const*) */

float * transform3D_from_mat4(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_RSI;
  
  fVar1 = in_RSI[6];
  fVar2 = in_RSI[2];
  fVar3 = in_RSI[9];
  fVar4 = in_RSI[0xc];
  fVar5 = in_RSI[4];
  fVar6 = in_RSI[0xd];
  fVar7 = in_RSI[0xe];
  param_1[4] = in_RSI[5];
  param_1[5] = fVar3;
  param_1[6] = fVar2;
  param_1[7] = fVar1;
  fVar1 = in_RSI[8];
  fVar2 = in_RSI[1];
  param_1[8] = in_RSI[10];
  param_1[9] = fVar4;
  param_1[10] = fVar6;
  param_1[0xb] = fVar7;
  *param_1 = *in_RSI;
  param_1[1] = fVar5;
  param_1[2] = fVar1;
  param_1[3] = fVar2;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::FeedEffects::draw_screen_triangle() */

void __thiscall GLES3::FeedEffects::draw_screen_triangle(FeedEffects *this)

{
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x13c));
  (*_glad_glDrawArrays)(4,0,3);
                    /* WARNING: Could not recover jumptable at 0x0010010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glBindVertexArray)(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::FeedEffects::FeedEffects() */

void __thiscall GLES3::FeedEffects::FeedEffects(FeedEffects *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderGLES3::ShaderGLES3((ShaderGLES3 *)this);
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined ***)this = &PTR__init_001017e0;
  *(undefined8 *)(this + 0x138) = 0;
  local_98 = &_LC6;
  local_a0 = 0;
  local_90 = 0;
  singleton = this;
  String::parse_latin1((StrRange *)&local_a0);
  ShaderGLES3::initialize((String *)this,(int)(StrRange *)&local_a0);
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  uVar6 = ShaderGLES3::version_create();
  local_a0 = 0;
  *(ulong *)(this + 0x130) = uVar6;
  if (*(int *)(this + 0x120) < 1) {
    _err_print_index_error
              ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,0,
               (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
    goto LAB_0010041f;
  }
  if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x54))) {
    uVar11 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
             *(long *)(*(long *)(this + 0x40) +
                      ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
    if (*(int *)(uVar11 + 0x78) == (int)(uVar6 >> 0x20)) {
      if ((*(int *)(uVar11 + 0x68) == 0) &&
         (ShaderGLES3::_initialize_version((Version *)this), *(int *)(uVar11 + 0x68) == 0)) {
LAB_001005a7:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar5 = local_a0;
      plVar1 = *(long **)(uVar11 + 0x70);
      uVar2 = *(uint *)(plVar1 + 3);
      uVar7 = (ulong)uVar2;
      lVar3 = plVar1[2];
      uVar6 = local_a0 * 0x3ffff - 1;
      uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
      uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
      uVar6 = uVar6 >> 0x16 ^ uVar6;
      uVar10 = uVar6 & 0xffffffff;
      if ((int)uVar6 == 0) {
        uVar10 = 1;
      }
      uVar6 = uVar10 % uVar7;
      uVar9 = *(uint *)(lVar3 + uVar6 * 4);
      if (uVar9 != 0) {
        uVar8 = 0;
        while ((uVar9 != (uint)uVar10 || (local_a0 != *(long *)(plVar1[1] + uVar6 * 8)))) {
          uVar8 = uVar8 + 1;
          uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
          uVar9 = *(uint *)(lVar3 + uVar6 * 4);
          if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8))
          goto LAB_001005f0;
        }
        puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
        if (puVar12 != (undefined4 *)0x0) {
          if (*(char *)(puVar12 + 0xc) == '\0') goto LAB_00100404;
          uVar6 = *(long *)(this + 0x110) * 0x3ffff - 1;
          uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
          uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
          uVar6 = uVar6 >> 0x16 ^ uVar6;
          uVar11 = uVar6 & 0xffffffff;
          if ((int)uVar6 == 0) {
            uVar11 = 1;
          }
          uVar8 = 0;
          uVar6 = uVar11 % uVar7;
          uVar9 = *(uint *)(lVar3 + uVar6 * 4);
          if (uVar9 == 0) goto LAB_00100548;
          goto LAB_001003e1;
        }
      }
LAB_001005f0:
      local_68 = 0;
      local_98 = (undefined *)0x0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      ShaderGLES3::_compile_specialization
                ((Specialization *)this,(uint)(Specialization *)&local_98,(Version *)0x0,uVar11);
      if ((*(int *)(uVar11 + 0x68) == 0) ||
         (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
          ::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                     **)(uVar11 + 0x70),(ulong *)&local_a0,(Specialization *)&local_98),
         *(int *)(uVar11 + 0x68) == 0)) goto LAB_001005a7;
      plVar1 = *(long **)(uVar11 + 0x70);
      uVar2 = *(uint *)(plVar1 + 3);
      uVar6 = uVar10 % (ulong)uVar2;
      uVar9 = *(uint *)(plVar1[2] + uVar6 * 4);
      if (uVar9 != 0) {
        uVar8 = 0;
LAB_001006d9:
        if (((uint)uVar10 != uVar9) || (lVar5 != *(long *)(plVar1[1] + uVar6 * 8)))
        goto LAB_001006a0;
        puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
        if (this[0xa0] != (FeedEffects)0x0) {
          ShaderGLES3::_save_to_cache((Version *)this);
        }
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
LAB_001003fb:
        if (puVar12 != (undefined4 *)0x0) {
LAB_00100404:
          if (*(char *)((long)puVar12 + 0x31) != '\0') {
            (*_glad_glUseProgram)(*puVar12);
            *(undefined4 **)(this + 0x128) = puVar12;
            goto LAB_0010041f;
          }
        }
        goto LAB_00100548;
      }
LAB_0010052e:
      if (this[0xa0] == (FeedEffects)0x0) {
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
      }
      else {
        ShaderGLES3::_save_to_cache((Version *)this);
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
      }
      goto LAB_00100548;
    }
    if (*(int *)(uVar11 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                   "Parameter \"version\" is null.",0,0);
  goto LAB_0010041f;
LAB_001006a0:
  uVar8 = uVar8 + 1;
  uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar2;
  uVar9 = *(uint *)(plVar1[2] + uVar6 * 4);
  if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8)) goto LAB_0010052e;
  goto LAB_001006d9;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
    uVar9 = *(uint *)(lVar3 + uVar6 * 4);
    if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8)) break;
LAB_001003e1:
    if ((uVar9 == (uint)uVar11) && (*(long *)(this + 0x110) == *(long *)(plVar1[1] + uVar6 * 8))) {
      puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
      goto LAB_001003fb;
    }
  }
LAB_00100548:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_0010041f:
  (*_glad_glGenBuffers)(1,this + 0x138);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x138));
  local_48 = _LC21;
  local_58 = __LC20;
  uStack_54 = _UNK_00101a74;
  uStack_50 = _UNK_00101a78;
  uStack_4c = _UNK_00101a7c;
  (*_glad_glBufferData)(0x8892,0x18,&local_58,0x88e4);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenVertexArrays)(1,this + 0x13c);
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x13c));
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x138));
  (*_glad_glVertexAttribPointer)(0,2,0x1406,0,8,0);
  (*_glad_glEnableVertexAttribArray)(0);
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindBuffer)(0x8892,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::FeedEffects::draw() */

void __thiscall GLES3::FeedEffects::draw(FeedEffects *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  long local_40;
  
  uVar6 = *(ulong *)(this + 0x130);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  if (*(int *)(this + 0x120) < 1) {
    _err_print_index_error
              ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,0,
               (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
    goto LAB_00100aa5;
  }
  if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x54))) {
    uVar12 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
             *(long *)(*(long *)(this + 0x40) +
                      ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
    if (*(int *)(uVar12 + 0x78) == (int)(uVar6 >> 0x20)) {
      if ((*(int *)(uVar12 + 0x68) == 0) &&
         (ShaderGLES3::_initialize_version((Version *)this), *(int *)(uVar12 + 0x68) == 0)) {
LAB_00100af8:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar5 = local_80;
      plVar2 = *(long **)(uVar12 + 0x70);
      uVar1 = *(uint *)(plVar2 + 3);
      uVar8 = (ulong)uVar1;
      lVar3 = plVar2[2];
      uVar6 = local_80 * 0x3ffff - 1;
      uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
      uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
      uVar6 = uVar6 >> 0x16 ^ uVar6;
      uVar10 = uVar6 & 0xffffffff;
      if ((int)uVar6 == 0) {
        uVar10 = 1;
      }
      uVar6 = uVar10 % uVar8;
      uVar11 = *(uint *)(lVar3 + uVar6 * 4);
      if (uVar11 != 0) {
        uVar9 = 0;
        while ((uVar11 != (uint)uVar10 || (local_80 != *(ulong *)(plVar2[1] + uVar6 * 8)))) {
          uVar9 = uVar9 + 1;
          uVar6 = (ulong)((int)uVar6 + 1) % uVar8;
          uVar11 = *(uint *)(lVar3 + uVar6 * 4);
          if ((uVar11 == 0) || (((uVar1 + (int)uVar6) - uVar11 % uVar1) % uVar1 < uVar9))
          goto LAB_00100b78;
        }
        puVar13 = (undefined4 *)(*plVar2 + uVar6 * 0x38);
        if (puVar13 != (undefined4 *)0x0) {
          if (*(char *)(puVar13 + 0xc) == '\0') goto LAB_00100a3c;
          uVar6 = *(long *)(this + 0x110) * 0x3ffff - 1;
          uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
          uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
          uVar6 = uVar6 >> 0x16 ^ uVar6;
          uVar12 = uVar6 & 0xffffffff;
          if ((int)uVar6 == 0) {
            uVar12 = 1;
          }
          uVar9 = 0;
          uVar6 = uVar12 % uVar8;
          uVar11 = *(uint *)(lVar3 + uVar6 * 4);
          if (uVar11 == 0) goto LAB_00100a98;
          goto LAB_00100a1d;
        }
      }
LAB_00100b78:
      local_48 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      ShaderGLES3::_compile_specialization
                ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x0,uVar12);
      if ((*(int *)(uVar12 + 0x68) == 0) ||
         (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
          ::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                     **)(uVar12 + 0x70),&local_80,(Specialization *)&local_78),
         *(int *)(uVar12 + 0x68) == 0)) goto LAB_00100af8;
      plVar2 = *(long **)(uVar12 + 0x70);
      uVar1 = *(uint *)(plVar2 + 3);
      uVar6 = uVar10 % (ulong)uVar1;
      uVar11 = *(uint *)(plVar2[2] + uVar6 * 4);
      if (uVar11 != 0) {
        uVar9 = 0;
LAB_00100c61:
        if (((uint)uVar10 != uVar11) || (uVar5 != *(ulong *)(plVar2[1] + uVar6 * 8)))
        goto LAB_00100c28;
        puVar13 = (undefined4 *)(*plVar2 + uVar6 * 0x38);
        if (this[0xa0] != (FeedEffects)0x0) {
          ShaderGLES3::_save_to_cache((Version *)this);
        }
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_00100a37:
        if (puVar13 != (undefined4 *)0x0) {
LAB_00100a3c:
          if (*(char *)((long)puVar13 + 0x31) != '\0') {
            (*_glad_glUseProgram)(*puVar13);
            *(undefined4 **)(this + 0x128) = puVar13;
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              draw_screen_triangle(this);
              return;
            }
            goto LAB_00100d77;
          }
        }
        goto LAB_00100a98;
      }
LAB_00100a7d:
      if (this[0xa0] == (FeedEffects)0x0) {
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
      }
      else {
        ShaderGLES3::_save_to_cache((Version *)this);
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
      }
      goto LAB_00100a98;
    }
    if (*(int *)(uVar12 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                   "Parameter \"version\" is null.",0,0);
  goto LAB_00100aa5;
LAB_00100c28:
  uVar9 = uVar9 + 1;
  uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar1;
  uVar11 = *(uint *)(plVar2[2] + uVar6 * 4);
  if ((uVar11 == 0) || (((uVar1 + (int)uVar6) - uVar11 % uVar1) % uVar1 < uVar9)) goto LAB_00100a7d;
  goto LAB_00100c61;
  while( true ) {
    uVar9 = uVar9 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % uVar8;
    uVar11 = *(uint *)(lVar3 + uVar6 * 4);
    if ((uVar11 == 0) || (((uVar1 + (int)uVar6) - uVar11 % uVar1) % uVar1 < uVar9)) break;
LAB_00100a1d:
    if ((uVar11 == (uint)uVar12) && (*(long *)(this + 0x110) == *(long *)(plVar2[1] + uVar6 * 8))) {
      puVar13 = (undefined4 *)(*plVar2 + uVar6 * 0x38);
      goto LAB_00100a37;
    }
  }
LAB_00100a98:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00100aa5:
  pcVar7 = (char *)OS::get_singleton();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    OS::print(pcVar7,
              "Godot : FeedShaderGLES3 Could not bind version_bind_shader USE_EXTERNAL_SAMPLER");
    return;
  }
LAB_00100d77:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FeedShaderGLES3::~FeedShaderGLES3() */

void __thiscall FeedShaderGLES3::~FeedShaderGLES3(FeedShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_001017e0;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* FeedShaderGLES3::~FeedShaderGLES3() */

void __thiscall FeedShaderGLES3::~FeedShaderGLES3(FeedShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_001017e0;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  operator_delete(this,0x130);
  return;
}



/* FeedShaderGLES3::_init() */

void __thiscall FeedShaderGLES3::_init(FeedShaderGLES3 *this)

{
  ShaderGLES3::_setup((char *)this,
                      "\nlayout(location = 0) in vec2 vertex_attrib;\n\nout vec2 uv_interp;\n\n\nvoid main() {\n\tuv_interp = vertex_attrib * 0.5 + 0.5;\n\tgl_Position = vec4(vertex_attrib, 1.0, 1.0);\n}\n\n/* clang-format off */\n"
                      ,
                      "\nlayout(location = 0) out vec4 frag_color;\nin vec2 uv_interp;\n\n/* clang-format on */\n#ifdef USE_EXTERNAL_SAMPLER\nuniform samplerExternalOES sourceFeed; // texunit:0\n#else\nuniform sampler2D sourceFeed; // texunit:0\n#endif\n\nvoid main() {\n\tvec4 color = texture(sourceFeed, uv_interp);\n\n\tfrag_color = color;\n}\n"
                      ,0x100dd5,(char **)0x0,(int)_init()::_uniform_strings,(UBOPair *)0x0,
                      (int)_init()::_ubo_pairs,(Feedback *)0x0,(int)_init()::_feedbacks,
                      (TexUnitPair *)0x1,0x101a30,(Specialization *)0x1,0x101a10,(char **)0x1);
  return;
}



/* ShaderGLES3::Version::Specialization::~Specialization() */

void __thiscall ShaderGLES3::Version::Specialization::~Specialization(Specialization *this)

{
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (*(int *)(this + 0x20) != 0) {
      *(undefined4 *)(this + 0x20) = 0;
    }
    Memory::free_static(*(void **)(this + 0x28),false);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    Memory::free_static(*(void **)(this + 0x18),false);
    return;
  }
  return;
}



/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::_insert_with_hash(unsigned int, unsigned long const&,
   ShaderGLES3::Version::Specialization const&) [clone .isra.0] */

void __thiscall
OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
::_insert_with_hash(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                    *this,uint param_1,ulong *param_2,Specialization *param_3)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  long in_FS_OFFSET;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long local_a0;
  undefined2 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_68;
  uint uStack_64;
  long local_60;
  ulong local_58;
  long local_50;
  undefined2 local_48;
  long local_40;
  
  uVar29 = *(undefined8 *)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uVar14 = (ulong)param_1 % (ulong)*(uint *)(this + 0x18);
  local_80 = *(undefined4 *)(param_3 + 8);
  uVar9 = *(uint *)(param_3 + 0x10);
  local_78 = uVar29;
  local_70 = local_80;
  if (uVar9 != 0) {
    uVar8 = uVar9 - 1 | uVar9 - 1 >> 1;
    uVar8 = uVar8 >> 2 | uVar8;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 >> 8 | uVar8;
    uStack_64 = (uVar8 >> 0x10 | uVar8) + 1;
    local_68 = 0;
    local_60 = Memory::realloc_static((void *)0x0,(ulong)uStack_64 * 4,false);
    if (local_60 == 0) goto LAB_001013b5;
    local_68 = uVar9;
    if (*(int *)(param_3 + 0x10) != 0) {
      lVar19 = *(long *)(param_3 + 0x18);
      lVar12 = 0;
      do {
        *(undefined4 *)(local_60 + lVar12 * 4) = *(undefined4 *)(lVar19 + lVar12 * 4);
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(param_3 + 0x10));
    }
  }
  local_58 = 0;
  iVar3 = *(int *)(param_3 + 0x20);
  local_50 = 0;
  if (iVar3 != 0) {
    uVar9 = iVar3 - 1U | iVar3 - 1U >> 1;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 >> 4 | uVar9;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = (uVar9 >> 0x10 | uVar9) + 1;
    local_58 = (ulong)uVar9 << 0x20;
    local_50 = Memory::realloc_static((void *)0x0,(ulong)uVar9 * 4,false);
    if (local_50 == 0) goto LAB_001013b5;
    local_58 = CONCAT44(local_58._4_4_,iVar3);
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar19 = *(long *)(param_3 + 0x28);
      lVar12 = 0;
      do {
        *(undefined4 *)(local_50 + lVar12 * 4) = *(undefined4 *)(lVar19 + lVar12 * 4);
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(param_3 + 0x20));
    }
  }
  local_48 = *(undefined2 *)(param_3 + 0x30);
  lVar12 = *(long *)(this + 0x10);
  lVar19 = uVar14 * 4;
  puVar15 = (uint *)(lVar12 + lVar19);
  lVar13 = *(long *)(this + 8);
  uVar9 = *puVar15;
  lVar5 = *(long *)this;
  if (uVar9 != 0) {
    bVar7 = false;
    uVar8 = 0;
    uVar10 = (ulong)*(uint *)(this + 0x18);
    local_a0 = local_50;
    puVar16 = param_2;
    lVar18 = local_60;
    uVar20 = local_80;
    uVar22 = uVar29;
    uVar24 = local_68;
    uVar26 = uStack_64;
    uVar28 = local_58;
    local_88 = local_48;
    do {
      uVar11 = (uint)((ulong)(uint)(((int)uVar10 + (int)uVar14) - (int)((ulong)uVar9 % uVar10)) %
                     uVar10);
      param_2 = puVar16;
      lVar17 = lVar18;
      uVar21 = uVar22;
      uVar23 = uVar24;
      uVar25 = uVar26;
      uVar27 = uVar28;
      if (uVar11 < uVar8) {
        *puVar15 = param_1;
        bVar7 = true;
        puVar1 = (undefined8 *)(lVar13 + uVar14 * 8);
        param_2 = (ulong *)*puVar1;
        *puVar1 = puVar16;
        puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x38);
        uVar4 = *(undefined4 *)(puVar1 + 1);
        uVar23 = *(uint *)(puVar1 + 2);
        uVar25 = *(uint *)((long)puVar1 + 0x14);
        *(undefined4 *)(puVar1 + 1) = uVar20;
        uVar27 = puVar1[4];
        *(uint *)(puVar1 + 2) = uVar24;
        *(uint *)((long)puVar1 + 0x14) = uVar26;
        uVar21 = *puVar1;
        lVar17 = puVar1[3];
        *puVar1 = uVar22;
        lVar19 = puVar1[5];
        uVar2 = *(undefined2 *)(puVar1 + 6);
        puVar1[5] = local_a0;
        puVar1[3] = lVar18;
        puVar1[4] = uVar28;
        *(undefined2 *)(puVar1 + 6) = local_88;
        uVar10 = (ulong)*(uint *)(this + 0x18);
        param_1 = uVar9;
        uVar20 = uVar4;
        uVar8 = uVar11;
        local_a0 = lVar19;
        local_88 = uVar2;
      }
      uVar8 = uVar8 + 1;
      uVar14 = (ulong)((int)uVar14 + 1) % uVar10;
      lVar19 = uVar14 * 4;
      puVar15 = (uint *)(lVar12 + lVar19);
      uVar9 = *puVar15;
      puVar16 = param_2;
      lVar18 = lVar17;
      uVar22 = uVar21;
      uVar24 = uVar23;
      uVar26 = uVar25;
      uVar28 = uVar27;
    } while (uVar9 != 0);
    if (bVar7) {
      local_50 = local_a0;
      local_48 = local_88;
      uVar29 = uVar21;
      local_80 = uVar20;
      local_78 = uVar21;
      local_70 = uVar20;
      local_60 = lVar17;
      local_58 = uVar27;
      local_68 = uVar23;
      uStack_64 = uVar25;
    }
  }
  uVar9 = local_68;
  *(ulong **)(lVar13 + uVar14 * 8) = param_2;
  puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x38);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = local_80;
  puVar1[3] = 0;
  *puVar1 = uVar29;
  if (local_68 != 0) {
    uVar8 = local_68 - 1 | local_68 - 1 >> 1;
    uVar8 = uVar8 >> 2 | uVar8;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 >> 8 | uVar8;
    uVar8 = (uVar8 >> 0x10 | uVar8) + 1;
    *(uint *)((long)puVar1 + 0x14) = uVar8;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar8 * 4,false);
    puVar1[3] = lVar12;
    if (lVar12 == 0) goto LAB_001013b5;
    *(uint *)(puVar1 + 2) = uVar9;
    lVar13 = 0;
    do {
      *(undefined4 *)(lVar12 + lVar13) = *(undefined4 *)(local_60 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar13 != (ulong)uVar9 << 2);
  }
  uVar14 = local_58;
  iVar3 = (int)local_58;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if ((int)local_58 != 0) {
    uVar9 = (int)local_58 - 1U >> 1 | (int)local_58 - 1U;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = (uVar9 >> 0x10 | uVar9) + 1;
    *(uint *)((long)puVar1 + 0x24) = uVar9;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar9 * 4,false);
    puVar1[5] = lVar12;
    if (lVar12 == 0) {
LAB_001013b5:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(int *)(puVar1 + 4) = iVar3;
    lVar13 = 0;
    do {
      *(undefined4 *)(lVar12 + lVar13) = *(undefined4 *)(local_50 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar13 != (uVar14 & 0xffffffff) << 2);
  }
  *(undefined2 *)(puVar1 + 6) = local_48;
  *(uint *)(*(long *)(this + 0x10) + lVar19) = param_1;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::insert(unsigned long const&,
   ShaderGLES3::Version::Specialization const&) */

void __thiscall
OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
::insert(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
         *this,ulong *param_1,Specialization *param_2)

{
  undefined8 *puVar1;
  Specialization *pSVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  Specialization *pSVar10;
  undefined8 *puVar11;
  
  uVar9 = *(uint *)(this + 0x18);
  if ((double)uVar9 * __LC5 < (double)(*(int *)(this + 0x1c) + 1)) {
    uVar4 = (ulong)(uVar9 * 2);
    *(undefined4 *)(this + 0x1c) = 0;
    if (uVar9 * 2 == 0) {
      uVar4 = 1;
    }
    puVar1 = *(undefined8 **)(this + 8);
    pSVar2 = *(Specialization **)this;
    *(int *)(this + 0x18) = (int)uVar4;
    puVar3 = *(uint **)(this + 0x10);
    uVar5 = Memory::alloc_static(uVar4 << 3,false);
    *(undefined8 *)(this + 8) = uVar5;
    uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x38,false);
    *(undefined8 *)this = uVar5;
    lVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    *(long *)(this + 0x10) = lVar6;
    if (*(int *)(this + 0x18) != 0) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x18));
    }
    if (uVar9 != 0) {
      puVar8 = puVar3;
      pSVar10 = pSVar2;
      puVar11 = puVar1;
      do {
        if (*puVar8 != 0) {
          _insert_with_hash(this,*puVar8,(ulong *)*puVar11,pSVar10);
          if (*(void **)(pSVar10 + 0x28) != (void *)0x0) {
            if (*(int *)(pSVar10 + 0x20) != 0) {
              *(undefined4 *)(pSVar10 + 0x20) = 0;
            }
            Memory::free_static(*(void **)(pSVar10 + 0x28),false);
          }
          if (*(void **)(pSVar10 + 0x18) != (void *)0x0) {
            if (*(int *)(pSVar10 + 0x10) != 0) {
              *(undefined4 *)(pSVar10 + 0x10) = 0;
            }
            Memory::free_static(*(void **)(pSVar10 + 0x18),false);
          }
        }
        puVar11 = puVar11 + 1;
        puVar8 = puVar8 + 1;
        pSVar10 = pSVar10 + 0x38;
      } while (puVar11 != puVar1 + uVar9);
      Memory::free_static(puVar1,false);
      Memory::free_static(pSVar2,false);
      Memory::free_static(puVar3,false);
    }
  }
  uVar4 = (long)*param_1 * 0x3ffff - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uVar4 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uVar9 = (uint)(uVar4 >> 0x16) ^ (uint)uVar4;
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  _insert_with_hash(this,uVar9,(ulong *)*param_1,param_2);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderGLES3::Version::Specialization::~Specialization() */

void __thiscall ShaderGLES3::Version::Specialization::~Specialization(Specialization *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FeedShaderGLES3::~FeedShaderGLES3() */

void __thiscall FeedShaderGLES3::~FeedShaderGLES3(FeedShaderGLES3 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


